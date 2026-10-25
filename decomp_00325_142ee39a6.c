// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ee39a6 FUN_142ee39a6 body=1294 status=ok
// SIG undefined FUN_142ee39a6(void)

void FUN_142ee39a6(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142ee3eb6 FUN_142ee3eb6 body=29 status=ok
// SIG undefined FUN_142ee3eb6(void)

undefined8 FUN_142ee3eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee3ed4 FUN_142ee3ed4 body=38 status=ok
// SIG undefined FUN_142ee3ed4(void)

undefined8 FUN_142ee3ed4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee3efa FUN_142ee3efa body=1112 status=ok
// SIG undefined FUN_142ee3efa(void)

void FUN_142ee3efa(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  float local_160;
  float local_158;
  float local_150;
  float local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  byte local_109;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [64];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,local_108);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = local_108;
    if (local_100 != (undefined1 *)0x0) {
      puVar14 = local_100;
    }
    FUN_1446fe144(puVar16 + 2,local_f8,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar14,(longlong)local_f8);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      puVar14 = local_f0;
    }
    FUN_1446fe1b8(puVar16 + 5,local_a8,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar14,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar16 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  bVar2 = *(byte *)(param_1 + 0x250);
  lVar1 = param_1 + 0x1f8;
  iVar3 = *(int *)(param_1 + 0x1bc);
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  uVar6 = *(undefined8 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1c0);
  local_109 = *(byte *)(param_1 + 0x1c4);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar16 + 2) = (float)(int)uVar5;
  *(float *)((longlong)puVar16 + 0x14) = (float)(int)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(puVar16 + 3) = 0;
  *(float *)((longlong)puVar16 + 0x1c) = (float)(int)uVar6;
  *(float *)(puVar16 + 4) = (float)(int)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2,lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x248);
  if (*(longlong *)(param_1 + 0x238) == 0) {
    lVar10 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x240) + 8);
    lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x238) + 0xd4);
    lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar13 * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar7,lVar13,1);
    }
  }
  FUN_142ee186e();
  local_168 = uVar5;
  FUN_1449cc26b(param_2,lVar10,*(undefined8 *)(param_1 + 0x238),&DAT_14ca2b7c0);
  iVar12 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar8 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_160 = (float)iVar11;
  iVar15 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_148 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar15);
  local_150 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar11);
  local_138 = *(undefined8 *)(param_1 + 0x1e0);
  fVar17 = (float)iVar12;
  local_158 = (float)iVar15;
  local_140 = CONCAT44(iVar12,iVar8);
  local_120 = uVar4;
  if (((iVar3 == -1) || ((bVar2 & 2) == 0)) || ((local_109 & 1) == 0)) {
    local_168 = CONCAT44(local_168._4_4_,fVar17);
    local_128 = CONCAT44(local_128._4_4_,1);
    local_130 = lVar1;
    FUN_140094833(param_2);
  }
  else {
    local_130 = CONCAT44(local_130._4_4_,iVar3);
    local_168 = CONCAT44(local_168._4_4_,fVar17);
    local_128 = lVar1;
    FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar8);
  }
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee436c FUN_142ee436c body=31 status=ok
// SIG undefined FUN_142ee436c(void)

undefined8 FUN_142ee436c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee438c FUN_142ee438c body=38 status=ok
// SIG undefined FUN_142ee438c(void)

undefined8 FUN_142ee438c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee43b2 FUN_142ee43b2 body=1888 status=ok
// SIG undefined FUN_142ee43b2(void)

void FUN_142ee43b2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  float local_170;
  float local_168;
  float local_160;
  float local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  undefined4 local_130;
  byte local_126;
  byte local_125;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  int local_114;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  undefined1 *local_e0;
  int local_d8;
  undefined1 local_d0 [64];
  undefined1 *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,local_e8);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_d8;
  if ((longlong)local_d8 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar15 = local_e8;
    if (local_e0 != (undefined1 *)0x0) {
      puVar15 = local_e0;
    }
    FUN_1446fe144(puVar18 + 2,local_d8,0);
    puVar10 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar10 = puVar18 + 2;
    }
    memcpy(puVar10,puVar15,(longlong)local_d8);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar15 = local_90;
    if (local_90 == (undefined1 *)0x0) {
      puVar15 = local_d0;
    }
    FUN_1446fe1b8(puVar18 + 5,local_88,0);
    puVar10 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar18 + 5;
    }
    memcpy(puVar10,puVar15,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar18 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_74;
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_100 = *(longlong *)(param_1 + 0x238);
  lVar13 = *(longlong *)(param_1 + 0x240);
  lVar11 = *(longlong *)(param_1 + 0x248);
  lVar5 = *(longlong *)(param_1 + 0x250);
  local_f0 = *(longlong *)(param_1 + 600);
  local_120 = *(undefined8 *)(param_1 + 0x260);
  local_110 = *(undefined8 *)(param_1 + 0x268);
  uVar6 = *(undefined8 *)(param_1 + 0x270);
  local_125 = *(byte *)(param_1 + 0x278);
  local_114 = *(int *)(param_1 + 0x1bc);
  local_124 = *(undefined4 *)(param_1 + 0x1c0);
  local_126 = *(byte *)(param_1 + 0x1c4);
  uVar19 = *(undefined8 *)(param_1 + 0x1d0);
  uVar16 = *(undefined8 *)(param_1 + 0x1d8);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar18 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar18 + 5;
  }
  local_108 = param_1 + 0x1f8;
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar18 + 2) = (float)(int)uVar19;
  *(float *)((longlong)puVar18 + 0x14) = (float)(int)((ulonglong)uVar19 >> 0x20);
  *(undefined4 *)(puVar18 + 3) = 0;
  *(float *)((longlong)puVar18 + 0x1c) = (float)(int)uVar16;
  *(float *)(puVar18 + 4) = (float)(int)((ulonglong)uVar16 >> 0x20);
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2);
  uVar19 = local_120;
  if (lVar13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar11 + 8);
    lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + (longlong)*(int *)(lVar13 + 0xd4) * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar12,(longlong)*(int *)(lVar13 + 0xd4),1);
    }
  }
  lVar12 = FUN_144821ef4(param_2);
  FUN_14156b92a();
  if ((byte)((*(byte *)(lVar13 + 0xd0) & 0xe) - 6) < 4) {
    FUN_143236b9c(lVar12,lVar13,&DAT_14ca27f80,uVar6);
  }
  else {
    FUN_1446fe2ba();
  }
  uVar16 = local_110;
  local_178 = *(undefined8 *)(*(longlong *)(local_100 + 8) + 0x40);
  FUN_14303dd62(lVar13,lVar12,uVar19,local_110);
  iVar8 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar9 = iVar8 + *(int *)(lVar12 + 0x40);
  if (iVar9 != 0 && SCARRY4(iVar8,*(int *)(lVar12 + 0x40)) == iVar9 < 0) {
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar18 + 0xb;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x60);
      puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar18 + 0xb;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar18;
    param_2[6] = (ulonglong)(puVar18 + 1);
    local_f8 = *(undefined8 *)(lVar12 + 0x38);
    local_118 = *(undefined4 *)(lVar12 + 0x40);
    uVar19 = *(undefined8 *)(lVar12 + 0x28);
    uVar1 = *(undefined4 *)(lVar12 + 0x30);
    uVar16 = *(undefined8 *)(lVar12 + 0x18);
    uVar2 = *(undefined4 *)(lVar12 + 0x20);
    uVar7 = *(undefined8 *)(lVar12 + 8);
    uVar3 = *(undefined4 *)(lVar12 + 0x10);
    puVar18[1] = 0;
    *puVar18 = &PTR_FUN_14a1e7fd8;
    puVar18[2] = lVar11;
    puVar18[3] = uVar7;
    *(undefined4 *)(puVar18 + 4) = uVar3;
    puVar18[5] = uVar16;
    *(undefined4 *)(puVar18 + 6) = uVar2;
    puVar18[7] = uVar19;
    *(undefined4 *)(puVar18 + 8) = uVar1;
    puVar18[9] = local_f8;
    *(undefined4 *)(puVar18 + 10) = local_118;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
    uVar16 = local_110;
    uVar19 = local_120;
  }
  if (lVar5 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_f0 + 8) + 0x50) +
              (longlong)*(int *)(lVar5 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)(local_f0 + 8),(longlong)*(int *)(lVar5 + 0xd4),1);
    }
  }
  lVar11 = FUN_144821ef4(param_2);
  FUN_14156b92a();
  if ((byte)((*(byte *)(lVar5 + 0xd0) & 0xe) - 6) < 4) {
    FUN_143236b9c(lVar11,lVar5,&DAT_14ca27f80,uVar6);
  }
  else {
    FUN_1446fe2ba();
  }
  local_178 = *(undefined8 *)(*(longlong *)(local_100 + 8) + 0x40);
  FUN_14303dd62(lVar5,lVar11,uVar19,uVar16);
  iVar8 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar9 = iVar8 + *(int *)(lVar11 + 0x40);
  if (iVar9 != 0 && SCARRY4(iVar8,*(int *)(lVar11 + 0x40)) == iVar9 < 0) {
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar18 + 0xb;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x60);
      puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar18 + 0xb;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar18;
    param_2[6] = (ulonglong)(puVar18 + 1);
    uVar6 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar19 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar16 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar7 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar18[1] = 0;
    *puVar18 = &PTR_FUN_14a1e7fd8;
    puVar18[2] = lVar13;
    puVar18[3] = uVar7;
    *(undefined4 *)(puVar18 + 4) = uVar4;
    puVar18[5] = uVar16;
    *(undefined4 *)(puVar18 + 6) = uVar3;
    puVar18[7] = uVar19;
    *(undefined4 *)(puVar18 + 8) = uVar2;
    puVar18[9] = uVar6;
    *(undefined4 *)(puVar18 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  iVar14 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar8 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar9 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_170 = (float)iVar9;
  iVar17 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_158 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar17);
  local_160 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar9);
  local_148 = *(undefined8 *)(param_1 + 0x1e0);
  fVar20 = (float)iVar14;
  local_168 = (float)iVar17;
  local_150 = CONCAT44(iVar14,iVar8);
  if (local_114 != -1) {
    local_125 = local_125 & 2;
    if ((local_125 != 0) && ((local_126 & 1) != 0)) {
      local_130 = local_124;
      local_138 = local_108;
      local_140 = CONCAT44(local_140._4_4_,local_114);
      local_178 = CONCAT44(local_178._4_4_,fVar20);
      FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar8);
      goto LAB_142ee4969;
    }
  }
  local_130 = local_124;
  local_140 = local_108;
  local_178 = CONCAT44(local_178._4_4_,fVar20);
  local_138 = CONCAT44(local_138._4_4_,1);
  FUN_140094833(param_2);
LAB_142ee4969:
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee4b14 FUN_142ee4b14 body=481 status=ok
// SIG undefined FUN_142ee4b14(void)

void FUN_142ee4b14(longlong param_1,ulonglong *param_2)

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
  FUN_1472921b6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee4cf6 FUN_142ee4cf6 body=232 status=ok
// SIG undefined FUN_142ee4cf6(void)

void FUN_142ee4cf6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ee4dde FUN_142ee4dde body=81 status=ok
// SIG undefined FUN_142ee4dde(void)

void FUN_142ee4dde(undefined8 param_1,longlong *param_2)

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
  FUN_147292259(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ee4e30 FUN_142ee4e30 body=31 status=ok
// SIG undefined FUN_142ee4e30(void)

undefined8 FUN_142ee4e30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee4e50 FUN_142ee4e50 body=1418 status=ok
// SIG undefined FUN_142ee4e50(void)

void FUN_142ee4e50(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
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
  *(int *)(puVar11 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_158,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_158);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar11 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_108,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar11 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_f4;
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
  lVar12 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar10 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
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
  *(float *)(puVar11 + 2) = (float)iVar5;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
  *(float *)(puVar11 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
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
  if (lVar10 == 0) {
    lVar10 = local_138;
  }
  if (lVar12 == 0) {
    lVar12 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar10;
  lStack_130 = lVar12;
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
    *(undefined4 *)(puVar11 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar12,lVar10,1);
    }
  }
  FUN_141592826();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca28090);
  uVar6 = DAT_14ca89240;
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
  puVar11[3] = uVar6;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar6 = DAT_14ca89258;
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
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee53dc FUN_142ee53dc body=29 status=ok
// SIG undefined FUN_142ee53dc(void)

undefined8 FUN_142ee53dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee53fa FUN_142ee53fa body=38 status=ok
// SIG undefined FUN_142ee53fa(void)

undefined8 FUN_142ee53fa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee5420 FUN_142ee5420 body=1294 status=ok
// SIG undefined FUN_142ee5420(void)

void FUN_142ee5420(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142ee5930 FUN_142ee5930 body=29 status=ok
// SIG undefined FUN_142ee5930(void)

undefined8 FUN_142ee5930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee594e FUN_142ee594e body=38 status=ok
// SIG undefined FUN_142ee594e(void)

undefined8 FUN_142ee594e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee5974 FUN_142ee5974 body=1418 status=ok
// SIG undefined FUN_142ee5974(void)

void FUN_142ee5974(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
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
  *(int *)(puVar11 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_158,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_158);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar11 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_108,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar11 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_f4;
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
  lVar12 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar10 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
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
  *(float *)(puVar11 + 2) = (float)iVar5;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
  *(float *)(puVar11 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
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
  if (lVar10 == 0) {
    lVar10 = local_138;
  }
  if (lVar12 == 0) {
    lVar12 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar10;
  lStack_130 = lVar12;
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
    *(undefined4 *)(puVar11 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar12,lVar10,1);
    }
  }
  FUN_142edaf40();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca287e0);
  uVar6 = DAT_14ca89240;
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
  puVar11[3] = uVar6;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar6 = DAT_14ca89258;
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
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee5f00 FUN_142ee5f00 body=518 status=ok
// SIG undefined FUN_142ee5f00(void)

void FUN_142ee5f00(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
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
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_147292680(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee6108 FUN_142ee6108 body=123 status=ok
// SIG undefined FUN_142ee6108(void)

void FUN_142ee6108(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f55006();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca28b58,uVar1);
  return;
}



// FUNCTION 142ee6184 FUN_142ee6184 body=518 status=ok
// SIG undefined FUN_142ee6184(void)

void FUN_142ee6184(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
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
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_14729297e(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee638c FUN_142ee638c body=123 status=ok
// SIG undefined FUN_142ee638c(void)

void FUN_142ee638c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f555fc();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca28be0,uVar1);
  return;
}



// FUNCTION 142ee6408 FUN_142ee6408 body=481 status=ok
// SIG undefined FUN_142ee6408(void)

void FUN_142ee6408(longlong param_1,ulonglong *param_2)

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
  FUN_147292c42(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee65ea FUN_142ee65ea body=232 status=ok
// SIG undefined FUN_142ee65ea(void)

void FUN_142ee65ea(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ee66d2 FUN_142ee66d2 body=81 status=ok
// SIG undefined FUN_142ee66d2(void)

void FUN_142ee66d2(undefined8 param_1,longlong *param_2)

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
  FUN_147292ce5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ee6724 FUN_142ee6724 body=31 status=ok
// SIG undefined FUN_142ee6724(void)

undefined8 FUN_142ee6724(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee6744 FUN_142ee6744 body=38 status=ok
// SIG undefined FUN_142ee6744(void)

undefined8 FUN_142ee6744(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee676a FUN_142ee676a body=3610 status=ok
// SIG undefined FUN_142ee676a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ee676a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  code *local_198;
  code *local_190;
  code *local_188;
  undefined8 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined8 local_160;
  int local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  uint local_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined5 uStack_94;
  undefined3 uStack_8f;
  undefined5 uStack_8c;
  undefined8 uStack_87;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_128);
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
  *(int *)(puVar18 + 4) = (int)local_118;
  if ((longlong)(int)local_118 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar12 = &local_128;
    if (uStack_120 != (undefined8 *)0x0) {
      puVar12 = uStack_120;
    }
    FUN_1446fe144(puVar18 + 2,(int)local_118,0);
    puVar16 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar16 = puVar18 + 2;
    }
    memcpy(puVar16,puVar12,(longlong)(int)local_118);
  }
  puVar18[0xd] = 0;
  puVar12 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
  *(int *)(puVar18 + 0xe) = iStack_c8;
  if ((longlong)iStack_c8 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = &uStack_110;
    }
    FUN_1446fe1b8(puVar18 + 5,iStack_c8,0);
    puVar16 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar16 = puVar18 + 5;
    }
    memcpy(puVar16,puVar12,(longlong)iStack_c8 << 3);
    puVar12 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
  }
  *(undefined4 *)(puVar18 + 0xf) = uStack_c4._4_4_;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = (undefined4)uStack_bc;
  *(undefined4 *)(puVar18 + 0x10) = uStack_bc._4_4_;
  *(undefined4 *)((longlong)puVar18 + 0x84) = (undefined4)uStack_b4;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar12);
  }
  if (uStack_120 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = (undefined8 *)0x0;
  uStack_cc = 0;
  iStack_c8 = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  uStack_8f = 0;
  uStack_8c = 0;
  uStack_87 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  FUN_144b0e33a(param_2,&local_128);
  local_f8 = DAT_14c9c0d50;
  uStack_f0 = DAT_14c9c0db0;
  local_e8 = DAT_14c9c0d98;
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    local_130 = *(uint *)(param_1 + 0x1dc);
    local_140 = 0;
    uStack_138 = (ulonglong)local_130 << 0x20;
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x13818);
    uStack_12c = local_130;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0f580) {
      FUN_144b3d300(&DAT_14cb0f580);
      if (DAT_14cb0f580 == -1) {
        FUN_14604182e();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = (undefined8 *)&LAB_147da539e;
        local_188 = (code *)&LAB_147da53a2;
        local_190 = FUN_147da53ba;
        local_198 = FUN_147da53e2;
        local_1b0 = L"WriteToSliceMainVS";
        local_1b8 = L"/Engine/Private/TranslucentLightingShaders.usf";
        local_160 = 0;
        local_168 = 0xf0;
        local_1a0 = 1.4013e-45;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb0f4d8,0,&DAT_14cb0f470,L"FWriteToSliceVS");
        _DAT_14cb0f4d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_14377f5fa);
        _Init_thread_footer(&DAT_14cb0f580);
      }
    }
    FUN_1448e935e(uVar5,&local_158,&DAT_14cb0f4d8,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0f580) {
      FUN_144b3d300(&DAT_14cb0f580);
      if (DAT_14cb0f580 == -1) {
        FUN_14604182e();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = (undefined8 *)&LAB_147da539e;
        local_188 = (code *)&LAB_147da53a2;
        local_190 = FUN_147da53ba;
        local_198 = FUN_147da53e2;
        local_1b0 = L"WriteToSliceMainVS";
        local_1b8 = L"/Engine/Private/TranslucentLightingShaders.usf";
        local_160 = 0;
        local_168 = 0xf0;
        local_1a0 = 1.4013e-45;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14cb0f4d8,0,&DAT_14cb0f470,L"FWriteToSliceVS");
        _DAT_14cb0f4d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_14377f5fa);
        _Init_thread_footer(&DAT_14cb0f580);
      }
    }
    lVar15 = CONCAT44(iStack_154,local_158);
    lVar14 = CONCAT44(uStack_14c,iStack_150);
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x13818);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0f6a8) {
      FUN_144b3d300(&DAT_14cb0f6a8);
      if (DAT_14cb0f6a8 == -1) {
        FUN_14612a512();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = (undefined8 *)&LAB_147da544e;
        local_188 = (code *)&LAB_147da5452;
        local_190 = FUN_147da5496;
        local_198 = FUN_147da54f4;
        local_1b0 = L"WriteToSliceMainGS";
        local_1b8 = L"/Engine/Private/TranslucentLightingShaders.usf";
        local_160 = 0;
        local_168 = 0xe8;
        local_1a0 = 1.4013e-45;
        local_1a8 = 4;
        FUN_140db5666(&DAT_14cb0f600,0,&DAT_14cb0f598,L"FWriteToSliceGS");
        _DAT_14cb0f600 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_14377f606);
        _Init_thread_footer(&DAT_14cb0f6a8);
      }
    }
    lVar13 = 0;
    FUN_1448e935e(uVar5,&local_158,&DAT_14cb0f600,0);
    local_d0 = 1;
    local_128 = DAT_14cb053e0;
    if (lVar15 != 0) {
      lVar6 = *(longlong *)(lVar14 + 8);
      lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + (longlong)*(int *)(lVar15 + 0xd4) * 8);
      if (lVar13 == 0) {
        lVar13 = FUN_1400bafc2(lVar6,(longlong)*(int *)(lVar15 + 0xd4),1);
      }
    }
    uStack_120 = (undefined8 *)lVar13;
    if (CONCAT44(iStack_154,local_158) == 0) {
      lVar13 = 0;
    }
    else {
      lVar6 = *(longlong *)(CONCAT44(uStack_14c,iStack_150) + 8);
      lVar17 = (longlong)*(int *)(CONCAT44(iStack_154,local_158) + 0xd4);
      lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar17 * 8);
      if (lVar13 == 0) {
        lVar13 = FUN_1400bafc2(lVar6,lVar17,1);
      }
    }
    uStack_100 = lVar13;
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar13 = 0;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
      lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
      lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar17 * 8);
      if (lVar13 == 0) {
        lVar13 = FUN_1400bafc2(lVar6,lVar17,1);
      }
    }
    local_118 = lVar13;
    lVar13 = FUN_140028f18(param_2);
    if ((lVar13 != 0) && ((local_60 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_108;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_108._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_100._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_118;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_118._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_110._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_128;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_128._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_120._4_4_;
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
      *puVar18 = &PTR_LAB_14a37d348;
      puVar18[2] = lVar13;
      *(undefined4 *)(puVar18 + 3) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x1c) = 1;
    }
    local_158 = uStack_138._4_4_ - (int)local_140;
    iStack_154 = local_158;
    iStack_150 = local_158;
    if (lVar15 == 0) {
      lVar14 = 0;
    }
    else {
      lVar13 = *(longlong *)(lVar14 + 8);
      lVar14 = *(longlong *)(*(longlong *)(lVar13 + 0x50) + (longlong)*(int *)(lVar15 + 0xd4) * 8);
      if (lVar14 == 0) {
        lVar14 = FUN_1400bafc2(lVar13,(longlong)*(int *)(lVar15 + 0xd4),1);
      }
    }
    lVar13 = FUN_144821ef4(param_2);
    FUN_144ab45f6(lVar15,lVar13,&local_140,&local_158);
    iVar10 = *(int *)(lVar13 + 0x30) + *(int *)(lVar13 + 0x20);
    iVar11 = iVar10 + *(int *)(lVar13 + 0x40);
    if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar13 + 0x40)) == iVar11 < 0) {
      puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar18 + 0xb;
      if ((undefined8 *)param_2[1] < puVar12) {
        FUN_140023dd8(param_2,0x60);
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 0xb;
      }
      *param_2 = (ulonglong)puVar12;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar18;
      param_2[6] = (ulonglong)(puVar18 + 1);
      uVar5 = *(undefined8 *)(lVar13 + 0x38);
      uVar1 = *(undefined4 *)(lVar13 + 0x40);
      uVar7 = *(undefined8 *)(lVar13 + 0x28);
      uVar2 = *(undefined4 *)(lVar13 + 0x30);
      uVar8 = *(undefined8 *)(lVar13 + 0x18);
      uVar3 = *(undefined4 *)(lVar13 + 0x20);
      uVar9 = *(undefined8 *)(lVar13 + 8);
      uVar4 = *(undefined4 *)(lVar13 + 0x10);
      puVar18[1] = 0;
      *puVar18 = &PTR_FUN_14a1e7fd8;
      puVar18[2] = lVar14;
      puVar18[3] = uVar9;
      *(undefined4 *)(puVar18 + 4) = uVar4;
      puVar18[5] = uVar8;
      *(undefined4 *)(puVar18 + 6) = uVar3;
      puVar18[7] = uVar7;
      *(undefined4 *)(puVar18 + 8) = uVar2;
      puVar18[9] = uVar5;
      *(undefined4 *)(puVar18 + 10) = uVar1;
      *(undefined8 *)(lVar13 + 8) = 0;
      *(undefined4 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined4 *)(lVar13 + 0x20) = 0;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      *(undefined4 *)(lVar13 + 0x30) = 0;
      *(undefined8 *)(lVar13 + 0x38) = 0;
      *(undefined4 *)(lVar13 + 0x40) = 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar15 = 0;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
      lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
      lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x50) + lVar13 * 8);
      if (lVar15 == 0) {
        lVar15 = FUN_1400bafc2(lVar14,lVar13,1);
      }
    }
    FUN_14155e930();
    local_1b8 = (wchar_t *)uVar5;
    FUN_1449cc26b(param_2,lVar15,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca28c68);
    local_148 = CONCAT44(uStack_12c,local_130);
    local_158 = (int)local_140;
    iStack_154 = local_140._4_4_;
    iStack_150 = (undefined4)uStack_138;
    uStack_14c = uStack_138._4_4_;
    FUN_144b2bc26(param_2);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x13818);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = (undefined8 *)&LAB_1472e3912;
        local_188 = (code *)&LAB_1472e3916;
        local_190 = FUN_1472e391a;
        local_198 = FUN_1472e3942;
        local_1b0 = L"ScreenPassVS";
        local_1b8 = L"/Engine/Private/ScreenPass.usf";
        local_160 = 0;
        local_168 = 0xe0;
        local_1a0 = 1.4013e-45;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    FUN_1448e935e(uVar5,&local_140,&DAT_14ca4b6d8,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_170 = &LAB_14712ac08;
        local_178 = &LAB_14712ac0c;
        local_180 = (undefined8 *)&LAB_1472e3912;
        local_188 = (code *)&LAB_1472e3916;
        local_190 = FUN_1472e391a;
        local_198 = FUN_1472e3942;
        local_1b0 = L"ScreenPassVS";
        local_1b8 = L"/Engine/Private/ScreenPass.usf";
        local_160 = 0;
        local_168 = 0xe0;
        local_1a0 = 1.4013e-45;
        local_1a8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    local_d0 = 0;
    local_128 = DAT_14ca94df8;
    if (local_140 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)
                (*(longlong *)(*(longlong *)(uStack_138 + 8) + 0x50) +
                (longlong)*(int *)(local_140 + 0xd4) * 8);
      if (lVar15 == 0) {
        lVar15 = FUN_1400bafc2(*(longlong *)(uStack_138 + 8),(longlong)*(int *)(local_140 + 0xd4),1)
        ;
      }
    }
    uStack_120 = (undefined8 *)lVar15;
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar15 = 0;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
      lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
      lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x50) + lVar13 * 8);
      if (lVar15 == 0) {
        lVar15 = FUN_1400bafc2(lVar14,lVar13,1);
      }
    }
    local_118 = lVar15;
    lVar15 = FUN_140028f18(param_2);
    if ((lVar15 != 0) && ((local_60 & 0x10000000) == 0)) {
      *(undefined4 *)(param_2 + 0x35) = (undefined4)local_108;
      *(undefined4 *)((longlong)param_2 + 0x1ac) = local_108._4_4_;
      *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_100._4_4_;
      *(int *)(param_2 + 0x33) = (int)local_118;
      *(undefined4 *)((longlong)param_2 + 0x19c) = local_118._4_4_;
      *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_110._4_4_;
      *(undefined4 *)(param_2 + 0x31) = (undefined4)local_128;
      *(undefined4 *)((longlong)param_2 + 0x18c) = local_128._4_4_;
      *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_120;
      *(undefined4 *)((longlong)param_2 + 0x194) = uStack_120._4_4_;
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
      *puVar18 = &PTR_LAB_14a37d348;
      puVar18[2] = lVar15;
      *(undefined4 *)(puVar18 + 3) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x1c) = 1;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar15 = 0;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
      lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
      lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x50) + lVar13 * 8);
      if (lVar15 == 0) {
        lVar15 = FUN_1400bafc2(lVar14,lVar13,1);
      }
    }
    FUN_14155e930();
    local_1b8 = (wchar_t *)uVar5;
    FUN_1449cc26b(param_2,lVar15,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca28c68);
    iVar10 = *(int *)(param_1 + 0x1dc);
    local_1a0 = (float)(iVar10 * iVar10);
    local_190 = (code *)CONCAT44(iVar10,iVar10 * iVar10);
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,1);
    local_178 = (undefined1 *)CONCAT44(local_178._4_4_,1);
    local_198 = (code *)CONCAT44(local_198._4_4_,(float)iVar10);
    local_1a8 = 0;
    local_1b0 = (wchar_t *)((ulonglong)local_1b0 & 0xffffffff00000000);
    local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,(float)iVar10);
    local_188 = local_190;
    local_180 = &local_140;
    FUN_140094833(param_2,0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee7586 FUN_142ee7586 body=481 status=ok
// SIG undefined FUN_142ee7586(void)

void FUN_142ee7586(longlong param_1,ulonglong *param_2)

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
  FUN_147293022(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee7768 FUN_142ee7768 body=232 status=ok
// SIG undefined FUN_142ee7768(void)

void FUN_142ee7768(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ee7850 FUN_142ee7850 body=81 status=ok
// SIG undefined FUN_142ee7850(void)

void FUN_142ee7850(undefined8 param_1,longlong *param_2)

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
  FUN_1472930c5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ee78a2 FUN_142ee78a2 body=38 status=ok
// SIG undefined FUN_142ee78a2(void)

undefined8 FUN_142ee78a2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee78c8 FUN_142ee78c8 body=1112 status=ok
// SIG undefined FUN_142ee78c8(void)

void FUN_142ee78c8(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  float local_160;
  float local_158;
  float local_150;
  float local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  byte local_10a;
  byte local_109;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [64];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144b1c6fa(param_1 + 0x10,local_108);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = local_108;
    if (local_100 != (undefined1 *)0x0) {
      puVar14 = local_100;
    }
    FUN_1446fe144(puVar16 + 2,local_f8,0);
    puVar10 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar10 = puVar16 + 2;
    }
    memcpy(puVar10,puVar14,(longlong)local_f8);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      puVar14 = local_f0;
    }
    FUN_1446fe1b8(puVar16 + 5,local_a8,0);
    puVar10 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar16 + 5;
    }
    memcpy(puVar10,puVar14,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar16 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = *(longlong *)(param_1 + 0x238);
  lVar5 = *(longlong *)(param_1 + 0x240);
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  local_109 = *(byte *)(param_1 + 0x250);
  lVar1 = param_1 + 0x1f8;
  iVar2 = *(int *)(param_1 + 0x1bc);
  uVar7 = *(undefined8 *)(param_1 + 0x1d0);
  uVar8 = *(undefined8 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1c0);
  local_10a = *(byte *)(param_1 + 0x1c4);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar16 + 2) = (float)(int)uVar7;
  *(float *)((longlong)puVar16 + 0x14) = (float)(int)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)(puVar16 + 3) = 0;
  *(float *)((longlong)puVar16 + 0x1c) = (float)(int)uVar8;
  *(float *)(puVar16 + 4) = (float)(int)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2,lVar1);
  if (lVar4 == 0) {
    lVar11 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 8);
    lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + (longlong)*(int *)(lVar4 + 0xd4) * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar5,(longlong)*(int *)(lVar4 + 0xd4),1);
    }
  }
  FUN_145dd0296();
  local_168 = uVar6;
  FUN_1449cc26b(param_2,lVar11,lVar4,&DAT_14ca29778);
  iVar13 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar9 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar12 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_160 = (float)iVar12;
  iVar15 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_148 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar15);
  local_150 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar12);
  local_138 = *(undefined8 *)(param_1 + 0x1e0);
  fVar17 = (float)iVar13;
  local_158 = (float)iVar15;
  local_140 = CONCAT44(iVar13,iVar9);
  local_120 = uVar3;
  if (iVar2 != -1) {
    local_109 = local_109 & 2;
    if ((local_109 != 0) && ((local_10a & 1) != 0)) {
      local_130 = CONCAT44(local_130._4_4_,iVar2);
      local_168 = CONCAT44(local_168._4_4_,fVar17);
      local_128 = lVar1;
      FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar9);
      goto LAB_142ee7c8d;
    }
  }
  local_168 = CONCAT44(local_168._4_4_,fVar17);
  local_128 = CONCAT44(local_128._4_4_,1);
  local_130 = lVar1;
  FUN_140094833(param_2);
LAB_142ee7c8d:
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee7d22 FUN_142ee7d22 body=370 status=ok
// SIG undefined FUN_142ee7d22(void)

void FUN_142ee7d22(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1030301;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 1;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_142ee7e45;
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
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_142ee7e45:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ee7e96 FUN_142ee7e96 body=518 status=ok
// SIG undefined FUN_142ee7e96(void)

void FUN_142ee7e96(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
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
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_1472935ea(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee809e FUN_142ee809e body=123 status=ok
// SIG undefined FUN_142ee809e(void)

void FUN_142ee809e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f329ce();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca29a20,uVar1);
  return;
}



// FUNCTION 142ee811a FUN_142ee811a body=518 status=ok
// SIG undefined FUN_142ee811a(void)

void FUN_142ee811a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
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
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_147293980(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee8322 FUN_142ee8322 body=123 status=ok
// SIG undefined FUN_142ee8322(void)

void FUN_142ee8322(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145f32fc2();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca29aa8,uVar1);
  return;
}



// FUNCTION 142ee839e FUN_142ee839e body=29 status=ok
// SIG undefined FUN_142ee839e(void)

undefined8 FUN_142ee839e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee83bc FUN_142ee83bc body=38 status=ok
// SIG undefined FUN_142ee83bc(void)

undefined8 FUN_142ee83bc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee83e2 FUN_142ee83e2 body=1418 status=ok
// SIG undefined FUN_142ee83e2(void)

void FUN_142ee83e2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
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
  *(int *)(puVar11 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_158,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_158);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar11 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_108,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar11 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_f4;
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
  lVar12 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar10 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
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
  *(float *)(puVar11 + 2) = (float)iVar5;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
  *(float *)(puVar11 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
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
  if (lVar10 == 0) {
    lVar10 = local_138;
  }
  if (lVar12 == 0) {
    lVar12 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar10;
  lStack_130 = lVar12;
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
    *(undefined4 *)(puVar11 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar12,lVar10,1);
    }
  }
  FUN_142edc218();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca29be0);
  uVar6 = DAT_14ca89240;
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
  puVar11[3] = uVar6;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar6 = DAT_14ca89258;
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
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee896e FUN_142ee896e body=29 status=ok
// SIG undefined FUN_142ee896e(void)

undefined8 FUN_142ee896e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee898c FUN_142ee898c body=38 status=ok
// SIG undefined FUN_142ee898c(void)

undefined8 FUN_142ee898c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee89b2 FUN_142ee89b2 body=219 status=ok
// SIG undefined FUN_142ee89b2(void)

void FUN_142ee89b2(longlong param_1,ulonglong *param_2)

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
  FUN_142ee8ab4(param_1,param_2);
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



// FUNCTION 142ee8a8e FUN_142ee8a8e body=38 status=ok
// SIG undefined FUN_142ee8a8e(void)

undefined8 FUN_142ee8a8e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee8ab4 FUN_142ee8ab4 body=1294 status=ok
// SIG undefined FUN_142ee8ab4(void)

void FUN_142ee8ab4(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142ee8fc4 FUN_142ee8fc4 body=31 status=ok
// SIG undefined FUN_142ee8fc4(void)

undefined8 FUN_142ee8fc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee8fe4 FUN_142ee8fe4 body=1324 status=ok
// SIG undefined FUN_142ee8fe4(void)

void FUN_142ee8fe4(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142ee9512 FUN_142ee9512 body=481 status=ok
// SIG undefined FUN_142ee9512(void)

void FUN_142ee9512(longlong param_1,ulonglong *param_2)

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
  FUN_147293c44(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee96f4 FUN_142ee96f4 body=232 status=ok
// SIG undefined FUN_142ee96f4(void)

void FUN_142ee96f4(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ee97dc FUN_142ee97dc body=81 status=ok
// SIG undefined FUN_142ee97dc(void)

void FUN_142ee97dc(undefined8 param_1,longlong *param_2)

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
  FUN_147293ce7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ee982e FUN_142ee982e body=481 status=ok
// SIG undefined FUN_142ee982e(void)

void FUN_142ee982e(longlong param_1,ulonglong *param_2)

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
  FUN_147294024(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee9a10 FUN_142ee9a10 body=232 status=ok
// SIG undefined FUN_142ee9a10(void)

void FUN_142ee9a10(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ee9af8 FUN_142ee9af8 body=81 status=ok
// SIG undefined FUN_142ee9af8(void)

void FUN_142ee9af8(undefined8 param_1,longlong *param_2)

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
  FUN_1472940c7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ee9b4a FUN_142ee9b4a body=31 status=ok
// SIG undefined FUN_142ee9b4a(void)

undefined8 FUN_142ee9b4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee9b6a FUN_142ee9b6a body=1324 status=ok
// SIG undefined FUN_142ee9b6a(void)

void FUN_142ee9b6a(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eea098 FUN_142eea098 body=518 status=ok
// SIG undefined FUN_142eea098(void)

void FUN_142eea098(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
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
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_1472944c0(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eea2a0 FUN_142eea2a0 body=123 status=ok
// SIG undefined FUN_142eea2a0(void)

void FUN_142eea2a0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145eae384();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca2a188,uVar1);
  return;
}



// FUNCTION 142eea31c FUN_142eea31c body=481 status=ok
// SIG undefined FUN_142eea31c(void)

void FUN_142eea31c(longlong param_1,ulonglong *param_2)

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
  FUN_147294784(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eea4fe FUN_142eea4fe body=232 status=ok
// SIG undefined FUN_142eea4fe(void)

void FUN_142eea4fe(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142eea5e6 FUN_142eea5e6 body=81 status=ok
// SIG undefined FUN_142eea5e6(void)

void FUN_142eea5e6(undefined8 param_1,longlong *param_2)

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
  FUN_147294827(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142eea638 FUN_142eea638 body=29 status=ok
// SIG undefined FUN_142eea638(void)

undefined8 FUN_142eea638(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eea656 FUN_142eea656 body=38 status=ok
// SIG undefined FUN_142eea656(void)

undefined8 FUN_142eea656(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eea67c FUN_142eea67c body=219 status=ok
// SIG undefined FUN_142eea67c(void)

void FUN_142eea67c(longlong param_1,ulonglong *param_2)

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
  FUN_142eea77e(param_1,param_2);
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



// FUNCTION 142eea758 FUN_142eea758 body=38 status=ok
// SIG undefined FUN_142eea758(void)

undefined8 FUN_142eea758(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eea77e FUN_142eea77e body=1294 status=ok
// SIG undefined FUN_142eea77e(void)

void FUN_142eea77e(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eeac8e FUN_142eeac8e body=29 status=ok
// SIG undefined FUN_142eeac8e(void)

undefined8 FUN_142eeac8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeacac FUN_142eeacac body=38 status=ok
// SIG undefined FUN_142eeacac(void)

undefined8 FUN_142eeacac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeacd2 FUN_142eeacd2 body=219 status=ok
// SIG undefined FUN_142eeacd2(void)

void FUN_142eeacd2(longlong param_1,ulonglong *param_2)

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
  FUN_142eeadd4(param_1,param_2);
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



// FUNCTION 142eeadae FUN_142eeadae body=38 status=ok
// SIG undefined FUN_142eeadae(void)

undefined8 FUN_142eeadae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeadd4 FUN_142eeadd4 body=1294 status=ok
// SIG undefined FUN_142eeadd4(void)

void FUN_142eeadd4(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eeb2e4 FUN_142eeb2e4 body=29 status=ok
// SIG undefined FUN_142eeb2e4(void)

undefined8 FUN_142eeb2e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeb302 FUN_142eeb302 body=38 status=ok
// SIG undefined FUN_142eeb302(void)

undefined8 FUN_142eeb302(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeb328 FUN_142eeb328 body=219 status=ok
// SIG undefined FUN_142eeb328(void)

void FUN_142eeb328(longlong param_1,ulonglong *param_2)

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
  FUN_142eeb42a(param_1,param_2);
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



// FUNCTION 142eeb404 FUN_142eeb404 body=38 status=ok
// SIG undefined FUN_142eeb404(void)

undefined8 FUN_142eeb404(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeb42a FUN_142eeb42a body=1294 status=ok
// SIG undefined FUN_142eeb42a(void)

void FUN_142eeb42a(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eeb93a FUN_142eeb93a body=29 status=ok
// SIG undefined FUN_142eeb93a(void)

undefined8 FUN_142eeb93a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeb958 FUN_142eeb958 body=38 status=ok
// SIG undefined FUN_142eeb958(void)

undefined8 FUN_142eeb958(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeb97e FUN_142eeb97e body=219 status=ok
// SIG undefined FUN_142eeb97e(void)

void FUN_142eeb97e(longlong param_1,ulonglong *param_2)

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
  FUN_142eeba80(param_1,param_2);
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



// FUNCTION 142eeba5a FUN_142eeba5a body=38 status=ok
// SIG undefined FUN_142eeba5a(void)

undefined8 FUN_142eeba5a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeba80 FUN_142eeba80 body=1294 status=ok
// SIG undefined FUN_142eeba80(void)

void FUN_142eeba80(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eebf90 FUN_142eebf90 body=29 status=ok
// SIG undefined FUN_142eebf90(void)

undefined8 FUN_142eebf90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eebfae FUN_142eebfae body=38 status=ok
// SIG undefined FUN_142eebfae(void)

undefined8 FUN_142eebfae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eebfd4 FUN_142eebfd4 body=219 status=ok
// SIG undefined FUN_142eebfd4(void)

void FUN_142eebfd4(longlong param_1,ulonglong *param_2)

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
  FUN_142eec0d6(param_1,param_2);
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



// FUNCTION 142eec0b0 FUN_142eec0b0 body=38 status=ok
// SIG undefined FUN_142eec0b0(void)

undefined8 FUN_142eec0b0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eec0d6 FUN_142eec0d6 body=1294 status=ok
// SIG undefined FUN_142eec0d6(void)

void FUN_142eec0d6(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eec5e6 FUN_142eec5e6 body=29 status=ok
// SIG undefined FUN_142eec5e6(void)

undefined8 FUN_142eec5e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eec604 FUN_142eec604 body=38 status=ok
// SIG undefined FUN_142eec604(void)

undefined8 FUN_142eec604(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eec62a FUN_142eec62a body=219 status=ok
// SIG undefined FUN_142eec62a(void)

void FUN_142eec62a(longlong param_1,ulonglong *param_2)

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
  FUN_142eec72c(param_1,param_2);
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



// FUNCTION 142eec706 FUN_142eec706 body=38 status=ok
// SIG undefined FUN_142eec706(void)

undefined8 FUN_142eec706(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eec72c FUN_142eec72c body=1294 status=ok
// SIG undefined FUN_142eec72c(void)

void FUN_142eec72c(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eecc3c FUN_142eecc3c body=29 status=ok
// SIG undefined FUN_142eecc3c(void)

undefined8 FUN_142eecc3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eecc5a FUN_142eecc5a body=38 status=ok
// SIG undefined FUN_142eecc5a(void)

undefined8 FUN_142eecc5a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eecc80 FUN_142eecc80 body=219 status=ok
// SIG undefined FUN_142eecc80(void)

void FUN_142eecc80(longlong param_1,ulonglong *param_2)

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
  FUN_142eecd82(param_1,param_2);
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



// FUNCTION 142eecd5c FUN_142eecd5c body=38 status=ok
// SIG undefined FUN_142eecd5c(void)

undefined8 FUN_142eecd5c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eecd82 FUN_142eecd82 body=1294 status=ok
// SIG undefined FUN_142eecd82(void)

void FUN_142eecd82(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eed292 FUN_142eed292 body=29 status=ok
// SIG undefined FUN_142eed292(void)

undefined8 FUN_142eed292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eed2b0 FUN_142eed2b0 body=38 status=ok
// SIG undefined FUN_142eed2b0(void)

undefined8 FUN_142eed2b0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eed2d6 FUN_142eed2d6 body=219 status=ok
// SIG undefined FUN_142eed2d6(void)

void FUN_142eed2d6(longlong param_1,ulonglong *param_2)

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
  FUN_142eed3d8(param_1,param_2);
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



// FUNCTION 142eed3b2 FUN_142eed3b2 body=38 status=ok
// SIG undefined FUN_142eed3b2(void)

undefined8 FUN_142eed3b2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eed3d8 FUN_142eed3d8 body=1294 status=ok
// SIG undefined FUN_142eed3d8(void)

void FUN_142eed3d8(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eed8e8 FUN_142eed8e8 body=29 status=ok
// SIG undefined FUN_142eed8e8(void)

undefined8 FUN_142eed8e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eed906 FUN_142eed906 body=38 status=ok
// SIG undefined FUN_142eed906(void)

undefined8 FUN_142eed906(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eed92c FUN_142eed92c body=219 status=ok
// SIG undefined FUN_142eed92c(void)

void FUN_142eed92c(longlong param_1,ulonglong *param_2)

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
  FUN_142eeda2e(param_1,param_2);
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



// FUNCTION 142eeda08 FUN_142eeda08 body=38 status=ok
// SIG undefined FUN_142eeda08(void)

undefined8 FUN_142eeda08(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eeda2e FUN_142eeda2e body=1294 status=ok
// SIG undefined FUN_142eeda2e(void)

void FUN_142eeda2e(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142eedf3e FUN_142eedf3e body=518 status=ok
// SIG undefined FUN_142eedf3e(void)

void FUN_142eedf3e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
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
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_147294c2c(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eee146 FUN_142eee146 body=123 status=ok
// SIG undefined FUN_142eee146(void)

void FUN_142eee146(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145eae8fa();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14ca2b4b8,uVar1);
  return;
}



// FUNCTION 142eee1c2 FUN_142eee1c2 body=29 status=ok
// SIG undefined FUN_142eee1c2(void)

undefined8 FUN_142eee1c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eee1e0 FUN_142eee1e0 body=370 status=ok
// SIG undefined FUN_142eee1e0(void)

void FUN_142eee1e0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x3030301;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 1;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_142eee303;
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
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_142eee303:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eee354 FUN_142eee354 body=38 status=ok
// SIG undefined FUN_142eee354(void)

undefined8 FUN_142eee354(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eee37a FUN_142eee37a body=983 status=ok
// SIG undefined FUN_142eee37a(void)

void FUN_142eee37a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  ulonglong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 *local_a0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_f8);
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
  *(int *)(puVar11 + 4) = local_e8;
  if ((longlong)local_e8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar10 = &local_f8;
    if ((undefined4 *)CONCAT44(uStack_ec,uStack_f0) != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)CONCAT44(uStack_ec,uStack_f0);
    }
    FUN_1446fe144(puVar11 + 2,local_e8,0);
    puVar7 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 2;
    }
    memcpy(puVar7,puVar10,(longlong)local_e8);
  }
  puVar11[0xd] = 0;
  *(int *)(puVar11 + 0xe) = local_98;
  if ((longlong)local_98 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    puVar10 = local_a0;
    if (local_a0 == (undefined4 *)0x0) {
      puVar10 = &uStack_e0;
    }
    FUN_1446fe1b8(puVar11 + 5,local_98,0);
    puVar7 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar11 + 5;
    }
    memcpy(puVar7,puVar10,(longlong)local_98 << 3);
  }
  *(undefined4 *)(puVar11 + 0xf) = local_90;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_8c;
  *(undefined4 *)(puVar11 + 0x10) = uStack_88;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_84;
  if (local_a0 != (undefined4 *)0x0) {
    FUN_1400020a8(local_a0);
  }
  if (CONCAT44(uStack_ec,uStack_f0) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
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
  local_f8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_f4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_f0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_ec = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = *(undefined4 *)(param_1 + 0x1c8);
  uStack_e4 = *(undefined4 *)(param_1 + 0x1cc);
  uStack_e0 = *(undefined4 *)(param_1 + 0x1d0);
  uStack_dc = *(undefined4 *)(param_1 + 0x1d4);
  local_d8 = DAT_14c9c0d50;
  local_d0 = DAT_14c9c0d98;
  local_c0 = 0;
  local_c8 = DAT_14ca27b20;
  FUN_1404e1f8e(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145dd5010();
  local_118 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1b8),&DAT_14ca2bc80);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  FUN_145dd5010();
  local_118 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca2bc80);
  local_100 = *(undefined8 *)(param_1 + 0x1f0);
  local_108 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x138))
            (*(longlong **)(param_1 + 0x1f8),&local_108,**(longlong **)(param_1 + 0x1d8) + 0x84);
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eee752 FUN_142eee752 body=99 status=ok
// SIG undefined FUN_142eee752(void)

void FUN_142eee752(longlong *param_1)

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



// FUNCTION 142eee7b5 FUN_142eee7b5 body=4639 status=ok
// SIG undefined FUN_142eee7b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eee7b5(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14ca2531c);
  if (cVar1 == '\0') {
    _DAT_14ca2531c = 0;
    uRam000000014ca25324 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58._0_4_ = 0x3ccccccd;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca25330,L"r.DOF.Kernel.MaxForegroundRadius",&local_58,
                L"Maximum size of the foreground bluring radius in screen space (default=0.025).");
  atexit(FUN_142eb12d4);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x3ccccccd);
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca25348,L"r.DOF.Kernel.MaxBackgroundRadius",&local_58,
                L"Maximum size of the background bluring radius in screen space (default=0.025).");
  atexit(FUN_142eb1319);
  local_50 = FUN_1415d132c;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca25488,&local_58);
  local_50 = FUN_1415d1448;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca255b0,&local_58);
  local_58._0_4_ = 0x40d55555;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca255c0,L"r.LensDistortion.LUTScreenPercentage",&local_58,
                L"Screen percentage of the procedurally generated LUTs.\n");
  atexit(FUN_142eb212f);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca255d8,L"r.LensDistortion.Panini.D",&local_58,
                L"Allow and configure to apply a panini distortion to the rendered image. Values between 0 and 1 allow to fade the effect (lerp).\nImplementation from research paper \"Pannini: A New Projection for Rendering Wide Angle Perspective Images\"\n 0: off (default)\n>0: enabled (requires an extra post processing pass if upsampling wasn\'t used - see r.ScreenPercentage)\n 1: Panini cylindrical stereographic projection"
               );
  atexit(FUN_142eb2174);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca255f0,L"r.LensDistortion.Panini.S",&local_58,
                L"Panini projection\'s hard vertical compression factor.\n 0: no vertical compression factor (default)\n 1: Hard vertical compression"
               );
  atexit(FUN_142eb21b9);
  local_50 = FUN_145f19f00;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca25720,&local_58);
  DAT_14ca25730 = 0;
  atexit((_func_5014 *)&LAB_142eb2cf3);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,4);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca25738,L"r.FXAA.Quality",&local_58,
                L"Selects the quality permutation of FXAA.\n 0: Console\n 1: PC medium-dither 3-sample\n 2: PC medium-dither 5-sample\n 3: PC medium-dither 8-sample\n 4: PC low-dither 12-sample (Default)\n 5: PC extrem quality 12-samples"
               );
  atexit(FUN_142eb2d0e);
  local_50 = FUN_141592704;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca25868,&local_58);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca25878,L"r.Mobile.AmbientOcclusion",&local_58,
                L"Caution: An extra sampler will be occupied in mobile base pass pixel shader after enable the mobile ambient occlusion.\n0: Disable Ambient Occlusion on mobile platform. [default]\n1: Enable Ambient Occlusion on mobile platform.\n"
               );
  atexit(FUN_142eb3408);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca25890,L"r.Mobile.AmbientOcclusionTechnique",&local_58,
                L"0: GTAO (default).\n1: SSAO.\n");
  atexit(FUN_142eb344d);
  local_58._0_4_ = 2;
  local_68 = 4;
  FUN_14078dbce(&DAT_14ca258a8,L"r.Mobile.GTAOPreIntegratedTextureType",&local_58,
                L"0: No Texture.\n1: Texture2D LUT.\n2: Volume LUT(Default).");
  atexit(FUN_142eb3492);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca258c0,L"r.Mobile.AmbientOcclusionQuality",&local_58,
                L"The quality of screen space ambient occlusion on mobile platform.\n0: Disabled.\n1: Low.(Default)\n2: Medium.\n3: High.\n"
               );
  atexit(FUN_142eb34d7);
  local_58._0_4_ = 2;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca258d8,L"r.Mobile.AmbientOcclusionShaderType",&local_58,
                L"0: ComputeShader.\n1: Seperate ComputeShader.\n2: PixelShader.\n");
  atexit(FUN_142eb351c);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca258f0,L"r.Mobile.AmbientOcclusionDepthBoundsTest",&local_58,
                L"Whether to use depth bounds test to cull distant pixels during AO pass. This option is only valid when pixel shader path is used"
               );
  atexit(FUN_142eb3561);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca25908,L"r.Mobile.SSAOHalfResolution",&local_58,
                L"Whether to calculate SSAO at half resolution.\n0: Disabled.\n1: Half Resolution with bilinear upsample\n2: Half Resolution with 4 tap bilateral upsample\n3: Half Resolution with 9 tap bilateral upsample\n"
               );
  atexit(FUN_142eb35a6);
  _DAT_14ca2592c = 0x2000000020;
  local_50 = FUN_145d9fca8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca25a50,&local_58);
  _DAT_14ca25a60 = 0x800000010;
  local_50 = FUN_145ee1cb0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca25b80,&local_58);
  _DAT_14ca25b90 = 0x800000010;
  local_50 = FUN_145db50e8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca25cb0,&local_58);
  local_50 = FUN_145ee2198;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca25dd8,&local_58);
  local_50 = FUN_145ee2680;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca25f00,&local_58);
  local_50 = FUN_145e43890;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26028,&local_58);
  local_50 = FUN_145e6b0c0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26150,&local_58);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca26160,L"r.GaussianBloom.Cross",&local_58,
                L"Experimental feature to give bloom kernel a more bright center sample (values between 1 and 3 work without causing aliasing)\nExisting bloom get lowered to match the same brightness\n<0 for a anisomorphic lens flare look (X only)\n 0 off (default)\n>0 for a cross look (X and Y)"
               );
  atexit(FUN_142eb5e57);
  local_50 = FUN_142eb5e9c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26178,&local_58);
  local_50 = FUN_142eb60dc;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26188,&local_58);
  local_50 = FUN_145f54d98;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca262c0,&local_58);
  local_50 = FUN_145f5538e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca263e8,&local_58);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca263f8,L"r.Color.Min",&local_58,
                L"Allows to define where the value 0 in the color channels is mapped to after color grading.\nThe value should be around 0, positive: a gray scale is added to the darks, negative: more dark values become black, Default: 0"
               );
  atexit(FUN_142eb6519);
  local_58._0_4_ = 0x3f000000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca26410,L"r.Color.Mid",&local_58,
                L"Allows to define where the value 0.5 in the color channels is mapped to after color grading (This is similar to a gamma correction).\nValue should be around 0.5, smaller values darken the mid tones, larger values brighten the mid tones, Default: 0.5"
               );
  atexit(FUN_142eb655e);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca26428,L"r.Color.Max",&local_58,
                L"Allows to define where the value 1.0 in the color channels is mapped to after color grading.\nValue should be around 1, smaller values darken the highlights, larger values move more colors towards white, Default: 1"
               );
  atexit(FUN_142eb65a3);
  local_58._0_4_ = 0x20;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca26440,L"r.LUT.Size",&local_58,L"Size of film LUT");
  atexit(FUN_142eb65e8);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca26458,L"r.Color.Grading",&local_58,
                L"Controls whether post process settings\'s color grading settings should be applied."
               );
  atexit(FUN_142eb662d);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca26470,L"r.LUT.UpdateEveryFrame",&local_58,
                L"Controls whether the tonemapping LUT pass is executed every frame.");
  atexit(FUN_142eb6672);
  local_58._0_4_ = 0x43960000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca26488,L"r.HDR.MaxGameNits",&local_58,
                L"Max brightness which we care about in game");
  atexit(FUN_142eb66b7);
  local_58._0_4_ = 0x447a0000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca264a0,L"r.HDR.MaxTvNits",&local_58,L"Max brightness that the TV can push");
  atexit(FUN_142eb66fc);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca264b8,L"r.Tonemapper.Calibrate",&local_58,
                L"Overrides the tonemapper to produce the calibration screen   0: off(default)\n\t 1: Output Gray Bars\n   2: Output White Boxes"
               );
  atexit(FUN_142eb6741);
  local_50 = FUN_14155e80e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca265e8,&local_58);
  local_50 = FUN_145ea1304;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26710,&local_58);
  local_50 = FUN_145dd0028;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26c70,&local_58);
  local_50 = FUN_145ee2b68;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26d98,&local_58);
  local_50 = FUN_145f32760;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26ec0,&local_58);
  local_50 = FUN_145f32d54;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26fe8,&local_58);
  local_50 = FUN_142eb8bdc;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca26ff8,&local_58);
  local_50 = FUN_142eb8e1c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27008,&local_58);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca27018,L"r.EyeAdaptation.PreExposureOverride",&local_58,
                L"Overide the scene pre-exposure by a custom value. \n= 0 : No override\n> 0 : Override PreExposure\n"
               );
  atexit(FUN_142eba961);
  local_58._0_4_ = 0xffffffff;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca27030,L"r.EyeAdaptation.MethodOverride",&local_58,
                L"Override the camera metering method set in post processing volumes\n-2: override with custom settings (for testing Basic Mode)\n-1: no override\n 1: Auto Histogram-based\n 2: Auto Basic\n 3: Manual"
               );
  atexit(FUN_142eba9a6);
  local_58._0_4_ = 0x3fc00000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca27048,L"r.EyeAdaptation.ExponentialTransitionDistance",&local_58,
                L"The auto exposure moves linearly, but when it gets ExponentialTransitionDistance F-stops away from the\ntarget exposure it switches to as slower exponential function.\n"
               );
  atexit(FUN_142eba9eb);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca27060,L"r.EyeAdaptation.VisualizeDebugType",&local_58,
                L"When enabling Show->Visualize->HDR (Eye Adaptation) is enabled, this flag controls the scene color.\n    0: Scene Color after tonemapping (default)\n    1: Histogram Debug\n    2: Luminance\n"
               );
  atexit(FUN_142ebaa30);
  local_58._0_4_ = 0x3f47ae14;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca27078,L"r.EyeAdaptation.LensAttenuation",&local_58,
                L"The camera lens attenuation (q). Set this number to 0.78 for lighting to be unitless (1.0cd/m^2 becomes 1.0 at EV100) or 0.65 to match previous versions (1.0cd/m^2 becomes 1.2 at EV100)."
               );
  atexit(FUN_142ebaa75);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca27090,L"r.EyeAdaptation.BlackHistogramBucketInfluence",&local_58,
                L"This parameter controls how much weight to apply to completely dark 0.0 values in the exposure histogram.\nWhen set to 1.0, fully dark pixels will accumulate normally, whereas when set to 0.0 fully dark pixels\nwill have no influence.\n"
               );
  atexit(FUN_142ebaaba);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_68 = 0x60;
  FUN_140bd5914(&DAT_14ca270a8,L"r.AutoExposure.IgnoreMaterials",&local_58,
                L"(Experimental) Whether to calculate auto exposure assuming every surface uses a perfectly diffuse white material.\n(default: false)"
               );
  atexit(FUN_142ebaaff);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca270c0,L"r.AutoExposure.LuminanceMethod",&local_58,
                L"0 - Uniform.\n1 - NSTC.\n2 - Working Color Space.");
  atexit(FUN_142ebab44);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca270d8,L"r.AutoExposure.IgnoreMaterials.ReconstructFromSceneColor",&local_58
                ,&DAT_149dfb77a);
  atexit(FUN_142ebab89);
  local_58._0_4_ = 0x41200000;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca270f0,L"r.AutoExposure.IgnoreMaterials.EvaluationPositionBias",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142ebabce);
  local_58._0_4_ = 0x3e3851ec;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca27108,L"r.AutoExposure.IgnoreMaterials.LuminanceScale",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142ebac13);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x3c23d70a);
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca27120,L"r.AutoExposure.IgnoreMaterials.MinBaseColorLuminance",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142ebac58);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x60;
  FUN_140bd5914(&DAT_14ca27138,L"r.AutoExposure.IgnoreMaterials.UsePrecalculatedIlluminance",
                &local_58,&DAT_149dfb77a);
  atexit(FUN_142ebac9d);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca27150,L"r.AutoExposure.IgnoreMaterials.DownscaleFactor",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142ebace2);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_68 = 0x20;
  FUN_140bd5914(&DAT_14ca27168,L"r.AutoExposure.IgnoreMaterials.Debug",&local_58,&DAT_149dfb77a);
  atexit(FUN_142ebad27);
  local_50 = FUN_141585470;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca272a8,&local_58);
  local_50 = FUN_145ea60f0;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca273d0,&local_58);
  local_50 = FUN_145f80152;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca274f8,&local_58);
  local_50 = FUN_14153ec90;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27620,&local_58);
  local_50 = FUN_145eae116;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27748,&local_58);
  local_50 = FUN_145ea6664;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27870,&local_58);
  local_58._0_4_ = 0x42c80000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca27890,L"r.Bloom.ScreenPercentage",&local_58,
                L"Controles the axis resolution of the FFT convolution for bloom.\n");
  atexit(FUN_142ebc554);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca278a8,L"r.Bloom.CacheKernel",&local_58,
                L"Whether to cache the kernel in spectral domain.");
  atexit(FUN_142ebc599);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca278c0,L"r.Bloom.AsyncCompute",&local_58,
                L"Whether to run FFT bloom on async compute.\n");
  atexit(FUN_142ebc5de);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca278d8,L"r.Bloom.WarnKernelResolution",&local_58,
                L"Whether to emit a warning when the resolution of the kernel is unecessary to high.\n 0: Disabled;\n 1: Emit the warning on consoles (default);\n 2: Emit the warning on all platforms;\n"
               );
  atexit(FUN_142ebc623);
  local_50 = FUN_142ebc668;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca278f0,&local_58);
  local_50 = FUN_142ebc8a8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27900,&local_58);
  local_50 = FUN_142ebcae8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27910,&local_58);
  local_50 = FUN_142ebcd28;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27920,&local_58);
  local_50 = FUN_142ebcf68;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27930,&local_58);
  local_50 = FUN_142ebd1a8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27940,&local_58);
  local_50 = FUN_142ebd3e8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27950,&local_58);
  local_50 = FUN_142ebd628;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27960,&local_58);
  local_50 = FUN_142ebd868;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27970,&local_58);
  local_50 = FUN_142ebdaa8;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27980,&local_58);
  local_50 = FUN_145eae68c;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27aa8,&local_58);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca27ab8,L"r.Histogram.UseAtomic",&local_58,
                L"Uses atomic to speed up the generation of the histogram.");
  atexit(FUN_142ec2979);
  local_50 = FUN_142ec29be;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27ad0,&local_58);
  local_50 = FUN_142ec2bfe;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27ae0,&local_58);
  local_50 = FUN_142ec2e3e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27af0,&local_58);
  local_50 = FUN_142ec307e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27b00,&local_58);
  _DAT_14ca27b18 = 0xffffffff;
  DAT_14ca27b1c = 5;
  DAT_14ca27b1d = 1;
  DAT_14ca27b1e = 0;
  DAT_14ca27b20 = 0;
  DAT_14ca27b10 = &PTR_FUN_14a2bb0c0;
  FUN_1462fb0e0();
  atexit(FUN_142ec3348);
  local_50 = FUN_145dd4eec;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27c40,&local_58);
  local_50 = FUN_146095c46;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27d68,&local_58);
  local_58._0_4_ = 0x3c23d70a;
  local_68 = 0x20;
  FUN_140a6b41e(&DAT_14ca27d78,L"r.DepthOfField.NearBlurSizeThreshold",&local_58,
                L"Sets the minimum near blur size before the effect is forcably disabled. Currently only affects Gaussian DOF.\n (default: 0.01)"
               );
  atexit(FUN_142ec37d6);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x42c80000);
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca27d90,L"r.DepthOfField.MaxSize",&local_58,
                L"Allows to clamp the gaussian depth of field radius (for better performance), default: 100"
               );
  atexit(FUN_142ec381b);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_68 = 0x60;
  FUN_140bd5914(&DAT_14ca27da8,L"r.Bloom.ApplyLocalExposure",&local_58,
                L"Whether to apply local exposure when calculating bloom, default: true");
  atexit(FUN_142ec3860);
  local_68 = 0x20;
  FUN_14153156c(&DAT_14ca27dc0,L"r.PostProcessing.PropagateAlpha",&DAT_14ca27dd0,
                L"Enforce alpha in scene color (overriding r.SceneColorFormat if necessary) and propagate it through the renderer\'s post-processing chain, default: false"
               );
  atexit(FUN_142ec38a5);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca27dd8,L"r.PostProcessing.PreferCompute",&local_58,
                L"Will use compute shaders for post processing where implementations available.");
  atexit(FUN_142ec38ea);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca27df0,L"r.PostProcessing.QuarterResolutionDownsample",&local_58,
                L"Uses quarter resolution downsample instead of half resolution to feed into exposure / bloom."
               );
  atexit(FUN_142ec392f);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca27e08,L"r.PostProcessing.DownsampleQuality",&local_58,
                L"Defines the quality used for downsampling to half or quarter res the scene color in post processing chain.\n 0: low quality (default)\n 1: high quality\n"
               );
  atexit(FUN_142ec3974);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca27e20,L"r.PostProcessing.DownsampleChainQuality",&local_58,
                L"Defines the quality used for downsampling to the scene color in scene color chains.\n 0: low quality\n 1: high quality (default)\n"
               );
  atexit(FUN_142ec39b9);
  local_50 = FUN_145eaec02;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca27f60,&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eef9d8 FUN_142eef9d8 body=69 status=ok
// SIG undefined FUN_142eef9d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eef9d8(void)

{
  _DAT_14ca2c5e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eefa1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c5f0,1);
  return;
}



// FUNCTION 142eefa1e FUN_142eefa1e body=576 status=ok
// SIG undefined FUN_142eefa1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142eefa1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca310a8) {
    FUN_144b3d300(&DAT_14ca310a8);
    if (DAT_14ca310a8 == -1) {
      FUN_142f10356();
      if ((DAT_14ca31227 & 2) == 0) {
        DAT_14ca31227 = DAT_14ca31227 | 2;
        _DAT_14ca311c8 = L"FLensFlareBlurVS";
        _DAT_14ca311e0 = FUN_146826540;
        _DAT_14ca311e8 = FUN_146825d77;
        _DAT_14ca311f0 = FUN_146825fd6;
        _DAT_14ca311f8 = FUN_1407e02ea;
        _DAT_14ca31200 = FUN_146826273;
        _DAT_14ca311d8 = FUN_142f10ccc;
        _DAT_14ca31218 = 0xffffffff000000e0;
        _DAT_14ca31220 = 8;
        DAT_14ca31224 = 0;
        _DAT_14ca31208 = &LAB_142f10cf8;
        _DAT_14ca31228 = L"BASE";
        DAT_14ca31252 = 4;
        _DAT_14ca31230 = FUN_140b35ae4();
        _DAT_14ca31238 = DAT_14ca311d0;
        _DAT_14ca31240 = &LAB_14682652b;
        DAT_14ca311d0 = &DAT_14ca31228;
        DAT_14ca31225 = DAT_14ca31225 + '\x01';
        _DAT_14ca31248 = 0x100000000;
        if (*(char *)(_DAT_14ca31230 + 100) != '\0') {
          DAT_14ca31226 = DAT_14ca31226 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca311c0);
      }
      FUN_140db5666(&DAT_14ca31000,0,&DAT_14ca311c0,L"FLensFlareBlurVS",
                    L"/Engine/Private/PostProcessLensFlares.usf",L"LensFlareBlurVS",0,1,
                    FUN_142f102c0,FUN_142f10260,&LAB_142f1025c,&LAB_142f10258,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca310b0);
      _DAT_14ca31000 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f1034a);
      _Init_thread_footer(&DAT_14ca310a8);
    }
  }
  return &DAT_14ca31000;
}



// FUNCTION 142eefc5e FUN_142eefc5e body=576 status=ok
// SIG undefined FUN_142eefc5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142eefc5e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31300) {
    FUN_144b3d300(&DAT_14ca31300);
    if (DAT_14ca31300 == -1) {
      FUN_142f10dfa();
      if ((DAT_14ca313f7 & 2) == 0) {
        DAT_14ca313f7 = DAT_14ca313f7 | 2;
        _DAT_14ca31398 = L"FLensFlareBlurPS";
        _DAT_14ca313b0 = FUN_146826540;
        _DAT_14ca313b8 = FUN_146825d77;
        _DAT_14ca313c0 = FUN_146825fd6;
        _DAT_14ca313c8 = FUN_1407e02ea;
        _DAT_14ca313d0 = FUN_146826273;
        _DAT_14ca313a8 = FUN_142f110d2;
        _DAT_14ca313e8 = 0xffffffff000000e0;
        _DAT_14ca313f0 = 8;
        DAT_14ca313f4 = 0;
        _DAT_14ca313d8 = &LAB_142f110fe;
        _DAT_14ca313f8 = L"BASE";
        DAT_14ca31422 = 4;
        _DAT_14ca31400 = FUN_140b35ae4();
        _DAT_14ca31408 = DAT_14ca313a0;
        _DAT_14ca31410 = &LAB_14682652b;
        DAT_14ca313a0 = &DAT_14ca313f8;
        DAT_14ca313f5 = DAT_14ca313f5 + '\x01';
        _DAT_14ca31418 = 0x100000000;
        if (*(char *)(_DAT_14ca31400 + 100) != '\0') {
          DAT_14ca313f6 = DAT_14ca313f6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca31390);
      }
      FUN_140db5666(&DAT_14ca31258,0,&DAT_14ca31390,L"FLensFlareBlurPS",
                    L"/Engine/Private/PostProcessLensFlares.usf",L"LensFlareBlurPS",3,1,
                    FUN_142f10d64,FUN_142f10d04,&LAB_142f10d00,&LAB_142f10cfc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca31308);
      _DAT_14ca31258 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f10dee);
      _Init_thread_footer(&DAT_14ca31300);
    }
  }
  return &DAT_14ca31258;
}



// FUNCTION 142eefe9e FUN_142eefe9e body=576 status=ok
// SIG undefined FUN_142eefe9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142eefe9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca314d0) {
    FUN_144b3d300(&DAT_14ca314d0);
    if (DAT_14ca314d0 == -1) {
      FUN_142f11200();
      if ((DAT_14ca315c7 & 2) == 0) {
        DAT_14ca315c7 = DAT_14ca315c7 | 2;
        _DAT_14ca31568 = L"FLensFlareCompositePS";
        _DAT_14ca31580 = FUN_146826540;
        _DAT_14ca31588 = FUN_146825d77;
        _DAT_14ca31590 = FUN_146825fd6;
        _DAT_14ca31598 = FUN_1407e02ea;
        _DAT_14ca315a0 = FUN_146826273;
        _DAT_14ca31578 = FUN_142f11568;
        _DAT_14ca315b8 = 0xffffffff000000e0;
        _DAT_14ca315c0 = 8;
        DAT_14ca315c4 = 0;
        _DAT_14ca315a8 = &LAB_142f11594;
        _DAT_14ca315c8 = L"BASE";
        DAT_14ca315f2 = 4;
        _DAT_14ca315d0 = FUN_140b35ae4();
        _DAT_14ca315d8 = DAT_14ca31570;
        _DAT_14ca315e0 = &LAB_14682652b;
        DAT_14ca31570 = &DAT_14ca315c8;
        DAT_14ca315c5 = DAT_14ca315c5 + '\x01';
        _DAT_14ca315e8 = 0x100000000;
        if (*(char *)(_DAT_14ca315d0 + 100) != '\0') {
          DAT_14ca315c6 = DAT_14ca315c6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca31560);
      }
      FUN_140db5666(&DAT_14ca31428,0,&DAT_14ca31560,L"FLensFlareCompositePS",
                    L"/Engine/Private/PostProcessLensFlares.usf",L"LensFlareCompositePS",3,1,
                    FUN_142f1116a,FUN_142f1110a,&LAB_142f11106,&LAB_142f11102,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca314d8);
      _DAT_14ca31428 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f111f4);
      _Init_thread_footer(&DAT_14ca314d0);
    }
  }
  return &DAT_14ca31428;
}



// FUNCTION 142ef00de FUN_142ef00de body=576 status=ok
// SIG undefined FUN_142ef00de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ef00de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca316a0) {
    FUN_144b3d300(&DAT_14ca316a0);
    if (DAT_14ca316a0 == -1) {
      FUN_142f11696();
      if ((DAT_14ca31797 & 2) == 0) {
        DAT_14ca31797 = DAT_14ca31797 | 2;
        _DAT_14ca31738 = L"FLensFlareCopyBloomPS";
        _DAT_14ca31750 = FUN_146826540;
        _DAT_14ca31758 = FUN_146825d77;
        _DAT_14ca31760 = FUN_146825fd6;
        _DAT_14ca31768 = FUN_1407e02ea;
        _DAT_14ca31770 = FUN_146826273;
        _DAT_14ca31748 = FUN_142f118ee;
        _DAT_14ca31788 = 0xffffffff000000e0;
        _DAT_14ca31790 = 8;
        DAT_14ca31794 = 0;
        _DAT_14ca31778 = &LAB_142f1191a;
        _DAT_14ca31798 = L"BASE";
        DAT_14ca317c2 = 4;
        _DAT_14ca317a0 = FUN_140b35ae4();
        _DAT_14ca317a8 = DAT_14ca31740;
        _DAT_14ca317b0 = &LAB_14682652b;
        DAT_14ca31740 = &DAT_14ca31798;
        DAT_14ca31795 = DAT_14ca31795 + '\x01';
        _DAT_14ca317b8 = 0x100000000;
        if (*(char *)(_DAT_14ca317a0 + 100) != '\0') {
          DAT_14ca31796 = DAT_14ca31796 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca31730);
      }
      FUN_140db5666(&DAT_14ca315f8,0,&DAT_14ca31730,L"FLensFlareCopyBloomPS",
                    L"/Engine/Private/PostProcessLensFlares.usf",L"LensFlareCopyBloomPS",3,1,
                    FUN_142f11600,FUN_142f115a0,&LAB_142f1159c,&LAB_142f11598,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca316a8);
      _DAT_14ca315f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f1168a);
      _Init_thread_footer(&DAT_14ca316a0);
    }
  }
  return &DAT_14ca315f8;
}



// FUNCTION 142ef031e FUN_142ef031e body=123 status=ok
// SIG undefined FUN_142ef031e(void)

bool FUN_142ef031e(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  
  if (*(int *)(DAT_14ca2c5f8 + 4) < 1) {
    bVar2 = false;
  }
  else {
    bVar1 = true;
    if ((*(float *)(param_1 + 0x2a14) * *(float *)(param_1 + 0x2a14) < 1e-05) &&
       (*(float *)(param_1 + 0x2a18) * *(float *)(param_1 + 0x2a18) < 1e-05)) {
      bVar1 = 1e-05 <= *(float *)(param_1 + 0x2a1c) * *(float *)(param_1 + 0x2a1c);
    }
    bVar2 = false;
    if ((bVar1) && (1e-08 < *(float *)(param_1 + 0x2a24))) {
      bVar2 = 1e-08 < *(float *)(param_1 + 0x2a10);
    }
  }
  return bVar2;
}



// FUNCTION 142ef0399 FUN_142ef0399 body=5718 status=ok
// SIG undefined FUN_142ef0399(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef0399(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  undefined2 uVar19;
  uint uVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined1 uVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_5d8 [32];
  wchar_t *local_5b8;
  wchar_t *local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a0;
  code *local_598;
  code *local_590;
  undefined1 *local_588;
  undefined1 *local_580;
  undefined1 *local_578;
  undefined1 *local_570;
  undefined4 local_568;
  undefined8 local_560;
  ulonglong *local_550;
  undefined8 *local_548;
  ulonglong local_540;
  ulonglong local_538;
  longlong local_530;
  ulonglong local_528;
  longlong local_520;
  longlong local_518;
  ulonglong local_510;
  longlong local_508;
  ulonglong local_500;
  undefined8 local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  undefined8 *local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  float local_4c0;
  float local_4bc;
  longlong *local_4b8;
  undefined8 local_4b0;
  longlong local_4a8;
  ulonglong *local_4a0;
  longlong local_498;
  undefined1 local_489;
  ulonglong local_488;
  ulonglong local_480;
  longlong local_478;
  undefined8 *local_470;
  longlong local_468;
  undefined *local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  longlong local_450;
  undefined8 auStack_2ba [2];
  undefined1 auStack_2aa [2];
  undefined8 *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  uint local_28c;
  undefined4 local_288;
  int local_284;
  int local_280;
  undefined4 local_27c;
  undefined2 local_278;
  undefined4 local_276;
  undefined8 local_198;
  undefined1 local_188 [112];
  ulonglong local_118;
  undefined4 local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  lVar13 = *(longlong *)(DAT_14ca94e18 + 0x10);
  local_4f0 = param_3;
  local_4a0 = param_1;
  if (*(longlong *)(DAT_14cb0d2b0 + 0x408) != 0) {
    lVar12 = FUN_1447b4020();
    if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x10) != 0)) {
      lVar13 = *(longlong *)(lVar12 + 0x10);
    }
  }
  local_520 = lVar13;
  if (*(longlong *)(local_4f0 + 0x2a30) != 0) {
    lVar13 = FUN_1447b4020();
    if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x10) != 0)) {
      local_520 = *(longlong *)(lVar13 + 0x10);
    }
  }
  ppuVar17 = &local_2a8;
  FUN_1448a0832(ppuVar17,param_2,param_4);
  lVar12 = local_4f0;
  local_528 = *param_5;
  uVar27 = param_5[1];
  lVar13 = param_5[2];
  if (*param_4 != 0) {
    local_538 = CONCAT44(uStack_29c,uStack_2a0);
    local_540 = CONCAT44(uStack_294,uStack_298);
    uVar16 = (undefined4)CONCAT71((int7)((ulonglong)ppuVar17 >> 8),1);
    local_4d8 = local_2a8;
    if (((int)param_4[2] != (int)param_4[1]) ||
       (*(int *)((longlong)param_4 + 0x14) != *(int *)((longlong)param_4 + 0xc)))
    goto LAB_142ef052c;
  }
  local_4d8 = (undefined8 *)*param_6;
  local_538 = param_6[1];
  local_540 = param_6[2];
  uVar16 = 0;
LAB_142ef052c:
  local_4e0 = CONCAT44(local_4e0._4_4_,uVar16);
  fVar2 = *(float *)(local_4f0 + 0x2a14);
  fVar30 = *(float *)(local_4f0 + 0x2a18);
  fVar28 = *(float *)(local_4f0 + 0x2a1c);
  fVar3 = *(float *)(local_4f0 + 0x2a20);
  fVar29 = *(float *)(local_4f0 + 0x2a24);
  fVar31 = *(float *)(local_4f0 + 0x2a10) * *(float *)(local_4f0 + 0x2814);
  uVar16 = *(undefined4 *)(local_4f0 + 0x2a28);
  local_488 = *(ulonglong *)(*(longlong *)(local_528 + 0x38) + 0x84);
  local_4b0 = DAT_14c9e72f8;
  local_28c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_276 = 0xff000a00;
  local_2a8 = (undefined8 *)0x9;
  local_27c = 0x10001;
  local_278 = 0x101;
  uStack_2a0 = 1;
  local_288 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  local_284 = DAT_14ca84e40;
  if ((int)local_488 < DAT_14ca84e40) {
    local_284 = (int)local_488;
  }
  local_4f8 = DAT_14c9c0de0;
  if (local_284 < 2) {
    local_284 = 1;
  }
  iVar11 = (int)(local_488 >> 0x20);
  local_280 = DAT_14ca84e40;
  if (iVar11 < DAT_14ca84e40) {
    local_280 = iVar11;
  }
  if (local_280 < 2) {
    local_280 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar18 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar24 = uVar18 + 0x120;
  local_550 = puVar1;
  local_480 = uVar27;
  local_478 = lVar13;
  if (*(ulonglong *)(param_2 + 0x78) < uVar24) {
    FUN_140023dd8(puVar1,0x128);
    uVar18 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar24 = uVar18 + 0x120;
  }
  uVar20 = (int)lVar13 - (int)uVar27;
  local_518 = param_2 + 0x178;
  *(ulonglong *)(param_2 + 0x70) = uVar24;
  FUN_1456bbb8c(uVar18,L"LensFlareBlur",&local_2a8,0);
  iVar11 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_518,iVar11);
  }
  puVar1 = local_550;
  local_4c8 = local_540 >> 0x20;
  local_4d0 = local_538 >> 0x20;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar11 * 8) = uVar18;
  *(int *)(uVar18 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar22 + 0x24;
  local_500 = uVar18;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_550,0x130);
    puVar22 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar15 = puVar22 + 0x24;
  }
  local_498 = lVar12 + 0x2a38;
  fVar29 = fVar29 * (float)(int)uVar20 * 0.01;
  uVar27 = lVar13 - (uVar27 & 0xffffffff00000000) & 0xffffffff00000000 | (ulonglong)uVar20;
  *local_550 = (ulonglong)puVar15;
  *puVar22 = &PTR_FUN_14a2c4178;
  local_548 = puVar22 + 2;
  puVar22[2] = 0;
  lVar13 = 0x32;
  do {
    puVar15 = (undefined8 *)((longlong)puVar22 + lVar13 + -0x12);
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined4 *)((longlong)puVar22 + lVar13 + -2) = 0xffff0000;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0xf2);
  *(undefined4 *)((longlong)puVar22 + 0xf4) = 0;
  puVar22[0x1c] = 0;
  puVar22[0x1d] = 0;
  *(undefined2 *)(puVar22 + 0x1e) = 0;
  *(undefined4 *)(puVar22 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)puVar22 + 0xfc) = 0xffffffff;
  *(undefined4 *)(puVar22 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)puVar22 + 0x104) = 0xffffffff;
  *(undefined4 *)(puVar22 + 0x21) = 0;
  *(undefined2 *)((longlong)puVar22 + 0x10c) = 0;
  puVar22[0x22] = 0;
  plVar21 = (longlong *)(param_2 + 0x98);
  iVar11 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar11 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar11 + 1U) {
    FUN_1448cfae8(plVar21,iVar11);
  }
  *(undefined8 **)(*plVar21 + (longlong)iVar11 * 8) = puVar22;
  puVar22[2] = local_528;
  puVar22[4] = local_500;
  puVar22[5] = 0;
  *(undefined4 *)(puVar22 + 6) = 0xffff0002;
  lVar13 = 0x22;
  do {
    *(undefined8 *)((longlong)auStack_2ba + lVar13) = 0;
    *(undefined8 *)((longlong)auStack_2ba + lVar13 + 8) = 0;
    *(undefined4 *)(auStack_2aa + lVar13) = 0xffff0000;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0xe2);
  local_198 = 0;
  local_530 = param_2;
  local_4b8 = plVar21;
  memcpy(&local_2a8,local_548,0x110);
  FUN_144a2c7c2(local_188,&local_488);
  local_198 = local_4f8;
  local_110 = 1;
  local_108 = 1.0;
  if (1.0 <= fVar29 * fVar29) {
    local_108 = fVar29 * fVar29;
  }
  local_108 = 1.0 / local_108;
  local_100 = 0x3f000000;
  uVar6 = *(undefined8 *)(lVar12 + 0x13818);
  local_528 = uVar27;
  local_118 = uVar27;
  local_10c = fVar29;
  local_104 = uVar16;
  FUN_142eefa1e();
  FUN_1448e935e(uVar6,&local_458,&DAT_14ca31000,0);
  FUN_142eefa1e();
  local_510 = CONCAT44(uStack_454,local_458);
  local_4e8 = local_450;
  uVar6 = *(undefined8 *)(lVar12 + 0x13818);
  FUN_142eefc5e();
  FUN_1448e935e(uVar6,&local_458,&DAT_14ca31258,0);
  FUN_142eefc5e();
  uVar6 = CONCAT44(uStack_454,local_458);
  memcpy(&local_458,&local_2a8,0x1b0);
  lVar14 = local_478;
  uVar24 = local_480;
  uVar27 = local_488;
  FUN_142f109f0();
  lVar13 = local_530;
  FUN_140069376(local_530);
  puVar1 = local_550;
  puVar22 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar22 + 0x7a;
  if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
    FUN_140023dd8(local_550,0x3e0);
    puVar22 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar15 = puVar22 + 0x7a;
  }
  *local_550 = (ulonglong)puVar15;
  local_470 = local_548;
  local_468 = DAT_14ca31180;
  if (DAT_14ca31180 != 0) {
    LOCK();
    *(int *)(DAT_14ca31180 + 8) = *(int *)(DAT_14ca31180 + 8) + 1;
    UNLOCK();
  }
  local_460 = &DAT_14ca31138;
  local_5b8 = (wchar_t *)CONCAT71(local_5b8._1_7_,2);
  FUN_140068f1a(puVar22,&local_489,&local_470,1);
  *puVar22 = &PTR_FUN_14a2c4180;
  puVar22[0x38] = local_510;
  puVar22[0x39] = local_4e8;
  puVar22[0x3a] = uVar6;
  puVar22[0x3b] = local_450;
  memcpy(puVar22 + 0x3c,&local_458,0x1b0);
  lVar13 = local_530;
  puVar22[0x72] = local_520;
  puVar22[0x73] = local_4f8;
  puVar22[0x74] = local_4b0;
  puVar22[0x75] = uVar27;
  puVar22[0x76] = uVar24;
  puVar22[0x77] = lVar14;
  puVar22[0x78] = local_528;
  local_508 = local_530 + 0x168;
  iVar11 = *(int *)(local_530 + 0x170);
  *(uint *)(local_530 + 0x170) = iVar11 + 1U;
  if (*(uint *)(local_530 + 0x174) < iVar11 + 1U) {
    FUN_14470e57a(local_508,iVar11);
  }
  *(undefined8 **)(*(longlong *)(lVar13 + 0x168) + (longlong)iVar11 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x2c) = *(int *)(lVar13 + 0x170) + -1;
  FUN_140069100(lVar13,puVar22);
  puVar15 = local_4d8;
  puVar1 = local_550;
  uVar6 = *(undefined8 *)(local_4d8[7] + 0x84);
  iVar11 = (int)uVar6;
  local_284 = DAT_14ca84e40;
  if (iVar11 < DAT_14ca84e40) {
    local_284 = iVar11;
  }
  if (local_284 < 2) {
    local_284 = 1;
  }
  iVar11 = (int)((ulonglong)uVar6 >> 0x20);
  local_280 = DAT_14ca84e40;
  if (iVar11 < DAT_14ca84e40) {
    local_280 = iVar11;
  }
  local_2a8 = (undefined8 *)0x10009;
  local_28c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_276 = CONCAT22(0xff00,(ushort)*(byte *)(local_4d8[7] + 0x93) << 8);
  local_27c = 0x10001;
  local_278 = 0x101;
  uStack_2a0 = 1;
  local_288 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  if (local_280 < 2) {
    local_280 = 1;
  }
  uVar24 = *(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar27 = uVar24 + 0x120;
  if (*(ulonglong *)(lVar13 + 0x78) < uVar27) {
    FUN_140023dd8(local_550,0x128);
    uVar24 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar27 = uVar24 + 0x120;
  }
  *(ulonglong *)(lVar13 + 0x70) = uVar27;
  FUN_1456bbb8c(uVar24,L"LensFlareTexture",&local_2a8,0);
  plVar21 = local_4b8;
  iVar11 = *(int *)(lVar13 + 0x180);
  *(uint *)(lVar13 + 0x180) = iVar11 + 1U;
  if (*(uint *)(lVar13 + 0x184) < iVar11 + 1U) {
    FUN_14472c0f6(local_518,iVar11);
  }
  puVar1 = local_550;
  *(ulonglong *)(*(longlong *)(lVar13 + 0x178) + (longlong)iVar11 * 8) = uVar24;
  *(int *)(uVar24 + 0x9c) = *(int *)(lVar13 + 0x180) + -1;
  uVar26 = 2;
  local_510 = uVar24;
  if ((char)local_4e0 != '\0') {
    puVar23 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar22 = puVar23 + 0x24;
    if (*(undefined8 **)(lVar13 + 0x78) < puVar22) {
      FUN_140023dd8(local_550,0x130);
      puVar23 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar22 = puVar23 + 0x24;
    }
    *local_550 = (ulonglong)puVar22;
    *puVar23 = &PTR_FUN_14a2c4198;
    local_548 = puVar23 + 2;
    puVar23[2] = 0;
    lVar14 = 0x32;
    do {
      puVar22 = (undefined8 *)((longlong)puVar23 + lVar14 + -0x12);
      *puVar22 = 0;
      puVar22[1] = 0;
      *(undefined4 *)((longlong)puVar23 + lVar14 + -2) = 0xffff0000;
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != 0xf2);
    *(undefined4 *)((longlong)puVar23 + 0xf4) = 0;
    puVar23[0x1c] = 0;
    puVar23[0x1d] = 0;
    *(undefined2 *)(puVar23 + 0x1e) = 0;
    *(undefined4 *)(puVar23 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar23 + 0xfc) = 0xffffffff;
    *(undefined4 *)(puVar23 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)puVar23 + 0x104) = 0xffffffff;
    *(undefined4 *)(puVar23 + 0x21) = 0;
    *(undefined2 *)((longlong)puVar23 + 0x10c) = 0;
    puVar23[0x22] = 0;
    iVar11 = *(int *)(lVar13 + 0xa0);
    *(uint *)(lVar13 + 0xa0) = iVar11 + 1U;
    if (*(uint *)(lVar13 + 0xa4) < iVar11 + 1U) {
      FUN_1448cfae8(plVar21,iVar11);
    }
    *(undefined8 **)(*(longlong *)(lVar13 + 0x98) + (longlong)iVar11 * 8) = puVar23;
    puVar23[2] = puVar15;
    puVar23[4] = uVar24;
    puVar23[5] = 0;
    *(undefined4 *)(puVar23 + 6) = 0xffff0000;
    uVar6 = *(undefined8 *)(lVar12 + 0x13818);
    FUN_142ef00de();
    FUN_142ef00de();
    FUN_1448e935e(uVar6,&local_2a8,&DAT_14ca315f8,0);
    FUN_142ef00de();
    puVar23 = local_2a8;
    uVar10 = CONCAT44(uStack_29c,uStack_2a0);
    uVar6 = *(undefined8 *)(lVar12 + 0x13818);
    FUN_142f11696();
    puVar22 = local_548;
    local_2a8 = (undefined8 *)0x0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    FUN_1448f70da(puVar23,&DAT_14ca316a8,local_548,&local_2a8);
    FUN_142f11696();
    FUN_140069376(lVar13);
    puVar1 = local_550;
    puVar25 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar25 + 0x41;
    if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
      FUN_140023dd8(local_550,0x210);
      puVar25 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar25 + 0x41;
    }
    *local_550 = (ulonglong)puVar15;
    local_2a8 = puVar22;
    uStack_2a0 = (undefined4)DAT_14ca316f0;
    uStack_29c = (undefined4)((ulonglong)DAT_14ca316f0 >> 0x20);
    if (DAT_14ca316f0 != 0) {
      LOCK();
      *(int *)(DAT_14ca316f0 + 8) = *(int *)(DAT_14ca316f0 + 8) + 1;
      UNLOCK();
    }
    uStack_298 = 0x4ca316a8;
    uStack_294 = 1;
    local_5b8 = (wchar_t *)CONCAT71(local_5b8._1_7_,2);
    FUN_140068f1a(puVar25,&local_458,&local_2a8,1);
    uVar24 = local_510;
    *puVar25 = &PTR_FUN_14a2c41a0;
    puVar25[0x37] = puVar22;
    puVar25[0x38] = uVar6;
    puVar25[0x39] = puVar23;
    puVar25[0x3a] = uVar10;
    puVar25[0x3b] = local_538;
    puVar25[0x3c] = local_540;
    *(undefined1 (*) [16])(puVar25 + 0x3d) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((longlong)puVar25 + 500) = (undefined1  [16])0x0;
    iVar11 = *(int *)(local_530 + 0x170);
    *(uint *)(local_530 + 0x170) = iVar11 + 1U;
    if (*(uint *)(local_530 + 0x174) < iVar11 + 1U) {
      FUN_14470e57a(local_508,iVar11);
    }
    lVar13 = local_530;
    *(undefined8 **)(*(longlong *)(local_530 + 0x168) + (longlong)iVar11 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x2c) = *(int *)(local_530 + 0x170) + -1;
    FUN_140069100(local_530,puVar25);
    uVar26 = 1;
  }
  iVar11 = (int)local_538;
  iVar7 = (int)local_540;
  iVar8 = (int)local_4d0;
  iVar9 = (int)local_4c8;
  local_4c0 = fVar3 * fVar31 * 0.25;
  local_4bc = fVar28 * fVar31 * 0.25;
  local_518 = CONCAT44(local_518._4_4_,fVar30 * fVar31 * 0.25);
  local_4a8 = lVar13 + 0x198;
  uVar27 = 0;
  do {
    puVar1 = local_550;
    lVar14 = uVar27 * 0x10;
    fVar30 = *(float *)(local_498 + lVar14);
    fVar28 = *(float *)(local_498 + 4 + lVar14);
    fVar3 = *(float *)(local_498 + 8 + lVar14);
    fVar29 = *(float *)(local_498 + 0xc + lVar14);
    puVar22 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar15 = puVar22 + 0x28;
    if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
      FUN_140023dd8(local_550,0x150);
      puVar22 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar15 = puVar22 + 0x28;
    }
    *local_550 = (ulonglong)puVar15;
    *puVar22 = &PTR_FUN_14a2c41b8;
    local_548 = puVar22 + 2;
    puVar22[2] = 0;
    lVar14 = 0x32;
    do {
      puVar15 = (undefined8 *)((longlong)puVar22 + lVar14 + -0x12);
      *puVar15 = 0;
      puVar15[1] = 0;
      *(undefined4 *)((longlong)puVar22 + lVar14 + -2) = 0xffff0000;
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != 0xf2);
    *(undefined4 *)((longlong)puVar22 + 0xf4) = 0;
    puVar22[0x1c] = 0;
    puVar22[0x1d] = 0;
    *(undefined2 *)(puVar22 + 0x1e) = 0;
    *(undefined4 *)(puVar22 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar22 + 0xfc) = 0xffffffff;
    *(undefined4 *)(puVar22 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)puVar22 + 0x104) = 0xffffffff;
    *(undefined4 *)(puVar22 + 0x21) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x10c) = 0;
    puVar22[0x22] = 0;
    puVar22[0x24] = 0;
    iVar5 = *(int *)(lVar13 + 0xa0);
    *(uint *)(lVar13 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(lVar13 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(plVar21,iVar5);
    }
    puVar1 = local_550;
    *(undefined8 **)(*plVar21 + (longlong)iVar5 * 8) = puVar22;
    uVar4 = *(undefined1 *)(local_500 + 0x90);
    if ((*(char *)(local_500 + 0x92) == '\x04') || (*(char *)(local_500 + 0x92) == '\x01')) {
      uVar19 = *(undefined2 *)(local_500 + 0x8e);
    }
    else {
      uVar19 = 0;
    }
    puVar23 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar23 + 8;
    local_4c8 = uVar27;
    if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
      FUN_140023dd8(local_550,0x48);
      puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar23 + 8;
    }
    *(undefined8 **)(lVar13 + 0x70) = puVar15;
    puVar23[1] = *(undefined8 *)(local_500 + 8);
    puVar23[2] = 0;
    *(undefined1 *)(puVar23 + 3) = 1;
    *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
    *puVar23 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar23 + 5) = 0;
    *(undefined1 *)((longlong)puVar23 + 0x2a) = uVar4;
    *(undefined1 *)((longlong)puVar23 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar23 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar23 + 0x2e) = uVar19;
    *(undefined1 *)(puVar23 + 6) = 0;
    *(undefined1 *)((longlong)puVar23 + 0x32) = 0;
    puVar23[7] = local_500;
    iVar5 = *(int *)(lVar13 + 0x1a0);
    *(uint *)(lVar13 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(lVar13 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_4a8,iVar5);
    }
    *(undefined8 **)(*(longlong *)(lVar13 + 0x198) + (longlong)iVar5 * 8) = puVar23;
    *(int *)((longlong)puVar23 + 0x1c) = *(int *)(lVar13 + 0x1a0) + -1;
    puVar22[2] = puVar23;
    puVar22[4] = uVar24;
    puVar22[5] = 0;
    *(undefined1 *)(puVar22 + 6) = uVar26;
    *(undefined1 *)((longlong)puVar22 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x32) = 0xffff;
    puVar22[0x24] = local_4f8;
    *(float *)(puVar22 + 0x26) = fVar30 * fVar2 * fVar31 * 0.25;
    *(float *)((longlong)puVar22 + 0x134) = fVar28 * (float)local_518;
    *(float *)(puVar22 + 0x27) = fVar3 * local_4bc;
    *(float *)((longlong)puVar22 + 0x13c) = local_4c0 * fVar29;
    fVar30 = fVar29 * 7.0 + -3.5;
    uVar6 = *(undefined8 *)(lVar12 + 0x13818);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_570 = &LAB_14712ac08;
        local_578 = &LAB_14712ac0c;
        local_580 = &LAB_1472e3912;
        local_588 = &LAB_1472e3916;
        local_590 = FUN_1472e391a;
        local_598 = FUN_1472e3942;
        local_5b0 = L"ScreenPassVS";
        local_5b8 = L"/Engine/Private/ScreenPass.usf";
        local_560 = 0;
        local_568 = 0xe0;
        local_5a0 = 1;
        local_5a8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    FUN_1448e935e(uVar6,&local_2a8,&DAT_14ca4b6d8,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_570 = &LAB_14712ac08;
        local_578 = &LAB_14712ac0c;
        local_580 = &LAB_1472e3912;
        local_588 = &LAB_1472e3916;
        local_590 = FUN_1472e391a;
        local_598 = FUN_1472e3942;
        local_5b0 = L"ScreenPassVS";
        local_5b8 = L"/Engine/Private/ScreenPass.usf";
        local_560 = 0;
        local_568 = 0xe0;
        local_5a0 = 1;
        local_5a8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    local_4d8 = local_2a8;
    local_4d0 = CONCAT44(uStack_29c,uStack_2a0);
    uVar6 = *(undefined8 *)(lVar12 + 0x13818);
    FUN_142eefe9e();
    FUN_1448e935e(uVar6,&local_2a8,&DAT_14ca31428,0);
    FUN_142eefe9e();
    puVar22 = local_2a8;
    uVar27 = local_480;
    uVar6 = CONCAT44(uStack_29c,uStack_2a0);
    local_4e0 = DAT_14ca94df8;
    local_520 = DAT_14c9c0d98;
    local_528 = local_488;
    local_4e8 = local_478;
    FUN_142f11200();
    FUN_140069376(lVar13);
    puVar1 = local_550;
    puVar23 = (undefined8 *)(*(longlong *)(lVar13 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar23 + 0x49;
    if (*(undefined8 **)(lVar13 + 0x78) < puVar15) {
      FUN_140023dd8(local_550,0x250);
      puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar23 + 0x49;
    }
    *local_550 = (ulonglong)puVar15;
    local_2a8 = local_548;
    uStack_2a0 = (undefined4)DAT_14ca31520;
    uStack_29c = (undefined4)((ulonglong)DAT_14ca31520 >> 0x20);
    if (DAT_14ca31520 != 0) {
      LOCK();
      *(int *)(DAT_14ca31520 + 8) = *(int *)(DAT_14ca31520 + 8) + 1;
      UNLOCK();
    }
    fVar30 = fVar30 + fVar30;
    fVar28 = fVar30 * (float)(iVar9 - iVar8);
    fVar30 = fVar30 * (float)(iVar7 - iVar11);
    uStack_298 = 0x4ca314d8;
    uStack_294 = 1;
    local_5b8 = (wchar_t *)CONCAT71(local_5b8._1_7_,2);
    FUN_140068f1a(puVar23,&local_470,&local_2a8);
    lVar13 = local_530;
    *puVar23 = &PTR_FUN_14a2c41c0;
    puVar23[0x37] = puVar22;
    puVar23[0x38] = uVar6;
    puVar23[0x39] = local_548;
    puVar23[0x3a] = local_538;
    puVar23[0x3b] = local_540;
    puVar23[0x3c] = local_528;
    puVar23[0x3d] = uVar27;
    puVar23[0x3e] = local_4e8;
    puVar23[0x3f] = CONCAT44(fVar28,fVar30);
    puVar23[0x40] =
         CONCAT44((float)(iVar8 + iVar9) * 0.5 - fVar28 * 0.5,
                  (float)(iVar11 + iVar7) * 0.5 - fVar30 * 0.5);
    puVar23[0x41] = local_4d8;
    puVar23[0x42] = local_4d0;
    puVar23[0x43] = puVar22;
    puVar23[0x44] = uVar6;
    puVar23[0x45] = local_4b0;
    puVar23[0x46] = local_520;
    puVar23[0x47] = local_4e0;
    *(undefined1 *)(puVar23 + 0x48) = 0;
    *(uint *)((longlong)puVar23 + 0x244) = CONCAT31((undefined3)uStack_454,local_458._3_1_);
    *(undefined4 *)((longlong)puVar23 + 0x241) = local_458;
    iVar5 = *(int *)(local_530 + 0x170);
    *(uint *)(local_530 + 0x170) = iVar5 + 1U;
    if (*(uint *)(local_530 + 0x174) < iVar5 + 1U) {
      FUN_14470e57a(local_508,iVar5);
    }
    *(undefined8 **)(*(longlong *)(lVar13 + 0x168) + (longlong)iVar5 * 8) = puVar23;
    *(int *)((longlong)puVar23 + 0x2c) = *(int *)(lVar13 + 0x170) + -1;
    FUN_140069100(lVar13,puVar23);
    uVar27 = local_4c8 + 1;
    uVar26 = 1;
    lVar12 = local_4f0;
    plVar21 = local_4b8;
    uVar24 = local_510;
  } while (uVar27 != 8);
  *local_4a0 = local_510;
  local_4a0[1] = local_538;
  local_4a0[2] = local_540;
  if ((local_f0 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef19f0 FUN_142ef19f0 body=69 status=ok
// SIG undefined FUN_142ef19f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef19f0(void)

{
  _DAT_14ca2c640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ef1a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c648,1);
  return;
}



// FUNCTION 142ef1a36 FUN_142ef1a36 body=576 status=ok
// SIG undefined FUN_142ef1a36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ef1a36(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31870) {
    FUN_144b3d300(&DAT_14ca31870);
    if (DAT_14ca31870 == -1) {
      FUN_142f11a30();
      if ((DAT_14ca31967 & 2) == 0) {
        DAT_14ca31967 = DAT_14ca31967 | 2;
        _DAT_14ca31908 = L"FSetupLogLuminanceCS";
        _DAT_14ca31920 = FUN_146826540;
        _DAT_14ca31928 = FUN_146825d77;
        _DAT_14ca31930 = FUN_146825fd6;
        _DAT_14ca31938 = FUN_1407e02ea;
        _DAT_14ca31940 = FUN_146826273;
        _DAT_14ca31918 = FUN_142f11eb2;
        _DAT_14ca31958 = 0xffffffff000000e0;
        _DAT_14ca31960 = 8;
        DAT_14ca31964 = 0;
        _DAT_14ca31948 = &LAB_142f11ede;
        _DAT_14ca31968 = L"BASE";
        DAT_14ca31992 = 4;
        _DAT_14ca31970 = FUN_140b35ae4();
        _DAT_14ca31978 = DAT_14ca31910;
        _DAT_14ca31980 = &LAB_14682652b;
        DAT_14ca31910 = &DAT_14ca31968;
        DAT_14ca31965 = DAT_14ca31965 + '\x01';
        _DAT_14ca31988 = 0x100000000;
        if (*(char *)(_DAT_14ca31970 + 100) != '\0') {
          DAT_14ca31966 = DAT_14ca31966 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca31900);
      }
      FUN_140db5666(&DAT_14ca317c8,0,&DAT_14ca31900,L"FSetupLogLuminanceCS",
                    L"/Engine/Private/PostProcessLocalExposure.usf",L"SetupLogLuminanceCS",5,1,
                    FUN_142f1199a,FUN_142f1193a,&LAB_142f11922,&LAB_142f1191e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca31878);
      _DAT_14ca317c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f11a24);
      _Init_thread_footer(&DAT_14ca31870);
    }
  }
  return &DAT_14ca317c8;
}



// FUNCTION 142ef1c76 FUN_142ef1c76 body=576 status=ok
// SIG undefined FUN_142ef1c76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ef1c76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31a40) {
    FUN_144b3d300(&DAT_14ca31a40);
    if (DAT_14ca31a40 == -1) {
      FUN_142f11ff4();
      if ((DAT_14ca31b37 & 2) == 0) {
        DAT_14ca31b37 = DAT_14ca31b37 | 2;
        _DAT_14ca31ad8 = L"FApplyLocalExposureCS";
        _DAT_14ca31af0 = FUN_146826540;
        _DAT_14ca31af8 = FUN_146825d77;
        _DAT_14ca31b00 = FUN_146825fd6;
        _DAT_14ca31b08 = FUN_1407e02ea;
        _DAT_14ca31b10 = FUN_146826273;
        _DAT_14ca31ae8 = FUN_142f127b2;
        _DAT_14ca31b28 = 0xffffffff000000e0;
        _DAT_14ca31b30 = 8;
        DAT_14ca31b34 = 0;
        _DAT_14ca31b18 = &LAB_142f127de;
        _DAT_14ca31b38 = L"BASE";
        DAT_14ca31b62 = 4;
        _DAT_14ca31b40 = FUN_140b35ae4();
        _DAT_14ca31b48 = DAT_14ca31ae0;
        _DAT_14ca31b50 = &LAB_14682652b;
        DAT_14ca31ae0 = &DAT_14ca31b38;
        DAT_14ca31b35 = DAT_14ca31b35 + '\x01';
        _DAT_14ca31b58 = 0x100000000;
        if (*(char *)(_DAT_14ca31b40 + 100) != '\0') {
          DAT_14ca31b36 = DAT_14ca31b36 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca31ad0);
      }
      FUN_140db5666(&DAT_14ca31998,0,&DAT_14ca31ad0,L"FApplyLocalExposureCS",
                    L"/Engine/Private/PostProcessLocalExposure.usf",L"ApplyLocalExposureCS",5,1,
                    FUN_142f11f5e,FUN_142f11efe,&LAB_142f11ee6,&LAB_142f11ee2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca31a48);
      _DAT_14ca31998 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f11fe8);
      _Init_thread_footer(&DAT_14ca31a40);
    }
  }
  return &DAT_14ca31998;
}



// FUNCTION 142ef1eb6 FUN_142ef1eb6 body=576 status=ok
// SIG undefined FUN_142ef1eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ef1eb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31c10) {
    FUN_144b3d300(&DAT_14ca31c10);
    if (DAT_14ca31c10 == -1) {
      FUN_142f128f4();
      if ((DAT_14ca31d07 & 2) == 0) {
        DAT_14ca31d07 = DAT_14ca31d07 | 2;
        _DAT_14ca31ca8 = L"FFusionSetupCS";
        _DAT_14ca31cc0 = FUN_146826540;
        _DAT_14ca31cc8 = FUN_146825d77;
        _DAT_14ca31cd0 = FUN_146825fd6;
        _DAT_14ca31cd8 = FUN_1407e02ea;
        _DAT_14ca31ce0 = FUN_146826273;
        _DAT_14ca31cb8 = FUN_142f1302a;
        _DAT_14ca31cf8 = 0xffffffff000000e0;
        _DAT_14ca31d00 = 8;
        DAT_14ca31d04 = 0;
        _DAT_14ca31ce8 = &LAB_142f13056;
        _DAT_14ca31d08 = L"BASE";
        DAT_14ca31d32 = 4;
        _DAT_14ca31d10 = FUN_140b35ae4();
        _DAT_14ca31d18 = DAT_14ca31cb0;
        _DAT_14ca31d20 = &LAB_14682652b;
        DAT_14ca31cb0 = &DAT_14ca31d08;
        DAT_14ca31d05 = DAT_14ca31d05 + '\x01';
        _DAT_14ca31d28 = 0x100000000;
        if (*(char *)(_DAT_14ca31d10 + 100) != '\0') {
          DAT_14ca31d06 = DAT_14ca31d06 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca31ca0);
      }
      FUN_140db5666(&DAT_14ca31b68,0,&DAT_14ca31ca0,L"FFusionSetupCS",
                    L"/Engine/Private/PostProcessLocalExposure.usf",L"FusionSetupCS",5,1,
                    FUN_142f1285e,FUN_142f127fe,&LAB_142f127e6,&LAB_142f127e2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca31c18);
      _DAT_14ca31b68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f128e8);
      _Init_thread_footer(&DAT_14ca31c10);
    }
  }
  return &DAT_14ca31b68;
}



// FUNCTION 142ef20f6 FUN_142ef20f6 body=576 status=ok
// SIG undefined FUN_142ef20f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ef20f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31de0) {
    FUN_144b3d300(&DAT_14ca31de0);
    if (DAT_14ca31de0 == -1) {
      FUN_142f1316c();
      if ((DAT_14ca31ed7 & 2) == 0) {
        DAT_14ca31ed7 = DAT_14ca31ed7 | 2;
        _DAT_14ca31e78 = L"FFusionBlendCS";
        _DAT_14ca31e90 = FUN_146826540;
        _DAT_14ca31e98 = FUN_146825d77;
        _DAT_14ca31ea0 = FUN_146825fd6;
        _DAT_14ca31ea8 = FUN_1407e02ea;
        _DAT_14ca31eb0 = FUN_146826273;
        _DAT_14ca31e88 = FUN_142f139b2;
        _DAT_14ca31ec8 = 0xffffffff000000e0;
        _DAT_14ca31ed0 = 8;
        DAT_14ca31ed4 = 0;
        _DAT_14ca31eb8 = &LAB_142f139de;
        _DAT_14ca31ed8 = L"BASE";
        DAT_14ca31f02 = 4;
        _DAT_14ca31ee0 = FUN_140b35ae4();
        _DAT_14ca31ee8 = DAT_14ca31e80;
        _DAT_14ca31ef0 = &LAB_14682652b;
        DAT_14ca31e80 = &DAT_14ca31ed8;
        DAT_14ca31ed5 = DAT_14ca31ed5 + '\x01';
        _DAT_14ca31ef8 = 0x100000000;
        if (*(char *)(_DAT_14ca31ee0 + 100) != '\0') {
          DAT_14ca31ed6 = DAT_14ca31ed6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca31e70);
      }
      FUN_140db5666(&DAT_14ca31d38,0,&DAT_14ca31e70,L"FFusionBlendCS",
                    L"/Engine/Private/PostProcessLocalExposure.usf",L"FusionBlendCS",5,2,
                    FUN_142f130d6,FUN_142f13076,&LAB_142f1305e,&LAB_142f1305a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca31de8);
      _DAT_14ca31d38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f13160);
      _Init_thread_footer(&DAT_14ca31de0);
    }
  }
  return &DAT_14ca31d38;
}



// FUNCTION 142ef2336 FUN_142ef2336 body=1662 status=ok
// SIG undefined FUN_142ef2336(void)

undefined8 FUN_142ef2336(longlong param_1,longlong param_2,void *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  wchar_t *pwVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char cVar12;
  uint uVar13;
  undefined8 *puVar14;
  wchar_t **ppwVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  ulonglong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8 [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uStack_b0 = (wchar_t *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_a8 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uVar8 = *(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc);
  uVar13 = (int)param_4[2] - (int)param_4[1];
  local_b8 = (wchar_t *)&DAT_00020008;
  uStack_88 = CONCAT26(uStack_88._6_2_,0xff0015000101);
  if ((int)DAT_14ca84e40 <= (int)uVar13) {
    uVar13 = DAT_14ca84e40;
  }
  if ((int)uVar13 < 2) {
    uVar13 = 1;
  }
  local_a0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
  if ((int)DAT_14ca84e40 <= (int)uVar8) {
    uVar8 = DAT_14ca84e40;
  }
  lStack_98 = (ulonglong)uVar13 << 0x20;
  if ((int)uVar8 < 2) {
    uVar8 = 1;
  }
  local_90 = CONCAT44(0x10001,uVar8);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar18 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar9 = uVar18 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
    FUN_140023dd8(puVar1,0x128);
    uVar18 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar9 = uVar18 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar9;
  FUN_1456bbb8c(uVar18,L"GaussianLumSetupTexture",&local_b8,0);
  iVar4 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8) = uVar18;
  *(int *)(uVar18 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar14 + 0x26;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x140);
    puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar14 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  *puVar14 = &PTR_FUN_14a2c41d8;
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 1;
  puVar14[0x13] = 0;
  puVar14[0x14] = 0;
  puVar14[0x24] = 0;
  puVar14[0x25] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  local_100 = puVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar14;
  lVar10 = FUN_1447e4f80();
  cVar12 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar10 + 0x41);
  }
  puVar14[2] = *(undefined8 *)(param_2 + 0x18);
  *(char *)(puVar14 + 3) = cVar12;
  memcpy(puVar14 + 4,param_3,0x88);
  local_c8 = (undefined4)param_4[1];
  uStack_c4 = *(undefined4 *)((longlong)param_4 + 0xc);
  uStack_c0 = (undefined4)param_4[2];
  uStack_bc = *(undefined4 *)((longlong)param_4 + 0x14);
  local_e8[3] = *(undefined8 *)(*(longlong *)(*param_4 + 0x38) + 0x84);
  FUN_144a2c7c2(&local_b8);
  puVar1 = local_100;
  ppwVar15 = &local_b8;
  puVar11 = puVar14 + 0x16;
  for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = *ppwVar15;
    ppwVar15 = ppwVar15 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar14[0x24] = *param_4;
  uVar3 = *(undefined1 *)(uVar18 + 0x94);
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar17 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_100,0x50);
    puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 9;
  }
  pwVar2 = (wchar_t *)(puVar14 + 2);
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar17[1] = *(undefined8 *)(uVar18 + 8);
  puVar17[2] = 0;
  *(undefined1 *)(puVar17 + 3) = 0;
  *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar17 + 5) = 0;
  *puVar17 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar17 + 6) = uVar3;
  *(undefined1 *)(puVar17 + 7) = 0;
  *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
  puVar17[8] = uVar18;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[0x25] = puVar17;
  iVar4 = *(int *)(uVar18 + 0x88) + 7;
  iVar5 = *(int *)(uVar18 + 0x88) + 0xe;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = *(int *)(uVar18 + 0x84) + 7;
  iVar6 = *(int *)(uVar18 + 0x84) + 0xe;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  uVar16 = *(undefined8 *)(param_2 + 0x13818);
  local_f0 = param_2;
  FUN_142ef1a36();
  FUN_142ef1a36();
  FUN_1448e935e(uVar16,&local_b8,&DAT_14ca317c8,0);
  FUN_142ef1a36();
  pwVar7 = local_b8;
  local_f8 = uStack_b0;
  FUN_142f11a30();
  local_b8 = (wchar_t *)0x0;
  uStack_b0 = (wchar_t *)0x0;
  FUN_1448f70da(pwVar7,&DAT_14ca31878,pwVar2,&local_b8);
  FUN_140069376(param_1);
  puVar1 = local_100;
  uVar16 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar16 = 4;
  }
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar14 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_100,0x1f0);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar14 + 0x3d;
  }
  *local_100 = (ulonglong)puVar11;
  uStack_b0 = (wchar_t *)DAT_14ca318c0;
  if (DAT_14ca318c0 != 0) {
    LOCK();
    *(int *)(DAT_14ca318c0 + 8) = *(int *)(DAT_14ca318c0 + 8) + 1;
    UNLOCK();
  }
  uStack_a8 = &DAT_14ca31878;
  local_108 = 2;
  local_b8 = pwVar2;
  FUN_140068f1a(puVar14,local_e8 + 3,&local_b8,uVar16);
  *puVar14 = &PTR_FUN_14a2c41e0;
  puVar14[0x37] = &DAT_14ca31878;
  puVar14[0x38] = pwVar2;
  puVar14[0x39] = pwVar7;
  puVar14[0x3a] = local_f8;
  *(int *)(puVar14 + 0x3b) = iVar6 >> 3;
  *(int *)((longlong)puVar14 + 0x1dc) = iVar5 >> 3;
  *(undefined4 *)(puVar14 + 0x3c) = 1;
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar14);
  lVar10 = local_f0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b8 = L"LocalExposureGaussianX";
  uStack_b0 = L"LocalExposureGaussianY";
  local_e8[1] = 0;
  local_e8[2] = 0;
  if (uVar18 != 0) {
    local_e8[2] = *(undefined8 *)(uVar18 + 0x84);
  }
  local_e8[0] = uVar18;
  FUN_1448a0832(local_e8 + 3,param_1,local_e8);
  uStack_a8 = (undefined *)local_e8[3];
  local_a0 = CONCAT44(uStack_c4,local_c8);
  lStack_98 = CONCAT44(uStack_bc,uStack_c0);
  local_78 = &DAT_3f8000003f800000;
  puStack_70 = &DAT_3f8000003f800000;
  local_68 = DAT_14c84635c;
  local_60 = *(undefined4 *)(lVar10 + 0x2a08);
  local_5c = 1;
  FUN_1448a0359(local_e8 + 3,param_1,lVar10);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return local_e8[3];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef29b5 FUN_142ef29b5 body=1951 status=ok
// SIG undefined FUN_142ef29b5(void)

void FUN_142ef29b5(longlong param_1,longlong param_2,void *param_3,longlong param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  longlong *param_9,ushort param_10)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  char cVar16;
  undefined2 uVar17;
  int iVar18;
  undefined8 **ppuVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined2 uVar23;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  ulonglong *local_f8;
  longlong local_f0;
  longlong local_e8;
  void *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  longlong lStack_b0;
  undefined *local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar21 + 0x40;
  local_f8 = puVar1;
  local_e0 = param_3;
  local_d8 = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x210);
    puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar15 = puVar21 + 0x40;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar15;
  *puVar21 = &PTR_FUN_14a2c41f8;
  puVar21[2] = 0;
  *(undefined1 *)(puVar21 + 3) = 1;
  puVar21[0x34] = 0;
  puVar21[0x20] = 0;
  puVar21[0x21] = 0;
  puVar21[0x31] = 0;
  puVar21[0x32] = 0;
  puVar21[0x3c] = 0;
  puVar21[0x3d] = 0;
  puVar21[0x3e] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar21;
  lVar14 = FUN_1447e4f80();
  cVar16 = '\x02';
  if (*(char *)(lVar14 + 0x41) != '\x03') {
    cVar16 = *(char *)(lVar14 + 0x41);
  }
  puVar21[2] = *(undefined8 *)(param_2 + 0x18);
  *(char *)(puVar21 + 3) = cVar16;
  local_c8 = (undefined4)param_8[1];
  uStack_c4 = *(undefined4 *)((longlong)param_8 + 0xc);
  uStack_c0 = (undefined4)param_8[2];
  uStack_bc = *(undefined4 *)((longlong)param_8 + 0x14);
  local_d0 = *(undefined8 *)(*(longlong *)(*param_8 + 0x38) + 0x84);
  FUN_144a2c7c2(&local_b8,&local_d0);
  ppuVar19 = &local_b8;
  puVar15 = puVar21 + 4;
  for (lVar14 = 0xe; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar15 = *ppuVar19;
    ppuVar19 = ppuVar19 + 1;
    puVar15 = puVar15 + 1;
  }
  local_c8 = (undefined4)param_9[1];
  uStack_c4 = *(undefined4 *)((longlong)param_9 + 0xc);
  uStack_c0 = (undefined4)param_9[2];
  uStack_bc = *(undefined4 *)((longlong)param_9 + 0x14);
  local_d0 = *(undefined8 *)(*(longlong *)(*param_9 + 0x38) + 0x84);
  FUN_144a2c7c2(&local_b8,&local_d0);
  puVar1 = local_f8;
  ppuVar19 = &local_b8;
  puVar15 = puVar21 + 0x12;
  for (lVar14 = 0xe; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar15 = *ppuVar19;
    ppuVar19 = ppuVar19 + 1;
    puVar15 = puVar15 + 1;
  }
  puVar21[0x20] = *param_8;
  lVar14 = *(longlong *)(*param_9 + 0x38);
  if ((*(char *)(lVar14 + 0x92) == '\x04') || (*(char *)(lVar14 + 0x92) == '\x01')) {
    uVar17 = *(undefined2 *)(*param_9 + 0x2c);
    cVar16 = '\x01';
    uVar23 = 1;
  }
  else {
    uVar17 = 0;
    uVar23 = 0;
    cVar16 = '\0';
  }
  uVar3 = *(undefined1 *)(lVar14 + 0x94);
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 9;
  local_f0 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(local_f8,0x50);
    puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar20 + 9;
  }
  lVar13 = local_d8;
  *local_f8 = (ulonglong)puVar15;
  puVar20[1] = *(undefined8 *)(lVar14 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 0;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar20 + 5) = 0;
  *puVar20 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar20 + 6) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x32) = uVar17;
  *(undefined2 *)((longlong)puVar20 + 0x34) = uVar23;
  *(undefined1 *)((longlong)puVar20 + 0x36) = 0;
  *(char *)(puVar20 + 7) = cVar16;
  if (cVar16 != '\0') {
    *(undefined1 *)((longlong)puVar20 + 0x37) = 0;
  }
  puVar20[8] = lVar14;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar21[0x21] = puVar20;
  local_e8 = param_1 + 0x198;
  memcpy(puVar21 + 0x22,local_e0,0x88);
  puVar1 = local_f8;
  cVar16 = *(char *)(lVar13 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(local_f8,0x50);
    puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar20 + 9;
  }
  puVar2 = puVar21 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar15;
  puVar20[1] = *(undefined8 *)(lVar13 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar20 + 5) = cVar16 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = lVar13;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_e8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar21[0x34] = puVar20;
  uVar5 = param_5[1];
  uVar7 = param_5[2];
  uVar8 = param_5[3];
  uVar9 = param_5[4];
  uVar10 = param_5[5];
  uVar11 = param_5[6];
  uVar12 = param_5[7];
  *(undefined4 *)(puVar21 + 0x36) = *param_5;
  *(undefined4 *)((longlong)puVar21 + 0x1b4) = uVar5;
  *(undefined4 *)(puVar21 + 0x37) = uVar7;
  *(undefined4 *)((longlong)puVar21 + 0x1bc) = uVar8;
  *(undefined4 *)(puVar21 + 0x38) = uVar9;
  *(undefined4 *)((longlong)puVar21 + 0x1c4) = uVar10;
  *(undefined4 *)(puVar21 + 0x39) = uVar11;
  *(undefined4 *)((longlong)puVar21 + 0x1cc) = uVar12;
  puVar21[0x3a] = *(undefined8 *)(param_5 + 8);
  puVar21[0x3c] = param_6;
  puVar21[0x3d] = param_7;
  puVar21[0x3e] = DAT_14c9c0de0;
  iVar18 = *(int *)((longlong)param_9 + 0x14) - *(int *)((longlong)param_9 + 0xc);
  iVar4 = iVar18 + 7;
  iVar18 = iVar18 + 0xe;
  if (-1 < iVar4) {
    iVar18 = iVar4;
  }
  iVar22 = (int)param_9[2] - (int)param_9[1];
  iVar4 = iVar22 + 7;
  iVar22 = iVar22 + 0xe;
  if (-1 < iVar4) {
    iVar22 = iVar4;
  }
  uVar6 = *(undefined8 *)(local_f0 + 0x13818);
  FUN_142ef1c76();
  FUN_142ef1c76();
  FUN_1448e935e(uVar6,&local_b8,&DAT_14ca31998,0);
  FUN_142ef1c76();
  lVar14 = lStack_b0;
  puVar15 = local_b8;
  FUN_142f11ff4();
  local_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  FUN_1448f70da(puVar15,&DAT_14ca31a48,puVar2,&local_b8);
  FUN_140069376(param_1);
  puVar1 = local_f8;
  local_f0 = lVar14;
  if ((param_10 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_10 & 2) != 0)))))) {
      param_10 = param_10 & 0xfff9 | 4;
    }
    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar21) {
      FUN_140023dd8(local_f8,0x1f0);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3d;
    }
    *local_f8 = (ulonglong)puVar21;
    lStack_b0 = DAT_14ca31a90;
    if (DAT_14ca31a90 != 0) {
      LOCK();
      *(int *)(DAT_14ca31a90 + 8) = *(int *)(DAT_14ca31a90 + 8) + 1;
      UNLOCK();
    }
    local_a8 = &DAT_14ca31a48;
    local_108 = 2;
    local_b8 = puVar2;
    FUN_140068f1a(puVar20,&local_d0,&local_b8,param_10);
    *puVar20 = &PTR_FUN_14a2c4220;
    puVar20[0x37] = &DAT_14ca31a48;
    puVar20[0x38] = puVar2;
    puVar20[0x39] = puVar15;
    puVar20[0x3a] = local_f0;
    *(int *)(puVar20 + 0x3b) = iVar22 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar18 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      param_10 = param_10 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (param_10 & 2) != 0) {
      param_10 = param_10 & 0xfffd;
    }
    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar20 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar21) {
      FUN_140023dd8(local_f8,0x1f8);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar20 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar21;
    uVar5 = *(undefined4 *)(param_1 + 0x660);
    lStack_b0 = DAT_14ca31a90;
    if (DAT_14ca31a90 != 0) {
      LOCK();
      *(int *)(DAT_14ca31a90 + 8) = *(int *)(DAT_14ca31a90 + 8) + 1;
      UNLOCK();
    }
    local_a8 = &DAT_14ca31a48;
    local_108 = 2;
    local_b8 = puVar2;
    FUN_140068f1a(puVar20,&local_d0,&local_b8,param_10);
    puVar20[0x37] = &DAT_14ca31a48;
    puVar20[0x38] = puVar2;
    puVar20[0x39] = puVar15;
    puVar20[0x3a] = local_f0;
    *(int *)(puVar20 + 0x3b) = iVar22 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar18 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
    *puVar20 = &PTR_FUN_14a2c4200;
    *(undefined4 *)(puVar20 + 0x3d) = uVar5;
  }
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar20);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef3155 FUN_142ef3155 body=5264 status=ok
// SIG undefined FUN_142ef3155(void)

void FUN_142ef3155(ulonglong *param_1,longlong param_2,longlong param_3,void *param_4,
                  longlong param_5,undefined8 *param_6,longlong *param_7)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char cVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined2 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 **ppuVar21;
  undefined8 uVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_358 [32];
  undefined1 *local_338;
  undefined1 local_330;
  undefined1 local_328;
  ulonglong *local_320;
  undefined8 *local_318;
  longlong local_310;
  longlong local_308;
  ulonglong local_300;
  longlong local_2f8;
  void *local_2f0;
  longlong *local_2e8;
  undefined8 *local_2e0;
  ulonglong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  ulonglong *local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined1 local_298 [24];
  undefined1 local_280 [24];
  ulonglong local_268;
  longlong lStack_260;
  longlong local_258;
  ulonglong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 *local_228;
  ulonglong uStack_220;
  undefined *local_218;
  undefined4 uStack_210;
  undefined8 local_20c;
  int local_204;
  int local_200;
  undefined4 local_1fc;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined4 local_1f6;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined4 local_e6;
  ulonglong local_80;
  undefined6 uVar17;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_238 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  local_268 = 0;
  lStack_260 = 0;
  local_218 = (undefined *)CONCAT44(local_218._4_4_,DAT_14ca85098);
  local_228 = (undefined8 *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_220 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uVar22 = *(undefined8 *)(*(longlong *)(*param_7 + 0x38) + 0x84);
  uVar14 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  lVar10 = param_7[1];
  lVar13 = param_7[2];
  local_e6 = 0xff000900;
  local_118 = (undefined8 *)&DAT_00020008;
  local_ec = 0x10001;
  local_e8 = 0x101;
  uStack_110 = (undefined8 *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_108 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_100 = DAT_14ca85098;
  local_f8 = 0;
  iVar8 = (int)uVar22;
  local_f4 = DAT_14ca84e40;
  if (iVar8 < DAT_14ca84e40) {
    local_f4 = iVar8;
  }
  if (local_f4 < 2) {
    local_f4 = 1;
  }
  iVar25 = (int)((ulonglong)uVar22 >> 0x20);
  local_f0 = DAT_14ca84e40;
  if (iVar25 < DAT_14ca84e40) {
    local_f0 = iVar25;
  }
  if (local_f0 < 2) {
    local_f0 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar19 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar9 = uVar19 + 0x120;
  local_320 = puVar1;
  local_308 = param_3;
  local_2f0 = param_4;
  local_2c0 = param_1;
  local_fc = uVar14;
  if (*(ulonglong *)(param_2 + 0x78) < uVar9) {
    FUN_140023dd8(puVar1,0x128);
    uVar19 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar9 = uVar19 + 0x120;
  }
  local_2f8 = param_2 + 0x178;
  *(ulonglong *)(param_2 + 0x70) = uVar9;
  FUN_1456bbb8c(uVar19,L"LocalExposureLumTexture",&local_118,0);
  iVar23 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar23 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar23 + 1U) {
    FUN_14472c0f6(local_2f8,iVar23);
  }
  puVar1 = local_320;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar23 * 8) = uVar19;
  *(int *)(uVar19 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  lVar3 = param_7[1];
  lVar4 = param_7[2];
  local_e6 = 0xff000900;
  local_118 = (undefined8 *)&DAT_00020008;
  local_ec = 0x10001;
  local_e8 = 0x101;
  uStack_110 = local_228;
  uStack_108 = (undefined *)uStack_220;
  local_100 = local_218._0_4_;
  local_f4 = DAT_14ca84e40;
  if (iVar8 < DAT_14ca84e40) {
    local_f4 = iVar8;
  }
  if (local_f4 < 2) {
    local_f4 = 1;
  }
  local_f8 = 0;
  local_f0 = DAT_14ca84e40;
  if (iVar25 < DAT_14ca84e40) {
    local_f0 = iVar25;
  }
  if (local_f0 < 2) {
    local_f0 = 1;
  }
  uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar9 = uVar20 + 0x120;
  local_248 = uVar19;
  uStack_240 = lVar10;
  local_238 = lVar13;
  local_fc = uVar14;
  if (*(ulonglong *)(param_2 + 0x78) < uVar9) {
    FUN_140023dd8(local_320,0x128);
    uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar9 = uVar20 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar9;
  FUN_1456bbb8c(uVar20,L"LocalExposureWeightTexture",&local_118,0);
  iVar8 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar8 + 1U) {
    FUN_14472c0f6(local_2f8,iVar8);
  }
  puVar1 = local_320;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar8 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  puVar26 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar26 + 0x40;
  local_268 = uVar20;
  lStack_260 = lVar3;
  local_258 = lVar4;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_320,0x210);
    puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar11 = puVar26 + 0x40;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  *puVar26 = &PTR_FUN_14a2c4238;
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 1;
  puVar26[0x12] = 0;
  puVar26[0x26] = 0;
  local_2e8 = (longlong *)(param_2 + 0x98);
  puVar26[0x23] = 0;
  puVar26[0x24] = 0;
  puVar26[0x3c] = 0;
  puVar26[0x3d] = 0;
  iVar8 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar8 + 1U) {
    FUN_1448cfae8(local_2e8,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar8 * 8) = puVar26;
  lVar10 = FUN_1447e4f80();
  cVar12 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar10 + 0x41);
  }
  puVar26[2] = *(undefined8 *)(local_308 + 0x18);
  *(char *)(puVar26 + 3) = cVar12;
  memcpy(puVar26 + 0x14,local_2f0,0x88);
  puVar1 = local_320;
  cVar12 = *(char *)(param_5 + 0x68);
  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar15 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_320,0x50);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar15 + 9;
  }
  local_310 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar15[1] = *(undefined8 *)(param_5 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 3;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *puVar15 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar15 + 5) = cVar12 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar15 + 0x2c) = 0xffffffff00000000;
  puVar15[7] = 0;
  puVar15[8] = param_5;
  iVar8 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
    FUN_1447568fc(local_310,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar26[0x26] = puVar15;
  uVar22 = param_6[1];
  uVar16 = *(undefined4 *)(param_6 + 2);
  uVar5 = *(undefined4 *)((longlong)param_6 + 0x14);
  uVar6 = *(undefined4 *)(param_6 + 3);
  uVar7 = *(undefined4 *)((longlong)param_6 + 0x1c);
  puVar26[0x28] = *param_6;
  puVar26[0x29] = uVar22;
  *(undefined4 *)(puVar26 + 0x2a) = uVar16;
  *(undefined4 *)((longlong)puVar26 + 0x154) = uVar5;
  *(undefined4 *)(puVar26 + 0x2b) = uVar6;
  *(undefined4 *)((longlong)puVar26 + 0x15c) = uVar7;
  puVar26[0x2c] = param_6[4];
  local_1a8 = (undefined4)param_7[1];
  uStack_1a4 = *(undefined4 *)((longlong)param_7 + 0xc);
  uStack_1a0 = (undefined4)param_7[2];
  uStack_19c = *(undefined4 *)((longlong)param_7 + 0x14);
  local_1b0 = *(undefined8 *)(*(longlong *)(*param_7 + 0x38) + 0x84);
  FUN_144a2c7c2(&local_118,&local_1b0);
  ppuVar21 = &local_118;
  puVar11 = puVar26 + 4;
  for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = *ppuVar21;
    ppuVar21 = ppuVar21 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar26[0x12] = *param_7;
  local_1b0 = *(undefined8 *)(local_248 + 0x84);
  local_1a8 = (undefined4)uStack_240;
  uStack_1a4 = uStack_240._4_4_;
  uStack_1a0 = (undefined4)local_238;
  uStack_19c = local_238._4_4_;
  FUN_144a2c7c2(&local_118,&local_1b0);
  uVar9 = local_248;
  puVar1 = local_320;
  ppuVar21 = &local_118;
  puVar11 = puVar26 + 0x2e;
  for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = *ppuVar21;
    ppuVar21 = ppuVar21 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar2 = *(undefined1 *)(local_248 + 0x94);
  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar15 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_320,0x50);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar15 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar15[1] = *(undefined8 *)(uVar9 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar15 + 5) = 0;
  *puVar15 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar15 + 6) = uVar2;
  *(undefined1 *)(puVar15 + 7) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
  puVar15[8] = uVar9;
  iVar8 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
    FUN_1447568fc(local_310,iVar8);
  }
  uVar9 = local_268;
  puVar1 = local_320;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar26[0x3c] = puVar15;
  uVar2 = *(undefined1 *)(local_268 + 0x94);
  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar15 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(local_320,0x50);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar15 + 9;
  }
  puVar24 = puVar26 + 2;
  *(undefined8 **)(param_2 + 0x70) = puVar11;
  puVar15[1] = *(undefined8 *)(uVar9 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar15 + 5) = 0;
  *puVar15 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar15 + 6) = uVar2;
  *(undefined1 *)(puVar15 + 7) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
  puVar15[8] = uVar9;
  iVar8 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
    FUN_1447568fc(local_310,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar26[0x3d] = puVar15;
  *(undefined4 *)(puVar26 + 0x3e) = *(undefined4 *)(DAT_14ca2c650 + 4);
  iVar25 = *(int *)((longlong)param_7 + 0x14) - *(int *)((longlong)param_7 + 0xc);
  iVar8 = iVar25 + 7;
  iVar25 = iVar25 + 0xe;
  if (-1 < iVar8) {
    iVar25 = iVar8;
  }
  iVar23 = (int)param_7[2] - (int)param_7[1];
  iVar8 = iVar23 + 7;
  iVar23 = iVar23 + 0xe;
  if (-1 < iVar8) {
    iVar23 = iVar8;
  }
  uVar22 = *(undefined8 *)(local_308 + 0x13818);
  FUN_142ef1eb6();
  FUN_142ef1eb6();
  FUN_1448e935e(uVar22,&local_118,&DAT_14ca31b68,0);
  FUN_142ef1eb6();
  puVar26 = uStack_110;
  puVar11 = local_118;
  FUN_142f128f4();
  local_118 = (undefined8 *)0x0;
  uStack_110 = (undefined8 *)0x0;
  FUN_1448f70da(puVar11,&DAT_14ca31c18,puVar24,&local_118);
  FUN_140069376(param_2);
  puVar1 = local_320;
  uVar17 = (undefined6)((ulonglong)lVar4 >> 0x10);
  uVar16 = (undefined4)CONCAT62(uVar17,2);
  local_318 = puVar26;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar16 = (undefined4)CONCAT62(uVar17,4);
  }
  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar15 + 0x3d;
  if (*(undefined8 **)(param_2 + 0x78) < puVar26) {
    FUN_140023dd8(local_320,0x1f0);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar15 + 0x3d;
  }
  *local_320 = (ulonglong)puVar26;
  uStack_110 = (undefined8 *)DAT_14ca31c60;
  if (DAT_14ca31c60 != 0) {
    LOCK();
    *(int *)(DAT_14ca31c60 + 8) = *(int *)(DAT_14ca31c60 + 8) + 1;
    UNLOCK();
  }
  uStack_108 = &DAT_14ca31c18;
  local_338 = (undefined1 *)CONCAT71(local_338._1_7_,2);
  local_118 = puVar24;
  FUN_140068f1a(puVar15,&local_1b0,&local_118,uVar16);
  *puVar15 = &PTR_FUN_14a2c4240;
  puVar15[0x37] = &DAT_14ca31c18;
  puVar15[0x38] = puVar24;
  puVar15[0x39] = puVar11;
  puVar15[0x3a] = local_318;
  *(int *)(puVar15 + 0x3b) = iVar23 >> 3;
  *(int *)((longlong)puVar15 + 0x1dc) = iVar25 >> 3;
  *(undefined4 *)(puVar15 + 0x3c) = 1;
  local_2c8 = param_2 + 0x168;
  iVar8 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar8 + 1U) {
    FUN_14470e57a(local_2c8,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar8 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2);
  memset(&local_118,0,0x91);
  FUN_1448a0832(local_280,param_2,&local_248);
  lVar10 = local_308;
  local_328 = 0;
  local_330 = 1;
  local_338 = local_280;
  FUN_142eba082(&local_118,param_2,local_308,local_2f0);
  memset(&local_1b0,0,0x91);
  FUN_1448a0832(local_298,param_2,&local_268);
  local_328 = 0;
  local_330 = 1;
  local_338 = local_298;
  FUN_142eba082(&local_1b0,param_2,lVar10);
  lVar13 = 0x78;
  local_300 = 0;
  iVar8 = 0;
  uVar19 = 0;
  local_318 = (undefined8 *)0x0;
  uVar9 = 0;
  lVar10 = 0;
  do {
    puVar1 = local_320;
    local_2d0 = *(longlong *)((longlong)&local_118 + lVar13);
    puVar11 = *(undefined8 **)((longlong)&uStack_110 + lVar13);
    local_2d8 = *(ulonglong *)((longlong)&uStack_108 + lVar13);
    puVar26 = *(undefined8 **)((longlong)&local_1b0 + lVar13);
    local_2e0 = local_318;
    local_2b8 = lVar13;
    if ((uVar19 == 0) || ((iVar8 == (int)uVar9 && ((int)local_300 == (int)(uVar9 >> 0x20))))) {
      puVar24 = (undefined8 *)0x0;
    }
    else {
      if ((*(char *)(uVar19 + 0x92) == '\x04') || (*(char *)(uVar19 + 0x92) == '\x01')) {
        uVar18 = *(undefined2 *)(uVar19 + 0x8e);
      }
      else {
        uVar18 = 0;
      }
      uVar2 = *(undefined1 *)(uVar19 + 0x90);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar24 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
        local_318 = puVar26;
        FUN_140023dd8(local_320,0x48);
        puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar24 + 8;
        puVar26 = local_318;
      }
      local_318 = puVar26;
      *(undefined8 **)(param_2 + 0x70) = puVar15;
      puVar24[1] = *(undefined8 *)(uVar19 + 8);
      puVar24[2] = 0;
      *(undefined1 *)(puVar24 + 3) = 1;
      *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
      *puVar24 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar24 + 5) = 0;
      *(undefined1 *)((longlong)puVar24 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar24 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar24 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar24 + 0x2e) = uVar18;
      *(undefined1 *)(puVar24 + 6) = 0;
      *(undefined1 *)((longlong)puVar24 + 0x32) = 0;
      puVar24[7] = uVar19;
      iVar8 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
        FUN_1447568fc(local_310,iVar8);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar24;
      *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar26 = local_318;
    }
    local_318 = puVar26;
    puVar1 = local_320;
    lVar13 = *(longlong *)(local_2d0 + 0x38);
    local_1f6 = *(undefined4 *)(lVar13 + 0x92);
    local_1fc = *(undefined4 *)(lVar13 + 0x8c);
    local_1f8 = *(undefined1 *)(lVar13 + 0x90);
    uStack_220 = *(ulonglong *)(lVar13 + 0x68);
    local_218 = *(undefined **)(lVar13 + 0x70);
    uStack_210 = *(undefined4 *)(lVar13 + 0x78);
    local_20c = *(undefined8 *)(lVar13 + 0x7c);
    local_228 = (undefined8 *)(*(ulonglong *)(lVar13 + 0x60) & 0xfffffffff7fdeffc | 0x20001);
    local_1f7 = 1;
    iVar8 = (int)*(undefined8 *)(lVar13 + 0x84);
    local_204 = DAT_14ca84e40;
    if (iVar8 < DAT_14ca84e40) {
      local_204 = iVar8;
    }
    if (local_204 < 2) {
      local_204 = 1;
    }
    iVar8 = (int)((ulonglong)*(undefined8 *)(lVar13 + 0x84) >> 0x20);
    local_200 = DAT_14ca84e40;
    if (iVar8 < DAT_14ca84e40) {
      local_200 = iVar8;
    }
    if (local_200 < 2) {
      local_200 = 1;
    }
    uVar19 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar19 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar20) {
      FUN_140023dd8(local_320,0x128);
      uVar19 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar20 = uVar19 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar20;
    FUN_1456bbb8c(uVar19,L"LocalExposureResult",&local_228,0);
    iVar8 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar8 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar8 + 1U) {
      FUN_14472c0f6(local_2f8,iVar8);
    }
    puVar1 = local_320;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar8 * 8) = uVar19;
    *(int *)(uVar19 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar26 = puVar15 + 0x48;
    if (*(undefined8 **)(param_2 + 0x78) < puVar26) {
      FUN_140023dd8(local_320,0x250);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar26 = puVar15 + 0x48;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar26;
    *puVar15 = &PTR_FUN_14a2c4258;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 1;
    puVar15[0x13] = 0;
    puVar15[0x14] = 0;
    puVar15[0x24] = 0;
    puVar15[0x25] = 0;
    puVar15[0x34] = 0;
    puVar15[0x35] = 0;
    puVar15[0x44] = 0;
    puVar15[0x45] = 0;
    iVar8 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar8 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar8 + 1U) {
      FUN_1448cfae8(local_2e8,iVar8);
    }
    local_300 = (ulonglong)puVar11 >> 0x20;
    *(undefined8 **)(*local_2e8 + (longlong)iVar8 * 8) = puVar15;
    lVar13 = FUN_1447e4f80();
    cVar12 = *(char *)(lVar13 + 0x41);
    if (*(char *)(lVar13 + 0x41) == '\x03') {
      cVar12 = '\x02';
    }
    puVar15[2] = *(undefined8 *)(local_308 + 0x18);
    *(char *)(puVar15 + 3) = cVar12;
    memcpy(puVar15 + 4,local_2f0,0x88);
    puVar26 = local_2e0;
    puVar15[0x24] = local_2d0;
    puVar15[0x25] = local_318;
    local_318 = puVar11;
    if ((undefined8 *)uVar9 != local_2e0 && lVar10 != 0) {
      local_228 = *(undefined8 **)(*(longlong *)(lVar10 + 0x38) + 0x84);
      uStack_220 = (ulonglong)local_2e0;
      local_338 = (undefined1 *)CONCAT44(local_338._4_4_,3);
      local_218 = (undefined *)uVar9;
      FUN_14473d930(&local_2b0,&local_228,&uStack_220,1);
      puVar11 = local_318;
      fVar27 = DAT_14ca4ca80 + 0.5;
      fVar29 = DAT_14ca4ca7c + 0.5;
      fVar30 = 1.0 / (float)((int)(local_2d8 >> 0x20) - (int)local_300);
      fVar28 = 1.0 / (float)((int)local_2d8 - (int)local_318);
      fVar31 = fVar30 * DAT_14ca4ca78;
      *(float *)(puVar15 + 0x46) = fVar28 * DAT_14ca4ca74 * (float)local_2b0;
      *(float *)((longlong)puVar15 + 0x234) = fVar31 * local_2b0._4_4_;
      *(float *)(puVar15 + 0x47) = fVar29 * fVar28 * (float)local_2b0 + (float)local_2a8;
      *(float *)((longlong)puVar15 + 0x23c) = fVar27 * fVar30 * local_2b0._4_4_ + local_2a8._4_4_;
      local_2b0 = *(undefined8 *)(*(longlong *)(lVar10 + 0x38) + 0x84);
      local_2a8 = (ulonglong)puVar26;
      local_2a0 = uVar9;
      FUN_144a2c7c2(&local_228,&local_2b0);
      ppuVar21 = &local_228;
      puVar26 = puVar15 + 0x26;
      for (lVar13 = 0xe; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar26 = *ppuVar21;
        ppuVar21 = ppuVar21 + 1;
        puVar26 = puVar26 + 1;
      }
      puVar15[0x34] = lVar10;
    }
    uVar9 = local_2d8;
    puVar15[0x35] = puVar24;
    local_2b0 = *(undefined8 *)(uVar19 + 0x84);
    local_2a0 = local_2d8;
    local_2a8 = (ulonglong)puVar11;
    FUN_144a2c7c2(&local_228,&local_2b0);
    puVar1 = local_320;
    ppuVar21 = &local_228;
    puVar11 = puVar15 + 0x36;
    for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = *ppuVar21;
      ppuVar21 = ppuVar21 + 1;
      puVar11 = puVar11 + 1;
    }
    uVar2 = *(undefined1 *)(uVar19 + 0x94);
    puVar26 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar26 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(local_320,0x50);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar26 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    puVar26[1] = *(undefined8 *)(uVar19 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 0;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar26 + 6) = uVar2;
    *(undefined1 *)(puVar26 + 7) = 0;
    *(undefined4 *)((longlong)puVar26 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar26 + 0x35) = 0;
    puVar26[8] = uVar19;
    iVar8 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
      FUN_1447568fc(local_310,iVar8);
    }
    puVar11 = puVar15 + 2;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar15[0x44] = puVar26;
    puVar15[0x45] = DAT_14c9c0de0;
    uVar22 = *(undefined8 *)(local_308 + 0x13818);
    FUN_142ef20f6();
    FUN_1448e935e(uVar22,&local_228,&DAT_14ca31d38,puVar24 != (undefined8 *)0x0);
    FUN_142ef20f6();
    uVar20 = uStack_220;
    puVar26 = local_228;
    iVar25 = (int)(uVar9 >> 0x20) - (int)local_300;
    iVar8 = iVar25 + 7;
    iVar25 = iVar25 + 0xe;
    if (-1 < iVar8) {
      iVar25 = iVar8;
    }
    iVar23 = (int)uVar9 - (int)local_318;
    iVar8 = iVar23 + 7;
    iVar23 = iVar23 + 0xe;
    if (-1 < iVar8) {
      iVar23 = iVar8;
    }
    FUN_142f1316c();
    local_228 = (undefined8 *)0x0;
    uStack_220 = 0;
    FUN_1448f70da(puVar26,&DAT_14ca31de8,puVar11,&local_228);
    FUN_140069376(param_2);
    puVar1 = local_320;
    uVar22 = 2;
    local_2e0 = puVar26;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar22 = 4;
    }
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar26 = puVar15 + 0x3d;
    if (*(undefined8 **)(param_2 + 0x78) < puVar26) {
      FUN_140023dd8(local_320,0x1f0);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar26 = puVar15 + 0x3d;
    }
    *local_320 = (ulonglong)puVar26;
    uStack_220 = DAT_14ca31e30;
    if (DAT_14ca31e30 != 0) {
      LOCK();
      *(int *)(DAT_14ca31e30 + 8) = *(int *)(DAT_14ca31e30 + 8) + 1;
      UNLOCK();
    }
    local_218 = &DAT_14ca31de8;
    local_338 = (undefined1 *)CONCAT71(local_338._1_7_,2);
    local_228 = puVar11;
    FUN_140068f1a(puVar15,&local_2b0,&local_228,uVar22);
    *puVar15 = &PTR_FUN_14a2c4260;
    puVar15[0x37] = &DAT_14ca31de8;
    puVar15[0x38] = puVar11;
    puVar15[0x39] = local_2e0;
    puVar15[0x3a] = uVar20;
    *(int *)(puVar15 + 0x3b) = iVar23 >> 3;
    *(int *)((longlong)puVar15 + 0x1dc) = iVar25 >> 3;
    *(undefined4 *)(puVar15 + 0x3c) = 1;
    iVar8 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar8 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar8 + 1U) {
      FUN_14470e57a(local_2c8,iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar8 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar15);
    lVar13 = local_2b8 + -0x18;
    iVar8 = (int)local_318;
    uVar9 = local_2d8;
    lVar10 = local_2d0;
  } while (lVar13 != -0x18);
  *local_2c0 = uVar19;
  local_2c0[1] = (ulonglong)local_318;
  local_2c0[2] = local_2d8;
  if ((local_80 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef45e6 FUN_142ef45e6 body=69 status=ok
// SIG undefined FUN_142ef45e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef45e6(void)

{
  _DAT_14ca2c698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ef4628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c6a0,1);
  return;
}



// FUNCTION 142ef462b FUN_142ef462b body=69 status=ok
// SIG undefined FUN_142ef462b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef462b(void)

{
  _DAT_14ca2c6b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ef466d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c6b8,1);
  return;
}



// FUNCTION 142ef4670 FUN_142ef4670 body=69 status=ok
// SIG undefined FUN_142ef4670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef4670(void)

{
  _DAT_14ca2c6c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ef46b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c6d0,1);
  return;
}



// FUNCTION 142ef46b5 FUN_142ef46b5 body=69 status=ok
// SIG undefined FUN_142ef46b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef46b5(void)

{
  _DAT_14ca2c6e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ef46f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c6e8,1);
  return;
}



// FUNCTION 142ef46fa FUN_142ef46fa body=571 status=ok
// SIG undefined FUN_142ef46fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ef46fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31fb0) {
    FUN_144b3d300(&DAT_14ca31fb0);
    if (DAT_14ca31fb0 == -1) {
      if ((DAT_14ca3212f & 2) == 0) {
        DAT_14ca3212f = DAT_14ca3212f | 2;
        _DAT_14ca320d0 = L"FPostProcessMaterialVS";
        _DAT_14ca320e8 = FUN_146826540;
        _DAT_14ca320f0 = FUN_146825d77;
        _DAT_14ca320f8 = FUN_146825fd6;
        _DAT_14ca32100 = FUN_1407e02ea;
        _DAT_14ca32108 = FUN_146826273;
        _DAT_14ca320e0 = FUN_142f13b40;
        _DAT_14ca32120 = 0xffffffff000000f8;
        _DAT_14ca32128 = 8;
        DAT_14ca3212c = 0;
        _DAT_14ca32110 = &LAB_142f13b86;
        _DAT_14ca32130 = L"BASE";
        DAT_14ca3215a = 4;
        _DAT_14ca32138 = FUN_141526006();
        _DAT_14ca32140 = DAT_14ca320d8;
        _DAT_14ca32148 = &LAB_14682652b;
        DAT_14ca320d8 = &DAT_14ca32130;
        DAT_14ca3212d = DAT_14ca3212d + '\x01';
        _DAT_14ca32150 = 0x100000000;
        if (*(char *)(_DAT_14ca32138 + 100) != '\0') {
          DAT_14ca3212e = DAT_14ca3212e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca320c8);
      }
      FUN_140db5666(&DAT_14ca31f08,1,&DAT_14ca320c8,L"FPostProcessMaterialVS",
                    L"/Engine/Private/PostProcessMaterialShaders.usf",L"MainVS",0,1,FUN_142f13a6e,
                    FUN_142f13a0e,&LAB_142f139e6,&LAB_142f139e2,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca31f08 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142f13b0f);
      _Init_thread_footer(&DAT_14ca31fb0);
    }
  }
  return &DAT_14ca31f08;
}



// FUNCTION 142ef4936 FUN_142ef4936 body=571 status=ok
// SIG undefined FUN_142ef4936(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ef4936(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca32208) {
    FUN_144b3d300(&DAT_14ca32208);
    if (DAT_14ca32208 == -1) {
      if ((DAT_14ca32277 & 2) == 0) {
        DAT_14ca32277 = DAT_14ca32277 | 2;
        _DAT_14ca32218 = L"FPostProcessMaterialPS";
        _DAT_14ca32230 = FUN_146826540;
        _DAT_14ca32238 = FUN_146825d77;
        _DAT_14ca32240 = FUN_146825fd6;
        _DAT_14ca32248 = FUN_1407e02ea;
        _DAT_14ca32250 = FUN_146826273;
        _DAT_14ca32228 = FUN_142f13d08;
        _DAT_14ca32268 = 0xffffffff000000f8;
        _DAT_14ca32270 = 8;
        DAT_14ca32274 = 0;
        _DAT_14ca32258 = &LAB_142f13d4e;
        _DAT_14ca32278 = L"BASE";
        DAT_14ca322a2 = 4;
        _DAT_14ca32280 = FUN_141526006();
        _DAT_14ca32288 = DAT_14ca32220;
        _DAT_14ca32290 = &LAB_14682652b;
        DAT_14ca32220 = &DAT_14ca32278;
        DAT_14ca32275 = DAT_14ca32275 + '\x01';
        _DAT_14ca32298 = 0x100000000;
        if (*(char *)(_DAT_14ca32280 + 100) != '\0') {
          DAT_14ca32276 = DAT_14ca32276 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca32210);
      }
      FUN_140db5666(&DAT_14ca32160,1,&DAT_14ca32210,L"FPostProcessMaterialPS",
                    L"/Engine/Private/PostProcessMaterialShaders.usf",L"MainPS",3,4,FUN_142f13c5a,
                    FUN_142f13bfa,&LAB_142f13b8e,&LAB_142f13b8a,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca32160 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142f13cfb);
      _Init_thread_footer(&DAT_14ca32208);
    }
  }
  return &DAT_14ca32160;
}



// FUNCTION 142ef4b71 FUN_142ef4b71 body=235 status=ok
// SIG undefined FUN_142ef4b71(void)

void FUN_142ef4b71(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca2c718 = &PTR_FUN_14a2c4400;
  FUN_144725486(&DAT_14ca2c718);
  lVar4 = DAT_14ca2c728;
  DAT_14ca2c718 = &PTR_FUN_14a2c4430;
  if (DAT_14ca2c728 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca2c728 + 8);
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
  DAT_14ca2c718 = &PTR_FUN_14a38cd70;
  DAT_14ca2c726 = 2;
  if ((DAT_14ca2c720 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 142ef4c5c FUN_142ef4c5c body=243 status=ok
// SIG undefined FUN_142ef4c5c(void)

void FUN_142ef4c5c(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    do {
      plVar6 = (longlong *)(**(code **)(*plVar5 + 0x30))(plVar5,param_2);
      if ((plVar6 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar6 + 0x30))(plVar6), iVar3 == 4)
         ) {
        if (*(char *)(param_3 + 0x191) == '\x01') {
          uVar4 = (**(code **)(*plVar6 + 0x430))(plVar6);
        }
        else {
          uVar4 = 0;
        }
        cVar2 = FUN_142f13d51(plVar6,uVar4,
                              CONCAT71((int7)((ulonglong)param_6 >> 8),param_9) & 0xffffffff,param_7
                              ,param_8);
        if (cVar2 != '\0') goto LAB_142ef4d30;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x38))(plVar5,param_2);
    } while (plVar5 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
  }
LAB_142ef4d30:
  lVar1 = plVar6[3];
  *param_4 = plVar6;
  *param_5 = plVar5;
  *param_6 = lVar1;
  return;
}



// FUNCTION 142ef4d4f FUN_142ef4d4f body=82 status=ok
// SIG undefined FUN_142ef4d4f(void)

undefined8 FUN_142ef4d4f(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x430))(param_2);
  if ((((cVar1 != '\0') && (*(int *)(DAT_14ca2c6a8 + 4) != 0)) && (DAT_14c761ae8 == 3)) &&
     (iVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2), iVar2 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142ef4da1 FUN_142ef4da1 body=222 status=ok
// SIG undefined FUN_142ef4da1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142ef4da1(longlong *param_1)

{
  uint uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca322f0) {
    FUN_144b3d300(&DAT_14ca322f0);
    if (DAT_14ca322f0 == -1) {
      _DAT_14ca322b0 = DAT_14ca30ef0;
      _DAT_14ca322b8 = DAT_14ca30f08;
      _DAT_14ca322c0 = DAT_14ca30f20;
      _DAT_14ca322c8 = DAT_14ca30f38;
      _DAT_14ca322d0 = DAT_14ca35108;
      _DAT_14ca322d8 = DAT_14ca30f50;
      _DAT_14ca322e0 = DAT_14ca30f68;
      _DAT_14ca322e8 = DAT_14ca30f80;
      _Init_thread_footer(&DAT_14ca322f0);
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x440))(param_1);
  return *(undefined8 *)(&DAT_14ca322b0 + (ulonglong)uVar1 * 8);
}



// FUNCTION 142ef4e7f FUN_142ef4e7f body=126 status=ok
// SIG undefined FUN_142ef4e7f(void)

undefined8 FUN_142ef4e7f(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  cVar3 = (**(code **)(*param_1 + 0x420))();
  lVar2 = DAT_14ca2c6c0;
  if (cVar3 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar6 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar8 = 0;
    }
    else if (uVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = CONCAT44(extraout_var,DVar5);
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    uVar7 = CONCAT71((int7)(uVar6 >> 8),*(int *)(lVar2 + uVar8 * 4) != 0);
  }
  return uVar7;
}



// FUNCTION 142ef4efd FUN_142ef4efd body=358 status=ok
// SIG undefined FUN_142ef4efd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142ef4efd(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca32340) {
    FUN_144b3d300(&DAT_14ca32340);
    if (DAT_14ca32340 == -1) {
      _DAT_14ca32300 = DAT_14c9c0d50;
      _DAT_14ca32308 = DAT_14c9c0d50;
      _DAT_14ca32310 = DAT_14c9c4518;
      _DAT_14ca32318 = DAT_14c9e72f8;
      _DAT_14ca32320 = DAT_14c9c04a8;
      _DAT_14ca32328 = DAT_14c9cfd70;
      _DAT_14ca32330 = DAT_14ca30f98;
      _DAT_14ca32338 = DAT_14c9cfd70;
      _Init_thread_footer(&DAT_14ca32340);
    }
  }
  lVar2 = DAT_14ca97170;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  iVar1 = *(int *)(lVar2 + uVar7 * 4);
  iVar3 = (**(code **)(*param_1 + 0x270))(param_1);
  if (iVar1 < 1) {
    puVar6 = (undefined8 *)(&DAT_14ca32300 + (longlong)iVar3 * 8);
  }
  else if (iVar3 - 2U < 6) {
    puVar6 = (undefined8 *)(&PTR_DAT_14a2c5650)[iVar3 - 2U];
  }
  else {
    puVar6 = &DAT_14c9c0d50;
  }
  return *puVar6;
}



// FUNCTION 142ef5063 FUN_142ef5063 body=9312 status=ok
// SIG undefined FUN_142ef5063(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef5063(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong ****pppplVar5;
  undefined8 uVar6;
  longlong ****pppplVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong *puVar19;
  longlong ****pppplVar20;
  uint *puVar21;
  char cVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  undefined8 **ppuVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  longlong ****pppplVar33;
  undefined8 *puVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  bool bVar40;
  undefined1 auStack_598 [32];
  longlong ****local_578;
  longlong ****local_570;
  longlong ****local_568;
  longlong ****local_560;
  longlong ***local_558;
  code *local_550;
  undefined1 *local_548;
  undefined1 *local_540;
  undefined1 *local_538;
  undefined1 *local_530;
  undefined4 local_528;
  undefined8 local_520;
  uint local_50c;
  longlong local_508;
  longlong local_500;
  longlong ****local_4f8;
  longlong ****local_4f0;
  undefined1 local_4e2;
  byte local_4e1;
  ulonglong *local_4e0;
  longlong ****local_4d8;
  longlong ****local_4d0;
  longlong ****local_4c8;
  ulonglong *local_4c0;
  undefined8 *local_4b8;
  longlong ****local_4b0;
  ulonglong local_4a8;
  ulonglong local_4a0;
  undefined8 local_498;
  ulonglong local_490;
  undefined8 local_488;
  uint local_47c;
  ulonglong *local_478;
  longlong ****local_470;
  undefined4 local_464;
  ulonglong local_460;
  undefined8 local_458;
  longlong ****local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined1 local_428 [16];
  undefined8 local_418;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined1 local_3fc;
  ulonglong local_3f8;
  undefined8 *local_3f0;
  ulonglong uStack_3e8;
  ulonglong local_3e0;
  ulonglong local_3d8;
  ulonglong local_3d0;
  undefined1 local_3c8;
  undefined8 local_3c0;
  undefined8 *local_3b8;
  ulonglong local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined1 local_39c;
  ulonglong local_398;
  undefined8 *local_390;
  ulonglong uStack_388;
  ulonglong local_380;
  undefined8 *local_378;
  ulonglong local_370;
  char local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined1 local_354;
  longlong local_350;
  longlong ****local_348;
  undefined8 uStack_340;
  ulonglong local_338;
  undefined8 *local_330;
  ulonglong local_328;
  char local_320;
  undefined1 local_318 [16];
  undefined8 local_308;
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  ulonglong local_2c0;
  undefined8 *local_2b8;
  ulonglong local_2b0;
  char local_2a8;
  ulonglong local_2a0;
  undefined8 *local_298;
  ulonglong uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  longlong ***local_268;
  longlong ****local_260;
  longlong ****local_258;
  undefined1 local_249;
  undefined8 *local_248;
  undefined8 *puStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_220;
  longlong ****local_218;
  longlong ****local_210;
  longlong ***local_208;
  longlong ****pppplStack_200;
  undefined8 local_1f8;
  undefined8 *local_1e8;
  undefined8 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c0;
  longlong ****local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong ****pppplStack_1a0;
  ulonglong local_198;
  char local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_162;
  undefined3 uStack_15e;
  undefined2 local_15b;
  undefined1 local_159;
  undefined1 local_158 [16];
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 local_11c;
  int iStack_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong ****local_b8;
  longlong ****local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong ****local_98;
  undefined1 local_90;
  longlong ****local_88;
  longlong ****local_80;
  undefined8 *local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_598;
  local_258 = (longlong ****)0x0;
  local_578 = (longlong ****)&local_260;
  local_260 = (longlong ****)0x0;
  local_570 = &local_268;
  local_4d8 = (longlong ****)0x0;
  local_268 = (longlong ***)0x0;
  local_568 = (longlong ****)local_278;
  local_278 = (undefined1  [16])0x0;
  local_560 = (longlong ****)local_288;
  local_288 = (undefined1  [16])0x0;
  local_558 = (longlong ***)((ulonglong)local_558 & 0xffffffffffffff00);
  local_478 = param_1;
  FUN_142ef4c5c(param_5,*(undefined4 *)(param_3 + 0x3090),param_4,&local_258);
  pppplVar7 = local_258;
  pppplVar5 = local_260;
  iVar10 = (*(code *)(*local_260)[0xb])(local_260,local_258);
  uVar25 = DAT_14c9c0d98;
  uVar31 = (ulonglong)(iVar10 == 5);
  uVar16 = param_4[uVar31 * 3 + 4];
  local_298 = (undefined8 *)param_4[uVar31 * 3 + 5];
  uStack_290 = param_4[uVar31 * 3 + 6];
  local_2a0 = uVar16;
  iVar10 = FUN_142ef4d4f(pppplVar5,pppplVar7);
  local_490 = uVar25;
  if (iVar10 != 0) {
    if (((*(char *)((longlong)param_4 + 0x191) == '\0') &&
        (local_4d8 = (longlong ****)param_4[0x33], (longlong *****)local_4d8 != (longlong *****)0x0)
        ) && ((*(byte *)((longlong)local_4d8 + 0x24) & 4) != 0)) {
      local_490 = FUN_142ef4da1(pppplVar7);
    }
    else {
      local_4d8 = (longlong ****)0x0;
    }
  }
  uVar31 = DAT_14c9c0d50;
  uVar14 = FUN_142ef4e7f(pppplVar7);
  local_460 = uVar31;
  if ((char)uVar14 != '\0') {
    uVar14 = FUN_142ef4efd(pppplVar7);
    local_460 = uVar14;
  }
  local_4e1 = iVar10 != 0 & *(byte *)((longlong)param_4 + 0x191);
  plVar15 = (longlong *)CONCAT71((int7)(uVar14 >> 8),local_4e1);
  uVar25 = uVar31 ^ local_460 | uVar25 ^ local_490;
  local_4e1 = uVar25 != 0 | local_4e1;
  if ((local_4e1 == 0) &&
     (plVar15 = *(longlong **)(*(longlong *)(param_3 + 8) + 8), *plVar15 == param_3)) {
    local_498 = (undefined8 *)((ulonglong)local_498._4_4_ << 0x20);
  }
  else {
    local_498 = (undefined8 *)
                (CONCAT44(local_498._4_4_,
                          (int)CONCAT71((int7)((ulonglong)plVar15 >> 8),
                                        *(undefined1 *)((longlong)param_4 + 0x1ca))) ^ 1);
  }
  uVar31 = *param_4;
  local_4b0 = pppplVar7;
  if ((((longlong *****)local_4d8 == (longlong *****)0x0) || (uVar31 == 0 || DAT_14ca84f21 != '\0'))
     || (((int)param_4[2] == (int)param_4[1] &&
         (*(int *)((longlong)param_4 + 0x14) == *(int *)((longlong)param_4 + 0xc))))) {
    uVar25 = 0;
  }
  else {
    uVar25 = CONCAT71((int7)(uVar25 >> 8),*(undefined1 *)((longlong)param_4 + 0x1ca)) ^ 1;
  }
  local_50c = CONCAT31(local_50c._1_3_,local_4e1);
  local_4e1 = *(byte *)((longlong)param_4 + 0x1c9) & local_4e1;
  uVar26 = CONCAT71((int7)(uVar25 >> 8),(byte)uVar25 | local_4e1);
  puVar18 = (undefined8 *)param_4[1];
  uVar14 = param_4[2];
  local_2a8 = (char)param_4[3];
  iVar10 = (int)(uVar14 >> 0x20);
  iVar39 = (int)((ulonglong)puVar18 >> 0x20);
  iVar36 = (int)puVar18;
  iVar30 = (int)uVar14;
  if ((uVar31 == 0) || (iVar30 == iVar36 && iVar10 == iVar39)) {
    puVar27 = param_4 + 4;
    bVar40 = true;
    uVar23 = 0;
    do {
      if (((((uint)((ulonglong)local_268[5][0x47] >> ((byte)uVar23 & 0x3f)) >> 0xe & 1) != 0) &&
          (*puVar27 != 0)) && (*(longlong *)(uVar16 + 0x38) == *(longlong *)(*puVar27 + 0x38)))
      break;
      bVar40 = uVar23 < 4;
      uVar23 = uVar23 + 1;
      puVar27 = puVar27 + 3;
    } while (uVar23 != 5);
    if (uVar31 != 0) goto LAB_142ef5375;
    bVar35 = false;
  }
  else {
    bVar40 = false;
LAB_142ef5375:
    bVar35 = iVar10 != iVar39 || iVar30 != iVar36;
  }
  local_47c = (uint)uVar26;
  local_508 = param_3;
  local_500 = param_2;
  local_4e0 = param_4;
  local_2c0 = uVar31;
  local_2b8 = puVar18;
  local_2b0 = uVar14;
  if ((((bVar35 || ((uVar25 & 1) != 0 || local_4e1 != 0)) || bVar40) || ((param_4[0x39] & 1) == 0))
     || ((DAT_14ca85550 == 0xe || (*(char *)((longlong)param_4 + 0x1ca) != '\0')))) {
    if ((uVar31 == 0) ||
       (iVar10 == iVar39 && iVar30 == iVar36 || ((uVar25 & 1) != 0 || local_4e1 != 0))) {
      lVar29 = *(longlong *)(uVar16 + 0x38);
      local_488 = CONCAT62(local_488._2_6_,*(undefined2 *)(lVar29 + 0x94));
      local_4b0 = *(longlong *****)(lVar29 + 0x7c);
      uVar3 = *(undefined8 *)(lVar29 + 0x84);
      uVar1 = *(ushort *)(lVar29 + 0x8c);
      uVar9 = *(undefined1 *)(lVar29 + 0x90);
      uVar16 = *(ulonglong *)(lVar29 + 0x60);
      cVar8 = *(char *)(lVar29 + 0x93);
      local_2f8 = (undefined1  [16])0x0;
      local_2e8 = 0;
      FUN_143017a3c(local_158,param_2,&local_2a0);
      uVar14 = uStack_290;
      puVar18 = local_298;
      param_2 = local_500;
      cVar22 = (char)(int)param_4[0x32];
      if (cVar22 != '\0') {
        cVar8 = cVar22;
      }
      uVar16 = (ulonglong)((uint)*(undefined8 *)(local_158._0_8_ + 0x60) & 0x20000) |
               uVar16 & 0xfffffffff7ddeffc | DAT_14ca4af80;
      local_108._0_4_ = (uint)uVar16 | 1;
      cVar22 = (&DAT_00001de6)[local_508];
      local_108._4_4_ = (undefined4)(uVar16 >> 0x20);
      local_e0 = (longlong *****)CONCAT26(1,(uint6)uVar1 << 0x20);
      local_d8 = (longlong *****)
                 CONCAT53(CONCAT23(local_d8._6_2_,CONCAT21((undefined2)local_488,cVar8)),
                          CONCAT21(1,uVar9));
      uStack_100 = 1;
      iVar10 = (int)uVar3;
      local_e4 = DAT_14ca84e40;
      if (iVar10 < DAT_14ca84e40) {
        local_e4 = iVar10;
      }
      uStack_fc = 0;
      uStack_fb = 0;
      uStack_f9 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0x3f800000;
      if (local_e4 < 2) {
        local_e4 = 1;
      }
      iVar39 = (int)((ulonglong)uVar3 >> 0x20);
      iVar10 = DAT_14ca84e40;
      if (iVar39 < DAT_14ca84e40) {
        iVar10 = iVar39;
      }
      uStack_ec = SUB84(local_4b0,0);
      uStack_e8 = (undefined4)((ulonglong)local_4b0 >> 0x20);
      if (iVar10 < 2) {
        iVar10 = 1;
      }
      local_e0 = (longlong *****)CONCAT44(local_e0._4_4_,iVar10);
      uVar31 = *(longlong *)(local_500 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar16 = uVar31 + 0x120;
      if (*(ulonglong *)(local_500 + 0x78) < uVar16) {
        plVar15 = (longlong *)(local_500 + 0x70);
        FUN_140023dd8(plVar15,0x128);
        uVar31 = *plVar15 + 7U & 0xfffffffffffffff8;
        uVar16 = uVar31 + 0x120;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar16;
      FUN_1456bbb8c(uVar31,L"PostProcessMaterial",&local_108,0);
      iVar10 = *(int *)(param_2 + 0x180);
      uVar11 = iVar10 + 1;
      *(uint *)(param_2 + 0x180) = uVar11;
      if (*(uint *)(param_2 + 0x184) < uVar11) {
        FUN_14472c0f6(param_2 + 0x178);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar10 * 8) = uVar31;
      *(int *)(uVar31 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      uVar26 = (ulonglong)local_47c;
      local_2a8 = cVar22 * '\x02';
    }
    cVar8 = local_2a8;
    puVar27 = local_4e0;
    lVar29 = local_508;
    local_2c0 = uVar31;
    local_2b8 = puVar18;
    local_2b0 = uVar14;
    if ((((byte)local_498 | (byte)uVar26) & 1) != 0) {
      local_318 = (undefined1  [16])0x0;
      local_308 = 0;
      FUN_143017a3c(local_158,param_2,&local_2a0);
      uVar3 = local_158._0_8_;
      if (*(char *)((longlong)puVar27 + 0x1c9) == '\x01') {
        local_4b0 = (longlong ****)local_158._8_8_;
        local_488 = uStack_148;
        local_4f0 = *(longlong *****)(local_158._0_8_ + 0x84);
        local_4f8 = *(longlong *****)(uVar31 + 0x84);
        uVar4 = *(undefined8 *)(lVar29 + 0x13818);
        local_498 = (undefined8 *)uVar14;
        FUN_145e59a4c();
        FUN_1448e935e(uVar4,&local_108,&DAT_14ca2c8f8,0);
        FUN_145e59a4c();
        local_4c8 = (longlong ****)CONCAT44(local_108._4_4_,(uint)local_108);
        local_4d0 = (longlong ****)
                    CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
        puVar27 = (ulonglong *)(param_2 + 0x70);
        puVar34 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar32 = puVar34 + 0x24;
        if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
          FUN_140023dd8(puVar27,0x130);
          puVar34 = (undefined8 *)(*puVar27 + 0xf & 0xfffffffffffffff0);
          puVar32 = puVar34 + 0x24;
        }
        *puVar27 = (ulonglong)puVar32;
        *puVar34 = &PTR_FUN_14a2c4460;
        local_4b8 = puVar34 + 2;
        *(undefined1 (*) [16])(puVar34 + 2) = (undefined1  [16])0x0;
        lVar29 = 0x32;
        do {
          *(undefined1 (*) [16])((longlong)puVar34 + lVar29 + -0x12) = (undefined1  [16])0x0;
          *(undefined4 *)((longlong)puVar34 + lVar29 + -2) = 0xffff0000;
          lVar29 = lVar29 + 0x18;
        } while (lVar29 != 0xf2);
        *(undefined4 *)((longlong)puVar34 + 0xf4) = 0;
        *(undefined1 (*) [16])(puVar34 + 0x1c) = (undefined1  [16])0x0;
        *(undefined2 *)(puVar34 + 0x1e) = 0;
        *(undefined4 *)(puVar34 + 0x1f) = 0xffffffff;
        *(undefined4 *)((longlong)puVar34 + 0xfc) = 0xffffffff;
        *(undefined4 *)(puVar34 + 0x20) = 0xffffffff;
        *(undefined4 *)((longlong)puVar34 + 0x104) = 0xffffffff;
        *(undefined4 *)(puVar34 + 0x21) = 0;
        *(undefined2 *)((longlong)puVar34 + 0x10c) = 0;
        puVar34[0x22] = 0;
        iVar10 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar10 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar10 + 1U) {
          FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar10);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar10 * 8) = puVar34;
        puVar34[2] = uVar3;
        puVar34[3] = DAT_14c9c0d80;
        puVar34[4] = uVar31;
        puVar34[5] = 0;
        *(char *)(puVar34 + 6) = cVar8;
        *(undefined1 *)((longlong)puVar34 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar34 + 0x32) = 0xffff;
        uVar11 = *(uint *)(local_508 + 0x3090);
        local_4a0 = CONCAT44(local_4a0._4_4_,*(undefined4 *)(local_508 + 0x1dd4));
        local_4c0 = (ulonglong *)CONCAT44(local_4c0._4_4_,*(undefined4 *)(local_508 + 0x3094));
        local_4a8 = CONCAT71(local_4a8._1_7_,(&DAT_00001de6)[local_508]);
        uVar3 = *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)uVar11 * 2) * 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b780) &&
           (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
          FUN_145e1a792();
          local_530 = &LAB_14712ac08;
          local_538 = &LAB_14712ac0c;
          local_540 = &LAB_1472e3912;
          local_548 = &LAB_1472e3916;
          local_550 = FUN_1472e391a;
          local_558 = (longlong ***)FUN_1472e3942;
          local_570 = (longlong ****)0x14a2f5d42;
          local_578 = (longlong ****)0x14a2f9d44;
          local_520 = 0;
          local_528 = 0xe0;
          local_560 = (longlong ****)CONCAT44(local_560._4_4_,1);
          local_568 = (longlong ****)((ulonglong)local_568 & 0xffffffff00000000);
          FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
          _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_1430179ee);
          _Init_thread_footer(&DAT_14ca4b780);
        }
        FUN_1448e935e(uVar3,&local_108,&DAT_14ca4b6d8,0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b780) &&
           (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
          FUN_145e1a792();
          local_530 = &LAB_14712ac08;
          local_538 = &LAB_14712ac0c;
          local_540 = &LAB_1472e3912;
          local_548 = &LAB_1472e3916;
          local_550 = FUN_1472e391a;
          local_558 = (longlong ***)FUN_1472e3942;
          local_570 = (longlong ****)0x14a2f5d42;
          local_578 = (longlong ****)0x14a2f9d44;
          local_520 = 0;
          local_528 = 0xe0;
          local_560 = (longlong ****)CONCAT44(local_560._4_4_,1);
          local_568 = (longlong ****)((ulonglong)local_568 & 0xffffffff00000000);
          FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
          _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
          atexit((_func_5014 *)&LAB_1430179ee);
          _Init_thread_footer(&DAT_14ca4b780);
        }
        uVar25 = DAT_14c9c0d98;
        uVar16 = DAT_14c9c0d50;
        uVar3 = CONCAT44(local_108._4_4_,(uint)local_108);
        uVar4 = CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
        FUN_145e59cba();
        puVar32 = local_4b8;
        pppplVar5 = local_4c8;
        local_108._0_4_ = 0;
        local_108._4_4_ = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_fb = 0;
        uStack_f9 = 0;
        FUN_1448f70da(local_4c8,&DAT_14ca323d0,local_4b8,&local_108);
        uVar14 = (ulonglong)local_498;
        local_108._4_4_ = (undefined4)local_4a0;
        uStack_100 = local_4c0._0_4_;
        uStack_fc = (undefined1)local_4a8;
        uStack_fb = (undefined2)local_1a8;
        uStack_f9 = local_1a8._2_1_;
        uStack_f8 = SUB84(local_4f8,0);
        uStack_f4 = (undefined4)((ulonglong)local_4f8 >> 0x20);
        uStack_f0 = SUB84(puVar18,0);
        uStack_ec = (undefined4)((ulonglong)puVar18 >> 0x20);
        uStack_e8 = SUB84(local_498,0);
        local_e4 = (int)((ulonglong)local_498 >> 0x20);
        local_e0 = (longlong *****)local_4f0;
        local_d8 = (longlong *****)local_4b0;
        local_d0 = local_488;
        local_b8 = pppplVar5;
        local_b0 = local_4d0;
        local_a8 = uVar16;
        local_a0 = uVar25;
        local_98 = (longlong ****)DAT_14ca94df8;
        local_90 = 0;
        local_88 = pppplVar5;
        local_80 = local_4d0;
        local_78 = puVar32;
        local_70 = 0;
        local_108._0_4_ = uVar11;
        local_c8 = uVar3;
        uStack_c0 = uVar4;
        FUN_145e59cba();
        param_2 = local_500;
        FUN_1472a2dfa(local_500,&local_208,puVar32,&local_108);
        puVar27 = local_4e0;
        lVar29 = local_508;
      }
      else {
        local_350 = local_158._0_8_;
        local_348 = (longlong ****)local_158._8_8_;
        uStack_340 = uStack_148;
        local_360 = *(undefined4 *)(lVar29 + 0x3090);
        local_35c = *(undefined4 *)(lVar29 + 0x1dd4);
        local_358 = *(undefined4 *)(lVar29 + 0x3094);
        local_354 = (&DAT_00001de6)[lVar29];
        local_578 = (longlong ****)CONCAT44(local_578._4_4_,1);
        local_338 = uVar31;
        local_330 = puVar18;
        local_328 = uVar14;
        local_320 = cVar8;
        FUN_14301884d(param_2);
      }
      local_2a8 = '\x01';
    }
    if ((((char)local_50c != '\0') && (*(char *)((longlong)puVar27 + 0x1ca) == '\x01')) &&
       (*(char *)((longlong)puVar27 + 0x1cb) == '\x01')) {
      local_398 = local_2a0;
      local_390 = local_298;
      uStack_388 = uStack_290;
      local_3a8 = *(undefined4 *)(lVar29 + 0x3090);
      local_3a4 = *(undefined4 *)(lVar29 + 0x1dd4);
      local_3a0 = *(undefined4 *)(lVar29 + 0x3094);
      local_39c = (&DAT_00001de6)[lVar29];
      local_380 = uVar31;
      local_378 = puVar18;
      local_370 = uVar14;
      local_368 = local_2a8;
      FUN_143018feb(param_2);
    }
  }
  else {
    local_2d8 = (undefined1  [16])0x0;
    local_2c8 = 0;
    FUN_143017a3c(&local_108,param_2,&local_2a0);
    uVar31 = CONCAT44(local_108._4_4_,(uint)local_108);
    puVar18 = (undefined8 *)CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT14(uStack_fc,uStack_100)));
    uVar14 = CONCAT44(uStack_f4,uStack_f8);
    local_2a8 = '\x01';
    local_2c0 = uVar31;
    local_2b8 = puVar18;
    local_2b0 = uVar14;
    cVar8 = (*(code *)(*local_4b0)[0x84])();
    if (cVar8 == '\0') {
      local_460 = DAT_14c9f8378;
    }
  }
  pppplVar5 = local_258;
  local_498 = local_298;
  local_4b0 = (longlong ****)uStack_290;
  local_488 = *(undefined8 *)(*(longlong *)(local_2a0 + 0x38) + 0x84);
  local_3c0 = *(undefined8 *)(uVar31 + 0x84);
  local_3b8 = puVar18;
  local_3b0 = uVar14;
  local_50c = (*(code *)(*local_258)[0x87])(local_258);
  cVar8 = (*(code *)(*pppplVar5)[0x86])(pppplVar5);
  if ((cVar8 != '\0') && (*(int *)(DAT_14ca2c6a8 + 4) != 0)) {
    uVar11 = (*(code *)(*pppplVar5)[0x88])(pppplVar5);
    puVar27 = local_4e0;
    if (local_4e0[0x33] == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(uint *)(local_4e0[0x33] + 0x70);
    }
    switch(uVar11) {
    case 0:
      bVar40 = local_50c < uVar13;
      break;
    case 1:
      bVar40 = local_50c <= uVar13;
      break;
    case 2:
      bVar40 = uVar13 < local_50c;
      break;
    case 3:
      bVar40 = uVar13 <= local_50c;
      break;
    case 4:
      bVar40 = local_50c == uVar13;
      break;
    case 5:
      bVar40 = local_50c != uVar13;
      break;
    case 6:
      bVar40 = false;
      break;
    default:
      bVar40 = true;
    }
    iVar10 = *(int *)(local_508 + 0x36f8);
    if (iVar10 == 0) {
      uVar25 = 1;
      uVar16 = 0;
      iVar36 = 0;
      iVar39 = 0;
    }
    else {
      puVar21 = *(uint **)(local_508 + 0x36f0);
      if (*(uint **)(local_508 + 0x36f0) == (uint *)0x0) {
        puVar21 = (uint *)(local_508 + 0x36e0);
      }
      uVar13 = *puVar21;
      if (uVar13 == 0) {
        iVar39 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar39 = iVar10 + -1;
        }
        uVar16 = 0;
        uVar25 = (ulonglong)(uint)(iVar39 >> 5);
        if (iVar39 >> 5 < 1) {
          uVar25 = uVar16;
        }
        iVar36 = 0;
        do {
          if (uVar25 == uVar16) goto LAB_142ef5a2e;
          iVar36 = iVar36 + 0x20;
          uVar13 = puVar21[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar16 = 0;
        iVar36 = 0;
      }
      uVar25 = (ulonglong)(-uVar13 & uVar13);
      uVar31 = uVar25 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar39 = (iVar36 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar39) {
        iVar39 = iVar10;
      }
    }
    if (iVar39 == iVar10) {
LAB_142ef5a2e:
      if (!bVar40) {
LAB_142ef5b97:
        if ((*local_4e0 == 0) ||
           (((int)local_4e0[2] == (int)local_4e0[1] &&
            (*(int *)((longlong)local_4e0 + 0x14) == *(int *)((longlong)local_4e0 + 0xc))))) {
          local_428 = (undefined1  [16])0x0;
          local_418 = 0;
          puVar27 = &local_108;
          FUN_143017a3c(puVar27,local_500,&local_2a0);
        }
        else {
          local_3d8 = local_4e0[1];
          local_3d0 = local_4e0[2];
          local_3c8 = (undefined1)local_4e0[3];
          local_3f8 = local_2a0;
          local_3f0 = local_298;
          uStack_3e8 = uStack_290;
          local_408 = *(undefined4 *)(local_508 + 0x3090);
          local_404 = *(undefined4 *)(local_508 + 0x1dd4);
          local_400 = *(undefined4 *)(local_508 + 0x3094);
          local_3fc = (&DAT_00001de6)[local_508];
          local_3e0 = *local_4e0;
          FUN_143018feb(local_500);
        }
        uVar25 = *puVar27;
        puVar18 = (undefined8 *)puVar27[1];
        uVar16 = puVar27[2];
        goto LAB_142ef60f8;
      }
    }
    else {
      puVar21 = (uint *)(local_508 + 0x36e0);
      if (*(uint **)(local_508 + 0x36f0) != (uint *)0x0) {
        puVar21 = *(uint **)(local_508 + 0x36f0);
      }
      iVar30 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar30 = iVar10 + -1;
      }
      if (uVar11 < 7) {
        local_4f0 = *(longlong *****)(local_508 + 0x36d0);
        iVar30 = iVar30 >> 5;
        uVar13 = 0xffffffff;
        do {
          if (uVar11 < 6) {
            uVar38 = *(uint *)((longlong)local_4f0 + (longlong)iVar39 * 0xc);
            switch(uVar11) {
            case 0:
              bVar35 = local_50c < uVar38;
              break;
            case 1:
              bVar35 = local_50c <= uVar38;
              break;
            case 2:
              bVar35 = uVar38 < local_50c;
              break;
            case 3:
              bVar35 = uVar38 <= local_50c;
              break;
            case 4:
              bVar35 = local_50c == uVar38;
              break;
            case 5:
              bVar35 = local_50c != uVar38;
            }
          }
          else {
            bVar35 = false;
          }
          if ((bool)(bVar40 | bVar35)) goto LAB_142ef5bfd;
          uVar13 = uVar13 & ~(uint)uVar25;
          iVar39 = (int)uVar16;
          lVar29 = (longlong)iVar39;
          uVar38 = puVar21[lVar29] & uVar13;
          if (uVar38 == 0) {
            iVar37 = iVar30;
            if (iVar30 < iVar39) {
              iVar37 = iVar39;
            }
            if (iVar30 <= iVar39) break;
            lVar24 = 0;
            while( true ) {
              iVar36 = iVar36 + 0x20;
              uVar38 = puVar21[lVar29 + lVar24 + 1];
              if (uVar38 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar37 - lVar29 == lVar24) goto LAB_142ef5b97;
            }
            uVar16 = (ulonglong)(iVar39 + (int)lVar24 + 1);
            uVar13 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar38 & uVar38);
          uVar31 = uVar25 * 2 + 1;
          lVar29 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          iVar39 = (iVar36 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
          bVar40 = false;
        } while (iVar39 < iVar10);
        goto LAB_142ef5b97;
      }
    }
  }
LAB_142ef5bfd:
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  local_158 = (undefined1  [16])0x0;
  local_12c = SUB124(ZEXT812(0x3f800000),0);
  uStack_128 = SUB128(ZEXT812(0x3f800000),4);
  uStack_120 = 0;
  local_11c = 0x3f800000;
  iStack_118 = -1;
  cVar8 = (*(code *)(*pppplVar5)[0x3e])(pppplVar5);
  iVar10 = (*(code *)(*pppplVar5)[0x93])(pppplVar5);
  puVar27 = local_4e0;
  lVar24 = local_500;
  lVar29 = local_508;
  if (((cVar8 == '\0') || (iVar10 == -1)) || (DAT_14ca25730 == 0)) {
    local_558 = local_268;
    local_560 = pppplVar5;
    local_568 = (longlong ****)CONCAT44(local_568._4_4_,local_50c);
    local_570 = local_4d8;
    local_578 = (longlong ****)&local_2c0;
    lVar17 = FUN_1407b17cb(local_500,local_4e0,local_508,&local_3c0);
  }
  else {
    local_188 = 0;
    uStack_180 = 0;
    uVar16 = 0;
    local_178 = 0;
    puVar19 = local_4e0 + 4;
    if ((char)local_4e0[0x22] != '\0') {
      puVar19 = local_4e0 + 0x13;
    }
    local_108._0_4_ = (uint)*puVar19;
    local_108._4_4_ = (undefined4)(*puVar19 >> 0x20);
    uVar25 = puVar19[1];
    uStack_100 = (undefined4)uVar25;
    uStack_fc = (undefined1)(uVar25 >> 0x20);
    uStack_fb = (undefined2)(uVar25 >> 0x28);
    uStack_f9 = (undefined1)(uVar25 >> 0x38);
    uStack_f8 = (undefined4)puVar19[2];
    uStack_f4 = (undefined4)(puVar19[2] >> 0x20);
    FUN_143017a3c(&local_208,local_500);
    local_210 = (longlong ****)0x0;
    local_578 = (longlong ****)&local_218;
    local_218 = (longlong ****)0x0;
    local_570 = (longlong ****)&local_220;
    local_220 = 0;
    local_568 = (longlong ****)&local_238;
    local_238 = 0;
    uStack_230 = 0;
    local_560 = (longlong ****)&local_248;
    local_248 = (undefined8 *)0x0;
    puStack_240 = (undefined8 *)0x0;
    local_558 = (longlong ***)CONCAT71(local_558._1_7_,1);
    FUN_142ef4c5c(param_5,*(undefined4 *)(local_508 + 0x3090),puVar27,&local_210);
    pppplVar7 = local_210;
    uVar12 = (*(code *)(*local_210)[0x93])(local_210);
    local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,uVar12);
    local_4a8 = DAT_14c9c0d98;
    local_4f0 = pppplVar7;
    iVar10 = FUN_142ef4d4f(local_218,pppplVar7);
    if (iVar10 != 0) {
      if (((*(char *)((longlong)local_4e0 + 0x191) == '\0') &&
          (uVar16 = local_4e0[0x33], uVar16 != 0)) && ((*(byte *)(uVar16 + 0x24) & 4) != 0)) {
        local_4a8 = FUN_142ef4da1(local_4f0);
      }
      else {
        uVar16 = 0;
      }
    }
    local_4a0 = DAT_14c9c0d50;
    cVar8 = FUN_142ef4e7f(local_4f0);
    if (cVar8 != '\0') {
      local_4a0 = FUN_142ef4efd(local_4f0);
    }
    uVar3 = local_1f8;
    pppplVar7 = pppplStack_200;
    local_1a8 = (longlong ****)*local_4e0;
    pppplStack_1a0 = (longlong ****)local_4e0[1];
    local_198 = local_4e0[2];
    local_190 = (char)local_4e0[3];
    cVar22 = (char)(int)local_4e0[0x32];
    cVar8 = *(char *)((longlong)local_208 + 0x93);
    if (cVar22 != '\0') {
      cVar8 = cVar22;
    }
    uVar25 = (ulonglong)local_208[0xc] & 0xfffffffff7ddeffc | DAT_14ca4af80;
    local_108._0_4_ = (uint)uVar25 | 1;
    cVar22 = (&DAT_00001de6)[local_508];
    local_108._4_4_ = (undefined4)(uVar25 >> 0x20);
    local_d8 = (longlong *****)
               CONCAT62(CONCAT24(local_d8._6_2_,
                                 CONCAT22(*(undefined2 *)((longlong)local_208 + 0x94),
                                          CONCAT11(cVar8,*(undefined1 *)((longlong)local_208 + 0x92)
                                                  ))),CONCAT11(1,*(undefined1 *)(local_208 + 0x12)))
    ;
    uStack_100 = 1;
    uStack_fc = 0;
    uStack_fb = 0;
    uStack_f9 = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0x3f800000;
    iVar10 = (int)*(undefined8 *)((longlong)local_208 + 0x84);
    local_e4 = DAT_14ca84e40;
    if (iVar10 < DAT_14ca84e40) {
      local_e4 = iVar10;
    }
    uStack_ec = (undefined4)*(undefined8 *)((longlong)local_208 + 0x7c);
    uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)local_208 + 0x7c) >> 0x20);
    if (local_e4 < 2) {
      local_e4 = 1;
    }
    iVar39 = (int)((ulonglong)*(undefined8 *)((longlong)local_208 + 0x84) >> 0x20);
    iVar10 = DAT_14ca84e40;
    if (iVar39 < DAT_14ca84e40) {
      iVar10 = iVar39;
    }
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    local_e0 = (longlong *****)CONCAT44(*(undefined4 *)((longlong)local_208 + 0x8c),iVar10);
    puVar27 = (ulonglong *)(local_500 + 0x70);
    pppplVar33 = (longlong ****)(*(longlong *)(local_500 + 0x70) + 7U & 0xfffffffffffffff8);
    pppplVar20 = pppplVar33 + 0x24;
    local_4c0 = puVar27;
    if (*(longlong *****)(local_500 + 0x78) < pppplVar20) {
      FUN_140023dd8(puVar27,0x128);
      pppplVar33 = (longlong ****)(*puVar27 + 7 & 0xfffffffffffffff8);
      pppplVar20 = pppplVar33 + 0x24;
    }
    lVar29 = local_500;
    *(longlong *****)(local_500 + 0x70) = pppplVar20;
    FUN_1456bbb8c(pppplVar33,L"PostProcessTempOutput",&local_108);
    iVar10 = *(int *)(lVar29 + 0x180);
    *(uint *)(lVar29 + 0x180) = iVar10 + 1U;
    if (*(uint *)(lVar29 + 0x184) < iVar10 + 1U) {
      FUN_14472c0f6(local_500 + 0x178,iVar10);
    }
    pppplVar20 = local_4f0;
    *(longlong *****)(*(longlong *)(local_500 + 0x178) + (longlong)iVar10 * 8) = pppplVar33;
    *(int *)((longlong)pppplVar33 + 0x9c) = *(int *)(local_500 + 0x180) + -1;
    pppplStack_1a0 = pppplVar7;
    local_198 = uVar3;
    local_470 = pppplStack_200;
    local_430 = local_1f8;
    local_438 = *(undefined8 *)((longlong)local_208 + 0x84);
    local_1c0 = *(undefined8 *)((longlong)pppplVar33 + 0x84);
    local_1b8 = pppplVar7;
    local_1b0 = uVar3;
    local_1a8 = pppplVar33;
    local_190 = cVar22 * '\x02';
    uVar12 = (*(code *)(*local_4f0)[0x87])(local_4f0);
    local_4f8 = (longlong ****)CONCAT44(local_4f8._4_4_,uVar12);
    cVar8 = (*(code *)(*pppplVar20)[0x86])(pppplVar20);
    if ((cVar8 == '\0') || (*(int *)(DAT_14ca2c6a8 + 4) == 0)) {
LAB_142ef6ed2:
      uVar9 = (*(code *)(*local_4f0)[0x3e])();
      local_578 = (longlong ****)CONCAT71(local_578._1_7_,uVar9);
      FUN_147289a15(&local_108,local_500,&local_1c0,(ulonglong)local_4b8 & 0xffffffff);
      lVar29 = local_500;
      puVar18 = &local_108;
      puVar32 = (undefined8 *)local_158;
      for (lVar24 = 9; lVar24 != 0; lVar24 = lVar24 + -1) {
        *puVar32 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar32 = puVar32 + 1;
      }
      if ((local_158._8_8_ != 0) && (iStack_118 != -1)) {
        local_558 = (longlong ***)local_220;
        local_560 = local_4f0;
        local_568 = (longlong ****)CONCAT44(local_568._4_4_,(uint)local_4f8);
        local_578 = (longlong ****)&local_1a8;
        local_570 = (longlong ****)uVar16;
        lVar24 = FUN_1407b17cb(local_500,local_4e0,local_508,&local_1c0);
        local_570 = (longlong ****)CONCAT44(uStack_13c,uStack_140);
        local_108._0_4_ = (uint)uStack_138;
        local_108._4_4_ = (undefined4)((ulonglong)uStack_138 >> 0x20);
        uStack_100 = uStack_130;
        uStack_fc = (undefined1)local_12c;
        uStack_fb = (undefined2)((uint)local_12c >> 8);
        uStack_f9 = (undefined1)((uint)local_12c >> 0x18);
        local_578 = (longlong ****)&local_108;
        FUN_1472897d0(lVar24 + 0x40,lVar29,local_158._0_8_,local_158._8_8_);
        FUN_141568366();
        uVar3 = local_238;
        puVar18 = local_248;
        local_108._0_4_ = (uint)local_238;
        local_108._4_4_ = (undefined4)((ulonglong)local_238 >> 0x20);
        uStack_100 = SUB84(local_248,0);
        uStack_fc = (undefined1)((ulonglong)local_248 >> 0x20);
        uStack_fb = (undefined2)((ulonglong)local_248 >> 0x28);
        uStack_f9 = (undefined1)((ulonglong)local_248 >> 0x38);
        local_1d8 = 0;
        uStack_1d0 = 0;
        puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,2);
        local_1e8 = &local_108;
        FUN_1448fd31d(&local_1e8,&DAT_14ca31fb8,lVar24);
        if (*(longlong *)(lVar24 + 0x40) != 0 || *(longlong *)(lVar24 + 0x50) != 0) {
          local_1d8 = local_238;
          uStack_1d0 = uStack_230;
          local_1e8 = local_248;
          puStack_1e0 = puStack_240;
          local_4f0 = local_218;
          local_4d0 = local_210;
          local_4c8 = (longlong ****)DAT_14ca94df8;
          local_4b8 = puStack_240;
          local_440 = uStack_230;
          local_464 = *(undefined4 *)(local_508 + 0x3090);
          uVar12 = *(undefined4 *)(local_508 + 0x1dd4);
          uVar2 = *(undefined4 *)(local_508 + 0x3094);
          local_4e2 = (&DAT_00001de6)[local_508];
          local_448 = local_1c0;
          local_450 = local_1b8;
          local_458 = local_1b0;
          FUN_141568366();
          lVar29 = local_500;
          FUN_140069376(local_500);
          puVar27 = local_4c0;
          puVar34 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar32 = puVar34 + 0x50;
          if (*(undefined8 **)(lVar29 + 0x78) < puVar32) {
            FUN_140023dd8(local_4c0,0x288);
            puVar34 = (undefined8 *)(*puVar27 + 7 & 0xfffffffffffffff8);
            puVar32 = puVar34 + 0x50;
          }
          *local_4c0 = (ulonglong)puVar32;
          local_108._0_4_ = (uint)lVar24;
          local_108._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
          uStack_100 = (undefined4)DAT_14ca32000;
          uStack_fc = (undefined1)((ulonglong)DAT_14ca32000 >> 0x20);
          uStack_fb = (undefined2)((ulonglong)DAT_14ca32000 >> 0x28);
          uStack_f9 = (undefined1)((ulonglong)DAT_14ca32000 >> 0x38);
          if (DAT_14ca32000 != 0) {
            LOCK();
            *(int *)(DAT_14ca32000 + 8) = *(int *)(DAT_14ca32000 + 8) + 1;
            UNLOCK();
          }
          uStack_f8 = 0x4ca31fb8;
          uStack_f4 = 1;
          local_578 = (longlong ****)CONCAT71(local_578._1_7_,2);
          FUN_140068f1a(puVar34,&local_249,&local_108,1);
          *puVar34 = &PTR_FUN_14a2c4490;
          *(undefined4 *)(puVar34 + 0x37) = local_464;
          *(undefined4 *)((longlong)puVar34 + 0x1bc) = uVar12;
          *(undefined4 *)(puVar34 + 0x38) = uVar2;
          *(undefined1 *)((longlong)puVar34 + 0x1c4) = local_4e2;
          *(undefined2 *)((longlong)puVar34 + 0x1c5) = local_15b;
          *(undefined1 *)((longlong)puVar34 + 0x1c7) = local_159;
          puVar34[0x39] = local_448;
          puVar34[0x3a] = local_450;
          puVar34[0x3b] = local_458;
          puVar34[0x3c] = local_438;
          puVar34[0x3d] = local_470;
          puVar34[0x3e] = local_430;
          puVar34[0x3f] = uVar3;
          puVar34[0x40] = local_440;
          puVar34[0x41] = puVar18;
          puVar34[0x42] = local_4b8;
          puVar34[0x43] = local_4a0;
          puVar34[0x44] = local_4a8;
          puVar34[0x45] = local_4c8;
          *(char *)(puVar34 + 0x46) = (char)local_4f8;
          *(uint *)((longlong)puVar34 + 0x234) = CONCAT31(uStack_15e,local_162._3_1_);
          *(undefined4 *)((longlong)puVar34 + 0x231) = local_162;
          puVar34[0x47] = local_508;
          puVar34[0x48] = local_1d8;
          puVar34[0x49] = uStack_1d0;
          puVar34[0x4a] = local_1e8;
          puVar34[0x4b] = puStack_1e0;
          puVar34[0x4c] = local_4f0;
          puVar34[0x4d] = local_4d0;
          puVar34[0x4e] = lVar24;
          *(undefined1 *)(puVar34 + 0x4f) = 2;
          iVar10 = *(int *)(local_500 + 0x170);
          *(uint *)(local_500 + 0x170) = iVar10 + 1U;
          if (*(uint *)(local_500 + 0x174) < iVar10 + 1U) {
            FUN_14470e57a(local_500 + 0x168,iVar10);
          }
          lVar29 = local_500;
          *(undefined8 **)(*(longlong *)(local_500 + 0x168) + (longlong)iVar10 * 8) = puVar34;
          *(int *)((longlong)puVar34 + 0x2c) = *(int *)(local_500 + 0x170) + -1;
          FUN_140069100(local_500,puVar34);
          local_108._0_4_ = (uint)pppplStack_1a0;
          local_108._4_4_ = (undefined4)((ulonglong)pppplStack_1a0 >> 0x20);
          uStack_100 = (undefined4)local_198;
          uStack_fc = (undefined1)(local_198 >> 0x20);
          uStack_fb = (undefined2)(local_198 >> 0x28);
          uStack_f9 = (undefined1)(local_198 >> 0x38);
          FUN_147289bb5(lVar29,local_508,&local_108,local_158);
        }
      }
    }
    else {
      uVar13 = (*(code *)(*local_4f0)[0x88])();
      local_4d0 = (longlong ****)CONCAT44(local_4d0._4_4_,uVar13);
      uVar11 = 0;
      if (local_4e0[0x33] != 0) {
        uVar11 = *(uint *)(local_4e0[0x33] + 0x70);
      }
      local_4c8 = (longlong ****)(ulonglong)uVar13;
      switch(local_4c8) {
      case (longlong ****)0x0:
        bVar40 = (uint)local_4f8 < uVar11;
        break;
      case (longlong ****)0x1:
        bVar40 = (uint)local_4f8 <= uVar11;
        break;
      case (longlong ****)0x2:
        bVar40 = uVar11 < (uint)local_4f8;
        break;
      case (longlong ****)0x3:
        bVar40 = uVar11 <= (uint)local_4f8;
        break;
      case (longlong ****)0x4:
        bVar40 = (uint)local_4f8 == uVar11;
        break;
      case (longlong ****)0x5:
        bVar40 = (uint)local_4f8 != uVar11;
        break;
      case (longlong ****)0x6:
        bVar40 = false;
        break;
      default:
        bVar40 = true;
      }
      iVar10 = *(int *)(local_508 + 0x36f8);
      if (iVar10 == 0) {
        uVar14 = 1;
        uVar25 = 0;
        iVar39 = 0;
        iVar36 = 0;
      }
      else {
        puVar21 = *(uint **)(local_508 + 0x36f0);
        if (*(uint **)(local_508 + 0x36f0) == (uint *)0x0) {
          puVar21 = (uint *)(local_508 + 0x36e0);
        }
        uVar11 = *puVar21;
        if (uVar11 == 0) {
          iVar39 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar39 = iVar10 + -1;
          }
          uVar25 = 0;
          uVar31 = (ulonglong)(uint)(iVar39 >> 5);
          if (iVar39 >> 5 < 1) {
            uVar31 = uVar25;
          }
          iVar39 = 0;
          do {
            if (uVar31 == uVar25) goto LAB_142ef6d5b;
            iVar39 = iVar39 + 0x20;
            uVar11 = puVar21[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar11 == 0);
        }
        else {
          uVar25 = 0;
          iVar39 = 0;
        }
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar31 = uVar14 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar36 = (iVar39 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar36) {
          iVar36 = iVar10;
        }
      }
      if (iVar36 == iVar10) {
LAB_142ef6d5b:
        if (bVar40) goto LAB_142ef6ed2;
      }
      else {
        puVar21 = (uint *)(local_508 + 0x36e0);
        if (*(uint **)(local_508 + 0x36f0) != (uint *)0x0) {
          puVar21 = *(uint **)(local_508 + 0x36f0);
        }
        iVar30 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar30 = iVar10 + -1;
        }
        if (6 < uVar13) goto LAB_142ef6ed2;
        iVar30 = iVar30 >> 5;
        uVar11 = 0xffffffff;
        do {
          if (uVar13 < 6) {
            uVar38 = *(uint *)(*(longlong *)(local_508 + 0x36d0) + (longlong)iVar36 * 0xc);
            switch(local_4c8) {
            case (longlong ****)0x0:
              bVar35 = (uint)local_4f8 < uVar38;
              break;
            case (longlong ****)0x1:
              bVar35 = (uint)local_4f8 <= uVar38;
              break;
            case (longlong ****)0x2:
              bVar35 = uVar38 < (uint)local_4f8;
              break;
            case (longlong ****)0x3:
              bVar35 = uVar38 <= (uint)local_4f8;
              break;
            case (longlong ****)0x4:
              bVar35 = (uint)local_4f8 == uVar38;
              break;
            case (longlong ****)0x5:
              bVar35 = (uint)local_4f8 != uVar38;
            }
          }
          else {
            bVar35 = false;
          }
          if ((bool)(bVar40 | bVar35)) goto LAB_142ef6ed2;
          uVar11 = uVar11 & ~(uint)uVar14;
          iVar36 = (int)uVar25;
          lVar29 = (longlong)iVar36;
          uVar38 = puVar21[lVar29] & uVar11;
          if (uVar38 == 0) {
            iVar37 = iVar30;
            if (iVar30 < iVar36) {
              iVar37 = iVar36;
            }
            if (iVar30 <= iVar36) break;
            lVar24 = 0;
            while( true ) {
              iVar39 = iVar39 + 0x20;
              uVar38 = puVar21[lVar29 + lVar24 + 1];
              if (uVar38 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar37 - lVar29 == lVar24) goto LAB_142ef73cc;
            }
            uVar25 = (ulonglong)(iVar36 + (int)lVar24 + 1);
            uVar11 = 0xffffffff;
          }
          uVar14 = (ulonglong)(-uVar38 & uVar38);
          uVar31 = uVar14 * 2 + 1;
          lVar29 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          iVar36 = (iVar39 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
          bVar40 = false;
        } while (iVar36 < iVar10);
      }
    }
LAB_142ef73cc:
    lVar24 = local_500;
    lVar29 = local_508;
    local_558 = local_268;
    local_560 = pppplVar5;
    local_568 = (longlong ****)CONCAT44(local_568._4_4_,local_50c);
    local_570 = local_4d8;
    local_578 = (longlong ****)&local_2c0;
    lVar17 = FUN_1407b17cb(local_500,local_4e0,local_508,&local_3c0);
    local_108._0_4_ = (uint)uStack_128;
    local_108._4_4_ = (undefined4)((ulonglong)uStack_128 >> 0x20);
    uStack_100 = uStack_120;
    uStack_fc = (undefined1)local_11c;
    uStack_fb = (undefined2)((uint)local_11c >> 8);
    uStack_f9 = (undefined1)((uint)local_11c >> 0x18);
    local_578 = (longlong ****)&local_108;
    FUN_1472898ff(lVar17 + 0x40,lVar24,local_158._0_8_,uStack_148);
  }
  FUN_141568366();
  uVar6 = local_278._0_8_;
  local_208 = (longlong ***)&local_108;
  local_108._0_4_ = local_278._0_4_;
  local_108._4_4_ = local_278._4_4_;
  uVar4 = local_288._0_8_;
  uStack_100 = local_288._0_4_;
  uStack_fc = local_288[4];
  uStack_fb = local_288._5_2_;
  uStack_f9 = local_288[7];
  local_1a8 = (longlong ****)0x0;
  pppplStack_1a0 = (longlong ****)0x0;
  pppplStack_200 = (longlong ****)CONCAT44(pppplStack_200._4_4_,2);
  FUN_1448fd31d(&local_208,&DAT_14ca31fb8,lVar17,&local_1a8);
  uVar3 = local_3c0;
  local_1a8 = (longlong ****)local_278._0_8_;
  pppplStack_1a0 = (longlong ****)local_278._8_8_;
  local_208 = (longlong ***)local_288._0_8_;
  pppplStack_200 = (longlong ****)local_288._8_8_;
  local_4d8 = local_260;
  local_4f0 = local_258;
  local_4f8 = (longlong ****)DAT_14ca94df8;
  local_4d0 = (longlong ****)local_288._8_8_;
  local_4c8 = (longlong ****)local_278._8_8_;
  uVar12 = *(undefined4 *)(lVar29 + 0x3090);
  local_4c0 = (ulonglong *)CONCAT44(local_4c0._4_4_,*(undefined4 *)(lVar29 + 0x1dd4));
  local_4a8 = CONCAT44(local_4a8._4_4_,*(undefined4 *)(lVar29 + 0x3094));
  local_470 = (longlong ****)CONCAT71(local_470._1_7_,(&DAT_00001de6)[lVar29]);
  local_4b8 = local_3b8;
  local_4a0 = local_3b0;
  FUN_141568366();
  FUN_140069376(lVar24);
  puVar27 = (ulonglong *)(lVar24 + 0x70);
  puVar32 = (undefined8 *)(*(longlong *)(lVar24 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar32 + 0x50;
  if (*(undefined8 **)(lVar24 + 0x78) < puVar18) {
    FUN_140023dd8(puVar27,0x288);
    puVar32 = (undefined8 *)(*puVar27 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar32 + 0x50;
  }
  *puVar27 = (ulonglong)puVar18;
  local_108._0_4_ = (uint)lVar17;
  local_108._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
  uStack_100 = (undefined4)DAT_14ca32000;
  uStack_fc = (undefined1)((ulonglong)DAT_14ca32000 >> 0x20);
  uStack_fb = (undefined2)((ulonglong)DAT_14ca32000 >> 0x28);
  uStack_f9 = (undefined1)((ulonglong)DAT_14ca32000 >> 0x38);
  if (DAT_14ca32000 != 0) {
    LOCK();
    *(int *)(DAT_14ca32000 + 8) = *(int *)(DAT_14ca32000 + 8) + 1;
    UNLOCK();
  }
  uStack_f8 = 0x4ca31fb8;
  uStack_f4 = 1;
  local_578 = (longlong ****)CONCAT71(local_578._1_7_,2);
  FUN_140068f1a(puVar32,&local_1d8,&local_108,1);
  lVar29 = local_500;
  *puVar32 = &PTR_FUN_14a2c44b0;
  *(undefined4 *)(puVar32 + 0x37) = uVar12;
  *(undefined4 *)((longlong)puVar32 + 0x1bc) = local_4c0._0_4_;
  *(undefined4 *)(puVar32 + 0x38) = (undefined4)local_4a8;
  *(undefined1 *)((longlong)puVar32 + 0x1c4) = local_470._0_1_;
  *(undefined2 *)((longlong)puVar32 + 0x1c5) = (undefined2)local_1c0;
  *(undefined1 *)((longlong)puVar32 + 0x1c7) = local_1c0._2_1_;
  puVar32[0x39] = uVar3;
  puVar32[0x3a] = local_4b8;
  puVar32[0x3b] = local_4a0;
  puVar32[0x3c] = local_488;
  puVar32[0x3d] = local_498;
  puVar32[0x3e] = local_4b0;
  puVar32[0x3f] = uVar6;
  puVar32[0x40] = local_4c8;
  puVar32[0x41] = uVar4;
  puVar32[0x42] = local_4d0;
  puVar32[0x43] = local_460;
  puVar32[0x44] = local_490;
  puVar32[0x45] = local_4f8;
  *(char *)(puVar32 + 0x46) = (char)local_50c;
  uVar12 = (undefined4)local_188;
  *(undefined4 *)((longlong)puVar32 + 0x234) = local_188._3_4_;
  *(undefined4 *)((longlong)puVar32 + 0x231) = uVar12;
  puVar32[0x47] = local_508;
  puVar32[0x48] = local_1a8;
  puVar32[0x49] = pppplStack_1a0;
  puVar32[0x4a] = local_208;
  puVar32[0x4b] = pppplStack_200;
  puVar32[0x4c] = local_4d8;
  puVar32[0x4d] = local_4f0;
  puVar32[0x4e] = lVar17;
  *(undefined1 *)(puVar32 + 0x4f) = 2;
  iVar10 = *(int *)(local_500 + 0x170);
  *(uint *)(local_500 + 0x170) = iVar10 + 1U;
  if (*(uint *)(local_500 + 0x174) < iVar10 + 1U) {
    FUN_14470e57a(local_500 + 0x168,iVar10);
  }
  *(undefined8 **)(*(longlong *)(lVar29 + 0x168) + (longlong)iVar10 * 8) = puVar32;
  *(int *)((longlong)puVar32 + 0x2c) = *(int *)(lVar29 + 0x170) + -1;
  FUN_140069100(lVar29,puVar32);
  puVar27 = local_4e0;
  if (((~(byte)local_47c | local_4e1) & 1) == 0) {
    ppuVar28 = (undefined8 **)(local_4e0 + 1);
    puVar19 = local_4e0 + 2;
    local_108._0_4_ = *(uint *)(local_508 + 0x3090);
    local_108._4_4_ = *(undefined4 *)(local_508 + 0x1dd4);
    uStack_100 = *(undefined4 *)(local_508 + 0x3094);
    uStack_fc = (&DAT_00001de6)[local_508];
    local_560 = (longlong ****)DAT_14c967818;
    local_568 = (longlong ****)DAT_14c967818;
    local_570 = (longlong ****)DAT_14c967818;
    local_578 = (longlong ****)DAT_14c967818;
    FUN_143017f0c(lVar29,&local_108,local_2c0,*local_4e0);
    uVar25 = *puVar27;
  }
  else {
    ppuVar28 = &local_2b8;
    puVar19 = &local_2b0;
    uVar25 = local_2c0;
  }
  puVar18 = *ppuVar28;
  uVar16 = *puVar19;
LAB_142ef60f8:
  *local_478 = uVar25;
  local_478[1] = (ulonglong)puVar18;
  local_478[2] = uVar16;
  if ((local_60 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef74c4 FUN_142ef74c4 body=1027 status=ok
// SIG undefined FUN_142ef74c4(void)

longlong FUN_142ef74c4(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  ulonglong local_180;
  uint local_174;
  longlong local_170;
  undefined8 local_168 [30];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(byte *)(*(longlong *)(param_2 + 8) + 0x48) & 1) == 0) ||
     (*(int *)(DAT_14ca2c6d8 + 4) != 0)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0xa00000000;
  }
  else {
    local_78 = (undefined8 *)0x0;
    local_70 = 0xa00000000;
    lVar7 = 0;
    iVar5 = DAT_14ca19610;
    while( true ) {
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar14 + 0x110) < iVar5) &&
         (FUN_144b3d300(&DAT_14ca19610,L"FPostProcessMaterialNode",lVar14,&DAT_14ca19608),
         iVar5 = DAT_14ca19610, DAT_14ca19610 == -1)) {
        FUN_1446f470e(&DAT_14ca19608,L"FPostProcessMaterialNode",1);
        _Init_thread_footer(&DAT_14ca19610);
        iVar5 = DAT_14ca19610;
      }
      uVar9 = local_70;
      do {
        lVar14 = *(longlong *)(param_2 + 0x2fd8);
        if (lVar7 != 0) {
          lVar14 = (ulonglong)*(uint *)(lVar7 + 0xc) + (ulonglong)*(uint *)(lVar7 + 0x10) + lVar7 +
                   0x14;
        }
        lVar7 = lVar14;
        uVar11 = (uint)local_70;
        if ((lVar7 == 0) ||
           (lVar7 == (longlong)*(int *)(param_2 + 0x2fe0) + *(longlong *)(param_2 + 0x2fd8)))
        goto LAB_142ef76ee;
      } while (*(longlong *)(lVar7 + 4) != DAT_14ca19608);
      lVar14 = (ulonglong)*(uint *)(lVar7 + 0x10) + lVar7;
      if ((undefined4 *)(lVar14 + 0x14) == (undefined4 *)0x0) break;
      if ((param_3 == 8) || (*(int *)(lVar14 + 0x20) == param_3)) {
        uVar9 = (ulonglong)(int)(uint)local_70;
        uVar11 = (uint)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,uVar11);
        if (local_70._4_4_ < uVar11) {
          local_188 = uVar9;
          FUN_1472a30da(local_168);
          uVar9 = local_188;
          iVar5 = DAT_14ca19610;
        }
        puVar10 = local_78;
        if (local_78 == (undefined8 *)0x0) {
          puVar10 = local_168;
        }
        puVar10[uVar9 * 3 + 2] = *(undefined8 *)(lVar14 + 0x24);
        uVar2 = *(undefined4 *)(lVar14 + 0x18);
        uVar3 = *(undefined4 *)(lVar14 + 0x1c);
        uVar4 = *(undefined4 *)(lVar14 + 0x20);
        puVar10 = puVar10 + uVar9 * 3;
        *(undefined4 *)puVar10 = *(undefined4 *)(lVar14 + 0x14);
        *(undefined4 *)((longlong)puVar10 + 4) = uVar2;
        *(undefined4 *)(puVar10 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar4;
      }
    }
LAB_142ef76ee:
    uVar16 = local_70 & 0xffffffff;
    if (uVar16 == 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0xa00000000;
    }
    else {
      puVar10 = local_78;
      if (local_78 == (undefined8 *)0x0) {
        puVar10 = local_168;
      }
      if (0 < (int)(uint)local_70) {
        uVar6 = 0;
        puVar15 = puVar10;
        do {
          if (uVar6 + 1 < uVar16) {
            if ((*(int *)((longlong)puVar15 + 0x24) < *(int *)((longlong)puVar15 + 0xc)) ||
               ((*(int *)((longlong)puVar15 + 0x24) <= *(int *)((longlong)puVar15 + 0xc) &&
                (*(int *)(puVar15 + 5) < *(int *)(puVar15 + 2))))) {
              local_58 = puVar15[2];
              local_68 = *puVar15;
              uStack_60 = puVar15[1];
              puVar15[2] = puVar15[5];
              *puVar15 = puVar15[3];
              puVar15[1] = puVar15[4];
              puVar15[5] = local_58;
              uVar2 = local_68._4_4_;
              uVar3 = (undefined4)uStack_60;
              uVar4 = uStack_60._4_4_;
              *(undefined4 *)(puVar15 + 3) = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar2;
              *(undefined4 *)(puVar15 + 4) = uVar3;
              *(undefined4 *)((longlong)puVar15 + 0x24) = uVar4;
            }
          }
          uVar6 = uVar6 + 2;
          puVar15 = puVar15 + 6;
        } while (uVar6 < uVar16);
        if (2 < (int)uVar11) {
          local_180 = 2;
          do {
            local_174 = (int)local_180 * 2;
            local_188 = (ulonglong)(int)local_174;
            local_170 = local_188 * 0x18;
            uVar6 = uVar9 & 0xffffffff;
            lVar7 = 0;
            puVar15 = puVar10;
            uVar12 = uVar11;
            do {
              uVar13 = uVar12 - (int)local_188;
              if ((int)local_188 <= (int)uVar12) {
                uVar6 = local_188 & 0xffffffff;
              }
              FUN_1472a31f9(puVar15,local_180,uVar6);
              lVar7 = lVar7 + local_188;
              puVar15 = (undefined8 *)((longlong)puVar15 + local_170);
              uVar6 = (ulonglong)uVar13;
              uVar12 = uVar13;
            } while (lVar7 < (longlong)uVar16);
            local_180 = (ulonglong)local_174;
          } while ((int)local_174 < (int)uVar11);
        }
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0xa00000000;
      if ((int)(uint)local_70 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_70 & 0xffffffff);
      }
      if (10 < (uint)local_70) {
        FUN_1472a33a8(param_1);
      }
      puVar10 = local_168;
      if (local_78 != (undefined8 *)0x0) {
        puVar10 = local_78;
      }
      if ((uint)local_70 != 0) {
        lVar7 = (longlong)(int)(uint)local_70;
        lVar14 = 0;
        do {
          uVar1 = *(undefined8 *)((longlong)puVar10 + lVar14);
          iVar5 = *(int *)(param_1 + 0x58);
          *(uint *)(param_1 + 0x58) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x5c) < iVar5 + 1U) {
            FUN_1472a3476(param_1,iVar5);
          }
          lVar8 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar8 = param_1;
          }
          *(undefined8 *)(lVar8 + (longlong)iVar5 * 8) = uVar1;
          lVar14 = lVar14 + 0x18;
        } while (lVar7 * 0x18 != lVar14);
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142ef78c8 FUN_142ef78c8 body=2666 status=ok
// SIG undefined FUN_142ef78c8(void)

longlong *
FUN_142ef78c8(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             longlong *param_5,undefined8 *param_6,uint param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 *puVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  int iVar32;
  int iVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8;
  undefined1 *local_3b0;
  longlong *local_3a8;
  undefined8 *local_3a0;
  undefined8 local_398;
  uint local_38c;
  undefined4 local_388;
  int local_384;
  longlong local_380;
  longlong local_378;
  ulonglong local_370;
  longlong local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined4 *local_338;
  longlong *local_330;
  undefined8 *local_328;
  longlong *local_320;
  longlong local_318;
  undefined8 *local_310;
  longlong local_308;
  ulonglong local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined1 local_2cc;
  longlong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined1 local_298;
  int local_290;
  int iStack_28c;
  ulonglong local_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  longlong local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 uStack_220;
  longlong alStack_218 [15];
  longlong local_1a0 [15];
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_a8 [14];
  undefined1 uStack_70;
  byte bStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  int iStack_6c;
  ulonglong local_60;
  
  uVar20 = (ulonglong)param_7;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_320 = param_5 + 0x22;
  plVar21 = param_5 + 4;
  if (*(char *)((longlong)param_5 + uVar20 + 0x110) != '\0') {
    plVar21 = param_5 + 0x13;
  }
  local_368 = plVar21[uVar20 * 3];
  local_370 = plVar21[uVar20 * 3 + 1];
  local_378 = plVar21[uVar20 * 3 + 2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_350 = (longlong *)0x0;
  uVar35 = (ulonglong)*(uint *)(param_6 + 0xb);
  local_398 = param_2;
  local_388 = param_4;
  local_250 = local_368;
  local_248 = local_370;
  local_240 = local_378;
  do {
    uVar31 = uVar35;
    puVar28 = (undefined8 *)param_6[10];
    if ((int)uVar31 < 1) goto LAB_142ef7a1e;
    if (puVar28 == (undefined8 *)0x0) {
      puVar28 = param_6;
    }
    plVar21 = (longlong *)(**(code **)(*(longlong *)puVar28[uVar31 - 1] + 0x2f0))();
    lVar22 = (**(code **)(*plVar21 + 0x30))(plVar21,*(undefined4 *)(param_3 + 0x3090));
  } while (((lVar22 != 0) &&
           (FUN_1417e131a(plVar21,&local_238,lVar22), local_238 != (undefined1 *)0x0)) &&
          (uVar35 = uVar31 - 1, local_238 != DAT_14ca2c6f0));
  puVar28 = (undefined8 *)param_6[10];
  puVar23 = puVar28;
  if (puVar28 == (undefined8 *)0x0) {
    puVar23 = param_6;
  }
  local_350 = (longlong *)puVar23[uVar31 - 1];
LAB_142ef7a1e:
  if (puVar28 == (undefined8 *)0x0) {
    puVar28 = param_6;
  }
  if ((longlong)*(int *)(param_6 + 0xb) != 0) {
    local_328 = puVar28 + *(int *)(param_6 + 0xb);
    local_338 = local_a8;
    local_330 = param_5 + 0x32;
    local_340 = alStack_218 + uVar20 * 3;
    uVar20 = CONCAT71((int7)(uVar20 * 3 >> 8),1);
    local_380 = param_3;
    local_358 = param_1;
    do {
      plVar21 = (longlong *)*puVar28;
      local_238 = (undefined1 *)*param_5;
      uStack_230 = (undefined4)param_5[1];
      uStack_22c = (undefined4)((ulonglong)param_5[1] >> 0x20);
      uStack_228 = (undefined4)param_5[2];
      uStack_224 = (undefined4)((ulonglong)param_5[2] >> 0x20);
      uStack_220 = (undefined1)param_5[3];
      lVar22 = 0x30;
      do {
        *(undefined8 *)((longlong)&local_248 + lVar22) =
             *(undefined8 *)((longlong)param_5 + lVar22 + -0x10);
        *(undefined8 *)((longlong)&local_240 + lVar22) =
             *(undefined8 *)((longlong)param_5 + lVar22 + -8);
        *(undefined8 *)((longlong)&local_238 + lVar22) = *(undefined8 *)((longlong)param_5 + lVar22)
        ;
        lVar22 = lVar22 + 0x18;
      } while (lVar22 != 0xa8);
      lVar22 = 0xa8;
      do {
        *(undefined8 *)((longlong)&local_248 + lVar22) =
             *(undefined8 *)((longlong)param_5 + lVar22 + -0x10);
        *(undefined8 *)((longlong)&local_240 + lVar22) =
             *(undefined8 *)((longlong)param_5 + lVar22 + -8);
        *(undefined8 *)((longlong)&local_238 + lVar22) = *(undefined8 *)((longlong)param_5 + lVar22)
        ;
        lVar22 = lVar22 + 0x18;
      } while (lVar22 != 0x120);
      local_124 = *(undefined1 *)((longlong)local_320 + 4);
      local_128 = (undefined4)*local_320;
      lVar22 = 0x128;
      do {
        *(undefined8 *)((longlong)&local_248 + lVar22) =
             *(undefined8 *)((longlong)param_5 + lVar22 + -0x10);
        *(undefined8 *)((longlong)&local_240 + lVar22) =
             *(undefined8 *)((longlong)param_5 + lVar22 + -8);
        *(undefined8 *)((longlong)&local_238 + lVar22) = *(undefined8 *)((longlong)param_5 + lVar22)
        ;
        lVar22 = lVar22 + 0x18;
      } while (lVar22 != 0x1a0);
      lVar22 = *local_330;
      uVar5 = *(undefined4 *)((longlong)local_330 + 4);
      lVar25 = local_330[1];
      uVar6 = *(undefined4 *)((longlong)local_330 + 0xc);
      lVar29 = local_330[2];
      uVar7 = *(undefined4 *)((longlong)local_330 + 0x14);
      lVar14 = local_330[3];
      uVar8 = *(undefined4 *)((longlong)local_330 + 0x1c);
      lVar15 = local_330[4];
      uVar9 = *(undefined4 *)((longlong)local_330 + 0x24);
      lVar16 = local_330[5];
      uVar10 = *(undefined4 *)((longlong)local_330 + 0x2c);
      uVar11 = *(undefined4 *)((longlong)local_330 + 0x34);
      lVar17 = local_330[7];
      uVar12 = *(undefined4 *)((longlong)local_330 + 0x3c);
      local_338[0xc] = (int)local_330[6];
      local_338[0xd] = uVar11;
      local_338[0xe] = (int)lVar17;
      local_338[0xf] = uVar12;
      local_338[8] = (int)lVar15;
      local_338[9] = uVar9;
      local_338[10] = (int)lVar16;
      local_338[0xb] = uVar10;
      local_338[4] = (int)lVar29;
      local_338[5] = uVar7;
      local_338[6] = (int)lVar14;
      local_338[7] = uVar8;
      *local_338 = (int)lVar22;
      local_338[1] = uVar5;
      local_338[2] = (int)lVar25;
      local_338[3] = uVar6;
      *local_340 = local_368;
      local_340[1] = local_370;
      local_340[2] = local_378;
      local_310 = puVar28;
      plVar24 = (longlong *)(**(code **)(*plVar21 + 0x2f0))(plVar21);
      lVar22 = (**(code **)(*plVar24 + 0x30))(plVar24,*(undefined4 *)(param_3 + 0x3090));
      if (lVar22 == 0) {
LAB_142ef7e3a:
        bStack_6f = bStack_6f & (byte)uVar20;
LAB_142ef7e42:
        uVar26 = local_398;
        local_3b8 = plVar21;
        if (plVar21 == local_350) {
          FUN_142ef5063(&local_290,local_398,param_3,&local_238);
          *param_1 = CONCAT44(iStack_28c,local_290);
          param_1[1] = local_288;
          param_1[2] = local_280;
        }
        else {
          uStack_228 = 0;
          uStack_224 = 0;
          uStack_220 = 0;
          local_238 = (undefined1 *)0x0;
          uStack_230 = 0;
          uStack_22c = 0;
          FUN_142ef5063(&local_290,local_398,param_3,&local_238);
          *param_1 = CONCAT44(iStack_28c,local_290);
          param_1[1] = local_288;
          param_1[2] = local_280;
          FUN_1448a0832(&local_290,uVar26,param_1);
          local_368 = CONCAT44(iStack_28c,local_290);
          local_370 = local_288;
          local_248 = local_288;
          local_378 = local_280;
          local_240 = local_280;
          local_250 = local_368;
        }
      }
      else {
        lVar25 = *(longlong *)(lVar22 + 0x18);
        local_348 = *(undefined8 *)(*(longlong *)(param_3 + 8) + 0x348);
        lVar29 = *(longlong *)(lVar25 + 0x28);
        uVar35 = *(ulonglong *)(lVar29 + 0x228);
        uVar31 = lVar29 + 0x228 + ((longlong)uVar35 >> 0x18);
        if ((uVar35 & 1) == 0) {
          uVar31 = uVar35;
        }
        iVar18 = *(int *)(lVar29 + 0x230);
        local_38c = (uint)uVar20;
        local_360 = plVar21;
        local_318 = lVar22;
        if (iVar18 == 0) {
          puVar34 = (undefined1 *)0x0;
LAB_142ef7de0:
          uVar20 = 0;
        }
        else {
          puVar34 = (undefined1 *)
                    CONCAT44(*(undefined4 *)(lVar29 + 0x278),*(undefined4 *)(lVar29 + 0x270));
          iVar32 = 0;
          if (iVar18 < 1) goto LAB_142ef7de0;
          lVar29 = 0xa8;
          lVar22 = 0;
          uVar20 = 0;
          local_384 = iVar18;
          local_308 = lVar25;
          do {
            plVar21 = local_360;
            if (((uint)(*(ulonglong *)(*(longlong *)(lVar25 + 0x28) + 0x238) >>
                       ((byte)lVar22 & 0x3f)) >> 0xe & 1) == 0) {
              lVar25 = (longlong)iVar32;
              local_290 = *(int *)(uVar31 + lVar25 * 0xc);
              iStack_28c = *(int *)(uVar31 + 8 + lVar25 * 0xc);
              iVar18 = *(int *)(uVar31 + lVar25 * 0xc);
              iVar33 = *(int *)(uVar31 + 8 + lVar25 * 0xc);
              local_300 = uVar20;
              plVar24 = (longlong *)(**(code **)(*local_360 + 0x2f0))(local_360);
              (**(code **)(*plVar24 + 0x50))(plVar24,&local_290);
              bVar3 = (int)((ulonglong)puVar34 >> 0x20) == iVar33;
              bVar4 = iVar18 == (int)puVar34;
              puVar13 = (undefined1 *)CONCAT44(iStack_28c,local_290);
              if (bVar3 && bVar4) {
                puVar34 = puVar13;
              }
              if (puVar13 == DAT_14ca2c6f0) {
                *(longlong *)((longlong)&local_248 + lVar29) = local_368;
                *(ulonglong *)((longlong)&local_240 + lVar29) = local_370;
                *(longlong *)((longlong)&local_238 + lVar29) = local_378;
                *(undefined1 *)((longlong)&local_128 + lVar22) = 1;
                uStack_70 = 0;
                iStack_6c = (int)lVar22 + 0xe;
              }
              else {
                local_3a8 = plVar21;
                local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,local_388);
                local_3b0 = puVar13;
                FUN_143005156(local_348,&local_268,local_398,local_380);
                *(undefined8 *)((longlong)&local_248 + lVar29) = local_268;
                *(undefined4 *)((longlong)&local_240 + lVar29) = local_260;
                *(undefined4 *)((longlong)&local_240 + lVar29 + 4) = uStack_25c;
                *(undefined4 *)((longlong)&local_238 + lVar29) = uStack_258;
                *(undefined4 *)((longlong)&local_238 + lVar29 + 4) = uStack_254;
                *(undefined1 *)((longlong)&local_128 + lVar22) = 1;
              }
              uVar20 = CONCAT71((int7)(local_300 >> 8),(byte)local_300 | (bVar3 && bVar4));
              iVar32 = iVar32 + 1;
              lVar25 = local_308;
              iVar18 = local_384;
            }
            lVar22 = lVar22 + 1;
            lVar29 = lVar29 + 0x18;
          } while (iVar32 < iVar18);
        }
        plVar21 = local_360;
        uVar26 = (**(code **)(*local_360 + 0x2f0))(local_360);
        FUN_1417e131a(uVar26,&local_290,local_318);
        puVar13 = (undefined1 *)CONCAT44(iStack_28c,local_290);
        if (puVar13 == DAT_14ca2c6f0) {
          uVar20 = (ulonglong)local_38c;
          param_3 = local_380;
          param_1 = local_358;
          goto LAB_142ef7e3a;
        }
        uVar27 = *(uint *)(*(longlong *)(lVar25 + 0x28) + 0x268);
        uVar30 = *(uint *)(*(longlong *)(lVar25 + 0x28) + 0x26c);
        if ((uVar20 & 1) == 0) {
          if ((int)uVar27 < 2) {
            uVar27 = 1;
          }
          if ((int)uVar30 < 2) {
            uVar30 = 1;
          }
          uVar20 = (ulonglong)uVar27;
          uVar35 = (ulonglong)uVar30;
        }
        else {
          FUN_1472e165e(local_348,&local_290,puVar34);
          if ((int)uVar27 < 0) {
            uVar20 = (longlong)local_290 / (longlong)(int)-uVar27 & 0xffffffff;
            if ((int)((longlong)local_290 / (longlong)(int)-uVar27) < 2) {
              uVar20 = 1;
            }
          }
          else {
            uVar20 = (ulonglong)(local_290 * (uVar27 + (uVar27 == 0)));
          }
          if ((int)uVar30 < 0) {
            uVar35 = (longlong)iStack_28c / (longlong)(int)-uVar30 & 0xffffffff;
            if ((int)((longlong)iStack_28c / (longlong)(int)-uVar30) < 2) {
              uVar35 = 1;
            }
          }
          else {
            uVar35 = (ulonglong)(iStack_28c * (uVar30 + (uVar30 == 0)));
          }
        }
        param_3 = local_380;
        bStack_6f = bStack_6f & (byte)local_38c;
        plVar21 = local_360;
        param_1 = local_358;
        if (puVar13 == (undefined1 *)0x0) goto LAB_142ef7e42;
        iVar32 = (int)uVar20;
        FUN_140c83590(local_380,&local_290);
        plVar21 = local_360;
        uVar31 = *(ulonglong *)(param_3 + 0x4e8);
        uVar1 = *(ulonglong *)(param_3 + 0x4f0);
        uVar2 = (longlong)((ulonglong)(uint)((int)uVar31 >> 0x1f) << 0x20 | uVar31 & 0xffffffff) /
                (longlong)iVar32;
        iVar33 = (int)uVar35;
        lVar22 = (longlong)((ulonglong)(uint)((longlong)uVar31 >> 0x3f) << 0x20 | uVar31 >> 0x20) /
                 (longlong)iVar33;
        iVar18 = iVar32 + -1 + (int)local_288;
        if ((int)uVar1 != (int)local_288) {
          iVar18 = (int)uVar1;
        }
        iVar19 = iVar33 + -1 + (int)(local_288 >> 0x20);
        if (uVar1 >> 0x20 != local_288 >> 0x20) {
          iVar19 = (int)(uVar1 >> 0x20);
        }
        local_278 = (lVar22 << 0x20) + (uVar2 & 0xffffffff);
        uVar30 = (int)lVar22 + 1;
        uVar27 = (int)uVar2 + 1;
        uVar31 = (ulonglong)uVar30;
        if ((int)uVar30 <= (int)((longlong)iVar19 / (longlong)iVar33)) {
          uVar31 = (longlong)iVar19 / (longlong)iVar33 & 0xffffffff;
        }
        uStack_270 = (ulonglong)uVar27;
        if ((int)uVar27 <= (int)((longlong)iVar18 / (longlong)iVar32)) {
          uStack_270 = (longlong)iVar18 / (longlong)iVar32 & 0xffffffff;
        }
        uStack_270 = uStack_270 | uVar31 << 0x20;
        local_3a0 = &local_278;
        local_3a8 = local_360;
        local_3b0 = &uStack_6d;
        local_3b8 = (longlong *)(uVar20 | uVar35 << 0x20);
        local_238 = (undefined1 *)
                    FUN_143004d52(*(undefined8 *)(*(longlong *)(param_3 + 8) + 0x348),local_398,
                                  local_388,puVar13);
        param_1 = local_358;
        uStack_230 = (undefined4)local_278;
        uStack_22c = local_278._4_4_;
        uStack_228 = (undefined4)uStack_270;
        uStack_224 = uStack_270._4_4_;
        uStack_220 = 1;
        uStack_6e = 1;
        lVar22 = 0x110;
        plVar24 = local_1a0;
        do {
          if (((*(char *)((longlong)&local_238 + lVar22) == '\x01') && (*plVar24 != 0)) &&
             (*(undefined1 **)(*plVar24 + 0x38) == local_238)) {
            *plVar24 = 0;
            plVar24[1] = 0;
            plVar24[2] = 0;
          }
          lVar22 = lVar22 + 1;
          plVar24 = plVar24 + 3;
        } while (lVar22 != 0x115);
        local_3b8 = plVar21;
        FUN_142ef5063(&local_290,local_398,param_3,&local_238);
      }
      puVar28 = local_310 + 1;
      uVar20 = 0;
    } while (puVar28 != local_328);
  }
  if ((*param_1 == 0) ||
     (((int)param_1[2] == (int)param_1[1] &&
      (*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_1 + 0xc))))) {
    if ((*param_5 == 0) ||
       (((int)param_5[2] == (int)param_5[1] &&
        (*(int *)((longlong)param_5 + 0x14) == *(int *)((longlong)param_5 + 0xc))))) {
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      FUN_143017a3c(&local_238,local_398,&local_250);
      *param_1 = (longlong)local_238;
      param_1[1] = CONCAT44(uStack_22c,uStack_230);
      lVar22 = CONCAT44(uStack_224,uStack_228);
    }
    else {
      local_2a8 = param_5[1];
      local_2a0 = param_5[2];
      local_298 = (undefined1)param_5[3];
      local_2c8 = local_368;
      local_2c0 = local_370;
      local_2b8 = local_378;
      local_2d8 = *(undefined4 *)(param_3 + 0x3090);
      local_2d4 = *(undefined4 *)(param_3 + 0x1dd4);
      local_2d0 = *(undefined4 *)(param_3 + 0x3094);
      local_2cc = (&DAT_00001de6)[param_3];
      local_2b0 = *param_5;
      FUN_143018feb(local_398);
      *param_1 = *param_5;
      param_1[1] = param_5[1];
      lVar22 = param_5[2];
    }
    param_1[2] = lVar22;
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142ef8334 FUN_142ef8334 body=103 status=ok
// SIG undefined FUN_142ef8334(void)

undefined8 FUN_142ef8334(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((((param_2 != (longlong *)0x0) &&
       (plVar3 = (longlong *)(**(code **)(*param_2 + 0x2f0))(param_2), plVar3 != (longlong *)0x0))
      && (plVar3 = (longlong *)
                   (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(*param_1 + 0x3090)),
         plVar3 != (longlong *)0x0)) &&
     (((iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3), iVar2 == 4 && (lVar1 = plVar3[3], lVar1 != 0)
       ) && ((*(byte *)(*(longlong *)(lVar1 + 0x28) + 0x240) & 0x10) != 0)))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 142ef839b FUN_142ef839b body=711 status=ok
// SIG undefined FUN_142ef839b(void)

undefined8 *
FUN_142ef839b(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 auStack_268 [28];
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined8 uStack_10e;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  char local_a0 [2];
  bool local_9e;
  undefined8 local_98;
  int aiStack_90 [6];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_c0 = *param_4;
  piVar6 = aiStack_90;
  local_b8 = param_4[1];
  local_b0 = param_4[2];
  uVar1 = *(undefined1 *)(param_4 + 3);
  local_98 = 0;
  aiStack_90[0] = 0;
  aiStack_90[1] = 0;
  aiStack_90[2] = 0;
  aiStack_90[3] = 0;
  aiStack_90[4] = 0;
  aiStack_90[5] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x300000003;
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  lVar9 = param_4[0xe];
  local_9e = lVar9 != 0;
  uVar11 = 3;
  uVar8 = 0;
  do {
    uVar7 = (undefined4)uVar8;
    if (local_a0[uVar8] == '\x01') {
      local_68 = CONCAT44(uVar7,uVar7);
      uVar11 = uVar8 & 0xffffffff;
    }
    if (0 < *piVar6) {
      local_68 = CONCAT44(uVar7,(undefined4)local_68);
      uVar11 = uVar8 & 0xffffffff;
    }
    uVar8 = uVar8 + 1;
    piVar6 = piVar6 + 4;
  } while (uVar8 != 3);
  uVar2 = param_4[4];
  *param_1 = uVar2;
  uVar3 = param_4[5];
  param_1[1] = uVar3;
  uVar4 = param_4[6];
  param_1[2] = uVar4;
  local_a8 = uVar1;
  if (lVar9 != 0) {
    uStack_288 = 0;
    uStack_287 = 0;
    uStack_280 = 0;
    local_298 = 0;
    local_290 = 0;
    uStack_28f = 0;
    local_2f0 = local_b0;
    local_2e8 = local_b8;
    local_2e0 = local_c0;
    local_2d8 = param_2;
    local_2d0 = param_3;
    memset(auStack_268,0,0xe0);
    uVar5 = local_2d8;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    uStack_116 = 0;
    uStack_110 = 0;
    uStack_10e = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = CONCAT31(local_f0._1_3_,1);
    local_d8 = 0;
    local_d0 = 0xffffffff00000001;
    local_188 = 0;
    local_184 = 0;
    if ((int)uVar11 == 2) {
      local_298 = local_2e0;
      local_290 = (undefined1)local_2e8;
      uStack_28f = (undefined7)((ulonglong)local_2e8 >> 8);
      uStack_288 = (undefined1)local_2f0;
      uStack_287 = (undefined7)((ulonglong)local_2f0 >> 8);
      uStack_280 = uVar1;
    }
    local_2c8 = uVar2;
    local_2c0 = uVar3;
    local_2b8 = uVar4;
    FUN_1448a0832(&local_2b0,local_2d8);
    local_278 = local_2b0;
    local_270 = local_2a8;
    auStack_268[0] = uStack_2a0;
    uStack_f8 = param_4[8];
    local_f0 = *(undefined4 *)(param_4 + 9);
    uStack_ec = *(undefined4 *)((longlong)param_4 + 0x4c);
    local_e8 = *(undefined4 *)(param_4 + 10);
    uStack_e4 = *(undefined4 *)((longlong)param_4 + 0x54);
    uStack_e0 = *(undefined4 *)(param_4 + 0xb);
    uStack_dc = *(undefined4 *)((longlong)param_4 + 0x5c);
    local_2f8 = param_4[0xe];
    FUN_142ef5063(&local_2b0,uVar5,local_2d0);
    *param_1 = local_2b0;
    param_1[1] = local_2a8;
    param_1[2] = uStack_2a0;
  }
  lVar9 = -0x30;
  puVar10 = &local_78;
  do {
    FUN_144ab4a84(*puVar10,*(undefined4 *)(puVar10 + 1));
    FUN_142eee752(puVar10);
    puVar10 = puVar10 + -2;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0);
  if ((local_60 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef8699 FUN_142ef8699 body=1768 status=ok
// SIG undefined FUN_142ef8699(void)

ulonglong FUN_142ef8699(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined8 **local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_85;
  undefined1 local_83;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a0 = DAT_14ca83a40;
  uStack_b0 = DAT_14ca83a30;
  uStack_ac = DAT_14ca83a34;
  uStack_a8 = DAT_14ca83a38;
  uStack_a4 = DAT_14ca83a3c;
  local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_86 = 0;
  local_b8 = (undefined8 *)&DAT_00020008;
  local_85 = 10;
  local_8c = 0x10001;
  local_88 = 0x101;
  local_98 = 0;
  local_83 = 0xff;
  iVar4 = (int)*param_4;
  local_94 = DAT_14ca84e40;
  if (iVar4 < DAT_14ca84e40) {
    local_94 = iVar4;
  }
  if (local_94 < 2) {
    local_94 = 1;
  }
  iVar4 = (int)((ulonglong)*param_4 >> 0x20);
  local_90 = DAT_14ca84e40;
  if (iVar4 < DAT_14ca84e40) {
    local_90 = iVar4;
  }
  if (local_90 < 2) {
    local_90 = 1;
  }
  plVar12 = (longlong *)(param_1 + 0x70);
  uVar14 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar5 = uVar14 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar5) {
    FUN_140023dd8(plVar12,0x128);
    uVar14 = *plVar12 + 7U & 0xfffffffffffffff8;
    uVar5 = uVar14 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar5;
  FUN_1456bbb8c(uVar14,L"MitchelNetravaliDownsampleOutput",&local_b8,0);
  iVar4 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8) = uVar14;
  *(int *)(uVar14 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar13 + 0x18;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar12,0xd0);
    puVar13 = (undefined8 *)(*plVar12 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar13 + 0x18;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar13 = &PTR_FUN_14a2c44c8;
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 1;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x14] = 0;
  puVar13[0x15] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar13;
  lVar6 = FUN_1447e4f80();
  cVar8 = '\x02';
  if (*(char *)(lVar6 + 0x41) != '\x03') {
    cVar8 = *(char *)(lVar6 + 0x41);
  }
  puVar13[2] = *(undefined8 *)(param_2 + 0x18);
  *(char *)(puVar13 + 3) = cVar8;
  local_c8 = (undefined4)param_3[1];
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_c0 = (undefined4)param_3[2];
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0x14);
  local_d0 = *(undefined8 *)(*param_3 + 0x84);
  local_f0 = param_2;
  FUN_144a2c7c2(&local_b8);
  ppuVar10 = &local_b8;
  puVar7 = puVar13 + 4;
  for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *ppuVar10;
    ppuVar10 = ppuVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar13[0x13] = *param_3;
  puVar13[0x15] = DAT_14c9c0de0;
  uVar3 = *(undefined1 *)(uVar14 + 0x94);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(plVar12,0x50);
    puVar11 = (undefined8 *)(*plVar12 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
  }
  local_f8 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar11[1] = *(undefined8 *)(uVar14 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar11 + 5) = 0;
  *puVar11 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar11 + 6) = uVar3;
  *(undefined1 *)(puVar11 + 7) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
  puVar11[8] = uVar14;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  local_e8 = plVar12;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_f8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar13[0x12] = puVar11;
  plVar12 = *(longlong **)(local_f0 + 0x30d8);
  if ((plVar12 == (longlong *)0x0) || ((*(byte *)(plVar12 + 1) & 2) == 0)) {
    local_b8 = (undefined8 *)&DAT_3f8000003f800000;
    uStack_b0 = 0x3f800000;
    uStack_ac = 0x3f800000;
    local_100 = &local_b8;
    local_108 = (int *)CONCAT44(local_108._4_4_,1);
    lVar6 = FUN_1449cc94d(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar12 + 0x80) == (code *)&LAB_144b15db6) {
      local_b8 = (undefined8 *)plVar12[(ulonglong)*(uint *)(plVar12 + 0xcd) + 0xd1];
    }
    else {
      local_b8 = (undefined8 *)(**(code **)(*plVar12 + 0x80))();
    }
    if (local_b8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = *(int *)(local_b8 + 1) + 1;
      UNLOCK();
    }
    lVar6 = FUN_144735dd8(param_1,&local_b8,1);
    if (local_b8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_b8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_b8)(local_b8,1);
      }
    }
  }
  plVar12 = local_e8;
  cVar8 = *(char *)(lVar6 + 0x68);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_e8,0x50);
    puVar11 = (undefined8 *)(*plVar12 + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar11[1] = *(undefined8 *)(lVar6 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 3;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar11 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
  puVar11[7] = 0;
  puVar11[8] = lVar6;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_f8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar13[0x14] = puVar11;
  fVar15 = (float)((int)param_3[2] - (int)param_3[1]) /
           (float)((*(int *)(param_4 + 2) - *(int *)(param_4 + 1)) * *(int *)(*param_3 + 0x84));
  *(float *)(puVar13 + 0x16) = fVar15;
  fVar16 = (float)(*(int *)((longlong)param_3 + 0x14) - *(int *)((longlong)param_3 + 0xc)) /
           (float)((*(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc)) *
                  *(int *)(*param_3 + 0x88));
  *(float *)((longlong)puVar13 + 0xb4) = fVar16;
  *(float *)(puVar13 + 0x17) = ((float)(int)param_3[1] + 0.5) * fVar15;
  *(float *)((longlong)puVar13 + 0xbc) = ((float)*(int *)((longlong)param_3 + 0xc) + 0.5) * fVar16;
  plVar12 = DAT_14ca27dc8;
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar4 = FUN_140052f36(DAT_14ca27dc8);
    if (iVar4 == 0) {
      plVar12 = plVar12 + 0xb;
    }
    else {
      plVar12 = (longlong *)plVar12[10];
    }
    uVar3 = (undefined1)*plVar12;
  }
  else {
    uVar3 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  uVar2 = *(undefined8 *)(local_f0 + 0x13818);
  FUN_145f55984();
  FUN_1448e935e(uVar2,&local_b8,&DAT_14ca2c7a0,uVar3);
  FUN_145f55984();
  iVar9 = *(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc);
  iVar4 = iVar9 + 7;
  local_d8 = iVar9 + 0xe;
  if (-1 < iVar4) {
    local_d8 = iVar4;
  }
  local_d8 = local_d8 >> 3;
  iVar4 = (*(int *)(param_4 + 2) - *(int *)(param_4 + 1)) + 7;
  local_dc = (*(int *)(param_4 + 2) - *(int *)(param_4 + 1)) + 0xe;
  if (-1 < iVar4) {
    local_dc = iVar4;
  }
  local_dc = local_dc >> 3;
  local_108 = &local_dc;
  local_d4 = 1;
  FUN_1472951b0(param_1,&local_d0,&local_b8,puVar13 + 2);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef8d82 FUN_142ef8d82 body=69 status=ok
// SIG undefined FUN_142ef8d82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef8d82(void)

{
  _DAT_14ca2c860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ef8dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c868,1);
  return;
}



// FUNCTION 142ef8dc7 FUN_142ef8dc7 body=69 status=ok
// SIG undefined FUN_142ef8dc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef8dc7(void)

{
  _DAT_14ca2c878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ef8e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2c880,1);
  return;
}



// FUNCTION 142ef8e30 FUN_142ef8e30 body=2584 status=ok
// SIG undefined FUN_142ef8e30(void)

longlong *
FUN_142ef8e30(longlong *param_1,longlong param_2,longlong param_3,void *param_4,longlong *param_5)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  void *_Src;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong *puVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  wchar_t *pwVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  ulonglong local_1e0;
  void *local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  void *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a1;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  byte local_18e;
  byte local_18d;
  byte local_18c;
  byte local_18b;
  undefined1 local_18a;
  longlong *local_188;
  undefined8 uStack_180;
  void *local_170;
  int local_168;
  undefined8 *local_160;
  longlong local_158;
  undefined *local_150;
  undefined3 local_148;
  undefined1 uStack_145;
  undefined3 uStack_144;
  undefined4 local_140;
  undefined3 uStack_13c;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  uint uStack_11c;
  longlong local_118;
  uint local_110;
  undefined1 local_10c;
  undefined1 uStack_10b;
  undefined2 uStack_10a;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  iVar29 = *(int *)((longlong)param_5 + 0x14);
  iVar6 = *(int *)((longlong)param_5 + 0xc);
  lVar17 = param_5[2];
  lVar32 = param_5[1];
  local_1c0 = *param_5;
  local_1b8 = param_4;
  local_1b0 = param_1;
  bVar10 = FUN_1411bbcc6(((uint)*(byte *)((longlong)param_5 + 0x33) * 8 +
                          (uint)*(byte *)((longlong)param_5 + 0x32) * 4 |
                         (uint)*(byte *)(param_5 + 6)) +
                         (uint)*(byte *)((longlong)param_5 + 0x31) * 2);
  local_208 = *(undefined1 *)((longlong)param_5 + 0x33);
  FUN_1472953a6(&local_170,(char)param_5[6],*(undefined1 *)((longlong)param_5 + 0x31),
                *(undefined1 *)((longlong)param_5 + 0x32));
  local_200 = CONCAT71(local_200._1_7_,*(byte *)(param_3 + 0x23f5));
  local_188 = (longlong *)0x0;
  uStack_180 = 0;
  local_1d0 = (ulonglong)local_168;
  local_1f8 = param_3;
  if (0 < (longlong)local_1d0) {
    iVar20 = (int)lVar17 - (int)lVar32;
    iVar1 = iVar20 + 3;
    iVar20 = iVar20 + 6;
    if (-1 < iVar1) {
      iVar20 = iVar1;
    }
    iVar29 = iVar29 - iVar6;
    iVar6 = iVar29 + 3;
    iVar29 = iVar29 + 6;
    if (-1 < iVar6) {
      iVar29 = iVar6;
    }
    local_1d8 = local_170;
    local_1e0 = (ulonglong)(bVar10 ^ 1) << 0xc | 9;
    local_1f0 = param_2 + 0x178;
    local_1c8 = (longlong *)(param_2 + 0x70);
    local_1e8 = CONCAT44(local_1e8._4_4_,*(byte *)(param_3 + 0x23f5) + 1);
    uVar33 = 0;
    do {
      plVar8 = local_1c8;
      iVar6 = *(int *)((longlong)local_1d8 + uVar33 * 4);
      local_138 = 9;
      if (iVar6 == 1) {
        local_138 = local_1e0;
      }
      pwVar31 = L"Unknown";
      if (iVar6 - 1U < 4) {
        pwVar31 = (wchar_t *)(&PTR_u_BloomSetup_Bloom_14a2c5680)[iVar6 - 1U];
      }
      uStack_11c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_10c = 1;
      uStack_10b = 0;
      uStack_10a = (undefined2)local_1e8;
      local_108 = (float)CONCAT22(CONCAT11((iVar6 == 1) * '\x05' + '\x15',(undefined1)local_200),
                                  0x101);
      uStack_120 = DAT_14ca83a40;
      uStack_130 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
      uStack_128 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
      uVar12 = DAT_14ca84e40;
      if (iVar20 >> 2 < (int)DAT_14ca84e40) {
        uVar12 = iVar20 >> 2;
      }
      if ((int)uVar12 < 2) {
        uVar12 = 1;
      }
      local_104 = (float)CONCAT22((short)((uint)local_104 >> 0x10),0xff00);
      local_110 = DAT_14ca84e40;
      if (iVar29 >> 2 < (int)DAT_14ca84e40) {
        local_110 = iVar29 >> 2;
      }
      if ((int)local_110 < 2) {
        local_110 = 1;
      }
      local_118 = (ulonglong)uVar12 << 0x20;
      uVar19 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar13 = uVar19 + 0x120;
      if (*(ulonglong *)(param_2 + 0x78) < uVar13) {
        FUN_140023dd8(local_1c8,0x128);
        uVar19 = *plVar8 + 7U & 0xfffffffffffffff8;
        uVar13 = uVar19 + 0x120;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar13;
      FUN_1456bbb8c(uVar19,pwVar31,&local_138,0);
      iVar6 = *(int *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x180) = iVar6 + 1U;
      if (*(uint *)(param_2 + 0x184) < iVar6 + 1U) {
        FUN_14472c0f6(local_1f0,iVar6);
      }
      uVar13 = uStack_180;
      *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar6 * 8) = uVar19;
      *(int *)(uVar19 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      if (uVar19 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(longlong *)(uVar19 + 0x84);
      }
      lVar32 = (longlong)(int)uStack_180;
      uVar12 = (int)uStack_180 + 1;
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar12);
      if (uStack_180._4_4_ < uVar12) {
        FUN_1472a394c(&local_188,uVar13 & 0xffffffff);
      }
      local_188[lVar32 * 4] = uVar19;
      local_188[lVar32 * 4 + 1] = 0;
      local_188[lVar32 * 4 + 2] = lVar17;
      *(undefined1 *)(local_188 + lVar32 * 4 + 3) = 0;
      uVar33 = uVar33 + 1;
    } while (local_1d0 != uVar33);
  }
  lVar17 = local_1f8;
  uVar7 = *(undefined8 *)(local_1f8 + 0x13818);
  FUN_14607f960();
  FUN_1448e935e(uVar7,&local_138,&DAT_14ca2ca20,0);
  FUN_14607f960();
  local_1d8 = (void *)local_138;
  local_200 = uStack_130;
  FUN_1448c58dc(lVar17,&local_138);
  local_1e0 = local_138;
  uStack_13c = (undefined3)((ulonglong)uStack_130 >> 0x28);
  local_148 = (undefined3)((uint)uStack_120 >> 8);
  uStack_145 = (undefined1)uStack_11c;
  uStack_144 = (undefined3)(uStack_11c >> 8);
  fVar35 = (float)*(int *)(local_1c0 + 0x88);
  uVar9 = (undefined1)uStack_130;
  fVar36 = (float)*(int *)(local_1c0 + 0x84);
  local_1e8 = uStack_128;
  local_1f0 = CONCAT71(local_1f0._1_7_,(undefined1)uStack_120);
  uVar2 = *(undefined1 *)((longlong)param_5 + 0x34);
  bVar10 = *(byte *)((longlong)param_5 + 0x33);
  bVar3 = *(byte *)((longlong)param_5 + 0x32);
  bVar4 = *(byte *)((longlong)param_5 + 0x31);
  bVar5 = *(byte *)(param_5 + 6);
  local_140 = uStack_130._1_4_;
  bVar11 = FUN_1411bbcc6(((uint)bVar10 * 8 + (uint)bVar3 * 4 | (uint)bVar5) + (uint)bVar4 * 2);
  local_18e = bVar11 ^ 1 | bVar5;
  local_18d = bVar4;
  local_18c = bVar3;
  local_18b = bVar10;
  local_18a = uVar2;
  FUN_147295742(&local_1a0);
  puVar21 = (ulonglong *)(param_2 + 0x70);
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar22 + 0x3e;
  if (*(undefined8 **)(param_2 + 0x78) < puVar14) {
    FUN_140023dd8(puVar21);
    puVar22 = (undefined8 *)(*puVar21 + 0xf & 0xfffffffffffffff0);
    puVar14 = puVar22 + 0x3e;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar14;
  *puVar22 = &PTR_FUN_14a2c44e8;
  puVar14 = puVar22 + 2;
  FUN_1472a39d2(puVar14);
  uVar33 = local_1d0;
  iVar29 = *(int *)(param_2 + 0xa0);
  uVar12 = iVar29 + 1;
  *(uint *)(param_2 + 0xa0) = uVar12;
  if (*(uint *)(param_2 + 0xa4) < uVar12) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98));
  }
  lVar17 = local_1f8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar29 * 8) = puVar22;
  iVar29 = (int)uVar33;
  if (0 < iVar29) {
    puVar16 = (undefined2 *)((longlong)puVar22 + 0x102);
    lVar32 = 0;
    do {
      uVar2 = *(undefined1 *)((longlong)local_188 + lVar32 + 0x18);
      *(undefined8 *)(puVar16 + -9) = *(undefined8 *)((longlong)local_188 + lVar32);
      *(undefined8 *)(puVar16 + -5) = 0;
      *(undefined1 *)(puVar16 + -1) = uVar2;
      *(undefined1 *)((longlong)puVar16 + -1) = 0;
      *puVar16 = 0xffff;
      lVar32 = lVar32 + 0x20;
      puVar16 = puVar16 + 0xc;
    } while (uVar33 << 5 != lVar32);
  }
  bVar10 = 2;
  if (*(char *)(local_1f8 + 0x23f5) == '\0') {
    FUN_1448944a0(&local_138,
                  *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(local_1f8 + 0x3090) * 2));
    bVar10 = (byte)local_138 >> 1 & 1;
  }
  *(byte *)((longlong)puVar22 + 0x1dd) = bVar10;
  memcpy(puVar22 + 8,local_1b8,0x88);
  *(undefined4 *)(puVar22 + 2) = *(undefined4 *)(lVar17 + 0x2818);
  FUN_1448c58dc(lVar17,&local_138);
  _Src = local_170;
  puVar22[6] = uStack_128;
  puVar22[7] = CONCAT44(uStack_11c,uStack_120);
  puVar22[4] = local_138;
  puVar22[5] = uStack_130;
  puVar22[0x1a] = *param_5;
  uVar7 = DAT_14c9c0de0;
  puVar22[0x1b] = DAT_14c9c0de0;
  puVar22[0x1c] = param_5[3];
  puVar22[0x1d] = uVar7;
  local_d8 = (undefined4)param_5[1];
  uStack_d4 = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_d0 = (undefined4)param_5[2];
  uStack_cc = *(undefined4 *)((longlong)param_5 + 0x14);
  local_e0 = *(undefined8 *)(*param_5 + 0x84);
  local_c0 = (undefined4)local_188[1];
  uStack_bc = *(undefined4 *)((longlong)local_188 + 0xc);
  uStack_b8 = (undefined4)local_188[2];
  uStack_b4 = *(undefined4 *)((longlong)local_188 + 0x14);
  local_c8 = *(undefined8 *)(*local_188 + 0x84);
  local_138 = (ulonglong)local_1d8;
  uStack_130 = local_200;
  uStack_128 = local_1e0;
  uStack_11c = CONCAT31(uStack_13c,local_140._3_1_);
  uStack_120 = CONCAT31((int3)local_140,uVar9);
  local_118 = local_1e8;
  local_110 = CONCAT31((int3)_local_148,(undefined1)local_1f0);
  local_10c = uStack_145;
  uStack_10b = (undefined1)uStack_144;
  uStack_10a = (undefined2)((uint3)uStack_144 >> 8);
  local_f8 = local_1a0;
  uStack_f4 = uStack_19c;
  uStack_f0 = uStack_198;
  uStack_ec = uStack_194;
  local_b0 = (void *)0x0;
  local_a8 = CONCAT44(local_a8._4_4_,iVar29);
  local_108 = fVar36;
  local_104 = fVar35;
  local_100 = 1.0 / fVar36;
  local_fc = 1.0 / fVar35;
  local_e8 = puVar14;
  if (iVar29 == 0) {
    local_a8 = uVar33 & 0xffffffff;
  }
  else {
    FUN_1472a3a80(&local_b0,uVar33 & 0xffffffff);
    memcpy(local_b0,_Src,uVar33 << 2);
  }
  local_a0 = local_1f8;
  FUN_145eaf3e6();
  FUN_140069376(param_2);
  puVar34 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar22 = puVar34 + 0x4c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar22) {
    FUN_140023dd8(puVar21,0x270);
    puVar34 = (undefined8 *)(*puVar21 + 0xf & 0xfffffffffffffff0);
    puVar22 = puVar34 + 0x4c;
  }
  *puVar21 = (ulonglong)puVar22;
  local_158 = DAT_14ca32528;
  if (DAT_14ca32528 != 0) {
    LOCK();
    *(int *)(DAT_14ca32528 + 8) = *(int *)(DAT_14ca32528 + 8) + 1;
    UNLOCK();
  }
  local_150 = &DAT_14ca324e0;
  local_208 = 1;
  local_160 = puVar14;
  FUN_140068f1a(puVar34,&local_1a1);
  *puVar34 = &PTR_FUN_14a2c44f0;
  puVar21 = &local_138;
  puVar23 = puVar34 + 0x38;
  for (lVar17 = 0xb; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar23 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar23 = puVar23 + 1;
  }
  puVar34[0x43] = local_e0;
  puVar34[0x44] = CONCAT44(uStack_d4,local_d8);
  puVar34[0x45] = CONCAT44(uStack_cc,uStack_d0);
  puVar34[0x46] = local_c8;
  puVar34[0x47] = CONCAT44(uStack_bc,local_c0);
  puVar34[0x48] = CONCAT44(uStack_b4,uStack_b8);
  puVar34[0x49] = local_b0;
  local_b0 = (void *)0x0;
  *(undefined4 *)(puVar34 + 0x4a) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar34 + 0x254) = local_a8._4_4_;
  local_a8 = 0;
  puVar34[0x4b] = local_a0;
  iVar29 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar29 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar29);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2);
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar8 = local_1b0;
  if ((longlong)local_168 < 1) {
    lVar15 = 0;
    lVar18 = 0;
    lVar25 = 0;
    lVar26 = 0;
    lVar27 = 0;
    lVar28 = 0;
    lVar24 = 0;
    lVar32 = 0;
    lVar17 = 0;
  }
  else {
    lVar30 = 0;
    lVar17 = 0;
    lVar32 = 0;
    lVar24 = 0;
    lVar28 = 0;
    lVar27 = 0;
    lVar26 = 0;
    lVar25 = 0;
    lVar18 = 0;
    lVar15 = 0;
    do {
      iVar29 = *(int *)((longlong)local_170 + lVar30);
      if (iVar29 == 4) {
        lVar25 = local_188[lVar30];
        lVar18 = local_188[lVar30 + 1];
        lVar15 = local_188[lVar30 + 2];
      }
      else if (iVar29 == 2) {
        lVar28 = local_188[lVar30];
        lVar27 = local_188[lVar30 + 1];
        lVar26 = local_188[lVar30 + 2];
      }
      else if (iVar29 == 1) {
        lVar17 = local_188[lVar30];
        lVar32 = local_188[lVar30 + 1];
        lVar24 = local_188[lVar30 + 2];
      }
      lVar30 = lVar30 + 4;
    } while ((longlong)local_168 * 4 != lVar30);
  }
  *local_1b0 = lVar17;
  local_1b0[1] = lVar32;
  local_1b0[2] = lVar24;
  local_1b0[3] = lVar28;
  local_1b0[4] = lVar27;
  local_1b0[5] = lVar26;
  local_1b0[6] = lVar25;
  local_1b0[7] = lVar18;
  local_1b0[8] = lVar15;
  if (local_188 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_170 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 142ef9861 FUN_142ef9861 body=1758 status=ok
// SIG undefined FUN_142ef9861(void)

void FUN_142ef9861(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_162;
  undefined1 local_161;
  ulonglong *local_160;
  ulonglong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  ulonglong *local_118;
  undefined1 local_109;
  undefined4 local_108;
  undefined3 uStack_104;
  undefined4 local_100;
  undefined3 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined2 local_ac;
  short local_aa;
  undefined2 local_a8;
  byte local_a6;
  undefined2 local_a5;
  undefined1 local_a3;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar7 = *(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc);
  local_b0 = (iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1;
  iVar7 = (int)param_4[2] - (int)param_4[1];
  local_b4 = (iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1;
  lVar2 = *param_4;
  local_a6 = *(byte *)(param_3 + 0x23f5);
  local_e8 = DAT_14ca83a40;
  local_f8 = DAT_14ca83a30;
  uStack_f4 = DAT_14ca83a34;
  uStack_f0 = DAT_14ca83a38;
  uStack_ec = DAT_14ca83a3c;
  local_aa = local_a6 + 1;
  uStack_bc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_d8 = (undefined8 *)0x9;
  local_a5 = 0x1a;
  local_ac = 1;
  local_a8 = 0x101;
  uStack_d0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_c8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_c0 = DAT_14ca83a40;
  local_b8 = 0;
  local_a3 = 0xff;
  if (DAT_14ca84e40 <= local_b4) {
    local_b4 = DAT_14ca84e40;
  }
  if (local_b4 < 2) {
    local_b4 = 1;
  }
  if (DAT_14ca84e40 <= local_b0) {
    local_b0 = DAT_14ca84e40;
  }
  if (local_b0 < 2) {
    local_b0 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar11 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar11 + 0x120;
  local_160 = puVar1;
  local_118 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar8) {
    FUN_140023dd8(puVar1,0x128);
    uVar11 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar8 = uVar11 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar8;
  FUN_1456bbb8c(uVar11,L"BloomDown",&local_d8,0);
  iVar7 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar7);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar11;
  *(int *)(uVar11 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar11 == 0) {
    local_158 = 0;
  }
  else {
    local_158 = *(ulonglong *)(uVar11 + 0x84);
  }
  uVar3 = *(undefined8 *)(param_3 + 0x13818);
  FUN_14607fbc6();
  FUN_1448e935e(uVar3,&local_d8,&DAT_14ca2cd98,0);
  FUN_14607fbc6();
  local_128 = local_d8;
  local_120 = uStack_d0;
  FUN_1448c58dc(param_3,&local_d8);
  local_130 = local_d8;
  uStack_fc = (undefined3)((ulonglong)uStack_d0 >> 0x28);
  local_108._0_3_ = (undefined3)((uint)uStack_c0 >> 8);
  local_108._3_1_ = (undefined1)uStack_bc;
  uStack_104 = (undefined3)(uStack_bc >> 8);
  fVar13 = (float)*(int *)(lVar2 + 0x88);
  local_162 = (undefined1)uStack_d0;
  fVar14 = (float)*(int *)(lVar2 + 0x84);
  local_138 = uStack_c8;
  local_161 = (undefined1)uStack_c0;
  lVar2 = param_4[3];
  uVar3 = *(undefined8 *)(param_3 + 0x13818);
  local_100 = uStack_d0._1_4_;
  FUN_145e900b6();
  FUN_1448e935e(uVar3,&local_d8,&DAT_14ca2cc70,0);
  FUN_145e900b6();
  puVar1 = local_160;
  local_148 = local_d8;
  local_140 = uStack_d0;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x28;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8(local_160,0x150);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x28;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar9;
  *puVar10 = &PTR_FUN_14a2c4508;
  puVar9 = puVar10 + 2;
  FUN_1472a3ada(puVar9);
  iVar7 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar7 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar7 * 8) = puVar10;
  puVar10[8] = uVar11;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 10) = 0xffff0002;
  bVar6 = 2;
  if (*(char *)(param_3 + 0x23f5) == '\0') {
    FUN_1448944a0(&local_d8,
                  *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    bVar6 = (byte)local_d8 >> 1 & 1;
  }
  *(byte *)((longlong)puVar10 + 0x12d) = bVar6;
  FUN_1448c58dc(param_3,&local_d8);
  *(undefined4 *)(puVar10 + 4) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_c8._4_4_;
  *(undefined4 *)(puVar10 + 5) = uStack_c0;
  *(uint *)((longlong)puVar10 + 0x2c) = uStack_bc;
  *(undefined4 *)puVar9 = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_d8._4_4_;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_d0._4_4_;
  puVar10[6] = *param_4;
  puVar10[7] = DAT_14c9c0de0;
  local_150 = param_4[1];
  lVar4 = param_4[2];
  uVar3 = *(undefined8 *)(*param_4 + 0x84);
  uVar5 = *(undefined8 *)(uVar11 + 0x84);
  FUN_145e90324();
  FUN_140069376(param_2);
  puVar1 = local_160;
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar12 + 0x4c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_160,0x270);
    puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar12 + 0x4c;
  }
  *local_160 = (ulonglong)puVar10;
  uStack_d0 = DAT_14ca325b0;
  if (DAT_14ca325b0 != 0) {
    LOCK();
    *(int *)(DAT_14ca325b0 + 8) = *(int *)(DAT_14ca325b0 + 8) + 1;
    UNLOCK();
  }
  uStack_c8 = &DAT_14ca32568;
  local_178 = 1;
  local_d8 = puVar9;
  FUN_140068f1a(puVar12,&local_109,&local_d8,1);
  uVar8 = local_158;
  *puVar12 = &PTR_FUN_14a2c4510;
  puVar12[0x38] = local_128;
  puVar12[0x39] = local_120;
  puVar12[0x3a] = local_130;
  *(undefined1 *)(puVar12 + 0x3b) = local_162;
  *(undefined4 *)((longlong)puVar12 + 0x1d9) = local_100;
  *(uint *)((longlong)puVar12 + 0x1dc) = CONCAT31(uStack_fc,local_100._3_1_);
  puVar12[0x3c] = local_138;
  *(undefined1 *)(puVar12 + 0x3d) = local_161;
  *(undefined4 *)((longlong)puVar12 + 0x1e9) = local_108;
  *(uint *)((longlong)puVar12 + 0x1ec) = CONCAT31(uStack_104,local_108._3_1_);
  *(float *)(puVar12 + 0x3e) = fVar14;
  *(float *)((longlong)puVar12 + 500) = fVar13;
  *(float *)(puVar12 + 0x3f) = 1.0 / fVar14;
  *(float *)((longlong)puVar12 + 0x1fc) = 1.0 / fVar13;
  *(int *)(puVar12 + 0x40) = (int)lVar2;
  puVar12[0x42] = local_148;
  puVar12[0x43] = local_140;
  puVar12[0x44] = puVar9;
  puVar12[0x45] = uVar3;
  puVar12[0x46] = local_150;
  puVar12[0x47] = lVar4;
  puVar12[0x48] = uVar5;
  puVar12[0x49] = 0;
  puVar12[0x4a] = local_158;
  puVar12[0x4b] = param_3;
  iVar7 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar7 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar7 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar12);
  *local_118 = uVar11;
  local_118[1] = 0;
  local_118[2] = uVar8;
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ef9f58 FUN_142ef9f58 body=2074 status=ok
// SIG undefined FUN_142ef9f58(void)

void FUN_142ef9f58(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1b2;
  undefined1 local_1b1;
  ulonglong *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  ulonglong *local_168;
  undefined1 local_159;
  undefined4 local_158;
  undefined3 uStack_154;
  undefined4 local_150;
  undefined3 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined2 local_fc;
  short local_fa;
  undefined2 local_f8;
  byte local_f6;
  undefined2 local_f5;
  undefined1 local_f3;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_100 = *(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc);
  local_104 = (int)param_4[2] - (int)param_4[1];
  lVar8 = *param_4;
  lVar9 = param_4[3];
  local_f6 = *(byte *)(param_3 + 0x23f5);
  local_138 = DAT_14ca83a40;
  local_148 = DAT_14ca83a30;
  uStack_144 = DAT_14ca83a34;
  uStack_140 = DAT_14ca83a38;
  uStack_13c = DAT_14ca83a3c;
  local_fa = local_f6 + 1;
  uStack_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_128 = (undefined8 *)0x9;
  local_f5 = 0x1a;
  local_fc = 1;
  local_f8 = 0x101;
  uStack_120 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_118 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_110 = DAT_14ca83a40;
  local_108 = 0;
  local_f3 = 0xff;
  if (DAT_14ca84e40 <= local_104) {
    local_104 = DAT_14ca84e40;
  }
  if (local_104 < 2) {
    local_104 = 1;
  }
  if (DAT_14ca84e40 <= local_100) {
    local_100 = DAT_14ca84e40;
  }
  if (local_100 < 2) {
    local_100 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar16 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar13 = uVar16 + 0x120;
  local_1b0 = puVar1;
  local_168 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar13) {
    FUN_140023dd8(puVar1,0x128);
    uVar16 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar13 = uVar16 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar13;
  FUN_1456bbb8c(uVar16,L"BloomUp",&local_128,0);
  iVar7 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar7);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar16;
  *(int *)(uVar16 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar16 == 0) {
    local_1a8 = 0;
  }
  else {
    local_1a8 = *(ulonglong *)(uVar16 + 0x84);
  }
  uVar10 = *(undefined8 *)(param_3 + 0x13818);
  FUN_14607fe2c();
  FUN_1448e935e(uVar10,&local_128,&DAT_14ca2cfe8,0);
  FUN_14607fe2c();
  local_178 = local_128;
  local_170 = uStack_120;
  FUN_1448c58dc(param_3,&local_128);
  uStack_14c = (undefined3)((ulonglong)uStack_120 >> 0x28);
  local_158._0_3_ = (undefined3)((uint)uStack_110 >> 8);
  local_158._3_1_ = (undefined1)uStack_10c;
  uStack_154 = (undefined3)(uStack_10c >> 8);
  fVar18 = (float)*(int *)(lVar8 + 0x88);
  local_188 = local_128;
  fVar20 = (float)*(int *)(lVar8 + 0x84);
  local_1b2 = (undefined1)uStack_120;
  fVar19 = (float)*(int *)(lVar9 + 0x88);
  local_180 = uStack_118;
  fVar21 = (float)*(int *)(lVar9 + 0x84);
  local_1b1 = (undefined1)uStack_110;
  dVar5 = (double)param_4[7];
  dVar6 = (double)param_4[6];
  uVar10 = *(undefined8 *)(param_3 + 0x13818);
  local_150 = uStack_120._1_4_;
  FUN_145e90626();
  FUN_1448e935e(uVar10,&local_128,&DAT_14ca2cec0,0);
  FUN_145e90626();
  puVar1 = local_1b0;
  local_198 = local_128;
  local_190 = uStack_120;
  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar15 + 0x2e;
  if (*(undefined8 **)(param_2 + 0x78) < puVar14) {
    FUN_140023dd8(local_1b0,0x180);
    puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar14 = puVar15 + 0x2e;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar14;
  *puVar15 = &PTR_FUN_14a2c4528;
  puVar14 = puVar15 + 2;
  FUN_1472a3b76(puVar14);
  iVar7 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar7 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar7 * 8) = puVar15;
  puVar15[0xe] = uVar16;
  puVar15[0xf] = 0;
  *(undefined4 *)(puVar15 + 0x10) = 0xffff0002;
  bVar12 = 2;
  if (*(char *)(param_3 + 0x23f5) == '\0') {
    FUN_1448944a0(&local_128,
                  *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    bVar12 = (byte)local_128 >> 1 & 1;
  }
  *(byte *)((longlong)puVar15 + 0x15d) = bVar12;
  FUN_1448c58dc(param_3,&local_128);
  puVar15[8] = uStack_118;
  puVar15[9] = CONCAT44(uStack_10c,uStack_110);
  puVar15[6] = local_128;
  puVar15[7] = uStack_120;
  puVar15[10] = *param_4;
  uVar10 = DAT_14c9c0de0;
  puVar15[0xb] = DAT_14c9c0de0;
  puVar15[0xc] = param_4[3];
  puVar15[0xd] = uVar10;
  fVar2 = *(float *)((longlong)param_4 + 0x4c);
  fVar3 = *(float *)(param_4 + 9);
  fVar4 = *(float *)((longlong)param_4 + 0x44);
  *(float *)(puVar15 + 2) = *(float *)(param_4 + 8) * 0.125;
  *(float *)((longlong)puVar15 + 0x14) = fVar4 * 0.125;
  *(float *)(puVar15 + 3) = fVar3 * 0.125;
  *(float *)((longlong)puVar15 + 0x1c) = fVar2 * 0.125;
  fVar2 = *(float *)((longlong)param_4 + 0x5c);
  fVar3 = *(float *)(param_4 + 0xb);
  fVar4 = *(float *)((longlong)param_4 + 0x54);
  *(float *)(puVar15 + 4) = *(float *)(param_4 + 10) * 0.125;
  *(float *)((longlong)puVar15 + 0x24) = fVar4 * 0.125;
  *(float *)(puVar15 + 5) = fVar3 * 0.125;
  *(float *)((longlong)puVar15 + 0x2c) = fVar2 * 0.125;
  local_1a0 = param_4[1];
  lVar8 = param_4[2];
  uVar10 = *(undefined8 *)(*param_4 + 0x84);
  uVar11 = *(undefined8 *)(uVar16 + 0x84);
  FUN_145e90894();
  FUN_140069376(param_2);
  puVar1 = local_1b0;
  puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar17 + 0x4e;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_1b0,0x280);
    puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar15 = puVar17 + 0x4e;
  }
  *local_1b0 = (ulonglong)puVar15;
  uStack_120 = DAT_14ca326c0;
  if (DAT_14ca326c0 != 0) {
    LOCK();
    *(int *)(DAT_14ca326c0 + 8) = *(int *)(DAT_14ca326c0 + 8) + 1;
    UNLOCK();
  }
  uStack_118 = &DAT_14ca32678;
  local_1c8 = 1;
  local_128 = puVar14;
  FUN_140068f1a(puVar17,&local_159,&local_128,1);
  uVar13 = local_1a8;
  *puVar17 = &PTR_FUN_14a2c4530;
  puVar17[0x38] = local_178;
  puVar17[0x39] = local_170;
  puVar17[0x3a] = local_188;
  *(undefined1 *)(puVar17 + 0x3b) = local_1b2;
  *(undefined4 *)((longlong)puVar17 + 0x1d9) = local_150;
  *(uint *)((longlong)puVar17 + 0x1dc) = CONCAT31(uStack_14c,local_150._3_1_);
  puVar17[0x3c] = local_180;
  *(undefined1 *)(puVar17 + 0x3d) = local_1b1;
  *(undefined4 *)((longlong)puVar17 + 0x1e9) = local_158;
  *(uint *)((longlong)puVar17 + 0x1ec) = CONCAT31(uStack_154,local_158._3_1_);
  *(float *)(puVar17 + 0x3e) = fVar20;
  *(float *)((longlong)puVar17 + 500) = fVar18;
  *(float *)(puVar17 + 0x3f) = 1.0 / fVar20;
  *(float *)((longlong)puVar17 + 0x1fc) = 1.0 / fVar18;
  *(float *)(puVar17 + 0x40) = fVar21;
  *(float *)((longlong)puVar17 + 0x204) = fVar19;
  *(float *)(puVar17 + 0x41) = 1.0 / fVar21;
  *(float *)((longlong)puVar17 + 0x20c) = 1.0 / fVar19;
  *(float *)(puVar17 + 0x42) = (float)dVar6;
  *(float *)((longlong)puVar17 + 0x214) = (float)dVar5;
  puVar17[0x44] = local_198;
  puVar17[0x45] = local_190;
  puVar17[0x46] = puVar14;
  puVar17[0x47] = uVar10;
  puVar17[0x48] = local_1a0;
  puVar17[0x49] = lVar8;
  puVar17[0x4a] = uVar11;
  puVar17[0x4b] = 0;
  puVar17[0x4c] = local_1a8;
  puVar17[0x4d] = param_3;
  iVar7 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar7 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar7 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar17);
  *local_168 = uVar16;
  local_168[1] = 0;
  local_168[2] = uVar13;
  if ((local_f0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efa77f FUN_142efa77f body=2869 status=ok
// SIG undefined FUN_142efa77f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efa77f(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint5 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 uVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  undefined1 auStack_238 [32];
  wchar_t *local_218;
  wchar_t *local_210;
  undefined4 local_208;
  undefined4 local_200;
  code *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1ad;
  undefined4 local_1ac;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulonglong local_168;
  ulonglong *local_160;
  undefined1 local_151;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  byte local_140;
  undefined2 local_13f;
  byte local_13d;
  undefined2 local_13b;
  undefined1 local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined1 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar3 = *param_4;
  local_188 = CONCAT71(local_188._1_7_,*(undefined1 *)(lVar3 + 0x92));
  uVar29 = *(undefined1 *)(lVar3 + 0x94);
  uVar24 = *(undefined2 *)(lVar3 + 0x8c);
  uVar25 = *(undefined2 *)(lVar3 + 0x8e);
  local_180 = CONCAT71(local_180._1_7_,*(undefined1 *)(lVar3 + 0x90));
  uVar27 = *(undefined4 *)(lVar3 + 0x68);
  uVar31 = *(undefined4 *)(lVar3 + 0x6c);
  uVar4 = *(undefined8 *)(lVar3 + 0x68);
  uVar6 = *(undefined8 *)(lVar3 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x70);
  uVar2 = *(undefined4 *)(lVar3 + 0x78);
  uVar28 = *(undefined4 *)(lVar3 + 0x80);
  uVar14 = *(undefined1 *)(lVar3 + 0x95);
  uVar18 = *(undefined4 *)(lVar3 + 0x7c);
  lVar21 = (*(ulonglong *)(lVar3 + 0x60) & 0xfffffffff7fdeffc) + 1;
  uVar20 = 0;
  uVar22 = 0;
  local_168 = 0;
  iVar10 = (int)*(undefined8 *)(lVar3 + 0x84);
  iVar26 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x84) >> 0x20);
  local_160 = param_1;
  local_138 = lVar21;
  if ((char)param_4[4] == '\x01') {
    uVar20 = 0;
    uVar22 = 0;
    local_168 = 0;
    if (*(char *)((longlong)param_4 + 0x23) == '\x01') {
      local_1a0 = CONCAT62(local_1a0._2_6_,uVar25);
      local_198 = CONCAT62(local_198._2_6_,uVar24);
      local_190 = CONCAT44(local_190._4_4_,uVar18);
      local_1a8 = CONCAT71(local_1a8._1_7_,uVar14);
      bVar8 = 0x1a;
      if ((&DAT_14ca814b8)
          [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0xf]
          == 1) {
        iVar9 = FUN_1467b7d4e();
        bVar8 = (iVar9 < 1) << 4 | 10;
      }
      iVar9 = DAT_14ca84e40;
      if (iVar10 < DAT_14ca84e40) {
        iVar9 = iVar10;
      }
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      iVar16 = DAT_14ca84e40;
      if (iVar26 < DAT_14ca84e40) {
        iVar16 = iVar26;
      }
      uVar22 = param_4[1];
      if (iVar16 < 2) {
        iVar16 = 1;
      }
      local_168 = param_4[2];
      local_170 = CONCAT71(local_170._1_7_,uVar29);
      local_110 = (local_198 & 0xffff) << 0x20;
      local_110 = CONCAT26((undefined2)local_1a0,(undefined6)local_110);
      local_108._0_2_ = CONCAT11(1,(undefined1)local_180);
      local_178 = CONCAT44(local_178._4_4_,uVar27);
      local_108._0_6_ =
           CONCAT15((undefined1)local_1a8,
                    CONCAT32(CONCAT12(uVar29,CONCAT11(bVar8,(byte)local_188)),(undefined2)local_108)
                   );
      uStack_120 = CONCAT44((undefined4)local_190,uVar2);
      local_118 = CONCAT44(iVar9,uVar28);
      local_110 = CONCAT44(local_110._4_4_,iVar16);
      uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar11 = uVar20 + 0x120;
      local_1ac = uVar28;
      uStack_130 = uVar4;
      local_128 = uVar5;
      if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
        FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
        uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar11 = uVar20 + 0x120;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar11;
      FUN_1456bbb8c(uVar20,L"SceneColor",&local_138,0);
      iVar9 = *(int *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x180) = iVar9 + 1U;
      if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
        FUN_14472c0f6(param_2 + 0x178,iVar9);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar20;
      *(int *)(uVar20 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      uVar29 = (undefined1)local_170;
      uVar27 = (undefined4)local_178;
      uVar28 = local_1ac;
      uVar14 = (undefined1)local_1a8;
      uVar18 = (undefined4)local_190;
      uVar24 = (undefined2)local_198;
      uVar25 = (undefined2)local_1a0;
    }
  }
  local_198 = param_4[1];
  local_1a0 = param_4[2];
  local_108._0_5_ = CONCAT14(uVar29,CONCAT13(0x15,(uint3)(byte)local_188 << 0x10));
  uVar7 = (uint5)(undefined5)local_108 >> 0x10;
  local_108._0_2_ = CONCAT11(1,(undefined1)local_180);
  uStack_130 = CONCAT44(uVar31,uVar27);
  local_108._0_6_ = CONCAT15(uVar14,CONCAT32((int3)uVar7,(undefined2)local_108));
  uStack_120 = CONCAT44(uVar18,uVar2);
  iVar9 = DAT_14ca84e40;
  if (iVar10 < DAT_14ca84e40) {
    iVar9 = iVar10;
  }
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  iVar10 = DAT_14ca84e40;
  if (iVar26 < DAT_14ca84e40) {
    iVar10 = iVar26;
  }
  local_118 = CONCAT44(iVar9,uVar28);
  if (iVar10 < 2) {
    iVar10 = 1;
  }
  local_110 = CONCAT44(CONCAT22(uVar25,uVar24),iVar10);
  plVar1 = (longlong *)(param_2 + 0x70);
  uVar30 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar30 + 0x120;
  local_1a8 = uVar20;
  local_138 = lVar21;
  local_128 = uVar6;
  if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
    FUN_140023dd8(plVar1,0x128);
    uVar30 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar11 = uVar30 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar30,L"SunMask",&local_138,0);
  iVar26 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar26 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar26 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar26);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar26 * 8) = uVar30;
  *(int *)(uVar30 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (*(char *)(param_3 + 0x13810) == '\x01') {
    puVar12 = (undefined4 *)(param_3 + 0x137e8);
    puVar17 = (undefined4 *)(param_3 + 0x137ec);
    puVar19 = (undefined4 *)(param_3 + 0x137f0);
    uVar31 = *(undefined4 *)(param_3 + 0x13808);
  }
  else {
    uVar31 = 0x42c80000;
    puVar19 = &DAT_149e1e320;
    puVar17 = &DAT_149e1e31c;
    puVar12 = &DAT_149e1e318;
  }
  uVar2 = *puVar19;
  uVar27 = *puVar17;
  uVar28 = *puVar12;
  puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar23 + 0x2e;
  local_190 = uVar22;
  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
    FUN_140023dd8(plVar1,0x180);
    puVar23 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar23 + 0x2e;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar13;
  *puVar23 = &PTR_FUN_14a2c4548;
  puVar13 = puVar23 + 2;
  FUN_1472a3c28(puVar13);
  iVar26 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar26 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar26 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar26 * 8) = puVar23;
  puVar23[0xe] = uVar30;
  puVar23[0xf] = 0;
  *(undefined4 *)(puVar23 + 0x10) = 0xffff0000;
  puVar23[0x11] = local_1a8;
  puVar23[0x12] = 0;
  *(undefined4 *)(puVar23 + 0x13) = 0xffff0000;
  FUN_1448c58dc(param_3,&local_138);
  *(undefined4 *)(puVar23 + 6) = (undefined4)local_128;
  *(undefined4 *)((longlong)puVar23 + 0x34) = local_128._4_4_;
  *(undefined4 *)(puVar23 + 7) = (undefined4)uStack_120;
  *(undefined4 *)((longlong)puVar23 + 0x3c) = uStack_120._4_4_;
  *(undefined4 *)(puVar23 + 4) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar23 + 0x24) = local_138._4_4_;
  *(undefined4 *)(puVar23 + 5) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar23 + 0x2c) = uStack_130._4_4_;
  lVar3 = param_4[3];
  lVar21 = FUN_144a890ae();
  cVar15 = '\x02';
  if (*(char *)(lVar21 + 0x41) != '\x03') {
    cVar15 = *(char *)(lVar21 + 0x41);
  }
  puVar23[2] = lVar3;
  *(char *)(puVar23 + 3) = cVar15;
  puVar23[8] = *param_4;
  puVar23[9] = DAT_14c9c0de0;
  *(undefined4 *)(puVar23 + 10) = uVar28;
  *(undefined4 *)((longlong)puVar23 + 0x54) = uVar27;
  *(undefined4 *)(puVar23 + 0xb) = uVar2;
  *(float *)((longlong)puVar23 + 0x5c) = *(float *)(param_3 + 0x2b6c) * 0.5;
  *(undefined4 *)(puVar23 + 0xc) = uVar31;
  *(undefined4 *)((longlong)puVar23 + 100) = *(undefined4 *)(param_3 + 0x2818);
  local_140 = *(byte *)(param_4 + 4);
  local_13f = *(undefined2 *)((longlong)param_4 + 0x21);
  local_13d = *(byte *)((longlong)param_4 + 0x23) & local_140;
  FUN_147295dce(&local_150,*(undefined8 *)(param_3 + 0x13818));
  local_180 = param_4[1];
  local_188 = param_4[2];
  local_170 = *(undefined8 *)(*param_4 + 0x84);
  local_178 = *(undefined8 *)(uVar30 + 0x84);
  iVar26 = *(int *)(param_3 + 0x3090);
  local_1ac = *(undefined4 *)(param_3 + 0x1dd4);
  uVar31 = *(undefined4 *)(param_3 + 0x3094);
  local_1ad = (&DAT_00001de6)[param_3];
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar26 * 2) * 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_1d0 = &LAB_14712ac08;
      local_1d8 = &LAB_14712ac0c;
      local_1e0 = &LAB_1472e3912;
      local_1e8 = &LAB_1472e3916;
      local_1f0 = FUN_1472e391a;
      local_1f8 = FUN_1472e3942;
      local_210 = L"ScreenPassVS";
      local_218 = L"/Engine/Private/ScreenPass.usf";
      local_1c0 = 0;
      local_1c8 = 0xe0;
      local_200 = 1;
      local_208 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  FUN_1448e935e(uVar4,&local_138,&DAT_14ca4b6d8,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b780) {
    FUN_144b3d300(&DAT_14ca4b780);
    if (DAT_14ca4b780 == -1) {
      FUN_145e1a792();
      local_1d0 = &LAB_14712ac08;
      local_1d8 = &LAB_14712ac0c;
      local_1e0 = &LAB_1472e3912;
      local_1e8 = &LAB_1472e3916;
      local_1f0 = FUN_1472e391a;
      local_1f8 = FUN_1472e3942;
      local_210 = L"ScreenPassVS";
      local_218 = L"/Engine/Private/ScreenPass.usf";
      local_1c0 = 0;
      local_1c8 = 0xe0;
      local_200 = 1;
      local_208 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
  }
  uVar6 = uStack_130;
  lVar3 = local_138;
  uVar5 = DAT_14c9c0d98;
  uVar4 = DAT_14c9c0d50;
  FUN_145e73d46();
  local_138 = 0;
  uStack_130 = 0;
  FUN_1448f70da(CONCAT44(uStack_14c,local_150),&DAT_14ca32788,puVar13,&local_138);
  uVar20 = local_198;
  uVar22 = local_1a0;
  local_138 = CONCAT44(local_1ac,iVar26);
  uStack_130 = CONCAT17(local_139,CONCAT25(local_13b,CONCAT14(local_1ad,uVar31)));
  local_128 = local_178;
  uStack_120 = local_198;
  local_118 = local_1a0;
  local_110 = local_170;
  local_108 = local_180;
  local_100 = local_188;
  local_f8 = lVar3;
  uStack_f0 = uVar6;
  local_d8 = uVar4;
  local_d0 = uVar5;
  local_c8 = DAT_14ca94df8;
  local_c0 = 0;
  local_b8 = local_150;
  uStack_b4 = uStack_14c;
  uStack_b0 = uStack_148;
  uStack_ac = uStack_144;
  local_a0 = 0;
  local_a8 = puVar13;
  FUN_145e73d46();
  FUN_1472a3cd6(param_2,&local_151,puVar13,&local_138);
  *local_160 = uVar30;
  local_160[1] = uVar20;
  local_160[2] = uVar22;
  local_160[3] = local_1a8;
  local_160[4] = local_190;
  local_160[5] = local_168;
  if ((local_90 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efb2cd FUN_142efb2cd body=1453 status=ok
// SIG undefined FUN_142efb2cd(void)

void FUN_142efb2cd(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_10a;
  undefined1 local_109;
  ulonglong local_108;
  ulonglong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong *local_c8;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined3 uStack_b4;
  undefined4 local_b0;
  undefined3 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined2 local_75;
  undefined1 local_73;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uStack_90 = DAT_14ca83a40;
  uStack_a0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_98 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_76 = 0;
  local_a8 = (undefined8 *)0x9;
  local_75 = 3;
  local_7c = 0x10001;
  local_78 = 0x101;
  local_88 = 0;
  local_73 = 0xff;
  iVar6 = (int)*(undefined8 *)(*param_4 + 0x84);
  local_84 = DAT_14ca84e40;
  if (iVar6 < DAT_14ca84e40) {
    local_84 = iVar6;
  }
  if (local_84 < 2) {
    local_84 = 1;
  }
  iVar6 = (int)((ulonglong)*(undefined8 *)(*param_4 + 0x84) >> 0x20);
  local_80 = DAT_14ca84e40;
  if (iVar6 < DAT_14ca84e40) {
    local_80 = iVar6;
  }
  if (local_80 < 2) {
    local_80 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar9 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar7 = uVar9 + 0x120;
  local_c8 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar7) {
    FUN_140023dd8(puVar1,0x128);
    uVar9 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar7 = uVar9 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar7;
  FUN_1456bbb8c(uVar9,L"SunAlpha",&local_a8,0);
  iVar6 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar6 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar6);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar6 * 8) = uVar9;
  *(int *)(uVar9 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar9 == 0) {
    local_108 = 0;
  }
  else {
    local_108 = *(ulonglong *)(uVar9 + 0x84);
  }
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  local_100 = puVar1;
  FUN_146080092();
  FUN_1448e935e(uVar4,&local_a8,&DAT_14ca2d360,0);
  FUN_146080092();
  local_d8 = local_a8;
  local_d0 = uStack_a0;
  FUN_1448c58dc(param_3,&local_a8);
  local_e0 = local_a8;
  uStack_ac = (undefined3)((ulonglong)uStack_a0 >> 0x28);
  local_b8._0_3_ = (undefined3)((uint)uStack_90 >> 8);
  local_b8._3_1_ = (undefined1)uStack_8c;
  uStack_b4 = (undefined3)(uStack_8c >> 8);
  dVar2 = *(double *)(param_3 + 0x137e0);
  local_10a = (undefined1)uStack_a0;
  dVar3 = *(double *)(param_3 + 0x137d8);
  local_e8 = uStack_98;
  local_109 = (undefined1)uStack_90;
  lVar5 = param_4[3];
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  local_b0 = uStack_a0._1_4_;
  FUN_145e90b96();
  FUN_1448e935e(uVar4,&local_a8,&DAT_14ca2d238,(char)lVar5);
  FUN_145e90b96();
  puVar1 = local_100;
  local_f8 = local_a8;
  local_f0 = uStack_a0;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar10 + 0x28;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_100,0x150);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar10 + 0x28;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  *puVar10 = &PTR_FUN_14a2c4568;
  puVar8 = puVar10 + 2;
  FUN_1472a3fb6(puVar8);
  iVar6 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar10;
  puVar10[8] = uVar9;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 10) = 0xffff0002;
  FUN_1448c58dc(param_3,&local_a8);
  *(undefined4 *)(puVar10 + 4) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_98._4_4_;
  *(undefined4 *)(puVar10 + 5) = uStack_90;
  *(uint *)((longlong)puVar10 + 0x2c) = uStack_8c;
  *(undefined4 *)puVar8 = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_a8._4_4_;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_a0._4_4_;
  puVar10[6] = *param_4;
  puVar10[7] = DAT_14c9c0de0;
  uVar4 = *(undefined8 *)(uVar9 + 0x84);
  FUN_145e90e04();
  FUN_140069376(param_2);
  puVar1 = local_100;
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar11 + 0x48;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_100,0x250);
    puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar11 + 0x48;
  }
  *puVar1 = (ulonglong)puVar10;
  uStack_a0 = DAT_14ca32858;
  if (DAT_14ca32858 != 0) {
    LOCK();
    *(int *)(DAT_14ca32858 + 8) = *(int *)(DAT_14ca32858 + 8) + 1;
    UNLOCK();
  }
  uStack_98 = &DAT_14ca32810;
  local_118 = 1;
  local_a8 = puVar8;
  FUN_140068f1a(puVar11,&local_b9,&local_a8,1);
  uVar7 = local_108;
  *puVar11 = &PTR_FUN_14a2c4570;
  puVar11[0x38] = local_d8;
  puVar11[0x39] = local_d0;
  puVar11[0x3a] = local_e0;
  *(undefined1 *)(puVar11 + 0x3b) = local_10a;
  *(undefined4 *)((longlong)puVar11 + 0x1d9) = local_b0;
  *(uint *)((longlong)puVar11 + 0x1dc) = CONCAT31(uStack_ac,local_b0._3_1_);
  puVar11[0x3c] = local_e8;
  *(undefined1 *)(puVar11 + 0x3d) = local_109;
  *(undefined4 *)((longlong)puVar11 + 0x1e9) = local_b8;
  *(uint *)((longlong)puVar11 + 0x1ec) = CONCAT31(uStack_b4,local_b8._3_1_);
  *(float *)(puVar11 + 0x3e) = (float)dVar3;
  *(float *)((longlong)puVar11 + 500) = (float)dVar2;
  puVar11[0x40] = local_f8;
  puVar11[0x41] = local_f0;
  puVar11[0x42] = puVar8;
  puVar11[0x43] = uVar4;
  puVar11[0x44] = 0;
  puVar11[0x45] = local_108;
  puVar11[0x46] = param_3;
  iVar6 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar11);
  *local_c8 = uVar9;
  local_c8[1] = 0;
  local_c8[2] = uVar7;
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efb893 FUN_142efb893 body=1437 status=ok
// SIG undefined FUN_142efb893(void)

ulonglong * FUN_142efb893(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_102;
  undefined1 local_101;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined3 uStack_b4;
  undefined4 local_b0;
  undefined3 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined2 local_75;
  undefined1 local_73;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uStack_90 = DAT_14ca83a40;
  uStack_a0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_98 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_76 = 0;
  local_a8 = (undefined8 *)0x9;
  local_75 = 3;
  local_7c = 0x10001;
  local_78 = 0x101;
  local_88 = 0;
  local_73 = 0xff;
  iVar5 = (int)*(undefined8 *)(*param_4 + 0x84);
  local_84 = DAT_14ca84e40;
  if (iVar5 < DAT_14ca84e40) {
    local_84 = iVar5;
  }
  if (local_84 < 2) {
    local_84 = 1;
  }
  iVar5 = (int)((ulonglong)*(undefined8 *)(*param_4 + 0x84) >> 0x20);
  local_80 = DAT_14ca84e40;
  if (iVar5 < DAT_14ca84e40) {
    local_80 = iVar5;
  }
  if (local_80 < 2) {
    local_80 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar8 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar8 + 0x120;
  local_c8 = param_4;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(puVar1,0x128);
    uVar8 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar6 = uVar8 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar8,L"SunBlur",&local_a8,0);
  iVar5 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar5);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar8;
  *(int *)(uVar8 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar8 == 0) {
    local_100 = 0;
  }
  else {
    local_100 = *(ulonglong *)(uVar8 + 0x84);
  }
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  FUN_1460802f8();
  FUN_1448e935e(uVar4,&local_a8,&DAT_14ca2d5b0,0);
  FUN_1460802f8();
  local_d8 = local_a8;
  local_d0 = uStack_a0;
  FUN_1448c58dc(param_3,&local_a8);
  local_e0 = local_a8;
  local_101 = (undefined1)uStack_a0;
  uStack_ac = (undefined3)((ulonglong)uStack_a0 >> 0x28);
  local_e8 = uStack_98;
  local_102 = (undefined1)uStack_90;
  local_b8._0_3_ = (undefined3)((uint)uStack_90 >> 8);
  local_b8._3_1_ = (undefined1)uStack_8c;
  uStack_b4 = (undefined3)(uStack_8c >> 8);
  dVar2 = *(double *)(param_3 + 0x137e0);
  dVar3 = *(double *)(param_3 + 0x137d8);
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  local_b0 = uStack_a0._1_4_;
  FUN_145e91106();
  FUN_1448e935e(uVar4,&local_a8,&DAT_14ca2d488,0);
  FUN_145e91106();
  local_f8 = local_a8;
  local_f0 = uStack_a0;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar9 + 0x28;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x150);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar9 + 0x28;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar9 = &PTR_FUN_14a2c4588;
  puVar7 = puVar9 + 2;
  FUN_1472a4052(puVar7);
  iVar5 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar5 * 8) = puVar9;
  puVar9[8] = uVar8;
  puVar9[9] = 0;
  *(undefined4 *)(puVar9 + 10) = 0xffff0002;
  FUN_1448c58dc(param_3,&local_a8);
  *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_98._4_4_;
  *(undefined4 *)(puVar9 + 5) = uStack_90;
  *(uint *)((longlong)puVar9 + 0x2c) = uStack_8c;
  *(undefined4 *)puVar7 = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_a8._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_a0._4_4_;
  puVar9[6] = *local_c8;
  puVar9[7] = DAT_14c9c0de0;
  uVar4 = *(undefined8 *)(uVar8 + 0x84);
  FUN_145e91374();
  FUN_140069376(param_2);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x48;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x250);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x48;
  }
  *puVar1 = (ulonglong)puVar9;
  uStack_a0 = DAT_14ca32968;
  if (DAT_14ca32968 != 0) {
    LOCK();
    *(int *)(DAT_14ca32968 + 8) = *(int *)(DAT_14ca32968 + 8) + 1;
    UNLOCK();
  }
  uStack_98 = &DAT_14ca32920;
  local_118 = 1;
  local_a8 = puVar7;
  FUN_140068f1a(puVar10,&local_b9,&local_a8,1);
  uVar6 = local_100;
  *puVar10 = &PTR_FUN_14a2c4590;
  puVar10[0x38] = local_d8;
  puVar10[0x39] = local_d0;
  puVar10[0x3a] = local_e0;
  *(undefined1 *)(puVar10 + 0x3b) = local_101;
  *(undefined4 *)((longlong)puVar10 + 0x1d9) = local_b0;
  *(uint *)((longlong)puVar10 + 0x1dc) = CONCAT31(uStack_ac,local_b0._3_1_);
  puVar10[0x3c] = local_e8;
  *(undefined1 *)(puVar10 + 0x3d) = local_102;
  *(undefined4 *)((longlong)puVar10 + 0x1e9) = local_b8;
  *(uint *)((longlong)puVar10 + 0x1ec) = CONCAT31(uStack_b4,local_b8._3_1_);
  *(float *)(puVar10 + 0x3e) = (float)dVar3;
  *(float *)((longlong)puVar10 + 500) = (float)dVar2;
  puVar10[0x40] = local_f8;
  puVar10[0x41] = local_f0;
  puVar10[0x42] = puVar7;
  puVar10[0x43] = uVar4;
  puVar10[0x44] = 0;
  puVar10[0x45] = local_100;
  puVar10[0x46] = param_3;
  iVar5 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar5 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar5 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar10);
  *param_1 = uVar8;
  param_1[1] = 0;
  param_1[2] = uVar6;
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efbe49 FUN_142efbe49 body=2474 status=ok
// SIG undefined FUN_142efbe49(void)

void FUN_142efbe49(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte bVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  byte bVar17;
  ulonglong uVar18;
  double *pdVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  double *pdVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  int iVar29;
  float fVar30;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 local_1da;
  undefined1 local_1d9;
  undefined4 local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  ulonglong local_1c0;
  ulonglong *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 *local_170;
  ulonglong *local_168;
  undefined1 local_159;
  undefined4 local_158;
  undefined3 uStack_154;
  undefined4 local_150;
  undefined3 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined2 local_fc;
  short local_fa;
  undefined2 local_f8;
  byte local_f6;
  undefined2 local_f5;
  undefined1 local_f3;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar26 = *(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc);
  iVar14 = iVar26 + 3;
  iVar26 = iVar26 + 6;
  if (-1 < iVar14) {
    iVar26 = iVar14;
  }
  iVar29 = *(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8);
  iVar26 = iVar26 >> 2;
  iVar14 = iVar29 + 3;
  iVar29 = iVar29 + 6;
  if (-1 < iVar14) {
    iVar29 = iVar14;
  }
  iVar29 = iVar29 >> 2;
  local_f6 = *(byte *)(param_3 + 0x23f5);
  local_138 = DAT_14ca83a40;
  local_148 = DAT_14ca83a30;
  uStack_144 = DAT_14ca83a34;
  uStack_140 = DAT_14ca83a38;
  uStack_13c = DAT_14ca83a3c;
  local_fa = local_f6 + 1;
  uStack_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_128 = (undefined8 *)0x9;
  local_f5 = 0x1a;
  local_fc = 1;
  local_f8 = 0x101;
  uStack_120 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_118 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_110 = DAT_14ca83a40;
  local_108 = 0;
  local_f3 = 0xff;
  local_104 = DAT_14ca84e40;
  if (iVar29 < DAT_14ca84e40) {
    local_104 = iVar29;
  }
  if (local_104 < 2) {
    local_104 = 1;
  }
  local_100 = DAT_14ca84e40;
  if (iVar26 < DAT_14ca84e40) {
    local_100 = iVar26;
  }
  if (local_100 < 2) {
    local_100 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar28 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar18 = uVar28 + 0x120;
  local_168 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar18) {
    FUN_140023dd8(puVar1,0x128);
    uVar28 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar18 = uVar28 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar18;
  FUN_1456bbb8c(uVar28,L"SunMerge",&local_128,0);
  iVar14 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar14 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar14 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar14);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar14 * 8) = uVar28;
  *(int *)(uVar28 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar28 == 0) {
    local_1c0 = 0;
  }
  else {
    local_1c0 = *(ulonglong *)(uVar28 + 0x84);
  }
  uVar15 = *(undefined8 *)(param_3 + 0x13818);
  local_1b8 = puVar1;
  FUN_14608055e();
  FUN_1448e935e(uVar15,&local_128,&DAT_14ca2d800,0);
  FUN_14608055e();
  local_180 = local_128;
  local_178 = uStack_120;
  FUN_1448c58dc(param_3,&local_128);
  local_188 = local_128;
  local_1d9 = (undefined1)uStack_120;
  uStack_14c = (undefined3)((ulonglong)uStack_120 >> 0x28);
  local_190 = uStack_118;
  local_1da = (undefined1)uStack_110;
  local_158._0_3_ = (undefined3)((uint)uStack_110 >> 8);
  local_158._3_1_ = (undefined1)uStack_10c;
  uStack_154 = (undefined3)(uStack_10c >> 8);
  if (*(char *)(param_3 + 0x13810) == '\x01') {
    pdVar19 = (double *)(param_3 + 0x137d8);
    pdVar23 = (double *)(param_3 + 0x137e0);
    puVar22 = (undefined4 *)(param_3 + 0x137f8);
    puVar24 = (undefined4 *)(param_3 + 0x137fc);
    puVar25 = (undefined4 *)(param_3 + 0x13800);
  }
  else {
    puVar25 = &DAT_149e1e320;
    puVar24 = &DAT_149e1e31c;
    puVar22 = &DAT_149e1e318;
    pdVar23 = (double *)&DAT_14c8463f8;
    pdVar19 = (double *)&DAT_14c8463f0;
  }
  lVar20 = param_4[6];
  local_1c8 = 1.0;
  local_1c4 = 1.0;
  fVar30 = 1.0;
  local_1cc = 1.0;
  if (lVar20 != 0) {
    if (*(int *)(param_4 + 8) == *(int *)(param_4 + 7)) {
      local_1c8 = 1.0;
      local_1c4 = 1.0;
      fVar30 = 1.0;
      local_1cc = 1.0;
      if (*(int *)((longlong)param_4 + 0x44) == *(int *)((longlong)param_4 + 0x3c))
      goto LAB_142efc1df;
    }
    local_1c4 = (float)*(int *)(lVar20 + 0x88);
    local_1cc = 1.0 / local_1c4;
    local_1c8 = (float)*(int *)(lVar20 + 0x84);
    fVar30 = 1.0 / local_1c8;
  }
LAB_142efc1df:
  local_1d8 = *puVar25;
  uVar2 = *puVar24;
  local_1d0 = (float)*pdVar23;
  uVar3 = *puVar22;
  local_1d4 = (float)*pdVar19;
  bVar17 = *(byte *)((longlong)param_4 + 0x49);
  bVar13 = *(byte *)(param_4 + 9);
  uVar15 = *(undefined8 *)(param_3 + 0x13818);
  local_170 = param_4;
  local_150 = uStack_120._1_4_;
  FUN_145e91676();
  FUN_1448e935e(uVar15,&local_128,&DAT_14ca2d6d8,(uint)bVar13 + (uint)bVar17 * 2);
  FUN_145e91676();
  local_1a0 = local_128;
  local_198 = uStack_120;
  uVar4 = *(undefined4 *)(param_3 + 0x2ab8);
  fVar5 = *(float *)(param_3 + 0x2814);
  fVar6 = *(float *)(param_3 + 0x2840);
  fVar7 = *(float *)(param_3 + 0x283c);
  fVar8 = *(float *)(param_3 + 0x2838);
  local_1b0 = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  if (*(longlong *)(param_3 + 0x28c8) != 0) {
    lVar20 = FUN_1447b4020();
    if (lVar20 != 0) {
      lVar20 = FUN_1447b4020(*(undefined8 *)(param_3 + 0x28c8));
      local_1b0 = *(undefined8 *)(lVar20 + 0x10);
    }
  }
  puVar1 = local_1b8;
  puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar27 + 0x34;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_1b8,0x1b0);
    puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar27 + 0x34;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar21;
  *puVar27 = &PTR_FUN_14a2c45a8;
  local_1a8 = puVar27 + 2;
  FUN_1472a40ee();
  iVar14 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar14 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar14 * 8) = puVar27;
  puVar27[0x14] = uVar28;
  puVar27[0x15] = 0;
  *(undefined4 *)(puVar27 + 0x16) = 0xffff0002;
  bVar17 = 2;
  if (*(char *)(param_3 + 0x23f5) == '\0') {
    FUN_1448944a0(&local_128,
                  *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
    bVar17 = (byte)local_128 >> 1 & 1;
  }
  *(byte *)((longlong)puVar27 + 0x18d) = bVar17;
  FUN_1448c58dc(param_3,&local_128);
  puVar27[10] = uStack_118;
  puVar27[0xb] = CONCAT44(uStack_10c,uStack_110);
  puVar27[8] = local_128;
  puVar27[9] = uStack_120;
  fVar9 = *(float *)(param_3 + 0x28d0);
  fVar10 = *(float *)(param_3 + 0x28e0);
  fVar11 = *(float *)(param_3 + 0x28dc);
  fVar12 = *(float *)(param_3 + 0x28d8);
  *(float *)(puVar27 + 2) = fVar9 * *(float *)(param_3 + 0x28d4);
  *(float *)((longlong)puVar27 + 0x14) = fVar12 * fVar9;
  *(float *)(puVar27 + 3) = fVar11 * fVar9;
  *(float *)((longlong)puVar27 + 0x1c) = fVar10 * fVar9;
  *(undefined4 *)(puVar27 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar27 + 0x24) = uVar2;
  *(undefined4 *)(puVar27 + 5) = local_1d8;
  *(undefined4 *)((longlong)puVar27 + 0x2c) = uVar4;
  *(float *)(puVar27 + 6) = fVar5 * fVar8 * 0.5;
  *(float *)((longlong)puVar27 + 0x34) = fVar7 * fVar5 * 0.5;
  *(float *)(puVar27 + 7) = fVar6 * fVar5 * 0.5;
  puVar27[0xc] = *local_170;
  uVar15 = DAT_14c9c0de0;
  puVar27[0xd] = DAT_14c9c0de0;
  puVar27[0xe] = local_170[3];
  puVar27[0xf] = uVar15;
  puVar27[0x10] = local_170[6];
  puVar27[0x11] = uVar15;
  puVar27[0x12] = local_1b0;
  puVar27[0x13] = uVar15;
  uVar15 = *(undefined8 *)(uVar28 + 0x84);
  FUN_145e918e4();
  FUN_140069376(param_2);
  puVar1 = local_1b8;
  puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar21 = puVar27 + 0x4c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
    FUN_140023dd8(local_1b8,0x270);
    puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar21 = puVar27 + 0x4c;
  }
  puVar16 = local_1a8;
  uVar18 = local_1c0;
  *puVar1 = (ulonglong)puVar21;
  local_128 = local_1a8;
  uStack_120 = DAT_14ca32a78;
  if (DAT_14ca32a78 != 0) {
    LOCK();
    *(int *)(DAT_14ca32a78 + 8) = *(int *)(DAT_14ca32a78 + 8) + 1;
    UNLOCK();
  }
  uStack_118 = &DAT_14ca32a30;
  local_1e8 = 1;
  FUN_140068f1a(puVar27,&local_159,&local_128,1);
  *puVar27 = &PTR_FUN_14a2c45b0;
  puVar27[0x38] = local_180;
  puVar27[0x39] = local_178;
  puVar27[0x3a] = local_188;
  *(undefined1 *)(puVar27 + 0x3b) = local_1d9;
  *(undefined4 *)((longlong)puVar27 + 0x1d9) = local_150;
  *(uint *)((longlong)puVar27 + 0x1dc) = CONCAT31(uStack_14c,local_150._3_1_);
  puVar27[0x3c] = local_190;
  *(undefined1 *)(puVar27 + 0x3d) = local_1da;
  *(undefined4 *)((longlong)puVar27 + 0x1e9) = local_158;
  *(uint *)((longlong)puVar27 + 0x1ec) = CONCAT31(uStack_154,local_158._3_1_);
  *(float *)(puVar27 + 0x3e) = local_1d4;
  *(float *)((longlong)puVar27 + 500) = local_1d0;
  *(float *)(puVar27 + 0x40) = local_1c8;
  *(float *)((longlong)puVar27 + 0x204) = local_1c4;
  *(float *)(puVar27 + 0x41) = fVar30;
  *(float *)((longlong)puVar27 + 0x20c) = local_1cc;
  *(float *)(puVar27 + 0x42) = (float)iVar29;
  *(float *)((longlong)puVar27 + 0x214) = (float)iVar26;
  *(float *)(puVar27 + 0x43) = 1.0 / (float)iVar29;
  *(float *)((longlong)puVar27 + 0x21c) = 1.0 / (float)iVar26;
  puVar27[0x44] = local_1a0;
  puVar27[0x45] = local_198;
  puVar27[0x46] = puVar16;
  puVar27[0x47] = uVar15;
  puVar27[0x48] = 0;
  puVar27[0x49] = uVar18;
  puVar27[0x4a] = param_3;
  iVar14 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar14 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar14 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar14 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar27);
  *local_168 = uVar28;
  local_168[1] = 0;
  local_168[2] = uVar18;
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efc80c FUN_142efc80c body=1651 status=ok
// SIG undefined FUN_142efc80c(void)

void FUN_142efc80c(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_132;
  undefined1 local_131;
  ulonglong *local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong *local_e8;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined3 uStack_d4;
  undefined4 local_d0;
  undefined3 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined2 local_95;
  undefined1 local_93;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar6 = *(int *)((longlong)param_4 + 0x14) - *(int *)((longlong)param_4 + 0xc);
  local_a0 = (iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1;
  iVar6 = (int)param_4[2] - (int)param_4[1];
  local_a4 = (iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1;
  lVar2 = *param_4;
  uStack_b0 = DAT_14ca83a40;
  uStack_c0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_b8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_96 = 0;
  local_c8 = (undefined8 *)0x9;
  local_95 = 10;
  local_9c = 0x10001;
  local_98 = 0x101;
  local_a8 = 0;
  local_93 = 0xff;
  if (DAT_14ca84e40 <= local_a4) {
    local_a4 = DAT_14ca84e40;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  if (DAT_14ca84e40 <= local_a0) {
    local_a0 = DAT_14ca84e40;
  }
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar10 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar7 = uVar10 + 0x120;
  local_130 = puVar1;
  local_e8 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar7) {
    FUN_140023dd8(puVar1,0x128);
    uVar10 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar7 = uVar10 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar7;
  FUN_1456bbb8c(uVar10,L"DofDown",&local_c8,0);
  iVar6 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar6 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar6);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar6 * 8) = uVar10;
  *(int *)(uVar10 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar10 == 0) {
    local_128 = 0;
  }
  else {
    local_128 = *(ulonglong *)(uVar10 + 0x84);
  }
  uVar3 = *(undefined8 *)(param_3 + 0x13818);
  FUN_1460807c4();
  FUN_1448e935e(uVar3,&local_c8,&DAT_14ca2d928,0);
  FUN_1460807c4();
  local_100 = local_c8;
  local_f8 = uStack_c0;
  FUN_1448c58dc(param_3,&local_c8);
  local_108 = local_c8;
  uStack_cc = (undefined3)((ulonglong)uStack_c0 >> 0x28);
  local_d8._0_3_ = (undefined3)((uint)uStack_b0 >> 8);
  local_d8._3_1_ = (undefined1)uStack_ac;
  uStack_d4 = (undefined3)(uStack_ac >> 8);
  fVar12 = (float)*(int *)(lVar2 + 0x88);
  local_132 = (undefined1)uStack_c0;
  fVar13 = (float)*(int *)(lVar2 + 0x84);
  local_110 = uStack_b8;
  local_131 = (undefined1)uStack_b0;
  lVar2 = param_4[9];
  uVar3 = *(undefined8 *)(param_3 + 0x13818);
  local_d0 = uStack_c0._1_4_;
  FUN_145f55f7a();
  FUN_1448e935e(uVar3,&local_c8,&DAT_14ca2da50,(char)lVar2);
  FUN_145f55f7a();
  puVar1 = local_130;
  local_120 = local_c8;
  local_118 = uStack_c0;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar9 + 0x2c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(local_130,0x170);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar9 + 0x2c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  *puVar9 = &PTR_FUN_14a2c45c8;
  puVar8 = puVar9 + 2;
  FUN_1472a41ae(puVar8);
  iVar6 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = puVar9;
  puVar9[0xc] = uVar10;
  puVar9[0xd] = 0;
  *(undefined4 *)(puVar9 + 0xe) = 0xffff0002;
  local_f0 = param_3;
  FUN_1448c58dc(param_3,&local_c8);
  *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_b8._4_4_;
  *(undefined4 *)(puVar9 + 5) = uStack_b0;
  *(uint *)((longlong)puVar9 + 0x2c) = uStack_ac;
  *(undefined4 *)puVar8 = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_c8._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_c0._4_4_;
  puVar9[6] = *param_4;
  uVar3 = DAT_14c9c0d80;
  puVar9[7] = DAT_14c9c0d80;
  puVar9[8] = param_4[3];
  puVar9[9] = uVar3;
  puVar9[10] = param_4[6];
  puVar9[0xb] = uVar3;
  lVar2 = param_4[1];
  lVar4 = param_4[2];
  uVar3 = *(undefined8 *)(*param_4 + 0x84);
  uVar5 = *(undefined8 *)(uVar10 + 0x84);
  FUN_145f561e8();
  FUN_140069376(param_2);
  puVar1 = local_130;
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar11 + 0x4a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8(local_130,0x260);
    puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar11 + 0x4a;
  }
  *local_130 = (ulonglong)puVar9;
  uStack_c0 = DAT_14ca32c10;
  if (DAT_14ca32c10 != 0) {
    LOCK();
    *(int *)(DAT_14ca32c10 + 8) = *(int *)(DAT_14ca32c10 + 8) + 1;
    UNLOCK();
  }
  uStack_b8 = &DAT_14ca32bc8;
  local_148 = 1;
  local_c8 = puVar8;
  FUN_140068f1a(puVar11,&local_d9,&local_c8,1);
  uVar7 = local_128;
  *puVar11 = &PTR_FUN_14a2c45d0;
  puVar11[0x38] = local_100;
  puVar11[0x39] = local_f8;
  puVar11[0x3a] = local_108;
  *(undefined1 *)(puVar11 + 0x3b) = local_132;
  *(undefined4 *)((longlong)puVar11 + 0x1d9) = local_d0;
  *(uint *)((longlong)puVar11 + 0x1dc) = CONCAT31(uStack_cc,local_d0._3_1_);
  puVar11[0x3c] = local_110;
  *(undefined1 *)(puVar11 + 0x3d) = local_131;
  *(undefined4 *)((longlong)puVar11 + 0x1e9) = local_d8;
  *(uint *)((longlong)puVar11 + 0x1ec) = CONCAT31(uStack_d4,local_d8._3_1_);
  *(float *)(puVar11 + 0x3e) = fVar13;
  *(float *)((longlong)puVar11 + 500) = fVar12;
  *(float *)(puVar11 + 0x3f) = 1.0 / fVar13;
  *(float *)((longlong)puVar11 + 0x1fc) = 1.0 / fVar12;
  puVar11[0x40] = local_120;
  puVar11[0x41] = local_118;
  puVar11[0x42] = puVar8;
  puVar11[0x43] = uVar3;
  puVar11[0x44] = lVar2;
  puVar11[0x45] = lVar4;
  puVar11[0x46] = uVar5;
  puVar11[0x47] = 0;
  puVar11[0x48] = local_128;
  puVar11[0x49] = local_f0;
  iVar6 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar6 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar11);
  *local_e8 = uVar10;
  local_e8[1] = 0;
  local_e8[2] = uVar7;
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efce98 FUN_142efce98 body=1532 status=ok
// SIG undefined FUN_142efce98(void)

void FUN_142efce98(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_12a;
  undefined1 local_129;
  ulonglong local_128;
  ulonglong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong *local_e8;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined3 uStack_d4;
  undefined4 local_d0;
  undefined3 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined2 local_95;
  undefined1 local_93;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar4 = *param_4;
  uStack_b0 = DAT_14ca83a40;
  uStack_c0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_b8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_96 = 0;
  local_c8 = (undefined8 *)0x9;
  local_95 = 3;
  local_9c = 0x10001;
  local_98 = 0x101;
  local_a8 = 0;
  local_93 = 0xff;
  iVar8 = (int)*(undefined8 *)(lVar4 + 0x84);
  local_a4 = DAT_14ca84e40;
  if (iVar8 < DAT_14ca84e40) {
    local_a4 = iVar8;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  iVar8 = (int)((ulonglong)*(undefined8 *)(lVar4 + 0x84) >> 0x20);
  local_a0 = DAT_14ca84e40;
  if (iVar8 < DAT_14ca84e40) {
    local_a0 = iVar8;
  }
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar9 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar9 + 0x120;
  local_e8 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(puVar1,0x128);
    uVar9 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar6 = uVar9 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar9,L"DofNear",&local_c8,0);
  iVar8 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar8 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar8);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar8 * 8) = uVar9;
  *(int *)(uVar9 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar9 == 0) {
    local_128 = 0;
  }
  else {
    local_128 = *(ulonglong *)(uVar9 + 0x84);
  }
  uVar5 = *(undefined8 *)(param_3 + 0x13818);
  local_120 = puVar1;
  FUN_146080a2a();
  FUN_1448e935e(uVar5,&local_c8,&DAT_14ca2db78,0);
  FUN_146080a2a();
  local_f8 = local_c8;
  local_f0 = uStack_c0;
  FUN_1448c58dc(param_3,&local_c8);
  local_100 = local_c8;
  uStack_cc = (undefined3)((ulonglong)uStack_c0 >> 0x28);
  local_d8._0_3_ = (undefined3)((uint)uStack_b0 >> 8);
  local_d8._3_1_ = (undefined1)uStack_ac;
  uStack_d4 = (undefined3)(uStack_ac >> 8);
  iVar8 = *(int *)(lVar4 + 0x88);
  local_12a = (undefined1)uStack_c0;
  iVar2 = *(int *)(lVar4 + 0x84);
  local_108 = uStack_b8;
  local_129 = (undefined1)uStack_b0;
  lVar4 = param_4[3];
  uVar5 = *(undefined8 *)(param_3 + 0x13818);
  local_d0 = uStack_c0._1_4_;
  FUN_145e91be6();
  FUN_1448e935e(uVar5,&local_c8,&DAT_14ca2dca0,(char)lVar4);
  FUN_145e91be6();
  puVar1 = local_120;
  local_118 = local_c8;
  local_110 = uStack_c0;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar10 + 0x28;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(local_120,0x150);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar10 + 0x28;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar10 = &PTR_FUN_14a2c45e8;
  puVar7 = puVar10 + 2;
  FUN_1472a4254(puVar7);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar10;
  puVar10[8] = uVar9;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 10) = 0xffff0002;
  FUN_1448c58dc(param_3,&local_c8);
  *(undefined4 *)(puVar10 + 4) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_b8._4_4_;
  *(undefined4 *)(puVar10 + 5) = uStack_b0;
  *(uint *)((longlong)puVar10 + 0x2c) = uStack_ac;
  *(undefined4 *)puVar7 = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_c8._4_4_;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_c0._4_4_;
  puVar10[6] = *param_4;
  puVar10[7] = DAT_14c9c0d80;
  uVar5 = *(undefined8 *)(uVar9 + 0x84);
  FUN_145e91e54();
  FUN_140069376(param_2);
  puVar1 = local_120;
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar11 + 0x48;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_120,0x250);
    puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar11 + 0x48;
  }
  *puVar1 = (ulonglong)puVar10;
  uStack_c0 = DAT_14ca32d20;
  if (DAT_14ca32d20 != 0) {
    LOCK();
    *(int *)(DAT_14ca32d20 + 8) = *(int *)(DAT_14ca32d20 + 8) + 1;
    UNLOCK();
  }
  uStack_b8 = &DAT_14ca32cd8;
  local_138 = 1;
  local_c8 = puVar7;
  FUN_140068f1a(puVar11,&local_d9,&local_c8,1);
  uVar6 = local_128;
  *puVar11 = &PTR_FUN_14a2c45f0;
  puVar11[0x38] = local_f8;
  puVar11[0x39] = local_f0;
  puVar11[0x3a] = local_100;
  *(undefined1 *)(puVar11 + 0x3b) = local_12a;
  *(undefined4 *)((longlong)puVar11 + 0x1d9) = local_d0;
  *(uint *)((longlong)puVar11 + 0x1dc) = CONCAT31(uStack_cc,local_d0._3_1_);
  puVar11[0x3c] = local_108;
  *(undefined1 *)(puVar11 + 0x3d) = local_129;
  *(undefined4 *)((longlong)puVar11 + 0x1e9) = local_d8;
  *(uint *)((longlong)puVar11 + 0x1ec) = CONCAT31(uStack_d4,local_d8._3_1_);
  *(float *)(puVar11 + 0x3e) = (float)iVar2;
  *(float *)((longlong)puVar11 + 500) = (float)iVar8;
  *(float *)(puVar11 + 0x3f) = 1.0 / (float)iVar2;
  *(float *)((longlong)puVar11 + 0x1fc) = 1.0 / (float)iVar8;
  puVar11[0x40] = local_118;
  puVar11[0x41] = local_110;
  puVar11[0x42] = puVar7;
  puVar11[0x43] = uVar5;
  puVar11[0x44] = 0;
  puVar11[0x45] = local_128;
  puVar11[0x46] = param_3;
  iVar8 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar8 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar8 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar11);
  *local_e8 = uVar9;
  local_e8[1] = 0;
  local_e8[2] = uVar6;
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efd4ad FUN_142efd4ad body=1522 status=ok
// SIG undefined FUN_142efd4ad(void)

void FUN_142efd4ad(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_122;
  undefined1 local_121;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong *local_e8;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined3 uStack_d4;
  undefined4 local_d0;
  undefined3 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined2 local_95;
  undefined1 local_93;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar4 = *param_4;
  uStack_b0 = DAT_14ca83a40;
  uStack_c0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_b8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uStack_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_96 = 0;
  local_c8 = (undefined8 *)0x9;
  local_95 = 10;
  local_9c = 0x10001;
  local_98 = 0x101;
  local_a8 = 0;
  local_93 = 0xff;
  iVar8 = (int)*(undefined8 *)(lVar4 + 0x84);
  local_a4 = DAT_14ca84e40;
  if (iVar8 < DAT_14ca84e40) {
    local_a4 = iVar8;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  iVar8 = (int)((ulonglong)*(undefined8 *)(lVar4 + 0x84) >> 0x20);
  local_a0 = DAT_14ca84e40;
  if (iVar8 < DAT_14ca84e40) {
    local_a0 = iVar8;
  }
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar10 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar6 = uVar10 + 0x120;
  local_e8 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar6) {
    FUN_140023dd8(puVar1,0x128);
    uVar10 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar6 = uVar10 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar6;
  FUN_1456bbb8c(uVar10,L"DofBlur",&local_c8,0);
  iVar8 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar8 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar8);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar8 * 8) = uVar10;
  *(int *)(uVar10 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if (uVar10 == 0) {
    local_120 = 0;
  }
  else {
    local_120 = *(ulonglong *)(uVar10 + 0x84);
  }
  uVar5 = *(undefined8 *)(param_3 + 0x13818);
  FUN_146080c90();
  FUN_1448e935e(uVar5,&local_c8,&DAT_14ca2def0,0);
  FUN_146080c90();
  local_f8 = local_c8;
  local_f0 = uStack_c0;
  FUN_1448c58dc(param_3,&local_c8);
  local_100 = local_c8;
  local_121 = (undefined1)uStack_c0;
  uStack_cc = (undefined3)((ulonglong)uStack_c0 >> 0x28);
  local_108 = uStack_b8;
  local_122 = (undefined1)uStack_b0;
  local_d8._0_3_ = (undefined3)((uint)uStack_b0 >> 8);
  local_d8._3_1_ = (undefined1)uStack_ac;
  uStack_d4 = (undefined3)(uStack_ac >> 8);
  iVar8 = *(int *)(lVar4 + 0x88);
  iVar2 = *(int *)(lVar4 + 0x84);
  uVar5 = *(undefined8 *)(param_3 + 0x13818);
  local_d0 = uStack_c0._1_4_;
  FUN_145e74046();
  FUN_1448e935e(uVar5,&local_c8,&DAT_14ca2ddc8,0);
  FUN_145e74046();
  local_118 = local_c8;
  local_110 = uStack_c0;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar9 + 0x2a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x160);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar9 + 0x2a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar9 = &PTR_FUN_14a2c4608;
  puVar7 = puVar9 + 2;
  FUN_1472a42f0(puVar7);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar9;
  puVar9[10] = uVar10;
  puVar9[0xb] = 0;
  *(undefined4 *)(puVar9 + 0xc) = 0xffff0002;
  FUN_1448c58dc(param_3,&local_c8);
  *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_b8._4_4_;
  *(undefined4 *)(puVar9 + 5) = uStack_b0;
  *(uint *)((longlong)puVar9 + 0x2c) = uStack_ac;
  *(undefined4 *)puVar7 = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_c8._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_c0._4_4_;
  puVar9[8] = *param_4;
  uVar5 = DAT_14c9c0de0;
  puVar9[9] = DAT_14c9c0de0;
  puVar9[6] = param_4[3];
  puVar9[7] = uVar5;
  uVar5 = *(undefined8 *)(uVar10 + 0x84);
  FUN_145e742b4();
  FUN_140069376(param_2);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar11 + 0x48;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x250);
    puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar11 + 0x48;
  }
  *puVar1 = (ulonglong)puVar9;
  uStack_c0 = DAT_14ca32da8;
  if (DAT_14ca32da8 != 0) {
    LOCK();
    *(int *)(DAT_14ca32da8 + 8) = *(int *)(DAT_14ca32da8 + 8) + 1;
    UNLOCK();
  }
  uStack_b8 = &DAT_14ca32d60;
  local_138 = 1;
  local_c8 = puVar7;
  FUN_140068f1a(puVar11,&local_d9,&local_c8,1);
  uVar6 = local_120;
  *puVar11 = &PTR_FUN_14a2c4610;
  puVar11[0x38] = local_f8;
  puVar11[0x39] = local_f0;
  puVar11[0x3a] = local_100;
  *(undefined1 *)(puVar11 + 0x3b) = local_121;
  *(undefined4 *)((longlong)puVar11 + 0x1d9) = local_d0;
  *(uint *)((longlong)puVar11 + 0x1dc) = CONCAT31(uStack_cc,local_d0._3_1_);
  puVar11[0x3c] = local_108;
  *(undefined1 *)(puVar11 + 0x3d) = local_122;
  *(undefined4 *)((longlong)puVar11 + 0x1e9) = local_d8;
  *(uint *)((longlong)puVar11 + 0x1ec) = CONCAT31(uStack_d4,local_d8._3_1_);
  *(float *)(puVar11 + 0x3e) = (float)iVar2;
  *(float *)((longlong)puVar11 + 500) = (float)iVar8;
  *(float *)(puVar11 + 0x3f) = 1.0 / (float)iVar2;
  *(float *)((longlong)puVar11 + 0x1fc) = 1.0 / (float)iVar8;
  puVar11[0x40] = local_118;
  puVar11[0x41] = local_110;
  puVar11[0x42] = puVar7;
  puVar11[0x43] = uVar5;
  puVar11[0x44] = 0;
  puVar11[0x45] = local_120;
  puVar11[0x46] = param_3;
  iVar8 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar8 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar8 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar11);
  *local_e8 = uVar10;
  local_e8[1] = 0;
  local_e8[2] = uVar6;
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efdab8 FUN_142efdab8 body=1374 status=ok
// SIG undefined FUN_142efdab8(void)

longlong * FUN_142efdab8(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_162;
  undefined1 local_161;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e0;
  undefined3 uStack_dc;
  undefined4 local_d8;
  undefined3 uStack_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar5 = param_4[3];
  lVar6 = *param_4;
  local_118 = param_4[1];
  local_120 = param_4[2];
  local_128 = param_1;
  local_160 = FUN_14472bf7a(param_2,lVar6 + 0x60,L"IntegrateDof",0);
  uVar7 = *(undefined8 *)(param_3 + 0x13818);
  FUN_146080ef6();
  FUN_1448e935e(uVar7,&local_108,&DAT_14ca2e140,0);
  FUN_146080ef6();
  local_138 = local_108;
  local_130 = uStack_100;
  FUN_1448c58dc(param_3,&local_108);
  local_140 = local_108;
  local_161 = (undefined1)uStack_100;
  uStack_d4 = (undefined3)((ulonglong)uStack_100 >> 0x28);
  local_e0._0_3_ = (undefined3)((uint)uStack_f0 >> 8);
  local_e0._3_1_ = (undefined1)uStack_ec;
  uStack_dc = (undefined3)((uint)uStack_ec >> 8);
  iVar2 = *(int *)(lVar6 + 0x88);
  local_148 = local_f8;
  iVar3 = *(int *)(lVar6 + 0x84);
  local_162 = (undefined1)uStack_f0;
  fVar11 = (float)*(int *)(lVar5 + 0x88);
  fVar12 = (float)*(int *)(lVar5 + 0x84);
  uVar7 = *(undefined8 *)(param_3 + 0x13818);
  local_d8 = uStack_100._1_4_;
  FUN_145f33348();
  FUN_1448e935e(uVar7,&local_108,&DAT_14ca2e018,0);
  FUN_145f33348();
  local_158 = local_108;
  local_150 = uStack_100;
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar9 + 0x2c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x170);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar9 + 0x2c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  *puVar9 = &PTR_FUN_14a2c4628;
  puVar8 = puVar9 + 2;
  FUN_1472a4390(puVar8);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  lVar5 = local_160;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar9;
  puVar9[0xc] = local_160;
  puVar9[0xd] = 0;
  *(undefined4 *)(puVar9 + 0xe) = 0xffff0002;
  FUN_1448c58dc(param_3,&local_108);
  *(undefined4 *)(puVar9 + 4) = (undefined4)local_f8;
  *(undefined4 *)((longlong)puVar9 + 0x24) = local_f8._4_4_;
  *(undefined4 *)(puVar9 + 5) = uStack_f0;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_ec;
  *(undefined4 *)puVar8 = (undefined4)local_108;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_108._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_100._4_4_;
  puVar9[6] = *param_4;
  uVar7 = DAT_14c9c0de0;
  puVar9[7] = DAT_14c9c0de0;
  puVar9[8] = param_4[3];
  puVar9[9] = uVar7;
  puVar9[10] = param_4[6];
  puVar9[0xb] = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + 0x84);
  FUN_145f335b6();
  FUN_140069376(param_2);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 0x4a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x260);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar10 + 0x4a;
  }
  lVar5 = local_118;
  *puVar1 = (ulonglong)puVar9;
  uStack_100 = DAT_14ca32eb8;
  if (DAT_14ca32eb8 != 0) {
    LOCK();
    *(int *)(DAT_14ca32eb8 + 8) = *(int *)(DAT_14ca32eb8 + 8) + 1;
    UNLOCK();
  }
  local_f8 = &DAT_14ca32e70;
  local_178 = 1;
  local_108 = puVar8;
  FUN_140068f1a(puVar10,&local_109,&local_108,1);
  lVar6 = local_120;
  *puVar10 = &PTR_FUN_14a2c4630;
  puVar10[0x38] = local_138;
  puVar10[0x39] = local_130;
  puVar10[0x3a] = local_140;
  *(undefined1 *)(puVar10 + 0x3b) = local_161;
  *(undefined4 *)((longlong)puVar10 + 0x1d9) = local_d8;
  *(uint *)((longlong)puVar10 + 0x1dc) = CONCAT31(uStack_d4,local_d8._3_1_);
  puVar10[0x3c] = local_148;
  *(undefined1 *)(puVar10 + 0x3d) = local_162;
  *(undefined4 *)((longlong)puVar10 + 0x1e9) = local_e0;
  *(uint *)((longlong)puVar10 + 0x1ec) = CONCAT31(uStack_dc,local_e0._3_1_);
  *(float *)(puVar10 + 0x3e) = (float)iVar3;
  *(float *)((longlong)puVar10 + 500) = (float)iVar2;
  *(float *)(puVar10 + 0x3f) = 1.0 / (float)iVar3;
  *(float *)((longlong)puVar10 + 0x1fc) = 1.0 / (float)iVar2;
  *(float *)(puVar10 + 0x40) = fVar12;
  *(float *)((longlong)puVar10 + 0x204) = fVar11;
  *(float *)(puVar10 + 0x41) = 1.0 / fVar12;
  *(float *)((longlong)puVar10 + 0x20c) = 1.0 / fVar11;
  puVar10[0x42] = local_158;
  puVar10[0x43] = local_150;
  puVar10[0x44] = puVar8;
  puVar10[0x45] = uVar7;
  puVar10[0x46] = lVar5;
  puVar10[0x47] = local_120;
  puVar10[0x48] = param_3;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar10);
  *local_128 = local_160;
  local_128[1] = lVar5;
  local_128[2] = lVar6;
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return local_128;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efe03b FUN_142efe03b body=1885 status=ok
// SIG undefined FUN_142efe03b(void)

undefined8 * FUN_142efe03b(longlong param_1,longlong param_2,void *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_d8 [32];
  int *local_b8;
  longlong local_a8;
  void *local_a0;
  undefined8 *local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_55;
  int local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = 0x40;
  if ((char)param_4[3] != '\0') {
    uVar9 = 2;
  }
  uVar10 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar10 = DAT_14ca84e48;
  }
  uStack_70 = 0x4109;
  local_78 = uVar10 + (uVar10 == 0);
  local_68 = 0;
  if (DAT_14ca84e48 <= uVar9) {
    uVar9 = DAT_14ca84e48;
  }
  iStack_74 = uVar9 + (uVar9 == 0);
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar11 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar7 = uVar11 + 0x150;
  local_a0 = param_3;
  if (*(ulonglong *)(param_1 + 0x78) < uVar7) {
    FUN_140023dd8(plVar1,0x160);
    uVar11 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar7 = uVar11 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar7;
  FUN_1456bd266(uVar11,L"EyeAdaptationSetupBuffer",&local_78,0);
  iVar2 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar2 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 8) = uVar11;
  *(int *)(uVar11 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar12 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x50);
    puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar12[1] = *(undefined8 *)(uVar11 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 3;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *puVar12 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar12 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000000;
  puVar12[7] = 0;
  puVar12[8] = uVar11;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x48);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar13[1] = *(undefined8 *)(uVar11 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 2;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar13 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
  puVar13[7] = uVar11;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar13,0,2);
  lVar4 = *param_4;
  if ((char)param_4[3] == '\x01') {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar14 + 0x1a;
    local_a8 = param_2;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8(plVar1,0xe0);
      puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar14 + 0x1a;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    *puVar14 = &PTR_FUN_14a2c4670;
    puVar14[2] = 0;
    puVar14[3] = 0x3f80000000000000;
    puVar14[0x13] = 0;
    puVar14[0x14] = 0;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    puVar14[0x18] = 0;
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar14;
    iVar2 = *(int *)(lVar4 + 0x88);
    iVar3 = *(int *)(lVar4 + 0x84);
    *(float *)(puVar14 + 2) = (float)iVar3;
    *(float *)((longlong)puVar14 + 0x14) = (float)iVar2;
    *(float *)(puVar14 + 3) = 1.0 / (float)iVar3;
    *(float *)((longlong)puVar14 + 0x1c) = 1.0 / (float)iVar2;
    puVar14[0x16] = DAT_14c9c0de0;
    puVar14[0x17] = *param_4;
    memcpy(puVar14 + 4,local_a0,0x88);
    puVar14[0x18] = puVar13;
    uVar5 = *(undefined8 *)(local_a8 + 0x13818);
    FUN_145e745b4();
    FUN_1448e935e(uVar5,&local_78,&DAT_14ca2e270,0);
    FUN_145e745b4();
    local_50 = (*(int *)(lVar4 + 0x88) + DAT_14ca2e204 + -1) / DAT_14ca2e204;
    local_54 = (DAT_14ca2e200 + *(int *)(lVar4 + 0x84) + -1) / DAT_14ca2e200;
    local_b8 = &local_54;
    local_4c = 1;
    FUN_1472972e6(param_1,&local_55,&local_78,puVar14 + 2);
  }
  else if (*(char *)((longlong)param_4 + 0x19) == '\x01') {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar14 + 0x1e;
    local_a8 = param_2;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8(plVar1,0x100);
      puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar14 + 0x1e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    *puVar14 = &PTR_FUN_14a2c4698;
    local_98 = puVar14 + 2;
    puVar14[2] = 0;
    *(undefined1 *)(puVar14 + 3) = 1;
    puVar14[4] = 0;
    *(undefined1 *)(puVar14 + 5) = 1;
    puVar14[6] = 0;
    puVar14[7] = 0x3f80000000000000;
    puVar14[0x17] = 0;
    puVar14[0x18] = 0;
    puVar14[0x1a] = 0;
    puVar14[0x1b] = 0;
    puVar14[0x1c] = 0;
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
    }
    lVar6 = local_a8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar14;
    FUN_1448c58dc(local_a8,&local_78);
    puVar8 = local_98;
    local_98[2] = local_68;
    local_98[3] = uStack_60;
    *local_98 = CONCAT44(iStack_74,local_78);
    local_98[1] = CONCAT44(uStack_6c,uStack_70);
    iVar2 = *(int *)(lVar4 + 0x88);
    iVar3 = *(int *)(lVar4 + 0x84);
    *(float *)(puVar14 + 6) = (float)iVar3;
    *(float *)((longlong)puVar14 + 0x34) = (float)iVar2;
    *(float *)(puVar14 + 7) = 1.0 / (float)iVar3;
    *(float *)((longlong)puVar14 + 0x3c) = 1.0 / (float)iVar2;
    puVar14[0x1b] = *param_4;
    puVar14[0x1a] = DAT_14c9c0de0;
    puVar14[0x1c] = puVar13;
    memcpy(puVar14 + 8,local_a0,0x88);
    if (DAT_14ca84e58 < 0x8000) {
      uVar5 = *(undefined8 *)(lVar6 + 0x13818);
      FUN_14608115c();
      FUN_1448e935e(uVar5,&local_78,&DAT_14ca2e3a8,0);
      FUN_14608115c();
      local_80 = (*(int *)(lVar4 + 0x88) + DAT_14ca2e334 + -1) / DAT_14ca2e334;
      local_84 = (DAT_14ca2e330 + *(int *)(lVar4 + 0x84) + -1) / DAT_14ca2e330;
      local_b8 = &local_84;
      local_7c = 1;
      FUN_147297398(param_1,&local_55,&local_78,puVar8);
    }
    else {
      uVar5 = *(undefined8 *)(lVar6 + 0x13818);
      FUN_1460813c2();
      FUN_1448e935e(uVar5,&local_78,&DAT_14ca2e4d0,0);
      FUN_1460813c2();
      local_8c = (*(int *)(lVar4 + 0x88) + DAT_14ca2e33c + -1) / DAT_14ca2e33c;
      local_90 = (DAT_14ca2e338 + *(int *)(lVar4 + 0x84) + -1) / DAT_14ca2e338;
      local_b8 = &local_90;
      local_88 = 1;
      FUN_14729744a(param_1,&local_55,&local_78,puVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efe7b1 FUN_142efe7b1 body=1440 status=ok
// SIG undefined FUN_142efe7b1(void)

void FUN_142efe7b1(longlong param_1,longlong param_2,void *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  void *local_98;
  undefined8 *local_90;
  undefined1 *local_84;
  undefined4 local_7c;
  undefined1 local_75;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = *(longlong *)(param_2 + 0x30d8);
  local_98 = param_3;
  if (lVar7 != 0) {
    if ((*(char *)(lVar7 + 0x664) == '\x01') && ((*(byte *)(lVar7 + 8) & 2) != 0)) {
      FUN_1401b3b5c(lVar7 + 0x668);
      lVar7 = *(longlong *)(param_2 + 0x30d8);
      if (lVar7 == 0) goto LAB_142efe837;
    }
    iVar4 = *(int *)(lVar7 + 0x668);
    *(uint *)(lVar7 + 0x668) = (iVar4 - ((iVar4 - (iVar4 + 1 >> 0x1f)) + 1U & 0xfffffffe)) + 1;
  }
LAB_142efe837:
  lVar7 = param_4[1];
  cVar3 = *(char *)(lVar7 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x50);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar10[1] = *(undefined8 *)(lVar7 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar10 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar7;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  lVar7 = *(longlong *)(param_2 + 0x30d8);
  if (lVar7 == 0) {
    local_68 = (undefined8 *)0x0;
  }
  else {
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 2;
    plVar6 = (longlong *)FUN_14038414c(lVar7 + 0x668,param_1,*(undefined4 *)(lVar7 + 0x668));
    local_68 = (undefined8 *)*plVar6;
    if (local_68 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
    }
  }
  local_90 = param_4;
  lVar7 = FUN_144735dd8(param_1,&local_68,1);
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_68 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
  cVar3 = *(char *)(lVar7 + 0x68);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x48);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar7 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 2;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar11 + 5) = 0;
  *puVar11 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar11 + 6) = cVar3 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar11 + 0x31) = 0;
  puVar11[7] = lVar7;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar4);
  }
  puVar8 = local_90;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(local_90 + 2) == '\x01') {
    puVar8 = puVar12 + 0x1c;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8(plVar1,0xf0);
      puVar12 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar12 + 0x1c;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    *puVar12 = &PTR_FUN_14a2c46d8;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 1;
    puVar12[4] = 0;
    *(undefined1 *)(puVar12 + 5) = 1;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[0x18] = 0;
    puVar12[0x19] = 0;
    puVar12[0x1a] = 0;
    iVar4 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar12;
    memcpy(puVar12 + 6,local_98,0x88);
    FUN_1448c58dc(param_2,&local_68);
    *(undefined4 *)(puVar12 + 4) = local_58;
    *(undefined4 *)((longlong)puVar12 + 0x24) = uStack_54;
    *(undefined4 *)(puVar12 + 5) = uStack_50;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_4c;
    *(undefined4 *)(puVar12 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar12 + 0x14) = local_68._4_4_;
    *(undefined4 *)(puVar12 + 3) = uStack_60;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_5c;
    puVar12[0x18] = puVar10;
    puVar12[0x19] = *local_90;
    puVar12[0x1a] = puVar11;
    uVar5 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145f3393c();
    FUN_1448e935e(uVar5,&local_68,&DAT_14ca2e5f8,0);
    FUN_145f3393c();
    local_a8 = &local_74;
    local_74 = &DAT_100000001;
    local_6c = 1;
    FUN_147297768(param_1,&local_75,&local_68,puVar12 + 2);
  }
  else {
    puVar9 = puVar12 + 0x18;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0xd0);
      puVar12 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar12 + 0x18;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    *puVar12 = &PTR_FUN_14a2c46f8;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    iVar4 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar12;
    memcpy(puVar12 + 2,local_98,0x88);
    puVar12[0x14] = puVar10;
    puVar12[0x15] = *puVar8;
    puVar12[0x16] = puVar11;
    uVar5 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145e92156();
    FUN_1448e935e(uVar5,&local_68,&DAT_14ca2e720,0);
    FUN_145e92156();
    local_a8 = &local_84;
    local_84 = &DAT_100000001;
    local_7c = 1;
    FUN_14729781a(param_1,&local_75,&local_68,puVar12 + 2);
  }
  lVar7 = *(longlong *)(param_2 + 0x30d8);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x664) == '\x01')) && ((*(byte *)(lVar7 + 8) & 2) != 0)) {
    FUN_1402592f2(lVar7 + 0x668,param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142efed52 FUN_142efed52 body=69 status=ok
// SIG undefined FUN_142efed52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efed52(void)

{
  _DAT_14ca2e7e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efed94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e7e8,1);
  return;
}



// FUNCTION 142efed97 FUN_142efed97 body=69 status=ok
// SIG undefined FUN_142efed97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efed97(void)

{
  _DAT_14ca2e7f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efedd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e800,1);
  return;
}



// FUNCTION 142efeddc FUN_142efeddc body=69 status=ok
// SIG undefined FUN_142efeddc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efeddc(void)

{
  _DAT_14ca2e810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efee1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e818,1);
  return;
}



// FUNCTION 142efee21 FUN_142efee21 body=69 status=ok
// SIG undefined FUN_142efee21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efee21(void)

{
  _DAT_14ca2e828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efee63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e830,1);
  return;
}



// FUNCTION 142efee66 FUN_142efee66 body=69 status=ok
// SIG undefined FUN_142efee66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efee66(void)

{
  _DAT_14ca2e840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efeea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e848,1);
  return;
}



// FUNCTION 142efeeab FUN_142efeeab body=69 status=ok
// SIG undefined FUN_142efeeab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efeeab(void)

{
  _DAT_14ca2e858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efeeed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e860,1);
  return;
}



// FUNCTION 142efeef0 FUN_142efeef0 body=69 status=ok
// SIG undefined FUN_142efeef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efeef0(void)

{
  _DAT_14ca2e870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efef32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e878,1);
  return;
}



// FUNCTION 142efef35 FUN_142efef35 body=69 status=ok
// SIG undefined FUN_142efef35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efef35(void)

{
  _DAT_14ca2e888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efef77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e890,1);
  return;
}



// FUNCTION 142efef7a FUN_142efef7a body=69 status=ok
// SIG undefined FUN_142efef7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efef7a(void)

{
  _DAT_14ca2e8a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142efefbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e8a8,1);
  return;
}



// FUNCTION 142efefbf FUN_142efefbf body=69 status=ok
// SIG undefined FUN_142efefbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142efefbf(void)

{
  _DAT_14ca2e8b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eff001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e8c0,1);
  return;
}



// FUNCTION 142eff004 FUN_142eff004 body=69 status=ok
// SIG undefined FUN_142eff004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eff004(void)

{
  _DAT_14ca2e8d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eff046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e8d8,1);
  return;
}



// FUNCTION 142eff049 FUN_142eff049 body=69 status=ok
// SIG undefined FUN_142eff049(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eff049(void)

{
  _DAT_14ca2e8e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142eff08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2e8f0,1);
  return;
}



// FUNCTION 142eff0f1 FUN_142eff0f1 body=47 status=ok
// SIG undefined FUN_142eff0f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eff0f1(void)

{
  _DAT_14ca2f240 = &PTR_FUN_14a2c4720;
  FUN_144725486(&DAT_14ca2f240);
  FUN_14003f39a(&DAT_14ca2f240);
  return;
}



// FUNCTION 142eff120 FUN_142eff120 body=9040 status=ok
// SIG undefined FUN_142eff120(void)

undefined8 *
FUN_142eff120(undefined8 *param_1,longlong param_2,longlong param_3,byte *param_4,longlong param_5,
             longlong param_6,undefined8 param_7,undefined4 *param_8,longlong param_9,int *param_10,
             int param_11)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined2 uVar22;
  ulonglong uVar23;
  undefined1 **ppuVar24;
  undefined8 *puVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_3d8 [32];
  undefined1 **local_3b8;
  int local_3b0;
  undefined1 **local_3a8;
  longlong *local_398;
  int *local_390;
  ulonglong local_388;
  undefined8 *local_380;
  longlong local_378;
  byte *local_370;
  undefined1 **local_368;
  longlong local_360;
  uint local_354;
  int local_350;
  int local_34c;
  longlong *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 *local_330;
  longlong local_328;
  ulonglong local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e5;
  int local_2e4;
  int local_2e0;
  undefined1 local_2dc;
  undefined1 local_2db;
  undefined1 local_2da;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  int local_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_248 [14];
  undefined8 local_1d8 [14];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 *local_130;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5 [13];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c0;
  
  plVar18 = DAT_14ca27dc8;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_34c = *(int *)(DAT_14ca2e838 + 4);
  local_350 = *(int *)(&DAT_14a2be420 + (longlong)param_11 * 4);
  iVar28 = *(int *)(param_5 + 0x14) - *(int *)(param_5 + 0xc);
  iVar9 = iVar28 + 0xf;
  iVar28 = iVar28 + 0x1e;
  if (-1 < iVar9) {
    iVar28 = iVar9;
  }
  iVar21 = *(int *)(param_5 + 0x10) - *(int *)(param_5 + 8);
  iVar28 = iVar28 >> 4;
  iVar9 = iVar21 + 0xf;
  iVar21 = iVar21 + 0x1e;
  if (-1 < iVar9) {
    iVar21 = iVar9;
  }
  iVar21 = iVar21 >> 4;
  local_370 = param_4;
  local_360 = param_3;
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    uVar12 = FUN_140052f36(DAT_14ca27dc8);
    if ((int)uVar12 == 0) {
      plVar18 = plVar18 + 0xb;
    }
    else {
      plVar18 = (longlong *)plVar18[10];
    }
    local_338 = CONCAT71((int7)((ulonglong)uVar12 >> 8),(char)*plVar18);
  }
  else {
    local_338 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  local_320 = (ulonglong)(uint)(iVar21 * iVar28);
  uVar16 = iVar21 * iVar28 * 5;
  uVar19 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar19 = DAT_14ca84e48;
  }
  uStack_2b0 = 0x10109;
  local_2b8 = uVar19 + (uVar19 == 0);
  local_2a8 = 0;
  uVar19 = DAT_14ca84e48;
  if (uVar16 < DAT_14ca84e48) {
    uVar19 = uVar16;
  }
  iStack_2b4 = uVar19 + (uVar19 == 0);
  plVar18 = (longlong *)(param_2 + 0x70);
  uVar23 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar23 + 0x150;
  local_398 = plVar18;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(plVar18,0x160);
    uVar23 = *plVar18 + 0xfU & 0xfffffffffffffff0;
    uVar14 = uVar23 + 0x150;
  }
  local_378 = param_2 + 0x188;
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar23,L"MotionBlur.TileOffsets",&local_2b8,0);
  iVar9 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar9 + 1U) {
    FUN_144737178(local_378,iVar9);
  }
  plVar18 = local_398;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar9 * 8) = uVar23;
  *(int *)(uVar23 + 0x7c) = *(int *)(param_2 + 400) + -1;
  uVar16 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar16 = DAT_14ca84e48;
  }
  local_2b8 = uVar16 + (uVar16 == 0);
  uVar16 = 5;
  if (DAT_14ca84e48 < 5) {
    uVar16 = DAT_14ca84e48;
  }
  uStack_2b0 = 0x10109;
  local_2a8 = 0;
  iStack_2b4 = uVar16 + (uVar16 == 0);
  uVar30 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar14 = uVar30 + 0x150;
  local_388 = uVar23;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_398,0x160);
    uVar30 = *plVar18 + 0xfU & 0xfffffffffffffff0;
    uVar14 = uVar30 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bd266(uVar30,L"MotionBlur.TileCounters",&local_2b8,0);
  iVar9 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar9 + 1U) {
    FUN_144737178(local_378,iVar9);
  }
  plVar18 = local_398;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar9 * 8) = uVar30;
  *(int *)(uVar30 + 0x7c) = *(int *)(param_2 + 400) + -1;
  cVar8 = *(char *)(uVar30 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar25 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_398,0x48);
    puVar25 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar25 + 8;
  }
  local_390 = (int *)(param_2 + 0x198);
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar25[1] = *(undefined8 *)(uVar30 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar8 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = uVar30;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  FUN_1405bfba3(param_2,puVar25,0,2);
  plVar18 = local_398;
  puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar25 + 0xe;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_398,0x80);
    puVar25 = (undefined8 *)(*plVar18 + 0xfU & 0xfffffffffffffff0);
    puVar15 = puVar25 + 0xe;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  *puVar25 = &PTR_FUN_14a2c4818;
  local_348 = (longlong *)(param_2 + 0x98);
  puVar25[8] = 0;
  puVar25[9] = 0;
  puVar25[10] = 0;
  puVar25[0xb] = 0;
  puVar25[0xc] = 0;
  iVar9 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8(local_348,iVar9);
  }
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = puVar25;
  fVar32 = (float)((*(int *)(param_5 + 0x28) - *(int *)(param_5 + 0x20)) * 0x10) /
           (float)((*(int *)(param_5 + 0x10) - *(int *)(param_5 + 8)) * 0x10);
  fVar34 = DAT_14ca4ca80 + 0.5;
  fVar33 = DAT_14ca4ca7c + 0.5;
  fVar35 = DAT_14ca4ca78 * fVar32;
  *(float *)(puVar25 + 2) = fVar32 * DAT_14ca4ca74;
  *(float *)((longlong)puVar25 + 0x14) = fVar35;
  *(float *)(puVar25 + 3) = fVar33 * fVar32;
  *(float *)((longlong)puVar25 + 0x1c) = fVar34 * fVar32;
  puVar25[4] = CONCAT44(~*(uint *)(param_5 + 0x3c) + *(int *)(param_5 + 0x44),
                        ~*(uint *)(param_5 + 0x38) + *(int *)(param_5 + 0x40));
  puVar25[5] = CONCAT44(iVar28,iVar21);
  *(int *)((longlong)puVar25 + 0x34) = (int)local_320;
  *(float *)(puVar25 + 7) = (float)local_350 * (float)local_350;
  *(uint *)(puVar25 + 6) = (uint)(*(int *)(DAT_14ca2e868 + 4) != 0);
  uVar4 = param_8[1];
  uVar5 = param_8[2];
  uVar6 = param_8[3];
  *(undefined4 *)(puVar25 + 8) = *param_8;
  *(undefined4 *)((longlong)puVar25 + 0x44) = uVar4;
  *(undefined4 *)(puVar25 + 9) = uVar5;
  *(undefined4 *)((longlong)puVar25 + 0x4c) = uVar6;
  cVar8 = *(char *)(local_388 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_398,0x48);
    puVar20 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar20 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar20[1] = *(undefined8 *)(local_388 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 2;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar20 + 5) = 0;
  *puVar20 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar20 + 6) = cVar8 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar20 + 0x31) = 0;
  puVar20[7] = local_388;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar25[10] = puVar20;
  cVar8 = *(char *)(uVar30 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 8;
  local_330 = param_1;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_398,0x48);
    puVar20 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar20 + 8;
  }
  local_368 = (undefined1 **)(puVar25 + 2);
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar20[1] = *(undefined8 *)(uVar30 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 2;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar20 + 5) = 0;
  *puVar20 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar20 + 6) = cVar8 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar20 + 0x31) = 0;
  puVar20[7] = uVar30;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  bVar31 = local_34c < 2;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar25[0xb] = puVar20;
  puVar25[0xc] = 0;
  uVar12 = *(undefined8 *)(local_360 + 0x13818);
  FUN_145f33f30();
  FUN_1448e935e(uVar12,&local_2b8,&DAT_14ca2ee08,bVar31);
  FUN_145f33f30();
  local_120 = iVar28 + 0x1e;
  if (-1 < iVar28 + 0xf) {
    local_120 = iVar28 + 0xf;
  }
  local_120 = local_120 >> 4;
  local_124 = iVar21 + 0x1e;
  if (-1 < iVar21 + 0xf) {
    local_124 = iVar21 + 0xf;
  }
  local_124 = local_124 >> 4;
  local_3b8 = (undefined1 **)&local_124;
  local_11c = 1;
  FUN_147298638(param_2,&local_118,&local_2b8,local_368);
  plVar18 = local_398;
  uVar16 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar16 = DAT_14ca84e48;
  }
  local_2b8 = uVar16 + (uVar16 == 0);
  uVar16 = 5;
  if (DAT_14ca84e48 < 5) {
    uVar16 = DAT_14ca84e48;
  }
  uStack_2b0 = 0x4189;
  local_2a8 = 0;
  iStack_2b4 = uVar16 + (uVar16 == 0);
  ppuVar24 = (undefined1 **)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  ppuVar13 = ppuVar24 + 0x2a;
  if (*(undefined1 ***)(param_2 + 0x78) < ppuVar13) {
    FUN_140023dd8(local_398,0x160);
    ppuVar24 = (undefined1 **)(*plVar18 + 0xfU & 0xfffffffffffffff0);
    ppuVar13 = ppuVar24 + 0x2a;
  }
  *(undefined1 ***)(param_2 + 0x70) = ppuVar13;
  FUN_1456bd266(ppuVar24,L"MotionBlur.FilterDispatchParameters",&local_2b8,0);
  iVar9 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar9 + 1U) {
    FUN_144737178(local_378,iVar9);
  }
  plVar18 = local_398;
  *(undefined1 ***)(*(longlong *)(param_2 + 0x188) + (longlong)iVar9 * 8) = ppuVar24;
  *(int *)((longlong)ppuVar24 + 0x7c) = *(int *)(param_2 + 400) + -1;
  puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar15 = puVar25 + 4;
  local_368 = ppuVar24;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_398,0x30);
    puVar25 = (undefined8 *)(*plVar18 + 0xfU & 0xfffffffffffffff0);
    puVar15 = puVar25 + 4;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  *puVar25 = &PTR_FUN_14a2c4838;
  puVar25[2] = 0;
  puVar25[3] = 0;
  iVar9 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8(local_348,iVar9);
  }
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = puVar25;
  cVar8 = *(char *)(uVar30 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_398,0x50);
    puVar20 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar20 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar20[1] = *(undefined8 *)(uVar30 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar20 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = uVar30;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  ppuVar13 = local_368;
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar25[2] = puVar20;
  cVar8 = *(char *)(local_368 + 0xd);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar20 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    FUN_140023dd8(local_398,0x48);
    puVar20 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar20 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar15;
  puVar20[1] = ppuVar13[1];
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 2;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar20 + 5) = 0;
  *puVar20 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar20 + 6) = cVar8 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar20 + 0x31) = 0;
  puVar20[7] = ppuVar13;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar25[3] = puVar20;
  uVar12 = *(undefined8 *)(local_360 + 0x13818);
  FUN_145ed4d9a();
  FUN_1448e935e(uVar12,&local_2b8,&DAT_14ca2ef30,0);
  FUN_145ed4d9a();
  local_3b8 = &local_130;
  local_130 = &DAT_100000001;
  local_128 = 1;
  FUN_1472986ea(param_2,&local_118,&local_2b8,puVar25 + 2);
  puVar15 = local_330;
  plVar18 = local_398;
  local_330[6] = 0;
  local_330[7] = 0;
  local_330[4] = 0;
  local_330[5] = 0;
  local_330[2] = 0;
  local_330[3] = 0;
  *local_330 = 0;
  local_330[1] = 0;
  local_330[8] = 0;
  puVar25 = (undefined8 *)(param_5 + 0x50);
  piVar26 = &local_2b8;
  for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
    *(undefined8 *)piVar26 = *puVar25;
    puVar25 = puVar25 + 1;
    piVar26 = piVar26 + 2;
  }
  puVar25 = (undefined8 *)(param_5 + 0xc0);
  puVar20 = local_248;
  for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar20 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar20 = puVar20 + 1;
  }
  puVar25 = (undefined8 *)(param_5 + 0x130);
  puVar20 = local_1d8;
  for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar20 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar20 = puVar20 + 1;
  }
  local_168 = *(undefined8 *)(param_5 + 0x1a0);
  uStack_160 = *(undefined8 *)(param_5 + 0x1a8);
  local_378 = CONCAT44(local_378._4_4_,(uint)*local_370);
  local_354 = (uint)local_370[1];
  local_d8 = *param_8;
  uStack_d4 = param_8[1];
  uStack_d0 = param_8[2];
  uStack_cc = param_8[3];
  local_2f0 = DAT_14c9c0d80;
  cVar8 = *(char *)(local_388 + 0x68);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar25 = puVar20 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
    FUN_140023dd8(local_398,0x50);
    puVar20 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar25 = puVar20 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar25;
  puVar20[1] = *(undefined8 *)(local_388 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar20 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = local_388;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  cVar8 = *(char *)(uVar30 + 0x68);
  local_300 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar25 = local_300 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
    FUN_140023dd8(local_398,0x50);
    local_300 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar25 = local_300 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar25;
  local_300[1] = *(undefined8 *)(uVar30 + 8);
  local_300[2] = 0;
  *(undefined1 *)(local_300 + 3) = 3;
  *(undefined8 *)((longlong)local_300 + 0x1c) = 0xffffffffffffffff;
  *local_300 = &PTR_FUN_14a1fb168;
  *(byte *)(local_300 + 5) = cVar8 >> 7 & 0x1c;
  *(undefined8 *)((longlong)local_300 + 0x2c) = 0xffffffff00000000;
  local_300[7] = 0;
  local_300[8] = uVar30;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = local_300;
  *(int *)((longlong)local_300 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_388 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
  lVar17 = DAT_14ca2e8e0;
  local_308 = DAT_14c9c0de0;
  local_2f8 = puVar20;
  if (param_9 == 0) {
    local_328 = FUN_14476842e(param_2,&DAT_14ca63b30,L"BlackAlphaOneDummy",2);
    local_340 = DAT_14c9c0d80;
    local_2c8 = CONCAT44(DAT_14ca4ca78,DAT_14ca4ca74);
    uStack_2c0 = CONCAT44(DAT_14ca4ca80,DAT_14ca4ca7c);
    fVar36 = 0.0;
    local_370 = (byte *)((ulonglong)local_370 & 0xffffffff00000000);
    fVar37 = 0.0;
    fVar32 = 0.0;
    fVar35 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    local_158 = local_2c8;
    uStack_150 = uStack_2c0;
    local_148 = local_2c8;
    uStack_140 = uStack_2c0;
  }
  else {
    uVar12 = *(undefined8 *)(param_9 + 0x84);
    local_340 = DAT_14c9c0de0;
    if (*(int *)(param_5 + 0x14) - *(int *)(param_5 + 0xc) == param_10[1] &&
        *(int *)(param_5 + 0x10) - *(int *)(param_5 + 8) == *param_10) {
      local_340 = DAT_14c9c0d80;
    }
    iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar9 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar31 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar31 = DVar10 == DVar11;
        }
        else {
          bVar31 = false;
        }
      }
      uVar14 = (ulonglong)(bVar31 ^ 1);
    }
    lVar7 = local_360;
    fVar34 = 1.0 / (float)(int)((ulonglong)uVar12 >> 0x20);
    fVar33 = 1.0 / (float)(int)uVar12;
    local_328 = param_9;
    if (*(int *)(lVar17 + uVar14 * 4) == 1) {
      local_110 = *(undefined8 *)(local_360 + 0x30f8);
      uStack_108 = *(longlong **)(local_360 + 0x3100);
      local_118 = *(undefined1 **)(param_9 + 0x84);
      FUN_14177f7dc(&local_2c8,param_5,&local_118);
      local_3b8._0_4_ = 1;
      FUN_14473d930(&local_158,&local_118,&local_110,3);
      local_3b8 = (undefined1 **)CONCAT44(local_3b8._4_4_,3);
      FUN_14473d930(&local_2d8,&local_118,&local_110,1);
      local_148 = CONCAT44(uStack_2d4,local_2d8);
      uStack_140 = CONCAT44(uStack_2cc,uStack_2d0);
      fVar37 = (float)(int)((ulonglong)*(undefined8 *)(lVar7 + 0x30f8) >> 0x20) * fVar34;
      fVar32 = (float)(int)*(undefined8 *)(lVar7 + 0x30f8) * fVar33;
      fVar35 = ((float)(int)((ulonglong)*(undefined8 *)param_10 >> 0x20) + -0.5) * fVar34 + fVar37;
      fVar37 = fVar37 + 0.0;
      fVar36 = fVar32 + 0.0;
      fVar32 = ((float)(int)*(undefined8 *)param_10 + -0.5) * fVar33 + fVar32;
    }
    else {
      uStack_108 = *(longlong **)param_10;
      local_118 = *(undefined1 **)(param_9 + 0x84);
      local_110 = DAT_14c967818;
      FUN_14177f7dc(&local_2c8,param_5,&local_118);
      local_3b8._0_4_ = 1;
      FUN_14473d930(&local_2d8,&local_118,&local_110,3);
      local_158 = CONCAT44(uStack_2d4,local_2d8);
      uStack_150 = CONCAT44(uStack_2cc,uStack_2d0);
      local_3b8 = (undefined1 **)CONCAT44(local_3b8._4_4_,3);
      FUN_14473d930(&local_2d8,&local_118,&local_110,1);
      local_148 = CONCAT44(uStack_2d4,local_2d8);
      uStack_140 = CONCAT44(uStack_2cc,uStack_2d0);
      fVar35 = ((float)(int)((ulonglong)*(undefined8 *)param_10 >> 0x20) + -0.5) * fVar34;
      fVar32 = ((float)(int)*(undefined8 *)param_10 + -0.5) * fVar33;
      fVar36 = 0.0;
      fVar37 = 0.0;
    }
    pbVar2 = local_370 + 0xf0;
    lVar17 = *(longlong *)(local_370 + 0xf8);
    local_370 = (byte *)CONCAT44(local_370._4_4_,(uint)(lVar17 != 0 && *(longlong *)pbVar2 != 0));
    if (lVar17 != 0 && *(longlong *)pbVar2 != 0) {
      local_388 = lVar17;
    }
  }
  plVar18 = local_398;
  local_118 = (undefined1 *)(DAT_14ca4aeb8 | 0x20009);
  local_100 = DAT_14ca85098;
  local_110 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_108 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uVar12 = *(undefined8 *)(*(longlong *)(param_6 + 0x38) + 0x84);
  local_e6 = 0;
  iVar28 = (int)uVar12;
  iVar9 = DAT_14ca84e40;
  if (iVar28 < DAT_14ca84e40) {
    iVar9 = iVar28;
  }
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  iVar21 = (int)((ulonglong)uVar12 >> 0x20);
  iVar28 = DAT_14ca84e40;
  if (iVar21 < DAT_14ca84e40) {
    iVar28 = iVar21;
  }
  local_fc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_e5._1_2_ = 0xff00;
  local_e5[0] = (char)local_338 + '\t';
  local_ec = 0x10001;
  local_e8 = 0x101;
  local_f8 = 0;
  if (iVar28 < 2) {
    iVar28 = 1;
  }
  uStack_f4 = (undefined1 *)CONCAT44(iVar28,iVar9);
  uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar14 = uVar23 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
    FUN_140023dd8(local_398,0x128);
    uVar23 = *plVar18 + 7U & 0xfffffffffffffff8;
    uVar14 = uVar23 + 0x120;
  }
  local_380 = (undefined8 *)(param_2 + 0x178);
  *(ulonglong *)(param_2 + 0x70) = uVar14;
  FUN_1456bbb8c(uVar23,L"MotionBlur.SceneColor",&local_118,0);
  iVar9 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
    FUN_14472c0f6(local_380,iVar9);
  }
  plVar18 = local_398;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar23;
  *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  if ((*(char *)(uVar23 + 0x92) == '\x04') || (*(char *)(uVar23 + 0x92) == '\x01')) {
    uVar22 = *(undefined2 *)(uVar23 + 0x8e);
  }
  else {
    uVar22 = 0;
  }
  uVar3 = *(undefined1 *)(uVar23 + 0x90);
  puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar25 = puVar20 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
    FUN_140023dd8(local_398,0x48);
    puVar20 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar25 = puVar20 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar25;
  puVar20[1] = *(undefined8 *)(uVar23 + 8);
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 1;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar20 + 5) = 0;
  *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar22;
  *(undefined1 *)(puVar20 + 6) = 0;
  *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
  puVar20[7] = uVar23;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *puVar15 = puVar20;
  puVar15[1] = *(undefined8 *)(param_5 + 8);
  puVar15[2] = *(undefined8 *)(param_5 + 0x10);
  uVar3 = *(undefined1 *)(uVar23 + 0x94);
  puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar25 = puVar29 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
    FUN_140023dd8(local_398,0x50);
    puVar29 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
    puVar25 = puVar29 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar25;
  puVar29[1] = *(undefined8 *)(uVar23 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 0;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar29 + 5) = 1;
  *puVar29 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar29 + 6) = uVar3;
  *(undefined1 *)(puVar29 + 7) = 0;
  *(undefined4 *)((longlong)puVar29 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar29 + 0x35) = 0;
  puVar29[8] = uVar23;
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  if ((int)local_378 == 0) {
    local_100 = DAT_14ca85098;
    local_110 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_108 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_fc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_e6 = 0;
    local_118 = &DAT_00020008;
    local_ec = 0x10001;
    local_e8 = 0x101;
    local_f8 = 0;
    local_e5._0_3_ = 0xff001a;
    uStack_f4 = &DAT_100000001;
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8(local_398,0x128);
      uVar23 = *plVar18 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar23,L"MotionBlur.DummyOutput",&local_118,0);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(local_380,iVar9);
    }
    plVar18 = local_398;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    uVar3 = *(undefined1 *)(uVar23 + 0x94);
    local_318 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = local_318 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
      FUN_140023dd8(local_398,0x50);
      local_318 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
      puVar25 = local_318 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar25;
    local_318[1] = *(undefined8 *)(uVar23 + 8);
    local_318[2] = 0;
    *(undefined1 *)(local_318 + 3) = 0;
    *(undefined8 *)((longlong)local_318 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_318 + 5) = 1;
    *local_318 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(local_318 + 6) = uVar3;
    *(undefined1 *)(local_318 + 7) = 0;
    *(undefined4 *)((longlong)local_318 + 0x31) = 0;
    *(undefined2 *)((longlong)local_318 + 0x35) = 0;
    local_318[8] = uVar23;
  }
  else {
    local_100 = DAT_14ca85098;
    local_110 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_108 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uVar14 = *(ulonglong *)(puVar20[7] + 0x84);
    iVar28 = (int)(((uint)(uVar14 >> 0x1f) & 1) + (int)uVar14) >> 1;
    iVar9 = (int)(uVar14 >> 0x20) / 2;
    if (DAT_14ca84e40 <= iVar28) {
      iVar28 = DAT_14ca84e40;
    }
    if (iVar28 < 2) {
      iVar28 = 1;
    }
    if (DAT_14ca84e40 <= iVar9) {
      iVar9 = DAT_14ca84e40;
    }
    local_e6 = 0;
    local_118 = &DAT_00020008;
    local_fc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_e5._1_2_ = 0xff00;
    local_e5[0] = *(undefined1 *)(puVar20[7] + 0x93);
    local_ec = 0x10001;
    local_e8 = 0x101;
    local_f8 = 0;
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    uStack_f4 = (undefined1 *)CONCAT44(iVar9,iVar28);
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8(local_398,0x128);
      uVar23 = *plVar18 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar23,L"MotionBlur.SceneColor.HalfRes",&local_118,0);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(local_380,iVar9);
    }
    plVar18 = local_398;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    puVar15[3] = uVar23;
    uVar14 = *(ulonglong *)(param_5 + 8);
    iVar28 = (int)(((uint)(uVar14 >> 0x1f) & 1) + (int)uVar14) >> 1;
    iVar9 = (int)(uVar14 >> 0x20);
    iVar21 = iVar9 / 2;
    puVar15[4] = CONCAT44(iVar21,iVar28);
    iVar9 = *(int *)(param_5 + 0x14) - iVar9;
    iVar27 = *(int *)(param_5 + 0x10) - (int)uVar14;
    puVar15[5] = CONCAT44(((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + iVar21,
                          ((iVar27 - (iVar27 + 1 >> 0x1f)) + 1 >> 1) + iVar28);
    uVar3 = *(undefined1 *)(uVar23 + 0x94);
    local_318 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar25 = local_318 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
      FUN_140023dd8(local_398,0x50);
      local_318 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
      puVar25 = local_318 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar25;
    local_318[1] = *(undefined8 *)(uVar23 + 8);
    local_318[2] = 0;
    *(undefined1 *)(local_318 + 3) = 0;
    *(undefined8 *)((longlong)local_318 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_318 + 5) = 1;
    *local_318 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(local_318 + 6) = uVar3;
    *(undefined1 *)(local_318 + 7) = 0;
    *(undefined4 *)((longlong)local_318 + 0x31) = 0;
    *(undefined2 *)((longlong)local_318 + 0x35) = 0;
    local_318[8] = uVar23;
  }
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  plVar18 = local_398;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = local_318;
  *(int *)((longlong)local_318 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_310 = puVar29;
  if (local_354 == 0) {
    local_100 = DAT_14ca85098;
    local_110 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_108 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_fc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_e6 = 0;
    local_118 = &DAT_00020008;
    local_ec = 0x10001;
    local_e8 = 0x101;
    local_f8 = 0;
    local_e5._0_3_ = 0xff001a;
    uStack_f4 = &DAT_100000001;
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8(local_398,0x128);
      uVar23 = *plVar18 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar23,L"MotionBlur.DummyOutput",&local_118,0);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(local_380,iVar9);
    }
    plVar18 = local_398;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    uVar3 = *(undefined1 *)(uVar23 + 0x94);
    puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar25 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
      FUN_140023dd8(local_398,0x50);
      puVar25 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar15;
    puVar25[1] = *(undefined8 *)(uVar23 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 0;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 1;
    *puVar25 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar25 + 6) = uVar3;
    *(undefined1 *)(puVar25 + 7) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
    puVar25[8] = uVar23;
  }
  else {
    local_100 = DAT_14ca85098;
    local_110 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_108 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    lVar17 = *(longlong *)(puVar20[7] + 0x84);
    iVar9 = (int)lVar17;
    iVar28 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar28 = iVar9;
    }
    iVar9 = (int)((ulonglong)lVar17 >> 0x20);
    iVar21 = iVar9 + 3;
    if (-1 < lVar17) {
      iVar21 = iVar9;
    }
    iVar9 = iVar28 >> 2;
    if (DAT_14ca84e40 <= iVar28 >> 2) {
      iVar9 = DAT_14ca84e40;
    }
    if (iVar9 < 2) {
      iVar9 = 1;
    }
    iVar28 = iVar21 >> 2;
    if (DAT_14ca84e40 <= iVar21 >> 2) {
      iVar28 = DAT_14ca84e40;
    }
    local_e6 = 0;
    local_118 = &DAT_00020008;
    local_fc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_e5._1_2_ = 0xff00;
    local_e5[0] = *(undefined1 *)(puVar20[7] + 0x93);
    local_ec = 0x10001;
    local_e8 = 0x101;
    local_f8 = 0;
    if (iVar28 < 2) {
      iVar28 = 1;
    }
    uStack_f4 = (undefined1 *)CONCAT44(iVar28,iVar9);
    uVar23 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar23 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8(local_398,0x128);
      uVar23 = *plVar18 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar23 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar23,L"MotionBlur.SceneColor.QuarterRes",&local_118,0);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(local_380,iVar9);
    }
    plVar18 = local_398;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    puVar15[6] = uVar23;
    lVar17 = *(longlong *)(param_5 + 8);
    iVar9 = (int)lVar17;
    iVar28 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar28 = iVar9;
    }
    iVar21 = (int)((ulonglong)lVar17 >> 0x20);
    iVar27 = iVar21 + 3;
    if (-1 < lVar17) {
      iVar27 = iVar21;
    }
    puVar15[7] = CONCAT44(iVar27 >> 2,iVar28 >> 2);
    iVar21 = *(int *)(param_5 + 0x14) - iVar21;
    iVar1 = iVar21 + 3;
    iVar21 = iVar21 + 6;
    if (-1 < iVar1) {
      iVar21 = iVar1;
    }
    iVar9 = *(int *)(param_5 + 0x10) - iVar9;
    iVar1 = iVar9 + 3;
    iVar9 = iVar9 + 6;
    if (-1 < iVar1) {
      iVar9 = iVar1;
    }
    puVar15[8] = CONCAT44((iVar21 >> 2) + (iVar27 >> 2),(iVar9 >> 2) + (iVar28 >> 2));
    uVar3 = *(undefined1 *)(uVar23 + 0x94);
    puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar25 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
      FUN_140023dd8(local_398,0x50);
      puVar25 = (undefined8 *)(*plVar18 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar25 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar15;
    puVar25[1] = *(undefined8 *)(uVar23 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 0;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 1;
    *puVar25 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar25 + 6) = uVar3;
    *(undefined1 *)(puVar25 + 7) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
    puVar25[8] = uVar23;
  }
  iVar9 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
    FUN_1447568fc(local_390,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_390 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  iVar28 = 0;
  iVar9 = 0;
  iVar21 = 0;
  local_380 = puVar25;
  do {
    puVar25 = local_380;
    plVar18 = local_398;
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar15 = puVar20 + 0x4e;
    if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
      FUN_140023dd8(local_398,0x280);
      puVar20 = (undefined8 *)(*plVar18 + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar20 + 0x4e;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar15;
    *puVar20 = &PTR_FUN_14a2c4858;
    puVar20[0x34] = 0;
    puVar20[0x35] = 0;
    puVar20[0x36] = 0;
    puVar20[0x37] = 0;
    puVar20[0x38] = 0;
    puVar20[0x39] = 0;
    puVar20[0x3a] = 0;
    puVar20[0x3b] = 0;
    puVar20[0x3c] = 0;
    puVar20[0x3d] = 0;
    puVar20[0x3e] = 0;
    puVar20[0x3f] = 0;
    puVar20[0x46] = 0;
    puVar20[0x47] = 0;
    puVar20[0x48] = 0;
    *(undefined4 *)(puVar20 + 0x49) = 4;
    puVar20[0x4a] = 0;
    puVar20[0x4b] = 0;
    puVar20[0x4c] = 0;
    puVar20[0x4d] = 0;
    iVar27 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar27 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar27 + 1U) {
      FUN_1448cfae8(local_348,iVar27);
    }
    *(undefined8 **)(*local_348 + (longlong)iVar27 * 8) = puVar20;
    memcpy(puVar20 + 2,&local_2b8,0x180);
    ppuVar13 = local_368;
    *(int *)(puVar20 + 0x32) = local_350;
    *(int *)((longlong)puVar20 + 0x194) = (int)local_378;
    *(uint *)(puVar20 + 0x33) = local_354;
    *(undefined4 *)((longlong)puVar20 + 0x19c) = local_370._0_4_;
    puVar20[0x34] = param_6;
    puVar20[0x35] = param_7;
    puVar20[0x36] = CONCAT44(uStack_d4,local_d8);
    puVar20[0x37] = CONCAT44(uStack_cc,uStack_d0);
    puVar20[0x38] = local_2f0;
    puVar20[0x39] = local_2f0;
    puVar20[0x3a] = local_2f0;
    puVar20[0x3b] = local_2f0;
    puVar20[0x3c] = local_388;
    puVar20[0x3d] = local_308;
    puVar20[0x3e] = local_328;
    puVar20[0x3f] = local_340;
    *(undefined4 *)(puVar20 + 0x40) = (undefined4)local_2c8;
    *(undefined4 *)((longlong)puVar20 + 0x204) = local_2c8._4_4_;
    *(undefined4 *)(puVar20 + 0x41) = (undefined4)uStack_2c0;
    *(undefined4 *)((longlong)puVar20 + 0x20c) = uStack_2c0._4_4_;
    *(float *)(puVar20 + 0x42) = fVar36;
    *(float *)((longlong)puVar20 + 0x214) = fVar37;
    *(float *)(puVar20 + 0x43) = fVar32;
    *(float *)((longlong)puVar20 + 0x21c) = fVar35;
    *(float *)(puVar20 + 0x44) = fVar33;
    *(float *)((longlong)puVar20 + 0x224) = fVar34;
    puVar20[0x46] = local_2f8;
    puVar20[0x47] = local_300;
    puVar20[0x48] = local_368;
    *(undefined4 *)(puVar20 + 0x49) = 4;
    puVar20[0x4a] = local_310;
    puVar20[0x4b] = local_318;
    puVar20[0x4c] = puVar25;
    puVar20[0x4d] = 0;
    *(int *)(puVar20 + 0x45) = iVar28;
    local_2dc = (undefined1)local_338;
    local_2e0 = iVar21;
    cVar8 = FUN_140653a7a();
    lVar17 = DAT_14ca2e8f8;
    if (cVar8 == '\0') {
      local_2db = false;
    }
    else {
      local_2db = *(short *)(&DAT_14ca85070 + (longlong)*(int *)(local_360 + 0x3090) * 2) != 0;
    }
    iVar27 = *local_390;
    if (iVar27 == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar31 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar27 != 2)) {
        if (iVar27 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar31 = DVar10 == DVar11;
          ppuVar13 = local_368;
        }
        else {
          bVar31 = false;
        }
      }
      uVar14 = (ulonglong)(bVar31 ^ 1);
    }
    local_2da = *(undefined1 *)(lVar17 + uVar14);
    local_2e4 = (iVar9 == 0x30) + 1;
    if (iVar9 == 0x30 && local_34c < 2) break;
    FUN_14729879c(&local_2d8,*(undefined8 *)(local_360 + 0x13818),&local_2e4);
    local_118 = (undefined1 *)0x0;
    uStack_108 = (longlong *)0x0;
    local_3a8 = &local_118;
    local_3b8 = ppuVar13;
    local_3b0 = iVar9;
    FUN_1472a6f95(param_2,&local_2e5,&local_2d8,puVar20 + 2);
    if (local_118 != (undefined1 *)0x0) {
      plVar18 = uStack_108;
      if (uStack_108 == (longlong *)0x0) {
        plVar18 = (longlong *)&local_f8;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    iVar21 = iVar21 + 1;
    iVar9 = iVar9 + 0xc;
    iVar28 = iVar28 + (int)local_320;
  } while (iVar9 != 0x3c);
  if ((local_c0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_330;
}



// FUNCTION 142f01471 FUN_142f01471 body=3976 status=ok
// SIG undefined FUN_142f01471(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142f01471(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  size_t sVar10;
  longlong *plVar11;
  char cVar12;
  wchar_t **ppwVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  wchar_t **ppwVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  int iVar32;
  undefined1 auVar30 [16];
  int iVar33;
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auStack_588 [32];
  undefined8 *local_568;
  wchar_t **local_560;
  undefined4 *local_558;
  undefined4 local_550;
  uint local_54c;
  longlong *local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  ulonglong local_508;
  int local_500;
  int iStack_4fc;
  int iStack_4f8;
  int iStack_4f4;
  char cStack_4f0;
  wchar_t *local_4e8;
  undefined4 local_4e0;
  wchar_t *local_4d8;
  undefined4 local_4d0;
  wchar_t *local_4c8;
  undefined4 local_4c0;
  wchar_t *local_4b8;
  undefined4 local_4b0;
  wchar_t *local_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  uint local_40c;
  undefined4 local_408;
  int local_404;
  int local_400;
  undefined4 local_3fc;
  undefined2 local_3f8;
  undefined1 local_3f6;
  undefined1 local_3f5;
  undefined2 local_3f4;
  undefined8 local_368 [30];
  wchar_t *local_278;
  undefined4 local_270;
  wchar_t *local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  wchar_t *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  wchar_t *local_160;
  int local_158;
  undefined1 local_154 [16];
  undefined8 local_144;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_548 = (longlong *)(param_4 + 8);
  iStack_4f8 = 0;
  iStack_4f4 = 0;
  cStack_4f0 = '\0';
  local_508 = 0;
  local_500 = 0;
  iStack_4fc = 0;
  uVar7 = *(ulonglong *)(param_4 + 8);
  local_540 = param_1;
  if ((uVar7 == 0) ||
     ((*(int *)(param_4 + 0x18) == *(int *)(param_4 + 0x10) &&
      (*(int *)(param_4 + 0x1c) == *(int *)(param_4 + 0x14))))) {
LAB_142f01541:
    lVar21 = 0x38;
    lVar22 = 0x30;
    local_550 = 0;
    plVar11 = (longlong *)(*(longlong *)(param_4 + 0x28) + 0x38);
  }
  else {
    if ((*(byte *)(uVar7 + 0x60) & 8) != 0) {
      lVar21 = *(longlong *)(param_4 + 0x10);
      local_500 = (int)lVar21;
      iStack_4fc = (int)((ulonglong)lVar21 >> 0x20);
      lVar22 = *(longlong *)(param_4 + 0x18);
      iStack_4f8 = (int)lVar22;
      iStack_4f4 = (int)((ulonglong)lVar22 >> 0x20);
      cStack_4f0 = *(char *)(param_4 + 0x20);
      local_508 = uVar7;
      if (lVar22 != lVar21) {
        local_550 = 0;
        goto LAB_142f016cb;
      }
      goto LAB_142f01541;
    }
    local_550 = (undefined4)CONCAT71((int7)(uVar7 >> 8),1);
    lVar21 = 0x18;
    lVar22 = 0x10;
    plVar11 = local_548;
  }
  uVar9 = *(undefined8 *)(*plVar11 + 0x84);
  local_3f5 = *(undefined1 *)(*plVar11 + 0x93);
  uVar2 = *(undefined8 *)(param_4 + lVar21);
  uVar3 = *(undefined8 *)(param_4 + lVar22);
  iVar20 = (int)uVar9;
  local_404 = DAT_14ca84e40;
  if (iVar20 < DAT_14ca84e40) {
    local_404 = iVar20;
  }
  if (local_404 < 2) {
    local_404 = 1;
  }
  iVar20 = (int)((ulonglong)uVar9 >> 0x20);
  local_400 = DAT_14ca84e40;
  if (iVar20 < DAT_14ca84e40) {
    local_400 = iVar20;
  }
  local_410 = DAT_14ca85098;
  local_420 = _DAT_14ca85088;
  uStack_418 = _DAT_14ca85090;
  cVar12 = (&DAT_00001de6)[param_3];
  local_3f6 = 0;
  local_428 = 9;
  local_40c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_3f4 = 0xff00;
  local_3fc = 0x10001;
  local_3f8 = 0x101;
  local_408 = 0;
  if (local_400 < 2) {
    local_400 = 1;
  }
  uVar17 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar7 = uVar17 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar7) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
    uVar17 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar7 = uVar17 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar7;
  FUN_1456bbb8c(uVar17,L"MotionBlur.Visualize",&local_428);
  iVar20 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar20 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar20);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar20 * 8) = uVar17;
  *(int *)(uVar17 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_500 = (int)uVar3;
  iStack_4fc = (int)((ulonglong)uVar3 >> 0x20);
  iStack_4f8 = (int)uVar2;
  iStack_4f4 = (int)((ulonglong)uVar2 >> 0x20);
  local_508 = uVar17;
  cStack_4f0 = cVar12 * '\x02';
LAB_142f016cb:
  local_518 = *(undefined8 *)(param_4 + 0x48);
  uStack_510 = *(undefined8 *)(param_4 + 0x50);
  local_520 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 0x84);
  local_530 = *(undefined8 *)(param_4 + 0x30);
  uStack_528 = *(undefined8 *)(param_4 + 0x38);
  local_538 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_4 + 0x28) + 0x38) + 0x84);
  FUN_147298832(&local_428);
  local_54c = (uint)*(byte *)(DAT_14ca2e8b0 + 1);
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar14 + 0x46;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x240);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar14 + 0x46;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  *puVar14 = &PTR_FUN_14a2c4878;
  FUN_1472a7580(puVar14 + 2);
  iVar20 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar20 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar20 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar20);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar20 * 8) = puVar14;
  if ((*(byte *)(*(longlong *)(param_3 + 8) + 0x4e) & 0x20) == 0) {
    ppwVar13 = &local_178;
    puVar8 = (undefined8 *)(param_3 + 0x9b0);
    ppwVar18 = ppwVar13;
    for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
      *ppwVar18 = (wchar_t *)*puVar8;
      puVar8 = puVar8 + 1;
      ppwVar18 = ppwVar18 + 1;
    }
    ppwVar18 = (wchar_t **)(param_3 + 0x830);
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
  }
  else {
    local_188 = *(double *)(param_3 + 0x1058) - *(double *)(param_3 + 0x13128);
    local_190 = *(double *)(param_3 + 0x1050) - *(double *)(param_3 + 0x13120);
    local_198 = *(double *)(param_3 + 0x1048) - *(double *)(param_3 + 0x13118);
    ppwVar13 = &local_1f8;
    local_1f8 = (wchar_t *)&DAT_3ff0000000000000;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0x3ff0000000000000;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0x3ff0000000000000;
    local_1a0 = 0;
    local_180 = 0x3ff0000000000000;
    puVar8 = (undefined8 *)(param_3 + 0x12a80);
    ppwVar18 = &local_178;
    for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
      *ppwVar18 = (wchar_t *)*puVar8;
      puVar8 = puVar8 + 1;
      ppwVar18 = ppwVar18 + 1;
    }
    local_108 = 0;
    local_118 = 0;
    uStack_110 = 0;
    ppwVar18 = &local_278;
    FUN_1447fea8d(ppwVar18,&local_178,param_3 + 0x12900);
  }
  FUN_1447fea8d(&local_4a8,ppwVar13,ppwVar18);
  *(float *)(puVar14 + 2) = (float)(double)local_4a8;
  *(float *)((longlong)puVar14 + 0x14) = (float)(double)CONCAT44(uStack_49c,local_4a0);
  *(float *)(puVar14 + 3) = (float)local_498;
  *(float *)((longlong)puVar14 + 0x1c) = (float)local_490;
  *(float *)(puVar14 + 4) = (float)local_488;
  *(float *)((longlong)puVar14 + 0x24) = (float)local_480;
  *(float *)(puVar14 + 5) = (float)local_478;
  *(float *)((longlong)puVar14 + 0x2c) = (float)local_470;
  *(float *)(puVar14 + 6) = (float)local_468;
  *(float *)((longlong)puVar14 + 0x34) = (float)local_460;
  *(float *)(puVar14 + 7) = (float)local_458;
  *(float *)((longlong)puVar14 + 0x3c) = (float)local_450;
  *(float *)(puVar14 + 8) = (float)local_448;
  *(float *)((longlong)puVar14 + 0x44) = (float)local_440;
  *(float *)(puVar14 + 9) = (float)local_438;
  *(float *)((longlong)puVar14 + 0x4c) = (float)local_430;
  lVar21 = FUN_1447e4f80();
  cVar12 = '\x02';
  if (*(char *)(lVar21 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar21 + 0x41);
  }
  puVar14[10] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar14 + 0xb) = cVar12;
  uVar9 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
  puVar14[0xc] = uVar9;
  puVar14[0xd] = DAT_14c9c0de0;
  if (*(longlong *)(param_4 + 0xf8) != 0 && *(longlong *)(param_4 + 0xf0) != 0) {
    puVar14[0xc] = *(longlong *)(param_4 + 0xf8);
  }
  puVar14[0xe] = *(undefined8 *)(param_4 + 0x40);
  puVar14[0xf] = *(undefined8 *)(param_4 + 0x58);
  puVar8 = local_368;
  puVar19 = puVar14 + 0x10;
  for (lVar21 = 0xe; uVar9 = DAT_14c9c0d80, lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar19 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar19 = puVar19 + 1;
  }
  puVar14[0x1e] = DAT_14c9c0d80;
  puVar14[0x1f] = uVar9;
  puVar14[0x26] = local_508;
  puVar14[0x27] = 0;
  *(char *)(puVar14 + 0x28) = cStack_4f0;
  *(undefined1 *)((longlong)puVar14 + 0x141) = 0;
  *(undefined2 *)((longlong)puVar14 + 0x142) = 0xffff;
  fVar37 = 1.0 / (float)(iStack_4f4 - iStack_4fc);
  fVar29 = 1.0 / (float)(iStack_4f8 - local_500);
  fVar24 = (DAT_14ca4ca80 - (float)iStack_4fc) * fVar37 * DAT_14ca4ca68 + _DAT_14ca4ca70;
  fVar36 = (DAT_14ca4ca7c - (float)local_500) * fVar29 * DAT_14ca4ca64 + _DAT_14ca4ca6c;
  fVar37 = fVar37 * DAT_14ca4ca78 * DAT_14ca4ca68;
  *(float *)(puVar14 + 0x20) = fVar29 * DAT_14ca4ca74 * DAT_14ca4ca64;
  *(float *)((longlong)puVar14 + 0x104) = fVar37;
  *(float *)(puVar14 + 0x21) = fVar36;
  *(float *)((longlong)puVar14 + 0x10c) = fVar24;
  local_178 = *(wchar_t **)(*(longlong *)(param_4 + 0x40) + 0x84);
  iStack_170 = (int)*(undefined8 *)(param_4 + 0x48);
  uStack_16c = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x48) >> 0x20);
  uStack_168 = (undefined4)*(undefined8 *)(param_4 + 0x50);
  iStack_164 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x50) >> 0x20);
  local_568 = (undefined8 *)CONCAT44(local_568._4_4_,3);
  uVar15 = 0;
  FUN_14473d930(&local_1f8,&local_178,&iStack_170,0);
  uVar4 = local_54c;
  puVar14[0x22] = local_1f8;
  puVar14[0x23] = uStack_1f0;
  *(uint *)(puVar14 + 0x24) = local_54c;
  uVar9 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145e926c6();
  FUN_1448e935e(uVar9,&local_178,&DAT_14ca2f180,0);
  FUN_145e926c6();
  local_560 = (wchar_t **)&local_500;
  local_568 = puVar14 + 2;
  auVar25._0_8_ = FUN_1472989ac(param_2,*(undefined8 *)(param_3 + 0x13818),&local_1f8,&local_178);
  auVar25._8_8_ = extraout_XMM0_Qb;
  cStack_4f0 = 1;
  if (uVar4 != 0) {
    uVar9 = CONCAT44(iStack_4fc,local_500);
    uVar2 = CONCAT44(iStack_4f4,iStack_4f8);
    local_560 = (wchar_t **)
                CONCAT44(local_560._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 8) + 0xe8));
    local_568 = (undefined8 *)CONCAT44(local_568._4_4_,*(undefined4 *)(param_3 + 0x3090));
    lVar21 = FUN_147d8dc86(param_2,local_508,0,*(longlong *)(param_3 + 8) + 0x88);
    *(undefined8 *)(lVar21 + 0x38) = uVar9;
    *(undefined8 *)(lVar21 + 0x40) = uVar2;
    FUN_140002266(&local_178,L"Visualize MotionBlur");
    pwVar5 = local_178;
    bVar23 = iStack_170 == 0;
    local_178 = (wchar_t *)&DAT_3f8000003f800000;
    iStack_170 = 0;
    uStack_16c = 0x3f800000;
    uVar9 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    local_1f8 = pwVar5;
    if (bVar23) {
      local_1f8 = L"";
    }
    if (local_1f8 != (wchar_t *)0x0) {
      sVar10 = wcslen(local_1f8);
      uVar15 = (int)sVar10;
    }
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar15);
    local_558 = &DAT_149e1e308;
    local_568 = (undefined8 *)uVar9;
    local_560 = &local_178;
    FUN_147d8e230(lVar21,0x4034000000000000,0x404a000000000000);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca34a88) {
      FUN_144b3d300(&DAT_14ca34a88);
      if (DAT_14ca34a88 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar11 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MotionBlurDebug",1);
        if (plVar11 == (longlong *)0x0) {
          DAT_14ca34a80 = 0;
        }
        else {
          DAT_14ca34a80 = (**(code **)(*plVar11 + 0x68))(plVar11);
        }
        _Init_thread_footer(&DAT_14ca34a88);
      }
    }
    uVar15 = 0;
    if (DAT_14ca34a80 != 0) {
      uVar15 = *(undefined4 *)(DAT_14ca34a80 + 4);
    }
    FUN_140002266(&local_178,L"%d, %d",*(undefined4 *)(*(longlong *)(param_3 + 8) + 0xac),uVar15);
    if (pwVar5 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar5);
    }
    pwVar5 = local_178;
    bVar23 = iStack_170 == 0;
    local_178 = (wchar_t *)&DAT_3f8000003f800000;
    iStack_170 = 0;
    uStack_16c = 0x3f800000;
    local_568 = *(undefined8 **)(DAT_14cb0d2b0 + 0x58);
    local_278 = L"FrameNo, r.MotionBlurDebug:";
    local_270 = 0x1b;
    pwVar16 = pwVar5;
    if (bVar23) {
      pwVar16 = L"";
    }
    local_558 = &DAT_149e1e308;
    local_560 = &local_178;
    FUN_147d8e230(lVar21,0x4034000000000000,0x4050800000000000);
    local_178 = (wchar_t *)&DAT_3f8000003f800000;
    iStack_170 = 0;
    uStack_16c = 0x3f800000;
    uVar9 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    local_4a0 = 0;
    local_4a8 = pwVar16;
    if (pwVar16 != (wchar_t *)0x0) {
      sVar10 = wcslen(pwVar16);
      local_4a0 = (int)sVar10;
    }
    local_558 = &DAT_149e1e308;
    local_568 = (undefined8 *)uVar9;
    local_560 = &local_178;
    FUN_147d8e230(lVar21,0x406b800000000000,0x4050800000000000);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca34a98) {
      FUN_144b3d300(&DAT_14ca34a98);
      if (DAT_14ca34a98 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar11 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VelocityTest",1)
        ;
        if (plVar11 == (longlong *)0x0) {
          DAT_14ca34a90 = 0;
        }
        else {
          DAT_14ca34a90 = (**(code **)(*plVar11 + 0x68))(plVar11);
        }
        _Init_thread_footer(&DAT_14ca34a98);
      }
    }
    uVar15 = 0;
    if (DAT_14ca34a90 != 0) {
      uVar15 = *(undefined4 *)(DAT_14ca34a90 + 4);
    }
    bVar6 = FUN_14732a8aa(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2)
                         );
    local_568 = (undefined8 *)CONCAT44(local_568._4_4_,(uint)bVar6);
    FUN_140002266(&local_178,L"%d, %d, %d",*(undefined1 *)(*(longlong *)(param_3 + 8) + 0xdf),uVar15
                 );
    if (pwVar5 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar5);
    }
    pwVar5 = local_178;
    bVar23 = iStack_170 == 0;
    local_178 = (wchar_t *)&DAT_3f8000003f800000;
    iStack_170 = 0;
    uStack_16c = 0x3f800000;
    local_568 = *(undefined8 **)(DAT_14cb0d2b0 + 0x58);
    local_4b8 = L"Paused, r.VelocityTest, Parallel:";
    local_4b0 = 0x21;
    pwVar16 = pwVar5;
    if (bVar23) {
      pwVar16 = L"";
    }
    local_558 = &DAT_149e1e308;
    local_560 = &local_178;
    FUN_147d8e230(lVar21,0x4034000000000000,0x4054000000000000);
    local_178 = (wchar_t *)&DAT_3f8000003f800000;
    iStack_170 = 0;
    uStack_16c = 0x3f800000;
    uVar9 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    local_4c0 = 0;
    local_4c8 = pwVar16;
    if (pwVar16 != (wchar_t *)0x0) {
      sVar10 = wcslen(pwVar16);
      local_4c0 = (int)sVar10;
    }
    local_558 = &DAT_149e1e308;
    auVar25 = ZEXT816(0x4054000000000000);
    local_568 = (undefined8 *)uVar9;
    local_560 = &local_178;
    auVar28._0_8_ = FUN_147d8e230(lVar21,0x406b800000000000,0x4054000000000000);
    auVar28._8_8_ = extraout_XMM0_Qb_00;
    auVar30 = pmovsxbd(auVar25,0x3020100);
    auVar27 = (undefined1  [16])0x0;
    lVar22 = 0;
    auVar25 = pmovsxbd(auVar28,0x4040404);
    do {
      piVar1 = (int *)(param_3 + 0x12a80 + lVar22 * 4);
      auVar34._0_4_ = *piVar1 + auVar30._0_4_;
      iVar20 = auVar30._4_4_;
      auVar34._4_4_ = piVar1[1] + iVar20;
      iVar32 = auVar30._8_4_;
      auVar34._8_4_ = piVar1[2] + iVar32;
      iVar33 = auVar30._12_4_;
      auVar34._12_4_ = piVar1[3] + iVar33;
      auVar27 = auVar27 ^ auVar34;
      lVar22 = lVar22 + 4;
      auVar30._0_4_ = auVar30._0_4_ + auVar25._0_4_;
      auVar30._4_4_ = iVar20 + auVar25._4_4_;
      auVar30._8_4_ = iVar32 + auVar25._8_4_;
      auVar30._12_4_ = iVar33 + auVar25._12_4_;
    } while (lVar22 != 0x10);
    auVar31._0_8_ = auVar27._8_8_;
    auVar31._8_4_ = auVar27._8_4_;
    auVar31._12_4_ = auVar27._12_4_;
    auVar31 = auVar31 ^ auVar27;
    auVar27 = pmovsxbd(auVar31,0x3020100);
    auVar28 = (undefined1  [16])0x0;
    lVar22 = 0;
    do {
      piVar1 = (int *)(param_3 + 0x9b0 + lVar22 * 4);
      auVar35._0_4_ = *piVar1 + auVar27._0_4_;
      iVar20 = auVar27._4_4_;
      auVar35._4_4_ = piVar1[1] + iVar20;
      iVar32 = auVar27._8_4_;
      auVar35._8_4_ = piVar1[2] + iVar32;
      iVar33 = auVar27._12_4_;
      auVar35._12_4_ = piVar1[3] + iVar33;
      auVar28 = auVar28 ^ auVar35;
      lVar22 = lVar22 + 4;
      auVar27._0_4_ = auVar27._0_4_ + auVar25._0_4_;
      auVar27._4_4_ = iVar20 + auVar25._4_4_;
      auVar27._8_4_ = iVar32 + auVar25._8_4_;
      auVar27._12_4_ = iVar33 + auVar25._12_4_;
    } while (lVar22 != 0x10);
    auVar26._0_8_ = auVar28._8_8_;
    auVar26._8_4_ = auVar28._8_4_;
    auVar26._12_4_ = auVar28._12_4_;
    FUN_140002266(&local_178,L"View=%.4x PrevView=%.4x",
                  (SUB164(auVar26 ^ auVar28,4) ^ SUB164(auVar26 ^ auVar28,0)) & 0xffff,
                  (auVar31._4_4_ ^ auVar31._0_4_) & 0xffff);
    if (pwVar5 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar5);
    }
    pwVar5 = local_178;
    bVar23 = iStack_170 != 0;
    local_178 = (wchar_t *)&DAT_3f8000003f800000;
    iStack_170 = 0;
    uStack_16c = 0x3f800000;
    local_568 = *(undefined8 **)(DAT_14cb0d2b0 + 0x58);
    local_4d8 = L"ViewMatrix:";
    local_4d0 = 0xb;
    pwVar16 = L"";
    if (bVar23) {
      pwVar16 = pwVar5;
    }
    local_558 = &DAT_149e1e308;
    local_560 = &local_178;
    FUN_147d8e230(lVar21,0x4034000000000000,0x4057800000000000);
    local_178 = (wchar_t *)&DAT_3f8000003f800000;
    iStack_170 = 0;
    uStack_16c = 0x3f800000;
    puVar8 = *(undefined8 **)(DAT_14cb0d2b0 + 0x58);
    local_4e0 = 0;
    local_4e8 = pwVar16;
    if (pwVar16 != (wchar_t *)0x0) {
      sVar10 = wcslen(pwVar16);
      local_4e0 = (int)sVar10;
    }
    local_558 = &DAT_149e1e308;
    local_568 = puVar8;
    local_560 = &local_178;
    FUN_147d8e230(lVar21,0x406b800000000000,0x4057800000000000);
    if (pwVar5 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar5);
    }
    auVar25._0_8_ = FUN_14376dc88(lVar21,param_2,0);
    auVar25._8_8_ = extraout_XMM0_Qb_01;
  }
  if ((char)local_550 != '\0') {
    iStack_170 = DAT_14c9a52a0;
    local_178 = DAT_14c9a5298;
    uStack_16c = SUB84(DAT_14c9a5298,0);
    uStack_168 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    iStack_164 = DAT_14c9a52a0;
    local_160 = DAT_14c9a5298;
    local_158 = DAT_14c9a52a0;
    local_154 = pmovsxbq(auVar25,0x100);
    local_144 = 0x100000000;
    FUN_1400e8d41(param_2,local_508,*local_548);
  }
  uVar9 = local_540;
  FUN_1448a0832(local_540,param_2,&local_508);
  if ((local_f0 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f023fa FUN_142f023fa body=5909 status=ok
// SIG undefined FUN_142f023fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_142f023fa(undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
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
  double dVar14;
  double dVar15;
  double dVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  longlong lVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  longlong lVar27;
  char cVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined1 (*pauVar38) [16];
  bool bVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_498 [32];
  int *local_478;
  ulonglong local_470;
  ulonglong local_468;
  undefined8 **local_460;
  undefined8 local_458;
  undefined8 *local_450;
  undefined4 local_448;
  longlong local_440;
  ulonglong local_438;
  longlong *local_430;
  int local_424;
  ulonglong local_420;
  longlong local_418;
  ulonglong *local_410;
  longlong local_408;
  undefined1 (*local_400) [16];
  ulonglong local_3f8;
  ulonglong *local_3f0;
  longlong local_3e8;
  undefined8 *local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  int local_3a0;
  int local_39c;
  undefined4 local_398;
  int local_394;
  int local_390;
  undefined4 local_38c;
  undefined8 *local_388;
  undefined8 local_380;
  undefined8 *local_378;
  undefined8 local_370;
  undefined8 *local_368;
  undefined8 local_360;
  undefined1 local_358 [8];
  int local_350;
  int local_348;
  int local_338;
  int iStack_334;
  int local_330;
  int iStack_32c;
  ulonglong local_328;
  undefined8 local_298 [14];
  ulonglong local_228 [16];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  ulonglong local_198 [3];
  undefined4 local_180;
  uint uStack_17c;
  undefined4 local_178;
  int iStack_174;
  int local_170;
  undefined4 uStack_16c;
  undefined2 local_168;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined2 uStack_164;
  undefined2 uStack_162;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_128;
  longlong lStack_120;
  undefined *puStack_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined2 local_f5;
  undefined1 local_f3;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_3b0 = *(undefined8 *)(param_4 + 0x48);
  uStack_3a8 = *(undefined8 *)(param_4 + 0x50);
  local_3b8 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 0x84);
  local_3c8 = *(undefined8 *)(param_4 + 0x30);
  uStack_3c0 = *(undefined8 *)(param_4 + 0x38);
  local_3d0 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_4 + 0x28) + 0x38) + 0x84);
  local_400 = param_1;
  FUN_147298832(local_358);
  local_424 = *(int *)(DAT_14ca2e838 + 4);
  local_410 = (ulonglong *)CONCAT44(local_410._4_4_,(1 < local_424) + 1);
  local_3f8 = local_328;
  local_440 = param_3;
  if (((1.0 <= *(double *)(param_3 + 0x8a8)) && (*(int *)(DAT_14ca2e8c8 + 4) == 0)) ||
     (uVar26 = *(ulonglong *)(param_4 + 0xc0), uVar26 == 0)) {
LAB_142f0253e:
    local_198[0] = DAT_14ca4aea8 | 0x20008;
    local_180 = DAT_14ca85098;
    local_198[1] = _DAT_14ca85088;
    local_198[2] = _DAT_14ca85090;
    uStack_165 = 0x1a;
    if (1.0 <= *(double *)(param_3 + 0x8a8)) {
      uStack_165 = 1;
    }
    uVar25 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 0x84);
    uStack_17c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_166 = 0;
    uStack_164 = 0xff00;
    uStack_16c = 0x10001;
    local_168 = 0x101;
    local_178 = 0;
    iVar23 = (int)uVar25;
    iStack_174 = DAT_14ca84e40;
    if (iVar23 < DAT_14ca84e40) {
      iStack_174 = iVar23;
    }
    if (iStack_174 < 2) {
      iStack_174 = 1;
    }
    iVar23 = (int)((ulonglong)uVar25 >> 0x20);
    local_170 = DAT_14ca84e40;
    if (iVar23 < DAT_14ca84e40) {
      local_170 = iVar23;
    }
    if (local_170 < 2) {
      local_170 = 1;
    }
    plVar1 = (longlong *)(param_2 + 0x70);
    uVar34 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar26 = uVar34 + 0x120;
    local_430 = plVar1;
    if (*(ulonglong *)(param_2 + 0x78) < uVar26) {
      FUN_140023dd8(plVar1,0x128);
      uVar34 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar26 = uVar34 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar26;
    FUN_1456bbb8c(uVar34,L"MotionBlur.VelocityFlatten",local_198,0);
    iVar23 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar23 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar23);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar23 * 8) = uVar34;
    *(int *)(uVar34 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    local_478 = (int *)((ulonglong)local_478 & 0xffffffffffffff00);
    local_420 = uVar34;
    local_438 = FUN_1472978cc(param_2,local_328,(ulonglong)local_410 & 0xffffffff,
                              L"MotionBlur.VelocityTile");
    plVar1 = local_430;
    bVar17 = *(byte *)(local_440 + 0x2470);
    bVar18 = *(byte *)(local_440 + 0x2471);
    bVar19 = *(byte *)(local_440 + 0x2500);
    puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar31 = puVar30 + 0x2c;
    if (*(undefined8 **)(param_2 + 0x78) < puVar31) {
      FUN_140023dd8(local_430,0x170);
      puVar30 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar31 = puVar30 + 0x2c;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar31;
    *puVar30 = &PTR_FUN_14a2c4750;
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 1;
    puVar30[0x22] = 0;
    puVar30[0x23] = 0;
    puVar30[0x24] = 0;
    puVar30[0x25] = 0;
    puVar30[0x26] = 0;
    puVar30[0x27] = 0;
    puVar30[0x28] = 0;
    puVar30[0x29] = 0;
    puVar30[0x2a] = 0;
    iVar23 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar23 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar23 * 8) = puVar30;
    lVar24 = FUN_1447e4f80();
    cVar28 = '\x02';
    if (*(char *)(lVar24 + 0x41) != '\x03') {
      cVar28 = *(char *)(lVar24 + 0x41);
    }
    puVar30[2] = *(undefined8 *)(local_440 + 0x18);
    *(char *)(puVar30 + 3) = cVar28;
    FUN_1472983f0(local_198);
    puVar30[0x12] = local_198[0];
    puVar30[0x13] = local_198[1];
    *(uint *)(puVar30 + 0x20) = (uint)(byte)(bVar18 & (bVar17 ^ 1) | bVar19);
    *(uint *)((longlong)puVar30 + 0x104) = (uint)bVar19;
    if (bVar19 != 0) {
      dVar2 = *(double *)(local_440 + 0x2488);
      dVar3 = *(double *)(local_440 + 0x2490);
      dVar4 = *(double *)(local_440 + 0x2498);
      dVar5 = *(double *)(local_440 + 0x24a0);
      dVar6 = *(double *)(local_440 + 0x24a8);
      dVar7 = *(double *)(local_440 + 0x24b0);
      dVar8 = *(double *)(local_440 + 0x24b8);
      dVar9 = *(double *)(local_440 + 0x24c0);
      dVar10 = *(double *)(local_440 + 0x24c8);
      dVar11 = *(double *)(local_440 + 0x24d0);
      dVar12 = *(double *)(local_440 + 0x24d8);
      dVar13 = *(double *)(local_440 + 0x24e0);
      dVar14 = *(double *)(local_440 + 0x24e8);
      dVar15 = *(double *)(local_440 + 0x24f0);
      dVar16 = *(double *)(local_440 + 0x24f8);
      *(float *)(puVar30 + 0x14) = (float)*(double *)(local_440 + 0x2480);
      *(float *)((longlong)puVar30 + 0xa4) = (float)dVar2;
      *(float *)(puVar30 + 0x15) = (float)dVar3;
      *(float *)((longlong)puVar30 + 0xac) = (float)dVar4;
      *(float *)(puVar30 + 0x16) = (float)dVar5;
      *(float *)((longlong)puVar30 + 0xb4) = (float)dVar6;
      *(float *)(puVar30 + 0x17) = (float)dVar7;
      *(float *)((longlong)puVar30 + 0xbc) = (float)dVar8;
      *(float *)(puVar30 + 0x18) = (float)dVar9;
      *(float *)((longlong)puVar30 + 0xc4) = (float)dVar10;
      *(float *)(puVar30 + 0x19) = (float)dVar11;
      *(float *)((longlong)puVar30 + 0xcc) = (float)dVar12;
      *(float *)(puVar30 + 0x1a) = (float)dVar13;
      *(float *)((longlong)puVar30 + 0xd4) = (float)dVar14;
      *(float *)(puVar30 + 0x1b) = (float)dVar15;
      *(float *)((longlong)puVar30 + 0xdc) = (float)dVar16;
    }
    uVar25 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
    puVar30[0x22] = uVar25;
    puVar30[0x23] = DAT_14c9c0de0;
    uVar25 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
    uVar26 = local_420;
    plVar1 = local_430;
    puVar30[0x24] = uVar25;
    puVar30[0x25] = DAT_14c9c0de0;
    *(uint *)(puVar30 + 0x21) =
         (uint)(*(longlong *)(param_4 + 0xf8) != 0 && *(longlong *)(param_4 + 0xf0) != 0);
    if ((*(longlong *)(param_4 + 0xf0) != 0) && (*(longlong *)(param_4 + 0xf8) != 0)) {
      puVar30[0x22] = *(longlong *)(param_4 + 0xf0);
      puVar30[0x24] = *(undefined8 *)(param_4 + 0xf8);
    }
    fVar42 = DAT_14ca4ca80 + 0.5;
    fVar41 = DAT_14ca4ca7c + 0.5;
    fVar44 = 1.0 / (float)(iStack_32c - iStack_334);
    fVar43 = 1.0 / (float)(local_330 - local_338);
    fVar45 = fVar44 * DAT_14ca4ca78;
    *(float *)(puVar30 + 0x1c) = fVar43 * DAT_14ca4ca74;
    *(float *)((longlong)puVar30 + 0xe4) = fVar45;
    *(float *)(puVar30 + 0x1d) = fVar41 * fVar43;
    *(float *)((longlong)puVar30 + 0xec) = fVar42 * fVar44;
    *(float *)(puVar30 + 0x1e) = (float)(local_330 - local_338);
    *(float *)((longlong)puVar30 + 0xf4) = (float)(iStack_32c - iStack_334);
    *(float *)(puVar30 + 0x1f) = (float)local_338;
    *(float *)((longlong)puVar30 + 0xfc) = (float)iStack_334;
    puVar31 = local_298;
    puVar37 = puVar30 + 4;
    for (lVar24 = 0xe; lVar24 != 0; lVar24 = lVar24 + -1) {
      *puVar37 = *puVar31;
      puVar31 = puVar31 + 1;
      puVar37 = puVar37 + 1;
    }
    puVar30[0x27] = *(undefined8 *)(param_4 + 0x40);
    puVar30[0x26] = *(undefined8 *)(param_4 + 0x58);
    uVar20 = *(undefined1 *)(local_420 + 0x94);
    puVar37 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar37 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar31) {
      FUN_140023dd8(local_430,0x50);
      puVar37 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar31 = puVar37 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar31;
    puVar37[1] = *(undefined8 *)(uVar26 + 8);
    puVar37[2] = 0;
    *(undefined1 *)(puVar37 + 3) = 0;
    *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar37 + 5) = 0;
    *puVar37 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar37 + 6) = uVar20;
    *(undefined1 *)(puVar37 + 7) = 0;
    *(undefined4 *)((longlong)puVar37 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar37 + 0x35) = 0;
    puVar37[8] = uVar26;
    iVar23 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar23 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar23);
    }
    plVar1 = local_430;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar23 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar30[0x28] = puVar37;
    uVar20 = *(undefined1 *)(local_438 + 0x94);
    puVar37 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar31 = puVar37 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar31) {
      FUN_140023dd8(local_430,0x50);
      puVar37 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar31 = puVar37 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar31;
    puVar37[1] = *(undefined8 *)(local_438 + 8);
    puVar37[2] = 0;
    *(undefined1 *)(puVar37 + 3) = 0;
    *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar37 + 5) = 0;
    *puVar37 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar37 + 6) = uVar20;
    *(undefined1 *)(puVar37 + 7) = 0;
    *(undefined4 *)((longlong)puVar37 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar37 + 0x35) = 0;
    puVar37[8] = local_438;
    iVar23 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar23 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar23);
    }
    bVar39 = local_424 < 2;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar23 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar30[0x29] = puVar37;
    puVar30[0x2a] = 0;
    uVar25 = *(undefined8 *)(local_440 + 0x13818);
    FUN_145f6c71a();
    FUN_1448e935e(uVar25,local_198,&DAT_14ca2e968,bVar39);
    FUN_145f6c71a();
    iVar23 = (iStack_32c - iStack_334) + 0xf;
    local_390 = (iStack_32c - iStack_334) + 0x1e;
    if (-1 < iVar23) {
      local_390 = iVar23;
    }
    local_390 = local_390 >> 4;
    iVar23 = (local_330 - local_338) + 0xf;
    local_394 = (local_330 - local_338) + 0x1e;
    if (-1 < iVar23) {
      local_394 = iVar23;
    }
    local_394 = local_394 >> 4;
    local_478 = &local_394;
    local_38c = 1;
    FUN_1472984d4(param_2,&local_128,local_198,puVar30 + 2);
    uVar34 = local_438;
    uVar26 = local_420;
  }
  else {
    if (*(int *)(param_4 + 0xd0) != *(int *)(param_4 + 200)) {
      uVar34 = *(longlong *)(param_4 + 0xd8);
      if (uVar34 != 0) goto LAB_142f03933;
      goto LAB_142f0253e;
    }
    uVar34 = *(longlong *)(param_4 + 0xd8);
    if (uVar34 == 0 || *(int *)(param_4 + 0xd4) == *(int *)(param_4 + 0xcc)) goto LAB_142f0253e;
LAB_142f03933:
    if ((*(int *)(param_4 + 0xe8) == *(int *)(param_4 + 0xe0)) &&
       (*(int *)(param_4 + 0xec) == *(int *)(param_4 + 0xe4))) goto LAB_142f0253e;
  }
  uVar32 = local_3f8;
  local_430 = (longlong *)(local_3f8 >> 0x20);
  if (*(longlong *)(local_440 + 0x3108) == 0) {
    bVar39 = false;
  }
  else {
    bVar39 = *(int *)(*(longlong *)(local_440 + 0x3108) + 0x1e30) == 1;
  }
  fVar41 = (float)(local_348 - local_350) * (*(float *)(local_440 + 0x2b8c) / 100.0) * 0.03125;
  bVar40 = *(int *)(DAT_14ca2e808 + 4) == 1;
  puVar33 = local_228;
  puVar35 = local_198;
  for (lVar24 = 0xe; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar35 = *puVar33;
    puVar33 = puVar33 + 1;
    puVar35 = puVar35 + 1;
  }
  local_3e8 = param_4;
  FUN_147297989(&local_128,param_2,uVar34);
  fVar42 = ((float)(local_330 - local_338) / (float)(local_348 - local_350)) * 0.0625;
  local_438 = CONCAT71(local_438._1_7_,3.0 < fVar41 | bVar40 | bVar39);
  local_418 = lStack_120;
  local_3e0 = local_128;
  local_420 = uVar26;
  if (fVar41 <= 3.0 && (!bVar40 && bVar39 == false)) {
    puVar31 = (undefined8 *)0x0;
    lVar24 = local_3e8;
LAB_142f033a5:
    local_478 = (int *)((ulonglong)local_478 & 0xffffffffffffff00);
    lVar27 = FUN_1472978cc(param_2,uVar32,(ulonglong)local_410 & 0xffffffff,
                           L"MotionBlur.GatheredVelocityTile");
    plVar1 = (longlong *)(param_2 + 0x70);
    puVar37 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar30 = puVar37 + 0x18;
    if (*(undefined8 **)(param_2 + 0x78) < puVar30) {
      FUN_140023dd8(plVar1,0xd0);
      puVar37 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar30 = puVar37 + 0x18;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar30;
    *puVar37 = &PTR_FUN_14a2c47f8;
    puVar37[0x10] = 0;
    puVar37[0x11] = 0;
    puVar37[0x14] = 0;
    puVar37[0x15] = 0;
    puVar37[0x16] = 0;
    puVar37[0x17] = 0;
    iVar23 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar23 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar23 * 8) = puVar37;
    local_410 = puVar37 + 2;
    puVar33 = local_198;
    puVar35 = local_410;
    for (lVar29 = 0xe; lVar29 != 0; lVar29 = lVar29 + -1) {
      *puVar35 = *puVar33;
      puVar33 = puVar33 + 1;
      puVar35 = puVar35 + 1;
    }
    puVar37[0x10] = local_3e0;
    puVar37[0x11] = local_418;
    *(float *)(puVar37 + 0x12) = fVar42;
    if ((local_438 & 1) == 0) {
      puVar37[0x14] = local_3e0;
    }
    else {
      puVar37[0x14] = puVar31;
    }
    puVar37[0x15] = local_418;
    uVar20 = *(undefined1 *)(lVar27 + 0x94);
    puVar36 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar30 = puVar36 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar30) {
      FUN_140023dd8(plVar1,0x50);
      puVar36 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar30 = puVar36 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar30;
    puVar36[1] = *(undefined8 *)(lVar27 + 8);
    puVar36[2] = 0;
    *(undefined1 *)(puVar36 + 3) = 0;
    *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar36 + 5) = 0;
    *puVar36 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar36 + 6) = uVar20;
    *(undefined1 *)(puVar36 + 7) = 0;
    *(undefined4 *)((longlong)puVar36 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar36 + 0x35) = 0;
    puVar36[8] = lVar27;
    iVar23 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar23 + 1U;
    local_418 = lVar27;
    if (*(uint *)(param_2 + 0x1a4) < iVar23 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar23);
    }
    iVar21 = local_424;
    bVar39 = local_424 < 2;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar23 * 8) = puVar36;
    *(int *)((longlong)puVar36 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar37[0x16] = puVar36;
    uVar25 = *(undefined8 *)(local_440 + 0x13818);
    FUN_145d0a9a4();
    FUN_1448e935e(uVar25,&local_128,&DAT_14ca2ea90,bVar39);
    FUN_145d0a9a4();
    iVar23 = (int)local_430 + 0xf;
    local_39c = (int)local_430 + 0x1e;
    if (-1 < iVar23) {
      local_39c = iVar23;
    }
    local_39c = local_39c >> 4;
    iVar23 = (int)local_3f8 + 0xf;
    local_3a0 = (int)local_3f8 + 0x1e;
    if (-1 < iVar23) {
      local_3a0 = iVar23;
    }
    local_3a0 = local_3a0 >> 4;
    local_478 = &local_3a0;
    local_398 = 1;
    FUN_147298586(param_2,&local_1a8,&local_128,local_410);
    pauVar38 = local_400;
    uVar26 = local_420;
    if ((local_438 & 1) == 0) {
      FUN_147297989(&local_1a8,param_2,local_418);
      puVar31 = local_1a8;
      uVar25 = local_1a0;
      uVar26 = local_420;
      pauVar38 = local_400;
      goto LAB_142f03693;
    }
    if (1 < iVar21) {
      FUN_147297989(&local_1a8,param_2,local_418);
      uVar25 = local_1a0;
      goto LAB_142f03693;
    }
  }
  else {
    local_478 = (int *)CONCAT71(local_478._1_7_,1);
    local_408 = FUN_1472978cc(param_2,uVar32,1,L"MotionBlur.ScatteredVelocityTile");
    uVar20 = *(undefined1 *)(local_408 + 0x90);
    puVar33 = (ulonglong *)(param_2 + 0x70);
    puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar30 = puVar31 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar30) {
      FUN_140023dd8(puVar33,0x48);
      puVar31 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar30 = puVar31 + 8;
    }
    lVar24 = local_3e8;
    *(undefined8 **)(param_2 + 0x70) = puVar30;
    puVar31[1] = *(undefined8 *)(local_408 + 8);
    puVar31[2] = 0;
    *(undefined1 *)(puVar31 + 3) = 1;
    *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
    *puVar31 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar31 + 5) = 0;
    *(undefined1 *)((longlong)puVar31 + 0x2a) = uVar20;
    *(undefined1 *)((longlong)puVar31 + 0x2b) = 0;
    *(undefined4 *)((longlong)puVar31 + 0x2c) = 0x10000;
    *(undefined2 *)(puVar31 + 6) = 0;
    *(undefined1 *)((longlong)puVar31 + 0x32) = 1;
    puVar31[7] = local_408;
    iVar23 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar23 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar23 * 8) = puVar31;
    *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_110 = DAT_14ca850ac;
    lStack_120 = _DAT_14ca8509c;
    puStack_118 = (undefined *)_DAT_14ca850a4;
    local_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f6 = 0;
    local_128 = (undefined8 *)0x4;
    local_f5 = 0xc;
    local_fc = 0x10001;
    local_f8 = 0x101;
    local_108 = 0;
    local_104 = DAT_14ca84e40;
    if ((int)uVar32 < DAT_14ca84e40) {
      local_104 = (int)uVar32;
    }
    if (local_104 < 2) {
      local_104 = 1;
    }
    local_f3 = 0xff;
    local_100 = DAT_14ca84e40;
    if ((int)local_430 < DAT_14ca84e40) {
      local_100 = (int)local_430;
    }
    if (local_100 < 2) {
      local_100 = 1;
    }
    uVar34 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar26 = uVar34 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar26) {
      FUN_140023dd8(puVar33,0x128);
      uVar34 = *puVar33 + 7 & 0xfffffffffffffff8;
      uVar26 = uVar34 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar26;
    FUN_1456bbb8c(uVar34,L"MotionBlur.DilatedVelocityDepth",&local_128,0);
    iVar23 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar23 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar23);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar23 * 8) = uVar34;
    *(int *)(uVar34 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    puVar37 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar30 = puVar37 + 0x36;
    if (*(undefined8 **)(param_2 + 0x78) < puVar30) {
      FUN_140023dd8(puVar33,0x1c0);
      puVar37 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
      puVar30 = puVar37 + 0x36;
    }
    *puVar33 = (ulonglong)puVar30;
    *puVar37 = &PTR_FUN_14a2c4778;
    *(undefined1 (*) [16])(puVar37 + 0x12) = (undefined1  [16])0x0;
    lVar27 = 0xb0;
    do {
      *(undefined1 (*) [16])((longlong)puVar37 + lVar27) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar37 + lVar27 + 0x10) = 0xffff0000;
      lVar27 = lVar27 + 0x18;
    } while (lVar27 != 0x170);
    puVar30 = puVar37 + 2;
    *(undefined4 *)((longlong)puVar37 + 0x184) = 0;
    puVar37[0x2e] = 0;
    puVar37[0x2f] = 0;
    *(undefined2 *)(puVar37 + 0x30) = 0;
    *(undefined4 *)(puVar37 + 0x31) = 0xffffffff;
    *(undefined4 *)((longlong)puVar37 + 0x18c) = 0xffffffff;
    *(undefined4 *)(puVar37 + 0x32) = 0xffffffff;
    *(undefined4 *)((longlong)puVar37 + 0x194) = 0xffffffff;
    *(undefined4 *)(puVar37 + 0x33) = 0;
    *(undefined2 *)((longlong)puVar37 + 0x19c) = 0;
    puVar37[0x34] = 0;
    iVar23 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar23 + 1U;
    local_3f0 = puVar33;
    if (*(uint *)(param_2 + 0xa4) < iVar23 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar23);
    }
    lVar27 = local_440;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar23 * 8) = puVar37;
    puVar33 = local_198;
    puVar35 = puVar37 + 4;
    for (lVar29 = 0xe; lVar29 != 0; lVar29 = lVar29 + -1) {
      *puVar35 = *puVar33;
      puVar33 = puVar33 + 1;
      puVar35 = puVar35 + 1;
    }
    puVar37[0x12] = local_3e0;
    puVar37[0x13] = local_418;
    *(float *)(puVar37 + 0x14) = fVar42;
    puVar37[0x2e] = uVar34;
    puVar37[0x2f] = 0;
    *(undefined2 *)(puVar37 + 0x30) = 2;
    *(undefined4 *)((longlong)puVar37 + 0x184) = 2;
    puVar37[0x16] = local_408;
    puVar37[0x17] = 0;
    *(undefined4 *)(puVar37 + 0x18) = 0;
    uVar25 = *(undefined8 *)(local_440 + 0x13818);
    FUN_145ea1876();
    FUN_1448e935e(uVar25,&local_128,&DAT_14ca2ebb8,0);
    FUN_145ea1876();
    uVar22 = local_128;
    local_408 = lStack_120;
    uVar25 = *(undefined8 *)(lVar27 + 0x13818);
    FUN_146090f24();
    FUN_1448e935e(uVar25,&local_128,&DAT_14ca2ece0,0);
    FUN_146090f24();
    lVar27 = lStack_120;
    local_3d8 = local_128;
    FUN_145ea1ae4();
    local_128 = (undefined8 *)0x0;
    lStack_120 = 0;
    FUN_1448f70da(uVar22,&DAT_14ca33348,puVar30,&local_128);
    FUN_145ea1ae4();
    FUN_140069376(param_2);
    puVar33 = local_3f0;
    puVar36 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar36 + 0x3d;
    if (*(undefined8 **)(param_2 + 0x78) < puVar37) {
      FUN_140023dd8(local_3f0,0x1f0);
      puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar36 + 0x3d;
    }
    *local_3f0 = (ulonglong)puVar37;
    lStack_120 = DAT_14ca33390;
    if (DAT_14ca33390 != 0) {
      LOCK();
      *(int *)(DAT_14ca33390 + 8) = *(int *)(DAT_14ca33390 + 8) + 1;
      UNLOCK();
    }
    puStack_118 = &DAT_14ca33348;
    local_478 = (int *)CONCAT71(local_478._1_7_,2);
    local_128 = puVar30;
    FUN_140068f1a(puVar36,&local_1a8,&local_128,1);
    uVar32 = local_3f8;
    *puVar36 = &PTR_FUN_14a2c47e0;
    puVar36[0x37] = uVar22;
    puVar36[0x38] = local_408;
    puVar36[0x39] = local_3d8;
    puVar36[0x3a] = lVar27;
    puVar36[0x3b] = local_3f8;
    puVar36[0x3c] = puVar30;
    iVar23 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar23 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar23 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar23);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar23 * 8) = puVar36;
    *(int *)((longlong)puVar36 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar36);
    if (1 < local_424) goto LAB_142f033a5;
  }
  uVar25 = 0;
  uVar26 = local_420;
  pauVar38 = local_400;
LAB_142f03693:
  lVar27 = local_440;
  pauVar38[3] = (undefined1  [16])0x0;
  pauVar38[2] = (undefined1  [16])0x0;
  pauVar38[1] = (undefined1  [16])0x0;
  *pauVar38 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar38[4] = 0;
  if (*(int *)(lVar24 + 0xbc) == 1) {
    local_448 = *(undefined4 *)(lVar24 + 0xb8);
    local_128 = (undefined8 *)0x0;
    local_460 = &local_368;
    local_470 = *(undefined8 *)(lVar24 + 0x28);
    local_450 = &local_128;
    local_458 = 0;
    local_478 = (int *)local_358;
    local_468 = uVar26;
    local_368 = puVar31;
    local_360 = uVar25;
    FUN_142eff120(local_198,param_2,local_440,lVar24);
    local_448 = *(undefined4 *)(lVar24 + 0xb8);
    local_128 = (undefined8 *)
                CONCAT44(*(int *)(lVar24 + 0x80) - *(int *)(lVar24 + 0x78),
                         *(int *)(lVar24 + 0x7c) - *(int *)(lVar24 + 0x74));
    local_458 = *(undefined8 *)(lVar24 + 0x90);
    local_460 = &local_378;
    local_470 = local_198[0];
    local_378 = puVar31;
    local_370 = uVar25;
  }
  else {
    local_448 = *(undefined4 *)(lVar24 + 0xb8);
    local_128 = (undefined8 *)
                CONCAT44(*(int *)(lVar24 + 0x80) - *(int *)(lVar24 + 0x78),
                         *(int *)(lVar24 + 0x7c) - *(int *)(lVar24 + 0x74));
    local_458 = *(undefined8 *)(lVar24 + 0x90);
    local_460 = &local_388;
    local_470 = *(ulonglong *)(lVar24 + 0x28);
    local_388 = puVar31;
    local_380 = uVar25;
  }
  local_450 = &local_128;
  local_478 = (int *)local_358;
  local_468 = uVar26;
  FUN_142eff120(local_198,param_2,lVar27,lVar24);
  *(ulonglong *)*pauVar38 = local_198[0];
  *(ulonglong *)(*pauVar38 + 8) = local_198[1];
  *(ulonglong *)pauVar38[1] = local_198[2];
  *(ulonglong *)(pauVar38[1] + 8) = CONCAT44(uStack_17c,local_180);
  *(ulonglong *)pauVar38[2] = CONCAT44(iStack_174,local_178);
  *(ulonglong *)(pauVar38[2] + 8) = CONCAT44(uStack_16c,local_170);
  *(ulonglong *)pauVar38[3] =
       CONCAT26(uStack_162,CONCAT24(uStack_164,CONCAT13(uStack_165,CONCAT12(uStack_166,local_168))))
  ;
  *(undefined8 *)(pauVar38[3] + 8) = local_160;
  *(undefined8 *)pauVar38[4] = local_158;
  if ((local_f0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pauVar38;
}



// FUNCTION 142f03b10 FUN_142f03b10 body=69 status=ok
// SIG undefined FUN_142f03b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f03b10(void)

{
  _DAT_14ca2f258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f03b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f260,1);
  return;
}



// FUNCTION 142f03b55 FUN_142f03b55 body=69 status=ok
// SIG undefined FUN_142f03b55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f03b55(void)

{
  _DAT_14ca2f270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f03b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f278,1);
  return;
}



// FUNCTION 142f03bbe FUN_142f03bbe body=47 status=ok
// SIG undefined FUN_142f03bbe(void)

void FUN_142f03bbe(void)

{
  DAT_14ca2f608 = &PTR_FUN_14a2c49d0;
  FUN_144725486(&DAT_14ca2f608);
  FUN_1462ff9c6(&DAT_14ca2f608);
  return;
}



// FUNCTION 142f03bee FUN_142f03bee body=5944 status=ok
// SIG undefined FUN_142f03bee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f03bee(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,double *param_6)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 uVar12;
  byte bVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  ulonglong *puVar25;
  char *pcVar26;
  char cVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  undefined2 uVar31;
  undefined8 *puVar32;
  double *pdVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  longlong lVar39;
  longlong lVar40;
  bool bVar41;
  ulonglong uVar42;
  float fVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_488 [32];
  int *local_468;
  ulonglong *local_458;
  longlong *local_450;
  undefined8 *local_448;
  longlong local_440;
  longlong local_438;
  char *local_430;
  longlong *local_428;
  longlong *local_420;
  undefined8 *local_418;
  undefined8 *local_410;
  double *local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  double local_3e0;
  undefined8 *local_3d8;
  double local_3d0;
  longlong local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  int local_38c;
  int local_388;
  undefined4 local_384;
  int local_380;
  int iStack_37c;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double local_308;
  undefined8 local_300;
  undefined1 local_2f8 [128];
  double local_278 [6];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 local_1f8 [128];
  undefined8 local_178;
  double dStack_170;
  undefined *local_168;
  undefined4 local_160;
  uint uStack_15c;
  undefined4 local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined2 local_148;
  undefined1 uStack_146;
  undefined2 uStack_145;
  undefined1 uStack_143;
  undefined2 uStack_142;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_440 = param_4;
  local_3e8 = param_3;
  (**(code **)(*(longlong *)((longlong)param_6[0x4b] + 0x48) + 0x28))
            ((longlong)param_6[0x4b] + 0x48,&local_380);
  local_3f8 = *(longlong *)(&DAT_14ca814b0 + (ulonglong)*(ushort *)(param_1 + 0x8a8) * 0x3c);
  local_3f0 = DAT_14ca838f8;
  local_438 = param_1;
  if (local_3f8 == DAT_14ca838f8) {
    uVar30 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar30 = DAT_14ca84e48;
    }
    dStack_170 = (double)CONCAT44(dStack_170._4_4_,0x4109);
    local_168 = (undefined *)0x0;
    uVar24 = iStack_37c * local_380;
    if (DAT_14ca84e48 <= (uint)(iStack_37c * local_380)) {
      uVar24 = DAT_14ca84e48;
    }
    local_178 = (undefined8 *)CONCAT44(uVar24 + (uVar24 == 0),uVar30 + (uVar30 == 0));
    plVar1 = (longlong *)(param_2 + 0x70);
    uVar35 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar42 = uVar35 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar42) {
      FUN_140023dd8(plVar1,0x160);
      uVar35 = *plVar1 + 0xfU & 0xfffffffffffffff0;
      uVar42 = uVar35 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar42;
    FUN_1456bd266(uVar35,L"ProjectionBuffer",&local_178,0);
    iVar28 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar28 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar28 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar28);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar28 * 8) = uVar35;
    *(int *)(uVar35 + 0x7c) = *(int *)(param_2 + 400) + -1;
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar32 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar37) {
      FUN_140023dd8(plVar1,0x50);
      puVar32 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar37 = puVar32 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar37;
    puVar32[1] = *(undefined8 *)(uVar35 + 8);
    puVar32[2] = 0;
    *(undefined1 *)(puVar32 + 3) = 3;
    *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
    *puVar32 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar32 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar32 + 0x2c) = 0xffffffff00000000;
    puVar32[7] = 0;
    puVar32[8] = uVar35;
    iVar28 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar28 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar28 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar28);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar28 * 8) = puVar32;
    *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar37 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar34 = puVar37 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar34) {
      FUN_140023dd8(plVar1,0x48);
      puVar37 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar34 = puVar37 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar34;
    puVar37[1] = *(undefined8 *)(uVar35 + 8);
    puVar37[2] = 0;
    *(undefined1 *)(puVar37 + 3) = 2;
    *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar37 + 5) = 0;
    *puVar37 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar37 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar37 + 0x32) = 0;
    puVar37[7] = uVar35;
    iVar28 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar28 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar28 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar28);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar28 * 8) = puVar37;
    *(int *)((longlong)puVar37 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_418 = puVar32;
    FUN_1405bfba3(param_2,puVar37,0xffffffff,2);
    puVar32 = (undefined8 *)0x0;
    local_410 = (undefined8 *)0x0;
  }
  else {
    local_160 = DAT_14ca83a40;
    dStack_170 = (double)_DAT_14ca83a30;
    local_168 = _DAT_14ca83a38;
    uStack_15c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_146 = 0;
    local_178 = (undefined8 *)&DAT_00020008;
    uStack_145 = 0x1c;
    uStack_14c = 0x10001;
    local_148 = 0x101;
    local_158 = 0;
    uStack_143 = 0xff;
    iStack_154 = DAT_14ca84e40;
    if (local_380 < DAT_14ca84e40) {
      iStack_154 = local_380;
    }
    if (iStack_154 < 2) {
      iStack_154 = 1;
    }
    iStack_150 = DAT_14ca84e40;
    if (iStack_37c < DAT_14ca84e40) {
      iStack_150 = iStack_37c;
    }
    if (iStack_150 < 2) {
      iStack_150 = 1;
    }
    plVar1 = (longlong *)(param_2 + 0x70);
    uVar35 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar42 = uVar35 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar42) {
      FUN_140023dd8(plVar1,0x128);
      uVar35 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar42 = uVar35 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar42;
    FUN_1456bbb8c(uVar35,L"ProjectionTexture",&local_178,0);
    iVar28 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar28 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar28 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar28);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar28 * 8) = uVar35;
    *(int *)(uVar35 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    if ((*(char *)(uVar35 + 0x92) == '\x04') || (*(char *)(uVar35 + 0x92) == '\x01')) {
      uVar31 = *(undefined2 *)(uVar35 + 0x8e);
    }
    else {
      uVar31 = 0;
    }
    uVar12 = *(undefined1 *)(uVar35 + 0x90);
    local_410 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = local_410 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar37) {
      FUN_140023dd8(plVar1,0x48);
      local_410 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar37 = local_410 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar37;
    local_410[1] = *(undefined8 *)(uVar35 + 8);
    local_410[2] = 0;
    *(undefined1 *)(local_410 + 3) = 1;
    *(undefined8 *)((longlong)local_410 + 0x1c) = 0xffffffffffffffff;
    *local_410 = &PTR_FUN_14a203858;
    *(undefined2 *)(local_410 + 5) = 0;
    *(undefined1 *)((longlong)local_410 + 0x2a) = uVar12;
    *(undefined1 *)((longlong)local_410 + 0x2b) = 0;
    *(undefined2 *)((longlong)local_410 + 0x2c) = 0;
    *(undefined2 *)((longlong)local_410 + 0x2e) = uVar31;
    *(undefined1 *)(local_410 + 6) = 0;
    *(undefined1 *)((longlong)local_410 + 0x32) = 0;
    local_410[7] = uVar35;
    iVar28 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar28 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar28 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar28);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar28 * 8) = local_410;
    *(int *)((longlong)local_410 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    uVar12 = *(undefined1 *)(uVar35 + 0x94);
    puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar32 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar37) {
      FUN_140023dd8(plVar1,0x50);
      puVar32 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar37 = puVar32 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar37;
    puVar32[1] = *(undefined8 *)(uVar35 + 8);
    puVar32[2] = 0;
    *(undefined1 *)(puVar32 + 3) = 0;
    *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar32 + 5) = 0;
    *puVar32 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar32 + 6) = uVar12;
    *(undefined1 *)(puVar32 + 7) = 0;
    *(undefined4 *)((longlong)puVar32 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar32 + 0x35) = 0;
    puVar32[8] = uVar35;
    iVar28 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar28 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar28 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar28);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar28 * 8) = puVar32;
    *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_178 = (undefined8 *)0xffffffffffffffff;
    dStack_170 = -NAN;
    FUN_14042f6c6(param_2,puVar32,&local_178,2);
    puVar37 = (undefined8 *)0x0;
    local_418 = (undefined8 *)0x0;
    param_1 = local_438;
  }
  if (0 < *(int *)(param_1 + 0x3f0)) {
    pdVar33 = param_6 + 0x40;
    local_458 = (ulonglong *)(param_2 + 0x70);
    local_450 = (longlong *)(param_2 + 0x98);
    lVar40 = 0;
    lVar36 = 0;
    local_448 = puVar37;
    local_408 = pdVar33;
    do {
      puVar25 = local_458;
      lVar39 = *(longlong *)(param_1 + 1000);
      puVar34 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar37 = puVar34 + 0x10;
      if (*(undefined8 **)(param_2 + 0x78) < puVar37) {
        FUN_140023dd8(local_458,0x90);
        puVar34 = (undefined8 *)(*puVar25 + 0xf & 0xfffffffffffffff0);
        puVar37 = puVar34 + 0x10;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar37;
      *puVar34 = &PTR_FUN_14a2c4a30;
      puVar34[2] = 0;
      *(undefined1 *)(puVar34 + 3) = 1;
      *(undefined1 (*) [16])(puVar34 + 4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar34 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((longlong)puVar34 + 0x3c) = (undefined1  [16])0x0;
      auVar45._0_12_ = ZEXT812(0x3f800000);
      auVar45._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)puVar34 + 0x4c) = auVar45;
      *(undefined1 (*) [16])((longlong)puVar34 + 0x5c) = auVar45;
      *(undefined1 (*) [16])((longlong)puVar34 + 0x6c) = auVar45;
      *(undefined4 *)((longlong)puVar34 + 0x7c) = 0x3f800000;
      iVar28 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
        FUN_1448cfae8(local_450,iVar28);
      }
      *(undefined8 **)(*local_450 + (longlong)iVar28 * 8) = puVar34;
      lVar29 = FUN_1447e4f80();
      cVar27 = *(char *)(lVar29 + 0x41);
      if (*(char *)(lVar29 + 0x41) == '\x03') {
        cVar27 = '\x02';
      }
      pdVar2 = (double *)(lVar39 + 0x9b0 + lVar40);
      puVar34[2] = pdVar2[-0x133];
      *(char *)(puVar34 + 3) = cVar27;
      puVar34[4] = local_440;
      puVar34[5] = DAT_14c9c0d80;
      FUN_1467fd4e6(pdVar2,&local_178);
      dVar44 = pdVar2[5];
      dVar47 = pdVar2[10];
      dVar3 = pdVar2[0xf];
      dVar48 = pdVar2[0xb];
      dVar4 = pdVar2[0xe];
      dVar21 = dVar47 * dVar3 - dVar4 * dVar48;
      dVar5 = pdVar2[9];
      dVar6 = pdVar2[6];
      dVar7 = pdVar2[7];
      dVar23 = dVar6 * dVar3 - dVar4 * dVar7;
      dVar8 = pdVar2[0xd];
      dVar17 = dVar6 * dVar48 - dVar47 * dVar7;
      dVar9 = pdVar2[1];
      dVar10 = pdVar2[2];
      dVar11 = pdVar2[3];
      dVar22 = dVar3 * dVar10 - dVar4 * dVar11;
      dVar4 = dVar48 * dVar10 - dVar47 * dVar11;
      dVar46 = dVar10 * dVar7 - dVar6 * dVar11;
      dVar47 = param_6[10];
      dVar3 = param_6[8];
      dVar48 = param_6[9];
      dVar18 = local_118 * 0.0 +
               dVar47 * local_138 +
               dVar48 * (double)CONCAT44(iStack_154,local_158) + dVar3 * (double)local_178;
      dVar19 = dStack_110 * 0.0 +
               dVar47 * dStack_130 +
               dVar48 * (double)CONCAT44(uStack_14c,iStack_150) + dVar3 * dStack_170;
      dVar11 = 0.0;
      dVar6 = (double)local_168 * dVar3 +
              (double)CONCAT26(uStack_142,
                               CONCAT15(uStack_143,
                                        CONCAT23(uStack_145,CONCAT12(uStack_146,local_148)))) *
              dVar48 + local_128 * dVar47 + local_108 * 0.0;
      dVar10 = dVar6 * dVar6 + dVar18 * dVar18 + dVar19 * dVar19;
      dVar20 = 0.0;
      dVar7 = 0.0;
      if (9.99999993922529e-09 < dVar10) {
        dVar11 = 1.0 / SQRT(dVar10);
        dVar7 = dVar6 * dVar11;
        dVar20 = dVar19 * dVar11;
        dVar11 = dVar11 * dVar18;
      }
      dVar44 = ((dVar8 * dVar46 + (dVar23 * dVar9 - dVar22 * dVar44)) * pdVar2[8] +
               ((dVar8 * dVar17 + (dVar44 * dVar21 - dVar23 * dVar5)) * *pdVar2 -
               (dVar8 * dVar4 + (dVar21 * dVar9 - dVar22 * dVar5)) * pdVar2[4])) -
               (dVar46 * dVar5 + (dVar17 * dVar9 - dVar4 * dVar44)) * pdVar2[0xc];
      if (dVar44 < 0.0) {
        dVar20 = -dVar20;
        dVar7 = -dVar7;
      }
      uVar42 = -(ulonglong)(dVar44 < 0.0);
      dVar8 = (double)(~uVar42 & (ulonglong)dVar11 | (ulonglong)-dVar11 & uVar42);
      dVar44 = param_6[0xb];
      dVar47 = dVar47 * dVar44;
      dVar48 = dVar48 * dVar44;
      dVar3 = dVar3 * dVar44;
      pdVar2 = (double *)(lVar39 + 0x9b0 + lVar40);
      dVar9 = *pdVar2;
      dVar10 = pdVar2[1];
      pdVar2 = (double *)(lVar39 + 0x9d0 + lVar40);
      dVar11 = *pdVar2;
      dVar17 = pdVar2[1];
      pdVar2 = (double *)(lVar39 + 0x9f0 + lVar40);
      dVar18 = *pdVar2;
      dVar19 = pdVar2[1];
      pdVar2 = (double *)(lVar39 + 0xa10 + lVar40);
      dVar21 = *pdVar2;
      dVar22 = pdVar2[1];
      dVar44 = *(double *)(lVar39 + 0xa00 + lVar40);
      dVar4 = *(double *)(lVar39 + 0x9e0 + lVar40);
      dVar5 = *(double *)(lVar39 + 0x9c0 + lVar40);
      dVar6 = *(double *)(lVar39 + 0xa20 + lVar40);
      *(float *)(puVar34 + 8) = (float)dVar8;
      *(float *)((longlong)puVar34 + 0x44) = (float)dVar20;
      *(float *)(puVar34 + 9) = (float)dVar7;
      *(float *)((longlong)puVar34 + 0x4c) =
           (float)((dVar3 * dVar5 + dVar48 * dVar4 + dVar47 * dVar44 + dVar6) * dVar7 +
                  (dVar47 * dVar18 + dVar48 * dVar11 + dVar3 * dVar9 + dVar21) * dVar8 +
                  (dVar47 * dVar19 + dVar48 * dVar17 + dVar3 * dVar10 + dVar22) * dVar20);
      iVar28 = *(int *)((longlong)pdVar33 + 4);
      *(float *)(puVar34 + 10) = (float)*(int *)pdVar33;
      *(float *)((longlong)puVar34 + 0x54) = (float)iVar28;
      puVar34[0xb] = 0;
      *(float *)(puVar34 + 0xc) = (float)local_380;
      *(float *)((longlong)puVar34 + 100) = (float)iStack_37c;
      *(float *)(puVar34 + 0xd) = 1.0 / (float)local_380;
      *(float *)((longlong)puVar34 + 0x6c) = 1.0 / (float)iStack_37c;
      iVar28 = *(int *)(pdVar33 + 1);
      fVar43 = (float)(*(int *)((longlong)pdVar33 + 0xc) - *(int *)((longlong)pdVar33 + 4));
      iVar14 = *(int *)pdVar33;
      *(float *)(puVar34 + 0xe) = (float)(iVar28 - iVar14);
      *(float *)((longlong)puVar34 + 0x74) = fVar43;
      *(float *)(puVar34 + 0xf) = 1.0 / (float)(iVar28 - iVar14);
      *(float *)((longlong)puVar34 + 0x7c) = 1.0 / fVar43;
      puVar34[6] = puVar32;
      puVar34[7] = local_448;
      uVar15 = *(undefined8 *)(lVar39 + 0x13818 + lVar40);
      FUN_145f34524();
      FUN_1448e935e(uVar15,&local_178,&DAT_14ca2f2f8,0);
      FUN_145f34524();
      local_388 = (int)(~*(uint *)((longlong)pdVar33 + 4) + *(int *)((longlong)pdVar33 + 0xc) +
                       DAT_14ca2f28c) / DAT_14ca2f28c;
      local_38c = (int)(~*(uint *)pdVar33 + *(int *)(pdVar33 + 1) + DAT_14ca2f288) / DAT_14ca2f288;
      local_384 = 1;
      local_468 = &local_38c;
      FUN_147298e8e(param_2,local_1f8,&local_178);
      lVar36 = lVar36 + 1;
      pdVar33 = pdVar33 + 2;
      lVar40 = lVar40 + 0x13c10;
      param_1 = local_438;
    } while (lVar36 < *(int *)(local_438 + 0x3f0));
    if (0 < *(int *)(local_438 + 0x3f0)) {
      local_400 = param_2 + 0x168;
      local_420 = (longlong *)(param_2 + 0x1b8);
      local_430 = (char *)(param_2 + 0x4a8);
      local_428 = (longlong *)(param_2 + 0x4b0);
      lVar39 = 0x13818;
      lVar40 = 0;
      lVar36 = local_438;
      do {
        lVar36 = *(longlong *)(lVar36 + 1000);
        uVar15 = *(undefined8 *)(lVar36 + lVar39);
        FUN_145eddc54();
        FUN_1448e935e(uVar15,&local_178,&DAT_14ca2f420,0);
        FUN_145eddc54();
        puVar25 = local_458;
        local_3d8 = local_178;
        local_3d0 = dStack_170;
        puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar37 = puVar32 + 0xc;
        if (*(undefined8 **)(param_2 + 0x78) < puVar37) {
          FUN_140023dd8(local_458,0x70);
          puVar32 = (undefined8 *)(*puVar25 + 0xf & 0xfffffffffffffff0);
          puVar37 = puVar32 + 0xc;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar37;
        *puVar32 = &PTR_FUN_14a2c4a58;
        puVar32[2] = 0;
        *(undefined1 *)(puVar32 + 3) = 1;
        iVar28 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
        local_3c8 = lVar40;
        if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_450,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar28 * 8) = puVar32;
        lVar40 = FUN_1447e4f80();
        cVar27 = *(char *)(lVar40 + 0x41);
        if (*(char *)(lVar40 + 0x41) == '\x03') {
          cVar27 = '\x02';
        }
        puVar32[2] = *(undefined8 *)(lVar36 + -0x13800 + lVar39);
        *(char *)(puVar32 + 3) = cVar27;
        local_278[5] = (param_6[4] - param_6[1]) * 0.5;
        local_278[0] = (param_6[3] - *param_6) * 0.5;
        local_278[3] = 0.0;
        local_278[4] = 0.0;
        local_278[1] = 0.0;
        local_278[2] = 0.0;
        local_238 = 0;
        uStack_230 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_228 = 0x3ff0000000000000;
        local_210 = 0;
        uStack_208 = 0;
        local_220 = 0;
        uStack_218 = 0;
        local_200 = 0x3ff0000000000000;
        local_3a8 = param_6[0x14];
        local_3a0 = param_6[0x15];
        local_398 = param_6[0x16];
        local_3c0 = param_6[0x10];
        local_3b8 = param_6[0x11];
        local_3b0 = param_6[0x12];
        FUN_147298f40(local_2f8,&local_3c0,&local_3a8);
        FUN_1447fea8d(local_1f8,local_278,local_2f8);
        local_308 = param_6[0xe];
        local_318 = *(undefined4 *)(param_6 + 0xc);
        uStack_314 = *(undefined4 *)((longlong)param_6 + 100);
        uStack_310 = *(undefined4 *)(param_6 + 0xd);
        uStack_30c = *(undefined4 *)((longlong)param_6 + 0x6c);
        local_378 = 0x3ff0000000000000;
        local_360 = 0;
        uStack_358 = 0;
        local_370 = 0;
        uStack_368 = 0;
        local_350 = 0x3ff0000000000000;
        local_338 = 0;
        uStack_330 = 0;
        local_348 = 0;
        uStack_340 = 0;
        local_328 = 0x3ff0000000000000;
        local_320 = 0;
        local_300 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178,local_1f8,&local_378);
        *(float *)(puVar32 + 4) = (float)(double)local_178;
        *(float *)((longlong)puVar32 + 0x24) = (float)dStack_170;
        *(float *)(puVar32 + 5) = (float)(double)local_168;
        *(float *)((longlong)puVar32 + 0x2c) = (float)(double)CONCAT44(uStack_15c,local_160);
        *(float *)(puVar32 + 6) = (float)(double)CONCAT44(iStack_154,local_158);
        *(float *)((longlong)puVar32 + 0x34) = (float)(double)CONCAT44(uStack_14c,iStack_150);
        *(float *)(puVar32 + 7) =
             (float)(double)CONCAT26(uStack_142,
                                     CONCAT15(uStack_143,
                                              CONCAT23(uStack_145,CONCAT12(uStack_146,local_148))));
        *(float *)((longlong)puVar32 + 0x3c) = (float)local_140;
        *(float *)(puVar32 + 8) = (float)local_138;
        *(float *)((longlong)puVar32 + 0x44) = (float)dStack_130;
        *(float *)(puVar32 + 9) = (float)local_128;
        *(float *)((longlong)puVar32 + 0x4c) = (float)local_120;
        *(float *)(puVar32 + 10) = (float)local_118;
        *(float *)((longlong)puVar32 + 0x54) = (float)dStack_110;
        *(float *)(puVar32 + 0xb) = (float)local_108;
        *(float *)((longlong)puVar32 + 0x5c) = (float)local_100;
        iVar28 = FUN_147cee408();
        uVar15 = *(undefined8 *)(lVar36 + lVar39);
        local_440 = lVar36;
        FUN_145e6db14();
        FUN_1448e935e(uVar15,&local_178,&DAT_14ca2f548,iVar28 + -1);
        FUN_145e6db14();
        puVar25 = local_458;
        local_448 = local_178;
        local_3e0 = dStack_170;
        puVar34 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar37 = puVar34 + 0x30;
        if (*(undefined8 **)(param_2 + 0x78) < puVar37) {
          FUN_140023dd8(local_458,400);
          puVar34 = (undefined8 *)(*puVar25 + 0xf & 0xfffffffffffffff0);
          puVar37 = puVar34 + 0x30;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar37;
        *puVar34 = &PTR_FUN_14a2c4a60;
        puVar37 = puVar34 + 2;
        FUN_1472a7c36(puVar37);
        lVar40 = local_3c8;
        iVar28 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar28 + 1U) {
          FUN_1448cfae8(local_450,iVar28);
        }
        *(undefined8 **)(*local_450 + (longlong)iVar28 * 8) = puVar34;
        puVar34[0x10] = param_5;
        puVar34[0x11] = 0;
        *(char *)(puVar34 + 0x12) = (lVar40 == 0) + '\x01';
        *(undefined1 *)((longlong)puVar34 + 0x91) = 0;
        *(undefined2 *)((longlong)puVar34 + 0x92) = 0xffff;
        lVar36 = FUN_1447e4f80();
        pdVar33 = local_408;
        cVar27 = *(char *)(lVar36 + 0x41);
        if (*(char *)(lVar36 + 0x41) == '\x03') {
          cVar27 = '\x02';
        }
        puVar34[2] = *(undefined8 *)(local_440 + -0x13800 + lVar39);
        *(char *)(puVar34 + 3) = cVar27;
        puVar34[4] = local_3e8;
        puVar34[5] = DAT_14c9c0d80;
        if (local_3f8 == local_3f0) {
          puVar34[7] = local_418;
        }
        else {
          puVar34[6] = local_410;
        }
        iVar28 = *(int *)((longlong)local_408 + 4);
        *(float *)(puVar34 + 0xe) = (float)*(int *)local_408;
        *(float *)((longlong)puVar34 + 0x74) = (float)iVar28;
        puVar34[0xf] = 0;
        *(float *)(puVar34 + 10) = (float)local_380;
        *(float *)((longlong)puVar34 + 0x54) = (float)iStack_37c;
        *(float *)(puVar34 + 0xb) = 1.0 / (float)local_380;
        *(float *)((longlong)puVar34 + 0x5c) = 1.0 / (float)iStack_37c;
        iVar28 = *(int *)(local_408 + 1);
        fVar43 = (float)(*(int *)((longlong)local_408 + 0xc) - *(int *)((longlong)local_408 + 4));
        iVar14 = *(int *)local_408;
        *(float *)(puVar34 + 0xc) = (float)(iVar28 - iVar14);
        *(float *)((longlong)puVar34 + 100) = fVar43;
        *(float *)(puVar34 + 0xd) = 1.0 / (float)(iVar28 - iVar14);
        *(float *)((longlong)puVar34 + 0x6c) = 1.0 / fVar43;
        dVar44 = param_6[10];
        dVar47 = param_6[9];
        *(float *)(puVar34 + 8) = (float)param_6[8];
        *(float *)((longlong)puVar34 + 0x44) = (float)dVar47;
        *(float *)(puVar34 + 9) = (float)dVar44;
        *(undefined4 *)((longlong)puVar34 + 0x4c) = 0x3f800000;
        FUN_145e6dd80();
        local_178 = (undefined8 *)0x0;
        dStack_170 = 0.0;
        FUN_1448f70da(local_448,&DAT_14ca33700,puVar37,&local_178);
        dVar44 = *pdVar33;
        dVar47 = pdVar33[1];
        FUN_145e6dd80();
        FUN_140069376(param_2);
        puVar25 = local_458;
        puVar38 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar34 = puVar38 + 0x3f;
        if (*(undefined8 **)(param_2 + 0x78) < puVar34) {
          FUN_140023dd8(local_458,0x200);
          puVar38 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
          puVar34 = puVar38 + 0x3f;
        }
        *local_458 = (ulonglong)puVar34;
        dStack_170 = DAT_14ca33748;
        if (DAT_14ca33748 != 0.0) {
          LOCK();
          *(int *)((longlong)DAT_14ca33748 + 8) = *(int *)((longlong)DAT_14ca33748 + 8) + 1;
          UNLOCK();
        }
        local_168 = &DAT_14ca33700;
        local_468 = (int *)CONCAT71(local_468._1_7_,2);
        local_178 = puVar37;
        FUN_140068f1a(puVar38,local_1f8,&local_178);
        *puVar38 = &PTR_FUN_14a2c4a70;
        puVar38[0x37] = local_3d8;
        puVar38[0x38] = local_3d0;
        puVar38[0x39] = puVar32 + 2;
        puVar38[0x3a] = local_448;
        puVar38[0x3b] = local_3e0;
        puVar38[0x3c] = puVar37;
        puVar38[0x3d] = dVar44;
        puVar38[0x3e] = dVar47;
        iVar28 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar28 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar28 + 1U) {
          FUN_14470e57a(local_400,iVar28);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar28 * 8) = puVar38;
        *(int *)((longlong)puVar38 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar38);
        lVar29 = *(longlong *)(local_440 + -0x10710 + lVar39);
        lVar36 = local_438;
        if ((lVar29 != 0) && ((*(byte *)(local_440 + -0x1268 + lVar39) & 1) == 0)) {
          plVar1 = *(longlong **)(lVar29 + 0x1788);
          if (plVar1 != (longlong *)0x0) {
            *(undefined8 *)(lVar29 + 0x1788) = 0;
            (**(code **)(*plVar1 + 0x38))();
          }
          bVar13 = *(byte *)(param_5 + 0x24);
          *(byte *)(param_5 + 0x24) = bVar13 | 2;
          *(undefined1 *)(param_5 + 0x26) = 1;
          iVar28 = *(int *)(param_2 + 0x1c0);
          *(uint *)(param_2 + 0x1c0) = iVar28 + 1U;
          if (*(uint *)(param_2 + 0x1c4) < iVar28 + 1U) {
            FUN_14017e38e(local_420,iVar28);
          }
          pcVar26 = local_430;
          lVar36 = local_438;
          lVar16 = *local_420;
          *(longlong *)(lVar16 + (longlong)iVar28 * 0x10) = param_5;
          *(undefined8 **)(lVar16 + 8 + (longlong)iVar28 * 0x10) = (undefined8 *)(lVar29 + 0x1788);
          if ((bVar13 & 2) == 0) {
            LOCK();
            cVar27 = *local_430;
            if (cVar27 == '\0') {
              *local_430 = '\x01';
            }
            UNLOCK();
            if (cVar27 != '\0') {
              FUN_1447d2058(local_430);
            }
            iVar28 = *(int *)(param_2 + 0x4b8);
            *(uint *)(param_2 + 0x4b8) = iVar28 + 1U;
            if (*(uint *)(param_2 + 0x4bc) < iVar28 + 1U) {
              FUN_1447f2dbc(local_428,iVar28);
            }
            lVar29 = *local_428;
            *(undefined8 *)(lVar29 + (longlong)iVar28 * 0x10) = 2;
            *(longlong *)(lVar29 + 8 + (longlong)iVar28 * 0x10) = param_5;
            LOCK();
            bVar41 = *pcVar26 == '\x01';
            if (bVar41) {
              *pcVar26 = '\0';
            }
            UNLOCK();
            if (!bVar41) {
              FUN_14008cdb0(local_430);
            }
          }
        }
        lVar40 = lVar40 + 1;
        local_408 = local_408 + 2;
        lVar39 = lVar39 + 0x13c10;
      } while (lVar40 < *(int *)(lVar36 + 0x3f0));
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f05334 FUN_142f05334 body=1735 status=ok
// SIG undefined FUN_142f05334(void)

void FUN_142f05334(ulonglong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double *pdVar17;
  double *pdVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  ulonglong *local_180;
  ulonglong local_178;
  longlong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong *local_158;
  undefined1 local_149;
  double local_148 [15];
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined8 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  ulonglong local_9c;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_86;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = (ulonglong *)param_4;
  local_170 = param_3;
  local_158 = param_1;
  if (*(char *)(param_4 + 0x10) == '\x01') {
    FUN_147cf0546(param_3,local_148,param_4 + 0x18);
    fVar22 = (float)(0.5 - local_148[1] * 0.5);
    fVar21 = (float)(local_148[0] * 0.5 + 0.5);
  }
  else {
    fVar21 = 0.5;
    fVar22 = 0.5;
  }
  lVar13 = *param_5;
  uVar4 = *(undefined4 *)(lVar13 + 0x92);
  uVar7 = *(undefined8 *)(lVar13 + 0x84);
  uVar5 = *(undefined4 *)(lVar13 + 0x8c);
  uVar3 = *(undefined1 *)(lVar13 + 0x90);
  uVar6 = *(undefined4 *)(lVar13 + 0x68);
  uVar10 = *(undefined8 *)(lVar13 + 0x6c);
  uVar11 = *(undefined8 *)(lVar13 + 0x74);
  local_178 = *(ulonglong *)(lVar13 + 0x7c);
  puVar16 = (undefined8 *)(*(ulonglong *)(lVar13 + 0x60) & 0xfffffffff7fdeffc | 0x20001);
  local_c8 = (int)param_5[1];
  iStack_c4 = *(int *)((longlong)param_5 + 0xc);
  iStack_c0 = (int)param_5[2];
  iStack_bc = *(int *)((longlong)param_5 + 0x14);
  local_d0 = uVar7;
  FUN_144a2c7c2(local_148,&local_d0);
  local_160 = CONCAT44(iStack_c4,local_c8);
  local_168 = CONCAT44(iStack_bc,iStack_c0);
  local_87 = 1;
  uStack_ac = (undefined4)uVar10;
  uStack_a8 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_a4 = (undefined4)uVar11;
  uStack_a0 = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_9c = local_178;
  local_94 = DAT_14ca84e40;
  if ((int)uVar7 < DAT_14ca84e40) {
    local_94 = (int)uVar7;
  }
  if (local_94 < 2) {
    local_94 = 1;
  }
  iVar14 = (int)((ulonglong)uVar7 >> 0x20);
  local_90 = DAT_14ca84e40;
  if (iVar14 < DAT_14ca84e40) {
    local_90 = iVar14;
  }
  if (local_90 < 2) {
    local_90 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar20 + 0x120;
  local_b8 = puVar16;
  uStack_b0 = uVar6;
  local_8c = uVar5;
  local_88 = uVar3;
  local_86 = uVar4;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(puVar1,0x128);
    uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar12 = uVar20 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bbb8c(uVar20,L"RadialBlur.SceneColor",&local_b8,0);
  iVar14 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar14 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar14 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar14);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar14 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar16 = puVar15 + 0x16;
  if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
    FUN_140023dd8(puVar1,0xc0);
    puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar16 = puVar15 + 0x16;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar16;
  *puVar15 = &PTR_FUN_14a2c4a88;
  puVar15[2] = 0;
  puVar15[3] = 0x3f80000000000000;
  puVar15[0x12] = 0;
  puVar15[0x13] = 0;
  puVar15[0x14] = 0;
  iVar14 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar14 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar14 * 8) = puVar15;
  *(undefined4 *)(puVar15 + 2) = *(undefined4 *)((longlong)local_180 + 0xc);
  *(float *)((longlong)puVar15 + 0x14) = fVar21;
  *(float *)(puVar15 + 3) = fVar22;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
  pdVar17 = local_148;
  pdVar18 = (double *)(puVar15 + 4);
  for (lVar13 = 0xe; lVar13 != 0; lVar13 = lVar13 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
  puVar15[0x12] = DAT_14c9c0de0;
  puVar15[0x13] = *param_5;
  uVar3 = *(undefined1 *)(uVar20 + 0x94);
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar19 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar16) {
    FUN_140023dd8(puVar1,0x50);
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar19 + 9;
  }
  puVar2 = puVar15 + 2;
  *(undefined8 **)(param_2 + 0x70) = puVar16;
  puVar19[1] = *(undefined8 *)(uVar20 + 8);
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 0;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar19 + 5) = 0;
  *puVar19 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar19 + 6) = uVar3;
  *(undefined1 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
  puVar19[8] = uVar20;
  iVar14 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar14 + 1U;
  local_180 = puVar1;
  if (*(uint *)(param_2 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar14 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar15[0x14] = puVar19;
  uVar7 = *(undefined8 *)(local_170 + 0x13818);
  FUN_14159d924();
  FUN_1448e935e(uVar7,&local_b8,&DAT_14ca2f688,0);
  FUN_14159d924();
  puVar16 = local_b8;
  local_170 = CONCAT44(uStack_ac,uStack_b0);
  iVar14 = (iStack_c0 - local_c8) + 7;
  iVar8 = (iStack_c0 - local_c8) + 0xe;
  if (-1 < iVar14) {
    iVar8 = iVar14;
  }
  iVar14 = (iStack_bc - iStack_c4) + 7;
  iVar9 = (iStack_bc - iStack_c4) + 0xe;
  if (-1 < iVar14) {
    iVar9 = iVar14;
  }
  FUN_14159da46();
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1448f70da(puVar16,&DAT_14ca33788,puVar2,&local_b8);
  FUN_140069376(param_2);
  puVar1 = local_180;
  uVar12 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar12 = 4;
  }
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar19 + 0x3d;
  if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
    local_178 = CONCAT62(local_178._2_6_,(short)uVar12);
    FUN_140023dd8(local_180,0x1f0);
    uVar12 = local_178 & 0xffff;
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar19 + 0x3d;
  }
  *local_180 = (ulonglong)puVar15;
  uStack_b0 = (undefined4)DAT_14ca337d0;
  uStack_ac = (undefined4)((ulonglong)DAT_14ca337d0 >> 0x20);
  if (DAT_14ca337d0 != 0) {
    LOCK();
    *(int *)(DAT_14ca337d0 + 8) = *(int *)(DAT_14ca337d0 + 8) + 1;
    UNLOCK();
  }
  uStack_a8 = 0x4ca33788;
  uStack_a4 = 1;
  local_188 = 2;
  local_b8 = puVar2;
  FUN_140068f1a(puVar19,&local_149,&local_b8,uVar12);
  *puVar19 = &PTR_FUN_14a2c4a90;
  puVar19[0x37] = &DAT_14ca33788;
  puVar19[0x38] = puVar2;
  puVar19[0x39] = puVar16;
  puVar19[0x3a] = local_170;
  *(int *)(puVar19 + 0x3b) = iVar8 >> 3;
  *(int *)((longlong)puVar19 + 0x1dc) = iVar9 >> 3;
  *(undefined4 *)(puVar19 + 0x3c) = 1;
  iVar14 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar14 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar14 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar14 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar19);
  *local_158 = uVar20;
  local_158[1] = local_160;
  local_158[2] = local_168;
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f059fc FUN_142f059fc body=69 status=ok
// SIG undefined FUN_142f059fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f059fc(void)

{
  _DAT_14ca2f748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f750,1);
  return;
}



// FUNCTION 142f05a41 FUN_142f05a41 body=69 status=ok
// SIG undefined FUN_142f05a41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05a41(void)

{
  _DAT_14ca2f760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f768,1);
  return;
}



// FUNCTION 142f05a86 FUN_142f05a86 body=69 status=ok
// SIG undefined FUN_142f05a86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05a86(void)

{
  _DAT_14ca2f778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f780,1);
  return;
}



// FUNCTION 142f05acb FUN_142f05acb body=69 status=ok
// SIG undefined FUN_142f05acb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05acb(void)

{
  _DAT_14ca2f790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f798,1);
  return;
}



// FUNCTION 142f05b10 FUN_142f05b10 body=69 status=ok
// SIG undefined FUN_142f05b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05b10(void)

{
  _DAT_14ca2f7a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f7b0,1);
  return;
}



// FUNCTION 142f05b55 FUN_142f05b55 body=69 status=ok
// SIG undefined FUN_142f05b55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05b55(void)

{
  _DAT_14ca2f7c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f7c8,1);
  return;
}



// FUNCTION 142f05b9a FUN_142f05b9a body=69 status=ok
// SIG undefined FUN_142f05b9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05b9a(void)

{
  _DAT_14ca2f7d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f7e0,1);
  return;
}



// FUNCTION 142f05bdf FUN_142f05bdf body=69 status=ok
// SIG undefined FUN_142f05bdf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05bdf(void)

{
  _DAT_14ca2f7f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f7f8,1);
  return;
}



// FUNCTION 142f05c24 FUN_142f05c24 body=69 status=ok
// SIG undefined FUN_142f05c24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05c24(void)

{
  _DAT_14ca2f808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f810,1);
  return;
}



// FUNCTION 142f05c69 FUN_142f05c69 body=69 status=ok
// SIG undefined FUN_142f05c69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05c69(void)

{
  _DAT_14ca2f820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f828,1);
  return;
}



// FUNCTION 142f05cae FUN_142f05cae body=69 status=ok
// SIG undefined FUN_142f05cae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05cae(void)

{
  _DAT_14ca2f838 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f840,1);
  return;
}



// FUNCTION 142f05cf3 FUN_142f05cf3 body=69 status=ok
// SIG undefined FUN_142f05cf3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05cf3(void)

{
  _DAT_14ca2f850 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f858,1);
  return;
}



// FUNCTION 142f05d38 FUN_142f05d38 body=69 status=ok
// SIG undefined FUN_142f05d38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05d38(void)

{
  _DAT_14ca2f868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f870,1);
  return;
}



// FUNCTION 142f05d7d FUN_142f05d7d body=69 status=ok
// SIG undefined FUN_142f05d7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05d7d(void)

{
  _DAT_14ca2f880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f888,1);
  return;
}



// FUNCTION 142f05dc2 FUN_142f05dc2 body=69 status=ok
// SIG undefined FUN_142f05dc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f05dc2(void)

{
  _DAT_14ca2f898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f05e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca2f8a0,1);
  return;
}



// FUNCTION 142f05e07 FUN_142f05e07 body=557 status=ok
// SIG undefined FUN_142f05e07(void)

uint FUN_142f05e07(longlong *param_1)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  lVar5 = param_1[1];
  if ((int)lVar5 == 0) {
    uVar16 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    uVar16 = 0;
    iVar14 = 0;
    do {
      piVar6 = DAT_14ca2f758;
      lVar3 = *param_1;
      uVar2 = *(ushort *)
               (&DAT_14ca85070 + (longlong)*(int *)(lVar3 + 0x3090 + (longlong)iVar14 * 0x13c10) * 2
               );
      puVar12 = DAT_14ca96af8;
      if (DAT_14ca96af8 == (undefined4 *)0x0) {
        puVar12 = &DAT_14ca96aa8;
      }
      if (((uint)puVar12[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf];
      }
      iVar7 = *piVar1;
      if (iVar7 == 0x40000002) {
        iVar17 = *DAT_14ca2f758;
LAB_142f05f9a:
        uVar11 = 0;
        lVar15 = DAT_14ca2f770;
      }
      else {
        if (DAT_14c86a9f8 == 0) {
          iVar17 = *DAT_14ca2f758;
        }
        else if (iVar7 == 2) {
          iVar17 = *DAT_14ca2f758;
          iVar7 = 2;
        }
        else {
          if (iVar7 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            bVar18 = DVar9 == DVar10;
            iVar7 = *piVar1;
          }
          else {
            bVar18 = false;
          }
          iVar17 = piVar6[bVar18 ^ 1];
          if (iVar7 == 0x40000002) goto LAB_142f05f9a;
        }
        lVar15 = DAT_14ca2f770;
        bVar18 = true;
        if (((DAT_14c86a9f8 & 1) != 0) && (iVar7 != 2)) {
          if (iVar7 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            bVar18 = DVar9 == DVar10;
          }
          else {
            bVar18 = false;
          }
        }
        uVar11 = (ulonglong)(bVar18 ^ 1);
      }
      uVar2 = *(ushort *)(lVar3 + (longlong)iVar14 * 0x13c10 + 0x125b8);
      uVar13 = 0;
      if (0.0 < *(float *)(lVar15 + uVar11 * 4)) {
        uVar13 = 1 << ((byte)iVar14 & 0x1f);
      }
      uVar8 = uVar2 & 0x220;
      if ((uVar2 & 0x220) != 0) {
        uVar8 = uVar13;
      }
      if (iVar17 == 0) {
        uVar8 = 0;
      }
      if (bVar4) {
        uVar8 = 0;
      }
      uVar16 = uVar16 | uVar8;
      iVar14 = iVar14 + 1;
    } while ((int)lVar5 != iVar14);
  }
  return uVar16;
}



// FUNCTION 142f06103 FUN_142f06103 body=20924 status=ok
// SIG undefined FUN_142f06103(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142f06103(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       undefined1 param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  ulonglong *puVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  undefined *puVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong *plVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong *puVar33;
  undefined *puVar34;
  int iVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined6 uVar39;
  undefined8 *puVar38;
  int *piVar40;
  wchar_t *pwVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined8 *puVar44;
  ulonglong uVar45;
  uint uVar46;
  uint uVar47;
  longlong lVar48;
  bool bVar49;
  float fVar50;
  undefined1 auStack_5b8 [32];
  wchar_t *local_598;
  wchar_t *local_590;
  undefined8 uStack_588;
  char *local_580;
  code *local_578;
  code *local_570;
  undefined8 *local_568;
  undefined1 *local_560;
  undefined1 *local_558;
  undefined1 *local_550;
  undefined4 local_548;
  undefined *local_540;
  ulonglong *local_530;
  longlong local_528;
  uint local_51c;
  longlong local_518;
  longlong local_510;
  ulonglong *local_508;
  uint *local_500;
  wchar_t *local_4f8;
  ulonglong local_4f0;
  longlong local_4e8;
  wchar_t *local_4e0;
  ulonglong local_4d8;
  uint local_4cc;
  undefined8 local_4c8;
  undefined8 local_4c0;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  wchar_t *local_490;
  uint local_484;
  longlong local_480;
  undefined8 local_478;
  undefined8 local_470;
  ulonglong local_468;
  wchar_t *local_460;
  undefined8 *local_458;
  undefined8 local_450;
  longlong local_448;
  longlong local_440;
  longlong *local_438;
  undefined1 local_429;
  undefined8 local_428 [14];
  undefined8 local_3b8 [14];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  ulonglong local_310;
  ulonglong uStack_308;
  ulonglong local_300;
  ulonglong local_2f8;
  undefined8 local_2f0;
  longlong local_2e8 [2];
  longlong *local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  ulonglong local_2a8 [3];
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  byte bStack_284;
  ulonglong local_280 [7];
  wchar_t *pwStack_248;
  ulonglong local_240;
  ulonglong uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  ulonglong local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  uint local_1fc;
  undefined4 local_1f8;
  longlong local_1f4;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined4 local_1e7;
  undefined1 local_1e3;
  ulonglong local_1e0;
  undefined4 local_1d8;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  uint local_1c4;
  undefined4 uStack_1c0;
  longlong local_1bc;
  undefined2 local_1b4;
  undefined2 uStack_1b2;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong lStack_190;
  undefined4 local_188;
  longlong local_178;
  longlong *local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  uint uStack_fc;
  undefined4 local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined2 uStack_e5;
  undefined1 uStack_e3;
  undefined2 uStack_e2;
  undefined8 local_e0;
  wchar_t *local_d8;
  ulonglong uStack_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  wchar_t *local_b8;
  ulonglong local_b0;
  wchar_t *local_a8;
  ulonglong local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  wchar_t *local_88;
  undefined1 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  local_4a0 = *(longlong *)(param_3 + 0x1b0);
  uVar31 = *(ulonglong *)(param_2 + 0x30f8);
  uVar22 = *(undefined8 *)(param_2 + 0x3100);
  local_508 = *(ulonglong **)(local_4a0 + 0x84);
  local_518 = param_2;
  local_4f0 = param_3;
  local_300 = (ulonglong)local_508;
  local_2f8 = uVar31;
  local_2f0 = uVar22;
  fVar50 = (float)FUN_140277109();
  piVar40 = DAT_14ca97170;
  local_51c = 2;
  if (0.0 < fVar50) {
    local_51c = (uint)(*(int *)(DAT_14ca2f788 + 4) != 0);
  }
  cVar10 = *(char *)(local_4a0 + 0x93);
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar35 = *(int *)(lVar23 + 0xc60);
  if (((iVar35 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar35 == 2)) {
    uVar30 = 0;
  }
  else if (iVar35 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar30 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar30 = 1;
  }
  lVar48 = DAT_14ca971d0;
  local_500 = (uint *)(lVar23 + 0xc60);
  local_528 = param_1;
  if (piVar40[uVar30] < 1) {
LAB_142f06230:
    iVar35 = *(int *)(DAT_14ca2f800 + 4);
    if (iVar35 == 0) goto LAB_142f062d9;
    if (iVar35 == 2) {
      local_4c0 = CONCAT71((int7)(uVar30 >> 8),cVar10 != '\n' && cVar10 != '\x01');
    }
    else {
      local_4c0 = CONCAT71((uint7)(uint3)((uint)iVar35 >> 8),1);
    }
  }
  else {
    uVar12 = *local_500;
    uVar30 = (ulonglong)uVar12;
    if (uVar12 == 0x40000002) {
      uVar45 = 0;
    }
    else {
      bVar49 = true;
      if ((DAT_14c86a9f8 == '\x01') && (uVar12 != 2)) {
        if (uVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar49 = DVar13 == DVar14;
        }
        else {
          bVar49 = false;
        }
      }
      uVar45 = (ulonglong)(bVar49 ^ 1);
    }
    if (*(int *)(lVar48 + uVar45 * 4) < 1) goto LAB_142f06230;
LAB_142f062d9:
    local_4c0 = 0;
  }
  bVar49 = *(int *)(DAT_14ca2f830 + 4) == 0;
  local_4c8 = CONCAT71((int7)((ulonglong)DAT_14ca2f830 >> 8),bVar49 || local_51c == 1);
  local_4f8 = (wchar_t *)0x0;
  if (!bVar49 && local_51c != 1) {
    if ((DAT_14c873ee0._2_1_ & 0x20) == 0) {
      local_4f8 = (wchar_t *)0x0;
    }
    else {
      local_4f8 = (wchar_t *)
                  CONCAT71((int7)((ulonglong)DAT_14ca2f860 >> 8),*(int *)(DAT_14ca2f860 + 4) != 0);
    }
  }
  bVar49 = local_51c == 1;
  iVar35 = *(int *)(DAT_14ca2f890 + 4);
  if (iVar35 < 1) {
    iVar35 = 0;
  }
  local_4e0 = (wchar_t *)CONCAT44(local_4e0._4_4_,iVar35);
  iVar35 = bVar49 + 1;
  uVar30 = (longlong)(int)((int)((ulonglong)uVar22 >> 0x20) + (uint)bVar49) / (longlong)iVar35;
  uVar45 = (longlong)(int)((int)uVar22 + (uint)bVar49) / (longlong)iVar35;
  uStack_308 = uVar45 & 0xffffffff;
  if ((int)uVar45 < 2) {
    uStack_308 = 1;
  }
  uVar45 = uVar30 & 0xffffffff;
  if ((int)uVar30 < 2) {
    uVar45 = 1;
  }
  uStack_308 = uStack_308 | uVar45 << 0x20;
  local_310 = (longlong)((ulonglong)(uint)((int)uVar31 >> 0x1f) << 0x20 | uVar31 & 0xffffffff) /
              (longlong)iVar35 & 0xffffffffU |
              (longlong)((ulonglong)(uint)((longlong)uVar31 >> 0x3f) << 0x20 | uVar31 >> 0x20) /
              (longlong)iVar35 << 0x20;
  iVar28 = (int)((ulonglong)local_508 >> 0x20);
  uVar31 = (longlong)(int)((uint)bVar49 + iVar28) / (longlong)iVar35;
  uVar30 = (longlong)(int)((uint)bVar49 + (int)local_508) / (longlong)iVar35;
  uVar45 = uVar30 & 0xffffffff;
  if ((int)uVar30 < 2) {
    uVar45 = 1;
  }
  uVar30 = uVar31 & 0xffffffff;
  if ((int)uVar31 < 2) {
    uVar30 = 1;
  }
  local_318 = (uVar30 << 0x20) + uVar45;
  local_1e0 = 0x20009;
  local_1d8 = 1;
  uStack_1d4 = 0;
  uStack_1cc = 0;
  uVar46 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_1c0 = 0;
  local_1b4 = 1;
  uStack_1b2 = 1;
  uStack_1b0 = 0x101;
  uStack_1ae = 0;
  uStack_1ad = 10;
  uVar29 = (uint)uVar45;
  uVar47 = (uint)uVar30;
  uVar12 = uVar47;
  if ((int)uVar29 < (int)uVar47) {
    uVar12 = uVar29;
  }
  uStack_1ac = 0;
  uStack_1ab = 0xff;
  uVar27 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> uVar27 == 0; uVar27 = uVar27 - 1) {
    }
  }
  uVar27 = (uVar27 ^ 0xffffffe0) + 0x21;
  uVar12 = 6;
  if (uVar27 < 6) {
    uVar12 = uVar27;
  }
  local_218 = 0x20009;
  local_210 = 1;
  local_20c = 0;
  uStack_204 = 0;
  local_1f8 = 0;
  local_1ec = 0x10001;
  local_1e8 = (undefined1)uVar12;
  local_1e7 = 0xa0001;
  local_1e3 = 0xff;
  local_1fc = uVar46;
  local_1f4 = local_318;
  local_1c4 = uVar46;
  local_1bc = local_318;
  if (DAT_14c760a84 == -1) {
    local_598 = (wchar_t *)CONCAT44(local_598._4_4_,0x66);
    FUN_140002266(&local_118,L"%s %s %d",L"FRDGSystemTextures",
                  L".\\Runtime/Renderer/Private/SystemTextures.cpp");
    DAT_14c760a84 = FUN_145d12cf0(&local_118);
    if (local_118 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar31 = local_4f0;
  lVar23 = local_528;
  if ((DAT_14c760a84 < *(int *)(local_528 + 0x130)) &&
     (lVar48 = *(longlong *)(*(longlong *)(local_528 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar48 != 0)) {
    lVar48 = lVar48 + 8;
  }
  else {
    lVar48 = 0;
  }
  FUN_140277056(&local_348,local_518,*(undefined8 *)(local_4f0 + 0x198));
  FUN_144a2c7c2(local_3b8,&local_318);
  FUN_144a2c7c2(local_428,&local_300);
  piVar40 = DAT_14ca97170;
  uVar12 = *local_500;
  if (uVar12 == 0x40000002) {
    uVar12 = 0x40000002;
LAB_142f0ab52:
    uVar30 = 0;
LAB_142f065b3:
    if (piVar40[uVar30] < 1) {
      local_4cc = 0;
    }
    else {
      if (uVar12 == 0x40000002) {
        uVar12 = 0x40000002;
        uVar31 = 0;
        lVar23 = DAT_14ca971d0;
      }
      else {
LAB_142f0b20d:
        lVar23 = DAT_14ca971d0;
        bVar49 = true;
        if ((DAT_14c86a9f8 == '\x01') && (uVar12 != 2)) {
          if (uVar12 == 1) {
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            bVar49 = DVar13 == DVar14;
            uVar12 = *local_500;
          }
          else {
            bVar49 = false;
          }
        }
        uVar31 = (ulonglong)(bVar49 ^ 1);
      }
      local_4cc = (uint)(0 < *(int *)(lVar23 + uVar31 * 4));
      uVar31 = local_4f0;
      lVar23 = local_528;
    }
    if (uVar12 != 0x40000002) goto LAB_142f065da;
LAB_142f0a59f:
    uVar30 = 0;
    piVar40 = DAT_14ca97170;
  }
  else {
    if (DAT_14c86a9f8 != '\x01') goto LAB_142f0ab52;
    if (uVar12 != 2) {
      uVar30 = 1;
      if (uVar12 == 1) {
        uVar15 = FUN_140ad26c0();
        local_530 = (ulonglong *)CONCAT44(local_530._4_4_,uVar15);
        DVar13 = GetCurrentThreadId();
        uVar30 = (ulonglong)((DWORD)local_530 != DVar13);
        uVar12 = *local_500;
      }
      goto LAB_142f065b3;
    }
    if (0 < *DAT_14ca97170) {
      uVar12 = 2;
      goto LAB_142f0b20d;
    }
    uVar12 = 2;
    local_4cc = 0;
LAB_142f065da:
    piVar40 = DAT_14ca97170;
    if ((DAT_14c86a9f8 != '\x01') || (uVar12 == 2)) goto LAB_142f0a59f;
    if (uVar12 == 1) {
      uVar15 = FUN_140ad26c0();
      local_530 = (ulonglong *)CONCAT44(local_530._4_4_,uVar15);
      DVar13 = GetCurrentThreadId();
      uVar30 = (ulonglong)((DWORD)local_530 != DVar13);
    }
    else {
      uVar30 = 1;
    }
  }
  lVar16 = DAT_14ca971d0;
  if (piVar40[uVar30] < 1) {
    local_484 = 0;
  }
  else {
    uVar12 = *local_500;
    if (uVar12 == 0x40000002) {
      uVar31 = 0;
    }
    else {
      bVar49 = true;
      if ((DAT_14c86a9f8 == '\x01') && (uVar12 != 2)) {
        if (uVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar49 = DVar13 == DVar14;
        }
        else {
          bVar49 = false;
        }
      }
      uVar31 = (ulonglong)(bVar49 ^ 1);
    }
    local_484 = (uint)(0 < *(int *)(lVar16 + uVar31 * 4));
    uVar31 = local_4f0;
    lVar23 = local_528;
  }
  local_448 = *(longlong *)(*(longlong *)(local_518 + 0x118c8) + 0x80);
  local_440 = *(longlong *)(*(longlong *)(local_518 + 0x118c8) + 0x88);
  local_470 = DAT_14c9c0d80;
  local_450 = DAT_14ca2c398;
  plVar26 = (longlong *)(&DAT_00001860 + *(longlong *)(local_518 + 0x10));
  if (*(longlong *)(local_518 + 0x10) == 0) {
    plVar26 = (longlong *)0x0;
  }
  plVar21 = &DAT_14ca63b28;
  if ((plVar26 != (longlong *)0x0) && (plVar17 = (longlong *)*plVar26, plVar17 != (longlong *)0x0))
  {
    lVar16 = (**(code **)(*plVar17 + 0x10))(plVar17,&DAT_14ca63b28);
    plVar21 = &DAT_14ca63b28;
    if (iVar28 == *(int *)(lVar16 + 0x30) && *(int *)(lVar16 + 0x2c) == (int)local_508) {
      plVar21 = plVar26;
    }
  }
  lVar16 = local_4a0 + 0x60;
  local_4d8 = 0;
  local_438 = plVar26;
  local_478 = FUN_14476842e(lVar23,plVar21,L"Subsurface.QualityHistoryTexture",0);
  local_2a8[2] = 0;
  iStack_290 = 0;
  iStack_28c = 0;
  iStack_288 = 0;
  bStack_284 = 0;
  local_280[0] = 0;
  local_280[1] = 0;
  local_280[2] = 0;
  local_280[3] = 0;
  local_280[4] = 0;
  local_280[5] = 0;
  local_280[6] = 0;
  pwStack_248 = (wchar_t *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  if (local_51c == 2) {
    local_460 = (wchar_t *)0x0;
    lVar48 = local_518;
    goto LAB_142f09a4f;
  }
  puVar33 = &local_218;
  if ((byte)local_4c8 != '\0') {
    puVar33 = &local_1e0;
  }
  local_4a8 = FUN_14472bf7a(lVar23,puVar33,L"Subsurface.SetupTexture",0);
  if ((char)local_4f8 == '\0') {
    uVar30 = *(ulonglong *)(lVar48 + 8);
    local_4b8 = uVar30;
  }
  else {
    if ((int)DAT_14ca84e40 <= (int)uVar29) {
      uVar45 = (ulonglong)DAT_14ca84e40;
    }
    uStack_f4 = (uint)uVar45;
    if ((int)uStack_f4 < 2) {
      uStack_f4 = 1;
    }
    local_f0 = DAT_14ca84e40;
    if ((int)uVar47 < (int)DAT_14ca84e40) {
      local_f0 = uVar47;
    }
    uStack_e6 = 0;
    uStack_e5 = 0x39;
    uStack_e3 = 0xff;
    local_118 = (wchar_t *)0x20009;
    uStack_ec = 1;
    uStack_ea = 1;
    uStack_e8 = 0x101;
    uStack_110 = 1;
    local_f8 = 0;
    uStack_10c = 0;
    local_108 = 0;
    uStack_104 = 0;
    local_100 = 0;
    if ((int)local_f0 < 2) {
      local_f0 = 1;
    }
    uVar30 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar45 = uVar30 + 0x120;
    uStack_fc = uVar46;
    if (*(ulonglong *)(lVar23 + 0x78) < uVar45) {
      FUN_140023dd8((longlong *)(lVar23 + 0x70),0x128);
      uVar30 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar45 = uVar30 + 0x120;
    }
    *(ulonglong *)(lVar23 + 0x70) = uVar45;
    FUN_1456bbb8c(uVar30,L"Subsurface.ProfileIdTexture",&local_118,0);
    iVar35 = *(int *)(lVar23 + 0x180);
    *(uint *)(lVar23 + 0x180) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0x184) < iVar35 + 1U) {
      FUN_14472c0f6(lVar23 + 0x178,iVar35);
    }
    *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar35 * 8) = uVar30;
    *(int *)(uVar30 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
    local_4b8 = *(ulonglong *)(lVar48 + 8);
  }
  lVar48 = local_518;
  uVar31 = *(ulonglong *)(uVar31 + 0x2f0);
  if ((uVar31 != 0) && ((*(byte *)(uVar31 + 0x24) & 4) != 0)) {
    local_4b8 = uVar31;
  }
  iVar28 = (int)local_318 + 7;
  iVar35 = (int)((ulonglong)local_318 >> 0x20);
  iVar32 = iVar35 + 7;
  iStack_288 = iVar35 + 0xe;
  if (-1 < iVar32) {
    iStack_288 = iVar32;
  }
  iStack_288 = iStack_288 >> 3;
  iStack_28c = (int)local_318 + 0xe;
  if (-1 < iVar28) {
    iStack_28c = iVar28;
  }
  iStack_28c = iStack_28c >> 3;
  iVar35 = iStack_28c * iStack_288;
  bStack_284 = DAT_14ca84e08;
  uStack_110 = 0x4109;
  uVar12 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar12 = DAT_14ca84e48;
  }
  local_108 = 0;
  uStack_104 = 0;
  uVar29 = 3;
  if (DAT_14ca84e48 < 3) {
    uVar29 = DAT_14ca84e48;
  }
  local_118 = (wchar_t *)CONCAT44(uVar29 + (uVar29 == 0),uVar12 + (uVar12 == 0));
  puVar33 = (ulonglong *)(lVar23 + 0x70);
  pwVar41 = (wchar_t *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  pwVar19 = pwVar41 + 0xa8;
  local_530 = puVar33;
  iStack_290 = iVar35;
  if (*(wchar_t **)(lVar23 + 0x78) < pwVar19) {
    FUN_140023dd8(puVar33,0x160);
    pwVar41 = (wchar_t *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    pwVar19 = pwVar41 + 0xa8;
  }
  local_4e8 = lVar23 + 0x188;
  *(wchar_t **)(lVar23 + 0x70) = pwVar19;
  FUN_1456bd266(pwVar41,L"Subsurface.TileCountBuffer",&local_118,0);
  iVar28 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar28 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar28 + 1U) {
    FUN_144737178(local_4e8,iVar28);
  }
  puVar33 = local_530;
  *(wchar_t **)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar28 * 8) = pwVar41;
  *(int *)(pwVar41 + 0x3e) = *(int *)(lVar23 + 400) + -1;
  uVar12 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar12 = DAT_14ca84e48;
  }
  uStack_110 = 0x4189;
  uVar29 = 3;
  if (DAT_14ca84e48 < 3) {
    uVar29 = DAT_14ca84e48;
  }
  local_108 = 0;
  uStack_104 = 0;
  local_118 = (wchar_t *)CONCAT44(uVar29 + (uVar29 == 0),uVar12 + (uVar12 == 0));
  uVar45 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar31 = uVar45 + 0x150;
  pwStack_248 = pwVar41;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
    FUN_140023dd8(local_530,0x160);
    uVar45 = *puVar33 + 0xf & 0xfffffffffffffff0;
    uVar31 = uVar45 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar31;
  FUN_1456bd266(uVar45,L"Subsurface.TileIndirectDispatchBuffer",&local_118,0);
  iVar28 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar28 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar28 + 1U) {
    FUN_144737178(local_4e8,iVar28);
  }
  puVar33 = local_530;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar28 * 8) = uVar45;
  *(int *)(uVar45 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  uVar12 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar12 = DAT_14ca84e48;
  }
  uStack_110 = 0x4189;
  uVar29 = 3;
  if (DAT_14ca84e48 < 3) {
    uVar29 = DAT_14ca84e48;
  }
  local_108 = 0;
  uStack_104 = 0;
  local_118 = (wchar_t *)CONCAT44(uVar29 + (uVar29 == 0),uVar12 + (uVar12 == 0));
  uVar42 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar31 = uVar42 + 0x150;
  local_240 = uVar45;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
    FUN_140023dd8(local_530,0x160);
    uVar42 = *puVar33 + 0xf & 0xfffffffffffffff0;
    uVar31 = uVar42 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar31;
  FUN_1456bd266(uVar42,L"Subsurface.TileIndirectDrawBuffer",&local_118,0);
  iVar28 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar28 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar28 + 1U) {
    FUN_144737178(local_4e8,iVar28);
  }
  puVar33 = local_530;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar28 * 8) = uVar42;
  *(int *)(uVar42 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  uVar12 = iVar35 * 2;
  uVar29 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar29 = DAT_14ca84e48;
  }
  uStack_110 = 0x4109;
  uVar46 = DAT_14ca84e48;
  if (uVar12 < DAT_14ca84e48) {
    uVar46 = uVar12;
  }
  local_108 = 0;
  uStack_104 = 0;
  local_118 = (wchar_t *)CONCAT44(uVar46 + (uVar46 == 0),uVar29 + (uVar29 == 0));
  uVar45 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar31 = uVar45 + 0x150;
  uStack_238 = uVar42;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
    FUN_140023dd8(local_530,0x160);
    uVar45 = *puVar33 + 0xf & 0xfffffffffffffff0;
    uVar31 = uVar45 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar31;
  FUN_1456bd266(uVar45,L"Subsurface.TileDataBuffer(All)",&local_118,0);
  iVar35 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_4e8,iVar35);
  }
  puVar33 = local_530;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar35 * 8) = uVar45;
  *(int *)(uVar45 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  uVar29 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar29 = DAT_14ca84e48;
  }
  uStack_110 = 0x4109;
  uVar46 = DAT_14ca84e48;
  if (uVar12 < DAT_14ca84e48) {
    uVar46 = uVar12;
  }
  local_108 = 0;
  uStack_104 = 0;
  local_118 = (wchar_t *)CONCAT44(uVar46 + (uVar46 == 0),uVar29 + (uVar29 == 0));
  uVar42 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar31 = uVar42 + 0x150;
  local_280[5] = uVar45;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
    FUN_140023dd8(local_530,0x160);
    uVar42 = *puVar33 + 0xf & 0xfffffffffffffff0;
    uVar31 = uVar42 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar31;
  FUN_1456bd266(uVar42,L"Subsurface.TileDataBuffer(AFIS)",&local_118,0);
  iVar35 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_4e8,iVar35);
  }
  puVar33 = local_530;
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar35 * 8) = uVar42;
  *(int *)(uVar42 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  uVar29 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar29 = DAT_14ca84e48;
  }
  uStack_110 = 0x4109;
  uVar46 = DAT_14ca84e48;
  if (uVar12 < DAT_14ca84e48) {
    uVar46 = uVar12;
  }
  local_108 = 0;
  uStack_104 = 0;
  local_118 = (wchar_t *)CONCAT44(uVar46 + (uVar46 == 0),uVar29 + (uVar29 == 0));
  uVar45 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar31 = uVar45 + 0x150;
  local_280[3] = uVar42;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
    FUN_140023dd8(local_530,0x160);
    uVar45 = *puVar33 + 0xf & 0xfffffffffffffff0;
    uVar31 = uVar45 + 0x150;
  }
  *(ulonglong *)(lVar23 + 0x70) = uVar31;
  FUN_1456bd266(uVar45,L"Subsurface.TileDataBuffer(SEPARABLE)",&local_118,0);
  iVar35 = *(int *)(lVar23 + 400);
  *(uint *)(lVar23 + 400) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_4e8,iVar35);
  }
  *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar35 * 8) = uVar45;
  *(int *)(uVar45 + 0x7c) = *(int *)(lVar23 + 400) + -1;
  local_280[4] = uVar45;
  local_510 = lVar23 + 0x198;
  lVar43 = -0x18;
  do {
    puVar33 = local_530;
    lVar6 = *(longlong *)((longlong)local_280 + lVar43 + 0x30);
    if (lVar6 != 0) {
      puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar37 = puVar38 + 9;
      if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
        FUN_140023dd8(local_530,0x50);
        puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
        puVar37 = puVar38 + 9;
      }
      *(undefined8 **)(lVar23 + 0x70) = puVar37;
      puVar38[1] = *(undefined8 *)(lVar6 + 8);
      puVar38[2] = 0;
      *(undefined1 *)(puVar38 + 3) = 3;
      *(undefined8 *)((longlong)puVar38 + 0x1c) = 0xffffffffffffffff;
      *puVar38 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar38 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar38 + 0x2c) = 0xffffffff00000000;
      puVar38[7] = 0;
      puVar38[8] = lVar6;
      iVar35 = *(int *)(lVar23 + 0x1a0);
      *(uint *)(lVar23 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(lVar23 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_510,iVar35);
      }
      *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar35 * 8) = puVar38;
      *(int *)((longlong)puVar38 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
      *(undefined8 **)((longlong)local_280 + lVar43 + 0x18) = puVar38;
    }
    lVar43 = lVar43 + 8;
  } while (lVar43 != 0);
  uVar22 = *(undefined8 *)(lVar48 + 0x13818);
  FUN_1415a5ec4();
  FUN_1448e935e(uVar22,&local_118,&DAT_14ca2fc10,0);
  FUN_1415a5ec4();
  uVar24 = local_118;
  puVar33 = local_530;
  uVar22 = CONCAT44(uStack_10c,uStack_110);
  puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar37 = puVar38 + 4;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x30);
    puVar38 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    puVar37 = puVar38 + 4;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar37;
  *puVar38 = &PTR_FUN_14a2c4ae0;
  puVar38[2] = 0;
  local_498 = lVar23 + 0x98;
  iVar35 = *(int *)(lVar23 + 0xa0);
  *(uint *)(lVar23 + 0xa0) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(local_498,iVar35);
  }
  pwVar19 = pwStack_248;
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar35 * 8) = puVar38;
  puVar36 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar37 = puVar36 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x48);
    puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar37 = puVar36 + 8;
  }
  puVar38 = puVar38 + 2;
  *(undefined8 **)(lVar23 + 0x70) = puVar37;
  puVar36[1] = *(undefined8 *)(pwVar19 + 4);
  puVar36[2] = 0;
  *(undefined1 *)(puVar36 + 3) = 2;
  *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar36 + 5) = 0;
  *puVar36 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar36 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar36 + 0x32) = 0;
  puVar36[7] = pwVar19;
  iVar35 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar35 + 1U;
  local_480 = lVar16;
  if (*(uint *)(lVar23 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar35 * 8) = puVar36;
  *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  *puVar38 = puVar36;
  FUN_1415a5fe6();
  local_118 = (wchar_t *)0x0;
  uStack_110 = 0;
  uStack_10c = 0;
  FUN_1448f70da(uVar24,&DAT_14ca33a30,puVar38);
  FUN_140069376(lVar23);
  puVar33 = local_530;
  uVar39 = (undefined6)((ulonglong)lVar16 >> 0x10);
  uVar31 = CONCAT62(uVar39,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar31 = CONCAT62(uVar39,4);
  }
  puVar36 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar37 = puVar36 + 0x3d;
  local_490 = (wchar_t *)uVar30;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x1f0);
    puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar37 = puVar36 + 0x3d;
  }
  *local_530 = (ulonglong)puVar37;
  uStack_110 = (uint)DAT_14ca33a78;
  uStack_10c = (undefined4)((ulonglong)DAT_14ca33a78 >> 0x20);
  if (DAT_14ca33a78 != 0) {
    LOCK();
    *(int *)(DAT_14ca33a78 + 8) = *(int *)(DAT_14ca33a78 + 8) + 1;
    UNLOCK();
  }
  local_108 = 0x4ca33a30;
  uStack_104 = 1;
  local_598 = (wchar_t *)CONCAT71(local_598._1_7_,2);
  local_118 = (wchar_t *)puVar38;
  FUN_140068f1a(puVar36,&local_1a8,&local_118,uVar31 & 0xffffffff);
  *puVar36 = &PTR_FUN_14a2c4af0;
  puVar36[0x37] = &DAT_14ca33a30;
  puVar36[0x38] = puVar38;
  puVar36[0x39] = uVar24;
  puVar36[0x3a] = uVar22;
  puVar36[0x3b] = &DAT_100000001;
  *(undefined4 *)(puVar36 + 0x3c) = 1;
  local_4b0 = lVar23 + 0x168;
  iVar35 = *(int *)(lVar23 + 0x170);
  *(uint *)(lVar23 + 0x170) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x174) < iVar35 + 1U) {
    FUN_14470e57a(local_4b0,iVar35);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar35 * 8) = puVar36;
  *(int *)((longlong)puVar36 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar36);
  local_118 = (wchar_t *)(ulonglong)CONCAT14(DAT_14ca84e08,iStack_290);
  FUN_14156854e();
  local_590 = (wchar_t *)CONCAT44(local_590._4_4_,1);
  local_598 = (wchar_t *)CONCAT44(local_598._4_4_,1);
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_1a8,&local_118,DAT_14ca2fb58);
  puVar37 = local_1a8;
  lVar23 = local_518;
  if (local_1a8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_1a8 + 1) = *(int *)(local_1a8 + 1) + 1;
    UNLOCK();
    if (local_1a8 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_1a8 + 1);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_1a8 + 1);
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar11 = *(byte *)((longlong)local_1a8 + 0xd);
          plVar17 = (longlong *)FUN_14001cc68(0x10,8);
          plVar17[1] = (longlong)puVar37;
          plVar26 = DAT_14ca843c0;
          plVar21 = DAT_14ca843c8;
          if ((bVar11 & 2) == 0) {
            do {
              *plVar17 = (longlong)plVar26;
              LOCK();
              bVar49 = plVar26 != DAT_14ca843c0;
              plVar21 = plVar17;
              if (bVar49) {
                plVar26 = DAT_14ca843c0;
                plVar21 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar21;
              UNLOCK();
            } while (bVar49);
          }
          else {
            do {
              *plVar17 = (longlong)plVar21;
              LOCK();
              bVar49 = plVar21 != DAT_14ca843c8;
              plVar26 = plVar17;
              if (bVar49) {
                plVar21 = DAT_14ca843c8;
                plVar26 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar26;
              UNLOCK();
            } while (bVar49);
          }
        }
      }
    }
  }
  puVar33 = local_530;
  uVar4 = *(undefined1 *)(local_4a8 + 0x94);
  puVar36 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar38 = puVar36 + 0x32;
  if (*(undefined8 **)(local_528 + 0x78) < puVar38) {
    FUN_140023dd8(local_530,0x1a0);
    puVar36 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    puVar38 = puVar36 + 0x32;
  }
  *(undefined8 **)(local_528 + 0x70) = puVar38;
  *puVar36 = &PTR_FUN_14a2c4b08;
  puVar36[2] = 0;
  *(undefined1 *)(puVar36 + 3) = 1;
  puVar36[4] = 0;
  puVar36[5] = 0x3f80000000000000;
  puVar36[6] = 0;
  *(undefined1 *)(puVar36 + 7) = 1;
  puVar36[8] = 0;
  *(undefined1 *)(puVar36 + 9) = 1;
  puVar36[0x26] = 0;
  puVar36[0x30] = 0;
  puVar36[0x28] = 0;
  puVar36[0x29] = 0;
  puVar36[0x2a] = 0;
  puVar36[0x2b] = 0;
  puVar36[0x2c] = 0;
  puVar36[0x2d] = 0;
  puVar36[0x2e] = 0;
  *(undefined1 *)(puVar36 + 0x31) = 1;
  iVar35 = *(int *)(local_528 + 0xa0);
  *(uint *)(local_528 + 0xa0) = iVar35 + 1U;
  if (*(uint *)(local_528 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(local_498,iVar35);
  }
  lVar48 = local_528;
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(local_528 + 0x98) + (longlong)iVar35 * 8) = puVar36;
  *(undefined4 *)(puVar36 + 8) = local_328;
  *(undefined4 *)((longlong)puVar36 + 0x44) = uStack_324;
  *(undefined4 *)(puVar36 + 9) = uStack_320;
  *(undefined4 *)((longlong)puVar36 + 0x4c) = uStack_31c;
  *(undefined4 *)(puVar36 + 6) = local_338;
  *(undefined4 *)((longlong)puVar36 + 0x34) = uStack_334;
  *(undefined4 *)(puVar36 + 7) = uStack_330;
  *(undefined4 *)((longlong)puVar36 + 0x3c) = uStack_32c;
  *(undefined4 *)(puVar36 + 4) = local_348;
  *(undefined4 *)((longlong)puVar36 + 0x24) = uStack_344;
  *(undefined4 *)(puVar36 + 5) = uStack_340;
  *(undefined4 *)((longlong)puVar36 + 0x2c) = uStack_33c;
  puVar38 = local_3b8;
  puVar44 = puVar36 + 10;
  for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar44 = *puVar38;
    puVar38 = puVar38 + 1;
    puVar44 = puVar44 + 1;
  }
  lVar16 = local_4a0;
  if ((char)local_4cc != '\0') {
    lVar16 = local_448;
  }
  puVar38 = local_428;
  puVar44 = puVar36 + 0x18;
  for (lVar43 = 0xe; lVar43 != 0; lVar43 = lVar43 + -1) {
    *puVar44 = *puVar38;
    puVar38 = puVar38 + 1;
    puVar44 = puVar44 + 1;
  }
  puVar36[0x26] = lVar16;
  puVar36[0x28] = local_470;
  puVar44 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar44 + 9;
  if (*(undefined8 **)(local_528 + 0x78) < puVar38) {
    FUN_140023dd8(local_530,0x50);
    puVar44 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar44 + 9;
  }
  *(undefined8 **)(lVar48 + 0x70) = puVar38;
  puVar44[1] = *(undefined8 *)(local_4a8 + 8);
  puVar44[2] = 0;
  *(undefined1 *)(puVar44 + 3) = 0;
  *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar44 + 5) = 0;
  *puVar44 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar44 + 6) = uVar4;
  *(undefined1 *)(puVar44 + 7) = 0;
  *(undefined4 *)((longlong)puVar44 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar44 + 0x35) = 0;
  puVar44[8] = local_4a8;
  iVar35 = *(int *)(lVar48 + 0x1a0);
  *(uint *)(lVar48 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar48 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  pwVar19 = local_490;
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar35 * 8) = puVar44;
  *(int *)((longlong)puVar44 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
  puVar36[0x29] = puVar44;
  if ((char)local_4f8 != '\0') {
    uVar4 = *(undefined1 *)((longlong)local_490 + 0x94);
    puVar44 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar44 + 9;
    if (*(undefined8 **)(lVar48 + 0x78) < puVar38) {
      FUN_140023dd8(local_530,0x50);
      puVar44 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar38 = puVar44 + 9;
    }
    *(undefined8 **)(lVar48 + 0x70) = puVar38;
    puVar44[1] = *(undefined8 *)((longlong)pwVar19 + 8);
    puVar44[2] = 0;
    *(undefined1 *)(puVar44 + 3) = 0;
    *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar44 + 5) = 0;
    *puVar44 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar44 + 6) = uVar4;
    *(undefined1 *)(puVar44 + 7) = 0;
    *(undefined4 *)((longlong)puVar44 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar44 + 0x35) = 0;
    puVar44[8] = pwVar19;
    iVar35 = *(int *)(lVar48 + 0x1a0);
    *(uint *)(lVar48 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(lVar48 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_510,iVar35);
    }
    *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar35 * 8) = puVar44;
    *(int *)((longlong)puVar44 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
    puVar36[0x2e] = puVar44;
  }
  uVar31 = local_280[3];
  puVar33 = local_530;
  puVar44 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar44 + 8;
  if (*(undefined8 **)(lVar48 + 0x78) < puVar38) {
    FUN_140023dd8(local_530,0x48);
    puVar44 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar44 + 8;
  }
  *(undefined8 **)(lVar48 + 0x70) = puVar38;
  puVar44[1] = *(undefined8 *)(uVar31 + 8);
  puVar44[2] = 0;
  *(undefined1 *)(puVar44 + 3) = 2;
  *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar44 + 5) = 0;
  *puVar44 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar44 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar44 + 0x32) = 0;
  puVar44[7] = uVar31;
  iVar35 = *(int *)(lVar48 + 0x1a0);
  *(uint *)(lVar48 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar48 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  uVar31 = local_280[4];
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar35 * 8) = puVar44;
  *(int *)((longlong)puVar44 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
  puVar36[0x2b] = puVar44;
  puVar44 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar44 + 8;
  if (*(undefined8 **)(lVar48 + 0x78) < puVar38) {
    FUN_140023dd8(local_530,0x48);
    puVar44 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar44 + 8;
  }
  *(undefined8 **)(lVar48 + 0x70) = puVar38;
  puVar44[1] = *(undefined8 *)(uVar31 + 8);
  puVar44[2] = 0;
  *(undefined1 *)(puVar44 + 3) = 2;
  *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar44 + 5) = 0;
  *puVar44 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar44 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar44 + 0x32) = 0;
  puVar44[7] = uVar31;
  iVar35 = *(int *)(lVar48 + 0x1a0);
  *(uint *)(lVar48 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar48 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  uVar31 = local_280[5];
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar35 * 8) = puVar44;
  *(int *)((longlong)puVar44 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
  puVar36[0x2a] = puVar44;
  puVar44 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar44 + 8;
  if (*(undefined8 **)(lVar48 + 0x78) < puVar38) {
    FUN_140023dd8(local_530,0x48);
    puVar44 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar44 + 8;
  }
  *(undefined8 **)(lVar48 + 0x70) = puVar38;
  puVar44[1] = *(undefined8 *)(uVar31 + 8);
  puVar44[2] = 0;
  *(undefined1 *)(puVar44 + 3) = 2;
  *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar44 + 5) = 0;
  *puVar44 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar44 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar44 + 0x32) = 0;
  puVar44[7] = uVar31;
  iVar35 = *(int *)(lVar48 + 0x1a0);
  *(uint *)(lVar48 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar48 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  pwVar19 = pwStack_248;
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar35 * 8) = puVar44;
  *(int *)((longlong)puVar44 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
  puVar36[0x2c] = puVar44;
  puVar44 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar44 + 8;
  if (*(undefined8 **)(lVar48 + 0x78) < puVar38) {
    FUN_140023dd8(local_530,0x48);
    puVar44 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar44 + 8;
  }
  puVar2 = puVar36 + 2;
  *(undefined8 **)(lVar48 + 0x70) = puVar38;
  puVar44[1] = *(undefined8 *)(pwVar19 + 4);
  puVar44[2] = 0;
  *(undefined1 *)(puVar44 + 3) = 2;
  *(undefined8 *)((longlong)puVar44 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar44 + 5) = 0;
  *puVar44 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar44 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar44 + 0x32) = 0;
  puVar44[7] = pwVar19;
  iVar35 = *(int *)(lVar48 + 0x1a0);
  *(uint *)(lVar48 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar48 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  bVar49 = local_51c == 1;
  *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar35 * 8) = puVar44;
  *(int *)((longlong)puVar44 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
  puVar36[0x2d] = puVar44;
  FUN_14156854e();
  cVar10 = DAT_14ca2fb51;
  if (DAT_14ca2fb51 == '\x03') {
    cVar10 = '\x02';
  }
  local_458 = puVar37;
  puVar36[0x30] = puVar37;
  *(char *)(puVar36 + 0x31) = cVar10;
  uVar22 = *(undefined8 *)(lVar23 + 0x118d0);
  lVar16 = FUN_144a2c9be();
  cVar10 = *(char *)(lVar16 + 0x41);
  if (cVar10 == '\x03') {
    cVar10 = '\x02';
  }
  puVar36[2] = uVar22;
  *(char *)(puVar36 + 3) = cVar10;
  uVar22 = *(undefined8 *)(lVar23 + 0x13818);
  cVar10 = (char)local_4f8;
  cVar7 = (char)local_4c8;
  cVar8 = (char)local_4c0;
  local_508 = (ulonglong *)CONCAT71(local_508._1_7_,bVar49);
  FUN_1415a3244();
  FUN_1448e935e(uVar22,&local_118,&DAT_14ca2ff88,
                cVar8 * '\x02' | cVar7 * '\x04' | cVar10 * '\b' | bVar49);
  FUN_1415a3244();
  uVar31 = (ulonglong)local_118;
  local_4f0 = CONCAT44(uStack_10c,uStack_110);
  iVar35 = local_318._4_4_ + 0xe;
  if (-1 < local_318._4_4_ + 7) {
    iVar35 = local_318._4_4_ + 7;
  }
  iVar28 = (int)local_318 + 0xe;
  if (-1 < (int)local_318 + 7) {
    iVar28 = (int)local_318 + 7;
  }
  FUN_1415a3366();
  local_118 = (wchar_t *)0x0;
  uStack_110 = 0;
  uStack_10c = 0;
  FUN_1448f70da(uVar31,&DAT_14ca33bc8,puVar2,&local_118);
  FUN_140069376(lVar48);
  puVar33 = local_530;
  uVar22 = 2;
  if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
     ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
    uVar22 = 4;
  }
  puVar38 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar37 = puVar38 + 0x3d;
  if (*(undefined8 **)(local_528 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x1f0);
    puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar37 = puVar38 + 0x3d;
  }
  *local_530 = (ulonglong)puVar37;
  uStack_110 = (uint)DAT_14ca33c10;
  uStack_10c = (undefined4)((ulonglong)DAT_14ca33c10 >> 0x20);
  if (DAT_14ca33c10 != 0) {
    LOCK();
    *(int *)(DAT_14ca33c10 + 8) = *(int *)(DAT_14ca33c10 + 8) + 1;
    UNLOCK();
  }
  local_108 = 0x4ca33bc8;
  uStack_104 = 1;
  local_598 = (wchar_t *)CONCAT71(local_598._1_7_,2);
  local_118 = (wchar_t *)puVar2;
  FUN_140068f1a(puVar38,&local_1a8,&local_118,uVar22);
  lVar23 = local_528;
  *puVar38 = &PTR_FUN_14a2c4b10;
  puVar38[0x37] = &DAT_14ca33bc8;
  puVar38[0x38] = puVar2;
  puVar38[0x39] = uVar31;
  puVar38[0x3a] = local_4f0;
  *(int *)(puVar38 + 0x3b) = iVar28 >> 3;
  *(int *)((longlong)puVar38 + 0x1dc) = iVar35 >> 3;
  *(undefined4 *)(puVar38 + 0x3c) = 1;
  iVar35 = *(int *)(local_528 + 0x170);
  *(uint *)(local_528 + 0x170) = iVar35 + 1U;
  if (*(uint *)(local_528 + 0x174) < iVar35 + 1U) {
    FUN_14470e57a(local_4b0,iVar35);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar35 * 8) = puVar38;
  *(int *)((longlong)puVar38 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar38);
  puVar38 = local_458;
  lVar48 = local_518;
  puVar33 = local_530;
  puVar36 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar37 = puVar36 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x50);
    puVar36 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    puVar37 = puVar36 + 8;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar37;
  *puVar36 = &PTR_FUN_14a2c4b28;
  puVar36[2] = 0;
  *(undefined1 *)(puVar36 + 3) = 1;
  puVar36[4] = 0;
  puVar36[5] = 0;
  puVar36[6] = 0;
  iVar35 = *(int *)(lVar23 + 0xa0);
  *(uint *)(lVar23 + 0xa0) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(local_498,iVar35);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar35 * 8) = puVar36;
  FUN_14156854e();
  uVar31 = local_240;
  puVar33 = local_530;
  cVar10 = '\x02';
  if (DAT_14ca2fb51 != '\x03') {
    cVar10 = DAT_14ca2fb51;
  }
  puVar36[2] = puVar38;
  *(char *)(puVar36 + 3) = cVar10;
  puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar37 = puVar38 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x48);
    puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar37 = puVar38 + 8;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar37;
  puVar38[1] = *(undefined8 *)(uVar31 + 8);
  puVar38[2] = 0;
  *(undefined1 *)(puVar38 + 3) = 2;
  *(undefined8 *)((longlong)puVar38 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar38 + 5) = 0;
  *puVar38 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar38 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar38 + 0x32) = 0;
  puVar38[7] = uVar31;
  iVar35 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  uVar31 = uStack_238;
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar35 * 8) = puVar38;
  *(int *)((longlong)puVar38 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar36[4] = puVar38;
  puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar37 = puVar38 + 8;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x48);
    puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar37 = puVar38 + 8;
  }
  *(undefined8 **)(lVar23 + 0x70) = puVar37;
  puVar38[1] = *(undefined8 *)(uVar31 + 8);
  puVar38[2] = 0;
  *(undefined1 *)(puVar38 + 3) = 2;
  *(undefined8 *)((longlong)puVar38 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar38 + 5) = 0;
  *puVar38 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar38 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar38 + 0x32) = 0;
  puVar38[7] = uVar31;
  iVar35 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  pwVar19 = pwStack_248;
  puVar33 = local_530;
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar35 * 8) = puVar38;
  *(int *)((longlong)puVar38 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar36[5] = puVar38;
  puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar37 = puVar38 + 9;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(local_530,0x50);
    puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar37 = puVar38 + 9;
  }
  puVar44 = puVar36 + 2;
  *(undefined8 **)(lVar23 + 0x70) = puVar37;
  puVar38[1] = *(undefined8 *)(pwVar19 + 4);
  puVar38[2] = 0;
  *(undefined1 *)(puVar38 + 3) = 3;
  *(undefined8 *)((longlong)puVar38 + 0x1c) = 0xffffffffffffffff;
  *puVar38 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar38 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar38 + 0x2c) = 0xffffffff00000000;
  puVar38[7] = 0;
  puVar38[8] = pwVar19;
  iVar35 = *(int *)(lVar23 + 0x1a0);
  *(uint *)(lVar23 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_510,iVar35);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar35 * 8) = puVar38;
  *(int *)((longlong)puVar38 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
  puVar36[6] = puVar38;
  uVar22 = *(undefined8 *)(lVar48 + 0x13818);
  FUN_14157819c();
  FUN_1448e935e(uVar22,&local_118,&DAT_14ca2fe60,0);
  FUN_14157819c();
  puVar37 = (undefined8 *)local_118;
  uVar22 = CONCAT44(uStack_10c,uStack_110);
  FUN_1415782be();
  local_118 = (wchar_t *)0x0;
  uStack_110 = 0;
  uStack_10c = 0;
  FUN_1448f70da(puVar37,&DAT_14ca33b40,puVar44,&local_118);
  FUN_140069376(lVar23);
  puVar33 = local_530;
  uVar24 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar24 = 4;
  }
  puVar36 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar36 + 0x3d;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar38) {
    FUN_140023dd8(local_530,0x1f0);
    puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar36 + 0x3d;
  }
  *local_530 = (ulonglong)puVar38;
  uStack_110 = (uint)DAT_14ca33b88;
  uStack_10c = (undefined4)((ulonglong)DAT_14ca33b88 >> 0x20);
  if (DAT_14ca33b88 != 0) {
    LOCK();
    *(int *)(DAT_14ca33b88 + 8) = *(int *)(DAT_14ca33b88 + 8) + 1;
    UNLOCK();
  }
  local_108 = 0x4ca33b40;
  uStack_104 = 1;
  local_598 = (wchar_t *)CONCAT71(local_598._1_7_,2);
  local_118 = (wchar_t *)puVar44;
  FUN_140068f1a(puVar36,&local_1a8,&local_118,uVar24);
  *puVar36 = &PTR_FUN_14a2c4b30;
  puVar36[0x37] = &DAT_14ca33b40;
  puVar36[0x38] = puVar44;
  puVar36[0x39] = puVar37;
  puVar36[0x3a] = uVar22;
  puVar36[0x3b] = &DAT_100000001;
  *(undefined4 *)(puVar36 + 0x3c) = 1;
  iVar35 = *(int *)(lVar23 + 0x170);
  *(uint *)(lVar23 + 0x170) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x174) < iVar35 + 1U) {
    FUN_14470e57a(local_4b0,iVar35);
  }
  *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar35 * 8) = puVar36;
  *(int *)((longlong)puVar36 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
  FUN_140069100(lVar23,puVar36);
  puVar33 = local_530;
  if ((byte)local_4c8 == '\0') {
    uVar12 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar12 = DAT_14ca84e48;
    }
    uVar29 = 3;
    if (DAT_14ca84e48 < 3) {
      uVar29 = DAT_14ca84e48;
    }
    uStack_110 = 0x4109;
    local_108 = 0;
    uStack_104 = 0;
    local_118 = (wchar_t *)CONCAT44(uVar29 + (uVar29 == 0),uVar12 + (uVar12 == 0));
    uVar30 = *(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar31 = uVar30 + 0x150;
    if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
      FUN_140023dd8(local_530,0x160);
      uVar30 = *puVar33 + 0xf & 0xfffffffffffffff0;
      uVar31 = uVar30 + 0x150;
    }
    *(ulonglong *)(lVar23 + 0x70) = uVar31;
    FUN_1456bd266(uVar30,L"Subsurface.MipsConditionBuffer",&local_118,0);
    iVar35 = *(int *)(lVar23 + 400);
    *(uint *)(lVar23 + 400) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0x194) < iVar35 + 1U) {
      FUN_144737178(local_4e8,iVar35);
    }
    *(ulonglong *)(*(longlong *)(lVar23 + 0x188) + (longlong)iVar35 * 8) = uVar30;
    *(int *)(uVar30 + 0x7c) = *(int *)(lVar23 + 400) + -1;
    uVar22 = *(undefined8 *)(lVar48 + 0x13818);
    FUN_14158f878();
    FUN_1448e935e(uVar22,&local_118,&DAT_14ca2fd38,0);
    FUN_14158f878();
    uVar24 = local_118;
    puVar33 = local_530;
    uVar22 = CONCAT44(uStack_10c,uStack_110);
    puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar37 = puVar38 + 6;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
      FUN_140023dd8(local_530,0x40);
      puVar38 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
      puVar37 = puVar38 + 6;
    }
    *(undefined8 **)(lVar23 + 0x70) = puVar37;
    *puVar38 = &PTR_FUN_14a2c4b48;
    puVar38[3] = 0;
    puVar38[4] = 0;
    iVar35 = *(int *)(lVar23 + 0xa0);
    *(uint *)(lVar23 + 0xa0) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0xa4) < iVar35 + 1U) {
      FUN_1448cfae8(local_498,iVar35);
    }
    pwVar19 = pwStack_248;
    puVar33 = local_530;
    *(undefined8 **)(*(longlong *)(lVar23 + 0x98) + (longlong)iVar35 * 8) = puVar38;
    *(undefined4 *)(puVar38 + 2) = local_4e0._0_4_;
    *(undefined4 *)((longlong)puVar38 + 0x14) = 0;
    puVar36 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar36 + 9;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
      FUN_140023dd8(local_530,0x50);
      puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar36 + 9;
    }
    *(undefined8 **)(lVar23 + 0x70) = puVar37;
    puVar36[1] = *(undefined8 *)(pwVar19 + 4);
    puVar36[2] = 0;
    *(undefined1 *)(puVar36 + 3) = 3;
    *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
    *puVar36 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar36 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar36 + 0x2c) = 0xffffffff00000000;
    puVar36[7] = 0;
    puVar36[8] = pwVar19;
    iVar35 = *(int *)(lVar23 + 0x1a0);
    *(uint *)(lVar23 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_510,iVar35);
    }
    puVar33 = local_530;
    *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar35 * 8) = puVar36;
    *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
    puVar38[3] = puVar36;
    puVar36 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar36 + 8;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
      FUN_140023dd8(local_530,0x48);
      puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar36 + 8;
    }
    puVar44 = puVar38 + 2;
    *(undefined8 **)(lVar23 + 0x70) = puVar37;
    puVar36[1] = *(undefined8 *)(uVar30 + 8);
    puVar36[2] = 0;
    *(undefined1 *)(puVar36 + 3) = 2;
    *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar36 + 5) = 0;
    *puVar36 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar36 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar36 + 0x32) = 0;
    puVar36[7] = uVar30;
    iVar35 = *(int *)(lVar23 + 0x1a0);
    *(uint *)(lVar23 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_510,iVar35);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x198) + (longlong)iVar35 * 8) = puVar36;
    *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar23 + 0x1a0) + -1;
    puVar38[4] = puVar36;
    FUN_14158f99a();
    local_118 = (wchar_t *)0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    FUN_1448f70da(uVar24,&DAT_14ca33ab8,puVar44);
    FUN_140069376(lVar23);
    puVar33 = local_530;
    uVar39 = (undefined6)((ulonglong)lVar23 >> 0x10);
    uVar15 = (undefined4)CONCAT62(uVar39,2);
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar15 = (undefined4)CONCAT62(uVar39,4);
    }
    puVar38 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar38 + 0x3d;
    if (*(undefined8 **)(local_528 + 0x78) < puVar37) {
      FUN_140023dd8(local_530,0x1f0);
      puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar38 + 0x3d;
    }
    *local_530 = (ulonglong)puVar37;
    uStack_110 = (uint)DAT_14ca33b00;
    uStack_10c = (undefined4)((ulonglong)DAT_14ca33b00 >> 0x20);
    if (DAT_14ca33b00 != 0) {
      LOCK();
      *(int *)(DAT_14ca33b00 + 8) = *(int *)(DAT_14ca33b00 + 8) + 1;
      UNLOCK();
    }
    local_108 = 0x4ca33ab8;
    uStack_104 = 1;
    local_598 = (wchar_t *)CONCAT71(local_598._1_7_,2);
    local_118 = (wchar_t *)puVar44;
    FUN_140068f1a(puVar38,&local_1a8,&local_118,uVar15);
    lVar23 = local_528;
    *puVar38 = &PTR_FUN_14a2c4b50;
    puVar38[0x37] = &DAT_14ca33ab8;
    puVar38[0x38] = puVar44;
    puVar38[0x39] = uVar24;
    puVar38[0x3a] = uVar22;
    puVar38[0x3b] = &DAT_100000001;
    *(undefined4 *)(puVar38 + 0x3c) = 1;
    iVar35 = *(int *)(local_528 + 0x170);
    *(uint *)(local_528 + 0x170) = iVar35 + 1U;
    if (*(uint *)(local_528 + 0x174) < iVar35 + 1U) {
      FUN_14470e57a(local_4b0,iVar35);
    }
    *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar35 * 8) = puVar38;
    *(int *)((longlong)puVar38 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
    FUN_140069100(lVar23,puVar38);
    local_590 = (wchar_t *)((ulonglong)local_590 & 0xffffffff00000000);
    local_598 = (wchar_t *)uVar30;
    FUN_1431f34ca(lVar23,*(undefined4 *)(local_518 + 0x3090),local_4a8,local_450);
  }
  pwVar19 = pwStack_248;
  puVar33 = local_530;
  local_118 = (wchar_t *)(local_1e0 | 0x20008);
  uStack_e6 = uStack_1ae;
  uStack_e5 = (undefined2)(CONCAT12(uStack_1ac,CONCAT11(uStack_1ad,uStack_1ae)) >> 8);
  uStack_e3 = uStack_1ab;
  uStack_ec = local_1b4;
  uStack_ea = uStack_1b2;
  uStack_e8 = uStack_1b0;
  uStack_110 = local_1d8;
  uStack_10c = (undefined4)uStack_1d4;
  local_108 = uStack_1d4._4_4_;
  uStack_104 = (undefined4)uStack_1cc;
  local_100 = uStack_1cc._4_4_;
  uStack_f4 = DAT_14ca84e40;
  if ((int)(uint)local_1bc < (int)DAT_14ca84e40) {
    uStack_f4 = (uint)local_1bc;
  }
  if ((int)uStack_f4 < 2) {
    uStack_f4 = 1;
  }
  uVar12 = (uint)((ulonglong)local_1bc >> 0x20);
  local_f0 = DAT_14ca84e40;
  if ((int)uVar12 < (int)DAT_14ca84e40) {
    local_f0 = uVar12;
  }
  uStack_fc = local_1c4;
  local_f8 = uStack_1c0;
  if ((int)local_f0 < 2) {
    local_f0 = 1;
  }
  uVar30 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar31 = uVar30 + 0x120;
  if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
    FUN_140023dd8(local_530,0x128);
    uVar30 = *puVar33 + 7 & 0xfffffffffffffff8;
    uVar31 = uVar30 + 0x120;
  }
  lVar48 = lVar23 + 0x178;
  *(ulonglong *)(lVar23 + 0x70) = uVar31;
  FUN_1456bbb8c(uVar30,L"Subsurface.SubpassOneTex",&local_118,0);
  iVar35 = *(int *)(lVar23 + 0x180);
  *(uint *)(lVar23 + 0x180) = iVar35 + 1U;
  if (*(uint *)(lVar23 + 0x184) < iVar35 + 1U) {
    FUN_14472c0f6(lVar48,iVar35);
  }
  *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar35 * 8) = uVar30;
  *(int *)(uVar30 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
  local_598 = pwVar19;
  local_590 = (wchar_t *)CONCAT44(local_590._4_4_,1);
  FUN_1430a9e6e(lVar23,&local_118,uVar30,&local_318);
  puVar33 = local_530;
  uVar29 = (uint)local_1bc;
  uVar12 = (uint)((ulonglong)local_1bc >> 0x20);
  uStack_f4 = DAT_14ca84e40;
  local_f0 = DAT_14ca84e40;
  if (local_51c == 1) {
    local_118 = (wchar_t *)(local_1e0 | 0x20008);
    uStack_e6 = uStack_1ae;
    uStack_e5 = (undefined2)(CONCAT12(uStack_1ac,CONCAT11(uStack_1ad,uStack_1ae)) >> 8);
    uStack_e3 = uStack_1ab;
    uStack_ec = local_1b4;
    uStack_ea = uStack_1b2;
    uStack_e8 = uStack_1b0;
    uStack_110 = local_1d8;
    uStack_10c = (undefined4)uStack_1d4;
    local_108 = uStack_1d4._4_4_;
    uStack_104 = (undefined4)uStack_1cc;
    local_100 = uStack_1cc._4_4_;
    if ((int)uVar29 < (int)DAT_14ca84e40) {
      uStack_f4 = uVar29;
    }
    if ((int)uStack_f4 < 2) {
      uStack_f4 = 1;
    }
    if ((int)uVar12 < (int)DAT_14ca84e40) {
      local_f0 = uVar12;
    }
    uStack_fc = local_1c4;
    local_f8 = uStack_1c0;
    if ((int)local_f0 < 2) {
      local_f0 = 1;
    }
    pwVar41 = (wchar_t *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    pwVar18 = pwVar41 + 0x90;
    if (*(wchar_t **)(lVar23 + 0x78) < pwVar18) {
      FUN_140023dd8(local_530,0x128);
      pwVar41 = (wchar_t *)(*puVar33 + 7 & 0xfffffffffffffff8);
      pwVar18 = pwVar41 + 0x90;
    }
    *(wchar_t **)(lVar23 + 0x70) = pwVar18;
    FUN_1456bbb8c(pwVar41,L"Subsurface.SubpassTwoTex",&local_118,0);
    iVar35 = *(int *)(lVar23 + 0x180);
    *(uint *)(lVar23 + 0x180) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0x184) < iVar35 + 1U) {
      FUN_14472c0f6(lVar48,iVar35);
    }
    *(wchar_t **)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar35 * 8) = pwVar41;
    *(int *)(pwVar41 + 0x4e) = *(int *)(lVar23 + 0x180) + -1;
    local_598 = pwVar19;
    local_590 = (wchar_t *)CONCAT44(local_590._4_4_,1);
    FUN_1430a9e6e(lVar23,&local_118,pwVar41,&local_318);
LAB_142f0865f:
    local_4d8 = 0;
  }
  else {
    uStack_e6 = uStack_1ae;
    local_118 = (wchar_t *)local_1e0;
    uStack_e5 = CONCAT11(uStack_1ac,uStack_1ad);
    uStack_ec = local_1b4;
    uStack_ea = uStack_1b2;
    uStack_e8 = uStack_1b0;
    uStack_110 = local_1d8;
    uStack_10c = (undefined4)uStack_1d4;
    local_108 = uStack_1d4._4_4_;
    uStack_104 = (undefined4)uStack_1cc;
    local_100 = uStack_1cc._4_4_;
    local_f8 = uStack_1c0;
    uStack_e3 = uStack_1ab;
    if ((int)uVar29 < (int)DAT_14ca84e40) {
      uStack_f4 = uVar29;
    }
    if ((int)uStack_f4 < 2) {
      uStack_f4 = 1;
    }
    if ((int)uVar12 < (int)DAT_14ca84e40) {
      local_f0 = uVar12;
    }
    uStack_fc = local_1c4;
    if ((int)local_f0 < 2) {
      local_f0 = 1;
    }
    pwVar41 = (wchar_t *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    pwVar19 = pwVar41 + 0x90;
    if (*(wchar_t **)(lVar23 + 0x78) < pwVar19) {
      FUN_140023dd8(local_530,0x128);
      pwVar41 = (wchar_t *)(*puVar33 + 7 & 0xfffffffffffffff8);
      pwVar19 = pwVar41 + 0x90;
    }
    *(wchar_t **)(lVar23 + 0x70) = pwVar19;
    FUN_1456bbb8c(pwVar41,L"Subsurface.SubpassTwoTex",&local_118,0);
    iVar35 = *(int *)(lVar23 + 0x180);
    *(uint *)(lVar23 + 0x180) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0x184) < iVar35 + 1U) {
      FUN_14472c0f6(lVar48,iVar35);
    }
    puVar33 = local_530;
    *(wchar_t **)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar35 * 8) = pwVar41;
    *(int *)(pwVar41 + 0x4e) = *(int *)(lVar23 + 0x180) + -1;
    if ((byte)local_4c8 != '\0') goto LAB_142f0865f;
    uStack_e6 = uStack_1ae;
    local_118 = (wchar_t *)local_1e0;
    uStack_e5 = CONCAT11(uStack_1ac,uStack_1ad);
    uStack_ec = local_1b4;
    uStack_ea = uStack_1b2;
    uStack_e8 = uStack_1b0;
    uStack_110 = local_1d8;
    uStack_10c = (undefined4)uStack_1d4;
    local_108 = uStack_1d4._4_4_;
    uStack_104 = (undefined4)uStack_1cc;
    local_100 = uStack_1cc._4_4_;
    local_f8 = uStack_1c0;
    uStack_e3 = uStack_1ab;
    uStack_f4 = DAT_14ca84e40;
    if ((int)(uint)local_1bc < (int)DAT_14ca84e40) {
      uStack_f4 = (uint)local_1bc;
    }
    if ((int)uStack_f4 < 2) {
      uStack_f4 = 1;
    }
    uVar12 = (uint)((ulonglong)local_1bc >> 0x20);
    local_f0 = DAT_14ca84e40;
    if ((int)uVar12 < (int)DAT_14ca84e40) {
      local_f0 = uVar12;
    }
    uStack_fc = local_1c4;
    if ((int)local_f0 < 2) {
      local_f0 = 1;
    }
    uVar45 = *(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar31 = uVar45 + 0x120;
    if (*(ulonglong *)(lVar23 + 0x78) < uVar31) {
      FUN_140023dd8(local_530,0x128);
      uVar45 = *puVar33 + 7 & 0xfffffffffffffff8;
      uVar31 = uVar45 + 0x120;
    }
    *(ulonglong *)(lVar23 + 0x70) = uVar31;
    FUN_1456bbb8c(uVar45,L"Subsurface.QualityHistoryState",&local_118,0);
    iVar35 = *(int *)(lVar23 + 0x180);
    *(uint *)(lVar23 + 0x180) = iVar35 + 1U;
    if (*(uint *)(lVar23 + 0x184) < iVar35 + 1U) {
      FUN_14472c0f6(lVar48,iVar35);
    }
    *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar35 * 8) = uVar45;
    *(int *)(uVar45 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
    local_4d8 = uVar45;
  }
  puVar34 = &DAT_14ca30fd0;
  if (local_51c == 1) {
    puVar34 = &DAT_14ca2c388;
  }
  puVar20 = &DAT_14ca34fd0;
  if (*(int *)(DAT_14ca2f7b8 + 4) != 0) {
    puVar20 = puVar34;
  }
  local_4e8 = *(longlong *)(puVar20 + 0x10);
  local_118 = L"SSS::PassOne_Burley";
  uStack_110 = (uint)local_4a8;
  uStack_10c = (undefined4)((ulonglong)local_4a8 >> 0x20);
  local_108 = (uint)uVar30;
  uStack_104 = (undefined4)(uVar30 >> 0x20);
  local_100 = 0;
  uStack_fc = 0;
  local_f8 = 0x4a2c12b6;
  uStack_f4 = 1;
  uStack_ec = (undefined2)((ulonglong)local_4a8 >> 0x20);
  uStack_ea = (undefined2)((ulonglong)local_4a8 >> 0x30);
  uStack_e8 = (undefined2)uVar30;
  uStack_e6 = (undefined1)(uVar30 >> 0x10);
  uStack_e5 = (undefined2)(uVar30 >> 0x18);
  uStack_e3 = (undefined1)(uVar30 >> 0x28);
  uStack_e2 = (undefined2)(uVar30 >> 0x30);
  local_e0 = 1;
  local_d8 = L"SSS::PassThree_SepVer";
  uStack_d0 = uVar30;
  local_c8 = pwVar41;
  local_c0 = &DAT_100000001;
  local_b8 = L"SSS::PassFour_BVar";
  local_b0 = uVar30;
  local_a8 = pwVar41;
  local_a0 = 0x100000000;
  local_2a8[0] = local_280[0];
  local_2a8[1] = local_280[1];
  local_468 = (ulonglong)
              (byte)((((char)local_4c8 * '\x02' | (char)local_4f8 * '\x04') + (char)local_508) *
                    '\x02');
  lVar43 = 0x1c;
  local_460 = pwVar41;
  local_f0 = uStack_110;
  do {
    puVar33 = local_530;
    iVar35 = *(int *)((longlong)&local_120 + lVar43 + 4);
    lVar16 = (longlong)iVar35;
    local_508 = (ulonglong *)(ulonglong)*(uint *)((longlong)&local_118 + lVar43);
    uVar22 = *(undefined8 *)(local_130 + lVar43 + 4);
    lVar23 = *(longlong *)(local_128 + lVar43 + 4);
    uVar4 = *(undefined1 *)(lVar23 + 0x94);
    puVar38 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar37 = puVar38 + 0x66;
    local_4e0 = (wchar_t *)lVar43;
    if (*(undefined8 **)(local_528 + 0x78) < puVar37) {
      FUN_140023dd8(local_530,0x340);
      puVar38 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
      puVar37 = puVar38 + 0x66;
    }
    *(undefined8 **)(local_528 + 0x70) = puVar37;
    *puVar38 = &PTR_FUN_14a2c4b68;
    puVar38[2] = 0;
    *(undefined1 *)(puVar38 + 3) = 1;
    puVar38[4] = 0;
    puVar38[5] = 0x3f80000000000000;
    puVar38[6] = 0;
    *(undefined1 *)(puVar38 + 7) = 1;
    puVar38[8] = 0;
    *(undefined1 *)(puVar38 + 9) = 1;
    puVar38[0x18] = 0;
    puVar38[0x19] = 0;
    puVar38[0x1a] = 0;
    puVar38[0x1b] = 0;
    puVar38[0x1c] = 0;
    *(undefined4 *)(puVar38 + 0x1d) = 4;
    puVar38[0x2c] = 0;
    puVar38[0x2e] = 0;
    puVar38[0x3e] = 0;
    puVar38[0x40] = 0;
    puVar38[0x50] = 0;
    puVar38[0x52] = 0;
    puVar38[0x62] = 0;
    puVar38[100] = 0;
    puVar38[0x65] = 0;
    iVar28 = *(int *)(local_528 + 0xa0);
    uVar12 = iVar28 + 1;
    *(uint *)(local_528 + 0xa0) = uVar12;
    if (*(uint *)(local_528 + 0xa4) < uVar12) {
      FUN_1448cfae8(local_498);
    }
    lVar43 = local_528;
    puVar33 = local_530;
    *(undefined8 **)(*(longlong *)(local_528 + 0x98) + (longlong)iVar28 * 8) = puVar38;
    *(undefined4 *)(puVar38 + 8) = local_328;
    *(undefined4 *)((longlong)puVar38 + 0x44) = uStack_324;
    *(undefined4 *)(puVar38 + 9) = uStack_320;
    *(undefined4 *)((longlong)puVar38 + 0x4c) = uStack_31c;
    *(undefined4 *)(puVar38 + 6) = local_338;
    *(undefined4 *)((longlong)puVar38 + 0x34) = uStack_334;
    *(undefined4 *)(puVar38 + 7) = uStack_330;
    *(undefined4 *)((longlong)puVar38 + 0x3c) = uStack_32c;
    *(undefined4 *)(puVar38 + 4) = local_348;
    *(undefined4 *)((longlong)puVar38 + 0x24) = uStack_344;
    *(undefined4 *)(puVar38 + 5) = uStack_340;
    *(undefined4 *)((longlong)puVar38 + 0x2c) = uStack_33c;
    puVar37 = local_3b8;
    puVar36 = puVar38 + 10;
    for (lVar48 = 0xe; lVar48 != 0; lVar48 = lVar48 + -1) {
      *puVar36 = *puVar37;
      puVar37 = puVar37 + 1;
      puVar36 = puVar36 + 1;
    }
    puVar36 = (undefined8 *)(*(longlong *)(local_528 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar36 + 9;
    if (*(undefined8 **)(local_528 + 0x78) < puVar37) {
      FUN_140023dd8();
      puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar36 + 9;
    }
    *(undefined8 **)(lVar43 + 0x70) = puVar37;
    puVar36[1] = *(undefined8 *)(lVar23 + 8);
    puVar36[2] = 0;
    *(undefined1 *)(puVar36 + 3) = 0;
    *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar36 + 5) = 0;
    *puVar36 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar36 + 6) = uVar4;
    *(undefined1 *)(puVar36 + 7) = 0;
    *(undefined4 *)((longlong)puVar36 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar36 + 0x35) = 0;
    puVar36[8] = lVar23;
    iVar28 = *(int *)(lVar43 + 0x1a0);
    uVar12 = iVar28 + 1;
    *(uint *)(lVar43 + 0x1a0) = uVar12;
    if (*(uint *)(lVar43 + 0x1a4) < uVar12) {
      FUN_1447568fc(local_510);
    }
    pwVar19 = pwStack_248;
    lVar48 = local_518;
    puVar33 = local_530;
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar28 * 8) = puVar36;
    *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar38[0x18] = puVar36;
    puVar37 = local_3b8;
    puVar36 = puVar38 + 0x1e;
    for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar36 = *puVar37;
      puVar37 = puVar37 + 1;
      puVar36 = puVar36 + 1;
    }
    puVar38[0x2c] = uVar22;
    puVar38[0x2e] = local_4e8;
    puVar38[0x1a] = local_2a8[lVar16];
    puVar36 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar36 + 9;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar37) {
      FUN_140023dd8();
      puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar36 + 9;
    }
    pwVar41 = local_490;
    *(undefined8 **)(lVar43 + 0x70) = puVar37;
    puVar36[1] = *(undefined8 *)(pwVar19 + 4);
    puVar36[2] = 0;
    *(undefined1 *)(puVar36 + 3) = 3;
    *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
    *puVar36 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar36 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar36 + 0x2c) = 0xffffffff00000000;
    puVar36[7] = 0;
    puVar36[8] = pwVar19;
    iVar28 = *(int *)(lVar43 + 0x1a0);
    uVar12 = iVar28 + 1;
    *(uint *)(lVar43 + 0x1a0) = uVar12;
    if (*(uint *)(lVar43 + 0x1a4) < uVar12) {
      FUN_1447568fc(local_510);
    }
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar28 * 8) = puVar36;
    *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar38[0x1b] = puVar36;
    puVar38[0x1c] = local_240;
    *(undefined4 *)(puVar38 + 0x1d) = 4;
    uVar22 = *(undefined8 *)(lVar48 + 0x118d0);
    lVar23 = FUN_144a2c9be();
    puVar33 = local_530;
    cVar10 = *(char *)(lVar23 + 0x41);
    if (cVar10 == '\x03') {
      cVar10 = '\x02';
    }
    puVar38[2] = uVar22;
    *(char *)(puVar38 + 3) = cVar10;
    if ((int)local_508 == 0 && iVar35 == 0) {
LAB_142f08c62:
      puVar37 = local_3b8;
      puVar36 = puVar38 + 0x30;
      for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
        *puVar36 = *puVar37;
        puVar37 = puVar37 + 1;
        puVar36 = puVar36 + 1;
      }
      puVar38[0x3e] = local_478;
      puVar38[0x40] = local_470;
      puVar37 = local_3b8;
      puVar36 = puVar38 + 0x42;
      for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
        *puVar36 = *puVar37;
        puVar37 = puVar37 + 1;
        puVar36 = puVar36 + 1;
      }
      puVar38[0x50] = local_4b8;
      puVar38[0x52] = local_470;
    }
    else if (((int)local_508 == 1) && (iVar35 == 0)) {
      if ((byte)local_4c8 == '\0') {
        uVar4 = *(undefined1 *)(local_4d8 + 0x94);
        puVar36 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar37 = puVar36 + 9;
        if (*(undefined8 **)(lVar43 + 0x78) < puVar37) {
          FUN_140023dd8(local_530);
          puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
          puVar37 = puVar36 + 9;
        }
        *(undefined8 **)(lVar43 + 0x70) = puVar37;
        puVar36[1] = *(undefined8 *)(local_4d8 + 8);
        puVar36[2] = 0;
        *(undefined1 *)(puVar36 + 3) = 0;
        *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar36 + 5) = 0;
        *puVar36 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar36 + 6) = uVar4;
        *(undefined1 *)(puVar36 + 7) = 0;
        *(undefined4 *)((longlong)puVar36 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar36 + 0x35) = 0;
        puVar36[8] = local_4d8;
        iVar35 = *(int *)(lVar43 + 0x1a0);
        *(uint *)(lVar43 + 0x1a0) = iVar35 + 1U;
        if (*(uint *)(lVar43 + 0x1a4) < iVar35 + 1U) {
          FUN_1447568fc(local_510,iVar35);
        }
        *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar35 * 8) = puVar36;
        *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
        puVar38[0x19] = puVar36;
        puVar37 = local_3b8;
        puVar36 = puVar38 + 0x54;
        for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar36 = *puVar37;
          puVar37 = puVar37 + 1;
          puVar36 = puVar36 + 1;
        }
        puVar38[0x62] = local_4a8;
        puVar38[100] = DAT_14ca2c398;
      }
      goto LAB_142f08c62;
    }
    puVar33 = local_530;
    if ((char)local_4f8 != '\0') {
      uVar4 = *(undefined1 *)((longlong)pwVar41 + 0x94);
      puVar36 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar37 = puVar36 + 9;
      if (*(undefined8 **)(lVar43 + 0x78) < puVar37) {
        FUN_140023dd8(local_530,0x50);
        puVar36 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
        puVar37 = puVar36 + 9;
      }
      *(undefined8 **)(lVar43 + 0x70) = puVar37;
      puVar36[1] = *(undefined8 *)((longlong)pwVar41 + 8);
      puVar36[2] = 0;
      *(undefined1 *)(puVar36 + 3) = 0;
      *(undefined8 *)((longlong)puVar36 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar36 + 5) = 0;
      *puVar36 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar36 + 6) = uVar4;
      *(undefined1 *)(puVar36 + 7) = 0;
      *(undefined4 *)((longlong)puVar36 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar36 + 0x35) = 0;
      puVar36[8] = pwVar41;
      iVar35 = *(int *)(lVar43 + 0x1a0);
      *(uint *)(lVar43 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(lVar43 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_510,iVar35);
      }
      *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar35 * 8) = puVar36;
      *(int *)((longlong)puVar36 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
      puVar38[0x65] = puVar36;
    }
    lVar23 = DAT_14ca2f7d0;
    uVar12 = *local_500;
    if (uVar12 == 0x40000002) {
      uVar12 = 0x40000002;
      uVar31 = 0;
    }
    else {
      bVar49 = true;
      if ((DAT_14c86a9f8 == '\x01') && (uVar12 != 2)) {
        if (uVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar49 = DVar13 == DVar14;
          uVar12 = *local_500;
        }
        else {
          bVar49 = false;
        }
      }
      uVar31 = (ulonglong)(bVar49 ^ 1);
    }
    lVar6 = DAT_14ca2f878;
    iVar35 = *(int *)(lVar23 + uVar31 * 4);
    if (1 < iVar35) {
      iVar35 = 2;
    }
    if (iVar35 < 1) {
      iVar35 = 0;
    }
    if (uVar12 == 0x40000002) {
      uVar31 = 0;
    }
    else {
      bVar49 = true;
      if ((DAT_14c86a9f8 == '\x01') && (uVar12 != 2)) {
        if (uVar12 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar49 = DVar13 == DVar14;
        }
        else {
          bVar49 = false;
        }
      }
      uVar31 = (ulonglong)(bVar49 ^ 1);
    }
    iVar28 = *(int *)(lVar6 + uVar31 * 4);
    lVar23 = *(longlong *)(lVar48 + 0x13818);
    local_4f0 = lVar16;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca30158) && (FUN_144b3d300(&DAT_14ca30158), DAT_14ca30158 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca33cd0) && (FUN_144b3d300(&DAT_14ca33cd0), DAT_14ca33cd0 == -1))
      {
        FUN_141583650(&local_1a8);
        local_550 = (undefined1 *)((ulonglong)local_550 & 0xffffffffffffff00);
        local_560 = (undefined1 *)((ulonglong)local_560 & 0xffffffffffffff00);
        local_580 = "Unknown";
        local_590 = (wchar_t *)0x0;
        uStack_588 = 0;
        local_598 = L"FParameters";
        local_558 = (undefined1 *)0x0;
        local_570 = (code *)CONCAT44(local_570._4_4_,800);
        local_578 = (code *)CONCAT44(local_578._4_4_,0x239);
        local_568 = &local_1a8;
        FUN_140b49562(&DAT_14ca33c50,0,1);
        if (local_1a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142f140bd);
        _Init_thread_footer(&DAT_14ca33cd0);
      }
      FUN_14610c7c2();
      local_540 = &DAT_14ca33c50;
      local_550 = &LAB_14712ac08;
      local_558 = &LAB_14712ac0c;
      local_560 = &LAB_140dd978a;
      local_568 = (undefined8 *)&LAB_142f060a4;
      local_570 = FUN_147299c26;
      local_578 = FUN_147299c86;
      local_590 = L"MainIndirectDispatchCS";
      local_598 = L"/Engine/Private/PostProcessSubsurface.usf";
      local_548 = 0xe0;
      local_580 = (char *)CONCAT44(local_580._4_4_,0xc0);
      uStack_588 = CONCAT44(uStack_588._4_4_,5);
      FUN_140db5666(&DAT_14ca300b0,0,&DAT_14ca30048,L"FSubsurfaceIndirectDispatchCS");
      _DAT_14ca300b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f060bb);
      _Init_thread_footer(&DAT_14ca30158);
      lVar43 = local_528;
      lVar48 = local_518;
    }
    iVar32 = (int)local_4f0;
    iVar35 = (int)local_508 +
             (((uint)(0 < iVar28) + ((int)local_468 + iVar32) * 2) * 3 + iVar35) * 2;
    FUN_1448e935e(lVar23,local_2e8,&DAT_14ca300b0,iVar35);
    uVar5 = *(undefined2 *)(lVar23 + 0x50);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca30158) && (FUN_144b3d300(&DAT_14ca30158), DAT_14ca30158 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca33cd0) && (FUN_144b3d300(&DAT_14ca33cd0), DAT_14ca33cd0 == -1))
      {
        FUN_141583650(&local_1a8);
        local_550 = (undefined1 *)((ulonglong)local_550 & 0xffffffffffffff00);
        local_560 = (undefined1 *)((ulonglong)local_560 & 0xffffffffffffff00);
        local_580 = "Unknown";
        local_590 = (wchar_t *)0x0;
        uStack_588 = 0;
        local_598 = L"FParameters";
        local_558 = (undefined1 *)0x0;
        local_570 = (code *)CONCAT44(local_570._4_4_,800);
        local_578 = (code *)CONCAT44(local_578._4_4_,0x239);
        local_568 = &local_1a8;
        FUN_140b49562(&DAT_14ca33c50,0,1);
        if (local_1a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142f140bd);
        _Init_thread_footer(&DAT_14ca33cd0);
      }
      FUN_14610c7c2();
      local_540 = &DAT_14ca33c50;
      local_550 = &LAB_14712ac08;
      local_558 = &LAB_14712ac0c;
      local_560 = &LAB_140dd978a;
      local_568 = (undefined8 *)&LAB_142f060a4;
      local_570 = FUN_147299c26;
      local_578 = FUN_147299c86;
      local_590 = L"MainIndirectDispatchCS";
      local_598 = L"/Engine/Private/PostProcessSubsurface.usf";
      local_548 = 0xe0;
      local_580 = (char *)CONCAT44(local_580._4_4_,0xc0);
      uStack_588 = CONCAT44(uStack_588._4_4_,5);
      FUN_140db5666(&DAT_14ca300b0,0,&DAT_14ca30048,L"FSubsurfaceIndirectDispatchCS");
      _DAT_14ca300b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f060bb);
      _Init_thread_footer(&DAT_14ca30158);
      iVar32 = (int)local_4f0;
      lVar43 = local_528;
      lVar48 = local_518;
    }
    local_1a8 = (undefined8 *)CONCAT62(local_1a8._2_6_,uVar5);
    local_1a8 = (undefined8 *)CONCAT44(iVar35,(undefined4)local_1a8);
    uStack_1a0._0_4_ = 1;
    uStack_1a0._4_4_ = (undefined4)DAT_14ca300d0;
    uStack_198 = (undefined4)((ulonglong)DAT_14ca300d0 >> 0x20);
    FUN_140dd9790(&local_1a8);
    lVar16 = local_2e8[1];
    lVar23 = local_2e8[0];
    local_2e8[0] = 0;
    local_2d8 = (longlong *)0x0;
    uVar15 = 0;
    if (iVar32 == 1) {
      uVar15 = 0xc;
    }
    lVar6 = puVar38[0x1c];
    local_130 = (undefined1  [8])lVar6;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca33cd0) && (FUN_144b3d300(&DAT_14ca33cd0), DAT_14ca33cd0 == -1)) {
      FUN_141583650(&local_1a8);
      local_550 = (undefined1 *)((ulonglong)local_550 & 0xffffffffffffff00);
      local_560 = (undefined1 *)((ulonglong)local_560 & 0xffffffffffffff00);
      local_580 = "Unknown";
      local_590 = (wchar_t *)0x0;
      uStack_588 = 0;
      local_598 = L"FParameters";
      local_558 = (undefined1 *)0x0;
      local_570 = (code *)CONCAT44(local_570._4_4_,800);
      local_578 = (code *)CONCAT44(local_578._4_4_,0x239);
      local_568 = &local_1a8;
      FUN_140b49562(&DAT_14ca33c50,0,1);
      if (local_1a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140bd);
      _Init_thread_footer(&DAT_14ca33cd0);
      lVar43 = local_528;
      lVar48 = local_518;
    }
    puVar38 = puVar38 + 2;
    local_1a8 = (undefined8 *)local_130;
    uStack_1a0 = local_128;
    FUN_1448f70da(lVar23,&DAT_14ca33c50,puVar38,&local_1a8);
    uStack_1a0._0_4_ = (undefined4)lVar23;
    uStack_1a0._4_4_ = (undefined4)((ulonglong)lVar23 >> 0x20);
    uStack_198 = (undefined4)lVar16;
    uStack_194 = (undefined4)((ulonglong)lVar16 >> 0x20);
    local_178 = local_2e8[0];
    local_168 = local_2d8;
    local_2d8 = (longlong *)0x0;
    local_148 = local_2b8;
    uStack_144 = uStack_2b4;
    uStack_140 = uStack_2b0;
    uStack_13c = uStack_2ac;
    local_158 = local_2c8;
    uStack_154 = uStack_2c4;
    uStack_150 = uStack_2c0;
    uStack_14c = uStack_2bc;
    if (local_2e8[0] != 0) {
      local_2e8[0] = 0;
    }
    local_1a8 = puVar38;
    lStack_190 = lVar6;
    local_188 = uVar15;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca33cd0) && (FUN_144b3d300(&DAT_14ca33cd0), DAT_14ca33cd0 == -1)) {
      FUN_141583650(local_130);
      local_550 = (undefined1 *)((ulonglong)local_550 & 0xffffffffffffff00);
      local_560 = (undefined1 *)((ulonglong)local_560 & 0xffffffffffffff00);
      local_580 = "Unknown";
      local_590 = (wchar_t *)0x0;
      uStack_588 = 0;
      local_598 = L"FParameters";
      local_558 = (undefined1 *)0x0;
      local_570 = (code *)CONCAT44(local_570._4_4_,800);
      local_578 = (code *)CONCAT44(local_578._4_4_,0x239);
      local_568 = (undefined8 *)local_130;
      FUN_140b49562(&DAT_14ca33c50,0,1);
      if (local_130 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140bd);
      _Init_thread_footer(&DAT_14ca33cd0);
      lVar43 = local_528;
      lVar48 = local_518;
    }
    FUN_140069376(lVar43);
    puVar33 = local_530;
    uVar39 = (undefined6)((ulonglong)lVar16 >> 0x10);
    uVar15 = (undefined4)CONCAT62(uVar39,2);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar15 = (undefined4)CONCAT62(uVar39,4);
    }
    puVar36 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar37 = puVar36 + 0x46;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar37) {
      FUN_140023dd8(local_530,0x240);
      puVar36 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
      puVar37 = puVar36 + 0x46;
    }
    *local_530 = (ulonglong)puVar37;
    local_128 = (undefined1  [8])DAT_14ca33c98;
    if (DAT_14ca33c98 != 0) {
      LOCK();
      *(int *)(DAT_14ca33c98 + 8) = *(int *)(DAT_14ca33c98 + 8) + 1;
      UNLOCK();
    }
    local_120 = &DAT_14ca33c50;
    local_598 = (wchar_t *)CONCAT71(local_598._1_7_,2);
    local_130 = (undefined1  [8])puVar38;
    FUN_140068f1a(puVar36,&local_429,local_130,uVar15);
    *puVar36 = &PTR_FUN_14a2c4b70;
    puVar36[0x38] = local_1a8;
    puVar36[0x39] = CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_1a0);
    puVar36[0x3a] = CONCAT44(uStack_194,uStack_198);
    puVar36[0x3b] = lStack_190;
    *(undefined4 *)(puVar36 + 0x3c) = local_188;
    puVar36[0x3e] = local_178;
    puVar36[0x40] = local_168;
    local_168 = (longlong *)0x0;
    *(undefined4 *)(puVar36 + 0x44) = local_148;
    *(undefined4 *)((longlong)puVar36 + 0x224) = uStack_144;
    *(undefined4 *)(puVar36 + 0x45) = uStack_140;
    *(undefined4 *)((longlong)puVar36 + 0x22c) = uStack_13c;
    *(undefined4 *)(puVar36 + 0x42) = local_158;
    *(undefined4 *)((longlong)puVar36 + 0x214) = uStack_154;
    *(undefined4 *)(puVar36 + 0x43) = uStack_150;
    *(undefined4 *)((longlong)puVar36 + 0x21c) = uStack_14c;
    if (local_178 != 0) {
      local_178 = 0;
    }
    iVar35 = *(int *)(lVar43 + 0x170);
    *(uint *)(lVar43 + 0x170) = iVar35 + 1U;
    if (*(uint *)(lVar43 + 0x174) < iVar35 + 1U) {
      FUN_14470e57a(local_4b0,iVar35);
    }
    *(undefined8 **)(*(longlong *)(lVar43 + 0x168) + (longlong)iVar35 * 8) = puVar36;
    *(int *)((longlong)puVar36 + 0x2c) = *(int *)(lVar43 + 0x170) + -1;
    FUN_140069100(lVar43,puVar36);
    if (local_178 != 0) {
      plVar26 = local_168;
      if (local_168 == (longlong *)0x0) {
        plVar26 = (longlong *)&local_158;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    if (local_2e8[0] != 0) {
      plVar26 = local_2d8;
      if (local_2d8 == (longlong *)0x0) {
        plVar26 = (longlong *)&local_2c8;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    puVar37 = local_458;
    lVar16 = local_480;
    lVar23 = local_528;
    lVar43 = (longlong)local_4e0 + 0x20;
  } while (lVar43 != 0x9c);
  if (local_458 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_458 + 1);
    uVar12 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar12 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_458 + 1);
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar12 >> 0x1e & 1) == 0) {
        bVar11 = *(byte *)((longlong)local_458 + 0xd);
        plVar17 = (longlong *)FUN_14001cc68(0x10,8);
        plVar17[1] = (longlong)puVar37;
        plVar26 = DAT_14ca843c0;
        plVar21 = DAT_14ca843c8;
        if ((bVar11 & 2) == 0) {
          do {
            *plVar17 = (longlong)plVar26;
            LOCK();
            bVar49 = plVar26 != DAT_14ca843c0;
            plVar21 = plVar17;
            if (bVar49) {
              plVar26 = DAT_14ca843c0;
              plVar21 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar21;
            UNLOCK();
            lVar23 = local_528;
            lVar16 = local_480;
            lVar48 = local_518;
          } while (bVar49);
        }
        else {
          do {
            *plVar17 = (longlong)plVar21;
            LOCK();
            bVar49 = plVar21 != DAT_14ca843c8;
            plVar26 = plVar17;
            if (bVar49) {
              plVar21 = DAT_14ca843c8;
              plVar26 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar26;
            UNLOCK();
          } while (bVar49);
        }
      }
    }
  }
LAB_142f09a4f:
  uVar22 = FUN_14472bf7a(lVar23,lVar16,L"Subsurface.Recombines",0);
  local_4f0 = DAT_14c9c0d98;
  puVar33 = (ulonglong *)(lVar23 + 0x70);
  puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar37 = puVar38 + 0x56;
  if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
    FUN_140023dd8(puVar33,0x2c0);
    puVar38 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    puVar37 = puVar38 + 0x56;
  }
  *puVar33 = (ulonglong)puVar37;
  *puVar38 = &PTR_FUN_14a2c4b88;
  local_4e0 = (wchar_t *)(puVar38 + 2);
  puVar38[2] = 0;
  *(undefined1 *)(puVar38 + 3) = 1;
  puVar38[4] = 0;
  puVar38[5] = 0x3f80000000000000;
  puVar38[6] = 0;
  *(undefined1 *)(puVar38 + 7) = 1;
  puVar38[8] = 0;
  *(undefined1 *)(puVar38 + 9) = 1;
  puVar38[0xf] = 0;
  puVar38[0x10] = 0;
  *(undefined4 *)(puVar38 + 0x11) = 4;
  puVar38[0x20] = 0;
  puVar38[0x30] = 0;
  puVar38[0x32] = 0;
  puVar38[0x33] = 0;
  lVar23 = 0x1b0;
  do {
    *(undefined8 *)((longlong)puVar38 + lVar23) = 0;
    ((undefined8 *)((longlong)puVar38 + lVar23))[1] = 0;
    *(undefined4 *)((longlong)puVar38 + lVar23 + 0x10) = 0xffff0000;
    lVar23 = lVar23 + 0x18;
  } while (lVar23 != 0x270);
  *(undefined4 *)((longlong)puVar38 + 0x284) = 0;
  puVar38[0x4e] = 0;
  puVar38[0x4f] = 0;
  *(undefined2 *)(puVar38 + 0x50) = 0;
  *(undefined4 *)(puVar38 + 0x51) = 0xffffffff;
  *(undefined4 *)((longlong)puVar38 + 0x28c) = 0xffffffff;
  *(undefined4 *)(puVar38 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)puVar38 + 0x294) = 0xffffffff;
  *(undefined4 *)(puVar38 + 0x53) = 0;
  *(undefined2 *)((longlong)puVar38 + 0x29c) = 0;
  puVar38[0x54] = 0;
  plVar26 = (longlong *)(local_528 + 0x98);
  iVar35 = *(int *)(local_528 + 0xa0);
  *(uint *)(local_528 + 0xa0) = iVar35 + 1U;
  local_508 = puVar33;
  if (*(uint *)(local_528 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(plVar26,iVar35);
  }
  uVar24 = local_450;
  *(undefined8 **)(*plVar26 + (longlong)iVar35 * 8) = puVar38;
  *(undefined4 *)(puVar38 + 8) = local_328;
  *(undefined4 *)((longlong)puVar38 + 0x44) = uStack_324;
  *(undefined4 *)(puVar38 + 9) = uStack_320;
  *(undefined4 *)((longlong)puVar38 + 0x4c) = uStack_31c;
  *(undefined4 *)(puVar38 + 6) = local_338;
  *(undefined4 *)((longlong)puVar38 + 0x34) = uStack_334;
  *(undefined4 *)(puVar38 + 7) = uStack_330;
  *(undefined4 *)((longlong)puVar38 + 0x3c) = uStack_32c;
  *(undefined4 *)(puVar38 + 4) = local_348;
  *(undefined4 *)((longlong)puVar38 + 0x24) = uStack_344;
  *(undefined4 *)(puVar38 + 5) = uStack_340;
  *(undefined4 *)((longlong)puVar38 + 0x2c) = uStack_33c;
  *(uint *)(puVar38 + 0x34) = (uint)(0 < *(int *)(DAT_14ca2f818 + 4) & (byte)local_4c0);
  if (local_51c != 2) {
    puVar38[10] = local_310;
    puVar38[0xb] = uStack_308;
    *(uint *)(puVar38 + 0xc) = (uint)bStack_284;
    *(undefined4 *)((longlong)puVar38 + 100) = 2;
    *(float *)(puVar38 + 0xd) = 1.0 / (float)(int)local_318;
    *(float *)((longlong)puVar38 + 0x6c) = 1.0 / (float)local_318._4_4_;
    puVar38[0xf] = local_280[2];
    puVar38[0x10] = uStack_238;
    *(undefined4 *)(puVar38 + 0x11) = 4;
  }
  puVar38[0x36] = uVar22;
  puVar38[0x37] = 0;
  *(undefined1 *)(puVar38 + 0x38) = param_5;
  *(undefined1 *)((longlong)puVar38 + 0x1c1) = 0;
  *(undefined2 *)((longlong)puVar38 + 0x1c2) = 0xffff;
  lVar23 = local_448;
  if ((char)local_4cc == '\0') {
    lVar23 = local_4a0;
  }
  puVar37 = local_428;
  puVar36 = puVar38 + 0x12;
  for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar36 = *puVar37;
    puVar37 = puVar37 + 1;
    puVar36 = puVar36 + 1;
  }
  puVar38[0x20] = lVar23;
  puVar38[0x32] = local_450;
  uVar25 = *(undefined8 *)(lVar48 + 0x118d0);
  local_530 = (ulonglong *)uVar22;
  lVar23 = FUN_144a2c9be();
  cVar10 = '\x02';
  if (*(char *)(lVar23 + 0x41) != '\x03') {
    cVar10 = *(char *)(lVar23 + 0x41);
  }
  puVar38[2] = uVar25;
  *(char *)(puVar38 + 3) = cVar10;
  if (local_51c != 2) {
    puVar37 = local_3b8;
    puVar36 = puVar38 + 0x22;
    for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar36 = *puVar37;
      puVar37 = puVar37 + 1;
      puVar36 = puVar36 + 1;
    }
    puVar38[0x30] = local_460;
    puVar38[0x33] = uVar24;
  }
  lVar23 = DAT_14ca2f7a0;
  uVar12 = *local_500;
  if (((uVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar12 == 2)) {
    uVar31 = 0;
  }
  else if (uVar12 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar31 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar31 = 1;
  }
  iVar35 = *(int *)(lVar23 + uVar31 * 4);
  bVar11 = FUN_1401431b7(lVar48);
  uVar12 = local_51c;
  uVar29 = 1;
  if (bVar11 < 2) {
    if (iVar35 == 1) {
      uVar29 = 1;
    }
    else {
      uVar29 = 0;
      lVar48 = local_518;
      if (iVar35 == -1) {
        uVar29 = (uint)(bVar11 != 1);
      }
    }
  }
  uVar22 = *(undefined8 *)(lVar48 + 0x13818);
  iVar35 = ((uint)(local_51c == 1) * 4 + (uint)(byte)local_4c0 * 2 + (uint)(byte)local_4c8 * 8 |
           uVar29) * 3 + local_51c;
  local_4f8 = (wchar_t *)plVar26;
  FUN_14159db4a();
  FUN_1448e935e(uVar22,&local_118,&DAT_14ca30300,iVar35);
  FUN_14159db4a();
  pwVar19 = local_118;
  local_500 = (uint *)CONCAT44(uStack_10c,uStack_110);
  uVar22 = *(undefined8 *)(lVar48 + 0x13818);
  uVar24 = FUN_1415d24e0();
  FUN_1448e935e(uVar22,&local_118,uVar24,0);
  FUN_1415d24e0();
  pwVar41 = local_118;
  uVar22 = local_2f0;
  uVar30 = local_2f8;
  uVar31 = local_300;
  lVar23 = local_518;
  local_490 = DAT_14c9c0d50;
  if (uVar12 == 2) {
    uVar24 = *(undefined8 *)(local_518 + 0x13818);
    uVar25 = FUN_146082958();
    FUN_1448e935e(uVar24,&local_118,uVar25,0);
    FUN_146082958();
    pwVar18 = local_118;
    uVar45 = CONCAT44(uStack_10c,uStack_110);
    local_4e8 = CONCAT44(local_4e8._4_4_,*(undefined4 *)(lVar23 + 0x3090));
    local_468 = CONCAT44(local_468._4_4_,*(undefined4 *)(lVar23 + 0x1dd4));
    local_4b8 = CONCAT44(local_4b8._4_4_,*(undefined4 *)(lVar23 + 0x3094));
    local_478 = CONCAT71(local_478._1_7_,(&DAT_00001de6)[lVar23]);
    FUN_14159dc6c();
    pwVar41 = local_4e0;
    local_118 = (wchar_t *)0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    FUN_1448f70da(pwVar19,&DAT_14ca33d60,local_4e0,&local_118);
    local_118 = (wchar_t *)CONCAT44((undefined4)local_468,(int)local_4e8);
    uStack_110 = (undefined4)local_4b8;
    uStack_10c = CONCAT31(uStack_10c._1_3_,(undefined1)local_478);
    local_108 = (uint)uVar31;
    uStack_104 = (undefined4)(uVar31 >> 0x20);
    local_100 = (undefined4)uVar30;
    uStack_fc = (uint)(uVar30 >> 0x20);
    local_f8 = (undefined4)uVar22;
    uStack_f4 = (uint)((ulonglong)uVar22 >> 0x20);
    uStack_ec = (undefined2)(uVar31 >> 0x20);
    uStack_ea = (undefined2)(uVar31 >> 0x30);
    uStack_e8 = (undefined2)uVar30;
    uStack_e6 = (undefined1)(uVar30 >> 0x10);
    uStack_e5 = (undefined2)(uVar30 >> 0x18);
    uStack_e3 = (undefined1)(uVar30 >> 0x28);
    uStack_e2 = (undefined2)(uVar30 >> 0x30);
    local_e0 = uVar22;
    local_d8 = pwVar18;
    local_c8 = pwVar19;
    local_c0 = (undefined1 *)local_500;
    local_b8 = local_490;
    local_b0 = local_4f0;
    local_a8 = DAT_14ca94df8;
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_98 = pwVar19;
    local_90 = (undefined1 *)local_500;
    local_88 = pwVar41;
    local_80 = 0;
    local_f0 = local_108;
    uStack_d0 = uVar45;
    FUN_14159dc6c();
    lVar48 = local_528;
    FUN_1472a7da4(local_528,&local_1a8,pwVar41,&local_118);
  }
  else {
    uVar24 = CONCAT44(uStack_10c,uStack_110);
    FUN_14159dc6c();
    lVar23 = local_528;
    FUN_140069376(local_528);
    puVar33 = local_508;
    puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar38 + 0x42;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
      FUN_140023dd8(local_508,0x218);
      puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar38 + 0x42;
    }
    *puVar33 = (ulonglong)puVar37;
    local_118 = local_4e0;
    uStack_110 = (uint)DAT_14ca33da8;
    uStack_10c = (undefined4)((ulonglong)DAT_14ca33da8 >> 0x20);
    if (DAT_14ca33da8 != 0) {
      LOCK();
      *(int *)(DAT_14ca33da8 + 8) = *(int *)(DAT_14ca33da8 + 8) + 1;
      UNLOCK();
    }
    local_108 = 0x4ca33d60;
    uStack_104 = 1;
    local_598 = (wchar_t *)CONCAT71(local_598._1_7_,2);
    FUN_140068f1a(puVar38,&local_1a8,&local_118,1);
    lVar48 = local_528;
    *puVar38 = &PTR_FUN_14a2c4bb0;
    puVar38[0x37] = local_4e0;
    puVar38[0x38] = pwVar41;
    puVar38[0x39] = uVar24;
    puVar38[0x3a] = pwVar19;
    puVar38[0x3b] = local_500;
    puVar38[0x3c] = local_4f0;
    puVar38[0x3d] = local_490;
    puVar38[0x3e] = uVar31;
    puVar38[0x3f] = uVar30;
    puVar38[0x40] = uVar22;
    *(undefined1 *)(puVar38 + 0x41) = 2;
    iVar35 = *(int *)(local_528 + 0x170);
    *(uint *)(local_528 + 0x170) = iVar35 + 1U;
    if (*(uint *)(local_528 + 0x174) < iVar35 + 1U) {
      FUN_14470e57a(local_528 + 0x168,iVar35);
    }
    *(undefined8 **)(*(longlong *)(lVar48 + 0x168) + (longlong)iVar35 * 8) = puVar38;
    *(int *)((longlong)puVar38 + 0x2c) = *(int *)(lVar48 + 0x170) + -1;
    FUN_140069100(lVar48,puVar38);
    lVar23 = local_518;
  }
  pwVar19 = local_4f8;
  puVar33 = local_508;
  puVar38 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar37 = puVar38 + 0x44;
  if (*(undefined8 **)(lVar48 + 0x78) < puVar37) {
    FUN_140023dd8(local_508,0x230);
    puVar38 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    puVar37 = puVar38 + 0x44;
  }
  puVar9 = local_530;
  *puVar33 = (ulonglong)puVar37;
  *puVar38 = &PTR_FUN_14a2c4bc8;
  local_4e0 = (wchar_t *)(puVar38 + 2);
  puVar38[2] = 0;
  *(undefined1 *)(puVar38 + 3) = 1;
  puVar38[4] = 0;
  puVar38[5] = 0x3f80000000000000;
  puVar38[6] = 0;
  *(undefined1 *)(puVar38 + 7) = 1;
  puVar38[8] = 0;
  *(undefined1 *)(puVar38 + 9) = 1;
  puVar38[0xf] = 0;
  puVar38[0x10] = 0;
  *(undefined4 *)(puVar38 + 0x11) = 4;
  puVar38[0x20] = 0;
  puVar38[0x22] = 0;
  lVar48 = 0x120;
  do {
    *(undefined8 *)((longlong)puVar38 + lVar48) = 0;
    ((undefined8 *)((longlong)puVar38 + lVar48))[1] = 0;
    *(undefined4 *)((longlong)puVar38 + lVar48 + 0x10) = 0xffff0000;
    lVar48 = lVar48 + 0x18;
  } while (lVar48 != 0x1e0);
  *(undefined4 *)((longlong)puVar38 + 500) = 0;
  puVar38[0x3c] = 0;
  puVar38[0x3d] = 0;
  *(undefined2 *)(puVar38 + 0x3e) = 0;
  *(undefined4 *)(puVar38 + 0x3f) = 0xffffffff;
  *(undefined4 *)((longlong)puVar38 + 0x1fc) = 0xffffffff;
  *(undefined4 *)(puVar38 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)puVar38 + 0x204) = 0xffffffff;
  *(undefined4 *)(puVar38 + 0x41) = 0;
  *(undefined2 *)((longlong)puVar38 + 0x20c) = 0;
  puVar38[0x42] = 0;
  iVar35 = *(int *)(local_528 + 0xa0);
  *(uint *)(local_528 + 0xa0) = iVar35 + 1U;
  if (*(uint *)(local_528 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(pwVar19,iVar35);
  }
  *(undefined8 **)(*(longlong *)pwVar19 + (longlong)iVar35 * 8) = puVar38;
  *(undefined4 *)(puVar38 + 8) = local_328;
  *(undefined4 *)((longlong)puVar38 + 0x44) = uStack_324;
  *(undefined4 *)(puVar38 + 9) = uStack_320;
  *(undefined4 *)((longlong)puVar38 + 0x4c) = uStack_31c;
  *(undefined4 *)(puVar38 + 6) = local_338;
  *(undefined4 *)((longlong)puVar38 + 0x34) = uStack_334;
  *(undefined4 *)(puVar38 + 7) = uStack_330;
  *(undefined4 *)((longlong)puVar38 + 0x3c) = uStack_32c;
  *(undefined4 *)(puVar38 + 4) = local_348;
  *(undefined4 *)((longlong)puVar38 + 0x24) = uStack_344;
  *(undefined4 *)(puVar38 + 5) = uStack_340;
  *(undefined4 *)((longlong)puVar38 + 0x2c) = uStack_33c;
  if (local_51c != 2) {
    puVar38[10] = local_310;
    puVar38[0xb] = uStack_308;
    *(uint *)(puVar38 + 0xc) = (uint)bStack_284;
    *(undefined4 *)((longlong)puVar38 + 100) = 2;
    *(float *)(puVar38 + 0xd) = 1.0 / (float)(int)local_318;
    *(float *)((longlong)puVar38 + 0x6c) = 1.0 / (float)local_318._4_4_;
    puVar38[0xf] = local_280[2];
    puVar38[0x10] = uStack_238;
    *(undefined4 *)(puVar38 + 0x11) = 4;
  }
  lVar48 = local_4a0;
  if ((char)local_484 != '\0') {
    lVar48 = local_440;
    param_5 = 1;
  }
  puVar38[0x24] = lVar48;
  puVar38[0x25] = 0;
  *(undefined1 *)(puVar38 + 0x26) = param_5;
  *(undefined1 *)((longlong)puVar38 + 0x131) = 0;
  *(undefined2 *)((longlong)puVar38 + 0x132) = 0xffff;
  puVar37 = local_428;
  puVar36 = puVar38 + 0x12;
  for (lVar48 = 0xe; lVar48 != 0; lVar48 = lVar48 + -1) {
    *puVar36 = *puVar37;
    puVar37 = puVar37 + 1;
    puVar36 = puVar36 + 1;
  }
  puVar38[0x20] = puVar9;
  puVar38[0x22] = local_470;
  uVar22 = *(undefined8 *)(lVar23 + 0x118d0);
  puVar37 = &DAT_14c9c0ee8;
  if ((char)local_484 == '\0') {
    puVar37 = &DAT_14c9c0d50;
  }
  lVar48 = FUN_144a2c9be();
  cVar10 = '\x02';
  if (*(char *)(lVar48 + 0x41) != '\x03') {
    cVar10 = *(char *)(lVar48 + 0x41);
  }
  puVar38[2] = uVar22;
  *(char *)(puVar38 + 3) = cVar10;
  uVar22 = *(undefined8 *)(lVar23 + 0x13818);
  FUN_14159dd70();
  FUN_1448e935e(uVar22,&local_118,&DAT_14ca30428,0);
  FUN_14159dd70();
  pwVar19 = local_118;
  lVar23 = local_518;
  local_530 = (ulonglong *)CONCAT44(uStack_10c,uStack_110);
  uVar22 = *(undefined8 *)(local_518 + 0x13818);
  uVar24 = FUN_1415d24e0();
  FUN_1448e935e(uVar22,&local_118,uVar24,0);
  FUN_1415d24e0();
  pwVar41 = local_118;
  uVar22 = local_2f0;
  uVar30 = local_2f8;
  uVar31 = local_300;
  local_4f8 = (wchar_t *)*puVar37;
  if (local_51c == 2) {
    uVar24 = *(undefined8 *)(lVar23 + 0x13818);
    uVar25 = FUN_146082958();
    FUN_1448e935e(uVar24,&local_118,uVar25,0);
    FUN_146082958();
    pwVar18 = local_118;
    uVar45 = CONCAT44(uStack_10c,uStack_110);
    uVar15 = *(undefined4 *)(lVar23 + 0x3090);
    local_508 = (ulonglong *)CONCAT44(local_508._4_4_,*(undefined4 *)(lVar23 + 0x1dd4));
    local_500 = (uint *)CONCAT44(local_500._4_4_,*(undefined4 *)(lVar23 + 0x3094));
    local_518 = CONCAT71(local_518._1_7_,(&DAT_00001de6)[lVar23]);
    FUN_14159de92();
    pwVar41 = local_4e0;
    local_118 = (wchar_t *)0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    FUN_1448f70da(pwVar19,&DAT_14ca33de8,local_4e0,&local_118);
    local_118 = (wchar_t *)CONCAT44((int)local_508,uVar15);
    uStack_110 = local_500._0_4_;
    uStack_10c = CONCAT31(uStack_10c._1_3_,(undefined1)local_518);
    local_108 = (uint)uVar31;
    uStack_104 = (undefined4)(uVar31 >> 0x20);
    local_100 = (undefined4)uVar30;
    uStack_fc = (uint)(uVar30 >> 0x20);
    local_f8 = (undefined4)uVar22;
    uStack_f4 = (uint)((ulonglong)uVar22 >> 0x20);
    uStack_ec = (undefined2)(uVar31 >> 0x20);
    uStack_ea = (undefined2)(uVar31 >> 0x30);
    uStack_e8 = (undefined2)uVar30;
    uStack_e6 = (undefined1)(uVar30 >> 0x10);
    uStack_e5 = (undefined2)(uVar30 >> 0x18);
    uStack_e3 = (undefined1)(uVar30 >> 0x28);
    uStack_e2 = (undefined2)(uVar30 >> 0x30);
    local_e0 = uVar22;
    local_d8 = pwVar18;
    local_c8 = pwVar19;
    local_c0 = (undefined1 *)local_530;
    local_b8 = local_4f8;
    local_b0 = local_4f0;
    local_a8 = DAT_14ca94df8;
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_98 = pwVar19;
    local_90 = (undefined1 *)local_530;
    local_88 = pwVar41;
    local_80 = 0;
    local_f0 = local_108;
    uStack_d0 = uVar45;
    FUN_14159de92();
    uVar31 = FUN_1472a8084(local_528,&local_1a8,pwVar41,&local_118);
  }
  else {
    uVar24 = CONCAT44(uStack_10c,uStack_110);
    FUN_14159de92();
    lVar23 = local_528;
    FUN_140069376(local_528);
    puVar33 = local_508;
    puVar38 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar37 = puVar38 + 0x42;
    if (*(undefined8 **)(lVar23 + 0x78) < puVar37) {
      FUN_140023dd8(local_508,0x218);
      puVar38 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar37 = puVar38 + 0x42;
    }
    *puVar33 = (ulonglong)puVar37;
    local_118 = local_4e0;
    uStack_110 = (uint)DAT_14ca33e30;
    uStack_10c = (undefined4)((ulonglong)DAT_14ca33e30 >> 0x20);
    if (DAT_14ca33e30 != 0) {
      LOCK();
      *(int *)(DAT_14ca33e30 + 8) = *(int *)(DAT_14ca33e30 + 8) + 1;
      UNLOCK();
    }
    local_108 = 0x4ca33de8;
    uStack_104 = 1;
    local_598 = (wchar_t *)CONCAT71(local_598._1_7_,2);
    FUN_140068f1a(puVar38,&local_1a8,&local_118,1);
    lVar23 = local_528;
    *puVar38 = &PTR_FUN_14a2c4bf0;
    puVar38[0x37] = local_4e0;
    puVar38[0x38] = pwVar41;
    puVar38[0x39] = uVar24;
    puVar38[0x3a] = pwVar19;
    puVar38[0x3b] = local_530;
    puVar38[0x3c] = local_4f0;
    puVar38[0x3d] = local_4f8;
    puVar38[0x3e] = uVar31;
    puVar38[0x3f] = uVar30;
    puVar38[0x40] = uVar22;
    *(undefined1 *)(puVar38 + 0x41) = 2;
    iVar35 = *(int *)(local_528 + 0x170);
    *(uint *)(local_528 + 0x170) = iVar35 + 1U;
    if (*(uint *)(local_528 + 0x174) < iVar35 + 1U) {
      FUN_14470e57a(local_528 + 0x168,iVar35);
    }
    plVar26 = local_438;
    bVar49 = local_438 == (longlong *)0x0;
    *(undefined8 **)(*(longlong *)(lVar23 + 0x168) + (longlong)iVar35 * 8) = puVar38;
    *(int *)((longlong)puVar38 + 0x2c) = *(int *)(lVar23 + 0x170) + -1;
    FUN_140069100(lVar23,puVar38);
    bVar11 = (byte)local_4c8 | bVar49;
    uVar31 = (ulonglong)bVar11;
    if (bVar11 == 0) {
      plVar21 = (longlong *)*plVar26;
      if (plVar21 != (longlong *)0x0) {
        *plVar26 = 0;
        (**(code **)(*plVar21 + 0x38))();
      }
      bVar11 = *(byte *)(local_4d8 + 0x24);
      *(byte *)(local_4d8 + 0x24) = bVar11 | 2;
      *(undefined1 *)(local_4d8 + 0x26) = 1;
      iVar35 = *(int *)(lVar23 + 0x1c0);
      *(uint *)(lVar23 + 0x1c0) = iVar35 + 1U;
      if (*(uint *)(lVar23 + 0x1c4) < iVar35 + 1U) {
        FUN_14017e38e((ulonglong *)(lVar23 + 0x1b8),iVar35);
      }
      uVar31 = *(ulonglong *)(lVar23 + 0x1b8);
      *(ulonglong *)(uVar31 + (longlong)iVar35 * 0x10) = local_4d8;
      *(longlong **)(uVar31 + 8 + (longlong)iVar35 * 0x10) = plVar26;
      if ((bVar11 & 2) == 0) {
        pbVar3 = (byte *)(lVar23 + 0x4a8);
        LOCK();
        bVar49 = *(char *)(lVar23 + 0x4a8) == '\0';
        if (bVar49) {
          *(char *)(lVar23 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar49) {
          FUN_1447d2058(pbVar3);
        }
        iVar35 = *(int *)(lVar23 + 0x4b8);
        *(uint *)(lVar23 + 0x4b8) = iVar35 + 1U;
        if (*(uint *)(lVar23 + 0x4bc) < iVar35 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar23 + 0x4b0),iVar35);
        }
        lVar23 = *(longlong *)(lVar23 + 0x4b0);
        *(undefined8 *)(lVar23 + (longlong)iVar35 * 0x10) = 2;
        *(ulonglong *)(lVar23 + 8 + (longlong)iVar35 * 0x10) = local_4d8;
        uVar31 = 1;
        LOCK();
        bVar11 = *pbVar3;
        if (bVar11 == 1) {
          *pbVar3 = 0;
        }
        else {
          uVar31 = (ulonglong)bVar11;
        }
        UNLOCK();
        if (bVar11 != 1) {
          uVar31 = FUN_14008cdb0(pbVar3);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return uVar31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f0b2c0 FUN_142f0b2c0 body=2259 status=ok
// SIG undefined FUN_142f0b2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0b2c0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 uVar15;
  float fVar16;
  undefined1 auStack_268 [32];
  wchar_t *local_248;
  wchar_t *local_240;
  undefined4 *local_238;
  undefined4 local_230;
  code *local_228;
  code *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e1;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined1 local_d0;
  wchar_t *local_c0;
  undefined4 local_b8;
  wchar_t *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 *puStack_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar14 = *param_4;
  local_1a0 = param_1;
  if (lVar14 != 0) {
    local_1d8 = param_4[1];
    local_1e0 = param_4[2];
    if (local_1e0 != local_1d8) {
      uVar15 = (undefined1)param_4[3];
      goto LAB_142f0b3ab;
    }
  }
  local_180 = param_4[4];
  local_178 = param_4[5];
  local_170 = param_4[6];
  local_248 = L"VisualizeSubsurface";
  FUN_143017cc0(&local_168,param_2,&local_180,(&DAT_00001de6)[param_3] * '\x02');
  local_1d8 = uStack_160;
  local_1e0 = local_158;
  lVar14 = (longlong)local_168;
  uVar15 = (undefined1)uStack_150;
LAB_142f0b3ab:
  local_190 = (undefined4)param_4[5];
  uStack_18c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_188 = (undefined4)param_4[6];
  uStack_184 = *(undefined4 *)((longlong)param_4 + 0x34);
  local_198 = *(undefined8 *)(param_4[4] + 0x84);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar11 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x1f0);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar11 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  *puVar11 = &PTR_FUN_14a2c4c08;
  local_1a8 = puVar11 + 2;
  FUN_1472a8364();
  iVar12 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar12 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar12 * 8) = puVar11;
  FUN_140277056(&local_168,param_3,param_4[7]);
  *(undefined4 *)(puVar11 + 8) = (undefined4)local_148;
  *(undefined4 *)((longlong)puVar11 + 0x44) = local_148._4_4_;
  *(undefined4 *)(puVar11 + 9) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)puVar11 + 0x4c) = uStack_140._4_4_;
  *(undefined4 *)(puVar11 + 6) = (undefined4)local_158;
  *(undefined4 *)((longlong)puVar11 + 0x34) = local_158._4_4_;
  *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_150;
  *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_150._4_4_;
  *(undefined4 *)(puVar11 + 4) = (undefined4)local_168;
  *(undefined4 *)((longlong)puVar11 + 0x24) = local_168._4_4_;
  *(int *)(puVar11 + 5) = (int)uStack_160;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_160._4_4_;
  puVar11[0x1c] = lVar14;
  puVar11[0x1d] = 0;
  *(undefined1 *)(puVar11 + 0x1e) = uVar15;
  *(undefined1 *)((longlong)puVar11 + 0xf1) = 0;
  *(undefined2 *)((longlong)puVar11 + 0xf2) = 0xffff;
  puVar11[0x18] = param_4[4];
  FUN_144a2c7c2(&local_168,&local_198);
  puVar8 = &local_168;
  puVar13 = puVar11 + 10;
  for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar11[0x1b] = DAT_14c9c0d80;
  lVar10 = DAT_14ca63c28;
  if (DAT_14ca63c28 == 0) {
    lVar10 = DAT_14ca63b20;
  }
  puVar11[0x1a] = *(undefined8 *)(lVar10 + 8);
  uVar1 = *(undefined8 *)(param_3 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar6 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar6 = *(char *)(lVar10 + 0x41);
  }
  puVar11[2] = uVar1;
  *(char *)(puVar11 + 3) = cVar6;
  uVar1 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145c5ede0();
  FUN_1448e935e(uVar1,&local_168,&DAT_14ca2f928,0);
  FUN_145c5ede0();
  lVar10 = (longlong)local_168;
  local_1b0 = uStack_160;
  local_1b8 = *(undefined8 *)(lVar14 + 0x84);
  iVar12 = *(int *)(param_3 + 0x3090);
  local_1cc = *(undefined4 *)(param_3 + 0x1dd4);
  local_1d0 = *(undefined4 *)(param_3 + 0x3094);
  local_1e1 = (&DAT_00001de6)[param_3];
  uVar1 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar12 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_200 = &LAB_14712ac08;
    local_208 = &LAB_14712ac0c;
    local_210 = &LAB_1472e3912;
    local_218 = &LAB_1472e3916;
    local_220 = FUN_1472e391a;
    local_228 = FUN_1472e3942;
    local_240 = L"ScreenPassVS";
    local_248 = L"/Engine/Private/ScreenPass.usf";
    local_1f0 = 0;
    local_1f8 = 0xe0;
    local_230 = 1;
    local_238 = (undefined4 *)((ulonglong)local_238 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_1c8 = param_2;
  local_1c0 = lVar14;
  FUN_1448e935e(uVar1,&local_168,&DAT_14ca4b6d8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_200 = &LAB_14712ac08;
    local_208 = &LAB_14712ac0c;
    local_210 = &LAB_1472e3912;
    local_218 = &LAB_1472e3916;
    local_220 = FUN_1472e391a;
    local_228 = FUN_1472e3942;
    local_240 = L"ScreenPassVS";
    local_248 = L"/Engine/Private/ScreenPass.usf";
    local_1f0 = 0;
    local_1f8 = 0xe0;
    local_230 = 1;
    local_238 = (undefined4 *)((ulonglong)local_238 & 0xffffffff00000000);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  lVar5 = uStack_160;
  lVar4 = (longlong)local_168;
  uVar2 = DAT_14c9c0d98;
  uVar1 = DAT_14c9c0d50;
  FUN_145c5f04e();
  puVar8 = local_1a8;
  local_168 = (wchar_t *)0x0;
  uStack_160 = 0;
  FUN_1448f70da(lVar10,&DAT_14ca33810,local_1a8,&local_168);
  lVar3 = local_1d8;
  lVar14 = local_1e0;
  local_168 = (wchar_t *)CONCAT44(local_1cc,iVar12);
  uStack_160 = CONCAT17(local_a0._2_1_,CONCAT25((undefined2)local_a0,CONCAT14(local_1e1,local_1d0)))
  ;
  local_158 = local_1b8;
  uStack_150 = local_1d8;
  local_148 = local_1e0;
  uStack_140 = local_198;
  local_138 = local_190;
  uStack_134 = uStack_18c;
  uStack_130 = uStack_188;
  uStack_12c = uStack_184;
  local_128 = lVar4;
  lStack_120 = lVar5;
  local_118 = lVar10;
  local_110 = local_1b0;
  local_108 = uVar1;
  local_100 = uVar2;
  local_f8 = DAT_14ca94df8;
  local_f0 = 0;
  local_e8 = lVar10;
  local_e0 = local_1b0;
  local_d8 = puVar8;
  local_d0 = 0;
  FUN_145c5f04e();
  lVar10 = local_1c8;
  FUN_1472a841c(local_1c8,&local_b0,puVar8,&local_168);
  local_240 = (wchar_t *)
              CONCAT44(local_240._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 8) + 0xe8));
  local_248 = (wchar_t *)CONCAT44(local_248._4_4_,*(undefined4 *)(param_3 + 0x3090));
  lVar10 = FUN_147d8dc86(lVar10,local_1c0,0,*(longlong *)(param_3 + 8) + 0x88);
  *(longlong *)(lVar10 + 0x38) = lVar3;
  *(longlong *)(lVar10 + 0x40) = lVar14;
  FUN_140002266(&local_168,L"Visualize Screen Space Subsurface Scattering");
  lVar14 = local_1c8;
  local_a0 = &DAT_3f8000003f800000;
  puStack_98 = &DAT_3f8000003f800000;
  local_a8 = 0;
  local_b0 = local_168;
  if ((int)uStack_160 == 0) {
    local_b0 = L"";
  }
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  if (local_b0 != (wchar_t *)0x0) {
    sVar9 = wcslen(local_b0);
    local_a8 = (int)sVar9;
  }
  local_238 = &DAT_149e1e308;
  local_248 = (wchar_t *)uVar1;
  local_240 = (wchar_t *)&local_a0;
  FUN_147d8e230(lVar10,0,0);
  cVar6 = FUN_147cdc658(&DAT_14cb026a8,0,&local_168);
  if (cVar6 != '\0') {
    fVar16 = 56.0;
    iVar12 = 1;
    do {
      local_a0 = &DAT_3f8000003f800000;
      puStack_98 = &DAT_3f8000003f800000;
      local_c0 = L"";
      if ((int)uStack_160 != 0) {
        local_c0 = local_168;
      }
      uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
      uVar7 = 0;
      if (local_c0 != (wchar_t *)0x0) {
        sVar9 = wcslen(local_c0);
        uVar7 = (int)sVar9;
      }
      fVar16 = fVar16 + 14.0;
      local_238 = &DAT_149e1e308;
      local_248 = (wchar_t *)uVar1;
      local_240 = (wchar_t *)&local_a0;
      local_b8 = uVar7;
      FUN_147d8e230(lVar10,0,SUB84((double)fVar16,0),&local_c0);
      cVar6 = FUN_147cdc658(&DAT_14cb026a8,iVar12,&local_168);
      iVar12 = iVar12 + 1;
    } while (cVar6 != '\0');
  }
  if (local_168 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14376dc88(lVar10,lVar14,0);
  *local_1a0 = local_1c0;
  local_1a0[1] = local_1d8;
  local_1a0[2] = local_1e0;
  if ((local_90 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142f0bb94 FUN_142f0bb94 body=165 status=ok
// SIG undefined FUN_142f0bb94(void)

void FUN_142f0bb94(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined4)*param_3;
  uStack_44 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_40 = (undefined4)param_3[1];
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar3 = FUN_142f05e07();
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_3 + 1);
    if (uVar1 != 0) {
      lVar2 = *param_3;
      uVar4 = 0;
      do {
        if ((uVar3 >> (uVar4 & 0x1f) & 1) != 0) {
          local_58 = 1;
          FUN_142f06103(param_1,(longlong)(int)uVar4 * 0x13c10 + lVar2,param_2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
    *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f0bc46 FUN_142f0bc46 body=69 status=ok
// SIG undefined FUN_142f0bc46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0bc46(void)

{
  _DAT_14ca30610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0bc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca30618,1);
  return;
}



// FUNCTION 142f0bc8b FUN_142f0bc8b body=69 status=ok
// SIG undefined FUN_142f0bc8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0bc8b(void)

{
  _DAT_14ca30628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0bccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca30630,1);
  return;
}



// FUNCTION 142f0bcd0 FUN_142f0bcd0 body=69 status=ok
// SIG undefined FUN_142f0bcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0bcd0(void)

{
  _DAT_14ca30640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0bd12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca30648,1);
  return;
}



// FUNCTION 142f0bd15 FUN_142f0bd15 body=69 status=ok
// SIG undefined FUN_142f0bd15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0bd15(void)

{
  _DAT_14ca30658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0bd57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca30660,1);
  return;
}



// FUNCTION 142f0bd5a FUN_142f0bd5a body=69 status=ok
// SIG undefined FUN_142f0bd5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0bd5a(void)

{
  _DAT_14ca30670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0bd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca30678,1);
  return;
}



// FUNCTION 142f0bd9f FUN_142f0bd9f body=69 status=ok
// SIG undefined FUN_142f0bd9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0bd9f(void)

{
  _DAT_14ca30688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0bde1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca30690,1);
  return;
}



// FUNCTION 142f0bde4 FUN_142f0bde4 body=69 status=ok
// SIG undefined FUN_142f0bde4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0bde4(void)

{
  _DAT_14ca306a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0be26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca306a8,1);
  return;
}



// FUNCTION 142f0be69 FUN_142f0be69 body=14553 status=ok
// SIG undefined FUN_142f0be69(void)

void FUN_142f0be69(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong *param_4)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 *puVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  byte bVar23;
  int iVar24;
  longlong lVar25;
  undefined *puVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 uVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  undefined1 **ppuVar33;
  float *pfVar34;
  undefined8 *puVar35;
  uint uVar36;
  int iVar37;
  ulonglong *puVar38;
  longlong lVar39;
  undefined8 *puVar40;
  byte bVar41;
  undefined8 *puVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_658 [32];
  undefined1 **local_638;
  undefined8 **local_630;
  undefined1 local_628;
  char local_611;
  longlong local_610;
  ulonglong *local_608;
  char local_5f9;
  ulonglong local_5f8;
  ulonglong local_5f0;
  longlong *local_5e8;
  undefined1 *local_5e0;
  float local_5d8;
  float local_5d4;
  ulonglong local_5d0;
  float local_5c4;
  undefined4 local_5c0;
  float local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  ulonglong local_5b0;
  undefined8 *local_5a8;
  float local_59c;
  float local_598;
  float local_594;
  float local_590;
  uint local_58c;
  uint local_588;
  float local_584;
  undefined8 *local_580;
  undefined1 local_578 [16];
  longlong local_560;
  longlong local_558;
  undefined8 local_550;
  ulonglong local_548;
  uint local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  float local_518;
  undefined4 local_514;
  longlong local_510;
  longlong local_508;
  undefined8 local_500;
  ulonglong local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  ulonglong local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  ulonglong local_4b8;
  uint local_4ac;
  float local_4a8;
  float local_4a4;
  undefined8 local_4a0;
  undefined8 *local_498;
  ulonglong local_490;
  undefined8 local_488;
  undefined8 local_480;
  ulonglong local_478;
  undefined8 local_470;
  ulonglong local_468;
  ulonglong local_460;
  ulonglong local_458;
  undefined8 *local_450;
  ulonglong local_448;
  ulonglong *local_440;
  undefined1 local_438 [16];
  undefined1 local_425;
  int local_424;
  int local_420;
  undefined4 local_41c;
  undefined8 local_418 [14];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 *local_388;
  undefined4 local_380;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2cc;
  undefined3 uStack_2c8;
  undefined4 local_2c4;
  undefined3 uStack_2c0;
  undefined2 local_2bb;
  undefined1 local_2b9;
  undefined8 *local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  int local_294;
  int local_290;
  undefined4 local_28c;
  undefined2 local_288;
  undefined1 local_286;
  undefined2 local_285;
  undefined1 local_283;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 *local_218;
  undefined4 local_210;
  uint uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_190;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  undefined2 local_158;
  undefined1 local_156;
  undefined1 local_155 [101];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_658;
  local_608 = *(ulonglong **)(param_3 + 8);
  local_5d0 = param_4[0x13];
  bVar23 = *(byte *)((longlong)local_608 + 0x49) >> 4 & local_5d0 != 0;
  local_580 = (undefined8 *)CONCAT71(local_580._1_7_,bVar23);
  local_440 = param_1;
  if (bVar23 == 0) {
    FUN_1414998c8(&local_188,param_3);
    fVar44 = (fStack_180 + fStack_17c) * 0.5;
    fVar50 = 0.0001;
    if (0.0001 <= fVar44) {
      fVar50 = fVar44;
    }
    local_188._0_4_ = (0.18 / fVar50) * fStack_178;
    local_188._4_4_ = 0;
    fStack_180 = 0.0;
    local_628 = 0;
    local_630 = (undefined8 **)&DAT_00000010;
    local_638 = (undefined1 **)&local_188;
    fStack_17c = (float)local_188;
    local_5d0 = FUN_144942e63(param_2,L"DefaultEyeAdaptationBuffer",0x10,1);
  }
  uVar10 = DAT_14ca4aec0;
  local_2f8 = (undefined4)param_4[5];
  uStack_2f4 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_2f0 = (undefined4)param_4[6];
  uStack_2ec = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar6 = *(undefined8 *)(*(longlong *)(param_4[4] + 0x38) + 0x84);
  uVar31 = *param_4;
  local_610 = param_3;
  local_300 = uVar6;
  if (uVar31 == 0) {
LAB_142f0bff1:
    bVar23 = *(byte *)(param_3 + 0x13820);
    uVar28 = (uint)DAT_14ca4aec0;
    bVar41 = *(byte *)(*(longlong *)(param_4[4] + 0x38) + 0x93);
    bVar8 = (byte)DAT_14c760da4 & 0x1f;
    FUN_14019a1f8(&local_218,*(undefined8 *)(param_3 + 8));
    uVar14 = uStack_20c;
    plVar17 = DAT_14ca27dc8;
    if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
      iVar13 = FUN_140052f36(DAT_14ca27dc8);
      if (iVar13 == 0) {
        plVar17 = plVar17 + 0xb;
      }
      else {
        plVar17 = (longlong *)plVar17[10];
      }
      if ((char)*plVar17 == '\x01') goto LAB_142f0c073;
LAB_142f0c0a8:
      uVar4 = 0x12;
LAB_142f0c0ab:
      uVar30 = uVar4;
      bVar43 = false;
    }
    else {
      cVar12 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
      if (cVar12 == '\0') goto LAB_142f0c0a8;
LAB_142f0c073:
      bVar43 = true;
      uVar30 = 10;
      if (((0x37 < bVar41) || ((0x80000000202402U >> ((ulonglong)(uint)bVar41 & 0x3f) & 1) == 0)) &&
         (uVar4 = 10, 4 < bVar41 - 0x49)) goto LAB_142f0c0ab;
    }
    fVar44 = (float)local_188;
    local_188._0_4_ = (float)((uint)bVar23 << 0x11 | uVar28 | 9);
    fVar50 = (float)local_188;
    uVar28 = ~(-1 << bVar8);
    local_155[0] = 1;
    if (((uVar14 != 7) && (local_155[0] = 10, (uVar14 & 0xfffffffe) != 8 && !bVar43)) &&
       ((plVar17 = *(longlong **)(*(longlong *)(local_610 + 8) + 0x30), local_155[0] = uVar30,
        plVar17 != (longlong *)0x0 &&
        (local_188._0_4_ = fVar44, plVar17 = (longlong *)(**(code **)(*plVar17 + 0x10))(),
        *plVar17 != 0)))) {
      puVar18 = (undefined8 *)
                (**(code **)(**(longlong **)(*(longlong *)(local_610 + 8) + 0x30) + 0x10))();
      lVar19 = (**(code **)(*(longlong *)*puVar18 + 8))();
      local_155[0] = *(undefined1 *)(lVar19 + 0x33);
    }
    uVar22 = param_4[5];
    local_4b8 = param_4[6];
    local_156 = 0;
    local_188._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    local_164 = DAT_14ca84e40;
    if ((int)uVar6 < DAT_14ca84e40) {
      local_164 = (int)uVar6;
    }
    if (local_164 < 2) {
      local_164 = 1;
    }
    iVar13 = (int)((ulonglong)uVar6 >> 0x20);
    local_160 = DAT_14ca84e40;
    if (iVar13 < DAT_14ca84e40) {
      local_160 = iVar13;
    }
    local_155._1_2_ = 0xff00;
    local_15c = 0x10001;
    local_158 = 0x101;
    fStack_180 = 1.4013e-45;
    local_168 = 0;
    fStack_17c = 0.0;
    fStack_178 = 0.0;
    uStack_174 = 0;
    uStack_170 = 0;
    if (local_160 < 2) {
      local_160 = 1;
    }
    uVar31 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar21 = uVar31 + 0x120;
    local_188._0_4_ = fVar50;
    uStack_16c = uVar28;
    if (*(ulonglong *)(param_2 + 0x78) < uVar21) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
      uVar31 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar21 = uVar31 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar21;
    FUN_1456bbb8c(uVar31,L"Tonemap",&local_188,0);
    iVar13 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar13 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar13);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar13 * 8) = uVar31;
    *(int *)(uVar31 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    bVar23 = 0;
  }
  else {
    uVar22 = param_4[1];
    local_4b8 = param_4[2];
    if (local_4b8 == uVar22) goto LAB_142f0bff1;
    bVar23 = (byte)param_4[3];
  }
  lVar19 = local_610;
  bVar41 = *(byte *)(uVar31 + 0x93);
  local_5f9 = true;
  if ((char)param_4[0x14] == '\0') {
    local_5f9 = bVar41 == 0x55 || *(int *)(local_610 + 0x1dd0) != 0;
  }
  if (bVar41 < 0x5d) {
    bVar41 = (&DAT_14a38d8c0)[bVar41];
  }
  else {
    bVar41 = 0;
  }
  uVar28 = (uint)bVar23;
  local_4ac = 2;
  if ((bool)local_5f9 != false) {
    local_4ac = uVar28;
  }
  if ((bVar41 & 8) == 0) {
    local_4ac = uVar28;
  }
  if (bVar23 == 1) {
    local_4ac = uVar28;
  }
  local_318 = *(undefined8 *)(uVar31 + 0x84);
  local_308 = local_4b8;
  fVar50 = *(float *)(local_610 + 0x2810);
  fVar44 = 1.0;
  if (fVar50 < 0.9999) {
    fVar44 = 1.0 / (1.0 - fVar50);
    fVar45 = *(float *)(local_610 + 0x280c) * 0.01;
  }
  else {
    fVar45 = 0.0;
  }
  local_5e0 = (undefined1 *)CONCAT44(local_5e0._4_4_,fVar45);
  local_578 = ZEXT416(*(uint *)(DAT_14ca30620 + 4));
  uVar28 = *(uint *)(local_610 + 0x2abc);
  local_550 = DAT_14c9c0de0;
  local_548 = uVar31;
  local_310 = uVar22;
  FUN_1448c58dc(local_610,&local_188);
  local_4f0 = CONCAT44(local_188._4_4_,(float)local_188);
  local_4e8 = CONCAT71(local_4e8._1_7_,fStack_180._0_1_);
  local_2c4._0_3_ = (undefined3)((uint)fStack_180 >> 8);
  local_2c4._3_1_ = SUB41(fStack_17c,0);
  uStack_2c0 = (undefined3)((uint)fStack_17c >> 8);
  local_4e0 = CONCAT44(uStack_174,fStack_178);
  local_4d8 = CONCAT71(local_4d8._1_7_,(undefined1)uStack_170);
  local_2cc._0_3_ = (undefined3)((uint)uStack_170 >> 8);
  local_2cc._3_1_ = (undefined1)uStack_16c;
  uStack_2c8 = (undefined3)(uStack_16c >> 8);
  lVar25 = *(longlong *)(lVar19 + 0x3108);
  local_448 = uVar22;
  if (lVar25 == 0) {
    lVar20 = *(longlong *)(lVar19 + 0x13838);
    fVar46 = 0.0;
    fVar45 = 0.0;
    if (lVar20 == 0) goto LAB_142f0c658;
LAB_142f0c492:
    uVar31 = *(ulonglong *)(lVar20 + 0x10);
    uVar22 = 0;
    if ((uVar31 != 0) && (*(char *)(uVar31 + 0x52) == '\0')) {
      uVar22 = uVar31;
    }
    uVar14 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    uVar15 = uVar14 & 0x7fffffff ^ uVar14 >> 0x10;
    uVar14 = *(uint *)(param_2 + 0x248);
    uVar36 = uVar15 & uVar14;
    lVar20 = param_2 + 0x230;
    if (*(longlong *)(param_2 + 0x238) != 0) {
      lVar20 = *(longlong *)(param_2 + 0x238);
    }
    lVar39 = param_2 + 0x218;
    if (*(longlong *)(param_2 + 0x220) != 0) {
      lVar39 = *(longlong *)(param_2 + 0x220);
    }
    do {
      if (*(uint *)(lVar20 + (longlong)(int)uVar36 * 4) == uVar15) {
        iVar13 = *(int *)(lVar39 + (longlong)(int)uVar36 * 4);
        lVar29 = (longlong)iVar13 * 0x10;
        if (*(ulonglong *)(*(longlong *)(param_2 + 0x1d8) + lVar29) == uVar22) {
          if (((iVar13 != -1) &&
              (puVar38 = (ulonglong *)(*(longlong *)(param_2 + 0x1d8) + lVar29 + 8),
              puVar38 != (ulonglong *)0x0)) && (local_5b0 = *puVar38, local_5b0 != 0))
          goto LAB_142f0c5ac;
          break;
        }
      }
      uVar36 = uVar36 + 1 & uVar14;
    } while (uVar36 != (*(int *)(param_2 + 0x24c) + uVar15 + 1 & uVar14));
    FUN_1447ec05f(&local_188,uVar22,L"FilmGrain.OriginalTexture");
    local_5b0 = FUN_14473c272(param_2,&local_188,0);
    if ((longlong *)CONCAT44(local_188._4_4_,(float)local_188) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(local_188._4_4_,(float)local_188) + 0x38))();
    }
    lVar25 = *(longlong *)(lVar19 + 0x3108);
LAB_142f0c5ac:
    if (((lVar25 == 0) || (*(ulonglong *)(lVar25 + 0x1d40) != uVar22)) ||
       (*(int *)(DAT_14ca30680 + 4) == 0)) {
      puVar18 = (undefined8 *)(local_5b0 + 0x84);
      uVar31 = local_5b0;
      local_5f8 = uVar22;
      local_5a8 = puVar18;
      if (1 < *(int *)(local_5b0 + 0x84)) {
        local_558 = param_2 + 0x178;
        local_5e8 = (longlong *)(param_2 + 0x70);
        local_5f0 = param_2 + 0x98;
        local_560 = param_2 + 0x198;
        uVar22 = local_5b0;
        do {
          plVar17 = local_5e8;
          uVar31 = uVar22;
          if (*(int *)(uVar22 + 0x88) < 2) break;
          uStack_170 = DAT_14ca85098;
          fStack_180 = DAT_14ca85088;
          fStack_17c = DAT_14ca8508c;
          fStack_178 = (float)DAT_14ca85090;
          uStack_174 = DAT_14ca85094;
          iVar13 = (int)*puVar18;
          iVar24 = iVar13 + 7;
          iVar27 = (int)((ulonglong)*puVar18 >> 0x20);
          iVar37 = iVar27 + 7;
          iVar27 = iVar27 + 0xe;
          if (-1 < iVar37) {
            iVar27 = iVar37;
          }
          iVar13 = iVar13 + 0xe;
          if (-1 < iVar24) {
            iVar13 = iVar24;
          }
          local_164 = iVar13 >> 3;
          if (DAT_14ca84e40 <= iVar13 >> 3) {
            local_164 = DAT_14ca84e40;
          }
          if (local_164 < 2) {
            local_164 = 1;
          }
          local_160 = iVar27 >> 3;
          if (DAT_14ca84e40 <= iVar27 >> 3) {
            local_160 = DAT_14ca84e40;
          }
          uStack_16c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_156 = 0;
          local_188._0_4_ = 1.83682e-40;
          local_188._4_4_ = 0;
          local_15c = 0x10001;
          local_158 = 0x101;
          local_168 = 0;
          local_155._0_3_ = 0xff0001;
          if (local_160 < 2) {
            local_160 = 1;
          }
          uVar31 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar21 = uVar31 + 0x120;
          if (*(ulonglong *)(param_2 + 0x78) < uVar21) {
            FUN_140023dd8(local_5e8,0x128);
            uVar31 = *plVar17 + 7U & 0xfffffffffffffff8;
            uVar21 = uVar31 + 0x120;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar21;
          FUN_1456bbb8c(uVar31,L"FilmGrain.Reduce",&local_188,0);
          iVar13 = *(int *)(param_2 + 0x180);
          *(uint *)(param_2 + 0x180) = iVar13 + 1U;
          if (*(uint *)(param_2 + 0x184) < iVar13 + 1U) {
            FUN_14472c0f6(local_558,iVar13);
          }
          plVar17 = local_5e8;
          *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar13 * 8) = uVar31;
          *(int *)(uVar31 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
          puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar42 = puVar40 + 6;
          if (*(undefined8 **)(param_2 + 0x78) < puVar42) {
            FUN_140023dd8(local_5e8,0x40);
            puVar40 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
            puVar42 = puVar40 + 6;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar42;
          *puVar40 = &PTR_FUN_14a2c4138;
          puVar40[3] = 0;
          puVar40[4] = 0;
          iVar13 = *(int *)(param_2 + 0xa0);
          *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
          if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
            FUN_1448cfae8(local_5f0,iVar13);
          }
          plVar17 = local_5e8;
          *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar40;
          puVar40[2] = *puVar18;
          puVar40[3] = uVar22;
          uVar4 = *(undefined1 *)(uVar31 + 0x94);
          puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar42 + 9;
          if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
            FUN_140023dd8(local_5e8,0x50);
            puVar42 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
            puVar18 = puVar42 + 9;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar18;
          puVar42[1] = *(undefined8 *)(uVar31 + 8);
          puVar42[2] = 0;
          *(undefined1 *)(puVar42 + 3) = 0;
          *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar42 + 5) = 0;
          *puVar42 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar42 + 6) = uVar4;
          *(undefined1 *)(puVar42 + 7) = 0;
          *(undefined4 *)((longlong)puVar42 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar42 + 0x35) = 0;
          puVar42[8] = uVar31;
          iVar13 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
            FUN_1447568fc(local_560,iVar13);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar42;
          *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
          puVar40[4] = puVar42;
          uVar6 = *(undefined8 *)(local_610 + 0x13818);
          FUN_145e5a866();
          FUN_1448e935e(uVar6,&local_188,&DAT_14ca30730,0);
          FUN_145e5a866();
          puVar18 = (undefined8 *)(uVar31 + 0x84);
          local_218 = *(undefined1 **)(uVar31 + 0x84);
          local_210 = 1;
          local_638 = &local_218;
          FUN_1472a2071(param_2,&local_388,&local_188,puVar40 + 2);
          uVar22 = uVar31;
        } while (1 < *(int *)(uVar31 + 0x84));
      }
      fStack_178 = 0.0;
      uStack_174 = 0;
      uVar14 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar14 = DAT_14ca84e48;
      }
      local_188._0_4_ = (float)(uVar14 + (uVar14 == 0));
      local_188._4_4_ = 1;
      fStack_180 = 9.22068e-41;
      plVar17 = (longlong *)(param_2 + 0x70);
      uVar21 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar22 = uVar21 + 0x150;
      if (*(ulonglong *)(param_2 + 0x78) < uVar22) {
        FUN_140023dd8(plVar17,0x160);
        uVar21 = *plVar17 + 0xfU & 0xfffffffffffffff0;
        uVar22 = uVar21 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar22;
      FUN_1456bd266(uVar21,L"FilmGrain.TextureConstants",&local_188,0);
      iVar13 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar13 + 1U) {
        FUN_144737178(param_2 + 0x188,iVar13);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar13 * 8) = uVar21;
      *(int *)(uVar21 + 0x7c) = *(int *)(param_2 + 400) + -1;
      puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar18 = puVar42 + 6;
      if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
        FUN_140023dd8(plVar17,0x40);
        puVar42 = (undefined8 *)(*plVar17 + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar42 + 6;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar18;
      *puVar42 = &PTR_FUN_14a2c4158;
      puVar42[3] = 0;
      puVar42[4] = 0;
      iVar13 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar13);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar42;
      puVar42[2] = *local_5a8;
      puVar42[3] = uVar31;
      cVar12 = *(char *)(uVar21 + 0x68);
      puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar40 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
        FUN_140023dd8(plVar17,0x48);
        puVar40 = (undefined8 *)(*plVar17 + 7U & 0xfffffffffffffff8);
        puVar18 = puVar40 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar18;
      puVar40[1] = *(undefined8 *)(uVar21 + 8);
      puVar40[2] = 0;
      *(undefined1 *)(puVar40 + 3) = 2;
      *(undefined8 *)((longlong)puVar40 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar40 + 5) = 0;
      *puVar40 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar40 + 6) = cVar12 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar40 + 0x31) = 0;
      puVar40[7] = uVar21;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(param_2 + 0x198,iVar13);
      }
      lVar25 = local_610;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar40;
      *(int *)((longlong)puVar40 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar42[4] = puVar40;
      uVar6 = *(undefined8 *)(local_610 + 0x13818);
      FUN_145e5add0();
      FUN_1448e935e(uVar6,&local_188,&DAT_14ca30858,0);
      FUN_145e5add0();
      local_638 = &local_388;
      local_388 = &DAT_100000001;
      local_380 = 1;
      FUN_1472a2123(param_2,local_418,&local_188,puVar42 + 2);
      uVar31 = local_5f8;
      lVar19 = *(longlong *)(lVar25 + 0x3108);
      if (lVar19 != 0) {
        lVar25 = *(longlong *)(lVar25 + 0x2ae8);
        if (DAT_14c950c29 == '\x01') {
          if (lVar25 == 0) {
            lVar25 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar25 = *(longlong *)(local_610 + 0x2ae8);
          }
        }
        *(longlong *)(lVar19 + 0x1d38) = lVar25;
        *(ulonglong *)(*(longlong *)(local_610 + 0x3108) + 0x1d40) = uVar31;
        puVar18 = *(undefined8 **)(*(longlong *)(local_610 + 0x3108) + 0x1d48);
        puVar42 = (undefined8 *)(*(longlong *)(local_610 + 0x3108) + 0x1d48);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar42 = 0;
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
        bVar23 = *(byte *)(uVar21 + 0x24);
        *(byte *)(uVar21 + 0x24) = bVar23 | 0x12;
        iVar13 = *(int *)(param_2 + 0x1d0);
        *(uint *)(param_2 + 0x1d0) = iVar13 + 1U;
        if (*(uint *)(param_2 + 0x1d4) < iVar13 + 1U) {
          FUN_14010a38e((longlong *)(param_2 + 0x1c8),iVar13);
        }
        lVar19 = *(longlong *)(param_2 + 0x1c8);
        *(ulonglong *)(lVar19 + (longlong)iVar13 * 0x10) = uVar21;
        *(undefined8 **)(lVar19 + 8 + (longlong)iVar13 * 0x10) = puVar42;
        if ((bVar23 & 2) == 0) {
          pcVar2 = (char *)(param_2 + 0x4a8);
          LOCK();
          bVar43 = *(char *)(param_2 + 0x4a8) == '\0';
          if (bVar43) {
            *(char *)(param_2 + 0x4a8) = '\x01';
          }
          UNLOCK();
          if (!bVar43) {
            FUN_1447d2058();
          }
          iVar13 = *(int *)(param_2 + 0x4b8);
          *(uint *)(param_2 + 0x4b8) = iVar13 + 1U;
          if (*(uint *)(param_2 + 0x4bc) < iVar13 + 1U) {
            FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar13);
          }
          lVar19 = *(longlong *)(param_2 + 0x4b0);
          *(undefined8 *)(lVar19 + (longlong)iVar13 * 0x10) = 1;
          *(ulonglong *)(lVar19 + 8 + (longlong)iVar13 * 0x10) = uVar21;
          LOCK();
          cVar12 = *pcVar2;
          if (cVar12 == '\x01') {
            *pcVar2 = '\0';
          }
          UNLOCK();
          if (cVar12 != '\x01') {
            FUN_14008cdb0(pcVar2);
          }
        }
      }
    }
    else {
      uVar21 = FUN_1449b86e8(param_2,lVar25 + 0x1d48,L"FilmGrain.TextureConstants",0);
    }
    if (*(longlong *)(local_610 + 0x3108) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(uint *)(*(longlong *)(local_610 + 0x3108) + 0x6e4);
    }
    local_5d4 = *(float *)(local_610 + 0x2ac8);
    uVar14 = uVar14 % *(uint *)(DAT_14ca30668 + 4);
    if ((int)uVar14 < 0) {
      fVar47 = 0.0;
      fVar48 = 0.0;
    }
    else {
      uVar14 = uVar14 + 1;
      fVar47 = 0.0;
      fVar48 = 0.5;
      uVar15 = uVar14;
      do {
        fVar47 = fVar47 + (float)(uVar15 & 1) * fVar48;
        fVar48 = fVar48 * 0.5;
        bVar43 = 1 < uVar15;
        uVar15 = uVar15 >> 1;
      } while (bVar43);
      fVar48 = 0.0;
      fVar49 = 0.33333334;
      do {
        fVar48 = fVar48 + (float)(uVar14 % 3) * fVar49;
        fVar49 = fVar49 * 0.33333334;
        bVar43 = 2 < uVar14;
        uVar14 = uVar14 / 3;
      } while (bVar43);
    }
    local_5bc = *(float *)(local_610 + 0x2acc) * local_5d4;
    local_5d8 = *(float *)(local_610 + 0x2ad0) * local_5d4;
    local_5d4 = local_5d4 * *(float *)(local_610 + 0x2ad4);
    local_5c0 = *(undefined4 *)(local_610 + 0x2ad8);
    local_5b8 = *(undefined4 *)(local_610 + 0x2adc);
    local_5b4 = *(undefined4 *)(local_610 + 0x2ae0);
    local_558 = DAT_14ca30ff8;
    local_584 = 1.0 / *(float *)(local_610 + 0x2ae4);
    fVar49 = ((((float)(local_308._4_4_ - local_310._4_4_) * 1920.0) /
              (float)((int)local_308 - (int)local_310)) /
             (float)*(uint *)(*(longlong *)(local_610 + 0x13838) + 0x6c)) * local_584;
    local_584 = local_584 * (1920.0 / (float)*(uint *)(*(longlong *)(local_610 + 0x13838) + 0x68));
    fVar51 = DAT_14ca4ca60 * fVar49;
    local_560 = CONCAT44(local_560._4_4_,fVar49 * DAT_14ca4ca58);
    fVar49 = DAT_14ca4ca5c * local_584;
    local_584 = local_584 * DAT_14ca4ca54;
    cVar12 = *(char *)(uVar21 + 0x68);
    puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar42 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
      puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar42 + 9;
    }
    fVar48 = fVar48 + fVar51;
    fVar47 = fVar47 + fVar49;
    *(undefined8 **)(param_2 + 0x70) = puVar18;
    puVar42[1] = *(undefined8 *)(uVar21 + 8);
    puVar42[2] = 0;
    *(undefined1 *)(puVar42 + 3) = 3;
    *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
    *puVar42 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar42 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar42 + 0x2c) = 0xffffffff00000000;
    puVar42[7] = 0;
    puVar42[8] = uVar21;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar13);
    }
    lVar19 = local_610;
LAB_142f0ca87:
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar42;
    *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  }
  else {
    uVar14 = *(uint *)(lVar25 + 0x6e4) & 7;
    if (uVar14 == 0) {
      lVar20 = *(longlong *)(lVar19 + 0x13838);
      fVar46 = 0.0;
      fVar45 = 0.0;
    }
    else {
      fVar45 = 0.0;
      fVar46 = 0.5;
      uVar15 = uVar14;
      do {
        fVar45 = fVar45 + (float)(uVar15 & 1) * fVar46;
        fVar46 = fVar46 * 0.5;
        bVar43 = 1 < uVar15;
        uVar15 = uVar15 >> 1;
      } while (bVar43);
      fVar46 = 0.0;
      fVar47 = 0.33333334;
      do {
        fVar46 = fVar46 + (float)(uVar14 % 3) * fVar47;
        fVar47 = fVar47 * 0.33333334;
        bVar43 = 2 < uVar14;
        uVar14 = uVar14 / 3;
      } while (bVar43);
      lVar20 = *(longlong *)(lVar19 + 0x13838);
    }
    if (lVar20 != 0) goto LAB_142f0c492;
    *(undefined8 *)(lVar25 + 0x1d38) = 0;
    *(undefined8 *)(lVar25 + 0x1d40) = 0;
    puVar18 = *(undefined8 **)(lVar25 + 0x1d48);
    if (puVar18 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar25 + 0x1d48) = 0;
      LOCK();
      piVar1 = (int *)(puVar18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar18)(puVar18,1);
      }
    }
LAB_142f0c658:
    local_5b0 = FUN_14476842e(param_2,&DAT_14ca63b20,L"WhiteDummy",2);
    fVar48 = DAT_14ca4ca60;
    fVar47 = DAT_14ca4ca5c;
    local_558 = DAT_14ca30ff8;
    local_584 = DAT_14ca4ca54;
    local_560 = CONCAT44(local_560._4_4_,DAT_14ca4ca58);
    if (2 < (int)(&DAT_14ca814b8)
                 [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar19 + 0x3090) * 2) *
                  0xf]) {
      local_188._0_4_ = 1.0;
      local_188._4_4_ = 0x3f800000;
      fStack_180 = 1.0;
      fStack_17c = 1.0;
      local_638 = (undefined1 **)CONCAT44(local_638._4_4_,1);
      local_630 = (undefined8 **)&local_188;
      lVar25 = FUN_1449cc94d(param_2,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
      cVar12 = *(char *)(lVar25 + 0x68);
      puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar42 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
        FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
        puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar42 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar18;
      puVar42[1] = *(undefined8 *)(lVar25 + 8);
      puVar42[2] = 0;
      *(undefined1 *)(puVar42 + 3) = 3;
      *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
      *puVar42 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar42 + 5) = cVar12 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar42 + 0x2c) = 0xffffffff00000000;
      puVar42[7] = 0;
      puVar42[8] = lVar25;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      local_5b4 = 0x3f800000;
      local_5b8 = 0x3f000000;
      local_5c0 = 0x3db851ec;
      local_5bc = 0.0;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(param_2 + 0x198,iVar13);
      }
      local_5d8 = 0.0;
      local_5d4 = 0.0;
      goto LAB_142f0ca87;
    }
    local_5b4 = 0x3f800000;
    local_5b8 = 0x3f000000;
    local_5c0 = 0x3db851ec;
    local_5bc = 0.0;
    puVar42 = (undefined8 *)0x0;
    local_5d8 = 0.0;
    local_5d4 = 0.0;
  }
  if (param_4[0x12] == 0) {
    fVar49 = 32.0;
  }
  else {
    fVar49 = (float)*(int *)(param_4[0x12] + 0x88);
  }
  local_5e8 = (longlong *)CONCAT44(local_5e8._4_4_,fVar49);
  if (param_4[0xd] == 0) {
    bVar43 = false;
  }
  else {
    bVar43 = *(int *)((longlong)param_4 + 0x74) != *(int *)((longlong)param_4 + 0x7c) ||
             (int)param_4[0xf] != (int)param_4[0xe];
  }
  bVar23 = param_4[0xb] != 0 | bVar43;
  local_5f0 = CONCAT71(local_5f0._1_7_,bVar23);
  if (bVar23 == 1) {
    puVar7 = (undefined4 *)param_4[0x10];
    local_220 = *(undefined8 *)(puVar7 + 8);
    local_240 = *puVar7;
    uStack_23c = puVar7[1];
    uStack_238 = puVar7[2];
    uStack_234 = puVar7[3];
    local_230 = *(undefined8 *)(puVar7 + 4);
    uStack_228 = *(undefined8 *)(puVar7 + 6);
  }
  local_450 = puVar42;
  FUN_14019a1f8(&local_188,local_608);
  fVar49 = fStack_17c;
  local_190 = fStack_180;
  uStack_198 = CONCAT44(local_188._4_4_,(float)local_188);
  uVar31 = (ulonglong)(uint)fStack_17c;
  local_470 = CONCAT44(uStack_174,fStack_178);
  FUN_144a2c7c2(&local_218,&local_300);
  ppuVar33 = &local_218;
  pfVar34 = &fStack_180;
  for (lVar25 = 0xe; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 **)pfVar34 = *ppuVar33;
    ppuVar33 = ppuVar33 + 1;
    pfVar34 = pfVar34 + 2;
  }
  FUN_144a2c7c2(&local_388,&local_318);
  uVar22 = local_5d0;
  local_468 = param_4[4];
  local_460 = param_4[0xb];
  local_458 = param_4[0xc];
  if (param_4[0xd] == 0) {
    local_4f8 = 0;
    local_500 = 0;
  }
  else if (((int)param_4[0xf] == (int)param_4[0xe]) &&
          (*(int *)((longlong)param_4 + 0x7c) == *(int *)((longlong)param_4 + 0x74))) {
    local_4f8 = 0;
    local_500 = 0;
  }
  else {
    local_210 = (undefined4)param_4[0xe];
    uStack_20c = *(uint *)((longlong)param_4 + 0x74);
    uStack_208 = (undefined4)param_4[0xf];
    uStack_204 = *(undefined4 *)((longlong)param_4 + 0x7c);
    local_218 = *(undefined1 **)(*(longlong *)(param_4[0xd] + 0x38) + 0x84);
    FUN_14177f7dc(&local_3a8,&local_300,&local_218);
    FUN_144a2c7c2(local_418,&local_218);
    local_4f8 = param_4[0xd];
    local_500 = local_550;
  }
  cVar12 = *(char *)(uVar22 + 0x68);
  puVar38 = (ulonglong *)(param_2 + 0x70);
  puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar42 + 9;
  local_608 = puVar38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
    FUN_140023dd8(puVar38,0x50);
    puVar42 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar42 + 9;
  }
  local_510 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar18;
  puVar42[1] = *(undefined8 *)(uVar22 + 8);
  puVar42[2] = 0;
  *(undefined1 *)(puVar42 + 3) = 3;
  *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
  *puVar42 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar42 + 5) = cVar12 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar42 + 0x2c) = 0xffffffff00000000;
  puVar42[7] = 0;
  puVar42[8] = uVar22;
  iVar13 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
    FUN_1447568fc(local_510,iVar13);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar42;
  *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar18 = (undefined8 *)param_4[0x11];
  puVar40 = puVar18;
  ppuVar33 = &local_218;
  for (lVar25 = 0xf; lVar25 != 0; lVar25 = lVar25 + -1) {
    *ppuVar33 = (undefined1 *)*puVar40;
    puVar40 = puVar40 + 1;
    ppuVar33 = ppuVar33 + 1;
  }
  local_488 = puVar18[0xf];
  local_480 = puVar18[0x10];
  local_478 = param_4[0x12];
  local_528 = *(undefined4 *)(lVar19 + 0x27fc);
  local_524 = *(undefined4 *)(lVar19 + 0x2800);
  local_520 = *(undefined4 *)(lVar19 + 0x2804);
  local_51c = *(undefined4 *)(lVar19 + 0x2808);
  local_514 = *(undefined4 *)(lVar19 + 0x2ab8);
  fVar51 = 0.0;
  if ((int)fVar49 - 10U < 0xfffffffe) {
    if (*(int *)(DAT_14ca30698 + 4) < 1) {
      plVar17 = *(longlong **)(*(longlong *)(lVar19 + 8) + 0x30);
      fVar51 = 0.0009775171;
      if ((plVar17 != (longlong *)0x0) &&
         (plVar17 = (longlong *)(**(code **)(*plVar17 + 0x10))(), *plVar17 != 0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(**(longlong **)(*(longlong *)(lVar19 + 8) + 0x30) + 0x10))();
        lVar25 = (**(code **)(*(longlong *)*puVar18 + 8))();
        if (*(char *)(lVar25 + 0x33) == '%') {
          fVar51 = 0.003921569;
        }
        else {
          fVar51 = *(float *)(&DAT_14a2bbeb8 + (ulonglong)(*(char *)(lVar25 + 0x33) == '\x02') * 4);
        }
      }
    }
    else {
      fVar49 = (float)exp2f((float)*(int *)(DAT_14ca30698 + 4));
      fVar51 = 1.0 / (fVar49 + -1.0);
    }
  }
  local_538 = *(undefined4 *)(lVar19 + 0x2460);
  local_534 = *(undefined4 *)(lVar19 + 0x2464);
  local_530 = *(undefined4 *)(lVar19 + 0x2468);
  local_52c = *(undefined4 *)(lVar19 + 0x246c);
  uVar22 = param_4[7];
  local_5d0 = uVar31;
  if (uVar22 == 0) {
    local_398 = DAT_14ca4ca74;
    uStack_394 = DAT_14ca4ca78;
    uStack_390 = DAT_14ca4ca7c;
    uStack_38c = DAT_14ca4ca80;
    local_4c0 = DAT_14c84635c;
    local_4c8 = DAT_14c8461b4;
    local_4d0 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
  }
  else {
    local_2e0 = (undefined4)param_4[8];
    uStack_2dc = *(undefined4 *)((longlong)param_4 + 0x44);
    uStack_2d8 = (undefined4)param_4[9];
    uStack_2d4 = *(undefined4 *)((longlong)param_4 + 0x4c);
    local_2e8 = *(undefined8 *)(uVar22 + 0x84);
    FUN_14177f7dc(&local_398,&local_300,&local_2e8);
    FUN_144a2c7c2(&local_2b8,&local_2e8);
    local_4c0 = local_258;
    FUN_144a2c7c2(&local_2b8);
    local_4c8 = local_250;
    local_4d0 = param_4[7];
  }
  local_5c4 = fVar44;
  if ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar19 + 0x3090) * 2) *
                0x3c + 6) & 0x80) == 0) {
    puVar40 = (undefined8 *)0x0;
  }
  else {
    uVar31 = param_4[10];
    if (uVar31 == 0) {
      local_630 = &local_2b8;
      local_2b8 = (undefined8 *)&DAT_3f8000003f800000;
      uStack_2b0 = &DAT_3f8000003f800000;
      local_638 = (undefined1 **)CONCAT44(local_638._4_4_,1);
      uVar31 = FUN_1449cc94d(param_2,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
      cVar12 = *(char *)(uVar31 + 0x68);
    }
    else {
      cVar12 = *(char *)(uVar31 + 0x68);
    }
    puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar40 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8(local_608,0x50);
      puVar40 = (undefined8 *)(*local_608 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar40 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar18;
    puVar40[1] = *(undefined8 *)(uVar31 + 8);
    puVar40[2] = 0;
    *(undefined1 *)(puVar40 + 3) = 3;
    *(undefined8 *)((longlong)puVar40 + 0x1c) = 0xffffffffffffffff;
    *puVar40 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar40 + 5) = cVar12 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar40 + 0x2c) = 0xffffffff00000000;
    puVar40[7] = 0;
    puVar40[8] = uVar31;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(local_510,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar40;
    *(int *)((longlong)puVar40 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  }
  local_518 = fVar51;
  local_498 = puVar40;
  if ((((uVar22 == 0) || (*(longlong *)(lVar19 + 0x28c8) == 0)) ||
      (lVar25 = FUN_1447b4020(), lVar25 == 0)) ||
     ((fVar44 = *(float *)(lVar19 + 0x28d0), fVar44 <= 0.0 || (*(float *)(lVar19 + 0x2814) <= 0.0)))
     ) {
    local_59c = 0.0;
    local_598 = 0.0;
    local_594 = 0.0;
    local_590 = 1.0;
    lVar25 = DAT_14ca94dc8;
  }
  else {
    local_59c = 1.0 / *(float *)(lVar19 + 0x2814);
    local_590 = *(float *)(lVar19 + 0x28e0) * fVar44 * local_59c;
    local_594 = *(float *)(lVar19 + 0x28dc) * fVar44 * local_59c;
    local_598 = *(float *)(lVar19 + 0x28d8) * fVar44 * local_59c;
    local_59c = local_59c * fVar44 * *(float *)(lVar19 + 0x28d4);
    lVar25 = FUN_1447b4020(*(undefined8 *)(lVar19 + 0x28c8));
  }
  plVar17 = DAT_14ca27dc8;
  bVar43 = (float)local_578._0_4_ < 0.0;
  local_4a0 = *(undefined8 *)(lVar25 + 0x10);
  fVar44 = *(float *)(lVar19 + 0x2460);
  local_4a4 = *(float *)(lVar19 + 0x2468);
  uVar14 = *(uint *)(lVar19 + 0x2464);
  local_4a8 = *(float *)(lVar19 + 0x246c);
  cVar12 = *(char *)((longlong)param_4 + 0xa1);
  cVar3 = *(char *)((longlong)param_4 + 0xa3);
  lVar19 = *(longlong *)(lVar19 + 8);
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar13 = FUN_140052f36();
    if (iVar13 == 0) {
      plVar17 = plVar17 + 0xb;
    }
    else {
      plVar17 = (longlong *)plVar17[10];
    }
    local_611 = (char)*plVar17;
  }
  else {
    local_611 = (**(code **)(*DAT_14ca27dc8 + 0xa8))();
  }
  lVar25 = local_610;
  auVar54._0_4_ = ~-(uint)bVar43 & local_578._0_4_;
  auVar54._4_4_ = local_578._4_4_;
  auVar54._8_4_ = local_578._8_4_;
  auVar54._12_4_ = local_578._12_4_;
  uVar31 = CONCAT71((int7)((ulonglong)puVar40 >> 8),1);
  if (cVar12 == '\0') {
    uVar36 = 0;
    uVar15 = 0;
    local_490 = 0;
    cVar12 = '\0';
    if ((*(byte *)(lVar19 + 0x48) & 1) != 0) {
      uVar36 = (uint)(*(longlong *)(local_610 + 0x13838) != 0);
      uVar15 = -(uint)(*(float *)(DAT_14ca30620 + 4) < 0.0);
      fVar49 = (float)(~uVar15 & (uint)*(float *)(DAT_14ca30620 + 4) |
                      *(uint *)(local_610 + 0x2abc) & uVar15);
      if (10.0 <= fVar49) {
        fVar49 = 10.0;
      }
      uVar15 = (uint)(0.0 < fVar49);
      local_490 = 0;
      cVar12 = cVar3;
      if ((char)local_5f0 == '\0') {
        uVar31 = 0;
      }
      else {
        local_490 = (ulonglong)(2 - (*(char *)(local_610 + 0x29d4) == '\0'));
        uVar31 = 0;
      }
    }
  }
  else {
    uVar36 = 0;
    uVar15 = 0;
    local_490 = 0;
    cVar12 = '\0';
  }
  auVar55 = auVar54 | ZEXT416(uVar28 & -(uint)bVar43);
  fVar49 = *(float *)(local_610 + 0x280c);
  uVar22 = uVar31 & 0xffffffff;
  local_5f8 = CONCAT44(local_5f8._4_4_,(int)uVar31);
  if ((*(char *)(local_610 + 0x23f5) == '\0') &&
     ((DAT_14ca63ce8 != '\0' || (DAT_14ca63ce9 == '\x01')))) {
    local_578._0_8_ = puVar42;
    uVar16 = FUN_14178423a(local_610);
    uVar31 = local_5f8 & 0xffffffff;
    local_5f0 = CONCAT44(local_5f0._4_4_,uVar16);
    puVar42 = (undefined8 *)local_578._0_8_;
  }
  else {
    local_5f0 = local_5f0 & 0xffffffff00000000;
  }
  uVar21 = local_548;
  if (10.0 <= auVar55._0_4_) {
    auVar55._0_4_ = 0x41200000;
  }
  local_438 = ZEXT416(-(uint)(fVar50 < 0.9999) & (uint)fVar50);
  bVar23 = ~(byte)uVar22 & 0.01 < fVar49;
  local_53c = uVar15;
  if ((char)uVar31 == '\0') {
    local_58c = (uint)bVar23;
    if ((byte)uVar36 != 0) {
      local_53c = 1;
      local_58c = 1;
    }
    local_588 = (uint)(2 < *(int *)(lVar25 + 0x3090) & (byte)uVar36);
  }
  else {
    local_58c = (uint)CONCAT71((int7)(uVar22 >> 8),bVar23);
    local_588 = uVar36;
  }
  fVar49 = local_5e0._0_4_ * 0.5935999;
  fVar50 = local_5e0._0_4_ * 1.029;
  if (auVar55._0_4_ <= 0.0) {
    auVar9._12_4_ = 0;
    auVar9._0_12_ = auVar55._4_12_;
    auVar55 = auVar9 << 0x20;
  }
  fVar51 = local_5e8._0_4_ + -1.0;
  local_578._4_4_ = 0x80000000;
  local_578._0_4_ = uVar14 ^ 0x80000000;
  local_578._8_4_ = 0x80000000;
  local_578._12_4_ = 0x80000000;
  bVar23 = (*(byte *)(local_548 + 0x62) & 2) >> 1 & *(byte *)(lVar25 + 0x13820);
  if ((char)local_5f0 == '\0') {
    puVar18 = (undefined8 *)0;
  }
  else {
    iVar13 = FUN_142f23c86();
    puVar38 = local_608;
    bVar43 = true;
    if ((iVar13 < *(int *)(param_2 + 0x130)) &&
       (lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)iVar13 * 8), lVar19 != 0))
    {
      if (((*param_4 != 0) &&
          ((((int)param_4[2] != (int)param_4[1] ||
            (*(int *)((longlong)param_4 + 0x14) != *(int *)((longlong)param_4 + 0xc))) &&
           (puVar18 = *(undefined8 **)(lVar19 + 8),
           *(int *)((longlong)puVar18 + 0x84) == *(int *)(uVar21 + 0x84))))) &&
         (*(int *)((longlong)puVar18 + 0x88) == *(int *)(uVar21 + 0x88))) goto LAB_142f0d7c5;
      bVar43 = false;
    }
    local_2b8 = (undefined8 *)&DAT_00000001;
    if (bVar23 != 0) {
      local_2b8 = (undefined8 *)0x20000;
    }
    local_2a0 = DAT_14ca83a40;
    uStack_2b0 = (undefined1 *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    uStack_2a8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_286 = 0;
    local_294 = *(int *)(uVar21 + 0x84);
    if (DAT_14ca84e40 <= *(int *)(uVar21 + 0x84)) {
      local_294 = DAT_14ca84e40;
    }
    if (local_294 < 2) {
      local_294 = 1;
    }
    local_290 = DAT_14ca84e40;
    if (*(int *)(uVar21 + 0x88) < DAT_14ca84e40) {
      local_290 = *(int *)(uVar21 + 0x88);
    }
    local_29c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_285 = 0x47;
    local_28c = 0x10001;
    local_288 = 0x101;
    local_298 = 0;
    local_283 = 0xff;
    if (local_290 < 2) {
      local_290 = 1;
    }
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    uVar31 = (longlong)puVar18 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar31) {
      FUN_140023dd8(local_608,0x128);
      puVar18 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
      uVar31 = (longlong)puVar18 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar31;
    FUN_1456bbb8c(puVar18,L"Final Luminance",&local_2b8,0);
    iVar13 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar13 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x178) + (longlong)iVar13 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    if (bVar43) {
      uVar28 = FUN_142f23c86();
      if (*(int *)(param_2 + 0x130) <= (int)uVar28) {
        FUN_140051998(param_2 + 0x128,uVar28 + 1,1);
      }
      puVar38 = *(ulonglong **)(param_2 + 0x120);
      lVar19 = *(longlong *)(param_2 + 0x128);
      puVar32 = (undefined8 *)(*puVar38 + 0xf & 0xfffffffffffffff0);
      puVar40 = puVar32 + 3;
      local_5e0 = (undefined1 *)(ulonglong)uVar28;
      local_5a8 = puVar18;
      if ((undefined8 *)puVar38[1] < puVar40) {
        FUN_140023dd8(puVar38,0x28);
        puVar32 = (undefined8 *)(*puVar38 + 0xf & 0xfffffffffffffff0);
        puVar40 = puVar32 + 3;
      }
      *puVar38 = (ulonglong)puVar40;
      *puVar32 = &PTR_FUN_14a2c4d60;
      puVar32[1] = &PTR_FUN_14a2c4d68;
      puVar32[2] = 0;
      iVar13 = (int)puVar38[6];
      *(uint *)(puVar38 + 6) = iVar13 + 1U;
      if (*(uint *)((longlong)puVar38 + 0x34) < iVar13 + 1U) {
        local_508 = lVar19;
        FUN_1448cfae8(puVar38 + 5,iVar13);
        lVar19 = local_508;
      }
      *(undefined8 **)(puVar38[5] + (longlong)iVar13 * 8) = puVar32;
      *(undefined8 **)(lVar19 + (longlong)(int)local_5e0._0_4_ * 8) = puVar32 + 1;
      puVar32[2] = local_5a8;
      puVar18 = local_5a8;
    }
  }
LAB_142f0d7c5:
  puVar38 = local_608;
  fVar53 = auVar55._0_4_ / 6.0;
  fVar49 = fVar49 * local_5c4;
  local_5e0 = (undefined1 *)CONCAT44(local_5e0._4_4_,fVar50 * local_5c4);
  fVar52 = 1.0 / local_5e8._0_4_;
  fVar51 = fVar51 / local_5e8._0_4_;
  fVar44 = -fVar44 / local_4a4;
  local_578._0_4_ = (float)local_578._0_4_ / local_4a8;
  fVar50 = 1.0 / local_4a4;
  local_5c4 = 1.0 / local_4a8;
  puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  local_508 = CONCAT44(local_508._4_4_,0.5 / local_5e8._0_4_);
  uVar28 = (uint)(byte)local_580;
  local_5a8 = puVar18;
  if (bVar23 == 0) {
    puVar32 = puVar40 + 0xa0;
    if (*(undefined8 **)(param_2 + 0x78) < puVar32) {
      FUN_140023dd8(local_608,0x510);
      puVar40 = (undefined8 *)(*puVar38 + 0xf & 0xfffffffffffffff0);
      puVar32 = puVar40 + 0xa0;
    }
    *local_608 = (ulonglong)puVar32;
    *puVar40 = &PTR_FUN_14a2c4d98;
    local_580 = puVar40 + 2;
    FUN_142f0f744();
    lVar19 = 0x400;
    do {
      *(undefined8 *)((longlong)puVar40 + lVar19) = 0;
      ((undefined8 *)((longlong)puVar40 + lVar19))[1] = 0;
      *(undefined4 *)((longlong)puVar40 + lVar19 + 0x10) = 0xffff0000;
      lVar19 = lVar19 + 0x18;
    } while (lVar19 != 0x4c0);
    *(undefined4 *)((longlong)puVar40 + 0x4d4) = 0;
    puVar40[0x98] = 0;
    puVar40[0x99] = 0;
    *(undefined2 *)(puVar40 + 0x9a) = 0;
    *(undefined4 *)(puVar40 + 0x9b) = 0xffffffff;
    *(undefined4 *)((longlong)puVar40 + 0x4dc) = 0xffffffff;
    *(undefined4 *)(puVar40 + 0x9c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar40 + 0x4e4) = 0xffffffff;
    *(undefined4 *)(puVar40 + 0x9d) = 0;
    *(undefined2 *)((longlong)puVar40 + 0x4ec) = 0;
    puVar40[0x9e] = 0;
    iVar13 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar13);
    }
    lVar19 = local_610;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar40;
    puVar40[2] = local_4f0;
    *(undefined1 *)(puVar40 + 3) = (undefined1)local_4e8;
    *(undefined4 *)((longlong)puVar40 + 0x19) = local_2c4;
    *(uint *)((longlong)puVar40 + 0x1c) = CONCAT31(uStack_2c0,local_2c4._3_1_);
    puVar40[4] = local_4e0;
    *(undefined1 *)(puVar40 + 5) = (undefined1)local_4d8;
    *(undefined4 *)((longlong)puVar40 + 0x29) = local_2cc;
    *(uint *)((longlong)puVar40 + 0x2c) = CONCAT31(uStack_2c8,local_2cc._3_1_);
    *(float *)(puVar40 + 6) = fVar45;
    *(float *)((longlong)puVar40 + 0x34) = fVar46;
    *(float *)((longlong)puVar40 + 0x3c) = local_5bc;
    *(float *)(puVar40 + 8) = local_5d8;
    *(float *)((longlong)puVar40 + 0x44) = local_5d4;
    *(undefined4 *)(puVar40 + 9) = local_5c0;
    *(undefined4 *)((longlong)puVar40 + 0x4c) = local_5b8;
    *(undefined4 *)(puVar40 + 10) = local_5b4;
    puVar40[0xb] = local_5b0;
    puVar40[0xc] = local_558;
    *(float *)(puVar40 + 0xe) = local_584;
    *(undefined4 *)((longlong)puVar40 + 0x74) = (undefined4)local_560;
    *(float *)(puVar40 + 0xf) = fVar47;
    *(float *)((longlong)puVar40 + 0x7c) = fVar48;
    puVar40[0x10] = local_450;
    *(float *)(puVar40 + 0x13) = local_190;
    puVar40[0x11] = local_1a0;
    puVar40[0x12] = uStack_198;
    iVar13 = (int)local_5d0;
    *(int *)((longlong)puVar40 + 0x9c) = iVar13;
    puVar40[0x14] = local_470;
    puVar32 = &local_188;
    puVar35 = puVar40 + 0x15;
    for (lVar25 = 0xf; lVar25 != 0; lVar25 = lVar25 + -1) {
      *puVar35 = *puVar32;
      puVar32 = puVar32 + 1;
      puVar35 = puVar35 + 1;
    }
    ppuVar33 = &local_388;
    puVar32 = puVar40 + 0x24;
    for (lVar25 = 0xe; lVar25 != 0; lVar25 = lVar25 + -1) {
      *puVar32 = *ppuVar33;
      ppuVar33 = ppuVar33 + 1;
      puVar32 = puVar32 + 1;
    }
    ppuVar33 = &local_218;
    puVar32 = puVar40 + 0x32;
    for (lVar25 = 0xf; lVar25 != 0; lVar25 = lVar25 + -1) {
      *puVar32 = *ppuVar33;
      ppuVar33 = ppuVar33 + 1;
      puVar32 = puVar32 + 1;
    }
    puVar40[0x41] = local_488;
    puVar40[0x42] = local_480;
    puVar40[0x43] = uStack_248;
    puVar40[0x44] = CONCAT44(uStack_23c,local_240);
    *(undefined4 *)(puVar40 + 0x45) = uStack_238;
    *(undefined4 *)((longlong)puVar40 + 0x22c) = uStack_234;
    *(undefined4 *)(puVar40 + 0x46) = (undefined4)local_230;
    *(undefined4 *)((longlong)puVar40 + 0x234) = local_230._4_4_;
    puVar40[0x47] = uStack_228;
    puVar40[0x48] = local_220;
    puVar40[0x4a] = local_468;
    puVar40[0x4b] = local_498;
    puVar40[0x4c] = CONCAT44(uStack_394,local_398);
    puVar40[0x4d] = CONCAT44(uStack_38c,uStack_390);
    puVar40[0x4e] = local_4c0;
    puVar40[0x4f] = local_4c8;
    puVar40[0x50] = local_4d0;
    puVar40[0x51] = local_550;
    puVar40[0x52] = local_460;
    puVar40[0x53] = local_458;
    puVar40[0x54] = local_550;
    puVar40[0x55] = local_550;
    puVar40[0x56] = local_3a8;
    puVar40[0x57] = uStack_3a0;
    puVar32 = local_418;
    puVar35 = puVar40 + 0x58;
    for (lVar25 = 0xe; lVar25 != 0; lVar25 = lVar25 + -1) {
      *puVar35 = *puVar32;
      puVar32 = puVar32 + 1;
      puVar35 = puVar35 + 1;
    }
    puVar40[0x66] = local_4f8;
    puVar40[0x67] = local_500;
    *(uint *)(puVar40 + 0x68) = uVar28;
    puVar40[0x69] = puVar42;
    puVar40[0x6a] = local_478;
    puVar40[0x6b] = local_4a0;
    puVar40[0x6c] = local_550;
    puVar40[0x6d] = local_550;
    puVar40[0x6e] = local_550;
    *(undefined4 *)(puVar40 + 0x70) = local_528;
    *(undefined4 *)((longlong)puVar40 + 900) = local_524;
    *(undefined4 *)(puVar40 + 0x71) = local_520;
    *(undefined4 *)((longlong)puVar40 + 0x38c) = local_51c;
    *(float *)(puVar40 + 0x72) = local_59c;
    *(float *)((longlong)puVar40 + 0x394) = local_598;
    *(float *)(puVar40 + 0x73) = local_594;
    *(float *)((longlong)puVar40 + 0x39c) = local_590;
    *(float *)(puVar40 + 0x74) = local_5e0._0_4_;
    *(float *)((longlong)puVar40 + 0x3a4) = fVar49;
    *(undefined4 *)(puVar40 + 0x75) = local_438._0_4_;
    *(undefined4 *)((longlong)puVar40 + 0x3ac) = 0;
    *(undefined4 *)(puVar40 + 0x76) = local_514;
    *(float *)((longlong)puVar40 + 0x3b4) = fVar53;
    puVar40[0x77] = 0;
    *(undefined4 *)(puVar40 + 0x78) = local_538;
    *(undefined4 *)((longlong)puVar40 + 0x3c4) = local_534;
    *(undefined4 *)(puVar40 + 0x79) = local_530;
    *(undefined4 *)((longlong)puVar40 + 0x3cc) = local_52c;
    *(float *)(puVar40 + 0x7a) = fVar44;
    *(undefined4 *)((longlong)puVar40 + 0x3d4) = local_578._0_4_;
    *(float *)(puVar40 + 0x7b) = fVar50;
    *(float *)((longlong)puVar40 + 0x3dc) = local_5c4;
    *(float *)(puVar40 + 0x7c) = local_5e8._0_4_;
    *(float *)((longlong)puVar40 + 0x3e4) = fVar52;
    *(float *)(puVar40 + 0x7d) = fVar51;
    *(undefined4 *)((longlong)puVar40 + 0x3ec) = (undefined4)local_508;
    *(undefined4 *)(puVar40 + 0x7e) = 0x43200000;
    *(float *)((longlong)puVar40 + 0x3f4) = local_518;
    puVar40[0x80] = local_548;
    puVar40[0x81] = 0;
    *(char *)(puVar40 + 0x82) = (char)local_4ac;
    *(undefined1 *)((longlong)puVar40 + 0x411) = 0;
    *(undefined2 *)((longlong)puVar40 + 0x412) = 0xffff;
    *(char *)((longlong)puVar40 + 0x4ed) = *(char *)(local_610 + 0x23f5) * '\x02';
    if (puVar18 != (undefined8 *)0x0) {
      puVar40[0x83] = puVar18;
      puVar40[0x84] = 0;
      *(undefined4 *)(puVar40 + 0x85) = 0xffff0001;
    }
    uVar6 = *(undefined8 *)(local_610 + 0x13818);
    FUN_1415d0a54();
    FUN_1448e935e(uVar6,&local_2b8,&DAT_14ca30980,0);
    FUN_1415d0a54();
    local_5e8 = local_2b8;
    local_5e0 = uStack_2b0;
    uVar6 = *(undefined8 *)(lVar19 + 0x13818);
    bVar41 = ((cVar12 * '\x02' | local_611 << 2) + (char)local_588) * '\x02' + (char)local_53c;
    iVar27 = (int)local_490;
    bVar23 = ((char)local_5f0 * '\x02' | (iVar13 == 0) << 2) + (char)local_58c;
    uVar28 = (uint)(byte)local_5f8;
    FUN_14155e2b2();
    FUN_1448e935e(uVar6,&local_2b8,&DAT_14ca30aa8,
                  ((uint)bVar23 * 0x60 | uVar28) +
                  (iVar27 + ((uint)bVar41 + (uint)bVar41 * 2 & 0xff)) * 2);
    FUN_14155e2b2();
    puVar11 = uStack_2b0;
    puVar18 = local_2b8;
    puVar26 = &DAT_14c9f8368;
    if (local_5f9 != '\0') {
      puVar26 = &DAT_14c9c0d40;
    }
    local_578._0_8_ = *(undefined8 *)(puVar26 + 0x10);
    local_5d0 = DAT_14c9c0d98;
    local_5f0 = DAT_14ca94df8;
    local_4f0 = CONCAT44(local_4f0._4_4_,*(undefined4 *)(lVar19 + 0x3090));
    uVar16 = *(undefined4 *)(lVar19 + 0x1dd4);
    uVar5 = *(undefined4 *)(lVar19 + 0x3094);
    uVar4 = (&DAT_00001de6)[lVar19];
    local_550 = local_318;
    local_5f8 = local_310;
    local_5b0 = local_308;
    local_4d8 = local_300;
    local_4e0 = CONCAT44(uStack_2f4,local_2f8);
    local_4e8 = CONCAT44(uStack_2ec,uStack_2f0);
    FUN_14155e3d4();
    FUN_140069376(param_2);
    puVar38 = local_608;
    puVar40 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar42 = puVar40 + 0x4d;
    if (*(undefined8 **)(param_2 + 0x78) < puVar42) {
      FUN_140023dd8(local_608,0x270);
      puVar40 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
      puVar42 = puVar40 + 0x4d;
    }
    *local_608 = (ulonglong)puVar42;
    local_2b8 = local_580;
    uStack_2b0 = DAT_14ca34160;
    if (DAT_14ca34160 != (undefined1 *)0x0) {
      LOCK();
      *(int *)(DAT_14ca34160 + 8) = *(int *)(DAT_14ca34160 + 8) + 1;
      UNLOCK();
    }
    uStack_2a8 = &DAT_14ca34118;
    local_638 = (undefined1 **)CONCAT71(local_638._1_7_,2);
    FUN_140068f1a(puVar40,&local_425,&local_2b8,1);
    *puVar40 = &PTR_FUN_14a2c4da0;
    *(undefined4 *)(puVar40 + 0x37) = (undefined4)local_4f0;
    *(undefined4 *)((longlong)puVar40 + 0x1bc) = uVar16;
    *(undefined4 *)(puVar40 + 0x38) = uVar5;
    *(undefined1 *)((longlong)puVar40 + 0x1c4) = uVar4;
    *(undefined2 *)((longlong)puVar40 + 0x1c5) = local_2bb;
    *(undefined1 *)((longlong)puVar40 + 0x1c7) = local_2b9;
    puVar40[0x39] = local_550;
    puVar40[0x3a] = local_5f8;
    puVar40[0x3b] = local_5b0;
    puVar40[0x3c] = local_4d8;
    puVar40[0x3d] = local_4e0;
    puVar40[0x3e] = local_4e8;
    puVar40[0x3f] = local_5e8;
    puVar40[0x40] = local_5e0;
    puVar40[0x41] = puVar18;
    puVar40[0x42] = puVar11;
    puVar40[0x43] = local_578._0_8_;
    puVar40[0x44] = local_5d0;
    puVar40[0x45] = local_5f0;
    *(undefined1 *)(puVar40 + 0x46) = 0;
    uVar16 = (undefined4)local_2e8;
    *(undefined4 *)((longlong)puVar40 + 0x234) = local_2e8._3_4_;
    *(undefined4 *)((longlong)puVar40 + 0x231) = uVar16;
    puVar40[0x47] = local_5e8;
    puVar40[0x48] = local_5e0;
    puVar40[0x49] = puVar18;
    puVar40[0x4a] = puVar11;
    puVar40[0x4b] = local_580;
    *(undefined1 *)(puVar40 + 0x4c) = 2;
    iVar13 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar13 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar13);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar13 * 8) = puVar40;
    *(int *)((longlong)puVar40 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar40);
    puVar18 = local_5a8;
    lVar19 = local_610;
  }
  else {
    puVar18 = puVar40 + 0x82;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8(local_608,0x420);
      puVar40 = (undefined8 *)(*puVar38 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar40 + 0x82;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar18;
    *puVar40 = &PTR_FUN_14a2c4d70;
    local_580 = puVar40 + 2;
    FUN_142f0f744();
    puVar40[0x80] = 0;
    puVar40[0x81] = 0;
    iVar13 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar13 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar13);
    }
    uVar31 = local_548;
    puVar38 = local_608;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar13 * 8) = puVar40;
    puVar40[2] = local_4f0;
    *(undefined1 *)(puVar40 + 3) = (undefined1)local_4e8;
    *(undefined4 *)((longlong)puVar40 + 0x19) = local_2c4;
    *(uint *)((longlong)puVar40 + 0x1c) = CONCAT31(uStack_2c0,local_2c4._3_1_);
    puVar40[4] = local_4e0;
    *(undefined1 *)(puVar40 + 5) = (undefined1)local_4d8;
    *(undefined4 *)((longlong)puVar40 + 0x29) = local_2cc;
    *(uint *)((longlong)puVar40 + 0x2c) = CONCAT31(uStack_2c8,local_2cc._3_1_);
    *(float *)(puVar40 + 6) = fVar45;
    *(float *)((longlong)puVar40 + 0x34) = fVar46;
    *(float *)((longlong)puVar40 + 0x3c) = local_5bc;
    *(float *)(puVar40 + 8) = local_5d8;
    *(float *)((longlong)puVar40 + 0x44) = local_5d4;
    *(undefined4 *)(puVar40 + 9) = local_5c0;
    *(undefined4 *)((longlong)puVar40 + 0x4c) = local_5b8;
    *(undefined4 *)(puVar40 + 10) = local_5b4;
    puVar40[0xb] = local_5b0;
    puVar40[0xc] = local_558;
    *(float *)(puVar40 + 0xe) = local_584;
    *(undefined4 *)((longlong)puVar40 + 0x74) = (undefined4)local_560;
    *(float *)(puVar40 + 0xf) = fVar47;
    *(float *)((longlong)puVar40 + 0x7c) = fVar48;
    puVar40[0x10] = local_450;
    *(float *)(puVar40 + 0x13) = local_190;
    puVar40[0x11] = local_1a0;
    puVar40[0x12] = uStack_198;
    *(int *)((longlong)puVar40 + 0x9c) = (int)local_5d0;
    puVar40[0x14] = local_470;
    puVar18 = &local_188;
    puVar32 = puVar40 + 0x15;
    for (lVar19 = 0xf; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar32 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar32 = puVar32 + 1;
    }
    ppuVar33 = &local_388;
    puVar18 = puVar40 + 0x24;
    for (lVar19 = 0xe; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar18 = *ppuVar33;
      ppuVar33 = ppuVar33 + 1;
      puVar18 = puVar18 + 1;
    }
    ppuVar33 = &local_218;
    puVar18 = puVar40 + 0x32;
    for (lVar19 = 0xf; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar18 = *ppuVar33;
      ppuVar33 = ppuVar33 + 1;
      puVar18 = puVar18 + 1;
    }
    puVar40[0x41] = local_488;
    puVar40[0x42] = local_480;
    puVar40[0x43] = uStack_248;
    puVar40[0x44] = CONCAT44(uStack_23c,local_240);
    *(undefined4 *)(puVar40 + 0x45) = uStack_238;
    *(undefined4 *)((longlong)puVar40 + 0x22c) = uStack_234;
    *(undefined4 *)(puVar40 + 0x46) = (undefined4)local_230;
    *(undefined4 *)((longlong)puVar40 + 0x234) = local_230._4_4_;
    puVar40[0x47] = uStack_228;
    puVar40[0x48] = local_220;
    puVar40[0x4a] = local_468;
    puVar40[0x4b] = local_498;
    puVar40[0x4c] = CONCAT44(uStack_394,local_398);
    puVar40[0x4d] = CONCAT44(uStack_38c,uStack_390);
    puVar40[0x4e] = local_4c0;
    puVar40[0x4f] = local_4c8;
    puVar40[0x50] = local_4d0;
    puVar40[0x51] = local_550;
    puVar40[0x52] = local_460;
    puVar40[0x53] = local_458;
    puVar40[0x54] = local_550;
    puVar40[0x55] = local_550;
    puVar40[0x56] = local_3a8;
    puVar40[0x57] = uStack_3a0;
    puVar18 = local_418;
    puVar32 = puVar40 + 0x58;
    for (lVar19 = 0xe; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar32 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar32 = puVar32 + 1;
    }
    puVar40[0x66] = local_4f8;
    puVar40[0x67] = local_500;
    *(uint *)(puVar40 + 0x68) = uVar28;
    puVar40[0x69] = puVar42;
    puVar40[0x6a] = local_478;
    puVar40[0x6b] = local_4a0;
    puVar40[0x6c] = local_550;
    puVar40[0x6d] = local_550;
    puVar40[0x6e] = local_550;
    *(undefined4 *)(puVar40 + 0x70) = local_528;
    *(undefined4 *)((longlong)puVar40 + 900) = local_524;
    *(undefined4 *)(puVar40 + 0x71) = local_520;
    *(undefined4 *)((longlong)puVar40 + 0x38c) = local_51c;
    *(float *)(puVar40 + 0x72) = local_59c;
    *(float *)((longlong)puVar40 + 0x394) = local_598;
    *(float *)(puVar40 + 0x73) = local_594;
    *(float *)((longlong)puVar40 + 0x39c) = local_590;
    *(float *)(puVar40 + 0x74) = local_5e0._0_4_;
    *(float *)((longlong)puVar40 + 0x3a4) = fVar49;
    *(undefined4 *)(puVar40 + 0x75) = local_438._0_4_;
    *(undefined4 *)((longlong)puVar40 + 0x3ac) = 0;
    *(undefined4 *)(puVar40 + 0x76) = local_514;
    *(float *)((longlong)puVar40 + 0x3b4) = fVar53;
    puVar40[0x77] = 0;
    *(undefined4 *)(puVar40 + 0x78) = local_538;
    *(undefined4 *)((longlong)puVar40 + 0x3c4) = local_534;
    *(undefined4 *)(puVar40 + 0x79) = local_530;
    *(undefined4 *)((longlong)puVar40 + 0x3cc) = local_52c;
    *(float *)(puVar40 + 0x7a) = fVar44;
    *(undefined4 *)((longlong)puVar40 + 0x3d4) = local_578._0_4_;
    *(float *)(puVar40 + 0x7b) = fVar50;
    *(float *)((longlong)puVar40 + 0x3dc) = local_5c4;
    *(float *)(puVar40 + 0x7c) = local_5e8._0_4_;
    *(float *)((longlong)puVar40 + 0x3e4) = fVar52;
    *(float *)(puVar40 + 0x7d) = fVar51;
    *(undefined4 *)((longlong)puVar40 + 0x3ec) = (undefined4)local_508;
    *(undefined4 *)(puVar40 + 0x7e) = 0x43200000;
    *(float *)((longlong)puVar40 + 0x3f4) = local_518;
    uVar4 = *(undefined1 *)(local_548 + 0x94);
    puVar42 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar42 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8(local_608,0x50);
      puVar42 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar42 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar18;
    puVar42[1] = *(undefined8 *)(uVar31 + 8);
    puVar42[2] = 0;
    *(undefined1 *)(puVar42 + 3) = 0;
    *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar42 + 5) = 0;
    *puVar42 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar42 + 6) = uVar4;
    *(undefined1 *)(puVar42 + 7) = 0;
    *(undefined4 *)((longlong)puVar42 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar42 + 0x35) = 0;
    puVar42[8] = uVar31;
    iVar13 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
      FUN_1447568fc(local_510,iVar13);
    }
    puVar18 = local_5a8;
    puVar38 = local_608;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar42;
    *(int *)((longlong)puVar42 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar40[0x80] = puVar42;
    uVar28 = (uint)local_5f8;
    if (local_5a8 != (undefined8 *)0x0) {
      uVar4 = *(undefined1 *)((longlong)local_5a8 + 0x94);
      puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar42 = puVar32 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar42) {
        FUN_140023dd8(local_608,0x50);
        puVar32 = (undefined8 *)(*puVar38 + 7 & 0xfffffffffffffff8);
        puVar42 = puVar32 + 9;
        uVar28 = (uint)local_5f8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar42;
      puVar32[1] = *(undefined8 *)((longlong)puVar18 + 8);
      puVar32[2] = 0;
      *(undefined1 *)(puVar32 + 3) = 0;
      *(undefined8 *)((longlong)puVar32 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar32 + 5) = 0;
      *puVar32 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar32 + 6) = uVar4;
      *(undefined1 *)(puVar32 + 7) = 0;
      *(undefined4 *)((longlong)puVar32 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar32 + 0x35) = 0;
      puVar32[8] = puVar18;
      iVar13 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar13 + 1U) {
        FUN_1447568fc(local_510,iVar13);
        uVar28 = (uint)local_5f8;
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar13 * 8) = puVar32;
      *(int *)((longlong)puVar32 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      puVar40[0x81] = puVar32;
    }
    lVar19 = local_610;
    uVar6 = *(undefined8 *)(local_610 + 0x13818);
    bVar41 = ((cVar12 * '\x02' | local_611 << 2) + (char)local_588) * '\x02' + (char)local_53c;
    iVar13 = (int)local_490;
    bVar23 = ((char)local_5f0 * '\x02' | ((int)local_5d0 == 0) << 2) + (char)local_58c;
    FUN_145ea1de8();
    FUN_1448e935e(uVar6,&local_2b8,&DAT_14ca30bd0,
                  ((uint)bVar23 * 0x60 | uVar28 & 0xff) +
                  (iVar13 + ((uint)bVar41 + (uint)bVar41 * 2 & 0xff)) * 2);
    FUN_145ea1de8();
    iVar13 = (local_308._4_4_ - local_310._4_4_) + 7;
    local_420 = (local_308._4_4_ - local_310._4_4_) + 0xe;
    if (-1 < iVar13) {
      local_420 = iVar13;
    }
    local_420 = local_420 >> 3;
    iVar13 = ((int)local_308 - (int)local_310) + 7;
    local_424 = ((int)local_308 - (int)local_310) + 0xe;
    if (-1 < iVar13) {
      local_424 = iVar13;
    }
    local_424 = local_424 >> 3;
    local_638 = (undefined1 **)&local_424;
    local_41c = 1;
    FUN_14729a796(param_2,&local_2e8,&local_2b8,local_580);
  }
  uVar31 = local_448;
  if ((puVar18 != (undefined8 *)0x0) && (lVar25 = *(longlong *)(lVar19 + 0x3108), lVar25 != 0)) {
    *(ulonglong *)(lVar25 + 0x1740) = local_310;
    *(ulonglong *)(lVar25 + 0x1748) = local_308;
    plVar17 = *(longlong **)(*(longlong *)(lVar19 + 0x3108) + 0x1738);
    puVar42 = (undefined8 *)(*(longlong *)(lVar19 + 0x3108) + 0x1738);
    if (plVar17 != (longlong *)0x0) {
      *puVar42 = 0;
      (**(code **)(*plVar17 + 0x38))();
    }
    bVar23 = *(byte *)((longlong)puVar18 + 0x24);
    *(byte *)((longlong)puVar18 + 0x24) = bVar23 | 2;
    *(undefined1 *)((longlong)puVar18 + 0x26) = 1;
    iVar13 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar13 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar13 + 1U) {
      FUN_14017e38e((longlong *)(param_2 + 0x1b8),iVar13);
    }
    lVar19 = *(longlong *)(param_2 + 0x1b8);
    *(undefined8 **)(lVar19 + (longlong)iVar13 * 0x10) = puVar18;
    *(undefined8 **)(lVar19 + 8 + (longlong)iVar13 * 0x10) = puVar42;
    if ((bVar23 & 2) == 0) {
      pcVar2 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar43 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar43) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar43) {
        FUN_1447d2058();
      }
      iVar13 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar13 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar13 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar13);
      }
      lVar19 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar19 + (longlong)iVar13 * 0x10) = 2;
      *(undefined8 **)(lVar19 + 8 + (longlong)iVar13 * 0x10) = puVar18;
      LOCK();
      cVar12 = *pcVar2;
      if (cVar12 == '\x01') {
        *pcVar2 = '\0';
      }
      UNLOCK();
      if (cVar12 != '\x01') {
        FUN_14008cdb0(pcVar2);
      }
    }
  }
  *local_440 = local_548;
  local_440[1] = uVar31;
  local_440[2] = local_4b8;
  if ((local_f0 ^ (ulonglong)auStack_658) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f0f744 FUN_142f0f744 body=165 status=ok
// SIG undefined FUN_142f0f744(void)

void FUN_142f0f744(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[0xe] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3f800000;
  return;
}



// FUNCTION 142f0f7f5 FUN_142f0f7f5 body=1371 status=ok
// SIG undefined FUN_142f0f7f5(void)

void FUN_142f0f7f5(ulonglong *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined4 local_240;
  undefined4 local_238;
  float local_230;
  float local_228;
  ulonglong local_220;
  ulonglong local_218;
  longlong *local_210;
  undefined4 local_208;
  undefined4 local_200;
  uint local_1f4;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined8 uStack_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  longlong local_160;
  longlong local_158;
  int local_150;
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
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined5 uStack_b4;
  undefined3 uStack_af;
  undefined5 uStack_ac;
  undefined8 uStack_a7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar5 = *(longlong *)(param_2 + 0x30d8);
  local_1e8 = param_4;
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x6b8) == '\0')) {
    local_1f4 = *(uint *)(*(longlong *)(param_4 + 0x1b0) + 0x84);
    local_1f0 = (ulonglong)*(uint *)(*(longlong *)(param_4 + 0x1b0) + 0x88);
  }
  else {
    plVar11 = *(longlong **)(lVar5 + 0x6b0);
    local_1f4 = *(uint *)(*(longlong *)(param_4 + 0x1b0) + 0x84);
    local_1f0 = (ulonglong)*(uint *)(*(longlong *)(param_4 + 0x1b0) + 0x88);
    if (plVar11 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar11 + 0x10))(plVar11);
      local_178 = (float)*(int *)(lVar5 + 0x30);
      bVar3 = false;
      goto LAB_142f0f8b8;
    }
  }
  local_178 = 32.0;
  bVar3 = true;
  plVar11 = (longlong *)0x0;
LAB_142f0f8b8:
  uVar1 = *(undefined8 *)(param_2 + 0x13818);
  uVar6 = FUN_14605cd50();
  FUN_1448e935e(uVar1,&local_148,uVar6,0);
  FUN_14605cd50();
  lVar5 = uStack_140;
  local_1e0 = local_148;
  local_150 = param_3;
  FUN_14729a97e(&local_160,*(undefined8 *)(param_2 + 0x13818));
  local_1c8 = 0;
  local_1c0 = 1;
  local_1b8 = 0;
  local_1b0 = 1;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_188 = 0;
  uStack_180 = 0;
  FUN_1448c58dc(param_2,&local_1c8);
  local_190 = *(undefined4 *)(param_2 + 0x2804);
  local_198 = *(undefined8 *)(param_2 + 0x27fc);
  local_18c = 0;
  plVar7 = (longlong *)(DAT_14ca94dc8 + 0x10);
  if (!bVar3) {
    plVar7 = plVar11 + 1;
  }
  local_188 = *plVar7;
  uStack_180 = DAT_14c9c0de0;
  local_174 = 1.0 / local_178;
  local_170 = (local_178 + -1.0) / local_178;
  local_16c = 0.5 / local_178;
  if (param_3 == 0) {
    local_1a8 = *(undefined8 *)(local_1e8 + 0x1b8);
    uStack_1a0 = DAT_14c9c0d80;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  lVar8 = 0;
  local_f8 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  uStack_af = 0;
  uStack_ac = 0;
  uStack_a7 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  FUN_144b0e33a(param_1,&local_148);
  lVar4 = local_1e0;
  local_118 = DAT_14c9c0d50;
  uStack_110 = DAT_14c9c0db0;
  local_108 = DAT_14c9c0d98;
  local_148 = DAT_14ca94df8;
  if (local_1e0 != 0) {
    lVar2 = *(longlong *)(lVar5 + 8);
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + (longlong)*(int *)(local_1e0 + 0xd4) * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar2,(longlong)*(int *)(local_1e0 + 0xd4),1);
    }
  }
  uStack_140 = lVar8;
  if (local_160 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_158 + 8) + 0x50) +
             (longlong)*(int *)(local_160 + 0xd4) * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(*(longlong *)(local_158 + 8),(longlong)*(int *)(local_160 + 0xd4),1);
    }
  }
  local_f0 = 0;
  local_138 = lVar8;
  lVar8 = FUN_140028f18(param_1);
  if ((lVar8 != 0) && ((local_80 & 0x10000000) == 0)) {
    *(undefined4 *)(param_1 + 0x35) = (undefined4)local_128;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = local_128._4_4_;
    *(undefined4 *)(param_1 + 0x36) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = uStack_120._4_4_;
    *(undefined4 *)(param_1 + 0x33) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_1 + 0x19c) = local_138._4_4_;
    *(undefined4 *)(param_1 + 0x34) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_130._4_4_;
    *(undefined4 *)(param_1 + 0x31) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_1 + 0x18c) = local_148._4_4_;
    *(undefined4 *)(param_1 + 0x32) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_1 + 0x194) = uStack_140._4_4_;
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 4;
    if ((undefined8 *)param_1[1] < puVar10) {
      FUN_140023dd8(param_1,0x28);
      puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar9 + 4;
    }
    *param_1 = (ulonglong)puVar10;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar9;
    param_1[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a37d348;
    puVar9[2] = lVar8;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x1c) = 1;
  }
  if (local_160 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_158 + 8) + 0x50) +
             (longlong)*(int *)(local_160 + 0xd4) * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(*(longlong *)(local_158 + 8),(longlong)*(int *)(local_160 + 0xd4),1);
    }
  }
  FUN_145f34d86();
  local_248 = &local_1c8;
  FUN_1449cc26b(param_1,lVar8,local_160,&DAT_14ca34228);
  puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar9 + 5;
  if ((undefined8 *)param_1[1] < puVar10) {
    FUN_140023dd8(param_1,0x30);
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar9 + 5;
  }
  local_230 = (float)(int)local_1f4;
  local_228 = (float)(int)local_1f0;
  *param_1 = (ulonglong)puVar10;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar9;
  param_1[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(float *)((longlong)puVar9 + 0x1c) = local_230;
  *(float *)(puVar9 + 4) = local_228;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  local_200 = *(undefined4 *)(param_2 + 0x3094);
  local_210 = &local_1d8;
  local_1d8 = lVar4;
  local_1d0 = lVar5;
  local_220 = (ulonglong)local_1f4 | local_1f0 << 0x20;
  local_238 = 0;
  local_240 = 0;
  local_248 = (undefined8 *)CONCAT44(local_248._4_4_,local_228);
  local_208 = 1;
  local_218 = local_220;
  FUN_140094833(param_1,0,0);
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f0fd51 FUN_142f0fd51 body=590 status=ok
// SIG undefined FUN_142f0fd51(void)

void FUN_142f0fd51(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_4;
  local_78 = param_3;
  lVar4 = FUN_142eb67bd();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar7 + 0x2a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x160);
    puVar7 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar7 + 0x2a;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar7 = &PTR_FUN_14a2c4db8;
  puVar5 = puVar7 + 2;
  FUN_1472a8b36(puVar5);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar7;
  FUN_1448c58dc(param_2,&local_68);
  lVar3 = local_78;
  *(undefined4 *)(puVar7 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar7 + 0x24) = local_58._4_4_;
  *(undefined4 *)(puVar7 + 5) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_4c;
  *(undefined4 *)puVar5 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar7 + 0x14) = local_68._4_4_;
  *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_60._4_4_;
  puVar7[6] = *(undefined8 *)(local_78 + 0x1b8);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar4 + 0xac);
  }
  puVar7[7] = lVar4;
  puVar7[8] = uVar6;
  *(undefined4 *)(puVar7 + 9) = 0x60;
  puVar7[10] = local_80;
  puVar7[0xb] = 0;
  *(undefined4 *)(puVar7 + 0xc) = 0xffff0002;
  *(char *)((longlong)puVar7 + 0x13d) = *(char *)(param_2 + 0x23f5) * '\x02';
  FUN_1472a8bd6();
  FUN_140069376(param_1);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 0x39;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x1d0);
    puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 0x39;
  }
  *puVar1 = (ulonglong)puVar7;
  uStack_60 = DAT_14ca34ed8;
  if (DAT_14ca34ed8 != 0) {
    LOCK();
    *(int *)(DAT_14ca34ed8 + 8) = *(int *)(DAT_14ca34ed8 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca34e90;
  local_88 = 0;
  local_68 = puVar5;
  FUN_140068f1a(puVar8,&local_69,&local_68,1);
  *puVar8 = &PTR_FUN_14a2c4dc0;
  puVar8[0x37] = param_2;
  puVar8[0x38] = lVar3;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_140069100(param_1,puVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f0ffac FUN_142f0ffac body=514 status=ok
// SIG undefined FUN_142f0ffac(void)

void FUN_142f0ffac(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x28;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x150);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x28;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14a2c4e18;
  puVar4 = puVar5 + 2;
  FUN_1472a8fe2(puVar4);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  FUN_1448c58dc(param_2,&local_68);
  *(undefined4 *)(puVar5 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar5 + 0x24) = local_58._4_4_;
  *(undefined4 *)(puVar5 + 5) = uStack_50;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_4c;
  *(undefined4 *)puVar4 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar5 + 0x14) = local_68._4_4_;
  *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_60._4_4_;
  uVar3 = *(undefined8 *)(param_3 + 0x1b8);
  puVar5[6] = uVar3;
  puVar5[8] = uVar3;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0xffff0001;
  FUN_1472a907c();
  FUN_140069376(param_1);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 0x39;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x1d0);
    puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 0x39;
  }
  *puVar1 = (ulonglong)puVar5;
  uStack_60 = DAT_14ca34f90;
  if (DAT_14ca34f90 != 0) {
    LOCK();
    *(int *)(DAT_14ca34f90 + 8) = *(int *)(DAT_14ca34f90 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca34f48;
  local_78 = 0;
  local_68 = puVar4;
  FUN_140068f1a(puVar6,&local_69,&local_68,1);
  *puVar6 = &PTR_FUN_14a2c4e20;
  puVar6[0x37] = param_2;
  puVar6[0x38] = param_3;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140069100(param_1,puVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f10260 FUN_142f10260 body=96 status=ok
// SIG undefined FUN_142f10260(void)

undefined8 FUN_142f10260(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f10356();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca310b0,1);
  return uVar3;
}



// FUNCTION 142f102c0 FUN_142f102c0 body=138 status=ok
// SIG undefined FUN_142f102c0(void)

void * FUN_142f102c0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142f10356 FUN_142f10356 body=445 status=ok
// SIG undefined FUN_142f10356(void)

void FUN_142f10356(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31130) {
    FUN_144b3d300(&DAT_14ca31130);
    if (DAT_14ca31130 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f10520;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x1b0;
      local_88 = 0x3c;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca310b0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f10514);
      _Init_thread_footer(&DAT_14ca31130);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f10520 FUN_142f10520 body=136 status=ok
// SIG undefined FUN_142f10520(void)

code * FUN_142f10520(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GuardBandScaleInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a800000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f105a8;
}



// FUNCTION 142f105a8 FUN_142f105a8 body=136 status=ok
// SIG undefined FUN_142f105a8(void)

code * FUN_142f105a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Threshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a400000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f10630;
}



// FUNCTION 142f10630 FUN_142f10630 body=136 status=ok
// SIG undefined FUN_142f10630(void)

code * FUN_142f10630(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelAreaInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f106b8;
}



// FUNCTION 142f106b8 FUN_142f106b8 body=136 status=ok
// SIG undefined FUN_142f106b8(void)

code * FUN_142f106b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19c00000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f10740;
}



// FUNCTION 142f10740 FUN_142f10740 body=136 status=ok
// SIG undefined FUN_142f10740(void)

code * FUN_142f10740(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f107c8;
}



// FUNCTION 142f107c8 FUN_142f107c8 body=136 status=ok
// SIG undefined FUN_142f107c8(void)

code * FUN_142f107c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f10850;
}



// FUNCTION 142f10850 FUN_142f10850 body=142 status=ok
// SIG undefined FUN_142f10850(void)

code * FUN_142f10850(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1200000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142f108de;
}



// FUNCTION 142f108de FUN_142f108de body=136 status=ok
// SIG undefined FUN_142f108de(void)

code * FUN_142f108de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f10966;
}



// FUNCTION 142f10966 FUN_142f10966 body=138 status=ok
// SIG undefined FUN_142f10966(void)

undefined1 * FUN_142f10966(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142f109f0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLensFlarePassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca31138;
  return &LAB_142f10bae;
}



// FUNCTION 142f109f0 FUN_142f109f0 body=445 status=ok
// SIG undefined FUN_142f109f0(void)

void FUN_142f109f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca311b8) {
    FUN_144b3d300(&DAT_14ca311b8);
    if (DAT_14ca311b8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f10bbe;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FLensFlarePassParameters";
      local_68 = 0;
      local_80 = 0x110;
      local_88 = 0x1d;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca31138,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f10bb1);
      _Init_thread_footer(&DAT_14ca311b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f10bbe FUN_142f10bbe body=136 status=ok
// SIG undefined FUN_142f10bbe(void)

code * FUN_142f10bbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f10c46;
}



// FUNCTION 142f10c46 FUN_142f10c46 body=130 status=ok
// SIG undefined FUN_142f10c46(void)

undefined1 * FUN_142f10c46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xd;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142f10cc8;
}



// FUNCTION 142f10ccc FUN_142f10ccc body=44 status=ok
// SIG undefined FUN_142f10ccc(void)

void FUN_142f10ccc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f10d04 FUN_142f10d04 body=96 status=ok
// SIG undefined FUN_142f10d04(void)

undefined8 FUN_142f10d04(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f10dfa();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca31308,1);
  return uVar3;
}



// FUNCTION 142f10d64 FUN_142f10d64 body=138 status=ok
// SIG undefined FUN_142f10d64(void)

void * FUN_142f10d64(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142f10dfa FUN_142f10dfa body=445 status=ok
// SIG undefined FUN_142f10dfa(void)

void FUN_142f10dfa(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31388) {
    FUN_144b3d300(&DAT_14ca31388);
    if (DAT_14ca31388 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f10fc4;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x51;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca31308,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f10fb8);
      _Init_thread_footer(&DAT_14ca31388);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f10fc4 FUN_142f10fc4 body=136 status=ok
// SIG undefined FUN_142f10fc4(void)

code * FUN_142f10fc4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BokehSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f1104c;
}



// FUNCTION 142f1104c FUN_142f1104c body=130 status=ok
// SIG undefined FUN_142f1104c(void)

undefined1 * FUN_142f1104c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BokehTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x52;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142f110ce;
}



// FUNCTION 142f110d2 FUN_142f110d2 body=44 status=ok
// SIG undefined FUN_142f110d2(void)

void FUN_142f110d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f1110a FUN_142f1110a body=96 status=ok
// SIG undefined FUN_142f1110a(void)

undefined8 FUN_142f1110a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f11200();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca314d8,1);
  return uVar3;
}



// FUNCTION 142f1116a FUN_142f1116a body=138 status=ok
// SIG undefined FUN_142f1116a(void)

void * FUN_142f1116a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142f11200 FUN_142f11200 body=445 status=ok
// SIG undefined FUN_142f11200(void)

void FUN_142f11200(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31558) {
    FUN_144b3d300(&DAT_14ca31558);
    if (DAT_14ca31558 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f113ca;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x130;
      local_88 = 0x5f;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca314d8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f113be);
      _Init_thread_footer(&DAT_14ca31558);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f113ca FUN_142f113ca body=136 status=ok
// SIG undefined FUN_142f113ca(void)

code * FUN_142f113ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FlareColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f11452;
}



// FUNCTION 142f11452 FUN_142f11452 body=136 status=ok
// SIG undefined FUN_142f11452(void)

code * FUN_142f11452(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142f114da;
}



// FUNCTION 142f114da FUN_142f114da body=138 status=ok
// SIG undefined FUN_142f114da(void)

undefined1 * FUN_142f114da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142f109f0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLensFlarePassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca31138;
  return &LAB_142f11564;
}



// FUNCTION 142f11568 FUN_142f11568 body=44 status=ok
// SIG undefined FUN_142f11568(void)

void FUN_142f11568(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f115a0 FUN_142f115a0 body=96 status=ok
// SIG undefined FUN_142f115a0(void)

undefined8 FUN_142f115a0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f11696();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca316a8,1);
  return uVar3;
}



// FUNCTION 142f11600 FUN_142f11600 body=138 status=ok
// SIG undefined FUN_142f11600(void)

void * FUN_142f11600(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142f11696 FUN_142f11696 body=445 status=ok
// SIG undefined FUN_142f11696(void)

void FUN_142f11696(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca31728) {
    FUN_144b3d300(&DAT_14ca31728);
    if (DAT_14ca31728 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142f11860;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x110;
      local_88 = 0x72;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca316a8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f11854);
      _Init_thread_footer(&DAT_14ca31728);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142f11860 FUN_142f11860 body=138 status=ok
// SIG undefined FUN_142f11860(void)

undefined1 * FUN_142f11860(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142f109f0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLensFlarePassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x73;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca31138;
  return &LAB_142f118ea;
}



// FUNCTION 142f118ee FUN_142f118ee body=44 status=ok
// SIG undefined FUN_142f118ee(void)

void FUN_142f118ee(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142f1193a FUN_142f1193a body=96 status=ok
// SIG undefined FUN_142f1193a(void)

undefined8 FUN_142f1193a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142f11a30();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca31878,1);
  return uVar3;
}



// FUNCTION 142f1199a FUN_142f1199a body=138 status=ok
// SIG undefined FUN_142f1199a(void)

void * FUN_142f1199a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}


