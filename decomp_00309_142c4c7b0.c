// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c4c7b0 FUN_142c4c7b0 body=481 status=ok
// SIG undefined FUN_142c4c7b0(void)

void FUN_142c4c7b0(longlong param_1,ulonglong *param_2)

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
  FUN_1471739b2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4c992 FUN_142c4c992 body=232 status=ok
// SIG undefined FUN_142c4c992(void)

void FUN_142c4c992(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c4ca7a FUN_142c4ca7a body=81 status=ok
// SIG undefined FUN_142c4ca7a(void)

void FUN_142c4ca7a(undefined8 param_1,longlong *param_2)

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
  FUN_147173a55(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4cacc FUN_142c4cacc body=38 status=ok
// SIG undefined FUN_142c4cacc(void)

undefined8 FUN_142c4cacc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4caf2 FUN_142c4caf2 body=1420 status=ok
// SIG undefined FUN_142c4caf2(void)

void FUN_142c4caf2(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = 0;
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
  local_128 = DAT_14c9d5290;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar7,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar10 = *(int *)(param_1 + 0x1e8);
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar4;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145f02ab8();
  local_1b8 = uVar3;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d3e10);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
  local_198 = (float)iVar4;
  iVar10 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0);
  local_1a0 = (float)iVar10;
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_188 = *(undefined8 *)(param_1 + 0x1f0);
  local_190 = CONCAT44(iVar4,iVar10);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4d080 FUN_142c4d080 body=481 status=ok
// SIG undefined FUN_142c4d080(void)

void FUN_142c4d080(longlong param_1,ulonglong *param_2)

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
  FUN_147173ee6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4d262 FUN_142c4d262 body=232 status=ok
// SIG undefined FUN_142c4d262(void)

void FUN_142c4d262(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c4d34a FUN_142c4d34a body=81 status=ok
// SIG undefined FUN_142c4d34a(void)

void FUN_142c4d34a(undefined8 param_1,longlong *param_2)

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
  FUN_147173f89(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4d39c FUN_142c4d39c body=481 status=ok
// SIG undefined FUN_142c4d39c(void)

void FUN_142c4d39c(longlong param_1,ulonglong *param_2)

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
  FUN_1471742c6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4d57e FUN_142c4d57e body=232 status=ok
// SIG undefined FUN_142c4d57e(void)

void FUN_142c4d57e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c4d666 FUN_142c4d666 body=81 status=ok
// SIG undefined FUN_142c4d666(void)

void FUN_142c4d666(undefined8 param_1,longlong *param_2)

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
  FUN_147174369(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4d724 FUN_142c4d724 body=38 status=ok
// SIG undefined FUN_142c4d724(void)

undefined8 FUN_142c4d724(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4d74a FUN_142c4d74a body=1480 status=ok
// SIG undefined FUN_142c4d74a(void)

void FUN_142c4d74a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined5 uStack_a4;
  undefined3 uStack_9f;
  undefined5 uStack_9c;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = (int)local_128;
  if ((longlong)(int)local_128 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar4 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar4 = uStack_130;
    }
    FUN_1446fe144(puVar9 + 2,(int)local_128,0);
    puVar7 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar7 = puVar9 + 2;
    }
    memcpy(puVar7,puVar4,(longlong)(int)local_128);
  }
  puVar9[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar9 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_120;
    }
    FUN_1446fe1b8(puVar9 + 5,iStack_d8,0);
    puVar7 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar9 + 5;
    }
    memcpy(puVar7,puVar4,(longlong)iStack_d8 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar9 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar9 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x84) = (undefined4)uStack_c4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_148 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x310);
  uStack_140 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x318);
  lVar5 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = (undefined8 *)0x0;
  uStack_dc = 0;
  iStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  uStack_9f = 0;
  uStack_9c = 0;
  uStack_97 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  FUN_144b0e33a(param_2,&local_138);
  local_108 = DAT_14c9d57e8;
  uStack_100 = DAT_14c9c0db0;
  local_f8 = DAT_14c9c0d98;
  local_138 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar8,1);
    }
  }
  uStack_130 = (undefined8 *)lVar5;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  local_e0 = 0;
  local_128 = lVar6;
  lVar5 = FUN_140028f18(param_2);
  if ((lVar5 != 0) && ((local_70 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_118;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_118._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_110._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_128;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_128._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_120._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_130._4_4_;
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar9 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a37d348;
    puVar9[2] = lVar5;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  FUN_145f90a7c();
  local_158 = &local_148;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1c0),&DAT_14c9d4690);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  FUN_145f42716();
  local_158 = (undefined8 *)uVar3;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9d4580);
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(float *)((longlong)puVar9 + 0x1c) = (float)iVar2;
  *(float *)(puVar9 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[3] = 0;
  *(undefined4 *)(puVar9 + 4) = 0;
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 4;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x28);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 4;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1fc200;
  puVar9[2] = 0x100000000;
  *(undefined4 *)(puVar9 + 3) = 1;
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4dd14 FUN_142c4dd14 body=38 status=ok
// SIG undefined FUN_142c4dd14(void)

undefined8 FUN_142c4dd14(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4dd3a FUN_142c4dd3a body=1339 status=ok
// SIG undefined FUN_142c4dd3a(void)

void FUN_142c4dd3a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
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
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  iVar3 = *(int *)(param_1 + 0x1dc);
  iVar4 = *(int *)(param_1 + 0x1d8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
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
  local_128 = DAT_14c9d27e0;
  lVar7 = FUN_140028f18(param_2,&local_158);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145f42120();
  local_178 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9d44f8);
  uVar5 = DAT_14ca89240;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
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
  puVar6 = puVar11 + 6;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x38);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 6;
  }
  *param_2 = (ulonglong)puVar6;
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



// FUNCTION 142c4e32a FUN_142c4e32a body=980 status=ok
// SIG undefined FUN_142c4e32a(void)

ulonglong FUN_142c4e32a(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_a4;
  longlong *local_a0;
  longlong local_98;
  undefined1 local_8d;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined2 local_54;
  undefined8 local_52;
  ulonglong local_48;
  
  iVar7 = DAT_14c7602e4;
  iVar6 = DAT_14c7602e0;
  iVar5 = DAT_14c7602dc;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  pwVar11 = L"Hair.LUT(MeanEnergy)";
  if (param_3 == 0) {
    pwVar11 = L"Hair.LUT(DualScattering)";
  }
  local_80 = &DAT_00020008;
  local_54 = (undefined2)DAT_14c7602e4;
  local_52 = 0xff000a0201010001;
  uStack_78 = 1;
  local_60 = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  local_5c = DAT_14ca84e40;
  if (DAT_14c7602dc < DAT_14ca84e40) {
    local_5c = DAT_14c7602dc;
  }
  if (local_5c < 2) {
    local_5c = 1;
  }
  local_58 = DAT_14ca84e40;
  if (DAT_14c7602e0 < DAT_14ca84e40) {
    local_58 = DAT_14c7602e0;
  }
  if (local_58 < 2) {
    local_58 = 1;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar10 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar10 + 0x120;
  local_a4 = param_3;
  local_98 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
    FUN_140023dd8(plVar1,0x128);
    uVar10 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar8 = uVar10 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar8;
  FUN_1456bbb8c(uVar10,pwVar11,&local_80,0);
  iVar3 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar3 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar13 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(plVar1,0x50);
    puVar13 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar13 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  *puVar13 = &PTR_FUN_14a21e090;
  puVar13[6] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  local_a0 = plVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  plVar1 = local_a0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar13;
  uVar2 = *(undefined1 *)(uVar10 + 0x94);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_a0,0x50);
    puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar12[1] = *(undefined8 *)(uVar10 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar12 + 6) = uVar2;
  *(undefined1 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x35) = 0;
  puVar12[8] = uVar10;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar13[6] = puVar12;
  *(int *)(puVar13 + 3) = iVar5;
  *(int *)((longlong)puVar13 + 0x14) = iVar6;
  *(int *)(puVar13 + 2) = iVar7;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = DAT_14c7602e8;
  *(int *)(puVar13 + 4) = iVar5;
  *(int *)((longlong)puVar13 + 0x24) = iVar6;
  *(int *)(puVar13 + 5) = iVar7;
  uVar4 = *(undefined8 *)(local_98 + 0x13818);
  FUN_145dcead4();
  FUN_1448e935e(uVar4,&local_80,&DAT_14c9d2558,local_a4);
  FUN_145dcead4();
  local_84 = iVar7 + 0xe;
  if (-1 < iVar7 + 7) {
    local_84 = iVar7 + 7;
  }
  local_84 = local_84 >> 3;
  local_88 = iVar6 + 0xe;
  if (-1 < iVar6 + 7) {
    local_88 = iVar6 + 7;
  }
  local_88 = local_88 >> 3;
  local_8c = iVar5 + 0xe;
  if (-1 < iVar5 + 7) {
    local_8c = iVar5 + 7;
  }
  local_8c = local_8c >> 3;
  local_b8 = &local_8c;
  FUN_1461cb194(param_1,&local_8d,&local_80,puVar13 + 2);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4e700 FUN_142c4e700 body=481 status=ok
// SIG undefined FUN_142c4e700(void)

void FUN_142c4e700(longlong param_1,ulonglong *param_2)

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
  FUN_145fed06d(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4e8e2 FUN_142c4e8e2 body=38 status=ok
// SIG undefined FUN_142c4e8e2(void)

undefined8 FUN_142c4e8e2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c4e908 FUN_142c4e908 body=636 status=ok
// SIG undefined FUN_142c4e908(void)

void FUN_142c4e908(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *_Dst;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
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
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a1fb978;
  puVar5[3] = 0;
  *(int *)(puVar5 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 8;
  }
  else {
    puVar4 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar4 = local_b8;
    }
    FUN_1446fe144(puVar5 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar5[3];
    if ((undefined8 *)puVar5[3] == (undefined8 *)0x0) {
      puVar3 = puVar5 + 2;
    }
    memcpy(puVar3,puVar4,(longlong)local_b0);
  }
  puVar5[0xd] = 0;
  *(int *)(puVar5 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x74) = 8;
  }
  else {
    puVar4 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar4 = local_a8;
    }
    FUN_1446fe1b8(puVar5 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar5[0xd];
    if ((undefined8 *)puVar5[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar5 + 5;
    }
    memcpy(puVar3,puVar4,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar5 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar5 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar5 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar5 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x1b8) + 0x10);
  cVar1 = *(char *)((longlong)param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d0 = 1;
  local_d8 = 0x4000;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar2,0);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,&DAT_14a21e128,0x4000);
  uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x1b8) + 0x10);
  if (*(char *)((longlong)param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4eb92 FUN_142c4eb92 body=481 status=ok
// SIG undefined FUN_142c4eb92(void)

void FUN_142c4eb92(longlong param_1,ulonglong *param_2)

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
  FUN_1471784b6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4ed74 FUN_142c4ed74 body=232 status=ok
// SIG undefined FUN_142c4ed74(void)

void FUN_142c4ed74(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c4ee5c FUN_142c4ee5c body=81 status=ok
// SIG undefined FUN_142c4ee5c(void)

void FUN_142c4ee5c(undefined8 param_1,longlong *param_2)

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
  FUN_147178559(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c4eec0 FUN_142c4eec0 body=3153 status=ok
// SIG undefined FUN_142c4eec0(void)

void FUN_142c4eec0(longlong *param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  code *pcVar11;
  undefined4 uVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  float fVar21;
  undefined1 auStack_1c8 [43];
  char local_19d;
  uint local_19c;
  longlong *local_198;
  int local_18c;
  int *local_188;
  longlong local_180;
  longlong local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined4 local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float local_120;
  longlong local_11c;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  piVar20 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_18c = *piVar20;
  local_198 = param_1;
  if (local_18c == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_18c = *piVar20;
  }
  if ((local_18c == 0x60000000) || (local_18c == 0)) {
    *piVar20 = 0x40000010;
  }
  lVar17 = *local_198;
  local_19d = DAT_14c760e18;
  local_188 = piVar20;
  bVar13 = FUN_143226589(*(undefined4 *)(lVar17 + 0x38c));
  lVar15 = *(longlong *)(lVar17 + 0x228);
  local_180 = lVar17;
  if (0 < *(int *)(lVar15 + 0x3558)) {
    local_19c = (uint)bVar13;
    lVar17 = 0x30;
    lVar18 = 0;
    uVar16 = 0;
    do {
      lVar14 = lVar15 + 0x3560;
      if (*(longlong *)(lVar15 + 0x3570) != 0) {
        lVar14 = *(longlong *)(lVar15 + 0x3570);
      }
      if ((*(uint *)(lVar14 + (uVar16 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar16 & 0x1f) & 1) == 0) {
        lVar15 = local_198[1];
        puVar1 = (undefined8 *)(lVar15 + lVar18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar15 + 0x10 + lVar18) = 0;
        uVar12 = DAT_14c846338;
        lVar15 = local_198[1];
        *(undefined8 *)(lVar15 + 0x20 + lVar18) = DAT_14c846330;
        *(undefined4 *)(lVar15 + 0x28 + lVar18) = uVar12;
        *(undefined4 *)(lVar15 + 0x2c + lVar18) = 0x3f800000;
        *(undefined4 *)(local_198[1] + 0x18 + lVar18) = 0;
      }
      else {
        lVar14 = local_198[1];
        lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x3550) + lVar17);
        plVar10 = *(longlong **)(lVar15 + 0x28);
        pcVar11 = *(code **)(*plVar10 + 0x78);
        if (pcVar11 == (code *)&LAB_144b2323e) {
          local_160 = (double)plVar10[0x28];
          local_170 = (double)plVar10[0x26];
          dStack_168 = (double)plVar10[0x27];
          local_158 = *(undefined4 *)((longlong)plVar10 + 0x29c);
          local_154 = plVar10[8];
          uStack_14c = plVar10[9];
          local_144 = (undefined4)plVar10[0x56];
          dVar2 = (double)plVar10[0x12];
          dVar3 = (double)plVar10[0xe];
          dVar4 = (double)plVar10[10];
          dVar5 = (double)plVar10[0x14];
          dVar6 = (double)plVar10[0x10];
          dVar7 = (double)plVar10[0xc];
          local_11c = plVar10[0x5a];
          local_134 = *(float *)((longlong)plVar10 + 0x174);
          if (1.0 <= local_134) {
            local_134 = 1.0;
          }
          if (local_134 <= 0.0) {
            local_134 = 0.0;
          }
          local_130 = *(float *)(plVar10 + 0x2f);
          if (1.0 <= local_130) {
            local_130 = 1.0;
          }
          if (local_130 <= 0.0) {
            local_130 = 0.0;
          }
          local_120 = *(float *)((longlong)plVar10 + 0x2b4);
          local_114 = (undefined4)plVar10[0x57];
          local_110 = *(float *)((longlong)plVar10 + 700);
          bVar13 = *(byte *)((longlong)plVar10 + 0x1d6);
          bVar8 = *(byte *)((longlong)plVar10 + 0x1d3);
          local_e4 = (undefined4)plVar10[0x55];
LAB_142c4f412:
          local_e8 = bVar8 >> 2 & 1;
          local_ec = (uint)bVar13;
          local_124 = (float)dVar5;
          fStack_128 = (float)dVar6;
          local_12c = (float)dVar7;
          local_138 = -(float)dVar2;
          fStack_13c = -(float)dVar3;
          local_140 = -(float)dVar4;
          local_f4 = 0xbf80000042000000;
          local_104 = DAT_14c84635c;
          uStack_108 = 0xc0000000;
          fStack_10c = 0.0;
          local_fc = local_104;
          if ((int)plVar10[0x45] != -1) {
            (**(code **)(*(longlong *)plVar10[2] + 0x300))
                      ((longlong *)plVar10[2],plVar10,&local_170);
          }
        }
        else {
          if (pcVar11 == (code *)&LAB_144b2164c) {
            local_160 = (double)plVar10[0x28];
            local_170 = (double)plVar10[0x26];
            dStack_168 = (double)plVar10[0x27];
            local_158 = *(undefined4 *)((longlong)plVar10 + 0x29c);
            local_154 = plVar10[8];
            uStack_14c = plVar10[9];
            local_144 = (undefined4)plVar10[0x56];
            dVar2 = (double)plVar10[0x12];
            dVar3 = (double)plVar10[0xe];
            dVar4 = (double)plVar10[10];
            dVar5 = (double)plVar10[0x14];
            dVar6 = (double)plVar10[0x10];
            dVar7 = (double)plVar10[0xc];
            local_11c = 0x3f800000c0000000;
            local_134 = *(float *)((longlong)plVar10 + 0x174);
            if (1.0 <= local_134) {
              local_134 = 1.0;
            }
            if (local_134 <= 0.0) {
              local_134 = 0.0;
            }
            local_130 = *(float *)(plVar10 + 0x2f);
            if (1.0 <= local_130) {
              local_130 = 1.0;
            }
            if (local_130 <= 0.0) {
              local_130 = 0.0;
            }
            local_120 = *(float *)((longlong)plVar10 + 0x2b4);
            local_114 = (undefined4)plVar10[0x57];
            local_110 = *(float *)((longlong)plVar10 + 700);
            local_e4 = (undefined4)plVar10[0x55];
            bVar13 = *(byte *)((longlong)plVar10 + 0x1d6);
            bVar8 = *(byte *)((longlong)plVar10 + 0x1d3);
            goto LAB_142c4f412;
          }
          if (pcVar11 == FUN_144b21e20) {
            local_120 = *(float *)(plVar10 + 0x56) * 0.5;
            fVar21 = 1.0 / (local_120 * *(float *)((longlong)plVar10 + 0x2b4));
            local_160 = (double)plVar10[0x28];
            local_170 = (double)plVar10[0x26];
            dStack_168 = (double)plVar10[0x27];
            local_158 = *(undefined4 *)((longlong)plVar10 + 0x29c);
            local_154 = CONCAT44(*(float *)((longlong)plVar10 + 0x44) * fVar21,
                                 *(float *)(plVar10 + 8) * fVar21);
            uStack_14c = CONCAT44(fVar21 * *(float *)((longlong)plVar10 + 0x4c),
                                  *(float *)(plVar10 + 9) * fVar21);
            local_144 = 0;
            local_138 = -(float)(double)plVar10[0x12];
            fStack_13c = -(float)(double)plVar10[0xe];
            local_140 = -(float)(double)plVar10[10];
            local_124 = (float)(double)plVar10[0x14];
            fStack_128 = (float)(double)plVar10[0x10];
            local_12c = (float)(double)plVar10[0xc];
            local_11c = 0x3f800000c0000000;
            local_134 = *(float *)((longlong)plVar10 + 0x174);
            if (1.0 <= local_134) {
              local_134 = 1.0;
            }
            if (local_134 <= 0.0) {
              local_134 = 0.0;
            }
            local_130 = *(float *)(plVar10 + 0x2f);
            if (1.0 <= local_130) {
              local_130 = 1.0;
            }
            if (local_130 <= 0.0) {
              local_130 = 0.0;
            }
            local_114 = 0;
            local_110 = *(float *)((longlong)plVar10 + 0x2b4) * 0.5;
            fStack_10c = cosf(*(float *)(plVar10 + 0x57) * 0.017453292);
            uStack_108 = *(undefined4 *)((longlong)plVar10 + 700);
            local_104 = DAT_14c84635c;
            local_fc = DAT_14c84635c;
            local_f4 = 0xbf80000042000000;
            local_e4 = (undefined4)plVar10[0x55];
            local_ec = (uint)*(byte *)((longlong)plVar10 + 0x1d6);
            local_e8 = *(byte *)((longlong)plVar10 + 0x1d3) >> 2 & 1;
            if ((int)plVar10[0x45] != -1) {
              (**(code **)(*(longlong *)plVar10[2] + 0x300))
                        ((longlong *)plVar10[2],plVar10,&local_170);
            }
            if ((int)plVar10[0x5a] != -1) {
              (**(code **)(*(longlong *)plVar10[2] + 0x308))
                        ((longlong *)plVar10[2],plVar10,&local_170);
            }
            if (local_19c != 0) {
              local_154 = plVar10[8];
              uStack_14c = plVar10[9];
              local_144 = 0x41000000;
              local_11c = 0x40452cbc3c8ed3ce;
              local_120 = (*(float *)(plVar10 + 0x56) + *(float *)((longlong)plVar10 + 0x2b4)) * 0.5
                          * 0.5;
              local_110 = 0.0;
              fStack_10c = 0.0;
              uStack_108 = 0xc0000000;
            }
          }
          else {
            (*pcVar11)(plVar10,&local_170,local_19c);
          }
        }
        pcVar11 = *(code **)(*plVar10 + 0x30);
        local_178 = lVar17;
        if (pcVar11 == (code *)&LAB_144b21d24) {
          bVar13 = *(byte *)(plVar10 + 0x58) & 1;
joined_r0x000142c4f99e:
          if (bVar13 != 0) goto LAB_142c4f6c1;
        }
        else {
          if (pcVar11 != (code *)&LAB_144b218c0) {
            bVar13 = (*pcVar11)(plVar10);
            goto joined_r0x000142c4f99e;
          }
LAB_142c4f6c1:
          local_144 = 0;
        }
        *(float *)(lVar14 + lVar18) = (float)local_170;
        *(float *)(lVar14 + 4 + lVar18) = (float)dStack_168;
        *(float *)(lVar14 + 8 + lVar18) = (float)local_160;
        *(float *)(lVar14 + 0xc + lVar18) = (float)(local_170 - (double)(float)local_170);
        *(float *)(lVar14 + 0x10 + lVar18) = (float)(dStack_168 - (double)(float)dStack_168);
        *(float *)(lVar14 + 0x14 + lVar18) = (float)(local_160 - (double)(float)local_160);
        *(undefined4 *)(lVar14 + 0x18 + lVar18) = local_158;
        plVar10 = (longlong *)(lVar14 + 0x20 + lVar18);
        *plVar10 = local_154;
        plVar10[1] = uStack_14c;
        *(undefined4 *)(lVar14 + 0x1c + lVar18) = local_144;
        *(ulonglong *)(lVar14 + 0x30 + lVar18) = CONCAT44(fStack_13c,local_140);
        *(float *)(lVar14 + 0x38 + lVar18) = local_138;
        *(float *)(lVar14 + 0x3c + lVar18) = local_134;
        *(float *)(lVar14 + 0x40 + lVar18) = local_130;
        *(ulonglong *)(lVar14 + 0x44 + lVar18) = CONCAT44(fStack_128,local_12c);
        *(float *)(lVar14 + 0x4c + lVar18) = local_124;
        *(float *)(lVar14 + 0x50 + lVar18) = local_120;
        *(longlong *)(lVar14 + 0x54 + lVar18) = local_11c;
        *(undefined4 *)(lVar14 + 0x5c + lVar18) = local_114;
        *(float *)(lVar14 + 0x60 + lVar18) = local_110;
        *(float *)(lVar14 + 100 + lVar18) = fStack_10c;
        *(undefined4 *)(lVar14 + 0x68 + lVar18) = uStack_108;
        *(undefined8 *)(lVar14 + 0x6c + lVar18) = local_104;
        *(undefined8 *)(lVar14 + 0x74 + lVar18) = local_fc;
        *(undefined4 *)(lVar14 + 0x7c + lVar18) = (undefined4)local_f4;
        *(undefined4 *)(lVar14 + 0x80 + lVar18) = local_e4;
        *(undefined4 *)(lVar14 + 0x84 + lVar18) = local_f4._4_4_;
        lVar17 = *(longlong *)(lVar15 + 0x28);
        piVar20 = (int *)(lVar15 + 0xe0);
        if ((*(byte *)(lVar17 + 0x1d0) & 8) != 0) {
          piVar20 = (int *)(lVar17 + 400);
        }
        iVar9 = *piVar20;
        iVar19 = -1;
        if (local_19d != '\0') {
          iVar19 = *(int *)(lVar17 + 0x18c);
        }
        *(uint *)(lVar14 + 0x88 + lVar18) =
             (uint)(iVar9 == 2) << 6 | (uint)(iVar9 == 1) << 5 |
             (uint)(iVar19 == 0) + (uint)(iVar19 == 1) * 2 + (uint)(iVar19 == 2) * 4 +
             (uint)(iVar19 == 3) * 8 | (uint)(iVar9 == 0) << 4 |
             (*(byte *)(lVar17 + 0x1d0) & 0x10) << 0xe | (uint)(iVar9 == 3) << 7 |
             (uint)*(byte *)(lVar17 + 0x1e9) << 8 |
             (*(byte *)(lVar17 + 0x1d3) & 4) << 0x1a |
             (uint)*(byte *)(lVar17 + 0x1d6) << 0x14 | (uint)*(byte *)(lVar17 + 0x1e8) << 0x10;
        lVar17 = local_178;
      }
      uVar16 = uVar16 + 1;
      lVar15 = *(longlong *)(local_180 + 0x228);
      lVar17 = lVar17 + 0x40;
      lVar18 = lVar18 + 0xa0;
    } while ((longlong)uVar16 < (longlong)*(int *)(lVar15 + 0x3558));
  }
  if ((local_18c == 0x60000000) || (local_18c == 0)) {
    *local_188 = local_18c;
  }
  if ((local_e0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c4fb12 FUN_142c4fb12 body=547 status=ok
// SIG undefined FUN_142c4fb12(void)

longlong * FUN_142c4fb12(longlong *param_1,int param_2)

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



// FUNCTION 142c4fd42 FUN_142c4fd42 body=110 status=ok
// SIG undefined FUN_142c4fd42(void)

undefined8 * FUN_142c4fd42(undefined8 *param_1,int param_2)

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



// FUNCTION 142c4fdd8 FUN_142c4fdd8 body=77 status=ok
// SIG undefined FUN_142c4fdd8(void)

void FUN_142c4fdd8(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((0x3fff < (ulonglong)((longlong)(iVar2 - iVar1) * 0x28)) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1401d0510();
      return;
    }
  }
  return;
}



// FUNCTION 142c4fe26 FUN_142c4fe26 body=450 status=ok
// SIG undefined FUN_142c4fe26(void)

void FUN_142c4fe26(undefined8 *param_1,uint param_2)

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
LAB_142c4ff41:
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
LAB_142c4ff7e:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142c4fe7c;
LAB_142c4fe71:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142c4fe7c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000142c4fea8;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142c4fefe:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142c4ff7e;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142c4ff41;
code_r0x000142c4fea8:
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
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142c4fefe;
    }
  }
  goto LAB_142c4fe71;
}



// FUNCTION 142c4ffe8 FUN_142c4ffe8 body=1141 status=ok
// SIG undefined FUN_142c4ffe8(void)

ulonglong FUN_142c4ffe8(longlong *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  DWORD DVar8;
  DWORD dwTlsIndex;
  DWORD DVar9;
  LPVOID lpTlsValue;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_118 [46];
  byte local_ea;
  byte local_e9;
  longlong local_e8;
  longlong *local_e0;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dwTlsIndex = DAT_14c7585d0;
  local_ea = param_2;
  local_e0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar9 = 0xffffffff;
    LOCK();
    bVar18 = DAT_14c7585d0 != 0xffffffff;
    DVar8 = dwTlsIndex;
    if (bVar18) {
      DVar9 = DAT_14c7585d0;
      DVar8 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar8;
    UNLOCK();
    if (bVar18) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar9;
    }
  }
  plVar5 = local_e0;
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
  lVar17 = *plVar5;
  if (local_ea == 0) {
    lVar17 = *plVar5;
    uVar11 = (ulonglong)*(uint *)(lVar17 + 0x34);
    if (*(int *)(lVar17 + 0x20) + 2 <= (int)*(uint *)(lVar17 + 0x34)) {
      FUN_147178bbe(plVar5);
      lVar17 = *plVar5;
    }
    uVar16 = 0;
    if ('\x02' < *(char *)(lVar17 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar21._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar21._8_8_ = 0;
      auVar21 = roundpd(auVar21,auVar21,1);
      local_d0 = (longlong)auVar21._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar16 = (ulonglong)DAT_14c7585cc;
      }
      auVar19._0_8_ = (double)(int)uVar16 * 10000.0 + 0.5;
      auVar19._8_8_ = 0;
      auVar21 = roundpd(auVar19,auVar19,1);
      local_e8 = (longlong)auVar21._0_8_;
      lVar17 = *plVar5;
      local_c0 = CONCAT71((int7)(uVar16 >> 8),1);
      goto LAB_142c5016e;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar17 + 0x34);
  }
  local_c0 = 0;
  local_e8 = 0;
LAB_142c5016e:
  iVar3 = *(int *)(lVar17 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar17 + 0x30);
  plVar5 = *(longlong **)(lVar17 + 0x40);
  local_d4 = (int)uVar11 + -1;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_e9 = local_ea ^ 1;
  local_c0 = local_c0 ^ 1;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar17 + 0x20);
    iVar15 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar3) {
      bVar18 = local_d4 <= iVar15;
      if (local_d4 <= iVar15) {
        iVar15 = local_d4;
      }
      if ((local_e9 & bVar18) != 0) goto LAB_142c5036a;
    }
    iVar15 = iVar15 * (int)local_b8;
    iVar13 = iVar15 + (int)local_b8;
    iVar12 = iVar3;
    if (iVar13 < iVar3) {
      iVar12 = iVar13;
    }
    if (iVar15 < iVar12) {
      lVar17 = (longlong)iVar15;
      do {
        iVar10 = *piVar2;
        if (iVar10 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          iVar10 = *piVar2;
        }
        if ((iVar10 == 0x60000000) || (iVar10 == 0)) {
          *piVar2 = 0x40000010;
        }
        lVar6 = *(longlong *)plVar5[1];
        iVar4 = *(int *)(((longlong *)plVar5[1])[2] + lVar17 * 4);
        lVar14 = -1;
        if (((longlong)iVar4 != -1) && (iVar4 < *(int *)(lVar6 + 0x3538))) {
          lVar14 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x3530) + (longlong)iVar4 * 4);
        }
        FUN_1447869b2(*(undefined8 *)(*(longlong *)(lVar6 + 0x3358) + lVar14 * 8),
                      *(longlong *)(*(longlong *)(*plVar5 + 0x10) + 8) +
                      (ulonglong)
                      (uint)(*(int *)(*(longlong *)(*plVar5 + 0x10) + 0x18) * (int)lVar17));
        if ((iVar10 == 0x60000000) || (iVar10 == 0)) {
          *piVar2 = iVar10;
        }
        lVar17 = lVar17 + 1;
      } while (iVar12 != (int)lVar17);
    }
    plVar7 = local_e0;
    if (iVar15 < iVar3) {
      LOCK();
      piVar1 = (int *)(*local_e0 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
        if (local_ea == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_e0 + 0x48) + 0x10))();
        }
        goto LAB_142c5036c;
      }
    }
    if (iVar13 < iVar3 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar20._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar20._8_8_ = 0;
      auVar21 = roundpd(auVar20,auVar20,1);
      if (local_e8 < (longlong)auVar21._0_8_ - local_d0) {
        *(undefined1 *)((longlong)plVar7 + 0xc) = 1;
LAB_142c5036a:
        uVar11 = 0;
LAB_142c5036c:
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
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar3 <= iVar13) goto LAB_142c5036a;
    lVar17 = *plVar7;
  } while( true );
}



// FUNCTION 142c5045e FUN_142c5045e body=189 status=ok
// SIG undefined FUN_142c5045e(void)

ulonglong FUN_142c5045e(ulonglong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  FUN_147178d54();
  if (param_1 != 0 && param_2 != 0) {
    piVar3 = (int *)(param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
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



// FUNCTION 142c5051c FUN_142c5051c body=619 status=ok
// SIG undefined FUN_142c5051c(void)

void FUN_142c5051c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int *_Memory;
  uint *puVar8;
  ulonglong _Size;
  int *piVar9;
  void *_Dst;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_2,0x48);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
LAB_142c5069f:
    if (_Src == (void *)0x0) goto LAB_142c5070b;
  }
  else {
    _Size = (ulonglong)param_2 * 0x48;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142c505e7;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
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
      FUN_140217a48(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142c505e7:
      _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)((longlong)_Dst + _Size);
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
        _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)((longlong)_Dst + _Size);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142c50661;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142c50661:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
    if (uVar6 == 0 || _Src == (void *)0x0) goto LAB_142c5069f;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  piVar9 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    _Memory = piVar9;
    if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar3 + 0x310);
      *(int **)(lVar3 + 0x310) = piVar9;
      if (_Memory == (int *)0x0) goto LAB_142c5070b;
    }
    _aligned_free(_Memory);
  }
LAB_142c5070b:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142c50788 FUN_142c50788 body=171 status=ok
// SIG undefined FUN_142c50788(void)

void FUN_142c50788(ulonglong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)(*param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c507fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c50834 FUN_142c50834 body=367 status=ok
// SIG undefined FUN_142c50834(void)

undefined8 * FUN_142c50834(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_14a222470;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142c508f0;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_142c4fdb0);
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
LAB_142c508f0:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 142c509a4 FUN_142c509a4 body=179 status=ok
// SIG undefined FUN_142c509a4(void)

void FUN_142c509a4(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_147178c3e(uVar2);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c50a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c50a58 FUN_142c50a58 body=922 status=ok
// SIG undefined FUN_142c50a58(void)

ulonglong FUN_142c50a58(longlong *param_1,byte param_2)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [46];
  byte local_da;
  byte local_d9;
  longlong local_d8;
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  local_da = param_2;
  local_d0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar15) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  plVar5 = local_d0;
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
  local_c0 = -0x8000000000000000;
  lVar8 = *plVar5;
  if (local_da == 0) {
    lVar8 = *plVar5;
    iVar9 = *(int *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= iVar9) {
      FUN_1471791ca(plVar5);
      lVar8 = *plVar5;
    }
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c0 = (longlong)auVar18._0_8_;
      iVar13 = 0;
      if (0 < DAT_14c7585cc) {
        iVar13 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar13 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_d8 = (longlong)auVar18._0_8_;
      lVar8 = *plVar5;
      bVar15 = true;
      goto LAB_142c50bde;
    }
  }
  else {
    iVar9 = *(int *)(lVar8 + 0x34);
  }
  bVar15 = false;
  local_d8 = 0;
LAB_142c50bde:
  iVar13 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  local_c4 = iVar9 + -1;
  local_d9 = local_da ^ 1;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar9 < iVar13) {
      bVar3 = local_c4 <= iVar11;
      if (local_c4 <= iVar11) {
        iVar11 = local_c4;
      }
      if ((local_d9 & bVar3) != 0) goto LAB_142c50d08;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar4 = iVar13;
    if (iVar14 < iVar13) {
      iVar4 = iVar14;
    }
    iVar10 = iVar11;
    if (iVar11 < iVar4) {
      do {
        FUN_144aab1b0(uVar2,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar4 != iVar10);
    }
    plVar5 = local_d0;
    if (iVar11 < iVar13) {
      LOCK();
      piVar1 = (int *)(*local_d0 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        if (local_da == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d0 + 0x48) + 0x10))();
        }
        goto LAB_142c50d0a;
      }
    }
    if (iVar14 < iVar13 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_d8 < (longlong)auVar18._0_8_ - local_c0) {
        *(undefined1 *)((longlong)plVar5 + 0xc) = 1;
LAB_142c50d08:
        uVar12 = 0;
LAB_142c50d0a:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12 & 0xffffffff;
      }
    }
    else if (iVar13 <= iVar14) goto LAB_142c50d08;
    lVar8 = *plVar5;
  } while( true );
}



// FUNCTION 142c50df4 FUN_142c50df4 body=189 status=ok
// SIG undefined FUN_142c50df4(void)

ulonglong FUN_142c50df4(ulonglong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  FUN_147179360();
  if (param_1 != 0 && param_2 != 0) {
    piVar3 = (int *)(param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
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



// FUNCTION 142c50eb2 FUN_142c50eb2 body=619 status=ok
// SIG undefined FUN_142c50eb2(void)

void FUN_142c50eb2(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int *_Memory;
  uint *puVar8;
  ulonglong _Size;
  int *piVar9;
  void *_Dst;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_2,0x48);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
LAB_142c51035:
    if (_Src == (void *)0x0) goto LAB_142c510a1;
  }
  else {
    _Size = (ulonglong)param_2 * 0x48;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142c50f7d;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
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
      FUN_140217a48(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142c50f7d:
      _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)((longlong)_Dst + _Size);
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
        _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)((longlong)_Dst + _Size);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142c50ff7;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142c50ff7:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
    if (uVar6 == 0 || _Src == (void *)0x0) goto LAB_142c51035;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  piVar9 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    _Memory = piVar9;
    if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar3 + 0x310);
      *(int **)(lVar3 + 0x310) = piVar9;
      if (_Memory == (int *)0x0) goto LAB_142c510a1;
    }
    _aligned_free(_Memory);
  }
LAB_142c510a1:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142c5111e FUN_142c5111e body=171 status=ok
// SIG undefined FUN_142c5111e(void)

void FUN_142c5111e(ulonglong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)(*param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c51191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c511ca FUN_142c511ca body=367 status=ok
// SIG undefined FUN_142c511ca(void)

undefined8 * FUN_142c511ca(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_14a2224f0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142c51286;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_142c4fdb0);
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
LAB_142c51286:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 142c5133a FUN_142c5133a body=179 status=ok
// SIG undefined FUN_142c5133a(void)

void FUN_142c5133a(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_14717924a(uVar2);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c513b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c513ee FUN_142c513ee body=99 status=ok
// SIG undefined FUN_142c513ee(void)

void FUN_142c513ee(longlong *param_1)

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



// FUNCTION 142c51452 FUN_142c51452 body=99 status=ok
// SIG undefined FUN_142c51452(void)

void FUN_142c51452(longlong *param_1)

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



// FUNCTION 142c514b6 FUN_142c514b6 body=99 status=ok
// SIG undefined FUN_142c514b6(void)

void FUN_142c514b6(longlong *param_1)

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



// FUNCTION 142c5151a FUN_142c5151a body=922 status=ok
// SIG undefined FUN_142c5151a(void)

ulonglong FUN_142c5151a(longlong *param_1,byte param_2)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [46];
  byte local_da;
  byte local_d9;
  longlong local_d8;
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  local_da = param_2;
  local_d0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar15) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  plVar5 = local_d0;
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
  local_c0 = -0x8000000000000000;
  lVar8 = *plVar5;
  if (local_da == 0) {
    lVar8 = *plVar5;
    iVar9 = *(int *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= iVar9) {
      FUN_147179850(plVar5);
      lVar8 = *plVar5;
    }
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c0 = (longlong)auVar18._0_8_;
      iVar13 = 0;
      if (0 < DAT_14c7585cc) {
        iVar13 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar13 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_d8 = (longlong)auVar18._0_8_;
      lVar8 = *plVar5;
      bVar15 = true;
      goto LAB_142c516a0;
    }
  }
  else {
    iVar9 = *(int *)(lVar8 + 0x34);
  }
  bVar15 = false;
  local_d8 = 0;
LAB_142c516a0:
  iVar13 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  local_c4 = iVar9 + -1;
  local_d9 = local_da ^ 1;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar9 < iVar13) {
      bVar3 = local_c4 <= iVar11;
      if (local_c4 <= iVar11) {
        iVar11 = local_c4;
      }
      if ((local_d9 & bVar3) != 0) goto LAB_142c517ca;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar4 = iVar13;
    if (iVar14 < iVar13) {
      iVar4 = iVar14;
    }
    iVar10 = iVar11;
    if (iVar11 < iVar4) {
      do {
        FUN_144b0fe2e(uVar2,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar4 != iVar10);
    }
    plVar5 = local_d0;
    if (iVar11 < iVar13) {
      LOCK();
      piVar1 = (int *)(*local_d0 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        if (local_da == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d0 + 0x48) + 0x10))();
        }
        goto LAB_142c517cc;
      }
    }
    if (iVar14 < iVar13 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_d8 < (longlong)auVar18._0_8_ - local_c0) {
        *(undefined1 *)((longlong)plVar5 + 0xc) = 1;
LAB_142c517ca:
        uVar12 = 0;
LAB_142c517cc:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12 & 0xffffffff;
      }
    }
    else if (iVar13 <= iVar14) goto LAB_142c517ca;
    lVar8 = *plVar5;
  } while( true );
}



// FUNCTION 142c518b6 FUN_142c518b6 body=189 status=ok
// SIG undefined FUN_142c518b6(void)

ulonglong FUN_142c518b6(ulonglong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  FUN_1471799e6();
  if (param_1 != 0 && param_2 != 0) {
    piVar3 = (int *)(param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
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



// FUNCTION 142c51974 FUN_142c51974 body=619 status=ok
// SIG undefined FUN_142c51974(void)

void FUN_142c51974(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int *_Memory;
  uint *puVar8;
  ulonglong _Size;
  int *piVar9;
  void *_Dst;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_2,0x48);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
LAB_142c51af7:
    if (_Src == (void *)0x0) goto LAB_142c51b63;
  }
  else {
    _Size = (ulonglong)param_2 * 0x48;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142c51a3f;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
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
      FUN_140217a48(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142c51a3f:
      _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)((longlong)_Dst + _Size);
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
        _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)((longlong)_Dst + _Size);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142c51ab9;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142c51ab9:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
    if (uVar6 == 0 || _Src == (void *)0x0) goto LAB_142c51af7;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  piVar9 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    _Memory = piVar9;
    if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar3 + 0x310);
      *(int **)(lVar3 + 0x310) = piVar9;
      if (_Memory == (int *)0x0) goto LAB_142c51b63;
    }
    _aligned_free(_Memory);
  }
LAB_142c51b63:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142c51be0 FUN_142c51be0 body=171 status=ok
// SIG undefined FUN_142c51be0(void)

void FUN_142c51be0(ulonglong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)(*param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c51c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c51c8c FUN_142c51c8c body=367 status=ok
// SIG undefined FUN_142c51c8c(void)

undefined8 * FUN_142c51c8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_14a2225a0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142c51d48;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_142c4fdb0);
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
LAB_142c51d48:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 142c51dfc FUN_142c51dfc body=179 status=ok
// SIG undefined FUN_142c51dfc(void)

void FUN_142c51dfc(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_1471798d0(uVar2);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c51e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c51eb0 FUN_142c51eb0 body=922 status=ok
// SIG undefined FUN_142c51eb0(void)

ulonglong FUN_142c51eb0(longlong *param_1,byte param_2)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [46];
  byte local_da;
  byte local_d9;
  longlong local_d8;
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  local_da = param_2;
  local_d0 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar15) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  plVar5 = local_d0;
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
  local_c0 = -0x8000000000000000;
  lVar8 = *plVar5;
  if (local_da == 0) {
    lVar8 = *plVar5;
    iVar9 = *(int *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= iVar9) {
      FUN_147179e5c(plVar5);
      lVar8 = *plVar5;
    }
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c0 = (longlong)auVar18._0_8_;
      iVar13 = 0;
      if (0 < DAT_14c7585cc) {
        iVar13 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar13 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_d8 = (longlong)auVar18._0_8_;
      lVar8 = *plVar5;
      bVar15 = true;
      goto LAB_142c52036;
    }
  }
  else {
    iVar9 = *(int *)(lVar8 + 0x34);
  }
  bVar15 = false;
  local_d8 = 0;
LAB_142c52036:
  iVar13 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  local_c4 = iVar9 + -1;
  local_d9 = local_da ^ 1;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar9 < iVar13) {
      bVar3 = local_c4 <= iVar11;
      if (local_c4 <= iVar11) {
        iVar11 = local_c4;
      }
      if ((local_d9 & bVar3) != 0) goto LAB_142c52160;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar4 = iVar13;
    if (iVar14 < iVar13) {
      iVar4 = iVar14;
    }
    iVar10 = iVar11;
    if (iVar11 < iVar4) {
      do {
        FUN_142c5224c(uVar2,iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar4 != iVar10);
    }
    plVar5 = local_d0;
    if (iVar11 < iVar13) {
      LOCK();
      piVar1 = (int *)(*local_d0 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        if (local_da == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d0 + 0x48) + 0x10))();
        }
        goto LAB_142c52162;
      }
    }
    if (iVar14 < iVar13 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_d8 < (longlong)auVar18._0_8_ - local_c0) {
        *(undefined1 *)((longlong)plVar5 + 0xc) = 1;
LAB_142c52160:
        uVar12 = 0;
LAB_142c52162:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12 & 0xffffffff;
      }
    }
    else if (iVar13 <= iVar14) goto LAB_142c52160;
    lVar8 = *plVar5;
  } while( true );
}



// FUNCTION 142c5224c FUN_142c5224c body=7755 status=ok
// SIG undefined FUN_142c5224c(void)

void FUN_142c5224c(longlong *param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  float *pfVar15;
  undefined4 uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  bool bVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  uint local_3f0;
  undefined4 local_3e8;
  longlong local_3e0;
  undefined8 *local_3d8;
  byte local_3d0;
  longlong local_3c0;
  ulonglong local_3b8;
  uint local_3b0;
  uint local_3ac;
  undefined1 local_3a8 [16];
  ulonglong local_398;
  longlong local_390;
  ulonglong local_388;
  ulonglong local_380;
  longlong local_378;
  longlong local_370;
  ulonglong local_368;
  ulonglong local_360;
  longlong local_358;
  ulonglong local_350;
  undefined8 local_348;
  float afStack_340 [4];
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  uint local_318;
  uint uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308 [16];
  undefined8 local_2f8;
  float fStack_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  longlong local_2d8;
  longlong lStack_2d0;
  ulonglong local_2c8;
  int local_2c0;
  undefined8 local_2bc;
  uint uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  longlong local_2a0;
  undefined4 local_298;
  longlong local_290;
  undefined4 local_288;
  longlong local_280;
  ulonglong uStack_278;
  longlong local_270;
  undefined4 local_268;
  longlong local_260;
  undefined4 local_258;
  longlong local_250;
  ulonglong uStack_248;
  longlong local_240;
  undefined4 local_238;
  uint local_230;
  undefined8 local_22c;
  float fStack_224;
  undefined8 uStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  byte local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  ushort local_1ac;
  ushort uStack_1aa;
  ushort uStack_1a8;
  undefined2 uStack_1a6;
  float fStack_1a4;
  undefined2 uStack_1a0;
  short sStack_19e;
  float local_198;
  float local_194;
  float local_190;
  undefined8 local_188;
  float local_180;
  float local_178 [3];
  ushort uStack_16c;
  ushort uStack_16a;
  ushort uStack_168;
  undefined2 uStack_166;
  float fStack_164;
  undefined2 uStack_160;
  short sStack_15e;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [4];
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  lVar28 = *(longlong *)(param_1[1] + 0x18);
  lVar22 = param_1[1] + 0x10;
  if (lVar28 != 0) {
    lVar22 = lVar28;
  }
  local_370 = (longlong)*(int *)(lVar22 + 4 + (longlong)param_2 * 8);
  local_3b0 = (&DAT_14ca814d8)[(ulonglong)DAT_14ca85550 * 0xf];
  local_3ac = ((local_3b0 & 0x40) == 0) + 3;
  if (0 < local_370) {
    local_380 = (ulonglong)local_3ac;
    local_378 = (longlong)*(int *)(lVar22 + (longlong)param_2 * 8) * 3;
    lVar28 = 0;
    do {
      lVar30 = param_1[1];
      lVar22 = lVar30 + 0x28;
      if (*(longlong *)(lVar30 + 0xc28) != 0) {
        lVar22 = *(longlong *)(lVar30 + 0xc28);
      }
      lVar22 = lVar22 + lVar28 * 0xc;
      iVar18 = *(int *)(lVar22 + local_378 * 4);
      lVar17 = (longlong)iVar18;
      lVar23 = (longlong)*(int *)(lVar22 + 4 + local_378 * 4);
      uVar14 = *(uint *)(lVar22 + 8 + local_378 * 4);
      local_350 = (ulonglong)uVar14;
      local_2c8 = local_2c8 & 0xffffffff00000000;
      local_2d8 = 0;
      lStack_2d0 = 0;
      local_2c0 = -1;
      local_2a0 = 0;
      local_298 = 0;
      local_290 = 0;
      local_288 = 0;
      local_280 = 0;
      uStack_278 = uStack_278 & 0xffffffff00000000;
      local_270 = 0;
      local_268 = 0;
      local_260 = 0;
      local_258 = 0;
      local_250 = 0;
      uStack_248 = uStack_248 & 0xffffffff00000000;
      local_240 = 0;
      local_238 = 0;
      local_230 = 0;
      uStack_2ac = 0;
      uStack_2a8 = 0;
      local_2bc = 0;
      uStack_2b4 = 0;
      uStack_2b0 = 0;
      local_1cc = 0xffffffffffffffff;
      local_1c4 = 0;
      local_1c0 = 0;
      plVar20 = (longlong *)param_1[2];
      lVar22 = *plVar20;
      if (iVar18 < *(int *)(lVar22 + 0x388)) {
        lVar19 = *(longlong *)(lVar22 + 0x380);
        if (*(longlong *)(lVar22 + 0x380) == 0) {
          lVar19 = lVar22;
        }
        lVar25 = lVar17 * 0x70;
        lVar22 = *(longlong *)(lVar19 + 0x58 + lVar25);
        local_1cc = CONCAT44(0xffffffff,(int)plVar20[1] + iVar18);
        local_22c = *(undefined8 *)(lVar22 + 0x20);
        fStack_224 = *(float *)(lVar22 + 0x28);
        uStack_220 = *(undefined8 *)(lVar22 + 0x30);
        fStack_218 = *(float *)(lVar22 + 0x38);
        fStack_214 = (float)*(undefined8 *)(lVar22 + 0x40);
        fStack_210 = (float)((ulonglong)*(undefined8 *)(lVar22 + 0x40) >> 0x20);
        fStack_20c = *(float *)(lVar22 + 0x48);
        fStack_208 = (float)*(undefined8 *)(lVar22 + 0x50);
        fStack_204 = (float)((ulonglong)*(undefined8 *)(lVar22 + 0x50) >> 0x20);
        local_200 = *(float *)(lVar22 + 0x58);
        local_1fc = (undefined4)*(undefined8 *)(lVar22 + 0xa0);
        uStack_1f8 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0xa0) >> 0x20);
        uStack_1f4 = *(undefined4 *)(lVar22 + 0xa8);
        uStack_1f0 = (undefined4)*(undefined8 *)(lVar22 + 0xb0);
        uStack_1ec = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0xb0) >> 0x20);
        uStack_1e8 = *(undefined4 *)(lVar22 + 0xb8);
        uStack_1e4 = (undefined4)*(undefined8 *)(lVar22 + 0xc0);
        uStack_1e0 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20);
        uStack_1dc = *(undefined4 *)(lVar22 + 200);
        uStack_1d8 = (undefined4)*(undefined8 *)(lVar22 + 0xd0);
        uStack_1d4 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0xd0) >> 0x20);
        local_1d0 = *(undefined4 *)(lVar22 + 0xd8);
        iVar18 = *(int *)(lVar19 + 0x68 + lVar25);
        local_2c0 = -1;
        if (iVar18 != -1) {
          local_2c0 = iVar18 + (int)plVar20[2];
        }
        plVar20 = (longlong *)(lVar19 + lVar25);
        uVar5 = *(ushort *)((longlong)plVar20 + 0x52);
        uVar27 = (uint)((uVar5 & 0x50) != 0);
        if ((char)uVar5 < '\0') {
          uVar27 = 2;
        }
        if ((uVar5 & 8) != 0) {
          if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)DAT_14ca85550 * 0xf) & 0x40) == 0) {
            uVar27 = uVar27 + 3;
          }
          else {
            uVar27 = uVar27 + 2;
          }
        }
        uVar27 = (ushort)((uVar5 >> 5 & 1) + (ushort)((uVar5 >> 9 & 1) != 0)) + uVar27;
        if ((uVar5 & 4) != 0) {
          uVar27 = uVar27 + (*(int *)((longlong)plVar20 + 0x54) + 3U >> 2);
        }
        local_2bc = (ulonglong)uVar27;
        uStack_2b4 = *(uint *)((longlong)plVar20 + 0x54);
        local_230 = (uint)*(ushort *)((longlong)plVar20 + 0x52);
        lStack_2d0 = *plVar20;
        local_2c8 = plVar20[1];
        uVar29 = local_2c8;
        uStack_2b0 = (undefined4)plVar20[2];
        uStack_2ac = (undefined4)((ulonglong)plVar20[2] >> 0x20);
        uStack_2a8 = (undefined4)plVar20[3];
        uStack_2a4 = (undefined4)((ulonglong)plVar20[3] >> 0x20);
        local_250 = plVar20[4];
        uStack_248 = plVar20[5];
        local_280 = plVar20[6];
        uStack_278 = plVar20[7];
        local_270 = 0;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0;
        local_290 = 0;
        local_288 = 0;
        local_1c4 = (int)plVar20[1];
        local_1c0 = 0;
        local_2c8._0_4_ = (int)plVar20[1];
        bVar31 = (int)local_2c8 == 0;
        local_2c8 = uVar29;
        if (bVar31) {
          local_1c4 = 1;
        }
      }
      local_1c0 = 0;
      local_258 = 0;
      local_260 = 0;
      local_268 = 0;
      local_270 = 0;
      local_288 = 0;
      local_290 = 0;
      if (0 < (int)uVar14) {
        local_388 = (ulonglong)*(uint *)(*(longlong *)(lVar30 + 0xc38) + 4 + lVar17 * 8);
        local_360 = (ulonglong)*(uint *)(*(longlong *)*param_1 + 4 + lVar17 * 0x28);
        local_368 = (ulonglong)*(uint *)(*(longlong *)(lVar30 + 0xc38) + lVar17 * 8);
        lVar30 = lVar23 << 4;
        lVar22 = lVar23 * 4;
        uVar29 = 0;
        local_358 = lVar23;
        do {
          local_3c0 = uVar29 + local_358;
          uVar32 = 0;
          if ((local_230 & 2) != 0) {
            uVar32 = *(undefined4 *)(local_270 + local_3c0 * 4);
          }
          if (local_2d8 == 0) {
            if ((int)local_2c8 == 0) {
              fVar33 = (local_22c._4_4_ * fStack_218 - uStack_220._4_4_ * fStack_224) * fStack_214 +
                       ((uStack_220._4_4_ * fStack_20c - fStack_210 * fStack_218) * (float)local_22c
                       - (fStack_20c * local_22c._4_4_ - fStack_210 * fStack_224) *
                         (float)uStack_220);
              uVar14 = ((uint)(fVar33 < 0.0) | local_230 & 0xffe) << 0x14;
              uVar27 = uVar14 | 0x40000000;
              if (local_1c0 != 0) {
                uVar14 = uVar27;
              }
              if (fVar33 != 0.0) {
                uVar27 = uVar14;
              }
              if (NAN(fVar33)) {
                uVar27 = uVar14;
              }
              local_318 = uVar27 | (uint)local_1cc;
              uStack_314 = uStack_2b4 << 0x18 | (uint)local_3c0;
              uStack_310 = local_1cc._4_4_;
              uStack_30c = uVar32;
              if ((local_3b0 & 0x40) == 0) {
                auVar44._4_4_ = fStack_204;
                auVar44._0_4_ = fStack_208;
                auVar44._8_4_ = local_200;
                auVar44._12_4_ = local_1fc;
                auVar39 = insertps(auVar44,fStack_204,0x10);
                local_308._4_4_ = (float)uStack_220;
                local_308._0_4_ = (float)local_22c;
                local_308._8_4_ = fStack_214;
                local_308._12_4_ = auVar39._0_4_;
                local_2f8 = CONCAT44(uStack_220._4_4_,local_22c._4_4_);
                fStack_2f0 = fStack_210;
                uStack_2ec = auVar39._4_4_;
                local_2e8 = fStack_224;
                fStack_2e4 = fStack_218;
                fStack_2e0 = fStack_20c;
                fStack_2dc = local_200;
              }
              else {
                local_178[2] = local_200;
                local_178[0] = fStack_208;
                local_178[1] = fStack_204;
                pfVar15 = (float *)&local_1b8;
                lVar17 = 0;
                do {
                  *(undefined8 *)(local_138 + lVar17 * 4) =
                       *(undefined8 *)((longlong)&local_22c + lVar17 * 4);
                  *(float *)(local_138 + lVar17 * 4 + 8) = (&fStack_224)[lVar17];
                  fVar33 = *(float *)(local_138 + lVar17 * 4);
                  fVar45 = *(float *)(local_138 + lVar17 * 4 + 4);
                  fVar46 = *(float *)(local_138 + lVar17 * 4 + 8);
                  fVar41 = SQRT(fVar46 * fVar46 + fVar33 * fVar33 + fVar45 * fVar45);
                  *pfVar15 = fVar41;
                  fVar41 = (float)(~-(uint)(fVar41 != 0.0) & 0x3f800000 |
                                  (uint)(1.0 / fVar41) & -(uint)(fVar41 != 0.0));
                  *(float *)(local_138 + lVar17 * 4) = fVar33 * fVar41;
                  *(float *)(local_138 + lVar17 * 4 + 4) = fVar45 * fVar41;
                  *(float *)(local_138 + lVar17 * 4 + 8) = fVar41 * fVar46;
                  lVar17 = lVar17 + 3;
                  pfVar15 = pfVar15 + 1;
                } while (lVar17 != 9);
                if (local_118 < 0.0) {
                  fStack_120 = -fStack_120;
                  fStack_11c = -fStack_11c;
                  local_118 = -local_118;
                  local_1b0 = -local_1b0;
                }
                fVar48 = 1.0 / (ABS(local_118) + ABS(fStack_11c) + ABS(fStack_120));
                fVar45 = 1.0 / (local_118 + 1.0);
                fVar33 = fStack_11c * -fStack_120 * fVar45;
                fVar47 = -fStack_120 * afStack_134[1];
                fVar41 = (1.0 - fStack_120 * fStack_120 * fVar45) * (float)local_138 +
                         afStack_134[0] * fVar33 + fVar47;
                fVar45 = (fVar33 * (float)local_138 +
                         (1.0 - fStack_11c * fStack_11c * fVar45) * afStack_134[0]) -
                         afStack_134[1] * fStack_11c;
                fVar46 = ABS(fVar45);
                fVar33 = fVar41;
                if (fVar46 <= ABS(fVar41)) {
                  fVar33 = fVar45;
                  fVar45 = fVar41;
                }
                fVar45 = *(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar45 < 0.0) * 4);
                fVar36 = (float)local_1b8 * fVar45;
                uVar14 = -(uint)((fStack_120 * afStack_134[0] - fStack_11c * (float)local_138) *
                                 afStack_134[4] +
                                 (afStack_134[1] * fStack_11c - afStack_134[0] * local_118) *
                                 afStack_134[2] +
                                 ((float)local_138 * local_118 + fVar47) * afStack_134[3] < 0.0);
                fVar49 = fVar48 * (fStack_11c + fStack_120) * 32767.0;
                fVar47 = (fStack_120 - fStack_11c) * fVar48 * 32767.0;
                local_1b8._4_4_ =
                     (float)((uint)-fVar45 & uVar14 | ~uVar14 & (uint)fVar45) * local_1b8._4_4_;
                local_1b8 = CONCAT44(local_1b8._4_4_,fVar36);
                fVar48 = ABS(local_1b8._4_4_);
                fVar36 = ABS(fVar36);
                if (fVar36 <= fVar48) {
                  fVar36 = fVar48;
                }
                if (fVar36 <= ABS(local_1b0)) {
                  fVar36 = ABS(local_1b0);
                }
                fVar45 = fVar33 * fVar45 * 16383.0 * 1.4142135;
                fVar33 = (float)(0x6000000 - ((uint)fVar36 & 0x7f800000) & 0x7f800000);
                uVar5 = (ushort)((uint)(int)ROUND(fVar49 + fVar49 + 0.5) >> 1);
                uStack_16c = uVar5 ^ 0x8000;
                uVar7 = (ushort)((uint)(int)ROUND(fVar47 + fVar47 + 0.5) >> 1);
                uStack_16a = uVar7 ^ 0x8000;
                uVar6 = (ushort)(ABS(fVar41) < fVar46) << 0xf |
                        (ushort)((uint)(int)ROUND(fVar45 + fVar45 + 0.5) >> 1) & 0x7fff;
                uStack_168 = uVar6 ^ 0x4000;
                bVar31 = ((int)ROUND(fVar36 * fVar33 + fVar36 * fVar33 + 0.5) & 0xfffffffeU) ==
                         0x10000;
                sStack_15e = bVar31 + 1 + (ushort)((uint)fVar36 >> 0x17);
                if (bVar31) {
                  fVar33 = fVar33 * 0.5;
                }
                lVar17 = 0;
                do {
                  fVar45 = *(float *)((longlong)&local_1b8 + lVar17 * 4) * fVar33;
                  *(ushort *)((longlong)&fStack_164 + lVar17 * 2) =
                       (ushort)((uint)(int)ROUND(fVar45 + fVar45 + 0.5) >> 1) ^ 0x8000;
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 3);
                local_308._12_2_ = uStack_160;
                local_308._8_4_ = fStack_164;
                local_308._14_2_ = sStack_15e;
                local_308._0_8_ =
                     CONCAT26(uStack_166,CONCAT24(uVar6,CONCAT22(uVar7,uVar5))) ^ 0x400080008000;
                local_2f8 = CONCAT44(local_178[1],local_178[0]);
                fStack_2f0 = local_178[2];
                uStack_2ec = 0x3f800000;
              }
            }
            else {
              local_3e0 = local_3c0 * 0x30 + lStack_2d0;
              local_3d0 = local_1c0 ^ 1;
              local_3d8 = &local_22c;
              local_3f0 = uStack_2b4;
              local_3f8 = local_1cc._4_4_;
              local_3e8 = uVar32;
              FUN_147b050c0(&local_318,local_1cc & 0xffffffff);
            }
          }
          else {
            if (local_1c0 == 0) {
              bVar31 = true;
              if ((*(byte *)(local_2d8 + 0x119) & 1) != 0) {
                lVar17 = local_2d8 + 0xf0;
                if (*(longlong *)(local_2d8 + 0x100) != 0) {
                  lVar17 = *(longlong *)(local_2d8 + 0x100);
                }
                uVar14 = (uint)local_3c0 + 0x1f;
                if (-1 < (int)(uint)local_3c0) {
                  uVar14 = (uint)local_3c0;
                }
                bVar31 = (*(uint *)(lVar17 + (longlong)((int)uVar14 >> 5) * 4) >>
                          ((uint)local_3c0 & 0x1f) & 1) != 0;
              }
            }
            else {
              bVar31 = false;
            }
            lVar17 = *(longlong *)(local_2d8 + 0xd0);
            lVar23 = local_3c0 * 0x30;
            pauVar1 = (undefined1 (*) [16])(lVar17 + lVar23);
            puVar26 = (undefined8 *)(lVar17 + 0x10 + lVar23);
            uVar8 = *puVar26;
            uVar9 = puVar26[1];
            puVar26 = (undefined8 *)(lVar17 + 0x20 + lVar23);
            uVar10 = *puVar26;
            uVar11 = puVar26[1];
            local_118 = (float)uVar10;
            uStack_114 = (undefined4)((ulonglong)uVar10 >> 0x20);
            uStack_110 = (undefined4)uVar11;
            fStack_10c = (float)((ulonglong)uVar11 >> 0x20);
            afStack_134[3] = (float)uVar8;
            afStack_134[4] = (float)((ulonglong)uVar8 >> 0x20);
            fStack_120 = (float)uVar9;
            fStack_11c = (float)((ulonglong)uVar9 >> 0x20);
            _local_138 = *pauVar1;
            auVar39 = _local_138;
            afStack_134[0] = (float)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20);
            afStack_134[1] = (float)*(undefined8 *)(*pauVar1 + 8);
            afStack_134[2] = (float)((ulonglong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
            local_138 = SUB84(*(undefined8 *)*pauVar1,0);
            fVar33 = (afStack_134[0] * afStack_134[4] - afStack_134[3] * afStack_134[1]) *
                     fStack_120 +
                     ((afStack_134[3] * local_118 - fStack_11c * afStack_134[4]) * (float)local_138
                     - (local_118 * afStack_134[0] - fStack_11c * afStack_134[1]) * afStack_134[2]);
            uVar27 = ((uint)(fVar33 < 0.0) | local_230 & 0xffe) << 0x14;
            uVar14 = uVar27 | 0x40000000;
            if (fVar33 != 0.0) {
              uVar14 = uVar27;
            }
            if (NAN(fVar33)) {
              uVar14 = uVar27;
            }
            if (!bVar31) {
              uVar14 = uVar27 | 0x40000000;
            }
            local_318 = uVar14 | (uint)local_1cc;
            uStack_314 = uStack_2b4 << 0x18 | (uint)local_3c0;
            uStack_310 = local_1cc._4_4_;
            uStack_30c = uVar32;
            _local_138 = auVar39;
            if ((local_3b0 & 0x40) == 0) {
              auVar39._4_4_ = uStack_114;
              auVar39._0_4_ = uStack_114;
              auVar39._8_4_ = uStack_114;
              auVar39._12_4_ = uStack_114;
              auVar39 = insertps(auVar39,uStack_110,0x10);
              local_308._4_4_ = afStack_134[2];
              local_308._0_4_ = local_138;
              local_308._8_4_ = fStack_120;
              local_308._12_4_ = uStack_114;
              local_2f8 = CONCAT44(afStack_134[3],afStack_134[0]);
              fStack_2f0 = fStack_11c;
              uStack_2ec = auVar39._4_4_;
              local_2e8 = afStack_134[1];
              fStack_2e4 = afStack_134[4];
              fStack_2e0 = local_118;
              fStack_2dc = fStack_10c;
            }
            else {
              local_1b0 = fStack_10c;
              local_1b8 = CONCAT44(uStack_110,uStack_114);
              pfVar15 = (float *)&local_348;
              lVar17 = 0;
              do {
                *(undefined8 *)(local_178 + lVar17) = *(undefined8 *)(local_138 + lVar17 * 4);
                local_178[lVar17 + 2] = *(float *)(local_138 + lVar17 * 4 + 8);
                fVar33 = local_178[lVar17];
                fVar45 = local_178[lVar17 + 1];
                fVar46 = local_178[lVar17 + 2];
                fVar41 = SQRT(fVar46 * fVar46 + fVar33 * fVar33 + fVar45 * fVar45);
                *pfVar15 = fVar41;
                fVar41 = (float)(~-(uint)(fVar41 != 0.0) & 0x3f800000 |
                                (uint)(1.0 / fVar41) & -(uint)(fVar41 != 0.0));
                local_178[lVar17] = fVar33 * fVar41;
                local_178[lVar17 + 1] = fVar45 * fVar41;
                local_178[lVar17 + 2] = fVar41 * fVar46;
                lVar17 = lVar17 + 3;
                pfVar15 = pfVar15 + 1;
              } while (lVar17 != 9);
              fVar33 = (float)CONCAT22(sStack_15e,uStack_160);
              fVar45 = (float)local_158._0_4_;
              if ((float)local_158._0_4_ < 0.0) {
                fVar33 = -fVar33;
                sStack_15e = (short)((uint)fVar33 >> 0x10);
                fStack_15c = -fStack_15c;
                fVar45 = -(float)local_158._0_4_;
                local_158._0_4_ = fVar45;
                afStack_340[0] = -afStack_340[0];
              }
              fVar49 = 1.0 / (ABS(fVar45) + ABS(fStack_15c) + ABS(fVar33));
              fVar46 = 1.0 / (fVar45 + 1.0);
              fVar48 = fStack_15c * -fVar33 * fVar46;
              fVar47 = -fVar33 * local_178[2];
              fVar41 = (1.0 - fVar33 * fVar33 * fVar46) * local_178[0] + local_178[1] * fVar48 +
                       fVar47;
              fVar36 = (fVar48 * local_178[0] +
                       (1.0 - fStack_15c * fStack_15c * fVar46) * local_178[1]) -
                       local_178[2] * fStack_15c;
              fVar48 = ABS(fVar41);
              fVar46 = fVar36;
              if (ABS(fVar36) <= fVar48) {
                fVar46 = fVar41;
                fVar41 = fVar36;
              }
              fVar46 = *(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar46 < 0.0) * 4);
              fVar37 = (float)local_348 * fVar46;
              uVar14 = -(uint)((fVar33 * local_178[1] - fStack_15c * local_178[0]) * fStack_164 +
                               (local_178[2] * fStack_15c - local_178[1] * fVar45) *
                               (float)CONCAT22(uStack_16a,uStack_16c) +
                               (local_178[0] * fVar45 + fVar47) *
                               (float)CONCAT22(uStack_166,uStack_168) < 0.0);
              fVar47 = fVar49 * (fStack_15c + fVar33) * 32767.0;
              fVar45 = (fVar33 - fStack_15c) * fVar49 * 32767.0;
              local_348._4_4_ =
                   (float)((uint)-fVar46 & uVar14 | ~uVar14 & (uint)fVar46) * local_348._4_4_;
              local_348 = CONCAT44(local_348._4_4_,fVar37);
              fVar33 = ABS(local_348._4_4_);
              fVar37 = ABS(fVar37);
              if (fVar37 <= fVar33) {
                fVar37 = fVar33;
              }
              fVar33 = fVar41 * fVar46 * 16383.0 * 1.4142135;
              if (fVar37 <= ABS(afStack_340[0])) {
                fVar37 = ABS(afStack_340[0]);
              }
              fVar46 = (float)(0x6000000 - ((uint)fVar37 & 0x7f800000) & 0x7f800000);
              uVar7 = (ushort)((uint)(int)ROUND(fVar47 + fVar47 + 0.5) >> 1);
              local_1ac = uVar7 ^ 0x8000;
              uVar5 = (ushort)((uint)(int)ROUND(fVar45 + fVar45 + 0.5) >> 1);
              uStack_1aa = uVar5 ^ 0x8000;
              uVar6 = (ushort)(fVar48 < ABS(fVar36)) << 0xf |
                      (ushort)((uint)(int)ROUND(fVar33 + fVar33 + 0.5) >> 1) & 0x7fff;
              uStack_1a8 = uVar6 ^ 0x4000;
              bVar31 = ((int)ROUND(fVar37 * fVar46 + fVar37 * fVar46 + 0.5) & 0xfffffffeU) ==
                       0x10000;
              sStack_19e = bVar31 + 1 + (ushort)((uint)fVar37 >> 0x17);
              if (bVar31) {
                fVar46 = fVar46 * 0.5;
              }
              lVar17 = 0;
              do {
                fVar33 = *(float *)((longlong)&local_348 + lVar17 * 4) * fVar46;
                *(ushort *)((longlong)&fStack_1a4 + lVar17 * 2) =
                     (ushort)((uint)(int)ROUND(fVar33 + fVar33 + 0.5) >> 1) ^ 0x8000;
                lVar17 = lVar17 + 1;
              } while (lVar17 != 3);
              local_308._12_2_ = uStack_1a0;
              local_308._8_4_ = fStack_1a4;
              local_308._14_2_ = sStack_19e;
              local_308._0_8_ =
                   CONCAT26(uStack_1a6,CONCAT24(uVar6,CONCAT22(uVar5,uVar7))) ^ 0x400080008000;
              local_2f8 = local_1b8;
              fStack_2f0 = local_1b0;
              uStack_2ec = 0x3f800000;
            }
          }
          iVar18 = (int)local_3c0;
          puVar21 = &local_318;
          uVar24 = 0;
          do {
            plVar20 = *(longlong **)(*param_1 + 0x20);
            uVar14 = ((int)local_368 + iVar18) * local_3ac + (int)uVar24;
            *(int *)(*plVar20 + (ulonglong)uVar14 * 4) =
                 *(int *)(*param_1 + 0x40) * (int)uVar24 + (int)local_360 + iVar18;
            uVar8 = *(undefined8 *)(puVar21 + 2);
            puVar26 = (undefined8 *)(plVar20[1] + (ulonglong)(uVar14 * (int)plVar20[3]));
            *puVar26 = *(undefined8 *)puVar21;
            puVar26[1] = uVar8;
            uVar24 = uVar24 + 1;
            puVar21 = puVar21 + 4;
          } while (local_380 != uVar24);
          lVar17 = (longlong)(int)local_2bc;
          if (0 < lVar17) {
            uVar27 = (int)local_388 + iVar18 * (int)local_2bc;
            plVar20 = *(longlong **)(*param_1 + 0x18);
            iVar18 = iVar18 * (int)local_2bc + local_2c0;
            uVar14 = uVar27;
            do {
              *(int *)(*plVar20 + (ulonglong)uVar14 * 4) = iVar18;
              uVar14 = uVar14 + 1;
              iVar18 = iVar18 + 1;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            local_390 = plVar20[1];
            local_398 = (ulonglong)((int)plVar20[3] * uVar27);
            puVar2 = (undefined4 *)(local_390 + local_398);
            if ((local_230 & 0xd0) == 0) {
              local_3b8 = 0;
            }
            else {
              uVar16 = 0;
              uVar32 = 0;
              if ((local_230 & 0x40) != 0) {
                uVar32 = *(undefined4 *)(local_260 + local_3c0 * 4);
              }
              *puVar2 = uVar32;
              if ((local_230 & 0x10) != 0) {
                uVar16 = *(undefined4 *)(local_2a0 + local_3c0 * 4);
              }
              puVar2[1] = uVar16;
              local_3b8 = 1;
              if ((char)local_230 < '\0') {
                fVar33 = *(float *)(local_250 + 0x14 + local_3c0 * 0x18);
                fVar45 = *(float *)(local_250 + 8 + local_3c0 * 0x18);
                fVar46 = *(float *)(local_250 + 0x10 + local_3c0 * 0x18);
                fVar41 = *(float *)(local_250 + local_3c0 * 0x18);
                fVar47 = *(float *)(local_250 + 4 + local_3c0 * 0x18);
                fVar48 = *(float *)(local_250 + 0xc + local_3c0 * 0x18);
                puVar2[2] = (fVar48 + fVar41) * 0.5;
                puVar2[3] = (fVar46 + fVar47) * 0.5;
                puVar2[4] = (fVar33 + fVar45) * 0.5;
                puVar2[5] = (fVar48 - fVar41) * 0.5;
                puVar2[6] = (fVar46 - fVar47) * 0.5;
                puVar2[7] = (fVar33 - fVar45) * 0.5;
                local_3b8 = (ulonglong)(((char)local_230 < '\0') + 1);
              }
            }
            if ((local_230 & 8) != 0) {
              if (local_2d8 == 0) {
                lVar17 = CONCAT44(uStack_2ac,uStack_2b0);
                lVar23 = local_3c0 * 0x30;
                auVar44 = ZEXT816(0);
                auVar39 = *(undefined1 (*) [16])(lVar17 + 0x18 + lVar23);
                uVar32 = auVar39._12_4_;
                _local_138 = blendps(*(undefined1 (*) [16])(lVar17 + lVar23),auVar44,8);
                auVar42 = blendps(*(undefined1 (*) [16])(lVar17 + 0xc + lVar23),auVar44,8);
                auVar34._4_4_ = uVar32;
                auVar34._0_4_ = uVar32;
                auVar34._8_4_ = 0x3f800000;
                auVar34._12_4_ = 0x3f800000;
                auVar35 = insertps(auVar34,*(undefined4 *)(lVar17 + 0x28 + lVar23),0x10);
                auVar39 = blendps(auVar39,auVar44,8);
                local_108 = insertps(auVar35,*(undefined4 *)(lVar17 + 0x2c + lVar23),0x20);
                afStack_134[3] = auVar42._0_4_;
                afStack_134[4] = auVar42._4_4_;
                fStack_120 = auVar42._8_4_;
                fStack_11c = auVar42._12_4_;
                local_118 = auVar39._0_4_;
                uStack_114 = auVar39._4_4_;
                uStack_110 = auVar39._8_4_;
                fStack_10c = auVar39._12_4_;
                auVar35._4_4_ = uStack_1f8;
                auVar35._0_4_ = local_1fc;
                auVar35._8_4_ = uStack_1f4;
                auVar35._12_4_ = uStack_1f0;
                auVar39 = blendps(auVar35,auVar44,8);
                auVar42._4_4_ = uStack_1ec;
                auVar42._0_4_ = uStack_1f0;
                auVar42._8_4_ = uStack_1e8;
                auVar42._12_4_ = uStack_1e4;
                auVar35 = blendps(auVar42,auVar44,8);
                auVar13._4_4_ = uStack_1e0;
                auVar13._0_4_ = uStack_1e4;
                auVar13._8_4_ = uStack_1dc;
                auVar13._12_4_ = uStack_1d8;
                local_158 = blendps(auVar44,auVar13,7);
                auVar43._4_4_ = uStack_1d8;
                auVar43._0_4_ = uStack_1d8;
                auVar43._8_4_ = 0x3f800000;
                auVar43._12_4_ = 0x3f800000;
                auVar44 = insertps(auVar43,uStack_1d4,0x10);
                local_148 = insertps(auVar44,local_1d0,0x20);
                local_178[0] = auVar39._0_4_;
                local_178[1] = auVar39._4_4_;
                local_178[2] = auVar39._8_4_;
                uStack_16c = auVar39._12_2_;
                uStack_16a = auVar39._14_2_;
                uStack_168 = auVar35._0_2_;
                uStack_166 = auVar35._2_2_;
                fStack_164 = auVar35._4_4_;
                uStack_160 = auVar35._8_2_;
                sStack_15e = auVar35._10_2_;
                fStack_15c = auVar35._12_4_;
                FUN_144afeb32();
                local_348 = local_1b8;
                afStack_340[0] = local_1b0;
                afStack_340[3] = (float)CONCAT22(sStack_19e,uStack_1a0);
                afStack_340[1] = (float)CONCAT22(uStack_1a6,uStack_1a8);
                afStack_340[2] = fStack_1a4;
                fStack_330 = local_198;
                fStack_32c = local_194;
                local_328 = local_190;
                fStack_324 = (float)local_188;
                fStack_320 = (float)((ulonglong)local_188 >> 0x20);
                fStack_31c = local_180;
                if ((((((float)local_1b8 != 0.0) || (NAN((float)local_1b8))) ||
                     (local_1b8._4_4_ != 0.0)) ||
                    (((NAN(local_1b8._4_4_) || (local_1b0 != 0.0)) || (NAN(local_1b0))))) &&
                   (((afStack_340[1] != 0.0 || (NAN(afStack_340[1]))) ||
                    ((fStack_1a4 != 0.0 ||
                     (((NAN(fStack_1a4) || (afStack_340[3] != 0.0)) || (NAN(afStack_340[3])))))))))
                {
                  fVar46 = local_1b0 * local_1b0 +
                           (float)local_1b8 * (float)local_1b8 + local_1b8._4_4_ * local_1b8._4_4_;
                  fVar33 = (afStack_340[3] * local_1b0 +
                           afStack_340[1] * (float)local_1b8 + local_1b8._4_4_ * fStack_1a4) /
                           fVar46;
                  afStack_340[1] = afStack_340[1] - fVar33 * (float)local_1b8;
                  afStack_340[2] = fStack_1a4 - local_1b8._4_4_ * fVar33;
                  afStack_340[3] = afStack_340[3] - local_1b0 * fVar33;
                  fVar46 = (local_190 * local_1b0 +
                           local_198 * (float)local_1b8 + local_1b8._4_4_ * local_194) / fVar46;
                  fVar45 = local_198 - fVar46 * (float)local_1b8;
                  fVar41 = local_194 - local_1b8._4_4_ * fVar46;
                  fVar46 = local_190 - local_1b0 * fVar46;
                  fVar33 = (fVar46 * afStack_340[3] +
                           fVar45 * afStack_340[1] + afStack_340[2] * fVar41) /
                           (afStack_340[3] * afStack_340[3] +
                           afStack_340[1] * afStack_340[1] + afStack_340[2] * afStack_340[2]);
                  fStack_330 = fVar45 - fVar33 * afStack_340[1];
                  fStack_32c = fVar41 - afStack_340[2] * fVar33;
                  local_328 = fVar46 - afStack_340[3] * fVar33;
                }
              }
              else {
                lVar17 = *(longlong *)
                          ((ulonglong)(*(int *)(local_2d8 + 0xe8) != 0) * 0x10 + 0xd0 + local_2d8);
                lVar23 = local_3c0 * 0x30;
                uVar8 = ((undefined8 *)(lVar17 + lVar23))[1];
                puVar26 = (undefined8 *)(lVar17 + 0x10 + lVar23);
                uVar9 = *puVar26;
                uVar10 = puVar26[1];
                puVar26 = (undefined8 *)(lVar17 + 0x20 + lVar23);
                uVar11 = *puVar26;
                uVar12 = puVar26[1];
                local_328 = (float)uVar11;
                fStack_324 = (float)((ulonglong)uVar11 >> 0x20);
                fStack_320 = (float)uVar12;
                fStack_31c = (float)((ulonglong)uVar12 >> 0x20);
                afStack_340[2] = (float)uVar9;
                afStack_340[3] = (float)((ulonglong)uVar9 >> 0x20);
                fStack_330 = (float)uVar10;
                fStack_32c = (float)((ulonglong)uVar10 >> 0x20);
                local_348 = *(undefined8 *)(lVar17 + lVar23);
                afStack_340[0] = (float)uVar8;
                afStack_340[1] = (float)((ulonglong)uVar8 >> 0x20);
              }
              iVar18 = (int)local_3b8;
              if ((local_3b0 & 0x40) == 0) {
                uVar24 = (ulonglong)(uint)(iVar18 << 4);
                auVar38._4_4_ = fStack_324;
                auVar38._0_4_ = fStack_324;
                auVar38._8_4_ = fStack_324;
                auVar38._12_4_ = fStack_324;
                auVar39 = insertps(auVar38,fStack_320,0x10);
                auVar40._4_4_ = afStack_340[1];
                auVar40._0_4_ = (float)local_348;
                auVar40._8_4_ = fStack_330;
                auVar40._12_4_ = fStack_324;
                *(undefined1 (*) [16])((longlong)puVar2 + uVar24) = auVar40;
                puVar4 = (undefined4 *)((longlong)puVar2 + uVar24 + 0x10);
                *puVar4 = local_348._4_4_;
                puVar4[1] = afStack_340[2];
                puVar4[2] = fStack_32c;
                puVar4[3] = auVar39._4_4_;
                pfVar15 = (float *)((longlong)puVar2 + uVar24 + 0x20);
                *pfVar15 = afStack_340[0];
                pfVar15[1] = afStack_340[3];
                pfVar15[2] = local_328;
                pfVar15[3] = fStack_31c;
                uVar14 = iVar18 + 3;
              }
              else {
                local_178[2] = fStack_31c;
                local_178[0] = fStack_324;
                local_178[1] = fStack_320;
                pfVar15 = (float *)&local_1b8;
                lVar17 = 0;
                do {
                  *(undefined8 *)(local_138 + lVar17 * 4) =
                       *(undefined8 *)((longlong)&local_348 + lVar17 * 4);
                  *(float *)(local_138 + lVar17 * 4 + 8) = afStack_340[lVar17];
                  fVar33 = *(float *)(local_138 + lVar17 * 4);
                  fVar45 = *(float *)(local_138 + lVar17 * 4 + 4);
                  fVar46 = *(float *)(local_138 + lVar17 * 4 + 8);
                  fVar41 = SQRT(fVar46 * fVar46 + fVar33 * fVar33 + fVar45 * fVar45);
                  *pfVar15 = fVar41;
                  fVar41 = (float)(~-(uint)(fVar41 != 0.0) & 0x3f800000 |
                                  (uint)(1.0 / fVar41) & -(uint)(fVar41 != 0.0));
                  *(float *)(local_138 + lVar17 * 4) = fVar33 * fVar41;
                  *(float *)(local_138 + lVar17 * 4 + 4) = fVar45 * fVar41;
                  *(float *)(local_138 + lVar17 * 4 + 8) = fVar41 * fVar46;
                  lVar17 = lVar17 + 3;
                  pfVar15 = pfVar15 + 1;
                } while (lVar17 != 9);
                local_3a8 = ZEXT416((uint)local_1b0);
                if (local_118 < 0.0) {
                  fStack_120 = -fStack_120;
                  fStack_11c = -fStack_11c;
                  local_118 = -local_118;
                  local_3a8._4_4_ = 0x80000000;
                  local_3a8._0_4_ = -local_1b0;
                  local_3a8._8_4_ = 0x80000000;
                  local_3a8._12_4_ = 0x80000000;
                  local_1b0 = -local_1b0;
                }
                fVar48 = 1.0 / (ABS(local_118) + ABS(fStack_11c) + ABS(fStack_120));
                fVar33 = 1.0 / (local_118 + 1.0);
                fVar41 = fStack_11c * -fStack_120 * fVar33;
                fVar46 = -fStack_120 * afStack_134[1];
                fVar45 = (1.0 - fStack_120 * fStack_120 * fVar33) * (float)local_138 +
                         afStack_134[0] * fVar41 + fVar46;
                fVar47 = (fVar41 * (float)local_138 +
                         (1.0 - fStack_11c * fStack_11c * fVar33) * afStack_134[0]) -
                         afStack_134[1] * fStack_11c;
                fVar41 = ABS(fVar45);
                fVar33 = fVar47;
                if (ABS(fVar47) <= fVar41) {
                  fVar33 = fVar45;
                  fVar45 = fVar47;
                }
                fVar33 = *(float *)(&DAT_149e1eeb0 + (ulonglong)(fVar33 < 0.0) * 4);
                fVar36 = (float)local_1b8 * fVar33;
                uVar14 = -(uint)((fStack_120 * afStack_134[0] - fStack_11c * (float)local_138) *
                                 afStack_134[4] +
                                 (afStack_134[1] * fStack_11c - afStack_134[0] * local_118) *
                                 afStack_134[2] +
                                 ((float)local_138 * local_118 + fVar46) * afStack_134[3] < 0.0);
                fVar49 = fVar48 * (fStack_11c + fStack_120) * 32767.0;
                fVar48 = (fStack_120 - fStack_11c) * fVar48 * 32767.0;
                local_1b8._4_4_ =
                     (float)((uint)-fVar33 & uVar14 | ~uVar14 & (uint)fVar33) * local_1b8._4_4_;
                local_1b8 = CONCAT44(local_1b8._4_4_,fVar36);
                fVar46 = ABS(local_1b8._4_4_);
                fVar36 = ABS(fVar36);
                if (fVar36 <= fVar46) {
                  fVar36 = fVar46;
                }
                fVar33 = fVar45 * fVar33 * 16383.0 * 1.4142135;
                if (fVar36 <= ABS((float)local_3a8._0_4_)) {
                  fVar36 = ABS((float)local_3a8._0_4_);
                }
                fVar45 = (float)(0x6000000 - ((uint)fVar36 & 0x7f800000) & 0x7f800000);
                uVar5 = (ushort)((uint)(int)ROUND(fVar49 + fVar49 + 0.5) >> 1);
                uStack_16c = uVar5 ^ 0x8000;
                uVar7 = (ushort)((uint)(int)ROUND(fVar48 + fVar48 + 0.5) >> 1);
                uStack_16a = uVar7 ^ 0x8000;
                uVar6 = (ushort)(fVar41 < ABS(fVar47)) << 0xf |
                        (ushort)((uint)(int)ROUND(fVar33 + fVar33 + 0.5) >> 1) & 0x7fff;
                uStack_168 = uVar6 ^ 0x4000;
                bVar31 = ((int)ROUND(fVar36 * fVar45 + fVar36 * fVar45 + 0.5) & 0xfffffffeU) ==
                         0x10000;
                sStack_15e = bVar31 + 1 + (ushort)((uint)fVar36 >> 0x17);
                if (bVar31) {
                  fVar45 = fVar45 * 0.5;
                }
                lVar17 = 0;
                do {
                  fVar33 = *(float *)((longlong)&local_1b8 + lVar17 * 4) * fVar45;
                  *(ushort *)((longlong)&fStack_164 + lVar17 * 2) =
                       (ushort)((uint)(int)ROUND(fVar33 + fVar33 + 0.5) >> 1) ^ 0x8000;
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 3);
                uVar24 = (ulonglong)(uint)(iVar18 << 4);
                *(ulonglong *)((longlong)puVar2 + uVar24) =
                     CONCAT26(uStack_166,CONCAT24(uVar6,CONCAT22(uVar7,uVar5))) ^ 0x400080008000;
                ((ulonglong *)((longlong)puVar2 + uVar24))[1] =
                     CONCAT26(sStack_15e,CONCAT24(uStack_160,fStack_164));
                *(ulonglong *)((longlong)puVar2 + uVar24 + 0x10) =
                     CONCAT44(local_178[1],local_178[0]);
                *(float *)((longlong)puVar2 + uVar24 + 0x18) = local_178[2];
                *(undefined4 *)((longlong)puVar2 + uVar24 + 0x1c) = 0x3f800000;
                uVar14 = iVar18 + 2;
              }
              local_3b8 = (ulonglong)uVar14;
            }
            if ((local_230 & 0x20) != 0) {
              puVar26 = (undefined8 *)(local_290 + local_3c0 * 0x10);
              uVar8 = puVar26[1];
              puVar3 = (undefined8 *)((longlong)puVar2 + (ulonglong)(uint)((int)local_3b8 << 4));
              *puVar3 = *puVar26;
              puVar3[1] = uVar8;
              local_3b8 = (ulonglong)((int)local_3b8 + 1);
            }
            if ((local_230 >> 8 & 1) != 0) {
              if (0 < (longlong)local_2bc._4_4_) {
                puVar26 = (undefined8 *)
                          (local_390 + (ulonglong)(uint)((int)local_3b8 << 4) + local_398);
                lVar23 = local_2bc._4_4_ * lVar30;
                lVar17 = 0;
                do {
                  uVar8 = ((undefined8 *)(local_240 + lVar23))[1];
                  *puVar26 = *(undefined8 *)(local_240 + lVar23);
                  puVar26[1] = uVar8;
                  lVar17 = lVar17 + 1;
                  puVar26 = puVar26 + 2;
                  lVar23 = lVar23 + 0x10;
                } while (lVar17 < local_2bc._4_4_);
                local_3b8 = (ulonglong)(uint)((int)local_3b8 + (int)lVar17);
              }
            }
            if ((0 < (int)uStack_2b4 & (byte)local_230 >> 2) == 1) {
              uVar24 = 0;
              do {
                puVar2[(longlong)(int)local_3b8 * 4 + uVar24] =
                     *(undefined4 *)((ulonglong)uStack_2b4 * lVar22 + local_280 + uVar24 * 4);
                uVar24 = uVar24 + 1;
              } while (uVar24 < uStack_2b4);
            }
          }
          uVar29 = uVar29 + 1;
          lVar30 = lVar30 + 0x10;
          lVar22 = lVar22 + 4;
        } while (uVar29 != local_350);
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != local_370);
  }
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c54098 FUN_142c54098 body=189 status=ok
// SIG undefined FUN_142c54098(void)

ulonglong FUN_142c54098(ulonglong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  FUN_147179ff2();
  if (param_1 != 0 && param_2 != 0) {
    piVar3 = (int *)(param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
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



// FUNCTION 142c54156 FUN_142c54156 body=619 status=ok
// SIG undefined FUN_142c54156(void)

void FUN_142c54156(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int *_Memory;
  uint *puVar8;
  ulonglong _Size;
  int *piVar9;
  void *_Dst;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_2,0x48);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
LAB_142c542d9:
    if (_Src == (void *)0x0) goto LAB_142c54345;
  }
  else {
    _Size = (ulonglong)param_2 * 0x48;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142c54221;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
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
      FUN_140217a48(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142c54221:
      _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)((longlong)_Dst + _Size);
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
        _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)((longlong)_Dst + _Size);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142c5429b;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142c5429b:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
    if (uVar6 == 0 || _Src == (void *)0x0) goto LAB_142c542d9;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  piVar9 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    _Memory = piVar9;
    if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142c4fdb0);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar3 + 0x310);
      *(int **)(lVar3 + 0x310) = piVar9;
      if (_Memory == (int *)0x0) goto LAB_142c54345;
    }
    _aligned_free(_Memory);
  }
LAB_142c54345:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142c543c2 FUN_142c543c2 body=171 status=ok
// SIG undefined FUN_142c543c2(void)

void FUN_142c543c2(ulonglong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)(*param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c54435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c5446e FUN_142c5446e body=367 status=ok
// SIG undefined FUN_142c5446e(void)

undefined8 * FUN_142c5446e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_14a222620;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142c5452a;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_142c4fdb0);
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
LAB_142c5452a:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 142c545de FUN_142c545de body=179 status=ok
// SIG undefined FUN_142c545de(void)

void FUN_142c545de(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_147179edc(uVar2);
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
          __tlregdtor(&LAB_142c4fdb0);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142c54659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142c54692 FUN_142c54692 body=481 status=ok
// SIG undefined FUN_142c54692(void)

void FUN_142c54692(longlong param_1,ulonglong *param_2)

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
  FUN_14717a6da(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c54874 FUN_142c54874 body=232 status=ok
// SIG undefined FUN_142c54874(void)

void FUN_142c54874(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c5495c FUN_142c5495c body=81 status=ok
// SIG undefined FUN_142c5495c(void)

void FUN_142c5495c(undefined8 param_1,longlong *param_2)

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
  FUN_14717a77d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c549ae FUN_142c549ae body=450 status=ok
// SIG undefined FUN_142c549ae(void)

void FUN_142c549ae(undefined8 *param_1,uint param_2)

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
LAB_142c54ac9:
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
LAB_142c54b06:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142c54a04;
LAB_142c549f9:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142c54a04:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000142c54a30;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142c54a86:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142c54b06;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142c54ac9;
code_r0x000142c54a30:
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
      goto LAB_142c54a86;
    }
  }
  goto LAB_142c549f9;
}



// FUNCTION 142c54b70 FUN_142c54b70 body=31 status=ok
// SIG undefined FUN_142c54b70(void)

undefined8 FUN_142c54b70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c54b90 FUN_142c54b90 body=1324 status=ok
// SIG undefined FUN_142c54b90(void)

void FUN_142c54b90(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
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
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
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
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
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
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
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
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c550be FUN_142c550be body=368 status=ok
// SIG undefined FUN_142c550be(void)

void FUN_142c550be(longlong param_1)

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
  local_2e = 0x7000201;
  local_26 = 7;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142c551df;
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
LAB_142c551df:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c55230 FUN_142c55230 body=38 status=ok
// SIG undefined FUN_142c55230(void)

undefined8 FUN_142c55230(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c55256 FUN_142c55256 body=1367 status=ok
// SIG undefined FUN_142c55256(void)

void FUN_142c55256(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined5 uStack_a4;
  undefined3 uStack_9f;
  undefined5 uStack_9c;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = (int)local_128;
  if ((longlong)(int)local_128 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar3 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar3 = uStack_130;
    }
    FUN_1446fe144(puVar8 + 2,(int)local_128,0);
    puVar6 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 2;
    }
    memcpy(puVar6,puVar3,(longlong)(int)local_128);
  }
  puVar8[0xd] = 0;
  puVar3 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar8 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = &uStack_120;
    }
    FUN_1446fe1b8(puVar8 + 5,iStack_d8,0);
    puVar6 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 5;
    }
    memcpy(puVar6,puVar3,(longlong)iStack_d8 << 3);
    puVar3 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar8 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar8 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar8 + 0x84) = (undefined4)uStack_c4;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar3);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = 0;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = (undefined8 *)0x0;
  uStack_dc = 0;
  iStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  uStack_9f = 0;
  uStack_9c = 0;
  uStack_97 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  FUN_144b0e33a(param_2,&local_138);
  local_108 = DAT_14c9d27c8;
  uStack_100 = DAT_14c9c0db0;
  local_f8 = DAT_14c9d5278;
  local_138 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 8);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x480) + 0xd4);
    lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar7 * 8);
    if (lVar4 == 0) {
      lVar4 = FUN_1400bafc2(lVar5,lVar7,1);
    }
  }
  uStack_130 = (undefined8 *)lVar4;
  if (*(longlong *)(param_1 + 0x490) == 0) {
    lVar5 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 8);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x490) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar7 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar4,lVar7,1);
    }
  }
  local_e0 = 0;
  local_128 = lVar5;
  lVar4 = FUN_140028f18(param_2);
  if ((lVar4 != 0) && ((local_70 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_118;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_118._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_110._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_128;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_128._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_120._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_130._4_4_;
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar8 + 4;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x28);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar8 + 4;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_14a37d348;
    puVar8[2] = lVar4;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar5 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 8);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x480) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar7 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar4,lVar7,1);
    }
  }
  FUN_145f9061a();
  local_148 = param_1 + 0x1c0;
  FUN_1449cc26b(param_2,lVar5,*(undefined8 *)(param_1 + 0x480),&DAT_14c9d43e8);
  if (*(longlong *)(param_1 + 0x490) == 0) {
    lVar5 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 8);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x490) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar7 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar4,lVar7,1);
    }
  }
  FUN_145f901b8();
  local_148 = param_1 + 800;
  FUN_1449cc26b(param_2,lVar5,*(undefined8 *)(param_1 + 0x490),&DAT_14c9d42d8);
  iVar1 = *(int *)(param_1 + 0x4a4);
  iVar2 = *(int *)(param_1 + 0x4a0);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar8 + 5;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x30);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar8 + 5;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(float *)((longlong)puVar8 + 0x1c) = (float)iVar2;
  *(float *)(puVar8 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar8 + 4;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x28);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar8 + 4;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a1fc200;
  puVar8[2] = 0xc00000000;
  *(undefined4 *)(puVar8 + 3) = 1;
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c557ae FUN_142c557ae body=99 status=ok
// SIG undefined FUN_142c557ae(void)

void FUN_142c557ae(longlong *param_1)

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



// FUNCTION 142c55812 FUN_142c55812 body=469 status=ok
// SIG undefined FUN_142c55812(void)

void FUN_142c55812(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142c55942:
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
LAB_142c5597f:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142c5587c;
LAB_142c55871:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142c5587c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000142c558a9;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142c558ff:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142c5597f;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142c55942;
code_r0x000142c558a9:
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
      goto LAB_142c558ff;
    }
  }
  goto LAB_142c55871;
}



// FUNCTION 142c559e8 FUN_142c559e8 body=199 status=ok
// SIG undefined FUN_142c559e8(void)

void FUN_142c559e8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2 * 0x20;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x400) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
      }
      else {
        uVar2 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar2 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
    }
  }
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 142c55ab0 FUN_142c55ab0 body=248 status=ok
// SIG undefined FUN_142c55ab0(void)

void FUN_142c55ab0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142c55ba8 FUN_142c55ba8 body=481 status=ok
// SIG undefined FUN_142c55ba8(void)

void FUN_142c55ba8(longlong param_1,ulonglong *param_2)

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
  FUN_14717ad78(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c55d8a FUN_142c55d8a body=232 status=ok
// SIG undefined FUN_142c55d8a(void)

void FUN_142c55d8a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c55e72 FUN_142c55e72 body=81 status=ok
// SIG undefined FUN_142c55e72(void)

void FUN_142c55e72(undefined8 param_1,longlong *param_2)

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
  FUN_14717ae1b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c55ec4 FUN_142c55ec4 body=481 status=ok
// SIG undefined FUN_142c55ec4(void)

void FUN_142c55ec4(longlong param_1,ulonglong *param_2)

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
  FUN_14717b394(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c560a6 FUN_142c560a6 body=232 status=ok
// SIG undefined FUN_142c560a6(void)

void FUN_142c560a6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c5618e FUN_142c5618e body=81 status=ok
// SIG undefined FUN_142c5618e(void)

void FUN_142c5618e(undefined8 param_1,longlong *param_2)

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
  FUN_14717b437(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c561e0 FUN_142c561e0 body=481 status=ok
// SIG undefined FUN_142c561e0(void)

void FUN_142c561e0(longlong param_1,ulonglong *param_2)

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
  FUN_14717b774(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c563c2 FUN_142c563c2 body=232 status=ok
// SIG undefined FUN_142c563c2(void)

void FUN_142c563c2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c564aa FUN_142c564aa body=81 status=ok
// SIG undefined FUN_142c564aa(void)

void FUN_142c564aa(undefined8 param_1,longlong *param_2)

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
  FUN_14717b817(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c564fc FUN_142c564fc body=481 status=ok
// SIG undefined FUN_142c564fc(void)

void FUN_142c564fc(longlong param_1,ulonglong *param_2)

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
  FUN_14717bb54(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c566de FUN_142c566de body=232 status=ok
// SIG undefined FUN_142c566de(void)

void FUN_142c566de(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c567c6 FUN_142c567c6 body=81 status=ok
// SIG undefined FUN_142c567c6(void)

void FUN_142c567c6(undefined8 param_1,longlong *param_2)

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
  FUN_14717bbf7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c56818 FUN_142c56818 body=481 status=ok
// SIG undefined FUN_142c56818(void)

void FUN_142c56818(longlong param_1,ulonglong *param_2)

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
  FUN_14717bf34(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c569fa FUN_142c569fa body=232 status=ok
// SIG undefined FUN_142c569fa(void)

void FUN_142c569fa(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c56ae2 FUN_142c56ae2 body=81 status=ok
// SIG undefined FUN_142c56ae2(void)

void FUN_142c56ae2(undefined8 param_1,longlong *param_2)

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
  FUN_14717bfd7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c56b34 FUN_142c56b34 body=481 status=ok
// SIG undefined FUN_142c56b34(void)

void FUN_142c56b34(longlong param_1,ulonglong *param_2)

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
  FUN_14717c314(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c56d16 FUN_142c56d16 body=232 status=ok
// SIG undefined FUN_142c56d16(void)

void FUN_142c56d16(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c56dfe FUN_142c56dfe body=81 status=ok
// SIG undefined FUN_142c56dfe(void)

void FUN_142c56dfe(undefined8 param_1,longlong *param_2)

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
  FUN_14717c3b7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c56e50 FUN_142c56e50 body=481 status=ok
// SIG undefined FUN_142c56e50(void)

void FUN_142c56e50(longlong param_1,ulonglong *param_2)

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
  FUN_14717c6f4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c57032 FUN_142c57032 body=232 status=ok
// SIG undefined FUN_142c57032(void)

void FUN_142c57032(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c5711a FUN_142c5711a body=81 status=ok
// SIG undefined FUN_142c5711a(void)

void FUN_142c5711a(undefined8 param_1,longlong *param_2)

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
  FUN_14717c797(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c5716b FUN_142c5716b body=4107 status=ok
// SIG undefined FUN_142c5716b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c5716b(void)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_88,&DAT_14c9cfdb8);
  if (cVar1 == '\0') {
    _DAT_14c9cfdb8 = 0;
    uRam000000014c9cfdc0 = 0;
  }
  if (local_88 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_80 = FUN_142c29ca8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfdc8,&local_88);
  local_80 = FUN_142c29ee8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfdd8,&local_88);
  local_80 = FUN_142c2a128;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfde8,&local_88);
  local_80 = FUN_142c2a368;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfdf8,&local_88);
  local_80 = FUN_142c2a5a8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfe08,&local_88);
  local_80 = FUN_142c2a7e8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfe18,&local_88);
  local_80 = FUN_142c2aa28;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfe28,&local_88);
  local_80 = FUN_142c2ac68;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfe38,&local_88);
  local_80 = FUN_142c2aea8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9cfe48,&local_88);
  local_78 = 0;
  local_68 = &PTR_LAB_14a222190;
  local_60 = FUN_142c2f54d;
  local_88 = &LAB_140a4a3d0;
  FUN_145c81760(&local_88);
  atexit(FUN_142c2f9b2);
  local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9cfe58,L"r.GPUScene.UploadEveryFrame",&local_88,
                L"Whether to upload the entire scene\'s primitive data every frame.  Useful for debugging."
               );
  atexit(FUN_142c2fa04);
  local_88._0_4_ = 0x3e800;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9cfe70,L"r.GPUScene.MaxPooledUploadBufferSize",&local_88,
                L"Maximum size of GPU Scene upload buffer size to pool.");
  atexit(FUN_142c2fa49);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9cfe88,L"r.GPUScene.ParallelUpdate",&local_88,&DAT_149dfb77a);
  atexit(FUN_142c2fa8e);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9cfea0,L"r.GPUScene.DebugMode",&local_88,
                L"Debug Rendering Mode:\n0 - (show nothing, decault)\n 1 - Draw All\n 2 - Draw Selected (in the editor)\n 3 - Draw Updated (updated this frame)\nYou can use r.GPUScene.DebugDrawRange to limit the range\n"
               );
  atexit(FUN_142c2fad3);
  local_88._0_4_ = 0xbf800000;
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9cfeb8,L"r.GPUScene.DebugDrawRange",&local_88,
                L"Maximum distance the to draw instance bounds, the default is -1.0 <=> infinite range."
               );
  atexit(FUN_142c2fb18);
  local_88 = (undefined *)((ulonglong)local_88._4_4_ << 0x20);
  local_98 = 0x24;
  FUN_14078dbce(&DAT_14c9cfed0,L"r.GPUScene.UseGrowOnlyAllocationPolicy",&local_88,
                L"Deprecated 5.3. If set to 1 the allocators used for GPU-scene instances and similar will use a grow-only allocation policy to mimic the behavior in 5.2 and earlier.\n  Disabled by default, which means that the buffers can shrink as well as grow."
               );
  atexit(FUN_142c2fb5d);
  local_80 = FUN_145f40cd0;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0000,&local_88);
  local_80 = FUN_1401d0bf6;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0128,&local_88);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d0138,L"r.HairStrands.VelocityThreshold",&DAT_14c76028c,
                L"Threshold value (in pixel) above which a pixel is forced to be resolve with responsive AA (in order to avoid smearing). Default is 3."
               );
  atexit(FUN_142c32932);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d0148,L"r.HairStrands.WriteGBufferData",&DAT_14c760290,
                L"Write hair hair material data into GBuffer before post processing run. 0: no write, 1: dummy write into GBuffer A/B (Normal/ShadingModel), 2: write into GBuffer A/B (Normal/ShadingModel). 2: Write entire GBuffer data. (default 1)."
               );
  atexit(FUN_142c32977);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d0158,L"r.HairStrands.HoldoutMode",&DAT_14c760294,
                L"Change how sample are merged when rendering with holdout.");
  atexit(FUN_142c329bc);
  local_80 = FUN_145f66b66;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0280,&local_88);
  local_80 = FUN_145f286c0;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d03a8,&local_88);
  local_80 = FUN_145ea4f68;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d04d0,&local_88);
  local_80 = FUN_145e80d46;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d05f8,&local_88);
  local_80 = FUN_145eab214;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0720,&local_88);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d0730,L"r.HairStrands.DeepShadow.DebugDOMIndex",&DAT_14c9d0740,
                L"Index of the DOM texture to draw");
  atexit(FUN_142c338d2);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9d0748,L"r.HairStrands.DeepShadow.DebugDOMScale",&DAT_14c760298,
                L"Scaling value for the DeepOpacityMap when drawing the deep shadow stats");
  atexit(FUN_142c33917);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d0758,L"r.HairStrands.PlotBsdf",&DAT_14c9d0768,
                L"Debug view for visualizing hair BSDF.");
  atexit(FUN_142c3395c);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9d0770,L"r.HairStrands.PlotBsdf.Roughness",&DAT_14c76029c,
                L"Change the roughness of the debug BSDF plot.");
  atexit(FUN_142c339a1);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9d0780,L"r.HairStrands.PlotBsdf.BaseColor",&DAT_14c7602a0,
                L"Change the base color / absorption of the debug BSDF plot.");
  atexit(FUN_142c339e6);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9d0790,L"r.HairStrands.PlotBsdf.Exposure",&DAT_14c7602a4,
                L"Change the exposure of the plot.");
  atexit(FUN_142c33a2b);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d07a0,L"r.HairStrands.Voxelization.Virtual.DebugTraversalType",
                &DAT_14c9d07b0,L"Traversal mode (0:linear, 1:mip) for debug voxel visualization.");
  atexit(FUN_142c33a70);
  local_80 = FUN_145f0225c;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d08d0,&local_88);
  local_80 = FUN_145f67160;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d09f8,&local_88);
  local_80 = FUN_145f28cb4;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0b20,&local_88);
  local_80 = FUN_145f0284a;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0c48,&local_88);
  local_80 = FUN_145e5055e;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0d70,&local_88);
  local_80 = FUN_145f67676;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0e98,&local_88);
  local_80 = FUN_145e6e71a;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d0fc0,&local_88);
  local_80 = FUN_145e812b6;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d10e8,&local_88);
  local_80 = FUN_145f412c6;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1210,&local_88);
  local_80 = FUN_145f67c70;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1338,&local_88);
  local_80 = FUN_145f418bc;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1460,&local_88);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d1470,L"r.HairStrands.DeepShadow.Resolution",&DAT_14c7602a8,
                L"Shadow resolution for Deep Opacity Map rendering. (default = 2048)");
  atexit(FUN_142c36b86);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d1480,L"r.HairStrands.DeepShadow.MinResolution",&DAT_14c7602ac,
                L"Minimum shadow resolution for shadow atlas tiles for Deep Opacity Map rendering. (default = 64)"
               );
  atexit(FUN_142c36bcb);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d1490,L"r.HairStrands.DeepShadow.InjectVoxelDepth",&DAT_14c9d14a0,
                L"Inject voxel content to generate the deep shadow map instead of rasterizing groom. This is an experimental path"
               );
  atexit(FUN_142c36c10);
  local_80 = FUN_145f8ff4a;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d15c0,&local_88);
  local_80 = FUN_145f903ac;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d16e8,&local_88);
  local_80 = FUN_145e81826;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1810,&local_88);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d1820,L"r.HairStrands.ScatterSceneLighting",&DAT_14c7602b0,
                L"Enable scene color lighting scattering into hair (valid for short hair only).");
  atexit(FUN_142c38b4e);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d1830,L"r.HairStrands.SkyLighting",&DAT_14c7602b4,
                L"Enable sky lighting on hair.");
  atexit(FUN_142c38b93);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d1840,L"r.HairStrands.SkyAO",&DAT_14c7602b8,L"Enable (sky) AO on hair.");
  atexit(FUN_142c38bd8);
  local_98 = 0;
  FUN_1415c789c(&DAT_14c9d1850,L"r.HairStrands.SkyLighting.ConeAngle",&DAT_14c7602bc,
                L"Cone angle for tracing sky lighting on hair.");
  atexit(FUN_142c38c1d);
  local_98 = 0x60;
  FUN_141471170(&DAT_14c9d1860,L"r.HairStrands.SkyLighting.SampleCount",&DAT_14c7602c0,
                L"Number of samples used for evaluating multiple scattering and visible area (default is set to 16)."
               );
  atexit(FUN_142c38c62);
  local_98 = 0x60;
  FUN_141471170(&DAT_14c9d1870,L"r.HairStrands.SkyAO.SampleCount",&DAT_14c7602c4,
                L"Number of samples used for evaluating hair AO (default is set to 16).");
  atexit(FUN_142c38ca7);
  local_98 = 0x60;
  FUN_1415c789c(&DAT_14c9d1880,L"r.HairStrands.SkyLighting.TransmissionDensityScale",&DAT_14c7602c8,
                L"Density scale for controlling how much sky lighting is transmitted.");
  atexit(FUN_142c38cec);
  local_98 = 0x60;
  FUN_141471170(&DAT_14c9d1890,L"r.HairStrands.SkyLighting.UseViewHairCount",&DAT_14c7602cc,
                L"Use the view hair count texture for estimating background transmitted light (enabled by default)."
               );
  atexit(FUN_142c38d31);
  local_98 = 0x60;
  FUN_1415c789c(&DAT_14c9d18a0,L"r.HairStrands.SkyAO.DistanceThreshold",&DAT_14c7602d0,
                L"Max distance for occlusion search.");
  atexit(FUN_142c38d76);
  local_98 = 0x60;
  FUN_1415c789c(&DAT_14c9d18b0,L"r.HairStrands.SkyLighting.DistanceThreshold",&DAT_14c7602d4,
                L"Max distance for occlusion search.");
  atexit(FUN_142c38dbb);
  local_98 = 0x60;
  FUN_141471170(&DAT_14c9d18c0,L"r.HairStrands.SkyLighting.IntegrationType",&DAT_14c7602d8,
                L"Hair env. lighting integration type (0:Adhoc, 1:Uniform.");
  atexit(FUN_142c38e00);
  local_98 = 0x60;
  FUN_141471170(&DAT_14c9d18d0,L"r.HairStrands.SkyLighting.DebugSample",&DAT_14c9d18e0,
                L"Enable debug view for visualizing sample used for the sky integration");
  atexit(FUN_142c38e45);
  local_98 = 0x60;
  FUN_141471170(&DAT_14c9d18e8,L"r.HairStrands.SkyLighting.ScreenTraceOcclusion",&DAT_14c9d18f8,
                L"Enable screen trace occlusion for during hair env. lighting integration");
  atexit(FUN_142c38e8a);
  local_80 = FUN_145f41eb2;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1a18,&local_88);
  local_80 = FUN_145f424a8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1b40,&local_88);
  local_80 = FUN_145f9080e;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1c68,&local_88);
  local_80 = FUN_145f429ba;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1d90,&local_88);
  local_80 = FUN_145d13b6a;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1eb8,&local_88);
  local_80 = FUN_145f292a8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d1fe0,&local_88);
  local_80 = FUN_145e81d96;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d2108,&local_88);
  local_80 = FUN_145f42fb0;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d2230,&local_88);
  local_80 = FUN_145f434c2;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d2358,&local_88);
  local_88 = &DAT_14a19662d;
  local_80 = (code *)CONCAT35(local_80._5_3_,4);
  FUN_14001a6c0(&local_88,1);
  local_88._0_4_ = 1;
  local_98 = 0x60;
  FUN_14078dbce(&DAT_14c9d2368,L"r.HairStrands.Raytracing",&local_88,
                L"Enable/Disable hair strands raytracing geometry. This is anopt-in option per groom asset/groom instance."
               );
  atexit(FUN_142c3f330);
  local_88._0_4_ = 1;
  local_98 = 0x60;
  FUN_14078dbce(&DAT_14c9d2380,L"r.HairStrands.Strands",&local_88,
                L"Enable/Disable hair strands rendering");
  atexit(FUN_142c3f375);
  local_88._0_4_ = 1;
  local_98 = 0x60;
  FUN_14078dbce(&DAT_14c9d2398,L"r.HairStrands.Cards",&local_88,
                L"Enable/Disable hair cards rendering. This variable needs to be turned on when the engine starts."
               );
  atexit(FUN_142c3f3ba);
  local_88._0_4_ = 1;
  local_98 = 0x60;
  FUN_14078dbce(&DAT_14c9d23b0,L"r.HairStrands.Meshes",&local_88,
                L"Enable/Disable hair meshes rendering. This variable needs to be turned on when the engine starts."
               );
  atexit(FUN_142c3f3ff);
  local_88._0_4_ = 1;
  local_98 = 0x60;
  FUN_14078dbce(&DAT_14c9d23c8,L"r.HairStrands.Binding",&local_88,
                L"Enable/Disable hair binding, i.e., hair attached to skeletal meshes.");
  atexit(FUN_142c3f444);
  local_88._0_4_ = 1;
  local_98 = 0x60;
  FUN_14078dbce(&DAT_14c9d23e0,L"r.HairStrands.Simulation",&local_88,
                L"Enable/disable hair simulation");
  atexit(FUN_142c3f489);
  local_88._0_4_ = 1;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9d23f8,L"r.HairStrands.Shadow.CastShadowWhenNonVisible",&local_88,
                L"Enable shadow casting for hair strands even when culled out from the primary view"
               );
  atexit(FUN_142c3f4ce);
  local_88._0_4_ = 0x44fa0000;
  local_98 = 0x20;
  FUN_140a6b41e(&DAT_14c9d2410,L"r.HairStrands.Visibility.NonVisibleShadowCasting.CullDistance",
                &local_88,
                L"Cull distance at which shadow casting starts to be disabled for non-visible hair strands instances."
               );
  atexit(FUN_142c3f513);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9d2428,L"r.HairStrands.Visibility.NonVisibleShadowCasting.Debug",&local_88,
                L"Enable debug rendering for non-visible hair strands instance, casting shadow.");
  atexit(FUN_142c3f558);
  local_88._0_4_ = 0;
  local_98 = 0x24;
  FUN_14078dbce(&DAT_14c9d2440,L"r.HairStrands.ContinuousDecimationReordering",&local_88,
                L"Enable strand reordering to allow Continuous LOD. Experimental");
  atexit(FUN_142c3f59d);
  local_88._0_4_ = 0;
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9d2458,L"r.HairStrands.Visibility.ComputeRaster",&local_88,
                L"Hair Visiblity uses raster compute. Experimental");
  atexit(FUN_142c3f5e2);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
  local_98 = 0x20;
  FUN_14078dbce(&DAT_14c9d2470,L"r.HairStrands.Visibility.ComputeRaster.ContinuousLOD",&local_88,
                L"Enable Continuos LOD when using compute rasterization. Experimental");
  atexit(FUN_142c3f627);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d24b0,L"r.HairStrands.HairLUT.IncidentAngleCount",&DAT_14c7602dc,
                L"Change the number of slices of the hair LUT for the incident angle axis");
  atexit(FUN_142c3f803);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d24c0,L"r.HairStrands.HairLUT.RoughnessCount",&DAT_14c7602e0,
                L"Change the number of slices of the hair LUT for the roughness axis");
  atexit(FUN_142c3f848);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d24d0,L"r.HairStrands.HairLUT.AbsorptionCount",&DAT_14c7602e4,
                L"Change the number of slices of the hair LUT for the absorption axis");
  atexit(FUN_142c3f88d);
  local_98 = 0;
  FUN_141471170(&DAT_14c9d24e0,L"r.HairStrands.HairLUT.SampleCountScale",&DAT_14c7602e8,
                L"Change the number of sample used for computing the hair LUT. This is a multiplier, default is 1."
               );
  atexit(FUN_142c3f8d2);
  local_80 = FUN_145dcead4;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d2608,&local_88);
  local_80 = FUN_145e50ac8;
  local_88 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9d2730,&local_88);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c58178 FUN_142c58178 body=69 status=ok
// SIG undefined FUN_142c58178(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c58178(void)

{
  _DAT_14c9d5888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c581ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d5890,1);
  return;
}



// FUNCTION 142c581c9 FUN_142c581c9 body=5094 status=ok
// SIG undefined FUN_142c581c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c581c9(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,byte param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  DWORD DVar13;
  DWORD DVar14;
  ulonglong uVar15;
  undefined1 **ppuVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong *plVar31;
  ulonglong uVar32;
  longlong *plVar33;
  longlong *plVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  longlong *plVar39;
  longlong lVar40;
  longlong *plVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_4c8 [32];
  undefined1 **local_4a8;
  undefined1 local_4a0;
  longlong local_498;
  longlong *local_490;
  longlong local_488;
  undefined8 *local_480;
  longlong local_478;
  int local_46c;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  undefined8 *local_450;
  undefined8 *local_448;
  longlong local_440;
  longlong *local_438;
  undefined8 uStack_430;
  longlong local_428;
  undefined4 *local_420;
  undefined4 *local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined1 local_405;
  undefined1 *local_404;
  undefined4 local_3fc;
  undefined8 local_3f8;
  longlong *plStack_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  undefined1 local_3c8;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  iVar35 = *(int *)(param_3 + 0x3d38);
  bVar42 = true;
  if (iVar35 == 0) {
    bVar42 = *(int *)(param_2 + 0x38b8) != 0;
  }
  if (((bVar42) && (*(longlong *)(param_3 + 8) != 0)) && (*(char *)(param_3 + 0x23eb) == '\0')) {
    local_428 = param_5 + 0x170;
    local_418 = &local_40c;
    local_40c = 0;
    local_420 = &local_410;
    local_410 = 0;
    local_438 = (longlong *)0x0;
    uStack_430 = 0;
    local_498 = param_1;
    local_488 = param_3;
    local_478 = param_2;
    if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar35);
    }
    if (iVar35 != 0) {
      FUN_142c79814(&local_438);
      if ((longlong)*(int *)(local_488 + 0x3d38) != 0) {
        plVar21 = *(longlong **)(local_488 + 0x3d30);
        lVar29 = (longlong)*(int *)(local_488 + 0x3d38) * 0x18;
        do {
          cVar10 = FUN_14716dc0f(*plVar21);
          if (cVar10 != '\0') {
            lVar24 = *(longlong *)(*plVar21 + 0xa8);
            if (lVar24 == 0) {
              lVar24 = *plVar21;
            }
            lVar24 = *(longlong *)(lVar24 + 0x40);
            if (lVar24 != 0) {
              lVar40 = (longlong)(int)uStack_430;
              uVar11 = (int)uStack_430 + 1;
              uStack_430 = CONCAT44(uStack_430._4_4_,uVar11);
              if (uStack_430._4_4_ < uVar11) {
                FUN_142c798dc(&local_438);
              }
              local_438[lVar40 * 2] = (longlong)plVar21;
              local_438[lVar40 * 2 + 1] = lVar24;
            }
          }
          plVar21 = plVar21 + 3;
          lVar29 = lVar29 + -0x18;
        } while (lVar29 != 0);
      }
      plVar21 = local_438;
      iVar35 = (int)uStack_430;
      lVar29 = (longlong)(int)uStack_430;
      if (1 < lVar29) {
        memset(&local_3e8,0,0x2f0);
        local_3f8 = plVar21;
        plStack_3f0 = plVar21 + lVar29 * 2 + -2;
        fVar43 = logf((float)iVar35);
        local_3e8 = (double)CONCAT44(local_3e8._4_4_,(int)(longlong)(fVar43 + fVar43));
        plVar21 = &local_3f8;
        do {
          plVar30 = (longlong *)*plVar21;
          plVar28 = (longlong *)plVar21[1];
          iVar35 = (int)plVar21[2];
          iVar38 = (int)((ulonglong)((longlong)plVar28 - (longlong)plVar30) >> 4);
          uVar11 = iVar38 + 1;
          plVar31 = plVar30;
          plVar33 = plVar28;
          if (iVar35 != 0) {
LAB_142c58425:
            if (8 < (int)uVar11) {
              lVar29 = plVar31[(ulonglong)(uVar11 >> 1) * 2];
              lVar24 = (plVar31 + (ulonglong)(uVar11 >> 1) * 2)[1];
              lVar40 = plVar31[1];
              plVar31[(ulonglong)(uVar11 >> 1) * 2] = *plVar31;
              (plVar31 + (ulonglong)(uVar11 >> 1) * 2)[1] = lVar40;
              *plVar31 = lVar29;
              plVar31[1] = lVar24;
              plVar39 = plVar33 + 2;
              plVar22 = plVar31;
              do {
                plVar9 = plVar22 + 2;
                plVar34 = plVar22 + 2;
                do {
                  plVar22 = plVar34;
                  plVar23 = plVar9;
                  if (plVar33 < plVar22) break;
                  plVar9 = plVar23 + 2;
                  plVar34 = plVar22 + 2;
                } while (*(int *)(*(longlong *)plVar22[1] + 0x10) <=
                         *(int *)(*(longlong *)plVar31[1] + 0x10));
                plVar9 = plVar39 + -4;
                do {
                  plVar34 = plVar39;
                  plVar41 = plVar9;
                  plVar39 = plVar34 + -2;
                  if (plVar39 <= plVar31) break;
                  plVar9 = plVar41 + -2;
                } while (*(int *)(*(longlong *)plVar31[1] + 0x10) <=
                         *(int *)(*(longlong *)plVar34[-1] + 0x10));
                if (plVar39 < plVar22) goto LAB_142c584f0;
                lVar29 = *plVar22;
                lVar24 = plVar22[1];
                lVar40 = plVar34[-1];
                *plVar22 = *plVar39;
                plVar22[1] = lVar40;
                *plVar39 = lVar29;
                plVar34[-1] = lVar24;
              } while( true );
            }
            for (; plVar28 = plVar31, plVar30 = plVar31, plVar31 < plVar33; plVar33 = plVar33 + -2)
            {
              while (plVar39 = plVar28, plVar30 = plVar30 + 2, plVar30 <= plVar33) {
                plVar28 = plVar30;
                if (*(int *)(*(longlong *)plVar30[1] + 0x10) <=
                    *(int *)(*(longlong *)plVar39[1] + 0x10)) {
                  plVar28 = plVar39;
                }
              }
              local_f8 = *plVar39;
              uStack_f0 = plVar39[1];
              lVar24 = local_f8;
              uVar15 = uStack_f0;
              lVar29 = plVar33[1];
              *plVar39 = *plVar33;
              plVar39[1] = lVar29;
              local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
              uStack_f0._4_4_ = (uint)(uStack_f0 >> 0x20);
              *(undefined4 *)plVar33 = (undefined4)local_f8;
              *(undefined4 *)((longlong)plVar33 + 4) = local_f8._4_4_;
              *(int *)(plVar33 + 1) = (int)uStack_f0;
              *(uint *)((longlong)plVar33 + 0xc) = uStack_f0._4_4_;
              local_f8 = lVar24;
              uStack_f0 = uVar15;
            }
            goto LAB_142c58801;
          }
LAB_142c5859a:
          if (uVar11 != 0) {
            iVar35 = (iVar38 - (iVar38 + -1 >> 0x1f)) + -1 >> 1;
            iVar38 = iVar35;
joined_r0x000142c585c1:
            do {
              iVar37 = iVar35 * 2 + 1;
              if (iVar37 < (int)uVar11) {
                iVar36 = iVar35 * 2 + 2;
                if ((iVar36 < (int)uVar11) &&
                   (*(int *)(*(longlong *)plVar31[(longlong)iVar37 * 2 + 1] + 0x10) <=
                    *(int *)(*(longlong *)plVar31[(longlong)iVar36 * 2 + 1] + 0x10))) {
                  iVar37 = iVar36;
                }
                if (*(int *)(*(longlong *)plVar31[(longlong)iVar35 * 2 + 1] + 0x10) <
                    *(int *)(*(longlong *)plVar31[(longlong)iVar37 * 2 + 1] + 0x10)) {
                  plVar33 = plVar31 + (longlong)iVar35 * 2;
                  plVar30 = plVar31 + (longlong)iVar37 * 2;
                  local_f8 = *plVar33;
                  uStack_f0 = plVar33[1];
                  lVar24 = local_f8;
                  uVar15 = uStack_f0;
                  lVar29 = plVar30[1];
                  *plVar33 = *plVar30;
                  plVar33[1] = lVar29;
                  local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
                  uStack_f0._4_4_ = (uint)(uStack_f0 >> 0x20);
                  *(undefined4 *)plVar30 = (undefined4)local_f8;
                  *(undefined4 *)((longlong)plVar30 + 4) = local_f8._4_4_;
                  *(int *)(plVar30 + 1) = (int)uStack_f0;
                  *(uint *)((longlong)plVar30 + 0xc) = uStack_f0._4_4_;
                  local_f8 = lVar24;
                  uStack_f0 = uVar15;
                  iVar35 = iVar37;
                  goto joined_r0x000142c585c1;
                }
              }
              bVar42 = iVar38 != 0;
              iVar35 = iVar38 + -1;
              iVar38 = iVar35;
            } while (bVar42);
            if (1 < (int)uVar11) {
              uVar32 = (ulonglong)uVar11 - 1;
              local_f8 = *plVar31;
              uStack_f0 = plVar31[1];
              lVar24 = local_f8;
              uVar15 = uStack_f0;
              lVar29 = (plVar31 + uVar32 * 2)[1];
              *plVar31 = plVar31[uVar32 * 2];
              plVar31[1] = lVar29;
              local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
              uStack_f0._4_4_ = (uint)(uStack_f0 >> 0x20);
              plVar33 = plVar31 + uVar32 * 2;
              *(undefined4 *)plVar33 = (undefined4)local_f8;
              *(undefined4 *)((longlong)plVar33 + 4) = local_f8._4_4_;
              *(int *)(plVar33 + 1) = (int)uStack_f0;
              *(uint *)((longlong)plVar33 + 0xc) = uStack_f0._4_4_;
              local_f8 = lVar24;
              uStack_f0 = uVar15;
              if (uVar11 != 2) {
                do {
                  iVar35 = 0;
                  iVar37 = 1;
                  iVar38 = 0;
                  do {
                    iVar35 = iVar35 + 2;
                    iVar36 = iVar37;
                    if (((longlong)iVar35 < (longlong)uVar32) &&
                       (*(int *)(*(longlong *)plVar31[(longlong)iVar37 * 2 + 1] + 0x10) <=
                        *(int *)(*(longlong *)plVar31[(longlong)iVar35 * 2 + 1] + 0x10))) {
                      iVar36 = iVar35;
                    }
                    if (*(int *)(*(longlong *)plVar31[(longlong)iVar36 * 2 + 1] + 0x10) <=
                        *(int *)(*(longlong *)plVar31[(longlong)iVar38 * 2 + 1] + 0x10)) break;
                    plVar33 = plVar31 + (longlong)iVar38 * 2;
                    plVar30 = plVar31 + (longlong)iVar36 * 2;
                    lVar29 = *plVar33;
                    lVar24 = plVar33[1];
                    lVar40 = plVar30[1];
                    *plVar33 = *plVar30;
                    plVar33[1] = lVar40;
                    *plVar30 = lVar29;
                    plVar30[1] = lVar24;
                    iVar35 = iVar36 * 2;
                    iVar37 = iVar36 * 2 + 1;
                    iVar38 = iVar36;
                  } while ((longlong)iVar37 < (longlong)uVar32);
                  uVar15 = uVar32 - 1;
                  local_f8 = *plVar31;
                  uStack_f0 = plVar31[1];
                  lVar24 = local_f8;
                  uVar8 = uStack_f0;
                  lVar29 = (plVar31 + uVar15 * 2)[1];
                  *plVar31 = plVar31[uVar15 * 2];
                  plVar31[1] = lVar29;
                  local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
                  uStack_f0._4_4_ = (uint)(uStack_f0 >> 0x20);
                  plVar33 = plVar31 + uVar15 * 2;
                  *(undefined4 *)plVar33 = (undefined4)local_f8;
                  *(undefined4 *)((longlong)plVar33 + 4) = local_f8._4_4_;
                  *(int *)(plVar33 + 1) = (int)uStack_f0;
                  *(uint *)((longlong)plVar33 + 0xc) = uStack_f0._4_4_;
                  bVar42 = 2 < uVar32;
                  uVar32 = uVar15;
                  local_f8 = lVar24;
                  uStack_f0 = uVar8;
                } while (bVar42);
              }
            }
          }
LAB_142c58801:
          plVar21 = plVar21 + -3;
        } while (&local_3f8 <= plVar21);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9d59f8) && (FUN_144b3d300(&DAT_14c9d59f8), DAT_14c9d59f8 == -1)) {
      _DAT_14c9d59e0 = 0;
      uRam000000014c9d59e8 = 0;
      _DAT_14c9d59d0 = 0;
      uRam000000014c9d59d8 = 0;
      _DAT_14c9d59c0 = 0;
      uRam000000014c9d59c8 = 0;
      _DAT_14c9d59f0 = 0;
      _Init_thread_footer(&DAT_14c9d59f8);
    }
    if ((longlong)(int)uStack_430 != 0) {
      plVar33 = local_438 + (longlong)(int)uStack_430 * 2;
      plVar21 = local_438;
      do {
        local_4a8 = (undefined1 **)&DAT_14c9d59c0;
        FUN_142c595b0(&local_428,plVar21[1],*(undefined8 *)*plVar21,((undefined8 *)*plVar21)[1]);
        plVar21 = plVar21 + 2;
      } while (plVar21 != plVar33);
    }
    lVar29 = DAT_14c9d2408;
    iVar35 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar35 == 0x40000002) {
      uVar15 = 0;
    }
    else {
      bVar42 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar35 != 2)) {
        if (iVar35 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar42 = DVar13 == DVar14;
        }
        else {
          bVar42 = false;
        }
      }
      uVar15 = (ulonglong)(bVar42 ^ 1);
    }
    if ((0 < *(int *)(lVar29 + uVar15 * 4)) &&
       (iVar35 = *(int *)(local_478 + 0x38b8), (longlong)iVar35 != 0)) {
      lVar29 = *(longlong *)(local_478 + 0x38b0);
      lVar24 = 0;
      do {
        plVar21 = *(longlong **)(lVar29 + lVar24);
        if (plVar21 != (longlong *)0x0) {
          iVar38 = (int)plVar21[2];
          if (((-1 < (longlong)iVar38) && (iVar38 < (int)param_4[1])) &&
             (*(char *)(*param_4 + (longlong)iVar38) == '\x02')) {
            ppuVar16 = (undefined1 **)(**(code **)(*plVar21 + 8))(plVar21);
            uVar17 = (**(code **)(*plVar21 + 0x18))(plVar21);
            local_4a8 = ppuVar16;
            FUN_142c595b0(&local_428,uVar17,0,0);
          }
        }
        lVar24 = lVar24 + 8;
      } while ((longlong)iVar35 * 8 != lVar24);
    }
    iVar35 = *(int *)(param_5 + 0x178);
    if ((longlong)iVar35 != 0) {
      lVar29 = *(longlong *)(param_5 + 0x170);
      lVar24 = 0;
      do {
        local_3e8 = *(double *)(lVar29 + 0x30 + lVar24);
        dVar1 = *(double *)(lVar29 + 0x48 + lVar24);
        local_3d0 = local_3e8 + dVar1;
        dVar2 = *(double *)(lVar29 + 0x20 + lVar24);
        dVar3 = *(double *)(lVar29 + 0x28 + lVar24);
        dVar4 = *(double *)(lVar29 + 0x40 + lVar24);
        local_3d8 = dVar3 + dVar4;
        dVar5 = *(double *)(lVar29 + 0x38 + lVar24);
        local_3e0 = dVar2 + dVar5;
        local_3e8 = local_3e8 - dVar1;
        plStack_3f0 = (longlong *)(dVar3 - dVar4);
        local_3f8 = (longlong *)(dVar2 - dVar5);
        local_3c8 = 1;
        FUN_14717cf08(&local_f8);
        *(longlong *)(lVar29 + 0x58 + lVar24) = local_f8;
        *(ulonglong *)(lVar29 + 0x60 + lVar24) = uStack_f0;
        lVar24 = lVar24 + 0x78;
      } while ((longlong)iVar35 * 0x78 - lVar24 != 0);
      uVar11 = *(uint *)(param_5 + 0x178);
      if ((uVar11 != 0 & param_6) != 0) {
        uVar7 = uVar11 * 6;
        uVar20 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar20 = DAT_14ca84e48;
        }
        plStack_3f0 = (longlong *)CONCAT44(plStack_3f0._4_4_,0x4109);
        local_3e8 = 0.0;
        uVar6 = DAT_14ca84e48;
        if (uVar7 < DAT_14ca84e48) {
          uVar6 = uVar7;
        }
        local_3f8 = (longlong *)CONCAT44(uVar6 + (uVar6 == 0),uVar20 + (uVar20 == 0));
        plVar21 = (longlong *)(local_498 + 0x70);
        uVar32 = *(longlong *)(local_498 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar15 = uVar32 + 0x150;
        local_490 = plVar21;
        if (*(ulonglong *)(local_498 + 0x78) < uVar15) {
          FUN_140023dd8(plVar21,0x160);
          uVar32 = *plVar21 + 0xfU & 0xfffffffffffffff0;
          uVar15 = uVar32 + 0x150;
        }
        lVar29 = local_498 + 0x188;
        *(ulonglong *)(local_498 + 0x70) = uVar15;
        FUN_1456bd266(uVar32,L"Hair.MacroGroupAABBBuffer",&local_3f8,0);
        iVar35 = *(int *)(local_498 + 400);
        *(uint *)(local_498 + 400) = iVar35 + 1U;
        if (*(uint *)(local_498 + 0x194) < iVar35 + 1U) {
          FUN_144737178(lVar29,iVar35);
        }
        plVar21 = local_490;
        *(ulonglong *)(*(longlong *)(local_498 + 0x188) + (longlong)iVar35 * 8) = uVar32;
        *(int *)(uVar32 + 0x7c) = *(int *)(local_498 + 400) + -1;
        *(ulonglong *)(param_5 + 0x2d8) = uVar32;
        uVar20 = 4;
        if (DAT_14ca84e48 < 4) {
          uVar20 = DAT_14ca84e48;
        }
        plStack_3f0 = (longlong *)CONCAT44(plStack_3f0._4_4_,0x4109);
        uVar6 = DAT_14ca84e48;
        if (uVar7 < DAT_14ca84e48) {
          uVar6 = uVar7;
        }
        local_3e8 = 0.0;
        local_3f8 = (longlong *)CONCAT44(uVar6 + (uVar6 == 0),uVar20 + (uVar20 == 0));
        uVar32 = *(longlong *)(local_498 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar15 = uVar32 + 0x150;
        if (*(ulonglong *)(local_498 + 0x78) < uVar15) {
          FUN_140023dd8(local_490,0x160);
          uVar32 = *plVar21 + 0xfU & 0xfffffffffffffff0;
          uVar15 = uVar32 + 0x150;
        }
        *(ulonglong *)(local_498 + 0x70) = uVar15;
        FUN_1456bd266(uVar32,L"Hair.MacroGroupVoxelAlignedAABBBuffer",&local_3f8,0);
        iVar35 = *(int *)(local_498 + 400);
        *(uint *)(local_498 + 400) = iVar35 + 1U;
        if (*(uint *)(local_498 + 0x194) < iVar35 + 1U) {
          FUN_144737178(lVar29,iVar35);
        }
        plVar21 = local_490;
        *(ulonglong *)(*(longlong *)(local_498 + 0x188) + (longlong)iVar35 * 8) = uVar32;
        *(int *)(uVar32 + 0x7c) = *(int *)(local_498 + 400) + -1;
        *(ulonglong *)(param_5 + 0x2e0) = uVar32;
        plStack_3f0 = (longlong *)CONCAT44(plStack_3f0._4_4_,0x4109);
        uVar7 = DAT_14ca84e48;
        if (uVar11 < DAT_14ca84e48) {
          uVar7 = uVar11;
        }
        local_3e8 = 0.0;
        local_3f8 = (longlong *)CONCAT44(uVar7 + (uVar7 == 0),2 - (uint)(DAT_14ca84e48 < 2));
        uVar32 = *(longlong *)(local_498 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar15 = uVar32 + 0x150;
        if (*(ulonglong *)(local_498 + 0x78) < uVar15) {
          FUN_140023dd8(local_490,0x160);
          uVar32 = *plVar21 + 0xfU & 0xfffffffffffffff0;
          uVar15 = uVar32 + 0x150;
        }
        *(ulonglong *)(local_498 + 0x70) = uVar15;
        FUN_1456bd266(uVar32,L"Hair.MacroGroupVoxelSize",&local_3f8,0);
        iVar35 = *(int *)(local_498 + 400);
        uVar11 = iVar35 + 1;
        *(uint *)(local_498 + 400) = uVar11;
        if (*(uint *)(local_498 + 0x194) < uVar11) {
          FUN_144737178(lVar29);
        }
        plVar21 = local_490;
        *(ulonglong *)(*(longlong *)(local_498 + 0x188) + (longlong)iVar35 * 8) = uVar32;
        *(int *)(uVar32 + 0x7c) = *(int *)(local_498 + 400) + -1;
        *(ulonglong *)(param_5 + 0x2e8) = uVar32;
        lVar29 = *(longlong *)(param_5 + 0x2d8);
        puVar27 = (undefined8 *)(*(longlong *)(local_498 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar19 = puVar27 + 8;
        if (*(undefined8 **)(local_498 + 0x78) < puVar19) {
          FUN_140023dd8(local_490);
          puVar27 = (undefined8 *)(*plVar21 + 7U & 0xfffffffffffffff8);
          puVar19 = puVar27 + 8;
        }
        lVar24 = local_498 + 0x198;
        *(undefined8 **)(local_498 + 0x70) = puVar19;
        puVar27[1] = *(undefined8 *)(lVar29 + 8);
        puVar27[2] = 0;
        *(undefined1 *)(puVar27 + 3) = 2;
        *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar27 + 5) = 1;
        *puVar27 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar27 + 6) = 0x1d;
        *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
        puVar27[7] = lVar29;
        iVar35 = *(int *)(local_498 + 0x1a0);
        uVar11 = iVar35 + 1;
        *(uint *)(local_498 + 0x1a0) = uVar11;
        if (*(uint *)(local_498 + 0x1a4) < uVar11) {
          FUN_1447568fc(lVar24);
        }
        plVar21 = local_490;
        *(undefined8 **)(*(longlong *)(local_498 + 0x198) + (longlong)iVar35 * 8) = puVar27;
        *(int *)((longlong)puVar27 + 0x1c) = *(int *)(local_498 + 0x1a0) + -1;
        lVar29 = *(longlong *)(param_5 + 0x2e8);
        puVar25 = (undefined8 *)(*(longlong *)(local_498 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar19 = puVar25 + 8;
        if (*(undefined8 **)(local_498 + 0x78) < puVar19) {
          FUN_140023dd8(local_490);
          puVar25 = (undefined8 *)(*plVar21 + 7U & 0xfffffffffffffff8);
          puVar19 = puVar25 + 8;
        }
        *(undefined8 **)(local_498 + 0x70) = puVar19;
        puVar25[1] = *(undefined8 *)(lVar29 + 8);
        puVar25[2] = 0;
        *(undefined1 *)(puVar25 + 3) = 2;
        *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar25 + 5) = 1;
        *puVar25 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar25 + 6) = 0x15;
        *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
        puVar25[7] = lVar29;
        iVar35 = *(int *)(local_498 + 0x1a0);
        uVar11 = iVar35 + 1;
        *(uint *)(local_498 + 0x1a0) = uVar11;
        if (*(uint *)(local_498 + 0x1a4) < uVar11) {
          FUN_1447568fc(lVar24);
        }
        *(undefined8 **)(*(longlong *)(local_498 + 0x198) + (longlong)iVar35 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x1c) = *(int *)(local_498 + 0x1a0) + -1;
        if ((longlong)*(int *)(param_5 + 0x178) == 0) {
          uVar12 = 0;
        }
        else {
          lVar29 = *(longlong *)(param_5 + 0x170);
          lVar18 = (longlong)*(int *)(param_5 + 0x178) * 0x78 + lVar29;
          local_460 = local_498 + 0x98;
          lVar40 = local_488;
          local_468 = lVar24;
          local_458 = lVar18;
          local_450 = puVar25;
          local_448 = puVar27;
          do {
            iVar35 = *(int *)(lVar29 + 0x18);
            if (iVar35 != 0) {
              local_440 = *(longlong *)(local_478 + 0x38c0);
              if (1.0 < *(double *)(lVar40 + 0x8a8) || *(double *)(lVar40 + 0x8a8) == 1.0) {
                fVar43 = (float)(*(int *)(lVar40 + 0x3100) - *(int *)(lVar40 + 0x30f8)) /
                         ((float)*(double *)(lVar40 + 0x930) + (float)*(double *)(lVar40 + 0x930));
                if (1.0 <= fVar43) {
                  fVar43 = 1.0;
                }
                if (fVar43 <= 0.0) {
                  fVar43 = 0.0;
                }
              }
              else {
                iVar35 = *(int *)(lVar40 + 0x3104);
                iVar38 = *(int *)(lVar40 + 0x30fc);
                fVar43 = tanf(*(float *)(lVar40 + 0x1de8) * 0.017453292 * 0.5);
                fVar43 = fVar43 / ((float)(iVar35 - iVar38) * 0.5);
                iVar35 = *(int *)(lVar29 + 0x18);
              }
              iVar38 = DAT_14c7603e4;
              if (0xff < DAT_14c7603e4) {
                iVar38 = 0x100;
              }
              if (iVar38 < 3) {
                iVar38 = 2;
              }
              uVar15 = (ulonglong)(iVar38 - 1) * 2 + 1;
              lVar24 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_46c = 1 << ((byte)lVar24 & 0x1f);
              local_f8 = 0;
              uStack_f0 = 0;
              if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar35);
              }
              if (iVar35 != 0) {
                FUN_14480809c(&local_f8,iVar35);
                iVar38 = *(int *)(lVar29 + 0x18);
                if ((longlong)iVar38 != 0) {
                  lVar24 = *(longlong *)(lVar29 + 0x10);
                  lVar40 = 0;
                  do {
                    uVar15 = uStack_f0;
                    uVar12 = *(undefined4 *)(**(longlong **)(lVar24 + 0x20 + lVar40) + 0x10);
                    lVar18 = (longlong)(int)uStack_f0;
                    uVar11 = (int)uStack_f0 + 1;
                    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar11);
                    if (uStack_f0._4_4_ < uVar11) {
                      FUN_1447808da(&local_f8,uVar15 & 0xffffffff);
                    }
                    *(undefined4 *)(local_f8 + lVar18 * 4) = uVar12;
                    lVar40 = lVar40 + 0x28;
                  } while ((longlong)iVar38 * 0x28 != lVar40);
                }
              }
              lVar24 = local_498;
              local_4a8 = (undefined1 **)(ulonglong)(uint)((int)uStack_f0 * 4);
              local_3e8 = 0.0;
              plStack_3f0 = (longlong *)CONCAT44(plStack_3f0._4_4_,0x4109);
              local_3f8 = (longlong *)CONCAT44((int)uStack_f0,4);
              local_4a0 = 0;
              local_480 = (undefined8 *)
                          FUN_1400489e9(local_498,L"Hair.RegisteredIndexBuffer",&local_3f8,local_f8)
              ;
              plVar21 = local_490;
              fVar44 = (float)_DAT_14c7602ec;
              if (50.0 <= fVar44) {
                fVar44 = 50.0;
              }
              if (fVar44 <= 1.0) {
                fVar44 = 1.0;
              }
              puVar27 = (undefined8 *)(*(longlong *)(lVar24 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar19 = puVar27 + 0xc;
              if (*(undefined8 **)(lVar24 + 0x78) < puVar19) {
                FUN_140023dd8(local_490,0x70);
                puVar27 = (undefined8 *)(*plVar21 + 0xfU & 0xfffffffffffffff0);
                puVar19 = puVar27 + 0xc;
                lVar24 = local_498;
              }
              puVar25 = local_448;
              lVar40 = local_488;
              *(undefined8 **)(lVar24 + 0x70) = puVar19;
              *puVar27 = &PTR_FUN_14a22a088;
              puVar27[10] = 0;
              puVar27[5] = 0;
              puVar27[6] = 0;
              puVar27[7] = 0;
              puVar27[8] = 0;
              *(undefined1 *)(puVar27 + 0xb) = 1;
              iVar38 = *(int *)(lVar24 + 0xa0);
              *(uint *)(lVar24 + 0xa0) = iVar38 + 1U;
              if (*(uint *)(lVar24 + 0xa4) < iVar38 + 1U) {
                FUN_1448cfae8(local_460,iVar38);
                lVar24 = local_498;
              }
              plVar21 = local_490;
              *(undefined8 **)(*(longlong *)(lVar24 + 0x98) + (longlong)iVar38 * 8) = puVar27;
              *(undefined4 *)((longlong)puVar27 + 0x14) = *(undefined4 *)(lVar29 + 0x68);
              puVar26 = (undefined8 *)(*(longlong *)(lVar24 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar19 = puVar26 + 9;
              if (*(undefined8 **)(lVar24 + 0x78) < puVar19) {
                FUN_140023dd8(local_490,0x50);
                puVar26 = (undefined8 *)(*plVar21 + 7U & 0xfffffffffffffff8);
                puVar19 = puVar26 + 9;
                lVar24 = local_498;
              }
              *(undefined8 **)(lVar24 + 0x70) = puVar19;
              puVar26[1] = *(undefined8 *)((longlong)local_480 + 8);
              puVar26[2] = 0;
              *(undefined1 *)(puVar26 + 3) = 3;
              *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
              *puVar26 = &PTR_FUN_14a1fb168;
              *(undefined1 *)(puVar26 + 5) = 0x1c;
              *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
              puVar26[7] = 0;
              puVar26[8] = local_480;
              iVar38 = *(int *)(lVar24 + 0x1a0);
              *(uint *)(lVar24 + 0x1a0) = iVar38 + 1U;
              if (*(uint *)(lVar24 + 0x1a4) < iVar38 + 1U) {
                FUN_1447568fc(local_468,iVar38);
                lVar24 = local_498;
              }
              local_480 = puVar27 + 2;
              *(undefined8 **)(*(longlong *)(lVar24 + 0x198) + (longlong)iVar38 * 8) = puVar26;
              *(int *)((longlong)puVar26 + 0x1c) = *(int *)(lVar24 + 0x1a0) + -1;
              puVar27[5] = puVar26;
              puVar27[6] = *(undefined8 *)(local_440 + 0x28);
              puVar27[7] = puVar25;
              puVar27[8] = local_450;
              *(float *)((longlong)puVar27 + 0x1c) = fVar43;
              *(float *)(puVar27 + 4) = fVar44;
              *(int *)((longlong)puVar27 + 0x24) = local_46c;
              lVar18 = FUN_1447e4f80();
              cVar10 = *(char *)(lVar18 + 0x41);
              if (*(char *)(lVar18 + 0x41) == '\x03') {
                cVar10 = '\x02';
              }
              puVar27[10] = *(undefined8 *)(lVar40 + 0x18);
              *(char *)(puVar27 + 0xb) = cVar10;
              *(int *)(puVar27 + 3) = iVar35;
              *(uint *)(puVar27 + 2) = iVar35 + 0x1fU >> 5;
              uVar17 = *(undefined8 *)(lVar40 + 0x13818);
              FUN_145e51032();
              FUN_1448e935e(uVar17,&local_3f8,&DAT_14c9d5900,0);
              FUN_145e51032();
              local_404 = &DAT_100000001;
              local_3fc = 1;
              local_4a8 = &local_404;
              FUN_147186331(lVar24,&local_405,&local_3f8,local_480);
              lVar18 = local_458;
              if (local_f8 != 0) {
                FUN_1400020a8();
                lVar18 = local_458;
              }
            }
            lVar29 = lVar29 + 0x78;
          } while (lVar29 != lVar18);
          uVar12 = *(undefined4 *)(param_5 + 0x178);
        }
        *(undefined4 *)(param_5 + 0x2d0) = uVar12;
      }
    }
    *(undefined4 *)(param_5 + 0x560) = 0;
    iVar35 = *(int *)(local_488 + 0x11b78);
    if ((longlong)iVar35 != 0) {
      lVar29 = *(longlong *)(local_488 + 0x11b70);
      lVar24 = 0;
      uVar11 = 0;
      do {
        uVar11 = uVar11 | *(uint *)(lVar29 + 0x6c + lVar24);
        *(uint *)(param_5 + 0x560) = uVar11;
        lVar24 = lVar24 + 0x78;
      } while ((longlong)iVar35 * 0x78 - lVar24 != 0);
    }
    if (local_438 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142c584f0:
  local_f8 = *plVar31;
  uStack_f0 = plVar31[1];
  lVar24 = local_f8;
  uVar15 = uStack_f0;
  lVar29 = plVar34[-1];
  *plVar31 = *plVar39;
  plVar31[1] = lVar29;
  local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
  uStack_f0._4_4_ = (uint)(uStack_f0 >> 0x20);
  *(undefined4 *)plVar39 = (undefined4)local_f8;
  *(undefined4 *)((longlong)plVar34 + -0xc) = local_f8._4_4_;
  *(int *)(plVar34 + -1) = (int)uStack_f0;
  *(uint *)((longlong)plVar34 + -4) = uStack_f0._4_4_;
  iVar35 = iVar35 + -1;
  plVar34 = plVar34 + -4;
  local_f8 = lVar24;
  uStack_f0 = uVar15;
  if ((longlong)plVar41 - (longlong)plVar30 < (longlong)plVar28 - (longlong)plVar23) {
    if (plVar22 < plVar33) {
      *plVar21 = (longlong)plVar22;
      plVar21[1] = (longlong)plVar33;
      *(int *)(plVar21 + 2) = iVar35;
      plVar21 = plVar21 + 3;
    }
    plVar28 = plVar41;
    plVar30 = plVar31;
    if (plVar39 <= plVar31 + 2) goto LAB_142c58801;
  }
  else {
    if (plVar31 + 2 < plVar39) {
      *plVar21 = (longlong)plVar31;
      plVar21[1] = (longlong)plVar34;
      *(int *)(plVar21 + 2) = iVar35;
      plVar21 = plVar21 + 3;
    }
    plVar31 = plVar22;
    plVar34 = plVar33;
    plVar28 = plVar33;
    plVar30 = plVar23;
    if (plVar33 <= plVar22) goto LAB_142c58801;
  }
  iVar38 = (int)((ulonglong)((longlong)plVar28 - (longlong)plVar30) >> 4);
  uVar11 = iVar38 + 1;
  plVar33 = plVar34;
  if (iVar35 == 0) goto LAB_142c5859a;
  goto LAB_142c58425;
}



// FUNCTION 142c595b0 FUN_142c595b0 body=868 status=ok
// SIG undefined FUN_142c595b0(void)

void FUN_142c595b0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  double *param_5)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  int local_c0;
  undefined5 uStack_bc;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_2 + 0x208) != 0) {
    pdVar4 = (double *)(param_4 + 0x180);
    if (param_4 == 0) {
      pdVar4 = param_5;
    }
    uStack_90 = (double)(*(float *)(param_2 + 0x260) * 0.5);
    local_78 = pdVar4[6] + uStack_90;
    uStack_80 = pdVar4[5] + uStack_90;
    local_88 = pdVar4[4] + uStack_90;
    uStack_90 = uStack_90 + pdVar4[3];
    local_98 = pdVar4[2];
    local_a8 = *pdVar4;
    uStack_a0 = pdVar4[1];
    iVar1 = (int)((longlong *)*param_1)[1];
    local_138 = param_4;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)*param_1;
      pdVar4 = (double *)(lVar2 + 0x20);
      iVar5 = -1;
      fVar8 = 3.4028235e+38;
      lVar6 = 0;
      do {
        fVar9 = (float)SQRT((pdVar4[2] - local_98) * (pdVar4[2] - local_98) +
                            (*pdVar4 - local_a8) * (*pdVar4 - local_a8) +
                            (pdVar4[1] - uStack_a0) * (pdVar4[1] - uStack_a0));
        dVar3 = 0.0;
        if (0.0 <= pdVar4[6] + local_78) {
          dVar3 = pdVar4[6] + local_78;
        }
        if (fVar9 <= (float)dVar3) {
          FUN_147185ed0(&local_128,pdVar4,&local_a8);
          pdVar4[6] = (double)CONCAT44(uStack_f4,local_f8);
          *(undefined4 *)(pdVar4 + 4) = local_108;
          *(undefined4 *)((longlong)pdVar4 + 0x24) = uStack_104;
          *(undefined4 *)(pdVar4 + 5) = uStack_100;
          *(undefined4 *)((longlong)pdVar4 + 0x2c) = uStack_fc;
          *(undefined4 *)(pdVar4 + 2) = (undefined4)local_118;
          *(undefined4 *)((longlong)pdVar4 + 0x14) = local_118._4_4_;
          *(undefined4 *)(pdVar4 + 3) = (undefined4)uStack_110;
          *(undefined4 *)((longlong)pdVar4 + 0x1c) = uStack_110._4_4_;
          *(undefined4 *)pdVar4 = (undefined4)local_128;
          *(undefined4 *)((longlong)pdVar4 + 4) = local_128._4_4_;
          *(undefined4 *)(pdVar4 + 1) = (undefined4)uStack_120;
          *(undefined4 *)((longlong)pdVar4 + 0xc) = uStack_120._4_4_;
          lVar7 = param_1[2];
          lVar6 = -lVar6;
          goto LAB_142c59905;
        }
        fVar9 = fVar9 - (float)dVar3;
        if (fVar9 < fVar8) {
          iVar5 = *(int *)(pdVar4 + 9);
          fVar8 = fVar9;
        }
        pdVar4 = pdVar4 + 0xf;
        lVar6 = lVar6 + -0x78;
      } while ((longlong)iVar1 * -0x78 - lVar6 != 0);
      if (iVar1 == 0x10) {
        lVar6 = (longlong)iVar5 * 0x78;
        lVar7 = lVar2 + lVar6;
        FUN_147185ed0(&local_128,(undefined4 *)(lVar7 + 0x20),&local_a8);
        *(ulonglong *)(lVar7 + 0x50) = CONCAT44(uStack_f4,local_f8);
        *(undefined4 *)(lVar7 + 0x40) = local_108;
        *(undefined4 *)(lVar7 + 0x44) = uStack_104;
        *(undefined4 *)(lVar7 + 0x48) = uStack_100;
        *(undefined4 *)(lVar7 + 0x4c) = uStack_fc;
        *(undefined4 *)(lVar7 + 0x30) = (undefined4)local_118;
        *(undefined4 *)(lVar7 + 0x34) = local_118._4_4_;
        *(undefined4 *)(lVar7 + 0x38) = (undefined4)uStack_110;
        *(undefined4 *)(lVar7 + 0x3c) = uStack_110._4_4_;
        *(undefined4 *)(lVar7 + 0x20) = (undefined4)local_128;
        *(undefined4 *)(lVar7 + 0x24) = local_128._4_4_;
        *(undefined4 *)(lVar7 + 0x28) = (undefined4)uStack_120;
        *(undefined4 *)(lVar7 + 0x2c) = uStack_120._4_4_;
        lVar7 = param_1[2];
LAB_142c59905:
        FUN_142c6f272(lVar2 + lVar6,lVar7,param_2,param_3);
        goto LAB_142c595ef;
      }
    }
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_bc = 0;
    local_c0 = *(int *)param_1[1];
    *(int *)param_1[1] = local_c0 + 1;
    FUN_142c6f272(&local_128,param_1[2],param_2,param_3);
    local_d8 = local_78;
    local_e8 = (undefined4)local_88;
    uStack_e4 = local_88._4_4_;
    uStack_e0 = (undefined4)uStack_80;
    uStack_dc = uStack_80._4_4_;
    local_f8 = (undefined4)local_98;
    uStack_f4 = local_98._4_4_;
    uStack_f0 = (undefined4)uStack_90;
    uStack_ec = uStack_90._4_4_;
    local_108 = (undefined4)local_a8;
    uStack_104 = local_a8._4_4_;
    uStack_100 = (undefined4)uStack_a0;
    uStack_fc = uStack_a0._4_4_;
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_147186286(param_1,iVar1);
    }
    FUN_14718619e((longlong)iVar1 * 0x78 + *param_1,&local_128);
    FUN_142c6f6d0(&local_118);
    FUN_142c6f734(&local_128);
  }
LAB_142c595ef:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c59951 FUN_142c59951 body=1175 status=ok
// SIG undefined FUN_142c59951(void)

void FUN_142c59951(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,char param_5
                  ,undefined8 *param_6,undefined4 *param_7,undefined4 param_8,undefined8 *param_9,
                  longlong *param_10,undefined8 param_11)

{
  uint *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  char cVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_128 [32];
  undefined ***local_108;
  longlong local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  undefined1 local_98;
  char local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar11 = *(longlong *)(param_3 + 0x3110);
  uVar8 = param_7[1];
  uVar9 = param_7[2];
  uVar10 = param_7[3];
  *(undefined4 *)(lVar11 + 0x12c0) = *param_7;
  *(undefined4 *)(lVar11 + 0x12c4) = uVar8;
  *(undefined4 *)(lVar11 + 0x12c8) = uVar9;
  *(undefined4 *)(lVar11 + 0x12cc) = uVar10;
  *(undefined4 *)(*(longlong *)(param_3 + 0x3110) + 0x12d4) = param_8;
  lVar11 = *(longlong *)(param_3 + 0x3110);
  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar11 + 0x658));
  local_d0 = *(undefined ***)(lVar11 + 0x650);
  *(undefined8 *)(lVar11 + 0x650) = *param_9;
  *(undefined4 *)(lVar11 + 0x658) = *(undefined4 *)(param_9 + 1);
  local_100 = param_2;
  local_f8 = param_4;
  FUN_1401ee234(&local_d8,*(undefined8 *)(param_3 + 0x3110),1,1);
  lVar11 = FUN_1447e4f80();
  cVar16 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar16 = *(char *)(lVar11 + 0x41);
  }
  *param_10 = local_d8;
  *(char *)(param_10 + 1) = cVar16;
  if (local_d8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_d8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_d8 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_d8 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = local_d8;
        plVar15 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar15;
            LOCK();
            bVar20 = plVar15 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar20) {
              plVar15 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar20);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar20 = plVar13 != DAT_14ca843c8;
            plVar15 = plVar12;
            if (bVar20) {
              plVar13 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar20);
        }
      }
    }
  }
  lVar11 = *(longlong *)(param_3 + 0x3110);
  *(undefined4 *)(lVar11 + 0x658) = local_c8._0_4_;
  *(undefined ***)(lVar11 + 0x650) = local_d0;
  local_e0 = *param_6;
  local_e8 = param_6[1];
  plVar15 = (longlong *)(param_1 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar17 + 0x32;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(plVar15,0x1a0);
    puVar17 = (undefined8 *)(*plVar15 + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar17 + 0x32;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar14;
  *puVar17 = &PTR_FUN_14a2234e8;
  puVar14 = puVar17 + 2;
  FUN_14717af92(puVar14);
  plVar13 = (longlong *)(param_1 + 0x98);
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(plVar13,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar17;
  local_f0 = puVar14;
  memcpy(puVar14,param_10,0x180);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar19 + 0x44;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(plVar15,0x230);
    puVar19 = (undefined8 *)(*plVar15 + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar19 + 0x44;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar14;
  *puVar19 = &PTR_FUN_14a22d010;
  ppuVar2 = (undefined **)(puVar19 + 2);
  FUN_14008c534(ppuVar2,param_3,param_11,0);
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(plVar13,iVar5);
  }
  *(undefined8 **)(*plVar13 + (longlong)iVar5 * 8) = puVar19;
  local_a0 = puVar19 + 0x3d;
  local_80 = DAT_14c9c0ea0;
  local_88 = DAT_14c9c0d50;
  if ((param_5 != '\0') && (local_80 = DAT_14c9c0d98, local_88 = DAT_14c9dc4c8, param_5 != '\x01'))
  {
    local_80 = 0;
    local_88 = 0;
  }
  local_b0 = *(undefined4 *)(local_100 + 8);
  local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,0xffffffff);
  local_c0 = CONCAT62(local_c0._2_6_,0x3a3a);
  local_b8 = local_100;
  local_98 = 0x3a;
  local_d0 = &PTR_FUN_14a224a00;
  local_90 = param_5;
  local_78 = 0x11;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar11 = local_f8[1];
  local_a8 = param_3;
  if ((longlong)(int)lVar11 != 0) {
    lVar6 = *local_f8;
    lVar18 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar18);
      if (lVar7 != 0) {
        local_108 = (undefined ***)CONCAT44(local_108._4_4_,0xffffffff);
        FUN_14717d504(&local_d0,lVar7,0xffffffffffffffff,*(undefined8 *)(lVar6 + 8 + lVar18));
      }
      lVar18 = lVar18 + 0x28;
    } while ((longlong)(int)lVar11 * 0x28 != lVar18);
  }
  if (local_100 != 0) {
    local_108 = (undefined ***)(puVar17 + 4);
    FUN_1401dddf8(ppuVar2,param_1,param_3,local_100 + 0x3f08);
  }
  puVar14 = local_f0;
  puVar17[4] = 0;
  *(undefined4 *)(puVar17 + 5) = 4;
  local_c8 = local_f0;
  local_c0 = local_e0;
  local_b8 = local_e8;
  local_d0 = ppuVar2;
  FUN_1471964a2();
  local_108 = &local_d0;
  FUN_147196270(param_1,&local_d8,puVar14,1);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c59df5 FUN_142c59df5 body=19513 status=ok
// SIG undefined FUN_142c59df5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c59df5(longlong ******param_1,longlong ***param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  longlong param_9,longlong ******param_10,undefined8 param_11,undefined8 param_12)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong ***ppplVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong **pplVar8;
  longlong *****ppppplVar9;
  longlong *****ppppplVar10;
  undefined1 auVar11 [16];
  unkbyte9 Var12;
  char cVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  DWORD DVar19;
  DWORD DVar20;
  longlong ******pppppplVar21;
  longlong ******pppppplVar22;
  longlong ***ppplVar23;
  longlong *****ppppplVar24;
  longlong *****ppppplVar25;
  undefined8 uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined4 *puVar30;
  longlong ******pppppplVar31;
  longlong ***ppplVar32;
  bool bVar33;
  undefined8 *puVar34;
  longlong ****pppplVar35;
  longlong ****pppplVar36;
  uint uVar37;
  longlong *****ppppplVar38;
  longlong *****ppppplVar39;
  int iVar40;
  longlong ******pppppplVar41;
  longlong ****pppplVar42;
  float fVar43;
  undefined1 auStack_2e8 [32];
  longlong *****local_2c8;
  longlong *****local_2c0;
  longlong *****local_2b8;
  undefined1 local_2b0 [8];
  longlong *****ppppplStack_2a8;
  undefined1 local_2a0 [16];
  longlong *****local_290;
  longlong *****local_288;
  longlong *****local_280;
  longlong local_278;
  char local_269;
  longlong *****local_268;
  longlong *****local_260;
  longlong *****local_258;
  longlong *****local_250;
  longlong *****local_248;
  longlong *****local_240;
  longlong *****local_238;
  longlong *****local_230;
  longlong **local_228;
  longlong *****local_220;
  longlong *****local_218;
  longlong **local_210;
  longlong *****local_208;
  int *local_200;
  longlong **local_1f8;
  longlong *****local_1f0;
  undefined8 local_1e8;
  longlong *****local_1e0;
  undefined8 local_1d8;
  longlong ***local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong *****local_1b8;
  longlong *****ppppplStack_1b0;
  longlong *****local_1a8;
  longlong *****ppppplStack_1a0;
  longlong *****local_198;
  longlong *****local_190;
  undefined8 local_180;
  longlong *****local_170;
  longlong *****local_168;
  longlong ****local_160;
  longlong *****local_158;
  longlong *****local_150;
  longlong *****local_148;
  longlong *****local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined1 local_109;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [13];
  undefined3 uStack_af;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  ulonglong local_70;
  
  lVar7 = param_9;
  local_260 = (longlong *****)param_10;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  ppplVar23 = (longlong ***)(param_3 + 0x11b70);
  FUN_147180620(&local_11c,param_3,param_3 + 0x30f8,ppplVar23);
  lVar29 = DAT_14ca97170;
  if ((local_110 - local_118) * (local_114 - local_11c) < 1) {
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    iStack_d4 = 0;
    local_d0 = 0;
    local_cc = (undefined1  [16])0x0;
    local_bc = SUB1613((undefined1  [16])0x0,0);
    uStack_af = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    *(undefined8 *)(param_3 + 0x11a50) = 0;
    *(undefined1 (*) [16])(param_3 + 0x11a40) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_3 + 0x11a30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_3 + 0x11a20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_3 + 0x11a10) = (undefined1  [16])0x0;
    *(undefined4 *)(param_3 + 0x11a58) = 8;
    *(undefined1 (*) [16])(param_3 + 0x11a5c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_3 + 0x11a6c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_3 + 0x11a7c) = (undefined1  [16])0x0;
    *(undefined8 *)(param_3 + 0x11a8c) = 0;
    puVar34 = &local_f8;
    puVar30 = (undefined4 *)(param_3 + 0x11a94);
    for (lVar29 = 0x14; lVar29 != 0; lVar29 = lVar29 + -1) {
      *puVar30 = *(undefined4 *)puVar34;
      puVar34 = (undefined8 *)((longlong)puVar34 + 4);
      puVar30 = puVar30 + 1;
    }
    *(undefined1 *)(param_3 + 0x11ae4) = 0;
    memset((void *)(param_3 + 0x11ae5),0,0x83);
    goto LAB_142c5a8e0;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar2 + 0xc60);
  local_228 = (longlong **)ppplVar23;
  local_210 = (longlong **)param_2;
  if (((iVar16 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar16 == 2)) {
    uVar28 = 0;
  }
  else if (iVar16 == 1) {
    DVar19 = FUN_140ad26c0();
    DVar20 = GetCurrentThreadId();
    uVar28 = (ulonglong)(DVar19 != DVar20);
  }
  else {
    uVar28 = 1;
  }
  if (0 < *(int *)(lVar29 + uVar28 * 4)) {
    param_5 = *(longlong *)(*(longlong *)(param_3 + 0x118c8) + 0x38);
    param_6 = *(longlong *)(*(longlong *)(param_3 + 0x118c8) + 0x58);
    param_4 = 0;
  }
  local_200 = (int *)(lVar2 + 0xc60);
  *(uint *)(param_3 + 0x11a90) = (uint)(DAT_14ca84df4 != 0x10de) * 0x20 + 0x20;
  local_138 = param_4;
  local_130 = param_6;
  local_128 = param_5;
  uVar15 = FUN_1400e05f2(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2))
  ;
  *(undefined4 *)(param_3 + 0x11a58) = uVar15;
  lVar29 = DAT_14c9d2468;
  local_258 = *(longlong ******)((longlong)local_260 + 0x84);
  uVar37 = 1;
  local_140 = local_258;
  if (DAT_14c9d7010 < 1) {
    uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
    iVar16 = *local_200;
    if (((iVar16 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar16 == 2)) {
      uVar28 = 0;
    }
    else if (iVar16 == 1) {
      DVar19 = FUN_140ad26c0();
      DVar20 = GetCurrentThreadId();
      uVar28 = (ulonglong)(DVar19 != DVar20);
    }
    else {
      uVar28 = 1;
    }
    lVar2 = DAT_14c9d2468;
    uVar37 = 4;
    if (*(int *)(lVar29 + uVar28 * 4) != 1) {
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 4) {
        uVar37 = 2;
      }
      else {
        iVar16 = *local_200;
        if (((iVar16 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar16 == 2)) {
          uVar28 = 0;
        }
        else if (iVar16 == 1) {
          DVar19 = FUN_140ad26c0();
          DVar20 = GetCurrentThreadId();
          uVar28 = (ulonglong)(DVar19 != DVar20);
        }
        else {
          uVar28 = 1;
        }
        uVar37 = (uint)(*(int *)(lVar2 + uVar28 * 4) == 2) * 3 + 2;
      }
    }
  }
  local_248 = (longlong *****)FUN_14472bf7a(param_1,local_260 + 0xc,L"Hair.HairOnlyDepthTexture",0);
  auVar6 = local_cc;
  local_150 = (longlong *****)0x0;
  local_158 = (longlong *****)0x0;
  local_160 = (longlong ****)0x0;
  local_168 = (longlong *****)0x0;
  local_170 = (longlong *****)0x0;
  local_148 = local_248;
  local_f8 = (longlong *****)CONCAT44(local_f8._4_4_,(int)local_f8);
  if (4 < uVar37 - 1) goto switchD_142c5a1cd_caseD_3;
  bVar33 = (lVar7 != 0 && uVar37 < 4) && (param_5 != 0 && param_6 != 0);
  local_f8 = (longlong *****)CONCAT44(local_f8._4_4_,(int)local_f8);
  switch(uVar37) {
  case 1:
    uStack_e0 = DAT_14ca85098;
    uStack_f0 = (undefined4)_DAT_14ca85088;
    uStack_ec = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
    uStack_e8 = (undefined4)_DAT_14ca85090;
    uStack_e4 = (undefined4)((ulonglong)_DAT_14ca85090 >> 0x20);
    uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f8._0_4_ = 0x20008;
    local_f8._4_4_ = 0;
    local_cc._0_9_ = (unkuint9)0x1c << 0x38;
    local_cc._0_6_ = 0x10100010001;
    auVar11 = local_cc;
    uStack_d8 = 0;
    local_cc._10_6_ = auVar6._10_6_;
    local_cc._0_9_ = auVar11._0_9_;
    local_cc[9] = 0xff;
    iStack_d4 = 1;
    local_d0 = 1;
    pppppplVar22 = param_1 + 0xe;
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar35 + 0x24);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x128);
      pppplVar35 = (longlong ****)((longlong)*pppppplVar22 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar35 + 0x24);
    }
    param_1[0xe] = ppppplVar25;
    FUN_1456bbb8c(pppplVar35,L"Hair.VisibilityPPLLCounter",&local_f8,0);
    iVar16 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x184) < iVar16 + 1U) {
      FUN_14472c0f6(param_1 + 0x2f,iVar16);
    }
    auVar6 = local_cc;
    param_1[0x2f][iVar16] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
    uStack_e0 = DAT_14ca85098;
    iStack_d4 = DAT_14ca84e40;
    if ((int)local_258 < DAT_14ca84e40) {
      iStack_d4 = (int)local_258;
    }
    if (iStack_d4 < 2) {
      iStack_d4 = 1;
    }
    iVar16 = (int)((ulonglong)local_258 >> 0x20);
    local_d0 = DAT_14ca84e40;
    if (iVar16 < DAT_14ca84e40) {
      local_d0 = iVar16;
    }
    uStack_f0 = (undefined4)_DAT_14ca85088;
    uStack_ec = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
    uStack_e8 = (undefined4)_DAT_14ca85090;
    uStack_e4 = (undefined4)((ulonglong)_DAT_14ca85090 >> 0x20);
    uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f8._0_4_ = 0x20008;
    local_f8._4_4_ = 0;
    local_cc._0_9_ = (unkuint9)0x1c << 0x38;
    local_cc._0_6_ = 0x10100010001;
    auVar11 = local_cc;
    uStack_d8 = 0;
    local_cc._10_6_ = auVar6._10_6_;
    local_cc._0_9_ = auVar11._0_9_;
    local_cc[9] = 0xff;
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    ppppplVar39 = (longlong *****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = ppppplVar39 + 0x24;
    local_248 = (longlong *****)pppplVar35;
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x128);
      ppppplVar39 = (longlong *****)((longlong)*pppppplVar22 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = ppppplVar39 + 0x24;
    }
    param_1[0xe] = ppppplVar25;
    FUN_1456bbb8c(ppppplVar39,L"Hair.VisibilityPPLLNodeIndex",&local_f8,0);
    iVar16 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x184) < iVar16 + 1U) {
      FUN_14472c0f6(param_1 + 0x2f,iVar16);
    }
    param_1[0x2f][iVar16] = (longlong ****)ppppplVar39;
    *(int *)((longlong)ppppplVar39 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
    uVar28 = *(ulonglong *)(param_3 + 0x30f8);
    lVar29 = *(longlong *)(param_3 + 0x3100);
    local_1d8 = ppppplVar39;
    iVar16 = FUN_147180cad(*(undefined2 *)
                            (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    uVar18 = (int)(lVar29 - (uVar28 & 0xffffffff00000000) >> 0x20) * ((int)lVar29 - (int)uVar28) *
             iVar16;
    local_250 = (longlong *****)(ulonglong)uVar18;
    uVar37 = 0xc;
    if (DAT_14ca84e48 < 0xc) {
      uVar37 = DAT_14ca84e48;
    }
    local_f8._0_4_ = uVar37 + (uVar37 == 0);
    uStack_f0 = 0x10109;
    uVar37 = DAT_14ca84e48;
    if (uVar18 < DAT_14ca84e48) {
      uVar37 = uVar18;
    }
    uStack_e8 = 0;
    uStack_e4 = 0;
    local_f8._4_4_ = uVar37 + (uVar37 == 0);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar25 = (longlong *****)(pppplVar35 + 0x2a);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x160);
      pppplVar35 = (longlong ****)((longlong)*pppppplVar22 + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar35 + 0x2a);
    }
    param_1[0xe] = ppppplVar25;
    FUN_1456bd266(pppplVar35,L"Hair.VisibilityPPLLNodeData",&local_f8,0);
    iVar16 = *(int *)(param_1 + 0x32);
    *(uint *)(param_1 + 0x32) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x194) < iVar16 + 1U) {
      FUN_144737178(param_1 + 0x31,iVar16);
    }
    param_1[0x31][iVar16] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x7c) = *(int *)(param_1 + 0x32) + -1;
    uVar14 = *(undefined1 *)((longlong)local_248 + 0x94);
    pppplVar36 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar36 + 9);
    local_269 = bVar33;
    local_258 = (longlong *****)pppplVar35;
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x50);
      pppplVar36 = (longlong ****)((longlong)*pppppplVar22 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar36 + 9);
    }
    local_238 = (longlong *****)(param_1 + 0x33);
    param_1[0xe] = ppppplVar25;
    pppplVar36[1] = (longlong ***)local_248[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar36 + 5) = 0;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar36 + 6) = uVar14;
    *(undefined1 *)(pppplVar36 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar36 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar36 + 0x35) = 0;
    pppplVar36[8] = (longlong ***)local_248;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_238,iVar16);
    }
    param_1[0x33][iVar16] = pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    FUN_14042f6c6(param_1,pppplVar36,&local_f8,2);
    uVar14 = *(undefined1 *)((longlong)ppppplVar39 + 0x94);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x50);
      pppplVar35 = (longlong ****)((longlong)*pppppplVar22 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar35[1] = (longlong ***)ppppplVar39[1];
    pppplVar35[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar35 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar35 + 5) = 0;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar35 + 6) = uVar14;
    *(undefined1 *)(pppplVar35 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar35 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar35 + 0x35) = 0;
    pppplVar35[8] = (longlong ***)ppppplVar39;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_238,iVar16);
    }
    param_1[0x33][iVar16] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    local_f8._0_4_ = 0xffffffff;
    local_f8._4_4_ = 0xffffffff;
    uStack_f0 = 0xffffffff;
    uStack_ec = 0xffffffff;
    FUN_14042f6c6(param_1,pppplVar35,&local_f8,2);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar25 = (longlong *****)(pppplVar35 + 0x32);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x1a0);
      pppplVar35 = (longlong ****)((longlong)*pppppplVar22 + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar35 + 0x32);
    }
    param_1[0xe] = ppppplVar25;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a22c5b8;
    local_230 = (longlong *****)(pppplVar35 + 2);
    FUN_147193252();
    pppppplVar21 = param_1 + 0x13;
    iVar16 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(pppppplVar21,iVar16);
    }
    param_1[0x13][iVar16] = pppplVar35;
    pppplVar36 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar25 = (longlong *****)(pppplVar36 + 6);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x40);
      pppplVar36 = (longlong ****)((longlong)*pppppplVar22 + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar36 + 6);
    }
    param_1[0xe] = ppppplVar25;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a22cc90;
    *(undefined1 (*) [16])(pppplVar36 + 3) = (undefined1  [16])0x0;
    pppplVar36[5] = (longlong ***)0x0;
    iVar16 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar16 + 1U;
    local_268 = (longlong *****)pppppplVar22;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(pppppplVar21,iVar16);
    }
    ppppplVar38 = local_268;
    param_1[0x13][iVar16] = pppplVar36;
    uVar14 = *(undefined1 *)((longlong)local_248 + 0x94);
    pppplVar42 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar42 + 9);
    local_220 = (longlong *****)pppppplVar21;
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_268,0x50);
      pppplVar42 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar42 + 9);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar42[1] = (longlong ***)local_248[1];
    pppplVar42[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar42 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar42 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar42 + 5) = 0;
    *pppplVar42 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar42 + 6) = uVar14;
    *(undefined1 *)(pppplVar42 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar42 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar42 + 0x35) = 0;
    pppplVar42[8] = (longlong ***)local_248;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_238,iVar16);
    }
    ppppplVar38 = local_268;
    param_1[0x33][iVar16] = pppplVar42;
    *(int *)((longlong)pppplVar42 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    pppplVar36[3] = (longlong ***)pppplVar42;
    uVar14 = *(undefined1 *)((longlong)ppppplVar39 + 0x94);
    pppplVar42 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar42 + 9);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_268,0x50);
      pppplVar42 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar42 + 9);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar42[1] = (longlong ***)ppppplVar39[1];
    pppplVar42[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar42 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar42 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar42 + 5) = 0;
    *pppplVar42 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar42 + 6) = uVar14;
    *(undefined1 *)(pppplVar42 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar42 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar42 + 0x35) = 0;
    pppplVar42[8] = (longlong ***)ppppplVar39;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_238,iVar16);
    }
    ppppplVar38 = local_268;
    param_1[0x33][iVar16] = pppplVar42;
    *(int *)((longlong)pppplVar42 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    pppplVar36[4] = (longlong ***)pppplVar42;
    cVar13 = *(char *)(local_258 + 0xd);
    pppplVar42 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar42 + 8);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_268,0x48);
      pppplVar42 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar42 + 8);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar42[1] = (longlong ***)local_258[1];
    pppplVar42[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar42 + 3) = 2;
    *(undefined8 *)((longlong)pppplVar42 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar42 + 5) = 0;
    *pppplVar42 = (longlong ***)&PTR_FUN_14a1fb3e8;
    *(byte *)(pppplVar42 + 6) = cVar13 >> 7 & 0x1c;
    *(undefined2 *)((longlong)pppplVar42 + 0x31) = 0;
    pppplVar42[7] = (longlong ***)local_258;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_238,iVar16);
    }
    param_1[0x33][iVar16] = pppplVar42;
    *(int *)((longlong)pppplVar42 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    pppplVar36[5] = (longlong ***)pppplVar42;
    *(int *)(pppplVar36 + 2) = (int)local_250;
    local_f8 = (longlong *****)(pppplVar36 + 2);
    FUN_145e6ada8();
    ppppplVar25 = local_268;
    local_1b8 = (longlong *****)DAT_14c9d7ac0;
    ppplVar23 = (longlong ***)FUN_147197c58(param_1 + 0x35,local_268,&local_f8);
    FUN_145e6ada8();
    cVar13 = '\x02';
    if (DAT_14c9d7ae9 != '\x03') {
      cVar13 = DAT_14c9d7ae9;
    }
    pppplVar35[0x10] = ppplVar23;
    *(char *)(pppplVar35 + 0x11) = cVar13;
    pppplVar35[0x2a] = (longlong ***)local_260;
    pppplVar35[0x2b] = (longlong ***)0x0;
    *(undefined2 *)(pppplVar35 + 0x2c) = 1;
    *(undefined4 *)((longlong)pppplVar35 + 0x164) = 1;
    local_2b8 = (longlong *****)param_12;
    local_2c0 = local_230;
    local_2c8 = (longlong *****)CONCAT44(local_2c8._4_4_,1);
    FUN_142c7409b(param_1,local_210,param_3,local_228);
    local_2c8 = (longlong *****)&local_1d8;
    FUN_142c5ea47(&local_f8,param_1,param_3,(longlong)ppppplVar39 + 0x84);
    local_260 = (longlong *****)(param_3 + 0x11ad0);
    memcpy(local_260,&local_f8,0x88);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar38 = (longlong *****)(pppplVar35 + 0x20);
    if (param_1[0xf] < ppppplVar38) {
      FUN_140023dd8(ppppplVar25);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar25 + 0xfU & 0xfffffffffffffff0);
      ppppplVar38 = (longlong *****)(pppplVar35 + 0x20);
    }
    param_1[0xe] = ppppplVar38;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a22ce90;
    pppplVar35[0x1c] = (longlong ***)0x0;
    memset(pppplVar35 + 9,0,0x90);
    *(undefined1 *)(pppplVar35 + 0x1d) = 1;
    pppplVar35[0x1e] = (longlong ***)0x0;
    *(undefined4 *)(pppplVar35 + 0x1f) = 4;
    iVar16 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(local_220,iVar16);
    }
    ppppplVar38 = local_268;
    param_1[0x13][iVar16] = pppplVar35;
    pppplVar35[0xe] = (longlong ***)local_248;
    pppplVar35[0xf] = (longlong ***)ppppplVar39;
    cVar13 = *(char *)(local_258 + 0xd);
    pppplVar36 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar36 + 9);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_268,0x50);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar36 + 9);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar36[1] = (longlong ***)local_258[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 3;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb168;
    *(byte *)(pppplVar36 + 5) = cVar13 >> 7 & 0x1c;
    *(undefined8 *)((longlong)pppplVar36 + 0x2c) = 0xffffffff00000000;
    pppplVar36[7] = (longlong ***)0x0;
    pppplVar36[8] = (longlong ***)local_258;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_238,iVar16);
    }
    pplVar8 = local_228;
    ppppplVar25 = local_260;
    param_1[0x33][iVar16] = pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    pppplVar35[0x10] = (longlong ***)pppplVar36;
    pppplVar35[0x11] = (longlong ***)0x0;
    local_1e0 = (longlong *****)0x0;
    local_278 = param_3 + 0x11a5c;
    local_280 = (longlong *****)&local_108;
    local_288 = (longlong *****)&local_150;
    local_290 = (longlong *****)&local_1b8;
    local_2a0._8_8_ = &local_168;
    local_2a0._0_8_ = &local_158;
    ppppplStack_2a8 = (longlong *****)&local_170;
    local_2b0 = (undefined1  [8])(pppplVar35 + 2);
    local_2b8 = local_260;
    local_2c0 = (longlong *****)CONCAT44(local_2c0._4_4_,*(undefined4 *)(param_3 + 0x11a90));
    local_2c8 = (longlong *****)local_228;
    FUN_142c6aef3(CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(param_3 + 0x11a90) >> 8),1),param_1,
                  param_3,&param_10);
    ppppplVar39 = local_158;
    iVar16 = DAT_14c9d7108;
    local_280 = (longlong *****)CONCAT44(uStack_104,local_108);
    local_258 = local_170;
    local_288 = local_170;
    local_268 = local_1b8;
    local_290 = local_1b8;
    local_2a0._8_8_ = local_168;
    local_2a0._0_8_ = local_158;
    ppppplStack_2a8._0_4_ = *(undefined4 *)(param_3 + 0x11a90);
    local_2c8 = (longlong *****)CONCAT71(local_2c8._1_7_,0 < DAT_14c9d7108);
    local_2b0 = (undefined1  [8])param_12;
    local_2b8 = (longlong *****)pplVar8;
    local_2c0 = (longlong *****)CONCAT71(local_2c0._1_7_,1);
    local_248 = local_280;
    FUN_142c6cda7(&local_f8,param_1,local_210,param_3);
    local_2b8 = (longlong *****)&uStack_f0;
    ppppplStack_2a8 = (longlong *****)&local_1e0;
    local_2b0 = (undefined1  [8])&param_11;
    local_2c8 = (longlong *****)&local_158;
    local_2c0 = (longlong *****)&local_168;
    FUN_142c6e2ca(param_1,param_3,ppppplVar25,&local_150);
    ppppplVar25 = local_f8;
    if (0 < iVar16) {
      ppppplVar25 = (longlong *****)FUN_142c6edf6(param_1,param_3,ppppplVar39,local_f8);
    }
    *(undefined8 *)(param_3 + 0x11b58) = *(undefined8 *)(CONCAT44(uStack_dc,uStack_e0) + 0x84);
    *(longlong *)(param_3 + 0x11b60) = CONCAT44(uStack_dc,uStack_e0);
    local_160 = (longlong ****)ppppplVar25;
    local_f8 = ppppplVar25;
    uVar15 = FUN_1400e05f2(*(undefined2 *)
                            (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    pppppplVar31 = (longlong ******)local_148;
    *(undefined4 *)(param_3 + 0x11a58) = uVar15;
    *(longlong ******)(param_3 + 0x11a68) = ppppplVar39;
    *(longlong ******)(param_3 + 0x11a20) = local_150;
    *(longlong ******)(param_3 + 0x11a38) = local_148;
    *(longlong ******)(param_3 + 0x11a70) = ppppplVar25;
    *(longlong ******)(param_3 + 0x11a80) = local_268;
    *(longlong ******)(param_3 + 0x11a88) = local_248;
    *(longlong ******)(param_3 + 0x11a60) = local_258;
    if (local_269 != '\0') {
      local_290 = (longlong *****)(param_3 + 0x11a50);
      local_2a0._8_8_ = &param_10;
      local_2a0._0_8_ = &param_9;
      ppppplStack_2a8 = (longlong *****)&local_138;
      local_2b0 = (undefined1  [8])&local_130;
      local_2b8 = (longlong *****)&local_128;
      local_2c0 = &local_160;
      local_2c8 = (longlong *****)&local_158;
      FUN_142c6dd2b(param_1,param_3,local_260,&local_150);
    }
    local_2b8 = (longlong *****)&local_148;
    local_2c0 = &local_160;
    local_2c8 = (longlong *****)&local_158;
    FUN_142c6e0ab(param_1,param_3,local_260,&local_150);
    break;
  case 2:
    bVar5 = (byte)DAT_14c760da4 & 0x1f;
    local_250 = (longlong *****)CONCAT44(local_250._4_4_,DAT_14c9d7120);
    pppppplVar22 = param_1 + 0xe;
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar25 = (longlong *****)(pppplVar35 + 0x32);
    local_268 = (longlong *****)pppppplVar22;
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(pppppplVar22,0x1a0);
      pppplVar35 = (longlong ****)((longlong)*pppppplVar22 + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar35 + 0x32);
    }
    uVar37 = ~(-1 << bVar5);
    param_1[0xe] = ppppplVar25;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a22c5b8;
    local_230 = (longlong *****)(pppplVar35 + 2);
    FUN_147193252();
    local_220 = (longlong *****)(param_1 + 0x13);
    iVar16 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(local_220,iVar16);
    }
    param_1[0x13][iVar16] = pppplVar35;
    ppplVar23 = (longlong ***)FUN_147181dd2(param_1);
    FUN_145e6ada8();
    ppppplVar25 = local_268;
    cVar13 = '\x02';
    if (DAT_14c9d7ae9 != '\x03') {
      cVar13 = DAT_14c9d7ae9;
    }
    pppplVar35[0x10] = ppplVar23;
    *(char *)(pppplVar35 + 0x11) = cVar13;
    iStack_d4 = DAT_14ca84e40;
    if ((int)local_258 < DAT_14ca84e40) {
      iStack_d4 = (int)local_258;
    }
    if (iStack_d4 < 2) {
      iStack_d4 = 1;
    }
    iVar16 = (int)((ulonglong)local_258 >> 0x20);
    local_d0 = DAT_14ca84e40;
    if (iVar16 < DAT_14ca84e40) {
      local_d0 = iVar16;
    }
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    local_1b8 = (longlong *****)0x0;
    ppppplStack_1b0 = (longlong *****)0x0;
    local_1a8 = (longlong *****)0x0;
    ppppplStack_1a0 = (longlong *****)0x0;
    local_cc._0_10_ = (unkuint10)0xff000d00 << 0x30;
    local_f8._0_4_ = 9;
    local_f8._4_4_ = 0;
    local_cc._0_6_ = 0x10100010001;
    uStack_f0 = 1;
    uStack_ec = 0x3f800000;
    uStack_e8 = 0x3f800000;
    uStack_e4 = 0x3f800000;
    uStack_e0 = 0x3f800000;
    uStack_d8 = 0;
    local_238 = (longlong *****)CONCAT44(local_238._4_4_,uVar37);
    pppppplVar21 = (longlong ******)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    pppppplVar22 = pppppplVar21 + 0x24;
    uStack_dc = uVar37;
    if (param_1[0xf] < pppppplVar22) {
      FUN_140023dd8(local_268,0x128);
      pppppplVar21 = (longlong ******)((longlong)*ppppplVar25 + 7U & 0xfffffffffffffff8);
      pppppplVar22 = pppppplVar21 + 0x24;
    }
    local_208 = (longlong *****)(param_1 + 0x2f);
    param_1[0xe] = (longlong *****)pppppplVar22;
    uVar15 = 0;
    FUN_1456bbb8c(pppppplVar21,L"Hair.ViewTransmittanceTexture",&local_f8,0);
    iVar40 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar40 + 1U;
    if (*(uint *)((longlong)param_1 + 0x184) < iVar40 + 1U) {
      FUN_14472c0f6(local_208,iVar40);
    }
    ppppplVar25 = local_268;
    param_1[0x2f][iVar40] = (longlong ****)pppppplVar21;
    *(int *)((longlong)pppppplVar21 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
    pppplVar35[0x12] = (longlong ***)pppppplVar21;
    pppplVar35[0x13] = (longlong ***)0x0;
    *(undefined4 *)(pppplVar35 + 0x14) = 0xffff0002;
    local_1b8 = (longlong *****)pppppplVar21;
    if ((int)local_250 < 1) {
      pppppplVar22 = (longlong ******)0x0;
      ppplVar23 = (longlong ***)local_228;
      local_269 = bVar33;
    }
    else {
      local_cc._0_10_ = (unkuint10)0xff001100 << 0x30;
      local_f8._0_4_ = 9;
      local_f8._4_4_ = 0;
      iStack_d4 = DAT_14ca84e40;
      if ((int)local_258 < DAT_14ca84e40) {
        iStack_d4 = (int)local_258;
      }
      local_cc._0_6_ = 0x10100010001;
      uStack_f0 = 1;
      uStack_d8 = 0;
      if (iStack_d4 < 2) {
        iStack_d4 = 1;
      }
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      local_d0 = DAT_14ca84e40;
      if (iVar16 < DAT_14ca84e40) {
        local_d0 = iVar16;
      }
      uStack_dc = (uint)local_238;
      if (local_d0 < 2) {
        local_d0 = 1;
      }
      pppppplVar22 = (longlong ******)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
      pppppplVar31 = pppppplVar22 + 0x24;
      local_269 = bVar33;
      local_250 = (longlong *****)pppppplVar21;
      if (param_1[0xf] < pppppplVar31) {
        FUN_140023dd8(local_268,0x128);
        pppppplVar22 = (longlong ******)((longlong)*ppppplVar25 + 7U & 0xfffffffffffffff8);
        pppppplVar31 = pppppplVar22 + 0x24;
      }
      param_1[0xe] = (longlong *****)pppppplVar31;
      FUN_1456bbb8c(pppppplVar22,L"Hair.ViewHairCountTexture",&local_f8,0);
      ppplVar23 = (longlong ***)local_228;
      iVar16 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar16 + 1U;
      if (*(uint *)((longlong)param_1 + 0x184) < iVar16 + 1U) {
        FUN_14472c0f6(local_208,iVar16);
      }
      param_1[0x2f][iVar16] = (longlong ****)pppppplVar22;
      *(int *)((longlong)pppppplVar22 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
      pppplVar35[0x15] = (longlong ***)pppppplVar22;
      pppplVar35[0x16] = (longlong ***)0x0;
      *(undefined4 *)(pppplVar35 + 0x17) = 0xffff0002;
      uVar15 = 3;
      pppppplVar21 = (longlong ******)local_250;
      ppppplStack_1b0 = (longlong *****)pppppplVar22;
    }
    pppplVar35[0x2a] = (longlong ***)local_260;
    pppplVar35[0x2b] = (longlong ***)0x0;
    *(undefined2 *)(pppplVar35 + 0x2c) = 0x101;
    *(undefined4 *)((longlong)pppplVar35 + 0x164) = 0x11;
    local_2b8 = (longlong *****)param_12;
    local_2c0 = local_230;
    local_2c8 = (longlong *****)CONCAT44(local_2c8._4_4_,uVar15);
    FUN_142c7409b(param_1,local_210,param_3,ppplVar23);
    ppppplVar25 = local_268;
    if (0 < DAT_14c9d7120) {
      local_260 = *(longlong ******)((longlong)pppppplVar22 + 0x84);
      local_248 = (longlong *****)
                  CONCAT71(local_248._1_7_,*(undefined1 *)((longlong)pppppplVar22 + 0x93));
      uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_cc._0_10_ = (unkuint10)0xff000d00 << 0x30;
      local_f8._0_4_ = 0x20009;
      local_f8._4_4_ = 0;
      local_cc._0_6_ = 0x10100010001;
      uStack_f0 = 1;
      uStack_d8 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      iStack_d4 = DAT_14ca84e40;
      if ((int)local_260 < DAT_14ca84e40) {
        iStack_d4 = (int)local_260;
      }
      if (iStack_d4 < 2) {
        iStack_d4 = 1;
      }
      iVar16 = (int)((ulonglong)local_260 >> 0x20);
      local_d0 = DAT_14ca84e40;
      if (iVar16 < DAT_14ca84e40) {
        local_d0 = iVar16;
      }
      if (local_d0 < 2) {
        local_d0 = 1;
      }
      pppppplVar31 = (longlong ******)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
      pppppplVar21 = pppppplVar31 + 0x24;
      if (param_1[0xf] < pppppplVar21) {
        FUN_140023dd8(local_268,0x128);
        pppppplVar31 = (longlong ******)((longlong)*ppppplVar25 + 7U & 0xfffffffffffffff8);
        pppppplVar21 = pppppplVar31 + 0x24;
      }
      param_1[0xe] = (longlong *****)pppppplVar21;
      FUN_1456bbb8c(pppppplVar31,L"Hair.VisibilityTexture",&local_f8,0);
      iVar40 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar40 + 1U;
      if (*(uint *)((longlong)param_1 + 0x184) < iVar40 + 1U) {
        FUN_14472c0f6(local_208,iVar40);
      }
      param_1[0x2f][iVar40] = (longlong ****)pppppplVar31;
      *(int *)((longlong)pppppplVar31 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
      local_250 = (longlong *****)pppppplVar31;
      ppplVar23 = (longlong ***)FUN_1406d601c(param_1,param_3,2,1);
      ppppplVar39 = local_268;
      pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar35 + 8);
      if (param_1[0xf] < ppppplVar25) {
        FUN_140023dd8(local_268,0x50);
        pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 0xfU & 0xfffffffffffffff0);
        ppppplVar25 = (longlong *****)(pppplVar35 + 8);
      }
      param_1[0xe] = ppppplVar25;
      *pppplVar35 = (longlong ***)&PTR_FUN_14a22ca68;
      pppplVar35[4] = (longlong ***)0x0;
      pppplVar35[5] = (longlong ***)0x0;
      pppplVar35[6] = (longlong ***)0x0;
      pppplVar35[7] = (longlong ***)0x0;
      iVar40 = *(int *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = iVar40 + 1U;
      if (*(uint *)((longlong)param_1 + 0xa4) < iVar40 + 1U) {
        FUN_1448cfae8(local_220,iVar40);
      }
      pppppplVar21 = (longlong ******)local_250;
      ppppplVar39 = local_268;
      param_1[0x13][iVar40] = pppplVar35;
      *(float *)(pppplVar35 + 3) = (float)*(int *)((longlong)ppplVar23 + 0x84);
      *(float *)((longlong)pppplVar35 + 0x1c) = (float)*(int *)(ppplVar23 + 0x11);
      pppplVar35[2] = (longlong ***)local_260;
      pppplVar35[5] = ppplVar23;
      pppplVar35[6] = (longlong ***)pppppplVar22;
      pppplVar35[4] = DAT_14c9c0de0;
      uVar14 = *(undefined1 *)((longlong)local_250 + 0x94);
      pppplVar36 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar36 + 9);
      if (param_1[0xf] < ppppplVar25) {
        FUN_140023dd8(local_268,0x50);
        pppplVar36 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
        ppppplVar25 = (longlong *****)(pppplVar36 + 9);
      }
      local_258 = (longlong *****)(pppplVar35 + 2);
      param_1[0xe] = ppppplVar25;
      pppplVar36[1] = (longlong ***)pppppplVar21[1];
      pppplVar36[2] = (longlong ***)0x0;
      *(undefined1 *)(pppplVar36 + 3) = 0;
      *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(pppplVar36 + 5) = 0;
      *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb948;
      *(undefined1 *)(pppplVar36 + 6) = uVar14;
      *(undefined1 *)(pppplVar36 + 7) = 0;
      *(undefined4 *)((longlong)pppplVar36 + 0x31) = 0;
      *(undefined2 *)((longlong)pppplVar36 + 0x35) = 0;
      pppplVar36[8] = (longlong ***)pppppplVar21;
      iVar40 = *(int *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x34) = iVar40 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1a4) < iVar40 + 1U) {
        FUN_1447568fc(param_1 + 0x33,iVar40);
      }
      param_1[0x33][iVar40] = pppplVar36;
      *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
      bVar33 = (char)local_248 == '\x1c';
      pppplVar35[7] = (longlong ***)pppplVar36;
      uVar3 = *(undefined8 *)(param_3 + 0x13818);
      FUN_145e6f764();
      FUN_1448e935e(uVar3,&local_f8,&DAT_14c9d8e30,bVar33);
      FUN_145e6f764();
      iVar40 = iVar16 + 0xe;
      if (-1 < iVar16 + 7) {
        iVar40 = iVar16 + 7;
      }
      iVar17 = (int)local_260 + 7;
      iVar16 = (int)local_260 + 0xe;
      if (-1 < iVar17) {
        iVar16 = iVar17;
      }
      local_2c8 = (longlong *****)&local_1d8;
      local_1d8 = (longlong *****)CONCAT44(iVar40 >> 3,iVar16 >> 3);
      local_1d0 = (longlong ***)CONCAT44(local_1d0._4_4_,1);
      FUN_14719592d(param_1,&local_108,&local_f8,local_258);
      local_1b8 = (longlong *****)pppppplVar21;
      local_248 = local_148;
    }
    local_2c8 = (longlong *****)&local_1b8;
    local_250 = (longlong *****)pppppplVar21;
    FUN_142c5ea47(&local_f8,param_1,param_3,(longlong)pppppplVar21 + 0x84);
    local_258 = (longlong *****)(param_3 + 0x11ad0);
    memcpy(local_258,&local_f8,0x88);
    uVar14 = FUN_1400e05f2(*(undefined2 *)
                            (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    auVar6 = local_cc;
    ppppplVar25 = local_268;
    iStack_d4 = DAT_14ca84e40;
    if ((int)local_140 < DAT_14ca84e40) {
      iStack_d4 = (int)local_140;
    }
    if (iStack_d4 < 2) {
      iStack_d4 = 1;
    }
    iVar16 = (int)((ulonglong)local_140 >> 0x20);
    local_d0 = DAT_14ca84e40;
    if (iVar16 < DAT_14ca84e40) {
      local_d0 = iVar16;
    }
    uStack_e0 = DAT_14ca850c0;
    uStack_f0 = (undefined4)_DAT_14ca850b0;
    uStack_ec = (undefined4)((ulonglong)_DAT_14ca850b0 >> 0x20);
    uStack_e8 = (undefined4)_DAT_14ca850b8;
    uStack_e4 = (undefined4)((ulonglong)_DAT_14ca850b8 >> 0x20);
    local_f8._0_4_ = 0x400000c;
    local_f8._4_4_ = 0;
    local_cc._0_9_ = (unkuint9)0x14 << 0x38;
    local_cc[5] = uVar14;
    local_cc._0_5_ = 0x100010001;
    auVar11 = local_cc;
    uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_d8 = 0;
    local_cc._10_6_ = auVar6._10_6_;
    local_cc._0_9_ = auVar11._0_9_;
    local_cc[9] = 0xff;
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    ppppplVar38 = (longlong *****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = ppppplVar38 + 0x24;
    if (param_1[0xf] < ppppplVar39) {
      FUN_140023dd8(local_268,0x128);
      ppppplVar38 = (longlong *****)((longlong)*ppppplVar25 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = ppppplVar38 + 0x24;
    }
    param_1[0xe] = ppppplVar39;
    FUN_1456bbb8c(ppppplVar38,L"Hair.VisibilityDepthTexture",&local_f8,0);
    iVar16 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x184) < iVar16 + 1U) {
      FUN_14472c0f6(local_208,iVar16);
    }
    ppppplVar39 = local_268;
    param_1[0x2f][iVar16] = (longlong ****)ppppplVar38;
    *(int *)((longlong)ppppplVar38 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar25 = (longlong *****)(pppplVar35 + 0x2e);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_268,0x180);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar35 + 0x2e);
    }
    param_1[0xe] = ppppplVar25;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a22c648;
    pppplVar36 = pppplVar35 + 2;
    FUN_14719372e(pppplVar36);
    iVar16 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar16 + 1U;
    local_260 = (longlong *****)param_1;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(local_220,iVar16);
    }
    local_260[0x13][iVar16] = (longlong ***)pppplVar35;
    bVar5 = *(byte *)(param_3 + 0x11ae4);
    ppplVar23 = *(longlong ****)(param_3 + 0x30f8);
    iVar16 = *(int *)(param_3 + 0x3104);
    iVar40 = *(int *)(param_3 + 0x3100);
    ppplVar32 = (longlong ***)0x0;
    if (*(longlong *)(param_3 + 0x11b08) != 0) {
      ppplVar32 = *(longlong ****)(param_3 + 0x11ae8);
    }
    if (*(int *)(param_3 + 0x11ad8) == 0) {
      ppplVar32 = (longlong ***)0x0;
    }
    ppplVar4 = *(longlong ****)(param_3 + 0x11b38);
    pppplVar35[6] = ppplVar23;
    *(uint *)(pppplVar35 + 7) = (uint)bVar5;
    *(undefined4 *)((longlong)pppplVar35 + 0x3c) = 0;
    *(float *)(pppplVar35 + 8) = 1.0 / (float)(iVar40 - (int)ppplVar23);
    *(float *)((longlong)pppplVar35 + 0x44) =
         1.0 / (float)(iVar16 - (int)((ulonglong)ppplVar23 >> 0x20));
    pppplVar35[9] = ppplVar32;
    pppplVar35[10] = ppplVar4;
    *(undefined4 *)(pppplVar35 + 0xb) = 4;
    lVar29 = FUN_1447e4f80();
    cVar13 = '\x02';
    if (*(char *)(lVar29 + 0x41) != '\x03') {
      cVar13 = *(char *)(lVar29 + 0x41);
    }
    pppplVar35[0xc] = *(longlong ****)(param_3 + 0x18);
    *(char *)(pppplVar35 + 0xd) = cVar13;
    pppplVar35[2] = (longlong ***)param_10;
    pppplVar35[0x26] = (longlong ***)ppppplVar38;
    pppplVar35[0x27] = (longlong ***)0x0;
    *(undefined2 *)(pppplVar35 + 0x28) = 0;
    *(undefined4 *)((longlong)pppplVar35 + 0x144) = 2;
    uVar3 = *(undefined8 *)(param_3 + 0x13818);
    FUN_145f6826a();
    FUN_1448e935e(uVar3,&local_f8,&DAT_14c9d8ab8,0);
    FUN_145f6826a();
    ppplVar23 = (longlong ***)CONCAT44(local_f8._4_4_,(int)local_f8);
    local_230 = (longlong *****)CONCAT44(uStack_ec,uStack_f0);
    local_238 = *(longlong ******)(param_3 + 0x30f8);
    local_1f8 = *(longlong ***)(param_3 + 0x3100);
    uVar3 = *(undefined8 *)(param_3 + 0x13818);
    FUN_14608fe30();
    FUN_1448e935e(uVar3,&local_f8,&DAT_14c9d6288,0);
    FUN_14608fe30();
    ppplVar32 = (longlong ***)CONCAT44(local_f8._4_4_,(int)local_f8);
    ppplVar4 = (longlong ***)CONCAT44(uStack_ec,uStack_f0);
    FUN_145f684d8();
    ppppplVar24 = local_260;
    FUN_140069376(local_260);
    ppppplVar39 = local_268;
    pppplVar35 = (longlong ****)((longlong)ppppplVar24[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar35 + 0x3f);
    if (ppppplVar24[0xf] < ppppplVar25) {
      FUN_140023dd8(local_268,0x200);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar35 + 0x3f);
    }
    *local_268 = (longlong ****)ppppplVar25;
    uStack_f0 = (undefined4)DAT_14c9dabb0;
    uStack_ec = (undefined4)((ulonglong)DAT_14c9dabb0 >> 0x20);
    if (DAT_14c9dabb0 != 0) {
      LOCK();
      *(int *)(DAT_14c9dabb0 + 8) = *(int *)(DAT_14c9dabb0 + 8) + 1;
      UNLOCK();
    }
    uStack_e8 = 0x4c9dab68;
    uStack_e4 = 1;
    local_2c8 = (longlong *****)CONCAT71(local_2c8._1_7_,2);
    local_f8 = (longlong *****)pppplVar36;
    FUN_140068f1a(pppplVar35,&local_1d8,&local_f8,1);
    *pppplVar35 = (longlong ***)&PTR_FUN_14a22c650;
    pppplVar35[0x37] = (longlong ***)pppplVar36;
    pppplVar35[0x38] = ppplVar32;
    pppplVar35[0x39] = ppplVar4;
    pppplVar35[0x3a] = ppplVar23;
    pppplVar35[0x3b] = (longlong ***)local_230;
    pppplVar35[0x3c] = (longlong ***)local_238;
    pppplVar35[0x3d] = (longlong ***)local_1f8;
    *(undefined1 *)(pppplVar35 + 0x3e) = 0;
    pppppplVar22 = (longlong ******)(local_260 + 0x2d);
    iVar16 = *(int *)(local_260 + 0x2e);
    *(uint *)(local_260 + 0x2e) = iVar16 + 1U;
    if (*(uint *)((longlong)local_260 + 0x174) < iVar16 + 1U) {
      FUN_14470e57a(pppppplVar22,iVar16);
    }
    ppppplVar25 = local_260;
    local_260[0x2d][iVar16] = (longlong ***)pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x2c) = *(int *)(local_260 + 0x2e) + -1;
    local_238 = (longlong *****)pppppplVar22;
    FUN_140069100(local_260,pppplVar35);
    if (DAT_14ca84e21 == '\x01') {
      FUN_143213656(ppppplVar25,ppppplVar38);
    }
    local_1d8 = ppppplVar38;
    uVar14 = FUN_1400e05f2(*(undefined2 *)
                            (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    ppppplVar39 = local_268;
    local_cc._0_10_ = (unkuint10)0xff001c00 << 0x30;
    local_f8._0_4_ = 0x4000009;
    local_f8._4_4_ = 0;
    local_cc[5] = uVar14;
    local_cc._0_5_ = 0x100010001;
    iStack_d4 = DAT_14ca84e40;
    if ((int)local_140 < DAT_14ca84e40) {
      iStack_d4 = (int)local_140;
    }
    if (iStack_d4 < 2) {
      iStack_d4 = 1;
    }
    iVar16 = (int)((ulonglong)local_140 >> 0x20);
    local_d0 = DAT_14ca84e40;
    if (iVar16 < DAT_14ca84e40) {
      local_d0 = iVar16;
    }
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    pppplVar35 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar24 = (longlong *****)(pppplVar35 + 0x24);
    if (ppppplVar25[0xf] < ppppplVar24) {
      FUN_140023dd8(local_268,0x128);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
      ppppplVar24 = (longlong *****)(pppplVar35 + 0x24);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar24;
    FUN_1456bbb8c(pppplVar35,L"Hair.VisibilityIDTexture",&local_f8,0);
    iVar16 = *(int *)(ppppplVar25 + 0x30);
    *(uint *)(ppppplVar25 + 0x30) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x184) < iVar16 + 1U) {
      FUN_14472c0f6(local_208,iVar16);
    }
    ppppplVar25[0x2f][iVar16] = (longlong ***)pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x9c) = *(int *)(ppppplVar25 + 0x30) + -1;
    local_2c8 = local_258;
    local_2c0 = (longlong *****)&local_1d0;
    local_1d0 = (longlong ***)pppplVar35;
    FUN_142c74f26(ppppplVar25,&local_f8,param_3,0xffffffff);
    ppppplVar24 = local_268;
    pppplVar36 = (longlong ****)((longlong)ppppplVar25[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar39 = (longlong *****)(pppplVar36 + 0x32);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_268,0x1a0);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar24 + 0xfU & 0xfffffffffffffff0);
      ppppplVar39 = (longlong *****)(pppplVar36 + 0x32);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar39;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a22c5b8;
    FUN_147193252(pppplVar36 + 2);
    iVar16 = *(int *)(ppppplVar25 + 0x14);
    *(uint *)(ppppplVar25 + 0x14) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(local_220,iVar16);
    }
    param_1 = (longlong ******)local_260;
    local_260[0x13][iVar16] = (longlong ***)pppplVar36;
    ppplVar23 = (longlong ***)FUN_147181dd2(local_260);
    FUN_145e6ada8();
    cVar13 = DAT_14c9d7ae9;
    if (DAT_14c9d7ae9 == '\x03') {
      cVar13 = '\x02';
    }
    pppplVar36[0x10] = ppplVar23;
    *(char *)(pppplVar36 + 0x11) = cVar13;
    pppplVar36[0x12] = (longlong ***)pppplVar35;
    pppplVar36[0x13] = (longlong ***)0x0;
    *(undefined4 *)(pppplVar36 + 0x14) = 0xffff0001;
    pppplVar36[0x2a] = (longlong ***)ppppplVar38;
    pppplVar36[0x2b] = (longlong ***)0x0;
    *(undefined2 *)(pppplVar36 + 0x2c) = 1;
    *(undefined4 *)((longlong)pppplVar36 + 0x164) = 2;
    local_2b8 = (longlong *****)param_12;
    local_2c8 = (longlong *****)CONCAT44(local_2c8._4_4_,2);
    local_2c0 = (longlong *****)(pppplVar36 + 2);
    FUN_142c7409b(param_1,local_210,param_3,local_228);
    ppppplVar39 = local_268;
    *(uint *)(param_3 + 0x11a58) = (uint)*(byte *)((longlong)pppplVar35 + 0x91);
    *(longlong ******)(param_3 + 0x11a38) = local_248;
    pppplVar36 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar25 = (longlong *****)(pppplVar36 + 0x20);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_268);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar39 + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar36 + 0x20);
    }
    param_1[0xe] = ppppplVar25;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a22ce90;
    pppplVar36[0x1c] = (longlong ***)0x0;
    memset(pppplVar36 + 9,0,0x90);
    *(undefined1 *)(pppplVar36 + 0x1d) = 1;
    pppplVar36[0x1e] = (longlong ***)0x0;
    *(undefined4 *)(pppplVar36 + 0x1f) = 4;
    iVar16 = *(int *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(local_220,iVar16);
    }
    pplVar8 = local_228;
    ppppplVar25 = local_258;
    param_1[0x13][iVar16] = pppplVar36;
    pppplVar36[9] = (longlong ***)ppppplVar38;
    pppplVar36[10] = (longlong ***)pppplVar35;
    pppplVar36[0x11] = (longlong ***)local_250;
    local_1e8 = 0;
    local_278 = param_3 + 0x11a5c;
    local_280 = (longlong *****)&local_1e0;
    local_288 = (longlong *****)&local_150;
    local_290 = (longlong *****)&local_108;
    local_2a0._8_8_ = &local_168;
    local_2a0._0_8_ = &local_158;
    ppppplStack_2a8 = (longlong *****)&local_170;
    local_2b0 = (undefined1  [8])(pppplVar36 + 2);
    local_2b8 = local_258;
    local_2c0 = (longlong *****)CONCAT44(local_2c0._4_4_,*(undefined4 *)(param_3 + 0x11a90));
    local_2c8 = (longlong *****)local_228;
    FUN_142c6aef3(0,param_1,param_3,&param_10);
    ppppplVar38 = local_158;
    ppppplVar39 = local_168;
    iVar16 = DAT_14c9d7108;
    local_290 = (longlong *****)CONCAT44(uStack_104,local_108);
    local_248 = local_1e0;
    local_280 = local_1e0;
    local_250 = local_170;
    local_288 = local_170;
    local_2a0._8_8_ = local_168;
    local_2a0._0_8_ = local_158;
    ppppplStack_2a8._0_4_ = *(undefined4 *)(param_3 + 0x11a90);
    local_2c8 = (longlong *****)CONCAT71(local_2c8._1_7_,0 < DAT_14c9d7108);
    local_2b0 = (undefined1  [8])param_12;
    local_2b8 = (longlong *****)pplVar8;
    local_2c0 = (longlong *****)CONCAT71(local_2c0._1_7_,1);
    local_230 = local_290;
    FUN_142c6cda7(&local_f8,param_1,local_210,param_3);
    local_2b8 = (longlong *****)&uStack_f0;
    ppppplStack_2a8 = (longlong *****)&local_1e8;
    local_2b0 = (undefined1  [8])&param_11;
    local_2c0 = (longlong *****)&local_168;
    local_2c8 = (longlong *****)&local_158;
    FUN_142c6e2ca(param_1,param_3,ppppplVar25,&local_150);
    ppppplVar25 = (longlong *****)CONCAT44(local_f8._4_4_,(int)local_f8);
    if (0 < iVar16) {
      ppppplVar25 = (longlong *****)FUN_142c6edf6(param_1,param_3,ppppplVar38,ppppplVar25);
      local_f8._0_4_ = (int)ppppplVar25;
      local_f8._4_4_ = (int)((ulonglong)ppppplVar25 >> 0x20);
    }
    ppppplVar10 = local_150;
    ppppplVar9 = ppppplStack_1b0;
    ppppplVar24 = local_268;
    *(undefined8 *)(param_3 + 0x11b58) = *(undefined8 *)(CONCAT44(uStack_dc,uStack_e0) + 0x84);
    *(longlong *)(param_3 + 0x11b60) = CONCAT44(uStack_dc,uStack_e0);
    *(longlong ******)(param_3 + 0x11a68) = ppppplVar38;
    *(longlong ******)(param_3 + 0x11a20) = local_150;
    *(longlong ******)(param_3 + 0x11a38) = local_148;
    *(longlong ******)(param_3 + 0x11a70) = ppppplVar25;
    *(longlong ******)(param_3 + 0x11a78) = ppppplVar39;
    *(longlong ******)(param_3 + 0x11a80) = local_230;
    *(longlong ******)(param_3 + 0x11a88) = local_248;
    *(longlong ******)(param_3 + 0x11a60) = local_250;
    *(undefined8 *)(param_3 + 0x11a18) = local_1e8;
    local_160 = (longlong ****)ppppplVar25;
    if ((longlong ******)ppppplStack_1b0 != (longlong ******)0x0) {
      pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
      ppppplVar25 = (longlong *****)(pppplVar35 + 0x28);
      if (param_1[0xf] < ppppplVar25) {
        FUN_140023dd8(local_268,0x150);
        pppplVar35 = (longlong ****)((longlong)*ppppplVar24 + 0xfU & 0xfffffffffffffff0);
        ppppplVar25 = (longlong *****)(pppplVar35 + 0x28);
      }
      *local_268 = (longlong ****)ppppplVar25;
      *pppplVar35 = (longlong ***)&PTR_FUN_14a22caa8;
      pppplVar35[6] = (longlong ***)0x0;
      pppplVar35[3] = (longlong ***)0x0;
      pppplVar35[4] = (longlong ***)0x0;
      *(undefined1 *)(pppplVar35 + 7) = 1;
      lVar29 = 0x52;
      do {
        puVar34 = (undefined8 *)((longlong)pppplVar35 + lVar29 + -0x12);
        *puVar34 = 0;
        puVar34[1] = 0;
        *(undefined4 *)((longlong)pppplVar35 + lVar29 + -2) = 0xffff0000;
        lVar29 = lVar29 + 0x18;
      } while (lVar29 != 0x112);
      ppppplVar25 = (longlong *****)(pppplVar35 + 2);
      *(undefined4 *)((longlong)pppplVar35 + 0x114) = 0;
      pppplVar35[0x20] = (longlong ***)0x0;
      pppplVar35[0x21] = (longlong ***)0x0;
      *(undefined2 *)(pppplVar35 + 0x22) = 0;
      *(undefined4 *)(pppplVar35 + 0x23) = 0xffffffff;
      *(undefined4 *)((longlong)pppplVar35 + 0x11c) = 0xffffffff;
      *(undefined4 *)(pppplVar35 + 0x24) = 0xffffffff;
      *(undefined4 *)((longlong)pppplVar35 + 0x124) = 0xffffffff;
      *(undefined4 *)(pppplVar35 + 0x25) = 0;
      *(undefined2 *)((longlong)pppplVar35 + 300) = 0;
      pppplVar35[0x26] = (longlong ***)0x0;
      iVar16 = *(int *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = iVar16 + 1U;
      if (*(uint *)((longlong)param_1 + 0xa4) < iVar16 + 1U) {
        FUN_1448cfae8(local_220,iVar16);
      }
      param_1[0x13][iVar16] = pppplVar35;
      fVar43 = 1.0;
      if (1.0 <= DAT_14c760368) {
        fVar43 = DAT_14c760368;
      }
      *(float *)(pppplVar35 + 2) = fVar43;
      pppplVar35[4] = (longlong ***)ppppplVar10;
      pppplVar35[3] = (longlong ***)param_10;
      lVar29 = FUN_1447e4f80();
      cVar13 = '\x02';
      if (*(char *)(lVar29 + 0x41) != '\x03') {
        cVar13 = *(char *)(lVar29 + 0x41);
      }
      pppplVar35[6] = *(longlong ****)(param_3 + 0x18);
      *(char *)(pppplVar35 + 7) = cVar13;
      pppplVar35[8] = (longlong ***)ppppplVar9;
      pppplVar35[9] = (longlong ***)0x0;
      *(undefined4 *)(pppplVar35 + 10) = 0xffff0001;
      cVar13 = *(char *)((longlong)ppppplVar9 + 0x93);
      uVar3 = *(undefined8 *)(param_3 + 0x13818);
      uVar26 = FUN_1417ed4a6();
      FUN_1448e935e(uVar3,&local_f8,uVar26,0);
      FUN_1417ed4a6();
      local_260 = (longlong *****)CONCAT44(local_f8._4_4_,(int)local_f8);
      ppplVar4 = (longlong ***)CONCAT44(uStack_ec,uStack_f0);
      uVar3 = *(undefined8 *)(param_3 + 0x13818);
      FUN_145e82876();
      FUN_1448e935e(uVar3,&local_f8,&DAT_14c9d8be0,cVar13 == '\x11');
      FUN_145e82876();
      ppplVar32 = (longlong ***)CONCAT44(local_f8._4_4_,(int)local_f8);
      local_228 = (longlong **)CONCAT44(uStack_ec,uStack_f0);
      local_210 = *(longlong ***)(param_3 + 0x30f8);
      local_248 = *(longlong ******)(param_3 + 0x3100);
      ppplVar23 = *(longlong ****)((longlong)ppppplVar9 + 0x84);
      FUN_145e82ae4();
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      FUN_1448f70da(ppplVar32,&DAT_14c9dabf0,ppppplVar25,&local_f8);
      FUN_145e82ae4();
      FUN_140069376(param_1);
      ppppplVar38 = local_268;
      pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar35 + 0x3f);
      if (param_1[0xf] < ppppplVar39) {
        FUN_140023dd8(local_268,0x200);
        pppplVar35 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
        ppppplVar39 = (longlong *****)(pppplVar35 + 0x3f);
      }
      *local_268 = (longlong ****)ppppplVar39;
      uStack_f0 = (undefined4)DAT_14c9dac38;
      uStack_ec = (undefined4)((ulonglong)DAT_14c9dac38 >> 0x20);
      if (DAT_14c9dac38 != 0) {
        LOCK();
        *(int *)(DAT_14c9dac38 + 8) = *(int *)(DAT_14c9dac38 + 8) + 1;
        UNLOCK();
      }
      uStack_e8 = 0x4c9dabf0;
      uStack_e4 = 1;
      local_2c8 = (longlong *****)CONCAT71(local_2c8._1_7_,2);
      local_f8 = ppppplVar25;
      FUN_140068f1a(pppplVar35,&local_109,&local_f8,1);
      *pppplVar35 = (longlong ***)&PTR_FUN_14a22cab0;
      pppplVar35[0x37] = (longlong ***)ppppplVar25;
      pppplVar35[0x38] = (longlong ***)local_260;
      pppplVar35[0x39] = ppplVar4;
      pppplVar35[0x3a] = ppplVar32;
      pppplVar35[0x3b] = (longlong ***)local_228;
      pppplVar35[0x3c] = (longlong ***)local_210;
      pppplVar35[0x3d] = (longlong ***)local_248;
      pppplVar35[0x3e] = ppplVar23;
      iVar16 = *(int *)(param_1 + 0x2e);
      *(uint *)(param_1 + 0x2e) = iVar16 + 1U;
      if (*(uint *)((longlong)param_1 + 0x174) < iVar16 + 1U) {
        FUN_14470e57a(local_238,iVar16);
      }
      param_1[0x2d][iVar16] = pppplVar35;
      *(int *)((longlong)pppplVar35 + 0x2c) = *(int *)(param_1 + 0x2e) + -1;
      FUN_140069100(param_1,pppplVar35);
      *(longlong ******)(param_3 + 0x11a28) = ppppplStack_1b0;
    }
    if (local_269 != '\0') {
      local_290 = (longlong *****)(param_3 + 0x11a50);
      local_2a0._8_8_ = &param_10;
      local_2a0._0_8_ = &param_9;
      ppppplStack_2a8 = (longlong *****)&local_138;
      local_2b0 = (undefined1  [8])&local_130;
      local_2b8 = (longlong *****)&local_128;
      local_2c0 = &local_160;
      local_2c8 = (longlong *****)&local_158;
      FUN_142c6dd2b(param_1,param_3,local_258,&local_150);
    }
    local_2b8 = (longlong *****)&local_148;
    local_2c0 = &local_160;
    local_2c8 = (longlong *****)&local_158;
    FUN_142c6e0ab(param_1,param_3,local_258,&local_150);
    pppppplVar31 = (longlong ******)local_148;
    break;
  case 3:
    goto switchD_142c5a1cd_caseD_3;
  case 4:
    local_2b8 = local_260;
    local_2c0 = (longlong *****)CONCAT44(local_2c0._4_4_,*(undefined4 *)(param_3 + 0x11a58));
    local_2c8 = (longlong *****)&local_140;
    FUN_142c66211(&local_1b8,param_1,param_3,local_228);
    local_2c8 = (longlong *****)&ppppplStack_1b0;
    local_208 = ppppplStack_1b0;
    FUN_142c5ea47(&local_f8,param_1,param_3,(longlong)ppppplStack_1b0 + 0x84);
    local_238 = (longlong *****)(param_3 + 0x11ad0);
    memcpy(local_238,&local_f8,0x88);
    local_1e0 = (longlong *****)0x0;
    local_250 = (longlong *****)CONCAT44(local_250._4_4_,*(undefined4 *)(param_3 + 0x11a58));
    local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,*(undefined4 *)(param_3 + 0x11a90));
    local_1f0 = ppppplStack_1a0;
    ppplVar23 = *(longlong ****)((longlong)ppppplStack_1a0 + 0x84);
    uStack_e8 = 0;
    uStack_e4 = 0;
    uVar37 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar37 = DAT_14ca84e48;
    }
    local_f8._0_4_ = uVar37 + (uVar37 == 0);
    local_f8._4_4_ = 1;
    uStack_f0 = 0x10109;
    pppppplVar22 = param_1 + 0xe;
    pppppplVar31 = (longlong ******)((longlong)param_1[0xe] + 0xfU & 0xfffffffffffffff0);
    pppppplVar21 = pppppplVar31 + 0x2a;
    local_240 = (longlong *****)pppppplVar22;
    if (param_1[0xf] < pppppplVar21) {
      FUN_140023dd8(pppppplVar22,0x160);
      pppppplVar31 = (longlong ******)((longlong)*pppppplVar22 + 0xfU & 0xfffffffffffffff0);
      pppppplVar21 = pppppplVar31 + 0x2a;
    }
    local_230 = (longlong *****)(param_1 + 0x31);
    param_1[0xe] = (longlong *****)pppppplVar21;
    FUN_1456bd266(pppppplVar31,L"Hair.VisibilityCompactCounter",&local_f8,0);
    iVar16 = *(int *)(param_1 + 0x32);
    *(uint *)(param_1 + 0x32) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x194) < iVar16 + 1U) {
      FUN_144737178(local_230,iVar16);
    }
    Var12 = local_cc._7_9_;
    ppppplVar25 = local_240;
    param_1[0x31][iVar16] = (longlong ****)pppppplVar31;
    *(int *)((longlong)pppppplVar31 + 0x7c) = *(int *)(param_1 + 0x32) + -1;
    uStack_e0 = DAT_14ca85098;
    uStack_f0 = (undefined4)_DAT_14ca85088;
    uStack_ec = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
    uStack_e8 = (undefined4)_DAT_14ca85090;
    uStack_e4 = (undefined4)((ulonglong)_DAT_14ca85090 >> 0x20);
    uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f8._0_4_ = 0x20009;
    local_f8._4_4_ = 0;
    local_cc._0_9_ = (unkuint9)0x1c << 0x38;
    local_cc._0_6_ = 0x10100010001;
    auVar6 = local_cc;
    uStack_d8 = 0;
    local_cc._10_6_ = SUB96(Var12,3);
    local_cc._0_9_ = auVar6._0_9_;
    local_cc[9] = 0xff;
    iVar16 = (int)ppplVar23;
    iStack_d4 = DAT_14ca84e40;
    if (iVar16 < DAT_14ca84e40) {
      iStack_d4 = iVar16;
    }
    if (iStack_d4 < 2) {
      iStack_d4 = 1;
    }
    iVar40 = (int)((ulonglong)ppplVar23 >> 0x20);
    local_d0 = DAT_14ca84e40;
    if (iVar40 < DAT_14ca84e40) {
      local_d0 = iVar40;
    }
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    pppppplVar21 = (longlong ******)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    pppppplVar22 = pppppplVar21 + 0x24;
    local_269 = bVar33;
    local_268 = (longlong *****)pppppplVar31;
    local_170 = (longlong *****)pppppplVar31;
    if (param_1[0xf] < pppppplVar22) {
      FUN_140023dd8(local_240,0x128);
      pppppplVar21 = (longlong ******)((longlong)*ppppplVar25 + 7U & 0xfffffffffffffff8);
      pppppplVar22 = pppppplVar21 + 0x24;
    }
    param_1[0xe] = (longlong *****)pppppplVar22;
    FUN_1456bbb8c(pppppplVar21,L"Hair.VisibilityCompactNodeIndex",&local_f8,0);
    iVar17 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar17 + 1U;
    if (*(uint *)((longlong)param_1 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(param_1 + 0x2f,iVar17);
    }
    auVar6 = local_cc;
    ppppplVar25 = local_240;
    param_1[0x2f][iVar17] = (longlong ****)pppppplVar21;
    *(int *)((longlong)pppppplVar21 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
    uStack_e0 = DAT_14ca85098;
    uStack_f0 = (undefined4)_DAT_14ca85088;
    uStack_ec = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
    uStack_e8 = (undefined4)_DAT_14ca85090;
    uStack_e4 = (undefined4)((ulonglong)_DAT_14ca85090 >> 0x20);
    uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f8._0_4_ = 0x20009;
    local_f8._4_4_ = 0;
    local_cc._0_9_ = (unkuint9)0x15 << 0x38;
    local_cc._0_6_ = 0x10100010001;
    auVar11 = local_cc;
    uStack_d8 = 0;
    local_cc._10_6_ = auVar6._10_6_;
    local_cc._0_9_ = auVar11._0_9_;
    local_cc[9] = 0xff;
    iStack_d4 = DAT_14ca84e40;
    if (iVar16 < DAT_14ca84e40) {
      iStack_d4 = iVar16;
    }
    if (iStack_d4 < 2) {
      iStack_d4 = 1;
    }
    local_d0 = DAT_14ca84e40;
    if (iVar40 < DAT_14ca84e40) {
      local_d0 = iVar40;
    }
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    pppppplVar31 = (longlong ******)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    pppppplVar22 = pppppplVar31 + 0x24;
    local_158 = (longlong *****)pppppplVar21;
    if (param_1[0xf] < pppppplVar22) {
      FUN_140023dd8(local_240,0x128);
      pppppplVar31 = (longlong ******)((longlong)*ppppplVar25 + 7U & 0xfffffffffffffff8);
      pppppplVar22 = pppppplVar31 + 0x24;
    }
    param_1[0xe] = (longlong *****)pppppplVar22;
    FUN_1456bbb8c(pppppplVar31,L"Hair.CoverageTexture",&local_f8,0);
    iVar17 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar17 + 1U;
    if (*(uint *)((longlong)param_1 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(param_1 + 0x2f,iVar17);
    }
    ppppplVar39 = local_240;
    param_1[0x2f][iVar17] = (longlong ****)pppppplVar31;
    *(int *)((longlong)pppppplVar31 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
    cVar13 = *(char *)(local_268 + 0xd);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar35 + 8);
    local_220 = (longlong *****)pppppplVar31;
    local_150 = (longlong *****)pppppplVar31;
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_240,0x48);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar35 + 8);
    }
    local_218 = (longlong *****)(param_1 + 0x33);
    param_1[0xe] = ppppplVar25;
    pppplVar35[1] = (longlong ***)local_268[1];
    pppplVar35[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 3) = 2;
    *(undefined8 *)((longlong)pppplVar35 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar35 + 5) = 0;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a1fb3e8;
    *(byte *)(pppplVar35 + 6) = cVar13 >> 7 & 0x1c;
    *(undefined2 *)((longlong)pppplVar35 + 0x31) = 0;
    pppplVar35[7] = (longlong ***)local_268;
    iVar17 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar17 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar17 + 1U) {
      FUN_1447568fc(local_218,iVar17);
    }
    param_1[0x33][iVar17] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    FUN_1405bfba3(param_1,pppplVar35,0,2);
    ppppplVar39 = local_240;
    uVar14 = *(undefined1 *)((longlong)pppppplVar21 + 0x94);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_240,0x50);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar35[1] = (longlong ***)pppppplVar21[1];
    pppplVar35[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar35 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar35 + 5) = 0;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar35 + 6) = uVar14;
    *(undefined1 *)(pppplVar35 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar35 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar35 + 0x35) = 0;
    pppplVar35[8] = (longlong ***)pppppplVar21;
    iVar17 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar17 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar17 + 1U) {
      FUN_1447568fc(local_218,iVar17);
    }
    param_1[0x33][iVar17] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    FUN_14042f6c6(param_1,pppplVar35,&local_f8,2);
    ppppplVar38 = local_220;
    ppppplVar39 = local_240;
    uVar14 = *(undefined1 *)((longlong)local_220 + 0x94);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_240,0x50);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar35[1] = (longlong ***)ppppplVar38[1];
    pppplVar35[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar35 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar35 + 5) = 0;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar35 + 6) = uVar14;
    *(undefined1 *)(pppplVar35 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar35 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar35 + 0x35) = 0;
    pppplVar35[8] = (longlong ***)ppppplVar38;
    iVar17 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar17 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar17 + 1U) {
      FUN_1447568fc(local_218,iVar17);
    }
    param_1[0x33][iVar17] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_260 = (longlong *****)param_1;
    FUN_140c4fe69(param_1,pppplVar35,&local_f8,2);
    FUN_1400e05f2(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    lVar29 = DAT_14c9d2468;
    if (DAT_14c9d7010 < 1) {
      uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
      iVar17 = *local_200;
      if (((iVar17 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar17 == 2)) {
        uVar28 = 0;
      }
      else if (iVar17 == 1) {
        DVar19 = FUN_140ad26c0();
        DVar20 = GetCurrentThreadId();
        uVar28 = (ulonglong)(DVar19 != DVar20);
      }
      else {
        uVar28 = 1;
      }
      if (((*(int *)(lVar29 + uVar28 * 4) != 1) &&
          (3 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf])) &&
         ((*local_200 != 0x40000002 && ((*local_200 == 1 && (DAT_14c86a9f8 != '\0')))))) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
    }
    iVar17 = FUN_147180cad(*(undefined2 *)
                            (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    ppppplVar39 = local_240;
    ppppplVar25 = local_260;
    uVar18 = iVar17 * iVar40 * iVar16;
    uVar37 = 8;
    if (DAT_14ca84e48 < 8) {
      uVar37 = DAT_14ca84e48;
    }
    local_f8._0_4_ = uVar37 + (uVar37 == 0);
    uStack_f0 = 0x10109;
    local_258 = (longlong *****)CONCAT44(local_258._4_4_,uVar18);
    uVar37 = DAT_14ca84e48;
    if (uVar18 < DAT_14ca84e48) {
      uVar37 = uVar18;
    }
    uStack_e8 = 0;
    uStack_e4 = 0;
    local_f8._4_4_ = uVar37 + (uVar37 == 0);
    pppppplVar31 = (longlong ******)((longlong)local_260[0xe] + 0xfU & 0xfffffffffffffff0);
    pppppplVar22 = pppppplVar31 + 0x2a;
    if (local_260[0xf] < pppppplVar22) {
      FUN_140023dd8(local_240,0x160);
      pppppplVar31 = (longlong ******)((longlong)*ppppplVar39 + 0xfU & 0xfffffffffffffff0);
      pppppplVar22 = pppppplVar31 + 0x2a;
    }
    ppppplVar25[0xe] = (longlong ****)pppppplVar22;
    FUN_1456bd266(pppppplVar31,L"Hair.VisibilityControlPointIdCompactNodeData",&local_f8,0);
    iVar16 = *(int *)(ppppplVar25 + 0x32);
    *(uint *)(ppppplVar25 + 0x32) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x194) < iVar16 + 1U) {
      FUN_144737178(local_230,iVar16);
    }
    ppppplVar39 = local_240;
    ppppplVar25[0x31][iVar16] = (longlong ***)pppppplVar31;
    *(int *)((longlong)pppppplVar31 + 0x7c) = *(int *)(ppppplVar25 + 0x32) + -1;
    uVar37 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar37 = DAT_14ca84e48;
    }
    local_f8._0_4_ = uVar37 + (uVar37 == 0);
    uStack_f0 = 0x4109;
    uVar37 = DAT_14ca84e48;
    if ((uint)local_258 < DAT_14ca84e48) {
      uVar37 = (uint)local_258;
    }
    uStack_e8 = 0;
    uStack_e4 = 0;
    local_f8._4_4_ = uVar37 + (uVar37 == 0);
    pppppplVar41 = (longlong ******)((longlong)ppppplVar25[0xe] + 0xfU & 0xfffffffffffffff0);
    pppppplVar22 = pppppplVar41 + 0x2a;
    local_168 = (longlong *****)pppppplVar31;
    if (ppppplVar25[0xf] < pppppplVar22) {
      FUN_140023dd8(local_240,0x160);
      pppppplVar41 = (longlong ******)((longlong)*ppppplVar39 + 0xfU & 0xfffffffffffffff0);
      pppppplVar22 = pppppplVar41 + 0x2a;
    }
    ppppplVar25[0xe] = (longlong ****)pppppplVar22;
    FUN_1456bd266(pppppplVar41,L"Hair.VisibilityPrimitiveIdCompactNodeCoord",&local_f8,0);
    iVar16 = *(int *)(ppppplVar25 + 0x32);
    *(uint *)(ppppplVar25 + 0x32) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x194) < iVar16 + 1U) {
      FUN_144737178(local_230,iVar16);
    }
    ppppplVar25[0x31][iVar16] = (longlong ***)pppppplVar41;
    *(int *)((longlong)pppppplVar41 + 0x7c) = *(int *)(ppppplVar25 + 0x32) + -1;
    local_230 = (longlong *****)pppppplVar41;
    FUN_14476842e(ppppplVar25,&DAT_14ca63b28,L"BlackDummy",2);
    ppppplVar38 = local_240;
    pppplVar35 = (longlong ****)((longlong)ppppplVar25[0xe] + 0xfU & 0xfffffffffffffff0);
    ppppplVar39 = (longlong *****)(pppplVar35 + 0x16);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_240,0xc0);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar38 + 0xfU & 0xfffffffffffffff0);
      ppppplVar39 = (longlong *****)(pppplVar35 + 0x16);
    }
    ppppplVar25 = local_260;
    local_260[0xe] = (longlong ****)ppppplVar39;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a22c528;
    pppplVar35[0x12] = (longlong ***)0x0;
    pppplVar35[7] = (longlong ***)0x0;
    pppplVar35[8] = (longlong ***)0x0;
    pppplVar35[9] = (longlong ***)0x0;
    pppplVar35[10] = (longlong ***)0x0;
    pppplVar35[0xb] = (longlong ***)0x0;
    pppplVar35[0xc] = (longlong ***)0x0;
    pppplVar35[0xd] = (longlong ***)0x0;
    pppplVar35[0xe] = (longlong ***)0x0;
    pppplVar35[0xf] = (longlong ***)0x0;
    pppplVar35[0x10] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 0x13) = 1;
    pppplVar35[0x14] = (longlong ***)0x0;
    *(undefined4 *)(pppplVar35 + 0x15) = 4;
    iVar16 = *(int *)(local_260 + 0x14);
    *(uint *)(local_260 + 0x14) = iVar16 + 1U;
    if (*(uint *)((longlong)local_260 + 0xa4) < iVar16 + 1U) {
      FUN_1448cfae8(local_260 + 0x13,iVar16);
    }
    ppppplVar25[0x13][iVar16] = (longlong ***)pppplVar35;
    pppplVar35[9] = (longlong ***)local_208;
    pppplVar35[7] = (longlong ***)local_1f0;
    pppplVar35[8] = (longlong ***)local_198;
    *(int *)((longlong)pppplVar35 + 0x1c) = (int)local_250;
    pppplVar35[2] = ppplVar23;
    *(uint *)(pppplVar35 + 3) = (uint)local_258;
    fVar43 = DAT_14c760378;
    if (1.0 <= DAT_14c760378) {
      fVar43 = 1.0;
    }
    if (fVar43 <= 0.1) {
      fVar43 = 0.1;
    }
    *(float *)(pppplVar35 + 4) = fVar43;
    *(uint *)((longlong)pppplVar35 + 0x24) = (uint)(0 < DAT_14c9d7108);
    lVar29 = FUN_1447e4f80();
    ppppplVar39 = local_240;
    cVar13 = '\x02';
    if (*(char *)(lVar29 + 0x41) != '\x03') {
      cVar13 = *(char *)(lVar29 + 0x41);
    }
    pppplVar35[0x12] = *(longlong ****)(param_3 + 0x18);
    *(char *)(pppplVar35 + 0x13) = cVar13;
    cVar13 = *(char *)(local_268 + 0xd);
    pppplVar36 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar38 = (longlong *****)(pppplVar36 + 8);
    if (ppppplVar25[0xf] < ppppplVar38) {
      FUN_140023dd8(local_240,0x48);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
      ppppplVar38 = (longlong *****)(pppplVar36 + 8);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar38;
    pppplVar36[1] = (longlong ***)local_268[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 2;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar36 + 5) = 0;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb3e8;
    *(byte *)(pppplVar36 + 6) = cVar13 >> 7 & 0x1c;
    *(undefined2 *)((longlong)pppplVar36 + 0x31) = 0;
    pppplVar36[7] = (longlong ***)local_268;
    iVar16 = *(int *)(ppppplVar25 + 0x34);
    *(uint *)(ppppplVar25 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_218,iVar16);
    }
    ppppplVar38 = local_240;
    ppppplVar25[0x33][iVar16] = (longlong ***)pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(ppppplVar25 + 0x34) + -1;
    pppplVar35[10] = (longlong ***)pppplVar36;
    uVar14 = *(undefined1 *)((longlong)pppppplVar21 + 0x94);
    pppplVar36 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = (longlong *****)(pppplVar36 + 9);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_240,0x50);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar36 + 9);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar39;
    pppplVar36[1] = (longlong ***)pppppplVar21[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar36 + 5) = 0;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar36 + 6) = uVar14;
    *(undefined1 *)(pppplVar36 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar36 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar36 + 0x35) = 0;
    pppplVar36[8] = (longlong ***)pppppplVar21;
    iVar16 = *(int *)(ppppplVar25 + 0x34);
    *(uint *)(ppppplVar25 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_218,iVar16);
    }
    ppppplVar38 = local_240;
    ppppplVar25[0x33][iVar16] = (longlong ***)pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(ppppplVar25 + 0x34) + -1;
    pppplVar35[0xb] = (longlong ***)pppplVar36;
    cVar13 = *(char *)(pppppplVar31 + 0xd);
    pppplVar36 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = (longlong *****)(pppplVar36 + 8);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_240,0x48);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar36 + 8);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar39;
    pppplVar36[1] = (longlong ***)pppppplVar31[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 2;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar36 + 5) = 0;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb3e8;
    *(byte *)(pppplVar36 + 6) = cVar13 >> 7 & 0x1c;
    *(undefined2 *)((longlong)pppplVar36 + 0x31) = 0;
    pppplVar36[7] = (longlong ***)pppppplVar31;
    iVar16 = *(int *)(ppppplVar25 + 0x34);
    *(uint *)(ppppplVar25 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_218,iVar16);
    }
    ppppplVar24 = local_220;
    ppppplVar38 = local_240;
    ppppplVar25[0x33][iVar16] = (longlong ***)pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(ppppplVar25 + 0x34) + -1;
    pppplVar35[0xd] = (longlong ***)pppplVar36;
    pppplVar36 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = (longlong *****)(pppplVar36 + 8);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_240,0x48);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar36 + 8);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar39;
    pppplVar36[1] = (longlong ***)local_230[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 2;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar36 + 5) = 0;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb3e8;
    *(undefined2 *)(pppplVar36 + 6) = 0x31;
    *(undefined1 *)((longlong)pppplVar36 + 0x32) = 0;
    pppplVar36[7] = (longlong ***)local_230;
    iVar16 = *(int *)(ppppplVar25 + 0x34);
    *(uint *)(ppppplVar25 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_218,iVar16);
    }
    ppppplVar38 = local_240;
    ppppplVar25[0x33][iVar16] = (longlong ***)pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(ppppplVar25 + 0x34) + -1;
    pppplVar35[0xe] = (longlong ***)pppplVar36;
    uVar14 = *(undefined1 *)((longlong)ppppplVar24 + 0x94);
    pppplVar36 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = (longlong *****)(pppplVar36 + 9);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_240,0x50);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar36 + 9);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar39;
    pppplVar36[1] = (longlong ***)ppppplVar24[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 0;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(pppplVar36 + 5) = 0;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb948;
    *(undefined1 *)(pppplVar36 + 6) = uVar14;
    *(undefined1 *)(pppplVar36 + 7) = 0;
    *(undefined4 *)((longlong)pppplVar36 + 0x31) = 0;
    *(undefined2 *)((longlong)pppplVar36 + 0x35) = 0;
    pppplVar36[8] = (longlong ***)ppppplVar24;
    iVar16 = *(int *)(ppppplVar25 + 0x34);
    *(uint *)(ppppplVar25 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_218,iVar16);
    }
    ppppplVar38 = local_240;
    ppppplVar25[0x33][iVar16] = (longlong ***)pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(ppppplVar25 + 0x34) + -1;
    pppplVar35[0xc] = (longlong ***)pppplVar36;
    pppplVar35[5] = *(longlong ****)(param_3 + 0x11adc);
    *(undefined4 *)(pppplVar35 + 6) = 8;
    ppplVar23 = *(longlong ****)(param_3 + 0x11b30);
    pppplVar36 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = (longlong *****)(pppplVar36 + 9);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_240,0x50);
      pppplVar36 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar36 + 9);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar39;
    pppplVar36[1] = (longlong ***)ppplVar23[1];
    pppplVar36[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar36 + 3) = 3;
    *(undefined8 *)((longlong)pppplVar36 + 0x1c) = 0xffffffffffffffff;
    *pppplVar36 = (longlong ***)&PTR_FUN_14a1fb168;
    *(undefined1 *)(pppplVar36 + 5) = 0x1c;
    *(undefined8 *)((longlong)pppplVar36 + 0x2c) = 0xffffffff00000000;
    pppplVar36[7] = (longlong ***)0x0;
    pppplVar36[8] = ppplVar23;
    iVar16 = *(int *)(ppppplVar25 + 0x34);
    *(uint *)(ppppplVar25 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_218,iVar16);
    }
    ppppplVar25[0x33][iVar16] = (longlong ***)pppplVar36;
    *(int *)((longlong)pppplVar36 + 0x1c) = *(int *)(ppppplVar25 + 0x34) + -1;
    pppplVar35[0x10] = (longlong ***)pppplVar36;
    pppplVar35[0xf] = *(longlong ****)(param_3 + 0x11ae8);
    pppplVar35[0x14] = *(longlong ****)(param_3 + 0x11b40);
    *(undefined4 *)(pppplVar35 + 0x15) = 4;
    local_108 = 0x40;
    uStack_104 = (int)local_250;
    FUN_147192bac(&local_1d8,*(undefined8 *)(param_3 + 0x13818));
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    local_2c8 = *(longlong ******)(param_3 + 0x11b40);
    local_2c0 = (longlong *****)&local_f8;
    FUN_147192c69(ppppplVar25,&local_1e8,&local_1d8,pppplVar35 + 2);
    if (CONCAT44(local_f8._4_4_,(int)local_f8) != 0) {
      plVar27 = (longlong *)CONCAT44(uStack_e4,uStack_e8);
      if ((longlong *)CONCAT44(uStack_e4,uStack_e8) == (longlong *)0x0) {
        plVar27 = (longlong *)&uStack_d8;
      }
      (**(code **)(*plVar27 + 0x10))();
    }
    ppppplVar24 = local_170;
    ppppplVar38 = local_240;
    cVar13 = *(char *)(local_170 + 0xd);
    pppplVar35 = (longlong ****)((longlong)ppppplVar25[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = (longlong *****)(pppplVar35 + 9);
    if (ppppplVar25[0xf] < ppppplVar39) {
      FUN_140023dd8(local_240,0x50);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar38 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar35 + 9);
    }
    ppppplVar25[0xe] = (longlong ****)ppppplVar39;
    pppplVar35[1] = (longlong ***)ppppplVar24[1];
    pppplVar35[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 3) = 3;
    *(undefined8 *)((longlong)pppplVar35 + 0x1c) = 0xffffffffffffffff;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a1fb168;
    *(byte *)(pppplVar35 + 5) = cVar13 >> 7 & 0x1c;
    *(undefined8 *)((longlong)pppplVar35 + 0x2c) = 0xffffffff00000000;
    pppplVar35[7] = (longlong ***)0x0;
    pppplVar35[8] = (longlong ***)ppppplVar24;
    iVar16 = *(int *)(ppppplVar25 + 0x34);
    *(uint *)(ppppplVar25 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)ppppplVar25 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(local_218,iVar16);
    }
    ppppplVar25[0x33][iVar16] = (longlong ***)pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x1c) = *(int *)(ppppplVar25 + 0x34) + -1;
    local_280 = (longlong *****)
                FUN_142c6caa1(ppppplVar25,param_3,(ulonglong)local_1f8 & 0xffffffff,pppplVar35);
    ppppplVar38 = local_158;
    ppppplVar39 = local_168;
    ppppplVar25 = local_230;
    *(uint *)(param_3 + 0x11a5c) = (uint)local_258;
    local_288 = ppppplVar24;
    local_290 = local_230;
    local_2a0._8_8_ = local_168;
    local_2a0._0_8_ = local_158;
    ppppplStack_2a8._0_4_ = *(undefined4 *)(param_3 + 0x11a90);
    local_2b0 = (undefined1  [8])param_12;
    local_2b8 = (longlong *****)local_228;
    local_2c0 = (longlong *****)CONCAT71(local_2c0._1_7_,1);
    local_2c8 = (longlong *****)((ulonglong)local_2c8 & 0xffffffffffffff00);
    local_268 = local_280;
    FUN_142c6cda7(&local_f8,local_260,local_210,param_3);
    pppppplVar22 = (longlong ******)local_238;
    local_2b8 = (longlong *****)&uStack_f0;
    ppppplStack_2a8 = (longlong *****)&local_1e0;
    local_2b0 = (undefined1  [8])&param_11;
    local_2c8 = (longlong *****)&local_158;
    local_2c0 = (longlong *****)&local_168;
    FUN_142c6e2ca(local_260,param_3,local_238,&local_150);
    pppppplVar31 = (longlong ******)local_248;
    param_1 = (longlong ******)local_260;
    local_160 = (longlong ****)CONCAT44(local_f8._4_4_,(int)local_f8);
    *(undefined8 *)(param_3 + 0x11b58) = *(undefined8 *)(CONCAT44(uStack_dc,uStack_e0) + 0x84);
    *(longlong *)(param_3 + 0x11b60) = CONCAT44(uStack_dc,uStack_e0);
    *(longlong ******)(param_3 + 0x11a68) = ppppplVar38;
    *(longlong ******)(param_3 + 0x11a20) = local_150;
    *(longlong ******)(param_3 + 0x11a38) = local_248;
    *(longlong *****)(param_3 + 0x11a70) = local_160;
    *(longlong ******)(param_3 + 0x11a78) = ppppplVar39;
    local_2c8 = (longlong *****)&local_158;
    *(longlong ******)(param_3 + 0x11a80) = ppppplVar25;
    *(longlong ******)(param_3 + 0x11a88) = local_268;
    *(longlong ******)(param_3 + 0x11a60) = ppppplVar24;
    *(longlong ******)(param_3 + 0x11a18) = local_1e0;
    if (local_269 != '\0') {
      local_290 = (longlong *****)(param_3 + 0x11a50);
      local_2a0._8_8_ = &param_10;
      local_2a0._0_8_ = &param_9;
      ppppplStack_2a8 = (longlong *****)&local_138;
      local_2b0 = (undefined1  [8])&local_130;
      local_2b8 = (longlong *****)&local_128;
      local_2c0 = &local_160;
      FUN_142c6dd2b(local_260,param_3,pppppplVar22,&local_150);
    }
    goto LAB_142c5a73b;
  case 5:
    local_2c0 = local_260;
    local_2c8 = (longlong *****)&local_140;
    auVar6[0xf] = 0;
    auVar6._0_15_ = stack0xfffffffffffffd51;
    _local_2b0 = auVar6 << 8;
    local_2b8 = (longlong *****)CONCAT71(local_2b8._1_7_,1);
    FUN_142c39ece(&local_1b8,param_1,param_3,local_228);
    ppppplVar25 = local_190;
    if ((longlong ******)ppppplStack_1a0 == (longlong ******)0x0) goto LAB_142c5a8e0;
    uVar15 = *(undefined4 *)((longlong)ppppplStack_1a0 + 100);
    *(undefined4 *)(param_3 + 0x11a5c) = uVar15;
    *(undefined4 *)(param_3 + 0x11ab4) = uVar15;
    *(undefined8 *)(param_3 + 0x11ab8) = local_180;
    cVar13 = *(char *)(local_190 + 0xd);
    pppppplVar22 = param_1 + 0xe;
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar39 = (longlong *****)(pppplVar35 + 9);
    local_269 = bVar33;
    local_250 = (longlong *****)pppppplVar22;
    if (param_1[0xf] < ppppplVar39) {
      FUN_140023dd8(pppppplVar22,0x50);
      pppplVar35 = (longlong ****)((longlong)*pppppplVar22 + 7U & 0xfffffffffffffff8);
      ppppplVar39 = (longlong *****)(pppplVar35 + 9);
    }
    param_1[0xe] = ppppplVar39;
    pppplVar35[1] = (longlong ***)ppppplVar25[1];
    pppplVar35[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 3) = 3;
    *(undefined8 *)((longlong)pppplVar35 + 0x1c) = 0xffffffffffffffff;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a1fb168;
    *(byte *)(pppplVar35 + 5) = cVar13 >> 7 & 0x1c;
    *(undefined8 *)((longlong)pppplVar35 + 0x2c) = 0xffffffff00000000;
    pppplVar35[7] = (longlong ***)0x0;
    pppplVar35[8] = (longlong ***)ppppplVar25;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(param_1 + 0x33,iVar16);
    }
    ppppplVar39 = local_250;
    param_1[0x33][iVar16] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    *(longlong *****)(param_3 + 0x11ac0) = pppplVar35;
    *(undefined4 *)(param_3 + 0x11ab0) = ppppplStack_1b0._0_4_;
    local_260 = ppppplStack_1a0;
    local_258 = local_1a8;
    local_158 = local_1a8;
    local_170 = local_190;
    local_268 = local_198;
    local_168 = local_198;
    cVar13 = *(char *)(local_190 + 0xd);
    pppplVar35 = (longlong ****)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    if (param_1[0xf] < ppppplVar25) {
      FUN_140023dd8(local_250,0x50);
      pppplVar35 = (longlong ****)((longlong)*ppppplVar39 + 7U & 0xfffffffffffffff8);
      ppppplVar25 = (longlong *****)(pppplVar35 + 9);
    }
    param_1[0xe] = ppppplVar25;
    pppplVar35[1] = (longlong ***)local_190[1];
    pppplVar35[2] = (longlong ***)0x0;
    *(undefined1 *)(pppplVar35 + 3) = 3;
    *(undefined8 *)((longlong)pppplVar35 + 0x1c) = 0xffffffffffffffff;
    *pppplVar35 = (longlong ***)&PTR_FUN_14a1fb168;
    *(byte *)(pppplVar35 + 5) = cVar13 >> 7 & 0x1c;
    *(undefined8 *)((longlong)pppplVar35 + 0x2c) = 0xffffffff00000000;
    pppplVar35[7] = (longlong ***)0x0;
    pppplVar35[8] = (longlong ***)local_190;
    iVar16 = *(int *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x34) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1a4) < iVar16 + 1U) {
      FUN_1447568fc(param_1 + 0x33,iVar16);
    }
    param_1[0x33][iVar16] = pppplVar35;
    *(int *)((longlong)pppplVar35 + 0x1c) = *(int *)(param_1 + 0x34) + -1;
    pppppplVar21 = (longlong ******)
                   FUN_142c6caa1(param_1,param_3,*(undefined4 *)(param_3 + 0x11a90),pppplVar35);
    local_2c8 = (longlong *****)&local_1d8;
    local_1d8 = (longlong *****)0x0;
    FUN_142c5ea47(&local_f8,param_1,param_3,&local_1b8);
    pppppplVar22 = (longlong ******)(param_3 + 0x11ad0);
    memcpy(pppppplVar22,&local_f8,0x88);
    local_288 = local_190;
    local_290 = local_260;
    local_2a0._8_8_ = local_268;
    local_2a0._0_8_ = local_258;
    ppppplStack_2a8._0_4_ = *(undefined4 *)(param_3 + 0x11a90);
    local_2b0 = (undefined1  [8])param_12;
    local_2b8 = (longlong *****)local_228;
    local_2c0 = (longlong *****)((ulonglong)local_2c0 & 0xffffffffffffff00);
    local_2c8 = (longlong *****)((ulonglong)local_2c8 & 0xffffffffffffff00);
    local_280 = (longlong *****)pppppplVar21;
    FUN_142c6cda7(&local_1d8,param_1,local_210,param_3);
    auVar6 = local_cc;
    ppppplVar25 = local_250;
    uStack_e0 = DAT_14ca85098;
    iStack_d4 = DAT_14ca84e40;
    if ((int)local_140 < DAT_14ca84e40) {
      iStack_d4 = (int)local_140;
    }
    if (iStack_d4 < 2) {
      iStack_d4 = 1;
    }
    iVar16 = (int)((ulonglong)local_140 >> 0x20);
    local_d0 = DAT_14ca84e40;
    if (iVar16 < DAT_14ca84e40) {
      local_d0 = iVar16;
    }
    uStack_f0 = (undefined4)_DAT_14ca85088;
    uStack_ec = (undefined4)((ulonglong)_DAT_14ca85088 >> 0x20);
    uStack_e8 = (undefined4)_DAT_14ca85090;
    uStack_e4 = (undefined4)((ulonglong)_DAT_14ca85090 >> 0x20);
    uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f8._0_4_ = 0x20008;
    local_f8._4_4_ = 0;
    local_cc._0_9_ = (unkuint9)0x15 << 0x38;
    local_cc._0_6_ = 0x10100010001;
    auVar11 = local_cc;
    uStack_d8 = 0;
    local_cc._10_6_ = auVar6._10_6_;
    local_cc._0_9_ = auVar11._0_9_;
    local_cc[9] = 0xff;
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    pppppplVar41 = (longlong ******)((longlong)param_1[0xe] + 7U & 0xfffffffffffffff8);
    pppppplVar31 = pppppplVar41 + 0x24;
    if (param_1[0xf] < pppppplVar31) {
      FUN_140023dd8(local_250,0x128);
      pppppplVar41 = (longlong ******)((longlong)*ppppplVar25 + 7U & 0xfffffffffffffff8);
      pppppplVar31 = pppppplVar41 + 0x24;
    }
    param_1[0xe] = (longlong *****)pppppplVar31;
    FUN_1456bbb8c(pppppplVar41,L"Hair.CoverageTexture",&local_f8,0);
    cVar13 = local_269;
    iVar16 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0x184) < iVar16 + 1U) {
      FUN_14472c0f6(param_1 + 0x2f,iVar16);
    }
    pppppplVar31 = (longlong ******)local_248;
    param_1[0x2f][iVar16] = (longlong ****)pppppplVar41;
    *(int *)((longlong)pppppplVar41 + 0x9c) = *(int *)(param_1 + 0x30) + -1;
    local_160 = (longlong ****)local_1d8;
    *(undefined8 *)(param_3 + 0x11b58) = *(undefined8 *)(local_1c0 + 0x84);
    *(longlong *)(param_3 + 0x11b60) = local_1c0;
    *(longlong ******)(param_3 + 0x11a68) = local_258;
    *(longlong *******)(param_3 + 0x11a20) = pppppplVar41;
    *(longlong ******)(param_3 + 0x11a38) = local_248;
    *(longlong ******)(param_3 + 0x11a70) = local_1d8;
    *(longlong ******)(param_3 + 0x11a78) = local_268;
    *(longlong ******)(param_3 + 0x11a80) = local_260;
    *(longlong *******)(param_3 + 0x11a88) = pppppplVar21;
    *(longlong ******)(param_3 + 0x11a60) = local_190;
    *(undefined8 *)(param_3 + 0x11a18) = 0;
    *(undefined8 *)(param_3 + 0x11ac8) = local_1c8;
    local_150 = (longlong *****)pppppplVar41;
    if (cVar13 != '\0') {
      local_290 = (longlong *****)(param_3 + 0x11a50);
      local_2a0._8_8_ = &param_10;
      local_2a0._0_8_ = &param_9;
      ppppplStack_2a8 = (longlong *****)&local_138;
      local_2b0 = (undefined1  [8])&local_130;
      local_2b8 = (longlong *****)&local_128;
      local_2c0 = &local_160;
      local_2c8 = (longlong *****)&local_158;
      FUN_142c6dd2b(param_1,param_3,pppppplVar22,&local_150);
    }
LAB_142c5a73b:
    local_2b8 = (longlong *****)&local_148;
    local_2c0 = &local_160;
    local_2c8 = (longlong *****)&local_158;
    FUN_142c6e0ab(param_1,param_3,pppppplVar22,&local_150);
  }
  local_2c0 = (longlong *****)(param_3 + 0x11a48);
  local_2c8 = (longlong *****)(param_3 + 0x11a40);
  FUN_142c6e18a(param_1,param_3,pppppplVar31,param_3 + 0x11aa0);
switchD_142c5a1cd_caseD_3:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar27 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar27 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar27 + 0x68))(plVar27);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar29 = DAT_14ca97068;
  bVar33 = true;
  cVar13 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    iVar16 = *local_200;
    cVar13 = '\x02';
    if (((iVar16 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar16 == 2)) {
      uVar28 = 0;
    }
    else if (iVar16 == 1) {
      DVar19 = FUN_140ad26c0();
      DVar20 = GetCurrentThreadId();
      uVar28 = (ulonglong)(DVar19 != DVar20);
      cVar13 = DAT_14ca96da8;
    }
    else {
      uVar28 = 1;
    }
    bVar33 = *(int *)(lVar29 + uVar28 * 4) != 0;
  }
  if ((((bVar33) && (cVar13 != '\0')) &&
      ((*(char *)(param_3 + 0x3098) == '\x01' &&
       ((*(char *)(param_3 + 0x23e8) != '\x01' || (*(char *)(param_3 + 0x23ea) == '\x01')))))) &&
     (*(longlong *)(param_3 + 0x11a50) == 0)) {
    local_f8._4_4_ = *(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc);
    local_f8._0_4_ = *(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8);
    pppppplVar22 = (longlong ******)FUN_142c77a23(param_1);
    local_290 = (longlong *****)param_10;
    local_2a0 = (undefined1  [16])0x0;
    _local_2b0 = (undefined1  [16])0x0;
    local_2b8 = &local_160;
    local_2c0 = (longlong *****)&local_158;
    local_2c8 = (longlong *****)&local_150;
    local_288 = (longlong *****)pppppplVar22;
    FUN_142c77b8e(param_1,param_3,param_3 + 0x11ad0,2);
    *(longlong *******)(param_3 + 0x11a50) = pppppplVar22;
  }
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  puVar30 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar30 = DAT_14ca96af8;
  }
  if (((((uint)puVar30[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0) &&
      (param_9 != 0 && 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf])) &&
     (1 < *(byte *)(param_9 + 0x91))) {
    *(undefined8 *)(param_3 + 0x11a18) = 0;
  }
LAB_142c5a8e0:
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c5ea47 FUN_142c5ea47 body=5890 status=ok
// SIG undefined FUN_142c5ea47(void)

undefined8 *
FUN_142c5ea47(undefined8 *param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  longlong *local_e0;
  char local_d1;
  longlong local_d0;
  uint local_c4;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  int *local_98;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_55;
  undefined1 *local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = *param_5;
  iVar3 = 0;
  if (local_a0 == 0) {
    uVar6 = 1;
    local_c4 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(char *)(local_a0 + 0x93) == '\x1c');
    local_c4 = (uint)uVar6;
  }
  local_d1 = (char)uVar6;
  iVar11 = 0;
  if ((((DAT_14ca84f10 == '\x01') && (iVar11 = iVar3, 0x3f < DAT_14ca84f18)) &&
      (uVar4 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2),
      uVar4 != 0)) && ((*(byte *)(&DAT_14ca814d8 + uVar4 * 0xf) & 0x80) == 0)) {
    iVar11 = (uint)(((&DAT_14ca814cd)[uVar4 * 0x3c] & 3) != 0) * 2;
  }
  local_c0 = CONCAT44(local_c0._4_4_,iVar11);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar3 = (int)ROUND(-0.5 - ((float)param_4[1] * 0.125 + (float)param_4[1] * 0.125)) >> 1;
  iVar11 = (int)ROUND(-0.5 - ((float)*param_4 * 0.125 + (float)*param_4 * 0.125)) >> 1;
  uVar12 = iVar11 * iVar3;
  *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(-iVar3,-iVar11);
  *(uint *)(param_1 + 1) = uVar12;
  *param_1 = *(undefined8 *)param_4;
  *(undefined1 *)((longlong)param_1 + 0x14) = DAT_14ca84e08;
  uStack_68 = 0x4109;
  local_60 = 0;
  uVar13 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar13 = DAT_14ca84e48;
  }
  local_70 = uVar13 + (uVar13 == 0);
  plVar1 = (longlong *)(param_2 + 0x70);
  uVar15 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar15 + 0x150;
  local_e0 = plVar1;
  local_b0 = param_3;
  local_98 = param_4;
  iStack_6c = local_70;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(plVar1,0x160);
    uVar15 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar15 + 0x150;
  }
  lVar5 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar15,L"Hair.TileCountBuffer",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar15;
  *(int *)(uVar15 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar13 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar13 = DAT_14ca84e48;
  }
  local_70 = uVar13 + (uVar13 == 0);
  uVar13 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar13 = DAT_14ca84e48;
  }
  param_1[0xc] = uVar15;
  uStack_68 = 0x4189;
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar10 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar10 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar10 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar10 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar10,L"Hair.TileIndirectDrawBuffer",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x7c) = *(int *)(param_2 + 400) + -1;
  param_1[0xd] = uVar10;
  uVar13 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar13 = DAT_14ca84e48;
  }
  uStack_68 = 0x4189;
  local_70 = uVar13 + (uVar13 == 0);
  uVar13 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar13 = DAT_14ca84e48;
  }
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar10 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar10 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar10 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar10 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar10,L"Hair.TileIndirectDispatchBuffer",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x7c) = *(int *)(param_2 + 400) + -1;
  param_1[0xe] = uVar10;
  uVar13 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar13 = DAT_14ca84e48;
  }
  uStack_68 = 0x4189;
  local_70 = uVar13 + (uVar13 == 0);
  uVar13 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar13 = DAT_14ca84e48;
  }
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar10 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar10 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar10 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar10 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar10,L"Hair.TileIndirectRayDispatchBuffer",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x7c) = *(int *)(param_2 + 400) + -1;
  param_1[0xf] = uVar10;
  uVar13 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar13 = DAT_14ca84e48;
  }
  uStack_68 = 0x4189;
  local_70 = uVar13 + (uVar13 == 0);
  uVar13 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar13 = DAT_14ca84e48;
  }
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar10 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar10 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar10 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar10 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar10,L"Hair.TilePerThreadIndirectDispatchBuffer",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar13 = DAT_14ca84e48;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  param_1[0x10] = uVar10;
  local_70 = uVar9 + (uVar9 == 0);
  uStack_68 = 0x4109;
  if (uVar12 < uVar13) {
    uVar13 = uVar12;
  }
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar10 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar10 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar10 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar10 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar10,L"Hair.TileDataBuffer(HairAll)",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar13 = DAT_14ca84e48;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  param_1[7] = uVar10;
  local_70 = uVar9 + (uVar9 == 0);
  uStack_68 = 0x4109;
  if (uVar12 < uVar13) {
    uVar13 = uVar12;
  }
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar17 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar17 + 0x150;
  local_b8 = uVar10;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar17 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar17,L"Hair.TileDataBuffer(HairFull)",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar13 = DAT_14ca84e48;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  param_1[8] = uVar17;
  local_70 = uVar9 + (uVar9 == 0);
  uStack_68 = 0x4109;
  if (uVar12 < uVar13) {
    uVar13 = uVar12;
  }
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar10 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar10 + 0x150;
  local_a8 = uVar17;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar10 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar10 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar10,L"Hair.TileDataBuffer(HairPartial)",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar13 = DAT_14ca84e48;
  uVar9 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar9 = DAT_14ca84e48;
  }
  param_1[9] = uVar10;
  local_70 = uVar9 + (uVar9 == 0);
  uStack_68 = 0x4109;
  if (uVar12 < uVar13) {
    uVar13 = uVar12;
  }
  local_60 = 0;
  iStack_6c = uVar13 + (uVar13 == 0);
  uVar17 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar17 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(local_e0,0x160);
    uVar17 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bd266(uVar17,L"Hair.TileDataBuffer(Other)",&local_70,0);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(lVar5,iVar3);
  }
  plVar1 = local_e0;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_2 + 400) + -1;
  param_1[10] = uVar17;
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar18 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar18 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar18 + 8;
  }
  local_d0 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar18[1] = *(undefined8 *)(uVar15 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 2;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar18 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
  puVar18[7] = uVar15;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  FUN_1405bfba3(param_2,puVar18,0,2);
  uVar13 = (uint)local_c0 | local_c4 & 0xff;
  uVar6 = *(undefined8 *)(local_b0 + 0x13818);
  FUN_145f43ab8();
  FUN_1448e935e(uVar6,&local_70,&DAT_14c9d6160,uVar13);
  FUN_145f43ab8();
  plVar1 = local_e0;
  local_80 = local_70;
  iStack_7c = iStack_6c;
  uStack_78 = uStack_68;
  uStack_74 = uStack_64;
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar14 + 0x10;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x90);
    puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar14 + 0x10;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar14 = &PTR_FUN_14a22a898;
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 1;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  puVar14[0xd] = 0;
  puVar14[0xe] = 0;
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  bVar19 = local_a0 == 0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar14;
  local_c0 = param_2 + 0x98;
  lVar5 = FUN_1447e4f80();
  cVar8 = '\x02';
  if (*(char *)(lVar5 + 0x41) != '\x03') {
    cVar8 = *(char *)(lVar5 + 0x41);
  }
  puVar14[2] = *(undefined8 *)(local_b0 + 0x18);
  *(char *)(puVar14 + 3) = cVar8;
  puVar14[4] = CONCAT44(*(int *)(local_b0 + 0x3104) - *(int *)(local_b0 + 0x30fc),
                        *(int *)(local_b0 + 0x3100) - *(int *)(local_b0 + 0x30f8));
  *(uint *)(puVar14 + 5) = (uint)bVar19;
  fVar20 = DAT_14c760378;
  if (1.0 <= DAT_14c760378) {
    fVar20 = 1.0;
  }
  if (fVar20 <= 0.1) {
    fVar20 = 0.1;
  }
  *(float *)((longlong)puVar14 + 0x2c) = 1.0 - fVar20;
  *(undefined4 *)(puVar14 + 6) = 1000;
  uVar6 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
  puVar14[7] = uVar6;
  uVar6 = FUN_14476842e(param_2,&DAT_14ca63c00,L"ZeroUIntDummy",2);
  plVar1 = local_e0;
  puVar14[8] = uVar6;
  if (bVar19 || (~(byte)local_c4 & 1) != 0) {
    if (local_d1 == '\0') {
      puVar14[7] = *param_5;
    }
  }
  else {
    puVar14[8] = *param_5;
  }
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar16 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar16 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar16[1] = *(undefined8 *)(local_b8 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x31;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = local_b8;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar14[9] = puVar16;
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar16 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar16 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar16[1] = *(undefined8 *)(local_a8 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x31;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = local_a8;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar14[10] = puVar16;
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar16 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar16 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar16[1] = *(undefined8 *)(uVar10 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x31;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = uVar10;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar14[0xb] = puVar16;
  puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar16 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar16 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar16 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar16[1] = *(undefined8 *)(uVar17 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x31;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = uVar17;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar14[0xc] = puVar16;
  puVar14[0xd] = puVar18;
  iVar3 = local_98[1] + 7;
  local_88 = local_98[1] + 0xe;
  if (-1 < iVar3) {
    local_88 = iVar3;
  }
  local_88 = local_88 >> 3;
  iVar3 = *local_98 + 7;
  local_8c = *local_98 + 0xe;
  if (-1 < iVar3) {
    local_8c = iVar3;
  }
  local_8c = local_8c >> 3;
  local_e8 = (undefined1 **)&local_8c;
  local_84 = 1;
  FUN_14718796f(param_2,&local_70,&local_80,puVar14 + 2);
  plVar1 = local_e0;
  lVar5 = param_1[0xc];
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar18 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x50);
    puVar18 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar18 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar18[1] = *(undefined8 *)(lVar5 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar18 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = lVar5;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[0xb] = puVar18;
  lVar5 = -0x20;
  do {
    plVar1 = local_e0;
    lVar2 = *(longlong *)((longlong)param_1 + lVar5 + 0x58);
    if (lVar2 != 0) {
      puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar18 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
        FUN_140023dd8(local_e0,0x50);
        puVar18 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar18 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar7;
      puVar18[1] = *(undefined8 *)(lVar2 + 8);
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 3;
      *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
      *puVar18 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar18 + 5) = 0x31;
      *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
      puVar18[7] = 0;
      puVar18[8] = lVar2;
      iVar3 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
        FUN_1447568fc(local_d0,iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar18;
      *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      *(undefined8 **)((longlong)param_1 + lVar5 + 0x38) = puVar18;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0);
  uVar6 = *(undefined8 *)(local_b0 + 0x13818);
  FUN_145f2989c();
  FUN_1448e935e(uVar6,&local_70,&DAT_14c9d6038,0);
  FUN_145f2989c();
  plVar1 = local_e0;
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar18 + 0xc;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x70);
    puVar18 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar18 + 0xc;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar18 = &PTR_FUN_14a22cbc0;
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 1;
  puVar18[7] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[10] = 0;
  puVar18[0xb] = 0;
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(local_c0,iVar3);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar18;
  *(undefined4 *)(puVar18 + 6) = 8;
  puVar18[4] = *(undefined8 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(puVar18 + 5) = 0x40;
  *(uint *)((longlong)puVar18 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x14);
  puVar18[7] = param_1[0xb];
  lVar5 = param_1[0xd];
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar14 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar14 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar14 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar14[1] = *(undefined8 *)(lVar5 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 2;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar14 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar14 + 0x32) = 0;
  puVar14[7] = lVar5;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[8] = puVar14;
  lVar5 = param_1[0xe];
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar14 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar14 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar14 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar14[1] = *(undefined8 *)(lVar5 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 2;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar14 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar14 + 0x32) = 0;
  puVar14[7] = lVar5;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[9] = puVar14;
  lVar5 = param_1[0xf];
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar14 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar14 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar14 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar14[1] = *(undefined8 *)(lVar5 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 2;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar14 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar14 + 0x32) = 0;
  puVar14[7] = lVar5;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  plVar1 = local_e0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[10] = puVar14;
  lVar5 = param_1[0x10];
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar14 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_e0,0x48);
    puVar14 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar14 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  puVar14[1] = *(undefined8 *)(lVar5 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 2;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar14 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar14 + 0x32) = 0;
  puVar14[7] = lVar5;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_d0,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18[0xb] = puVar14;
  local_e8 = &local_54;
  local_54 = &DAT_100000001;
  local_4c = 1;
  FUN_14717e8e0(param_2,&local_55,&local_70,puVar18 + 2);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6016e FUN_142c6016e body=656 status=ok
// SIG undefined FUN_142c6016e(void)

void FUN_142c6016e(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined1 *local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = *(undefined8 *)(param_2 + 0x30f8);
  local_80 = &local_78;
  local_70 = *(undefined8 *)(param_2 + 0x3100);
  local_a0 = param_1;
  local_98 = param_2;
  local_90 = param_4;
  local_88 = param_3;
  FUN_142c60400(&local_a0,1);
  FUN_142c60400(&local_a0,2);
  FUN_142c60400(&local_a0,3);
  if ((*(longlong *)(param_2 + 0x11a00) != 0) || (*(char *)(param_2 + 0x13870) == '\x01')) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar5 + 0xe;
    if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x80);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar5 + 0xe;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar3;
    *puVar5 = &PTR_FUN_14a22cbe8;
    puVar5[8] = 0;
    *(undefined1 *)(puVar5 + 9) = 1;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    *(undefined1 *)(puVar5 + 0xd) = 1;
    iVar1 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar5;
    puVar5[2] = CONCAT44(local_70._4_4_ - local_78._4_4_,(int)local_70 - (int)local_78);
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
    puVar5[3] = 0x800000040;
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_4 + 8);
    puVar5[5] = *(undefined8 *)(param_4 + 0xc);
    *(uint *)(puVar5 + 6) = (uint)*(byte *)(param_4 + 0x14);
    uVar2 = *(undefined8 *)(param_2 + 0x11a00);
    FUN_144a81af4();
    cVar4 = '\x02';
    if (DAT_14c9d5f79 != '\x03') {
      cVar4 = DAT_14c9d5f79;
    }
    puVar5[0xc] = uVar2;
    *(char *)(puVar5 + 0xd) = cVar4;
    FUN_1472ea582(param_1,param_2 + 0x13870,puVar5 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145f13978();
    FUN_1448e935e(uVar2,&local_68,&DAT_14c9d63b0,0);
    FUN_145f13978();
    uVar2 = local_68;
    local_b0 = local_68;
    local_a8 = uStack_60;
    FUN_145f13be6();
    local_68 = 0;
    uStack_60 = 0;
    FUN_1448f70da(uVar2,&DAT_14c9da020,puVar5 + 2,&local_68);
    local_c8 = &local_bc;
    local_bc = &DAT_100000001;
    local_b4 = 1;
    FUN_14717ecbc(param_1,&local_68,&local_b0,puVar5 + 2);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c60400 FUN_142c60400 body=900 status=ok
// SIG undefined FUN_142c60400(void)

void FUN_142c60400(longlong *param_1,byte param_2)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  byte local_79;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar12 = *param_1;
  puVar15 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar15 + 0x2e;
  if (*(undefined8 **)(lVar12 + 0x78) < puVar11) {
    FUN_140023dd8((longlong *)(lVar12 + 0x70),0x180);
    puVar15 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar15 + 0x2e;
  }
  *(undefined8 **)(lVar12 + 0x70) = puVar11;
  *puVar15 = &PTR_FUN_14a22a908;
  puVar11 = puVar15 + 2;
  FUN_147187fa4(puVar11);
  iVar5 = *(int *)(lVar12 + 0xa0);
  *(uint *)(lVar12 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(lVar12 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8((longlong *)(lVar12 + 0x98),iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar12 + 0x98) + (longlong)iVar5 * 8) = puVar15;
  lVar12 = param_1[1];
  lVar7 = param_1[2];
  bVar4 = *(byte *)(lVar7 + 0x14);
  uVar8 = *(undefined8 *)(lVar12 + 0x30f8);
  iVar5 = *(int *)(lVar12 + 0x3104);
  iVar6 = *(int *)(lVar12 + 0x3100);
  uVar14 = 0;
  if ((*(int *)(lVar7 + 8) != 0) && (*(longlong *)(lVar7 + 0x38) != 0)) {
    uVar14 = *(undefined8 *)(lVar7 + 0x18 + (ulonglong)param_2 * 8);
  }
  uVar9 = *(undefined8 *)(lVar7 + 0x68);
  puVar15[4] = uVar8;
  *(uint *)(puVar15 + 5) = (uint)bVar4;
  *(uint *)((longlong)puVar15 + 0x2c) = (uint)param_2;
  *(float *)(puVar15 + 6) = 1.0 / (float)(iVar6 - (int)uVar8);
  *(float *)((longlong)puVar15 + 0x34) = 1.0 / (float)(iVar5 - (int)((ulonglong)uVar8 >> 0x20));
  puVar15[7] = uVar14;
  puVar15[8] = uVar9;
  *(undefined4 *)(puVar15 + 9) = 4;
  lVar12 = (longlong)(char)param_2;
  uVar2 = *(undefined4 *)(&DAT_14a22d14c + lVar12 * 4);
  uVar3 = *(undefined4 *)(&DAT_14a22d158 + lVar12 * 4);
  *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(L"ShadowChannelMask" + lVar12 * 2 + 0x11);
  *(undefined4 *)((longlong)puVar15 + 0x54) = uVar2;
  *(undefined4 *)(puVar15 + 0xb) = uVar3;
  uVar8 = *(undefined8 *)(param_1[1] + 0x13818);
  local_79 = param_2;
  FUN_14608fe30();
  FUN_1448e935e(uVar8,&local_60,&DAT_14c9d6288,0);
  FUN_14608fe30();
  local_78 = local_60;
  local_70 = local_58;
  uVar8 = *(undefined8 *)(param_1[1] + 0x13818);
  FUN_145e82306();
  FUN_1448e935e(uVar8,&local_60,&DAT_14c9d64d8,0);
  FUN_145e82306();
  lVar7 = local_58;
  puVar10 = local_60;
  puVar15[0xe] = *(undefined8 *)param_1[3];
  puVar15[0xf] = 0;
  *(undefined4 *)(puVar15 + 0x10) = 0xffff0001;
  lVar12 = *param_1;
  uVar8 = *(undefined8 *)param_1[4];
  uVar14 = ((undefined8 *)param_1[4])[1];
  FUN_145e82574();
  FUN_140069376(lVar12);
  puVar1 = (ulonglong *)(lVar12 + 0x70);
  puVar13 = (undefined8 *)(*(longlong *)(lVar12 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar13 + 0x3f;
  if (*(undefined8 **)(lVar12 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x200);
    puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar13 + 0x3f;
  }
  *puVar1 = (ulonglong)puVar15;
  local_58 = DAT_14c9da0f0;
  if (DAT_14c9da0f0 != 0) {
    LOCK();
    *(int *)(DAT_14c9da0f0 + 8) = *(int *)(DAT_14c9da0f0 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14c9da0a8;
  local_88 = 2;
  local_60 = puVar11;
  FUN_140068f1a(puVar13,&local_61,&local_60,1);
  *puVar13 = &PTR_FUN_14a22a910;
  puVar13[0x37] = puVar11;
  puVar13[0x38] = local_78;
  puVar13[0x39] = local_70;
  puVar13[0x3a] = puVar10;
  puVar13[0x3b] = lVar7;
  puVar13[0x3c] = uVar8;
  puVar13[0x3d] = uVar14;
  *(byte *)(puVar13 + 0x3e) = local_79;
  iVar5 = *(int *)(lVar12 + 0x170);
  *(uint *)(lVar12 + 0x170) = iVar5 + 1U;
  if (*(uint *)(lVar12 + 0x174) < iVar5 + 1U) {
    FUN_14470e57a(lVar12 + 0x168,iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar12 + 0x168) + (longlong)iVar5 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x2c) = *(int *)(lVar12 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_140069100(lVar12,puVar13);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c60791 FUN_142c60791 body=69 status=ok
// SIG undefined FUN_142c60791(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c60791(void)

{
  _DAT_14c9d66c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c607d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d66c8,1);
  return;
}



// FUNCTION 142c607d6 FUN_142c607d6 body=69 status=ok
// SIG undefined FUN_142c607d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c607d6(void)

{
  _DAT_14c9d66d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c60818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d66e0,1);
  return;
}



// FUNCTION 142c6081b FUN_142c6081b body=69 status=ok
// SIG undefined FUN_142c6081b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6081b(void)

{
  _DAT_14c9d66e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6085d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d66f0,1);
  return;
}



// FUNCTION 142c60860 FUN_142c60860 body=69 status=ok
// SIG undefined FUN_142c60860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c60860(void)

{
  _DAT_14c9d66f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c608a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6700,1);
  return;
}



// FUNCTION 142c608a5 FUN_142c608a5 body=69 status=ok
// SIG undefined FUN_142c608a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c608a5(void)

{
  _DAT_14c9d6708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c608e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6710,1);
  return;
}



// FUNCTION 142c608ea FUN_142c608ea body=69 status=ok
// SIG undefined FUN_142c608ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c608ea(void)

{
  _DAT_14c9d6718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6720,1);
  return;
}



// FUNCTION 142c6092f FUN_142c6092f body=69 status=ok
// SIG undefined FUN_142c6092f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6092f(void)

{
  _DAT_14c9d6728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c60971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6730,1);
  return;
}



// FUNCTION 142c60974 FUN_142c60974 body=69 status=ok
// SIG undefined FUN_142c60974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c60974(void)

{
  _DAT_14c9d6740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c609b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6748,1);
  return;
}



// FUNCTION 142c609b9 FUN_142c609b9 body=69 status=ok
// SIG undefined FUN_142c609b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c609b9(void)

{
  _DAT_14c9d6750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c609fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6758,1);
  return;
}



// FUNCTION 142c609fe FUN_142c609fe body=69 status=ok
// SIG undefined FUN_142c609fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c609fe(void)

{
  _DAT_14c9d6760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c60a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6768,1);
  return;
}



// FUNCTION 142c60a4f FUN_142c60a4f body=746 status=ok
// SIG undefined FUN_142c60a4f(void)

ulonglong FUN_142c60a4f(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_68 [4];
  undefined8 local_58;
  undefined1 local_4d;
  int local_4c;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uVar5 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar5 = DAT_14ca84e48;
  }
  local_68[0] = uVar5 + (uVar5 == 0);
  local_68[1] = 1;
  local_68[2] = 0x4109;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar6 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar3 = uVar6 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar3) {
    FUN_140023dd8(plVar1,0x160);
    uVar6 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar3 = uVar6 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar3;
  FUN_1456bd266(uVar6,L"Hair.TransmittanceNodeData",local_68,0);
  iVar2 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar2 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 8) = uVar6;
  *(int *)(uVar6 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar7 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x30);
    puVar7 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar7 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar7 = &PTR_FUN_14a22a9b0;
  puVar7[3] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar7;
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(uVar6 + 100);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar8 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x48);
    puVar8 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar8 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  puVar8[1] = *(undefined8 *)(uVar6 + 8);
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 2;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar8 + 5) = 0;
  *puVar8 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar8 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar8 + 0x32) = 0;
  puVar8[7] = uVar6;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar7[3] = puVar8;
  FUN_145ed353a();
  FUN_1448e935e(param_2,local_68,&DAT_14c9d67d8,0);
  FUN_145ed353a();
  iVar2 = *(int *)(puVar7 + 2) + 0x3f;
  local_4c = *(int *)(puVar7 + 2) + 0x7e;
  if (-1 < iVar2) {
    local_4c = iVar2;
  }
  local_4c = local_4c >> 6;
  local_78 = &local_4c;
  local_48 = &DAT_100000001;
  FUN_14718837c(param_1,&local_4d,local_68,puVar7 + 2);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c60d6d FUN_142c60d6d body=268 status=ok
// SIG undefined FUN_142c60d6d(void)

undefined8
FUN_142c60d6d(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [96];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = 0;
  if ((*(char *)(param_2 + 0x11a08) == '\x01') && (0 < *(int *)(param_2 + 0x11b78))) {
    uVar1 = 0;
    if ((*(longlong *)(param_2 + 0x11c90) != 0) &&
       ((uVar1 = 0, *(longlong *)(param_2 + 0x11c98) != 0 && (*(longlong *)(param_2 + 0x11ca8) != 0)
        ))) {
      FUN_14494b062(local_b8,param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x348));
      local_e0 = &local_58;
      uStack_48 = 0;
      uStack_44 = 0;
      local_58 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_d0 = *(undefined8 *)(param_2 + 0x11a88);
      local_d8 = *(undefined4 *)(param_2 + 0x11a90);
      local_c0 = param_5;
      local_e8 = 1;
      local_c8 = param_4;
      uVar1 = FUN_142c60e7a(param_1,local_b8,param_2,param_3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c60e7a FUN_142c60e7a body=1536 status=ok
// SIG undefined FUN_142c60e7a(void)

ulonglong FUN_142c60e7a(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
                       char param_5,undefined8 *param_6,undefined4 param_7,undefined8 param_8,
                       longlong param_9,undefined8 param_10)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  char cVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 *local_100;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined1 local_d9;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  undefined1 local_bc;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = ((uint)(param_5 == '\x01') * 9 + 1) * *(int *)(param_3 + 0x11a5c);
  uVar15 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar15 = DAT_14ca84e48;
  }
  uStack_80 = 0x4109;
  local_78 = (longlong *)0x0;
  if (DAT_14ca84e48 <= uVar5) {
    uVar5 = DAT_14ca84e48;
  }
  local_88 = CONCAT44(uVar5 + (uVar5 == 0),uVar15 + (uVar15 == 0));
  plVar12 = (longlong *)(param_1 + 0x70);
  uVar18 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar18 + 0x150;
  local_ec = param_4;
  if (*(ulonglong *)(param_1 + 0x78) < uVar14) {
    FUN_140023dd8(plVar12,0x160);
    uVar18 = *plVar12 + 0xfU & 0xfffffffffffffff0;
    uVar14 = uVar18 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar14;
  FUN_1456bd266(uVar18,L"Hair.TransmittanceNodeData",&local_88,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar18;
  *(int *)(uVar18 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar17 + 0x28;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(plVar12,0x150);
    puVar17 = (undefined8 *)(*plVar12 + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar17 + 0x28;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar17 = &PTR_FUN_14a22ae88;
  puVar6 = puVar17 + 2;
  FUN_147189e36(puVar6);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar17;
  lVar7 = FUN_1447e4f80();
  cVar13 = '\x02';
  if (*(char *)(lVar7 + 0x41) != '\x03') {
    cVar13 = *(char *)(lVar7 + 0x41);
  }
  puVar17[0x22] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar17 + 0x23) = cVar13;
  puVar8 = puVar6;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar16 + 8;
  local_e8 = puVar6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar12,0x48);
    puVar16 = (undefined8 *)(*plVar12 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar16 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar16[1] = *(undefined8 *)(uVar18 + 8);
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 2;
  *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar16 + 5) = 0;
  *puVar16 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar16 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar16 + 0x32) = 0;
  puVar16[7] = uVar18;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar17[0x21] = puVar16;
  if (param_5 == '\x01') {
    FUN_144abaa06(param_10,&local_88,param_1,local_ec);
    *(undefined4 *)(puVar17 + 0x16) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar17 + 0xb4) = local_88._4_4_;
    *(undefined4 *)(puVar17 + 0x17) = uStack_80;
    *(undefined4 *)((longlong)puVar17 + 0xbc) = uStack_7c;
    uVar4 = *(undefined8 *)(param_3 + 0x13780);
    lVar7 = FUN_144a12b9e();
    cVar13 = '\x02';
    if (*(char *)(lVar7 + 0x41) != '\x03') {
      cVar13 = *(char *)(lVar7 + 0x41);
    }
    puVar17[0x24] = uVar4;
    *(char *)(puVar17 + 0x25) = cVar13;
    puVar17[0x20] = 0;
    if (param_9 == 0) {
      param_9 = FUN_14476842e(param_1,&DAT_14ca63c00,L"ZeroUIntDummy",2);
    }
  }
  else {
    uVar4 = param_6[1];
    puVar17[0x1a] = *param_6;
    puVar17[0x1b] = uVar4;
    *(undefined4 *)((longlong)puVar17 + 0xf4) = *(undefined4 *)(param_6 + 3);
    if (param_9 == 0) {
      param_9 = FUN_14476842e(param_1,&DAT_14ca63b20,L"WhiteDummy",2);
    }
    puVar17[0x20] = param_9;
    param_9 = 0;
  }
  puVar17[0x1f] = param_9;
  puVar17[0x1c] = 0;
  puVar17[0x1d] = 0;
  uVar14 = 3;
  if (*(uint *)((longlong)param_6 + 0x14) < 3) {
    uVar14 = (ulonglong)*(uint *)((longlong)param_6 + 0x14);
  }
  *(undefined4 *)((longlong)puVar17 + uVar14 * 4 + 0xe0) = 0x3f800000;
  *(undefined4 *)(puVar17 + 0x1e) = *(undefined4 *)(param_6 + 2);
  puVar17[0x26] = param_8;
  *(undefined4 *)(puVar17 + 0x27) = 4;
  uVar4 = *(undefined8 *)(param_3 + 0x11a00);
  FUN_144a81af4();
  cVar13 = DAT_14c9d5f79;
  if (DAT_14c9d5f79 == '\x03') {
    cVar13 = '\x02';
  }
  puVar17[0x12] = uVar4;
  *(char *)(puVar17 + 0x13) = cVar13;
  uVar4 = *(undefined8 *)(param_3 + 0x11c90);
  lVar7 = FUN_1414708b2();
  cVar13 = *(char *)(lVar7 + 0x41);
  if (cVar13 == '\x03') {
    cVar13 = '\x02';
  }
  puVar17[0x14] = uVar4;
  *(char *)(puVar17 + 0x15) = cVar13;
  FUN_1448a862c(local_b8);
  FUN_14019e00e(&local_88,local_b8,0,1);
  lVar9 = FUN_1448a8484();
  lVar7 = local_88;
  cVar13 = *(char *)(lVar9 + 0x41);
  if (*(char *)(lVar9 + 0x41) == '\x03') {
    cVar13 = '\x02';
  }
  puVar17[0x18] = local_88;
  *(char *)(puVar17 + 0x19) = cVar13;
  if (local_88 != 0) {
    LOCK();
    puVar1 = (uint *)(local_88 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_88 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_88 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar7;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar19 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar19) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar19 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar19) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  FUN_1472ea582(param_1,param_3 + 0x13870,puVar17 + 0xe);
  local_bc = param_5 == '\x01';
  local_c8 = param_7;
  local_c4 = (uint)(0 < DAT_14c9d6738);
  local_c0 = (uint)(0 < DAT_14c760304);
  FUN_147189daa(local_d8,*(undefined8 *)(param_3 + 0x13818));
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_108 = param_8;
  local_100 = &local_88;
  FUN_147189efb(param_1,&local_d9,local_d8,local_e8);
  if (local_88 != 0) {
    plVar12 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar12 = local_68;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 142c6147b FUN_142c6147b body=4112 status=ok
// SIG undefined FUN_142c6147b(void)

ulonglong FUN_142c6147b(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                       char param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char cVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  uint *puVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_368 [32];
  longlong *local_348;
  float *local_340;
  uint local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  undefined4 local_30c;
  longlong *local_308;
  uint local_300;
  uint local_2fc;
  longlong local_2f8;
  undefined8 *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  uint *local_2d8;
  float local_2d0;
  float local_2cc;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218 [13];
  undefined1 local_1a9;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  uint local_198;
  undefined4 local_194;
  undefined8 local_188;
  float fStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  longlong local_168 [15];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if ((*(char *)(param_2 + 0x11a08) == '\x01') && ((longlong)*(int *)(param_2 + 0x11b78) != 0)) {
    plVar15 = *(longlong **)(param_2 + 0x11b70);
    plVar21 = plVar15 + (longlong)*(int *)(param_2 + 0x11b78) * 0xf;
    do {
      if ((longlong)(int)plVar15[1] != 0) {
        lVar29 = 0;
        do {
          if (*(int *)(*plVar15 + 0x1c + lVar29) == *(int *)(param_4 + 0x34)) goto LAB_142c6157e;
          lVar29 = lVar29 + 0x88;
        } while ((longlong)(int)plVar15[1] * 0x88 != lVar29);
      }
      plVar15 = plVar15 + 0xf;
    } while (plVar15 != plVar21);
    if (0 < DAT_14c760390) {
LAB_142c6157e:
      FUN_14494b062(local_218,param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x348));
      dVar12 = DAT_14c846468;
      dVar11 = DAT_14c846460;
      dVar10 = DAT_14c846458;
      dVar9 = DAT_14c846450;
      dVar8 = DAT_14c846448;
      dVar7 = DAT_14c846440;
      dVar6 = DAT_14c846438;
      dVar32 = DAT_14c846430;
      dVar33 = DAT_14c846428;
      dVar4 = DAT_14c846420;
      if ((DAT_14c760390 < 1) || (DAT_14c9dc640 < 1)) {
        local_228 = 0;
        uStack_220 = 0;
        local_2d0 = 0.0;
        if (0.0 <= DAT_14c7602fc) {
          local_2d0 = DAT_14c7602fc;
        }
        local_2cc = 0.0;
        if (0.0 <= DAT_14c760300) {
          local_2cc = DAT_14c760300;
        }
        iVar14 = *(int *)(param_2 + 0x11b78);
        if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar14);
        }
        if (iVar14 != 0) {
          local_2c8 = DAT_14c846400;
          local_2c0 = DAT_14c846470;
          local_2b8 = DAT_14c846410;
          local_2b0 = DAT_14c846408;
          local_238 = DAT_14c846478;
          local_230 = DAT_14c846418;
          FUN_14480809c(&local_228);
          if ((longlong)*(int *)(param_2 + 0x11b78) != 0) {
            local_2f0 = (undefined8 *)CONCAT44(local_2f0._4_4_,param_3);
            local_288 = dVar4;
            local_280 = dVar32;
            local_278 = dVar33;
            local_270 = dVar6;
            local_268 = dVar7;
            local_260 = dVar9;
            local_258 = dVar8;
            local_250 = dVar10;
            local_248 = dVar11;
            local_240 = dVar12;
            plVar15 = *(longlong **)(param_2 + 0x11b70);
            local_2e8 = plVar15 + (longlong)*(int *)(param_2 + 0x11b78) * 0xf;
            local_2d8 = (uint *)(param_4 + 0xe0);
            bVar31 = false;
            local_298 = 0;
            local_2a0 = 0;
            local_2fc = 0;
            fVar40 = 0.0;
            fVar39 = 0.0;
            fVar38 = 0.0;
            local_30c = 0;
            local_300 = 0;
            local_290 = 0;
            fVar37 = 0.0;
            fVar34 = 0.0;
            fVar35 = 0.0;
            fVar36 = 0.0;
            local_2a8 = param_1;
            do {
              lVar29 = plVar15[1];
              local_2e0 = plVar15;
              if ((longlong)(int)lVar29 == 0) {
                uVar26 = 0;
              }
              else {
                lVar1 = *plVar15;
                lVar24 = 0;
                uVar26 = 0;
                do {
                  if (*(int *)(lVar1 + 0x1c + lVar24) == *(int *)(param_4 + 0x34)) {
                    lVar2 = *(longlong *)(param_4 + 0x28);
                    if (*(char *)(lVar2 + 0x1e8) == '\0') {
                      dVar4 = *(double *)(lVar2 + 0x90);
                      dVar33 = *(double *)(lVar2 + 0x50);
                      dVar32 = *(double *)(lVar2 + 0x70);
                      local_30c = 0;
                    }
                    else {
                      dVar4 = *(double *)(lVar2 + 0x30) + *(double *)(param_2 + 0x1040);
                      dVar32 = *(double *)(lVar2 + 0x28) + *(double *)(param_2 + 0x1038);
                      dVar33 = *(double *)(lVar2 + 0x20) + *(double *)(param_2 + 0x1030);
                      local_30c = 0x3f800000;
                    }
                    local_2fc = 0;
                    if (param_5 != '\0') {
                      puVar17 = local_2d8;
                      if ((*(byte *)(lVar2 + 0x1d0) & 8) != 0) {
                        puVar17 = (uint *)(lVar2 + 400);
                      }
                      local_2fc = *puVar17;
                    }
                    fVar40 = (float)dVar33;
                    fVar39 = (float)dVar32;
                    fVar38 = (float)dVar4;
                    local_2a0 = *(undefined8 *)(param_2 + 0x11b90);
                    local_298 = *(undefined8 *)(param_2 + 0x11b98);
                    local_290 = *(undefined8 *)(lVar1 + 0x14 + lVar24);
                    local_300 = (uint)*(byte *)(lVar2 + 0x1e9);
                    fVar34 = *(float *)(lVar1 + 0x4c + lVar24);
                    if (1.0 <= fVar34) {
                      fVar34 = 1.0;
                    }
                    if (fVar34 <= 0.0) {
                      fVar34 = 0.0;
                    }
                    fVar37 = fVar34 * 5.2 + 1.0;
                    fVar34 = powf(0.2,fVar37);
                    fVar35 = powf(0.4,fVar37);
                    fVar36 = powf(0.6,fVar37);
                    fVar37 = powf(0.8,fVar37);
                    uVar26 = *(undefined4 *)(lVar1 + 0x10 + lVar24);
                    bVar31 = true;
                  }
                  lVar24 = lVar24 + 0x88;
                } while ((longlong)(int)lVar29 * 0x88 != lVar24);
              }
              uVar22 = uStack_220;
              lVar29 = (longlong)(int)uStack_220;
              uVar13 = (int)uStack_220 + 1;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar13);
              if (uStack_220._4_4_ < uVar13) {
                FUN_1447808da(&local_228,uVar22 & 0xffffffff);
              }
              lVar1 = local_2a8;
              *(undefined4 *)(local_228 + lVar29 * 4) = uVar26;
              plVar15 = local_2e0 + 0xf;
            } while (plVar15 != local_2e8);
            if (bVar31) {
              local_340 = (float *)(ulonglong)(uint)((int)uStack_220 * 4);
              local_348 = (longlong *)local_228;
              local_338 = local_338 & 0xffffff00;
              lVar24 = FUN_144942e63(local_2a8,L"Hair.DeepShadow.AtlasSlotIndexBuffer",4);
              lVar29 = *(longlong *)(param_2 + 0x11ba0);
              cVar20 = *(char *)(lVar29 + 0x68);
              plVar15 = (longlong *)(lVar1 + 0x70);
              puVar30 = (uint *)(*(longlong *)(lVar1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar17 = puVar30 + 0x12;
              local_308 = plVar15;
              if (*(uint **)(lVar1 + 0x78) < puVar17) {
                FUN_140023dd8(plVar15,0x50);
                puVar30 = (uint *)(*plVar15 + 7U & 0xfffffffffffffff8);
                puVar17 = puVar30 + 0x12;
              }
              dVar32 = local_268;
              dVar33 = local_270;
              dVar4 = local_278;
              local_2f8 = lVar1 + 0x198;
              *(uint **)(lVar1 + 0x70) = puVar17;
              *(undefined8 *)(puVar30 + 2) = *(undefined8 *)(lVar29 + 8);
              puVar30[4] = 0;
              puVar30[5] = 0;
              *(undefined1 *)(puVar30 + 6) = 3;
              puVar30[7] = 0xffffffff;
              puVar30[8] = 0xffffffff;
              *(undefined ***)puVar30 = &PTR_FUN_14a1fb168;
              *(byte *)(puVar30 + 10) = cVar20 >> 7 & 0x1c;
              puVar30[0xb] = 0;
              puVar30[0xc] = 0xffffffff;
              puVar30[0xe] = 0;
              puVar30[0xf] = 0;
              *(longlong *)(puVar30 + 0x10) = lVar29;
              iVar14 = *(int *)(lVar1 + 0x1a0);
              *(uint *)(lVar1 + 0x1a0) = iVar14 + 1U;
              if (*(uint *)(lVar1 + 0x1a4) < iVar14 + 1U) {
                FUN_1447568fc(local_2f8,iVar14);
              }
              plVar15 = local_308;
              *(uint **)(*(longlong *)(lVar1 + 0x198) + (longlong)iVar14 * 8) = puVar30;
              puVar30[7] = *(int *)(lVar1 + 0x1a0) - 1;
              cVar20 = *(char *)(lVar24 + 0x68);
              puVar25 = (undefined8 *)(*(longlong *)(lVar1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar18 = puVar25 + 9;
              if (*(undefined8 **)(lVar1 + 0x78) < puVar18) {
                FUN_140023dd8(local_308,0x50);
                puVar25 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
                puVar18 = puVar25 + 9;
              }
              *(undefined8 **)(lVar1 + 0x70) = puVar18;
              puVar25[1] = *(undefined8 *)(lVar24 + 8);
              puVar25[2] = 0;
              *(undefined1 *)(puVar25 + 3) = 3;
              *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
              *puVar25 = &PTR_FUN_14a1fb168;
              *(byte *)(puVar25 + 5) = cVar20 >> 7 & 0x1c;
              *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
              puVar25[7] = 0;
              puVar25[8] = lVar24;
              iVar14 = *(int *)(lVar1 + 0x1a0);
              *(uint *)(lVar1 + 0x1a0) = iVar14 + 1U;
              local_2d8 = puVar30;
              if (*(uint *)(lVar1 + 0x1a4) < iVar14 + 1U) {
                FUN_1447568fc(local_2f8,iVar14);
              }
              plVar15 = local_308;
              *(undefined8 **)(*(longlong *)(lVar1 + 0x198) + (longlong)iVar14 * 8) = puVar25;
              *(int *)((longlong)puVar25 + 0x1c) = *(int *)(lVar1 + 0x1a0) + -1;
              local_2e0 = *(longlong **)(param_2 + 0x11a88);
              local_2e8 = (longlong *)CONCAT44(local_2e8._4_4_,*(undefined4 *)(param_2 + 0x11a90));
              uVar13 = 4;
              if (DAT_14ca84e48 < 4) {
                uVar13 = DAT_14ca84e48;
              }
              fStack_180 = 2.33302e-41;
              uVar5 = DAT_14ca84e48;
              if (*(uint *)(param_2 + 0x11a5c) < DAT_14ca84e48) {
                uVar5 = *(uint *)(param_2 + 0x11a5c);
              }
              local_178 = (longlong *)0x0;
              local_188 = CONCAT44(uVar5 + (uVar5 == 0),uVar13 + (uVar13 == 0));
              uVar16 = *(longlong *)(lVar1 + 0x70) + 0xfU & 0xfffffffffffffff0;
              uVar22 = uVar16 + 0x150;
              if (*(ulonglong *)(lVar1 + 0x78) < uVar22) {
                FUN_140023dd8(local_308,0x160);
                uVar16 = *plVar15 + 0xfU & 0xfffffffffffffff0;
                uVar22 = uVar16 + 0x150;
              }
              *(ulonglong *)(lVar1 + 0x70) = uVar22;
              FUN_1456bd266(uVar16,L"Hair.TransmittanceNodeData",&local_188,0);
              iVar14 = *(int *)(lVar1 + 400);
              *(uint *)(lVar1 + 400) = iVar14 + 1U;
              if (*(uint *)(lVar1 + 0x194) < iVar14 + 1U) {
                FUN_144737178(lVar1 + 0x188,iVar14);
              }
              plVar15 = local_308;
              *(ulonglong *)(*(longlong *)(lVar1 + 0x188) + (longlong)iVar14 * 8) = uVar16;
              *(int *)(uVar16 + 0x7c) = *(int *)(lVar1 + 400) + -1;
              puVar23 = (undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar18 = puVar23 + 0x30;
              if (*(undefined8 **)(lVar1 + 0x78) < puVar18) {
                FUN_140023dd8(local_308,400);
                puVar23 = (undefined8 *)(*plVar15 + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar23 + 0x30;
              }
              *(undefined8 **)(lVar1 + 0x70) = puVar18;
              *puVar23 = &PTR_FUN_14a22aef8;
              puVar18 = puVar23 + 2;
              FUN_14718a4e4(puVar18);
              iVar14 = *(int *)(lVar1 + 0xa0);
              *(uint *)(lVar1 + 0xa0) = iVar14 + 1U;
              if (*(uint *)(lVar1 + 0xa4) < iVar14 + 1U) {
                FUN_1448cfae8(lVar1 + 0x98,iVar14);
              }
              *(undefined8 **)(*(longlong *)(lVar1 + 0x98) + (longlong)iVar14 * 8) = puVar23;
              lVar29 = FUN_1447e4f80();
              plVar15 = local_308;
              cVar20 = '\x02';
              if (*(char *)(lVar29 + 0x41) != '\x03') {
                cVar20 = *(char *)(lVar29 + 0x41);
              }
              puVar23[0x10] = *(undefined8 *)(param_2 + 0x18);
              *(char *)(puVar23 + 0x11) = cVar20;
              puVar19 = local_218;
              puVar28 = puVar18;
              for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
                *puVar28 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar28 = puVar28 + 1;
              }
              puVar23[0x29] = local_2a0;
              puVar23[0x2a] = local_298;
              puVar28 = (undefined8 *)(*(longlong *)(lVar1 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar19 = puVar28 + 8;
              local_2f0 = puVar18;
              if (*(undefined8 **)(lVar1 + 0x78) < puVar19) {
                FUN_140023dd8(local_308,0x48);
                puVar28 = (undefined8 *)(*plVar15 + 7U & 0xfffffffffffffff8);
                puVar19 = puVar28 + 8;
              }
              *(undefined8 **)(lVar1 + 0x70) = puVar19;
              puVar28[1] = *(undefined8 *)(uVar16 + 8);
              puVar28[2] = 0;
              *(undefined1 *)(puVar28 + 3) = 2;
              *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar28 + 5) = 0;
              *puVar28 = &PTR_FUN_14a1fb3e8;
              *(undefined2 *)(puVar28 + 6) = 0x1c;
              *(undefined1 *)((longlong)puVar28 + 0x32) = 0;
              puVar28[7] = uVar16;
              iVar14 = *(int *)(lVar1 + 0x1a0);
              *(uint *)(lVar1 + 0x1a0) = iVar14 + 1U;
              if (*(uint *)(lVar1 + 0x1a4) < iVar14 + 1U) {
                FUN_1447568fc(local_2f8,iVar14);
              }
              plVar15 = local_2e0;
              *(undefined8 **)(*(longlong *)(lVar1 + 0x198) + (longlong)iVar14 * 8) = puVar28;
              *(int *)((longlong)puVar28 + 0x1c) = *(int *)(lVar1 + 0x1a0) + -1;
              puVar23[0x2d] = puVar28;
              *(uint *)(puVar23 + 0x16) = local_300;
              puVar23[0x12] = local_290;
              *(float *)(puVar23 + 0x14) = fVar40;
              *(float *)((longlong)puVar23 + 0xa4) = fVar39;
              *(float *)(puVar23 + 0x15) = fVar38;
              *(undefined4 *)((longlong)puVar23 + 0xac) = local_30c;
              *(undefined4 *)(puVar23 + 0x13) = 0;
              *(float *)(puVar23 + 0x1c) = local_2cc;
              *(float *)((longlong)puVar23 + 0xe4) = local_2d0;
              *(undefined4 *)(puVar23 + 0x1d) = DAT_14c7602f4;
              iVar14 = DAT_14c7602f0;
              if (DAT_14c7602f0 < 1) {
                iVar14 = 0;
              }
              *(int *)((longlong)puVar23 + 0xec) = iVar14;
              iVar14 = 0;
              if (0 < DAT_14c9d66d0) {
                iVar14 = DAT_14c9d66d0;
              }
              *(int *)(puVar23 + 0x1e) = iVar14;
              *(float *)(puVar23 + 0x1a) = fVar34;
              *(float *)((longlong)puVar23 + 0xd4) = fVar35;
              *(float *)(puVar23 + 0x1b) = fVar36;
              *(float *)((longlong)puVar23 + 0xdc) = fVar37;
              *(float *)(puVar23 + 0x20) = (float)local_2c8;
              *(float *)((longlong)puVar23 + 0x104) = (float)local_2b0;
              *(float *)(puVar23 + 0x21) = (float)local_2b8;
              *(float *)((longlong)puVar23 + 0x10c) = (float)local_230;
              *(float *)(puVar23 + 0x22) = (float)local_288;
              *(float *)((longlong)puVar23 + 0x114) = (float)dVar4;
              *(float *)(puVar23 + 0x23) = (float)local_280;
              *(float *)((longlong)puVar23 + 0x11c) = (float)dVar33;
              *(float *)(puVar23 + 0x24) = (float)dVar32;
              *(float *)((longlong)puVar23 + 0x124) = (float)local_258;
              *(float *)(puVar23 + 0x25) = (float)local_260;
              *(float *)((longlong)puVar23 + 300) = (float)local_250;
              *(float *)(puVar23 + 0x26) = (float)local_248;
              *(float *)((longlong)puVar23 + 0x134) = (float)local_240;
              *(float *)(puVar23 + 0x27) = (float)local_2c0;
              *(float *)((longlong)puVar23 + 0x13c) = (float)local_238;
              puVar23[0x2e] = local_2e0;
              *(undefined4 *)(puVar23 + 0x2f) = 4;
              uVar3 = *(undefined8 *)(param_2 + 0x11a00);
              FUN_144a81af4();
              cVar20 = '\x02';
              if (DAT_14c9d5f79 != '\x03') {
                cVar20 = DAT_14c9d5f79;
              }
              puVar23[0xe] = uVar3;
              *(char *)(puVar23 + 0xf) = cVar20;
              puVar23[0x2b] = local_2d8;
              puVar23[0x2c] = puVar25;
              if (param_6 == 0) {
                param_6 = FUN_14473c272(lVar1,&DAT_14ca63b20,0);
              }
              uVar22 = 3;
              if (local_2fc < 3) {
                uVar22 = (ulonglong)local_2fc;
              }
              puVar23[0x28] = param_6;
              puVar23[0x18] = 0;
              puVar23[0x19] = 0;
              *(undefined4 *)((longlong)puVar23 + uVar22 * 4 + 0xc0) = 0x3f800000;
              uVar3 = *(undefined8 *)(param_2 + 0x13818);
              bVar31 = (int)local_2e8 == 0x20;
              FUN_145f440ae();
              FUN_1448e935e(uVar3,&local_188,&DAT_14c9d6a28,bVar31);
              FUN_145f440ae();
              local_1a8 = (float)local_188;
              fStack_1a4 = local_188._4_4_;
              fStack_1a0 = fStack_180;
              uStack_19c = uStack_17c;
              local_188 = 0;
              local_178 = (longlong *)0x0;
              local_348 = plVar15;
              local_340 = (float *)&local_188;
              FUN_14718a573(lVar1,&local_1a9,&local_1a8,local_2f0);
              if (local_188 != 0) {
                plVar15 = local_178;
                if (local_178 == (longlong *)0x0) {
                  plVar15 = local_168;
                }
                (**(code **)(*plVar15 + 0x10))();
              }
              if (local_228 != 0) {
                FUN_1400020a8();
              }
              goto LAB_142c619f5;
            }
            param_1 = local_2a8;
            param_3 = local_2f0._0_4_;
          }
          if (local_228 != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar16 = 0;
      if (((*(longlong *)(param_2 + 0x11c90) != 0) && (*(longlong *)(param_2 + 0x11c98) != 0)) &&
         (*(longlong *)(param_2 + 0x11ca8) != 0)) {
        (**(code **)(**(longlong **)(param_4 + 0x28) + 0x78))
                  (*(longlong **)(param_4 + 0x28),&local_188,0);
        lVar29 = *(longlong *)(param_4 + 0x28);
        if (*(char *)(lVar29 + 0x1e8) == '\0') {
          dVar4 = *(double *)(lVar29 + 0x90);
          dVar33 = *(double *)(lVar29 + 0x50);
          dVar32 = *(double *)(lVar29 + 0x70);
          uStack_19c = 0;
        }
        else {
          dVar4 = *(double *)(lVar29 + 0x30) + *(double *)(param_2 + 0x1040);
          dVar32 = *(double *)(lVar29 + 0x28) + *(double *)(param_2 + 0x1038);
          dVar33 = *(double *)(lVar29 + 0x20) + *(double *)(param_2 + 0x1030);
          uStack_19c = 0x3f800000;
        }
        local_1a8 = (float)dVar33;
        fStack_1a4 = (float)dVar32;
        fStack_1a0 = (float)dVar4;
        local_198 = (uint)*(byte *)(lVar29 + 0x1e9);
        local_194 = 0;
        if (param_5 != '\0') {
          if ((*(byte *)(lVar29 + 0x1d0) & 8) == 0) {
            puVar27 = (undefined4 *)(param_4 + 0xe0);
          }
          else {
            puVar27 = (undefined4 *)(lVar29 + 400);
          }
          local_194 = *puVar27;
        }
        local_340 = &local_1a8;
        local_330 = *(undefined8 *)(param_2 + 0x11a88);
        local_338 = *(uint *)(param_2 + 0x11a90);
        local_320 = 0;
        local_348 = (longlong *)((ulonglong)local_348 & 0xffffffffffffff00);
        local_328 = param_6;
        uVar16 = FUN_142c60e7a(param_1,local_218,param_2,param_3);
      }
      goto LAB_142c619f5;
    }
  }
  uVar16 = 0;
LAB_142c619f5:
  if ((local_f0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6248c FUN_142c6248c body=5084 status=ok
// SIG undefined FUN_142c6248c(void)

void FUN_142c6248c(ulonglong *param_1,longlong param_2,int param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong param_7,char param_8,longlong param_9
                  )

{
  uint *puVar1;
  double dVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  ulonglong *puVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8;
  byte local_1d9;
  ulonglong *local_1d8;
  ulonglong *local_1d0;
  ulonglong *local_1c8;
  ulonglong *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  ulonglong *local_1a8;
  undefined8 local_1a0;
  ulonglong local_198;
  ulonglong *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  ulonglong *local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined1 local_129;
  undefined8 *local_128;
  longlong lStack_120;
  undefined *local_118;
  ulonglong *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined6 uStack_d2;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  iVar18 = (int)param_6[1];
  if ((longlong)iVar18 == 0) goto LAB_142c6275b;
  plVar14 = (longlong *)*param_6;
  plVar13 = plVar14 + (longlong)iVar18 * 0xf;
  do {
    if ((longlong)(int)plVar14[1] != 0) {
      iVar22 = *(int *)(param_4 + 0x34);
      lVar19 = 0;
      do {
        if (*(int *)(*plVar14 + 0x1c + lVar19) == iVar22) goto LAB_142c62572;
        lVar19 = lVar19 + 0x88;
      } while ((longlong)(int)plVar14[1] * 0x88 != lVar19);
    }
    plVar14 = plVar14 + 0xf;
  } while (plVar14 != plVar13);
  if (DAT_14c760390 < 1) goto LAB_142c6275b;
  iVar22 = *(int *)(param_4 + 0x34);
LAB_142c62572:
  iVar21 = 0;
  if (*(int *)(*param_5 + 8 + (longlong)iVar22 * 0x68) < 1) {
    uVar37 = 0x3f800000;
  }
  else {
    lVar19 = **(longlong **)(*param_5 + (longlong)iVar22 * 0x68);
    lVar11 = lVar19 + 0x978;
    if (*(longlong *)(lVar19 + 0x980) != 0) {
      lVar11 = *(longlong *)(lVar19 + 0x980);
    }
    uVar37 = *(undefined4 *)(lVar11 + (longlong)param_3 * 4);
    if ((char)*(uint *)(lVar19 + 0x990) < '\0') {
      iVar22 = (uint)((*(byte *)(*(longlong *)(*(longlong *)(lVar19 + 0xb60) + 0x28) + 0x1e8) & 0xfd
                      ) == 1) * 2;
      iVar21 = 1;
      if (*(int *)(lVar19 + 0x944) < 0) {
        iVar21 = iVar22;
      }
      if ((*(uint *)(lVar19 + 0x990) & 0x10) == 0) {
        iVar21 = iVar22;
      }
    }
  }
  puVar29 = *(ulonglong **)(*(longlong *)(param_2 + 8) + 0x348);
  local_148 = 0;
  uStack_140 = 0;
  local_1b0 = param_2;
  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar18);
  }
  FUN_14480809c(&local_148);
  if (((DAT_14c760390 < 1) || (DAT_14c9dc640 < 1)) && ((longlong)(int)param_6[1] != 0)) {
    local_1b8 = CONCAT44(local_1b8._4_4_,iVar21);
    plVar14 = (longlong *)*param_6;
    plVar13 = plVar14 + (longlong)(int)param_6[1] * 0xf;
    fVar35 = 0.0;
    bVar28 = false;
    uVar24 = DAT_14c967818;
    local_1d8 = puVar29;
    local_1d0 = param_1;
    do {
      lVar19 = plVar14[1];
      if ((longlong)(int)lVar19 != 0) {
        lVar11 = *plVar14;
        lVar20 = 0;
        do {
          uVar15 = uStack_140;
          if (*(int *)(lVar11 + 0x1c + lVar20) == *(int *)(param_4 + 0x34)) {
            fVar35 = *(float *)(lVar11 + 0x4c + lVar20);
            lVar23 = (longlong)(int)uStack_140;
            uVar9 = (int)uStack_140 + 1;
            uStack_140 = CONCAT44(uStack_140._4_4_,uVar9);
            if (uStack_140._4_4_ < uVar9) {
              FUN_1447808da(&local_148,uVar15 & 0xffffffff);
            }
            *(undefined4 *)(local_148 + lVar23 * 4) = *(undefined4 *)(lVar11 + 0x10 + lVar20);
            uVar24 = *(undefined8 *)(lVar11 + 0x14 + lVar20);
            bVar28 = true;
          }
          lVar20 = lVar20 + 0x88;
        } while ((longlong)(int)lVar19 * 0x88 != lVar20);
      }
      puVar6 = local_1d0;
      plVar14 = plVar14 + 0xf;
    } while (plVar14 != plVar13);
    param_1 = local_1d0;
    puVar29 = local_1d8;
    iVar21 = (int)local_1b8;
    if (!bVar28) goto LAB_142c6271d;
    local_1f0 = (ulonglong)(uint)((int)uStack_140 * 4);
    local_1f8 = local_148;
    local_1e8 = 0;
    lVar19 = FUN_144942e63(local_1d0,L"Hair.DeepShadow.AtlasSlotIndexBuffer",4);
    cVar8 = *(char *)(lVar19 + 0x68);
    puVar29 = puVar6 + 0xe;
    puVar26 = (undefined8 *)(puVar6[0xe] + 7 & 0xfffffffffffffff8);
    puVar16 = puVar26 + 9;
    local_1c8 = puVar29;
    if ((undefined8 *)puVar6[0xf] < puVar16) {
      FUN_140023dd8(puVar29,0x50);
      puVar26 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar26 + 9;
    }
    puVar29 = puVar6 + 0x33;
    puVar6[0xe] = (ulonglong)puVar16;
    puVar26[1] = *(undefined8 *)(lVar19 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar26 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = lVar19;
    iVar18 = (int)puVar6[0x34];
    *(uint *)(puVar6 + 0x34) = iVar18 + 1U;
    if (*(uint *)((longlong)puVar6 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(puVar29,iVar18);
    }
    puVar7 = local_1c8;
    *(undefined8 **)(puVar6[0x33] + (longlong)iVar18 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = (int)puVar6[0x34] + -1;
    lVar19 = *(longlong *)(param_7 + 0x20);
    cVar8 = *(char *)(lVar19 + 0x68);
    puVar27 = (undefined8 *)(puVar6[0xe] + 7 & 0xfffffffffffffff8);
    puVar16 = puVar27 + 9;
    local_1c0 = puVar26;
    if ((undefined8 *)puVar6[0xf] < puVar16) {
      local_1a8 = puVar29;
      FUN_140023dd8(local_1c8,0x50);
      puVar27 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar27 + 9;
      puVar29 = local_1a8;
    }
    puVar6[0xe] = (ulonglong)puVar16;
    puVar27[1] = *(undefined8 *)(lVar19 + 8);
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 3;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *puVar27 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar27 + 5) = cVar8 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
    puVar27[7] = 0;
    puVar27[8] = lVar19;
    iVar18 = (int)puVar6[0x34];
    *(uint *)(puVar6 + 0x34) = iVar18 + 1U;
    if (*(uint *)((longlong)puVar6 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(puVar29,iVar18);
    }
    *(undefined8 **)(puVar6[0x33] + (longlong)iVar18 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = (int)puVar6[0x34] + -1;
    uVar10 = *(undefined8 *)(param_7 + 0x10);
    local_1a0 = *(undefined8 *)(param_7 + 0x18);
    fVar38 = 0.0;
    if (0.0 <= DAT_14c760300) {
      fVar38 = DAT_14c760300;
    }
    fVar39 = 0.0;
    if (0.0 <= DAT_14c7602fc) {
      fVar39 = DAT_14c7602fc;
    }
    if (1.0 <= fVar35) {
      fVar35 = 1.0;
    }
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    fVar36 = fVar35 * 5.2 + 1.0;
    fVar35 = powf(0.2,fVar36);
    fVar30 = powf(0.4,fVar36);
    fVar31 = powf(0.6,fVar36);
    fVar36 = powf(0.8,fVar36);
    puVar29 = local_1c8;
    uVar34 = 0xffffffff;
    if (param_8 != '\0') {
      if ((*(byte *)(*(longlong *)(param_4 + 0x28) + 0x1d0) & 8) == 0) {
        puVar17 = (undefined4 *)(param_4 + 0xe0);
      }
      else {
        puVar17 = (undefined4 *)(*(longlong *)(param_4 + 0x28) + 400);
      }
      uVar34 = *puVar17;
    }
    local_1a8 = (ulonglong *)CONCAT44(local_1a8._4_4_,uVar34);
    local_198 = CONCAT44(local_198._4_4_,(int)uStack_140);
    uVar15 = local_1d8[0x39];
    puVar26 = (undefined8 *)(puVar6[0xe] + 0xf & 0xfffffffffffffff0);
    puVar16 = puVar26 + 0x38;
    if ((undefined8 *)puVar6[0xf] < puVar16) {
      FUN_140023dd8(local_1c8,0x1d0);
      puVar26 = (undefined8 *)(*puVar29 + 0xf & 0xfffffffffffffff0);
      puVar16 = puVar26 + 0x38;
    }
    puVar29 = local_1d0;
    local_1d0[0xe] = (ulonglong)puVar16;
    *puVar26 = &PTR_FUN_14a22af40;
    local_1d8 = puVar26 + 2;
    FUN_14718ab5c();
    iVar18 = (int)puVar29[0x14];
    *(uint *)(puVar29 + 0x14) = iVar18 + 1U;
    if (*(uint *)((longlong)puVar29 + 0xa4) < iVar18 + 1U) {
      FUN_1448cfae8(puVar29 + 0x13,iVar18);
    }
    *(undefined8 **)(puVar29[0x13] + (longlong)iVar18 * 8) = puVar26;
    *(undefined4 *)(puVar26 + 10) = uVar37;
    *(int *)((longlong)puVar26 + 0x54) = (int)local_1b8;
    lVar11 = FUN_1447e4f80();
    lVar19 = local_1b0;
    cVar8 = *(char *)(lVar11 + 0x41);
    if (cVar8 == '\x03') {
      cVar8 = '\x02';
    }
    puVar26[0x14] = *(undefined8 *)(local_1b0 + 0x18);
    *(char *)(puVar26 + 0x15) = cVar8;
    puVar26[0x11] = uVar15;
    puVar26[0xf] = uVar10;
    puVar26[0x10] = local_1a0;
    puVar26[0x12] = DAT_14c9c0de0;
    puVar26[0x13] = DAT_14c9c0d80;
    *(float *)(puVar26 + 7) = fVar38;
    *(float *)((longlong)puVar26 + 0x3c) = fVar39;
    *(float *)(puVar26 + 8) = fVar35;
    *(float *)((longlong)puVar26 + 0x44) = fVar30;
    *(float *)(puVar26 + 9) = fVar31;
    *(float *)((longlong)puVar26 + 0x4c) = fVar36;
    puVar26[0x18] = param_9;
    puVar26[0x19] = 0;
    *(undefined4 *)(puVar26 + 0x1a) = 0xffff0001;
    puVar26[6] = uVar24;
    *(undefined4 *)(puVar26 + 0xb) = (undefined4)local_198;
    puVar26[0xe] = local_1c0;
    puVar26[0xd] = puVar27;
    uVar24 = *(undefined8 *)(local_1b0 + 0x11a00);
    FUN_144a81af4();
    cVar8 = DAT_14c9d5f79;
    if (DAT_14c9d5f79 == '\x03') {
      cVar8 = '\x02';
    }
    puVar26[0x16] = uVar24;
    *(char *)(puVar26 + 0x17) = cVar8;
    if (*(longlong *)(lVar19 + 0x138d0) != 0) {
      FUN_1472ea582(local_1d0,lVar19 + 0x13870,local_1d8);
    }
    puVar6 = local_1c8;
    puVar29 = local_1d0;
    uStack_dc = *(undefined4 *)(param_9 + 0x8c);
    uStack_d8 = *(undefined2 *)(param_9 + 0x90);
    uStack_100 = *(undefined4 *)(param_9 + 0x68);
    uStack_fc = *(undefined4 *)(param_9 + 0x6c);
    uStack_f8 = *(undefined4 *)(param_9 + 0x70);
    uStack_f4 = *(undefined4 *)(param_9 + 0x74);
    uStack_f0 = *(undefined4 *)(param_9 + 0x78);
    local_108 = (ulonglong *)(*(ulonglong *)(param_9 + 0x60) | 8);
    uStack_d6 = (undefined2)*(undefined4 *)(param_9 + 0x92);
    uStack_d4 = (undefined2)((uint)*(undefined4 *)(param_9 + 0x92) >> 0x10);
    iVar18 = (int)*(undefined8 *)(param_9 + 0x84);
    local_e4 = DAT_14ca84e40;
    if (iVar18 < DAT_14ca84e40) {
      local_e4 = iVar18;
    }
    if (local_e4 < 2) {
      local_e4 = 1;
    }
    iVar18 = (int)((ulonglong)*(undefined8 *)(param_9 + 0x84) >> 0x20);
    iStack_e0 = DAT_14ca84e40;
    if (iVar18 < DAT_14ca84e40) {
      iStack_e0 = iVar18;
    }
    uStack_ec = (undefined4)*(undefined8 *)(param_9 + 0x7c);
    uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(param_9 + 0x7c) >> 0x20);
    if (iStack_e0 < 2) {
      iStack_e0 = 1;
    }
    uVar25 = local_1d0[0xe] + 7 & 0xfffffffffffffff8;
    uVar15 = uVar25 + 0x120;
    if (local_1d0[0xf] < uVar15) {
      FUN_140023dd8(local_1c8,0x128);
      uVar25 = *puVar6 + 7 & 0xfffffffffffffff8;
      uVar15 = uVar25 + 0x120;
    }
    puVar29[0xe] = uVar15;
    FUN_1456bbb8c(uVar25,L"Hair.RayMarchMask",&local_108,0);
    iVar18 = (int)puVar29[0x30];
    *(uint *)(puVar29 + 0x30) = iVar18 + 1U;
    if (*(uint *)((longlong)puVar29 + 0x184) < iVar18 + 1U) {
      FUN_14472c0f6(puVar29 + 0x2f,iVar18);
    }
    *(ulonglong *)(puVar29[0x2f] + (longlong)iVar18 * 8) = uVar25;
    *(int *)(uVar25 + 0x9c) = (int)puVar29[0x30] + -1;
    uStack_f4 = DAT_14c9a52a0;
    uStack_fc = (undefined4)DAT_14c9a5298;
    uStack_f8 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_e8 = DAT_14c9a52a0;
    local_e4 = 0;
    iStack_e0 = 0;
    uStack_dc = 1;
    uStack_d8 = 0;
    uStack_d6 = 0;
    uStack_d4 = 0;
    uStack_d2 = 0x10000;
    local_108 = *(ulonglong **)(param_9 + 0x84);
    uStack_100 = (uint)*(ushort *)(param_9 + 0x8c);
    uStack_f0 = uStack_fc;
    uStack_ec = uStack_f8;
    FUN_1400e8d41(puVar29,param_9,uVar25);
    lVar19 = local_1b0;
    puVar26[0xc] = uVar25;
    iVar18 = 4;
    if (DAT_14c7602f8 < 4) {
      iVar18 = DAT_14c7602f8;
    }
    if (iVar18 < 1) {
      iVar18 = 0;
    }
    uVar24 = *(undefined8 *)(local_1b0 + 0x13818);
    uVar10 = FUN_1417ed4a6();
    FUN_1448e935e(uVar24,&local_108,uVar10,0);
    FUN_1417ed4a6();
    local_1c0 = local_108;
    local_1b8 = CONCAT44(uStack_fc,uStack_100);
    uVar24 = *(undefined8 *)(lVar19 + 0x13818);
    FUN_145f29e90();
    FUN_1448e935e(uVar24,&local_108,&DAT_14c9d6c78,iVar18);
    FUN_145f29e90();
    puVar7 = local_108;
    uVar5 = CONCAT44(uStack_fc,uStack_100);
    uVar24 = *(undefined8 *)(lVar19 + 0x30f8);
    uVar10 = *(undefined8 *)(lVar19 + 0x3100);
    FUN_145f2a0fe();
    local_108 = (ulonglong *)0x0;
    uStack_100 = 0;
    uStack_fc = 0;
    FUN_1448f70da(puVar7,&DAT_14c9da3d8,local_1d8,&local_108);
    uVar4 = *(undefined8 *)(param_9 + 0x84);
    FUN_145f2a0fe();
    FUN_140069376(puVar29);
    puVar6 = local_1c8;
    puVar26 = (undefined8 *)(puVar29[0xe] + 7 & 0xfffffffffffffff8);
    puVar16 = puVar26 + 0x40;
    if ((undefined8 *)puVar29[0xf] < puVar16) {
      FUN_140023dd8(local_1c8,0x208);
      puVar26 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar26 + 0x40;
    }
    *local_1c8 = (ulonglong)puVar16;
    local_108 = local_1d8;
    uStack_100 = (uint)DAT_14c9da420;
    uStack_fc = (undefined4)((ulonglong)DAT_14c9da420 >> 0x20);
    if (DAT_14c9da420 != 0) {
      LOCK();
      *(int *)(DAT_14c9da420 + 8) = *(int *)(DAT_14c9da420 + 8) + 1;
      UNLOCK();
    }
    uStack_f8 = 0x4c9da3d8;
    uStack_f4 = 1;
    local_1f8 = CONCAT71(local_1f8._1_7_,2);
    FUN_140068f1a(puVar26,&local_128,&local_108,1);
    puVar29 = local_1d0;
    *puVar26 = &PTR_FUN_14a22af50;
    puVar26[0x37] = local_1d8;
    puVar26[0x38] = local_1c0;
    puVar26[0x39] = local_1b8;
    puVar26[0x3a] = puVar7;
    puVar26[0x3b] = uVar5;
    puVar26[0x3c] = uVar24;
    puVar26[0x3d] = uVar10;
    puVar26[0x3e] = uVar4;
    *(undefined4 *)(puVar26 + 0x3f) = local_1a8._0_4_;
    iVar18 = (int)local_1d0[0x2e];
    *(uint *)(local_1d0 + 0x2e) = iVar18 + 1U;
    if (*(uint *)((longlong)local_1d0 + 0x174) < iVar18 + 1U) {
      FUN_14470e57a(local_1d0 + 0x2d,iVar18);
    }
    *(undefined8 **)(puVar29[0x2d] + (longlong)iVar18 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x2c) = (int)puVar29[0x2e] + -1;
    FUN_140069100(puVar29,puVar26);
  }
  else {
LAB_142c6271d:
    lVar19 = local_1b0;
    if (((*(char *)(local_1b0 + 0x11a08) == '\x01') && (*(longlong *)(local_1b0 + 0x11c90) != 0)) &&
       ((*(longlong *)(local_1b0 + 0x11c98) != 0 && (*(longlong *)(local_1b0 + 0x11ca8) != 0)))) {
      local_198 = puVar29[0x39];
      uStack_dc = *(undefined4 *)(param_9 + 0x8c);
      uStack_d8 = *(undefined2 *)(param_9 + 0x90);
      uStack_100 = *(undefined4 *)(param_9 + 0x68);
      uStack_fc = *(undefined4 *)(param_9 + 0x6c);
      uStack_f8 = *(undefined4 *)(param_9 + 0x70);
      uStack_f4 = *(undefined4 *)(param_9 + 0x74);
      uStack_f0 = *(undefined4 *)(param_9 + 0x78);
      local_108 = (ulonglong *)(*(ulonglong *)(param_9 + 0x60) | 8);
      uStack_d6 = (undefined2)*(undefined4 *)(param_9 + 0x92);
      uStack_d4 = (undefined2)((uint)*(undefined4 *)(param_9 + 0x92) >> 0x10);
      uStack_ec = (undefined4)*(undefined8 *)(param_9 + 0x7c);
      uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(param_9 + 0x7c) >> 0x20);
      iVar18 = (int)*(undefined8 *)(param_9 + 0x84);
      local_e4 = DAT_14ca84e40;
      if (iVar18 < DAT_14ca84e40) {
        local_e4 = iVar18;
      }
      if (local_e4 < 2) {
        local_e4 = 1;
      }
      iVar18 = (int)((ulonglong)*(undefined8 *)(param_9 + 0x84) >> 0x20);
      iStack_e0 = DAT_14ca84e40;
      if (iVar18 < DAT_14ca84e40) {
        iStack_e0 = iVar18;
      }
      if (iStack_e0 < 2) {
        iStack_e0 = 1;
      }
      puVar29 = param_1 + 0xe;
      uVar25 = param_1[0xe] + 7 & 0xfffffffffffffff8;
      uVar15 = uVar25 + 0x120;
      local_1d0 = puVar29;
      if (param_1[0xf] < uVar15) {
        FUN_140023dd8(puVar29,0x128);
        uVar25 = *puVar29 + 7 & 0xfffffffffffffff8;
        uVar15 = uVar25 + 0x120;
      }
      param_1[0xe] = uVar15;
      FUN_1456bbb8c(uVar25,L"Hair.RayMarchMask",&local_108,0);
      iVar18 = (int)param_1[0x30];
      *(uint *)(param_1 + 0x30) = iVar18 + 1U;
      if (*(uint *)((longlong)param_1 + 0x184) < iVar18 + 1U) {
        FUN_14472c0f6(param_1 + 0x2f,iVar18);
      }
      *(ulonglong *)(param_1[0x2f] + (longlong)iVar18 * 8) = uVar25;
      *(int *)(uVar25 + 0x9c) = (int)param_1[0x30] + -1;
      uStack_f4 = DAT_14c9a52a0;
      uStack_fc = (undefined4)DAT_14c9a5298;
      uStack_f8 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
      uStack_e8 = DAT_14c9a52a0;
      local_e4 = 0;
      iStack_e0 = 0;
      uStack_dc = 1;
      uStack_d8 = 0;
      uStack_d6 = 0;
      uStack_d4 = 0;
      uStack_d2 = 0x10000;
      local_108 = *(ulonglong **)(param_9 + 0x84);
      uStack_100 = (uint)*(ushort *)(param_9 + 0x8c);
      uStack_f0 = uStack_fc;
      uStack_ec = uStack_f8;
      FUN_1400e8d41(param_1,param_9,uVar25);
      bVar28 = 1 < *(int *)(lVar19 + 0x11b78) && 0 < DAT_14c76030c;
      uVar24 = *(undefined8 *)(lVar19 + 0x13818);
      uVar10 = FUN_1417ed4a6();
      FUN_1448e935e(uVar24,&local_108,uVar10,0);
      FUN_1417ed4a6();
      local_150 = local_108;
      local_158 = CONCAT44(uStack_fc,uStack_100);
      uVar24 = *(undefined8 *)(lVar19 + 0x13818);
      local_1d9 = bVar28;
      FUN_145eb5b46();
      FUN_1448e935e(uVar24,&local_108,&DAT_14c9d6b50,bVar28);
      FUN_145eb5b46();
      local_1a0._0_4_ = 0xffffffff;
      if (param_8 != '\0') {
        if ((*(byte *)(*(longlong *)(param_4 + 0x28) + 0x1d0) & 8) == 0) {
          puVar17 = (undefined4 *)(param_4 + 0xe0);
        }
        else {
          puVar17 = (undefined4 *)(*(longlong *)(param_4 + 0x28) + 400);
        }
        local_1a0._0_4_ = *puVar17;
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar21);
      local_1d8 = local_108;
      local_160 = CONCAT44(uStack_fc,uStack_100);
      local_168 = *(undefined8 *)(lVar19 + 0x30f8);
      local_170 = *(undefined8 *)(lVar19 + 0x3100);
      local_178 = *(undefined8 *)(param_9 + 0x84);
      FUN_1448a862c();
      local_1c8 = (ulonglong *)(longlong)*(int *)(lVar19 + 0x11b78);
      if (0 < (longlong)local_1c8) {
        local_1c0 = param_1 + 0x13;
        local_188 = lVar19 + 0x13870;
        local_190 = param_1 + 0x2d;
        puVar29 = (ulonglong *)0x0;
        local_180 = uVar25;
        do {
          puVar6 = local_1d0;
          local_1a8 = *(ulonglong **)(lVar19 + 0x11b70);
          puVar26 = (undefined8 *)(param_1[0xe] + 0xf & 0xfffffffffffffff0);
          puVar16 = puVar26 + 0x38;
          if ((undefined8 *)param_1[0xf] < puVar16) {
            FUN_140023dd8(local_1d0,0x1d0);
            puVar26 = (undefined8 *)(*puVar6 + 0xf & 0xfffffffffffffff0);
            puVar16 = puVar26 + 0x38;
          }
          param_1[0xe] = (ulonglong)puVar16;
          *puVar26 = &PTR_FUN_14a22af68;
          puVar16 = puVar26 + 2;
          FUN_14718ac32(puVar16);
          iVar18 = (int)param_1[0x14];
          *(uint *)(param_1 + 0x14) = iVar18 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar18 + 1U) {
            FUN_1448cfae8(local_1c0,iVar18);
          }
          *(undefined8 **)(*local_1c0 + (longlong)iVar18 * 8) = puVar26;
          *(undefined4 *)(puVar26 + 10) = uVar37;
          *(int *)((longlong)puVar26 + 0x4c) = (int)local_1b8;
          lVar11 = FUN_1447e4f80();
          lVar19 = local_1b0;
          cVar8 = *(char *)(lVar11 + 0x41);
          if (cVar8 == '\x03') {
            cVar8 = '\x02';
          }
          puVar26[0x12] = *(undefined8 *)(local_1b0 + 0x18);
          *(char *)(puVar26 + 0x13) = cVar8;
          puVar26[0xc] = local_198;
          uVar24 = *(undefined8 *)(local_1b0 + 0x11a00);
          FUN_144a81af4();
          cVar8 = DAT_14c9d5f79;
          if (DAT_14c9d5f79 == '\x03') {
            cVar8 = '\x02';
          }
          puVar26[0x16] = uVar24;
          *(char *)(puVar26 + 0x17) = cVar8;
          uVar24 = *(undefined8 *)(lVar19 + 0x11c90);
          lVar19 = FUN_1414708b2();
          cVar8 = *(char *)(lVar19 + 0x41);
          if (*(char *)(lVar19 + 0x41) == '\x03') {
            cVar8 = '\x02';
          }
          puVar26[0x14] = uVar24;
          *(char *)(puVar26 + 0x15) = cVar8;
          puVar26[0xd] = DAT_14c9c0de0;
          puVar26[0xe] = DAT_14c9c0d80;
          FUN_14019e00e(&local_128,&local_108,0,1);
          lVar19 = FUN_1448a8484();
          puVar27 = local_128;
          cVar8 = *(char *)(lVar19 + 0x41);
          if (cVar8 == '\x03') {
            cVar8 = '\x02';
          }
          puVar26[0x10] = local_128;
          *(char *)(puVar26 + 0x11) = cVar8;
          if (local_128 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = (uint *)(local_128 + 1);
            uVar9 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar9 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(local_128 + 1);
              LOCK();
              uVar9 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar9 >> 0x1e & 1) == 0) {
                bVar3 = *(byte *)((longlong)local_128 + 0xd);
                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                plVar12[1] = (longlong)puVar27;
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c8;
                if ((bVar3 & 2) == 0) {
                  do {
                    *plVar12 = (longlong)plVar14;
                    LOCK();
                    bVar28 = plVar14 != DAT_14ca843c0;
                    plVar13 = plVar12;
                    if (bVar28) {
                      plVar14 = DAT_14ca843c0;
                      plVar13 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar13;
                    UNLOCK();
                  } while (bVar28);
                }
                else {
                  do {
                    *plVar12 = (longlong)plVar13;
                    LOCK();
                    bVar28 = plVar13 != DAT_14ca843c8;
                    plVar14 = plVar12;
                    if (bVar28) {
                      plVar13 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar28);
                }
              }
            }
          }
          lVar19 = *(longlong *)(param_4 + 0x28);
          if (*(char *)(lVar19 + 0x1e8) == '\0') {
            dVar32 = *(double *)(lVar19 + 0x90);
            dVar33 = *(double *)(lVar19 + 0x50);
            dVar2 = *(double *)(lVar19 + 0x70);
            uVar34 = 0;
          }
          else {
            dVar32 = *(double *)(lVar19 + 0x30) + *(double *)(local_1b0 + 0x1040);
            dVar2 = *(double *)(lVar19 + 0x28) + *(double *)(local_1b0 + 0x1038);
            dVar33 = *(double *)(lVar19 + 0x20) + *(double *)(local_1b0 + 0x1030);
            uVar34 = 0x3f800000;
          }
          *(float *)(puVar26 + 6) = (float)dVar33;
          *(float *)((longlong)puVar26 + 0x34) = (float)dVar2;
          *(float *)(puVar26 + 7) = (float)dVar32;
          *(undefined4 *)((longlong)puVar26 + 0x3c) = uVar34;
          *(int *)((longlong)puVar26 + 0x44) = (int)local_1a8[(longlong)puVar29 * 0xf + 0xd];
          *(int *)(puVar26 + 8) = (int)local_1c8;
          iVar18 = DAT_14c760308;
          if (1 < DAT_14c760308) {
            iVar18 = 2;
          }
          if (iVar18 < 1) {
            iVar18 = 0;
          }
          *(int *)(puVar26 + 9) = iVar18;
          puVar26[0x18] = param_9;
          puVar26[0x19] = 0;
          *(undefined4 *)(puVar26 + 0x1a) = 0xffff0001;
          FUN_1472ea582(param_1,local_188,puVar16);
          puVar26[0xb] = local_180;
          FUN_145eb5db4();
          local_128 = (undefined8 *)0x0;
          lStack_120 = 0;
          FUN_1448f70da(local_1d8,&DAT_14c9da350,puVar16,&local_128);
          FUN_145eb5db4();
          FUN_140069376(param_1);
          puVar6 = local_1d0;
          puVar27 = (undefined8 *)(param_1[0xe] + 7 & 0xfffffffffffffff8);
          puVar26 = puVar27 + 0x40;
          if ((undefined8 *)param_1[0xf] < puVar26) {
            FUN_140023dd8(local_1d0,0x208);
            puVar27 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
            puVar26 = puVar27 + 0x40;
          }
          lVar19 = local_1b0;
          *local_1d0 = (ulonglong)puVar26;
          lStack_120 = DAT_14c9da398;
          if (DAT_14c9da398 != 0) {
            LOCK();
            *(int *)(DAT_14c9da398 + 8) = *(int *)(DAT_14c9da398 + 8) + 1;
            UNLOCK();
          }
          local_118 = &DAT_14c9da350;
          local_1f8 = CONCAT71(local_1f8._1_7_,2);
          local_128 = puVar16;
          FUN_140068f1a(puVar27,&local_129,&local_128,1);
          *puVar27 = &PTR_FUN_14a22af70;
          puVar27[0x37] = puVar16;
          puVar27[0x38] = local_150;
          puVar27[0x39] = local_158;
          puVar27[0x3a] = local_1d8;
          puVar27[0x3b] = local_160;
          puVar27[0x3c] = local_168;
          puVar27[0x3d] = local_170;
          puVar27[0x3e] = local_178;
          *(undefined4 *)(puVar27 + 0x3f) = (undefined4)local_1a0;
          iVar18 = (int)param_1[0x2e];
          *(uint *)(param_1 + 0x2e) = iVar18 + 1U;
          if (*(uint *)((longlong)param_1 + 0x174) < iVar18 + 1U) {
            FUN_14470e57a(local_190,iVar18);
          }
          *(undefined8 **)(param_1[0x2d] + (longlong)iVar18 * 8) = puVar27;
          *(int *)((longlong)puVar27 + 0x2c) = (int)param_1[0x2e] + -1;
          FUN_140069100(param_1,puVar27);
          puVar29 = (ulonglong *)((longlong)puVar29 + 1);
        } while ((~local_1d9 & puVar29 < local_1c8) != 0);
      }
    }
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
LAB_142c6275b:
  if ((local_c0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c63869 FUN_142c63869 body=69 status=ok
// SIG undefined FUN_142c63869(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63869(void)

{
  _DAT_14c9d6d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c638ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6d40,1);
  return;
}



// FUNCTION 142c638ae FUN_142c638ae body=69 status=ok
// SIG undefined FUN_142c638ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c638ae(void)

{
  _DAT_14c9d6d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c638f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6d50,1);
  return;
}



// FUNCTION 142c638f3 FUN_142c638f3 body=69 status=ok
// SIG undefined FUN_142c638f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c638f3(void)

{
  _DAT_14c9d6d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6d60,1);
  return;
}



// FUNCTION 142c63938 FUN_142c63938 body=69 status=ok
// SIG undefined FUN_142c63938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63938(void)

{
  _DAT_14c9d6d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6397a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6d70,1);
  return;
}



// FUNCTION 142c6397d FUN_142c6397d body=69 status=ok
// SIG undefined FUN_142c6397d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6397d(void)

{
  _DAT_14c9d6d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c639bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6d80,1);
  return;
}



// FUNCTION 142c639c2 FUN_142c639c2 body=69 status=ok
// SIG undefined FUN_142c639c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c639c2(void)

{
  _DAT_14c9d6d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6d90,1);
  return;
}



// FUNCTION 142c63a07 FUN_142c63a07 body=69 status=ok
// SIG undefined FUN_142c63a07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63a07(void)

{
  _DAT_14c9d6da0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6da8,1);
  return;
}



// FUNCTION 142c63a4c FUN_142c63a4c body=69 status=ok
// SIG undefined FUN_142c63a4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63a4c(void)

{
  _DAT_14c9d6db0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6db8,1);
  return;
}



// FUNCTION 142c63a91 FUN_142c63a91 body=69 status=ok
// SIG undefined FUN_142c63a91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63a91(void)

{
  _DAT_14c9d6dc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6dc8,1);
  return;
}



// FUNCTION 142c63ad6 FUN_142c63ad6 body=69 status=ok
// SIG undefined FUN_142c63ad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63ad6(void)

{
  _DAT_14c9d6dd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6dd8,1);
  return;
}



// FUNCTION 142c63b1b FUN_142c63b1b body=69 status=ok
// SIG undefined FUN_142c63b1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63b1b(void)

{
  _DAT_14c9d6de0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6de8,1);
  return;
}



// FUNCTION 142c63b60 FUN_142c63b60 body=69 status=ok
// SIG undefined FUN_142c63b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63b60(void)

{
  _DAT_14c9d6df0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6df8,1);
  return;
}



// FUNCTION 142c63ba5 FUN_142c63ba5 body=69 status=ok
// SIG undefined FUN_142c63ba5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63ba5(void)

{
  _DAT_14c9d6e00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6e08,1);
  return;
}



// FUNCTION 142c63bea FUN_142c63bea body=69 status=ok
// SIG undefined FUN_142c63bea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63bea(void)

{
  _DAT_14c9d6e10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6e18,1);
  return;
}



// FUNCTION 142c63c2f FUN_142c63c2f body=69 status=ok
// SIG undefined FUN_142c63c2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63c2f(void)

{
  _DAT_14c9d6e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6e30,1);
  return;
}



// FUNCTION 142c63c80 FUN_142c63c80 body=509 status=ok
// SIG undefined FUN_142c63c80(void)

void FUN_142c63c80(longlong *param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  int local_6c;
  undefined1 local_65;
  undefined1 *local_64;
  undefined4 local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = *param_1;
  puVar7 = (undefined8 *)(*(longlong *)(lVar8 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar7 + 0x54;
  local_6c = param_2;
  if (*(undefined8 **)(lVar8 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(lVar8 + 0x70));
    puVar7 = (undefined8 *)(*(longlong *)(lVar8 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar7 + 0x54;
  }
  *(undefined8 **)(lVar8 + 0x70) = puVar4;
  *puVar7 = &PTR_FUN_14a22b060;
  puVar4 = puVar7 + 3;
  memset(puVar4,0,0x288);
  iVar6 = *(int *)(lVar8 + 0xa0);
  uVar3 = iVar6 + 1;
  *(uint *)(lVar8 + 0xa0) = uVar3;
  if (*(uint *)(lVar8 + 0xa4) < uVar3) {
    FUN_1448cfae8((longlong *)(lVar8 + 0x98));
  }
  iVar2 = local_6c;
  *(undefined8 **)(*(longlong *)(lVar8 + 0x98) + (longlong)iVar6 * 8) = puVar7;
  *(undefined4 *)(puVar7 + 2) = 0;
  puVar7[0x53] = *(undefined8 *)param_1[1];
  switch(local_6c) {
  case 0:
    puVar4 = puVar7 + 0x33;
    break;
  case 1:
    break;
  case 2:
    puVar4 = puVar7 + 0x13;
    break;
  case 3:
    puVar4 = puVar7 + 0x23;
    break;
  case 4:
    puVar4 = puVar7 + 0x43;
    break;
  default:
    puVar4 = (undefined8 *)0x0;
  }
  lVar8 = (longlong)local_6c;
  uVar5 = 0;
  do {
    puVar4[uVar5] = *(undefined8 *)(param_1[2] + lVar8 * 0x80 + uVar5 * 8);
    uVar5 = uVar5 + 1;
  } while (param_3 != uVar5);
  if ((int)param_3 < 0x10) {
    iVar6 = param_3 - 1;
    puVar4 = puVar4 + param_3;
    do {
      *puVar4 = *(undefined8 *)(param_1[3] + lVar8 * 8);
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < 0xf);
  }
  uVar1 = *(undefined8 *)param_1[4];
  FUN_145effcd8();
  FUN_1448e935e(uVar1,local_58,&DAT_14c9d6ea0,iVar2);
  FUN_145effcd8();
  local_78 = &local_64;
  local_64 = &DAT_100000001;
  local_5c = 1;
  FUN_14718ae21(*param_1,&local_65,local_58,puVar7 + 2);
  *(undefined4 *)(param_1[5] + lVar8 * 4) = 0;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c63e7e FUN_142c63e7e body=69 status=ok
// SIG undefined FUN_142c63e7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63e7e(void)

{
  _DAT_14c9d6f60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6f68,1);
  return;
}



// FUNCTION 142c63ec3 FUN_142c63ec3 body=69 status=ok
// SIG undefined FUN_142c63ec3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63ec3(void)

{
  _DAT_14c9d6f70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6f78,1);
  return;
}



// FUNCTION 142c63f08 FUN_142c63f08 body=69 status=ok
// SIG undefined FUN_142c63f08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63f08(void)

{
  _DAT_14c9d6f80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6f88,1);
  return;
}



// FUNCTION 142c63f4d FUN_142c63f4d body=69 status=ok
// SIG undefined FUN_142c63f4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63f4d(void)

{
  _DAT_14c9d6f90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6f98,1);
  return;
}



// FUNCTION 142c63f92 FUN_142c63f92 body=69 status=ok
// SIG undefined FUN_142c63f92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63f92(void)

{
  _DAT_14c9d6fa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c63fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6fa8,1);
  return;
}



// FUNCTION 142c63fd7 FUN_142c63fd7 body=69 status=ok
// SIG undefined FUN_142c63fd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c63fd7(void)

{
  _DAT_14c9d6fb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6fb8,1);
  return;
}



// FUNCTION 142c6401c FUN_142c6401c body=69 status=ok
// SIG undefined FUN_142c6401c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6401c(void)

{
  _DAT_14c9d6fc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6405e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6fc8,1);
  return;
}



// FUNCTION 142c64061 FUN_142c64061 body=69 status=ok
// SIG undefined FUN_142c64061(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64061(void)

{
  _DAT_14c9d6fd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c640a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6fe0,1);
  return;
}



// FUNCTION 142c640a6 FUN_142c640a6 body=69 status=ok
// SIG undefined FUN_142c640a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c640a6(void)

{
  _DAT_14c9d6ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c640e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d6ff8,1);
  return;
}



// FUNCTION 142c640eb FUN_142c640eb body=69 status=ok
// SIG undefined FUN_142c640eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c640eb(void)

{
  _DAT_14c9d7000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6412d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7008,1);
  return;
}



// FUNCTION 142c64130 FUN_142c64130 body=69 status=ok
// SIG undefined FUN_142c64130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64130(void)

{
  _DAT_14c9d7018 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7020,1);
  return;
}



// FUNCTION 142c64175 FUN_142c64175 body=69 status=ok
// SIG undefined FUN_142c64175(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64175(void)

{
  _DAT_14c9d7028 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c641b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7030,1);
  return;
}



// FUNCTION 142c641ba FUN_142c641ba body=69 status=ok
// SIG undefined FUN_142c641ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c641ba(void)

{
  _DAT_14c9d7038 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c641fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7040,1);
  return;
}



// FUNCTION 142c641ff FUN_142c641ff body=69 status=ok
// SIG undefined FUN_142c641ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c641ff(void)

{
  _DAT_14c9d7050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7058,1);
  return;
}



// FUNCTION 142c64244 FUN_142c64244 body=69 status=ok
// SIG undefined FUN_142c64244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64244(void)

{
  _DAT_14c9d7060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7068,1);
  return;
}



// FUNCTION 142c64289 FUN_142c64289 body=69 status=ok
// SIG undefined FUN_142c64289(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64289(void)

{
  _DAT_14c9d7070 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c642cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7078,1);
  return;
}



// FUNCTION 142c642ce FUN_142c642ce body=69 status=ok
// SIG undefined FUN_142c642ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c642ce(void)

{
  _DAT_14c9d7080 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7088,1);
  return;
}



// FUNCTION 142c64313 FUN_142c64313 body=69 status=ok
// SIG undefined FUN_142c64313(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64313(void)

{
  _DAT_14c9d7090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7098,1);
  return;
}



// FUNCTION 142c64358 FUN_142c64358 body=69 status=ok
// SIG undefined FUN_142c64358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64358(void)

{
  _DAT_14c9d70a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6439a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d70a8,1);
  return;
}



// FUNCTION 142c6439d FUN_142c6439d body=69 status=ok
// SIG undefined FUN_142c6439d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6439d(void)

{
  _DAT_14c9d70b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c643df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d70b8,1);
  return;
}



// FUNCTION 142c643e2 FUN_142c643e2 body=69 status=ok
// SIG undefined FUN_142c643e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c643e2(void)

{
  _DAT_14c9d70c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d70c8,1);
  return;
}



// FUNCTION 142c64427 FUN_142c64427 body=69 status=ok
// SIG undefined FUN_142c64427(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64427(void)

{
  _DAT_14c9d70d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d70d8,1);
  return;
}



// FUNCTION 142c6446c FUN_142c6446c body=69 status=ok
// SIG undefined FUN_142c6446c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6446c(void)

{
  _DAT_14c9d70e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c644ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d70e8,1);
  return;
}



// FUNCTION 142c644b1 FUN_142c644b1 body=69 status=ok
// SIG undefined FUN_142c644b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c644b1(void)

{
  _DAT_14c9d70f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c644f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7100,1);
  return;
}



// FUNCTION 142c644f6 FUN_142c644f6 body=69 status=ok
// SIG undefined FUN_142c644f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c644f6(void)

{
  _DAT_14c9d7110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7118,1);
  return;
}



// FUNCTION 142c6453b FUN_142c6453b body=69 status=ok
// SIG undefined FUN_142c6453b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6453b(void)

{
  _DAT_14c9d7128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6457d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7130,1);
  return;
}



// FUNCTION 142c64580 FUN_142c64580 body=69 status=ok
// SIG undefined FUN_142c64580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64580(void)

{
  _DAT_14c9d7140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c645c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7148,1);
  return;
}



// FUNCTION 142c645c5 FUN_142c645c5 body=69 status=ok
// SIG undefined FUN_142c645c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c645c5(void)

{
  _DAT_14c9d7150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7158,1);
  return;
}



// FUNCTION 142c6460a FUN_142c6460a body=69 status=ok
// SIG undefined FUN_142c6460a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6460a(void)

{
  _DAT_14c9d7160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6464c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7168,1);
  return;
}



// FUNCTION 142c6464f FUN_142c6464f body=69 status=ok
// SIG undefined FUN_142c6464f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6464f(void)

{
  _DAT_14c9d7178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7180,1);
  return;
}



// FUNCTION 142c64694 FUN_142c64694 body=69 status=ok
// SIG undefined FUN_142c64694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64694(void)

{
  _DAT_14c9d7190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c646d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d7198,1);
  return;
}



// FUNCTION 142c646d9 FUN_142c646d9 body=69 status=ok
// SIG undefined FUN_142c646d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c646d9(void)

{
  _DAT_14c9d71a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c6471b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d71b0,1);
  return;
}



// FUNCTION 142c6471e FUN_142c6471e body=69 status=ok
// SIG undefined FUN_142c6471e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6471e(void)

{
  _DAT_14c9d71c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c64760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d71c8,1);
  return;
}



// FUNCTION 142c64763 FUN_142c64763 body=69 status=ok
// SIG undefined FUN_142c64763(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c64763(void)

{
  _DAT_14c9d71d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142c647a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9d71e0,1);
  return;
}



// FUNCTION 142c647d8 FUN_142c647d8 body=3820 status=ok
// SIG undefined FUN_142c647d8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142c647d8(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  int param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ulonglong uVar21;
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong *local_310;
  undefined8 local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined8 *local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 *local_2c8;
  longlong *local_2c0;
  uint local_2b4;
  longlong local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  longlong *******local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 local_168;
  longlong *******local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 local_108 [88];
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar6 = 0;
  if (param_4 == (undefined8 *)0x0) {
    local_2b0 = 0;
  }
  else {
    local_2b0 = param_4[0x43];
  }
  local_2c0 = *(longlong **)(param_2 + 0xb8);
  local_170 = (longlong *)0x0;
  local_168 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0x700000000;
  local_160 = (longlong *******)0x0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_98 = 0;
  local_78 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_2d0 = param_2;
  local_2c8 = param_4;
  local_2a0 = param_3;
  if (param_6[3] != 0) {
    if ((*(byte *)(*(longlong *)(param_6[3] + 0x28) + 0x246) & 0x10) == 0) {
      uVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*param_6 + 0x358))(param_6);
      uVar6 = (uint)(byte)(cVar2 * '\x02' + 1);
    }
  }
  local_66 = *(undefined1 *)(param_7 + 7);
  local_19c = *(uint *)(local_2d0 + 0xe4) >> 0xe & 7;
  uVar3 = 0;
  local_218 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0xffffffff;
  uStack_1d4 = 0xffffffff;
  uStack_1d0 = 0xffffffff;
  uStack_1cc = 0xffffffff;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_19f = 1;
  local_198 = 0;
  local_190 = 0;
  uStack_1b0 = (undefined4)param_5[10];
  uStack_1ac = *(undefined4 *)((longlong)param_5 + 0x54);
  uStack_1a8 = (undefined4)param_5[0xb];
  uStack_1a4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  local_248 = 0;
  uStack_240 = 0;
  local_288 = *param_8;
  local_280 = param_8[1];
  local_278 = param_8[2];
  local_270 = param_8[3];
  local_268 = param_8[4];
  local_260 = param_8[5];
  local_258 = param_8[6];
  local_250 = param_8[7];
  local_238 = param_8[8];
  local_230 = param_8[9];
  local_64 = local_19c;
  FUN_144765e6c(&local_228,local_2c0[0x22],&local_288);
  FUN_1447662e4(local_180,&local_288);
  puVar11 = &DAT_14c9c0d58;
  if (param_9 == 2) {
    puVar11 = &DAT_14c9c0de8;
  }
  uStack_1c0 = *(undefined8 *)(puVar11 + 0x10);
  local_1c8 = *param_7;
  local_1b8 = param_7[1];
  if (DAT_14ca84f32 == '\x01') {
    if (*(int *)(DAT_14ca620d8 + 4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_6 + 0x490))(param_6);
      if (uVar4 < 4) {
        uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar4 << 3) & 0x1f));
      }
      else {
        uVar3 = 0;
        if ((uVar4 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar4 << 3) & 0x3f));
        }
      }
    }
  }
  local_19f = CONCAT11(uVar3,(undefined1)local_19f);
  cVar2 = (**(code **)(*param_6 + 0x4a0))(param_6);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1449c014c(param_1);
  }
  local_19f = CONCAT11(local_19f._1_1_,uVar3);
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    FUN_144766928(&local_228);
  }
  FUN_144765fea(local_2c0,*(undefined4 *)(param_1 + 0x20),0,local_108);
  plVar8 = local_2c0;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar7 = (**(code **)(*local_2c0 + 0x30))(local_2c0);
    puVar1 = local_2c8;
    local_318._0_4_ = uVar5;
    FUN_1456c013a(&local_228,param_6,uVar7,local_2c8);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar7 = (**(code **)(*plVar8 + 0x30))(plVar8);
    local_318 = (longlong *)CONCAT44(local_318._4_4_,uVar5);
    FUN_1456c0257(&local_228,param_6,uVar7,puVar1);
  }
  uVar4 = 0;
  local_67 = (char)local_2c0[0x25];
  local_2b4 = uVar6 + 4;
  if ((char)local_2c0[0x25] == -1) {
    local_2b4 = uVar6;
  }
  local_2b4 = local_2b4 & 0xff;
  if (*param_8 != 0) {
    if ((local_110 & 1) == 0) {
      local_290 = (longlong *******)0x0;
      local_298 = 0x58;
      uVar4 = 0;
    }
    else {
      plVar8 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar8 = local_180;
      }
      local_298 = *plVar8;
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar12 = *(int *)(local_298 + 0x28);
      iVar17 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar17 = 0;
        do {
          iVar17 = iVar17 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar16 = iVar12 + 0xe;
      if (-1 < iVar12 + 7) {
        iVar16 = iVar12 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      uVar4 = iVar17 + (iVar16 >> 3) +
                       (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar12) * 8 + 7U &
              0xfffffff8;
    }
    local_300 = &local_298;
    local_308 = param_10;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(*param_8,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),local_2c8
                 );
  }
  if (param_8[2] != 0) {
    uVar13 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      plVar8 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar8 = local_180;
      }
      local_298 = plVar8[(uVar13 >> 0x38) - 1];
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar12 = *(int *)(local_298 + 0x28);
      iVar17 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar17 = 0;
        do {
          iVar17 = iVar17 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar16 = iVar12 + 0xe;
      if (-1 < iVar12 + 7) {
        iVar16 = iVar12 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_290 = (longlong *******)((longlong)(int)uVar4 + (longlong)local_290);
      uVar4 = ((iVar16 >> 3) + (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar12) * 8 +
               iVar17 + 7U & 0xfffffff8) + uVar4;
    }
    local_300 = &local_298;
    local_308 = param_10;
    local_310 = param_6;
    local_318 = param_5;
    FUN_147197af4(param_8[2],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2c8);
  }
  if (param_8[4] != 0) {
    uVar13 = (ulonglong)(local_110 & 0x1f) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      plVar8 = local_180;
      if (local_170 != (longlong *)0x0) {
        plVar8 = local_170;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_298 = plVar8[(uVar13 >> 0x38) - 1];
      local_290 = (longlong *******)((longlong)(int)uVar4 + (longlong)local_290);
    }
    local_300 = &local_298;
    local_308 = param_10;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(param_8[4],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2c8);
  }
  uVar13 = (ulonglong)*(int *)(local_2d0 + 0xb0);
  if (0 < (longlong)uVar13) {
    uVar21 = 0;
    local_2a8 = uVar13;
    do {
      if ((local_2a0 >> (uVar21 & 0x3f) & 1) != 0) {
        lVar14 = *(longlong *)(local_2d0 + 0xa8);
        if (*(longlong *)(local_2d0 + 0xa8) == 0) {
          lVar14 = local_2d0;
        }
        plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
        uVar6 = *(uint *)(lVar14 + 0x7c + uVar21 * 0xa8);
        bVar18 = (byte)(uVar6 >> 8);
        bVar19 = (bVar18 & 8) + (char)local_2b4;
        bVar20 = bVar19;
        if (((uVar6 >> 0xc & 1) != 0) && (bVar20 = bVar19 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
          bVar20 = bVar19;
        }
        lVar14 = lVar14 + uVar21 * 0xa8;
        if (*param_8 == 0) {
          uVar6 = 0;
        }
        else {
          if ((*(byte *)(plVar8 + 0xe) & 1) == 0) {
            local_290 = (longlong *******)0x0;
            local_298 = 0x58;
            uVar6 = 0;
          }
          else {
            plVar9 = (longlong *)plVar8[2];
            if ((longlong *)plVar8[2] == (longlong *)0x0) {
              plVar9 = plVar8;
            }
            local_298 = *plVar9;
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar12 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar12 = 0;
              do {
                iVar12 = iVar12 + (uint)*(ushort *)(uVar13 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar17 = *(int *)(local_298 + 0x28);
            iVar16 = iVar17 + 0xe;
            if (-1 < iVar17 + 7) {
              iVar16 = iVar17 + 7;
            }
            if (*(ushort *)((longlong)plVar8 + 0x72) < 0x51) {
              local_290 = (longlong *******)(plVar8 + 4);
            }
            else {
              local_290 = (longlong *******)plVar8[4];
            }
            uVar6 = iVar12 + (iVar16 >> 3) +
                             (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar17) * 8 +
                    7U & 0xfffffff8;
          }
          local_2d8 = plVar8 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_10;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
          FUN_1456bf974(*param_8,*(undefined8 *)(param_8[1] + 0x18),*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[2] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar8 + 0xe) & 0xf) -
                   (ulonglong)(*(ushort *)(plVar8 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar8[2];
            if ((longlong *)plVar8[2] == (longlong *)0x0) {
              plVar9 = plVar8;
            }
            local_298 = plVar9[(uVar13 >> 0x38) - 1];
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar12 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar10 = 0;
              iVar12 = 0;
              do {
                iVar12 = iVar12 + (uint)*(ushort *)(uVar13 + 2 + lVar10);
                lVar10 = lVar10 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar10);
            }
            iVar17 = *(int *)(local_298 + 0x28);
            iVar16 = iVar17 + 0xe;
            if (-1 < iVar17 + 7) {
              iVar16 = iVar17 + 7;
            }
            if (*(ushort *)((longlong)plVar8 + 0x72) < 0x51) {
              plVar9 = plVar8 + 4;
            }
            else {
              plVar9 = (longlong *)plVar8[4];
            }
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar9);
            uVar6 = ((iVar16 >> 3) +
                     (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar17) * 8 + iVar12 +
                     7U & 0xfffffff8) + uVar6;
          }
          local_2d8 = plVar8 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_10;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
          FUN_1456bf974(param_8[2],*(undefined8 *)(param_8[3] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[4] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar8 + 0xe) & 0x1f) -
                   (ulonglong)(*(ushort *)(plVar8 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar9 = (longlong *)plVar8[2];
            if ((longlong *)plVar8[2] == (longlong *)0x0) {
              plVar9 = plVar8;
            }
            if (*(ushort *)((longlong)plVar8 + 0x72) < 0x51) {
              plVar15 = plVar8 + 4;
            }
            else {
              plVar15 = (longlong *)plVar8[4];
            }
            local_298 = plVar9[(uVar13 >> 0x38) - 1];
            local_290 = (longlong *******)((longlong)(int)uVar6 + (longlong)plVar15);
          }
          local_2d8 = plVar8 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_10;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
          FUN_1456bf974(param_8[4],*(undefined8 *)(param_8[5] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        uVar6 = 0;
        local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
        bVar19 = DAT_14ca96500;
        if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x000142c653fc:
          if (bVar19 != 0) {
LAB_142c65284:
            uVar4 = *(uint *)(lVar14 + 0x54) & 7;
            if (uVar4 == 0) {
              uVar6 = *(uint *)(local_2b0 + 0x15c);
              uVar4 = *(uint *)(local_2b0 + 0x204) & 0x7fffffff;
            }
            else {
              if ((uVar4 != 1) || (*(longlong *)(param_1 + 0x28) == 0)) goto LAB_142c652b3;
              uVar6 = *(uint *)(lVar14 + 0xa0) | 0x80000000;
              uVar4 = *(uint *)(lVar14 + 0xa4) | 0x80000000;
            }
            local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar4);
          }
        }
        else if (((2 < *(int *)(param_1 + 0x20)) &&
                 (lVar10 = (ulonglong)DAT_14ca85550 * 0x3c,
                 *(longlong *)(&DAT_14ca814b0 + lVar10) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc)
                ) {
          if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar10 + 3) & 0x10) != 0) {
            bVar19 = *(byte *)((longlong)&DAT_14ca814c8 + lVar10 + 3) & 0x20;
            goto joined_r0x000142c653fc;
          }
          goto LAB_142c65284;
        }
LAB_142c652b3:
        if (local_2b0 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(local_2b0 + 0x158);
        }
        local_298 = CONCAT44(uVar5,uVar6);
        local_2f0 = &local_288;
        local_2f8 = &local_228;
        local_300 = (undefined8 *)CONCAT71(local_300._1_7_,bVar20 | bVar18 & 0x20);
        local_310 = (longlong *)CONCAT44(local_310._4_4_,param_9);
        local_308 = 0;
        local_318 = (longlong *)CONCAT44(local_318._4_4_,2);
        local_2e8 = plVar8;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),local_2d0,uVar21 & 0xffffffff,&local_298);
        uVar13 = local_2a8;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar13);
  }
  if (lStack_1e0 != 0) {
    FUN_140021284();
  }
  if (local_1e8 != 0) {
    FUN_140021284();
  }
  if (lStack_1f0 != 0) {
    FUN_140021284();
  }
  if (local_1f8 != 0) {
    FUN_140021284();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((0x50 < local_110._2_2_) && (local_160 != (longlong *******)0x0)) {
    FUN_1400020a8();
  }
  local_110 = local_110 & 0xffff;
  local_160 = (longlong *******)0x0;
  if (local_170 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c656c6 FUN_142c656c6 body=2382 status=ok
// SIG undefined FUN_142c656c6(void)

/* WARNING: Removing unreachable block (ram,0x000142c65e38) */

void FUN_142c656c6(longlong *param_1,byte param_2)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char cVar10;
  undefined1 uVar11;
  byte bVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 auStack_518 [32];
  uint *local_4f8;
  undefined1 *local_4f0;
  undefined4 local_4dc;
  ulonglong local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined1 local_4ba [2];
  undefined8 local_4b8;
  undefined1 local_4ad;
  uint local_4ac;
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined7 local_47f;
  undefined8 uStack_478;
  undefined1 uStack_470;
  undefined1 local_468 [16];
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [16];
  undefined8 local_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined1 local_260 [16];
  undefined2 local_250;
  undefined2 local_24e;
  undefined2 local_24a;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_518;
  lVar3 = *param_1;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  local_47f = 0;
  local_498 = (undefined1  [16])0x0;
  local_4a8 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  if (param_2 < 2) {
    local_4d8 = 10;
    if (0 < DAT_14c76037c) {
      local_4d8 = (ulonglong)((DAT_14c873918 & 1) << 4) | 10;
    }
    puVar14 = &DAT_14c9d9e20;
    local_4dc = 1;
    local_4c8 = 1;
    local_4d0 = 0x20009;
  }
  else {
    local_4d0 = 0;
    puVar14 = &DAT_14c9c0d50;
    local_4d8 = 0;
    local_4c8 = 0;
    local_4dc = 0;
  }
  uVar4 = *puVar14;
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  uVar9 = DAT_14c9c0d98;
  *(undefined8 *)(lVar3 + 0x48) = DAT_14c9c0d98;
  *(undefined4 *)(lVar3 + 0x78) = 0;
  plVar5 = (longlong *)param_1[5];
  uVar6 = *(undefined8 *)param_1[4];
  puVar14 = (undefined8 *)param_1[3];
  plVar7 = (longlong *)param_1[1];
  plVar8 = (longlong *)param_1[2];
  uVar1 = *(uint *)(lVar3 + 8);
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  lStack_68 = 0;
  cVar10 = FUN_1406917e6();
  if (cVar10 == '\0') {
    local_1ac = (uint)uVar6 & 0x3f;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    if (plVar7[1] == 0) {
      uStack_288 = 0x1100000000;
      (**(code **)(*plVar7 + 0x48))(0,&local_310);
      FUN_14486d71a(&local_310);
    }
    local_2d0 = ZEXT816(0);
    local_310 = *puVar14;
    local_308 = puVar14[1];
    local_300 = puVar14[2];
    local_2f8 = puVar14[3];
    local_2f0 = puVar14[4];
    local_2e8 = puVar14[5];
    local_2e0 = puVar14[6];
    local_2d8 = puVar14[7];
    local_2c0 = puVar14[8];
    local_2b8 = puVar14[9];
    FUN_144765e6c(&local_238);
    uStack_1d0 = DAT_14c9c0df8;
    local_1c8 = uVar9;
    local_1d8 = uVar4;
    uVar13 = (**(code **)(*plVar8 + 0x490))(plVar8);
    if (uVar13 < 4) {
      uVar11 = (undefined1)(0x5010400 >> ((byte)(uVar13 << 3) & 0x1f));
    }
    else {
      uVar11 = 0;
      if ((uVar13 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar11 = (undefined1)(0xa060900000000 >> ((byte)(uVar13 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar11,(undefined1)local_1af);
    cVar10 = (**(code **)(*plVar8 + 0x4a0))(plVar8);
    if (cVar10 == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar11);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_1a8 = local_240;
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar3 = *plVar7;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_4f8 = &local_4ac;
        local_4ac = local_4ac & 0xffff0000;
        local_4f0 = local_4ba;
        FUN_14573482a(&DAT_14cafccf8,&local_4b8,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_4b8 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_4b8 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,uVar1,lVar3);
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar3 = *plVar7;
        local_4b8 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_4f8 = (uint *)local_4ba;
        local_4ba = (undefined1  [2])0x0;
        local_4f0 = &local_4ad;
        FUN_14573482a(&DAT_14cafd9c8,&local_4ac,
                      (int)((ulonglong)local_4b8 >> 0x20) * 0x17 + (int)local_4b8 & 0x7fffffff,
                      &local_4b8);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_4ac * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_4ac * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,uVar1,lVar3);
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(local_4dc,(undefined4)local_2b8);
    local_2b0 = local_4d8;
    local_2a8 = local_4d0;
    uStack_278 = CONCAT71(local_47f,uStack_480);
    local_2a0 = local_4a8._0_8_;
    uStack_298 = local_4a8._8_8_;
    local_290 = local_498._0_8_;
    uStack_288 = local_498._8_8_;
    local_280 = uStack_488;
    local_270 = uStack_478;
    local_250 = (undefined2)local_4c8;
    local_268 = 0;
    local_24a = 0;
    local_24e = 0;
    local_260 = (undefined1  [16])0x0;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = (undefined1  [16])0x0;
    local_310 = *puVar14;
    local_308 = puVar14[1];
    local_300 = puVar14[2];
    local_2f8 = puVar14[3];
    local_2f0 = puVar14[4];
    local_2e8 = puVar14[5];
    local_2e0 = puVar14[6];
    local_2d8 = puVar14[7];
    local_2c0 = puVar14[8];
    local_2b8 = puVar14[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = 0x100;
  local_70 = uVar1 & 0x7fffffff | local_70;
  lStack_68 = *plVar7;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar12 = (**(code **)(*plVar8 + 0x400))(plVar8);
    local_70 = local_70 & 0x7fffffff | (uint)bVar12 << 0x1f;
    FUN_1406918b2();
  }
  iVar2 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
    FUN_14069191a(plVar5,iVar2);
  }
  lVar3 = *plVar5;
  _Dst = (void *)(lVar3 + (longlong)iVar2 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar3 + 0x110 + (longlong)iVar2 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(ulonglong *)((longlong)_Dst + 0x120) = CONCAT44(uStack_6c,local_70);
  *(longlong *)((longlong)_Dst + 0x128) = lStack_68;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c66211 FUN_142c66211 body=19681 status=ok
// SIG undefined FUN_142c66211(void)

undefined8 *
FUN_142c66211(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong *param_4,int *param_5,
             uint param_6,longlong param_7)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  byte bVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  bool bVar32;
  byte bVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_608 [32];
  uint *local_5e8;
  float local_5e0;
  ulonglong *local_5d8;
  byte local_5ca;
  byte local_5c9;
  longlong local_5c8;
  uint local_5c0;
  uint local_5bc;
  longlong local_5b8;
  undefined8 *local_5b0;
  uint local_5a4;
  float local_5a0;
  int local_59c;
  int local_598;
  uint local_594;
  float local_590;
  byte local_58a;
  byte local_589;
  longlong local_588;
  ulonglong local_580;
  ulonglong *local_578;
  ulonglong local_570;
  int local_564;
  longlong local_560;
  ulonglong local_558;
  longlong local_550;
  ulonglong local_548;
  ulonglong local_540;
  longlong local_538;
  undefined8 local_530;
  ulonglong local_528;
  undefined8 local_520;
  ulonglong local_518;
  undefined8 *local_510;
  undefined8 *local_508;
  undefined8 *local_500;
  undefined8 *local_4f8;
  int local_4ec;
  int local_4e8;
  uint local_4e4;
  undefined8 *local_4e0;
  ulonglong local_4d8;
  undefined8 *local_4d0;
  undefined8 *local_4c8;
  undefined8 *local_4c0;
  ulonglong local_4b8;
  undefined8 *local_4b0;
  ulonglong local_4a8;
  ulonglong local_4a0;
  undefined8 *local_498;
  ulonglong local_490;
  ulonglong local_488;
  uint local_480;
  uint local_47c;
  int local_478;
  uint local_474;
  undefined8 *local_470;
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 *local_458;
  ulonglong local_450;
  ulonglong local_448;
  longlong local_440;
  undefined8 *local_438;
  undefined8 *local_430;
  undefined8 *local_428;
  ulonglong local_420;
  ulonglong local_418;
  longlong local_410;
  ulonglong local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  uint local_3e4;
  uint local_3e0;
  undefined4 local_3dc;
  uint local_3d8;
  undefined1 *local_3d4;
  uint local_3cc;
  undefined1 *local_3c8;
  uint local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  uint local_3b4;
  undefined1 *local_3b0;
  uint local_3a8;
  undefined1 *local_3a4;
  undefined1 local_399;
  int local_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  undefined8 local_380;
  uint local_378;
  undefined1 *local_374;
  uint local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined8 local_360;
  undefined8 uStack_358;
  int local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  int local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  int local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 local_320 [16];
  int local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  int local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  int local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2ab;
  undefined3 uStack_2a7;
  int local_2a4;
  uint local_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined4 local_280;
  uint local_27c;
  undefined4 local_278;
  uint local_274;
  uint local_270;
  undefined4 local_26c;
  undefined2 local_268;
  undefined4 local_266;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_608;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar16 = *(undefined8 *)param_5;
  *param_1 = uVar16;
  local_280 = DAT_14ca85098;
  uStack_290 = DAT_14ca85088;
  uStack_28c = DAT_14ca8508c;
  uStack_288 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uVar23 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_f8 = DAT_14ca85098;
  local_108 = DAT_14ca85088;
  uStack_104 = DAT_14ca8508c;
  uStack_100 = DAT_14ca85090;
  uStack_fc = DAT_14ca85094;
  local_298._0_4_ = 0x20009;
  local_298._4_4_ = 0;
  local_26c = 0x10001;
  local_268 = 0x101;
  local_278 = 0;
  local_266 = 0xff001c00;
  uVar28 = (uint)uVar16;
  local_274 = DAT_14ca84e40;
  if ((int)uVar28 < (int)DAT_14ca84e40) {
    local_274 = uVar28;
  }
  if ((int)local_274 < 2) {
    local_274 = 1;
  }
  uVar34 = (uint)((ulonglong)uVar16 >> 0x20);
  local_270 = DAT_14ca84e40;
  if ((int)uVar34 < (int)DAT_14ca84e40) {
    local_270 = uVar34;
  }
  if ((int)local_270 < 2) {
    local_270 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar25 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar25 + 0x120;
  local_5d8 = puVar1;
  local_588 = param_3;
  local_578 = param_4;
  local_27c = uVar23;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(puVar1,0x128);
    uVar25 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar25 + 0x120;
  }
  local_5b0 = (undefined8 *)(param_2 + 0x178);
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  local_4d0 = param_1;
  FUN_1456bbb8c(uVar25,L"Hair.HairCountTexture",&local_298,0);
  iVar21 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar21 + 1U) {
    FUN_14472c0f6(local_5b0,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar21 * 8) = uVar25;
  *(int *)(uVar25 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  param_1[1] = uVar25;
  local_266 = 0xff001c01;
  local_298._0_4_ = 0x20009;
  local_298._4_4_ = 0;
  local_26c = CONCAT22((short)param_6,1);
  local_268 = 0x101;
  uStack_290 = local_108;
  uStack_28c = uStack_104;
  uStack_288 = (undefined *)CONCAT44(uStack_fc,uStack_100);
  local_280 = local_f8;
  local_274 = DAT_14ca84e40;
  if ((int)uVar28 < (int)DAT_14ca84e40) {
    local_274 = uVar28;
  }
  if ((int)local_274 < 2) {
    local_274 = 1;
  }
  local_278 = 0;
  local_270 = DAT_14ca84e40;
  if ((int)uVar34 < (int)DAT_14ca84e40) {
    local_270 = uVar34;
  }
  if ((int)local_270 < 2) {
    local_270 = 1;
  }
  uVar30 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar30 + 0x120;
  local_27c = uVar23;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x128);
    uVar30 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar30 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bbb8c(uVar30,L"Hair.DepthCovTexture",&local_298,0);
  iVar21 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar21 + 1U) {
    FUN_14472c0f6(local_5b0,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar21 * 8) = uVar30;
  *(int *)(uVar30 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_4d0[3] = uVar30;
  local_266 = 0xff001c01;
  local_298._0_4_ = 0x20009;
  local_298._4_4_ = 0;
  local_26c = CONCAT22((short)param_6,1);
  local_268 = 0x101;
  uStack_290 = local_108;
  uStack_28c = uStack_104;
  uStack_288 = (undefined *)CONCAT44(uStack_fc,uStack_100);
  local_280 = local_f8;
  local_274 = DAT_14ca84e40;
  if ((int)uVar28 < (int)DAT_14ca84e40) {
    local_274 = uVar28;
  }
  if ((int)local_274 < 2) {
    local_274 = 1;
  }
  local_278 = 0;
  local_270 = DAT_14ca84e40;
  if ((int)uVar34 < (int)DAT_14ca84e40) {
    local_270 = uVar34;
  }
  if ((int)local_270 < 2) {
    local_270 = 1;
  }
  uVar31 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar31 + 0x120;
  local_27c = uVar23;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x128);
    uVar31 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar31 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bbb8c(uVar31,L"Hair.PrimMatTexture",&local_298,0);
  iVar21 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar21 + 1U) {
    FUN_14472c0f6(local_5b0,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar21 * 8) = uVar31;
  *(int *)(uVar31 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_4d0[4] = uVar31;
  uVar22 = *(undefined1 *)(uVar25 + 0x94);
  puVar36 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar36 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar36 + 9;
  }
  local_5c8 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar36[1] = *(undefined8 *)(uVar25 + 8);
  puVar36[2] = 0;
  *(undefined1 *)(puVar36 + 3) = 0;
  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar36 + 5) = 0;
  *puVar36 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar36 + 6) = uVar22;
  *(undefined1 *)(puVar36 + 7) = 0;
  *(undefined4 *)((longlong)puVar36 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar36 + 0x35) = 0;
  puVar36[8] = uVar25;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = puVar36;
  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar22 = *(undefined1 *)(uVar30 + 0x94);
  puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar24 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar24 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar24[1] = *(undefined8 *)(uVar30 + 8);
  puVar24[2] = 0;
  *(undefined1 *)(puVar24 + 3) = 0;
  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar24 + 5) = 0;
  *puVar24 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar24 + 6) = uVar22;
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
  puVar24[8] = uVar30;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar22 = *(undefined1 *)(uVar31 + 0x94);
  local_508 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_508 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    local_508 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_508 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_508[1] = *(undefined8 *)(uVar31 + 8);
  local_508[2] = 0;
  uVar23 = 0;
  *(undefined1 *)(local_508 + 3) = 0;
  *(undefined8 *)((longlong)local_508 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_508 + 5) = 0;
  *local_508 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(local_508 + 6) = uVar22;
  *(undefined1 *)(local_508 + 7) = 0;
  *(undefined4 *)((longlong)local_508 + 0x31) = 0;
  *(undefined2 *)((longlong)local_508 + 0x35) = 0;
  local_508[8] = uVar31;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = local_508;
  *(int *)((longlong)local_508 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_298._0_4_ = 0;
  local_298._4_4_ = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  local_510 = puVar24;
  FUN_14042f6c6(param_2,puVar24,&local_298,2);
  local_298._0_4_ = 0;
  local_298._4_4_ = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  FUN_14042f6c6(param_2,puVar36,&local_298,2);
  puVar1 = local_5d8;
  iVar21 = DAT_14c76038c;
  if (DAT_14c76038c < 0x401) {
    iVar21 = 0x400;
  }
  if (0x3ffff < iVar21) {
    iVar21 = 0x40000;
  }
  uVar28 = 8;
  if (8 < (int)DAT_14c76036c) {
    uVar28 = DAT_14c76036c;
  }
  local_558 = 0x20;
  if ((int)uVar28 < 0x20) {
    local_558 = (ulonglong)uVar28;
  }
  local_4e4 = DAT_14c760370;
  if ((int)DAT_14c760370 < 2) {
    local_4e4 = 1;
  }
  if (0xff < (int)local_4e4) {
    local_4e4 = 0x100;
  }
  uVar28 = DAT_14c760384;
  if ((int)DAT_14c760384 < 2) {
    uVar28 = 1;
  }
  if (0xff < (int)uVar28) {
    uVar28 = 0x100;
  }
  local_580 = (ulonglong)uVar28;
  local_5c0 = DAT_14c760388;
  if ((int)DAT_14c760388 < 2) {
    local_5c0 = 1;
  }
  if (0x3ff < (int)local_5c0) {
    local_5c0 = 0x400;
  }
  local_474 = 1;
  if (1 < (int)DAT_14c760374) {
    local_474 = DAT_14c760374;
  }
  if (0x3ff < (int)local_474) {
    local_474 = 0x400;
  }
  iVar20 = (int)local_558 + -1;
  local_540 = (uint)(param_5[1] + iVar20) / local_558;
  local_5a4 = (uint)((uint)(iVar20 + *param_5) / local_558);
  if ((longlong)(int)local_578[1] != 0) {
    uVar12 = *local_578;
    uVar25 = (longlong)(int)local_578[1] * 0x78 + uVar12;
    uVar23 = 0;
    do {
      if ((longlong)*(int *)(uVar12 + 0x18) != 0) {
        lVar29 = 0;
        do {
          lVar13 = *(longlong *)(*(longlong *)(uVar12 + 0x10) + lVar29);
          if ((lVar13 != 0) && (*(int *)(lVar13 + 0xb0) != 0)) {
            lVar26 = *(longlong *)(lVar13 + 0xa8);
            if (*(longlong *)(lVar13 + 0xa8) == 0) {
              lVar26 = lVar13;
            }
            uVar28 = *(uint *)(*(longlong *)(lVar26 + 0x40) + 0x48c);
            if (uVar23 < uVar28) {
              uVar23 = uVar28;
            }
          }
          lVar29 = lVar29 + 0x28;
        } while ((longlong)*(int *)(uVar12 + 0x18) * 0x28 != lVar29);
      }
      uVar12 = uVar12 + 0x78;
    } while (uVar12 != uVar25);
  }
  uVar34 = iVar21 << 10;
  uVar28 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  uStack_290 = 0x4109;
  uVar28 = DAT_14ca84e48;
  if (uVar34 < DAT_14ca84e48) {
    uVar28 = uVar34;
  }
  uStack_288 = (undefined *)0x0;
  local_298._4_4_ = uVar28 + (uVar28 == 0);
  uVar25 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar25 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar25 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar25 + 0x150;
  }
  local_5b8 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar25,L"Hair.VisTilePrims",&local_298,0);
  iVar20 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar20 + 1U) {
    FUN_144737178(local_5b8,iVar20);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar20 * 8) = uVar25;
  *(int *)(uVar25 + 0x7c) = *(int *)(param_2 + 400) + -1;
  local_4b0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_4b0 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    local_4b0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_4b0 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_4b0[1] = *(undefined8 *)(uVar25 + 8);
  local_4b0[2] = 0;
  *(undefined1 *)(local_4b0 + 3) = 3;
  *(undefined8 *)((longlong)local_4b0 + 0x1c) = 0xffffffffffffffff;
  *local_4b0 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(local_4b0 + 5) = 0x1c;
  *(undefined8 *)((longlong)local_4b0 + 0x2c) = 0xffffffff00000000;
  local_4b0[7] = 0;
  local_4b0[8] = uVar25;
  iVar20 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar20 + 1U;
  local_418 = uVar25;
  if (*(uint *)(param_2 + 0x1a4) < iVar20 + 1U) {
    FUN_1447568fc(local_5c8,iVar20);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar20 * 8) = local_4b0;
  *(int *)((longlong)local_4b0 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar28 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  uStack_290 = 0x4109;
  uVar28 = DAT_14ca84e48;
  if (uVar34 < DAT_14ca84e48) {
    uVar28 = uVar34;
  }
  uStack_288 = (undefined *)0x0;
  local_298._4_4_ = uVar28 + (uVar28 == 0);
  uVar25 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar25 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar25 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar25 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar25,L"Hair.CompactedVisTilePrims",&local_298,0);
  iVar20 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar20 + 1U) {
    FUN_144737178(local_5b8,iVar20);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar20 * 8) = uVar25;
  *(int *)(uVar25 + 0x7c) = *(int *)(param_2 + 400) + -1;
  local_280 = DAT_14ca85098;
  uStack_290 = DAT_14ca85088;
  uStack_28c = DAT_14ca8508c;
  uStack_288 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_27c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_298._0_4_ = 0x20008;
  local_298._4_4_ = 0;
  local_26c = CONCAT22((short)local_580 * 3,1);
  local_268 = 0x101;
  local_278 = 0;
  local_274 = DAT_14ca84e40;
  if ((int)local_5a4 < (int)DAT_14ca84e40) {
    local_274 = local_5a4;
  }
  if ((int)local_274 < 2) {
    local_274 = 1;
  }
  local_266 = 0xff001c01;
  local_270 = DAT_14ca84e40;
  if ((int)(uint)local_540 < (int)DAT_14ca84e40) {
    local_270 = (uint)local_540;
  }
  if ((int)local_270 < 2) {
    local_270 = 1;
  }
  uVar30 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar30 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x128);
    uVar30 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar30 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bbb8c(uVar30,L"Hair.VisTileBinningGrid",&local_298,0);
  iVar20 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar20 + 1U) {
    FUN_14472c0f6(local_5b0,iVar20);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar20 * 8) = uVar30;
  *(int *)(uVar30 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar22 = *(undefined1 *)(uVar30 + 0x94);
  local_468 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_468 + 9;
  local_4b8 = uVar25;
  local_4a8 = uVar30;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    local_468 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_468 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_468[1] = *(undefined8 *)(local_4a8 + 8);
  local_468[2] = 0;
  *(undefined1 *)(local_468 + 3) = 0;
  *(undefined8 *)((longlong)local_468 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_468 + 5) = 0;
  *local_468 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(local_468 + 6) = uVar22;
  *(undefined1 *)(local_468 + 7) = 0;
  *(undefined4 *)((longlong)local_468 + 0x31) = 0;
  *(undefined2 *)((longlong)local_468 + 0x35) = 0;
  local_468[8] = local_4a8;
  iVar20 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar20 + 1U) {
    FUN_1447568fc(local_5c8,iVar20);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar20 * 8) = local_468;
  *(int *)((longlong)local_468 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_280 = DAT_14ca85098;
  uStack_290 = DAT_14ca85088;
  uStack_28c = DAT_14ca8508c;
  uStack_288 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_27c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_298._0_4_ = 0x20008;
  local_298._4_4_ = 0;
  local_26c = 0x10001;
  local_268 = 0x101;
  local_278 = 0;
  local_274 = DAT_14ca84e40;
  if ((int)local_5a4 < (int)DAT_14ca84e40) {
    local_274 = local_5a4;
  }
  if ((int)local_274 < 2) {
    local_274 = 1;
  }
  local_266 = 0xff001c00;
  local_270 = DAT_14ca84e40;
  if ((int)(uint)local_540 < (int)DAT_14ca84e40) {
    local_270 = (uint)local_540;
  }
  if ((int)local_270 < 2) {
    local_270 = 1;
  }
  uVar25 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar25 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x128);
    uVar25 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar25 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  local_4c8 = puVar36;
  FUN_1456bbb8c(uVar25,L"Hair.VisTileDepthGrid",&local_298,0);
  iVar20 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar20 + 1U) {
    FUN_14472c0f6(local_5b0,iVar20);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar20 * 8) = uVar25;
  uVar28 = local_5a4 * (int)local_540;
  local_490 = (ulonglong)uVar28;
  iVar20 = uVar28 + 0x3e;
  if (-1 < (int)(uVar28 + 0x1f)) {
    iVar20 = uVar28 + 0x1f;
  }
  *(int *)(uVar25 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar34 = (iVar20 >> 5) + 0x14;
  uVar28 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  uStack_290 = 0x4109;
  uVar28 = DAT_14ca84e48;
  if (uVar34 < DAT_14ca84e48) {
    uVar28 = uVar34;
  }
  uStack_288 = (undefined *)0x0;
  local_298._4_4_ = uVar28 + (uVar28 == 0);
  uVar30 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar30 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar30 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar30 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar30,L"Hair.VisTileArgs",&local_298,0);
  iVar20 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar20 + 1U) {
    FUN_144737178(local_5b8,iVar20);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar20 * 8) = uVar30;
  *(int *)(uVar30 + 0x7c) = *(int *)(param_2 + 400) + -1;
  local_470 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_470 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x48);
    local_470 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_470 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_470[1] = *(undefined8 *)(uVar30 + 8);
  local_470[2] = 0;
  *(undefined1 *)(local_470 + 3) = 2;
  *(undefined8 *)((longlong)local_470 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_470 + 5) = 0;
  *local_470 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(local_470 + 6) = 0x1c;
  *(undefined1 *)((longlong)local_470 + 0x32) = 0;
  local_470[7] = uVar30;
  iVar20 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar20 + 1U) {
    FUN_1447568fc(local_5c8,iVar20);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar20 * 8) = local_470;
  *(int *)((longlong)local_470 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_4e0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_4e0 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    local_4e0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_4e0 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_4e0[1] = *(undefined8 *)(uVar30 + 8);
  local_4e0[2] = 0;
  *(undefined1 *)(local_4e0 + 3) = 3;
  *(undefined8 *)((longlong)local_4e0 + 0x1c) = 0xffffffffffffffff;
  *local_4e0 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(local_4e0 + 5) = 0x1c;
  *(undefined8 *)((longlong)local_4e0 + 0x2c) = 0xffffffff00000000;
  local_4e0[7] = 0;
  local_4e0[8] = uVar30;
  iVar20 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar20 + 1U) {
    FUN_1447568fc(local_5c8,iVar20);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar20 * 8) = local_4e0;
  *(int *)((longlong)local_4e0 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar28 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  uStack_290 = 0x4109;
  uVar28 = DAT_14ca84e48;
  if (uVar34 < DAT_14ca84e48) {
    uVar28 = uVar34;
  }
  uStack_288 = (undefined *)0x0;
  local_298._4_4_ = uVar28 + (uVar28 == 0);
  uVar30 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar30 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar30 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar30 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar30,L"Hair.CompactedVisTileArgs",&local_298,0);
  iVar20 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar20 + 1U) {
    FUN_144737178(local_5b8,iVar20);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar20 * 8) = uVar30;
  *(int *)(uVar30 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar34 = iVar21 << 3;
  uVar28 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  uStack_290 = 0x10119;
  uVar28 = DAT_14ca84e48;
  if (uVar34 < DAT_14ca84e48) {
    uVar28 = uVar34;
  }
  uStack_288 = (undefined *)0x0;
  local_298._4_4_ = uVar28 + (uVar28 == 0);
  uVar31 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar31 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar31 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar31 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar31,L"Hair.VisTileData",&local_298,0);
  iVar21 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar21 + 1U) {
    FUN_144737178(local_5b8,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar21 * 8) = uVar31;
  *(int *)(uVar31 + 0x7c) = *(int *)(param_2 + 400) + -1;
  cVar10 = *(char *)(uVar31 + 0x68);
  local_4c0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_4c0 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    local_4c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_4c0 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_4c0[1] = *(undefined8 *)(uVar31 + 8);
  local_4c0[2] = 0;
  *(undefined1 *)(local_4c0 + 3) = 3;
  *(undefined8 *)((longlong)local_4c0 + 0x1c) = 0xffffffffffffffff;
  *local_4c0 = &PTR_FUN_14a1fb168;
  *(byte *)(local_4c0 + 5) = cVar10 >> 7 & 0x1c;
  *(undefined8 *)((longlong)local_4c0 + 0x2c) = 0xffffffff00000000;
  local_4c0[7] = 0;
  local_4c0[8] = uVar31;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  local_420 = uVar31;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = local_4c0;
  *(int *)((longlong)local_4c0 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar28 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  uStack_290 = 0x10119;
  uVar28 = DAT_14ca84e48;
  if (uVar34 < DAT_14ca84e48) {
    uVar28 = uVar34;
  }
  uStack_288 = (undefined *)0x0;
  local_298._4_4_ = uVar28 + (uVar28 == 0);
  uVar31 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar31 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar31 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar31 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar31,L"Hair.CompactedVisTileData",&local_298,0);
  iVar21 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar21 + 1U) {
    FUN_144737178(local_5b8,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar21 * 8) = uVar31;
  *(int *)(uVar31 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar28 = uVar23 + (uVar23 == 0);
  uVar34 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar34 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar34 + (uVar34 == 0);
  uStack_290 = 0x4109;
  if (DAT_14ca84e48 <= uVar28) {
    uVar28 = DAT_14ca84e48;
  }
  uStack_288 = (undefined *)0x0;
  local_298._4_4_ = uVar28 + (uVar28 == 0);
  uVar35 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar35 + 0x150;
  local_518 = uVar31;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar35 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar35 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar35,L"Hair.RasterizerPrimIDs",&local_298,0);
  iVar21 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar21 + 1U) {
    FUN_144737178(local_5b8,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar21 * 8) = uVar35;
  *(int *)(uVar35 + 0x7c) = *(int *)(param_2 + 400) + -1;
  puVar36 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar36 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar36 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar36[1] = *(undefined8 *)(uVar35 + 8);
  puVar36[2] = 0;
  *(undefined1 *)(puVar36 + 3) = 3;
  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
  *puVar36 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar36 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar36 + 0x2c) = 0xffffffff00000000;
  puVar36[7] = 0;
  puVar36[8] = uVar35;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = puVar36;
  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uStack_288 = (undefined *)0x0;
  uVar28 = 0x14;
  if (DAT_14ca84e48 < 0x14) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  local_298._4_4_ = 1;
  uStack_290 = 0x4189;
  uVar31 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar31 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar31 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar31 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bd266(uVar31,L"Hair.DrawIndexedIndirectArgs",&local_298,0);
  iVar21 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar21 + 1U) {
    FUN_144737178(local_5b8,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar21 * 8) = uVar31;
  *(int *)(uVar31 + 0x7c) = *(int *)(param_2 + 400) + -1;
  local_500 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_500 + 8;
  local_4d8 = uVar30;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x48);
    local_500 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_500 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_500[1] = *(undefined8 *)(uVar31 + 8);
  local_500[2] = 0;
  *(undefined1 *)(local_500 + 3) = 2;
  *(undefined8 *)((longlong)local_500 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_500 + 5) = 0;
  *local_500 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(local_500 + 6) = 0x1c;
  *(undefined1 *)((longlong)local_500 + 0x32) = 0;
  local_500[7] = uVar31;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  puVar1 = local_5d8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = local_500;
  *(int *)((longlong)local_500 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uStack_288 = (undefined *)0x0;
  uVar28 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar28 = DAT_14ca84e48;
  }
  local_298._0_4_ = uVar28 + (uVar28 == 0);
  local_298._4_4_ = 1;
  uStack_290 = 0x4109;
  uVar30 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar12 = uVar30 + 0x150;
  local_408 = uVar35;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_5d8,0x160);
    uVar30 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar12 = uVar30 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  local_4a0 = uVar25;
  FUN_1456bd266(uVar30,L"Hair.SWRasterPrimIDCount",&local_298,0);
  iVar21 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar21 + 1U) {
    FUN_144737178(local_5b8,iVar21);
  }
  puVar1 = local_5d8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar21 * 8) = uVar30;
  *(int *)(uVar30 + 0x7c) = *(int *)(param_2 + 400) + -1;
  puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar24 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x48);
    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar24 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar24[1] = *(undefined8 *)(uVar30 + 8);
  puVar24[2] = 0;
  *(undefined1 *)(puVar24 + 3) = 2;
  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar24 + 5) = 0;
  *puVar24 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar24 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar24 + 0x32) = 0;
  puVar24[7] = uVar30;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  puVar1 = local_5d8;
  uVar12 = (ulonglong)local_5a4;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_498 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = local_498 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_5d8,0x50);
    local_498 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = local_498 + 9;
  }
  uVar25 = local_540 << 0x20;
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  local_498[1] = *(undefined8 *)(uVar30 + 8);
  local_498[2] = 0;
  *(undefined1 *)(local_498 + 3) = 3;
  *(undefined8 *)((longlong)local_498 + 0x1c) = 0xffffffffffffffff;
  *local_498 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(local_498 + 5) = 0x1c;
  *(undefined8 *)((longlong)local_498 + 0x2c) = 0xffffffff00000000;
  local_498[7] = 0;
  local_498[8] = uVar30;
  iVar21 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar21 + 1U;
  local_460 = puVar36;
  local_458 = puVar24;
  local_450 = uVar31;
  if (*(uint *)(param_2 + 0x1a4) < iVar21 + 1U) {
    FUN_1447568fc(local_5c8,iVar21);
  }
  lVar13 = local_588;
  local_528 = uVar25 | uVar12;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar21 * 8) = local_498;
  *(int *)((longlong)local_498 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  lVar29 = *(longlong *)(local_588 + 0x3110);
  local_5e8 = (uint *)(lVar29 + 0x12d8);
  local_5b8 = param_2;
  FUN_147180d50(local_588,0,lVar29 + 0x12c0,lVar29 + 0x12d4);
  FUN_1401ee234(&local_298,*(undefined8 *)(lVar13 + 0x3110),1,1);
  local_550 = CONCAT44(local_298._4_4_,(int)local_298);
  local_4f8 = (undefined8 *)CONCAT44(local_4f8._4_4_,DAT_14c9d71e8);
  local_5b0 = (undefined8 *)CONCAT71(local_5b0._1_7_,DAT_14c9d71e8 != 0);
  bVar37 = param_6 < 2;
  bVar32 = bVar37 && DAT_14c9d71e8 != 0;
  uVar12 = (ulonglong)CONCAT31((int3)(param_6 >> 8),bVar32);
  local_5c9 = DAT_14c9d71a0 != 0 && bVar37;
  local_5ca = DAT_14c9d71b8 != 0 && bVar37;
  local_564 = DAT_14c9d71d0;
  bVar37 = DAT_14ca84df4 == 0x10de;
  local_5bc = (uint)bVar37;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145f454f6();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d9080,0);
  FUN_145f454f6();
  local_2c0 = (int)local_298;
  uStack_2bc = local_298._4_4_;
  uStack_2b8 = uStack_290;
  uStack_2b4 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145f454f6();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d9080,1);
  FUN_145f454f6();
  local_2d0 = (int)local_298;
  uStack_2cc = local_298._4_4_;
  uStack_2c8 = uStack_290;
  uStack_2c4 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  local_548 = uVar12 & 0xff;
  iVar21 = (int)local_548;
  local_488 = uVar12;
  FUN_145f627d2();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d91a8,iVar21 * 2);
  FUN_145f627d2();
  local_2e0 = (int)local_298;
  uStack_2dc = local_298._4_4_;
  uStack_2d8 = uStack_290;
  uStack_2d4 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145f627d2();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d91a8,bVar32 * '\x02' + '\x01');
  FUN_145f627d2();
  local_2f0 = (int)local_298;
  uStack_2ec = local_298._4_4_;
  uStack_2e8 = uStack_290;
  uStack_2e4 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145f715e4();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d92d0,0);
  FUN_145f715e4();
  local_300 = (int)local_298;
  uStack_2fc = local_298._4_4_;
  uStack_2f8 = uStack_290;
  uStack_2f4 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145e6fcd2();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d93f8,local_5bc);
  FUN_145e6fcd2();
  local_310 = (int)local_298;
  uStack_30c = local_298._4_4_;
  uStack_308 = uStack_290;
  uStack_304 = uStack_28c;
  local_2a0 = param_6;
  local_2a4 = (uint)!bVar37 * 0x20 + 0x20;
  FUN_147190358(local_320,*(undefined8 *)(lVar13 + 0x13818));
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145ea54dc();
  uVar12 = local_548;
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d9770,local_548 & 0xffffffff);
  FUN_145ea54dc();
  local_330 = (int)local_298;
  uStack_32c = local_298._4_4_;
  uStack_328 = uStack_290;
  uStack_324 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145ea54dc();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d9770,(int)uVar12 + 2U & 0xff);
  FUN_145ea54dc();
  local_340 = (int)local_298;
  uStack_33c = local_298._4_4_;
  uStack_338 = uStack_290;
  uStack_334 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145e47fda();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d9898,0);
  FUN_145e47fda();
  local_3f8 = CONCAT44(local_298._4_4_,(int)local_298);
  local_400 = CONCAT44(uStack_28c,uStack_290);
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145e82de6();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d99c0,uVar12 & 0xffffffff);
  FUN_145e82de6();
  bVar27 = local_5c9;
  local_350 = (int)local_298;
  uStack_34c = local_298._4_4_;
  uStack_348 = uStack_290;
  uStack_344 = uStack_28c;
  uVar16 = *(undefined8 *)(lVar13 + 0x13818);
  FUN_145e82de6();
  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d99c0);
  FUN_145e82de6();
  uVar12 = local_558;
  local_360 = CONCAT44(local_298._4_4_,(int)local_298);
  uStack_358 = CONCAT44(uStack_28c,uStack_290);
  local_530 = *local_4d0;
  fVar38 = (float)(int)((ulonglong)local_530 >> 0x20);
  iVar21 = (int)local_530;
  iVar20 = (int)local_558;
  fVar39 = logf((float)iVar20);
  local_538 = (longlong)(fVar39 * 1.442695);
  local_590 = 1.0 / (float)iVar20;
  local_594 = (uint)(uVar12 >> 1) & 0x7fffffff;
  local_598 = iVar20 * iVar20;
  fVar40 = 1.0 / (float)local_594;
  local_59c = local_594 * local_594;
  local_5a0 = 1.0 / (float)(int)local_5c0;
  fVar39 = 1.0 / (float)(int)local_580;
  bVar33 = bVar27 ^ 1;
  if ((byte)((local_5ca ^ 1) & ((byte)local_5b0 | bVar33)) != 0) {
    uVar16 = *(undefined8 *)(local_588 + 0x13818);
    FUN_145cab698();
    FUN_1448e935e(uVar16,&local_298,&DAT_14c9d8f58,0);
    FUN_145cab698();
    puVar1 = local_5d8;
    puVar36 = (undefined8 *)(*(longlong *)(local_5b8 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar15 = puVar36 + 0x12;
    if (*(undefined8 **)(local_5b8 + 0x78) < puVar15) {
      FUN_140023dd8(local_5d8,0xa0);
      puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar15 = puVar36 + 0x12;
    }
    lVar29 = local_5b8;
    *(undefined8 **)(local_5b8 + 0x70) = puVar15;
    *puVar36 = &PTR_FUN_14a22c248;
    puVar36[0xe] = 0;
    puVar36[0xf] = 0;
    puVar36[0x10] = 0;
    iVar20 = *(int *)(local_5b8 + 0xa0);
    *(uint *)(local_5b8 + 0xa0) = iVar20 + 1U;
    if (*(uint *)(local_5b8 + 0xa4) < iVar20 + 1U) {
      FUN_1448cfae8(local_5b8 + 0x98,iVar20);
    }
    uVar12 = local_4a0;
    puVar1 = local_5d8;
    *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar20 * 8) = puVar36;
    *(int *)(puVar36 + 2) = (int)local_558;
    *(undefined1 **)((longlong)puVar36 + 0x14) = &DAT_100000001;
    puVar36[4] = local_530;
    puVar36[5] = CONCAT44(fVar38,(float)iVar21);
    *(int *)(puVar36 + 6) = (int)local_558;
    *(float *)((longlong)puVar36 + 0x34) = local_590;
    *(int *)(puVar36 + 7) = (int)local_538;
    *(int *)((longlong)puVar36 + 0x3c) = local_598;
    *(uint *)(puVar36 + 8) = local_594;
    *(float *)((longlong)puVar36 + 0x44) = fVar40;
    *(int *)(puVar36 + 9) = local_59c;
    *(uint *)((longlong)puVar36 + 0x4c) = local_5c0;
    *(float *)(puVar36 + 10) = local_5a0;
    puVar36[0xb] = local_528;
    *(int *)(puVar36 + 0xc) = (int)local_580;
    *(float *)((longlong)puVar36 + 100) = fVar39;
    puVar36[0xe] = param_7;
    puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar24 + 9;
    uVar22 = *(undefined1 *)(local_4a0 + 0x94);
    if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
      local_5b0 = (undefined8 *)CONCAT71(local_5b0._1_7_,*(undefined1 *)(local_4a0 + 0x94));
      FUN_140023dd8(local_5d8,0x50);
      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar24 + 9;
      uVar22 = (byte)local_5b0;
    }
    *(undefined8 **)(lVar29 + 0x70) = puVar15;
    puVar24[1] = *(undefined8 *)(uVar12 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar22;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = uVar12;
    iVar20 = *(int *)(lVar29 + 0x1a0);
    *(uint *)(lVar29 + 0x1a0) = iVar20 + 1U;
    if (*(uint *)(lVar29 + 0x1a4) < iVar20 + 1U) {
      local_5b0 = puVar36 + 2;
      FUN_1447568fc(local_5c8,iVar20);
    }
    *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar20 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
    puVar36[0xf] = puVar24;
    puVar36[0x10] = local_510;
    *(uint *)(puVar36 + 0x11) = param_6;
    local_5e8 = &local_36c;
    local_36c = local_5a4;
    local_368 = (undefined4)local_540;
    local_364 = 1;
    FUN_1471903f7(lVar29,&local_398,&local_298);
    bVar27 = local_5c9;
  }
  local_478 = DAT_14c9dc4d0;
  lVar29 = local_5b8;
  if (((DAT_14c9dc4d0 < 1 | bVar27 | local_5ca) & 1) == 0) {
    DAT_14ca4d334 = DAT_14ca4d334 + ((int)local_490 * 2 + 0x14) * (int)local_580;
    DAT_14ca4d330 = DAT_14ca4d330 + (int)local_580 * 0x50;
    DAT_14ca4d100 = 1;
    if ((longlong)(int)local_578[1] != 0) {
      uVar12 = *local_578;
      lVar26 = (longlong)(int)local_578[1] * 0x78;
      lVar13 = 0;
      local_4ec = 0;
      do {
        local_4ec = local_4ec + *(int *)(uVar12 + 0x18 + lVar13);
        lVar13 = lVar13 + 0x78;
      } while (lVar26 - lVar13 != 0);
      uVar25 = lVar26 + uVar12;
      goto LAB_142c67e8d;
    }
  }
  else if ((longlong)(int)local_578[1] != 0) {
    uVar12 = *local_578;
    uVar25 = (longlong)(int)local_578[1] * 0x78 + uVar12;
    local_4ec = 0;
LAB_142c67e8d:
    bVar27 = (byte)local_488;
    local_589 = bVar27 ^ 1;
    local_560 = local_5b8 + 0x98;
    local_520 = CONCAT44(fVar38,(float)iVar21);
    local_410 = local_5b8 + 0x168;
    bVar32 = (int)local_4f8 != 0;
    local_428 = (undefined8 *)0x0;
    if (bVar32) {
      local_428 = local_498;
    }
    local_430 = (undefined8 *)0x0;
    if (bVar32) {
      local_430 = local_460;
    }
    local_58a = (bVar32 || 1 < param_6) | bVar33;
    if (bVar27 == 0) {
      local_498 = (undefined8 *)0x0;
    }
    local_438 = (undefined8 *)0x0;
    if (bVar27 != 0) {
      local_438 = local_460;
    }
    local_440 = local_588 + 0x13870;
    local_47c = (int)local_540 + 7U >> 3;
    local_480 = local_5a4 + 7 >> 3;
    bVar32 = false;
    local_4e8 = 0;
    local_570 = uVar25;
    do {
      if ((longlong)*(int *)(uVar12 + 0x18) != 0) {
        plVar18 = *(longlong **)(uVar12 + 0x10);
        plVar19 = plVar18 + (longlong)*(int *)(uVar12 + 0x18) * 5;
        local_548 = uVar12;
        do {
          lVar13 = *plVar18;
          if ((lVar13 != 0) && (*(int *)(lVar13 + 0xb0) != 0)) {
            lVar26 = *(longlong *)(lVar13 + 0xa8);
            if (*(longlong *)(lVar13 + 0xa8) == 0) {
              lVar26 = lVar13;
            }
            local_578 = *(ulonglong **)(lVar26 + 0x40);
            if (DAT_14c9d7048 == 0) {
              bVar27 = 0;
            }
            else {
              bVar27 = *(byte *)(local_578[1] + 0x80);
            }
            local_5bc = CONCAT31(local_5bc._1_3_,bVar27 & local_589);
            local_5b0 = (undefined8 *)
                        CONCAT44(local_5b0._4_4_,*(undefined4 *)((longlong)local_578 + 0x48c));
            uVar3 = (undefined4)local_578[0x94];
            if ((char)local_488 == '\0') {
              if (local_5c9 != 0) {
                local_448 = 0;
                puVar15 = (undefined8 *)0x0;
                goto LAB_142c68393;
              }
LAB_142c6890b:
              puVar1 = local_5d8;
              if (local_5ca == 0) {
                local_298._0_4_ = 0;
                local_298._4_4_ = 0;
                uStack_290 = 0;
                uStack_28c = 0;
                FUN_14042f6c6(lVar29,local_468,&local_298,2);
                FUN_1405bfba3(lVar29,local_470,0,2);
                puVar1 = local_5d8;
                if (local_564 != 0) {
                  puVar36 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar15 = puVar36 + 8;
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8);
                    puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar15 = puVar36 + 8;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  puVar36[1] = *(undefined8 *)(local_4d8 + 8);
                  puVar36[2] = 0;
                  *(undefined1 *)(puVar36 + 3) = 2;
                  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar36 + 5) = 0;
                  *puVar36 = &PTR_FUN_14a1fb3e8;
                  *(undefined2 *)(puVar36 + 6) = 0x1c;
                  *(undefined1 *)((longlong)puVar36 + 0x32) = 0;
                  puVar36[7] = local_4d8;
                  iVar21 = *(int *)(lVar29 + 0x1a0);
                  *(uint *)(lVar29 + 0x1a0) = iVar21 + 1U;
                  if (*(uint *)(lVar29 + 0x1a4) < iVar21 + 1U) {
                    FUN_1447568fc(local_5c8,iVar21);
                  }
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar36;
                  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                  FUN_1405bfba3(lVar29,puVar36,0,2);
                }
                puVar1 = local_5d8;
                puVar36 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar15 = puVar36 + 0x52;
                if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                  FUN_140023dd8(local_5d8);
                  puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar15 = puVar36 + 0x52;
                }
                *(undefined8 **)(lVar29 + 0x70) = puVar15;
                *puVar36 = &PTR_FUN_14a22c398;
                puVar36[0x36] = 0;
                puVar36[0x37] = 0;
                puVar36[0x38] = 0;
                puVar36[0x39] = 0;
                puVar36[0x3a] = 0;
                puVar36[0x3b] = 0;
                puVar36[0x3d] = 0;
                puVar36[0x3e] = 0;
                puVar36[0x3f] = 0;
                *(undefined4 *)(puVar36 + 0x40) = 4;
                puVar36[0x4a] = 0;
                puVar36[0x42] = 0;
                puVar36[0x43] = 0;
                puVar36[0x44] = 0;
                puVar36[0x45] = 0;
                puVar36[0x46] = 0;
                puVar36[0x47] = 0;
                puVar36[0x48] = 0;
                *(undefined1 *)(puVar36 + 0x4b) = 1;
                puVar36[0x4c] = 0;
                puVar36[0x4d] = 0;
                *(undefined4 *)(puVar36 + 0x4e) = 0;
                puVar36[0x50] = 0;
                puVar36[0x51] = 0;
                iVar21 = *(int *)(lVar29 + 0xa0);
                uVar28 = iVar21 + 1;
                *(uint *)(lVar29 + 0xa0) = uVar28;
                if (*(uint *)(lVar29 + 0xa4) < uVar28) {
                  FUN_1448cfae8(local_560);
                }
                *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar21 * 8) = puVar36;
                *(int *)(puVar36 + 2) = (int)local_558;
                *(undefined1 **)((longlong)puVar36 + 0x14) = &DAT_100000001;
                puVar36[4] = local_530;
                puVar36[5] = local_520;
                *(int *)(puVar36 + 6) = (int)local_558;
                *(float *)((longlong)puVar36 + 0x34) = local_590;
                *(int *)(puVar36 + 7) = (int)local_538;
                *(int *)((longlong)puVar36 + 0x3c) = local_598;
                *(uint *)(puVar36 + 8) = local_594;
                *(float *)((longlong)puVar36 + 0x44) = fVar40;
                *(int *)(puVar36 + 9) = local_59c;
                *(uint *)((longlong)puVar36 + 0x4c) = local_5c0;
                *(float *)(puVar36 + 10) = local_5a0;
                puVar36[0xb] = local_528;
                *(int *)(puVar36 + 0xc) = (int)local_580;
                *(float *)((longlong)puVar36 + 100) = fVar39;
                *(undefined4 *)(puVar36 + 0xe) = *(undefined4 *)(uVar12 + 0x68);
                *(int *)((longlong)puVar36 + 0x74) = (int)plVar18[2];
                lVar13 = FUN_1447e4f80();
                puVar1 = local_5d8;
                cVar10 = *(char *)(lVar13 + 0x41);
                if (*(char *)(lVar13 + 0x41) == '\x03') {
                  cVar10 = '\x02';
                }
                puVar36[0x4a] = local_550;
                *(char *)(puVar36 + 0x4b) = cVar10;
                puVar36[0x42] = param_7;
                puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar15 = puVar24 + 8;
                if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                  FUN_140023dd8(local_5d8);
                  puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                  puVar15 = puVar24 + 8;
                }
                *(undefined8 **)(lVar29 + 0x70) = puVar15;
                puVar24[1] = *(undefined8 *)(local_418 + 8);
                puVar24[2] = 0;
                *(undefined1 *)(puVar24 + 3) = 2;
                *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar24 + 5) = 0;
                *puVar24 = &PTR_FUN_14a1fb3e8;
                *(undefined2 *)(puVar24 + 6) = 0x1c;
                *(undefined1 *)((longlong)puVar24 + 0x32) = 0;
                puVar24[7] = local_418;
                iVar21 = *(int *)(lVar29 + 0x1a0);
                *(uint *)(lVar29 + 0x1a0) = iVar21 + 1U;
                if (*(uint *)(lVar29 + 0x1a4) < iVar21 + 1U) {
                  FUN_1447568fc(local_5c8,iVar21);
                }
                uVar12 = local_420;
                puVar1 = local_5d8;
                *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24;
                *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                puVar36[0x44] = puVar24;
                puVar36[0x45] = local_468;
                puVar36[0x46] = local_4a0;
                puVar36[0x47] = local_470;
                cVar10 = *(char *)(local_420 + 0x68);
                puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar15 = puVar24 + 8;
                if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                  FUN_140023dd8(local_5d8,0x48);
                  puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                  puVar15 = puVar24 + 8;
                }
                *(undefined8 **)(lVar29 + 0x70) = puVar15;
                puVar24[1] = *(undefined8 *)(uVar12 + 8);
                puVar24[2] = 0;
                *(undefined1 *)(puVar24 + 3) = 2;
                *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar24 + 5) = 0;
                *puVar24 = &PTR_FUN_14a1fb3e8;
                *(byte *)(puVar24 + 6) = cVar10 >> 7 & 0x1c;
                *(undefined2 *)((longlong)puVar24 + 0x31) = 0;
                puVar24[7] = uVar12;
                iVar21 = *(int *)(lVar29 + 0x1a0);
                *(uint *)(lVar29 + 0x1a0) = iVar21 + 1U;
                if (*(uint *)(lVar29 + 0x1a4) < iVar21 + 1U) {
                  FUN_1447568fc(local_5c8,iVar21);
                }
                *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24;
                *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                puVar36[0x48] = puVar24;
                local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,(char)local_5bc);
                local_5e0 = (float)((uint)local_5e0 & 0xffffff00);
                FUN_1471850f0(&local_298,lVar29,local_588,local_578);
                memcpy(puVar36 + 0x10,&local_298,400);
                uVar12 = local_548;
                uVar25 = local_570;
                *(undefined4 *)(puVar36 + 0x4f) = local_5b0._0_4_;
                if (local_4a8 == 0) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = *(undefined8 *)(local_4a8 + 0xac);
                }
                puVar36[0x4c] = local_4a8;
                puVar36[0x4d] = uVar16;
                *(undefined4 *)(puVar36 + 0x4e) = 0x400;
                puVar36[0x50] = local_498;
                puVar36[0x51] = local_438;
                local_3b4 = (uint)local_580;
                local_3b0 = &DAT_100000001;
                piVar14 = &local_2e0;
                if ((char)local_5bc != '\0') {
                  piVar14 = &local_2f0;
                }
                local_5e8 = &local_3b4;
                FUN_14719060d(lVar29,&local_298,piVar14,puVar36 + 2);
                puVar1 = local_5d8;
                if (local_564 != 0) {
                  puVar36 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 0xfU & 0xfffffffffffffff0)
                  ;
                  puVar15 = puVar36 + 0x48;
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8,0x250);
                    puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar15 = puVar36 + 0x48;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  *puVar36 = &PTR_FUN_14a22c3b8;
                  puVar36[0x34] = 0;
                  puVar36[0x35] = 0;
                  puVar36[0x36] = 0;
                  puVar36[0x37] = 0;
                  puVar36[0x38] = 0;
                  puVar36[0x39] = 0;
                  puVar36[0x3b] = 0;
                  puVar36[0x3c] = 0;
                  puVar36[0x3d] = 0;
                  *(undefined4 *)(puVar36 + 0x3e) = 4;
                  puVar36[0x40] = 0;
                  puVar36[0x41] = 0;
                  puVar36[0x42] = 0;
                  puVar36[0x43] = 0;
                  puVar36[0x44] = 0;
                  puVar36[0x45] = 0;
                  puVar36[0x46] = 0;
                  *(undefined1 *)(puVar36 + 0x47) = 1;
                  iVar21 = *(int *)(lVar29 + 0xa0);
                  *(uint *)(lVar29 + 0xa0) = iVar21 + 1U;
                  if (*(uint *)(lVar29 + 0xa4) < iVar21 + 1U) {
                    FUN_1448cfae8(local_560,iVar21);
                  }
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar21 * 8) = puVar36;
                  *(int *)(puVar36 + 2) = (int)local_558;
                  *(undefined1 **)((longlong)puVar36 + 0x14) = &DAT_100000001;
                  puVar36[4] = local_530;
                  puVar36[5] = local_520;
                  *(int *)(puVar36 + 6) = (int)local_558;
                  *(float *)((longlong)puVar36 + 0x34) = local_590;
                  *(int *)(puVar36 + 7) = (int)local_538;
                  *(int *)((longlong)puVar36 + 0x3c) = local_598;
                  *(uint *)(puVar36 + 8) = local_594;
                  *(float *)((longlong)puVar36 + 0x44) = fVar40;
                  *(int *)(puVar36 + 9) = local_59c;
                  *(uint *)((longlong)puVar36 + 0x4c) = local_5c0;
                  *(float *)(puVar36 + 10) = local_5a0;
                  puVar36[0xb] = local_528;
                  *(int *)(puVar36 + 0xc) = (int)local_580;
                  *(float *)((longlong)puVar36 + 100) = fVar39;
                  lVar13 = FUN_1447e4f80();
                  cVar10 = *(char *)(lVar13 + 0x41);
                  if (*(char *)(lVar13 + 0x41) == '\x03') {
                    cVar10 = '\x02';
                  }
                  puVar36[0x46] = local_550;
                  *(char *)(puVar36 + 0x47) = cVar10;
                  local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,(char)local_5bc);
                  local_5e0 = (float)((uint)local_5e0 & 0xffffff00);
                  FUN_1471850f0(&local_298,lVar29,local_588,local_578);
                  memcpy(puVar36 + 0xe,&local_298,400);
                  puVar1 = local_5d8;
                  puVar36[0x40] = local_4c0;
                  puVar36[0x41] = local_4b0;
                  puVar36[0x42] = local_4e0;
                  cVar10 = *(char *)(local_518 + 0x68);
                  puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar15 = puVar24 + 8;
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8);
                    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar15 = puVar24 + 8;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  puVar24[1] = *(undefined8 *)(local_518 + 8);
                  puVar24[2] = 0;
                  *(undefined1 *)(puVar24 + 3) = 2;
                  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar24 + 5) = 0;
                  *puVar24 = &PTR_FUN_14a1fb3e8;
                  *(byte *)(puVar24 + 6) = cVar10 >> 7 & 0x1c;
                  *(undefined2 *)((longlong)puVar24 + 0x31) = 0;
                  puVar24[7] = local_518;
                  iVar21 = *(int *)(lVar29 + 0x1a0);
                  uVar28 = iVar21 + 1;
                  *(uint *)(lVar29 + 0x1a0) = uVar28;
                  if (*(uint *)(lVar29 + 0x1a4) < uVar28) {
                    FUN_1447568fc(local_5c8);
                  }
                  uVar12 = local_548;
                  puVar1 = local_5d8;
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24;
                  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                  puVar36[0x43] = puVar24;
                  puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar15 = puVar24 + 8;
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8);
                    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar15 = puVar24 + 8;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  puVar24[1] = *(undefined8 *)(local_4b8 + 8);
                  puVar24[2] = 0;
                  *(undefined1 *)(puVar24 + 3) = 2;
                  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar24 + 5) = 0;
                  *puVar24 = &PTR_FUN_14a1fb3e8;
                  *(undefined2 *)(puVar24 + 6) = 0x1c;
                  *(undefined1 *)((longlong)puVar24 + 0x32) = 0;
                  puVar24[7] = local_4b8;
                  iVar21 = *(int *)(lVar29 + 0x1a0);
                  uVar28 = iVar21 + 1;
                  *(uint *)(lVar29 + 0x1a0) = uVar28;
                  if (*(uint *)(lVar29 + 0x1a4) < uVar28) {
                    FUN_1447568fc(local_5c8);
                  }
                  puVar1 = local_5d8;
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24;
                  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                  puVar36[0x44] = puVar24;
                  puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar15 = puVar24 + 8;
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8);
                    puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar15 = puVar24 + 8;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  puVar24[1] = *(undefined8 *)(local_4d8 + 8);
                  puVar24[2] = 0;
                  *(undefined1 *)(puVar24 + 3) = 2;
                  *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar24 + 5) = 0;
                  *puVar24 = &PTR_FUN_14a1fb3e8;
                  *(undefined2 *)(puVar24 + 6) = 0x1c;
                  *(undefined1 *)((longlong)puVar24 + 0x32) = 0;
                  puVar24[7] = local_4d8;
                  iVar21 = *(int *)(lVar29 + 0x1a0);
                  *(uint *)(lVar29 + 0x1a0) = iVar21 + 1U;
                  if (*(uint *)(lVar29 + 0x1a4) < iVar21 + 1U) {
                    FUN_1447568fc(local_5c8,iVar21);
                  }
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24;
                  *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                  puVar36[0x45] = puVar24;
                  local_3c0 = local_5a4;
                  local_3bc = (undefined4)local_540;
                  local_3b8 = 1;
                  local_5e8 = &local_3c0;
                  FUN_1471906bf(lVar29,&local_298,&local_300,puVar36 + 2);
                  uVar25 = local_570;
                }
                puVar1 = local_5d8;
                puVar36 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar15 = puVar36 + 0x4c;
                if (param_6 < 2) {
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8,0x270);
                    puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar15 = puVar36 + 0x4c;
                    uVar25 = local_570;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  *puVar36 = &PTR_FUN_14a22c3f8;
                  puVar36[0x36] = 0;
                  puVar36[0x37] = 0;
                  puVar36[0x38] = 0;
                  puVar36[0x39] = 0;
                  puVar36[0x3a] = 0;
                  puVar36[0x3b] = 0;
                  puVar36[0x3d] = 0;
                  puVar36[0x3e] = 0;
                  puVar36[0x3f] = 0;
                  *(undefined4 *)(puVar36 + 0x40) = 4;
                  puVar36[0x42] = 0;
                  puVar36[0x44] = 0;
                  puVar36[0x45] = 0;
                  puVar36[0x46] = 0;
                  puVar36[0x47] = 0;
                  puVar36[0x48] = 0;
                  puVar36[0x49] = 0;
                  puVar36[0x4a] = 0;
                  *(undefined1 *)(puVar36 + 0x4b) = 1;
                  iVar21 = *(int *)(lVar29 + 0xa0);
                  *(uint *)(lVar29 + 0xa0) = iVar21 + 1U;
                  if (*(uint *)(lVar29 + 0xa4) < iVar21 + 1U) {
                    FUN_1448cfae8(local_560,iVar21);
                  }
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar21 * 8) = puVar36;
                  *(int *)(puVar36 + 2) = (int)local_558;
                  *(undefined1 **)((longlong)puVar36 + 0x14) = &DAT_100000001;
                  puVar36[4] = local_530;
                  puVar36[5] = local_520;
                  *(int *)(puVar36 + 6) = (int)local_558;
                  *(float *)((longlong)puVar36 + 0x34) = local_590;
                  *(int *)(puVar36 + 7) = (int)local_538;
                  *(int *)((longlong)puVar36 + 0x3c) = local_598;
                  *(uint *)(puVar36 + 8) = local_594;
                  *(float *)((longlong)puVar36 + 0x44) = fVar40;
                  *(int *)(puVar36 + 9) = local_59c;
                  *(uint *)((longlong)puVar36 + 0x4c) = local_5c0;
                  *(float *)(puVar36 + 10) = local_5a0;
                  puVar36[0xb] = local_528;
                  *(int *)(puVar36 + 0xc) = (int)local_580;
                  *(float *)((longlong)puVar36 + 100) = fVar39;
                  *(undefined4 *)(puVar36 + 0xe) = *(undefined4 *)(uVar12 + 0x68);
                  *(int *)((longlong)puVar36 + 0x74) = (int)plVar18[2];
                  lVar13 = FUN_1447e4f80();
                  cVar10 = *(char *)(lVar13 + 0x41);
                  if (*(char *)(lVar13 + 0x41) == '\x03') {
                    cVar10 = '\x02';
                  }
                  puVar36[0x4a] = local_550;
                  *(char *)(puVar36 + 0x4b) = cVar10;
                  puVar36[0x42] = param_7;
                  puVar36[0x47] = local_4c8;
                  puVar36[0x48] = local_510;
                  puVar36[0x49] = local_508;
                  *(undefined4 *)(puVar36 + 0x43) = uVar3;
                  local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,(char)local_5bc);
                  local_5e0 = (float)((uint)local_5e0 & 0xffffff00);
                  FUN_1471850f0(&local_298,lVar29,local_588,local_578);
                  memcpy(puVar36 + 0x10,&local_298,400);
                  puVar1 = local_5d8;
                  if (local_564 == 0) {
                    puVar36[0x44] = local_4b0;
                    puVar36[0x45] = local_4e0;
                    puVar24 = local_4c0;
                  }
                  else {
                    puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8)
                    ;
                    puVar15 = puVar24 + 9;
                    if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                      FUN_140023dd8(local_5d8);
                      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar15 = puVar24 + 9;
                    }
                    *(undefined8 **)(lVar29 + 0x70) = puVar15;
                    puVar24[1] = *(undefined8 *)(local_4b8 + 8);
                    puVar24[2] = 0;
                    *(undefined1 *)(puVar24 + 3) = 3;
                    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                    *puVar24 = &PTR_FUN_14a1fb168;
                    *(undefined1 *)(puVar24 + 5) = 0x1c;
                    *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
                    puVar24[7] = 0;
                    puVar24[8] = local_4b8;
                    iVar21 = *(int *)(lVar29 + 0x1a0);
                    uVar28 = iVar21 + 1;
                    *(uint *)(lVar29 + 0x1a0) = uVar28;
                    if (*(uint *)(lVar29 + 0x1a4) < uVar28) {
                      FUN_1447568fc(local_5c8);
                    }
                    puVar1 = local_5d8;
                    *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24
                    ;
                    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                    puVar36[0x44] = puVar24;
                    puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8)
                    ;
                    puVar15 = puVar24 + 9;
                    if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                      FUN_140023dd8(local_5d8);
                      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar15 = puVar24 + 9;
                    }
                    *(undefined8 **)(lVar29 + 0x70) = puVar15;
                    puVar24[1] = *(undefined8 *)(local_4d8 + 8);
                    puVar24[2] = 0;
                    *(undefined1 *)(puVar24 + 3) = 3;
                    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                    *puVar24 = &PTR_FUN_14a1fb168;
                    *(undefined1 *)(puVar24 + 5) = 0x1c;
                    *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
                    puVar24[7] = 0;
                    puVar24[8] = local_4d8;
                    iVar21 = *(int *)(lVar29 + 0x1a0);
                    uVar28 = iVar21 + 1;
                    *(uint *)(lVar29 + 0x1a0) = uVar28;
                    if (*(uint *)(lVar29 + 0x1a4) < uVar28) {
                      FUN_1447568fc(local_5c8);
                    }
                    puVar1 = local_5d8;
                    *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24
                    ;
                    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                    puVar36[0x45] = puVar24;
                    cVar10 = *(char *)(local_518 + 0x68);
                    puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8)
                    ;
                    puVar15 = puVar24 + 9;
                    if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                      FUN_140023dd8(local_5d8);
                      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar15 = puVar24 + 9;
                    }
                    *(undefined8 **)(lVar29 + 0x70) = puVar15;
                    puVar24[1] = *(undefined8 *)(local_518 + 8);
                    puVar24[2] = 0;
                    *(undefined1 *)(puVar24 + 3) = 3;
                    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                    *puVar24 = &PTR_FUN_14a1fb168;
                    *(byte *)(puVar24 + 5) = cVar10 >> 7 & 0x1c;
                    *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
                    puVar24[7] = 0;
                    puVar24[8] = local_518;
                    iVar21 = *(int *)(lVar29 + 0x1a0);
                    *(uint *)(lVar29 + 0x1a0) = iVar21 + 1U;
                    if (*(uint *)(lVar29 + 0x1a4) < iVar21 + 1U) {
                      FUN_1447568fc(local_5c8,iVar21);
                    }
                    *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24
                    ;
                    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                    uVar25 = local_570;
                  }
                  puVar36[0x46] = puVar24;
                  local_3d8 = local_5c0;
                  local_3d4 = &DAT_100000001;
                  local_5e8 = &local_3d8;
                  FUN_147190823(lVar29,&local_298,&local_310,puVar36 + 2);
                }
                else {
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8,0x270);
                    puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar15 = puVar36 + 0x4c;
                    uVar25 = local_570;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  *puVar36 = &PTR_FUN_14a22c3d8;
                  puVar36[0x36] = 0;
                  puVar36[0x37] = 0;
                  puVar36[0x38] = 0;
                  puVar36[0x39] = 0;
                  puVar36[0x3a] = 0;
                  puVar36[0x3b] = 0;
                  puVar36[0x3d] = 0;
                  puVar36[0x3e] = 0;
                  puVar36[0x3f] = 0;
                  *(undefined4 *)(puVar36 + 0x40) = 4;
                  puVar36[0x42] = 0;
                  puVar36[0x44] = 0;
                  puVar36[0x45] = 0;
                  puVar36[0x46] = 0;
                  puVar36[0x47] = 0;
                  puVar36[0x48] = 0;
                  puVar36[0x49] = 0;
                  puVar36[0x4a] = 0;
                  *(undefined1 *)(puVar36 + 0x4b) = 1;
                  iVar21 = *(int *)(lVar29 + 0xa0);
                  *(uint *)(lVar29 + 0xa0) = iVar21 + 1U;
                  if (*(uint *)(lVar29 + 0xa4) < iVar21 + 1U) {
                    FUN_1448cfae8(local_560,iVar21);
                  }
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar21 * 8) = puVar36;
                  *(int *)(puVar36 + 2) = (int)local_558;
                  *(undefined1 **)((longlong)puVar36 + 0x14) = &DAT_100000001;
                  puVar36[4] = local_530;
                  puVar36[5] = local_520;
                  *(int *)(puVar36 + 6) = (int)local_558;
                  *(float *)((longlong)puVar36 + 0x34) = local_590;
                  *(int *)(puVar36 + 7) = (int)local_538;
                  *(int *)((longlong)puVar36 + 0x3c) = local_598;
                  *(uint *)(puVar36 + 8) = local_594;
                  *(float *)((longlong)puVar36 + 0x44) = fVar40;
                  *(int *)(puVar36 + 9) = local_59c;
                  *(uint *)((longlong)puVar36 + 0x4c) = local_5c0;
                  *(float *)(puVar36 + 10) = local_5a0;
                  puVar36[0xb] = local_528;
                  *(int *)(puVar36 + 0xc) = (int)local_580;
                  *(float *)((longlong)puVar36 + 100) = fVar39;
                  *(undefined4 *)(puVar36 + 0xe) = *(undefined4 *)(uVar12 + 0x68);
                  *(int *)((longlong)puVar36 + 0x74) = (int)plVar18[2];
                  lVar13 = FUN_1447e4f80();
                  cVar10 = *(char *)(lVar13 + 0x41);
                  if (*(char *)(lVar13 + 0x41) == '\x03') {
                    cVar10 = '\x02';
                  }
                  puVar36[0x4a] = local_550;
                  *(char *)(puVar36 + 0x4b) = cVar10;
                  puVar36[0x42] = param_7;
                  puVar36[0x47] = local_4c8;
                  puVar36[0x48] = local_510;
                  puVar36[0x49] = local_508;
                  *(undefined4 *)(puVar36 + 0x43) = uVar3;
                  local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,(char)local_5bc);
                  local_5e0 = (float)((uint)local_5e0 & 0xffffff00);
                  FUN_1471850f0(&local_298,lVar29,local_588,local_578);
                  memcpy(puVar36 + 0x10,&local_298,400);
                  puVar1 = local_5d8;
                  if (local_564 == 0) {
                    puVar36[0x44] = local_4b0;
                    puVar36[0x45] = local_4e0;
                    puVar24 = local_4c0;
                  }
                  else {
                    puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8)
                    ;
                    puVar15 = puVar24 + 9;
                    if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                      FUN_140023dd8(local_5d8);
                      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar15 = puVar24 + 9;
                    }
                    *(undefined8 **)(lVar29 + 0x70) = puVar15;
                    puVar24[1] = *(undefined8 *)(local_4b8 + 8);
                    puVar24[2] = 0;
                    *(undefined1 *)(puVar24 + 3) = 3;
                    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                    *puVar24 = &PTR_FUN_14a1fb168;
                    *(undefined1 *)(puVar24 + 5) = 0x1c;
                    *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
                    puVar24[7] = 0;
                    puVar24[8] = local_4b8;
                    iVar21 = *(int *)(lVar29 + 0x1a0);
                    uVar28 = iVar21 + 1;
                    *(uint *)(lVar29 + 0x1a0) = uVar28;
                    if (*(uint *)(lVar29 + 0x1a4) < uVar28) {
                      FUN_1447568fc(local_5c8);
                    }
                    puVar1 = local_5d8;
                    *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24
                    ;
                    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                    puVar36[0x44] = puVar24;
                    puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8)
                    ;
                    puVar15 = puVar24 + 9;
                    if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                      FUN_140023dd8(local_5d8);
                      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar15 = puVar24 + 9;
                    }
                    *(undefined8 **)(lVar29 + 0x70) = puVar15;
                    puVar24[1] = *(undefined8 *)(local_4d8 + 8);
                    puVar24[2] = 0;
                    *(undefined1 *)(puVar24 + 3) = 3;
                    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                    *puVar24 = &PTR_FUN_14a1fb168;
                    *(undefined1 *)(puVar24 + 5) = 0x1c;
                    *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
                    puVar24[7] = 0;
                    puVar24[8] = local_4d8;
                    iVar21 = *(int *)(lVar29 + 0x1a0);
                    uVar28 = iVar21 + 1;
                    *(uint *)(lVar29 + 0x1a0) = uVar28;
                    if (*(uint *)(lVar29 + 0x1a4) < uVar28) {
                      FUN_1447568fc(local_5c8);
                    }
                    puVar1 = local_5d8;
                    *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24
                    ;
                    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                    puVar36[0x45] = puVar24;
                    cVar10 = *(char *)(local_518 + 0x68);
                    puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8)
                    ;
                    puVar15 = puVar24 + 9;
                    if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                      FUN_140023dd8(local_5d8);
                      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar15 = puVar24 + 9;
                    }
                    *(undefined8 **)(lVar29 + 0x70) = puVar15;
                    puVar24[1] = *(undefined8 *)(local_518 + 8);
                    puVar24[2] = 0;
                    *(undefined1 *)(puVar24 + 3) = 3;
                    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
                    *puVar24 = &PTR_FUN_14a1fb168;
                    *(byte *)(puVar24 + 5) = cVar10 >> 7 & 0x1c;
                    *(undefined8 *)((longlong)puVar24 + 0x2c) = 0xffffffff00000000;
                    puVar24[7] = 0;
                    puVar24[8] = local_518;
                    iVar21 = *(int *)(lVar29 + 0x1a0);
                    *(uint *)(lVar29 + 0x1a0) = iVar21 + 1U;
                    if (*(uint *)(lVar29 + 0x1a4) < iVar21 + 1U) {
                      FUN_1447568fc(local_5c8,iVar21);
                    }
                    *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24
                    ;
                    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
                    uVar25 = local_570;
                  }
                  puVar36[0x46] = puVar24;
                  local_3cc = local_5c0;
                  local_3c8 = &DAT_100000001;
                  local_5e8 = &local_3cc;
                  FUN_147190771(lVar29,&local_298,local_320,puVar36 + 2);
                }
                puVar1 = local_5d8;
                uVar12 = local_548;
                if (0 < local_478) {
                  puVar36 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 0xfU & 0xfffffffffffffff0)
                  ;
                  puVar15 = puVar36 + 0x1a;
                  if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                    FUN_140023dd8(local_5d8,0xe0);
                    puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar15 = puVar36 + 0x1a;
                  }
                  *(undefined8 **)(lVar29 + 0x70) = puVar15;
                  *puVar36 = &PTR_FUN_14a22c418;
                  puVar36[0x14] = 0;
                  puVar36[0x10] = 0;
                  puVar36[0x11] = 0;
                  puVar36[0x12] = 0;
                  *(undefined1 *)(puVar36 + 0x15) = 1;
                  puVar36[0x16] = 0;
                  *(undefined1 *)(puVar36 + 0x17) = 1;
                  puVar36[0x18] = 0;
                  puVar36[0x19] = 0;
                  iVar21 = *(int *)(lVar29 + 0xa0);
                  *(uint *)(lVar29 + 0xa0) = iVar21 + 1U;
                  if (*(uint *)(lVar29 + 0xa4) < iVar21 + 1U) {
                    FUN_1448cfae8(local_560,iVar21);
                  }
                  *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar21 * 8) = puVar36;
                  *(undefined4 *)(puVar36 + 0xe) = 0;
                  *(int *)(puVar36 + 2) = (int)local_558;
                  *(undefined1 **)((longlong)puVar36 + 0x14) = &DAT_100000001;
                  puVar36[4] = local_530;
                  puVar36[5] = local_520;
                  *(int *)(puVar36 + 6) = (int)local_558;
                  *(float *)((longlong)puVar36 + 0x34) = local_590;
                  *(int *)(puVar36 + 7) = (int)local_538;
                  *(int *)((longlong)puVar36 + 0x3c) = local_598;
                  *(uint *)(puVar36 + 8) = local_594;
                  *(float *)((longlong)puVar36 + 0x44) = fVar40;
                  *(int *)(puVar36 + 9) = local_59c;
                  *(uint *)((longlong)puVar36 + 0x4c) = local_5c0;
                  *(float *)(puVar36 + 10) = local_5a0;
                  puVar36[0xb] = local_528;
                  *(int *)(puVar36 + 0xc) = (int)local_580;
                  *(float *)((longlong)puVar36 + 100) = fVar39;
                  *(int *)((longlong)puVar36 + 0x74) = local_4e8;
                  *(int *)(puVar36 + 0xf) = local_4ec;
                  puVar36[0x10] = local_4a0;
                  puVar36[0x11] = local_4a8;
                  puVar36[0x12] = local_4e0;
                  FUN_1472ea582(lVar29,local_440,puVar36 + 0x16);
                  uVar16 = *(undefined8 *)(local_588 + 0x13818);
                  FUN_145f68864();
                  FUN_1448e935e(uVar16,&local_298,&DAT_14c9d9648,0);
                  FUN_145f68864();
                  local_3e4 = local_480;
                  local_3e0 = local_47c;
                  local_3dc = 1;
                  local_5e8 = &local_3e4;
                  FUN_1471908d5(lVar29,&local_398,&local_298,puVar36 + 2);
                  uVar25 = local_570;
                  uVar12 = local_548;
                }
              }
              else {
                puVar36 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar15 = puVar36 + 0x40;
                if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                  FUN_140023dd8(local_5d8,0x210);
                  puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar15 = puVar36 + 0x40;
                }
                *(undefined8 **)(lVar29 + 0x70) = puVar15;
                *puVar36 = &PTR_FUN_14a22c370;
                puVar36[0x2c] = 0;
                puVar36[0x2d] = 0;
                puVar36[0x2e] = 0;
                puVar36[0x2f] = 0;
                puVar36[0x30] = 0;
                puVar36[0x31] = 0;
                puVar36[0x33] = 0;
                puVar36[0x34] = 0;
                puVar36[0x35] = 0;
                *(undefined4 *)(puVar36 + 0x36) = 4;
                puVar36[0x38] = 0;
                *(undefined1 *)(puVar36 + 0x39) = 1;
                puVar36[0x3a] = 0;
                puVar36[0x3b] = 0;
                puVar36[0x3c] = 0;
                puVar36[0x3d] = 0;
                puVar36[0x3e] = 0;
                puVar36[0x3f] = 0;
                iVar21 = *(int *)(lVar29 + 0xa0);
                *(uint *)(lVar29 + 0xa0) = iVar21 + 1U;
                if (*(uint *)(lVar29 + 0xa4) < iVar21 + 1U) {
                  FUN_1448cfae8(local_560,iVar21);
                }
                uVar28 = local_474;
                *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar21 * 8) = puVar36;
                local_4f8 = puVar36 + 2;
                puVar36[2] = local_520;
                *(int *)(puVar36 + 3) = (int)plVar18[2];
                *(undefined4 *)((longlong)puVar36 + 0x1c) = local_5b0._0_4_;
                *(undefined4 *)(puVar36 + 4) = uVar3;
                *(uint *)((longlong)puVar36 + 0x24) = local_474;
                cVar10 = (char)local_5bc;
                local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,(char)local_5bc);
                local_5e0 = (float)((uint)local_5e0 & 0xffffff00);
                FUN_1471850f0(&local_298,lVar29,local_588,local_578);
                memcpy(puVar36 + 6,&local_298,400);
                lVar13 = FUN_1447e4f80();
                cVar11 = *(char *)(lVar13 + 0x41);
                if (*(char *)(lVar13 + 0x41) == '\x03') {
                  cVar11 = '\x02';
                }
                puVar36[0x38] = local_550;
                *(char *)(puVar36 + 0x39) = cVar11;
                puVar36[0x3a] = local_4c8;
                puVar36[0x3b] = local_510;
                puVar36[0x3c] = local_508;
                puVar36[0x3d] = param_7;
                puVar36[0x3e] = local_428;
                puVar36[0x3f] = local_430;
                local_3a8 = uVar28;
                local_3a4 = &DAT_100000001;
                piVar14 = &local_350;
                if (cVar10 != '\0') {
                  piVar14 = (int *)&local_360;
                }
                local_5e8 = &local_3a8;
                FUN_14719055b(lVar29,&local_298,piVar14,local_4f8);
                uVar25 = local_570;
                uVar12 = local_548;
              }
            }
            else {
              FUN_1405bfba3(lVar29,local_500,0,2);
              FUN_1405bfba3(lVar29,local_458,0,2);
              puVar1 = local_5d8;
              puVar36 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar15 = puVar36 + 0x48;
              if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                FUN_140023dd8(local_5d8,0x250);
                puVar36 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                puVar15 = puVar36 + 0x48;
              }
              *(undefined8 **)(lVar29 + 0x70) = puVar15;
              *puVar36 = &PTR_FUN_14a22c268;
              puVar36[0x36] = 0;
              puVar36[0x37] = 0;
              puVar36[0x38] = 0;
              puVar36[0x39] = 0;
              puVar36[0x3a] = 0;
              puVar36[0x3b] = 0;
              puVar36[0x3d] = 0;
              puVar36[0x3e] = 0;
              puVar36[0x3f] = 0;
              *(undefined4 *)(puVar36 + 0x40) = 4;
              puVar36[0x46] = 0;
              puVar36[0x42] = 0;
              puVar36[0x43] = 0;
              puVar36[0x44] = 0;
              *(undefined1 *)(puVar36 + 0x47) = 1;
              iVar21 = *(int *)(lVar29 + 0xa0);
              *(uint *)(lVar29 + 0xa0) = iVar21 + 1U;
              if (*(uint *)(lVar29 + 0xa4) < iVar21 + 1U) {
                FUN_1448cfae8(local_560,iVar21);
              }
              *(undefined8 **)(*(longlong *)(lVar29 + 0x98) + (longlong)iVar21 * 8) = puVar36;
              *(int *)(puVar36 + 2) = (int)local_558;
              *(undefined1 **)((longlong)puVar36 + 0x14) = &DAT_100000001;
              puVar36[4] = local_530;
              puVar36[5] = local_520;
              *(int *)(puVar36 + 6) = (int)local_558;
              *(float *)((longlong)puVar36 + 0x34) = local_590;
              *(int *)(puVar36 + 7) = (int)local_538;
              *(int *)((longlong)puVar36 + 0x3c) = local_598;
              *(uint *)(puVar36 + 8) = local_594;
              *(float *)((longlong)puVar36 + 0x44) = fVar40;
              *(int *)(puVar36 + 9) = local_59c;
              *(uint *)((longlong)puVar36 + 0x4c) = local_5c0;
              *(float *)(puVar36 + 10) = local_5a0;
              puVar36[0xb] = local_528;
              *(int *)(puVar36 + 0xc) = (int)local_580;
              *(float *)((longlong)puVar36 + 100) = fVar39;
              *(undefined4 *)(puVar36 + 0xe) = local_5b0._0_4_;
              *(uint *)((longlong)puVar36 + 0x74) = uVar23;
              *(uint *)(puVar36 + 0xf) = local_4e4;
              local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,bVar27);
              local_5e0 = (float)((uint)local_5e0 & 0xffffff00);
              FUN_1471850f0(&local_298,lVar29,local_588,local_578);
              memcpy(puVar36 + 0x10,&local_298,400);
              lVar13 = FUN_1447e4f80();
              puVar1 = local_5d8;
              cVar10 = *(char *)(lVar13 + 0x41);
              if (*(char *)(lVar13 + 0x41) == '\x03') {
                cVar10 = '\x02';
              }
              puVar36[0x46] = local_550;
              *(char *)(puVar36 + 0x47) = cVar10;
              puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar15 = puVar24 + 8;
              if (*(undefined8 **)(lVar29 + 0x78) < puVar15) {
                FUN_140023dd8(local_5d8);
                puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar15 = puVar24 + 8;
              }
              *(undefined8 **)(lVar29 + 0x70) = puVar15;
              puVar24[1] = *(undefined8 *)(local_408 + 8);
              puVar24[2] = 0;
              *(undefined1 *)(puVar24 + 3) = 2;
              *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar24 + 5) = 0;
              *puVar24 = &PTR_FUN_14a1fb3e8;
              *(undefined2 *)(puVar24 + 6) = 0x1c;
              *(undefined1 *)((longlong)puVar24 + 0x32) = 0;
              puVar24[7] = local_408;
              iVar21 = *(int *)(lVar29 + 0x1a0);
              *(uint *)(lVar29 + 0x1a0) = iVar21 + 1U;
              if (*(uint *)(lVar29 + 0x1a4) < iVar21 + 1U) {
                FUN_1447568fc(local_5c8,iVar21);
              }
              *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar21 * 8) = puVar24;
              *(int *)((longlong)puVar24 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
              puVar36[0x42] = puVar24;
              puVar36[0x43] = local_500;
              puVar36[0x44] = local_458;
              local_378 = local_4e4;
              local_374 = &DAT_100000001;
              piVar14 = &local_2c0;
              if (bVar27 != 0) {
                piVar14 = &local_2d0;
              }
              local_5e8 = &local_378;
              FUN_1471904a9(lVar29,&local_298,piVar14,puVar36 + 2);
              local_448 = local_450;
              puVar15 = local_460;
LAB_142c68393:
              puVar1 = local_5d8;
              dVar4 = *(double *)(local_588 + 0xa00);
              dVar5 = *(double *)(local_588 + 0x9c0);
              dVar6 = *(double *)(local_588 + 0x9e0);
              dVar7 = *(double *)(local_588 + 0x1048);
              dVar8 = *(double *)(local_588 + 0x1050);
              dVar9 = *(double *)(local_588 + 0x1058);
              local_4f8 = *(undefined8 **)(local_588 + 0x30f8);
              local_490 = *(ulonglong *)(local_588 + 0x3100);
              local_3f0 = *(undefined8 *)(param_7 + 0x84);
              puVar24 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar36 = puVar24 + 100;
              local_380 = local_3f0;
              if (*(undefined8 **)(lVar29 + 0x78) < puVar36) {
                FUN_140023dd8(local_5d8,0x330);
                puVar24 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                puVar36 = puVar24 + 100;
              }
              *local_5d8 = (ulonglong)puVar36;
              *puVar24 = &PTR_FUN_14a22c288;
              puVar24[2] = 0;
              puVar24[0x30] = 0;
              puVar24[0x31] = 0;
              puVar24[0x32] = 0;
              puVar24[0x33] = 0;
              puVar24[0x34] = 0;
              puVar24[0x35] = 0;
              puVar24[0x37] = 0;
              puVar24[0x38] = 0;
              puVar24[0x39] = 0;
              *(undefined4 *)(puVar24 + 0x3a) = 4;
              puVar24[0x3c] = 0;
              *(undefined1 *)(puVar24 + 0x3d) = 1;
              puVar24[0x3e] = 0;
              *(undefined4 *)(puVar24 + 0x3f) = 4;
              puVar24[0x40] = 0;
              puVar24[0x41] = 0;
              puVar24[0x42] = 0;
              lVar29 = 0x220;
              do {
                *(undefined8 *)((longlong)puVar24 + lVar29) = 0;
                ((undefined8 *)((longlong)puVar24 + lVar29))[1] = 0;
                *(undefined4 *)((longlong)puVar24 + lVar29 + 0x10) = 0xffff0000;
                lVar29 = lVar29 + 0x18;
              } while (lVar29 != 0x2e0);
              *(undefined4 *)((longlong)puVar24 + 0x2f4) = 0;
              puVar24[0x5c] = 0;
              puVar24[0x5d] = 0;
              *(undefined2 *)(puVar24 + 0x5e) = 0;
              *(undefined4 *)(puVar24 + 0x5f) = 0xffffffff;
              *(undefined4 *)((longlong)puVar24 + 0x2fc) = 0xffffffff;
              *(undefined4 *)(puVar24 + 0x60) = 0xffffffff;
              *(undefined4 *)((longlong)puVar24 + 0x304) = 0xffffffff;
              *(undefined4 *)(puVar24 + 0x61) = 0;
              *(undefined2 *)((longlong)puVar24 + 0x30c) = 0;
              puVar24[0x62] = 0;
              iVar21 = *(int *)(local_5b8 + 0xa0);
              *(uint *)(local_5b8 + 0xa0) = iVar21 + 1U;
              if (*(uint *)(local_5b8 + 0xa4) < iVar21 + 1U) {
                FUN_1448cfae8(local_560,iVar21);
              }
              lVar29 = local_588;
              *(undefined8 **)(*(longlong *)(local_5b8 + 0x98) + (longlong)iVar21 * 8) = puVar24;
              puVar24[2] = puVar15;
              *(float *)(puVar24 + 4) = (float)dVar5;
              *(float *)((longlong)puVar24 + 0x24) = (float)dVar6;
              *(float *)(puVar24 + 5) = (float)dVar4;
              *(int *)((longlong)puVar24 + 0x2c) = (int)plVar18[2];
              *(float *)(puVar24 + 6) = (float)dVar7;
              *(float *)((longlong)puVar24 + 0x34) = (float)dVar8;
              *(float *)(puVar24 + 7) = (float)dVar9;
              local_5e0 = (float)DAT_14c84635c;
              if (1.0 < *(double *)(local_588 + 0x8a8) || *(double *)(local_588 + 0x8a8) == 1.0) {
                local_5e0 = (float)*(double *)(local_588 + 0x930) +
                            (float)*(double *)(local_588 + 0x930);
              }
              local_5e8 = (uint *)CONCAT44(local_5e8._4_4_,0xbf800000);
              FUN_14717f3dc(&local_298,&local_380,*(undefined4 *)(local_588 + 0x1de8),1);
              lVar13 = local_5b8;
              *(int *)((longlong)puVar24 + 0x3c) = (int)local_298;
              *(uint *)(puVar24 + 8) = uVar23;
              local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,bVar27);
              local_5e0 = (float)((uint)local_5e0 & 0xffffff00);
              FUN_1471850f0(&local_298,local_5b8,lVar29,local_578);
              memcpy(puVar24 + 10,&local_298,400);
              lVar29 = FUN_1447e4f80();
              cVar10 = *(char *)(lVar29 + 0x41);
              if (*(char *)(lVar29 + 0x41) == '\x03') {
                cVar10 = '\x02';
              }
              puVar24[0x3c] = local_550;
              *(char *)(puVar24 + 0x3d) = cVar10;
              puVar24[0x3e] = local_448;
              *(undefined4 *)(puVar24 + 0x3f) = 4;
              puVar24[0x40] = local_4c8;
              puVar24[0x41] = local_510;
              puVar24[0x42] = local_508;
              *(undefined4 *)(puVar24 + 0x43) = uVar3;
              puVar24[0x5c] = param_7;
              puVar24[0x5d] = 0;
              *(undefined2 *)(puVar24 + 0x5e) = 1;
              *(undefined4 *)((longlong)puVar24 + 0x2f4) = 1;
              piVar14 = &local_330;
              if ((char)local_5bc != '\0') {
                piVar14 = &local_340;
              }
              local_398 = *piVar14;
              iStack_394 = piVar14[1];
              iStack_390 = piVar14[2];
              iStack_38c = piVar14[3];
              FUN_147191166();
              FUN_140069376(lVar13);
              puVar1 = local_5d8;
              puVar36 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar15 = puVar36 + 0x42;
              if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
                FUN_140023dd8(local_5d8,0x218);
                puVar36 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar15 = puVar36 + 0x42;
              }
              uVar25 = local_450;
              uVar12 = local_548;
              *local_5d8 = (ulonglong)puVar15;
              uStack_290 = (undefined4)DAT_14c9db540;
              uStack_28c = (undefined4)((ulonglong)DAT_14c9db540 >> 0x20);
              if (DAT_14c9db540 != 0) {
                LOCK();
                *(int *)(DAT_14c9db540 + 8) = *(int *)(DAT_14c9db540 + 8) + 1;
                UNLOCK();
              }
              uStack_288 = &DAT_14c9db4f8;
              local_5e8 = (uint *)CONCAT71(local_5e8._1_7_,2);
              local_298 = puVar24 + 2;
              FUN_140068f1a(puVar36,&local_399,&local_298,1);
              lVar29 = local_5b8;
              *puVar36 = &PTR_FUN_14a22c290;
              puVar36[0x37] = puVar24 + 2;
              *(int *)(puVar36 + 0x38) = local_398;
              *(int *)((longlong)puVar36 + 0x1c4) = iStack_394;
              *(int *)(puVar36 + 0x39) = iStack_390;
              *(int *)((longlong)puVar36 + 0x1cc) = iStack_38c;
              *(char *)(puVar36 + 0x3a) = (char)local_488;
              *(uint *)((longlong)puVar36 + 0x1d4) = CONCAT31(uStack_2a7,local_2ab._3_1_);
              *(undefined4 *)((longlong)puVar36 + 0x1d1) = local_2ab;
              puVar36[0x3b] = local_3f8;
              puVar36[0x3c] = local_400;
              puVar36[0x3d] = local_4f8;
              puVar36[0x3e] = local_490;
              puVar36[0x3f] = local_3f0;
              *(undefined4 *)(puVar36 + 0x40) = local_5b0._0_4_;
              puVar36[0x41] = uVar25;
              iVar21 = *(int *)(local_5b8 + 0x170);
              *(uint *)(local_5b8 + 0x170) = iVar21 + 1U;
              if (*(uint *)(local_5b8 + 0x174) < iVar21 + 1U) {
                FUN_14470e57a(local_410,iVar21);
              }
              *(undefined8 **)(*(longlong *)(lVar29 + 0x168) + (longlong)iVar21 * 8) = puVar36;
              *(int *)((longlong)puVar36 + 0x2c) = *(int *)(lVar29 + 0x170) + -1;
              FUN_140069100(lVar29,puVar36);
              uVar25 = local_570;
              if ((local_58a & 1) != 0) goto LAB_142c6890b;
            }
            local_4e8 = local_4e8 + 1;
            bVar32 = true;
          }
          plVar18 = plVar18 + 5;
        } while (plVar18 != plVar19);
      }
      uVar12 = uVar12 + 0x78;
    } while (uVar12 != uVar25);
    if (bVar32) goto LAB_142c6a4cf;
  }
  local_298._0_4_ = 0xffffffff;
  local_298._4_4_ = 0xffffffff;
  uStack_290 = 0xffffffff;
  uStack_28c = 0xffffffff;
  FUN_14042f6c6(lVar29,local_508,&local_298,2);
LAB_142c6a4cf:
  puVar15 = local_4d0;
  lVar29 = local_550;
  if (local_550 != 0) {
    LOCK();
    puVar2 = (uint *)(local_550 + 8);
    uVar23 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar23 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_550 + 8);
      LOCK();
      uVar23 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar23 >> 0x1e & 1) == 0) {
        bVar27 = *(byte *)(local_550 + 0xd);
        plVar17 = (longlong *)FUN_14001cc68(0x10,8);
        plVar17[1] = lVar29;
        plVar19 = DAT_14ca843c0;
        plVar18 = DAT_14ca843c8;
        if ((bVar27 & 2) == 0) {
          do {
            *plVar17 = (longlong)plVar19;
            LOCK();
            bVar32 = plVar19 != DAT_14ca843c0;
            plVar18 = plVar17;
            if (bVar32) {
              plVar19 = DAT_14ca843c0;
              plVar18 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar18;
            UNLOCK();
          } while (bVar32);
        }
        else {
          do {
            *plVar17 = (longlong)plVar18;
            LOCK();
            bVar32 = plVar18 != DAT_14ca843c8;
            plVar19 = plVar17;
            if (bVar32) {
              plVar18 = DAT_14ca843c8;
              plVar19 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar19;
            UNLOCK();
          } while (bVar32);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar15;
}



// FUNCTION 142c6aef3 FUN_142c6aef3 body=4566 status=ok
// SIG undefined FUN_142c6aef3(void)

void FUN_142c6aef3(char param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,longlong param_7,undefined8 *param_8,
                  ulonglong *param_9,ulonglong *param_10,ulonglong *param_11,ulonglong *param_12,
                  ulonglong *param_13,undefined8 *param_14,uint *param_15)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auStack_148 [32];
  longlong local_128;
  ulonglong *local_120;
  longlong *local_110;
  longlong local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  DWORD local_d4;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [16];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  int local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int iStack_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_55;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = param_4;
  local_fc = FUN_1400e05f2(*(undefined2 *)
                            (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
  plVar8 = param_8 + 7;
  if (param_1 != '\0') {
    plVar8 = param_8 + 0xd;
  }
  local_e8 = *(undefined8 *)(*plVar8 + 0x84);
  uStack_78 = (longlong *)0x0;
  uVar13 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar13 = DAT_14ca84e48;
  }
  local_88 = uVar13 + (uVar13 == 0);
  iStack_84 = 1;
  uStack_80 = 0x10109;
  plVar8 = (longlong *)(param_2 + 0x70);
  uVar20 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar20 + 0x150;
  local_110 = plVar8;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(plVar8,0x160);
    uVar20 = *plVar8 + 0xfU & 0xfffffffffffffff0;
    uVar14 = uVar20 + 0x150;
  }
  local_f0 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar20,L"Hair.VisibilityCompactCounter",&local_88,0);
  iVar16 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar16 + 1U) {
    FUN_144737178(local_f0,iVar16);
  }
  plVar8 = local_110;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar16 * 8) = uVar20;
  *(int *)(uVar20 + 0x7c) = *(int *)(param_2 + 400) + -1;
  *param_9 = uVar20;
  local_70 = DAT_14ca85098;
  uStack_80 = DAT_14ca85088;
  uStack_7c = DAT_14ca8508c;
  uStack_78 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_56 = 0;
  local_88 = 0x20009;
  iStack_84 = 0;
  local_55 = 0x1c;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_68 = 0;
  local_53 = 0xff;
  iStack_64 = DAT_14ca84e40;
  if ((int)local_e8 < DAT_14ca84e40) {
    iStack_64 = (int)local_e8;
  }
  if (iStack_64 < 2) {
    iStack_64 = 1;
  }
  iVar16 = (int)((ulonglong)local_e8 >> 0x20);
  local_60 = DAT_14ca84e40;
  if (iVar16 < DAT_14ca84e40) {
    local_60 = iVar16;
  }
  if (local_60 < 2) {
    local_60 = 1;
  }
  uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar14 = uVar20 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_110,0x128);
    uVar20 = *plVar8 + 7U & 0xfffffffffffffff8;
    uVar14 = uVar20 + 0x120;
  }
  local_f8 = param_2 + 0x178;
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bbb8c(uVar20,L"Hair.VisibilityCompactNodeIndex",&local_88,0);
  iVar19 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar19 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar19 + 1U) {
    FUN_14472c0f6(local_f8,iVar19);
  }
  plVar8 = local_110;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar19 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  *param_10 = uVar20;
  local_70 = DAT_14ca85098;
  iStack_64 = DAT_14ca84e40;
  if ((int)local_e8 < DAT_14ca84e40) {
    iStack_64 = (int)local_e8;
  }
  if (iStack_64 < 2) {
    iStack_64 = 1;
  }
  local_60 = DAT_14ca84e40;
  if (iVar16 < DAT_14ca84e40) {
    local_60 = iVar16;
  }
  uStack_80 = DAT_14ca85088;
  uStack_7c = DAT_14ca8508c;
  uStack_78 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_56 = 0;
  local_88 = 0x20009;
  iStack_84 = 0;
  local_55 = 0x15;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_68 = 0;
  local_53 = 0xff;
  if (local_60 < 2) {
    local_60 = 1;
  }
  uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar14 = uVar20 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_110,0x128);
    uVar20 = *plVar8 + 7U & 0xfffffffffffffff8;
    uVar14 = uVar20 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  local_e0 = param_3;
  FUN_1456bbb8c(uVar20,L"Hair.CoverageTexture",&local_88,0);
  iVar16 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar16 + 1U) {
    FUN_14472c0f6(local_f8,iVar16);
  }
  plVar8 = local_110;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar16 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  *param_13 = uVar20;
  uVar14 = *param_9;
  cVar12 = *(char *)(uVar14 + 0x68);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x48);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 8;
  }
  local_108 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 2;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar18 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar18 + 0x31) = 0;
  puVar18[7] = uVar14;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  FUN_1405bfba3(param_2,puVar18,0,2);
  lVar4 = local_e0;
  local_120 = param_10;
  local_128 = param_7;
  FUN_142c74f26(param_2,&local_88,local_e0,0);
  local_120 = param_13;
  local_128 = param_7;
  FUN_142c74f26(param_2,&local_88,lVar4,0);
  FUN_147180620(&local_a8,lVar4,lVar4 + 0x30f8,param_5);
  lVar9 = DAT_14c9d2468;
  if (param_1 == '\0') {
    local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
    iVar19 = local_9c - local_a4;
    iVar16 = local_a0 - local_a8;
  }
  else {
    iVar19 = *(int *)(lVar4 + 0x3104) - *(int *)(lVar4 + 0x30fc);
    iVar16 = *(int *)(lVar4 + 0x3100) - *(int *)(lVar4 + 0x30f8);
    local_f8 = CONCAT44(local_f8._4_4_,local_fc);
  }
  uVar17 = 1;
  if (DAT_14c9d7010 < 1) {
    uVar14 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar4 + 0x3090) * 2);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar5 = *(int *)(lVar2 + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar20 = 0;
    }
    else if (iVar5 == 1) {
      local_d0 = uVar14;
      local_d4 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar20 = (ulonglong)(local_d4 != DVar6);
      uVar14 = local_d0;
    }
    else {
      uVar20 = 1;
    }
    lVar3 = DAT_14c9d2468;
    if ((*(int *)(lVar9 + uVar20 * 4) != 1) &&
       (uVar17 = local_fc, 3 < (int)(&DAT_14ca814b8)[uVar14 * 0xf])) {
      iVar5 = *(int *)(lVar2 + 0xc60);
      if ((iVar5 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar5 == 2)))) {
        uVar14 = 0;
      }
      else if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar14 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar14 = 1;
      }
      uVar17 = local_fc;
      if (*(int *)(lVar3 + uVar14 * 4) == 2) {
        uVar17 = 1;
      }
    }
  }
  iVar5 = FUN_147180cad(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar4 + 0x3090) * 2));
  plVar8 = local_110;
  uVar15 = iVar5 * iVar19 * iVar16;
  uVar13 = 8;
  if (DAT_14ca84e48 < 8) {
    uVar13 = DAT_14ca84e48;
  }
  local_88 = uVar13 + (uVar13 == 0);
  uStack_80 = 0x10109;
  uVar13 = DAT_14ca84e48;
  if (uVar15 < DAT_14ca84e48) {
    uVar13 = uVar15;
  }
  uStack_78 = (longlong *)0x0;
  iStack_84 = uVar13 + (uVar13 == 0);
  uVar20 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar20 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_110,0x160);
    uVar20 = *plVar8 + 0xfU & 0xfffffffffffffff0;
    uVar14 = uVar20 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar20,L"Hair.VisibilityNodeVis",&local_88,0);
  iVar16 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar16 + 1U) {
    FUN_144737178(local_f0,iVar16);
  }
  plVar8 = local_110;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar16 * 8) = uVar20;
  *(int *)(uVar20 + 0x7c) = *(int *)(param_2 + 400) + -1;
  *param_11 = uVar20;
  uVar13 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar13 = DAT_14ca84e48;
  }
  local_88 = uVar13 + (uVar13 == 0);
  uStack_80 = 0x4109;
  uVar13 = DAT_14ca84e48;
  if (uVar15 < DAT_14ca84e48) {
    uVar13 = uVar15;
  }
  uStack_78 = (longlong *)0x0;
  iStack_84 = uVar13 + (uVar13 == 0);
  uVar20 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar20 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_110,0x160);
    uVar20 = *plVar8 + 0xfU & 0xfffffffffffffff0;
    uVar14 = uVar20 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar20,L"Hair.VisibilityNodeCoord",&local_88,0);
  iVar16 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar16 + 1U) {
    FUN_144737178(local_f0,iVar16);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar16 * 8) = uVar20;
  *(int *)(uVar20 + 0x7c) = *(int *)(param_2 + 400) + -1;
  *param_12 = uVar20;
  local_90 = 1;
  if ((int)local_f8 == 0) {
    local_90 = uVar17;
  }
  local_98 = 0x40;
  local_94 = (int)local_f8;
  param_8[1] = 0;
  *param_8 = local_e8;
  *(uint *)(param_8 + 2) = uVar15;
  *(uint *)((longlong)param_8 + 0x14) = (uint)(0 < DAT_14c9d7108);
  fVar21 = DAT_14c760378;
  if (1.0 <= DAT_14c760378) {
    fVar21 = 1.0;
  }
  if (fVar21 <= 0.1) {
    fVar21 = 0.1;
  }
  *(float *)(param_8 + 4) = fVar21;
  fVar21 = DAT_14c760344;
  if (100.0 <= DAT_14c760344) {
    fVar21 = 100.0;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  *(float *)(param_8 + 3) = fVar21;
  fVar21 = DAT_14c760348;
  if (90.0 <= DAT_14c760348) {
    fVar21 = 90.0;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  fVar21 = cosf(fVar21 * 0.017453292);
  *(float *)((longlong)param_8 + 0x1c) = fVar21;
  param_8[0x10] = *local_c8;
  lVar9 = FUN_1447e4f80();
  plVar8 = local_110;
  cVar12 = '\x02';
  if (*(char *)(lVar9 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar9 + 0x41);
  }
  param_8[0x1a] = *(undefined8 *)(lVar4 + 0x18);
  *(char *)(param_8 + 0x1b) = cVar12;
  uVar14 = *param_9;
  cVar12 = *(char *)(uVar14 + 0x68);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x48);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 2;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar18 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar18 + 0x31) = 0;
  puVar18[7] = uVar14;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  plVar8 = local_110;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_8[0x11] = puVar18;
  uVar14 = *param_10;
  uVar1 = *(undefined1 *)(uVar14 + 0x94);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x50);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 0;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar18 + 6) = uVar1;
  *(undefined1 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar18 + 0x35) = 0;
  puVar18[8] = uVar14;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  plVar8 = local_110;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_8[0x12] = puVar18;
  uVar14 = *param_11;
  cVar12 = *(char *)(uVar14 + 0x68);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x48);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 2;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar18 + 6) = cVar12 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar18 + 0x31) = 0;
  puVar18[7] = uVar14;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  plVar8 = local_110;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_8[0x14] = puVar18;
  uVar14 = *param_12;
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x48);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 2;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar18 + 6) = 0x31;
  *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
  puVar18[7] = uVar14;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  plVar8 = local_110;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_8[0x15] = puVar18;
  uVar14 = *param_13;
  uVar1 = *(undefined1 *)(uVar14 + 0x94);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x50);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 0;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar18 + 6) = uVar1;
  *(undefined1 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar18 + 0x35) = 0;
  puVar18[8] = uVar14;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  plVar8 = local_110;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_8[0x13] = puVar18;
  param_8[5] = *(undefined8 *)(param_7 + 0xc);
  *(undefined4 *)(param_8 + 6) = 8;
  lVar9 = *(longlong *)(param_7 + 0x60);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x50);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(lVar9 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar18 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = lVar9;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_8[0x18] = puVar18;
  param_8[0x17] = *(undefined8 *)(param_7 + 0x18);
  param_8[0x1c] = *(undefined8 *)(param_7 + 0x70);
  *(undefined4 *)(param_8 + 0x1d) = 4;
  FUN_1471937f0(local_b8,*(undefined8 *)(local_e0 + 0x13818),&local_98);
  local_88 = 0;
  iStack_84 = 0;
  uStack_78 = (longlong *)0x0;
  local_128 = *(undefined8 *)(param_7 + 0x70);
  local_120 = (ulonglong *)&local_88;
  FUN_1471938bc(param_2,&local_b9,local_b8,param_8);
  if (CONCAT44(iStack_84,local_88) != 0) {
    plVar8 = uStack_78;
    if (uStack_78 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  plVar8 = local_110;
  uVar14 = *param_9;
  cVar12 = *(char *)(uVar14 + 0x68);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar18 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_110,0x50);
    puVar18 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar18 + 5) = cVar12 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = uVar14;
  iVar16 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar16 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar16 + 1U) {
    FUN_1447568fc(local_108,iVar16);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar16 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar11 = FUN_142c6caa1(param_2,local_e0,param_6,puVar18);
  *param_14 = uVar11;
  *param_15 = uVar15;
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6c0ca FUN_142c6c0ca body=2518 status=ok
// SIG undefined FUN_142c6c0ca(void)

undefined4 FUN_142c6c0ca(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_138 [32];
  uint *local_118;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_85;
  uint local_84;
  undefined1 *local_80;
  int local_78 [4];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar5 = 0;
  if (((longlong)*(int *)(param_3 + 0x3d38) != 0) && (0.0 <= DAT_14c760380)) {
    lVar11 = *(longlong *)(param_3 + 0x3108);
    lVar12 = lVar11 + 0x20e0;
    if (*(int *)(lVar11 + 0x20f0) < 1) {
      FUN_14717dfc4(lVar12);
      local_98 = 0;
      uStack_90 = 0;
      if ((longlong)*(int *)(param_3 + 0x3d38) == 0) {
        uVar5 = 0;
        goto LAB_142c6c26e;
      }
      plVar9 = *(longlong **)(param_3 + 0x3d30);
      plVar14 = plVar9 + (longlong)*(int *)(param_3 + 0x3d38) * 3;
    }
    else {
      plVar9 = *(longlong **)(param_3 + 0x3d30);
      plVar14 = plVar9 + (longlong)*(int *)(param_3 + 0x3d38) * 3;
    }
    uStack_90 = 0;
    local_98 = 0;
    do {
      uVar6 = uStack_90;
      lVar8 = *(longlong *)(*plVar9 + 0xa8);
      if (lVar8 == 0) {
        lVar8 = *plVar9;
      }
      lVar8 = *(longlong *)(lVar8 + 0x40);
      iVar3 = (int)ROUND(*(float *)(lVar8 + 0x47c) + *(float *)(lVar8 + 0x47c) + -0.5);
      if (iVar3 >> 1 < 1) {
        iVar3 = 0;
      }
      uVar4 = iVar3 >> 1;
      if ((((int)uVar4 < *(int *)(lVar8 + 0x458)) &&
          (uVar10 = (ulonglong)uVar4, *(int *)(*(longlong *)(lVar8 + 0x450) + uVar10 * 4) == 0)) &&
         (((((int)uVar4 < *(int *)(lVar8 + 0x438) &&
            (*(char *)(*(longlong *)(lVar8 + 0x430) + uVar10) != '\0')) ||
           (*(char *)(lVar8 + 0x460) != '\0')) ||
          (((int)uVar4 < *(int *)(lVar8 + 0x470) &&
           (*(int *)(*(longlong *)(lVar8 + 0x468) + uVar10 * 4) == 2)))))) {
        lVar17 = (longlong)(int)uStack_90;
        uVar4 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
        if (uStack_90._4_4_ < uVar4) {
          local_f8 = lVar11;
          FUN_1471985ca(&local_98,uVar6 & 0xffffffff);
          lVar11 = local_f8;
        }
        *(longlong *)(local_98 + lVar17 * 8) = lVar8;
      }
      plVar9 = plVar9 + 3;
    } while (plVar9 != plVar14);
    if ((int)uStack_90 == 0) {
      uVar5 = 0;
    }
    else {
      local_68 = 0;
      uVar4 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar4 = DAT_14ca84e48;
      }
      local_78[0] = uVar4 + (uVar4 == 0);
      local_78[1] = 1;
      local_78[2] = 0x4129;
      plVar14 = (longlong *)(param_1 + 0x70);
      uVar10 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar6 = uVar10 + 0x150;
      local_108 = plVar14;
      local_d8 = lVar12;
      local_a8 = param_2;
      if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
        FUN_140023dd8(plVar14,0x160);
        uVar10 = *plVar14 + 0xfU & 0xfffffffffffffff0;
        uVar6 = uVar10 + 0x150;
      }
      local_f0 = param_1 + 0x188;
      *(ulonglong *)(param_1 + 0x70) = uVar6;
      FUN_1456bd266(uVar10,L"Hair.HasSimulationRunningBuffer",local_78,0);
      iVar3 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
        FUN_144737178(local_f0,iVar3);
      }
      plVar14 = local_108;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar10;
      *(int *)(uVar10 + 0x7c) = *(int *)(param_1 + 400) + -1;
      local_b0 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = local_b0 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_108,0x48);
        local_b0 = (undefined8 *)(*plVar14 + 7U & 0xfffffffffffffff8);
        puVar7 = local_b0 + 8;
      }
      local_100 = param_1 + 0x198;
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      local_b0[1] = *(undefined8 *)(uVar10 + 8);
      local_b0[2] = 0;
      *(undefined1 *)(local_b0 + 3) = 2;
      *(undefined8 *)((longlong)local_b0 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(local_b0 + 5) = 0;
      *local_b0 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(local_b0 + 6) = 0x1c;
      *(undefined1 *)((longlong)local_b0 + 0x32) = 0;
      local_b0[7] = uVar10;
      iVar3 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
      local_e0 = uVar10;
      if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
        FUN_1447568fc(local_100,iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = local_b0;
      *(int *)((longlong)local_b0 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      local_f8 = lVar11;
      FUN_1405bfba3(param_1,local_b0,0,2);
      local_e8 = (longlong)(int)uStack_90;
      if (local_e8 != 0) {
        local_c0 = local_98;
        local_d0 = param_1 + 0x98;
        local_c8 = param_3 + 0x13870;
        local_e8 = local_e8 << 3;
        lVar12 = 0;
        local_b8 = param_3;
        do {
          plVar9 = local_108;
          plVar14 = *(longlong **)(local_c0 + lVar12);
          local_a0 = *(longlong *)(local_a8 + 0x38c0);
          iVar3 = *(int *)((longlong)plVar14 + 0x48c);
          uVar4 = DAT_14ca84e48;
          if (3 < DAT_14ca84e48) {
            uVar4 = 4;
          }
          local_68 = 0;
          local_78[0] = uVar4 + (uVar4 == 0);
          local_78[1] = 1;
          local_78[2] = 0x4109;
          uVar10 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
          uVar6 = uVar10 + 0x150;
          if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
            FUN_140023dd8(local_108,0x160);
            uVar10 = *plVar9 + 0xfU & 0xfffffffffffffff0;
            uVar6 = uVar10 + 0x150;
          }
          *(ulonglong *)(param_1 + 0x70) = uVar6;
          FUN_1456bd266(uVar10,L"Hair.InvalidationPrintCounter",local_78,0);
          iVar1 = *(int *)(param_1 + 400);
          *(uint *)(param_1 + 400) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
            FUN_144737178(local_f0,iVar1);
          }
          plVar9 = local_108;
          *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 8) = uVar10;
          *(int *)(uVar10 + 0x7c) = *(int *)(param_1 + 400) + -1;
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar15 + 8;
          if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
            FUN_140023dd8(local_108,0x48);
            puVar15 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
            puVar7 = puVar15 + 8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar7;
          puVar15[1] = *(undefined8 *)(uVar10 + 8);
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 2;
          *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar15 + 5) = 0;
          *puVar15 = &PTR_FUN_14a1fb3e8;
          *(undefined2 *)(puVar15 + 6) = 0x1c;
          *(undefined1 *)((longlong)puVar15 + 0x32) = 0;
          puVar15[7] = uVar10;
          iVar1 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
            FUN_1447568fc(local_100,iVar1);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar15;
          *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          FUN_1405bfba3(param_1,puVar15,0,2);
          plVar9 = local_108;
          puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar7 = puVar16 + 0x10;
          if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
            FUN_140023dd8(local_108,0x90);
            puVar16 = (undefined8 *)(*plVar9 + 0xfU & 0xfffffffffffffff0);
            puVar7 = puVar16 + 0x10;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar7;
          *puVar16 = &PTR_FUN_14a22c728;
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[7] = 0;
          puVar16[8] = 0;
          puVar16[9] = 0;
          puVar16[10] = 0;
          puVar16[0xb] = 0;
          puVar16[0xc] = 0;
          *(undefined1 *)(puVar16 + 0xd) = 1;
          puVar16[0xe] = 0;
          puVar16[0xf] = 0;
          iVar1 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
            FUN_1448cfae8(local_d0,iVar1);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar16;
          *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(*plVar14 + 0x10);
          *(int *)((longlong)puVar16 + 0x14) = iVar3;
          *(float *)(puVar16 + 3) = DAT_14c760380 * DAT_14c760380;
          *(uint *)(puVar16 + 4) = (uint)(0 < DAT_14c9d7170);
          *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
          lVar11 = FUN_144aba046(&DAT_14ca63b10,param_1,4,0);
          plVar9 = local_108;
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
            FUN_140023dd8(local_108,0x50);
            puVar13 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 9;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar7;
          puVar13[1] = *(undefined8 *)(lVar11 + 8);
          puVar13[2] = 0;
          *(undefined1 *)(puVar13 + 3) = 3;
          *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
          *puVar13 = &PTR_FUN_14a1fb168;
          *(undefined1 *)(puVar13 + 5) = 0x1c;
          *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
          puVar13[7] = 0;
          puVar13[8] = lVar11;
          iVar1 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
            FUN_1447568fc(local_100,iVar1);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar13;
          *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar16[5] = puVar13;
          puVar16[6] = puVar13;
          puVar16[7] = plVar14[3];
          puVar16[8] = plVar14[6];
          puVar16[9] = *(undefined8 *)(local_a0 + 0x28);
          puVar16[10] = local_b0;
          puVar16[0xb] = puVar15;
          FUN_1472ea582(param_1,local_c8,puVar16 + 0xc);
          if (*(char *)(plVar14[1] + 0x80) == '\x01') {
            local_118 = (uint *)((ulonglong)local_118 & 0xffffffffffffff00);
            FUN_14716cfd3(local_78,param_1,plVar14[1] + 0x60,1);
            puVar16[5] = CONCAT44(local_78[3],local_78[2]);
            local_118 = (uint *)((ulonglong)local_118 & 0xffffffffffffff00);
            FUN_14716cfd3(local_78,param_1,plVar14[1] + 0x20,1);
            puVar16[6] = CONCAT44(local_78[3],local_78[2]);
            *(undefined4 *)((longlong)puVar16 + 0x1c) = 1;
          }
          uVar2 = *(undefined8 *)(local_b8 + 0x13818);
          FUN_145f2a994();
          FUN_1448e935e(uVar2,local_78,&DAT_14c9d9d38,0);
          FUN_145f2a994();
          local_80 = &DAT_100000001;
          local_118 = &local_84;
          local_84 = iVar3 + 0x3ffU >> 10;
          FUN_147193ea3(param_1,&local_85,local_78);
          lVar12 = lVar12 + 8;
        } while (local_e8 != lVar12);
      }
      uVar5 = FUN_14717e71a(local_d8);
      if ((longlong)*(int *)(local_f8 + 0x20f0) != 0) {
        lVar12 = *(longlong *)(local_f8 + 0x20e8);
        lVar11 = 0;
        do {
          if (*(char *)(lVar12 + 8 + lVar11) == '\0') {
            FUN_1401e3a19(param_1,*(undefined8 *)(lVar12 + lVar11),local_e0,4);
            *(undefined1 *)(lVar12 + 8 + lVar11) = 1;
            break;
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)*(int *)(local_f8 + 0x20f0) * 0x10 != lVar11);
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
LAB_142c6c26e:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 142c6caa1 FUN_142c6caa1 body=773 status=ok
// SIG undefined FUN_142c6caa1(void)

ulonglong FUN_142c6caa1(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 local_6d;
  undefined1 *local_6c;
  undefined4 local_64;
  int local_60 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  uVar7 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar7 = DAT_14ca84e48;
  }
  local_60[0] = uVar7 + (uVar7 == 0);
  local_60[1] = 1;
  local_60[2] = 0x4189;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar8 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar5 = uVar8 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(plVar1,0x160);
    uVar8 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar5 = uVar8 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bd266(uVar8,L"Hair.VisibilityIndirectArgBuffer",local_60,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar8;
  *(int *)(uVar8 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar10 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x40);
    puVar10 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar10 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar10 = &PTR_FUN_14a22c790;
  puVar10[3] = 0;
  puVar10[4] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar10;
  *(undefined4 *)(puVar10 + 2) = param_3;
  *(undefined4 *)((longlong)puVar10 + 0x14) = 1;
  puVar10[3] = param_4;
  cVar2 = *(char *)(uVar8 + 0x68);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1,0x48);
    puVar9 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar9[1] = *(undefined8 *)(uVar8 + 8);
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 2;
  *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar9 + 5) = 0;
  *puVar9 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar9 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar9 + 0x31) = 0;
  puVar9[7] = uVar8;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[4] = puVar9;
  uVar4 = *(undefined8 *)(param_2 + 0x13818);
  FUN_145e525da();
  FUN_1448e935e(uVar4,local_60,&DAT_14c9d8740,0);
  FUN_145e525da();
  local_78 = &local_6c;
  local_6c = &DAT_100000001;
  local_64 = 1;
  FUN_147194335(param_1,&local_6d,local_60,puVar10 + 2);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6cda7 FUN_142c6cda7 body=3971 status=ok
// SIG undefined FUN_142c6cda7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_142c6cda7(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
             undefined1 param_5,undefined1 param_6,longlong *param_7,undefined8 param_8,
             undefined8 param_9,longlong param_10,longlong param_11,undefined8 param_12,
             longlong param_13)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  byte bVar24;
  longlong lVar25;
  undefined1 auStack_1b8 [32];
  undefined1 **local_198;
  ulonglong local_190;
  ulonglong *local_188;
  ulonglong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined4 local_13c;
  int local_138;
  int local_134;
  undefined8 *local_130;
  undefined1 local_125;
  uint local_124;
  longlong local_120;
  ulonglong local_118;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined1 *local_10c;
  undefined4 local_104;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  ulonglong *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 *local_68;
  ulonglong local_60;
  
  lVar25 = param_13;
  lVar20 = param_11;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_10e = param_6;
  local_10f = param_5;
  local_120 = param_3;
  local_118 = param_4;
  if (param_10 == 0 || param_11 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1b8);
  }
  uVar13 = *(uint *)(param_11 + 100);
  local_124 = uVar13;
  local_125 = FUN_14732a8fa(*(undefined2 *)
                             (&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2));
  local_190 = CONCAT71(local_190._1_7_,local_125);
  cVar11 = *(char *)(lVar25 + 0x68);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar18 + 9;
  local_188 = puVar1;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(puVar1,0x50);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar18 + 9;
  }
  local_178 = (undefined8 *)(param_2 + 0x198);
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar18[1] = *(undefined8 *)(lVar25 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar18 + 5) = cVar11 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = lVar25;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_178,iVar2);
  }
  puVar1 = local_188;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[3] = 0;
  local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x10109);
  puStack_e0 = (undefined *)0x0;
  uVar12 = 0x14;
  if (DAT_14ca84e48 < 0x14) {
    uVar12 = DAT_14ca84e48;
  }
  uVar6 = DAT_14ca84e48;
  if (uVar13 < DAT_14ca84e48) {
    uVar6 = uVar13;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  local_f0 = (undefined8 *)CONCAT44(uVar6 + (uVar6 == 0),uVar12 + (uVar12 == 0));
  uVar22 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar22 + 0x150;
  local_130 = puVar18;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_188,0x160);
    uVar22 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar14 = uVar22 + 0x150;
  }
  local_180 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar22,L"Hair.CompactNodeData",&local_f0,0);
  iVar2 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
    FUN_144737178(local_180,iVar2);
  }
  puVar1 = local_188;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar22;
  *(int *)(uVar22 + 0x7c) = *(int *)(param_2 + 400) + -1;
  *param_1 = uVar22;
  uVar12 = (uint)((char)local_190 != '\x0e') * 4 + 4;
  if (DAT_14ca84e48 <= uVar12) {
    uVar12 = DAT_14ca84e48;
  }
  local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x4109);
  uVar6 = DAT_14ca84e48;
  if (*(uint *)(lVar20 + 100) < DAT_14ca84e48) {
    uVar6 = *(uint *)(lVar20 + 100);
  }
  puStack_e0 = (undefined *)0x0;
  local_f0 = (undefined8 *)CONCAT44(uVar6 + (uVar6 == 0),uVar12 + (uVar12 == 0));
  uVar22 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar22 + 0x150;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_188,0x160);
    uVar22 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar14 = uVar22 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar22,L"Hair.CompactNodeVelocity",&local_f0,0);
  iVar2 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar2 + 1U) {
    FUN_144737178(local_180,iVar2);
  }
  puVar1 = local_188;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar2 * 8) = uVar22;
  *(int *)(uVar22 + 0x7c) = *(int *)(param_2 + 400) + -1;
  bVar24 = 10;
  if (0 < DAT_14c76037c) {
    bVar24 = (DAT_14c873918 & 1) << 4 | 10;
  }
  param_1[1] = uVar22;
  uVar12 = 0x7fU - ((int)ROUND(-0.5 - (SQRT((float)uVar13) + SQRT((float)uVar13))) >> 1) &
           0xffffff80;
  local_190 = (ulonglong)uVar12;
  local_e8 = (undefined1 *)_DAT_14ca83a30;
  puStack_e0 = (undefined *)_DAT_14ca83a38;
  local_f0 = (undefined8 *)0x20009;
  local_c0._0_6_ = CONCAT24(0xff00,(uint)bVar24 << 0x18);
  local_c0 = (undefined8 **)CONCAT62(local_c0._2_6_,0x101);
  local_d8 = (int *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  uVar13 = DAT_14ca84e40;
  if ((int)uVar12 < (int)DAT_14ca84e40) {
    uVar13 = uVar12;
  }
  uVar12 = 1;
  if (1 < (int)uVar13) {
    uVar12 = uVar13;
  }
  local_d0 = (undefined1 *)((ulonglong)uVar12 << 0x20);
  local_c8 = (uint *)CONCAT44(0x10001,uVar12);
  uVar22 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar14 = uVar22 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_188,0x128);
    uVar22 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar14 = uVar22 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bbb8c(uVar22,L"Hair.LightSample",&local_f0,0);
  iVar2 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar2 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar2);
  }
  puVar1 = local_188;
  lVar20 = local_190 << 0x20;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar2 * 8) = uVar22;
  *(int *)(uVar22 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar23 + 0x24;
  local_180 = uVar22;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_188,0x130);
    puVar23 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar17 = puVar23 + 0x24;
  }
  local_190 = local_190 + lVar20;
  *local_188 = (ulonglong)puVar17;
  *puVar23 = &PTR_FUN_14a22c838;
  puVar23[3] = 0;
  lVar20 = 0x32;
  do {
    *(undefined1 (*) [16])((longlong)puVar23 + lVar20 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar23 + lVar20 + -2) = 0xffff0000;
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0xf2);
  *(undefined4 *)((longlong)puVar23 + 0xf4) = 0;
  *(undefined1 (*) [16])(puVar23 + 0x1c) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar23 + 0x1e) = 0;
  *(undefined4 *)(puVar23 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)puVar23 + 0xfc) = 0xffffffff;
  *(undefined4 *)(puVar23 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)puVar23 + 0x104) = 0xffffffff;
  *(undefined4 *)(puVar23 + 0x21) = 0;
  *(undefined2 *)((longlong)puVar23 + 0x10c) = 0;
  puVar23[0x22] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar2);
  }
  local_168 = puVar23 + 2;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar23;
  puVar23[2] = local_190;
  puVar23[3] = puVar18;
  uVar16 = *(undefined8 *)(param_4 + 0x13818);
  local_148 = param_2 + 0x98;
  FUN_145ed3a1a();
  FUN_1448e935e(uVar16,&local_f0,&DAT_14c9d7258,0);
  FUN_145ed3a1a();
  puVar9 = local_e8;
  local_170 = local_f0;
  uVar16 = *(undefined8 *)(param_4 + 0x13818);
  FUN_145e51b06();
  FUN_1448e935e(uVar16,&local_f0,&DAT_14c9d7380,bVar24 == 0x1a);
  FUN_145e51b06();
  puVar10 = local_e8;
  puVar18 = local_f0;
  puVar23[4] = local_180;
  puVar23[5] = 0;
  *(undefined4 *)(puVar23 + 6) = 0xffff0000;
  FUN_145e51d74();
  FUN_140069376(param_2);
  puVar1 = local_188;
  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar23 + 0x3d;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_188,0x1f0);
    puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar23 + 0x3d;
  }
  puVar7 = local_168;
  *local_188 = (ulonglong)puVar17;
  local_f0 = local_168;
  local_e8 = (undefined1 *)DAT_14c9da5b8;
  if (DAT_14c9da5b8 != 0) {
    LOCK();
    *(int *)(DAT_14c9da5b8 + 8) = *(int *)(DAT_14c9da5b8 + 8) + 1;
    UNLOCK();
  }
  puStack_e0 = &DAT_14c9da570;
  local_198 = (undefined1 **)CONCAT71(local_198._1_7_,2);
  FUN_140068f1a(puVar23,local_100,&local_f0,1);
  *puVar23 = &PTR_FUN_14a22c840;
  puVar23[0x37] = puVar7;
  puVar23[0x38] = local_170;
  puVar23[0x39] = puVar9;
  puVar23[0x3a] = puVar18;
  puVar23[0x3b] = puVar10;
  puVar23[0x3c] = local_190;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar23;
  *(int *)((longlong)puVar23 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar23);
  uVar8 = local_125;
  puVar1 = local_188;
  param_1[3] = local_180;
  uVar14 = param_1[1];
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar18 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
    FUN_140023dd8(local_188,0x50);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar18 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar17;
  puVar18[1] = *(undefined8 *)(uVar14 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar18 + 5) = uVar8;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = uVar14;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(local_178,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[2] = (ulonglong)puVar18;
  local_138 = -((int)ROUND(-0.5 - (SQRT((float)local_124) + SQRT((float)local_124))) >> 1);
  uVar3 = *(undefined4 *)(local_118 + 0x3090);
  local_13c = uVar3;
  local_134 = local_138;
  if ((longlong)(int)param_7[1] == 0) {
    local_190 = 0;
  }
  else {
    lVar20 = *param_7;
    lVar25 = (longlong)(int)param_7[1] * 0x78 + lVar20;
    local_190 = 0;
    do {
      iVar2 = *(int *)(lVar20 + 0x18);
      if ((longlong)iVar2 != 0) {
        lVar21 = *(longlong *)(lVar20 + 0x10);
        lVar19 = 0;
        do {
          lVar5 = *(longlong *)(lVar21 + lVar19);
          if (lVar5 != 0) {
            plVar15 = (longlong *)FUN_14485b2b4(*(undefined8 *)(lVar5 + 0xc0),uVar3);
            uVar16 = (**(code **)(*plVar15 + 0x3c0))(plVar15);
            if ((char)uVar16 != '\0') {
              local_190 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
              break;
            }
          }
          lVar19 = lVar19 + 0x28;
        } while ((longlong)iVar2 * 0x28 != lVar19);
      }
      lVar20 = lVar20 + 0x78;
    } while (lVar20 != lVar25);
  }
  local_e8 = &local_10f;
  puStack_e0 = &local_10e;
  local_d8 = &local_138;
  local_d0 = (undefined1 *)&param_9;
  local_c8 = &local_124;
  local_c0 = &local_130;
  local_b8 = &param_10;
  local_b0 = &param_11;
  local_a8 = (undefined1 *)&param_12;
  local_a0 = &stack0x00000070;
  local_90 = &local_125;
  local_88 = &local_118;
  local_80 = &local_120;
  local_78 = param_8;
  local_70 = param_7;
  local_68 = &local_13c;
  local_f0 = (undefined8 *)param_2;
  local_98 = param_1;
  if (((*(byte *)((longlong)&DAT_14ca814d0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_120 + 8) * 2) *
                 0x3c) & 0x20) == 0) && ((DAT_14ca84e26 & 1) == 0)) {
    if ((local_190 & 1) != 0) {
      FUN_142c762a8(&local_f0,local_180,1);
    }
    uVar16 = 2;
    uVar14 = 0;
  }
  else {
    uVar16 = 0;
    uVar14 = local_180;
  }
  FUN_142c762a8(&local_f0,uVar14,uVar16);
  cVar11 = FUN_14352174c(local_118);
  puVar1 = local_188;
  lVar20 = param_11;
  if ((byte)(cVar11 - 3U) < 0xb) {
    cVar11 = *(char *)(param_11 + 0x68);
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar18 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_188,0x50);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar18 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar17;
    puVar18[1] = *(undefined8 *)(lVar20 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 3;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *puVar18 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar18 + 5) = cVar11 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
    puVar18[7] = 0;
    puVar18[8] = lVar20;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(local_178,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    DAT_14ca4d32c = DAT_14ca4d32c + 0x800;
    DAT_14ca4d330 = DAT_14ca4d330 + 0x100;
    DAT_14ca4d100 = 1;
    if (*(char *)(local_118 + 0x13870) == '\x01') {
      local_190 = local_118;
      uVar16 = *(undefined8 *)(local_118 + 0x13818);
      FUN_145e6ec88();
      FUN_1448e935e(uVar16,local_100,&DAT_14c9d78c0,0);
      FUN_145e6ec88();
      if ((longlong)(int)param_7[1] != 0) {
        local_160 = local_190 + 0x13870;
        lVar20 = *param_7;
        local_158 = (longlong)(int)param_7[1] * 0x78 + lVar20;
        do {
          iVar2 = *(int *)(lVar20 + 0x18);
          if ((longlong)iVar2 != 0) {
            lVar25 = *(longlong *)(lVar20 + 0x10);
            lVar21 = 0;
            local_150 = lVar20;
            do {
              puVar1 = local_188;
              lVar19 = *(longlong *)(lVar25 + lVar21);
              if ((lVar19 != 0) && (*(int *)(lVar19 + 0xb0) != 0)) {
                lVar20 = *(longlong *)(lVar19 + 0xa8);
                if (*(longlong *)(lVar19 + 0xa8) == 0) {
                  lVar20 = lVar19;
                }
                local_180 = *(ulonglong *)(lVar20 + 0x40);
                puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar17 = puVar23 + 0x38;
                if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
                  FUN_140023dd8(local_188,0x1d0);
                  puVar23 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar17 = puVar23 + 0x38;
                }
                *(undefined8 **)(param_2 + 0x70) = puVar17;
                *puVar23 = &PTR_FUN_14a22c8d0;
                puVar23[3] = 0;
                puVar23[4] = 0;
                puVar23[0x2c] = 0;
                puVar23[0x2d] = 0;
                puVar23[0x2e] = 0;
                puVar23[0x2f] = 0;
                puVar23[0x30] = 0;
                puVar23[0x31] = 0;
                puVar23[0x32] = 0;
                *(undefined1 *)(puVar23 + 0x33) = 1;
                puVar23[0x34] = 0;
                *(undefined1 *)(puVar23 + 0x35) = 1;
                puVar23[0x36] = 0;
                puVar23[0x37] = 0;
                iVar4 = *(int *)(param_2 + 0xa0);
                *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
                if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
                  FUN_1448cfae8(local_148,iVar4);
                }
                local_178 = puVar23 + 0x2c;
                local_170 = puVar23 + 0x34;
                *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar23;
                local_168 = puVar23 + 2;
                *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(lVar25 + 0x10 + lVar21);
                puVar23[3] = param_10;
                puVar23[4] = puVar18;
                FUN_147184aaa();
                local_198 = (undefined1 **)local_178;
                FUN_147184ec0(param_2);
                lVar20 = FUN_1447e4f80();
                cVar11 = *(char *)(lVar20 + 0x41);
                if (*(char *)(lVar20 + 0x41) == '\x03') {
                  cVar11 = '\x02';
                }
                puVar23[0x32] = *(undefined8 *)(local_190 + 0x18);
                *(char *)(puVar23 + 0x33) = cVar11;
                FUN_1472ea582(param_2,local_160,local_170);
                local_10c = &DAT_100000001;
                local_104 = 1;
                local_198 = &local_10c;
                FUN_147194ded(param_2,&local_10d,local_100,local_168);
                lVar20 = local_150;
              }
              lVar21 = lVar21 + 0x28;
            } while ((longlong)iVar2 * 0x28 != lVar21);
          }
          lVar20 = lVar20 + 0x78;
        } while (lVar20 != local_158);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6dd2b FUN_142c6dd2b body=895 status=ok
// SIG undefined FUN_142c6dd2b(void)

void FUN_142c6dd2b(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9,longlong *param_10,longlong *param_11,longlong *param_12)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*param_7 != 0) && (*param_8 != 0)) && (*param_10 != 0)) && (*param_11 != 0)) {
    local_90 = param_3;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca97070) {
      FUN_144b3d300(&DAT_14ca97070);
      if (DAT_14ca97070 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar7 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar7 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar7 + 0x68))(plVar7);
        }
        _Init_thread_footer(&DAT_14ca97070);
      }
    }
    lVar5 = DAT_14ca97068;
    bVar11 = true;
    cVar2 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      cVar2 = '\x02';
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar8 = 0;
      }
      else if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar3 != DVar4);
        cVar2 = DAT_14ca96da8;
      }
      else {
        uVar8 = 1;
      }
      bVar11 = *(int *)(lVar5 + uVar8 * 4) != 0;
    }
    uVar9 = 0;
    uVar10 = 0;
    if (((bVar11) && (uVar10 = 0, cVar2 != '\0')) &&
       ((uVar10 = uVar9, *(char *)(param_2 + 0x3098) == '\x01' &&
        (((*(char *)(param_2 + 0x23e8) != '\x01' || (*(char *)(param_2 + 0x23ea) == '\x01')) &&
         (*param_12 == 0)))))) {
      local_88 = CONCAT44(*(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc),
                          *(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8));
      lVar5 = FUN_142c77a23(param_1);
      *param_12 = lVar5;
      uVar10 = 1;
    }
    cVar2 = FUN_14352174c(param_2);
    local_a0 = *param_11;
    if (cVar2 == '\x1a') {
      if (local_a0 == 0) {
        local_a0 = 0;
      }
      else {
        uVar6 = FUN_14472bf7a(param_1,local_a0 + 0x60,L"Hair.SceneDepthBeforeCompositionForDebug",0)
        ;
        *(undefined8 *)(param_2 + 0x11f50) = uVar6;
        local_80 = DAT_14c9a52a0;
        local_88 = DAT_14c9a5298;
        local_74 = DAT_14c9a52a0;
        local_68 = DAT_14c9a52a0;
        local_64 = 0;
        uStack_60 = 0;
        uStack_5c = 1;
        uStack_58 = 0;
        local_54 = 0x100000000;
        local_7c = DAT_14c967818;
        local_70 = DAT_14c967818;
        FUN_1400e8d41(param_1,*param_11,uVar6);
        local_a0 = *param_11;
      }
    }
    local_98 = *param_12;
    local_a8 = *param_10;
    local_b0 = *param_9;
    local_b8 = *param_8;
    local_c0 = *param_7;
    local_c8 = param_6;
    local_d0 = param_5;
    local_d8 = param_4;
    FUN_142c77b8e(param_1,param_2,local_90,uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6e0ab FUN_142c6e0ab body=223 status=ok
// SIG undefined FUN_142c6e0ab(void)

void FUN_142c6e0ab(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  
  lVar1 = *param_7;
  if (lVar1 != 0) {
    if ((*(int *)(param_3 + 8) != 0) && (*(longlong *)(param_3 + 0x38) != 0)) {
      FUN_142c77b8e(param_1,param_2,param_3,4,param_4,param_5,param_6,0,0,0,0,lVar1,0);
      lVar1 = *param_7;
    }
    FUN_142c77b8e(param_1,param_2,param_3,3,param_4,param_5,param_6,0,0,0,0,lVar1,0);
  }
  return;
}



// FUNCTION 142c6e18a FUN_142c6e18a body=319 status=ok
// SIG undefined FUN_142c6e18a(void)

void FUN_142c6e18a(undefined8 param_1,longlong param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  int local_70;
  undefined2 local_68;
  wchar_t *local_60;
  undefined8 local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar1 = (float)(*(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc)) /
          (float)(*(int *)(param_2 + 0x137cc) * 2);
  fVar2 = (float)(*(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8)) /
          (float)(*(int *)(param_2 + 0x137c8) * 2);
  *param_4 = fVar2;
  param_4[1] = fVar1;
  param_4[2] = 1.0 / fVar2;
  param_4[3] = 1.0 / fVar1;
  local_70 = *(int *)(param_2 + 0x3090);
  local_68 = *(undefined2 *)(&DAT_14ca85070 + (longlong)local_70 * 2);
  local_28 = *(undefined8 *)(param_2 + 0x30f8);
  local_78 = &local_28;
  local_20 = *(undefined8 *)(param_2 + 0x3100);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = param_6;
  local_50 = L"HZBHairFurthest";
  local_58 = param_5;
  local_60 = L"HZBHairClosest";
  local_40 = 0x15;
  FUN_14078ce09(0,param_3,0,0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6e2ca FUN_142c6e2ca body=2859 status=ok
// SIG undefined FUN_142c6e2ca(void)

void FUN_142c6e2ca(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  ulonglong *param_9)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined1 local_ca;
  char local_c9;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int iStack_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_55;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = *param_8;
  if (lVar5 != 0) {
    local_b0 = CONCAT71(local_b0._1_7_,*(byte *)(lVar5 + 0x24));
    local_c8 = param_2;
    if ((((*(byte *)(lVar5 + 0x24) & 4) == 0) && (*(int *)(param_3 + 8) != 0)) &&
       (*(longlong *)(param_3 + 0x38) != 0)) {
      plVar9 = (longlong *)(param_1 + 0x70);
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar12 + 0xc;
      if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
        FUN_140023dd8(plVar9,0x70);
        puVar12 = (undefined8 *)(*plVar9 + 0xfU & 0xfffffffffffffff0);
        puVar6 = puVar12 + 0xc;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar6;
      *puVar12 = &PTR_FUN_14a22cc08;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      *(undefined4 *)(puVar12 + 0xb) = 4;
      iVar11 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar11 + 1U;
      local_c0 = plVar9;
      if (*(uint *)(param_1 + 0xa4) < iVar11 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar11);
      }
      plVar9 = local_c0;
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar11 * 8) = puVar12;
      puVar12[2] = *(undefined8 *)(lVar5 + 0x84);
      puVar12[3] = *(undefined8 *)(param_3 + 0xc);
      puVar12[4] = *(undefined8 *)(local_c8 + 0x30f8);
      puVar12[5] = 0x300000008;
      puVar12[7] = *(undefined8 *)(param_3 + 0x58);
      puVar12[6] = *(undefined8 *)(param_3 + 0x30);
      puVar12[10] = *(undefined8 *)(param_3 + 0x70);
      *(undefined4 *)(puVar12 + 0xb) = 4;
      uVar1 = *(undefined1 *)(lVar5 + 0x94);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
        FUN_140023dd8(local_c0,0x50);
        puVar10 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 9;
      }
      local_c0 = puVar12 + 2;
      *(undefined8 **)(param_1 + 0x70) = puVar6;
      puVar10[1] = *(undefined8 *)(lVar5 + 8);
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar10 + 5) = 0;
      *puVar10 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar10 + 6) = uVar1;
      *(undefined1 *)(puVar10 + 7) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar10 + 0x35) = 0;
      puVar10[8] = lVar5;
      iVar11 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
        FUN_1447568fc(param_1 + 0x198,iVar11);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar10;
      *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar12[9] = puVar10;
      uVar3 = *(undefined8 *)(local_c8 + 0x13818);
      FUN_145e5159c();
      FUN_1448e935e(uVar3,&local_88,&DAT_14c9d6600,0);
      FUN_145e5159c();
      local_98 = (undefined4)local_88;
      uStack_94 = local_88._4_4_;
      uStack_90 = uStack_80;
      uStack_8c = uStack_7c;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      local_e8 = puVar12[10];
      local_e0 = &local_88;
      FUN_147197403(param_1,&local_99,&local_98,local_c0);
      if (local_88 != 0) {
        plVar9 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar9 = (longlong *)&local_68;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      lVar5 = *param_8;
    }
    local_c0 = *(longlong **)(lVar5 + 0x84);
    local_70 = DAT_14ca85098;
    uStack_80 = DAT_14ca85088;
    uStack_7c = DAT_14ca8508c;
    local_78 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_56 = 0;
    local_88 = 0x20000;
    local_55 = 0x39;
    local_5c = 0x10001;
    local_58 = 0x101;
    local_68 = 0;
    local_53 = 0xff;
    iStack_64 = DAT_14ca84e40;
    if ((int)local_c0 < DAT_14ca84e40) {
      iStack_64 = (int)local_c0;
    }
    if (iStack_64 < 2) {
      iStack_64 = 1;
    }
    iVar11 = (int)((ulonglong)local_c0 >> 0x20);
    local_60 = DAT_14ca84e40;
    if (iVar11 < DAT_14ca84e40) {
      local_60 = iVar11;
    }
    if (local_60 < 2) {
      local_60 = 1;
    }
    plVar9 = (longlong *)(param_1 + 0x70);
    uVar13 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar13 + 0x120;
    local_b8 = plVar9;
    if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
      FUN_140023dd8(plVar9,0x128);
      uVar13 = *plVar9 + 7U & 0xfffffffffffffff8;
      uVar4 = uVar13 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar4;
    FUN_1456bbb8c(uVar13,L"Hair.VelocityResolveMaskTexture",&local_88,0);
    iVar2 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar2 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar2);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar2 * 8) = uVar13;
    *(int *)(uVar13 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    *param_9 = uVar13;
    local_ca = FUN_14732a8fa(*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)(local_c8 + 0x3090) * 2));
    plVar9 = local_b8;
    local_c9 = *(char *)(*param_8 + 0x93);
    uVar8 = 2;
    if ((int)DAT_14c76035c < 2) {
      uVar8 = DAT_14c76035c;
    }
    local_a8 = 0xffffffff;
    if (-1 < (int)uVar8) {
      local_a8 = (ulonglong)uVar8;
    }
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar12 + 0x16;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(local_b8,0xc0);
      puVar12 = (undefined8 *)(*plVar9 + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar12 + 0x16;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    *puVar12 = &PTR_FUN_14a22ca18;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    *(undefined1 *)(puVar12 + 0xd) = 1;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    *(undefined4 *)(puVar12 + 0x14) = 4;
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar12;
    *(uint *)(puVar12 + 5) = (uint)((local_b0 & 4) == 0);
    lVar5 = FUN_1447e4f80();
    plVar9 = local_b8;
    cVar7 = '\x02';
    if (*(char *)(lVar5 + 0x41) != '\x03') {
      cVar7 = *(char *)(lVar5 + 0x41);
    }
    puVar12[0xc] = *(undefined8 *)(local_c8 + 0x18);
    *(char *)(puVar12 + 0xd) = cVar7;
    fVar16 = 1.0 / (float)(iVar11 * 2);
    iVar11 = 0x200;
    if (DAT_14c76028c < 0x200) {
      iVar11 = DAT_14c76028c;
    }
    iVar2 = 0;
    if (0 < iVar11) {
      iVar2 = iVar11;
    }
    fVar15 = 1.0 / (float)((int)local_c0 * 2);
    if (fVar16 <= fVar15) {
      fVar15 = fVar16;
    }
    *(float *)(puVar12 + 4) = (float)iVar2 * fVar15;
    fVar16 = DAT_14c9d70f0;
    if (1.0 <= DAT_14c9d70f0) {
      fVar16 = 1.0;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)((longlong)puVar12 + 0x24) = fVar16;
    puVar12[7] = *param_5;
    lVar5 = *param_6;
    cVar7 = *(char *)(lVar5 + 0x68);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(local_b8,0x50);
      puVar10 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
    }
    uVar4 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(lVar5 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 3;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *puVar10 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar10 + 5) = cVar7 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
    puVar10[7] = 0;
    puVar10[8] = lVar5;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      local_b0 = uVar4;
      FUN_1447568fc(uVar4,iVar11);
      uVar4 = local_b0;
    }
    plVar9 = local_b8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar12[9] = puVar10;
    lVar5 = *param_7;
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      local_b0 = uVar4;
      FUN_140023dd8(local_b8,0x50);
      puVar10 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
      uVar4 = local_b0;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(lVar5 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 3;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *puVar10 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar10 + 5) = local_ca;
    *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
    puVar10[7] = 0;
    puVar10[8] = lVar5;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(uVar4,iVar11);
    }
    plVar9 = local_b8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar12[8] = puVar10;
    puVar12[6] = *param_4;
    lVar5 = *param_8;
    uVar1 = *(undefined1 *)(lVar5 + 0x94);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(local_b8,0x50);
      puVar10 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(lVar5 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar10 + 5) = 0;
    *puVar10 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar10 + 6) = uVar1;
    *(undefined1 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x35) = 0;
    puVar10[8] = lVar5;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(uVar4,iVar11);
    }
    plVar9 = local_b8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar12[10] = puVar10;
    uVar13 = *param_9;
    uVar1 = *(undefined1 *)(uVar13 + 0x94);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(local_b8,0x50);
      puVar10 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(uVar13 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar10 + 5) = 0;
    *puVar10 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar10 + 6) = uVar1;
    *(undefined1 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x35) = 0;
    puVar10[8] = uVar13;
    iVar11 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar11 + 1U) {
      FUN_1447568fc(uVar4,iVar11);
    }
    bVar14 = local_c9 != '\x0e';
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar11 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar12[0xb] = puVar10;
    puVar12[3] = 0;
    puVar12[2] = local_c0;
    puVar12[0xe] = *(undefined8 *)(param_3 + 0xc);
    *(undefined4 *)(puVar12 + 0xf) = 8;
    puVar12[0x11] = *(undefined8 *)(param_3 + 0x58);
    puVar12[0x10] = *(undefined8 *)(param_3 + 0x18);
    puVar12[0x13] = *(undefined8 *)(param_3 + 0x70);
    *(undefined4 *)(puVar12 + 0x14) = 4;
    uVar3 = *(undefined8 *)(local_c8 + 0x13818);
    iVar11 = (int)local_a8;
    FUN_145f445c0();
    FUN_1448e935e(uVar3,&local_88,&DAT_14c9d79e8,iVar11 + (uint)bVar14 * 4 + 1);
    FUN_145f445c0();
    local_98 = (undefined4)local_88;
    uStack_94 = local_88._4_4_;
    uStack_90 = uStack_80;
    uStack_8c = uStack_7c;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_e8 = puVar12[0x13];
    local_e0 = &local_88;
    FUN_147195345(param_1,&local_99,&local_98,puVar12 + 2);
    if (local_88 != 0) {
      plVar9 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_68;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6edf6 FUN_142c6edf6 body=1003 status=ok
// SIG undefined FUN_142c6edf6(void)

ulonglong FUN_142c6edf6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  uint *local_88;
  longlong local_78;
  undefined1 local_6d;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *(uint *)(param_4 + 0x60);
  if (DAT_14ca84e48 <= *(uint *)(param_4 + 0x60)) {
    uVar5 = DAT_14ca84e48;
  }
  uStack_58 = 0x10109;
  local_60 = uVar5 + (uVar5 == 0);
  local_50 = 0;
  uVar5 = DAT_14ca84e48;
  if (*(uint *)(param_4 + 100) < DAT_14ca84e48) {
    uVar5 = *(uint *)(param_4 + 100);
  }
  iStack_5c = uVar5 + (uVar5 == 0);
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar9 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar6 = uVar9 + 0x150;
  local_78 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
    FUN_140023dd8(plVar1,0x160);
    uVar9 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar6 = uVar9 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar6;
  FUN_1456bd266(uVar9,L"Hair.CompactNodeData",&local_60,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar9;
  *(int *)(uVar9 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar1,0x40);
    puVar8 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar8 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14a22ca88;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar8;
  puVar8[2] = *(undefined8 *)(param_3 + 0x84);
  puVar8[3] = param_3;
  cVar2 = *(char *)(param_4 + 0x68);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar10 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar1,0x50);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar10[1] = *(undefined8 *)(param_4 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar10 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = param_4;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[4] = puVar10;
  cVar2 = *(char *)(uVar9 + 0x68);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar10 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar1,0x48);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar10[1] = *(undefined8 *)(uVar9 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 2;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar10 + 5) = 0;
  *puVar10 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar10 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar10 + 0x31) = 0;
  puVar10[7] = uVar9;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar8[5] = puVar10;
  uVar4 = *(undefined8 *)(local_78 + 0x13818);
  FUN_145e52070();
  FUN_1448e935e(uVar4,&local_60,&DAT_14c9d7798,0);
  FUN_145e52070();
  local_68 = *(int *)((longlong)puVar8 + 0x14) + 3U >> 2;
  local_6c = *(int *)(puVar8 + 2) + 7U >> 3;
  local_88 = &local_6c;
  local_64 = 1;
  FUN_147195dbf(param_1,&local_6d,&local_60,puVar8 + 2);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6f272 FUN_142c6f272 body=214 status=ok
// SIG undefined FUN_142c6f272(void)

void FUN_142c6f272(longlong param_1,int *param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | *(uint *)(param_3 + 0x284);
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
    FUN_147186148((longlong *)(param_1 + 0x10),iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x28);
  plVar1[2] = 0;
  plVar1[3] = 0;
  plVar1[4] = 0;
  *plVar1 = param_4;
  plVar1[1] = param_5;
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(int *)(plVar1 + 2) = iVar2;
  if (param_4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(longlong *)(param_4 + 0xa8);
    if (*(longlong *)(param_4 + 0xa8) == 0) {
      lVar4 = param_4;
    }
    uVar3 = *(undefined4 *)(lVar4 + 0x38);
  }
  *(undefined4 *)((longlong)plVar1 + 0x14) = uVar3;
  *(undefined4 *)(plVar1 + 3) = *(undefined4 *)(param_3 + 0x3f4);
  *(undefined4 *)((longlong)plVar1 + 0x1c) = *(undefined4 *)(param_3 + 0x284);
  plVar1[4] = param_3;
  if (*(char *)(param_3 + 0x408) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



// FUNCTION 142c6f348 FUN_142c6f348 body=453 status=ok
// SIG undefined FUN_142c6f348(void)

void FUN_142c6f348(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x28);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142c6f466:
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
LAB_142c6f4a3:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x28;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142c6f3a1;
LAB_142c6f396:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142c6f3a1:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x665) goto code_r0x000142c6f3cd;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 10 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142c6f423:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142c6f4a3;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142c6f466;
code_r0x000142c6f3cd:
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
      goto LAB_142c6f423;
    }
  }
  goto LAB_142c6f396;
}



// FUNCTION 142c6f50e FUN_142c6f50e body=449 status=ok
// SIG undefined FUN_142c6f50e(void)

void FUN_142c6f50e(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x78);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142c6f628:
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
LAB_142c6f665:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x78;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142c6f563;
LAB_142c6f558:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142c6f563:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x222) goto code_r0x000142c6f58f;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x1e + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142c6f5e5:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142c6f665;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142c6f628;
code_r0x000142c6f58f:
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
      goto LAB_142c6f5e5;
    }
  }
  goto LAB_142c6f558;
}



// FUNCTION 142c6f6d0 FUN_142c6f6d0 body=99 status=ok
// SIG undefined FUN_142c6f6d0(void)

void FUN_142c6f6d0(longlong *param_1)

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



// FUNCTION 142c6f734 FUN_142c6f734 body=99 status=ok
// SIG undefined FUN_142c6f734(void)

void FUN_142c6f734(longlong *param_1)

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



// FUNCTION 142c6f798 FUN_142c6f798 body=481 status=ok
// SIG undefined FUN_142c6f798(void)

void FUN_142c6f798(longlong param_1,ulonglong *param_2)

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
  FUN_1471865aa(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6f97a FUN_142c6f97a body=232 status=ok
// SIG undefined FUN_142c6f97a(void)

void FUN_142c6f97a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c6fa62 FUN_142c6fa62 body=81 status=ok
// SIG undefined FUN_142c6fa62(void)

void FUN_142c6fa62(undefined8 param_1,longlong *param_2)

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
  FUN_14718664d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c6fab4 FUN_142c6fab4 body=31 status=ok
// SIG undefined FUN_142c6fab4(void)

undefined8 FUN_142c6fab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c6faec FUN_142c6faec body=481 status=ok
// SIG undefined FUN_142c6faec(void)

void FUN_142c6faec(longlong param_1,ulonglong *param_2)

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
  FUN_147187be8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c6fcce FUN_142c6fcce body=232 status=ok
// SIG undefined FUN_142c6fcce(void)

void FUN_142c6fcce(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c6fdb6 FUN_142c6fdb6 body=81 status=ok
// SIG undefined FUN_142c6fdb6(void)

void FUN_142c6fdb6(undefined8 param_1,longlong *param_2)

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
  FUN_147187c8b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c6fe20 FUN_142c6fe20 body=38 status=ok
// SIG undefined FUN_142c6fe20(void)

undefined8 FUN_142c6fe20(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c6fe46 FUN_142c6fe46 body=1587 status=ok
// SIG undefined FUN_142c6fe46(void)

void FUN_142c6fe46(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
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
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_148,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar6,(longlong)(int)local_148);
  }
  puVar12[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar12 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_f8,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar12 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  local_188 = *(undefined8 *)(lVar7 + 0x10);
  uStack_180 = *(undefined8 *)(lVar7 + 0x18);
  local_178 = *(undefined4 *)(lVar7 + 0x20);
  uStack_174 = *(undefined4 *)(lVar7 + 0x24);
  uStack_170 = *(undefined4 *)(lVar7 + 0x28);
  uStack_16c = *(undefined4 *)(lVar7 + 0x2c);
  local_168 = *(undefined4 *)(lVar7 + 0x30);
  uStack_164 = *(undefined4 *)(lVar7 + 0x34);
  uStack_160 = *(undefined4 *)(lVar7 + 0x38);
  uStack_15c = *(undefined4 *)(lVar7 + 0x3c);
  lVar7 = 0;
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
  local_128 = DAT_14c9d57e8;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar11 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar9,lVar11,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar9 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  local_100 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x18)) * 5;
  local_148 = lVar9;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar6 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar7;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar9 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  uVar8 = FUN_145a1e9b2();
  local_198 = &local_188;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c0),uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar9 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar7,lVar11,1);
    }
  }
  FUN_145e82574();
  local_198 = (undefined8 *)uVar8;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9da0a8);
  iVar2 = *(int *)(param_1 + 0x1ec);
  iVar3 = *(int *)(param_1 + 0x1e8);
  iVar4 = *(int *)(param_1 + 0x1e4);
  iVar5 = *(int *)(param_1 + 0x1e0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
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
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  bVar1 = *(byte *)(param_1 + 0x1f0);
  uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x30) + 0x10);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e78c8;
  puVar12[2] = uVar8;
  *(uint *)(puVar12 + 3) = (uint)bVar1 << 4;
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c70492 FUN_142c70492 body=481 status=ok
// SIG undefined FUN_142c70492(void)

void FUN_142c70492(longlong param_1,ulonglong *param_2)

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
  FUN_1471885f4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c70674 FUN_142c70674 body=232 status=ok
// SIG undefined FUN_142c70674(void)

void FUN_142c70674(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c7075c FUN_142c7075c body=81 status=ok
// SIG undefined FUN_142c7075c(void)

void FUN_142c7075c(undefined8 param_1,longlong *param_2)

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
  FUN_147188697(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c707de FUN_142c707de body=450 status=ok
// SIG undefined FUN_142c707de(void)

void FUN_142c707de(longlong param_1,ulonglong *param_2)

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
  FUN_14718a272(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c709a1 FUN_142c709a1 body=81 status=ok
// SIG undefined FUN_142c709a1(void)

void FUN_142c709a1(undefined8 param_1,longlong *param_2)

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
  FUN_14718a36d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c709f2 FUN_142c709f2 body=229 status=ok
// SIG undefined FUN_142c709f2(void)

void FUN_142c709f2(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9da240,param_3);
  return;
}



// FUNCTION 142c70ad8 FUN_142c70ad8 body=450 status=ok
// SIG undefined FUN_142c70ad8(void)

void FUN_142c70ad8(longlong param_1,ulonglong *param_2)

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
  FUN_14718a8ea(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c70c9b FUN_142c70c9b body=81 status=ok
// SIG undefined FUN_142c70c9b(void)

void FUN_142c70c9b(undefined8 param_1,longlong *param_2)

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
  FUN_14718a9e5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c70cec FUN_142c70cec body=229 status=ok
// SIG undefined FUN_142c70cec(void)

void FUN_142c70cec(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9da2c8,param_3);
  return;
}



// FUNCTION 142c70dd2 FUN_142c70dd2 body=38 status=ok
// SIG undefined FUN_142c70dd2(void)

undefined8 FUN_142c70dd2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c70df8 FUN_142c70df8 body=1451 status=ok
// SIG undefined FUN_142c70df8(void)

void FUN_142c70df8(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
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
  FUN_144b0e33a(param_2);
  if ((ulonglong)*(uint *)(param_1 + 0x1f8) < 4) {
    puVar5 = (undefined8 *)(&PTR_DAT_14a22d188)[*(uint *)(param_1 + 0x1f8)];
  }
  else {
    puVar5 = &DAT_14c9d9e08;
  }
  local_128 = *puVar5;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar10 = *(int *)(param_1 + 0x1e8);
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar4;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145f2a0fe();
  local_1b8 = uVar3;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9da3d8);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
  local_198 = (float)iVar4;
  iVar10 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0);
  local_1a0 = (float)iVar10;
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_188 = *(undefined8 *)(param_1 + 0x1f0);
  local_190 = CONCAT44(iVar4,iVar10);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c713a4 FUN_142c713a4 body=38 status=ok
// SIG undefined FUN_142c713a4(void)

undefined8 FUN_142c713a4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c713ca FUN_142c713ca body=1451 status=ok
// SIG undefined FUN_142c713ca(void)

void FUN_142c713ca(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
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
  FUN_144b0e33a(param_2);
  if ((ulonglong)*(uint *)(param_1 + 0x1f8) < 4) {
    puVar5 = (undefined8 *)(&PTR_DAT_14a22d188)[*(uint *)(param_1 + 0x1f8)];
  }
  else {
    puVar5 = &DAT_14c9d9e08;
  }
  local_128 = *puVar5;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  local_100 = 0;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar10 = *(int *)(param_1 + 0x1e8);
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar2;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar1;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar10;
  *(float *)(puVar11 + 4) = (float)iVar4;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145eb5db4();
  local_1b8 = uVar3;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9da350);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
  local_198 = (float)iVar4;
  iVar10 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0);
  local_1a0 = (float)iVar10;
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_188 = *(undefined8 *)(param_1 + 0x1f0);
  local_190 = CONCAT44(iVar4,iVar10);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_198);
  FUN_140094833(param_2,0,0);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c71982 FUN_142c71982 body=481 status=ok
// SIG undefined FUN_142c71982(void)

void FUN_142c71982(longlong param_1,ulonglong *param_2)

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
  FUN_14718b09a(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c71b64 FUN_142c71b64 body=232 status=ok
// SIG undefined FUN_142c71b64(void)

void FUN_142c71b64(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c71c4c FUN_142c71c4c body=81 status=ok
// SIG undefined FUN_142c71c4c(void)

void FUN_142c71c4c(undefined8 param_1,longlong *param_2)

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
  FUN_14718b13d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c71dee FUN_142c71dee body=481 status=ok
// SIG undefined FUN_142c71dee(void)

void FUN_142c71dee(longlong param_1,ulonglong *param_2)

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
  FUN_147190b4e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c71fd0 FUN_142c71fd0 body=232 status=ok
// SIG undefined FUN_142c71fd0(void)

void FUN_142c71fd0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c720b8 FUN_142c720b8 body=81 status=ok
// SIG undefined FUN_142c720b8(void)

void FUN_142c720b8(undefined8 param_1,longlong *param_2)

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
  FUN_147190bf1(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c7210a FUN_142c7210a body=481 status=ok
// SIG undefined FUN_142c7210a(void)

void FUN_142c7210a(longlong param_1,ulonglong *param_2)

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
  FUN_147190f2e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c722ec FUN_142c722ec body=232 status=ok
// SIG undefined FUN_142c722ec(void)

void FUN_142c722ec(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c723d4 FUN_142c723d4 body=81 status=ok
// SIG undefined FUN_142c723d4(void)

void FUN_142c723d4(undefined8 param_1,longlong *param_2)

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
  FUN_147190fd1(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c72426 FUN_142c72426 body=38 status=ok
// SIG undefined FUN_142c72426(void)

undefined8 FUN_142c72426(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c7244c FUN_142c7244c body=1696 status=ok
// SIG undefined FUN_142c7244c(void)

void FUN_142c7244c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_188 [32];
  longlong local_168;
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
  puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar14 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar14;
  param_2[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_FUN_14a1fb978;
  puVar14[3] = 0;
  *(int *)(puVar14 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar14 + 0x24) = 8;
  }
  else {
    puVar8 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar8 = uStack_150;
    }
    FUN_1446fe144(puVar14 + 2,(int)local_148,0);
    puVar11 = (undefined8 *)puVar14[3];
    if ((undefined8 *)puVar14[3] == (undefined8 *)0x0) {
      puVar11 = puVar14 + 2;
    }
    memcpy(puVar11,puVar8,(longlong)(int)local_148);
  }
  puVar14[0xd] = 0;
  puVar8 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar14 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar14 + 0x74) = 8;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = &uStack_140;
    }
    FUN_1446fe1b8(puVar14 + 5,iStack_f8,0);
    puVar11 = (undefined8 *)puVar14[0xd];
    if ((undefined8 *)puVar14[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar14 + 5;
    }
    memcpy(puVar11,puVar8,(longlong)iStack_f8 << 3);
    puVar8 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar14 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar14 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar14 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar14 + 0x84) = (undefined4)uStack_e4;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar8);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = 0;
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
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9d9e80;
  local_158 = DAT_14ca94de0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar12 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar10,lVar12,1);
    }
  }
  uStack_150 = (undefined8 *)lVar9;
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar10 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar12 * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar9,lVar12,1);
    }
  }
  local_100 = 0;
  local_148 = lVar10;
  lVar9 = FUN_140028f18(param_2);
  if ((lVar9 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 4;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x28);
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar14 + 4;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar14;
    param_2[6] = (ulonglong)(puVar14 + 1);
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_14a37d348;
    puVar14[2] = lVar9;
    *(undefined4 *)(puVar14 + 3) = 0;
    *(undefined1 *)((longlong)puVar14 + 0x1c) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar10 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar12 * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar9,lVar12,1);
    }
  }
  FUN_145ea574a();
  local_168 = uVar6;
  FUN_1449cc26b(param_2,lVar10,*(undefined8 *)(param_1 + 0x1c0),&DAT_14c9db1c8);
  lVar9 = *(longlong *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 8);
    lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar13 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar10,lVar13,1);
    }
  }
  FUN_145e48248();
  local_168 = lVar9 + 0x1f0;
  FUN_1449cc26b(param_2,lVar12,*(undefined8 *)(param_1 + 0x1d8),&DAT_14c9db250);
  iVar1 = *(int *)(param_1 + 500);
  iVar2 = *(int *)(param_1 + 0x1f0);
  iVar3 = *(int *)(param_1 + 0x1ec);
  iVar4 = *(int *)(param_1 + 0x1e8);
  puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar14 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar14;
  param_2[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar14 + 2) = (float)iVar4;
  *(float *)((longlong)puVar14 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar14 + 3) = 0;
  *(float *)((longlong)puVar14 + 0x1c) = (float)iVar2;
  *(float *)(puVar14 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar14 + 0x24) = 0x3f800000;
  puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar14 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar14;
  param_2[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar14 + 2) = 0;
  puVar14[3] = 0;
  *(undefined4 *)(puVar14 + 4) = 0;
  uVar6 = DAT_14ca8c128;
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x10);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 5;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x30);
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar14 + 5;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar14;
    param_2[6] = (ulonglong)(puVar14 + 1);
    puVar14[1] = 0;
    *puVar14 = &PTR_FUN_14a20cb88;
    puVar14[2] = uVar6;
    puVar14[3] = uVar7;
    puVar14[4] = 0xffffffff00000000;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x200);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 6;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x38);
      puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar14 + 6;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar14;
    param_2[6] = (ulonglong)(puVar14 + 1);
    puVar14[1] = 0;
    *puVar14 = &PTR_FUN_14a1fb5b0;
    puVar14[2] = uVar6;
    *(undefined4 *)(puVar14 + 3) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
    *(undefined4 *)(puVar14 + 4) = 6;
    *(undefined4 *)((longlong)puVar14 + 0x24) = 0;
    *(undefined4 *)(puVar14 + 5) = 2;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar5;
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c72afa FUN_142c72afa body=481 status=ok
// SIG undefined FUN_142c72afa(void)

void FUN_142c72afa(longlong param_1,ulonglong *param_2)

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
  FUN_147191632(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c72cdc FUN_142c72cdc body=232 status=ok
// SIG undefined FUN_142c72cdc(void)

void FUN_142c72cdc(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c72dc4 FUN_142c72dc4 body=81 status=ok
// SIG undefined FUN_142c72dc4(void)

void FUN_142c72dc4(undefined8 param_1,longlong *param_2)

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
  FUN_1471916d5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c72e16 FUN_142c72e16 body=481 status=ok
// SIG undefined FUN_142c72e16(void)

void FUN_142c72e16(longlong param_1,ulonglong *param_2)

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
  FUN_147191a12(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c72ff8 FUN_142c72ff8 body=232 status=ok
// SIG undefined FUN_142c72ff8(void)

void FUN_142c72ff8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c730e0 FUN_142c730e0 body=81 status=ok
// SIG undefined FUN_142c730e0(void)

void FUN_142c730e0(undefined8 param_1,longlong *param_2)

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
  FUN_147191ab5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c73132 FUN_142c73132 body=481 status=ok
// SIG undefined FUN_142c73132(void)

void FUN_142c73132(longlong param_1,ulonglong *param_2)

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
  FUN_147191df2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c73314 FUN_142c73314 body=232 status=ok
// SIG undefined FUN_142c73314(void)

void FUN_142c73314(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c733fc FUN_142c733fc body=81 status=ok
// SIG undefined FUN_142c733fc(void)

void FUN_142c733fc(undefined8 param_1,longlong *param_2)

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
  FUN_147191e95(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c7344e FUN_142c7344e body=481 status=ok
// SIG undefined FUN_142c7344e(void)

void FUN_142c7344e(longlong param_1,ulonglong *param_2)

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
  FUN_1471921d2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c73630 FUN_142c73630 body=232 status=ok
// SIG undefined FUN_142c73630(void)

void FUN_142c73630(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c73718 FUN_142c73718 body=81 status=ok
// SIG undefined FUN_142c73718(void)

void FUN_142c73718(undefined8 param_1,longlong *param_2)

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
  FUN_147192275(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c7376a FUN_142c7376a body=481 status=ok
// SIG undefined FUN_142c7376a(void)

void FUN_142c7376a(longlong param_1,ulonglong *param_2)

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
  FUN_1471925b2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c7394c FUN_142c7394c body=232 status=ok
// SIG undefined FUN_142c7394c(void)

void FUN_142c7394c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c73a34 FUN_142c73a34 body=81 status=ok
// SIG undefined FUN_142c73a34(void)

void FUN_142c73a34(undefined8 param_1,longlong *param_2)

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
  FUN_147192655(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c73a86 FUN_142c73a86 body=481 status=ok
// SIG undefined FUN_142c73a86(void)

void FUN_142c73a86(longlong param_1,ulonglong *param_2)

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
  FUN_147192992(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c73c68 FUN_142c73c68 body=232 status=ok
// SIG undefined FUN_142c73c68(void)

void FUN_142c73c68(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c73d50 FUN_142c73d50 body=81 status=ok
// SIG undefined FUN_142c73d50(void)

void FUN_142c73d50(undefined8 param_1,longlong *param_2)

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
  FUN_147192a35(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c73da2 FUN_142c73da2 body=450 status=ok
// SIG undefined FUN_142c73da2(void)

void FUN_142c73da2(longlong param_1,ulonglong *param_2)

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
  FUN_147192fe0(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c73f65 FUN_142c73f65 body=81 status=ok
// SIG undefined FUN_142c73f65(void)

void FUN_142c73f65(undefined8 param_1,longlong *param_2)

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
  FUN_1471930db(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c73fb6 FUN_142c73fb6 body=229 status=ok
// SIG undefined FUN_142c73fb6(void)

void FUN_142c73fb6(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9daae0,param_3);
  return;
}



// FUNCTION 142c7409b FUN_142c7409b body=1418 status=ok
// SIG undefined FUN_142c7409b(void)

void FUN_142c7409b(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  uint param_5,longlong *param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  ulonglong *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  char cVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined **local_110;
  ulonglong *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d1;
  undefined **local_d0;
  longlong local_c8;
  undefined *local_c0;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_5 < 4) && (param_5 != 2)) {
    lVar9 = param_3[0x622];
    local_138 = (undefined8 *)(lVar9 + 0x12d8);
    FUN_147180d50(param_3,0,lVar9 + 0x12c0,lVar9 + 0x12d4);
    FUN_1401ee234(&local_d0,param_3[0x622],1,1);
    lVar9 = FUN_1447e4f80();
    cVar15 = '\x02';
    if (*(char *)(lVar9 + 0x41) != '\x03') {
      cVar15 = *(char *)(lVar9 + 0x41);
    }
    *param_6 = (longlong)local_d0;
    *(char *)(param_6 + 1) = cVar15;
    if (local_d0 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = local_d0 + 1;
      puVar8 = *ppuVar1;
      *(uint *)ppuVar1 = *(uint *)ppuVar1 - 1;
      UNLOCK();
      if (((ulonglong)puVar8 & 0x3fffffff) == 1) {
        ppuVar1 = local_d0 + 1;
        LOCK();
        uVar3 = *(uint *)ppuVar1;
        *(uint *)ppuVar1 = *(uint *)ppuVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)local_d0 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = (longlong)local_d0;
          plVar14 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar20 = plVar14 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar20) {
                plVar14 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar20 = plVar11 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar20) {
                plVar11 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
  }
  else {
    lVar9 = FUN_1447e4f80();
    cVar15 = '\x02';
    if (*(char *)(lVar9 + 0x41) != '\x03') {
      cVar15 = *(char *)(lVar9 + 0x41);
    }
    *param_6 = param_3[3];
    *(char *)(param_6 + 1) = cVar15;
  }
  local_e8 = param_3[0x61f];
  local_f0 = param_3[0x620];
  puVar2 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar16 + 0x32;
  if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
    FUN_140023dd8(puVar2,0x1a0);
    puVar16 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar12 = puVar16 + 0x32;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar12;
  *puVar16 = &PTR_FUN_14a22c5b8;
  local_110 = (undefined **)(puVar16 + 2);
  local_108 = puVar2;
  FUN_147193252();
  plVar14 = (longlong *)(param_1 + 0x98);
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(plVar14,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar16;
  memcpy(local_110,param_6,0x180);
  puVar2 = local_108;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar18 + 0x44;
  if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
    FUN_140023dd8(local_108,0x230);
    puVar18 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar12 = puVar18 + 0x44;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar12;
  *puVar18 = &PTR_FUN_14a22d010;
  local_f8 = puVar18 + 2;
  FUN_14008c534(local_f8,param_3,param_7,0);
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(plVar14,iVar5);
  }
  *(undefined8 **)(*plVar14 + (longlong)iVar5 * 8) = puVar18;
  local_130 = puVar18 + 0x3d;
  local_138 = param_3;
  local_100 = param_3;
  local_e0 = param_2;
  FUN_14025f50e(&local_d0,L"HairVisibility",param_2,*(undefined4 *)(param_2 + 8));
  local_d0 = &PTR_FUN_14a2291c0;
  local_90 = param_5;
  local_78 = 0x11;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_88 = *(undefined8 *)(&PTR_DAT_14a22d1a8)[(int)param_5];
  local_80 = *(undefined8 *)(&PTR_DAT_14a22d1c8)[(int)param_5];
  if ((longlong)(int)param_4[1] != 0) {
    lVar9 = *param_4;
    lVar19 = (longlong)(int)param_4[1] * 0x78 + lVar9;
    do {
      iVar5 = *(int *)(lVar9 + 0x18);
      if ((longlong)iVar5 != 0) {
        lVar6 = *(longlong *)(lVar9 + 0x10);
        lVar17 = 0;
        do {
          lVar7 = *(longlong *)(lVar6 + lVar17);
          if (lVar7 != 0) {
            local_120 = *(undefined4 *)(*(longlong *)(lVar6 + 0x20 + lVar17) + 0x4a0);
            lVar13 = *(longlong *)(lVar7 + 0xa8);
            if (*(longlong *)(lVar7 + 0xa8) == 0) {
              lVar13 = lVar7;
            }
            local_118 = *(undefined1 *)(*(longlong *)(*(longlong *)(lVar13 + 0x40) + 8) + 0x80);
            local_128 = *(undefined4 *)(lVar6 + 0x10 + lVar17);
            local_130 = (undefined8 *)CONCAT44(local_130._4_4_,*(undefined4 *)(lVar9 + 0x68));
            local_138 = (undefined8 *)CONCAT44(local_138._4_4_,0xffffffff);
            FUN_1471826c4(&local_d0,lVar7,0xffffffffffffffff,*(undefined8 *)(lVar6 + 8 + lVar17));
          }
          lVar17 = lVar17 + 0x28;
        } while ((longlong)iVar5 * 0x28 != lVar17);
      }
      lVar9 = lVar9 + 0x78;
    } while (lVar9 != lVar19);
  }
  puVar12 = local_f8;
  if (local_e0 != 0) {
    local_138 = puVar16 + 4;
    FUN_1401dddf8(local_f8,param_1,local_100,local_e0 + 0x3f08);
  }
  puVar16[4] = 0;
  *(undefined4 *)(puVar16 + 5) = 4;
  FUN_147193314();
  FUN_140069376(param_1);
  puVar2 = local_108;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar18 + 0x3b;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(local_108,0x1e0);
    puVar18 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar18 + 0x3b;
  }
  *puVar2 = (ulonglong)puVar16;
  local_d0 = local_110;
  local_c8 = DAT_14c9db5c8;
  if (DAT_14c9db5c8 != 0) {
    LOCK();
    *(int *)(DAT_14c9db5c8 + 8) = *(int *)(DAT_14c9db5c8 + 8) + 1;
    UNLOCK();
  }
  local_c0 = &DAT_14c9db580;
  local_138 = (undefined8 *)CONCAT71(local_138._1_7_,2);
  FUN_140068f1a(puVar18,&local_d1,&local_d0,1);
  *puVar18 = &PTR_FUN_14a22c5c0;
  puVar18[0x37] = puVar12;
  puVar18[0x38] = local_110;
  puVar18[0x39] = local_e8;
  puVar18[0x3a] = local_f0;
  iVar5 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar5 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar5 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar18);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142c74626 FUN_142c74626 body=38 status=ok
// SIG undefined FUN_142c74626(void)

undefined8 FUN_142c74626(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c7464c FUN_142c7464c body=632 status=ok
// SIG undefined FUN_142c7464c(void)

void FUN_142c7464c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar6 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar6 = local_b8;
    }
    FUN_1446fe144(puVar7 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 2;
    }
    memcpy(puVar5,puVar6,(longlong)local_b0);
  }
  puVar7[0xd] = 0;
  *(int *)(puVar7 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = local_a8;
    }
    FUN_1446fe1b8(puVar7 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 5;
    }
    memcpy(puVar5,puVar6,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar7 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1d4);
  iVar2 = *(int *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1cc);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar7 + 2) = (float)iVar3;
  *(float *)((longlong)puVar7 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(float *)((longlong)puVar7 + 0x1c) = (float)iVar2;
  *(float *)(puVar7 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
  FUN_141781cae(*(undefined8 *)(param_1 + 0x1b8),param_2,*(longlong *)(param_1 + 0x1c0) + 0x10);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c748d2 FUN_142c748d2 body=38 status=ok
// SIG undefined FUN_142c748d2(void)

undefined8 FUN_142c748d2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c748f8 FUN_142c748f8 body=1581 status=ok
// SIG undefined FUN_142c748f8(void)

void FUN_142c748f8(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x1b8);
  local_188 = *(undefined8 *)(lVar6 + 0x20);
  uStack_180 = *(undefined8 *)(lVar6 + 0x28);
  local_178 = *(undefined4 *)(lVar6 + 0x30);
  uStack_174 = *(undefined4 *)(lVar6 + 0x34);
  uStack_170 = *(undefined4 *)(lVar6 + 0x38);
  uStack_16c = *(undefined4 *)(lVar6 + 0x3c);
  local_168 = *(undefined4 *)(lVar6 + 0x40);
  uStack_164 = *(undefined4 *)(lVar6 + 0x44);
  uStack_160 = *(undefined4 *)(lVar6 + 0x48);
  uStack_15c = *(undefined4 *)(lVar6 + 0x4c);
  lVar6 = 0;
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
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0c60;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  local_100 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x28)) * 5;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  FUN_145f684d8();
  local_198 = (undefined8 *)uVar8;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9dab68);
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
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
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  uVar8 = FUN_145a1e9b2();
  local_198 = &local_188;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1c0),uVar8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = 0;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x40) + 0x10);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e78c8;
  puVar11[2] = uVar8;
  *(undefined4 *)(puVar11 + 3) = 0;
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c74f26 FUN_142c74f26 body=1018 status=ok
// SIG undefined FUN_142c74f26(void)

void FUN_142c74f26(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,
                  longlong param_5,longlong *param_6)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar12 + 0x2a;
  local_68 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x160);
    puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar12 + 0x2a;
  }
  *puVar1 = (ulonglong)puVar9;
  *puVar12 = &PTR_FUN_14a22c6a0;
  *(undefined1 (*) [16])(puVar12 + 7) = (undefined1  [16])0x0;
  *(undefined4 *)(puVar12 + 9) = 4;
  lVar8 = 0x62;
  do {
    *(undefined1 (*) [16])((longlong)puVar12 + lVar8 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar12 + lVar8 + -2) = 0xffff0000;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x122);
  *(undefined4 *)((longlong)puVar12 + 0x124) = 0;
  *(undefined1 (*) [16])(puVar12 + 0x22) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar12 + 0x24) = 0;
  *(undefined4 *)(puVar12 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 300) = 0xffffffff;
  *(undefined4 *)(puVar12 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x134) = 0xffffffff;
  *(undefined4 *)(puVar12 + 0x27) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x13c) = 0;
  puVar12[0x28] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar12;
  *(uint *)(puVar12 + 2) = param_4;
  *(float *)((longlong)puVar12 + 0x14) = (float)param_4;
  bVar2 = *(byte *)(param_5 + 0x14);
  uVar5 = *(undefined8 *)(param_3 + 0x30f8);
  iVar3 = *(int *)(param_3 + 0x3104);
  iVar4 = *(int *)(param_3 + 0x3100);
  uVar6 = *(undefined8 *)(param_5 + 0x68);
  uVar11 = 0;
  if (*(longlong *)(param_5 + 0x38) != 0) {
    uVar11 = *(undefined8 *)(param_5 + 0x18);
  }
  local_70 = puVar12 + 2;
  if (*(int *)(param_5 + 8) == 0) {
    uVar11 = 0;
  }
  puVar12[4] = uVar5;
  *(uint *)(puVar12 + 5) = (uint)bVar2;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
  *(float *)(puVar12 + 6) = 1.0 / (float)(iVar4 - (int)uVar5);
  *(float *)((longlong)puVar12 + 0x34) = 1.0 / (float)(iVar3 - (int)((ulonglong)uVar5 >> 0x20));
  puVar12[7] = uVar11;
  puVar12[8] = uVar6;
  *(undefined4 *)(puVar12 + 9) = 4;
  puVar12[10] = *param_6;
  puVar12[0xb] = 0;
  *(undefined4 *)(puVar12 + 0xc) = 0xffff0000;
  cVar10 = (*(char *)(*param_6 + 0x93) != 'D') + '\x01';
  if (*(char *)(*param_6 + 0x93) == '\x1c') {
    cVar10 = '\0';
  }
  uVar5 = *(undefined8 *)(param_3 + 0x13818);
  FUN_14608fe30();
  FUN_1448e935e(uVar5,&local_60,&DAT_14c9d6288,0);
  FUN_14608fe30();
  local_80 = local_60;
  local_78 = local_58;
  uVar5 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145ea4548();
  FUN_1448e935e(uVar5,&local_60,&DAT_14c9d8618,cVar10);
  FUN_145ea4548();
  lVar8 = local_58;
  puVar12 = local_60;
  uVar5 = *(undefined8 *)(param_3 + 0x30f8);
  uVar6 = *(undefined8 *)(param_3 + 0x3100);
  uVar11 = *(undefined8 *)(*param_6 + 0x84);
  FUN_145ea47b4();
  FUN_140069376(param_1);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar13 + 0x40;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x208);
    puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar13 + 0x40;
  }
  puVar7 = local_70;
  *puVar1 = (ulonglong)puVar9;
  local_60 = local_70;
  local_58 = DAT_14c9da990;
  if (DAT_14c9da990 != 0) {
    LOCK();
    *(int *)(DAT_14c9da990 + 8) = *(int *)(DAT_14c9da990 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14c9da948;
  local_88 = 2;
  FUN_140068f1a(puVar13,local_68,&local_60,1);
  *puVar13 = &PTR_FUN_14a22c6b0;
  puVar13[0x37] = puVar7;
  puVar13[0x38] = local_80;
  puVar13[0x39] = local_78;
  puVar13[0x3a] = puVar12;
  puVar13[0x3b] = lVar8;
  puVar13[0x3c] = uVar5;
  puVar13[0x3d] = uVar6;
  puVar13[0x3e] = uVar11;
  *(undefined1 *)(puVar13 + 0x3f) = 0;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_140069100(param_1,puVar13);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c75322 FUN_142c75322 body=38 status=ok
// SIG undefined FUN_142c75322(void)

undefined8 FUN_142c75322(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142c75348 FUN_142c75348 body=1581 status=ok
// SIG undefined FUN_142c75348(void)

void FUN_142c75348(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
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
    puVar5 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar5 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar5,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar5,(longlong)iStack_f8 << 3);
    puVar5 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x1b8);
  local_188 = *(undefined8 *)(lVar6 + 0x10);
  uStack_180 = *(undefined8 *)(lVar6 + 0x18);
  local_178 = *(undefined4 *)(lVar6 + 0x20);
  uStack_174 = *(undefined4 *)(lVar6 + 0x24);
  uStack_170 = *(undefined4 *)(lVar6 + 0x28);
  uStack_16c = *(undefined4 *)(lVar6 + 0x2c);
  local_168 = *(undefined4 *)(lVar6 + 0x30);
  uStack_164 = *(undefined4 *)(lVar6 + 0x34);
  uStack_160 = *(undefined4 *)(lVar6 + 0x38);
  uStack_15c = *(undefined4 *)(lVar6 + 0x3c);
  lVar6 = 0;
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
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar6;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  local_100 = (uint)(0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x18)) * 5;
  local_148 = lVar7;
  lVar6 = FUN_140028f18(param_2);
  if ((lVar6 != 0) && ((local_90 & 0x10000000) == 0)) {
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
    puVar5 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar6;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
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
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  FUN_145ea47b4();
  local_198 = (undefined8 *)uVar8;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9da948);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar6,lVar10,1);
    }
  }
  uVar8 = FUN_145a1e9b2();
  local_198 = &local_188;
  FUN_1449cc26b(param_2,lVar7,*(undefined8 *)(param_1 + 0x1c0),uVar8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = 0;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x30) + 0x10);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar11 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar11 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e78c8;
  puVar11[2] = uVar8;
  *(undefined4 *)(puVar11 + 3) = 0;
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c75976 FUN_142c75976 body=450 status=ok
// SIG undefined FUN_142c75976(void)

void FUN_142c75976(longlong param_1,ulonglong *param_2)

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
  FUN_147193c32(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c75b39 FUN_142c75b39 body=81 status=ok
// SIG undefined FUN_142c75b39(void)

void FUN_142c75b39(undefined8 param_1,longlong *param_2)

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
  FUN_147193d2d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c75b8a FUN_142c75b8a body=229 status=ok
// SIG undefined FUN_142c75b8a(void)

void FUN_142c75b8a(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14c9daa58,param_3);
  return;
}



// FUNCTION 142c75c70 FUN_142c75c70 body=481 status=ok
// SIG undefined FUN_142c75c70(void)

void FUN_142c75c70(longlong param_1,ulonglong *param_2)

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
  FUN_14719411c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c75e52 FUN_142c75e52 body=232 status=ok
// SIG undefined FUN_142c75e52(void)

void FUN_142c75e52(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142c75f3a FUN_142c75f3a body=81 status=ok
// SIG undefined FUN_142c75f3a(void)

void FUN_142c75f3a(undefined8 param_1,longlong *param_2)

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
  FUN_1471941bf(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142c75f8c FUN_142c75f8c body=481 status=ok
// SIG undefined FUN_142c75f8c(void)

void FUN_142c75f8c(longlong param_1,ulonglong *param_2)

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
  FUN_1471945ae(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142c7616e FUN_142c7616e body=232 status=ok
// SIG undefined FUN_142c7616e(void)

void FUN_142c7616e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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


