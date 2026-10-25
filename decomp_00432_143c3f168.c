// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c3f168 FUN_143c3f168 body=57 status=ok
// SIG undefined FUN_143c3f168(void)

void FUN_143c3f168(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57680 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57680 = FUN_140002ddd(FUN_1464bd068,uVar1,L"FactEvaluator_IsInMap");
  }
  return;
}



// FUNCTION 143c3f390 FUN_143c3f390 body=642 status=ok
// SIG undefined FUN_143c3f390(void)

void FUN_143c3f390(void)

{
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b057fe0,1,&PTR_FUN_14b057fa0,2);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0580d0,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b058210,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0583f0,1,&PTR_FUN_14b0583d0,1);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b058850,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b058bb0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b058c60,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b058d10,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b05bba0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b05c040,2,&PTR_FUN_14b05c000,2);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b05c4f0,3,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b05cbe0,2,&PTR_FUN_14b05cba0,2);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b05cfd0,2,&PTR_FUN_14b05cfb0,1);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b05d240,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b05d430,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b05e2b0,1,&PTR_FUN_14b05e210,4,&PTR_FUN_14b05e1b0,3);
  return;
}



// FUNCTION 143c3f614 FUN_143c3f614 body=55 status=ok
// SIG undefined FUN_143c3f614(void)

void FUN_143c3f614(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57b40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57b40 = FUN_14171c317(FUN_1464be8d0,uVar1,L"EForceSelection");
  }
  return;
}



// FUNCTION 143c3f64b FUN_143c3f64b body=55 status=ok
// SIG undefined FUN_143c3f64b(void)

void FUN_143c3f64b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57bf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57bf8 = FUN_14171c317(FUN_1464bec0f,uVar1,L"EGameResourcePoolState");
  }
  return;
}



// FUNCTION 143c3f682 FUN_143c3f682 body=55 status=ok
// SIG undefined FUN_143c3f682(void)

void FUN_143c3f682(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c10 = FUN_14171c317(FUN_1464bec40,uVar1,L"EGameResourcePoolSegmentState");
  }
  return;
}



// FUNCTION 143c3f6b9 FUN_143c3f6b9 body=55 status=ok
// SIG undefined FUN_143c3f6b9(void)

void FUN_143c3f6b9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c70 = FUN_14171c317(FUN_1464bedfc,uVar1,L"GameResourcePoolReplicationType");
  }
  return;
}



// FUNCTION 143c3f6f0 FUN_143c3f6f0 body=55 status=ok
// SIG undefined FUN_143c3f6f0(void)

void FUN_143c3f6f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57da8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57da8 = FUN_14171c317(FUN_1464bf3ba,uVar1,L"EGameResourcePoolValueType");
  }
  return;
}



// FUNCTION 143c3f848 FUN_143c3f848 body=57 status=ok
// SIG undefined FUN_143c3f848(void)

void FUN_143c3f848(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57af8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57af8 = FUN_140002ddd(FUN_1464be80c,uVar1,L"FiringPatternDef");
  }
  return;
}



// FUNCTION 143c3f934 FUN_143c3f934 body=39 status=ok
// SIG undefined FUN_143c3f934(void)

undefined8 FUN_143c3f934(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) != 1)) {
    uVar1 = 0;
  }
  else {
    FUN_14892b616(param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143c3f9f8 FUN_143c3f9f8 body=57 status=ok
// SIG undefined FUN_143c3f9f8(void)

void FUN_143c3f9f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57bd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57bd0 = FUN_140002ddd(FUN_141848ba1,uVar1,L"GameResourceDef");
  }
  return;
}



// FUNCTION 143c3fa40 FUN_143c3fa40 body=328 status=ok
// SIG undefined FUN_143c3fa40(void)

undefined8 * FUN_143c3fa40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b069e00;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  memset(param_1 + 4,0,0xe0);
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x44) = 2;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  param_1[0x59] = 2;
  return param_1;
}



// FUNCTION 143c3fb88 FUN_143c3fb88 body=57 status=ok
// SIG undefined FUN_143c3fb88(void)

void FUN_143c3fb88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c28 = FUN_140002ddd(FUN_1464bec71,uVar1,L"GameResourcePool");
  }
  return;
}



// FUNCTION 143c3fc16 FUN_143c3fc16 body=427 status=ok
// SIG undefined FUN_143c3fc16(void)

void FUN_143c3fc16(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x368);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b068790;
  *(undefined4 *)(param_2 + 4) = 0xb;
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x11) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8b) = 0;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1e) = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x25) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x27) = 0x3f800000;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x31) = 0x3f800000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x39) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x3b) = 0x3f800000;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x45) = 0x3f800000;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  *(undefined4 *)(param_2 + 0x4d) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x4f) = 0x3f800000;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  *(undefined4 *)(param_2 + 0x57) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x59) = 0x3f800000;
  param_2[0x5f] = 0;
  param_2[0x60] = 0;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  param_2[0x5b] = 0;
  param_2[0x5c] = 0;
  *(undefined4 *)(param_2 + 0x61) = 0xf00000d0;
  *(undefined4 *)(param_2 + 99) = 0x3f800000;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  *(undefined4 *)(param_2 + 0x6b) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x6d) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x374) = 0x100;
  return;
}



// FUNCTION 143c3fdce FUN_143c3fdce body=57 status=ok
// SIG undefined FUN_143c3fdce(void)

void FUN_143c3fdce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c88 = FUN_140002ddd(FUN_141848bd2,uVar1,L"GameResourcePoolDef");
  }
  return;
}



// FUNCTION 143c3fef8 FUN_143c3fef8 body=57 status=ok
// SIG undefined FUN_143c3fef8(void)

void FUN_143c3fef8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57e30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57e30 = FUN_140002ddd(FUN_1464bf5e3,uVar1,L"GbxAcousticDataProvider");
  }
  return;
}



// FUNCTION 143c3ff31 FUN_143c3ff31 body=4674 status=ok
// SIG undefined FUN_143c3ff31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c3ff31(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  double *pdVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
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
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  char *local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0610d0);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b061150);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0612d0);
  local_138 = "AssetRegistry";
  dStack_130 = (double)CONCAT35(dStack_130._5_3_,0xd);
  uVar11 = FUN_14001a6c0(&local_138,1);
  _DAT_14cb57ad0 = (ulonglong)uVar11;
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b061bc0,1,&PTR_FUN_14b061b70);
  uStack_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b061fc0,1,0);
  uStack_1e8 = 1;
  ppuStack_1f0 = &PTR_FUN_14b0623f0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b062410);
  uStack_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b062790,1,0);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b062860);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b062b60);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b062ce0);
  uStack_1e8 = 2;
  ppuStack_1f0 = &PTR_FUN_14b063730;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b063770);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b063890);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0639b0);
  uStack_1e8 = 1;
  ppuStack_1f0 = &PTR_FUN_14b0642e0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b064300);
  uStack_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b065ee0,1,0);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b065f90);
  uStack_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b066300,1,0);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0663b0);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b066510);
  uStack_1e8 = 1;
  ppuStack_1f0 = &PTR_FUN_14b0668b0;
  local_1f8 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0668d0);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b066c60);
  _DAT_14cb57e00 = 0xb33bbd2e;
  local_138 = DAT_14c846290;
  dStack_130 = DAT_14c846298;
  local_128 = DAT_14c8462a0;
  local_120 = DAT_14c8462a8;
  dStack_118 = DAT_14c8462b0;
  local_110 = DAT_14c8462b8;
  local_108 = DAT_14c8462c0;
  dStack_100 = DAT_14c8462c8;
  local_f8 = DAT_14c8462d0;
  local_f0 = DAT_14c8462d8;
  dStack_e8 = DAT_14c8462e0;
  local_e0 = DAT_14c8462e8;
  dVar16 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + (double)DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar16 * dVar16;
  uVar13 = SUB84(DAT_14c8464f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar12 = uVar13;
    uVar14 = uVar15;
    local_1e0 = DAT_14c8464e8;
    dVar17 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar12 = 0;
      uVar14 = 0;
      local_1e0 = dVar16 * (1.0 / SQRT(dVar1));
      dVar17 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar17;
    local_1d8 = (double)CONCAT44(uVar14,uVar12);
  }
  else {
    local_1d8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_1e0 = dVar16;
  }
  uStack_1d0 = 0;
  dVar16 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar17 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar1 = dVar17 * dVar17 + dVar16 * dVar16;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar12 = uVar13;
    uVar14 = uVar15;
    dVar18 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar12 = 0;
      uVar14 = 0;
      dVar18 = dVar16 * (1.0 / SQRT(dVar1));
      dVar3 = dVar17 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c8462e8 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c8462e8 + DAT_14c8462b8);
    uVar12 = (int)uVar6;
    uVar14 = (int)(uVar6 >> 0x20);
    dVar18 = dVar16;
    dVar3 = dVar17;
  }
  local_148 = DAT_14c846300;
  local_158 = DAT_14c8462f0;
  dStack_150 = DAT_14c8462f8;
  local_178 = DAT_14c846308;
  dStack_170 = DAT_14c846310;
  local_168 = DAT_14c846318;
  dVar1 = DAT_14c846298 + DAT_14c846310;
  dVar16 = (double)DAT_14c846290 + DAT_14c846308;
  dVar17 = dVar16 * dVar16 + dVar1 * dVar1;
  if ((dVar17 != 1.0) || (NAN(dVar17))) {
    uVar19 = uVar13;
    uVar20 = uVar15;
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar17) {
      uVar19 = 0;
      uVar20 = 0;
      dVar4 = dVar1 * (1.0 / SQRT(dVar17));
      dVar5 = dVar16 * (1.0 / SQRT(dVar17));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462a0 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462a0);
    uVar19 = (int)uVar6;
    uVar20 = (int)(uVar6 >> 0x20);
    dVar4 = dVar1;
    dVar5 = dVar16;
  }
  dVar16 = DAT_14c8462b0 + DAT_14c846310;
  dVar17 = DAT_14c8462a8 + DAT_14c846308;
  dVar1 = dVar17 * dVar17 + dVar16 * dVar16;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    dVar7 = DAT_14c8464e8;
    dVar8 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      dVar7 = dVar16 * (1.0 / SQRT(dVar1));
      dVar8 = dVar17 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462b8);
    uVar13 = (undefined4)uVar6;
    uVar15 = (undefined4)(uVar6 >> 0x20);
    dVar7 = dVar16;
    dVar8 = dVar17;
  }
  DAT_14cb57e08 = (void *)0x0;
  _DAT_14cb57e10 = 10;
  FUN_1405b70fe(&DAT_14cb57e08,10,0);
  pvVar9 = DAT_14cb57e08;
  memcpy(DAT_14cb57e08,&local_138,0x60);
  *(double *)((longlong)pvVar9 + 0x60) = dVar2;
  *(double *)((longlong)pvVar9 + 0x68) = local_1e0;
  *(double *)((longlong)pvVar9 + 0x70) = local_1d8;
  *(double *)((longlong)pvVar9 + 0x78) = dVar3;
  *(double *)((longlong)pvVar9 + 0x80) = dVar18;
  *(ulonglong *)((longlong)pvVar9 + 0x88) = CONCAT44(uVar14,uVar12);
  *(double *)((longlong)pvVar9 + 0x90) = local_158;
  *(double *)((longlong)pvVar9 + 0x98) = dStack_150;
  *(double *)((longlong)pvVar9 + 0xa0) = local_148;
  *(double *)((longlong)pvVar9 + 0xb8) = local_168;
  *(double *)((longlong)pvVar9 + 0xa8) = local_178;
  *(double *)((longlong)pvVar9 + 0xb0) = dStack_170;
  *(double *)((longlong)pvVar9 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar9 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar9 + 0xd0) = CONCAT44(uVar20,uVar19);
  *(double *)((longlong)pvVar9 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar9 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar9 + 0xe8) = CONCAT44(uVar15,uVar13);
  atexit((_func_5014 *)&LAB_143c3f727);
  uVar12 = SUB84(DAT_14c846290,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar13 = SUB84(DAT_14c846298,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if (((((double)DAT_14c846290 != 0.0) || (NAN((double)DAT_14c846290))) || (DAT_14c846298 != 0.0))
     || (NAN(DAT_14c846298))) {
    local_1e0 = atan2(DAT_14c846298,(double)DAT_14c846290);
    local_1e0 = local_1e0 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c846290,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar13 = SUB84(DAT_14c846298,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_1e0 = 0.0;
  }
  dVar2 = SQRT((double)CONCAT44(uVar14,uVar12) * (double)CONCAT44(uVar14,uVar12) +
               (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  dVar1 = 0.0;
  if (((DAT_14c8462a0 != 0.0) || (NAN(DAT_14c8462a0))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
    dVar1 = atan2(DAT_14c8462a0,dVar2);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar12 = SUB84(DAT_14c8462a8,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
  uVar13 = SUB84(DAT_14c8462b0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  if (((DAT_14c8462a8 != 0.0) || (NAN(DAT_14c8462a8))) ||
     ((DAT_14c8462b0 != 0.0 || (NAN(DAT_14c8462b0))))) {
    local_1b8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1b8 = local_1b8 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c8462a8,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar13 = SUB84(DAT_14c8462b0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1b8 = 0.0;
  }
  dVar16 = SQRT((double)CONCAT44(uVar14,uVar12) * (double)CONCAT44(uVar14,uVar12) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  dVar2 = 0.0;
  if ((((DAT_14c8462b8 != 0.0) || (NAN(DAT_14c8462b8))) || (dVar16 != 0.0)) || (NAN(dVar16))) {
    dVar2 = atan2(DAT_14c8462b8,dVar16);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar12 = SUB84(DAT_14c8462c0,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
  uVar13 = SUB84(DAT_14c8462c8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  if (((DAT_14c8462c0 != 0.0) || (NAN(DAT_14c8462c0))) ||
     ((DAT_14c8462c8 != 0.0 || (NAN(DAT_14c8462c8))))) {
    local_1c0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1c0 = local_1c0 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c8462c0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar13 = SUB84(DAT_14c8462c8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1c0 = 0.0;
  }
  dVar16 = SQRT((double)CONCAT44(uVar14,uVar12) * (double)CONCAT44(uVar14,uVar12) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  local_188 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_188 = atan2(DAT_14c8462d0,dVar16);
    local_188 = local_188 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462d8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar12 = SUB84(DAT_14c8462e0,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1c8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1c8 = local_1c8 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462d8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar12 = SUB84(DAT_14c8462e0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1c8 = 0.0;
  }
  dVar16 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar14,uVar12) * (double)CONCAT44(uVar14,uVar12));
  local_190 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_190 = atan2(DAT_14c8462e8,dVar16);
    local_190 = local_190 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c8462e0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
    uVar13 = SUB84(DAT_14c8462d8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  }
  dVar18 = (double)CONCAT44(uVar14,uVar12) + DAT_14c846298;
  dVar17 = (double)CONCAT44(uVar15,uVar13) + (double)DAT_14c846290;
  dVar16 = dVar17 * dVar17 + dVar18 * dVar18;
  if ((dVar16 != 1.0) || (NAN(dVar16))) {
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar16) {
      dVar3 = dVar18 * (1.0 / SQRT(dVar16));
      dVar4 = dVar17 * (1.0 / SQRT(dVar16));
      dVar5 = 0.0;
    }
  }
  else {
    dVar16 = DAT_14c8462e8 + DAT_14c8462a0;
    dVar3 = dVar18;
    dVar4 = dVar17;
    dVar5 = 0.0;
    if ((dVar16 == 0.0) && (dVar5 = 0.0, !NAN(dVar16))) {
      dVar5 = dVar16;
    }
  }
  local_198 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_198 = atan2(dVar3,dVar4);
    local_198 = local_198 * 57.29577951308232;
  }
  dVar16 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_1a0 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_1a0 = atan2(dVar5,dVar16);
    local_1a0 = local_1a0 * 57.29577951308232;
  }
  dVar16 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar17 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar18 = dVar17 * dVar17 + dVar16 * dVar16;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    if (9.99999993922529e-09 <= dVar18) {
      dVar16 = dVar16 * (1.0 / SQRT(dVar18));
      dVar17 = dVar17 * (1.0 / SQRT(dVar18));
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      uVar13 = SUB84(DAT_14c8464f0,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar16 = DAT_14c8464e8;
      dVar17 = DAT_14c8464e0;
    }
  }
  else {
    dVar18 = DAT_14c8462e8 + DAT_14c8462b8;
    uVar13 = 0;
    uVar15 = 0;
    if ((dVar18 == 0.0) && (!NAN(dVar18))) {
      uVar13 = SUB84(dVar18,0);
      uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
  }
  local_1a8 = 0.0;
  if ((((dVar16 != 0.0) || (NAN(dVar16))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
    local_1a8 = atan2(dVar16,dVar17);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  dVar16 = SQRT(dVar17 * dVar17 + dVar16 * dVar16);
  local_1b0 = 0.0;
  if ((((double)CONCAT44(uVar15,uVar13) != 0.0) || (NAN((double)CONCAT44(uVar15,uVar13)))) ||
     ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_1b0 = atan2((double)CONCAT44(uVar15,uVar13),dVar16);
    local_1b0 = local_1b0 * 57.29577951308232;
  }
  uVar12 = SUB84(DAT_14c8462f0,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar13 = SUB84(DAT_14c8462f8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar16 = 0.0;
  local_1d8 = dVar1;
  if (((DAT_14c8462f0 != 0.0) || (NAN(DAT_14c8462f0))) ||
     ((DAT_14c8462f8 != 0.0 || (NAN(DAT_14c8462f8))))) {
    dVar16 = atan2(DAT_14c8462f8,DAT_14c8462f0);
    dVar16 = dVar16 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c8462f0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
    uVar13 = SUB84(DAT_14c8462f8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  }
  dVar17 = SQRT((double)CONCAT44(uVar14,uVar12) * (double)CONCAT44(uVar14,uVar12) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  dVar1 = 0.0;
  if ((((DAT_14c846300 != 0.0) || (NAN(DAT_14c846300))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
    dVar1 = atan2(DAT_14c846300,dVar17);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c846308,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  uVar12 = SUB84(DAT_14c846310,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  dVar17 = 0.0;
  local_180 = dVar2;
  if (((DAT_14c846308 != 0.0) || (NAN(DAT_14c846308))) ||
     ((DAT_14c846310 != 0.0 || (NAN(DAT_14c846310))))) {
    dVar17 = atan2(DAT_14c846310,DAT_14c846308);
    dVar17 = dVar17 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846308,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
    uVar12 = SUB84(DAT_14c846310,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  }
  dVar18 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar14,uVar12) * (double)CONCAT44(uVar14,uVar12));
  dVar2 = 0.0;
  if (((DAT_14c846318 != 0.0) || (NAN(DAT_14c846318))) || ((dVar18 != 0.0 || (NAN(dVar18))))) {
    dVar2 = atan2(DAT_14c846318,dVar18);
    dVar2 = dVar2 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c846310,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
    uVar13 = SUB84(DAT_14c846308,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar14,uVar12) + DAT_14c846298;
  dVar3 = (double)CONCAT44(uVar15,uVar13) + (double)DAT_14c846290;
  dVar18 = dVar3 * dVar3 + dVar4 * dVar4;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    if (9.99999993922529e-09 <= dVar18) {
      dVar4 = dVar4 * (1.0 / SQRT(dVar18));
      dVar3 = dVar3 * (1.0 / SQRT(dVar18));
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      uVar13 = SUB84(DAT_14c8464f0,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar4 = DAT_14c8464e8;
      dVar3 = DAT_14c8464e0;
    }
  }
  else {
    dVar18 = DAT_14c846318 + DAT_14c8462a0;
    uVar13 = 0;
    uVar15 = 0;
    if ((dVar18 == 0.0) && (!NAN(dVar18))) {
      uVar13 = SUB84(dVar18,0);
      uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
  }
  dVar18 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
    dVar18 = atan2(dVar4,dVar3);
    dVar18 = dVar18 * 57.29577951308232;
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  dVar3 = 0.0;
  if ((((double)CONCAT44(uVar15,uVar13) != 0.0) || (NAN((double)CONCAT44(uVar15,uVar13)))) ||
     ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar3 = atan2((double)CONCAT44(uVar15,uVar13),dVar4);
    dVar3 = dVar3 * 57.29577951308232;
  }
  dVar5 = DAT_14c846310 + DAT_14c8462b0;
  dVar7 = DAT_14c846308 + DAT_14c8462a8;
  dVar4 = dVar7 * dVar7 + dVar5 * dVar5;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar5 = dVar5 * (1.0 / SQRT(dVar4));
      dVar7 = dVar7 * (1.0 / SQRT(dVar4));
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      uVar13 = SUB84(DAT_14c8464f0,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar5 = DAT_14c8464e8;
      dVar7 = DAT_14c8464e0;
    }
  }
  else {
    dVar4 = DAT_14c846318 + DAT_14c8462b8;
    uVar13 = 0;
    uVar15 = 0;
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      uVar13 = SUB84(dVar4,0);
      uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
  }
  dVar4 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
    dVar4 = atan2(dVar5,dVar7);
    dVar4 = dVar4 * 57.29577951308232;
  }
  dVar7 = SQRT(dVar7 * dVar7 + dVar5 * dVar5);
  dVar5 = 0.0;
  if ((((double)CONCAT44(uVar15,uVar13) != 0.0) || (NAN((double)CONCAT44(uVar15,uVar13)))) ||
     ((dVar7 != 0.0 || (NAN(dVar7))))) {
    dVar5 = atan2((double)CONCAT44(uVar15,uVar13),dVar7);
    dVar5 = dVar5 * 57.29577951308232;
  }
  DAT_14cb57e18 = (double *)0x0;
  _DAT_14cb57e20 = 10;
  FUN_1464bf958(&DAT_14cb57e18,10,0);
  pdVar10 = DAT_14cb57e18;
  *DAT_14cb57e18 = local_1d8;
  pdVar10[1] = local_1e0;
  pdVar10[2] = 0.0;
  pdVar10[3] = local_180;
  pdVar10[4] = local_1b8;
  pdVar10[5] = 0.0;
  pdVar10[6] = local_188;
  pdVar10[7] = local_1c0;
  pdVar10[8] = 0.0;
  pdVar10[9] = local_190;
  pdVar10[10] = local_1c8;
  pdVar10[0xb] = 0.0;
  pdVar10[0xc] = local_1a0;
  pdVar10[0xd] = local_198;
  pdVar10[0xe] = 0.0;
  pdVar10[0xf] = local_1b0;
  pdVar10[0x10] = local_1a8;
  pdVar10[0x11] = 0.0;
  pdVar10[0x12] = dVar1;
  pdVar10[0x13] = dVar16;
  pdVar10[0x14] = 0.0;
  pdVar10[0x15] = dVar2;
  pdVar10[0x16] = dVar17;
  pdVar10[0x17] = 0.0;
  pdVar10[0x18] = dVar3;
  pdVar10[0x19] = dVar18;
  pdVar10[0x1a] = 0.0;
  pdVar10[0x1b] = dVar5;
  pdVar10[0x1c] = dVar4;
  pdVar10[0x1d] = 0.0;
  atexit((_func_5014 *)&LAB_143c3f738);
  ppuStack_1f0 = (undefined **)0x0;
  uStack_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b066ed0);
  if ((local_d0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c41196 FUN_143c41196 body=55 status=ok
// SIG undefined FUN_143c41196(void)

void FUN_143c41196(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58168 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58168 = FUN_14171c317(FUN_1464c05bd,uVar1,L"EGbxActivityMissionSource");
  }
  return;
}



// FUNCTION 143c411cd FUN_143c411cd body=55 status=ok
// SIG undefined FUN_143c411cd(void)

void FUN_143c411cd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58180 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58180 = FUN_14171c317(FUN_1464c05ec,uVar1,L"EActivitySpawnImportance");
  }
  return;
}



// FUNCTION 143c41208 FUN_143c41208 body=48 status=ok
// SIG undefined FUN_143c41208(void)

longlong FUN_143c41208(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cb4f02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c41246 FUN_143c41246 body=48 status=ok
// SIG undefined FUN_143c41246(void)

longlong FUN_143c41246(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140cb4f02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c41276 FUN_143c41276 body=48 status=ok
// SIG undefined FUN_143c41276(void)

longlong FUN_143c41276(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140e01364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c412ae FUN_143c412ae body=48 status=ok
// SIG undefined FUN_143c412ae(void)

longlong FUN_143c412ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140e01364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c412ee FUN_143c412ee body=48 status=ok
// SIG undefined FUN_143c412ee(void)

longlong FUN_143c412ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_140e01364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4131e FUN_143c4131e body=48 status=ok
// SIG undefined FUN_143c4131e(void)

longlong FUN_143c4131e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14034d9a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4134e FUN_143c4134e body=48 status=ok
// SIG undefined FUN_143c4134e(void)

longlong FUN_143c4134e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145dbdcbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c413c0 FUN_143c413c0 body=57 status=ok
// SIG undefined FUN_143c413c0(void)

void FUN_143c413c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57f98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57f98 = FUN_140002ddd(FUN_1464bfd44,uVar1,L"GbxActivityAreaStampContextDef");
  }
  return;
}



// FUNCTION 143c41488 FUN_143c41488 body=57 status=ok
// SIG undefined FUN_143c41488(void)

void FUN_143c41488(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58018 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58018 = FUN_140002ddd(FUN_1464bfd73,uVar1,L"GbxActivityAreaStampLayoutDef");
  }
  return;
}



// FUNCTION 143c414d6 FUN_143c414d6 body=106 status=ok
// SIG undefined FUN_143c414d6(void)

void FUN_143c414d6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xa8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b075620;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0xffffffff00000080;
  param_2[0xb] = 0;
  param_2[0x11] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0xffffffff00000080;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 143c41558 FUN_143c41558 body=57 status=ok
// SIG undefined FUN_143c41558(void)

void FUN_143c41558(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58048 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58048 = FUN_140002ddd(FUN_1464bfdd8,uVar1,L"GbxActivityAreaStampLayoutGroupDef");
  }
  return;
}



// FUNCTION 143c4164e FUN_143c4164e body=57 status=ok
// SIG undefined FUN_143c4164e(void)

void FUN_143c4164e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb581b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb581b0 = FUN_140002ddd(FUN_1464c06b2,uVar1,L"GbxActivityDef");
  }
  return;
}



// FUNCTION 143c41687 FUN_143c41687 body=77 status=ok
// SIG undefined FUN_143c41687(void)

void FUN_143c41687(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143c416d4 FUN_143c416d4 body=4722 status=ok
// SIG undefined FUN_143c416d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c416d4(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  double *pdVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined **ppuStack_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
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
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  char *local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_138 = "AssetRegistry";
  dStack_130 = (double)CONCAT35(dStack_130._5_3_,0xd);
  uVar12 = FUN_14001a6c0(&local_138,1);
  _DAT_14cb57e40 = (ulonglong)uVar12;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06aa00,1,0);
  _DAT_14cb57e60 = 0xb33bbd2e;
  local_138 = DAT_14c846290;
  dStack_130 = DAT_14c846298;
  local_128 = DAT_14c8462a0;
  local_120 = DAT_14c8462a8;
  dStack_118 = DAT_14c8462b0;
  local_110 = DAT_14c8462b8;
  local_108 = DAT_14c8462c0;
  dStack_100 = DAT_14c8462c8;
  local_f8 = DAT_14c8462d0;
  local_f0 = DAT_14c8462d8;
  dStack_e8 = DAT_14c8462e0;
  local_e0 = DAT_14c8462e8;
  dVar17 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + (double)DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar17 * dVar17;
  uVar14 = SUB84(DAT_14c8464f0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    local_1e0 = DAT_14c8464e8;
    dVar18 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      local_1e0 = dVar17 * (1.0 / SQRT(dVar1));
      dVar18 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar18;
    local_1d8 = (double)CONCAT44(uVar15,uVar13);
  }
  else {
    local_1d8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_1e0 = dVar17;
  }
  uStack_1d0 = 0;
  dVar17 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar18 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar1 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    dVar19 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      dVar19 = dVar17 * (1.0 / SQRT(dVar1));
      dVar3 = dVar18 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c8462e8 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c8462e8 + DAT_14c8462b8);
    uVar13 = (int)uVar6;
    uVar15 = (int)(uVar6 >> 0x20);
    dVar19 = dVar17;
    dVar3 = dVar18;
  }
  local_148 = DAT_14c846300;
  local_158 = DAT_14c8462f0;
  dStack_150 = DAT_14c8462f8;
  local_178 = DAT_14c846308;
  dStack_170 = DAT_14c846310;
  local_168 = DAT_14c846318;
  dVar1 = DAT_14c846298 + DAT_14c846310;
  dVar17 = (double)DAT_14c846290 + DAT_14c846308;
  dVar18 = dVar17 * dVar17 + dVar1 * dVar1;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    uVar20 = uVar14;
    uVar21 = uVar16;
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar18) {
      uVar20 = 0;
      uVar21 = 0;
      dVar4 = dVar1 * (1.0 / SQRT(dVar18));
      dVar5 = dVar17 * (1.0 / SQRT(dVar18));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462a0 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462a0);
    uVar20 = (int)uVar6;
    uVar21 = (int)(uVar6 >> 0x20);
    dVar4 = dVar1;
    dVar5 = dVar17;
  }
  dVar17 = DAT_14c8462b0 + DAT_14c846310;
  dVar18 = DAT_14c8462a8 + DAT_14c846308;
  dVar1 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    dVar7 = DAT_14c8464e8;
    dVar8 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar14 = 0;
      uVar16 = 0;
      dVar7 = dVar17 * (1.0 / SQRT(dVar1));
      dVar8 = dVar18 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462b8);
    uVar14 = (undefined4)uVar6;
    uVar16 = (undefined4)(uVar6 >> 0x20);
    dVar7 = dVar17;
    dVar8 = dVar18;
  }
  DAT_14cb57e68 = (void *)0x0;
  _DAT_14cb57e70 = 10;
  FUN_1405b70fe(&DAT_14cb57e68,10,0);
  pvVar9 = DAT_14cb57e68;
  memcpy(DAT_14cb57e68,&local_138,0x60);
  *(double *)((longlong)pvVar9 + 0x60) = dVar2;
  *(double *)((longlong)pvVar9 + 0x68) = local_1e0;
  *(double *)((longlong)pvVar9 + 0x70) = local_1d8;
  *(double *)((longlong)pvVar9 + 0x78) = dVar3;
  *(double *)((longlong)pvVar9 + 0x80) = dVar19;
  *(ulonglong *)((longlong)pvVar9 + 0x88) = CONCAT44(uVar15,uVar13);
  *(double *)((longlong)pvVar9 + 0x90) = local_158;
  *(double *)((longlong)pvVar9 + 0x98) = dStack_150;
  *(double *)((longlong)pvVar9 + 0xa0) = local_148;
  *(double *)((longlong)pvVar9 + 0xb8) = local_168;
  *(double *)((longlong)pvVar9 + 0xa8) = local_178;
  *(double *)((longlong)pvVar9 + 0xb0) = dStack_170;
  *(double *)((longlong)pvVar9 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar9 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar9 + 0xd0) = CONCAT44(uVar21,uVar20);
  *(double *)((longlong)pvVar9 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar9 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar9 + 0xe8) = CONCAT44(uVar16,uVar14);
  atexit((_func_5014 *)&LAB_143c41174);
  uVar13 = SUB84(DAT_14c846290,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar14 = SUB84(DAT_14c846298,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if (((((double)DAT_14c846290 != 0.0) || (NAN((double)DAT_14c846290))) || (DAT_14c846298 != 0.0))
     || (NAN(DAT_14c846298))) {
    local_1e0 = atan2(DAT_14c846298,(double)DAT_14c846290);
    local_1e0 = local_1e0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846290,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar14 = SUB84(DAT_14c846298,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_1e0 = 0.0;
  }
  dVar2 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
               (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar1 = 0.0;
  if (((DAT_14c8462a0 != 0.0) || (NAN(DAT_14c8462a0))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
    dVar1 = atan2(DAT_14c8462a0,dVar2);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462a8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
  uVar14 = SUB84(DAT_14c8462b0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  if (((DAT_14c8462a8 != 0.0) || (NAN(DAT_14c8462a8))) ||
     ((DAT_14c8462b0 != 0.0 || (NAN(DAT_14c8462b0))))) {
    local_1b8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1b8 = local_1b8 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462a8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar14 = SUB84(DAT_14c8462b0,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1b8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar2 = 0.0;
  if ((((DAT_14c8462b8 != 0.0) || (NAN(DAT_14c8462b8))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
    dVar2 = atan2(DAT_14c8462b8,dVar17);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462c0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462c8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  if (((DAT_14c8462c0 != 0.0) || (NAN(DAT_14c8462c0))) ||
     ((DAT_14c8462c8 != 0.0 || (NAN(DAT_14c8462c8))))) {
    local_1c0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1c0 = local_1c0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462c0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462c8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1c0 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  local_188 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_188 = atan2(DAT_14c8462d0,dVar17);
    local_188 = local_188 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c8462d8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar13 = SUB84(DAT_14c8462e0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1c8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1c8 = local_1c8 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1c8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  local_190 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_190 = atan2(DAT_14c8462e8,dVar17);
    local_190 = local_190 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  }
  dVar19 = (double)CONCAT44(uVar15,uVar13) + DAT_14c846298;
  dVar18 = (double)CONCAT44(uVar16,uVar14) + (double)DAT_14c846290;
  dVar17 = dVar18 * dVar18 + dVar19 * dVar19;
  if ((dVar17 != 1.0) || (NAN(dVar17))) {
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar17) {
      dVar3 = dVar19 * (1.0 / SQRT(dVar17));
      dVar4 = dVar18 * (1.0 / SQRT(dVar17));
      dVar5 = 0.0;
    }
  }
  else {
    dVar17 = DAT_14c8462e8 + DAT_14c8462a0;
    dVar3 = dVar19;
    dVar4 = dVar18;
    dVar5 = 0.0;
    if ((dVar17 == 0.0) && (dVar5 = 0.0, !NAN(dVar17))) {
      dVar5 = dVar17;
    }
  }
  local_198 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_198 = atan2(dVar3,dVar4);
    local_198 = local_198 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_1a0 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1a0 = atan2(dVar5,dVar17);
    local_1a0 = local_1a0 * 57.29577951308232;
  }
  dVar17 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar18 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar19 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    if (9.99999993922529e-09 <= dVar19) {
      dVar17 = dVar17 * (1.0 / SQRT(dVar19));
      dVar18 = dVar18 * (1.0 / SQRT(dVar19));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar17 = DAT_14c8464e8;
      dVar18 = DAT_14c8464e0;
    }
  }
  else {
    dVar19 = DAT_14c8462e8 + DAT_14c8462b8;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      uVar14 = SUB84(dVar19,0);
      uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    }
  }
  local_1a8 = 0.0;
  if ((((dVar17 != 0.0) || (NAN(dVar17))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    local_1a8 = atan2(dVar17,dVar18);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar18 * dVar18 + dVar17 * dVar17);
  local_1b0 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1b0 = atan2((double)CONCAT44(uVar16,uVar14),dVar17);
    local_1b0 = local_1b0 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462f8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar17 = 0.0;
  local_1d8 = dVar1;
  if (((DAT_14c8462f0 != 0.0) || (NAN(DAT_14c8462f0))) ||
     ((DAT_14c8462f8 != 0.0 || (NAN(DAT_14c8462f8))))) {
    dVar17 = atan2(DAT_14c8462f8,DAT_14c8462f0);
    dVar17 = dVar17 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462f0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462f8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  }
  dVar18 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar1 = 0.0;
  if ((((DAT_14c846300 != 0.0) || (NAN(DAT_14c846300))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    dVar1 = atan2(DAT_14c846300,dVar18);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c846308,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  uVar13 = SUB84(DAT_14c846310,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  dVar18 = 0.0;
  local_180 = dVar2;
  if (((DAT_14c846308 != 0.0) || (NAN(DAT_14c846308))) ||
     ((DAT_14c846310 != 0.0 || (NAN(DAT_14c846310))))) {
    dVar18 = atan2(DAT_14c846310,DAT_14c846308);
    dVar18 = dVar18 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c846308,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
    uVar13 = SUB84(DAT_14c846310,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  }
  dVar19 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  dVar2 = 0.0;
  if (((DAT_14c846318 != 0.0) || (NAN(DAT_14c846318))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
    dVar2 = atan2(DAT_14c846318,dVar19);
    dVar2 = dVar2 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846310,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
    uVar14 = SUB84(DAT_14c846308,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar15,uVar13) + DAT_14c846298;
  dVar3 = (double)CONCAT44(uVar16,uVar14) + (double)DAT_14c846290;
  dVar19 = dVar3 * dVar3 + dVar4 * dVar4;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    if (9.99999993922529e-09 <= dVar19) {
      dVar4 = dVar4 * (1.0 / SQRT(dVar19));
      dVar3 = dVar3 * (1.0 / SQRT(dVar19));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar4 = DAT_14c8464e8;
      dVar3 = DAT_14c8464e0;
    }
  }
  else {
    dVar19 = DAT_14c846318 + DAT_14c8462a0;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      uVar14 = SUB84(dVar19,0);
      uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    }
  }
  dVar19 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
    dVar19 = atan2(dVar4,dVar3);
    dVar19 = dVar19 * 57.29577951308232;
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  dVar3 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar3 = atan2((double)CONCAT44(uVar16,uVar14),dVar4);
    dVar3 = dVar3 * 57.29577951308232;
  }
  dVar5 = DAT_14c846310 + DAT_14c8462b0;
  dVar7 = DAT_14c846308 + DAT_14c8462a8;
  dVar4 = dVar7 * dVar7 + dVar5 * dVar5;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar5 = dVar5 * (1.0 / SQRT(dVar4));
      dVar7 = dVar7 * (1.0 / SQRT(dVar4));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar5 = DAT_14c8464e8;
      dVar7 = DAT_14c8464e0;
    }
  }
  else {
    dVar4 = DAT_14c846318 + DAT_14c8462b8;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      uVar14 = SUB84(dVar4,0);
      uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
  }
  dVar4 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
    dVar4 = atan2(dVar5,dVar7);
    dVar4 = dVar4 * 57.29577951308232;
  }
  dVar7 = SQRT(dVar7 * dVar7 + dVar5 * dVar5);
  dVar5 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar7 != 0.0 || (NAN(dVar7))))) {
    dVar5 = atan2((double)CONCAT44(uVar16,uVar14),dVar7);
    dVar5 = dVar5 * 57.29577951308232;
  }
  DAT_14cb57e78 = (double *)0x0;
  _DAT_14cb57e80 = 10;
  FUN_1464bf958(&DAT_14cb57e78,10,0);
  pdVar10 = DAT_14cb57e78;
  *DAT_14cb57e78 = local_1d8;
  pdVar10[1] = local_1e0;
  pdVar10[2] = 0.0;
  pdVar10[3] = local_180;
  pdVar10[4] = local_1b8;
  pdVar10[5] = 0.0;
  pdVar10[6] = local_188;
  pdVar10[7] = local_1c0;
  pdVar10[8] = 0.0;
  pdVar10[9] = local_190;
  pdVar10[10] = local_1c8;
  pdVar10[0xb] = 0.0;
  pdVar10[0xc] = local_1a0;
  pdVar10[0xd] = local_198;
  pdVar10[0xe] = 0.0;
  pdVar10[0xf] = local_1b0;
  pdVar10[0x10] = local_1a8;
  pdVar10[0x11] = 0.0;
  pdVar10[0x12] = dVar1;
  pdVar10[0x13] = dVar17;
  pdVar10[0x14] = 0.0;
  pdVar10[0x15] = dVar2;
  pdVar10[0x16] = dVar18;
  pdVar10[0x17] = 0.0;
  pdVar10[0x18] = dVar3;
  pdVar10[0x19] = dVar19;
  pdVar10[0x1a] = 0.0;
  pdVar10[0x1b] = dVar5;
  pdVar10[0x1c] = dVar4;
  pdVar10[0x1d] = 0.0;
  atexit((_func_5014 *)&LAB_143c41185);
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06ad70,1,0);
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06b110,1,0);
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b06b1d0);
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06b6e0,1,&PTR_FUN_14b06b6b0);
  local_138 = "ActivityInstanceId";
  dStack_130 = (double)CONCAT35(dStack_130._5_3_,0x12);
  uVar12 = FUN_14001a6c0(&local_138,1);
  _DAT_14cb57f00 = (ulonglong)uVar12;
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06bc40,1,0);
  FUN_1400b22c2(&local_138,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar11 = FUN_140b10a34(&local_138,&DAT_14cb57f20);
  if (cVar11 == '\0') {
    _DAT_14cb57f20 = 0;
    uRam000000014cb57f28 = 0;
  }
  if (local_138 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06bd60,1,0);
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06c580,1,0);
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06c620,1,0);
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06cd60,1,&PTR_FUN_14b06cd30);
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06d100,1,&PTR_FUN_14b06d0d0);
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  local_1f8 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06d6b0,1,&PTR_FUN_14b06d660);
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  local_1f8 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06d9c0,1,&PTR_FUN_14b06d990);
  ppuStack_1f0 = (undefined **)0x0;
  local_1e8 = 0;
  local_1f8 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b06dd60);
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06e020,1,0);
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06e3c0,1,0);
  local_1e8 = 0;
  local_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b06f690,1,0);
  local_1e8 = 2;
  ppuStack_1f0 = &PTR_FUN_14b0701d0;
  local_1f8 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b070210);
  if ((local_d0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c42948 FUN_143c42948 body=55 status=ok
// SIG undefined FUN_143c42948(void)

void FUN_143c42948(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb582e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb582e0 = FUN_14171c317(FUN_1464c0f0a,uVar1,L"EActivityResult");
  }
  return;
}



// FUNCTION 143c429b2 FUN_143c429b2 body=55 status=ok
// SIG undefined FUN_143c429b2(void)

void FUN_143c429b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb583f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb583f0 = FUN_14171c317(FUN_1464c10d6,uVar1,L"EActivityParams");
  }
  return;
}



// FUNCTION 143c429e9 FUN_143c429e9 body=55 status=ok
// SIG undefined FUN_143c429e9(void)

void FUN_143c429e9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58408 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58408 = FUN_14171c317(FUN_1464c1105,uVar1,L"EPendingRequestExecutionType");
  }
  return;
}



// FUNCTION 143c42a20 FUN_143c42a20 body=55 status=ok
// SIG undefined FUN_143c42a20(void)

void FUN_143c42a20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58460 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58460 = FUN_14171c317(FUN_1464c11ca,uVar1,L"EGbxActorPartDebugVisibility");
  }
  return;
}



// FUNCTION 143c42a57 FUN_143c42a57 body=55 status=ok
// SIG undefined FUN_143c42a57(void)

void FUN_143c42a57(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58568 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58568 = FUN_14171c317(FUN_1464c16d6,uVar1,L"EGbxActorPartViewMode");
  }
  return;
}



// FUNCTION 143c42a8e FUN_143c42a8e body=55 status=ok
// SIG undefined FUN_143c42a8e(void)

void FUN_143c42a8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb586e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb586e8 = FUN_14171c317(FUN_1464c1ec4,uVar1,L"EGbxActorPartGestaltMode");
  }
  return;
}



// FUNCTION 143c42ac6 FUN_143c42ac6 body=55 status=ok
// SIG undefined FUN_143c42ac6(void)

void FUN_143c42ac6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58778 = FUN_140002ddd(FUN_143c42afd,uVar1,L"GbxActorPartMaterialParamInfo");
  }
  return;
}



// FUNCTION 143c42afd FUN_143c42afd body=47 status=ok
// SIG undefined FUN_143c42afd(void)

longlong FUN_143c42afd(void)

{
  if (DAT_14cb58770 == 0) {
    FUN_14086a14e(&DAT_14cb58770,&PTR_FUN_14b07b5c8);
  }
  return DAT_14cb58770;
}



// FUNCTION 143c42b2c FUN_143c42b2c body=48 status=ok
// SIG undefined FUN_143c42b2c(void)

void FUN_143c42b2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14b07fba0;
  return;
}



// FUNCTION 143c42b5c FUN_143c42b5c body=55 status=ok
// SIG undefined FUN_143c42b5c(void)

void FUN_143c42b5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58790 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58790 = FUN_140002ddd(FUN_143c42b93,uVar1,L"GbxActorPartMaterialConditionParam");
  }
  return;
}



// FUNCTION 143c42b93 FUN_143c42b93 body=47 status=ok
// SIG undefined FUN_143c42b93(void)

longlong FUN_143c42b93(void)

{
  if (DAT_14cb58788 == 0) {
    FUN_14086a14e(&DAT_14cb58788,&PTR_FUN_14b07b670);
  }
  return DAT_14cb58788;
}



// FUNCTION 143c42bc2 FUN_143c42bc2 body=48 status=ok
// SIG undefined FUN_143c42bc2(void)

void FUN_143c42bc2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000090;
  *puVar1 = &PTR_FUN_14b07fd00;
  return;
}



// FUNCTION 143c42bf2 FUN_143c42bf2 body=55 status=ok
// SIG undefined FUN_143c42bf2(void)

void FUN_143c42bf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb587a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb587a8 = FUN_140002ddd(FUN_143c42c29,uVar1,L"GbxActorPartMaterialCondition");
  }
  return;
}



// FUNCTION 143c42c29 FUN_143c42c29 body=47 status=ok
// SIG undefined FUN_143c42c29(void)

longlong FUN_143c42c29(void)

{
  if (DAT_14cb587a0 == 0) {
    FUN_14086a14e(&DAT_14cb587a0,&PTR_FUN_14b07b7d8);
  }
  return DAT_14cb587a0;
}



// FUNCTION 143c42c58 FUN_143c42c58 body=48 status=ok
// SIG undefined FUN_143c42c58(void)

void FUN_143c42c58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b07fe60;
  return;
}



// FUNCTION 143c42c8a FUN_143c42c8a body=48 status=ok
// SIG undefined FUN_143c42c8a(void)

longlong FUN_143c42c8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140fa57a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c42cba FUN_143c42cba body=48 status=ok
// SIG undefined FUN_143c42cba(void)

longlong FUN_143c42cba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140fa57a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c42d34 FUN_143c42d34 body=57 status=ok
// SIG undefined FUN_143c42d34(void)

void FUN_143c42d34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb581e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb581e0 = FUN_140002ddd(FUN_1464c0b10,uVar1,L"GbxActivityEffect_Mission");
  }
  return;
}



// FUNCTION 143c42db4 FUN_143c42db4 body=1 status=ok
// SIG undefined FUN_143c42db4(void)

void FUN_143c42db4(void)

{
  return;
}



// FUNCTION 143c42e6c FUN_143c42e6c body=63 status=ok
// SIG undefined FUN_143c42e6c(void)

void FUN_143c42e6c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  return;
}



// FUNCTION 143c42ec6 FUN_143c42ec6 body=77 status=ok
// SIG undefined FUN_143c42ec6(void)

void FUN_143c42ec6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 143c42f46 FUN_143c42f46 body=57 status=ok
// SIG undefined FUN_143c42f46(void)

void FUN_143c42f46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58538 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58538 = FUN_140002ddd(FUN_1464c1616,uVar1,L"GbxActorPartDef_AnimSet");
  }
  return;
}



// FUNCTION 143c42fb4 FUN_143c42fb4 body=57 status=ok
// SIG undefined FUN_143c42fb4(void)

void FUN_143c42fb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58580 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58580 = FUN_140002ddd(FUN_1464c173f,uVar1,L"GbxActorPartDef_Body");
  }
  return;
}



// FUNCTION 143c43014 FUN_143c43014 body=57 status=ok
// SIG undefined FUN_143c43014(void)

void FUN_143c43014(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58598 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58598 = FUN_140002ddd(FUN_1464c179e,uVar1,L"GbxActorPartDef_Budget");
  }
  return;
}



// FUNCTION 143c43078 FUN_143c43078 body=44 status=ok
// SIG undefined FUN_143c43078(void)

void FUN_143c43078(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  return;
}



// FUNCTION 143c43100 FUN_143c43100 body=57 status=ok
// SIG undefined FUN_143c43100(void)

void FUN_143c43100(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58610 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58610 = FUN_140002ddd(FUN_1464c1a56,uVar1,L"GbxActorPartDef_DialogEvents");
  }
  return;
}



// FUNCTION 143c431b6 FUN_143c431b6 body=57 status=ok
// SIG undefined FUN_143c431b6(void)

void FUN_143c431b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58658 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58658 = FUN_140002ddd(FUN_1464c1be2,uVar1,L"GbxActorPartDef_DialogName");
  }
  return;
}



// FUNCTION 143c4320c FUN_143c4320c body=57 status=ok
// SIG undefined FUN_143c4320c(void)

void FUN_143c4320c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58688 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58688 = FUN_140002ddd(FUN_1464c1cd8,uVar1,L"GbxActorPartDef_FaceFX");
  }
  return;
}



// FUNCTION 143c4326c FUN_143c4326c body=48 status=ok
// SIG undefined FUN_143c4326c(void)

void FUN_143c4326c(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c432b6 FUN_143c432b6 body=57 status=ok
// SIG undefined FUN_143c432b6(void)

void FUN_143c432b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb586b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb586b8 = FUN_140002ddd(FUN_1464c1dce,uVar1,L"GbxActorPartInsertInfo_Filter");
  }
  return;
}



// FUNCTION 143c43316 FUN_143c43316 body=57 status=ok
// SIG undefined FUN_143c43316(void)

void FUN_143c43316(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb586d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb586d0 = FUN_140002ddd(FUN_1464c1e65,uVar1,L"GbxActorPartDef_Filter");
  }
  return;
}



// FUNCTION 143c43428 FUN_143c43428 body=57 status=ok
// SIG undefined FUN_143c43428(void)

void FUN_143c43428(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58748 = FUN_140002ddd(FUN_1464c20b8,uVar1,L"GbxActorPartDef_Gestalt");
  }
  return;
}



// FUNCTION 143c43470 FUN_143c43470 body=29 status=ok
// SIG undefined FUN_143c43470(void)

undefined8 FUN_143c43470(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4349c FUN_143c4349c body=75 status=ok
// SIG undefined FUN_143c4349c(void)

void FUN_143c4349c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined1 *)((longlong)param_2 + 0x20) = 2;
  *(undefined1 **)((longlong)param_2 + 0x24) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_2 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 143c43524 FUN_143c43524 body=62 status=ok
// SIG undefined FUN_143c43524(void)

void FUN_143c43524(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c43578 FUN_143c43578 body=344 status=ok
// SIG undefined FUN_143c43578(void)

undefined8 FUN_143c43578(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int *piVar15;
  
  if (param_4 != 0) {
    piVar15 = (int *)(param_3 + 0x70);
    puVar14 = (undefined8 *)(param_2 + 0x68);
    do {
      iVar1 = piVar15[-0x1b];
      iVar3 = piVar15[-0x1a];
      iVar4 = piVar15[-0x19];
      *(int *)(puVar14 + -0xd) = piVar15[-0x1c];
      *(int *)((longlong)puVar14 + -100) = iVar1;
      *(int *)(puVar14 + -0xc) = iVar3;
      *(int *)((longlong)puVar14 + -0x5c) = iVar4;
      if ((int *)(puVar14 + -0xd) == piVar15 + -0x1c) {
        uVar9 = *(undefined8 *)(piVar15 + -0x14);
        uVar10 = *(undefined8 *)(piVar15 + -0x12);
        uVar11 = *(undefined8 *)(piVar15 + -0x10);
        uVar12 = *(undefined8 *)(piVar15 + -0xe);
        uVar13 = *(undefined8 *)(piVar15 + -10);
        puVar14[-5] = *(undefined8 *)(piVar15 + -0xc);
        puVar14[-4] = uVar13;
        puVar14[-7] = uVar11;
        puVar14[-6] = uVar12;
        puVar14[-9] = uVar9;
        puVar14[-8] = uVar10;
        puVar14[-3] = *(undefined8 *)(piVar15 + -8);
        uVar9 = *(undefined8 *)(piVar15 + -4);
        puVar14[-2] = *(undefined8 *)(piVar15 + -6);
        puVar14[-1] = uVar9;
      }
      else {
        iVar1 = piVar15[-0x16];
        pvVar2 = *(void **)(piVar15 + -0x18);
        *(int *)(puVar14 + -10) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar14 + -0x4c) == 0) {
          *(undefined4 *)((longlong)puVar14 + -0x4c) = 0;
        }
        else {
          FUN_1446dd670(puVar14 + -0xb,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)puVar14[-0xb],pvVar2,(longlong)iVar1 * 2);
          }
        }
        uVar9 = *(undefined8 *)(piVar15 + -0x14);
        uVar10 = *(undefined8 *)(piVar15 + -0x12);
        iVar1 = piVar15[-0x10];
        iVar3 = piVar15[-0xf];
        iVar4 = piVar15[-0xe];
        iVar5 = piVar15[-0xd];
        iVar6 = piVar15[-0xb];
        iVar7 = piVar15[-10];
        iVar8 = piVar15[-9];
        *(int *)(puVar14 + -5) = piVar15[-0xc];
        *(int *)((longlong)puVar14 + -0x24) = iVar6;
        *(int *)(puVar14 + -4) = iVar7;
        *(int *)((longlong)puVar14 + -0x1c) = iVar8;
        *(int *)(puVar14 + -7) = iVar1;
        *(int *)((longlong)puVar14 + -0x34) = iVar3;
        *(int *)(puVar14 + -6) = iVar4;
        *(int *)((longlong)puVar14 + -0x2c) = iVar5;
        puVar14[-9] = uVar9;
        puVar14[-8] = uVar10;
        puVar14[-3] = *(undefined8 *)(piVar15 + -8);
        iVar1 = piVar15[-5];
        iVar3 = piVar15[-4];
        iVar4 = piVar15[-3];
        *(int *)(puVar14 + -2) = piVar15[-6];
        *(int *)((longlong)puVar14 + -0xc) = iVar1;
        *(int *)(puVar14 + -1) = iVar3;
        *(int *)((longlong)puVar14 + -4) = iVar4;
        iVar1 = *piVar15;
        pvVar2 = *(void **)(piVar15 + -2);
        *(int *)(puVar14 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar14 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar14,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar14,pvVar2,(longlong)iVar1 * 2);
          }
        }
      }
      FUN_1406fa324(puVar14 + 2,piVar15 + 2);
      piVar15 = piVar15 + 0x24;
      puVar14 = puVar14 + 0x12;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c436f8 FUN_143c436f8 body=59 status=ok
// SIG undefined FUN_143c436f8(void)

undefined8 FUN_143c436f8(longlong *param_1)

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



// FUNCTION 143c43744 FUN_143c43744 body=72 status=ok
// SIG undefined FUN_143c43744(void)

void FUN_143c43744(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 143c437dc FUN_143c437dc body=29 status=ok
// SIG undefined FUN_143c437dc(void)

undefined8 FUN_143c437dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c43808 FUN_143c43808 body=75 status=ok
// SIG undefined FUN_143c43808(void)

void FUN_143c43808(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined1 *)((longlong)param_2 + 0x20) = 2;
  *(undefined1 **)((longlong)param_2 + 0x24) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_2 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 143c43890 FUN_143c43890 body=62 status=ok
// SIG undefined FUN_143c43890(void)

void FUN_143c43890(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c438e4 FUN_143c438e4 body=344 status=ok
// SIG undefined FUN_143c438e4(void)

undefined8 FUN_143c438e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int *piVar15;
  
  if (param_4 != 0) {
    piVar15 = (int *)(param_3 + 0x70);
    puVar14 = (undefined8 *)(param_2 + 0x68);
    do {
      iVar1 = piVar15[-0x1b];
      iVar3 = piVar15[-0x1a];
      iVar4 = piVar15[-0x19];
      *(int *)(puVar14 + -0xd) = piVar15[-0x1c];
      *(int *)((longlong)puVar14 + -100) = iVar1;
      *(int *)(puVar14 + -0xc) = iVar3;
      *(int *)((longlong)puVar14 + -0x5c) = iVar4;
      if ((int *)(puVar14 + -0xd) == piVar15 + -0x1c) {
        uVar9 = *(undefined8 *)(piVar15 + -0x14);
        uVar10 = *(undefined8 *)(piVar15 + -0x12);
        uVar11 = *(undefined8 *)(piVar15 + -0x10);
        uVar12 = *(undefined8 *)(piVar15 + -0xe);
        uVar13 = *(undefined8 *)(piVar15 + -10);
        puVar14[-5] = *(undefined8 *)(piVar15 + -0xc);
        puVar14[-4] = uVar13;
        puVar14[-7] = uVar11;
        puVar14[-6] = uVar12;
        puVar14[-9] = uVar9;
        puVar14[-8] = uVar10;
        puVar14[-3] = *(undefined8 *)(piVar15 + -8);
        uVar9 = *(undefined8 *)(piVar15 + -4);
        puVar14[-2] = *(undefined8 *)(piVar15 + -6);
        puVar14[-1] = uVar9;
      }
      else {
        iVar1 = piVar15[-0x16];
        pvVar2 = *(void **)(piVar15 + -0x18);
        *(int *)(puVar14 + -10) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar14 + -0x4c) == 0) {
          *(undefined4 *)((longlong)puVar14 + -0x4c) = 0;
        }
        else {
          FUN_1446dd670(puVar14 + -0xb,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)puVar14[-0xb],pvVar2,(longlong)iVar1 * 2);
          }
        }
        uVar9 = *(undefined8 *)(piVar15 + -0x14);
        uVar10 = *(undefined8 *)(piVar15 + -0x12);
        iVar1 = piVar15[-0x10];
        iVar3 = piVar15[-0xf];
        iVar4 = piVar15[-0xe];
        iVar5 = piVar15[-0xd];
        iVar6 = piVar15[-0xb];
        iVar7 = piVar15[-10];
        iVar8 = piVar15[-9];
        *(int *)(puVar14 + -5) = piVar15[-0xc];
        *(int *)((longlong)puVar14 + -0x24) = iVar6;
        *(int *)(puVar14 + -4) = iVar7;
        *(int *)((longlong)puVar14 + -0x1c) = iVar8;
        *(int *)(puVar14 + -7) = iVar1;
        *(int *)((longlong)puVar14 + -0x34) = iVar3;
        *(int *)(puVar14 + -6) = iVar4;
        *(int *)((longlong)puVar14 + -0x2c) = iVar5;
        puVar14[-9] = uVar9;
        puVar14[-8] = uVar10;
        puVar14[-3] = *(undefined8 *)(piVar15 + -8);
        iVar1 = piVar15[-5];
        iVar3 = piVar15[-4];
        iVar4 = piVar15[-3];
        *(int *)(puVar14 + -2) = piVar15[-6];
        *(int *)((longlong)puVar14 + -0xc) = iVar1;
        *(int *)(puVar14 + -1) = iVar3;
        *(int *)((longlong)puVar14 + -4) = iVar4;
        iVar1 = *piVar15;
        pvVar2 = *(void **)(piVar15 + -2);
        *(int *)(puVar14 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar14 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar14,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar14,pvVar2,(longlong)iVar1 * 2);
          }
        }
      }
      FUN_1406fa324(puVar14 + 2,piVar15 + 2);
      piVar15 = piVar15 + 0x24;
      puVar14 = puVar14 + 0x12;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c43a64 FUN_143c43a64 body=59 status=ok
// SIG undefined FUN_143c43a64(void)

undefined8 FUN_143c43a64(longlong *param_1)

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



// FUNCTION 143c43ab0 FUN_143c43ab0 body=72 status=ok
// SIG undefined FUN_143c43ab0(void)

void FUN_143c43ab0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 143c43b48 FUN_143c43b48 body=29 status=ok
// SIG undefined FUN_143c43b48(void)

undefined8 FUN_143c43b48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c43b94 FUN_143c43b94 body=73 status=ok
// SIG undefined FUN_143c43b94(void)

void FUN_143c43b94(undefined8 param_1,longlong *param_2)

{
  FUN_143c43d88(param_2[4],(int)param_2[5]);
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c43bf4 FUN_143c43bf4 body=138 status=ok
// SIG undefined FUN_143c43bf4(void)

undefined8 FUN_143c43bf4(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0x20);
    do {
      FUN_1403de7ba(puVar3 + -4,param_3);
      if (puVar3 + -4 != param_3) {
        FUN_143c43d88(*puVar3,*(undefined4 *)(puVar3 + 1));
        iVar1 = *(int *)(param_3 + 5);
        uVar2 = param_3[4];
        *(int *)(puVar3 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar3 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_143c43dd6(puVar3,iVar1);
          FUN_143c43ebb(*puVar3,uVar2,iVar1);
        }
      }
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c43ca6 FUN_143c43ca6 body=59 status=ok
// SIG undefined FUN_143c43ca6(void)

undefined8 FUN_143c43ca6(longlong *param_1)

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



// FUNCTION 143c43cec FUN_143c43cec body=77 status=ok
// SIG undefined FUN_143c43cec(void)

void FUN_143c43cec(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[6] == '\x01') {
    FUN_143c43d88(param_2[4],(int)param_2[5]);
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 143c43d88 FUN_143c43d88 body=78 status=ok
// SIG undefined FUN_143c43d88(void)

void FUN_143c43d88(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143c43dd6 FUN_143c43dd6 body=229 status=ok
// SIG undefined FUN_143c43dd6(void)

void FUN_143c43dd6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    iVar1 = (int)(uVar3 / 0x90);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x90,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c43ebb FUN_143c43ebb body=328 status=ok
// SIG undefined FUN_143c43ebb(void)

void FUN_143c43ebb(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  if (param_3 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x68);
    do {
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(undefined4 *)(puVar12 + -0xd) = *param_2;
      *(undefined4 *)((longlong)puVar12 + -100) = uVar3;
      *(undefined4 *)(puVar12 + -0xc) = uVar4;
      *(undefined4 *)((longlong)puVar12 + -0x5c) = uVar5;
      puVar12[-0xb] = 0;
      iVar1 = param_2[6];
      pvVar2 = *(void **)(param_2 + 4);
      *(int *)(puVar12 + -10) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar12 + -0x4c) = 0;
      }
      else {
        FUN_1446dd670(puVar12 + -0xb,iVar1,0);
        memcpy((void *)puVar12[-0xb],pvVar2,(longlong)iVar1 * 2);
      }
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)(param_2 + 10);
      uVar3 = param_2[0xc];
      uVar4 = param_2[0xd];
      uVar5 = param_2[0xe];
      uVar6 = param_2[0xf];
      uVar7 = param_2[0x11];
      uVar8 = param_2[0x12];
      uVar9 = param_2[0x13];
      *(undefined4 *)(puVar12 + -5) = param_2[0x10];
      *(undefined4 *)((longlong)puVar12 + -0x24) = uVar7;
      *(undefined4 *)(puVar12 + -4) = uVar8;
      *(undefined4 *)((longlong)puVar12 + -0x1c) = uVar9;
      *(undefined4 *)(puVar12 + -7) = uVar3;
      *(undefined4 *)((longlong)puVar12 + -0x34) = uVar4;
      *(undefined4 *)(puVar12 + -6) = uVar5;
      *(undefined4 *)((longlong)puVar12 + -0x2c) = uVar6;
      puVar12[-9] = uVar10;
      puVar12[-8] = uVar11;
      puVar12[-3] = *(undefined8 *)(param_2 + 0x14);
      uVar3 = param_2[0x17];
      uVar4 = param_2[0x18];
      uVar5 = param_2[0x19];
      *(undefined4 *)(puVar12 + -2) = param_2[0x16];
      *(undefined4 *)((longlong)puVar12 + -0xc) = uVar3;
      *(undefined4 *)(puVar12 + -1) = uVar4;
      *(undefined4 *)((longlong)puVar12 + -4) = uVar5;
      *puVar12 = 0;
      iVar1 = param_2[0x1c];
      pvVar2 = *(void **)(param_2 + 0x1a);
      *(int *)(puVar12 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar12,iVar1,0);
        memcpy((void *)*puVar12,pvVar2,(longlong)iVar1 * 2);
      }
      puVar12[2] = 0;
      iVar1 = param_2[0x20];
      pvVar2 = *(void **)(param_2 + 0x1e);
      *(int *)(puVar12 + 3) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
      }
      else {
        FUN_1401b309e(puVar12 + 2,iVar1,0);
        memcpy((void *)puVar12[2],pvVar2,(longlong)iVar1 << 3);
      }
      param_2 = param_2 + 0x24;
      puVar12 = puVar12 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143c4402a FUN_143c4402a body=57 status=ok
// SIG undefined FUN_143c4402a(void)

void FUN_143c4402a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb587c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb587c0 = FUN_140002ddd(FUN_1464c2178,uVar1,L"GbxActorPartDef_Material");
  }
  return;
}



// FUNCTION 143c44063 FUN_143c44063 body=87 status=ok
// SIG undefined FUN_143c44063(void)

void FUN_143c44063(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      FUN_143c43d88(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143c440ba FUN_143c440ba body=75 status=ok
// SIG undefined FUN_143c440ba(void)

void FUN_143c440ba(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143c44106 FUN_143c44106 body=54 status=ok
// SIG undefined FUN_143c44106(void)

void FUN_143c44106(longlong *param_1)

{
  FUN_143c4413c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c4413c FUN_143c4413c body=494 status=ok
// SIG undefined FUN_143c4413c(void)

void FUN_143c4413c(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_143c44298;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar4 * 0x38) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_143c44298;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_143c44298:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 143c4432c FUN_143c4432c body=93 status=ok
// SIG undefined FUN_143c4432c(void)

undefined8 * FUN_143c4432c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_143c440ba(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143c4463c(param_1,iVar1);
      FUN_143c44721(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 143c4438a FUN_143c4438a body=93 status=ok
// SIG undefined FUN_143c4438a(void)

undefined8 * FUN_143c4438a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_143c44063(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143c447b8(param_1,iVar1);
      FUN_143c4489d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 143c443e8 FUN_143c443e8 body=154 status=ok
// SIG undefined FUN_143c443e8(void)

longlong FUN_143c443e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_143c44452;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_143c44452:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_143c44482(param_1,param_2);
  return param_1;
}



// FUNCTION 143c44482 FUN_143c44482 body=328 status=ok
// SIG undefined FUN_143c44482(void)

undefined8 * FUN_143c44482(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *_Dst;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_143c4413c(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_143c445ca(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(puVar8 + 0xc);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0xe;
        puVar7 = puVar7 + 0xe;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 143c445ca FUN_143c445ca body=114 status=ok
// SIG undefined FUN_143c445ca(void)

undefined8 * FUN_143c445ca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 143c4463c FUN_143c4463c body=229 status=ok
// SIG undefined FUN_143c4463c(void)

void FUN_143c4463c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c44721 FUN_143c44721 body=150 status=ok
// SIG undefined FUN_143c44721(void)

void FUN_143c44721(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  if (param_3 != 0) {
    param_2 = param_2 + 0x10;
    do {
      *param_1 = 0;
      iVar1 = *(int *)(param_2 + -8);
      _Src = *(void **)(param_2 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_140817052(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_1403de7ba(param_1 + 2,param_2);
      param_1 = param_1 + 6;
      param_2 = param_2 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143c447b8 FUN_143c447b8 body=229 status=ok
// SIG undefined FUN_143c447b8(void)

void FUN_143c447b8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c4489d FUN_143c4489d body=141 status=ok
// SIG undefined FUN_143c4489d(void)

void FUN_143c4489d(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      puVar3[-4] = 0;
      puVar3[-3] = 0;
      FUN_1403de7ba(puVar3 + -4,param_2);
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 0x28);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_143c43dd6(puVar3,iVar1,0);
        FUN_143c43ebb(*puVar3,uVar2);
      }
      param_2 = param_2 + 0x30;
      puVar3 = puVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143c44938 FUN_143c44938 body=1323 status=ok
// SIG undefined FUN_143c44938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c44938(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  lVar3 = 0;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b075740);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b075840);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb581f0 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b076200);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b076af0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b076ba0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b076f90,1,&PTR_FUN_14b076f40);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b077330,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b077690,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b077a80;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b077aa0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b077b40);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b077d80,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b077ff0,1,0);
  _DAT_14cb58380 = 0;
  _DAT_14cb58370 = 0;
  uRam000000014cb58378 = 0;
  DAT_14cb58388 = 0;
  uRam000000014cb58390 = 0;
  FUN_1446ddda2(&DAT_14cb58370,"allactivities",0);
  atexit((_func_5014 *)&LAB_143c4297f);
  _DAT_14cb58398 = 0;
  uRam000000014cb583a0 = 0;
  _DAT_14cb583a8 = 0;
  DAT_14cb583b0 = 0;
  uRam000000014cb583b8 = 0;
  FUN_1446ddda2(&DAT_14cb58398,"serial",0);
  atexit((_func_5014 *)&LAB_143c42990);
  _DAT_14cb583c0 = 0;
  uRam000000014cb583c8 = 0;
  _DAT_14cb583d0 = 0;
  DAT_14cb583d8 = 0;
  uRam000000014cb583e0 = 0;
  FUN_1446ddda2(&DAT_14cb583c0,"missionstate",0);
  atexit((_func_5014 *)&LAB_143c429a1);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b078130 + lVar3),L"/Script/GbxGame",
                  *(undefined8 *)((longlong)&PTR_u_EActivityParams_14b078138 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14b078140 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x40);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0784b0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb58430);
  if (cVar1 == '\0') {
    _DAT_14cb58430 = 0;
    uRam000000014cb58438 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b078570,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0788b0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0788d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b078dd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b079480);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b079720;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b079740);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0799e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b079c50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b07a0d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b07a4d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b07a780);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b07ab30);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b07b480;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b07b4a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b07be10);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c44e64 FUN_143c44e64 body=55 status=ok
// SIG undefined FUN_143c44e64(void)

void FUN_143c44e64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58828 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58828 = FUN_14171c317(FUN_1464c2918,uVar1,L"EGbxActorPartNiagaraMode");
  }
  return;
}



// FUNCTION 143c44e9b FUN_143c44e9b body=55 status=ok
// SIG undefined FUN_143c44e9b(void)

void FUN_143c44e9b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58888 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58888 = FUN_14171c317(FUN_1464c2a9e,uVar1,L"EGbxActorPartParam");
  }
  return;
}



// FUNCTION 143c44ed2 FUN_143c44ed2 body=55 status=ok
// SIG undefined FUN_143c44ed2(void)

void FUN_143c44ed2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb589e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb589e8 = FUN_14171c317(FUN_1464c312a,uVar1,L"EGbxActorPartChoiceType");
  }
  return;
}



// FUNCTION 143c44f09 FUN_143c44f09 body=55 status=ok
// SIG undefined FUN_143c44f09(void)

void FUN_143c44f09(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58c90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58c90 = FUN_14171c317(FUN_1464c3c80,uVar1,L"EDeliverySpawnPointLimit");
  }
  return;
}



// FUNCTION 143c44f6e FUN_143c44f6e body=57 status=ok
// SIG undefined FUN_143c44f6e(void)

void FUN_143c44f6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb587f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb587f8 = FUN_140002ddd(FUN_1464c2829,uVar1,L"GbxActorPartDef_Mesh");
  }
  return;
}



// FUNCTION 143c45006 FUN_143c45006 body=57 status=ok
// SIG undefined FUN_143c45006(void)

void FUN_143c45006(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58858 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58858 = FUN_140002ddd(FUN_1464c29de,uVar1,L"GbxActorPartDef_Niagara");
  }
  return;
}



// FUNCTION 143c45068 FUN_143c45068 body=57 status=ok
// SIG undefined FUN_143c45068(void)

void FUN_143c45068(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb588a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb588a0 = FUN_140002ddd(FUN_1464c2acd,uVar1,L"GbxActorPartDef_Param");
  }
  return;
}



// FUNCTION 143c450c8 FUN_143c450c8 body=57 status=ok
// SIG undefined FUN_143c450c8(void)

void FUN_143c450c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb588b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb588b8 = FUN_140002ddd(FUN_1464c2b2c,uVar1,L"GbxActorPartDef_Picker");
  }
  return;
}



// FUNCTION 143c4512a FUN_143c4512a body=49 status=ok
// SIG undefined FUN_143c4512a(void)

void FUN_143c4512a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c451cc FUN_143c451cc body=57 status=ok
// SIG undefined FUN_143c451cc(void)

void FUN_143c451cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58918 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58918 = FUN_140002ddd(FUN_1464c2d50,uVar1,L"GbxActorPartDef_Random");
  }
  return;
}



// FUNCTION 143c4522c FUN_143c4522c body=57 status=ok
// SIG undefined FUN_143c4522c(void)

void FUN_143c4522c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58930 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58930 = FUN_140002ddd(FUN_1464c2de7,uVar1,L"GbxActorPartDef_Set");
  }
  return;
}



// FUNCTION 143c4528c FUN_143c4528c body=57 status=ok
// SIG undefined FUN_143c4528c(void)

void FUN_143c4528c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58948 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58948 = FUN_140002ddd(FUN_1464c2e7d,uVar1,L"GbxActorPartDef_Tags");
  }
  return;
}



// FUNCTION 143c452d4 FUN_143c452d4 body=57 status=ok
// SIG undefined FUN_143c452d4(void)

void FUN_143c452d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb589a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb589a0 = FUN_140002ddd(FUN_1464c2f68,uVar1,L"GbxActorInstanceData_Parts");
  }
  return;
}



// FUNCTION 143c4530e FUN_143c4530e body=494 status=ok
// SIG undefined FUN_143c4530e(void)

void FUN_143c4530e(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_143c4546a;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x20) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_143c4546a;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_143c4546a:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 143c454fe FUN_143c454fe body=88 status=ok
// SIG undefined FUN_143c454fe(void)

undefined8 * FUN_143c454fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143c45556(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 143c45556 FUN_143c45556 body=310 status=ok
// SIG undefined FUN_143c45556(void)

void FUN_143c45556(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143c455c0;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_143c455c0:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c4568c FUN_143c4568c body=609 status=ok
// SIG undefined FUN_143c4568c(void)

longlong * FUN_143c4568c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = (int)param_2[9];
  plVar6 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
    if (iVar2 == 0) goto LAB_143c4571d;
  }
  else {
    FUN_1446efa72(plVar6,0,iVar2,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar6 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar6;
  }
  plVar6 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar6,(longlong)iVar2 << 2);
LAB_143c4571d:
  *(int *)(param_1 + 9) = iVar2;
  uVar1 = *(uint *)(param_2 + 1);
  FUN_143c4530e(param_1,(ulonglong)uVar1);
  lVar4 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
    FUN_1447711aa(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar7 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    plVar6 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar1) {
    lVar4 = *param_1;
    lVar3 = *param_2;
    lVar9 = 0;
    uVar10 = 0;
    do {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar6 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) & 1)
          == 0) {
        *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
        *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
      }
      else {
        *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        *(undefined8 *)(lVar4 + 8 + lVar9) = 0;
        iVar2 = *(int *)(lVar3 + 0x10 + lVar9);
        _Src = *(void **)(lVar3 + 8 + lVar9);
        *(int *)(lVar4 + 0x10 + lVar9) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)(lVar4 + 0x14 + lVar9) = 0;
        }
        else {
          FUN_143c45556(lVar4 + 8 + lVar9,iVar2,0);
          memcpy(*(void **)(lVar4 + 8 + lVar9),_Src,(longlong)iVar2 << 3);
        }
        *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar1 != uVar10);
  }
  return param_1;
}



// FUNCTION 143c458fc FUN_143c458fc body=102 status=ok
// SIG undefined FUN_143c458fc(void)

void FUN_143c458fc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x10) = 2;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  return;
}



// FUNCTION 143c45a3c FUN_143c45a3c body=73 status=ok
// SIG undefined FUN_143c45a3c(void)

void FUN_143c45a3c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1,0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}



// FUNCTION 143c45add FUN_143c45add body=1182 status=ok
// SIG undefined FUN_143c45add(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c45add(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb587e8 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b082cd0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b083440;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b083460);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b083730;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b083750);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b083930);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b083f20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0840c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b084160);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb58958);
  if (cVar1 == '\0') {
    _DAT_14cb58958 = 0;
    uRam000000014cb58960 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b084ea0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b085450,1,&PTR_FUN_14b085400);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b085620);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0859d0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0859f0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b085d80,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b085e30);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0861a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b086240);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b086fb0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b087580,1,0);
  FUN_1446f470e(&DAT_14cb58af0,L"OnBeginPlay",1);
  FUN_1446f470e(&DAT_14cb58b00,L"OnEndPlay",1);
  FUN_1446f470e(&DAT_14cb58b10,L"OnInit",1);
  FUN_1446f470e(&DAT_14cb58b20,L"OnStateDisabled",1);
  FUN_1446f470e(&DAT_14cb58b30,L"OnStateEnabled",1);
  FUN_1446f470e(&DAT_14cb58b60,L"UserConstructionScript",1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b088e10,1,&PTR_FUN_14b088d90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b089050,1,&PTR_FUN_14b089020);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b089950,1,&PTR_FUN_14b089920);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b089cf0,1,&PTR_FUN_14b089cc0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b08a230,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b08ac50;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b08ac70,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c45f84 FUN_143c45f84 body=55 status=ok
// SIG undefined FUN_143c45f84(void)

void FUN_143c45f84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58f18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58f18 = FUN_14171c317(FUN_1464c4b66,uVar1,L"EGbxAINodeLastOption");
  }
  return;
}



// FUNCTION 143c45fbb FUN_143c45fbb body=55 status=ok
// SIG undefined FUN_143c45fbb(void)

void FUN_143c45fbb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58f30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58f30 = FUN_14171c317(FUN_1464c4b95,uVar1,L"EGbxAINodeApproachDirection");
  }
  return;
}



// FUNCTION 143c45ff2 FUN_143c45ff2 body=55 status=ok
// SIG undefined FUN_143c45ff2(void)

void FUN_143c45ff2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58f48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58f48 = FUN_14171c317(FUN_1464c4bc4,uVar1,L"EGbxAINodeBuiltInStayTask");
  }
  return;
}



// FUNCTION 143c46029 FUN_143c46029 body=55 status=ok
// SIG undefined FUN_143c46029(void)

void FUN_143c46029(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58f60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58f60 = FUN_14171c317(FUN_1464c4bf3,uVar1,L"EGbxAINodeBuiltInTravelTask");
  }
  return;
}



// FUNCTION 143c46060 FUN_143c46060 body=55 status=ok
// SIG undefined FUN_143c46060(void)

void FUN_143c46060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58f78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58f78 = FUN_14171c317(FUN_1464c4c22,uVar1,L"EGbxAINodeAbsentPresentation");
  }
  return;
}



// FUNCTION 143c46097 FUN_143c46097 body=55 status=ok
// SIG undefined FUN_143c46097(void)

void FUN_143c46097(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58f90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58f90 = FUN_14171c317(FUN_1464c4c51,uVar1,L"EGbxAINodeRotationOption");
  }
  return;
}



// FUNCTION 143c460ce FUN_143c460ce body=243 status=ok
// SIG undefined FUN_143c460ce(void)

void FUN_143c460ce(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0x41f00000;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0xb) = 4;
  *(undefined4 *)(param_1 + 8) = 0x40200000;
  *(undefined1 *)(param_1 + 0xc) = 3;
  *(char *)(param_1 + 0xd) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x13) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0x40200000;
  *(undefined1 *)(param_1 + 0x14) = 3;
  *(char *)(param_1 + 0x15) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(bool *)(param_1 + 0x1d) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x23) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(bool *)(param_1 + 0x25) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  return;
}



// FUNCTION 143c461c2 FUN_143c461c2 body=106 status=ok
// SIG undefined FUN_143c461c2(void)

void FUN_143c461c2(undefined4 *param_1)

{
  *param_1 = 0x10100;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0x3f80000000000000;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0xffffffff00000080;
  param_1[0x23] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  return;
}



// FUNCTION 143c4622c FUN_143c4622c body=186 status=ok
// SIG undefined FUN_143c4622c(void)

void FUN_143c4622c(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0x453b8000;
  param_1[0x48] = 3;
  param_1[0x50] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x78) = 4;
  *(undefined4 *)(param_1 + 0x60) = 0x447a0000;
  param_1[0x80] = 3;
  param_1[0x88] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 4;
  *(undefined4 *)(param_1 + 0x98) = 0x451c4000;
  param_1[0xb8] = 3;
  param_1[0xc0] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 200) = 0x447a000044fa0000;
  *(undefined2 *)(param_1 + 0xd0) = 0x100;
  return;
}



// FUNCTION 143c462e6 FUN_143c462e6 body=162 status=ok
// SIG undefined FUN_143c462e6(void)

void FUN_143c462e6(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x40) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0x43960000;
  param_1[0x48] = 3;
  param_1[0x50] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x78) = 4;
  *(undefined4 *)(param_1 + 0x60) = 0x447a0000;
  param_1[0x80] = 3;
  param_1[0x88] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x90) = 0x451c4000449c4000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  param_1[0xc0] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x100;
  return;
}



// FUNCTION 143c46390 FUN_143c46390 body=48 status=ok
// SIG undefined FUN_143c46390(void)

longlong FUN_143c46390(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c463c0 FUN_143c463c0 body=48 status=ok
// SIG undefined FUN_143c463c0(void)

longlong FUN_143c463c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c463f0 FUN_143c463f0 body=48 status=ok
// SIG undefined FUN_143c463f0(void)

longlong FUN_143c463f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c46420 FUN_143c46420 body=48 status=ok
// SIG undefined FUN_143c46420(void)

longlong FUN_143c46420(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c46450 FUN_143c46450 body=48 status=ok
// SIG undefined FUN_143c46450(void)

longlong FUN_143c46450(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x688;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c46650 FUN_143c46650 body=642 status=ok
// SIG undefined FUN_143c46650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c46650(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b08e530,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b08e750);
  _DAT_14cb58d10 = 0xffffffff;
  _DAT_14cb58d14 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b08eaf0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b08ed40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b08fb20,2,&PTR_FUN_14b08fad0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb58e00 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b08fc10,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b08fcd0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b08ff80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b090040,1,0);
  _DAT_14cb58e70 = 0x47efffffe0000000;
  _DAT_14cb58e78 = 0x47efffffe0000000;
  _DAT_14cb58e80 = 0x47efffffe0000000;
  _DAT_14cb58e88 = 0x47efffffe0000000;
  _DAT_14cb58e90 = 0x47efffffe0000000;
  _DAT_14cb58e98 = 0x47efffffe0000000;
  _DAT_14cb58ea0 = 0x47efffffe0000000;
  _DAT_14cb58ea8 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b090890,1,0);
  ppuStack_60 = &PTR_FUN_14b094520;
  local_58 = 6;
  local_68 = 7;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b094700,1,&PTR_FUN_14b0945e0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c468d4 FUN_143c468d4 body=55 status=ok
// SIG undefined FUN_143c468d4(void)

void FUN_143c468d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59170 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59170 = FUN_14171c317(FUN_1464c5854,uVar1,L"EGbxAINodeStanceRestriction");
  }
  return;
}



// FUNCTION 143c4690b FUN_143c4690b body=55 status=ok
// SIG undefined FUN_143c4690b(void)

void FUN_143c4690b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59188 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59188 = FUN_14171c317(FUN_1464c5883,uVar1,L"EGbxAINodeStanceStyle");
  }
  return;
}



// FUNCTION 143c46942 FUN_143c46942 body=55 status=ok
// SIG undefined FUN_143c46942(void)

void FUN_143c46942(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb591a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb591a0 = FUN_14171c317(FUN_1464c58b4,uVar1,L"EGbxAINodeStanceSpeed");
  }
  return;
}



// FUNCTION 143c46979 FUN_143c46979 body=55 status=ok
// SIG undefined FUN_143c46979(void)

void FUN_143c46979(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb592c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb592c8 = FUN_14171c317(FUN_1464c5efc,uVar1,L"EFloatComparisonType");
  }
  return;
}



// FUNCTION 143c46a4c FUN_143c46a4c body=57 status=ok
// SIG undefined FUN_143c46a4c(void)

void FUN_143c46a4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59268 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59268 = FUN_140002ddd(FUN_1464c5c7b,uVar1,L"GbxAnimNode_ApplyBoneMod");
  }
  return;
}



// FUNCTION 143c46ac0 FUN_143c46ac0 body=55 status=ok
// SIG undefined FUN_143c46ac0(void)

undefined8 * FUN_143c46ac0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a0bc0;
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    *(undefined1 *)(param_1 + 0x7a) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c46be6 FUN_143c46be6 body=203 status=ok
// SIG undefined FUN_143c46be6(void)

void FUN_143c46be6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x100);
  *(undefined4 *)(param_2 + 3) = 0xfffffffe;
  *(undefined4 *)(param_2 + 4) = 0xfffffffe;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x79) = 1;
  *(undefined8 *)((longlong)param_2 + 0x7a) = 0;
  *(undefined2 *)((longlong)param_2 + 0x82) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x11) = 0x101;
  *param_2 = &PTR_FUN_14b0a5020;
  param_2[0x14] = 0x47efffffe0000000;
  param_2[0x15] = 0x47efffffe0000000;
  param_2[0x16] = 0x47efffffe0000000;
  param_2[0x19] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x1b) = 0x101;
  *(undefined4 *)(param_2 + 0x1d) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 143c46cdc FUN_143c46cdc body=57 status=ok
// SIG undefined FUN_143c46cdc(void)

void FUN_143c46cdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59408 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59408 = FUN_140002ddd(FUN_1464c64a9,uVar1,L"GbxAnimNode_IdleTurns");
  }
  return;
}



// FUNCTION 143c46dd8 FUN_143c46dd8 body=233 status=ok
// SIG undefined FUN_143c46dd8(void)

void FUN_143c46dd8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x1d8);
  *(undefined1 *)(param_2 + 3) = 1;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 8) = 0xffff;
  param_2[0x24] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)((longlong)param_2 + 300) = 8;
  *param_2 = &PTR_FUN_14b0a2d70;
  *(undefined4 *)(param_2 + 0x27) = 0x3dcccccd;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0x41200000;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0xc;
  *(undefined1 *)(param_2 + 0x33) = 2;
  param_2[0x34] = 0;
  *(undefined1 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1ae) = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x42c80000;
  param_2[0x3c] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  return;
}



// FUNCTION 143c46ec2 FUN_143c46ec2 body=31 status=ok
// SIG undefined FUN_143c46ec2(void)

undefined8 FUN_143c46ec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c46fb6 FUN_143c46fb6 body=1165 status=ok
// SIG undefined FUN_143c46fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c46fb6(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb590b8 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b099f00,1,&PTR_FUN_14b099ed0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09a290);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b09a580,1,&PTR_FUN_14b09a550);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b09a640,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09a7c0);
  ppuStack_60 = &PTR_FUN_14b09b130;
  uStack_58 = 3;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09b190);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b09b8e0,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b09bd40,1,0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09bdf0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09bf50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09c140);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b09c3f0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09c410);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09c710);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09c9f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09cb30);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb59368);
  if (cVar1 == '\0') {
    _DAT_14cb59368 = 0;
    uRam000000014cb59370 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09ce00);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09ced0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09cf90);
  _DAT_14cb593c0 = 0x47efffffe0000000;
  _DAT_14cb593c8 = 0x47efffffe0000000;
  _DAT_14cb593d0 = 0x47efffffe0000000;
  _DAT_14cb593d8 = 0x47efffffe0000000;
  _DAT_14cb593e0 = 0x47efffffe0000000;
  _DAT_14cb593e8 = 0x47efffffe0000000;
  _DAT_14cb593f0 = 0x47efffffe0000000;
  _DAT_14cb593f8 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09d1f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09d9b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09e040);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09e190);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09e900);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09eec0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09f730);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b09f9c0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c47444 FUN_143c47444 body=55 status=ok
// SIG undefined FUN_143c47444(void)

void FUN_143c47444(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59ef0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59ef0 = FUN_14171c317(FUN_1464c7779,uVar1,L"EHideActorNotifyOption");
  }
  return;
}



// FUNCTION 143c4747b FUN_143c4747b body=55 status=ok
// SIG undefined FUN_143c4747b(void)

void FUN_143c4747b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59f98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59f98 = FUN_14171c317(FUN_1464c7912,uVar1,L"EGbxAnimSetPickerFields");
  }
  return;
}



// FUNCTION 143c474b2 FUN_143c474b2 body=55 status=ok
// SIG undefined FUN_143c474b2(void)

void FUN_143c474b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a0e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a0e0 = FUN_14171c317(FUN_1464c7f30,uVar1,L"EGbxAreaDrawStyle");
  }
  return;
}



// FUNCTION 143c4750e FUN_143c4750e body=57 status=ok
// SIG undefined FUN_143c4750e(void)

void FUN_143c4750e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59d88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59d88 = FUN_140002ddd(FUN_1464c708a,uVar1,L"GbxAnimNode_Rotation_AimOffset");
  }
  return;
}



// FUNCTION 143c47564 FUN_143c47564 body=138 status=ok
// SIG undefined FUN_143c47564(void)

void FUN_143c47564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0af820;
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  if (*(char *)(param_1 + 0x32) == '\x01') {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c475ee FUN_143c475ee body=57 status=ok
// SIG undefined FUN_143c475ee(void)

void FUN_143c475ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59da0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59da0 = FUN_140002ddd(FUN_1464c7189,uVar1,L"GbxAnimNode_Rotation_EyeBones");
  }
  return;
}



// FUNCTION 143c476ba FUN_143c476ba body=225 status=ok
// SIG undefined FUN_143c476ba(void)

undefined1 FUN_143c476ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0x78;
    bVar13 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + -0x68 + lVar15) = *(undefined2 *)(param_3 + -0x68 + lVar15);
      *(undefined8 *)(param_2 + -0x70 + lVar15) = *(undefined8 *)(param_3 + -0x70 + lVar15);
      puVar1 = (undefined4 *)(param_3 + -0x60 + lVar15);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + -0x50 + lVar15);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + -0x60 + lVar15);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar1 = (undefined4 *)(param_2 + -0x50 + lVar15);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      *(undefined8 *)(param_2 + -0x43 + lVar15) = *(undefined8 *)(param_3 + -0x43 + lVar15);
      *(undefined1 *)(param_2 + -0x38 + lVar15) = *(undefined1 *)(param_3 + -0x38 + lVar15);
      *(undefined4 *)(param_2 + -0x29 + lVar15) = *(undefined4 *)(param_3 + -0x29 + lVar15);
      *(undefined8 *)(param_2 + -0x30 + lVar15) = *(undefined8 *)(param_3 + -0x30 + lVar15);
      lVar14 = *(longlong *)(param_3 + -0x20 + lVar15);
      if ((bVar13 & 1) != 0) {
        if (lVar14 == 0) {
          lVar14 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar14 = *(longlong *)(param_3 + -0x20 + lVar15);
          bVar13 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x20 + lVar15) = lVar14;
      puVar3 = (undefined8 *)(param_3 + -0x18 + lVar15);
      uVar12 = puVar3[1];
      puVar4 = (undefined8 *)(param_2 + -0x18 + lVar15);
      *puVar4 = *puVar3;
      puVar4[1] = uVar12;
      *(undefined4 *)(param_2 + -8 + lVar15) = *(undefined4 *)(param_3 + -8 + lVar15);
      uVar12 = ((undefined8 *)(param_3 + lVar15))[1];
      *(undefined8 *)(param_2 + lVar15) = *(undefined8 *)(param_3 + lVar15);
      ((undefined8 *)(param_2 + lVar15))[1] = uVar12;
      lVar15 = lVar15 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c477aa FUN_143c477aa body=210 status=ok
// SIG undefined FUN_143c477aa(void)

void FUN_143c477aa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *(undefined4 *)(param_2 + 3) = 0xfffffffe;
  *(undefined4 *)(param_2 + 4) = 0xfffffffe;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[9] = 0;
  *(undefined1 *)((longlong)param_2 + 0x51) = 1;
  param_2[0xc] = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0x3f80000000000000;
  param_2[0xf] = &DAT_3f8000003f800000;
  param_2[0x11] = 0x412000003f800000;
  *(undefined4 *)(param_2 + 0x12) = 0x41200000;
  *(undefined1 *)(param_2 + 0x13) = 1;
  *param_2 = &PTR_FUN_14b0a4df0;
  param_2[0x16] = 0x47efffffe0000000;
  param_2[0x17] = 0x47efffffe0000000;
  param_2[0x18] = 0x47efffffe0000000;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 143c4788a FUN_143c4788a body=288 status=ok
// SIG undefined FUN_143c4788a(void)

undefined1 FUN_143c4788a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 8;
    bVar14 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + 8 + lVar18) = *(undefined2 *)(param_3 + 8 + lVar18);
      *(undefined8 *)(param_2 + lVar18) = *(undefined8 *)(param_3 + lVar18);
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar18);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x20 + lVar18);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x20 + lVar18);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined8 *)(param_2 + 0x2d + lVar18) = *(undefined8 *)(param_3 + 0x2d + lVar18);
      *(undefined8 *)(param_2 + 0x38 + lVar18) = *(undefined8 *)(param_3 + 0x38 + lVar18);
      *(undefined4 *)(param_2 + 0x48 + lVar18) = *(undefined4 *)(param_3 + 0x48 + lVar18);
      *(undefined8 *)(param_2 + 0x40 + lVar18) = *(undefined8 *)(param_3 + 0x40 + lVar18);
      lVar15 = *(longlong *)(param_3 + 0x50 + lVar18);
      if ((bVar14 & 1) != 0) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = *(longlong *)(param_3 + 0x50 + lVar18);
          bVar14 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x50 + lVar18) = lVar15;
      puVar16 = (undefined8 *)(param_3 + 0x58 + lVar18);
      uVar11 = puVar16[1];
      puVar17 = (undefined8 *)(param_3 + 0x68 + lVar18);
      uVar12 = *puVar17;
      uVar13 = puVar17[1];
      puVar1 = (undefined4 *)(param_3 + 0x78 + lVar18);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x82 + lVar18);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar17 = (undefined8 *)(param_2 + 0x58 + lVar18);
      *puVar17 = *puVar16;
      puVar17[1] = uVar11;
      puVar16 = (undefined8 *)(param_2 + 0x68 + lVar18);
      *puVar16 = uVar12;
      puVar16[1] = uVar13;
      puVar1 = (undefined4 *)(param_2 + 0x78 + lVar18);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      puVar1 = (undefined4 *)(param_2 + 0x82 + lVar18);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar16 = (undefined8 *)(param_3 + lVar18 + 0x98);
      puVar17 = (undefined8 *)(param_2 + lVar18 + 0x98);
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      lVar18 = lVar18 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c479b8 FUN_143c479b8 body=57 status=ok
// SIG undefined FUN_143c479b8(void)

void FUN_143c479b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59e30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59e30 = FUN_140002ddd(FUN_1464c750d,uVar1,L"GbxAnimNode_SimpleMotionBoneControl");
  }
  return;
}



// FUNCTION 143c47ae4 FUN_143c47ae4 body=57 status=ok
// SIG undefined FUN_143c47ae4(void)

void FUN_143c47ae4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59fc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59fc8 = FUN_140002ddd(FUN_1464c79aa,uVar1,L"GbxAnimSetOptionWrapper");
  }
  return;
}



// FUNCTION 143c47b7e FUN_143c47b7e body=57 status=ok
// SIG undefined FUN_143c47b7e(void)

void FUN_143c47b7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a110 = FUN_140002ddd(FUN_1464c7fcf,uVar1,L"GbxAttachableBodySettings");
  }
  return;
}



// FUNCTION 143c47bc6 FUN_143c47bc6 body=1337 status=ok
// SIG undefined FUN_143c47bc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c47bc6(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a5610);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb59d10 = (ulonglong)uVar2;
  _DAT_14cb59d18 = 0x47efffffe0000000;
  _DAT_14cb59d20 = 0x47efffffe0000000;
  _DAT_14cb59d28 = 0x47efffffe0000000;
  _DAT_14cb59d30 = 0x47efffffe0000000;
  _DAT_14cb59d38 = 0x47efffffe0000000;
  _DAT_14cb59d40 = 0x47efffffe0000000;
  _DAT_14cb59d48 = 0x47efffffe0000000;
  _DAT_14cb59d50 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb59d58);
  if (cVar1 == '\0') {
    _DAT_14cb59d58 = 0;
    uRam000000014cb59d60 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a56c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a58f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a5b50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a5c00);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a5d70);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a5ea0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a5fb0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a6150);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a6da0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0a6f30);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a7170,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a74c0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a7c70,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a7eb0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a82a0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0a8740;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a8760,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a8e50,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a90d0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a91b0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a9280,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a95f0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0a9e90;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0a9f00,1,&PTR_FUN_14b0a9eb0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0aa2d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0aa6c0,1,&PTR_FUN_14b0aa670);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0ab080,1,&PTR_FUN_14b0ab030);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0ab220);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0ab5f0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0ab610,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0abc30,1,&PTR_FUN_14b0abbe0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0abfc0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c48100 FUN_143c48100 body=55 status=ok
// SIG undefined FUN_143c48100(void)

void FUN_143c48100(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a1c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a1c8 = FUN_14171c317(FUN_1464c886f,uVar1,L"EGbxAudioVolumePortalAnchorageType");
  }
  return;
}



// FUNCTION 143c48137 FUN_143c48137 body=55 status=ok
// SIG undefined FUN_143c48137(void)

void FUN_143c48137(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a2b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a2b8 = FUN_14171c317(FUN_1464c8bdc,uVar1,L"EGbxAttributeBlendSpaceResult");
  }
  return;
}



// FUNCTION 143c4816e FUN_143c4816e body=55 status=ok
// SIG undefined FUN_143c4816e(void)

void FUN_143c4816e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a420 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a420 = FUN_14171c317(FUN_1464c92d8,uVar1,L"EGbxBodyNodeSettings_Dialog_NameSource");
  }
  return;
}



// FUNCTION 143c482da FUN_143c482da body=57 status=ok
// SIG undefined FUN_143c482da(void)

void FUN_143c482da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a390 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a390 = FUN_140002ddd(FUN_1464c8ff7,uVar1,L"GbxBodyNodeSettings_AttachableRoot");
  }
  return;
}



// FUNCTION 143c4834c FUN_143c4834c body=159 status=ok
// SIG undefined FUN_143c4834c(void)

void FUN_143c4834c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b0b9570;
  *(undefined2 *)(param_2 + 7) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x3a) = 1;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0x3ff0000000000000;
  param_2[0xf] = 0x3ff0000000000000;
  param_2[0x10] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x11) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x8c) = 0x201;
  param_2[0x12] = 0;
  param_2[0x13] = 0xffffffff7fffffff;
  return;
}



// FUNCTION 143c483ec FUN_143c483ec body=57 status=ok
// SIG undefined FUN_143c483ec(void)

void FUN_143c483ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a3f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a3f0 = FUN_140002ddd(FUN_1464c9219,uVar1,L"GbxBodyNodeSettings_BoneMod");
  }
  return;
}



// FUNCTION 143c4848a FUN_143c4848a body=57 status=ok
// SIG undefined FUN_143c4848a(void)

void FUN_143c4848a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a408 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a408 = FUN_140002ddd(FUN_1464c9278,uVar1,L"GbxBodyNodeState_BoneMod");
  }
  return;
}



// FUNCTION 143c48510 FUN_143c48510 body=57 status=ok
// SIG undefined FUN_143c48510(void)

void FUN_143c48510(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a438 = FUN_140002ddd(FUN_1464c933f,uVar1,L"GbxBodyNodeSettings_Dialog");
  }
  return;
}



// FUNCTION 143c485b4 FUN_143c485b4 body=57 status=ok
// SIG undefined FUN_143c485b4(void)

void FUN_143c485b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a450 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a450 = FUN_140002ddd(FUN_1464c939e,uVar1,L"GbxBodyNodeState_Dialog");
  }
  return;
}



// FUNCTION 143c485fc FUN_143c485fc body=57 status=ok
// SIG undefined FUN_143c485fc(void)

void FUN_143c485fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a468 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a468 = FUN_140002ddd(FUN_1464c9435,uVar1,L"GbxBodyNodeSettings_DiscoveryLocation");
  }
  return;
}



// FUNCTION 143c48644 FUN_143c48644 body=116 status=ok
// SIG undefined FUN_143c48644(void)

void FUN_143c48644(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0xb0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *param_2 = &PTR_FUN_14b0b9f10;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x800000000;
  return;
}



// FUNCTION 143c486b8 FUN_143c486b8 body=57 status=ok
// SIG undefined FUN_143c486b8(void)

void FUN_143c486b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a480 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a480 = FUN_140002ddd(FUN_1464c9494,uVar1,L"GbxBodyNodeState_DiscoveryLocation");
  }
  return;
}



// FUNCTION 143c48700 FUN_143c48700 body=57 status=ok
// SIG undefined FUN_143c48700(void)

void FUN_143c48700(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a498 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a498 = FUN_140002ddd(FUN_1464c952b,uVar1,L"GbxBodyNodeSettings_FactSwitch");
  }
  return;
}



// FUNCTION 143c4880c FUN_143c4880c body=55 status=ok
// SIG undefined FUN_143c4880c(void)

void FUN_143c4880c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000143c4883f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c48852 FUN_143c48852 body=144 status=ok
// SIG undefined FUN_143c48852(void)

void FUN_143c48852(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe0);
  *param_2 = &PTR_FUN_14b0bac30;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0x3ff0000000000000;
  param_2[0xe] = 0x3ff0000000000000;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_2 + 0x19) = 1;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  return;
}



// FUNCTION 143c488e2 FUN_143c488e2 body=57 status=ok
// SIG undefined FUN_143c488e2(void)

void FUN_143c488e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a540 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a540 = FUN_140002ddd(FUN_1464c98d7,uVar1,L"GbxAudioBodyAction_AddPermanentEmitter");
  }
  return;
}



// FUNCTION 143c4895c FUN_143c4895c body=31 status=ok
// SIG undefined FUN_143c4895c(void)

undefined8 FUN_143c4895c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4897c FUN_143c4897c body=57 status=ok
// SIG undefined FUN_143c4897c(void)

void FUN_143c4897c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a558 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a558 = FUN_140002ddd(FUN_1464c996d,uVar1,L"GbxAudioBodyAction_GetNamedEmitter");
  }
  return;
}



// FUNCTION 143c48a48 FUN_143c48a48 body=57 status=ok
// SIG undefined FUN_143c48a48(void)

void FUN_143c48a48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a570 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a570 = FUN_140002ddd(FUN_1464c9a03,uVar1,L"GbxAudioBodyAction_SpawnEmitter");
  }
  return;
}



// FUNCTION 143c48a90 FUN_143c48a90 body=57 status=ok
// SIG undefined FUN_143c48a90(void)

void FUN_143c48a90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a588 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a588 = FUN_140002ddd(FUN_1464c9a99,uVar1,L"GbxAudioBodyAction_SetSoundtag");
  }
  return;
}



// FUNCTION 143c48b12 FUN_143c48b12 body=132 status=ok
// SIG undefined FUN_143c48b12(void)

undefined8 * FUN_143c48b12(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0bb270;
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((param_1[0xc] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c48b96 FUN_143c48b96 body=57 status=ok
// SIG undefined FUN_143c48b96(void)

void FUN_143c48b96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a5a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a5a0 = FUN_140002ddd(FUN_1464c9b2f,uVar1,L"GbxAudioBodyAction_ManagedLoop");
  }
  return;
}



// FUNCTION 143c48c20 FUN_143c48c20 body=125 status=ok
// SIG undefined FUN_143c48c20(void)

undefined8 * FUN_143c48c20(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0bb400;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffffffffffff;
  if ((param_1[0xc] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c48c9e FUN_143c48c9e body=57 status=ok
// SIG undefined FUN_143c48c9e(void)

void FUN_143c48c9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a5b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a5b8 = FUN_140002ddd(FUN_1464c9bc5,uVar1,L"GbxAudioBodyAction_PostEvent");
  }
  return;
}



// FUNCTION 143c48d00 FUN_143c48d00 body=31 status=ok
// SIG undefined FUN_143c48d00(void)

undefined8 FUN_143c48d00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c48d20 FUN_143c48d20 body=57 status=ok
// SIG undefined FUN_143c48d20(void)

void FUN_143c48d20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a5d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a5d0 = FUN_140002ddd(FUN_1464c9c5b,uVar1,L"GbxAudioBodyAction_SetSwitch");
  }
  return;
}



// FUNCTION 143c48d82 FUN_143c48d82 body=31 status=ok
// SIG undefined FUN_143c48d82(void)

undefined8 FUN_143c48d82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c48da2 FUN_143c48da2 body=57 status=ok
// SIG undefined FUN_143c48da2(void)

void FUN_143c48da2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a5e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a5e8 = FUN_140002ddd(FUN_1464c9cf1,uVar1,L"GbxAudioBodyAction_AddInitSwitch");
  }
  return;
}



// FUNCTION 143c48e2a FUN_143c48e2a body=57 status=ok
// SIG undefined FUN_143c48e2a(void)

void FUN_143c48e2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a618 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a618 = FUN_140002ddd(FUN_1464c9e1d,uVar1,L"GbxBodyNodeSettings_GbxAudio");
  }
  return;
}



// FUNCTION 143c48ec6 FUN_143c48ec6 body=809 status=ok
// SIG undefined FUN_143c48ec6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c48ec6(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb5a168 = (ulonglong)uVar1;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b1b60,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b1f80,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b2640,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b0b2930;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b2950);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b3190,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b3820,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b4300,5,&PTR_FUN_14b0b42d0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b0b4650;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b4670);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b52f0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b5400);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b55e0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b5870);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b5b10);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b5f40);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b0b6220;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b6240);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b64a0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b6660);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0b6ab0,1,&PTR_FUN_14b0b6a80);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 0xe;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b7a80);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0b7ea0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c491f0 FUN_143c491f0 body=55 status=ok
// SIG undefined FUN_143c491f0(void)

void FUN_143c491f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a968 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a968 = FUN_14171c317(FUN_1464cb584,uVar1,L"EGbxBrainAspectCharacterSoundPlayType");
  }
  return;
}



// FUNCTION 143c49227 FUN_143c49227 body=55 status=ok
// SIG undefined FUN_143c49227(void)

void FUN_143c49227(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ab88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ab88 = FUN_14171c317(FUN_1464cbd80,uVar1,L"EHealthAspectCheckType");
  }
  return;
}



// FUNCTION 143c4925e FUN_143c4925e body=48 status=ok
// SIG undefined FUN_143c4925e(void)

longlong FUN_143c4925e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145dc7c04(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c4928e FUN_143c4928e body=48 status=ok
// SIG undefined FUN_143c4928e(void)

longlong FUN_143c4928e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145dc7c04(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c49328 FUN_143c49328 body=57 status=ok
// SIG undefined FUN_143c49328(void)

void FUN_143c49328(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a690 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a690 = FUN_140002ddd(FUN_1464ca7b2,uVar1,L"GbxBodyNodeSettings_GestaltPart");
  }
  return;
}



// FUNCTION 143c493fa FUN_143c493fa body=57 status=ok
// SIG undefined FUN_143c493fa(void)

void FUN_143c493fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a6c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a6c0 = FUN_140002ddd(FUN_1464ca8a9,uVar1,L"GbxBodyNodeSettings_HitRegion");
  }
  return;
}



// FUNCTION 143c4949e FUN_143c4949e body=57 status=ok
// SIG undefined FUN_143c4949e(void)

void FUN_143c4949e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a6d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a6d8 = FUN_140002ddd(FUN_1464ca908,uVar1,L"GbxBodyNodeState_HitRegion");
  }
  return;
}



// FUNCTION 143c494e6 FUN_143c494e6 body=57 status=ok
// SIG undefined FUN_143c494e6(void)

void FUN_143c494e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a6f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a6f0 = FUN_140002ddd(FUN_1464ca99f,uVar1,L"GbxBodyNodeSettings_MovingPlatform");
  }
  return;
}



// FUNCTION 143c49558 FUN_143c49558 body=57 status=ok
// SIG undefined FUN_143c49558(void)

void FUN_143c49558(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a750 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a750 = FUN_140002ddd(FUN_1464cabbb,uVar1,L"GbxBodyNodeSettings_Param");
  }
  return;
}



// FUNCTION 143c495f4 FUN_143c495f4 body=57 status=ok
// SIG undefined FUN_143c495f4(void)

void FUN_143c495f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a768 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a768 = FUN_140002ddd(FUN_1464cac1a,uVar1,L"GbxBodyNodeState_Param");
  }
  return;
}



// FUNCTION 143c4963c FUN_143c4963c body=57 status=ok
// SIG undefined FUN_143c4963c(void)

void FUN_143c4963c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a780 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a780 = FUN_140002ddd(FUN_1464cacb1,uVar1,L"GbxBodyNodeSettings_RandomSwitch");
  }
  return;
}



// FUNCTION 143c49738 FUN_143c49738 body=132 status=ok
// SIG undefined FUN_143c49738(void)

void FUN_143c49738(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x180);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *param_2 = &PTR_FUN_14b0bc2c0;
  *(undefined4 *)((longlong)param_2 + 0x134) = 8;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined8 *)((longlong)param_2 + 0x164) = 0xffffffff00000080;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 143c498ca FUN_143c498ca body=57 status=ok
// SIG undefined FUN_143c498ca(void)

void FUN_143c498ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a9b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a9b0 = FUN_140002ddd(FUN_1464cb672,uVar1,L"GbxBrainAspectSettings_ClaimPerch");
  }
  return;
}



// FUNCTION 143c49912 FUN_143c49912 body=159 status=ok
// SIG undefined FUN_143c49912(void)

void FUN_143c49912(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b0c6a40;
  return;
}



// FUNCTION 143c499b2 FUN_143c499b2 body=57 status=ok
// SIG undefined FUN_143c499b2(void)

void FUN_143c499b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a9c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a9c8 = FUN_140002ddd(FUN_1464cb6d2,uVar1,L"GbxBrainAspect_ClaimPerch");
  }
  return;
}



// FUNCTION 143c49a08 FUN_143c49a08 body=57 status=ok
// SIG undefined FUN_143c49a08(void)

void FUN_143c49a08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a9f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a9f8 = FUN_140002ddd(FUN_1464cb7c8,uVar1,L"GbxBrainAspectSettings_DialogEvent");
  }
  return;
}



// FUNCTION 143c49a50 FUN_143c49a50 body=152 status=ok
// SIG undefined FUN_143c49a50(void)

void FUN_143c49a50(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14b0c6f80;
  return;
}



// FUNCTION 143c49ae8 FUN_143c49ae8 body=57 status=ok
// SIG undefined FUN_143c49ae8(void)

void FUN_143c49ae8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aa10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aa10 = FUN_140002ddd(FUN_1464cb828,uVar1,L"GbxBrainAspect_DialogEvent");
  }
  return;
}



// FUNCTION 143c49b3e FUN_143c49b3e body=57 status=ok
// SIG undefined FUN_143c49b3e(void)

void FUN_143c49b3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aa98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aa98 = FUN_140002ddd(FUN_1464cb8e8,uVar1,L"GbxBrainService_EngagePlayers");
  }
  return;
}



// FUNCTION 143c49b86 FUN_143c49b86 body=162 status=ok
// SIG undefined FUN_143c49b86(void)

void FUN_143c49b86(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14b0c74c0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 143c49c28 FUN_143c49c28 body=57 status=ok
// SIG undefined FUN_143c49c28(void)

void FUN_143c49c28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aab0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aab0 = FUN_140002ddd(FUN_1464cb948,uVar1,L"GbxBrainAspect_EngagePlayers");
  }
  return;
}



// FUNCTION 143c49c70 FUN_143c49c70 body=57 status=ok
// SIG undefined FUN_143c49c70(void)

void FUN_143c49c70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aac8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aac8 = FUN_140002ddd(FUN_1464cb9df,uVar1,L"GbxBrainAspectSettings_Event");
  }
  return;
}



// FUNCTION 143c49cb8 FUN_143c49cb8 body=162 status=ok
// SIG undefined FUN_143c49cb8(void)

void FUN_143c49cb8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14b0c7940;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 143c49d5a FUN_143c49d5a body=57 status=ok
// SIG undefined FUN_143c49d5a(void)

void FUN_143c49d5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aae0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aae0 = FUN_140002ddd(FUN_1464cba3e,uVar1,L"GbxBrainAspect_Event");
  }
  return;
}



// FUNCTION 143c49da2 FUN_143c49da2 body=57 status=ok
// SIG undefined FUN_143c49da2(void)

void FUN_143c49da2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aaf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aaf8 = FUN_140002ddd(FUN_1464cbad5,uVar1,L"GbxBrainAspectSettings_Follow");
  }
  return;
}



// FUNCTION 143c49e06 FUN_143c49e06 body=155 status=ok
// SIG undefined FUN_143c49e06(void)

void FUN_143c49e06(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14b0c81a0;
  return;
}



// FUNCTION 143c49ea2 FUN_143c49ea2 body=57 status=ok
// SIG undefined FUN_143c49ea2(void)

void FUN_143c49ea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ab40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ab40 = FUN_140002ddd(FUN_1464cbbf4,uVar1,L"GbxBrainAspect_HasSkill");
  }
  return;
}



// FUNCTION 143c49f06 FUN_143c49f06 body=57 status=ok
// SIG undefined FUN_143c49f06(void)

void FUN_143c49f06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aba0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aba0 = FUN_140002ddd(FUN_1464cbde7,uVar1,L"GbxBrainAspectSettings_Health");
  }
  return;
}



// FUNCTION 143c49f4e FUN_143c49f4e body=155 status=ok
// SIG undefined FUN_143c49f4e(void)

void FUN_143c49f4e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  *param_2 = &PTR_FUN_14b0c8a90;
  return;
}



// FUNCTION 143c49fea FUN_143c49fea body=57 status=ok
// SIG undefined FUN_143c49fea(void)

void FUN_143c49fea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5abb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5abb8 = FUN_140002ddd(FUN_1464cbe46,uVar1,L"GbxBrainAspect_Health");
  }
  return;
}



// FUNCTION 143c4a023 FUN_143c4a023 body=1021 status=ok
// SIG undefined FUN_143c4a023(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4a023(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0be700);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0be990);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0bebe0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0bedc0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0bef70);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0bf190);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0bf4a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0bf870);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0bfb30);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0bfea0,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb5a868 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0c0c40,1,&PTR_FUN_14b0c0c10);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0c0fa0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0c1130,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b0c1760,1,&PTR_FUN_14b0c1730);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c1d10);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0c2050;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c2070);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c2240);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c2810);
  _DAT_14cb5aa24 = 0;
  FUN_14052b5e0(&DAT_14cb5aa20,"PlayerAwareness",0);
  _DAT_14cb5aa30 = "PlayerAwareness";
  _DAT_14cb5aa38 = 0x47efffffe0000000;
  _DAT_14cb5aa40 = 0x47efffffe0000000;
  _DAT_14cb5aa48 = 0x47efffffe0000000;
  _DAT_14cb5aa50 = 0x47efffffe0000000;
  _DAT_14cb5aa58 = 0x47efffffe0000000;
  _DAT_14cb5aa60 = 0x47efffffe0000000;
  _DAT_14cb5aa68 = 0x47efffffe0000000;
  _DAT_14cb5aa70 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c2c20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c2f90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c32b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c34c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c3700);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b0c3a70;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b0c3a90);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c4a424 FUN_143c4a424 body=55 status=ok
// SIG undefined FUN_143c4a424(void)

void FUN_143c4a424(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad50 = FUN_14171c317(FUN_1464cce19,uVar1,L"EGbxBrainAspectResourceLockRotationType");
  }
  return;
}



// FUNCTION 143c4a45b FUN_143c4a45b body=55 status=ok
// SIG undefined FUN_143c4a45b(void)

void FUN_143c4a45b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5adc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5adc8 = FUN_14171c317(FUN_1464cd017,uVar1,L"EGbxBrainRotationPreset");
  }
  return;
}



// FUNCTION 143c4a492 FUN_143c4a492 body=55 status=ok
// SIG undefined FUN_143c4a492(void)

void FUN_143c4a492(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae10 = FUN_14171c317(FUN_1464cd0fd,uVar1,L"ETeleportTravel");
  }
  return;
}



// FUNCTION 143c4a4c9 FUN_143c4a4c9 body=55 status=ok
// SIG undefined FUN_143c4a4c9(void)

void FUN_143c4a4c9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae28 = FUN_14171c317(FUN_1464cd12c,uVar1,L"ETeleportGround");
  }
  return;
}



// FUNCTION 143c4a500 FUN_143c4a500 body=55 status=ok
// SIG undefined FUN_143c4a500(void)

void FUN_143c4a500(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae88 = FUN_14171c317(FUN_1464cd2a3,uVar1,L"ETrickInterrupt");
  }
  return;
}



// FUNCTION 143c4a537 FUN_143c4a537 body=55 status=ok
// SIG undefined FUN_143c4a537(void)

void FUN_143c4a537(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af30 = FUN_14171c317(FUN_1464cd529,uVar1,L"EGbxLeadFollowMode");
  }
  return;
}



// FUNCTION 143c4a56e FUN_143c4a56e body=55 status=ok
// SIG undefined FUN_143c4a56e(void)

void FUN_143c4a56e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af60 = FUN_14171c317(FUN_1464ccf62,uVar1,L"EGbxLocationTrackingType");
  }
  return;
}



// FUNCTION 143c4a5a5 FUN_143c4a5a5 body=55 status=ok
// SIG undefined FUN_143c4a5a5(void)

void FUN_143c4a5a5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5afc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5afc0 = FUN_14171c317(FUN_1464cd72f,uVar1,L"ELeapAttackTargetMode");
  }
  return;
}



// FUNCTION 143c4a5dc FUN_143c4a5dc body=55 status=ok
// SIG undefined FUN_143c4a5dc(void)

void FUN_143c4a5dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5afd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5afd8 = FUN_14171c317(FUN_1464cd75e,uVar1,L"ELeapAttackRotationTarget");
  }
  return;
}



// FUNCTION 143c4a622 FUN_143c4a622 body=1409 status=ok
// SIG undefined FUN_143c4a622(void)

undefined8 * FUN_143c4a622(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  *param_1 = *param_2;
  puVar7 = param_2 + 2;
  plVar8 = param_1 + 2;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == *(byte *)(param_2 + 6)) {
    if (0x18 < *(ushort *)(param_2 + 5)) {
      puVar7 = (undefined8 *)param_2[2];
    }
    if (0x18 < *(ushort *)(param_1 + 5)) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar8,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(plVar8,puVar7);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar5 = plVar8;
      if (0x18 < *(ushort *)(param_1 + 5)) {
        plVar5 = (longlong *)*plVar8;
      }
      (*pcVar3)(plVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 5)) {
      FUN_1400020a8(*plVar8);
    }
    bVar1 = *(byte *)(param_2 + 6);
    uVar2 = *(ushort *)(param_2 + 5);
    *(ushort *)(param_1 + 5) = uVar2;
    plVar5 = plVar8;
    if (0x18 < uVar2) {
      plVar5 = (longlong *)FUN_14001cc68(uVar2,0);
      *plVar8 = (longlong)plVar5;
      puVar7 = (undefined8 *)*puVar7;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar5,puVar7,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)(plVar5,puVar7);
    }
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  puVar7 = param_2 + 9;
  plVar8 = param_1 + 9;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == *(byte *)(param_2 + 0xd)) {
    if (0x18 < *(ushort *)(param_2 + 0xc)) {
      puVar7 = (undefined8 *)param_2[9];
    }
    if (0x18 < *(ushort *)(param_1 + 0xc)) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar8,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(plVar8,puVar7);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar5 = plVar8;
      if (0x18 < *(ushort *)(param_1 + 0xc)) {
        plVar5 = (longlong *)*plVar8;
      }
      (*pcVar3)(plVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 0xc)) {
      FUN_1400020a8(*plVar8);
    }
    bVar1 = *(byte *)(param_2 + 0xd);
    uVar2 = *(ushort *)(param_2 + 0xc);
    *(ushort *)(param_1 + 0xc) = uVar2;
    plVar5 = plVar8;
    if (0x18 < uVar2) {
      plVar5 = (longlong *)FUN_14001cc68(uVar2,0);
      *plVar8 = (longlong)plVar5;
      puVar7 = (undefined8 *)*puVar7;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar5,puVar7,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)(plVar5,puVar7);
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  puVar7 = param_2 + 0x10;
  puVar9 = param_1 + 0x10;
  bVar1 = *(byte *)(param_1 + 0x14);
  if (bVar1 == *(byte *)(param_2 + 0x14)) {
    if (0x18 < *(ushort *)(param_2 + 0x13)) {
      puVar7 = (undefined8 *)param_2[0x10];
    }
    if (0x18 < *(ushort *)(param_1 + 0x13)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(puVar9,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(puVar9,puVar7);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar6 = puVar9;
      if (0x18 < *(ushort *)(param_1 + 0x13)) {
        puVar6 = (undefined8 *)*puVar9;
      }
      (*pcVar3)(puVar6);
    }
    if (0x18 < *(ushort *)(param_1 + 0x13)) {
      FUN_1400020a8(*puVar9);
    }
    bVar1 = *(byte *)(param_2 + 0x14);
    uVar2 = *(ushort *)(param_2 + 0x13);
    *(ushort *)(param_1 + 0x13) = uVar2;
    puVar6 = puVar9;
    if (0x18 < uVar2) {
      puVar6 = (undefined8 *)FUN_14001cc68(uVar2,0);
      *puVar9 = puVar6;
      puVar7 = (undefined8 *)*puVar7;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(puVar6,puVar7,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)(puVar6,puVar7);
    }
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  puVar7 = param_2 + 0x18;
  puVar9 = param_1 + 0x18;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 == *(byte *)(param_2 + 0x1c)) {
    if (0x18 < *(ushort *)(param_2 + 0x1b)) {
      puVar7 = (undefined8 *)param_2[0x18];
    }
    if (0x18 < *(ushort *)(param_1 + 0x1b)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(puVar9,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(puVar9,puVar7);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar6 = puVar9;
      if (0x18 < *(ushort *)(param_1 + 0x1b)) {
        puVar6 = (undefined8 *)*puVar9;
      }
      (*pcVar3)(puVar6);
    }
    if (0x18 < *(ushort *)(param_1 + 0x1b)) {
      FUN_1400020a8(*puVar9);
    }
    bVar1 = *(byte *)(param_2 + 0x1c);
    uVar2 = *(ushort *)(param_2 + 0x1b);
    *(ushort *)(param_1 + 0x1b) = uVar2;
    puVar6 = puVar9;
    if (0x18 < uVar2) {
      puVar6 = (undefined8 *)FUN_14001cc68(uVar2,0);
      *puVar9 = puVar6;
      puVar7 = (undefined8 *)*puVar7;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(puVar6,puVar7,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)(puVar6,puVar7);
    }
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  }
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  return param_1;
}



// FUNCTION 143c4abb2 FUN_143c4abb2 body=57 status=ok
// SIG undefined FUN_143c4abb2(void)

void FUN_143c4abb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac28 = FUN_140002ddd(FUN_1464cc901,uVar1,L"GbxBrainAspectSettings_IsFacing");
  }
  return;
}



// FUNCTION 143c4abfa FUN_143c4abfa body=175 status=ok
// SIG undefined FUN_143c4abfa(void)

void FUN_143c4abfa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x100);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14b0cea90;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined2 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 143c4acaa FUN_143c4acaa body=57 status=ok
// SIG undefined FUN_143c4acaa(void)

void FUN_143c4acaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac40 = FUN_140002ddd(FUN_1464cc95b,uVar1,L"GbxBrainAspect_IsFacing");
  }
  return;
}



// FUNCTION 143c4ad0e FUN_143c4ad0e body=57 status=ok
// SIG undefined FUN_143c4ad0e(void)

void FUN_143c4ad0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac88 = FUN_140002ddd(FUN_1464ccaa1,uVar1,L"GbxBrainAspectSettings_Lead");
  }
  return;
}



// FUNCTION 143c4ad64 FUN_143c4ad64 body=57 status=ok
// SIG undefined FUN_143c4ad64(void)

void FUN_143c4ad64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5acc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5acc0 = FUN_140002ddd(FUN_1464ccb55,uVar1,L"GbxBrainAspectSettings_Leap");
  }
  return;
}



// FUNCTION 143c4adac FUN_143c4adac body=159 status=ok
// SIG undefined FUN_143c4adac(void)

void FUN_143c4adac(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x100);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14b0cf6d0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}



// FUNCTION 143c4ae4c FUN_143c4ae4c body=57 status=ok
// SIG undefined FUN_143c4ae4c(void)

void FUN_143c4ae4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5acd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5acd8 = FUN_140002ddd(FUN_1464ccbaf,uVar1,L"GbxBrainAspect_Leap");
  }
  return;
}



// FUNCTION 143c4ae94 FUN_143c4ae94 body=57 status=ok
// SIG undefined FUN_143c4ae94(void)

void FUN_143c4ae94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5acf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5acf0 = FUN_140002ddd(FUN_1464ccc41,uVar1,L"GbxBrainAspectSettings_MaxChildActors");
  }
  return;
}



// FUNCTION 143c4af06 FUN_143c4af06 body=57 status=ok
// SIG undefined FUN_143c4af06(void)

void FUN_143c4af06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ad68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ad68 = FUN_140002ddd(FUN_1464cce7f,uVar1,L"GbxBrainAspectSettings_ResourceLock");
  }
  return;
}



// FUNCTION 143c4af6a FUN_143c4af6a body=277 status=ok
// SIG undefined FUN_143c4af6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c4af6a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 1,0,0x188);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf1) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b0d07e0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0xffffffff;
  param_2[0x27] = 0xffffffffffffffff;
  param_2[0x2b] = DAT_14cb5abf0;
  uVar1 = _DAT_14cb5abe8;
  param_2[0x29] = _DAT_14cb5abe0;
  param_2[0x2a] = uVar1;
  uVar1 = _DAT_14cb5abe8;
  param_2[0x2c] = _DAT_14cb5abe0;
  param_2[0x2d] = uVar1;
  param_2[0x2e] = DAT_14cb5abf0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0xffffffff;
  return;
}



// FUNCTION 143c4b080 FUN_143c4b080 body=57 status=ok
// SIG undefined FUN_143c4b080(void)

void FUN_143c4b080(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5adb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5adb0 = FUN_140002ddd(FUN_1464ccfbd,uVar1,L"GbxBrainAspect_RetraceSteps");
  }
  return;
}



// FUNCTION 143c4b0c8 FUN_143c4b0c8 body=57 status=ok
// SIG undefined FUN_143c4b0c8(void)

void FUN_143c4b0c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ade0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ade0 = FUN_140002ddd(FUN_1464cd048,uVar1,L"GbxBrainAspectSettings_Rotate");
  }
  return;
}



// FUNCTION 143c4b110 FUN_143c4b110 body=192 status=ok
// SIG undefined FUN_143c4b110(void)

void FUN_143c4b110(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x280);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14b0d0cf0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)((longlong)param_2 + 0x224) = 3;
  *(undefined1 *)((longlong)param_2 + 0x264) = 0;
  *(undefined4 *)(param_2 + 0x4e) = 0;
  return;
}



// FUNCTION 143c4b1d0 FUN_143c4b1d0 body=57 status=ok
// SIG undefined FUN_143c4b1d0(void)

void FUN_143c4b1d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5adf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5adf8 = FUN_140002ddd(FUN_1464cd0a3,uVar1,L"GbxBrainAspect_Rotate");
  }
  return;
}



// FUNCTION 143c4b226 FUN_143c4b226 body=57 status=ok
// SIG undefined FUN_143c4b226(void)

void FUN_143c4b226(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae58 = FUN_140002ddd(FUN_1464cd1ef,uVar1,L"GbxBrainAspectSettings_Teleport");
  }
  return;
}



// FUNCTION 143c4b26e FUN_143c4b26e body=57 status=ok
// SIG undefined FUN_143c4b26e(void)

void FUN_143c4b26e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae70 = FUN_140002ddd(FUN_1464cd249,uVar1,L"GbxBrainAspect_Teleport");
  }
  return;
}



// FUNCTION 143c4b2b6 FUN_143c4b2b6 body=57 status=ok
// SIG undefined FUN_143c4b2b6(void)

void FUN_143c4b2b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aea0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aea0 = FUN_140002ddd(FUN_1464cd2d4,uVar1,L"GbxBrainAspectSettings_Trick");
  }
  return;
}



// FUNCTION 143c4b2fe FUN_143c4b2fe body=166 status=ok
// SIG undefined FUN_143c4b2fe(void)

void FUN_143c4b2fe(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xf8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *param_2 = &PTR_FUN_14b0d18d0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf1) = 0;
  return;
}



// FUNCTION 143c4b3a4 FUN_143c4b3a4 body=57 status=ok
// SIG undefined FUN_143c4b3a4(void)

void FUN_143c4b3a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aeb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aeb8 = FUN_140002ddd(FUN_1464cd32f,uVar1,L"GbxBrainAspect_Trick");
  }
  return;
}



// FUNCTION 143c4b3ec FUN_143c4b3ec body=57 status=ok
// SIG undefined FUN_143c4b3ec(void)

void FUN_143c4b3ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aed0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aed0 = FUN_140002ddd(FUN_1464cd389,uVar1,L"GbxBrainAspectSettings_UsePerch");
  }
  return;
}


