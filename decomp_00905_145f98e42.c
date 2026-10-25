// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f98e42 FUN_145f98e42 body=68 status=ok
// SIG undefined FUN_145f98e42(void)

void FUN_145f98e42(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1415a970a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145f98e86 FUN_145f98e86 body=84 status=ok
// SIG undefined FUN_145f98e86(void)

void FUN_145f98e86(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_145f98edc(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f98edc FUN_145f98edc body=84 status=ok
// SIG undefined FUN_145f98edc(void)

void FUN_145f98edc(undefined8 *param_1,longlong param_2)

{
  FUN_140e4f2da(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140e3860a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x3c,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 145f98f38 FUN_145f98f38 body=442 status=ok
// SIG undefined FUN_145f98f38(void)

undefined8 * FUN_145f98f38(undefined8 *param_1)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b7539f0;
  FUN_1446ddc76(local_70,"Transient.MainMissionComplete",1);
  FUN_1446dcdd4(&local_68,local_70);
  FUN_1409c5062(param_1 + 4,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(local_70,"Transient.EndgameUnlocked",1);
  FUN_1446dcdd4(&local_68,local_70);
  FUN_1409c5062(param_1 + 0xb,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  FUN_14052b5e0(&local_68,"Script_EligibleForTrueBoss",0);
  param_1[0x20] = CONCAT44(uStack_64,local_68);
  *(undefined4 *)(param_1 + 0x21) = uStack_60;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x28] = 0xc10448a5f3ad5bee;
  param_1[0x29] = 0xc10bb515c9656ef0;
  param_1[0x2a] = 0x40c44b0003cd141a;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f990f4 FUN_145f990f4 body=206 status=ok
// SIG undefined FUN_145f990f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f990f4(void)

{
  if ((DAT_14ca8564f & 2) == 0) {
    DAT_14ca8564f = DAT_14ca8564f | 2;
    _DAT_14ca855f0 = L"FBinkDrawVS";
    _DAT_14ca85608 = FUN_146826540;
    _DAT_14ca85610 = FUN_146825d77;
    _DAT_14ca85618 = FUN_146825fd6;
    _DAT_14ca85620 = FUN_1407e02ea;
    _DAT_14ca85628 = FUN_146826273;
    _DAT_14ca85600 = FUN_147414fd2;
    _DAT_14ca85640 = 0xffffffff000000e0;
    _DAT_14ca85648 = 8;
    DAT_14ca8564c = 0;
    _DAT_14ca85630 = &LAB_147414ffe;
    FUN_145f991c2();
    FUN_1407e00cc(&DAT_14ca855e8);
  }
  return &DAT_14ca855e8;
}



// FUNCTION 145f991c2 FUN_145f991c2 body=133 status=ok
// SIG undefined FUN_145f991c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f991c2(void)

{
  _DAT_14ca91dc8 = L"BASE";
  DAT_14ca91df2 = 4;
  FUN_140b35ae4();
  _DAT_14ca91dd8 = DAT_14ca855f8;
  _DAT_14ca91dd0 = &DAT_14ca8c6c8;
  _DAT_14ca91de0 = &LAB_14682652b;
  DAT_14ca855f8 = &DAT_14ca91dc8;
  DAT_14ca8564d = DAT_14ca8564d + '\x01';
  _DAT_14ca91de8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8564e = DAT_14ca8564e + '\x01';
  }
  return;
}



// FUNCTION 145f99248 FUN_145f99248 body=232 status=ok
// SIG undefined FUN_145f99248(void)

longlong * FUN_145f99248(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_145d2c926;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f99336 FUN_145f99336 body=206 status=ok
// SIG undefined FUN_145f99336(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f99336(void)

{
  if ((DAT_14ca85777 & 2) == 0) {
    DAT_14ca85777 = DAT_14ca85777 | 2;
    _DAT_14ca85718 = L"FBinkDrawYCbCrPS";
    _DAT_14ca85730 = FUN_146826540;
    _DAT_14ca85738 = FUN_146825d77;
    _DAT_14ca85740 = FUN_146825fd6;
    _DAT_14ca85748 = FUN_1407e02ea;
    _DAT_14ca85750 = FUN_146826273;
    _DAT_14ca85728 = FUN_1474150ee;
    _DAT_14ca85768 = 0xffffffff000000e0;
    _DAT_14ca85770 = 8;
    DAT_14ca85774 = 0;
    _DAT_14ca85758 = &LAB_14741511a;
    FUN_145f99404();
    FUN_1407e00cc(&DAT_14ca85710);
  }
  return &DAT_14ca85710;
}



// FUNCTION 145f99404 FUN_145f99404 body=133 status=ok
// SIG undefined FUN_145f99404(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f99404(void)

{
  _DAT_14ca91df8 = L"BASE";
  DAT_14ca91e22 = 4;
  FUN_140b35ae4();
  _DAT_14ca91e08 = DAT_14ca85720;
  _DAT_14ca91e00 = &DAT_14ca8c6c8;
  _DAT_14ca91e10 = &LAB_14682652b;
  DAT_14ca85720 = &DAT_14ca91df8;
  DAT_14ca85775 = DAT_14ca85775 + '\x01';
  _DAT_14ca91e18 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca85776 = DAT_14ca85776 + '\x01';
  }
  return;
}



// FUNCTION 145f9948a FUN_145f9948a body=232 status=ok
// SIG undefined FUN_145f9948a(void)

longlong * FUN_145f9948a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14631c476;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f99578 FUN_145f99578 body=292 status=ok
// SIG undefined FUN_145f99578(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f99578(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8c9f0) {
    FUN_144b3d300(&DAT_14ca8c9f0);
    if (DAT_14ca8c9f0 == -1) {
      FUN_145f997f0();
      FUN_145f9969c();
      FUN_140db5666(&DAT_14ca8c948,0,&DAT_14ca8c8e0,L"FGPUDebugCrashUtilsCS",
                    L"/Engine/Private/Tools/GPUDebugCrashUtils.usf",L"MainCS",5,8,FUN_14741cd1a,
                    FUN_14741ccba,&LAB_1431f5fb4,&LAB_14741ccb6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca91888);
      _DAT_14ca8c948 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f5fb7);
      _Init_thread_footer(&DAT_14ca8c9f0);
    }
  }
  return &DAT_14ca8c948;
}



// FUNCTION 145f9969c FUN_145f9969c body=205 status=ok
// SIG undefined FUN_145f9969c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9969c(void)

{
  if ((DAT_14ca8c947 & 2) == 0) {
    DAT_14ca8c947 = DAT_14ca8c947 | 2;
    _DAT_14ca8c8e8 = L"FGPUDebugCrashUtilsCS";
    _DAT_14ca8c900 = FUN_146826540;
    _DAT_14ca8c908 = FUN_146825d77;
    _DAT_14ca8c910 = FUN_146825fd6;
    _DAT_14ca8c918 = FUN_1407e02ea;
    _DAT_14ca8c920 = FUN_146826273;
    _DAT_14ca8c8f8 = FUN_14741cc86;
    _DAT_14ca8c938 = 0xffffffff000000e0;
    _DAT_14ca8c940 = 8;
    DAT_14ca8c944 = 0;
    _DAT_14ca8c928 = &LAB_14741ccb2;
    FUN_145f9976a();
    FUN_1407e00cc(&DAT_14ca8c8e0);
    return;
  }
  return;
}



// FUNCTION 145f9976a FUN_145f9976a body=133 status=ok
// SIG undefined FUN_145f9976a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9976a(void)

{
  _DAT_14ca944b8 = L"BASE";
  DAT_14ca944e2 = 4;
  FUN_140b35ae4();
  _DAT_14ca944c8 = DAT_14ca8c8f0;
  _DAT_14ca944c0 = &DAT_14ca8c6c8;
  _DAT_14ca944d0 = &LAB_14682652b;
  DAT_14ca8c8f0 = &DAT_14ca944b8;
  DAT_14ca8c945 = DAT_14ca8c945 + '\x01';
  _DAT_14ca944d8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8c946 = DAT_14ca8c946 + '\x01';
  }
  return;
}



// FUNCTION 145f997f0 FUN_145f997f0 body=261 status=ok
// SIG undefined FUN_145f997f0(void)

void FUN_145f997f0(void)

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
              0x110) < DAT_14ca91908) {
    FUN_144b3d300(&DAT_14ca91908);
    if (DAT_14ca91908 == -1) {
      FUN_145f998f6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca91888,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f90eb);
      _Init_thread_footer(&DAT_14ca91908);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f998f6 FUN_145f998f6 body=232 status=ok
// SIG undefined FUN_145f998f6(void)

longlong * FUN_145f998f6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14631c828;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f999e4 FUN_145f999e4 body=205 status=ok
// SIG undefined FUN_145f999e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f999e4(void)

{
  if ((DAT_14c9fc14f & 2) == 0) {
    DAT_14c9fc14f = DAT_14c9fc14f | 2;
    _DAT_14c9fc0f0 = L"FScreenProbeFilterGatherTracesCS";
    _DAT_14c9fc108 = FUN_146826540;
    _DAT_14c9fc110 = FUN_146825d77;
    _DAT_14c9fc118 = FUN_146825fd6;
    _DAT_14c9fc120 = FUN_1407e02ea;
    _DAT_14c9fc128 = FUN_146826273;
    _DAT_14c9fc100 = FUN_1472085ec;
    _DAT_14c9fc140 = 0xffffffff000000e0;
    _DAT_14c9fc148 = 8;
    DAT_14c9fc14c = 0;
    _DAT_14c9fc130 = &LAB_147208616;
    FUN_145f99ab2();
    FUN_1407e00cc(&DAT_14c9fc0e8);
    return;
  }
  return;
}



// FUNCTION 145f99ab2 FUN_145f99ab2 body=123 status=ok
// SIG undefined FUN_145f99ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f99ab2(void)

{
  _DAT_14ca00468 = L"BASE";
  DAT_14ca00492 = 4;
  _DAT_14ca00470 = FUN_140b35ae4();
  _DAT_14ca00478 = DAT_14c9fc0f8;
  _DAT_14ca00480 = &LAB_14682652b;
  DAT_14c9fc0f8 = &DAT_14ca00468;
  DAT_14c9fc14d = DAT_14c9fc14d + '\x01';
  _DAT_14ca00488 = 0x100000000;
  if (*(char *)(_DAT_14ca00470 + 100) != '\0') {
    DAT_14c9fc14e = DAT_14c9fc14e + '\x01';
  }
  return;
}



// FUNCTION 145f99b2e FUN_145f99b2e body=226 status=ok
// SIG undefined FUN_145f99b2e(void)

longlong * FUN_145f99b2e(longlong *param_1)

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
  pcVar13 = FUN_1462e5522;
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



// FUNCTION 145f99c12 FUN_145f99c12 body=138 status=ok
// SIG undefined FUN_145f99c12(void)

code * FUN_145f99c12(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpatialFilterHalfKernelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e55b0;
}



// FUNCTION 145f99c9c FUN_145f99c9c body=138 status=ok
// SIG undefined FUN_145f99c9c(void)

code * FUN_145f99c9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeMoving";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14721702c;
}



// FUNCTION 145f99d26 FUN_145f99d26 body=144 status=ok
// SIG undefined FUN_145f99d26(void)

code * FUN_145f99d26(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147216f18;
}



// FUNCTION 145f99db6 FUN_145f99db6 body=261 status=ok
// SIG undefined FUN_145f99db6(void)

void FUN_145f99db6(void)

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
              0x110) < DAT_14ca55930) {
    FUN_144b3d300(&DAT_14ca55930);
    if (DAT_14ca55930 == -1) {
      FUN_1415a9eca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCommonScreenSpaceRayParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x21;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca558b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d745);
      _Init_thread_footer(&DAT_14ca55930);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f99ebc FUN_145f99ebc body=138 status=ok
// SIG undefined FUN_145f99ebc(void)

code * FUN_145f99ebc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f4f86;
}



// FUNCTION 145f99f46 FUN_145f99f46 body=138 status=ok
// SIG undefined FUN_145f99f46(void)

code * FUN_145f99f46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRejectUncertainRays";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd40000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f5124;
}



// FUNCTION 145f99fd0 FUN_145f99fd0 body=138 status=ok
// SIG undefined FUN_145f99fd0(void)

code * FUN_145f99fd0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FullResPixelOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f51ae;
}



// FUNCTION 145f9a05a FUN_145f9a05a body=96 status=ok
// SIG undefined FUN_145f9a05a(void)

void FUN_145f9a05a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 145f9a0c6 FUN_145f9a0c6 body=163 status=ok
// SIG undefined FUN_145f9a0c6(void)

undefined8 * FUN_145f9a0c6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a68ec80;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebe58) {
    FUN_144b3d300(&DAT_14caebe58);
    if (DAT_14caebe58 == -1) {
      FUN_1415aa030();
      atexit(FUN_14356f25e);
      _Init_thread_footer(&DAT_14caebe58);
    }
  }
  return param_1;
}



// FUNCTION 145f9a169 FUN_145f9a169 body=107 status=ok
// SIG undefined FUN_145f9a169(void)

void FUN_145f9a169(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145f9a1d6(&local_30);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_30,param_1 + 0x18);
  FUN_1400020a8(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9a1d6 FUN_145f9a1d6 body=118 status=ok
// SIG undefined FUN_145f9a1d6(void)

undefined8 * FUN_145f9a1d6(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967808) {
    FUN_144b3d300(&DAT_14c967808);
    if (DAT_14c967808 == -1) {
      FUN_1446f470e(&DAT_14c967800,L"ConsoleCommandExecutor",1);
      _Init_thread_footer(&DAT_14c967808);
    }
  }
  *param_1 = DAT_14c967800;
  return param_1;
}



// FUNCTION 145f9a24c FUN_145f9a24c body=44 status=ok
// SIG undefined FUN_145f9a24c(void)

void FUN_145f9a24c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x10,0x10);
  FUN_145f9a278(uVar1);
  DAT_14cb0e288 = uVar1;
  return;
}



// FUNCTION 145f9a278 FUN_145f9a278 body=182 status=ok
// SIG undefined FUN_145f9a278(void)

undefined8 * FUN_145f9a278(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14c98e618 == 0) {
    return param_1;
  }
  lVar4 = *(longlong *)(DAT_14c98e618 + 0x20);
  if (lVar4 == 0) {
    return param_1;
  }
  uVar5 = *(undefined8 *)(lVar4 + 8);
  plVar6 = *(longlong **)(lVar4 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    *param_1 = uVar5;
    return param_1;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  plVar7 = (longlong *)param_1[1];
  *param_1 = uVar5;
  if (plVar6 == plVar7) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_145f9a2c7;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar7 = plVar6;
  }
  else {
    param_1[1] = plVar6;
    if (plVar7 == (longlong *)0x0) goto LAB_145f9a2c7;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145f9a2c7;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_145f9a2c7:
  LOCK();
  plVar7 = plVar6 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}



// FUNCTION 145f9a32e FUN_145f9a32e body=124 status=ok
// SIG undefined FUN_145f9a32e(void)

void FUN_145f9a32e(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9a3ac FUN_145f9a3ac body=101 status=ok
// SIG undefined FUN_145f9a3ac(void)

void FUN_145f9a3ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b527eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 145f9a41a FUN_145f9a41a body=218 status=ok
// SIG undefined FUN_145f9a41a(void)

undefined8 * FUN_145f9a41a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140e51bee(param_1,uVar1);
  *param_1 = &PTR_FUN_14b77cb70;
  param_1[0x72] = &PTR_FUN_14b77d240;
  param_1[0x73] = &PTR_FUN_14b77d2c0;
  param_1[0x74] = &PTR_FUN_14b77d330;
  param_1[0x75] = &PTR_FUN_14b77d358;
  param_1[0x76] = &PTR_FUN_14b77d370;
  param_1[0xa4] = &PTR_FUN_14b77d3a0;
  param_1[0xa5] = &PTR_FUN_14b77d3f0;
  param_1[0xa6] = &PTR_FUN_14b77d420;
  param_1[0xa7] = &PTR_FUN_14b77d450;
  param_1[0xa8] = &PTR_FUN_14b77d468;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x10;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfb;
  return param_1;
}



// FUNCTION 145f9a4f4 FUN_145f9a4f4 body=34 status=ok
// SIG undefined FUN_145f9a4f4(void)

void FUN_145f9a4f4(undefined8 param_1)

{
  FUN_145f9a56a();
  FUN_14596bb78(param_1);
  FUN_145f9a516(param_1);
  return;
}



// FUNCTION 145f9a516 FUN_145f9a516 body=84 status=ok
// SIG undefined FUN_145f9a516(void)

void FUN_145f9a516(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  
  FUN_145a50288(param_1,0);
  FUN_14117ff6e(param_1);
  FUN_14117f62e(param_1);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  cVar3 = FUN_144729dda(puVar1);
  if (cVar3 != '\0') {
    lVar2 = FUN_14479d2ce(puVar1);
    FUN_140457ffc(lVar2 + 0x2a8,param_1);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145f9a56a FUN_145f9a56a body=333 status=ok
// SIG undefined FUN_145f9a56a(void)

void FUN_145f9a56a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_140d80c3e();
  lVar5 = FUN_140149a73(uVar4,0);
  if (lVar5 != 0) {
    plVar6 = (longlong *)FUN_140b75e6e(lVar5);
    if (plVar6 != (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x168);
      lVar5 = param_1 + 0x178;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      uStack_38 = 0;
      uStack_48 = lVar5;
      if (*(int *)(param_1 + 400) == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_50);
        iVar7 = *(int *)(param_1 + 400);
      }
      uStack_58 = CONCAT44(uStack_34,uStack_38);
      local_60 = local_40;
      uVar4 = local_60;
      local_70 = (undefined4)local_50;
      uStack_6c = local_50._4_4_;
      uStack_68 = (undefined4)uStack_48;
      uStack_64 = uStack_48._4_4_;
      local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      iVar3 = local_60._4_4_;
      local_78 = plVar1;
      if ((local_60._4_4_ != iVar7) || (local_60 = uVar4, uStack_48 != lVar5)) {
        do {
          local_60 = uVar4;
          lVar2 = *(longlong *)(*local_78 + (longlong)iVar3 * 0x18);
          if (lVar2 != 0) {
            (**(code **)(*plVar6 + 0x30))
                      (plVar6,lVar2 + 0x90,*(undefined8 *)(*local_78 + (longlong)iVar3 * 0x18 + 8));
          }
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar3 = local_60._4_4_;
          uVar4 = local_60;
        } while (local_78 != plVar1 ||
                 (CONCAT44(uStack_64,uStack_68) != lVar5 || local_60._4_4_ != iVar7));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9a6b8 FUN_145f9a6b8 body=52 status=ok
// SIG undefined FUN_145f9a6b8(void)

void FUN_145f9a6b8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x5f0);
  memset(_Dst,0,0x5f0);
  FUN_145f9a6ec(_Dst);
  return;
}



// FUNCTION 145f9a6ec FUN_145f9a6ec body=400 status=ok
// SIG undefined FUN_145f9a6ec(void)

undefined8 * FUN_145f9a6ec(undefined8 *param_1)

{
  FUN_1458da1f2();
  *param_1 = &PTR_FUN_14b9ca4b0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9d] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9e] = 0xf;
  *(undefined2 *)(param_1 + 0x9f) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa2] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  param_1[0xb2] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5db) = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5df) = 1;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  return param_1;
}



// FUNCTION 145f9a87c FUN_145f9a87c body=471 status=ok
// SIG undefined FUN_145f9a87c(void)

void FUN_145f9a87c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) &&
        (*(longlong *)(lVar4 + 0x1f0) != 0)) && (*(longlong *)(lVar4 + 0x178) != 0)) {
      lVar5 = FUN_14030d660();
      lVar4 = *(longlong *)(lVar4 + 0x178);
      if ((((lVar4 != 0) && (lVar5 != 0)) &&
          ((lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0 &&
           ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)))))) && (lVar4 = *(longlong *)(lVar4 + 0x488), lVar4 != 0)) {
        lVar5 = FUN_144a7b4ca();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          local_40 = 0;
          FUN_14485c47a(&local_40,param_1);
          uVar2 = local_40;
          local_48 = local_40;
          if (*(char *)(lVar4 + 0xf40) == '\0') {
            local_38 = (undefined8 *)0x0;
            local_30 = 0;
            FUN_1446efa72(&local_38,0,3,0x10);
            puVar3 = local_38;
            local_30 = 3;
            *local_38 = &PTR_LAB_14b9de4e0;
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 1;
            lVar4 = DAT_14c758608 + 1;
            if (lVar5 == 0) {
              LOCK();
              UNLOCK();
              lVar5 = DAT_14c758608 + 2;
              lVar4 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar4;
            local_38[2] = lVar5;
            *local_38 = &PTR_FUN_14b9de470;
            local_38[3] = 0;
            FUN_14485c47a(local_38 + 3,param_1);
            puVar3[4] = uVar2;
            FUN_148f112a8(local_50,&local_38);
            FUN_1449db362(&local_38);
          }
          else {
            FUN_1415aa146(&local_48);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9aa54 FUN_145f9aa54 body=206 status=ok
// SIG undefined FUN_145f9aa54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f9aa54(void)

{
  if ((DAT_14ca8589f & 2) == 0) {
    DAT_14ca8589f = DAT_14ca8589f | 2;
    _DAT_14ca85840 = L"FBinkDrawICtCpPS";
    _DAT_14ca85858 = FUN_146826540;
    _DAT_14ca85860 = FUN_146825d77;
    _DAT_14ca85868 = FUN_146825fd6;
    _DAT_14ca85870 = FUN_1407e02ea;
    _DAT_14ca85878 = FUN_146826273;
    _DAT_14ca85850 = FUN_14741520a;
    _DAT_14ca85890 = 0xffffffff000000e0;
    _DAT_14ca85898 = 8;
    DAT_14ca8589c = 0;
    _DAT_14ca85880 = &LAB_147415236;
    FUN_145f9ab22();
    FUN_1407e00cc(&DAT_14ca85838);
  }
  return &DAT_14ca85838;
}



// FUNCTION 145f9ab22 FUN_145f9ab22 body=133 status=ok
// SIG undefined FUN_145f9ab22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9ab22(void)

{
  _DAT_14ca91e28 = L"BASE";
  DAT_14ca91e52 = 4;
  FUN_140b35ae4();
  _DAT_14ca91e38 = DAT_14ca85848;
  _DAT_14ca91e30 = &DAT_14ca8c6c8;
  _DAT_14ca91e40 = &LAB_14682652b;
  DAT_14ca85848 = &DAT_14ca91e28;
  DAT_14ca8589d = DAT_14ca8589d + '\x01';
  _DAT_14ca91e48 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8589e = DAT_14ca8589e + '\x01';
  }
  return;
}



// FUNCTION 145f9aba8 FUN_145f9aba8 body=268 status=ok
// SIG undefined FUN_145f9aba8(void)

undefined * FUN_145f9aba8(void)

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
              0x110) < DAT_14ca910b8) {
    FUN_144b3d300(&DAT_14ca910b8);
    if (DAT_14ca910b8 == -1) {
      FUN_145f9acb6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x70;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca91038,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f8776);
      _Init_thread_footer(&DAT_14ca910b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca91038;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9acb6 FUN_145f9acb6 body=232 status=ok
// SIG undefined FUN_145f9acb6(void)

longlong * FUN_145f9acb6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14631c4fe;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f9ada4 FUN_145f9ada4 body=138 status=ok
// SIG undefined FUN_145f9ada4(void)

undefined1 * FUN_145f9ada4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x57a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14725a104;
}



// FUNCTION 145f9ae2e FUN_145f9ae2e body=138 status=ok
// SIG undefined FUN_145f9ae2e(void)

code * FUN_145f9ae2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurrentIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000594;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f209c;
}



// FUNCTION 145f9aeb8 FUN_145f9aeb8 body=144 status=ok
// SIG undefined FUN_145f9aeb8(void)

code * FUN_145f9aeb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448cb8bc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"NaniteRaster";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNaniteRasterUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000057b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f9ada4;
}



// FUNCTION 145f9af48 FUN_145f9af48 body=226 status=ok
// SIG undefined FUN_145f9af48(void)

longlong * FUN_145f9af48(longlong *param_1)

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
  pcVar13 = FUN_145ff2378;
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



// FUNCTION 145f9b02c FUN_145f9b02c body=132 status=ok
// SIG undefined FUN_145f9b02c(void)

undefined1 * FUN_145f9b02c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingBinArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14726c02a;
}



// FUNCTION 145f9b0b0 FUN_145f9b0b0 body=144 status=ok
// SIG undefined FUN_145f9b0b0(void)

code * FUN_145f9b0b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1448cb8bc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteRaster";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FNaniteRasterUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca1a220;
  return FUN_145f9b140;
}



// FUNCTION 145f9b140 FUN_145f9b140 body=144 status=ok
// SIG undefined FUN_145f9b140(void)

code * FUN_145f9b140(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000001a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f4d72;
}



// FUNCTION 145f9b1d0 FUN_145f9b1d0 body=84 status=ok
// SIG undefined FUN_145f9b1d0(void)

void FUN_145f9b1d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_145f9b226(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9b226 FUN_145f9b226 body=85 status=ok
// SIG undefined FUN_145f9b226(void)

void FUN_145f9b226(undefined8 *param_1,longlong param_2)

{
  FUN_141286b5e(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140e3860a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x54,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 145f9b27c FUN_145f9b27c body=25 status=ok
// SIG undefined FUN_145f9b27c(void)

undefined8 FUN_145f9b27c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145f9b296 FUN_145f9b296 body=144 status=ok
// SIG undefined FUN_145f9b296(void)

void FUN_145f9b296(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x168);
  local_20 = *(undefined8 *)*param_2;
  local_18 = (longlong *)((undefined8 *)*param_2)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_145c2c8f2(lVar3 + 0x578,&local_20);
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9b328 FUN_145f9b328 body=164 status=ok
// SIG undefined FUN_145f9b328(void)

bool FUN_145f9b328(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9b3d4 FUN_145f9b3d4 body=290 status=ok
// SIG undefined FUN_145f9b3d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f9b3d4(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89938) {
    FUN_144b3d300(&DAT_14ca89938);
    if (DAT_14ca89938 == -1) {
      uVar1 = FUN_145f9b64a();
      FUN_145f9b4f6();
      FUN_140db5666(&DAT_14ca89890,0,&DAT_14ca89828,L"FImagePreTransformVS",
                    L"/Engine/Private/Tools/FullscreenVertexShader.usf",L"MainForPreTransform",0,1,
                    FUN_147419934,FUN_1474198da,&LAB_1474198aa,&LAB_1474198a6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca89890 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f21f0);
      _Init_thread_footer(&DAT_14ca89938);
    }
  }
  return &DAT_14ca89890;
}



// FUNCTION 145f9b4f6 FUN_145f9b4f6 body=206 status=ok
// SIG undefined FUN_145f9b4f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f9b4f6(void)

{
  if ((DAT_14ca8988f & 2) == 0) {
    DAT_14ca8988f = DAT_14ca8988f | 2;
    _DAT_14ca89830 = L"FImagePreTransformVS";
    _DAT_14ca89848 = FUN_146826540;
    _DAT_14ca89850 = FUN_146825d77;
    _DAT_14ca89858 = FUN_146825fd6;
    _DAT_14ca89860 = FUN_1407e02ea;
    _DAT_14ca89868 = FUN_146826273;
    _DAT_14ca89840 = FUN_147419876;
    _DAT_14ca89880 = 0xffffffff000000e0;
    _DAT_14ca89888 = 8;
    DAT_14ca8988c = 0;
    _DAT_14ca89870 = &LAB_1474198a2;
    FUN_145f9b5c4();
    FUN_1407e00cc(&DAT_14ca89828);
  }
  return &DAT_14ca89828;
}



// FUNCTION 145f9b5c4 FUN_145f9b5c4 body=133 status=ok
// SIG undefined FUN_145f9b5c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9b5c4(void)

{
  _DAT_14ca93d40 = L"BASE";
  DAT_14ca93d6a = 4;
  FUN_140b35ae4();
  _DAT_14ca93d50 = DAT_14ca89838;
  _DAT_14ca93d48 = &DAT_14ca8c6c8;
  _DAT_14ca93d58 = &LAB_14682652b;
  DAT_14ca89838 = &DAT_14ca93d40;
  DAT_14ca8988d = DAT_14ca8988d + '\x01';
  _DAT_14ca93d60 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8988e = DAT_14ca8988e + '\x01';
  }
  return;
}



// FUNCTION 145f9b64a FUN_145f9b64a body=268 status=ok
// SIG undefined FUN_145f9b64a(void)

undefined * FUN_145f9b64a(void)

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
              0x110) < DAT_14ca78dc0) {
    FUN_144b3d300(&DAT_14ca78dc0);
    if (DAT_14ca78dc0 == -1) {
      FUN_145f9b758(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xc2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca78d40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431c0c38);
      _Init_thread_footer(&DAT_14ca78dc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca78d40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9b758 FUN_145f9b758 body=232 status=ok
// SIG undefined FUN_145f9b758(void)

longlong * FUN_145f9b758(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14631a864;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f9b850 FUN_145f9b850 body=216 status=ok
// SIG undefined FUN_145f9b850(void)

undefined8 * FUN_145f9b850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d4ee0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x19] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x17] = DAT_14c8464e0;
  param_1[0x18] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x1a] = DAT_14c8464e0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = DAT_14c8464f0;
  param_1[0x1d] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x15 | 0xc2;
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 4;
  return param_1;
}



// FUNCTION 145f9b934 FUN_145f9b934 body=215 status=ok
// SIG undefined FUN_145f9b934(void)

undefined8 * FUN_145f9b934(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf61f0;
  param_1[5] = &PTR_FUN_14abf6510;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  FUN_1400b22c2(&local_28,"GameplayTask Base");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffff9 | 4;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9ba1e FUN_145f9ba1e body=219 status=ok
// SIG undefined FUN_145f9ba1e(void)

undefined8 * FUN_145f9ba1e(undefined8 *param_1)

{
  FUN_14589b202();
  *param_1 = &PTR_FUN_14bd721f0;
  param_1[5] = &PTR_FUN_14bd725b0;
  param_1[0x13] = &PTR_FUN_14bd725d0;
  param_1[0x17] = &PTR_FUN_14bd72600;
  param_1[0x18] = &PTR_FUN_14bd72610;
  param_1[0x35] = &PTR_FUN_14bd72628;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x341) = 1;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x3f800000;
  param_1[0x75] = 0;
  param_1[0x76] = &DAT_3f8000003f800000;
  param_1[0x77] = 0x3f0000003f000000;
  param_1[0x78] = 0x3f8000003f000000;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  return param_1;
}



// FUNCTION 145f9bafa FUN_145f9bafa body=177 status=ok
// SIG undefined FUN_145f9bafa(void)

undefined4 FUN_145f9bafa(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar3 = (**(code **)(*param_1 + 0x6e8))();
  if ((char)uVar3 != '\0') {
    iVar1 = (int)param_1[0x84];
    *(uint *)(param_1 + 0x84) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x424) < iVar1 + 1U) {
      FUN_145f9bbcc(param_1 + 0x83,iVar1);
    }
    lVar2 = param_1[0x83];
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
    FUN_14096c7c0(lVar2 + lVar5,param_3);
    plVar4 = (longlong *)FUN_14093f908(param_1);
    if (plVar4[0xb1] == 0) {
      (**(code **)(*plVar4 + 0x690))(plVar4,*(undefined8 *)(param_2 + 0x398));
    }
  }
  FUN_1449db362(param_3);
  return uVar3;
}



// FUNCTION 145f9bbac FUN_145f9bbac body=32 status=ok
// SIG undefined FUN_145f9bbac(void)

bool FUN_145f9bbac(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((*(byte *)(param_1 + 0x410) & 4) == 0) {
    iVar1 = FUN_14487fd02();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 145f9bbcc FUN_145f9bbcc body=132 status=ok
// SIG undefined FUN_145f9bbcc(void)

void FUN_145f9bbcc(longlong param_1,int param_2)

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



// FUNCTION 145f9bc58 FUN_145f9bc58 body=447 status=ok
// SIG undefined FUN_145f9bc58(void)

undefined8 * FUN_145f9bc58(undefined8 *param_1)

{
  FUN_140bf9282();
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b804640;
  param_1[6] = &PTR_FUN_14b804900;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x200000000;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 2;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  FUN_144a6ccf8(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  return param_1;
}



// FUNCTION 145f9be18 FUN_145f9be18 body=60 status=ok
// SIG undefined FUN_145f9be18(void)

void FUN_145f9be18(longlong param_1)

{
  FUN_145f9be54();
  FUN_1415aa586(param_1 + 0x200,&DAT_14cbca3a0);
  if (*(char *)(param_1 + 0x4d9) == '\0') {
    return;
  }
  FUN_148d316be(param_1);
  return;
}



// FUNCTION 145f9be54 FUN_145f9be54 body=14 status=ok
// SIG undefined FUN_145f9be54(void)

void FUN_145f9be54(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  int iStack_48;
  undefined1 auStack_40 [16];
  ulonglong uStack_30;
  
  if (*(char *)(param_1 + 0x418) != '\x03') {
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  do {
    cVar2 = *(char *)(param_1 + 0x418);
    *(char *)(param_1 + 0x418) = cVar2 + '\x01';
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_30 ^ (ulonglong)auStack_88);
      }
      if (cVar2 == '\x03') {
        DAT_14c83bd06 = DAT_14c872bd8;
        DAT_14c872bd8 = 1;
        goto LAB_1415aa8c2;
      }
      if (cVar2 != '\x01') goto LAB_1415aa8c2;
      FUN_1457cd276(param_1,1,0);
      *(undefined1 *)(param_1 + 0x419) = 1;
      uVar7 = FUN_1401cb356();
      puStack_50 = (undefined8 *)0x0;
      iStack_48 = 0;
      FUN_1446efa72(&puStack_50,0,3,0x10);
      puVar5 = puStack_50;
      iStack_48 = 3;
      *puStack_50 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      puStack_50[2] = lVar8;
      *puStack_50 = &PTR_FUN_14b4035d0;
      puStack_50[3] = 0;
      iVar6 = 0;
      if (param_1 != 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
        *(uint *)(puStack_50 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar6 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar12 + 0x10);
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(lVar12 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar6;
      puVar5[4] = FUN_14030be2a;
      *(undefined4 *)(puVar5 + 5) = 0;
      uStack_68 = 0x3dcccccd;
      pwVar11 = L"UGbxGameInstance.DelayedGameExit.SavingProfiles";
      puVar10 = auStack_60;
      goto LAB_1415aa6f3;
    }
  } while (((*(longlong *)(param_1 + 0x30) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360) == 0)) ||
          (iVar6 = FUN_14490d72a(), iVar6 != 3));
  uVar7 = FUN_1401cb356();
  puStack_50 = (undefined8 *)0x0;
  iStack_48 = 0;
  FUN_1446efa72(&puStack_50,0,3,0x10);
  puVar5 = puStack_50;
  iStack_48 = 3;
  *puStack_50 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  puStack_50[2] = lVar8;
  *puStack_50 = &PTR_FUN_14b4035d0;
  puStack_50[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(puStack_50 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar6;
  puVar5[4] = FUN_14030be2a;
  *(undefined4 *)(puVar5 + 5) = 0;
  uStack_68 = 0x40000000;
  pwVar11 = L"UGbxGameInstance.DelayedGameExit.WaitingForReplication";
  puVar10 = auStack_40;
LAB_1415aa6f3:
  FUN_1405f67fc(uVar7,puVar10,&puStack_50,pwVar11);
  plVar4 = *(longlong **)(puVar10 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (iStack_48 != 0) {
    if (puStack_50 == (undefined8 *)0x0) goto LAB_1415aa8c2;
    (**(code **)*puStack_50)(puStack_50,0);
    FUN_1446efa72(&puStack_50,0,0,0x10);
    iStack_48 = 0;
  }
  if (puStack_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415aa8c2:
  if ((uStack_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f9be62 FUN_145f9be62 body=216 status=ok
// SIG undefined FUN_145f9be62(void)

undefined8 * FUN_145f9be62(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9bf48 FUN_145f9bf48 body=216 status=ok
// SIG undefined FUN_145f9bf48(void)

undefined8 * FUN_145f9bf48(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9c02e FUN_145f9c02e body=226 status=ok
// SIG undefined FUN_145f9c02e(void)

longlong * FUN_145f9c02e(longlong *param_1)

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
  pcVar13 = FUN_146312ba8;
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



// FUNCTION 145f9c112 FUN_145f9c112 body=138 status=ok
// SIG undefined FUN_145f9c112(void)

code * FUN_145f9c112(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InViews";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FPackedView >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000a8a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146312c30;
}



// FUNCTION 145f9c19c FUN_145f9c19c body=142 status=ok
// SIG undefined FUN_145f9c19c(void)

code * FUN_145f9c19c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1403d299a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShadowDepthPass";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FShadowDepthPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000a86;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146312cc0;
}



// FUNCTION 145f9c22a FUN_145f9c22a body=146 status=ok
// SIG undefined FUN_145f9c22a(void)

code * FUN_145f9c22a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000a87;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return FUN_145f9c19c;
}



// FUNCTION 145f9c2bc FUN_145f9c2bc body=278 status=ok
// SIG undefined FUN_145f9c2bc(void)

undefined * FUN_145f9c2bc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8dbc8) {
    FUN_144b3d300(&DAT_14ca8dbc8);
    if (DAT_14ca8dbc8 == -1) {
      FUN_145f9c3d4(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"NV21ConvertUB";
      local_78 = L"FNV21ConvertUB";
      local_50 = 0x70;
      local_58 = 0x12e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8db48,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7466);
      _Init_thread_footer(&DAT_14ca8dbc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8db48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9c3d4 FUN_145f9c3d4 body=226 status=ok
// SIG undefined FUN_145f9c3d4(void)

longlong * FUN_145f9c3d4(longlong *param_1)

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
  pcVar13 = FUN_14631cc5c;
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



// FUNCTION 145f9c4b8 FUN_145f9c4b8 body=132 status=ok
// SIG undefined FUN_145f9c4b8(void)

undefined1 * FUN_145f9c4b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147423c5c;
}



// FUNCTION 145f9c53c FUN_145f9c53c body=136 status=ok
// SIG undefined FUN_145f9c53c(void)

code * FUN_145f9c53c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000131;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423bd2;
}



// FUNCTION 145f9c5c4 FUN_145f9c5c4 body=138 status=ok
// SIG undefined FUN_145f9c5c4(void)

code * FUN_145f9c5c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000133;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423b48;
}



// FUNCTION 145f9c64e FUN_145f9c64e body=278 status=ok
// SIG undefined FUN_145f9c64e(void)

undefined * FUN_145f9c64e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e2c8) {
    FUN_144b3d300(&DAT_14ca8e2c8);
    if (DAT_14ca8e2c8 == -1) {
      FUN_145f9c766(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RGBConvertUB";
      local_78 = L"FRGBConvertUB";
      local_50 = 0x70;
      local_58 = 0x1cd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8e248,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f76ae);
      _Init_thread_footer(&DAT_14ca8e2c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8e248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9c766 FUN_145f9c766 body=226 status=ok
// SIG undefined FUN_145f9c766(void)

longlong * FUN_145f9c766(longlong *param_1)

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
  pcVar13 = FUN_14631cf04;
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



// FUNCTION 145f9c84a FUN_145f9c84a body=132 status=ok
// SIG undefined FUN_145f9c84a(void)

undefined1 * FUN_145f9c84a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14742471e;
}



// FUNCTION 145f9c8ce FUN_145f9c8ce body=136 status=ok
// SIG undefined FUN_145f9c8ce(void)

code * FUN_145f9c8ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9c84a;
}



// FUNCTION 145f9c956 FUN_145f9c956 body=138 status=ok
// SIG undefined FUN_145f9c956(void)

code * FUN_145f9c956(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000001d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742460a;
}



// FUNCTION 145f9c9e0 FUN_145f9c9e0 body=278 status=ok
// SIG undefined FUN_145f9c9e0(void)

undefined * FUN_145f9c9e0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e930) {
    FUN_144b3d300(&DAT_14ca8e930);
    if (DAT_14ca8e930 == -1) {
      FUN_145f9caf8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"UYVYConvertUB";
      local_78 = L"FUYVYConvertUB";
      local_50 = 0x60;
      local_58 = 0x234;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8e8b0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f78ea);
      _Init_thread_footer(&DAT_14ca8e930);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8e8b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9caf8 FUN_145f9caf8 body=226 status=ok
// SIG undefined FUN_145f9caf8(void)

longlong * FUN_145f9caf8(longlong *param_1)

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
  pcVar13 = FUN_14631d1ac;
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



// FUNCTION 145f9cbdc FUN_145f9cbdc body=132 status=ok
// SIG undefined FUN_145f9cbdc(void)

undefined1 * FUN_145f9cbdc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x235;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147424952;
}



// FUNCTION 145f9cc60 FUN_145f9cc60 body=136 status=ok
// SIG undefined FUN_145f9cc60(void)

code * FUN_145f9cc60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000236;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9cbdc;
}



// FUNCTION 145f9cce8 FUN_145f9cce8 body=138 status=ok
// SIG undefined FUN_145f9cce8(void)

code * FUN_145f9cce8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000239;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742483e;
}



// FUNCTION 145f9cd72 FUN_145f9cd72 body=278 status=ok
// SIG undefined FUN_145f9cd72(void)

undefined * FUN_145f9cd72(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8fe28) {
    FUN_144b3d300(&DAT_14ca8fe28);
    if (DAT_14ca8fe28 == -1) {
      FUN_145f9ce8a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"VYUConvertUB";
      local_78 = L"FVYUConvertUB";
      local_50 = 0xa0;
      local_58 = 0x3cb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8fda8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f80aa);
      _Init_thread_footer(&DAT_14ca8fe28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8fda8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9ce8a FUN_145f9ce8a body=226 status=ok
// SIG undefined FUN_145f9ce8a(void)

longlong * FUN_145f9ce8a(longlong *param_1)

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
  pcVar13 = FUN_14631dcce;
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



// FUNCTION 145f9cf6e FUN_145f9cf6e body=132 status=ok
// SIG undefined FUN_145f9cf6e(void)

undefined1 * FUN_145f9cf6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1474259f0;
}



// FUNCTION 145f9cff2 FUN_145f9cff2 body=136 status=ok
// SIG undefined FUN_145f9cff2(void)

code * FUN_145f9cff2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425966;
}



// FUNCTION 145f9d07a FUN_145f9d07a body=138 status=ok
// SIG undefined FUN_145f9d07a(void)

code * FUN_145f9d07a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x84000003cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9cff2;
}



// FUNCTION 145f9d110 FUN_145f9d110 body=216 status=ok
// SIG undefined FUN_145f9d110(void)

undefined8 * FUN_145f9d110(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a4d1460;
  *(undefined1 *)((longlong)param_1 + 0x32) = 2;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = FUN_145920956();
    if (local_18 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_18);
    }
    local_20 = param_1[2];
    if ((local_20 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9d1f4 FUN_145f9d1f4 body=216 status=ok
// SIG undefined FUN_145f9d1f4(void)

undefined8 * FUN_145f9d1f4(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"CollisionComp",1);
  uVar2 = FUN_1400b5618();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140e2e5d6(param_1,param_2);
  *param_1 = &PTR_FUN_14a76c7f0;
  plVar1 = (longlong *)param_1[0x72];
  *(undefined4 *)(plVar1 + 0xc5) = 0xff64ff64;
  plVar1[200] = 0x4220000042a00000;
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cb0be68,1);
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9d2ce FUN_145f9d2ce body=216 status=ok
// SIG undefined FUN_145f9d2ce(void)

undefined8 * FUN_145f9d2ce(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9d3b4 FUN_145f9d3b4 body=40 status=ok
// SIG undefined FUN_145f9d3b4(void)

void FUN_145f9d3b4(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    FUN_145f9d3dc(param_1);
    return;
  }
  return;
}



// FUNCTION 145f9d3dc FUN_145f9d3dc body=187 status=ok
// SIG undefined FUN_145f9d3dc(void)

void FUN_145f9d3dc(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_1e8 [32];
  undefined2 *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((*(byte *)(lVar3 + 0xd4) & 1) == 0) {
    for (; lVar1 = FUN_145b0ea4c(), lVar3 != lVar1; lVar3 = *(longlong *)(lVar3 + 0x40)) {
    }
    FUN_140d6a6b4(local_1b8);
    FUN_1400021e4(*(longlong *)(param_1 + 0x10) + 0xe8,&local_1c8);
    puVar2 = local_1c8;
    if (local_1c0 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_141628e80(local_1b8,puVar2);
    if (local_1c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140d6b5be(local_1b8);
  }
  if ((local_18 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f9d498 FUN_145f9d498 body=278 status=ok
// SIG undefined FUN_145f9d498(void)

undefined * FUN_145f9d498(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0e820) {
    FUN_144b3d300(&DAT_14cb0e820);
    if (DAT_14cb0e820 == -1) {
      FUN_145f9d5b0(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"VectorFieldVis";
      local_78 = L"FVectorFieldVisualizationParameters";
      local_50 = 0xa0;
      local_58 = 0x27;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb0e7a0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1437799bb);
      _Init_thread_footer(&DAT_14cb0e820);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb0e7a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9d5b0 FUN_145f9d5b0 body=226 status=ok
// SIG undefined FUN_145f9d5b0(void)

longlong * FUN_145f9d5b0(longlong *param_1)

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
  pcVar13 = FUN_14640c416;
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



// FUNCTION 145f9d694 FUN_145f9d694 body=130 status=ok
// SIG undefined FUN_145f9d694(void)

undefined1 * FUN_145f9d694(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeToWorldHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147d9e1ae;
}



// FUNCTION 145f9d716 FUN_145f9d716 body=138 status=ok
// SIG undefined FUN_145f9d716(void)

code * FUN_145f9d716(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RelativeVolumeToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9d694;
}



// FUNCTION 145f9d7a0 FUN_145f9d7a0 body=138 status=ok
// SIG undefined FUN_145f9d7a0(void)

code * FUN_145f9d7a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeToWorldNoScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9d716;
}



// FUNCTION 145f9d82a FUN_145f9d82a body=158 status=ok
// SIG undefined FUN_145f9d82a(void)

void FUN_145f9d82a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145f9d8ca(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9d8ca FUN_145f9d8ca body=19 status=ok
// SIG undefined FUN_145f9d8ca(void)

int FUN_145f9d8ca(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  longlong *plStack_28;
  ulonglong uStack_20;
  
  if (*(longlong *)(param_1 + 0x410) == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(*(longlong *)(param_1 + 0x410),&lStack_30);
  if (lStack_30 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == '\x01') {
    iVar3 = *(int *)(lStack_30 + 0x18c);
  }
  else if (param_2 == '\x02') {
    iVar3 = *(int *)(lStack_30 + 0x18c) + *(int *)(lStack_30 + 0x188);
  }
  else {
    iVar3 = *(int *)(lStack_30 + 0x188);
  }
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plStack_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9d8de FUN_145f9d8de body=163 status=ok
// SIG undefined FUN_145f9d8de(void)

int FUN_145f9d8de(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448c1924(param_1,&local_30);
  if (local_30 == 0) {
    iVar3 = 0;
  }
  else if (param_2 == '\x01') {
    iVar3 = *(int *)(local_30 + 0x18c);
  }
  else if (param_2 == '\x02') {
    iVar3 = *(int *)(local_30 + 0x18c) + *(int *)(local_30 + 0x188);
  }
  else {
    iVar3 = *(int *)(local_30 + 0x188);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9d982 FUN_145f9d982 body=103 status=ok
// SIG undefined FUN_145f9d982(void)

ulonglong FUN_145f9d982(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145f9d9cc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145f9d9cc;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145f9d9fc FUN_145f9d9fc body=217 status=ok
// SIG undefined FUN_145f9d9fc(void)

void FUN_145f9d9fc(longlong param_1,byte param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x3f0);
  iVar2 = (uint)param_2 * 3 + *(int *)(lVar3 + 0x3b0);
  if (-1 < iVar2) {
    if (*(int *)((longlong)param_3 + 0xc) < iVar2) {
      FUN_140c5c1ec(param_3,iVar2);
      lVar3 = *(longlong *)(param_1 + 0x3f0);
    }
    FUN_145f9dad6(param_3,lVar3 + 0x3a8);
    if (param_2 != 0) {
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447d05f2(param_3,iVar2);
      }
      *(longlong *)(*param_3 + (longlong)iVar2 * 8) = param_1;
      uVar1 = *(undefined8 *)(param_1 + 0x3f0);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447d05f2(param_3,iVar2);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = uVar1;
      uVar1 = *(undefined8 *)(param_1 + 1000);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447d05f2(param_3,iVar2);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = uVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 145f9dad6 FUN_145f9dad6 body=120 status=ok
// SIG undefined FUN_145f9dad6(void)

void FUN_145f9dad6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447d05f2(param_1,iVar2);
    }
    lVar3 = *param_1;
    lVar4 = *param_2;
    lVar5 = 0;
    do {
      *(undefined8 *)((longlong)iVar2 * 8 + lVar3 + lVar5 * 8) = *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (uVar1 != (uint)lVar5);
    return;
  }
  return;
}



// FUNCTION 145f9db4e FUN_145f9db4e body=216 status=ok
// SIG undefined FUN_145f9db4e(void)

undefined8 * FUN_145f9db4e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9dc34 FUN_145f9dc34 body=165 status=ok
// SIG undefined FUN_145f9dc34(void)

bool FUN_145f9dc34(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9dce0 FUN_145f9dce0 body=79 status=ok
// SIG undefined FUN_145f9dce0(void)

void FUN_145f9dce0(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar2 = 0;
    do {
      if ((*(int *)(lVar1 + lVar2) == param_3) && (*(char *)(lVar1 + 4 + lVar2) == param_4)) {
        *param_2 = *(undefined8 *)(lVar1 + 0x10 + lVar2);
        lVar1 = *(longlong *)(lVar1 + 0x18 + lVar2);
        param_2[1] = lVar1;
        if (lVar1 == 0) {
          return;
        }
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
        return;
      }
      lVar2 = lVar2 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x20 != lVar2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 145f9dd4a FUN_145f9dd4a body=203 status=ok
// SIG undefined FUN_145f9dd4a(void)

void FUN_145f9dd4a(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_145f9ddfb;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145f9ddfb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145f9de16 FUN_145f9de16 body=56 status=ok
// SIG undefined FUN_145f9de16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9de16(void)

{
  _DAT_14c873298 = 0;
  if (DAT_14c873290 != 0) {
    FUN_1400020a8();
  }
  FUN_145f9de4e();
                    /* WARNING: Could not recover jumptable at 0x000145f9de40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c873228);
  return;
}



// FUNCTION 145f9de4e FUN_145f9de4e body=54 status=ok
// SIG undefined FUN_145f9de4e(void)

void FUN_145f9de4e(void)

{
  FUN_145f9de84();
  if (DAT_14c873270 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c873250 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f9de84 FUN_145f9de84 body=346 status=ok
// SIG undefined FUN_145f9de84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9de84(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c873260;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c873278 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c873250;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14c873258 = 0;
  if (DAT_14c87325c != 0) {
    FUN_1446f4a44(&DAT_14c873250,0);
  }
  _DAT_14c873280 = 0xffffffff;
  DAT_14c873278 = 0;
  if (0x80 < DAT_14c87327c) {
    DAT_14c87327c = 0x80;
    FUN_1446efbd8(&DAT_14c873260,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9dfe0 FUN_145f9dfe0 body=278 status=ok
// SIG undefined FUN_145f9dfe0(void)

undefined * FUN_145f9dfe0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3ae50) {
    FUN_144b3d300(&DAT_14ca3ae50);
    if (DAT_14ca3ae50 == -1) {
      FUN_145f9e0f8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RaytracingLightFunctionParameters";
      local_78 = L"FLightFunctionParametersRayTracing";
      local_50 = 0x70;
      local_58 = 0x1aa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3add0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6a6dd);
      _Init_thread_footer(&DAT_14ca3ae50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca3add0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9e0f8 FUN_145f9e0f8 body=226 status=ok
// SIG undefined FUN_145f9e0f8(void)

longlong * FUN_145f9e0f8(longlong *param_1)

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
  pcVar13 = FUN_146302594;
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



// FUNCTION 145f9e1dc FUN_145f9e1dc body=132 status=ok
// SIG undefined FUN_145f9e1dc(void)

undefined1 * FUN_145f9e1dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionTranslatedWorldToLight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472be904;
}



// FUNCTION 145f9e260 FUN_145f9e260 body=138 status=ok
// SIG undefined FUN_145f9e260(void)

code * FUN_145f9e260(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9e1dc;
}



// FUNCTION 145f9e2ea FUN_145f9e2ea body=138 status=ok
// SIG undefined FUN_145f9e2ea(void)

code * FUN_145f9e2ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionParameters2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000001ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9e260;
}



// FUNCTION 145f9e374 FUN_145f9e374 body=278 status=ok
// SIG undefined FUN_145f9e374(void)

undefined * FUN_145f9e374(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e488) {
    FUN_144b3d300(&DAT_14ca8e488);
    if (DAT_14ca8e488 == -1) {
      FUN_145f9e48c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YCoCgConvertUB";
      local_78 = L"FYCoCgConvertUB";
      local_50 = 0x70;
      local_58 = 0x1ee;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8e408,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f77ba);
      _Init_thread_footer(&DAT_14ca8e488);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8e408;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9e48c FUN_145f9e48c body=226 status=ok
// SIG undefined FUN_145f9e48c(void)

longlong * FUN_145f9e48c(longlong *param_1)

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
  pcVar13 = FUN_14631cf8c;
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



// FUNCTION 145f9e570 FUN_145f9e570 body=132 status=ok
// SIG undefined FUN_145f9e570(void)

undefined1 * FUN_145f9e570(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1474247ac;
}



// FUNCTION 145f9e5f4 FUN_145f9e5f4 body=138 status=ok
// SIG undefined FUN_145f9e5f4(void)

code * FUN_145f9e5f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d014;
}



// FUNCTION 145f9e67e FUN_145f9e67e body=138 status=ok
// SIG undefined FUN_145f9e67e(void)

code * FUN_145f9e67e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9e5f4;
}



// FUNCTION 145f9e708 FUN_145f9e708 body=278 status=ok
// SIG undefined FUN_145f9e708(void)

undefined * FUN_145f9e708(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e648) {
    FUN_144b3d300(&DAT_14ca8e648);
    if (DAT_14ca8e648 == -1) {
      FUN_145f9e820(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YCbCrConvertUB";
      local_78 = L"FYCbCrConvertUB";
      local_50 = 0x70;
      local_58 = 0x20f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8e5c8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f78c6);
      _Init_thread_footer(&DAT_14ca8e648);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8e5c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9e820 FUN_145f9e820 body=226 status=ok
// SIG undefined FUN_145f9e820(void)

longlong * FUN_145f9e820(longlong *param_1)

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
  pcVar13 = FUN_14631d09c;
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



// FUNCTION 145f9e904 FUN_145f9e904 body=132 status=ok
// SIG undefined FUN_145f9e904(void)

undefined1 * FUN_145f9e904(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x210;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14742483a;
}



// FUNCTION 145f9e988 FUN_145f9e988 body=138 status=ok
// SIG undefined FUN_145f9e988(void)

code * FUN_145f9e988(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CbCrTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000213;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474247b0;
}



// FUNCTION 145f9ea12 FUN_145f9ea12 body=138 status=ok
// SIG undefined FUN_145f9ea12(void)

code * FUN_145f9ea12(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LumaSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000214;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9e988;
}



// FUNCTION 145f9eaa8 FUN_145f9eaa8 body=686 status=ok
// SIG undefined FUN_145f9eaa8(void)

undefined8 * FUN_145f9eaa8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad95440;
  param_1[5] = 0x4080000000000000;
  *(undefined4 *)(param_1 + 6) = 0x3c;
  param_1[7] = 0x800000008;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x3b] = 0x42b4000043480000;
  *(undefined4 *)(param_1 + 0x3c) = 0x44000000;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfc | 2;
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) | 1;
  FUN_1446ddc76(local_40,"DefaultOutput",1);
  local_58 = FUN_145a78eb8();
  local_48 = 0;
  local_50 = 1;
  lVar10 = FUN_140486aac(param_2,param_1);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  iVar4 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar4 + 1U) {
    FUN_145f9edfe(param_1 + 8,iVar4);
  }
  plVar1 = param_1 + 10;
  *(longlong *)(param_1[8] + (longlong)iVar4 * 8) = lVar10;
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  FUN_145f9ed58(plVar1);
  lVar10 = 0;
  lVar11 = 0;
  do {
    *(int *)(*plVar1 + lVar10) = (int)lVar11;
    lVar5 = *plVar1;
    if (*(int *)(lVar5 + lVar10) == 0) {
      *(undefined8 *)(lVar5 + 8 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0x10 + lVar10) = 0xc069000000000000;
      *(undefined8 *)(lVar5 + 0x18 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0x20 + lVar10) = 0x4066800000000000;
      *(undefined8 *)(lVar5 + 0x28 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0x30 + lVar10) = 0x4056800000000000;
    }
    else {
      lVar2 = lVar5 + lVar10;
      *(undefined8 *)(lVar2 + 0x18) = DAT_14c8464f0;
      uVar6 = DAT_14c8464e8;
      *(undefined8 *)(lVar2 + 8) = DAT_14c8464e0;
      *(undefined8 *)(lVar2 + 0x10) = uVar6;
      *(undefined8 *)(lVar2 + 0x30) = DAT_14c846508;
      uVar6 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      *(ulonglong *)(lVar2 + 0x20) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      *(undefined8 *)(lVar2 + 0x28) = uVar6;
    }
    *(undefined8 *)(lVar5 + 0x38 + lVar10) = 0x42b4000043480000;
    *(undefined4 *)(lVar5 + 0x40 + lVar10) = 0x44000000;
    *(undefined1 *)(lVar5 + 0x44 + lVar10) = 0;
    *(undefined4 *)(lVar5 + 0x48 + lVar10) = 0x3f800000;
    lVar11 = lVar11 + 1;
    lVar10 = lVar10 + 0x50;
  } while (lVar11 != 7);
  lVar10 = 0x88;
  do {
    *(undefined8 *)((longlong)param_1 + lVar10 + 0x10) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8;
    *(undefined8 *)((longlong)param_1 + lVar10) = DAT_14c8464e0;
    ((undefined8 *)((longlong)param_1 + lVar10))[1] = uVar6;
    uVar9 = DAT_14c846500._4_4_;
    uVar8 = (undefined4)DAT_14c846500;
    uVar7 = DAT_14c8464f8._4_4_;
    puVar3 = (undefined4 *)((longlong)param_1 + lVar10 + 0xa8);
    *puVar3 = (undefined4)DAT_14c8464f8;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    *(undefined8 *)((longlong)param_1 + lVar10 + 0xb8) = DAT_14c846508;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0x130);
  param_1[0x11] = 0;
  param_1[0x12] = 0xc069000000000000;
  param_1[0x13] = 0;
  param_1[0x26] = 0x4066800000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0x4056800000000000;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9ed58 FUN_145f9ed58 body=166 status=ok
// SIG undefined FUN_145f9ed58(void)

void FUN_145f9ed58(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 7;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < 7) {
    FUN_145f9ee82(param_1,iVar2);
  }
  lVar5 = (longlong)iVar2 * 0x50 + *param_1;
  lVar4 = 0;
  do {
    *(undefined4 *)(lVar5 + lVar4) = 0;
    uVar3 = DAT_14c8464e8;
    puVar1 = (undefined8 *)(lVar5 + 8 + lVar4);
    *puVar1 = DAT_14c8464e0;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar5 + 0x18 + lVar4) = DAT_14c8464f0;
    uVar3 = DAT_14c846500;
    puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
    *puVar1 = DAT_14c8464f8;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar5 + 0x30 + lVar4) = DAT_14c846508;
    *(undefined8 *)(lVar5 + 0x38 + lVar4) = 0x42b4000043480000;
    *(undefined4 *)(lVar5 + 0x40 + lVar4) = 0x44000000;
    *(undefined1 *)(lVar5 + 0x44 + lVar4) = 0;
    *(undefined4 *)(lVar5 + 0x48 + lVar4) = 0x3f800000;
    lVar4 = lVar4 + 0x50;
  } while ((int)lVar4 != 0x230);
  return;
}



// FUNCTION 145f9edfe FUN_145f9edfe body=132 status=ok
// SIG undefined FUN_145f9edfe(void)

void FUN_145f9edfe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145f9ee82 FUN_145f9ee82 body=147 status=ok
// SIG undefined FUN_145f9ee82(void)

void FUN_145f9ee82(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145f9ef16 FUN_145f9ef16 body=25 status=ok
// SIG undefined FUN_145f9ef16(void)

undefined8 FUN_145f9ef16(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145f9ef30 FUN_145f9ef30 body=144 status=ok
// SIG undefined FUN_145f9ef30(void)

void FUN_145f9ef30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x168);
  local_20 = *(undefined8 *)*param_2;
  local_18 = (longlong *)((undefined8 *)*param_2)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_145f9efc2(lVar3 + 0x548,&local_20);
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9efc2 FUN_145f9efc2 body=173 status=ok
// SIG undefined FUN_145f9efc2(void)

void FUN_145f9efc2(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145f9f059;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145f9f059:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145f9f070 FUN_145f9f070 body=87 status=ok
// SIG undefined FUN_145f9f070(void)

void FUN_145f9f070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_145f9f0c8(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9f0c8 FUN_145f9f0c8 body=198 status=ok
// SIG undefined FUN_145f9f0c8(void)

void FUN_145f9f0c8(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[6]);
  if (*(char *)(param_2 + 9) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[8]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
  }
  if (*(char *)(param_2 + 0x4d) != '\x01') {
    return;
  }
  FUN_140dba9e6(*param_1,param_2[0x4c]);
  return;
}



// FUNCTION 145f9f18e FUN_145f9f18e body=138 status=ok
// SIG undefined FUN_145f9f18e(void)

void FUN_145f9f18e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0xb) {
      iVar5 = 10;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0xfc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xfc) = iVar5;
    FUN_145f9f218(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145f9f218 FUN_145f9f218 body=148 status=ok
// SIG undefined FUN_145f9f218(void)

void FUN_145f9f218(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xf0);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xf0,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xf0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xf0,param_2,param_3,0x18);
  return;
}



// FUNCTION 145f9f2b8 FUN_145f9f2b8 body=218 status=ok
// SIG undefined FUN_145f9f2b8(void)

undefined8 * FUN_145f9f2b8(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6dd0e0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5160) {
    FUN_144b3d300(&DAT_14caf5160);
    if (DAT_14caf5160 == -1) {
      FUN_1446f470e(&DAT_14caf5158,L"VertSurfaceActor",1);
      _Init_thread_footer(&DAT_14caf5160);
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x4f;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0xb] = DAT_14caf5158;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfd;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  return param_1;
}



// FUNCTION 145f9f39e FUN_145f9f39e body=218 status=ok
// SIG undefined FUN_145f9f39e(void)

undefined8 * FUN_145f9f39e(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = (*(uint *)(param_1 + 9) & 0xfffffffc) + 1;
  *param_1 = &PTR_FUN_14ac08540;
  param_1[10] = 0;
  FUN_141118a4c(param_1 + 0xb);
  FUN_14111896e(param_1 + 0x12);
  param_1[0x19] = 0;
  lVar1 = FUN_1459eb822();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[8] = lVar1;
  lVar1 = FUN_144a6c4d8();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[10] = lVar1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0x43fa0000;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x19] = lVar1;
  return param_1;
}



// FUNCTION 145f9f478 FUN_145f9f478 body=40 status=ok
// SIG undefined FUN_145f9f478(void)

undefined8 FUN_145f9f478(undefined8 param_1,int param_2)

{
  FUN_145f9f4a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f9f4a0 FUN_145f9f4a0 body=369 status=ok
// SIG undefined FUN_145f9f4a0(void)

void FUN_145f9f4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b15b2a0;
  FUN_144760e21(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145f9f611(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145f9f611 FUN_145f9f611 body=49 status=ok
// SIG undefined FUN_145f9f611(void)

void FUN_145f9f611(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145f9f642 FUN_145f9f642 body=21 status=ok
// SIG undefined FUN_145f9f642(void)

undefined8 FUN_145f9f642(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145f9f658 FUN_145f9f658 body=102 status=ok
// SIG undefined FUN_145f9f658(void)

void FUN_145f9f658(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    plVar3 = *(longlong **)(param_1 + 0x188);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x188) = 0;
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
  }
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
  FUN_1415ab7ce(param_1);
  return;
}



// FUNCTION 145f9f6ca FUN_145f9f6ca body=218 status=ok
// SIG undefined FUN_145f9f6ca(void)

undefined8 * FUN_145f9f6ca(undefined8 *param_1)

{
  FUN_1458e9a78();
  *param_1 = &PTR_FUN_14b545560;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  *(undefined4 *)(param_1 + 6) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  FUN_140056680(param_1 + 8,&DAT_149e19e7a);
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55) = 1;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0xb) = 2;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f) = 0;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0x3ff0000000000000;
  FUN_140056680(param_1 + 0x14,L"Default");
  param_1[0x16] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 10;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 145f9f7b0 FUN_145f9f7b0 body=354 status=ok
// SIG undefined FUN_145f9f7b0(void)

undefined8 * FUN_145f9f7b0(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14b56b410;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  memset(param_1 + 0x26,0,0x89);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_1415ab9c2(param_1 + 0x42);
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d9) = 1;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  return param_1;
}



// FUNCTION 145f9f920 FUN_145f9f920 body=1368 status=ok
// SIG undefined FUN_145f9f920(void)

void FUN_145f9f920(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b8e3d80;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x40400000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf00000d0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x40c00000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xf00000d0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x7201;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x7202;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x7202;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 1;
  param_1[0x35] = 0x3dcccccd41200000;
  *(undefined8 *)((longlong)param_1 + 0x219) = 0;
  *(undefined8 *)((longlong)param_1 + 0x221) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  param_1[0x46] = &PTR_FUN_14b00bdf8;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0x404;
  param_1[0x47] = &DAT_14a176f00;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x5c] = &PTR_FUN_14b00bdf8;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x354) = 0x404;
  param_1[0x5d] = &DAT_14a176f00;
  param_1[0x71] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0x3f800000;
  param_1[0x73] = &PTR_FUN_14b00bdf8;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x40c) = 0x404;
  param_1[0x74] = &DAT_14a176f00;
  param_1[0x88] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x89] = &PTR_FUN_14b00bdf8;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x4bc) = 0x404;
  param_1[0x8a] = &DAT_14a176f00;
  param_1[0x9e] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9f] = &PTR_FUN_14b00bdf8;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x56c) = 0x404;
  param_1[0xa0] = &DAT_14a176f00;
  param_1[0xb4] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb5] = &PTR_FUN_14b00bdf8;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x61c) = 0x404;
  param_1[0xb6] = &DAT_14a176f00;
  param_1[0xca] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0x43fa0000;
  param_1[0xce] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_1[0xcc] = DAT_14c846510;
  param_1[0xcd] = uVar1;
  *(undefined4 *)(param_1 + 0xcf) = 0x3f800000;
  param_1[0xd0] = &PTR_FUN_14b00bdf8;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6f4) = 0x404;
  param_1[0xd1] = &DAT_14a176f00;
  param_1[0xe7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x723) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72b) = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x7012;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0x7012;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0x7012;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0x7012;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x7012;
  param_1[0xf5] = 0;
  param_1[0xf6] = &DAT_ff000000ff;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xfd] = 0x3e99999a3e19999a;
  *(undefined4 *)(param_1 + 0xfe) = 0x3f59999a;
  *(undefined2 *)((longlong)param_1 + 0x7f4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f6) = 0;
  return;
}



// FUNCTION 145f9fe78 FUN_145f9fe78 body=53 status=ok
// SIG undefined FUN_145f9fe78(void)

void FUN_145f9fe78(LPCRITICAL_SECTION param_1)

{
  *(undefined4 *)&param_1[2].SpinCount = 0;
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_145f9feae(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x000145f9fea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 145f9feae FUN_145f9feae body=53 status=ok
// SIG undefined FUN_145f9feae(void)

void FUN_145f9feae(longlong *param_1)

{
  FUN_145f9fee4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f9fee4 FUN_145f9fee4 body=352 status=ok
// SIG undefined FUN_145f9fee4(void)

void FUN_145f9fee4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa0046 FUN_145fa0046 body=278 status=ok
// SIG undefined FUN_145fa0046(void)

undefined * FUN_145fa0046(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8df48) {
    FUN_144b3d300(&DAT_14ca8df48);
    if (DAT_14ca8df48 == -1) {
      FUN_145fa015e(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"P010ConvertAsUINT16sUB";
      local_78 = L"FP010ConvertAsUINT16sUB";
      local_50 = 0xb0;
      local_58 = 0x177;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8dec8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f758a);
      _Init_thread_footer(&DAT_14ca8df48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8dec8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa015e FUN_145fa015e body=226 status=ok
// SIG undefined FUN_145fa015e(void)

longlong * FUN_145fa015e(longlong *param_1)

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
  pcVar13 = FUN_14631cdf4;
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



// FUNCTION 145fa0242 FUN_145fa0242 body=136 status=ok
// SIG undefined FUN_145fa0242(void)

code * FUN_145fa0242(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000017c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424020;
}



// FUNCTION 145fa02ca FUN_145fa02ca body=138 status=ok
// SIG undefined FUN_145fa02ca(void)

code * FUN_145fa02ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000179;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424134;
}



// FUNCTION 145fa0354 FUN_145fa0354 body=138 status=ok
// SIG undefined FUN_145fa0354(void)

code * FUN_145fa0354(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000017e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423f96;
}



// FUNCTION 145fa03de FUN_145fa03de body=278 status=ok
// SIG undefined FUN_145fa03de(void)

undefined * FUN_145fa03de(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e108) {
    FUN_144b3d300(&DAT_14ca8e108);
    if (DAT_14ca8e108 == -1) {
      FUN_145fa04f6(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"P010_2101010ConvertUB";
      local_78 = L"FP010_2101010ConvertUB";
      local_50 = 0xc0;
      local_58 = 0x19d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8e088,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7696);
      _Init_thread_footer(&DAT_14ca8e108);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8e088;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa04f6 FUN_145fa04f6 body=226 status=ok
// SIG undefined FUN_145fa04f6(void)

longlong * FUN_145fa04f6(longlong *param_1)

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
  pcVar13 = FUN_14631ce7c;
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



// FUNCTION 145fa05da FUN_145fa05da body=136 status=ok
// SIG undefined FUN_145fa05da(void)

code * FUN_145fa05da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_U";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000001a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa06ec;
}



// FUNCTION 145fa0662 FUN_145fa0662 body=138 status=ok
// SIG undefined FUN_145fa0662(void)

code * FUN_145fa0662(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_V";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000001a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa05da;
}



// FUNCTION 145fa06ec FUN_145fa06ec body=138 status=ok
// SIG undefined FUN_145fa06ec(void)

code * FUN_145fa06ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_Y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000001a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474242d0;
}



// FUNCTION 145fa0782 FUN_145fa0782 body=283 status=ok
// SIG undefined FUN_145fa0782(void)

undefined8 * FUN_145fa0782(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67cfd0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebb30) {
    FUN_144b3d300(&DAT_14caebb30);
    if (DAT_14caebb30 == -1) {
      FUN_1415abb00();
      atexit((_func_5014 *)&LAB_14356ef55);
      _Init_thread_footer(&DAT_14caebb30);
    }
  }
  param_1[0x21] = 0x13f800000;
  *(undefined4 *)(param_1 + 0x23) = 6;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000bf800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x40000000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(byte *)((longlong)param_1 + 0x114) = *(byte *)((longlong)param_1 + 0x114) | 1;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 300) = 0x200;
  return param_1;
}



// FUNCTION 145fa089e FUN_145fa089e body=278 status=ok
// SIG undefined FUN_145fa089e(void)

undefined * FUN_145fa089e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae93a8) {
    FUN_144b3d300(&DAT_14cae93a8);
    if (DAT_14cae93a8 == -1) {
      FUN_145fa09b6(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"PrecomputedLightingBuffer";
      local_78 = L"FPrecomputedLightingUniformParameters";
      local_50 = 0xf0;
      local_58 = 0x11;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae9328,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143563208);
      _Init_thread_footer(&DAT_14cae93a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cae9328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa09b6 FUN_145fa09b6 body=226 status=ok
// SIG undefined FUN_145fa09b6(void)

longlong * FUN_145fa09b6(longlong *param_1)

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
  pcVar13 = FUN_1463e96b2;
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



// FUNCTION 145fa0a9a FUN_145fa0a9a body=136 status=ok
// SIG undefined FUN_145fa0a9a(void)

code * FUN_145fa0a9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowMapCoordinateScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0b22;
}



// FUNCTION 145fa0b22 FUN_145fa0b22 body=138 status=ok
// SIG undefined FUN_145fa0b22(void)

code * FUN_145fa0b22(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightMapCoordinateScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ba67e8;
}



// FUNCTION 145fa0bac FUN_145fa0bac body=138 status=ok
// SIG undefined FUN_145fa0bac(void)

code * FUN_145fa0bac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightMapScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0a9a;
}



// FUNCTION 145fa0c36 FUN_145fa0c36 body=278 status=ok
// SIG undefined FUN_145fa0c36(void)

undefined * FUN_145fa0c36(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6110) {
    FUN_144b3d300(&DAT_14caf6110);
    if (DAT_14caf6110 == -1) {
      FUN_1415abba6(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"SpriteVF";
      local_78 = L"FParticleSpriteUniformParameters";
      local_50 = 0xb0;
      local_58 = 0x48;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf6090,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436021c4);
      _Init_thread_footer(&DAT_14caf6110);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf6090;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa0d4e FUN_145fa0d4e body=136 status=ok
// SIG undefined FUN_145fa0d4e(void)

code * FUN_145fa0d4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalsType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5b7e2;
}



// FUNCTION 145fa0dd6 FUN_145fa0dd6 body=138 status=ok
// SIG undefined FUN_145fa0dd6(void)

code * FUN_145fa0dd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalsCylinderUnitDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5bb1e;
}



// FUNCTION 145fa0e60 FUN_145fa0e60 body=138 status=ok
// SIG undefined FUN_145fa0e60(void)

code * FUN_145fa0e60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PivotOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5b6ce;
}



// FUNCTION 145fa0eea FUN_145fa0eea body=55 status=ok
// SIG undefined FUN_145fa0eea(void)

void FUN_145fa0eea(longlong *param_1)

{
  FUN_145fa0f22(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fa0f22 FUN_145fa0f22 body=402 status=ok
// SIG undefined FUN_145fa0f22(void)

void FUN_145fa0f22(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x28 + lVar5 * 0x40) != 0) {
        FUN_1400020a8();
      }
      plVar6 = (longlong *)(lVar2 + lVar5 * 0x40);
      if ((*plVar6 != 0) && ((int)plVar6[1] != -1)) {
        *(undefined4 *)(plVar6 + 1) = 0xffffffff;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fa10b6 FUN_145fa10b6 body=378 status=ok
// SIG undefined FUN_145fa10b6(void)

void FUN_145fa10b6(longlong param_1)

{
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446e0b6e();
  if (*(int *)(param_1 + 0x1fc) < 0) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    FUN_1490f1358(param_1 + 0x1f0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if (*(int *)(param_1 + 0x22c) < 0) {
    *(undefined4 *)(param_1 + 0x228) = 0;
    FUN_1490ef3a2(param_1 + 0x220);
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  if (*(int *)(param_1 + 0x244) < 0) {
    *(undefined4 *)(param_1 + 0x240) = 0;
    FUN_1490ef3d2(param_1 + 0x238);
  }
  else {
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  FUN_14005eae2(param_1 + 0x260);
  local_4c = 0;
  if (0 < *(int *)(param_1 + 600)) {
    do {
      local_48 = (longlong)local_4c * 0x30 + *(longlong *)(param_1 + 0x250) + 4;
      local_40 = &local_4c;
      FUN_140171856(param_1 + 0x260,local_34,&local_48,0);
      local_4c = local_4c + 1;
    } while (local_4c < *(int *)(param_1 + 600));
  }
  FUN_1415abe48(param_1);
  FUN_145fa1232(param_1);
  FUN_1415abd26(param_1);
  FUN_1415abc8a(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fa1232 FUN_145fa1232 body=242 status=ok
// SIG undefined FUN_145fa1232(void)

void FUN_145fa1232(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  if (*(int *)(lVar1 + 8) == 0) {
    iVar2 = *(int *)(param_1 + 0x1f8);
    if (0 < iVar2) {
      *(undefined4 *)(param_1 + 0x1f8) = 0;
      if (*(int *)(param_1 + 0x1fc) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      goto LAB_145fa12b6;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1f8);
  }
  if (iVar2 == 0) {
    FUN_141157eea(&local_30,lVar1,*(undefined1 *)(lVar1 + 0xa8));
    if ((longlong *)(param_1 + 0x1f0) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x1f0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1f0) = local_30;
      *(undefined4 *)(param_1 + 0x1f8) = local_28;
      *(undefined4 *)(param_1 + 0x1fc) = local_24;
    }
  }
LAB_145fa12b6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1339 FUN_145fa1339 body=19 status=ok
// SIG undefined FUN_145fa1339(void)

void FUN_145fa1339(void)

{
  FUN_1415ac46e();
  FUN_1415ac37a();
  return;
}



// FUNCTION 145fa134c FUN_145fa134c body=342 status=ok
// SIG undefined FUN_145fa134c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145fa134c(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cadbc08) && (FUN_144b3d300(&DAT_14cadbc08), DAT_14cadbc08 == -1)) {
    DAT_14cadbbf8 = (longlong *)0x0;
    _DAT_14cadbc00 = 0;
    atexit((_func_5014 *)&LAB_14350452f);
    _Init_thread_footer(&DAT_14cadbc08);
  }
  if ((longlong)DAT_14cadbc00 == 0) {
LAB_145fa13c3:
    puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    FUN_145fa14a2(puVar3,param_2,param_3);
    uVar7 = _DAT_14cadbc00;
    lVar5 = (longlong)DAT_14cadbc00;
    uVar2 = DAT_14cadbc00 + 1;
    _DAT_14cadbc00 = CONCAT44(DAT_14cadbc04,uVar2);
    if (DAT_14cadbc04 < uVar2) {
      FUN_145fa157a(&DAT_14cadbbf8,uVar7 & 0xffffffff);
    }
    DAT_14cadbbf8[lVar5] = (longlong)puVar3;
LAB_145fa1414:
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar1;
    return param_1;
  }
  plVar4 = DAT_14cadbbf8;
LAB_145fa143b:
  puVar3 = (undefined8 *)*plVar4;
  lVar5 = 0;
  do {
    uVar6 = *(ushort *)(puVar3[1] + lVar5);
    uVar7 = (ulonglong)uVar6;
    uVar8 = *(ushort *)(param_2 + lVar5);
    if (uVar6 == uVar8) {
      if (uVar6 == 0) goto LAB_145fa1494;
    }
    else {
      if (0x7f < (uVar8 | uVar6)) break;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar9 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar9]) break;
    }
    lVar5 = lVar5 + 2;
  } while( true );
  if (uVar6 == uVar8) {
LAB_145fa1494:
    if (plVar4 != (longlong *)0x0) goto LAB_145fa1414;
    goto LAB_145fa13c3;
  }
  plVar4 = plVar4 + 1;
  if (plVar4 == DAT_14cadbbf8 + DAT_14cadbc00) goto LAB_145fa13c3;
  goto LAB_145fa143b;
}



// FUNCTION 145fa14a2 FUN_145fa14a2 body=214 status=ok
// SIG undefined FUN_145fa14a2(void)

longlong FUN_145fa14a2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(longlong *)param_1 = param_1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  FUN_140002266(&local_40,L"gbx.DeferredTickers.Max.%s",param_2);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_48 = 0;
  (**(code **)(*plVar1 + 0x38))
            (plVar1,puVar2,param_1 + 0x18,L"Base priority, higher priority executes first.");
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145fa157a FUN_145fa157a body=132 status=ok
// SIG undefined FUN_145fa157a(void)

void FUN_145fa157a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145fa15fe FUN_145fa15fe body=226 status=ok
// SIG undefined FUN_145fa15fe(void)

longlong * FUN_145fa15fe(longlong *param_1)

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
  pcVar13 = FUN_1462b9fa2;
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



// FUNCTION 145fa16e2 FUN_145fa16e2 body=138 status=ok
// SIG undefined FUN_145fa16e2(void)

code * FUN_145fa16e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxInkMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713b69a;
}



// FUNCTION 145fa176c FUN_145fa176c body=144 status=ok
// SIG undefined FUN_145fa176c(void)

code * FUN_145fa176c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140250662();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DecalPass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDecalPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b7980;
  return FUN_1462ba0ba;
}



// FUNCTION 145fa17fc FUN_145fa17fc body=144 status=ok
// SIG undefined FUN_145fa17fc(void)

code * FUN_145fa17fc(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462ba14a;
}



// FUNCTION 145fa188c FUN_145fa188c body=164 status=ok
// SIG undefined FUN_145fa188c(void)

void FUN_145fa188c(void)

{
  FUN_145faab8d();
  FUN_145fa1b78();
  FUN_145fa7bc6();
  FUN_145fa2223();
  FUN_145fa1e0f();
  FUN_145fa1cb7();
  FUN_145fa1f76();
  FUN_145fa19c9();
  FUN_145fa197a();
  FUN_145fa1c15();
  FUN_145fa2036();
  FUN_145fa1ae5();
  FUN_145fa1ec0();
  FUN_145fa234c();
  FUN_145fa1d5e();
  thunk_FUN_145fca5d4();
  FUN_145fa1935();
  FUN_145fa20fb();
  FUN_145fa1a57();
  FUN_145fa7df2();
  FUN_145fa24e8();
  FUN_145fa801e();
  FUN_145fa824a();
  FUN_145fa8476();
  FUN_145fa86a2();
  FUN_145faaea6();
  FUN_145fab12c();
  FUN_145fab3b2();
  FUN_145fa88ce();
  FUN_145fc3a88();
  FUN_145fa8afa();
  return;
}



// FUNCTION 145fa1930 thunk_FUN_145fca5d4 body=5 status=ok
// SIG undefined thunk_FUN_145fca5d4(void)

void thunk_FUN_145fca5d4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  longlong lStack_a8;
  longlong lStack_98;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  code *pcStack_50;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&uStack_c8,"FTransformCollectionAttributeDataflowNode",1);
  FUN_1446ddc76(&uStack_d0,"TransformCollectionAttribute",1);
  FUN_1446ddc76(&uStack_d8,"GeometryCollection",1);
  FUN_1400b22c2(auStack_e8,&DAT_149e02088);
  FUN_1446ddc76(auStack_100,"TransformCollectionAttribute",1);
  FUN_1446ddc76(auStack_108,"FTransformCollectionAttributeDataflowNode",1);
  if (DAT_14cc26120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar3,L"TransformCollectionAttributeDataflowNode");
  }
  FUN_1406751de(auStack_f8,DAT_14cc26120,auStack_108,auStack_100);
  if (DAT_14cc26120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar3,L"TransformCollectionAttributeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc26120);
  if (DAT_14cc26120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar3,L"TransformCollectionAttributeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc26120);
  FUN_1446ddc76(auStack_118,"FTransformCollectionAttributeDataflowNode",1);
  FUN_140d9ac66(&uStack_110,auStack_118);
  uStack_128 = uStack_110;
  puStack_148 = auStack_e8;
  puStack_140 = auStack_f8;
  uStack_138 = uVar1;
  uStack_130 = uVar2;
  FUN_140d7e4ae(auStack_c0,uStack_c8,uStack_d0,uStack_d8);
  uVar3 = FUN_1414c23f2();
  uStack_68 = 0;
  ppuStack_58 = &PTR_LAB_14be6ff50;
  pcStack_50 = FUN_1497c5c28;
  pcStack_78 = FUN_1497c5e12;
  FUN_1411d7a02(uVar3,auStack_c0);
  if (lStack_98 != 0) {
    FUN_1400020a8();
  }
  if (lStack_a8 != 0) {
    FUN_1400020a8();
  }
  if ((uStack_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1935 FUN_145fa1935 body=69 status=ok
// SIG undefined FUN_145fa1935(void)

void FUN_145fa1935(void)

{
  FUN_145fa2712();
  FUN_145fa293e();
  FUN_145fa2b6a();
  FUN_145fa2d96();
  FUN_145fa2fc2();
  FUN_145fa31ee();
  FUN_145fa341a();
  FUN_145fa3646();
  FUN_145fa3872();
  FUN_145fa3a9e();
  FUN_145fa3cca();
  FUN_145fa3ef6();
  return;
}



// FUNCTION 145fa197a FUN_145fa197a body=79 status=ok
// SIG undefined FUN_145fa197a(void)

void FUN_145fa197a(void)

{
  FUN_145fa8d26();
  FUN_145fa8f52();
  FUN_145fa917e();
  FUN_145fa93aa();
  FUN_145fa95d6();
  FUN_145fa9802();
  FUN_145fa9a2e();
  FUN_145fa9c5a();
  FUN_145fa9e86();
  FUN_145faa0b2();
  FUN_145faa2de();
  FUN_145faa50a();
  FUN_145faa736();
  FUN_145faa962();
  return;
}



// FUNCTION 145fa19c9 FUN_145fa19c9 body=141 status=ok
// SIG undefined FUN_145fa19c9(void)

void FUN_145fa19c9(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145faf0fa();
  FUN_145faf388();
  FUN_145faf616();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3f80000000000000;
  uStack_38 = 0x3f8000003d4ccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"GeometryCollection|Edit",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1a57 FUN_145fa1a57 body=141 status=ok
// SIG undefined FUN_145fa1a57(void)

void FUN_145fa1a57(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fc9e2a();
  FUN_145fca0b8();
  FUN_145fca346();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3f8000003dcccccd;
  uStack_38 = 0x3f8000003f19999a;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"GeometryCollection|Sampling",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1ae5 FUN_145fa1ae5 body=146 status=ok
// SIG undefined FUN_145fa1ae5(void)

void FUN_145fa1ae5(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fc93f2();
  FUN_145fc9680();
  FUN_145fc990e();
  FUN_145fc9b9c();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3ecccccd3f800000;
  uStack_38 = 0x3f8000003ecccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"Override",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1b78 FUN_145fa1b78 body=156 status=ok
// SIG undefined FUN_145fa1b78(void)

void FUN_145fa1b78(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fa4122();
  FUN_145fa434e();
  FUN_145fa457a();
  FUN_145fa47a6();
  FUN_145fa49d2();
  FUN_145fa4bfe();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0;
  uStack_38 = 0x3f80000000000000;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"Terminal",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1c15 FUN_145fa1c15 body=161 status=ok
// SIG undefined FUN_145fa1c15(void)

void FUN_145fa1c15(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  char local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fa6c92();
  FUN_145fa6ebe();
  FUN_145fa70ea();
  FUN_145fa7316();
  FUN_145fa7542();
  FUN_145fa776e();
  FUN_145fa799a();
  uVar1 = thunk_FUN_1415ac724();
  builtin_strncpy(local_40,"333?333?333?",0xd);
  local_40[0xd] = '\0';
  local_40[0xe] = -0x80;
  local_40[0xf] = '?';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x14] = '\0';
  local_40[0x15] = '\0';
  local_40[0x16] = '\0';
  local_40[0x17] = '\0';
  local_40[0x18] = '\0';
  local_40[0x19] = '\0';
  local_40[0x1a] = '\0';
  local_40[0x1b] = '\0';
  local_40[0x1c] = '\0';
  local_40[0x1d] = '\0';
  local_40[0x1e] = '\0';
  local_40[0x1f] = '?';
  FUN_1446ddc76(local_48,"Generators",1);
  FUN_1415ac798(uVar1,local_48,local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1cb7 FUN_145fa1cb7 body=166 status=ok
// SIG undefined FUN_145fa1cb7(void)

void FUN_145fa1cb7(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fab638();
  FUN_145fab8c6();
  FUN_145fabb54();
  FUN_145fabde2();
  FUN_145fac070();
  FUN_145fac2fe();
  FUN_145fac58c();
  FUN_145fac81a();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3ee666663e800000;
  uStack_38 = 0x3f8000003f4ccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"GeometryCollection|Cluster",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1d5e FUN_145fa1d5e body=176 status=ok
// SIG undefined FUN_145fa1d5e(void)

void FUN_145fa1d5e(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145facaa8();
  FUN_145facd36();
  FUN_145facfc4();
  FUN_145fad252();
  FUN_145fad4e0();
  FUN_145fad76e();
  FUN_145fad9fc();
  FUN_145fadc8a();
  FUN_145fadf18();
  FUN_145fae1a6();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3f4ccccd3ecccccd;
  uStack_38 = 0x3f80000000000000;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"Generators",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1e0f FUN_145fa1e0f body=176 status=ok
// SIG undefined FUN_145fa1e0f(void)

void FUN_145fa1e0f(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fbc792();
  FUN_145fbca20();
  FUN_145fbccae();
  FUN_145fbcf3c();
  FUN_145fbd1ca();
  FUN_145fbd458();
  FUN_145fbd6e6();
  FUN_145fbd974();
  FUN_145fbdc02();
  FUN_145fbde90();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3e23d70a3f800000;
  uStack_38 = 0x3f8000003d4ccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,&DAT_14a1ac36b,1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1ec0 FUN_145fa1ec0 body=181 status=ok
// SIG undefined FUN_145fa1ec0(void)

void FUN_145fa1ec0(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fb19da();
  FUN_145fb1c68();
  FUN_145fb1ef6();
  FUN_145fb2184();
  FUN_145fb2412();
  FUN_145fb26a0();
  FUN_145fb292e();
  FUN_145fb2bbc();
  FUN_145fb2e4a();
  FUN_145fb30d8();
  FUN_145fb3366();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3f4ccccd3ecccccd;
  uStack_38 = 0x3f80000000000000;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"Generators",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa1f76 FUN_145fa1f76 body=191 status=ok
// SIG undefined FUN_145fa1f76(void)

void FUN_145fa1f76(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145faf8a4();
  FUN_145fafb32();
  FUN_145fafdc0();
  FUN_145fb004e();
  FUN_145fb02dc();
  FUN_145fb056a();
  FUN_145fb07f8();
  FUN_145fb0a86();
  FUN_145fb0d14();
  FUN_145fb0fa2();
  FUN_145fb1230();
  FUN_145fb14be();
  FUN_145fb174c();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = &DAT_3f8000003f800000;
  uStack_38 = 0x3f8000003f4ccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"GeometryCollection|Fracture",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa2036 FUN_145fa2036 body=196 status=ok
// SIG undefined FUN_145fa2036(void)

void FUN_145fa2036(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fa4e2a();
  FUN_145fa5056();
  FUN_145fa5282();
  FUN_145fa54ae();
  FUN_145fa56da();
  FUN_145fa5906();
  FUN_145fa5b32();
  FUN_145fa5d5e();
  FUN_145fa5f8a();
  FUN_145fa61b6();
  FUN_145fa63e2();
  FUN_145fa660e();
  FUN_145fa683a();
  FUN_145fa6a66();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3f4ccccd00000000;
  puStack_38 = &DAT_3f8000003f800000;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"Fields",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa20fb FUN_145fa20fb body=295 status=ok
// SIG undefined FUN_145fa20fb(void)

void FUN_145fa20fb(void)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145fae434();
  FUN_145fae6c2();
  FUN_145fae950();
  FUN_145faebde();
  FUN_145faee6c();
  uVar1 = thunk_FUN_1415ac724();
  local_60 = 0x3f800000;
  uStack_58 = 0x3f80000000000000;
  local_50 = 0;
  uStack_48 = 0x3f00000000000000;
  FUN_1446ddc76(local_68,"GeometryCollection|Development",1);
  FUN_1415ac798(uVar1,local_68,&local_60);
  uVar1 = thunk_FUN_1415ac724();
  local_60 = 0x3e23d70a3f800000;
  uStack_58 = 0x3f8000003d4ccccd;
  local_50 = 0;
  uStack_48 = 0x3f00000000000000;
  FUN_1446ddc76(local_68,"GeometryCollection|Mesh",1);
  FUN_1415ac798(uVar1,local_68,&local_60);
  uVar1 = thunk_FUN_1415ac724();
  local_60 = 0x3e23d70a3f800000;
  uStack_58 = 0x3f8000003d4ccccd;
  local_50 = 0;
  uStack_48 = 0x3f00000000000000;
  FUN_1446ddc76(local_68,"SphereCovering",1);
  FUN_1415ac798(uVar1,local_68,&local_60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa2223 FUN_145fa2223 body=296 status=ok
// SIG undefined FUN_145fa2223(void)

void FUN_145fa2223(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fc3d16();
  FUN_145fc3fa4();
  FUN_145fc4232();
  FUN_145fc44c0();
  FUN_145fc474e();
  FUN_145fc49dc();
  FUN_145fc4c6a();
  FUN_145fc4ef8();
  FUN_145fc5186();
  FUN_145fc5414();
  FUN_145fc56a2();
  FUN_145fc5930();
  FUN_145fc5bbe();
  FUN_145fc5e4c();
  FUN_145fc60da();
  FUN_145fc6368();
  FUN_145fc65f6();
  FUN_145fc6884();
  FUN_145fc6b12();
  FUN_145fc6da0();
  FUN_145fc702e();
  FUN_145fc72bc();
  FUN_145fc754a();
  FUN_145fc77d8();
  FUN_145fc7a66();
  FUN_145fc7cf4();
  FUN_145fc7f82();
  FUN_145fc8210();
  FUN_145fc849e();
  FUN_145fc872c();
  FUN_145fc89ba();
  FUN_145fc8c48();
  FUN_145fc8ed6();
  FUN_145fc9164();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = &DAT_3f8000003f800000;
  uStack_38 = 0x3f8000003d4ccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,"GeometryCollection|Selection",1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa234c FUN_145fa234c body=411 status=ok
// SIG undefined FUN_145fa234c(void)

void FUN_145fa234c(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fb35f4();
  FUN_145fb3882();
  FUN_145fb3b10();
  FUN_145fb3d9e();
  FUN_145fb402c();
  FUN_145fb42ba();
  FUN_145fb4548();
  FUN_145fb47d6();
  FUN_145fb4a64();
  FUN_145fb4cf2();
  FUN_145fb4f80();
  FUN_145fb520e();
  FUN_145fb549c();
  FUN_145fb572a();
  FUN_145fb59b8();
  FUN_145fb5c46();
  FUN_145fb5ed4();
  FUN_145fb6162();
  FUN_145fb63f0();
  FUN_145fb667e();
  FUN_145fb690c();
  FUN_145fb6b9a();
  FUN_145fb6e28();
  FUN_145fb70b6();
  FUN_145fb7344();
  FUN_145fb75d2();
  FUN_145fb7860();
  FUN_145fb7aee();
  FUN_145fb7d7c();
  FUN_145fb800a();
  FUN_145fb8298();
  FUN_145fb8526();
  FUN_145fb87b4();
  FUN_145fb8a42();
  FUN_145fb8cd0();
  FUN_145fb8f5e();
  FUN_145fb91ec();
  FUN_145fb947a();
  FUN_145fb9708();
  FUN_145fb9996();
  FUN_145fb9c24();
  FUN_145fb9eb2();
  FUN_145fba140();
  FUN_145fba3ce();
  FUN_145fba65c();
  FUN_145fba8ea();
  FUN_145fbab78();
  FUN_145fbae06();
  FUN_145fbb094();
  FUN_145fbb322();
  FUN_145fbb5b0();
  FUN_145fbb83e();
  FUN_145fbbacc();
  FUN_145fbbd5a();
  FUN_145fbbfe8();
  FUN_145fbc276();
  FUN_145fbc504();
  uVar1 = thunk_FUN_1415ac724();
  local_40 = 0x3ecccccd00000000;
  uStack_38 = 0x3f8000003f4ccccd;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x3f000000;
  FUN_1446ddc76(local_48,&DAT_149faf950,1);
  FUN_1415ac798(uVar1,local_48,&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa24e8 FUN_145fa24e8 body=494 status=ok
// SIG undefined FUN_145fa24e8(void)

void FUN_145fa24e8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGeometryCollectionVertexScalarToVertexIndicesNode",1);
  FUN_1446ddc76(&local_e0,"VertexScalarToVertexIndices",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection",1);
  FUN_1400b22c2(local_f8,"Collection Vertex Weight Map to Indices");
  FUN_1446ddc76(local_110,"VertexScalarToVertexIndices",1);
  FUN_1446ddc76(local_118,"FGeometryCollectionVertexScalarToVertexIndicesNode",1);
  uVar3 = FUN_145fa26d8();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa26d8();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa26d8();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGeometryCollectionVertexScalarToVertexIndicesNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6d9d0;
  local_60 = FUN_1497b8740;
  local_88 = FUN_1497b87f0;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa26d8 FUN_145fa26d8 body=57 status=ok
// SIG undefined FUN_145fa26d8(void)

void FUN_145fa26d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26108 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26108 =
         FUN_140002ddd(FUN_14675b38b,uVar1,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  return;
}



// FUNCTION 145fa2712 FUN_145fa2712 body=496 status=ok
// SIG undefined FUN_145fa2712(void)

void FUN_145fa2712(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGetFloatArrayElementDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GetFloatArrayElement",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GetFloatArrayElement",1);
  FUN_1446ddc76(local_118,"FGetFloatArrayElementDataflowNode",1);
  uVar3 = FUN_145fa2904();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa2904();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa2904();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGetFloatArrayElementDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d630;
  local_60 = FUN_149726d40;
  local_88 = FUN_149726ef4;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa2904 FUN_145fa2904 body=57 status=ok
// SIG undefined FUN_145fa2904(void)

void FUN_145fa2904(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24518 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24518 = FUN_140002ddd(FUN_146750267,uVar1,L"GetFloatArrayElementDataflowNode");
  }
  return;
}



// FUNCTION 145fa293e FUN_145fa293e body=496 status=ok
// SIG undefined FUN_145fa293e(void)

void FUN_145fa293e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FFloatArrayToIntArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"FloatArrayToIntArray",1);
  FUN_1446ddc76(&local_e8,"Math|Conversions",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"FloatArrayToIntArray",1);
  FUN_1446ddc76(local_118,"FFloatArrayToIntArrayDataflowNode",1);
  uVar3 = FUN_145fa2b30();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa2b30();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa2b30();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FFloatArrayToIntArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d650;
  local_60 = FUN_149726f2c;
  local_88 = FUN_14972712a;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa2b30 FUN_145fa2b30 body=57 status=ok
// SIG undefined FUN_145fa2b30(void)

void FUN_145fa2b30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24548 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24548 = FUN_140002ddd(FUN_1467502f5,uVar1,L"FloatArrayToIntArrayDataflowNode");
  }
  return;
}



// FUNCTION 145fa2b6a FUN_145fa2b6a body=496 status=ok
// SIG undefined FUN_145fa2b6a(void)

void FUN_145fa2b6a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGetArrayElementDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GetArrayElement",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GetArrayElement",1);
  FUN_1446ddc76(local_118,"FGetArrayElementDataflowNode",1);
  uVar3 = FUN_145fa2d5c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa2d5c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa2d5c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGetArrayElementDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d670;
  local_60 = FUN_149727162;
  local_88 = FUN_149727320;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa2d5c FUN_145fa2d5c body=57 status=ok
// SIG undefined FUN_145fa2d5c(void)

void FUN_145fa2d5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24560 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24560 = FUN_140002ddd(FUN_146750354,uVar1,L"GetArrayElementDataflowNode");
  }
  return;
}



// FUNCTION 145fa2d96 FUN_145fa2d96 body=496 status=ok
// SIG undefined FUN_145fa2d96(void)

void FUN_145fa2d96(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGetNumArrayElementsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GetNumArrayElements",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GetNumArrayElements",1);
  FUN_1446ddc76(local_118,"FGetNumArrayElementsDataflowNode",1);
  uVar3 = FUN_145fa2f88();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa2f88();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa2f88();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGetNumArrayElementsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d690;
  local_60 = FUN_149727358;
  local_88 = FUN_149727582;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa2f88 FUN_145fa2f88 body=57 status=ok
// SIG undefined FUN_145fa2f88(void)

void FUN_145fa2f88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24578 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24578 = FUN_140002ddd(FUN_1467503b4,uVar1,L"GetNumArrayElementsDataflowNode");
  }
  return;
}



// FUNCTION 145fa2fc2 FUN_145fa2fc2 body=496 status=ok
// SIG undefined FUN_145fa2fc2(void)

void FUN_145fa2fc2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FBoolArrayToFaceSelectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"BoolArrayToFaceSelection",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"BoolArrayToFaceSelection",1);
  FUN_1446ddc76(local_118,"FBoolArrayToFaceSelectionDataflowNode",1);
  uVar3 = FUN_145fa31b4();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa31b4();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa31b4();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FBoolArrayToFaceSelectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d6b0;
  local_60 = FUN_1497275ba;
  local_88 = FUN_149727748;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa31b4 FUN_145fa31b4 body=57 status=ok
// SIG undefined FUN_145fa31b4(void)

void FUN_145fa31b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24590 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24590 = FUN_140002ddd(FUN_146750414,uVar1,L"BoolArrayToFaceSelectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa31ee FUN_145fa31ee body=496 status=ok
// SIG undefined FUN_145fa31ee(void)

void FUN_145fa31ee(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FFloatArrayToVertexSelectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"FloatArrayToVertexSelection",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"FloatArrayToVertexSelection",1);
  FUN_1446ddc76(local_118,"FFloatArrayToVertexSelectionDataflowNode",1);
  uVar3 = FUN_145fa33e0();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa33e0();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa33e0();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FFloatArrayToVertexSelectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d6d0;
  local_60 = FUN_149727780;
  local_88 = FUN_14972791e;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa33e0 FUN_145fa33e0 body=57 status=ok
// SIG undefined FUN_145fa33e0(void)

void FUN_145fa33e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc245c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245c0 = FUN_140002ddd(FUN_1467504a3,uVar1,L"FloatArrayToVertexSelectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa341a FUN_145fa341a body=496 status=ok
// SIG undefined FUN_145fa341a(void)

void FUN_145fa341a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FFloatArrayNormalizeDataflowNode",1);
  FUN_1446ddc76(&local_e0,"FloatArrayNormalize",1);
  FUN_1446ddc76(&local_e8,"Math|Float",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"FloatArrayNormalize",1);
  FUN_1446ddc76(local_118,"FFloatArrayNormalizeDataflowNode",1);
  uVar3 = FUN_145fa360c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa360c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa360c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FFloatArrayNormalizeDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d6f0;
  local_60 = FUN_149727956;
  local_88 = FUN_149727c0c;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa360c FUN_145fa360c body=57 status=ok
// SIG undefined FUN_145fa360c(void)

void FUN_145fa360c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc245d8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245d8 = FUN_140002ddd(FUN_146750502,uVar1,L"FloatArrayNormalizeDataflowNode");
  }
  return;
}



// FUNCTION 145fa3646 FUN_145fa3646 body=496 status=ok
// SIG undefined FUN_145fa3646(void)

void FUN_145fa3646(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FVectorArrayNormalizeDataflowNode",1);
  FUN_1446ddc76(&local_e0,"VectorArrayNormalize",1);
  FUN_1446ddc76(&local_e8,"Math|Vector",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"VectorArrayNormalize",1);
  FUN_1446ddc76(local_118,"FVectorArrayNormalizeDataflowNode",1);
  uVar3 = FUN_145fa3838();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa3838();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa3838();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FVectorArrayNormalizeDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d710;
  local_60 = FUN_149727c44;
  local_88 = FUN_149727e42;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa3838 FUN_145fa3838 body=57 status=ok
// SIG undefined FUN_145fa3838(void)

void FUN_145fa3838(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc245f0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245f0 = FUN_140002ddd(FUN_146750562,uVar1,L"VectorArrayNormalizeDataflowNode");
  }
  return;
}



// FUNCTION 145fa3872 FUN_145fa3872 body=496 status=ok
// SIG undefined FUN_145fa3872(void)

void FUN_145fa3872(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FUnionIntArraysDataflowNode",1);
  FUN_1446ddc76(&local_e0,"UnionIntArrays",1);
  FUN_1446ddc76(&local_e8,"Utilities",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"UnionIntArrays",1);
  FUN_1446ddc76(local_118,"FUnionIntArraysDataflowNode",1);
  uVar3 = FUN_145fa3a64();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa3a64();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa3a64();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FUnionIntArraysDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d730;
  local_60 = FUN_149727e7a;
  local_88 = FUN_149728028;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa3a64 FUN_145fa3a64 body=57 status=ok
// SIG undefined FUN_145fa3a64(void)

void FUN_145fa3a64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24608 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24608 = FUN_140002ddd(FUN_1467505c2,uVar1,L"UnionIntArraysDataflowNode");
  }
  return;
}



// FUNCTION 145fa3a9e FUN_145fa3a9e body=496 status=ok
// SIG undefined FUN_145fa3a9e(void)

void FUN_145fa3a9e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FRemoveFloatArrayElementDataflowNode",1);
  FUN_1446ddc76(&local_e0,"RemoveFloatArrayElement",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"RemoveFloatArrayElement",1);
  FUN_1446ddc76(local_118,"FRemoveFloatArrayElementDataflowNode",1);
  uVar3 = FUN_145fa3c90();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa3c90();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa3c90();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FRemoveFloatArrayElementDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d750;
  local_60 = FUN_149728060;
  local_88 = FUN_149728206;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa3c90 FUN_145fa3c90 body=57 status=ok
// SIG undefined FUN_145fa3c90(void)

void FUN_145fa3c90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24620 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24620 = FUN_140002ddd(FUN_146750622,uVar1,L"RemoveFloatArrayElementDataflowNode");
  }
  return;
}



// FUNCTION 145fa3cca FUN_145fa3cca body=496 status=ok
// SIG undefined FUN_145fa3cca(void)

void FUN_145fa3cca(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FFloatArrayComputeStatisticsDataflowNode",1);
  FUN_1446ddc76(&local_e0,"FloatArrayComputeStatistics",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"FloatArrayComputeStatistics",1);
  FUN_1446ddc76(local_118,"FFloatArrayComputeStatisticsDataflowNode",1);
  uVar3 = FUN_145fa3ebc();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa3ebc();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa3ebc();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FFloatArrayComputeStatisticsDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d770;
  local_60 = FUN_14972823e;
  local_88 = FUN_149728444;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa3ebc FUN_145fa3ebc body=57 status=ok
// SIG undefined FUN_145fa3ebc(void)

void FUN_145fa3ebc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24650 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24650 = FUN_140002ddd(FUN_1467506b1,uVar1,L"FloatArrayComputeStatisticsDataflowNode");
  }
  return;
}



// FUNCTION 145fa3ef6 FUN_145fa3ef6 body=496 status=ok
// SIG undefined FUN_145fa3ef6(void)

void FUN_145fa3ef6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FRandomizeFloatArrayDataflowNode",1);
  FUN_1446ddc76(&local_e0,"RandomizeFloatArray",1);
  FUN_1446ddc76(&local_e8,"Utilities|Array",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"RandomizeFloatArray",1);
  FUN_1446ddc76(local_118,"FRandomizeFloatArrayDataflowNode",1);
  uVar3 = FUN_145fa40e8();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa40e8();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa40e8();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FRandomizeFloatArrayDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d790;
  local_60 = FUN_14972847c;
  local_88 = FUN_14972868c;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa40e8 FUN_145fa40e8 body=57 status=ok
// SIG undefined FUN_145fa40e8(void)

void FUN_145fa40e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24668 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24668 = FUN_140002ddd(FUN_146750710,uVar1,L"RandomizeFloatArrayDataflowNode");
  }
  return;
}



// FUNCTION 145fa4122 FUN_145fa4122 body=496 status=ok
// SIG undefined FUN_145fa4122(void)

void FUN_145fa4122(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGeometryCollectionTerminalDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GeometryCollectionTerminal",1);
  FUN_1446ddc76(&local_e8,"Terminal",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GeometryCollectionTerminal",1);
  FUN_1446ddc76(local_118,"FGeometryCollectionTerminalDataflowNode",1);
  uVar3 = FUN_145fa4314();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa4314();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa4314();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGeometryCollectionTerminalDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d970;
  local_60 = FUN_14972b624;
  local_88 = FUN_14972b6d4;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa4314 FUN_145fa4314 body=57 status=ok
// SIG undefined FUN_145fa4314(void)

void FUN_145fa4314(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24680 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24680 = FUN_140002ddd(FUN_146750770,uVar1,L"GeometryCollectionTerminalDataflowNode");
  }
  return;
}



// FUNCTION 145fa434e FUN_145fa434e body=496 status=ok
// SIG undefined FUN_145fa434e(void)

void FUN_145fa434e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGetGeometryCollectionAssetDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GetGeometryCollectionAsset",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Asset",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GetGeometryCollectionAsset",1);
  FUN_1446ddc76(local_118,"FGetGeometryCollectionAssetDataflowNode",1);
  uVar3 = FUN_145fa4540();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa4540();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa4540();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGetGeometryCollectionAssetDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d990;
  local_60 = FUN_14972b70c;
  local_88 = FUN_14972b7fa;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa4540 FUN_145fa4540 body=57 status=ok
// SIG undefined FUN_145fa4540(void)

void FUN_145fa4540(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24698 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24698 = FUN_140002ddd(FUN_1467507d0,uVar1,L"GetGeometryCollectionAssetDataflowNode");
  }
  return;
}



// FUNCTION 145fa457a FUN_145fa457a body=496 status=ok
// SIG undefined FUN_145fa457a(void)

void FUN_145fa457a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGetGeometryCollectionSourcesDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GetGeometryCollectionSources",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Asset",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GetGeometryCollectionSources",1);
  FUN_1446ddc76(local_118,"FGetGeometryCollectionSourcesDataflowNode",1);
  uVar3 = FUN_145fa476c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa476c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa476c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGetGeometryCollectionSourcesDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d9b0;
  local_60 = FUN_14972b832;
  local_88 = FUN_14972b8e2;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa476c FUN_145fa476c body=57 status=ok
// SIG undefined FUN_145fa476c(void)

void FUN_145fa476c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246b0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246b0 = FUN_140002ddd(FUN_146750830,uVar1,L"GetGeometryCollectionSourcesDataflowNode");
  }
  return;
}



// FUNCTION 145fa47a6 FUN_145fa47a6 body=496 status=ok
// SIG undefined FUN_145fa47a6(void)

void FUN_145fa47a6(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FCreateGeometryCollectionFromSourcesDataflowNode",1);
  FUN_1446ddc76(&local_e0,"CreateGeometryCollectionFromSources",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Asset",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"CreateGeometryCollectionFromSources",1);
  FUN_1446ddc76(local_118,"FCreateGeometryCollectionFromSourcesDataflowNode",1);
  uVar3 = FUN_145fa4998();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa4998();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa4998();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FCreateGeometryCollectionFromSourcesDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d9d0;
  local_60 = FUN_14972b91a;
  local_88 = FUN_14972b9ca;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa4998 FUN_145fa4998 body=57 status=ok
// SIG undefined FUN_145fa4998(void)

void FUN_145fa4998(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246c8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246c8 =
         FUN_140002ddd(FUN_146750890,uVar1,L"CreateGeometryCollectionFromSourcesDataflowNode");
  }
  return;
}



// FUNCTION 145fa49d2 FUN_145fa49d2 body=496 status=ok
// SIG undefined FUN_145fa49d2(void)

void FUN_145fa49d2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FGeometryCollectionToCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"GeometryCollectionToCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Asset",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"GeometryCollectionToCollection",1);
  FUN_1446ddc76(local_118,"FGeometryCollectionToCollectionDataflowNode",1);
  uVar3 = FUN_145fa4bc4();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa4bc4();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa4bc4();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FGeometryCollectionToCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2d9f0;
  local_60 = FUN_14972ba02;
  local_88 = FUN_14972bab2;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa4bc4 FUN_145fa4bc4 body=57 status=ok
// SIG undefined FUN_145fa4bc4(void)

void FUN_145fa4bc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246e0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246e0 = FUN_140002ddd(FUN_1467508f0,uVar1,L"GeometryCollectionToCollectionDataflowNode")
    ;
  }
  return;
}



// FUNCTION 145fa4bfe FUN_145fa4bfe body=496 status=ok
// SIG undefined FUN_145fa4bfe(void)

void FUN_145fa4bfe(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FBlueprintToCollectionDataflowNode",1);
  FUN_1446ddc76(&local_e0,"BlueprintToCollection",1);
  FUN_1446ddc76(&local_e8,"GeometryCollection|Asset",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"BlueprintToCollection",1);
  FUN_1446ddc76(local_118,"FBlueprintToCollectionDataflowNode",1);
  uVar3 = FUN_145fa4df0();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa4df0();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa4df0();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FBlueprintToCollectionDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be2da10;
  local_60 = FUN_14972baea;
  local_88 = FUN_14972bb9a;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa4df0 FUN_145fa4df0 body=57 status=ok
// SIG undefined FUN_145fa4df0(void)

void FUN_145fa4df0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc246f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc246f8 = FUN_140002ddd(FUN_146750950,uVar1,L"BlueprintToCollectionDataflowNode");
  }
  return;
}



// FUNCTION 145fa4e2a FUN_145fa4e2a body=496 status=ok
// SIG undefined FUN_145fa4e2a(void)

void FUN_145fa4e2a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FRadialFalloffFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"RadialFalloffField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"RadialFalloffField",1);
  FUN_1446ddc76(local_118,"FRadialFalloffFieldDataflowNode",1);
  uVar3 = FUN_145fa501c();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa501c();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa501c();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FRadialFalloffFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c2c0;
  local_60 = FUN_14979bf56;
  local_88 = FUN_14979c3f8;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa501c FUN_145fa501c body=57 status=ok
// SIG undefined FUN_145fa501c(void)

void FUN_145fa501c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24728 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24728 = FUN_140002ddd(FUN_1467509e1,uVar1,L"RadialFalloffFieldDataflowNode");
  }
  return;
}



// FUNCTION 145fa5056 FUN_145fa5056 body=496 status=ok
// SIG undefined FUN_145fa5056(void)

void FUN_145fa5056(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_a8;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1446ddc76(&local_d8,"FBoxFalloffFieldDataflowNode",1);
  FUN_1446ddc76(&local_e0,"BoxFalloffField",1);
  FUN_1446ddc76(&local_e8,"Fields",1);
  FUN_1400b22c2(local_f8,&DAT_149e02088);
  FUN_1446ddc76(local_110,"BoxFalloffField",1);
  FUN_1446ddc76(local_118,"FBoxFalloffFieldDataflowNode",1);
  uVar3 = FUN_145fa5248();
  FUN_1406751de(local_108,uVar3,local_118,local_110);
  uVar3 = FUN_145fa5248();
  uVar1 = FUN_1403ed7aa(uVar3);
  uVar3 = FUN_145fa5248();
  uVar2 = FUN_1403ed7ae(uVar3);
  FUN_1446ddc76(local_128,"FBoxFalloffFieldDataflowNode",1);
  FUN_140d9ac66(&local_120,local_128);
  local_138 = local_120;
  local_158 = local_f8;
  local_150 = local_108;
  local_148 = uVar1;
  local_140 = uVar2;
  FUN_140d7e4ae(local_d0,local_d8,local_e0,local_e8);
  uVar3 = FUN_1414c23f2();
  local_78 = 0;
  local_68 = &PTR_LAB_14be6c2e0;
  local_60 = FUN_14979c430;
  local_88 = FUN_14979c86a;
  FUN_1411d7a02(uVar3,local_d0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fa5248 FUN_145fa5248 body=57 status=ok
// SIG undefined FUN_145fa5248(void)

void FUN_145fa5248(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24740 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24740 = FUN_140002ddd(FUN_146750a40,uVar1,L"BoxFalloffFieldDataflowNode");
  }
  return;
}


