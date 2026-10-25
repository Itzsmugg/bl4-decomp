// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14305edec FUN_14305edec body=81 status=ok
// SIG undefined FUN_14305edec(void)

void FUN_14305edec(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472f6c83(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14305ee3e FUN_14305ee3e body=38 status=ok
// SIG undefined FUN_14305ee3e(void)

undefined8 FUN_14305ee3e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14305ee64 FUN_14305ee64 body=491 status=ok
// SIG undefined FUN_14305ee64(void)

void FUN_14305ee64(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 **_Src;
  undefined1 *_Src_00;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((undefined1 **)CONCAT44(uStack_ac,local_b0) != (undefined1 **)0x0) {
      _Src = (undefined1 **)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145f1c5d2();
  local_b8 = &DAT_100000001;
  local_b0 = 1;
  FUN_1472f6e17(param_2,param_1 + 0x1c0,uVar1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14305f050 FUN_14305f050 body=229 status=ok
// SIG undefined FUN_14305f050(void)

void FUN_14305f050(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca56160,param_3);
  return;
}



// FUNCTION 14305f135 FUN_14305f135 body=81 status=ok
// SIG undefined FUN_14305f135(void)

void FUN_14305f135(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472f6eaf(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14305f186 FUN_14305f186 body=38 status=ok
// SIG undefined FUN_14305f186(void)

undefined8 FUN_14305f186(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14305f1ac FUN_14305f1ac body=1492 status=ok
// SIG undefined FUN_14305f1ac(void)

void FUN_14305f1ac(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar15 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar15 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb978;
  puVar15[3] = 0;
  *(int *)(puVar15 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x24) = 8;
  }
  else {
    puVar8 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar8 = uStack_160;
    }
    FUN_1446fe144(puVar15 + 2,(int)local_158,0);
    puVar11 = (undefined8 *)puVar15[3];
    if ((undefined8 *)puVar15[3] == (undefined8 *)0x0) {
      puVar11 = puVar15 + 2;
    }
    memcpy(puVar11,puVar8,(longlong)(int)local_158);
  }
  puVar15[0xd] = 0;
  puVar8 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar15 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x74) = 8;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = &uStack_150;
    }
    FUN_1446fe1b8(puVar15 + 5,iStack_108,0);
    puVar11 = (undefined8 *)puVar15[0xd];
    if ((undefined8 *)puVar15[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar15 + 5;
    }
    memcpy(puVar11,puVar8,(longlong)iStack_108 << 3);
    puVar8 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar15 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar15 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x84) = (undefined4)uStack_f4;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar8);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = 0;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2,&local_168);
  local_128 = DAT_14c9c0ea0;
  local_138 = DAT_14c9e7548;
  uStack_130 = DAT_14c9c0db0;
  local_110 = (uint)*(byte *)(param_1 + 0x1f8) * 2;
  local_168 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar12 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar10,lVar12,1);
    }
  }
  uStack_160 = (undefined8 *)lVar9;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar10 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar12 * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar9,lVar12,1);
    }
  }
  local_158 = lVar10;
  lVar9 = FUN_140028f18(param_2);
  if ((lVar9 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar15 + 4;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x28);
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar15 + 4;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar15;
    param_2[6] = (ulonglong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_14a37d348;
    puVar15[2] = lVar9;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined1 *)((longlong)puVar15 + 0x1c) = 1;
  }
  iVar2 = *(int *)(param_1 + 500);
  iVar3 = *(int *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar5 = *(int *)(param_1 + 0x1e8);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar15 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar15 + 2) = (float)iVar5;
  *(float *)((longlong)puVar15 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(float *)((longlong)puVar15 + 0x1c) = (float)iVar3;
  *(float *)(puVar15 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  uVar6 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar10 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar12 * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar9,lVar12,1);
    }
  }
  FUN_145e75dda();
  local_178 = uVar6;
  FUN_1449cc26b(param_2,lVar10,*(undefined8 *)(param_1 + 0x1b8),&DAT_14ca561e8);
  lVar9 = *(longlong *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar13 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar10,lVar13,1);
    }
  }
  FUN_145e94d20();
  local_178 = lVar9 + 0x90;
  FUN_1449cc26b(param_2,lVar12,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca56270);
  uVar14 = DAT_14ca4d280;
  uVar7 = DAT_14ca4d268;
  uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x78) + 0x10);
  cVar1 = *(char *)(param_1 + 0x1f8);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar15 + 5;
  }
  if (cVar1 != '\0') {
    uVar14 = uVar7;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a20cb88;
  puVar15[2] = uVar14;
  puVar15[3] = uVar6;
  puVar15[4] = 0xffffffff00000000;
  if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14305f78e FUN_14305f78e body=481 status=ok
// SIG undefined FUN_14305f78e(void)

void FUN_14305f78e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472f7674(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14305f970 FUN_14305f970 body=232 status=ok
// SIG undefined FUN_14305f970(void)

void FUN_14305f970(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14305fa58 FUN_14305fa58 body=81 status=ok
// SIG undefined FUN_14305fa58(void)

void FUN_14305fa58(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472f7717(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14305faaa FUN_14305faaa body=450 status=ok
// SIG undefined FUN_14305faaa(void)

void FUN_14305faaa(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1472f7c22(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14305fc6d FUN_14305fc6d body=81 status=ok
// SIG undefined FUN_14305fc6d(void)

void FUN_14305fc6d(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472f7d1d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14305fcbe FUN_14305fcbe body=229 status=ok
// SIG undefined FUN_14305fcbe(void)

void FUN_14305fcbe(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca55fc8,param_3);
  return;
}



// FUNCTION 14305fda4 FUN_14305fda4 body=481 status=ok
// SIG undefined FUN_14305fda4(void)

void FUN_14305fda4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472f805a(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14305ff86 FUN_14305ff86 body=232 status=ok
// SIG undefined FUN_14305ff86(void)

void FUN_14305ff86(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14306006e FUN_14306006e body=81 status=ok
// SIG undefined FUN_14306006e(void)

void FUN_14306006e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472f80fd(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430600c0 FUN_1430600c0 body=38 status=ok
// SIG undefined FUN_1430600c0(void)

undefined8 FUN_1430600c0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430600e6 FUN_1430600e6 body=1461 status=ok
// SIG undefined FUN_1430600e6(void)

void FUN_1430600e6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar7 = uStack_150;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_148,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_148);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar12 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_140;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_f8,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_f8 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar12 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_e4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = 0;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_118 = DAT_14c9c0d98;
  local_128 = DAT_14c9e7548;
  uStack_120 = DAT_14c9c0db0;
  local_100 = 0;
  local_158 = DAT_14ca968c0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar11 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar9,lVar11,1);
    }
  }
  uStack_150 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  local_148 = lVar9;
  lVar8 = FUN_140028f18(param_2);
  if ((lVar8 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar4;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar2;
  *(float *)(puVar12 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145ddb094();
  local_168 = uVar5;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1b8),&DAT_14ca560d8);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145ddb094();
  local_168 = uVar5;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca560d8);
  uVar6 = DAT_14ca8c128;
  uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x120) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a20cb88;
  puVar12[2] = uVar6;
  puVar12[3] = uVar5;
  puVar12[4] = 0xffffffff00000000;
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14306069c FUN_14306069c body=481 status=ok
// SIG undefined FUN_14306069c(void)

void FUN_14306069c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472f8590(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14306087e FUN_14306087e body=232 status=ok
// SIG undefined FUN_14306087e(void)

void FUN_14306087e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143060966 FUN_143060966 body=81 status=ok
// SIG undefined FUN_143060966(void)

void FUN_143060966(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472f8633(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1430609d0 FUN_1430609d0 body=1418 status=ok
// SIG undefined FUN_1430609d0(void)

void FUN_1430609d0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e95290();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca56408);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143060f80 FUN_143060f80 body=1761 status=ok
// SIG undefined FUN_143060f80(void)

void FUN_143060f80(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_ff8 [32];
  code **local_fd8;
  undefined8 *puStack_fd0;
  undefined1 *local_fc8;
  wchar_t *local_fc0;
  longlong *local_fb8;
  longlong **local_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  ulonglong local_f98;
  ulonglong uStack_f90;
  undefined1 local_f88;
  longlong local_f80;
  undefined8 *local_f78;
  int local_f70;
  int iStack_f6c;
  int local_f68;
  int local_f64;
  longlong *local_f60;
  undefined8 local_f58;
  undefined8 local_f50;
  undefined8 local_f48;
  longlong *local_f40;
  code *local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  int local_f20;
  undefined4 uStack_f1c;
  code *local_f18;
  undefined8 uStack_f10;
  longlong *local_f08;
  longlong local_ef8 [98];
  undefined1 local_be8 [2160];
  undefined1 local_378 [80];
  undefined8 local_328;
  undefined8 local_2f8 [16];
  undefined8 local_278 [16];
  undefined4 local_1f8;
  uint uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  ulonglong local_1e8;
  undefined8 local_1d8 [16];
  undefined8 local_158 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_ff8;
  if ((int)param_2[1] < 1) goto LAB_14306161b;
  lVar12 = *(longlong *)param_1[1];
  uVar4 = *(undefined4 *)param_1[2];
  uVar1 = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[4];
  local_f18 = (code *)0x0;
  local_f08 = (longlong *)FUN_14001cc68(0x28,8);
  *local_f08 = (longlong)&PTR_FUN_14a302da0;
  local_f08[1] = (longlong)param_2;
  local_f08[2] = lVar12;
  *(undefined4 *)(local_f08 + 3) = uVar4;
  *(undefined4 *)((longlong)local_f08 + 0x1c) = uVar1;
  *(undefined4 *)(local_f08 + 4) = uVar2;
  if (local_f08 + 1 != (longlong *)0x0) {
    local_f18 = FUN_143061662;
  }
  local_fd8 = (code **)&DAT_14ca4fcb0;
  puStack_fd0 = (undefined8 *)CONCAT71(puStack_fd0._1_7_,1);
  uVar9 = FUN_140339086(*param_1,(int)param_2[1],1,&local_f18);
  if (local_f18 != (code *)0x0) {
    plVar13 = local_f08;
    if (local_f08 == (longlong *)0x0) {
      plVar13 = local_ef8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  _local_f20 = CONCAT44(1,*(int *)(param_1[5] + 8));
  local_f28 = *(undefined8 *)
               (&DAT_14ca8c1f0 +
               (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[5] + 8) * 2) * 8);
  uVar10 = *(undefined8 *)param_1[1];
  local_f38 = (code *)0x0;
  uStack_f30 = uVar10;
  if (*(char *)param_1[6] == '\x01') {
    local_f40 = *(longlong **)(*(longlong *)param_1[7] + (longlong)*(int *)param_1[2] * 8);
    if (local_f40 != (longlong *)0x0) {
      (**(code **)(*local_f40 + 0x30))();
    }
  }
  else {
    local_f40 = (longlong *)0x0;
  }
  bVar18 = *(int *)(DAT_14ca4e9b8 + 4) != 0;
  local_f48 = (ulonglong)CONCAT14(param_3,bVar18 + 0x41 + (uint)bVar18);
  FUN_142e26df6(&local_f48,param_1[8]);
  if (DAT_14ca19734 != 0) {
    FUN_140002266(&local_f18,L"ShadowAtlas%d",*(undefined4 *)param_1[2]);
    bVar8 = FUN_14047adc6(&local_f18);
    local_f48 = CONCAT44(local_f48._4_4_,(uint)local_f48 & 0xffffbfff | (uint)bVar8 << 0xe);
    if (local_f18 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  puStack_fd0 = &local_f58;
  local_f58 = 0;
  local_fd8 = *(code ***)param_1[1];
  local_f88 = 0;
  uStack_f90 = uStack_f90 & 0xffffffffffffff00;
  local_f98 = local_f98 & 0xffffffffffffff00;
  local_fa0 = 0;
  local_fb0 = (longlong **)0x0;
  local_fb8 = (longlong *)CONCAT71(local_fb8._1_7_,1);
  local_fc0 = (wchar_t *)CONCAT71(local_fc0._1_7_,1);
  local_fc8 = (undefined1 *)CONCAT71(local_fc8._1_7_,1);
  local_fa8 = (undefined8 *)((ulonglong)local_fa8._4_4_ << 0x20);
  local_f50 = uVar10;
  FUN_142e1d582(local_378,*param_1,&local_f28,param_1[9]);
  local_fd8 = (code **)param_1[10];
  local_fa8 = (undefined8 *)0x0;
  local_fb0 = &local_f40;
  local_fb8 = (longlong *)&local_f38;
  puStack_fd0 = &local_f28;
  local_fc8 = local_378;
  local_fc0 = (wchar_t *)&local_f48;
  FUN_142e0a69a(&local_f60,*param_1,param_1[5],param_1[8]);
  local_fd8 = (code **)0x0;
  puStack_fd0 = (undefined8 *)0x0;
  (**(code **)(*local_f60 + 8))(local_f60,param_1[5] + 0x2af0,0,uVar9);
  uVar9 = uStack_f30;
  pcVar7 = local_f38;
  if (*(char *)param_1[6] == '\x01') {
    uVar3 = *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[5] + 8) * 2);
    uVar1 = *(undefined4 *)param_1[0xb];
    uVar10 = FUN_14473c272(*param_1,&DAT_14ca63b28,0);
    local_f18 = pcVar7;
    uStack_f10 = uVar9;
    local_f98 = 0;
    uStack_f90 = 0;
    local_fa8 = local_2f8;
    local_fb0 = (longlong **)0x14a302d7e;
    local_fc0 = L"HZBClosest";
    local_fc8 = (undefined1 *)CONCAT62(local_fc8._2_6_,uVar3);
    puStack_fd0 = (undefined8 *)CONCAT44(puStack_fd0._4_4_,uVar1);
    local_fd8 = &local_f18;
    local_fa0 = CONCAT71(local_fa0._1_7_,0xd);
    local_fb8 = (longlong *)0x0;
    FUN_14078ce09(*param_1,uVar10,0,local_328);
    plVar11 = (longlong *)FUN_14495f742(*param_1,local_2f8[0]);
    plVar11 = (longlong *)*plVar11;
    plVar13 = *(longlong **)(*(longlong *)param_1[7] + (longlong)*(int *)param_1[2] * 8);
    if (plVar13 != plVar11) {
      *(longlong **)(*(longlong *)param_1[7] + (longlong)*(int *)param_1[2] * 8) = plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x30))();
      }
      if (plVar13 != (longlong *)0x0) {
        lVar12 = *plVar13;
        goto LAB_1430613be;
      }
    }
  }
  else {
    plVar13 = *(longlong **)(*(longlong *)param_1[7] + (longlong)*(int *)param_1[2] * 8);
    if (plVar13 != (longlong *)0x0) {
      *(undefined8 *)(*(longlong *)param_1[7] + (longlong)*(int *)param_1[2] * 8) = 0;
      lVar12 = *plVar13;
LAB_1430613be:
      (**(code **)(lVar12 + 0x38))(plVar13);
    }
  }
  uVar9 = FUN_14473c272(*param_1,param_1[0xc] + 0x30,0);
  lVar12 = param_2[1];
  local_f78 = param_1;
  if ((longlong)(int)lVar12 != 0) {
    local_f80 = *param_2;
    lVar17 = 0;
    do {
      lVar6 = *(longlong *)(local_f80 + lVar17);
      local_f70 = *(int *)(lVar6 + 0x950);
      local_f68 = local_f70 + *(int *)(lVar6 + 0x960) * 2 + *(int *)(lVar6 + 0x958);
      iStack_f6c = *(int *)(lVar6 + 0x954);
      uVar10 = *(undefined8 *)(lVar6 + 0x950);
      local_f64 = iStack_f6c + *(int *)(lVar6 + 0x960) * 2 + *(int *)(lVar6 + 0x95c);
      uVar5 = *(uint *)(lVar6 + 0x990);
      uVar1 = *(undefined4 *)(lVar6 + 0x10d8);
      puVar15 = &DAT_14c846400;
      puVar16 = local_2f8;
      for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      puVar15 = &DAT_14c846400;
      puVar16 = local_278;
      for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      puVar15 = &DAT_14c846400;
      puVar16 = local_1d8;
      for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      puVar15 = &DAT_14c846400;
      puVar16 = local_158;
      for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      local_c8 = DAT_14c8464f0;
      local_d8 = DAT_14c8464e0;
      uStack_d0 = DAT_14c8464e8;
      local_a0 = DAT_14c8464f0;
      local_b8 = CONCAT44(local_f64,local_f68);
      local_b0 = DAT_14c8464e0;
      uStack_a8 = DAT_14c8464e8;
      local_98 = 0;
      uStack_8c = 0;
      uStack_94 = 0x3f800000;
      uStack_90 = 0x3f800000;
      local_1f8 = *(undefined4 *)(lVar6 + 0x48);
      uStack_1f0 = *(undefined4 *)(lVar6 + 0x50);
      uStack_1f4 = *(uint *)(lVar6 + 0x4c) ^ 0x80000000;
      uStack_1ec = *(uint *)(lVar6 + 0x54) ^ 0x80000000;
      local_1e8 = *(ulonglong *)(lVar6 + 0x58) ^ 0x8000000000000000;
      puVar15 = (undefined8 *)(lVar6 + 0x60);
      puVar16 = local_2f8;
      local_c0 = uVar10;
      for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      puVar15 = (undefined8 *)(lVar6 + 0x160);
      puVar16 = local_278;
      for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      FUN_1447717da(&local_f18,local_2f8);
      puStack_fd0 = (undefined8 *)CONCAT44(iStack_f6c,local_f70);
      local_fb8 = (longlong *)CONCAT71(local_fb8._1_7_,(char)((uVar5 & 0x10) >> 4));
      local_fc0 = (wchar_t *)CONCAT44(local_fc0._4_4_,uVar1);
      local_fc8 = local_be8;
      local_fd8 = (code **)&local_f70;
      FUN_142e02589(*local_f78,&local_f28,local_378,uVar9);
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar12 * 8 != lVar17);
  }
  if (local_f60 != (longlong *)0x0) {
    (**(code **)*local_f60)(local_f60,1);
  }
  if (local_f40 != (longlong *)0x0) {
    (**(code **)(*local_f40 + 0x38))();
  }
LAB_14306161b:
  if ((local_80 ^ (ulonglong)auStack_ff8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143061662 FUN_143061662 body=1534 status=ok
// SIG undefined FUN_143061662(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143061662(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_26e8 [32];
  undefined4 local_26c8;
  longlong local_26b8;
  longlong local_26b0;
  undefined8 local_26a8 [372];
  undefined1 local_1b08 [2976];
  undefined1 local_f68 [2976];
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  uint local_3a0;
  undefined8 local_388;
  undefined8 local_380;
  float local_378;
  uint local_324;
  undefined1 local_320;
  float local_31c;
  undefined4 local_318;
  int local_308;
  uint local_304;
  uint local_300;
  undefined8 local_288 [16];
  undefined4 local_208;
  uint uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  ulonglong local_1f8;
  undefined8 local_1e8 [16];
  undefined8 local_168 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x143061678;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_26e8;
  lVar5 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar5 != 0) {
    local_26b8 = *(longlong *)*param_1;
    local_26b0 = lVar5 << 3;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(local_26b8 + lVar5);
      FUN_1449343ce(local_1b08);
      puVar8 = &DAT_14c846400;
      piVar9 = &local_308;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined8 *)piVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        piVar9 = piVar9 + 2;
      }
      puVar8 = &DAT_14c846400;
      puVar10 = local_288;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar8 = &DAT_14c846400;
      puVar10 = local_1e8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar8 = &DAT_14c846400;
      puVar10 = local_168;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_d8 = DAT_14c8464f0;
      local_e8 = DAT_14c8464e0;
      uStack_e0 = DAT_14c8464e8;
      local_b0 = DAT_14c8464f0;
      local_c0 = DAT_14c8464e0;
      uStack_b8 = DAT_14c8464e8;
      local_a8 = 0;
      uStack_9c = 0;
      uStack_a4 = 0x3f800000;
      uStack_a0 = 0x3f800000;
      local_208 = *(undefined4 *)(lVar1 + 0x48);
      uStack_200 = *(undefined4 *)(lVar1 + 0x50);
      uStack_204 = *(uint *)(lVar1 + 0x4c) ^ 0x80000000;
      uStack_1fc = *(uint *)(lVar1 + 0x54) ^ 0x80000000;
      local_1f8 = *(ulonglong *)(lVar1 + 0x58) ^ 0x8000000000000000;
      local_d0 = *(undefined8 *)(lVar1 + 0x950);
      local_c8 = CONCAT44(*(int *)(lVar1 + 0x954) + *(int *)(lVar1 + 0x960) * 2 +
                          *(int *)(lVar1 + 0x95c),
                          *(int *)(lVar1 + 0x950) + *(int *)(lVar1 + 0x960) * 2 +
                          *(int *)(lVar1 + 0x958));
      puVar8 = (undefined8 *)(lVar1 + 0x60);
      piVar9 = &local_308;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined8 *)piVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        piVar9 = piVar9 + 2;
      }
      puVar8 = (undefined8 *)(lVar1 + 0x160);
      puVar10 = local_288;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_1447717da(local_26a8,&local_308);
      memcpy(local_1b08,local_26a8,0xba0);
      local_3c8 = *(undefined8 *)(lVar1 + 0x950);
      local_3c0 = CONCAT44(*(int *)(lVar1 + 0x954) + *(int *)(lVar1 + 0x960) * 2 +
                           *(int *)(lVar1 + 0x95c),
                           *(int *)(lVar1 + 0x950) + *(int *)(lVar1 + 0x960) * 2 +
                           *(int *)(lVar1 + 0x958));
      local_3b8 = param_1[1];
      memcpy(local_f68,local_1b08,0xba0);
      iVar4 = *(int *)(lVar1 + 0x950) + *(int *)(lVar1 + 0x960);
      iVar3 = *(int *)(lVar1 + 0x960) + *(int *)(lVar1 + 0x954);
      local_388 = CONCAT44(iVar3,iVar4);
      local_380 = CONCAT44(iVar3 + *(int *)(lVar1 + 0x95c),*(int *)(lVar1 + 0x958) + iVar4);
      fVar16 = (float)exp2f(*(uint *)(DAT_14ca5bad0 + 4) ^ 0x80000000);
      local_378 = 1.0 / (fVar16 * DAT_14cb01098);
      local_31c = (float)(~-(uint)(DAT_14c760a5c != 1.0) & *(uint *)((longlong)param_1 + 0x14) |
                         (uint)DAT_14c760a5c & -(uint)(DAT_14c760a5c != 1.0));
      local_31c = local_31c * local_31c;
      local_318 = (undefined4)param_1[3];
      uVar7 = ~*(uint *)(lVar1 + 0x990);
      bVar2 = (byte)*(uint *)(lVar1 + 0x990);
      if ((char)bVar2 < '\0') {
        if (((uVar7 & 0x810) == 0) || (uVar14 = 2, (bVar2 >> 4 & -1 < *(int *)(lVar1 + 0x944)) != 0)
           ) goto LAB_1430619bf;
      }
      else {
        uVar14 = 2;
        if ((uVar7 & 0x810) == 0) {
LAB_1430619bf:
          uVar14 = 0;
        }
      }
      lVar6 = *(longlong *)(lVar1 + 0xb60);
      if (*(longlong *)(lVar6 + 0x28) != 0) {
        local_320 = 1;
        local_324 = (uint)*(byte *)(*(longlong *)(lVar6 + 0x28) + 0x1e9);
      }
      local_308 = (int)param_1[2];
      local_304 = *(uint *)(lVar1 + 0xb20);
      local_300 = *(uint *)(lVar1 + 0xb24);
      uVar11 = local_304 >> 0xd ^ local_308 - local_304;
      uVar7 = uVar11 << 8 ^ (-0x61c88647 - local_304) - uVar11;
      uVar13 = uVar7 >> 0xd ^ (local_304 - uVar11) - uVar7;
      uVar11 = uVar13 >> 0xc ^ (uVar11 - uVar7) - uVar13;
      uVar12 = uVar11 << 0x10 ^ (uVar7 - uVar13) - uVar11;
      uVar7 = uVar12 >> 5 ^ (uVar13 - uVar11) - uVar12;
      uVar13 = uVar7 >> 3 ^ (uVar11 - uVar12) - uVar7;
      uVar11 = uVar13 << 10 ^ (uVar12 - uVar7) - uVar13;
      uVar7 = local_300 >> 0xd ^ (uVar11 >> 0xf ^ uVar7 - (uVar13 + uVar11)) - local_300;
      uVar11 = uVar7 << 8 ^ (-0x61c88647 - local_300) - uVar7;
      uVar12 = uVar11 >> 0xd ^ (local_300 - uVar7) - uVar11;
      uVar7 = uVar12 >> 0xc ^ (uVar7 - uVar11) - uVar12;
      uVar11 = uVar7 << 0x10 ^ (uVar11 - uVar12) - uVar7;
      uVar13 = uVar11 >> 5 ^ (uVar12 - uVar7) - uVar11;
      uVar12 = uVar13 >> 3 ^ (uVar7 - uVar11) - uVar13;
      uVar7 = uVar12 << 10 ^ (uVar11 - uVar13) - uVar12;
      local_3a0 = uVar14;
      iVar3 = FUN_1472f9662((longlong *)(lVar6 + 0x40),uVar7 >> 0xf ^ uVar13 - (uVar12 + uVar7),
                            &local_308);
      if (iVar3 != -1) {
        lVar15 = (longlong)iVar3 * 0xbe0 + *(longlong *)(lVar6 + 0x40);
        if ((void *)(lVar15 + 0x10) != (void *)0x0 && lVar15 != 0) {
          memcpy(local_f68,(void *)(lVar15 + 0x10),0xba0);
          local_388 = *(undefined8 *)(lVar15 + 0xbb0);
          local_380 = *(undefined8 *)(lVar15 + 3000);
          local_3a0 = uVar14 | 1;
        }
      }
      local_26a8[0] = 0;
      local_26c8 = 0xffffffff;
      FUN_143048637(lVar6,&local_308,lVar1,local_26a8);
      FUN_14493225c(local_26a8,local_1b08);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1405f46cc(param_2,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 0x390 + *param_2),local_26a8,0x390);
      lVar5 = lVar5 + 8;
    } while (local_26b0 != lVar5);
  }
  if ((local_90 ^ (ulonglong)auStack_26e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143061c62 FUN_143061c62 body=70 status=ok
// SIG undefined FUN_143061c62(void)

undefined8 * FUN_143061c62(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a302da0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143061cae FUN_143061cae body=29 status=ok
// SIG undefined FUN_143061cae(void)

void FUN_143061cae(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143061ccc FUN_143061ccc body=29 status=ok
// SIG undefined FUN_143061ccc(void)

undefined8 FUN_143061ccc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143061cf5 FUN_143061cf5 body=289 status=ok
// SIG undefined FUN_143061cf5(void)

void FUN_143061cf5(ulonglong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (*param_2 == 0) {
    lVar11 = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar14 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar14,1);
    }
  }
  lVar14 = FUN_144821ef4(param_1);
  iVar9 = *(int *)(lVar14 + 0x30) + *(int *)(lVar14 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar14 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar14 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar14 + 0x38);
    uVar1 = *(undefined4 *)(lVar14 + 0x40);
    uVar6 = *(undefined8 *)(lVar14 + 0x28);
    uVar2 = *(undefined4 *)(lVar14 + 0x30);
    uVar7 = *(undefined8 *)(lVar14 + 0x18);
    uVar3 = *(undefined4 *)(lVar14 + 0x20);
    uVar8 = *(undefined8 *)(lVar14 + 8);
    uVar4 = *(undefined4 *)(lVar14 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = lVar11;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined4 *)(lVar14 + 0x10) = 0;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    *(undefined4 *)(lVar14 + 0x30) = 0;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    *(undefined4 *)(lVar14 + 0x40) = 0;
  }
  return;
}



// FUNCTION 143061e16 FUN_143061e16 body=531 status=ok
// SIG undefined FUN_143061e16(void)

void FUN_143061e16(longlong *param_1,short *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == -1) goto LAB_143061e38;
  FUN_145eeb6b8();
  local_50 = 1;
  local_58 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_40,param_3,DAT_14ca54670);
  lVar12 = local_40;
  sVar8 = *param_2;
  if (sVar8 != -1) {
    lVar16 = *param_1;
    puVar1 = (ulonglong *)(lVar16 + 0x60);
    lVar2 = (longlong)(int)param_1[6] + 1;
    plVar13 = *(longlong **)(lVar16 + 0x60);
    if ((longlong)(int)param_1[6] == 0) {
      plVar13 = (longlong *)((longlong)plVar13 + 7U & 0xfffffffffffffff8);
      plVar15 = plVar13 + 2;
      plVar14 = plVar13;
      if (*(longlong **)(lVar16 + 0x68) < plVar15) {
        FUN_140023dd8(puVar1,0x18);
        plVar13 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar15 = plVar13 + 2;
        plVar14 = plVar13;
      }
LAB_143061ef0:
      *puVar1 = (ulonglong)plVar15;
    }
    else {
      plVar15 = plVar13 + 2;
      if (plVar15 <= *(longlong **)(lVar16 + 0x68)) {
        plVar14 = (longlong *)param_1[5];
        goto LAB_143061ef0;
      }
      plVar14 = (longlong *)((longlong)plVar13 + 7U & 0xfffffffffffffff8);
      plVar13 = plVar14 + lVar2 * 2;
      if (*(longlong **)(lVar16 + 0x68) < plVar13) {
        FUN_140023dd8(puVar1,(int)lVar2 * 0x10 | 8);
        plVar14 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar13 = plVar14 + lVar2 * 2;
      }
      *puVar1 = (ulonglong)plVar13;
      plVar13 = plVar14;
      if (0 < (int)param_1[6]) {
        lVar16 = 0;
        lVar17 = 0;
        do {
          puVar4 = (undefined4 *)(param_1[5] + lVar16);
          uVar9 = puVar4[1];
          uVar10 = puVar4[2];
          uVar11 = puVar4[3];
          puVar5 = (undefined4 *)((longlong)plVar14 + lVar16);
          *puVar5 = *puVar4;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar11;
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x10;
        } while (lVar17 < (int)param_1[6]);
        plVar13 = (longlong *)(lVar16 + (longlong)plVar14);
      }
    }
    *plVar13 = lVar12;
    *(short *)(plVar13 + 1) = sVar8;
    *(undefined1 *)((longlong)plVar13 + 10) = 4;
    param_1[5] = (longlong)plVar14;
    *(int *)(param_1 + 6) = (int)lVar2;
  }
  if (local_40 != 0) {
    LOCK();
    puVar3 = (uint *)(local_40 + 8);
    uVar6 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      puVar3 = (uint *)(local_40 + 8);
      LOCK();
      uVar6 = *puVar3;
      *puVar3 = *puVar3 | 0x40000000;
      UNLOCK();
      if ((uVar6 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(local_40 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = local_40;
        plVar13 = DAT_14ca843c0;
        plVar15 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar13;
            LOCK();
            bVar18 = plVar13 != DAT_14ca843c0;
            plVar15 = plVar14;
            if (bVar18) {
              plVar13 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar15;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar14 = (longlong)plVar15;
            LOCK();
            bVar18 = plVar15 != DAT_14ca843c8;
            plVar13 = plVar14;
            if (bVar18) {
              plVar15 = DAT_14ca843c8;
              plVar13 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar13;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
LAB_143061e38:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14306202a FUN_14306202a body=29 status=ok
// SIG undefined FUN_14306202a(void)

undefined8 FUN_14306202a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143062048 FUN_143062048 body=38 status=ok
// SIG undefined FUN_143062048(void)

undefined8 FUN_143062048(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14306206e FUN_14306206e body=481 status=ok
// SIG undefined FUN_14306206e(void)

void FUN_14306206e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_143062250(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143062250 FUN_143062250 body=873 status=ok
// SIG undefined FUN_143062250(void)

void FUN_143062250(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  size_t _Size;
  ulonglong uVar16;
  void *_Dst;
  
  if (*param_2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar14 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar14,1);
    }
  }
  uVar10 = FUN_140029432(param_1,uVar9,0);
  param_1[0x37] = uVar9;
  puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 3;
  if ((undefined8 *)param_1[1] < puVar12) {
    FUN_140023dd8(param_1,0x20);
    puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 3;
  }
  *param_1 = (ulonglong)puVar12;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar11;
  param_1[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a37d340;
  puVar11[2] = uVar10;
  FUN_14480864a(param_1,uVar9,*param_2,param_3,param_4);
  uVar3 = param_5[2];
  uVar4 = *param_5;
  uVar5 = param_5[1];
  puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 4;
  if ((undefined8 *)param_1[1] < puVar12) {
    FUN_140023dd8(param_1,0x28);
    puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 4;
  }
  *param_1 = (ulonglong)puVar12;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar11;
  param_1[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar11 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar11 + 0x14) = uVar5;
  *(undefined4 *)(puVar11 + 3) = uVar3;
  if (*param_2 == 0) {
    lVar14 = 0;
  }
  else {
    lVar15 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar15 * 8);
    if (lVar14 == 0) {
      lVar14 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar15 = *param_2;
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar16 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar16 = uVar9;
    }
    iVar6 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar6 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar16 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar16 + 2 + lVar15);
          iVar7 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar7 + 1U) {
            FUN_1447477d8(puVar1,iVar7);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar7 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar7 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar6 * 4 != lVar15);
    }
    uVar9 = param_1[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar11 + 5;
        if ((undefined8 *)param_1[1] < puVar12) {
          FUN_140023dd8(param_1,0x30);
          puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar11 + 5;
        }
        *param_1 = (ulonglong)puVar12;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar11;
        param_1[6] = (ulonglong)(puVar11 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_1[1] < pvVar13) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar11[1] = 0;
        *puVar11 = &PTR_FUN_14a1fbc38;
        puVar11[2] = lVar14;
        puVar11[3] = _Dst;
        *(int *)(puVar11 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1430625ba FUN_1430625ba body=38 status=ok
// SIG undefined FUN_1430625ba(void)

undefined8 FUN_1430625ba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430625e0 FUN_1430625e0 body=556 status=ok
// SIG undefined FUN_1430625e0(void)

void FUN_1430625e0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *_Src;
  int *_Src_00;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    _Src_00 = (int *)CONCAT44(uStack_b4,local_b8);
    if ((int *)CONCAT44(uStack_b4,local_b8) == (int *)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar9 + 2,local_b0,0);
    puVar6 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 2;
    }
    memcpy(puVar6,_Src_00,(longlong)local_b0);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60,0);
    puVar6 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 5;
    }
    memcpy(puVar6,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1b8);
  lVar5 = *(longlong *)(param_1 + 0x1d0);
  iVar1 = *(int *)(param_1 + 0x1d8) * 8 + -1;
  iVar8 = *(int *)(param_1 + 0x1d8) << 3;
  iVar2 = *(int *)(lVar5 + 0x3104);
  iVar3 = *(int *)(lVar5 + 0x30fc);
  iVar7 = (iVar1 + *(int *)(lVar5 + 0x3100)) - *(int *)(lVar5 + 0x30f8);
  FUN_14305973a(iVar7,(longlong)iVar7 % (longlong)iVar8 & 0xffffffff);
  local_b8 = 1;
  local_c8 = &local_c0;
  local_c0 = iVar7 / iVar8;
  local_bc = ((iVar2 + iVar1) - iVar3) / iVar8;
  FUN_143062250(param_2,param_1 + 0x1c0,&DAT_14ca54920,uVar4);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14306280e FUN_14306280e body=29 status=ok
// SIG undefined FUN_14306280e(void)

undefined8 FUN_14306280e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14306282c FUN_14306282c body=374 status=ok
// SIG undefined FUN_14306282c(void)

void FUN_14306282c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x2020207010700;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_143062953;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143062953:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430629a4 FUN_1430629a4 body=38 status=ok
// SIG undefined FUN_1430629a4(void)

undefined8 FUN_1430629a4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430629ca FUN_1430629ca body=1346 status=ok
// SIG undefined FUN_1430629ca(void)

void FUN_1430629ca(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar7 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_f8 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)(param_1 + 0x1c0);
  iVar1 = *(int *)(lVar8 + 0x3104);
  iVar2 = *(int *)(lVar8 + 0x3100);
  iVar3 = *(int *)(lVar8 + 0x30fc);
  iVar4 = *(int *)(lVar8 + 0x30f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x1c8);
  local_160 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818),&local_168,
                &local_158);
  local_118 = DAT_14ca546d0;
  lVar8 = FUN_140028f18(param_2,&local_158);
  if ((lVar8 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar8;
    *(undefined4 *)(puVar11 + 3) = 0x80;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  FUN_14305cf0a();
  local_178 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca55658);
  uVar5 = DAT_14ca89240;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar5;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar5 = DAT_14ca89258;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb5b0;
  puVar11[2] = uVar5;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143062f0e FUN_143062f0e body=29 status=ok
// SIG undefined FUN_143062f0e(void)

undefined8 FUN_143062f0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143062f2c FUN_143062f2c body=218 status=ok
// SIG undefined FUN_143062f2c(void)

void FUN_143062f2c(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x3f80000000000000;
  *(undefined1 (*) [16])(param_1 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 200) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0xd8) = 4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  lVar1 = 0x100;
  do {
    *(undefined1 (*) [16])(param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 0x10 + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1c0);
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c0) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined2 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  return;
}



// FUNCTION 143063006 FUN_143063006 body=29 status=ok
// SIG undefined FUN_143063006(void)

undefined8 FUN_143063006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143063024 FUN_143063024 body=38 status=ok
// SIG undefined FUN_143063024(void)

undefined8 FUN_143063024(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14306304a FUN_14306304a body=219 status=ok
// SIG undefined FUN_14306304a(void)

void FUN_14306304a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14306314c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 143063126 FUN_143063126 body=38 status=ok
// SIG undefined FUN_143063126(void)

undefined8 FUN_143063126(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14306314c FUN_14306314c body=1294 status=ok
// SIG undefined FUN_14306314c(void)

void FUN_14306314c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14306365c FUN_14306365c body=38 status=ok
// SIG undefined FUN_14306365c(void)

undefined8 FUN_14306365c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143063682 FUN_143063682 body=1370 status=ok
// SIG undefined FUN_143063682(void)

void FUN_143063682(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar7 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_f8 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)(param_1 + 0x1c0);
  iVar1 = *(int *)(lVar8 + 0x3104);
  iVar2 = *(int *)(lVar8 + 0x3100);
  iVar3 = *(int *)(lVar8 + 0x30fc);
  iVar4 = *(int *)(lVar8 + 0x30f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x1c8);
  local_160 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818));
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    local_118 = DAT_14ca35108;
  }
  lVar8 = FUN_140028f18(param_2,&local_158);
  if ((lVar8 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar8;
    *(undefined4 *)(puVar11 + 3) = 0x80;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  FUN_14305b2d0();
  local_178 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca54d48);
  uVar5 = DAT_14ca89240;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar5;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar5 = DAT_14ca89258;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb5b0;
  puVar11[2] = uVar5;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143063bde FUN_143063bde body=38 status=ok
// SIG undefined FUN_143063bde(void)

undefined8 FUN_143063bde(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143063c04 FUN_143063c04 body=1486 status=ok
// SIG undefined FUN_143063c04(void)

void FUN_143063c04(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar7 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_f8 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)(param_1 + 0x1c0);
  iVar1 = *(int *)(lVar8 + 0x3104);
  iVar2 = *(int *)(lVar8 + 0x3100);
  iVar3 = *(int *)(lVar8 + 0x30fc);
  iVar4 = *(int *)(lVar8 + 0x30f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x1d8);
  local_160 = *(undefined8 *)(param_1 + 0x1e0);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818));
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    local_118 = DAT_14ca35108;
  }
  local_100 = (uint)DAT_14ca84e08 * 5;
  local_158 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  local_148 = lVar8;
  lVar8 = FUN_140028f18(param_2);
  if ((lVar8 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar8;
    *(undefined4 *)(puVar11 + 3) = 0x80;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  FUN_14305b2d0();
  local_178 = uVar6;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca54d48);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  FUN_14305b2d0();
  local_178 = uVar6;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d8),&DAT_14ca54d48);
  uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0xd0) + 0x10);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 4;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x28);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e78c8;
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430641d4 FUN_1430641d4 body=29 status=ok
// SIG undefined FUN_1430641d4(void)

undefined8 FUN_1430641d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430641f2 FUN_1430641f2 body=38 status=ok
// SIG undefined FUN_1430641f2(void)

undefined8 FUN_1430641f2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143064218 FUN_143064218 body=1486 status=ok
// SIG undefined FUN_143064218(void)

void FUN_143064218(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar7 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_f8 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)(param_1 + 0x1c0);
  iVar1 = *(int *)(lVar8 + 0x3104);
  iVar2 = *(int *)(lVar8 + 0x3100);
  iVar3 = *(int *)(lVar8 + 0x30fc);
  iVar4 = *(int *)(lVar8 + 0x30f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x1d8);
  local_160 = *(undefined8 *)(param_1 + 0x1e0);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818));
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    local_118 = DAT_14ca35108;
  }
  local_100 = (uint)DAT_14ca84e08 * 5;
  local_158 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar8;
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  local_148 = lVar8;
  lVar8 = FUN_140028f18(param_2);
  if ((lVar8 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar8;
    *(undefined4 *)(puVar11 + 3) = 0x80;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  FUN_14305ca2e();
  local_178 = uVar6;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca55340);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar5,lVar10,1);
    }
  }
  FUN_14305ca2e();
  local_178 = uVar6;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1d8),&DAT_14ca55340);
  uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0xd0) + 0x10);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 4;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x28);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e78c8;
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430647e8 FUN_1430647e8 body=29 status=ok
// SIG undefined FUN_1430647e8(void)

undefined8 FUN_1430647e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143064806 FUN_143064806 body=38 status=ok
// SIG undefined FUN_143064806(void)

undefined8 FUN_143064806(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14306482c FUN_14306482c body=1294 status=ok
// SIG undefined FUN_14306482c(void)

void FUN_14306482c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143064d3c FUN_143064d3c body=481 status=ok
// SIG undefined FUN_143064d3c(void)

void FUN_143064d3c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472ff114(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143064f1e FUN_143064f1e body=232 status=ok
// SIG undefined FUN_143064f1e(void)

void FUN_143064f1e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143065006 FUN_143065006 body=81 status=ok
// SIG undefined FUN_143065006(void)

void FUN_143065006(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472ff1b7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143065058 FUN_143065058 body=481 status=ok
// SIG undefined FUN_143065058(void)

void FUN_143065058(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472ff4f4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14306523a FUN_14306523a body=232 status=ok
// SIG undefined FUN_14306523a(void)

void FUN_14306523a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143065322 FUN_143065322 body=81 status=ok
// SIG undefined FUN_143065322(void)

void FUN_143065322(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472ff597(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143065374 FUN_143065374 body=25 status=ok
// SIG undefined FUN_143065374(void)

void FUN_143065374(void)

{
  FUN_141526006();
  FUN_14170c56a(&DAT_14ca4cf98);
  return;
}



// FUNCTION 14306538e FUN_14306538e body=25 status=ok
// SIG undefined FUN_14306538e(void)

void FUN_14306538e(void)

{
  FUN_141092e92();
  FUN_14170c56a(&DAT_14ca4d008);
  return;
}



// FUNCTION 1430653a8 FUN_1430653a8 body=25 status=ok
// SIG undefined FUN_1430653a8(void)

void FUN_1430653a8(void)

{
  FUN_14614338e();
  FUN_14170c56a(&DAT_14ca4d078);
  return;
}



// FUNCTION 1430653c2 FUN_1430653c2 body=38 status=ok
// SIG undefined FUN_1430653c2(void)

undefined8 FUN_1430653c2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430653e8 FUN_1430653e8 body=491 status=ok
// SIG undefined FUN_1430653e8(void)

void FUN_1430653e8(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 **_Src;
  undefined1 *_Src_00;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((undefined1 **)CONCAT44(uStack_ac,local_b0) != (undefined1 **)0x0) {
      _Src = (undefined1 **)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145f92d8c();
  local_b8 = &DAT_100000001;
  local_b0 = 1;
  FUN_1472ff889(param_2,param_1 + 0x1c0,uVar1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430655d4 FUN_1430655d4 body=229 status=ok
// SIG undefined FUN_1430655d4(void)

void FUN_1430655d4(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca55e30,param_3);
  return;
}



// FUNCTION 1430656b9 FUN_1430656b9 body=81 status=ok
// SIG undefined FUN_1430656b9(void)

void FUN_1430656b9(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472ff921(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14306570a FUN_14306570a body=481 status=ok
// SIG undefined FUN_14306570a(void)

void FUN_14306570a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1472ffdb8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430658ec FUN_1430658ec body=232 status=ok
// SIG undefined FUN_1430658ec(void)

void FUN_1430658ec(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 1430659d4 FUN_1430659d4 body=81 status=ok
// SIG undefined FUN_1430659d4(void)

void FUN_1430659d4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1472ffe5b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143065a26 FUN_143065a26 body=38 status=ok
// SIG undefined FUN_143065a26(void)

undefined8 FUN_143065a26(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143065a4c FUN_143065a4c body=403 status=ok
// SIG undefined FUN_143065a4c(void)

void FUN_143065a4c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined1 *local_a0;
  int local_98;
  undefined1 local_90 [64];
  undefined1 *local_50;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144b1c6fa(param_1 + 0x10,local_a8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_98;
  if ((longlong)local_98 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_a8;
    if (local_a0 != (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe144(puVar3 + 2,local_98,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_98);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_48;
  if ((longlong)local_48 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar2 = local_90;
    }
    FUN_1446fe1b8(puVar3 + 5,local_48,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_48 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_40;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_3c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_34;
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8(local_50);
  }
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143065bec FUN_143065bec body=38 status=ok
// SIG undefined FUN_143065bec(void)

undefined8 FUN_143065bec(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143065c12 FUN_143065c12 body=447 status=ok
// SIG undefined FUN_143065c12(void)

void FUN_143065c12(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1472edbe4(*(undefined8 *)(param_1 + 0x1b8),param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143065dd2 FUN_143065dd2 body=452 status=ok
// SIG undefined FUN_143065dd2(void)

undefined8 FUN_143065dd2(uint param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ushort uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca56d58) && (FUN_144b3d300(&DAT_14ca56d58), DAT_14ca56d58 == -1)) {
    FUN_140056680(&DAT_14ca56d40,L"r.Mobile.EnableMovableSpotlightsShadow");
    DAT_14ca56d50 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_143065fa7);
    _Init_thread_footer(&DAT_14ca56d58);
  }
  puVar2 = &DAT_14ca84468;
  uVar6 = (ushort)param_1;
  if (uVar6 != 0x31) {
    switch(param_1 & 0xffff) {
    case 0x30:
switchD_143065e73_caseD_30:
      puVar2 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_143065e73_caseD_31:
      if ((uVar6 & 0xfff0) != 0x20) {
        uVar3 = 0;
        goto LAB_143065e0f;
      }
      lVar4 = FUN_14741392a();
      puVar2 = (undefined8 *)(lVar4 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_143065e73_caseD_34:
      puVar2 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_143065e73_caseD_35:
      puVar2 = &DAT_14ca84478;
      break;
    default:
      switch(param_1 & 0xffff) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_143065e73_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_143065e73_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_143065e73_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_143065e73_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar2 = &DAT_14ca84488;
      }
    }
  }
  uVar3 = *puVar2;
LAB_143065e0f:
  if (DAT_14ca56d50 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar5 = DAT_14ca56d40;
    if (DAT_14ca56d48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    DAT_14ca56d50 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
  }
  cVar1 = FUN_14002b5e0(uVar3,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != uVar6)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143065e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*DAT_14ca56d50 + 0xa8))();
  return uVar3;
}



// FUNCTION 143065fca FUN_143065fca body=180 status=ok
// SIG undefined FUN_143065fca(void)

undefined1 FUN_143065fca(uint param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = DAT_14c760e15;
  if ((&DAT_14ca814b8)[(ulonglong)(param_1 & 0xffff) * 0xf] == 1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca5b050) && (FUN_144b3d300(&DAT_14ca5b050), DAT_14ca5b050 == -1)) {
      FUN_140056680(&DAT_14ca5b038,L"r.Mobile.EnableMovablePointLightsShadows");
      DAT_14ca5b048 = 0;
      atexit((_func_5014 *)&LAB_14306608f);
      _Init_thread_footer(&DAT_14ca5b050);
    }
    cVar2 = FUN_144a847a6(&DAT_14ca5b038,param_1);
    uVar1 = DAT_14ca96500;
    if (cVar2 == '\0') {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 1430660f6 FUN_1430660f6 body=38 status=ok
// SIG undefined FUN_1430660f6(void)

undefined8 FUN_1430660f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14306611c FUN_14306611c body=903 status=ok
// SIG undefined FUN_14306611c(void)

void FUN_14306611c(longlong param_1,ulonglong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  undefined4 uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *_Dst;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 *_Src;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  float local_100;
  float local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar17 = puVar22 + 0x11;
  if ((undefined8 *)param_2[1] < puVar17) {
    FUN_140023dd8(param_2,0x90);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar22 + 0x11;
  }
  *param_2 = (ulonglong)puVar17;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_FUN_14a1fb978;
  puVar22[3] = 0;
  *(int *)(puVar22 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x24) = 8;
  }
  else {
    puVar17 = local_b8;
    if (local_b8 == (undefined8 *)0x0) {
      puVar17 = &local_c0;
    }
    FUN_1446fe144(puVar22 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar22[3];
    if ((undefined8 *)puVar22[3] == (undefined8 *)0x0) {
      _Dst = puVar22 + 2;
    }
    memcpy(_Dst,puVar17,(longlong)local_b0);
  }
  puVar22[0xd] = 0;
  *(int *)(puVar22 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar22 + 5,local_60,0);
    puVar17 = (undefined8 *)puVar22[0xd];
    if ((undefined8 *)puVar22[0xd] == (undefined8 *)0x0) {
      puVar17 = puVar22 + 5;
    }
    memcpy(puVar17,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar22 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar22 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar22 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar22 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  FUN_1430431d8(lVar3,param_2);
  puVar1 = (undefined4 *)(param_1 + 0x1e0);
  FUN_144b0e33a(param_2,puVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x2cc);
  lVar18 = FUN_140028f18(param_2,puVar1);
  if ((lVar18 != 0) && ((*(byte *)(param_1 + 0x2ab) & 0x10) == 0)) {
    uVar5 = *puVar1;
    uVar6 = *(undefined4 *)(param_1 + 0x1e4);
    uVar7 = *(undefined4 *)(param_1 + 0x1e8);
    uVar8 = *(undefined4 *)(param_1 + 0x1ec);
    uVar9 = *(undefined4 *)(param_1 + 0x1f0);
    uVar10 = *(undefined4 *)(param_1 + 500);
    uVar11 = *(undefined4 *)(param_1 + 0x1f8);
    uVar12 = *(undefined4 *)(param_1 + 0x1fc);
    uVar13 = *(undefined4 *)(param_1 + 0x204);
    uVar14 = *(undefined4 *)(param_1 + 0x208);
    uVar15 = *(undefined4 *)(param_1 + 0x20c);
    *(undefined4 *)(param_2 + 0x35) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uVar13;
    *(undefined4 *)(param_2 + 0x36) = uVar14;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uVar15;
    *(undefined4 *)(param_2 + 0x33) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0x19c) = uVar10;
    *(undefined4 *)(param_2 + 0x34) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uVar12;
    *(undefined4 *)(param_2 + 0x31) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x18c) = uVar6;
    *(undefined4 *)(param_2 + 0x32) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x194) = uVar8;
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar22 + 4;
    if ((undefined8 *)param_2[1] < puVar17) {
      FUN_140023dd8(param_2,0x28);
      puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar22 + 4;
    }
    *param_2 = (ulonglong)puVar17;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar22;
    param_2[6] = (ulonglong)(puVar22 + 1);
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_14a37d348;
    puVar22[2] = lVar18;
    *(undefined4 *)(puVar22 + 3) = uVar2;
    *(undefined1 *)((longlong)puVar22 + 0x1c) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x2b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar19 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar21 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar19 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar21 * 8);
    if (lVar19 == 0) {
      lVar19 = FUN_1400bafc2(lVar18,lVar21,1);
    }
  }
  FUN_145e95d70();
  local_118 = uVar4;
  FUN_1449cc26b(param_2,lVar19,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca56518);
  iVar16 = *(int *)(lVar3 + 0x960) * 2;
  iVar20 = *(int *)(lVar3 + 0x95c) + iVar16;
  iVar16 = iVar16 + *(int *)(lVar3 + 0x958);
  local_d0 = *(undefined4 *)(param_1 + 0x2c8);
  local_c0 = *(undefined8 *)(param_1 + 0x1c0);
  local_b8 = *(undefined8 **)(param_1 + 0x1c8);
  local_f8 = (float)iVar20;
  local_e8 = *(undefined8 *)(param_1 + 0x2c0);
  local_f0 = CONCAT44(iVar20,iVar16);
  local_100 = (float)iVar16;
  local_d8 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = CONCAT44(local_118._4_4_,local_f8);
  local_e0 = &local_c0;
  FUN_140094833(param_2,0,0);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430664a4 FUN_1430664a4 body=38 status=ok
// SIG undefined FUN_1430664a4(void)

undefined8 FUN_1430664a4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430664ca FUN_1430664ca body=901 status=ok
// SIG undefined FUN_1430664ca(void)

void FUN_1430664ca(longlong param_1,ulonglong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  undefined4 uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *_Dst;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 *_Src;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  float local_100;
  float local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar17 = puVar22 + 0x11;
  if ((undefined8 *)param_2[1] < puVar17) {
    FUN_140023dd8(param_2,0x90);
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar22 + 0x11;
  }
  *param_2 = (ulonglong)puVar17;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar22;
  param_2[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_FUN_14a1fb978;
  puVar22[3] = 0;
  *(int *)(puVar22 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x24) = 8;
  }
  else {
    puVar17 = local_b8;
    if (local_b8 == (undefined8 *)0x0) {
      puVar17 = &local_c0;
    }
    FUN_1446fe144(puVar22 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar22[3];
    if ((undefined8 *)puVar22[3] == (undefined8 *)0x0) {
      _Dst = puVar22 + 2;
    }
    memcpy(_Dst,puVar17,(longlong)local_b0);
  }
  puVar22[0xd] = 0;
  *(int *)(puVar22 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar22 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar22 + 5,local_60,0);
    puVar17 = (undefined8 *)puVar22[0xd];
    if ((undefined8 *)puVar22[0xd] == (undefined8 *)0x0) {
      puVar17 = puVar22 + 5;
    }
    memcpy(puVar17,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar22 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar22 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar22 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar22 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  FUN_1430431d8(lVar3,param_2);
  puVar1 = (undefined4 *)(param_1 + 0x1e0);
  FUN_144b0e33a(param_2,puVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x2c8);
  lVar18 = FUN_140028f18(param_2,puVar1);
  if ((lVar18 != 0) && ((*(byte *)(param_1 + 0x2ab) & 0x10) == 0)) {
    uVar5 = *puVar1;
    uVar6 = *(undefined4 *)(param_1 + 0x1e4);
    uVar7 = *(undefined4 *)(param_1 + 0x1e8);
    uVar8 = *(undefined4 *)(param_1 + 0x1ec);
    uVar9 = *(undefined4 *)(param_1 + 0x1f0);
    uVar10 = *(undefined4 *)(param_1 + 500);
    uVar11 = *(undefined4 *)(param_1 + 0x1f8);
    uVar12 = *(undefined4 *)(param_1 + 0x1fc);
    uVar13 = *(undefined4 *)(param_1 + 0x204);
    uVar14 = *(undefined4 *)(param_1 + 0x208);
    uVar15 = *(undefined4 *)(param_1 + 0x20c);
    *(undefined4 *)(param_2 + 0x35) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uVar13;
    *(undefined4 *)(param_2 + 0x36) = uVar14;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uVar15;
    *(undefined4 *)(param_2 + 0x33) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0x19c) = uVar10;
    *(undefined4 *)(param_2 + 0x34) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uVar12;
    *(undefined4 *)(param_2 + 0x31) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x18c) = uVar6;
    *(undefined4 *)(param_2 + 0x32) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x194) = uVar8;
    puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar22 + 4;
    if ((undefined8 *)param_2[1] < puVar17) {
      FUN_140023dd8(param_2,0x28);
      puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar22 + 4;
    }
    *param_2 = (ulonglong)puVar17;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar22;
    param_2[6] = (ulonglong)(puVar22 + 1);
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_14a37d348;
    puVar22[2] = lVar18;
    *(undefined4 *)(puVar22 + 3) = uVar2;
    *(undefined1 *)((longlong)puVar22 + 0x1c) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x2b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar19 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar21 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar19 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar21 * 8);
    if (lVar19 == 0) {
      lVar19 = FUN_1400bafc2(lVar18,lVar21,1);
    }
  }
  FUN_145e962e0();
  local_118 = uVar4;
  FUN_1449cc26b(param_2,lVar19,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca565a0);
  iVar16 = *(int *)(lVar3 + 0x960) * 2;
  iVar20 = *(int *)(lVar3 + 0x95c) + iVar16;
  iVar16 = iVar16 + *(int *)(lVar3 + 0x958);
  local_c0 = *(undefined8 *)(param_1 + 0x1c0);
  local_b8 = *(undefined8 **)(param_1 + 0x1c8);
  local_f8 = (float)iVar20;
  local_e8 = *(undefined8 *)(param_1 + 0x2c0);
  local_f0 = CONCAT44(iVar20,iVar16);
  local_100 = (float)iVar16;
  local_d8 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = CONCAT44(local_118._4_4_,local_f8);
  local_d0 = 1;
  local_e0 = &local_c0;
  FUN_140094833(param_2,0,0);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143066850 FUN_143066850 body=38 status=ok
// SIG undefined FUN_143066850(void)

undefined8 FUN_143066850(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143066876 FUN_143066876 body=1365 status=ok
// SIG undefined FUN_143066876(void)

void FUN_143066876(longlong param_1,ulonglong *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *_Dst;
  longlong lVar25;
  undefined8 *puVar26;
  undefined1 *_Src;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  int local_138;
  undefined1 local_130 [64];
  undefined1 *local_f0;
  int local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_148);
  puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar23 = puVar26 + 0x11;
  if ((undefined8 *)param_2[1] < puVar23) {
    FUN_140023dd8(param_2,0x90);
    puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar26 + 0x11;
  }
  *param_2 = (ulonglong)puVar23;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar26;
  param_2[6] = (ulonglong)(puVar26 + 1);
  puVar26[1] = 0;
  *puVar26 = &PTR_FUN_14a1fb978;
  puVar26[3] = 0;
  *(int *)(puVar26 + 4) = local_138;
  if ((longlong)local_138 == 0) {
    *(undefined4 *)((longlong)puVar26 + 0x24) = 8;
  }
  else {
    puVar23 = local_140;
    if (local_140 == (undefined8 *)0x0) {
      puVar23 = &local_148;
    }
    FUN_1446fe144(puVar26 + 2,local_138,0);
    _Dst = (undefined8 *)puVar26[3];
    if ((undefined8 *)puVar26[3] == (undefined8 *)0x0) {
      _Dst = puVar26 + 2;
    }
    memcpy(_Dst,puVar23,(longlong)local_138);
  }
  puVar26[0xd] = 0;
  *(int *)(puVar26 + 0xe) = local_e8;
  if ((longlong)local_e8 == 0) {
    *(undefined4 *)((longlong)puVar26 + 0x74) = 8;
  }
  else {
    _Src = local_f0;
    if (local_f0 == (undefined1 *)0x0) {
      _Src = local_130;
    }
    FUN_1446fe1b8(puVar26 + 5,local_e8,0);
    puVar23 = (undefined8 *)puVar26[0xd];
    if ((undefined8 *)puVar26[0xd] == (undefined8 *)0x0) {
      puVar23 = puVar26 + 5;
    }
    memcpy(puVar23,_Src,(longlong)local_e8 << 3);
  }
  *(undefined4 *)(puVar26 + 0xf) = local_e0;
  *(undefined4 *)((longlong)puVar26 + 0x7c) = uStack_dc;
  *(undefined4 *)(puVar26 + 0x10) = uStack_d8;
  *(undefined4 *)((longlong)puVar26 + 0x84) = uStack_d4;
  if (local_f0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_f0);
  }
  if (local_140 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar24 = *(longlong *)(param_1 + 0x1b8);
  iVar8 = *(int *)(lVar24 + 0x958);
  iVar9 = *(int *)(lVar24 + 0x95c);
  iVar10 = *(int *)(lVar24 + 0x960);
  fVar2 = *(float *)(lVar24 + 0xa60);
  fVar3 = *(float *)(lVar24 + 0xa68);
  fVar4 = *(float *)(lVar24 + 0xa64);
  fVar5 = *(float *)(lVar24 + 0xa6c);
  fVar6 = *(float *)(lVar24 + 0xa7c);
  fVar7 = *(float *)(lVar24 + 0xa78);
  fVar30 = *(float *)(lVar24 + 0xa74);
  fVar28 = *(float *)(lVar24 + 0xa70);
  FUN_1430431d8(lVar24,param_2);
  puVar1 = (undefined4 *)(param_1 + 0x1e0);
  FUN_144b0e33a(param_2,puVar1);
  uVar11 = *(undefined4 *)(param_1 + 0x2c8);
  lVar24 = FUN_140028f18(param_2,puVar1);
  if ((lVar24 != 0) && ((*(byte *)(param_1 + 0x2ab) & 0x10) == 0)) {
    uVar12 = *puVar1;
    uVar13 = *(undefined4 *)(param_1 + 0x1e4);
    uVar14 = *(undefined4 *)(param_1 + 0x1e8);
    uVar15 = *(undefined4 *)(param_1 + 0x1ec);
    uVar16 = *(undefined4 *)(param_1 + 0x1f0);
    uVar17 = *(undefined4 *)(param_1 + 500);
    uVar18 = *(undefined4 *)(param_1 + 0x1f8);
    uVar19 = *(undefined4 *)(param_1 + 0x1fc);
    uVar20 = *(undefined4 *)(param_1 + 0x204);
    uVar21 = *(undefined4 *)(param_1 + 0x208);
    uVar22 = *(undefined4 *)(param_1 + 0x20c);
    *(undefined4 *)(param_2 + 0x35) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uVar20;
    *(undefined4 *)(param_2 + 0x36) = uVar21;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uVar22;
    *(undefined4 *)(param_2 + 0x33) = uVar16;
    *(undefined4 *)((longlong)param_2 + 0x19c) = uVar17;
    *(undefined4 *)(param_2 + 0x34) = uVar18;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uVar19;
    *(undefined4 *)(param_2 + 0x31) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x18c) = uVar13;
    *(undefined4 *)(param_2 + 0x32) = uVar14;
    *(undefined4 *)((longlong)param_2 + 0x194) = uVar15;
    puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar26 + 4;
    if ((undefined8 *)param_2[1] < puVar23) {
      FUN_140023dd8(param_2,0x28);
      puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar23 = puVar26 + 4;
    }
    *param_2 = (ulonglong)puVar23;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar26;
    param_2[6] = (ulonglong)(puVar26 + 1);
    puVar26[1] = 0;
    *puVar26 = &PTR_LAB_14a37d348;
    puVar26[2] = lVar24;
    *(undefined4 *)(puVar26 + 3) = uVar11;
    *(undefined1 *)((longlong)puVar26 + 0x1c) = 1;
  }
  local_150 = *(undefined8 *)(param_1 + 0x2b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    local_158 = 0;
  }
  else {
    lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar25 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    local_158 = *(longlong *)(*(longlong *)(lVar24 + 0x50) + lVar25 * 8);
    if (local_158 == 0) {
      local_158 = FUN_1400bafc2(lVar24,lVar25,1);
    }
  }
  iVar8 = iVar8 + iVar10 * 2;
  fVar27 = (float)iVar8;
  fVar29 = fVar28 * fVar27 + 0.5;
  iVar9 = iVar9 + iVar10 * 2;
  fVar28 = (float)iVar9;
  fVar30 = fVar30 * fVar28 + 0.5;
  local_168 = (ulonglong)((fVar5 - fVar4) * fVar28 + 0.5);
  local_160 = (ulonglong)(fVar4 * fVar28 + 0.5);
  FUN_145e768b6();
  local_1b8 = local_150;
  FUN_1449cc26b(param_2,local_158,*(undefined8 *)(param_1 + 0x1d0),&DAT_14ca56628);
  local_148 = *(undefined8 *)(param_1 + 0x1c0);
  local_140 = *(undefined8 **)(param_1 + 0x1c8);
  local_188 = *(undefined8 *)(param_1 + 0x2c0);
  local_198 = (float)(local_168 & 0xffffffff);
  local_1a0 = (float)((longlong)((fVar3 - fVar2) * fVar27 + 0.5) & 0xffffffff);
  local_1a8 = (float)(local_160 & 0xffffffff);
  local_1b0 = (float)((longlong)(fVar2 * fVar27 + 0.5) & 0xffffffff);
  local_190 = CONCAT44(iVar9,iVar8);
  local_180 = &local_148;
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)((int)(fVar6 * fVar28 + 0.5) - (int)fVar30));
  local_170 = 1;
  local_178 = 0;
  FUN_140094833(param_2,(float)(int)fVar29,(float)(int)fVar30,
                (float)((int)(fVar7 * fVar27 + 0.5) - (int)fVar29));
  if ((local_d0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143066dcc FUN_143066dcc body=31 status=ok
// SIG undefined FUN_143066dcc(void)

undefined8 FUN_143066dcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143066dec FUN_143066dec body=31 status=ok
// SIG undefined FUN_143066dec(void)

undefined8 FUN_143066dec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143066e18 FUN_143066e18 body=79 status=ok
// SIG undefined FUN_143066e18(void)

undefined8 * FUN_143066e18(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a1fab60;
  puVar2 = (undefined8 *)param_1[0x39];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143066e68 FUN_143066e68 body=105 status=ok
// SIG undefined FUN_143066e68(void)

void FUN_143066e68(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(longlong *)(param_1 + 0x1d0);
  local_10 = &local_20;
  local_18 = &LAB_143066ed2;
  FUN_1400f2b3c(local_20 + 0xc60,param_2,*(longlong *)(param_1 + 0x1d8) + 0x40);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143066eda FUN_143066eda body=38 status=ok
// SIG undefined FUN_143066eda(void)

undefined8 FUN_143066eda(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143066f00 FUN_143066f00 body=479 status=ok
// SIG undefined FUN_143066f00(void)

void FUN_143066f00(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar3 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar3 = local_b0;
    }
    FUN_1446fe144(puVar4 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 2;
    }
    memcpy(puVar2,puVar3,(longlong)local_a8);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_a0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 5;
    }
    memcpy(puVar2,puVar3,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar4 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  FUN_1430431d8(lVar1,param_2);
  FUN_142de5b44(lVar1 + 0xc60,param_2,*(longlong *)(param_1 + 0x1c0) + 0x40);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430670e0 FUN_1430670e0 body=38 status=ok
// SIG undefined FUN_1430670e0(void)

undefined8 FUN_1430670e0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143067106 FUN_143067106 body=458 status=ok
// SIG undefined FUN_143067106(void)

void FUN_143067106(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1472ee166(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
                *(undefined4 *)(param_1 + 0x1c0));
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430672d2 FUN_1430672d2 body=2861 status=ok
// SIG undefined FUN_1430672d2(void)

void FUN_1430672d2(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  void *_Src;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar7 = *piVar1;
  if (iVar7 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar7 = *piVar1;
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar5 = *param_1;
  iVar4 = *(int *)(lVar5 + 0x3578);
  if (iVar4 == 0) {
    uVar27 = 1;
    iVar22 = 0;
    uVar31 = 0;
    iVar8 = 0;
  }
  else {
    puVar11 = *(uint **)(lVar5 + 0x3570);
    if (*(uint **)(lVar5 + 0x3570) == (uint *)0x0) {
      puVar11 = (uint *)(lVar5 + 0x3560);
    }
    uVar18 = *puVar11;
    if (uVar18 == 0) {
      iVar8 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar8 = iVar4 + -1;
      }
      uVar31 = 0;
      uVar27 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar27 = uVar31;
      }
      iVar22 = 0;
      do {
        if (uVar27 == uVar31) goto LAB_1430673bb;
        iVar22 = iVar22 + 0x20;
        uVar18 = puVar11[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar18 == 0);
    }
    else {
      iVar22 = 0;
      uVar31 = 0;
    }
    uVar27 = (ulonglong)(-uVar18 & uVar18);
    uVar29 = uVar27 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar8 = (iVar22 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
    }
  }
  if (iVar8 != iVar4) {
    uVar18 = 0xffffffff;
    do {
      lVar25 = *(longlong *)(lVar5 + 0x3550);
      lVar26 = *(longlong *)(lVar25 + 0x30 + (longlong)iVar8 * 0x40);
      iVar30 = *(int *)(lVar26 + 0xd8);
      plVar2 = (longlong *)(lVar26 + 0x80);
      if ((ulonglong)(longlong)iVar30 < 2) {
        if (*plVar2 != 0) {
          FUN_1446efa72(plVar2,0,0);
        }
        if (iVar30 != 0) goto LAB_143067443;
      }
      else {
        FUN_1446efa72(plVar2,0,iVar30);
LAB_143067443:
        pvVar12 = (void *)(lVar26 + 0x78);
        if (*(void **)(lVar26 + 0x80) != (void *)0x0) {
          pvVar12 = *(void **)(lVar26 + 0x80);
        }
        _Src = (void *)(lVar26 + 200);
        if (*(void **)(lVar26 + 0xd0) != (void *)0x0) {
          _Src = *(void **)(lVar26 + 0xd0);
        }
        memcpy(pvVar12,_Src,(longlong)iVar30 << 2);
      }
      plVar2 = (longlong *)(lVar26 + 0x40);
      *(int *)(lVar26 + 0x88) = iVar30;
      iVar30 = *(int *)(lVar26 + 0x68);
      uVar10 = *(uint *)(lVar26 + 0x98);
      uVar29 = (ulonglong)uVar10;
      puVar11 = (uint *)(lVar26 + 0x50);
      if (iVar30 == 0) {
        uVar20 = 1;
        iVar13 = 0;
        uVar23 = 0;
        iVar15 = 0;
      }
      else {
        puVar16 = *(uint **)(lVar26 + 0x60);
        if (*(uint **)(lVar26 + 0x60) == (uint *)0x0) {
          puVar16 = puVar11;
        }
        uVar9 = *puVar16;
        if (uVar9 == 0) {
          iVar13 = iVar30 + 0x1e;
          if (-1 < iVar30 + -1) {
            iVar13 = iVar30 + -1;
          }
          uVar23 = 0;
          uVar28 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar28 = uVar23;
          }
          iVar13 = 0;
          do {
            if (uVar28 == uVar23) goto LAB_1430674b1;
            iVar13 = iVar13 + 0x20;
            uVar9 = puVar16[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar9 == 0);
        }
        else {
          iVar13 = 0;
          uVar23 = 0;
        }
        uVar20 = (ulonglong)(-uVar9 & uVar9);
        uVar28 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar15 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar30 <= iVar15) {
          iVar15 = iVar30;
        }
      }
      if (iVar15 < iVar30) {
        uVar9 = 0xffffffff;
        do {
          plVar6 = *(longlong **)(*plVar2 + 0xbc0 + (longlong)iVar15 * 0xbe0);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x38))();
            iVar30 = *(int *)(lVar26 + 0x68);
          }
          uVar9 = uVar9 & ~(uint)uVar20;
          puVar16 = *(uint **)(lVar26 + 0x60);
          if (*(uint **)(lVar26 + 0x60) == (uint *)0x0) {
            puVar16 = puVar11;
          }
          iVar15 = (int)uVar23;
          lVar17 = (longlong)iVar15;
          uVar14 = puVar16[lVar17] & uVar9;
          if (uVar14 == 0) {
            iVar19 = iVar30 + 0x1e;
            if (-1 < iVar30 + -1) {
              iVar19 = iVar30 + -1;
            }
            iVar24 = iVar19 >> 5;
            if (iVar19 >> 5 < iVar15) {
              iVar24 = iVar15;
            }
            lVar32 = 0;
            do {
              if (iVar24 - lVar17 == lVar32) goto LAB_1430674b1;
              iVar13 = iVar13 + 0x20;
              uVar14 = puVar16[lVar17 + lVar32 + 1];
              lVar32 = lVar32 + 1;
            } while (uVar14 == 0);
            uVar23 = (ulonglong)(uint)(iVar15 + (int)lVar32);
            uVar9 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar14 & uVar14);
          uVar28 = uVar20 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar15 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        } while (iVar15 < iVar30);
      }
LAB_1430674b1:
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar29);
      }
      *(undefined4 *)(lVar26 + 0x48) = 0;
      if (*(uint *)(lVar26 + 0x4c) != uVar10) {
        FUN_1472ced24(plVar2,uVar10);
      }
      *(undefined8 *)(lVar26 + 0x70) = 0xffffffff;
      uVar9 = uVar10 + 0x1f & 0xffffffe0;
      *(undefined4 *)(lVar26 + 0x68) = 0;
      if ((*(int *)(lVar26 + 0x6c) < (int)uVar9) || (0x80 < *(int *)(lVar26 + 0x6c))) {
        if ((int)uVar9 < 0x81) {
          uVar9 = 0x80;
        }
        *(uint *)(lVar26 + 0x6c) = uVar9;
        FUN_1446efbd8(puVar11,0);
      }
      iVar30 = *(int *)(lVar26 + 0x48);
      *(uint *)(lVar26 + 0x48) = iVar30 + uVar10;
      if ((uint)(*(int *)(lVar26 + 0x4c) - iVar30) < uVar10) {
        FUN_1472f95cc(plVar2);
      }
      *(undefined8 *)(lVar26 + 0x70) = *(undefined8 *)(lVar26 + 0xc0);
      iVar30 = *(int *)(lVar26 + 0xb8);
      uVar10 = iVar30 + 0x1fU & 0xffffffe0;
      *(undefined4 *)(lVar26 + 0x68) = 0;
      if ((*(int *)(lVar26 + 0x6c) < (int)uVar10) || (0x80 < *(int *)(lVar26 + 0x6c))) {
        if ((int)uVar10 < 0x81) {
          uVar10 = 0x80;
        }
        *(uint *)(lVar26 + 0x6c) = uVar10;
        FUN_1446efbd8(puVar11,0);
        iVar30 = *(int *)(lVar26 + 0xb8);
      }
      *(int *)(lVar26 + 0x68) = iVar30;
      if (iVar30 != 0) {
        pvVar12 = *(void **)(lVar26 + 0xb0);
        if (*(void **)(lVar26 + 0xb0) == (void *)0x0) {
          pvVar12 = (void *)(lVar26 + 0xa0);
        }
        if (*(uint **)(lVar26 + 0x60) != (uint *)0x0) {
          puVar11 = *(uint **)(lVar26 + 0x60);
        }
        memcpy(puVar11,pvVar12,(ulonglong)(iVar30 + 0x1fU >> 3 & 0xfffffffc));
      }
      if (uVar29 != 0) {
        lVar17 = *(longlong *)(lVar26 + 0x40);
        lVar32 = *(longlong *)(lVar26 + 0x90);
        lVar21 = 0;
        uVar23 = 0;
        do {
          pvVar12 = *(void **)(lVar26 + 0xb0);
          if (*(void **)(lVar26 + 0xb0) == (void *)0x0) {
            pvVar12 = (void *)(lVar26 + 0xa0);
          }
          if ((*(uint *)((longlong)pvVar12 + (uVar23 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar23 & 0x1f)
              & 1) == 0) {
            *(undefined4 *)(lVar17 + lVar21) = *(undefined4 *)(lVar32 + lVar21);
            *(undefined4 *)(lVar17 + 4 + lVar21) = *(undefined4 *)(lVar32 + 4 + lVar21);
          }
          else {
            *(undefined4 *)((undefined8 *)(lVar17 + lVar21) + 1) =
                 *(undefined4 *)((undefined8 *)(lVar32 + lVar21) + 1);
            *(undefined8 *)(lVar17 + lVar21) = *(undefined8 *)(lVar32 + lVar21);
            pvVar12 = (void *)(lVar17 + 0x10 + lVar21);
            lVar3 = lVar32 + lVar21;
            memcpy(pvVar12,(void *)(lVar3 + 0x10),0xba0);
            *(undefined8 *)((longlong)pvVar12 + 0xba0) = *(undefined8 *)(lVar3 + 0xbb0);
            *(undefined8 *)((longlong)pvVar12 + 0xba8) = *(undefined8 *)(lVar3 + 3000);
            plVar2 = *(longlong **)(lVar3 + 0xbc0);
            *(longlong **)((longlong)pvVar12 + 0xbb0) = plVar2;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x30))();
            }
            *(undefined8 *)(lVar17 + 0xbd0 + lVar21) = *(undefined8 *)(lVar32 + 0xbd0 + lVar21);
          }
          uVar23 = uVar23 + 1;
          lVar21 = lVar21 + 0xbe0;
        } while (uVar29 != uVar23);
      }
      lVar25 = *(longlong *)(lVar25 + (longlong)iVar8 * 0x40 + 0x30);
      plVar2 = (longlong *)(lVar25 + 0x90);
      iVar8 = *(int *)(lVar25 + 0xd8);
      if (iVar8 < 2) {
        lVar26 = lVar25 + 200;
        if (*(longlong *)(lVar25 + 0xd0) != 0) {
          lVar26 = *(longlong *)(lVar25 + 0xd0);
        }
        iVar30 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar30 = iVar8;
        }
        if (*(int *)(lVar25 + 0x98) - *(int *)(lVar25 + 0xc4) < iVar30 >> 2) {
          iVar8 = *(int *)(lVar25 + 0xb8);
          if (iVar8 != 0) {
            puVar11 = *(uint **)(lVar25 + 0xb0);
            if (*(uint **)(lVar25 + 0xb0) == (uint *)0x0) {
              puVar11 = (uint *)(lVar25 + 0xa0);
            }
            uVar10 = *puVar11;
            if (uVar10 == 0) {
              iVar30 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar30 = iVar8 + -1;
              }
              uVar29 = 0;
              uVar23 = (ulonglong)(uint)(iVar30 >> 5);
              if (iVar30 >> 5 < 1) {
                uVar23 = uVar29;
              }
              iVar30 = 0;
              do {
                if (uVar23 == uVar29) goto LAB_1430675c2;
                iVar30 = iVar30 + 0x20;
                uVar10 = puVar11[uVar29 + 1];
                uVar29 = uVar29 + 1;
              } while (uVar10 == 0);
            }
            else {
              uVar29 = 0;
              iVar30 = 0;
            }
            uVar28 = (ulonglong)(-uVar10 & uVar10);
            uVar23 = uVar28 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar13 = (iVar30 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar13 < iVar8) {
              uVar10 = 0xffffffff;
              do {
                *(undefined4 *)
                 (lVar26 + (longlong)
                           *(int *)(*(longlong *)(lVar25 + 0x90) + 0xbd4 + (longlong)iVar13 * 0xbe0)
                           * 4) = 0xffffffff;
                uVar10 = ~(uint)uVar28 & uVar10;
                puVar11 = *(uint **)(lVar25 + 0xb0);
                if (*(uint **)(lVar25 + 0xb0) == (uint *)0x0) {
                  puVar11 = (uint *)(lVar25 + 0xa0);
                }
                iVar15 = *(int *)(lVar25 + 0xb8);
                iVar13 = (int)uVar29;
                lVar17 = (longlong)iVar13;
                uVar9 = puVar11[lVar17] & uVar10;
                if (uVar9 == 0) {
                  iVar19 = iVar15 + 0x1e;
                  if (-1 < iVar15 + -1) {
                    iVar19 = iVar15 + -1;
                  }
                  iVar19 = iVar19 >> 5;
                  iVar30 = iVar30 + 0x20;
                  iVar24 = iVar19;
                  if (iVar19 < iVar13) {
                    iVar24 = iVar13;
                  }
                  if (iVar13 < iVar19) {
                    lVar32 = 0;
                    do {
                      uVar9 = puVar11[lVar17 + lVar32 + 1];
                      if (uVar9 != 0) {
                        uVar29 = (ulonglong)(iVar13 + (int)lVar32 + 1);
                        uVar10 = 0xffffffff;
                        goto LAB_143067bd5;
                      }
                      iVar30 = iVar30 + 0x20;
                      lVar32 = lVar32 + 1;
                    } while (iVar24 - lVar17 != lVar32);
                    uVar10 = 0xffffffff;
                    lVar17 = (longlong)iVar24;
                  }
                  uVar29 = lVar17 + 1U & 0xffffffff;
                  iVar13 = iVar15;
                }
                else {
LAB_143067bd5:
                  uVar28 = (ulonglong)(-uVar9 & uVar9);
                  uVar23 = uVar28 * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar23 != 0) {
                    for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  iVar13 = (iVar30 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                  if (iVar15 <= iVar13) {
                    iVar13 = iVar15;
                  }
                }
              } while (iVar13 != iVar8);
            }
          }
        }
        else if (iVar8 == 1) {
          lVar17 = 0;
          do {
            *(undefined4 *)(lVar26 + lVar17 * 4) = 0xffffffff;
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(lVar25 + 0xd8));
        }
LAB_1430675c2:
        puVar11 = (uint *)(lVar25 + 0xa0);
        iVar8 = *(int *)(lVar25 + 0xb8);
        if (iVar8 == 0) {
          uVar28 = 1;
          uVar29 = 0;
          iVar30 = 0;
          iVar13 = 0;
        }
        else {
          puVar16 = *(uint **)(lVar25 + 0xb0);
          if (*(uint **)(lVar25 + 0xb0) == (uint *)0x0) {
            puVar16 = puVar11;
          }
          uVar10 = *puVar16;
          if (uVar10 == 0) {
            iVar30 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar30 = iVar8 + -1;
            }
            uVar29 = 0;
            uVar23 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar23 = uVar29;
            }
            iVar30 = 0;
            do {
              if (uVar23 == uVar29) goto LAB_1430675ed;
              iVar30 = iVar30 + 0x20;
              uVar10 = puVar16[uVar29 + 1];
              uVar29 = uVar29 + 1;
            } while (uVar10 == 0);
          }
          else {
            uVar29 = 0;
            iVar30 = 0;
          }
          uVar28 = (ulonglong)(-uVar10 & uVar10);
          uVar23 = uVar28 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar13 = (iVar30 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar13) {
            iVar13 = iVar8;
          }
        }
        if (iVar13 < iVar8) {
          uVar10 = 0xffffffff;
          do {
            plVar6 = *(longlong **)(*plVar2 + 0xbc0 + (longlong)iVar13 * 0xbe0);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x38))();
              iVar8 = *(int *)(lVar25 + 0xb8);
            }
            uVar10 = uVar10 & ~(uint)uVar28;
            puVar16 = *(uint **)(lVar25 + 0xb0);
            if (*(uint **)(lVar25 + 0xb0) == (uint *)0x0) {
              puVar16 = puVar11;
            }
            iVar13 = (int)uVar29;
            lVar26 = (longlong)iVar13;
            uVar9 = puVar16[lVar26] & uVar10;
            if (uVar9 == 0) {
              iVar15 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar15 = iVar8 + -1;
              }
              iVar19 = iVar15 >> 5;
              if (iVar15 >> 5 < iVar13) {
                iVar19 = iVar13;
              }
              lVar17 = 0;
              do {
                if (iVar19 - lVar26 == lVar17) goto LAB_1430675ed;
                iVar30 = iVar30 + 0x20;
                uVar9 = puVar16[lVar26 + lVar17 + 1];
                lVar17 = lVar17 + 1;
              } while (uVar9 == 0);
              uVar29 = (ulonglong)(uint)(iVar13 + (int)lVar17);
              uVar10 = 0xffffffff;
            }
            uVar28 = (ulonglong)(-uVar9 & uVar9);
            uVar23 = uVar28 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar13 = (iVar30 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          } while (iVar13 < iVar8);
        }
LAB_1430675ed:
        *(undefined4 *)(lVar25 + 0x98) = 0;
        if (*(int *)(lVar25 + 0x9c) != 0) {
          FUN_1472ced24(plVar2,0);
        }
        *(undefined8 *)(lVar25 + 0xc0) = 0xffffffff;
        *(undefined4 *)(lVar25 + 0xb8) = 0;
        if (0x80 < *(uint *)(lVar25 + 0xbc)) {
          *(undefined4 *)(lVar25 + 0xbc) = 0x80;
          FUN_1446efbd8(puVar11,0);
        }
      }
      else {
        FUN_144a3f72c(plVar2,0);
        *(undefined4 *)(lVar25 + 0xd8) = 1;
        FUN_1472f9748(plVar2);
      }
      uVar18 = uVar18 & ~(uint)uVar27;
      puVar11 = *(uint **)(lVar5 + 0x3570);
      if (*(uint **)(lVar5 + 0x3570) == (uint *)0x0) {
        puVar11 = (uint *)(lVar5 + 0x3560);
      }
      iVar30 = *(int *)(lVar5 + 0x3578);
      iVar8 = (int)uVar31;
      lVar25 = (longlong)iVar8;
      uVar10 = puVar11[lVar25] & uVar18;
      if (uVar10 == 0) {
        iVar13 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar13 = iVar30 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar15 = iVar13;
        if (iVar13 < iVar8) {
          iVar15 = iVar8;
        }
        if (iVar8 < iVar13) {
          lVar26 = 0;
          do {
            uVar10 = puVar11[lVar25 + lVar26 + 1];
            if (uVar10 != 0) {
              uVar31 = (ulonglong)(iVar8 + (int)lVar26 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1430676cb;
            }
            iVar22 = iVar22 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar15 - lVar25 != lVar26);
          uVar18 = 0xffffffff;
          iVar8 = iVar15;
        }
        uVar31 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar30;
      }
      else {
LAB_1430676cb:
        uVar27 = (ulonglong)(-uVar10 & uVar10);
        uVar29 = uVar27 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar8 = (iVar22 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar30 <= iVar8) {
          iVar8 = iVar30;
        }
      }
    } while (iVar8 != iVar4);
  }
LAB_1430673bb:
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = iVar7;
  }
  return;
}



// FUNCTION 143067e00 FUN_143067e00 body=547 status=ok
// SIG undefined FUN_143067e00(void)

longlong * FUN_143067e00(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143068030 FUN_143068030 body=110 status=ok
// SIG undefined FUN_143068030(void)

undefined8 * FUN_143068030(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14306809e FUN_14306809e body=25 status=ok
// SIG undefined FUN_14306809e(void)

void FUN_14306809e(void)

{
  FUN_1411c95a0();
  FUN_14170c56a(&DAT_14ca4ff98);
  return;
}



// FUNCTION 1430680b8 FUN_1430680b8 body=25 status=ok
// SIG undefined FUN_1430680b8(void)

void FUN_1430680b8(void)

{
  FUN_145ecb15e();
  FUN_14170c56a(&DAT_14ca51fa0);
  return;
}



// FUNCTION 1430680d2 FUN_1430680d2 body=25 status=ok
// SIG undefined FUN_1430680d2(void)

void FUN_1430680d2(void)

{
  FUN_145ecb7ce();
  FUN_14170c56a(&DAT_14ca52198);
  return;
}



// FUNCTION 1430680ec FUN_1430680ec body=25 status=ok
// SIG undefined FUN_1430680ec(void)

void FUN_1430680ec(void)

{
  FUN_145ecbe3e();
  FUN_14170c56a(&DAT_14ca52390);
  return;
}



// FUNCTION 143068106 FUN_143068106 body=25 status=ok
// SIG undefined FUN_143068106(void)

void FUN_143068106(void)

{
  FUN_145ecc4ae();
  FUN_14170c56a(&DAT_14ca52588);
  return;
}



// FUNCTION 143068120 FUN_143068120 body=25 status=ok
// SIG undefined FUN_143068120(void)

void FUN_143068120(void)

{
  FUN_145eccb1e();
  FUN_14170c56a(&DAT_14ca52780);
  return;
}



// FUNCTION 14306813a FUN_14306813a body=374 status=ok
// SIG undefined FUN_14306813a(void)

void FUN_14306813a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100060007010300;
  local_26 = 0x70007;
  local_22 = 0x707;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_143068261;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143068261:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430682b2 FUN_1430682b2 body=374 status=ok
// SIG undefined FUN_1430682b2(void)

void FUN_1430682b2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x106000007010300;
  local_26 = 0x7000007;
  local_22 = 0x707;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_1430683d9;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1430683d9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14306842a FUN_14306842a body=374 status=ok
// SIG undefined FUN_14306842a(void)

void FUN_14306842a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x106000007010300;
  local_26 = 0x6000007;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_143068551;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143068551:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430685a2 FUN_1430685a2 body=31 status=ok
// SIG undefined FUN_1430685a2(void)

undefined8 FUN_1430685a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430685c2 FUN_1430685c2 body=38 status=ok
// SIG undefined FUN_1430685c2(void)

undefined8 FUN_1430685c2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430685e8 FUN_1430685e8 body=543 status=ok
// SIG undefined FUN_1430685e8(void)

void FUN_1430685e8(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar3 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar3 = local_b0;
    }
    FUN_1446fe144(puVar4 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 2;
    }
    memcpy(puVar2,puVar3,(longlong)local_a8);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_a0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 5;
    }
    memcpy(puVar2,puVar3,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar4 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((*(char *)(param_1 + 0x1f0) == '\x01') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + 0x20), lVar1 != 0)) {
    local_c8 = *(undefined8 *)(lVar1 + 0x10);
  }
  else {
    local_c8 = 0;
  }
  local_d0 = *(undefined8 *)(param_1 + 0x1e8);
  local_e0 = *(undefined1 *)(param_1 + 0x1e0);
  local_e8 = *(undefined8 *)(param_1 + 0x1d8);
  local_d8 = 0;
  FUN_14304a7dc(*(undefined8 *)(param_1 + 0x1b8),param_2,*(undefined4 *)(param_1 + 0x1d0),
                *(undefined8 *)(param_1 + 0x1c8));
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143068814 FUN_143068814 body=374 status=ok
// SIG undefined FUN_143068814(void)

void FUN_143068814(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x1010107000700;
  local_26 = 0x1010107;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_14306893b;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_14306893b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14306898c FUN_14306898c body=374 status=ok
// SIG undefined FUN_14306898c(void)

void FUN_14306898c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x1010105010700;
  local_26 = 0x1010107;
  local_22 = 0x707;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_143068ab3;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143068ab3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143068b04 FUN_143068b04 body=368 status=ok
// SIG undefined FUN_143068b04(void)

void FUN_143068b04(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x5010700;
  local_26 = 7;
  local_22 = 0x707;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_143068c25;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143068c25:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143068c76 FUN_143068c76 body=374 status=ok
// SIG undefined FUN_143068c76(void)

void FUN_143068c76(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004010100;
  local_26 = 4;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_143068d9d;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143068d9d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143068dee FUN_143068dee body=368 status=ok
// SIG undefined FUN_143068dee(void)

void FUN_143068dee(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x7000100;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_143068f0f;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143068f0f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143068f60 FUN_143068f60 body=38 status=ok
// SIG undefined FUN_143068f60(void)

undefined8 FUN_143068f60(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143068f86 FUN_143068f86 body=11963 status=ok
// SIG undefined FUN_143068f86(void)

void FUN_143068f86(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  int iVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1a4;
  longlong local_1a0;
  longlong local_198;
  undefined4 local_18c;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  longlong lStack_170;
  ulonglong local_168;
  ulonglong *puStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar19 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar19 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar19;
  param_2[6] = (ulonglong)(puVar19 + 1);
  puVar19[1] = 0;
  *puVar19 = &PTR_FUN_14a1fb978;
  puVar19[3] = 0;
  *(int *)(puVar19 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x24) = 8;
  }
  else {
    puVar17 = &local_168;
    if (puStack_160 != (ulonglong *)0x0) {
      puVar17 = puStack_160;
    }
    FUN_1446fe144(puVar19 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar19[3];
    if ((undefined8 *)puVar19[3] == (undefined8 *)0x0) {
      puVar10 = puVar19 + 2;
    }
    memcpy(puVar10,puVar17,(longlong)(int)local_158);
  }
  puVar19[0xd] = 0;
  puVar17 = (ulonglong *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar19 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x74) = 8;
  }
  else {
    if (puVar17 == (ulonglong *)0x0) {
      puVar17 = &uStack_150;
    }
    FUN_1446fe1b8(puVar19 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar19[0xd];
    if ((undefined8 *)puVar19[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar19 + 5;
    }
    memcpy(puVar10,puVar17,(longlong)iStack_108 << 3);
    puVar17 = (ulonglong *)CONCAT44(uStack_10c,local_110);
  }
  puVar19[0xf] = CONCAT44(uStack_fc,uStack_100);
  puVar19[0x10] = CONCAT44(uStack_f4,uStack_f8);
  if (puVar17 != (ulonglong *)0x0) {
    FUN_1400020a8(puVar17);
  }
  if (puStack_160 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  lVar16 = *(longlong *)(param_1 + 0x1c0);
  iVar20 = *(int *)(lVar16 + 0x3104);
  iVar13 = *(int *)(lVar16 + 0x3100);
  iVar1 = *(int *)(lVar16 + 0x30fc);
  iVar2 = *(int *)(lVar16 + 0x30f8);
  lVar16 = *(longlong *)(param_1 + 0x1b8);
  puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar19 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar19 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar19;
  param_2[6] = (ulonglong)(puVar19 + 1);
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar19 + 2) = (float)iVar2;
  *(float *)((longlong)puVar19 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar19 + 3) = 0;
  *(float *)((longlong)puVar19 + 0x1c) = (float)iVar13;
  *(float *)(puVar19 + 4) = (float)iVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  local_1c8 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0xe8))
            (*(longlong **)(param_1 + 0x1f0),param_2,*(longlong *)(param_1 + 0x1c0),
             *(longlong *)(param_1 + 0x1c0) + 0x30f8);
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  puStack_160 = (ulonglong *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2,&local_168);
  local_138 = FUN_140213588(lVar16,*(undefined1 *)(param_1 + 0x1e8),0);
  local_110 = 0;
  puVar18 = &DAT_14c9c0de8;
  if (*(char *)(param_1 + 0x1e9) == *(char *)(*(longlong *)(param_1 + 0x1c0) + 0x2398)) {
    puVar18 = &DAT_14c9c0d58;
  }
  uStack_130 = *(undefined8 *)(puVar18 + 0x10);
  puVar18 = &DAT_14c9c0d28;
  if (*(char *)(param_1 + 0x1e9) != '\0') {
    puVar18 = &DAT_14c9c0d88;
  }
  local_128 = *(undefined8 *)(puVar18 + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4ff90) && (FUN_144b3d300(&DAT_14ca4ff90), DAT_14ca4ff90 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar12 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ShadowQuality",1);
    if (plVar12 == (longlong *)0x0) {
      DAT_14ca4ff88 = 0;
    }
    else {
      DAT_14ca4ff88 = (**(code **)(*plVar12 + 0x68))(plVar12);
    }
    _Init_thread_footer(&DAT_14ca4ff90);
  }
  lVar14 = DAT_14ca4ff88;
  iVar20 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar20 == 0x40000002) {
    uVar11 = 0;
  }
  else {
    bVar21 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
      if (iVar20 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar21 = DVar8 == DVar9;
      }
      else {
        bVar21 = false;
      }
    }
    uVar11 = (ulonglong)(bVar21 ^ 1);
  }
  iVar20 = *(int *)(lVar14 + uVar11 * 4);
  iVar13 = 5;
  if (iVar20 < 5) {
    iVar13 = iVar20;
  }
  iVar20 = 0;
  if (0 < iVar13) {
    iVar20 = iVar13;
  }
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    if (((*(byte *)(lVar16 + 0x991) & 8) != 0) &&
       ((*(int *)(lVar16 + 0xbd0) < 1 ||
        ((*(byte *)(*(longlong *)(**(longlong **)(lVar16 + 0xbc8) + 8) + 0x72) & 4) == 0))))
    goto LAB_143069716;
    if (0 < *(int *)(DAT_14ca4ff80 + 4)) {
      lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x11b78);
      if (lVar14 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x11b70);
        lVar15 = 0;
        do {
          dVar22 = *(double *)(lVar3 + 0x20 + lVar15) - *(double *)(param_1 + 0x1c8);
          dVar5 = *(double *)(lVar3 + 0x28 + lVar15) - *(double *)(param_1 + 0x1d0);
          dVar6 = *(double *)(lVar3 + 0x30 + lVar15) - *(double *)(param_1 + 0x1d8);
          dVar23 = *(double *)(lVar3 + 0x50 + lVar15) + *(double *)(param_1 + 0x1e0) +
                   9.999999747378752e-05;
          dVar7 = 0.0;
          if (0.0 <= dVar23) {
            dVar7 = dVar23;
          }
          if (dVar6 * dVar6 + dVar22 * dVar22 + dVar5 * dVar5 <= dVar7 * dVar7) goto LAB_14306968f;
          lVar15 = lVar15 + 0x78;
        } while (lVar14 * 0x78 - lVar15 != 0);
      }
      goto LAB_143069716;
    }
LAB_14306968f:
    if (iVar20 - 1U < 5) {
      local_180 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x20) + 0x10);
      switch(iVar20) {
      case 1:
        lVar14 = *(longlong *)(param_1 + 0x1c0);
        local_18c = *(undefined4 *)(param_1 + 0x1ec);
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        local_188 = lVar16;
        FUN_145fe581e();
        uVar11 = 0;
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
        FUN_145fe581e();
        lVar3 = lStack_170;
        lVar16 = local_178;
        local_1a0 = local_178;
        local_198 = lStack_170;
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        FUN_145db6740();
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca52f48,0);
        FUN_145db6740();
        local_168 = DAT_14ca968c0;
        if (lVar16 != 0) {
          lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
          uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
          }
        }
        puStack_160 = (ulonglong *)uVar11;
        if (local_178 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_158 = uVar11;
        lVar16 = FUN_140028f18(param_2);
        if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
          param_2[0x35] = local_148;
          param_2[0x36] = uStack_140;
          param_2[0x33] = local_158;
          param_2[0x34] = uStack_150;
          param_2[0x31] = local_168;
          param_2[0x32] = (ulonglong)puStack_160;
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
          if ((undefined8 *)param_2[1] < puVar10) {
            FUN_140023dd8(param_2,0x28);
            puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar10 = puVar19 + 4;
          }
          *param_2 = (ulonglong)puVar10;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar19;
          param_2[6] = (ulonglong)(puVar19 + 1);
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_14a37d348;
          puVar19[2] = lVar16;
          *(undefined4 *)(puVar19 + 3) = 0;
          *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
        }
        local_1a4 = 0;
        if (local_1a0 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                    (longlong)*(int *)(local_1a0 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4)
                                   ,1);
          }
        }
        local_1c0 = (longlong *)&local_1a4;
        local_1c8 = &local_188;
        FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
        if (local_178 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_1b8 = &local_180;
        local_1c8 = (longlong *)lVar14;
        local_1c0 = &local_188;
        FUN_1473036eb(param_2,&local_178,lVar16,&local_18c);
        break;
      case 2:
        lVar14 = *(longlong *)(param_1 + 0x1c0);
        local_18c = *(undefined4 *)(param_1 + 0x1ec);
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        local_188 = lVar16;
        FUN_145fe581e();
        uVar11 = 0;
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
        FUN_145fe581e();
        lVar3 = lStack_170;
        lVar16 = local_178;
        local_1a0 = local_178;
        local_198 = lStack_170;
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        FUN_145db6dd8();
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca53070,0);
        FUN_145db6dd8();
        local_168 = DAT_14ca968c0;
        if (lVar16 != 0) {
          lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
          uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
          }
        }
        puStack_160 = (ulonglong *)uVar11;
        if (local_178 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_158 = uVar11;
        lVar16 = FUN_140028f18(param_2);
        if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
          param_2[0x35] = local_148;
          param_2[0x36] = uStack_140;
          param_2[0x33] = local_158;
          param_2[0x34] = uStack_150;
          param_2[0x31] = local_168;
          param_2[0x32] = (ulonglong)puStack_160;
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
          if ((undefined8 *)param_2[1] < puVar10) {
            FUN_140023dd8(param_2,0x28);
            puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar10 = puVar19 + 4;
          }
          *param_2 = (ulonglong)puVar10;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar19;
          param_2[6] = (ulonglong)(puVar19 + 1);
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_14a37d348;
          puVar19[2] = lVar16;
          *(undefined4 *)(puVar19 + 3) = 0;
          *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
        }
        local_1a4 = 0;
        if (local_1a0 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                    (longlong)*(int *)(local_1a0 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4)
                                   ,1);
          }
        }
        local_1c0 = (longlong *)&local_1a4;
        local_1c8 = &local_188;
        FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
        if (local_178 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_1b8 = &local_180;
        local_1c8 = (longlong *)lVar14;
        local_1c0 = &local_188;
        FUN_1473040fa(param_2,&local_178,lVar16,&local_18c);
        break;
      case 3:
        lVar14 = *(longlong *)(param_1 + 0x1c0);
        local_18c = *(undefined4 *)(param_1 + 0x1ec);
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        local_188 = lVar16;
        FUN_145fe581e();
        uVar11 = 0;
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
        FUN_145fe581e();
        lVar3 = lStack_170;
        lVar16 = local_178;
        local_1a0 = local_178;
        local_198 = lStack_170;
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        FUN_145db7470();
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca53198,0);
        FUN_145db7470();
        local_168 = DAT_14ca968c0;
        if (lVar16 != 0) {
          lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
          uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
          }
        }
        puStack_160 = (ulonglong *)uVar11;
        if (local_178 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_158 = uVar11;
        lVar16 = FUN_140028f18(param_2);
        if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
          param_2[0x35] = local_148;
          param_2[0x36] = uStack_140;
          param_2[0x33] = local_158;
          param_2[0x34] = uStack_150;
          param_2[0x31] = local_168;
          param_2[0x32] = (ulonglong)puStack_160;
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
          if ((undefined8 *)param_2[1] < puVar10) {
            FUN_140023dd8(param_2,0x28);
            puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar10 = puVar19 + 4;
          }
          *param_2 = (ulonglong)puVar10;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar19;
          param_2[6] = (ulonglong)(puVar19 + 1);
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_14a37d348;
          puVar19[2] = lVar16;
          *(undefined4 *)(puVar19 + 3) = 0;
          *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
        }
        local_1a4 = 0;
        if (local_1a0 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                    (longlong)*(int *)(local_1a0 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4)
                                   ,1);
          }
        }
        local_1c0 = (longlong *)&local_1a4;
        local_1c8 = &local_188;
        FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
        if (local_178 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_1b8 = &local_180;
        local_1c8 = (longlong *)lVar14;
        local_1c0 = &local_188;
        FUN_14730469f(param_2,&local_178,lVar16,&local_18c);
        break;
      case 4:
        lVar14 = *(longlong *)(param_1 + 0x1c0);
        local_18c = *(undefined4 *)(param_1 + 0x1ec);
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        local_188 = lVar16;
        FUN_145fe581e();
        uVar11 = 0;
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
        FUN_145fe581e();
        lVar3 = lStack_170;
        lVar16 = local_178;
        local_1a0 = local_178;
        local_198 = lStack_170;
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        FUN_145db7b08();
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca532c0,0);
        FUN_145db7b08();
        local_168 = DAT_14ca968c0;
        if (lVar16 != 0) {
          lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
          uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
          }
        }
        puStack_160 = (ulonglong *)uVar11;
        if (local_178 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_158 = uVar11;
        lVar16 = FUN_140028f18(param_2);
        if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
          param_2[0x35] = local_148;
          param_2[0x36] = uStack_140;
          param_2[0x33] = local_158;
          param_2[0x34] = uStack_150;
          param_2[0x31] = local_168;
          param_2[0x32] = (ulonglong)puStack_160;
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
          if ((undefined8 *)param_2[1] < puVar10) {
            FUN_140023dd8(param_2,0x28);
            puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar10 = puVar19 + 4;
          }
          *param_2 = (ulonglong)puVar10;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar19;
          param_2[6] = (ulonglong)(puVar19 + 1);
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_14a37d348;
          puVar19[2] = lVar16;
          *(undefined4 *)(puVar19 + 3) = 0;
          *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
        }
        local_1a4 = 0;
        if (local_1a0 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                    (longlong)*(int *)(local_1a0 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4)
                                   ,1);
          }
        }
        local_1c0 = (longlong *)&local_1a4;
        local_1c8 = &local_188;
        FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
        if (local_178 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_1b8 = &local_180;
        local_1c8 = (longlong *)lVar14;
        local_1c0 = &local_188;
        FUN_147304c45(param_2,&local_178,lVar16,&local_18c);
        break;
      case 5:
        lVar14 = *(longlong *)(param_1 + 0x1c0);
        local_18c = *(undefined4 *)(param_1 + 0x1ec);
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        local_188 = lVar16;
        FUN_145fe581e();
        uVar11 = 0;
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
        FUN_145fe581e();
        lVar3 = lStack_170;
        lVar16 = local_178;
        local_1a0 = local_178;
        local_198 = lStack_170;
        uVar4 = *(undefined8 *)(lVar14 + 0x13818);
        FUN_145db81a0();
        FUN_1448e935e(uVar4,&local_178,&DAT_14ca533e8,0);
        FUN_145db81a0();
        local_168 = DAT_14ca968c0;
        if (lVar16 != 0) {
          lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
          uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
          }
        }
        puStack_160 = (ulonglong *)uVar11;
        if (local_178 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (uVar11 == 0) {
            uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_158 = uVar11;
        lVar16 = FUN_140028f18(param_2);
        if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
          param_2[0x35] = local_148;
          param_2[0x36] = uStack_140;
          param_2[0x33] = local_158;
          param_2[0x34] = uStack_150;
          param_2[0x31] = local_168;
          param_2[0x32] = (ulonglong)puStack_160;
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
          if ((undefined8 *)param_2[1] < puVar10) {
            FUN_140023dd8(param_2,0x28);
            puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar10 = puVar19 + 4;
          }
          *param_2 = (ulonglong)puVar10;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar19;
          param_2[6] = (ulonglong)(puVar19 + 1);
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_14a37d348;
          puVar19[2] = lVar16;
          *(undefined4 *)(puVar19 + 3) = 0;
          *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
        }
        local_1a4 = 0;
        if (local_1a0 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                    (longlong)*(int *)(local_1a0 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4)
                                   ,1);
          }
        }
        local_1c0 = (longlong *)&local_1a4;
        local_1c8 = &local_188;
        FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
        if (local_178 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                    (longlong)*(int *)(local_178 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),
                                   (longlong)*(int *)(local_178 + 0xd4),1);
          }
        }
        local_1b8 = &local_180;
        local_1c8 = (longlong *)lVar14;
        local_1c0 = &local_188;
        FUN_1473051eb(param_2,&local_178,lVar16,&local_18c);
      }
    }
  }
  else if (*(char *)(param_1 + 0x1ea) == '\x01') {
    switch(iVar20) {
    case 1:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145dba930();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53ad8,0);
      FUN_145dba930();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_147305791(param_2,&local_178,lVar16,&local_18c);
      break;
    case 2:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145dbafc8();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53c00,0);
      FUN_145dbafc8();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_147305d37(param_2,&local_178,lVar16,&local_18c);
      break;
    case 3:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145dbb660();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53d28,0);
      FUN_145dbb660();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_1473062dd(param_2,&local_178,lVar16,&local_18c);
      break;
    case 4:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145dbbcf8();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53e50,0);
      FUN_145dbbcf8();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_147306883(param_2,&local_178,lVar16,&local_18c);
      break;
    case 5:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145dbc390();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53f78,0);
      FUN_145dbc390();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_147306e29(param_2,&local_178,lVar16,&local_18c);
    }
  }
  else {
    switch(iVar20) {
    case 1:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145db8838();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53510,0);
      FUN_145db8838();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_1473073cf(param_2,&local_178,lVar16,&local_18c);
      break;
    case 2:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145db8ed0();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53638,0);
      FUN_145db8ed0();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_147307975(param_2,&local_178,lVar16,&local_18c);
      break;
    case 3:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145db9568();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53760,0);
      FUN_145db9568();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_147307f1b(param_2,&local_178,lVar16,&local_18c);
      break;
    case 4:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145db9c00();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca53888,0);
      FUN_145db9c00();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_1473084c1(param_2,&local_178,lVar16,&local_18c);
      break;
    case 5:
      lVar14 = *(longlong *)(param_1 + 0x1c0);
      local_18c = *(undefined4 *)(param_1 + 0x1ec);
      local_180 = 0;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      local_188 = lVar16;
      FUN_145fe581e();
      uVar11 = 0;
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca50198,0);
      FUN_145fe581e();
      lVar3 = lStack_170;
      lVar16 = local_178;
      local_1a0 = local_178;
      local_198 = lStack_170;
      uVar4 = *(undefined8 *)(lVar14 + 0x13818);
      FUN_145dba298();
      FUN_1448e935e(uVar4,&local_178,&DAT_14ca539b0,0);
      FUN_145dba298();
      local_168 = DAT_14ca968c0;
      if (lVar16 != 0) {
        lVar16 = (longlong)*(int *)(lVar16 + 0xd4);
        uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + lVar16 * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),lVar16,1);
        }
      }
      puStack_160 = (ulonglong *)uVar11;
      if (local_178 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (uVar11 == 0) {
          uVar11 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_158 = uVar11;
      lVar16 = FUN_140028f18(param_2);
      if ((lVar16 != 0) && ((local_a0 & 0x10000000) == 0)) {
        param_2[0x35] = local_148;
        param_2[0x36] = uStack_140;
        param_2[0x33] = local_158;
        param_2[0x34] = uStack_150;
        param_2[0x31] = local_168;
        param_2[0x32] = (ulonglong)puStack_160;
        puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar19 + 4;
        if ((undefined8 *)param_2[1] < puVar10) {
          FUN_140023dd8(param_2,0x28);
          puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar10 = puVar19 + 4;
        }
        *param_2 = (ulonglong)puVar10;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar19;
        param_2[6] = (ulonglong)(puVar19 + 1);
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_14a37d348;
        puVar19[2] = lVar16;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x1c) = 1;
      }
      local_1a4 = 0;
      if (local_1a0 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_198 + 8) + 0x50) +
                  (longlong)*(int *)(local_1a0 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_198 + 8),(longlong)*(int *)(local_1a0 + 0xd4),1
                                );
        }
      }
      local_1c0 = (longlong *)&local_1a4;
      local_1c8 = &local_188;
      FUN_1472faba2(param_2,&local_1a0,lVar16,lVar14);
      if (local_178 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_170 + 8) + 0x50) +
                  (longlong)*(int *)(local_178 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lStack_170 + 8),(longlong)*(int *)(local_178 + 0xd4),
                                 1);
        }
      }
      local_1b8 = &local_180;
      local_1c8 = (longlong *)lVar14;
      local_1c0 = &local_188;
      FUN_147308a67(param_2,&local_178,lVar16,&local_18c);
    }
  }
  FUN_142ce821c(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x3094));
  puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar19 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar19 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar19;
  param_2[6] = (ulonglong)(puVar19 + 1);
  puVar19[1] = 0;
  *puVar19 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar19 + 2) = 0;
  *(undefined8 *)((longlong)puVar19 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0;
LAB_143069716:
  if ((local_90 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14306be42 FUN_14306be42 body=450 status=ok
// SIG undefined FUN_14306be42(void)

void FUN_14306be42(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x40);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14306bf5d:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14306bf9a:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x40;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14306be98;
LAB_14306be8d:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14306be98:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3ff) goto code_r0x00014306bec4;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x10 + 0x1a;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14306bf1a:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14306bf9a;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14306bf5d;
code_r0x00014306bec4:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14306bf1a;
    }
  }
  goto LAB_14306be8d;
}



// FUNCTION 14306c004 FUN_14306c004 body=99 status=ok
// SIG undefined FUN_14306c004(void)

void FUN_14306c004(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14306c067 FUN_14306c067 body=9642 status=ok
// SIG undefined FUN_14306c067(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306c067(void)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14ca4cb18);
  if (cVar1 == '\0') {
    _DAT_14ca4cb18 = 0;
    uRam000000014ca4cb20 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_a8._0_4_ = 3;
  local_b8 = 0x60;
  FUN_14078dbce(&DAT_14ca4cb28,L"r.SSR.Quality",&local_a8,
                L"Whether to use screen space reflections and at what quality setting.\n(limits the setting in the post process settings which has a different scale)\n(costs performance, adds more visual realism but the technique has limits)\n 0: off (default)\n 1: low (no glossy)\n 2: medium (no glossy)\n 3: high (glossy/using roughness, few samples)\n 4: very high (likely too slow for real-time)"
               );
  atexit(FUN_143037000);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14ca4cb48,L"r.SSR.HalfResSceneColor",&DAT_14ca4cb40,
                L"Use half res scene color as input for SSR. Improves performance without much of a visual quality loss."
               );
  atexit(FUN_143037045);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4cb58,L"r.SSR.Temporal",&local_a8,
                L"Defines if we use the temporal smoothing for the screen space reflection\n 0 is off (for debugging), 1 is on (default)"
               );
  atexit(FUN_14303708a);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4cb70,L"r.SSR.Stencil",&local_a8,
                L"Defines if we use the stencil prepass for the screen space reflection\n 0 is off (default), 1 is on"
               );
  atexit(FUN_1430370cf);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4cb88,L"r.SSR.Compute",&local_a8,
                L"Use compute for SSR if possible. Only available for non tiled SSR with no stencil prepass currently\n 0 is PS (default), 1 is sync compute, 2 is async compute"
               );
  atexit(FUN_143037114);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4cba0,L"r.SSGI.LeakFreeReprojection",&local_a8,
                L"Whether use a more expensive but leak free reprojection of previous frame\'s scene color.\n"
               );
  atexit(FUN_143037159);
  local_a8._0_4_ = 4;
  local_b8 = 0x60;
  FUN_14078dbce(&DAT_14ca4cbb8,L"r.SSGI.Quality",&local_a8,
                L"Quality setting to control number of ray shot with SSGI, between 1 and 4 (defaults to 4).\n"
               );
  atexit(FUN_14303719e);
  local_a8._0_4_ = 0x3f000000;
  local_b8 = 0x60;
  FUN_140a6b41e(&DAT_14ca4cbd0,L"r.SSGI.MinimumLuminance",&local_a8,&DAT_149dfb77a);
  atexit(FUN_1430371e3);
  local_a8._0_4_ = 1;
  local_b8 = 0x60;
  FUN_14078dbce(&DAT_14ca4cbe8,L"r.SSGI.RejectUncertainRays",&local_a8,
                L"Rejects the screen space ray if it was uncertain due to going behind screen geometry."
               );
  atexit(FUN_143037228);
  local_a8._0_4_ = 1;
  local_b8 = 0x60;
  FUN_14078dbce(&DAT_14ca4cc00,L"r.SSGI.TerminateCertainRay",&local_a8,
                L"Optimisations that if the screen space ray is certain and didn\'t find any geometry, don\'t fallback on otehr tracing technic."
               );
  atexit(FUN_14303726d);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x4b189680);
  local_b8 = 0x60;
  FUN_140a6b41e(&DAT_14ca4cc18,L"r.SSGI.SkyDistance",&local_a8,L"Distance of the sky in KM.");
  atexit(FUN_1430372b2);
  local_a0 = FUN_143037326;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cc30,&local_a8);
  local_a0 = FUN_143037566;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cc40,&local_a8);
  local_a0 = FUN_1430377a6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cc50,&local_a8);
  local_a0 = FUN_1430379e6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cc60,&local_a8);
  local_a0 = FUN_143037c26;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cc70,&local_a8);
  local_a0 = FUN_143037e66;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cc80,&local_a8);
  local_a0 = FUN_1430380a6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cc90,&local_a8);
  local_a0 = FUN_1430382e6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cca0,&local_a8);
  local_a0 = FUN_143038526;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4ccb0,&local_a8);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_b8 = 0x60;
  FUN_14078dbce(&DAT_14ca4ccd0,L"r.SSR.TiledComposite",&local_a8,
                L"Enable tiled optimization of the screen space reflection.");
  atexit(FUN_14303cc64);
  local_a8._0_4_ = 0xbf800000;
  local_b8 = 0x60;
  FUN_140a6b41e(&DAT_14ca4cce8,L"r.SSR.TiledComposite.OverrideMaxRoughness",&local_a8,
                L"Ignore pixels with roughness larger than this value.<0: use derived value from ScreenSpaceReflectionMaxRoughness of FinalPostProcessSettings."
               );
  atexit(FUN_14303cca9);
  local_a8._0_4_ = 0;
  local_b8 = 0x60;
  FUN_140a6b41e(&DAT_14ca4cd00,L"r.SSR.TiledComposite.MinSpecular",&local_a8,
                L"Ignore pixels with very small specular contribution in case max roughness cannot filter them out"
               );
  atexit(FUN_14303ccee);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_b8 = 0x60;
  FUN_14078dbce(&DAT_14ca4cd18,L"r.SSR.TiledComposite.TwoSidedFoliage",&local_a8,
                L"0: diable SSR for foliage if tiling is enabled.");
  atexit(FUN_14303cd33);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_b8 = 0x60;
  FUN_140bd5914(&DAT_14ca4cd30,L"r.SSR.TiledComposite.Visualize",&local_a8,
                L"1: Visualize the tiling region.");
  atexit(FUN_14303cd78);
  local_a0 = FUN_145f6d146;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4ce60,&local_a8);
  local_a0 = FUN_145f35cf4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4cf88,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_143065374;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca4d000,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14306538e;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca4d070,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1430653a8;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca4d0e0,6,&local_a8);
  FUN_1446f470e(&DAT_14ca4d0e4,L"Material",1);
  local_b8 = 0x21;
  FUN_141471170(&DAT_14ca4d0f0,L"r.ShaderPrint",&DAT_14ca4d100,L"ShaderPrint debugging toggle.\n");
  atexit(FUN_14303e3f7);
  local_a8._0_4_ = 8;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d108,L"r.ShaderPrint.FontSize",&local_a8,L"ShaderPrint font size.\n");
  atexit(FUN_14303e43c);
  local_a8._0_4_ = 0;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d120,L"r.ShaderPrint.FontSpacingX",&local_a8,
                L"ShaderPrint horizontal spacing between symbols.\n");
  atexit(FUN_14303e481);
  local_a8._0_4_ = 8;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d138,L"r.ShaderPrint.FontSpacingY",&local_a8,
                L"ShaderPrint vertical spacing between symbols.\n");
  atexit(FUN_14303e4c6);
  local_a8._0_4_ = 2000;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d150,L"r.ShaderPrint.MaxCharacters",&local_a8,
                L"ShaderPrint output buffer size.\n");
  atexit(FUN_14303e50b);
  local_a8._0_4_ = 0x20;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d168,L"r.ShaderPrint.MaxWidget",&local_a8,
                L"ShaderPrint max widget count.\n");
  atexit(FUN_14303e550);
  local_a8._0_4_ = 0x20;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d180,L"r.ShaderPrint.MaxLine",&local_a8,L"ShaderPrint max line count.\n");
  atexit(FUN_14303e595);
  local_a8._0_4_ = 0x20;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d198,L"r.ShaderPrint.MaxTriangle",&local_a8,
                L"ShaderPrint max triangle count.\n");
  atexit(FUN_14303e5da);
  local_a8._0_4_ = 0;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d1b0,L"r.ShaderPrint.Lock",&local_a8,L"Lock the line drawing.\n");
  atexit(FUN_14303e61f);
  local_a8._0_4_ = 1;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d1c8,L"r.ShaderPrint.DrawOccludedLines",&local_a8,
                L"Whether to draw occluded lines using checkboarding and lower opacity.\n");
  atexit(FUN_14303e664);
  local_a8._0_4_ = 0;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d1e0,L"r.ShaderPrint.Zoom",&local_a8,
                L"Enable zoom magnification around the mouse cursor.\n");
  atexit(FUN_14303e6a9);
  local_a8._0_4_ = 0x10;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d1f8,L"r.ShaderPrint.Zoom.Pixel",&local_a8,
                L"Number of pixels magnified around the mouse cursor.\n");
  atexit(FUN_14303e6ee);
  local_a8._0_4_ = 8;
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d210,L"r.ShaderPrint.Zoom.Factor",&local_a8,
                L"Zoom factor for magnification around the mouse cursor.\n");
  atexit(FUN_14303e733);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,3);
  local_b8 = 0x21;
  FUN_14078dbce(&DAT_14ca4d228,L"r.ShaderPrint.Zoom.Corner",&local_a8,
                L"Select in which corner the zoom magnifer is displayed (0:top-left, 1:top-right, 2:bottom-right, 3:bottom-left).\n"
               );
  atexit(FUN_14303e778);
  DAT_14ca4d240 = 0;
  _DAT_14ca4d248 = 0;
  atexit(FUN_14303e7bd);
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  *(undefined1 *)((longlong)puVar2 + 0xd) = 1;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14a3030c0;
  FUN_146308c8a(puVar2);
  _DAT_14ca4d260 = 0xffffffff;
  DAT_14ca4d264 = 5;
  DAT_14ca4d265 = 1;
  DAT_14ca4d266 = 0;
  DAT_14ca4d268 = 0;
  DAT_14ca4d258 = &PTR_FUN_14a303130;
  DAT_14ca4d250 = puVar2;
  FUN_146308d84();
  atexit(FUN_14303e7ee);
  _DAT_14ca4d278 = 0xffffffff;
  DAT_14ca4d27c = 5;
  DAT_14ca4d27d = 1;
  DAT_14ca4d27e = 0;
  DAT_14ca4d280 = 0;
  DAT_14ca4d270 = &PTR_FUN_14a303190;
  FUN_146309048();
  atexit(FUN_14303e81d);
  local_a0 = FUN_1405f00c8;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca4d310,&local_a8);
  local_a0 = FUN_1405efea2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4d450,&local_a8);
  local_a0 = FUN_145ee3538;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4d578,&local_a8);
  local_a0 = FUN_145f92b1e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4d6a0,&local_a8);
  local_a0 = FUN_145ea235a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4d7c8,&local_a8);
  local_a0 = FUN_145e5c6be;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4d8f0,&local_a8);
  local_a0 = FUN_145f1bd74;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4da18,&local_a8);
  local_a0 = FUN_145ea28cc;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4db40,&local_a8);
  local_a0 = FUN_145ddaf70;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4dc68,&local_a8);
  local_a0 = FUN_146096ada;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4dd90,&local_a8);
  local_a0 = FUN_145f1c364;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4deb8,&local_a8);
  local_a0 = FUN_145e75b6c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4dfe0,&local_a8);
  local_a0 = FUN_145e94ab2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4e108,&local_a8);
  local_a0 = FUN_145e760da;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4e230,&local_a8);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e250,L"r.Shading.EnergyConservation",&local_a8,
                L"0 to disable energy conservation on shading models.\n 0: off\n 1: on");
  atexit(FUN_14304084c);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e268,L"r.Shading.EnergyPreservation",&local_a8,
                L"0 to disable energy preservation on shading models, i.e. the energy attenuation on diffuse lighting caused by the specular reflection. Require energy conservation to be enabled\n 0: off\n 1: on"
               );
  atexit(FUN_143040891);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e280,L"r.Shading.FurnaceTest",&local_a8,
                L"Enable/disable furnace for shading validation.");
  atexit(FUN_1430408d6);
  local_a8._0_4_ = 0x40;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e298,L"r.Shading.FurnaceTest.SampleCount",&local_a8,
                L"Number of sampler per pixel used for furnace tests.");
  atexit(FUN_14304091b);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e2b0,L"r.Shading.EnergyConservation.Format",&local_a8,
                L"Energy conservation table format 0: 16bits, 1: 32bits.");
  atexit(FUN_143040960);
  local_a8._0_4_ = 0x20;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e2c8,L"r.Shading.EnergyConservation.Resolution",&local_a8,
                L"Energy conservation table resolution. Used only when using runtime generated tables."
               );
  atexit(FUN_1430409a5);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e2e0,L"r.Shading.EnergyConservation.RuntimeGeneration",&local_a8,
                L"Enable Energy conservation tables generation at runtime instead of relying on precomputed tables."
               );
  atexit(FUN_1430409ea);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_b8 = 0x24;
  FUN_14078dbce(&DAT_14ca4e2f8,L"r.Material.EnergyConservation",&local_a8,
                L"Enable energy conservation for legacy materials (project settings, read only). Please note that when Substrate is enabled, energy conservation is forced to enabled."
               );
  atexit(FUN_143040a2f);
  _DAT_14ca4e318 = 0xffffffff;
  DAT_14ca4e31c = 5;
  DAT_14ca4e31d = 1;
  DAT_14ca4e31e = 0;
  DAT_14ca4e320 = 0;
  DAT_14ca4e328 = 0;
  DAT_14ca4e330 = 0;
  DAT_14ca4e338 = 0;
  DAT_14ca4e340 = 0;
  DAT_14ca4e310 = &PTR_FUN_14a303220;
  FUN_146309312();
  atexit(FUN_143040a74);
  local_a0 = FUN_145e95022;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4e460,&local_a8);
  local_a0 = FUN_145e95592;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4e588,&local_a8);
  local_b8 = 0x20;
  FUN_1415c789c(&DAT_14ca4e598,L"r.Shadow.LODDistanceFactor",&DAT_14c760a0c,
                L"Multiplier for LOD selection distance when rendering regular shadows (global)");
  atexit(FUN_1430429f5);
  local_b8 = 0x20;
  FUN_1415c789c(&DAT_14ca4e5a8,L"r.Shadow.LODDistanceFactor.CascadeScale",&DAT_14ca4e5b8,
                L"Multiplier for LOD selection distance when rendering regular shadows (scales with cascade index)"
               );
  atexit(FUN_143042a3a);
  local_b8 = 0x20;
  FUN_1415c789c(&DAT_14ca4e5c0,L"r.Shadow.FarShadow.LODDistanceFactor",&DAT_14c760a10,
                L"Multiplier for LOD selection distance when rendering far shadows");
  atexit(FUN_143042a7f);
  local_b8 = 4;
  FUN_14153156c(&DAT_14ca4e5d0,L"r.Shadow.OnePassPointLight.UseCachedMDCs",&DAT_14c760a14,
                L"Controls whether to use a dedicated cached mesh draw command pass for one pass point lights. This increases the cost of caching / storing mesh draw commands but improves the CPU rendering time of point lights."
               );
  atexit(FUN_143042ac4);
  local_a0 = FUN_1403d299a;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca4e668,&local_a8);
  local_a0 = FUN_145f8567c;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca4e700,&local_a8);
  local_a0 = FUN_145d5cce2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4e828,&local_a8);
  local_a0 = FUN_14608248c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4e950,&local_a8);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e960,L"r.Shadow.ShouldBeginDeferredCullingAfterShadowRendering",&local_a8,
                L"Temporary: If turned on, a new deferred scope of instance culling will be started directly after shadow depth rendering (iff instance occlusion culling is enabled) to work around a bug."
               );
  atexit(FUN_143042b39);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e978,L"r.Shadow.ForceSerialSingleRenderPass",&local_a8,
                L"Force Serial shadow passes to render in 1 pass.");
  atexit(FUN_143042b7e);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca5b020,L"r.Shadow.Nanite",&local_a8,L"Enables shadows from Nanite meshes.");
  atexit(FUN_143042bc3);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e990,L"r.Shadow.NaniteUseHZB",&local_a8,L"Enables HZB for Nanite shadows."
               );
  atexit(FUN_143042c08);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4e9a8,L"r.Shadow.NaniteUpdateStreaming",&local_a8,
                L"Produce Nanite geometry streaming requests from shadow map rendering.");
  atexit(FUN_143042c4d);
  local_a8._0_4_ = 1;
  local_b8 = 0x24;
  FUN_14078dbce(&DAT_14ca4e9d0,L"r.SupportPointLightWholeSceneShadows",&local_a8,
                L"Enables shadowcasting point lights.");
  atexit(FUN_143042fab);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_b8 = 0x24;
  FUN_14078dbce(&DAT_14ca4e9e8,L"r.Shadow.DetectVertexShaderLayerAtRuntime",&local_a8,
                L"Forces the compilation of the vslayer shader permutation even if the platform (RHI) does not declare compile-time support through RHISupportsVertexShaderLayer.Enabled by default for windows/SM5 as DX11 almost universally supports this at runtime."
               );
  atexit(FUN_143042ff0);
  local_a0 = FUN_14006f956;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4eb18,&local_a8);
  local_a0 = FUN_1472ecc08;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4ec40,&local_a8);
  local_a0 = FUN_14006f83a;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4ed68,&local_a8);
  local_a0 = FUN_1472ecf7c;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4ee90,&local_a8);
  local_a0 = FUN_14006fdc6;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4efb8,&local_a8);
  local_a0 = FUN_14006fcaa;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4f0e0,&local_a8);
  local_a0 = FUN_14006fb8e;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4f208,&local_a8);
  local_a0 = FUN_14006f50a;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4f330,&local_a8);
  local_a0 = FUN_14006f3ee;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4f458,&local_a8);
  local_a0 = FUN_14006f71e;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4f580,&local_a8);
  local_a0 = FUN_14006fa72;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4f6a8,&local_a8);
  local_a0 = FUN_1472ed9e0;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca4f7d0,&local_a8);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4f7e0,L"r.ParallelShadows",&local_a8,
                L"Toggles parallel shadow rendering. Parallel rendering must be enabled for this to have an effect."
               );
  atexit(FUN_1430433aa);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4f7f8,L"r.ParallelShadowsNonWholeScene",&local_a8,
                L"Toggles parallel shadow rendering for non whole-scene shadows. r.ParallelShadows must be enabled for this to have an effect."
               );
  atexit(FUN_1430433ef);
  local_a0 = FUN_1460826f2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4f928,&local_a8);
  local_a0 = FUN_145e95b02;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4fa50,&local_a8);
  local_a0 = FUN_145e96072;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4fb78,&local_a8);
  local_a0 = FUN_145e76648;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca4fca0,&local_a8);
  _DAT_14ca4fcb0 = 0;
  _DAT_14ca4fcb8 = 0;
  _DAT_14ca4fcc0 = 0;
  _DAT_14ca4fcc8 = L".\\Runtime/Renderer/Private/ShadowDepthRendering.cpp(1350)";
  DAT_14ca4fcd0 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca4fcd4 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(undefined1 **)(&DAT_14cafe970 + uVar3 * 0x10) = &LAB_1405e28cd;
  (&DAT_14cafe978)[uVar3 * 2] = L"CSMShadowDepth";
  atexit((_func_5014 *)&LAB_143049089);
  DAT_14ca4fcd8 = 1;
  DAT_14ca4fcdc = 1;
  _DAT_14ca11bb8 = FUN_1405e28da;
  _DAT_14ca11e54 = 1;
  _DAT_14ca12024 = DAT_14ca4fcd4;
  atexit((_func_5014 *)&LAB_1430490b3);
  uVar3 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca4fce0 = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(undefined1 **)(&DAT_14cafe430 + uVar3 * 0x10) = &LAB_1472ee3e9;
  *(wchar_t **)(&DAT_14cafe438 + uVar3 * 0x10) = L"CSMShadowDepth";
  atexit((_func_5014 *)&LAB_143049111);
  DAT_14ca4fce4 = 1;
  DAT_14ca119e8 = FUN_1405e28da;
  DAT_14ca11d6c = 1;
  DAT_14ca11f3c = DAT_14ca4fce0;
  atexit((_func_5014 *)&LAB_14304912a);
  DAT_14ca4fce8 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca4fcec = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(undefined1 **)(&DAT_14cafe970 + uVar3 * 0x10) = &LAB_14060817a;
  (&DAT_14cafe978)[uVar3 * 2] = L"OnePassPointLightShadowDepth";
  atexit((_func_5014 *)&LAB_14304916a);
  DAT_14ca4fcf0 = 1;
  DAT_14ca4fcf4 = 1;
  _DAT_14ca11bc8 = FUN_140608187;
  _DAT_14ca11e5c = 1;
  _DAT_14ca1202c = DAT_14ca4fcec;
  atexit((_func_5014 *)&LAB_143049194);
  uVar3 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca4fcf8 = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(undefined1 **)(&DAT_14cafe430 + uVar3 * 0x10) = &LAB_1472ee3f6;
  *(wchar_t **)(&DAT_14cafe438 + uVar3 * 0x10) = L"OnePassPointLightShadowDepth";
  atexit((_func_5014 *)&LAB_1430491eb);
  DAT_14ca4fcfc = 1;
  _DAT_14ca119f8 = FUN_140608187;
  _DAT_14ca11d74 = 1;
  _DAT_14ca11f44 = DAT_14ca4fcf8;
  atexit((_func_5014 *)&LAB_143049204);
  DAT_14ca4fd00 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca4fd04 = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(undefined1 **)(&DAT_14cafe970 + uVar3 * 0x10) = &LAB_140608ee6;
  (&DAT_14cafe978)[uVar3 * 2] = L"VSMShadowDepth";
  atexit((_func_5014 *)&LAB_14304923d);
  DAT_14ca4fd08 = 1;
  DAT_14ca4fd0c = 1;
  _DAT_14ca11bc0 = FUN_140608ef3;
  _DAT_14ca11e58 = 1;
  _DAT_14ca12028 = DAT_14ca4fd04;
  atexit((_func_5014 *)&LAB_143049267);
  local_a8._0_4_ = 0x41200000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fd10,L"r.Shadow.CSMDepthBias",&local_a8,L"Constant depth bias used by CSM"
               );
  atexit(FUN_1430492c0);
  local_a8._0_4_ = 0x40400000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fd28,L"r.Shadow.CSMSlopeScaleDepthBias",&local_a8,
                L"Slope scale depth bias used by CSM");
  atexit(FUN_143049305);
  local_a8._0_4_ = 0x41200000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fd40,L"r.Shadow.PerObjectDirectionalDepthBias",&local_a8,
                L"Constant depth bias used by per-object shadows from directional lights\nLower values give better shadow contact, but increase self-shadowing artifacts"
               );
  atexit(FUN_14304934a);
  local_a8._0_4_ = 0x40400000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fd58,L"r.Shadow.PerObjectDirectionalSlopeDepthBias",&local_a8,
                L"Slope scale depth bias used by per-object shadows from directional lights\nLower values give better shadow contact, but increase self-shadowing artifacts"
               );
  atexit(FUN_14304938f);
  local_a8._0_4_ = 0x3f000000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fd70,L"r.Shadow.CSMSplitPenumbraScale",&local_a8,
                L"Scale applied to the penumbra size of Cascaded Shadow Map splits, useful for minimizing the transition between splits"
               );
  atexit(FUN_1430493d4);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4fd88,L"r.Shadow.CSMDepthBoundsTest",&local_a8,
                L"Whether to use depth bounds tests rather than stencil tests for the CSM bounds");
  atexit(FUN_143049419);
  local_a8._0_4_ = 0x42700000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fda0,L"r.Shadow.TransitionScale",&local_a8,
                L"This controls the \'fade in\' region between a caster and where its shadow shows up.  Larger values make a smaller region which will have more self shadowing artifacts"
               );
  atexit(FUN_14304945e);
  local_a8._0_4_ = 0x3f666666;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fdb8,L"r.Shadow.CSMReceiverBias",&local_a8,
                L"Receiver bias used by CSM. Value between 0 and 1.");
  atexit(FUN_1430494a3);
  local_a8._0_4_ = 0x3ca3d70a;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fdd0,L"r.Shadow.PointLightDepthBias",&local_a8,
                L"Depth bias that is applied in the depth pass for shadows from point lights. (0.03 avoids peter paning but has some shadow acne)"
               );
  atexit(FUN_1430494e8);
  local_a8._0_4_ = 0x40400000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fde8,L"r.Shadow.PointLightSlopeScaleDepthBias",&local_a8,
                L"Slope scale depth bias that is applied in the depth pass for shadows from point lights"
               );
  atexit(FUN_14304952d);
  local_a8._0_4_ = 0x3ccccccd;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fe00,L"r.Shadow.RectLightDepthBias",&local_a8,
                L"Depth bias that is applied in the depth pass for shadows from rect lights. (0.03 avoids peter paning but has some shadow acne)"
               );
  atexit(FUN_143049572);
  local_a8._0_4_ = 0x40200000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fe18,L"r.Shadow.RectLightSlopeScaleDepthBias",&local_a8,
                L"Slope scale depth bias that is applied in the depth pass for shadows from rect lights"
               );
  atexit(FUN_1430495b7);
  local_a8._0_4_ = 0x3e99999a;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fe30,L"r.Shadow.RectLightReceiverBias",&local_a8,
                L"Receiver bias used by rect light. Value between 0 and 1.");
  atexit(FUN_1430495fc);
  local_a8._0_4_ = 0x40400000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fe48,L"r.Shadow.SpotLightDepthBias",&local_a8,
                L"Depth bias that is applied in the depth pass for whole-scene projected shadows from spot lights"
               );
  atexit(FUN_143049641);
  local_a8._0_4_ = 0x40400000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fe60,L"r.Shadow.SpotLightSlopeDepthBias",&local_a8,
                L"Slope scale depth bias that is applied in the depth pass for whole-scene projected shadows from spot lights"
               );
  atexit(FUN_143049686);
  local_a8._0_4_ = 0x40400000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fe78,L"r.Shadow.PerObjectSpotLightDepthBias",&local_a8,
                L"Depth bias that is applied in the depth pass for per-object projected shadows from spot lights"
               );
  atexit(FUN_1430496cb);
  local_a8._0_4_ = 0x40400000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fe90,L"r.Shadow.PerObjectSpotLightSlopeDepthBias",&local_a8,
                L"Slope scale depth bias that is applied in the depth pass for per-object projected shadows from spot lights"
               );
  atexit(FUN_143049710);
  local_a8._0_4_ = 0x42700000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fea8,L"r.Shadow.SpotLightTransitionScale",&local_a8,
                L"Transition scale for spotlights");
  atexit(FUN_143049755);
  local_a8._0_4_ = 0x3f000000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4fec0,L"r.Shadow.SpotLightReceiverBias",&local_a8,
                L"Receiver bias used by spotlights. Value between 0 and 1.");
  atexit(FUN_14304979a);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4fed8,L"r.Shadow.EnableModulatedSelfShadow",&local_a8,
                L"Allows modulated shadows to affect the shadow caster. (mobile only)");
  atexit(FUN_1430497df);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14ca4fef0,L"r.Shadow.StencilOptimization",&DAT_14c760a18,
                L"Removes stencil clears between shadow projections by zeroing the stencil during testing"
               );
  atexit(FUN_143049824);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14ca4ff00,L"r.Shadow.StencilCulling",&DAT_14c760a1c,
                L"Whether to use stencil light culling during shadow projection (default) or only depth."
               );
  atexit(FUN_143049869);
  local_a8._0_4_ = 0;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4ff10,L"r.Shadow.FilterMethod",&local_a8,
                L"Chooses the shadow filtering method.\n 0: Uniform PCF (default)\n 1: PCSS (experimental)\n"
               );
  atexit(FUN_1430498ae);
  local_a8._0_4_ = 0x28;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4ff28,L"r.Shadow.MaxSoftKernelSize",&local_a8,
                L"Mazimum size of the softening kernels in pixels.");
  atexit(FUN_1430498f3);
  local_a8._0_4_ = 0x3f800000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14ca4ff40,L"r.Shadow.ShadowMaxSlopeScaleDepthBias",&local_a8,
                L"Max Slope depth bias used for shadows for all lights\nHigher values give better self-shadowing, but increase self-shadowing artifacts"
               );
  atexit(FUN_143049938);
  DAT_14ca5b018 = 0;
  atexit((_func_5014 *)&LAB_14304997d);
  DAT_14ca4ff60 = 0xffffffff;
  DAT_14ca4ff64 = 5;
  DAT_14ca4ff65 = 1;
  DAT_14ca4ff66 = 0;
  DAT_14ca4ff68 = 0;
  DAT_14ca4ff58 = &PTR_FUN_14a303510;
  FUN_146309566();
  atexit(FUN_143049991);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,1);
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14ca4ff70,L"r.HairStrands.Shadow.CullPerObjectShadowCaster",&local_a8,
                L"Enable CPU culling of object casting per-object shadow (stationnary object)");
  atexit(FUN_143049a81);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_14306809e;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca50000,6,&local_a8);
  local_a0 = FUN_140216e76;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50120,&local_a8);
  local_a0 = FUN_145fe581e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50248,&local_a8);
  local_a0 = FUN_145df4ad8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50370,&local_a8);
  local_a0 = FUN_145df4f18;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50498,&local_a8);
  local_a0 = FUN_141560204;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca505c0,&local_a8);
  local_a0 = FUN_145df5358;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca506e8,&local_a8);
  local_a0 = FUN_14152b5ba;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50810,&local_a8);
  local_a0 = FUN_145f21096;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50938,&local_a8);
  local_a0 = FUN_145f214d6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50a60,&local_a8);
  local_a0 = FUN_145f21916;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50b88,&local_a8);
  local_a0 = FUN_145f21d56;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50cb0,&local_a8);
  local_a0 = FUN_145f22196;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50dd8,&local_a8);
  local_a0 = FUN_145f225d6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca50f00,&local_a8);
  local_a0 = FUN_145f22a16;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51028,&local_a8);
  local_a0 = FUN_145f22e56;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51150,&local_a8);
  local_a0 = FUN_145f23296;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51278,&local_a8);
  local_a0 = FUN_145d4a60e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca513a0,&local_a8);
  local_a0 = FUN_145f236d6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca514c8,&local_a8);
  local_a0 = FUN_145f23b16;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca515f0,&local_a8);
  local_a0 = FUN_145f23f56;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51718,&local_a8);
  local_a0 = FUN_145f24396;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51840,&local_a8);
  local_a0 = FUN_145f247d6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51968,&local_a8);
  local_a0 = FUN_145f24c16;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51a90,&local_a8);
  local_a0 = FUN_145f25056;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51bb8,&local_a8);
  local_a0 = FUN_145f25496;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51ce0,&local_a8);
  local_a0 = FUN_145f258d6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51e08,&local_a8);
  local_a0 = FUN_145f25d16;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca51f30,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1430680b8;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca52008,6,&local_a8);
  local_a0 = FUN_145ecaeea;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52128,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1430680d2;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca52200,6,&local_a8);
  local_a0 = FUN_145ecb55a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52320,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1430680ec;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca523f8,6,&local_a8);
  local_a0 = FUN_145ecbbca;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52518,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_143068106;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca525f0,6,&local_a8);
  local_a0 = FUN_145ecc23a;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52710,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_143068120;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca527e8,6,&local_a8);
  local_a0 = FUN_145ecc8aa;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52908,&local_a8);
  local_a0 = FUN_14609bcc8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52a30,&local_a8);
  local_a0 = FUN_14609bf38;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52b58,&local_a8);
  local_a0 = FUN_14609c1a8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52c80,&local_a8);
  local_a0 = FUN_14609c418;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52da8,&local_a8);
  local_a0 = FUN_14609c688;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52ed0,&local_a8);
  local_a0 = FUN_145db6740;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca52ff8,&local_a8);
  local_a0 = FUN_145db6dd8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53120,&local_a8);
  local_a0 = FUN_145db7470;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53248,&local_a8);
  local_a0 = FUN_145db7b08;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53370,&local_a8);
  local_a0 = FUN_145db81a0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53498,&local_a8);
  local_a0 = FUN_145db8838;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca535c0,&local_a8);
  local_a0 = FUN_145db8ed0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca536e8,&local_a8);
  local_a0 = FUN_145db9568;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53810,&local_a8);
  local_a0 = FUN_145db9c00;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53938,&local_a8);
  local_a0 = FUN_145dba298;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53a60,&local_a8);
  local_a0 = FUN_145dba930;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53b88,&local_a8);
  local_a0 = FUN_145dbafc8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53cb0,&local_a8);
  local_a0 = FUN_145dbb660;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53dd8,&local_a8);
  local_a0 = FUN_145dbbcf8;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca53f00,&local_a8);
  local_a0 = FUN_145dbc390;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca54028,&local_a8);
  local_a0 = FUN_146133556;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca54150,&local_a8);
  local_a0 = FUN_146133832;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca54278,&local_a8);
  local_a0 = FUN_146133b0e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca543a0,&local_a8);
  local_a0 = FUN_146133dea;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca544c8,&local_a8);
  DAT_14ca544e0 = 0xffffffff;
  DAT_14ca544e4 = 5;
  DAT_14ca544e5 = 1;
  DAT_14ca544e6 = 0;
  DAT_14ca544e8 = 0;
  DAT_14ca544d8 = &PTR_FUN_14a303930;
  FUN_1463096f0();
  atexit(FUN_143049d66);
  local_a0 = FUN_145f92f80;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca54608,&local_a8);
  local_a0 = FUN_145eeb6b8;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca546b0,&local_a8);
  _DAT_14ca5aff8 = 0xffffffff;
  DAT_14ca5affc = 5;
  DAT_14ca5affd = 1;
  DAT_14ca5affe = 0;
  _DAT_14ca5b000 = 2;
  DAT_14ca5b008 = 0;
  uRam000000014ca5b010 = 0;
  DAT_14ca5aff0 = &PTR_FUN_14a303c30;
  FUN_146309e92();
  atexit(FUN_1430594b7);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14306e614 FUN_14306e614 body=69 status=ok
// SIG undefined FUN_14306e614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e614(void)

{
  _DAT_14ca5b068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b070,1);
  return;
}



// FUNCTION 14306e659 FUN_14306e659 body=69 status=ok
// SIG undefined FUN_14306e659(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e659(void)

{
  _DAT_14ca5b078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b080,1);
  return;
}



// FUNCTION 14306e69e FUN_14306e69e body=69 status=ok
// SIG undefined FUN_14306e69e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e69e(void)

{
  _DAT_14ca5b088 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b090,1);
  return;
}



// FUNCTION 14306e6e3 FUN_14306e6e3 body=69 status=ok
// SIG undefined FUN_14306e6e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e6e3(void)

{
  _DAT_14ca5b098 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b0a0,1);
  return;
}



// FUNCTION 14306e728 FUN_14306e728 body=69 status=ok
// SIG undefined FUN_14306e728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e728(void)

{
  _DAT_14ca5b0a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b0b0,1);
  return;
}



// FUNCTION 14306e76d FUN_14306e76d body=69 status=ok
// SIG undefined FUN_14306e76d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e76d(void)

{
  _DAT_14ca5b0b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b0c0,1);
  return;
}



// FUNCTION 14306e7b2 FUN_14306e7b2 body=69 status=ok
// SIG undefined FUN_14306e7b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e7b2(void)

{
  _DAT_14ca5b0c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b0d0,1);
  return;
}



// FUNCTION 14306e7f7 FUN_14306e7f7 body=69 status=ok
// SIG undefined FUN_14306e7f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e7f7(void)

{
  _DAT_14ca5b0d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b0e0,1);
  return;
}



// FUNCTION 14306e83c FUN_14306e83c body=69 status=ok
// SIG undefined FUN_14306e83c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e83c(void)

{
  _DAT_14ca5b0f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b0f8,1);
  return;
}



// FUNCTION 14306e881 FUN_14306e881 body=69 status=ok
// SIG undefined FUN_14306e881(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e881(void)

{
  _DAT_14ca5b108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e8c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b110,1);
  return;
}



// FUNCTION 14306e8c6 FUN_14306e8c6 body=69 status=ok
// SIG undefined FUN_14306e8c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e8c6(void)

{
  _DAT_14ca5b120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b128,1);
  return;
}



// FUNCTION 14306e90b FUN_14306e90b body=69 status=ok
// SIG undefined FUN_14306e90b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e90b(void)

{
  _DAT_14ca5b138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e94d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b140,1);
  return;
}



// FUNCTION 14306e950 FUN_14306e950 body=69 status=ok
// SIG undefined FUN_14306e950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e950(void)

{
  _DAT_14ca5b148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b150,1);
  return;
}



// FUNCTION 14306e995 FUN_14306e995 body=69 status=ok
// SIG undefined FUN_14306e995(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e995(void)

{
  _DAT_14ca5b160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306e9d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b168,1);
  return;
}



// FUNCTION 14306e9da FUN_14306e9da body=69 status=ok
// SIG undefined FUN_14306e9da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306e9da(void)

{
  _DAT_14ca5b178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ea1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b180,1);
  return;
}



// FUNCTION 14306ea1f FUN_14306ea1f body=69 status=ok
// SIG undefined FUN_14306ea1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ea1f(void)

{
  _DAT_14ca5b190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ea61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b198,1);
  return;
}



// FUNCTION 14306ea64 FUN_14306ea64 body=69 status=ok
// SIG undefined FUN_14306ea64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ea64(void)

{
  _DAT_14ca5b1a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306eaa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b1a8,1);
  return;
}



// FUNCTION 14306eaa9 FUN_14306eaa9 body=69 status=ok
// SIG undefined FUN_14306eaa9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306eaa9(void)

{
  _DAT_14ca5b1b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306eaeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b1c0,1);
  return;
}



// FUNCTION 14306eaee FUN_14306eaee body=69 status=ok
// SIG undefined FUN_14306eaee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306eaee(void)

{
  _DAT_14ca5b1d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b1d8,1);
  return;
}



// FUNCTION 14306eb33 FUN_14306eb33 body=69 status=ok
// SIG undefined FUN_14306eb33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306eb33(void)

{
  _DAT_14ca5b1e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306eb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b1f0,1);
  return;
}



// FUNCTION 14306eb78 FUN_14306eb78 body=69 status=ok
// SIG undefined FUN_14306eb78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306eb78(void)

{
  _DAT_14ca5b200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ebba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b208,1);
  return;
}



// FUNCTION 14306ebbd FUN_14306ebbd body=69 status=ok
// SIG undefined FUN_14306ebbd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ebbd(void)

{
  _DAT_14ca5b218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ebff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b220,1);
  return;
}



// FUNCTION 14306ec02 FUN_14306ec02 body=69 status=ok
// SIG undefined FUN_14306ec02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ec02(void)

{
  _DAT_14ca5b230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ec44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b238,1);
  return;
}



// FUNCTION 14306ec47 FUN_14306ec47 body=69 status=ok
// SIG undefined FUN_14306ec47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ec47(void)

{
  _DAT_14ca5b248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ec89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b250,1);
  return;
}



// FUNCTION 14306ec8c FUN_14306ec8c body=69 status=ok
// SIG undefined FUN_14306ec8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ec8c(void)

{
  _DAT_14ca5b260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ecce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b268,1);
  return;
}



// FUNCTION 14306ecd1 FUN_14306ecd1 body=69 status=ok
// SIG undefined FUN_14306ecd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ecd1(void)

{
  _DAT_14ca5b278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ed13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b280,1);
  return;
}



// FUNCTION 14306ed16 FUN_14306ed16 body=69 status=ok
// SIG undefined FUN_14306ed16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ed16(void)

{
  _DAT_14ca5b290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ed58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b298,1);
  return;
}



// FUNCTION 14306ed5b FUN_14306ed5b body=69 status=ok
// SIG undefined FUN_14306ed5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ed5b(void)

{
  _DAT_14ca5b2a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ed9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b2b0,1);
  return;
}



// FUNCTION 14306eda0 FUN_14306eda0 body=69 status=ok
// SIG undefined FUN_14306eda0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306eda0(void)

{
  _DAT_14ca5b2b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ede2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b2c0,1);
  return;
}



// FUNCTION 14306ede5 FUN_14306ede5 body=69 status=ok
// SIG undefined FUN_14306ede5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ede5(void)

{
  _DAT_14ca5b2c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ee27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b2d0,1);
  return;
}



// FUNCTION 14306ee2a FUN_14306ee2a body=69 status=ok
// SIG undefined FUN_14306ee2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ee2a(void)

{
  _DAT_14ca5b2e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ee6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b2e8,1);
  return;
}



// FUNCTION 14306ee6f FUN_14306ee6f body=69 status=ok
// SIG undefined FUN_14306ee6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ee6f(void)

{
  _DAT_14ca5b2f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306eeb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b2f8,1);
  return;
}



// FUNCTION 14306eeb4 FUN_14306eeb4 body=69 status=ok
// SIG undefined FUN_14306eeb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306eeb4(void)

{
  _DAT_14ca5b308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306eef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b310,1);
  return;
}



// FUNCTION 14306eef9 FUN_14306eef9 body=69 status=ok
// SIG undefined FUN_14306eef9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306eef9(void)

{
  _DAT_14ca5b320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ef3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b328,1);
  return;
}



// FUNCTION 14306ef3e FUN_14306ef3e body=69 status=ok
// SIG undefined FUN_14306ef3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ef3e(void)

{
  _DAT_14ca5b338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306ef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b340,1);
  return;
}



// FUNCTION 14306ef83 FUN_14306ef83 body=69 status=ok
// SIG undefined FUN_14306ef83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306ef83(void)

{
  _DAT_14ca5b350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306efc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b358,1);
  return;
}



// FUNCTION 14306efc8 FUN_14306efc8 body=69 status=ok
// SIG undefined FUN_14306efc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306efc8(void)

{
  _DAT_14ca5b368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306f00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b370,1);
  return;
}



// FUNCTION 14306f00d FUN_14306f00d body=69 status=ok
// SIG undefined FUN_14306f00d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306f00d(void)

{
  _DAT_14ca5b380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306f04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b388,1);
  return;
}



// FUNCTION 14306f052 FUN_14306f052 body=69 status=ok
// SIG undefined FUN_14306f052(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306f052(void)

{
  _DAT_14ca5b398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306f094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b3a0,1);
  return;
}



// FUNCTION 14306f097 FUN_14306f097 body=69 status=ok
// SIG undefined FUN_14306f097(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306f097(void)

{
  _DAT_14ca5b3b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306f0d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b3b8,1);
  return;
}



// FUNCTION 14306f0dc FUN_14306f0dc body=69 status=ok
// SIG undefined FUN_14306f0dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14306f0dc(void)

{
  _DAT_14ca5b3c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014306f11e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b3d0,1);
  return;
}



// FUNCTION 14306f122 FUN_14306f122 body=15472 status=ok
// SIG undefined FUN_14306f122(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14306f122(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  char *pcVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  void *_Src;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined *puVar11;
  undefined7 uVar13;
  undefined8 uVar12;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  size_t _Size;
  undefined *puVar20;
  uint uVar21;
  byte bVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_2938 [32];
  longlong *local_2918;
  longlong **local_2910;
  undefined8 local_2908;
  longlong local_2900;
  undefined8 local_28f8;
  int local_28f0;
  longlong local_28e8;
  void **local_28e0;
  int local_28d8;
  longlong local_28d0;
  undefined8 local_28c8;
  undefined8 uStack_28c0;
  longlong local_28b8;
  uint local_28ac;
  longlong local_28a8;
  longlong local_28a0;
  undefined8 local_2898;
  longlong local_2890;
  longlong local_2888;
  undefined8 *local_2880;
  undefined8 *local_2878;
  undefined8 local_2870;
  longlong local_2868;
  undefined4 local_2860;
  void *local_2858;
  int local_2850;
  undefined4 local_284c;
  undefined8 local_2848;
  undefined8 uStack_2840;
  undefined8 local_2838;
  undefined8 uStack_2830;
  undefined8 local_2828;
  undefined8 uStack_2820;
  undefined8 local_2818;
  undefined8 uStack_2810;
  undefined8 local_2808;
  undefined8 local_27f8;
  undefined8 uStack_27f0;
  undefined8 local_27e8;
  undefined8 local_27d8;
  undefined8 uStack_27d0;
  undefined8 local_27c8;
  undefined8 local_27b8;
  undefined8 uStack_27b0;
  undefined8 local_27a8;
  undefined8 local_2798;
  undefined8 uStack_2790;
  undefined8 local_2788;
  undefined8 local_2778;
  undefined8 uStack_2770;
  undefined8 local_2768;
  undefined8 uStack_2760;
  undefined8 local_2758;
  undefined8 uStack_2750;
  undefined8 local_2748;
  undefined8 local_2738;
  undefined8 uStack_2730;
  undefined8 local_2728;
  undefined8 local_2718;
  undefined8 uStack_2710;
  undefined8 local_2708;
  undefined8 local_26f8;
  undefined8 uStack_26f0;
  undefined8 local_26e8;
  undefined8 local_26d8;
  undefined8 uStack_26d0;
  undefined8 local_26c8;
  undefined2 local_26bb;
  undefined1 local_26b9;
  longlong *local_26b8 [372];
  char *local_1b18;
  undefined8 uStack_1b10;
  undefined8 uStack_1b08;
  undefined8 local_1b00;
  undefined8 uStack_1af8;
  undefined8 local_1af0;
  undefined8 local_1ae8;
  undefined8 uStack_1ae0;
  undefined8 local_1ad8;
  undefined8 uStack_1ad0;
  undefined8 local_1ac8;
  undefined8 local_1ac0;
  undefined8 uStack_1ab8;
  undefined8 local_1ab0;
  undefined8 uStack_1aa8;
  undefined8 local_1aa0;
  undefined8 local_1a98;
  undefined8 local_1a90;
  undefined8 uStack_1a88;
  undefined8 local_1a80;
  undefined8 uStack_1a78;
  undefined8 local_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined8 local_1a48;
  undefined8 local_1a40;
  undefined8 uStack_1a38;
  undefined8 local_1a30;
  undefined8 uStack_1a28;
  undefined8 local_1a20;
  undefined8 local_1a18;
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  undefined8 local_1a00;
  undefined8 uStack_19f8;
  undefined8 local_19f0;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  undefined8 local_19d8;
  undefined8 uStack_19d0;
  undefined8 local_19c8;
  undefined8 local_19c0;
  undefined8 uStack_19b8;
  undefined8 local_19b0;
  undefined8 uStack_19a8;
  undefined8 local_19a0;
  undefined8 local_1998;
  undefined8 local_1990;
  undefined8 uStack_1988;
  undefined8 local_1980;
  undefined8 uStack_1978;
  undefined8 local_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined8 local_1948;
  undefined8 local_1940;
  undefined8 uStack_1938;
  undefined8 local_1930;
  undefined8 uStack_1928;
  undefined8 local_1920;
  undefined8 local_1918;
  undefined8 local_1910;
  undefined8 uStack_1908;
  undefined8 local_1900;
  undefined8 uStack_18f8;
  undefined8 local_18f0;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined8 local_18c8;
  undefined8 local_18c0;
  undefined8 uStack_18b8;
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  undefined8 local_18a0;
  undefined8 local_1898;
  undefined8 local_1890;
  undefined8 uStack_1888;
  undefined8 local_1880;
  undefined8 uStack_1878;
  undefined8 local_1870;
  undefined8 local_1868;
  undefined8 uStack_1860;
  undefined8 local_1858;
  undefined8 uStack_1850;
  undefined8 local_1848;
  undefined8 local_1840;
  undefined8 uStack_1838;
  undefined8 local_1830;
  undefined8 uStack_1828;
  undefined8 local_1820;
  undefined8 local_1818;
  undefined8 uStack_1810;
  undefined8 local_1808;
  undefined8 local_1800;
  undefined8 uStack_17f8;
  undefined8 local_17f0;
  undefined8 local_17e8;
  undefined8 local_17e0;
  undefined8 uStack_17d8;
  undefined8 local_17d0;
  undefined8 uStack_17c8;
  undefined8 local_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined8 local_1798;
  undefined8 local_1790;
  undefined8 uStack_1788;
  undefined8 local_1780;
  undefined8 uStack_1778;
  undefined8 local_1770;
  undefined8 local_1768;
  undefined8 local_1760;
  undefined8 uStack_1758;
  undefined8 local_1750;
  undefined8 uStack_1748;
  undefined8 local_1740;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined8 local_1718;
  undefined8 local_1710;
  undefined8 uStack_1708;
  undefined8 local_1700;
  undefined8 uStack_16f8;
  undefined8 local_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  undefined8 local_16d0;
  undefined8 uStack_16c8;
  undefined8 local_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 local_1690;
  undefined8 uStack_1688;
  undefined8 local_1680;
  undefined8 uStack_1678;
  undefined8 local_1670;
  undefined8 local_1668;
  undefined8 local_1660;
  undefined8 uStack_1658;
  undefined8 local_1650;
  undefined8 uStack_1648;
  undefined8 local_1640;
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  undefined8 local_1618;
  undefined8 local_1610;
  undefined8 uStack_1608;
  undefined8 local_1600;
  undefined8 uStack_15f8;
  undefined8 local_15f0;
  undefined8 local_15e8;
  undefined8 local_15e0;
  undefined8 uStack_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  undefined8 local_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined8 local_1590;
  undefined8 uStack_1588;
  undefined8 local_1580;
  undefined8 uStack_1578;
  undefined8 local_1570;
  undefined8 local_1568;
  undefined8 local_1560;
  undefined8 uStack_1558;
  undefined8 local_1550;
  undefined8 uStack_1548;
  undefined8 local_1540;
  undefined8 local_1538;
  undefined8 uStack_1530;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined8 local_1518;
  undefined8 local_1510;
  undefined8 uStack_1508;
  undefined8 local_1500;
  undefined8 uStack_14f8;
  undefined8 local_14f0;
  undefined8 local_14e8;
  undefined8 local_14e0;
  undefined8 uStack_14d8;
  undefined8 local_14d0;
  undefined8 uStack_14c8;
  undefined8 local_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  undefined8 local_1498;
  undefined8 local_1490;
  undefined8 uStack_1488;
  undefined8 local_1480;
  undefined8 uStack_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 uStack_1458;
  undefined8 local_1450;
  undefined8 uStack_1448;
  undefined8 local_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined8 local_1410;
  undefined8 uStack_1408;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined8 local_13f0;
  undefined8 local_13e8;
  undefined8 local_13e0;
  undefined8 uStack_13d8;
  undefined8 local_13d0;
  undefined8 uStack_13c8;
  undefined8 local_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 local_1390;
  undefined8 uStack_1388;
  undefined8 local_1380;
  undefined8 uStack_1378;
  undefined8 local_1370;
  undefined8 local_1368;
  undefined8 local_1360;
  undefined8 uStack_1358;
  undefined8 local_1350;
  undefined8 uStack_1348;
  undefined8 local_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined8 local_12f0;
  undefined8 local_12e8;
  undefined8 local_12e0;
  undefined8 uStack_12d8;
  undefined8 local_12d0;
  undefined8 uStack_12c8;
  undefined8 local_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 local_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 local_1270;
  undefined8 local_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined8 local_11f0;
  undefined8 local_11e8;
  undefined8 local_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 local_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined8 local_1168;
  undefined8 local_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined8 uStack_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined4 local_f80;
  undefined8 local_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 local_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  float local_3bc;
  undefined1 *local_3b8;
  uint local_3b0;
  undefined8 local_3ac;
  undefined8 uStack_3a4;
  undefined8 local_39c;
  undefined8 uStack_394;
  undefined4 local_38c;
  undefined4 local_388;
  undefined1 local_384;
  undefined5 uStack_380;
  undefined3 uStack_37b;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined1 local_330;
  undefined2 local_32f;
  undefined1 local_32d;
  undefined8 local_32c;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined8 local_2f8 [16];
  undefined8 local_278 [16];
  undefined4 local_1f8;
  uint uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  ulonglong local_1e8;
  undefined8 local_1d8 [16];
  undefined8 local_158 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x14306f138;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2938;
  puVar19 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8)
  ;
  puVar10 = (uint *)*puVar19;
  if (puVar10 != (uint *)0x0) goto LAB_14306f19c;
LAB_14306f191:
  FUN_14472e504(puVar19);
  puVar10 = (uint *)*puVar19;
LAB_14306f19c:
  uVar24 = *(longlong *)(puVar10 + 0x10) + 7;
  uVar18 = puVar10[0x12];
  do {
    puVar25 = (undefined8 *)(uVar24 & 0xfffffffffffffff8);
    if (puVar25 + 0x11 <= puVar10 + 0x4000) {
      *(undefined8 **)(puVar10 + 0x10) = puVar25 + 0x12;
      puVar10[0x12] = uVar18 + 1;
      *(int *)(puVar25 + -1) = ((int)puVar25 + -8) - (int)puVar10;
      *(undefined4 *)((longlong)puVar25 + -4) = 0x88;
      uVar18 = *(uint *)(param_1 + 0x990);
      uVar21 = uVar18 >> 6 & 1;
      uVar9 = 2;
      if ((uVar18 & 0x10) == 0) {
        uVar9 = ((uVar18 & 0x20) >> 3) + 4;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      lVar17 = *(longlong *)(param_2 + 8);
      iVar8 = *(int *)(lVar17 + 8);
      bVar22 = 8;
      if (uVar21 == 0) {
        bVar22 = ((uVar18 & 0x30) == 0x20) * '\x02' + 7;
      }
      *(undefined4 *)(puVar25 + 1) =
           (&DAT_14ca11f20)[(ulonglong)(2 < (longlong)iVar8) * 0x3a + (ulonglong)bVar22];
      *(byte *)(puVar25 + 2) = bVar22;
      *(byte *)((longlong)puVar25 + 0x11) = bVar22;
      puVar25[3] = lVar17;
      *(int *)(puVar25 + 4) = iVar8;
      puVar25[5] = uVar12;
      puVar25[6] = 0;
      *(undefined1 *)(puVar25 + 7) = 0x3a;
      *puVar25 = &PTR_FUN_14a2fe4f0;
      puVar25[8] = 0;
      puVar25[9] = 0;
      *(undefined4 *)(puVar25 + 10) = 0x11;
      puVar25[0xb] = 0;
      puVar25[0xc] = 0;
      puVar25[0xd] = 0;
      puVar25[0xe] = 0;
      *(undefined4 *)(puVar25 + 0xf) = 0;
      *(uint *)(puVar25 + 0x10) = uVar9 | uVar21;
      *(undefined1 *)((longlong)puVar25 + 0x84) = 3;
      cVar6 = FUN_144adbdbb(*(undefined2 *)(&DAT_14ca85070 + (longlong)iVar8 * 2));
      uVar18 = *(uint *)(puVar25 + 0x10) & 1;
      cVar7 = '\x03';
      if (cVar6 != '\0') {
        cVar7 = (char)uVar18 + '\x01';
      }
      puVar20 = &DAT_14c9c0e90;
      if ((*(uint *)(puVar25 + 0x10) & 8) == 0) {
        puVar20 = &DAT_14ca19738;
      }
      *(char *)((longlong)puVar25 + 0x84) = cVar7;
      puVar25[8] = DAT_14c9c4540;
      puVar11 = &DAT_14c9c0d88;
      if (uVar18 == 0) {
        puVar11 = puVar20;
      }
      puVar25[9] = *(undefined8 *)(puVar11 + 0x10);
      *(undefined4 *)(puVar25 + 0xf) = 0;
      local_28a8 = param_3;
      if (*(char *)(param_2 + 0x910) == '\x01') {
        local_1b18 = (char *)0x0;
        uStack_1b10 = 0;
        FUN_1448c5454(param_1,&local_1b18);
        FUN_140b1283a(local_26b8,L"ShadowDepth ",&local_1b18);
        FUN_144a787a6(param_1 + 0xfd8,local_26b8);
        if (local_26b8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_1b18 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      local_28b8 = param_1 + 0xb28;
      *(undefined4 *)(param_1 + 0xb48) = 0;
      if (*(int *)(param_1 + 0xb4c) < 0) {
        FUN_1473135ea(local_28b8);
      }
      local_26d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_26d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_26c8 = DAT_14c8464f0;
      local_26f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_26f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_26e8 = DAT_14c8464f0;
      local_2708 = DAT_14c8464f0;
      local_2718 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2710 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_2728 = DAT_14c8464f0;
      local_2738 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2730 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_2748 = DAT_14c8464f0;
      local_2758 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2750 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_2768 = DAT_14c8463f0;
      uStack_2760 = DAT_14c8463f8;
      local_2778 = DAT_14c8463f0;
      uStack_2770 = DAT_14c8463f8;
      local_2788 = DAT_14c8464f0;
      local_2798 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2790 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_27a8 = DAT_14c8464f0;
      local_27b8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_27b0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_27c8 = DAT_14c8464f0;
      local_27d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_27d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_27e8 = DAT_14c8464f0;
      local_27f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_27f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_2808 = DAT_14c8464f0;
      local_2818 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2810 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_2828 = DAT_14c8463f0;
      uStack_2820 = DAT_14c8463f8;
      local_2838 = DAT_14c8463f0;
      uStack_2830 = DAT_14c8463f8;
      local_300 = DAT_14c8464f0;
      local_310 = (undefined4)DAT_14c8464e0;
      uStack_30c = DAT_14c8464e0._4_4_;
      uVar27 = uStack_30c;
      uStack_308 = (undefined4)DAT_14c8464e8;
      uStack_304 = DAT_14c8464e8._4_4_;
      if (((*(int *)(param_1 + 0x99c) == -1) && (*(longlong *)(param_1 + 0xb50) == 0)) &&
         (*(int *)(param_1 + 0x30) != 1)) {
LAB_14306f5d8:
        local_28ac = 0x22;
        fVar29 = DAT_14c760a58;
      }
      else {
        local_28ac = 2;
        fVar29 = 0.0;
        if ((*(longlong *)(param_1 + 0x9a0) != 0) &&
           (*(char *)(*(longlong *)(param_1 + 0x9a0) + 0x10) == '\x01')) goto LAB_14306f5d8;
      }
      local_2898 = *(undefined8 *)(param_1 + 0x958);
      local_2888 = param_2;
      local_2880 = puVar25;
      local_3bc = fVar29;
      if ((*(byte *)(param_1 + 0x990) & 0x20) == 0) {
        uStack_30c._0_1_ = (undefined1)DAT_14c8464e0._4_4_;
        uStack_30c._1_3_ = (undefined3)((uint)DAT_14c8464e0._4_4_ >> 8);
        local_fe8 = local_2718;
        uStack_fe0 = uStack_2710;
        local_fd0 = local_2738;
        uStack_fc8 = uStack_2730;
        local_fb8 = local_2758;
        uStack_fb0 = uStack_2750;
        local_c78 = local_2798;
        uStack_c70 = uStack_2790;
        local_c60 = local_27b8;
        uStack_c58 = uStack_27b0;
        local_448 = local_27d8;
        uStack_440 = uStack_27d0;
        local_430 = local_27f8;
        uStack_428 = uStack_27f0;
        local_418 = local_2818;
        uStack_410 = uStack_2810;
        local_3c8 = local_2898;
        uStack_30c = uVar27;
        if (*(longlong *)(param_1 + 0xb50) == 0) {
          local_1b18 = (char *)0x3ff0000000000000;
          uStack_1b10 = 0;
          uStack_1b08 = 0;
          local_1b00 = 0;
          uStack_1af8 = 0;
          local_1af0 = 0x3ff0000000000000;
          local_1ae8 = 0;
          uStack_1ae0 = 0;
          local_1ad8 = 0;
          uStack_1ad0 = 0;
          local_1ac8 = 0x3ff0000000000000;
          local_1ac0 = 0;
          uStack_1ab8 = 0;
          local_1ab0 = 0;
          uStack_1aa8 = 0;
          local_1aa0 = 0x3ff0000000000000;
          local_1a98 = 0x3ff0000000000000;
          local_1a90 = 0;
          uStack_1a88 = 0;
          local_1a80 = 0;
          uStack_1a78 = 0;
          local_1a70 = 0x3ff0000000000000;
          local_1a68 = 0;
          uStack_1a60 = 0;
          local_1a58 = 0;
          uStack_1a50 = 0;
          local_1a48 = 0x3ff0000000000000;
          local_1a40 = 0;
          uStack_1a38 = 0;
          local_1a30 = 0;
          uStack_1a28 = 0;
          local_1a20 = 0x3ff0000000000000;
          local_1a18 = 0x3ff0000000000000;
          local_1a10 = 0;
          uStack_1a08 = 0;
          local_1a00 = 0;
          uStack_19f8 = 0;
          local_19f0 = 0x3ff0000000000000;
          local_19e8 = 0;
          uStack_19e0 = 0;
          local_19d8 = 0;
          uStack_19d0 = 0;
          local_19c8 = 0x3ff0000000000000;
          local_19c0 = 0;
          uStack_19b8 = 0;
          local_19b0 = 0;
          uStack_19a8 = 0;
          local_19a0 = 0x3ff0000000000000;
          local_1998 = 0x3ff0000000000000;
          local_1990 = 0;
          uStack_1988 = 0;
          local_1980 = 0;
          uStack_1978 = 0;
          local_1970 = 0x3ff0000000000000;
          local_1968 = 0;
          uStack_1960 = 0;
          local_1958 = 0;
          uStack_1950 = 0;
          local_1948 = 0x3ff0000000000000;
          local_1930 = 0;
          uStack_1928 = 0;
          local_1940 = 0;
          uStack_1938 = 0;
          local_1920 = 0x3ff0000000000000;
          local_1918 = 0x3ff0000000000000;
          local_1910 = 0;
          uStack_1908 = 0;
          local_1900 = 0;
          uStack_18f8 = 0;
          local_18f0 = 0x3ff0000000000000;
          local_18e8 = 0;
          uStack_18e0 = 0;
          local_18d8 = 0;
          uStack_18d0 = 0;
          local_18c8 = 0x3ff0000000000000;
          local_18c0 = 0;
          uStack_18b8 = 0;
          local_18b0 = 0;
          uStack_18a8 = 0;
          local_18a0 = 0x3ff0000000000000;
          local_1898 = 0x3ff0000000000000;
          local_1890 = 0;
          uStack_1888 = 0;
          local_1880 = 0;
          uStack_1878 = 0;
          local_1870 = 0x3ff0000000000000;
          local_1868 = 0;
          uStack_1860 = 0;
          local_1858 = 0;
          uStack_1850 = 0;
          local_1848 = 0x3ff0000000000000;
          local_1830 = 0;
          uStack_1828 = 0;
          local_1840 = 0;
          uStack_1838 = 0;
          local_1820 = 0x3ff0000000000000;
          local_1808 = DAT_14c8464f0;
          local_1818 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_1810 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_17f0 = DAT_14c8464f0;
          local_1800 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_17f8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_17e8 = 0x3ff0000000000000;
          local_17d0 = 0;
          uStack_17c8 = 0;
          local_17e0 = 0;
          uStack_17d8 = 0;
          local_17c0 = 0x3ff0000000000000;
          local_17a8 = 0;
          uStack_17a0 = 0;
          local_17b8 = 0;
          uStack_17b0 = 0;
          local_1798 = 0x3ff0000000000000;
          local_1780 = 0;
          uStack_1778 = 0;
          local_1790 = 0;
          uStack_1788 = 0;
          local_1770 = 0x3ff0000000000000;
          local_1768 = 0x3ff0000000000000;
          local_1750 = 0;
          uStack_1748 = 0;
          local_1760 = 0;
          uStack_1758 = 0;
          local_1740 = 0x3ff0000000000000;
          local_1728 = 0;
          uStack_1720 = 0;
          local_1738 = 0;
          uStack_1730 = 0;
          local_1718 = 0x3ff0000000000000;
          local_1700 = 0;
          uStack_16f8 = 0;
          local_1710 = 0;
          uStack_1708 = 0;
          local_16f0 = 0x3ff0000000000000;
          local_16e8 = 0x3ff0000000000000;
          local_16d0 = 0;
          uStack_16c8 = 0;
          local_16e0 = 0;
          uStack_16d8 = 0;
          local_16c0 = 0x3ff0000000000000;
          local_16a8 = 0;
          uStack_16a0 = 0;
          local_16b8 = 0;
          uStack_16b0 = 0;
          local_1698 = 0x3ff0000000000000;
          local_1680 = 0;
          uStack_1678 = 0;
          local_1690 = 0;
          uStack_1688 = 0;
          local_1670 = 0x3ff0000000000000;
          local_1668 = 0x3ff0000000000000;
          local_1650 = 0;
          uStack_1648 = 0;
          local_1660 = 0;
          uStack_1658 = 0;
          local_1640 = 0x3ff0000000000000;
          local_1628 = 0;
          uStack_1620 = 0;
          local_1638 = 0;
          uStack_1630 = 0;
          local_1618 = 0x3ff0000000000000;
          local_1600 = 0;
          uStack_15f8 = 0;
          local_1610 = 0;
          uStack_1608 = 0;
          local_15f0 = 0x3ff0000000000000;
          local_15e8 = 0x3ff0000000000000;
          local_15d0 = 0;
          uStack_15c8 = 0;
          local_15e0 = 0;
          uStack_15d8 = 0;
          local_15c0 = 0x3ff0000000000000;
          local_15a8 = 0;
          uStack_15a0 = 0;
          local_15b8 = 0;
          uStack_15b0 = 0;
          local_1598 = 0x3ff0000000000000;
          local_1580 = 0;
          uStack_1578 = 0;
          local_1590 = 0;
          uStack_1588 = 0;
          local_1570 = 0x3ff0000000000000;
          local_1568 = 0x3ff0000000000000;
          local_1550 = 0;
          uStack_1548 = 0;
          local_1560 = 0;
          uStack_1558 = 0;
          local_1540 = 0x3ff0000000000000;
          local_1528 = 0;
          uStack_1520 = 0;
          local_1538 = 0;
          uStack_1530 = 0;
          local_1518 = 0x3ff0000000000000;
          local_1500 = 0;
          uStack_14f8 = 0;
          local_1510 = 0;
          uStack_1508 = 0;
          local_14f0 = 0x3ff0000000000000;
          local_14e8 = 0x3ff0000000000000;
          local_14d0 = 0;
          uStack_14c8 = 0;
          local_14e0 = 0;
          uStack_14d8 = 0;
          local_14c0 = 0x3ff0000000000000;
          local_14a8 = 0;
          uStack_14a0 = 0;
          local_14b8 = 0;
          uStack_14b0 = 0;
          local_1498 = 0x3ff0000000000000;
          local_1480 = 0;
          uStack_1478 = 0;
          local_1490 = 0;
          uStack_1488 = 0;
          local_1470 = 0x3ff0000000000000;
          local_1468 = 0x3ff0000000000000;
          local_1450 = 0;
          uStack_1448 = 0;
          local_1460 = 0;
          uStack_1458 = 0;
          local_1440 = 0x3ff0000000000000;
          local_1428 = 0;
          uStack_1420 = 0;
          local_1438 = 0;
          uStack_1430 = 0;
          local_1418 = 0x3ff0000000000000;
          local_1400 = 0;
          uStack_13f8 = 0;
          local_1410 = 0;
          uStack_1408 = 0;
          local_13f0 = 0x3ff0000000000000;
          local_13e8 = 0x3ff0000000000000;
          local_13d0 = 0;
          uStack_13c8 = 0;
          local_13e0 = 0;
          uStack_13d8 = 0;
          local_13c0 = 0x3ff0000000000000;
          local_13a8 = 0;
          uStack_13a0 = 0;
          local_13b8 = 0;
          uStack_13b0 = 0;
          local_1398 = 0x3ff0000000000000;
          local_1380 = 0;
          uStack_1378 = 0;
          local_1390 = 0;
          uStack_1388 = 0;
          local_1370 = 0x3ff0000000000000;
          local_1368 = 0x3ff0000000000000;
          local_1350 = 0;
          uStack_1348 = 0;
          local_1360 = 0;
          uStack_1358 = 0;
          local_1340 = 0x3ff0000000000000;
          local_1328 = 0;
          uStack_1320 = 0;
          local_1338 = 0;
          uStack_1330 = 0;
          local_1318 = 0x3ff0000000000000;
          local_1300 = 0;
          uStack_12f8 = 0;
          local_1310 = 0;
          uStack_1308 = 0;
          local_12f0 = 0x3ff0000000000000;
          local_12e8 = 0x3ff0000000000000;
          local_12d0 = 0;
          uStack_12c8 = 0;
          local_12e0 = 0;
          uStack_12d8 = 0;
          local_12c0 = 0x3ff0000000000000;
          local_12a8 = 0;
          uStack_12a0 = 0;
          local_12b8 = 0;
          uStack_12b0 = 0;
          local_1298 = 0x3ff0000000000000;
          local_1280 = 0;
          uStack_1278 = 0;
          local_1290 = 0;
          uStack_1288 = 0;
          local_1270 = 0x3ff0000000000000;
          local_1268 = 0x3ff0000000000000;
          local_1250 = 0;
          uStack_1248 = 0;
          local_1260 = 0;
          uStack_1258 = 0;
          local_1240 = 0x3ff0000000000000;
          local_1228 = 0;
          uStack_1220 = 0;
          local_1238 = 0;
          uStack_1230 = 0;
          local_1218 = 0x3ff0000000000000;
          local_1200 = 0;
          uStack_11f8 = 0;
          local_1210 = 0;
          uStack_1208 = 0;
          local_11f0 = 0x3ff0000000000000;
          local_11e8 = 0x3ff0000000000000;
          local_11d0 = 0;
          uStack_11c8 = 0;
          local_11e0 = 0;
          uStack_11d8 = 0;
          local_11c0 = 0x3ff0000000000000;
          local_11a8 = 0;
          uStack_11a0 = 0;
          local_11b8 = 0;
          uStack_11b0 = 0;
          local_1198 = 0x3ff0000000000000;
          local_1180 = 0;
          uStack_1178 = 0;
          local_1190 = 0;
          uStack_1188 = 0;
          local_1170 = 0x3ff0000000000000;
          local_1168 = 0x3ff0000000000000;
          local_1150 = 0;
          uStack_1148 = 0;
          local_1160 = 0;
          uStack_1158 = 0;
          local_1140 = 0x3ff0000000000000;
          local_1128 = 0;
          uStack_1120 = 0;
          local_1138 = 0;
          uStack_1130 = 0;
          local_1118 = 0x3ff0000000000000;
          local_1100 = 0;
          uStack_10f8 = 0;
          local_1110 = 0;
          uStack_1108 = 0;
          local_10f0 = 0x3ff0000000000000;
          local_10e8 = 0x3ff0000000000000;
          local_10d0 = 0;
          uStack_10c8 = 0;
          local_10e0 = 0;
          uStack_10d8 = 0;
          local_10c0 = 0x3ff0000000000000;
          local_10a8 = 0;
          uStack_10a0 = 0;
          local_10b8 = 0;
          uStack_10b0 = 0;
          local_1098 = 0x3ff0000000000000;
          local_1080 = 0;
          uStack_1078 = 0;
          local_1090 = 0;
          uStack_1088 = 0;
          local_1070 = 0x3ff0000000000000;
          local_1068 = 0x3ff0000000000000;
          local_1050 = 0;
          uStack_1048 = 0;
          local_1060 = 0;
          uStack_1058 = 0;
          local_1040 = 0x3ff0000000000000;
          local_1028 = 0;
          uStack_1020 = 0;
          local_1038 = 0;
          uStack_1030 = 0;
          local_1018 = 0x3ff0000000000000;
          local_1000 = 0;
          uStack_ff8 = 0;
          local_1010 = 0;
          uStack_1008 = 0;
          local_ff0 = 0x3ff0000000000000;
          local_fd8 = DAT_14c8464f0;
          local_fc0 = DAT_14c8464f0;
          local_fa8 = DAT_14c8464f0;
          local_fa0 = DAT_14c8463f0;
          uStack_f98 = DAT_14c8463f8;
          local_f90 = DAT_14c8463f0;
          uStack_f88 = DAT_14c8463f8;
          local_f80 = 0x3f800000;
          local_f78 = 0x3ff0000000000000;
          local_f60 = 0;
          uStack_f58 = 0;
          local_f70 = 0;
          uStack_f68 = 0;
          local_f50 = 0x3ff0000000000000;
          local_f38 = 0;
          uStack_f30 = 0;
          local_f48 = 0;
          uStack_f40 = 0;
          local_f28 = 0x3ff0000000000000;
          local_f10 = 0;
          uStack_f08 = 0;
          local_f20 = 0;
          uStack_f18 = 0;
          local_f00 = 0x3ff0000000000000;
          local_ef8 = 0x3ff0000000000000;
          local_ee0 = 0;
          uStack_ed8 = 0;
          local_ef0 = 0;
          uStack_ee8 = 0;
          local_ed0 = 0x3ff0000000000000;
          local_eb8 = 0;
          uStack_eb0 = 0;
          local_ec8 = 0;
          uStack_ec0 = 0;
          local_ea8 = 0x3ff0000000000000;
          local_e90 = 0;
          uStack_e88 = 0;
          local_ea0 = 0;
          uStack_e98 = 0;
          local_e80 = 0x3ff0000000000000;
          local_e78 = 0x3ff0000000000000;
          local_e60 = 0;
          uStack_e58 = 0;
          local_e70 = 0;
          uStack_e68 = 0;
          local_e50 = 0x3ff0000000000000;
          local_e38 = 0;
          uStack_e30 = 0;
          local_e48 = 0;
          uStack_e40 = 0;
          local_e28 = 0x3ff0000000000000;
          local_e10 = 0;
          uStack_e08 = 0;
          local_e20 = 0;
          uStack_e18 = 0;
          local_e00 = 0x3ff0000000000000;
          local_df8 = 0x3ff0000000000000;
          local_de0 = 0;
          uStack_dd8 = 0;
          local_df0 = 0;
          uStack_de8 = 0;
          local_dd0 = 0x3ff0000000000000;
          local_db8 = 0;
          uStack_db0 = 0;
          local_dc8 = 0;
          uStack_dc0 = 0;
          local_da8 = 0x3ff0000000000000;
          local_d90 = 0;
          uStack_d88 = 0;
          local_da0 = 0;
          uStack_d98 = 0;
          local_d80 = 0x3ff0000000000000;
          local_d78 = 0x3ff0000000000000;
          local_d60 = 0;
          uStack_d58 = 0;
          local_d70 = 0;
          uStack_d68 = 0;
          local_d50 = 0x3ff0000000000000;
          local_d38 = 0;
          uStack_d30 = 0;
          local_d48 = 0;
          uStack_d40 = 0;
          local_d28 = 0x3ff0000000000000;
          local_d10 = 0;
          uStack_d08 = 0;
          local_d20 = 0;
          uStack_d18 = 0;
          local_d00 = 0x3ff0000000000000;
          local_cf8 = 0x3ff0000000000000;
          local_ce0 = 0;
          uStack_cd8 = 0;
          local_cf0 = 0;
          uStack_ce8 = 0;
          local_cd0 = 0x3ff0000000000000;
          local_cb8 = 0;
          uStack_cb0 = 0;
          local_cc8 = 0;
          uStack_cc0 = 0;
          local_ca8 = 0x3ff0000000000000;
          local_c90 = 0;
          uStack_c88 = 0;
          local_ca0 = 0;
          uStack_c98 = 0;
          local_c80 = 0x3ff0000000000000;
          local_c68 = DAT_14c8464f0;
          local_c50 = DAT_14c8464f0;
          local_c48 = 0x3ff0000000000000;
          local_c30 = 0;
          uStack_c28 = 0;
          local_c40 = 0;
          uStack_c38 = 0;
          local_c20 = 0x3ff0000000000000;
          local_c08 = 0;
          uStack_c00 = 0;
          local_c18 = 0;
          uStack_c10 = 0;
          local_bf8 = 0x3ff0000000000000;
          local_be0 = 0;
          uStack_bd8 = 0;
          local_bf0 = 0;
          uStack_be8 = 0;
          local_bd0 = 0x3ff0000000000000;
          local_bc8 = 0x3ff0000000000000;
          local_bb0 = 0;
          uStack_ba8 = 0;
          local_bc0 = 0;
          uStack_bb8 = 0;
          local_ba0 = 0x3ff0000000000000;
          local_b88 = 0;
          uStack_b80 = 0;
          local_b98 = 0;
          uStack_b90 = 0;
          local_b78 = 0x3ff0000000000000;
          local_b60 = 0;
          uStack_b58 = 0;
          local_b70 = 0;
          uStack_b68 = 0;
          local_b50 = 0x3ff0000000000000;
          local_b48 = 0x3ff0000000000000;
          local_b30 = 0;
          uStack_b28 = 0;
          local_b40 = 0;
          uStack_b38 = 0;
          local_b20 = 0x3ff0000000000000;
          local_b08 = 0;
          uStack_b00 = 0;
          local_b18 = 0;
          uStack_b10 = 0;
          local_af8 = 0x3ff0000000000000;
          local_ae0 = 0;
          uStack_ad8 = 0;
          local_af0 = 0;
          uStack_ae8 = 0;
          local_ad0 = 0x3ff0000000000000;
          local_ac8 = 0x3ff0000000000000;
          local_ab0 = 0;
          uStack_aa8 = 0;
          local_ac0 = 0;
          uStack_ab8 = 0;
          local_aa0 = 0x3ff0000000000000;
          local_a88 = 0;
          uStack_a80 = 0;
          local_a98 = 0;
          uStack_a90 = 0;
          local_a78 = 0x3ff0000000000000;
          local_a60 = 0;
          uStack_a58 = 0;
          local_a70 = 0;
          uStack_a68 = 0;
          local_a50 = 0x3ff0000000000000;
          local_a48 = 0x3ff0000000000000;
          local_a30 = 0;
          uStack_a28 = 0;
          local_a40 = 0;
          uStack_a38 = 0;
          local_a20 = 0x3ff0000000000000;
          local_a08 = 0;
          uStack_a00 = 0;
          local_a18 = 0;
          uStack_a10 = 0;
          local_9f8 = 0x3ff0000000000000;
          local_9e0 = 0;
          uStack_9d8 = 0;
          local_9f0 = 0;
          uStack_9e8 = 0;
          local_9d0 = 0x3ff0000000000000;
          local_9c8 = 0x3ff0000000000000;
          local_9b0 = 0;
          uStack_9a8 = 0;
          local_9c0 = 0;
          uStack_9b8 = 0;
          local_9a0 = 0x3ff0000000000000;
          local_988 = 0;
          uStack_980 = 0;
          local_998 = 0;
          uStack_990 = 0;
          local_978 = 0x3ff0000000000000;
          local_960 = 0;
          uStack_958 = 0;
          local_970 = 0;
          uStack_968 = 0;
          local_950 = 0x3ff0000000000000;
          local_948 = 0x3ff0000000000000;
          local_930 = 0;
          uStack_928 = 0;
          local_940 = 0;
          uStack_938 = 0;
          local_920 = 0x3ff0000000000000;
          local_908 = 0;
          uStack_900 = 0;
          local_918 = 0;
          uStack_910 = 0;
          local_8f8 = 0x3ff0000000000000;
          local_8e0 = 0;
          uStack_8d8 = 0;
          local_8f0 = 0;
          uStack_8e8 = 0;
          local_8d0 = 0x3ff0000000000000;
          local_8c8 = 0x3ff0000000000000;
          local_8b0 = 0;
          uStack_8a8 = 0;
          local_8c0 = 0;
          uStack_8b8 = 0;
          local_8a0 = 0x3ff0000000000000;
          local_888 = 0;
          uStack_880 = 0;
          local_898 = 0;
          uStack_890 = 0;
          local_878 = 0x3ff0000000000000;
          local_860 = 0;
          uStack_858 = 0;
          local_870 = 0;
          uStack_868 = 0;
          local_850 = 0x3ff0000000000000;
          local_848 = 0x3ff0000000000000;
          local_830 = 0;
          uStack_828 = 0;
          local_840 = 0;
          uStack_838 = 0;
          local_820 = 0x3ff0000000000000;
          local_808 = 0;
          uStack_800 = 0;
          local_818 = 0;
          uStack_810 = 0;
          local_7f8 = 0x3ff0000000000000;
          local_7e0 = 0;
          uStack_7d8 = 0;
          local_7f0 = 0;
          uStack_7e8 = 0;
          local_7d0 = 0x3ff0000000000000;
          local_7c8 = 0x3ff0000000000000;
          local_7b0 = 0;
          uStack_7a8 = 0;
          local_7c0 = 0;
          uStack_7b8 = 0;
          local_7a0 = 0x3ff0000000000000;
          local_788 = 0;
          uStack_780 = 0;
          local_798 = 0;
          uStack_790 = 0;
          local_778 = 0x3ff0000000000000;
          local_760 = 0;
          uStack_758 = 0;
          local_770 = 0;
          uStack_768 = 0;
          local_750 = 0x3ff0000000000000;
          local_748 = 0x3ff0000000000000;
          local_730 = 0;
          uStack_728 = 0;
          local_740 = 0;
          uStack_738 = 0;
          local_720 = 0x3ff0000000000000;
          local_708 = 0;
          uStack_700 = 0;
          local_718 = 0;
          uStack_710 = 0;
          local_6f8 = 0x3ff0000000000000;
          local_6e0 = 0;
          uStack_6d8 = 0;
          local_6f0 = 0;
          uStack_6e8 = 0;
          local_6d0 = 0x3ff0000000000000;
          local_6c8 = 0x3ff0000000000000;
          local_6b0 = 0;
          uStack_6a8 = 0;
          local_6c0 = 0;
          uStack_6b8 = 0;
          local_6a0 = 0x3ff0000000000000;
          local_688 = 0;
          uStack_680 = 0;
          local_698 = 0;
          uStack_690 = 0;
          local_678 = 0x3ff0000000000000;
          local_660 = 0;
          uStack_658 = 0;
          local_670 = 0;
          uStack_668 = 0;
          local_650 = 0x3ff0000000000000;
          local_648 = 0x3ff0000000000000;
          local_630 = 0;
          uStack_628 = 0;
          local_640 = 0;
          uStack_638 = 0;
          local_620 = 0x3ff0000000000000;
          local_608 = 0;
          uStack_600 = 0;
          local_618 = 0;
          uStack_610 = 0;
          local_5f8 = 0x3ff0000000000000;
          local_5e0 = 0;
          uStack_5d8 = 0;
          local_5f0 = 0;
          uStack_5e8 = 0;
          local_5d0 = 0x3ff0000000000000;
          local_5c8 = 0x3ff0000000000000;
          local_5b0 = 0;
          uStack_5a8 = 0;
          local_5c0 = 0;
          uStack_5b8 = 0;
          local_5a0 = 0x3ff0000000000000;
          local_588 = 0;
          uStack_580 = 0;
          local_598 = 0;
          uStack_590 = 0;
          local_578 = 0x3ff0000000000000;
          local_560 = 0;
          uStack_558 = 0;
          local_570 = 0;
          uStack_568 = 0;
          local_550 = 0x3ff0000000000000;
          local_548 = 0x3ff0000000000000;
          local_530 = 0;
          uStack_528 = 0;
          local_540 = 0;
          uStack_538 = 0;
          local_520 = 0x3ff0000000000000;
          local_508 = 0;
          uStack_500 = 0;
          local_518 = 0;
          uStack_510 = 0;
          local_4f8 = 0x3ff0000000000000;
          local_4e0 = 0;
          uStack_4d8 = 0;
          local_4f0 = 0;
          uStack_4e8 = 0;
          local_4d0 = 0x3ff0000000000000;
          local_4c8 = 0x3ff0000000000000;
          local_4b0 = 0;
          uStack_4a8 = 0;
          local_4c0 = 0;
          uStack_4b8 = 0;
          local_4a0 = 0x3ff0000000000000;
          local_488 = 0;
          uStack_480 = 0;
          local_498 = 0;
          uStack_490 = 0;
          local_478 = 0x3ff0000000000000;
          local_460 = 0;
          uStack_458 = 0;
          local_470 = 0;
          uStack_468 = 0;
          local_450 = 0x3ff0000000000000;
          local_438 = DAT_14c8464f0;
          local_420 = DAT_14c8464f0;
          local_408 = DAT_14c8464f0;
          local_400 = DAT_14c8463f0;
          uStack_3f8 = DAT_14c8463f8;
          local_3f0 = DAT_14c8463f0;
          uStack_3e8 = DAT_14c8463f8;
          local_3e0 = 0x3f800000;
          local_3d8 = 0;
          uStack_3d0 = 0;
          local_3c0 = 0;
          local_3b8 = &DAT_3f8000003f800000;
          local_3b0 = local_28ac;
          local_3ac = 0xffffffffffffffff;
          uStack_3a4 = 0x100000000;
          local_38c = 0;
          local_39c = 0;
          uStack_394 = 0;
          local_388 = 0x3f800000;
          local_384 = 0;
          uStack_380 = CONCAT14((undefined1)uStack_30c,(undefined4)DAT_14c8464e0);
          uStack_370 = DAT_14c8464f0;
          uStack_37b = uStack_30c._1_3_;
          local_378 = (undefined4)DAT_14c8464e8;
          uStack_374 = DAT_14c8464e8._4_4_;
          local_368 = 0xbf800000;
          local_338 = 0;
          local_348 = 0;
          uStack_340 = 0;
          local_358 = 0;
          uStack_350 = 0;
          local_334 = 7;
          local_330 = 0;
          local_32d = local_26b9;
          local_32f = local_26bb;
          local_32c = 0x3f800000;
          puVar19 = &DAT_14c846400;
          puVar25 = local_1d8;
          for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar19 = &DAT_14c846400;
          puVar25 = local_158;
          for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          local_c8 = DAT_14c8464f0;
          local_d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_a0 = DAT_14c8464f0;
          local_98 = 0x3f80000000000000;
          uStack_90 = 0x3f800000;
          local_1f8 = *(undefined4 *)(param_1 + 0x48);
          uStack_1f0 = *(undefined4 *)(param_1 + 0x50);
          uStack_1f4 = *(uint *)(param_1 + 0x4c) ^ 0x80000000;
          uStack_1ec = *(uint *)(param_1 + 0x54) ^ 0x80000000;
          local_1e8 = *(ulonglong *)(param_1 + 0x58) ^ 0x8000000000000000;
          local_c0 = *(undefined8 *)(param_1 + 0x950);
          local_b8 = CONCAT44(*(int *)(param_1 + 0x954) + *(int *)(param_1 + 0x960) * 2 +
                              *(int *)(param_1 + 0x95c),
                              *(int *)(param_1 + 0x950) + *(int *)(param_1 + 0x960) * 2 +
                              *(int *)(param_1 + 0x958));
          puVar19 = (undefined8 *)(param_1 + 0x60);
          puVar25 = local_2f8;
          local_b0 = local_d8;
          uStack_a8 = uStack_d0;
          for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar19 = (undefined8 *)(param_1 + 0x160);
          puVar25 = local_278;
          for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          FUN_1447717da(local_26b8);
          memcpy(&local_1b18,local_26b8,0xba0);
          memcpy(&local_f78,&local_1b18,0xba0);
          iVar14 = *(int *)(param_1 + 0x950) + *(int *)(param_1 + 0x960);
          iVar8 = *(int *)(param_1 + 0x960) + *(int *)(param_1 + 0x954);
          local_3d8 = CONCAT44(iVar8,iVar14);
          uStack_3d0 = CONCAT44(iVar8 + *(int *)(param_1 + 0x95c),*(int *)(param_1 + 0x958) + iVar14
                               );
          if ((((char)*(uint *)(param_1 + 0x990) < '\0') &&
              ((*(uint *)(param_1 + 0x990) & 0x10) != 0)) && (-1 < *(int *)(param_1 + 0x944))) {
            local_3b0 = local_3b0 & 0xfffffffd;
          }
          lVar17 = *(longlong *)(param_1 + 0x10);
          if (lVar17 == 0) {
            local_384 = 0;
          }
          else {
            local_384 = 1;
            uStack_380 = (undefined5)*(undefined8 *)(lVar17 + 0x1048);
            uStack_37b = (undefined3)((ulonglong)*(undefined8 *)(lVar17 + 0x1048) >> 0x28);
            local_378 = (undefined4)*(undefined8 *)(lVar17 + 0x1050);
            uStack_374 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x1050) >> 0x20);
            uStack_370 = *(undefined8 *)(lVar17 + 0x1058);
            dVar3 = *(double *)(lVar17 + 0x830);
            uVar27 = SUB84(dVar3,0);
            uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
            dVar4 = *(double *)(lVar17 + 0x858);
            if (dVar3 <= dVar4) {
              uVar27 = SUB84(dVar4,0);
              uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
            }
            fVar29 = *(float *)(lVar17 + 0x23c8) * local_3bc;
            local_368 = CONCAT44(fVar29 * fVar29,
                                 (float)(double)CONCAT44(uVar28,uVar27) /
                                 (DAT_14cb0cc18 * *(float *)(lVar17 + 0x23c8)));
          }
          if (*(char *)(local_28a8 + 0x60) != '\x01') goto LAB_143072d72;
LAB_14307298f:
          lVar17 = local_28a8;
          LOCK();
          piVar1 = (int *)(local_28a8 + 0x48);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          FUN_14493225c(local_26b8,&local_1b18);
          memcpy((void *)((longlong)iVar8 * 0x390 + *(longlong *)(lVar17 + 0x50)),local_26b8,0x390);
        }
        else {
          local_1b18 = (char *)0x3ff0000000000000;
          uStack_1b10 = 0;
          uStack_1b08 = 0;
          local_1b00 = 0;
          uStack_1af8 = 0;
          local_1af0 = 0x3ff0000000000000;
          local_1ae8 = 0;
          uStack_1ae0 = 0;
          local_1ad8 = 0;
          uStack_1ad0 = 0;
          local_1ac8 = 0x3ff0000000000000;
          local_1ac0 = 0;
          uStack_1ab8 = 0;
          local_1ab0 = 0;
          uStack_1aa8 = 0;
          local_1aa0 = 0x3ff0000000000000;
          local_1a98 = 0x3ff0000000000000;
          local_1a90 = 0;
          uStack_1a88 = 0;
          local_1a80 = 0;
          uStack_1a78 = 0;
          local_1a70 = 0x3ff0000000000000;
          local_1a68 = 0;
          uStack_1a60 = 0;
          local_1a58 = 0;
          uStack_1a50 = 0;
          local_1a48 = 0x3ff0000000000000;
          local_1a40 = 0;
          uStack_1a38 = 0;
          local_1a30 = 0;
          uStack_1a28 = 0;
          local_1a20 = 0x3ff0000000000000;
          local_1a18 = 0x3ff0000000000000;
          local_1a10 = 0;
          uStack_1a08 = 0;
          local_1a00 = 0;
          uStack_19f8 = 0;
          local_19f0 = 0x3ff0000000000000;
          local_19e8 = 0;
          uStack_19e0 = 0;
          local_19d8 = 0;
          uStack_19d0 = 0;
          local_19c8 = 0x3ff0000000000000;
          local_19c0 = 0;
          uStack_19b8 = 0;
          local_19b0 = 0;
          uStack_19a8 = 0;
          local_19a0 = 0x3ff0000000000000;
          local_1998 = 0x3ff0000000000000;
          local_1990 = 0;
          uStack_1988 = 0;
          local_1980 = 0;
          uStack_1978 = 0;
          local_1970 = 0x3ff0000000000000;
          local_1968 = 0;
          uStack_1960 = 0;
          local_1958 = 0;
          uStack_1950 = 0;
          local_1948 = 0x3ff0000000000000;
          local_1930 = 0;
          uStack_1928 = 0;
          local_1940 = 0;
          uStack_1938 = 0;
          local_1920 = 0x3ff0000000000000;
          local_1918 = 0x3ff0000000000000;
          local_1910 = 0;
          uStack_1908 = 0;
          local_1900 = 0;
          uStack_18f8 = 0;
          local_18f0 = 0x3ff0000000000000;
          local_18e8 = 0;
          uStack_18e0 = 0;
          local_18d8 = 0;
          uStack_18d0 = 0;
          local_18c8 = 0x3ff0000000000000;
          local_18c0 = 0;
          uStack_18b8 = 0;
          local_18b0 = 0;
          uStack_18a8 = 0;
          local_18a0 = 0x3ff0000000000000;
          local_1898 = 0x3ff0000000000000;
          local_1890 = 0;
          uStack_1888 = 0;
          local_1880 = 0;
          uStack_1878 = 0;
          local_1870 = 0x3ff0000000000000;
          local_1868 = 0;
          uStack_1860 = 0;
          local_1858 = 0;
          uStack_1850 = 0;
          local_1848 = 0x3ff0000000000000;
          local_1830 = 0;
          uStack_1828 = 0;
          local_1840 = 0;
          uStack_1838 = 0;
          local_1820 = 0x3ff0000000000000;
          local_1808 = DAT_14c8464f0;
          local_1818 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_1810 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_17f0 = DAT_14c8464f0;
          local_1800 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_17f8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_17e8 = 0x3ff0000000000000;
          local_17d0 = 0;
          uStack_17c8 = 0;
          local_17e0 = 0;
          uStack_17d8 = 0;
          local_17c0 = 0x3ff0000000000000;
          local_17a8 = 0;
          uStack_17a0 = 0;
          local_17b8 = 0;
          uStack_17b0 = 0;
          local_1798 = 0x3ff0000000000000;
          local_1780 = 0;
          uStack_1778 = 0;
          local_1790 = 0;
          uStack_1788 = 0;
          local_1770 = 0x3ff0000000000000;
          local_1768 = 0x3ff0000000000000;
          local_1750 = 0;
          uStack_1748 = 0;
          local_1760 = 0;
          uStack_1758 = 0;
          local_1740 = 0x3ff0000000000000;
          local_1728 = 0;
          uStack_1720 = 0;
          local_1738 = 0;
          uStack_1730 = 0;
          local_1718 = 0x3ff0000000000000;
          local_1700 = 0;
          uStack_16f8 = 0;
          local_1710 = 0;
          uStack_1708 = 0;
          local_16f0 = 0x3ff0000000000000;
          local_16e8 = 0x3ff0000000000000;
          local_16d0 = 0;
          uStack_16c8 = 0;
          local_16e0 = 0;
          uStack_16d8 = 0;
          local_16c0 = 0x3ff0000000000000;
          local_16a8 = 0;
          uStack_16a0 = 0;
          local_16b8 = 0;
          uStack_16b0 = 0;
          local_1698 = 0x3ff0000000000000;
          local_1680 = 0;
          uStack_1678 = 0;
          local_1690 = 0;
          uStack_1688 = 0;
          local_1670 = 0x3ff0000000000000;
          local_1668 = 0x3ff0000000000000;
          local_1650 = 0;
          uStack_1648 = 0;
          local_1660 = 0;
          uStack_1658 = 0;
          local_1640 = 0x3ff0000000000000;
          local_1628 = 0;
          uStack_1620 = 0;
          local_1638 = 0;
          uStack_1630 = 0;
          local_1618 = 0x3ff0000000000000;
          local_1600 = 0;
          uStack_15f8 = 0;
          local_1610 = 0;
          uStack_1608 = 0;
          local_15f0 = 0x3ff0000000000000;
          local_15e8 = 0x3ff0000000000000;
          local_15d0 = 0;
          uStack_15c8 = 0;
          local_15e0 = 0;
          uStack_15d8 = 0;
          local_15c0 = 0x3ff0000000000000;
          local_15a8 = 0;
          uStack_15a0 = 0;
          local_15b8 = 0;
          uStack_15b0 = 0;
          local_1598 = 0x3ff0000000000000;
          local_1580 = 0;
          uStack_1578 = 0;
          local_1590 = 0;
          uStack_1588 = 0;
          local_1570 = 0x3ff0000000000000;
          local_1568 = 0x3ff0000000000000;
          local_1550 = 0;
          uStack_1548 = 0;
          local_1560 = 0;
          uStack_1558 = 0;
          local_1540 = 0x3ff0000000000000;
          local_1528 = 0;
          uStack_1520 = 0;
          local_1538 = 0;
          uStack_1530 = 0;
          local_1518 = 0x3ff0000000000000;
          local_1500 = 0;
          uStack_14f8 = 0;
          local_1510 = 0;
          uStack_1508 = 0;
          local_14f0 = 0x3ff0000000000000;
          local_14e8 = 0x3ff0000000000000;
          local_14d0 = 0;
          uStack_14c8 = 0;
          local_14e0 = 0;
          uStack_14d8 = 0;
          local_14c0 = 0x3ff0000000000000;
          local_14a8 = 0;
          uStack_14a0 = 0;
          local_14b8 = 0;
          uStack_14b0 = 0;
          local_1498 = 0x3ff0000000000000;
          local_1480 = 0;
          uStack_1478 = 0;
          local_1490 = 0;
          uStack_1488 = 0;
          local_1470 = 0x3ff0000000000000;
          local_1468 = 0x3ff0000000000000;
          local_1450 = 0;
          uStack_1448 = 0;
          local_1460 = 0;
          uStack_1458 = 0;
          local_1440 = 0x3ff0000000000000;
          local_1428 = 0;
          uStack_1420 = 0;
          local_1438 = 0;
          uStack_1430 = 0;
          local_1418 = 0x3ff0000000000000;
          local_1400 = 0;
          uStack_13f8 = 0;
          local_1410 = 0;
          uStack_1408 = 0;
          local_13f0 = 0x3ff0000000000000;
          local_13e8 = 0x3ff0000000000000;
          local_13d0 = 0;
          uStack_13c8 = 0;
          local_13e0 = 0;
          uStack_13d8 = 0;
          local_13c0 = 0x3ff0000000000000;
          local_13a8 = 0;
          uStack_13a0 = 0;
          local_13b8 = 0;
          uStack_13b0 = 0;
          local_1398 = 0x3ff0000000000000;
          local_1380 = 0;
          uStack_1378 = 0;
          local_1390 = 0;
          uStack_1388 = 0;
          local_1370 = 0x3ff0000000000000;
          local_1368 = 0x3ff0000000000000;
          local_1350 = 0;
          uStack_1348 = 0;
          local_1360 = 0;
          uStack_1358 = 0;
          local_1340 = 0x3ff0000000000000;
          local_1328 = 0;
          uStack_1320 = 0;
          local_1338 = 0;
          uStack_1330 = 0;
          local_1318 = 0x3ff0000000000000;
          local_1300 = 0;
          uStack_12f8 = 0;
          local_1310 = 0;
          uStack_1308 = 0;
          local_12f0 = 0x3ff0000000000000;
          local_12e8 = 0x3ff0000000000000;
          local_12d0 = 0;
          uStack_12c8 = 0;
          local_12e0 = 0;
          uStack_12d8 = 0;
          local_12c0 = 0x3ff0000000000000;
          local_12a8 = 0;
          uStack_12a0 = 0;
          local_12b8 = 0;
          uStack_12b0 = 0;
          local_1298 = 0x3ff0000000000000;
          local_1280 = 0;
          uStack_1278 = 0;
          local_1290 = 0;
          uStack_1288 = 0;
          local_1270 = 0x3ff0000000000000;
          local_1268 = 0x3ff0000000000000;
          local_1250 = 0;
          uStack_1248 = 0;
          local_1260 = 0;
          uStack_1258 = 0;
          local_1240 = 0x3ff0000000000000;
          local_1228 = 0;
          uStack_1220 = 0;
          local_1238 = 0;
          uStack_1230 = 0;
          local_1218 = 0x3ff0000000000000;
          local_1200 = 0;
          uStack_11f8 = 0;
          local_1210 = 0;
          uStack_1208 = 0;
          local_11f0 = 0x3ff0000000000000;
          local_11e8 = 0x3ff0000000000000;
          local_11d0 = 0;
          uStack_11c8 = 0;
          local_11e0 = 0;
          uStack_11d8 = 0;
          local_11c0 = 0x3ff0000000000000;
          local_11a8 = 0;
          uStack_11a0 = 0;
          local_11b8 = 0;
          uStack_11b0 = 0;
          local_1198 = 0x3ff0000000000000;
          local_1180 = 0;
          uStack_1178 = 0;
          local_1190 = 0;
          uStack_1188 = 0;
          local_1170 = 0x3ff0000000000000;
          local_1168 = 0x3ff0000000000000;
          local_1150 = 0;
          uStack_1148 = 0;
          local_1160 = 0;
          uStack_1158 = 0;
          local_1140 = 0x3ff0000000000000;
          local_1128 = 0;
          uStack_1120 = 0;
          local_1138 = 0;
          uStack_1130 = 0;
          local_1118 = 0x3ff0000000000000;
          local_1100 = 0;
          uStack_10f8 = 0;
          local_1110 = 0;
          uStack_1108 = 0;
          local_10f0 = 0x3ff0000000000000;
          local_10e8 = 0x3ff0000000000000;
          local_10d0 = 0;
          uStack_10c8 = 0;
          local_10e0 = 0;
          uStack_10d8 = 0;
          local_10c0 = 0x3ff0000000000000;
          local_10a8 = 0;
          uStack_10a0 = 0;
          local_10b8 = 0;
          uStack_10b0 = 0;
          local_1098 = 0x3ff0000000000000;
          local_1080 = 0;
          uStack_1078 = 0;
          local_1090 = 0;
          uStack_1088 = 0;
          local_1070 = 0x3ff0000000000000;
          local_1068 = 0x3ff0000000000000;
          local_1050 = 0;
          uStack_1048 = 0;
          local_1060 = 0;
          uStack_1058 = 0;
          local_1040 = 0x3ff0000000000000;
          local_1028 = 0;
          uStack_1020 = 0;
          local_1038 = 0;
          uStack_1030 = 0;
          local_1018 = 0x3ff0000000000000;
          local_1000 = 0;
          uStack_ff8 = 0;
          local_1010 = 0;
          uStack_1008 = 0;
          local_ff0 = 0x3ff0000000000000;
          local_fd8 = DAT_14c8464f0;
          local_fc0 = DAT_14c8464f0;
          local_fa8 = DAT_14c8464f0;
          local_fa0 = DAT_14c8463f0;
          uStack_f98 = DAT_14c8463f8;
          local_f90 = DAT_14c8463f0;
          uStack_f88 = DAT_14c8463f8;
          local_f80 = 0x3f800000;
          local_f78 = 0x3ff0000000000000;
          local_f60 = 0;
          uStack_f58 = 0;
          local_f70 = 0;
          uStack_f68 = 0;
          local_f50 = 0x3ff0000000000000;
          local_f38 = 0;
          uStack_f30 = 0;
          local_f48 = 0;
          uStack_f40 = 0;
          local_f28 = 0x3ff0000000000000;
          local_f10 = 0;
          uStack_f08 = 0;
          local_f20 = 0;
          uStack_f18 = 0;
          local_f00 = 0x3ff0000000000000;
          local_ef8 = 0x3ff0000000000000;
          local_ee0 = 0;
          uStack_ed8 = 0;
          local_ef0 = 0;
          uStack_ee8 = 0;
          local_ed0 = 0x3ff0000000000000;
          local_eb8 = 0;
          uStack_eb0 = 0;
          local_ec8 = 0;
          uStack_ec0 = 0;
          local_ea8 = 0x3ff0000000000000;
          local_e90 = 0;
          uStack_e88 = 0;
          local_ea0 = 0;
          uStack_e98 = 0;
          local_e80 = 0x3ff0000000000000;
          local_e78 = 0x3ff0000000000000;
          local_e60 = 0;
          uStack_e58 = 0;
          local_e70 = 0;
          uStack_e68 = 0;
          local_e50 = 0x3ff0000000000000;
          local_e38 = 0;
          uStack_e30 = 0;
          local_e48 = 0;
          uStack_e40 = 0;
          local_e28 = 0x3ff0000000000000;
          local_e10 = 0;
          uStack_e08 = 0;
          local_e20 = 0;
          uStack_e18 = 0;
          local_e00 = 0x3ff0000000000000;
          local_df8 = 0x3ff0000000000000;
          local_de0 = 0;
          uStack_dd8 = 0;
          local_df0 = 0;
          uStack_de8 = 0;
          local_dd0 = 0x3ff0000000000000;
          local_db8 = 0;
          uStack_db0 = 0;
          local_dc8 = 0;
          uStack_dc0 = 0;
          local_da8 = 0x3ff0000000000000;
          local_d90 = 0;
          uStack_d88 = 0;
          local_da0 = 0;
          uStack_d98 = 0;
          local_d80 = 0x3ff0000000000000;
          local_d78 = 0x3ff0000000000000;
          local_d60 = 0;
          uStack_d58 = 0;
          local_d70 = 0;
          uStack_d68 = 0;
          local_d50 = 0x3ff0000000000000;
          local_d38 = 0;
          uStack_d30 = 0;
          local_d48 = 0;
          uStack_d40 = 0;
          local_d28 = 0x3ff0000000000000;
          local_d10 = 0;
          uStack_d08 = 0;
          local_d20 = 0;
          uStack_d18 = 0;
          local_d00 = 0x3ff0000000000000;
          local_cf8 = 0x3ff0000000000000;
          local_ce0 = 0;
          uStack_cd8 = 0;
          local_cf0 = 0;
          uStack_ce8 = 0;
          local_cd0 = 0x3ff0000000000000;
          local_cb8 = 0;
          uStack_cb0 = 0;
          local_cc8 = 0;
          uStack_cc0 = 0;
          local_ca8 = 0x3ff0000000000000;
          local_c90 = 0;
          uStack_c88 = 0;
          local_ca0 = 0;
          uStack_c98 = 0;
          local_c80 = 0x3ff0000000000000;
          local_c68 = DAT_14c8464f0;
          local_c50 = DAT_14c8464f0;
          local_c48 = 0x3ff0000000000000;
          local_c30 = 0;
          uStack_c28 = 0;
          local_c40 = 0;
          uStack_c38 = 0;
          local_c20 = 0x3ff0000000000000;
          local_c08 = 0;
          uStack_c00 = 0;
          local_c18 = 0;
          uStack_c10 = 0;
          local_bf8 = 0x3ff0000000000000;
          local_be0 = 0;
          uStack_bd8 = 0;
          local_bf0 = 0;
          uStack_be8 = 0;
          local_bd0 = 0x3ff0000000000000;
          local_bc8 = 0x3ff0000000000000;
          local_bb0 = 0;
          uStack_ba8 = 0;
          local_bc0 = 0;
          uStack_bb8 = 0;
          local_ba0 = 0x3ff0000000000000;
          local_b88 = 0;
          uStack_b80 = 0;
          local_b98 = 0;
          uStack_b90 = 0;
          local_b78 = 0x3ff0000000000000;
          local_b60 = 0;
          uStack_b58 = 0;
          local_b70 = 0;
          uStack_b68 = 0;
          local_b50 = 0x3ff0000000000000;
          local_b48 = 0x3ff0000000000000;
          local_b30 = 0;
          uStack_b28 = 0;
          local_b40 = 0;
          uStack_b38 = 0;
          local_b20 = 0x3ff0000000000000;
          local_b08 = 0;
          uStack_b00 = 0;
          local_b18 = 0;
          uStack_b10 = 0;
          local_af8 = 0x3ff0000000000000;
          local_ae0 = 0;
          uStack_ad8 = 0;
          local_af0 = 0;
          uStack_ae8 = 0;
          local_ad0 = 0x3ff0000000000000;
          local_ac8 = 0x3ff0000000000000;
          local_ab0 = 0;
          uStack_aa8 = 0;
          local_ac0 = 0;
          uStack_ab8 = 0;
          local_aa0 = 0x3ff0000000000000;
          local_a88 = 0;
          uStack_a80 = 0;
          local_a98 = 0;
          uStack_a90 = 0;
          local_a78 = 0x3ff0000000000000;
          local_a60 = 0;
          uStack_a58 = 0;
          local_a70 = 0;
          uStack_a68 = 0;
          local_a50 = 0x3ff0000000000000;
          local_a48 = 0x3ff0000000000000;
          local_a30 = 0;
          uStack_a28 = 0;
          local_a40 = 0;
          uStack_a38 = 0;
          local_a20 = 0x3ff0000000000000;
          local_a08 = 0;
          uStack_a00 = 0;
          local_a18 = 0;
          uStack_a10 = 0;
          local_9f8 = 0x3ff0000000000000;
          local_9e0 = 0;
          uStack_9d8 = 0;
          local_9f0 = 0;
          uStack_9e8 = 0;
          local_9d0 = 0x3ff0000000000000;
          local_9c8 = 0x3ff0000000000000;
          local_9b0 = 0;
          uStack_9a8 = 0;
          local_9c0 = 0;
          uStack_9b8 = 0;
          local_9a0 = 0x3ff0000000000000;
          local_988 = 0;
          uStack_980 = 0;
          local_998 = 0;
          uStack_990 = 0;
          local_978 = 0x3ff0000000000000;
          local_960 = 0;
          uStack_958 = 0;
          local_970 = 0;
          uStack_968 = 0;
          local_950 = 0x3ff0000000000000;
          local_948 = 0x3ff0000000000000;
          local_930 = 0;
          uStack_928 = 0;
          local_940 = 0;
          uStack_938 = 0;
          local_920 = 0x3ff0000000000000;
          local_908 = 0;
          uStack_900 = 0;
          local_918 = 0;
          uStack_910 = 0;
          local_8f8 = 0x3ff0000000000000;
          local_8e0 = 0;
          uStack_8d8 = 0;
          local_8f0 = 0;
          uStack_8e8 = 0;
          local_8d0 = 0x3ff0000000000000;
          local_8c8 = 0x3ff0000000000000;
          local_8b0 = 0;
          uStack_8a8 = 0;
          local_8c0 = 0;
          uStack_8b8 = 0;
          local_8a0 = 0x3ff0000000000000;
          local_888 = 0;
          uStack_880 = 0;
          local_898 = 0;
          uStack_890 = 0;
          local_878 = 0x3ff0000000000000;
          local_860 = 0;
          uStack_858 = 0;
          local_870 = 0;
          uStack_868 = 0;
          local_850 = 0x3ff0000000000000;
          local_848 = 0x3ff0000000000000;
          local_830 = 0;
          uStack_828 = 0;
          local_840 = 0;
          uStack_838 = 0;
          local_820 = 0x3ff0000000000000;
          local_808 = 0;
          uStack_800 = 0;
          local_818 = 0;
          uStack_810 = 0;
          local_7f8 = 0x3ff0000000000000;
          local_7e0 = 0;
          uStack_7d8 = 0;
          local_7f0 = 0;
          uStack_7e8 = 0;
          local_7d0 = 0x3ff0000000000000;
          local_7c8 = 0x3ff0000000000000;
          local_7b0 = 0;
          uStack_7a8 = 0;
          local_7c0 = 0;
          uStack_7b8 = 0;
          local_7a0 = 0x3ff0000000000000;
          local_788 = 0;
          uStack_780 = 0;
          local_798 = 0;
          uStack_790 = 0;
          local_778 = 0x3ff0000000000000;
          local_760 = 0;
          uStack_758 = 0;
          local_770 = 0;
          uStack_768 = 0;
          local_750 = 0x3ff0000000000000;
          local_748 = 0x3ff0000000000000;
          local_730 = 0;
          uStack_728 = 0;
          local_740 = 0;
          uStack_738 = 0;
          local_720 = 0x3ff0000000000000;
          local_708 = 0;
          uStack_700 = 0;
          local_718 = 0;
          uStack_710 = 0;
          local_6f8 = 0x3ff0000000000000;
          local_6e0 = 0;
          uStack_6d8 = 0;
          local_6f0 = 0;
          uStack_6e8 = 0;
          local_6d0 = 0x3ff0000000000000;
          local_6c8 = 0x3ff0000000000000;
          local_6b0 = 0;
          uStack_6a8 = 0;
          local_6c0 = 0;
          uStack_6b8 = 0;
          local_6a0 = 0x3ff0000000000000;
          local_688 = 0;
          uStack_680 = 0;
          local_698 = 0;
          uStack_690 = 0;
          local_678 = 0x3ff0000000000000;
          local_660 = 0;
          uStack_658 = 0;
          local_670 = 0;
          uStack_668 = 0;
          local_650 = 0x3ff0000000000000;
          local_648 = 0x3ff0000000000000;
          local_630 = 0;
          uStack_628 = 0;
          local_640 = 0;
          uStack_638 = 0;
          local_620 = 0x3ff0000000000000;
          local_608 = 0;
          uStack_600 = 0;
          local_618 = 0;
          uStack_610 = 0;
          local_5f8 = 0x3ff0000000000000;
          local_5e0 = 0;
          uStack_5d8 = 0;
          local_5f0 = 0;
          uStack_5e8 = 0;
          local_5d0 = 0x3ff0000000000000;
          local_5c8 = 0x3ff0000000000000;
          local_5b0 = 0;
          uStack_5a8 = 0;
          local_5c0 = 0;
          uStack_5b8 = 0;
          local_5a0 = 0x3ff0000000000000;
          local_588 = 0;
          uStack_580 = 0;
          local_598 = 0;
          uStack_590 = 0;
          local_578 = 0x3ff0000000000000;
          local_560 = 0;
          uStack_558 = 0;
          local_570 = 0;
          uStack_568 = 0;
          local_550 = 0x3ff0000000000000;
          local_548 = 0x3ff0000000000000;
          local_530 = 0;
          uStack_528 = 0;
          local_540 = 0;
          uStack_538 = 0;
          local_520 = 0x3ff0000000000000;
          local_508 = 0;
          uStack_500 = 0;
          local_518 = 0;
          uStack_510 = 0;
          local_4f8 = 0x3ff0000000000000;
          local_4e0 = 0;
          uStack_4d8 = 0;
          local_4f0 = 0;
          uStack_4e8 = 0;
          local_4d0 = 0x3ff0000000000000;
          local_4c8 = 0x3ff0000000000000;
          local_4b0 = 0;
          uStack_4a8 = 0;
          local_4c0 = 0;
          uStack_4b8 = 0;
          local_4a0 = 0x3ff0000000000000;
          local_488 = 0;
          uStack_480 = 0;
          local_498 = 0;
          uStack_490 = 0;
          local_478 = 0x3ff0000000000000;
          local_460 = 0;
          uStack_458 = 0;
          local_470 = 0;
          uStack_468 = 0;
          local_450 = 0x3ff0000000000000;
          local_438 = DAT_14c8464f0;
          local_420 = DAT_14c8464f0;
          local_408 = DAT_14c8464f0;
          local_400 = DAT_14c8463f0;
          uStack_3f8 = DAT_14c8463f8;
          local_3f0 = DAT_14c8463f0;
          uStack_3e8 = DAT_14c8463f8;
          local_3e0 = 0x3f800000;
          local_3d8 = 0;
          uStack_3d0 = 0;
          local_3c0 = 0;
          local_3b8 = &DAT_3f8000003f800000;
          local_3b0 = local_28ac;
          local_3ac = 0xffffffffffffffff;
          uStack_3a4 = 0x100000000;
          local_38c = 0;
          local_39c = 0;
          uStack_394 = 0;
          local_388 = 0x3f800000;
          local_384 = 0;
          uStack_380 = CONCAT14((undefined1)uStack_30c,(undefined4)DAT_14c8464e0);
          uStack_370 = DAT_14c8464f0;
          uStack_37b = uStack_30c._1_3_;
          local_378 = (undefined4)DAT_14c8464e8;
          uStack_374 = DAT_14c8464e8._4_4_;
          local_368 = 0xbf800000;
          local_338 = 0;
          local_348 = 0;
          uStack_340 = 0;
          local_358 = 0;
          uStack_350 = 0;
          local_334 = 7;
          local_330 = 0;
          local_32d = local_26b9;
          local_32f = local_26bb;
          local_32c = 0x3f800000;
          lVar17 = *(longlong *)(param_1 + 0xb50);
          lVar16 = lVar17 + 0x100;
          if (*(longlong *)(lVar17 + 0x2900) != 0) {
            lVar16 = *(longlong *)(lVar17 + 0x2900);
          }
          lVar23 = (longlong)*(int *)(lVar17 + 0x2910) * 0x140;
          lVar17 = lVar16 + lVar23;
          puVar19 = &DAT_14c846400;
          puVar25 = local_1d8;
          for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar19 = &DAT_14c846400;
          puVar25 = local_158;
          for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          local_c8 = DAT_14c8464f0;
          local_d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_a8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_a0 = DAT_14c8464f0;
          local_98 = 0x3f80000000000000;
          uStack_90 = 0x3f800000;
          local_1f8 = *(undefined4 *)(lVar17 + -0xc0);
          uStack_1f4 = *(uint *)(lVar17 + -0xbc);
          uStack_1f0 = *(undefined4 *)(lVar17 + -0xb8);
          uStack_1ec = *(uint *)(lVar17 + -0xb4);
          local_1e8 = *(ulonglong *)(lVar17 + -0xb0);
          puVar19 = (undefined8 *)(lVar16 + -0x80 + lVar23);
          puVar25 = local_2f8;
          for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar19 = (undefined8 *)(lVar17 + -0x140);
          puVar25 = local_278;
          for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          local_c0 = 0;
          local_b8 = 0x400000004000;
          FUN_1447717da(local_26b8,local_2f8);
          memcpy(&local_1b18,local_26b8,0xba0);
          memcpy(&local_f78,&local_1b18,0xba0);
          iVar14 = *(int *)(param_1 + 0x950) + *(int *)(param_1 + 0x960);
          iVar8 = *(int *)(param_1 + 0x960) + *(int *)(param_1 + 0x954);
          local_3d8 = CONCAT44(iVar8,iVar14);
          uStack_3d0 = CONCAT44(iVar8 + *(int *)(param_1 + 0x95c),*(int *)(param_1 + 0x958) + iVar14
                               );
          lVar17 = *(longlong *)(param_1 + 0x10);
          if (lVar17 == 0) {
            local_384 = 0;
          }
          else {
            local_384 = 1;
            uStack_380 = (undefined5)*(undefined8 *)(lVar17 + 0x1048);
            uStack_37b = (undefined3)((ulonglong)*(undefined8 *)(lVar17 + 0x1048) >> 0x28);
            local_378 = (undefined4)*(undefined8 *)(lVar17 + 0x1050);
            uStack_374 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x1050) >> 0x20);
            uStack_370 = *(undefined8 *)(lVar17 + 0x1058);
            dVar3 = *(double *)(lVar17 + 0x830);
            uVar27 = SUB84(dVar3,0);
            uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
            dVar4 = *(double *)(lVar17 + 0x858);
            if (dVar3 <= dVar4) {
              uVar27 = SUB84(dVar4,0);
              uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
            }
            fVar29 = *(float *)(lVar17 + 0x23c8) * local_3bc;
            local_368 = CONCAT44(fVar29 * fVar29,
                                 (float)(double)CONCAT44(uVar28,uVar27) /
                                 (DAT_14cb0cc18 * *(float *)(lVar17 + 0x23c8)));
          }
          if (*(char *)(local_28a8 + 0x60) == '\x01') goto LAB_14307298f;
LAB_143072d72:
          iVar8 = 0;
        }
        iVar14 = *(int *)(param_1 + 0xb48);
        *(uint *)(param_1 + 0xb48) = iVar14 + 1U;
        if (*(uint *)(param_1 + 0xb4c) < iVar14 + 1U) {
          FUN_146f000d8(local_28b8,iVar14);
        }
        lVar17 = *(longlong *)(param_1 + 0xb40);
        if (*(longlong *)(param_1 + 0xb40) == 0) {
          lVar17 = local_28b8;
        }
        *(int *)(lVar17 + (longlong)iVar14 * 4) = iVar8;
      }
      else {
        iVar8 = *(int *)(param_1 + 0xb48);
        *(int *)(param_1 + 0xb48) = iVar8 + 6;
        if ((uint)(*(int *)(param_1 + 0xb4c) - iVar8) < 6) {
          FUN_146f000d8(local_28b8,iVar8);
        }
        lVar17 = *(longlong *)(param_1 + 0xb40);
        if (*(longlong *)(param_1 + 0xb40) == 0) {
          lVar17 = local_28b8;
        }
        puVar19 = (undefined8 *)(lVar17 + (longlong)iVar8 * 4);
        *puVar19 = 0;
        puVar19[1] = 0;
        *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar8 * 4) = 0;
        local_2878 = (undefined8 *)(param_1 + 0x60);
        lVar17 = 0;
        lVar16 = 0;
        do {
          local_2870 = *(undefined8 *)(param_1 + 0x950);
          uVar12 = *(undefined8 *)(param_1 + 0x958);
          local_2848 = 0;
          uStack_2840 = 0;
          local_1b18 = (char *)0x3ff0000000000000;
          local_1b00 = 0;
          uStack_1af8 = 0;
          uStack_1b10 = 0;
          uStack_1b08 = 0;
          local_1af0 = 0x3ff0000000000000;
          local_1ad8 = 0;
          uStack_1ad0 = 0;
          local_1ae8 = 0;
          uStack_1ae0 = 0;
          local_1ac8 = 0x3ff0000000000000;
          local_1ab0 = 0;
          uStack_1aa8 = 0;
          local_1ac0 = 0;
          uStack_1ab8 = 0;
          local_1aa0 = 0x3ff0000000000000;
          local_1a98 = 0x3ff0000000000000;
          local_1a80 = 0;
          uStack_1a78 = 0;
          local_1a90 = 0;
          uStack_1a88 = 0;
          local_1a70 = 0x3ff0000000000000;
          local_1a58 = 0;
          uStack_1a50 = 0;
          local_1a68 = 0;
          uStack_1a60 = 0;
          local_1a48 = 0x3ff0000000000000;
          local_1a30 = 0;
          uStack_1a28 = 0;
          local_1a40 = 0;
          uStack_1a38 = 0;
          local_1a20 = 0x3ff0000000000000;
          local_1a18 = 0x3ff0000000000000;
          local_1a00 = 0;
          uStack_19f8 = 0;
          local_1a10 = 0;
          uStack_1a08 = 0;
          local_19f0 = 0x3ff0000000000000;
          local_19d8 = 0;
          uStack_19d0 = 0;
          local_19e8 = 0;
          uStack_19e0 = 0;
          local_19c8 = 0x3ff0000000000000;
          local_19b0 = 0;
          uStack_19a8 = 0;
          local_19c0 = 0;
          uStack_19b8 = 0;
          local_19a0 = 0x3ff0000000000000;
          local_1998 = 0x3ff0000000000000;
          local_1980 = 0;
          uStack_1978 = 0;
          local_1990 = 0;
          uStack_1988 = 0;
          local_1970 = 0x3ff0000000000000;
          local_1958 = 0;
          uStack_1950 = 0;
          local_1968 = 0;
          uStack_1960 = 0;
          local_1948 = 0x3ff0000000000000;
          local_1930 = 0;
          uStack_1928 = 0;
          local_1940 = 0;
          uStack_1938 = 0;
          local_1920 = 0x3ff0000000000000;
          local_1918 = 0x3ff0000000000000;
          local_1900 = 0;
          uStack_18f8 = 0;
          local_1910 = 0;
          uStack_1908 = 0;
          local_18f0 = 0x3ff0000000000000;
          local_18d8 = 0;
          uStack_18d0 = 0;
          local_18e8 = 0;
          uStack_18e0 = 0;
          local_18c8 = 0x3ff0000000000000;
          local_18b0 = 0;
          uStack_18a8 = 0;
          local_18c0 = 0;
          uStack_18b8 = 0;
          local_18a0 = 0x3ff0000000000000;
          local_1898 = 0x3ff0000000000000;
          local_1880 = 0;
          uStack_1878 = 0;
          local_1890 = 0;
          uStack_1888 = 0;
          local_1870 = 0x3ff0000000000000;
          local_1858 = 0;
          uStack_1850 = 0;
          local_1868 = 0;
          uStack_1860 = 0;
          local_1848 = 0x3ff0000000000000;
          local_1830 = 0;
          uStack_1828 = 0;
          local_1840 = 0;
          uStack_1838 = 0;
          local_1820 = 0x3ff0000000000000;
          local_1808 = local_26c8;
          local_1818 = local_26d8;
          uStack_1810 = uStack_26d0;
          local_17f0 = local_26e8;
          local_1800 = local_26f8;
          uStack_17f8 = uStack_26f0;
          local_17e8 = 0x3ff0000000000000;
          local_17d0 = 0;
          uStack_17c8 = 0;
          local_17e0 = 0;
          uStack_17d8 = 0;
          local_17c0 = 0x3ff0000000000000;
          local_17a8 = 0;
          uStack_17a0 = 0;
          local_17b8 = 0;
          uStack_17b0 = 0;
          local_1798 = 0x3ff0000000000000;
          local_1780 = 0;
          uStack_1778 = 0;
          local_1790 = 0;
          uStack_1788 = 0;
          local_1770 = 0x3ff0000000000000;
          local_1768 = 0x3ff0000000000000;
          local_1750 = 0;
          uStack_1748 = 0;
          local_1760 = 0;
          uStack_1758 = 0;
          local_1740 = 0x3ff0000000000000;
          local_1728 = 0;
          uStack_1720 = 0;
          local_1738 = 0;
          uStack_1730 = 0;
          local_1718 = 0x3ff0000000000000;
          local_1700 = 0;
          uStack_16f8 = 0;
          local_1710 = 0;
          uStack_1708 = 0;
          local_16f0 = 0x3ff0000000000000;
          local_16e8 = 0x3ff0000000000000;
          local_16d0 = 0;
          uStack_16c8 = 0;
          local_16e0 = 0;
          uStack_16d8 = 0;
          local_16c0 = 0x3ff0000000000000;
          local_16a8 = 0;
          uStack_16a0 = 0;
          local_16b8 = 0;
          uStack_16b0 = 0;
          local_1698 = 0x3ff0000000000000;
          local_1680 = 0;
          uStack_1678 = 0;
          local_1690 = 0;
          uStack_1688 = 0;
          local_1670 = 0x3ff0000000000000;
          local_1668 = 0x3ff0000000000000;
          local_1650 = 0;
          uStack_1648 = 0;
          local_1660 = 0;
          uStack_1658 = 0;
          local_1640 = 0x3ff0000000000000;
          local_1628 = 0;
          uStack_1620 = 0;
          local_1638 = 0;
          uStack_1630 = 0;
          local_1618 = 0x3ff0000000000000;
          local_1600 = 0;
          uStack_15f8 = 0;
          local_1610 = 0;
          uStack_1608 = 0;
          local_15f0 = 0x3ff0000000000000;
          local_15e8 = 0x3ff0000000000000;
          local_15d0 = 0;
          uStack_15c8 = 0;
          local_15e0 = 0;
          uStack_15d8 = 0;
          local_15c0 = 0x3ff0000000000000;
          local_15a8 = 0;
          uStack_15a0 = 0;
          local_15b8 = 0;
          uStack_15b0 = 0;
          local_1598 = 0x3ff0000000000000;
          local_1580 = 0;
          uStack_1578 = 0;
          local_1590 = 0;
          uStack_1588 = 0;
          local_1570 = 0x3ff0000000000000;
          local_1568 = 0x3ff0000000000000;
          local_1550 = 0;
          uStack_1548 = 0;
          local_1560 = 0;
          uStack_1558 = 0;
          local_1540 = 0x3ff0000000000000;
          local_1528 = 0;
          uStack_1520 = 0;
          local_1538 = 0;
          uStack_1530 = 0;
          local_1518 = 0x3ff0000000000000;
          local_1500 = 0;
          uStack_14f8 = 0;
          local_1510 = 0;
          uStack_1508 = 0;
          local_14f0 = 0x3ff0000000000000;
          local_14e8 = 0x3ff0000000000000;
          local_14d0 = 0;
          uStack_14c8 = 0;
          local_14e0 = 0;
          uStack_14d8 = 0;
          local_14c0 = 0x3ff0000000000000;
          local_14a8 = 0;
          uStack_14a0 = 0;
          local_14b8 = 0;
          uStack_14b0 = 0;
          local_1498 = 0x3ff0000000000000;
          local_1480 = 0;
          uStack_1478 = 0;
          local_1490 = 0;
          uStack_1488 = 0;
          local_1470 = 0x3ff0000000000000;
          local_1468 = 0x3ff0000000000000;
          local_1450 = 0;
          uStack_1448 = 0;
          local_1460 = 0;
          uStack_1458 = 0;
          local_1440 = 0x3ff0000000000000;
          local_1428 = 0;
          uStack_1420 = 0;
          local_1438 = 0;
          uStack_1430 = 0;
          local_1418 = 0x3ff0000000000000;
          local_1400 = 0;
          uStack_13f8 = 0;
          local_1410 = 0;
          uStack_1408 = 0;
          local_13f0 = 0x3ff0000000000000;
          local_13e8 = 0x3ff0000000000000;
          local_13d0 = 0;
          uStack_13c8 = 0;
          local_13e0 = 0;
          uStack_13d8 = 0;
          local_13c0 = 0x3ff0000000000000;
          local_13a8 = 0;
          uStack_13a0 = 0;
          local_13b8 = 0;
          uStack_13b0 = 0;
          local_1398 = 0x3ff0000000000000;
          local_1380 = 0;
          uStack_1378 = 0;
          local_1390 = 0;
          uStack_1388 = 0;
          local_1370 = 0x3ff0000000000000;
          local_1368 = 0x3ff0000000000000;
          local_1350 = 0;
          uStack_1348 = 0;
          local_1360 = 0;
          uStack_1358 = 0;
          local_1340 = 0x3ff0000000000000;
          local_1328 = 0;
          uStack_1320 = 0;
          local_1338 = 0;
          uStack_1330 = 0;
          local_1318 = 0x3ff0000000000000;
          local_1300 = 0;
          uStack_12f8 = 0;
          local_1310 = 0;
          uStack_1308 = 0;
          local_12f0 = 0x3ff0000000000000;
          local_12e8 = 0x3ff0000000000000;
          local_12d0 = 0;
          uStack_12c8 = 0;
          local_12e0 = 0;
          uStack_12d8 = 0;
          local_12c0 = 0x3ff0000000000000;
          local_12a8 = 0;
          uStack_12a0 = 0;
          local_12b8 = 0;
          uStack_12b0 = 0;
          local_1298 = 0x3ff0000000000000;
          local_1280 = 0;
          uStack_1278 = 0;
          local_1290 = 0;
          uStack_1288 = 0;
          local_1270 = 0x3ff0000000000000;
          local_1268 = 0x3ff0000000000000;
          local_1250 = 0;
          uStack_1248 = 0;
          local_1260 = 0;
          uStack_1258 = 0;
          local_1240 = 0x3ff0000000000000;
          local_1228 = 0;
          uStack_1220 = 0;
          local_1238 = 0;
          uStack_1230 = 0;
          local_1218 = 0x3ff0000000000000;
          local_1200 = 0;
          uStack_11f8 = 0;
          local_1210 = 0;
          uStack_1208 = 0;
          local_11f0 = 0x3ff0000000000000;
          local_11e8 = 0x3ff0000000000000;
          local_11d0 = 0;
          uStack_11c8 = 0;
          local_11e0 = 0;
          uStack_11d8 = 0;
          local_11c0 = 0x3ff0000000000000;
          local_11a8 = 0;
          uStack_11a0 = 0;
          local_11b8 = 0;
          uStack_11b0 = 0;
          local_1198 = 0x3ff0000000000000;
          local_1180 = 0;
          uStack_1178 = 0;
          local_1190 = 0;
          uStack_1188 = 0;
          local_1170 = 0x3ff0000000000000;
          local_1168 = 0x3ff0000000000000;
          local_1150 = 0;
          uStack_1148 = 0;
          local_1160 = 0;
          uStack_1158 = 0;
          local_1140 = 0x3ff0000000000000;
          local_1128 = 0;
          uStack_1120 = 0;
          local_1138 = 0;
          uStack_1130 = 0;
          local_1118 = 0x3ff0000000000000;
          local_1100 = 0;
          uStack_10f8 = 0;
          local_1110 = 0;
          uStack_1108 = 0;
          local_10f0 = 0x3ff0000000000000;
          local_10e8 = 0x3ff0000000000000;
          local_10d0 = 0;
          uStack_10c8 = 0;
          local_10e0 = 0;
          uStack_10d8 = 0;
          local_10c0 = 0x3ff0000000000000;
          local_10a8 = 0;
          uStack_10a0 = 0;
          local_10b8 = 0;
          uStack_10b0 = 0;
          local_1098 = 0x3ff0000000000000;
          local_1080 = 0;
          uStack_1078 = 0;
          local_1090 = 0;
          uStack_1088 = 0;
          local_1070 = 0x3ff0000000000000;
          local_1068 = 0x3ff0000000000000;
          local_1050 = 0;
          uStack_1048 = 0;
          local_1060 = 0;
          uStack_1058 = 0;
          local_1040 = 0x3ff0000000000000;
          local_1028 = 0;
          uStack_1020 = 0;
          local_1038 = 0;
          uStack_1030 = 0;
          local_1018 = 0x3ff0000000000000;
          local_1000 = 0;
          uStack_ff8 = 0;
          local_1010 = 0;
          uStack_1008 = 0;
          local_ff0 = 0x3ff0000000000000;
          local_fd8 = local_2708;
          local_fe8 = local_2718;
          uStack_fe0 = uStack_2710;
          local_fc0 = local_2728;
          local_fd0 = local_2738;
          uStack_fc8 = uStack_2730;
          local_fa8 = local_2748;
          local_fb8 = local_2758;
          uStack_fb0 = uStack_2750;
          local_fa0 = local_2768;
          uStack_f98 = uStack_2760;
          local_f90 = local_2778;
          uStack_f88 = uStack_2770;
          local_f80 = 0x3f800000;
          local_f78 = 0x3ff0000000000000;
          local_f60 = 0;
          uStack_f58 = 0;
          local_f70 = 0;
          uStack_f68 = 0;
          local_f50 = 0x3ff0000000000000;
          local_f38 = 0;
          uStack_f30 = 0;
          local_f48 = 0;
          uStack_f40 = 0;
          local_f28 = 0x3ff0000000000000;
          local_f10 = 0;
          uStack_f08 = 0;
          local_f20 = 0;
          uStack_f18 = 0;
          local_f00 = 0x3ff0000000000000;
          local_ef8 = 0x3ff0000000000000;
          local_ee0 = 0;
          uStack_ed8 = 0;
          local_ef0 = 0;
          uStack_ee8 = 0;
          local_ed0 = 0x3ff0000000000000;
          local_eb8 = 0;
          uStack_eb0 = 0;
          local_ec8 = 0;
          uStack_ec0 = 0;
          local_ea8 = 0x3ff0000000000000;
          local_e90 = 0;
          uStack_e88 = 0;
          local_ea0 = 0;
          uStack_e98 = 0;
          local_e80 = 0x3ff0000000000000;
          local_e78 = 0x3ff0000000000000;
          local_e60 = 0;
          uStack_e58 = 0;
          local_e70 = 0;
          uStack_e68 = 0;
          local_e50 = 0x3ff0000000000000;
          local_e38 = 0;
          uStack_e30 = 0;
          local_e48 = 0;
          uStack_e40 = 0;
          local_e28 = 0x3ff0000000000000;
          local_e10 = 0;
          uStack_e08 = 0;
          local_e20 = 0;
          uStack_e18 = 0;
          local_e00 = 0x3ff0000000000000;
          local_df8 = 0x3ff0000000000000;
          local_de0 = 0;
          uStack_dd8 = 0;
          local_df0 = 0;
          uStack_de8 = 0;
          local_dd0 = 0x3ff0000000000000;
          local_db8 = 0;
          uStack_db0 = 0;
          local_dc8 = 0;
          uStack_dc0 = 0;
          local_da8 = 0x3ff0000000000000;
          local_d90 = 0;
          uStack_d88 = 0;
          local_da0 = 0;
          uStack_d98 = 0;
          local_d80 = 0x3ff0000000000000;
          local_d78 = 0x3ff0000000000000;
          local_d60 = 0;
          uStack_d58 = 0;
          local_d70 = 0;
          uStack_d68 = 0;
          local_d50 = 0x3ff0000000000000;
          local_d38 = 0;
          uStack_d30 = 0;
          local_d48 = 0;
          uStack_d40 = 0;
          local_d28 = 0x3ff0000000000000;
          local_d10 = 0;
          uStack_d08 = 0;
          local_d20 = 0;
          uStack_d18 = 0;
          local_d00 = 0x3ff0000000000000;
          local_cf8 = 0x3ff0000000000000;
          local_ce0 = 0;
          uStack_cd8 = 0;
          local_cf0 = 0;
          uStack_ce8 = 0;
          local_cd0 = 0x3ff0000000000000;
          local_cb8 = 0;
          uStack_cb0 = 0;
          local_cc8 = 0;
          uStack_cc0 = 0;
          local_ca8 = 0x3ff0000000000000;
          local_c90 = 0;
          uStack_c88 = 0;
          local_ca0 = 0;
          uStack_c98 = 0;
          local_c80 = 0x3ff0000000000000;
          local_c68 = local_2788;
          local_c78 = local_2798;
          uStack_c70 = uStack_2790;
          local_c50 = local_27a8;
          local_c60 = local_27b8;
          uStack_c58 = uStack_27b0;
          local_c48 = 0x3ff0000000000000;
          local_c30 = 0;
          uStack_c28 = 0;
          local_c40 = 0;
          uStack_c38 = 0;
          local_c20 = 0x3ff0000000000000;
          local_c08 = 0;
          uStack_c00 = 0;
          local_c18 = 0;
          uStack_c10 = 0;
          local_bf8 = 0x3ff0000000000000;
          local_be0 = 0;
          uStack_bd8 = 0;
          local_bf0 = 0;
          uStack_be8 = 0;
          local_bd0 = 0x3ff0000000000000;
          local_bc8 = 0x3ff0000000000000;
          local_bb0 = 0;
          uStack_ba8 = 0;
          local_bc0 = 0;
          uStack_bb8 = 0;
          local_ba0 = 0x3ff0000000000000;
          local_b88 = 0;
          uStack_b80 = 0;
          local_b98 = 0;
          uStack_b90 = 0;
          local_b78 = 0x3ff0000000000000;
          local_b60 = 0;
          uStack_b58 = 0;
          local_b70 = 0;
          uStack_b68 = 0;
          local_b50 = 0x3ff0000000000000;
          local_b48 = 0x3ff0000000000000;
          local_b30 = 0;
          uStack_b28 = 0;
          local_b40 = 0;
          uStack_b38 = 0;
          local_b20 = 0x3ff0000000000000;
          local_b08 = 0;
          uStack_b00 = 0;
          local_b18 = 0;
          uStack_b10 = 0;
          local_af8 = 0x3ff0000000000000;
          local_ae0 = 0;
          uStack_ad8 = 0;
          local_af0 = 0;
          uStack_ae8 = 0;
          local_ad0 = 0x3ff0000000000000;
          local_ac8 = 0x3ff0000000000000;
          local_ab0 = 0;
          uStack_aa8 = 0;
          local_ac0 = 0;
          uStack_ab8 = 0;
          local_aa0 = 0x3ff0000000000000;
          local_a88 = 0;
          uStack_a80 = 0;
          local_a98 = 0;
          uStack_a90 = 0;
          local_a78 = 0x3ff0000000000000;
          local_a60 = 0;
          uStack_a58 = 0;
          local_a70 = 0;
          uStack_a68 = 0;
          local_a50 = 0x3ff0000000000000;
          local_a48 = 0x3ff0000000000000;
          local_a30 = 0;
          uStack_a28 = 0;
          local_a40 = 0;
          uStack_a38 = 0;
          local_a20 = 0x3ff0000000000000;
          local_a08 = 0;
          uStack_a00 = 0;
          local_a18 = 0;
          uStack_a10 = 0;
          local_9f8 = 0x3ff0000000000000;
          local_9e0 = 0;
          uStack_9d8 = 0;
          local_9f0 = 0;
          uStack_9e8 = 0;
          local_9d0 = 0x3ff0000000000000;
          local_9c8 = 0x3ff0000000000000;
          local_9b0 = 0;
          uStack_9a8 = 0;
          local_9c0 = 0;
          uStack_9b8 = 0;
          local_9a0 = 0x3ff0000000000000;
          local_988 = 0;
          uStack_980 = 0;
          local_998 = 0;
          uStack_990 = 0;
          local_978 = 0x3ff0000000000000;
          local_960 = 0;
          uStack_958 = 0;
          local_970 = 0;
          uStack_968 = 0;
          local_950 = 0x3ff0000000000000;
          local_948 = 0x3ff0000000000000;
          local_930 = 0;
          uStack_928 = 0;
          local_940 = 0;
          uStack_938 = 0;
          local_920 = 0x3ff0000000000000;
          local_908 = 0;
          uStack_900 = 0;
          local_918 = 0;
          uStack_910 = 0;
          local_8f8 = 0x3ff0000000000000;
          local_8e0 = 0;
          uStack_8d8 = 0;
          local_8f0 = 0;
          uStack_8e8 = 0;
          local_8d0 = 0x3ff0000000000000;
          local_8c8 = 0x3ff0000000000000;
          local_8b0 = 0;
          uStack_8a8 = 0;
          local_8c0 = 0;
          uStack_8b8 = 0;
          local_8a0 = 0x3ff0000000000000;
          local_888 = 0;
          uStack_880 = 0;
          local_898 = 0;
          uStack_890 = 0;
          local_878 = 0x3ff0000000000000;
          local_860 = 0;
          uStack_858 = 0;
          local_870 = 0;
          uStack_868 = 0;
          local_850 = 0x3ff0000000000000;
          local_848 = 0x3ff0000000000000;
          local_830 = 0;
          uStack_828 = 0;
          local_840 = 0;
          uStack_838 = 0;
          local_820 = 0x3ff0000000000000;
          local_808 = 0;
          uStack_800 = 0;
          local_818 = 0;
          uStack_810 = 0;
          local_7f8 = 0x3ff0000000000000;
          local_7e0 = 0;
          uStack_7d8 = 0;
          local_7f0 = 0;
          uStack_7e8 = 0;
          local_7d0 = 0x3ff0000000000000;
          local_7c8 = 0x3ff0000000000000;
          local_7b0 = 0;
          uStack_7a8 = 0;
          local_7c0 = 0;
          uStack_7b8 = 0;
          local_7a0 = 0x3ff0000000000000;
          local_788 = 0;
          uStack_780 = 0;
          local_798 = 0;
          uStack_790 = 0;
          local_778 = 0x3ff0000000000000;
          local_760 = 0;
          uStack_758 = 0;
          local_770 = 0;
          uStack_768 = 0;
          local_750 = 0x3ff0000000000000;
          local_748 = 0x3ff0000000000000;
          local_730 = 0;
          uStack_728 = 0;
          local_740 = 0;
          uStack_738 = 0;
          local_720 = 0x3ff0000000000000;
          local_708 = 0;
          uStack_700 = 0;
          local_718 = 0;
          uStack_710 = 0;
          local_6f8 = 0x3ff0000000000000;
          local_6e0 = 0;
          uStack_6d8 = 0;
          local_6f0 = 0;
          uStack_6e8 = 0;
          local_6d0 = 0x3ff0000000000000;
          local_6c8 = 0x3ff0000000000000;
          local_6b0 = 0;
          uStack_6a8 = 0;
          local_6c0 = 0;
          uStack_6b8 = 0;
          local_6a0 = 0x3ff0000000000000;
          local_688 = 0;
          uStack_680 = 0;
          local_698 = 0;
          uStack_690 = 0;
          local_678 = 0x3ff0000000000000;
          local_660 = 0;
          uStack_658 = 0;
          local_670 = 0;
          uStack_668 = 0;
          local_650 = 0x3ff0000000000000;
          local_648 = 0x3ff0000000000000;
          local_630 = 0;
          uStack_628 = 0;
          local_640 = 0;
          uStack_638 = 0;
          local_620 = 0x3ff0000000000000;
          local_608 = 0;
          uStack_600 = 0;
          local_618 = 0;
          uStack_610 = 0;
          local_5f8 = 0x3ff0000000000000;
          local_5e0 = 0;
          uStack_5d8 = 0;
          local_5f0 = 0;
          uStack_5e8 = 0;
          local_5d0 = 0x3ff0000000000000;
          local_5c8 = 0x3ff0000000000000;
          local_5b0 = 0;
          uStack_5a8 = 0;
          local_5c0 = 0;
          uStack_5b8 = 0;
          local_5a0 = 0x3ff0000000000000;
          local_588 = 0;
          uStack_580 = 0;
          local_598 = 0;
          uStack_590 = 0;
          local_578 = 0x3ff0000000000000;
          local_560 = 0;
          uStack_558 = 0;
          local_570 = 0;
          uStack_568 = 0;
          local_550 = 0x3ff0000000000000;
          local_548 = 0x3ff0000000000000;
          local_530 = 0;
          uStack_528 = 0;
          local_540 = 0;
          uStack_538 = 0;
          local_520 = 0x3ff0000000000000;
          local_508 = 0;
          uStack_500 = 0;
          local_518 = 0;
          uStack_510 = 0;
          local_4f8 = 0x3ff0000000000000;
          local_4e0 = 0;
          uStack_4d8 = 0;
          local_4f0 = 0;
          uStack_4e8 = 0;
          local_4d0 = 0x3ff0000000000000;
          local_4c8 = 0x3ff0000000000000;
          local_4b0 = 0;
          uStack_4a8 = 0;
          local_4c0 = 0;
          uStack_4b8 = 0;
          local_4a0 = 0x3ff0000000000000;
          local_488 = 0;
          uStack_480 = 0;
          local_498 = 0;
          uStack_490 = 0;
          local_478 = 0x3ff0000000000000;
          local_460 = 0;
          uStack_458 = 0;
          local_470 = 0;
          uStack_468 = 0;
          local_450 = 0x3ff0000000000000;
          local_438 = local_27c8;
          local_448 = local_27d8;
          uStack_440 = uStack_27d0;
          local_420 = local_27e8;
          local_430 = local_27f8;
          uStack_428 = uStack_27f0;
          local_408 = local_2808;
          local_418 = local_2818;
          uStack_410 = uStack_2810;
          local_400 = local_2828;
          uStack_3f8 = uStack_2820;
          local_3f0 = local_2838;
          uStack_3e8 = uStack_2830;
          local_3e0 = 0x3f800000;
          local_3d8 = 0;
          uStack_3d0 = 0;
          local_3c8 = local_2898;
          local_3c0 = 0;
          local_3b8 = &DAT_3f8000003f800000;
          local_3b0 = local_28ac;
          local_3ac = 0xffffffffffffffff;
          uStack_3a4 = 0x100000000;
          local_38c = 0;
          local_39c = 0;
          uStack_394 = 0;
          local_388 = 0x3f800000;
          local_384 = 0;
          uStack_380 = CONCAT14((undefined1)uStack_30c,local_310);
          uStack_370 = local_300;
          uStack_37b = uStack_30c._1_3_;
          local_378 = uStack_308;
          uStack_374 = uStack_304;
          local_368 = 0xbf800000;
          local_338 = 0;
          local_348 = 0;
          uStack_340 = 0;
          local_358 = 0;
          uStack_350 = 0;
          local_334 = 7;
          local_330 = 0;
          local_32d = local_26b9;
          local_32f = local_26bb;
          local_32c = 0x3f800000;
          puVar19 = &DAT_14c846400;
          puVar25 = local_278;
          for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar19 = &DAT_14c846400;
          puVar25 = local_1d8;
          for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          puVar19 = &DAT_14c846400;
          puVar25 = local_158;
          for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          local_c8 = DAT_14c8464f0;
          local_d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_a0 = DAT_14c8464f0;
          local_b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_a8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_98 = 0x3f80000000000000;
          uStack_90 = 0x3f800000;
          local_1f8 = *(undefined4 *)(param_1 + 0x48);
          uStack_1f0 = *(undefined4 *)(param_1 + 0x50);
          uStack_1f4 = *(uint *)(param_1 + 0x4c) ^ 0x80000000;
          uStack_1ec = *(uint *)(param_1 + 0x54) ^ 0x80000000;
          local_1e8 = *(ulonglong *)(param_1 + 0x58) ^ 0x8000000000000000;
          local_c0 = *(undefined8 *)(param_1 + 0x950);
          local_b8 = CONCAT44(*(int *)(param_1 + 0x954) + *(int *)(param_1 + 0x960) * 2 +
                              *(int *)(param_1 + 0x95c),
                              *(int *)(param_1 + 0x950) + *(int *)(param_1 + 0x960) * 2 +
                              *(int *)(param_1 + 0x958));
          if ((*(byte *)(param_1 + 0x990) & 0x20) == 0) {
            puVar19 = local_2878;
            puVar25 = local_2f8;
            for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
              *puVar25 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar25 = puVar25 + 1;
            }
            lVar15 = 0x160;
          }
          else {
            puVar19 = (undefined8 *)(lVar16 * 4 + *(longlong *)(param_1 + 0x9c0));
            puVar25 = local_2f8;
            for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
              *puVar25 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar25 = puVar25 + 1;
            }
            lVar15 = 0x9d0;
          }
          puVar19 = (undefined8 *)(lVar15 + param_1);
          puVar25 = local_278;
          for (lVar23 = 0x10; lVar23 != 0; lVar23 = lVar23 + -1) {
            *puVar25 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar25 = puVar25 + 1;
          }
          local_28a0 = lVar17;
          local_2890 = lVar16;
          local_3bc = fVar29;
          FUN_1447717da(local_26b8,local_2f8);
          memcpy(&local_1b18,local_26b8,0xba0);
          memcpy(&local_f78,&local_1b18,0xba0);
          lVar16 = local_28a8;
          local_3d8 = local_2870;
          lVar17 = *(longlong *)(param_1 + 0x10);
          if (lVar17 == 0) {
            local_384 = 0;
          }
          else {
            local_384 = 1;
            uStack_370 = *(undefined8 *)(lVar17 + 0x1058);
            uStack_380 = (undefined5)*(undefined8 *)(lVar17 + 0x1048);
            uStack_37b = (undefined3)((ulonglong)*(undefined8 *)(lVar17 + 0x1048) >> 0x28);
            local_378 = (undefined4)*(undefined8 *)(lVar17 + 0x1050);
            uStack_374 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x1050) >> 0x20);
            dVar3 = *(double *)(lVar17 + 0x830);
            uVar27 = SUB84(dVar3,0);
            uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
            dVar4 = *(double *)(lVar17 + 0x858);
            if (dVar3 <= dVar4) {
              uVar27 = SUB84(dVar4,0);
              uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
            }
            fVar30 = *(float *)(lVar17 + 0x23c8) * local_3bc;
            local_368 = CONCAT44(fVar30 * fVar30,
                                 (float)(double)CONCAT44(uVar28,uVar27) /
                                 (DAT_14cb0cc18 * *(float *)(lVar17 + 0x23c8)));
          }
          uStack_3d0 = uVar12;
          if (*(char *)(local_28a8 + 0x60) == '\x01') {
            LOCK();
            piVar1 = (int *)(local_28a8 + 0x48);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            FUN_14493225c(local_26b8,&local_1b18);
            memcpy((void *)((longlong)iVar8 * 0x390 + *(longlong *)(lVar16 + 0x50)),local_26b8,0x390
                  );
          }
          else {
            iVar8 = 0;
          }
          lVar17 = local_28a0;
          lVar16 = *(longlong *)(param_1 + 0xb40);
          if (*(longlong *)(param_1 + 0xb40) == 0) {
            lVar16 = local_28b8;
          }
          *(int *)(lVar16 + local_28a0) = iVar8;
          FUN_14009331a(&local_2848);
          lVar16 = local_2890 + 0x20;
          lVar17 = lVar17 + 4;
        } while (lVar16 != 0xc0);
      }
      if ((*(byte *)(param_1 + 0x990) & 0x20) == 0) {
        if (*(int *)(param_1 + 0x99c) != -1) {
LAB_143072a2b:
          uVar18 = 0;
          iVar8 = 1;
          goto LAB_143072a56;
        }
        lVar17 = *(longlong *)(param_1 + 0xb50);
        iVar8 = 1;
      }
      else {
        if (*(int *)(param_1 + 0x99c) != -1) goto LAB_143072a2b;
        lVar17 = *(longlong *)(param_1 + 0xb50);
        iVar8 = (uint)(lVar17 == 0) * 5 + 1;
      }
      uVar18 = (uint)(lVar17 == 0);
LAB_143072a56:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5b530) && (FUN_144b3d300(&DAT_14ca5b530), DAT_14ca5b530 == -1))
      {
        local_1b18 = "ShadowDepth";
        uStack_1b10 = CONCAT35(uStack_1b10._5_3_,0xb);
        uVar9 = FUN_14001a6c0(&local_1b18,1);
        DAT_14ca5b528 = (ulonglong)uVar9;
        _Init_thread_footer(&DAT_14ca5b530);
      }
      local_28a0 = param_1 + 0xc60;
      local_2890 = param_1 + 0xc50;
      iVar14 = *(int *)(param_1 + 0xc4c);
      local_2858 = (void *)0x0;
      local_2850 = *(int *)(param_1 + 0xc40);
      _Size = (size_t)local_2850;
      _Src = *(void **)(param_1 + 0xc38);
      if (_Size == 0) {
        local_284c = 0;
      }
      else {
        FUN_14477be48(&local_2858,local_2850,0);
        memcpy(local_2858,_Src,_Size);
      }
      lVar17 = local_2888;
      iVar5 = *(int *)(param_1 + 0xc48);
      local_2910 = local_26b8;
      local_26b8[0] = (longlong *)0x0;
      local_2868 = local_28b8;
      if (*(longlong *)(param_1 + 0xb40) != 0) {
        local_2868 = *(longlong *)(param_1 + 0xb40);
      }
      local_2918 = &local_2868;
      local_2860 = *(undefined4 *)(param_1 + 0xb48);
      local_28f8 = CONCAT44(local_28f8._4_4_,uVar18);
      local_2908 = (undefined8 *)((ulonglong)local_2908._4_4_ << 0x20);
      local_2900 = CONCAT71(local_2900._1_7_,1);
      FUN_14008c8c8(&local_1b18,DAT_14ca5b528,*(undefined2 *)(local_2888 + 0x8a8),local_28a8);
      lVar16 = local_28a0;
      local_28c8 = 0;
      uStack_28c0 = 0;
      local_28d0 = local_2890;
      local_28e0 = &local_2858;
      local_28f8 = 0;
      local_2908 = local_2880;
      local_2910 = (longlong **)((ulonglong)local_2910 & 0xffffffff00000000);
      local_2918 = (longlong *)CONCAT71(local_2918._1_7_,0x3a);
      local_2900 = param_1 + 0xbf8;
      local_28f0 = iVar8 * iVar5;
      local_28e8 = param_1 + 0xc28;
      local_28d8 = iVar14 * iVar8;
      FUN_142de47ea(local_28a0,*(undefined8 *)(lVar17 + 8),*(undefined8 *)(param_1 + 0x10),
                    &local_1b18);
      FUN_1446f93f0(&local_1b18);
      if (local_26b8[0] != (longlong *)0x0) {
        (**(code **)(*local_26b8[0] + 0x38))();
      }
      lVar17 = local_2888;
      pcVar2 = (char *)(local_2888 + 0x4e8);
      LOCK();
      bVar26 = *(char *)(local_2888 + 0x4e8) == '\0';
      if (bVar26) {
        *(char *)(local_2888 + 0x4e8) = '\x01';
      }
      UNLOCK();
      if (!bVar26) {
        FUN_1447d2058();
      }
      iVar8 = *(int *)(lVar17 + 0x4f8);
      *(uint *)(lVar17 + 0x4f8) = iVar8 + 1U;
      if (*(uint *)(lVar17 + 0x4fc) < iVar8 + 1U) {
        FUN_144ab95e6((longlong *)(lVar17 + 0x4f0),iVar8);
      }
      lVar17 = *(longlong *)(lVar17 + 0x4f0);
      *(longlong *)(lVar17 + (longlong)iVar8 * 8) = lVar16;
      uVar13 = (undefined7)((ulonglong)lVar17 >> 8);
      uVar12 = CONCAT71(uVar13,1);
      LOCK();
      cVar7 = *pcVar2;
      if (cVar7 == '\x01') {
        *pcVar2 = '\0';
      }
      else {
        uVar12 = CONCAT71(uVar13,cVar7);
      }
      UNLOCK();
      if (cVar7 != '\x01') {
        uVar12 = FUN_14008cdb0(pcVar2);
      }
      if ((local_80 ^ (ulonglong)auStack_2938) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar12;
    }
    *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
    LOCK();
    uVar9 = *puVar10;
    *puVar10 = *puVar10 + uVar18 + 1;
    UNLOCK();
    if ((uVar9 ^ uVar18) != 0xffffffff) goto LAB_14306f191;
    puVar10 = (uint *)*puVar19;
    *puVar10 = 0xffffffff;
    *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
    puVar10[0x12] = 0;
    *puVar19 = puVar10;
    uVar24 = (longlong)puVar10 + 0x5f;
    uVar18 = 0;
  } while( true );
}



// FUNCTION 143072d94 FUN_143072d94 body=1648 status=ok
// SIG undefined FUN_143072d94(void)

void FUN_143072d94(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  uint uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  longlong local_168;
  undefined4 local_160;
  uint local_15c;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  uint *local_130;
  undefined1 local_128 [4];
  int local_124;
  int local_11c;
  undefined **local_118;
  undefined4 local_110;
  undefined2 local_108;
  longlong local_100;
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar1 = *(int *)(param_2 + 0x8a4);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca5b540) && (FUN_144b3d300(&DAT_14ca5b540), DAT_14ca5b540 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Shadow.EnableModulatedSelfShadow",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14ca5b538 = 0;
    }
    else {
      DAT_14ca5b538 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14ca5b540);
  }
  if ((((*(uint *)(param_1 + 0x990) & 0x1000) == 0 && iVar1 < 3) &&
      (*(int *)(DAT_14ca5b538 + 4) == 0)) &&
     (lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28), lVar13 != 0)) {
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(lVar13 + 0x1d3)) &
             0xffffffffffffff40;
    uVar9 = (undefined4)CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 >> 6);
  }
  else {
    uVar9 = 0;
  }
  if (((*(uint *)(param_1 + 0x990) & 0x1800) != 0) || ((byte)uVar9 != 0)) {
    iVar1 = *(int *)(param_2 + 0x3f0);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    local_168 = param_1 + 0xff0;
    *(undefined4 *)(param_1 + 0x1038) = 0;
    if (*(int *)(param_1 + 0x103c) != iVar1) {
      FUN_147313636();
    }
    if (0 < *(int *)(param_2 + 0x3f0)) {
      local_15c = (uint)(byte)((byte)uVar9 ^ 1);
      lVar11 = 0;
      lVar13 = local_168;
      local_160 = uVar9;
      local_148 = param_2;
      local_140 = param_3;
      do {
        if ((((*(byte *)(*(longlong *)(param_2 + 1000) + 0x125b0 + lVar11 * 0x13c10) & 2) == 0) &&
            (lVar14 = *(longlong *)(param_2 + 1000) + lVar11 * 0x13c10,
            *(char *)(lVar14 + 0x30c8) == '\0')) &&
           (((*(char *)(lVar14 + 0x23f2) == '\0' && (*(char *)(lVar14 + 0x23f5) != '\x01')) ||
            (*(int *)(lVar14 + 0x1dd0) != 2)))) {
          uVar3 = FUN_14001cc68(0x210,0x10);
          FUN_14008c534(uVar3,lVar14,param_3,1);
          iVar1 = *(int *)(param_1 + 0x1038);
          *(uint *)(param_1 + 0x1038) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x103c) < iVar1 + 1U) {
            FUN_147313718(local_168,iVar1);
          }
          lVar13 = *(longlong *)(param_1 + 0x1030);
          if (*(longlong *)(param_1 + 0x1030) == 0) {
            lVar13 = local_168;
          }
          *(undefined8 *)(lVar13 + (longlong)iVar1 * 8) = uVar3;
          lVar13 = *(longlong *)(param_1 + 0x1030);
          if (*(longlong *)(param_1 + 0x1030) == 0) {
            lVar13 = local_168;
          }
          local_e8 = *(longlong *)(lVar13 + (longlong)(*(int *)(param_1 + 0x1038) + -1) * 8) + 0x1d8
          ;
          local_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          local_80 = 0;
          uStack_78 = 0;
          uStack_74 = 0;
          cVar8 = (char)local_160;
          puVar6 = &DAT_14c9c9ac0;
          if (cVar8 != '\0') {
            puVar6 = &DAT_14ca5bb40;
          }
          local_d0 = *(undefined8 *)(puVar6 + 0x10);
          local_100 = *(longlong *)(param_2 + 8);
          local_f8 = *(int *)(local_100 + 8);
          local_110 = (&DAT_14ca11f20)[(ulonglong)(2 < local_f8) * 0x3a];
          local_108 = 0;
          local_e0 = 0x3a;
          local_118 = &PTR_FUN_14a204b90;
          local_98 = 0;
          local_94 = 0x1000000000002;
          local_8c = 0;
          local_d8 = DAT_14c9c4540;
          local_c8 = 0x11;
          local_a4 = 0;
          local_b4 = 0;
          uStack_ac = 0;
          local_c4 = uStack_84;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          local_a0 = local_15c;
          uVar2 = *(uint *)(param_1 + 0x990);
          uVar10 = (ulonglong)(uVar2 >> 7 & 0x10);
          lVar13 = (longlong)*(int *)(param_1 + 0xbc0 + uVar10);
          local_138 = lVar11;
          local_f0 = lVar14;
          if (0 < lVar13) {
            lVar11 = lVar14 + 0x3118;
            lVar15 = 0;
            local_158 = lVar11;
            local_150 = lVar13;
            do {
              lVar16 = *(longlong *)(*(longlong *)(param_1 + uVar10 + 3000) + lVar15 * 8);
              uVar2 = *(uint *)(lVar16 + 0x158);
              lVar4 = (longlong)(int)uVar2;
              lVar12 = *(longlong *)(lVar14 + 0x3128);
              if (*(longlong *)(lVar14 + 0x3128) == 0) {
                lVar12 = lVar11;
              }
              uVar7 = uVar2 + 0x1f;
              if (-1 < lVar4) {
                uVar7 = uVar2;
              }
              if ((*(uint *)(lVar12 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)
              {
                uVar2 = *(uint *)(*(longlong *)(lVar14 + 0x31d8) + 0x10 + lVar4 * 0x18);
                if (((~uVar2 & 0x81) == 0) && (iVar1 = *(int *)(lVar16 + 0x48), 0 < iVar1)) {
                  local_130 = (uint *)(*(longlong *)(lVar14 + 0x31d8) + lVar4 * 0x18 + 0x10);
                  lVar11 = 0;
                  lVar13 = 0;
                  do {
                    lVar12 = *(longlong *)(lVar16 + 0x40);
                    uVar2 = *(uint *)(lVar12 + 0xf8 + lVar11);
                    lVar4 = *(longlong *)(lVar14 + 0x31f8);
                    if (*(longlong *)(lVar14 + 0x31f8) == 0) {
                      lVar4 = lVar14 + 0x31e8;
                    }
                    uVar7 = uVar2 + 0x1f;
                    if (-1 < (int)uVar2) {
                      uVar7 = uVar2;
                    }
                    if ((*(uint *)(lVar4 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar2 & 0x1f) & 1)
                        != 0) {
                      local_178 = 0xffffffff;
                      FUN_1447e28f0(&local_118,lVar12 + lVar11,0xffffffff,
                                    *(undefined8 *)(*(longlong *)(lVar12 + 0xf0 + lVar11) + 8));
                      iVar1 = *(int *)(lVar16 + 0x48);
                    }
                    lVar13 = lVar13 + 1;
                    lVar11 = lVar11 + 0x100;
                  } while (lVar13 < iVar1);
                  uVar2 = *local_130;
                  lVar13 = local_150;
                  lVar11 = local_158;
                }
                if ((~uVar2 & 0x82) == 0) {
                  FUN_1472db0a0(lVar14,local_128,*(undefined4 *)(lVar16 + 0x158));
                  lVar13 = local_150;
                  lVar11 = local_158;
                  if (local_124 < local_11c) {
                    lVar12 = (longlong)local_11c - (longlong)local_124;
                    lVar16 = (longlong)local_124 * 0x18 + 8;
                    do {
                      local_178 = 0xffffffff;
                      FUN_1447e28f0(&local_118,
                                    *(undefined8 *)(*(longlong *)(lVar14 + 0x3d10) + -8 + lVar16),
                                    0xffffffffffffffff,
                                    *(undefined8 *)(*(longlong *)(lVar14 + 0x3d10) + lVar16));
                      lVar16 = lVar16 + 0x18;
                      lVar12 = lVar12 + -1;
                      lVar13 = local_150;
                      lVar11 = local_158;
                    } while (lVar12 != 0);
                  }
                }
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != lVar13);
            uVar2 = *(uint *)(param_1 + 0x990);
            cVar8 = (char)local_160;
            param_3 = local_140;
            param_2 = local_148;
          }
          lVar13 = local_168;
          lVar11 = local_138;
          if (((uVar2 & 0x1800) == 0x1000 && cVar8 == '\0') && (0 < *(int *)(param_1 + 0xc30))) {
            lVar14 = 0;
            do {
              lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xc28) + lVar14 * 8);
              local_178 = 0xffffffff;
              FUN_1447e28f0(&local_118,lVar13,0xffffffff,
                            *(undefined8 *)(*(longlong *)(lVar13 + 0xf0) + 8));
              lVar14 = lVar14 + 1;
              lVar13 = local_168;
              lVar11 = local_138;
            } while (lVar14 < *(int *)(param_1 + 0xc30));
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x1038);
          *(uint *)(param_1 + 0x1038) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x103c) < iVar1 + 1U) {
            FUN_147313718(lVar13,iVar1);
            lVar13 = local_168;
          }
          lVar14 = *(longlong *)(param_1 + 0x1030);
          if (*(longlong *)(param_1 + 0x1030) == 0) {
            lVar14 = lVar13;
          }
          *(undefined8 *)(lVar14 + (longlong)iVar1 * 8) = 0;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_2 + 0x3f0));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143073406 FUN_143073406 body=886 status=ok
// SIG undefined FUN_143073406(void)

ulonglong FUN_143073406(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                       undefined1 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  undefined1 local_a0;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*(int *)(param_1 + 0xbc0) < 1) && (*(int *)(param_1 + 0xbd0) < 1)) &&
      (*(int *)(param_1 + 0xbe0) < 1)) && (*(int *)(param_1 + 0xbf0) < 1)) {
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    goto LAB_14307373f;
  }
  lVar11 = *(longlong *)(param_1 + 0x10);
  *(longlong *)*param_4 = lVar11;
  if (((*(byte *)(param_1 + 0x991) & 8) != 0) && (DAT_14ca5be4c != 0)) {
    *(undefined4 *)(lVar11 + 0x1df0) = 1;
  }
  if (*(char *)(param_1 + 0x940) == '\x01') {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x1df0);
    *puVar1 = *puVar1 | 2;
  }
  if ((char)*(uint *)(param_1 + 0x990) < '\0') {
    lVar11 = *(longlong *)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 0x990) & 0x10) == 0 || *(int *)(param_1 + 0x944) < 0)
    goto LAB_1430734ce;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) = param_1 + 0x700;
    local_a8 = (undefined4 *)(param_1 + 0xc48);
    local_b0 = (longlong *)(param_1 + 0xbf8);
    local_b8 = param_3 + 0x98;
    local_a0 = param_5;
    bVar6 = FUN_14307377e(param_1,param_2,param_1 + 3000,param_4);
    lVar11 = *(longlong *)(param_1 + 0x10);
    uVar8 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(lVar11 + 0x2c) = uVar8;
    *(undefined4 *)(lVar11 + 0x30) = uVar4;
    *(undefined4 *)(lVar11 + 0x34) = uVar5;
    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x10);
LAB_1430734ce:
    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(param_1 + 0x58);
    uVar8 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(lVar11 + 0x2c) = uVar8;
    *(undefined4 *)(lVar11 + 0x30) = uVar4;
    *(undefined4 *)(lVar11 + 0x34) = uVar5;
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) = param_1 + 0x2b0;
    local_a8 = (undefined4 *)(param_1 + 0xc48);
    local_b0 = (longlong *)(param_1 + 0xbf8);
    local_b8 = param_3 + 0x98;
    local_a0 = param_5;
    bVar6 = FUN_14307377e(param_1,param_2,param_1 + 3000,param_4);
  }
  FUN_144b27220(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1df0) = 0;
  local_a8 = &local_6c;
  local_6c = 0;
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) = param_1 + 0x2b0;
  local_b0 = (longlong *)(param_1 + 0xc08);
  local_a0 = param_5;
  local_b8 = param_3 + 0x98;
  uVar8 = FUN_14307377e(param_1,param_2,param_1 + 0xbd8,param_4);
  FUN_144b27220(param_2);
  local_a8 = &local_70;
  local_70 = 0;
  local_b0 = (longlong *)(param_1 + 0xc18);
  local_a0 = param_5;
  local_b8 = param_3 + 0x98;
  local_78 = local_b0;
  bVar7 = FUN_14307377e(param_1,param_2,param_1 + 0xbe8,param_4);
  iVar9 = *(int *)(param_4 + 1);
  if (0 < iVar9) {
    lVar11 = param_2 + 0x18;
    lVar14 = 0;
    do {
      lVar12 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar12 = param_2 + 0x38;
      }
      iVar3 = *(int *)(lVar12 + lVar14 * 4);
      if (iVar3 != 0) {
        local_8c = 0;
        local_80 = lVar11;
        do {
          lVar11 = *(longlong *)(param_2 + 0x28);
          if (*(longlong *)(param_2 + 0x28) == 0) {
            lVar11 = local_80;
          }
          lVar11 = **(longlong **)(lVar11 + lVar14 * 8);
          local_58 = *(undefined8 *)(lVar11 + 0x10 + (longlong)local_8c * 0x18);
          puVar2 = (undefined4 *)(lVar11 + (longlong)local_8c * 0x18);
          local_68 = *puVar2;
          uStack_64 = puVar2[1];
          uStack_60 = puVar2[2];
          uStack_5c = puVar2[3];
          local_88 = (longlong)*(int *)(param_1 + 0xc20);
          uVar10 = *(int *)(param_1 + 0xc20) + 1;
          *(uint *)(param_1 + 0xc20) = uVar10;
          if (*(uint *)(param_1 + 0xc24) < uVar10) {
            FUN_14476b50e(local_78,local_88);
          }
          lVar11 = *local_78;
          *(undefined8 *)(lVar11 + 0x10 + local_88 * 0x18) = local_58;
          puVar2 = (undefined4 *)(lVar11 + local_88 * 0x18);
          *puVar2 = local_68;
          puVar2[1] = uStack_64;
          puVar2[2] = uStack_60;
          puVar2[3] = uStack_5c;
          local_8c = local_8c + 1;
        } while (iVar3 != local_8c);
        iVar9 = *(int *)(param_4 + 1);
        lVar11 = local_80;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar9);
  }
  uVar13 = (ulonglong)CONCAT31((int3)((uint)uVar8 >> 8),(byte)uVar8 & bVar6 & bVar7);
  FUN_144b27220(param_2);
LAB_14307373f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14307377e FUN_14307377e body=789 status=ok
// SIG undefined FUN_14307377e(void)

uint FUN_14307377e(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7,char param_8)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_618 [32];
  longlong local_5f8;
  uint local_5ec;
  longlong local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  uint local_5c0;
  undefined **local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined **local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined1 local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  int local_538;
  uint local_534;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_328;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  int local_298;
  uint local_294;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_618;
  iVar9 = 0;
  local_5b0 = 0;
  local_5b8 = &PTR_FUN_14aa71430;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_570 = 0;
  uStack_568 = 0;
  local_578 = &PTR_FUN_14a7fec80;
  local_560 = 1;
  local_558 = 0;
  uStack_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = DAT_14ca84e80 >> 2;
  local_534 = DAT_14ca84e7c >> 6;
  if (0xfffe < local_534) {
    local_534 = 0xffff;
  }
  local_440 = 0;
  local_438 = 0x200000000;
  local_328 = 0;
  local_318 = 0x400000000;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2d8 = &PTR_FUN_14a7fec80;
  local_5ec = 0x4a7fec01;
  local_2c0 = 1;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_1a0 = 0;
  local_198 = 0x200000000;
  local_88 = 0;
  local_78 = 0x400000000;
  local_68 = 0xffffffff;
  local_60 = 0;
  uStack_58 = 0;
  local_5f8 = *(longlong *)(param_1 + 0x10) + 0x13b98;
  local_5d8 = param_4;
  local_298 = local_538;
  local_294 = local_534;
  FUN_144b2707e(param_2,*(longlong *)(param_1 + 0x10),param_6);
  lVar3 = param_3[1];
  if ((int)lVar3 != 0) {
    local_5e8 = param_2 + 0x50;
    local_5e0 = param_2 + 0x90;
    local_5ec = (uint)CONCAT71((int7)((ulonglong)local_5e0 >> 8),1);
    do {
      lVar7 = *(longlong *)(*param_3 + (longlong)iVar9 * 8);
      plVar2 = *(longlong **)(lVar7 + 8);
      uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x31d8) + 0x10 +
                       (longlong)*(int *)(lVar7 + 0x158) * 0x18);
      if ((uVar4 >> 0x15 & 1) == 0) {
        (**(code **)(*plVar2 + 200))(plVar2);
        uVar4 = local_5c0;
      }
      if ((~uVar4 & 10) == 0) {
        if ((param_8 == '\0') || (*(char *)((longlong)plVar2 + 0x6e) < '\0' == (param_8 != '\x02')))
        {
          uVar1 = *(undefined4 *)(lVar7 + 0x138);
          *(longlong **)(param_2 + 0xf0) = plVar2;
          iVar5 = *(int *)(param_2 + 0x68);
          if (0 < iVar5) {
            lVar7 = 0;
            do {
              lVar6 = *(longlong *)(param_2 + 0x60);
              if (*(longlong *)(param_2 + 0x60) == 0) {
                lVar6 = local_5e8;
              }
              lVar6 = *(longlong *)(lVar6 + lVar7 * 8);
              if (lVar6 != 0) {
                *(undefined4 *)(lVar6 + 0x550) = uVar1;
                iVar5 = *(int *)(param_2 + 0x68);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar5);
          }
          if (0 < *(int *)(param_2 + 0xa0)) {
            lVar7 = 0;
            do {
              lVar6 = *(longlong *)(param_2 + 0x98);
              if (*(longlong *)(param_2 + 0x98) == 0) {
                lVar6 = local_5e0;
              }
              *(undefined2 *)(lVar6 + lVar7 * 2) = 0;
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(int *)(param_2 + 0xa0));
          }
          local_5f8 = param_2;
          (**(code **)(*plVar2 + 0xa0))(plVar2,local_5d8,param_5,1);
        }
        else {
          local_5ec = 0;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != (int)lVar3);
  }
  piVar8 = (int *)(param_2 + 0x38);
  if (*(int **)(param_2 + 0x40) != (int *)0x0) {
    piVar8 = *(int **)(param_2 + 0x40);
  }
  *param_7 = *param_7 + *piVar8;
  FUN_144734340(&local_5b8);
  if ((local_48 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return local_5ec & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143073a94 FUN_143073a94 body=148 status=ok
// SIG undefined FUN_143073a94(void)

undefined8 FUN_143073a94(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0xbc0);
  if ((longlong)uVar6 < 1) {
    uVar4 = 0;
  }
  else {
    lVar5 = param_2 + 0x3118;
    if (*(longlong *)(param_2 + 0x3128) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x3128);
    }
    uVar1 = *(uint *)(**(longlong **)(param_1 + 3000) + 0x158);
    uVar3 = uVar1 + 0x1f;
    if (-1 < (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar4 = CONCAT71((int7)(int3)((int)uVar3 >> 0xd),1);
    if ((*(uint *)(lVar5 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
      uVar2 = 1;
      do {
        uVar7 = uVar2;
        if (uVar6 == uVar7) break;
        uVar1 = *(uint *)((*(longlong **)(param_1 + 3000))[uVar7] + 0x158);
        uVar3 = uVar1 + 0x1f;
        if (-1 < (int)uVar1) {
          uVar3 = uVar1;
        }
        uVar2 = uVar7 + 1;
      } while ((*(uint *)(lVar5 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0);
      uVar4 = CONCAT71((int7)(uVar7 >> 8),uVar7 < uVar6);
    }
  }
  return uVar4;
}



// FUNCTION 143073b28 FUN_143073b28 body=493 status=ok
// SIG undefined FUN_143073b28(void)

void FUN_143073b28(longlong param_1,undefined4 *param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  void *_Src;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  
  if (param_1 < (longlong)DAT_14c760a2c * 0x100000) {
    *param_2 = 2;
    *param_3 = 1;
    *param_4 = *param_4 + 1;
    *(undefined8 *)(*(longlong *)*param_5 + 0x400) = *(undefined8 *)param_5[1];
    _Src = (void *)param_5[2];
    _Dst = *(void **)*param_5;
  }
  else {
    *param_2 = 1;
    *(undefined4 *)param_3 = 3;
    lVar5 = *(longlong *)*param_6;
    FUN_14002d1ac(lVar5 + 0x3a0);
    FUN_1447c6044(lVar5 + 0x3e0,0,*(undefined4 *)(lVar5 + 0x3f8),0);
    _Src = (void *)param_6[1];
    _Dst = *(void **)*param_6;
  }
  memcpy(_Dst,_Src,0x118);
  uVar2 = *(undefined4 *)((longlong)_Src + 0x124);
  uVar3 = *(undefined4 *)((longlong)_Src + 0x128);
  uVar4 = *(undefined4 *)((longlong)_Src + 300);
  *(undefined4 *)((longlong)_Dst + 0x120) = *(undefined4 *)((longlong)_Src + 0x120);
  *(undefined4 *)((longlong)_Dst + 0x124) = uVar2;
  *(undefined4 *)((longlong)_Dst + 0x128) = uVar3;
  *(undefined4 *)((longlong)_Dst + 300) = uVar4;
  *(undefined8 *)((longlong)_Dst + 0x130) = *(undefined8 *)((longlong)_Src + 0x130);
  if (_Dst != _Src) {
    pvVar6 = (void *)((longlong)_Src + 0x140);
    if (*(void **)((longlong)_Src + 0x200) != (void *)0x0) {
      pvVar6 = *(void **)((longlong)_Src + 0x200);
    }
    iVar1 = *(int *)((longlong)_Src + 0x210);
    *(int *)((longlong)_Dst + 0x210) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)_Dst + 0x214) == 0) {
      *(undefined4 *)((longlong)_Dst + 0x214) = 6;
    }
    else {
      FUN_144715b40((void *)((longlong)_Dst + 0x140),iVar1);
      if (iVar1 != 0) {
        pvVar7 = (void *)((longlong)_Dst + 0x140);
        if (*(void **)((longlong)_Dst + 0x200) != (void *)0x0) {
          pvVar7 = *(void **)((longlong)_Dst + 0x200);
        }
        memcpy(pvVar7,pvVar6,(longlong)iVar1 << 5);
      }
    }
    pvVar6 = (void *)((longlong)_Src + 0x220);
    if (*(void **)((longlong)_Src + 800) != (void *)0x0) {
      pvVar6 = *(void **)((longlong)_Src + 800);
    }
    iVar1 = *(int *)((longlong)_Src + 0x330);
    *(int *)((longlong)_Dst + 0x330) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)_Dst + 0x334) == 0) {
      *(undefined4 *)((longlong)_Dst + 0x334) = 8;
    }
    else {
      FUN_144715cb0((void *)((longlong)_Dst + 0x220),iVar1);
      if (iVar1 != 0) {
        pvVar7 = (void *)((longlong)_Dst + 0x220);
        if (*(void **)((longlong)_Dst + 800) != (void *)0x0) {
          pvVar7 = *(void **)((longlong)_Dst + 800);
        }
        memcpy(pvVar7,pvVar6,(longlong)iVar1 << 5);
      }
    }
  }
  puVar8 = (undefined8 *)((longlong)_Src + 0x340);
  puVar9 = (undefined8 *)((longlong)_Dst + 0x340);
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)((longlong)_Dst + 0x390) = *(undefined2 *)((longlong)_Src + 0x390);
  return;
}



// FUNCTION 143073d16 FUN_143073d16 body=19682 status=ok
// SIG undefined FUN_143073d16(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001430786e0) */
/* WARNING: Removing unreachable block (ram,0x0001430786ea) */

void FUN_143073d16(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint *param_5
                  ,uint *param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar10;
  double dVar11;
  double dVar12;
  byte bVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined8 uVar27;
  undefined8 uVar28;
  char cVar29;
  byte bVar30;
  undefined1 uVar31;
  char cVar32;
  char cVar33;
  undefined4 uVar34;
  int iVar35;
  DWORD DVar36;
  DWORD DVar37;
  longlong *plVar38;
  double *pdVar39;
  uint *puVar40;
  uint *puVar41;
  longlong *plVar42;
  double *pdVar43;
  int iVar44;
  undefined1 *_Dst;
  longlong lVar45;
  LARGE_INTEGER *pLVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  longlong lVar49;
  ulonglong uVar50;
  longlong *plVar51;
  ulonglong uVar52;
  undefined8 *puVar53;
  double *pdVar54;
  longlong lVar55;
  undefined8 *puVar56;
  byte *pbVar57;
  undefined1 *puVar58;
  undefined1 auVar59 [8];
  longlong lVar60;
  ulonglong in_R11;
  undefined8 *puVar61;
  uint uVar62;
  longlong lVar63;
  uint uVar64;
  uint uVar65;
  int iVar66;
  longlong lVar67;
  bool bVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 extraout_var [12];
  undefined1 auVar75 [16];
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  float fVar85;
  double dVar86;
  undefined1 auVar87 [16];
  double dVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auStack_2cd8 [32];
  LARGE_INTEGER *local_2cb8;
  uint **local_2cb0;
  undefined4 local_2ca8;
  undefined4 local_2ca0;
  undefined4 local_2c98;
  double *local_2c88;
  longlong local_2c80;
  undefined8 *local_2c78;
  uint local_2c6c;
  undefined1 local_2c68 [8];
  double dStack_2c60;
  ulonglong local_2c50;
  undefined1 local_2c48 [16];
  longlong local_2c38;
  longlong local_2c30;
  undefined1 local_2c28 [16];
  undefined1 local_2c18 [16];
  ulonglong local_2c08;
  ulonglong local_2c00;
  uint local_2bf8;
  int local_2bf4;
  float local_2bf0;
  undefined4 local_2bec;
  int *local_2be8;
  double local_2be0;
  double local_2bd8;
  ulonglong local_2bd0;
  undefined4 local_2bc8;
  uint local_2bc4;
  LARGE_INTEGER local_2bc0;
  ulonglong local_2bb8;
  longlong local_2bb0;
  undefined8 *local_2ba8;
  ulonglong local_2ba0;
  longlong *local_2b98;
  ulonglong local_2b90;
  longlong local_2b88;
  int local_2b7c;
  uint local_2b78;
  uint local_2b74;
  float local_2b70;
  float local_2b6c;
  float local_2b68;
  float local_2b64;
  float local_2b60;
  float local_2b5c;
  float local_2b58;
  float local_2b54;
  float local_2b50;
  float local_2b4c;
  float local_2b48;
  float local_2b44;
  float local_2b40;
  float local_2b3c;
  float local_2b38;
  float local_2b34;
  float local_2b30;
  float local_2b2c;
  float local_2b28;
  float local_2b24;
  float local_2b20;
  float local_2b1c;
  float local_2b18;
  float local_2b14;
  float local_2b10;
  float local_2b0c;
  float local_2b08;
  float local_2b04;
  float local_2b00;
  float local_2afc;
  float local_2af8;
  float local_2af4;
  float local_2af0;
  float local_2aec;
  double local_2ae8;
  undefined1 *local_2ae0;
  double *local_2ad8;
  longlong local_2ad0;
  ulonglong local_2ac8;
  longlong *local_2ac0;
  undefined1 local_2ab8 [16];
  undefined1 local_2aa8 [16];
  undefined1 local_2a98 [16];
  double local_2a88;
  double dStack_2a80;
  undefined8 *local_2a70;
  longlong local_2a68;
  undefined8 *local_2a60;
  undefined8 *local_2a58;
  ulonglong local_2a50;
  longlong local_2a48;
  ulonglong local_2a40;
  uint *local_2a38;
  longlong *local_2a30;
  undefined1 local_2a28 [8];
  longlong *local_2a20;
  undefined4 local_2a18;
  longlong local_2a10;
  LARGE_INTEGER local_2a08;
  undefined8 uStack_2a00;
  uint local_29f8;
  uint local_29f4;
  uint local_29f0;
  uint local_29ec;
  undefined8 local_29e8;
  undefined8 uStack_29e0;
  double local_28e8 [4];
  undefined1 local_28c8 [192];
  undefined1 *puStack_2808;
  undefined8 local_27f8;
  undefined1 local_27e8 [256];
  undefined1 *local_26e8;
  undefined8 local_26d8;
  double dStack_26d0;
  double local_26c8 [4];
  double local_26a8;
  double dStack_26a0;
  double local_2698;
  double dStack_2690;
  double local_2688;
  double dStack_2680;
  undefined2 local_2678;
  undefined6 uStack_2676;
  double dStack_2670;
  double local_2668;
  double dStack_2660;
  undefined8 local_2658;
  undefined8 uStack_2650;
  longlong local_2648;
  undefined8 local_2640;
  undefined8 uStack_2638;
  float local_2630;
  undefined2 local_262c;
  undefined8 local_2628;
  undefined8 uStack_2620;
  longlong local_2618;
  undefined8 local_2610;
  undefined8 uStack_2608;
  undefined8 uStack_2600;
  undefined1 auStack_25f8 [12];
  undefined4 local_25ec;
  undefined4 uStack_25e8;
  undefined8 uStack_25e4;
  double local_22d8;
  double local_22d0;
  double local_22c8;
  double local_22c0;
  double local_22b8;
  double local_22b0;
  double local_22a8;
  double local_22a0;
  double local_2298;
  double local_2290;
  double local_2288;
  double local_2280;
  double local_2278;
  double local_2270;
  double local_2268;
  double local_2260;
  LARGE_INTEGER *local_1a08;
  ulonglong local_19f8;
  undefined8 local_19e8;
  undefined1 local_19e0 [8];
  undefined1 *local_19d8;
  undefined8 local_19d0;
  undefined1 local_19c8 [5568];
  undefined1 *local_408;
  ulonglong local_3f8;
  byte local_3e8;
  undefined7 uStack_3e7;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined8 local_2e8 [16];
  ulonglong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  undefined8 local_248 [16];
  undefined8 local_1c8 [16];
  undefined8 local_148 [3];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  undefined8 uStack_48;
  double dVar6;
  double dVar9;
  
  uStack_48 = 0x143073d2c;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2cd8;
  plVar42 = *(longlong **)(param_3 + 0x28);
  plVar51 = (longlong *)((longlong)*(int *)(param_3 + 0x34) * 0x68 + *(longlong *)(param_1 + 0x4d8))
  ;
  local_2b88 = param_2;
  if ((*(int *)(DAT_14ca5b188 + 4) == 0) || (0.0 < *(float *)(plVar42 + 0x2b))) {
    local_408 = (undefined1 *)0x0;
    local_3f8 = 0x600000000;
    cVar29 = (**(code **)(*plVar42 + 0xa0))(plVar42,param_1 + 0x98,local_19c8);
    uVar64 = DAT_14cb0cc04;
    if (cVar29 != '\0') {
      puVar58 = local_408;
      if (local_408 == (undefined1 *)0x0) {
        puVar58 = local_19c8;
      }
      bVar30 = puVar58[0x390];
      local_2c6c = 0;
      if (0 < (int)*(uint *)(DAT_14ca5b270 + 4)) {
        local_2c6c = *(uint *)(DAT_14ca5b270 + 4);
      }
      iVar35 = *(int *)(param_1 + 0x8a4);
      local_2c30 = param_3;
      local_2ad0 = param_4;
      local_2ac0 = plVar51;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5b3e8) && (FUN_144b3d300(&DAT_14ca5b3e8), DAT_14ca5b3e8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar42 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxResolution",1);
        if (plVar42 == (longlong *)0x0) {
          DAT_14ca5b3e0 = 0;
        }
        else {
          DAT_14ca5b3e0 = (**(code **)(*plVar42 + 0x68))(plVar42);
        }
        _Init_thread_footer(&DAT_14ca5b3e8);
        param_3 = local_2c30;
      }
      uVar62 = *(uint *)(DAT_14ca5b3e0 + 4);
      uVar65 = uVar62;
      if (iVar35 < 3) {
        uVar22 = DAT_14ca84e38;
        if ((int)DAT_14ca84e38 < (int)DAT_14ca84e3c) {
          uVar22 = DAT_14ca84e3c;
        }
        uVar65 = (int)uVar22 / 2;
        if ((int)(uVar62 * 2) <= (int)uVar22) {
          uVar65 = uVar62;
        }
      }
      local_2bf8 = DAT_14ca84e3c;
      if ((int)uVar65 < (int)DAT_14ca84e3c) {
        local_2bf8 = uVar65;
      }
      if ((int)local_2bf8 < 2) {
        local_2bf8 = 1;
      }
      uVar62 = DAT_14ca84e38;
      if ((int)uVar65 < (int)DAT_14ca84e38) {
        uVar62 = uVar65;
      }
      if ((int)uVar62 < 2) {
        uVar62 = 1;
      }
      uVar65 = uVar62;
      if ((int)uVar64 < (int)uVar62) {
        uVar65 = uVar64;
      }
      if ((int)uVar64 < (int)local_2bf8) {
        local_2bf8 = uVar64;
      }
      iVar35 = *(int *)(DAT_14ca5b258 + 4);
      local_19d8 = (undefined1 *)0x0;
      local_19d0 = 0x200000000;
      iVar66 = *(int *)(param_1 + 0x3f0);
      if (0 < (longlong)iVar66) {
        uVar64 = bVar30 ^ 1;
        local_2bf4 = uVar64 * 8;
        local_2a40 = (ulonglong)(uVar64 << 2);
        local_2bc4 = uVar65 + uVar64 * -8;
        local_2bf8 = local_2bf8 + uVar64 * -8;
        lVar67 = 0;
        iVar44 = 0;
        if (0 < iVar35) {
          iVar44 = iVar35;
        }
        local_2bc0.QuadPart = param_3 + 0x34;
        fVar90 = (float)iVar44;
        local_2b98 = (longlong *)(param_1 + 1000);
        fVar93 = (float)(int)local_2c6c;
        local_2c38 = CONCAT44(local_2c38._4_4_,1.0 / (float)(iVar44 - local_2c6c));
        local_2c88 = (double *)CONCAT44(local_2c88._4_4_,(float)local_2bc4);
        fVar69 = (float)(uVar62 + uVar64 * -8);
        fVar71 = fVar93;
        if (fVar69 <= fVar93) {
          fVar71 = fVar69;
        }
        plVar42 = *(longlong **)(param_3 + 0x28);
        fVar91 = 0.0;
        fVar69 = 0.0;
        fVar85 = 0.0;
        local_2bd0 = 0;
        local_2b90 = 0;
        local_2c50 = CONCAT44(local_2c50._4_4_,fVar90);
        local_2c68._0_4_ = fVar71;
        do {
          lVar63 = *local_2b98;
          lVar55 = lVar63 + lVar67;
          local_2a08.s.HighPart = *(int *)(lVar55 + 0x3104) - *(int *)(lVar55 + 0x30fc);
          local_2a08.s.LowPart = *(int *)(lVar55 + 0x3100) - *(int *)(lVar55 + 0x30f8);
          fVar70 = (float)(**(code **)(*plVar42 + 0x70))(plVar42,lVar55 + 0x1180,&local_2a08);
          bVar30 = *(char *)(*(longlong *)(param_3 + 0x28) + 0x1e8) - 1;
          fVar92 = 1.0;
          if (bVar30 < 3) {
            fVar92 = *(float *)(*(longlong *)(&PTR_DAT_14a309f70)[bVar30] + 4) * fVar70;
          }
          fVar89 = 1.0;
          if ((fVar92 <= fVar90) && (fVar89 = 0.0, fVar93 < fVar92)) {
            fVar89 = *(float *)(DAT_14ca5b130 + 4);
            if ((int)local_2c6c < iVar35) {
              fVar90 = (float)local_2c38;
              fVar71 = powf((float)local_2c38,fVar89);
              fVar90 = powf((fVar92 - fVar93) * fVar90,fVar89);
              fVar89 = (fVar90 - fVar71) / (1.0 - fVar71);
              fVar90 = (float)local_2c50;
              fVar71 = (float)local_2c68._0_4_;
            }
            else {
              fVar89 = powf(fVar92 - fVar93,fVar89);
              fVar89 = 1.0 - fVar89;
            }
          }
          uVar52 = local_19d0;
          fVar89 = fVar89 * *(float *)(*(longlong *)(param_3 + 0x28) + 0x21c);
          lVar55 = (longlong)(int)local_19d0;
          uVar64 = (int)local_19d0 + 1;
          local_19d0 = CONCAT44(local_19d0._4_4_,uVar64);
          if (local_19d0._4_4_ < uVar64) {
            FUN_147313b3e(local_19e0,uVar52 & 0xffffffff);
          }
          if (fVar69 <= fVar70) {
            fVar69 = fVar70;
          }
          if (fVar85 <= fVar89) {
            fVar85 = fVar89;
          }
          puVar58 = local_19d8;
          if (local_19d8 == (undefined1 *)0x0) {
            puVar58 = local_19e0;
          }
          *(float *)(puVar58 + lVar55 * 4) = fVar89;
          plVar42 = *(longlong **)(param_3 + 0x28);
          fVar70 = *(float *)(plVar42 + 0x2b);
          fVar92 = (float)(~-(uint)(1.0 < fVar70) & (uint)fVar92 |
                          (uint)(fVar92 * fVar70) & -(uint)(1.0 < fVar70));
          if (local_2c88._0_4_ <= fVar92) {
            fVar92 = local_2c88._0_4_;
          }
          fVar70 = (float)(~-(uint)(1.0 < fVar70) & (uint)(fVar70 * fVar92) |
                          (uint)fVar92 & -(uint)(1.0 < fVar70));
          if (fVar70 <= fVar71) {
            fVar70 = fVar71;
          }
          if (fVar91 <= fVar70) {
            fVar91 = fVar70;
          }
          local_2bd0 = CONCAT71((int7)(local_2bd0 >> 8),
                                (byte)local_2bd0 | *(byte *)(lVar63 + 0x23f1 + lVar67));
          local_2b90 = CONCAT71((int7)(local_2b90 >> 8),
                                (byte)local_2b90 | *(byte *)(lVar63 + 0x23e8 + lVar67));
          lVar67 = lVar67 + 0x13c10;
        } while ((longlong)iVar66 * 0x13c10 - lVar67 != 0);
        if (0.00390625 < fVar85) {
          local_2a68 = (longlong)(int)local_3f8;
          if (0 < local_2a68) {
            uVar64 = (uint)(longlong)(fVar91 + 1.0);
            if (uVar64 < 2) {
              uVar64 = 1;
            }
            uVar52 = (ulonglong)(uVar64 - 1) * 2 + 1;
            lVar67 = 0x3f;
            if (uVar52 != 0) {
              for (; uVar52 >> lVar67 == 0; lVar67 = lVar67 + -1) {
              }
            }
            local_2b74 = (1 << (0x3e - ((byte)lVar67 ^ 0x3f) & 0x1f)) - local_2bf4;
            if ((int)local_2b74 < 2) {
              local_2b74 = 1;
            }
            local_2b78 = local_2b74;
            if (local_2c88._0_4_ <= fVar91) {
              local_2b78 = local_2bc4;
            }
            if ((float)local_2bf8 <= fVar91) {
              local_2b74 = local_2bf8;
            }
            local_2b7c = (int)fVar91;
            local_2bd0 = local_2bd0 & 0xffffffffffffff01;
            lVar67 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar2 = (undefined8 *)(lVar67 + 0xea8);
            local_2ae8 = (double)fVar91;
            local_2ad8 = local_28e8;
            local_2ae0 = local_27e8;
            local_2a58 = local_248;
            local_2be8 = (int *)(lVar67 + 0xc60);
            local_2a60 = local_148;
            local_2bb0 = 0x20;
            lVar67 = 0;
            local_2c48 = ZEXT416((uint)fVar69);
            do {
              auVar59 = (undefined1  [8])local_408;
              if (local_408 == (undefined1 *)0x0) {
                auVar59 = (undefined1  [8])local_19c8;
              }
              local_2c88 = (double *)(lVar67 * 0x3a0);
              uVar50 = (ulonglong)local_2b74;
              uVar52 = (ulonglong)local_2b78;
              local_2a48 = lVar67;
              if (*(char *)((longlong)auVar59 + (longlong)local_2c88 + 0x390) == '\x01') {
                iVar35 = *(int *)(param_1 + 0x8a4);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca5b3e8) &&
                   (FUN_144b3d300(&DAT_14ca5b3e8), DAT_14ca5b3e8 == -1)) {
                  if (DAT_14c8407a8 == (longlong *)0x0) {
                    FUN_1414b00ea();
                  }
                  plVar42 = (longlong *)
                            (**(code **)(*DAT_14c8407a8 + 200))
                                      (DAT_14c8407a8,L"r.Shadow.MaxResolution",1);
                  if (plVar42 == (longlong *)0x0) {
                    DAT_14ca5b3e0 = 0;
                  }
                  else {
                    DAT_14ca5b3e0 = (**(code **)(*plVar42 + 0x68))(plVar42);
                  }
                  _Init_thread_footer(&DAT_14ca5b3e8);
                  param_3 = local_2c30;
                  fVar69 = (float)local_2c48._0_4_;
                }
                uVar64 = *(uint *)(DAT_14ca5b3e0 + 4);
                uVar62 = uVar64;
                if (iVar35 < 3) {
                  uVar65 = DAT_14ca84e3c;
                  if ((int)DAT_14ca84e3c <= (int)DAT_14ca84e38) {
                    uVar65 = DAT_14ca84e38;
                  }
                  uVar62 = (int)uVar65 / 2;
                  if ((int)(uVar64 * 2) <= (int)uVar65) {
                    uVar62 = uVar64;
                  }
                }
                uVar64 = DAT_14ca84e38;
                if ((int)uVar62 < (int)DAT_14ca84e38) {
                  uVar64 = uVar62;
                }
                if ((int)uVar64 < 2) {
                  uVar64 = 0;
                }
                local_2a08.s.HighPart = uVar64 >> 2;
                local_2a08.s.LowPart = uVar64 >> 1;
                uStack_2a00 = CONCAT44(uVar64 >> 4,uVar64 >> 3);
                local_29f8 = *(undefined4 *)(DAT_14ca5b270 + 4);
                uVar52 = 0;
                do {
                  if (*(int *)((longlong)&local_2a08 + uVar52 * 4) <= local_2b7c)
                  goto LAB_1430744aa;
                  uVar52 = uVar52 + 1;
                } while (uVar52 != 5);
                uVar52 = 0;
LAB_1430744aa:
                iVar35 = *(int *)(param_1 + 0x8a4);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca5b3e8) &&
                   (FUN_144b3d300(&DAT_14ca5b3e8), DAT_14ca5b3e8 == -1)) {
                  if (DAT_14c8407a8 == (longlong *)0x0) {
                    FUN_1414b00ea();
                  }
                  plVar42 = (longlong *)
                            (**(code **)(*DAT_14c8407a8 + 200))
                                      (DAT_14c8407a8,L"r.Shadow.MaxResolution",1);
                  if (plVar42 == (longlong *)0x0) {
                    DAT_14ca5b3e0 = 0;
                  }
                  else {
                    DAT_14ca5b3e0 = (**(code **)(*plVar42 + 0x68))(plVar42);
                  }
                  _Init_thread_footer(&DAT_14ca5b3e8);
                  param_3 = local_2c30;
                  fVar69 = (float)local_2c48._0_4_;
                }
                uVar64 = *(uint *)(DAT_14ca5b3e0 + 4);
                uVar62 = uVar64;
                if (iVar35 < 3) {
                  uVar65 = DAT_14ca84e3c;
                  if ((int)DAT_14ca84e3c <= (int)DAT_14ca84e38) {
                    uVar65 = DAT_14ca84e38;
                  }
                  uVar62 = (int)uVar65 / 2;
                  if ((int)(uVar64 * 2) <= (int)uVar65) {
                    uVar62 = uVar64;
                  }
                }
                uVar64 = DAT_14ca84e38;
                if ((int)uVar62 < (int)DAT_14ca84e38) {
                  uVar64 = uVar62;
                }
                if ((int)uVar64 < 2) {
                  uVar64 = 0;
                }
                local_2a08.s.LowPart = (uVar64 >> 1) + (uint)(uVar64 >> 1 == 0);
                local_2a08.s.HighPart =
                     (local_2a08.s.LowPart >> 1) + (uint)(local_2a08.s.LowPart >> 1 == 0);
                uStack_2a00 = CONCAT44((local_2a08.s.LowPart >> 3) +
                                       (uint)(local_2a08.s.LowPart >> 3 == 0),
                                       (local_2a08.s.LowPart >> 2) +
                                       (uint)(local_2a08.s.LowPart >> 2 == 0));
                local_29f8 = *(uint *)(DAT_14ca5b270 + 4);
                uVar50 = (ulonglong)*(uint *)((longlong)&local_2a08 + (uVar52 & 0xffffffff) * 4);
                uVar52 = uVar50;
              }
              local_2c88 = (double *)((longlong)auVar59 + (longlong)local_2c88);
              if (((*(byte *)(*(longlong *)(param_3 + 0x28) + 0x1d3) & 0x20) == 0) ||
                 (*(char *)(param_1 + 0x7b4) != '\x01')) {
                local_2c6c = 0;
              }
              else {
                local_2c6c = (uint)CONCAT71((int7)((ulonglong)local_2c88 >> 8),
                                            *(undefined1 *)((longlong)local_2c88 + 0x391)) ^ 1;
              }
              local_19e8 = 0x300000003;
              local_2c38 = 1;
              if (((local_2b90 & 1) == 0) && (*(char *)((longlong)local_2c88 + 0x391) == '\0')) {
                cVar29 = *(char *)(*(longlong *)(param_3 + 0x28) + 0x1e8);
                local_2c68 = auVar59;
                puVar41 = param_6;
                uVar64 = DAT_14c760a28;
                if ((cVar29 != '\x02') &&
                   ((puVar41 = param_5, uVar64 = DAT_14c760a24, cVar29 != '\x03' &&
                    (cVar29 != '\x01')))) {
                  puVar41 = (uint *)0x0;
                  uVar64 = 0;
                }
                uVar62 = (int)uVar50 + local_2bf4;
                uVar50 = (ulonglong)uVar62;
                uVar65 = (int)uVar52 + local_2bf4;
                uVar52 = (ulonglong)uVar65;
                lVar67 = *(longlong *)(param_1 + 8);
                local_19e8._4_4_ = 3;
                if (DAT_14c760a20 == 0) {
LAB_143078545:
                  local_19e8 = 0x300000003;
                  FUN_1406892b0(lVar67 + 0x4bb8,*(uint *)local_2bc0);
                  local_2c38 = 1;
LAB_143075123:
                  auVar59 = local_2c68;
                }
                else {
                  fVar90 = (float)*(double *)(param_1 + 0x120);
                  if (*(char *)(local_2c88 + 0x72) != '\0') {
                    uVar47 = (ulonglong)
                             *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar67 + 8) * 2);
                    lVar55 = uVar47 * 0x3c;
                    if ((((((int)(&DAT_14ca814b8)[uVar47 * 0xf] < 3) || (uVar47 == 0x30)) ||
                         (*(longlong *)(&DAT_14ca814b0 + lVar55) == DAT_14ca838f8)) ||
                        (((*(byte *)(&DAT_14ca814d8 + uVar47 * 0xf) & 0x80) != 0 &&
                         ((*(byte *)((longlong)&DAT_14ca814d0 + lVar55 + 3) & 2) != 0)))) &&
                       (((*(byte *)((longlong)&DAT_14ca814d0 + lVar55 + 7) & 4) == 0 ||
                        (DAT_14ca84f58 != '\x01')))) goto LAB_143078545;
                  }
                  plVar42 = (longlong *)(lVar67 + 0x4bb8);
                  local_2c50 = uVar50;
                  if (*(int *)(lVar67 + 0x4bc0) != *(int *)(lVar67 + 0x4bec)) {
                    lVar55 = lVar67 + 0x4bf0;
                    if (*(longlong *)(lVar67 + 0x4bf8) != 0) {
                      lVar55 = *(longlong *)(lVar67 + 0x4bf8);
                    }
                    iVar35 = *(int *)(lVar55 + (ulonglong)
                                               (*(int *)(lVar67 + 0x4c00) - 1U & *(uint *)local_2bc0
                                               ) * 4);
                    if (iVar35 != -1) {
LAB_143074701:
                      lVar67 = *plVar42 + (longlong)iVar35 * 0x20;
                      if (*(uint *)(*plVar42 + (longlong)iVar35 * 0x20) != *(uint *)local_2bc0)
                      goto code_r0x000143074716;
                      if ((lVar67 != 0) && ((undefined8 *)(lVar67 + 8) != (undefined8 *)0x0)) {
                        pdVar39 = *(double **)(lVar67 + 8);
                        local_2c00 = uVar52;
                        if ((*local_2c88 != *pdVar39) ||
                           ((((NAN(*local_2c88) || NAN(*pdVar39) || (local_2c88[1] != pdVar39[1]))
                             || (NAN(local_2c88[1]) || NAN(pdVar39[1]))) ||
                            ((local_2c88[2] != pdVar39[2] || (NAN(local_2c88[2]) || NAN(pdVar39[2]))
                             ))))) goto LAB_1430755cc;
                        puVar58 = (undefined1 *)((longlong)auVar59 + local_2bb0);
                        lVar67 = 0;
                        pdVar54 = pdVar39;
                        do {
                          pdVar54 = pdVar54 + 4;
                          lVar55 = 0;
                          do {
                            if ((*(double *)(puVar58 + lVar55 * 8) != pdVar54[lVar55]) ||
                               (NAN(*(double *)(puVar58 + lVar55 * 8)) || NAN(pdVar54[lVar55])))
                            goto LAB_1430755cc;
                            lVar55 = lVar55 + 1;
                          } while (lVar55 != 4);
                          lVar67 = lVar67 + 1;
                          puVar58 = puVar58 + 0x20;
                        } while (lVar67 != 4);
                        if ((((((local_2c88[0x14] != pdVar39[0x14]) ||
                               (NAN(local_2c88[0x14]) || NAN(pdVar39[0x14]))) ||
                              (local_2c88[0x15] != pdVar39[0x15])) ||
                             (((NAN(local_2c88[0x15]) || NAN(pdVar39[0x15]) ||
                               (local_2c88[0x16] != pdVar39[0x16])) ||
                              ((NAN(local_2c88[0x16]) || NAN(pdVar39[0x16]) ||
                               ((local_2c88[0x17] != pdVar39[0x17] ||
                                (NAN(local_2c88[0x17]) || NAN(pdVar39[0x17]))))))))) ||
                            (((local_2c88[0x18] != pdVar39[0x18] ||
                              (((NAN(local_2c88[0x18]) || NAN(pdVar39[0x18]) ||
                                (local_2c88[0x19] != pdVar39[0x19])) ||
                               (NAN(local_2c88[0x19]) || NAN(pdVar39[0x19]))))) ||
                             (((local_2c88[0x1a] != pdVar39[0x1a] ||
                               (NAN(local_2c88[0x1a]) || NAN(pdVar39[0x1a]))) ||
                              (((((local_2c88[0x1b] != pdVar39[0x1b] ||
                                  ((NAN(local_2c88[0x1b]) || NAN(pdVar39[0x1b]) ||
                                   (local_2c88[0x1c] != pdVar39[0x1c])))) ||
                                 (NAN(local_2c88[0x1c]) || NAN(pdVar39[0x1c]))) ||
                                (((((local_2c88[0x1e] != pdVar39[0x1e] ||
                                    (NAN(local_2c88[0x1e]) || NAN(pdVar39[0x1e]))) ||
                                   (local_2c88[0x1f] != pdVar39[0x1f])) ||
                                  ((NAN(local_2c88[0x1f]) || NAN(pdVar39[0x1f]) ||
                                   (local_2c88[0x20] != pdVar39[0x20])))) ||
                                 ((NAN(local_2c88[0x20]) || NAN(pdVar39[0x20]) ||
                                  ((local_2c88[0x21] != pdVar39[0x21] ||
                                   (NAN(local_2c88[0x21]) || NAN(pdVar39[0x21]))))))))) ||
                               (*(float *)(local_2c88 + 0x22) != *(float *)(pdVar39 + 0x22)))))))))
                           || ((((NAN(*(float *)(local_2c88 + 0x22)) ||
                                  NAN(*(float *)(pdVar39 + 0x22)) ||
                                 (*(float *)((longlong)local_2c88 + 0x114) !=
                                  *(float *)((longlong)pdVar39 + 0x114))) ||
                                (NAN(*(float *)((longlong)local_2c88 + 0x114)) ||
                                 NAN(*(float *)((longlong)pdVar39 + 0x114)))) ||
                               (((*(char *)(local_2c88 + 0x72) != *(char *)(pdVar39 + 0x72) ||
                                 (*(char *)((longlong)pdVar39 + 0x391) != '\0')) ||
                                (*(byte *)((longlong)pdVar39 + 0x3dd) !=
                                 (byte)((byte)local_2c6c ^ 1))))))) {
LAB_1430755cc:
                          local_19e8 = CONCAT44(local_19e8._4_4_,3);
                          FUN_14002d1ac(pdVar39 + 0x74);
                          FUN_1447c6044(pdVar39 + 0x7c,0,*(undefined4 *)(pdVar39 + 0x7f),0);
LAB_1430755e9:
                          local_2c38 = 1;
                        }
                        else {
                          pdVar54 = pdVar39 + 0x74;
                          plVar42 = (longlong *)pdVar39[0x7a];
                          if (plVar42 != (longlong *)0x0) {
LAB_14307841f:
                            lVar67 = (**(code **)(*plVar42 + 0x10))();
                            param_3 = local_2c30;
                            fVar69 = (float)local_2c48._0_4_;
                            if (((int)local_2c00 != (int)*(undefined8 *)(lVar67 + 0x2c)) ||
                               ((float)local_2c50 !=
                                (float)(int)((ulonglong)*(undefined8 *)(lVar67 + 0x2c) >> 0x20)))
                            goto LAB_143074f69;
                            local_19e8 = local_19e8 & 0xffffffff00000000;
                            goto LAB_1430755e9;
                          }
                          if (0 < *(int *)(pdVar39 + 0x79)) {
                            pdVar43 = (double *)pdVar39[0x78];
                            if ((double *)pdVar39[0x78] == (double *)0x0) {
                              pdVar43 = pdVar54;
                            }
                            plVar42 = (longlong *)*pdVar43;
                            goto LAB_14307841f;
                          }
LAB_143074f69:
                          if ((longlong)DAT_14c760a2c * 0x100000 <= local_2ad0) {
                            goto LAB_1430755cc;
                          }
                          local_19e8 = 1;
                          *puVar41 = *puVar41 + 1;
                          plVar42 = (longlong *)pdVar39[0x7a];
                          local_2c38 = 2;
                          if ((plVar42 != (longlong *)0x0) || (0 < *(int *)(pdVar39 + 0x79))) {
                            if (plVar42 == (longlong *)0x0) {
                              pdVar43 = (double *)pdVar39[0x78];
                              if ((double *)pdVar39[0x78] == (double *)0x0) {
                                pdVar43 = pdVar54;
                              }
                              plVar42 = (longlong *)*pdVar43;
                            }
                            lVar67 = (**(code **)(*plVar42 + 0x10))();
                            if (*(int *)(lVar67 + 0x2c) <= (int)local_2bc4) {
                              plVar42 = (longlong *)pdVar39[0x7a];
                              if (plVar42 == (longlong *)0x0) {
                                pdVar43 = (double *)pdVar39[0x78];
                                if ((double *)pdVar39[0x78] == (double *)0x0) {
                                  pdVar43 = pdVar54;
                                }
                                plVar42 = (longlong *)*pdVar43;
                              }
                              lVar67 = (**(code **)(*plVar42 + 0x10))();
                              if (*(int *)(lVar67 + 0x30) <= (int)local_2bf8) {
                                plVar42 = (longlong *)pdVar39[0x7a];
                                if (plVar42 == (longlong *)0x0) {
                                  pdVar43 = (double *)pdVar39[0x78];
                                  if ((double *)pdVar39[0x78] == (double *)0x0) {
                                    pdVar43 = pdVar54;
                                  }
                                  plVar42 = (longlong *)*pdVar43;
                                }
                                lVar67 = (**(code **)(*plVar42 + 0x10))();
                                if (uVar64 < *puVar41) {
LAB_143077ec6:
                                  plVar42 = (longlong *)pdVar39[0x7a];
                                  if (plVar42 == (longlong *)0x0) {
                                    if ((double *)pdVar39[0x78] != (double *)0x0) {
                                      pdVar54 = (double *)pdVar39[0x78];
                                    }
                                    plVar42 = (longlong *)*pdVar54;
                                  }
                                  lVar67 = (**(code **)(*plVar42 + 0x10))();
                                  pdVar54 = local_2c88;
                                  local_2c00 = *(ulonglong *)(lVar67 + 0x2c);
                                  memcpy(local_2c88,pdVar39,0x118);
                                  dVar74 = pdVar39[0x25];
                                  pdVar54[0x24] = pdVar39[0x24];
                                  pdVar54[0x25] = dVar74;
                                  pdVar54[0x26] = pdVar39[0x26];
                                  if (pdVar54 != pdVar39) {
                                    pdVar54 = pdVar39 + 0x28;
                                    if ((double *)pdVar39[0x40] != (double *)0x0) {
                                      pdVar54 = (double *)pdVar39[0x40];
                                    }
                                    iVar35 = *(int *)(pdVar39 + 0x42);
                                    *(int *)(local_2c88 + 0x42) = iVar35;
                                    if (iVar35 == 0 && *(int *)((longlong)local_2c88 + 0x214) == 0)
                                    {
                                      *(undefined4 *)((longlong)local_2c88 + 0x214) = 6;
                                    }
                                    else {
                                      pdVar43 = local_2c88 + 0x28;
                                      FUN_144715b40(pdVar43,iVar35);
                                      if (iVar35 != 0) {
                                        if ((double *)local_2c88[0x40] != (double *)0x0) {
                                          pdVar43 = (double *)local_2c88[0x40];
                                        }
                                        memcpy(pdVar43,pdVar54,(longlong)iVar35 << 5);
                                      }
                                    }
                                    pdVar54 = pdVar39 + 0x44;
                                    if ((double *)pdVar39[100] != (double *)0x0) {
                                      pdVar54 = (double *)pdVar39[100];
                                    }
                                    iVar35 = *(int *)(pdVar39 + 0x66);
                                    *(int *)(local_2c88 + 0x66) = iVar35;
                                    if (iVar35 == 0 && *(int *)((longlong)local_2c88 + 0x334) == 0)
                                    {
                                      *(undefined4 *)((longlong)local_2c88 + 0x334) = 8;
                                    }
                                    else {
                                      pdVar43 = local_2c88 + 0x44;
                                      FUN_144715cb0(pdVar43,iVar35);
                                      if (iVar35 != 0) {
                                        if ((double *)local_2c88[100] != (double *)0x0) {
                                          pdVar43 = (double *)local_2c88[100];
                                        }
                                        memcpy(pdVar43,pdVar54,(longlong)iVar35 << 5);
                                      }
                                    }
                                  }
                                  local_2c50 = local_2c00 >> 0x20;
                                  pdVar54 = pdVar39 + 0x68;
                                  pdVar43 = local_2c88 + 0x68;
                                  for (lVar67 = 10; lVar67 != 0; lVar67 = lVar67 + -1) {
                                    *pdVar43 = *pdVar54;
                                    pdVar54 = pdVar54 + 1;
                                    pdVar43 = pdVar43 + 1;
                                  }
                                  *(undefined2 *)(local_2c88 + 0x72) =
                                       *(undefined2 *)(pdVar39 + 0x72);
                                  local_19e8 = local_19e8 & 0xffffffff00000000;
                                  *puVar41 = *puVar41 - 1;
                                  local_2c38 = 1;
                                }
                                else {
                                  iVar35 = (int)*(undefined8 *)(lVar67 + 0x2c);
                                  iVar66 = (int)((ulonglong)*(undefined8 *)(lVar67 + 0x2c) >> 0x20);
                                  if (((int)local_2c00 < iVar35) ||
                                     ((int)(float)local_2c50 < iVar66)) {
                                    dVar74 = 0.0;
                                    if ((int)(float)local_2c50 < iVar66) {
                                      dVar78 = ((double)iVar66 - local_2ae8) /
                                               ((double)iVar66 - (double)(int)(float)local_2c50);
                                    }
                                    else {
                                      dVar78 = 0.0;
                                    }
                                    if ((int)local_2c00 < iVar35) {
                                      dVar74 = ((double)iVar35 - local_2ae8) /
                                               ((double)iVar35 - (double)(int)local_2c00);
                                    }
                                    if (dVar74 <= dVar78) {
                                      dVar74 = dVar78;
                                    }
                                    if (0.0 < (float)dVar74) {
                                      param_3 = local_2c30;
                                      fVar69 = (float)local_2c48._0_4_;
                                      if (0.5 <= (float)dVar74) goto LAB_143074fc3;
                                      goto LAB_143077ec6;
                                    }
                                  }
                                }
                              }
                            }
                            param_3 = local_2c30;
                            fVar69 = (float)local_2c48._0_4_;
                          }
                        }
LAB_143074fc3:
                        pdVar54 = local_2c88;
                        memcpy(pdVar39,local_2c88,0x118);
                        dVar74 = pdVar54[0x25];
                        pdVar39[0x24] = pdVar54[0x24];
                        pdVar39[0x25] = dVar74;
                        pdVar39[0x26] = pdVar54[0x26];
                        if (pdVar39 != pdVar54) {
                          pdVar54 = local_2c88 + 0x28;
                          if ((double *)local_2c88[0x40] != (double *)0x0) {
                            pdVar54 = (double *)local_2c88[0x40];
                          }
                          iVar35 = *(int *)(local_2c88 + 0x42);
                          *(int *)(pdVar39 + 0x42) = iVar35;
                          if (iVar35 == 0 && *(int *)((longlong)pdVar39 + 0x214) == 0) {
                            *(undefined4 *)((longlong)pdVar39 + 0x214) = 6;
                          }
                          else {
                            FUN_144715b40(pdVar39 + 0x28,iVar35);
                            if (iVar35 != 0) {
                              pdVar43 = pdVar39 + 0x28;
                              if ((double *)pdVar39[0x40] != (double *)0x0) {
                                pdVar43 = (double *)pdVar39[0x40];
                              }
                              memcpy(pdVar43,pdVar54,(longlong)iVar35 << 5);
                            }
                          }
                          pdVar54 = local_2c88 + 0x44;
                          if ((double *)local_2c88[100] != (double *)0x0) {
                            pdVar54 = (double *)local_2c88[100];
                          }
                          iVar35 = *(int *)(local_2c88 + 0x66);
                          *(int *)(pdVar39 + 0x66) = iVar35;
                          if (iVar35 == 0 && *(int *)((longlong)pdVar39 + 0x334) == 0) {
                            *(undefined4 *)((longlong)pdVar39 + 0x334) = 8;
                          }
                          else {
                            FUN_144715cb0(pdVar39 + 0x44,iVar35);
                            if (iVar35 != 0) {
                              pdVar43 = pdVar39 + 0x44;
                              if ((double *)pdVar39[100] != (double *)0x0) {
                                pdVar43 = (double *)pdVar39[100];
                              }
                              memcpy(pdVar43,pdVar54,(longlong)iVar35 << 5);
                            }
                          }
                        }
                        pdVar54 = local_2c88 + 0x68;
                        pdVar43 = pdVar39 + 0x68;
                        for (lVar67 = 10; lVar67 != 0; lVar67 = lVar67 + -1) {
                          *pdVar43 = *pdVar54;
                          pdVar54 = pdVar54 + 1;
                          pdVar43 = pdVar43 + 1;
                        }
                        *(undefined2 *)(pdVar39 + 0x72) = *(undefined2 *)(local_2c88 + 0x72);
                        *(float *)(pdVar39 + 0x7b) = fVar90;
                        uVar65 = (uint)local_2c00;
                        uVar62 = (uint)(float)local_2c50;
                        goto LAB_143075123;
                      }
                    }
                  }
LAB_143074720:
                  if ((longlong)DAT_14c760a2c * 0x100000 <= local_2ad0) {
                    local_19e8 = 0x300000003;
                    local_2c38 = 1;
                    goto LAB_143075123;
                  }
                  local_19e8 = 1;
                  *puVar41 = *puVar41 + 1;
                  local_2a08 = local_2bc0;
                  FUN_14158d6d8(plVar42,local_368,&local_2a08);
                  pdVar39 = local_2c88;
                  local_2c38 = (longlong)(int)local_368._0_4_;
                  local_2c28._0_8_ = *plVar42;
                  memcpy(&local_2a08,local_2c88,0x120);
                  dVar74 = pdVar39[0x25];
                  *local_2ad8 = pdVar39[0x24];
                  local_2ad8[1] = dVar74;
                  local_2ad8[2] = pdVar39[0x26];
                  puStack_2808 = (undefined1 *)0x0;
                  iVar35 = *(int *)(pdVar39 + 0x42);
                  local_27f8 = CONCAT44(local_27f8._4_4_,iVar35);
                  if ((longlong)iVar35 == 0) {
                    local_27f8 = CONCAT44(6,iVar35);
                  }
                  else {
                    pdVar54 = pdVar39 + 0x28;
                    if ((double *)pdVar39[0x40] != (double *)0x0) {
                      pdVar54 = (double *)pdVar39[0x40];
                    }
                    FUN_144715b40(local_28c8,iVar35,0);
                    puVar58 = puStack_2808;
                    if (puStack_2808 == (undefined1 *)0x0) {
                      puVar58 = local_28c8;
                    }
                    memcpy(puVar58,pdVar54,(longlong)iVar35 << 5);
                  }
                  puVar58 = local_2ae0;
                  local_26e8 = (undefined1 *)0x0;
                  iVar35 = *(int *)(pdVar39 + 0x66);
                  local_26d8 = (double)CONCAT44(local_26d8._4_4_,iVar35);
                  if ((longlong)iVar35 == 0) {
                    local_26d8 = (double)CONCAT44(8,iVar35);
                  }
                  else {
                    pdVar54 = pdVar39 + 0x44;
                    if ((double *)pdVar39[100] != (double *)0x0) {
                      pdVar54 = (double *)pdVar39[100];
                    }
                    FUN_144715cb0(local_2ae0,iVar35,0);
                    _Dst = local_26e8;
                    if (local_26e8 == (undefined1 *)0x0) {
                      _Dst = puVar58;
                    }
                    memcpy(_Dst,pdVar54,(longlong)iVar35 << 5);
                  }
                  lVar67 = local_2c28._0_8_ + local_2c38 * 0x20;
                  pdVar54 = pdVar39 + 0x68;
                  pdVar43 = local_26c8;
                  for (lVar55 = 10; lVar55 != 0; lVar55 = lVar55 + -1) {
                    *pdVar43 = *pdVar54;
                    pdVar54 = pdVar54 + 1;
                    pdVar43 = pdVar43 + 1;
                  }
                  local_2678 = *(undefined2 *)(pdVar39 + 0x72);
                  local_2648 = 0;
                  local_2640 = 0x400000000;
                  uStack_2638 = 0;
                  local_262c = 1;
                  local_2618 = 0;
                  local_2610 = 0x8000000000;
                  iVar35 = *(int *)(lVar67 + 0x10);
                  *(uint *)(lVar67 + 0x10) = iVar35 + 1U;
                  local_2630 = fVar90;
                  if (*(uint *)(lVar67 + 0x14) < iVar35 + 1U) {
                    FUN_141781f84((longlong *)(lVar67 + 8),iVar35);
                  }
                  lVar67 = *(longlong *)(lVar67 + 8);
                  lVar55 = (longlong)iVar35 * 0x430;
                  pvVar3 = (void *)(lVar67 + lVar55);
                  memcpy(pvVar3,&local_2a08,0x120);
                  dVar74 = local_2ad8[1];
                  pdVar39 = (double *)(lVar67 + 0x120 + lVar55);
                  *pdVar39 = *local_2ad8;
                  pdVar39[1] = dVar74;
                  *(double *)(lVar67 + 0x130 + lVar55) = local_2ad8[2];
                  *(undefined8 *)(lVar67 + 0x200 + lVar55) = 0;
                  uVar62 = (uint)local_2c50;
                  if (puStack_2808 == (undefined1 *)0x0) {
                    memmove((void *)((longlong)pvVar3 + 0x140),local_28c8,0xc0);
                  }
                  *(undefined1 **)((longlong)pvVar3 + 0x200) = puStack_2808;
                  puStack_2808 = (undefined1 *)0x0;
                  *(undefined4 *)((longlong)pvVar3 + 0x210) = (undefined4)local_27f8;
                  *(undefined4 *)((longlong)pvVar3 + 0x214) = local_27f8._4_4_;
                  local_27f8 = 0x600000000;
                  *(undefined8 *)((longlong)pvVar3 + 800) = 0;
                  if (local_26e8 == (undefined1 *)0x0) {
                    memmove((void *)((longlong)pvVar3 + 0x220),local_2ae0,0x100);
                  }
                  *(undefined1 **)((longlong)pvVar3 + 800) = local_26e8;
                  local_26e8 = (undefined1 *)0x0;
                  *(undefined4 *)((longlong)pvVar3 + 0x330) = (undefined4)local_26d8;
                  *(undefined4 *)((longlong)pvVar3 + 0x334) = local_26d8._4_4_;
                  local_26d8 = 1.69759663277222e-313;
                  pdVar39 = local_26c8;
                  pdVar54 = (double *)((longlong)pvVar3 + 0x340);
                  for (lVar67 = 10; lVar67 != 0; lVar67 = lVar67 + -1) {
                    *pdVar54 = *pdVar39;
                    pdVar39 = pdVar39 + 1;
                    pdVar54 = pdVar54 + 1;
                  }
                  *(undefined2 *)((longlong)pvVar3 + 0x390) = local_2678;
                  *(undefined8 *)((longlong)pvVar3 + 0x3c0) = 0;
                  if (local_2648 == 0) {
                    *(undefined8 *)((longlong)pvVar3 + 0x3b0) = local_2658;
                    *(undefined8 *)((longlong)pvVar3 + 0x3b8) = uStack_2650;
                    *(double *)((longlong)pvVar3 + 0x3a0) = local_2668;
                    *(double *)((longlong)pvVar3 + 0x3a8) = dStack_2660;
                  }
                  *(longlong *)((longlong)pvVar3 + 0x3c0) = local_2648;
                  *(undefined4 *)((longlong)pvVar3 + 0x3c8) = (undefined4)local_2640;
                  *(undefined4 *)((longlong)pvVar3 + 0x3cc) = local_2640._4_4_;
                  *(undefined8 *)((longlong)pvVar3 + 0x3d0) = uStack_2638;
                  *(undefined2 *)((longlong)pvVar3 + 0x3dc) = local_262c;
                  *(float *)((longlong)pvVar3 + 0x3d8) = local_2630;
                  *(undefined8 *)((longlong)pvVar3 + 0x3f0) = 0;
                  if (local_2618 == 0) {
                    *(undefined8 *)((longlong)pvVar3 + 0x3e0) = local_2628;
                    *(undefined8 *)((longlong)pvVar3 + 1000) = uStack_2620;
                  }
                  *(longlong *)((longlong)pvVar3 + 0x3f0) = local_2618;
                  *(undefined4 *)((longlong)pvVar3 + 0x3f8) = (undefined4)local_2610;
                  *(undefined4 *)((longlong)pvVar3 + 0x3fc) = local_2610._4_4_;
                  *(ulonglong *)((longlong)pvVar3 + 0x41c) = CONCAT44(uStack_25e8,local_25ec);
                  *(undefined8 *)((longlong)pvVar3 + 0x424) = uStack_25e4;
                  auVar87._12_4_ = local_25ec;
                  auVar87._0_12_ = auStack_25f8;
                  *(undefined1 (*) [16])((longlong)pvVar3 + 0x410) = auVar87;
                  *(undefined8 *)((longlong)pvVar3 + 0x400) = uStack_2608;
                  *(undefined8 *)((longlong)pvVar3 + 0x408) = uStack_2600;
                  local_2610 = 0;
                  local_2618 = 0;
                  uStack_2638 = 0;
                  local_2640 = 0x400000000;
                  local_2648 = 0;
                  local_26d8 = 1.69759663277222e-313;
                  local_26e8 = (undefined1 *)0x0;
                  FUN_14002d124(&local_2668);
                  if (local_26e8 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                  auVar59 = local_2c68;
                  if (puStack_2808 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                  local_2c38 = 2;
                }
                uVar52 = (ulonglong)(uVar65 - local_2bf4);
                uVar50 = (ulonglong)(uVar62 - local_2bf4);
              }
              local_2a28[0] = (undefined1)local_2bd0;
              local_2a20 = local_2b98;
              local_2a18 = *(undefined4 *)(param_1 + 0x8a4);
              local_2a10 = local_2b88;
              local_2c50 = uVar50;
              if ((char)local_2c6c == '\0') {
LAB_14307769f:
                lVar67 = 0;
                do {
                  puVar41 = (uint *)*puVar2;
                  if (puVar41 != (uint *)0x0) goto LAB_1430776b5;
                  while( true ) {
                    FUN_14472e504(puVar2);
                    puVar41 = (uint *)*puVar2;
LAB_1430776b5:
                    puVar61 = (undefined8 *)
                              (*(longlong *)(puVar41 + 0x10) + 0xfU & 0xfffffffffffffff0);
                    uVar64 = puVar41[0x12];
                    if (puVar61 + 0x22a <= puVar41 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar41 + 0x10) = puVar41 + 0x4000;
                      LOCK();
                      uVar62 = *puVar41;
                      *puVar41 = *puVar41 + uVar64 + 1;
                      UNLOCK();
                      if ((uVar62 ^ uVar64) != 0xffffffff) break;
                      puVar41 = (uint *)*puVar2;
                      *puVar41 = 0xffffffff;
                      *(uint **)(puVar41 + 0x10) = puVar41 + 0x16;
                      puVar41[0x12] = 0;
                      *puVar2 = puVar41;
                      puVar61 = (undefined8 *)((longlong)puVar41 + 0x67U & 0xfffffffffffffff0);
                      uVar64 = 0;
                      if (puVar61 + 0x22a <= puVar41 + 0x4000) {
                        uVar64 = 1;
                        goto LAB_143077731;
                      }
                    }
                  }
                  uVar64 = uVar64 + 1;
LAB_143077731:
                  *(undefined8 **)(puVar41 + 0x10) = puVar61 + 0x22b;
                  puVar41[0x12] = uVar64;
                  *(int *)(puVar61 + -1) = ((int)puVar61 + -8) - (int)puVar41;
                  *(undefined4 *)((longlong)puVar61 + -4) = 0x1150;
                  puVar61[1] = 0;
                  *puVar61 = &PTR_FUN_14a3099b0;
                  lVar55 = *(longlong *)(param_1 + 0x90);
                  do {
                    puVar61[1] = lVar55;
                    LOCK();
                    lVar63 = *(longlong *)(param_1 + 0x90);
                    bVar68 = lVar55 == lVar63;
                    if (bVar68) {
                      *(longlong *)(param_1 + 0x90) = (longlong)puVar61;
                      lVar63 = lVar55;
                    }
                    UNLOCK();
                    lVar55 = lVar63;
                  } while (!bVar68);
                  puVar53 = puVar61 + 2;
                  FUN_144ab9098(puVar53);
                  local_2c98 = (undefined4)local_2a40;
                  local_2ca0 = (undefined4)local_2c50;
                  local_2ca8 = (undefined4)uVar52;
                  local_2cb0 = (uint **)CONCAT44(local_2cb0._4_4_,local_2ca0);
                  local_2cb8 = (LARGE_INTEGER *)CONCAT44(local_2cb8._4_4_,local_2ca8);
                  FUN_14491cf12(puVar53,param_3,0,local_2c88);
                  iVar35 = *(int *)(local_19e0 + lVar67 * 4 + -8);
                  *(int *)(puVar61 + 8) = iVar35;
                  FUN_140143e58(puVar61 + 0x131,local_19e0);
                  if ((char)local_2c6c != '\0') {
                    *(byte *)((longlong)puVar61 + 0x9a2) =
                         *(byte *)((longlong)puVar61 + 0x9a2) & 0xfe;
                    *(undefined1 *)((longlong)puVar61 + 0x9a4) = 1;
                  }
                  local_3e8 = FUN_144ab6403(*(undefined2 *)
                                             (&DAT_14ca85070 +
                                             (longlong)*(int *)(*(longlong *)(local_2b88 + 8) + 8) *
                                             2));
                  uVar64 = *(uint *)(puVar61 + 0x134);
                  if ((uVar64 >> 9 & 1) == 0) {
                    local_1a08 = (LARGE_INTEGER *)0x0;
                    local_19f8 = 0x800000000;
                    if (iVar35 != 1) {
                      local_358 = *(double *)(*(longlong *)(param_3 + 0x28) + 0x140);
                      local_368 = *(undefined1 (*) [16])(*(longlong *)(param_3 + 0x28) + 0x130);
                      FUN_14730ef0a(local_368,local_2b98,&local_2a08);
                    }
                    bVar30 = 1;
                    if (DAT_14c760a30 == 0) {
                      bVar30 = (*(byte *)(*(longlong *)(param_3 + 0x28) + 0x1d1) & 8) >> 3;
                    }
                    if (iVar35 == 1) {
LAB_1430778cb:
                      local_368 = ZEXT816(0);
                      local_2cb0 = (uint **)local_368;
                      local_2cb8 = &local_2a08;
                      FUN_1430789fa(local_2a28,*(undefined8 *)(param_3 + 0x20),puVar53,&local_3e8);
                    }
                    else if ((iVar35 != 0) || (bVar30 != 0)) {
                      local_368 = ZEXT816(0);
                      local_2cb0 = (uint **)local_368;
                      local_2cb8 = &local_2a08;
                      FUN_1430789fa(local_2a28,*(undefined8 *)(param_3 + 0x18),puVar53,&local_3e8);
                      if (iVar35 != 0) goto LAB_1430778cb;
                    }
                    pLVar46 = local_1a08;
                    if (local_1a08 == (LARGE_INTEGER *)0x0) {
                      pLVar46 = &local_2a08;
                    }
                    FUN_144b0f6c2(pLVar46,local_19f8 & 0xffffffff);
                    if (local_1a08 != (LARGE_INTEGER *)0x0) {
                      FUN_1400020a8();
                    }
                    uVar64 = *(uint *)(puVar61 + 0x134);
                  }
                  plVar42 = local_2ac0;
                  *(uint *)(puVar61 + 0x134) = uVar64 & 0xfffdffff | (uint)local_3e8 << 0x11;
                  if (iVar35 == 1) {
                    bVar30 = 1;
                    if (((((*(int *)(puVar61 + 0x17a) < 1) && (*(int *)(puVar61 + 0x17e) < 1)) &&
                         (*(int *)(puVar61 + 0x180) < 1)) &&
                        ((*(int *)((longlong)puVar61 + 0xffc) < 1 && (*(int *)(puVar61 + 0x188) < 1)
                         ))) && (*(int *)(puVar61 + 0x18d) < 1)) {
                      if (local_3e8 == 0) {
                        bVar30 = 0;
                      }
                      else {
                        bVar30 = (byte)(uVar64 >> 0x10) & 1;
                      }
                    }
                    lVar55 = *(longlong *)(param_1 + 8);
                    if (*(int *)(lVar55 + 0x4bc0) != *(int *)(lVar55 + 0x4bec)) {
                      lVar63 = lVar55 + 0x4bf0;
                      if (*(longlong *)(lVar55 + 0x4bf8) != 0) {
                        lVar63 = *(longlong *)(lVar55 + 0x4bf8);
                      }
                      iVar35 = *(int *)(lVar63 + (ulonglong)
                                                 (*(int *)(lVar55 + 0x4c00) - 1U &
                                                 *(uint *)(puVar61[0x16e] + 0x34)) * 4);
                      if (iVar35 != -1) {
                        do {
                          lVar63 = *(longlong *)(lVar55 + 0x4bb8) + (longlong)iVar35 * 0x20;
                          if (*(uint *)(*(longlong *)(lVar55 + 0x4bb8) + (longlong)iVar35 * 0x20) ==
                              *(uint *)(puVar61[0x16e] + 0x34)) goto LAB_143077a2c;
                          iVar35 = *(int *)(lVar63 + 0x18);
                        } while (iVar35 != -1);
                      }
                    }
                    lVar63 = 0;
LAB_143077a2c:
                    lVar55 = *(longlong *)(lVar63 + 8);
                    *(byte *)(lVar55 + 0x3dc) = bVar30;
                    *(byte *)(lVar55 + 0x3dd) = *(byte *)((longlong)puVar61 + 0x9a2) & 1;
                    if (bVar30 != 0) goto LAB_143077a49;
                  }
                  else {
LAB_143077a49:
                    iVar35 = (int)local_2ac0[1];
                    *(uint *)(local_2ac0 + 1) = iVar35 + 1U;
                    if (*(uint *)((longlong)local_2ac0 + 0xc) < iVar35 + 1U) {
                      FUN_1447417ac(local_2ac0,iVar35);
                    }
                    *(undefined8 **)(*plVar42 + (longlong)iVar35 * 8) = puVar53;
                  }
                  lVar67 = lVar67 + 1;
                } while (lVar67 != local_2c38);
              }
              else {
                local_2c68 = auVar59;
                puVar41 = (uint *)*puVar2;
                if (puVar41 != (uint *)0x0) goto LAB_14307519d;
                while( true ) {
                  FUN_14472e504(puVar2);
                  puVar41 = (uint *)*puVar2;
LAB_14307519d:
                  uVar50 = local_2c50;
                  puVar61 = (undefined8 *)
                            (*(longlong *)(puVar41 + 0x10) + 0xfU & 0xfffffffffffffff0);
                  uVar64 = puVar41[0x12];
                  if (puVar61 + 0x22a <= puVar41 + 0x4000) break;
                  while( true ) {
                    *(uint **)(puVar41 + 0x10) = puVar41 + 0x4000;
                    LOCK();
                    uVar62 = *puVar41;
                    *puVar41 = *puVar41 + uVar64 + 1;
                    UNLOCK();
                    if ((uVar62 ^ uVar64) != 0xffffffff) break;
                    puVar41 = (uint *)*puVar2;
                    *puVar41 = 0xffffffff;
                    *(uint **)(puVar41 + 0x10) = puVar41 + 0x16;
                    puVar41[0x12] = 0;
                    *puVar2 = puVar41;
                    puVar61 = (undefined8 *)((longlong)puVar41 + 0x67U & 0xfffffffffffffff0);
                    uVar64 = 0;
                    if (puVar61 + 0x22a <= puVar41 + 0x4000) {
                      uVar64 = 1;
                      goto LAB_14307521b;
                    }
                  }
                }
                uVar64 = uVar64 + 1;
LAB_14307521b:
                *(undefined8 **)(puVar41 + 0x10) = puVar61 + 0x22b;
                puVar41[0x12] = uVar64;
                *(int *)(puVar61 + -1) = ((int)puVar61 + -8) - (int)puVar41;
                *(undefined4 *)((longlong)puVar61 + -4) = 0x1150;
                puVar61[1] = 0;
                *puVar61 = &PTR_FUN_14a3099b0;
                lVar55 = *(longlong *)(param_1 + 0x90);
                puVar61[1] = lVar55;
                LOCK();
                lVar67 = *(longlong *)(param_1 + 0x90);
                bVar68 = lVar55 == lVar67;
                if (bVar68) {
                  *(longlong *)(param_1 + 0x90) = (longlong)puVar61;
                  lVar67 = lVar55;
                }
                UNLOCK();
                while (!bVar68) {
                  puVar61[1] = lVar67;
                  LOCK();
                  lVar55 = *(longlong *)(param_1 + 0x90);
                  bVar68 = lVar67 == lVar55;
                  if (bVar68) {
                    *(longlong *)(param_1 + 0x90) = (longlong)puVar61;
                    lVar55 = lVar67;
                  }
                  UNLOCK();
                  lVar67 = lVar55;
                }
                puVar53 = puVar61 + 2;
                FUN_144ab9098(puVar53);
                local_2ca0 = 0x4000;
                local_2ca8 = 0x4000;
                iVar66 = (int)uVar52;
                iVar35 = (int)uVar50;
                if (iVar66 < iVar35) {
                  local_2ca8 = (undefined4)
                               ((ulonglong)(uint)(iVar66 << 0xe) / (uVar50 & 0xffffffff));
                }
                if (iVar35 < iVar66) {
                  local_2ca0 = (undefined4)((uint)(iVar35 << 0xe) / uVar52);
                }
                local_2cb0 = (uint **)CONCAT44(local_2cb0._4_4_,local_2ca0);
                local_2cb8 = (LARGE_INTEGER *)CONCAT44(local_2cb8._4_4_,local_2ca8);
                local_2c98 = 0;
                local_2c00 = uVar52;
                FUN_14491cf12(puVar53,param_3,0,local_2c88);
                local_2c80 = *(longlong *)(param_1 + 0x7c0);
                local_2c08 = **(longlong **)(local_2c80 + 0x58);
                iVar35 = *(int *)(local_2c80 + 0x28);
                *(uint *)(local_2c80 + 0x28) = iVar35 + 1U;
                if (*(uint *)(local_2c80 + 0x2c) < iVar35 + 1U) {
                  FUN_144ab9a08(local_2c80 + 0x20,iVar35);
                }
                lVar67 = *(longlong *)(local_2c80 + 0x20);
                lVar55 = (longlong)iVar35 * 0x20;
                local_2ba8 = (undefined8 *)(lVar67 + lVar55);
                FUN_144b18aca();
                *(undefined8 **)(lVar67 + 0x10 + lVar55) = puVar53;
                *(longlong *)(lVar67 + 0x18 + lVar55) = param_3;
                plVar42 = *(longlong **)(puVar61[0x16e] + 0x28);
                fVar90 = *(float *)(plVar42 + 0x40);
                plVar51 = *(longlong **)(local_2c80 + 0x50);
                uVar64 = *(uint *)(param_3 + 0x34);
                lVar67 = plVar51[0xc];
                local_2c28._0_8_ = plVar42;
                local_2c78 = puVar53;
                if (lVar67 != 0) {
                  if (DAT_14c87e718 == '\0') {
                    iVar35 = *(int *)(lVar67 + 0x1c);
                    if ((2 < iVar35) &&
                       (bVar30 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar30 < 3))
                    {
                      local_2a08.QuadPart = 0x20100000001;
                      uStack_2a00 = 0x30100000101;
                      local_29f8 = DAT_14c7585c8;
                      local_29f4 = DAT_14c7585c8 | 0x200;
                      local_29f0 = DAT_14c7585c8 | 0x100;
                      local_29ec = DAT_14c7585c8 | 0x300;
                      local_29e8 = 0x20000000000;
                      uStack_29e0 = 0x30000000100;
                      if (*(byte *)((longlong)&local_2a08 + (ulonglong)(iVar35 - 3) * 4) == bVar30)
                      goto LAB_1430787a1;
                    }
                    QueryPerformanceCounter(&local_2a08);
                    uStack_2a00 = 0xffffffffffffffff;
                    FUN_140056092(lVar67,&local_2a08);
                  }
                  else {
LAB_1430787a1:
                    FUN_140082318(lVar67);
                  }
                  plVar42 = (longlong *)local_2c28._0_8_;
                  fVar69 = (float)local_2c48._0_4_;
                }
                puVar61 = local_2c78;
                plVar38 = plVar51 + 7;
                if ((longlong *)plVar51[9] != (longlong *)0x0) {
                  plVar38 = (longlong *)plVar51[9];
                }
                uVar62 = uVar64 + 0x1f;
                if (-1 < (int)uVar64) {
                  uVar62 = uVar64;
                }
                fVar71 = 0.0;
                if ((*(uint *)((longlong)plVar38 + (longlong)((int)uVar62 >> 5) * 4) >>
                     (uVar64 & 0x1f) & 1) != 0) {
                  fVar71 = *(float *)(*plVar51 + 4 + (longlong)(int)uVar64 * 8);
                }
                fVar93 = *(float *)(DAT_14ca5bb00 + 4);
                fVar85 = fVar93;
                if (fVar93 <= *(float *)(DAT_14ca5bb18 + 4)) {
                  fVar85 = *(float *)(DAT_14ca5bb18 + 4);
                }
                pdVar39 = (double *)(local_2c78 + 0x13a);
                if ((*(byte *)(local_2c78 + 0x132) & 0x20) == 0) {
                  pdVar39 = (double *)(local_2c78 + 0x2c);
                }
                fVar90 = fVar90 + (fVar85 - fVar93) * fVar71 + fVar93;
                dVar74 = *pdVar39;
                lVar67 = *(longlong *)(local_2c80 + 0x40);
                if (*(int *)(lVar67 + 0x3f0) < 1) {
                  local_2bb8 = 8;
                }
                else {
                  uVar64 = 8;
                  lVar55 = 0x2d4;
                  lVar63 = 0;
                  do {
                    lVar67 = *(longlong *)(lVar67 + 1000);
                    lVar45 = *(longlong *)(local_2c80 + 0x78);
                    local_2c18._0_4_ = *(undefined4 *)(DAT_14ca69248 + 4);
                    fVar71 = *(float *)(local_2c08 + 0x204);
                    if (*(code **)(*plVar42 + 0x18) == (code *)&LAB_144774e28) {
                      fVar93 = *(float *)(plVar42 + 0x53);
                    }
                    else {
                      fVar93 = (float)(**(code **)(*plVar42 + 0x18))(plVar42);
                      plVar42 = (longlong *)local_2c28._0_8_;
                    }
                    fVar91 = (float)((double)plVar42[0x26] *
                                     *(double *)(lVar67 + -0x60 + lVar55 * 8) +
                                     (double)plVar42[0x27] *
                                     *(double *)(lVar67 + -0x40 + lVar55 * 8) +
                                     (double)plVar42[0x28] *
                                     *(double *)(lVar67 + -0x20 + lVar55 * 8) +
                                    *(double *)(lVar67 + lVar55 * 8)) - fVar93;
                    fVar85 = 0.0;
                    if (0.0 <= fVar91) {
                      fVar85 = fVar91;
                    }
                    fVar93 = logf(((fVar85 * *(float *)(lVar45 + lVar63 * 8) +
                                   *(float *)(lVar45 + 4 + lVar63 * 8)) * (float)dVar74 * 16384.0) /
                                  fVar93);
                    auVar75._0_4_ = fVar93 * 1.442695 + fVar90;
                    auVar75._4_12_ = extraout_var;
                    auVar87 = blendps(ZEXT416((uint)(fVar71 + auVar75._0_4_)),ZEXT816(0),0xe);
                    auVar87 = roundps(auVar75,auVar87,1);
                    if (auVar87._0_4_ <= 0.0) {
                      auVar21._12_4_ = 0;
                      auVar21._0_12_ = auVar87._4_12_;
                      auVar87 = auVar21 << 0x20;
                    }
                    local_2bb8 = (longlong)auVar87._0_4_ & 0xffffffff;
                    if (6 < (uint)(longlong)auVar87._0_4_) {
                      local_2bb8 = 7;
                    }
                    if (local_2c18._0_4_ == 2) {
                      local_2bb8 = (ulonglong)((uint)local_2bb8 | 1);
                    }
                    else if (local_2c18._0_4_ == 1) {
                      local_2bb8 = (ulonglong)((uint)local_2bb8 & 6);
                    }
                    if (uVar64 < (uint)local_2bb8) {
                      local_2bb8 = (ulonglong)uVar64;
                    }
                    lVar63 = lVar63 + 1;
                    lVar67 = *(longlong *)(local_2c80 + 0x40);
                    lVar55 = lVar55 + 0x2782;
                    uVar64 = (uint)local_2bb8;
                    plVar42 = (longlong *)local_2c28._0_8_;
                  } while (lVar63 < *(int *)(lVar67 + 0x3f0));
                }
                pdVar39 = local_2c88;
                bVar68 = true;
                if (*(int *)(local_2c80 + 0x8c) == 1) {
                  if (*(char *)(local_2c80 + 0x89) == '\x01') {
                    local_2c18[0] = (int)local_2bb8 == 7;
                  }
                  else {
                    fVar93 = (float)exp2f(fVar90 - *(float *)(plVar42 + 0x40));
                    fVar93 = fVar93 * 128.0;
                    local_2c18[0] = fVar69 <= fVar93;
                    fVar71 = *(float *)(DAT_14ca5baa0 + 4);
                    if (1.0 <= fVar71) {
                      fVar71 = 1.0;
                    }
                    if (fVar71 <= 0.0) {
                      fVar71 = 0.0;
                    }
                    bVar68 = fVar93 < fVar69 || fVar71 * fVar93 < fVar69;
                  }
                }
                else {
                  local_2c18[0] = *(int *)(local_2c80 + 0x8c) == 2;
                }
                uVar64 = (uint)*(byte *)(pdVar39 + 0x72) + (uint)*(byte *)(pdVar39 + 0x72) * 4 + 1;
                local_2ba0 = (ulonglong)uVar64;
                local_2cb8 = (LARGE_INTEGER *)CONCAT44(local_2cb8._4_4_,uVar64);
                FUN_1407e8fa8(local_2c08,&local_2a38,*(uint *)local_2bc0,0);
                if (local_2a30 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_2a30 + 1) = (int)local_2a30[1] + 1;
                  UNLOCK();
                }
                plVar42 = (longlong *)local_2ba8[1];
                *local_2ba8 = local_2a38;
                local_2ba8[1] = local_2a30;
                if (plVar42 != (longlong *)0x0) {
                  LOCK();
                  plVar51 = plVar42 + 1;
                  *(int *)plVar51 = (int)*plVar51 + -1;
                  UNLOCK();
                  if ((int)*plVar51 == 0) {
                    (**(code **)*plVar42)(plVar42);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar42 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar42 + 0x10))(plVar42);
                    }
                  }
                }
                puVar41 = local_2a38;
                iVar35 = *(int *)(DAT_14ca66988 + 4);
                if (*(code **)(*(longlong *)local_2c28._0_8_ + 0x18) == (code *)&LAB_144774e28) {
                  uVar64 = *(uint *)(local_2c28._0_8_ + 0x298);
                  plVar42 = (longlong *)local_2c28._0_8_;
                  auVar59 = local_2c68;
                }
                else {
                  uVar64 = (**(code **)(*(longlong *)local_2c28._0_8_ + 0x18))(local_2c28._0_8_);
                  plVar42 = (longlong *)local_2c28._0_8_;
                  auVar59 = local_2c68;
                }
                uVar62 = *puVar41;
                if ((int)*puVar41 < (int)puVar41[2]) {
                  uVar62 = puVar41[2];
                }
                uVar52 = (ulonglong)uVar62;
                uVar65 = puVar41[1];
                if ((int)puVar41[1] < (int)puVar41[3]) {
                  uVar65 = puVar41[3];
                }
                lVar67 = plVar42[0x28];
                lVar55 = plVar42[0x26];
                lVar63 = plVar42[0x27];
                *puVar41 = uVar62;
                puVar41[1] = uVar65;
                if (iVar35 == 0) {
LAB_143077b0b:
                  *puVar41 = 0xffffffff;
                  uVar52 = 0xffffffff;
                }
                else if (bVar68) {
                  if ((*(double *)(puVar41 + 0x20) == *pdVar39) &&
                     (!NAN(*(double *)(puVar41 + 0x20)) && !NAN(*pdVar39))) {
                    if ((*(double *)(puVar41 + 0x22) == pdVar39[1]) &&
                       (!NAN(*(double *)(puVar41 + 0x22)) && !NAN(pdVar39[1]))) {
                      if ((*(double *)(puVar41 + 0x24) == pdVar39[2]) &&
                         (!NAN(*(double *)(puVar41 + 0x24)) && !NAN(pdVar39[2]))) {
                        puVar40 = puVar41 + 0x28;
                        lVar60 = (longlong)auVar59 + local_2bb0;
                        lVar45 = 0;
                        do {
                          lVar49 = 0;
                          do {
                            pdVar54 = (double *)(lVar60 + lVar49 * 8);
                            if ((*(double *)(puVar40 + lVar49 * 2) != *pdVar54) ||
                               (NAN(*(double *)(puVar40 + lVar49 * 2)) || NAN(*pdVar54)))
                            goto LAB_143077b0b;
                            lVar49 = lVar49 + 1;
                          } while (lVar49 != 4);
                          lVar45 = lVar45 + 1;
                          lVar60 = lVar60 + 0x20;
                          puVar40 = puVar40 + 8;
                        } while (lVar45 != 4);
                        if ((*(double *)(puVar41 + 0x48) == pdVar39[0x14]) &&
                           (!NAN(*(double *)(puVar41 + 0x48)) && !NAN(pdVar39[0x14]))) {
                          if ((*(double *)(puVar41 + 0x4a) == pdVar39[0x15]) &&
                             (!NAN(*(double *)(puVar41 + 0x4a)) && !NAN(pdVar39[0x15]))) {
                            if ((*(double *)(puVar41 + 0x4c) == pdVar39[0x16]) &&
                               (!NAN(*(double *)(puVar41 + 0x4c)) && !NAN(pdVar39[0x16]))) {
                              if ((*(double *)(puVar41 + 0x4e) == pdVar39[0x17]) &&
                                 (!NAN(*(double *)(puVar41 + 0x4e)) && !NAN(pdVar39[0x17]))) {
                                if ((*(double *)(puVar41 + 0x50) == pdVar39[0x18]) &&
                                   (!NAN(*(double *)(puVar41 + 0x50)) && !NAN(pdVar39[0x18]))) {
                                  if ((*(double *)(puVar41 + 0x52) == pdVar39[0x19]) &&
                                     (!NAN(*(double *)(puVar41 + 0x52)) && !NAN(pdVar39[0x19]))) {
                                    if ((*(double *)(puVar41 + 0x54) == pdVar39[0x1a]) &&
                                       (!NAN(*(double *)(puVar41 + 0x54)) && !NAN(pdVar39[0x1a]))) {
                                      if ((*(double *)(puVar41 + 0x56) == pdVar39[0x1b]) &&
                                         (!NAN(*(double *)(puVar41 + 0x56)) && !NAN(pdVar39[0x1b])))
                                      {
                                        if ((*(double *)(puVar41 + 0x58) == pdVar39[0x1c]) &&
                                           (!NAN(*(double *)(puVar41 + 0x58)) && !NAN(pdVar39[0x1c])
                                           )) {
                                          if ((*(double *)(puVar41 + 0x5c) == pdVar39[0x1e]) &&
                                             (!NAN(*(double *)(puVar41 + 0x5c)) &&
                                              !NAN(pdVar39[0x1e]))) {
                                            if ((*(double *)(puVar41 + 0x5e) == pdVar39[0x1f]) &&
                                               (!NAN(*(double *)(puVar41 + 0x5e)) &&
                                                !NAN(pdVar39[0x1f]))) {
                                              if ((*(double *)(puVar41 + 0x60) == pdVar39[0x20]) &&
                                                 (!NAN(*(double *)(puVar41 + 0x60)) &&
                                                  !NAN(pdVar39[0x20]))) {
                                                if ((*(double *)(puVar41 + 0x62) == pdVar39[0x21])
                                                   && (!NAN(*(double *)(puVar41 + 0x62)) &&
                                                       !NAN(pdVar39[0x21]))) {
                                                  if (((float)puVar41[100] ==
                                                       *(float *)(pdVar39 + 0x22)) &&
                                                     (!NAN((float)puVar41[100]) &&
                                                      !NAN(*(float *)(pdVar39 + 0x22)))) {
                                                    if (((float)puVar41[0x65] ==
                                                         *(float *)((longlong)pdVar39 + 0x114)) &&
                                                       (!NAN((float)puVar41[0x65]) &&
                                                        !NAN(*(float *)((longlong)pdVar39 + 0x114)))
                                                       ) goto LAB_143075b4d;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_143077b0b;
                }
LAB_143075b4d:
                iVar35 = (int)uVar52;
                memcpy(puVar41 + 0x20,pdVar39,0x118);
                uVar50 = local_2ba0;
                if ((uint)(uVar52 >> 0x1f) != (uint)(byte)puVar41[4]) {
                  *puVar41 = 0xffffffff;
                  iVar35 = -1;
                }
                if (*(char *)((longlong)puVar41 + 0x11) != local_2c18[0]) {
                  *puVar41 = 0xffffffff;
                  iVar35 = -1;
                }
                puVar41[2] = 0xffffffff;
                puVar41[3] = 0xffffffff;
                *(char *)((longlong)puVar41 + 0x11) = local_2c18[0];
                *(char *)(puVar41 + 4) = (char)(uVar52 >> 0x1f);
                *(longlong *)(puVar41 + 0x16) = lVar55;
                *(longlong *)(puVar41 + 0x18) = lVar63;
                *(longlong *)(puVar41 + 0x1a) = lVar67;
                puVar41[0x1c] = uVar64;
                if (local_2c18[0] == '\x01' && -1 < iVar35) {
                  uVar64 = local_2a38[1];
                  uVar62 = (**(code **)(**(longlong **)(local_2c80 + 0x48) + 0x490))();
                  if (uVar64 == uVar62) {
                    *local_2a38 = 0xffffffff;
                  }
                }
                lVar67 = *(longlong *)(local_2c80 + 0x58);
                iVar35 = (int)uVar50;
                if (local_2c18[0] == '\0') {
                  uVar52 = (ulonglong)*(uint *)(lVar67 + 0x1e0);
                  *(uint *)(lVar67 + 0x1e0) = *(uint *)(lVar67 + 0x1e0) + iVar35;
                }
                else {
                  uVar52 = (ulonglong)*(uint *)(lVar67 + 0x1e4);
                  uVar64 = *(uint *)(lVar67 + 0x1e4) + iVar35;
                  if (uVar64 < 0x2001) {
                    *(uint *)(lVar67 + 0x1e4) = uVar64;
                  }
                  else {
                    uVar52 = 0xffffffff;
                  }
                }
                *(int *)((longlong)puVar61 + 0x99c) = (int)uVar52;
                if (local_2a30 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_2a30 + 1) = (int)local_2a30[1] + 1;
                  UNLOCK();
                }
                plVar42 = (longlong *)puVar61[0x135];
                puVar61[0x134] = local_2a38;
                puVar61[0x135] = local_2a30;
                if (plVar42 != (longlong *)0x0) {
                  LOCK();
                  plVar51 = plVar42 + 1;
                  *(int *)plVar51 = (int)*plVar51 + -1;
                  UNLOCK();
                  if ((int)*plVar51 == 0) {
                    (**(code **)*plVar42)(plVar42);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar42 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar42 + 0x10))(plVar42);
                    }
                  }
                }
                uVar64 = 0x40000;
                if (*(char *)((longlong)local_2a38 + 0x11) == '\x01') {
                  uVar64 = *local_2a38 >> 0xd & 0x40000;
                }
                *(uint *)(puVar61 + 0x132) = *(uint *)(puVar61 + 0x132) & 0xfffbffff | uVar64;
                local_2a50 = uVar50 & 0xffffffff;
                local_2a70 = puVar61 + 0xc;
                uVar50 = 0;
                local_2b70 = fVar90;
                local_2ac8 = uVar52;
                do {
                  puVar41 = local_2a38;
                  pvVar3 = (void *)(*(longlong *)(local_2a38 + 0xe) + uVar50 * 0x1980);
                  lVar67 = *(longlong *)(local_2c80 + 0x58);
                  uVar62 = (int)uVar52 + (int)uVar50;
                  _Src = (void *)(*(longlong *)(local_2a38 + 0xe) + 0xbd0 + uVar50 * 0x1980);
                  uVar64 = *(uint *)((longlong)_Src + -0x10);
                  uVar52 = (ulonglong)uVar64;
                  local_2c08 = uVar50;
                  memcpy(pvVar3,_Src,0xba0);
                  puVar61 = local_2c78;
                  *(undefined8 *)((longlong)_Src + -0x30) = *(undefined8 *)((longlong)_Src + 0xba0);
                  *(undefined8 *)((longlong)_Src + -0x28) = *(undefined8 *)((longlong)_Src + 0xba8);
                  *(undefined4 *)((longlong)_Src + -0x20) = *(undefined4 *)((longlong)_Src + 0xbb0);
                  if (((uVar52 != 0xffffffff) && (-1 < (int)*puVar41)) &&
                     (0x1fff < uVar62 != uVar64 < 0x2000)) {
                    if ((int)uVar64 < 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(uVar52);
                    }
                    plVar42 = (longlong *)(lVar67 + 0x1d0);
                    if (*(int *)(lVar67 + 0x1dc) < (int)uVar64) {
                      FUN_14019fe82(plVar42,uVar64);
                    }
                    while (iVar35 = *(int *)(lVar67 + 0x1d8), iVar35 <= (int)uVar64) {
                      *(uint *)(lVar67 + 0x1d8) = iVar35 + 1U;
                      if (*(uint *)(lVar67 + 0x1dc) < iVar35 + 1U) {
                        local_2c68._0_4_ = uVar62;
                        FUN_14019fe90(plVar42,iVar35);
                        uVar62 = local_2c68._0_4_;
                      }
                      lVar55 = *(longlong *)(lVar67 + 0x1d0);
                      *(undefined4 *)(lVar55 + (longlong)iVar35 * 0x10) = 0xffffffff;
                      *(undefined8 *)(lVar55 + 4 + (longlong)iVar35 * 0x10) = 0;
                    }
                    *(uint *)(*plVar42 + uVar52 * 0x10) = uVar62;
                    *(undefined8 *)(*plVar42 + 4 + uVar52 * 0x10) = 0;
                  }
                  *(uint *)((longlong)pvVar3 + 0xbc0) = uVar62;
                  lVar67 = puVar61[0x134];
                  plVar42 = (longlong *)puVar61[0x135];
                  if (plVar42 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar42 + 1) = (int)plVar42[1] + 1;
                    UNLOCK();
                  }
                  bVar30 = *(byte *)(lVar67 + 0x10);
                  puVar53 = &DAT_14c846400;
                  puVar56 = local_2e8;
                  for (lVar67 = 0x10; lVar67 != 0; lVar67 = lVar67 + -1) {
                    *puVar56 = *puVar53;
                    puVar53 = puVar53 + 1;
                    puVar56 = puVar56 + 1;
                  }
                  puVar53 = &DAT_14c846400;
                  puVar56 = local_2a58;
                  for (lVar67 = 0x10; lVar67 != 0; lVar67 = lVar67 + -1) {
                    *puVar56 = *puVar53;
                    puVar53 = puVar53 + 1;
                    puVar56 = puVar56 + 1;
                  }
                  puVar53 = &DAT_14c846400;
                  puVar56 = local_1c8;
                  for (lVar67 = 0x10; lVar67 != 0; lVar67 = lVar67 + -1) {
                    *puVar56 = *puVar53;
                    puVar53 = puVar53 + 1;
                    puVar56 = puVar56 + 1;
                  }
                  local_2a60[2] = DAT_14c8464f0;
                  *local_2a60 = DAT_14c8464e0;
                  local_2a60[1] = DAT_14c8464e8;
                  local_110 = DAT_14c8464f0;
                  local_120 = DAT_14c8464e0;
                  uStack_118 = DAT_14c8464e8;
                  local_108 = 0;
                  uStack_fc = 0;
                  uStack_104 = 0x3f800000;
                  uStack_100 = 0x3f800000;
                  local_258 = puVar61[0xb] ^ 0x8000000000000000;
                  local_268 = puVar61[9] ^ 0x8000000000000000;
                  uStack_260 = puVar61[10] ^ 0x8000000000000000;
                  local_130 = puVar61[0x12a];
                  uStack_128 = CONCAT44(*(int *)((longlong)puVar61 + 0x954) +
                                        *(int *)(puVar61 + 300) * 2 +
                                        *(int *)((longlong)puVar61 + 0x95c),
                                        *(int *)(puVar61 + 0x12a) + *(int *)(puVar61 + 300) * 2 +
                                        *(int *)(puVar61 + 299));
                  if (((uint)local_2c08 < 6) && ((*(uint *)(puVar61 + 0x132) & 0x20) != 0)) {
                    lVar67 = puVar61[0x138];
                    uVar52 = (ulonglong)(((uint)local_2c08 & 7) << 7);
                    dVar74 = *(double *)(lVar67 + uVar52);
                    dVar78 = *(double *)(lVar67 + 0x10 + uVar52);
                    pdVar39 = (double *)(lVar67 + 8 + uVar52);
                    dVar73 = *pdVar39;
                    dVar4 = *pdVar39;
                    pdVar39 = (double *)(lVar67 + 0x18 + uVar52);
                    dVar5 = *pdVar39;
                    dVar6 = *pdVar39;
                    local_358 = dVar5 * 0.0 + dVar78 * -1.0 + dVar73 * 0.0 + dVar74 * 0.0;
                    dStack_350 = dVar6 * 1.0 + dVar78 * 0.0 + dVar4 * 0.0 + dVar74 * 0.0;
                    dVar7 = *(double *)(lVar67 + 0x20 + uVar52);
                    pdVar39 = (double *)(lVar67 + 0x28 + uVar52);
                    dVar8 = *pdVar39;
                    dVar9 = *pdVar39;
                    dVar10 = *(double *)(lVar67 + 0x30 + uVar52);
                    pdVar39 = (double *)(lVar67 + 0x38 + uVar52);
                    dVar11 = *pdVar39;
                    dVar72 = *pdVar39;
                    dVar16 = dVar72 * 0.0 + dVar10 * 0.0 + dVar9 * 1.0 + dVar7 * 0.0;
                    dVar15 = dVar72 * 1.0 + dVar10 * 0.0 + dVar9 * 0.0 + dVar7 * 0.0;
                    dVar9 = *(double *)(lVar67 + 0x40 + uVar52);
                    pdVar39 = (double *)(lVar67 + 0x48 + uVar52);
                    dVar72 = *pdVar39;
                    dVar76 = *pdVar39;
                    dVar77 = *(double *)(lVar67 + 0x50 + uVar52);
                    pdVar39 = (double *)(lVar67 + 0x58 + uVar52);
                    dVar79 = *pdVar39;
                    dVar80 = *pdVar39;
                    dVar19 = dVar80 * 0.0 + dVar77 * 0.0 + dVar76 * 1.0 + dVar9 * 0.0;
                    dVar18 = dVar80 * 1.0 + dVar77 * 0.0 + dVar76 * 0.0 + dVar9 * 0.0;
                    dVar76 = *(double *)(lVar67 + 0x60 + uVar52);
                    pdVar39 = (double *)(lVar67 + 0x68 + uVar52);
                    dVar80 = *pdVar39;
                    dVar81 = *pdVar39;
                    dVar86 = *(double *)(lVar67 + 0x70 + uVar52);
                    pdVar39 = (double *)(lVar67 + 0x78 + uVar52);
                    dVar88 = *pdVar39;
                    dVar12 = *pdVar39;
                    dVar20 = dVar12 * 0.0 + dVar86 * 0.0 + dVar81 * 1.0 + dVar76 * 0.0;
                    local_2f8 = dVar88 * 0.0 + dVar86 * -1.0 + dVar80 * 0.0 + dVar76 * 0.0;
                    dStack_2f0 = dVar12 * 1.0 + dVar86 * 0.0 + dVar81 * 0.0 + dVar76 * 0.0;
                    local_368._8_8_ = dVar6 * 0.0 + dVar78 * 0.0 + dVar4 * 1.0 + dVar74 * 0.0;
                    local_368._0_8_ = dVar5 * 0.0 + dVar78 * 0.0 + dVar73 * 0.0 + dVar74 * 1.0;
                    local_348._8_4_ = SUB84(dVar16,0);
                    local_348._0_8_ = dVar11 * 0.0 + dVar10 * 0.0 + dVar8 * 0.0 + dVar7 * 1.0;
                    local_348._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
                    local_338._8_4_ = SUB84(dVar15,0);
                    local_338._0_8_ = dVar11 * 0.0 + dVar10 * -1.0 + dVar8 * 0.0 + dVar7 * 0.0;
                    local_338._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                    local_328._8_4_ = SUB84(dVar19,0);
                    local_328._0_8_ = dVar79 * 0.0 + dVar77 * 0.0 + dVar72 * 0.0 + dVar9 * 1.0;
                    local_328._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
                    local_318._8_4_ = SUB84(dVar18,0);
                    local_318._0_8_ = dVar79 * 0.0 + dVar77 * -1.0 + dVar72 * 0.0 + dVar9 * 0.0;
                    local_318._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                    local_308._8_4_ = SUB84(dVar20,0);
                    local_308._0_8_ = dVar88 * 0.0 + dVar86 * 0.0 + dVar80 * 0.0 + dVar76 * 1.0;
                    local_308._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
                    lVar67 = 0x9d0;
                  }
                  else {
                    puVar53 = local_2a70;
                    puVar56 = (undefined8 *)local_368;
                    for (lVar67 = 0x10; lVar67 != 0; lVar67 = lVar67 + -1) {
                      *puVar56 = *puVar53;
                      puVar53 = puVar53 + 1;
                      puVar56 = puVar56 + 1;
                    }
                    lVar67 = 0x160;
                  }
                  puVar53 = (undefined8 *)(lVar67 + (longlong)puVar61);
                  puVar56 = local_2e8;
                  for (lVar55 = 0x10; lVar55 != 0; lVar55 = lVar55 + -1) {
                    *puVar56 = *puVar53;
                    puVar53 = puVar53 + 1;
                    puVar56 = puVar56 + 1;
                  }
                  FUN_1447717da(&local_2a08,local_368);
                  dVar73 = (double)CONCAT62(uStack_2676,local_2678);
                  dVar74 = dVar73 * local_22c0 +
                           local_2698 * local_22c8 +
                           local_26c8[2] * local_22d0 + local_26d8 * local_22d8;
                  dVar78 = dStack_2670 * local_22c0 +
                           dStack_2690 * local_22c8 +
                           local_26c8[3] * local_22d0 + dStack_26d0 * local_22d8;
                  dVar8 = local_22c0 * local_2668 +
                          local_22c8 * local_2688 +
                          local_22d0 * local_26a8 + local_22d8 * local_26c8[0];
                  dVar11 = local_22c0 * dStack_2660 +
                           local_22c8 * dStack_2680 +
                           local_22d0 * dStack_26a0 + local_22d8 * local_26c8[1];
                  dVar80 = dVar73 * local_22a0 +
                           local_2698 * local_22a8 +
                           local_26c8[2] * local_22b0 + local_26d8 * local_22b8;
                  dVar81 = dStack_2670 * local_22a0 +
                           dStack_2690 * local_22a8 +
                           local_26c8[3] * local_22b0 + dStack_26d0 * local_22b8;
                  dVar5 = local_22a0 * local_2668 +
                          local_22a8 * local_2688 +
                          local_22b0 * local_26a8 + local_22b8 * local_26c8[0];
                  dVar6 = local_22a0 * dStack_2660 +
                          local_22a8 * dStack_2680 +
                          local_22b0 * dStack_26a0 + local_22b8 * local_26c8[1];
                  local_2ba0 = CONCAT44(local_2ba0._4_4_,(float)local_26d8);
                  dVar77 = dVar73 * local_2280 +
                           local_2698 * local_2288 +
                           local_26c8[2] * local_2290 + local_26d8 * local_2298;
                  dVar79 = dStack_2670 * local_2280 +
                           dStack_2690 * local_2288 +
                           local_26c8[3] * local_2290 + dStack_26d0 * local_2298;
                  dVar7 = local_2280 * local_2668 +
                          local_2288 * local_2688 +
                          local_2290 * local_26a8 + local_2298 * local_26c8[0];
                  dVar9 = local_2280 * dStack_2660 +
                          local_2288 * dStack_2680 +
                          local_2290 * dStack_26a0 + local_2298 * local_26c8[1];
                  local_2ba8 = (undefined8 *)CONCAT44(local_2ba8._4_4_,(float)dStack_26d0);
                  local_2aec = (float)local_26c8[0];
                  dVar72 = dVar73 * local_2260 +
                           local_2698 * local_2268 +
                           local_26c8[2] * local_2270 + local_26d8 * local_2278;
                  dVar76 = dStack_2670 * local_2260 +
                           dStack_2690 * local_2268 +
                           local_26c8[3] * local_2270 + dStack_26d0 * local_2278;
                  dVar73 = local_2668 * local_2260 +
                           local_2688 * local_2268 +
                           local_26a8 * local_2270 + local_26c8[0] * local_2278;
                  dVar4 = dStack_2660 * local_2260 +
                          dStack_2680 * local_2268 +
                          dStack_26a0 * local_2270 + local_26c8[1] * local_2278;
                  auVar17._8_4_ = SUB84(dVar4,0);
                  auVar17._0_8_ = dVar73;
                  auVar17._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                  local_368._0_8_ = dVar11 * 0.5 + dVar8 * 0.0 + dVar78 * 0.0 + dVar74 * 0.5;
                  dVar10 = dVar11 * 0.5 + dVar8 * 0.0 + dVar78 * -0.5 + dVar74 * 0.0;
                  local_328._0_8_ = dVar11 * 0.0 + dVar8 * 1.0 + dVar78 * 0.0 + dVar74 * 0.0;
                  dVar11 = dVar11 * 1.0 + dVar8 * 0.0 + dVar78 * 0.0 + dVar74 * 0.0;
                  dVar86 = dVar6 * 0.5 + dVar5 * 0.0 + dVar81 * 0.0 + dVar80 * 0.5;
                  dVar88 = dVar6 * 0.5 + dVar5 * 0.0 + dVar81 * -0.5 + dVar80 * 0.0;
                  local_328._8_8_ = dVar6 * 0.0 + dVar5 * 1.0 + dVar81 * 0.0 + dVar80 * 0.0;
                  dVar74 = dVar6 * 1.0 + dVar5 * 0.0 + dVar81 * 0.0 + dVar80 * 0.0;
                  uVar34 = SUB84(dVar74,0);
                  uVar82 = (undefined4)((ulonglong)dVar74 >> 0x20);
                  local_2bd8 = (double)puVar61[9];
                  dVar5 = dVar9 * 0.5 + dVar7 * 0.0 + dVar79 * 0.0 + dVar77 * 0.5;
                  dVar6 = dVar9 * 0.5 + dVar7 * 0.0 + dVar79 * -0.5 + dVar77 * 0.0;
                  dVar8 = dVar9 * 0.0 + dVar7 * 1.0 + dVar79 * 0.0 + dVar77 * 0.0;
                  dVar7 = dVar9 * 1.0 + dVar7 * 0.0 + dVar79 * 0.0 + dVar77 * 0.0;
                  local_2be0 = (double)puVar61[10];
                  dStack_2c60 = auVar17._8_8_;
                  dVar78 = dStack_2c60 * 0.5 + dVar73 * 0.0 + dVar76 * 0.0 + dVar72 * 0.5;
                  dVar4 = dStack_2c60 * 0.5 + dVar73 * 0.0 + dVar76 * -0.5 + dVar72 * 0.0;
                  local_2af0 = (float)local_26c8[1];
                  dVar74 = (double)puVar61[0xb];
                  local_318._8_8_ = dStack_2c60 * 0.0 + dVar73 * 1.0 + dVar76 * 0.0 + dVar72 * 0.0;
                  dStack_2f0 = dStack_2c60 * 1.0 + dVar73 * 0.0 + dVar76 * 0.0 + dVar72 * 0.0;
                  local_368._8_8_ = dVar86;
                  local_348._8_8_ = dVar88;
                  local_348._0_8_ = dVar10;
                  local_338._8_8_ = dVar4;
                  local_338._0_8_ = dVar6;
                  local_318._0_8_ = dVar8;
                  local_2af4 = (float)local_26c8[2];
                  local_2c18._8_4_ = SUB84(dVar11,0);
                  local_2c18._0_8_ = local_328._0_8_;
                  local_2c18._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                  local_2c28._8_4_ = uVar34;
                  local_2c28._0_8_ = local_328._8_8_;
                  local_2c28._12_4_ = uVar82;
                  local_2af8 = (float)local_26c8[3];
                  local_308._8_4_ = uVar34;
                  local_308._0_8_ = dVar11;
                  local_308._12_4_ = uVar82;
                  local_2afc = (float)local_26a8;
                  local_2b00 = (float)dStack_26a0;
                  unique0x10000e17 = SUB84(dStack_2f0,0);
                  local_2c68 = (undefined1  [8])local_318._8_8_;
                  unique0x10000e1b = (int)((ulonglong)dStack_2f0 >> 0x20);
                  local_2b04 = (float)local_2698;
                  local_2b08 = (float)dStack_2690;
                  local_2b0c = (float)local_2688;
                  local_2ab8._8_4_ = SUB84(dVar10,0);
                  local_2ab8._0_8_ = local_368._0_8_;
                  local_2ab8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                  local_2b10 = (float)dStack_2680;
                  local_2b14 = (float)(double)CONCAT62(uStack_2676,local_2678);
                  local_2b18 = (float)dStack_2670;
                  local_2b1c = (float)local_2668;
                  local_2b20 = (float)dStack_2660;
                  local_358 = dVar5;
                  dStack_350 = dVar78;
                  local_2f8 = dVar7;
                  if (((9.99999993922529e-09 < ABS((double)local_368._0_8_)) ||
                      (9.99999993922529e-09 < ABS(dVar86))) ||
                     ((9.99999993922529e-09 < ABS(dVar5) ||
                      (((((9.99999993922529e-09 < ABS(dVar10) ||
                          (9.99999993922529e-09 < ABS(dVar88))) ||
                         (9.99999993922529e-09 < ABS(dVar6))) ||
                        ((9.99999993922529e-09 < ABS((double)local_328._0_8_) ||
                         (9.99999993922529e-09 < ABS((double)local_328._8_8_))))) ||
                       (9.99999993922529e-09 < ABS(dVar8))))))) {
                    FUN_14007522e(&local_3e8,local_368);
                  }
                  else {
                    puVar53 = &DAT_14c846400;
                    pbVar57 = &local_3e8;
                    for (lVar67 = 0x10; lVar67 != 0; lVar67 = lVar67 + -1) {
                      *(undefined8 *)pbVar57 = *puVar53;
                      puVar53 = puVar53 + 1;
                      pbVar57 = pbVar57 + 8;
                    }
                  }
                  uVar52 = local_2ac8;
                  dVar73 = (double)CONCAT71(uStack_3e7,local_3e8);
                  local_2b24 = (float)local_3e0;
                  local_2b28 = (float)local_3d8;
                  local_2b2c = (float)local_3d0;
                  local_2b30 = (float)local_3c8;
                  local_2b34 = (float)local_3c0;
                  local_2b38 = (float)local_3b8;
                  local_2b3c = (float)local_3b0;
                  local_2b40 = (float)local_3a8;
                  local_2b44 = (float)local_3a0;
                  local_2b48 = (float)local_398;
                  local_2b4c = (float)local_390;
                  local_2b50 = (float)local_388;
                  local_2b54 = (float)local_380;
                  local_2b58 = (float)local_378;
                  local_2b5c = (float)local_370;
                  plVar51 = *(longlong **)(puVar61[0x16c] + 0x28);
                  bVar13 = *(byte *)(plVar51 + 0x3d);
                  lVar67 = *plVar51;
                  pcVar14 = *(code **)(lVar67 + 0x28);
                  uVar34 = SUB84(local_2bd8,0);
                  uVar82 = (undefined4)((ulonglong)local_2bd8 >> 0x20);
                  uVar83 = SUB84(local_2be0,0);
                  uVar84 = (undefined4)((ulonglong)local_2be0 >> 0x20);
                  local_2a98._8_4_ = SUB84(dVar88,0);
                  local_2a98._0_8_ = dVar88;
                  local_2a98._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
                  local_2aa8._8_4_ = SUB84(dVar6,0);
                  local_2aa8._0_8_ = dVar6;
                  local_2aa8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                  local_2a88 = dVar86;
                  dStack_2a80 = dVar88;
                  if (pcVar14 == (code *)&LAB_144b21d1a) {
                    local_2bec = *(undefined4 *)((longlong)plVar51 + 0x2b4);
                  }
                  else if (pcVar14 == (code *)&LAB_144b218bc) {
                    local_2bec = 0;
                  }
                  else {
                    local_2bec = (*pcVar14)();
                    uVar83 = SUB84(local_2be0,0);
                    uVar84 = (undefined4)((ulonglong)local_2be0 >> 0x20);
                    uVar34 = SUB84(local_2bd8,0);
                    uVar82 = (undefined4)((ulonglong)local_2bd8 >> 0x20);
                    plVar51 = *(longlong **)(puVar61[0x16c] + 0x28);
                    lVar67 = *plVar51;
                  }
                  local_2b60 = (float)(double)CONCAT44(uVar82,uVar34);
                  local_2b64 = (float)(double)CONCAT44(uVar84,uVar83);
                  local_2b68 = (float)dVar74;
                  dVar72 = (double)local_2b68;
                  dVar6 = (double)CONCAT44(uVar82,uVar34) - (double)local_2b60;
                  dVar9 = (double)CONCAT44(uVar84,uVar83) - (double)local_2b64;
                  uVar28 = local_2c18._8_8_;
                  uVar27 = local_2c28._8_8_;
                  dVar11 = dStack_2c60;
                  if (*(code **)(lVar67 + 0x18) == (code *)&LAB_144774e28) {
                    uVar34 = (undefined4)plVar51[0x53];
                    fVar90 = (float)dVar73;
                    dVar73 = (double)local_2c18._0_8_;
                  }
                  else {
                    local_2bf0 = (float)dVar73;
                    local_2be0 = dVar9;
                    local_2bd8 = dVar6;
                    uVar34 = (**(code **)(lVar67 + 0x18))();
                    plVar51 = *(longlong **)(puVar61[0x16c] + 0x28);
                    fVar90 = local_2bf0;
                    dVar6 = local_2bd8;
                    dVar9 = local_2be0;
                    dVar73 = (double)local_2c18._0_8_;
                  }
                  local_2c18._0_4_ = (float)(dVar74 - dVar72);
                  fVar71 = (float)(double)local_2ab8._0_8_;
                  local_2ab8._0_4_ = fVar71;
                  local_2bd8 = (double)CONCAT44(local_2bd8._4_4_,(float)dVar10);
                  local_2be0 = (double)CONCAT44(local_2be0._4_4_,(float)dVar73);
                  local_2bf0 = (float)(double)uVar28;
                  fVar69 = (float)local_2a88;
                  local_2a88 = (double)CONCAT44(local_2a88._4_4_,(float)(double)local_2a98._0_8_);
                  fVar93 = (float)(double)local_2c28._0_8_;
                  local_2c28._0_4_ = (float)(double)uVar27;
                  local_2a98._0_4_ = (float)(double)local_2aa8._0_8_;
                  local_2aa8._0_4_ = (float)dVar7;
                  local_2b6c = (float)dVar4;
                  fVar71 = (float)(double)local_2c68;
                  local_2c68._0_4_ = (float)dVar11;
                  uVar82 = *(undefined4 *)((longlong)plVar51 + 0x1fc);
                  if (plVar42 != (longlong *)0x0) {
                    LOCK();
                    plVar51 = plVar42 + 1;
                    *(int *)plVar51 = (int)*plVar51 + -1;
                    UNLOCK();
                    if ((int)*plVar51 == 0) {
                      local_2bc8 = uVar82;
                      (**(code **)*plVar42)(plVar42);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar42 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      uVar82 = local_2bc8;
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar42 + 0x10))(plVar42);
                        uVar82 = local_2bc8;
                      }
                    }
                  }
                  *(undefined4 *)((longlong)pvVar3 + 0x1790) = (undefined4)local_2ba0;
                  *(undefined4 *)((longlong)pvVar3 + 0x1794) = local_2ba8._0_4_;
                  *(float *)((longlong)pvVar3 + 0x1798) = local_2aec;
                  *(float *)((longlong)pvVar3 + 0x179c) = local_2af0;
                  *(float *)((longlong)pvVar3 + 0x17a0) = local_2af4;
                  *(float *)((longlong)pvVar3 + 0x17a4) = local_2af8;
                  *(float *)((longlong)pvVar3 + 0x17a8) = local_2afc;
                  *(float *)((longlong)pvVar3 + 0x17ac) = local_2b00;
                  *(float *)((longlong)pvVar3 + 0x17b0) = local_2b04;
                  *(float *)((longlong)pvVar3 + 0x17b4) = local_2b08;
                  *(float *)((longlong)pvVar3 + 0x17b8) = local_2b0c;
                  *(float *)((longlong)pvVar3 + 0x17bc) = local_2b10;
                  *(float *)((longlong)pvVar3 + 0x17c0) = local_2b14;
                  *(float *)((longlong)pvVar3 + 0x17c4) = local_2b18;
                  *(float *)((longlong)pvVar3 + 0x17c8) = local_2b1c;
                  *(float *)((longlong)pvVar3 + 0x17cc) = local_2b20;
                  *(undefined4 *)((longlong)pvVar3 + 0x17d0) = local_2ab8._0_4_;
                  *(undefined4 *)((longlong)pvVar3 + 0x17d4) = local_2bd8._0_4_;
                  *(undefined4 *)((longlong)pvVar3 + 0x17d8) = local_2be0._0_4_;
                  *(float *)((longlong)pvVar3 + 0x17dc) = local_2bf0;
                  *(float *)((longlong)pvVar3 + 0x17e0) = fVar69;
                  *(undefined4 *)((longlong)pvVar3 + 0x17e4) = local_2a88._0_4_;
                  *(float *)((longlong)pvVar3 + 0x17e8) = fVar93;
                  *(undefined4 *)((longlong)pvVar3 + 0x17ec) = local_2c28._0_4_;
                  *(float *)((longlong)pvVar3 + 0x17f0) = (float)dVar5;
                  *(undefined4 *)((longlong)pvVar3 + 0x17f4) = local_2a98._0_4_;
                  *(float *)((longlong)pvVar3 + 0x17f8) = (float)dVar8;
                  *(undefined4 *)((longlong)pvVar3 + 0x17fc) = local_2aa8._0_4_;
                  *(float *)((longlong)pvVar3 + 0x1800) = (float)dVar78;
                  *(float *)((longlong)pvVar3 + 0x1804) = local_2b6c;
                  *(float *)((longlong)pvVar3 + 0x1808) = fVar71;
                  *(undefined4 *)((longlong)pvVar3 + 0x180c) = local_2c68._0_4_;
                  *(float *)((longlong)pvVar3 + 0x1810) = fVar90;
                  *(float *)((longlong)pvVar3 + 0x1814) = local_2b24;
                  *(float *)((longlong)pvVar3 + 0x1818) = local_2b28;
                  *(float *)((longlong)pvVar3 + 0x181c) = local_2b2c;
                  *(float *)((longlong)pvVar3 + 0x1820) = local_2b30;
                  *(float *)((longlong)pvVar3 + 0x1824) = local_2b34;
                  *(float *)((longlong)pvVar3 + 0x1828) = local_2b38;
                  *(float *)((longlong)pvVar3 + 0x182c) = local_2b3c;
                  *(float *)((longlong)pvVar3 + 0x1830) = local_2b40;
                  *(float *)((longlong)pvVar3 + 0x1834) = local_2b44;
                  *(float *)((longlong)pvVar3 + 0x1838) = local_2b48;
                  *(float *)((longlong)pvVar3 + 0x183c) = local_2b4c;
                  *(float *)((longlong)pvVar3 + 0x1840) = local_2b50;
                  *(float *)((longlong)pvVar3 + 0x1844) = local_2b54;
                  *(float *)((longlong)pvVar3 + 0x1848) = local_2b58;
                  *(float *)((longlong)pvVar3 + 0x184c) = local_2b5c;
                  *(undefined8 *)((longlong)pvVar3 + 0x1850) = 0;
                  *(undefined4 *)((longlong)pvVar3 + 0x1858) = 0;
                  *(uint *)((longlong)pvVar3 + 0x185c) = (uint)bVar13;
                  *(float *)((longlong)pvVar3 + 0x1860) = local_2b60;
                  *(float *)((longlong)pvVar3 + 0x1864) = local_2b64;
                  *(float *)((longlong)pvVar3 + 0x1868) = local_2b68;
                  *(undefined4 *)((longlong)pvVar3 + 0x186c) = uVar34;
                  *(float *)((longlong)pvVar3 + 0x1870) = (float)dVar6;
                  *(float *)((longlong)pvVar3 + 0x1874) = (float)dVar9;
                  *(undefined4 *)((longlong)pvVar3 + 0x1878) = local_2c18._0_4_;
                  *(float *)((longlong)pvVar3 + 0x187c) = local_2b70;
                  *(undefined4 *)((longlong)pvVar3 + 0x1888) = (undefined4)uStack_2a00;
                  *(LARGE_INTEGER *)((longlong)pvVar3 + 0x1880) = local_2a08;
                  *(undefined4 *)((longlong)pvVar3 + 0x188c) = local_2bec;
                  *(undefined8 *)((longlong)pvVar3 + 0x1890) = 0;
                  *(undefined8 *)((longlong)pvVar3 + 0x1898) = 0xffffffff7fffffff;
                  *(uint *)((longlong)pvVar3 + 0x18a0) = (uint)bVar30 * 2;
                  *(undefined4 *)((longlong)pvVar3 + 0x18a4) = 0;
                  *(undefined4 *)((longlong)pvVar3 + 0x18a8) = uVar82;
                  *(int *)((longlong)pvVar3 + 0x18ac) = (int)local_2bb8;
                  uVar50 = local_2c08 + 1;
                  fVar69 = (float)local_2c48._0_4_;
                } while (uVar50 != local_2a50);
                lVar67 = *(longlong *)(local_2c80 + 0x40);
                lVar55 = *(longlong *)(local_2c30 + 0x28);
                lVar63 = **(longlong **)(lVar67 + 0xa0);
                uVar52 = (ulonglong)
                         *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar63 + 0x3090) * 2);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca97070) &&
                   (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
                  if (DAT_14c8407a8 == (longlong *)0x0) {
                    FUN_1414b00ea();
                  }
                  plVar42 = (longlong *)
                            (**(code **)(*DAT_14c8407a8 + 200))
                                      (DAT_14c8407a8,L"r.Raytracing.Enable",1);
                  if (plVar42 == (longlong *)0x0) {
                    DAT_14ca97068 = 0;
                  }
                  else {
                    DAT_14ca97068 = (**(code **)(*plVar42 + 0x68))(plVar42);
                  }
                  _Init_thread_footer(&DAT_14ca97070);
                  puVar61 = local_2c78;
                  fVar69 = (float)local_2c48._0_4_;
                }
                uVar50 = DAT_14ca97068;
                bVar68 = true;
                cVar29 = DAT_14ca96da8;
                if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
                  iVar35 = *local_2be8;
                  if (iVar35 == 0x40000002) {
                    cVar29 = '\x02';
                    uVar47 = 0;
                  }
                  else {
                    bVar68 = true;
                    cVar29 = '\x02';
                    if ((DAT_14c86a9f8 == 1) && (iVar35 != 2)) {
                      if (iVar35 == 1) {
                        DVar36 = FUN_140ad26c0();
                        DVar37 = GetCurrentThreadId();
                        bVar68 = DVar36 == DVar37;
                        cVar29 = DAT_14ca96da8;
                      }
                      else {
                        bVar68 = false;
                      }
                    }
                    uVar47 = (ulonglong)(bVar68 ^ 1);
                  }
                  bVar68 = *(int *)(uVar50 + uVar47 * 4) != 0;
                  puVar61 = local_2c78;
                  fVar69 = (float)local_2c48._0_4_;
                }
                auVar26 = stack0xffffffffffffd39c;
                if (bVar68) {
                  auVar23._12_4_ = 0;
                  auVar23._0_12_ = stack0xffffffffffffd39c;
                  _local_2c68 = auVar23 << 0x20;
                  if (cVar29 != '\0') {
                    if ((((*(byte *)((longlong)&DAT_14ca814c8 + uVar52 * 0x3c + 2) & 0x40) == 0) ||
                        (((uVar52 != 0x30 && ((int)(&DAT_14ca814b8)[uVar52 * 0xf] < 4)) ||
                         (*(char *)(lVar63 + 0x3098) != '\x01')))) ||
                       ((*(char *)(lVar63 + 0x23e8) == '\x01' &&
                        (*(char *)(lVar63 + 0x23ea) != '\x01')))) {
                      auVar25._12_4_ = 0;
                      auVar25._0_12_ = auVar26;
                      _local_2c68 = auVar25 << 0x20;
                    }
                    else {
                      uVar34 = FUN_142bc01ba(&DAT_14ca81401,3);
                      local_2c68._0_4_ = uVar34;
                    }
                    puVar61 = local_2c78;
                    fVar69 = (float)local_2c48._0_4_;
                  }
                }
                else {
                  auVar24._12_4_ = 0;
                  auVar24._0_12_ = stack0xffffffffffffd39c;
                  _local_2c68 = auVar24 << 0x20;
                }
                if (*(char *)(lVar55 + 0x1d2) == '\x02') {
LAB_1430782c8:
                  bVar68 = true;
                  if ((ulonglong)*(byte *)(lVar55 + 0x1e8) < 4) {
                    bVar68 = *(int *)(*(longlong *)(&PTR_DAT_14a309f88)[*(byte *)(lVar55 + 0x1e8)] +
                                     4) != 0;
                  }
                  bVar30 = local_2c68[0] & bVar68;
                  puVar61 = local_2c78;
                  fVar69 = (float)local_2c48._0_4_;
                }
                else {
                  if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
                    uVar34 = 0;
                  }
                  else {
                    uVar34 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
                  }
                  lVar63 = DAT_14cae3fc8;
                  if (DAT_14cae3fd0 < 1) {
LAB_143077b2d:
                    in_R11 = 0;
                  }
                  else {
                    iVar35 = *local_2be8;
                    if (((iVar35 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar35 == 2)) {
                      uVar52 = 0;
                    }
                    else if (iVar35 == 1) {
                      uVar64 = FUN_140ad26c0();
                      uVar50 = (ulonglong)uVar64;
                      DVar36 = GetCurrentThreadId();
                      uVar52 = (ulonglong)(uVar64 != DVar36);
                    }
                    else {
                      uVar52 = 1;
                    }
                    piVar1 = DAT_14c9d2390;
                    if (*(int *)(lVar63 + uVar52 * 4) < 1) goto LAB_143077b2d;
                    iVar35 = *local_2be8;
                    if (iVar35 == 0x40000002) {
                      iVar66 = *DAT_14c9d2390;
                    }
                    else {
                      if (DAT_14c86a9f8 == 0) {
                        iVar66 = *DAT_14c9d2390;
                      }
                      else if (iVar35 == 2) {
                        iVar66 = *DAT_14c9d2390;
                        iVar35 = 2;
                      }
                      else {
                        uVar52 = 1;
                        if (iVar35 == 1) {
                          uVar64 = FUN_140ad26c0();
                          uVar50 = (ulonglong)uVar64;
                          DVar36 = GetCurrentThreadId();
                          uVar52 = (ulonglong)(uVar64 != DVar36);
                          iVar35 = *local_2be8;
                        }
                        iVar66 = piVar1[uVar52];
                        if (iVar35 == 0x40000002) goto LAB_143077425;
                      }
                      if ((DAT_14c86a9f8 & 1) == 0) {
LAB_143077417:
                        if ((iVar35 == 1) && ((DAT_14c86a9f8 & 1) != 0)) {
                          FUN_140ad26c0();
                          GetCurrentThreadId();
                        }
                      }
                      else if (iVar35 != 2) {
                        if (iVar35 == 1) {
                          FUN_140ad26c0();
                          GetCurrentThreadId();
                          iVar35 = *local_2be8;
                        }
                        if (iVar35 != 0x40000002) goto LAB_143077417;
                      }
                    }
LAB_143077425:
                    in_R11 = CONCAT71((int7)(in_R11 >> 8),0 < iVar66);
                  }
                  iVar35 = *(int *)(DAT_14c9e93c8 + 4);
                  lVar63 = **(longlong **)(lVar67 + 0xa0);
                  uVar52 = (ulonglong)
                           *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar63 + 0x3090) * 2);
                  if (*(int *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x110) < DAT_14ca97070) {
                    local_2c28._0_4_ = uVar34;
                    local_2c08 = CONCAT44(local_2c08._4_4_,(int)in_R11);
                    FUN_144b3d300(&DAT_14ca97070);
                    in_R11 = local_2c08 & 0xffffffff;
                    uVar34 = local_2c28._0_4_;
                    if (DAT_14ca97070 == -1) {
                      if (DAT_14c8407a8 == (longlong *)0x0) {
                        FUN_1414b00ea();
                      }
                      plVar42 = (longlong *)
                                (**(code **)(*DAT_14c8407a8 + 200))
                                          (DAT_14c8407a8,L"r.Raytracing.Enable",1);
                      if (plVar42 == (longlong *)0x0) {
                        DAT_14ca97068 = 0;
                      }
                      else {
                        DAT_14ca97068 = (**(code **)(*plVar42 + 0x68))(plVar42);
                      }
                      _Init_thread_footer(&DAT_14ca97070);
                      in_R11 = local_2c08 & 0xffffffff;
                      puVar61 = local_2c78;
                      fVar69 = (float)local_2c48._0_4_;
                      uVar34 = local_2c28._0_4_;
                    }
                  }
                  uVar47 = DAT_14ca97068;
                  bVar68 = true;
                  cVar29 = DAT_14ca96da8;
                  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
                    local_2c08 = CONCAT44(local_2c08._4_4_,(int)in_R11);
                    local_2c28._0_4_ = uVar34;
                    local_2c18._0_8_ = lVar55;
                    iVar66 = *local_2be8;
                    if (iVar66 == 0x40000002) {
                      cVar29 = '\x02';
                      uVar48 = 0;
                    }
                    else {
                      bVar68 = true;
                      cVar29 = '\x02';
                      if ((DAT_14c86a9f8 == 1) && (iVar66 != 2)) {
                        if (iVar66 == 1) {
                          DVar36 = FUN_140ad26c0();
                          DVar37 = GetCurrentThreadId();
                          bVar68 = DVar36 == DVar37;
                          cVar29 = DAT_14ca96da8;
                        }
                        else {
                          bVar68 = false;
                        }
                      }
                      uVar48 = (ulonglong)(bVar68 ^ 1);
                    }
                    bVar68 = *(int *)(uVar47 + uVar48 * 4) != 0;
                    in_R11 = local_2c08 & 0xffffffff;
                    lVar55 = local_2c18._0_8_;
                    puVar61 = local_2c78;
                    fVar69 = (float)local_2c48._0_4_;
                    uVar34 = local_2c28._0_4_;
                  }
                  bVar30 = 0;
                  if ((bVar68) && (bVar30 = 0, cVar29 != '\0')) {
                    local_2c18._0_8_ = lVar55;
                    if ((((*(byte *)((longlong)&DAT_14ca814c8 + uVar52 * 0x3c + 2) & 0x40) != 0) &&
                        (((uVar52 == 0x30 || (3 < (int)(&DAT_14ca814b8)[uVar52 * 0xf])) &&
                         (*(char *)(lVar63 + 0x3098) == '\x01')))) &&
                       ((*(char *)(lVar63 + 0x23e8) != '\x01' ||
                        (*(char *)(lVar63 + 0x23ea) == '\x01')))) {
                      cVar29 = FUN_142bc01ba(CONCAT71((int7)(uVar50 >> 8),
                                                      0 < iVar35 & ((byte)uVar34 & (byte)in_R11 ^ 1)
                                                     ) & 0xffffffff,3);
                      bVar30 = 0;
                      if (cVar29 != '\0') {
                        lVar55 = local_2c18._0_8_;
                        puVar61 = local_2c78;
                        fVar69 = (float)local_2c48._0_4_;
                        if (*(char *)(local_2c18._0_8_ + 0x1d2) == '\x01') goto LAB_1430782c8;
                        goto LAB_1430774b3;
                      }
                    }
                    bVar30 = 0;
                    lVar55 = local_2c18._0_8_;
                    puVar61 = local_2c78;
                    fVar69 = (float)local_2c48._0_4_;
                  }
                }
LAB_1430774b3:
                if (((*(char *)(lVar55 + 0x1e8) == '\0') ||
                    ((*(byte *)(**(longlong **)(lVar67 + 0xa0) + 0x2954) & 1) == 0)) ||
                   ((*(int *)(DAT_14ca046e8 + 4) == 0 || (-1 < *(int *)(lVar67 + 0xe4))))) {
LAB_1430774d4:
                  if (bVar30 == 0) {
LAB_1430774d9:
                    *(undefined1 *)(local_2c80 + 0x90) = 1;
                  }
                }
                else {
                  lVar63 = lVar67 + 0x98;
                  bVar13 = *(byte *)(lVar55 + 0x1d4);
                  cVar29 = *(char *)(lVar55 + 0x1d5);
                  iVar35 = FUN_144b28750(lVar63);
                  if (((int)(&DAT_14ca814b8)
                            [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar35 * 2) * 0xf] <
                       4) || (((&DAT_14ca814cd)
                               [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar35 * 2) * 0x3c
                               ] & 3) == 0)) goto LAB_1430774d4;
                  cVar32 = FUN_1472390ef(lVar63);
                  cVar33 = '\x01';
                  if (cVar32 == '\0') {
                    cVar33 = FUN_1472390cb(lVar63);
                  }
                  puVar61 = local_2c78;
                  fVar69 = (float)local_2c48._0_4_;
                  if (((bVar13 & 2) == 0) || (cVar33 == '\0')) goto LAB_1430774d4;
                  bVar68 = cVar29 == '\x02';
                  if (cVar29 == '\0') {
                    bVar68 = DAT_14ca04a20 == 1;
                  }
                  if (!bVar68) {
                    lVar67 = **(longlong **)(lVar67 + 0xa0);
                    if (*(char *)(lVar67 + 0x3098) != '\x01') goto LAB_1430774d4;
                    if ((*(char *)(lVar67 + 0x23e8) != '\x01') ||
                       (bVar30 != 0 || (*(byte *)(lVar67 + 0x23ea) & 1) != 0)) goto LAB_1430774e1;
                    goto LAB_1430774d9;
                  }
                  *(undefined1 *)(local_2c80 + 0x91) = 1;
                }
LAB_1430774e1:
                *(byte *)(puVar61 + 0x132) = *(byte *)(puVar61 + 0x132) | 0x40;
                *(undefined1 *)((longlong)puVar61 + 0x994) = 2;
                uVar31 = FUN_144ab6403(*(undefined2 *)
                                        (&DAT_14ca85070 +
                                        (longlong)*(int *)(*(longlong *)(local_2b88 + 8) + 8) * 2));
                plVar42 = local_2ac0;
                param_3 = local_2c30;
                local_368[0] = uVar31;
                if ((*(byte *)((longlong)puVar61 + 0x992) & 4) != 0) {
                  local_1a08 = (LARGE_INTEGER *)0x0;
                  local_19f8 = 0x800000000;
                  local_2cb0 = &local_2a38;
                  local_2cb8 = &local_2a08;
                  FUN_1430789fa(local_2a28,*(undefined8 *)(local_2c30 + 0x18),puVar61,local_368);
                  local_2cb0 = &local_2a38;
                  local_2cb8 = &local_2a08;
                  FUN_1430789fa(local_2a28,*(undefined8 *)(param_3 + 0x20),puVar61,local_368);
                  *(uint *)(puVar61 + 0x132) =
                       *(uint *)(puVar61 + 0x132) & 0xfffdffff | (uint)local_368[0] << 0x11;
                  pLVar46 = local_1a08;
                  if (local_1a08 == (LARGE_INTEGER *)0x0) {
                    pLVar46 = &local_2a08;
                  }
                  FUN_144b0f6c2(pLVar46,local_19f8 & 0xffffffff);
                  if (local_1a08 != (LARGE_INTEGER *)0x0) {
                    FUN_1400020a8();
                  }
                }
                *(undefined4 *)(plVar42 + 0xc) = *(undefined4 *)((longlong)puVar61 + 0x99c);
                iVar35 = (int)plVar42[1];
                *(uint *)(plVar42 + 1) = iVar35 + 1U;
                if (*(uint *)((longlong)plVar42 + 0xc) < iVar35 + 1U) {
                  FUN_1447417ac(plVar42,iVar35);
                }
                plVar51 = local_2a30;
                uVar52 = local_2c00;
                *(undefined8 **)(*plVar42 + (longlong)iVar35 * 8) = puVar61;
                if (local_2a30 != (longlong *)0x0) {
                  LOCK();
                  plVar42 = local_2a30 + 1;
                  *(int *)plVar42 = (int)*plVar42 + -1;
                  UNLOCK();
                  if ((int)*plVar42 == 0) {
                    (**(code **)*local_2a30)(local_2a30);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar51 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar51 + 0x10))(plVar51);
                    }
                  }
                }
                if (*(int *)(DAT_14ca5b348 + 4) == 0) goto LAB_14307769f;
              }
              lVar67 = local_2a48 + 1;
              local_2bb0 = local_2bb0 + 0x3a0;
            } while (lVar67 != local_2a68);
          }
        }
      }
      if (local_19d8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    puVar58 = local_19c8;
    if (local_408 != (undefined1 *)0x0) {
      puVar58 = local_408;
    }
    FUN_144b18a1f(puVar58,local_3f8 & 0xffffffff);
    if (local_408 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2cd8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143074716:
  iVar35 = *(int *)(lVar67 + 0x18);
  if (iVar35 == -1) goto LAB_143074720;
  goto LAB_143074701;
}



// FUNCTION 1430789fa FUN_1430789fa body=1014 status=ok
// SIG undefined FUN_1430789fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430789fa(char *param_1,longlong param_2,longlong param_3,undefined1 *param_4,
                  longlong param_5,longlong *param_6)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  double *pdVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  longlong lVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  uint unaff_EBP;
  int iVar21;
  longlong lVar22;
  double *pdVar23;
  int iVar24;
  uint in_R11D;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_128 [36];
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  do {
    if (param_2 == 0) {
      if ((local_f0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar9 = *(uint *)(param_2 + 0x34);
    if ((uVar9 & 0x81) == 1) {
      if (*param_1 == '\x01') {
        if (((uVar9 & 0x40) == 0) &&
           ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + 0x6d) & 0x40) != 0)) {
LAB_143078ad6:
          if ((uVar9 >> 9 & 1) == 0) {
            if ((*(byte *)(param_3 + 0x994) & ((uVar9 >> 10 & 1) == 0 | 2U)) != 0) {
              lVar12 = *(longlong *)(param_2 + 8);
              uVar9 = *(uint *)(param_5 + 0x1010);
              if ((ulonglong)uVar9 == 0) {
LAB_143078cbb:
                local_100 = **(undefined8 **)(param_1 + 8);
                local_f8 = *(undefined4 *)(*(undefined8 **)(param_1 + 8) + 1);
                cVar17 = FUN_1448b7d84(param_3,lVar12,&local_100,0);
                if ((((cVar17 != '\0') && (lVar22 = *param_6, lVar22 != 0)) && (DAT_14c760a94 != 0))
                   && (((*(byte *)(*(longlong *)(lVar12 + 8) + 0x75) & 2) != 0 &&
                       (*(char *)(*(longlong *)(lVar12 + 8) + 0x71) == '\0')))) {
                  uVar11 = *(undefined4 *)(lVar12 + 0x15c);
                  unaff_EBP = *(uint *)(lVar12 + 0x204);
                  uVar19 = *(undefined4 *)(lVar12 + 0x208);
                  iVar10 = *(int *)(lVar22 + 0x50);
                  *(uint *)(lVar22 + 0x50) = iVar10 + 1U;
                  if (*(uint *)(lVar22 + 0x54) < iVar10 + 1U) {
                    local_104 = uVar19;
                    FUN_1409e69cc((longlong *)(lVar22 + 0x48),iVar10);
                    uVar19 = local_104;
                  }
                  lVar12 = *(longlong *)(lVar22 + 0x48);
                  lVar22 = (longlong)iVar10 * 0x10;
                  *(undefined4 *)(lVar12 + lVar22) = uVar11;
                  *(uint *)(lVar12 + 4 + lVar22) = unaff_EBP;
                  *(undefined4 *)(lVar12 + 8 + lVar22) = uVar19;
                  *(undefined1 *)(lVar12 + 0xc + lVar22) = 1;
                }
              }
              else if (0 < (int)uVar9) {
                lVar22 = *(longlong *)(lVar12 + 8);
                lVar18 = *(longlong *)(param_5 + 0x1000);
                if (*(longlong *)(param_5 + 0x1000) == 0) {
                  lVar18 = param_5;
                }
                dVar1 = *(double *)(lVar22 + 0x180);
                dVar2 = *(double *)(lVar22 + 0x180);
                dVar3 = *(double *)(lVar22 + 0x188);
                dVar4 = *(double *)(lVar22 + 0x188);
                dVar5 = *(double *)(lVar22 + 400);
                dVar6 = *(double *)(lVar22 + 400);
                auVar26 = *(undefined1 (*) [16])(lVar22 + 0x198) & _DAT_149931180;
                auVar27._8_4_ = auVar26._8_4_;
                auVar27._12_4_ = auVar26._12_4_;
                auVar27._0_8_ = auVar26._8_8_;
                dVar7 = *(double *)(lVar22 + 0x1a8);
                dVar8 = *(double *)(lVar22 + 0x1a8);
                uVar20 = 0;
                do {
                  iVar10 = *(int *)(lVar18 + 0x1f0 + uVar20 * 0x200);
                  if (iVar10 < 1) goto LAB_143078cbb;
                  lVar22 = uVar20 * 0x200 + lVar18;
                  pdVar13 = *(double **)(lVar22 + 0x1e0);
                  pdVar23 = (double *)(lVar22 + 0xe0);
                  if (pdVar13 != (double *)0x0) {
                    pdVar23 = pdVar13;
                  }
                  iVar24 = 0;
                  while( true ) {
                    dVar14 = auVar26._0_8_;
                    lVar22 = -(ulonglong)
                              (ABS(pdVar23[9] * dVar8) +
                               ABS(pdVar23[5]) * auVar27._8_8_ + ABS(pdVar23[1]) * dVar14 <
                              (dVar6 * pdVar23[9] + dVar4 * pdVar23[5] + dVar2 * pdVar23[1]) -
                              pdVar23[0xd]);
                    lVar25 = -(ulonglong)
                              (ABS(pdVar23[0xb] * dVar8) +
                               ABS(pdVar23[7]) * auVar27._8_8_ + ABS(pdVar23[3]) * dVar14 <
                              (dVar6 * pdVar23[0xb] + dVar4 * pdVar23[7] + dVar2 * pdVar23[3]) -
                              pdVar23[0xf]);
                    auVar15._8_4_ = (int)lVar22;
                    auVar15._0_8_ =
                         -(ulonglong)
                          (ABS(pdVar23[8] * dVar7) +
                           ABS(pdVar23[4]) * auVar27._0_8_ + ABS(*pdVar23) * dVar14 <
                          (dVar5 * pdVar23[8] + dVar3 * pdVar23[4] + dVar1 * *pdVar23) -
                          pdVar23[0xc]);
                    auVar15._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
                    in_R11D = movmskpd(in_R11D,auVar15);
                    auVar16._8_4_ = (int)lVar25;
                    auVar16._0_8_ =
                         -(ulonglong)
                          (ABS(pdVar23[10] * dVar7) +
                           ABS(pdVar23[6]) * auVar27._0_8_ + ABS(pdVar23[2]) * dVar14 <
                          (dVar5 * pdVar23[10] + dVar3 * pdVar23[6] + dVar1 * pdVar23[2]) -
                          pdVar23[0xe]);
                    auVar16._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                    iVar21 = movmskpd(unaff_EBP,auVar16);
                    unaff_EBP = iVar21 << 2 | in_R11D;
                    if (unaff_EBP != 0) break;
                    pdVar23 = pdVar23 + 0x10;
                    iVar24 = iVar24 + 4;
                    if (iVar10 <= iVar24) goto LAB_143078cbb;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 != uVar9);
              }
            }
          }
          else {
            *param_4 = 1;
          }
        }
      }
      else if ((uVar9 & 0x40) == 0) goto LAB_143078ad6;
    }
    param_2 = *(longlong *)(param_2 + 0x18);
  } while( true );
}



// FUNCTION 143078df1 FUN_143078df1 body=106 status=ok
// SIG undefined FUN_143078df1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143078df1(void)

{
  _DAT_14ca5b568 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b570,1);
  if (DAT_14ca5b558 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca5b548 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143078e5c FUN_143078e5c body=3763 status=ok
// SIG undefined FUN_143078e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143078e5c(longlong param_1,LARGE_INTEGER param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  LARGE_INTEGER LVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  LARGE_INTEGER *pLVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_f8 [40];
  uint local_d0;
  LARGE_INTEGER *local_c8;
  undefined8 *local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER *local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  ulonglong uStack_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  LARGE_INTEGER *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar9 = (undefined8 *)FUN_1448fe162();
  *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
  puVar9[1] = &DAT_100000001;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)(puVar9 + 4) = 0xffffffff;
  puVar9[6] = 0;
  puVar9[7] = 0x100000000;
  *(undefined1 *)(puVar9 + 8) = 1;
  puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0xe800000000000020;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0x100000000;
  *(undefined2 *)(puVar9 + 0x14) = 0;
  LOCK();
  bVar24 = *(char *)(puVar9 + 8) == '\x01';
  if (bVar24) {
    *(char *)(puVar9 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar24) {
    FUN_14008cdb0(puVar9 + 8);
  }
  *puVar9 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
  }
  puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar9[9] = puVar9;
  puVar9[10] = puVar9;
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar23 = *(longlong *)(lVar20 + 0x2b8);
  if (lVar23 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar23 + 0x30);
  }
  puVar9[0xf] = uVar10;
  puVar9[0x10] = 0xc80000528c1cb600;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = 2;
  local_b8 = puVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x38))(param_3,&local_98);
    LVar4 = local_98;
    puVar9 = local_b8;
    if ((undefined8 *)local_98.QuadPart != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
      UNLOCK();
      cVar5 = FUN_1456bb142((undefined8 *)(local_98.QuadPart + 0x88),local_b8);
      if (cVar5 == '\0') {
        LOCK();
        piVar1 = (int *)((longlong)puVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        piVar1 = (int *)(LVar4.QuadPart + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        FUN_1456bb1d4(puVar9 + 5,LVar4.QuadPart);
      }
      if ((undefined8 *)local_98.QuadPart != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_98.QuadPart + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)**(undefined8 **)local_98)(local_98.QuadPart,1);
        }
      }
    }
    (**(code **)(*param_3 + 0x40))(param_3,&local_98);
    LVar4 = local_98;
    puVar9 = local_b8;
    if ((undefined8 *)local_98.QuadPart != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
      UNLOCK();
      cVar5 = FUN_1456bb142((undefined8 *)(local_98.QuadPart + 0x88),local_b8);
      if (cVar5 == '\0') {
        LOCK();
        piVar1 = (int *)((longlong)puVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        piVar1 = (int *)(LVar4.QuadPart + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        FUN_1456bb1d4(puVar9 + 5,LVar4.QuadPart);
      }
      if ((undefined8 *)local_98.QuadPart != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_98.QuadPart + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)**(undefined8 **)local_98)(local_98.QuadPart,1);
        }
      }
    }
  }
  puVar9 = local_b8;
  if ((*(longlong *)(param_1 + 0x7c0) != 0) &&
     (puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x7c0) + 0x18),
     puVar11 != (undefined8 *)0x0)) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
    UNLOCK();
    cVar5 = FUN_1456bb142(puVar11 + 0x11,local_b8);
    if (cVar5 == '\0') {
      LOCK();
      piVar1 = (int *)((longlong)puVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
      FUN_1456bb1d4(puVar9 + 5,puVar11);
    }
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  puVar11 = local_b8;
  puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x5638);
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
    UNLOCK();
    cVar5 = FUN_1456bb142(puVar9 + 0x11,local_b8);
    if (cVar5 == '\0') {
      LOCK();
      piVar1 = (int *)((longlong)puVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
      FUN_1456bb1d4(puVar11 + 5,puVar9);
    }
    LOCK();
    piVar1 = (int *)(puVar9 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  puVar11 = local_b8;
  puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x5648);
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_b8 + 0xc) = *(int *)((longlong)local_b8 + 0xc) + 1;
    UNLOCK();
    cVar5 = FUN_1456bb142(puVar9 + 0x11,local_b8);
    if (cVar5 == '\0') {
      LOCK();
      piVar1 = (int *)((longlong)puVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
      FUN_1456bb1d4(puVar11 + 5,puVar9);
    }
    LOCK();
    piVar1 = (int *)(puVar9 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  FUN_1400daade(&local_b8);
  puVar9 = local_b8;
  if (*(char *)(param_2.QuadPart + 0x39) == '\0') {
    if (local_b8 != (undefined8 *)0x0) {
      if (DAT_14c87e718 == '\0') {
        iVar7 = *(int *)((longlong)local_b8 + 0x1c);
        if ((2 < iVar7) &&
           (bVar6 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar6 < 3)) {
          local_98.QuadPart = 0x20100000001;
          uStack_90 = 0x30100000101;
          local_88 = DAT_14c7585c8;
          local_84 = DAT_14c7585c8 | 0x200;
          local_80 = DAT_14c7585c8 | 0x100;
          local_7c = DAT_14c7585c8 | 0x300;
          local_78 = (LARGE_INTEGER *)0x20000000000;
          uStack_70 = 0x30000000100;
          if (*(byte *)((longlong)&local_98 + (ulonglong)(iVar7 - 3) * 4) == bVar6)
          goto LAB_143079b38;
        }
        QueryPerformanceCounter(&local_98);
        uStack_90 = 0xffffffffffffffff;
        FUN_140056092(puVar9,&local_98);
      }
      else {
LAB_143079b38:
        FUN_140082318(puVar9);
      }
    }
    FUN_140c91fec(param_1,param_2.QuadPart);
  }
  puVar9 = local_b8;
  if ((*(char *)(param_2.QuadPart + 0x38) == '\x01') && (*(char *)(param_2.QuadPart + 0x37) != '\0')
     ) {
    plVar2 = (longlong *)(lVar20 + 0x2b8);
    local_78 = (LARGE_INTEGER *)0x0;
    uStack_70 = 0x400000000;
    puVar9 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar9,0);
    *puVar9 = &PTR_FUN_149e00300;
    if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
    }
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar9[9] = puVar9;
    puVar9[10] = puVar9;
    if (*plVar2 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*plVar2 + 0x30);
    }
    puVar9[0xf] = uVar10;
    puVar9[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 2;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
    }
    puVar11 = TlsGetValue(DAT_14c896140);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar11);
    }
    puVar15 = (undefined8 *)puVar11[1];
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)*puVar11;
      if (puVar15 == (undefined8 *)0x0) {
        uVar8 = DAT_14c896180.s.LowPart;
        LVar4 = DAT_14c896180;
        while (DAT_14c896180 = LVar4, local_b0 = LVar4, (LVar4.QuadPart & 0x3ffffffU) != 0) {
          local_a0.QuadPart = (LVar4.QuadPart & 0xfffffffffc000000U) + 0x4000000;
          if ((ulonglong)local_a0.QuadPart >> 0x1a < (ulonglong)LVar4.QuadPart >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar22 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
          uVar21 = (ulonglong)(LVar4.s.LowPart & 0x3fff);
          local_a0.QuadPart =
               local_a0.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar22 * 8) + 0x10 + uVar21 * 0x18);
          LOCK();
          bVar24 = local_b0.QuadPart == DAT_14c896180.QuadPart;
          LVar4.QuadPart = local_a0.QuadPart;
          if (!bVar24) {
            LVar4 = DAT_14c896180;
          }
          DAT_14c896180 = LVar4;
          UNLOCK();
          if (bVar24) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar22 * 8) + uVar21 * 0x18 + 0x10) = 0;
            puVar15 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar22 * 8) + 8 +
                       (ulonglong)(uVar8 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar8 & 0x3ffffff);
            puVar11[1] = puVar15;
            if (puVar15 == (undefined8 *)0x0) goto LAB_143079cd9;
            goto LAB_143079977;
          }
          uVar8 = DAT_14c896180.s.LowPart;
          LVar4 = DAT_14c896180;
        }
        puVar11[1] = 0;
LAB_143079cd9:
        puVar15 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar11[1] = puVar15;
        iVar7 = 0xff;
        puVar16 = puVar15;
        do {
          puVar14 = puVar16 + 0x20;
          *puVar16 = puVar14;
          iVar7 = iVar7 + -1;
          puVar16 = puVar14;
        } while (iVar7 != 0);
      }
      else {
        puVar11[1] = puVar15;
        puVar14 = puVar11;
      }
      *puVar14 = 0;
LAB_143079977:
      *(undefined4 *)(puVar11 + 2) = 0x100;
      iVar7 = 0xff;
    }
    else {
      iVar7 = *(int *)(puVar11 + 2) + -1;
    }
    puVar11[1] = *puVar15;
    *(int *)(puVar11 + 2) = iVar7;
    *puVar15 = UE::Tasks::Private::FTaskBase::vftable;
    puVar15[1] = &DAT_100000002;
    puVar15[2] = 0;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)(puVar15 + 4) = 0xffffffff;
    puVar15[6] = 0;
    puVar15[7] = 0x100000000;
    *(undefined1 *)(puVar15 + 8) = 1;
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar15[0xf] = 0;
    puVar15[0x10] = 0xe800000000000020;
    puVar15[0x12] = 0;
    puVar15[0x13] = 0x100000000;
    *(undefined2 *)(puVar15 + 0x14) = 0;
    LOCK();
    bVar24 = *(char *)(puVar15 + 8) == '\x01';
    if (bVar24) {
      *(char *)(puVar15 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar24) {
      FUN_14008cdb0(puVar15 + 8);
    }
    *puVar15 = &PTR_FUN_14a309b10;
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    if (*plVar2 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*plVar2 + 0x30);
    }
    puVar15[0xf] = uVar10;
    puVar15[0x10] = 0xc00000528c26a600;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
    puVar15[0x15] = puVar9;
    *puVar15 = &PTR_FUN_14a309b00;
    FUN_14302e1ba(puVar15,&local_b8);
    local_b0.s.LowPart._0_1_ = 1;
    FUN_1447439e4(puVar15);
    if (puVar15 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar15 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
    uVar21 = uStack_70;
    lVar20 = (longlong)(int)uStack_70;
    uVar8 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
    if (uStack_70._4_4_ < uVar8) {
      FUN_14476a5c8(&local_98,uVar21 & 0xffffffff);
    }
    pLVar18 = local_78;
    if (local_78 == (LARGE_INTEGER *)0x0) {
      pLVar18 = &local_98;
    }
    pLVar18[lVar20].QuadPart = (LONGLONG)puVar9;
    puVar9 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar9;
    if (puVar13 != (uint *)0x0) goto LAB_143079693;
    while( true ) {
      uVar8 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar8 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar8 | 1;
        __tlregdtor(&LAB_14307ec65);
      }
      lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar20 + 0x310);
      *(undefined8 *)(lVar20 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar9 = puVar12;
      FUN_140217a48(puVar9);
      puVar13 = (uint *)*puVar9;
LAB_143079693:
      puVar11 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar19 = (uint *)(puVar11 + 0x16);
      uVar8 = puVar13[0x12];
      if (puVar19 <= puVar13 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar17 = *puVar13;
        *puVar13 = *puVar13 + uVar8 + 1;
        UNLOCK();
        if ((uVar17 ^ uVar8) != 0xffffffff) break;
        puVar13 = (uint *)*puVar9;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar9 = puVar13;
        puVar11 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar11 + 0x16);
        uVar8 = 0;
        if (puVar19 <= puVar13 + 0x4000) {
          uVar8 = 1;
          goto LAB_143079713;
        }
      }
    }
    uVar8 = uVar8 + 1;
LAB_143079713:
    *(uint **)(puVar13 + 0x10) = puVar19;
    puVar13[0x12] = uVar8;
    FUN_1447247dc(puVar11,&local_98);
    *puVar11 = &PTR_FUN_14a309b20;
    ((LARGE_INTEGER *)(puVar11 + 0x15))->QuadPart = (LONGLONG)param_2;
    uVar8 = DAT_14ca5b580;
    if (((DAT_14ca5b578 != 0x400) || (DAT_14c7585d8 != 0)) &&
       ((DAT_14ca5b578 != 0x800 || (DAT_14c7585dc != 0)))) {
      uVar8 = DAT_14ca5b578 | _DAT_14ca5b57c;
    }
    uVar17 = uVar8 >> 10 & 3;
    if ((uVar8 >> 9 & 1) == 0 || uVar17 < 2) {
      bVar6 = (&DAT_149e38edc)[uVar17];
    }
    else {
      bVar6 = 2;
    }
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar20 = *plVar2;
    if (lVar20 == 0) {
      bVar3 = 1;
      if (bVar6 != 6) {
        bVar3 = bVar6;
      }
      bVar6 = bVar3;
      uVar10 = 0;
    }
    else {
      if (bVar6 == 6) {
        bVar6 = (byte)((ulonglong)*(undefined8 *)(lVar20 + 0x38) >> 0x3b);
      }
      uVar10 = *(undefined8 *)(lVar20 + 0x30);
    }
    puVar11[0xf] = uVar10;
    puVar11[0x10] = (ulonglong)(bVar6 & 7) << 0x3b | 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    local_b0.s.LowPart._0_1_ = 1;
    FUN_1447439e4(puVar11);
    puVar9 = *(undefined8 **)(param_2.QuadPart + 0x1b8);
    *(undefined8 **)(param_2.QuadPart + 0x1b8) = puVar11;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar9 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
    pLVar18 = &local_98;
    if (local_78 != (LARGE_INTEGER *)0x0) {
      pLVar18 = local_78;
    }
    FUN_144717c65(pLVar18,uStack_70 & 0xffffffff);
    if (local_78 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14307919b;
  }
  if ((*(int *)(param_2.QuadPart + 0x48) == 0) && (*(int *)(param_2.QuadPart + 0x58) == 0))
  goto LAB_14307919b;
  if (local_b8 != (undefined8 *)0x0) {
    if (DAT_14c87e718 == '\0') {
      iVar7 = *(int *)((longlong)local_b8 + 0x1c);
      if ((2 < iVar7) && (bVar6 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar6 < 3))
      {
        local_98.QuadPart = 0x20100000001;
        uStack_90 = 0x30100000101;
        local_88 = DAT_14c7585c8;
        local_84 = DAT_14c7585c8 | 0x200;
        local_80 = DAT_14c7585c8 | 0x100;
        local_7c = DAT_14c7585c8 | 0x300;
        local_78 = (LARGE_INTEGER *)0x20000000000;
        uStack_70 = 0x30000000100;
        if (*(byte *)((longlong)&local_98 + (ulonglong)(iVar7 - 3) * 4) == bVar6)
        goto LAB_143079aa9;
      }
      QueryPerformanceCounter(&local_98);
      uStack_90 = 0xffffffffffffffff;
      FUN_140056092(puVar9,&local_98);
    }
    else {
LAB_143079aa9:
      FUN_140082318(puVar9);
    }
  }
  local_98 = param_2;
  FUN_14014b25a(&local_98);
  if (*(char *)(param_2.QuadPart + 0x37) == '\0') {
    local_d0 = *(byte *)(param_2.QuadPart + 0x38) ^ 1;
    local_a8 = &local_a0;
    local_98.QuadPart = 0;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    local_b0.QuadPart = (LONGLONG)&LAB_143081534;
    local_c8 = &local_98;
    local_a0 = param_2;
    FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)(param_2.QuadPart + 0x78),1);
  }
  else {
    iVar7 = *(int *)(param_2.QuadPart + 0x78);
    if ((longlong)iVar7 != 0) {
      lVar20 = *(longlong *)(param_2.QuadPart + 0x70);
      lVar23 = 0;
      do {
        FUN_14475108c(*(undefined8 *)(lVar20 + lVar23),param_2.QuadPart);
        lVar23 = lVar23 + 8;
      } while ((longlong)iVar7 * 8 != lVar23);
    }
  }
LAB_14307919b:
  if (local_b8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_b8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143079d10 FUN_143079d10 body=696 status=ok
// SIG undefined FUN_143079d10(void)

void FUN_143079d10(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    plVar2 = (longlong *)(param_2 + 0x1b8);
    FUN_14009fd82(DAT_14c82b500,plVar2,DAT_14c7585d4);
    puVar6 = (undefined8 *)*plVar2;
    if (puVar6 != (undefined8 *)0x0) {
      *plVar2 = 0;
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  if (*(char *)(param_2 + 0x39) == '\0') {
    iVar3 = *(int *)(param_2 + 0x58);
    if (0 < (longlong)iVar3) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        FUN_14730b458(*(undefined8 *)(*(longlong *)(param_2 + 0x50) + lVar9 * 8),
                      *(longlong *)(param_2 + 0x80) + lVar8);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x18;
      } while (iVar3 != lVar9);
    }
    iVar3 = *(int *)(param_2 + 0x78);
    if ((longlong)iVar3 != 0) {
      lVar8 = *(longlong *)(param_2 + 0x70);
      lVar9 = 0;
      do {
        lVar4 = *(longlong *)(lVar8 + lVar9);
        FUN_14482a29c(lVar4,param_2);
        if (lVar4 != 0) {
          FUN_14475458c(*(undefined8 *)(lVar4 + 0x50),*(undefined4 *)(lVar4 + 0x58));
          if (*(longlong *)(lVar4 + 0x50) != 0) {
            FUN_1400020a8();
          }
          FUN_14475458c(*(undefined8 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x48));
          if (*(longlong *)(lVar4 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1447545cf(*(undefined8 *)(lVar4 + 0x30),*(undefined4 *)(lVar4 + 0x38));
          if (*(longlong *)(lVar4 + 0x30) != 0) {
            FUN_1400020a8();
          }
          FUN_1447545cf(*(undefined8 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x28));
          if (*(longlong *)(lVar4 + 0x20) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar4 + 0x10) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar4);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar3 * 8 != lVar9);
    }
    *(undefined4 *)(param_2 + 0x78) = 0;
    if (*(int *)(param_2 + 0x7c) != 0) {
      FUN_140110548(param_2 + 0x70,0);
    }
    FUN_1401108ee(param_1,param_2);
  }
  lVar8 = *(longlong *)(param_2 + 0x138);
  if (lVar8 == 0) goto LAB_143079ede;
  if (DAT_14c87e718 == '\0') {
    iVar3 = *(int *)(lVar8 + 0x1c);
    if ((2 < iVar3) && (bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar5 < 3)) {
      local_68.QuadPart = 0x20100000001;
      uStack_60 = 0x30100000101;
      local_58 = DAT_14c7585c8;
      local_54 = DAT_14c7585c8 | 0x200;
      local_50 = DAT_14c7585c8 | 0x100;
      local_4c = DAT_14c7585c8 | 0x300;
      local_48 = 0;
      uStack_44 = 0x200;
      uStack_40 = 0x100;
      uStack_3c = 0x300;
      if (*(byte *)((longlong)&local_68 + (ulonglong)(iVar3 - 3) * 4) == bVar5) goto LAB_143079fbc;
    }
    QueryPerformanceCounter(&local_68);
    uStack_60 = 0xffffffffffffffff;
    FUN_140056092(lVar8,&local_68);
  }
  else {
LAB_143079fbc:
    FUN_140082318(lVar8);
  }
LAB_143079ede:
  if (*(char *)(param_2 + 0x3a) == '\0') {
    FUN_1408d3be6(param_1,param_2);
  }
  if ((longlong)*(int *)(param_2 + 0x68) != 0) {
    puVar6 = *(undefined8 **)(param_2 + 0x60);
    puVar7 = puVar6 + (longlong)*(int *)(param_2 + 0x68) * 2;
    do {
      FUN_14730f0ba(*puVar6,puVar6[1]);
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143079fca FUN_143079fca body=946 status=ok
// SIG undefined FUN_143079fca(void)

void FUN_143079fca(longlong *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5
                  ,float param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  undefined4 local_420;
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_408;
  undefined1 local_3f8 [240];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  longlong local_1f8;
  undefined8 local_1e8;
  longlong local_d8;
  undefined8 local_c8;
  undefined1 local_78;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined2 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_448;
  lVar4 = param_1[2];
  local_2f8 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f0 = 0x3ff0000000000000;
  local_2d8 = 0x5500000000000000;
  uStack_2d0 = 0;
  local_2c8 = 0x55000000;
  local_1f8 = 0;
  local_1e8 = 0x600000000;
  local_d8 = 0;
  local_c8 = 0x800000000;
  local_78 = 0;
  local_74 = &DAT_3f800000ffffffff;
  local_68 = 0;
  local_6c = param_5;
  lVar7 = *param_1;
  plVar5 = *(longlong **)(lVar7 + 0x28);
  if (((*(byte *)(lVar7 + 0xe4) & 1) == 0) ||
     (bVar11 = true, DAT_14c760480 <= *(int *)(lVar7 + 0xf8))) {
    bVar11 = (*(byte *)(plVar5 + 0x3a) & 8) == 0;
  }
  local_428 = local_3f8;
  (**(code **)(*plVar5 + 0xc0))(plVar5,param_1[1],0,bVar11);
  local_74 = (undefined1 *)CONCAT44(local_74._4_4_,param_4);
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_14307a127;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_14307a127:
    puVar10 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar9 = puVar6[0x12];
    if (puVar10 + 0x22a <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar9 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar9) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar10 = (undefined8 *)((longlong)puVar6 + 0x67U & 0xfffffffffffffff0);
      uVar9 = 0;
      if (puVar10 + 0x22a <= puVar6 + 0x4000) {
        uVar9 = 1;
        goto LAB_14307a1a5;
      }
    }
  }
  uVar9 = uVar9 + 1;
LAB_14307a1a5:
  *(undefined8 **)(puVar6 + 0x10) = puVar10 + 0x22b;
  puVar6[0x12] = uVar9;
  *(int *)(puVar10 + -1) = ((int)puVar10 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar10 + -4) = 0x1150;
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a3099b0;
  lVar7 = *(longlong *)(lVar4 + 0x90);
  do {
    puVar10[1] = lVar7;
    plVar5 = (longlong *)(lVar4 + 0x90);
    LOCK();
    lVar8 = *plVar5;
    bVar11 = lVar7 == lVar8;
    if (bVar11) {
      *plVar5 = (longlong)puVar10;
      lVar8 = lVar7;
    }
    UNLOCK();
    lVar7 = lVar8;
  } while (!bVar11);
  puVar1 = puVar10 + 2;
  FUN_144ab9098(puVar1);
  local_420 = (undefined4)(longlong)param_6;
  local_428 = (undefined1 *)CONCAT44(local_428._4_4_,local_420);
  local_408 = 4;
  local_418 = local_420;
  local_410 = local_420;
  FUN_14491cf12(puVar1,*param_1,param_1[1],local_3f8);
  *(undefined1 *)((longlong)puVar10 + 0x9a4) = 1;
  FUN_140143e58(puVar10 + 0x131,param_1[3]);
  *(undefined4 *)(puVar10 + 8) = 3;
  *(undefined4 *)(puVar10 + 0x166) = 0;
  *(uint *)(puVar10 + 0x135) =
       (param_3 & 0xff) + (param_2 & 0xff) * 2 + (*(uint *)(puVar10 + 0x135) & 0xfffffff8) + 4;
  *(byte *)((longlong)puVar10 + 0x9a2) = *(byte *)((longlong)puVar10 + 0x9a2) & 0xfe;
  *(undefined4 *)((longlong)puVar10 + 0x6f4) = 0x459c4000;
  plVar5 = (longlong *)param_1[4];
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_1447417ac(plVar5,iVar3);
  }
  *(undefined8 **)(*plVar5 + (longlong)iVar3 * 8) = puVar1;
  plVar5 = (longlong *)param_1[5];
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_1447417ac(plVar5,iVar3);
  }
  *(undefined8 **)(*plVar5 + (longlong)iVar3 * 8) = puVar1;
  plVar5 = (longlong *)param_1[6];
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_1447417ac(plVar5,iVar3);
  }
  *(undefined8 **)(*plVar5 + (longlong)iVar3 * 8) = puVar1;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307a37e FUN_14307a37e body=906 status=ok
// SIG undefined FUN_14307a37e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307a37e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  char cVar15;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  longlong local_e0;
  undefined4 local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined2 local_9c;
  undefined4 local_9a;
  undefined1 local_96;
  undefined2 local_95;
  undefined1 local_93;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (0 < (int)param_3[1]) {
    local_d0 = param_1 + 0x500;
    local_e0 = 0;
    do {
      lVar3 = *(longlong *)(*param_3 + local_e0 * 8);
      if (((char)*(uint *)(lVar3 + 0x990) < '\0') && (-1 < *(int *)(lVar3 + 0x944))) {
        cVar15 = (char)((*(uint *)(lVar3 + 0x990) & 0x10) >> 4);
      }
      else {
        cVar15 = '\0';
      }
      FUN_14031d6b0(local_d0);
      uVar10 = DAT_14ca850ac;
      uVar9 = DAT_14ca850a8;
      uVar8 = DAT_14ca850a4;
      uVar7 = DAT_14ca850a0;
      lVar12 = (longlong)(*(int *)(param_1 + 0x508) + -1) * 0x48 + *(longlong *)(param_1 + 0x500);
      iVar6 = *(int *)(lVar3 + 0x960) * 2;
      iVar13 = *(int *)(lVar3 + 0x95c);
      iVar1 = *(int *)(lVar3 + 0x958);
      local_d4 = DAT_14ca8509c;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5b5a8) && (FUN_144b3d300(&DAT_14ca5b5a8), DAT_14ca5b5a8 == -1))
      {
        FUN_140056680(&DAT_14ca5b588,L"CachedShadowDepthMap_Split");
        _DAT_14ca5b598 = 0;
        uRam000000014ca5b5a0 = 0;
        atexit((_func_5014 *)&LAB_14307a7b8);
        _Init_thread_footer(&DAT_14ca5b5a8);
      }
      pwVar11 = L"CachedShadowDepthMap";
      if (cVar15 != '\0') {
        pwVar11 = (wchar_t *)FUN_141781afe(&DAT_14ca5b588,*(undefined4 *)(lVar3 + 0x944));
      }
      local_a4 = CONCAT44(iVar13 + iVar6,iVar6 + iVar1);
      local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_a8 = 0;
      local_9c = 1;
      local_96 = 0;
      local_c0 = local_d4;
      local_bc = uVar7;
      local_b8 = uVar8;
      local_b4 = uVar9;
      local_b0 = uVar10;
      local_95 = 0xc;
      local_9a = 0x1010001;
      local_c8 = 0xc;
      local_93 = 0xff;
      local_e8 = pwVar11;
      FUN_14490a8c0(&DAT_14ca9a3e8,param_2,&local_c8,lVar12 + 0x30);
      uVar5 = *(uint *)(lVar3 + 0x944);
      if ((int)*(uint *)(lVar3 + 0x944) < 1) {
        uVar5 = 0;
      }
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(int *)(lVar4 + 0x4bc0) != *(int *)(lVar4 + 0x4bec)) {
        uVar2 = *(uint *)(*(longlong *)(lVar3 + 0xb60) + 0x34);
        lVar14 = lVar4 + 0x4bf0;
        if (*(longlong *)(lVar4 + 0x4bf8) != 0) {
          lVar14 = *(longlong *)(lVar4 + 0x4bf8);
        }
        iVar13 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar4 + 0x4c00) - 1U & uVar2) * 4);
        if (iVar13 != -1) {
          do {
            lVar14 = *(longlong *)(lVar4 + 0x4bb8) + (longlong)iVar13 * 0x20;
            if (*(uint *)(*(longlong *)(lVar4 + 0x4bb8) + (longlong)iVar13 * 0x20) == uVar2)
            goto LAB_14307a5ff;
            iVar13 = *(int *)(lVar14 + 0x18);
          } while (iVar13 != -1);
        }
      }
      lVar14 = 0;
LAB_14307a5ff:
      FUN_14730f8f2(*(longlong *)(lVar14 + 8) + (ulonglong)uVar5 * 0x430 + 0x3a0,lVar12);
      *(undefined8 *)(lVar3 + 0x950) = 0;
      *(byte *)(lVar3 + 0x990) = *(byte *)(lVar3 + 0x990) | 1;
      FUN_14307a70a(lVar3 + 0x18,lVar12);
      iVar13 = *(int *)(lVar12 + 0x40);
      *(uint *)(lVar12 + 0x40) = iVar13 + 1U;
      if (*(uint *)(lVar12 + 0x44) < iVar13 + 1U) {
        FUN_1447417ac((longlong *)(lVar12 + 0x38),iVar13);
      }
      *(longlong *)(*(longlong *)(lVar12 + 0x38) + (longlong)iVar13 * 8) = lVar3;
      local_e0 = local_e0 + 1;
    } while (local_e0 < (int)param_3[1]);
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307a70a FUN_14307a70a body=174 status=ok
// SIG undefined FUN_14307a70a(void)

void FUN_14307a70a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_2 + 0x28);
  uVar5 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar6 = 0;
  uVar2 = uVar1;
  if (*(uint *)((longlong)param_1 + 0xc) != uVar1) {
    FUN_147312956(param_1);
    iVar6 = (int)param_1[1];
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
  }
  *(uint *)(param_1 + 1) = iVar6 + uVar1;
  if (uVar2 - iVar6 < uVar1) {
    FUN_147312964(param_1);
  }
  memset((void *)((longlong)iVar6 * 8 + *param_1),0,uVar5 * 8);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar4 = param_2;
      }
      *(undefined8 *)(*param_1 + uVar3 * 8) = *(undefined8 *)(lVar4 + uVar3 * 8);
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
  }
  param_1[2] = *(longlong *)(param_2 + 0x30);
  return;
}



// FUNCTION 14307a7d0 FUN_14307a7d0 body=345 status=ok
// SIG undefined FUN_14307a7d0(void)

undefined8 *
FUN_14307a7d0(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14307a822;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_14307a822:
    puVar8 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar4[0x12];
    if (puVar8 + 0x3a <= puVar4 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      puVar8 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar8 + 0x3a <= puVar4 + 0x4000) {
        uVar7 = 1;
        goto LAB_14307a8a0;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14307a8a0:
  *(undefined8 **)(puVar4 + 0x10) = puVar8 + 0x3b;
  puVar4[0x12] = uVar7;
  *(int *)(puVar8 + -1) = ((int)puVar8 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar8 + -4) = 0x1d0;
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a309ba8;
  lVar5 = *(longlong *)(param_1 + 0x90);
  do {
    puVar8[1] = lVar5;
    LOCK();
    lVar6 = *(longlong *)(param_1 + 0x90);
    bVar9 = lVar5 == lVar6;
    if (bVar9) {
      *(longlong *)(param_1 + 0x90) = (longlong)puVar8;
      lVar6 = lVar5;
    }
    UNLOCK();
    lVar5 = lVar6;
  } while (!bVar9);
  puVar8 = puVar8 + 2;
  FUN_143081a78(puVar8,uVar3,param_1,param_5,param_3);
  FUN_143078e5c(param_1,puVar8,param_4);
  return puVar8;
}



// FUNCTION 14307a92a FUN_14307a92a body=109 status=ok
// SIG undefined FUN_14307a92a(void)

void FUN_14307a92a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143079d10(param_1,param_3);
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x578);
    local_20 = *(undefined4 *)(param_1 + 0x580);
    FUN_1403386fa(*(longlong *)(param_1 + 0x7c0),param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14307a998 FUN_14307a998 body=1134 status=ok
// SIG undefined FUN_14307a998(void)

void FUN_14307a998(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  LARGE_INTEGER local_88;
  undefined4 local_80;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_3 + 0x3c) != '\0') goto LAB_14307ad42;
  lVar10 = *(longlong *)(param_3 + 0x1a0);
  if (lVar10 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar1 = *(int *)(lVar10 + 0x1c);
      if ((2 < iVar1) && (bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar4 < 3))
      {
        local_78.QuadPart = 0x20100000001;
        uStack_70 = 0x30100000101;
        local_68 = DAT_14c7585c8;
        local_64 = DAT_14c7585c8 | 0x200;
        local_60 = DAT_14c7585c8 | 0x100;
        local_5c = DAT_14c7585c8 | 0x300;
        local_58 = 0;
        uStack_54 = 0x200;
        uStack_50 = 0x100;
        uStack_4c = 0x300;
        if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar1 - 3) * 4) == bVar4)
        goto LAB_14307ade9;
      }
      QueryPerformanceCounter(&local_78);
      uStack_70 = 0xffffffffffffffff;
      FUN_140056092(lVar10,&local_78);
    }
    else {
LAB_14307ade9:
      FUN_140082318();
    }
  }
  *(undefined4 *)(param_3 + 0x150) = 0;
  if (*(int *)(param_3 + 0x154) != 0) {
    FUN_14015857e(param_3 + 0x140,0);
  }
  iVar1 = *(int *)(param_3 + 0x160);
  if ((longlong)iVar1 == 0) {
    local_78.QuadPart = 0;
    uStack_70 = 0;
    uStack_70._0_4_ = 0;
  }
  else {
    lVar10 = 0;
    do {
      FUN_1447850c6();
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
    lVar10 = *(longlong *)(param_3 + 0x158);
    uVar9 = (ulonglong)*(uint *)(param_3 + 0x160);
    local_78.QuadPart = 0;
    uStack_70 = 0;
    if ((int)*(uint *)(param_3 + 0x160) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9);
    }
    if (uVar9 == 0) {
      uStack_70._0_4_ = 0;
    }
    else {
      FUN_144775d28(&local_78,uVar9);
      lVar6 = 0;
      do {
        uVar3 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_14741464c(&local_78,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_78.QuadPart + lVar8 * 8) = *(undefined8 *)(lVar10 + lVar6);
        lVar6 = lVar6 + 8;
      } while (uVar9 << 3 != lVar6);
    }
  }
  local_88 = local_78;
  local_80 = (int)uStack_70;
  FUN_14007658c(&DAT_14ca850c8,&local_88,0);
  if (local_78.QuadPart != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_3 + 0x160) = 0;
  if (*(int *)(param_3 + 0x164) != 0) {
    FUN_1400bd2dc(param_3 + 0x158,0);
  }
  local_90 = param_3;
  FUN_1400d0e8a(&DAT_14ca4adc0,*(undefined8 *)(param_2 + 0x18));
  if ((longlong)(int)param_1[0xa1] != 0) {
    lVar6 = param_1[0xa0];
    lVar10 = lVar6 + (longlong)(int)param_1[0xa1] * 0x48;
    do {
      iVar1 = *(int *)(lVar6 + 0x40);
      if ((longlong)iVar1 != 0) {
        lVar8 = *(longlong *)(lVar6 + 0x38);
        lVar7 = 0;
        do {
          local_98 = 0;
          FUN_14482edda(param_1[1] + 0x3f08,param_2,
                        *(undefined8 *)(*(longlong *)(lVar8 + lVar7) + 0x10),0);
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      lVar6 = lVar6 + 0x48;
    } while (lVar6 != lVar10);
  }
  lVar10 = param_1[0xa3];
  if ((longlong)(int)lVar10 != 0) {
    lVar6 = param_1[0xa2];
    lVar8 = 0;
    do {
      local_98 = 0;
      FUN_14482edda(param_1[1] + 0x3f08,param_2,
                    *(undefined8 *)(**(longlong **)(lVar6 + 0x38 + lVar8) + 0x10),0);
      lVar8 = lVar8 + 0x48;
    } while ((longlong)(int)lVar10 * 0x48 != lVar8);
  }
  lVar10 = param_1[0xac];
  if ((longlong)(int)lVar10 != 0) {
    lVar6 = param_1[0xab];
    lVar8 = 0;
    do {
      if ((*(byte *)(*(longlong *)(lVar6 + lVar8) + 0x990) & 8) == 0) {
        local_98 = 0;
        FUN_14482edda(param_1[1] + 0x3f08,param_2,
                      *(undefined8 *)(*(longlong *)(lVar6 + lVar8) + 0x10),0);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar8);
  }
  if ((longlong)(int)param_1[0xae] != 0) {
    lVar6 = param_1[0xad];
    lVar10 = lVar6 + (longlong)(int)param_1[0xae] * 0x48;
    do {
      iVar1 = *(int *)(lVar6 + 0x40);
      if ((longlong)iVar1 != 0) {
        lVar8 = *(longlong *)(lVar6 + 0x38);
        lVar7 = 0;
        do {
          local_98 = 0;
          FUN_14482edda(param_1[1] + 0x3f08,param_2,
                        *(undefined8 *)(*(longlong *)(lVar8 + lVar7) + 0x10),0);
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
      }
      lVar6 = lVar6 + 0x48;
    } while (lVar6 != lVar10);
  }
  lVar10 = param_1[0xb0];
  if ((longlong)(int)lVar10 != 0) {
    lVar6 = param_1[0xaf];
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar8);
      lVar2 = param_1[1];
      local_98 = (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(lVar7 + 0x38));
      FUN_14482edda(lVar2 + 0x3f08,param_2,*(undefined8 *)(lVar7 + 0x10),0);
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar8);
  }
  *(undefined1 *)(local_90 + 0x3c) = 1;
LAB_14307ad42:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307ae07 FUN_14307ae07 body=69 status=ok
// SIG undefined FUN_14307ae07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307ae07(void)

{
  _DAT_14ca5b5e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307ae49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b5f0,1);
  return;
}



// FUNCTION 14307ae4c FUN_14307ae4c body=69 status=ok
// SIG undefined FUN_14307ae4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307ae4c(void)

{
  _DAT_14ca5b600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307ae8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b608,1);
  return;
}



// FUNCTION 14307ae91 FUN_14307ae91 body=418 status=ok
// SIG undefined FUN_14307ae91(void)

void FUN_14307ae91(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  longlong local_50;
  int local_48;
  uint local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *DAT_14ca5b610 & 0xf;
  if ((uVar2 != DAT_14c760a54) && ((uVar2 == 5 || (DAT_14c760a54 == 5)))) {
    DAT_14c760a54 = uVar2;
    if (uVar2 != 5) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_14133d72e(&local_50,0x10,1,0);
    uVar7 = (ulonglong)local_40;
    lVar4 = local_50;
    if ((int)local_40 < local_48 && -1 < (int)local_40) {
      iVar3 = local_48;
      do {
        lVar6 = *(longlong *)(lVar4 + (uVar7 & 0xffffffff) * 8);
        uVar2 = (uint)uVar7;
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x218), lVar6 != 0)) {
          local_54 = *(undefined4 *)(lVar6 + 8);
          FUN_147312ac0(&local_38,&local_54);
          lVar4 = local_50;
          iVar3 = local_48;
          uVar2 = local_40;
        }
        uVar7 = (longlong)(int)uVar2;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 + 1;
          local_40 = (uint)uVar7;
          if ((longlong)iVar3 <= (longlong)uVar7) break;
        } while (*(longlong *)(lVar4 + uVar7 * 8) == 0);
      } while ((-2 < (longlong)uVar8) && ((int)local_40 < iVar3));
    }
    if (lVar4 != 0) {
      FUN_1400020a8();
    }
    lVar4 = local_38;
    lVar6 = (longlong)(int)uStack_30;
    bVar1 = 0 < lVar6;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        if ((bVar1 & 1) == 0) {
          bVar1 = 0;
        }
        else {
          bVar1 = FUN_147430903(*(undefined2 *)
                                 (&DAT_14ca85070 + (longlong)*(int *)(lVar4 + lVar5) * 2));
        }
        lVar5 = lVar5 + 4;
      } while (lVar6 * 4 != lVar5);
    }
    FUN_14723c6a0(0,0x17,bVar1 ^ 3);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307b04c FUN_14307b04c body=2819 status=ok
// SIG undefined FUN_14307b04c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307b04c(longlong param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
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
  double dVar21;
  double dVar22;
  bool bVar23;
  char cVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint *puVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined1 auStack_16f8 [40];
  uint *local_16d0;
  longlong local_16c8;
  uint local_16c0;
  undefined4 local_16bc;
  double local_16b8;
  undefined8 local_16b0;
  uint local_16a4;
  double local_16a0;
  undefined8 local_1698;
  double local_1690;
  undefined8 local_1688;
  double local_1680;
  double local_1678;
  ulonglong local_1670;
  double local_1668;
  undefined8 uStack_1660;
  double local_1658;
  undefined1 *local_1550;
  undefined1 *local_1548;
  double *local_1540;
  undefined4 local_1534;
  undefined8 local_1530;
  undefined8 local_1528;
  undefined8 local_1520;
  undefined **local_1518;
  longlong local_1510;
  longlong local_1508;
  undefined8 *local_1500;
  undefined8 uStack_14f8;
  undefined8 local_14f0;
  undefined1 local_14b8 [192];
  longlong local_13f8;
  undefined8 local_13e8;
  longlong local_12d8;
  undefined8 local_12c8;
  undefined1 local_12b8 [56];
  longlong local_1280;
  double local_1270;
  double dStack_1268;
  ulonglong uStack_1260;
  float fStack_1058;
  float local_1054;
  float local_1050;
  float local_104c;
  float local_1048;
  float local_1044;
  float local_1040;
  float local_103c;
  float local_1038;
  float local_1034;
  float local_1030;
  float local_102c;
  float fStack_1028;
  float local_1024;
  float local_1020;
  float local_101c;
  undefined1 local_e08 [3216];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14307b062;
  dVar42 = (double)CONCAT44(unaff_XMM14_Db,unaff_XMM14_Da);
  dVar7 = (double)CONCAT44(unaff_XMM13_Db,unaff_XMM13_Da);
  dVar33 = (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
  dVar14 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
  dVar13 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_16f8;
  uVar25 = *(uint *)(DAT_14ca5b610 + 4);
  plVar5 = *(longlong **)(param_2 + 0x28);
  bVar3 = *(byte *)(plVar5 + 0x3a);
  if ((bVar3 & 2) == 0) {
    if ((~bVar3 & 0x18) != 0) goto LAB_14307c48d;
LAB_14307b107:
    cVar24 = (**(code **)(*plVar5 + 0xb0))(plVar5);
    if (cVar24 == '\0') goto LAB_14307c48d;
    local_16bc = 0;
  }
  else {
    if ((bVar3 & 0x10) == 0) goto LAB_14307c48d;
    lVar26 = param_2;
    cVar24 = FUN_1471dbc0a(param_2);
    local_16bc = (undefined4)CONCAT71((int7)((ulonglong)lVar26 >> 8),1);
    if (cVar24 == '\0') {
      if ((bVar3 & 8) == 0) goto LAB_14307c48d;
      goto LAB_14307b107;
    }
  }
  if (0 < *(int *)(param_1 + 0x3f0)) {
    uVar32 = uVar25 & 0xf;
    lVar26 = param_1 + 0x4d8;
    local_1670 = (ulonglong)uVar32;
    lVar31 = 0;
    local_16c8 = lVar26;
    local_16c0 = uVar25;
    do {
      lVar30 = lVar31 * 0x13c10 + *(longlong *)(param_1 + 1000);
      FUN_144ab9098(local_12b8);
      cVar24 = FUN_14730fe40(lVar30,lVar26,param_2,local_12b8);
      if (cVar24 != '\0') {
        lVar26 = local_1280;
        if (local_1280 == 0) {
          lVar26 = lVar30;
        }
        puVar29 = (uint *)(lVar30 + 0x117c0);
        lVar28 = (longlong)*(int *)(param_2 + 0x34) * 0x78;
        lVar27 = *(longlong *)(lVar26 + 0x3780);
        lVar26 = *(longlong *)(param_2 + 0x28);
        local_1520 = *(undefined8 *)(lVar26 + 0x90);
        local_1530 = *(undefined8 *)(lVar26 + 0x50);
        local_1528 = *(undefined8 *)(lVar26 + 0x70);
        local_1534 = 0x55000000;
        if ((uVar32 < 2) || (uVar25 = 0, lVar26 = local_16c8, *(int *)(lVar27 + 0x70 + lVar28) != 0)
           ) {
          local_13f8 = 0;
          local_13e8 = 0x600000000;
          local_12d8 = 0;
          local_12c8 = 0x800000000;
          local_16d0 = puVar29;
          FUN_144920f26(local_14b8,lVar30 + 0xab0);
          lVar26 = local_16c8;
          puVar29 = local_16d0;
          local_1548 = local_e08;
          local_1540 = &local_1270;
          local_1688 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
          local_1698 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
          local_16b8 = dVar7;
          local_16a4 = uVar32;
          local_16a0 = dVar33;
          local_1690 = dVar14;
          local_1680 = dVar13;
          local_1678 = dVar42;
          local_1550 = local_14b8;
          if (uVar32 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00014307b2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_14a30a060 + *(int *)(&DAT_14a30a060 + local_1670 * 4)))
                      (lVar27 + lVar28 + 0x68);
            return;
          }
          uVar25 = 0;
          if (*(int *)(DAT_14ca5b5f8 + 4) != 0) {
            lVar27 = (longlong)*(int *)(param_2 + 0x34) * 0x78 + *(longlong *)(lVar30 + 0x3780);
            uVar32 = *(uint *)(DAT_14ca5b610 + 4) & 0xf;
            if (uVar32 == 3) {
              iVar4 = *(int *)(lVar27 + 0x70);
              if ((longlong)iVar4 != 0) {
                lVar27 = *(longlong *)(lVar27 + 0x68);
                lVar28 = 0;
                do {
                  lVar26 = *(longlong *)(*(longlong *)(lVar27 + lVar28) + 8);
                  FUN_14307ee60(lVar30,param_2,lVar26 + 0x180,(float)*(double *)(lVar26 + 0x1b0));
                  lVar28 = lVar28 + 8;
                  puVar29 = local_16d0;
                  lVar26 = local_16c8;
                } while ((longlong)iVar4 * 8 != lVar28);
              }
            }
            else if (uVar32 == 2) {
              if ((longlong)*(int *)(lVar27 + 0x70) == 0) {
                bVar23 = false;
                dVar40 = dVar13;
                dVar8 = dVar42;
              }
              else {
                lVar28 = 0;
                bVar23 = false;
                dVar11 = dVar7;
                do {
                  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar27 + 0x68) + lVar28) + 8);
                  if (bVar23) {
                    dVar10 = dVar42 + dVar33;
                    dVar12 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) +
                             (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
                    dVar33 = dVar42 - dVar33;
                    dVar38 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) -
                             (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
                    dVar7 = dVar13 - dVar14;
                    dVar14 = dVar14 + dVar13;
                    dVar8 = dVar33;
                    if (dVar10 <= dVar33) {
                      dVar8 = dVar10;
                    }
                    dVar9 = dVar38;
                    if (dVar12 <= dVar38) {
                      dVar9 = dVar12;
                    }
                    dVar40 = dVar7;
                    if (dVar14 <= dVar7) {
                      dVar40 = dVar14;
                    }
                    if (dVar33 <= dVar10) {
                      dVar33 = dVar10;
                    }
                    if (dVar38 <= dVar12) {
                      dVar38 = dVar12;
                    }
                    if (dVar7 <= dVar14) {
                      dVar7 = dVar14;
                    }
                    dVar10 = *(double *)(lVar6 + 400);
                    dVar12 = *(double *)(lVar6 + 0x180);
                    dVar2 = *(double *)(lVar6 + 0x188);
                    dVar14 = dVar12 - *(double *)(lVar6 + 0x198);
                    if (dVar14 <= dVar8) {
                      dVar8 = dVar14;
                    }
                    if (dVar33 <= dVar14) {
                      dVar33 = dVar14;
                    }
                    dVar14 = dVar2 - *(double *)(lVar6 + 0x1a0);
                    if (dVar14 <= dVar9) {
                      dVar9 = dVar14;
                    }
                    if (dVar38 <= dVar14) {
                      dVar38 = dVar14;
                    }
                    dVar14 = dVar10 - *(double *)(lVar6 + 0x1a8);
                    if (dVar14 <= dVar40) {
                      dVar40 = dVar14;
                    }
                    if (dVar7 <= dVar14) {
                      dVar7 = dVar14;
                    }
                    dVar14 = *(double *)(lVar6 + 0x198) + dVar12;
                    if (dVar14 <= dVar8) {
                      dVar8 = dVar14;
                    }
                    if (dVar33 <= dVar14) {
                      dVar33 = dVar14;
                    }
                    dVar16 = *(double *)(lVar6 + 0x1a8) + dVar10;
                    dVar14 = *(double *)(lVar6 + 0x1a0) + dVar2;
                    if (dVar14 <= dVar9) {
                      dVar9 = dVar14;
                    }
                    if (dVar16 <= dVar40) {
                      dVar40 = dVar16;
                    }
                    if (dVar38 <= dVar14) {
                      dVar38 = dVar14;
                    }
                    if (dVar7 <= dVar16) {
                      dVar7 = dVar16;
                    }
                    dVar14 = (dVar7 - dVar40) * 0.5;
                    dVar38 = (dVar38 - dVar9) * 0.5;
                    dVar33 = (dVar33 - dVar8) * 0.5;
                    dVar9 = dVar9 + dVar38;
                    dVar8 = dVar8 + dVar33;
                    dVar40 = dVar40 + dVar14;
                    dVar7 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) - dVar9;
                    dVar13 = dVar11 + SQRT((dVar13 - dVar40) * (dVar13 - dVar40) +
                                           (dVar42 - dVar8) * (dVar42 - dVar8) + dVar7 * dVar7);
                    dVar7 = SQRT((dVar10 - dVar40) * (dVar10 - dVar40) +
                                 (dVar12 - dVar8) * (dVar12 - dVar8) +
                                 (dVar2 - dVar9) * (dVar2 - dVar9)) + *(double *)(lVar6 + 0x1b0);
                    if (dVar13 <= dVar7) {
                      dVar13 = dVar7;
                    }
                    dVar7 = SQRT(dVar14 * dVar14 + dVar33 * dVar33 + dVar38 * dVar38);
                    if (dVar13 <= dVar7) {
                      dVar7 = dVar13;
                    }
                    unaff_XMM10_Da = SUB84(dVar38,0);
                    unaff_XMM10_Db = (undefined4)((ulonglong)dVar38 >> 0x20);
                    unaff_XMM7_Da = SUB84(dVar9,0);
                    unaff_XMM7_Db = (undefined4)((ulonglong)dVar9 >> 0x20);
                    local_16b8 = dVar11;
                  }
                  else {
                    dVar8 = *(double *)(lVar6 + 0x180);
                    unaff_XMM7_Da = (undefined4)*(undefined8 *)(lVar6 + 0x188);
                    unaff_XMM7_Db = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x188) >> 0x20);
                    dVar40 = *(double *)(lVar6 + 400);
                    dVar33 = *(double *)(lVar6 + 0x198);
                    unaff_XMM10_Da = (undefined4)*(undefined8 *)(lVar6 + 0x1a0);
                    unaff_XMM10_Db = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x1a0) >> 0x20)
                    ;
                    dVar14 = *(double *)(lVar6 + 0x1a8);
                    dVar7 = *(double *)(lVar6 + 0x1b0);
                    bVar23 = true;
                  }
                  lVar28 = lVar28 + 8;
                  dVar13 = dVar40;
                  dVar11 = dVar7;
                  dVar42 = dVar8;
                } while ((longlong)*(int *)(lVar27 + 0x70) * 8 != lVar28);
              }
              local_178._8_4_ = unaff_XMM7_Da;
              local_178._12_4_ = unaff_XMM7_Db;
              local_178._0_8_ = dVar8;
              dVar13 = dVar40;
              if (!bVar23) {
                local_178._0_8_ = 0.0;
                local_178._8_4_ = 0;
                local_178._12_4_ = 0;
                dVar13 = 0.0;
              }
              local_168._0_8_ = dVar13;
              if (bVar23) {
                fVar37 = (float)dVar7;
              }
              else {
                fVar37 = 0.0;
              }
              FUN_14307ee60(lVar30,param_2,local_178,fVar37);
              dVar13 = dVar40;
              dVar42 = dVar8;
            }
            else if (uVar32 - 1 < 3) {
              local_16b0 = 0;
              dVar39 = (double)fStack_1058;
              dVar2 = (double)local_1054;
              dVar33 = (double)local_1050;
              dVar7 = (double)local_104c;
              dVar21 = (double)local_1048;
              dVar19 = (double)local_1044;
              dVar17 = (double)local_1040;
              local_1658 = (double)local_103c;
              dVar15 = (double)local_1038;
              dVar41 = (double)local_1034;
              dVar40 = (double)local_1030;
              auVar35._0_8_ = uStack_1260 ^ 0x8000000000000000;
              auVar35._8_8_ = 0x8000000000000000;
              auVar35 = blendpd(auVar35,_DAT_149935300,2);
              dVar16 = dVar2 * 0.0 + dVar39 * 0.0;
              dVar14 = (dVar33 * 0.0 + dVar2 * 1.0 + dVar39 * 0.0) - dVar7 * dStack_1268;
              dVar34 = auVar35._0_8_;
              dVar36 = auVar35._8_8_;
              dVar13 = dVar7 * dVar36 + dVar33 * 0.0 + dVar16;
              local_1668 = (double)local_102c;
              uStack_1660 = 0;
              dVar20 = dVar19 * 0.0 + dVar21 * 0.0;
              dVar22 = (double)fStack_1028;
              dVar18 = (dVar17 * 0.0 + dVar19 * 1.0 + dVar21 * 0.0) - local_1658 * dStack_1268;
              dVar10 = local_1658 * dVar36 + dVar17 * 0.0 + dVar20;
              dVar42 = dVar41 * 0.0 + dVar15 * 0.0;
              dVar12 = (double)local_1024;
              dVar11 = (dVar40 * 0.0 + dVar41 * 1.0 + dVar15 * 0.0) - local_1668 * dStack_1268;
              local_128 = local_1668 * dVar34 + dVar40 * 1.0 + dVar42;
              dStack_120 = local_1668 * dVar36 + dVar40 * 0.0 + dVar42;
              dVar42 = (double)local_1020;
              dVar38 = dVar12 * 0.0 + dVar22 * 0.0;
              dVar9 = (double)local_101c;
              dVar8 = (dVar42 * 0.0 + dVar12 * 1.0 + dVar22 * 0.0) - dStack_1268 * dVar9;
              local_108 = dVar34 * dVar9 + dVar42 * 1.0 + dVar38;
              dStack_100 = dVar36 * dVar9 + dVar42 * 0.0 + dVar38;
              local_178._8_4_ = SUB84(dVar14,0);
              local_178._0_8_ = (dVar33 * 0.0 + dVar2 * 0.0 + dVar39 * 1.0) - dVar7 * local_1270;
              local_178._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
              local_168._8_4_ = SUB84(dVar13,0);
              local_168._0_8_ = dVar7 * dVar34 + dVar33 * 1.0 + dVar16;
              local_168._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              local_158._8_4_ = SUB84(dVar18,0);
              local_158._0_8_ =
                   (dVar17 * 0.0 + dVar19 * 0.0 + dVar21 * 1.0) - local_1658 * local_1270;
              local_158._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              local_148._8_4_ = SUB84(dVar10,0);
              local_148._0_8_ = local_1658 * dVar34 + dVar17 * 1.0 + dVar20;
              local_148._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              local_138._8_4_ = SUB84(dVar11,0);
              local_138._0_8_ =
                   (dVar40 * 0.0 + dVar41 * 0.0 + dVar15 * 1.0) - local_1668 * local_1270;
              local_138._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
              local_118._8_4_ = SUB84(dVar8,0);
              local_118._0_8_ = (dVar42 * 0.0 + dVar12 * 0.0 + dVar22 * 1.0) - local_1270 * dVar9;
              local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              local_1518 = &PTR_FUN_14a217cb0;
              local_1500 = (undefined8 *)0x0;
              uStack_14f8 = 0;
              local_14f0 = 0;
              local_1510 = lVar30;
              local_1508 = lVar30;
              FUN_147a36eba(&local_1518,local_178,0xff00ffff,0);
              local_1518 = &PTR_FUN_14a217cb0;
              if (local_1500 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_1500 + 1);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*local_1500)(local_1500,1);
                }
              }
              unaff_XMM7_Da = (undefined4)local_1688;
              unaff_XMM7_Db = (undefined4)((ulonglong)local_1688 >> 0x20);
              unaff_XMM10_Da = (undefined4)local_1698;
              unaff_XMM10_Db = (undefined4)((ulonglong)local_1698 >> 0x20);
              uVar25 = (uint)local_16b0;
              puVar29 = local_16d0;
              dVar13 = local_1680;
              dVar7 = local_16b8;
              dVar14 = local_1690;
              dVar33 = local_16a0;
              dVar42 = local_1678;
            }
          }
          if (local_12d8 != 0) {
            FUN_1400020a8();
          }
          if (local_13f8 != 0) {
            FUN_1400020a8();
          }
          uVar25 = uVar25 & 0xff;
          uVar32 = local_16a4;
        }
        *puVar29 = *puVar29 & 0xfffffffe | uVar25;
      }
      FUN_1446fae78(local_12b8);
      lVar31 = lVar31 + 1;
    } while (lVar31 < *(int *)(param_1 + 0x3f0));
  }
LAB_14307c48d:
  if ((local_f0 ^ (ulonglong)auStack_16f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307c537 FUN_14307c537 body=812 status=ok
// SIG undefined FUN_14307c537(void)

ulonglong FUN_14307c537(char param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140;
  longlong local_138;
  byte local_12a [2];
  undefined1 local_128 [80];
  int local_d8;
  int local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *(uint *)(param_2 + 0x158);
  lVar15 = param_3 + 8;
  if (*(longlong *)(param_3 + 0x18) != 0) {
    lVar15 = *(longlong *)(param_3 + 0x18);
  }
  uVar4 = uVar2 + 0x1f;
  if (-1 < (int)uVar2) {
    uVar4 = uVar2;
  }
  uVar13 = *(uint *)(lVar15 + (longlong)((int)uVar4 >> 5) * 4);
  if ((uVar13 >> (uVar2 & 0x1f) & 1) == 0) {
    *(uint *)(lVar15 + (longlong)((int)uVar4 >> 5) * 4) = uVar13 | 1 << ((byte)uVar2 & 0x1f);
    uVar7 = (ulonglong)*(uint *)(param_2 + 0x48);
    if ((int)*(uint *)(param_2 + 0x48) < 1) {
      bVar8 = 0;
    }
    else {
      local_140 = param_3 + 0x48;
      local_138 = param_3 + 0x28;
      lVar15 = 0xf8;
      lVar16 = 0;
      local_144 = 0;
      do {
        lVar6 = *(longlong *)(param_2 + 0x40);
        uVar2 = *(uint *)(lVar6 + lVar15);
        lVar9 = *(longlong *)(param_4 + 0x31f8);
        if (*(longlong *)(param_4 + 0x31f8) == 0) {
          lVar9 = param_4 + 0x31e8;
        }
        uVar4 = uVar2 + 0x1f;
        if (-1 < (int)uVar2) {
          uVar4 = uVar2;
        }
        if (((*(uint *)(lVar9 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) &&
           (lVar9 = *(longlong *)(lVar6 + -0x30 + lVar15), lVar9 != 0)) {
          FUN_147cef530(lVar9,local_128,*(undefined4 *)(param_4 + 0x3090));
        }
        if (param_1 == '\0') {
          uVar12 = *(undefined4 *)(param_4 + 0x3090);
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14ca5bb60) {
            local_148 = *(undefined4 *)(param_4 + 0x3090);
            FUN_144b3d300(&DAT_14ca5bb60);
            uVar12 = local_148;
            if (DAT_14ca5bb60 == -1) {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              plVar5 = (longlong *)
                       (**(code **)(*DAT_14c8407a8 + 200))
                                 (DAT_14c8407a8,L"r.Mobile.AllowDistanceFieldShadows",1);
              if (plVar5 == (longlong *)0x0) {
                DAT_14ca5bb58 = 0;
              }
              else {
                DAT_14ca5bb58 = (**(code **)(*plVar5 + 0x68))(plVar5);
              }
              _Init_thread_footer(&DAT_14ca5bb60);
              uVar12 = local_148;
            }
          }
          if (((*(int *)(DAT_14ca5bb58 + 4) == 1) &&
              (lVar9 = *(longlong *)(lVar6 + -0x30 + lVar15), lVar9 != 0)) &&
             (local_148 = uVar12, FUN_147cef4e8(lVar9,local_128), local_70 == 2)) {
            lVar9 = *(longlong *)(lVar6 + -0x30 + lVar15);
            if ((lVar9 != 0) && (FUN_147cef530(lVar9,local_128,local_148), local_d8 == 2))
            goto LAB_14307c67a;
          }
          else if ((byte)(*(char *)(*(longlong *)(param_2 + 8) + 0x68) - 1U) < 2)
          goto LAB_14307c67a;
        }
        else {
LAB_14307c67a:
          plVar5 = (longlong *)
                   FUN_1449cbe5c(*(undefined8 *)(lVar6 + -0x38 + lVar15),
                                 *(undefined4 *)(param_4 + 0x3090),local_128);
          (**(code **)(*plVar5 + 0x288))(plVar5,local_12a);
          if ((local_12a[0] & 1) == 0) {
            uVar2 = *(uint *)(lVar6 + lVar15);
            uVar4 = 1 << ((byte)uVar2 & 0x1f);
            lVar9 = *(longlong *)(param_3 + 0x58);
            if (*(longlong *)(param_3 + 0x58) == 0) {
              lVar9 = local_140;
            }
            uVar13 = uVar2 + 0x1f;
            if (-1 < (int)uVar2) {
              uVar13 = uVar2;
            }
            lVar14 = (longlong)((int)uVar13 >> 5);
            lVar11 = *(longlong *)(param_3 + 0x38);
            if (*(longlong *)(param_3 + 0x38) == 0) {
              lVar11 = local_138;
            }
            if ((*(uint *)(lVar9 + lVar14 * 4) >> (uVar2 & 0x1f) & 1) == 0) {
              uVar4 = ~uVar4 & *(uint *)(lVar11 + lVar14 * 4);
            }
            else {
              uVar4 = uVar4 | *(uint *)(lVar11 + lVar14 * 4);
            }
            *(uint *)(lVar11 + lVar14 * 4) = uVar4;
            iVar3 = *(int *)(lVar6 + lVar15);
            lVar6 = *(longlong *)(param_3 + 0x58);
            if (*(longlong *)(param_3 + 0x58) == 0) {
              lVar6 = local_140;
            }
            iVar10 = iVar3 + 0x1f;
            if (-1 < iVar3) {
              iVar10 = iVar3;
            }
            bVar8 = (byte)iVar3 & 0x1f;
            puVar1 = (uint *)(lVar6 + (longlong)(iVar10 >> 5) * 4);
            *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
            local_144 = (undefined4)CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          }
        }
        lVar16 = lVar16 + 1;
        uVar7 = (ulonglong)*(int *)(param_2 + 0x48);
        lVar15 = lVar15 + 0x100;
      } while (lVar16 < (longlong)uVar7);
      bVar8 = (byte)local_144;
    }
    uVar7 = CONCAT71((int7)(uVar7 >> 8),(int)uVar7 == 0 | bVar8);
  }
  else {
    uVar7 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffffffffff01;
}



// FUNCTION 14307c864 FUN_14307c864 body=69 status=ok
// SIG undefined FUN_14307c864(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307c864(void)

{
  _DAT_14ca5b630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307c8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b638,1);
  return;
}



// FUNCTION 14307c8a9 FUN_14307c8a9 body=69 status=ok
// SIG undefined FUN_14307c8a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307c8a9(void)

{
  _DAT_14ca5b648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307c8eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b650,1);
  return;
}



// FUNCTION 14307c8ee FUN_14307c8ee body=69 status=ok
// SIG undefined FUN_14307c8ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307c8ee(void)

{
  _DAT_14ca5b658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b660,1);
  return;
}



// FUNCTION 14307c933 FUN_14307c933 body=69 status=ok
// SIG undefined FUN_14307c933(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307c933(void)

{
  _DAT_14ca5b670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307c975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b678,1);
  return;
}



// FUNCTION 14307c978 FUN_14307c978 body=69 status=ok
// SIG undefined FUN_14307c978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307c978(void)

{
  _DAT_14ca5b680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307c9ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5b688,1);
  return;
}



// FUNCTION 14307c9e1 FUN_14307c9e1 body=1194 status=ok
// SIG undefined FUN_14307c9e1(void)

void FUN_14307c9e1(longlong param_1,longlong param_2,longlong param_3,int *param_4,char param_5,
                  longlong param_6,longlong *param_7,int param_8,undefined8 param_9)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined1 local_c9;
  undefined8 *local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar14 = *(undefined8 *)(*param_7 + 0x84);
  lVar6 = param_7[2];
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar13 + 0x2e;
  local_e0 = puVar1;
  local_d8 = param_3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x180);
    puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar13 + 0x2e;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar13 = &PTR_FUN_14a309d38;
  puVar10 = puVar13 + 2;
  FUN_1473148e4(puVar10);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  lVar9 = local_d8;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar13;
  puVar13[0xe] = param_9;
  puVar13[0xf] = 0;
  *(undefined4 *)(puVar13 + 0x10) = 0xffff0001;
  puVar13[0x26] = *(undefined8 *)(param_2 + 0x1c0);
  puVar13[0x27] = 0;
  *(undefined2 *)(puVar13 + 0x28) = 0x101;
  *(undefined4 *)((longlong)puVar13 + 0x144) = 0x11;
  puVar13[6] = *(undefined8 *)(local_d8 + 0x18);
  *(undefined1 *)(puVar13 + 7) = 1;
  FUN_140119f90(param_2,&local_c8,*(undefined4 *)(local_d8 + 0x3090));
  *(undefined4 *)(puVar13 + 4) = (undefined4)local_b8;
  *(undefined4 *)((longlong)puVar13 + 0x24) = local_b8._4_4_;
  *(undefined4 *)(puVar13 + 5) = uStack_b0;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_ac;
  *puVar10 = local_c8;
  puVar13[3] = lStack_c0;
  puVar13[8] = *param_7;
  puVar13[9] = DAT_14c9c0de0;
  iVar2 = param_4[3];
  iVar3 = param_4[1];
  iVar4 = param_4[2];
  iVar5 = *param_4;
  puVar13[10] = *(undefined8 *)param_4;
  puVar13[0xb] = CONCAT44(iVar2 - iVar3,iVar4 - iVar5);
  *(float *)(puVar13 + 0xc) = (1.0 / (float)(int)uVar14) * ((float)(int)lVar6 + -0.5);
  *(float *)((longlong)puVar13 + 100) =
       (1.0 / (float)(int)((ulonglong)uVar14 >> 0x20)) *
       ((float)(int)((ulonglong)lVar6 >> 0x20) + -0.5);
  *(float *)(puVar13 + 0xd) = 1.0 / (float)param_8;
  uVar14 = *(undefined8 *)(lVar9 + 0x13818);
  FUN_145f6d740();
  FUN_1448e935e(uVar14,&local_c8,&DAT_14ca5b948,param_8 != 1);
  FUN_145f6d740();
  lVar6 = lStack_c0;
  puVar13 = local_c8;
  if ((*(byte *)(*(longlong *)(param_6 + 0x28) + 0x1d0) & 8) == 0) {
    puVar12 = (undefined4 *)(param_6 + 0xe0);
  }
  else {
    puVar12 = (undefined4 *)(*(longlong *)(param_6 + 0x28) + 400);
  }
  uVar14 = DAT_14ca54790;
  if (param_5 != '\0') {
    switch(*puVar12) {
    case 0:
      uVar14 = DAT_14c9dc468;
      break;
    case 1:
      uVar14 = DAT_14c9dc480;
      break;
    case 2:
      uVar14 = DAT_14c9dc498;
      break;
    case 3:
      uVar14 = DAT_14c9dc4b0;
      break;
    default:
      uVar14 = 0;
    }
  }
  FUN_145f6d9ae();
  local_c8 = (undefined8 *)0x0;
  lStack_c0 = 0;
  FUN_1448f70da(puVar13,&DAT_14ca5bc78,puVar10,&local_c8);
  uVar7 = *(undefined8 *)param_4;
  uVar8 = *(undefined8 *)(param_4 + 2);
  FUN_14731498c();
  FUN_140069376(param_1);
  puVar1 = local_e0;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar15 + 0x3e;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_e0,0x1f8);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar15 + 0x3e;
  }
  *local_e0 = (ulonglong)puVar11;
  lStack_c0 = DAT_14ca5be10;
  if (DAT_14ca5be10 != 0) {
    LOCK();
    *(int *)(DAT_14ca5be10 + 8) = *(int *)(DAT_14ca5be10 + 8) + 1;
    UNLOCK();
  }
  local_b8 = &DAT_14ca5bdc8;
  local_e8 = 2;
  local_c8 = puVar10;
  FUN_140068f1a(puVar15,&local_c9,&local_c8,1);
  *puVar15 = &PTR_FUN_14a309d40;
  puVar15[0x37] = puVar10;
  puVar15[0x38] = local_d8;
  puVar15[0x39] = puVar13;
  puVar15[0x3a] = lVar6;
  puVar15[0x3b] = uVar14;
  puVar15[0x3c] = uVar7;
  puVar15[0x3d] = uVar8;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar15);
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307ce8c FUN_14307ce8c body=4586 status=ok
// SIG undefined FUN_14307ce8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307ce8c(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar3;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  char cVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined1 auStack_328 [32];
  ulonglong *local_308;
  longlong local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  ulonglong local_2d8;
  ulonglong local_2d0;
  longlong *local_2c8;
  longlong local_2c0;
  ulonglong local_2b8;
  undefined4 *local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  longlong local_298;
  longlong *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  longlong *local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong *local_258;
  ulonglong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulonglong local_234;
  undefined4 local_22c;
  int local_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 local_214;
  byte local_20d;
  undefined4 local_20c;
  ulonglong local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  ulonglong local_178;
  ulonglong local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_150;
  int local_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined2 local_108;
  undefined1 uStack_106;
  undefined2 uStack_105;
  undefined1 uStack_103;
  undefined2 uStack_102;
  undefined4 local_100;
  int local_88;
  ulonglong local_80;
  double dVar2;
  double dVar4;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2c0 = param_2;
  local_2a8 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca5ba10) && (FUN_144b3d300(&DAT_14ca5ba10), DAT_14ca5ba10 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ContactShadows",1);
    if (plVar21 == (longlong *)0x0) {
      DAT_14ca5ba08 = 0;
    }
    else {
      DAT_14ca5ba08 = (**(code **)(*plVar21 + 0x68))(plVar21);
    }
    _Init_thread_footer(&DAT_14ca5ba10);
  }
  if (((DAT_14ca5ba08 == 0) || (*(int *)(DAT_14ca5ba08 + 4) != 0)) && (0 < (int)param_3[1])) {
    plVar21 = *(longlong **)(local_2a8 + 0x28);
    local_268 = param_1 + 0x178;
    local_2c8 = (longlong *)(param_1 + 0x70);
    local_260 = param_1 + 0x98;
    local_270 = param_1 + 0x198;
    lVar24 = 0;
    do {
      lVar23 = *param_3;
      puVar8 = *(ulonglong **)(param_1 + 0x18);
      iVar25 = *(int *)(lVar23 + 0x1de0 + lVar24 * 0x13c10);
      iVar6 = *(int *)((longlong)puVar8 + 0x17c);
      if (iVar6 != iVar25) {
        *(int *)((longlong)puVar8 + 0x17c) = iVar25;
        puVar15 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar15 + 3;
        if ((undefined8 *)puVar8[1] < puVar18) {
          FUN_140023dd8(puVar8,0x20);
          puVar15 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar15 + 3;
        }
        *puVar8 = (ulonglong)puVar18;
        *(int *)(puVar8 + 0xc) = (int)puVar8[0xc] + 1;
        *(undefined8 **)puVar8[6] = puVar15;
        puVar8[6] = (ulonglong)(puVar15 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar8 + 0x17c);
        puVar15[1] = 0;
        *puVar15 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar15 + 2) = uVar7;
      }
      lVar23 = lVar23 + lVar24 * 0x13c10;
      if ((*(byte *)(*(longlong *)(lVar23 + 8) + 0x50) & 0x80) != 0) {
        local_248 = 0;
        uStack_240 = 0;
        cVar13 = (**(code **)(*plVar21 + 0xe0))(plVar21,&local_248,lVar23,lVar23 + 0x30f8);
        plVar12 = local_2c8;
        if (cVar13 == '\0') {
          uVar20 = *(ulonglong *)(lVar23 + 0x30f8);
          uVar22 = *(ulonglong *)(lVar23 + 0x3100);
          iVar25 = (int)(uVar22 >> 0x20);
          iVar27 = (int)(uVar20 >> 0x20);
          local_248 = uVar20;
          uStack_240 = uVar22;
        }
        else {
          uVar22 = uStack_240 & 0xffffffff;
          uVar20 = local_248 & 0xffffffff;
          iVar25 = uStack_240._4_4_;
          iVar27 = local_248._4_4_;
        }
        if (0 < ((int)uVar22 - (int)uVar20) * (iVar25 - iVar27)) {
          local_2d0 = local_248;
          local_258 = param_3;
          if (DAT_14ca5b640 == 1) {
            puVar16 = (undefined *)(*(longlong *)(lVar23 + 8) + 0x1b8);
            if (*(char *)(*(longlong *)(lVar23 + 8) + 0xd0) == '\0') {
              puVar16 = &DAT_14cb05410;
            }
            local_150 = *(undefined8 *)(puVar16 + 0x10);
            local_114 = DAT_14ca84e40;
            if ((int)local_150 < DAT_14ca84e40) {
              local_114 = (int)local_150;
            }
            if (local_114 < 2) {
              local_114 = 1;
            }
            iVar25 = (int)((ulonglong)local_150 >> 0x20);
            local_110 = DAT_14ca84e40;
            if (iVar25 < DAT_14ca84e40) {
              local_110 = iVar25;
            }
            uStack_120 = DAT_14ca85098;
            local_2b8 = uStack_240;
            uStack_130 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
            uStack_128 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
            uStack_11c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            uStack_106 = 0;
            local_138 = &DAT_00020008;
            uStack_105 = 0x15;
            local_10c = 0x10001;
            local_108 = 0x101;
            uStack_118 = 0;
            uStack_103 = 0xff;
            if (local_110 < 2) {
              local_110 = 1;
            }
            uVar22 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
            uVar20 = uVar22 + 0x120;
            if (*(ulonglong *)(param_1 + 0x78) < uVar20) {
              FUN_140023dd8(local_2c8,0x128);
              uVar22 = *plVar12 + 7U & 0xfffffffffffffff8;
              uVar20 = uVar22 + 0x120;
            }
            *(ulonglong *)(param_1 + 0x70) = uVar20;
            FUN_1456bbb8c(uVar22,L"ScreenSpaceShadows",&local_138,0);
            local_2d8 = (ulonglong)*(int *)(param_1 + 0x180);
            uVar14 = *(int *)(param_1 + 0x180) + 1;
            *(uint *)(param_1 + 0x180) = uVar14;
            if (*(uint *)(param_1 + 0x184) < uVar14) {
              FUN_14472c0f6(local_268,local_2d8);
            }
            uVar20 = local_2d0;
            *(ulonglong *)(*(longlong *)(param_1 + 0x178) + local_2d8 * 8) = uVar22;
            *(int *)(uVar22 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
            local_288 = *(undefined8 **)(local_2c0 + 0x1c8);
            local_290 = *(longlong **)(local_2a8 + 0x28);
            dVar1 = (double)local_290[10];
            dVar2 = (double)local_290[10];
            dVar10 = -(double)local_290[0xe];
            dVar11 = -(double)local_290[0xe];
            dVar3 = (double)local_290[0x12];
            dVar4 = (double)local_290[0x12];
            local_160 = (float)(*(double *)(lVar23 + 0xb20) * 0.0 +
                               ((dVar10 * *(double *)(lVar23 + 0xae0) -
                                dVar1 * *(double *)(lVar23 + 0xac0)) -
                               dVar3 * *(double *)(lVar23 + 0xb00)));
            local_15c = (float)(*(double *)(lVar23 + 0xb28) * 0.0 +
                               ((dVar11 * *(double *)(lVar23 + 0xae8) -
                                dVar2 * *(double *)(lVar23 + 0xac8)) -
                               dVar4 * *(double *)(lVar23 + 0xb08)));
            local_168 = (float)(*(double *)(lVar23 + 0xb10) * 0.0 +
                               ((*(double *)(lVar23 + 0xad0) * dVar10 -
                                *(double *)(lVar23 + 0xab0) * dVar1) -
                               *(double *)(lVar23 + 0xaf0) * dVar3));
            local_164 = (float)(*(double *)(lVar23 + 0xb18) * 0.0 +
                               ((*(double *)(lVar23 + 0xad8) * dVar11 -
                                *(double *)(lVar23 + 0xab8) * dVar2) -
                               *(double *)(lVar23 + 0xaf8) * dVar4));
            local_170 = local_2d0;
            local_178 = local_2b8;
            local_308 = &local_178;
            local_2d8 = uVar22;
            FUN_147310030(&local_138,&local_168,&local_150,&local_170);
            if (0 < local_88) {
              local_250 = (ulonglong)(uint)((int)local_2b8 - (int)uVar20) |
                          local_2b8 - (uVar20 & 0xffffffff00000000) & 0xffffffff00000000;
              puVar17 = &uStack_118;
              uVar22 = 0;
              local_298 = param_1;
              local_278 = plVar21;
              do {
                plVar21 = local_2c8;
                puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar15 + 0x1a;
                local_2b0 = puVar17;
                local_2a0 = uVar22;
                if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
                  FUN_140023dd8(local_2c8,0xe0);
                  puVar15 = (undefined8 *)(*plVar21 + 0xfU & 0xfffffffffffffff0);
                  puVar18 = puVar15 + 0x1a;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar18;
                *puVar15 = &PTR_FUN_14a309e08;
                puVar15[2] = 0;
                puVar15[4] = 0;
                *(undefined1 *)(puVar15 + 5) = 1;
                puVar15[6] = 0;
                *(undefined1 *)(puVar15 + 7) = 1;
                puVar15[8] = 0;
                puVar15[9] = 0;
                puVar15[10] = 0;
                *(undefined1 *)(puVar15 + 0xb) = 1;
                puVar15[0x16] = 0;
                puVar15[0x17] = 0x3f80000000000000;
                puVar15[0x12] = 0;
                puVar15[0x13] = 0;
                iVar25 = *(int *)(param_1 + 0xa0);
                *(uint *)(param_1 + 0xa0) = iVar25 + 1U;
                if (*(uint *)(param_1 + 0xa4) < iVar25 + 1U) {
                  FUN_1448cfae8(local_260,iVar25);
                }
                plVar21 = local_2c8;
                *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar25 * 8) = puVar15;
                uVar5 = *(undefined1 *)(local_2d8 + 0x94);
                puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar18 = puVar26 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
                  FUN_140023dd8(local_2c8,0x50);
                  puVar26 = (undefined8 *)(*plVar21 + 7U & 0xfffffffffffffff8);
                  puVar18 = puVar26 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar18;
                puVar26[1] = *(undefined8 *)(local_2d8 + 8);
                puVar26[2] = 0;
                *(undefined1 *)(puVar26 + 3) = 0;
                *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar26 + 5) = 0;
                *puVar26 = &PTR_FUN_14a1fb948;
                *(undefined1 *)(puVar26 + 6) = uVar5;
                *(undefined1 *)(puVar26 + 7) = 0;
                *(undefined4 *)((longlong)puVar26 + 0x31) = 0;
                *(undefined2 *)((longlong)puVar26 + 0x35) = 0;
                puVar26[8] = local_2d8;
                iVar25 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar25 + 1U;
                if (*(uint *)(param_1 + 0x1a4) < iVar25 + 1U) {
                  FUN_1447568fc(local_270,iVar25);
                }
                lVar19 = local_2c0;
                local_280 = puVar15 + 2;
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar25 * 8) = puVar26;
                *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar15[2] = puVar26;
                FUN_140119f90(local_2c0,&local_208,*(undefined4 *)(lVar23 + 0x3090));
                puVar15[6] = local_1f8;
                puVar15[7] = uStack_1f0;
                puVar15[4] = local_208;
                puVar15[5] = uStack_200;
                iVar25 = *(int *)(local_288 + 0x11);
                *(float *)(puVar15 + 0x15) = 1.0 / (float)*(int *)((longlong)local_288 + 0x84);
                *(float *)((longlong)puVar15 + 0xac) = 1.0 / (float)iVar25;
                puVar15[8] = *(undefined8 *)(lVar19 + 0x200);
                puVar15[9] = DAT_14ca34fe0;
                lVar19 = FUN_1447e4f80();
                plVar21 = local_290;
                cVar13 = *(char *)(lVar19 + 0x41);
                if (*(char *)(lVar19 + 0x41) == '\x03') {
                  cVar13 = '\x02';
                }
                puVar15[10] = *(undefined8 *)(lVar23 + 0x18);
                *(char *)(puVar15 + 0xb) = cVar13;
                puVar15[0x12] = local_2d0;
                puVar15[0x13] = local_250;
                *(undefined4 *)(puVar15 + 0x14) = 1;
                (**(code **)(*local_290 + 0x78))(local_290,&local_208,0);
                *(undefined4 *)(puVar15 + 0xd) = local_1d0;
                puVar15[0xc] = local_1d8;
                local_308 = (ulonglong *)&local_218;
                FUN_1471d2472(plVar21,&local_20c,&local_20d,&local_214);
                puVar17 = local_2b0;
                *(undefined4 *)((longlong)puVar15 + 0x6c) = local_20c;
                *(uint *)(puVar15 + 0xe) = (uint)local_20d;
                *(undefined4 *)((longlong)puVar15 + 0x74) = local_214;
                *(undefined4 *)(puVar15 + 0xf) = local_218;
                *(undefined4 *)((longlong)puVar15 + 0x7c) = DAT_14c760a4c;
                *(float *)(puVar15 + 0x10) = 1.0 / _DAT_14c760a50;
                *(undefined4 *)((longlong)puVar15 + 0x84) = DAT_14c760a48;
                *(undefined4 *)(puVar15 + 0x16) = (undefined4)local_138;
                *(undefined4 *)((longlong)puVar15 + 0xb4) = local_138._4_4_;
                *(undefined4 *)(puVar15 + 0x17) = (undefined4)uStack_130;
                *(undefined4 *)((longlong)puVar15 + 0xbc) = uStack_130._4_4_;
                puVar15[0x18] = *(undefined8 *)(local_2b0 + -1);
                *(undefined4 *)(puVar15 + 0x19) = 0;
                uVar7 = DAT_14ca5b668;
                uVar9 = *(undefined8 *)(lVar23 + 0x13818);
                FUN_145eb0cc6();
                uVar20 = local_2d0;
                FUN_1448e935e(uVar9,&local_148,&DAT_14ca5b820,uVar7);
                FUN_145eb0cc6();
                param_1 = local_298;
                local_228 = local_148;
                iStack_224 = iStack_144;
                uStack_220 = uStack_140;
                uStack_21c = uStack_13c;
                local_22c = puVar17[-2];
                local_234 = *(ulonglong *)(puVar17 + -4);
                local_308 = &local_234;
                FUN_14731080d(local_298,&local_148,&local_228,local_280);
                uVar22 = local_2a0 + 1;
                puVar17 = puVar17 + 5;
                plVar21 = local_278;
              } while ((longlong)uVar22 < (longlong)local_88);
            }
            local_2f8 = &local_138;
            local_138 = (undefined1 *)local_2d8;
            uStack_128 = local_2b8;
            uStack_200 = local_2b8;
            local_2e8 = param_6;
            local_300 = local_2a8;
            local_308 = (ulonglong *)CONCAT71(local_308._1_7_,param_5);
            local_2f0 = 1;
            local_208 = uVar20;
            uStack_130 = uVar20;
            FUN_14307c9e1(param_1,local_2c0,lVar23,&local_208);
            param_3 = local_258;
          }
          else {
            puVar16 = (undefined *)(*(longlong *)(lVar23 + 8) + 0x1b8);
            if (*(char *)(*(longlong *)(lVar23 + 8) + 0xd0) == '\0') {
              puVar16 = &DAT_14cb05410;
            }
            uVar20 = *(ulonglong *)(puVar16 + 0x10);
            local_110 = (int)(uVar20 >> 0x20) / 2;
            local_114 = (int)(((uint)(uVar20 >> 0x1f) & 1) + (int)uVar20) >> 1;
            if (DAT_14ca84e40 <= local_114) {
              local_114 = DAT_14ca84e40;
            }
            if (local_114 < 2) {
              local_114 = 1;
            }
            if (DAT_14ca84e40 <= local_110) {
              local_110 = DAT_14ca84e40;
            }
            uStack_120 = DAT_14ca85098;
            local_2d8 = uStack_240;
            uStack_130 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
            uStack_128 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
            uStack_11c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            uStack_106 = 0;
            local_138 = &DAT_00020008;
            uStack_105 = 0xf;
            local_10c = 0x10001;
            local_108 = 0x101;
            uStack_118 = 0;
            uStack_103 = 0xff;
            if (local_110 < 2) {
              local_110 = 1;
            }
            uVar22 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
            uVar20 = uVar22 + 0x120;
            if (*(ulonglong *)(param_1 + 0x78) < uVar20) {
              FUN_140023dd8(local_2c8,0x128);
              uVar22 = *plVar12 + 7U & 0xfffffffffffffff8;
              uVar20 = uVar22 + 0x120;
            }
            *(ulonglong *)(param_1 + 0x70) = uVar20;
            FUN_1456bbb8c(uVar22,L"ScreenSpaceShadows",&local_138,0);
            iVar25 = *(int *)(param_1 + 0x180);
            *(uint *)(param_1 + 0x180) = iVar25 + 1U;
            if (*(uint *)(param_1 + 0x184) < iVar25 + 1U) {
              FUN_14472c0f6(local_268,iVar25);
            }
            plVar12 = local_2c8;
            *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar25 * 8) = uVar22;
            *(int *)(uVar22 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
            puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar18 = puVar15 + 0x14;
            local_278 = plVar21;
            if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
              FUN_140023dd8(local_2c8,0xb0);
              puVar15 = (undefined8 *)(*plVar12 + 0xfU & 0xfffffffffffffff0);
              puVar18 = puVar15 + 0x14;
            }
            *(undefined8 **)(param_1 + 0x70) = puVar18;
            *puVar15 = &PTR_FUN_14a309de8;
            puVar15[2] = 0;
            puVar15[4] = 0;
            *(undefined1 *)(puVar15 + 5) = 1;
            puVar15[6] = 0;
            *(undefined1 *)(puVar15 + 7) = 1;
            puVar15[8] = 0;
            *(undefined1 *)(puVar15 + 9) = 1;
            puVar15[10] = 0;
            puVar15[0x10] = 0;
            puVar15[0x11] = 0;
            iVar25 = *(int *)(param_1 + 0xa0);
            *(uint *)(param_1 + 0xa0) = iVar25 + 1U;
            if (*(uint *)(param_1 + 0xa4) < iVar25 + 1U) {
              FUN_1448cfae8(local_260,iVar25);
            }
            plVar21 = local_2c8;
            *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar25 * 8) = puVar15;
            uVar5 = *(undefined1 *)(uVar22 + 0x94);
            puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar18 = puVar26 + 9;
            local_2a0 = uVar22;
            if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
              FUN_140023dd8(local_2c8,0x50);
              puVar26 = (undefined8 *)(*plVar21 + 7U & 0xfffffffffffffff8);
              puVar18 = puVar26 + 9;
            }
            uVar20 = local_2d0;
            local_2b0 = (undefined4 *)(local_2d8 >> 0x20);
            local_280 = puVar15 + 2;
            local_288 = puVar15 + 6;
            *(undefined8 **)(param_1 + 0x70) = puVar18;
            puVar26[1] = *(undefined8 *)(local_2a0 + 8);
            puVar26[2] = 0;
            *(undefined1 *)(puVar26 + 3) = 0;
            *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar26 + 5) = 0;
            *puVar26 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar26 + 6) = uVar5;
            *(undefined1 *)(puVar26 + 7) = 0;
            *(undefined4 *)((longlong)puVar26 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar26 + 0x35) = 0;
            puVar26[8] = local_2a0;
            iVar25 = *(int *)(param_1 + 0x1a0);
            *(uint *)(param_1 + 0x1a0) = iVar25 + 1U;
            local_298 = param_1;
            if (*(uint *)(param_1 + 0x1a4) < iVar25 + 1U) {
              FUN_1447568fc(local_270,iVar25);
            }
            *(undefined8 **)(*(longlong *)(local_298 + 0x198) + (longlong)iVar25 * 8) = puVar26;
            *(int *)((longlong)puVar26 + 0x1c) = *(int *)(local_298 + 0x1a0) + -1;
            uVar14 = (int)local_2d8 - (int)local_2d0;
            local_290 = (longlong *)(ulonglong)uVar14;
            iVar27 = (int)uVar14 / 2;
            uVar14 = (int)local_2b0 - (int)(uVar20 >> 0x20);
            local_2b0 = (undefined4 *)(ulonglong)uVar14;
            iVar25 = (int)uVar14 / 2;
            local_2b8 = CONCAT44(iVar25,iVar27);
            puVar15[2] = puVar26;
            lVar19 = FUN_1447e4f80();
            cVar13 = *(char *)(lVar19 + 0x41);
            if (*(char *)(lVar19 + 0x41) == '\x03') {
              cVar13 = '\x02';
            }
            puVar15[4] = *(undefined8 *)(lVar23 + 0x18);
            *(char *)(puVar15 + 5) = cVar13;
            FUN_140119f90(local_2c0,&local_138,*(undefined4 *)(lVar23 + 0x3090));
            *(undefined4 *)(local_288 + 2) = (undefined4)uStack_128;
            *(undefined4 *)((longlong)local_288 + 0x14) = uStack_128._4_4_;
            *(undefined4 *)(local_288 + 3) = uStack_120;
            *(uint *)((longlong)local_288 + 0x1c) = uStack_11c;
            *(undefined4 *)local_288 = (undefined4)local_138;
            *(undefined4 *)((longlong)local_288 + 4) = local_138._4_4_;
            *(undefined4 *)(local_288 + 1) = (undefined4)uStack_130;
            *(undefined4 *)((longlong)local_288 + 0xc) = uStack_130._4_4_;
            puVar15[10] = *(undefined8 *)(local_2c0 + 0x200);
            puVar15[0x10] = local_2d0;
            puVar15[0x11] = (ulonglong)local_290 | (longlong)local_2b0 << 0x20;
            *(undefined4 *)(puVar15 + 0x12) = 2;
            plVar21 = *(longlong **)(local_2a8 + 0x28);
            (**(code **)(*plVar21 + 0x78))(plVar21,&local_138,0);
            *(undefined4 *)(puVar15 + 0xd) = local_100;
            puVar15[0xc] = CONCAT26(uStack_102,
                                    CONCAT15(uStack_103,
                                             CONCAT23(uStack_105,CONCAT12(uStack_106,local_108))));
            local_308 = &local_234;
            FUN_1471d2472(plVar21,&local_168,&local_150,&local_228);
            *(float *)((longlong)puVar15 + 0x6c) = local_168;
            *(uint *)(puVar15 + 0xe) = (uint)(byte)local_150;
            *(int *)((longlong)puVar15 + 0x74) = local_228;
            *(undefined4 *)(puVar15 + 0xf) = (undefined4)local_234;
            FUN_1473106ee(*(undefined8 *)(lVar23 + 0x13818),&local_208);
            param_1 = local_298;
            local_148 = iVar27 + 0xe;
            if (-1 < iVar27 + 7) {
              local_148 = iVar27 + 7;
            }
            local_148 = local_148 >> 3;
            iStack_144 = iVar25 + 0xe;
            if (-1 < iVar25 + 7) {
              iStack_144 = iVar25 + 7;
            }
            iStack_144 = iStack_144 >> 3;
            uStack_140 = 1;
            local_308 = (ulonglong *)&local_148;
            FUN_14731075b(local_298,&local_170,&local_208,local_280);
            local_138 = (undefined1 *)local_2a0;
            uStack_130 = 0;
            uStack_128 = local_2b8;
            local_208 = local_2d0;
            uStack_200 = local_2d8;
            local_2e8 = param_6;
            local_2f0 = 2;
            local_300 = local_2a8;
            local_308 = (ulonglong *)CONCAT71(local_308._1_7_,param_5);
            local_2f8 = &local_138;
            FUN_14307c9e1(param_1,local_2c0,lVar23,&local_208);
            param_3 = local_258;
            plVar21 = local_278;
          }
        }
      }
      if (*(int *)((longlong)puVar8 + 0x17c) != iVar6) {
        *(int *)((longlong)puVar8 + 0x17c) = iVar6;
        puVar15 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar15 + 3;
        if ((undefined8 *)puVar8[1] < puVar18) {
          FUN_140023dd8(puVar8,0x20);
          puVar15 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar15 + 3;
        }
        *puVar8 = (ulonglong)puVar18;
        *(int *)(puVar8 + 0xc) = (int)puVar8[0xc] + 1;
        *(undefined8 **)puVar8[6] = puVar15;
        puVar8[6] = (ulonglong)(puVar15 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar8 + 0x17c);
        puVar15[1] = 0;
        *puVar15 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar15 + 2) = uVar7;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)param_3[1]);
  }
  if ((local_80 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307e077 FUN_14307e077 body=69 status=ok
// SIG undefined FUN_14307e077(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e077(void)

{
  _DAT_14ca5ba18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5ba20,1);
  return;
}



// FUNCTION 14307e0bc FUN_14307e0bc body=69 status=ok
// SIG undefined FUN_14307e0bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e0bc(void)

{
  _DAT_14ca5ba30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e0fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5ba38,1);
  return;
}



// FUNCTION 14307e101 FUN_14307e101 body=69 status=ok
// SIG undefined FUN_14307e101(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e101(void)

{
  _DAT_14ca5ba48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5ba50,1);
  return;
}



// FUNCTION 14307e146 FUN_14307e146 body=69 status=ok
// SIG undefined FUN_14307e146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e146(void)

{
  _DAT_14ca5ba60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5ba68,1);
  return;
}



// FUNCTION 14307e18b FUN_14307e18b body=69 status=ok
// SIG undefined FUN_14307e18b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e18b(void)

{
  _DAT_14ca5ba78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e1cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5ba80,1);
  return;
}



// FUNCTION 14307e1d0 FUN_14307e1d0 body=69 status=ok
// SIG undefined FUN_14307e1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e1d0(void)

{
  _DAT_14ca5ba90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5ba98,1);
  return;
}



// FUNCTION 14307e215 FUN_14307e215 body=69 status=ok
// SIG undefined FUN_14307e215(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e215(void)

{
  _DAT_14ca5baa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5bab0,1);
  return;
}



// FUNCTION 14307e25a FUN_14307e25a body=69 status=ok
// SIG undefined FUN_14307e25a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e25a(void)

{
  _DAT_14ca5bac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5bac8,1);
  return;
}



// FUNCTION 14307e29f FUN_14307e29f body=69 status=ok
// SIG undefined FUN_14307e29f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e29f(void)

{
  _DAT_14ca5bad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5bae0,1);
  return;
}



// FUNCTION 14307e2e4 FUN_14307e2e4 body=69 status=ok
// SIG undefined FUN_14307e2e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e2e4(void)

{
  _DAT_14ca5baf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5baf8,1);
  return;
}



// FUNCTION 14307e329 FUN_14307e329 body=69 status=ok
// SIG undefined FUN_14307e329(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e329(void)

{
  _DAT_14ca5bb08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5bb10,1);
  return;
}



// FUNCTION 14307e36e FUN_14307e36e body=69 status=ok
// SIG undefined FUN_14307e36e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307e36e(void)

{
  _DAT_14ca5bb20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca5bb28,1);
  return;
}



// FUNCTION 14307e3b3 FUN_14307e3b3 body=124 status=ok
// SIG undefined FUN_14307e3b3(void)

undefined4 FUN_14307e3b3(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14ca5bae8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return CONCAT31((int3)(*(uint *)(param_1 + 4) >> 8),
                  (*(uint *)(param_1 + 4) & 8) == 0 && *(int *)(lVar2 + uVar5 * 4) != 0);
}



// FUNCTION 14307e430 FUN_14307e430 body=223 status=ok
// SIG undefined FUN_14307e430(void)

void FUN_14307e430(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((*(int *)(lVar1 + 0x580) != 0) || (*(int *)(lVar1 + 0x590) != 0)) {
    lVar3 = lVar1;
    if (param_3 != '\0') {
      local_38 = *(undefined8 *)(param_1 + 0x70);
      local_48 = *(undefined8 **)(param_1 + 0x60);
      uStack_40 = *(undefined4 *)(param_1 + 0x68);
      uStack_3c = *(undefined4 *)(param_1 + 0x6c);
      FUN_1430d82fc(*(undefined8 *)(param_1 + 0x58),param_2,lVar1);
      lVar3 = *(longlong *)(param_1 + 0x40);
    }
    cVar2 = FUN_144adbdbb(*(undefined2 *)(lVar3 + 0x8a8),*(undefined4 *)(lVar3 + 0x8a4));
    if (cVar2 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x40);
      local_30 = *(undefined8 *)(lVar3 + 1000);
      local_48 = &local_30;
      local_28 = *(undefined4 *)(lVar3 + 0x3f0);
      FUN_1430d9de6(*(undefined8 *)(param_1 + 0x58),param_2,lVar3 + 0x10,lVar1 + 0x578);
    }
    FUN_1430ce958(*(undefined8 *)(param_1 + 0x58),param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14307e510 FUN_14307e510 body=518 status=ok
// SIG undefined FUN_14307e510(void)

void FUN_14307e510(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1[0xb] + 0x120) != 0) && (*(longlong *)(param_1[0xb] + 0x140) != 0)) {
    cVar2 = FUN_14307e3b3(param_1[8] + 0xe0);
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x12);
      if (*(char *)(param_1 + 0x12) == '\x01') {
        uVar3 = FUN_141784c82(param_2,param_3,param_1[0xb],L"Shadow.Virtual.MaskBits");
        *param_1 = uVar3;
        uVar3 = FUN_141784c82(param_2,param_3,param_1[0xb],L"Shadow.Virtual.MaskBits(HairStrands)");
        param_1[1] = uVar3;
        lVar4 = param_1[8];
        if (0 < *(int *)(lVar4 + 0x3f0)) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            lVar4 = *(longlong *)(lVar4 + 1000);
            lVar7 = lVar4 + lVar5;
            local_80 = *param_1;
            local_98 = param_1[0xb];
            puVar1 = (undefined4 *)(lVar4 + 0x30f8 + lVar5);
            local_58 = *puVar1;
            uStack_54 = puVar1[1];
            uStack_50 = puVar1[2];
            uStack_4c = puVar1[3];
            local_68 = 0;
            local_78 = 0;
            local_90 = &local_58;
            local_70 = 0xffffffff;
            local_88 = 0;
            FUN_14059760d(param_2,param_3,lVar7,uVar6 & 0xffffffff);
            if (*(char *)(lVar4 + 0x11a08 + lVar5) == '\x01') {
              local_80 = param_1[1];
              local_98 = param_1[0xb];
              puVar1 = (undefined4 *)(lVar4 + 0x30f8 + lVar5);
              local_58 = *puVar1;
              uStack_54 = puVar1[1];
              uStack_50 = puVar1[2];
              uStack_4c = puVar1[3];
              local_68 = 0;
              local_78 = 0;
              local_90 = &local_58;
              local_70 = 0xffffffff;
              local_88 = 1;
              FUN_14059760d(param_2,param_3,lVar7,uVar6 & 0xffffffff);
              local_98 = param_1[0xb];
              uVar3 = FUN_142c60d6d(param_2,lVar7,uVar6 & 0xffffffff,param_1[1]);
              param_1[2] = uVar3;
            }
            uVar6 = uVar6 + 1;
            lVar4 = param_1[8];
            lVar5 = lVar5 + 0x13c10;
          } while ((longlong)uVar6 < (longlong)*(int *)(lVar4 + 0x3f0));
        }
        if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      goto LAB_14307e6ea;
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
LAB_14307e6ea:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14307e718 FUN_14307e718 body=1344 status=ok
// SIG undefined FUN_14307e718(void)

void FUN_14307e718(ulonglong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 *local_190;
  undefined4 local_188;
  longlong *local_180;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [104];
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_160 = param_2;
  local_158 = param_3;
  if (*(longlong *)(param_1[0xb] + 0x120) != 0) {
    lVar14 = *(longlong *)(param_1[8] + 0x4d8);
    lVar12 = (longlong)*(int *)((longlong)param_4 + 0x34) * 0x68;
    if (*(int *)(lVar14 + 0x60 + lVar12) != -1) {
      FUN_1448e94e7(local_d8,param_2,*(undefined8 *)(param_3 + 0x198));
      uVar7 = param_1[8];
      if (0 < *(int *)(uVar7 + 0x3f0)) {
        lVar14 = lVar14 + lVar12;
        lVar12 = 0;
        uVar10 = 0;
        local_150 = param_4;
        do {
          lVar4 = *(longlong *)(uVar7 + 1000);
          lVar1 = lVar4 + lVar12;
          local_e8 = 0;
          uStack_e0 = 0;
          cVar6 = (**(code **)(*(longlong *)param_4[5] + 0xe0))
                            ((longlong *)param_4[5],&local_e8,lVar1,lVar4 + lVar12 + 0x30f8);
          if (cVar6 == '\0') {
            uVar7 = *(ulonglong *)(lVar4 + 0x30f8 + lVar12);
            uVar8 = *(ulonglong *)(lVar4 + 0x3100 + lVar12);
            iVar9 = (int)(uVar8 >> 0x20);
            iVar13 = (int)(uVar7 >> 0x20);
            local_e8 = uVar7;
            uStack_e0 = uVar8;
          }
          else {
            uVar8 = uStack_e0 & 0xffffffff;
            uVar7 = local_e8 & 0xffffffff;
            iVar9 = uStack_e0._4_4_;
            iVar13 = local_e8._4_4_;
          }
          if (0 < ((int)uVar8 - (int)uVar7) * (iVar9 - iVar13)) {
            if (*(int *)(lVar14 + 0x58) == 0) {
              uVar11 = *(undefined4 *)(lVar14 + 0x60);
            }
            else {
              FUN_1400d7ed0(lVar14,&local_70,lVar1);
              plVar5 = local_68;
              uVar11 = *(undefined4 *)(local_70 + 0x2b40);
              param_4 = local_150;
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_68 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  param_4 = local_150;
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                    param_4 = local_150;
                  }
                }
              }
            }
            if (param_5 != 0) {
              if (*(int *)(lVar14 + 0x58) < 1) {
                if ((char)param_1[0x11] == '\x01') {
                  local_178 = *param_1;
                  local_190 = (undefined4 *)param_1[0xb];
                  local_108 = (undefined4)local_e8;
                  uStack_104 = local_e8._4_4_;
                  uStack_100 = (undefined4)uStack_e0;
                  uStack_fc = uStack_e0._4_4_;
                  local_170 = param_5;
                  local_180 = (longlong *)CONCAT44(local_180._4_4_,uVar11);
                  local_198 = &local_108;
                  local_188 = 0;
                  FUN_1430e4db9(local_160,local_158,lVar1,uVar10 & 0xffffffff);
                }
                else {
                  local_118 = (undefined4)local_e8;
                  uStack_114 = local_e8._4_4_;
                  uStack_110 = (undefined4)uStack_e0;
                  uStack_10c = uStack_e0._4_4_;
                  local_198 = (undefined4 *)param_1[0xb];
                  local_170 = param_5;
                  local_178 = CONCAT44(local_178._4_4_,uVar11);
                  local_190 = &local_118;
                  local_188 = 0;
                  local_180 = param_4;
                  FUN_14732d106(local_160,local_158,lVar1,uVar10 & 0xffffffff);
                }
              }
              else {
                FUN_1400d7ed0(lVar14,&local_70,lVar1);
                local_f8 = (undefined4)local_e8;
                uStack_f4 = local_e8._4_4_;
                uStack_f0 = (undefined4)uStack_e0;
                uStack_ec = uStack_e0._4_4_;
                local_198 = (undefined4 *)param_1[0xb];
                local_168 = param_5;
                local_190 = &local_f8;
                local_170 = 0;
                local_178 = local_178 & 0xffffffffffffff00;
                local_188 = 0;
                local_180 = &local_70;
                FUN_14054672a(local_160,local_158,lVar1,uVar10 & 0xffffffff);
                plVar5 = local_68;
                param_4 = local_150;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_68 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_68)(local_68);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar5 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    param_4 = local_150;
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                      param_4 = local_150;
                    }
                  }
                }
              }
            }
            if ((param_6 != 0) && (*(char *)(lVar4 + 0x11a08 + lVar12) != '\0')) {
              if (*(int *)(lVar14 + 0x58) < 1) {
                if ((char)param_1[0x11] == '\x01') {
                  local_178 = param_1[1];
                  local_190 = (undefined4 *)param_1[0xb];
                  local_138 = (undefined4)local_e8;
                  uStack_134 = local_e8._4_4_;
                  uStack_130 = (undefined4)uStack_e0;
                  uStack_12c = uStack_e0._4_4_;
                  local_170 = param_6;
                  local_180 = (longlong *)CONCAT44(local_180._4_4_,uVar11);
                  local_198 = &local_138;
                  local_188 = 1;
                  FUN_1430e4db9(local_160,local_158,lVar1,uVar10 & 0xffffffff);
                }
                else {
                  local_148 = (undefined4)local_e8;
                  uStack_144 = local_e8._4_4_;
                  uStack_140 = (undefined4)uStack_e0;
                  uStack_13c = uStack_e0._4_4_;
                  local_198 = (undefined4 *)param_1[0xb];
                  local_170 = param_6;
                  local_178 = CONCAT44(local_178._4_4_,uVar11);
                  local_190 = &local_148;
                  local_188 = 1;
                  local_180 = param_4;
                  FUN_14732d106(local_160,local_158,lVar1,uVar10 & 0xffffffff);
                }
              }
              else {
                FUN_1400d7ed0(lVar14,&local_70,lVar1);
                local_128 = (undefined4)local_e8;
                uStack_124 = local_e8._4_4_;
                uStack_120 = (undefined4)uStack_e0;
                uStack_11c = uStack_e0._4_4_;
                local_198 = (undefined4 *)param_1[0xb];
                local_168 = param_6;
                local_190 = &local_128;
                local_170 = 0;
                local_178 = local_178 & 0xffffffffffffff00;
                local_188 = 1;
                local_180 = &local_70;
                FUN_14054672a(local_160,local_158,lVar1,uVar10 & 0xffffffff);
                plVar5 = local_68;
                param_4 = local_150;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_68 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_68)(local_68);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar5 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    param_4 = local_150;
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                      param_4 = local_150;
                    }
                  }
                }
              }
            }
          }
          uVar10 = uVar10 + 1;
          uVar7 = param_1[8];
          lVar12 = lVar12 + 0x13c10;
        } while ((longlong)uVar10 < (longlong)*(int *)(uVar7 + 0x3f0));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307ec8c FUN_14307ec8c body=450 status=ok
// SIG undefined FUN_14307ec8c(void)

void FUN_14307ec8c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14307eda7:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14307ede4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14307ece2;
LAB_14307ecd7:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14307ece2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014307ed0e;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14307ed64:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14307ede4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14307eda7;
code_r0x00014307ed0e:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14307ed64;
    }
  }
  goto LAB_14307ecd7;
}



// FUNCTION 14307ee60 FUN_14307ee60 body=1423 status=ok
// SIG undefined FUN_14307ee60(void)

void FUN_14307ee60(longlong param_1,longlong param_2,double *param_3,float param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 auStack_218 [32];
  double *local_1f8;
  undefined4 *local_1f0;
  double local_1e8;
  double local_1e0;
  uint local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar4 = *(longlong *)(param_2 + 0x28);
  local_d0 = &PTR_FUN_14a217cb0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  dVar10 = *(double *)(lVar4 + 0xd0);
  dVar2 = *(double *)(lVar4 + 0xd8);
  dVar3 = *(double *)(lVar4 + 0xe0);
  dVar5 = dVar3 * dVar3 + dVar10 * dVar10 + dVar2 * dVar2;
  if (((dVar5 != 1.0) || (dVar6 = dVar3, dVar7 = dVar10, dVar8 = dVar2, NAN(dVar5))) &&
     (dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e0, dVar8 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar6 = dVar3 * dVar5;
    dVar7 = dVar10 * dVar5;
    dVar8 = dVar2 * dVar5;
  }
  local_f0 = dVar6 * 8796093022208.0 + param_3[2];
  local_f8 = dVar8 * 8796093022208.0 + param_3[1];
  local_100 = dVar7 * 8796093022208.0 + *param_3;
  local_148 = *param_3;
  dStack_140 = param_3[1];
  local_138 = param_3[2];
  local_198 = (double)CONCAT44(DAT_14c75905c,DAT_14c75905c);
  uStack_190 = (double)CONCAT44(0x3f800000,DAT_14c75905c);
  local_168 = 0.0;
  uStack_160 = 0.0;
  local_158 = 0.0;
  uStack_150 = 0;
  uStack_14c = 0x3ff00000;
  uStack_130 = 0;
  local_128 = 0;
  uStack_124 = 0x3ff00000;
  uStack_120 = 0;
  uStack_11c = 0x3ff00000;
  local_118 = 0x3ff0000000000000;
  uStack_110 = 0;
  local_1d8 = local_1d8 & 0xffffff00;
  local_1e0 = (double)((ulonglong)local_1e0 & 0xffffffff00000000);
  local_1e8 = (double)((ulonglong)local_1e8 & 0xffffffff00000000);
  local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
  local_1f8 = (double *)CONCAT44(local_1f8._4_4_,0x28);
  local_e8 = dVar7;
  dStack_e0 = dVar8;
  local_d8 = dVar6;
  local_c8 = param_1;
  local_c0 = param_1;
  FUN_147cb8b35(&local_d0,&local_168,&local_198,SUB84((double)param_4,0));
  local_178 = DAT_14c758ffc;
  local_174 = DAT_14c758c60;
  local_170 = DAT_14c758c60;
  local_16c = 0x3f800000;
  local_168 = *(double *)(lVar4 + 0xf0);
  uStack_160 = *(double *)(lVar4 + 0xf8);
  local_158 = *(double *)(lVar4 + 0x100);
  dVar10 = local_158 * local_158 + local_168 * local_168 + uStack_160 * uStack_160;
  if ((dVar10 != 1.0) || (NAN(dVar10))) {
    if (9.99999993922529e-09 <= dVar10) {
      dVar10 = 1.0 / SQRT(dVar10);
      local_158 = local_158 * dVar10;
      uStack_160 = uStack_160 * dVar10;
      local_168 = local_168 * dVar10;
    }
    else {
      local_158 = DAT_14c8464f0;
      local_168 = DAT_14c8464e0;
      uStack_160 = DAT_14c8464e8;
    }
  }
  local_1e0 = (double)(param_4 + 4.3980465e+12);
  local_198 = *(double *)(lVar4 + 0x110);
  uStack_190 = *(double *)(lVar4 + 0x118);
  local_188 = *(double *)(lVar4 + 0x120);
  dVar10 = local_188 * local_188 + local_198 * local_198 + uStack_190 * uStack_190;
  if ((dVar10 != 1.0) || (NAN(dVar10))) {
    if (dVar10 < 9.99999993922529e-09) {
      local_188 = DAT_14c8464f0;
      local_198 = DAT_14c8464e0;
      uStack_190 = DAT_14c8464e8;
    }
    else {
      dVar10 = 1.0 / SQRT(dVar10);
      local_188 = local_188 * dVar10;
      uStack_190 = uStack_190 * dVar10;
      local_198 = local_198 * dVar10;
    }
  }
  local_1a0 = dVar6 * 0.5 * 8796093022208.0 + param_3[2];
  local_1a8 = dVar8 * 0.5 * 8796093022208.0 + param_3[1];
  local_1b0 = dVar7 * 0.5 * 8796093022208.0 + *param_3;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1f0 = &local_178;
  local_1f8 = &local_e8;
  local_1d8 = 0x19;
  local_1e8 = (double)param_4;
  FUN_147cb97ca(&local_d0,&local_1b0,&local_198,&local_168);
  local_168 = (double)CONCAT44(DAT_14c758c60,DAT_14c758c60);
  uStack_160 = (double)CONCAT44(0x3f800000,DAT_14c758c60);
  if (local_b8 == (undefined8 *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(local_b8 + 3);
  }
  local_1e8 = (double)((ulonglong)local_1e8 & 0xffffffff00000000);
  local_1f0 = (undefined4 *)((ulonglong)local_1f0 & 0xffffffff00000000);
  local_1f8 = (double *)CONCAT44(local_1f8._4_4_,uVar9);
  local_1e0 = (double)((ulonglong)local_1e0 & 0xffffffffffffff00);
  FUN_14095857a(local_c0 + 0x37a0,param_3,&local_100,&local_168);
  local_d0 = &PTR_FUN_14a217cb0;
  if (local_b8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b8 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307f414 FUN_14307f414 body=418 status=ok
// SIG undefined FUN_14307f414(void)

void FUN_14307f414(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_3 + 0x8a4);
  param_1[5] = 0;
  param_1[6] = 0x200000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[8] = 0;
  param_1[9] = 0x200000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x200000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x200000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x200000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_3 + 0x90;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(int *)(param_1 + 0x23) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  bVar2 = DAT_14ca96500;
  if (iVar1 != 1) {
    if (iVar1 < 3) {
      bVar2 = 0;
    }
    else {
      lVar3 = (ulonglong)DAT_14ca85550 * 0x3c;
      bVar2 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar3) != DAT_14ca81490) && (DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) == 0) {
          bVar2 = 1;
        }
        else {
          bVar2 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar3 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x24) = bVar2;
  param_1[0x27] = 0;
  param_1[0x28] = 0x200000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = L".\\Runtime/Renderer/Private/ShadowSetup.cpp(1338)";
  param_1[0x29] = param_2;
  param_1[0x2c] = param_2;
  param_1[0x22] = param_2;
  param_1[0x20] = param_1 + 0x29;
  param_1[0x1f] = param_1 + 0x2c;
  param_1[0x21] = &DAT_14ca4adc0;
  return;
}



// FUNCTION 14307f5b6 FUN_14307f5b6 body=374 status=ok
// SIG undefined FUN_14307f5b6(void)

void FUN_14307f5b6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x102000007010300;
  local_26 = 0x2000007;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_14307f6dd;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_14307f6dd:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14307f72e FUN_14307f72e body=258 status=ok
// SIG undefined FUN_14307f72e(void)

undefined8 * FUN_14307f72e(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14307f764;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_14307f764:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x22a <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x67U & 0xfffffffffffffff0);
      uVar7 = 0;
      if (puVar6 + 0x22a <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_14307f7e0;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14307f7e0:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x22b;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x1150;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a3099b0;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 14307f830 FUN_14307f830 body=125 status=ok
// SIG undefined FUN_14307f830(void)

void FUN_14307f830(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_1430801ce(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14307f8ae FUN_14307f8ae body=1052 status=ok
// SIG undefined FUN_14307f8ae(void)

undefined8 FUN_14307f8ae(longlong *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  DWORD DVar5;
  DWORD dwTlsIndex;
  DWORD DVar6;
  LPVOID lpTlsValue;
  int iVar7;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_118 [46];
  byte local_ea;
  byte local_e9;
  longlong local_e8;
  longlong *local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  int iVar8;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dwTlsIndex = DAT_14c7585d0;
  local_ea = param_2;
  local_e0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar5 = dwTlsIndex;
    if (bVar15) {
      DVar6 = DAT_14c7585d0;
      DVar5 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar5;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar6;
    }
  }
  plVar4 = local_e0;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar11 = *plVar4;
  if (local_ea == 0) {
    lVar11 = *plVar4;
    uVar9 = (ulonglong)*(uint *)(lVar11 + 0x34);
    if (*(int *)(lVar11 + 0x20) + 2 <= (int)*(uint *)(lVar11 + 0x34)) {
      FUN_14307f830(plVar4);
      lVar11 = *plVar4;
    }
    uVar14 = 0;
    if ('\x02' < *(char *)(lVar11 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_d0 = (longlong)auVar18._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar14 = (ulonglong)DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)(int)uVar14 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_e8 = (longlong)auVar18._0_8_;
      lVar11 = *plVar4;
      local_c0 = CONCAT71((int7)(uVar14 >> 8),1);
      goto LAB_14307fa3b;
    }
  }
  else {
    uVar9 = (ulonglong)*(uint *)(lVar11 + 0x34);
  }
  local_c0 = 0;
  local_e8 = 0;
LAB_14307fa3b:
  iVar8 = *(int *)(lVar11 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar11 + 0x30);
  puVar3 = *(undefined8 **)(lVar11 + 0x40);
  local_d8 = (int)uVar9 + -1;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_e9 = local_ea ^ 1;
  local_c0 = local_c0 ^ 1;
  local_d4 = iVar8;
  local_c8 = uVar9;
  do {
    LOCK();
    piVar1 = (int *)(lVar11 + 0x20);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar8) {
      bVar15 = local_d8 <= iVar10;
      if (local_d8 <= iVar10) {
        iVar10 = local_d8;
      }
      if ((local_e9 & bVar15) != 0) goto LAB_14307fbe7;
    }
    iVar10 = iVar10 * (int)local_b8;
    iVar13 = iVar10 + (int)local_b8;
    if (iVar13 < iVar8) {
      iVar8 = iVar13;
    }
    iVar7 = iVar8 - iVar10;
    if (iVar7 != 0 && iVar10 <= iVar8) {
      lVar11 = (longlong)iVar10;
      do {
        uVar12 = *puVar3;
        iVar8 = *piVar2;
        if (iVar8 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          iVar8 = *piVar2;
        }
        if ((iVar8 == 0x60000000) || (iVar8 == 0)) {
          *piVar2 = 0x40000010;
        }
        FUN_1448e6112(*(undefined8 *)(puVar3[1] + lVar11 * 8),uVar12);
        if ((iVar8 == 0x60000000) || (iVar8 == 0)) {
          *piVar2 = iVar8;
        }
        lVar11 = lVar11 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar8 = local_d4;
    plVar4 = local_e0;
    if (iVar10 < local_d4) {
      LOCK();
      piVar1 = (int *)(*local_e0 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((uint7)(uint3)((uint)local_d4 >> 8),1);
        if (local_ea == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_e0 + 0x48) + 0x10))();
        }
        goto LAB_14307fbe9;
      }
    }
    if (iVar13 < local_d4 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_e8 < (longlong)auVar18._0_8_ - local_d0) {
        *(undefined1 *)((longlong)plVar4 + 0xc) = 1;
LAB_14307fbe7:
        uVar12 = 0;
LAB_14307fbe9:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12;
      }
    }
    else if (local_d4 <= iVar13) goto LAB_14307fbe7;
    lVar11 = *plVar4;
  } while( true );
}



// FUNCTION 14307fccc FUN_14307fccc body=73 status=ok
// SIG undefined FUN_14307fccc(void)

void FUN_14307fccc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_1430801ce(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014307fd0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14307fd16 FUN_14307fd16 body=434 status=ok
// SIG undefined FUN_14307fd16(void)

undefined8 * FUN_14307fd16(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_14a3099b8;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_14308019e(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14307ec65);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_14307fde0;
      }
      _aligned_free(piVar3);
    }
  }
LAB_14307fde0:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14307ec65);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 14307fec8 FUN_14307fec8 body=57 status=ok
// SIG undefined FUN_14307fec8(void)

void FUN_14307fec8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    do {
      puVar1[-3] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
      puVar1[-2] = 0;
      puVar1[-1] = 0xe800000000000020;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14307ff02 FUN_14307ff02 body=667 status=ok
// SIG undefined FUN_14307ff02(void)

void FUN_14307ff02(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_14307fffd;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_14307ec65);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_14307fffd:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_143080077;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_143080077:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_14308011e;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14307ec65);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_14308011e;
    }
    _aligned_free(_Memory);
  }
LAB_14308011e:
  *param_1 = _Dst;
  return;
}



// FUNCTION 14308019e FUN_14308019e body=47 status=ok
// SIG undefined FUN_14308019e(void)

void FUN_14308019e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1430801ce FUN_1430801ce body=369 status=ok
// SIG undefined FUN_1430801ce(void)

void FUN_1430801ce(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_14a3099c0;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_14307fccc(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_14307fccc(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 14308035e FUN_14308035e body=450 status=ok
// SIG undefined FUN_14308035e(void)

void FUN_14308035e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a3099c0;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_14a309a00;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_14308043b;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14307ec65);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_14308043b:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_1430804b5;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1430804b5:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 143080520 FUN_143080520 body=26 status=ok
// SIG undefined FUN_143080520(void)

undefined8 FUN_143080520(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14307f8ae(param_2,0);
  }
  return 0;
}



// FUNCTION 14308053a FUN_14308053a body=72 status=ok
// SIG undefined FUN_14308053a(void)

undefined8
FUN_14308053a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_14307f8ae(param_3,0);
  }
  FUN_14308035e(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 1430805b4 FUN_1430805b4 body=26 status=ok
// SIG undefined FUN_1430805b4(void)

undefined8 FUN_1430805b4(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_14307f8ae(*param_2,0);
  }
  return 0;
}



// FUNCTION 1430805ce FUN_1430805ce body=70 status=ok
// SIG undefined FUN_1430805ce(void)

undefined8
FUN_1430805ce(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_14307f8ae(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a309a00;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 143080614 FUN_143080614 body=179 status=ok
// SIG undefined FUN_143080614(void)

void FUN_143080614(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_14307fccc(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14307ec65);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014308068f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1430806d6 FUN_1430806d6 body=547 status=ok
// SIG undefined FUN_1430806d6(void)

longlong * FUN_1430806d6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143080910 FUN_143080910 body=110 status=ok
// SIG undefined FUN_143080910(void)

undefined8 * FUN_143080910(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14308097e FUN_14308097e body=547 status=ok
// SIG undefined FUN_14308097e(void)

longlong * FUN_14308097e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143080ba2 FUN_143080ba2 body=477 status=ok
// SIG undefined FUN_143080ba2(void)

void FUN_143080ba2(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar9 = *piVar1;
  if (iVar9 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar9 = *piVar1;
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 1;
  FUN_144928a2e(&local_58,0);
  *local_58 = 0;
  LOCK();
  puVar2 = (uint *)(*(longlong *)(param_1 + 0xb0) + 0x1a8);
  uVar10 = *puVar2;
  *puVar2 = *puVar2 + 1;
  UNLOCK();
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if ((int)uVar10 < *(int *)(lVar6 + 0x170)) {
    do {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar6 + 0x168) + (longlong)(int)uVar10 * 8);
      local_68 = 1;
      cVar5 = FUN_143073406(uVar4,*(undefined8 *)(param_1 + 0xb8),uVar3,&local_58);
      lVar6 = *(longlong *)(param_1 + 0xb0);
      if (cVar5 == '\0') {
        lVar8 = lVar6 + 0x178;
        if (*(longlong *)(lVar6 + 0x188) != 0) {
          lVar8 = *(longlong *)(lVar6 + 0x188);
        }
        uVar7 = uVar10 + 0x1f;
        if (-1 < (int)uVar10) {
          uVar7 = uVar10;
        }
        if ((*(uint *)(lVar8 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0) {
          LOCK();
          puVar2 = (uint *)(lVar8 + (longlong)((int)uVar7 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
          UNLOCK();
        }
      }
      else {
        FUN_143072d94(uVar4,uVar3,*(undefined8 *)(lVar6 + 0x28));
        FUN_14306f122(uVar4,uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x28));
      }
      LOCK();
      puVar2 = (uint *)(*(longlong *)(param_1 + 0xb0) + 0x1a8);
      uVar10 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0xb0);
    } while ((int)uVar10 < *(int *)(lVar6 + 0x170));
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar1 = iVar9;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143080d80 FUN_143080d80 body=110 status=ok
// SIG undefined FUN_143080d80(void)

undefined8 * FUN_143080d80(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143080dee FUN_143080dee body=547 status=ok
// SIG undefined FUN_143080dee(void)

longlong * FUN_143080dee(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143081012 FUN_143081012 body=1203 status=ok
// SIG undefined FUN_143081012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143081012(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  size_t _Size;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *_Src;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  size_t sVar20;
  bool bVar21;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int local_8c;
  int *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_8c = *piVar1;
  if (local_8c == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_8c = *piVar1;
  }
  if ((local_8c == 0x60000000) || (local_8c == 0)) {
    *piVar1 = 0x40000010;
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  lVar19 = *(longlong *)(param_1 + 0xb0);
  iVar3 = *(int *)(lVar19 + 400);
  local_88 = piVar1;
  if (iVar3 == 0) {
    uVar11 = 1;
    iVar12 = 0;
    uVar17 = 0;
    iVar18 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar19 + 0x188);
    if (*(uint **)(lVar19 + 0x188) == (uint *)0x0) {
      puVar9 = (uint *)(lVar19 + 0x178);
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar18 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar18 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar12 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_14308129e;
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar9[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      iVar12 = 0;
      uVar17 = 0;
    }
    uVar11 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar18 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar18) {
      iVar18 = iVar3;
    }
  }
  if (iVar18 < iVar3) {
    uVar16 = 0xffffffff;
    local_80 = lVar19;
    do {
      if ((int)uStack_70 == 0) {
        uStack_70 = CONCAT44(uStack_70._4_4_,1);
        if (uStack_70._4_4_ == 0) {
          FUN_144928a2e(&local_78,0);
        }
        *local_78 = 0;
      }
      lVar15 = *(longlong *)(param_1 + 0xb0);
      lVar10 = lVar15 + 0x140;
      if (*(longlong *)(lVar15 + 0x148) != 0) {
        lVar10 = *(longlong *)(lVar15 + 0x148);
      }
      uVar5 = *(undefined8 *)(*(longlong *)(lVar15 + 0x168) + (longlong)iVar18 * 8);
      local_98 = *(undefined1 *)(param_1 + 0xb8);
      FUN_143073406(uVar5,*(undefined8 *)(lVar10 + (longlong)(*(int *)(lVar15 + 0x150) + -1) * 8),
                    uVar4,&local_78);
      FUN_143072d94(uVar5,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x28));
      FUN_14306f122(uVar5,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x28));
      uVar16 = uVar16 & ~(uint)uVar11;
      puVar9 = *(uint **)(local_80 + 0x188);
      if (*(uint **)(local_80 + 0x188) == (uint *)0x0) {
        puVar9 = (uint *)(lVar19 + 0x178);
      }
      iVar3 = *(int *)(local_80 + 400);
      iVar18 = (int)uVar17;
      lVar15 = (longlong)iVar18;
      uVar6 = puVar9[lVar15] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar18) {
          iVar8 = iVar18;
        }
        if (iVar7 <= iVar18) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar9[lVar15 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar15 == lVar10) goto LAB_143081297;
        }
        uVar17 = (ulonglong)(iVar18 + (int)lVar10 + 1);
        uVar16 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar18 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar18 < iVar3);
LAB_143081297:
    lVar19 = *(longlong *)(param_1 + 0xb0);
  }
LAB_14308129e:
  plVar13 = (longlong *)(lVar19 + 0x140);
  if (*(longlong **)(lVar19 + 0x148) != (longlong *)0x0) {
    plVar13 = *(longlong **)(lVar19 + 0x148);
  }
  if ((longlong)*(int *)(lVar19 + 0x150) != 0) {
    plVar14 = plVar13 + *(int *)(lVar19 + 0x150);
    do {
      lVar19 = *plVar13;
      FUN_1436a12c2(lVar19);
      FUN_144b27220(lVar19);
      *(undefined8 *)(lVar19 + 0x108) = 0;
      *(undefined8 *)(lVar19 + 0x110) = 0;
      *(undefined8 *)(lVar19 + 0xf8) = 0;
      *(undefined8 *)(lVar19 + 0x100) = 0;
      lVar15 = *(longlong *)(lVar19 + 0x148);
      if (lVar15 != 0) {
        uVar16 = *(uint *)(lVar19 + 0x158);
        if ((longlong)(int)uVar16 != 0) {
          _Src = *(void **)(lVar19 + 0x150);
          _Size = (longlong)(int)uVar16 * 8;
          sVar20 = 0;
          do {
            FUN_140152f5c(*(undefined8 *)((longlong)_Src + sVar20),lVar15);
            sVar20 = sVar20 + 8;
          } while (_Size != sVar20);
          LOCK();
          bVar21 = DAT_14ca8c140 == '\0';
          if (bVar21) {
            DAT_14ca8c140 = '\x01';
          }
          UNLOCK();
          if (!bVar21) {
            FUN_1447d2058(&DAT_14ca8c140);
          }
          iVar3 = DAT_14ca8c180;
          lVar15 = (longlong)DAT_14ca8c180;
          iVar18 = uVar16 + DAT_14ca8c180;
          uVar6 = DAT_14ca8c184 - DAT_14ca8c180;
          DAT_14ca8c180 = iVar18;
          if (uVar6 < uVar16) {
            FUN_1400f7990(&DAT_14ca8c178,iVar3);
          }
          memcpy((void *)(lVar15 * 8 + _DAT_14ca8c178),_Src,_Size);
          LOCK();
          bVar21 = DAT_14ca8c140 == '\x01';
          if (bVar21) {
            DAT_14ca8c140 = '\0';
          }
          UNLOCK();
          if (!bVar21) {
            FUN_14008cdb0(&DAT_14ca8c140);
          }
        }
        *(undefined4 *)(lVar19 + 0x158) = 0;
        if (*(int *)(lVar19 + 0x15c) < 0) {
          FUN_145ccb7b2(lVar19 + 0x150,0);
        }
      }
      FUN_1447609e4(lVar19 + 0x160);
      FUN_140215426(lVar19 + 0x188);
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar14);
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8c == 0x60000000) || (local_8c == 0)) {
    *local_88 = local_8c;
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430814c6 FUN_1430814c6 body=110 status=ok
// SIG undefined FUN_1430814c6(void)

undefined8 * FUN_1430814c6(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143081548 FUN_143081548 body=282 status=ok
// SIG undefined FUN_143081548(void)

undefined8 * FUN_143081548(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14307ec65);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14308166e FUN_14308166e body=99 status=ok
// SIG undefined FUN_14308166e(void)

void FUN_14308166e(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1430816d1 FUN_1430816d1 body=676 status=ok
// SIG undefined FUN_1430816d1(void)

void FUN_1430816d1(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      plVar2 = (longlong *)*plVar10;
      plVar11 = (longlong *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar4 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar2) >> 3);
      plVar8 = plVar2;
      plVar7 = plVar11;
      if (iVar13 != 0) {
LAB_143081798:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          lVar14 = plVar2[uVar5];
          plVar2[uVar5] = *plVar2;
          *plVar2 = lVar14;
          plVar6 = plVar11 + 1;
          plVar3 = plVar2;
          do {
            plVar1 = plVar3 + 1;
            plVar12 = plVar3 + 1;
            do {
              plVar3 = plVar12;
              plVar15 = plVar1;
              if (plVar11 < plVar3) break;
              plVar1 = plVar15 + 1;
              plVar12 = plVar3 + 1;
            } while ((uint)(*(int *)(*plVar2 + 0x95c) * *(int *)(*plVar2 + 0x958)) <=
                     (uint)(*(int *)(*plVar3 + 0x95c) * *(int *)(*plVar3 + 0x958)));
            plVar1 = plVar6 + -2;
            do {
              plVar12 = plVar6;
              plVar16 = plVar1;
              plVar6 = plVar12 + -1;
              if (plVar6 <= plVar2) break;
              plVar1 = plVar16 + -1;
            } while ((uint)(*(int *)(*plVar6 + 0x95c) * *(int *)(*plVar6 + 0x958)) <=
                     (uint)(*(int *)(*plVar2 + 0x95c) * *(int *)(*plVar2 + 0x958)));
            if (plVar6 < plVar3) goto LAB_14308185b;
            lVar14 = *plVar3;
            *plVar3 = *plVar6;
            *plVar6 = lVar14;
          } while( true );
        }
        if (plVar2 < plVar11) {
          do {
            plVar8 = plVar2;
            if (plVar2 + 1 <= plVar11) {
              plVar7 = plVar2 + 1;
              lVar14 = *plVar2;
              plVar6 = plVar2;
              do {
                lVar9 = *plVar7;
                plVar8 = plVar7;
                if ((uint)(*(int *)(lVar14 + 0x95c) * *(int *)(lVar14 + 0x958)) <=
                    (uint)(*(int *)(lVar9 + 0x95c) * *(int *)(lVar9 + 0x958))) {
                  lVar9 = lVar14;
                  plVar8 = plVar6;
                }
                plVar7 = plVar7 + 1;
                lVar14 = lVar9;
                plVar6 = plVar8;
              } while (plVar7 <= plVar11);
            }
            lVar14 = *plVar8;
            *plVar8 = *plVar11;
            *plVar11 = lVar14;
            plVar11 = plVar11 + -1;
          } while (plVar2 < plVar11);
        }
        goto LAB_14308195a;
      }
LAB_14308196f:
      FUN_147314735(plVar2);
LAB_14308195a:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14308185b:
  lVar14 = *plVar2;
  *plVar2 = *plVar6;
  *plVar6 = lVar14;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar16 - (longlong)plVar8 < (longlong)plVar7 - (longlong)plVar15) {
    if (plVar3 < plVar11) {
      *plVar10 = (longlong)plVar3;
      plVar10[1] = (longlong)plVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar15 = plVar2;
    if (plVar6 <= plVar2 + 1) goto LAB_14308195a;
  }
  else {
    if (plVar2 + 1 < plVar6) {
      *plVar10 = (longlong)plVar2;
      plVar10[1] = (longlong)plVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    plVar2 = plVar3;
    plVar12 = plVar11;
    plVar16 = plVar11;
    if (plVar11 <= plVar3) goto LAB_14308195a;
  }
  iVar4 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar15) >> 3);
  plVar8 = plVar15;
  plVar11 = plVar12;
  plVar7 = plVar16;
  if (iVar13 == 0) goto LAB_14308196f;
  goto LAB_143081798;
}



// FUNCTION 143081976 FUN_143081976 body=258 status=ok
// SIG undefined FUN_143081976(void)

undefined8 * FUN_143081976(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_1430819ac;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_1430819ac:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x3a <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 0x3a <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_143081a28;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_143081a28:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x3b;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x1d0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a309ba8;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 143081a78 FUN_143081a78 body=2218 status=ok
// SIG undefined FUN_143081a78(void)

longlong *
FUN_143081a78(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  *param_1 = param_3;
  lVar9 = *(longlong *)(param_3 + 8);
  param_1[1] = lVar9;
  lVar11 = *(longlong *)(param_3 + 1000);
  param_1[2] = lVar11;
  iVar5 = *(int *)(param_3 + 0x3f0);
  *(int *)(param_1 + 3) = iVar5;
  param_1[4] = param_3 + 0x90;
  param_1[5] = param_4;
  iVar2 = *(int *)(lVar9 + 8);
  *(int *)(param_1 + 6) = iVar2;
  *(undefined2 *)((longlong)param_1 + 0x34) = *(undefined2 *)(&DAT_14ca85070 + (longlong)iVar2 * 2);
  if ((longlong)iVar5 == 0) {
    cVar3 = '\0';
  }
  else {
    lVar9 = 0;
    do {
      cVar3 = *(char *)(lVar11 + 0x23f1 + lVar9);
      if (cVar3 != '\0') break;
      bVar15 = (longlong)iVar5 * 0x13c10 + -0x13c10 != lVar9;
      lVar9 = lVar9 + 0x13c10;
    } while (bVar15);
  }
  *(char *)((longlong)param_1 + 0x36) = cVar3;
  *(undefined1 *)((longlong)param_1 + 0x37) = param_5;
  cVar3 = FUN_1447e0190();
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
LAB_143081b89:
    *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  }
  else {
    iVar5 = *(int *)(DAT_14ca5b2a0 + 4);
    *(bool *)(param_1 + 7) = 0 < iVar5;
    iVar2 = DAT_14c760a3c;
    if (((iVar5 < 1) || (*(char *)((longlong)param_1 + 0x37) == '\0')) || (DAT_14ca84d99 == '\0'))
    goto LAB_143081b89;
    *(bool *)((longlong)param_1 + 0x39) = 0 < DAT_14c760a3c;
    if (0 < iVar2) {
      bVar15 = false;
      if ((DAT_14c761945 == '\x01') && (bVar15 = false, (DAT_14ca84e0d & 1) != 0)) {
        iVar5 = DAT_14c8335d8;
        if (DAT_14c760a40 < DAT_14c8335d8) {
          iVar5 = DAT_14c760a40;
        }
        bVar15 = 0 < iVar5;
      }
      goto LAB_143081b8e;
    }
  }
  bVar15 = false;
LAB_143081b8e:
  *(bool *)((longlong)param_1 + 0x3a) = bVar15;
  *(undefined2 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  memset(param_1 + 8,0,0xc0);
  *(undefined4 *)((longlong)param_1 + 0x11c) = 2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  puVar7 = (undefined8 *)FUN_1448fe162(0xa8);
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000001;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar7 + 8);
  }
  *puVar7 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar11 = *(longlong *)(lVar9 + 0x2b8);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar11 + 0x30);
  }
  puVar7[0xf] = uVar8;
  puVar7[0x10] = 0xc80000528c26ec00;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 2;
  param_1[0x26] = (longlong)puVar7;
  puVar7 = (undefined8 *)FUN_1448fe162();
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000001;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar7 + 8);
  }
  plVar13 = (longlong *)(lVar9 + 0x2b8);
  *puVar7 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  if (*plVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*plVar13 + 0x30);
  }
  puVar7[0xf] = uVar8;
  puVar7[0x10] = 0xc80000528c270480;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 2;
  param_1[0x27] = (longlong)puVar7;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x100000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0x8000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  puVar7 = (undefined8 *)FUN_1448fe162(0xa8);
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000001;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar7 + 8);
  }
  *puVar7 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  if (*plVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*plVar13 + 0x30);
  }
  puVar7[0xf] = uVar8;
  puVar7[0x10] = 0xc80000528c271d00;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 2;
  param_1[0x33] = (longlong)puVar7;
  puVar7 = (undefined8 *)FUN_1448fe162();
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000001;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar7 + 8);
  }
  *puVar7 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  if (*plVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*plVar13 + 0x30);
  }
  puVar7[0xf] = uVar8;
  puVar7[0x10] = 0xc80000528c273580;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 2;
  param_1[0x34] = (longlong)puVar7;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (*(char *)((longlong)param_1 + 0x39) == '\x01') {
    lVar9 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(lVar9,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
    param_1[0x36] = lVar9;
    FUN_14002049c(lVar9);
    lVar9 = param_1[0x2c];
    uVar6 = (int)lVar9 + 1;
    *(uint *)(param_1 + 0x2c) = uVar6;
    if (*(uint *)((longlong)param_1 + 0x164) < uVar6) {
      FUN_141780272(param_1 + 0x2b);
    }
    *(longlong *)(param_1[0x2b] + (longlong)(int)lVar9 * 8) = param_1[0x36];
  }
  else {
    param_1[0x36] = param_2;
  }
  if (*(char *)((longlong)param_1 + 0x3a) == '\x01') {
    iVar5 = 0;
    if ((DAT_14c761945 == '\x01') && ((DAT_14ca84e0d & 1) != 0)) {
      iVar2 = DAT_14c8335d8;
      if (DAT_14c760a40 < DAT_14c8335d8) {
        iVar2 = DAT_14c760a40;
      }
      iVar5 = 0;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
    }
    if (*(int *)((longlong)param_1 + 0x154) < iVar5) {
      FUN_14015857e();
    }
  }
  else {
    lVar9 = *param_1;
    plVar13 = (longlong *)param_1[4];
    puVar7 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    puVar10 = (uint *)*puVar7;
    if (puVar10 != (uint *)0x0) goto LAB_143082153;
    while( true ) {
      FUN_14472e504(puVar7);
      puVar10 = (uint *)*puVar7;
LAB_143082153:
      puVar14 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      uVar6 = puVar10[0x12];
      if (puVar14 + 0x37 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 + uVar6 + 1;
        UNLOCK();
        if ((uVar1 ^ uVar6) != 0xffffffff) break;
        puVar10 = (uint *)*puVar7;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar7 = puVar10;
        puVar14 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        uVar6 = 0;
        if (puVar14 + 0x37 <= puVar10 + 0x4000) {
          uVar6 = 1;
          goto LAB_1430821d3;
        }
      }
    }
    uVar6 = uVar6 + 1;
LAB_1430821d3:
    *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x38;
    puVar10[0x12] = uVar6;
    *(int *)(puVar14 + -1) = ((int)puVar14 + -8) - (int)puVar10;
    *(undefined4 *)((longlong)puVar14 + -4) = 0x1b8;
    puVar14[1] = 0;
    *puVar14 = &PTR_FUN_14a309908;
    lVar11 = *plVar13;
    do {
      puVar14[1] = lVar11;
      LOCK();
      lVar12 = *plVar13;
      bVar15 = lVar11 == lVar12;
      if (bVar15) {
        *plVar13 = (longlong)puVar14;
        lVar12 = lVar11;
      }
      UNLOCK();
      lVar11 = lVar12;
    } while (!bVar15);
    FUN_14307f414(puVar14 + 2,param_2,lVar9);
    iVar5 = (int)param_1[0x2a];
    *(uint *)(param_1 + 0x2a) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x154) < iVar5 + 1U) {
      FUN_14731408c(param_1 + 0x28,iVar5);
    }
    plVar13 = param_1 + 0x28;
    if ((longlong *)param_1[0x29] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[0x29];
    }
    plVar13[iVar5] = (longlong)(puVar14 + 2);
    FUN_1400daade();
  }
  uVar4 = DAT_14c760e16;
  if ((DAT_14c760e18 & 1) == 0) {
    uVar4 = 0;
  }
  if ((int)param_1[6] != 1) {
    uVar4 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x3d) = uVar4;
  return param_1;
}



// FUNCTION 143082322 FUN_143082322 body=2863 status=ok
// SIG undefined FUN_143082322(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143082322(longlong param_1,int param_2,double *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float fVar1;
  double dVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  undefined4 uVar11;
  double *pdVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int in_R10D;
  uint uVar21;
  longlong *plVar22;
  undefined4 in_R11D;
  uint uVar23;
  longlong *plVar24;
  int iVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong uVar38;
  ulonglong uVar40;
  undefined1 auVar39 [16];
  undefined1 unaff_XMM6 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [12];
  uint uStack_1ac;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  longlong *local_168;
  longlong local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar14 = *(longlong *)(param_1 + 0x60);
  lVar17 = (longlong)param_2;
  if (*(int *)(lVar14 + 4 + lVar17 * 8) != 0) {
    local_1a8 = *param_3;
    uStack_1a0 = 0;
    local_198._0_8_ = param_3[1];
    local_198._8_8_ = 0;
    dVar29 = param_3[2];
    local_188._8_8_ = 0;
    local_188._0_8_ = dVar29;
    plVar22 = *(longlong **)*param_4;
    lVar19 = *plVar22;
    auVar33 = *(undefined1 (*) [16])(param_3 + 4) & _DAT_149931180;
    auVar42._0_8_ = auVar33._0_8_;
    auVar42._8_4_ = auVar33._0_4_;
    auVar42._12_4_ = auVar33._4_4_;
    auVar33._0_8_ = auVar33._8_8_;
    dVar2 = param_3[6];
    dVar30 = param_3[6];
    dVar32 = auVar33._8_8_;
    dVar35 = auVar42._8_8_;
    uVar38 = DAT_149931180;
    uVar40 = DAT_149931180._8_8_;
    puVar20 = param_4;
    if (0 < *(int *)(lVar19 + 0x1f0)) {
      register0x00001208 = local_1a8;
      local_1b8._0_8_ = local_1a8;
      unaff_XMM6._8_8_ = dVar29;
      unaff_XMM6._0_8_ = dVar29;
      pdVar12 = (double *)(lVar19 + 0xe0);
      if (*(double **)(lVar19 + 0x1e0) != (double *)0x0) {
        pdVar12 = *(double **)(lVar19 + 0x1e0);
      }
      puVar20 = (undefined8 *)0x0;
      do {
        lVar27 = -(ulonglong)
                  ((double)((ulonglong)(pdVar12[9] * dVar30) & uVar40) +
                   (double)((ulonglong)pdVar12[5] & uVar40) * dVar32 +
                   (double)((ulonglong)pdVar12[1] & uVar40) * dVar35 <
                  (dVar29 * pdVar12[9] +
                  (double)local_198._0_8_ * pdVar12[5] + local_1a8 * pdVar12[1]) - pdVar12[0xd]);
        lVar28 = -(ulonglong)
                  ((double)((ulonglong)(pdVar12[0xb] * dVar30) & uVar40) +
                   (double)((ulonglong)pdVar12[7] & uVar40) * dVar32 +
                   (double)((ulonglong)pdVar12[3] & uVar40) * dVar35 <
                  (dVar29 * pdVar12[0xb] +
                  (double)local_198._0_8_ * pdVar12[7] + local_1a8 * pdVar12[3]) - pdVar12[0xf]);
        auVar8._8_4_ = (int)lVar27;
        auVar8._0_8_ = -(ulonglong)
                        ((double)((ulonglong)(pdVar12[8] * dVar2) & uVar38) +
                         (double)((ulonglong)pdVar12[4] & uVar38) * auVar33._0_8_ +
                         (double)((ulonglong)*pdVar12 & uVar38) * auVar42._0_8_ <
                        (dVar29 * pdVar12[8] +
                        (double)local_198._0_8_ * pdVar12[4] + local_1a8 * *pdVar12) - pdVar12[0xc])
        ;
        auVar8._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        in_R10D = movmskpd(in_R10D,auVar8);
        auVar9._8_4_ = (int)lVar28;
        auVar9._0_8_ = -(ulonglong)
                        ((double)((ulonglong)(pdVar12[10] * dVar2) & uVar38) +
                         (double)((ulonglong)pdVar12[6] & uVar38) * auVar33._0_8_ +
                         (double)((ulonglong)pdVar12[2] & uVar38) * auVar42._0_8_ <
                        (dVar29 * pdVar12[10] +
                        (double)local_198._0_8_ * pdVar12[6] + local_1a8 * pdVar12[2]) -
                        pdVar12[0xe]);
        auVar9._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        uVar23 = movmskpd(in_R11D,auVar9);
        if ((uVar23 & 0x3fffffff) != 0 || in_R10D != 0) goto LAB_143082dcc;
        pdVar12 = pdVar12 + 0x10;
        uVar23 = (int)puVar20 + 4;
        puVar20 = (undefined8 *)(ulonglong)uVar23;
        in_R11D = 0;
      } while ((int)uVar23 < *(int *)(lVar19 + 0x1f0));
    }
    lVar19 = plVar22[1];
    if (0 < *(int *)(lVar19 + 0x1f0)) {
      pdVar12 = (double *)plVar22[2];
      dVar29 = dVar29 + pdVar12[2];
      dVar36 = (double)local_198._0_8_ + pdVar12[1];
      dVar37 = local_1a8 + *pdVar12;
      unaff_XMM6._8_8_ = dVar29;
      unaff_XMM6._0_8_ = dVar29;
      pdVar12 = (double *)(lVar19 + 0xe0);
      if (*(double **)(lVar19 + 0x1e0) != (double *)0x0) {
        pdVar12 = *(double **)(lVar19 + 0x1e0);
      }
      iVar16 = 0;
      do {
        auVar43._8_8_ =
             -(ulonglong)
              ((double)((ulonglong)(pdVar12[9] * dVar30) & uVar40) +
               (double)((ulonglong)pdVar12[5] & uVar40) * dVar32 +
               (double)((ulonglong)pdVar12[1] & uVar40) * dVar35 <
              (dVar29 * pdVar12[9] + dVar36 * pdVar12[5] + dVar37 * pdVar12[1]) - pdVar12[0xd]);
        auVar43._0_8_ =
             -(ulonglong)
              ((double)((ulonglong)(pdVar12[8] * dVar2) & uVar38) +
               (double)((ulonglong)pdVar12[4] & uVar38) * auVar33._0_8_ +
               (double)((ulonglong)*pdVar12 & uVar38) * auVar42._0_8_ <
              (dVar29 * pdVar12[8] + dVar36 * pdVar12[4] + dVar37 * *pdVar12) - pdVar12[0xc]);
        lVar27 = -(ulonglong)
                  ((double)((ulonglong)(pdVar12[0xb] * dVar30) & uVar40) +
                   (double)((ulonglong)pdVar12[7] & uVar40) * dVar32 +
                   (double)((ulonglong)pdVar12[3] & uVar40) * dVar35 <
                  (dVar29 * pdVar12[0xb] + dVar36 * pdVar12[7] + dVar37 * pdVar12[3]) -
                  SUB168(*(undefined1 (*) [16])(pdVar12 + 0xe),8));
        uVar23 = movmskpd((int)puVar20,auVar43);
        puVar20 = (undefined8 *)(ulonglong)uVar23;
        auVar7._8_4_ = (int)lVar27;
        auVar7._0_8_ = -(ulonglong)
                        ((double)((ulonglong)(pdVar12[10] * dVar2) & uVar38) +
                         (double)((ulonglong)pdVar12[6] & uVar38) * auVar33._0_8_ +
                         (double)((ulonglong)pdVar12[2] & uVar38) * auVar42._0_8_ <
                        (dVar29 * pdVar12[10] + dVar36 * pdVar12[6] + dVar37 * pdVar12[2]) -
                        SUB168(*(undefined1 (*) [16])(pdVar12 + 0xe),0));
        auVar7._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        uVar21 = movmskpd(in_R10D,auVar7);
        if ((uVar21 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_143082dcc;
        pdVar12 = pdVar12 + 0x10;
        iVar16 = iVar16 + 4;
        in_R10D = 0;
      } while (iVar16 < *(int *)(lVar19 + 0x1f0));
    }
    lVar19 = (longlong)*(int *)(*(longlong *)(param_5[1] + 0x80) + 8 + lVar17 * 0x10);
    if (lVar19 != 0) {
      plVar26 = *(longlong **)(*(longlong *)(param_5[1] + 0x80) + lVar17 * 0x10);
      plVar22 = plVar26 + lVar19 * 9;
      uVar23 = (uint)DAT_149931180;
      uVar21 = DAT_149931180._4_4_;
      uVar5 = DAT_149931180._8_4_;
      uVar6 = DAT_149931180._12_4_;
      do {
        puVar20 = (undefined8 *)*param_5;
        lVar14 = plVar26[1];
        if ((*(char *)(lVar14 + 0x6f) < '\0') && ((*(byte *)(lVar14 + 0x78) & 0x20) != 0)) {
          lVar19 = puVar20[3];
          lVar27 = *(longlong *)(lVar19 + 0xb60);
          plVar4 = *(longlong **)(lVar27 + 0x28);
          if ((*(byte *)(lVar14 + 0x82) & *(byte *)((longlong)plVar4 + 0x1e9)) == 0)
          goto LAB_143082c8d;
          plVar24 = *(longlong **)puVar20[4];
          local_188._0_8_ = puVar20[2];
          lVar14 = *plVar26;
          local_1a8 = (double)*(float *)(plVar26 + 6);
          uStack_1a0 = 0;
          stack0xfffffffffffffe50 = 0.0;
          local_1b8._0_8_ = (double)*(float *)((longlong)plVar26 + 0x2c);
          fVar1 = *(float *)(plVar26 + 5);
          local_198 = *(undefined1 (*) [16])(plVar26 + 2);
          dVar2 = local_198._8_8_;
          dVar29 = (double)plVar26[4];
          dVar32 = *(double *)(lVar19 + 0x6c8) - dVar29;
          dVar41 = *(double *)(lVar19 + 0x6c0) - dVar2;
          unaff_XMM6._0_8_ = *(double *)(lVar19 + 0x6b8) - local_198._0_8_;
          unaff_XMM6._8_8_ = 0;
          dVar36 = dVar32 * (double)plVar4[0x12] +
                   unaff_XMM6._0_8_ * (double)plVar4[10] + (double)plVar4[0xe] * dVar41;
          dVar30 = dVar32 - (double)plVar4[0x12] * dVar36;
          dVar37 = dVar41 - (double)plVar4[0xe] * dVar36;
          dVar34 = unaff_XMM6._0_8_ - (double)plVar4[10] * dVar36;
          dVar35 = (double)*(float *)((longlong)plVar26 + 0x34) + *(double *)(lVar19 + 0x6d0);
          dVar30 = dVar30 * dVar30 + dVar34 * dVar34 + dVar37 * dVar37;
          dVar35 = dVar35 * dVar35;
          bVar3 = *(byte *)(plVar4 + 0x3a);
          if ((bVar3 & 4) == 0) {
LAB_143082901:
            if (dVar35 <= dVar30) goto LAB_143082c8d;
          }
          else {
            if ((*(byte *)(lVar27 + 0xe4) & 1) != 0) {
              if (((bVar3 & 8) == 0) || (*(int *)(lVar27 + 0xf8) < DAT_14c760480))
              goto LAB_14308288a;
              goto LAB_143082901;
            }
            if ((bVar3 & 8) != 0) goto LAB_143082901;
LAB_14308288a:
            local_178._0_8_ = plVar22;
            local_1c0 = lVar14;
            local_168 = plVar24;
            local_160 = lVar27;
            cVar10 = (**(code **)(*plVar4 + 0xb0))(plVar4);
            plVar22 = (longlong *)local_178._0_8_;
            if ((dVar35 <= dVar30) ||
               (lVar14 = local_1c0, lVar27 = local_160, plVar24 = local_168, cVar10 == '\0'))
            goto LAB_143082c8d;
          }
          dVar30 = local_1a8;
          if ((dVar36 < 0.0) &&
             (unaff_XMM6._0_8_ = unaff_XMM6._0_8_ * unaff_XMM6._0_8_ + dVar41 * dVar41,
             unaff_XMM6._8_8_ = 0, dVar35 < dVar32 * dVar32 + unaff_XMM6._0_8_)) goto LAB_143082c8d;
          if ((*(short *)(*(longlong *)(local_188._0_8_ + 0x31d8) +
                         (longlong)*(int *)(lVar14 + 0x158) * 0x18) == 1) ||
             ((*(byte *)(*(longlong *)(local_188._0_8_ + 0x31d8) +
                         (longlong)*(int *)(lVar14 + 0x158) * 0x18 + 4) & 6) == 0))
          goto LAB_143082c8d;
          lVar19 = *plVar24;
          uVar45 = SUB84((double)fVar1,0) & uVar23;
          uVar46 = (uint)((ulonglong)(double)fVar1 >> 0x20) & uVar21;
          uVar47 = local_1b8._0_4_ & uVar5;
          uVar48 = local_1b8._4_4_ & uVar6;
          local_1b8._4_4_ = uVar46;
          local_1b8._0_4_ = uVar45;
          local_1b8._8_4_ = uVar45;
          uStack_1ac = uVar46;
          local_178._0_8_ = CONCAT44(uVar48,uVar47);
          local_178._8_4_ = uVar47;
          local_178._12_4_ = uVar48;
          iVar16 = *(int *)(lVar19 + 0x1f0);
          local_1a8 = (double)CONCAT44(local_1a8._4_4_,iVar16);
          dVar32 = local_178._8_8_;
          local_1c0 = lVar14;
          if (0 < iVar16) {
            pdVar12 = (double *)(lVar19 + 0xe0);
            if (*(double **)(lVar19 + 0x1e0) != (double *)0x0) {
              pdVar12 = *(double **)(lVar19 + 0x1e0);
            }
            iVar25 = 0;
            do {
              auVar39._8_8_ =
                   -(ulonglong)
                    ((double)((ulonglong)(pdVar12[9] * dVar30) & uVar40) +
                     (double)((ulonglong)pdVar12[5] & uVar40) * dVar32 +
                     (double)((ulonglong)pdVar12[1] & uVar40) * stack0xfffffffffffffe50 <
                    (dVar29 * pdVar12[9] + dVar2 * pdVar12[5] + (double)local_198._0_8_ * pdVar12[1]
                    ) - pdVar12[0xd]);
              auVar39._0_8_ =
                   -(ulonglong)
                    ((double)((ulonglong)(pdVar12[8] * dVar30) & uVar38) +
                     (double)((ulonglong)pdVar12[4] & uVar38) * (double)local_178._0_8_ +
                     (double)((ulonglong)*pdVar12 & uVar38) * (double)local_1b8._0_8_ <
                    (dVar29 * pdVar12[8] + dVar2 * pdVar12[4] + (double)local_198._0_8_ * *pdVar12)
                    - pdVar12[0xc]);
              unaff_XMM6._8_8_ =
                   -(ulonglong)
                    ((double)((ulonglong)(pdVar12[0xb] * dVar30) & uVar40) +
                     (double)((ulonglong)pdVar12[7] & uVar40) * dVar32 +
                     (double)((ulonglong)pdVar12[3] & uVar40) * stack0xfffffffffffffe50 <
                    (dVar29 * pdVar12[0xb] +
                    dVar2 * pdVar12[7] + (double)local_198._0_8_ * pdVar12[3]) - pdVar12[0xf]);
              unaff_XMM6._0_8_ =
                   (double)-(ulonglong)
                            ((double)((ulonglong)(pdVar12[10] * dVar30) & uVar38) +
                             (double)((ulonglong)pdVar12[6] & uVar38) * (double)local_178._0_8_ +
                             (double)((ulonglong)pdVar12[2] & uVar38) * (double)local_1b8._0_8_ <
                            (dVar29 * pdVar12[10] +
                            dVar2 * pdVar12[6] + (double)local_198._0_8_ * pdVar12[2]) -
                            pdVar12[0xe]);
              iVar18 = movmskpd((int)lVar27,auVar39);
              uVar45 = movmskpd((int)plVar24,unaff_XMM6);
              if ((uVar45 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_143082c8d;
              pdVar12 = pdVar12 + 0x10;
              iVar25 = iVar25 + 4;
            } while (iVar25 < iVar16);
          }
          lVar14 = plVar24[1];
          if (0 < *(int *)(lVar14 + 0x1f0)) {
            pdVar12 = (double *)plVar24[2];
            dVar29 = dVar29 + pdVar12[2];
            dVar2 = dVar2 + pdVar12[1];
            dVar35 = (double)local_198._0_8_ + *pdVar12;
            pdVar12 = (double *)(lVar14 + 0xe0);
            if (*(double **)(lVar14 + 0x1e0) != (double *)0x0) {
              pdVar12 = *(double **)(lVar14 + 0x1e0);
            }
            iVar16 = 0;
            do {
              unaff_XMM6._8_8_ =
                   -(ulonglong)
                    ((double)((ulonglong)(pdVar12[9] * dVar30) & uVar40) +
                     (double)((ulonglong)pdVar12[5] & uVar40) * dVar32 +
                     (double)((ulonglong)pdVar12[1] & uVar40) * stack0xfffffffffffffe50 <
                    (dVar29 * pdVar12[9] + dVar2 * pdVar12[5] + dVar35 * pdVar12[1]) - pdVar12[0xd])
              ;
              unaff_XMM6._0_8_ =
                   (double)-(ulonglong)
                            ((double)((ulonglong)(pdVar12[8] * dVar30) & uVar38) +
                             (double)((ulonglong)pdVar12[4] & uVar38) * (double)local_178._0_8_ +
                             (double)((ulonglong)*pdVar12 & uVar38) * (double)local_1b8._0_8_ <
                            (dVar29 * pdVar12[8] + dVar2 * pdVar12[4] + dVar35 * *pdVar12) -
                            pdVar12[0xc]);
              auVar44._8_8_ =
                   -(ulonglong)
                    ((double)((ulonglong)(pdVar12[0xb] * dVar30) & uVar40) +
                     (double)((ulonglong)pdVar12[7] & uVar40) * dVar32 +
                     (double)((ulonglong)pdVar12[3] & uVar40) * stack0xfffffffffffffe50 <
                    (dVar29 * pdVar12[0xb] + dVar2 * pdVar12[7] + dVar35 * pdVar12[3]) -
                    pdVar12[0xf]);
              auVar44._0_8_ =
                   -(ulonglong)
                    ((double)((ulonglong)(pdVar12[10] * dVar30) & uVar38) +
                     (double)((ulonglong)pdVar12[6] & uVar38) * (double)local_178._0_8_ +
                     (double)((ulonglong)pdVar12[2] & uVar38) * (double)local_1b8._0_8_ <
                    (dVar29 * pdVar12[10] + dVar2 * pdVar12[6] + dVar35 * pdVar12[2]) - pdVar12[0xe]
                    );
              iVar25 = movmskpd((int)lVar27,unaff_XMM6);
              uVar45 = movmskpd((int)plVar24,auVar44);
              if ((uVar45 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_143082c8d;
              pdVar12 = pdVar12 + 0x10;
              iVar16 = iVar16 + 4;
              plVar24 = (longlong *)0x0;
            } while (iVar16 < *(int *)(lVar14 + 0x1f0));
          }
          if ((*(byte *)(plVar4 + 0x3a) & 2) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = FUN_1471dbc0a(lVar27);
          }
          cVar10 = FUN_14307c537(uVar11,local_1c0,local_188._0_8_ + 0x117c0);
          if (cVar10 == '\0') goto LAB_143082c8d;
          puVar13 = (undefined1 *)*puVar20;
          uVar15 = 1;
        }
        else {
LAB_143082c8d:
          puVar13 = (undefined1 *)*puVar20;
          uVar15 = *puVar13;
        }
        *puVar13 = uVar15;
        plVar26 = plVar26 + 9;
      } while (plVar26 != plVar22);
      lVar14 = *(longlong *)(param_1 + 0x60);
    }
    iVar16 = *(int *)(lVar14 + lVar17 * 8);
    if (iVar16 != -1) {
      iVar25 = 0;
      auVar33 = pmovsxbd(unaff_XMM6,0x8040201);
      do {
        auVar31._4_4_ = iVar25;
        auVar31._0_4_ = iVar25;
        auVar31._8_4_ = iVar25;
        auVar31._12_4_ = iVar25;
        auVar31 = auVar31 & auVar33;
        dVar2 = param_3[9];
        dVar29 = param_3[9];
        dVar35 = (double)(float)-(uint)(auVar31._0_4_ == auVar33._0_4_);
        dVar36 = (double)(float)-(uint)(auVar31._4_4_ == auVar33._4_4_);
        dVar30 = (double)(float)-(uint)(auVar31._8_4_ == auVar33._8_4_);
        dVar32 = (double)(float)-(uint)(auVar31._12_4_ == auVar33._12_4_);
        local_158 = (double)(~(ulonglong)dVar35 & (ulonglong)-dVar2 |
                            (ulonglong)dVar2 & (ulonglong)dVar35) + *param_3;
        dStack_150 = (double)(~(ulonglong)dVar36 & (ulonglong)-dVar29 |
                             (ulonglong)dVar29 & (ulonglong)dVar36) + param_3[1];
        local_148 = ((double)(~(ulonglong)dVar30 & (ulonglong)-dVar2 |
                             (ulonglong)dVar2 & (ulonglong)dVar30) + param_3[2]) * 1.0;
        dStack_140 = ((double)(~(ulonglong)dVar32 & (ulonglong)-dVar29 |
                              (ulonglong)dVar29 & (ulonglong)dVar32) + param_3[3]) * 0.0;
        local_110 = param_3[8];
        local_138._8_4_ = SUB84(local_110,0);
        local_138._0_8_ = local_110;
        local_138._12_4_ = (int)((ulonglong)local_110 >> 0x20);
        local_128._8_4_ = SUB84(local_110 * 0.0,0);
        local_128._0_8_ = local_110 * 1.0;
        local_128._12_4_ = (int)((ulonglong)(local_110 * 0.0) >> 0x20);
        local_118 = local_110 * 0.5 * 1.0625;
        local_110 = local_110 - local_118;
        local_1c8 = param_5;
        FUN_143082322(param_1,iVar16 + iVar25,&local_158,param_4);
        iVar25 = iVar25 + 1;
      } while (iVar25 != 8);
    }
  }
LAB_143082dcc:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143082e52 FUN_143082e52 body=3209 status=ok
// SIG undefined FUN_143082e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143082e52(longlong param_1,int param_2,double *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  char cVar10;
  undefined4 uVar11;
  double *pdVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  int iVar15;
  longlong *plVar16;
  double *pdVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  double dVar21;
  int in_R10D;
  uint uVar22;
  undefined4 in_R11D;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  double *pdVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  double *local_200;
  longlong *local_1f8;
  int local_1f0;
  int local_1ec;
  undefined1 local_1e8 [16];
  longlong *local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  longlong *plStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar24 = *(longlong *)(param_1 + 0x60);
  lVar26 = (longlong)param_2;
  if (*(int *)(lVar24 + 4 + lVar26 * 8) != 0) {
    plVar16 = (longlong *)*param_4;
    local_1f8 = (longlong *)param_3[4];
    local_200 = (double *)param_3[5];
    local_1d8 = (longlong *)param_3[6];
    local_198 = *param_3;
    uStack_190 = 0;
    local_1a8 = param_3[1];
    uStack_1a0 = 0;
    local_1b8 = param_3[2];
    uStack_1b0 = 0;
    plVar19 = (longlong *)*plVar16;
    lVar18 = *plVar19;
    auVar32 = *(undefined1 (*) [16])(param_3 + 4) & _DAT_149931180;
    auVar40._0_8_ = auVar32._0_8_;
    auVar40._8_4_ = auVar32._0_4_;
    auVar40._12_4_ = auVar32._4_4_;
    auVar43._0_8_ = auVar32._8_8_;
    auVar43._8_4_ = auVar32._8_4_;
    auVar43._12_4_ = auVar32._12_4_;
    uStack_1d0 = 0;
    dVar46 = auVar43._8_8_;
    dVar21 = auVar40._8_8_;
    plVar20 = param_4;
    local_1c8 = local_1d8;
    plStack_1c0 = local_1d8;
    local_158 = local_198;
    dStack_150 = local_1a8;
    local_148 = local_1b8;
    if (0 < *(int *)(lVar18 + 0x1f0)) {
      pdVar17 = (double *)(lVar18 + 0xe0);
      if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
        pdVar17 = *(double **)(lVar18 + 0x1e0);
      }
      plVar20 = (longlong *)0x0;
      do {
        lVar28 = -(ulonglong)
                  (ABS(pdVar17[9] * (double)local_1d8) +
                   ABS(pdVar17[5]) * dVar46 + ABS(pdVar17[1]) * dVar21 <
                  (local_1b8 * pdVar17[9] + local_1a8 * pdVar17[5] + local_198 * pdVar17[1]) -
                  pdVar17[0xd]);
        lVar29 = -(ulonglong)
                  (ABS(pdVar17[0xb] * (double)local_1d8) +
                   ABS(pdVar17[7]) * dVar46 + ABS(pdVar17[3]) * dVar21 <
                  (local_1b8 * pdVar17[0xb] + local_1a8 * pdVar17[7] + local_198 * pdVar17[3]) -
                  pdVar17[0xf]);
        auVar32._8_4_ = (int)lVar28;
        auVar32._0_8_ =
             -(ulonglong)
              (ABS(pdVar17[8] * (double)local_1d8) +
               ABS(pdVar17[4]) * auVar43._0_8_ + ABS(*pdVar17) * auVar40._0_8_ <
              (local_1b8 * pdVar17[8] + local_1a8 * pdVar17[4] + local_198 * *pdVar17) -
              pdVar17[0xc]);
        auVar32._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        in_R10D = movmskpd(in_R10D,auVar32);
        auVar8._8_4_ = (int)lVar29;
        auVar8._0_8_ = -(ulonglong)
                        (ABS(pdVar17[10] * (double)local_1d8) +
                         ABS(pdVar17[6]) * auVar43._0_8_ + ABS(pdVar17[2]) * auVar40._0_8_ <
                        (local_1b8 * pdVar17[10] + local_1a8 * pdVar17[6] + local_198 * pdVar17[2])
                        - pdVar17[0xe]);
        auVar8._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
        uVar23 = movmskpd(in_R11D,auVar8);
        if ((uVar23 & 0x3fffffff) != 0 || in_R10D != 0) goto LAB_143083a56;
        pdVar17 = pdVar17 + 0x10;
        uVar23 = (int)plVar20 + 4;
        plVar20 = (longlong *)(ulonglong)uVar23;
        in_R11D = 0;
      } while ((int)uVar23 < *(int *)(lVar18 + 0x1f0));
    }
    lVar18 = plVar19[1];
    if (0 < *(int *)(lVar18 + 0x1f0)) {
      pdVar17 = (double *)plVar19[2];
      dVar39 = local_1b8 + pdVar17[2];
      dVar36 = local_1a8 + pdVar17[1];
      dVar31 = local_198 + *pdVar17;
      pdVar17 = (double *)(lVar18 + 0xe0);
      if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
        pdVar17 = *(double **)(lVar18 + 0x1e0);
      }
      iVar15 = 0;
      do {
        auVar44._8_8_ =
             -(ulonglong)
              (ABS(pdVar17[9] * (double)local_1d8) +
               ABS(pdVar17[5]) * dVar46 + ABS(pdVar17[1]) * dVar21 <
              (dVar39 * pdVar17[9] + dVar36 * pdVar17[5] + dVar31 * pdVar17[1]) - pdVar17[0xd]);
        auVar44._0_8_ =
             -(ulonglong)
              (ABS(pdVar17[8] * (double)local_1d8) +
               ABS(pdVar17[4]) * auVar43._0_8_ + ABS(*pdVar17) * auVar40._0_8_ <
              (dVar39 * pdVar17[8] + dVar36 * pdVar17[4] + dVar31 * *pdVar17) - pdVar17[0xc]);
        lVar28 = -(ulonglong)
                  (ABS(pdVar17[0xb] * (double)local_1d8) +
                   ABS(pdVar17[7]) * dVar46 + ABS(pdVar17[3]) * dVar21 <
                  (dVar39 * pdVar17[0xb] + dVar36 * pdVar17[7] + dVar31 * pdVar17[3]) - pdVar17[0xf]
                  );
        uVar23 = movmskpd((int)plVar20,auVar44);
        plVar20 = (longlong *)(ulonglong)uVar23;
        auVar6._8_4_ = (int)lVar28;
        auVar6._0_8_ = -(ulonglong)
                        (ABS(pdVar17[10] * (double)local_1d8) +
                         ABS(pdVar17[6]) * auVar43._0_8_ + ABS(pdVar17[2]) * auVar40._0_8_ <
                        (dVar39 * pdVar17[10] + dVar36 * pdVar17[6] + dVar31 * pdVar17[2]) -
                        pdVar17[0xe]);
        auVar6._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        uVar22 = movmskpd(in_R10D,auVar6);
        if ((uVar22 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_143083a56;
        pdVar17 = pdVar17 + 0x10;
        iVar15 = iVar15 + 4;
        in_R10D = 0;
      } while (iVar15 < *(int *)(lVar18 + 0x1f0));
    }
    fVar41 = (float)*(double *)(plVar16[2] + 0x30) +
             (float)SQRT((double)local_1d8 * (double)local_1d8 +
                         (double)local_1f8 * (double)local_1f8 +
                         (double)local_200 * (double)local_200);
    fVar30 = (float)FUN_1402b5c34(&local_158,plVar16[3],plVar16[4]);
    fVar41 = fVar41 * fVar41;
    auVar42 = ZEXT416((uint)fVar41);
    if (fVar30 < fVar41) {
      lVar18 = (longlong)*(int *)(*(longlong *)(param_5[1] + 0x80) + 8 + lVar26 * 0x10);
      if (lVar18 != 0) {
        pdVar27 = *(double **)(*(longlong *)(param_5[1] + 0x80) + lVar26 * 0x10);
        pdVar17 = pdVar27 + lVar18 * 9;
        local_200 = pdVar17;
        do {
          puVar2 = (undefined8 *)*param_5;
          pdVar12 = (double *)puVar2[4];
          local_1c8 = (longlong *)*pdVar12;
          local_1b8 = pdVar12[2];
          local_198 = pdVar12[3];
          local_1a8 = pdVar12[4];
          lVar24 = puVar2[2];
          lVar18 = puVar2[3];
          lVar28 = *(longlong *)(lVar18 + 0xb60);
          plVar16 = *(longlong **)(lVar28 + 0x28);
          plVar19 = (longlong *)*pdVar27;
          dVar21 = pdVar27[1];
          fVar30 = *(float *)((longlong)pdVar27 + 0x34);
          local_128 = (double)fVar30;
          dStack_130 = (double)*(float *)(pdVar27 + 6);
          local_138 = (double)*(float *)((longlong)pdVar27 + 0x2c);
          dStack_140 = (double)*(float *)(pdVar27 + 5);
          dVar46 = pdVar27[4];
          local_158 = pdVar27[2];
          dVar31 = pdVar27[3];
          dStack_150 = dVar31;
          local_148 = dVar46;
          if (((*(char *)((longlong)dVar21 + 0x6f) < '\0') &&
              ((*(byte *)((longlong)dVar21 + 0x78) & 0x20) != 0)) &&
             ((*(byte *)((longlong)dVar21 + 0x82) & *(byte *)((longlong)plVar16 + 0x1e9)) != 0)) {
            auVar42._0_8_ = *(double *)(lVar18 + 0x6c8) - dVar46;
            auVar42._8_8_ = 0.0;
            dVar38 = *(double *)(lVar18 + 0x6b8) - local_158;
            dVar9 = *(double *)(lVar18 + 0x6c0) - dVar31;
            dVar49 = auVar42._0_8_ * (double)plVar16[0x12] +
                     dVar38 * (double)plVar16[10] + (double)plVar16[0xe] * dVar9;
            dVar47 = auVar42._0_8_ - (double)plVar16[0x12] * dVar49;
            dVar36 = dVar9 - (double)plVar16[0xe] * dVar49;
            dVar37 = dVar38 - (double)plVar16[10] * dVar49;
            dVar39 = local_128 + *(double *)(lVar18 + 0x6d0);
            dVar36 = dVar47 * dVar47 + dVar37 * dVar37 + dVar36 * dVar36;
            dVar39 = dVar39 * dVar39;
            bVar1 = *(byte *)(plVar16 + 0x3a);
            if ((bVar1 & 4) == 0) {
LAB_14308350d:
              if (dVar39 <= dVar36) goto LAB_14308391a;
            }
            else {
              if ((*(byte *)(lVar28 + 0xe4) & 1) != 0) {
                if (((bVar1 & 8) == 0) || (*(int *)(lVar28 + 0xf8) < DAT_14c760480))
                goto LAB_1430834ba;
                goto LAB_14308350d;
              }
              if ((bVar1 & 8) != 0) goto LAB_14308350d;
LAB_1430834ba:
              local_1e8._0_8_ = lVar24;
              local_1f8 = plVar16;
              local_1d8 = plVar19;
              cVar10 = (**(code **)(*plVar16 + 0xb0))();
              pdVar17 = local_200;
              if ((dVar39 <= dVar36) ||
                 (plVar16 = local_1f8, plVar19 = local_1d8, lVar24 = local_1e8._0_8_, cVar10 == '\0'
                 )) goto LAB_14308391a;
            }
            if ((dVar49 < 0.0) &&
               (auVar42._0_8_ = auVar42._0_8_ * auVar42._0_8_ + dVar38 * dVar38 + dVar9 * dVar9,
               auVar42._8_8_ = 0.0, dVar39 < auVar42._0_8_)) goto LAB_14308391a;
            if ((*(short *)(*(longlong *)(lVar24 + 0x31d8) + (longlong)(int)plVar19[0x2b] * 0x18) ==
                 1) || ((*(byte *)(*(longlong *)(lVar24 + 0x31d8) +
                                   (longlong)(int)plVar19[0x2b] * 0x18 + 4) & 6) == 0))
            goto LAB_14308391a;
            lVar18 = *local_1c8;
            auVar33._8_8_ = local_138;
            auVar33._0_8_ = dStack_140;
            local_188 = local_158;
            uStack_180 = 0;
            auVar33 = auVar33 & _DAT_149931180;
            local_178._8_4_ = auVar33._8_4_;
            local_178._12_4_ = auVar33._12_4_;
            dVar39 = auVar33._0_8_;
            local_1e8._8_4_ = auVar33._0_4_;
            local_1e8._0_8_ = dVar39;
            local_1e8._12_4_ = auVar33._4_4_;
            local_178._0_8_ = auVar33._8_8_;
            local_1f0 = *(int *)(lVar18 + 0x1f0);
            dVar36 = local_178._8_8_;
            if (0 < local_1f0) {
              local_168._8_4_ = SUB84(dVar46,0);
              local_168._0_8_ = dVar46;
              local_168._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
              pdVar12 = (double *)(lVar18 + 0xe0);
              if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
                pdVar12 = *(double **)(lVar18 + 0x1e0);
              }
              dVar38 = dVar21;
              iVar15 = 0;
              do {
                local_1ec = iVar15;
                auVar42._0_8_ = ABS(pdVar12[4]) * local_178._0_8_ + ABS(*pdVar12) * dVar39;
                auVar42._8_8_ = ABS(pdVar12[5]) * dVar36 + ABS(pdVar12[1]) * (double)local_1e8._8_8_
                ;
                auVar48._8_8_ =
                     -(ulonglong)
                      (ABS(pdVar12[9] * dStack_130) + auVar42._8_8_ <
                      ((double)local_168._8_8_ * pdVar12[9] +
                      dStack_150 * pdVar12[5] + local_158 * pdVar12[1]) - pdVar12[0xd]);
                auVar48._0_8_ =
                     -(ulonglong)
                      (ABS(pdVar12[8] * dStack_130) + auVar42._0_8_ <
                      (dVar46 * pdVar12[8] + dStack_150 * pdVar12[4] + local_158 * *pdVar12) -
                      pdVar12[0xc]);
                lVar18 = -(ulonglong)
                          (ABS(pdVar12[0xb] * dStack_130) +
                           ABS(pdVar12[7]) * dVar36 + ABS(pdVar12[3]) * (double)local_1e8._8_8_ <
                          ((double)local_168._8_8_ * pdVar12[0xb] +
                          dStack_150 * pdVar12[7] + local_158 * pdVar12[3]) - pdVar12[0xf]);
                iVar15 = movmskpd((int)plVar19,auVar48);
                auVar7._8_4_ = (int)lVar18;
                auVar7._0_8_ = -(ulonglong)
                                (ABS(pdVar12[10] * dStack_130) +
                                 ABS(pdVar12[6]) * local_178._0_8_ + ABS(pdVar12[2]) * dVar39 <
                                (dVar46 * pdVar12[10] +
                                dStack_150 * pdVar12[6] + local_158 * pdVar12[2]) - pdVar12[0xe]);
                auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
                uVar23 = movmskpd(SUB84(dVar38,0),auVar7);
                if ((uVar23 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14308391a;
                pdVar12 = pdVar12 + 0x10;
                dVar21 = 0.0;
                dVar38 = 0.0;
                iVar15 = local_1ec + 4;
              } while (local_1ec + 4 < local_1f0);
            }
            lVar18 = local_1c8[1];
            local_1f8 = plVar16;
            local_1d8 = plVar19;
            if (0 < *(int *)(lVar18 + 0x1f0)) {
              pdVar12 = (double *)local_1c8[2];
              dVar46 = dVar46 + pdVar12[2];
              dVar31 = dVar31 + pdVar12[1];
              dVar38 = local_158 + *pdVar12;
              pdVar12 = (double *)(lVar18 + 0xe0);
              if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
                pdVar12 = *(double **)(lVar18 + 0x1e0);
              }
              iVar15 = 0;
              do {
                auVar42._0_8_ = ABS(pdVar12[4]) * local_178._0_8_ + ABS(*pdVar12) * dVar39;
                auVar42._8_8_ = ABS(pdVar12[5]) * dVar36 + ABS(pdVar12[1]) * (double)local_1e8._8_8_
                ;
                lVar29 = -(ulonglong)
                          (ABS(pdVar12[9] * dStack_130) + auVar42._8_8_ <
                          (dVar46 * pdVar12[9] + dVar31 * pdVar12[5] + dVar38 * pdVar12[1]) -
                          pdVar12[0xd]);
                auVar45._8_8_ =
                     -(ulonglong)
                      (ABS(pdVar12[0xb] * dStack_130) +
                       ABS(pdVar12[7]) * dVar36 + ABS(pdVar12[3]) * (double)local_1e8._8_8_ <
                      (dVar46 * pdVar12[0xb] + dVar31 * pdVar12[7] + dVar38 * pdVar12[3]) -
                      pdVar12[0xf]);
                auVar45._0_8_ =
                     -(ulonglong)
                      (ABS(pdVar12[10] * dStack_130) +
                       ABS(pdVar12[6]) * local_178._0_8_ + ABS(pdVar12[2]) * dVar39 <
                      (dVar46 * pdVar12[10] + dVar31 * pdVar12[6] + dVar38 * pdVar12[2]) -
                      pdVar12[0xe]);
                auVar5._8_4_ = (int)lVar29;
                auVar5._0_8_ = -(ulonglong)
                                (ABS(pdVar12[8] * dStack_130) + auVar42._0_8_ <
                                (dVar46 * pdVar12[8] + dVar31 * pdVar12[4] + dVar38 * *pdVar12) -
                                pdVar12[0xc]);
                auVar5._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
                uVar23 = movmskpd((int)plVar19,auVar5);
                plVar19 = (longlong *)(ulonglong)uVar23;
                uVar22 = movmskpd(SUB84(dVar21,0),auVar45);
                if ((uVar22 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_14308391a;
                pdVar12 = pdVar12 + 0x10;
                iVar15 = iVar15 + 4;
                dVar21 = 0.0;
              } while (iVar15 < *(int *)(lVar18 + 0x1f0));
            }
            dVar21 = *(double *)((longlong)local_1b8 + 0x30);
            auVar42 = ZEXT416((uint)(float)dVar21);
            local_1e8._0_8_ = lVar24;
            fVar41 = (float)FUN_1402b5c34(&local_158,local_198,local_1a8);
            fVar30 = fVar30 + (float)dVar21;
            pdVar17 = local_200;
            if (fVar30 * fVar30 <= fVar41) goto LAB_14308391a;
            if ((*(byte *)(local_1f8 + 0x3a) & 2) == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1471dbc0a(lVar28);
            }
            cVar10 = FUN_14307c537(uVar11,local_1d8,local_1e8._0_8_ + 0x117c0);
            pdVar17 = local_200;
            if (cVar10 == '\0') goto LAB_14308391a;
            puVar13 = (undefined1 *)*puVar2;
            uVar14 = 1;
          }
          else {
LAB_14308391a:
            puVar13 = (undefined1 *)*puVar2;
            uVar14 = *puVar13;
          }
          *puVar13 = uVar14;
          pdVar27 = pdVar27 + 9;
        } while (pdVar27 != pdVar17);
        lVar24 = *(longlong *)(param_1 + 0x60);
      }
      iVar15 = *(int *)(lVar24 + lVar26 * 8);
      if (iVar15 != -1) {
        iVar25 = 0;
        auVar32 = pmovsxbd(auVar42,0x8040201);
        do {
          auVar34._4_4_ = iVar25;
          auVar34._0_4_ = iVar25;
          auVar34._8_4_ = iVar25;
          auVar34._12_4_ = iVar25;
          auVar34 = auVar34 & auVar32;
          dVar21 = param_3[9];
          dVar46 = param_3[9];
          dVar39 = (double)(float)-(uint)(auVar34._0_4_ == auVar32._0_4_);
          dVar38 = (double)(float)-(uint)(auVar34._4_4_ == auVar32._4_4_);
          dVar31 = (double)(float)-(uint)(auVar34._8_4_ == auVar32._8_4_);
          dVar36 = (double)(float)-(uint)(auVar34._12_4_ == auVar32._12_4_);
          uVar4 = (ulonglong)dVar46 & (ulonglong)dVar36;
          auVar35._0_8_ = ~(ulonglong)dVar31 & (ulonglong)-dVar21;
          auVar35._8_8_ = ~(ulonglong)dVar36 & (ulonglong)-dVar46;
          auVar3._8_4_ = (int)uVar4;
          auVar3._0_8_ = (ulonglong)dVar21 & (ulonglong)dVar31;
          auVar3._12_4_ = (int)(uVar4 >> 0x20);
          local_158 = (double)(~(ulonglong)dVar39 & (ulonglong)-dVar21 |
                              (ulonglong)dVar21 & (ulonglong)dVar39) + *param_3;
          dStack_150 = (double)(~(ulonglong)dVar38 & (ulonglong)-dVar46 |
                               (ulonglong)dVar46 & (ulonglong)dVar38) + param_3[1];
          local_148 = (SUB168(auVar35 | auVar3,0) + param_3[2]) * 1.0;
          dStack_140 = (SUB168(auVar35 | auVar3,8) + param_3[3]) * 0.0;
          local_138 = param_3[8];
          local_128 = local_138 * 1.0;
          dStack_120 = local_138 * 0.0;
          local_118 = local_138 * 0.5 * 1.0625;
          local_110 = local_138 - local_118;
          local_208 = param_5;
          dStack_130 = local_138;
          FUN_143082e52(param_1,iVar15 + iVar25,&local_158,param_4);
          iVar25 = iVar25 + 1;
        } while (iVar25 != 8);
      }
    }
  }
LAB_143083a56:
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143083adc FUN_143083adc body=3680 status=ok
// SIG undefined FUN_143083adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143083adc(longlong param_1,int param_2,double *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  double *pdVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  char cVar14;
  undefined4 uVar15;
  double *pdVar16;
  double *pdVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  int iVar20;
  double *pdVar21;
  longlong lVar22;
  double *pdVar23;
  double *pdVar24;
  int iVar25;
  longlong *plVar26;
  int in_R10D;
  uint uVar27;
  undefined4 in_R11D;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  double dVar34;
  undefined1 auVar36 [16];
  double dVar35;
  uint uVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  double local_268;
  double dStack_260;
  longlong local_250;
  double local_248;
  double *local_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 uStack_220;
  double *local_218;
  double *pdStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  longlong *local_1b0;
  double *local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar30 = (longlong)param_2;
  if (*(int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar30 * 8) != 0) {
    plVar3 = (longlong *)*param_4;
    local_240 = (double *)param_3[4];
    local_248 = param_3[5];
    local_208 = param_3[6];
    local_238 = *param_3;
    uStack_230 = 0;
    local_228 = param_3[1];
    uStack_220 = 0;
    local_268 = param_3[2];
    dStack_260 = 0.0;
    plVar4 = (longlong *)*plVar3;
    lVar22 = *plVar4;
    auVar36 = *(undefined1 (*) [16])(param_3 + 4) & _DAT_149931180;
    auVar46._0_8_ = auVar36._0_8_;
    auVar46._8_4_ = auVar36._0_4_;
    auVar46._12_4_ = auVar36._4_4_;
    auVar49._0_8_ = auVar36._8_8_;
    auVar49._8_4_ = auVar36._8_4_;
    auVar49._12_4_ = auVar36._12_4_;
    uStack_200 = 0;
    dVar51 = auVar49._8_8_;
    dVar35 = auVar46._8_8_;
    plVar26 = param_4;
    local_1f8 = local_208;
    dStack_1f0 = local_208;
    if (0 < *(int *)(lVar22 + 0x1f0)) {
      pdVar21 = (double *)(lVar22 + 0xe0);
      if (*(double **)(lVar22 + 0x1e0) != (double *)0x0) {
        pdVar21 = *(double **)(lVar22 + 0x1e0);
      }
      plVar26 = (longlong *)0x0;
      do {
        lVar31 = -(ulonglong)
                  (ABS(pdVar21[9] * local_208) + ABS(pdVar21[5]) * dVar51 + ABS(pdVar21[1]) * dVar35
                  < (local_268 * pdVar21[9] + local_228 * pdVar21[5] + local_238 * pdVar21[1]) -
                    pdVar21[0xd]);
        lVar32 = -(ulonglong)
                  (ABS(pdVar21[0xb] * local_208) +
                   ABS(pdVar21[7]) * dVar51 + ABS(pdVar21[3]) * dVar35 <
                  (local_268 * pdVar21[0xb] + local_228 * pdVar21[7] + local_238 * pdVar21[3]) -
                  pdVar21[0xf]);
        auVar36._8_4_ = (int)lVar31;
        auVar36._0_8_ =
             -(ulonglong)
              (ABS(pdVar21[8] * local_208) +
               ABS(pdVar21[4]) * auVar49._0_8_ + ABS(*pdVar21) * auVar46._0_8_ <
              (local_268 * pdVar21[8] + local_228 * pdVar21[4] + local_238 * *pdVar21) -
              pdVar21[0xc]);
        auVar36._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        in_R10D = movmskpd(in_R10D,auVar36);
        auVar11._8_4_ = (int)lVar32;
        auVar11._0_8_ =
             -(ulonglong)
              (ABS(pdVar21[10] * local_208) +
               ABS(pdVar21[6]) * auVar49._0_8_ + ABS(pdVar21[2]) * auVar46._0_8_ <
              (local_268 * pdVar21[10] + local_228 * pdVar21[6] + local_238 * pdVar21[2]) -
              pdVar21[0xe]);
        auVar11._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        uVar28 = movmskpd(in_R11D,auVar11);
        if ((uVar28 & 0x3fffffff) != 0 || in_R10D != 0) goto LAB_1430848b7;
        pdVar21 = pdVar21 + 0x10;
        uVar28 = (int)plVar26 + 4;
        plVar26 = (longlong *)(ulonglong)uVar28;
        in_R11D = 0;
      } while ((int)uVar28 < *(int *)(lVar22 + 0x1f0));
    }
    lVar22 = plVar4[1];
    if (0 < *(int *)(lVar22 + 0x1f0)) {
      pdVar21 = (double *)plVar4[2];
      dVar34 = pdVar21[2] + local_268;
      dVar39 = pdVar21[1] + local_228;
      dVar43 = *pdVar21 + local_238;
      pdVar21 = (double *)(lVar22 + 0xe0);
      if (*(double **)(lVar22 + 0x1e0) != (double *)0x0) {
        pdVar21 = *(double **)(lVar22 + 0x1e0);
      }
      iVar20 = 0;
      do {
        lVar31 = -(ulonglong)
                  (ABS(pdVar21[9] * local_208) + ABS(pdVar21[5]) * dVar51 + ABS(pdVar21[1]) * dVar35
                  < (dVar34 * pdVar21[9] + dVar39 * pdVar21[5] + dVar43 * pdVar21[1]) - pdVar21[0xd]
                  );
        lVar32 = -(ulonglong)
                  (ABS(pdVar21[0xb] * local_208) +
                   ABS(pdVar21[7]) * dVar51 + ABS(pdVar21[3]) * dVar35 <
                  (dVar34 * pdVar21[0xb] + dVar39 * pdVar21[7] + dVar43 * pdVar21[3]) - pdVar21[0xf]
                  );
        auVar9._8_4_ = (int)lVar31;
        auVar9._0_8_ = -(ulonglong)
                        (ABS(pdVar21[8] * local_208) +
                         ABS(pdVar21[4]) * auVar49._0_8_ + ABS(*pdVar21) * auVar46._0_8_ <
                        (dVar34 * pdVar21[8] + dVar39 * pdVar21[4] + dVar43 * *pdVar21) -
                        pdVar21[0xc]);
        auVar9._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        uVar28 = movmskpd((int)plVar26,auVar9);
        plVar26 = (longlong *)(ulonglong)uVar28;
        auVar12._8_4_ = (int)lVar32;
        auVar12._0_8_ =
             -(ulonglong)
              (ABS(pdVar21[10] * local_208) +
               ABS(pdVar21[6]) * auVar49._0_8_ + ABS(pdVar21[2]) * auVar46._0_8_ <
              (dVar34 * pdVar21[10] + dVar39 * pdVar21[6] + dVar43 * pdVar21[2]) - pdVar21[0xe]);
        auVar12._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        uVar27 = movmskpd(in_R10D,auVar12);
        if ((uVar27 & 0x3fffffff) != 0 || uVar28 != 0) goto LAB_1430848b7;
        pdVar21 = pdVar21 + 0x10;
        iVar20 = iVar20 + 4;
        in_R10D = 0;
      } while (iVar20 < *(int *)(lVar22 + 0x1f0));
    }
    pdVar21 = (double *)plVar3[3];
    pdVar24 = (double *)plVar3[4];
    dVar35 = (double)(float)*(double *)(plVar3[2] + 0x30);
    dStack_130 = local_268 + local_208 + dVar35;
    local_138 = local_228 + local_248 + dVar35;
    dStack_140 = local_238 + (double)local_240 + dVar35;
    local_148 = local_268 - (local_208 + dVar35);
    dStack_150 = local_228 - (local_248 + dVar35);
    auVar47._0_8_ = local_238 - ((double)local_240 + dVar35);
    auVar47._8_8_ = 0;
    local_128 = (double)CONCAT71(local_128._1_7_,1);
    local_160 = pdVar24[2] - pdVar21[2];
    local_168 = pdVar24[1] - pdVar21[1];
    local_170 = *pdVar24 - *pdVar21;
    local_278 = (undefined8 *)0x0;
    local_158 = auVar47._0_8_;
    cVar14 = FUN_144a3f41e();
    auVar36 = _DAT_149931180;
    if (cVar14 != '\0') {
      lVar22 = (longlong)*(int *)(*(longlong *)(param_5[1] + 0x80) + 8 + lVar30 * 0x10);
      if (lVar22 != 0) {
        pdVar21 = *(double **)(*(longlong *)(param_5[1] + 0x80) + lVar30 * 0x10);
        pdVar24 = pdVar21 + lVar22 * 9;
        uVar28 = (uint)DAT_149931180;
        uVar27 = DAT_149931180._4_4_;
        uVar6 = DAT_149931180._8_4_;
        uVar7 = DAT_149931180._12_4_;
        do {
          puVar5 = (undefined8 *)*param_5;
          dVar35 = pdVar21[1];
          if ((*(char *)((longlong)dVar35 + 0x6f) < '\0') &&
             ((*(byte *)((longlong)dVar35 + 0x78) & 0x20) != 0)) {
            lVar22 = puVar5[3];
            lVar31 = *(longlong *)(lVar22 + 0xb60);
            plVar3 = *(longlong **)(lVar31 + 0x28);
            if ((*(byte *)((longlong)dVar35 + 0x82) & *(byte *)((longlong)plVar3 + 0x1e9)) == 0)
            goto LAB_143084775;
            plVar4 = (longlong *)puVar5[4];
            plVar26 = (longlong *)*plVar4;
            local_248 = (double)plVar4[2];
            pdVar23 = (double *)plVar4[3];
            local_240 = (double *)plVar4[4];
            dVar35 = (double)puVar5[2];
            local_1f8 = *pdVar21;
            local_238 = (double)*(float *)(pdVar21 + 6);
            uStack_230 = 0;
            local_228 = (double)*(float *)((longlong)pdVar21 + 0x2c);
            uStack_220 = 0;
            dVar51 = (double)*(float *)(pdVar21 + 5);
            dVar13 = pdVar21[2];
            local_268 = pdVar21[3];
            pdVar1 = (double *)pdVar21[4];
            dVar39 = *(double *)(lVar22 + 0x6c8) - (double)pdVar1;
            dVar48 = *(double *)(lVar22 + 0x6c0) - local_268;
            auVar47._0_8_ = *(double *)(lVar22 + 0x6b8) - dVar13;
            auVar47._8_8_ = 0;
            dVar45 = dVar39 * (double)plVar3[0x12] +
                     auVar47._0_8_ * (double)plVar3[10] + (double)plVar3[0xe] * dVar48;
            dVar34 = dVar39 - (double)plVar3[0x12] * dVar45;
            dVar40 = dVar48 - (double)plVar3[0xe] * dVar45;
            dVar44 = auVar47._0_8_ - (double)plVar3[10] * dVar45;
            dVar43 = (double)*(float *)((longlong)pdVar21 + 0x34) + *(double *)(lVar22 + 0x6d0);
            dVar34 = dVar34 * dVar34 + dVar44 * dVar44 + dVar40 * dVar40;
            dVar43 = dVar43 * dVar43;
            bVar2 = *(byte *)(plVar3 + 0x3a);
            dStack_260 = local_268;
            if ((bVar2 & 4) == 0) {
LAB_143084225:
              if (dVar43 <= dVar34) goto LAB_143084775;
            }
            else {
              if ((*(byte *)(lVar31 + 0xe4) & 1) != 0) {
                if (((bVar2 & 8) == 0) || (*(int *)(lVar31 + 0xf8) < DAT_14c760480))
                goto LAB_14308417c;
                goto LAB_143084225;
              }
              if ((bVar2 & 8) != 0) goto LAB_143084225;
LAB_14308417c:
              local_250 = lVar31;
              local_218 = pdVar23;
              local_208 = dVar35;
              local_1e8 = pdVar24;
              cVar14 = (**(code **)(*plVar3 + 0xb0))();
              pdVar24 = local_1e8;
              if ((dVar43 <= dVar34) ||
                 (pdVar23 = local_218, lVar31 = local_250, dVar35 = local_208, cVar14 == '\0'))
              goto LAB_143084775;
            }
            if ((dVar45 < 0.0) &&
               (auVar47._0_8_ = auVar47._0_8_ * auVar47._0_8_ + dVar48 * dVar48, auVar47._8_8_ = 0,
               dVar43 < dVar39 * dVar39 + auVar47._0_8_)) goto LAB_143084775;
            if ((*(short *)(*(longlong *)((longlong)dVar35 + 0x31d8) +
                           (longlong)*(int *)((longlong)local_1f8 + 0x158) * 0x18) == 1) ||
               ((*(byte *)(*(longlong *)((longlong)dVar35 + 0x31d8) +
                           (longlong)*(int *)((longlong)local_1f8 + 0x158) * 0x18 + 4) & 6) == 0))
            goto LAB_143084775;
            lVar22 = *plVar26;
            uVar33 = SUB84(dVar51,0) & uVar28;
            uVar38 = (uint)((ulonglong)dVar51 >> 0x20) & uVar27;
            uStack_1e0 = SUB84(local_228,0) & uVar6;
            uStack_1dc = (uint)((ulonglong)local_228 >> 0x20) & uVar7;
            auVar42._0_8_ = (double)CONCAT44(uVar38,uVar33);
            auVar42._8_4_ = uVar33;
            auVar42._12_4_ = uVar38;
            local_1e8 = (double *)CONCAT44(uStack_1dc,uStack_1e0);
            iVar20 = *(int *)(lVar22 + 0x1f0);
            local_1d8 = (double)CONCAT44(local_1d8._4_4_,iVar20);
            uStack_1a0 = 0;
            dVar34 = auVar42._8_8_;
            uVar41 = auVar36._0_8_;
            uVar10 = auVar36._8_8_;
            local_1b0 = plVar26;
            local_1a8 = pdVar1;
            if (0 < iVar20) {
              pdVar16 = (double *)(lVar22 + 0xe0);
              if (*(double **)(lVar22 + 0x1e0) != (double *)0x0) {
                pdVar16 = *(double **)(lVar22 + 0x1e0);
              }
              iVar29 = 0;
              do {
                local_1c8 = (double)CONCAT44(local_1c8._4_4_,iVar29);
                auVar47._8_8_ =
                     -(ulonglong)
                      ((double)((ulonglong)(pdVar16[0xb] * local_238) & uVar10) +
                       (double)((ulonglong)pdVar16[7] & uVar10) *
                       (double)CONCAT44(uStack_1dc,uStack_1e0) +
                       (double)((ulonglong)pdVar16[3] & uVar10) * dVar34 <
                      ((double)pdVar1 * pdVar16[0xb] + dStack_260 * pdVar16[7] + dVar13 * pdVar16[3]
                      ) - pdVar16[0xf]);
                auVar47._0_8_ =
                     (double)-(ulonglong)
                              ((double)((ulonglong)(pdVar16[10] * local_238) & uVar41) +
                               (double)((ulonglong)pdVar16[6] & uVar41) * (double)local_1e8 +
                               (double)((ulonglong)pdVar16[2] & uVar41) * auVar42._0_8_ <
                              ((double)pdVar1 * pdVar16[10] +
                              local_268 * pdVar16[6] + dVar13 * pdVar16[2]) - pdVar16[0xe]);
                auVar8._8_8_ = -(ulonglong)
                                ((double)((ulonglong)(pdVar16[9] * local_238) & uVar10) +
                                 (double)((ulonglong)pdVar16[5] & uVar10) *
                                 (double)CONCAT44(uStack_1dc,uStack_1e0) +
                                 (double)((ulonglong)pdVar16[1] & uVar10) * dVar34 <
                                ((double)pdVar1 * pdVar16[9] +
                                dStack_260 * pdVar16[5] + dVar13 * pdVar16[1]) - pdVar16[0xd]);
                auVar8._0_8_ = -(ulonglong)
                                ((double)((ulonglong)(pdVar16[8] * local_238) & uVar41) +
                                 (double)((ulonglong)pdVar16[4] & uVar41) * (double)local_1e8 +
                                 (double)((ulonglong)*pdVar16 & uVar41) * auVar42._0_8_ <
                                ((double)pdVar1 * pdVar16[8] +
                                local_268 * pdVar16[4] + dVar13 * *pdVar16) - pdVar16[0xc]);
                iVar25 = movmskpd((int)lVar31,auVar8);
                uVar33 = movmskpd(SUB84(dVar35,0),auVar47);
                local_218 = pdVar1;
                pdStack_210 = pdVar1;
                local_188 = dVar13;
                dStack_180 = dVar13;
                if ((uVar33 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_143084775;
                pdVar16 = pdVar16 + 0x10;
                iVar29 = iVar29 + 4;
              } while (iVar29 < iVar20);
            }
            lVar22 = plVar26[1];
            local_250 = lVar31;
            local_208 = dVar35;
            if (0 < *(int *)(lVar22 + 0x1f0)) {
              pdVar16 = (double *)plVar26[2];
              local_218 = (double *)(pdVar16[2] + (double)pdVar1);
              local_1d8 = pdVar16[1] + local_268;
              local_1c8 = *pdVar16 + dVar13;
              pdVar16 = *(double **)(lVar22 + 0x1e0);
              pdVar17 = (double *)(lVar22 + 0xe0);
              if (pdVar16 != (double *)0x0) {
                pdVar17 = pdVar16;
              }
              iVar20 = 0;
              local_198 = local_238;
              dStack_190 = local_238;
              do {
                auVar47._8_8_ =
                     -(ulonglong)
                      ((double)((ulonglong)(pdVar17[9] * local_238) & uVar10) +
                       (double)((ulonglong)pdVar17[5] & uVar10) *
                       (double)CONCAT44(uStack_1dc,uStack_1e0) +
                       (double)((ulonglong)pdVar17[1] & uVar10) * dVar34 <
                      ((double)local_218 * pdVar17[9] +
                      local_1d8 * pdVar17[5] + local_1c8 * pdVar17[1]) - pdVar17[0xd]);
                auVar47._0_8_ =
                     (double)-(ulonglong)
                              ((double)((ulonglong)(pdVar17[8] * local_238) & uVar41) +
                               (double)((ulonglong)pdVar17[4] & uVar41) * (double)local_1e8 +
                               (double)((ulonglong)*pdVar17 & uVar41) * auVar42._0_8_ <
                              ((double)local_218 * pdVar17[8] +
                              local_1d8 * pdVar17[4] + local_1c8 * *pdVar17) - pdVar17[0xc]);
                auVar50._8_8_ =
                     -(ulonglong)
                      ((double)((ulonglong)(pdVar17[0xb] * local_238) & uVar10) +
                       (double)((ulonglong)pdVar17[7] & uVar10) *
                       (double)CONCAT44(uStack_1dc,uStack_1e0) +
                       (double)((ulonglong)pdVar17[3] & uVar10) * dVar34 <
                      ((double)local_218 * pdVar17[0xb] +
                      local_1d8 * pdVar17[7] + local_1c8 * pdVar17[3]) - pdVar17[0xf]);
                auVar50._0_8_ =
                     -(ulonglong)
                      ((double)((ulonglong)(pdVar17[10] * local_238) & uVar41) +
                       (double)((ulonglong)pdVar17[6] & uVar41) * (double)local_1e8 +
                       (double)((ulonglong)pdVar17[2] & uVar41) * auVar42._0_8_ <
                      ((double)local_218 * pdVar17[10] +
                      local_1d8 * pdVar17[6] + local_1c8 * pdVar17[2]) - pdVar17[0xe]);
                uVar33 = movmskpd((int)pdVar16,auVar47);
                pdVar16 = (double *)(ulonglong)uVar33;
                uVar38 = movmskpd(SUB84(dVar35,0),auVar50);
                pdStack_210 = local_218;
                dStack_1d0 = local_1d8;
                dStack_1c0 = local_1c8;
                if ((uVar38 & 0x3fffffff) != 0 || uVar33 != 0) goto LAB_143084775;
                pdVar17 = pdVar17 + 0x10;
                iVar20 = iVar20 + 4;
                dVar35 = 0.0;
              } while (iVar20 < *(int *)(lVar22 + 0x1f0));
            }
            dVar35 = (double)(float)*(double *)((longlong)local_248 + 0x30);
            dStack_130 = (double)pdVar1 + local_238 + dVar35;
            local_138 = local_268 + local_228 + dVar35;
            dStack_140 = dVar13 + dVar51 + dVar35;
            local_148 = (double)pdVar1 - (local_238 + dVar35);
            auVar47._0_8_ = local_268 - (local_228 + dVar35);
            auVar47._8_8_ = dStack_260;
            local_158 = dVar13 - (dVar51 + dVar35);
            local_128 = (double)CONCAT71(local_128._1_7_,1);
            local_160 = local_240[2] - pdVar23[2];
            local_168 = local_240[1] - pdVar23[1];
            local_170 = *local_240 - *pdVar23;
            local_278 = (undefined8 *)0x0;
            dStack_150 = auVar47._0_8_;
            cVar14 = FUN_144a3f41e(&local_158,local_170,local_240,&local_170);
            dVar35 = local_208;
            if (cVar14 == '\0') goto LAB_143084775;
            if ((*(byte *)(plVar3 + 0x3a) & 2) == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = FUN_1471dbc0a(local_250);
            }
            cVar14 = FUN_14307c537(uVar15,local_1f8,(longlong)dVar35 + 0x117c0,dVar35);
            if (cVar14 == '\0') goto LAB_143084775;
            puVar18 = (undefined1 *)*puVar5;
            uVar19 = 1;
          }
          else {
LAB_143084775:
            puVar18 = (undefined1 *)*puVar5;
            uVar19 = *puVar18;
          }
          *puVar18 = uVar19;
          pdVar21 = pdVar21 + 9;
        } while (pdVar21 != pdVar24);
      }
      iVar20 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar30 * 8);
      if (iVar20 != -1) {
        iVar29 = 0;
        auVar36 = pmovsxbd(auVar47,0x8040201);
        do {
          auVar37._4_4_ = iVar29;
          auVar37._0_4_ = iVar29;
          auVar37._8_4_ = iVar29;
          auVar37._12_4_ = iVar29;
          auVar37 = auVar37 & auVar36;
          dVar51 = param_3[9];
          dVar35 = param_3[9];
          dVar43 = (double)(float)-(uint)(auVar37._0_4_ == auVar36._0_4_);
          dVar45 = (double)(float)-(uint)(auVar37._4_4_ == auVar36._4_4_);
          dVar34 = (double)(float)-(uint)(auVar37._8_4_ == auVar36._8_4_);
          dVar39 = (double)(float)-(uint)(auVar37._12_4_ == auVar36._12_4_);
          local_158 = (double)(~(ulonglong)dVar43 & (ulonglong)-dVar51 |
                              (ulonglong)dVar51 & (ulonglong)dVar43) + *param_3;
          dStack_150 = (double)(~(ulonglong)dVar45 & (ulonglong)-dVar35 |
                               (ulonglong)dVar35 & (ulonglong)dVar45) + param_3[1];
          local_148 = ((double)(~(ulonglong)dVar34 & (ulonglong)-dVar51 |
                               (ulonglong)dVar51 & (ulonglong)dVar34) + param_3[2]) * 1.0;
          dStack_140 = ((double)(~(ulonglong)dVar39 & (ulonglong)-dVar35 |
                                (ulonglong)dVar35 & (ulonglong)dVar39) + param_3[3]) * 0.0;
          local_138 = param_3[8];
          local_128 = local_138 * 1.0;
          dStack_120 = local_138 * 0.0;
          local_118 = local_138 * 0.5 * 1.0625;
          local_110 = local_138 - local_118;
          local_278 = param_5;
          dStack_130 = local_138;
          FUN_143083adc(param_1,iVar20 + iVar29,&local_158,param_4);
          iVar29 = iVar29 + 1;
        } while (iVar29 != 8);
      }
    }
  }
LAB_1430848b7:
  if ((local_f0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14308493e FUN_14308493e body=3556 status=ok
// SIG undefined FUN_14308493e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14308493e(longlong param_1,int param_2,double *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  char cVar11;
  undefined4 uVar12;
  double *pdVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  int iVar16;
  double *pdVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  double dVar21;
  longlong *plVar22;
  int in_R10D;
  uint uVar23;
  undefined4 in_R11D;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  double *pdVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 unaff_XMM6 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  double dVar51;
  double dVar52;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  longlong *local_1e8;
  int local_1dc;
  double local_1d8;
  undefined8 uStack_1d0;
  double *local_1c8;
  double *pdStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double *local_198;
  undefined8 uStack_190;
  longlong local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar27 = *(longlong *)(param_1 + 0x60);
  lVar26 = (longlong)param_2;
  if (*(int *)(lVar27 + 4 + lVar26 * 8) != 0) {
    local_1b8 = param_3[4];
    local_1a8 = param_3[5];
    local_1c8 = (double *)param_3[6];
    local_1d8 = *param_3;
    uStack_1d0 = 0;
    local_170 = param_3[1];
    local_208._8_8_ = 0;
    local_208._0_8_ = local_170;
    local_168 = param_3[2];
    local_1f8._8_8_ = 0;
    local_1f8._0_8_ = local_168;
    plVar19 = *(longlong **)*param_4;
    lVar18 = *plVar19;
    auVar34 = *(undefined1 (*) [16])(param_3 + 4) & _DAT_149931180;
    auVar41._0_8_ = auVar34._0_8_;
    auVar41._8_4_ = auVar34._0_4_;
    auVar41._12_4_ = auVar34._4_4_;
    auVar47._0_8_ = auVar34._8_8_;
    auVar47._8_4_ = auVar34._8_4_;
    auVar47._12_4_ = auVar34._12_4_;
    uStack_190 = 0;
    dVar44 = auVar47._8_8_;
    dVar21 = auVar41._8_8_;
    plVar22 = param_4;
    local_1e8 = param_4;
    pdStack_1c0 = local_1c8;
    local_198 = local_1c8;
    local_178 = local_1d8;
    if (0 < *(int *)(lVar18 + 0x1f0)) {
      unaff_XMM6._8_8_ = local_1d8;
      unaff_XMM6._0_8_ = local_1d8;
      pdVar17 = (double *)(lVar18 + 0xe0);
      if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
        pdVar17 = *(double **)(lVar18 + 0x1e0);
      }
      plVar22 = (longlong *)0x0;
      do {
        lVar29 = -(ulonglong)
                  (ABS(pdVar17[9] * (double)local_1c8) +
                   ABS(pdVar17[5]) * dVar44 + ABS(pdVar17[1]) * dVar21 <
                  (local_168 * pdVar17[9] + local_170 * pdVar17[5] + local_1d8 * pdVar17[1]) -
                  pdVar17[0xd]);
        lVar30 = -(ulonglong)
                  (ABS(pdVar17[0xb] * (double)local_1c8) +
                   ABS(pdVar17[7]) * dVar44 + ABS(pdVar17[3]) * dVar21 <
                  (local_168 * pdVar17[0xb] + local_170 * pdVar17[7] + local_1d8 * pdVar17[3]) -
                  pdVar17[0xf]);
        auVar34._8_4_ = (int)lVar29;
        auVar34._0_8_ =
             -(ulonglong)
              (ABS(pdVar17[8] * (double)local_1c8) +
               ABS(pdVar17[4]) * auVar47._0_8_ + ABS(*pdVar17) * auVar41._0_8_ <
              (local_168 * pdVar17[8] + local_170 * pdVar17[4] + local_1d8 * *pdVar17) -
              pdVar17[0xc]);
        auVar34._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
        in_R10D = movmskpd(in_R10D,auVar34);
        auVar9._8_4_ = (int)lVar30;
        auVar9._0_8_ = -(ulonglong)
                        (ABS(pdVar17[10] * (double)local_1c8) +
                         ABS(pdVar17[6]) * auVar47._0_8_ + ABS(pdVar17[2]) * auVar41._0_8_ <
                        (local_168 * pdVar17[10] + local_170 * pdVar17[6] + local_1d8 * pdVar17[2])
                        - pdVar17[0xe]);
        auVar9._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        uVar24 = movmskpd(in_R11D,auVar9);
        if ((uVar24 & 0x3fffffff) != 0 || in_R10D != 0) goto LAB_14308569d;
        pdVar17 = pdVar17 + 0x10;
        uVar24 = (int)plVar22 + 4;
        plVar22 = (longlong *)(ulonglong)uVar24;
        in_R11D = 0;
      } while ((int)uVar24 < *(int *)(lVar18 + 0x1f0));
    }
    lVar18 = plVar19[1];
    if (0 < *(int *)(lVar18 + 0x1f0)) {
      pdVar17 = (double *)plVar19[2];
      dVar40 = local_168 + pdVar17[2];
      dVar38 = local_170 + pdVar17[1];
      dVar33 = local_1d8 + *pdVar17;
      pdVar17 = (double *)(lVar18 + 0xe0);
      if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
        pdVar17 = *(double **)(lVar18 + 0x1e0);
      }
      iVar16 = 0;
      do {
        auVar48._8_8_ =
             -(ulonglong)
              (ABS(pdVar17[9] * (double)local_1c8) +
               ABS(pdVar17[5]) * dVar44 + ABS(pdVar17[1]) * dVar21 <
              (dVar40 * pdVar17[9] + dVar38 * pdVar17[5] + dVar33 * pdVar17[1]) - pdVar17[0xd]);
        auVar48._0_8_ =
             -(ulonglong)
              (ABS(pdVar17[8] * (double)local_1c8) +
               ABS(pdVar17[4]) * auVar47._0_8_ + ABS(*pdVar17) * auVar41._0_8_ <
              (dVar40 * pdVar17[8] + dVar38 * pdVar17[4] + dVar33 * *pdVar17) - pdVar17[0xc]);
        lVar29 = -(ulonglong)
                  (ABS(pdVar17[0xb] * (double)local_1c8) +
                   ABS(pdVar17[7]) * dVar44 + ABS(pdVar17[3]) * dVar21 <
                  (dVar40 * pdVar17[0xb] + dVar38 * pdVar17[7] + dVar33 * pdVar17[3]) - pdVar17[0xf]
                  );
        uVar24 = movmskpd((int)plVar22,auVar48);
        plVar22 = (longlong *)(ulonglong)uVar24;
        auVar7._8_4_ = (int)lVar29;
        auVar7._0_8_ = -(ulonglong)
                        (ABS(pdVar17[10] * (double)local_1c8) +
                         ABS(pdVar17[6]) * auVar47._0_8_ + ABS(pdVar17[2]) * auVar41._0_8_ <
                        (dVar40 * pdVar17[10] + dVar38 * pdVar17[6] + dVar33 * pdVar17[2]) -
                        pdVar17[0xe]);
        auVar7._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
        uVar23 = movmskpd(in_R10D,auVar7);
        if ((uVar23 & 0x3fffffff) != 0 || uVar24 != 0) goto LAB_14308569d;
        pdVar17 = pdVar17 + 0x10;
        iVar16 = iVar16 + 4;
        in_R10D = 0;
        unaff_XMM6 = auVar41;
      } while (iVar16 < *(int *)(lVar18 + 0x1f0));
    }
    plVar19 = (longlong *)((longlong *)*param_4)[1];
    plVar22 = (longlong *)*plVar19;
    lVar18 = (longlong)(int)plVar22[1];
    if (lVar18 != 0) {
      dVar38 = local_1a8 * local_1a8;
      dVar32 = local_1b8 * local_1b8;
      dVar40 = (double)local_1c8 * (double)local_1c8;
      lVar29 = *plVar22;
      pdVar17 = (double *)plVar19[2];
      dVar21 = pdVar17[2];
      dVar44 = pdVar17[1];
      dVar33 = *pdVar17;
      lVar30 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar29 + lVar30) + 8);
        fVar50 = (float)*(double *)(lVar2 + 0x1b0) + (float)SQRT(dVar40 + dVar32 + dVar38);
        local_148 = *(double *)(lVar2 + 400) + dVar21 * 8796093022208.0;
        dStack_150 = *(double *)(lVar2 + 0x188) + dVar44 * 8796093022208.0;
        local_158 = *(double *)(lVar2 + 0x180) + dVar33 * 8796093022208.0;
        fVar31 = (float)FUN_1402b5c34(&local_178,lVar2 + 0x180,&local_158);
        if (fVar31 < fVar50 * fVar50) {
          lVar18 = (longlong)*(int *)(*(longlong *)(param_5[1] + 0x80) + 8 + lVar26 * 0x10);
          if (lVar18 == 0) goto LAB_143085589;
          pdVar28 = *(double **)(*(longlong *)(param_5[1] + 0x80) + lVar26 * 0x10);
          pdVar17 = pdVar28 + lVar18 * 9;
          local_1c8 = pdVar17;
          goto LAB_143084e9b;
        }
        lVar30 = lVar30 + 8;
      } while (lVar18 * 8 != lVar30);
    }
  }
  goto LAB_14308569d;
LAB_143084e9b:
  do {
    puVar3 = (undefined8 *)*param_5;
    plVar19 = *(longlong **)puVar3[4];
    plVar22 = (longlong *)((undefined8 *)puVar3[4])[1];
    lVar27 = puVar3[2];
    lVar18 = puVar3[3];
    lVar29 = *(longlong *)(lVar18 + 0xb60);
    plVar4 = *(longlong **)(lVar29 + 0x28);
    dVar21 = *pdVar28;
    dVar44 = pdVar28[1];
    fVar31 = *(float *)((longlong)pdVar28 + 0x34);
    local_128 = (double)fVar31;
    dStack_130 = (double)*(float *)(pdVar28 + 6);
    local_138 = (double)*(float *)((longlong)pdVar28 + 0x2c);
    dStack_140 = (double)*(float *)(pdVar28 + 5);
    dVar33 = pdVar28[4];
    local_158 = pdVar28[2];
    dVar38 = pdVar28[3];
    dStack_150 = dVar38;
    local_148 = dVar33;
    if (((*(char *)((longlong)dVar44 + 0x6f) < '\0') &&
        ((*(byte *)((longlong)dVar44 + 0x78) & 0x20) != 0)) &&
       ((*(byte *)((longlong)dVar44 + 0x82) & *(byte *)((longlong)plVar4 + 0x1e9)) != 0)) {
      dVar40 = *(double *)(lVar18 + 0x6c8) - dVar33;
      dVar10 = *(double *)(lVar18 + 0x6b8) - local_158;
      dVar52 = *(double *)(lVar18 + 0x6c0) - dVar38;
      dVar32 = dVar40 * (double)plVar4[0x12] +
               dVar10 * (double)plVar4[10] + (double)plVar4[0xe] * dVar52;
      dVar43 = dVar40 - (double)plVar4[0x12] * dVar32;
      dVar44 = dVar52 - (double)plVar4[0xe] * dVar32;
      dVar39 = dVar10 - (double)plVar4[10] * dVar32;
      dVar51 = local_128 + *(double *)(lVar18 + 0x6d0);
      dVar44 = dVar43 * dVar43 + dVar39 * dVar39 + dVar44 * dVar44;
      dVar51 = dVar51 * dVar51;
      bVar1 = *(byte *)(plVar4 + 0x3a);
      if ((bVar1 & 4) == 0) {
LAB_143085091:
        if (dVar44 < dVar51) goto LAB_14308509c;
      }
      else {
        if ((*(byte *)(lVar29 + 0xe4) & 1) == 0) {
          if ((bVar1 & 8) != 0) goto LAB_143085091;
        }
        else if (((bVar1 & 8) != 0) && (DAT_14c760480 <= *(int *)(lVar29 + 0xf8)))
        goto LAB_143085091;
        local_1f8._0_8_ = plVar19;
        local_208._0_8_ = plVar22;
        local_1d8 = dVar21;
        cVar11 = (**(code **)(*plVar4 + 0xb0))(plVar4);
        pdVar17 = local_1c8;
        if ((dVar44 < dVar51) &&
           (plVar19 = (longlong *)local_1f8._0_8_, dVar21 = local_1d8,
           plVar22 = (longlong *)local_208._0_8_, cVar11 != '\0')) {
LAB_14308509c:
          if ((0.0 <= dVar32) || (dVar40 * dVar40 + dVar10 * dVar10 + dVar52 * dVar52 <= dVar51)) {
            lVar18 = *(longlong *)(lVar27 + 0x31d8);
            if ((*(short *)(lVar18 + (longlong)*(int *)((longlong)dVar21 + 0x158) * 0x18) != 1) &&
               ((*(byte *)(lVar18 + (longlong)*(int *)((longlong)dVar21 + 0x158) * 0x18 + 4) & 6) !=
                0)) {
              lVar18 = *plVar19;
              auVar35._8_8_ = local_138;
              auVar35._0_8_ = dStack_140;
              local_1a8 = local_158;
              uStack_1a0 = 0;
              auVar35 = auVar35 & _DAT_149931180;
              local_1f8._8_4_ = auVar35._8_4_;
              local_1f8._12_4_ = auVar35._12_4_;
              dVar44 = auVar35._0_8_;
              local_208._8_4_ = auVar35._0_4_;
              local_208._0_8_ = dVar44;
              local_208._12_4_ = auVar35._4_4_;
              local_1f8._0_8_ = auVar35._8_8_;
              local_1dc = *(int *)(lVar18 + 0x1f0);
              if (0 < local_1dc) {
                unaff_XMM6._8_8_ = local_158;
                unaff_XMM6._0_8_ = local_158;
                pdVar13 = (double *)(lVar18 + 0xe0);
                if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
                  pdVar13 = *(double **)(lVar18 + 0x1e0);
                }
                iVar16 = 0;
                do {
                  local_198 = (double *)CONCAT44(local_198._4_4_,iVar16);
                  auVar45._8_8_ =
                       -(ulonglong)
                        (ABS(pdVar13[9] * dStack_130) +
                         ABS(pdVar13[5]) * (double)local_1f8._8_8_ +
                         ABS(pdVar13[1]) * (double)local_208._8_8_ <
                        (dVar33 * pdVar13[9] + dStack_150 * pdVar13[5] + local_158 * pdVar13[1]) -
                        pdVar13[0xd]);
                  auVar45._0_8_ =
                       -(ulonglong)
                        (ABS(pdVar13[8] * dStack_130) +
                         ABS(pdVar13[4]) * (double)local_1f8._0_8_ + ABS(*pdVar13) * dVar44 <
                        (dVar33 * pdVar13[8] + dStack_150 * pdVar13[4] + local_158 * *pdVar13) -
                        pdVar13[0xc]);
                  lVar18 = -(ulonglong)
                            (ABS(pdVar13[0xb] * dStack_130) +
                             ABS(pdVar13[7]) * (double)local_1f8._8_8_ +
                             ABS(pdVar13[3]) * (double)local_208._8_8_ <
                            (dVar33 * pdVar13[0xb] +
                            dStack_150 * pdVar13[7] + local_158 * pdVar13[3]) - pdVar13[0xf]);
                  iVar25 = movmskpd(SUB84(dVar21,0),auVar45);
                  auVar8._8_4_ = (int)lVar18;
                  auVar8._0_8_ = -(ulonglong)
                                  (ABS(pdVar13[10] * dStack_130) +
                                   ABS(pdVar13[6]) * (double)local_1f8._0_8_ +
                                   ABS(pdVar13[2]) * dVar44 <
                                  (dVar33 * pdVar13[10] +
                                  dStack_150 * pdVar13[6] + local_158 * pdVar13[2]) - pdVar13[0xe]);
                  auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
                  uVar24 = movmskpd((int)plVar22,auVar8);
                  local_1b8 = dVar33;
                  dStack_1b0 = dVar33;
                  if ((uVar24 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_143085555;
                  pdVar13 = pdVar13 + 0x10;
                  iVar16 = iVar16 + 4;
                } while (iVar16 < local_1dc);
              }
              lVar18 = plVar19[1];
              iVar16 = *(int *)(lVar18 + 0x1f0);
              local_1b8 = (double)CONCAT44(local_1b8._4_4_,iVar16);
              if (0 < iVar16) {
                pdVar13 = (double *)plVar19[2];
                dVar33 = dVar33 + pdVar13[2];
                dVar38 = dVar38 + pdVar13[1];
                dVar40 = local_158 + *pdVar13;
                pdVar13 = (double *)(lVar18 + 0xe0);
                if (*(double **)(lVar18 + 0x1e0) != (double *)0x0) {
                  pdVar13 = *(double **)(lVar18 + 0x1e0);
                }
                iVar25 = 0;
                do {
                  auVar46._8_8_ =
                       -(ulonglong)
                        (ABS(pdVar13[9] * dStack_130) +
                         ABS(pdVar13[5]) * (double)local_1f8._8_8_ +
                         ABS(pdVar13[1]) * (double)local_208._8_8_ <
                        (dVar33 * pdVar13[9] + dVar38 * pdVar13[5] + dVar40 * pdVar13[1]) -
                        pdVar13[0xd]);
                  auVar46._0_8_ =
                       -(ulonglong)
                        (ABS(pdVar13[8] * dStack_130) +
                         ABS(pdVar13[4]) * (double)local_1f8._0_8_ + ABS(*pdVar13) * dVar44 <
                        (dVar33 * pdVar13[8] + dVar38 * pdVar13[4] + dVar40 * *pdVar13) -
                        pdVar13[0xc]);
                  auVar49._8_8_ =
                       -(ulonglong)
                        (ABS(pdVar13[0xb] * dStack_130) +
                         ABS(pdVar13[7]) * (double)local_1f8._8_8_ +
                         ABS(pdVar13[3]) * (double)local_208._8_8_ <
                        (dVar33 * pdVar13[0xb] + dVar38 * pdVar13[7] + dVar40 * pdVar13[3]) -
                        pdVar13[0xf]);
                  auVar49._0_8_ =
                       -(ulonglong)
                        (ABS(pdVar13[10] * dStack_130) +
                         ABS(pdVar13[6]) * (double)local_1f8._0_8_ + ABS(pdVar13[2]) * dVar44 <
                        (dVar33 * pdVar13[10] + dVar38 * pdVar13[6] + dVar40 * pdVar13[2]) -
                        pdVar13[0xe]);
                  iVar20 = movmskpd(SUB84(dVar21,0),auVar46);
                  uVar24 = movmskpd((int)plVar22,auVar49);
                  unaff_XMM6 = local_1f8;
                  if ((uVar24 & 0x3fffffff) != 0 || iVar20 != 0) goto LAB_143085555;
                  pdVar13 = pdVar13 + 0x10;
                  iVar25 = iVar25 + 4;
                } while (iVar25 < iVar16);
              }
              local_208._0_8_ = SEXT48(*(int *)((undefined8 *)*plVar22 + 1));
              if (local_208._0_8_ != 0) {
                local_1f8._0_8_ = *(undefined8 *)*plVar22;
                pdVar17 = (double *)plVar22[2];
                dVar44 = pdVar17[2];
                dVar33 = pdVar17[1];
                dVar38 = *pdVar17;
                local_208._0_8_ = local_208._0_8_ << 3;
                lVar18 = 0;
                local_1d8 = dVar21;
                local_180 = lVar27;
                do {
                  lVar27 = *(longlong *)(*(longlong *)(local_1f8._0_8_ + lVar18) + 8);
                  dVar21 = *(double *)(lVar27 + 0x1b0);
                  local_168 = *(double *)(lVar27 + 400) + dVar44 * 8796093022208.0;
                  local_170 = *(double *)(lVar27 + 0x188) + dVar33 * 8796093022208.0;
                  local_178 = *(double *)(lVar27 + 0x180) + dVar38 * 8796093022208.0;
                  fVar50 = (float)FUN_1402b5c34(&local_158,lVar27 + 0x180,&local_178);
                  fVar42 = (float)dVar21 + fVar31;
                  fVar42 = fVar42 * fVar42;
                  unaff_XMM6 = ZEXT416((uint)fVar42);
                  if (fVar50 < fVar42) {
                    if ((*(byte *)(plVar4 + 0x3a) & 2) == 0) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = FUN_1471dbc0a(lVar29);
                    }
                    cVar11 = FUN_14307c537(uVar12,local_1d8,local_180 + 0x117c0);
                    pdVar17 = local_1c8;
                    if (cVar11 != '\0') {
                      puVar14 = (undefined1 *)*puVar3;
                      uVar15 = 1;
                      goto LAB_14308555b;
                    }
                    break;
                  }
                  lVar18 = lVar18 + 8;
                  pdVar17 = local_1c8;
                } while (local_208._0_8_ != lVar18);
              }
            }
          }
        }
      }
    }
LAB_143085555:
    puVar14 = (undefined1 *)*puVar3;
    uVar15 = *puVar14;
LAB_14308555b:
    *puVar14 = uVar15;
    pdVar28 = pdVar28 + 9;
  } while (pdVar28 != pdVar17);
  lVar27 = *(longlong *)(param_1 + 0x60);
LAB_143085589:
  plVar19 = local_1e8;
  iVar16 = *(int *)(lVar27 + lVar26 * 8);
  if (iVar16 != -1) {
    iVar25 = 0;
    auVar34 = pmovsxbd(unaff_XMM6,0x8040201);
    do {
      auVar36._4_4_ = iVar25;
      auVar36._0_4_ = iVar25;
      auVar36._8_4_ = iVar25;
      auVar36._12_4_ = iVar25;
      auVar36 = auVar36 & auVar34;
      dVar21 = param_3[9];
      dVar44 = param_3[9];
      dVar40 = (double)(float)-(uint)(auVar36._0_4_ == auVar34._0_4_);
      dVar32 = (double)(float)-(uint)(auVar36._4_4_ == auVar34._4_4_);
      dVar33 = (double)(float)-(uint)(auVar36._8_4_ == auVar34._8_4_);
      dVar38 = (double)(float)-(uint)(auVar36._12_4_ == auVar34._12_4_);
      uVar6 = (ulonglong)dVar44 & (ulonglong)dVar38;
      auVar37._0_8_ = ~(ulonglong)dVar33 & (ulonglong)-dVar21;
      auVar37._8_8_ = ~(ulonglong)dVar38 & (ulonglong)-dVar44;
      auVar5._8_4_ = (int)uVar6;
      auVar5._0_8_ = (ulonglong)dVar21 & (ulonglong)dVar33;
      auVar5._12_4_ = (int)(uVar6 >> 0x20);
      local_158 = (double)(~(ulonglong)dVar40 & (ulonglong)-dVar21 |
                          (ulonglong)dVar21 & (ulonglong)dVar40) + *param_3;
      dStack_150 = (double)(~(ulonglong)dVar32 & (ulonglong)-dVar44 |
                           (ulonglong)dVar44 & (ulonglong)dVar32) + param_3[1];
      local_148 = (SUB168(auVar37 | auVar5,0) + param_3[2]) * 1.0;
      dStack_140 = (SUB168(auVar37 | auVar5,8) + param_3[3]) * 0.0;
      local_138 = param_3[8];
      local_128 = local_138 * 1.0;
      dStack_120 = local_138 * 0.0;
      local_118 = local_138 * 0.5 * 1.0625;
      local_110 = local_138 - local_118;
      local_218 = param_5;
      dStack_130 = local_138;
      FUN_14308493e(param_1,iVar16 + iVar25,&local_158,plVar19);
      iVar25 = iVar25 + 1;
    } while (iVar25 != 8);
  }
LAB_14308569d:
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143085724 FUN_143085724 body=1327 status=ok
// SIG undefined FUN_143085724(void)

void FUN_143085724(longlong param_1,int param_2,double *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  undefined8 *local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar21 = (longlong)param_2;
  if (*(int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar21 * 8) != 0) {
    local_128 = param_3[4];
    dStack_120 = param_3[5];
    local_118 = param_3[6];
    local_148 = *param_3;
    dStack_140 = param_3[1];
    local_138 = param_3[2];
    cVar13 = FUN_143085c54(*param_4);
    if (cVar13 != '\0') {
      lVar17 = (longlong)*(int *)(*(longlong *)(param_5[1] + 0x80) + 8 + lVar21 * 0x10);
      local_160 = lVar21;
      local_158 = param_1;
      local_150 = param_4;
      if (lVar17 != 0) {
        plVar20 = *(longlong **)(*(longlong *)(param_5[1] + 0x80) + lVar21 * 0x10);
        plVar19 = plVar20 + lVar17 * 9;
        unaff_XMM6 = ZEXT816(0);
        local_168 = plVar19;
        do {
          puVar3 = (undefined8 *)*param_5;
          local_148 = *(double *)puVar3[4];
          dStack_140 = ((double *)puVar3[4])[1];
          lVar21 = puVar3[2];
          lVar17 = puVar3[3];
          lVar4 = *(longlong *)(lVar17 + 0xb60);
          plVar5 = *(longlong **)(lVar4 + 0x28);
          lVar6 = *plVar20;
          lVar7 = plVar20[1];
          local_f8 = (double)*(float *)((longlong)plVar20 + 0x34);
          dStack_100 = (double)*(float *)(plVar20 + 6);
          local_108 = (double)*(float *)((longlong)plVar20 + 0x2c);
          dStack_110 = (double)*(float *)(plVar20 + 5);
          local_118 = (double)plVar20[4];
          local_128 = (double)plVar20[2];
          dStack_120 = (double)plVar20[3];
          if (((*(char *)(lVar7 + 0x6f) < '\0') && ((*(byte *)(lVar7 + 0x78) & 0x20) != 0)) &&
             ((*(byte *)(lVar7 + 0x82) & *(byte *)((longlong)plVar5 + 0x1e9)) != 0)) {
            dVar22 = *(double *)(lVar17 + 0x6c8) - local_118;
            dVar27 = *(double *)(lVar17 + 0x6c0) - dStack_120;
            dVar25 = *(double *)(lVar17 + 0x6b8) - local_128;
            dVar28 = dVar22 * (double)plVar5[0x12] +
                     dVar25 * (double)plVar5[10] + (double)plVar5[0xe] * dVar27;
            dVar12 = dVar22 - (double)plVar5[0x12] * dVar28;
            dVar9 = dVar27 - (double)plVar5[0xe] * dVar28;
            dVar26 = dVar25 - (double)plVar5[10] * dVar28;
            dVar11 = local_f8 + *(double *)(lVar17 + 0x6d0);
            dVar9 = dVar12 * dVar12 + dVar26 * dVar26 + dVar9 * dVar9;
            dVar11 = dVar11 * dVar11;
            bVar1 = *(byte *)(plVar5 + 0x3a);
            if ((bVar1 & 4) == 0) {
LAB_143085a07:
              if (dVar11 <= dVar9) goto LAB_143085aaa;
            }
            else {
              if ((*(byte *)(lVar4 + 0xe4) & 1) != 0) {
                if (((bVar1 & 8) == 0) || (*(int *)(lVar4 + 0xf8) < DAT_14c760480))
                goto LAB_1430859cf;
                goto LAB_143085a07;
              }
              if ((bVar1 & 8) != 0) goto LAB_143085a07;
LAB_1430859cf:
              cVar13 = (**(code **)(*plVar5 + 0xb0))(plVar5);
              plVar19 = local_168;
              if ((dVar11 <= dVar9) || (cVar13 == '\0')) goto LAB_143085aaa;
            }
            if ((dVar28 < 0.0) && (dVar11 < dVar22 * dVar22 + dVar25 * dVar25 + dVar27 * dVar27))
            goto LAB_143085aaa;
            lVar17 = (longlong)*(int *)(lVar6 + 0x158);
            if ((*(short *)(*(longlong *)(lVar21 + 0x31d8) + lVar17 * 0x18) == 1) ||
               (((*(byte *)(*(longlong *)(lVar21 + 0x31d8) + lVar17 * 0x18 + 4) & 6) == 0 ||
                (cVar13 = FUN_143085c54(&local_148,&local_128,&dStack_110), plVar19 = local_168,
                cVar13 == '\0')))) goto LAB_143085aaa;
            if ((*(byte *)(plVar5 + 0x3a) & 2) == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = FUN_1471dbc0a(lVar4);
            }
            cVar13 = FUN_14307c537(uVar14,lVar6,lVar21 + 0x117c0,lVar21);
            plVar19 = local_168;
            if (cVar13 == '\0') goto LAB_143085aaa;
            puVar15 = (undefined1 *)*puVar3;
            uVar16 = 1;
          }
          else {
LAB_143085aaa:
            puVar15 = (undefined1 *)*puVar3;
            uVar16 = *puVar15;
          }
          *puVar15 = uVar16;
          plVar20 = plVar20 + 9;
        } while (plVar20 != plVar19);
      }
      puVar3 = local_150;
      lVar21 = local_158;
      iVar2 = *(int *)(*(longlong *)(local_158 + 0x60) + local_160 * 8);
      if (iVar2 != -1) {
        iVar18 = 0;
        auVar29 = pmovsxbd(unaff_XMM6,0x8040201);
        do {
          auVar23._4_4_ = iVar18;
          auVar23._0_4_ = iVar18;
          auVar23._8_4_ = iVar18;
          auVar23._12_4_ = iVar18;
          auVar23 = auVar23 & auVar29;
          dVar11 = param_3[9];
          dVar9 = param_3[9];
          dVar27 = (double)(float)-(uint)(auVar23._0_4_ == auVar29._0_4_);
          dVar28 = (double)(float)-(uint)(auVar23._4_4_ == auVar29._4_4_);
          dVar22 = (double)(float)-(uint)(auVar23._8_4_ == auVar29._8_4_);
          dVar25 = (double)(float)-(uint)(auVar23._12_4_ == auVar29._12_4_);
          uVar10 = (ulonglong)dVar9 & (ulonglong)dVar25;
          auVar24._0_8_ = ~(ulonglong)dVar22 & (ulonglong)-dVar11;
          auVar24._8_8_ = ~(ulonglong)dVar25 & (ulonglong)-dVar9;
          auVar8._8_4_ = (int)uVar10;
          auVar8._0_8_ = (ulonglong)dVar11 & (ulonglong)dVar22;
          auVar8._12_4_ = (int)(uVar10 >> 0x20);
          local_128 = (double)(~(ulonglong)dVar27 & (ulonglong)-dVar11 |
                              (ulonglong)dVar11 & (ulonglong)dVar27) + *param_3;
          dStack_120 = (double)(~(ulonglong)dVar28 & (ulonglong)-dVar9 |
                               (ulonglong)dVar9 & (ulonglong)dVar28) + param_3[1];
          local_118 = (SUB168(auVar24 | auVar8,0) + param_3[2]) * 1.0;
          dStack_110 = (SUB168(auVar24 | auVar8,8) + param_3[3]) * 0.0;
          local_108 = param_3[8];
          local_f8 = local_108 * 1.0;
          dStack_f0 = local_108 * 0.0;
          local_e8 = local_108 * 0.5 * 1.0625;
          local_e0 = local_108 - local_e8;
          local_178 = param_5;
          dStack_100 = local_108;
          FUN_143085724(lVar21,iVar2 + iVar18,&local_128,puVar3);
          iVar18 = iVar18 + 1;
        } while (iVar18 != 8);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143085c54 FUN_143085c54 body=1476 status=ok
// SIG undefined FUN_143085c54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143085c54(longlong *param_1,double *param_2,undefined1 (*param_3) [16],int param_4)

{
  double dVar1;
  double dVar2;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  double *pdVar14;
  int in_R10D;
  undefined4 in_R11D;
  uint uVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8;
  ulonglong local_f0;
  double dVar3;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar4 = (longlong *)*param_1;
  lVar12 = *plVar4;
  local_188 = *param_2;
  uStack_180 = 0;
  local_178 = param_2[2];
  uStack_170 = 0;
  dVar1 = param_2[1];
  dVar19 = param_2[1];
  auVar20 = *param_3 & _DAT_149931180;
  auVar23._0_8_ = auVar20._0_8_;
  auVar23._8_4_ = auVar20._0_4_;
  auVar23._12_4_ = auVar20._4_4_;
  auVar20._0_8_ = auVar20._8_8_;
  dVar2 = *(double *)param_3[1];
  dVar3 = *(double *)param_3[1];
  dVar24 = auVar23._8_8_;
  dVar21 = auVar20._8_8_;
  if (0 < *(int *)(lVar12 + 0x1f0)) {
    pdVar14 = (double *)(lVar12 + 0xe0);
    if (*(double **)(lVar12 + 0x1e0) != (double *)0x0) {
      pdVar14 = *(double **)(lVar12 + 0x1e0);
    }
    param_4 = 0;
    do {
      lVar17 = -(ulonglong)
                (ABS(pdVar14[9] * dVar3) + ABS(pdVar14[5]) * dVar21 + ABS(pdVar14[1]) * dVar24 <
                (local_178 * pdVar14[9] + dVar19 * pdVar14[5] + local_188 * pdVar14[1]) -
                pdVar14[0xd]);
      lVar18 = -(ulonglong)
                (ABS(pdVar14[0xb] * dVar3) + ABS(pdVar14[7]) * dVar21 + ABS(pdVar14[3]) * dVar24 <
                (local_178 * pdVar14[0xb] + dVar19 * pdVar14[7] + local_188 * pdVar14[3]) -
                pdVar14[0xf]);
      auVar9._8_4_ = (int)lVar17;
      auVar9._0_8_ = -(ulonglong)
                      (ABS(pdVar14[8] * dVar2) +
                       ABS(pdVar14[4]) * auVar20._0_8_ + ABS(*pdVar14) * auVar23._0_8_ <
                      (local_178 * pdVar14[8] + dVar1 * pdVar14[4] + local_188 * *pdVar14) -
                      pdVar14[0xc]);
      auVar9._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      in_R10D = movmskpd(in_R10D,auVar9);
      auVar10._8_4_ = (int)lVar18;
      auVar10._0_8_ =
           -(ulonglong)
            (ABS(pdVar14[10] * dVar2) +
             ABS(pdVar14[6]) * auVar20._0_8_ + ABS(pdVar14[2]) * auVar23._0_8_ <
            (local_178 * pdVar14[10] + dVar1 * pdVar14[6] + local_188 * pdVar14[2]) - pdVar14[0xe]);
      auVar10._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar15 = movmskpd(in_R11D,auVar10);
      local_168 = local_188;
      dStack_160 = local_188;
      if ((uVar15 & 0x3fffffff) != 0 || in_R10D != 0) goto LAB_143086191;
      pdVar14 = pdVar14 + 0x10;
      param_4 = param_4 + 4;
      in_R11D = 0;
    } while (param_4 < *(int *)(lVar12 + 0x1f0));
  }
  lVar12 = plVar4[1];
  if (0 < *(int *)(lVar12 + 0x1f0)) {
    pdVar14 = (double *)plVar4[2];
    dVar19 = local_178 + pdVar14[2];
    dVar1 = dVar1 + pdVar14[1];
    dVar22 = local_188 + *pdVar14;
    pdVar14 = (double *)(lVar12 + 0xe0);
    if (*(double **)(lVar12 + 0x1e0) != (double *)0x0) {
      pdVar14 = *(double **)(lVar12 + 0x1e0);
    }
    iVar11 = 0;
    do {
      lVar17 = -(ulonglong)
                (ABS(pdVar14[9] * dVar3) + ABS(pdVar14[5]) * dVar21 + ABS(pdVar14[1]) * dVar24 <
                (dVar19 * pdVar14[9] + dVar1 * pdVar14[5] + dVar22 * pdVar14[1]) - pdVar14[0xd]);
      lVar18 = -(ulonglong)
                (ABS(pdVar14[0xb] * dVar3) + ABS(pdVar14[7]) * dVar21 + ABS(pdVar14[3]) * dVar24 <
                (dVar19 * pdVar14[0xb] + dVar1 * pdVar14[7] + dVar22 * pdVar14[3]) - pdVar14[0xf]);
      auVar7._8_4_ = (int)lVar17;
      auVar7._0_8_ = -(ulonglong)
                      (ABS(pdVar14[8] * dVar2) +
                       ABS(pdVar14[4]) * auVar20._0_8_ + ABS(*pdVar14) * auVar23._0_8_ <
                      (dVar19 * pdVar14[8] + dVar1 * pdVar14[4] + dVar22 * *pdVar14) - pdVar14[0xc])
      ;
      auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      param_4 = movmskpd(param_4,auVar7);
      auVar8._8_4_ = (int)lVar18;
      auVar8._0_8_ = -(ulonglong)
                      (ABS(pdVar14[10] * dVar2) +
                       ABS(pdVar14[6]) * auVar20._0_8_ + ABS(pdVar14[2]) * auVar23._0_8_ <
                      (dVar19 * pdVar14[10] + dVar1 * pdVar14[6] + dVar22 * pdVar14[2]) -
                      pdVar14[0xe]);
      auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar15 = movmskpd(in_R10D,auVar8);
      if ((uVar15 & 0x3fffffff) != 0 || param_4 != 0) goto LAB_143086191;
      pdVar14 = pdVar14 + 0x10;
      iVar11 = iVar11 + 4;
      in_R10D = 0;
    } while (iVar11 < *(int *)(lVar12 + 0x1f0));
  }
  plVar4 = (longlong *)param_1[1];
  plVar5 = (longlong *)*plVar4;
  lVar12 = (longlong)(int)plVar5[1];
  if (lVar12 == 0) {
LAB_143086191:
    uVar13 = 0;
  }
  else {
    lVar17 = *plVar5;
    lVar18 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar17 + lVar18) + 8);
      pdVar14 = (double *)plVar4[2];
      local_148 = pdVar14[2] * 8796093022208.0 + *(double *)(lVar6 + 400);
      local_150 = pdVar14[1] * 8796093022208.0 + *(double *)(lVar6 + 0x188);
      local_158 = *pdVar14 * 8796093022208.0 + *(double *)(lVar6 + 0x180);
      local_128 = (double)(float)*(double *)(lVar6 + 0x1b0);
      local_118 = *(double *)param_3[1] + local_128;
      local_120 = *(double *)(*param_3 + 8) + local_128;
      local_128 = local_128 + *(double *)*param_3;
      local_100 = local_118 + param_2[2];
      local_108 = local_120 + param_2[1];
      local_110 = local_128 + *param_2;
      local_118 = param_2[2] - local_118;
      local_120 = param_2[1] - local_120;
      local_128 = *param_2 - local_128;
      local_f8 = 1;
      local_130 = local_148 - *(double *)(lVar6 + 400);
      local_138 = local_150 - *(double *)(lVar6 + 0x188);
      local_140 = local_158 - *(double *)(lVar6 + 0x180);
      local_198 = 0;
      uVar13 = FUN_144a3f41e(&local_128,lVar6 + 0x180,&local_158,&local_140);
      if ((char)uVar13 != '\0') break;
      bVar16 = lVar12 * 8 + -8 != lVar18;
      lVar18 = lVar18 + 8;
    } while (bVar16);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 14308621a FUN_14308621a body=38 status=ok
// SIG undefined FUN_14308621a(void)

undefined8 FUN_14308621a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143086240 FUN_143086240 body=1636 status=ok
// SIG undefined FUN_143086240(void)

void FUN_143086240(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb978;
  puVar15[3] = 0;
  *(int *)(puVar15 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x24) = 8;
  }
  else {
    puVar10 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar10 = uStack_160;
    }
    FUN_1446fe144(puVar15 + 2,(int)local_158,0);
    puVar13 = (undefined8 *)puVar15[3];
    if ((undefined8 *)puVar15[3] == (undefined8 *)0x0) {
      puVar13 = puVar15 + 2;
    }
    memcpy(puVar13,puVar10,(longlong)(int)local_158);
  }
  puVar15[0xd] = 0;
  puVar10 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar15 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x74) = 8;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = &uStack_150;
    }
    FUN_1446fe1b8(puVar15 + 5,iStack_108,0);
    puVar13 = (undefined8 *)puVar15[0xd];
    if ((undefined8 *)puVar15[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar15 + 5;
    }
    memcpy(puVar13,puVar10,(longlong)iStack_108 << 3);
    puVar10 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar15 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar15 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x84) = (undefined4)uStack_f4;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar10);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar15 + 2) = (float)iVar4;
  *(float *)((longlong)puVar15 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(float *)((longlong)puVar15 + 0x1c) = (float)iVar2;
  *(float *)(puVar15 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  uVar5 = *(undefined4 *)(param_1 + 0x1ec);
  uVar6 = *(undefined4 *)(param_1 + 0x1e8);
  uVar7 = *(undefined4 *)(param_1 + 0x1e0);
  uVar8 = *(undefined4 *)(param_1 + 0x1e4);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  lVar11 = 0;
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar15 + 2) = 1;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar7;
  *(undefined4 *)(puVar15 + 3) = uVar8;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar6;
  *(undefined4 *)(puVar15 + 4) = uVar5;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818));
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar14 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar12,lVar14,1);
    }
  }
  local_138 = *(undefined8 *)(param_1 + 0x1d8);
  local_158 = lVar11;
  lVar11 = FUN_140028f18(param_2);
  if ((lVar11 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 4;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x28);
      puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar15 + 4;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar15;
    param_2[6] = (ulonglong)(puVar15 + 1);
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_14a37d348;
    puVar15[2] = lVar11;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined1 *)((longlong)puVar15 + 0x1c) = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + lVar14 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar11,lVar14,1);
    }
  }
  FUN_145f6d9ae();
  local_188 = uVar9;
  FUN_1449cc26b(param_2,lVar12,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca5bc78);
  uVar9 = DAT_14ca89240;
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar15 + 2) = 0;
  puVar15[3] = uVar9;
  *(undefined4 *)(puVar15 + 4) = 0;
  uVar9 = DAT_14ca89258;
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 6;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x38);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 6;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb5b0;
  puVar15[2] = uVar9;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
  *(undefined4 *)(puVar15 + 4) = 3;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 6;
  puVar15[5] = &DAT_100000001;
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar15 + 2) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430868b2 FUN_1430868b2 body=481 status=ok
// SIG undefined FUN_1430868b2(void)

void FUN_1430868b2(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147314e50(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143086a94 FUN_143086a94 body=232 status=ok
// SIG undefined FUN_143086a94(void)

void FUN_143086a94(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143086b7c FUN_143086b7c body=81 status=ok
// SIG undefined FUN_143086b7c(void)

void FUN_143086b7c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147314ef3(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143086bce FUN_143086bce body=481 status=ok
// SIG undefined FUN_143086bce(void)

void FUN_143086bce(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147315230(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143086db0 FUN_143086db0 body=232 status=ok
// SIG undefined FUN_143086db0(void)

void FUN_143086db0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143086e98 FUN_143086e98 body=81 status=ok
// SIG undefined FUN_143086e98(void)

void FUN_143086e98(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1473152d3(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143086eea FUN_143086eea body=29 status=ok
// SIG undefined FUN_143086eea(void)

undefined8 FUN_143086eea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


