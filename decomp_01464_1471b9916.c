// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1471b9916 FUN_1471b9916 body=52 status=ok
// SIG undefined FUN_1471b9916(void)

void FUN_1471b9916(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471b994a FUN_1471b994a body=42 status=ok
// SIG undefined FUN_1471b994a(void)

void FUN_1471b994a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471b99b8 FUN_1471b99b8 body=96 status=ok
// SIG undefined FUN_1471b99b8(void)

undefined8 FUN_1471b99b8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e704ae();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6310,1);
  return uVar3;
}



// FUNCTION 1471b9a18 FUN_1471b9a18 body=52 status=ok
// SIG undefined FUN_1471b9a18(void)

void FUN_1471b9a18(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471b9a4c FUN_1471b9a4c body=42 status=ok
// SIG undefined FUN_1471b9a4c(void)

void FUN_1471b9a4c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471b9aba FUN_1471b9aba body=96 status=ok
// SIG undefined FUN_1471b9aba(void)

undefined8 FUN_1471b9aba(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f03c82();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6398,1);
  return uVar3;
}



// FUNCTION 1471b9b1a FUN_1471b9b1a body=52 status=ok
// SIG undefined FUN_1471b9b1a(void)

void FUN_1471b9b1a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471b9b4e FUN_1471b9b4e body=816 status=ok
// SIG undefined FUN_1471b9b4e(void)

void FUN_1471b9b4e(longlong param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4,
                  undefined8 param_5,uint param_6,undefined4 param_7,byte param_8,longlong param_9,
                  longlong param_10,longlong param_11,undefined8 *param_12)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar16 + 0x3c;
  local_78 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(plVar1,0x1f0);
    puVar16 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar14 = puVar16 + 0x3c;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar14;
  *puVar16 = &PTR_FUN_14a240a48;
  puVar16[0x34] = 0;
  puVar16[0x35] = 0x3f80000000000000;
  puVar16[0x39] = 0;
  puVar16[0x3a] = 0;
  puVar16[0x3b] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  local_80 = plVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar16;
  *(uint *)(puVar16 + 0x37) = param_6;
  if (0 < (int)param_6) {
    lVar17 = 0;
    do {
      uVar15 = *(undefined8 *)(param_4 + lVar17);
      uVar7 = ((undefined8 *)(param_4 + lVar17))[1];
      puVar14 = (undefined8 *)(param_4 + 0x10 + lVar17);
      uVar8 = *puVar14;
      uVar9 = puVar14[1];
      puVar14 = (undefined8 *)(param_4 + 0x20 + lVar17);
      uVar10 = *puVar14;
      uVar11 = puVar14[1];
      puVar14 = (undefined8 *)(param_4 + 0x30 + lVar17);
      uVar12 = puVar14[1];
      puVar2 = (undefined8 *)((longlong)puVar16 + lVar17 + 0x40);
      *puVar2 = *puVar14;
      puVar2[1] = uVar12;
      puVar14 = (undefined8 *)((longlong)puVar16 + lVar17 + 0x30);
      *puVar14 = uVar10;
      puVar14[1] = uVar11;
      puVar14 = (undefined8 *)((longlong)puVar16 + lVar17 + 0x20);
      *puVar14 = uVar8;
      puVar14[1] = uVar9;
      puVar14 = (undefined8 *)((longlong)(puVar16 + 2) + lVar17);
      *puVar14 = uVar15;
      puVar14[1] = uVar7;
      lVar17 = lVar17 + 0x40;
    } while ((ulonglong)param_6 << 6 != lVar17);
  }
  *(undefined4 *)(puVar16 + 0x33) = *(undefined4 *)(local_78 + 1);
  puVar16[0x32] = *local_78;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(puVar16 + 0x34) = *param_3;
  *(undefined4 *)((longlong)puVar16 + 0x1a4) = uVar4;
  *(undefined4 *)(puVar16 + 0x35) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1ac) = uVar6;
  puVar16[0x36] = param_5;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = param_7;
  *(uint *)(puVar16 + 0x38) =
       (uint)((int)((ulonglong)param_5 >> 0x20) == DAT_14c967818._4_4_ &&
             (int)DAT_14c967818 == (int)param_5);
  *(uint *)((longlong)puVar16 + 0x1c4) = (uint)param_8;
  uVar13 = (uint)local_70 >> 8;
  local_70._0_4_ = (uint)local_70 & 0xffffff00;
  local_70._4_4_ = 0;
  uStack_68 = 0xffffffff;
  local_60 = 0;
  local_58 = param_9;
  if ((*(byte *)(param_9 + 0x68) & 0x80) != 0) {
    local_70._0_4_ = CONCAT31((int3)uVar13,0x1c);
  }
  lVar17 = param_1 + 0x198;
  uVar15 = FUN_14475683e(lVar17,local_80,param_9 + 8,&local_70);
  plVar1 = local_80;
  puVar16[0x39] = uVar15;
  uVar13 = (uint)local_70 >> 8;
  local_70._0_4_ = (uint)local_70 & 0xffffff00;
  local_70._4_4_ = 0;
  uStack_68 = 0xffffffff;
  local_60 = 0;
  local_58 = param_10;
  if ((*(byte *)(param_10 + 0x68) & 0x80) != 0) {
    local_70._0_4_ = CONCAT31((int3)uVar13,0x1c);
  }
  uVar15 = FUN_14475683e(lVar17,local_80,param_10 + 8,&local_70);
  puVar16[0x3a] = uVar15;
  uVar13 = (uint)local_70 >> 8;
  local_70._0_4_ = (uint)local_70 & 0xffffff00;
  local_70._4_4_ = 0;
  uStack_68 = 0xffffffff;
  local_60 = 0;
  local_58 = param_11;
  if ((*(byte *)(param_11 + 0x68) & 0x80) != 0) {
    local_70._0_4_ = CONCAT31((int3)uVar13,0x1c);
  }
  uVar15 = FUN_14475683e(lVar17,plVar1,param_11 + 8,&local_70);
  puVar16[0x3b] = uVar15;
  local_70 = puVar16 + 2;
  FUN_144a8b0f8();
  local_50 = DAT_14c9e29d0;
  uVar15 = FUN_1471cce36(param_1 + 0x1a8,plVar1,&local_70);
  *param_12 = uVar15;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471b9e7f FUN_1471b9e7f body=17 status=ok
// SIG undefined FUN_1471b9e7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1471b9e7f(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong *puVar21;
  undefined1 auStack_178 [32];
  wchar_t *pwStack_158;
  wchar_t *pwStack_150;
  undefined8 uStack_148;
  char *pcStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  longlong *plStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  ulonglong *puStack_e8;
  longlong lStack_e0;
  undefined1 *puStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 *puStack_a0;
  longlong alStack_98 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint uStack_74;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_48;
  
  if (param_2 != 0) {
    return *(undefined8 **)(param_2 + 0x1c60);
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar21 = (ulonglong *)(param_1 + 0x70);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar19 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar21,0x1f0);
    puVar19 = (undefined8 *)(*puVar21 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar19 + 0x3c;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar19 = &PTR_FUN_14a240a48;
  puVar19[0x34] = 0;
  puVar19[0x35] = 0x3f80000000000000;
  puVar19[0x39] = 0;
  puVar19[0x3a] = 0;
  puVar19[0x3b] = 0;
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  puStack_e8 = puVar21;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar19;
  puVar10 = puVar19 + 2;
  *(undefined4 *)(puVar19 + 0x37) = 1;
  lVar12 = 0;
  puVar17 = puVar10;
  do {
    uVar6 = _DAT_14c846288;
    puVar17[6] = _DAT_14c846280;
    puVar17[7] = uVar6;
    uVar6 = _DAT_14c846278;
    puVar17[4] = _DAT_14c846270;
    puVar17[5] = uVar6;
    uVar6 = _DAT_14c846268;
    puVar17[2] = _DAT_14c846260;
    puVar17[3] = uVar6;
    uVar6 = DAT_14c846258;
    *puVar17 = _DAT_14c846250;
    puVar17[1] = uVar6;
    lVar12 = lVar12 + 1;
    puVar17 = puVar17 + 8;
  } while (lVar12 < *(int *)(puVar19 + 0x37));
  *(undefined4 *)(puVar19 + 0x33) = DAT_14c846338;
  puVar19[0x32] = DAT_14c846330;
  puVar19[0x34] = 0;
  puVar19[0x35] = 0;
  puVar19[0x36] = DAT_14c967818;
  *(undefined8 *)((longlong)puVar19 + 0x1bc) = 0x100000000;
  *(undefined4 *)((longlong)puVar19 + 0x1c4) = 0;
  alStack_98[0] = 0x800000001;
  alStack_98[1] = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uVar13 = 0;
  lVar12 = 0;
  do {
    uVar13 = ((uint)(*(int *)((longlong)alStack_98 + lVar12) * -0x3361d2af) >> 0x11 |
             *(int *)((longlong)alStack_98 + lVar12) * 0x16a88000) * 0x1b873593 ^ uVar13;
    uVar14 = uVar13 << 0xd | uVar13 >> 0x13;
    uVar13 = uVar14 * 5 + 0xe6546b64;
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x18);
  uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
  uVar8 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar15 = (ulonglong)uVar14;
  for (uVar13 = *(uint *)(DAT_14ca63c88 + (ulonglong)(DAT_14ca63c7c & uVar8) * 4);
      uVar13 != 0xffffffff; uVar13 = *(uint *)(DAT_14ca63c90 + (ulonglong)uVar13 * 4)) {
    lVar12 = (longlong)(int)uVar13;
    uVar15 = lVar12 * 5;
    if (*(int *)(DAT_14ca63c48 + 0x14 + lVar12 * 0x28) == 8) {
      lVar18 = DAT_14ca63c48 + lVar12 * 0x28;
      if ((((*(int *)(lVar18 + 0x18) == 1) && (*(int *)(lVar18 + 4) == 0)) &&
          (*(int *)(lVar18 + 8) == 0)) &&
         ((*(int *)(lVar18 + 0xc) == 0 && (*(int *)(lVar18 + 0x10) == 0)))) {
        if (*(longlong *)(DAT_14ca63c48 + 0x20 + lVar12 * 0x28) != 0) {
          lVar12 = FUN_144735dd8(param_1,DAT_14ca63c48 + lVar12 * 0x28 + 0x20,
                                 CONCAT71((int7)((ulonglong)(lVar18 + 4) >> 8),2));
          goto LAB_1448f5a9d;
        }
        break;
      }
    }
    uVar15 = DAT_14ca63c90;
  }
  alStack_98[0] = 0;
  alStack_98[1] = 0;
  uStack_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lVar12 = *(longlong *)(param_1 + 0x18);
  pwStack_68 = L"DefaultStructuredBuffer";
  puStack_d8 = &DAT_100000008;
  uStack_c8 = 0;
  uStack_d0 = 0x10101;
  uStack_c0 = 8;
  uStack_bc = 8;
  uStack_b8 = 0x10101;
  if (*(char *)(lVar12 + 0x69) == '\0') {
    FUN_14002049c(lVar12,CONCAT71((int7)(uVar15 >> 8),1));
    pwStack_150 = (wchar_t *)alStack_98;
    pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&lStack_e0,lVar12,&uStack_c0);
    *(undefined4 *)(lStack_e0 + 0x18) = 0x70;
    FUN_14002049c(lVar12,0);
  }
  else {
    pwStack_150 = (wchar_t *)alStack_98;
    pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&lStack_e0,lVar12,&uStack_c0);
    *(undefined4 *)(lStack_e0 + 0x18) = 0x70;
  }
  cVar4 = *(char *)(lVar12 + 0x69);
  lStack_f8 = lStack_e0;
  if (cVar4 == '\0') {
    FUN_14002049c(lVar12,1);
  }
  pwStack_150 = (wchar_t *)CONCAT44(pwStack_150._4_4_,1);
  pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,8);
  puVar17 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar12,lStack_f8,0);
  if (cVar4 == '\0') {
    FUN_14002049c(lVar12,0);
  }
  lVar18 = lStack_f8;
  *puVar17 = 0;
  lStack_100 = lVar12;
  if (*(char *)(lVar12 + 0x69) == '\0') {
    FUN_14002049c(lVar12,1);
    lVar18 = lStack_f8;
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar12,lStack_f8);
    FUN_14002049c(lVar12,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar12,lStack_f8);
  }
  puStack_a0 = (undefined8 *)0x0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_ac = &DAT_100000008;
  uStack_c0 = uVar8;
  puVar17 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  if (lVar18 == 0) {
    puVar20 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
    puVar20 = puStack_a0;
  }
  pwStack_150 = pwStack_68;
  pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,1);
  lStack_e0 = lVar18;
  FUN_14004772e(puVar17,lStack_100,&lStack_e0,&puStack_d8);
  if (puVar20 != puVar17) {
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
    }
    puStack_a0 = puVar17;
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
  }
  uVar13 = DAT_14ca63c50;
  uVar15 = (ulonglong)DAT_14ca63c50;
  lVar12 = (longlong)(int)DAT_14ca63c50;
  uVar14 = DAT_14ca63c50 + 1;
  DAT_14ca63c50 = uVar14;
  if (DAT_14ca63c54 < uVar14) {
    FUN_1456bceb2(&DAT_14ca63c48,uVar13);
  }
  lVar18 = DAT_14ca63c48;
  puVar3 = (uint *)(DAT_14ca63c48 + 0xc + lVar12 * 0x28);
  *puVar3 = (uint)uStack_b4;
  puVar3[1] = uStack_b4._4_4_;
  puVar3[2] = (uint)uStack_ac;
  puVar3[3] = uStack_ac._4_4_;
  puVar3 = (uint *)(lVar18 + lVar12 * 0x28);
  *puVar3 = uStack_c0;
  puVar3[1] = uStack_bc;
  puVar3[2] = uStack_b8;
  puVar3[3] = (uint)uStack_b4;
  *(undefined8 **)(lVar18 + 0x20 + lVar12 * 0x28) = puStack_a0;
  if (puStack_a0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puStack_a0 + 1) = *(int *)(puStack_a0 + 1) + 1;
    UNLOCK();
  }
  if (DAT_14ca63c80 <= uVar13) {
    uVar2 = (ulonglong)(uVar13 + (uVar14 == 0)) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar12 & 0x1f);
    uVar14 = 0x20;
    if (0x20 < uVar9) {
      uVar14 = uVar9;
    }
    FUN_1404b04e2(&DAT_14ca63c78,uVar14);
  }
  uVar8 = uVar8 & DAT_14ca63c7c;
  *(undefined4 *)(DAT_14ca63c90 + uVar15 * 4) =
       *(undefined4 *)(DAT_14ca63c88 + (ulonglong)uVar8 * 4);
  *(uint *)(DAT_14ca63c88 + (ulonglong)uVar8 * 4) = uVar13;
  lVar12 = FUN_144735dd8(param_1,&puStack_a0,2);
  if (puStack_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puStack_a0)(puStack_a0,1);
    }
  }
  if (lStack_f8 != 0) {
    LOCK();
    puVar3 = (uint *)(lStack_f8 + 8);
    uVar13 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1448f5a9d:
  puVar21 = puStack_e8;
  if ((*(byte *)(lVar12 + 0x68) & 0x80) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x1c;
  }
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar20 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar17) {
    FUN_140023dd8(puStack_e8,0x50);
    puVar20 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar20 + 9;
  }
  lStack_f8 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar17;
  puVar20[1] = *(undefined8 *)(lVar12 + 8);
  uVar13 = 0;
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar20 + 5) = uVar16;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = lVar12;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(lStack_f8,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar19[0x39] = puVar20;
  alStack_98[0] = 0x1000000001;
  alStack_98[1] = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  lVar12 = 0;
  do {
    uVar14 = (uint)(*(int *)((longlong)alStack_98 + lVar12) * -0x3361d2af) >> 0x11 |
             *(int *)((longlong)alStack_98 + lVar12) * 0x16a88000;
    uVar13 = uVar14 * 0x1b873593 ^ uVar13;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x18);
  uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
  uVar8 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar15 = (ulonglong)uVar14;
  for (uVar13 = *(uint *)(DAT_14ca63c88 + (ulonglong)(DAT_14ca63c7c & uVar8) * 4);
      uVar13 != 0xffffffff; uVar13 = *(uint *)(DAT_14ca63c90 + (ulonglong)uVar13 * 4)) {
    lVar12 = (longlong)(int)uVar13;
    uVar15 = lVar12 * 5;
    if (*(int *)(DAT_14ca63c48 + 0x14 + lVar12 * 0x28) == 0x10) {
      lVar18 = DAT_14ca63c48 + lVar12 * 0x28;
      if (((*(int *)(lVar18 + 0x18) == 1) && (*(int *)(lVar18 + 4) == 0)) &&
         ((*(int *)(lVar18 + 8) == 0 &&
          ((*(int *)(lVar18 + 0xc) == 0 && (*(int *)(lVar18 + 0x10) == 0)))))) {
        if (*(longlong *)(DAT_14ca63c48 + 0x20 + lVar12 * 0x28) != 0) {
          lVar12 = FUN_144735dd8(param_1,DAT_14ca63c48 + lVar12 * 0x28 + 0x20,
                                 CONCAT71((int7)((ulonglong)(lVar18 + 4) >> 8),2));
          goto LAB_1448f5c5c;
        }
        break;
      }
    }
    uVar15 = DAT_14ca63c90;
  }
  alStack_98[0] = 0;
  alStack_98[1] = 0;
  uStack_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lVar12 = *(longlong *)(param_1 + 0x18);
  pwStack_68 = L"DefaultStructuredBuffer";
  puStack_d8 = &DAT_100000010;
  uStack_c8 = 0;
  uStack_d0 = 0x10101;
  uStack_c0 = 0x10;
  uStack_bc = 0x10;
  uStack_b8 = 0x10101;
  if (*(char *)(lVar12 + 0x69) == '\0') {
    FUN_14002049c(lVar12,CONCAT71((int7)(uVar15 >> 8),1));
    pwStack_150 = (wchar_t *)alStack_98;
    pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&lStack_e0,lVar12,&uStack_c0);
    *(undefined4 *)(lStack_e0 + 0x18) = 0x70;
    FUN_14002049c(lVar12,0);
  }
  else {
    pwStack_150 = (wchar_t *)alStack_98;
    pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&lStack_e0,lVar12,&uStack_c0);
    *(undefined4 *)(lStack_e0 + 0x18) = 0x70;
  }
  cVar4 = *(char *)(lVar12 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(lVar12,1);
  }
  pwStack_150 = (wchar_t *)CONCAT44(pwStack_150._4_4_,1);
  pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,0x10);
  lStack_100 = lStack_e0;
  puVar17 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar12,lStack_e0,0);
  if (cVar4 == '\0') {
    FUN_14002049c(lVar12,0);
  }
  lVar18 = lStack_100;
  *puVar17 = 0;
  puVar17[1] = 0;
  lStack_f0 = lVar12;
  if (*(char *)(lVar12 + 0x69) == '\0') {
    FUN_14002049c(lVar12,1);
    lVar18 = lStack_100;
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar12,lStack_100);
    FUN_14002049c(lVar12,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar12,lStack_100);
  }
  puStack_a0 = (undefined8 *)0x0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_ac = &DAT_100000010;
  uStack_c0 = uVar8;
  puVar17 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  if (lVar18 == 0) {
    puVar20 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
    puVar20 = puStack_a0;
  }
  pwStack_150 = pwStack_68;
  pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,1);
  lStack_e0 = lVar18;
  FUN_14004772e(puVar17,lStack_f0,&lStack_e0,&puStack_d8);
  if (puVar20 != puVar17) {
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
    }
    puStack_a0 = puVar17;
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
  }
  uVar13 = DAT_14ca63c50;
  uVar15 = (ulonglong)DAT_14ca63c50;
  lVar12 = (longlong)(int)DAT_14ca63c50;
  uVar14 = DAT_14ca63c50 + 1;
  DAT_14ca63c50 = uVar14;
  if (DAT_14ca63c54 < uVar14) {
    FUN_1456bceb2(&DAT_14ca63c48,uVar13);
  }
  lVar7 = lStack_100;
  lVar18 = DAT_14ca63c48;
  puVar3 = (uint *)(DAT_14ca63c48 + 0xc + lVar12 * 0x28);
  *puVar3 = (uint)uStack_b4;
  puVar3[1] = uStack_b4._4_4_;
  puVar3[2] = (uint)uStack_ac;
  puVar3[3] = uStack_ac._4_4_;
  puVar3 = (uint *)(lVar18 + lVar12 * 0x28);
  *puVar3 = uStack_c0;
  puVar3[1] = uStack_bc;
  puVar3[2] = uStack_b8;
  puVar3[3] = (uint)uStack_b4;
  *(undefined8 **)(lVar18 + 0x20 + lVar12 * 0x28) = puStack_a0;
  if (puStack_a0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puStack_a0 + 1) = *(int *)(puStack_a0 + 1) + 1;
    UNLOCK();
  }
  if (DAT_14ca63c80 <= uVar13) {
    uVar2 = (ulonglong)(uVar13 + (uVar14 == 0)) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar12 & 0x1f);
    uVar14 = 0x20;
    if (0x20 < uVar9) {
      uVar14 = uVar9;
    }
    FUN_1404b04e2(&DAT_14ca63c78,uVar14);
  }
  uVar8 = uVar8 & DAT_14ca63c7c;
  *(undefined4 *)(DAT_14ca63c90 + uVar15 * 4) =
       *(undefined4 *)(DAT_14ca63c88 + (ulonglong)uVar8 * 4);
  *(uint *)(DAT_14ca63c88 + (ulonglong)uVar8 * 4) = uVar13;
  lVar12 = FUN_144735dd8(param_1,&puStack_a0,2);
  if (puStack_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puStack_a0)(puStack_a0,1);
    }
  }
  if (lVar7 != 0) {
    LOCK();
    puVar3 = (uint *)(lVar7 + 8);
    uVar13 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar7);
    }
  }
LAB_1448f5c5c:
  puVar21 = puStack_e8;
  if ((*(byte *)(lVar12 + 0x68) & 0x80) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x1c;
  }
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar17 = puVar20 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar17) {
    FUN_140023dd8(puStack_e8,0x50);
    puVar20 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar20 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar17;
  puVar20[1] = *(undefined8 *)(lVar12 + 8);
  uVar13 = 0;
  puVar20[2] = 0;
  *(undefined1 *)(puVar20 + 3) = 3;
  *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
  *puVar20 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar20 + 5) = uVar16;
  *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
  puVar20[7] = 0;
  puVar20[8] = lVar12;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(lStack_f8,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar19[0x3a] = puVar20;
  alStack_98[0] = 0x400000001;
  alStack_98[1] = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  lVar12 = 0;
  do {
    uVar14 = (uint)(*(int *)((longlong)alStack_98 + lVar12) * -0x3361d2af) >> 0x11 |
             *(int *)((longlong)alStack_98 + lVar12) * 0x16a88000;
    uVar13 = uVar14 * 0x1b873593 ^ uVar13;
    uVar13 = (uVar13 << 0xd | uVar13 >> 0x13) * 5 + 0xe6546b64;
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x18);
  uVar13 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
  uVar8 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar13 = *(uint *)(DAT_14ca63c88 + (ulonglong)(DAT_14ca63c7c & uVar8) * 4);
  uVar15 = (ulonglong)uVar14;
  do {
    if (uVar13 == 0xffffffff) {
LAB_1448f69fc:
      alStack_98[0] = 0;
      alStack_98[1] = 0;
      uStack_88 = 1;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      lVar12 = *(longlong *)(param_1 + 0x18);
      pwStack_68 = L"DefaultStructuredBuffer";
      puStack_d8 = &DAT_100000004;
      uStack_c8 = 0;
      uStack_d0 = 0x10101;
      uStack_c0 = 4;
      uStack_bc = 4;
      uStack_b8 = 0x10101;
      if (*(char *)(lVar12 + 0x69) == '\0') {
        FUN_14002049c(lVar12,CONCAT71((int7)(uVar15 >> 8),1));
        pwStack_150 = (wchar_t *)alStack_98;
        pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&lStack_e0,lVar12,&uStack_c0);
        *(undefined4 *)(lStack_e0 + 0x18) = 0x70;
        FUN_14002049c(lVar12,0);
      }
      else {
        pwStack_150 = (wchar_t *)alStack_98;
        pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&lStack_e0,lVar12,&uStack_c0);
        *(undefined4 *)(lStack_e0 + 0x18) = 0x70;
      }
      lVar18 = lStack_e0;
      cVar4 = *(char *)(lVar12 + 0x69);
      if (cVar4 == '\0') {
        FUN_14002049c(lVar12,1);
      }
      pwStack_150 = (wchar_t *)CONCAT44(pwStack_150._4_4_,1);
      pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,4);
      lStack_100 = lVar18;
      puVar11 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar12,lVar18,0);
      if (cVar4 == '\0') {
        FUN_14002049c(lVar12,0);
      }
      lVar18 = lStack_100;
      *puVar11 = 0;
      lStack_f0 = lVar12;
      if (*(char *)(lVar12 + 0x69) == '\0') {
        FUN_14002049c(lVar12,1);
        lVar18 = lStack_100;
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar12,lStack_100);
        FUN_14002049c(lVar12,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar12,lStack_100);
      }
      puStack_a0 = (undefined8 *)0x0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_ac = &DAT_100000004;
      uStack_c0 = uVar8;
      puVar17 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      if (lVar18 == 0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        LOCK();
        *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
        UNLOCK();
        puVar20 = puStack_a0;
      }
      pwStack_150 = pwStack_68;
      pwStack_158 = (wchar_t *)CONCAT44(pwStack_158._4_4_,1);
      lStack_e0 = lVar18;
      FUN_14004772e(puVar17,lStack_f0,&lStack_e0,&puStack_d8);
      if (puVar20 != puVar17) {
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
        }
        puStack_a0 = puVar17;
        if (puVar20 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      uVar13 = DAT_14ca63c50;
      uVar15 = (ulonglong)DAT_14ca63c50;
      lVar12 = (longlong)(int)DAT_14ca63c50;
      uVar14 = DAT_14ca63c50 + 1;
      DAT_14ca63c50 = uVar14;
      if (DAT_14ca63c54 < uVar14) {
        FUN_1456bceb2(&DAT_14ca63c48,uVar13);
      }
      lVar7 = lStack_100;
      lVar18 = DAT_14ca63c48;
      puVar3 = (uint *)(DAT_14ca63c48 + 0xc + lVar12 * 0x28);
      *puVar3 = (uint)uStack_b4;
      puVar3[1] = uStack_b4._4_4_;
      puVar3[2] = (uint)uStack_ac;
      puVar3[3] = uStack_ac._4_4_;
      puVar3 = (uint *)(lVar18 + lVar12 * 0x28);
      *puVar3 = uStack_c0;
      puVar3[1] = uStack_bc;
      puVar3[2] = uStack_b8;
      puVar3[3] = (uint)uStack_b4;
      *(undefined8 **)(lVar18 + 0x20 + lVar12 * 0x28) = puStack_a0;
      if (puStack_a0 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puStack_a0 + 1) = *(int *)(puStack_a0 + 1) + 1;
        UNLOCK();
      }
      if (DAT_14ca63c80 <= uVar13) {
        uVar2 = (ulonglong)(uVar13 + (uVar14 == 0)) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar9 = 1 << ((byte)lVar12 & 0x1f);
        uVar14 = 0x20;
        if (0x20 < uVar9) {
          uVar14 = uVar9;
        }
        FUN_1404b04e2(&DAT_14ca63c78,uVar14);
      }
      uVar8 = uVar8 & DAT_14ca63c7c;
      *(undefined4 *)(DAT_14ca63c90 + uVar15 * 4) =
           *(undefined4 *)(DAT_14ca63c88 + (ulonglong)uVar8 * 4);
      *(uint *)(DAT_14ca63c88 + (ulonglong)uVar8 * 4) = uVar13;
      lVar12 = FUN_144735dd8(param_1,&puStack_a0,2);
      if (puStack_a0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_a0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_a0)(puStack_a0,1);
        }
      }
      if (lVar7 != 0) {
        LOCK();
        puVar3 = (uint *)(lVar7 + 8);
        uVar13 = *puVar3;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if ((uVar13 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar7);
        }
      }
LAB_1448f5e08:
      puVar21 = puStack_e8;
      if ((*(byte *)(lVar12 + 0x68) & 0x80) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0x1c;
      }
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar20 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar17) {
        FUN_140023dd8(puStack_e8,0x50);
        puVar20 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar20 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar17;
      puVar20[1] = *(undefined8 *)(lVar12 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 3;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar20 + 5) = uVar16;
      *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
      puVar20[7] = 0;
      puVar20[8] = lVar12;
      iVar5 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
        FUN_1447568fc(lStack_f8,iVar5);
      }
      puVar21 = puStack_e8;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar19[0x3b] = puVar20;
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c926f30) &&
           (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
          FUN_1413288e0(&DAT_14c926ca8);
          atexit(FUN_1427ac032);
          _Init_thread_footer(&DAT_14c926f30);
        }
        if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
          (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e2a38) && (FUN_144b3d300(&DAT_14c9e2a38), DAT_14c9e2a38 == -1))
      {
        FUN_1456e5f94(alStack_98);
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        pcStack_140 = "Unknown";
        uStack_148 = 0;
        pwStack_150 = L"AVSM";
        pwStack_158 = L"FAdaptiveVolumetricShadowMapUniformBufferParameters";
        uStack_130 = 0x1d0;
        uStack_138 = 0x1a7;
        plStack_128 = alStack_98;
        FUN_140b49562(&DAT_14c9e29b8,1,1);
        if (alStack_98[0] != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cad7fb);
        _Init_thread_footer(&DAT_14c9e2a38);
        puVar21 = puStack_e8;
      }
      uVar6 = DAT_14c9e29d0;
      puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar17 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar19) {
        FUN_140023dd8(puVar21,0x50);
        puVar17 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 9;
      }
      *puVar21 = (ulonglong)puVar19;
      puVar17[1] = uVar6;
      puVar17[2] = 0;
      *puVar17 = &PTR_FUN_14a1fb9b8;
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c926f30) &&
           (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
          FUN_1413288e0(&DAT_14c926ca8);
          atexit(FUN_1427ac032);
          _Init_thread_footer(&DAT_14c926f30);
        }
        if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
          (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e2a38) && (FUN_144b3d300(&DAT_14c9e2a38), DAT_14c9e2a38 == -1))
      {
        FUN_1456e5f94(alStack_98);
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        pcStack_140 = "Unknown";
        uStack_148 = 0;
        pwStack_150 = L"AVSM";
        pwStack_158 = L"FAdaptiveVolumetricShadowMapUniformBufferParameters";
        uStack_130 = 0x1d0;
        uStack_138 = 0x1a7;
        plStack_128 = alStack_98;
        FUN_140b49562(&DAT_14c9e29b8,1,1);
        if (alStack_98[0] != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142cad7fb);
        _Init_thread_footer(&DAT_14c9e2a38);
      }
      puVar17[3] = puVar10;
      lVar12 = DAT_14c9e2a00;
      puVar17[4] = DAT_14c9e2a00;
      if (lVar12 != 0) {
        LOCK();
        piVar1 = (int *)(lVar12 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      puVar17[5] = &DAT_14c9e29b8;
      puVar17[6] = 0;
      *(undefined4 *)(puVar17 + 7) = 0xffffffff;
      *(undefined1 *)((longlong)puVar17 + 0x3c) = 0;
      *puVar17 = &PTR_FUN_14a240a50;
      puVar17[8] = puVar10;
      iVar5 = *(int *)(param_1 + 0x1b0);
      *(uint *)(param_1 + 0x1b0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1b4) < iVar5 + 1U) {
        FUN_1402aa76e(param_1 + 0x1a8,iVar5);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar5 * 8) = puVar17;
      *(int *)(puVar17 + 7) = *(int *)(param_1 + 0x1b0) + -1;
      if ((uStack_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
        return puVar17;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    lVar12 = (longlong)(int)uVar13;
    uVar15 = lVar12 * 5;
    if (*(int *)(DAT_14ca63c48 + 0x14 + lVar12 * 0x28) == 4) {
      lVar18 = DAT_14ca63c48 + lVar12 * 0x28;
      if ((((*(int *)(lVar18 + 0x18) == 1) && (*(int *)(lVar18 + 4) == 0)) &&
          (*(int *)(lVar18 + 8) == 0)) &&
         ((*(int *)(lVar18 + 0xc) == 0 && (*(int *)(lVar18 + 0x10) == 0)))) {
        if (*(longlong *)(DAT_14ca63c48 + 0x20 + lVar12 * 0x28) != 0) {
          lVar12 = FUN_144735dd8(param_1,DAT_14ca63c48 + lVar12 * 0x28 + 0x20,
                                 CONCAT71((int7)((ulonglong)(lVar18 + 4) >> 8),2));
          goto LAB_1448f5e08;
        }
        goto LAB_1448f69fc;
      }
    }
    uVar13 = *(uint *)(DAT_14ca63c90 + (ulonglong)uVar13 * 4);
    uVar15 = DAT_14ca63c90;
  } while( true );
}



// FUNCTION 1471b9e90 FUN_1471b9e90 body=177 status=ok
// SIG undefined FUN_1471b9e90(void)

void FUN_1471b9e90(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e704ae();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e6310,param_4);
  local_78 = &DAT_14c9e6310;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471cd04c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471b9f42 FUN_1471b9f42 body=177 status=ok
// SIG undefined FUN_1471b9f42(void)

void FUN_1471b9f42(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f03c82();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e6398,param_4);
  local_78 = &DAT_14c9e6398;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471cd42c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471b9ff4 FUN_1471b9ff4 body=177 status=ok
// SIG undefined FUN_1471b9ff4(void)

void FUN_1471b9ff4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f49054();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e6288,param_4);
  local_78 = &DAT_14c9e6288;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471cd80c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471ba0a6 FUN_1471ba0a6 body=42 status=ok
// SIG undefined FUN_1471ba0a6(void)

void FUN_1471ba0a6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471ba0d8 FUN_1471ba0d8 body=96 status=ok
// SIG undefined FUN_1471ba0d8(void)

undefined8 FUN_1471ba0d8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f14db6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6420,1);
  return uVar3;
}



// FUNCTION 1471ba138 FUN_1471ba138 body=52 status=ok
// SIG undefined FUN_1471ba138(void)

void FUN_1471ba138(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471ba16c FUN_1471ba16c body=42 status=ok
// SIG undefined FUN_1471ba16c(void)

void FUN_1471ba16c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471ba1bc FUN_1471ba1bc body=96 status=ok
// SIG undefined FUN_1471ba1bc(void)

undefined8 FUN_1471ba1bc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2cfba();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e64a8,1);
  return uVar3;
}



// FUNCTION 1471ba21c FUN_1471ba21c body=52 status=ok
// SIG undefined FUN_1471ba21c(void)

void FUN_1471ba21c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471ba250 FUN_1471ba250 body=42 status=ok
// SIG undefined FUN_1471ba250(void)

void FUN_1471ba250(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471ba2a0 FUN_1471ba2a0 body=96 status=ok
// SIG undefined FUN_1471ba2a0(void)

undefined8 FUN_1471ba2a0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e55902();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6530,1);
  return uVar3;
}



// FUNCTION 1471ba300 FUN_1471ba300 body=52 status=ok
// SIG undefined FUN_1471ba300(void)

void FUN_1471ba300(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471ba334 FUN_1471ba334 body=434 status=ok
// SIG undefined FUN_1471ba334(void)

int FUN_1471ba334(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  
  plVar10 = DAT_14c9e3c48;
  iVar8 = DAT_14c9e3c30;
  lVar4 = DAT_14c9e3c28;
  if (param_1 == 0) {
    iVar8 = -1;
  }
  else {
    if ((longlong)DAT_14c9e3c30 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(DAT_14c9e3c28 + 0x18 + lVar6) ==
            *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x10)) {
          piVar9 = (int *)(DAT_14c9e3c28 + 8 + lVar6);
          *piVar9 = *piVar9 + 1;
          return *(int *)(lVar4 + lVar6);
        }
        lVar6 = lVar6 + 0x28;
      } while ((longlong)DAT_14c9e3c30 * 0x28 != lVar6);
    }
    plVar3 = (longlong *)*DAT_14c9e3c48;
    if (plVar3 == (longlong *)0x0) {
      piVar9 = (int *)FUN_1471ba4e6();
    }
    else {
      iVar8 = *(int *)(plVar3 + 1);
      DAT_14c9e3c48 = plVar3;
      *(undefined4 *)(plVar3 + 1) = 0;
      if (plVar10 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      piVar9 = (int *)((longlong)iVar8 * 0x28 + DAT_14c9e3c28);
    }
    uVar5 = DAT_14c967818;
    piVar9[0] = -1;
    piVar9[1] = -1;
    piVar9[2] = 0;
    *(ulonglong *)(piVar9 + 3) = uVar5;
    lVar4 = *(longlong *)(piVar9 + 6);
    piVar9[6] = 0;
    piVar9[7] = 0;
    if (lVar4 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      plVar10 = *(longlong **)(piVar9 + 6);
    }
    *(undefined1 *)(piVar9 + 8) = 0;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x10);
    if (plVar10 != plVar3) {
      *(longlong **)(piVar9 + 6) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        puVar1 = (uint *)(plVar10 + 1);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812(plVar10);
        }
      }
      plVar10 = *(longlong **)(piVar9 + 6);
    }
    *piVar9 = iVar8;
    piVar9[1] = -1;
    piVar9[2] = 1;
    if (plVar10 == (longlong *)0x0) {
      uVar7 = DAT_14c967818 >> 0x20;
      uVar5 = DAT_14c967818;
    }
    else {
      lVar4 = (**(code **)(*plVar10 + 8))(plVar10);
      uVar7 = (ulonglong)*(uint *)(lVar4 + 0x28);
      lVar4 = (**(code **)(*plVar10 + 8))(plVar10);
      uVar5 = (ulonglong)*(uint *)(lVar4 + 0x24);
    }
    *(ulonglong *)(piVar9 + 3) = uVar5 & 0xffffffff | uVar7 << 0x20;
    DAT_14c9e3c60 = 1;
  }
  return iVar8;
}



// FUNCTION 1471ba4e6 FUN_1471ba4e6 body=80 status=ok
// SIG undefined FUN_1471ba4e6(void)

longlong FUN_1471ba4e6(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_14c9e3c30;
  lVar2 = (longlong)(int)DAT_14c9e3c30;
  DAT_14c9e3c30 = DAT_14c9e3c30 + 1;
  if (DAT_14c9e3c34 < DAT_14c9e3c30) {
    FUN_1471cdc7a(&DAT_14c9e3c28,iVar1);
  }
  lVar2 = lVar2 * 0x28 + DAT_14c9e3c28;
  FUN_1471cdc48(lVar2,1);
  return lVar2;
}



// FUNCTION 1471ba536 FUN_1471ba536 body=312 status=ok
// SIG undefined FUN_1471ba536(void)

void FUN_1471ba536(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((param_1 != 0xffffffff) && (param_1 < DAT_14c9e3c30)) {
    lVar5 = (longlong)(int)param_1 * 0x28;
    piVar2 = (int *)(DAT_14c9e3c28 + 8 + lVar5);
    *piVar2 = *piVar2 + -1;
    if (*(int *)(DAT_14c9e3c28 + 8 + lVar5) == 0) {
      iVar4 = *(int *)(DAT_14c9e3c28 + lVar5 + 4);
      if (iVar4 != -1) {
        puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar7 = 0;
        *(int *)(puVar7 + 1) = iVar4;
        if (puVar7 != (undefined8 *)0x0) {
          *DAT_14c9e3c50 = puVar7;
          DAT_14c9e3c50 = puVar7;
        }
      }
      if (DAT_14c9e3c30 - 1 == param_1) {
        FUN_1471ba66e(&DAT_14c9e3c28,param_1,1);
        return;
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar7 = 0;
      *(uint *)(puVar7 + 1) = param_1;
      if (puVar7 != (undefined8 *)0x0) {
        *DAT_14c9e3c40 = puVar7;
        DAT_14c9e3c40 = puVar7;
      }
      uVar6 = DAT_14c967818;
      puVar7 = (undefined8 *)(DAT_14c9e3c28 + (longlong)(int)param_1 * 0x28);
      *puVar7 = 0xffffffffffffffff;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined8 *)((longlong)puVar7 + 0xc) = uVar6;
      lVar5 = puVar7[3];
      puVar7[3] = 0;
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      *(undefined1 *)(puVar7 + 4) = 0;
    }
  }
  return;
}



// FUNCTION 1471ba66e FUN_1471ba66e body=135 status=ok
// SIG undefined FUN_1471ba66e(void)

void FUN_1471ba66e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1471cdc7a(param_1,iVar1);
    }
    FUN_1471cdc48((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1471cdd0e(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1471cdd70(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1471ba6f6 FUN_1471ba6f6 body=53 status=ok
// SIG undefined FUN_1471ba6f6(void)

float FUN_1471ba6f6(uint param_1)

{
  float fVar1;
  
  fVar1 = -1.0;
  if ((param_1 < DAT_14c9e3c30) && (DAT_14c9e3c20 != 0)) {
    fVar1 = (float)*(uint *)(DAT_14c9e3c28 + 4 + (longlong)(int)param_1 * 0x28);
  }
  return fVar1;
}



// FUNCTION 1471ba72c FUN_1471ba72c body=42 status=ok
// SIG undefined FUN_1471ba72c(void)

void FUN_1471ba72c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471ba762 FUN_1471ba762 body=96 status=ok
// SIG undefined FUN_1471ba762(void)

undefined8 FUN_1471ba762(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2d5ae();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e65b8,1);
  return uVar3;
}



// FUNCTION 1471ba7c2 FUN_1471ba7c2 body=52 status=ok
// SIG undefined FUN_1471ba7c2(void)

void FUN_1471ba7c2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471ba7f6 FUN_1471ba7f6 body=42 status=ok
// SIG undefined FUN_1471ba7f6(void)

void FUN_1471ba7f6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471ba82c FUN_1471ba82c body=96 status=ok
// SIG undefined FUN_1471ba82c(void)

undefined8 FUN_1471ba82c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f04270();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6640,1);
  return uVar3;
}



// FUNCTION 1471ba88c FUN_1471ba88c body=52 status=ok
// SIG undefined FUN_1471ba88c(void)

void FUN_1471ba88c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471ba8c0 FUN_1471ba8c0 body=42 status=ok
// SIG undefined FUN_1471ba8c0(void)

void FUN_1471ba8c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471ba918 FUN_1471ba918 body=96 status=ok
// SIG undefined FUN_1471ba918(void)

undefined8 FUN_1471ba918(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f695e2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e66c8,1);
  return uVar3;
}



// FUNCTION 1471ba978 FUN_1471ba978 body=52 status=ok
// SIG undefined FUN_1471ba978(void)

void FUN_1471ba978(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471ba9ad FUN_1471ba9ad body=13 status=ok
// SIG undefined FUN_1471ba9ad(void)

byte FUN_1471ba9ad(int param_1)

{
  return 2 < param_1 & DAT_14ca84e15;
}



// FUNCTION 1471ba9ba FUN_1471ba9ba body=678 status=ok
// SIG undefined FUN_1471ba9ba(void)

void FUN_1471ba9ba(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined8 local_94;
  short local_8c;
  undefined4 local_8a;
  undefined1 local_86;
  undefined2 local_85;
  undefined1 local_83;
  ulonglong local_80;
  
  uVar6 = DAT_14ca85098;
  uVar5 = DAT_14ca85094;
  uVar4 = DAT_14ca85090;
  uVar3 = DAT_14ca8508c;
  uVar2 = DAT_14ca85088;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar7 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar7 = DAT_14c760db4;
  }
  if ((2 < (int)uVar7) && (DAT_14ca84e15 == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar9 = CONCAT44(uVar1,uVar1);
    local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_98 = 0;
    local_8c = 1;
    local_86 = 0;
    local_b0 = DAT_14ca85088;
    local_ac = DAT_14ca8508c;
    local_a8 = DAT_14ca85090;
    local_a4 = DAT_14ca85094;
    local_a0 = DAT_14ca85098;
    local_85 = 10;
    local_8a = 0x1010001;
    sVar8 = (short)uVar1;
    if (sVar8 != 0) {
      local_86 = 2;
      local_8c = sVar8;
    }
    local_b8 = 0x48;
    local_83 = 0xff;
    local_c8 = L"IndirectLightingCache_0";
    local_94 = uVar9;
    FUN_14490a8c0(&DAT_14ca9a3e8,&DAT_14ca85100,&local_b8,param_1 + 0x18);
    local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_98 = 0;
    local_8c = 1;
    local_86 = 0;
    local_b0 = uVar2;
    local_ac = uVar3;
    local_a8 = uVar4;
    local_a4 = uVar5;
    local_a0 = uVar6;
    local_85 = 10;
    local_8a = 0x1010001;
    if (sVar8 != 0) {
      local_86 = 2;
      local_8c = sVar8;
    }
    local_b8 = 0x48;
    local_83 = 0xff;
    local_c8 = L"IndirectLightingCache_1";
    local_94 = uVar9;
    FUN_14490a8c0(&DAT_14ca9a3e8,&DAT_14ca85100,&local_b8,param_1 + 0x20);
    local_9c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_98 = 0;
    local_8c = 1;
    local_86 = 0;
    local_b0 = uVar2;
    local_ac = uVar3;
    local_a8 = uVar4;
    local_a4 = uVar5;
    local_a0 = uVar6;
    local_85 = 10;
    local_8a = 0x1010001;
    if (sVar8 != 0) {
      local_86 = 2;
      local_8c = sVar8;
    }
    local_b8 = 0x48;
    local_83 = 0xff;
    local_c8 = L"IndirectLightingCache_2";
    local_94 = uVar9;
    FUN_14490a8c0(&DAT_14ca9a3e8,&DAT_14ca85100,&local_b8,param_1 + 0x28);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471bac62 FUN_1471bac62 body=61 status=ok
// SIG undefined FUN_1471bac62(void)

void FUN_1471bac62(longlong param_1)

{
  FUN_14118259e(&DAT_14ca9a3e8,param_1 + 0x18);
  FUN_14118259e(&DAT_14ca9a3e8,param_1 + 0x20);
  FUN_14118259e(&DAT_14ca9a3e8,param_1 + 0x28);
  return;
}



// FUNCTION 1471baca0 FUN_1471baca0 body=81 status=ok
// SIG undefined FUN_1471baca0(void)

longlong FUN_1471baca0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0;
  uVar1 = FUN_1448eb174(param_2,0xc,0);
  iVar2 = FUN_1471ce00e((longlong *)(param_1 + 0x30),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x30);
  }
  return lVar3 + 0x10;
}



// FUNCTION 1471bacf2 FUN_1471bacf2 body=78 status=ok
// SIG undefined FUN_1471bacf2(void)

void FUN_1471bacf2(longlong param_1,undefined4 *param_2,int param_3)

{
  if (1 < param_3) {
    FUN_14714fd16(param_1 + 0x80,*param_2,param_2[1],param_2[2],param_3,param_3,param_3);
  }
  FUN_1471ce078(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 1471bad40 FUN_1471bad40 body=645 status=ok
// SIG undefined FUN_1471bad40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1471bad40(double *param_1,int param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  
  dVar7 = log(param_1[3] + param_1[3]);
  dVar2 = 1.0;
  dVar1 = dVar2;
  if (1.0 <= dVar7 / (double)_DAT_14c9e4374) {
    dVar1 = dVar7 / (double)_DAT_14c9e4374;
  }
  dVar8 = log(param_1[4] + param_1[4]);
  dVar7 = dVar2;
  if (1.0 <= dVar8 / (double)_DAT_14c9e4374) {
    dVar7 = dVar8 / (double)_DAT_14c9e4374;
  }
  dVar8 = log(param_1[5] + param_1[5]);
  if (1.0 <= dVar8 / (double)_DAT_14c9e4374) {
    dVar2 = dVar8 / (double)_DAT_14c9e4374;
  }
  fVar4 = powf(DAT_14c9e4370,(float)((longlong)dVar1 + 1));
  fVar5 = powf(DAT_14c9e4370,(float)((longlong)dVar7 + 1));
  fVar6 = powf(DAT_14c9e4370,(float)((longlong)dVar2 + 1));
  iVar3 = 3;
  if (2 < param_2) {
    iVar3 = param_2 + -2;
  }
  dVar1 = 1.0 / (double)iVar3;
  dVar7 = (double)fVar6 * dVar1;
  dVar2 = (double)fVar5 * dVar1;
  dVar1 = dVar1 * (double)fVar4;
  if (param_2 < 3) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (dVar1 * 0.5 + *param_1) / dVar1;
    auVar10 = roundpd(auVar10,auVar10,1);
    dVar8 = auVar10._0_8_ * dVar1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (dVar2 * 0.5 + param_1[1]) / dVar2;
    auVar10 = roundpd(auVar13,auVar13,1);
    dVar11 = auVar10._0_8_ * dVar2;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (dVar7 * 0.5 + param_1[2]) / dVar7;
    auVar10 = roundpd(auVar16,auVar16,1);
    dVar14 = auVar10._0_8_ * dVar7;
    dVar1 = 0.0;
    dVar2 = 0.0;
    dVar7 = 0.0;
  }
  else {
    auVar9._0_8_ = (*param_1 - param_1[3]) / dVar1;
    auVar9._8_8_ = 0;
    auVar10 = roundpd(auVar9,auVar9,1);
    auVar12._0_8_ = (param_1[1] - param_1[4]) / dVar2;
    auVar12._8_8_ = 0;
    auVar13 = roundpd(auVar12,auVar12,1);
    auVar15._0_8_ = (param_1[2] - param_1[5]) / dVar7;
    auVar15._8_8_ = 0;
    auVar16 = roundpd(auVar15,auVar15,1);
    dVar14 = auVar16._0_8_ * dVar7 - dVar7 * 0.5;
    dVar11 = auVar13._0_8_ * dVar2 - dVar2 * 0.5;
    dVar17 = (double)param_2;
    dVar8 = auVar10._0_8_ * dVar1 - dVar1 * 0.5;
    dVar7 = dVar7 * dVar17;
    dVar2 = dVar2 * dVar17;
    dVar1 = dVar1 * dVar17;
  }
  *param_3 = dVar8;
  param_3[1] = dVar11;
  param_3[2] = dVar14;
  *param_4 = dVar1;
  param_4[1] = dVar2;
  param_4[2] = dVar7;
  return;
}



// FUNCTION 1471bafc6 FUN_1471bafc6 body=563 status=ok
// SIG undefined FUN_1471bafc6(void)

void FUN_1471bafc6(longlong param_1,int *param_2,int param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8,double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  fVar9 = (float)*(int *)(param_1 + 0x14);
  dVar5 = (double)((float)param_2[2] / fVar9);
  dVar6 = (double)((float)param_2[1] / fVar9);
  dVar7 = (double)((float)*param_2 / fVar9);
  dVar8 = (double)(0.5 / fVar9);
  *param_8 = dVar8 + dVar7;
  param_8[1] = dVar8 + dVar6;
  param_8[2] = dVar5 + dVar8;
  if (param_3 < 3) {
    *param_6 = 0.0;
    param_6[1] = 0.0;
    param_6[2] = 0.0;
    dVar8 = (double)(0.5 / (float)*(int *)(param_1 + 0x14));
    *param_7 = dVar7 + dVar8;
    param_7[1] = dVar6 + dVar8;
    param_7[2] = dVar5 + dVar8;
    param_9[2] = param_8[2];
    dVar5 = param_8[1];
    *param_9 = *param_8;
    param_9[1] = dVar5;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    dVar8 = *param_5;
    uVar10 = SUB84(dVar8,0);
    uVar11 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if ((dVar8 == 0.0) && (!NAN(dVar8))) {
      *param_5 = 0.009999999776482582;
      uVar10 = 0x40000000;
      uVar11 = 0x3f847ae1;
    }
    dVar8 = param_5[1];
    uVar13 = SUB84(dVar8,0);
    uVar14 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if ((dVar8 == 0.0) && (!NAN(dVar8))) {
      param_5[1] = 0.009999999776482582;
      uVar13 = 0x40000000;
      uVar14 = 0x3f847ae1;
    }
    dVar8 = param_5[2];
    uVar15 = SUB84(dVar8,0);
    uVar16 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if ((dVar8 == 0.0) && (!NAN(dVar8))) {
      param_5[2] = 0.009999999776482582;
      uVar15 = 0x40000000;
      uVar16 = 0x3f847ae1;
    }
    dVar12 = (double)((float)param_3 / (float)iVar4);
    *param_6 = dVar12 / (double)CONCAT44(uVar11,uVar10);
    param_6[1] = dVar12 / (double)CONCAT44(uVar14,uVar13);
    param_6[2] = dVar12 / (double)CONCAT44(uVar16,uVar15);
    dVar8 = param_4[2];
    dVar1 = param_4[1];
    dVar2 = param_5[2];
    dVar3 = param_5[1];
    *param_7 = dVar7 - (*param_4 * dVar12) / *param_5;
    param_7[1] = dVar6 - (dVar1 * dVar12) / dVar3;
    param_7[2] = dVar5 - (dVar8 * dVar12) / dVar2;
    dVar8 = (double)(0.5 / (float)*(int *)(param_1 + 0x14));
    *param_9 = (dVar7 + dVar12) - dVar8;
    param_9[1] = (dVar6 + dVar12) - dVar8;
    param_9[2] = (dVar5 + dVar12) - dVar8;
  }
  return;
}



// FUNCTION 1471bb1fa FUN_1471bb1fa body=180 status=ok
// SIG undefined FUN_1471bb1fa(void)

undefined8 FUN_1471bb1fa(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  char local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = 1;
  if (*(char *)(*(longlong *)(param_2 + 8) + 0xa8) != '\x01' && param_3 == '\0') {
    uVar1 = DAT_14c76042c;
  }
  local_48 = param_3;
  local_40 = FUN_1471bb2b0(param_1,uVar1,*(longlong *)(param_2 + 8) + 0x180);
  local_30 = &local_40;
  local_38 = param_2 + 0x10;
  FUN_1471ce1e6(param_1 + 0x1b8,&local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 8 + (longlong)local_24 * 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471bb2b0 FUN_1471bb2b0 body=594 status=ok
// SIG undefined FUN_1471bb2b0(void)

undefined8 *
FUN_1471bb2b0(longlong param_1,int param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined4 *local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar2 = (undefined8 *)FUN_14001cc68(0x1e0,0x10);
  FUN_1471bb504(puVar2);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  iStack_9c = 0;
  local_68 = 0;
  if (param_2 == 1) {
    local_a8 = *(int *)(param_1 + 0x1b0);
    uStack_a4 = 0;
    uStack_a0 = 0;
    *(int *)(param_1 + 0x1b0) = local_a8 + 1;
  }
  else {
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,param_2);
    local_180 = (undefined8 *)CONCAT44(local_180._4_4_,param_2);
    local_188 = (undefined8 *)CONCAT44(local_188._4_4_,param_2);
    cVar1 = FUN_147150936(param_1 + 0x80,&local_a8,&uStack_a4,&uStack_a0);
    if (cVar1 == '\0') goto LAB_1471bb499;
  }
  iStack_9c = param_2;
  FUN_1471bad40(param_3,param_2,&local_98,&uStack_80);
  local_188 = &local_128;
  local_118 = uStack_70;
  local_128 = uStack_80;
  uStack_120 = local_78;
  local_148 = (undefined4)local_98;
  uStack_144 = local_98._4_4_;
  uStack_140 = (undefined4)uStack_90;
  uStack_13c = uStack_90._4_4_;
  local_138 = local_88;
  local_150 = uStack_a0;
  local_158 = CONCAT44(uStack_a4,local_a8);
  local_168 = &local_108;
  local_170 = &local_f0;
  local_178 = &local_d8;
  local_180 = &local_c0;
  FUN_1471bafc6(param_1,&local_158,iStack_9c);
  local_60 = &local_a8;
  local_58 = local_60;
  FUN_1471ce6e0(param_1 + 0x30,local_4c);
  puVar2[2] = local_c8;
  *puVar2 = local_d8;
  puVar2[1] = uStack_d0;
  puVar2[5] = local_b0;
  puVar2[3] = local_c0;
  puVar2[4] = uStack_b8;
  puVar2[8] = local_e0;
  puVar2[6] = local_f0;
  puVar2[7] = uStack_e8;
  *(undefined4 *)(puVar2 + 9) = local_108;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_104;
  *(undefined4 *)(puVar2 + 10) = uStack_100;
  *(undefined4 *)((longlong)puVar2 + 0x54) = uStack_fc;
  puVar2[0xb] = local_f8;
  puVar2[0xc] = CONCAT44(uStack_a4,local_a8);
  *(undefined4 *)(puVar2 + 0xd) = uStack_a0;
  *(int *)((longlong)puVar2 + 0x6c) = iStack_9c;
  *(undefined1 *)((longlong)puVar2 + 0x1d2) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x1d1) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x1d3) = param_5;
LAB_1471bb499:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1471bb504 FUN_1471bb504 body=332 status=ok
// SIG undefined FUN_1471bb504(void)

void FUN_1471bb504(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar2 = 0x9c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xcc);
  lVar2 = 0xcc;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xfc);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x23] = &DAT_3f8000003f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  lVar2 = 0x14c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x17c);
  lVar2 = 0x17c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1ac);
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x39] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x3a) = 0x100;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return;
}



// FUNCTION 1471bb650 FUN_1471bb650 body=108 status=ok
// SIG undefined FUN_1471bb650(void)

undefined8 FUN_1471bb650(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    lVar2 = param_1 + 0x1f0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1f8);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1b8) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 != (uint *)0x0) {
            return *(undefined8 *)(puVar1 + 2);
          }
          return 0;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1471bb6bc FUN_1471bb6bc body=98 status=ok
// SIG undefined FUN_1471bb6bc(void)

uint FUN_1471bb6bc(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if ((DAT_14c760420 != 0) && ((DAT_14c760e18 & 1) != 0)) {
    if ((*(int *)(param_1 + 0x3928) < 1) || ((longlong)*(int *)(param_2 + 0x3f0) < 1)) {
      uVar2 = 0;
    }
    else {
      lVar3 = 0;
      uVar2 = 0;
      do {
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 1000) + 8 + lVar3) + 0x50);
        uVar2 = CONCAT31((uint3)(uVar1 >> 0x15),(byte)uVar2 | (byte)(uVar1 >> 0xd)) & 0xffffff01;
        lVar3 = lVar3 + 0x13c10;
      } while ((longlong)*(int *)(param_2 + 0x3f0) * 0x13c10 - lVar3 != 0);
    }
  }
  return uVar2;
}



// FUNCTION 1471bb71e FUN_1471bb71e body=170 status=ok
// SIG undefined FUN_1471bb71e(void)

void FUN_1471bb71e(undefined8 param_1,longlong param_2,longlong param_3,int param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_RAX;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x3330) + (longlong)param_4 * 8);
  bVar1 = *(byte *)(lVar3 + 0x171);
  FUN_1471bb7c8(param_7,param_2 + 0x4e38,lVar3,
                CONCAT71((int7)((ulonglong)in_RAX >> 8),param_5) & 0xffffffff,param_6,param_7,
                param_8,param_9);
  if (((bVar1 & 2) == 0) && ((*(byte *)(lVar3 + 0x171) & 2) != 0)) {
    iVar2 = *(int *)(param_3 + 0x3360);
    *(uint *)(param_3 + 0x3360) = iVar2 + 1U;
    if (*(uint *)(&DAT_00003364 + param_3) < iVar2 + 1U) {
      FUN_14175e8cc((longlong *)(param_3 + 0x3358),iVar2);
    }
    *(longlong *)(*(longlong *)(param_3 + 0x3358) + (longlong)iVar2 * 8) = lVar3;
  }
  return;
}



// FUNCTION 1471bb7c8 FUN_1471bb7c8 body=880 status=ok
// SIG undefined FUN_1471bb7c8(void)

void FUN_1471bb7c8(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  byte param_5,undefined8 param_6,undefined8 param_7,longlong *param_8)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined7 uVar14;
  uint uVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined1 auStack_e8 [32];
  byte local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a0;
  longlong local_98;
  uint *local_90;
  longlong *local_88;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = *(longlong *)(param_3 + 8);
  plVar2 = (longlong *)(param_1 + 0x1b8);
  puVar1 = (uint *)(param_3 + 0x10);
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    lVar8 = param_1 + 0x1f0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1f8);
    }
    uVar15 = *(uint *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & *puVar1) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        puVar10 = (uint *)(*plVar2 + (longlong)(int)uVar15 * 0x18);
        if (*puVar10 == *puVar1) {
          if (puVar10 + 2 != (uint *)0x0 && puVar10 != (uint *)0x0) {
            lVar8 = *(longlong *)(puVar10 + 2);
            goto LAB_1471bb816;
          }
          break;
        }
        uVar15 = puVar10[4];
      } while (uVar15 != 0xffffffff);
    }
  }
  lVar8 = 0;
LAB_1471bb816:
  local_58 = lVar8;
  if (-1 < *(char *)(lVar4 + 0x6f)) goto LAB_1471bb829;
  cVar5 = *(char *)(lVar4 + 0x68);
  bVar16 = (byte)(param_4 & 0xffffffff);
  if (((((bVar16 == 0) || ((*(byte *)(lVar4 + 0x6d) & 0x40) == 0)) || (lVar8 == 0)) ||
      (*(char *)(lVar8 + 0x1d2) == '\0')) &&
     ((1 < (byte)(cVar5 - 1U) || (*(char *)(lVar4 + 0xa8) == '\0')))) goto LAB_1471bb829;
  uVar15 = *(uint *)(param_3 + 0x18);
  if (uVar15 == 0) {
LAB_1471bb8f0:
    lVar11 = *(longlong *)(param_3 + 0xb8);
LAB_1471bb903:
    local_a0 = (longlong *)(param_3 + 0xb8);
    bVar16 = (byte)(cVar5 - 3U) < 0xfe & bVar16;
    uVar14 = (undefined7)((param_4 & 0xffffffff) >> 8);
    if (*(char *)(lVar4 + 0xa8) == '\x01') {
      uVar13 = (undefined4)CONCAT71(uVar14,1);
      uVar17 = 1;
    }
    else {
      bVar12 = param_5 ^ 1 | bVar16;
      uVar13 = (undefined4)CONCAT71(uVar14,bVar12);
      uVar17 = 1;
      if (bVar12 == 0) {
        uVar17 = DAT_14c76042c;
      }
    }
    local_98 = lVar11;
    FUN_1472ab4bc(param_3,&local_90);
    local_b0 = param_7;
    local_b8 = param_6;
    local_c8 = bVar16;
    local_c0 = &local_58;
    cVar5 = FUN_1471bbff8(param_1,&local_90,uVar17,uVar13);
    *(longlong *)(param_3 + 0xb8) = local_58;
    if (lVar8 != local_58) {
      if (lVar8 != 0) {
        FUN_1471cf216(plVar2,puVar1);
      }
      local_90 = puVar1;
      local_88 = &local_58;
      FUN_1471cf266(plVar2,local_4c);
    }
    lVar11 = local_98;
    if (cVar5 != '\0') {
      bVar16 = *(byte *)(param_3 + 0x171);
      goto joined_r0x0001471bba5c;
    }
  }
  else {
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      plVar9 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar9 = (longlong *)param_2[8];
      }
      uVar7 = *(uint *)((longlong)plVar9 + (ulonglong)((int)param_2[9] - 1U & uVar15) * 4);
      if (uVar7 != 0xffffffff) {
        do {
          puVar10 = (uint *)(*param_2 + (longlong)(int)uVar7 * 0x28);
          if (*puVar10 == uVar15) goto LAB_1471bba0b;
          uVar7 = puVar10[8];
        } while (uVar7 != 0xffffffff);
      }
    }
    puVar10 = (uint *)0x0;
LAB_1471bba0b:
    lVar11 = *(longlong *)(puVar10 + 2);
    if ((lVar11 == 0) || ((*(byte *)(*(longlong *)(lVar11 + 8) + 0x73) & 8) == 0))
    goto LAB_1471bb8f0;
    lVar6 = FUN_1471bb650(param_1,*(undefined4 *)(lVar11 + 0x10));
    local_a0 = (longlong *)(param_3 + 0xb8);
    lVar11 = *(longlong *)(param_3 + 0xb8);
    if (lVar6 == 0) goto LAB_1471bb903;
    *(longlong *)(param_3 + 0xb8) = lVar6;
    bVar16 = *(byte *)(param_3 + 0x171);
joined_r0x0001471bba5c:
    if ((bVar16 & 2) == 0) {
      *(byte *)(param_3 + 0x171) = bVar16 | 2;
    }
  }
  if ((lVar11 == 0) ||
     ((*local_a0 != 0 && (*(char *)(lVar11 + 0x1d1) != *(char *)(*local_a0 + 0x1d1))))) {
    iVar3 = (int)param_8[1];
    *(uint *)(param_8 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_8 + 0xc) < iVar3 + 1U) {
      FUN_141762202(param_8,iVar3);
    }
    *(longlong *)(*param_8 + (longlong)iVar3 * 8) = param_3;
  }
LAB_1471bb829:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471bbb3a FUN_1471bbb3a body=1213 status=ok
// SIG undefined FUN_1471bbb3a(void)

void FUN_1471bbb3a(longlong *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    lVar9 = *param_1;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar9 + lVar7 * 8);
      dVar1 = *(double *)(lVar4 + 0x130);
      dVar11 = dVar1 - *(double *)(lVar4 + 0x80);
      dVar2 = *(double *)(lVar4 + 0x128);
      dVar5 = dVar2 - *(double *)(lVar4 + 0x78);
      dVar3 = *(double *)(lVar4 + 0x120);
      dVar6 = dVar3 - *(double *)(lVar4 + 0x70);
      fVar15 = (float)SQRT(dVar11 * dVar11 + dVar6 * dVar6 + dVar5 * dVar5);
      if (1e-05 < fVar15) {
        fVar15 = (DAT_14c760418 * param_2) / fVar15;
        if (1.0 <= fVar15) {
          fVar15 = 1.0;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        dVar5 = (double)fVar15;
        *(double *)(lVar4 + 0x120) = (*(double *)(lVar4 + 0x70) - dVar3) * dVar5 + dVar3;
        *(double *)(lVar4 + 0x128) = (*(double *)(lVar4 + 0x78) - dVar2) * dVar5 + dVar2;
        *(double *)(lVar4 + 0x130) = (*(double *)(lVar4 + 0x80) - dVar1) * dVar5 + dVar1;
        lVar9 = -0x30;
        do {
          fVar10 = *(float *)(lVar4 + 0x17c + lVar9);
          fVar12 = *(float *)(lVar4 + 0x178 + lVar9);
          fVar13 = *(float *)(lVar4 + 0x174 + lVar9);
          fVar14 = *(float *)(lVar4 + 0x170 + lVar9);
          *(float *)(lVar4 + 0x170 + lVar9) =
               (*(float *)(lVar4 + 0xc0 + lVar9) - fVar14) * fVar15 + fVar14;
          *(float *)(lVar4 + 0x174 + lVar9) =
               (*(float *)(lVar4 + 0xc4 + lVar9) - fVar13) * fVar15 + fVar13;
          *(float *)(lVar4 + 0x178 + lVar9) =
               (*(float *)(lVar4 + 200 + lVar9) - fVar12) * fVar15 + fVar12;
          *(float *)(lVar4 + 0x17c + lVar9) =
               (*(float *)(lVar4 + 0xcc + lVar9) - fVar10) * fVar15 + fVar10;
          fVar10 = *(float *)(lVar4 + 0x1ac + lVar9);
          fVar12 = *(float *)(lVar4 + 0x1a8 + lVar9);
          fVar13 = *(float *)(lVar4 + 0x1a4 + lVar9);
          fVar14 = *(float *)(lVar4 + 0x1a0 + lVar9);
          *(float *)(lVar4 + 0x1a0 + lVar9) =
               (*(float *)(lVar4 + 0xf0 + lVar9) - fVar14) * fVar15 + fVar14;
          *(float *)(lVar4 + 0x1a4 + lVar9) =
               (*(float *)(lVar4 + 0xf4 + lVar9) - fVar13) * fVar15 + fVar13;
          *(float *)(lVar4 + 0x1a8 + lVar9) =
               (*(float *)(lVar4 + 0xf8 + lVar9) - fVar12) * fVar15 + fVar12;
          *(float *)(lVar4 + 0x1ac + lVar9) =
               (*(float *)(lVar4 + 0xfc + lVar9) - fVar10) * fVar15 + fVar10;
          lVar9 = lVar9 + 0x10;
        } while (lVar9 != 0);
        *(float *)(lVar4 + 0x1a0) =
             (*(float *)(lVar4 + 0xf0) - *(float *)(lVar4 + 0x1a0)) * fVar15 +
             *(float *)(lVar4 + 0x1a0);
        *(float *)(lVar4 + 0x1a4) =
             (*(float *)(lVar4 + 0xf4) - *(float *)(lVar4 + 0x1a4)) * fVar15 +
             *(float *)(lVar4 + 0x1a4);
        *(float *)(lVar4 + 0x1a8) =
             (*(float *)(lVar4 + 0xf8) - *(float *)(lVar4 + 0x1a8)) * fVar15 +
             *(float *)(lVar4 + 0x1a8);
        *(float *)(lVar4 + 0x1ac) =
             (*(float *)(lVar4 + 0xfc) - *(float *)(lVar4 + 0x1ac)) * fVar15 +
             *(float *)(lVar4 + 0x1ac);
        *(float *)(lVar4 + 0x1b0) =
             (*(float *)(lVar4 + 0x100) - *(float *)(lVar4 + 0x1b0)) * fVar15 +
             *(float *)(lVar4 + 0x1b0);
        fVar10 = *(float *)(lVar4 + 0x11c);
        fVar12 = *(float *)(lVar4 + 0x1cc);
        fVar13 = *(float *)(lVar4 + 0x1c8) * fVar12;
        fVar14 = *(float *)(lVar4 + 0x1c4) * fVar12;
        fVar12 = fVar12 * *(float *)(lVar4 + 0x1c0);
        fVar13 = (*(float *)(lVar4 + 0x118) * fVar10 - fVar13) * fVar15 + fVar13;
        fVar14 = (*(float *)(lVar4 + 0x114) * fVar10 - fVar14) * fVar15 + fVar14;
        fVar12 = (fVar10 * *(float *)(lVar4 + 0x110) - fVar12) * fVar15 + fVar12;
        fVar10 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
        fVar15 = fVar10;
        if (fVar10 <= 0.0001) {
          fVar15 = 0.0001;
        }
        fVar15 = 1.0 / fVar15;
        *(float *)(lVar4 + 0x1c0) = fVar15 * fVar12;
        *(float *)(lVar4 + 0x1c4) = fVar14 * fVar15;
        *(float *)(lVar4 + 0x1c8) = fVar13 * fVar15;
        *(float *)(lVar4 + 0x1cc) = fVar10;
        iVar8 = (int)param_1[1];
        lVar9 = *param_1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar8);
  }
  return;
}



// FUNCTION 1471bbff8 FUN_1471bbff8 body=1161 status=ok
// SIG undefined FUN_1471bbff8(void)

ulonglong FUN_1471bbff8(longlong param_1,undefined8 param_2,int param_3,ulonglong param_4,
                       undefined1 param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined4 *local_1a8;
  undefined8 local_198 [9];
  longlong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  puVar9 = (undefined8 *)(param_4 & 0xffffffff);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar6 = *param_6;
  if (lVar6 != 0) {
    if ((((-1 < *(int *)(lVar6 + 0x60)) && (-1 < *(int *)(lVar6 + 100))) &&
        (-1 < *(int *)(lVar6 + 0x68))) &&
       ((*(int *)(lVar6 + 0x6c) == param_3 && 0 < *(int *)(lVar6 + 0x6c) &&
        (cVar1 = *(char *)(lVar6 + 0x1d1), cVar1 == (char)puVar9)))) {
      local_68 = *(undefined4 *)(lVar6 + 0x68);
      local_70 = *(undefined8 *)(lVar6 + 0x60);
      puVar5 = (undefined8 *)FUN_1471baca0(param_1);
      FUN_1471bad40(param_2,*(undefined4 *)((longlong)puVar5 + 0xc),&local_88,&local_a0);
      lVar6 = *param_6;
      if (((((*(char *)(lVar6 + 0x1d2) != '\0') || (DAT_14c9e43c0 != 0)) ||
           (9.999999747378752e-05 < ABS((double)puVar5[2] - local_88))) ||
          ((9.999999747378752e-05 < ABS((double)puVar5[3] - (double)uStack_80) ||
           (9.999999747378752e-05 < ABS((double)puVar5[4] - local_78))))) ||
         ((9.999999747378752e-05 < ABS((double)puVar5[5] - local_a0) ||
          ((9.999999747378752e-05 < ABS((double)puVar5[6] - dStack_98) ||
           (9.999999747378752e-05 < ABS((double)puVar5[7] - local_90))))))) {
        puVar5[4] = local_78;
        puVar5[2] = local_88;
        puVar5[3] = uStack_80;
        puVar5[5] = local_a0;
        puVar5[6] = dStack_98;
        puVar5[7] = local_90;
        local_1c8 = &local_b8;
        local_b8 = local_a0;
        dStack_b0 = dStack_98;
        local_a8 = local_90;
        local_d8 = (undefined4)local_88;
        uStack_d4 = local_88._4_4_;
        uStack_d0 = (undefined4)uStack_80;
        uStack_cc = uStack_80._4_4_;
        local_c8 = local_78;
        puVar11 = (undefined8 *)*param_6;
        local_e0 = *(undefined4 *)(puVar11 + 0xd);
        local_e8 = puVar11[0xc];
        local_1a8 = &local_100;
        local_1b0 = &local_118;
        puVar9 = &local_130;
        local_1c0 = &local_148;
        local_1b8 = puVar9;
        FUN_1471bafc6(param_1,&local_e8,*(undefined4 *)((longlong)puVar11 + 0x6c));
        puVar11[2] = local_120;
        *puVar11 = local_130;
        puVar11[1] = uStack_128;
        puVar11[5] = local_138;
        puVar11[3] = local_148;
        puVar11[4] = uStack_140;
        puVar11[8] = local_108;
        puVar11[6] = local_118;
        puVar11[7] = uStack_110;
        *(undefined4 *)(puVar11 + 9) = local_100;
        *(undefined4 *)((longlong)puVar11 + 0x4c) = uStack_fc;
        *(undefined4 *)(puVar11 + 10) = uStack_f8;
        *(undefined4 *)((longlong)puVar11 + 0x54) = uStack_f4;
        puVar11[0xb] = local_f0;
        *(undefined1 *)((longlong)puVar11 + 0x1d2) = 0;
        *(char *)((longlong)puVar11 + 0x1d1) = cVar1;
        *(undefined1 *)((longlong)puVar11 + 0x1d3) = param_5;
        lVar6 = *param_6;
        puVar11 = puVar5;
        puVar12 = local_198;
        for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        local_150 = lVar6;
        local_60 = puVar5;
        local_58 = local_198;
        FUN_1471cec04(param_7,local_4c);
      }
      else {
        dVar2 = *(double *)(lVar6 + 0x130) - *(double *)(lVar6 + 0x80);
        dVar14 = *(double *)(lVar6 + 0x128) - *(double *)(lVar6 + 0x78);
        dVar13 = *(double *)(lVar6 + 0x120) - *(double *)(lVar6 + 0x70);
        if (dVar2 * dVar2 + dVar13 * dVar13 + dVar14 * dVar14 <= 9.999999747378752e-06) {
          uVar10 = 0;
          goto LAB_1471bc248;
        }
      }
      FUN_1471cf124(param_8,param_6);
      uVar10 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
      goto LAB_1471bc248;
    }
    FUN_1400020a8();
  }
  local_1c8 = (double *)CONCAT71(local_1c8._1_7_,param_5);
  lVar6 = FUN_1471bb2b0(param_1,param_3,param_2,param_4 & 0xffffffff);
  *param_6 = lVar6;
  uVar10 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  if (((-1 < *(int *)(lVar6 + 0x60)) && (-1 < *(int *)(lVar6 + 100))) &&
     ((-1 < *(int *)(lVar6 + 0x68) && (0 < *(int *)(lVar6 + 0x6c))))) {
    lVar8 = 0;
    uVar3 = FUN_1448eb174(lVar6 + 0x60,0xc,0);
    iVar4 = FUN_1471ce00e((longlong *)(param_1 + 0x30),uVar3,lVar6 + 0x60);
    if (iVar4 != -1) {
      lVar8 = (longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x30);
    }
    uStack_80 = local_198;
    puVar9 = (undefined8 *)(lVar8 + 0x10);
    puVar5 = uStack_80;
    for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar5 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar5 = puVar5 + 1;
    }
    local_88 = (double)(*param_6 + 0x60);
    local_150 = lVar6;
    FUN_1471cec04(param_7,&local_a0);
  }
LAB_1471bc248:
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471bc482 FUN_1471bc482 body=600 status=ok
// SIG undefined FUN_1471bc482(void)

void FUN_1471bc482(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) {
    plVar1 = (longlong *)(param_1 + 0x1b8);
    local_58 = param_1 + 0x1c8;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x1e0) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_50;
    uVar5 = local_88;
    local_80 = local_48;
    local_7c = local_44;
    local_98 = local_60;
    local_90 = local_58;
    local_68 = 0;
    local_88._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_a0 = plVar1;
    local_78 = plVar1;
    local_70 = plVar1;
    if (local_88._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar7 = local_88._4_4_;
      local_88 = uVar5;
      do {
        *(undefined1 *)(*(longlong *)(*local_a0 + 8 + (longlong)iVar7 * 0x18) + 0x1d2) = 1;
        *(undefined1 *)(*(longlong *)(*local_a0 + 8 + (longlong)iVar7 * 0x18) + 0x1d0) = 0;
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar7 = local_88._4_4_;
      } while (local_88._4_4_ < *(int *)(local_90 + 0x18));
      uVar5 = local_88;
      if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
        FUN_1471ce4f8(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
        uVar5 = local_88;
      }
    }
    local_88 = uVar5;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else if (0 < *(int *)(param_2 + 0x3338)) {
    lVar10 = 0;
    do {
      if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x3330) + lVar10 * 8);
        uVar3 = *(uint *)(lVar4 + 0x10);
        lVar8 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar8 = param_1 + 0x1f0;
        }
        uVar9 = *(uint *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & uVar3) * 4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x1b8) + (longlong)(int)uVar9 * 0x18);
            if (*puVar2 == uVar3) {
              if (((puVar2 + 2 != (uint *)0x0 && puVar2 != (uint *)0x0) &&
                  (lVar8 = *(longlong *)(puVar2 + 2), lVar8 != 0)) &&
                 (cVar6 = FUN_147cacc00(param_3,*(longlong *)(lVar4 + 8) + 0x180), cVar6 != '\0')) {
                *(undefined1 *)(lVar8 + 0x1d2) = 1;
                *(undefined1 *)(lVar8 + 0x1d0) = 0;
              }
              break;
            }
            uVar9 = puVar2[4];
          } while (uVar9 != 0xffffffff);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0x3338));
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471bc6dc FUN_1471bc6dc body=2190 status=ok
// SIG undefined FUN_1471bc6dc(void)

void FUN_1471bc6dc(longlong param_1,longlong param_2,float *param_3,void *param_4,double *param_5)

{
  float *pfVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_2a8 [32];
  float *local_288;
  double *local_280;
  float *local_278;
  float local_270;
  float local_26c;
  double local_268;
  double dStack_260;
  double local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  double local_230;
  double local_228;
  double local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  undefined8 uStack_190;
  float local_188 [36];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  memset(local_188,0,0x90);
  local_268 = 0.0;
  dStack_260 = 0.0;
  local_258 = 0.0;
  local_26c = 0.0;
  local_270 = 0.0;
  iVar10 = *(int *)(param_1 + 0x3928);
  if (0 < iVar10) {
    lVar12 = 0;
    local_278 = param_3;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3920) + lVar12 * 8);
      if (lVar2 != 0) {
        local_208 = *(double *)(param_2 + 0x38) * 0.5 + *(double *)(param_2 + 0x20);
        uStack_210 = *(double *)(param_2 + 0x30) * 0.5 + *(double *)(param_2 + 0x18);
        local_218 = *(double *)(param_2 + 0x28) * 0.5 + *(double *)(param_2 + 0x10);
        local_288 = local_188;
        local_280 = &local_268;
        FUN_147cac47a(lVar2,&local_218,&local_270,&local_26c);
        iVar10 = *(int *)(param_1 + 0x3928);
      }
      fVar17 = local_270;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar10);
    param_3 = local_278;
    if (0.0 < local_270) {
      *local_278 = local_26c / local_270;
      fVar13 = 1.0 / local_270;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0.0;
      uStack_e0 = 0;
      local_f8 = 0.0;
      uStack_f0 = 0.0;
      lVar12 = 0;
      do {
        fVar18 = *(float *)((longlong)local_188 + lVar12 + 4);
        fVar19 = *(float *)((longlong)local_188 + lVar12 + 8);
        fVar20 = *(float *)((longlong)local_188 + lVar12 + 0xc);
        *(float *)((longlong)&local_f8 + lVar12) = *(float *)((longlong)local_188 + lVar12) * fVar13
        ;
        *(float *)((longlong)&local_f8 + lVar12 + 4) = fVar18 * fVar13;
        *(float *)((longlong)&uStack_f0 + lVar12) = fVar19 * fVar13;
        *(float *)((longlong)&uStack_f0 + lVar12 + 4) = fVar20 * fVar13;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x30);
      local_1f8 = local_d8;
      uStack_1f0 = uStack_d0;
      local_208 = local_e8;
      uStack_200 = uStack_e0;
      local_218 = local_f8;
      uStack_210 = uStack_f0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0.0;
      uStack_e0 = 0;
      local_f8 = 0.0;
      uStack_f0 = 0.0;
      lVar12 = 0;
      do {
        fVar18 = *(float *)((longlong)local_188 + lVar12 + 0x34);
        fVar19 = *(float *)((longlong)local_188 + lVar12 + 0x38);
        fVar20 = *(float *)((longlong)local_188 + lVar12 + 0x3c);
        *(float *)((longlong)&local_f8 + lVar12) =
             *(float *)((longlong)local_188 + lVar12 + 0x30) * fVar13;
        *(float *)((longlong)&local_f8 + lVar12 + 4) = fVar18 * fVar13;
        *(float *)((longlong)&uStack_f0 + lVar12) = fVar19 * fVar13;
        *(float *)((longlong)&uStack_f0 + lVar12 + 4) = fVar20 * fVar13;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x30);
      local_1c8 = local_d8;
      uStack_1c0 = uStack_d0;
      local_1d8 = local_e8;
      uStack_1d0 = uStack_e0;
      local_1e8 = local_f8;
      uStack_1e0 = uStack_f0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0.0;
      uStack_e0 = 0;
      local_f8 = 0.0;
      uStack_f0 = 0.0;
      lVar12 = 0;
      do {
        fVar18 = *(float *)((longlong)local_188 + lVar12 + 100);
        fVar19 = *(float *)((longlong)local_188 + lVar12 + 0x68);
        fVar20 = *(float *)((longlong)local_188 + lVar12 + 0x6c);
        *(float *)((longlong)&local_f8 + lVar12) =
             *(float *)((longlong)local_188 + lVar12 + 0x60) * fVar13;
        *(float *)((longlong)&local_f8 + lVar12 + 4) = fVar18 * fVar13;
        *(float *)((longlong)&uStack_f0 + lVar12) = fVar19 * fVar13;
        *(float *)((longlong)&uStack_f0 + lVar12 + 4) = fVar20 * fVar13;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x30);
      local_198 = local_d8;
      uStack_190 = uStack_d0;
      local_1a8 = local_e8;
      uStack_1a0 = uStack_e0;
      local_1b8 = local_f8;
      uStack_1b0 = uStack_f0;
      memcpy(param_4,&local_218,0x90);
      dVar3 = 1.0 / (double)fVar17;
      *param_5 = dVar3 * local_268;
      param_5[1] = dStack_260 * dVar3;
      param_5[2] = local_258 * dVar3;
      if (DAT_14c76041c != 0) {
        FUN_1471cf508(param_4,&local_218);
        dVar3 = (double)(float)uStack_210;
        dVar6 = (double)-local_218._4_4_;
        dVar4 = (double)-uStack_210._4_4_;
        dVar5 = dVar3 * dVar3 + dVar4 * dVar4 + dVar6 * dVar6;
        if (((dVar5 != 1.0) || (dVar7 = dVar3, dVar8 = dVar6, dVar9 = dVar4, NAN(dVar5))) &&
           (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar5)) {
          dVar5 = 1.0 / SQRT(dVar5);
          dVar7 = dVar3 * dVar5;
          dVar8 = dVar6 * dVar5;
          dVar9 = dVar4 * dVar5;
        }
        uStack_1f0 = 0;
        local_218 = (double)CONCAT44((float)dVar8 * -0.488603,0x3e906ec1);
        uStack_210 = (double)CONCAT44((float)dVar9 * -0.488603,(float)dVar7 * 0.488603);
        fVar17 = (float)(dVar9 * dVar8) * 1.092548;
        fVar13 = (float)(dVar8 * dVar7) * -1.092548;
        local_208 = (double)CONCAT44(fVar13,fVar17);
        fVar18 = (float)(dVar7 * dVar7 * 3.0 + -1.0) * 0.315392;
        fVar19 = (float)(dVar9 * dVar7) * -1.092548;
        uStack_200 = CONCAT44(fVar19,fVar18);
        fVar20 = (float)(dVar9 * dVar9 - dVar8 * dVar8) * 0.546274;
        local_1f8 = (ulonglong)(uint)fVar20;
        uVar11 = 0;
        do {
          fVar14 = 3.1415927;
          if (uVar11 != 0) {
            fVar14 = *(float *)(&DAT_14a237a90 + (ulonglong)(uVar11 < 4) * 4);
          }
          *(float *)((longlong)&local_218 + uVar11 * 4) =
               fVar14 * *(float *)((longlong)&local_218 + uVar11 * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 != 9);
        fVar14 = 0.0;
        lVar12 = 0;
        do {
          pfVar1 = (float *)((longlong)param_4 + lVar12);
          fVar14 = fVar14 + *(float *)((longlong)&uStack_210 + lVar12) * pfVar1[2] +
                            *(float *)((longlong)&uStack_210 + lVar12 + 4) * pfVar1[3] +
                            *(float *)((longlong)&local_218 + lVar12) * *pfVar1 +
                            *(float *)((longlong)&local_218 + lVar12 + 4) * pfVar1[1];
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x30);
        fVar15 = 0.0;
        lVar12 = 0;
        do {
          pfVar1 = (float *)((longlong)param_4 + lVar12 + 0x30);
          fVar15 = fVar15 + *(float *)((longlong)&uStack_210 + lVar12) * pfVar1[2] +
                            *(float *)((longlong)&uStack_210 + lVar12 + 4) * pfVar1[3] +
                            *(float *)((longlong)&local_218 + lVar12) * *pfVar1 +
                            *(float *)((longlong)&local_218 + lVar12 + 4) * pfVar1[1];
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x30);
        fVar16 = 0.0;
        lVar12 = 0;
        do {
          pfVar1 = (float *)((longlong)param_4 + lVar12 + 0x60);
          fVar16 = fVar16 + *(float *)((longlong)&uStack_210 + lVar12) * pfVar1[2] +
                            *(float *)((longlong)&uStack_210 + lVar12 + 4) * pfVar1[3] +
                            *(float *)((longlong)&local_218 + lVar12) * *pfVar1 +
                            *(float *)((longlong)&local_218 + lVar12 + 4) * pfVar1[1];
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x30);
        uStack_d0 = 0;
        local_f8 = (double)CONCAT44((float)dVar8 * 0.488603,0x3e906ec1);
        uStack_f0 = (double)CONCAT44((float)dVar9 * 0.488603,(float)dVar7 * -0.488603);
        local_e8 = (double)CONCAT44(fVar13,fVar17);
        uStack_e0 = CONCAT44(fVar19,fVar18);
        local_d8 = (ulonglong)(uint)fVar20;
        uVar11 = 0;
        do {
          fVar17 = 3.1415927;
          if (uVar11 != 0) {
            fVar17 = *(float *)(&DAT_14a237a90 + (ulonglong)(uVar11 < 4) * 4);
          }
          *(float *)((longlong)&local_f8 + uVar11 * 4) =
               fVar17 * *(float *)((longlong)&local_f8 + uVar11 * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 != 9);
        fVar17 = 0.0;
        lVar12 = 0;
        do {
          pfVar1 = (float *)((longlong)param_4 + lVar12);
          fVar17 = fVar17 + *(float *)((longlong)&uStack_f0 + lVar12) * pfVar1[2] +
                            *(float *)((longlong)&uStack_f0 + lVar12 + 4) * pfVar1[3] +
                            *(float *)((longlong)&local_f8 + lVar12) * *pfVar1 +
                            *(float *)((longlong)&local_f8 + lVar12 + 4) * pfVar1[1];
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x30);
        fVar13 = 0.0;
        lVar12 = 0;
        do {
          pfVar1 = (float *)((longlong)param_4 + lVar12 + 0x30);
          fVar13 = fVar13 + *(float *)((longlong)&uStack_f0 + lVar12) * pfVar1[2] +
                            *(float *)((longlong)&uStack_f0 + lVar12 + 4) * pfVar1[3] +
                            *(float *)((longlong)&local_f8 + lVar12) * *pfVar1 +
                            *(float *)((longlong)&local_f8 + lVar12 + 4) * pfVar1[1];
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x30);
        fVar18 = 0.0;
        lVar12 = 0;
        do {
          pfVar1 = (float *)((longlong)param_4 + lVar12 + 0x60);
          fVar18 = fVar18 + *(float *)((longlong)&uStack_f0 + lVar12) * pfVar1[2] +
                            *(float *)((longlong)&uStack_f0 + lVar12 + 4) * pfVar1[3] +
                            *(float *)((longlong)&local_f8 + lVar12) * *pfVar1 +
                            *(float *)((longlong)&local_f8 + lVar12 + 4) * pfVar1[1];
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0x30);
        local_230 = (double)fVar14 * 0.05000000074505806 - (double)fVar17;
        local_228 = (double)fVar15 * 0.05000000074505806 - (double)fVar13;
        local_220 = (double)fVar16 * 0.05000000074505806 - (double)fVar18;
        dVar3 = 0.0;
        if (local_220 <= 0.0) {
          local_220 = dVar3;
        }
        if (local_228 <= 0.0) {
          local_228 = dVar3;
        }
        if (local_230 <= 0.0) {
          local_230 = dVar3;
        }
        FUN_144a083d0(&local_250);
        local_234 = local_244 * 3.5449078;
        local_238 = local_248 * 3.5449078;
        local_23c = local_24c * 3.5449078;
        local_240 = local_250 * 3.5449078;
        FUN_1471cf6c2(param_4);
      }
      goto LAB_1471bcebc;
    }
  }
  memcpy(param_4,local_188,0x90);
  *param_3 = 1.0;
  *param_5 = 0.0;
  param_5[1] = 0.0;
  param_5[2] = 1.0;
LAB_1471bcebc:
  if ((local_c0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471bcf6c FUN_1471bcf6c body=47 status=ok
// SIG undefined FUN_1471bcf6c(void)

void FUN_1471bcf6c(int param_1)

{
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_1);
  }
  DAT_14c9e44a8 = 0;
  if (param_1 <= DAT_14c9e44ac) {
    return;
  }
  FUN_1471cf390();
  return;
}



// FUNCTION 1471bcf9c FUN_1471bcf9c body=1621 status=ok
// SIG undefined FUN_1471bcf9c(void)

void FUN_1471bcf9c(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1c8 [32];
  int *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  double local_168;
  double local_160;
  int local_154;
  int local_150;
  int local_14c;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar5 = *(double *)(param_2 + 0x38) * 0.5;
  dVar6 = *(double *)(param_2 + 0x30) * 0.5;
  dVar7 = *(double *)(param_2 + 0x28) * 0.5;
  dVar14 = (double)*(int *)(param_2 + 0xc);
  local_178 = param_1;
  if (DAT_14c760428 == 0 || *(int *)(param_2 + 0xc) < 3) {
    if (0 < *(int *)(param_1 + 0x3928)) {
      dVar1 = *(double *)(param_2 + 0x20);
      dVar16 = *(double *)(param_2 + 0x18);
      dVar18 = *(double *)(param_2 + 0x10);
      lVar13 = 0;
      do {
        local_fc[0] = 0;
        local_fc[1] = 0;
        local_fc[2] = 0;
        local_154 = *(int *)(param_2 + 0xc);
        local_130 = 0;
        local_110 = 0;
        local_198 = &DAT_14c9e44a0;
        local_1a0 = &DAT_14c9e4488;
        local_1a8 = local_fc;
        local_150 = local_154;
        local_14c = local_154;
        local_148 = dVar18 + dVar7 + dVar7 / dVar14;
        local_140 = dVar16 + dVar6 + dVar6 / dVar14;
        local_138 = dVar1 + dVar5 + dVar5 / dVar14;
        local_128 = dVar7;
        local_120 = dVar6;
        local_118 = dVar5;
        local_108 = local_154;
        local_104 = local_154;
        local_100 = local_154;
        FUN_147cac56a(*(undefined8 *)(*(longlong *)(local_178 + 0x3920) + lVar13 * 8),&local_148,
                      &local_154,&local_108);
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(local_178 + 0x3928));
    }
  }
  else if (0 < *(int *)(param_1 + 0x3928)) {
    lVar13 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(local_178 + 0x3920) + lVar13 * 8);
      uVar8 = DAT_14c760424;
      if (0xb < DAT_14c760424) {
        uVar8 = 0xc;
      }
      dVar1 = *(double *)(*(longlong *)(lVar4 + 0x10) + 0x20);
      local_170 = lVar13;
      dVar15 = pow(0.53125,(double)(int)uVar8);
      dVar15 = dVar15 * dVar1;
      iVar9 = *(int *)(param_2 + 0xc);
      dVar16 = (double)iVar9;
      dVar18 = *(double *)(param_2 + 0x38) / dVar16;
      dVar1 = *(double *)(param_2 + 0x28) / dVar16;
      dVar15 = (double)(float)(dVar15 + dVar15);
      dVar17 = dVar15 / dVar1;
      lVar13 = (longlong)ROUND(dVar17 + dVar17 + -0.5) >> 1;
      if (lVar13 < 2) {
        lVar13 = 1;
      }
      dVar16 = *(double *)(param_2 + 0x30) / dVar16;
      dVar17 = dVar15 / dVar16;
      local_180 = (longlong)ROUND(dVar17 + dVar17 + -0.5) >> 1;
      if (local_180 < 2) {
        local_180 = 1;
      }
      dVar15 = dVar15 / dVar18;
      local_188 = (longlong)ROUND(dVar15 + dVar15 + -0.5) >> 1;
      if (local_188 < 2) {
        local_188 = 1;
      }
      dVar15 = *(double *)(param_2 + 0x20);
      local_100 = 0;
      if (0 < iVar9) {
        iVar12 = (int)lVar13;
        dVar18 = dVar18 * (double)(int)local_188;
        dVar16 = dVar16 * (double)(int)local_180;
        dVar1 = dVar1 * (double)iVar12;
        local_168 = dVar18;
        local_160 = dVar16;
        do {
          local_fc[2] = (int)local_188;
          iVar10 = local_fc[2] + local_100;
          dVar17 = dVar18;
          if (iVar9 < iVar10) {
            dVar17 = (*(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x38)) - dVar15;
            local_fc[2] = iVar9 - local_100;
          }
          dVar2 = *(double *)(param_2 + 0x18);
          local_104 = 0;
          if (0 < iVar9) {
            do {
              iVar10 = (int)local_180;
              iVar11 = iVar10 + local_104;
              dVar18 = dVar16;
              if (iVar9 < iVar11) {
                dVar18 = (*(double *)(param_2 + 0x18) + *(double *)(param_2 + 0x30)) - dVar2;
                iVar10 = iVar9 - local_104;
              }
              local_fc[1] = iVar10;
              dVar3 = *(double *)(param_2 + 0x10);
              local_108 = 0;
              if (0 < iVar9) {
                do {
                  dVar16 = dVar1;
                  local_fc[0] = iVar12;
                  if (iVar9 < local_108 + iVar12) {
                    dVar16 = (*(double *)(param_2 + 0x10) + *(double *)(param_2 + 0x28)) - dVar3;
                    local_fc[0] = iVar9 - local_108;
                  }
                  local_128 = 0.0;
                  if (local_fc[0] != 1) {
                    local_128 = dVar16 * 0.5;
                  }
                  local_120 = 0.0;
                  if (local_fc[1] != 1) {
                    local_120 = dVar18 * 0.5;
                  }
                  local_118 = 0.0;
                  if (local_fc[2] != 1) {
                    local_118 = dVar17 * 0.5;
                  }
                  local_138 = dVar15 + local_118 + dVar5 / dVar14;
                  local_140 = dVar2 + local_120 + dVar6 / dVar14;
                  local_148 = dVar3 + local_128 + dVar7 / dVar14;
                  local_130 = 0;
                  local_110 = 0;
                  local_198 = &DAT_14c9e44a0;
                  local_1a0 = &DAT_14c9e4488;
                  local_1a8 = &local_108;
                  local_154 = iVar9;
                  local_150 = iVar9;
                  local_14c = iVar9;
                  FUN_147cac56a(lVar4,&local_148,local_fc,&local_154);
                  dVar3 = dVar3 + dVar1;
                  local_108 = local_108 + iVar12;
                  iVar9 = *(int *)(param_2 + 0xc);
                } while (local_108 < iVar9);
                iVar11 = local_104 + (int)local_180;
                dVar16 = local_160;
              }
              dVar2 = dVar2 + dVar16;
              local_104 = iVar11;
            } while (iVar11 < iVar9);
            iVar10 = local_100 + (int)local_188;
            dVar18 = local_168;
          }
          dVar15 = dVar15 + dVar18;
          local_100 = iVar10;
        } while (iVar10 < iVar9);
      }
      lVar13 = local_170 + 1;
    } while (lVar13 < *(int *)(local_178 + 0x3928));
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471bd5f2 FUN_1471bd5f2 body=41 status=ok
// SIG undefined FUN_1471bd5f2(void)

void FUN_1471bd5f2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1471cf4a8();
  return;
}



// FUNCTION 1471bd61c FUN_1471bd61c body=2203 status=ok
// SIG undefined FUN_1471bd61c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1471bd61c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  float fVar37;
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  float fVar58;
  uint uVar61;
  uint uVar62;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auStack_188 [32];
  undefined4 local_168;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined1 *puStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar10 = *(int *)(param_2 + 0xc);
  if (0 < iVar10) {
    iVar14 = 0;
    do {
      if (0 < iVar10) {
        local_158 = (double)iVar14 + 0.5;
        iVar12 = 0;
        do {
          if (0 < iVar10) {
            local_150 = (double)iVar12 + 0.5;
            lVar15 = 0;
            do {
              lVar13 = (iVar14 * iVar10 + iVar12) * iVar10 + lVar15;
              lVar11 = lVar13 * 0x30;
              uVar4 = *(undefined8 *)(DAT_14c9e44a0 + lVar11);
              uVar5 = ((undefined8 *)(DAT_14c9e44a0 + lVar11))[1];
              puVar1 = (undefined8 *)(DAT_14c9e44a0 + 0x10 + lVar11);
              uVar6 = *puVar1;
              uStack_120 = puVar1[1];
              puVar1 = (undefined8 *)(DAT_14c9e44a0 + 0x20 + lVar11);
              local_118 = *puVar1;
              uStack_110 = puVar1[1];
              local_128 = (float)uVar6;
              fStack_124 = (float)((ulonglong)uVar6 >> 0x20);
              local_138 = (float)uVar4;
              fStack_134 = (float)((ulonglong)uVar4 >> 0x20);
              fStack_130 = (float)uVar5;
              fStack_12c = (float)((ulonglong)uVar5 >> 0x20);
              fVar24 = *(float *)(DAT_14c9e4488 + lVar13 * 4);
              if (0.0 < fVar24) {
                fVar24 = 1.0 / fVar24;
                local_138 = local_138 * fVar24;
                fStack_134 = fStack_134 * fVar24;
                fStack_130 = fStack_130 * fVar24;
                fStack_12c = fStack_12c * fVar24;
                uStack_120._4_4_ = (float)((ulonglong)uStack_120 >> 0x20);
                local_128 = local_128 * fVar24;
                fStack_124 = fStack_124 * fVar24;
                local_118._4_4_ = (float)((ulonglong)local_118 >> 0x20);
                uStack_110._4_4_ = (float)((ulonglong)uStack_110 >> 0x20);
                uStack_120 = CONCAT44(uStack_120._4_4_ * fVar24,(float)uStack_120 * fVar24);
                local_118 = CONCAT44(fVar24 * local_118._4_4_,fVar24 * (float)local_118);
                uStack_110 = CONCAT44(fVar24 * uStack_110._4_4_,fVar24 * (float)uStack_110);
                if (DAT_14c76041c != 0) {
                  FUN_1471398a2(&local_138,&local_108);
                  unaff_XMM11 = _DAT_14a237ab0;
                  dVar16 = (double)(float)local_100;
                  dVar32 = (double)-local_108._4_4_;
                  auVar25._0_8_ = (double)-local_100._4_4_;
                  auVar25._8_8_ = 0;
                  dVar42 = dVar16 * dVar16 + auVar25._0_8_ * auVar25._0_8_ + dVar32 * dVar32;
                  if ((dVar42 != 1.0) || (NAN(dVar42))) {
                    if (9.99999993922529e-09 <= dVar42) {
                      dVar42 = 1.0 / SQRT(dVar42);
                      dVar16 = dVar16 * dVar42;
                      dVar32 = dVar32 * dVar42;
                      auVar25._0_8_ = auVar25._0_8_ * dVar42;
                      auVar25._8_8_ = 0;
                    }
                    else {
                      auVar25._8_8_ = 0;
                      auVar25._0_8_ = (double)DAT_14c8464e0;
                      dVar32 = DAT_14c8464e8;
                      dVar16 = DAT_14c8464f0;
                    }
                  }
                  unaff_XMM10._0_12_ = ZEXT812(0x3e906ec1);
                  unaff_XMM10._12_4_ = 0;
                  auVar44 = insertps(ZEXT816(0x3e906ec1),ZEXT416((uint)((float)dVar32 * -0.488603)),
                                     0x10);
                  auVar60._4_12_ = unaff_XMM9._4_12_;
                  fVar58 = (float)dVar16;
                  auVar57._4_4_ = unaff_XMM9._4_4_;
                  auVar57._0_4_ = fVar58;
                  auVar57._8_4_ = unaff_XMM9._8_4_;
                  auVar57._12_4_ = unaff_XMM9._12_4_;
                  auVar59._4_12_ = auVar57._4_12_;
                  auVar59._0_4_ = fVar58 * 0.488603;
                  auVar57 = insertps(auVar44,auVar59,0x20);
                  auVar29._4_12_ = auVar25._4_12_;
                  fVar24 = (float)auVar25._0_8_;
                  auVar44._4_4_ = auVar25._4_4_;
                  auVar44._0_4_ = fVar24;
                  auVar44._8_4_ = auVar25._8_4_;
                  auVar44._12_4_ = auVar25._12_4_;
                  auVar21._4_12_ = auVar44._4_12_;
                  auVar21._0_4_ = fVar24 * -0.488603;
                  auVar25 = insertps(auVar57,auVar21,0x30);
                  fVar41 = auVar25._0_4_ * (float)DAT_14a237ab0;
                  fVar31 = auVar25._4_4_ * DAT_14a237ab0._4_4_;
                  fVar37 = auVar25._8_4_ * DAT_14a237ab0._8_4_;
                  fVar30 = auVar25._12_4_ * DAT_14a237ab0._12_4_;
                  auVar25 = insertps(ZEXT816(0x3e906ec1),ZEXT416((uint)((float)dVar32 * 0.488603)),
                                     0x10);
                  auVar60._0_4_ = fVar58 * -0.488603;
                  auVar25 = insertps(auVar25,auVar60,0x20);
                  auVar29._0_4_ = fVar24 * 0.488603;
                  auVar25 = insertps(auVar25,auVar29,0x30);
                  fVar24 = auVar25._0_4_ * (float)DAT_14a237ab0;
                  fVar58 = auVar25._4_4_ * DAT_14a237ab0._4_4_;
                  fVar22 = auVar25._8_4_ * DAT_14a237ab0._8_4_;
                  fVar23 = auVar25._12_4_ * DAT_14a237ab0._12_4_;
                  local_108 = (double)(fVar37 * fStack_130 + fVar30 * fStack_12c +
                                       fVar41 * local_138 + fVar31 * fStack_134 + 0.0) *
                              0.05000000074505806 -
                              (double)(fStack_130 * fVar22 + fStack_12c * fVar23 +
                                       local_138 * fVar24 + fStack_134 * fVar58 + 0.0);
                  local_100 = (double)(fVar37 * (float)uStack_120 + fVar30 * uStack_120._4_4_ +
                                       fVar41 * local_128 + fVar31 * fStack_124 + 0.0) *
                              0.05000000074505806 -
                              (double)((float)uStack_120 * fVar22 + uStack_120._4_4_ * fVar23 +
                                       local_128 * fVar24 + fStack_124 * fVar58 + 0.0);
                  local_f8 = (double)(fVar37 * (float)uStack_110 + fVar30 * uStack_110._4_4_ +
                                      fVar41 * (float)local_118 + fVar31 * local_118._4_4_ + 0.0) *
                             0.05000000074505806 -
                             (double)(fVar22 * (float)uStack_110 + fVar23 * uStack_110._4_4_ +
                                      fVar24 * (float)local_118 + fVar58 * local_118._4_4_ + 0.0);
                  if (local_f8 <= 0.0) {
                    local_f8 = 0.0;
                  }
                  if (local_100 <= 0.0) {
                    local_100 = 0.0;
                  }
                  if (local_108 <= 0.0) {
                    local_108 = 0.0;
                  }
                  FUN_144a083d0(&local_148,&local_108);
                  fVar24 = puStack_140._0_4_ * 3.5449078;
                  fVar58 = local_148._4_4_ * 3.5449078;
                  fVar22 = (float)local_148 * 3.5449078;
                  local_138 = fVar22 * 0.28209478 + local_138;
                  fStack_134 = fVar22 * 0.0 + fStack_134;
                  fStack_130 = fVar22 * 0.0 + fStack_130;
                  fStack_12c = fVar22 * 0.0 + fStack_12c;
                  local_128 = fVar58 * 0.28209478 + local_128;
                  fStack_124 = fVar58 * 0.0 + fStack_124;
                  uStack_120 = CONCAT44(fVar58 * 0.0 + uStack_120._4_4_,
                                        fVar58 * 0.0 + (float)uStack_120);
                  local_118 = CONCAT44(fVar24 * 0.0 + local_118._4_4_,
                                       fVar24 * 0.28209478 + (float)local_118);
                  uStack_110 = CONCAT44(fVar24 * 0.0 + uStack_110._4_4_,
                                        fVar24 * 0.0 + (float)uStack_110);
                }
              }
              if ((param_1 != 0) && (DAT_14c9e43a8 != 0)) {
                dVar32 = 1.0 / (double)*(int *)(param_2 + 0xc);
                local_f8 = local_158 * dVar32 * *(double *)(param_2 + 0x38) +
                           *(double *)(param_2 + 0x20);
                local_100 = local_150 * dVar32 * *(double *)(param_2 + 0x30) +
                            *(double *)(param_2 + 0x18);
                local_108 = dVar32 * ((double)(int)lVar15 + 0.5) * *(double *)(param_2 + 0x28) +
                            *(double *)(param_2 + 0x10);
                local_148 = 0;
                puStack_140 = &DAT_3f8000003f800000;
                local_168 = 0xffffffff;
                FUN_14797c942(param_1 + 0x37a0,&local_108);
              }
              unaff_XMM9 = _DAT_149931f00;
              auVar7._4_4_ = fStack_134;
              auVar7._0_4_ = local_138;
              auVar7._8_4_ = fStack_130;
              auVar7._12_4_ = fStack_12c;
              auVar25 = insertps(auVar7,local_128,0x10);
              auVar25 = insertps(auVar25,(float)local_118,0x20);
              auVar25 = insertps(auVar25,fStack_12c,0x30);
              fVar41 = auVar25._0_4_;
              fVar31 = auVar25._4_4_;
              fVar37 = auVar25._12_4_;
              uVar2 = DAT_1499319a0;
              uVar3 = DAT_1499319a0._12_4_;
              fVar30 = (float)((uint)fVar41 & uVar2);
              uVar61 = DAT_1499319a0._4_4_;
              fVar36 = (float)((uint)fVar31 & uVar61);
              fVar40 = auVar25._8_4_;
              uVar62 = DAT_1499319a0._8_4_;
              fVar38 = (float)((uint)fVar40 & uVar62);
              fVar39 = (float)((uint)fVar37 & uVar3);
              auVar45._4_4_ = -(uint)NAN(fVar31);
              auVar45._0_4_ = -(uint)NAN(fVar41);
              auVar45._8_4_ = -(uint)NAN(fVar40);
              auVar45._12_4_ = -(uint)NAN(fVar37);
              fVar24 = (float)DAT_149ef1f60;
              fVar58 = DAT_149ef1f60._4_4_;
              fVar22 = DAT_149ef1f60._8_4_;
              fVar23 = DAT_149ef1f60._12_4_;
              auVar17._0_4_ =
                   -(uint)((float)((uint)((uint)fVar30 < (uint)fVar24) * (int)fVar24 |
                                  (uint)((uint)fVar30 >= (uint)fVar24) * (int)fVar30) == fVar30);
              auVar17._4_4_ =
                   -(uint)((float)((uint)((uint)fVar36 < (uint)fVar58) * (int)fVar58 |
                                  (uint)((uint)fVar36 >= (uint)fVar58) * (int)fVar36) == fVar36);
              auVar17._8_4_ =
                   -(uint)((float)((uint)((uint)fVar38 < (uint)fVar22) * (int)fVar22 |
                                  (uint)((uint)fVar38 >= (uint)fVar22) * (int)fVar38) == fVar38);
              auVar17._12_4_ =
                   -(uint)((float)((uint)((uint)fVar39 < (uint)fVar23) * (int)fVar23 |
                                  (uint)((uint)fVar39 >= (uint)fVar23) * (int)fVar39) == fVar39);
              auVar51._0_4_ = (uint)fVar30 >> 0xd;
              auVar51._4_4_ = (uint)fVar36 >> 0xd;
              auVar51._8_4_ = (uint)fVar38 >> 0xd;
              auVar51._12_4_ = (uint)fVar39 >> 0xd;
              unaff_XMM11 = pmovsxwd(unaff_XMM11,0x1ff01ff01ff01ff);
              auVar59 = pmovsxwd(_DAT_1499319a0,0x200020002000200);
              unaff_XMM15 = pmovsxbd(unaff_XMM15,0x1010101);
              auVar25 = auVar51 & unaff_XMM15;
              auVar52._0_4_ =
                   -(uint)((float)((uint)((uint)fVar30 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar30 >= 0x47800000) * (int)fVar30) == fVar30);
              auVar52._4_4_ =
                   -(uint)((float)((uint)((uint)fVar36 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar36 >= 0x47800000) * (int)fVar36) == fVar36);
              auVar52._8_4_ =
                   -(uint)((float)((uint)((uint)fVar38 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar38 >= 0x47800000) * (int)fVar38) == fVar38);
              auVar52._12_4_ =
                   -(uint)((float)((uint)((uint)fVar39 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar39 >= 0x47800000) * (int)fVar39) == fVar39);
              unaff_XMM10 = pmovsxwd(unaff_XMM10,0x7c007c007c007c00);
              fVar24 = (float)DAT_149931f00;
              fVar58 = DAT_149931f00._12_4_;
              fVar55 = DAT_149931f00._4_4_;
              fVar56 = DAT_149931f00._8_4_;
              auVar33._0_4_ = (int)(fVar30 + fVar24) + -0x3f000000;
              auVar33._4_4_ = (int)(fVar36 + fVar55) + -0x3f000000;
              auVar33._8_4_ = (int)(fVar38 + fVar56) + -0x3f000000;
              auVar33._12_4_ = (int)(fVar39 + fVar58) + -0x3f000000;
              auVar46._0_4_ = (uint)((int)fVar30 + -0x37fff001 + auVar25._0_4_) >> 0xd;
              auVar46._4_4_ = (uint)((int)fVar36 + -0x37fff001 + auVar25._4_4_) >> 0xd;
              auVar46._8_4_ = (uint)((int)fVar38 + -0x37fff001 + auVar25._8_4_) >> 0xd;
              auVar46._12_4_ = (uint)((int)fVar39 + -0x37fff001 + auVar25._12_4_) >> 0xd;
              auVar25 = blendvps(auVar33,auVar46,auVar17);
              auVar26._0_4_ = (int)fVar41 >> 0x10;
              auVar26._4_4_ = (int)fVar31 >> 0x10;
              auVar26._8_4_ = (int)fVar40 >> 0x10;
              auVar26._12_4_ = (int)fVar37 >> 0x10;
              auVar57 = pmovsxwd(_DAT_149ef1f60,0x8000800080008000);
              auVar25 = auVar26 & auVar57 |
                        ((auVar51 & unaff_XMM11 | auVar59) & auVar45 | unaff_XMM10) & auVar52 |
                        ~auVar52 & auVar25;
              auVar25 = packssdw(auVar25,auVar25);
              *(longlong *)(DAT_14c9e44b8 + lVar13 * 8) = auVar25._0_8_;
              auVar8._4_4_ = fStack_130;
              auVar8._0_4_ = fStack_134;
              auVar8._8_4_ = fStack_12c;
              auVar8._12_4_ = local_128;
              auVar25 = insertps(auVar8,fStack_124,0x10);
              auVar25 = insertps(auVar25,local_118._4_4_,0x20);
              auVar25 = insertps(auVar25,uStack_120._4_4_,0x30);
              fVar22 = auVar25._0_4_;
              fVar23 = auVar25._4_4_;
              fVar41 = auVar25._12_4_;
              fVar31 = (float)((uint)fVar22 & uVar2);
              fVar37 = (float)((uint)fVar23 & uVar61);
              fVar30 = auVar25._8_4_;
              fVar36 = (float)((uint)fVar30 & uVar62);
              fVar40 = (float)((uint)fVar41 & uVar3);
              auVar47._4_4_ = -(uint)NAN(fVar23);
              auVar47._0_4_ = -(uint)NAN(fVar22);
              auVar47._8_4_ = -(uint)NAN(fVar30);
              auVar47._12_4_ = -(uint)NAN(fVar41);
              auVar18._0_4_ =
                   -(uint)((float)((uint)((uint)fVar31 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar31 >= 0x38800000) * (int)fVar31) == fVar31);
              auVar18._4_4_ =
                   -(uint)((float)((uint)((uint)fVar37 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar37 >= 0x38800000) * (int)fVar37) == fVar37);
              auVar18._8_4_ =
                   -(uint)((float)((uint)((uint)fVar36 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar36 >= 0x38800000) * (int)fVar36) == fVar36);
              auVar18._12_4_ =
                   -(uint)((float)((uint)((uint)fVar40 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar40 >= 0x38800000) * (int)fVar40) == fVar40);
              auVar53._0_4_ = (uint)fVar31 >> 0xd;
              auVar53._4_4_ = (uint)fVar37 >> 0xd;
              auVar53._8_4_ = (uint)fVar36 >> 0xd;
              auVar53._12_4_ = (uint)fVar40 >> 0xd;
              auVar25 = auVar53 & unaff_XMM15;
              auVar54._0_4_ =
                   -(uint)((float)((uint)((uint)fVar31 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar31 >= 0x47800000) * (int)fVar31) == fVar31);
              auVar54._4_4_ =
                   -(uint)((float)((uint)((uint)fVar37 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar37 >= 0x47800000) * (int)fVar37) == fVar37);
              auVar54._8_4_ =
                   -(uint)((float)((uint)((uint)fVar36 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar36 >= 0x47800000) * (int)fVar36) == fVar36);
              auVar54._12_4_ =
                   -(uint)((float)((uint)((uint)fVar40 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar40 >= 0x47800000) * (int)fVar40) == fVar40);
              auVar34._0_4_ = (int)(fVar31 + fVar24) + -0x3f000000;
              auVar34._4_4_ = (int)(fVar37 + fVar55) + -0x3f000000;
              auVar34._8_4_ = (int)(fVar36 + fVar56) + -0x3f000000;
              auVar34._12_4_ = (int)(fVar40 + fVar58) + -0x3f000000;
              auVar48._0_4_ = (uint)((int)fVar31 + -0x37fff001 + auVar25._0_4_) >> 0xd;
              auVar48._4_4_ = (uint)((int)fVar37 + -0x37fff001 + auVar25._4_4_) >> 0xd;
              auVar48._8_4_ = (uint)((int)fVar36 + -0x37fff001 + auVar25._8_4_) >> 0xd;
              auVar48._12_4_ = (uint)((int)fVar40 + -0x37fff001 + auVar25._12_4_) >> 0xd;
              auVar25 = blendvps(auVar34,auVar48,auVar18);
              auVar27._0_4_ = (int)fVar22 >> 0x10;
              auVar27._4_4_ = (int)fVar23 >> 0x10;
              auVar27._8_4_ = (int)fVar30 >> 0x10;
              auVar27._12_4_ = (int)fVar41 >> 0x10;
              auVar25 = auVar27 & auVar57 |
                        ((auVar53 & unaff_XMM11 | auVar59) & auVar47 | unaff_XMM10) & auVar54 |
                        ~auVar54 & auVar25;
              auVar25 = packssdw(auVar25,auVar25);
              *(longlong *)(DAT_14c9e44d0 + lVar13 * 8) = auVar25._0_8_;
              auVar9._4_4_ = fStack_12c;
              auVar9._0_4_ = fStack_130;
              auVar9._8_4_ = local_128;
              auVar9._12_4_ = fStack_124;
              auVar25 = insertps(auVar9,(float)uStack_120,0x10);
              auVar25 = insertps(auVar25,(float)uStack_110,0x20);
              auVar25 = insertps(auVar25,uStack_110._4_4_,0x30);
              fVar22 = auVar25._0_4_;
              fVar23 = auVar25._4_4_;
              fVar41 = auVar25._12_4_;
              fVar31 = (float)((uint)fVar22 & uVar2);
              fVar37 = (float)((uint)fVar23 & uVar61);
              fVar30 = auVar25._8_4_;
              fVar36 = (float)((uint)fVar30 & uVar62);
              fVar40 = (float)((uint)fVar41 & uVar3);
              auVar19._0_4_ =
                   -(uint)((float)((uint)((uint)fVar31 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar31 >= 0x38800000) * (int)fVar31) == fVar31);
              auVar19._4_4_ =
                   -(uint)((float)((uint)((uint)fVar37 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar37 >= 0x38800000) * (int)fVar37) == fVar37);
              auVar19._8_4_ =
                   -(uint)((float)((uint)((uint)fVar36 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar36 >= 0x38800000) * (int)fVar36) == fVar36);
              auVar19._12_4_ =
                   -(uint)((float)((uint)((uint)fVar40 < 0x38800000) * 0x38800000 |
                                  (uint)((uint)fVar40 >= 0x38800000) * (int)fVar40) == fVar40);
              auVar49._0_4_ = (uint)fVar31 >> 0xd;
              auVar49._4_4_ = (uint)fVar37 >> 0xd;
              auVar49._8_4_ = (uint)fVar36 >> 0xd;
              auVar49._12_4_ = (uint)fVar40 >> 0xd;
              auVar25 = auVar49 & unaff_XMM15;
              auVar50._0_4_ = (int)(fVar31 + fVar24) + -0x3f000000;
              auVar50._4_4_ = (int)(fVar37 + fVar55) + -0x3f000000;
              auVar50._8_4_ = (int)(fVar36 + fVar56) + -0x3f000000;
              auVar50._12_4_ = (int)(fVar40 + fVar58) + -0x3f000000;
              auVar43._0_4_ = (uint)((int)fVar31 + -0x37fff001 + auVar25._0_4_) >> 0xd;
              auVar43._4_4_ = (uint)((int)fVar37 + -0x37fff001 + auVar25._4_4_) >> 0xd;
              auVar43._8_4_ = (uint)((int)fVar36 + -0x37fff001 + auVar25._8_4_) >> 0xd;
              auVar43._12_4_ = (uint)((int)fVar40 + -0x37fff001 + auVar25._12_4_) >> 0xd;
              auVar25 = blendvps(auVar50,auVar43,auVar19);
              auVar20._0_4_ =
                   -(uint)((float)((uint)((uint)fVar31 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar31 >= 0x47800000) * (int)fVar31) == fVar31);
              auVar20._4_4_ =
                   -(uint)((float)((uint)((uint)fVar37 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar37 >= 0x47800000) * (int)fVar37) == fVar37);
              auVar20._8_4_ =
                   -(uint)((float)((uint)((uint)fVar36 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar36 >= 0x47800000) * (int)fVar36) == fVar36);
              auVar20._12_4_ =
                   -(uint)((float)((uint)((uint)fVar40 < 0x47800000) * 0x47800000 |
                                  (uint)((uint)fVar40 >= 0x47800000) * (int)fVar40) == fVar40);
              auVar35._4_4_ = -(uint)NAN(fVar23);
              auVar35._0_4_ = -(uint)NAN(fVar22);
              auVar35._8_4_ = -(uint)NAN(fVar30);
              auVar35._12_4_ = -(uint)NAN(fVar41);
              auVar28._0_4_ = (int)fVar22 >> 0x10;
              auVar28._4_4_ = (int)fVar23 >> 0x10;
              auVar28._8_4_ = (int)fVar30 >> 0x10;
              auVar28._12_4_ = (int)fVar41 >> 0x10;
              auVar25 = auVar28 & auVar57 |
                        ((auVar49 & unaff_XMM11 | _DAT_149937580) & auVar35 | unaff_XMM10) & auVar20
                        | ~auVar20 & auVar25;
              auVar25 = packssdw(auVar25,auVar25);
              *(longlong *)(DAT_14c9e44e8 + lVar13 * 8) = auVar25._0_8_;
              iVar10 = *(int *)(param_2 + 0xc);
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < iVar10);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar10);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar10);
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471bdeb8 FUN_1471bdeb8 body=42 status=ok
// SIG undefined FUN_1471bdeb8(void)

void FUN_1471bdeb8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471bdeea FUN_1471bdeea body=96 status=ok
// SIG undefined FUN_1471bdeea(void)

undefined8 FUN_1471bdeea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141594c9a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6750,1);
  return uVar3;
}



// FUNCTION 1471bdf4a FUN_1471bdf4a body=52 status=ok
// SIG undefined FUN_1471bdf4a(void)

void FUN_1471bdf4a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471bdf7e FUN_1471bdf7e body=42 status=ok
// SIG undefined FUN_1471bdf7e(void)

void FUN_1471bdf7e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471bdfc8 FUN_1471bdfc8 body=96 status=ok
// SIG undefined FUN_1471bdfc8(void)

undefined8 FUN_1471bdfc8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159c94c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e67d8,1);
  return uVar3;
}



// FUNCTION 1471be028 FUN_1471be028 body=52 status=ok
// SIG undefined FUN_1471be028(void)

void FUN_1471be028(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471be05c FUN_1471be05c body=42 status=ok
// SIG undefined FUN_1471be05c(void)

void FUN_1471be05c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471be08e FUN_1471be08e body=96 status=ok
// SIG undefined FUN_1471be08e(void)

undefined8 FUN_1471be08e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14156a276();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6860,1);
  return uVar3;
}



// FUNCTION 1471be0ee FUN_1471be0ee body=52 status=ok
// SIG undefined FUN_1471be0ee(void)

void FUN_1471be0ee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471be122 FUN_1471be122 body=105 status=ok
// SIG undefined FUN_1471be122(void)

undefined8 FUN_1471be122(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x28e4) == '\x03') {
    local_19 = 0;
    uVar1 = FUN_14714634c();
    FUN_1471cf8a4(uVar1,&local_19);
    uVar1 = FUN_14090c054(local_19,1,param_1);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471be18c FUN_1471be18c body=151 status=ok
// SIG undefined FUN_1471be18c(void)

void FUN_1471be18c(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1471c7272();
  FUN_1471c753a(param_1 + 0xc0);
  FUN_1471c75f0(param_1 + 0x130);
  FUN_1471c7362(param_1 + 0x180);
  FUN_1471c7362(param_1 + 0x1f0);
  plVar1 = *(longlong **)(param_1 + 0x260);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x268);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x268) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_1471c73d2(param_1 + 0x270);
  FUN_1471c73d2(param_1 + 0x2e8);
  return;
}



// FUNCTION 1471be224 FUN_1471be224 body=42 status=ok
// SIG undefined FUN_1471be224(void)

void FUN_1471be224(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471be256 FUN_1471be256 body=96 status=ok
// SIG undefined FUN_1471be256(void)

undefined8 FUN_1471be256(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1401afc62();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6970,1);
  return uVar3;
}



// FUNCTION 1471be2b6 FUN_1471be2b6 body=52 status=ok
// SIG undefined FUN_1471be2b6(void)

void FUN_1471be2b6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471be2ea FUN_1471be2ea body=42 status=ok
// SIG undefined FUN_1471be2ea(void)

void FUN_1471be2ea(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471be31c FUN_1471be31c body=96 status=ok
// SIG undefined FUN_1471be31c(void)

undefined8 FUN_1471be31c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1401b13ba();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e69f8,1);
  return uVar3;
}



// FUNCTION 1471be37c FUN_1471be37c body=52 status=ok
// SIG undefined FUN_1471be37c(void)

void FUN_1471be37c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471be3b0 FUN_1471be3b0 body=42 status=ok
// SIG undefined FUN_1471be3b0(void)

void FUN_1471be3b0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471be3de FUN_1471be3de body=289 status=ok
// SIG undefined FUN_1471be3de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1471be3de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5828) {
    FUN_144b3d300(&DAT_14c9e5828);
    if (DAT_14c9e5828 == -1) {
      FUN_1415dd72e();
      FUN_146126510();
      FUN_140db5666(&DAT_14c9e5780,0,&DAT_14c9e5718,
                    L"FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs",
                    L"/Engine/Private/InstanceCulling/BuildInstanceDrawCommands.usf",
                    L"InstanceCullBuildInstanceIdBufferCS",5,0x80,FUN_1471be560,FUN_1471be500,
                    &LAB_142cc5b4c,&LAB_142cc5b48,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6a80)
      ;
      _DAT_14c9e5780 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cc5c11);
      _Init_thread_footer(&DAT_14c9e5828);
    }
  }
  return &DAT_14c9e5780;
}



// FUNCTION 1471be500 FUN_1471be500 body=96 status=ok
// SIG undefined FUN_1471be500(void)

undefined8 FUN_1471be500(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415dd72e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6a80,1);
  return uVar3;
}



// FUNCTION 1471be560 FUN_1471be560 body=52 status=ok
// SIG undefined FUN_1471be560(void)

void FUN_1471be560(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471be594 FUN_1471be594 body=177 status=ok
// SIG undefined FUN_1471be594(void)

void FUN_1471be594(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401afc62();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e6970,param_4);
  local_78 = &DAT_14c9e6970;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471cfc38(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471be646 FUN_1471be646 body=177 status=ok
// SIG undefined FUN_1471be646(void)

void FUN_1471be646(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401b13ba();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e69f8,param_4);
  local_78 = &DAT_14c9e69f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471cfde0(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471be6f8 FUN_1471be6f8 body=42 status=ok
// SIG undefined FUN_1471be6f8(void)

void FUN_1471be6f8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471be726 FUN_1471be726 body=289 status=ok
// SIG undefined FUN_1471be726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1471be726(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5950) {
    FUN_144b3d300(&DAT_14c9e5950);
    if (DAT_14c9e5950 == -1) {
      FUN_1415c4ec0();
      FUN_14610b994();
      FUN_140db5666(&DAT_14c9e58a8,0,&DAT_14c9e5840,L"FClearIndirectArgInstanceCountCs",
                    L"/Engine/Private/InstanceCulling/BuildInstanceDrawCommands.usf",
                    L"ClearIndirectArgInstanceCountCS",5,1,FUN_1471be8ac,FUN_1471be84c,
                    &LAB_1462d12e0,&LAB_1471be848,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6b08)
      ;
      _DAT_14c9e58a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ccceaa);
      _Init_thread_footer(&DAT_14c9e5950);
    }
  }
  return &DAT_14c9e58a8;
}



// FUNCTION 1471be84c FUN_1471be84c body=96 status=ok
// SIG undefined FUN_1471be84c(void)

undefined8 FUN_1471be84c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415c4ec0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e6b08,1);
  return uVar3;
}



// FUNCTION 1471be8ac FUN_1471be8ac body=52 status=ok
// SIG undefined FUN_1471be8ac(void)

void FUN_1471be8ac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471be8e0 FUN_1471be8e0 body=38 status=ok
// SIG undefined FUN_1471be8e0(void)

undefined8 FUN_1471be8e0(undefined8 param_1,int param_2)

{
  FUN_1456b422a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471be906 FUN_1471be906 body=138 status=ok
// SIG undefined FUN_1471be906(void)

code * FUN_1471be906(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowStepFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x108000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471be990;
}



// FUNCTION 1471be990 FUN_1471be990 body=138 status=ok
// SIG undefined FUN_1471be990(void)

code * FUN_1471be990(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowStepSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x104000000d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d14d8;
}



// FUNCTION 1471bea1a FUN_1471bea1a body=138 status=ok
// SIG undefined FUN_1471bea1a(void)

code * FUN_1471bea1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StepSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfc000000cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471beaa4;
}



// FUNCTION 1471beaa4 FUN_1471beaa4 body=138 status=ok
// SIG undefined FUN_1471beaa4(void)

code * FUN_1471beaa4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxShadowTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8000000ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471beb2e;
}



// FUNCTION 1471beb2e FUN_1471beb2e body=138 status=ok
// SIG undefined FUN_1471beb2e(void)

code * FUN_1471beb2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf4000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bebb8;
}



// FUNCTION 1471bebb8 FUN_1471bebb8 body=138 status=ok
// SIG undefined FUN_1471bebb8(void)

code * FUN_1471bebb8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf0000000ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ccd0d8;
}



// FUNCTION 1471bec42 FUN_1471bec42 body=138 status=ok
// SIG undefined FUN_1471bec42(void)

code * FUN_1471bec42(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVoxelsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe0000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471beccc;
}



// FUNCTION 1471beccc FUN_1471beccc body=138 status=ok
// SIG undefined FUN_1471beccc(void)

code * FUN_1471beccc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightingCacheResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bed56;
}



// FUNCTION 1471bed56 FUN_1471bed56 body=138 status=ok
// SIG undefined FUN_1471bed56(void)

code * FUN_1471bed56(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc8000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bede0;
}



// FUNCTION 1471bede0 FUN_1471bede0 body=138 status=ok
// SIG undefined FUN_1471bede0(void)

code * FUN_1471bede0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AlbedoTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bee6a;
}



// FUNCTION 1471bee6a FUN_1471bee6a body=138 status=ok
// SIG undefined FUN_1471bee6a(void)

code * FUN_1471bee6a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EmissionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471beef4;
}



// FUNCTION 1471beef4 FUN_1471beef4 body=138 status=ok
// SIG undefined FUN_1471beef4(void)

code * FUN_1471beef4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtinctionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bef7e;
}



// FUNCTION 1471bef7e FUN_1471bef7e body=138 status=ok
// SIG undefined FUN_1471bef7e(void)

code * FUN_1471bef7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf008;
}



// FUNCTION 1471bf008 FUN_1471bf008 body=138 status=ok
// SIG undefined FUN_1471bf008(void)

code * FUN_1471bf008(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalBoundsExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ccd162;
}



// FUNCTION 1471bf092 FUN_1471bf092 body=138 status=ok
// SIG undefined FUN_1471bf092(void)

code * FUN_1471bf092(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf11c;
}



// FUNCTION 1471bf11c FUN_1471bf11c body=132 status=ok
// SIG undefined FUN_1471bf11c(void)

undefined1 * FUN_1471bf11c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471bf1a0;
}



// FUNCTION 1471bf1a4 FUN_1471bf1a4 body=138 status=ok
// SIG undefined FUN_1471bf1a4(void)

code * FUN_1471bf1a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e53fde;
}



// FUNCTION 1471bf22e FUN_1471bf22e body=138 status=ok
// SIG undefined FUN_1471bf22e(void)

code * FUN_1471bf22e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf2b8;
}



// FUNCTION 1471bf2b8 FUN_1471bf2b8 body=138 status=ok
// SIG undefined FUN_1471bf2b8(void)

code * FUN_1471bf2b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelMinResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d16f2;
}



// FUNCTION 1471bf342 FUN_1471bf342 body=138 status=ok
// SIG undefined FUN_1471bf342(void)

code * FUN_1471bf342(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWNumVoxelsToRefineBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf3cc;
}



// FUNCTION 1471bf3cc FUN_1471bf3cc body=138 status=ok
// SIG undefined FUN_1471bf3cc(void)

code * FUN_1471bf3cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWVoxelBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVoxelDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf456;
}



// FUNCTION 1471bf456 FUN_1471bf456 body=138 status=ok
// SIG undefined FUN_1471bf456(void)

code * FUN_1471bf456(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWNumVoxelsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2cbb0;
}



// FUNCTION 1471bf4e0 FUN_1471bf4e0 body=132 status=ok
// SIG undefined FUN_1471bf4e0(void)

undefined1 * FUN_1471bf4e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelMinTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471bf564;
}



// FUNCTION 1471bf568 FUN_1471bf568 body=138 status=ok
// SIG undefined FUN_1471bf568(void)

code * FUN_1471bf568(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWNumVoxelsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf5f2;
}



// FUNCTION 1471bf5f2 FUN_1471bf5f2 body=138 status=ok
// SIG undefined FUN_1471bf5f2(void)

code * FUN_1471bf5f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWVoxelsToRefineBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVoxelDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d188a;
}



// FUNCTION 1471bf67c FUN_1471bf67c body=138 status=ok
// SIG undefined FUN_1471bf67c(void)

code * FUN_1471bf67c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelsToRefineBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FVoxelDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf706;
}



// FUNCTION 1471bf706 FUN_1471bf706 body=138 status=ok
// SIG undefined FUN_1471bf706(void)

code * FUN_1471bf706(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVoxelsToRefineBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf790;
}



// FUNCTION 1471bf790 FUN_1471bf790 body=138 status=ok
// SIG undefined FUN_1471bf790(void)

code * FUN_1471bf790(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf81a;
}



// FUNCTION 1471bf81a FUN_1471bf81a body=138 status=ok
// SIG undefined FUN_1471bf81a(void)

code * FUN_1471bf81a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipVolumeResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8488c;
}



// FUNCTION 1471bf8a4 FUN_1471bf8a4 body=138 status=ok
// SIG undefined FUN_1471bf8a4(void)

code * FUN_1471bf8a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf92e;
}



// FUNCTION 1471bf92e FUN_1471bf92e body=132 status=ok
// SIG undefined FUN_1471bf92e(void)

undefined1 * FUN_1471bf92e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelMinTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e847fe;
}



// FUNCTION 1471bf9b2 FUN_1471bf9b2 body=138 status=ok
// SIG undefined FUN_1471bf9b2(void)

code * FUN_1471bf9b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatteringGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FVectorGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bfa3c;
}



// FUNCTION 1471bfa3c FUN_1471bfa3c body=138 status=ok
// SIG undefined FUN_1471bfa3c(void)

code * FUN_1471bfa3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EmissionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FVectorGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000101;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bfac6;
}



// FUNCTION 1471bfac6 FUN_1471bfac6 body=138 status=ok
// SIG undefined FUN_1471bfac6(void)

code * FUN_1471bfac6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtinctionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FScalarGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d199a;
}



// FUNCTION 1471bfb50 FUN_1471bfb50 body=138 status=ok
// SIG undefined FUN_1471bfb50(void)

code * FUN_1471bfb50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bfbda;
}



// FUNCTION 1471bfbda FUN_1471bfbda body=138 status=ok
// SIG undefined FUN_1471bfbda(void)

code * FUN_1471bfbda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridBitmaskBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FTopLevelGridBitmaskData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570e5c4;
}



// FUNCTION 1471bfc64 FUN_1471bfc64 body=138 status=ok
// SIG undefined FUN_1471bfc64(void)

code * FUN_1471bfc64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseMajorantGrid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bfcee;
}



// FUNCTION 1471bfcee FUN_1471bfcee body=138 status=ok
// SIG undefined FUN_1471bfcee(void)

code * FUN_1471bfcee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseOrthoGrid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bfd78;
}



// FUNCTION 1471bfd78 FUN_1471bfd78 body=138 status=ok
// SIG undefined FUN_1471bfd78(void)

code * FUN_1471bfd78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570e64e;
}



// FUNCTION 1471bfe06 FUN_1471bfe06 body=138 status=ok
// SIG undefined FUN_1471bfe06(void)

code * FUN_1471bfe06(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EmissionFroxelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FVectorGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000011f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bfe90;
}



// FUNCTION 1471bfe90 FUN_1471bfe90 body=138 status=ok
// SIG undefined FUN_1471bfe90(void)

code * FUN_1471bfe90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtinctionFroxelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FScalarGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2380000011e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bff1a;
}



// FUNCTION 1471bff1a FUN_1471bff1a body=138 status=ok
// SIG undefined FUN_1471bff1a(void)

code * FUN_1471bff1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelFroxelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2300000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d1aaa;
}



// FUNCTION 1471bffa4 FUN_1471bffa4 body=138 status=ok
// SIG undefined FUN_1471bffa4(void)

code * FUN_1471bffa4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TanHalfFOV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c800000119;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c002e;
}



// FUNCTION 1471c002e FUN_1471c002e body=138 status=ok
// SIG undefined FUN_1471c002e(void)

code * FUN_1471c002e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FarPlaneDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c400000118;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c00b8;
}



// FUNCTION 1471c00b8 FUN_1471c00b8 body=138 status=ok
// SIG undefined FUN_1471c00b8(void)

code * FUN_1471c00b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NearPlaneDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000117;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0142;
}



// FUNCTION 1471c0142 FUN_1471c0142 body=138 status=ok
// SIG undefined FUN_1471c0142(void)

code * FUN_1471c0142(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseFrustumGrid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1bc00000115;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c01cc;
}



// FUNCTION 1471c01cc FUN_1471c01cc body=138 status=ok
// SIG undefined FUN_1471c01cc(void)

code * FUN_1471c01cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000113;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0256;
}



// FUNCTION 1471c0256 FUN_1471c0256 body=138 status=ok
// SIG undefined FUN_1471c0256(void)

code * FUN_1471c0256(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelFroxelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000112;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c02e0;
}



// FUNCTION 1471c02e0 FUN_1471c02e0 body=138 status=ok
// SIG undefined FUN_1471c02e0(void)

code * FUN_1471c02e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000111;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570b24e;
}



// FUNCTION 1471c036a FUN_1471c036a body=138 status=ok
// SIG undefined FUN_1471c036a(void)

code * FUN_1471c036a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000010d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c03f4;
}



// FUNCTION 1471c03f4 FUN_1471c03f4 body=138 status=ok
// SIG undefined FUN_1471c03f4(void)

code * FUN_1471c03f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000010b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c047e;
}



// FUNCTION 1471c047e FUN_1471c047e body=138 status=ok
// SIG undefined FUN_1471c047e(void)

code * FUN_1471c047e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0508;
}



// FUNCTION 1471c0508 FUN_1471c0508 body=138 status=ok
// SIG undefined FUN_1471c0508(void)

code * FUN_1471c0508(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000108;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570b140;
}



// FUNCTION 1471c0596 FUN_1471c0596 body=138 status=ok
// SIG undefined FUN_1471c0596(void)

code * FUN_1471c0596(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000001b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0620;
}



// FUNCTION 1471c0620 FUN_1471c0620 body=138 status=ok
// SIG undefined FUN_1471c0620(void)

code * FUN_1471c0620(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LinkedListBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b8000001b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c06aa;
}



// FUNCTION 1471c06aa FUN_1471c06aa body=138 status=ok
// SIG undefined FUN_1471c06aa(void)

code * FUN_1471c06aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bIsDirectionalLight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b4000001b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e60fc;
}



// FUNCTION 1471c0734 FUN_1471c0734 body=138 status=ok
// SIG undefined FUN_1471c0734(void)

code * FUN_1471c0734(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1ac000001ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e6184;
}



// FUNCTION 1471c07be FUN_1471c07be body=138 status=ok
// SIG undefined FUN_1471c07be(void)

code * FUN_1471c07be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a0000001ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0848;
}



// FUNCTION 1471c0848 FUN_1471c0848 body=138 status=ok
// SIG undefined FUN_1471c0848(void)

code * FUN_1471c0848(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190000001aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c08d2;
}



// FUNCTION 1471c08d2 FUN_1471c08d2 body=138 status=ok
// SIG undefined FUN_1471c08d2(void)

code * FUN_1471c08d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e6078;
}



// FUNCTION 1471c0960 FUN_1471c0960 body=138 status=ok
// SIG undefined FUN_1471c0960(void)

code * FUN_1471c0960(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000200;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c09ea;
}



// FUNCTION 1471c09ea FUN_1471c09ea body=138 status=ok
// SIG undefined FUN_1471c09ea(void)

code * FUN_1471c09ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FarPlaneDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000001fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0a74;
}



// FUNCTION 1471c0a74 FUN_1471c0a74 body=138 status=ok
// SIG undefined FUN_1471c0a74(void)

code * FUN_1471c0a74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NearPlaneDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x84000001fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d1c42;
}



// FUNCTION 1471c0afe FUN_1471c0afe body=138 status=ok
// SIG undefined FUN_1471c0afe(void)

code * FUN_1471c0afe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f47af0;
}



// FUNCTION 1471c0b88 FUN_1471c0b88 body=138 status=ok
// SIG undefined FUN_1471c0b88(void)

code * FUN_1471c0b88(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f47b7a;
}



// FUNCTION 1471c0c16 FUN_1471c0c16 body=258 status=ok
// SIG undefined FUN_1471c0c16(void)

void FUN_1471c0c16(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5d30) {
    FUN_144b3d300(&DAT_14c9e5d30);
    if (DAT_14c9e5d30 == -1) {
      FUN_1471c0d1a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x222;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5cb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf3a);
      _Init_thread_footer(&DAT_14c9e5d30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471c0d1a FUN_1471c0d1a body=226 status=ok
// SIG undefined FUN_1471c0d1a(void)

longlong * FUN_1471c0d1a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1471c0dfe;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471c0dfe FUN_1471c0dfe body=136 status=ok
// SIG undefined FUN_1471c0dfe(void)

code * FUN_1471c0dfe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScatteringGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVectorGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000024c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0e86;
}



// FUNCTION 1471c0e86 FUN_1471c0e86 body=136 status=ok
// SIG undefined FUN_1471c0e86(void)

code * FUN_1471c0e86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWEmissionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVectorGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b80000024b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0f0e;
}



// FUNCTION 1471c0f0e FUN_1471c0f0e body=136 status=ok
// SIG undefined FUN_1471c0f0e(void)

code * FUN_1471c0f0e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWExtinctionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FScalarGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b00000024a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0f96;
}



// FUNCTION 1471c0f96 FUN_1471c0f96 body=136 status=ok
// SIG undefined FUN_1471c0f96(void)

code * FUN_1471c0f96(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWBottomLevelGridAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a800000249;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c101e;
}



// FUNCTION 1471c101e FUN_1471c101e body=136 status=ok
// SIG undefined FUN_1471c101e(void)

code * FUN_1471c101e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWTopLevelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000247;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c10a6;
}



// FUNCTION 1471c10a6 FUN_1471c10a6 body=136 status=ok
// SIG undefined FUN_1471c10a6(void)

code * FUN_1471c10a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000244;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c112e;
}



// FUNCTION 1471c112e FUN_1471c112e body=136 status=ok
// SIG undefined FUN_1471c112e(void)

code * FUN_1471c112e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RasterTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FRasterTileData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18800000241;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c11b6;
}



// FUNCTION 1471c11b6 FUN_1471c11b6 body=136 status=ok
// SIG undefined FUN_1471c11b6(void)

code * FUN_1471c11b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RasterTileAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000240;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c123e;
}



// FUNCTION 1471c123e FUN_1471c123e body=142 status=ok
// SIG undefined FUN_1471c123e(void)

code * FUN_1471c123e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448a8484();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BlueNoise";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBlueNoise";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1700000023d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471c12cc;
}



// FUNCTION 1471c12cc FUN_1471c12cc body=136 status=ok
// SIG undefined FUN_1471c12cc(void)

code * FUN_1471c12cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1600000023c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1354;
}



// FUNCTION 1471c1354 FUN_1471c1354 body=136 status=ok
// SIG undefined FUN_1471c1354(void)

code * FUN_1471c1354(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BottomLevelGridBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15c00000239;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c13dc;
}



// FUNCTION 1471c13dc FUN_1471c13dc body=136 status=ok
// SIG undefined FUN_1471c13dc(void)

code * FUN_1471c13dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FarPlaneDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15800000237;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1464;
}



// FUNCTION 1471c1464 FUN_1471c1464 body=136 status=ok
// SIG undefined FUN_1471c1464(void)

code * FUN_1471c1464(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NearPlaneDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15400000236;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c14ec;
}



// FUNCTION 1471c14ec FUN_1471c14ec body=136 status=ok
// SIG undefined FUN_1471c14ec(void)

code * FUN_1471c14ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TanHalfFOV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000235;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1574;
}



// FUNCTION 1471c1574 FUN_1471c1574 body=136 status=ok
// SIG undefined FUN_1471c1574(void)

code * FUN_1471c1574(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000234;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c15fc;
}



// FUNCTION 1471c15fc FUN_1471c15fc body=136 status=ok
// SIG undefined FUN_1471c15fc(void)

code * FUN_1471c15fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000233;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1684;
}



// FUNCTION 1471c1684 FUN_1471c1684 body=136 status=ok
// SIG undefined FUN_1471c1684(void)

code * FUN_1471c1684(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000232;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c170c;
}



// FUNCTION 1471c170c FUN_1471c170c body=136 status=ok
// SIG undefined FUN_1471c170c(void)

code * FUN_1471c170c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xec0000022f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1794;
}



// FUNCTION 1471c1794 FUN_1471c1794 body=136 status=ok
// SIG undefined FUN_1471c1794(void)

code * FUN_1471c1794(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalBoundsExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000022e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c181c;
}



// FUNCTION 1471c181c FUN_1471c181c body=136 status=ok
// SIG undefined FUN_1471c181c(void)

code * FUN_1471c181c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalBoundsOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000022d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c18a4;
}



// FUNCTION 1471c18a4 FUN_1471c18a4 body=136 status=ok
// SIG undefined FUN_1471c18a4(void)

code * FUN_1471c18a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000022c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c192c;
}



// FUNCTION 1471c192c FUN_1471c192c body=136 status=ok
// SIG undefined FUN_1471c192c(void)

code * FUN_1471c192c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000022b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c19b4;
}



// FUNCTION 1471c19b4 FUN_1471c19b4 body=136 status=ok
// SIG undefined FUN_1471c19b4(void)

code * FUN_1471c19b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000022a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1a3c;
}



// FUNCTION 1471c1a3c FUN_1471c1a3c body=136 status=ok
// SIG undefined FUN_1471c1a3c(void)

code * FUN_1471c1a3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000229;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1ac4;
}



// FUNCTION 1471c1ac4 FUN_1471c1ac4 body=136 status=ok
// SIG undefined FUN_1471c1ac4(void)

code * FUN_1471c1ac4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000226;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1b4c;
}



// FUNCTION 1471c1b4c FUN_1471c1b4c body=142 status=ok
// SIG undefined FUN_1471c1b4c(void)

code * FUN_1471c1b4c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000225;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471c1bda;
}



// FUNCTION 1471c1bda FUN_1471c1bda body=136 status=ok
// SIG undefined FUN_1471c1bda(void)

undefined1 * FUN_1471c1bda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x224;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471c1c62;
}



// FUNCTION 1471c1c66 FUN_1471c1c66 body=138 status=ok
// SIG undefined FUN_1471c1c66(void)

code * FUN_1471c1c66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c000002a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4805c;
}



// FUNCTION 1471c1cf0 FUN_1471c1cf0 body=138 status=ok
// SIG undefined FUN_1471c1cf0(void)

code * FUN_1471c1cf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingRateOutOfFrustum";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1d7a;
}



// FUNCTION 1471c1d7a FUN_1471c1d7a body=138 status=ok
// SIG undefined FUN_1471c1d7a(void)

code * FUN_1471c1d7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingRateInFrustum";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c000002a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1e04;
}



// FUNCTION 1471c1e04 FUN_1471c1e04 body=138 status=ok
// SIG undefined FUN_1471c1e04(void)

code * FUN_1471c1e04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000029e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1e8e;
}



// FUNCTION 1471c1e8e FUN_1471c1e8e body=138 status=ok
// SIG undefined FUN_1471c1e8e(void)

code * FUN_1471c1e8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000029d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1f18;
}



// FUNCTION 1471c1f18 FUN_1471c1f18 body=138 status=ok
// SIG undefined FUN_1471c1f18(void)

code * FUN_1471c1f18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000029b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1fa2;
}



// FUNCTION 1471c1fa2 FUN_1471c1fa2 body=138 status=ok
// SIG undefined FUN_1471c1fa2(void)

code * FUN_1471c1fa2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000029a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f480e6;
}



// FUNCTION 1471c2030 FUN_1471c2030 body=138 status=ok
// SIG undefined FUN_1471c2030(void)

code * FUN_1471c2030(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c20ba;
}



// FUNCTION 1471c20ba FUN_1471c20ba body=138 status=ok
// SIG undefined FUN_1471c20ba(void)

code * FUN_1471c20ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionGridBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000002d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f48652;
}



// FUNCTION 1471c2144 FUN_1471c2144 body=138 status=ok
// SIG undefined FUN_1471c2144(void)

code * FUN_1471c2144(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bSampleAtVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f48766;
}



// FUNCTION 1471c21ce FUN_1471c21ce body=138 status=ok
// SIG undefined FUN_1471c21ce(void)

code * FUN_1471c21ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2258;
}



// FUNCTION 1471c2258 FUN_1471c2258 body=138 status=ok
// SIG undefined FUN_1471c2258(void)

code * FUN_1471c2258(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d1f74;
}



// FUNCTION 1471c22e6 FUN_1471c22e6 body=138 status=ok
// SIG undefined FUN_1471c22e6(void)

code * FUN_1471c22e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNumRasterTiles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000300;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d2086;
}



// FUNCTION 1471c2374 FUN_1471c2374 body=258 status=ok
// SIG undefined FUN_1471c2374(void)

void FUN_1471c2374(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5fd8) {
    FUN_144b3d300(&DAT_14c9e5fd8);
    if (DAT_14c9e5fd8 == -1) {
      FUN_1471c2478(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x34f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5f58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf76);
      _Init_thread_footer(&DAT_14c9e5fd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471c2478 FUN_1471c2478 body=226 status=ok
// SIG undefined FUN_1471c2478(void)

longlong * FUN_1471c2478(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1471c255c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471c255c FUN_1471c255c body=136 status=ok
// SIG undefined FUN_1471c255c(void)

code * FUN_1471c255c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HomogeneousThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b400000388;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c25e4;
}



// FUNCTION 1471c25e4 FUN_1471c25e4 body=136 status=ok
// SIG undefined FUN_1471c25e4(void)

code * FUN_1471c25e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HashTableSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000385;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c266c;
}



// FUNCTION 1471c266c FUN_1471c266c body=136 status=ok
// SIG undefined FUN_1471c266c(void)

code * FUN_1471c266c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWHashToVoxelBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a800000384;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c26f4;
}



// FUNCTION 1471c26f4 FUN_1471c26f4 body=136 status=ok
// SIG undefined FUN_1471c26f4(void)

code * FUN_1471c26f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWHashTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000383;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c277c;
}



// FUNCTION 1471c277c FUN_1471c277c body=136 status=ok
// SIG undefined FUN_1471c277c(void)

code * FUN_1471c277c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectionGridAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19800000380;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2804;
}



// FUNCTION 1471c2804 FUN_1471c2804 body=136 status=ok
// SIG undefined FUN_1471c2804(void)

code * FUN_1471c2804(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000037f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c288c;
}



// FUNCTION 1471c288c FUN_1471c288c body=136 status=ok
// SIG undefined FUN_1471c288c(void)

code * FUN_1471c288c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FixedBottomLevelResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18c0000037e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2914;
}



// FUNCTION 1471c2914 FUN_1471c2914 body=136 status=ok
// SIG undefined FUN_1471c2914(void)

code * FUN_1471c2914(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionGridBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1880000037d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c299c;
}



// FUNCTION 1471c299c FUN_1471c299c body=136 status=ok
// SIG undefined FUN_1471c299c(void)

code * FUN_1471c299c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScatteringGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVectorGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000037a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2a24;
}



// FUNCTION 1471c2a24 FUN_1471c2a24 body=136 status=ok
// SIG undefined FUN_1471c2a24(void)

code * FUN_1471c2a24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWEmissionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FVectorGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17800000379;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2aac;
}



// FUNCTION 1471c2aac FUN_1471c2aac body=136 status=ok
// SIG undefined FUN_1471c2aac(void)

code * FUN_1471c2aac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWExtinctionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FScalarGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000378;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2b34;
}



// FUNCTION 1471c2b34 FUN_1471c2b34 body=136 status=ok
// SIG undefined FUN_1471c2b34(void)

code * FUN_1471c2b34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWTopLevelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16800000377;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2bbc;
}



// FUNCTION 1471c2bbc FUN_1471c2bbc body=136 status=ok
// SIG undefined FUN_1471c2bbc(void)

code * FUN_1471c2bbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWBottomLevelGridAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16000000376;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2c44;
}



// FUNCTION 1471c2c44 FUN_1471c2c44 body=136 status=ok
// SIG undefined FUN_1471c2c44(void)

code * FUN_1471c2c44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15800000374;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2ccc;
}



// FUNCTION 1471c2ccc FUN_1471c2ccc body=136 status=ok
// SIG undefined FUN_1471c2ccc(void)

code * FUN_1471c2ccc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14800000371;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2d54;
}



// FUNCTION 1471c2d54 FUN_1471c2d54 body=136 status=ok
// SIG undefined FUN_1471c2d54(void)

code * FUN_1471c2d54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RasterTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FRasterTileData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000036e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2ddc;
}



// FUNCTION 1471c2ddc FUN_1471c2ddc body=136 status=ok
// SIG undefined FUN_1471c2ddc(void)

code * FUN_1471c2ddc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RasterTileAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1380000036d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2e64;
}



// FUNCTION 1471c2e64 FUN_1471c2e64 body=136 status=ok
// SIG undefined FUN_1471c2e64(void)

code * FUN_1471c2e64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bSampleAtVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1340000036a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2eec;
}



// FUNCTION 1471c2eec FUN_1471c2eec body=136 status=ok
// SIG undefined FUN_1471c2eec(void)

code * FUN_1471c2eec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000369;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c2f74;
}



// FUNCTION 1471c2f74 FUN_1471c2f74 body=142 status=ok
// SIG undefined FUN_1471c2f74(void)

code * FUN_1471c2f74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448a8484();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BlueNoise";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBlueNoise";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x12000000366;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471c3002;
}



// FUNCTION 1471c3002 FUN_1471c3002 body=136 status=ok
// SIG undefined FUN_1471c3002(void)

code * FUN_1471c3002(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BottomLevelGridBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11c00000363;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c308a;
}



// FUNCTION 1471c308a FUN_1471c308a body=136 status=ok
// SIG undefined FUN_1471c308a(void)

code * FUN_1471c308a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000361;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3112;
}



// FUNCTION 1471c3112 FUN_1471c3112 body=136 status=ok
// SIG undefined FUN_1471c3112(void)

code * FUN_1471c3112(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000360;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c319a;
}



// FUNCTION 1471c319a FUN_1471c319a body=136 status=ok
// SIG undefined FUN_1471c319a(void)

code * FUN_1471c319a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000035f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3222;
}



// FUNCTION 1471c3222 FUN_1471c3222 body=136 status=ok
// SIG undefined FUN_1471c3222(void)

code * FUN_1471c3222(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xec0000035c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c32aa;
}



// FUNCTION 1471c32aa FUN_1471c32aa body=136 status=ok
// SIG undefined FUN_1471c32aa(void)

code * FUN_1471c32aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalBoundsExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000035b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3332;
}



// FUNCTION 1471c3332 FUN_1471c3332 body=136 status=ok
// SIG undefined FUN_1471c3332(void)

code * FUN_1471c3332(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalBoundsOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000035a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c33ba;
}



// FUNCTION 1471c33ba FUN_1471c33ba body=136 status=ok
// SIG undefined FUN_1471c33ba(void)

code * FUN_1471c33ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000359;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3442;
}



// FUNCTION 1471c3442 FUN_1471c3442 body=136 status=ok
// SIG undefined FUN_1471c3442(void)

code * FUN_1471c3442(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000358;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c34ca;
}



// FUNCTION 1471c34ca FUN_1471c34ca body=136 status=ok
// SIG undefined FUN_1471c34ca(void)

code * FUN_1471c34ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000357;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3552;
}



// FUNCTION 1471c3552 FUN_1471c3552 body=136 status=ok
// SIG undefined FUN_1471c3552(void)

code * FUN_1471c3552(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000356;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c35da;
}



// FUNCTION 1471c35da FUN_1471c35da body=136 status=ok
// SIG undefined FUN_1471c35da(void)

code * FUN_1471c35da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000353;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3662;
}



// FUNCTION 1471c3662 FUN_1471c3662 body=142 status=ok
// SIG undefined FUN_1471c3662(void)

code * FUN_1471c3662(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000352;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471c36f0;
}



// FUNCTION 1471c36f0 FUN_1471c36f0 body=136 status=ok
// SIG undefined FUN_1471c36f0(void)

undefined1 * FUN_1471c36f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x351;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471c3778;
}



// FUNCTION 1471c377c FUN_1471c377c body=138 status=ok
// SIG undefined FUN_1471c377c(void)

code * FUN_1471c377c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtinctionGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FScalarGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000431;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e84d72;
}



// FUNCTION 1471c3806 FUN_1471c3806 body=138 status=ok
// SIG undefined FUN_1471c3806(void)

code * FUN_1471c3806(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWLightingTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000535;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3890;
}



// FUNCTION 1471c3890 FUN_1471c3890 body=138 status=ok
// SIG undefined FUN_1471c3890(void)

code * FUN_1471c3890(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000532;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d24c0;
}



// FUNCTION 1471c391a FUN_1471c391a body=138 status=ok
// SIG undefined FUN_1471c391a(void)

code * FUN_1471c391a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StepSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000052a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c39a4;
}



// FUNCTION 1471c39a4 FUN_1471c39a4 body=138 status=ok
// SIG undefined FUN_1471c39a4(void)

code * FUN_1471c39a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7400000529;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f48c48;
}



// FUNCTION 1471c3a32 FUN_1471c3a32 body=138 status=ok
// SIG undefined FUN_1471c3a32(void)

code * FUN_1471c3a32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWBeerShadowMapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x41000000bb2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3abc;
}



// FUNCTION 1471c3abc FUN_1471c3abc body=138 status=ok
// SIG undefined FUN_1471c3abc(void)

code * FUN_1471c3abc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWVolumetricShadowLinkedListBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FAVSMLinkedListPackedData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40800000bb1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f491e4;
}



// FUNCTION 1471c3b46 FUN_1471c3b46 body=138 status=ok
// SIG undefined FUN_1471c3b46(void)

code * FUN_1471c3b46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f000000bac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4926e;
}



// FUNCTION 1471c3bd0 FUN_1471c3bd0 body=138 status=ok
// SIG undefined FUN_1471c3bd0(void)

code * FUN_1471c3bd0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxStepCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e400000ba8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3c5a;
}



// FUNCTION 1471c3c5a FUN_1471c3c5a body=138 status=ok
// SIG undefined FUN_1471c3c5a(void)

code * FUN_1471c3c5a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e000000ba7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d2782;
}



// FUNCTION 1471c3ce4 FUN_1471c3ce4 body=138 status=ok
// SIG undefined FUN_1471c3ce4(void)

code * FUN_1471c3ce4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000ba0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 6;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3d6e;
}



// FUNCTION 1471c3d6e FUN_1471c3d6e body=138 status=ok
// SIG undefined FUN_1471c3d6e(void)

code * FUN_1471c3d6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000b9f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 6;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3df8;
}



// FUNCTION 1471c3df8 FUN_1471c3df8 body=138 status=ok
// SIG undefined FUN_1471c3df8(void)

code * FUN_1471c3df8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumShadowMatrices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000b9e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3e82;
}



// FUNCTION 1471c3e82 FUN_1471c3e82 body=138 status=ok
// SIG undefined FUN_1471c3e82(void)

code * FUN_1471c3e82(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RelativeErrorThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb400000b9c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4915a;
}



// FUNCTION 1471c3f0c FUN_1471c3f0c body=138 status=ok
// SIG undefined FUN_1471c3f0c(void)

code * FUN_1471c3f0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StochasticFilteringMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xac00000b9a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3f96;
}



// FUNCTION 1471c3f96 FUN_1471c3f96 body=138 status=ok
// SIG undefined FUN_1471c3f96(void)

code * FUN_1471c3f96(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000b99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c4020;
}



// FUNCTION 1471c4020 FUN_1471c4020 body=138 status=ok
// SIG undefined FUN_1471c4020(void)

code * FUN_1471c4020(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000b98;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c40aa;
}



// FUNCTION 1471c40aa FUN_1471c40aa body=138 status=ok
// SIG undefined FUN_1471c40aa(void)

code * FUN_1471c40aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000b97;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c4134;
}



// FUNCTION 1471c4134 FUN_1471c4134 body=138 status=ok
// SIG undefined FUN_1471c4134(void)

code * FUN_1471c4134(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowStepFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8400000b94;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c41be;
}



// FUNCTION 1471c41be FUN_1471c41be body=138 status=ok
// SIG undefined FUN_1471c41be(void)

code * FUN_1471c41be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowStepSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b93;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d28a6;
}



// FUNCTION 1471c424c FUN_1471c424c body=138 status=ok
// SIG undefined FUN_1471c424c(void)

code * FUN_1471c424c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWVolumetricShadowIndirectionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FAVSMIndirectionPackedData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000be9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c42d6;
}



// FUNCTION 1471c42d6 FUN_1471c42d6 body=138 status=ok
// SIG undefined FUN_1471c42d6(void)

code * FUN_1471c42d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWVolumetricShadowIndirectionAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000be8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e70724;
}


