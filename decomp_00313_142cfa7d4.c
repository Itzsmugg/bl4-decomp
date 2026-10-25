// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142cfa7d4 FUN_142cfa7d4 body=1324 status=ok
// SIG undefined FUN_142cfa7d4(void)

void FUN_142cfa7d4(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142cfad02 FUN_142cfad02 body=38 status=ok
// SIG undefined FUN_142cfad02(void)

undefined8 FUN_142cfad02(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cfad28 FUN_142cfad28 body=403 status=ok
// SIG undefined FUN_142cfad28(void)

void FUN_142cfad28(longlong param_1,ulonglong *param_2)

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



// FUNCTION 142cfaebc FUN_142cfaebc body=1418 status=ok
// SIG undefined FUN_142cfaebc(void)

void FUN_142cfaebc(longlong param_1,ulonglong *param_2)

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
  FUN_145f7a090();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9ea180);
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



// FUNCTION 142cfb448 FUN_142cfb448 body=25 status=ok
// SIG undefined FUN_142cfb448(void)

void FUN_142cfb448(void)

{
  FUN_1411cad6c();
  FUN_14170c56a(&DAT_14c9e8fa8);
  return;
}



// FUNCTION 142cfb462 FUN_142cfb462 body=25 status=ok
// SIG undefined FUN_142cfb462(void)

void FUN_142cfb462(void)

{
  FUN_145f00780();
  FUN_14170c56a(&DAT_14c9e9140);
  return;
}



// FUNCTION 142cfb47c FUN_142cfb47c body=25 status=ok
// SIG undefined FUN_142cfb47c(void)

void FUN_142cfb47c(void)

{
  FUN_145dfa232();
  FUN_14170c56a(&DAT_14c9e91b0);
  return;
}



// FUNCTION 142cfb496 FUN_142cfb496 body=25 status=ok
// SIG undefined FUN_142cfb496(void)

void FUN_142cfb496(void)

{
  FUN_1459d290a();
  FUN_14170c56a(&DAT_14c9e9220);
  return;
}



// FUNCTION 142cfb4b0 FUN_142cfb4b0 body=25 status=ok
// SIG undefined FUN_142cfb4b0(void)

void FUN_142cfb4b0(void)

{
  FUN_14142e7bc();
  FUN_14170c56a(&DAT_14c9e9290);
  return;
}



// FUNCTION 142cfb4c9 FUN_142cfb4c9 body=22 status=ok
// SIG undefined FUN_142cfb4c9(void)

void FUN_142cfb4c9(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x30);
    return;
  }
  return;
}



// FUNCTION 142cfb4e0 FUN_142cfb4e0 body=99 status=ok
// SIG undefined FUN_142cfb4e0(void)

void FUN_142cfb4e0(longlong *param_1)

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



// FUNCTION 142cfb544 FUN_142cfb544 body=374 status=ok
// SIG undefined FUN_142cfb544(void)

void FUN_142cfb544(longlong param_1)

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
  local_2e = 0x100000004010700;
  local_26 = 4;
  local_22 = 0x10;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfb66b;
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
LAB_142cfb66b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfb6bc FUN_142cfb6bc body=374 status=ok
// SIG undefined FUN_142cfb6bc(void)

void FUN_142cfb6bc(longlong param_1)

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
  local_2e = 0x100000004010700;
  local_26 = 4;
  local_22 = 0x20;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfb7e3;
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
LAB_142cfb7e3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfb834 FUN_142cfb834 body=374 status=ok
// SIG undefined FUN_142cfb834(void)

void FUN_142cfb834(longlong param_1)

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
  local_2e = 0x100000004010700;
  local_26 = 4;
  local_22 = 0x40;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfb95b;
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
LAB_142cfb95b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfb9ac FUN_142cfb9ac body=374 status=ok
// SIG undefined FUN_142cfb9ac(void)

void FUN_142cfb9ac(longlong param_1)

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
  local_2e = 0x100000004010700;
  local_26 = 4;
  local_22 = 0x80;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfbad3;
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
LAB_142cfbad3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfbb24 FUN_142cfbb24 body=374 status=ok
// SIG undefined FUN_142cfbb24(void)

void FUN_142cfbb24(longlong param_1)

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
  local_2e = 0x100000004010300;
  local_26 = 4;
  local_22 = 0x10;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfbc4b;
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
LAB_142cfbc4b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfbc9c FUN_142cfbc9c body=374 status=ok
// SIG undefined FUN_142cfbc9c(void)

void FUN_142cfbc9c(longlong param_1)

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
  local_2e = 0x100000004010300;
  local_26 = 4;
  local_22 = 0x20;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfbdc3;
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
LAB_142cfbdc3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfbe14 FUN_142cfbe14 body=374 status=ok
// SIG undefined FUN_142cfbe14(void)

void FUN_142cfbe14(longlong param_1)

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
  local_2e = 0x100000004010300;
  local_26 = 4;
  local_22 = 0x40;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfbf3b;
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
LAB_142cfbf3b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfbf8c FUN_142cfbf8c body=374 status=ok
// SIG undefined FUN_142cfbf8c(void)

void FUN_142cfbf8c(longlong param_1)

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
  local_2e = 0x100000004010300;
  local_26 = 4;
  local_22 = 0x80;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142cfc0b3;
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
LAB_142cfc0b3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142cfc104 FUN_142cfc104 body=38 status=ok
// SIG undefined FUN_142cfc104(void)

undefined8 FUN_142cfc104(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cfc12a FUN_142cfc12a body=1699 status=ok
// SIG undefined FUN_142cfc12a(void)

void FUN_142cfc12a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char *local_180;
  undefined4 local_178;
  undefined4 local_170;
  longlong *local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  longlong local_148 [2];
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
  uint6 local_78;
  undefined2 uStack_72;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = (int)local_128;
  if ((longlong)(int)local_128 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar4 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar4 = uStack_130;
    }
    FUN_1446fe144(puVar10 + 2,(int)local_128,0);
    puVar7 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 2;
    }
    memcpy(puVar7,puVar4,(longlong)(int)local_128);
  }
  puVar10[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar10 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_120;
    }
    FUN_1446fe1b8(puVar10 + 5,iStack_d8,0);
    puVar7 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 5;
    }
    memcpy(puVar7,puVar4,(longlong)iStack_d8 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar10 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar10 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar10 + 0x84) = (undefined4)uStack_c4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_LAB_14a1e7fc8;
  lVar5 = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(float *)((longlong)puVar10 + 0x1c) = (float)iVar2;
  *(float *)(puVar10 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
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
  _local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  FUN_144b0e33a(param_2,&local_138);
  local_108 = DAT_14c9d57e8;
  local_e0 = 0;
  local_138 = DAT_14ca968c0;
  local_78 = (uint6)(uint5)local_78;
  uStack_100 = DAT_14c9c0db0;
  local_f8 = DAT_14c9c0d98;
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
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a37d348;
    puVar10[2] = lVar5;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x1c) = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1e0);
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
  FUN_145f8dbee();
  local_198 = (wchar_t *)uVar3;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1c0),&DAT_14c9ea7a0);
  lVar5 = *(longlong *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar8,lVar9,1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ea8a8) {
    FUN_144b3d300(&DAT_14c9ea8a8);
    if (DAT_14c9ea8a8 == -1) {
      FUN_141544322(local_148);
      local_150 = 0;
      local_160 = 0;
      local_180 = "Unknown";
      local_190 = 0;
      uStack_188 = 0;
      local_198 = L"FParameters";
      local_158 = 0;
      local_170 = 0x270;
      local_178 = 0x38c;
      local_168 = local_148;
      FUN_140b49562(&DAT_14c9ea828,0,1);
      if (local_148[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf48ad);
      _Init_thread_footer(&DAT_14c9ea8a8);
    }
  }
  local_198 = (wchar_t *)(lVar5 + 0x10);
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1d0),&DAT_14c9ea828);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar10 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar10 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar10 + 2) = 0;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar10 + 4;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x28);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar10 + 4;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a1fc200;
  puVar10[2] = 0x100000000;
  *(undefined4 *)(puVar10 + 3) = 1;
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cfc7da FUN_142cfc7da body=31 status=ok
// SIG undefined FUN_142cfc7da(void)

undefined8 FUN_142cfc7da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142cfc7fa FUN_142cfc7fa body=1091 status=ok
// SIG undefined FUN_142cfc7fa(void)

void FUN_142cfc7fa(longlong param_1,ulonglong *param_2)

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
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  byte local_e9;
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
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,local_e8);
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
  *(int *)(puVar16 + 4) = local_d8;
  if ((longlong)local_d8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = local_e8;
    if (local_e0 != (undefined1 *)0x0) {
      puVar14 = local_e0;
    }
    FUN_1446fe144(puVar16 + 2,local_d8,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar14,(longlong)local_d8);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_90;
    if (local_90 == (undefined1 *)0x0) {
      puVar14 = local_d0;
    }
    FUN_1446fe1b8(puVar16 + 5,local_88,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar14,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar16 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_74;
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  bVar2 = *(byte *)(param_1 + 0x250);
  lVar1 = param_1 + 0x1f8;
  iVar3 = *(int *)(param_1 + 0x1bc);
  uVar4 = *(undefined4 *)(param_1 + 0x1c0);
  local_e9 = *(byte *)(param_1 + 0x1c4);
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  uVar6 = *(undefined8 *)(param_1 + 0x1d8);
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
  FUN_141576fc6();
  local_148 = uVar5;
  FUN_1449cc26b(param_2,lVar10,*(undefined8 *)(param_1 + 0x238),&DAT_14c9eaad0);
  iVar12 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar8 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_140 = (float)iVar11;
  iVar15 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_128 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar15);
  local_130 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar11);
  local_118 = *(undefined8 *)(param_1 + 0x1e0);
  fVar17 = (float)iVar12;
  local_138 = (float)iVar15;
  local_120 = CONCAT44(iVar12,iVar8);
  local_100 = uVar4;
  if (((iVar3 == -1) || ((bVar2 & 2) == 0)) || ((local_e9 & 1) == 0)) {
    local_148 = CONCAT44(local_148._4_4_,fVar17);
    local_108 = CONCAT44(local_108._4_4_,1);
    local_110 = lVar1;
    FUN_140094833(param_2);
  }
  else {
    local_110 = CONCAT44(local_110._4_4_,iVar3);
    local_148 = CONCAT44(local_148._4_4_,fVar17);
    local_108 = lVar1;
    FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cfcc3e FUN_142cfcc3e body=4664 status=ok
// SIG undefined FUN_142cfcc3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfcc3e(void)

{
  char cVar1;
  ulonglong uVar2;
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
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14c9e7568);
  if (cVar1 == '\0') {
    _DAT_14c9e7568 = 0;
    uRam000000014c9e7570 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e7578,L"r.InstanceCulling.AllowBatchedBuildRenderingCommands",
                &DAT_14c760438,
                L"Whether to allow batching BuildRenderingCommands for GPU instance culling");
  atexit(FUN_142cdb93c);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_b8 = 0x120;
  FUN_14078dbce(&DAT_14c9e7588,L"r.InstanceCulling.OcclusionQueries",&local_a8,
                L"EXPERIMENTAL: Use per-instance software occlusion queries to perform less conservative visibility test than what\'s possible with HZB alone"
               );
  atexit(FUN_142cdb9da);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e75a0,L"r.InstanceCulling.UseLoadBalancer",&DAT_14c76043c,
                L"Prefer to use UseLoadBalancer");
  atexit(FUN_142cdba1f);
  local_a0 = FUN_145e84e86;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e76c8,&local_a8);
  local_a0 = FUN_145f2d934;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e77f0,&local_a8);
  local_a0 = FUN_145f91534;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e7918,&local_a8);
  _DAT_14c9e7930 = 0xffffffff;
  _DAT_14c9e7934 = 0x105;
  DAT_14c9e7936 = 0;
  DAT_14c9e7938 = 0;
  DAT_14c9e7940 = 0;
  DAT_14c9e7948 = 0;
  DAT_14c9e7928 = &PTR_FUN_14a2479c0;
  FUN_1462d6914();
  atexit(FUN_142cdba88);
  local_a0 = FUN_145f045f0;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e7a68,&local_a8);
  local_a0 = FUN_14604619c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e7b90,&local_a8);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e7ba0,L"r.LightFunctionAtlas",&local_a8,
                L"Enable the light function atlas generation at runtime. The atlas will only be generated if other systems are using it at runtime."
               );
  atexit(FUN_142cddb2a);
  local_a8._0_4_ = 0x80;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e7bb8,L"r.LightFunctionAtlas.SlotResolution",&local_a8,
                L"Experimental: The resolution of each atlas slot. If the resolution is too large for the target platforms, it will be reduced to fit."
               );
  atexit(FUN_142cddb6f);
  local_a8._0_4_ = 4;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e7bd0,L"r.LightFunctionAtlas.Size",&local_a8,
                L"Experimental: The default size (atlas slot count) for each dimension of the the 2D texture atlas. Maximum value is 16 since we only allow up to 16x16=256 light functions."
               );
  atexit(FUN_142cddbb4);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffffffff);
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e7be8,L"r.LightFunctionAtlas.MaxLightCount",&local_a8,
                L"Experimental: Clamp the number of lights that can sample light function atlas. -1 means unlimited light count."
               );
  atexit(FUN_142cddbf9);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14c9e7c00,L"r.VolumetricFog.LightFunction",&DAT_14c760440,
                L"This is an alias, please use r.VolumetricFog.UsesLightFunctionAtlas.");
  atexit(FUN_142cddc3e);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14c9e7c10,L"r.VolumetricFog.UsesLightFunctionAtlas",&DAT_14c760440,
                L"Whether the light function atlas is sampled when rendering local lights.");
  atexit(FUN_142cddc83);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e7c20,L"r.Deferred.UsesLightFunctionAtlas",&DAT_14c760444,
                L"Whether the light function atlas is sampled when rendering local lights.");
  atexit(FUN_142cddcc8);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e7c30,L"r.Lumen.UsesLightFunctionAtlas",&DAT_14c760448,
                L"Whether the light function atlas is sampled for lumen scene lighting.");
  atexit(FUN_142cddd0d);
  local_a0 = FUN_1449863e6;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9e7cc8,&local_a8);
  local_a0 = FUN_144a939cc;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14c9e7df0,&local_a8);
  local_a0 = FUN_145df9fd2;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14c9e7f40,&local_a8);
  local_a0 = FUN_145f002c6;
  local_a8 = (code *)&DAT_142bc70ae;
  FUN_1412df486(&DAT_14c9e8068,&local_a8);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14c9e80a8,L"r.Forward.LightGridPixelSize",&DAT_14c76044c,
                L"Size of a cell in the light grid, in pixels.");
  atexit(FUN_142cdf545);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14c9e80b8,L"r.Forward.LightGridSizeZ",&DAT_14c760450,
                L"Number of Z slices in the light grid.");
  atexit(FUN_142cdf58a);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e80d0,L"r.Forward.LightGridDebug",&DAT_14c9e80c8,
                L"Whether to display on screen culledlight per tile.\n 0: off (default)\n 1: on - showing light count onto the depth buffer\n 2: on - showing max light count per tile accoung for each slice but the last one (culling there is too conservative)\n 3: on - showing max light count per tile accoung for each slice and the last one \n"
               );
  atexit(FUN_142cdf5cf);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e80e0,L"r.Forward.LightGridDebug.MaxThreshold",&DAT_14c760454,
                L"Maximum light threshold for heat map visualization. (default = 8)\n");
  atexit(FUN_142cdf614);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14c9e80f0,L"r.Forward.LightGridHZBCull",&DAT_14c760458,
                L"Whether to use HZB culling to skip occluded grid cells.");
  atexit(FUN_142cdf659);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e8100,L"r.Forward.LightGridDebug.RectLightBounds",&DAT_14c76045c,
                L"Whether to refine rect light bounds (should only be disabled for debugging purposes)."
               );
  atexit(FUN_142cdf69e);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14c9e8110,L"r.Forward.MaxCulledLightsPerCell",&DAT_14c760460,
                L"Controls how much memory is allocated for each cell for light culling.  When r.Forward.LightLinkedListCulling is enabled, this is used to compute a global max instead of a per-cell limit on culled lights."
               );
  atexit(FUN_142cdf6e3);
  local_b8 = 0x60;
  FUN_141471170(&DAT_14c9e8120,L"r.Forward.LightLinkedListCulling",&DAT_14c760464,
                L"Uses a reverse linked list to store culled lights, removing the fixed limit on how many lights can affect a cell - it becomes a global limit instead."
               );
  atexit(FUN_142cdf728);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e8130,L"r.LightCulling.Quality",&DAT_14c760468,
                L"Whether to run compute light culling pass.\n 0: off \n 1: on (default)\n");
  atexit(FUN_142cdf76d);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e8140,L"r.LightCulling.WorkloadDistributionMode",&local_a8,
                L"0 - single thread per cell.\n1 - thread group per cell (64 threads).\n2 - thread group per cell (32 threads if supported, otherwise single thread).\n(This cvar only applies to fine light grid. When using two levels, coarse grid always uses thread group per cell."
               );
  atexit(FUN_142cdf7b2);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_b8 = 0x20;
  FUN_140bd5914(&DAT_14c9e8158,L"r.LightCulling.TwoLevel",&local_a8,
                L"Whether to build light grid in two passes.");
  atexit(FUN_142cdf7f7);
  local_a8._0_4_ = 0x80;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e8170,L"r.LightCulling.TwoLevel.Threshold",&local_a8,
                L"Threshold used to determine whether to use two level culling basedon the number of lights in view."
               );
  atexit(FUN_142cdf83c);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,2);
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e8188,L"r.LightCulling.TwoLevel.Exponent",&local_a8,
                L"Exponent used to derive the coarse grid size (base 2).");
  atexit(FUN_142cdf881);
  local_b8 = 0x20;
  FUN_1415c789c(&DAT_14c9e81a0,L"r.LightCulling.MaxDistanceOverrideKilometers",&DAT_14c76046c,
                L"Used to override the maximum far distance at which we can store data in the light grid.\n If this is increase, you might want to update r.Forward.LightGridSizeZ to a reasonable value according to your use case light count and distribution. <=0: off \n >0: the far distance in kilometers.\n"
               );
  atexit(FUN_142cdf8c6);
  local_a0 = FUN_144a12b9e;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9e8238,&local_a8);
  local_a0 = FUN_141594e82;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e8360,&local_a8);
  local_a0 = FUN_145f79e22;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e8490,&local_a8);
  local_a0 = FUN_141540f2c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e85b8,&local_a8);
  local_a0 = FUN_1461313aa;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e86e0,&local_a8);
  local_a0 = FUN_14602c442;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e8808,&local_a8);
  local_a0 = FUN_146131684;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e8930,&local_a8);
  local_a0 = FUN_14602c872;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e8a58,&local_a8);
  local_a0 = FUN_14613195e;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e8b80,&local_a8);
  local_a0 = FUN_14602cca2;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e8ca8,&local_a8);
  local_a0 = FUN_146131c38;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e8dd0,&local_a8);
  local_a0 = FUN_14602d0d2;
  local_a8 = (code *)&DAT_141535a92;
  FUN_1412df486(&DAT_14c9e8ef8,&local_a8);
  local_a0 = FUN_145fd5eb0;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9e8f90,&local_a8);
  DAT_14c9e8fa0 = 1;
  DAT_14c9e8fa4 = 1;
  _DAT_14ca11c20 = FUN_142ce708d;
  _DAT_14ca11e88 = 2;
  _DAT_14ca12058 = 0xffffffff;
  atexit((_func_5014 *)&LAB_142ce71ec);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_142cfb448;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9e9010,6,&local_a8);
  local_a0 = FUN_145fcb062;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9e90a0,&local_a8);
  _DAT_14c9e90f8 = 0xffffffff;
  DAT_14c9e90fc = 5;
  DAT_14c9e90fd = 1;
  DAT_14c9e90fe = 0;
  _DAT_14c9e9100 = 2;
  DAT_14c9e9108 = 0;
  uRam000000014c9e9110 = 0;
  DAT_14c9e90f0 = &PTR_FUN_14a247ef0;
  FUN_1462d6b2a();
  atexit(FUN_142ce7b74);
  _DAT_14c9e9120 = 0xffffffff;
  DAT_14c9e9124 = 5;
  DAT_14c9e9125 = 1;
  DAT_14c9e9126 = 0;
  _DAT_14c9e9128 = 2;
  DAT_14c9e9130 = 0;
  uRam000000014c9e9138 = 0;
  DAT_14c9e9118 = &PTR_FUN_14a247f50;
  FUN_1462d6bf2();
  atexit(FUN_142ce7ba3);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_142cfb462;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9e91a8,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_142cfb47c;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9e9218,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_142cfb496;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9e9288,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_142cfb4b0;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c9e92f8,6,&local_a8);
  local_a0 = FUN_1449dab10;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14c9e9388,&local_a8);
  local_b8 = 0;
  FUN_141471170(&DAT_14c9e9398,L"r.AllowDepthBoundsTest",&DAT_14c760470,
                L"If true, use enable depth bounds test when rendering deferred lights.");
  atexit(FUN_142ce7bde);
  local_b8 = 0;
  FUN_141471170(&DAT_14c9e93a8,L"r.AllowSimpleLights",&DAT_14c760474,
                L"If true, we allow simple (ie particle) lights");
  atexit(FUN_142ce7c23);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_b8 = 0x60;
  FUN_14078dbce(&DAT_14c9e93b8,L"r.RayTracing.Shadows",&local_a8,
                L"0: use traditional rasterized shadow map (default)\n1: use ray tracing shadows");
  atexit(FUN_142ce7c68);
  local_b8 = 0x20;
  FUN_141471170(&DAT_14c9e93d0,L"r.RayTracing.Shadows.SamplesPerPixel",&DAT_14c760478,
                L"Sets the samples-per-pixel for directional light occlusion (default = 1)");
  atexit(FUN_142ce7cad);
  local_a8._0_4_ = 2;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e93e0,L"r.Shadow.Denoiser",&local_a8,
                L"Choose the denoising algorithm.\n 0: Disabled (default);\n 1: Forces the default denoiser of the renderer;\n 2: GScreenSpaceDenoiser witch may be overriden by a third party plugin.\n"
               );
  atexit(FUN_142ce7cf2);
  local_a8._0_4_ = 4;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e93f8,L"r.Shadow.Denoiser.MaxBatchSize",&local_a8,
                L"Maximum number of shadow to denoise at the same time.");
  atexit(FUN_142ce7d37);
  local_a8._0_4_ = 8;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e9410,L"r.RayTracing.Shadows.MaxBatchSize",&local_a8,
                L"Maximum number of shadows to trace at the same time.");
  atexit(FUN_142ce7d7c);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e9428,L"r.AllowClearLightSceneExtentsOnly",&local_a8,&DAT_149dfb77a);
  atexit(FUN_142ce7dc1);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e9440,L"r.RayTracing.Shadows.Lights.Directional",&local_a8,
                L"Enables ray tracing shadows for directional lights (default = 1)");
  atexit(FUN_142ce7e06);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e9458,L"r.RayTracing.Shadows.Lights.Point",&local_a8,
                L"Enables ray tracing shadows for point lights (default = 1)");
  atexit(FUN_142ce7e4b);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e9470,L"r.RayTracing.Shadows.Lights.Spot",&local_a8,
                L"Enables ray tracing shadows for spot lights (default = 1)");
  atexit(FUN_142ce7e90);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e9488,L"r.RayTracing.Shadows.Lights.Rect",&local_a8,
                L"Enables ray tracing shadows for rect light (default = 1)");
  atexit(FUN_142ce7ed5);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e94a0,L"r.HairStrands.LightFunction",&local_a8,
                L"Enables Light function on hair");
  atexit(FUN_142ce7f1a);
  local_a8._0_4_ = 1;
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e94b8,L"r.Shadow.Virtual.OnePassProjection.SkipScreenShadowMask",&local_a8,
                L"Allows skipping the screen space shadow mask entirely when only a virtual shadow map would write into it.\nShould generally be left enabled outside of debugging."
               );
  atexit(FUN_142ce7f5f);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xbf800000);
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14c9e94d0,L"r.ContactShadows.OverrideLength",&local_a8,
                L"Allows overriding the contact shadow length for all directional lights.\nDisabled when < 0.\nShould generally be left disabled outside of debugging."
               );
  atexit(FUN_142ce7fa4);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_b8 = 0x20;
  FUN_140bd5914(&DAT_14c9e94e8,L"r.ContactShadows.OverrideLengthInWS",&local_a8,
                L"Whether r.ContactShadows.OverrideLength is in world space units or in screen space units."
               );
  atexit(FUN_142ce7fe9);
  local_a8._0_4_ = 0xbf800000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14c9e9500,L"r.ContactShadows.OverrideShadowCastingIntensity",&local_a8,
                L"Allows overriding the contact shadow casting intensity for all directional lights.\nDisabled when < 0.\nShould generally be left disabled outside of debugging."
               );
  atexit(FUN_142ce802e);
  local_a8._0_4_ = 0xbf800000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14c9e9518,L"r.ContactShadows.OverrideNonShadowCastingIntensity",&local_a8,
                L"Allows overriding the contact shadow non casting intensity for all directional lights.\nDisabled when < 0.\nShould generally be left disabled outside of debugging."
               );
  atexit(FUN_142ce8073);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,1);
  local_b8 = 0x20;
  FUN_14078dbce(&DAT_14c9e9530,L"r.HairStrands.Lighting.AllowOneTransmittancePass",&local_a8,
                L"Allows one transmittance pass for hair strands lighting to have better performance (experimental).\n"
               );
  atexit(FUN_142ce80b8);
  _DAT_14c9e9550 = 0xffffffff;
  DAT_14c9e9554 = 5;
  DAT_14c9e9555 = 1;
  DAT_14c9e9556 = 0;
  DAT_14c9e9558 = 0;
  DAT_14c9e9548 = &PTR_FUN_14a247fb0;
  FUN_1462d6cba();
  atexit(FUN_142ce80fd);
  DAT_14c9e9570 = 0xffffffff;
  DAT_14c9e9574 = 5;
  DAT_14c9e9575 = 1;
  DAT_14c9e9576 = 0;
  DAT_14c9e9578 = 0;
  DAT_14c9e9568 = &PTR_FUN_14a248010;
  FUN_1462d6d02();
  atexit(FUN_142ce812c);
  DAT_14c9e9588 = 0xffffffff;
  DAT_14c9e958c = 5;
  DAT_14c9e958d = 1;
  DAT_14c9e958e = 0;
  DAT_14c9e9590 = 0;
  DAT_14c9e9580 = &PTR_FUN_14a248080;
  FUN_1462d6d4a();
  atexit(FUN_142ce834c);
  DAT_14c9e95d8 = 0xffffffff;
  DAT_14c9e95dc = 5;
  DAT_14c9e95dd = 1;
  DAT_14c9e95de = 0;
  DAT_14c9e95e0 = 0;
  DAT_14c9e95d0 = &PTR_FUN_14a2480f0;
  FUN_1462d6d92();
  atexit(FUN_142ce843c);
  _DAT_14c9e95b8 = 0xffffffff;
  DAT_14c9e95bc = 5;
  DAT_14c9e95bd = 1;
  DAT_14c9e95be = 0;
  DAT_14c9e95c0 = 0;
  DAT_14c9e95b0 = &PTR_FUN_14a248120;
  FUN_1462d6dda();
  atexit(FUN_142ce852c);
  DAT_14c9ebd68 = 0xffffffff;
  DAT_14c9ebd6c = 5;
  DAT_14c9ebd6d = 1;
  DAT_14c9ebd6e = 0;
  DAT_14c9ebd70 = 0;
  DAT_14c9ebd60 = &PTR_FUN_14a248190;
  FUN_1462d6e22();
  atexit(FUN_142ce855b);
  _DAT_14c9ebd48 = 0xffffffff;
  DAT_14c9ebd4c = 5;
  DAT_14c9ebd4d = 1;
  DAT_14c9ebd4e = 0;
  DAT_14c9ebd50 = 0;
  DAT_14c9ebd40 = &PTR_FUN_14a2481c0;
  FUN_1462d6e6a();
  atexit(FUN_142ce864b);
  local_a0 = FUN_144a8d7ee;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e9708,&local_a8);
  local_a0 = FUN_1415a8118;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e9830,&local_a8);
  local_a0 = FUN_1471d2c7e;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e9958,&local_a8);
  local_a0 = FUN_145e707ae;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e9a80,&local_a8);
  local_a0 = FUN_141576ea4;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14c9e9ba8,&local_a8);
  uVar2 = (ulonglong)DAT_14c9ebd80;
  DAT_14c9e9bb8 = DAT_14c9ebd80;
  DAT_14c9ebd80 = DAT_14c9ebd80 + 1;
  (&DAT_14cafe3e0)[uVar2 * 2] = FUN_142cf2f55;
  (&DAT_14cafe3e8)[uVar2 * 2] = L"DeferredLightGlobalPSOCollector";
  atexit((_func_5014 *)&LAB_142cf41a7);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cfde78 FUN_142cfde78 body=69 status=ok
// SIG undefined FUN_142cfde78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfde78(void)

{
  _DAT_14c9ebd98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfdeba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebda0,1);
  return;
}



// FUNCTION 142cfdebd FUN_142cfdebd body=69 status=ok
// SIG undefined FUN_142cfdebd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfdebd(void)

{
  _DAT_14c9ebda8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfdeff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebdb0,1);
  return;
}



// FUNCTION 142cfdf02 FUN_142cfdf02 body=69 status=ok
// SIG undefined FUN_142cfdf02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfdf02(void)

{
  _DAT_14c9ebdb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfdf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebdc0,1);
  return;
}



// FUNCTION 142cfdf48 FUN_142cfdf48 body=405 status=ok
// SIG undefined FUN_142cfdf48(void)

undefined1 * FUN_142cfdf48(undefined1 *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)0x0;
  if (DAT_14c760484 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(param_2 + 0x1e8) != '\0';
  }
  *param_1 = bVar7;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(longlong *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x30) = (uint)*(byte *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  bVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x5c0))();
  uVar4 = (uint)bVar2 + (param_3 & 0xff) * 2 | *(uint *)(param_1 + 0xe4) & 0xfffffffc;
  *(uint *)(param_1 + 0xe4) = uVar4;
  *(uint *)(param_1 + 0xe4) =
       (uVar4 & 0xfffffffb) + (*(uint *)(*(longlong *)(param_2 + 8) + 0x378) & 1) * 4;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x37c);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x380);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 900);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x388);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa8))();
  param_1[0xfc] = uVar3;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xb0);
  if (lVar1 != 0) {
    plVar6 = *(longlong **)(lVar1 + 0x218);
  }
  uVar5 = (**(code **)(*plVar6 + 0x3e0))(plVar6);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  return param_1;
}



// FUNCTION 142cfe0de FUN_142cfe0de body=34 status=ok
// SIG undefined FUN_142cfe0de(void)

undefined4 FUN_142cfe0de(longlong param_1)

{
  undefined4 *puVar1;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x1d0) & 8) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0xe0);
  }
  else {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + 400);
  }
  return *puVar1;
}



// FUNCTION 142cfe100 FUN_142cfe100 body=946 status=ok
// SIG undefined FUN_142cfe100(void)

undefined8 FUN_142cfe100(longlong param_1,longlong param_2,longlong *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [136];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  plVar4 = *(longlong **)(param_1 + 0x28);
  lVar3 = plVar4[0x3d];
  uVar6 = 0;
  (**(code **)(*plVar4 + 0x78))(plVar4,&local_2f8,0);
  if ((*(byte *)(*(longlong *)(param_2 + 8) + 0x53) & 4) != 0) {
    iVar1 = FUN_144ab8e82();
    if ((char)lVar3 == '\x02' && iVar1 != 0) {
      lVar5 = (longlong)*(int *)(param_1 + 0x34) * 0x68;
      lVar3 = (longlong)*(int *)(*param_3 + 8 + lVar5);
      if ((0 < lVar3) &&
         (lVar3 = *(longlong *)(*(longlong *)(*param_3 + lVar5) + -8 + lVar3 * 8),
         (*(byte *)(lVar3 + 0x990) & 1) != 0)) {
        fVar7 = (float)FUN_140537afc(lVar3);
        pfVar2 = (float *)(lVar3 + 0x978);
        if (*(float **)(lVar3 + 0x980) != (float *)0x0) {
          pfVar2 = *(float **)(lVar3 + 0x980);
        }
        fVar9 = *pfVar2;
        fVar8 = (float)FUN_140537a92(lVar3);
        *param_4 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x164) * 7.0 + 1.0;
        param_4[1] = fVar9;
        param_4[2] = fVar8;
        param_4[3] = 1.0 / fVar7;
        FUN_14030f5be(lVar3,local_168,param_4 + 4,0);
        local_268 = 0x3ff0000000000000;
        local_260 = 0;
        uStack_258 = 0;
        local_250 = 0;
        uStack_248 = 0;
        local_240 = 0x3ff0000000000000;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0x3ff0000000000000;
        local_210 = 0;
        local_208 = local_2f8;
        uStack_204 = uStack_2f4;
        uStack_200 = uStack_2f0;
        uStack_1fc = uStack_2ec;
        local_1f8 = local_2e8;
        local_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_1e8,&local_268,local_168);
        param_4[8] = (float)local_1e8;
        param_4[9] = (float)local_1e0;
        param_4[10] = (float)local_1d8;
        param_4[0xb] = (float)local_1d0;
        param_4[0xc] = (float)local_1c8;
        param_4[0xd] = (float)local_1c0;
        param_4[0xe] = (float)local_1b8;
        param_4[0xf] = (float)local_1b0;
        param_4[0x10] = (float)local_1a8;
        param_4[0x11] = (float)local_1a0;
        param_4[0x12] = (float)local_198;
        param_4[0x13] = (float)local_190;
        param_4[0x14] = (float)local_188;
        param_4[0x15] = (float)local_180;
        param_4[0x16] = (float)local_178;
        param_4[0x17] = (float)local_170;
        fVar9 = 16384.0;
        fVar7 = 16384.0;
        if ((*(int *)(lVar3 + 0x99c) == -1) && (*(longlong *)(lVar3 + 0xb50) == 0)) {
          plVar4 = *(longlong **)(lVar3 + 0x28);
          if (plVar4 == (longlong *)0x0) {
            plVar4 = (longlong *)**(longlong **)(lVar3 + 0x18);
          }
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          fVar9 = (float)(int)*(undefined8 *)(lVar5 + 0x2c);
          fVar7 = (float)(int)((ulonglong)*(undefined8 *)(lVar5 + 0x2c) >> 0x20);
        }
        param_4[0x18] = fVar9;
        param_4[0x19] = fVar7;
        param_4[0x1a] = 1.0 / fVar9;
        param_4[0x1b] = 1.0 / fVar7;
        *(undefined8 *)(param_4 + 0x1c) = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 8);
        *(undefined8 *)(param_4 + 0x1e) = DAT_14c9c0d80;
        uVar6 = 1;
        goto LAB_142cfe1ee;
      }
    }
    uVar6 = 0;
  }
LAB_142cfe1ee:
  if ((local_e0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 142cfe4b3 FUN_142cfe4b3 body=69 status=ok
// SIG undefined FUN_142cfe4b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe4b3(void)

{
  _DAT_14c9ebdd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfe4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebde0,1);
  return;
}



// FUNCTION 142cfe4f8 FUN_142cfe4f8 body=69 status=ok
// SIG undefined FUN_142cfe4f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe4f8(void)

{
  _DAT_14c9ebde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfe53a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebdf0,1);
  return;
}



// FUNCTION 142cfe53d FUN_142cfe53d body=69 status=ok
// SIG undefined FUN_142cfe53d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe53d(void)

{
  _DAT_14c9ebdf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfe57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebe00,1);
  return;
}



// FUNCTION 142cfe582 FUN_142cfe582 body=69 status=ok
// SIG undefined FUN_142cfe582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe582(void)

{
  _DAT_14c9ebe08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfe5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebe10,1);
  return;
}



// FUNCTION 142cfe5c7 FUN_142cfe5c7 body=69 status=ok
// SIG undefined FUN_142cfe5c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe5c7(void)

{
  _DAT_14c9ebe18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfe609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebe20,1);
  return;
}



// FUNCTION 142cfe60c FUN_142cfe60c body=69 status=ok
// SIG undefined FUN_142cfe60c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe60c(void)

{
  _DAT_14c9ebe28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfe64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebe30,1);
  return;
}



// FUNCTION 142cfe651 FUN_142cfe651 body=69 status=ok
// SIG undefined FUN_142cfe651(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe651(void)

{
  _DAT_14c9ebe38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cfe693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ebe40,1);
  return;
}



// FUNCTION 142cfe696 FUN_142cfe696 body=188 status=ok
// SIG undefined FUN_142cfe696(void)

bool FUN_142cfe696(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_2[0x3d] == '\0') {
    local_58 = *(undefined4 *)(param_1 + 0x1048);
    uStack_54 = *(undefined4 *)(param_1 + 0x104c);
    uStack_50 = *(undefined4 *)(param_1 + 0x1050);
    uStack_4c = *(undefined4 *)(param_1 + 0x1054);
    local_48 = *(undefined8 *)(param_1 + 0x1058);
    (**(code **)(*param_2 + 0x98))(param_2,&local_38);
    bVar1 = 0.0 < (float)(local_28 * *(double *)(param_1 + 0xb08) +
                          local_30 * *(double *)(param_1 + 0xae8) +
                          local_38 * *(double *)(param_1 + 0xac8) + *(double *)(param_1 + 0xb28));
  }
  else {
    bVar1 = false;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cfe790 FUN_142cfe790 body=3386 status=ok
// SIG undefined FUN_142cfe790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142cfe790(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auStack_368 [32];
  wchar_t *local_348;
  wchar_t *local_340;
  ulonglong *local_338;
  longlong local_330;
  code *local_328;
  code *local_320;
  undefined1 *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  int local_2e0;
  undefined1 local_2d9;
  longlong local_2d8;
  ulonglong local_2d0;
  uint local_2c4;
  ulonglong local_2c0;
  ulonglong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  ulonglong *local_298;
  undefined4 local_28c;
  undefined4 local_288;
  int local_284;
  longlong *local_280;
  longlong local_278;
  undefined8 *local_270;
  longlong *local_268;
  uint *local_260;
  longlong local_258;
  longlong local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined8 local_238;
  longlong local_230;
  ulonglong local_228;
  longlong *local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8 [12];
  ulonglong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_124 [4];
  undefined1 local_120 [7];
  undefined1 local_119;
  longlong local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined2 local_73;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((DAT_14c76048c != 0) && ((*(byte *)(param_1 + 0xf1) & 0x80) != 0)) &&
     (uVar23 = 0, (*(byte *)(param_1 + 0xed) & 0x80) != 0)) {
    lVar18 = *(longlong *)(param_1 + 8);
    puVar19 = (uint *)(lVar18 + 0x3560);
    iVar6 = *(int *)(lVar18 + 0x3578);
    if (iVar6 == 0) {
      uVar22 = 1;
      local_2e0 = 0;
      iVar10 = 0;
    }
    else {
      puVar15 = *(uint **)(lVar18 + 0x3570);
      if (*(uint **)(lVar18 + 0x3570) == (uint *)0x0) {
        puVar15 = puVar19;
      }
      uVar25 = *puVar15;
      if (uVar25 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        local_2d8 = 0;
        uVar22 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar22 = 0;
        }
        uVar23 = 0;
        local_2e0 = 0;
        do {
          if (uVar22 == uVar23) goto LAB_142cff472;
          local_2e0 = local_2e0 + 0x20;
          uVar25 = puVar15[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar23 = 0;
        local_2e0 = 0;
      }
      uVar22 = (ulonglong)(-uVar25 & uVar25);
      uVar21 = uVar22 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar10 = (local_2e0 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar10) {
        iVar10 = iVar6;
      }
    }
    if (iVar10 < iVar6) {
      local_268 = (longlong *)(param_2 + 0x70);
      local_280 = (longlong *)(param_2 + 0x98);
      uVar25 = 0xffffffff;
      local_2d0 = local_2d0 & 0xffffffff00000000;
      local_2c0 = 0;
      local_2b8 = 0;
      local_2d8 = 0;
      local_2b0 = param_1;
      local_2a0 = param_2;
      local_278 = param_3;
      local_260 = puVar19;
      local_258 = lVar18;
      do {
        lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x3550) + 0x30 + (longlong)iVar10 * 0x40);
        plVar1 = *(longlong **)(lVar24 + 0x28);
        if ((char)plVar1[0x3d] == '\0') {
          local_230 = lVar24;
          cVar5 = (**(code **)(*plVar1 + 0x90))(plVar1,local_120,local_124);
          local_228 = uVar23;
          if ((cVar5 != '\0') && (0 < *(int *)(param_1 + 0x3f0))) {
            lVar18 = 0;
            lVar24 = 0;
            local_2c4 = uVar25;
            local_220 = plVar1;
            do {
              lVar2 = *(longlong *)(param_1 + 1000);
              lVar17 = lVar18 + lVar2;
              cVar5 = FUN_142cfe696(lVar17,local_220);
              param_1 = local_2b0;
              if (cVar5 != '\0') {
                local_298 = *(ulonglong **)(param_2 + 0x18);
                iVar6 = *(int *)(lVar2 + 0x1de0 + lVar18);
                local_284 = *(int *)((longlong)local_298 + 0x17c);
                if (local_284 != iVar6) {
                  *(int *)((longlong)local_298 + 0x17c) = iVar6;
                  puVar7 = (undefined8 *)(*local_298 + 7 & 0xfffffffffffffff8);
                  puVar8 = puVar7 + 3;
                  if ((undefined8 *)local_298[1] < puVar8) {
                    FUN_140023dd8(local_298,0x20);
                    puVar7 = (undefined8 *)(*local_298 + 7 & 0xfffffffffffffff8);
                    puVar8 = puVar7 + 3;
                  }
                  *local_298 = (ulonglong)puVar8;
                  *(int *)(local_298 + 0xc) = (int)local_298[0xc] + 1;
                  *(undefined8 **)local_298[6] = puVar7;
                  local_298[6] = (ulonglong)(puVar7 + 1);
                  uVar11 = *(undefined4 *)((longlong)local_298 + 0x17c);
                  puVar7[1] = 0;
                  *puVar7 = &PTR_FUN_14a1fb2c0;
                  *(undefined4 *)(puVar7 + 2) = uVar11;
                }
                local_138 = *(ulonglong *)(lVar2 + 0x30f8 + lVar18);
                uStack_130 = *(undefined8 *)(lVar2 + 0x3100 + lVar18);
                local_140 = *(undefined8 *)(local_278 + 0x20);
                iVar6 = DAT_14c760494;
                if (7 < DAT_14c760494) {
                  iVar6 = 8;
                }
                if (iVar6 < 2) {
                  iVar6 = 1;
                }
                uVar23 = (longlong)(iVar6 + (int)((ulonglong)uStack_130 >> 0x20) + -1) /
                         (longlong)iVar6;
                uVar21 = (longlong)(iVar6 + (int)uStack_130 + -1) / (longlong)iVar6;
                uStack_148 = uVar21 & 0xffffffff;
                if ((int)uVar21 < 2) {
                  uStack_148 = 1;
                }
                uVar21 = uVar23 & 0xffffffff;
                if ((int)uVar23 < 2) {
                  uVar21 = 1;
                }
                uStack_148 = uStack_148 | uVar21 << 0x20;
                local_150 = (longlong)
                            ((ulonglong)(uint)((int)local_138 >> 0x1f) << 0x20 |
                            local_138 & 0xffffffff) / (longlong)iVar6 & 0xffffffffU |
                            (longlong)
                            ((ulonglong)(uint)((longlong)local_138 >> 0x3f) << 0x20 |
                            local_138 >> 0x20) / (longlong)iVar6 << 0x20;
                uVar23 = (longlong)(iVar6 + (int)((ulonglong)local_140 >> 0x20) + -1) /
                         (longlong)iVar6;
                uVar21 = (longlong)(iVar6 + (int)local_140 + -1) / (longlong)iVar6;
                local_158 = uVar21 & 0xffffffff;
                if ((int)uVar21 < 2) {
                  local_158 = 1;
                }
                uVar21 = uVar23 & 0xffffffff;
                if ((int)uVar23 < 2) {
                  uVar21 = 1;
                }
                local_158 = local_158 | uVar21 << 0x20;
                local_348 = (wchar_t *)&local_158;
                FUN_1417676d4(local_1b8,lVar17,local_230,&local_140);
                lVar4 = local_2a0;
                if ((local_2d8 == 0) || (local_2c0 == local_2b8)) {
                  local_1d0 = local_158;
                  local_1c8 = (undefined4)local_150;
                  uStack_1c4 = local_150._4_4_;
                  uStack_1c0 = (undefined4)uStack_148;
                  uStack_1bc = uStack_148._4_4_;
                  FUN_1401f4073(&local_118,local_2a0,&local_1d0,L"LightShaftOcclusion");
                  local_2d8 = local_118;
                  local_2b8 = uStack_110;
                  local_2c0 = local_108;
                  uVar11 = (undefined4)local_100;
                  if (1 < *(int *)(local_2b0 + 0x3f0)) {
                    uVar11 = 2;
                  }
                  local_2d0 = CONCAT44(local_2d0._4_4_,uVar11);
                }
                else {
                  local_2b8 = local_150;
                  local_2c0 = uStack_148;
                }
                lVar16 = *(longlong *)(lVar2 + 0x10 + lVar18);
                local_330 = lVar16 + 0x17c0;
                if (lVar16 == 0) {
                  local_330 = 0;
                }
                local_200 = local_158;
                local_1f8 = local_150;
                local_1f0 = uStack_148;
                local_218 = local_140;
                local_210 = (undefined4)local_138;
                uStack_20c = local_138._4_4_;
                uStack_208 = (undefined4)uStack_130;
                uStack_204 = uStack_130._4_4_;
                local_348 = *(wchar_t **)(local_278 + 0x198);
                local_338 = &local_200;
                local_340 = (wchar_t *)&local_218;
                local_328 = (code *)((ulonglong)local_328 & 0xffffffff00000000);
                FUN_1448e8423(&local_1e8,lVar4,lVar17,local_1b8);
                plVar1 = local_268;
                local_2a8 = local_1e8;
                local_238 = local_1e0;
                local_240 = local_1d8;
                puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar8 = puVar7 + 0x30;
                if (*(undefined8 **)(lVar4 + 0x78) < puVar8) {
                  FUN_140023dd8(local_268,400);
                  puVar7 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
                  puVar8 = puVar7 + 0x30;
                }
                *(undefined8 **)(lVar4 + 0x70) = puVar8;
                *puVar7 = &PTR_FUN_14a255798;
                local_270 = puVar7 + 2;
                FUN_1471e7008();
                iVar6 = *(int *)(lVar4 + 0xa0);
                *(uint *)(lVar4 + 0xa0) = iVar6 + 1U;
                if (*(uint *)(lVar4 + 0xa4) < iVar6 + 1U) {
                  FUN_1448cfae8(local_280,iVar6);
                }
                lVar4 = local_2a8;
                lVar17 = local_2d8;
                *(undefined8 **)(*local_280 + (longlong)iVar6 * 8) = puVar7;
                puVar8 = local_1b8;
                puVar20 = local_270;
                for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                  *puVar20 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar20 = puVar20 + 1;
                }
                puVar7[0xe] = local_2a8;
                puVar7[0x10] = local_2d8;
                puVar7[0x11] = 0;
                *(char *)(puVar7 + 0x12) = (char)local_2d0;
                *(undefined1 *)((longlong)puVar7 + 0x91) = 0;
                *(undefined2 *)((longlong)puVar7 + 0x92) = 0xffff;
                uVar9 = *(undefined8 *)(lVar2 + 0x13818 + lVar18);
                FUN_145e9fc12();
                FUN_1448e935e(uVar9,&local_118,&DAT_14c9ec228,0);
                FUN_145e9fc12();
                lVar16 = local_118;
                local_2d0 = uStack_110;
                local_2a8 = *(undefined8 *)(lVar4 + 0x84);
                local_248 = *(ulonglong *)(lVar17 + 0x84);
                local_250 = (longlong)*(int *)(lVar2 + 0x3090 + lVar18);
                local_288 = *(undefined4 *)(lVar2 + 0x1dd4 + lVar18);
                local_28c = *(undefined4 *)(lVar2 + 0x3094 + lVar18);
                local_2d9 = (&DAT_00001de6)[lVar18 + lVar2];
                uVar9 = *(undefined8 *)
                         (&DAT_14ca8c1f0 +
                         (ulonglong)*(ushort *)(&DAT_14ca85070 + local_250 * 2) * 8);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca4b780) &&
                   (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
                  FUN_145e1a792();
                  local_300 = &LAB_14712ac08;
                  local_308 = &LAB_14712ac0c;
                  local_310 = &LAB_1472e3912;
                  local_318 = &LAB_1472e3916;
                  local_320 = FUN_1472e391a;
                  local_328 = FUN_1472e3942;
                  local_340 = L"ScreenPassVS";
                  local_348 = L"/Engine/Private/ScreenPass.usf";
                  local_2f0 = 0;
                  local_2f8 = 0xe0;
                  local_330 = CONCAT44(local_330._4_4_,1);
                  local_338 = (ulonglong *)((ulonglong)local_338 & 0xffffffff00000000);
                  FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
                  _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_1430179ee);
                  _Init_thread_footer(&DAT_14ca4b780);
                }
                FUN_1448e935e(uVar9,&local_118,&DAT_14ca4b6d8,0);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca4b780) &&
                   (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
                  FUN_145e1a792();
                  local_300 = &LAB_14712ac08;
                  local_308 = &LAB_14712ac0c;
                  local_310 = &LAB_1472e3912;
                  local_318 = &LAB_1472e3916;
                  local_320 = FUN_1472e391a;
                  local_328 = FUN_1472e3942;
                  local_340 = L"ScreenPassVS";
                  local_348 = L"/Engine/Private/ScreenPass.usf";
                  local_2f0 = 0;
                  local_2f8 = 0xe0;
                  local_330 = CONCAT44(local_330._4_4_,1);
                  local_338 = (ulonglong *)((ulonglong)local_338 & 0xffffffff00000000);
                  FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
                  _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_1430179ee);
                  _Init_thread_footer(&DAT_14ca4b780);
                }
                uVar23 = uStack_110;
                lVar17 = local_118;
                uVar3 = DAT_14c9c0d98;
                uVar9 = DAT_14c9c0d50;
                FUN_145e9fe80();
                puVar8 = local_270;
                local_118 = 0;
                uStack_110 = 0;
                FUN_1448f70da(lVar16,&DAT_14c9eff88,local_270,&local_118);
                local_118 = CONCAT44(local_288,(int)local_250);
                uStack_110 = CONCAT17(local_71,CONCAT25(local_73,CONCAT14(local_2d9,local_28c)));
                local_108 = local_248;
                local_100 = local_2b8;
                local_f8 = local_2c0;
                local_f0 = local_2a8;
                local_e8 = local_238;
                local_e0 = local_240;
                local_d8 = lVar17;
                uStack_d0 = uVar23;
                local_c8 = lVar16;
                local_c0 = local_2d0;
                local_b8 = uVar9;
                local_b0 = uVar3;
                local_a8 = DAT_14ca94df8;
                local_a0 = 0;
                local_98 = lVar16;
                local_90 = local_2d0;
                local_88 = puVar8;
                local_80 = 0;
                FUN_145e9fe80();
                param_2 = local_2a0;
                uVar9 = FUN_1471e70b6(local_2a0,&local_119,puVar8,&local_118);
                param_1 = local_2b0;
                uVar25 = local_2c4;
                local_2d0 = CONCAT44(local_2d0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1))
                ;
                if (*(int *)((longlong)local_298 + 0x17c) != local_284) {
                  *(int *)((longlong)local_298 + 0x17c) = local_284;
                  puVar7 = (undefined8 *)(*local_298 + 7 & 0xfffffffffffffff8);
                  puVar8 = puVar7 + 3;
                  if ((undefined8 *)local_298[1] < puVar8) {
                    FUN_140023dd8(local_298,0x20);
                    puVar7 = (undefined8 *)(*local_298 + 7 & 0xfffffffffffffff8);
                    puVar8 = puVar7 + 3;
                  }
                  *local_298 = (ulonglong)puVar8;
                  *(int *)(local_298 + 0xc) = (int)local_298[0xc] + 1;
                  *(undefined8 **)local_298[6] = puVar7;
                  local_298[6] = (ulonglong)(puVar7 + 1);
                  uVar11 = *(undefined4 *)((longlong)local_298 + 0x17c);
                  puVar7[1] = 0;
                  *puVar7 = &PTR_FUN_14a1fb2c0;
                  *(undefined4 *)(puVar7 + 2) = uVar11;
                }
              }
              lVar24 = lVar24 + 1;
              lVar18 = lVar18 + 0x13c10;
            } while (lVar24 < *(int *)(param_1 + 0x3f0));
          }
          iVar6 = *(int *)(local_258 + 0x3578);
          puVar19 = local_260;
          lVar18 = local_258;
          uVar23 = local_228;
        }
        uVar25 = uVar25 & ~(uint)uVar22;
        puVar15 = *(uint **)(lVar18 + 0x3570);
        if (*(uint **)(lVar18 + 0x3570) == (uint *)0x0) {
          puVar15 = puVar19;
        }
        iVar10 = (int)uVar23;
        lVar24 = (longlong)iVar10;
        uVar12 = puVar15[lVar24] & uVar25;
        if (uVar12 == 0) {
          iVar13 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar13 = iVar6 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar14 = iVar13;
          if (iVar13 < iVar10) {
            iVar14 = iVar10;
          }
          if (iVar13 <= iVar10) break;
          local_2e0 = local_2e0 + 0x20;
          lVar17 = 0;
          while (uVar12 = puVar15[lVar24 + lVar17 + 1], uVar12 == 0) {
            local_2e0 = local_2e0 + 0x20;
            lVar17 = lVar17 + 1;
            if (iVar14 - lVar24 == lVar17) goto LAB_142cff472;
          }
          uVar23 = (ulonglong)(iVar10 + (int)lVar17 + 1);
          uVar25 = 0xffffffff;
        }
        uVar22 = (ulonglong)(-uVar12 & uVar12);
        uVar21 = uVar22 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar10 = (local_2e0 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar6);
      goto LAB_142cff472;
    }
  }
  local_2d8 = 0;
LAB_142cff472:
  if ((local_70 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return local_2d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142cff4cc FUN_142cff4cc body=4827 status=ok
// SIG undefined FUN_142cff4cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cff4cc(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  byte bVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  ulonglong uVar29;
  int iVar30;
  float fVar31;
  undefined1 auStack_368 [32];
  wchar_t *local_348;
  wchar_t *local_340;
  ulonglong *local_338;
  undefined8 *local_330;
  code *local_328;
  code *local_320;
  undefined1 *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  undefined1 *local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e5;
  int local_2e4;
  longlong local_2e0;
  undefined4 local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  uint local_2bc;
  ulonglong local_2b8;
  ulonglong *local_2b0;
  ulonglong local_2a8;
  ulonglong *local_2a0;
  longlong local_298;
  undefined4 local_290;
  int local_28c;
  longlong local_288;
  longlong *local_280;
  longlong local_278;
  undefined8 local_270;
  longlong *local_268;
  longlong local_260;
  longlong local_258;
  uint *local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  ulonglong local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong *local_210;
  undefined8 **local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  longlong local_188 [13];
  ulonglong local_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e9;
  longlong *local_e8;
  undefined8 **ppuStack_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined3 uStack_cc;
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  int local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_288 = param_4;
  if (((DAT_14c76048c == 0) || ((*(byte *)(param_1 + 0xf1) & 0x80) == 0)) ||
     ((*(byte *)(param_1 + 0xed) & 0x80) == 0)) goto LAB_142d006ea;
  local_a8 = *(int *)(param_1 + 0x3f0);
  local_b0 = (undefined1 *)0x0;
  local_a4 = 0x20;
  uVar26 = local_a8 + 0x1f;
  local_2d0 = param_2;
  if (0x1f < uVar26) {
    if (uVar26 < 0x40) {
      puVar13 = local_c0;
      if (local_c0 == (undefined1 *)0x0) {
        puVar13 = local_c8;
      }
LAB_142cff5ab:
      uVar26 = uVar26 >> 3 & 0xfffffffc;
    }
    else {
      FUN_1471e7396(local_c8);
      local_a4 = uVar26 & 0xffffffe0;
      puVar13 = local_b0;
      if (local_b0 == (undefined1 *)0x0) {
        puVar13 = local_c0;
      }
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = local_c8;
      }
      if (uVar26 < 0x120) goto LAB_142cff5ab;
      uVar26 = (uVar26 >> 5) << 2;
    }
    memset(puVar13,0,(ulonglong)uVar26);
    iVar30 = local_a8 + 0x1f;
    if (-1 < local_a8) {
      iVar30 = local_a8;
    }
    if (local_a8 % 0x20 != 0) {
      puVar13 = local_c0;
      if (local_b0 != (undefined1 *)0x0) {
        puVar13 = local_b0;
      }
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = local_c8;
      }
      bVar17 = -(char)(local_a8 % 0x20);
      *(uint *)(puVar13 + (longlong)(iVar30 >> 5) * 4) =
           (uint)(*(int *)(puVar13 + (longlong)(iVar30 >> 5) * 4) << (bVar17 & 0x1f)) >>
           (bVar17 & 0x1f);
    }
  }
  lVar22 = *(longlong *)(param_1 + 8);
  local_250 = (uint *)(lVar22 + 0x3560);
  iVar30 = *(int *)(lVar22 + 0x3578);
  if (iVar30 == 0) {
    uVar23 = 0;
    local_2a8 = 1;
    local_2e4 = 0;
    iVar9 = 0;
  }
  else {
    puVar12 = *(uint **)(lVar22 + 0x3570);
    if (*(uint **)(lVar22 + 0x3570) == (uint *)0x0) {
      puVar12 = local_250;
    }
    uVar26 = *puVar12;
    if (uVar26 == 0) {
      iVar9 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar9 = iVar30 + -1;
      }
      uVar23 = 0;
      uVar24 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar24 = uVar23;
      }
      local_2e4 = 0;
      do {
        if (uVar24 == uVar23) goto LAB_142d006dd;
        local_2e4 = local_2e4 + 0x20;
        uVar26 = puVar12[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar23 = 0;
      local_2e4 = 0;
    }
    local_2a8 = (ulonglong)(-uVar26 & uVar26);
    uVar24 = local_2a8 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (local_2e4 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar30 <= iVar9) {
      iVar9 = iVar30;
    }
  }
  if (iVar9 < iVar30) {
    local_258 = param_1 + 0xe78;
    local_2b0 = (ulonglong *)(local_2d0 + 0x70);
    local_280 = (longlong *)(local_2d0 + 0x98);
    local_260 = local_2d0 + 0x168;
    uVar26 = 0xffffffff;
    lVar15 = local_2d0;
    local_248 = lVar22;
    local_240 = param_1;
    local_238 = param_3;
    do {
      local_278 = *(longlong *)(*(longlong *)(lVar22 + 0x3550) + 0x30 + (longlong)iVar9 * 0x40);
      if (((*(byte *)(local_278 + 0xe4) & 4) != 0) && (0 < *(int *)(param_1 + 0x3f0))) {
        local_298 = *(longlong *)(local_278 + 0x28);
        lVar27 = 0;
        uVar24 = 0;
        bVar17 = 0;
        local_2bc = uVar26;
        do {
          bVar8 = FUN_142cfe696(*(longlong *)(param_1 + 1000) + lVar27,local_298);
          uVar26 = local_2bc;
          uVar20 = 1 << ((byte)uVar24 & 0x1f);
          puVar13 = local_b0;
          if (local_b0 == (undefined1 *)0x0) {
            puVar13 = local_c0;
          }
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = local_c8;
          }
          uVar29 = uVar24 >> 5 & 0x7ffffff;
          if (bVar8 == 0) {
            uVar20 = ~uVar20 & *(uint *)(puVar13 + uVar29 * 4);
          }
          else {
            uVar20 = uVar20 | *(uint *)(puVar13 + uVar29 * 4);
          }
          *(uint *)(puVar13 + uVar29 * 4) = uVar20;
          bVar17 = bVar17 | bVar8;
          uVar24 = uVar24 + 1;
          iVar30 = *(int *)(param_1 + 0x3f0);
          lVar27 = lVar27 + 0x13c10;
        } while ((longlong)uVar24 < (longlong)iVar30);
        if ((bVar17 & 1) != 0) {
          local_2e0 = *(longlong *)(param_3 + 0x1b0);
          local_2e5 = 1;
          local_2d4 = 0;
          if ((*(char *)(param_1 + 0x248) == '\x01') && (DAT_14c9f21d4 != 0)) {
            lVar27 = *(longlong *)(local_288 + 0x10e0);
            if (*(longlong *)(local_288 + 0x10e0) == 0) {
              lVar27 = local_288;
            }
            if ((*(int *)(lVar27 + 0x94) < *(int *)(lVar27 + 0x9c)) &&
               (*(int *)(lVar27 + 0x98) < *(int *)(lVar27 + 0xa0))) {
              local_2e0 = *(longlong *)(lVar27 + 0xa8);
              local_2c8 = *(longlong *)(lVar27 + 0xb0);
              local_2e5 = 1;
              local_2d4 = 0;
            }
            else {
              local_340 = (wchar_t *)CONCAT62(local_340._2_6_,*(undefined2 *)(param_1 + 0x8a8));
              local_348 = (wchar_t *)((ulonglong)local_348 & 0xffffffffffffff00);
              plVar18 = local_188;
              FUN_140041409(plVar18,lVar15,2,local_258);
              local_2e0 = local_188[0];
              local_2c8 = local_188[1];
              iVar30 = *(int *)(param_1 + 0x3f0);
              local_2e5 = 2;
              local_2d4 = (undefined4)CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
            }
            fVar31 = *(float *)(param_1 + 0xe80);
          }
          else {
            fVar31 = 1.0;
            local_2c8 = local_2e0;
          }
          if (0 < iVar30) {
            uVar24 = 0;
            local_230 = uVar23;
            do {
              puVar13 = local_b0;
              if (local_b0 == (undefined1 *)0x0) {
                puVar13 = local_c0;
              }
              if (puVar13 == (undefined1 *)0x0) {
                puVar13 = local_c8;
              }
              if ((*(uint *)(puVar13 + (uVar24 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar24 & 0x1f) & 1)
                  != 0) {
                lVar22 = uVar24 * 0x13c10 + *(longlong *)(param_1 + 1000);
                local_2a0 = *(ulonglong **)(lVar15 + 0x18);
                local_28c = *(int *)((longlong)local_2a0 + 0x17c);
                if (local_28c != *(int *)(lVar22 + 0x1de0)) {
                  *(int *)((longlong)local_2a0 + 0x17c) = *(int *)(lVar22 + 0x1de0);
                  puVar14 = (undefined8 *)(*local_2a0 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar14 + 3;
                  if ((undefined8 *)local_2a0[1] < puVar16) {
                    FUN_140023dd8(local_2a0,0x20);
                    puVar14 = (undefined8 *)(*local_2a0 + 7 & 0xfffffffffffffff8);
                    puVar16 = puVar14 + 3;
                  }
                  *local_2a0 = (ulonglong)puVar16;
                  *(int *)(local_2a0 + 0xc) = (int)local_2a0[0xc] + 1;
                  *(undefined8 **)local_2a0[6] = puVar14;
                  local_2a0[6] = (ulonglong)(puVar14 + 1);
                  uVar3 = *(undefined4 *)((longlong)local_2a0 + 0x17c);
                  puVar14[1] = 0;
                  *puVar14 = &PTR_FUN_14a1fb2c0;
                  *(undefined4 *)(puVar14 + 2) = uVar3;
                }
                local_100 = *(ulonglong *)(lVar22 + 0x30f8);
                uStack_f8 = *(undefined8 *)(lVar22 + 0x3100);
                local_108 = *(undefined8 *)(param_3 + 0x20);
                iVar30 = DAT_14c760494;
                if (7 < DAT_14c760494) {
                  iVar30 = 8;
                }
                if (iVar30 < 2) {
                  iVar30 = 1;
                }
                uVar23 = (longlong)(iVar30 + (int)((ulonglong)uStack_f8 >> 0x20) + -1) /
                         (longlong)iVar30;
                uVar29 = (longlong)(iVar30 + (int)uStack_f8 + -1) / (longlong)iVar30;
                uStack_110 = uVar29 & 0xffffffff;
                if ((int)uVar29 < 2) {
                  uStack_110 = 1;
                }
                uVar29 = uVar23 & 0xffffffff;
                if ((int)uVar23 < 2) {
                  uVar29 = 1;
                }
                uStack_110 = uStack_110 | uVar29 << 0x20;
                local_118 = (longlong)
                            ((ulonglong)(uint)((int)local_100 >> 0x1f) << 0x20 |
                            local_100 & 0xffffffff) / (longlong)iVar30 & 0xffffffffU |
                            (longlong)
                            ((ulonglong)(uint)((longlong)local_100 >> 0x3f) << 0x20 |
                            local_100 >> 0x20) / (longlong)iVar30 << 0x20;
                uVar23 = (longlong)(iVar30 + (int)((ulonglong)local_108 >> 0x20) + -1) /
                         (longlong)iVar30;
                uVar29 = (longlong)(iVar30 + (int)local_108 + -1) / (longlong)iVar30;
                local_120 = uVar29 & 0xffffffff;
                if ((int)uVar29 < 2) {
                  local_120 = 1;
                }
                uVar29 = uVar23 & 0xffffffff;
                if ((int)uVar23 < 2) {
                  uVar29 = 1;
                }
                local_120 = local_120 | uVar29 << 0x20;
                uVar26 = (uint)((float)(int)*(undefined8 *)(lVar22 + 0x3100) * fVar31);
                uVar20 = (uint)((float)(int)((ulonglong)*(undefined8 *)(lVar22 + 0x3100) >> 0x20) *
                               fVar31);
                uVar5 = *(undefined8 *)(lVar22 + 0x30f8);
                if ((int)uVar26 < 2) {
                  uVar26 = 1;
                }
                local_2b8 = (ulonglong)uVar26;
                if ((int)uVar20 < 2) {
                  uVar20 = 1;
                }
                uVar6 = *(undefined8 *)(local_2e0 + 0x84);
                local_348 = (wchar_t *)&local_120;
                local_1e0 = uVar24;
                FUN_1417676d4(local_188,lVar22,local_278,&local_108);
                local_190 = (undefined8 *)0x0;
                lVar27 = *(longlong *)(lVar22 + 0x10);
                local_1e8 = uVar6;
                if (lVar27 != 0) {
                  if (*(int *)(lVar27 + 0x17f8) != *(int *)(lVar27 + 0x1824)) {
                    uVar23 = *(ulonglong *)(local_298 + 8);
                    uVar26 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
                    uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                    lVar21 = lVar27 + 0x1828;
                    if (*(longlong *)(lVar27 + 0x1830) != 0) {
                      lVar21 = *(longlong *)(lVar27 + 0x1830);
                    }
                    iVar30 = *(int *)(lVar21 + (ulonglong)
                                               (*(int *)(lVar27 + 0x1838) - 1U &
                                               (uVar26 >> 0x10 ^ uVar26)) * 4);
                    if (iVar30 != -1) {
                      do {
                        puVar1 = (ulonglong *)
                                 (*(longlong *)(lVar27 + 0x17f0) + (longlong)iVar30 * 0x18);
                        if (*puVar1 == uVar23) {
                          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                            local_190 = (undefined8 *)puVar1[1];
                            goto LAB_142cffd05;
                          }
                          break;
                        }
                        iVar30 = (int)puVar1[2];
                      } while (iVar30 != -1);
                    }
                  }
                  local_190 = (undefined8 *)FUN_14001cc68(0x30,0x10);
                  *local_190 = 0;
                  local_190[1] = 0;
                  local_190[3] = 0;
                  local_190[4] = 0;
                  *(undefined4 *)(local_190 + 5) = 0;
                  local_1a8 = *(longlong *)(local_298 + 8);
                  local_e8 = &local_1a8;
                  ppuStack_e0 = &local_190;
                  FUN_14610f5ae((longlong *)(lVar27 + 0x17f0),&local_d0,&local_e8);
                }
LAB_142cffd05:
                local_1c0 = local_120;
                local_1b8 = local_118;
                uStack_1b0 = uStack_110;
                local_1d8 = local_108;
                local_1d0 = (undefined4)local_100;
                uStack_1cc = local_100._4_4_;
                uStack_1c8 = (undefined4)uStack_f8;
                uStack_1c4 = uStack_f8._4_4_;
                local_348 = *(wchar_t **)(param_3 + 0x198);
                local_338 = &local_1c0;
                local_340 = (wchar_t *)&local_1d8;
                local_328 = (code *)CONCAT44(local_328._4_4_,1);
                local_330 = local_190;
                FUN_1448e8423(&local_1a8,lVar15,lVar22,local_188);
                lVar27 = local_1a8;
                puVar1 = local_2b0;
                local_1f8 = local_1a0;
                local_200 = local_198;
                puVar14 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar16 = puVar14 + 0x30;
                if (*(undefined8 **)(lVar15 + 0x78) < puVar16) {
                  FUN_140023dd8(local_2b0,400);
                  puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar16 = puVar14 + 0x30;
                }
                iVar9 = (int)((float)(int)uVar5 * fVar31);
                iVar30 = (int)((float)(int)((ulonglong)uVar5 >> 0x20) * fVar31);
                local_1f0 = ((ulonglong)uVar20 << 0x20) + local_2b8;
                local_270 = CONCAT44(iVar30,iVar9);
                *local_2b0 = (ulonglong)puVar16;
                *puVar14 = &PTR_FUN_14a2557b8;
                plVar18 = puVar14 + 2;
                puVar14[2] = 0;
                *(undefined1 *)(puVar14 + 3) = 1;
                puVar14[4] = 0;
                puVar14[5] = 0x3f80000000000000;
                puVar14[6] = 0;
                puVar14[7] = 0x3f80000000000000;
                puVar14[8] = 0;
                puVar14[9] = 0x3f80000000000000;
                puVar14[10] = 0;
                puVar14[0xb] = 0x3f80000000000000;
                puVar14[0xe] = 0;
                lVar15 = 0x92;
                do {
                  puVar16 = (undefined8 *)((longlong)puVar14 + lVar15 + -0x12);
                  *puVar16 = 0;
                  puVar16[1] = 0;
                  *(undefined4 *)((longlong)puVar14 + lVar15 + -2) = 0xffff0000;
                  lVar15 = lVar15 + 0x18;
                } while (lVar15 != 0x152);
                *(undefined4 *)((longlong)puVar14 + 0x154) = 0;
                puVar14[0x28] = 0;
                puVar14[0x29] = 0;
                *(undefined2 *)(puVar14 + 0x2a) = 0;
                *(undefined4 *)(puVar14 + 0x2b) = 0xffffffff;
                *(undefined4 *)((longlong)puVar14 + 0x15c) = 0xffffffff;
                *(undefined4 *)(puVar14 + 0x2c) = 0xffffffff;
                *(undefined4 *)((longlong)puVar14 + 0x164) = 0xffffffff;
                *(undefined4 *)(puVar14 + 0x2d) = 0;
                *(undefined2 *)((longlong)puVar14 + 0x16c) = 0;
                puVar14[0x2e] = 0;
                iVar10 = *(int *)(local_2d0 + 0xa0);
                *(uint *)(local_2d0 + 0xa0) = iVar10 + 1U;
                if (*(uint *)(local_2d0 + 0xa4) < iVar10 + 1U) {
                  FUN_1448cfae8(local_280,iVar10);
                }
                *(undefined8 **)(*local_280 + (longlong)iVar10 * 8) = puVar14;
                plVar25 = local_188;
                plVar28 = plVar18;
                for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                  *plVar28 = *plVar25;
                  plVar25 = plVar25 + 1;
                  plVar28 = plVar28 + 1;
                }
                puVar14[0xe] = lVar27;
                puVar14[0x10] = local_2e0;
                puVar14[0x11] = local_2c8;
                *(undefined1 *)(puVar14 + 0x12) = local_2e5;
                *(undefined1 *)((longlong)puVar14 + 0x91) = 0;
                *(undefined2 *)((longlong)puVar14 + 0x92) = 0xffff;
                *(int *)(puVar14 + 0x2b) = iVar9;
                *(int *)((longlong)puVar14 + 0x15c) = iVar30;
                *(int *)(puVar14 + 0x2c) = (int)local_2b8;
                *(uint *)((longlong)puVar14 + 0x164) = uVar20;
                local_2b8 = *(undefined8 *)(lVar27 + 0x84);
                uVar5 = *(undefined8 *)(lVar22 + 0x13818);
                local_268 = plVar18;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca4b780) &&
                   (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
                  FUN_145e1a792();
                  local_300 = &LAB_14712ac08;
                  local_308 = &LAB_14712ac0c;
                  local_310 = &LAB_1472e3912;
                  local_318 = &LAB_1472e3916;
                  local_320 = FUN_1472e391a;
                  local_328 = FUN_1472e3942;
                  local_340 = L"ScreenPassVS";
                  local_348 = L"/Engine/Private/ScreenPass.usf";
                  local_2f0 = 0;
                  local_2f8 = 0xe0;
                  local_330 = (undefined8 *)CONCAT44(local_330._4_4_,1);
                  local_338 = (ulonglong *)((ulonglong)local_338 & 0xffffffff00000000);
                  FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
                  _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_1430179ee);
                  _Init_thread_footer(&DAT_14ca4b780);
                }
                FUN_1448e935e(uVar5,&local_e8,&DAT_14ca4b6d8,0);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14ca4b780) &&
                   (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
                  FUN_145e1a792();
                  local_300 = &LAB_14712ac08;
                  local_308 = &LAB_14712ac0c;
                  local_310 = &LAB_1472e3912;
                  local_318 = &LAB_1472e3916;
                  local_320 = FUN_1472e391a;
                  local_328 = FUN_1472e3942;
                  local_340 = L"ScreenPassVS";
                  local_348 = L"/Engine/Private/ScreenPass.usf";
                  local_2f0 = 0;
                  local_2f8 = 0xe0;
                  local_330 = (undefined8 *)CONCAT44(local_330._4_4_,1);
                  local_338 = (ulonglong *)((ulonglong)local_338 & 0xffffffff00000000);
                  FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
                  _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
                  atexit((_func_5014 *)&LAB_1430179ee);
                  _Init_thread_footer(&DAT_14ca4b780);
                }
                local_210 = local_e8;
                local_208 = ppuStack_e0;
                uVar5 = *(undefined8 *)(lVar22 + 0x13818);
                FUN_141579c68();
                FUN_1448e935e(uVar5,&local_e8,&DAT_14c9ec350,0);
                FUN_141579c68();
                ppuVar7 = ppuStack_e0;
                plVar25 = local_e8;
                local_218 = DAT_14c9e72f8;
                local_290 = *(undefined4 *)(lVar22 + 0x3090);
                uVar3 = *(undefined4 *)(lVar22 + 0x1dd4);
                uVar4 = *(undefined4 *)(lVar22 + 0x3094);
                uVar2 = (&DAT_00001de6)[lVar22];
                local_220 = DAT_14c9c0d98;
                FUN_141579d8a();
                plVar18 = local_268;
                local_e8 = (longlong *)0x0;
                ppuStack_e0 = (undefined8 **)0x0;
                FUN_1448f70da(plVar25,&DAT_14c9f0010,local_268,&local_e8);
                local_228 = DAT_14ca94df8;
                FUN_141579d8a();
                lVar22 = local_2d0;
                FUN_140069376(local_2d0);
                puVar1 = local_2b0;
                puVar14 = (undefined8 *)(*(longlong *)(lVar22 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar16 = puVar14 + 0x4b;
                if (*(undefined8 **)(lVar22 + 0x78) < puVar16) {
                  FUN_140023dd8(local_2b0,0x260);
                  puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar14 + 0x4b;
                }
                lVar27 = local_1f0;
                *local_2b0 = (ulonglong)puVar16;
                local_e8 = plVar18;
                ppuStack_e0 = DAT_14c9f0058;
                if (DAT_14c9f0058 != (undefined8 **)0x0) {
                  LOCK();
                  *(int *)(DAT_14c9f0058 + 1) = *(int *)(DAT_14c9f0058 + 1) + 1;
                  UNLOCK();
                }
                local_d8 = &DAT_14c9f0010;
                local_348 = (wchar_t *)CONCAT71(local_348._1_7_,2);
                FUN_140068f1a(puVar14,&local_e9,&local_e8,1);
                lVar15 = local_2d0;
                *puVar14 = &PTR_FUN_14a2557c0;
                *(undefined4 *)(puVar14 + 0x37) = local_290;
                *(undefined4 *)((longlong)puVar14 + 0x1bc) = uVar3;
                *(undefined4 *)(puVar14 + 0x38) = uVar4;
                *(undefined1 *)((longlong)puVar14 + 0x1c4) = uVar2;
                puVar14[0x39] = local_1e8;
                puVar14[0x3a] = local_270;
                puVar14[0x3b] = lVar27;
                puVar14[0x3c] = local_2b8;
                puVar14[0x3d] = local_1f8;
                puVar14[0x3e] = local_200;
                puVar14[0x3f] = local_210;
                puVar14[0x40] = local_208;
                puVar14[0x41] = plVar25;
                puVar14[0x42] = ppuVar7;
                puVar14[0x43] = local_218;
                puVar14[0x44] = local_220;
                puVar14[0x45] = local_228;
                *(undefined1 *)(puVar14 + 0x46) = 0;
                *(uint *)((longlong)puVar14 + 0x234) = CONCAT31(uStack_cc,local_d0._3_1_);
                *(undefined4 *)((longlong)puVar14 + 0x231) = local_d0;
                puVar14[0x47] = plVar25;
                puVar14[0x48] = ppuVar7;
                puVar14[0x49] = local_268;
                *(undefined1 *)(puVar14 + 0x4a) = 0;
                iVar30 = *(int *)(local_2d0 + 0x170);
                *(uint *)(local_2d0 + 0x170) = iVar30 + 1U;
                if (*(uint *)(local_2d0 + 0x174) < iVar30 + 1U) {
                  FUN_14470e57a(local_260,iVar30);
                }
                *(undefined8 **)(*(longlong *)(lVar15 + 0x168) + (longlong)iVar30 * 8) = puVar14;
                *(int *)((longlong)puVar14 + 0x2c) = *(int *)(lVar15 + 0x170) + -1;
                FUN_140069100(lVar15,puVar14);
                uVar24 = local_1e0;
                uVar23 = local_230;
                param_3 = local_238;
                param_1 = local_240;
                lVar22 = local_248;
                uVar26 = local_2bc;
                if ((char)local_2d4 != '\0') {
                  lVar21 = *(longlong *)(local_288 + 0x10e0);
                  if (*(longlong *)(local_288 + 0x10e0) == 0) {
                    lVar21 = local_288;
                  }
                  lVar19 = local_1e0 * 0x438;
                  *(undefined8 *)(lVar21 + 0x94 + lVar19) = local_270;
                  *(longlong *)(lVar21 + 0x9c + lVar19) = lVar27;
                  *(longlong *)(lVar21 + 0xa8 + lVar19) = local_2e0;
                  *(longlong *)(lVar21 + 0xb0 + lVar19) = local_2c8;
                }
                if (*(int *)((longlong)local_2a0 + 0x17c) != local_28c) {
                  *(int *)((longlong)local_2a0 + 0x17c) = local_28c;
                  puVar14 = (undefined8 *)(*local_2a0 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar14 + 3;
                  if ((undefined8 *)local_2a0[1] < puVar16) {
                    FUN_140023dd8(local_2a0,0x20);
                    puVar14 = (undefined8 *)(*local_2a0 + 7 & 0xfffffffffffffff8);
                    puVar16 = puVar14 + 3;
                  }
                  *local_2a0 = (ulonglong)puVar16;
                  *(int *)(local_2a0 + 0xc) = (int)local_2a0[0xc] + 1;
                  *(undefined8 **)local_2a0[6] = puVar14;
                  local_2a0[6] = (ulonglong)(puVar14 + 1);
                  uVar3 = *(undefined4 *)((longlong)local_2a0 + 0x17c);
                  puVar14[1] = 0;
                  *puVar14 = &PTR_FUN_14a1fb2c0;
                  *(undefined4 *)(puVar14 + 2) = uVar3;
                }
              }
              uVar24 = uVar24 + 1;
            } while ((longlong)uVar24 < (longlong)*(int *)(param_1 + 0x3f0));
          }
        }
      }
      uVar26 = uVar26 & ~(uint)local_2a8;
      puVar12 = *(uint **)(lVar22 + 0x3570);
      if (*(uint **)(lVar22 + 0x3570) == (uint *)0x0) {
        puVar12 = local_250;
      }
      iVar30 = *(int *)(lVar22 + 0x3578);
      iVar9 = (int)uVar23;
      lVar27 = (longlong)iVar9;
      uVar20 = puVar12[lVar27] & uVar26;
      if (uVar20 == 0) {
        iVar10 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar10 = iVar30 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar9) {
          iVar11 = iVar9;
        }
        if (iVar10 <= iVar9) break;
        local_2e4 = local_2e4 + 0x20;
        lVar21 = 0;
        while (uVar20 = puVar12[lVar27 + lVar21 + 1], uVar20 == 0) {
          local_2e4 = local_2e4 + 0x20;
          lVar21 = lVar21 + 1;
          if (iVar11 - lVar27 == lVar21) goto LAB_142d006dd;
        }
        uVar23 = (ulonglong)(iVar9 + (int)lVar21 + 1);
        uVar26 = 0xffffffff;
      }
      local_2a8 = (ulonglong)(-uVar20 & uVar20);
      uVar24 = local_2a8 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar9 = (local_2e4 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar30);
  }
LAB_142d006dd:
  FUN_1400200e4(&local_b0);
LAB_142d006ea:
  if ((local_a0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d007a8 FUN_142d007a8 body=69 status=ok
// SIG undefined FUN_142d007a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d007a8(void)

{
  _DAT_14c9ec410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d007ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec418,1);
  return;
}



// FUNCTION 142d007ed FUN_142d007ed body=69 status=ok
// SIG undefined FUN_142d007ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d007ed(void)

{
  _DAT_14c9ec428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0082f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec430,1);
  return;
}



// FUNCTION 142d00832 FUN_142d00832 body=69 status=ok
// SIG undefined FUN_142d00832(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00832(void)

{
  _DAT_14c9ec440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec448,1);
  return;
}



// FUNCTION 142d00877 FUN_142d00877 body=69 status=ok
// SIG undefined FUN_142d00877(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00877(void)

{
  _DAT_14c9ec458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d008b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec460,1);
  return;
}



// FUNCTION 142d008bc FUN_142d008bc body=69 status=ok
// SIG undefined FUN_142d008bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d008bc(void)

{
  _DAT_14c9ec470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d008fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec478,1);
  return;
}



// FUNCTION 142d00901 FUN_142d00901 body=69 status=ok
// SIG undefined FUN_142d00901(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00901(void)

{
  _DAT_14c9ec488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec490,1);
  return;
}



// FUNCTION 142d00946 FUN_142d00946 body=69 status=ok
// SIG undefined FUN_142d00946(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00946(void)

{
  _DAT_14c9ec4a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec4a8,1);
  return;
}



// FUNCTION 142d0098b FUN_142d0098b body=69 status=ok
// SIG undefined FUN_142d0098b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0098b(void)

{
  _DAT_14c9ec4b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d009cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec4c0,1);
  return;
}



// FUNCTION 142d009d0 FUN_142d009d0 body=69 status=ok
// SIG undefined FUN_142d009d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d009d0(void)

{
  _DAT_14c9ec4d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec4d8,1);
  return;
}



// FUNCTION 142d00a15 FUN_142d00a15 body=69 status=ok
// SIG undefined FUN_142d00a15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00a15(void)

{
  _DAT_14c9ec4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec4f0,1);
  return;
}



// FUNCTION 142d00a5a FUN_142d00a5a body=69 status=ok
// SIG undefined FUN_142d00a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00a5a(void)

{
  _DAT_14c9ec500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec508,1);
  return;
}



// FUNCTION 142d00a9f FUN_142d00a9f body=69 status=ok
// SIG undefined FUN_142d00a9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00a9f(void)

{
  _DAT_14c9ec518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec520,1);
  return;
}



// FUNCTION 142d00ae4 FUN_142d00ae4 body=69 status=ok
// SIG undefined FUN_142d00ae4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00ae4(void)

{
  _DAT_14c9ec530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d00b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ec538,1);
  return;
}



// FUNCTION 142d00b29 FUN_142d00b29 body=21 status=ok
// SIG undefined FUN_142d00b29(void)

float FUN_142d00b29(void)

{
  float fVar1;
  
  fVar1 = 10.0;
  if (10.0 <= *(float *)(DAT_14c9ec510 + 4)) {
    fVar1 = *(float *)(DAT_14c9ec510 + 4);
  }
  return fVar1;
}



// FUNCTION 142d00b3e FUN_142d00b3e body=1245 status=ok
// SIG undefined FUN_142d00b3e(void)

void FUN_142d00b3e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_142d00b7f;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_142d00b84;
      goto LAB_142d00bd8;
    }
  }
  else {
LAB_142d00b7f:
    if (iVar6 != 0x10) {
LAB_142d00bd8:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_142d00b84;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_142d00b84;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_142d00d34;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_142d274e3);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_142d00d34:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_142d00db4;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_142d00db4:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a255838;
        puVar15[0x15] = param_1;
        puVar15[0x16] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2557e0;
        local_68[0] = FUN_142d27464;
        local_40 = param_1;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"FAddLocalFogVolumeCommand",&DAT_14c9f15b8);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_142d00c73;
    }
  }
LAB_142d00b84:
  iVar6 = *(int *)(param_1 + 0x4d58);
  *(uint *)(param_1 + 0x4d58) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x4d5c) < iVar6 + 1U) {
    FUN_1462dae16((longlong *)(param_1 + 0x4d50),iVar6);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x4d50) + (longlong)iVar6 * 8) = param_2;
LAB_142d00c73:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d0101c FUN_142d0101c body=1379 status=ok
// SIG undefined FUN_142d0101c(void)

void FUN_142d0101c(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined ***pppuVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar19 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_142d0105d;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_142d01062;
      goto LAB_142d010c7;
    }
  }
  else {
LAB_142d0105d:
    if (iVar5 != 0x10) {
LAB_142d010c7:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar19 + 0xc60), iVar5 == 2)) {
LAB_142d014d6:
          iVar5 = *(int *)(param_1 + 0x4d58);
          if ((longlong)iVar5 != 0) {
            lVar14 = *(longlong *)(param_1 + 0x4d50);
            lVar19 = (longlong)iVar5 * 8;
            lVar17 = 0;
            lVar18 = 0;
            do {
              if (*(longlong *)(lVar14 + lVar17 * 8) == param_2) goto LAB_142d01515;
              lVar18 = lVar18 + 0x100000000;
              lVar17 = lVar17 + 1;
              lVar19 = lVar19 + -8;
            } while (lVar19 != 0);
          }
          goto LAB_142d01543;
        }
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_142d014d6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_142d0120f;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_142d274e3);
          }
          lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar19 + 0x310);
          *(undefined8 *)(lVar19 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_142d0120f:
          puVar15 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar15 + 0x17);
          uVar11 = puVar9[0x12];
          if (puVar13 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar15 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar15 + 0x17);
            uVar11 = 0;
            if (puVar13 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_142d0128f;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_142d0128f:
        *(uint **)(puVar9 + 0x10) = puVar13;
        puVar9[0x12] = uVar11;
        iVar5 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a2558b0;
        puVar15[0x15] = param_1;
        puVar15[0x16] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar11 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
            iVar5 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar19 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar19 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar19 + 0x30);
        }
        puVar15[0xf] = uVar10;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar5;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a255850;
        local_68[0] = &LAB_142d2771e;
        local_40 = param_1;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"FRemoveLocalFogVolumeCommand",&DAT_14c9f15bc);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar12 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar12 = &local_48;
          }
          (*(code *)(*pppuVar12)[2])();
        }
      }
      goto LAB_142d01543;
    }
  }
LAB_142d01062:
  iVar5 = *(int *)(param_1 + 0x4d58);
  if ((longlong)iVar5 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x4d50);
    lVar19 = (longlong)iVar5 * 8;
    lVar17 = 0;
    lVar18 = 0;
    do {
      if (*(longlong *)(lVar14 + lVar17 * 8) == param_2) goto LAB_142d01515;
      lVar18 = lVar18 + 0x100000000;
      lVar17 = lVar17 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
LAB_142d01543:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142d01515:
  if ((uint)lVar17 != 0xffffffff) {
    memmove((void *)(lVar14 + (lVar18 >> 0x20) * 8),(void *)(lVar14 + (lVar18 >> 0x20) * 8 + 8),
            (longlong)(int)(~(uint)lVar17 + iVar5) << 3);
    *(int *)(param_1 + 0x4d58) = *(int *)(param_1 + 0x4d58) + -1;
  }
  goto LAB_142d01543;
}



// FUNCTION 142d0158c FUN_142d0158c body=12063 status=ok
// SIG undefined FUN_142d0158c(void)

void FUN_142d0158c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,char param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong *puVar17;
  char cVar18;
  byte bVar19;
  int iVar20;
  ulonglong *puVar21;
  undefined4 *puVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong *puVar26;
  double *pdVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  float *pfVar32;
  undefined8 *puVar33;
  longlong lVar34;
  longlong *plVar35;
  ulonglong uVar36;
  undefined2 uVar37;
  undefined8 *puVar38;
  uint6 uVar39;
  undefined4 uVar40;
  int iVar41;
  uint uVar42;
  undefined8 in_R8;
  ulonglong uVar43;
  ulonglong *puVar44;
  ulonglong *puVar45;
  int iVar46;
  longlong in_R9;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong *puVar49;
  ulonglong *puVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong *puVar53;
  undefined8 *puVar54;
  bool bVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  float fVar61;
  undefined4 uVar62;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auStack_538 [32];
  ulonglong local_518;
  undefined1 local_510;
  ulonglong *local_508;
  longlong local_500;
  ulonglong local_4f8;
  ulonglong local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong *local_4d0;
  undefined8 *local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  uint local_4a0;
  uint local_49c;
  ulonglong local_498;
  ulonglong local_490;
  longlong local_488;
  undefined8 uStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  undefined8 uStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  undefined8 uStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  undefined4 local_3d8;
  int iStack_3d4;
  int local_3d0;
  undefined2 uStack_3cc;
  short sStack_3ca;
  undefined2 local_3c8;
  undefined1 uStack_3c6;
  char cStack_3c5;
  undefined1 uStack_3c4;
  undefined1 uStack_3c3;
  undefined2 uStack_3c2;
  ulonglong local_f0;
  
  uVar62 = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar28 = (uint)((ulonglong)param_3 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  iVar46 = *(int *)(param_1 + 0x4d58);
  local_4e8 = param_1;
  local_4a8 = in_R8;
  cVar18 = FUN_1400838d1(param_1,in_R8);
  lVar51 = *param_2;
  iVar41 = (int)param_2[1];
  lVar34 = (longlong)iVar41 * 0x13c10;
  if ((iVar46 == 0) || (cVar18 == '\0')) {
    if (iVar41 != 0) {
      do {
        FUN_140048079(in_R9,lVar51);
        lVar51 = lVar51 + 0x13c10;
        lVar34 = lVar34 + -0x13c10;
      } while (lVar34 != 0);
    }
  }
  else if (iVar41 != 0) {
    local_4d8 = lVar34 + lVar51;
    puVar44 = (ulonglong *)(in_R9 + 0x70);
    local_4d0 = (longlong *)(in_R9 + 0x98);
    local_500 = in_R9 + 0x198;
    local_4e0 = in_R9 + 0x178;
    local_4b8 = in_R9 + 0x188;
    local_4b0 = in_R9 + 0x1a8;
    local_4c0 = in_R9 + 0x168;
    local_508 = puVar44;
    do {
      lVar52 = local_4e8;
      local_488 = 0;
      uStack_480 = 0;
      local_4a0 = *(uint *)(local_4e8 + 0x4d58);
      uVar43 = (ulonglong)local_4a0;
      local_49c = 0;
      lVar34 = uVar43 * 0x30;
      uVar48 = *(ulonglong *)(in_R9 + 0x78);
      uVar47 = *(longlong *)(in_R9 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar36 = uVar47 + lVar34;
      if (uVar48 < uVar36) {
        FUN_140023dd8(puVar44,(int)lVar34 + 0x10);
        uVar48 = *(ulonglong *)(in_R9 + 0x78);
        uVar47 = *(longlong *)(in_R9 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar36 = lVar34 + uVar47;
        uVar43 = (ulonglong)local_4a0;
      }
      *puVar44 = uVar36;
      lVar34 = uVar43 * 0x18;
      uVar43 = uVar36 + lVar34;
      local_498 = uVar47;
      if (uVar48 < uVar43) {
        FUN_140023dd8(puVar44,(int)lVar34 + 0x10);
        uVar36 = *puVar44 + 0xf & 0xfffffffffffffff0;
        uVar43 = lVar34 + uVar36;
      }
      lVar34 = local_4e8;
      *puVar44 = uVar43;
      iVar46 = (int)uStack_480;
      uVar24 = local_4a0 - (int)uStack_480;
      local_490 = uVar36;
      if ((int)uStack_480 < (int)local_4a0) {
        uStack_480 = CONCAT44(uStack_480._4_4_,local_4a0);
        lVar34 = lVar52;
        if ((uint)(uStack_480._4_4_ - iVar46) < uVar24) {
          FUN_141768188(&local_488);
        }
      }
      else {
        uVar24 = local_4a0;
        if ((int)local_4a0 < 0) goto LAB_142d044a7;
        if ((int)local_4a0 < (int)uStack_480) {
          uStack_480 = CONCAT44(uStack_480._4_4_,local_4a0);
          FUN_1471e73cc(&local_488);
        }
      }
      iVar46 = *(int *)(lVar34 + 0x4d58);
      if ((longlong)iVar46 != 0) {
        local_4f8 = *(ulonglong *)(lVar34 + 0x4d50);
        lVar52 = 0;
        do {
          uVar40 = (undefined4)uVar43;
          pdVar6 = *(double **)(local_4f8 + lVar52);
          if ((0.0 < *(float *)(pdVar6 + 0xc)) || (0.0 < *(float *)((longlong)pdVar6 + 100))) {
            dVar10 = *pdVar6;
            dVar65 = pdVar6[1];
            dVar12 = pdVar6[2];
            local_468 = pdVar6[8];
            local_458 = pdVar6[9];
            dStack_430 = pdVar6[10];
            dVar66 = dVar65 + dVar65;
            dVar11 = dVar12 + dVar12;
            dVar9 = dVar10 * (dVar10 + dVar10);
            dVar64 = pdVar6[3];
            local_478 = (1.0 - (dVar12 * dVar11 + dVar65 * dVar66)) * local_468;
            dStack_450 = (1.0 - (dVar12 * dVar11 + dVar9)) * local_458;
            local_428 = (1.0 - (dVar9 + dVar65 * dVar66)) * dStack_430;
            dVar9 = dVar11 * dVar64;
            dVar12 = (dVar10 + dVar10) * pdVar6[3];
            dVar64 = dVar66 * dVar64;
            dStack_470 = (dVar66 * dVar10 + dVar9) * local_468;
            local_448 = (dVar11 * dVar65 + dVar12) * local_458;
            local_438 = (dVar64 + *pdVar6 * dVar11) * dStack_430;
            local_468 = (*pdVar6 * dVar11 - dVar64) * local_468;
            fVar71 = *(float *)(pdVar6 + 0xd);
            if (fVar71 <= 1.0) {
              fVar71 = 1.0;
            }
            local_458 = (dVar66 * dVar10 - dVar9) * local_458;
            dStack_430 = (dVar11 * dVar65 - dVar12) * dStack_430;
            uStack_460 = 0;
            uStack_440 = 0;
            uStack_420 = 0;
            local_418 = DAT_14c8464e0;
            uStack_410 = (undefined4)DAT_14c8464e8;
            uStack_40c = DAT_14c8464e8._4_4_;
            fVar71 = fVar71 * 0.01;
            local_408 = (undefined4)DAT_14c8464f0;
            uStack_404 = DAT_14c8464f0._4_4_;
            uStack_400 = 0;
            uStack_3fc = 0x3ff00000;
            pfVar32 = (float *)((ulonglong)local_49c * 0x30 + local_498);
            if ((((((9.99999993922529e-09 < ABS(local_478)) ||
                   (9.99999993922529e-09 < ABS(dStack_470))) ||
                  (9.99999993922529e-09 < ABS(local_468))) ||
                 ((9.99999993922529e-09 < ABS(local_458) || (9.99999993922529e-09 < ABS(dStack_450))
                  ))) || ((9.99999993922529e-09 < ABS(local_448) ||
                          ((9.99999993922529e-09 < ABS(local_438) ||
                           (9.99999993922529e-09 < ABS(dStack_430))))))) ||
               (9.99999993922529e-09 < ABS(local_428))) {
              FUN_14007522e(&local_3f8,&local_478);
            }
            else {
              puVar38 = &DAT_14c846400;
              puVar54 = &local_3f8;
              for (lVar29 = 0x10; lVar34 = local_4e8, lVar29 != 0; lVar29 = lVar29 + -1) {
                *puVar54 = *puVar38;
                puVar38 = puVar38 + 1;
                puVar54 = puVar54 + 1;
              }
            }
            fVar70 = (float)(double)local_3f8;
            fVar63 = (float)(double)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
            fVar69 = (float)(double)CONCAT44(uStack_3e4,uStack_3e8);
            fVar60 = (float)(double)CONCAT44(iStack_3d4,local_3d8);
            fVar59 = (float)(double)CONCAT26(sStack_3ca,CONCAT24(uStack_3cc,local_3d0));
            fVar56 = (float)(double)CONCAT26(uStack_3c2,
                                             CONCAT15(uStack_3c3,
                                                      CONCAT14(uStack_3c4,
                                                               CONCAT13(cStack_3c5,
                                                                        CONCAT12(uStack_3c6,
                                                                                 local_3c8)))));
            dVar64 = *(double *)(lVar51 + 0x1040);
            dVar9 = pdVar6[6];
            dVar11 = pdVar6[5];
            dVar12 = *(double *)(lVar51 + 0x1038);
            fVar61 = fVar69 * fVar69 + fVar70 * fVar70 + fVar63 * fVar63;
            if (1e-32 < fVar61) {
              fVar61 = 1.0 / SQRT(fVar61);
              fVar70 = fVar70 * fVar61;
              fVar63 = fVar63 * fVar61;
              fVar69 = fVar69 * fVar61;
            }
            fVar61 = fVar56 * fVar56 + fVar60 * fVar60 + fVar59 * fVar59;
            if (1e-32 < fVar61) {
              fVar61 = 1.0 / SQRT(fVar61);
              fVar60 = fVar60 * fVar61;
              fVar59 = fVar59 * fVar61;
              fVar56 = fVar56 * fVar61;
            }
            uVar62 = 0;
            in_XMM3_Dc = 0;
            in_XMM3_Dd = 0;
            *pfVar32 = (float)(pdVar6[4] + *(double *)(lVar51 + 0x1030));
            pfVar32[1] = (float)(dVar11 + dVar12);
            pfVar32[2] = (float)(dVar64 + dVar9);
            pfVar32[3] = *(float *)(pdVar6 + 0xe);
            fVar61 = ABS(fVar70);
            if ((uint)fVar61 < 0x47800000) {
              if ((uint)fVar61 < 0x38800000) {
                fVar61 = fVar61 + 0.5;
              }
              else {
                fVar61 = (float)((int)fVar61 + 0x8000fff + (uint)(((uint)fVar61 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar61 = (float)((0x7f800000 < (uint)fVar61 | 0x3e) << 9);
            }
            fVar67 = ABS(fVar63);
            if ((uint)fVar67 < 0x47800000) {
              if ((uint)fVar67 < 0x38800000) {
                fVar68 = fVar67 + 0.5;
              }
              else {
                fVar67 = (float)((int)fVar67 + 0x8000fff + (uint)(((uint)fVar67 >> 0xd & 1) != 0) >>
                                0xd);
                fVar68 = fVar67;
              }
            }
            else {
              fVar68 = (float)((0x7f800000 < (uint)fVar67 | 0x3e) << 9);
            }
            auVar58._4_4_ = 0x3e45798e;
            auVar58._0_4_ = fVar70;
            auVar58._8_8_ = 0;
            uVar28 = movmskps(fVar67,auVar58);
            iVar41 = movmskps(uVar40,ZEXT416((uint)fVar63));
            uVar28 = iVar41 << 0x1f | (uVar28 & 1) << 0xf;
            pfVar32[4] = (float)((int)fVar68 << 0x10 | (uint)fVar61 & 0xffff | uVar28);
            fVar61 = ABS(fVar69);
            if ((uint)fVar61 < 0x47800000) {
              if ((uint)fVar61 < 0x38800000) {
                fVar61 = fVar61 + 0.5;
              }
              else {
                fVar61 = (float)((int)fVar61 + 0x8000fff + (uint)(((uint)fVar61 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar61 = (float)((0x7f800000 < (uint)fVar61 | 0x3e) << 9);
            }
            fVar63 = ABS(fVar60);
            if ((uint)fVar63 < 0x47800000) {
              if ((uint)fVar63 < 0x38800000) {
                fVar70 = fVar63 + 0.5;
              }
              else {
                fVar63 = (float)((int)fVar63 + 0x8000fff + (uint)(((uint)fVar63 >> 0xd & 1) != 0) >>
                                0xd);
                fVar70 = fVar63;
              }
            }
            else {
              fVar70 = (float)((0x7f800000 < (uint)fVar63 | 0x3e) << 9);
            }
            uVar24 = movmskps(fVar63,ZEXT416((uint)fVar69));
            iVar41 = movmskps(uVar28,ZEXT416((uint)fVar60));
            uVar28 = iVar41 << 0x1f | (uVar24 & 1) << 0xf;
            pfVar32[5] = (float)((int)fVar70 << 0x10 | (uint)fVar61 & 0xffff | uVar28);
            fVar60 = ABS(fVar59);
            if ((uint)fVar60 < 0x47800000) {
              if ((uint)fVar60 < 0x38800000) {
                fVar60 = fVar60 + 0.5;
              }
              else {
                fVar60 = (float)((int)fVar60 + 0x8000fff + (uint)(((uint)fVar60 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar60 = (float)((0x7f800000 < (uint)fVar60 | 0x3e) << 9);
            }
            fVar61 = ABS(fVar56);
            if ((uint)fVar61 < 0x47800000) {
              if ((uint)fVar61 < 0x38800000) {
                fVar63 = fVar61 + 0.5;
              }
              else {
                fVar61 = (float)((int)fVar61 + 0x8000fff + (uint)(((uint)fVar61 >> 0xd & 1) != 0) >>
                                0xd);
                fVar63 = fVar61;
              }
            }
            else {
              fVar63 = (float)((0x7f800000 < (uint)fVar61 | 0x3e) << 9);
            }
            uVar24 = movmskps(fVar61,ZEXT416((uint)fVar59));
            iVar41 = movmskps(uVar28,ZEXT416((uint)fVar56));
            pfVar32[6] = (float)((int)fVar63 << 0x10 |
                                (uint)fVar60 & 0xffff | iVar41 << 0x1f | (uVar24 & 1) << 0xf);
            pfVar32[7] = 0.0;
            fVar56 = ABS(*(float *)(pdVar6 + 0xc));
            if ((uint)fVar56 < 0x47800000) {
              if ((uint)fVar56 < 0x38800000) {
                fVar56 = fVar56 + 0.5;
              }
              else {
                fVar56 = (float)((int)fVar56 + 0x8000fff + (uint)(((uint)fVar56 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar56 = (float)((0x7f800000 < (uint)fVar56 | 0x3e) << 9);
            }
            fVar59 = ABS(*(float *)((longlong)pdVar6 + 100));
            if ((uint)fVar59 < 0x47800000) {
              if ((uint)fVar59 < 0x38800000) {
                fVar59 = fVar59 + 0.5;
              }
              else {
                fVar59 = (float)((int)fVar59 + 0x8000fff + (uint)(((uint)fVar59 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar59 = (float)((0x7f800000 < (uint)fVar59 | 0x3e) << 9);
            }
            if ((uint)fVar71 < 0x47800000) {
              if ((uint)fVar71 < 0x38800000) {
                fVar71 = fVar71 + 0.5;
              }
              else {
                fVar71 = (float)((int)fVar71 + 0x8000fff + (uint)(((uint)fVar71 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar71 = (float)((0x7f800000 < (uint)fVar71 | 0x3e) << 9);
            }
            pfVar32[8] = (float)((uint)fVar71 >> 5 & 0x3ff |
                                ((uint)fVar59 & 0x7ff0) << 6 | ((uint)fVar56 & 0xfffffff0) << 0x11);
            fVar71 = ABS(*(float *)((longlong)pdVar6 + 0x8c));
            uVar28 = 0;
            in_XMM2_Dc = 0;
            in_XMM2_Dd = 0;
            if ((uint)fVar71 < 0x47800000) {
              if ((uint)fVar71 < 0x38800000) {
                fVar71 = fVar71 + 0.5;
              }
              else {
                fVar71 = (float)((int)fVar71 + 0x8000fff + (uint)(((uint)fVar71 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar71 = (float)((0x7f800000 < (uint)fVar71 | 0x3e) << 9);
            }
            fVar56 = ABS(*(float *)(pdVar6 + 0x12));
            if ((uint)fVar56 < 0x47800000) {
              if ((uint)fVar56 < 0x38800000) {
                fVar56 = fVar56 + 0.5;
              }
              else {
                fVar56 = (float)((int)fVar56 + 0x8000fff + (uint)(((uint)fVar56 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar56 = (float)((0x7f800000 < (uint)fVar56 | 0x3e) << 9);
            }
            fVar59 = ABS(*(float *)((longlong)pdVar6 + 0x94));
            if ((uint)fVar59 < 0x47800000) {
              if ((uint)fVar59 < 0x38800000) {
                fVar59 = fVar59 + 0.5;
              }
              else {
                fVar59 = (float)((int)fVar59 + 0x8000fff + (uint)(((uint)fVar59 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar59 = (float)((0x7f800000 < (uint)fVar59 | 0x3e) << 9);
            }
            pfVar32[9] = (float)((uint)fVar59 >> 5 & 0x3ff |
                                ((uint)fVar56 & 0x7ff0) << 6 | ((uint)fVar71 & 0xfffffff0) << 0x11);
            fVar71 = *(float *)((longlong)pdVar6 + 0x7c) * 255.0;
            if (255.0 <= fVar71) {
              fVar71 = 255.0;
            }
            if (fVar71 <= 0.0) {
              fVar71 = 0.0;
            }
            fVar56 = *(float *)(pdVar6 + 0x10) * 255.0;
            if (255.0 <= fVar56) {
              fVar56 = 255.0;
            }
            if (fVar56 <= 0.0) {
              fVar56 = 0.0;
            }
            fVar59 = *(float *)((longlong)pdVar6 + 0x84) * 255.0;
            if (255.0 <= fVar59) {
              fVar59 = 255.0;
            }
            if (fVar59 <= 0.0) {
              fVar59 = 0.0;
            }
            fVar60 = *(float *)(pdVar6 + 0xf) * 255.0;
            if (255.0 <= fVar60) {
              fVar60 = 255.0;
            }
            if (fVar60 <= 0.0) {
              fVar60 = 0.0;
            }
            pfVar32[10] = (float)((int)(longlong)fVar60 << 0x18 |
                                  ((uint)(longlong)fVar59 & 0xff) << 0x10 |
                                  ((uint)(longlong)fVar56 & 0xff) << 8 |
                                 (uint)(longlong)fVar71 & 0xff);
            pfVar32[0xb] = *(float *)((longlong)pdVar6 + 0x6c);
            dVar9 = pdVar6[5];
            dVar64 = pdVar6[6];
            pdVar27 = (double *)(local_490 + (ulonglong)local_49c * 0x18);
            *pdVar27 = pdVar6[4];
            pdVar27[1] = dVar9;
            *(double *)(local_490 + 0x10 + (ulonglong)local_49c * 0x18) = dVar64;
            lVar29 = (longlong)(int)local_49c;
            *(ulonglong *)(local_488 + lVar29 * 8) =
                 *(ulonglong *)(local_488 + lVar29 * 8) & 0xffff000000000000 |
                 (ulonglong)(local_49c & 0xffff);
            uVar43 = (ulonglong)*(byte *)((longlong)pdVar6 + 0x74) << 0x30 |
                     (ulonglong)(local_49c & 0xffff);
            *(ulonglong *)(local_488 + lVar29 * 8) = uVar43;
            local_49c = local_49c + 1;
          }
          lVar52 = lVar52 + 8;
        } while ((longlong)iVar46 * 8 != lVar52);
      }
      iVar46 = (int)uStack_480;
      uVar24 = local_49c - (int)uStack_480;
      if ((int)uStack_480 < (int)local_49c) {
        uStack_480 = CONCAT44(uStack_480._4_4_,local_49c);
        if ((uint)(uStack_480._4_4_ - iVar46) < uVar24) {
          FUN_141768188(&local_488);
        }
      }
      else {
        uVar24 = local_49c;
        if ((int)local_49c < 0) {
LAB_142d044a7:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar24);
        }
        if ((int)local_49c < (int)uStack_480) {
          uStack_480 = CONCAT44(uStack_480._4_4_,local_49c);
        }
      }
      plVar35 = &local_3f8;
      bVar19 = FUN_1400838d1(lVar34,local_4a8);
      lVar34 = local_488;
      if ((bVar19 & param_5) == 1) {
        uVar40 = (undefined4)
                 CONCAT71((int7)((ulonglong)DAT_14c9ec468 >> 8),0 < *(int *)(DAT_14c9ec468 + 4));
      }
      else {
        uVar40 = 0;
      }
      if (local_49c == 0) {
        FUN_140048079(in_R9,lVar51);
        puVar44 = local_508;
      }
      else {
        local_4f8 = CONCAT44(local_4f8._4_4_,uVar40);
        dVar64 = *(double *)(lVar51 + 0x1048);
        dVar9 = *(double *)(lVar51 + 0x1050);
        dVar11 = *(double *)(lVar51 + 0x1058);
        uVar28 = (uint)((ulonglong)dVar11 >> 0x20);
        in_XMM2_Dc = 0;
        in_XMM2_Dd = 0;
        uVar24 = 0;
        do {
          uVar36 = *(ulonglong *)(local_488 + (longlong)(int)uVar24 * 8);
          uVar48 = uVar36 & 0xffff;
          dVar12 = *(double *)(local_490 + uVar48 * 0x18) - dVar64;
          dVar10 = *(double *)(local_490 + 8 + uVar48 * 0x18) - dVar9;
          dVar65 = *(double *)(local_490 + 0x10 + uVar48 * 0x18) - dVar11;
          in_XMM3_Dc = 0;
          in_XMM3_Dd = 0;
          dVar12 = SQRT(dVar65 * dVar65 + dVar12 * dVar12 + dVar10 * dVar10);
          uVar62 = (undefined4)((ulonglong)dVar12 >> 0x20);
          *(ulonglong *)(local_488 + (longlong)(int)uVar24 * 8) =
               uVar36 & 0xffff00000000ffff | (ulonglong)(uint)(float)dVar12 << 0x10;
          uVar24 = uVar24 + 1;
        } while (uVar24 < local_49c);
        iVar46 = (int)uStack_480;
        lVar52 = (longlong)(int)uStack_480;
        if (1 < lVar52) {
          memset(&uStack_3e8,0,0x2f0);
          local_3f8._0_4_ = (int)lVar34;
          local_3f8._4_4_ = (int)((ulonglong)lVar34 >> 0x20);
          uStack_3f0 = lVar34 + lVar52 * 8 + -8;
          fVar71 = logf((float)iVar46);
          uStack_3e8 = (int)(longlong)(fVar71 + fVar71);
          do {
            puVar21 = (ulonglong *)*plVar35;
            puVar44 = (ulonglong *)plVar35[1];
            iVar46 = (int)plVar35[2];
            iVar41 = (int)((ulonglong)((longlong)puVar44 - (longlong)puVar21) >> 3);
            puVar31 = puVar21;
            puVar49 = puVar44;
            if (iVar46 != 0) {
LAB_142d022d4:
              if (8 < (int)(iVar41 + 1U)) {
                uVar24 = iVar41 + 1U >> 1;
                uVar36 = puVar21[uVar24];
                puVar21[uVar24] = *puVar21;
                *puVar21 = uVar36;
                puVar30 = puVar44 + 1;
                puVar26 = puVar21;
                do {
                  puVar17 = puVar26 + 1;
                  puVar45 = puVar26 + 1;
                  do {
                    puVar50 = puVar45;
                    puVar26 = puVar17;
                    if (puVar44 < puVar26) break;
                    puVar17 = puVar26 + 1;
                    puVar45 = puVar50 + 1;
                  } while (*puVar21 <= *puVar26);
                  puVar17 = puVar30 + -2;
                  do {
                    puVar45 = puVar30;
                    puVar53 = puVar17;
                    puVar30 = puVar45 + -1;
                    if (puVar30 <= puVar21) break;
                    puVar17 = puVar53 + -1;
                  } while (*puVar30 <= *puVar21);
                  if (puVar30 < puVar26) goto LAB_142d02352;
                  uVar36 = *puVar26;
                  *puVar26 = *puVar30;
                  *puVar30 = uVar36;
                } while( true );
              }
              if (puVar21 < puVar44) {
                do {
                  puVar31 = puVar21;
                  if (puVar21 + 1 <= puVar44) {
                    uVar36 = *puVar21;
                    puVar49 = puVar21 + 1;
                    do {
                      uVar48 = *puVar49;
                      if (uVar48 < uVar36) {
                        puVar31 = puVar49;
                      }
                      if (uVar48 <= uVar36) {
                        uVar36 = uVar48;
                      }
                      puVar49 = puVar49 + 1;
                    } while (puVar49 <= puVar44);
                  }
                  uVar36 = *puVar31;
                  *puVar31 = *puVar44;
                  *puVar44 = uVar36;
                  puVar44 = puVar44 + -1;
                } while (puVar21 < puVar44);
              }
              goto LAB_142d02443;
            }
LAB_142d02455:
            FUN_1471e7467(puVar21);
LAB_142d02443:
            plVar35 = plVar35 + -3;
          } while (&local_3f8 <= plVar35);
        }
        uVar24 = *(uint *)(DAT_14c9ec4c8 + 4);
        if (0xff < uVar24) {
          uVar24 = 0x100;
        }
        uVar24 = uVar24 + (uVar24 == 0);
        iVar46 = local_49c - uVar24;
        if (uVar24 <= local_49c) {
          local_49c = uVar24;
        }
        if (iVar46 < 1) {
          iVar46 = 0;
        }
        uVar42 = local_49c * 0x30;
        uVar48 = *(ulonglong *)(in_R9 + 0x78);
        puVar38 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 0xfU & 0xfffffffffffffff0);
        uVar36 = (longlong)puVar38 + (ulonglong)uVar42;
        lVar34 = uStack_3f0;
        if (uVar48 < uVar36) {
          FUN_140023dd8(local_508,uVar42 + 0x10);
          uVar48 = *(ulonglong *)(in_R9 + 0x78);
          puVar38 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 0xfU & 0xfffffffffffffff0);
          uVar36 = (ulonglong)uVar42 + (longlong)puVar38;
          lVar34 = uStack_3f0;
        }
        puVar44 = local_508;
        uStack_3f0._4_4_ = (undefined4)((ulonglong)lVar34 >> 0x20);
        *local_508 = uVar36;
        lVar52 = (ulonglong)local_49c * 0x10;
        uVar43 = uVar36 + lVar52;
        if (uVar48 < uVar43) {
          uStack_3f0 = lVar34;
          FUN_140023dd8(local_508,(int)lVar52 + 0x10);
          uVar36 = *puVar44 + 0xf & 0xfffffffffffffff0;
          uVar43 = lVar52 + uVar36;
        }
        *puVar44 = uVar43;
        if (local_49c == 0) {
          uVar42 = 0;
        }
        else {
          puVar22 = (undefined4 *)(uVar36 + 0xc);
          uVar25 = 0;
          puVar54 = puVar38;
          do {
            uVar2 = *(ushort *)(local_488 + (longlong)(int)(iVar46 + uVar25) * 8);
            uVar48 = (ulonglong)uVar2;
            uVar43 = (ulonglong)((uint)uVar2 * 0x30);
            uVar23 = *(undefined8 *)(local_498 + uVar43);
            uVar13 = ((undefined8 *)(local_498 + uVar43))[1];
            puVar33 = (undefined8 *)(local_498 + 0x10 + uVar43);
            uVar14 = *puVar33;
            uVar15 = puVar33[1];
            puVar33 = (undefined8 *)(local_498 + 0x20 + uVar43);
            uVar16 = puVar33[1];
            puVar54[4] = *puVar33;
            puVar54[5] = uVar16;
            puVar54[2] = uVar14;
            puVar54[3] = uVar15;
            *puVar54 = uVar23;
            puVar54[1] = uVar13;
            dVar64 = *(double *)(local_490 + 0x10 + uVar48 * 0x18);
            uVar40 = *(undefined4 *)((longlong)puVar54 + 0xc);
            uVar28 = 0;
            in_XMM2_Dc = 0;
            in_XMM2_Dd = 0;
            dVar9 = *(double *)(local_490 + 8 + uVar48 * 0x18);
            uVar62 = 0;
            in_XMM3_Dc = 0;
            in_XMM3_Dd = 0;
            puVar22[-3] = (float)*(double *)(local_490 + uVar48 * 0x18);
            puVar22[-2] = (float)dVar9;
            puVar22[-1] = (float)dVar64;
            *puVar22 = uVar40;
            uVar25 = uVar25 + 1;
            puVar22 = puVar22 + 4;
            puVar54 = puVar54 + 6;
            uVar42 = local_49c;
          } while (uVar25 < local_49c);
        }
        local_518 = (ulonglong)(uVar42 * 0x30);
        *(uint *)(lVar51 + 0x118e0) = uVar42;
        local_3f8._4_4_ = uVar42 * 3;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f0._0_4_ = 0x4109;
        local_3f8._0_4_ = 0x10;
        local_510 = 1;
        lVar34 = FUN_1400489e9(in_R9,L"LocalFogVolume.GPUInstanceDataBuffer",&local_3f8,puVar38);
        *(longlong *)(lVar51 + 0x118e8) = lVar34;
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar38 = puVar54 + 9;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(puVar44,0x50);
          puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar38 = puVar54 + 9;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        puVar54[1] = *(undefined8 *)(lVar34 + 8);
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 3;
        *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
        *puVar54 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar54 + 5) = 1;
        *(undefined8 *)((longlong)puVar54 + 0x2c) = 0xffffffff00000000;
        puVar54[7] = 0;
        puVar54[8] = lVar34;
        iVar46 = *(int *)(in_R9 + 0x1a0);
        *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
        if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) {
          FUN_1447568fc(local_500,iVar46);
        }
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar46 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x118f0) = puVar54;
        local_518 = (ulonglong)local_49c << 4;
        local_3f8._4_4_ = local_49c << 4;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f0._0_4_ = 0x4109;
        local_3f8._0_4_ = 0x10;
        local_510 = 1;
        lVar34 = FUN_1400489e9(in_R9,L"LocalFogVolume.GPUInstanceCullingDataBuffer",&local_3f8,
                               uVar36);
        *(longlong *)(lVar51 + 0x118f8) = lVar34;
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar38 = puVar54 + 9;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(puVar44,0x50);
          puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar38 = puVar54 + 9;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        puVar54[1] = *(undefined8 *)(lVar34 + 8);
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 3;
        *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
        *puVar54 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar54 + 5) = 1;
        *(undefined8 *)((longlong)puVar54 + 0x2c) = 0xffffffff00000000;
        puVar54[7] = 0;
        puVar54[8] = lVar34;
        iVar46 = *(int *)(in_R9 + 0x1a0);
        *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
        if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) {
          FUN_1447568fc(local_500,iVar46);
        }
        puVar44 = local_508;
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar46 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x11900) = puVar54;
        uVar42 = *(uint *)(DAT_14c9ec4b0 + 4);
        if (0x1ff < uVar42) {
          uVar42 = 0x200;
        }
        if (uVar42 < 9) {
          uVar42 = 8;
        }
        lVar34 = (longlong)
                 (int)((*(int *)(lVar51 + 0x3104) - *(int *)(lVar51 + 0x30fc)) + uVar42 + -1) /
                 (longlong)(int)uVar42;
        uVar36 = (longlong)
                 (int)(((uVar42 - 1) + *(int *)(lVar51 + 0x3100)) - *(int *)(lVar51 + 0x30f8)) /
                 (longlong)(int)uVar42;
        local_4f0 = uVar36 & 0xffffffff;
        cStack_3c5 = ((DAT_14c873ee0 >> 0x14 & 1) == 0) * '\x03' + '9';
        sStack_3ca = (short)uVar24 + 1;
        local_3dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        uStack_3c6 = 1;
        local_3f8._0_4_ = 0x80020808;
        local_3f8._4_4_ = 0;
        uStack_3c4 = 0;
        uStack_3cc = 1;
        local_3c8 = 0x101;
        local_3d8 = 0;
        local_3e0 = 0;
        iVar46 = (int)uVar36;
        iStack_3d4 = DAT_14ca84e40;
        if (iVar46 < DAT_14ca84e40) {
          iStack_3d4 = iVar46;
        }
        uStack_3f0._0_4_ = 0;
        uStack_3f0._4_4_ = 0;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        if (iStack_3d4 < 2) {
          iStack_3d4 = 1;
        }
        uStack_3c3 = 0xff;
        iVar46 = (int)lVar34;
        local_3d0 = DAT_14ca84e40;
        if (iVar46 < DAT_14ca84e40) {
          local_3d0 = iVar46;
        }
        if (local_3d0 < 2) {
          local_3d0 = 1;
        }
        uVar48 = *(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar36 = uVar48 + 0x120;
        if (*(ulonglong *)(in_R9 + 0x78) < uVar36) {
          FUN_140023dd8(local_508,0x128);
          uVar48 = *puVar44 + 7 & 0xfffffffffffffff8;
          uVar36 = uVar48 + 0x120;
        }
        *(ulonglong *)(in_R9 + 0x70) = uVar36;
        FUN_1456bbb8c(uVar48,L"LocalFogVolume.CullingDataTexture",&local_3f8,0);
        iVar41 = *(int *)(in_R9 + 0x180);
        *(uint *)(in_R9 + 0x180) = iVar41 + 1U;
        if (*(uint *)(in_R9 + 0x184) < iVar41 + 1U) {
          FUN_14472c0f6(local_4e0,iVar41);
        }
        puVar44 = local_508;
        *(ulonglong *)(*(longlong *)(in_R9 + 0x178) + (longlong)iVar41 * 8) = uVar48;
        *(int *)(uVar48 + 0x9c) = *(int *)(in_R9 + 0x180) + -1;
        *(ulonglong *)(lVar51 + 0x119b0) = uVar48;
        uVar1 = *(undefined1 *)(uVar48 + 0x90);
        if ((*(char *)(uVar48 + 0x92) == '\x01') || (*(char *)(uVar48 + 0x92) == '\x04')) {
          uVar37 = *(undefined2 *)(uVar48 + 0x8e);
        }
        else {
          uVar37 = 0;
        }
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar38 = puVar54 + 8;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(local_508,0x48);
          puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar38 = puVar54 + 8;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        puVar54[1] = *(undefined8 *)(uVar48 + 8);
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 1;
        *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
        *puVar54 = &PTR_FUN_14a203858;
        *(undefined2 *)(puVar54 + 5) = 0;
        *(undefined1 *)((longlong)puVar54 + 0x2a) = uVar1;
        *(undefined1 *)((longlong)puVar54 + 0x2b) = 0;
        *(undefined2 *)((longlong)puVar54 + 0x2c) = 0;
        *(undefined2 *)((longlong)puVar54 + 0x2e) = uVar37;
        *(undefined1 *)(puVar54 + 6) = 0;
        *(undefined1 *)((longlong)puVar54 + 0x32) = 0;
        puVar54[7] = uVar48;
        iVar41 = *(int *)(in_R9 + 0x1a0);
        *(uint *)(in_R9 + 0x1a0) = iVar41 + 1U;
        if (*(uint *)(in_R9 + 0x1a4) < iVar41 + 1U) {
          FUN_1447568fc(local_500,iVar41);
        }
        puVar44 = local_508;
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar41 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x119b8) = puVar54;
        lVar52 = *(longlong *)(lVar51 + 0x119b0);
        uVar1 = *(undefined1 *)(lVar52 + 0x94);
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar38 = puVar54 + 9;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(local_508,0x50);
          puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar38 = puVar54 + 9;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        puVar54[1] = *(undefined8 *)(lVar52 + 8);
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 0;
        *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar54 + 5) = 0;
        *puVar54 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar54 + 6) = uVar1;
        *(undefined1 *)(puVar54 + 7) = 0;
        *(undefined4 *)((longlong)puVar54 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar54 + 0x35) = 0;
        puVar54[8] = lVar52;
        iVar41 = *(int *)(in_R9 + 0x1a0);
        *(uint *)(in_R9 + 0x1a0) = iVar41 + 1U;
        if (*(uint *)(in_R9 + 0x1a4) < iVar41 + 1U) {
          FUN_1447568fc(local_500,iVar41);
        }
        uVar36 = local_4f0;
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar41 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x119c0) = puVar54;
        *(ulonglong *)(lVar51 + 0x11948) = (lVar34 << 0x20) + local_4f0;
        *(undefined4 *)(lVar51 + 0x11950) = *(undefined4 *)(lVar51 + 0x118e0);
        *(uint *)(lVar51 + 0x11954) = uVar42;
        fVar71 = 0.0;
        if (0.0 <= *(float *)(DAT_14c9ec480 + 4)) {
          fVar71 = *(float *)(DAT_14c9ec480 + 4);
        }
        *(float *)(lVar51 + 0x11958) = fVar71;
        *(uint *)(lVar51 + 0x1195c) = (uint)(byte)local_4f8;
        *(undefined8 *)(lVar51 + 72000) = *(undefined8 *)(lVar51 + 0x118f0);
        fVar71 = 10.0;
        if (10.0 <= *(float *)(DAT_14c9ec510 + 4)) {
          fVar71 = *(float *)(DAT_14c9ec510 + 4);
        }
        *(float *)(lVar51 + 0x11960) = fVar71;
        if ((&DAT_14ca814b8)
            [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar51 + 0x3090) * 2) * 0xf]
            == 1) {
          *(undefined4 *)(lVar51 + 0x11988) = DAT_14c846338;
          *(undefined8 *)(lVar51 + 0x11980) = DAT_14c846330;
          *(undefined8 *)(lVar51 + 0x11990) = DAT_14c846330;
          *(undefined4 *)(lVar51 + 0x11998) = DAT_14c846338;
          lVar34 = 0;
          do {
            lVar52 = *(longlong *)(local_4e8 + 0x36a0 + lVar34 * 8);
            if (lVar52 != 0) {
              (**(code **)(**(longlong **)(lVar52 + 0x28) + 0x138))
                        (*(longlong **)(lVar52 + 0x28),&local_3f8);
              *(ulonglong *)(lVar51 + 0x11980) = CONCAT44(local_3f8._4_4_,(int)local_3f8);
              *(undefined4 *)(lVar51 + 0x11988) = (undefined4)uStack_3f0;
              lVar34 = *(longlong *)(lVar52 + 0x28);
              dVar64 = *(double *)(lVar34 + 0x90);
              uVar62 = 0x80000000;
              in_XMM3_Dc = 0x80000000;
              in_XMM3_Dd = 0x80000000;
              dVar9 = *(double *)(lVar34 + 0x70);
              uVar28 = uVar28 ^ 0x80000000;
              in_XMM2_Dc = in_XMM2_Dc ^ 0x80000000;
              in_XMM2_Dd = in_XMM2_Dd ^ 0x80000000;
              *(float *)(lVar51 + 0x11990) = -(float)*(double *)(lVar34 + 0x50);
              *(float *)(lVar51 + 0x11994) = -(float)dVar9;
              *(float *)(lVar51 + 0x11998) = -(float)dVar64;
              uVar36 = local_4f0;
              break;
            }
            lVar34 = lVar34 + 1;
          } while (lVar34 != 3);
        }
        else {
          plVar35 = *(longlong **)(lVar51 + 0x13788);
          if (plVar35 == (longlong *)0x0) {
            lVar34 = *(longlong *)(lVar51 + 0x3110);
            uVar40 = *(undefined4 *)(lVar34 + 0xc38);
            *(undefined8 *)(lVar51 + 0x11980) = *(undefined8 *)(lVar34 + 0xc30);
            *(undefined4 *)(lVar51 + 0x11988) = uVar40;
            *(undefined8 *)(lVar51 + 0x11990) = *(undefined8 *)(lVar34 + 0xc40);
            *(undefined4 *)(lVar51 + 0x11998) = *(undefined4 *)(lVar34 + 0xc48);
          }
          else {
            (**(code **)(*plVar35 + 0x138))(plVar35,&local_3f8);
            *(ulonglong *)(lVar51 + 0x11980) = CONCAT44(local_3f8._4_4_,(int)local_3f8);
            *(undefined4 *)(lVar51 + 0x11988) = (undefined4)uStack_3f0;
            dVar64 = (double)plVar35[0x12];
            uVar62 = 0x80000000;
            in_XMM3_Dc = 0x80000000;
            in_XMM3_Dd = 0x80000000;
            dVar9 = (double)plVar35[0xe];
            uVar28 = uVar28 ^ 0x80000000;
            in_XMM2_Dc = in_XMM2_Dc ^ 0x80000000;
            in_XMM2_Dd = in_XMM2_Dd ^ 0x80000000;
            *(float *)(lVar51 + 0x11990) = -(float)(double)plVar35[10];
            *(float *)(lVar51 + 0x11994) = -(float)dVar9;
            *(float *)(lVar51 + 0x11998) = -(float)dVar64;
          }
        }
        local_3f8._4_4_ = iVar46 * (int)uVar36 * 4;
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        uStack_3f0._0_4_ = 0x4109;
        local_3f8._0_4_ = 4;
        local_518 = 0;
        local_510 = 0;
        lVar34 = FUN_1400489e9(in_R9,L"LocalFogVolume.GPUTileDataBuffer",&local_3f8,0);
        puVar44 = local_508;
        *(longlong *)(lVar51 + 0x11908) = lVar34;
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar38 = puVar54 + 9;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(local_508,0x50);
          puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar38 = puVar54 + 9;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        puVar54[1] = *(undefined8 *)(lVar34 + 8);
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 3;
        *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
        *puVar54 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar54 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar54 + 0x2c) = 0xffffffff00000000;
        puVar54[7] = 0;
        puVar54[8] = lVar34;
        iVar46 = *(int *)(in_R9 + 0x1a0);
        *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
        if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) {
          FUN_1447568fc(local_500,iVar46);
        }
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar46 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x11910) = puVar54;
        lVar34 = *(longlong *)(lVar51 + 0x11908);
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar38 = puVar54 + 8;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(puVar44,0x48);
          puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar38 = puVar54 + 8;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        puVar54[1] = *(undefined8 *)(lVar34 + 8);
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 2;
        *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar54 + 5) = 0;
        *puVar54 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar54 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar54 + 0x32) = 0;
        puVar54[7] = lVar34;
        iVar46 = *(int *)(in_R9 + 0x1a0);
        *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
        if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) {
          FUN_1447568fc(local_500,iVar46);
        }
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar46 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x11918) = puVar54;
        uVar24 = DAT_14ca84e48;
        if (0xf < DAT_14ca84e48) {
          uVar24 = 0x10;
        }
        uStack_3e8 = 0;
        uStack_3e4 = 0;
        local_3f8._0_4_ = uVar24 + (uVar24 == 0);
        local_3f8._4_4_ = 1;
        uStack_3f0._0_4_ = 0x4189;
        uVar48 = *(longlong *)(in_R9 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar36 = uVar48 + 0x150;
        if (*(ulonglong *)(in_R9 + 0x78) < uVar36) {
          FUN_140023dd8(puVar44,0x160);
          uVar48 = *puVar44 + 0xf & 0xfffffffffffffff0;
          uVar36 = uVar48 + 0x150;
        }
        *(ulonglong *)(in_R9 + 0x70) = uVar36;
        FUN_1456bd266(uVar48,L"LocalFogVolume.DispatchIndirectBuffer",&local_3f8,0);
        iVar46 = *(int *)(in_R9 + 400);
        *(uint *)(in_R9 + 400) = iVar46 + 1U;
        if (*(uint *)(in_R9 + 0x194) < iVar46 + 1U) {
          FUN_144737178(local_4b8,iVar46);
        }
        *(ulonglong *)(*(longlong *)(in_R9 + 0x188) + (longlong)iVar46 * 8) = uVar48;
        *(int *)(uVar48 + 0x7c) = *(int *)(in_R9 + 400) + -1;
        *(ulonglong *)(lVar51 + 0x11920) = uVar48;
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar38 = puVar54 + 8;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(puVar44,0x48);
          puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar38 = puVar54 + 8;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        puVar54[1] = *(undefined8 *)(uVar48 + 8);
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 2;
        *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar54 + 5) = 0;
        *puVar54 = &PTR_FUN_14a1fb3e8;
        *(undefined2 *)(puVar54 + 6) = 0x1c;
        *(undefined1 *)((longlong)puVar54 + 0x32) = 0;
        puVar54[7] = uVar48;
        iVar46 = *(int *)(in_R9 + 0x1a0);
        *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
        if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) {
          FUN_1447568fc(local_500,iVar46);
        }
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar46 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x11928) = puVar54;
        if (DAT_14ca84e23 == '\x01') {
          cVar18 = (0 < *(int *)(DAT_14c9ec4e0 + 4)) * '\x02' + '\x02';
        }
        else {
          cVar18 = '\x02';
        }
        FUN_1405bfba3(in_R9,puVar54,0,cVar18);
        puVar21 = local_508;
        *(char *)(lVar51 + 0x119c8) = param_6;
        if (param_6 == '\0') {
          *(undefined1 **)(lVar51 + 0x11970) = &DAT_3f8000003f800000;
          *(undefined1 **)(lVar51 + 0x11978) = &DAT_3f8000003f800000;
          lVar34 = FUN_14476842e(in_R9,&DAT_14ca63b30,L"BlackAlphaOneDummy",2);
          *(longlong *)(lVar51 + 0x119d8) = lVar34;
          if ((*(char *)(lVar34 + 0x92) == '\x04') || (*(char *)(lVar34 + 0x92) == '\x01')) {
            uVar37 = *(undefined2 *)(lVar34 + 0x8e);
          }
          else {
            uVar37 = 0;
          }
          uVar1 = *(undefined1 *)(lVar34 + 0x90);
          puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar38 = puVar54 + 8;
          if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
            FUN_140023dd8(puVar44,0x48);
            puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar38 = puVar54 + 8;
          }
          *(undefined8 **)(in_R9 + 0x70) = puVar38;
          puVar54[1] = *(undefined8 *)(lVar34 + 8);
          puVar54[2] = 0;
          *(undefined1 *)(puVar54 + 3) = 1;
          *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
          *puVar54 = &PTR_FUN_14a203858;
          *(undefined2 *)(puVar54 + 5) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x2a) = uVar1;
          *(undefined1 *)((longlong)puVar54 + 0x2b) = 0;
          *(undefined2 *)((longlong)puVar54 + 0x2c) = 0;
          *(undefined2 *)((longlong)puVar54 + 0x2e) = uVar37;
          *(undefined1 *)(puVar54 + 6) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x32) = 0;
          puVar54[7] = lVar34;
          iVar46 = *(int *)(in_R9 + 0x1a0);
          *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
          if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) {
            FUN_1447568fc(local_500,iVar46);
          }
          *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar46 * 8) = puVar54;
          *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
          *(undefined8 **)(lVar51 + 0x119e0) = puVar54;
          lVar34 = FUN_14476842e(in_R9,&DAT_14ca63b28,L"BlackDummy",2);
          *(longlong *)(lVar51 + 0x119e8) = lVar34;
          uVar1 = *(undefined1 *)(lVar34 + 0x90);
          if ((*(char *)(lVar34 + 0x92) == '\x04') || (*(char *)(lVar34 + 0x92) == '\x01')) {
            uVar37 = *(undefined2 *)(lVar34 + 0x8e);
          }
          else {
            uVar37 = 0;
          }
          puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar38 = puVar54 + 8;
          if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
            FUN_140023dd8(puVar44,0x48);
            puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar38 = puVar54 + 8;
          }
          *(undefined8 **)(in_R9 + 0x70) = puVar38;
          puVar54[1] = *(undefined8 *)(lVar34 + 8);
          puVar54[2] = 0;
          *(undefined1 *)(puVar54 + 3) = 1;
          *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
          *puVar54 = &PTR_FUN_14a203858;
          *(undefined2 *)(puVar54 + 5) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x2a) = uVar1;
          *(undefined1 *)((longlong)puVar54 + 0x2b) = 0;
          *(undefined2 *)((longlong)puVar54 + 0x2c) = 0;
          *(undefined2 *)((longlong)puVar54 + 0x2e) = uVar37;
          *(undefined1 *)(puVar54 + 6) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x32) = 0;
          puVar54[7] = lVar34;
          iVar46 = *(int *)(in_R9 + 0x1a0);
          *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
          if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) {
LAB_142d04315:
            FUN_1447568fc(local_500,iVar46);
          }
        }
        else {
          iVar20 = (int)*(longlong *)(lVar51 + 0x3100) - (int)*(ulonglong *)(lVar51 + 0x30f8);
          iVar46 = (int)(*(longlong *)(lVar51 + 0x3100) -
                         (*(ulonglong *)(lVar51 + 0x30f8) & 0xffffffff00000000) >> 0x20);
          iVar41 = (iVar46 - (iVar46 + 1 >> 0x1f)) + 1 >> 1;
          iVar46 = (iVar20 - (iVar20 + 1 >> 0x1f)) + 1 >> 1;
          if (iVar46 < 2) {
            iVar46 = 1;
          }
          if (iVar41 < 2) {
            iVar41 = 1;
          }
          *(ulonglong *)(lVar51 + 0x119cc) = CONCAT44(iVar41,iVar46);
          uVar62 = 0;
          in_XMM3_Dc = 0;
          in_XMM3_Dd = 0;
          *(float *)(lVar51 + 0x11970) = (float)iVar46;
          *(float *)(lVar51 + 0x11974) = (float)iVar41;
          *(float *)(lVar51 + 0x11978) = 1.0 / (float)iVar46;
          *(float *)(lVar51 + 0x1197c) = 1.0 / (float)iVar41;
          uVar24 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_3f8._0_4_ = 0x84000009;
          local_3f8._4_4_ = 0;
          uStack_3c4 = 0;
          uStack_3cc = 1;
          sStack_3ca = 1;
          local_3c8 = 0x101;
          uStack_3c6 = 0;
          cStack_3c5 = 10;
          local_3e0 = 0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          uStack_3e8 = 0;
          uStack_3e4 = 0;
          iStack_3d4 = DAT_14ca84e40;
          if (iVar46 < DAT_14ca84e40) {
            iStack_3d4 = iVar46;
          }
          local_3d8 = 0;
          if (iStack_3d4 < 2) {
            iStack_3d4 = 1;
          }
          uStack_3c3 = 0xff;
          local_3d0 = DAT_14ca84e40;
          if (iVar41 < DAT_14ca84e40) {
            local_3d0 = iVar41;
          }
          if (local_3d0 < 2) {
            local_3d0 = 1;
          }
          uVar48 = *(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar36 = uVar48 + 0x120;
          local_3dc = uVar24;
          if (*(ulonglong *)(in_R9 + 0x78) < uVar36) {
            FUN_140023dd8(local_508,0x128);
            uVar48 = *puVar21 + 7 & 0xfffffffffffffff8;
            uVar36 = uVar48 + 0x120;
          }
          *(ulonglong *)(in_R9 + 0x70) = uVar36;
          FUN_1456bbb8c(uVar48,L"LocalFogVolume.HalfResLocalFogVolumeView",&local_3f8,0);
          iVar20 = *(int *)(in_R9 + 0x180);
          *(uint *)(in_R9 + 0x180) = iVar20 + 1U;
          if (*(uint *)(in_R9 + 0x184) < iVar20 + 1U) {
            FUN_14472c0f6(local_4e0,iVar20);
          }
          puVar44 = local_508;
          *(ulonglong *)(*(longlong *)(in_R9 + 0x178) + (longlong)iVar20 * 8) = uVar48;
          *(int *)(uVar48 + 0x9c) = *(int *)(in_R9 + 0x180) + -1;
          *(ulonglong *)(lVar51 + 0x119d8) = uVar48;
          local_4f8 = CONCAT71(local_4f8._1_7_,*(undefined1 *)(uVar48 + 0x90));
          if ((*(char *)(uVar48 + 0x92) == '\x04') || (*(char *)(uVar48 + 0x92) == '\x01')) {
            uVar37 = *(undefined2 *)(uVar48 + 0x8e);
          }
          else {
            uVar37 = 0;
          }
          puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar38 = puVar54 + 8;
          if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
            FUN_140023dd8(local_508,0x48);
            puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar38 = puVar54 + 8;
          }
          *(undefined8 **)(in_R9 + 0x70) = puVar38;
          puVar54[1] = *(undefined8 *)(uVar48 + 8);
          puVar54[2] = 0;
          *(undefined1 *)(puVar54 + 3) = 1;
          *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
          *puVar54 = &PTR_FUN_14a203858;
          *(undefined2 *)(puVar54 + 5) = 0;
          *(byte *)((longlong)puVar54 + 0x2a) = (byte)local_4f8;
          *(undefined2 *)((longlong)puVar54 + 0x2b) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x2d) = 0;
          *(undefined2 *)((longlong)puVar54 + 0x2e) = uVar37;
          *(undefined1 *)(puVar54 + 6) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x32) = 0;
          puVar54[7] = uVar48;
          iVar20 = *(int *)(in_R9 + 0x1a0);
          *(uint *)(in_R9 + 0x1a0) = iVar20 + 1U;
          if (*(uint *)(in_R9 + 0x1a4) < iVar20 + 1U) {
            FUN_1447568fc(local_500,iVar20);
          }
          puVar44 = local_508;
          *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar20 * 8) = puVar54;
          *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
          *(undefined8 **)(lVar51 + 0x119e0) = puVar54;
          local_3f8._0_4_ = -0x7bfffff7;
          local_3f8._4_4_ = 0;
          uStack_3c4 = 0;
          uStack_3cc = 1;
          sStack_3ca = 1;
          local_3c8 = 0x101;
          uStack_3c6 = 0;
          cStack_3c5 = '\x15';
          local_3e0 = 0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          uStack_3e8 = 0;
          uStack_3e4 = 0;
          if (DAT_14ca84e40 <= iVar46) {
            iVar46 = DAT_14ca84e40;
          }
          local_3d8 = 0;
          iStack_3d4 = iVar46;
          if (iVar46 < 2) {
            iStack_3d4 = 1;
          }
          uStack_3c3 = 0xff;
          local_3d0 = DAT_14ca84e40;
          if (iVar41 < DAT_14ca84e40) {
            local_3d0 = iVar41;
          }
          if (local_3d0 < 2) {
            local_3d0 = 1;
          }
          uVar48 = *(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar36 = uVar48 + 0x120;
          local_3dc = uVar24;
          if (*(ulonglong *)(in_R9 + 0x78) < uVar36) {
            FUN_140023dd8(local_508,0x128);
            uVar48 = *puVar44 + 7 & 0xfffffffffffffff8;
            uVar36 = uVar48 + 0x120;
          }
          *(ulonglong *)(in_R9 + 0x70) = uVar36;
          FUN_1456bbb8c(uVar48,L"LocalFogVolume.HalfResLocalFogVolumeDepth",&local_3f8,0);
          iVar46 = *(int *)(in_R9 + 0x180);
          *(uint *)(in_R9 + 0x180) = iVar46 + 1U;
          if (*(uint *)(in_R9 + 0x184) < iVar46 + 1U) {
            FUN_14472c0f6(local_4e0,iVar46);
          }
          puVar44 = local_508;
          *(ulonglong *)(*(longlong *)(in_R9 + 0x178) + (longlong)iVar46 * 8) = uVar48;
          *(int *)(uVar48 + 0x9c) = *(int *)(in_R9 + 0x180) + -1;
          *(ulonglong *)(lVar51 + 0x119e8) = uVar48;
          uVar1 = *(undefined1 *)(uVar48 + 0x90);
          if ((*(char *)(uVar48 + 0x92) == '\x04') || (*(char *)(uVar48 + 0x92) == '\x01')) {
            uVar37 = *(undefined2 *)(uVar48 + 0x8e);
          }
          else {
            uVar37 = 0;
          }
          puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar38 = puVar54 + 8;
          if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
            FUN_140023dd8(local_508,0x48);
            puVar54 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar38 = puVar54 + 8;
          }
          *(undefined8 **)(in_R9 + 0x70) = puVar38;
          puVar54[1] = *(undefined8 *)(uVar48 + 8);
          puVar54[2] = 0;
          *(undefined1 *)(puVar54 + 3) = 1;
          *(undefined8 *)((longlong)puVar54 + 0x1c) = 0xffffffffffffffff;
          *puVar54 = &PTR_FUN_14a203858;
          *(undefined2 *)(puVar54 + 5) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x2a) = uVar1;
          *(undefined2 *)((longlong)puVar54 + 0x2b) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x2d) = 0;
          *(undefined2 *)((longlong)puVar54 + 0x2e) = uVar37;
          *(undefined1 *)(puVar54 + 6) = 0;
          *(undefined1 *)((longlong)puVar54 + 0x32) = 0;
          puVar54[7] = uVar48;
          iVar46 = *(int *)(in_R9 + 0x1a0);
          *(uint *)(in_R9 + 0x1a0) = iVar46 + 1U;
          puVar44 = local_508;
          if (*(uint *)(in_R9 + 0x1a4) < iVar46 + 1U) goto LAB_142d04315;
        }
        local_3f8 = (undefined8 *)(lVar51 + 72000);
        *(undefined8 **)(*(longlong *)(in_R9 + 0x198) + (longlong)iVar46 * 8) = puVar54;
        *(int *)((longlong)puVar54 + 0x1c) = *(int *)(in_R9 + 0x1a0) + -1;
        *(undefined8 **)(lVar51 + 0x119f0) = puVar54;
        *(undefined8 *)(lVar51 + 0x119a0) = *(undefined8 *)(lVar51 + 0x119b8);
        lVar34 = FUN_140048c7e();
        local_478 = *(double *)(lVar34 + 0x18);
        uVar23 = FUN_140048b96(local_4b0,puVar44,&local_3f8,&local_478);
        *(undefined8 *)(lVar51 + 0x11930) = uVar23;
      }
      puVar21 = local_508;
      lVar34 = local_4d8;
      if (*(int *)(lVar51 + 0x118e0) != 0) {
        iVar46 = *(int *)(*(longlong *)(lVar51 + 0x119b0) + 0x84);
        iVar41 = *(int *)(*(longlong *)(lVar51 + 0x119b0) + 0x88);
        puVar54 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar38 = puVar54 + 0x26;
        if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
          FUN_140023dd8(local_508,0x140);
          puVar54 = (undefined8 *)(*puVar21 + 0xf & 0xfffffffffffffff0);
          puVar38 = puVar54 + 0x26;
        }
        *(undefined8 **)(in_R9 + 0x70) = puVar38;
        *puVar54 = &PTR_FUN_14a254338;
        puVar54[2] = 0;
        *(undefined1 *)(puVar54 + 3) = 1;
        puVar54[4] = 0;
        puVar54[10] = 0;
        puVar54[0xb] = 0x3f80000000000000;
        puVar54[0x10] = 0;
        puVar54[0x11] = 0;
        puVar54[0x12] = 0;
        puVar54[0x13] = 0;
        puVar54[0x14] = 0;
        puVar54[0x15] = 0;
        puVar54[0x18] = 0;
        puVar54[0x19] = 0;
        *(undefined8 *)((longlong)puVar54 + 0xcc) = 0;
        *(undefined8 *)((longlong)puVar54 + 0xd4) = 0;
        auVar57._0_12_ = ZEXT812(0x3f800000);
        auVar57._12_4_ = 0;
        *(undefined1 (*) [16])((longlong)puVar54 + 0xdc) = auVar57;
        *(undefined1 (*) [16])((longlong)puVar54 + 0xec) = auVar57;
        *(undefined1 (*) [16])((longlong)puVar54 + 0xfc) = auVar57;
        *(undefined1 (*) [16])((longlong)puVar54 + 0x10c) = auVar57;
        *(undefined4 *)((longlong)puVar54 + 0x11c) = 0x3f800000;
        iVar20 = *(int *)(in_R9 + 0xa0);
        *(uint *)(in_R9 + 0xa0) = iVar20 + 1U;
        if (*(uint *)(in_R9 + 0xa4) < iVar20 + 1U) {
          FUN_1448cfae8(local_4d0,iVar20);
        }
        *(undefined8 **)(*local_4d0 + (longlong)iVar20 * 8) = puVar54;
        lVar34 = FUN_1447e4f80();
        cVar18 = *(char *)(lVar34 + 0x41);
        if (*(char *)(lVar34 + 0x41) == '\x03') {
          cVar18 = '\x02';
        }
        puVar54[2] = *(undefined8 *)(lVar51 + 0x18);
        *(char *)(puVar54 + 3) = cVar18;
        puVar38 = (undefined8 *)(lVar51 + 72000);
        puVar33 = puVar54 + 4;
        for (lVar34 = 0xc; lVar34 != 0; lVar34 = lVar34 + -1) {
          *puVar33 = *puVar38;
          puVar38 = puVar38 + 1;
          puVar33 = puVar33 + 1;
        }
        puVar54[0x11] = *(undefined8 *)(lVar51 + 0x11900);
        puVar54[0x10] = *(undefined8 *)(lVar51 + 0x119c0);
        puVar54[0x12] = *(undefined8 *)(lVar51 + 0x11918);
        puVar54[0x13] = *(undefined8 *)(lVar51 + 0x11928);
        puVar54[0x14] = *(undefined8 *)(lVar51 + 0x136f0);
        puVar54[0x15] = DAT_14c9c0d80;
        uVar23 = *(undefined8 *)(lVar51 + 0x137c8);
        *(float *)(puVar54 + 0x16) = (float)(int)uVar23;
        *(float *)((longlong)puVar54 + 0xb4) = (float)(int)((ulonglong)uVar23 >> 0x20);
        iVar20 = *(int *)(lVar51 + 0x3104);
        iVar3 = *(int *)(lVar51 + 0x30fc);
        *(float *)(puVar54 + 0x17) = (float)(*(int *)(lVar51 + 0x3100) - *(int *)(lVar51 + 0x30f8));
        *(float *)((longlong)puVar54 + 0xbc) = (float)(iVar20 - iVar3);
        iVar20 = *(int *)(lVar51 + 0x3100);
        iVar3 = *(int *)(lVar51 + 0x3104);
        iVar4 = *(int *)(lVar51 + 0x30fc);
        iVar5 = *(int *)(lVar51 + 0x30f8);
        puVar54[0x18] = 0;
        puVar54[0x19] = CONCAT44(iVar3 - iVar4,iVar20 - iVar5);
        if (*(int *)(lVar51 + 0x2010) < 4) {
          *(undefined8 *)((longlong)puVar54 + 0xfc) = 0;
          *(undefined8 *)((longlong)puVar54 + 0x104) = 0;
          puVar54[0x1e] = 0;
          puVar54[0x1f] = 0;
          puVar54[0x1c] = 0;
          puVar54[0x1d] = 0;
          puVar54[0x1a] = 0;
          puVar54[0x1b] = 0;
          fVar71 = 0.0;
        }
        else {
          pdVar6 = (double *)(lVar51 + 8000);
          pdVar27 = *(double **)(lVar51 + 0x2000);
          if (*(double **)(lVar51 + 0x2000) == (double *)0x0) {
            pdVar27 = pdVar6;
          }
          *(float *)(puVar54 + 0x1a) = (float)*pdVar27;
          *(float *)((longlong)puVar54 + 0xd4) = (float)pdVar27[1];
          *(float *)(puVar54 + 0x1b) = (float)pdVar27[2];
          *(float *)((longlong)puVar54 + 0xdc) = (float)pdVar27[3];
          pdVar27 = *(double **)(lVar51 + 0x2000);
          if (*(double **)(lVar51 + 0x2000) == (double *)0x0) {
            pdVar27 = pdVar6;
          }
          dVar64 = pdVar27[4];
          *(float *)(puVar54 + 0x1c) = (float)dVar64;
          dVar9 = pdVar27[5];
          *(float *)((longlong)puVar54 + 0xe4) = (float)dVar9;
          dVar11 = pdVar27[6];
          *(float *)(puVar54 + 0x1d) = (float)dVar11;
          auVar58 = insertps(ZEXT416((uint)(float)dVar64),ZEXT416((uint)(float)dVar9),0x10);
          auVar7._4_4_ = uVar28;
          auVar7._0_4_ = (float)dVar11;
          auVar7._8_4_ = in_XMM2_Dc;
          auVar7._12_4_ = in_XMM2_Dd;
          auVar58 = insertps(auVar58,auVar7,0x20);
          auVar8._4_4_ = uVar62;
          auVar8._0_4_ = (float)pdVar27[7];
          auVar8._8_4_ = in_XMM3_Dc;
          auVar8._12_4_ = in_XMM3_Dd;
          auVar58 = insertps(auVar58,auVar8,0x30);
          *(uint *)(puVar54 + 0x1c) = auVar58._0_4_ ^ 0x80000000;
          *(uint *)((longlong)puVar54 + 0xe4) = auVar58._4_4_ ^ 0x80000000;
          *(uint *)(puVar54 + 0x1d) = auVar58._8_4_ ^ 0x80000000;
          *(uint *)((longlong)puVar54 + 0xec) = auVar58._12_4_ ^ 0x80000000;
          pdVar27 = *(double **)(lVar51 + 0x2000);
          if (*(double **)(lVar51 + 0x2000) == (double *)0x0) {
            pdVar27 = pdVar6;
          }
          dVar64 = pdVar27[8];
          *(float *)(puVar54 + 0x1e) = (float)dVar64;
          dVar9 = pdVar27[9];
          *(float *)((longlong)puVar54 + 0xf4) = (float)dVar9;
          uVar28 = 0;
          in_XMM2_Dc = 0;
          in_XMM2_Dd = 0;
          dVar11 = pdVar27[10];
          *(float *)(puVar54 + 0x1f) = (float)dVar11;
          uVar62 = 0;
          in_XMM3_Dc = 0;
          in_XMM3_Dd = 0;
          auVar58 = insertps(ZEXT416((uint)(float)dVar64),ZEXT416((uint)(float)dVar9),0x10);
          auVar58 = insertps(auVar58,ZEXT416((uint)(float)dVar11),0x20);
          auVar58 = insertps(auVar58,ZEXT416((uint)(float)pdVar27[0xb]),0x30);
          *(uint *)(puVar54 + 0x1e) = auVar58._0_4_ ^ 0x80000000;
          *(uint *)((longlong)puVar54 + 0xf4) = auVar58._4_4_ ^ 0x80000000;
          *(uint *)(puVar54 + 0x1f) = auVar58._8_4_ ^ 0x80000000;
          *(uint *)((longlong)puVar54 + 0xfc) = auVar58._12_4_ ^ 0x80000000;
          pdVar27 = *(double **)(lVar51 + 0x2000);
          if (*(double **)(lVar51 + 0x2000) == (double *)0x0) {
            pdVar27 = pdVar6;
          }
          *(float *)(puVar54 + 0x20) = (float)pdVar27[0xc];
          *(float *)((longlong)puVar54 + 0x104) = (float)pdVar27[0xd];
          *(float *)(puVar54 + 0x21) = (float)pdVar27[0xe];
          fVar71 = (float)pdVar27[0xf];
        }
        *(float *)((longlong)puVar54 + 0x10c) = fVar71;
        *(float *)(puVar54 + 0x22) = (float)*(double *)(lVar51 + 0x2150);
        *(float *)((longlong)puVar54 + 0x114) = (float)*(double *)(lVar51 + 0x2158);
        *(float *)(puVar54 + 0x23) = (float)*(double *)(lVar51 + 0x2160);
        *(float *)((longlong)puVar54 + 0x11c) = (float)*(double *)(lVar51 + 0x2168);
        iVar20 = *(int *)(lVar51 + 0x11954);
        iVar3 = *(int *)(lVar51 + 0x1194c);
        lVar34 = *(longlong *)(lVar51 + 0x3110);
        fVar71 = *(float *)(lVar34 + 0xb0c);
        *(float *)(puVar54 + 0x24) =
             (float)(uint)(*(int *)(lVar51 + 0x11948) * iVar20) * *(float *)(lVar34 + 0xb08);
        *(float *)((longlong)puVar54 + 0x124) = (float)(uint)(iVar20 * iVar3) * fVar71;
        iVar20 = (int)CONCAT62((int6)((ulonglong)lVar34 >> 0x10),2);
        if (DAT_14ca84e23 == '\x01') {
          iVar20 = (uint)(0 < *(int *)(DAT_14c9ec4e0 + 4)) * 2 + 2;
        }
        local_4f8 = CONCAT44(local_4f8._4_4_,iVar20);
        if (*(longlong *)(lVar51 + 0x136f0) == 0) {
          bVar55 = false;
        }
        else {
          bVar55 = *(int *)(DAT_14c9ec528 + 4) != 0;
        }
        puVar54 = puVar54 + 2;
        iVar20 = iVar46 + 7;
        iVar46 = iVar46 + 0xe;
        if (-1 < iVar20) {
          iVar46 = iVar20;
        }
        uVar24 = iVar46 >> 3;
        iVar46 = iVar41 + 7;
        iVar41 = iVar41 + 0xe;
        if (-1 < iVar46) {
          iVar41 = iVar46;
        }
        uVar23 = *(undefined8 *)(lVar51 + 0x13818);
        FUN_141590fc0();
        FUN_1448e935e(uVar23,&local_3f8,&DAT_14c9ec600,bVar55);
        FUN_141590fc0();
        puVar38 = local_3f8;
        uVar36 = CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
        FUN_1415910e2();
        local_3f8._0_4_ = 0;
        local_3f8._4_4_ = 0;
        uStack_3f0._0_4_ = 0;
        uStack_3f0._4_4_ = 0;
        local_4c8 = puVar38;
        FUN_1448f70da(puVar38,&DAT_14c9f0098,puVar54,&local_3f8);
        FUN_140069376(in_R9);
        puVar44 = local_508;
        uVar39 = (uint6)(ushort)(local_4f8 >> 0x10);
        local_4f0 = uVar36;
        local_3f8 = puVar54;
        if ((ushort)local_4f8 < 4) {
          uVar40 = (undefined4)local_4f8;
          if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
             ((DAT_14ca84e6a != 0 && ((DAT_14ca84e99 & 1) == 0)))) {
            uVar40 = (undefined4)CONCAT62(uVar39,4);
          }
          puVar33 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar38 = puVar33 + 0x3d;
          if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
            FUN_140023dd8(local_508,0x1f0);
            puVar33 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar38 = puVar33 + 0x3d;
          }
          *local_508 = (ulonglong)puVar38;
          uStack_3f0._0_4_ = (undefined4)DAT_14c9f00e0;
          uStack_3f0._4_4_ = (undefined4)((ulonglong)DAT_14c9f00e0 >> 0x20);
          if (DAT_14c9f00e0 != 0) {
            LOCK();
            *(int *)(DAT_14c9f00e0 + 8) = *(int *)(DAT_14c9f00e0 + 8) + 1;
            UNLOCK();
          }
          uStack_3e8 = 0x4c9f0098;
          uStack_3e4 = 1;
          local_518 = CONCAT71(local_518._1_7_,2);
          FUN_140068f1a(puVar33,&local_478,&local_3f8,uVar40);
          *puVar33 = &PTR_FUN_14a254360;
          puVar33[0x37] = &DAT_14c9f0098;
          puVar33[0x38] = puVar54;
          puVar33[0x39] = local_4c8;
          puVar33[0x3a] = local_4f0;
          *(uint *)(puVar33 + 0x3b) = uVar24;
          *(int *)((longlong)puVar33 + 0x1dc) = iVar41 >> 3;
          *(undefined4 *)(puVar33 + 0x3c) = 1;
        }
        else {
          iVar46 = (int)CONCAT62(uVar39,2);
          if ((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) {
            iVar46 = (uint)(byte)~(~DAT_14ca84e6a | DAT_14ca84e99) * 2 + 2;
          }
          puVar33 = (undefined8 *)(*(longlong *)(in_R9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar38 = puVar33 + 0x3e;
          local_4f8 = (ulonglong)uVar24;
          if (*(undefined8 **)(in_R9 + 0x78) < puVar38) {
            FUN_140023dd8(local_508,0x1f8);
            puVar33 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar38 = puVar33 + 0x3e;
          }
          *(undefined8 **)(in_R9 + 0x70) = puVar38;
          uVar40 = *(undefined4 *)(in_R9 + 0x660);
          uStack_3f0._0_4_ = (undefined4)DAT_14c9f00e0;
          uStack_3f0._4_4_ = (undefined4)((ulonglong)DAT_14c9f00e0 >> 0x20);
          if (DAT_14c9f00e0 != 0) {
            LOCK();
            *(int *)(DAT_14c9f00e0 + 8) = *(int *)(DAT_14c9f00e0 + 8) + 1;
            UNLOCK();
          }
          uStack_3e8 = 0x4c9f0098;
          uStack_3e4 = 1;
          local_518 = CONCAT71(local_518._1_7_,2);
          FUN_140068f1a(puVar33,&local_478,&local_3f8,iVar46);
          puVar33[0x37] = &DAT_14c9f0098;
          puVar33[0x38] = puVar54;
          puVar33[0x39] = local_4c8;
          puVar33[0x3a] = local_4f0;
          *(int *)(puVar33 + 0x3b) = (int)local_4f8;
          *(int *)((longlong)puVar33 + 0x1dc) = iVar41 >> 3;
          *(undefined4 *)(puVar33 + 0x3c) = 1;
          *puVar33 = &PTR_FUN_14a254340;
          *(undefined4 *)(puVar33 + 0x3d) = uVar40;
        }
        lVar34 = local_4d8;
        puVar44 = local_508;
        iVar46 = *(int *)(in_R9 + 0x170);
        *(uint *)(in_R9 + 0x170) = iVar46 + 1U;
        if (*(uint *)(in_R9 + 0x174) < iVar46 + 1U) {
          FUN_14470e57a(local_4c0,iVar46);
        }
        *(undefined8 **)(*(longlong *)(in_R9 + 0x168) + (longlong)iVar46 * 8) = puVar33;
        *(int *)((longlong)puVar33 + 0x2c) = *(int *)(in_R9 + 0x170) + -1;
        FUN_140069100(in_R9,puVar33);
      }
      if (local_488 != 0) {
        FUN_1400020a8();
      }
      lVar51 = lVar51 + 0x13c10;
    } while (lVar51 != lVar34);
  }
  if ((local_f0 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142d02352:
  uVar36 = *puVar21;
  *puVar21 = *puVar30;
  *puVar30 = uVar36;
  iVar46 = iVar46 + -1;
  puVar45 = puVar45 + -2;
  if ((longlong)puVar53 - (longlong)puVar31 < (longlong)puVar49 - (longlong)puVar50) {
    if (puVar26 < puVar44) {
      *plVar35 = (longlong)puVar26;
      plVar35[1] = (longlong)puVar44;
      *(int *)(plVar35 + 2) = iVar46;
      plVar35 = plVar35 + 3;
    }
    puVar50 = puVar21;
    if (puVar30 <= puVar21 + 1) goto LAB_142d02443;
  }
  else {
    if (puVar21 + 1 < puVar30) {
      *plVar35 = (longlong)puVar21;
      plVar35[1] = (longlong)puVar45;
      *(int *)(plVar35 + 2) = iVar46;
      plVar35 = plVar35 + 3;
    }
    puVar21 = puVar26;
    puVar45 = puVar44;
    puVar53 = puVar44;
    if (puVar44 <= puVar26) goto LAB_142d02443;
  }
  iVar41 = (int)((ulonglong)((longlong)puVar53 - (longlong)puVar50) >> 3);
  puVar31 = puVar50;
  puVar44 = puVar45;
  puVar49 = puVar53;
  if (iVar46 == 0) goto LAB_142d02455;
  goto LAB_142d022d4;
}



// FUNCTION 142d044c5 FUN_142d044c5 body=2136 status=ok
// SIG undefined FUN_142d044c5(void)

void FUN_142d044c5(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 **local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_139;
  ulonglong *local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e9;
  undefined8 *local_e8;
  longlong lStack_e0;
  undefined *local_d8;
  undefined2 local_c6;
  undefined1 local_c4;
  undefined2 local_c3;
  undefined1 local_c1;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((*(int *)(param_1 + 0x4d58) != 0) && (cVar3 = FUN_1400838d1(param_1,param_3), cVar3 != '\0'))
     && ((longlong)(int)param_2[1] != 0)) {
    local_120 = *(undefined8 *)(param_5 + 0x1b8);
    lVar8 = *param_2;
    local_118 = (longlong)(int)param_2[1] * 0x13c10 + lVar8;
    local_138 = (ulonglong *)(param_4 + 0x70);
    local_130 = (longlong *)(param_4 + 0x98);
    local_128 = param_4 + 0x168;
    do {
      puVar2 = local_138;
      if (*(int *)(lVar8 + 0x118e0) != 0) {
        dVar12 = *(double *)(lVar8 + 0x930) + *(double *)(lVar8 + 0x950) +
                 *(double *)(lVar8 + 0x970) + *(double *)(lVar8 + 0x990);
        dVar13 = *(double *)(lVar8 + 0x938) + *(double *)(lVar8 + 0x958) +
                 *(double *)(lVar8 + 0x978) + *(double *)(lVar8 + 0x998);
        local_f8 = *(undefined8 *)(lVar8 + 0x30f8);
        dVar14 = *(double *)(lVar8 + 0x940) + *(double *)(lVar8 + 0x960) +
                 *(double *)(lVar8 + 0x980) + *(double *)(lVar8 + 0x9a0);
        fVar15 = 10.0;
        if (10.0 <= *(float *)(DAT_14c9ec510 + 4)) {
          fVar15 = *(float *)(DAT_14c9ec510 + 4);
        }
        dVar12 = (double)((float)(dVar14 / SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13)
                                 ) * fVar15);
        local_100 = *(undefined8 *)(lVar8 + 0x3100);
        fVar15 = (float)(dVar12 * *(double *)(lVar8 + 0x880) +
                         *(double *)(lVar8 + 0x860) * 0.0 + *(double *)(lVar8 + 0x840) * 0.0 +
                        *(double *)(lVar8 + 0x8a0)) /
                 (float)(dVar12 * *(double *)(lVar8 + 0x888) +
                         *(double *)(lVar8 + 0x868) * 0.0 + *(double *)(lVar8 + 0x848) * 0.0 +
                        *(double *)(lVar8 + 0x8a8));
        if (1.0 <= fVar15) {
          fVar15 = 1.0;
        }
        local_139 = DAT_14ca84e1e;
        puVar10 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar10 + 0x4a;
        if (*(undefined8 **)(param_4 + 0x78) < puVar5) {
          FUN_140023dd8(local_138,0x260);
          puVar10 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
          puVar5 = puVar10 + 0x4a;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        *local_138 = (ulonglong)puVar5;
        *puVar10 = &PTR_FUN_14a2558c0;
        puVar5 = puVar10 + 2;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 1;
        puVar10[4] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0x3f80000000000000;
        puVar10[0x10] = 0;
        puVar10[0x12] = 0;
        local_110 = puVar10 + 0x14;
        puVar10[0x14] = 0;
        *(undefined1 *)(puVar10 + 0x15) = 1;
        puVar10[0x16] = 0;
        puVar10[0x1c] = 0;
        puVar10[0x1d] = 0x3f80000000000000;
        puVar10[0x22] = 0;
        puVar10[0x26] = 0;
        *(undefined1 *)(puVar10 + 0x27) = 1;
        puVar10[0x28] = 0;
        *(undefined4 *)(puVar10 + 0x29) = 4;
        lVar6 = 0x150;
        do {
          *(undefined8 *)((longlong)puVar10 + lVar6) = 0;
          ((undefined8 *)((longlong)puVar10 + lVar6))[1] = 0;
          *(undefined4 *)((longlong)puVar10 + lVar6 + 0x10) = 0xffff0000;
          lVar6 = lVar6 + 0x18;
        } while (lVar6 != 0x210);
        *(undefined4 *)((longlong)puVar10 + 0x224) = 0;
        puVar10[0x42] = 0;
        puVar10[0x43] = 0;
        *(undefined2 *)(puVar10 + 0x44) = 0;
        *(undefined4 *)(puVar10 + 0x45) = 0xffffffff;
        *(undefined4 *)((longlong)puVar10 + 0x22c) = 0xffffffff;
        *(undefined4 *)(puVar10 + 0x46) = 0xffffffff;
        *(undefined4 *)((longlong)puVar10 + 0x234) = 0xffffffff;
        *(undefined4 *)(puVar10 + 0x47) = 0;
        *(undefined2 *)((longlong)puVar10 + 0x23c) = 0;
        puVar10[0x48] = 0;
        iVar4 = *(int *)(param_4 + 0xa0);
        *(uint *)(param_4 + 0xa0) = iVar4 + 1U;
        if (*(uint *)(param_4 + 0xa4) < iVar4 + 1U) {
          FUN_1448cfae8(local_130,iVar4);
        }
        *(undefined8 **)(*local_130 + (longlong)iVar4 * 8) = puVar10;
        puVar10[2] = *(undefined8 *)(lVar8 + 0x18);
        *(undefined1 *)(puVar10 + 3) = 1;
        puVar9 = (undefined8 *)(lVar8 + 72000);
        puVar7 = puVar10 + 4;
        for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar10[0x12] = *(undefined8 *)(lVar8 + 0x11910);
        *(float *)(puVar10 + 0x13) = fVar15;
        puVar10[0x14] = *(undefined8 *)(lVar8 + 0x18);
        *(undefined1 *)(puVar10 + 0x15) = 1;
        puVar9 = (undefined8 *)(lVar8 + 72000);
        puVar7 = puVar10 + 0x16;
        for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar4 = *(int *)(DAT_14c9ec4f8 + 4);
        if (1 < iVar4) {
          iVar4 = 2;
        }
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        *(int *)(puVar10 + 0x24) = iVar4;
        uVar1 = *(undefined8 *)(param_5 + 0x198);
        lVar6 = FUN_14482e3b2();
        cVar3 = *(char *)(lVar6 + 0x41);
        if (cVar3 == '\x03') {
          cVar3 = '\x02';
        }
        puVar10[0x26] = uVar1;
        *(char *)(puVar10 + 0x27) = cVar3;
        puVar10[0x28] = *(undefined8 *)(lVar8 + 0x11920);
        *(undefined4 *)(puVar10 + 0x29) = 4;
        puVar10[0x2a] = local_120;
        puVar10[0x2b] = 0;
        *(undefined4 *)(puVar10 + 0x2c) = 0xffff0000;
        puVar10[0x42] = *(undefined8 *)(param_5 + 0x1c0);
        puVar10[0x43] = 0;
        *(undefined2 *)(puVar10 + 0x44) = 0x101;
        *(undefined4 *)((longlong)puVar10 + 0x224) = 0x21;
        uVar1 = *(undefined8 *)(lVar8 + 0x13818);
        FUN_14155de3a();
        FUN_1448e935e(uVar1,&local_e8,&DAT_14c9ec728,0);
        FUN_14155de3a();
        puVar10 = local_e8;
        local_108 = lStack_e0;
        uVar1 = *(undefined8 *)(lVar8 + 0x13818);
        FUN_14155eb18();
        FUN_1448e935e(uVar1,&local_e8,&DAT_14c9ec850,0);
        FUN_14155eb18();
        lVar6 = lStack_e0;
        puVar9 = local_e8;
        FUN_14155df5c();
        local_e8 = (undefined8 *)0x0;
        lStack_e0 = 0;
        FUN_1448f70da(puVar10,&DAT_14c9f0120,puVar5,&local_e8);
        FUN_14155ec3a();
        local_e8 = (undefined8 *)0x0;
        lStack_e0 = 0;
        FUN_1448f70da(puVar9,&DAT_14c9f01a8,local_110,&local_e8);
        local_c4 = local_c1;
        local_c6 = local_c3;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9f16d0) &&
           (FUN_144b3d300(&DAT_14c9f16d0), DAT_14c9f16d0 == -1)) {
          FUN_146066548(&local_e8);
          local_150 = 0;
          local_160 = 0;
          local_180 = "Unknown";
          local_190 = 0;
          uStack_188 = 0;
          local_198 = L"FLocalFogVolumeTiledPassParameters";
          local_158 = 0;
          local_170 = 0x240;
          local_178 = 0x2d6;
          local_168 = &local_e8;
          FUN_140b49562(&DAT_14c9f1650,0,1);
          if (local_e8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_142d27fb3);
          _Init_thread_footer(&DAT_14c9f16d0);
        }
        FUN_140069376(param_4);
        puVar2 = local_138;
        puVar11 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 0x40;
        if (*(undefined8 **)(param_4 + 0x78) < puVar7) {
          FUN_140023dd8(local_138,0x208);
          puVar11 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar11 + 0x40;
        }
        *local_138 = (ulonglong)puVar7;
        lStack_e0 = DAT_14c9f1698;
        if (DAT_14c9f1698 != 0) {
          LOCK();
          *(int *)(DAT_14c9f1698 + 8) = *(int *)(DAT_14c9f1698 + 8) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14c9f1650;
        local_198 = (wchar_t *)CONCAT71(local_198._1_7_,2);
        local_e8 = puVar5;
        FUN_140068f1a(puVar11,&local_e9,&local_e8);
        *puVar11 = &PTR_FUN_14a2558d0;
        puVar11[0x37] = puVar10;
        puVar11[0x38] = local_108;
        puVar11[0x39] = puVar9;
        puVar11[0x3a] = lVar6;
        puVar11[0x3b] = puVar5;
        puVar11[0x3c] = local_f8;
        puVar11[0x3d] = local_100;
        *(undefined1 *)(puVar11 + 0x3e) = local_139;
        *(undefined2 *)((longlong)puVar11 + 0x1f1) = local_c6;
        *(undefined1 *)((longlong)puVar11 + 499) = local_c4;
        *(float *)((longlong)puVar11 + 500) = fVar15;
        *(undefined4 *)(puVar11 + 0x3f) = 0;
        *(float *)((longlong)puVar11 + 0x1fc) = fVar15;
        iVar4 = *(int *)(param_4 + 0x170);
        *(uint *)(param_4 + 0x170) = iVar4 + 1U;
        if (*(uint *)(param_4 + 0x174) < iVar4 + 1U) {
          FUN_14470e57a(local_128,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_4 + 0x168) + (longlong)iVar4 * 8) = puVar11;
        *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_4 + 0x170) + -1;
        FUN_140069100(param_4,puVar11);
      }
      lVar8 = lVar8 + 0x13c10;
    } while (lVar8 != local_118);
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d04d42 FUN_142d04d42 body=1855 status=ok
// SIG undefined FUN_142d04d42(void)

void FUN_142d04d42(ulonglong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined8 local_298 [14];
  int local_228;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8 [14];
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  float local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
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
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (*(int *)(param_2 + 0x118e0) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145e70d1c();
    lVar7 = 0;
    FUN_1448e935e(uVar1,&local_168,&DAT_14c9ec978,0);
    FUN_145e70d1c();
    lVar10 = uStack_160;
    local_2e0 = local_168;
    uVar1 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145d503ee();
    FUN_1448e935e(uVar1,&local_168,&DAT_14c9ecaa0,0);
    FUN_145d503ee();
    lVar9 = uStack_160;
    lVar5 = local_168;
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
    uStack_160 = 0;
    local_10c = 0;
    uStack_104 = 0;
    local_fc = 0;
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
    FUN_144b0e33a(param_1,&local_168);
    uVar1 = *(undefined8 *)(param_2 + 0x30f8);
    uVar2 = *(undefined8 *)(param_2 + 0x3100);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar6 + 5;
    if ((undefined8 *)param_1[1] < puVar11) {
      FUN_140023dd8(param_1,0x30);
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 5;
    }
    *param_1 = (ulonglong)puVar11;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar6;
    param_1[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_14a1e7fc8;
    *(float *)(puVar6 + 2) = (float)(int)uVar1;
    *(float *)((longlong)puVar6 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
    *(undefined4 *)(puVar6 + 3) = 0;
    *(float *)((longlong)puVar6 + 0x1c) = (float)(int)uVar2;
    *(float *)(puVar6 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0x3f800000;
    uStack_130 = DAT_14c9c0db0;
    local_128 = DAT_14c9c0d38;
    local_138 = DAT_14c9efd60;
    local_110 = 0;
    local_168 = DAT_14ca94df8;
    if (local_2e0 != 0) {
      lVar8 = *(longlong *)(lVar10 + 8);
      lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + (longlong)*(int *)(local_2e0 + 0xd4) * 8);
      if (lVar7 == 0) {
        lVar7 = FUN_1400bafc2(lVar8,(longlong)*(int *)(local_2e0 + 0xd4),1);
      }
    }
    uStack_160 = lVar7;
    if (lVar5 == 0) {
      lVar8 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar9 + 8);
      lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (longlong)*(int *)(lVar5 + 0xd4) * 8);
      if (lVar8 == 0) {
        lVar8 = FUN_1400bafc2(lVar7,(longlong)*(int *)(lVar5 + 0xd4),1);
      }
    }
    fVar13 = 10.0;
    if (10.0 <= *(float *)(DAT_14c9ec510 + 4)) {
      fVar13 = *(float *)(DAT_14c9ec510 + 4);
    }
    dVar3 = *(double *)(param_2 + 0x930) + *(double *)(param_2 + 0x950) +
            *(double *)(param_2 + 0x970) + *(double *)(param_2 + 0x990);
    dVar4 = *(double *)(param_2 + 0x938) + *(double *)(param_2 + 0x958) +
            *(double *)(param_2 + 0x978) + *(double *)(param_2 + 0x998);
    dVar12 = *(double *)(param_2 + 0x940) + *(double *)(param_2 + 0x960) +
             *(double *)(param_2 + 0x980) + *(double *)(param_2 + 0x9a0);
    dVar3 = (double)((float)(dVar12 / SQRT(dVar12 * dVar12 + dVar3 * dVar3 + dVar4 * dVar4)) *
                    fVar13);
    fVar13 = (float)(dVar3 * *(double *)(param_2 + 0x880) +
                     *(double *)(param_2 + 0x860) * 0.0 + *(double *)(param_2 + 0x840) * 0.0 +
                    *(double *)(param_2 + 0x8a0)) /
             (float)(dVar3 * *(double *)(param_2 + 0x888) +
                     *(double *)(param_2 + 0x868) * 0.0 + *(double *)(param_2 + 0x848) * 0.0 +
                    *(double *)(param_2 + 0x8a8));
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    local_a8._0_6_ = CONCAT15(DAT_14ca84e1e,(undefined5)local_a8);
    local_158 = lVar8;
    lVar7 = FUN_140028f18(param_1);
    if ((lVar7 != 0) && ((local_a0 & 0x10000000) == 0)) {
      param_1[0x35] = local_148;
      param_1[0x36] = uStack_140;
      *(undefined4 *)(param_1 + 0x33) = (undefined4)local_158;
      *(undefined4 *)((longlong)param_1 + 0x19c) = local_158._4_4_;
      *(undefined4 *)(param_1 + 0x34) = (undefined4)uStack_150;
      *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_150._4_4_;
      *(undefined4 *)(param_1 + 0x31) = (undefined4)local_168;
      *(undefined4 *)((longlong)param_1 + 0x18c) = local_168._4_4_;
      *(undefined4 *)(param_1 + 0x32) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)param_1 + 0x194) = uStack_160._4_4_;
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 4;
      if ((undefined8 *)param_1[1] < puVar11) {
        FUN_140023dd8(param_1,0x28);
        puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar6 + 4;
      }
      *param_1 = (ulonglong)puVar11;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar6;
      param_1[6] = (ulonglong)(puVar6 + 1);
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_14a37d348;
      puVar6[2] = lVar7;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x1c) = 1;
    }
    local_2d8 = lVar9;
    local_2d0 = lVar5;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar6 + 3;
    if ((undefined8 *)param_1[1] < puVar11) {
      FUN_140023dd8(param_1,0x20);
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 3;
    }
    *param_1 = (ulonglong)puVar11;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar6;
    param_1[6] = (ulonglong)(puVar6 + 1);
    lVar7 = 0;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_14a1fbb10;
    *(undefined4 *)(puVar6 + 2) = 0;
    *(float *)((longlong)puVar6 + 0x14) = fVar13;
    local_218 = 0;
    local_210 = 1;
    local_208 = 0;
    local_200 = 1;
    FUN_1448c58dc(param_2,&local_218);
    lVar5 = local_2e0;
    puVar11 = (undefined8 *)(param_2 + 72000);
    puVar6 = local_1f8;
    for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar6 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar6 = puVar6 + 1;
    }
    local_188 = *(undefined8 *)(param_2 + 0x11910);
    local_180 = *(undefined8 *)(param_2 + 0x11920);
    local_178 = 4;
    lVar9 = 0;
    local_170 = fVar13;
    if (local_2e0 != 0) {
      lVar10 = *(longlong *)(lVar10 + 8);
      lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + (longlong)*(int *)(local_2e0 + 0xd4) * 8)
      ;
      if (lVar9 == 0) {
        lVar9 = FUN_1400bafc2(lVar10,(longlong)*(int *)(local_2e0 + 0xd4),1);
      }
    }
    FUN_145e70f8a();
    local_2e8 = &local_218;
    FUN_1449cc26b(param_1,lVar9,lVar5,&DAT_14c9f0230);
    local_2c8 = 0;
    local_2c0 = 1;
    local_2b8 = 0;
    local_2b0 = 1;
    local_2a8 = 0;
    local_2a0 = 1;
    FUN_1448c58dc(param_2,&local_2c8);
    lVar5 = local_2d0;
    puVar11 = (undefined8 *)(param_2 + 72000);
    puVar6 = local_298;
    for (lVar10 = 0xd; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar6 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar6 = puVar6 + 1;
    }
    local_228 = 2;
    if (*(int *)(DAT_14c9ec4f8 + 4) < 2) {
      local_228 = *(int *)(DAT_14c9ec4f8 + 4);
    }
    if (local_228 < 1) {
      local_228 = 0;
    }
    if (local_2d0 != 0) {
      lVar7 = *(longlong *)
               (*(longlong *)(*(longlong *)(local_2d8 + 8) + 0x50) +
               (longlong)*(int *)(local_2d0 + 0xd4) * 8);
      if (lVar7 == 0) {
        lVar7 = FUN_1400bafc2(*(longlong *)(local_2d8 + 8),(longlong)*(int *)(local_2d0 + 0xd4),1);
      }
    }
    FUN_145d5065c();
    local_2e8 = &local_2c8;
    FUN_1449cc26b(param_1,lVar7,lVar5,&DAT_14c9f02b8);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar6 + 5;
    if ((undefined8 *)param_1[1] < puVar11) {
      FUN_140023dd8(param_1,0x30);
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 5;
    }
    *param_1 = (ulonglong)puVar11;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar6;
    param_1[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_14a1fb5a8;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x11920) + 0x10);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar6 + 4;
    if ((undefined8 *)param_1[1] < puVar11) {
      FUN_140023dd8(param_1,0x28);
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar6 + 4;
    }
    *param_1 = (ulonglong)puVar11;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar6;
    param_1[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_14a1e78c8;
    puVar6[2] = uVar1;
    *(undefined4 *)(puVar6 + 3) = 0;
  }
  if ((local_90 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d05482 FUN_142d05482 body=625 status=ok
// SIG undefined FUN_142d05482(void)

void FUN_142d05482(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_2 + 0x118e0) != 0) {
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar8 + 0x38;
    if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x1d0);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar8 + 0x38;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar3;
    *puVar8 = &PTR_FUN_14a255a10;
    puVar3 = puVar8 + 2;
    FUN_1471e75b2(puVar3);
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar8;
    FUN_1448c58dc(param_2,&local_a8);
    *(undefined4 *)(puVar8 + 4) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar8 + 0x24) = local_98._4_4_;
    *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_90._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar8 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_a0._4_4_;
    puVar6 = (undefined8 *)(param_2 + 72000);
    puVar7 = puVar8 + 8;
    for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar2 = *(int *)(DAT_14c9ec4f8 + 4);
    if (1 < iVar2) {
      iVar2 = 2;
    }
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    *(int *)(puVar8 + 0x16) = iVar2;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_d8 = &local_a8;
    uVar4 = FUN_147241975(param_1,param_2,0,2);
    lVar5 = FUN_145d50964();
    cVar1 = *(char *)(lVar5 + 0x41);
    if (cVar1 == '\x03') {
      cVar1 = '\x02';
    }
    puVar8[6] = uVar4;
    *(char *)(puVar8 + 7) = cVar1;
    puVar8[0x18] = *(undefined8 *)(param_2 + 0x119d8);
    puVar8[0x19] = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0xffff0000;
    puVar8[0x1b] = *(undefined8 *)(param_2 + 0x119e8);
    puVar8[0x1c] = 0;
    *(undefined4 *)(puVar8 + 0x1d) = 0xffff0000;
    uVar4 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145f6996e();
    FUN_1448e935e(uVar4,&local_a8,&DAT_14c9ecbc8,0);
    FUN_145f6996e();
    uVar4 = local_a8;
    local_b8 = local_a8;
    local_b0 = uStack_a0;
    FUN_145f69bdc();
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1448f70da(uVar4,&DAT_14c9f0340,puVar3,&local_a8);
    uStack_a0 = *(undefined8 *)(param_2 + 0x119cc);
    local_a8 = 0;
    local_d8 = puVar3;
    local_d0 = &local_a8;
    FUN_1471dc87a(param_1,*(undefined8 *)(param_2 + 0x13818),&local_b9,&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d056f4 FUN_142d056f4 body=69 status=ok
// SIG undefined FUN_142d056f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d056f4(void)

{
  _DAT_14c9ecc88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d05736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecc90,1);
  return;
}



// FUNCTION 142d0573a FUN_142d0573a body=1253 status=ok
// SIG undefined FUN_142d0573a(void)

void FUN_142d0573a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_142d0577b;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_142d05780;
      goto LAB_142d057dc;
    }
  }
  else {
LAB_142d0577b:
    if (iVar6 != 0x10) {
LAB_142d057dc:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_142d05780;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_142d05780;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_142d05938;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_142d274e3);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_142d05938:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_142d059b8;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_142d059b8:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a255ab0;
        puVar15[0x15] = param_1;
        puVar15[0x16] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a255a40;
        local_68[0] = FUN_142d2854c;
        local_40 = param_1;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"FGbxAddLocalFogSettingsVolumeCommand",&DAT_14c9f1768);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_142d05877;
    }
  }
LAB_142d05780:
  iVar6 = *(int *)(param_1 + 0x5688);
  *(uint *)(param_1 + 0x5688) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x568c) < iVar6 + 1U) {
    FUN_1462dafe2(param_1 + 0x5680,iVar6);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x5680) + (longlong)iVar6 * 8) = param_2;
  *(undefined2 *)(param_1 + 0x56c0) = 0x101;
LAB_142d05877:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d05c20 FUN_142d05c20 body=1254 status=ok
// SIG undefined FUN_142d05c20(void)

void FUN_142d05c20(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_88 = param_1;
  uStack_80 = param_2;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_142d05c74;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_142d05c79;
      goto LAB_142d05cda;
    }
  }
  else {
LAB_142d05c74:
    if (iVar6 != 0x10) {
LAB_142d05cda:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_142d05c79;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_142d05c79;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_142d05e42;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_142d274e3);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_142d05e42:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_142d05ec2;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_142d05ec2:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a255b30;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_88._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_80._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_98 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a255ac0;
        local_50 = (undefined4)local_88;
        uStack_4c = local_88._4_4_;
        uStack_48 = (undefined4)uStack_80;
        uStack_44 = uStack_80._4_4_;
        local_78[0] = FUN_142d28810;
        FUN_14005a792(&DAT_14ca9a440,L"FGbxRemoveLocalFogSettingsVolumeCommand",&DAT_14c9f176c);
        if (local_78[0] != (code *)0x0) {
          pppuVar13 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar13 = &local_58;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_142d05d7a;
    }
  }
LAB_142d05c79:
  FUN_142d2879c(param_1 + 0x5680,&uStack_80);
  *(undefined2 *)(param_1 + 0x56c0) = 0x101;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
LAB_142d05d7a:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d0611c FUN_142d0611c body=69 status=ok
// SIG undefined FUN_142d0611c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0611c(void)

{
  _DAT_14c9ecca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0615e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecca8,1);
  return;
}



// FUNCTION 142d06161 FUN_142d06161 body=69 status=ok
// SIG undefined FUN_142d06161(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06161(void)

{
  _DAT_14c9eccb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d061a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9eccb8,1);
  return;
}



// FUNCTION 142d061a6 FUN_142d061a6 body=69 status=ok
// SIG undefined FUN_142d061a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d061a6(void)

{
  _DAT_14c9eccc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d061e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9eccd0,1);
  return;
}



// FUNCTION 142d061eb FUN_142d061eb body=69 status=ok
// SIG undefined FUN_142d061eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d061eb(void)

{
  _DAT_14c9ecce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0622d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecce8,1);
  return;
}



// FUNCTION 142d06230 FUN_142d06230 body=69 status=ok
// SIG undefined FUN_142d06230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06230(void)

{
  _DAT_14c9eccf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd00,1);
  return;
}



// FUNCTION 142d06275 FUN_142d06275 body=63 status=ok
// SIG undefined FUN_142d06275(void)

undefined8 FUN_142d06275(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3608);
  if ((lVar1 != 0) &&
     (((*(longlong *)(lVar1 + 8) != 0 || (*(char *)(lVar1 + 0xf8) == '\x01')) &&
      ((*(byte *)(param_2 + 0x5b) & 0x20) != 0)))) {
    uVar2 = FUN_144880847(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 8) * 2),0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142d062b4 FUN_142d062b4 body=69 status=ok
// SIG undefined FUN_142d062b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d062b4(void)

{
  _DAT_14c9ecd10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d062f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd18,1);
  return;
}



// FUNCTION 142d062f9 FUN_142d062f9 body=69 status=ok
// SIG undefined FUN_142d062f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d062f9(void)

{
  _DAT_14c9ecd28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0633b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd30,1);
  return;
}



// FUNCTION 142d0633e FUN_142d0633e body=69 status=ok
// SIG undefined FUN_142d0633e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0633e(void)

{
  _DAT_14c9ecd38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd40,1);
  return;
}



// FUNCTION 142d06383 FUN_142d06383 body=69 status=ok
// SIG undefined FUN_142d06383(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06383(void)

{
  _DAT_14c9ecd50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d063c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd58,1);
  return;
}



// FUNCTION 142d063c8 FUN_142d063c8 body=69 status=ok
// SIG undefined FUN_142d063c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d063c8(void)

{
  _DAT_14c9ecd60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0640a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd68,1);
  return;
}



// FUNCTION 142d0640d FUN_142d0640d body=69 status=ok
// SIG undefined FUN_142d0640d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0640d(void)

{
  _DAT_14c9ecd70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0644f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd78,1);
  return;
}



// FUNCTION 142d06452 FUN_142d06452 body=69 status=ok
// SIG undefined FUN_142d06452(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06452(void)

{
  _DAT_14c9ecd80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd88,1);
  return;
}



// FUNCTION 142d06497 FUN_142d06497 body=69 status=ok
// SIG undefined FUN_142d06497(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06497(void)

{
  _DAT_14c9ecd90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d064d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecd98,1);
  return;
}



// FUNCTION 142d064dc FUN_142d064dc body=69 status=ok
// SIG undefined FUN_142d064dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d064dc(void)

{
  _DAT_14c9ecda0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0651e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecda8,1);
  return;
}



// FUNCTION 142d06521 FUN_142d06521 body=69 status=ok
// SIG undefined FUN_142d06521(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06521(void)

{
  _DAT_14c9ecdb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecdb8,1);
  return;
}



// FUNCTION 142d06566 FUN_142d06566 body=69 status=ok
// SIG undefined FUN_142d06566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06566(void)

{
  _DAT_14c9ecdc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d065a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecdc8,1);
  return;
}



// FUNCTION 142d065ab FUN_142d065ab body=69 status=ok
// SIG undefined FUN_142d065ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d065ab(void)

{
  _DAT_14c9ecdd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d065ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecdd8,1);
  return;
}



// FUNCTION 142d065f0 FUN_142d065f0 body=69 status=ok
// SIG undefined FUN_142d065f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d065f0(void)

{
  _DAT_14c9ecde0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecde8,1);
  return;
}



// FUNCTION 142d06635 FUN_142d06635 body=69 status=ok
// SIG undefined FUN_142d06635(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06635(void)

{
  _DAT_14c9ecdf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecdf8,1);
  return;
}



// FUNCTION 142d0667a FUN_142d0667a body=69 status=ok
// SIG undefined FUN_142d0667a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0667a(void)

{
  _DAT_14c9ece00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d066bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ece08,1);
  return;
}



// FUNCTION 142d066bf FUN_142d066bf body=69 status=ok
// SIG undefined FUN_142d066bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d066bf(void)

{
  _DAT_14c9ece10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ece18,1);
  return;
}



// FUNCTION 142d06704 FUN_142d06704 body=69 status=ok
// SIG undefined FUN_142d06704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06704(void)

{
  _DAT_14c9ece30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d06746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ece38,1);
  return;
}



// FUNCTION 142d06749 FUN_142d06749 body=69 status=ok
// SIG undefined FUN_142d06749(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06749(void)

{
  _DAT_14c9ece40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0678b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ece48,1);
  return;
}



// FUNCTION 142d0678e FUN_142d0678e body=69 status=ok
// SIG undefined FUN_142d0678e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0678e(void)

{
  _DAT_14c9ece50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d067d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ece58,1);
  return;
}



// FUNCTION 142d067d3 FUN_142d067d3 body=109 status=ok
// SIG undefined FUN_142d067d3(void)

undefined8 FUN_142d067d3(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14c9ecd20;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar6 * 4) != 0);
}



// FUNCTION 142d06840 FUN_142d06840 body=32 status=ok
// SIG undefined FUN_142d06840(void)

int FUN_142d06840(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x100;
  if (*(int *)(DAT_14c9ed788 + 4) < 0x100) {
    iVar2 = *(int *)(DAT_14c9ed788 + 4);
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 142d06860 FUN_142d06860 body=424 status=ok
// SIG undefined FUN_142d06860(void)

void FUN_142d06860(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,undefined2 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  uint local_90;
  int local_88;
  double *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined2 local_68;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar1 = *(float *)(param_5 + 4);
  fVar2 = *(float *)(param_3 + 0x2170);
  fVar3 = fVar1;
  if (fVar2 <= fVar1) {
    fVar3 = fVar2;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar7 = logf((fVar1 - fVar3) * DAT_14c7604c4);
  fVar1 = DAT_14c7604cc;
  fVar3 = DAT_14c7604c8;
  fVar2 = DAT_14c7604c4;
  local_90 = DAT_14c7604c0;
  local_88 = (int)(fVar7 * 1.442695 * DAT_14c7604cc);
  if (local_88 < 1) {
    local_88 = 0;
  }
  local_88 = local_88 + 1;
  local_48 = (double)DAT_14c7604cc;
  local_50 = (double)DAT_14c7604c8;
  local_58 = (double)DAT_14c7604c4;
  iVar6 = 0x1f;
  if (DAT_14c7604c0 != 0) {
    for (; DAT_14c7604c0 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar5 = DAT_14c7604c0 - 1;
  if (DAT_14c7604c0 == 0) {
    iVar6 = 0;
  }
  *(int *)(param_6 + 0x118) = iVar6;
  *(float *)(param_6 + 0x120) = fVar2;
  *(float *)(param_6 + 0x124) = fVar3;
  *(float *)(param_6 + 0x128) = fVar1;
  iVar6 = *(int *)(param_3 + 0x3104);
  iVar4 = *(int *)(param_3 + 0x30fc);
  *(int *)(param_6 + 0x130) =
       ((iVar5 + *(int *)(param_3 + 0x3100)) - *(int *)(param_3 + 0x30f8)) / (int)local_90;
  *(int *)(param_6 + 0x134) = ((iVar6 + iVar5) - iVar4) / (int)local_90;
  *(int *)(param_6 + 0x138) = local_88;
  local_80 = &local_58;
  local_98 = *(undefined4 *)(param_5 + 4);
  local_68 = param_7;
  local_70 = param_6;
  local_78 = param_1;
  FUN_142d06a09(param_3,param_2,param_4,*(undefined4 *)(param_5 + 0x1c));
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d06a09 FUN_142d06a09 body=24392 status=ok
// SIG undefined FUN_142d06a09(void)

void FUN_142d06a09(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,int param_7,double *param_8,longlong param_9,
                  undefined8 *param_10,ushort param_11)

{
  ulonglong *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined *puVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  uint uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  uint uVar32;
  ulonglong uVar33;
  int *piVar34;
  int iVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ushort uVar38;
  ulonglong uVar39;
  float fVar40;
  undefined1 auStack_2e8 [32];
  wchar_t *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined8 *local_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined1 local_280;
  ulonglong *local_278;
  longlong local_270;
  undefined8 *local_268;
  longlong local_260;
  longlong local_258;
  undefined8 *local_250;
  longlong local_248;
  undefined8 *local_240;
  uint local_234;
  ulonglong local_230;
  longlong local_228;
  ulonglong local_220;
  undefined8 *local_218;
  ulonglong local_210;
  int *local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  longlong *local_1a8;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  longlong *local_128;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_a0;
  undefined6 uVar24;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_1f8 = CONCAT44(local_1f8._4_4_,
                       (int)((*(int *)(param_1 + 0x3104) + (param_6 - 1)) -
                            *(int *)(param_1 + 0x30fc)) / (int)param_6);
  local_234 = (int)(((param_6 - 1) + *(int *)(param_1 + 0x3100)) - *(int *)(param_1 + 0x30f8)) /
              (int)param_6;
  puVar20 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0xd0) != '\0') {
    puVar20 = (undefined *)(*(longlong *)(param_1 + 8) + 0x1b8);
  }
  uVar14 = ((int)(param_6 + (int)*(undefined8 *)(puVar20 + 0x10) + -1) / (int)param_6) * param_7 *
           ((int)((int)((ulonglong)*(undefined8 *)(puVar20 + 0x10) >> 0x20) + param_6 + -1) /
           (int)param_6);
  uVar32 = DAT_14c760514 * uVar14;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  uStack_160._0_4_ = 0x4109;
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  local_158 = (undefined *)0x0;
  local_228 = CONCAT44(local_228._4_4_,uVar14);
  uVar25 = DAT_14ca84e48;
  if (uVar14 < DAT_14ca84e48) {
    uVar25 = uVar14;
  }
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  puVar1 = (ulonglong *)(param_9 + 0x70);
  uVar30 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar30 + 0x150;
  local_278 = puVar1;
  local_248 = param_2;
  local_1f0 = param_3;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(puVar1,0x160);
    uVar30 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar30 + 0x150;
  }
  local_258 = param_9 + 0x188;
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar30,L"Lumen.NumGridCulledMeshSDFObjects",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar30;
  *(int *)(uVar30 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  uStack_160._0_4_ = 0x4109;
  uVar25 = DAT_14ca84e48;
  if ((uint)local_228 < DAT_14ca84e48) {
    uVar25 = (uint)local_228;
  }
  local_158 = (undefined *)0x0;
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  uVar39 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar39 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar39 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar39 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar39,L"Lumen.NumGridCulledHeightfieldObjects",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar39;
  *(int *)(uVar39 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  uStack_160._0_4_ = 0x4109;
  uVar25 = DAT_14ca84e48;
  if (uVar32 < DAT_14ca84e48) {
    uVar25 = uVar32;
  }
  local_158 = (undefined *)0x0;
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  uVar36 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar36 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar36 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar36 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar36,L"Lumen.GridCulledMeshSDFObjectIndicesArray",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar36;
  *(int *)(uVar36 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  uStack_160._0_4_ = 0x4109;
  uVar25 = DAT_14ca84e48;
  if (uVar32 < DAT_14ca84e48) {
    uVar25 = uVar32;
  }
  local_158 = (undefined *)0x0;
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  uVar37 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar37 + 0x150;
  local_1c0 = uVar36;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar37 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar37 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar37,L"Lumen.GridCulledHeightfieldObjectIndicesArray",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar37;
  *(int *)(uVar37 + 0x7c) = *(int *)(param_9 + 400) + -1;
  local_158 = (undefined *)0x0;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  local_168._4_4_ = 1;
  uStack_160._0_4_ = 0x4109;
  uVar36 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar36 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar36 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar36 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar36,L"Lumen.NumCulledObjectsToCompact",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar36;
  *(int *)(uVar36 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  uStack_160._0_4_ = 0x4109;
  uVar25 = DAT_14ca84e48;
  if (uVar32 * 2 < DAT_14ca84e48) {
    uVar25 = uVar32 * 2;
  }
  local_158 = (undefined *)0x0;
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  uVar33 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar33 + 0x150;
  local_1d0 = (ulonglong)uVar32;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar33 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar33 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar33,L"Lumen.CulledObjectsToCompactArray",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar33;
  *(int *)(uVar33 + 0x7c) = *(int *)(param_9 + 400) + -1;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 8;
  local_1d8 = uVar33;
  local_1c8 = uVar37;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
  }
  local_270 = param_9 + 0x198;
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(uVar30 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar26 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
  puVar26[7] = uVar30;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  FUN_1405bfba3(param_9,puVar26,0,2);
  puVar1 = local_278;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(uVar39 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar26 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
  puVar26[7] = uVar39;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  FUN_1405bfba3(param_9,puVar26,0,2);
  puVar1 = local_278;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(uVar36 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar26 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
  puVar26[7] = uVar36;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  FUN_1405bfba3(param_9,puVar26,0,2);
  puVar1 = local_278;
  local_158 = (undefined *)0x0;
  uVar25 = 0x14;
  if (DAT_14ca84e48 < 0x14) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  local_168._4_4_ = 1;
  uStack_160._0_4_ = 0x4189;
  uVar37 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar37 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar37 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar37 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  local_210 = uVar39;
  local_200 = uVar30;
  local_1e0 = uVar36;
  FUN_1456bd266(uVar37,L"Lumen.CulledObjectIndirectArguments",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar37;
  *(int *)(uVar37 + 0x7c) = *(int *)(param_9 + 400) + -1;
  cVar13 = *(char *)(uVar37 + 0x68);
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
  }
  piVar34 = (int *)(local_248 + 0x4588);
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(uVar37 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar26 + 6) = cVar13 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar26 + 0x31) = 0;
  puVar26[7] = uVar37;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  local_230 = uVar37;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar18 = (undefined8 *)0x0;
  FUN_1405bfba3(param_9,puVar26,0,2);
  lVar16 = local_248;
  iVar35 = *piVar34;
  local_240 = (undefined8 *)CONCAT44(local_240._4_4_,iVar35);
  local_260 = param_1;
  local_208 = piVar34;
  if (iVar35 < 1) {
    uVar17 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x13ad8) == 0) {
      uVar25 = *(uint *)(param_1 + 0x1de0);
      if (uVar25 == 0) {
        iVar35 = 0x20;
      }
      else {
        iVar35 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> iVar35 & 1) == 0; iVar35 = iVar35 + 1) {
          }
        }
      }
      if (*(longlong *)(param_1 + 0x3108) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined4 *)(*(longlong *)(param_1 + 0x3108) + 0x24);
      }
      FUN_140c6b718(local_248,uVar22,iVar35);
      iVar35 = *(int *)(lVar16 + 0x4588);
    }
    puVar1 = local_278;
    uVar17 = (ulonglong)(iVar35 + -1 + (uint)(iVar35 == 0)) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar35 = 1 << ((byte)lVar16 & 0x1f);
    uVar25 = iVar35 + 0x7f;
    uVar14 = iVar35 + 0xfe;
    if (-1 < (int)uVar25) {
      uVar14 = uVar25;
    }
    uVar25 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar25 = DAT_14ca84e48;
    }
    local_158 = (undefined *)0x0;
    local_168._0_4_ = uVar25 + (uVar25 == 0);
    local_168._4_4_ = 1;
    uStack_160._0_4_ = 0x4109;
    uVar30 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar17 = uVar30 + 0x150;
    if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
      FUN_140023dd8(local_278,0x160);
      uVar30 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar17 = uVar30 + 0x150;
    }
    *(ulonglong *)(param_9 + 0x70) = uVar17;
    FUN_1456bd266(uVar30,L"Lumen.NumMeshSDFCulledObjects",&local_168,0);
    iVar35 = *(int *)(param_9 + 400);
    *(uint *)(param_9 + 400) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
      FUN_144737178(local_258,iVar35);
    }
    puVar1 = local_278;
    *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar30;
    *(int *)(uVar30 + 0x7c) = *(int *)(param_9 + 400) + -1;
    uVar25 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar25 = DAT_14ca84e48;
    }
    local_168._0_4_ = uVar25 + (uVar25 == 0);
    uStack_160._0_4_ = 0x4109;
    uVar25 = DAT_14ca84e48;
    if ((uVar14 & 0xffffff80) < DAT_14ca84e48) {
      uVar25 = uVar14 & 0xffffff80;
    }
    local_158 = (undefined *)0x0;
    local_168._4_4_ = uVar25 + (uVar25 == 0);
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar26 + 0x2a;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x160);
      puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar26 + 0x2a;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    FUN_1456bd266(puVar26,L"Lumen.MeshSDFObjectIndexBuffer",&local_168,0);
    iVar35 = *(int *)(param_9 + 400);
    *(uint *)(param_9 + 400) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
      FUN_144737178(local_258,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x7c) = *(int *)(param_9 + 400) + -1;
    puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar27 + 8;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar27[1] = *(undefined8 *)(uVar30 + 8);
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 2;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar27 + 5) = 0;
    *puVar27 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar27 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
    puVar27[7] = uVar30;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    local_250 = puVar26;
    FUN_1405bfba3(param_9,puVar27,0,2);
    puVar1 = local_278;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar26 + 0x1e;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x100);
      puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar26 + 0x1e;
    }
    *local_278 = (ulonglong)puVar18;
    *puVar26 = &PTR_FUN_14a2562f8;
    local_268 = puVar26 + 2;
    puVar26[0xc] = 0;
    puVar26[2] = 0;
    puVar26[3] = 0;
    puVar26[4] = 0;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[9] = 0;
    puVar26[10] = 0;
    *(undefined1 *)(puVar26 + 0xd) = 1;
    lVar16 = 0x8c;
    do {
      puVar18 = (undefined8 *)((longlong)puVar26 + lVar16 + -0xc);
      *puVar18 = 0;
      puVar18[1] = 0x3f80000000000000;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0xec);
    iVar35 = *(int *)(param_9 + 0xa0);
    *(uint *)(param_9 + 0xa0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0xa4) < iVar35 + 1U) {
      FUN_1448cfae8(param_9 + 0x98,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x98) + (longlong)iVar35 * 8) = puVar26;
    puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar27 + 8;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar27[1] = *(undefined8 *)(uVar30 + 8);
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 2;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar27 + 5) = 0;
    *puVar27 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar27 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
    puVar27[7] = uVar30;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    *local_268 = puVar27;
    puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar27 + 8;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar27[1] = local_250[1];
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 2;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar27 + 5) = 0;
    *puVar27 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar27 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
    puVar27[7] = local_250;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    puVar26[3] = puVar27;
    puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar27 + 8;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar27[1] = *(undefined8 *)(local_230 + 8);
    puVar27[2] = 0;
    *(undefined1 *)(puVar27 + 3) = 2;
    *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar27 + 5) = 0;
    *puVar27 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar27 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
    puVar27[7] = local_230;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
    *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    puVar26[4] = puVar27;
    local_1e8 = uVar30;
    FUN_141760f26(&local_168,param_9,piVar34);
    *(undefined4 *)(puVar26 + 10) = local_148;
    *(undefined4 *)((longlong)puVar26 + 0x54) = uStack_144;
    *(undefined4 *)(puVar26 + 0xb) = uStack_140;
    *(undefined4 *)((longlong)puVar26 + 0x5c) = uStack_13c;
    *(undefined4 *)(puVar26 + 8) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar26 + 0x44) = local_158._4_4_;
    *(undefined4 *)(puVar26 + 9) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)puVar26 + 0x4c) = uStack_150._4_4_;
    puVar26[6] = CONCAT44(local_168._4_4_,(int)local_168);
    puVar26[7] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    lVar16 = FUN_1447e4f80();
    cVar13 = '\x02';
    if (*(char *)(lVar16 + 0x41) != '\x03') {
      cVar13 = *(char *)(lVar16 + 0x41);
    }
    puVar26[0xc] = *(undefined8 *)(param_1 + 0x18);
    *(char *)(puVar26 + 0xd) = cVar13;
    iVar35 = *(int *)(param_1 + 0x2010);
    *(int *)(puVar26 + 0xe) = iVar35;
    if (0 < iVar35) {
      lVar16 = 0;
      lVar21 = 0;
      do {
        lVar29 = *(longlong *)(param_1 + 0x2000);
        if (*(longlong *)(param_1 + 0x2000) == 0) {
          lVar29 = param_1 + 8000;
        }
        dVar2 = *(double *)(lVar29 + 0x10 + lVar16 * 2);
        dVar3 = *(double *)(lVar29 + 8 + lVar16 * 2);
        dVar4 = *(double *)(lVar29 + 0x18 + lVar16 * 2);
        *(float *)((longlong)puVar26 + lVar16 + 0x80) = (float)*(double *)(lVar29 + lVar16 * 2);
        *(float *)((longlong)puVar26 + lVar16 + 0x84) = (float)dVar3;
        *(float *)((longlong)puVar26 + lVar16 + 0x88) = (float)dVar2;
        *(float *)((longlong)puVar26 + lVar16 + 0x8c) = (float)dVar4;
        lVar21 = lVar21 + 1;
        lVar16 = lVar16 + 0x10;
      } while (lVar21 < *(int *)(param_1 + 0x2010));
    }
    *(undefined4 *)(puVar26 + 0x1c) = DAT_14c9ebd58;
    *(undefined4 *)((longlong)puVar26 + 0xe4) = param_5;
    *(undefined4 *)(puVar26 + 0x1d) = param_4;
    fVar40 = *(float *)(param_1 + 0x2904);
    if (100.0 <= fVar40) {
      fVar40 = 100.0;
    }
    if (fVar40 <= 0.01) {
      fVar40 = 0.01;
    }
    *(float *)((longlong)puVar26 + 0xec) = DAT_14c760518 / fVar40;
    uVar7 = *(undefined8 *)(param_1 + 0x13818);
    FUN_14159ca50();
    FUN_14159ca50();
    FUN_1448e935e(uVar7,&local_168,&DAT_14c9edc78,0);
    FUN_14159ca50();
    uVar7 = CONCAT44(local_168._4_4_,(int)local_168);
    uVar8 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    iVar35 = *piVar34 + 0x3f;
    iVar15 = *piVar34 + 0x7e;
    if (-1 < iVar35) {
      iVar15 = iVar35;
    }
    FUN_14159cb72();
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    uStack_160._0_4_ = 0;
    uStack_160._4_4_ = 0;
    FUN_1448f70da(uVar7,&DAT_14c9f05e8,local_268,&local_168);
    FUN_140069376(param_9);
    puVar1 = local_278;
    uVar24 = (undefined6)((ulonglong)piVar34 >> 0x10);
    uVar17 = CONCAT62(uVar24,2);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar17 = CONCAT62(uVar24,4);
    }
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 0x3d;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x1f0);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 0x3d;
      param_1 = local_260;
    }
    *local_278 = (ulonglong)puVar18;
    local_168._0_4_ = (int)local_268;
    local_168._4_4_ = (int)((ulonglong)local_268 >> 0x20);
    uStack_160._0_4_ = (undefined4)DAT_14c9f0630;
    uStack_160._4_4_ = (undefined4)((ulonglong)DAT_14c9f0630 >> 0x20);
    if (DAT_14c9f0630 != 0) {
      LOCK();
      *(int *)(DAT_14c9f0630 + 8) = *(int *)(DAT_14c9f0630 + 8) + 1;
      UNLOCK();
    }
    local_158 = &DAT_14c9f05e8;
    local_2c8 = (wchar_t *)CONCAT71(local_2c8._1_7_,2);
    FUN_140068f1a(puVar26,&local_1b8,&local_168,uVar17 & 0xffffffff);
    *puVar26 = &PTR_FUN_14a256300;
    puVar26[0x37] = &DAT_14c9f05e8;
    puVar26[0x38] = local_268;
    puVar26[0x39] = uVar7;
    puVar26[0x3a] = uVar8;
    *(int *)(puVar26 + 0x3b) = iVar15 >> 6;
    *(undefined1 **)((longlong)puVar26 + 0x1dc) = &DAT_100000001;
    iVar35 = *(int *)(param_9 + 0x170);
    *(uint *)(param_9 + 0x170) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x174) < iVar35 + 1U) {
      FUN_14470e57a(param_9 + 0x168,iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_9 + 0x168) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_9 + 0x170) + -1;
    FUN_140069100(param_9);
    uVar17 = local_1e8;
    puVar18 = local_250;
  }
  piVar34 = local_208;
  lVar16 = *(longlong *)(param_1 + 0x13ad8);
  if (lVar16 == 0) {
    uVar25 = *(uint *)(param_1 + 0x1de0);
    if (uVar25 == 0) {
      iVar35 = 0x20;
    }
    else {
      iVar35 = 0;
      if (uVar25 != 0) {
        for (; (uVar25 >> iVar35 & 1) == 0; iVar35 = iVar35 + 1) {
        }
      }
    }
    if (*(longlong *)(param_1 + 0x3108) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined4 *)(*(longlong *)(param_1 + 0x3108) + 0x24);
    }
    lVar16 = FUN_140c6b718(local_248,uVar22,iVar35);
  }
  local_218 = (undefined8 *)0x0;
  bVar11 = false;
  if (*(int *)(DAT_14c9ed770 + 4) != 0) {
    local_220 = 0;
    if (*(int *)(lVar16 + 0x55c + (ulonglong)*(byte *)(lVar16 + 0x628) * 4) < 1) goto LAB_142d08318;
    local_218 = (undefined8 *)0x0;
    bVar11 = false;
    if (DAT_14c7604b8 != 0) {
      local_220 = 0;
      if (DAT_14c7604bc != 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x62) & 2) == 0) {
          local_218 = (undefined8 *)0x0;
          local_220 = 0;
          bVar11 = false;
        }
        else {
          lVar16 = *(longlong *)(param_1 + 0x13ad8);
          if (lVar16 == 0) {
            uVar25 = *(uint *)(param_1 + 0x1de0);
            if (uVar25 == 0) {
              iVar35 = 0x20;
            }
            else {
              iVar35 = 0;
              if (uVar25 != 0) {
                for (; (uVar25 >> iVar35 & 1) == 0; iVar35 = iVar35 + 1) {
                }
              }
            }
            if (*(longlong *)(param_1 + 0x3108) == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = *(undefined4 *)(*(longlong *)(param_1 + 0x3108) + 0x24);
            }
            lVar16 = FUN_140c6b718(local_248,uVar22,iVar35);
          }
          puVar1 = local_278;
          iVar35 = *(int *)(lVar16 + 0x55c + (ulonglong)*(byte *)(lVar16 + 0x628) * 4);
          uVar30 = (ulonglong)(iVar35 + -1 + (uint)(iVar35 == 0)) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar14 = 1 << ((byte)lVar16 & 0x1f);
          uVar25 = 4;
          if (DAT_14ca84e48 < 4) {
            uVar25 = DAT_14ca84e48;
          }
          uStack_160._0_4_ = 0x4109;
          local_168._0_4_ = uVar25 + (uVar25 == 0);
          local_158 = (undefined *)0x0;
          local_168._4_4_ = 2 - (uint)(DAT_14ca84e48 < 2);
          uVar39 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
          uVar30 = uVar39 + 0x150;
          local_250 = puVar18;
          local_1e8 = uVar17;
          if (*(ulonglong *)(param_9 + 0x78) < uVar30) {
            FUN_140023dd8(local_278,0x160);
            uVar39 = *puVar1 + 0xf & 0xfffffffffffffff0;
            uVar30 = uVar39 + 0x150;
          }
          *(ulonglong *)(param_9 + 0x70) = uVar30;
          FUN_1456bd266(uVar39,L"Lumen.NumCulledHeightfieldObjects",&local_168,0);
          iVar15 = *(int *)(param_9 + 400);
          *(uint *)(param_9 + 400) = iVar15 + 1U;
          if (*(uint *)(param_9 + 0x194) < iVar15 + 1U) {
            FUN_144737178(local_258,iVar15);
          }
          puVar1 = local_278;
          *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar15 * 8) = uVar39;
          *(int *)(uVar39 + 0x7c) = *(int *)(param_9 + 400) + -1;
          uVar25 = 4;
          if (DAT_14ca84e48 < 4) {
            uVar25 = DAT_14ca84e48;
          }
          local_168._0_4_ = uVar25 + (uVar25 == 0);
          uStack_160._0_4_ = 0x4109;
          uVar25 = DAT_14ca84e48;
          if (uVar14 < DAT_14ca84e48) {
            uVar25 = uVar14;
          }
          local_158 = (undefined *)0x0;
          local_168._4_4_ = uVar25 + (uVar25 == 0);
          puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar18 = puVar26 + 0x2a;
          local_220 = uVar39;
          if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
            FUN_140023dd8(local_278,0x160);
            puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar18 = puVar26 + 0x2a;
          }
          *(undefined8 **)(param_9 + 0x70) = puVar18;
          FUN_1456bd266(puVar26,L"Lumen.CulledHeightfieldObjectIndices",&local_168,0);
          iVar15 = *(int *)(param_9 + 400);
          *(uint *)(param_9 + 400) = iVar15 + 1U;
          if (*(uint *)(param_9 + 0x194) < iVar15 + 1U) {
            FUN_144737178(local_258,iVar15);
          }
          puVar1 = local_278;
          *(undefined8 **)(*(longlong *)(param_9 + 0x188) + (longlong)iVar15 * 8) = puVar26;
          *(int *)((longlong)puVar26 + 0x7c) = *(int *)(param_9 + 400) + -1;
          puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar27 + 8;
          local_218 = puVar26;
          if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
            FUN_140023dd8(local_278,0x48);
            puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar27 + 8;
          }
          *(undefined8 **)(param_9 + 0x70) = puVar18;
          puVar27[1] = *(undefined8 *)(local_220 + 8);
          puVar27[2] = 0;
          *(undefined1 *)(puVar27 + 3) = 2;
          *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar27 + 5) = 0;
          *puVar27 = &PTR_FUN_14a1fb3e8;
          *(undefined2 *)(puVar27 + 6) = 0x1c;
          *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
          puVar27[7] = local_220;
          iVar15 = *(int *)(param_9 + 0x1a0);
          *(uint *)(param_9 + 0x1a0) = iVar15 + 1U;
          if (*(uint *)(param_9 + 0x1a4) < iVar15 + 1U) {
            FUN_1447568fc(local_270,iVar15);
          }
          *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar15 * 8) = puVar27;
          *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
          FUN_1405bfba3(param_9,puVar27,0,2);
          puVar1 = local_278;
          puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar18 = puVar26 + 0xc;
          if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
            FUN_140023dd8(local_278,0x70);
            puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar18 = puVar26 + 0xc;
          }
          *(undefined8 **)(param_9 + 0x70) = puVar18;
          *puVar26 = &PTR_FUN_14a2562d8;
          puVar26[2] = 0;
          *(undefined1 *)(puVar26 + 3) = 1;
          puVar26[4] = 0;
          *(undefined1 *)(puVar26 + 5) = 1;
          puVar26[9] = 0;
          puVar26[10] = 0;
          puVar26[0xb] = 0;
          iVar15 = *(int *)(param_9 + 0xa0);
          *(uint *)(param_9 + 0xa0) = iVar15 + 1U;
          if (*(uint *)(param_9 + 0xa4) < iVar15 + 1U) {
            FUN_1448cfae8(param_9 + 0x98,iVar15);
          }
          *(undefined8 **)(*(longlong *)(param_9 + 0x98) + (longlong)iVar15 * 8) = puVar26;
          lVar16 = FUN_1447e4f80();
          cVar13 = *(char *)(lVar16 + 0x41);
          if (*(char *)(lVar16 + 0x41) == '\x03') {
            cVar13 = '\x02';
          }
          puVar26[2] = *(undefined8 *)(param_1 + 0x18);
          *(char *)(puVar26 + 3) = cVar13;
          uVar7 = *(undefined8 *)(local_1f0 + 0xe8);
          lVar16 = FUN_1449a4512();
          puVar1 = local_278;
          cVar13 = *(char *)(lVar16 + 0x41);
          if (cVar13 == '\x03') {
            cVar13 = '\x02';
          }
          puVar26[4] = uVar7;
          *(char *)(puVar26 + 5) = cVar13;
          *(undefined4 *)(puVar26 + 6) = param_5;
          *(undefined4 *)((longlong)puVar26 + 0x34) = param_4;
          *(int *)(puVar26 + 7) = iVar35;
          *(uint *)((longlong)puVar26 + 0x3c) = (uint)(*(int *)(DAT_14c9edbf0 + 4) != 0);
          *(undefined4 *)(puVar26 + 8) = DAT_14c9ebd58;
          puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar27 + 8;
          if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
            FUN_140023dd8(local_278,0x48);
            puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar27 + 8;
          }
          *(undefined8 **)(param_9 + 0x70) = puVar18;
          puVar27[1] = *(undefined8 *)(local_220 + 8);
          puVar27[2] = 0;
          *(undefined1 *)(puVar27 + 3) = 2;
          *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar27 + 5) = 0;
          *puVar27 = &PTR_FUN_14a1fb3e8;
          *(undefined2 *)(puVar27 + 6) = 0x1c;
          *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
          puVar27[7] = local_220;
          iVar15 = *(int *)(param_9 + 0x1a0);
          *(uint *)(param_9 + 0x1a0) = iVar15 + 1U;
          if (*(uint *)(param_9 + 0x1a4) < iVar15 + 1U) {
            FUN_1447568fc(local_270,iVar15);
          }
          lVar16 = local_260;
          puVar1 = local_278;
          *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar15 * 8) = puVar27;
          *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
          puVar26[9] = puVar27;
          puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar27 + 8;
          if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
            FUN_140023dd8(local_278,0x48);
            puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar27 + 8;
          }
          *(undefined8 **)(param_9 + 0x70) = puVar18;
          puVar27[1] = local_218[1];
          puVar27[2] = 0;
          *(undefined1 *)(puVar27 + 3) = 2;
          *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar27 + 5) = 0;
          *puVar27 = &PTR_FUN_14a1fb3e8;
          *(undefined2 *)(puVar27 + 6) = 0x1c;
          *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
          puVar27[7] = local_218;
          iVar15 = *(int *)(param_9 + 0x1a0);
          *(uint *)(param_9 + 0x1a0) = iVar15 + 1U;
          if (*(uint *)(param_9 + 0x1a4) < iVar15 + 1U) {
            FUN_1447568fc(local_270,iVar15);
          }
          puVar1 = local_278;
          *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar15 * 8) = puVar27;
          *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
          puVar26[10] = puVar27;
          puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar27 + 8;
          if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
            FUN_140023dd8(local_278,0x48);
            puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar27 + 8;
          }
          puVar31 = puVar26 + 2;
          *(undefined8 **)(param_9 + 0x70) = puVar18;
          puVar27[1] = *(undefined8 *)(local_230 + 8);
          puVar27[2] = 0;
          *(undefined1 *)(puVar27 + 3) = 2;
          *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar27 + 5) = 0;
          *puVar27 = &PTR_FUN_14a1fb3e8;
          *(undefined2 *)(puVar27 + 6) = 0x1c;
          *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
          puVar27[7] = local_230;
          iVar15 = *(int *)(param_9 + 0x1a0);
          *(uint *)(param_9 + 0x1a0) = iVar15 + 1U;
          if (*(uint *)(param_9 + 0x1a4) < iVar15 + 1U) {
            FUN_1447568fc(local_270,iVar15);
          }
          *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar15 * 8) = puVar27;
          *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
          puVar26[0xb] = puVar27;
          uVar7 = *(undefined8 *)(lVar16 + 0x13818);
          FUN_14159cc76();
          FUN_14159cc76();
          FUN_1448e935e(uVar7,&local_168,&DAT_14c9ee368,0);
          FUN_14159cc76();
          uVar7 = CONCAT44(local_168._4_4_,(int)local_168);
          uVar8 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
          iVar15 = iVar35 + 0x7e;
          if (-1 < iVar35 + 0x3f) {
            iVar15 = iVar35 + 0x3f;
          }
          FUN_14159cd98();
          local_168._0_4_ = 0;
          local_168._4_4_ = 0;
          uStack_160._0_4_ = 0;
          uStack_160._4_4_ = 0;
          FUN_1448f70da(uVar7,&DAT_14c9f0918,puVar31,&local_168);
          FUN_140069376(param_9);
          puVar1 = local_278;
          uVar24 = (undefined6)((ulonglong)puVar27 >> 0x10);
          uVar17 = CONCAT62(uVar24,2);
          if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
             ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
            uVar17 = CONCAT62(uVar24,4);
          }
          puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar26 + 0x3d;
          if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
            FUN_140023dd8(local_278,0x1f0);
            puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar26 + 0x3d;
          }
          *local_278 = (ulonglong)puVar18;
          uStack_160._0_4_ = (undefined4)DAT_14c9f0960;
          uStack_160._4_4_ = (undefined4)((ulonglong)DAT_14c9f0960 >> 0x20);
          if (DAT_14c9f0960 != 0) {
            LOCK();
            *(int *)(DAT_14c9f0960 + 8) = *(int *)(DAT_14c9f0960 + 8) + 1;
            UNLOCK();
          }
          local_158 = &DAT_14c9f0918;
          local_2c8 = (wchar_t *)CONCAT71(local_2c8._1_7_,2);
          local_168 = puVar31;
          FUN_140068f1a(puVar26,&local_1b8,&local_168,uVar17 & 0xffffffff);
          *puVar26 = &PTR_FUN_14a2562e0;
          puVar26[0x37] = &DAT_14c9f0918;
          puVar26[0x38] = puVar31;
          puVar26[0x39] = uVar7;
          puVar26[0x3a] = uVar8;
          *(int *)(puVar26 + 0x3b) = iVar15 >> 6;
          *(undefined1 **)((longlong)puVar26 + 0x1dc) = &DAT_100000001;
          iVar35 = *(int *)(param_9 + 0x170);
          *(uint *)(param_9 + 0x170) = iVar35 + 1U;
          if (*(uint *)(param_9 + 0x174) < iVar35 + 1U) {
            FUN_14470e57a(param_9 + 0x168,iVar35);
          }
          *(undefined8 **)(*(longlong *)(param_9 + 0x168) + (longlong)iVar35 * 8) = puVar26;
          *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_9 + 0x170) + -1;
          FUN_140069100(param_9,puVar26);
          bVar11 = true;
          uVar17 = local_1e8;
          puVar18 = local_250;
          piVar34 = local_208;
        }
      }
      goto LAB_142d08318;
    }
  }
  local_218 = (undefined8 *)0x0;
  bVar11 = false;
  local_220 = 0;
LAB_142d08318:
  puVar1 = local_278;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  uStack_160._0_4_ = 0x4109;
  uVar25 = DAT_14ca84e48;
  if ((uint)local_228 < DAT_14ca84e48) {
    uVar25 = (uint)local_228;
  }
  local_158 = (undefined *)0x0;
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  uVar39 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar30 = uVar39 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar30) {
    FUN_140023dd8(local_278,0x160);
    uVar39 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar30 = uVar39 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar30;
  FUN_1456bd266(uVar39,L"Lumen.NumGridCulledHeightfieldObjects",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar39;
  *(int *)(uVar39 + 0x7c) = *(int *)(param_9 + 400) + -1;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar27 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar26;
  puVar27[1] = *(undefined8 *)(uVar39 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = uVar39;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  bVar9 = (int)local_240 < 1;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  FUN_1405bfba3(param_9,puVar27,0,2);
  lVar16 = local_260;
  if (!(bool)(bVar9 & (bVar11 ^ 1U))) {
    lVar21 = *(longlong *)(local_260 + 0x13ad8);
    if (lVar21 == 0) {
      uVar25 = *(uint *)(local_260 + 0x1de0);
      if (uVar25 == 0) {
        iVar35 = 0x20;
      }
      else {
        iVar35 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> iVar35 & 1) == 0; iVar35 = iVar35 + 1) {
          }
        }
      }
      if (*(longlong *)(local_260 + 0x3108) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined4 *)(*(longlong *)(local_260 + 0x3108) + 0x24);
      }
      lVar21 = FUN_140c6b718(local_248,uVar22,iVar35);
    }
    puVar1 = local_278;
    if ((bool)((int)local_240 < 1 | bVar11 ^ 1U)) {
      if (bVar11) {
        puVar18 = local_218;
      }
    }
    else {
      iVar35 = *(int *)(lVar21 + 0x55c + (ulonglong)*(byte *)(lVar21 + 0x628) * 4);
      uVar25 = iVar35 + *piVar34;
      uVar30 = (ulonglong)((iVar35 + *piVar34 + (uint)(uVar25 == 0)) - 1) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar21 & 0x1f);
      uVar32 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar32 = DAT_14ca84e48;
      }
      local_168._0_4_ = uVar32 + (uVar32 == 0);
      uStack_160._0_4_ = 0x4109;
      if (DAT_14ca84e48 <= uVar14) {
        uVar14 = DAT_14ca84e48;
      }
      local_158 = (undefined *)0x0;
      local_168._4_4_ = uVar14 + (uVar14 == 0);
      puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar26 = puVar27 + 0x2a;
      if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
        FUN_140023dd8(local_278,0x160);
        puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar26 = puVar27 + 0x2a;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar26;
      FUN_1456bd266(puVar27,L"Lumen.CombinedObjectIndexBuffer",&local_168,0);
      iVar35 = *(int *)(param_9 + 400);
      *(uint *)(param_9 + 400) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
        FUN_144737178(local_258,iVar35);
      }
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = puVar27;
      *(int *)((longlong)puVar27 + 0x7c) = *(int *)(param_9 + 400) + -1;
      puVar31 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar26 = puVar31 + 8;
      if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
        FUN_140023dd8(local_278,0x50);
        puVar31 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar26 = puVar31 + 8;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar26;
      *puVar31 = &PTR_FUN_14a2562b0;
      puVar31[2] = 0;
      puVar31[3] = 0;
      puVar31[4] = 0;
      puVar31[5] = 0;
      puVar31[6] = 0;
      iVar35 = *(int *)(param_9 + 0xa0);
      *(uint *)(param_9 + 0xa0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0xa4) < iVar35 + 1U) {
        FUN_1448cfae8(param_9 + 0x98,iVar35);
      }
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x98) + (longlong)iVar35 * 8) = puVar31;
      puVar28 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar26 = puVar28 + 9;
      local_240 = (undefined8 *)(ulonglong)uVar25;
      if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
        FUN_140023dd8(local_278,0x50);
        puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar28 + 9;
      }
      local_268 = puVar31 + 2;
      *(undefined8 **)(param_9 + 0x70) = puVar26;
      puVar28[1] = puVar18[1];
      puVar28[2] = 0;
      *(undefined1 *)(puVar28 + 3) = 3;
      *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
      *puVar28 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar28 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
      puVar28[7] = 0;
      puVar28[8] = puVar18;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar28;
      *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      *local_268 = puVar28;
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x50);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 9;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar18;
      puVar26[1] = local_218[1];
      puVar26[2] = 0;
      *(undefined1 *)(puVar26 + 3) = 3;
      *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
      *puVar26 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar26 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
      puVar26[7] = 0;
      puVar26[8] = local_218;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      puVar31[3] = puVar26;
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x50);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 9;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar18;
      puVar26[1] = *(undefined8 *)(uVar17 + 8);
      puVar26[2] = 0;
      *(undefined1 *)(puVar26 + 3) = 3;
      *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
      *puVar26 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar26 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
      puVar26[7] = 0;
      puVar26[8] = uVar17;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      puVar31[4] = puVar26;
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x50);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 9;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar18;
      puVar26[1] = *(undefined8 *)(local_220 + 8);
      puVar26[2] = 0;
      *(undefined1 *)(puVar26 + 3) = 3;
      *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
      *puVar26 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar26 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
      puVar26[7] = 0;
      puVar26[8] = local_220;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      puVar28 = local_240;
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      puVar31[5] = puVar26;
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 8;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x48);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 8;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar18;
      puVar26[1] = puVar27[1];
      puVar26[2] = 0;
      *(undefined1 *)(puVar26 + 3) = 2;
      *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar26 + 5) = 0;
      *puVar26 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar26 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
      puVar26[7] = puVar27;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      puVar31[6] = puVar26;
      uVar7 = *(undefined8 *)(lVar16 + 0x13818);
      FUN_14159518c();
      FUN_14159518c();
      FUN_1448e935e(uVar7,&local_168,&DAT_14c9edda0,0);
      FUN_14159518c();
      uVar7 = CONCAT44(local_168._4_4_,(int)local_168);
      uVar8 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      iVar15 = (int)puVar28 + 0x3f;
      iVar35 = (int)puVar28 + 0x7e;
      if (-1 < iVar15) {
        iVar35 = iVar15;
      }
      FUN_1415952ae();
      local_168._0_4_ = 0;
      local_168._4_4_ = 0;
      uStack_160._0_4_ = 0;
      uStack_160._4_4_ = 0;
      FUN_1448f70da(uVar7,&DAT_14c9f0670,local_268,&local_168);
      FUN_140069376(param_9);
      puVar1 = local_278;
      uVar24 = (undefined6)(uVar17 >> 0x10);
      uVar22 = (undefined4)CONCAT62(uVar24,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar22 = (undefined4)CONCAT62(uVar24,4);
      }
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 0x3d;
      local_250 = puVar27;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x1f0);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 0x3d;
        lVar16 = local_260;
      }
      *local_278 = (ulonglong)puVar18;
      local_168._0_4_ = (int)local_268;
      local_168._4_4_ = (int)((ulonglong)local_268 >> 0x20);
      uStack_160._0_4_ = (undefined4)DAT_14c9f06b8;
      uStack_160._4_4_ = (undefined4)((ulonglong)DAT_14c9f06b8 >> 0x20);
      if (DAT_14c9f06b8 != 0) {
        LOCK();
        *(int *)(DAT_14c9f06b8 + 8) = *(int *)(DAT_14c9f06b8 + 8) + 1;
        UNLOCK();
      }
      local_158 = &DAT_14c9f0670;
      local_2c8 = (wchar_t *)CONCAT71(local_2c8._1_7_,2);
      FUN_140068f1a(puVar26,&local_1b8,&local_168,uVar22);
      *puVar26 = &PTR_FUN_14a2562c0;
      puVar26[0x37] = &DAT_14c9f0670;
      puVar26[0x38] = local_268;
      puVar26[0x39] = uVar7;
      puVar26[0x3a] = uVar8;
      *(int *)(puVar26 + 0x3b) = iVar35 >> 6;
      *(undefined1 **)((longlong)puVar26 + 0x1dc) = &DAT_100000001;
      iVar35 = *(int *)(param_9 + 0x170);
      *(uint *)(param_9 + 0x170) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x174) < iVar35 + 1U) {
        FUN_14470e57a(param_9 + 0x168,iVar35);
      }
      *(undefined8 **)(*(longlong *)(param_9 + 0x168) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_9 + 0x170) + -1;
      FUN_140069100(param_9,puVar26);
      puVar18 = local_250;
    }
    puVar1 = local_278;
    dVar2 = *param_8;
    dVar3 = param_8[1];
    dVar4 = param_8[2];
    puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar26 = puVar27 + 0x66;
    if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
      FUN_140023dd8(local_278,0x340);
      puVar27 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar26 = puVar27 + 0x66;
    }
    *local_278 = (ulonglong)puVar26;
    *puVar27 = &PTR_FUN_14a256398;
    local_268 = puVar27 + 2;
    puVar27[2] = 0;
    puVar27[10] = 0;
    puVar27[4] = 0;
    puVar27[5] = 0;
    puVar27[7] = 0;
    puVar27[8] = 0;
    *(undefined1 *)(puVar27 + 0xb) = 1;
    puVar27[0xc] = 0;
    *(undefined1 *)(puVar27 + 0xd) = 1;
    local_240 = puVar27 + 0x10;
    local_250 = puVar27 + 0x1c;
    puVar27[0x34] = 0;
    puVar27[0x10] = 0;
    puVar27[0x11] = 0;
    puVar27[0x12] = 0;
    puVar27[0x13] = 0;
    puVar27[0x14] = 0;
    puVar27[0x16] = 0;
    puVar27[0x17] = 0;
    puVar27[0x19] = 0;
    puVar27[0x1a] = 0;
    puVar27[0x1c] = 0;
    puVar27[0x1d] = 0;
    puVar27[0x1e] = 0;
    puVar27[0x1f] = 0;
    puVar27[0x20] = 0;
    puVar27[0x21] = 0;
    *(undefined1 *)(puVar27 + 0x35) = 1;
    puVar27[0x36] = 0;
    *(undefined1 *)(puVar27 + 0x37) = 1;
    puVar27[0x44] = 0;
    puVar27[0x3f] = 0;
    puVar27[0x40] = 0;
    *(undefined4 *)(puVar27 + 0x45) = 4;
    lVar21 = 0x230;
    do {
      *(undefined8 *)((longlong)puVar27 + lVar21) = 0;
      ((undefined8 *)((longlong)puVar27 + lVar21))[1] = 0;
      *(undefined4 *)((longlong)puVar27 + lVar21 + 0x10) = 0xffff0000;
      lVar21 = lVar21 + 0x18;
    } while (lVar21 != 0x2f0);
    *(undefined4 *)((longlong)puVar27 + 0x304) = 0;
    puVar27[0x5e] = 0;
    puVar27[0x5f] = 0;
    *(undefined2 *)(puVar27 + 0x60) = 0;
    *(undefined4 *)(puVar27 + 0x61) = 0xffffffff;
    *(undefined4 *)((longlong)puVar27 + 0x30c) = 0xffffffff;
    *(undefined4 *)(puVar27 + 0x62) = 0xffffffff;
    *(undefined4 *)((longlong)puVar27 + 0x314) = 0xffffffff;
    *(undefined4 *)(puVar27 + 99) = 0;
    *(undefined2 *)((longlong)puVar27 + 0x31c) = 0;
    puVar27[100] = 0;
    iVar35 = *(int *)(param_9 + 0xa0);
    *(uint *)(param_9 + 0xa0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0xa4) < iVar35 + 1U) {
      FUN_1448cfae8((longlong *)(param_9 + 0x98),iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_9 + 0x98) + (longlong)iVar35 * 8) = puVar27;
    if (0 < *local_208) {
      FUN_141760f26(&local_168,param_9);
      puVar27[8] = CONCAT44(uStack_144,local_148);
      puVar27[9] = CONCAT44(uStack_13c,uStack_140);
      puVar27[6] = local_158;
      puVar27[7] = uStack_150;
      puVar27[4] = CONCAT44(local_168._4_4_,(int)local_168);
      puVar27[5] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    }
    uVar30 = local_200;
    uVar17 = local_210;
    lVar21 = *(longlong *)(lVar16 + 0x13ad8);
    if (lVar21 == 0) {
      uVar25 = *(uint *)(lVar16 + 0x1de0);
      if (uVar25 == 0) {
        iVar35 = 0x20;
      }
      else {
        iVar35 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> iVar35 & 1) == 0; iVar35 = iVar35 + 1) {
          }
        }
      }
      if (*(longlong *)(lVar16 + 0x3108) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined4 *)(*(longlong *)(lVar16 + 0x3108) + 0x24);
      }
      lVar21 = FUN_140c6b718(local_248,uVar22,iVar35);
    }
    if (((*(int *)(DAT_14c9ed770 + 4) != 0) &&
        (0 < *(int *)(lVar21 + 0x55c + (ulonglong)*(byte *)(lVar21 + 0x628) * 4))) &&
       ((DAT_14c7604b8 != 0 &&
        ((DAT_14c7604bc != 0 && ((*(byte *)(*(longlong *)(lVar16 + 8) + 0x62) & 2) != 0)))))) {
      uVar7 = *(undefined8 *)(local_1f0 + 0xe8);
      lVar16 = FUN_1449a4512();
      cVar13 = '\x02';
      if (*(char *)(lVar16 + 0x41) != '\x03') {
        cVar13 = *(char *)(lVar16 + 0x41);
      }
      puVar27[10] = uVar7;
      *(char *)(puVar27 + 0xb) = cVar13;
      lVar16 = local_260;
    }
    puVar1 = local_278;
    puVar31 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar26 = puVar31 + 9;
    if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
      FUN_140023dd8(local_278,0x50);
      puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar26 = puVar31 + 9;
      lVar16 = local_260;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar26;
    puVar31[1] = puVar18[1];
    puVar31[2] = 0;
    *(undefined1 *)(puVar31 + 3) = 3;
    *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
    *puVar31 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar31 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar31 + 0x2c) = 0xffffffff00000000;
    puVar31[7] = 0;
    puVar31[8] = puVar18;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar31;
    *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    puVar27[2] = puVar31;
    puVar27[0xc] = *(undefined8 *)(lVar16 + 0x18);
    *(undefined1 *)(puVar27 + 0xd) = 1;
    *(undefined4 *)(puVar27 + 0xe) = 0x3fb504f3;
    *(undefined4 *)((longlong)puVar27 + 0x74) = param_4;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 8;
      lVar16 = local_260;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)(uVar30 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 2;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar26 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
    puVar26[7] = uVar30;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    uVar30 = local_1e0;
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    *local_240 = puVar26;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 8;
      lVar16 = local_260;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)(uVar17 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 2;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar26 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
    puVar26[7] = uVar17;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    piVar34 = local_208;
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    puVar27[0x11] = puVar26;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 8;
      lVar16 = local_260;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)(uVar30 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 2;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar26 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
    puVar26[7] = uVar30;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    puVar27[0x12] = puVar26;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x48);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 8;
      lVar16 = local_260;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)(local_1d8 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 2;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar26 + 5) = 0;
    *puVar26 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar26 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
    puVar26[7] = local_1d8;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    puVar27[0x13] = puVar26;
    if (0 < *piVar34) {
      FUN_141760f26(&local_168,param_9,piVar34);
      *(undefined4 *)(puVar27 + 0x1a) = local_148;
      *(undefined4 *)((longlong)puVar27 + 0xd4) = uStack_144;
      *(undefined4 *)(puVar27 + 0x1b) = uStack_140;
      *(undefined4 *)((longlong)puVar27 + 0xdc) = uStack_13c;
      *(undefined4 *)(puVar27 + 0x18) = (undefined4)local_158;
      *(undefined4 *)((longlong)puVar27 + 0xc4) = local_158._4_4_;
      *(undefined4 *)(puVar27 + 0x19) = (undefined4)uStack_150;
      *(undefined4 *)((longlong)puVar27 + 0xcc) = uStack_150._4_4_;
      puVar27[0x16] = CONCAT44(local_168._4_4_,(int)local_168);
      puVar27[0x17] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      FUN_141761529(&local_168,param_9,piVar34);
      memcpy(local_250,&local_168,0xc0);
    }
    uVar17 = local_230;
    lVar21 = *(longlong *)(lVar16 + 0x13ad8);
    if (lVar21 == 0) {
      uVar25 = *(uint *)(lVar16 + 0x1de0);
      if (uVar25 == 0) {
        iVar35 = 0x20;
      }
      else {
        iVar35 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> iVar35 & 1) == 0; iVar35 = iVar35 + 1) {
          }
        }
      }
      if (*(longlong *)(lVar16 + 0x3108) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined4 *)(*(longlong *)(lVar16 + 0x3108) + 0x24);
      }
      lVar21 = FUN_140c6b718(local_248,uVar22,iVar35);
    }
    if ((((*(int *)(DAT_14c9ed770 + 4) != 0) &&
         (0 < *(int *)(lVar21 + 0x55c + (ulonglong)*(byte *)(lVar21 + 0x628) * 4))) &&
        (DAT_14c7604b8 != 0)) &&
       ((DAT_14c7604bc != 0 && ((*(byte *)(*(longlong *)(lVar16 + 8) + 0x62) & 2) != 0)))) {
      uVar7 = *(undefined8 *)(local_1f0 + 0xe8);
      lVar16 = FUN_1449a4512();
      cVar13 = '\x02';
      if (*(char *)(lVar16 + 0x41) != '\x03') {
        cVar13 = *(char *)(lVar16 + 0x41);
      }
      puVar27[0x34] = uVar7;
      *(char *)(puVar27 + 0x35) = cVar13;
      lVar16 = local_260;
    }
    puVar27[0x36] = *(undefined8 *)(lVar16 + 0x18);
    *(undefined1 *)(puVar27 + 0x37) = 1;
    *(undefined4 *)(puVar27 + 0x38) = param_4;
    *(float *)(puVar27 + 0x3a) = (float)dVar2;
    *(float *)((longlong)puVar27 + 0x1d4) = (float)dVar3;
    *(float *)(puVar27 + 0x3b) = (float)dVar4;
    uVar25 = 0x1f;
    if (param_6 != 0) {
      for (; param_6 >> uVar25 == 0; uVar25 = uVar25 - 1) {
      }
    }
    *(uint *)((longlong)puVar27 + 0x1dc) = uVar25;
    *(uint *)(puVar27 + 0x3c) = local_234;
    *(undefined4 *)((longlong)puVar27 + 0x1e4) = (undefined4)local_1f8;
    *(int *)(puVar27 + 0x3d) = param_7;
    *(undefined4 *)((longlong)puVar27 + 0x1ec) = param_5;
    *(int *)(puVar27 + 0x3e) = (int)local_1d0;
    lVar21 = *(longlong *)(lVar16 + 0x136f8);
    if (lVar21 == 0) {
      lVar21 = FUN_14476842e(param_9,&DAT_14ca63b28,L"BlackDummy",2);
    }
    puVar27[0x3f] = lVar21;
    fVar40 = (float)(int)(0x1e - (uVar25 ^ 0x1f));
    puVar27[0x40] = *(undefined8 *)(lVar16 + 0x136f0);
    if (fVar40 <= 0.0) {
      fVar40 = 0.0;
    }
    *(float *)(puVar27 + 0x41) = fVar40;
    *(uint *)((longlong)puVar27 + 0x20c) = (uint)(*(longlong *)(lVar16 + 0x136f8) != 0);
    iVar35 = *(int *)(lVar16 + 0x3104);
    iVar15 = *(int *)(lVar16 + 0x30fc);
    iVar6 = *(int *)(lVar16 + 0x137cc);
    *(float *)(puVar27 + 0x42) =
         (float)(*(int *)(lVar16 + 0x3100) - *(int *)(lVar16 + 0x30f8)) /
         (float)(*(int *)(lVar16 + 0x137c8) * 2);
    *(float *)((longlong)puVar27 + 0x214) = (float)(iVar35 - iVar15) / (float)(iVar6 * 2);
    puVar27[0x44] = uVar17;
    *(undefined4 *)(puVar27 + 0x45) = 4;
    iVar35 = *piVar34;
    lVar21 = *(longlong *)(lVar16 + 0x13ad8);
    if (lVar21 == 0) {
      uVar25 = *(uint *)(lVar16 + 0x1de0);
      if (uVar25 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
          }
        }
      }
      if (*(longlong *)(lVar16 + 0x3108) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined4 *)(*(longlong *)(lVar16 + 0x3108) + 0x24);
      }
      lVar21 = FUN_140c6b718(local_248,uVar22,iVar15);
    }
    uVar14 = 0;
    uVar25 = 0;
    if (((*(int *)(DAT_14c9ed770 + 4) != 0) &&
        (uVar25 = uVar14, 0 < *(int *)(lVar21 + 0x55c + (ulonglong)*(byte *)(lVar21 + 0x628) * 4)))
       && ((DAT_14c7604b8 != 0 && (DAT_14c7604bc != 0)))) {
      uVar25 = *(uint *)(*(longlong *)(lVar16 + 8) + 0x60) >> 0x10 & 2;
    }
    uVar7 = *(undefined8 *)(lVar16 + 0x13818);
    FUN_14156b40a();
    FUN_1448e935e(uVar7,&local_168,&DAT_14c9edec8,uVar25 | 0 < iVar35);
    FUN_14156b40a();
    uVar7 = CONCAT44(local_168._4_4_,(int)local_168);
    local_230 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    iVar35 = *piVar34;
    lVar21 = *(longlong *)(lVar16 + 0x13ad8);
    if (lVar21 == 0) {
      uVar25 = *(uint *)(lVar16 + 0x1de0);
      if (uVar25 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
          }
        }
      }
      if (*(longlong *)(lVar16 + 0x3108) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined4 *)(*(longlong *)(lVar16 + 0x3108) + 0x24);
      }
      lVar21 = FUN_140c6b718(local_248,uVar22,iVar15);
    }
    uVar25 = 0;
    if ((((*(int *)(DAT_14c9ed770 + 4) != 0) &&
         (uVar25 = 0, 0 < *(int *)(lVar21 + 0x55c + (ulonglong)*(byte *)(lVar21 + 0x628) * 4))) &&
        (DAT_14c7604b8 != 0)) && (DAT_14c7604bc != 0)) {
      uVar25 = *(uint *)(*(longlong *)(lVar16 + 8) + 0x60) >> 0xf & 4;
    }
    uVar14 = 0;
    if (0 < iVar35) {
      uVar14 = DAT_14c9c9af8 << 3;
    }
    uVar8 = *(undefined8 *)(lVar16 + 0x13818);
    FUN_141587b5c();
    FUN_1448e935e(uVar8,&local_168,&DAT_14c9edff0,
                  (uint)(1 < param_7) + (uint)(0 < iVar35) * 2 | uVar25 | uVar14);
    FUN_141587b5c();
    uVar8 = CONCAT44(local_168._4_4_,(int)local_168);
    uVar10 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    FUN_14156b52c();
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    uStack_160._0_4_ = 0;
    uStack_160._4_4_ = 0;
    FUN_1448f70da(uVar7,&DAT_14c9f06f8,local_268,&local_168);
    FUN_141587c7e();
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    uStack_160._0_4_ = 0;
    uStack_160._4_4_ = 0;
    FUN_1448f70da(uVar8,&DAT_14c9f0780,local_240,&local_168);
    uVar5 = *(undefined1 *)(lVar16 + 0x2398);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9f1b18) && (FUN_144b3d300(&DAT_14c9f1b18), DAT_14c9f1b18 == -1)) {
      FUN_1462117c0(&local_168);
      local_280 = 0;
      local_290 = 0;
      local_2b0 = "Unknown";
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2c8 = L"FMeshSDFObjectCull";
      local_288 = 0;
      local_2a0 = 800;
      local_2a8 = 0xff;
      local_298 = &local_168;
      FUN_140b49562(&DAT_14c9f1a98,0,1);
      if (CONCAT44(local_168._4_4_,(int)local_168) != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2ebfb);
      _Init_thread_footer(&DAT_14c9f1b18);
      lVar16 = local_260;
    }
    FUN_140069376(param_9);
    puVar1 = local_278;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 0x3e;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x1f8);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 0x3e;
      lVar16 = local_260;
    }
    *local_278 = (ulonglong)puVar18;
    local_168._0_4_ = (int)local_268;
    local_168._4_4_ = (int)((ulonglong)local_268 >> 0x20);
    uStack_160._0_4_ = (undefined4)DAT_14c9f1ae0;
    uStack_160._4_4_ = (undefined4)((ulonglong)DAT_14c9f1ae0 >> 0x20);
    if (DAT_14c9f1ae0 != 0) {
      LOCK();
      *(int *)(DAT_14c9f1ae0 + 8) = *(int *)(DAT_14c9f1ae0 + 8) + 1;
      UNLOCK();
    }
    local_158 = &DAT_14c9f1a98;
    local_2c8 = (wchar_t *)CONCAT71(local_2c8._1_7_,2);
    FUN_140068f1a(puVar26,&local_170,&local_168,0x21);
    *puVar26 = &PTR_FUN_14a2563a0;
    *(uint *)(puVar26 + 0x37) = local_234;
    *(undefined4 *)((longlong)puVar26 + 0x1bc) = (undefined4)local_1f8;
    *(int *)(puVar26 + 0x38) = param_7;
    *(undefined1 *)((longlong)puVar26 + 0x1c4) = uVar5;
    *(undefined2 *)((longlong)puVar26 + 0x1c5) = (undefined2)local_1b8;
    *(undefined1 *)((longlong)puVar26 + 0x1c7) = local_1b8._2_1_;
    puVar26[0x39] = uVar7;
    puVar26[0x3a] = local_230;
    puVar26[0x3b] = uVar8;
    puVar26[0x3c] = uVar10;
    puVar26[0x3d] = local_268;
    iVar35 = *(int *)(param_9 + 0x170);
    *(uint *)(param_9 + 0x170) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x174) < iVar35 + 1U) {
      FUN_14470e57a(param_9 + 0x168,iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_9 + 0x168) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_9 + 0x170) + -1;
    FUN_140069100(param_9,puVar26);
  }
  puVar1 = local_278;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  uStack_160._0_4_ = 0x4109;
  uVar25 = DAT_14ca84e48;
  if ((uint)local_228 < DAT_14ca84e48) {
    uVar25 = (uint)local_228;
  }
  local_158 = (undefined *)0x0;
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  uVar30 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar30 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar30 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar30 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar30,L"Lumen.GridCulledMeshSDFObjectStartOffsetArray",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar30;
  *(int *)(uVar30 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  uStack_160._0_4_ = 0x4109;
  uVar25 = DAT_14ca84e48;
  if ((uint)local_228 < DAT_14ca84e48) {
    uVar25 = (uint)local_228;
  }
  local_158 = (undefined *)0x0;
  local_168._4_4_ = uVar25 + (uVar25 == 0);
  uVar39 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar39 + 0x150;
  local_240 = (undefined8 *)uVar30;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar39 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar39 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar39,L"Lumen.GridCulledHeightfieldObjectStartOffsetArray",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar39;
  *(int *)(uVar39 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_158 = (undefined *)0x0;
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  local_168._4_4_ = 1;
  uStack_160._0_4_ = 0x4109;
  uVar30 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar30 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar30 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar30 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar30,L"Lumen.CulledMeshSDFObjectAllocator",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar30;
  *(int *)(uVar30 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar25 = DAT_14ca84e48;
  }
  local_158 = (undefined *)0x0;
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  local_168._4_4_ = 1;
  uStack_160._0_4_ = 0x4109;
  uVar36 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar36 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar36 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar36 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar36,L"Lumen.CulledHeightfieldObjectAllocator",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar36;
  *(int *)(uVar36 + 0x7c) = *(int *)(param_9 + 400) + -1;
  uVar25 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar25 = DAT_14ca84e48;
  }
  local_158 = (undefined *)0x0;
  local_168._0_4_ = uVar25 + (uVar25 == 0);
  local_168._4_4_ = 1;
  uStack_160._0_4_ = 0x4189;
  uVar37 = *(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar17 = uVar37 + 0x150;
  if (*(ulonglong *)(param_9 + 0x78) < uVar17) {
    FUN_140023dd8(local_278,0x160);
    uVar37 = *puVar1 + 0xf & 0xfffffffffffffff0;
    uVar17 = uVar37 + 0x150;
  }
  *(ulonglong *)(param_9 + 0x70) = uVar17;
  FUN_1456bd266(uVar37,L"Lumen.CompactCulledObjectsIndirectArguments",&local_168,0);
  iVar35 = *(int *)(param_9 + 400);
  *(uint *)(param_9 + 400) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x194) < iVar35 + 1U) {
    FUN_144737178(local_258,iVar35);
  }
  puVar1 = local_278;
  *(ulonglong *)(*(longlong *)(param_9 + 0x188) + (longlong)iVar35 * 8) = uVar37;
  *(int *)(uVar37 + 0x7c) = *(int *)(param_9 + 400) + -1;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 8;
  local_230 = uVar37;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(uVar30 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar26 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
  puVar26[7] = uVar30;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  local_234 = (uint)param_11;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  FUN_1405bfba3(param_9,puVar26,0,param_11);
  puVar1 = local_278;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(uVar36 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar26 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
  puVar26[7] = uVar36;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  FUN_1405bfba3(param_9,puVar26,0,param_11);
  puVar1 = local_278;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar18 = puVar26 + 0xc;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x70);
    puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar18 = puVar26 + 0xc;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  *puVar26 = &PTR_FUN_14a256318;
  lVar21 = param_9 + 0x98;
  puVar26[2] = 0;
  puVar26[3] = 0;
  puVar26[4] = 0;
  puVar26[5] = 0;
  puVar26[6] = 0;
  puVar26[7] = 0;
  puVar26[8] = 0;
  puVar26[9] = 0;
  iVar35 = *(int *)(param_9 + 0xa0);
  *(uint *)(param_9 + 0xa0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(lVar21,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x98) + (longlong)iVar35 * 8) = puVar26;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 9;
  local_1f8 = lVar21;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x50);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 9;
  }
  local_268 = puVar26 + 2;
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)(local_200 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 3;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *puVar27 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar27 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
  puVar27[7] = 0;
  puVar27[8] = local_200;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  *local_268 = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)((longlong)local_240 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = local_240;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar26[3] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)(uVar30 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = uVar30;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar26[4] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 9;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x50);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 9;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)(local_210 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 3;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *puVar27 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar27 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
  puVar27[7] = 0;
  puVar27[8] = local_210;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar26[5] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)(uVar39 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = uVar39;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar26[6] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)(uVar36 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = uVar36;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar26[7] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)(local_230 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = local_230;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar26[8] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar27 + 9;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x50);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar27 + 9;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar27[1] = *(undefined8 *)(local_1e0 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 3;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *puVar27 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar27 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
  puVar27[7] = 0;
  puVar27[8] = local_1e0;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  local_250 = (undefined8 *)uVar39;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar26[9] = puVar27;
  iVar35 = (uint)local_228;
  *(uint *)(puVar26 + 10) = (uint)local_228;
  uVar7 = *(undefined8 *)(lVar16 + 0x13818);
  FUN_14158f206();
  FUN_14158f206();
  FUN_1448e935e(uVar7,&local_168,&DAT_14c9ee240,0);
  FUN_14158f206();
  uVar7 = CONCAT44(local_168._4_4_,(int)local_168);
  uVar8 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
  uVar25 = iVar35 + 0x3fU >> 6;
  FUN_14158f328();
  local_168._0_4_ = 0;
  local_168._4_4_ = 0;
  uStack_160._0_4_ = 0;
  uStack_160._4_4_ = 0;
  FUN_1448f70da(uVar7,&DAT_14c9f0890,local_268,&local_168);
  FUN_140069376(param_9);
  puVar1 = local_278;
  if ((param_11 & 4) == 0) {
    uVar38 = param_11;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
      uVar38 = param_11 & 0xfff9 | 4;
    }
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 0x3d;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x1f0);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 0x3d;
    }
    *local_278 = (ulonglong)puVar18;
    local_168._0_4_ = (int)local_268;
    local_168._4_4_ = (int)((ulonglong)local_268 >> 0x20);
    uStack_160._0_4_ = (undefined4)DAT_14c9f08d8;
    uStack_160._4_4_ = (undefined4)((ulonglong)DAT_14c9f08d8 >> 0x20);
    if (DAT_14c9f08d8 != 0) {
      LOCK();
      *(int *)(DAT_14c9f08d8 + 8) = *(int *)(DAT_14c9f08d8 + 8) + 1;
      UNLOCK();
    }
    local_158 = &DAT_14c9f0890;
    local_2c8 = (wchar_t *)CONCAT71(local_2c8._1_7_,2);
    FUN_140068f1a(puVar26,&local_1b8,&local_168,uVar38);
    *puVar26 = &PTR_FUN_14a256340;
    puVar26[0x37] = &DAT_14c9f0890;
    puVar26[0x38] = local_268;
    puVar26[0x39] = uVar7;
    puVar26[0x3a] = uVar8;
    *(uint *)(puVar26 + 0x3b) = uVar25;
    *(undefined1 **)((longlong)puVar26 + 0x1dc) = &DAT_100000001;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      uVar38 = param_11 & 0xfff9 | 2;
    }
    else {
      uVar38 = param_11;
      if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
        uVar38 = param_11 & 0xfffd;
      }
    }
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 0x3e;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x1f8);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 0x3e;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    uVar22 = *(undefined4 *)(param_9 + 0x660);
    local_168._0_4_ = (int)local_268;
    local_168._4_4_ = (int)((ulonglong)local_268 >> 0x20);
    uStack_160._0_4_ = (undefined4)DAT_14c9f08d8;
    uStack_160._4_4_ = (undefined4)((ulonglong)DAT_14c9f08d8 >> 0x20);
    if (DAT_14c9f08d8 != 0) {
      LOCK();
      *(int *)(DAT_14c9f08d8 + 8) = *(int *)(DAT_14c9f08d8 + 8) + 1;
      UNLOCK();
    }
    local_158 = &DAT_14c9f0890;
    local_2c8 = (wchar_t *)CONCAT71(local_2c8._1_7_,2);
    FUN_140068f1a(puVar26,&local_1b8,&local_168,uVar38);
    puVar26[0x37] = &DAT_14c9f0890;
    puVar26[0x38] = local_268;
    puVar26[0x39] = uVar7;
    puVar26[0x3a] = uVar8;
    *(uint *)(puVar26 + 0x3b) = uVar25;
    *(undefined1 **)((longlong)puVar26 + 0x1dc) = &DAT_100000001;
    *puVar26 = &PTR_FUN_14a256320;
    *(undefined4 *)(puVar26 + 0x3d) = uVar22;
  }
  puVar18 = local_250;
  lVar16 = local_260;
  iVar35 = *(int *)(param_9 + 0x170);
  *(uint *)(param_9 + 0x170) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x174) < iVar35 + 1U) {
    FUN_14470e57a(param_9 + 0x168,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x168) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_9 + 0x170) + -1;
  local_228 = param_9 + 0x168;
  FUN_140069100(param_9,puVar26);
  puVar1 = local_278;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar27 + 8;
  }
  uVar17 = local_210;
  *(undefined8 **)(param_9 + 0x70) = puVar26;
  puVar27[1] = *(undefined8 *)(local_200 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = local_200;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar31 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar31 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
    FUN_140023dd8(local_278,0x48);
    puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar31 + 8;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar26;
  puVar31[1] = *(undefined8 *)(uVar17 + 8);
  puVar31[2] = 0;
  *(undefined1 *)(puVar31 + 3) = 2;
  *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar31 + 5) = 0;
  *puVar31 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar31 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar31 + 0x32) = 0;
  puVar31[7] = uVar17;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar31;
  *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  FUN_1405bfba3(param_9,puVar27,0,param_11);
  FUN_1405bfba3(param_9,puVar31,0,param_11);
  puVar1 = local_278;
  puVar28 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar26 = puVar28 + 0x10;
  if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
    FUN_140023dd8(local_278,0x90);
    puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar26 = puVar28 + 0x10;
    lVar16 = local_260;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar26;
  *puVar28 = &PTR_FUN_14a256358;
  puVar28[2] = 0;
  puVar28[3] = 0;
  puVar28[4] = 0;
  puVar28[5] = 0;
  puVar28[6] = 0;
  puVar28[7] = 0;
  puVar28[8] = 0;
  puVar28[9] = 0;
  puVar28[10] = 0;
  *(undefined1 *)(puVar28 + 0xb) = 1;
  puVar28[0xc] = 0;
  *(undefined4 *)(puVar28 + 0xd) = 4;
  iVar35 = *(int *)(param_9 + 0xa0);
  *(uint *)(param_9 + 0xa0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0xa4) < iVar35 + 1U) {
    FUN_1448cfae8(local_1f8,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x98) + (longlong)iVar35 * 8) = puVar28;
  puVar23 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar23 + 9;
  if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
    FUN_140023dd8(local_278,0x50);
    puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar23 + 9;
    lVar16 = local_260;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar26;
  puVar23[1] = *(undefined8 *)((longlong)local_240 + 8);
  puVar23[2] = 0;
  *(undefined1 *)(puVar23 + 3) = 3;
  *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
  *puVar23 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar23 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar23 + 0x2c) = 0xffffffff00000000;
  puVar23[7] = 0;
  puVar23[8] = local_240;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar23;
  *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar28[2] = puVar23;
  puVar28[3] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar27 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
    FUN_140023dd8(local_278,0x48);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar27 + 8;
    lVar16 = local_260;
  }
  uVar17 = local_1d0;
  *(undefined8 **)(param_9 + 0x70) = puVar26;
  puVar27[1] = *(undefined8 *)(local_1c0 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 2;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar27 + 5) = 0;
  *puVar27 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar27 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar27 + 0x32) = 0;
  puVar27[7] = local_1c0;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar28[4] = puVar27;
  puVar27 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar27 + 9;
  if (*(undefined8 **)(param_9 + 0x78) < puVar26) {
    FUN_140023dd8(local_278,0x50);
    puVar27 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar27 + 9;
    lVar16 = local_260;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar26;
  puVar27[1] = *(undefined8 *)((longlong)puVar18 + 8);
  puVar27[2] = 0;
  *(undefined1 *)(puVar27 + 3) = 3;
  *(undefined8 *)((longlong)puVar27 + 0x1c) = 0xffffffffffffffff;
  *puVar27 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar27 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar27 + 0x2c) = 0xffffffff00000000;
  puVar27[7] = 0;
  puVar27[8] = puVar18;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar27;
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar28[5] = puVar27;
  puVar28[6] = puVar31;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 8;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x48);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 8;
  }
  piVar34 = local_208;
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(local_1c8 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 2;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar26 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar26 + 0x32) = 0;
  puVar26[7] = local_1c8;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar28[7] = puVar26;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 9;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x50);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 9;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(local_1e0 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 3;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *puVar26 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar26 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
  puVar26[7] = 0;
  puVar26[8] = local_1e0;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  puVar1 = local_278;
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar28[8] = puVar26;
  puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar26 + 9;
  if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
    FUN_140023dd8(local_278,0x50);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar26 + 9;
  }
  *(undefined8 **)(param_9 + 0x70) = puVar18;
  puVar26[1] = *(undefined8 *)(local_1d8 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 3;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *puVar26 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar26 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
  puVar26[7] = 0;
  puVar26[8] = local_1d8;
  iVar35 = *(int *)(param_9 + 0x1a0);
  *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
    FUN_1447568fc(local_270,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
  puVar28[9] = puVar26;
  lVar21 = FUN_1447e4f80();
  cVar13 = '\x02';
  if (*(char *)(lVar21 + 0x41) != '\x03') {
    cVar13 = *(char *)(lVar21 + 0x41);
  }
  puVar28[10] = *(undefined8 *)(lVar16 + 0x18);
  *(char *)(puVar28 + 0xb) = cVar13;
  puVar28[0xc] = local_230;
  *(undefined4 *)(puVar28 + 0xd) = 4;
  *(int *)(puVar28 + 0xe) = (int)uVar17;
  iVar35 = *piVar34;
  lVar21 = *(longlong *)(lVar16 + 0x13ad8);
  if (lVar21 == 0) {
    uVar25 = *(uint *)(lVar16 + 0x1de0);
    if (uVar25 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0;
      if (uVar25 != 0) {
        for (; (uVar25 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
        }
      }
    }
    if (*(longlong *)(lVar16 + 0x3108) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined4 *)(*(longlong *)(lVar16 + 0x3108) + 0x24);
    }
    lVar21 = FUN_140c6b718(local_248,uVar22,iVar15);
  }
  puVar28 = puVar28 + 2;
  uVar14 = 0;
  uVar25 = 0;
  if (((*(int *)(DAT_14c9ed770 + 4) != 0) &&
      (uVar25 = uVar14, 0 < *(int *)(lVar21 + 0x55c + (ulonglong)*(byte *)(lVar21 + 0x628) * 4))) &&
     ((DAT_14c7604b8 != 0 && (DAT_14c7604bc != 0)))) {
    uVar25 = *(uint *)(*(longlong *)(lVar16 + 8) + 0x60) >> 0x10 & 2;
  }
  uVar7 = *(undefined8 *)(lVar16 + 0x13818);
  FUN_1415770ca();
  FUN_1448e935e(uVar7,&local_168,&DAT_14c9ee118,uVar25 | 0 < iVar35);
  FUN_1415770ca();
  uVar12 = local_168._4_4_;
  uVar22 = (int)local_168;
  uVar17 = local_230;
  uVar7 = CONCAT44(local_168._4_4_,(int)local_168);
  uVar8 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
  local_1b8 = 0;
  local_1a8 = (longlong *)0x0;
  local_170 = local_230;
  FUN_1415771ec();
  local_168 = &local_170;
  uStack_160 = &local_168;
  FUN_1448f70da(uVar7,&DAT_14c9f0808,puVar28,&local_168);
  uStack_160._0_4_ = uVar22;
  uStack_160._4_4_ = uVar12;
  uStack_150 = uVar17;
  local_148 = 0;
  local_138 = local_1b8;
  local_128 = local_1a8;
  local_1a8 = (longlong *)0x0;
  local_118 = local_198;
  uStack_110 = uStack_190;
  local_108 = local_188;
  uStack_100 = uStack_180;
  if (local_1b8 != 0) {
    local_1b8 = 0;
  }
  local_158 = (undefined *)uVar8;
  local_168 = puVar28;
  FUN_1415771ec();
  FUN_140069376(param_9);
  uVar30 = local_200;
  uVar17 = local_210;
  puVar1 = local_278;
  if ((param_11 & 4) == 0) {
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14ca84e6a == '\x01' &&
        (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_11 & 2) != 0)))))) {
      local_234 = param_11 & 0xfffffff9 | 4;
    }
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar26 + 0x46;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x240);
      puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar26 + 0x46;
    }
    *local_278 = (ulonglong)puVar18;
    local_2c8 = (wchar_t *)&local_168;
    FUN_1417685fe(puVar26,&local_170,puVar28,local_234);
    uVar30 = local_200;
    uVar17 = local_210;
  }
  else {
    if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
       ((DAT_14ca84e99 & 1) != 0)) {
      param_11 = param_11 & 0xfff9 | 2;
    }
    else if (DAT_14c760ddc == 2 && (param_11 & 2) != 0) {
      param_11 = param_11 & 0xfffd;
    }
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar26 + 0x48;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x250);
      puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar26 + 0x48;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    uVar22 = *(undefined4 *)(param_9 + 0x660);
    local_2c8 = (wchar_t *)&local_168;
    FUN_1417685fe(puVar26,&local_170,puVar28,param_11);
    *puVar26 = &PTR_FUN_14a256360;
    *(undefined4 *)(puVar26 + 0x46) = uVar22;
  }
  lVar16 = local_260;
  iVar35 = *(int *)(param_9 + 0x170);
  *(uint *)(param_9 + 0x170) = iVar35 + 1U;
  if (*(uint *)(param_9 + 0x174) < iVar35 + 1U) {
    FUN_14470e57a(local_228,iVar35);
  }
  *(undefined8 **)(*(longlong *)(param_9 + 0x168) + (longlong)iVar35 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_9 + 0x170) + -1;
  FUN_140069100(param_9,puVar26);
  if (local_138 != 0) {
    plVar19 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar19 = &local_118;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_1b8 != 0) {
    plVar19 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar19 = &local_198;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  piVar34 = local_208;
  FUN_141760f26(&local_168,param_9,local_208);
  *(undefined4 *)(param_10 + 4) = local_148;
  *(undefined4 *)((longlong)param_10 + 0x24) = uStack_144;
  *(undefined4 *)(param_10 + 5) = uStack_140;
  *(undefined4 *)((longlong)param_10 + 0x2c) = uStack_13c;
  *(undefined4 *)(param_10 + 2) = (undefined4)local_158;
  *(undefined4 *)((longlong)param_10 + 0x14) = local_158._4_4_;
  *(undefined4 *)(param_10 + 3) = (undefined4)uStack_150;
  *(undefined4 *)((longlong)param_10 + 0x1c) = uStack_150._4_4_;
  *param_10 = local_168;
  param_10[1] = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
  FUN_141761529(&local_168,param_9,piVar34);
  memcpy(param_10 + 6,&local_168,0xc0);
  puVar1 = local_278;
  *(undefined4 *)(param_10 + 0x1e) = DAT_14c76051c;
  *(undefined4 *)((longlong)param_10 + 0xf4) = DAT_14c760520;
  *(undefined4 *)(param_10 + 0x1f) = DAT_14c760524;
  if (0 < *piVar34) {
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 9;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x50);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)(uVar30 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar26 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = uVar30;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    param_10[0x20] = puVar26;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 9;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x50);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)((longlong)local_240 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar26 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = local_240;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    param_10[0x21] = puVar26;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 9;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x50);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)(local_1c0 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar26 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = local_1c0;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    param_10[0x22] = puVar26;
  }
  lVar21 = *(longlong *)(lVar16 + 0x13ad8);
  if (lVar21 == 0) {
    uVar25 = *(uint *)(lVar16 + 0x1de0);
    if (uVar25 == 0) {
      iVar35 = 0x20;
    }
    else {
      iVar35 = 0;
      if (uVar25 != 0) {
        for (; (uVar25 >> iVar35 & 1) == 0; iVar35 = iVar35 + 1) {
        }
      }
    }
    if (*(longlong *)(local_260 + 0x3108) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined4 *)(*(longlong *)(local_260 + 0x3108) + 0x24);
    }
    lVar21 = FUN_140c6b718(local_248,uVar22,iVar35);
    lVar16 = local_260;
    uVar17 = local_210;
  }
  puVar1 = local_278;
  if (((*(int *)(DAT_14c9ed770 + 4) != 0) &&
      (0 < *(int *)(lVar21 + 0x55c + (ulonglong)*(byte *)(lVar21 + 0x628) * 4))) &&
     ((DAT_14c7604b8 != 0 &&
      ((DAT_14c7604bc != 0 && ((*(byte *)(*(longlong *)(lVar16 + 8) + 0x62) & 2) != 0)))))) {
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 9;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x50);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = *(undefined8 *)(local_220 + 8);
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar26 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = local_220;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    param_10[0x28] = puVar26;
    puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar26 + 9;
    if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
      FUN_140023dd8(local_278,0x50);
      puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
    }
    *(undefined8 **)(param_9 + 0x70) = puVar18;
    puVar26[1] = local_218[1];
    puVar26[2] = 0;
    *(undefined1 *)(puVar26 + 3) = 3;
    *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
    *puVar26 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar26 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
    puVar26[7] = 0;
    puVar26[8] = local_218;
    iVar35 = *(int *)(param_9 + 0x1a0);
    *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
    if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
      FUN_1447568fc(local_270,iVar35);
    }
    puVar1 = local_278;
    *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
    *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
    param_10[0x29] = puVar26;
    if (uVar17 != 0) {
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x50);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 9;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar18;
      puVar26[1] = *(undefined8 *)(uVar17 + 8);
      puVar26[2] = 0;
      *(undefined1 *)(puVar26 + 3) = 3;
      *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
      *puVar26 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar26 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
      puVar26[7] = 0;
      puVar26[8] = uVar17;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      param_10[0x2a] = puVar26;
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x50);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 9;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar18;
      puVar26[1] = *(undefined8 *)((longlong)local_250 + 8);
      puVar26[2] = 0;
      *(undefined1 *)(puVar26 + 3) = 3;
      *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
      *puVar26 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar26 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
      puVar26[7] = 0;
      puVar26[8] = local_250;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      puVar1 = local_278;
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      param_10[0x2b] = puVar26;
      puVar26 = (undefined8 *)(*(longlong *)(param_9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar26 + 9;
      if (*(undefined8 **)(param_9 + 0x78) < puVar18) {
        FUN_140023dd8(local_278,0x50);
        puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar26 + 9;
      }
      *(undefined8 **)(param_9 + 0x70) = puVar18;
      puVar26[1] = *(undefined8 *)(local_1c8 + 8);
      puVar26[2] = 0;
      *(undefined1 *)(puVar26 + 3) = 3;
      *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
      *puVar26 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar26 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar26 + 0x2c) = 0xffffffff00000000;
      puVar26[7] = 0;
      puVar26[8] = local_1c8;
      iVar35 = *(int *)(param_9 + 0x1a0);
      *(uint *)(param_9 + 0x1a0) = iVar35 + 1U;
      if (*(uint *)(param_9 + 0x1a4) < iVar35 + 1U) {
        FUN_1447568fc(local_270,iVar35);
      }
      *(undefined8 **)(*(longlong *)(param_9 + 0x198) + (longlong)iVar35 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x1c) = *(int *)(param_9 + 0x1a0) + -1;
      param_10[0x2c] = puVar26;
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d0c952 FUN_142d0c952 body=69 status=ok
// SIG undefined FUN_142d0c952(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0c952(void)

{
  _DAT_14c9ece70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0c994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ece78,1);
  return;
}



// FUNCTION 142d0c997 FUN_142d0c997 body=69 status=ok
// SIG undefined FUN_142d0c997(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0c997(void)

{
  _DAT_14c9ece80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0c9d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ece88,1);
  return;
}



// FUNCTION 142d0c9dc FUN_142d0c9dc body=69 status=ok
// SIG undefined FUN_142d0c9dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0c9dc(void)

{
  _DAT_14c9ece98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0ca1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ecea0,1);
  return;
}



// FUNCTION 142d0ca21 FUN_142d0ca21 body=69 status=ok
// SIG undefined FUN_142d0ca21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0ca21(void)

{
  _DAT_14c9ecea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d0ca63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9eceb0,1);
  return;
}



// FUNCTION 142d0ca96 FUN_142d0ca96 body=4971 status=ok
// SIG undefined FUN_142d0ca96(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142d0ca96(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  uint param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  code *pcVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  code *pcVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  byte bVar24;
  byte bVar25;
  longlong lVar26;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  longlong *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  longlong *local_380;
  longlong *local_378;
  undefined8 *local_370;
  longlong *local_368;
  undefined8 *local_358;
  undefined8 local_350;
  longlong *local_348;
  uint local_33c;
  int local_338;
  int local_334;
  longlong *local_330;
  undefined8 *local_328;
  longlong local_320;
  ulonglong local_318;
  longlong local_310;
  ulonglong local_308;
  longlong local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  longlong local_2c8;
  longlong lStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  longlong *******local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (((param_4 != (undefined8 *)0x0) && ((*(uint *)(param_2 + 0xe4) & 0x200) != 0)) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    local_3a8 = (longlong *)((ulonglong)local_3a8 & 0xffffffff00000000);
    cVar1 = FUN_140444219(*(longlong *)(param_1 + 0x28),0,0,1);
    if ((cVar1 != '\0') && (plVar10 = *(longlong **)(param_2 + 0xc0), plVar10 != (longlong *)0x0)) {
      local_318 = param_3;
      do {
        plVar8 = (longlong *)(**(code **)(*plVar10 + 0x30))(plVar10,*(undefined4 *)(param_1 + 0x20))
        ;
        if (plVar8 != (longlong *)0x0) {
          if ((((*(byte *)((longlong)param_4 + 0x6e) & 8) == 0) ||
              (iVar4 = (**(code **)(*plVar8 + 0x30))(plVar8), iVar4 == 3)) ||
             ((cVar1 = (**(code **)(*plVar8 + 0x60))(plVar8), cVar1 == '\0' ||
              (cVar1 = (**(code **)(*plVar8 + 0x318))(plVar8), cVar1 != '\0')))) break;
          plVar12 = *(longlong **)(param_2 + 0xb8);
          (**(code **)(*plVar12 + 0x30))(plVar12);
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2c8 = 0;
          lStack_2c0 = 0;
          local_2d8 = 0;
          lStack_2d0 = 0;
          local_2e8 = 0;
          lStack_2e0 = 0;
          uVar9 = (**(code **)(*plVar12 + 0x30))(plVar12);
          cVar1 = FUN_140186b65(plVar8,uVar9,&local_2e8,&local_2d8);
          if (cVar1 != '\0') {
            lVar26 = *(longlong *)(param_1 + 0x28);
            uVar7 = *(uint *)(param_2 + 0xe4);
            local_2f8 = DAT_14ca44d40;
            local_2f0 = DAT_14ca44d68;
            if (lVar26 != 0) {
              if (-1 < (int)param_5 && (uVar7 >> 0x18 & 1) != 0) {
                lVar13 = lVar26 + 0x3208;
                if (*(longlong *)(lVar26 + 0x3218) != 0) {
                  lVar13 = *(longlong *)(lVar26 + 0x3218);
                }
                if ((*(uint *)(lVar13 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) == 0
                   ) {
                  lVar13 = lVar26 + 0x3228;
                  if (*(longlong *)(lVar26 + 0x3238) != 0) {
                    lVar13 = *(longlong *)(lVar26 + 0x3238);
                  }
                  if ((*(uint *)(lVar13 + (ulonglong)(param_5 >> 5) * 4) &
                      1 << ((byte)param_5 & 0x1f)) == 0) goto LAB_142d0cc5f;
                  lVar13 = 0x31c8;
                }
                else {
                  lVar13 = 0x31d0;
                }
                local_2f0 = *(undefined8 *)(lVar26 + lVar13);
              }
LAB_142d0cc5f:
              uVar5 = *(uint *)(param_4[0x43] + 0x158);
              if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar26 + 0x31c0))) {
                puVar17 = &DAT_000031a8 + lVar26;
                if (*(undefined1 **)(lVar26 + 0x31b8) != (undefined1 *)0x0) {
                  puVar17 = *(undefined1 **)(lVar26 + 0x31b8);
                }
                if ((*(uint *)(puVar17 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
                  local_2f8 = *(undefined8 *)(*(longlong *)(lVar26 + 0x3198) + (ulonglong)uVar5 * 8)
                  ;
                }
              }
            }
            pcVar15 = *(code **)(*plVar8 + 0x38);
            plVar12 = plVar8;
            local_358 = param_4;
            if (pcVar15 == FUN_144765e18) {
              plVar12 = (longlong *)plVar8[9];
              if (plVar12 == (longlong *)0x0) {
                plVar12 = (longlong *)plVar8[8];
                pcVar15 = *(code **)(*plVar12 + 0x420);
                pcVar18 = (code *)&LAB_144b24e8a;
              }
              else {
                pcVar15 = *(code **)(*plVar12 + 0x420);
                pcVar18 = (code *)&LAB_14497e108;
              }
              if (pcVar15 != pcVar18) goto LAB_142d0ddb5;
            }
            else {
LAB_142d0ddb5:
              (*pcVar15)(plVar12);
            }
            lVar26 = *plVar8;
            if (*(code **)(lVar26 + 0x100) == (code *)&LAB_144b25520) {
              bVar2 = (*(byte *)(plVar8[8] + 0x1d0) & 0x40) >> 6;
            }
            else {
              bVar2 = (**(code **)(lVar26 + 0x100))(plVar8);
              lVar26 = *plVar8;
            }
            local_334 = 2 - (uint)((uVar7 >> 0xc & 1) != 0);
            if (bVar2 != 0) {
              local_334 = 1;
            }
            pcVar15 = *(code **)(lVar26 + 0x38);
            plVar12 = plVar8;
            if (pcVar15 == FUN_144765e18) {
              plVar12 = (longlong *)plVar8[9];
              if (plVar12 == (longlong *)0x0) {
                plVar12 = (longlong *)plVar8[8];
                pcVar15 = *(code **)(*plVar12 + 0x420);
                if (pcVar15 != (code *)&LAB_144b24e8a) goto LAB_142d0ddcd;
                bVar2 = *(byte *)(plVar12 + 0x30);
              }
              else {
                pcVar15 = *(code **)(*plVar12 + 0x420);
                if (pcVar15 != (code *)&LAB_14497e108) goto LAB_142d0ddcd;
                bVar2 = *(byte *)(plVar12 + 0x2a);
              }
              bVar2 = (bVar2 & 0x10) >> 4;
            }
            else {
LAB_142d0ddcd:
              bVar2 = (*pcVar15)(plVar12);
            }
            lVar13 = local_2d8;
            lVar26 = local_2e8;
            bVar2 = (char)uVar7 < '\0' | bVar2;
            local_338 = 2 - (uint)((uVar7 & 0x40) == 0);
            local_308 = 0;
            if (bVar2 != 0) {
              local_338 = 0;
            }
            if (local_2e8 != 0) {
              local_308 = (ulonglong)*(uint *)(local_2e8 + 0xdc);
            }
            uVar7 = 0;
            if (local_2d8 == 0) {
              local_328 = (undefined8 *)0x0;
            }
            else {
              local_328 = (undefined8 *)((ulonglong)*(uint *)(local_2d8 + 0xdc) << 0x20);
            }
            local_348 = *(longlong **)(param_2 + 0xb8);
            local_320 = local_358[0x43];
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
            local_33c = CONCAT31(local_33c._1_3_,bVar2);
            if (plVar8[3] != 0) {
              if ((*(byte *)(*(longlong *)(plVar8[3] + 0x28) + 0x246) & 0x10) == 0) {
                uVar7 = 0;
              }
              else {
                cVar1 = (**(code **)(*plVar8 + 0x358))(plVar8);
                uVar7 = (uint)(byte)(cVar1 * '\x02' + 1);
              }
            }
            local_66 = *(undefined1 *)(param_1 + 0x78);
            local_19c = *(uint *)(param_2 + 0xe4) >> 0xe & 7;
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
            uStack_1b0 = (undefined4)plVar10[10];
            uStack_1ac = *(undefined4 *)((longlong)plVar10 + 0x54);
            uStack_1a8 = (undefined4)plVar10[0xb];
            uStack_1a4 = *(undefined4 *)((longlong)plVar10 + 0x5c);
            local_248 = 0;
            uStack_240 = 0;
            local_288 = lVar26;
            local_280 = lStack_2e0;
            local_278 = lVar13;
            local_270 = lStack_2d0;
            local_300 = local_2c8;
            local_268 = local_2c8;
            local_260 = lStack_2c0;
            local_258 = local_2b8;
            local_250 = uStack_2b0;
            local_238 = local_2a8;
            local_230 = uStack_2a0;
            local_64 = local_19c;
            FUN_144765e6c(&local_228,local_348[0x22],&local_288);
            local_330 = local_180;
            FUN_1447662e4(local_180,&local_288);
            puVar16 = &DAT_14c9c0e10;
            if (local_338 == 2) {
              puVar16 = &DAT_14c9c0e28;
            }
            puVar19 = &DAT_14c9c0d68;
            if (local_338 == 2) {
              puVar19 = &DAT_14c9c0df8;
            }
            if ((char)local_33c != '\0') {
              puVar16 = &DAT_14c9c0e40;
            }
            puVar11 = &DAT_14c9c0db0;
            if ((char)local_33c == '\0') {
              puVar11 = puVar19;
            }
            if (local_334 == 1) {
              puVar11 = puVar16;
            }
            uStack_1c0 = *puVar11;
            local_1c8 = *(undefined8 *)(param_1 + 0x40);
            local_1b8 = *(undefined8 *)(param_1 + 0x48);
            uVar3 = 0;
            if (DAT_14ca84f32 == '\x01') {
              if (*(int *)(DAT_14ca620d8 + 4) == 0) {
                uVar3 = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar8 + 0x490))(plVar8);
                if (uVar5 < 4) {
                  uVar3 = (char)(0x5010400 >> ((byte)(uVar5 << 3) & 0x1f));
                }
                else {
                  uVar3 = 0;
                  if ((uVar5 < 7) && (uVar3 = 0, DAT_14ca84f33 != '\0')) {
                    uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar5 << 3) & 0x3f));
                  }
                }
              }
            }
            local_19f = CONCAT11(uVar3,(undefined1)local_19f);
            cVar1 = (**(code **)(*plVar8 + 0x4a0))(plVar8);
            if (cVar1 == '\0') {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_1449c014c(param_1);
            }
            puVar16 = local_358;
            local_19f = CONCAT11(local_19f._1_1_,uVar3);
            if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
              FUN_144766928(&local_228);
            }
            local_350 = (ulonglong)local_350._4_4_ << 0x20;
            FUN_144765fea(local_348,*(undefined4 *)(param_1 + 0x20),0,local_108);
            plVar12 = local_348;
            if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
               (DAT_14cafb358 == 2)) {
              uVar6 = *(undefined4 *)(param_1 + 8);
              uVar9 = (**(code **)(*local_348 + 0x30))(local_348);
              local_3a8._0_4_ = uVar6;
              FUN_1456c013a(&local_228,plVar8,uVar9,local_358);
              uVar6 = *(undefined4 *)(param_1 + 8);
              uVar9 = (**(code **)(*plVar12 + 0x30))(plVar12);
              puVar16 = local_358;
              local_3a8 = (longlong *)CONCAT44(local_3a8._4_4_,uVar6);
              FUN_1456c0257(&local_228,plVar8,uVar9,local_358);
            }
            local_67 = (char)local_348[0x25];
            local_33c = uVar7 + 4;
            if ((char)local_348[0x25] == -1) {
              local_33c = uVar7;
            }
            local_33c = local_33c & 0xff;
            if (local_2e8 != 0) {
              if ((local_110 & 1) == 0) {
                local_290 = (longlong *******)0x0;
                local_298 = 0x58;
                local_350 = (ulonglong)local_350._4_4_ << 0x20;
              }
              else {
                plVar12 = local_170;
                if (local_170 == (longlong *)0x0) {
                  plVar12 = local_180;
                }
                local_298 = *plVar12;
                uVar20 = *(ulonglong *)(local_298 + 0x30);
                if ((uVar20 & 1) != 0) {
                  uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                }
                iVar4 = *(int *)(local_298 + 0x28);
                iVar23 = 0;
                if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                  lVar26 = 0;
                  iVar23 = 0;
                  do {
                    iVar23 = iVar23 + (uint)*(ushort *)(uVar20 + 2 + lVar26);
                    lVar26 = lVar26 + 0x18;
                  } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar26);
                }
                iVar22 = iVar4 + 0xe;
                if (-1 < iVar4 + 7) {
                  iVar22 = iVar4 + 7;
                }
                local_290 = (longlong *******)&local_160;
                if (0x50 < local_110._2_2_) {
                  local_290 = local_160;
                }
                local_350 = CONCAT44(local_350._4_4_,
                                     iVar23 + (iVar22 >> 3) +
                                              (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8)
                                              + iVar4) * 8 + 7) & 0xfffffffffffffff8;
                puVar16 = local_358;
              }
              local_390 = &local_298;
              local_398 = &local_2f8;
              local_3a8 = plVar10;
              local_3a0 = plVar8;
              FUN_14474308c(local_2e8,*(undefined8 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x20),puVar16);
            }
            if (local_2d8 != 0) {
              uVar20 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
              uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
              uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar20 < 0x100000000000000) {
                local_298 = 0x58;
                local_290 = (longlong *******)0x0;
              }
              else {
                plVar12 = local_170;
                if (local_170 == (longlong *)0x0) {
                  plVar12 = local_180;
                }
                local_298 = plVar12[(uVar20 >> 0x38) - 1];
                uVar20 = *(ulonglong *)(local_298 + 0x30);
                if ((uVar20 & 1) != 0) {
                  uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                }
                iVar4 = *(int *)(local_298 + 0x28);
                iVar23 = 0;
                if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                  local_310 = (longlong)*(int *)(local_298 + 0x38) * 0x18;
                  lVar26 = 0;
                  iVar23 = 0;
                  do {
                    iVar23 = iVar23 + (uint)*(ushort *)(uVar20 + 2 + lVar26);
                    lVar26 = lVar26 + 0x18;
                  } while (local_310 != lVar26);
                }
                iVar22 = iVar4 + 0xe;
                if (-1 < iVar4 + 7) {
                  iVar22 = iVar4 + 7;
                }
                local_290 = (longlong *******)&local_160;
                if (0x50 < local_110._2_2_) {
                  local_290 = local_160;
                }
                local_290 = (longlong *******)((longlong)(int)local_350 + (longlong)local_290);
                local_350 = CONCAT44(local_350._4_4_,
                                     ((iVar22 >> 3) +
                                      (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar4)
                                      * 8 + iVar23 + 7U & 0xfffffff8) + (int)local_350);
                puVar16 = local_358;
              }
              local_390 = &local_298;
              local_398 = &local_2f8;
              local_3a8 = plVar10;
              local_3a0 = plVar8;
              FUN_14474308c(local_2d8,*(undefined8 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x20),puVar16);
            }
            if (local_300 != 0) {
              uVar20 = (ulonglong)(local_110 & 0x1f) - (ulonglong)(local_110 >> 1 & 5);
              uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
              uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar20 < 0x100000000000000) {
                local_298 = 0x58;
                local_290 = (longlong *******)0x0;
              }
              else {
                if (local_170 != (longlong *)0x0) {
                  local_330 = local_170;
                }
                local_290 = (longlong *******)&local_160;
                if (0x50 < local_110._2_2_) {
                  local_290 = local_160;
                }
                local_298 = local_330[(uVar20 >> 0x38) - 1];
                local_290 = (longlong *******)((longlong)(int)local_350 + (longlong)local_290);
              }
              local_390 = &local_298;
              local_398 = &local_2f8;
              local_3a8 = plVar10;
              local_3a0 = plVar8;
              FUN_14474308c(local_300,*(undefined8 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x20),puVar16);
            }
            uVar20 = (ulonglong)*(int *)(param_2 + 0xb0);
            if (0 < (longlong)uVar20) {
              local_328 = (undefined8 *)((ulonglong)local_328 | local_308);
              uVar21 = 0;
              uVar14 = local_318;
              local_350 = uVar20;
              do {
                if ((uVar14 >> (uVar21 & 0x3f) & 1) != 0) {
                  lVar26 = *(longlong *)(param_2 + 0xa8);
                  if (*(longlong *)(param_2 + 0xa8) == 0) {
                    lVar26 = param_2;
                  }
                  plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
                  uVar7 = *(uint *)(lVar26 + 0x7c + uVar21 * 0xa8);
                  bVar24 = (byte)(uVar7 >> 8);
                  bVar25 = (bVar24 & 8) + (char)local_33c;
                  bVar2 = bVar25;
                  if (((uVar7 >> 0xc & 1) != 0) &&
                     (bVar2 = bVar25 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
                    bVar2 = bVar25;
                  }
                  lVar26 = lVar26 + uVar21 * 0xa8;
                  if (local_2e8 == 0) {
                    uVar7 = 0;
                  }
                  else {
                    if ((*(byte *)(plVar10 + 0xe) & 1) == 0) {
                      local_290 = (longlong *******)0x0;
                      local_298 = 0x58;
                      uVar7 = 0;
                    }
                    else {
                      plVar8 = (longlong *)plVar10[2];
                      if ((longlong *)plVar10[2] == (longlong *)0x0) {
                        plVar8 = plVar10;
                      }
                      local_298 = *plVar8;
                      uVar20 = *(ulonglong *)(local_298 + 0x30);
                      if ((uVar20 & 1) != 0) {
                        uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                      }
                      iVar4 = 0;
                      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                        lVar13 = 0;
                        iVar4 = 0;
                        do {
                          iVar4 = iVar4 + (uint)*(ushort *)(uVar20 + 2 + lVar13);
                          lVar13 = lVar13 + 0x18;
                        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar13);
                      }
                      iVar23 = *(int *)(local_298 + 0x28);
                      iVar22 = iVar23 + 0xe;
                      if (-1 < iVar23 + 7) {
                        iVar22 = iVar23 + 7;
                      }
                      if (*(ushort *)((longlong)plVar10 + 0x72) < 0x51) {
                        local_290 = (longlong *******)(plVar10 + 4);
                      }
                      else {
                        local_290 = (longlong *******)plVar10[4];
                      }
                      uVar7 = iVar4 + (iVar22 >> 3) +
                                      (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar23
                                      ) * 8 + 7U & 0xfffffff8;
                    }
                    local_368 = plVar10 + 0xf;
                    local_370 = &local_298;
                    local_378 = &local_2f8;
                    local_390 = local_358;
                    local_398 = (undefined8 *)
                                CONCAT44(local_398._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_3a8 = local_348;
                    local_3a0 = (longlong *)((ulonglong)local_3a0 & 0xffffffffffffff00);
                    local_388 = (undefined8 *)param_2;
                    local_380 = (longlong *)lVar26;
                    FUN_1456bf974(local_2e8,*(undefined8 *)(lStack_2e0 + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  if (local_2d8 != 0) {
                    uVar20 = (ulonglong)(*(ushort *)(plVar10 + 0xe) & 0xf) -
                             (ulonglong)(*(ushort *)(plVar10 + 0xe) >> 1 & 5);
                    uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
                    uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                    if (uVar20 < 0x100000000000000) {
                      local_298 = 0x58;
                      local_290 = (longlong *******)0x0;
                    }
                    else {
                      plVar8 = (longlong *)plVar10[2];
                      if ((longlong *)plVar10[2] == (longlong *)0x0) {
                        plVar8 = plVar10;
                      }
                      local_298 = plVar8[(uVar20 >> 0x38) - 1];
                      uVar20 = *(ulonglong *)(local_298 + 0x30);
                      if ((uVar20 & 1) != 0) {
                        uVar20 = ((longlong)uVar20 >> 0x18) + local_298 + 0x30;
                      }
                      iVar4 = 0;
                      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
                        lVar13 = 0;
                        iVar4 = 0;
                        do {
                          iVar4 = iVar4 + (uint)*(ushort *)(uVar20 + 2 + lVar13);
                          lVar13 = lVar13 + 0x18;
                        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar13);
                      }
                      iVar23 = *(int *)(local_298 + 0x28);
                      iVar22 = iVar23 + 0xe;
                      if (-1 < iVar23 + 7) {
                        iVar22 = iVar23 + 7;
                      }
                      if (*(ushort *)((longlong)plVar10 + 0x72) < 0x51) {
                        plVar8 = plVar10 + 4;
                      }
                      else {
                        plVar8 = (longlong *)plVar10[4];
                      }
                      local_290 = (longlong *******)((longlong)(int)uVar7 + (longlong)plVar8);
                      uVar7 = ((iVar22 >> 3) +
                               (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar23) * 8 +
                               iVar4 + 7U & 0xfffffff8) + uVar7;
                    }
                    local_368 = plVar10 + 0xf;
                    local_370 = &local_298;
                    local_378 = &local_2f8;
                    local_390 = local_358;
                    local_398 = (undefined8 *)
                                CONCAT44(local_398._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_3a8 = local_348;
                    local_3a0 = (longlong *)((ulonglong)local_3a0 & 0xffffffffffffff00);
                    local_388 = (undefined8 *)param_2;
                    local_380 = (longlong *)lVar26;
                    FUN_1456bf974(local_2d8,*(undefined8 *)(lStack_2d0 + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  if (local_2c8 != 0) {
                    uVar20 = (ulonglong)(*(ushort *)(plVar10 + 0xe) & 0x1f) -
                             (ulonglong)(*(ushort *)(plVar10 + 0xe) >> 1 & 5);
                    uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
                    uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                    if (uVar20 < 0x100000000000000) {
                      local_298 = 0x58;
                      local_290 = (longlong *******)0x0;
                    }
                    else {
                      plVar8 = (longlong *)plVar10[2];
                      if ((longlong *)plVar10[2] == (longlong *)0x0) {
                        plVar8 = plVar10;
                      }
                      if (*(ushort *)((longlong)plVar10 + 0x72) < 0x51) {
                        plVar12 = plVar10 + 4;
                      }
                      else {
                        plVar12 = (longlong *)plVar10[4];
                      }
                      local_298 = plVar8[(uVar20 >> 0x38) - 1];
                      local_290 = (longlong *******)((longlong)(int)uVar7 + (longlong)plVar12);
                    }
                    local_368 = plVar10 + 0xf;
                    local_370 = &local_298;
                    local_378 = &local_2f8;
                    local_390 = local_358;
                    local_398 = (undefined8 *)
                                CONCAT44(local_398._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_3a8 = local_348;
                    local_3a0 = (longlong *)((ulonglong)local_3a0 & 0xffffffffffffff00);
                    local_388 = (undefined8 *)param_2;
                    local_380 = (longlong *)lVar26;
                    FUN_1456bf974(local_2c8,*(undefined8 *)(lStack_2c0 + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  uVar7 = 0;
                  local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
                  bVar25 = DAT_14ca96500;
                  if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x000142d0db8b:
                    if (bVar25 != 0) {
LAB_142d0da06:
                      uVar5 = *(uint *)(lVar26 + 0x54) & 7;
                      if (uVar5 == 0) {
                        uVar7 = *(uint *)(local_320 + 0x15c);
                        uVar5 = *(uint *)(local_320 + 0x204) & 0x7fffffff;
                      }
                      else {
                        if ((uVar5 != 1) || (*(longlong *)(param_1 + 0x28) == 0))
                        goto LAB_142d0da36;
                        uVar7 = *(uint *)(lVar26 + 0xa0) | 0x80000000;
                        uVar5 = *(uint *)(lVar26 + 0xa4) | 0x80000000;
                      }
                      local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar5);
                    }
                  }
                  else if (((2 < *(int *)(param_1 + 0x20)) &&
                           (lVar13 = (ulonglong)DAT_14ca85550 * 0x3c,
                           *(longlong *)(&DAT_14ca814b0 + lVar13) != DAT_14ca81490)) &&
                          (DAT_14ca85550 != 0xc)) {
                    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar13 + 3) & 0x10) != 0) {
                      bVar25 = *(byte *)((longlong)&DAT_14ca814c8 + lVar13 + 3) & 0x20;
                      goto joined_r0x000142d0db8b;
                    }
                    goto LAB_142d0da06;
                  }
LAB_142d0da36:
                  if (local_320 == 0) {
                    uVar6 = 0xffffffff;
                  }
                  else {
                    uVar6 = *(undefined4 *)(local_320 + 0x158);
                  }
                  local_298 = CONCAT44(uVar6,uVar7);
                  local_380 = &local_288;
                  local_388 = &local_228;
                  local_390 = (undefined8 *)CONCAT71(local_390._1_7_,bVar2 | bVar24 & 0x20);
                  local_398 = local_328;
                  local_3a0 = (longlong *)CONCAT44(local_3a0._4_4_,local_338);
                  local_3a8 = (longlong *)CONCAT44(local_3a8._4_4_,local_334);
                  local_378 = plVar10;
                  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                            (*(longlong **)(param_1 + 0x30),param_2,uVar21 & 0xffffffff,&local_298);
                  uVar14 = local_318;
                  uVar20 = local_350;
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 != uVar20);
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
            break;
          }
        }
        plVar10 = (longlong *)
                  (**(code **)(*plVar10 + 0x38))(plVar10,*(undefined4 *)(param_1 + 0x20));
      } while (plVar10 != (longlong *)0x0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d0de02 FUN_142d0de02 body=2794 status=ok
// SIG undefined FUN_142d0de02(void)

/* WARNING: Removing unreachable block (ram,0x000142d0e6f8) */

void FUN_142d0de02(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  void *_Dst;
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  code *pcVar13;
  undefined8 *puVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  undefined1 auStack_548 [32];
  uint *local_528;
  undefined1 *local_520;
  undefined1 local_509;
  longlong *local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined1 local_49a [2];
  undefined8 local_498;
  undefined1 local_48d;
  uint local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
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
  undefined8 uStack_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined2 local_256;
  undefined4 local_254;
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
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_548;
  uVar6 = (uint)*param_5;
  if ((uVar6 >> 9 & 1) != 0) {
    iVar7 = (**(code **)(*param_3 + 0x30))(param_3);
    if (((iVar7 == 3) || (cVar4 = (**(code **)(*param_3 + 0x60))(param_3), cVar4 == '\0')) ||
       (cVar4 = (**(code **)(*param_3 + 0x318))(param_3), cVar4 != '\0')) goto LAB_142d0e6fd;
    uVar6 = (uint)*param_5;
  }
  pcVar10 = *(code **)(*param_3 + 0x38);
  plVar12 = param_3;
  if (pcVar10 == FUN_144765e18) {
    plVar12 = (longlong *)param_3[9];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)param_3[8];
      pcVar10 = *(code **)(*plVar12 + 0x420);
      pcVar13 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar10 = *(code **)(*plVar12 + 0x420);
      pcVar13 = (code *)&LAB_14497e108;
    }
    if (pcVar10 != pcVar13) goto LAB_142d0e8ca;
  }
  else {
LAB_142d0e8ca:
    (*pcVar10)(plVar12);
  }
  lVar8 = *param_3;
  if (*(code **)(lVar8 + 0x100) == (code *)&LAB_144b25520) {
    bVar15 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar15 = (**(code **)(lVar8 + 0x100))(param_3);
    lVar8 = *param_3;
  }
  pcVar10 = *(code **)(lVar8 + 0x38);
  plVar12 = param_3;
  if (pcVar10 == FUN_144765e18) {
    plVar12 = (longlong *)param_3[9];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)param_3[8];
      pcVar10 = *(code **)(*plVar12 + 0x420);
      if (pcVar10 != (code *)&LAB_144b24e8a) goto LAB_142d0e8e3;
      bVar16 = *(byte *)(plVar12 + 0x30);
    }
    else {
      pcVar10 = *(code **)(*plVar12 + 0x420);
      if (pcVar10 != (code *)&LAB_14497e108) goto LAB_142d0e8e3;
      bVar16 = *(byte *)(plVar12 + 0x2a);
    }
    bVar16 = (bVar16 & 0x10) >> 4;
  }
  else {
LAB_142d0e8e3:
    bVar16 = (*pcVar10)(plVar12);
  }
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  cVar4 = FUN_140186b65(param_3,*param_4,&local_4f8);
  if (cVar4 != '\0') {
    local_468 = 0;
    uStack_460 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_458 = 0;
    local_500 = *(undefined8 *)(param_2 + 0x38);
    local_509 = ((uint)local_500 >> 0xc & 1) == 0;
    uVar2 = *param_5;
    uVar1 = *(uint *)(param_1 + 8);
    local_190[0] = 0x100;
    local_80 = 0;
    local_78 = 0x300000000;
    local_70 = 0x7fffffff;
    uStack_68 = 0;
    local_508 = param_4;
    cVar4 = FUN_1406917e6();
    if (cVar4 == '\0') {
      local_1ac = (uint)uVar2 & 0x3f;
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
      lVar8 = local_508[1];
      if (lVar8 == 0) {
        uStack_288 = 0x1100000000;
        (**(code **)(*local_508 + 0x48))(0,&local_310);
        lVar8 = FUN_14486d71a(&local_310);
      }
      bVar17 = (uVar6 >> 0x10 & 1) != 0;
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_310 = local_4f8;
      uStack_308 = uStack_4f0;
      local_300 = (undefined4)local_4e8;
      uStack_2fc = local_4e8._4_4_;
      uStack_2f8 = (undefined4)uStack_4e0;
      uStack_2f4 = uStack_4e0._4_4_;
      local_2f0 = (undefined4)local_4d8;
      uStack_2ec = local_4d8._4_4_;
      uStack_2e8 = (undefined4)uStack_4d0;
      uStack_2e4 = uStack_4d0._4_4_;
      local_2e0 = (undefined4)local_4c8;
      uStack_2dc = local_4c8._4_4_;
      uStack_2d8 = (undefined4)uStack_4c0;
      uStack_2d4 = uStack_4c0._4_4_;
      local_2c0 = (undefined4)local_4b8;
      uStack_2bc = local_4b8._4_4_;
      uStack_2b8 = (undefined4)uStack_4b0;
      uStack_2b4 = uStack_4b0._4_4_;
      FUN_144765e6c(&local_238,lVar8);
      bVar3 = (uVar6 >> 0x11 & 1) == 0;
      puVar11 = &DAT_14c9c0e10;
      if (bVar17 && (bVar3 && bVar16 == 0)) {
        puVar11 = &DAT_14c9c0e28;
      }
      puVar14 = &DAT_14c9c0d68;
      if (bVar17 && (bVar3 && bVar16 == 0)) {
        puVar14 = &DAT_14c9c0df8;
      }
      bVar3 = (uVar6 >> 0x11 & 1) == 0;
      if (!bVar3 || bVar16 != 0) {
        puVar11 = &DAT_14c9c0e40;
      }
      puVar9 = &DAT_14c9c0db0;
      if (bVar3 && bVar16 == 0) {
        puVar9 = puVar14;
      }
      if (bVar15 != 0) {
        puVar9 = puVar11;
      }
      uStack_1d0 = *puVar9;
      local_1d8 = *(undefined8 *)(param_1 + 0x40);
      local_1c8 = *(undefined8 *)(param_1 + 0x48);
      uVar6 = (**(code **)(*param_3 + 0x490))(param_3);
      plVar12 = local_508;
      if (uVar6 < 4) {
        uVar5 = (undefined1)(0x5010400 >> ((byte)(uVar6 << 3) & 0x1f));
      }
      else {
        uVar5 = 0;
        if ((uVar6 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar5 = (undefined1)(0xa060900000000 >> ((byte)(uVar6 << 3) & 0x3f));
        }
      }
      local_1af = CONCAT11(uVar5,(undefined1)local_1af);
      cVar4 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar4 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1af = CONCAT11(local_1af._1_1_,uVar5);
      FUN_144a1fecc(&local_238,&local_310);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
        local_1a8 = local_240;
        FUN_14573402d(local_3b0);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 - 1U < 2)) {
          lVar8 = *plVar12;
          local_450[0] = local_320;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_528 = &local_48c;
          local_48c = local_48c & 0xffff0000;
          local_520 = local_49a;
          FUN_14573482a(&DAT_14cafccf8,&local_498,
                        (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] &
                        0x7fffffff,local_450);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_498 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_498 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar1,lVar8);
          }
        }
        FUN_1457340f6(local_450,&local_238);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar8 = *plVar12;
          local_498 = local_3c0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_528 = (uint *)local_49a;
          local_49a = (undefined1  [2])0x0;
          local_520 = &local_48d;
          FUN_14573482a(&DAT_14cafd9c8,&local_48c,
                        (int)((ulonglong)local_498 >> 0x20) * 0x17 + (int)local_498 & 0x7fffffff,
                        &local_498);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_48c * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_48c * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar1,lVar8);
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
      uStack_2b4 = 1;
      local_2b0 = 10;
      local_2a8 = 9;
      local_2a0 = local_488;
      uStack_298 = uStack_480;
      local_290 = local_478;
      uStack_288 = uStack_470;
      local_280 = local_468;
      uStack_278 = uStack_460;
      local_270 = local_458;
      local_250 = 1;
      local_268 = 0xb;
      local_260 = local_500;
      local_258 = 1;
      local_257 = local_509;
      local_256 = 0;
      local_254 = 2;
      local_24a = 0;
      local_24e = 0;
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
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_310 = local_4f8;
      uStack_308 = uStack_4f0;
      local_300 = (undefined4)local_4e8;
      uStack_2fc = local_4e8._4_4_;
      uStack_2f8 = (undefined4)uStack_4e0;
      uStack_2f4 = uStack_4e0._4_4_;
      local_2f0 = (undefined4)local_4d8;
      uStack_2ec = local_4d8._4_4_;
      uStack_2e8 = (undefined4)uStack_4d0;
      uStack_2e4 = uStack_4d0._4_4_;
      local_2e0 = (undefined4)local_4c8;
      uStack_2dc = local_4c8._4_4_;
      uStack_2d8 = (undefined4)uStack_4c0;
      uStack_2d4 = uStack_4c0._4_4_;
      local_2c0 = (undefined4)local_4b8;
      uStack_2bc = local_4b8._4_4_;
      uStack_2b8 = (undefined4)uStack_4b0;
      uStack_2b4 = uStack_4b0._4_4_;
      FUN_145734aa6(&local_310,&local_238);
      FUN_1457347b6(&local_b0,&local_238);
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & 0x80000000;
      plVar12 = local_508;
    }
    local_190[0] = 0x100;
    local_70 = uVar1 & 0x7fffffff | local_70;
    uStack_68 = *plVar12;
    if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
       (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
      bVar15 = (**(code **)(*param_3 + 0x400))(param_3);
      local_70 = local_70 & 0x7fffffff | (uint)bVar15 << 0x1f;
      FUN_1406918b2();
    }
    iVar7 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar7 + 1U) {
      FUN_14069191a(param_6,iVar7);
    }
    lVar8 = *param_6;
    _Dst = (void *)(lVar8 + (longlong)iVar7 * 0x130);
    memcpy(_Dst,local_190,0xe0);
    *(undefined8 *)(lVar8 + 0x110 + (longlong)iVar7 * 0x130) = 0;
    if (local_80 == 0) {
      *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
      *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
      *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
      *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
      *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
      *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
    }
    *(longlong *)((longlong)_Dst + 0x110) = local_80;
    local_80 = 0;
    *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
    *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
    local_78 = 0x300000000;
    *(uint *)((longlong)_Dst + 0x120) = local_70;
    *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
    *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
    *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  }
LAB_142d0e6fd:
  if ((local_60 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d0e975 FUN_142d0e975 body=6395 status=ok
// SIG undefined FUN_142d0e975(void)

void FUN_142d0e975(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = (ulonglong)param_3 * 0x40;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[7];
  puVar2 = (undefined8 *)(param_1 + 0x30 + lVar11);
  *puVar2 = param_2[6];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x20 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x10 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  *(undefined8 *)(param_1 + lVar11) = uVar3;
  ((undefined8 *)(param_1 + lVar11))[1] = uVar4;
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar8 = param_2[0xd];
  uVar9 = param_2[0xf];
  puVar2 = (undefined8 *)(param_1 + 0xb0 + lVar11);
  *puVar2 = param_2[0xe];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0xa0 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x90 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x80 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x10];
  uVar4 = param_2[0x11];
  uVar5 = param_2[0x12];
  uVar6 = param_2[0x13];
  uVar7 = param_2[0x14];
  uVar8 = param_2[0x15];
  uVar9 = param_2[0x17];
  puVar2 = (undefined8 *)(param_1 + 0x130 + lVar11);
  *puVar2 = param_2[0x16];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x120 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x110 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x100 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x18];
  uVar4 = param_2[0x19];
  uVar5 = param_2[0x1a];
  uVar6 = param_2[0x1b];
  uVar7 = param_2[0x1c];
  uVar8 = param_2[0x1d];
  uVar9 = param_2[0x1f];
  puVar2 = (undefined8 *)(param_1 + 0x1b0 + lVar11);
  *puVar2 = param_2[0x1e];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x1a0 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 400 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x180 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x20];
  uVar4 = param_2[0x21];
  uVar5 = param_2[0x22];
  uVar6 = param_2[0x23];
  uVar7 = param_2[0x24];
  uVar8 = param_2[0x25];
  uVar9 = param_2[0x27];
  puVar2 = (undefined8 *)(param_1 + 0x230 + lVar11);
  *puVar2 = param_2[0x26];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x220 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x210 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x200 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x28];
  uVar4 = param_2[0x29];
  uVar5 = param_2[0x2a];
  uVar6 = param_2[0x2b];
  uVar7 = param_2[0x2d];
  uVar8 = param_2[0x2e];
  uVar9 = param_2[0x2f];
  puVar2 = (undefined8 *)(param_1 + 0x2a0 + lVar11);
  *puVar2 = param_2[0x2c];
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x290 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x280 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2 = (undefined8 *)(param_1 + 0x2b0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x31];
  uVar4 = param_2[0x32];
  uVar5 = param_2[0x33];
  uVar6 = param_2[0x34];
  uVar7 = param_2[0x35];
  uVar8 = param_2[0x36];
  uVar9 = param_2[0x37];
  puVar2 = (undefined8 *)(param_1 + 0x300 + lVar11);
  *puVar2 = param_2[0x30];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x310 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 800 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x330 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x39];
  uVar4 = param_2[0x3a];
  uVar5 = param_2[0x3b];
  uVar6 = param_2[0x3c];
  uVar7 = param_2[0x3d];
  uVar8 = param_2[0x3e];
  uVar9 = param_2[0x3f];
  puVar2 = (undefined8 *)(param_1 + 0x380 + lVar11);
  *puVar2 = param_2[0x38];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x390 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x3a0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x3b0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x40];
  uVar4 = param_2[0x41];
  uVar5 = param_2[0x42];
  uVar6 = param_2[0x43];
  uVar7 = param_2[0x44];
  uVar8 = param_2[0x45];
  uVar9 = param_2[0x47];
  puVar2 = (undefined8 *)(param_1 + 0x430 + lVar11);
  *puVar2 = param_2[0x46];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x420 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x410 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x400 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x49];
  uVar4 = param_2[0x4a];
  uVar5 = param_2[0x4b];
  uVar6 = param_2[0x4c];
  uVar7 = param_2[0x4d];
  uVar8 = param_2[0x4e];
  uVar9 = param_2[0x4f];
  puVar2 = (undefined8 *)(param_1 + 0x480 + lVar11);
  *puVar2 = param_2[0x48];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x490 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x4a0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x4b0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x51];
  uVar4 = param_2[0x52];
  uVar5 = param_2[0x53];
  uVar6 = param_2[0x54];
  uVar7 = param_2[0x55];
  uVar8 = param_2[0x56];
  uVar9 = param_2[0x57];
  puVar2 = (undefined8 *)(param_1 + 0x500 + lVar11);
  *puVar2 = param_2[0x50];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x510 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x520 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x530 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x58];
  uVar4 = param_2[0x59];
  uVar5 = param_2[0x5a];
  uVar6 = param_2[0x5b];
  uVar7 = param_2[0x5c];
  uVar8 = param_2[0x5d];
  uVar9 = param_2[0x5f];
  puVar2 = (undefined8 *)(param_1 + 0x5b0 + lVar11);
  *puVar2 = param_2[0x5e];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x5a0 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x590 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x580 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x61];
  uVar4 = param_2[0x62];
  uVar5 = param_2[99];
  uVar6 = param_2[100];
  uVar7 = param_2[0x65];
  uVar8 = param_2[0x66];
  uVar9 = param_2[0x67];
  puVar2 = (undefined8 *)(param_1 + 0x600 + lVar11);
  *puVar2 = param_2[0x60];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x610 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x620 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x630 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x69];
  uVar4 = param_2[0x6a];
  uVar5 = param_2[0x6b];
  uVar6 = param_2[0x6c];
  uVar7 = param_2[0x6d];
  uVar8 = param_2[0x6e];
  uVar9 = param_2[0x6f];
  puVar2 = (undefined8 *)(param_1 + 0x680 + lVar11);
  *puVar2 = param_2[0x68];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x690 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x6b0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x6a0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  uVar3 = param_2[0x71];
  uVar4 = param_2[0x72];
  uVar5 = param_2[0x73];
  uVar6 = param_2[0x74];
  uVar7 = param_2[0x75];
  uVar8 = param_2[0x76];
  uVar9 = param_2[0x77];
  puVar2 = (undefined8 *)(param_1 + 0x700 + lVar11);
  *puVar2 = param_2[0x70];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x710 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x720 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x730 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x79];
  uVar4 = param_2[0x7a];
  uVar5 = param_2[0x7b];
  uVar6 = param_2[0x7c];
  uVar7 = param_2[0x7d];
  uVar8 = param_2[0x7e];
  uVar9 = param_2[0x7f];
  puVar2 = (undefined8 *)(param_1 + 0x780 + lVar11);
  *puVar2 = param_2[0x78];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x790 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x7a0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x7b0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x81];
  uVar4 = param_2[0x82];
  uVar5 = param_2[0x83];
  uVar6 = param_2[0x84];
  uVar7 = param_2[0x85];
  uVar8 = param_2[0x86];
  uVar9 = param_2[0x87];
  puVar2 = (undefined8 *)(param_1 + 0x800 + lVar11);
  *puVar2 = param_2[0x80];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x810 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x820 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x830 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x88];
  uVar4 = param_2[0x89];
  uVar5 = param_2[0x8a];
  uVar6 = param_2[0x8b];
  uVar7 = param_2[0x8c];
  uVar8 = param_2[0x8d];
  uVar9 = param_2[0x8f];
  puVar2 = (undefined8 *)(param_1 + 0x8b0 + lVar11);
  *puVar2 = param_2[0x8e];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x8a0 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x890 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x880 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x91];
  uVar4 = param_2[0x92];
  uVar5 = param_2[0x93];
  uVar6 = param_2[0x94];
  uVar7 = param_2[0x95];
  uVar8 = param_2[0x96];
  uVar9 = param_2[0x97];
  puVar2 = (undefined8 *)(param_1 + 0x900 + lVar11);
  *puVar2 = param_2[0x90];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x910 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x920 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x930 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x99];
  uVar4 = param_2[0x9a];
  uVar5 = param_2[0x9b];
  uVar6 = param_2[0x9c];
  uVar7 = param_2[0x9d];
  uVar8 = param_2[0x9e];
  uVar9 = param_2[0x9f];
  puVar2 = (undefined8 *)(param_1 + 0x980 + lVar11);
  *puVar2 = param_2[0x98];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x990 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x9b0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x9a0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  uVar3 = param_2[0xa1];
  uVar4 = param_2[0xa2];
  uVar5 = param_2[0xa3];
  uVar6 = param_2[0xa4];
  uVar7 = param_2[0xa5];
  uVar8 = param_2[0xa6];
  uVar9 = param_2[0xa7];
  puVar2 = (undefined8 *)(param_1 + 0xa00 + lVar11);
  *puVar2 = param_2[0xa0];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0xa10 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0xa20 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0xa30 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0xa9];
  uVar4 = param_2[0xaa];
  uVar5 = param_2[0xab];
  uVar6 = param_2[0xac];
  uVar7 = param_2[0xad];
  uVar8 = param_2[0xae];
  uVar9 = param_2[0xaf];
  puVar2 = (undefined8 *)(param_1 + 0xa80 + lVar11);
  *puVar2 = param_2[0xa8];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0xa90 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0xaa0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0xab0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0xb1];
  uVar4 = param_2[0xb2];
  uVar5 = param_2[0xb3];
  uVar6 = param_2[0xb4];
  uVar7 = param_2[0xb5];
  uVar8 = param_2[0xb6];
  uVar9 = param_2[0xb7];
  puVar2 = (undefined8 *)(param_1 + 0xb00 + lVar11);
  *puVar2 = param_2[0xb0];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0xb10 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0xb20 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0xb30 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0xb8];
  uVar4 = param_2[0xb9];
  uVar5 = param_2[0xba];
  uVar6 = param_2[0xbb];
  uVar7 = param_2[0xbc];
  uVar8 = param_2[0xbd];
  uVar9 = param_2[0xbf];
  puVar2 = (undefined8 *)(param_1 + 0xbb0 + lVar11);
  *puVar2 = param_2[0xbe];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0xba0 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0xb90 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0xb80 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0xc1];
  uVar4 = param_2[0xc2];
  uVar5 = param_2[0xc3];
  uVar6 = param_2[0xc4];
  uVar7 = param_2[0xc5];
  uVar8 = param_2[0xc6];
  uVar9 = param_2[199];
  puVar2 = (undefined8 *)(param_1 + 0xc00 + lVar11);
  *puVar2 = param_2[0xc0];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0xc10 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0xc30 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0xc20 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc88) = *(undefined4 *)(param_2 + 0xc9);
    *(undefined8 *)(param_1 + 0xc80) = param_2[200];
    *(undefined4 *)(param_1 + 0xc98) = *(undefined4 *)(param_2 + 0xcb);
    *(undefined8 *)(param_1 + 0xc90) = param_2[0xca];
    *(undefined8 *)(param_1 + 0xca0) = param_2[0xcc];
    *(undefined4 *)(param_1 + 0xca8) = *(undefined4 *)(param_2 + 0xcd);
    *(undefined8 *)(param_1 + 0xcb0) = param_2[0xce];
    *(undefined4 *)(param_1 + 0xcb8) = *(undefined4 *)(param_2 + 0xcf);
  }
  lVar10 = (ulonglong)param_3 * 0x10;
  *(undefined4 *)(param_1 + 0xcc8 + lVar10) = *(undefined4 *)(param_2 + 0xd1);
  *(undefined8 *)(param_1 + 0xcc0 + lVar10) = param_2[0xd0];
  *(undefined4 *)(param_1 + 0xce8 + lVar10) = *(undefined4 *)(param_2 + 0xd3);
  *(undefined8 *)(param_1 + 0xce0 + lVar10) = param_2[0xd2];
  uVar3 = param_2[0xd5];
  puVar2 = (undefined8 *)(param_1 + 0xd00 + lVar10);
  *puVar2 = param_2[0xd4];
  puVar2[1] = uVar3;
  uVar3 = param_2[0xd7];
  puVar2 = (undefined8 *)(param_1 + 0xd20 + lVar10);
  *puVar2 = param_2[0xd6];
  puVar2[1] = uVar3;
  *(undefined4 *)(param_1 + 0xd48 + lVar10) = *(undefined4 *)(param_2 + 0xd9);
  *(undefined8 *)(param_1 + 0xd40 + lVar10) = param_2[0xd8];
  *(undefined4 *)(param_1 + 0xd68 + lVar10) = *(undefined4 *)(param_2 + 0xdb);
  *(undefined8 *)(param_1 + 0xd60 + lVar10) = param_2[0xda];
  *(undefined4 *)(param_1 + 0xd88 + lVar10) = *(undefined4 *)(param_2 + 0xdd);
  *(undefined8 *)(param_1 + 0xd80 + lVar10) = param_2[0xdc];
  *(undefined4 *)(param_1 + 0xda8 + lVar10) = *(undefined4 *)(param_2 + 0xdf);
  *(undefined8 *)(param_1 + 0xda0 + lVar10) = param_2[0xde];
  *(undefined4 *)(param_1 + 0xdc8 + lVar10) = *(undefined4 *)(param_2 + 0xe1);
  *(undefined8 *)(param_1 + 0xdc0 + lVar10) = param_2[0xe0];
  *(undefined4 *)(param_1 + 0xde8 + lVar10) = *(undefined4 *)(param_2 + 0xe3);
  *(undefined8 *)(param_1 + 0xde0 + lVar10) = param_2[0xe2];
  uVar3 = param_2[0xe4];
  uVar4 = param_2[0xe5];
  uVar5 = param_2[0xe6];
  uVar6 = param_2[0xe7];
  uVar7 = param_2[0xe8];
  uVar8 = param_2[0xe9];
  uVar9 = param_2[0xeb];
  puVar2 = (undefined8 *)(param_1 + 0xe30 + lVar11);
  *puVar2 = param_2[0xea];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0xe20 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0xe10 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0xe00 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0xec];
  uVar4 = param_2[0xed];
  uVar5 = param_2[0xee];
  uVar6 = param_2[0xef];
  uVar7 = param_2[0xf0];
  uVar8 = param_2[0xf1];
  uVar9 = param_2[0xf3];
  puVar2 = (undefined8 *)(param_1 + 0xeb0 + lVar11);
  *puVar2 = param_2[0xf2];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0xea0 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0xe90 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0xe80 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0xf5];
  uVar4 = param_2[0xf6];
  uVar5 = param_2[0xf7];
  uVar6 = param_2[0xf8];
  uVar7 = param_2[0xf9];
  uVar8 = param_2[0xfa];
  uVar9 = param_2[0xfb];
  puVar2 = (undefined8 *)(param_1 + 0xf00 + lVar11);
  *puVar2 = param_2[0xf4];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0xf10 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0xf20 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0xf30 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0xfd];
  uVar4 = param_2[0xfe];
  uVar5 = param_2[0xff];
  uVar6 = param_2[0x100];
  uVar7 = param_2[0x101];
  uVar8 = param_2[0x102];
  uVar9 = param_2[0x103];
  puVar2 = (undefined8 *)(param_1 + 0xf80 + lVar11);
  *puVar2 = param_2[0xfc];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0xf90 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 4000 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0xfb0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x104];
  uVar4 = param_2[0x105];
  uVar5 = param_2[0x106];
  uVar6 = param_2[0x107];
  uVar7 = param_2[0x108];
  uVar8 = param_2[0x109];
  uVar9 = param_2[0x10b];
  puVar2 = (undefined8 *)(param_1 + 0x1030 + lVar11);
  *puVar2 = param_2[0x10a];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x1020 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x1010 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x1000 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x10d];
  uVar4 = param_2[0x10e];
  uVar5 = param_2[0x10f];
  uVar6 = param_2[0x110];
  uVar7 = param_2[0x111];
  uVar8 = param_2[0x112];
  uVar9 = param_2[0x113];
  puVar2 = (undefined8 *)(param_1 + 0x1080 + lVar11);
  *puVar2 = param_2[0x10c];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x1090 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x10a0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x10b0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x115];
  uVar4 = param_2[0x116];
  uVar5 = param_2[0x117];
  uVar6 = param_2[0x118];
  uVar7 = param_2[0x119];
  uVar8 = param_2[0x11a];
  uVar9 = param_2[0x11b];
  *(undefined8 *)(&DAT_00001100 + lVar11 + param_1) = param_2[0x114];
  *(undefined8 *)((longlong)(&DAT_00001100 + lVar11 + param_1) + 8) = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x1110 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x1130 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x1120 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  *(undefined4 *)(param_1 + 0x1188 + lVar10) = *(undefined4 *)(param_2 + 0x11d);
  *(undefined8 *)(param_1 + 0x1180 + lVar10) = param_2[0x11c];
  *(undefined8 *)(param_1 + 0x11a0 + lVar10) = param_2[0x11e];
  *(undefined4 *)(param_1 + 0x11a8 + lVar10) = *(undefined4 *)(param_2 + 0x11f);
  *(undefined8 *)(param_1 + 0x11c0 + lVar10) = param_2[0x120];
  *(undefined4 *)(param_1 + 0x11c8 + lVar10) = *(undefined4 *)(param_2 + 0x121);
  *(undefined8 *)(param_1 + 0x11e0 + lVar10) = param_2[0x122];
  *(undefined4 *)(param_1 + 0x11e8 + lVar10) = *(undefined4 *)(param_2 + 0x123);
  *(undefined8 *)(param_1 + 0x1200 + lVar10) = param_2[0x124];
  *(undefined4 *)(param_1 + 0x1208 + lVar10) = *(undefined4 *)(param_2 + 0x125);
  *(undefined8 *)(param_1 + 0x1220 + lVar10) = param_2[0x126];
  *(undefined4 *)(param_1 + 0x1228 + lVar10) = *(undefined4 *)(param_2 + 0x127);
  *(undefined8 *)(param_1 + 0x1240 + lVar10) = param_2[0x128];
  *(undefined4 *)(param_1 + 0x1248 + lVar10) = *(undefined4 *)(param_2 + 0x129);
  *(undefined4 *)(param_1 + 0x1268 + lVar10) = *(undefined4 *)(param_2 + 299);
  *(undefined8 *)(param_1 + 0x1260 + lVar10) = param_2[0x12a];
  *(undefined8 *)(param_1 + 0x1280 + lVar10) = param_2[300];
  *(undefined4 *)(param_1 + 0x1288 + lVar10) = *(undefined4 *)(param_2 + 0x12d);
  *(undefined8 *)(param_1 + 0x12a0 + lVar10) = param_2[0x12e];
  *(undefined4 *)(param_1 + 0x12a8 + lVar10) = *(undefined4 *)(param_2 + 0x12f);
  *(undefined8 *)(param_1 + 0x12c0 + lVar10) = param_2[0x130];
  *(undefined4 *)(param_1 + 0x12c8 + lVar10) = *(undefined4 *)(param_2 + 0x131);
  *(undefined4 *)(param_1 + 0x12e8 + lVar10) = *(undefined4 *)(param_2 + 0x133);
  *(undefined8 *)(param_1 + 0x12e0 + lVar10) = param_2[0x132];
  *(undefined8 *)(param_1 + 0x1300 + lVar10) = param_2[0x134];
  *(undefined4 *)(param_1 + 0x1308 + lVar10) = *(undefined4 *)(param_2 + 0x135);
  *(undefined8 *)(param_1 + 0x1320 + lVar10) = param_2[0x136];
  *(undefined4 *)(param_1 + 0x1328 + lVar10) = *(undefined4 *)(param_2 + 0x137);
  uVar3 = param_2[0x138];
  uVar4 = param_2[0x139];
  uVar5 = param_2[0x13a];
  uVar6 = param_2[0x13b];
  uVar7 = param_2[0x13c];
  uVar8 = param_2[0x13d];
  uVar9 = param_2[0x13f];
  puVar2 = (undefined8 *)(param_1 + 0x1370 + lVar11);
  *puVar2 = param_2[0x13e];
  puVar2[1] = uVar9;
  puVar2 = (undefined8 *)(param_1 + 0x1360 + lVar11);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(param_1 + 0x1350 + lVar11);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (undefined8 *)(param_1 + 0x1340 + lVar11);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  uVar3 = param_2[0x141];
  uVar4 = param_2[0x142];
  uVar5 = param_2[0x143];
  uVar6 = param_2[0x144];
  uVar7 = param_2[0x145];
  uVar8 = param_2[0x146];
  uVar9 = param_2[0x147];
  puVar2 = (undefined8 *)(param_1 + 0x13c0 + lVar11);
  *puVar2 = param_2[0x140];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x13d0 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x13e0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x13f0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x149];
  uVar4 = param_2[0x14a];
  uVar5 = param_2[0x14b];
  uVar6 = param_2[0x14c];
  uVar7 = param_2[0x14d];
  uVar8 = param_2[0x14e];
  uVar9 = param_2[0x14f];
  puVar2 = (undefined8 *)(param_1 + 0x1440 + lVar11);
  *puVar2 = param_2[0x148];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x1450 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x1460 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x1470 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x151];
  uVar4 = param_2[0x152];
  uVar5 = param_2[0x153];
  uVar6 = param_2[0x154];
  uVar7 = param_2[0x155];
  uVar8 = param_2[0x156];
  uVar9 = param_2[0x157];
  puVar2 = (undefined8 *)(param_1 + 0x14c0 + lVar11);
  *puVar2 = param_2[0x150];
  puVar2[1] = uVar3;
  puVar2 = (undefined8 *)(param_1 + 0x14d0 + lVar11);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(param_1 + 0x14e0 + lVar11);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2 = (undefined8 *)(param_1 + 0x14f0 + lVar11);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  uVar3 = param_2[0x159];
  puVar2 = (undefined8 *)(param_1 + 0x1540 + lVar10);
  *puVar2 = param_2[0x158];
  puVar2[1] = uVar3;
  uVar3 = param_2[0x15b];
  puVar2 = (undefined8 *)(param_1 + 0x1560 + lVar10);
  *puVar2 = param_2[0x15a];
  puVar2[1] = uVar3;
  *(undefined8 *)(param_1 + 0x1580 + lVar10) = param_2[0x15c];
  *(undefined8 *)(param_1 + 0x15a0 + lVar10) = param_2[0x15d];
  uVar3 = param_2[0x15f];
  puVar2 = (undefined8 *)(param_1 + 0x15c0 + lVar10);
  *puVar2 = param_2[0x15e];
  puVar2[1] = uVar3;
  if (param_3 == 0) {
    uVar3 = param_2[0x161];
    *(undefined8 *)(param_1 + 0x15e0) = param_2[0x160];
    *(undefined8 *)(param_1 + 0x15e8) = uVar3;
    uVar3 = param_2[0x163];
    *(undefined8 *)(param_1 + 0x15f0) = param_2[0x162];
    *(undefined8 *)(param_1 + 0x15f8) = uVar3;
    uVar3 = param_2[0x165];
    *(undefined8 *)(param_1 + 0x1600) = param_2[0x164];
    *(undefined8 *)(param_1 + 0x1608) = uVar3;
    uVar3 = param_2[0x167];
    *(undefined8 *)(param_1 + 0x1610) = param_2[0x166];
    *(undefined8 *)(param_1 + 0x1618) = uVar3;
  }
  uVar3 = param_2[0x169];
  puVar2 = (undefined8 *)(param_1 + 0x1620 + lVar10);
  *puVar2 = param_2[0x168];
  puVar2[1] = uVar3;
  uVar3 = param_2[0x16b];
  puVar2 = (undefined8 *)(param_1 + 0x1640 + lVar10);
  *puVar2 = param_2[0x16a];
  puVar2[1] = uVar3;
  *(undefined8 *)(param_1 + 0x1660 + lVar10) = param_2[0x16c];
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x1680) = param_2[0x16d];
    *(undefined4 *)(param_1 + 0x1688) = *(undefined4 *)(param_2 + 0x16e);
    *(undefined4 *)(param_1 + 0x1690) = *(undefined4 *)((longlong)param_2 + 0xb74);
    *(undefined4 *)(param_1 + 0x16b0) = *(undefined4 *)(param_2 + 0x16f);
    *(undefined4 *)(param_1 + 0x16b4) = *(undefined4 *)((longlong)param_2 + 0xb7c);
    uVar3 = param_2[0x171];
    *(undefined8 *)(param_1 + 0x16c0) = param_2[0x170];
    *(undefined8 *)(param_1 + 0x16c8) = uVar3;
    uVar3 = param_2[0x173];
    *(undefined8 *)(param_1 + 0x16d0) = param_2[0x172];
    *(undefined8 *)(param_1 + 0x16d8) = uVar3;
    uVar3 = param_2[0x175];
    *(undefined8 *)(param_1 + 0x16e0) = param_2[0x174];
    *(undefined8 *)(param_1 + 0x16e8) = uVar3;
    *(undefined8 *)(param_1 + 0x16f0) = param_2[0x176];
    *(undefined8 *)(param_1 + 0x16f8) = param_2[0x177];
    *(undefined8 *)(param_1 + 0x1700) = param_2[0x178];
    *(undefined4 *)(param_1 + 0x1708) = *(undefined4 *)(param_2 + 0x179);
    *(undefined4 *)(param_1 + 0x1718) = *(undefined4 *)(param_2 + 0x17b);
    *(undefined8 *)(param_1 + 0x1710) = param_2[0x17a];
    *(undefined4 *)(param_1 + 0x1730) = *(undefined4 *)((longlong)param_2 + 0xbdc);
    *(undefined4 *)(param_1 + 0x1740) = *(undefined4 *)(param_2 + 0x17c);
    *(undefined4 *)(param_1 + 0x1760) = *(undefined4 *)((longlong)param_2 + 0xbe4);
    *(undefined8 *)(param_1 + 0x1780) = param_2[0x17d];
    *(undefined8 *)(param_1 + 0x1788) = param_2[0x17e];
    *(undefined4 *)(param_1 + 0x1790) = *(undefined4 *)(param_2 + 0x17f);
    *(undefined4 *)(param_1 + 0x1794) = *(undefined4 *)((longlong)param_2 + 0xbfc);
    *(undefined4 *)(param_1 + 0x1798) = *(undefined4 *)(param_2 + 0x180);
    *(undefined4 *)(param_1 + 0x179c) = *(undefined4 *)((longlong)param_2 + 0xc04);
    *(undefined4 *)(param_1 + 0x17a0) = *(undefined4 *)(param_2 + 0x181);
    *(undefined4 *)(param_1 + 0x17a4) = *(undefined4 *)((longlong)param_2 + 0xc0c);
    *(undefined4 *)(param_1 + 0x17a8) = *(undefined4 *)(param_2 + 0x182);
    *(undefined4 *)(param_1 + 0x17ac) = *(undefined4 *)((longlong)param_2 + 0xc14);
    *(undefined4 *)(param_1 + 0x17b0) = *(undefined4 *)(param_2 + 0x183);
    *(undefined4 *)(param_1 + 0x17b4) = *(undefined4 *)((longlong)param_2 + 0xc1c);
    *(undefined4 *)(param_1 + 0x17b8) = *(undefined4 *)(param_2 + 0x184);
    *(undefined4 *)(param_1 + 0x17bc) = *(undefined4 *)((longlong)param_2 + 0xc24);
    *(undefined4 *)(param_1 + 0x17c0) = *(undefined4 *)(param_2 + 0x185);
    uVar3 = param_2[0x187];
    *(undefined8 *)(param_1 + 0x17d0) = param_2[0x186];
    *(undefined8 *)(param_1 + 0x17d8) = uVar3;
    *(undefined4 *)(param_1 + 0x17e8) = *(undefined4 *)(param_2 + 0x189);
    *(undefined8 *)(param_1 + 0x17e0) = param_2[0x188];
    uVar3 = param_2[0x18b];
    *(undefined8 *)(param_1 + 0x17f0) = param_2[0x18a];
    *(undefined8 *)(param_1 + 0x17f8) = uVar3;
    uVar3 = param_2[0x18d];
    *(undefined8 *)(param_1 + 0x1800) = param_2[0x18c];
    *(undefined8 *)(param_1 + 0x1808) = uVar3;
    uVar3 = param_2[399];
    *(undefined8 *)(param_1 + 0x1810) = param_2[0x18e];
    *(undefined8 *)(param_1 + 0x1818) = uVar3;
    uVar3 = param_2[0x191];
    *(undefined8 *)(param_1 + 0x1820) = param_2[400];
    *(undefined8 *)(param_1 + 0x1828) = uVar3;
    uVar3 = param_2[0x193];
    *(undefined8 *)(param_1 + 0x1830) = param_2[0x192];
    *(undefined8 *)(param_1 + 0x1838) = uVar3;
    uVar3 = param_2[0x195];
    *(undefined8 *)(param_1 + 0x1840) = param_2[0x194];
    *(undefined8 *)(param_1 + 0x1848) = uVar3;
    *(undefined4 *)(param_1 + 0x1850) = *(undefined4 *)(param_2 + 0x196);
    *(undefined4 *)(param_1 + 0x1854) = *(undefined4 *)((longlong)param_2 + 0xcb4);
    *(undefined4 *)(param_1 + 0x1858) = *(undefined4 *)(param_2 + 0x197);
    *(undefined4 *)(param_1 + 0x185c) = *(undefined4 *)((longlong)param_2 + 0xcbc);
    *(undefined4 *)(&DAT_00001860 + param_1) = *(undefined4 *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x1864) = *(undefined4 *)((longlong)param_2 + 0xcc4);
    *(undefined4 *)(&DAT_00001868 + param_1) = *(undefined4 *)(param_2 + 0x199);
    *(undefined4 *)(param_1 + 0x186c) = *(undefined4 *)((longlong)param_2 + 0xccc);
    *(undefined4 *)(param_1 + 0x1870) = *(undefined4 *)(param_2 + 0x19a);
    *(undefined4 *)(param_1 + 0x1874) = *(undefined4 *)((longlong)param_2 + 0xcd4);
    *(undefined4 *)(param_1 + 0x1878) = *(undefined4 *)(param_2 + 0x19b);
    *(undefined4 *)(param_1 + 0x187c) = *(undefined4 *)((longlong)param_2 + 0xcdc);
    *(undefined4 *)(param_1 + 0x1888) = *(undefined4 *)(param_2 + 0x19d);
    *(undefined8 *)(param_1 + 0x1880) = param_2[0x19c];
    *(undefined4 *)(param_1 + 0x1898) = *(undefined4 *)(param_2 + 0x19f);
    *(undefined8 *)(param_1 + 0x1890) = param_2[0x19e];
    *(undefined4 *)(param_1 + 0x18a8) = *(undefined4 *)(param_2 + 0x1a1);
    *(undefined8 *)(param_1 + 0x18a0) = param_2[0x1a0];
    uVar3 = param_2[0x1a3];
    *(undefined8 *)(param_1 + 0x18b0) = param_2[0x1a2];
    *(undefined8 *)(param_1 + 0x18b8) = uVar3;
    uVar3 = param_2[0x1a5];
    *(undefined8 *)(&DAT_000018c0 + param_1) = param_2[0x1a4];
    *(undefined8 *)(param_1 + 0x18c8) = uVar3;
    uVar3 = param_2[0x1a7];
    *(undefined8 *)(param_1 + 0x18d0) = param_2[0x1a6];
    *(undefined8 *)(param_1 + 0x18d8) = uVar3;
    uVar3 = param_2[0x1a9];
    *(undefined8 *)(param_1 + 0x18e0) = param_2[0x1a8];
    *(undefined8 *)(param_1 + 0x18e8) = uVar3;
    uVar3 = param_2[0x1ab];
    *(undefined8 *)(param_1 + 0x18f0) = param_2[0x1aa];
    *(undefined8 *)(&DAT_000018f8 + param_1) = uVar3;
    uVar3 = param_2[0x1ad];
    *(undefined8 *)(param_1 + 0x1900) = param_2[0x1ac];
    *(undefined8 *)(param_1 + 0x1908) = uVar3;
    uVar3 = param_2[0x1af];
    *(undefined8 *)(param_1 + 0x1910) = param_2[0x1ae];
    *(undefined8 *)(param_1 + 0x1918) = uVar3;
    uVar3 = param_2[0x1b1];
    *(undefined8 *)(param_1 + 0x1920) = param_2[0x1b0];
    *(undefined8 *)(param_1 + 0x1928) = uVar3;
    uVar3 = param_2[0x1b3];
    *(undefined8 *)(param_1 + 0x1930) = param_2[0x1b2];
    *(undefined8 *)(param_1 + 0x1938) = uVar3;
    uVar3 = param_2[0x1b5];
    *(undefined8 *)(param_1 + 0x1940) = param_2[0x1b4];
    *(undefined8 *)(param_1 + 0x1948) = uVar3;
    uVar3 = param_2[0x1b7];
    *(undefined8 *)(param_1 + 0x1950) = param_2[0x1b6];
    *(undefined8 *)(param_1 + 0x1958) = uVar3;
    *(undefined8 *)(param_1 + 0x1960) = param_2[0x1b8];
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_2 + 0x1b9);
    uVar3 = param_2[0x1bb];
    *(undefined8 *)(param_1 + 0x1970) = param_2[0x1ba];
    *(undefined8 *)(param_1 + 0x1978) = uVar3;
    uVar3 = param_2[0x1bc];
    uVar4 = param_2[0x1bd];
    uVar5 = param_2[0x1bf];
    uVar6 = param_2[0x1c0];
    uVar7 = param_2[0x1c1];
    uVar8 = param_2[0x1c2];
    uVar9 = param_2[0x1c3];
    *(undefined8 *)(param_1 + 0x1990) = param_2[0x1be];
    *(undefined8 *)(param_1 + 0x1998) = uVar5;
    *(undefined8 *)(param_1 + 0x19a0) = uVar6;
    *(undefined8 *)(param_1 + 0x19a8) = uVar7;
    *(undefined8 *)(param_1 + 0x19b0) = uVar8;
    *(undefined8 *)(param_1 + 0x19b8) = uVar9;
    *(undefined8 *)(param_1 + 0x1980) = uVar3;
    *(undefined8 *)(param_1 + 0x1988) = uVar4;
    uVar3 = param_2[0x1c5];
    *(undefined8 *)(param_1 + 0x19c0) = param_2[0x1c4];
    *(undefined8 *)(param_1 + 0x19c8) = uVar3;
    *(undefined4 *)(param_1 + 0x19d0) = *(undefined4 *)(param_2 + 0x1c6);
    *(undefined4 *)(param_1 + 0x19d4) = *(undefined4 *)((longlong)param_2 + 0xe34);
    *(undefined4 *)(param_1 + 0x19d8) = *(undefined4 *)(param_2 + 0x1c7);
    *(undefined4 *)(param_1 + 0x19dc) = *(undefined4 *)((longlong)param_2 + 0xe3c);
    uVar3 = param_2[0x1c9];
    *(undefined8 *)(param_1 + 0x19e0) = param_2[0x1c8];
    *(undefined8 *)(param_1 + 0x19e8) = uVar3;
    *(undefined4 *)(param_1 + 0x19f0) = *(undefined4 *)(param_2 + 0x1ca);
    *(undefined4 *)(param_1 + 0x19f4) = *(undefined4 *)((longlong)param_2 + 0xe54);
    *(undefined4 *)(param_1 + 0x19f8) = *(undefined4 *)(param_2 + 0x1cb);
    *(undefined4 *)(param_1 + 0x19fc) = *(undefined4 *)((longlong)param_2 + 0xe5c);
    *(undefined4 *)(param_1 + 0x1a00) = *(undefined4 *)(param_2 + 0x1cc);
    *(undefined4 *)(param_1 + 0x1a04) = *(undefined4 *)((longlong)param_2 + 0xe64);
    *(undefined8 *)(param_1 + 0x1a10) = param_2[0x1ce];
    *(undefined4 *)(param_1 + 0x1a18) = *(undefined4 *)(param_2 + 0x1cf);
    *(undefined4 *)(param_1 + 0x1a1c) = *(undefined4 *)((longlong)param_2 + 0xe7c);
    *(undefined4 *)(param_1 + 0x1a20) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1a24) = *(undefined4 *)((longlong)param_2 + 0xe84);
    uVar3 = param_2[0x1d3];
    *(undefined8 *)(param_1 + 0x1a30) = param_2[0x1d2];
    *(undefined8 *)(param_1 + 0x1a38) = uVar3;
    *(undefined4 *)(param_1 + 0x1a40) = *(undefined4 *)(param_2 + 0x1d4);
    *(undefined4 *)(param_1 + 0x1a44) = *(undefined4 *)((longlong)param_2 + 0xea4);
    *(undefined4 *)(param_1 + 0x1a48) = *(undefined4 *)(param_2 + 0x1d5);
    *(undefined4 *)(param_1 + 0x1a4c) = *(undefined4 *)((longlong)param_2 + 0xeac);
    uVar3 = param_2[0x1d7];
    *(undefined8 *)(param_1 + 0x1a50) = param_2[0x1d6];
    *(undefined8 *)(param_1 + 0x1a58) = uVar3;
    *(undefined4 *)(param_1 + 0x1a60) = *(undefined4 *)(param_2 + 0x1d8);
    lVar11 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0xed0);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)(param_1 + 0x1a70 + lVar11);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x80);
    *(undefined4 *)(param_1 + 0x1af0) = *(undefined4 *)(param_2 + 0x1ea);
    *(undefined4 *)(param_1 + 0x1b00) = *(undefined4 *)((longlong)param_2 + 0xf54);
    *(undefined4 *)(param_1 + 0x1b20) = *(undefined4 *)(param_2 + 0x1eb);
    *(undefined4 *)(param_1 + 0x1b24) = *(undefined4 *)((longlong)param_2 + 0xf5c);
    *(undefined4 *)(param_1 + 0x1b28) = *(undefined4 *)(param_2 + 0x1ec);
    *(undefined4 *)(param_1 + 0x1b2c) = *(undefined4 *)((longlong)param_2 + 0xf64);
    *(undefined8 *)(param_1 + 0x1b30) = param_2[0x1ee];
    *(undefined4 *)(param_1 + 0x1b38) = *(undefined4 *)(param_2 + 0x1ef);
    *(undefined4 *)(param_1 + 0x1b40) = *(undefined4 *)((longlong)param_2 + 0xf7c);
    lVar11 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0xf80);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)(param_1 + 0x1b60 + lVar11);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x60);
    lVar11 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0xfe0);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)(param_1 + 0x1bc0 + lVar11);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x60);
    lVar11 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0x1040);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)(param_1 + 0x1c20 + lVar11);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x60);
    lVar11 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0x10a0);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)(param_1 + 0x1c80 + lVar11);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x60);
    *(undefined4 *)(param_1 + 0x1ce0) = *(undefined4 *)(param_2 + 0x220);
    *(undefined4 *)(param_1 + 0x1ce4) = *(undefined4 *)((longlong)param_2 + 0x1104);
    *(undefined4 *)(&DAT_00001ce8 + param_1) = *(undefined4 *)(param_2 + 0x221);
    *(undefined4 *)(param_1 + 0x1cf8) = *(undefined4 *)(param_2 + 0x223);
    *(undefined8 *)(param_1 + 0x1cf0) = param_2[0x222];
    *(undefined8 *)(param_1 + 0x1d00) = param_2[0x224];
    *(undefined4 *)(param_1 + 0x1d08) = *(undefined4 *)(param_2 + 0x225);
    *(undefined4 *)(param_1 + 0x1d0c) = *(undefined4 *)((longlong)param_2 + 0x112c);
    *(undefined4 *)(param_1 + 0x1d10) = *(undefined4 *)(param_2 + 0x226);
    *(undefined4 *)(param_1 + 0x1d14) = *(undefined4 *)((longlong)param_2 + 0x1134);
    *(undefined4 *)(param_1 + 0x1d18) = *(undefined4 *)(param_2 + 0x227);
    *(undefined4 *)(param_1 + 0x1d1c) = *(undefined4 *)((longlong)param_2 + 0x113c);
    *(undefined4 *)(param_1 + 0x1d20) = *(undefined4 *)(param_2 + 0x228);
    *(undefined4 *)(param_1 + 0x1d24) = *(undefined4 *)((longlong)param_2 + 0x1144);
    *(undefined4 *)(param_1 + 0x1d28) = *(undefined4 *)(param_2 + 0x229);
    *(undefined4 *)(param_1 + 0x1d2c) = *(undefined4 *)((longlong)param_2 + 0x114c);
    *(undefined4 *)(param_1 + 0x1d30) = *(undefined4 *)(param_2 + 0x22a);
    *(undefined8 *)(param_1 + 0x1d38) = param_2[0x22b];
    *(undefined4 *)(param_1 + 0x1d40) = *(undefined4 *)(param_2 + 0x22c);
    *(undefined4 *)(param_1 + 0x1d58) = *(undefined4 *)(param_2 + 0x22f);
    *(undefined8 *)(param_1 + 0x1d50) = param_2[0x22e];
    *(undefined8 *)(param_1 + 0x1d60) = param_2[0x230];
    *(undefined4 *)(param_1 + 0x1d68) = *(undefined4 *)(param_2 + 0x231);
    *(undefined8 *)(param_1 + 0x1d70) = param_2[0x232];
    *(undefined8 *)(param_1 + 0x1d78) = param_2[0x233];
    *(undefined8 *)(param_1 + 0x1d80) = param_2[0x234];
    *(undefined8 *)(param_1 + 0x1d88) = param_2[0x235];
    *(undefined8 *)(param_1 + 0x1d90) = param_2[0x236];
    *(undefined8 *)(param_1 + 0x1da0) = param_2[0x238];
    *(undefined4 *)(param_1 + 0x1da8) = *(undefined4 *)(param_2 + 0x239);
    *(undefined8 *)(param_1 + 0x1db0) = param_2[0x23a];
    *(undefined8 *)(param_1 + 0x1db8) = param_2[0x23b];
    *(undefined4 *)(param_1 + 0x1dc0) = *(undefined4 *)(param_2 + 0x23c);
    *(undefined4 *)(param_1 + 0x1dd8) = *(undefined4 *)(param_2 + 0x23f);
    *(undefined8 *)(param_1 + 0x1dd0) = param_2[0x23e];
    *(undefined4 *)(param_1 + 0x1de8) = *(undefined4 *)(param_2 + 0x241);
    *(undefined8 *)(param_1 + 0x1de0) = param_2[0x240];
    *(undefined8 *)(param_1 + 0x1df0) = param_2[0x242];
    *(undefined4 *)(param_1 + 0x1df8) = *(undefined4 *)(param_2 + 0x243);
    *(undefined4 *)(param_1 + 0x1dfc) = *(undefined4 *)((longlong)param_2 + 0x121c);
    *(undefined4 *)(param_1 + 0x1e08) = *(undefined4 *)(param_2 + 0x245);
    *(undefined8 *)(param_1 + 0x1e00) = param_2[0x244];
    *(undefined4 *)(param_1 + 0x1e0c) = *(undefined4 *)((longlong)param_2 + 0x122c);
    *(undefined4 *)(param_1 + 0x1e10) = *(undefined4 *)(param_2 + 0x246);
    uVar3 = param_2[0x249];
    *(undefined8 *)(param_1 + 0x1e20) = param_2[0x248];
    *(undefined8 *)(param_1 + 0x1e28) = uVar3;
    uVar3 = param_2[0x24b];
    *(undefined8 *)(param_1 + 0x1e30) = param_2[0x24a];
    *(undefined8 *)(param_1 + 0x1e38) = uVar3;
    *(undefined4 *)(param_1 + 0x1e40) = *(undefined4 *)(param_2 + 0x24c);
    *(undefined4 *)(param_1 + 0x1e44) = *(undefined4 *)((longlong)param_2 + 0x1264);
    *(undefined4 *)(param_1 + 0x1e48) = *(undefined4 *)(param_2 + 0x24d);
    *(undefined4 *)(param_1 + 0x1e4c) = *(undefined4 *)((longlong)param_2 + 0x126c);
    *(undefined4 *)(param_1 + 0x1e50) = *(undefined4 *)(param_2 + 0x24e);
    *(undefined4 *)(param_1 + 0x1e54) = *(undefined4 *)((longlong)param_2 + 0x1274);
    uVar3 = param_2[0x251];
    *(undefined8 *)(param_1 + 0x1e60) = param_2[0x250];
    *(undefined8 *)(param_1 + 0x1e68) = uVar3;
    *(undefined8 *)(param_1 + 0x1e70) = param_2[0x252];
    uVar3 = param_2[0x255];
    *(undefined8 *)(param_1 + 0x1e80) = param_2[0x254];
    *(undefined8 *)(param_1 + 0x1e88) = uVar3;
    *(undefined4 *)(param_1 + 0x1e90) = *(undefined4 *)(param_2 + 0x256);
    *(undefined4 *)(param_1 + 0x1e94) = *(undefined4 *)((longlong)param_2 + 0x12b4);
    uVar3 = param_2[0x259];
    *(undefined8 *)(param_1 + 0x1ea0) = param_2[600];
    *(undefined8 *)(param_1 + 0x1ea8) = uVar3;
    *(undefined4 *)(param_1 + 0x1eb0) = *(undefined4 *)(param_2 + 0x25a);
    *(undefined4 *)(param_1 + 0x1eb4) = *(undefined4 *)((longlong)param_2 + 0x12d4);
    *(undefined4 *)(param_1 + 0x1eb8) = *(undefined4 *)(param_2 + 0x25b);
    *(undefined4 *)(param_1 + 0x1ebc) = *(undefined4 *)((longlong)param_2 + 0x12dc);
    uVar3 = param_2[0x25d];
    *(undefined8 *)(param_1 + 0x1ec0) = param_2[0x25c];
    *(undefined8 *)(param_1 + 0x1ec8) = uVar3;
    uVar3 = param_2[0x25f];
    *(undefined8 *)(param_1 + 0x1ed0) = param_2[0x25e];
    *(undefined8 *)(param_1 + 0x1ed8) = uVar3;
    uVar3 = param_2[0x261];
    *(undefined8 *)(param_1 + 0x1ee0) = param_2[0x260];
    *(undefined8 *)(param_1 + 0x1ee8) = uVar3;
    *(undefined8 *)(param_1 + 0x1ef0) = param_2[0x262];
    *(undefined4 *)(param_1 + 0x1ef8) = *(undefined4 *)(param_2 + 0x263);
    *(undefined4 *)(param_1 + 0x1efc) = *(undefined4 *)((longlong)param_2 + 0x131c);
    *(undefined4 *)(param_1 + 0x1f00) = *(undefined4 *)(param_2 + 0x264);
    *(undefined4 *)(param_1 + 0x1f04) = *(undefined4 *)((longlong)param_2 + 0x1324);
    *(undefined4 *)(param_1 + 0x1f08) = *(undefined4 *)(param_2 + 0x265);
    *(undefined4 *)(param_1 + 0x1f0c) = *(undefined4 *)((longlong)param_2 + 0x132c);
    lVar11 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar11 + 0x1330);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)(param_1 + 0x1f10 + lVar11);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x200);
    *(undefined4 *)(param_1 + 0x2110) = *(undefined4 *)(param_2 + 0x2a6);
    *(undefined4 *)(param_1 + 0x2130) = *(undefined4 *)((longlong)param_2 + 0x1534);
    *(undefined4 *)(param_1 + 0x2134) = *(undefined4 *)(param_2 + 0x2a7);
  }
  else {
    *(undefined4 *)(param_1 + 0x1690 + lVar10) = *(undefined4 *)((longlong)param_2 + 0xb74);
    *(undefined8 *)(param_1 + 0x1710 + lVar10) = param_2[0x17a];
    *(undefined4 *)(param_1 + 0x1718 + lVar10) = *(undefined4 *)(param_2 + 0x17b);
    *(undefined4 *)(param_1 + 0x1740 + lVar10) = *(undefined4 *)(param_2 + 0x17c);
    *(undefined4 *)(param_1 + 0x1760 + lVar10) = *(undefined4 *)((longlong)param_2 + 0xbe4);
    *(undefined4 *)(param_1 + 0x1b00 + lVar10) = *(undefined4 *)((longlong)param_2 + 0xf54);
    *(undefined4 *)(param_1 + 0x1b40 + lVar10) = *(undefined4 *)((longlong)param_2 + 0xf7c);
    *(undefined4 *)(param_1 + 0x2110 + lVar10) = *(undefined4 *)(param_2 + 0x2a6);
  }
  uVar3 = param_2[0x2a9];
  puVar2 = (undefined8 *)(param_1 + 0x2140 + lVar10);
  *puVar2 = param_2[0x2a8];
  puVar2[1] = uVar3;
  uVar3 = param_2[0x2ab];
  puVar2 = (undefined8 *)(param_1 + 0x2160 + lVar10);
  *puVar2 = param_2[0x2aa];
  puVar2[1] = uVar3;
  *(undefined8 *)(param_1 + 0x2180 + lVar10) = param_2[0x2ac];
  uVar3 = param_2[0x2af];
  puVar2 = (undefined8 *)(param_1 + 0x21a0 + lVar10);
  *puVar2 = param_2[0x2ae];
  puVar2[1] = uVar3;
  uVar3 = param_2[0x2b1];
  puVar2 = (undefined8 *)(param_1 + 0x21c0 + lVar10);
  *puVar2 = param_2[0x2b0];
  puVar2[1] = uVar3;
  uVar3 = param_2[0x2b3];
  puVar2 = (undefined8 *)(param_1 + 0x21e0 + lVar10);
  *puVar2 = param_2[0x2b2];
  puVar2[1] = uVar3;
  if (param_3 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2200) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2204) = *(undefined4 *)((longlong)param_2 + 0x15a4);
  uVar3 = param_2[0x2b7];
  *(undefined8 *)(param_1 + 0x2210) = param_2[0x2b6];
  *(undefined8 *)(param_1 + 0x2218) = uVar3;
  *(undefined4 *)(param_1 + 0x2220) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2224) = *(undefined4 *)((longlong)param_2 + 0x15c4);
  *(undefined4 *)(param_1 + 0x2228) = *(undefined4 *)(param_2 + 0x2b9);
  return;
}



// FUNCTION 142d10270 FUN_142d10270 body=151 status=ok
// SIG undefined FUN_142d10270(void)

undefined8 FUN_142d10270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_2 + 0x125b1) & 1) != 0) {
    if ((longlong)*(int *)(param_1 + 0x410) < 1) {
      lVar1 = -1;
    }
    else {
      lVar1 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar1 * 8) == param_2)
        goto LAB_142d10294;
        lVar1 = lVar1 + 1;
      } while (*(int *)(param_1 + 0x410) != lVar1);
      lVar1 = -1;
LAB_142d10294:
      lVar1 = (longlong)(int)lVar1;
    }
    lVar3 = param_1 + 0xe38;
    if (*(longlong *)(param_1 + 0xe58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe58);
    }
    if (*(int *)(lVar3 + 0xc + lVar1 * 0x20) == 2) {
      if ((byte)(DAT_14c9ece68 != 0 | (*(byte *)(param_2 + 0x2938) & 2) >> 1) != 1) {
        return 0;
      }
      if (DAT_14c7604d4 == 0) {
        return 0;
      }
      uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 8) >> 8),
                       *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x50)) & 0xffffffffffffff40;
      return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
    }
  }
  return 0;
}



// FUNCTION 142d10308 FUN_142d10308 body=5551 status=ok
// SIG undefined FUN_142d10308(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_142d10308(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,longlong param_5
             ,char param_6)

{
  uint uVar1;
  ulonglong *puVar2;
  wchar_t *_Dst;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined1 auStack_5448 [32];
  wchar_t *local_5428;
  undefined1 *local_5420;
  undefined8 uStack_5418;
  char *local_5410;
  undefined4 local_5408;
  undefined4 local_5400;
  undefined8 **local_53f8;
  undefined1 local_53f0;
  undefined8 local_53e8;
  undefined1 local_53e0;
  ulonglong *local_53d0;
  char *local_53c8;
  longlong *local_53c0;
  longlong *local_53b8;
  longlong *local_53b0;
  longlong local_53a8;
  longlong *local_53a0;
  undefined8 *local_5398;
  longlong local_5390;
  wchar_t *local_5388;
  longlong local_5380;
  longlong local_5378;
  longlong local_5370;
  longlong local_5368;
  ulonglong local_5360;
  undefined8 local_5358;
  ulonglong local_5350;
  undefined8 *local_5348;
  undefined8 uStack_5340;
  undefined8 uStack_5338;
  undefined4 local_5330;
  uint local_532c;
  undefined4 local_5328;
  int local_5324;
  int local_5320;
  undefined4 local_531c;
  undefined2 local_5318;
  undefined1 local_5316;
  undefined2 local_5315;
  undefined1 local_5313;
  undefined1 local_3118 [2976];
  undefined1 local_2578 [2976];
  undefined4 local_19d8;
  undefined3 uStack_19d4;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x142d1031e;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5448;
  local_53c0 = param_2;
  if (param_6 == '\0') {
    if ((longlong)(int)param_4[1] != 0) {
      lVar29 = *param_4;
      lVar24 = (longlong)(int)param_4[1] * 0x13c10;
      do {
        cVar9 = FUN_142d10270(param_1,lVar29);
        if (cVar9 != '\0') goto LAB_142d103f5;
        lVar29 = lVar29 + 0x13c10;
        lVar24 = lVar24 + -0x13c10;
      } while (lVar24 != 0);
    }
  }
  else if (0 < *(int *)(DAT_14ca66ea0 + 4)) {
    if ((longlong)(int)param_4[1] != 0) {
      lVar29 = *param_4;
      lVar24 = (longlong)(int)param_4[1] * 0x13c10;
      bVar32 = false;
      bVar16 = 0;
      do {
        bVar8 = 1;
        bVar7 = !bVar32;
        bVar32 = true;
        if (bVar7) {
          lVar12 = *(longlong *)(lVar29 + 0x3108);
          if (((lVar12 == 0) || (*(int *)(lVar12 + 0x458) != *(int *)(lVar12 + 0x1a80))) ||
             (*(longlong *)(lVar12 + 0x1a70) == 0)) {
            bVar32 = false;
          }
          else {
            bVar32 = *(longlong *)(lVar12 + 0x1a78) != 0;
          }
        }
        if ((bVar16 & 1) == 0) {
          bVar8 = FUN_142d10270(param_1,lVar29);
        }
        lVar29 = lVar29 + 0x13c10;
        lVar24 = lVar24 + -0x13c10;
        bVar16 = bVar8;
      } while (lVar24 != 0);
      if (bVar32 || bVar8 != 0) goto LAB_142d109c3;
    }
LAB_142d103f5:
    *local_53c0 = 0;
    local_53c0[1] = 0;
    local_5330 = DAT_14ca83a68;
    uStack_5340 = CONCAT44(DAT_14ca83a5c,DAT_14ca83a58);
    uStack_5338 = (undefined *)CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
    local_532c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_5316 = 0;
    local_5348 = (undefined8 *)&DAT_00000009;
    local_5315 = 10;
    local_531c = 0x10001;
    local_5318 = 0x101;
    local_5328 = 0;
    local_5313 = 0xff;
    iVar20 = (int)*(undefined8 *)(param_5 + 0x20);
    local_5324 = DAT_14ca84e40;
    if (iVar20 < DAT_14ca84e40) {
      local_5324 = iVar20;
    }
    if (local_5324 < 2) {
      local_5324 = 1;
    }
    iVar20 = (int)((ulonglong)*(undefined8 *)(param_5 + 0x20) >> 0x20);
    local_5320 = DAT_14ca84e40;
    if (iVar20 < DAT_14ca84e40) {
      local_5320 = iVar20;
    }
    if (local_5320 < 2) {
      local_5320 = 1;
    }
    puVar2 = (ulonglong *)(param_3 + 0x70);
    uVar21 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar31 = uVar21 + 0x120;
    local_53d0 = puVar2;
    if (*(ulonglong *)(param_3 + 0x78) < uVar31) {
      FUN_140023dd8(puVar2,0x128);
      uVar21 = *puVar2 + 7 & 0xfffffffffffffff8;
      uVar31 = uVar21 + 0x120;
    }
    *(ulonglong *)(param_3 + 0x70) = uVar31;
    FUN_1456bbb8c(uVar21,L"Lumen.TranslucencyReflections.Normal",&local_5348,0);
    iVar20 = *(int *)(param_3 + 0x180);
    *(uint *)(param_3 + 0x180) = iVar20 + 1U;
    if (*(uint *)(param_3 + 0x184) < iVar20 + 1U) {
      FUN_14472c0f6(param_3 + 0x178,iVar20);
    }
    plVar15 = local_53c0;
    *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar20 * 8) = uVar21;
    *(int *)(uVar21 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
    local_53c0[1] = uVar21;
    lVar29 = FUN_14472bf7a(param_3,*(longlong *)(param_5 + 0x1c0) + 0x60,
                           L"Lumen.TranslucencyReflections.SceneDepth",0);
    *plVar15 = lVar29;
    if ((longlong)(int)param_4[1] != 0) {
      local_5378 = param_5 + 0x20;
      plVar15 = (longlong *)*param_4;
      local_53b0 = plVar15 + (longlong)(int)param_4[1] * 0x2782;
      local_53a0 = (longlong *)(param_3 + 0x98);
      local_5380 = param_3 + 0x168;
      local_53b8 = param_4;
      local_53a8 = param_1;
      do {
        if ((param_6 != '\0') || (cVar9 = FUN_142d10270(param_1,plVar15), cVar9 != '\0')) {
          puVar2 = local_53d0;
          puVar23 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar30 = puVar23 + 0x26;
          if (*(undefined8 **)(param_3 + 0x78) < puVar30) {
            FUN_140023dd8(local_53d0,0x140);
            puVar23 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
            puVar30 = puVar23 + 0x26;
          }
          *local_53d0 = (ulonglong)puVar30;
          *puVar23 = &PTR_FUN_14a255c58;
          puVar30 = puVar23 + 2;
          puVar23[2] = 0;
          *(undefined1 *)(puVar23 + 3) = 1;
          puVar23[4] = 0;
          *(undefined1 *)(puVar23 + 5) = 1;
          lVar29 = 0x42;
          do {
            puVar26 = (undefined8 *)((longlong)puVar23 + lVar29 + -0x12);
            *puVar26 = 0;
            puVar26[1] = 0;
            *(undefined4 *)((longlong)puVar23 + lVar29 + -2) = 0xffff0000;
            lVar29 = lVar29 + 0x18;
          } while (lVar29 != 0x102);
          *(undefined4 *)((longlong)puVar23 + 0x104) = 0;
          puVar23[0x1e] = 0;
          puVar23[0x1f] = 0;
          *(undefined2 *)(puVar23 + 0x20) = 0;
          *(undefined4 *)(puVar23 + 0x21) = 0xffffffff;
          *(undefined4 *)((longlong)puVar23 + 0x10c) = 0xffffffff;
          *(undefined4 *)(puVar23 + 0x22) = 0xffffffff;
          *(undefined4 *)((longlong)puVar23 + 0x114) = 0xffffffff;
          *(undefined4 *)(puVar23 + 0x23) = 0;
          *(undefined2 *)((longlong)puVar23 + 0x11c) = 0;
          puVar23[0x24] = 0;
          iVar20 = *(int *)(param_3 + 0xa0);
          *(uint *)(param_3 + 0xa0) = iVar20 + 1U;
          if (*(uint *)(param_3 + 0xa4) < iVar20 + 1U) {
            FUN_1448cfae8(local_53a0,iVar20);
          }
          *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar20 * 8) = puVar23;
          puVar23[6] = local_53c0[1];
          puVar23[7] = 0;
          *(undefined4 *)(puVar23 + 8) = 0xffff0000;
          puVar23[0x1e] = *local_53c0;
          puVar23[0x1f] = 0;
          *(undefined2 *)(puVar23 + 0x20) = 0;
          *(undefined4 *)((longlong)puVar23 + 0x104) = 2;
          uVar5 = *(undefined8 *)(param_5 + 0x198);
          lVar29 = FUN_14482e3b2();
          cVar9 = *(char *)(lVar29 + 0x41);
          if (cVar9 == '\x03') {
            cVar9 = '\x02';
          }
          puVar23[4] = uVar5;
          *(char *)(puVar23 + 5) = cVar9;
          lVar29 = plVar15[0x2703];
          FUN_14157cce2();
          FUN_1448e935e(lVar29,&local_5348,&DAT_14c9ecf28,0);
          FUN_14157cce2();
          puVar26 = local_5348;
          local_5390 = uStack_5340;
          local_5398 = DAT_14c9c0c60;
          local_5388 = DAT_14c9c0db0;
          local_53c8 = DAT_14c9c0d50;
          lVar29 = plVar15[0x2703];
          FUN_14157ce04();
          local_5348 = (undefined8 *)0x0;
          uStack_5340 = 0;
          FUN_1448f70da(puVar26,&DAT_14c9f03c8,puVar30,&local_5348);
          lVar24 = plVar15[0x61f];
          lVar12 = plVar15[0x620];
          FUN_14157ce04();
          FUN_140069376(param_3);
          puVar2 = local_53d0;
          puVar22 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar23 = puVar22 + 0x41;
          if (*(undefined8 **)(param_3 + 0x78) < puVar23) {
            FUN_140023dd8(local_53d0,0x210);
            puVar22 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar23 = puVar22 + 0x41;
          }
          *local_53d0 = (ulonglong)puVar23;
          uStack_5340 = DAT_14c9f0410;
          if (DAT_14c9f0410 != 0) {
            LOCK();
            *(int *)(DAT_14c9f0410 + 8) = *(int *)(DAT_14c9f0410 + 8) + 1;
            UNLOCK();
          }
          uStack_5338 = &DAT_14c9f03c8;
          local_5428 = (wchar_t *)CONCAT71(local_5428._1_7_,2);
          local_5348 = puVar30;
          FUN_140068f1a(puVar22,&local_19d8,&local_5348);
          *puVar22 = &PTR_FUN_14a255c60;
          puVar22[0x37] = puVar30;
          puVar22[0x38] = lVar29;
          puVar22[0x39] = puVar26;
          puVar22[0x3a] = local_5390;
          puVar22[0x3b] = lVar24;
          puVar22[0x3c] = lVar12;
          puVar22[0x3d] = local_53c8;
          puVar22[0x3e] = local_5388;
          puVar22[0x3f] = local_5398;
          *(undefined4 *)(puVar22 + 0x40) = 0;
          iVar20 = *(int *)(param_3 + 0x170);
          *(uint *)(param_3 + 0x170) = iVar20 + 1U;
          if (*(uint *)(param_3 + 0x174) < iVar20 + 1U) {
            FUN_14470e57a(local_5380,iVar20);
          }
          *(undefined8 **)(*(longlong *)(param_3 + 0x168) + (longlong)iVar20 * 8) = puVar22;
          *(int *)((longlong)puVar22 + 0x2c) = *(int *)(param_3 + 0x170) + -1;
          FUN_140069100(param_3,puVar22);
          param_1 = local_53a8;
        }
        plVar15 = plVar15 + 0x2782;
      } while (plVar15 != local_53b0);
      if ((longlong)(int)local_53b8[1] != 0) {
        lVar29 = *local_53b8;
        local_5390 = (longlong)(int)local_53b8[1] * 0x13c10 + lVar29;
        local_5370 = param_3 + 0x1a8;
        local_53b0 = (longlong *)(param_3 + 0x1b8);
        local_53c8 = (char *)(param_3 + 0x4a8);
        local_53b8 = (longlong *)(param_3 + 0x4b0);
        do {
          if ((param_6 != '\0') || (cVar9 = FUN_142d10270(param_1,lVar29), cVar9 != '\0')) {
            uVar4 = DAT_14ca44da0;
            local_5358 = *(undefined8 *)(lVar29 + 0x30f8);
            uVar31 = *(ulonglong *)(lVar29 + 0x3100);
            uVar21 = uVar31 >> 0x20;
            uVar25 = 1;
            if (1 < (int)uVar31) {
              uVar25 = uVar31 & 0xffffffff;
            }
            if ((int)(uVar31 >> 0x20) < 2) {
              uVar21 = 1;
            }
            uVar25 = uVar25 | uVar21 << 0x20;
            local_5350 = uVar25;
            if (DAT_14ca44da0 != 0) {
              puVar14 = DAT_14ca44d98;
              if (DAT_14ca44d98 == (uint *)0x0) {
                puVar14 = &DAT_14ca44d88;
              }
              uVar10 = *puVar14;
              if (uVar10 == 0) {
                iVar20 = DAT_14ca44da0 + 0x1e;
                if (-1 < (int)(DAT_14ca44da0 - 1)) {
                  iVar20 = DAT_14ca44da0 - 1;
                }
                uVar31 = 0;
                uVar21 = (ulonglong)(uint)(iVar20 >> 5);
                if (iVar20 >> 5 < 1) {
                  uVar21 = uVar31;
                }
                iVar20 = 0;
                do {
                  if (uVar21 == uVar31) goto LAB_142d10ac9;
                  iVar20 = iVar20 + 0x20;
                  uVar10 = puVar14[uVar31 + 1];
                  uVar31 = uVar31 + 1;
                } while (uVar10 == 0);
              }
              else {
                uVar31 = 0;
                iVar20 = 0;
              }
              uVar27 = (ulonglong)(-uVar10 & uVar10);
              uVar21 = uVar27 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              uVar10 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if ((int)uVar10 < (int)DAT_14ca44da0) {
                uVar17 = 0xffffffff;
                do {
                  plVar15 = *(longlong **)(DAT_14ca44d78 + (longlong)(int)uVar10 * 0x10);
                  (**(code **)(*plVar15 + 0x10))(plVar15,lVar29,CONCAT71((int7)(uVar25 >> 8),1));
                  uVar17 = ~(uint)uVar27 & uVar17;
                  puVar14 = DAT_14ca44d98;
                  if (DAT_14ca44d98 == (uint *)0x0) {
                    puVar14 = &DAT_14ca44d88;
                  }
                  iVar28 = (int)uVar31;
                  lVar24 = (longlong)iVar28;
                  uVar10 = puVar14[lVar24] & uVar17;
                  if (uVar10 == 0) {
                    uVar1 = DAT_14ca44da0 - 1;
                    uVar10 = DAT_14ca44da0 + 0x1e;
                    if (-1 < (int)uVar1) {
                      uVar10 = uVar1;
                    }
                    iVar18 = (int)uVar10 >> 5;
                    iVar20 = iVar20 + 0x20;
                    iVar19 = iVar18;
                    if (iVar18 < iVar28) {
                      iVar19 = iVar28;
                    }
                    if (iVar28 < iVar18) {
                      lVar12 = 0;
                      do {
                        uVar10 = puVar14[lVar24 + lVar12 + 1];
                        if (uVar10 != 0) {
                          uVar31 = (ulonglong)(iVar28 + (int)lVar12 + 1);
                          uVar17 = 0xffffffff;
                          goto LAB_142d116b0;
                        }
                        iVar20 = iVar20 + 0x20;
                        lVar12 = lVar12 + 1;
                      } while (iVar19 - lVar24 != lVar12);
                      uVar17 = 0xffffffff;
                      uVar1 = 0;
                      iVar28 = iVar19;
                    }
                    uVar31 = (ulonglong)(iVar28 + 1);
                    uVar10 = DAT_14ca44da0;
                  }
                  else {
LAB_142d116b0:
                    uVar27 = (ulonglong)(-uVar10 & uVar10);
                    uVar21 = uVar27 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    uVar10 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    uVar1 = uVar10;
                    if ((int)DAT_14ca44da0 <= (int)uVar10) {
                      uVar10 = DAT_14ca44da0;
                      uVar1 = DAT_14ca44da0;
                    }
                  }
                  uVar25 = (ulonglong)uVar1;
                } while (uVar10 != uVar4);
              }
            }
LAB_142d10ac9:
            puVar2 = local_53d0;
            puVar23 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar30 = puVar23 + 0x34;
            if (*(undefined8 **)(param_3 + 0x78) < puVar30) {
              FUN_140023dd8(local_53d0,0x1b0);
              puVar23 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
              puVar30 = puVar23 + 0x34;
            }
            *local_53d0 = (ulonglong)puVar30;
            *puVar23 = &PTR_FUN_14a255ba8;
            local_5398 = puVar23 + 2;
            puVar23[2] = 0;
            *(undefined1 *)(puVar23 + 3) = 1;
            puVar23[4] = 0;
            *(undefined1 *)(puVar23 + 5) = 1;
            puVar23[6] = 0;
            *(undefined1 *)(puVar23 + 7) = 1;
            local_5388 = (wchar_t *)(puVar23 + 8);
            puVar23[8] = 0;
            *(undefined4 *)(puVar23 + 9) = 4;
            puVar23[10] = 0;
            *(undefined4 *)(puVar23 + 0xb) = 8;
            puVar23[0xe] = 0;
            *(undefined1 *)(puVar23 + 0xf) = 1;
            puVar23[0x10] = 0;
            *(undefined1 *)(puVar23 + 0x11) = 1;
            puVar23[0x12] = 0;
            *(undefined1 *)(puVar23 + 0x13) = 1;
            lVar24 = 0xb2;
            do {
              puVar30 = (undefined8 *)((longlong)puVar23 + lVar24 + -0x12);
              *puVar30 = 0;
              puVar30[1] = 0;
              *(undefined4 *)((longlong)puVar23 + lVar24 + -2) = 0xffff0000;
              lVar24 = lVar24 + 0x18;
            } while (lVar24 != 0x172);
            *(undefined4 *)((longlong)puVar23 + 0x174) = 0;
            puVar23[0x2c] = 0;
            puVar23[0x2d] = 0;
            *(undefined2 *)(puVar23 + 0x2e) = 0;
            *(undefined4 *)(puVar23 + 0x2f) = 0xffffffff;
            *(undefined4 *)((longlong)puVar23 + 0x17c) = 0xffffffff;
            *(undefined4 *)(puVar23 + 0x30) = 0xffffffff;
            *(undefined4 *)((longlong)puVar23 + 0x184) = 0xffffffff;
            *(undefined4 *)(puVar23 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar23 + 0x18c) = 0;
            puVar23[0x32] = 0;
            iVar20 = *(int *)(param_3 + 0xa0);
            *(uint *)(param_3 + 0xa0) = iVar20 + 1U;
            if (*(uint *)(param_3 + 0xa4) < iVar20 + 1U) {
              FUN_1448cfae8(local_53a0,iVar20);
            }
            *(undefined8 **)(*local_53a0 + (longlong)iVar20 * 8) = puVar23;
            puVar23[0x14] = local_53c0[1];
            puVar23[0x15] = 0;
            *(undefined4 *)(puVar23 + 0x16) = 0xffff0001;
            puVar23[0x2c] = *local_53c0;
            puVar23[0x2d] = 0;
            *(undefined2 *)(puVar23 + 0x2e) = 1;
            *(undefined4 *)((longlong)puVar23 + 0x174) = 2;
            memcpy(&local_19d8,*(void **)(lVar29 + 0x3110),0x1960);
            memcpy(local_2578,(void *)(lVar29 + 0x500),0xba0);
            memcpy(local_3118,(void *)(lVar29 + 0x125d0),0xba0);
            local_5428 = (wchar_t *)local_2578;
            local_5420 = local_3118;
            FUN_14054f8e6(lVar29,&local_19d8,local_5378,&local_5358);
            FUN_1401ee234(&local_5348,&local_19d8,1,1);
            lVar24 = FUN_1447e4f80();
            puVar30 = local_5348;
            cVar9 = *(char *)(lVar24 + 0x41);
            if (cVar9 == '\x03') {
              cVar9 = '\x02';
            }
            puVar23[2] = local_5348;
            *(char *)(puVar23 + 3) = cVar9;
            if (local_5348 != (undefined8 *)0x0) {
              LOCK();
              puVar14 = (uint *)(local_5348 + 1);
              uVar4 = *puVar14;
              *puVar14 = *puVar14 - 1;
              UNLOCK();
              if ((uVar4 & 0x3fffffff) == 1) {
                puVar14 = (uint *)(local_5348 + 1);
                LOCK();
                uVar4 = *puVar14;
                *puVar14 = *puVar14 | 0x40000000;
                UNLOCK();
                if ((uVar4 >> 0x1e & 1) == 0) {
                  bVar16 = *(byte *)((longlong)local_5348 + 0xd);
                  plVar11 = (longlong *)FUN_14001cc68(0x10);
                  plVar11[1] = (longlong)puVar30;
                  plVar15 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c8;
                  if ((bVar16 & 2) == 0) {
                    do {
                      *plVar11 = (longlong)plVar15;
                      LOCK();
                      bVar32 = plVar15 != DAT_14ca843c0;
                      plVar13 = plVar11;
                      if (bVar32) {
                        plVar15 = DAT_14ca843c0;
                        plVar13 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar13;
                      UNLOCK();
                    } while (bVar32);
                  }
                  else {
                    do {
                      *plVar11 = (longlong)plVar13;
                      LOCK();
                      bVar32 = plVar13 != DAT_14ca843c8;
                      plVar15 = plVar11;
                      if (bVar32) {
                        plVar13 = DAT_14ca843c8;
                        plVar15 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar15;
                      UNLOCK();
                    } while (bVar32);
                  }
                }
              }
            }
            puVar30 = local_5398;
            if ((&DAT_000023f6)[lVar29] == '\x01') {
              FUN_147cef0c6(&local_5348);
              FUN_142d0e975(&local_5348,&local_19d8,0);
              if ((((*(char *)(lVar29 + 0x23f4) != '\0') || (*(char *)(lVar29 + 0x23f5) == '\x01'))
                  && (*(int *)(lVar29 + 0x1dd0) != 0)) &&
                 (lVar24 = *(longlong *)(lVar29 + 8), lVar24 != 0)) {
                iVar20 = *(int *)(lVar29 + 0x1dd8);
                if ((-2 < (longlong)iVar20) && (iVar20 + 1 < *(int *)(lVar24 + 0x10))) {
                  lVar24 = *(longlong *)(*(longlong *)(lVar24 + 8) + 8 + (longlong)iVar20 * 8);
                  cVar9 = FUN_144b2acc6(lVar24);
                  if (lVar24 != 0 && cVar9 == '\x01') {
                    uVar31 = *(ulonglong *)(lVar24 + 0x3100);
                    uVar21 = uVar31 >> 0x20;
                    local_5360 = 1;
                    if (1 < (int)uVar31) {
                      local_5360 = uVar31 & 0xffffffff;
                    }
                    local_5368 = *(longlong *)(lVar24 + 0x30f8);
                    if ((int)(uVar31 >> 0x20) < 2) {
                      uVar21 = 1;
                    }
                    local_5360 = local_5360 | uVar21 << 0x20;
                    local_5420 = local_3118;
                    local_5428 = (wchar_t *)local_2578;
                    FUN_14054f8e6(lVar24,&local_19d8,local_5378,&local_5368);
                    FUN_142d0e975(&local_5348,&local_19d8,1);
                  }
                }
              }
              FUN_142bc2384(&local_5368,&local_5348,1,1);
              lVar12 = FUN_144a96f7c();
              lVar24 = local_5368;
              cVar9 = *(char *)(lVar12 + 0x41);
              if (*(char *)(lVar12 + 0x41) == '\x03') {
                cVar9 = '\x02';
              }
              puVar23[4] = local_5368;
              *(char *)(puVar23 + 5) = cVar9;
              if (local_5368 != 0) {
                LOCK();
                puVar14 = (uint *)(local_5368 + 8);
                uVar4 = *puVar14;
                *puVar14 = *puVar14 - 1;
                UNLOCK();
                if ((uVar4 & 0x3fffffff) == 1) {
                  puVar14 = (uint *)(local_5368 + 8);
                  LOCK();
                  uVar4 = *puVar14;
                  *puVar14 = *puVar14 | 0x40000000;
                  UNLOCK();
                  if ((uVar4 >> 0x1e & 1) == 0) {
                    bVar16 = *(byte *)(local_5368 + 0xd);
                    plVar11 = (longlong *)FUN_14001cc68(0x10);
                    plVar11[1] = lVar24;
                    plVar15 = DAT_14ca843c0;
                    plVar13 = DAT_14ca843c8;
                    if ((bVar16 & 2) == 0) {
                      do {
                        *plVar11 = (longlong)plVar15;
                        LOCK();
                        bVar32 = plVar15 != DAT_14ca843c0;
                        plVar13 = plVar11;
                        if (bVar32) {
                          plVar15 = DAT_14ca843c0;
                          plVar13 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar13;
                        UNLOCK();
                      } while (bVar32);
                    }
                    else {
                      do {
                        *plVar11 = (longlong)plVar13;
                        LOCK();
                        bVar32 = plVar13 != DAT_14ca843c8;
                        plVar15 = plVar11;
                        if (bVar32) {
                          plVar13 = DAT_14ca843c8;
                          plVar15 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar15;
                        UNLOCK();
                      } while (bVar32);
                    }
                  }
                }
              }
            }
            puVar2 = local_53d0;
            puVar22 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar26 = puVar22 + 0x14;
            if (*(undefined8 **)(param_3 + 0x78) < puVar26) {
              FUN_140023dd8(local_53d0);
              puVar22 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
              puVar26 = puVar22 + 0x14;
            }
            *(undefined8 **)(param_3 + 0x70) = puVar26;
            *puVar22 = &PTR_FUN_14a255bb0;
            _Dst = (wchar_t *)(puVar22 + 2);
            memset(_Dst,0,0x90);
            iVar20 = *(int *)(param_3 + 0xa0);
            *(uint *)(param_3 + 0xa0) = iVar20 + 1U;
            if (*(uint *)(param_3 + 0xa4) < iVar20 + 1U) {
              FUN_1448cfae8(local_53a0,iVar20);
            }
            *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar20 * 8) = puVar22;
            local_5428 = _Dst;
            FUN_1448e315a(param_3,param_5,*(undefined4 *)(lVar29 + 0x3090),0x1fff);
            FUN_1415c36ae();
            puVar2 = local_53d0;
            uVar5 = DAT_14c9ed000;
            puVar22 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar26 = puVar22 + 9;
            if (*(undefined8 **)(param_3 + 0x78) < puVar26) {
              FUN_140023dd8(local_53d0,0x50);
              puVar22 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
              puVar26 = puVar22 + 9;
            }
            *local_53d0 = (ulonglong)puVar26;
            puVar22[1] = uVar5;
            puVar22[2] = 0;
            *puVar22 = &PTR_FUN_14a1fb9b8;
            FUN_1415c36ae();
            puVar22[3] = _Dst;
            lVar24 = DAT_14c9ed030;
            puVar22[4] = DAT_14c9ed030;
            if (lVar24 != 0) {
              LOCK();
              piVar3 = (int *)(lVar24 + 8);
              *piVar3 = *piVar3 + 1;
              UNLOCK();
            }
            puVar22[5] = &DAT_14c9ecfe8;
            puVar22[6] = 0;
            *(undefined4 *)(puVar22 + 7) = 0xffffffff;
            *(undefined1 *)((longlong)puVar22 + 0x3c) = 0;
            *puVar22 = &PTR_FUN_14a255bb8;
            puVar22[8] = _Dst;
            iVar20 = *(int *)(param_3 + 0x1b0);
            *(uint *)(param_3 + 0x1b0) = iVar20 + 1U;
            if (*(uint *)(param_3 + 0x1b4) < iVar20 + 1U) {
              FUN_1402aa76e(local_5370,iVar20);
            }
            *(undefined8 **)(*(longlong *)(param_3 + 0x1a8) + (longlong)iVar20 * 8) = puVar22;
            *(int *)(puVar22 + 7) = *(int *)(param_3 + 0x1b0) + -1;
            FUN_1415c36ae();
            param_1 = local_53a8;
            cVar9 = DAT_14c9ed029;
            if (DAT_14c9ed029 == '\x03') {
              cVar9 = '\x02';
            }
            puVar23[6] = puVar22;
            *(char *)(puVar23 + 7) = cVar9;
            if (*(char *)(lVar29 + 0xaea0) == '\x01') {
              lVar24 = *(longlong *)(local_53a8 + 8);
              if (*(int *)(DAT_14ca09490 + 4) == 0) {
                FUN_144b112d8(lVar29 + 0xae60);
              }
              local_5428 = local_5388;
              FUN_1401b6588(lVar29 + 0xae60,param_3,lVar24 + 0x3f08,0);
              *(undefined1 *)(lVar29 + 0xafa8) = 1;
            }
            else {
              puVar23[8] = 0;
              *(undefined4 *)(puVar23 + 9) = 4;
              puVar23[10] = 0;
              *(undefined4 *)(puVar23 + 0xb) = 8;
              puVar23[0xc] = 0;
            }
            uVar31 = local_5350;
            uVar5 = local_5358;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9f1880) && (FUN_144b3d300(&DAT_14c9f1880), DAT_14c9f1880 == -1))
            {
              FUN_145dca32c(&local_5348);
              local_53e0 = 0;
              local_53f0 = 0;
              local_5410 = "Unknown";
              local_5420 = (undefined1 *)0x0;
              uStack_5418 = 0;
              local_5428 = L"FLumenFrontLayerTranslucencyGBufferPassParameters";
              local_53e8 = 0;
              local_5400 = 400;
              local_5408 = 0x142;
              local_53f8 = &local_5348;
              FUN_140b49562(&DAT_14c9f1800,0,1);
              if (local_5348 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              atexit((_func_5014 *)&LAB_142d28e74);
              _Init_thread_footer(&DAT_14c9f1880);
              puVar30 = local_5398;
              param_1 = local_53a8;
            }
            FUN_140069376(param_3);
            puVar2 = local_53d0;
            puVar26 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar23 = puVar26 + 0x3e;
            if (*(undefined8 **)(param_3 + 0x78) < puVar23) {
              FUN_140023dd8(local_53d0,0x1f8);
              puVar26 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
              puVar23 = puVar26 + 0x3e;
            }
            *local_53d0 = (ulonglong)puVar23;
            uStack_5340 = DAT_14c9f1848;
            if (DAT_14c9f1848 != 0) {
              LOCK();
              *(int *)(DAT_14c9f1848 + 8) = *(int *)(DAT_14c9f1848 + 8) + 1;
              UNLOCK();
            }
            uStack_5338 = &DAT_14c9f1800;
            local_5428 = (wchar_t *)CONCAT71(local_5428._1_7_,2);
            local_5348 = puVar30;
            FUN_140068f1a(puVar26,local_2578,&local_5348,1);
            *puVar26 = &PTR_FUN_14a255bc0;
            puVar26[0x37] = lVar29;
            puVar26[0x38] = param_1;
            *(undefined1 *)(puVar26 + 0x39) = 0x1c;
            *(undefined4 *)((longlong)puVar26 + 0x1c9) = local_19d8;
            *(uint *)((longlong)puVar26 + 0x1cc) = CONCAT31(uStack_19d4,local_19d8._3_1_);
            puVar26[0x3a] = puVar30;
            *(undefined4 *)(puVar26 + 0x3b) = 0x3f800000;
            *(undefined8 *)((longlong)puVar26 + 0x1dc) = uVar5;
            *(ulonglong *)((longlong)puVar26 + 0x1e4) = uVar31;
            iVar20 = *(int *)(param_3 + 0x170);
            *(uint *)(param_3 + 0x170) = iVar20 + 1U;
            if (*(uint *)(param_3 + 0x174) < iVar20 + 1U) {
              FUN_14470e57a(local_5380,iVar20);
            }
            *(undefined8 **)(*(longlong *)(param_3 + 0x168) + (longlong)iVar20 * 8) = puVar26;
            *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_3 + 0x170) + -1;
            FUN_140069100(param_3,puVar26);
            lVar24 = *(longlong *)(lVar29 + 0x3108);
            if (((lVar24 != 0) && ((*(byte *)(lVar29 + 0x125b0) & 1) == 0)) &&
               (0 < *(int *)(DAT_14ca66ea0 + 4))) {
              lVar12 = *local_53c0;
              plVar15 = *(longlong **)(lVar24 + 0x1a70);
              if (plVar15 != (longlong *)0x0) {
                *(undefined8 *)(lVar24 + 0x1a70) = 0;
                (**(code **)(*plVar15 + 0x38))();
              }
              bVar16 = *(byte *)(lVar12 + 0x24);
              *(byte *)(lVar12 + 0x24) = bVar16 | 2;
              *(undefined1 *)(lVar12 + 0x26) = 1;
              iVar20 = *(int *)(param_3 + 0x1c0);
              *(uint *)(param_3 + 0x1c0) = iVar20 + 1U;
              if (*(uint *)(param_3 + 0x1c4) < iVar20 + 1U) {
                FUN_14017e38e(local_53b0,iVar20);
              }
              lVar6 = *local_53b0;
              *(longlong *)(lVar6 + (longlong)iVar20 * 0x10) = lVar12;
              *(undefined8 **)(lVar6 + 8 + (longlong)iVar20 * 0x10) =
                   (undefined8 *)(lVar24 + 0x1a70);
              if ((bVar16 & 2) == 0) {
                LOCK();
                cVar9 = *local_53c8;
                if (cVar9 == '\0') {
                  *local_53c8 = '\x01';
                }
                UNLOCK();
                if (cVar9 != '\0') {
                  FUN_1447d2058(local_53c8);
                }
                iVar20 = *(int *)(param_3 + 0x4b8);
                *(uint *)(param_3 + 0x4b8) = iVar20 + 1U;
                if (*(uint *)(param_3 + 0x4bc) < iVar20 + 1U) {
                  FUN_1447f2dbc(local_53b8,iVar20);
                }
                lVar24 = *local_53b8;
                *(undefined8 *)(lVar24 + (longlong)iVar20 * 0x10) = 2;
                *(longlong *)(lVar24 + 8 + (longlong)iVar20 * 0x10) = lVar12;
                LOCK();
                cVar9 = *local_53c8;
                if (cVar9 == '\x01') {
                  *local_53c8 = '\0';
                }
                UNLOCK();
                if (cVar9 != '\x01') {
                  FUN_14008cdb0(local_53c8);
                }
              }
              lVar24 = local_53c0[1];
              plVar15 = *(longlong **)(*(longlong *)(lVar29 + 0x3108) + 0x1a78);
              puVar30 = (undefined8 *)(*(longlong *)(lVar29 + 0x3108) + 0x1a78);
              if (plVar15 != (longlong *)0x0) {
                *puVar30 = 0;
                (**(code **)(*plVar15 + 0x38))();
              }
              bVar16 = *(byte *)(lVar24 + 0x24);
              *(byte *)(lVar24 + 0x24) = bVar16 | 2;
              *(undefined1 *)(lVar24 + 0x26) = 1;
              iVar20 = *(int *)(param_3 + 0x1c0);
              *(uint *)(param_3 + 0x1c0) = iVar20 + 1U;
              if (*(uint *)(param_3 + 0x1c4) < iVar20 + 1U) {
                FUN_14017e38e(local_53b0,iVar20);
              }
              param_1 = local_53a8;
              lVar12 = *local_53b0;
              *(longlong *)(lVar12 + (longlong)iVar20 * 0x10) = lVar24;
              *(undefined8 **)(lVar12 + 8 + (longlong)iVar20 * 0x10) = puVar30;
              if ((bVar16 & 2) == 0) {
                LOCK();
                cVar9 = *local_53c8;
                if (cVar9 == '\0') {
                  *local_53c8 = '\x01';
                }
                UNLOCK();
                if (cVar9 != '\0') {
                  FUN_1447d2058(local_53c8);
                }
                iVar20 = *(int *)(param_3 + 0x4b8);
                *(uint *)(param_3 + 0x4b8) = iVar20 + 1U;
                if (*(uint *)(param_3 + 0x4bc) < iVar20 + 1U) {
                  FUN_1447f2dbc(local_53b8,iVar20);
                }
                lVar12 = *local_53b8;
                *(undefined8 *)(lVar12 + (longlong)iVar20 * 0x10) = 2;
                *(longlong *)(lVar12 + 8 + (longlong)iVar20 * 0x10) = lVar24;
                LOCK();
                cVar9 = *local_53c8;
                if (cVar9 == '\x01') {
                  *local_53c8 = '\0';
                }
                UNLOCK();
                if (cVar9 != '\x01') {
                  FUN_14008cdb0(local_53c8);
                }
              }
            }
          }
          lVar29 = lVar29 + 0x13c10;
        } while (lVar29 != local_5390);
      }
    }
    if ((local_70 ^ (ulonglong)auStack_5448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return local_53c0;
  }
LAB_142d109c3:
  *local_53c0 = 0;
  local_53c0[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_5448);
}



// FUNCTION 142d118c0 FUN_142d118c0 body=462 status=ok
// SIG undefined FUN_142d118c0(void)

void FUN_142d118c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined8 *local_340;
  undefined4 *local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 *local_320;
  undefined2 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8 [20];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 auStack_278 [60];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((((byte)(DAT_14c9ece68 != 0 | (*(byte *)(param_3 + 0x2938) & 2) >> 1) == 1) &&
       (DAT_14c7604d4 != 0)) && ((*(byte *)(*(longlong *)(param_3 + 8) + 0x50) & 0x40) != 0)) &&
     ((*(byte *)(param_3 + 0x125b1) & 1) != 0)) {
    local_188 = 0;
    uStack_180 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    lVar2 = 0x8c;
    do {
      *(undefined4 *)((longlong)&local_308 + lVar2 + 4) = 0;
      *(undefined4 *)((longlong)local_2f8 + lVar2 + -8) = 0;
      *(undefined4 *)((longlong)local_2f8 + lVar2 + -4) = 0;
      *(undefined4 *)((longlong)local_2f8 + lVar2) = 0x3f800000;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0xec);
    lVar2 = 0xec;
    do {
      *(undefined4 *)((longlong)&local_308 + lVar2 + 4) = 0;
      *(undefined4 *)((longlong)local_2f8 + lVar2 + -8) = 0;
      *(undefined4 *)((longlong)local_2f8 + lVar2 + -4) = 0;
      *(undefined4 *)((longlong)local_2f8 + lVar2) = 0x3f800000;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x14c);
    local_308 = param_6[1];
    local_320 = &local_308;
    local_300 = *param_6;
    local_338 = local_2f8;
    local_340 = &local_188;
    local_348 = param_5;
    local_318 = 2;
    local_328 = 0;
    local_330 = 2;
    uVar1 = FUN_142d404f6(0,param_2,param_3);
    *(undefined1 *)(param_3 + 0x13ad0) = 1;
    *(undefined4 *)(param_3 + 0x13ad4) = *(undefined4 *)(DAT_14c9eceb8 + 4);
    *(undefined8 *)(param_3 + 0x13ab8) = uVar1;
    *(undefined8 *)(param_3 + 0x13ac0) = local_308;
    *(undefined8 *)(param_3 + 0x13ac8) = local_300;
  }
  if ((local_18 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d11a8f FUN_142d11a8f body=69 status=ok
// SIG undefined FUN_142d11a8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11a8f(void)

{
  _DAT_14c9ed2e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed2e8,1);
  return;
}



// FUNCTION 142d11ad4 FUN_142d11ad4 body=69 status=ok
// SIG undefined FUN_142d11ad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11ad4(void)

{
  _DAT_14c9ed2f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed300,1);
  return;
}



// FUNCTION 142d11b19 FUN_142d11b19 body=69 status=ok
// SIG undefined FUN_142d11b19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11b19(void)

{
  _DAT_14c9ed310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed318,1);
  return;
}



// FUNCTION 142d11b5e FUN_142d11b5e body=69 status=ok
// SIG undefined FUN_142d11b5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11b5e(void)

{
  _DAT_14c9ed328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed330,1);
  return;
}



// FUNCTION 142d11ba3 FUN_142d11ba3 body=69 status=ok
// SIG undefined FUN_142d11ba3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11ba3(void)

{
  _DAT_14c9ed340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed348,1);
  return;
}



// FUNCTION 142d11be8 FUN_142d11be8 body=69 status=ok
// SIG undefined FUN_142d11be8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11be8(void)

{
  _DAT_14c9ed358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11c2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed360,1);
  return;
}



// FUNCTION 142d11c2d FUN_142d11c2d body=69 status=ok
// SIG undefined FUN_142d11c2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11c2d(void)

{
  _DAT_14c9ed370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed378,1);
  return;
}



// FUNCTION 142d11c72 FUN_142d11c72 body=69 status=ok
// SIG undefined FUN_142d11c72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11c72(void)

{
  _DAT_14c9ed388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed390,1);
  return;
}



// FUNCTION 142d11cb7 FUN_142d11cb7 body=69 status=ok
// SIG undefined FUN_142d11cb7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11cb7(void)

{
  _DAT_14c9ed3a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed3a8,1);
  return;
}



// FUNCTION 142d11cfc FUN_142d11cfc body=69 status=ok
// SIG undefined FUN_142d11cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11cfc(void)

{
  _DAT_14c9ed3b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed3c0,1);
  return;
}



// FUNCTION 142d11d41 FUN_142d11d41 body=69 status=ok
// SIG undefined FUN_142d11d41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11d41(void)

{
  _DAT_14c9ed3d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed3d8,1);
  return;
}



// FUNCTION 142d11d86 FUN_142d11d86 body=69 status=ok
// SIG undefined FUN_142d11d86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11d86(void)

{
  _DAT_14c9ed3e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed3f0,1);
  return;
}



// FUNCTION 142d11dcb FUN_142d11dcb body=69 status=ok
// SIG undefined FUN_142d11dcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11dcb(void)

{
  _DAT_14c9ed400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed408,1);
  return;
}



// FUNCTION 142d11e10 FUN_142d11e10 body=69 status=ok
// SIG undefined FUN_142d11e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11e10(void)

{
  _DAT_14c9ed418 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed420,1);
  return;
}



// FUNCTION 142d11e55 FUN_142d11e55 body=69 status=ok
// SIG undefined FUN_142d11e55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11e55(void)

{
  _DAT_14c9ed430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed438,1);
  return;
}



// FUNCTION 142d11e9a FUN_142d11e9a body=230 status=ok
// SIG undefined FUN_142d11e9a(void)

int FUN_142d11e9a(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar2 = DAT_14c9ed308;
  iVar7 = 0;
  if ((DAT_14ca84ef5 == '\x01') && ((DAT_14ca84ef7 & 1) != 0)) {
    if (param_2 == 2) {
      iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
        uVar6 = 0;
      }
      else if (iVar7 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar3 != DVar4);
      }
      else {
        uVar6 = 1;
      }
      cVar1 = *(char *)(param_1 + 0x28fc);
      iVar7 = 0;
      if (((cVar1 != '\x01') && (iVar7 = 0, DAT_14ca84ef5 == '\x01')) && ((DAT_14ca84ef7 & 1) != 0))
      {
        if (cVar1 == '\x02') {
          iVar7 = 2;
        }
        else if (cVar1 == '\x03') {
          iVar7 = 1;
        }
        else {
          iVar7 = *(int *)(lVar2 + uVar6 * 4);
        }
      }
      iVar5 = 2;
      if (iVar7 < 2) {
        iVar5 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar5) {
        iVar7 = iVar5;
      }
    }
    else {
      iVar7 = 2;
    }
  }
  return iVar7;
}



// FUNCTION 142d11f80 FUN_142d11f80 body=69 status=ok
// SIG undefined FUN_142d11f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11f80(void)

{
  _DAT_14c9ed448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d11fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed450,1);
  return;
}



// FUNCTION 142d11fc5 FUN_142d11fc5 body=69 status=ok
// SIG undefined FUN_142d11fc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d11fc5(void)

{
  _DAT_14c9ed460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d12007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed468,1);
  return;
}



// FUNCTION 142d1202e FUN_142d1202e body=248 status=ok
// SIG undefined FUN_142d1202e(void)

longlong * FUN_142d1202e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c90888();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_30,param_2,DAT_14c9ed4c0);
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_30;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142d12128 FUN_142d12128 body=1933 status=ok
// SIG undefined FUN_142d12128(void)

void FUN_142d12128(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_108 [32];
  ulonglong local_e8;
  longlong local_e0;
  undefined1 local_d8;
  ulonglong local_d0;
  int *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  longlong *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_108;
  lVar13 = *(longlong *)(param_1 + 8);
  uVar17 = *(uint *)(lVar13 + 0x442c + (ulonglong)*(byte *)(lVar13 + 0x44f8) * 4) /
           *(uint *)(lVar13 + 0x43f8);
  local_c0 = (ulonglong)
             (*(int *)(lVar13 + 0x4578) + uVar17 + (uint)(*(int *)(lVar13 + 0x4578) + uVar17 == 0));
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar14 = *(longlong *)(param_2 + 0x70) + 3U & 0xfffffffffffffffc;
  uVar12 = uVar14 + local_c0 * 4;
  local_b8 = param_3;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    lVar13 = local_c0 * 4;
    FUN_140023dd8(puVar1);
    uVar14 = *puVar1 + 3 & 0xfffffffffffffffc;
    uVar12 = lVar13 + uVar14;
  }
  *puVar1 = uVar12;
  local_a0 = (ulonglong)*(uint *)(local_b8 + 0x11708);
  if (*(uint *)(local_b8 + 0x11708) != 0) {
    uVar17 = *(uint *)(DAT_14ca84d28 + 4);
    uVar4 = (**(code **)(*DAT_14c82b500 + 0x20))();
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
    uVar4 = (int)local_a0 + 0x1ffU >> 9;
    if (uVar17 < uVar4) {
      uVar4 = uVar17;
    }
    local_ac = (((int)local_a0 + uVar4) - 1) / uVar4;
    local_a8 = (longlong *)(param_2 + 0x500);
    local_90 = -0x37ffffad77750000;
    local_80 = (ulonglong)(uVar4 + (uVar4 == 0));
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_c8 = (int *)(lVar13 + 0xc60);
    local_98 = (longlong *)(lVar13 + 0x2b8);
    uVar12 = 0;
    local_88 = param_2;
    do {
      uVar4 = local_ac * (int)uVar12;
      uVar17 = (int)local_a0 - uVar4;
      lVar13 = (ulonglong)uVar4 * 0x20 + *(longlong *)(local_b8 + 0x11700);
      if (local_ac < uVar17) {
        uVar17 = local_ac;
      }
      bVar2 = *(byte *)(param_2 + 0x520);
      if (bVar2 == 0) {
        iVar10 = *local_c8;
        if (iVar10 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          iVar10 = *local_c8;
        }
        if ((iVar10 == 0x60000000) || (iVar10 == 0)) {
          *local_c8 = 0x40000010;
        }
        if (uVar17 != 0) {
          uVar11 = 0;
          do {
            lVar8 = *(longlong *)(lVar13 + uVar11 * 0x20);
            *(uint *)(uVar14 + (ulonglong)(*(uint *)(lVar13 + 0x10 + uVar11 * 0x20) >> 1) * 4) =
                 (uint)*(byte *)(lVar8 + 0x8e) << 0x1f |
                 (uint)*(byte *)(lVar8 + 0x8f) << 0x1e |
                 (uint)*(byte *)(lVar8 + 0x89) << 0x1d |
                 (uint)*(byte *)(lVar8 + 0x8b) << 0x1c | *(uint *)(lVar8 + 0x80) & 0xffffff;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar17);
        }
        if ((iVar10 == 0x60000000) || (iVar10 == 0)) {
          *local_c8 = iVar10;
        }
LAB_142d127ab:
        FUN_14473400f(0);
      }
      else {
        plVar5 = TlsGetValue(DAT_14c896140);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar5 = 0;
          plVar5[1] = 0;
          *(undefined4 *)(plVar5 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar5);
        }
        plVar16 = (longlong *)plVar5[1];
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)*plVar5;
          if (plVar16 == (longlong *)0x0) {
            uVar4 = (uint)DAT_14c896180;
            uVar11 = DAT_14c896180;
            uVar3 = local_b0;
            while (DAT_14c896180 = uVar11, local_78 = uVar11, (uVar11 & 0x3ffffff) != 0) {
              local_b0 = uVar4 & 0x3ffffff;
              local_d0 = (uVar11 & 0xfffffffffc000000) + 0x4000000;
              uVar4 = local_b0;
              if (local_d0 >> 0x1a < uVar11 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
                uVar3 = local_b0;
                uVar4 = local_b0;
              }
              local_b0 = uVar3;
              uVar15 = (ulonglong)((uint)uVar11 & 0x3fff);
              local_d0 = local_d0 & 0xfffffffffc000000 |
                         (ulonglong)
                         *(uint *)(*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar4 >> 0xe) * 8) +
                                   0x10 + uVar15 * 0x18);
              LOCK();
              bVar18 = local_78 == DAT_14c896180;
              uVar11 = local_d0;
              if (!bVar18) {
                uVar11 = DAT_14c896180;
              }
              DAT_14c896180 = uVar11;
              UNLOCK();
              if (bVar18) {
                *(undefined4 *)
                 (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar4 >> 0xe) * 8) + uVar15 * 0x18 +
                 0x10) = 0;
                plVar16 = *(longlong **)
                           (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar4 >> 0xe) * 8) + 8 +
                           (ulonglong)(uVar4 & 0x3fff) * 0x18);
                FUN_1447d080c(uVar4);
                plVar5[1] = (longlong)plVar16;
                if (plVar16 == (longlong *)0x0) goto LAB_142d12569;
                goto LAB_142d125a6;
              }
              uVar4 = (uint)DAT_14c896180;
              uVar11 = DAT_14c896180;
              uVar3 = local_b0;
            }
            plVar5[1] = 0;
            local_b0 = uVar3;
LAB_142d12569:
            puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar5[1] = (longlong)puVar6;
            iVar10 = 0xff;
            do {
              puVar7 = puVar6 + 0x20;
              *puVar6 = puVar7;
              iVar10 = iVar10 + -1;
              puVar6 = puVar7;
            } while (iVar10 != 0);
            *puVar7 = 0;
            plVar16 = (longlong *)plVar5[1];
          }
          else {
            plVar5[1] = (longlong)plVar16;
            *plVar5 = 0;
          }
LAB_142d125a6:
          *(undefined4 *)(plVar5 + 2) = 0x100;
          iVar10 = 0x100;
        }
        else {
          iVar10 = (int)plVar5[2];
        }
        plVar5[1] = *plVar16;
        *(int *)(plVar5 + 2) = iVar10 + -1;
        *plVar16 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar16[1] = (longlong)&DAT_100000002;
        plVar16[2] = 0;
        *(undefined4 *)(plVar16 + 3) = 0;
        *(undefined4 *)(plVar16 + 4) = 0xffffffff;
        plVar16[6] = 0;
        plVar16[7] = 0x100000000;
        *(undefined1 *)(plVar16 + 8) = 1;
        plVar16[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar16[0xf] = 0;
        plVar16[0x10] = -0x17ffffffffffffe0;
        plVar16[0x12] = 0;
        plVar16[0x13] = 0x100000000;
        *(undefined2 *)(plVar16 + 0x14) = 0;
        LOCK();
        bVar18 = (char)plVar16[8] == '\x01';
        if (bVar18) {
          *(char *)(plVar16 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar18) {
          FUN_14008cdb0(plVar16 + 8);
        }
        param_2 = local_88;
        *plVar16 = (longlong)&PTR_FUN_14a255cf8;
        if (*(code **)(plVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar16[0xe] + 0x18))(plVar16 + 0xe,plVar16 + 9);
        }
        plVar16[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar16[9] = (longlong)plVar16;
        plVar16[10] = (longlong)plVar16;
        if (*local_98 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(*local_98 + 0x30);
        }
        plVar16[0xf] = lVar8;
        plVar16[0x10] = local_90;
        *(uint *)((longlong)plVar16 + 0x1c) = bVar2 ^ 1;
        plVar16[0x15] = lVar13;
        *(uint *)(plVar16 + 0x16) = uVar17;
        plVar16[0x17] = uVar14;
        *(int *)(plVar16 + 0x18) = (int)local_c0;
        *plVar16 = (longlong)&PTR_FUN_14a255ce8;
        LOCK();
        UNLOCK();
        LOCK();
        UNLOCK();
        local_78 = CONCAT71(local_78._1_7_,1);
        FUN_1447439e4(plVar16);
        if (plVar16 == (longlong *)0x0) goto LAB_142d127ab;
        iVar10 = *(int *)(param_2 + 0x508);
        uVar17 = iVar10 + 1;
        *(uint *)(param_2 + 0x508) = uVar17;
        if (*(uint *)(param_2 + 0x50c) < uVar17) {
          FUN_1401d03aa(local_a8);
        }
        *(longlong **)(*local_a8 + (longlong)iVar10 * 8) = plVar16;
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        FUN_14473400f(0);
        LOCK();
        plVar5 = plVar16 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar16)(plVar16);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != local_80);
  }
  local_e0 = (longlong)((int)local_c0 * 4);
  local_d8 = 1;
  local_e8 = uVar14;
  uVar9 = FUN_144942e63(param_2,L"LumenHardwareRayTracingHitDataBuffer",4);
  *(undefined8 *)(local_b8 + 0x13b00) = uVar9;
  if ((local_70 ^ (ulonglong)local_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d128b6 FUN_142d128b6 body=1238 status=ok
// SIG undefined FUN_142d128b6(void)

void FUN_142d128b6(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined4 *param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined8 uStack_ce;
  longlong local_c0;
  longlong lStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  undefined4 local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = *(undefined8 *)(param_2 + 0x18);
  local_f8 = 8;
  local_f0 = 1;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  if (((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*(ushort *)(param_1 + 0x8a8) * 0x3c + 7) &
       0x60) != 0) && (lVar8 = FUN_1472b0504(0), lVar8 != 0)) {
    lStack_b8 = lVar8;
  }
  local_b0 = (undefined4)*param_4;
  uStack_ac = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a8 = (undefined4)param_4[1];
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0xc);
  local_e8 = 0x4f1a08f64cae0c3d;
  if ((longlong)(int)param_4[1] != 0) {
    lVar8 = 0;
    local_e8 = 0x4f1a08f64cae0c3d;
    do {
      if (*(longlong *)(*param_4 + lVar8) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = *(longlong *)(*(longlong *)(*param_4 + lVar8) + 0x88);
      }
      local_e8 = local_e8 ^ local_e8 * 0x40 + 0x9e3779b9 + (local_e8 >> 2) + lVar14;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)param_4[1] * 8 != lVar8);
  }
  local_f4 = DAT_14ca98728;
  if (DAT_14ca98640 != (code *)0x0) {
    local_f4 = (*DAT_14ca98640)();
  }
  uVar10 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145e2ecd2();
  lVar8 = 0;
  FUN_1448e935e(uVar10,local_68,&DAT_14c9ed578,0);
  FUN_145e2ecd2();
  lVar14 = local_68[0];
  local_128 = local_68[1];
  uVar10 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145e2ecd2();
  FUN_1448e935e(uVar10,local_68,&DAT_14c9ed578,2);
  FUN_145e2ecd2();
  lVar15 = local_68[0];
  local_120 = local_68[1];
  uVar10 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145e2ecd2();
  FUN_1448e935e(uVar10,local_68,&DAT_14c9ed578,3);
  FUN_145e2ecd2();
  lVar4 = local_68[0];
  local_118 = local_68[1];
  uVar10 = *(undefined8 *)(param_3 + 0x13818);
  local_130 = param_3;
  FUN_145e2ecd2();
  FUN_1448e935e(uVar10,local_68,&DAT_14c9ed578,5);
  FUN_145e2ecd2();
  lVar6 = local_68[1];
  lVar5 = local_68[0];
  if (lVar14 != 0) {
    lVar14 = (longlong)*(int *)(lVar14 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(local_128 + 8) + 0x50) + lVar14 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(*(longlong *)(local_128 + 8),lVar14,1);
    }
  }
  local_68[0] = lVar8;
  if (lVar15 == 0) {
    local_68[1] = 0;
  }
  else {
    lVar8 = (longlong)*(int *)(lVar15 + 0xd4);
    local_68[1] = *(longlong *)(*(longlong *)(*(longlong *)(local_120 + 8) + 0x50) + lVar8 * 8);
    if (local_68[1] == 0) {
      local_68[1] = FUN_1400bafc2(*(longlong *)(local_120 + 8),lVar8,1);
    }
  }
  lVar8 = local_130;
  if (lVar4 == 0) {
    local_68[2] = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(lVar4 + 0xd4);
    local_68[2] = *(longlong *)(*(longlong *)(*(longlong *)(local_118 + 8) + 0x50) + lVar14 * 8);
    if (local_68[2] == 0) {
      local_68[2] = FUN_1400bafc2(*(longlong *)(local_118 + 8),lVar14,1);
    }
  }
  if (lVar5 == 0) {
    local_68[3] = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(lVar5 + 0xd4);
    local_68[3] = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x50) + lVar14 * 8);
    if (local_68[3] == 0) {
      local_68[3] = FUN_1400bafc2(*(longlong *)(lVar6 + 8),lVar14,1);
    }
  }
  local_90 = local_68;
  local_88 = 4;
  lVar14 = 0;
  uVar9 = 0x4f1a08f64cae0c3d;
  do {
    if (*(longlong *)((longlong)local_68 + lVar14) == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)(*(longlong *)((longlong)local_68 + lVar14) + 0x88);
    }
    uVar9 = uVar9 ^ uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2) + lVar15;
    lVar14 = lVar14 + 8;
  } while (lVar14 != 0x20);
  uVar16 = 0x9552b72710480035;
  uStack_d8 = (undefined2)uVar9;
  uStack_d6 = (undefined6)(uVar9 >> 0x10);
  FUN_1471dd278(*(undefined8 *)(lVar8 + 0x13818),&local_108);
  if (local_108 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_100 + 8) + 0x50) +
                (longlong)*(int *)(local_108 + 0xd4) * 8);
    if (local_70 == 0) {
      local_70 = FUN_1400bafc2(*(longlong *)(local_100 + 8),(longlong)*(int *)(local_108 + 0xd4),1);
    }
    if (local_70 != 0) {
      uVar16 = *(longlong *)(local_70 + 0x88) + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
    }
  }
  local_a0 = &local_70;
  local_98 = 1;
  local_e0 = uVar16;
  uVar7 = FUN_147413892(&local_f8);
  *param_5 = uVar7;
  uVar10 = FUN_1431e3d59(local_110,&local_f8,0);
  lVar14 = local_c0;
  *(undefined8 *)(lVar8 + 0x13af0) = uVar10;
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_c0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_c0 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar14;
        plVar13 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar13;
            LOCK();
            bVar17 = plVar13 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar17) {
              plVar13 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar17);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar17 = plVar12 != DAT_14ca843c8;
            plVar13 = plVar11;
            if (bVar17) {
              plVar12 = DAT_14ca843c8;
              plVar13 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar13;
            UNLOCK();
          } while (bVar17);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d12d8e FUN_142d12d8e body=1951 status=ok
// SIG undefined FUN_142d12d8e(void)

void FUN_142d12d8e(longlong param_1,longlong param_2,undefined2 *param_3,uint param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 local_158 [40];
  ulonglong local_130;
  undefined4 *local_128;
  undefined2 *local_120;
  uint local_114;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  undefined4 *local_e8;
  undefined2 local_dc;
  undefined2 local_d9;
  undefined2 local_d6;
  undefined2 local_d3;
  undefined2 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_158;
  local_b0 = FUN_1472e1976(param_1 + 0x10);
  local_c0 = &local_b0;
  local_b8 = *(undefined8 *)(param_3 + 0x9d84);
  local_c8 = &local_b8;
  puVar1 = (ulonglong *)(param_3 + 0x9da0);
  puVar4 = *(undefined4 **)(param_3 + 0x9da4);
  local_128 = (undefined4 *)(*(longlong *)(param_3 + 0x9da0) + 7U & 0xfffffffffffffff8);
  puVar15 = local_128 + 8;
  local_120 = param_3;
  local_d0 = param_3;
  if (puVar4 < puVar15) {
    FUN_140023dd8(puVar1);
    puVar4 = *(undefined4 **)(local_120 + 0x9da4);
    local_128 = (undefined4 *)(*(longlong *)(local_120 + 0x9da0) + 7U & 0xfffffffffffffff8);
    puVar15 = local_128 + 8;
  }
  *puVar1 = (ulonglong)puVar15;
  puVar9 = puVar15 + 8;
  if (puVar4 < puVar9) {
    FUN_140023dd8(puVar1);
    puVar15 = (undefined4 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar15 + 8;
  }
  *puVar1 = (ulonglong)puVar9;
  local_114 = (param_4 & 2) >> 1;
  if ((param_4 & 2) != 0) {
    local_d3 = 0;
    FUN_142d1352e(&local_d0,&local_a8);
    puVar4 = local_128;
    *local_128 = local_a8;
    local_128[1] = uStack_a4;
    local_128[2] = (undefined4)uStack_a0;
    local_128[3] = uStack_a0._4_4_;
    local_d6 = 2;
    FUN_142d1352e(&local_d0,&local_a8);
    puVar4[4] = local_a8;
    puVar4[5] = uStack_a4;
    puVar4[6] = (undefined4)uStack_a0;
    puVar4[7] = uStack_a0._4_4_;
    local_d9 = 0x100;
    FUN_142d1352e(&local_d0,&local_a8);
    *puVar15 = local_a8;
    puVar15[1] = uStack_a4;
    puVar15[2] = (undefined4)uStack_a0;
    puVar15[3] = uStack_a0._4_4_;
    local_dc = 0x102;
    FUN_142d1352e(&local_d0);
    puVar15[4] = local_a8;
    puVar15[5] = uStack_a4;
    puVar15[6] = (undefined4)uStack_a0;
    puVar15[7] = uStack_a0._4_4_;
  }
  uVar12 = *(uint *)(local_120 + 0x8b84);
  local_f0 = (ulonglong)uVar12;
  uVar11 = uVar12 + 0x3ff >> 10;
  uVar11 = uVar11 + (uVar11 == 0);
  uVar12 = ((uVar12 + uVar11) - 1) / uVar11;
  local_f8 = (longlong *)(local_120 + 0x9d98);
  FUN_1471dd2e6(local_f8,(ulonglong)uVar11,1);
  local_110 = (longlong *)(param_2 + 0x500);
  local_100 = -0x37ffffad77750000;
  local_108 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
  uVar13 = 0;
  local_e8 = puVar15;
  do {
    puVar15 = local_e8;
    iVar8 = (int)uVar13;
    lVar17 = (ulonglong)(uVar12 * iVar8) * 0x20 + *(longlong *)(local_120 + 0x8b80);
    uVar14 = (int)local_f0 - uVar12 * iVar8;
    if (uVar12 < uVar14) {
      uVar14 = uVar12;
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x2e) = 0;
    if (DAT_14c872d30 == 0) {
      FUN_145bdc178();
    }
    *(undefined8 **)(*local_f8 + uVar13 * 8) = puVar5;
    local_a8 = CONCAT31(local_a8._1_3_,(char)local_114);
    uStack_a0 = local_128;
    bVar2 = *(byte *)(param_2 + 0x520);
    local_98 = puVar15;
    uStack_90 = puVar5;
    local_88 = lVar17;
    uStack_80 = uVar14;
    iStack_7c = iVar8;
    if (bVar2 == 0) {
      FUN_142d29b8e(&local_a8);
LAB_142d134a9:
      FUN_14473400f(0,0);
    }
    else {
      plVar6 = TlsGetValue(DAT_14c896140);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined4 *)(plVar6 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar6);
      }
      plVar16 = (longlong *)plVar6[1];
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)*plVar6;
        if (plVar16 == (longlong *)0x0) {
          do {
            local_78 = DAT_14c896180;
            uVar14 = (uint)DAT_14c896180;
            if ((DAT_14c896180 & 0x3ffffff) == 0) {
              plVar6[1] = 0;
              goto LAB_142d1326c;
            }
            local_130 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
            if (local_130 >> 0x1a < DAT_14c896180 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar10 = (ulonglong)((uVar14 & 0x3ffffff) >> 0xe);
            local_130 = local_130 & 0xfffffffffc000000 |
                        (ulonglong)
                        *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 0x10 +
                                 (ulonglong)(uVar14 & 0x3fff) * 0x18);
            LOCK();
            bVar18 = local_78 != DAT_14c896180;
            uVar3 = local_130;
            if (bVar18) {
              uVar3 = DAT_14c896180;
            }
            DAT_14c896180 = uVar3;
            UNLOCK();
          } while (bVar18);
          *(undefined4 *)
           (*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + (ulonglong)(uVar14 & 0x3fff) * 0x18 + 0x10)
               = 0;
          plVar16 = *(longlong **)
                     (*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 8 +
                     (ulonglong)(uVar14 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar14 & 0x3ffffff);
          plVar6[1] = (longlong)plVar16;
          if (plVar16 == (longlong *)0x0) {
LAB_142d1326c:
            puVar5 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar6[1] = (longlong)puVar5;
            iVar8 = 0xff;
            do {
              puVar7 = puVar5 + 0x20;
              *puVar5 = puVar7;
              iVar8 = iVar8 + -1;
              puVar5 = puVar7;
            } while (iVar8 != 0);
            *puVar7 = 0;
            plVar16 = (longlong *)plVar6[1];
          }
        }
        else {
          plVar6[1] = (longlong)plVar16;
          *plVar6 = 0;
        }
        *(undefined4 *)(plVar6 + 2) = 0x100;
        iVar8 = 0x100;
      }
      else {
        iVar8 = (int)plVar6[2];
      }
      plVar6[1] = *plVar16;
      *(int *)(plVar6 + 2) = iVar8 + -1;
      *plVar16 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar16[1] = (longlong)&DAT_100000002;
      plVar16[2] = 0;
      *(undefined4 *)(plVar16 + 3) = 0;
      *(undefined4 *)(plVar16 + 4) = 0xffffffff;
      plVar16[6] = 0;
      plVar16[7] = 0x100000000;
      *(undefined1 *)(plVar16 + 8) = 1;
      plVar16[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar16[0xf] = 0;
      plVar16[0x10] = -0x17ffffffffffffe0;
      plVar16[0x12] = 0;
      plVar16[0x13] = 0x100000000;
      *(undefined2 *)(plVar16 + 0x14) = 0;
      LOCK();
      bVar18 = (char)plVar16[8] == '\x01';
      if (bVar18) {
        *(char *)(plVar16 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar18) {
        FUN_14008cdb0(plVar16 + 8);
      }
      *plVar16 = (longlong)&PTR_FUN_14a255d18;
      if (*(code **)(plVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar16[0xe] + 0x18))(plVar16 + 0xe,plVar16 + 9);
      }
      plVar16[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar16[9] = (longlong)plVar16;
      plVar16[10] = (longlong)plVar16;
      if (*local_108 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(longlong *)(*local_108 + 0x30);
      }
      plVar16[0xf] = lVar17;
      plVar16[0x10] = local_100;
      *(uint *)((longlong)plVar16 + 0x1c) = bVar2 ^ 1;
      *(undefined4 *)(plVar16 + 0x15) = local_a8;
      *(undefined4 *)((longlong)plVar16 + 0xac) = uStack_a4;
      *(undefined4 *)(plVar16 + 0x16) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)plVar16 + 0xb4) = uStack_a0._4_4_;
      *(undefined4 *)(plVar16 + 0x17) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar16 + 0xbc) = local_98._4_4_;
      *(undefined4 *)(plVar16 + 0x18) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)plVar16 + 0xc4) = uStack_90._4_4_;
      *(undefined4 *)(plVar16 + 0x19) = (undefined4)local_88;
      *(undefined4 *)((longlong)plVar16 + 0xcc) = local_88._4_4_;
      *(uint *)(plVar16 + 0x1a) = uStack_80;
      *(int *)((longlong)plVar16 + 0xd4) = iStack_7c;
      *plVar16 = (longlong)&PTR_FUN_14a255d08;
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,1);
      FUN_1447439e4(plVar16,&local_78);
      if (plVar16 == (longlong *)0x0) goto LAB_142d134a9;
      iVar8 = *(int *)(param_2 + 0x508);
      *(uint *)(param_2 + 0x508) = iVar8 + 1U;
      if (*(uint *)(param_2 + 0x50c) < iVar8 + 1U) {
        FUN_1401d03aa(local_110,iVar8);
      }
      *(longlong **)(*local_110 + (longlong)iVar8 * 8) = plVar16;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      FUN_14473400f(0,0);
      LOCK();
      plVar6 = plVar16 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar16)(plVar16,1);
      }
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == uVar11) {
      if ((local_70 ^ (ulonglong)local_158) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 142d1352e FUN_142d1352e body=1358 status=ok
// SIG undefined FUN_142d1352e(void)

undefined4 * FUN_142d1352e(longlong *param_1,undefined4 *param_2,byte *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ushort *puVar14;
  ushort *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  ushort *puVar20;
  bool bVar21;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = *(undefined8 *)(*param_1 + 0x13818);
  bVar3 = *param_3;
  bVar4 = param_3[1];
  FUN_145e2ecd2();
  FUN_1448e935e(uVar6,&local_58,&DAT_14c9ed578,(uint)bVar4 + (uint)bVar4 * 2 + (uint)bVar3);
  FUN_145e2ecd2();
  if (local_58 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (lVar16 == 0) {
      lVar16 = FUN_1400bafc2(*(longlong *)(local_50 + 8),*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar7 = FUN_14740503d(*(undefined8 *)(*param_1 + 0x13af0),lVar16,1);
  *param_2 = uVar7;
  uVar5 = *(uint *)(local_58 + 0x60);
  param_2[1] = uVar5;
  lVar16 = *param_1;
  puVar2 = (ulonglong *)(lVar16 + 0x13b40);
  uVar19 = *(longlong *)(lVar16 + 0x13b40) + 7U & 0xfffffffffffffff8;
  uVar17 = uVar19 + (ulonglong)uVar5 * 8;
  if (*(ulonglong *)(lVar16 + 0x13b48) < uVar17) {
    lVar16 = (ulonglong)uVar5 * 8;
    FUN_140023dd8(puVar2,(int)lVar16 + 8);
    uVar19 = *puVar2 + 7 & 0xfffffffffffffff8;
    uVar17 = lVar16 + uVar19;
  }
  *puVar2 = uVar17;
  *(ulonglong *)(param_2 + 2) = uVar19;
  FUN_145c90888();
  lVar16 = local_58 + 0xa0;
  uVar17 = *(ulonglong *)(local_58 + 0xa0);
  uVar9 = local_58 + 0xa0 + ((longlong)uVar17 >> 0x18);
  if ((uVar17 & 1) == 0) {
    uVar9 = uVar17;
  }
  if (0 < (longlong)*(int *)(local_58 + 0xa8)) {
    lVar13 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar13 * 4) == DAT_14c9ed4a0) {
        uVar17 = *(ulonglong *)(local_58 + 0xb0);
        uVar9 = local_58 + 0xb0 + ((longlong)uVar17 >> 0x18);
        if ((uVar17 & 1) == 0) {
          uVar9 = uVar17;
        }
        puVar14 = (ushort *)(uVar9 + lVar13);
        goto LAB_142d136f3;
      }
      lVar13 = lVar13 + 2;
    } while ((longlong)*(int *)(local_58 + 0xa8) * 2 != lVar13);
  }
  puVar14 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_142d136f3:
  lVar13 = FUN_1447e4f80();
  uVar17 = *(ulonglong *)(local_58 + 0xa0);
  uVar9 = ((longlong)uVar17 >> 0x18) + lVar16;
  if ((uVar17 & 1) == 0) {
    uVar9 = uVar17;
  }
  if (0 < (longlong)*(int *)(local_58 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar13 + 0x28)) {
        uVar17 = *(ulonglong *)(local_58 + 0xb0);
        uVar9 = local_58 + 0xb0 + ((longlong)uVar17 >> 0x18);
        if ((uVar17 & 1) == 0) {
          uVar9 = uVar17;
        }
        puVar18 = (ushort *)(uVar9 + lVar8);
        goto LAB_142d137a8;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(local_58 + 0xa8) * 2 != lVar8);
  }
  puVar18 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_142d137a8:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
    DAT_14ca4b320 = FUN_145900d44();
    _Init_thread_footer(&DAT_14ca4b328);
  }
  uVar17 = *(ulonglong *)(local_58 + 0xa0);
  uVar9 = ((longlong)uVar17 >> 0x18) + lVar16;
  if ((uVar17 & 1) == 0) {
    uVar9 = uVar17;
  }
  if (0 < (longlong)*(int *)(local_58 + 0xa8)) {
    lVar13 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar13 * 4) == *(longlong *)(DAT_14ca4b320 + 0x28)) {
        uVar17 = *(ulonglong *)(local_58 + 0xb0);
        uVar9 = local_58 + 0xb0 + ((longlong)uVar17 >> 0x18);
        if ((uVar17 & 1) == 0) {
          uVar9 = uVar17;
        }
        puVar15 = (ushort *)(uVar9 + lVar13);
        goto LAB_142d13883;
      }
      lVar13 = lVar13 + 2;
    } while ((longlong)*(int *)(local_58 + 0xa8) * 2 != lVar13);
  }
  puVar15 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_142d13883:
  lVar13 = FUN_145e2f24e();
  uVar17 = *(ulonglong *)(local_58 + 0xa0);
  uVar9 = lVar16 + ((longlong)uVar17 >> 0x18);
  if ((uVar17 & 1) == 0) {
    uVar9 = uVar17;
  }
  if (0 < (longlong)*(int *)(local_58 + 0xa8)) {
    lVar16 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar16 * 4) == *(longlong *)(lVar13 + 0x28)) {
        uVar17 = *(ulonglong *)(local_58 + 0xb0);
        uVar9 = local_58 + 0xb0 + ((longlong)uVar17 >> 0x18);
        if ((uVar17 & 1) == 0) {
          uVar9 = uVar17;
        }
        puVar20 = (ushort *)(uVar9 + lVar16);
        goto LAB_142d13938;
      }
      lVar16 = lVar16 + 2;
    } while ((longlong)*(int *)(local_58 + 0xa8) * 2 != lVar16);
  }
  puVar20 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_142d13938:
  if ((ulonglong)*puVar14 != 0xffff) {
    *(undefined8 *)(uVar19 + (ulonglong)*puVar14 * 8) = *(undefined8 *)param_1[1];
  }
  if ((ulonglong)*puVar18 != 0xffff) {
    *(undefined8 *)(uVar19 + (ulonglong)*puVar18 * 8) = *(undefined8 *)(*param_1 + 0x18);
  }
  if ((ulonglong)*puVar15 != 0xffff) {
    *(undefined8 *)(uVar19 + (ulonglong)*puVar15 * 8) = *(undefined8 *)param_1[2];
  }
  lVar16 = DAT_14ca1c4e0;
  if ((ulonglong)*puVar20 != 0xffff) {
    if (DAT_14ca1c4e0 == 0) {
      *(undefined8 *)(uVar19 + (ulonglong)*puVar20 * 8) = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14ca1c4e0 + 8) = *(int *)(DAT_14ca1c4e0 + 8) + 1;
      UNLOCK();
      *(longlong *)(*(longlong *)(param_2 + 2) + (ulonglong)*puVar20 * 8) = lVar16;
      LOCK();
      puVar1 = (uint *)(lVar16 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar16 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar16 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar16;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar21 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar21) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar21 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar21) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142d13a7e FUN_142d13a7e body=590 status=ok
// SIG undefined FUN_142d13a7e(void)

void FUN_142d13a7e(longlong param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5b;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = *(undefined8 *)(param_3 + 0x13b30);
  local_b8 = &local_58;
  local_50 = *(undefined4 *)(param_3 + 0x13b38);
  local_b0 = 0;
  FUN_1472bab25(param_2,param_1 + 0x90,*(undefined8 *)(param_3 + 0x13af8),
                *(undefined8 *)(param_3 + 0x13af0));
  lVar4 = *(longlong *)(param_3 + 0x13b30);
  *(undefined8 *)(param_3 + 0x13b30) = 0;
  iVar2 = *(int *)(param_3 + 0x13b38);
  local_88 = *(undefined8 *)(param_3 + 0x13b38);
  *(undefined8 *)(param_3 + 0x13b38) = 0;
  uVar5 = *(undefined8 *)(param_3 + 0x13b40);
  uStack_78 = *(undefined8 *)(param_3 + 0x13b48);
  uVar6 = *(undefined8 *)(param_3 + 0x13b50);
  local_68 = *(undefined8 *)(param_3 + 0x13b58);
  uVar3 = *(undefined4 *)(param_3 + 0x13b60);
  uVar1 = *(undefined1 *)(param_3 + 0x13b65);
  *(undefined4 *)(param_3 + 0x13b60) = 0;
  *(undefined1 *)(param_3 + 0x13b65) = 0;
  *(undefined8 *)(param_3 + 0x13b40) = 0;
  *(undefined8 *)(param_3 + 0x13b48) = 0;
  *(undefined8 *)(param_3 + 0x13b50) = 0;
  local_90 = lVar4;
  local_80 = uVar5;
  local_70 = uVar6;
  local_60 = uVar3;
  local_5b = uVar1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    if (iVar2 != 0) {
      lVar11 = 0;
      do {
        lVar7 = *(longlong *)(lVar4 + lVar11);
        if (lVar7 != 0) {
          FUN_14004673c(lVar7 + 0x10,0);
          FUN_1400020a8(lVar7);
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar2 * 8 != lVar11);
    }
  }
  else {
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 9;
    uVar10 = *(undefined4 *)(param_3 + 0x13b3c);
    local_98 = local_68;
    if ((undefined8 *)param_2[1] < puVar9) {
      local_a4 = *(undefined4 *)(param_3 + 0x13b3c);
      local_a0 = uStack_78;
      FUN_140023dd8(param_2,0x50);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 9;
      uStack_78 = local_a0;
      uVar10 = local_a4;
    }
    *param_2 = (ulonglong)puVar9;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a255d28;
    puVar8[2] = lVar4;
    local_90 = 0;
    *(int *)(puVar8 + 3) = iVar2;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar10;
    local_88 = 0;
    puVar8[4] = uVar5;
    puVar8[5] = uStack_78;
    puVar8[6] = uVar6;
    puVar8[7] = local_98;
    *(undefined4 *)(puVar8 + 8) = uVar3;
    *(undefined1 *)((longlong)puVar8 + 0x45) = uVar1;
    local_60 = 0;
    local_5b = 0;
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
  }
  FUN_14004673c(&local_80,0);
  FUN_140046130(&local_90);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d13ccd FUN_142d13ccd body=69 status=ok
// SIG undefined FUN_142d13ccd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13ccd(void)

{
  _DAT_14c9ed760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed768,1);
  return;
}



// FUNCTION 142d13d12 FUN_142d13d12 body=69 status=ok
// SIG undefined FUN_142d13d12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13d12(void)

{
  _DAT_14c9ed778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed780,1);
  return;
}



// FUNCTION 142d13d57 FUN_142d13d57 body=69 status=ok
// SIG undefined FUN_142d13d57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13d57(void)

{
  _DAT_14c9ed790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13d99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed798,1);
  return;
}



// FUNCTION 142d13d9c FUN_142d13d9c body=63 status=ok
// SIG undefined FUN_142d13d9c(void)

ulonglong FUN_142d13d9c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if ((*(int *)(DAT_14c9ed770 + 4) != 0) &&
     (0 < *(int *)(param_2 + 0x55c + (ulonglong)*(byte *)(param_2 + 0x628) * 4))) {
    uVar1 = 0;
    if ((DAT_14c7604b8 != 0) && (uVar1 = 0, DAT_14c7604bc != 0)) {
      uVar1 = ((ulonglong)*(byte *)(param_1 + 0x62) & 0xffffffffffffff02) >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 142d13ddb FUN_142d13ddb body=69 status=ok
// SIG undefined FUN_142d13ddb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13ddb(void)

{
  _DAT_14c9ed7a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13e1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed7b0,1);
  return;
}



// FUNCTION 142d13e20 FUN_142d13e20 body=69 status=ok
// SIG undefined FUN_142d13e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13e20(void)

{
  _DAT_14c9ed7b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed7c0,1);
  return;
}



// FUNCTION 142d13e65 FUN_142d13e65 body=69 status=ok
// SIG undefined FUN_142d13e65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13e65(void)

{
  _DAT_14c9ed7c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed7d0,1);
  return;
}



// FUNCTION 142d13eaa FUN_142d13eaa body=69 status=ok
// SIG undefined FUN_142d13eaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13eaa(void)

{
  _DAT_14c9ed7d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed7e0,1);
  return;
}



// FUNCTION 142d13eef FUN_142d13eef body=69 status=ok
// SIG undefined FUN_142d13eef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13eef(void)

{
  _DAT_14c9ed7e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed7f0,1);
  return;
}



// FUNCTION 142d13f34 FUN_142d13f34 body=69 status=ok
// SIG undefined FUN_142d13f34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13f34(void)

{
  _DAT_14c9ed7f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed800,1);
  return;
}



// FUNCTION 142d13f79 FUN_142d13f79 body=69 status=ok
// SIG undefined FUN_142d13f79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13f79(void)

{
  _DAT_14c9ed808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d13fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed810,1);
  return;
}



// FUNCTION 142d13fbe FUN_142d13fbe body=69 status=ok
// SIG undefined FUN_142d13fbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d13fbe(void)

{
  _DAT_14c9ed818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d14000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed820,1);
  return;
}



// FUNCTION 142d14003 FUN_142d14003 body=69 status=ok
// SIG undefined FUN_142d14003(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d14003(void)

{
  _DAT_14c9ed828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d14045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed830,1);
  return;
}



// FUNCTION 142d14048 FUN_142d14048 body=69 status=ok
// SIG undefined FUN_142d14048(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d14048(void)

{
  _DAT_14c9ed838 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d1408a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed840,1);
  return;
}



// FUNCTION 142d1408d FUN_142d1408d body=69 status=ok
// SIG undefined FUN_142d1408d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d1408d(void)

{
  _DAT_14c9ed848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d140cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed850,1);
  return;
}



// FUNCTION 142d140d2 FUN_142d140d2 body=69 status=ok
// SIG undefined FUN_142d140d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d140d2(void)

{
  _DAT_14c9ed858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d14114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed860,1);
  return;
}



// FUNCTION 142d14117 FUN_142d14117 body=69 status=ok
// SIG undefined FUN_142d14117(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d14117(void)

{
  _DAT_14c9ed868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d14159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed870,1);
  return;
}



// FUNCTION 142d1415c FUN_142d1415c body=69 status=ok
// SIG undefined FUN_142d1415c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d1415c(void)

{
  _DAT_14c9ed880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d1419e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ed888,1);
  return;
}



// FUNCTION 142d141ba FUN_142d141ba body=4240 status=ok
// SIG undefined FUN_142d141ba(void)

ulonglong *
FUN_142d141ba(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7,undefined2 param_8)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong **pplVar18;
  undefined8 *puVar19;
  longlong **pplVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  longlong **pplVar24;
  longlong **pplVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined1 auStack_678 [32];
  undefined8 *local_658;
  int *local_650;
  undefined1 local_648;
  undefined2 local_640;
  longlong local_638;
  ulonglong local_630;
  longlong *local_628;
  int local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  int local_60c;
  longlong local_608;
  ulonglong *local_600;
  int local_5f4;
  int local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  longlong local_5d8;
  undefined8 uStack_5d0;
  int local_5c8;
  int iStack_5c4;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined1 *local_5ac;
  ulonglong local_5a0;
  int local_598;
  int local_594;
  undefined4 local_590;
  int local_58c;
  int local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined1 local_568;
  longlong local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  longlong local_548;
  ulonglong uStack_540;
  undefined8 local_538;
  longlong local_530;
  ulonglong uStack_528;
  undefined8 local_520;
  undefined1 local_518 [64];
  undefined1 *local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8;
  int local_4c0;
  longlong **local_248;
  undefined8 local_238;
  undefined4 auStack_230 [22];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [60];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
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
  ulonglong local_80;
  
  uVar5 = DAT_14c7604e0;
  uVar4 = DAT_14c7604dc;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_678;
  iVar15 = 0x100;
  if (DAT_14c7604e8 < 0x100) {
    iVar15 = DAT_14c7604e8;
  }
  if (iVar15 < 2) {
    iVar15 = 1;
  }
  iVar16 = 6;
  if (DAT_14c7604d8 < 6) {
    iVar16 = DAT_14c7604d8;
  }
  if (iVar16 < 2) {
    iVar16 = 1;
  }
  local_620 = DAT_14c7604ec;
  iVar8 = 8;
  if (8 < DAT_14c7604ec) {
    iVar8 = DAT_14c7604ec;
  }
  local_638 = CONCAT44(local_638._4_4_,iVar8);
  local_60c = DAT_14c7604f8 + -1;
  bVar14 = (byte)local_60c;
  uVar11 = (ulonglong)DAT_14c7604fc;
  local_610 = DAT_14c7604f0;
  local_614 = DAT_14c7604f4;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 2;
  iStack_5c4 = 0;
  local_4c8 = (longlong *)0x0;
  local_4c0 = 0;
  local_618 = DAT_14c7604e4;
  local_61c = DAT_14c9ed878;
  local_628 = (longlong *)param_1;
  FUN_1446efa72(&local_4c8,0,3,0x10);
  local_4c0 = 3;
  *local_4c8 = (longlong)&PTR_LAB_14a258830;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar23 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar23 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar23;
  local_4c8[2] = lVar17;
  *local_4c8 = (longlong)&PTR_FUN_14a255d30;
  local_4c8[3] = param_4;
  *(undefined2 *)(local_4c8 + 4) = param_8;
  local_630 = uVar11;
  local_608 = param_4;
  local_600 = param_2;
  if ((local_4c8 == (longlong *)0x0) || (cVar7 = (**(code **)(*local_4c8 + 0x30))(), cVar7 == '\0'))
  {
    uVar21 = local_630;
    if (local_4c0 == 0) goto LAB_142d144c6;
    if (local_4c8 != (longlong *)0x0) {
      (**(code **)*local_4c8)(local_4c8,0);
      FUN_1446efa72(&local_4c8,0,0,0x10);
      goto LAB_142d144b3;
    }
  }
  else {
    if (iStack_5c4 < 1) {
      iVar8 = (int)uStack_5d0;
      local_5c8 = local_5c8 + -1;
      if (local_5c8 <= (int)uStack_5d0) {
        if (0 < (int)uStack_5d0) {
          iVar22 = 0;
          do {
            if (((*(int *)(local_5d8 + 8 + (longlong)iVar22 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(local_5d8 + (longlong)iVar22 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar2 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(&local_5d8,iVar22);
              FUN_14005b248(&local_5d8);
            }
            else {
              iVar22 = iVar22 + 1;
            }
          } while (iVar22 < (int)uStack_5d0);
        }
        iVar22 = (int)uStack_5d0 * 2;
        local_5c8 = 2;
        if (2 < iVar22) {
          local_5c8 = iVar22;
        }
        if ((local_5c8 < iVar8) && (uStack_5d0._4_4_ != (int)uStack_5d0)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_4c0 != 0) && (local_4c8 != (longlong *)0x0)) {
      (**(code **)(*local_4c8 + 0x38))(local_4c8,auStack_230 + 2);
    }
    uVar26 = uStack_5d0;
    uVar21 = local_630;
    lVar23 = (longlong)(int)uStack_5d0;
    uVar9 = (int)uStack_5d0 + 1;
    uStack_5d0 = CONCAT44(uStack_5d0._4_4_,uVar9);
    if (uStack_5d0._4_4_ < uVar9) {
      FUN_1447a71f6(&local_5d8,uVar26 & 0xffffffff);
    }
    lVar23 = lVar23 * 0x10;
    *(undefined8 *)(local_5d8 + lVar23) = 0;
    *(undefined4 *)(local_5d8 + 8 + lVar23) = 0;
    *(longlong **)(local_5d8 + lVar23) = local_4c8;
    local_4c8 = (longlong *)0x0;
    *(int *)(local_5d8 + 8 + lVar23) = local_4c0;
LAB_142d144b3:
    local_4c0 = 0;
LAB_142d144c6:
    if (local_4c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_5a0 = uVar11 << 0x20 | uVar21;
  local_58c = (2 << (bVar14 & 0x1f)) + local_620;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  lVar23 = 0x8c;
  do {
    *(undefined4 *)((longlong)auStack_230 + lVar23 + -4) = 0;
    *(undefined4 *)((longlong)auStack_230 + lVar23) = 0;
    *(undefined4 *)((longlong)auStack_230 + lVar23 + 4) = 0;
    *(undefined4 *)((longlong)auStack_230 + lVar23 + 8) = 0x3f800000;
    lVar23 = lVar23 + 0x10;
  } while (lVar23 != 0xec);
  lVar23 = 0xec;
  do {
    *(undefined4 *)((longlong)auStack_230 + lVar23 + -4) = 0;
    *(undefined4 *)((longlong)auStack_230 + lVar23) = 0;
    *(undefined4 *)((longlong)auStack_230 + lVar23 + 4) = 0;
    *(undefined4 *)((longlong)auStack_230 + lVar23 + 8) = 0x3f800000;
    lVar23 = lVar23 + 0x10;
  } while (lVar23 != 0x14c);
  local_248 = (longlong **)0x0;
  local_238 = 0x400000000;
  local_4d8 = (undefined1 *)0x0;
  local_4d0 = 0x400000000;
  local_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  local_a8 = 2;
  local_5b8._0_4_ = 0x3fc00000;
  local_5b8._4_4_ = uVar4;
  local_5b0 = uVar5;
  local_5ac = &DAT_3f8000003f800000;
  local_590 = (undefined4)local_638;
  local_588 = local_60c;
  local_584 = 1;
  local_580 = local_610;
  local_57c = local_614;
  local_578 = local_618;
  local_574 = local_61c;
  local_568 = 1;
  local_560 = param_6;
  local_548 = 0;
  uStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_538 = 2;
  local_598 = iVar15;
  local_594 = iVar16;
  FUN_14019d794(&local_548);
  local_530 = 0;
  uStack_528 = 0;
  local_520 = 2;
  FUN_14019d794(&local_530,&local_5d8);
  uVar11 = local_238;
  lVar23 = (longlong)(int)local_238;
  uVar9 = (int)local_238 + 1;
  local_238 = CONCAT44(local_238._4_4_,uVar9);
  if (local_238._4_4_ < uVar9) {
    FUN_1471e8070(&local_4c8,uVar11 & 0xffffffff);
  }
  pplVar18 = local_248;
  if (local_248 == (longlong **)0x0) {
    pplVar18 = &local_4c8;
  }
  puVar12 = &local_5b8;
  pplVar24 = pplVar18 + lVar23 * 0x14;
  for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pplVar24 = (longlong *)*puVar12;
    puVar12 = puVar12 + 1;
    pplVar24 = pplVar24 + 1;
  }
  pplVar24 = pplVar18 + lVar23 * 0x14 + 0xe;
  *pplVar24 = (longlong *)0x0;
  pplVar24[1] = (longlong *)0x0;
  pplVar24[2] = (longlong *)0x2;
  FUN_14019d794(pplVar24,&local_548);
  pplVar18 = pplVar18 + lVar23 * 0x14 + 0x11;
  *pplVar18 = (longlong *)0x0;
  pplVar18[1] = (longlong *)0x0;
  pplVar18[2] = (longlong *)0x2;
  FUN_14019d794(pplVar18,&local_530);
  FUN_144760e21(local_530,uStack_528 & 0xffffffff);
  if (local_530 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(local_548,uStack_540 & 0xffffffff);
  plVar2 = local_628;
  if (local_548 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar11 = local_4d0;
  lVar23 = *(longlong *)(param_6 + 0x3108);
  lVar17 = (longlong)(int)local_4d0;
  uVar9 = (int)local_4d0 + 1;
  local_4d0 = CONCAT44(local_4d0._4_4_,uVar9);
  if (local_4d0._4_4_ < uVar9) {
    FUN_1471e8196(local_518,uVar11 & 0xffffffff);
  }
  puVar10 = local_4d8;
  if (local_4d8 == (undefined1 *)0x0) {
    puVar10 = local_518;
  }
  *(longlong *)(puVar10 + lVar17 * 0x10) = lVar23 + 0x1ae0;
  *(undefined4 **)(puVar10 + lVar17 * 0x10 + 8) = auStack_230 + 2;
  local_650 = (int *)CONCAT62(local_650._2_6_,param_8);
  local_658 = (undefined8 *)param_5;
  FUN_14019d3d0(plVar2,&local_5b8,param_3,param_6);
  uVar11 = local_238;
  if ((longlong)(int)uStack_528 != 0) {
    lVar23 = 0;
    do {
      if ((*(int *)(local_530 + 8 + lVar23) != 0) && (*(longlong *)(local_530 + lVar23) != 0))
      goto LAB_142d14837;
      lVar23 = lVar23 + 0x10;
    } while ((longlong)(int)uStack_528 * 0x10 != lVar23);
  }
  if ((longlong)(int)uStack_540 != 0) {
    lVar23 = 0;
    do {
      if ((*(int *)(local_548 + 8 + lVar23) != 0) && (*(longlong *)(local_548 + lVar23) != 0))
      goto LAB_142d14837;
      lVar23 = lVar23 + 0x10;
    } while ((longlong)(int)uStack_540 * 0x10 != lVar23);
  }
LAB_142d14958:
  local_648 = *(undefined1 *)((longlong)plVar2 + 0xda8);
  local_658 = *(undefined8 **)((longlong)plVar2 + 8);
  local_650 = (int *)((longlong)plVar2 + 0x98);
  local_640 = param_8;
  FUN_142d1524b(param_3,param_5,&local_4c8,local_518);
  lVar23 = local_608;
  local_a0 = DAT_14ca83a40;
  uStack_b0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  local_a8 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_86 = 0;
  local_b8 = &DAT_00020008;
  local_85 = 9;
  local_8c = 0x10001;
  local_88 = 0x101;
  local_98 = 0;
  local_83 = 0xff;
  iVar15 = (int)*(undefined8 *)(local_608 + 0x20);
  local_94 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_94 = iVar15;
  }
  if (local_94 < 2) {
    local_94 = 1;
  }
  iVar15 = (int)((ulonglong)*(undefined8 *)(local_608 + 0x20) >> 0x20);
  local_90 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_90 = iVar15;
  }
  if (local_90 < 2) {
    local_90 = 1;
  }
  plVar2 = (longlong *)(param_3 + 0x70);
  uVar21 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar21 + 0x120;
  if (*(ulonglong *)(param_3 + 0x78) < uVar11) {
    FUN_140023dd8(plVar2,0x128);
    uVar21 = *plVar2 + 7U & 0xfffffffffffffff8;
    uVar11 = uVar21 + 0x120;
  }
  *(ulonglong *)(param_3 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar21,L"DiffuseIndirect",&local_b8,0);
  iVar15 = *(int *)(param_3 + 0x180);
  *(uint *)(param_3 + 0x180) = iVar15 + 1U;
  if (*(uint *)(param_3 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(param_3 + 0x178,iVar15);
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar15 * 8) = uVar21;
  *(int *)(uVar21 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
  local_a0 = DAT_14ca83a40;
  uStack_b0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  local_a8 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  iVar15 = (int)*(undefined8 *)(lVar23 + 0x20);
  local_94 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_94 = iVar15;
  }
  if (local_94 < 2) {
    local_94 = 1;
  }
  iVar15 = (int)((ulonglong)*(undefined8 *)(lVar23 + 0x20) >> 0x20);
  local_90 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_90 = iVar15;
  }
  local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_86 = 0;
  local_b8 = &DAT_00020008;
  local_85 = 9;
  local_8c = 0x10001;
  local_88 = 0x101;
  local_98 = 0;
  local_83 = 0xff;
  if (local_90 < 2) {
    local_90 = 1;
  }
  uVar26 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar26 + 0x120;
  if (*(ulonglong *)(param_3 + 0x78) < uVar11) {
    FUN_140023dd8(plVar2,0x128);
    uVar26 = *plVar2 + 7U & 0xfffffffffffffff8;
    uVar11 = uVar26 + 0x120;
  }
  *(ulonglong *)(param_3 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar26,L"RoughSpecularIndirect",&local_b8,0);
  iVar15 = *(int *)(param_3 + 0x180);
  *(uint *)(param_3 + 0x180) = iVar15 + 1U;
  if (*(uint *)(param_3 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(param_3 + 0x178,iVar15);
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar15 * 8) = uVar26;
  *(int *)(uVar26 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
  puVar27 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar27 + 0x3c;
  if (*(undefined8 **)(param_3 + 0x78) < puVar12) {
    FUN_140023dd8(plVar2,0x1f0);
    puVar27 = (undefined8 *)(*plVar2 + 0xfU & 0xfffffffffffffff0);
    puVar12 = puVar27 + 0x3c;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar12;
  *puVar27 = &PTR_FUN_14a255dd8;
  puVar12 = puVar27 + 2;
  FUN_1471e8292(puVar12);
  iVar15 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar15 + 1U;
  if (*(uint *)(param_3 + 0xa4) < iVar15 + 1U) {
    FUN_1448cfae8(param_3 + 0x98,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar15 * 8) = puVar27;
  uVar1 = *(undefined1 *)(uVar21 + 0x94);
  puVar19 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar13) {
    FUN_140023dd8(plVar2,0x50);
    puVar19 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 9;
  }
  lVar23 = param_3 + 0x198;
  *(undefined8 **)(param_3 + 0x70) = puVar13;
  puVar19[1] = *(undefined8 *)(uVar21 + 8);
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 0;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar19 + 5) = 0;
  *puVar19 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar19 + 6) = uVar1;
  *(undefined1 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
  puVar19[8] = uVar21;
  iVar15 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar15 + 1U;
  local_628 = plVar2;
  if (*(uint *)(param_3 + 0x1a4) < iVar15 + 1U) {
    local_638 = lVar23;
    FUN_1447568fc(lVar23,iVar15);
    lVar23 = local_638;
  }
  plVar2 = local_628;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar15 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  *puVar12 = puVar19;
  uVar1 = *(undefined1 *)(uVar26 + 0x94);
  puVar19 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar13) {
    local_638 = lVar23;
    FUN_140023dd8(local_628,0x50);
    puVar19 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 9;
    lVar23 = local_638;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar13;
  puVar19[1] = *(undefined8 *)(uVar26 + 8);
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 0;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar19 + 5) = 0;
  *puVar19 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar19 + 6) = uVar1;
  *(undefined1 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar19 + 0x35) = 0;
  puVar19[8] = uVar26;
  iVar15 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(lVar23,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar15 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar27[3] = puVar19;
  memcpy(puVar27 + 4,auStack_230 + 2,0x168);
  lVar23 = FUN_1447e4f80();
  cVar7 = *(char *)(lVar23 + 0x41);
  if (*(char *)(lVar23 + 0x41) == '\x03') {
    cVar7 = '\x02';
  }
  puVar27[0x34] = *(undefined8 *)(param_6 + 0x18);
  *(char *)(puVar27 + 0x35) = cVar7;
  uVar3 = *(undefined8 *)(local_608 + 0x198);
  lVar23 = FUN_14482e3b2();
  cVar7 = *(char *)(lVar23 + 0x41);
  if (cVar7 == '\x03') {
    cVar7 = '\x02';
  }
  puVar27[0x36] = uVar3;
  *(char *)(puVar27 + 0x37) = cVar7;
  uVar3 = *(undefined8 *)(param_6 + 0x118d0);
  lVar23 = FUN_144a2c9be();
  cVar7 = *(char *)(lVar23 + 0x41);
  if (cVar7 == '\x03') {
    cVar7 = '\x02';
  }
  puVar27[0x38] = uVar3;
  *(char *)(puVar27 + 0x39) = cVar7;
  FUN_142d3fd2b(param_6,puVar27 + 0x32);
  *(undefined4 *)(puVar27 + 0x3a) = DAT_14c760500;
  *(undefined4 *)((longlong)puVar27 + 0x1d4) = DAT_14c760504;
  uVar3 = *(undefined8 *)(param_6 + 0x13818);
  FUN_145f7de2a();
  FUN_1448e935e(uVar3,&local_b8,&DAT_14c9eda20,0);
  FUN_145f7de2a();
  local_5e8 = (undefined4)local_b8;
  uStack_5e4 = local_b8._4_4_;
  uStack_5e0 = (undefined4)uStack_b0;
  uStack_5dc = uStack_b0._4_4_;
  iVar16 = *(int *)(param_6 + 0x3104) - *(int *)(param_6 + 0x30fc);
  iVar15 = iVar16 + 7;
  local_5f0 = iVar16 + 0xe;
  if (-1 < iVar15) {
    local_5f0 = iVar15;
  }
  local_5f0 = local_5f0 >> 3;
  iVar16 = *(int *)(param_6 + 0x3100) - *(int *)(param_6 + 0x30f8);
  iVar15 = iVar16 + 7;
  local_5f4 = iVar16 + 0xe;
  if (-1 < iVar15) {
    local_5f4 = iVar15;
  }
  local_5f4 = local_5f4 >> 3;
  local_650 = &local_5f4;
  local_5ec = 1;
  local_658 = puVar12;
  FUN_1471dd5d0(param_3,&local_b8,param_8);
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_b8,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_b8);
    if (local_b8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar6 = local_600;
  if ((DAT_14c760a84 < *(int *)(param_3 + 0x130)) &&
     (lVar23 = *(longlong *)(*(longlong *)(param_3 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar23 != 0)) {
    lVar23 = lVar23 + 8;
  }
  else {
    lVar23 = 0;
  }
  local_600[2] = 0;
  local_600[3] = 0;
  *local_600 = uVar21;
  local_600[1] = *(ulonglong *)(lVar23 + 8);
  local_600[2] = uVar26;
  FUN_144760e21(local_530,uStack_528 & 0xffffffff);
  if (local_530 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(local_548,uStack_540 & 0xffffffff);
  if (local_548 != 0) {
    FUN_1400020a8();
  }
  if (local_4d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140162c2c(&local_4c8);
  FUN_144760e21(local_5d8,uStack_5d0 & 0xffffffff);
  if (local_5d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_678) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142d14837:
  lVar23 = (longlong)(int)local_238;
  uVar9 = (int)local_238 + 1;
  local_238 = CONCAT44(local_238._4_4_,uVar9);
  if (local_238._4_4_ < uVar9) {
    FUN_1471e8070(&local_4c8,uVar11 & 0xffffffff);
  }
  pplVar18 = &local_4c8;
  if (local_248 != (longlong **)0x0) {
    pplVar18 = local_248;
  }
  pplVar24 = pplVar18 + lVar23 * 0x14;
  pplVar20 = (longlong **)&local_5b8;
  pplVar25 = pplVar24;
  for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pplVar25 = *pplVar20;
    pplVar20 = pplVar20 + 1;
    pplVar25 = pplVar25 + 1;
  }
  pplVar18[lVar23 * 0x14 + 0xe] = (longlong *)0x0;
  (pplVar18 + lVar23 * 0x14 + 0xe)[1] = (longlong *)0x0;
  pplVar18[lVar23 * 0x14 + 0x10] = (longlong *)0x2;
  if ((longlong **)&local_5b8 == pplVar24) {
    pplVar24[0x11] = (longlong *)0x0;
    pplVar24[0x12] = (longlong *)0x0;
    pplVar24[0x13] = (longlong *)0x2;
  }
  else {
    FUN_1417683dc(pplVar18 + lVar23 * 0x14 + 0xe,&local_548);
    pplVar24[0x11] = (longlong *)0x0;
    pplVar24[0x12] = (longlong *)0x0;
    pplVar24[0x13] = (longlong *)0x2;
    FUN_1417683dc(pplVar24 + 0x11,&local_530);
  }
  uVar11 = local_4d0;
  lVar23 = *(longlong *)(param_6 + 0x3108);
  lVar17 = (longlong)(int)local_4d0;
  uVar9 = (int)local_4d0 + 1;
  local_4d0 = CONCAT44(local_4d0._4_4_,uVar9);
  if (local_4d0._4_4_ < uVar9) {
    FUN_1471e8196(local_518,uVar11 & 0xffffffff);
  }
  puVar10 = local_518;
  if (local_4d8 != (undefined1 *)0x0) {
    puVar10 = local_4d8;
  }
  *(longlong *)(puVar10 + lVar17 * 0x10) = lVar23 + 7000;
  *(undefined8 *)(puVar10 + lVar17 * 0x10 + 8) = param_7;
  goto LAB_142d14958;
}



// FUNCTION 142d1524b FUN_142d1524b body=63080 status=FAIL
// SIG undefined FUN_142d1524b(void)
/* DECOMPILE FAILED */

// FUNCTION 142d248b4 FUN_142d248b4 body=69 status=ok
// SIG undefined FUN_142d248b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d248b4(void)

{
  _DAT_14c9edae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d248f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edae8,1);
  return;
}



// FUNCTION 142d248f9 FUN_142d248f9 body=69 status=ok
// SIG undefined FUN_142d248f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d248f9(void)

{
  _DAT_14c9edaf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d2493b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb00,1);
  return;
}



// FUNCTION 142d2493e FUN_142d2493e body=69 status=ok
// SIG undefined FUN_142d2493e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d2493e(void)

{
  _DAT_14c9edb08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d24980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb10,1);
  return;
}



// FUNCTION 142d24983 FUN_142d24983 body=69 status=ok
// SIG undefined FUN_142d24983(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d24983(void)

{
  _DAT_14c9edb18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d249c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb20,1);
  return;
}



// FUNCTION 142d249c8 FUN_142d249c8 body=69 status=ok
// SIG undefined FUN_142d249c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d249c8(void)

{
  _DAT_14c9edb28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d24a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb30,1);
  return;
}



// FUNCTION 142d24a0d FUN_142d24a0d body=69 status=ok
// SIG undefined FUN_142d24a0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d24a0d(void)

{
  _DAT_14c9edb38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d24a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb40,1);
  return;
}



// FUNCTION 142d24a52 FUN_142d24a52 body=69 status=ok
// SIG undefined FUN_142d24a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d24a52(void)

{
  _DAT_14c9edb48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d24a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb50,1);
  return;
}



// FUNCTION 142d24a97 FUN_142d24a97 body=69 status=ok
// SIG undefined FUN_142d24a97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d24a97(void)

{
  _DAT_14c9edb58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d24ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb60,1);
  return;
}



// FUNCTION 142d24adc FUN_142d24adc body=69 status=ok
// SIG undefined FUN_142d24adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d24adc(void)

{
  _DAT_14c9edb68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d24b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb70,1);
  return;
}



// FUNCTION 142d24b21 FUN_142d24b21 body=69 status=ok
// SIG undefined FUN_142d24b21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d24b21(void)

{
  _DAT_14c9edb78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d24b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb80,1);
  return;
}



// FUNCTION 142d24b66 FUN_142d24b66 body=3367 status=ok
// SIG undefined FUN_142d24b66(void)

void FUN_142d24b66(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d0;
  wchar_t *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint local_9c;
  undefined8 local_98;
  ulonglong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar5 = *(ulonglong **)(param_1 + 0x18);
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar16 = *(uint *)((longlong)puVar5 + 0x17c);
  if (uVar16 != uVar6) {
    *(uint *)((longlong)puVar5 + 0x17c) = uVar6;
    puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar7 + 3;
    if ((undefined8 *)puVar5[1] < puVar10) {
      FUN_140023dd8(puVar5,0x20);
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar7 + 3;
    }
    *puVar5 = (ulonglong)puVar10;
    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
    *(undefined8 **)puVar5[6] = puVar7;
    puVar5[6] = (ulonglong)(puVar7 + 1);
    uVar13 = *(undefined4 *)((longlong)puVar5 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar13;
  }
  lVar8 = **(longlong **)(param_4 + 8);
  local_a8 = param_3;
  local_9c = uVar16;
  local_90 = puVar5;
  if (*(char *)(lVar8 + 0x23d9) == '\x01') {
    lVar11 = *(longlong *)(lVar8 + 0x13ad8);
    if (lVar11 != 0) goto LAB_142d24c4d;
    uVar16 = *(uint *)(lVar8 + 0x1de0);
    if (uVar16 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
        }
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x3108);
  }
  else {
    uVar16 = *(uint *)(lVar8 + 0x1de0);
    if (uVar16 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
        }
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x10);
  }
  if (lVar8 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(lVar8 + 0x24);
  }
  lVar11 = FUN_140c6b718(param_5,uVar13,iVar15);
LAB_142d24c4d:
  lVar9 = local_a8;
  iVar15 = *(int *)(lVar11 + 0x3c + (ulonglong)*(byte *)(lVar11 + 0x108) * 4) * 10;
  uVar2 = (ulonglong)(iVar15 + -1 + (uint)(iVar15 == 0)) * 2 + 1;
  lVar8 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  lVar8 = FUN_1448cfc4a(param_1,lVar11 + 0x140,0x10 << ((byte)lVar8 & 0x1f),L"Lumen.Cards");
  cVar3 = *(char *)(lVar8 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 9;
  local_b8 = plVar1;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(plVar1,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 9;
  }
  local_b0 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar7[1] = *(undefined8 *)(lVar8 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar8;
  iVar15 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_b0,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(lVar9 + 0x88) = puVar7;
  if (*(char *)(lVar11 + 1) == '\x01') {
    *(undefined4 *)(lVar11 + 0x118) = 0;
    if (*(int *)(lVar11 + 0x11c) < 0) {
      FUN_14481578e(lVar11 + 0x110,0);
    }
    *(undefined4 *)(lVar11 + 0x138) = 0;
    if (0 < *(int *)(lVar11 + 0x3c + (ulonglong)*(byte *)(lVar11 + 0x108) * 4)) {
      iVar15 = 0;
      do {
        FUN_1447f585c(lVar11 + 0x110,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar11 + 0x3c + (ulonglong)*(byte *)(lVar11 + 0x108) * 4));
    }
  }
  if (0 < *(int *)(lVar11 + 0x118)) {
    local_c0 = &local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14a256290;
    local_88 = FUN_142d2c82c;
    local_c8 = L"Lumen.CardUploadBuffer";
    local_d0 = 0xa0;
    local_d8 = *(int *)(lVar11 + 0x118);
    local_60 = lVar11;
    FUN_1402bfb00(param_2,param_1,lVar11 + 0x148,lVar8);
    if (local_88 != (code *)0x0) {
      pppuVar12 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar12 = &local_68;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  if (*(char *)(lVar11 + 1) == '\0') {
    iVar15 = *(int *)(lVar11 + 400);
    lVar8 = local_a8;
  }
  else {
    *(undefined4 *)(lVar11 + 0x500) = 0;
    if (*(int *)(lVar11 + 0x504) < 0) {
      FUN_14481578e(lVar11 + 0x4f8,0);
    }
    lVar8 = local_a8;
    *(undefined4 *)(lVar11 + 0x520) = 0;
    if (0 < *(int *)(lVar11 + 0x55c + (ulonglong)*(byte *)(lVar11 + 0x628) * 4)) {
      iVar15 = 0;
      do {
        FUN_1447f585c(lVar11 + 0x4f8,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar11 + 0x55c + (ulonglong)*(byte *)(lVar11 + 0x628) * 4));
    }
    *(undefined4 *)(lVar11 + 0x270) = 0;
    if (*(int *)(lVar11 + 0x274) < 0) {
      FUN_14481578e(lVar11 + 0x268,0);
    }
    *(undefined4 *)(lVar11 + 0x290) = 0;
    if (0 < *(int *)(lVar11 + 0x2cc + (ulonglong)*(byte *)(lVar11 + 0x398) * 4)) {
      iVar15 = 0;
      do {
        FUN_1447f585c(lVar11 + 0x268,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar11 + 0x2cc + (ulonglong)*(byte *)(lVar11 + 0x398) * 4));
    }
    *(undefined4 *)(lVar11 + 0x160) = 0;
    if (*(int *)(lVar11 + 0x164) < 0) {
      FUN_14481578e(lVar11 + 0x158,0);
    }
    *(undefined4 *)(lVar11 + 0x180) = 0;
    iVar15 = *(int *)(lVar11 + 400);
    if (0 < iVar15) {
      iVar14 = 0;
      do {
        FUN_1447f585c(lVar11 + 0x158,iVar14);
        iVar14 = iVar14 + 1;
        iVar15 = *(int *)(lVar11 + 400);
      } while (iVar14 < iVar15);
    }
  }
  uVar2 = (ulonglong)(iVar15 * 2 + -1 + (uint)(iVar15 * 2 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = FUN_1448cfc4a(param_1,lVar11 + 0x1c8,0x10 << ((byte)lVar9 & 0x1f),L"Lumen.PrimitiveGroup")
  ;
  plVar1 = local_b8;
  cVar3 = *(char *)(lVar9 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_b8,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar7[1] = *(undefined8 *)(lVar9 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar9;
  iVar15 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_b0,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(lVar8 + 0xa0) = puVar7;
  if (0 < *(int *)(lVar11 + 0x160)) {
    local_c0 = &local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14a256210;
    local_88 = FUN_142d2bb9e;
    local_c8 = L"Lumen.PrimitiveGroupUpload";
    local_d0 = 0x20;
    local_d8 = *(int *)(lVar11 + 0x160);
    local_60 = lVar11;
    FUN_1402bfb00(param_2,param_1,lVar11 + 0x1d0,lVar9);
    if (local_88 != (code *)0x0) {
      pppuVar12 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar12 = &local_68;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  iVar15 = *(int *)(lVar11 + 0x2cc + (ulonglong)*(byte *)(lVar11 + 0x398) * 4) * 6;
  uVar2 = (ulonglong)(iVar15 + -1 + (uint)(iVar15 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = FUN_1448cfc4a(param_1,lVar11 + 0x4e0,0x10 << ((byte)lVar9 & 0x1f),L"Lumen.MeshCards");
  plVar1 = local_b8;
  cVar3 = *(char *)(lVar9 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_b8,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar7[1] = *(undefined8 *)(lVar9 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar9;
  iVar15 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_b0,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(lVar8 + 0x90) = puVar7;
  if (0 < *(int *)(lVar11 + 0x270)) {
    local_c0 = &local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14a256230;
    local_88 = FUN_142d2be7a;
    local_c8 = L"Lumen.MeshCardsUpload";
    local_d0 = 0x60;
    local_d8 = *(int *)(lVar11 + 0x270);
    local_60 = lVar11;
    FUN_1402bfb00(param_2,param_1,lVar11 + 0x4e8,lVar9);
    if (local_88 != (code *)0x0) {
      pppuVar12 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar12 = &local_68;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  iVar15 = *(int *)(lVar11 + 0x55c + (ulonglong)*(byte *)(lVar11 + 0x628) * 4) * 3;
  uVar2 = (ulonglong)(iVar15 + -1 + (uint)(iVar15 == 0)) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = FUN_1448cfc4a(param_1,lVar11 + 0x630,0x10 << ((byte)lVar9 & 0x1f),L"Lumen.Heightfield");
  plVar1 = local_b8;
  cVar3 = *(char *)(lVar9 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_b8,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar7[1] = *(undefined8 *)(lVar9 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar9;
  iVar15 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_b0,iVar15);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(lVar8 + 0x98) = puVar7;
  if (0 < *(int *)(lVar11 + 0x500)) {
    local_c0 = &local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14a256250;
    local_88 = FUN_142d2c1ea;
    local_c8 = L"Lumen.HeightfieldUpload";
    local_d0 = 0x30;
    local_d8 = *(int *)(lVar11 + 0x500);
    local_60 = lVar11;
    FUN_1402bfb00(param_2,param_1,lVar11 + 0x638,lVar9);
    if (local_88 != (code *)0x0) {
      pppuVar12 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar12 = &local_68;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  if (*(char *)(lVar11 + 1) == '\x01') {
    *(undefined4 *)(lVar11 + 0x780) = 0;
    if (*(int *)(lVar11 + 0x784) < 0) {
      FUN_14481578e(lVar11 + 0x778,0);
    }
    *(undefined4 *)(lVar11 + 0x7a0) = 0;
    if (0 < *(int *)(param_5 + 0x3338)) {
      iVar15 = 0;
      do {
        FUN_1447f585c(lVar11 + 0x778,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_5 + 0x3338));
    }
  }
  iVar15 = DAT_14c873968;
  uVar16 = *(uint *)(param_5 + 0x413c + (ulonglong)*(byte *)(param_5 + 0x4208) * 4);
  uVar6 = 0x1000000;
  if (uVar16 < 0x1000000) {
    uVar6 = uVar16;
  }
  uVar2 = (ulonglong)((uVar6 - 1) + (uint)(uVar6 == 0)) * 2 + 1;
  lVar8 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar6 = 1 << ((byte)lVar8 & 0x1f);
  uVar16 = 0x400;
  if (0x400 < uVar6) {
    uVar16 = uVar6;
  }
  local_78 = (undefined ***)0x0;
  local_80 = 0x10119;
  local_88 = (code *)CONCAT44(uVar16 * DAT_14c873968 >> 2,4);
  local_98 = param_2;
  lVar8 = FUN_1447f2a09(param_1,lVar11 + 0x7a8,&local_88,
                        L"Lumen.SceneInstanceIndexToMeshCardsIndexBuffer");
  plVar1 = local_b8;
  cVar3 = *(char *)(lVar8 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_b8,0x50);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar7 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar7[1] = *(undefined8 *)(lVar8 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 3;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *puVar7 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar7 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
  puVar7[7] = 0;
  puVar7[8] = lVar8;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(local_b0,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(local_a8 + 0xa8) = puVar7;
  if ((longlong)*(int *)(lVar11 + 0x780) != 0) {
    lVar9 = 0;
    iVar14 = 0;
    do {
      iVar4 = *(int *)(*(longlong *)(lVar11 + 0x778) + lVar9);
      if (iVar4 < *(int *)(param_5 + 0x3338)) {
        iVar14 = iVar14 + *(int *)(*(longlong *)
                                    (*(longlong *)(param_5 + 0x3330) + (longlong)iVar4 * 8) + 0x208)
        ;
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)*(int *)(lVar11 + 0x780) * 4 != lVar9);
    if (iVar14 != 0) {
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a256270;
      local_58 = param_5;
      local_88 = FUN_142d2c66e;
      local_c8 = L"Lumen.SceneInstanceIndexToMeshCardsIndexUploadBuffer";
      local_d0 = iVar15;
      local_d8 = iVar14;
      local_c0 = &local_88;
      local_60 = lVar11;
      local_50 = uVar16;
      FUN_1402bfb00(local_98,param_1,lVar11 + 0x7b0,lVar8);
      if (local_88 != (code *)0x0) {
        pppuVar12 = &local_68;
        if (local_78 != (undefined ***)0x0) {
          pppuVar12 = local_78;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
  }
  puVar5 = local_90;
  *(undefined1 *)(lVar11 + 1) = 0;
  if (*(uint *)((longlong)local_90 + 0x17c) != local_9c) {
    *(uint *)((longlong)local_90 + 0x17c) = local_9c;
    puVar7 = (undefined8 *)(*local_90 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar7 + 3;
    if ((undefined8 *)local_90[1] < puVar10) {
      FUN_140023dd8(local_90,0x20);
      puVar7 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar7 + 3;
    }
    *puVar5 = (ulonglong)puVar10;
    *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
    *(undefined8 **)puVar5[6] = puVar7;
    puVar5[6] = (ulonglong)(puVar7 + 1);
    uVar13 = *(undefined4 *)((longlong)puVar5 + 0x17c);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar7 + 2) = uVar13;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142d2588e FUN_142d2588e body=130 status=ok
// SIG undefined FUN_142d2588e(void)

void FUN_142d2588e(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_4 == '\0') {
    if ((longlong)*(int *)(param_2 + 0x28) < 0) {
      puVar5 = (uint *)((longlong)*(int *)(param_2 + 0x24) * 0x20 + *(longlong *)(param_1 + 0x4a8));
    }
    else {
      puVar5 = (uint *)((longlong)*(int *)(param_2 + 0x28) * 0x20 + *(longlong *)(param_1 + 0x3a0));
    }
    *(undefined8 *)(puVar5 + 6) = param_3[2];
    uVar4 = param_3[1];
    *(undefined8 *)(puVar5 + 2) = *param_3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    uVar7 = ~*(uint *)(param_2 + 0x1c) >> 0x1f;
    uVar2 = *puVar5;
    *puVar5 = uVar2 & 0xfffffffe | uVar7;
    *puVar5 = (uVar2 & 0xfffffffc | uVar7) + (*(uint *)(param_2 + 0x34) & 1) * 2;
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x4a8);
  lVar6 = (longlong)*(int *)(param_2 + 0x24) * 0x20;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = param_3[2];
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar6);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  return;
}



// FUNCTION 142d25910 FUN_142d25910 body=69 status=ok
// SIG undefined FUN_142d25910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25910(void)

{
  _DAT_14c9edb90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edb98,1);
  return;
}



// FUNCTION 142d25955 FUN_142d25955 body=69 status=ok
// SIG undefined FUN_142d25955(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25955(void)

{
  _DAT_14c9edba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edba8,1);
  return;
}



// FUNCTION 142d2599a FUN_142d2599a body=69 status=ok
// SIG undefined FUN_142d2599a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d2599a(void)

{
  _DAT_14c9edbb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d259dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edbb8,1);
  return;
}



// FUNCTION 142d259df FUN_142d259df body=69 status=ok
// SIG undefined FUN_142d259df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d259df(void)

{
  _DAT_14c9edbc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edbc8,1);
  return;
}



// FUNCTION 142d25a24 FUN_142d25a24 body=69 status=ok
// SIG undefined FUN_142d25a24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25a24(void)

{
  _DAT_14c9edbd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edbd8,1);
  return;
}



// FUNCTION 142d25a69 FUN_142d25a69 body=69 status=ok
// SIG undefined FUN_142d25a69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25a69(void)

{
  _DAT_14c9edbe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edbe8,1);
  return;
}



// FUNCTION 142d25aae FUN_142d25aae body=69 status=ok
// SIG undefined FUN_142d25aae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25aae(void)

{
  _DAT_14c9edbf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9edc00,1);
  return;
}



// FUNCTION 142d25b47 FUN_142d25b47 body=69 status=ok
// SIG undefined FUN_142d25b47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25b47(void)

{
  _DAT_14c9ee428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee430,1);
  return;
}



// FUNCTION 142d25b8c FUN_142d25b8c body=69 status=ok
// SIG undefined FUN_142d25b8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25b8c(void)

{
  _DAT_14c9ee438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee440,1);
  return;
}



// FUNCTION 142d25bd1 FUN_142d25bd1 body=69 status=ok
// SIG undefined FUN_142d25bd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25bd1(void)

{
  _DAT_14c9ee448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee450,1);
  return;
}



// FUNCTION 142d25c16 FUN_142d25c16 body=69 status=ok
// SIG undefined FUN_142d25c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25c16(void)

{
  _DAT_14c9ee468 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee470,1);
  return;
}



// FUNCTION 142d25c5b FUN_142d25c5b body=69 status=ok
// SIG undefined FUN_142d25c5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25c5b(void)

{
  _DAT_14c9ee480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee488,1);
  return;
}



// FUNCTION 142d25ca0 FUN_142d25ca0 body=69 status=ok
// SIG undefined FUN_142d25ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25ca0(void)

{
  _DAT_14c9ee490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee498,1);
  return;
}



// FUNCTION 142d25ce5 FUN_142d25ce5 body=69 status=ok
// SIG undefined FUN_142d25ce5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25ce5(void)

{
  _DAT_14c9ee4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee4b0,1);
  return;
}



// FUNCTION 142d25d2a FUN_142d25d2a body=69 status=ok
// SIG undefined FUN_142d25d2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25d2a(void)

{
  _DAT_14c9ee4b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee4c0,1);
  return;
}



// FUNCTION 142d25d6f FUN_142d25d6f body=69 status=ok
// SIG undefined FUN_142d25d6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25d6f(void)

{
  _DAT_14c9ee4c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee4d0,1);
  return;
}



// FUNCTION 142d25db4 FUN_142d25db4 body=69 status=ok
// SIG undefined FUN_142d25db4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25db4(void)

{
  _DAT_14c9ee4d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee4e0,1);
  return;
}



// FUNCTION 142d25df9 FUN_142d25df9 body=69 status=ok
// SIG undefined FUN_142d25df9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25df9(void)

{
  _DAT_14c9ee4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee4f0,1);
  return;
}



// FUNCTION 142d25e3e FUN_142d25e3e body=69 status=ok
// SIG undefined FUN_142d25e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25e3e(void)

{
  _DAT_14c9ee4f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142d25e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ee500,1);
  return;
}



// FUNCTION 142d25e8f FUN_142d25e8f body=429 status=ok
// SIG undefined FUN_142d25e8f(void)

void FUN_142d25e8f(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 **local_80;
  undefined1 *local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(byte *)(*(longlong *)(param_2 + 8) + 0x4c) & 1) != 0) && (DAT_14ca08494 != 0)) {
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar8 + 0x14;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0xb0);
      puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar8 + 0x14;
    }
    *puVar1 = (ulonglong)puVar5;
    *puVar8 = &PTR_FUN_14a256498;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 1;
    puVar8[4] = 0;
    lVar6 = 0x3c;
    do {
      puVar2 = (undefined4 *)((longlong)puVar8 + lVar6 + -0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0x3f800000;
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x9c);
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar8;
    lVar6 = FUN_1447e4f80();
    cVar7 = '\x02';
    if (*(char *)(lVar6 + 0x41) != '\x03') {
      cVar7 = *(char *)(lVar6 + 0x41);
    }
    puVar8[2] = *(undefined8 *)(param_2 + 0x18);
    *(char *)(puVar8 + 3) = cVar7;
    puVar5 = puVar8 + 4;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145edb03e();
    FUN_1448e935e(uVar4,&local_58,&DAT_14c9ee570,0);
    FUN_145edb03e();
    local_68 = local_58;
    uStack_64 = uStack_54;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    local_80 = &local_74;
    local_74 = &DAT_100000001;
    local_6c = 1;
    local_88 = puVar8 + 2;
    FUN_1471df230(param_1,&local_58,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2613a FUN_142d2613a body=105 status=ok
// SIG undefined FUN_142d2613a(void)

longlong FUN_142d2613a(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_1 != 0 && param_2 != 0) {
    piVar2 = (int *)((param_1 + -8) - (ulonglong)*(uint *)(param_1 + -8));
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
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 142d261f8 FUN_142d261f8 body=31 status=ok
// SIG undefined FUN_142d261f8(void)

undefined8 FUN_142d261f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d26410 FUN_142d26410 body=31 status=ok
// SIG undefined FUN_142d26410(void)

undefined8 FUN_142d26410(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d26430 FUN_142d26430 body=38 status=ok
// SIG undefined FUN_142d26430(void)

undefined8 FUN_142d26430(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d26456 FUN_142d26456 body=1216 status=ok
// SIG undefined FUN_142d26456(void)

void FUN_142d26456(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 *_Src;
  undefined4 *puVar15;
  float fVar16;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  float local_160;
  float local_158;
  float local_150;
  float local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  byte local_112;
  byte local_111;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
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
  FUN_144b1c6fa(param_1 + 0x10,&local_108);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar13 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a1fb978;
  puVar13[3] = 0;
  *(int *)(puVar13 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x24) = 8;
  }
  else {
    puVar15 = (undefined4 *)CONCAT44(uStack_fc,uStack_100);
    if ((undefined4 *)CONCAT44(uStack_fc,uStack_100) == (undefined4 *)0x0) {
      puVar15 = &local_108;
    }
    FUN_1446fe144(puVar13 + 2,local_f8,0);
    puVar8 = (undefined8 *)puVar13[3];
    if ((undefined8 *)puVar13[3] == (undefined8 *)0x0) {
      puVar8 = puVar13 + 2;
    }
    memcpy(puVar8,puVar15,(longlong)local_f8);
  }
  puVar13[0xd] = 0;
  *(int *)(puVar13 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x74) = 8;
  }
  else {
    _Src = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      _Src = local_f0;
    }
    FUN_1446fe1b8(puVar13 + 5,local_a8,0);
    puVar8 = (undefined8 *)puVar13[0xd];
    if ((undefined8 *)puVar13[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar13 + 5;
    }
    memcpy(puVar8,_Src,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar13 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar13 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar13 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (CONCAT44(uStack_fc,uStack_100) != 0) {
    FUN_1400020a8();
  }
  lVar10 = *(longlong *)(param_1 + 0x238);
  lVar9 = *(longlong *)(param_1 + 0x240);
  lVar2 = *(longlong *)(param_1 + 0x248);
  lVar3 = *(longlong *)(param_1 + 0x250);
  puVar15 = *(undefined4 **)(param_1 + 600);
  local_111 = *(byte *)(param_1 + 0x260);
  lVar1 = param_1 + 0x1f8;
  local_10c = *(int *)(param_1 + 0x1bc);
  uVar4 = *(undefined8 *)(param_1 + 0x1d0);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  local_110 = *(undefined4 *)(param_1 + 0x1c0);
  local_112 = *(byte *)(param_1 + 0x1c4);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar13 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar13 + 2) = (float)(int)uVar4;
  *(float *)((longlong)puVar13 + 0x14) = (float)(int)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(puVar13 + 3) = 0;
  *(float *)((longlong)puVar13 + 0x1c) = (float)(int)uVar5;
  *(float *)(puVar13 + 4) = (float)(int)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_2,lVar1);
  local_108 = *puVar15;
  uStack_104 = puVar15[1];
  uStack_100 = puVar15[2];
  uStack_fc = puVar15[3];
  if (lVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar9 + 8);
    lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + (longlong)*(int *)(lVar10 + 0xd4) * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar6,(longlong)*(int *)(lVar10 + 0xd4),1);
    }
  }
  FUN_1415d95b6();
  local_168 = &local_108;
  FUN_1449cc26b(param_2,lVar9,lVar10,&DAT_14c9efd68);
  if (lVar2 == 0) {
    lVar10 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar3 + 8);
    lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + (longlong)*(int *)(lVar2 + 0xd4) * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar9,(longlong)*(int *)(lVar2 + 0xd4),1);
    }
  }
  FUN_1401f4444();
  local_168 = puVar15;
  FUN_1449cc26b(param_2,lVar10,lVar2,&DAT_14c9efdf0);
  iVar12 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar7 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_160 = (float)iVar11;
  iVar14 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_148 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar14);
  local_150 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar11);
  local_138 = *(undefined8 *)(param_1 + 0x1e0);
  fVar16 = (float)iVar12;
  local_158 = (float)iVar14;
  local_140 = CONCAT44(iVar12,iVar7);
  if (local_10c != -1) {
    local_111 = local_111 & 2;
    if ((local_111 != 0) && ((local_112 & 1) != 0)) {
      local_120 = local_110;
      local_130 = CONCAT44(local_130._4_4_,local_10c);
      local_168 = (undefined4 *)CONCAT44(local_168._4_4_,fVar16);
      local_128 = lVar1;
      FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar7);
      goto LAB_142d2687f;
    }
  }
  local_120 = local_110;
  local_168 = (undefined4 *)CONCAT44(local_168._4_4_,fVar16);
  local_128 = CONCAT44(local_128._4_4_,1);
  local_130 = lVar1;
  FUN_140094833(param_2);
LAB_142d2687f:
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d26918 FUN_142d26918 body=31 status=ok
// SIG undefined FUN_142d26918(void)

undefined8 FUN_142d26918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d26938 FUN_142d26938 body=1091 status=ok
// SIG undefined FUN_142d26938(void)

void FUN_142d26938(longlong param_1,ulonglong *param_2)

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
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  byte local_e9;
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
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,local_e8);
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
  *(int *)(puVar16 + 4) = local_d8;
  if ((longlong)local_d8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = local_e8;
    if (local_e0 != (undefined1 *)0x0) {
      puVar14 = local_e0;
    }
    FUN_1446fe144(puVar16 + 2,local_d8,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar14,(longlong)local_d8);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_90;
    if (local_90 == (undefined1 *)0x0) {
      puVar14 = local_d0;
    }
    FUN_1446fe1b8(puVar16 + 5,local_88,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar14,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar16 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_74;
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  bVar2 = *(byte *)(param_1 + 0x250);
  lVar1 = param_1 + 0x1f8;
  iVar3 = *(int *)(param_1 + 0x1bc);
  uVar4 = *(undefined4 *)(param_1 + 0x1c0);
  local_e9 = *(byte *)(param_1 + 0x1c4);
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  uVar6 = *(undefined8 *)(param_1 + 0x1d8);
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
  FUN_1401f3e4e();
  local_148 = uVar5;
  FUN_1449cc26b(param_2,lVar10,*(undefined8 *)(param_1 + 0x238),&DAT_14c9eff00);
  iVar12 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar8 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_140 = (float)iVar11;
  iVar15 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_128 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar15);
  local_130 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar11);
  local_118 = *(undefined8 *)(param_1 + 0x1e0);
  fVar17 = (float)iVar12;
  local_138 = (float)iVar15;
  local_120 = CONCAT44(iVar12,iVar8);
  local_100 = uVar4;
  if (((iVar3 == -1) || ((bVar2 & 2) == 0)) || ((local_e9 & 1) == 0)) {
    local_148 = CONCAT44(local_148._4_4_,fVar17);
    local_108 = CONCAT44(local_108._4_4_,1);
    local_110 = lVar1;
    FUN_140094833(param_2);
  }
  else {
    local_110 = CONCAT44(local_110._4_4_,iVar3);
    local_148 = CONCAT44(local_148._4_4_,fVar17);
    local_108 = lVar1;
    FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d26d7c FUN_142d26d7c body=518 status=ok
// SIG undefined FUN_142d26d7c(void)

void FUN_142d26d7c(longlong param_1,ulonglong *param_2)

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
  FUN_1471e7298(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d26f84 FUN_142d26f84 body=123 status=ok
// SIG undefined FUN_142d26f84(void)

void FUN_142d26f84(undefined8 *param_1)

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
  FUN_145e9fe80();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14c9eff88,uVar1);
  return;
}



// FUNCTION 142d27000 FUN_142d27000 body=31 status=ok
// SIG undefined FUN_142d27000(void)

undefined8 FUN_142d27000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d27020 FUN_142d27020 body=1091 status=ok
// SIG undefined FUN_142d27020(void)

void FUN_142d27020(longlong param_1,ulonglong *param_2)

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
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_130;
  float local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  byte local_e9;
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
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,local_e8);
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
  *(int *)(puVar16 + 4) = local_d8;
  if ((longlong)local_d8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = local_e8;
    if (local_e0 != (undefined1 *)0x0) {
      puVar14 = local_e0;
    }
    FUN_1446fe144(puVar16 + 2,local_d8,0);
    puVar9 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 2;
    }
    memcpy(puVar9,puVar14,(longlong)local_d8);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_90;
    if (local_90 == (undefined1 *)0x0) {
      puVar14 = local_d0;
    }
    FUN_1446fe1b8(puVar16 + 5,local_88,0);
    puVar9 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar16 + 5;
    }
    memcpy(puVar9,puVar14,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar16 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_74;
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (local_e0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  bVar2 = *(byte *)(param_1 + 0x250);
  lVar1 = param_1 + 0x1f8;
  iVar3 = *(int *)(param_1 + 0x1bc);
  uVar4 = *(undefined4 *)(param_1 + 0x1c0);
  local_e9 = *(byte *)(param_1 + 0x1c4);
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  uVar6 = *(undefined8 *)(param_1 + 0x1d8);
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
  FUN_141579d8a();
  local_148 = uVar5;
  FUN_1449cc26b(param_2,lVar10,*(undefined8 *)(param_1 + 0x238),&DAT_14c9f0010);
  iVar12 = *(int *)(param_1 + 0x1dc) - *(int *)(param_1 + 0x1d4);
  iVar8 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d0);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x1e8);
  local_140 = (float)iVar11;
  iVar15 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 0x20);
  local_128 = (float)((int)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20) - iVar15);
  local_130 = (float)((int)*(undefined8 *)(param_1 + 0x1f0) - iVar11);
  local_118 = *(undefined8 *)(param_1 + 0x1e0);
  fVar17 = (float)iVar12;
  local_138 = (float)iVar15;
  local_120 = CONCAT44(iVar12,iVar8);
  local_100 = uVar4;
  if (((iVar3 == -1) || ((bVar2 & 2) == 0)) || ((local_e9 & 1) == 0)) {
    local_148 = CONCAT44(local_148._4_4_,fVar17);
    local_108 = CONCAT44(local_108._4_4_,1);
    local_110 = lVar1;
    FUN_140094833(param_2);
  }
  else {
    local_110 = CONCAT44(local_110._4_4_,iVar3);
    local_148 = CONCAT44(local_148._4_4_,fVar17);
    local_108 = lVar1;
    FUN_142f2cc50(param_2,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d27464 FUN_142d27464 body=75 status=ok
// SIG undefined FUN_142d27464(void)

void FUN_142d27464(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x4d58);
  *(uint *)(lVar2 + 0x4d58) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x4d5c) < iVar1 + 1U) {
    FUN_1462dae16((longlong *)(lVar2 + 0x4d50),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x4d50) + (longlong)iVar1 * 8) = param_1[1];
  return;
}



// FUNCTION 142d274ba FUN_142d274ba body=12 status=ok
// SIG undefined FUN_142d274ba(void)

void FUN_142d274ba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d274c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d274c6 FUN_142d274c6 body=29 status=ok
// SIG undefined FUN_142d274c6(void)

undefined8 FUN_142d274c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2750a FUN_142d2750a body=282 status=ok
// SIG undefined FUN_142d2750a(void)

undefined8 * FUN_142d2750a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142d274e3);
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



// FUNCTION 142d27624 FUN_142d27624 body=133 status=ok
// SIG undefined FUN_142d27624(void)

void FUN_142d27624(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x4d58);
  *(uint *)(lVar3 + 0x4d58) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x4d5c) < iVar2 + 1U) {
    FUN_1462dae16((longlong *)(lVar3 + 0x4d50),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x4d50) + (longlong)iVar2 * 8) = param_1[0x16];
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142d27691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142d276aa FUN_142d276aa body=115 status=ok
// SIG undefined FUN_142d276aa(void)

void FUN_142d276aa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 8;
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == *param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return;
        }
        memmove((void *)(lVar2 + (lVar3 >> 0x20) * 8),(void *)(lVar2 + (lVar3 >> 0x20) * 8 + 8),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 142d2773c FUN_142d2773c body=12 status=ok
// SIG undefined FUN_142d2773c(void)

void FUN_142d2773c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d27745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d27748 FUN_142d27748 body=29 status=ok
// SIG undefined FUN_142d27748(void)

undefined8 FUN_142d27748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d27766 FUN_142d27766 body=282 status=ok
// SIG undefined FUN_142d27766(void)

undefined8 * FUN_142d27766(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142d274e3);
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



// FUNCTION 142d27880 FUN_142d27880 body=116 status=ok
// SIG undefined FUN_142d27880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d27880(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142d276aa(_DAT_000000a8 + 0x4d50,0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142d276aa(param_1[0x15] + 0x4d50,param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142d278c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142d278f4 FUN_142d278f4 body=31 status=ok
// SIG undefined FUN_142d278f4(void)

undefined8 FUN_142d278f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d27914 FUN_142d27914 body=38 status=ok
// SIG undefined FUN_142d27914(void)

undefined8 FUN_142d27914(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2793a FUN_142d2793a body=1656 status=ok
// SIG undefined FUN_142d2793a(void)

void FUN_142d2793a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  FUN_144b0e33a(param_2);
  iVar3 = *(int *)(param_1 + 0x1ec);
  iVar4 = *(int *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1e4);
  iVar6 = *(int *)(param_1 + 0x1e0);
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
  *(float *)(puVar14 + 2) = (float)iVar6;
  *(float *)((longlong)puVar14 + 0x14) = (float)iVar5;
  *(undefined4 *)(puVar14 + 3) = 0;
  *(float *)((longlong)puVar14 + 0x1c) = (float)iVar4;
  *(float *)(puVar14 + 4) = (float)iVar3;
  *(undefined4 *)((longlong)puVar14 + 0x24) = 0x3f800000;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d38;
  local_128 = DAT_14c9c0600;
  local_100 = 0;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar12 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar10,lVar12,1);
    }
  }
  uStack_150 = (undefined8 *)lVar9;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar12 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar10,lVar12,1);
    }
  }
  local_98._0_6_ = CONCAT15(*(undefined1 *)(param_1 + 0x1f0),(undefined5)local_98);
  local_148 = lVar9;
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
  uVar1 = *(undefined4 *)(param_1 + 0x1f8);
  uVar2 = *(undefined4 *)(param_1 + 0x1fc);
  puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar14 + 3;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x20);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 3;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar14;
  param_2[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_14a1fbb10;
  *(undefined4 *)(puVar14 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar14 + 0x14) = uVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + lVar12 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar10,lVar12,1);
    }
  }
  FUN_14155df5c();
  local_168 = uVar7;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1b8),&DAT_14c9f0120);
  lVar9 = *(longlong *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar10 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar13 * 8);
    if (lVar10 == 0) {
      lVar10 = FUN_1400bafc2(lVar12,lVar13,1);
    }
  }
  FUN_14155ec3a();
  local_168 = lVar9 + 0x90;
  FUN_1449cc26b(param_2,lVar10,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f01a8);
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
  uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x130) + 0x10);
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
  *puVar14 = &PTR_LAB_14a1e78c8;
  puVar14[2] = uVar7;
  *(undefined4 *)(puVar14 + 3) = 0;
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d27fc0 FUN_142d27fc0 body=1418 status=ok
// SIG undefined FUN_142d27fc0(void)

void FUN_142d27fc0(longlong param_1,ulonglong *param_2)

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
  FUN_145f69bdc();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f0340);
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



// FUNCTION 142d2854c FUN_142d2854c body=95 status=ok
// SIG undefined FUN_142d2854c(void)

void FUN_142d2854c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x5688);
  *(uint *)(lVar2 + 0x5688) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x568c) < iVar1 + 1U) {
    FUN_1462dafe2((longlong *)(lVar2 + 0x5680),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x5680) + (longlong)iVar1 * 8) = param_1[1];
  *(undefined1 *)(*param_1 + 0x56c0) = 1;
  *(undefined1 *)(*param_1 + 0x56c1) = 1;
  return;
}



// FUNCTION 142d285b6 FUN_142d285b6 body=12 status=ok
// SIG undefined FUN_142d285b6(void)

void FUN_142d285b6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d285bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d285c2 FUN_142d285c2 body=29 status=ok
// SIG undefined FUN_142d285c2(void)

undefined8 FUN_142d285c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d285e0 FUN_142d285e0 body=282 status=ok
// SIG undefined FUN_142d285e0(void)

undefined8 * FUN_142d285e0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142d274e3);
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



// FUNCTION 142d286fa FUN_142d286fa body=161 status=ok
// SIG undefined FUN_142d286fa(void)

void FUN_142d286fa(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x5688);
  *(uint *)(lVar3 + 0x5688) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x568c) < iVar2 + 1U) {
    FUN_1462dafe2((longlong *)(lVar3 + 0x5680),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x5680) + (longlong)iVar2 * 8) = param_1[0x16];
  *(undefined1 *)(param_1[0x15] + 0x56c0) = 1;
  *(undefined1 *)(param_1[0x15] + 0x56c1) = 1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142d28783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142d2879c FUN_142d2879c body=115 status=ok
// SIG undefined FUN_142d2879c(void)

void FUN_142d2879c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 8;
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == *param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return;
        }
        memmove((void *)(lVar2 + (lVar3 >> 0x20) * 8),(void *)(lVar2 + (lVar3 >> 0x20) * 8 + 8),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 142d28810 FUN_142d28810 body=71 status=ok
// SIG undefined FUN_142d28810(void)

void FUN_142d28810(longlong *param_1)

{
  FUN_142d2879c(*param_1 + 0x5680,param_1 + 1);
  *(undefined1 *)(*param_1 + 0x56c0) = 1;
  *(undefined1 *)(*param_1 + 0x56c1) = 1;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142d28862 FUN_142d28862 body=12 status=ok
// SIG undefined FUN_142d28862(void)

void FUN_142d28862(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d2886b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142d2886e FUN_142d2886e body=29 status=ok
// SIG undefined FUN_142d2886e(void)

undefined8 FUN_142d2886e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2888c FUN_142d2888c body=282 status=ok
// SIG undefined FUN_142d2888c(void)

undefined8 * FUN_142d2888c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142d274e3);
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



// FUNCTION 142d289a6 FUN_142d289a6 body=132 status=ok
// SIG undefined FUN_142d289a6(void)

void FUN_142d289a6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_142d2879c(param_1[0x15] + 0x5680,param_1 + 0x16);
  *(undefined1 *)(param_1[0x15] + 0x56c0) = 1;
  *(undefined1 *)(param_1[0x15] + 0x56c1) = 1;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142d28a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142d28a2a FUN_142d28a2a body=29 status=ok
// SIG undefined FUN_142d28a2a(void)

undefined8 FUN_142d28a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d28a5c FUN_142d28a5c body=85 status=ok
// SIG undefined FUN_142d28a5c(void)

void FUN_142d28a5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255b40;
  return;
}



// FUNCTION 142d28ab2 FUN_142d28ab2 body=85 status=ok
// SIG undefined FUN_142d28ab2(void)

void FUN_142d28ab2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255b40;
  return;
}



// FUNCTION 142d28b08 FUN_142d28b08 body=118 status=ok
// SIG undefined FUN_142d28b08(void)

void FUN_142d28b08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255b40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d28b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d28b7e FUN_142d28b7e body=81 status=ok
// SIG undefined FUN_142d28b7e(void)

void FUN_142d28b7e(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d28bd0 FUN_142d28bd0 body=83 status=ok
// SIG undefined FUN_142d28bd0(void)

undefined8 FUN_142d28bd0(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d28c24 FUN_142d28c24 body=31 status=ok
// SIG undefined FUN_142d28c24(void)

undefined8 FUN_142d28c24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d28c44 FUN_142d28c44 body=31 status=ok
// SIG undefined FUN_142d28c44(void)

undefined8 FUN_142d28c44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d28c64 FUN_142d28c64 body=38 status=ok
// SIG undefined FUN_142d28c64(void)

undefined8 FUN_142d28c64(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d28c8a FUN_142d28c8a body=489 status=ok
// SIG undefined FUN_142d28c8a(void)

void FUN_142d28c8a(longlong param_1,ulonglong *param_2)

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
  FUN_144ab6bce(param_2,*(undefined8 *)(param_1 + 0x1b8),0x3f800000,0);
  FUN_142de5b44(*(longlong *)(param_1 + 0x1b8) + 0xac20,param_2,
                *(longlong *)(param_1 + 0x1d0) + 0x30);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d28e80 FUN_142d28e80 body=31 status=ok
// SIG undefined FUN_142d28e80(void)

undefined8 FUN_142d28e80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d28ea0 FUN_142d28ea0 body=1418 status=ok
// SIG undefined FUN_142d28ea0(void)

void FUN_142d28ea0(longlong param_1,ulonglong *param_2)

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
  FUN_14157ce04();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f03c8);
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



// FUNCTION 142d2942c FUN_142d2942c body=29 status=ok
// SIG undefined FUN_142d2942c(void)

undefined8 FUN_142d2942c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2945e FUN_142d2945e body=85 status=ok
// SIG undefined FUN_142d2945e(void)

void FUN_142d2945e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255c80;
  return;
}



// FUNCTION 142d294b4 FUN_142d294b4 body=85 status=ok
// SIG undefined FUN_142d294b4(void)

void FUN_142d294b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255c80;
  return;
}



// FUNCTION 142d2950a FUN_142d2950a body=118 status=ok
// SIG undefined FUN_142d2950a(void)

void FUN_142d2950a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255c80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d29571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d29580 FUN_142d29580 body=81 status=ok
// SIG undefined FUN_142d29580(void)

void FUN_142d29580(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d295d2 FUN_142d295d2 body=83 status=ok
// SIG undefined FUN_142d295d2(void)

undefined8 FUN_142d295d2(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d29626 FUN_142d29626 body=547 status=ok
// SIG undefined FUN_142d29626(void)

longlong * FUN_142d29626(longlong *param_1,int param_2)

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



// FUNCTION 142d2984a FUN_142d2984a body=255 status=ok
// SIG undefined FUN_142d2984a(void)

void FUN_142d2984a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar3 = *piVar1;
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    lVar4 = 0x10;
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + -0x10 + lVar4);
      *(uint *)(*(longlong *)(param_1 + 0xb8) +
               (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0xa8) + lVar4) >> 1) * 4) =
           (uint)*(byte *)(lVar2 + 0x8e) << 0x1f |
           (uint)*(byte *)(lVar2 + 0x8f) << 0x1e |
           (uint)*(byte *)(lVar2 + 0x89) << 0x1d |
           (uint)*(byte *)(lVar2 + 0x8b) << 0x1c | *(uint *)(lVar2 + 0x80) & 0xffffff;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar5 < *(uint *)(param_1 + 0xb0));
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = iVar3;
  }
  return;
}



// FUNCTION 142d2994a FUN_142d2994a body=110 status=ok
// SIG undefined FUN_142d2994a(void)

undefined8 * FUN_142d2994a(undefined8 *param_1,int param_2)

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



// FUNCTION 142d299b8 FUN_142d299b8 body=469 status=ok
// SIG undefined FUN_142d299b8(void)

void FUN_142d299b8(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_142d29ae8:
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
LAB_142d29b25:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142d29a22;
LAB_142d29a17:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142d29a22:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x000142d29a4f;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142d29aa5:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142d29b25;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142d29ae8;
code_r0x000142d29a4f:
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
      goto LAB_142d29aa5;
    }
  }
  goto LAB_142d29a17;
}



// FUNCTION 142d29b8e FUN_142d29b8e body=384 status=ok
// SIG undefined FUN_142d29b8e(void)

void FUN_142d29b8e(char *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  
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
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar10 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x20) + uVar10 * 0x20;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar10 * 0x20);
      lVar8 = 0;
      bVar5 = true;
      do {
        bVar9 = bVar5;
        puVar6 = (undefined8 *)FUN_1471e7936(*(undefined8 *)(param_1 + 0x18));
        *(int *)((longlong)puVar6 + 0xc) = *(int *)(lVar2 + 0x10) + (int)lVar8;
        *puVar6 = *(undefined8 *)(lVar2 + 8);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(lVar3 + 0x84);
        *(uint *)((longlong)puVar6 + 0x14) =
             (uint)*(byte *)(lVar3 + 0x8e) << 0x1f |
             (uint)*(byte *)(lVar3 + 0x8f) << 0x1e |
             (uint)*(byte *)(lVar3 + 0x89) << 0x1d |
             (uint)*(byte *)(lVar3 + 0x8b) << 0x1c | *(uint *)(lVar3 + 0x80) & 0xffffff;
        if (*param_1 == '\x01') {
          lVar4 = *(longlong *)(param_1 + (ulonglong)(*(short *)(lVar3 + 0x96) != -1) * 8 + 8);
          lVar8 = lVar8 * 0x10;
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(lVar4 + lVar8);
          puVar6[4] = *(undefined8 *)(lVar4 + 8 + lVar8);
          *(undefined2 *)(puVar6 + 3) = *(undefined2 *)(lVar4 + 4 + lVar8);
        }
        lVar8 = 1;
        bVar5 = false;
      } while (bVar9);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x28));
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = iVar7;
  }
  return;
}



// FUNCTION 142d29d0e FUN_142d29d0e body=547 status=ok
// SIG undefined FUN_142d29d0e(void)

longlong * FUN_142d29d0e(longlong *param_1,int param_2)

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



// FUNCTION 142d29f3e FUN_142d29f3e body=110 status=ok
// SIG undefined FUN_142d29f3e(void)

undefined8 * FUN_142d29f3e(undefined8 *param_1,int param_2)

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



// FUNCTION 142d29fac FUN_142d29fac body=112 status=ok
// SIG undefined FUN_142d29fac(void)

void FUN_142d29fac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_14004673c(lVar3 + 0x10,0);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_14004673c(param_1 + 0x20,0);
  FUN_140046130(param_1 + 0x10);
  return;
}



// FUNCTION 142d2a01c FUN_142d2a01c body=29 status=ok
// SIG undefined FUN_142d2a01c(void)

undefined8 FUN_142d2a01c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142d2a04e FUN_142d2a04e body=93 status=ok
// SIG undefined FUN_142d2a04e(void)

void FUN_142d2a04e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a258830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142d2a0ac FUN_142d2a0ac body=93 status=ok
// SIG undefined FUN_142d2a0ac(void)

void FUN_142d2a0ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a258830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a255d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142d2a10a FUN_142d2a10a body=126 status=ok
// SIG undefined FUN_142d2a10a(void)

void FUN_142d2a10a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a258830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a255d30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d2a179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142d2a192 FUN_142d2a192 body=20 status=ok
// SIG undefined FUN_142d2a192(void)

undefined1 FUN_142d2a192(longlong param_1)

{
  FUN_142d2a1a6(param_1 + 0x18);
  return 1;
}



// FUNCTION 142d2a1a6 FUN_142d2a1a6 body=501 status=ok
// SIG undefined FUN_142d2a1a6(void)

void FUN_142d2a1a6(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int *local_80;
  undefined2 local_6c;
  undefined1 local_69;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = (undefined2)param_1[1];
  lVar8 = *param_1;
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar10 + 0x16;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0xc0);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar10 + 0x16;
  }
  *puVar1 = (ulonglong)puVar6;
  *puVar10 = &PTR_FUN_14a255d98;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 1;
  puVar10[4] = 0;
  *(undefined1 *)(puVar10 + 5) = 1;
  puVar10[6] = 0;
  lVar7 = 0x4c;
  do {
    puVar2 = (undefined4 *)((longlong)puVar10 + lVar7 + -0xc);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0xac);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar10;
  lVar7 = FUN_1447e4f80();
  cVar5 = *(char *)(lVar7 + 0x41);
  if (*(char *)(lVar7 + 0x41) == '\x03') {
    cVar5 = '\x02';
  }
  puVar10[2] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar10 + 3) = cVar5;
  uVar4 = *(undefined8 *)(lVar8 + 0x198);
  lVar8 = FUN_14482e3b2();
  cVar5 = *(char *)(lVar8 + 0x41);
  if (cVar5 == '\x03') {
    cVar5 = '\x02';
  }
  puVar10[4] = uVar4;
  *(char *)(puVar10 + 5) = cVar5;
  puVar6 = puVar10 + 6;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145eabd00();
  FUN_1448e935e(uVar4,&local_58,&DAT_14c9ed8f8,0);
  FUN_145eabd00();
  local_68 = local_58;
  uStack_64 = iStack_54;
  uStack_60 = uStack_50;
  uStack_5c = uStack_4c;
  iVar9 = *(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc);
  iVar3 = iVar9 + 7;
  iStack_54 = iVar9 + 0xe;
  if (-1 < iVar3) {
    iStack_54 = iVar3;
  }
  iStack_54 = iStack_54 >> 3;
  iVar9 = *(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8);
  iVar3 = iVar9 + 7;
  local_58 = iVar9 + 0xe;
  if (-1 < iVar3) {
    local_58 = iVar3;
  }
  local_58 = local_58 >> 3;
  uStack_50 = 1;
  local_88 = puVar10 + 2;
  local_80 = &local_58;
  FUN_1471e7a10(param_2,&local_69,local_6c);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2a39c FUN_142d2a39c body=481 status=ok
// SIG undefined FUN_142d2a39c(void)

void FUN_142d2a39c(longlong param_1,ulonglong *param_2)

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
  FUN_1471e7e56(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142d2a57e FUN_142d2a57e body=232 status=ok
// SIG undefined FUN_142d2a57e(void)

void FUN_142d2a57e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142d2a666 FUN_142d2a666 body=81 status=ok
// SIG undefined FUN_142d2a666(void)

void FUN_142d2a666(undefined8 param_1,longlong *param_2)

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
  FUN_1471e7ef9(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142d2a6b8 FUN_142d2a6b8 body=481 status=ok
// SIG undefined FUN_142d2a6b8(void)

void FUN_142d2a6b8(longlong param_1,ulonglong *param_2)

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
  FUN_1471e8688(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


