// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ec00a4 FUN_143ec00a4 body=57 status=ok
// SIG undefined FUN_143ec00a4(void)

void FUN_143ec00a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93378 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93378 = FUN_140002ddd(FUN_146570bea,uVar1,L"GbxBrainAspect_CanUseWeapon");
  }
  return;
}



// FUNCTION 143ec00ec FUN_143ec00ec body=57 status=ok
// SIG undefined FUN_143ec00ec(void)

void FUN_143ec00ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93390 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93390 = FUN_140002ddd(FUN_146570c81,uVar1,L"GbxBrainAspectSettings_ReloadWeapon");
  }
  return;
}



// FUNCTION 143ec0142 FUN_143ec0142 body=57 status=ok
// SIG undefined FUN_143ec0142(void)

void FUN_143ec0142(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb933c0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb933c0 = FUN_140002ddd(FUN_146570d40,uVar1,L"GbxBrainAspectSettings_UseWeapon");
  }
  return;
}



// FUNCTION 143ec018a FUN_143ec018a body=169 status=ok
// SIG undefined FUN_143ec018a(void)

void FUN_143ec018a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe8);
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
  *param_2 = &PTR_FUN_14b484e20;
  param_2[0x1e] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe5) = 0;
  return;
}



// FUNCTION 143ec0234 FUN_143ec0234 body=57 status=ok
// SIG undefined FUN_143ec0234(void)

void FUN_143ec0234(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb933d8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb933d8 = FUN_140002ddd(FUN_146570da0,uVar1,L"GbxBrainAspect_UseWeapon");
  }
  return;
}



// FUNCTION 143ec027c FUN_143ec027c body=57 status=ok
// SIG undefined FUN_143ec027c(void)

void FUN_143ec027c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93430 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93430 = FUN_140002ddd(FUN_146570e37,uVar1,L"GbxBrainTaskSettings_CoverAttack");
  }
  return;
}



// FUNCTION 143ec02c4 FUN_143ec02c4 body=57 status=ok
// SIG undefined FUN_143ec02c4(void)

void FUN_143ec02c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93448 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93448 = FUN_140002ddd(FUN_146570ecd,uVar1,L"GbxBrainTaskSettings_Hide");
  }
  return;
}



// FUNCTION 143ec030c FUN_143ec030c body=57 status=ok
// SIG undefined FUN_143ec030c(void)

void FUN_143ec030c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93460 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93460 = FUN_140002ddd(FUN_146570f2c,uVar1,L"GbxBrainTaskSettings_Wait");
  }
  return;
}



// FUNCTION 143ec0354 FUN_143ec0354 body=57 status=ok
// SIG undefined FUN_143ec0354(void)

void FUN_143ec0354(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93478 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93478 = FUN_140002ddd(FUN_146570fc3,uVar1,L"GbxBrainTaskSettings_WeaponAttack");
  }
  return;
}



// FUNCTION 143ec039c FUN_143ec039c body=57 status=ok
// SIG undefined FUN_143ec039c(void)

void FUN_143ec039c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93490 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93490 = FUN_140002ddd(FUN_146571059,uVar1,L"GbxBrainTaskSettings_WeaponAttack_v2");
  }
  return;
}



// FUNCTION 143ec0420 FUN_143ec0420 body=36 status=ok
// SIG undefined FUN_143ec0420(void)

undefined8 FUN_143ec0420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143ec0444 FUN_143ec0444 body=57 status=ok
// SIG undefined FUN_143ec0444(void)

void FUN_143ec0444(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb934f0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb934f0 = FUN_140002ddd(FUN_1465712b1,uVar1,L"GbxCondition_WeaponHeldComponent");
  }
  return;
}



// FUNCTION 143ec049a FUN_143ec049a body=1427 status=ok
// SIG undefined FUN_143ec049a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ec049a(void)

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
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47bc90);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb93138 = (ulonglong)uVar1;
  local_50 = "Use";
  local_48 = 3;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb93140 = (ulonglong)uVar1;
  local_50 = "Sight";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb93148 = (ulonglong)uVar1;
  local_50 = "TargetLock";
  local_48 = 10;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb93150 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47c140);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47c230);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47c580,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47c7d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47d290);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47d640,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b47e060;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47e080,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47e440,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47e5b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47e9b0,1,&PTR_FUN_14b47e980);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47eb60,1,&PTR_FUN_14b47eb30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47ec20);
  FUN_14098d3d2(FUN_143ebfd33,L"/Script/GbxWeapon",L"EWeaponActionChannel",&DAT_14cb93300);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47ef60,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b47f310,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47f470);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47f6b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47f8f0);
  _DAT_14cb933e8 = 0x47efffffe0000000;
  _DAT_14cb933f0 = 0x47efffffe0000000;
  _DAT_14cb933f8 = 0x47efffffe0000000;
  _DAT_14cb93400 = 0x47efffffe0000000;
  _DAT_14cb93408 = 0x47efffffe0000000;
  _DAT_14cb93410 = 0x47efffffe0000000;
  _DAT_14cb93418 = 0x47efffffe0000000;
  _DAT_14cb93420 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b47fce0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4801e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b480600);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b480980);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4812f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4813b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4814c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b481620);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b481730);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b481830);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b481990);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b481d20,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b4820b0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b482690,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b483270,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec0a30 FUN_143ec0a30 body=55 status=ok
// SIG undefined FUN_143ec0a30(void)

void FUN_143ec0a30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93680 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93680 = FUN_14171c317(FUN_146571fc3,uVar1,L"EShotDamageModifierType");
  }
  return;
}



// FUNCTION 143ec0a67 FUN_143ec0a67 body=55 status=ok
// SIG undefined FUN_143ec0a67(void)

void FUN_143ec0a67(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93710 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93710 = FUN_14171c317(FUN_1465721b2,uVar1,L"EWeaponUseEvent");
  }
  return;
}



// FUNCTION 143ec0a9e FUN_143ec0a9e body=55 status=ok
// SIG undefined FUN_143ec0a9e(void)

void FUN_143ec0a9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93728 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93728 = FUN_14171c317(FUN_1465721e1,uVar1,L"EWeaponHeatNotifyEvent");
  }
  return;
}



// FUNCTION 143ec0ad5 FUN_143ec0ad5 body=55 status=ok
// SIG undefined FUN_143ec0ad5(void)

void FUN_143ec0ad5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93740 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93740 = FUN_14171c317(FUN_146572210,uVar1,L"EWeaponAudioBehaviorScope");
  }
  return;
}



// FUNCTION 143ec0b0c FUN_143ec0b0c body=55 status=ok
// SIG undefined FUN_143ec0b0c(void)

void FUN_143ec0b0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93788 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93788 = FUN_14171c317(FUN_146572334,uVar1,L"EAtt_Weapon");
  }
  return;
}



// FUNCTION 143ec0b43 FUN_143ec0b43 body=228 status=ok
// SIG undefined FUN_143ec0b43(void)

longlong FUN_143ec0b43(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb939a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940982;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c26;
    local_38 = &LAB_148a0db91;
    local_40 = &LAB_146572ba7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xdd8;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb939a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec0c39 FUN_143ec0c39 body=55 status=ok
// SIG undefined FUN_143ec0c39(void)

void FUN_143ec0c39(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93b40 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93b40 = FUN_14171c317(FUN_1465736e2,uVar1,L"EAudioWeaponStates");
  }
  return;
}



// FUNCTION 143ec0c78 FUN_143ec0c78 body=48 status=ok
// SIG undefined FUN_143ec0c78(void)

longlong FUN_143ec0c78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec0ca8 FUN_143ec0ca8 body=48 status=ok
// SIG undefined FUN_143ec0ca8(void)

longlong FUN_143ec0ca8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec0cd8 FUN_143ec0cd8 body=48 status=ok
// SIG undefined FUN_143ec0cd8(void)

longlong FUN_143ec0cd8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec0d08 FUN_143ec0d08 body=48 status=ok
// SIG undefined FUN_143ec0d08(void)

longlong FUN_143ec0d08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec0d6c FUN_143ec0d6c body=57 status=ok
// SIG undefined FUN_143ec0d6c(void)

void FUN_143ec0d6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb935d0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb935d0 = FUN_140002ddd(FUN_146571c7d,uVar1,L"GpsGeneratorSettings_TargetingOwner");
  }
  return;
}



// FUNCTION 143ec0db4 FUN_143ec0db4 body=57 status=ok
// SIG undefined FUN_143ec0db4(void)

void FUN_143ec0db4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb935e8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb935e8 = FUN_140002ddd(FUN_146571cdc,uVar1,L"GpsGenerator_TargetingOwner");
  }
  return;
}



// FUNCTION 143ec0e78 FUN_143ec0e78 body=57 status=ok
// SIG undefined FUN_143ec0e78(void)

void FUN_143ec0e78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb936b0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb936b0 = FUN_140002ddd(FUN_146572088,uVar1,L"ShotModifierDef");
  }
  return;
}



// FUNCTION 143ec0ece FUN_143ec0ece body=226 status=ok
// SIG undefined FUN_143ec0ece(void)

void FUN_143ec0ece(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b490d30;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3ea8f5c3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3ea8f5c3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3ea8f5c3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xf00000d0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  param_1[0x20] = 0x3e4ccccd3f333333;
  *(undefined4 *)(param_1 + 0x21) = 0x3ecccccd;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xaaad1010;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// FUNCTION 143ec1008 FUN_143ec1008 body=57 status=ok
// SIG undefined FUN_143ec1008(void)

void FUN_143ec1008(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93a80 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93a80 = FUN_140002ddd(FUN_146573129,uVar1,L"WeaponAttributeContextResolver");
  }
  return;
}



// FUNCTION 143ec1088 FUN_143ec1088 body=97 status=ok
// SIG undefined FUN_143ec1088(void)

void FUN_143ec1088(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa8);
  *(undefined4 *)(param_2 + 9) = 0xf00000d0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x15) = 0x3f800000;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *param_2 = &PTR_FUN_14b4914a0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 143ec10f6 FUN_143ec10f6 body=57 status=ok
// SIG undefined FUN_143ec10f6(void)

void FUN_143ec10f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ab0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ab0 = FUN_140002ddd(FUN_14657321e,uVar1,L"WeaponAttributeEffectAspect");
  }
  return;
}



// FUNCTION 143ec113e FUN_143ec113e body=269 status=ok
// SIG undefined FUN_143ec113e(void)

undefined8 * FUN_143ec113e(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_14b491670;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  memset(param_1 + 6,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x157) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 3;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 7;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x182) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a2) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return param_1;
}



// FUNCTION 143ec1288 FUN_143ec1288 body=66 status=ok
// SIG undefined FUN_143ec1288(void)

void FUN_143ec1288(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0x54) = 1;
  *(undefined1 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 7;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined1 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 143ec13e8 FUN_143ec13e8 body=342 status=ok
// SIG undefined FUN_143ec13e8(void)

undefined8 * FUN_143ec13e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *param_1 = &PTR_FUN_14b492450;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  memset(param_1 + 0x29,0,0x214);
  *(undefined4 *)((longlong)param_1 + 900) = 0x40a00000;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a5) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x79) = 2;
  uVar1 = DAT_14c8463d8;
  param_1[0x7a] = DAT_14c8463d0;
  param_1[0x7b] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x7c] = DAT_14c8463e0;
  param_1[0x7d] = uVar1;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  return param_1;
}



// FUNCTION 143ec153e FUN_143ec153e body=1357 status=ok
// SIG undefined FUN_143ec153e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ec153e(void)

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
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b487340);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b487610);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b487940);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb93658 = (ulonglong)uVar1;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b487a30,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b488160;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b488180);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b488260);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b488340);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b488530,1,0);
  local_50 = "Use";
  local_48 = 3;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb936f0 = (ulonglong)uVar1;
  local_50 = "Sight";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb936f8 = (ulonglong)uVar1;
  local_50 = "TargetLock";
  local_48 = 10;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb93700 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14cb937e8,L"ClientConsumeAmmo",1);
  FUN_1446f470e(&DAT_14cb937f8,L"ClientLock",1);
  FUN_1446f470e(&DAT_14cb93808,L"ClientRefillAmmo",1);
  FUN_1446f470e(&DAT_14cb93818,L"ClientSetAmmoState",1);
  FUN_1446f470e(&DAT_14cb93828,L"ClientSetLoadedAmmo",1);
  FUN_1446f470e(&DAT_14cb93838,L"ClientStopReloading",1);
  FUN_1446f470e(&DAT_14cb93848,L"ClientUnlock",1);
  FUN_1446f470e(&DAT_14cb938b8,L"ServerAmmoGivenToInterruptedReload",1);
  FUN_1446f470e(&DAT_14cb938c8,L"ServerEquipInterruptible",1);
  FUN_1446f470e(&DAT_14cb938d8,L"ServerInterruptReloadToUse",1);
  FUN_1446f470e(&DAT_14cb938e8,L"ServerLock",1);
  FUN_1446f470e(&DAT_14cb938f8,L"ServerRestartAutoUse",1);
  FUN_1446f470e(&DAT_14cb93908,L"ServerSendAmmoState",1);
  FUN_1446f470e(&DAT_14cb93918,L"ServerSetPatternSeed",1);
  FUN_1446f470e(&DAT_14cb93928,L"ServerStartReloading",1);
  FUN_1446f470e(&DAT_14cb93938,L"ServerStartUsing",1);
  FUN_1446f470e(&DAT_14cb93948,L"ServerStopModeSwitch",1);
  FUN_1446f470e(&DAT_14cb93958,L"ServerStopUsing",1);
  FUN_1446f470e(&DAT_14cb93968,L"ServerSwitchMode",1);
  FUN_1446f470e(&DAT_14cb93978,L"ServerUnlock",1);
  FUN_1446f470e(&DAT_14cb93988,L"ServerUpdateFPUseOffet",1);
  ppuStack_60 = &PTR_FUN_14b48c8c0;
  local_68 = 2;
  uStack_58 = 4;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b48c990,1,&PTR_FUN_14b48c940);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b48cae0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b48cc50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b48cef0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b48d7e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b48d880);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b48f6d0;
  local_68 = 8;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b48f6f0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec1a8c FUN_143ec1a8c body=55 status=ok
// SIG undefined FUN_143ec1a8c(void)

void FUN_143ec1a8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93c10 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93c10 = FUN_14171c317(FUN_146573e38,uVar1,L"EAtt_WeaponBehaviorAmmo");
  }
  return;
}



// FUNCTION 143ec1ac3 FUN_143ec1ac3 body=55 status=ok
// SIG undefined FUN_143ec1ac3(void)

void FUN_143ec1ac3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93c28 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93c28 = FUN_14171c317(FUN_146573e67,uVar1,L"EAmmoRegenType");
  }
  return;
}



// FUNCTION 143ec1afa FUN_143ec1afa body=55 status=ok
// SIG undefined FUN_143ec1afa(void)

void FUN_143ec1afa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93c40 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93c40 = FUN_14171c317(FUN_146573e96,uVar1,L"EAmmoRegenCondition");
  }
  return;
}



// FUNCTION 143ec1b31 FUN_143ec1b31 body=55 status=ok
// SIG undefined FUN_143ec1b31(void)

void FUN_143ec1b31(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93c78 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93c78 = FUN_14171c317(FUN_146573f5c,uVar1,L"EAtt_WeaponBehaviorDamageModifier");
  }
  return;
}



// FUNCTION 143ec1b68 FUN_143ec1b68 body=55 status=ok
// SIG undefined FUN_143ec1b68(void)

void FUN_143ec1b68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ca8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ca8 = FUN_14171c317(FUN_146574022,uVar1,L"EAtt_WeaponBehaviorFire");
  }
  return;
}



// FUNCTION 143ec1b9f FUN_143ec1b9f body=55 status=ok
// SIG undefined FUN_143ec1b9f(void)

void FUN_143ec1b9f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93cd8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93cd8 = FUN_14171c317(FUN_146574118,uVar1,L"EAtt_WeaponBehaviorHeat");
  }
  return;
}



// FUNCTION 143ec1bd6 FUN_143ec1bd6 body=55 status=ok
// SIG undefined FUN_143ec1bd6(void)

void FUN_143ec1bd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d38 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d38 = FUN_14171c317(FUN_1465742d4,uVar1,L"EAtt_WeaponBehaviorSway");
  }
  return;
}



// FUNCTION 143ec1c0d FUN_143ec1c0d body=55 status=ok
// SIG undefined FUN_143ec1c0d(void)

void FUN_143ec1c0d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d68 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d68 = FUN_14171c317(FUN_14657439a,uVar1,L"EAtt_WeaponBehaviorUse");
  }
  return;
}



// FUNCTION 143ec1c44 FUN_143ec1c44 body=55 status=ok
// SIG undefined FUN_143ec1c44(void)

void FUN_143ec1c44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d98 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d98 = FUN_14171c317(FUN_146574432,uVar1,L"EAtt_WeaponBehaviorVisibleAmmo");
  }
  return;
}



// FUNCTION 143ec1c7b FUN_143ec1c7b body=55 status=ok
// SIG undefined FUN_143ec1c7b(void)

void FUN_143ec1c7b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93db0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93db0 = FUN_14171c317(FUN_146574461,uVar1,L"EVisibleAmmoState");
  }
  return;
}



// FUNCTION 143ec1cb2 FUN_143ec1cb2 body=55 status=ok
// SIG undefined FUN_143ec1cb2(void)

void FUN_143ec1cb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93dc8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93dc8 = FUN_14171c317(FUN_146574492,uVar1,L"EVisibleAmmoUpdateMethod");
  }
  return;
}



// FUNCTION 143ec1ce9 FUN_143ec1ce9 body=55 status=ok
// SIG undefined FUN_143ec1ce9(void)

void FUN_143ec1ce9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93df8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93df8 = FUN_14171c317(FUN_14657455c,uVar1,L"EVisibleAmmoUseModeType");
  }
  return;
}



// FUNCTION 143ec1d20 FUN_143ec1d20 body=55 status=ok
// SIG undefined FUN_143ec1d20(void)

void FUN_143ec1d20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93e28 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93e28 = FUN_14171c317(FUN_146574622,uVar1,L"EAtt_WeaponBehaviorZoom");
  }
  return;
}



// FUNCTION 143ec1d57 FUN_143ec1d57 body=55 status=ok
// SIG undefined FUN_143ec1d57(void)

void FUN_143ec1d57(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ed0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ed0 = FUN_14171c317(FUN_1465749b0,uVar1,L"EWeaponAmmoResolverValue");
  }
  return;
}



// FUNCTION 143ec1d8e FUN_143ec1d8e body=55 status=ok
// SIG undefined FUN_143ec1d8e(void)

void FUN_143ec1d8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93f18 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93f18 = FUN_14171c317(FUN_146574aa5,uVar1,L"EWeaponFireRateState");
  }
  return;
}



// FUNCTION 143ec1e82 FUN_143ec1e82 body=57 status=ok
// SIG undefined FUN_143ec1e82(void)

void FUN_143ec1e82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93c90 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93c90 = FUN_140002ddd(FUN_146573fc3,uVar1,L"WeaponBehaviorDef_DamageModifier");
  }
  return;
}



// FUNCTION 143ec1ee4 FUN_143ec1ee4 body=57 status=ok
// SIG undefined FUN_143ec1ee4(void)

void FUN_143ec1ee4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93cf0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93cf0 = FUN_140002ddd(FUN_14657417f,uVar1,L"WeaponBehaviorDef_Heat");
  }
  return;
}



// FUNCTION 143ec1fa0 FUN_143ec1fa0 body=57 status=ok
// SIG undefined FUN_143ec1fa0(void)

void FUN_143ec1fa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d50 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d50 = FUN_140002ddd(FUN_14657433b,uVar1,L"WeaponBehaviorDef_Sway");
  }
  return;
}



// FUNCTION 143ec1ff6 FUN_143ec1ff6 body=117 status=ok
// SIG undefined FUN_143ec1ff6(void)

void FUN_143ec1ff6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xc5daac38;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 143ec206c FUN_143ec206c body=52 status=ok
// SIG undefined FUN_143ec206c(void)

void FUN_143ec206c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ec20c6 FUN_143ec20c6 body=57 status=ok
// SIG undefined FUN_143ec20c6(void)

void FUN_143ec20c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93e10 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93e10 = FUN_140002ddd(FUN_1465745c3,uVar1,L"WeaponBehaviorDef_VisibleAmmo");
  }
  return;
}



// FUNCTION 143ec218c FUN_143ec218c body=776 status=ok
// SIG undefined FUN_143ec218c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ec218c(void)

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
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b493f40,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b494040);
  local_58 = 3;
  ppuStack_60 = &PTR_FUN_14b494560;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4945c0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb93c68 = (ulonglong)uVar1;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b4947d0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4947f0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b4955c0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4955e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b495c70;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b495c90);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b495d40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b495e20);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b496390;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4963b0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b496970;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b496990);
  ppuStack_60 = &PTR_FUN_14b497460;
  local_68 = 2;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4974e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b4980c0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4980e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b498680;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b498720,1,&PTR_FUN_14b4986a0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b498830,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b4992c0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b499310,1,&PTR_FUN_14b4992e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b499560,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec2498 FUN_143ec2498 body=55 status=ok
// SIG undefined FUN_143ec2498(void)

void FUN_143ec2498(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94028 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94028 = FUN_14171c317(FUN_1465753a8,uVar1,L"EAtt_WeaponBehaviorReload");
  }
  return;
}



// FUNCTION 143ec24cf FUN_143ec24cf body=55 status=ok
// SIG undefined FUN_143ec24cf(void)

void FUN_143ec24cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94160 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94160 = FUN_14171c317(FUN_1465758ec,uVar1,L"EWeaponPutDownType");
  }
  return;
}



// FUNCTION 143ec2506 FUN_143ec2506 body=55 status=ok
// SIG undefined FUN_143ec2506(void)

void FUN_143ec2506(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94178 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94178 = FUN_14171c317(FUN_14657591b,uVar1,L"EWeaponEquipType");
  }
  return;
}



// FUNCTION 143ec253d FUN_143ec253d body=55 status=ok
// SIG undefined FUN_143ec253d(void)

void FUN_143ec253d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb941d8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb941d8 = FUN_14171c317(FUN_146575a75,uVar1,L"EResolverWeaponState");
  }
  return;
}



// FUNCTION 143ec2574 FUN_143ec2574 body=55 status=ok
// SIG undefined FUN_143ec2574(void)

void FUN_143ec2574(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94330 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94330 = FUN_14171c317(FUN_146576342,uVar1,L"EWeaponTargetLockContext");
  }
  return;
}



// FUNCTION 143ec25ab FUN_143ec25ab body=55 status=ok
// SIG undefined FUN_143ec25ab(void)

void FUN_143ec25ab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94348 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94348 = FUN_14171c317(FUN_146576371,uVar1,L"EWeaponTargetLockChannel");
  }
  return;
}



// FUNCTION 143ec25e2 FUN_143ec25e2 body=55 status=ok
// SIG undefined FUN_143ec25e2(void)

void FUN_143ec25e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94408 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94408 = FUN_14171c317(FUN_146576740,uVar1,L"EWeaponTriggerFeedbackMode");
  }
  return;
}



// FUNCTION 143ec2654 FUN_143ec2654 body=57 status=ok
// SIG undefined FUN_143ec2654(void)

void FUN_143ec2654(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94148 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94148 = FUN_140002ddd(FUN_14657588d,uVar1,L"WeaponDamageTypeAspect");
  }
  return;
}



// FUNCTION 143ec2730 FUN_143ec2730 body=57 status=ok
// SIG undefined FUN_143ec2730(void)

void FUN_143ec2730(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb941a8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb941a8 = FUN_140002ddd(FUN_1465759e6,uVar1,L"WeaponRecoilDef");
  }
  return;
}



// FUNCTION 143ec2786 FUN_143ec2786 body=57 status=ok
// SIG undefined FUN_143ec2786(void)

void FUN_143ec2786(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb942e8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb942e8 =
         FUN_140002ddd(FUN_1465761ed,uVar1,L"GbxContextParam_WeaponStatsPropertyResolver");
  }
  return;
}



// FUNCTION 143ec27ce FUN_143ec27ce body=57 status=ok
// SIG undefined FUN_143ec27ce(void)

void FUN_143ec27ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94300 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94300 = FUN_140002ddd(FUN_14657624c,uVar1,L"WeaponStatsContainer");
  }
  return;
}



// FUNCTION 143ec284c FUN_143ec284c body=93 status=ok
// SIG undefined FUN_143ec284c(void)

void FUN_143ec284c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x88);
  param_2[1] = 0;
  param_2[0xd] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  param_2[0x11] = 0;
  *param_2 = &PTR_FUN_14b4a7930;
  return;
}



// FUNCTION 143ec28b6 FUN_143ec28b6 body=57 status=ok
// SIG undefined FUN_143ec28b6(void)

void FUN_143ec28b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94318 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94318 = FUN_140002ddd(FUN_1465762e3,uVar1,L"WeaponStatsDef");
  }
  return;
}



// FUNCTION 143ec2944 FUN_143ec2944 body=838 status=ok
// SIG undefined FUN_143ec2944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ec2944(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49d5e0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b49d7c0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49d7e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49d8c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49dbb0,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb940d0 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49e590,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49e930,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49eac0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b49ec40);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b49ed50 + lVar2),L"/Script/GbxWeapon",
                  *(undefined8 *)((longlong)&PTR_u_EWeaponPutDownType_14b49ed58 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14b49ed60 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b49f010);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b49f670,1,&PTR_FUN_14b49f640);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b49f890;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b49f8b0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b4a1c00,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a1d60);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a1e20);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b4a23c0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b4a2400,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b4a3980,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a3ae0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b4a4490;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b4a4580,1,&PTR_FUN_14b4a44b0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec2ca4 FUN_143ec2ca4 body=462 status=ok
// SIG undefined FUN_143ec2ca4(void)

undefined8 FUN_143ec2ca4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar5 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b4a9d30;
  local_50[3] = 0;
  iVar7 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar7;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(puVar5 + 4) = *param_4;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar4;
  FUN_140ebcfd8(param_1,param_2,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143ec2dde;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ec2dde:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143ec2e74 FUN_143ec2e74 body=462 status=ok
// SIG undefined FUN_143ec2e74(void)

undefined8 FUN_143ec2e74(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar5 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b4a9da0;
  local_50[3] = 0;
  iVar7 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar7;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(puVar5 + 4) = *param_4;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar4;
  FUN_140ebcfd8(param_1,param_2,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143ec2fae;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ec2fae:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143ec3044 FUN_143ec3044 body=159 status=ok
// SIG undefined FUN_143ec3044(void)

void FUN_143ec3044(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  if ((char)param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0x588,param_2);
    FUN_1400bc8c2(param_1 + 0x5b0,param_2);
    FUN_1410e95c4(param_1,*(undefined1 *)(param_1 + 0x5b0));
  }
  else {
    FUN_1400bc96c(param_1 + 0x588,param_2);
    FUN_1410e9590(param_1,param_2,param_4);
    if (param_5 != '\0') {
      FUN_1400bc96c(param_1 + 0x5d8,param_2);
      goto LAB_143ec30cb;
    }
  }
  FUN_1400bc8c2(param_1 + 0x5d8,param_2);
LAB_143ec30cb:
  FUN_140c172b0(param_1,param_2,param_3);
  return;
}



// FUNCTION 143ec30e3 FUN_143ec30e3 body=69 status=ok
// SIG undefined FUN_143ec30e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ec30e3(void)

{
  _DAT_14cb945c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ec3125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb945c8,1);
  return;
}



// FUNCTION 143ec31da FUN_143ec31da body=189 status=ok
// SIG undefined FUN_143ec31da(void)

void FUN_143ec31da(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c17710(param_1,&local_58,param_5);
  lVar1 = local_58;
  if ((longlong)local_50 != 0) {
    lVar2 = 0;
    do {
      local_68 = *(undefined4 *)(lVar1 + lVar2);
      local_60 = param_6;
      FUN_143ec3298(param_1,param_2,param_3,param_4);
      lVar2 = lVar2 + 4;
    } while ((longlong)local_50 * 4 != lVar2);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ec3298 FUN_143ec3298 body=195 status=ok
// SIG undefined FUN_143ec3298(void)

void FUN_143ec3298(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint in_stack_00000028;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar5 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar5 = *(longlong *)(param_1 + 400);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & in_stack_00000028) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20) == in_stack_00000028)
        {
          if (lVar5 == 0) {
            return;
          }
          lVar3 = *(longlong *)(lVar5 + 8);
          plVar4 = *(longlong **)(lVar5 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (lVar3 != 0) {
            FUN_143ec3044();
          }
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000143ec3350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        iVar6 = *(int *)(lVar5 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 143ec336c FUN_143ec336c body=571 status=ok
// SIG undefined FUN_143ec336c(void)

void FUN_143ec336c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if ((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_98[2] = lVar5;
    *local_98 = &PTR_FUN_14b4aa240;
    local_98[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_98 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar6 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar6;
    puVar4[4] = param_1;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    FUN_14016fdb0(uVar2,local_a0,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_90 != 0) {
      if (local_98 == (undefined8 *)0x0) goto LAB_143ec3507;
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ec3507:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ec35a8 FUN_143ec35a8 body=253 status=ok
// SIG undefined FUN_143ec35a8(void)

void FUN_143ec35a8(longlong param_1,undefined8 param_2,undefined1 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1413d09bc(0,&local_58,0);
    lVar2 = local_58;
    lVar5 = (longlong)(int)uStack_50;
    if (lVar5 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar4);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_48), cVar3 != '\0'))
        {
          if (((param_4[1] == 0) || (0xfffffffd < (int)param_4[2] - 1U)) &&
             ((param_4[5] == 0 && (cVar3 = (**(code **)(*param_4 + 8))(param_4), cVar3 == '\0')))) {
            (**(code **)(*plVar1 + 0x5e8))(plVar1);
          }
          else {
            FUN_14126f802(plVar1,param_4);
          }
        }
        lVar4 = lVar4 + 8;
      } while (lVar5 * 8 != lVar4);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  FUN_140485912(param_4);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ec36a6 FUN_143ec36a6 body=264 status=ok
// SIG undefined FUN_143ec36a6(void)

longlong * FUN_143ec36a6(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = param_3;
  local_48 = param_4;
  FUN_1413d09bc(param_2,&local_68,0);
  lVar3 = local_68;
  lVar6 = (longlong)(int)uStack_60;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar7);
      if ((lVar2 != 0) && (cVar4 = FUN_143893b9e(lVar2,&local_50), cVar4 != '\0')) {
        uVar5 = FUN_1409179ca(lVar2);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_145f8e5b8(param_1,iVar1);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar5;
      }
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
  }
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec37b0 FUN_143ec37b0 body=648 status=ok
// SIG undefined FUN_143ec37b0(void)

void FUN_143ec37b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_2 == 0) || (lVar2 = *(longlong *)(param_2 + 0xa8), lVar2 == 0)) ||
     ((*(byte *)(param_2 + 0x2e4) & 1) == 0)) goto LAB_143ec38cc;
  if (DAT_14cb939a8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_140940982;
    local_30 = FUN_14081d0ea;
    local_38 = (code *)&LAB_146522c26;
    local_48 = &LAB_148a0db91;
    local_50 = (code *)&LAB_146572ba7;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0xdd8;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) {
    lVar3 = *(longlong *)(param_2 + 0xa8);
LAB_143ec3833:
    if (lVar3 == 0) goto LAB_143ec38cc;
    lVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0xa8);
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30) goto LAB_143ec3833;
    if (lVar3 == 0) goto LAB_143ec38f9;
  }
  if (DAT_14cb94538 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_1427b09ee;
    local_48 = &LAB_148a18249;
    local_50 = FUN_14657713c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10004001;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar1 = (longlong *)FUN_144718840(lVar3,DAT_14cb94538);
  if ((lVar2 == 0) && (plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (0 < *(int *)(lVar2 + 0xa8)) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x20);
      if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      else if (lVar2 == 0) goto LAB_143ec38a3;
LAB_143ec38f9:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  else {
    if (lVar2 != 0) goto LAB_143ec38f9;
    if (plVar1 == (longlong *)0x0) {
LAB_143ec38cc:
      if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_143ec38a3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 143ec3ab2 FUN_143ec3ab2 body=164 status=ok
// SIG undefined FUN_143ec3ab2(void)

undefined4 FUN_143ec3ab2(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if ((((*(char *)(param_1 + 0x34) == '\0') && (*(char *)(param_2 + 0x34) == '\0')) &&
      (*(longlong *)(param_1 + 0x58) == *(longlong *)(param_2 + 0x58))) &&
     (*(longlong *)(param_1 + 0x60) == *(longlong *)(param_2 + 0x60))) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == *(int *)(param_2 + 0x70)) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x68) + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x68) + lVar5);
          if (uVar6 != uVar3) break;
          if (uVar6 == 0) goto LAB_143ec3aea;
LAB_143ec3b1c:
          lVar5 = lVar5 + 2;
        }
        if ((uVar3 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_143ec3b1c;
        }
        if (uVar6 != uVar3) goto LAB_143ec3aca;
      }
    }
    else if (*(int *)(param_2 + 0x70) + iVar1 != 1) goto LAB_143ec3aca;
LAB_143ec3aea:
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x30) >> 8),
                     *(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30));
  }
  else {
LAB_143ec3aca:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143ec3b84 FUN_143ec3b84 body=440 status=ok
// SIG undefined FUN_143ec3b84(void)

void FUN_143ec3b84(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0 && (param_3 & 1) != 0) {
    if (DAT_14cb939a8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_140940982;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146522c26;
      local_68 = &LAB_148a0db91;
      local_70 = &LAB_146572ba7;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) &&
       (*(byte *)(param_1 + 0x30) != 0)) {
      lVar6 = 8;
      iVar7 = 0;
      bVar5 = *(byte *)(param_1 + 0x30);
      do {
        if ((((bVar5 & 1) != 0) && (iVar7 < *(int *)(param_2 + 0xbf0))) &&
           (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xbe8) + lVar6), lVar1 != 0)) {
          plVar2 = *(longlong **)(param_1 + 0x38);
          plVar3 = *(longlong **)(lVar1 + 0xc0);
          if (plVar3 != plVar2) {
            *(longlong **)(lVar1 + 0xc0) = plVar2;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          *(undefined4 *)(lVar1 + 200) = *(undefined4 *)(param_1 + 0x40);
        }
        lVar6 = lVar6 + 0x88;
        iVar7 = iVar7 + 1;
        bVar4 = 1 < bVar5;
        bVar5 = bVar5 >> 1;
      } while (bVar4);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec3e64 FUN_143ec3e64 body=267 status=ok
// SIG undefined FUN_143ec3e64(void)

bool FUN_143ec3e64(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  pcVar3 = *(code **)(*plVar2 + 0x5e8);
  if (pcVar3 != FUN_140972dde) {
    lVar5 = (*pcVar3)();
    goto LAB_143ec3f1e;
  }
  lVar5 = plVar2[0x76];
  if (lVar5 != 0) goto LAB_143ec3f1e;
  pcVar3 = *(code **)(*plVar2 + 0x5f8);
  if (pcVar3 == FUN_144784df4) {
    if (*(code **)(plVar2[0x784] + 0x18) == (code *)&LAB_144904684) {
      if (*(int *)((longlong)plVar2 + 0x75b4) != 0) {
        uVar1 = *(uint *)(plVar2 + 0xeb6);
        lVar5 = 0;
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143ec3f1e;
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar4 != (longlong *)0x0) &&
           (((int)plVar4[2] == *(int *)((longlong)plVar2 + 0x75b4) &&
            ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
            lVar5 = *plVar4;
          }
          else {
            lVar5 = 0;
          }
          lVar5 = lVar5 + 0x110;
          goto LAB_143ec3f3d;
        }
      }
    }
    else {
      lVar5 = (**(code **)(plVar2[0x784] + 0x18))(plVar2 + 0x784);
LAB_143ec3f3d:
      if (lVar5 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x20);
        goto LAB_143ec3f46;
      }
    }
  }
  else {
    lVar5 = (*pcVar3)();
LAB_143ec3f46:
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x3b0);
      goto LAB_143ec3f1e;
    }
  }
  lVar5 = 0;
LAB_143ec3f1e:
  return lVar5 != 0;
}



// FUNCTION 143ec3f86 FUN_143ec3f86 body=231 status=ok
// SIG undefined FUN_143ec3f86(void)

void FUN_143ec3f86(longlong param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  
  bVar5 = 1;
  if (param_2 == '\0') {
    bVar5 = *(byte *)(param_1 + 0x2d1) >> 7;
  }
  lVar3 = *(longlong *)(param_1 + 0x178);
  uVar2 = *(uint *)(lVar3 + 0xa0);
  if ((int)uVar2 < 2) {
LAB_143ec3fac:
    bVar6 = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x2b1) == '\x01') {
      if (bVar5 == 0) {
        uVar4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x30) + 0xbdb);
      }
      else {
        uVar4 = (*(byte *)(param_1 + 0x2f8) + 1) % uVar2;
      }
    }
    else {
      uVar4 = (*(int *)(param_1 + 0x2dc) + -1) % (int)uVar2;
      if ((int)uVar4 < 0) goto LAB_143ec3fac;
    }
    bVar6 = 0;
    if (uVar4 < uVar2) {
      bVar6 = (byte)uVar4;
    }
  }
  *(byte *)(param_1 + 0x2f8) = bVar6;
  if ((int)(uint)bVar6 < *(int *)(lVar3 + 0xa0)) {
    *(undefined8 *)(param_1 + 0x2f0) =
         *(undefined8 *)(*(longlong *)(lVar3 + 0x98) + (ulonglong)bVar6 * 8);
  }
  if (((bVar5 != 0) && (*(char *)(lVar3 + 0x2b1) == '\x01')) && (1 < *(int *)(lVar3 + 0xa0))) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    cVar1 = *(char *)(param_1 + 0x2d1);
    *(byte *)(lVar3 + 0xbdb) = bVar6;
    if ((-1 < cVar1) && (*(byte *)(lVar3 + 0xbdd) != bVar6)) {
      *(byte *)(lVar3 + 0xbdd) = bVar6;
      FUN_144a62f0c(lVar3,*(undefined8 *)(lVar3 + 0x28),0x13);
      return;
    }
  }
  return;
}



// FUNCTION 143ec406e FUN_143ec406e body=335 status=ok
// SIG undefined FUN_143ec406e(void)

void FUN_143ec406e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  bVar1 = *(byte *)(param_1 + 0xc4);
  bVar4 = bVar1 & 0xfe;
  *(byte *)(param_1 + 0xc4) = bVar4;
  if ((bVar1 & 2) != 0) {
    return;
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x80) + 0xd0);
  if ((bVar1 & 2) != 0) {
    return;
  }
  if ((bVar1 & 0xc) == 4) {
    return;
  }
  if (param_2 == (longlong *)0x0) goto LAB_143ec415f;
  pcVar3 = *(code **)(*param_2 + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    if (param_2[0x76] != 0) {
      return;
    }
    pcVar3 = *(code **)(*param_2 + 0x5f8);
    if (pcVar3 == FUN_144784df4) {
      if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
        if ((((*(int *)((longlong)param_2 + 0x75b4) != 0) &&
             (uVar2 = *(uint *)(param_2 + 0xeb6), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
           && (((plVar6 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar6 != (longlong *)0x0 &&
                ((int)plVar6[2] == *(int *)((longlong)param_2 + 0x75b4))) &&
               ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar5 = *plVar6;
          }
          else {
            lVar5 = 0;
          }
          lVar5 = lVar5 + 0x110;
          goto LAB_143ec4180;
        }
      }
      else {
        lVar5 = (**(code **)(param_2[0x784] + 0x18))(param_2 + 0x784);
LAB_143ec4180:
        if (lVar5 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x20);
          goto LAB_143ec4189;
        }
      }
    }
    else {
      lVar5 = (*pcVar3)(param_2);
LAB_143ec4189:
      if (lVar5 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x3b0);
        goto LAB_143ec4195;
      }
    }
  }
  else {
    lVar5 = (*pcVar3)(param_2);
LAB_143ec4195:
    if (lVar5 != 0) {
      return;
    }
  }
  bVar4 = *(byte *)(param_1 + 0xc4);
LAB_143ec415f:
  *(byte *)(param_1 + 0xc4) = bVar4 | 1;
  return;
}



// FUNCTION 143ec41cb FUN_143ec41cb body=91 status=ok
// SIG undefined FUN_143ec41cb(void)

void FUN_143ec41cb(void)

{
  if (DAT_14cb94990 != 0) {
    if (DAT_14cb94988 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb94988)(DAT_14cb94988,0);
    FUN_1446efa72(&DAT_14cb94988,0,0,0x10);
    DAT_14cb94990 = 0;
  }
  if (DAT_14cb94988 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ec4226 FUN_143ec4226 body=91 status=ok
// SIG undefined FUN_143ec4226(void)

void FUN_143ec4226(void)

{
  if (DAT_14cb949f0 != 0) {
    if (DAT_14cb949e8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb949e8)(DAT_14cb949e8,0);
    FUN_1446efa72(&DAT_14cb949e8,0,0,0x10);
    DAT_14cb949f0 = 0;
  }
  if (DAT_14cb949e8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ec4286 FUN_143ec4286 body=57 status=ok
// SIG undefined FUN_143ec4286(void)

void FUN_143ec4286(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94510 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94510 = FUN_140002ddd(FUN_146577047,uVar1,L"WeaponUseModeMaterialAspect");
  }
  return;
}



// FUNCTION 143ec42e4 FUN_143ec42e4 body=117 status=ok
// SIG undefined FUN_143ec42e4(void)

undefined1 FUN_143ec42e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      uVar1 = *(undefined4 *)(param_3 + lVar4);
      *(undefined4 *)(param_2 + 3 + lVar4) = *(undefined4 *)(param_3 + 3 + lVar4);
      *(undefined4 *)(param_2 + lVar4) = uVar1;
      lVar3 = *(longlong *)(param_3 + 8 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + 8 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4 + 8) = lVar3;
      lVar4 = lVar4 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143ec435a FUN_143ec435a body=108 status=ok
// SIG undefined FUN_143ec435a(void)

undefined8
FUN_143ec435a(undefined8 param_1,int *param_2,int *param_3,undefined8 param_4,undefined1 *param_5)

{
  longlong lVar1;
  byte bVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  bool bVar5;
  
  if ((*param_2 == *param_3) && ((char)param_2[1] == (char)param_3[1])) {
    lVar1 = *(longlong *)(param_3 + 2);
    bVar2 = lVar1 != 0 & DAT_14c950c29;
    uVar3 = (ulonglong)CONCAT31((int3)((uint)*param_2 >> 8),bVar2);
    if (bVar2 == 1) {
      uVar3 = FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 2) == lVar1) &&
       (uVar4 = (undefined7)(uVar3 >> 8),
       *(char *)((longlong)param_2 + 5) == *(char *)((longlong)param_3 + 5))) {
      bVar5 = *(char *)((longlong)param_2 + 6) == *(char *)((longlong)param_3 + 6);
      goto LAB_143ec4371;
    }
  }
  bVar5 = false;
  uVar4 = 0;
LAB_143ec4371:
  *param_5 = bVar5;
  return CONCAT71(uVar4,1);
}



// FUNCTION 143ec44ec FUN_143ec44ec body=266 status=ok
// SIG undefined FUN_143ec44ec(void)

void FUN_143ec44ec(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b4a99c0;
  *(undefined4 *)(param_2 + 6) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[7] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 143ec4602 FUN_143ec4602 body=57 status=ok
// SIG undefined FUN_143ec4602(void)

void FUN_143ec4602(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94528 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94528 = FUN_140002ddd(FUN_1465770dd,uVar1,L"WeaponUseModeNameAspect");
  }
  return;
}



// FUNCTION 143ec4642 FUN_143ec4642 body=29 status=ok
// SIG undefined FUN_143ec4642(void)

undefined8 FUN_143ec4642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec47de FUN_143ec47de body=101 status=ok
// SIG undefined FUN_143ec47de(void)

void FUN_143ec47de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec4844 FUN_143ec4844 body=101 status=ok
// SIG undefined FUN_143ec4844(void)

void FUN_143ec4844(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec48aa FUN_143ec48aa body=134 status=ok
// SIG undefined FUN_143ec48aa(void)

void FUN_143ec48aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9a20;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec4921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec494a FUN_143ec494a body=279 status=ok
// SIG undefined FUN_143ec494a(void)

undefined8 FUN_143ec494a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec4a5b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec4a5b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec4a5b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec49f5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x150) != 0) {
        FUN_140e2f690(*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
      }
      goto LAB_143ec49f5;
    }
  }
  uVar6 = 0;
LAB_143ec49f5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec4a62 FUN_143ec4a62 body=29 status=ok
// SIG undefined FUN_143ec4a62(void)

undefined8 FUN_143ec4a62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec4bfe FUN_143ec4bfe body=101 status=ok
// SIG undefined FUN_143ec4bfe(void)

void FUN_143ec4bfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec4c64 FUN_143ec4c64 body=101 status=ok
// SIG undefined FUN_143ec4c64(void)

void FUN_143ec4c64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec4cca FUN_143ec4cca body=134 status=ok
// SIG undefined FUN_143ec4cca(void)

void FUN_143ec4cca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9a90;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec4d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec4d5a FUN_143ec4d5a body=269 status=ok
// SIG undefined FUN_143ec4d5a(void)

undefined8 FUN_143ec4d5a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec4e61;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec4e61;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec4e61:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec4e15;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ec4e68(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143ec4e15;
    }
  }
  uVar6 = 0;
LAB_143ec4e15:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec4e68 FUN_143ec4e68 body=361 status=ok
// SIG undefined FUN_143ec4e68(void)

void FUN_143ec4e68(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 2);
  iVar1 = *param_1;
  lVar5 = (longlong)iVar1 * 0x170;
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x28 + lVar5);
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(lVar2 + 0xa0) + lVar5;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      FUN_14480f766(lVar3 + 0x3b8);
    }
    *(undefined8 *)(lVar5 + 0x98) = 0;
    if ((*(byte *)(lVar5 + 0x68) & 4) == 0) {
      FUN_140e7ec10(lVar2,iVar1);
      uVar4 = *(undefined8 *)(lVar2 + 0x150);
      if (DAT_14cb94538 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148a18249;
        local_50 = FUN_14657713c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      FUN_144718840(uVar4,DAT_14cb94538);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec4fea FUN_143ec4fea body=29 status=ok
// SIG undefined FUN_143ec4fea(void)

undefined8 FUN_143ec4fea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec5186 FUN_143ec5186 body=101 status=ok
// SIG undefined FUN_143ec5186(void)

void FUN_143ec5186(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec51ec FUN_143ec51ec body=101 status=ok
// SIG undefined FUN_143ec51ec(void)

void FUN_143ec51ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9b00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec5252 FUN_143ec5252 body=134 status=ok
// SIG undefined FUN_143ec5252(void)

void FUN_143ec5252(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9b00;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec52c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec52e2 FUN_143ec52e2 body=269 status=ok
// SIG undefined FUN_143ec52e2(void)

undefined8 FUN_143ec52e2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec53e9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec53e9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec53e9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec539d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ec53f0(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143ec539d;
    }
  }
  uVar6 = 0;
LAB_143ec539d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec53f0 FUN_143ec53f0 body=340 status=ok
// SIG undefined FUN_143ec53f0(void)

void FUN_143ec53f0(int *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 2);
  iVar2 = *param_1;
  lVar1 = *(longlong *)(lVar3 + 0xa0) + (longlong)iVar2 * 0x170;
  *(byte *)(lVar1 + 0x68) = *(byte *)(lVar1 + 0x68) & 0xfb;
  FUN_140457ffc(lVar1 + 0xa8,*(undefined8 *)(lVar3 + 0x150));
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    FUN_140e7ec10(lVar3,iVar2);
    uVar4 = *(undefined8 *)(lVar3 + 0x150);
    if (DAT_14cb94538 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148a18249;
      local_50 = FUN_14657713c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    FUN_144718840(uVar4,DAT_14cb94538);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec555e FUN_143ec555e body=29 status=ok
// SIG undefined FUN_143ec555e(void)

undefined8 FUN_143ec555e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec56fa FUN_143ec56fa body=101 status=ok
// SIG undefined FUN_143ec56fa(void)

void FUN_143ec56fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9b70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec5760 FUN_143ec5760 body=101 status=ok
// SIG undefined FUN_143ec5760(void)

void FUN_143ec5760(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9b70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec57c6 FUN_143ec57c6 body=134 status=ok
// SIG undefined FUN_143ec57c6(void)

void FUN_143ec57c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9b70;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec583d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec584c FUN_143ec584c body=66 status=ok
// SIG undefined FUN_143ec584c(void)

void FUN_143ec584c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143ec59a8(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec5890 FUN_143ec5890 body=279 status=ok
// SIG undefined FUN_143ec5890(void)

undefined8 FUN_143ec5890(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec59a1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec59a1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec59a1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec5955;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ec59a8(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143ec5955;
    }
  }
  uVar6 = 0;
LAB_143ec5955:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec59a8 FUN_143ec59a8 body=151 status=ok
// SIG undefined FUN_143ec59a8(void)

void FUN_143ec59a8(int *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *param_1;
  lVar4 = (longlong)iVar1;
  if (-1 < lVar4) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 2);
    if (iVar1 < *(int *)(lVar3 + 0xa8)) {
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0x28 + lVar4 * 0x170);
      if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
        FUN_1456cec3c(lVar5);
      }
    }
    else {
      lVar5 = 0;
    }
    if ((lVar5 == lVar2) && (iVar1 < *(int *)(lVar3 + 0xa8))) {
      lVar4 = lVar4 * 0x170;
      FUN_140e7ecae(lVar3,*(longlong *)(lVar3 + 0xa0) + lVar4);
      *(undefined8 *)(*(longlong *)(lVar3 + 0xa0) + 0x28 + lVar4) = 0;
      *(undefined8 *)(*(longlong *)(lVar3 + 0xa0) + 0x30 + lVar4) = 0;
    }
  }
  return;
}



// FUNCTION 143ec5a40 FUN_143ec5a40 body=29 status=ok
// SIG undefined FUN_143ec5a40(void)

undefined8 FUN_143ec5a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec5bdc FUN_143ec5bdc body=99 status=ok
// SIG undefined FUN_143ec5bdc(void)

void FUN_143ec5bdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec5c40 FUN_143ec5c40 body=99 status=ok
// SIG undefined FUN_143ec5c40(void)

void FUN_143ec5c40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec5ca4 FUN_143ec5ca4 body=132 status=ok
// SIG undefined FUN_143ec5ca4(void)

void FUN_143ec5ca4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9be0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec5d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec5d28 FUN_143ec5d28 body=65 status=ok
// SIG undefined FUN_143ec5d28(void)

void FUN_143ec5d28(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143ec5e82(param_1 + 0x20,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec5d6a FUN_143ec5d6a body=278 status=ok
// SIG undefined FUN_143ec5d6a(void)

undefined8 FUN_143ec5d6a(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec5e7a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec5e7a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec5e7a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec5e2e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ec5e82(param_1 + 0x20,&local_29);
      uVar6 = 1;
      goto LAB_143ec5e2e;
    }
  }
  uVar6 = 0;
LAB_143ec5e2e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec5e82 FUN_143ec5e82 body=366 status=ok
// SIG undefined FUN_143ec5e82(void)

void FUN_143ec5e82(longlong param_1,char *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*param_2 == '\x01') && (*(int *)(param_1 + 8) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 4), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)))) &&
     (((int)plVar3[2] == *(int *)(param_1 + 8) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))))) {
    if (DAT_14cb94538 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148a18249;
      local_50 = FUN_14657713c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar3 = (longlong *)FUN_144718840(lVar2,DAT_14cb94538);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec6004 FUN_143ec6004 body=29 status=ok
// SIG undefined FUN_143ec6004(void)

undefined8 FUN_143ec6004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec61a0 FUN_143ec61a0 body=101 status=ok
// SIG undefined FUN_143ec61a0(void)

void FUN_143ec61a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec6206 FUN_143ec6206 body=101 status=ok
// SIG undefined FUN_143ec6206(void)

void FUN_143ec6206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec626c FUN_143ec626c body=134 status=ok
// SIG undefined FUN_143ec626c(void)

void FUN_143ec626c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9c50;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec62e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec632c FUN_143ec632c body=311 status=ok
// SIG undefined FUN_143ec632c(void)

undefined8 FUN_143ec632c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec645d;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143ec645d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec645d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec63d7;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0);
      plVar3 = *(longlong **)(lVar6 + 0x20 + (longlong)*(int *)(param_1 + 0x20) * 0x170);
      uVar7 = 1;
      if ((plVar3 != (longlong *)0x0) &&
         (*(char *)(*(longlong *)(param_1 + 0x28) + 0x168) == '\x01')) {
        uVar7 = 1;
        (**(code **)(*plVar3 + 0x330))(plVar3,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
      }
      goto LAB_143ec63d7;
    }
  }
  uVar7 = 0;
LAB_143ec63d7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec6464 FUN_143ec6464 body=29 status=ok
// SIG undefined FUN_143ec6464(void)

undefined8 FUN_143ec6464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec6600 FUN_143ec6600 body=101 status=ok
// SIG undefined FUN_143ec6600(void)

void FUN_143ec6600(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec6666 FUN_143ec6666 body=101 status=ok
// SIG undefined FUN_143ec6666(void)

void FUN_143ec6666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec66cc FUN_143ec66cc body=134 status=ok
// SIG undefined FUN_143ec66cc(void)

void FUN_143ec66cc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9cc0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec6743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec675c FUN_143ec675c body=269 status=ok
// SIG undefined FUN_143ec675c(void)

undefined8 FUN_143ec675c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec6863;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec6863;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec6863:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec6817;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ec686a(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143ec6817;
    }
  }
  uVar6 = 0;
LAB_143ec6817:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec686a FUN_143ec686a body=48 status=ok
// SIG undefined FUN_143ec686a(void)

void FUN_143ec686a(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + 0xa0);
  lVar2 = *(longlong *)(lVar1 + 0x20 + (longlong)*param_1 * 0x170);
  if ((lVar2 != 0) && (*(char *)(*(longlong *)(param_1 + 2) + 400) == '\x01')) {
    FUN_140e17250(lVar2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
    return;
  }
  return;
}



// FUNCTION 143ec689a FUN_143ec689a body=29 status=ok
// SIG undefined FUN_143ec689a(void)

undefined8 FUN_143ec689a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec6a36 FUN_143ec6a36 body=101 status=ok
// SIG undefined FUN_143ec6a36(void)

void FUN_143ec6a36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec6a9c FUN_143ec6a9c body=101 status=ok
// SIG undefined FUN_143ec6a9c(void)

void FUN_143ec6a9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec6b02 FUN_143ec6b02 body=134 status=ok
// SIG undefined FUN_143ec6b02(void)

void FUN_143ec6b02(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9d30;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec6b79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec6bce FUN_143ec6bce body=324 status=ok
// SIG undefined FUN_143ec6bce(void)

undefined8 FUN_143ec6bce(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec6d0c;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143ec6d0c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec6d0c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec6c79;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0);
      lVar7 = (longlong)*(int *)(param_1 + 0x20) * 0x170;
      plVar3 = *(longlong **)(lVar6 + 0x20 + lVar7);
      uVar8 = 1;
      if ((plVar3 != (longlong *)0x0) &&
         ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x168) != '\0' ||
          (*(char *)(lVar6 + lVar7 + 0x120) == '\x01')))) {
        uVar8 = 1;
        (**(code **)(*plVar3 + 0x330))(plVar3,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
      }
      goto LAB_143ec6c79;
    }
  }
  uVar8 = 0;
LAB_143ec6c79:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec6d14 FUN_143ec6d14 body=29 status=ok
// SIG undefined FUN_143ec6d14(void)

undefined8 FUN_143ec6d14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec6eb0 FUN_143ec6eb0 body=101 status=ok
// SIG undefined FUN_143ec6eb0(void)

void FUN_143ec6eb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9da0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec6f16 FUN_143ec6f16 body=101 status=ok
// SIG undefined FUN_143ec6f16(void)

void FUN_143ec6f16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9da0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec6f7c FUN_143ec6f7c body=134 status=ok
// SIG undefined FUN_143ec6f7c(void)

void FUN_143ec6f7c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9da0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec6ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec700c FUN_143ec700c body=269 status=ok
// SIG undefined FUN_143ec700c(void)

undefined8 FUN_143ec700c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec7113;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec7113;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec7113:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec70c7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143ec711a(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143ec70c7;
    }
  }
  uVar6 = 0;
LAB_143ec70c7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec711a FUN_143ec711a body=61 status=ok
// SIG undefined FUN_143ec711a(void)

void FUN_143ec711a(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + 0xa0);
  lVar3 = (longlong)*param_1 * 0x170;
  lVar2 = *(longlong *)(lVar1 + 0x20 + lVar3);
  if ((lVar2 != 0) &&
     ((*(char *)(*(longlong *)(param_1 + 2) + 400) != '\0' ||
      (*(char *)(lVar1 + lVar3 + 0x148) == '\x01')))) {
    FUN_140e17250(lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
    return;
  }
  return;
}



// FUNCTION 143ec7158 FUN_143ec7158 body=31 status=ok
// SIG undefined FUN_143ec7158(void)

undefined8 FUN_143ec7158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec717c FUN_143ec717c body=31 status=ok
// SIG undefined FUN_143ec717c(void)

undefined8 FUN_143ec717c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec719c FUN_143ec719c body=31 status=ok
// SIG undefined FUN_143ec719c(void)

undefined8 FUN_143ec719c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec71bc FUN_143ec71bc body=31 status=ok
// SIG undefined FUN_143ec71bc(void)

undefined8 FUN_143ec71bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec71e4 FUN_143ec71e4 body=116 status=ok
// SIG undefined FUN_143ec71e4(void)

void FUN_143ec71e4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 143ec7258 FUN_143ec7258 body=29 status=ok
// SIG undefined FUN_143ec7258(void)

undefined8 FUN_143ec7258(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec73fe FUN_143ec73fe body=101 status=ok
// SIG undefined FUN_143ec73fe(void)

void FUN_143ec73fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec7464 FUN_143ec7464 body=101 status=ok
// SIG undefined FUN_143ec7464(void)

void FUN_143ec7464(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143ec74ca FUN_143ec74ca body=134 status=ok
// SIG undefined FUN_143ec74ca(void)

void FUN_143ec74ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa1d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec7541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec75ac FUN_143ec75ac body=275 status=ok
// SIG undefined FUN_143ec75ac(void)

undefined8 FUN_143ec75ac(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec76b9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec76b9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec76b9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec766d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_143ec766d;
    }
  }
  uVar6 = 0;
LAB_143ec766d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec76c0 FUN_143ec76c0 body=29 status=ok
// SIG undefined FUN_143ec76c0(void)

undefined8 FUN_143ec76c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec785c FUN_143ec785c body=93 status=ok
// SIG undefined FUN_143ec785c(void)

void FUN_143ec785c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ec78ba FUN_143ec78ba body=93 status=ok
// SIG undefined FUN_143ec78ba(void)

void FUN_143ec78ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ec7918 FUN_143ec7918 body=126 status=ok
// SIG undefined FUN_143ec7918(void)

void FUN_143ec7918(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa240;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec7987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec79a6 FUN_143ec79a6 body=273 status=ok
// SIG undefined FUN_143ec79a6(void)

undefined8 FUN_143ec79a6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec7ab1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec7ab1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ec7ab1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec7a65;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14126f802(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x20) + 0x3a8);
      uVar6 = 1;
      goto LAB_143ec7a65;
    }
  }
  uVar6 = 0;
LAB_143ec7a65:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec7ab8 FUN_143ec7ab8 body=31 status=ok
// SIG undefined FUN_143ec7ab8(void)

undefined8 FUN_143ec7ab8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec7bc6 FUN_143ec7bc6 body=32 status=ok
// SIG undefined FUN_143ec7bc6(void)

void FUN_143ec7bc6(undefined8 *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 143ec7c26 FUN_143ec7c26 body=29 status=ok
// SIG undefined FUN_143ec7c26(void)

undefined8 FUN_143ec7c26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec7c44 FUN_143ec7c44 body=31 status=ok
// SIG undefined FUN_143ec7c44(void)

undefined8 FUN_143ec7c44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec7cb2 FUN_143ec7cb2 body=29 status=ok
// SIG undefined FUN_143ec7cb2(void)

undefined8 FUN_143ec7cb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec7e4e FUN_143ec7e4e body=93 status=ok
// SIG undefined FUN_143ec7e4e(void)

void FUN_143ec7e4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa3c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ec7eac FUN_143ec7eac body=93 status=ok
// SIG undefined FUN_143ec7eac(void)

void FUN_143ec7eac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa3c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ec7f0a FUN_143ec7f0a body=126 status=ok
// SIG undefined FUN_143ec7f0a(void)

void FUN_143ec7f0a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa3c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ec7f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ec7f98 FUN_143ec7f98 body=271 status=ok
// SIG undefined FUN_143ec7f98(void)

undefined8 FUN_143ec7f98(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ec80a1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ec80a1;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_143ec80a1:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ec8059;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x328) = 0;
      uVar5 = 1;
      goto LAB_143ec8059;
    }
  }
  uVar5 = 0;
LAB_143ec8059:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ec80fc FUN_143ec80fc body=12 status=ok
// SIG undefined FUN_143ec80fc(void)

void FUN_143ec80fc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ec8105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ec8108 FUN_143ec8108 body=29 status=ok
// SIG undefined FUN_143ec8108(void)

undefined8 FUN_143ec8108(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec8126 FUN_143ec8126 body=31 status=ok
// SIG undefined FUN_143ec8126(void)

undefined8 FUN_143ec8126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec8234 FUN_143ec8234 body=31 status=ok
// SIG undefined FUN_143ec8234(void)

undefined8 FUN_143ec8234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec8336 FUN_143ec8336 body=31 status=ok
// SIG undefined FUN_143ec8336(void)

undefined8 FUN_143ec8336(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec83f0 FUN_143ec83f0 body=31 status=ok
// SIG undefined FUN_143ec83f0(void)

undefined8 FUN_143ec83f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec845e FUN_143ec845e body=31 status=ok
// SIG undefined FUN_143ec845e(void)

undefined8 FUN_143ec845e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ec856c FUN_143ec856c body=7267 status=ok
// SIG undefined FUN_143ec856c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ec856c(void)

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
  undefined1 auStack_238 [32];
  ulonglong local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  double local_200;
  double local_1f8;
  undefined8 uStack_1f0;
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
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  char *local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uStack_210 = 0;
  uStack_208 = 0;
  local_218 = 2;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a7c10);
  uStack_210 = 0;
  uStack_208 = 0;
  local_218 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a7e60);
  uStack_210 = 0;
  uStack_208 = 0;
  local_218 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a80b0);
  uStack_210 = 0;
  uStack_208 = 0;
  local_218 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a83e0);
  uStack_210 = 0;
  uStack_208 = 0;
  local_218 = 1;
  FUN_14282b410(L"/Script/GbxWeapon",0,0,&PTR_FUN_14b4a8510);
  local_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  FUN_14282b410(L"/Script/GbxWeapon",&PTR_FUN_14b4a8870,1,0);
  local_158 = "AssetRegistry";
  uStack_150._0_5_ = 0xd;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94550 = (ulonglong)uVar12;
  local_158 = "Use";
  uStack_150._0_5_ = 3;
  uVar12 = FUN_14001a6c0(&local_158,1);
  DAT_14cb94558 = (ulonglong)uVar12;
  local_158 = "Sight";
  uStack_150._0_5_ = 5;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94560 = (ulonglong)uVar12;
  local_158 = "TargetLock";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,10);
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94568 = (ulonglong)uVar12;
  FUN_1400b22c2(&local_158,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar11 = FUN_140b10a34(&local_158,&DAT_14cb94570);
  if (cVar11 == '\0') {
    _DAT_14cb94570 = 0;
    uRam000000014cb94578 = 0;
  }
  if (local_158 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_158 = "bone";
  uStack_150._0_5_ = 4;
  FUN_14001a6c0(&local_158,1);
  local_158 = "active_weapon_slots";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,0x13);
  FUN_14001a6c0(&local_158,1);
  _DAT_14cb94584 = 0;
  FUN_14052b5e0(&DAT_14cb94580,"socket",0);
  _DAT_14cb94590 = "socket";
  _DAT_14cb9459c = 0;
  FUN_14052b5e0(&DAT_14cb94598,"accuracy_pool",0);
  _DAT_14cb945a8 = "accuracy_pool";
  local_158 = (char *)CONCAT44(local_158._4_4_,1);
  local_218 = local_218 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb945c0,L"a.gbx.AIWeaponUser.TickManager",&local_158,
                L"Whether the AIWeaponUserManager ticks. 0 for disabled, non-zero for enabled.");
  atexit(FUN_143ec30e3);
  local_218 = local_218 & 0xffffffff00000000;
  FUN_1412cc41e(&DAT_14cb945d8,L"FAIWeaponUserManager",0,0);
  _DAT_14cb945e8 = 0x47efffffe0000000;
  _DAT_14cb945f0 = 0x47efffffe0000000;
  _DAT_14cb945f8 = 0x47efffffe0000000;
  _DAT_14cb94600 = 0x47efffffe0000000;
  _DAT_14cb94608 = 0x47efffffe0000000;
  _DAT_14cb94610 = 0x47efffffe0000000;
  _DAT_14cb94618 = 0x47efffffe0000000;
  _DAT_14cb94620 = 0x47efffffe0000000;
  _DAT_14cb94628 = 0x47efffffe0000000;
  _DAT_14cb94630 = 0x47efffffe0000000;
  _DAT_14cb94638 = 0x47efffffe0000000;
  _DAT_14cb94640 = 0x47efffffe0000000;
  _DAT_14cb94648 = 0x47efffffe0000000;
  _DAT_14cb94650 = 0x47efffffe0000000;
  _DAT_14cb94658 = 0x47efffffe0000000;
  _DAT_14cb94660 = 0x47efffffe0000000;
  _DAT_14cb94668 = 0x47efffffe0000000;
  _DAT_14cb94670 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb94678,L"ScriptedFiringLock",1);
  FUN_1446f470e(&DAT_14cb94680,L"UserEdge",1);
  FUN_1446f470e(&DAT_14cb946a0,L"AIHeldWeaponComp",1);
  local_158 = (char *)0x108b4e3149e103e1;
  uStack_150 = 1.90801037354088e+236;
  _DAT_14cb946a8 = 0x49e103e1;
  uRam000000014cb946ac = 0x108b4e31;
  uRam000000014cb946b0 = 0x9651cf6b;
  uRam000000014cb946b4 = 0x70fe011c;
  FUN_141005458(&local_158,0,L"AnimNotify_HideWeapon",0);
  atexit((_func_5014 *)&LAB_143ec3a60);
  local_158 = (char *)0x668446a3e86fcc4c;
  uStack_150._0_4_ = 0xa11f23dc;
  uStack_150._4_4_ = 0xd23fac2d;
  _DAT_14cb946b8 = 0xe86fcc4c;
  uRam000000014cb946bc = 0x668446a3;
  uRam000000014cb946c0 = 0xa11f23dc;
  uRam000000014cb946c4 = 0xd23fac2d;
  FUN_141005458(&local_158,0,L"AnimNotifyState_HideWeapon",0);
  atexit((_func_5014 *)&LAB_143ec3a6c);
  _DAT_14cb946cc = 0;
  FUN_14052b5e0(&DAT_14cb946c8,"usemodeattributeeffects",0);
  _DAT_14cb946d8 = "usemodeattributeeffects";
  _DAT_14cb946e4 = 0;
  FUN_14052b5e0(&DAT_14cb946e0,"attributeeffects",0);
  _DAT_14cb946f0 = "attributeeffects";
  local_158 = "barrel";
  uStack_150._0_5_ = 6;
  uVar12 = FUN_14001a6c0(&local_158,1);
  DAT_14cb946f8 = (ulonglong)uVar12;
  local_158 = "underbarrel";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,0xb);
  uVar12 = FUN_14001a6c0(&local_158,1);
  DAT_14cb94700 = (ulonglong)uVar12;
  ram0x00014cb9470c = 0;
  FUN_14052b5e0(&DAT_14cb94708,"behavior",0);
  _DAT_14cb94718 = "behavior";
  ram0x00014cb94724 = 0;
  FUN_14052b5e0(&DAT_14cb94720,"behavior_class",0);
  _DAT_14cb94730 = "behavior_class";
  ram0x00014cb9473c = 0;
  FUN_14052b5e0(&DAT_14cb94738,"behavior",0);
  _DAT_14cb94748 = "behavior";
  ram0x00014cb94754 = 0;
  FUN_14052b5e0(&DAT_14cb94750,"behavior_class",0);
  _DAT_14cb94760 = "behavior_class";
  _DAT_14cb94768 = 0xb33bbd2e;
  local_158 = DAT_14c846290;
  uStack_150 = DAT_14c846298;
  local_148 = DAT_14c8462a0;
  local_140 = DAT_14c8462a8;
  dStack_138 = DAT_14c8462b0;
  local_130 = DAT_14c8462b8;
  local_128 = DAT_14c8462c0;
  dStack_120 = DAT_14c8462c8;
  local_118 = DAT_14c8462d0;
  local_110 = DAT_14c8462d8;
  dStack_108 = DAT_14c8462e0;
  local_100 = DAT_14c8462e8;
  dVar17 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + (double)DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar17 * dVar17;
  uVar14 = SUB84(DAT_14c8464f0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    local_200 = DAT_14c8464e8;
    dVar18 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      local_200 = dVar17 * (1.0 / SQRT(dVar1));
      dVar18 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar18;
    local_1f8 = (double)CONCAT44(uVar15,uVar13);
  }
  else {
    local_1f8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_200 = dVar17;
  }
  uStack_1f0 = 0;
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
  local_168 = DAT_14c846300;
  local_178 = DAT_14c8462f0;
  dStack_170 = DAT_14c8462f8;
  local_198 = DAT_14c846308;
  dStack_190 = DAT_14c846310;
  local_188 = DAT_14c846318;
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
  DAT_14cb94770 = (void *)0x0;
  _DAT_14cb94778 = 10;
  FUN_1405b70fe(&DAT_14cb94770,10,0);
  pvVar9 = DAT_14cb94770;
  memcpy(DAT_14cb94770,&local_158,0x60);
  *(double *)((longlong)pvVar9 + 0x60) = dVar2;
  *(double *)((longlong)pvVar9 + 0x68) = local_200;
  *(double *)((longlong)pvVar9 + 0x70) = local_1f8;
  *(double *)((longlong)pvVar9 + 0x78) = dVar3;
  *(double *)((longlong)pvVar9 + 0x80) = dVar19;
  *(ulonglong *)((longlong)pvVar9 + 0x88) = CONCAT44(uVar15,uVar13);
  *(double *)((longlong)pvVar9 + 0x90) = local_178;
  *(double *)((longlong)pvVar9 + 0x98) = dStack_170;
  *(double *)((longlong)pvVar9 + 0xa0) = local_168;
  *(double *)((longlong)pvVar9 + 0xb8) = local_188;
  *(double *)((longlong)pvVar9 + 0xa8) = local_198;
  *(double *)((longlong)pvVar9 + 0xb0) = dStack_190;
  *(double *)((longlong)pvVar9 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar9 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar9 + 0xd0) = CONCAT44(uVar21,uVar20);
  *(double *)((longlong)pvVar9 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar9 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar9 + 0xe8) = CONCAT44(uVar16,uVar14);
  atexit((_func_5014 *)&LAB_143ec3d3d);
  uVar13 = SUB84(DAT_14c846290,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar14 = SUB84(DAT_14c846298,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if (((((double)DAT_14c846290 != 0.0) || (NAN((double)DAT_14c846290))) || (DAT_14c846298 != 0.0))
     || (NAN(DAT_14c846298))) {
    local_200 = atan2(DAT_14c846298,(double)DAT_14c846290);
    local_200 = local_200 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846290,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar14 = SUB84(DAT_14c846298,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_200 = 0.0;
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
    local_1d8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1d8 = local_1d8 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462a8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar14 = SUB84(DAT_14c8462b0,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1d8 = 0.0;
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
    local_1e0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1e0 = local_1e0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462c0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462c8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1e0 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  local_1a8 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1a8 = atan2(DAT_14c8462d0,dVar17);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c8462d8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar13 = SUB84(DAT_14c8462e0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1e8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1e8 = local_1e8 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1e8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  local_1b0 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1b0 = atan2(DAT_14c8462e8,dVar17);
    local_1b0 = local_1b0 * 57.29577951308232;
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
  local_1b8 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_1b8 = atan2(dVar3,dVar4);
    local_1b8 = local_1b8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_1c0 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1c0 = atan2(dVar5,dVar17);
    local_1c0 = local_1c0 * 57.29577951308232;
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
  local_1c8 = 0.0;
  if ((((dVar17 != 0.0) || (NAN(dVar17))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    local_1c8 = atan2(dVar17,dVar18);
    local_1c8 = local_1c8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar18 * dVar18 + dVar17 * dVar17);
  local_1d0 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1d0 = atan2((double)CONCAT44(uVar16,uVar14),dVar17);
    local_1d0 = local_1d0 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462f8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar17 = 0.0;
  local_1f8 = dVar1;
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
  local_1a0 = dVar2;
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
  DAT_14cb94780 = (double *)0x0;
  _DAT_14cb94788 = 10;
  FUN_1464bf958(&DAT_14cb94780,10,0);
  pdVar10 = DAT_14cb94780;
  *DAT_14cb94780 = local_1f8;
  pdVar10[1] = local_200;
  pdVar10[2] = 0.0;
  pdVar10[3] = local_1a0;
  pdVar10[4] = local_1d8;
  pdVar10[5] = 0.0;
  pdVar10[6] = local_1a8;
  pdVar10[7] = local_1e0;
  pdVar10[8] = 0.0;
  pdVar10[9] = local_1b0;
  pdVar10[10] = local_1e8;
  pdVar10[0xb] = 0.0;
  pdVar10[0xc] = local_1c0;
  pdVar10[0xd] = local_1b8;
  pdVar10[0xe] = 0.0;
  pdVar10[0xf] = local_1d0;
  pdVar10[0x10] = local_1c8;
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
  atexit((_func_5014 *)&LAB_143ec3d4e);
  FUN_140056680(&DAT_14cb94790,&DAT_14b4aa8be);
  atexit((_func_5014 *)&LAB_143ec3d5f);
  local_158 = "firerate";
  uStack_150._0_5_ = 8;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947a0 = (ulonglong)uVar12;
  local_158 = "aifireratescale";
  uStack_150._0_5_ = 0xf;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947a8 = (ulonglong)uVar12;
  local_158 = "burstfireratescale";
  uStack_150._0_5_ = 0x12;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947b0 = (ulonglong)uVar12;
  local_158 = "firerateaccelduration";
  uStack_150._0_5_ = 0x15;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947b8 = (ulonglong)uVar12;
  local_158 = "fireratedecelduration";
  uStack_150._0_5_ = 0x15;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947c0 = (ulonglong)uVar12;
  local_158 = "damage";
  uStack_150._0_5_ = 6;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947c8 = (ulonglong)uVar12;
  local_158 = "damageradius";
  uStack_150._0_5_ = 0xc;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947d0 = (ulonglong)uVar12;
  local_158 = "spread";
  uStack_150._0_5_ = 6;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947d8 = (ulonglong)uVar12;
  local_158 = "accuracyimpulse";
  uStack_150._0_5_ = 0xf;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947e0 = (ulonglong)uVar12;
  local_158 = "aiforcescale";
  uStack_150._0_5_ = 0xc;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947e8 = (ulonglong)uVar12;
  local_158 = "shotstrength";
  uStack_150._0_5_ = 0xc;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947f0 = (ulonglong)uVar12;
  local_158 = "heatimpulse";
  uStack_150._0_5_ = 0xb;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb947f8 = (ulonglong)uVar12;
  local_158 = "aidamagescale";
  uStack_150._0_5_ = 0xd;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94800 = (ulonglong)uVar12;
  local_158 = "usedswitchmodetime";
  uStack_150._0_5_ = 0x12;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94808 = (ulonglong)uVar12;
  local_158 = "switchmodetimescale";
  uStack_150._0_5_ = 0x13;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94810 = (ulonglong)uVar12;
  local_158 = "aimaxdesiredrange";
  uStack_150._0_5_ = 0x11;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94818 = (ulonglong)uVar12;
  local_158 = "aimindesiredrange";
  uStack_150._0_5_ = 0x11;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94820 = (ulonglong)uVar12;
  local_158 = "aipreferredrange";
  uStack_150._0_5_ = 0x10;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94828 = (ulonglong)uVar12;
  local_158 = "aimaxaccuracyscalerange";
  uStack_150._0_5_ = 0x17;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94830 = (ulonglong)uVar12;
  local_158 = "aiminaccuracyscalerange";
  uStack_150._0_5_ = 0x17;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94838 = (ulonglong)uVar12;
  local_158 = "aiburstcount";
  uStack_150._0_5_ = 0xc;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94840 = (ulonglong)uVar12;
  local_158 = "aibursttime";
  uStack_150._0_5_ = 0xb;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94848 = (ulonglong)uVar12;
  local_158 = "aiburstdelay";
  uStack_150._0_5_ = 0xc;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94850 = (ulonglong)uVar12;
  local_158 = "aiaccuracy";
  uStack_150._0_5_ = 10;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94858 = (ulonglong)uVar12;
  local_158 = "aiprojectilespeed";
  uStack_150._0_5_ = 0x11;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94860 = (ulonglong)uVar12;
  local_158 = "aiminaccuracy";
  uStack_150._0_5_ = 0xd;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94868 = (ulonglong)uVar12;
  ram0x00014cb94874 = 0;
  FUN_14052b5e0(&DAT_14cb94870,"levels",0);
  _DAT_14cb94880 = "levels";
  DAT_14cb9488c = 0;
  FUN_14052b5e0(&DAT_14cb94888,"EyeSocket",0);
  _DAT_14cb94898 = "EyeSocket";
  DAT_14cb948a4 = 0;
  FUN_14052b5e0(&DAT_14cb948a0,"FrontScope",0);
  _DAT_14cb948b0 = "FrontScope";
  DAT_14cb948bc = 0;
  FUN_14052b5e0(&DAT_14cb948b8,"FrontSight",0);
  _DAT_14cb948c8 = "FrontSight";
  DAT_14cb948d4 = 0;
  FUN_14052b5e0(&DAT_14cb948d0,"RearSight",0);
  _DAT_14cb948e0 = "RearSight";
  ram0x00014cb948ec = 0;
  FUN_14052b5e0(&DAT_14cb948e8,"time_scale",0);
  _DAT_14cb948f8 = "time_scale";
  ram0x00014cb94904 = 0;
  FUN_14052b5e0(&DAT_14cb94900,"fov_scale",0);
  _DAT_14cb94910 = "fov_scale";
  ram0x00014cb9491c = 0;
  FUN_14052b5e0(&DAT_14cb94918,"fov_lerp",0);
  _DAT_14cb94928 = "fov_lerp";
  ram0x00014cb94934 = 0;
  FUN_14052b5e0(&DAT_14cb94930,"view_fov_scale",0);
  _DAT_14cb94940 = "view_fov_scale";
  local_158 = "Use";
  uStack_150._0_5_ = 3;
  uVar12 = FUN_14001a6c0(&local_158,1);
  DAT_14cb94948 = (ulonglong)uVar12;
  local_158 = "Reload";
  uStack_150._0_5_ = 6;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94950 = (ulonglong)uVar12;
  local_158 = "Equip";
  uStack_150._0_5_ = 5;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94958 = (ulonglong)uVar12;
  local_158 = "PutDown";
  uStack_150._0_5_ = 7;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94960 = (ulonglong)uVar12;
  local_158 = "SwitchUseMode";
  uStack_150._0_5_ = 0xd;
  uVar12 = FUN_14001a6c0(&local_158,1);
  DAT_14cb94968 = (ulonglong)uVar12;
  local_158 = "ResetFireSequence";
  uStack_150._0_5_ = 0x11;
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94970 = (ulonglong)uVar12;
  local_158 = "PickupEquip";
  uStack_150 = (double)CONCAT35(uStack_150._5_3_,0xb);
  uVar12 = FUN_14001a6c0(&local_158,1);
  _DAT_14cb94978 = (ulonglong)uVar12;
  FUN_1446f470e(&DAT_14cb94980,L"WeaponTrace",1);
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eca238 FUN_143eca238 body=122 status=ok
// SIG undefined FUN_143eca238(void)

char FUN_143eca238(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar1 < 0) {
      return '\0';
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return '\0';
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      cVar2 = FUN_140471a54(uVar4,0);
      return cVar2 * '\x02';
    }
  }
  return '\0';
}



// FUNCTION 143eca2b2 FUN_143eca2b2 body=122 status=ok
// SIG undefined FUN_143eca2b2(void)

char FUN_143eca2b2(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar1 < 0) {
      return '\0';
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return '\0';
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      cVar2 = FUN_140471a54(uVar4,0);
      return cVar2 * '\x02';
    }
  }
  return '\0';
}



// FUNCTION 143eca330 FUN_143eca330 body=64 status=ok
// SIG undefined FUN_143eca330(void)

undefined8 FUN_143eca330(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 7;
  FUN_14387d746(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eca372 FUN_143eca372 body=85 status=ok
// SIG undefined FUN_143eca372(void)

undefined8 FUN_143eca372(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [38];
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 4;
  FUN_14387d746(param_2);
  local_12 = 7;
  FUN_14387d746(param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eca401 FUN_143eca401 body=49 status=ok
// SIG undefined FUN_143eca401(void)

void FUN_143eca401(void)

{
  FUN_144760e21(DAT_14cb95108,DAT_14cb95110);
  if (DAT_14cb95108 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143eca4b6 FUN_143eca4b6 body=36 status=ok
// SIG undefined FUN_143eca4b6(void)

undefined8 FUN_143eca4b6(longlong param_1,byte param_2)

{
  if ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) {
    return *(undefined8 *)
            (*(longlong *)(param_1 + 0xbe8) + 0x10 +
            (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 143eca4da FUN_143eca4da body=36 status=ok
// SIG undefined FUN_143eca4da(void)

undefined8 FUN_143eca4da(longlong param_1,byte param_2)

{
  if ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) {
    return *(undefined8 *)
            (*(longlong *)(param_1 + 0xbe8) + 0x20 +
            (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 143eca4fe FUN_143eca4fe body=116 status=ok
// SIG undefined FUN_143eca4fe(void)

void FUN_143eca4fe(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x2b8))();
      if (cVar3 != '\0') {
        bVar1 = *(byte *)(param_1 + 0xbd8);
        plVar2 = *(longlong **)
                  (*(longlong *)(param_1 + 0xbe8) + 8 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x000143eca56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x3a0))(plVar2,CONCAT71((uint7)(uint3)(((uint)bVar1 << 7) >> 8),1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 143eca572 FUN_143eca572 body=86 status=ok
// SIG undefined FUN_143eca572(void)

void FUN_143eca572(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 0x20 +
              (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
      if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143eca5c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x308))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143eca5c8 FUN_143eca5c8 body=85 status=ok
// SIG undefined FUN_143eca5c8(void)

void FUN_143eca5c8(void)

{
  FUN_144760e21(DAT_14cb94f30,DAT_14cb94f38);
  if (DAT_14cb94f30 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cb94f18,DAT_14cb94f20);
  if (DAT_14cb94f18 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143eca894 FUN_143eca894 body=1016 status=ok
// SIG undefined FUN_143eca894(void)

void FUN_143eca894(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
                  char param_5)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined *puVar5;
  uint *puVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar12 = param_2 & 0xff;
  if ((int)uVar12 < *(int *)(param_1 + 0xc08)) {
    bVar2 = (byte)param_3;
    uVar11 = param_3 & 0xff;
    iVar10 = (int)uVar11;
    if (iVar10 < (int)*(uint *)(param_1 + 0xbf0)) {
      lVar4 = *(longlong *)(param_1 + 0xbe8);
      if (*(longlong *)(lVar4 + 8 + (ulonglong)(uint)(iVar10 << 7) + uVar11 * 8) != 0) {
        if (*(longlong *)(param_1 + 0xd60) == DAT_14cb94e48) {
          if (*(byte *)(param_1 + 0xbc2) == bVar2) {
            return;
          }
          bVar8 = *(byte *)(param_1 + 0xbd8);
        }
        else {
          bVar8 = *(byte *)(param_1 + 0xbd8);
          if (bVar8 == bVar2) {
            return;
          }
        }
        if ((uint)bVar8 < *(uint *)(param_1 + 0xbf0)) {
          plVar7 = *(longlong **)(lVar4 + 0x10 + (ulonglong)bVar8 * 0x80 + (ulonglong)bVar8 * 8);
        }
        else {
          plVar7 = (longlong *)0x0;
        }
        plVar1 = *(longlong **)(lVar4 + 0x10 + (ulonglong)(uint)(iVar10 << 7) + uVar11 * 8);
        if (((plVar1 == (longlong *)0x0) ||
            ((((*(byte *)((longlong)plVar1 + 0x91) & 4) == 0 ||
              (cVar3 = (**(code **)(*plVar1 + 0x338))(plVar1,0), cVar3 != '\0')) &&
             (((((*(byte *)(param_1 + 0xd50) & 0x40) == 0 ||
                (cVar3 = (**(code **)(*plVar1 + 0x348))(plVar1,0), cVar3 != '\0')) ||
               ((((bVar2 == 0 && (plVar7 != (longlong *)0x0)) &&
                 (cVar3 = (**(code **)(*plVar7 + 0x348))(plVar7,1), cVar3 == '\0')) ||
                (plVar7 = *(longlong **)(param_1 + 0x1b0), plVar7 == (longlong *)0x0)))) ||
              ((cVar3 = (**(code **)(*plVar7 + 0x700))(plVar7), cVar3 == '\0' &&
               ((plVar7[0x78] != 0 || (*(char *)(param_1 + 0x178) != '\x03')))))))))) &&
           ((*(int *)(param_1 + 0xbf0) <= iVar10 ||
            ((plVar7 = *(longlong **)
                        (*(longlong *)(param_1 + 0xbe8) + 8 +
                        (ulonglong)(uint)(iVar10 << 7) + uVar11 * 8), plVar7 == (longlong *)0x0 ||
             (cVar3 = (**(code **)(*plVar7 + 0x360))(), cVar3 != '\0')))))) {
          if ((*(char *)(param_1 + 0x178) != '\x03') &&
             ((*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0 &&
              (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))(), cVar3 != '\0'))))
          {
            FUN_148a0d782(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4,param_5);
          }
          if ((int)uVar12 < *(int *)(param_1 + 0xc08)) {
            lVar4 = param_1 + 0xbf8;
            if (*(longlong *)(param_1 + 0xc00) != 0) {
              lVar4 = *(longlong *)(param_1 + 0xc00);
            }
            bVar8 = *(byte *)(lVar4 + uVar12);
            if (bVar8 != *(byte *)(param_1 + 0xbd8)) {
              *(byte *)(lVar4 + uVar12) = bVar2;
              return;
            }
          }
          else {
            if (*(char *)(param_1 + 0xbd8) != -1) {
              return;
            }
            bVar8 = 0xff;
          }
          if (*(longlong *)(param_1 + 0xd60) == DAT_14cb94e48) {
            FUN_1408bd412(param_1,&DAT_14cb95128);
            bVar8 = *(byte *)(param_1 + 0xbd8);
          }
          if (bVar8 != bVar2) {
            *(char *)(param_1 + 0xba9) = (char)(param_2 & 0xffffffff);
            if (*(byte *)(param_1 + 0xbc2) != bVar2) {
              *(byte *)(param_1 + 0xbc2) = bVar2;
              uVar12 = *(ulonglong *)(param_1 + 0x28);
              if (uVar12 < 0xffffffff00000000) {
                plVar7 = DAT_14c9980d0;
                if (DAT_14c9980d8 == 0) {
                  plVar7 = (longlong *)0x0;
                }
                (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar12,0x11);
              }
              else {
                uVar9 = (uint)uVar12;
                if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
                  puVar5 = &DAT_14c998070;
                  if (DAT_14c998080 != (undefined *)0x0) {
                    puVar5 = DAT_14c998080;
                  }
                  if ((*(uint *)(puVar5 + ((uint)(uVar12 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1)
                      != 0) {
                    lVar4 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
                    puVar6 = *(uint **)(lVar4 + 0x18);
                    if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
                      puVar6 = (uint *)(lVar4 + 8);
                    }
                    *puVar6 = *puVar6 | 0x20000;
                    *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
                  }
                }
              }
            }
            if (*(char *)(param_1 + 0xbc0) != param_5) {
              *(char *)(param_1 + 0xbc0) = param_5;
              uVar12 = *(ulonglong *)(param_1 + 0x28);
              if (uVar12 < 0xffffffff00000000) {
                plVar7 = DAT_14c9980d0;
                if (DAT_14c9980d8 == 0) {
                  plVar7 = (longlong *)0x0;
                }
                (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar12,0x10);
              }
              else {
                uVar9 = (uint)uVar12;
                if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
                  puVar5 = &DAT_14c998070;
                  if (DAT_14c998080 != (undefined *)0x0) {
                    puVar5 = DAT_14c998080;
                  }
                  if ((*(uint *)(puVar5 + ((uint)(uVar12 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1)
                      != 0) {
                    lVar4 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
                    puVar6 = *(uint **)(lVar4 + 0x18);
                    if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
                      puVar6 = (uint *)(lVar4 + 8);
                    }
                    *puVar6 = *puVar6 | 0x10000;
                    *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
                  }
                }
              }
            }
            *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) & 0xfe | (byte)param_4;
            FUN_1408bd412(param_1,&DAT_14cb94e48);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143ecac8c FUN_143ecac8c body=44 status=ok
// SIG undefined FUN_143ecac8c(void)

undefined8 FUN_143ecac8c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0xb28) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xb30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143ecacb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x10))
                      (plVar1,*(undefined1 *)(param_1 + 0xbe3),*(code **)(*plVar1 + 0x10));
    return uVar2;
  }
  return 0;
}



// FUNCTION 143ecacb8 FUN_143ecacb8 body=222 status=ok
// SIG undefined FUN_143ecacb8(void)

void FUN_143ecacb8(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 != '\x01') {
    iVar1 = *(int *)(param_1 + 0x450);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x448);
      lVar6 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_2 + 0x28);
        *(uint *)(param_2 + 0x28) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x2c) < iVar2 + 1U) {
          FUN_1488ca64c(param_2,iVar2);
        }
        lVar5 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar5 = param_2;
        }
        *(undefined8 *)(lVar5 + (longlong)iVar2 * 8) = uVar4;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    if (param_3 == '\x02') {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x460);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x458);
    lVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + lVar6);
      iVar2 = *(int *)(param_2 + 0x28);
      *(uint *)(param_2 + 0x28) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x2c) < iVar2 + 1U) {
        FUN_1488ca64c(param_2,iVar2);
      }
      lVar5 = *(longlong *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar5 = param_2;
      }
      *(undefined8 *)(lVar5 + (longlong)iVar2 * 8) = uVar4;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 143ecad96 FUN_143ecad96 body=100 status=ok
// SIG undefined FUN_143ecad96(void)

void FUN_143ecad96(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  param_2[2] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar3;
  *(undefined8 *)(param_3 + 4) = DAT_14c846508;
  uVar6 = DAT_14c846500._4_4_;
  uVar5 = (undefined4)DAT_14c846500;
  uVar4 = DAT_14c8464f8._4_4_;
  *param_3 = (undefined4)DAT_14c8464f8;
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  param_3[3] = uVar6;
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ecadf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2d8))();
      return;
    }
  }
  return;
}



// FUNCTION 143ecadfa FUN_143ecadfa body=110 status=ok
// SIG undefined FUN_143ecadfa(void)

undefined4 *
FUN_143ecadfa(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_2 + 4) = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *param_2 = (undefined4)DAT_14c8464f8;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if ((*(longlong *)(param_1 + 0xb18) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0xb20), plVar1 == (longlong *)0x0)) {
    plVar1 = *(longlong **)(param_1 + 0x1b0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x720))(plVar1,param_2);
    }
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_4,*(undefined1 *)(param_1 + 0xd44));
  }
  return param_2;
}



// FUNCTION 143ecaf00 FUN_143ecaf00 body=59 status=ok
// SIG undefined FUN_143ecaf00(void)

undefined4 FUN_143ecaf00(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  uVar3 = 0x3f800000;
  if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
     (lVar2 = *(longlong *)
               (*(longlong *)(param_1 + 0xbe8) + 0x28 +
               (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar2 != 0)) {
    uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x38) + 0x40);
  }
  return uVar3;
}



// FUNCTION 143ecb05e FUN_143ecb05e body=31 status=ok
// SIG undefined FUN_143ecb05e(void)

undefined8 FUN_143ecb05e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ecb160 FUN_143ecb160 body=31 status=ok
// SIG undefined FUN_143ecb160(void)

undefined8 FUN_143ecb160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ecb220 FUN_143ecb220 body=31 status=ok
// SIG undefined FUN_143ecb220(void)

undefined8 FUN_143ecb220(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ecb2da FUN_143ecb2da body=31 status=ok
// SIG undefined FUN_143ecb2da(void)

undefined8 FUN_143ecb2da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ecb346 FUN_143ecb346 body=31 status=ok
// SIG undefined FUN_143ecb346(void)

undefined8 FUN_143ecb346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ecb3b2 FUN_143ecb3b2 body=177 status=ok
// SIG undefined FUN_143ecb3b2(void)

void FUN_143ecb3b2(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *param_2;
  lVar4 = *param_1;
  lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
  bVar3 = *(byte *)(*(longlong *)(lVar4 + 0xbe8) + 5 + lVar1);
  if (((bVar3 & 2) == 0) &&
     (*(byte *)(*(longlong *)(lVar4 + 0xbe8) + lVar1 + 5) = bVar3 | 2,
     *(uint *)(lVar4 + 0xbf0) != (uint)bVar2 && (int)(uint)bVar2 <= (int)*(uint *)(lVar4 + 0xbf0)))
  {
    if (*(longlong *)
         (*(longlong *)(lVar4 + 0xbe8) + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8) != 0) {
      local_38 = local_28;
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_14107bdda(lVar4,param_1[1],
                    CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0xbe8) >> 8),2));
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecb464 FUN_143ecb464 body=1 status=ok
// SIG undefined FUN_143ecb464(void)

void FUN_143ecb464(void)

{
  return;
}



// FUNCTION 143ecb466 FUN_143ecb466 body=373 status=ok
// SIG undefined FUN_143ecb466(void)

void FUN_143ecb466(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  lVar12 = *param_1;
  lVar11 = *(longlong *)(lVar12 + 0x2b0);
  iVar1 = *(int *)(lVar12 + 0x2b8);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar11 + lVar9) == *param_2) {
        plVar2 = (longlong *)(lVar11 + lVar9);
        if (plVar2 != (longlong *)0x0) {
          puVar6 = (undefined8 *)(lVar11 + lVar9 + 0x18);
          piVar8 = (int *)*puVar6;
          puVar3 = (uint *)(lVar11 + 0x20 + lVar9);
          uVar4 = *puVar3;
          lVar12 = (longlong)(int)uVar4;
          piVar7 = (int *)(lVar11 + lVar9 + 8);
          piVar10 = piVar8;
          if (piVar8 == (int *)0x0) {
            piVar10 = piVar7;
          }
          if (lVar12 == 0) goto LAB_143ecb57a;
          lVar11 = lVar12 * 8;
          goto LAB_143ecb4fd;
        }
        break;
      }
      lVar9 = lVar9 + 0x28;
    } while (lVar5 * 0x28 != lVar9);
  }
  *(uint *)(lVar12 + 0x2b8) = iVar1 + 1U;
  if (*(uint *)(lVar12 + 700) < iVar1 + 1U) {
    FUN_1418bf4e6((longlong *)(lVar12 + 0x2b0),iVar1);
    lVar11 = *(longlong *)(lVar12 + 0x2b0);
  }
  plVar2 = (longlong *)(lVar11 + lVar5 * 0x28);
  *plVar2 = *param_2;
  puVar6 = (undefined8 *)(lVar11 + lVar5 * 0x28 + 0x18);
  *puVar6 = 0;
  puVar3 = (uint *)(lVar11 + 0x20 + lVar5 * 0x28);
  puVar3[0] = 0;
  puVar3[1] = 2;
  piVar7 = (int *)(lVar11 + lVar5 * 0x28 + 8);
  piVar8 = (int *)0x0;
LAB_143ecb57a:
  lVar12 = 0;
  uVar4 = 0;
  goto LAB_143ecb57c;
  while( true ) {
    piVar10 = piVar10 + 2;
    lVar11 = lVar11 + -8;
    if (lVar11 == 0) break;
LAB_143ecb4fd:
    if (*piVar10 == *(int *)((longlong)param_1 + 0xc)) {
      if (piVar10 != (int *)0x0) {
        fVar13 = (float)piVar10[1];
        goto LAB_143ecb5a5;
      }
      break;
    }
  }
LAB_143ecb57c:
  *puVar3 = uVar4 + 1;
  if (*(uint *)((longlong)plVar2 + 0x24) < uVar4 + 1) {
    FUN_148a27a8e(piVar7);
    piVar8 = (int *)*puVar6;
  }
  if (piVar8 != (int *)0x0) {
    piVar7 = piVar8;
  }
  piVar10 = piVar7 + lVar12 * 2;
  *piVar10 = *(int *)((longlong)param_1 + 0xc);
  piVar10[1] = 0;
  fVar13 = 0.0;
LAB_143ecb5a5:
  piVar10[1] = (int)(fVar13 + *(float *)(param_1 + 1));
  return;
}



// FUNCTION 143ecb5dc FUN_143ecb5dc body=97 status=ok
// SIG undefined FUN_143ecb5dc(void)

void FUN_143ecb5dc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x28) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x2c) < iVar1 + 1U) {
    FUN_1488d2d82(lVar3,iVar1);
  }
  lVar2 = *(longlong *)(lVar3 + 0x20);
  if (*(longlong *)(lVar3 + 0x20) == 0) {
    lVar2 = lVar3;
  }
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return;
}



// FUNCTION 143ecb65c FUN_143ecb65c body=12 status=ok
// SIG undefined FUN_143ecb65c(void)

void FUN_143ecb65c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ecb665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ecb668 FUN_143ecb668 body=29 status=ok
// SIG undefined FUN_143ecb668(void)

undefined8 FUN_143ecb668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ecb685 FUN_143ecb685 body=2650 status=ok
// SIG undefined FUN_143ecb685(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ecb685(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  char **local_98;
  undefined8 local_90;
  undefined4 local_7c;
  char *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = "AssetRegistry";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb94a00 = (ulonglong)uVar2;
  local_78 = "Use";
  local_70 = 3;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb94a08 = (ulonglong)uVar2;
  local_78 = "Sight";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb94a10 = (ulonglong)uVar2;
  local_78 = "TargetLock";
  local_70 = 10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94a18 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cb94a20);
  if (cVar1 == '\0') {
    _DAT_14cb94a20 = 0;
    uRam000000014cb94a28 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb94a38 = &LAB_143eca1f2;
  _DAT_14cb94a40 = 0x442520a4;
  DAT_14cb94a44 = 1;
  DAT_14cb94a30 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb94a30;
  atexit((_func_5014 *)&LAB_143eca1f7);
  FUN_146577742();
  atexit((_func_5014 *)&LAB_143eca22b);
  FUN_1446f470e(&DAT_14cb94c08,L"LoadedAmmoThreshold",1);
  FUN_1446f470e(&DAT_14cb94c10,L"NoTargetWarmup",1);
  FUN_1446f470e(&DAT_14cb94c18,L"NextReloadDelay",1);
  FUN_1446f470e(&DAT_14cb94c20,L"TimeSinceTarget",1);
  FUN_1446f470e(&DAT_14cb94c28,L"UseWeaponAspect",1);
  _DAT_14cb94c30 = 0x47efffffe0000000;
  _DAT_14cb94c38 = 0x47efffffe0000000;
  _DAT_14cb94c40 = 0x47efffffe0000000;
  _DAT_14cb94c48 = 0x47efffffe0000000;
  _DAT_14cb94c50 = 0x47efffffe0000000;
  _DAT_14cb94c58 = 0x47efffffe0000000;
  _DAT_14cb94c60 = 0x47efffffe0000000;
  _DAT_14cb94c68 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb94c70,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb94c78,L"ai_in_cover",1);
  FUN_1446f470e(&DAT_14cb94c80,L"CoverAttack",1);
  FUN_1446f470e(&DAT_14cb94c88,L"MoveToCover",1);
  FUN_1446f470e(&DAT_14cb94c90,L"WhileAtCover",1);
  FUN_1446f470e(&DAT_14cb94c98,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb94ca0,L"Hide",1);
  FUN_1446f470e(&DAT_14cb94ca8,L"FindHidingSpot",1);
  FUN_1446f470e(&DAT_14cb94cb0,L"MoveToHidingSpot",1);
  FUN_1446f470e(&DAT_14cb94cb8,L"AtHidingSpot",1);
  FUN_1446f470e(&DAT_14cb94cc0,L"PlayHideAction",1);
  FUN_1446f470e(&DAT_14cb94cc8,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cb94cd0,L"ShootTarget",1);
  FUN_1446f470e(&DAT_14cb94cd8,L"HideDurationTimer",1);
  FUN_1446f470e(&DAT_14cb94ce0,L"Wait",1);
  FUN_1446f470e(&DAT_14cb94ce8,L"Idle",1);
  FUN_1446f470e(&DAT_14cb94cf0,L"Wait",1);
  FUN_1446f470e(&DAT_14cb94cf8,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb94d00,L"WeaponAttack",1);
  FUN_1446f470e(&DAT_14cb94d08,L"WhileAtTarget",1);
  FUN_1446f470e(&DAT_14cb94d10,L"MoveIntoPosition",1);
  FUN_1446f470e(&DAT_14cb94d18,L"WeaponAttack_Move",1);
  FUN_1446f470e(&DAT_14cb94d20,L"WeaponAttack_Still",1);
  FUN_1446f470e(&DAT_14cb94d28,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb94d30,L"actor_radius",1);
  FUN_1446f470e(&DAT_14cb94d38,L"WeaponAttack_v2",1);
  FUN_1446f470e(&DAT_14cb94d40,L"Adjust",1);
  FUN_1446f470e(&DAT_14cb94d48,L"SmthSmart",1);
  FUN_1446f470e(&DAT_14cb94d50,L"SelectMove",1);
  FUN_1446f470e(&DAT_14cb94d58,L"Backup",1);
  FUN_1446f470e(&DAT_14cb94d60,L"SelectBound",1);
  FUN_1446f470e(&DAT_14cb94d68,L"AdvancingBound",1);
  FUN_1446f470e(&DAT_14cb94d70,L"LateralBound",1);
  FUN_1446f470e(&DAT_14cb94d78,L"LookAtTarget",1);
  FUN_1446f470e(&DAT_14cb94d80,L"Gps_WeaponAttack_Bound",1);
  FUN_1446f470e(&DAT_14cb94d88,L"Gps_WeaponAttack_Adjust",1);
  FUN_1446f470e(&DAT_14cb94d90,L"Gps_WeaponAttack_SmthSmart",1);
  FUN_1446f470e(&DAT_14cb94d98,L"Gps_WeaponAttack_Backup",1);
  FUN_1446f470e(&DAT_14cb94da0,L"Desired Height Min",1);
  FUN_1446f470e(&DAT_14cb94da8,L"Desired Height Max",1);
  FUN_1446f470e(&DAT_14cb94db0,L"ProjectUpOffset",1);
  FUN_1446f470e(&DAT_14cb94db8,L"BlockingRadius",1);
  local_78 = "nexus";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb94dc0 = (ulonglong)uVar2;
  local_78 = (char *)0x800000014b4ab334;
  local_7c = 9;
  local_70 = FUN_14577453c();
  local_6c = 1;
  FUN_146577a7c(&local_78);
  _DAT_14cb94dd8 = &LAB_143eca3c8;
  _DAT_14cb94de0 = 0x4429cccd;
  DAT_14cb94de4 = 1;
  DAT_14cb94dd0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb94dd0;
  atexit((_func_5014 *)&LAB_143eca3cd);
  local_78 = "Use";
  local_70 = 3;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94df0 = (ulonglong)uVar2;
  local_78 = "Reload";
  local_70 = 6;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94df8 = (ulonglong)uVar2;
  local_78 = "Equip";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94e00 = (ulonglong)uVar2;
  local_78 = "PutDown";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94e08 = (ulonglong)uVar2;
  local_78 = "SwitchUseMode";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94e10 = (ulonglong)uVar2;
  local_78 = "ResetFireSequence";
  local_70 = 0x11;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94e18 = (ulonglong)uVar2;
  local_78 = "PickupEquip";
  local_70 = 0xb;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94e20 = (ulonglong)uVar2;
  _DAT_14cb94e28 = 0xffffffff;
  _DAT_14cb94e2c = 0;
  FUN_1446f470e(&DAT_14cb95120,L"Inactive",1);
  FUN_1446f470e(&DAT_14cb95128,L"Active",1);
  FUN_1446f470e(&DAT_14cb94e30,L"Equipping",1);
  FUN_1446f470e(&DAT_14cb94e38,L"PuttingDown",1);
  FUN_1446f470e(&DAT_14cb94e40,L"Using",1);
  FUN_1446f470e(&DAT_14cb95100,L"Reloading",1);
  FUN_1446f470e(&DAT_14cb94e48,L"ModeSwitch",1);
  FUN_1446f470e(&DAT_14cb94e50,L"Locked",1);
  local_78 = "ScopeVisible";
  local_70 = 0xc;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb94e58 = (ulonglong)uVar2;
  DAT_14cb95108 = 0;
  _DAT_14cb95110 = 0;
  _DAT_14cb95118 = 2;
  atexit(FUN_143eca401);
  DAT_14cb94f50 = 0;
  atexit((_func_5014 *)&LAB_143ecaf3b);
  _DAT_14cb95010 = &LAB_143ecafca;
  _DAT_14cb95018 = 0x4429c000;
  DAT_14cb9501c = 1;
  DAT_14cb95008 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb95008;
  atexit((_func_5014 *)&LAB_143ecafcf);
  DAT_14cb95030 = 0;
  DAT_14cb95040 = 0;
  atexit((_func_5014 *)&LAB_143ecb003);
  local_68 = 0;
  local_58 = &PTR_LAB_14b3f27a0;
  local_50 = &LAB_148a25fe2;
  local_78 = &DAT_14880dc9c;
  local_90 = 0;
  local_98 = &local_78;
  FUN_1411f26b0(&DAT_14cb95070,"weapon_look",FUN_148a25fe8,0xffffffff);
  atexit((_func_5014 *)&LAB_143ecb036);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecc0e0 FUN_143ecc0e0 body=49 status=ok
// SIG undefined FUN_143ecc0e0(void)

void FUN_143ecc0e0(void)

{
  FUN_144760e21(DAT_14cb95218,DAT_14cb95220);
  if (DAT_14cb95218 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ecc111 FUN_143ecc111 body=49 status=ok
// SIG undefined FUN_143ecc111(void)

void FUN_143ecc111(void)

{
  FUN_144760e21(DAT_14cb95230,DAT_14cb95238);
  if (DAT_14cb95230 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ecc153 FUN_143ecc153 body=39 status=ok
// SIG undefined FUN_143ecc153(void)

void FUN_143ecc153(void)

{
  if (DAT_14cb95310 != 0) {
    FUN_148a29754();
    DAT_14cb95310 = 0;
  }
  return;
}



// FUNCTION 143ecc17a FUN_143ecc17a body=896 status=ok
// SIG undefined FUN_143ecc17a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ecc17a(void)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&DAT_14cb95130,L"Auto",1);
  FUN_1446f470e(&DAT_14cb95138,L"Password",1);
  FUN_1446f470e(&DAT_14cb95140,L"ExchangeCode",1);
  FUN_1446f470e(&DAT_14cb95148,L"PersistentAuth",1);
  FUN_1446f470e(&DAT_14cb95150,L"Developer",1);
  FUN_1446f470e(&DAT_14cb95158,L"RefreshToken",1);
  FUN_1446f470e(&DAT_14cb95160,L"AccountPortal",1);
  FUN_1446f470e(&DAT_14cb95168,L"ExternalAuth",1);
  FUN_1446f470e(&DAT_14cb95170,L"Epic",1);
  FUN_1446f470e(&DAT_14cb95178,L"SteamSessionTicket",1);
  FUN_1446f470e(&DAT_14cb95180,L"PsnIdToken",1);
  FUN_1446f470e(&DAT_14cb95188,L"XblXstsToken",1);
  FUN_1446f470e(&DAT_14cb95190,L"DiscordAccessToken",1);
  FUN_1446f470e(&DAT_14cb95198,L"GogSessionTicket",1);
  FUN_1446f470e(&DAT_14cb951a0,L"NintendoIdToken",1);
  FUN_1446f470e(&DAT_14cb951a8,L"NintendoNsaIdToken",1);
  FUN_1446f470e(&DAT_14cb951b0,L"UplayAccessToken",1);
  FUN_1446f470e(&DAT_14cb951b8,L"OpenIdAccessToken",1);
  FUN_1446f470e(&DAT_14cb951c0,L"DeviceIdAccessToken",1);
  FUN_1446f470e(&DAT_14cb951c8,L"AppleIdToken",1);
  FUN_1446f470e(&DAT_14cb951d0,L"GoogleIdToken",1);
  FUN_1446f470e(&DAT_14cb951d8,L"OculusUserIdNonce",1);
  FUN_1446f470e(&DAT_14cb951e0,L"ItchioJwt",1);
  FUN_1446f470e(&DAT_14cb951e8,L"ItchioKey",1);
  FUN_1446f470e(&DAT_14cb951f0,L"EpicIdToken",1);
  FUN_1446f470e(&DAT_14cb951f8,L"AmazonAccessToken",1);
  FUN_1446f470e(&DAT_14cb95200,L"PsnAuthCode",1);
  FUN_1446f470e(&DAT_14cb95208,L"XblXstsToken",1);
  FUN_1446f470e(&DAT_14cb95210,L"DisplayName",1);
  DAT_14cb95218 = 0;
  _DAT_14cb95220 = 0;
  _DAT_14cb95228 = 2;
  atexit(FUN_143ecc0e0);
  DAT_14cb95230 = 0;
  _DAT_14cb95238 = 0;
  _DAT_14cb95240 = 2;
  atexit(FUN_143ecc111);
  local_38 = 0x800000014b4ac066;
  local_24 = 0x17;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_146577d96(&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecc4fc FUN_143ecc4fc body=250 status=ok
// SIG undefined FUN_143ecc4fc(void)

undefined8 FUN_143ecc4fc(longlong *param_1,ulonglong param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2;
  if (iVar1 < 16000) {
    if ((iVar1 != 8000) && (iVar1 != 12000)) {
      return 0;
    }
  }
  else if (((iVar1 != 16000) && (iVar1 != 48000)) && (iVar1 != 24000)) {
    return 0;
  }
  if (0xfffffffd < param_3 - 3U) {
    *(int *)(param_1 + 3) = iVar1;
    *(int *)((longlong)param_1 + 0x1c) = param_3;
    *(uint *)(param_1 + 4) = (uint)((param_2 & 0xffff) >> 1) / 0x19;
    iVar1 = FUN_144bc5994(param_3);
    lVar2 = FUN_14001cc68((longlong)iVar1,0);
    param_1[5] = lVar2;
    iVar1 = FUN_144bc59e0(lVar2,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c),
                          param_4 == '\x01' | 0x800);
    if (iVar1 == 0) {
      FUN_144bc5db8(param_1[5],0xfa6,1);
      FUN_144bc5db8(param_1[5],0xfb4,0);
      FUN_144bc5db8(param_1[5],0xfaa,1);
      FUN_144bc5db8(param_1[5],0xfac,0);
      return 1;
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return 0;
}



// FUNCTION 143ecc5f6 FUN_143ecc5f6 body=328 status=ok
// SIG undefined FUN_143ecc5f6(void)

ulonglong FUN_143ecc5f6(longlong param_1,longlong param_2,uint param_3,undefined1 *param_4,
                       int *param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar3 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c) * 2;
  iVar5 = 0;
  uVar1 = 0xc000 / (longlong)(int)uVar3;
  if ((int)((longlong)(int)param_3 / (longlong)(int)uVar3) < (int)(0xc000 / (longlong)(int)uVar3)) {
    uVar1 = (longlong)(int)param_3 / (longlong)(int)uVar3;
  }
  iVar11 = (int)uVar1;
  if (iVar11 == 0) {
    *param_5 = 0;
  }
  else {
    *param_4 = (char)(uVar1 & 0xffffffff);
    param_4[1] = *(undefined1 *)(param_1 + 0x48);
    iVar2 = iVar11 * 2 + 2;
    if (0 < iVar11) {
      iVar11 = *param_5 - iVar2;
      uVar9 = 0;
      uVar10 = 0;
      do {
        iVar5 = FUN_144bc5c78(*(undefined8 *)(param_1 + 0x28),param_2,
                              *(undefined4 *)(param_1 + 0x20),param_4 + uVar10 + (longlong)iVar2,
                              iVar11);
        if (iVar5 < 0) {
          FUN_144bca918(iVar5);
          *param_4 = 0;
          *param_5 = 0;
          return 0;
        }
        uVar7 = iVar5 + (int)uVar10;
        iVar6 = iVar5;
        uVar4 = uVar7;
        if (iVar5 == 1) {
          iVar6 = 0;
          uVar4 = 0;
        }
        uVar8 = (ulonglong)uVar7;
        if (iVar5 == 1) {
          uVar8 = uVar10;
        }
        iVar11 = iVar11 - iVar6;
        *(short *)(param_4 + uVar9 * 2 + 2) = (short)uVar4;
        uVar9 = uVar9 + 1;
        param_2 = param_2 + (int)uVar3;
        iVar5 = (int)uVar8;
        uVar10 = uVar8;
      } while ((uVar1 & 0xffffffff) != uVar9);
    }
    *param_5 = iVar5 + iVar2;
    *(byte *)(param_1 + 0x48) =
         (*(byte *)(param_1 + 0x48) - (*(byte *)(param_1 + 0x48) < 0xfe)) + '\x02';
  }
  return (ulonglong)param_3 % (ulonglong)uVar3;
}



// FUNCTION 143ecc73e FUN_143ecc73e body=29 status=ok
// SIG undefined FUN_143ecc73e(void)

void FUN_143ecc73e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_144bc5db8(*(longlong *)(param_1 + 0x28),0xfbc);
  }
  return;
}



// FUNCTION 143ecc75c FUN_143ecc75c body=191 status=ok
// SIG undefined FUN_143ecc75c(void)

void FUN_143ecc75c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_1c = 0;
    FUN_144bc5db8(lVar1,0xfa3);
    local_20 = 0;
    FUN_144bc5db8(lVar1,0xfa7);
    local_24 = 0;
    FUN_144bc5db8(lVar1,0xfbd);
    local_28 = 0;
    FUN_144bc5db8(lVar1,0xfa1);
    local_2c = 0;
    FUN_144bc5db8(lVar1,0xfb9);
    local_30 = 0;
    FUN_144bc5db8(lVar1,0xfab);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecc81c FUN_143ecc81c body=155 status=ok
// SIG undefined FUN_143ecc81c(void)

undefined8 FUN_143ecc81c(longlong *param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2;
  if (iVar1 < 16000) {
    if ((iVar1 != 8000) && (iVar1 != 12000)) {
      return 0;
    }
  }
  else if (((iVar1 != 16000) && (iVar1 != 48000)) && (iVar1 != 24000)) {
    return 0;
  }
  if (0xfffffffd < param_3 - 3U) {
    *(int *)(param_1 + 3) = iVar1;
    *(int *)((longlong)param_1 + 0x1c) = param_3;
    *(uint *)(param_1 + 4) = (uint)((param_2 & 0xffff) >> 1) / 0x19;
    iVar1 = FUN_144bc4144(param_3);
    lVar2 = FUN_14001cc68((longlong)iVar1,0);
    param_1[5] = lVar2;
    iVar1 = FUN_144bc4244(lVar2,(int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c));
    if (iVar1 == 0) {
      return 1;
    }
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return 0;
}



// FUNCTION 143ecc8b8 FUN_143ecc8b8 body=29 status=ok
// SIG undefined FUN_143ecc8b8(void)

void FUN_143ecc8b8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_144bc44f4(*(longlong *)(param_1 + 0x28),0xfbc);
  }
  return;
}



// FUNCTION 143ecc8d6 FUN_143ecc8d6 body=395 status=ok
// SIG undefined FUN_143ecc8d6(void)

void FUN_143ecc8d6(longlong param_1,byte *param_2,uint param_3,longlong param_4,int *param_5)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  
  if (param_2 == (byte *)0x0 || param_3 < 2) {
    *param_5 = 0;
  }
  else {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    if (bVar2 == 0) {
      iVar13 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x20);
      uVar12 = (uint)bVar2;
      iVar13 = 0;
      if ((int)uVar12 <= (int)(0xc000 / (longlong)(iVar8 * 2))) {
        lVar1 = (ulonglong)bVar2 * 2 + 2;
        uVar6 = (uint)lVar1;
        iVar13 = 0;
        if (uVar6 <= param_3) {
          iVar13 = 0;
          uVar9 = 0;
          iVar5 = 0;
          uVar11 = 0;
          do {
            uVar4 = *(ushort *)(param_2 + uVar9 * 2 + 2);
            if (uVar4 < uVar11) goto LAB_143ecca49;
            iVar5 = (iVar5 - (uint)uVar11) + (uint)uVar4;
            uVar9 = uVar9 + 1;
            uVar11 = uVar4;
          } while (uVar12 != uVar9);
          if (iVar5 + uVar6 <= param_3) {
            uVar9 = 0;
            iVar5 = 0;
            iVar13 = 0;
            uVar6 = 0;
            do {
              if (*param_5 - iVar13 < iVar8 * 0xc) break;
              if (*(ushort *)(param_2 + uVar9 * 2 + 2) != 0) {
                iVar10 = *(ushort *)(param_2 + uVar9 * 2 + 2) - uVar6;
                iVar7 = FUN_144bc435c(*(undefined8 *)(param_1 + 0x28),param_2 + iVar5 + lVar1,iVar10
                                      ,iVar13 + param_4,0x780,0);
                if (iVar7 < 0) {
                  FUN_144bca918(iVar7);
                }
                else {
                  iVar13 = iVar13 + *(int *)(param_1 + 0x1c) * iVar7 * 2;
                }
                iVar5 = iVar5 + iVar10;
                uVar6 = (uint)*(ushort *)(param_2 + uVar9 * 2 + 2);
              }
              uVar9 = uVar9 + 1;
            } while (uVar12 != uVar9);
          }
        }
      }
    }
LAB_143ecca49:
    *param_5 = iVar13;
    *(byte *)(param_1 + 0x48) = bVar3;
  }
  return;
}



// FUNCTION 143ecca62 FUN_143ecca62 body=103 status=ok
// SIG undefined FUN_143ecca62(void)

void FUN_143ecca62(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_1c = 0;
    FUN_144bc44f4(lVar1,0xfcd);
    local_20 = 0;
    FUN_144bc44f4(lVar1,0xfc1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eccaca FUN_143eccaca body=117 status=ok
// SIG undefined FUN_143eccaca(void)

void FUN_143eccaca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_14052bb08(DAT_14c872ce0,L"Voice",L"bEnabled",param_1 + 8,&DAT_14c872ce8);
  if (*(char *)(param_1 + 8) == '\x01') {
    lVar2 = FUN_148a2c114();
    lVar1 = DAT_14cb953c8;
    if ((lVar2 == 0) && (DAT_14cb953c8 != 0)) {
      FUN_148a2c044(DAT_14cb953c8);
      FUN_1400020a8(lVar1);
      DAT_14cb953c8 = 0;
    }
  }
  return;
}



// FUNCTION 143eccb3f FUN_143eccb3f body=69 status=ok
// SIG undefined FUN_143eccb3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eccb3f(void)

{
  _DAT_14cb95320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143eccb81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb95328,1);
  return;
}



// FUNCTION 143eccb84 FUN_143eccb84 body=159 status=ok
// SIG undefined FUN_143eccb84(void)

void FUN_143eccb84(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    iVar2 = (int)param_1[1];
    if ((longlong)iVar2 != 0) {
      lVar1 = *param_1;
      iVar4 = 1;
      lVar6 = 0;
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar6) == param_2) {
          if (iVar4 == 0) {
            return;
          }
          iVar4 = iVar2 - iVar4;
          if (iVar4 != 0) {
            iVar5 = 1;
            if (iVar4 < 1) {
              iVar5 = iVar4;
            }
            memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                    (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
            iVar2 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar2 + -1;
          FUN_148a2d3ba(param_1);
          return;
        }
        lVar3 = lVar3 + 0x100000000;
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar2 << 3 != lVar6);
    }
  }
  return;
}



// FUNCTION 143eccc24 FUN_143eccc24 body=629 status=ok
// SIG undefined FUN_143eccc24(void)

undefined8 FUN_143eccc24(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [44];
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined2 local_52;
  ulonglong local_50;
  
  lVar4 = DAT_14cb953c8;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb953c8 == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb95340) {
      FUN_144b3d300(&DAT_14cb95340);
      if (DAT_14cb95340 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb95338 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"voice.SilenceDetectionAttackTime",1);
        _Init_thread_footer(&DAT_14cb95340);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb95350) {
      FUN_144b3d300(&DAT_14cb95350);
      if (DAT_14cb95350 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb95348 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"voice.SilenceDetectionReleaseTime",1);
        _Init_thread_footer(&DAT_14cb95350);
      }
    }
    fVar6 = (float)param_3;
    local_58 = 0x40a00000;
    local_6c = fVar6;
    local_68 = (**(code **)(*DAT_14cb95338 + 0xb8))();
    local_64 = (**(code **)(*DAT_14cb95348 + 0xb8))();
    local_60 = 2;
    local_5c = 0;
    FUN_1470315fc(param_1 + 0x140,&local_6c);
    fVar5 = (float)(**(code **)(*DAT_14cb95338 + 0xb8))();
    iVar3 = (int)(fVar5 * fVar6 * 0.001);
    local_52 = 0;
    FUN_148a2c706(param_1 + 0x110,&local_52,iVar3 + 1);
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (iVar3 < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x118);
    }
    *(int *)(param_1 + 0x124) = iVar1 - iVar3;
    *(float *)(param_1 + 0x180) = fVar6;
    *(undefined1 *)(param_1 + 400) = 1;
    *(undefined1 *)(param_1 + 0x170) = 0;
    *(undefined1 *)(param_1 + 0x194) = 0;
    lVar4 = lVar4 + 0x30;
    if (1 < *(int *)(param_2 + 8)) {
      lVar4 = param_2;
    }
    uVar2 = FUN_143ecce9a(param_1,lVar4,param_3,param_4);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecce9a FUN_143ecce9a body=1115 status=ok
// SIG undefined FUN_143ecce9a(void)

undefined8 FUN_143ecce9a(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  HANDLE pvVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  LARGE_INTEGER local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x20))();
  FUN_148a2bad2(param_1[0x14]);
  *(undefined4 *)(param_1 + 0x16) = 1;
  if ((param_4 < 3 && 0xffff63be < param_3 - 0xbb81U) && (DAT_14cb953c8 != 0)) {
    if ((int)param_2[1] < 2) {
      lVar9 = DAT_14cb953c8 + 0x30;
LAB_143eccf1c:
      if (lVar9 != 0) {
        puVar2 = (undefined8 *)param_1[0x14];
        uVar8 = *(undefined8 *)(lVar9 + 0x18);
        *puVar2 = *(undefined8 *)(lVar9 + 0x10);
        puVar2[1] = uVar8;
        uVar8 = 0;
        iVar3 = Ordinal_12(lVar9 + 0x10,param_1[0x14] + 0x10,0);
        if (iVar3 < 0) goto LAB_143ecd22a;
        *(undefined4 *)(param_1[0x14] + 0x18) = 0x10;
        plVar10 = *(longlong **)(param_1[0x14] + 0x10);
        iVar3 = (**(code **)(*plVar10 + 0x20))(plVar10,param_1[0x14] + 0x18);
        uVar8 = 0;
        if (iVar3 < 0) goto LAB_143ecd22a;
        *(undefined2 *)(param_1[0x14] + 0x30) = 1;
        *(short *)(param_1[0x14] + 0x32) = (short)param_4;
        *(undefined2 *)(param_1[0x14] + 0x3e) = 0x10;
        *(int *)(param_1[0x14] + 0x34) = param_3;
        lVar9 = param_1[0x14];
        *(short *)(lVar9 + 0x3c) =
             (short)((uint)*(ushort *)(lVar9 + 0x3e) * (uint)*(ushort *)(lVar9 + 0x32) >> 3);
        lVar9 = param_1[0x14];
        *(uint *)(lVar9 + 0x38) = (uint)*(ushort *)(lVar9 + 0x3c) * *(int *)(lVar9 + 0x34);
        *(undefined2 *)(param_1[0x14] + 0x40) = 0;
        *(undefined4 *)(param_1[0x14] + 0x48) = 0x28;
        *(undefined4 *)(param_1[0x14] + 0x4c) = 0;
        *(uint *)(param_1[0x14] + 0x50) = *(uint *)(param_1[0x14] + 0x38) >> 1;
        *(undefined4 *)(param_1[0x14] + 0x54) = 0;
        *(longlong *)(param_1[0x14] + 0x58) = param_1[0x14] + 0x30;
        *(undefined4 *)(param_1[0x14] + 0x60) = 0;
        *(undefined8 *)(param_1[0x14] + 0x68) = 0;
        local_60 = (longlong *)0x0;
        plVar10 = *(longlong **)(param_1[0x14] + 0x10);
        iVar3 = (**(code **)(*plVar10 + 0x18))(plVar10,param_1[0x14] + 0x48,&local_60,0);
        if (-1 < iVar3) {
          iVar3 = (**(code **)*local_60)(local_60,&DAT_14997ebc8,param_1[0x14] + 0x28);
          (**(code **)(*local_60 + 0x10))();
          local_60 = (longlong *)0x0;
          if (-1 < iVar3) {
            *(undefined4 *)(param_1[0x14] + 0x70) = 0x10;
            plVar10 = *(longlong **)(param_1[0x14] + 0x28);
            iVar3 = (**(code **)(*plVar10 + 0x18))(plVar10,param_1[0x14] + 0x70);
            if (-1 < iVar3) {
              local_48 = (longlong *)0x0;
              iVar3 = (**(code **)**(undefined8 **)(param_1[0x14] + 0x28))
                                (*(undefined8 **)(param_1[0x14] + 0x28),&DAT_14997ebd8);
              if (-1 < iVar3) {
                pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
                *(HANDLE *)(param_1[0x14] + 0x80) = pvVar4;
                if (1 < *(longlong *)(param_1[0x14] + 0x80) + 1U) {
                  local_58.s.LowPart._0_1_ = 0xff;
                  local_58.s.LowPart._1_1_ = 0xff;
                  local_58.s.LowPart._2_2_ = 0xffff;
                  local_50 = *(longlong *)(param_1[0x14] + 0x80);
                  iVar3 = (**(code **)(*local_48 + 0x18))(local_48,1);
                  if (-1 < iVar3) {
                    (**(code **)(*local_48 + 0x10))();
                    QueryPerformanceCounter(&local_58);
                    param_1[0x15] =
                         (longlong)
                         ((double)CONCAT44(local_58.s.HighPart,
                                           CONCAT22(local_58.s.LowPart._2_2_,
                                                    CONCAT11(local_58.s.LowPart._1_1_,
                                                             local_58.s.LowPart._0_1_))) *
                          DAT_14c83f420 + 16777216.0);
                    local_58.s.LowPart._0_1_ = 0;
                    FUN_141724bc2(param_1 + 0x17,&local_58,*(undefined4 *)(param_1[0x14] + 0x50));
                    *(uint *)((longlong)param_1 + 0xe4) = (uint)*(ushort *)(param_1[0x14] + 0x32);
                    local_58.s.LowPart._0_1_ = 0;
                    local_58.s.LowPart._1_1_ = 0;
                    FUN_148a2c706(param_1 + 0x25,&local_58,*(undefined4 *)(param_1[0x14] + 0x78));
                    *(undefined4 *)(param_1 + 0x27) = 0;
                    *(int *)((longlong)param_1 + 0x13c) = (int)param_1[0x26] + -1;
                    uVar8 = 1;
                    goto LAB_143ecd22a;
                  }
                  CloseHandle(*(HANDLE *)(param_1[0x14] + 0x80));
                  *(undefined8 *)(param_1[0x14] + 0x80) = 0xffffffffffffffff;
                }
                (**(code **)(*local_48 + 0x10))();
              }
            }
          }
        }
      }
    }
    else {
      lVar9 = 0;
      uVar6 = 0;
      do {
        uVar1 = *(ushort *)(*param_2 + lVar9 * 2);
        uVar5 = ((uint)uVar1 + (uint)(0x19 < uVar1 - 0x61) * 0x20) - 0x20;
        uVar7 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar5) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar7 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
        lVar9 = lVar9 + 1;
      } while ((int)param_2[1] + -1 != (int)lVar9);
      plVar10 = (longlong *)(DAT_14cb953c8 + 0x58);
      iVar3 = FUN_148a2c774(plVar10,uVar6,param_2);
      if (iVar3 != -1) {
        lVar9 = *plVar10;
        if (lVar9 + (longlong)iVar3 * 0x40 != 0) {
          lVar9 = lVar9 + (longlong)iVar3 * 0x40 + 0x10;
          goto LAB_143eccf1c;
        }
      }
    }
  }
  uVar8 = 0;
LAB_143ecd22a:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecd2f6 FUN_143ecd2f6 body=61 status=ok
// SIG undefined FUN_143ecd2f6(void)

undefined8 FUN_143ecd2f6(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x28);
  if ((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,1), -1 < iVar2))
  {
    *(undefined4 *)(param_1 + 0xb0) = 3;
    return 1;
  }
  return 0;
}



// FUNCTION 143ecd344 FUN_143ecd344 body=92 status=ok
// SIG undefined FUN_143ecd344(void)

ulonglong FUN_143ecd344(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x28);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    local_14 = 0;
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_14);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),(undefined1)local_14) & 0xffffffffffffff01;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecd3a2 FUN_143ecd3a2 body=4308 status=ok
// SIG undefined FUN_143ecd3a2(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143ecd3a2(longlong param_1)

{
  uint uVar1;
  undefined2 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  DWORD DVar8;
  BOOL BVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar12;
  int iVar13;
  short sVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_188 [32];
  uint *local_168;
  longlong *local_160;
  uint *local_158;
  undefined4 local_150;
  float local_140;
  float local_13c;
  longlong *local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  uint local_10c;
  longlong local_108;
  uint local_fc;
  int local_f8 [2];
  ulonglong local_f0;
  
  uVar11 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_f0 = uVar11;
  if (1 < *(uint *)(param_1 + 0x28)) {
    local_f8[1] = 0;
    local_f8[0] = 0;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x28);
    if ((plVar3 == (longlong *)0x0) ||
       (iVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,local_f8 + 1,local_f8), iVar7 < 0)) {
      *(undefined4 *)(param_1 + 0x28) = 6;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x18);
      uVar11 = (ulonglong)((local_f8[0] - *(int *)(lVar4 + 0x88)) + *(uint *)(lVar4 + 0x78)) %
               (ulonglong)*(uint *)(lVar4 + 0x78);
      if ((int)uVar11 != 0) {
        local_168 = &local_fc;
        local_fc = 0;
        local_108 = 0;
        local_158 = &local_10c;
        local_10c = 0;
        local_160 = &local_118;
        local_118 = 0;
        local_150 = 0;
        iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x40))
                          (*(longlong **)(lVar4 + 0x28),*(int *)(lVar4 + 0x88),uVar11);
        uVar19 = 6;
        if (-1 < iVar7) {
          uVar11 = (ulonglong)local_fc;
          uVar15 = (ulonglong)local_10c;
          uVar12 = (ulonglong)*(uint *)(param_1 + 0x38);
          uVar19 = *(uint *)(param_1 + 0x3c);
          if (uVar19 < local_10c + local_fc + *(uint *)(param_1 + 0x38)) {
            if ((int)uVar19 < 0) goto LAB_143ece243;
            *(undefined4 *)(param_1 + 0x28) = 3;
            uVar12 = 0;
          }
          uVar10 = uVar19;
          if (local_fc < uVar19) {
            uVar10 = local_fc;
          }
          uVar20 = uVar19 - uVar10;
          if (local_10c < uVar19 - uVar10) {
            uVar20 = local_10c;
          }
          iVar7 = *(int *)(param_1 + 0xb0);
          iVar13 = *(int *)(param_1 + 0xb4);
          iVar17 = iVar7;
          if (iVar7 < iVar13) {
            iVar17 = *(int *)(param_1 + 0xa8) + iVar7;
          }
          plVar3 = (longlong *)(param_1 + 0x30);
          uVar1 = uVar20 + uVar10 + (iVar17 - iVar13) * 2;
          iVar17 = (int)uVar12;
          *(uint *)(param_1 + 0x38) = uVar1 + iVar17;
          local_128 = uVar15;
          local_120 = uVar11;
          local_10c = uVar20;
          local_fc = uVar10;
          if (uVar19 - iVar17 < uVar1) {
            FUN_1447403be(plVar3,uVar12);
            iVar7 = *(int *)(param_1 + 0xb0);
            iVar13 = *(int *)(param_1 + 0xb4);
          }
          lVar6 = local_108;
          lVar4 = *plVar3;
          if (iVar7 < iVar13) {
            iVar7 = iVar7 + *(int *)(param_1 + 0xa8);
          }
          local_138 = plVar3;
          local_130 = uVar12;
          iVar7 = FUN_148a2bbea(param_1 + 0xa0,iVar17 + lVar4,iVar7 - iVar13);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb95360) && (FUN_144b3d300(&DAT_14cb95360), DAT_14cb95360 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb95358 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"voice.SilenceDetectionThreshold",1);
            _Init_thread_footer(&DAT_14cb95360);
          }
          fVar21 = (float)(**(code **)(*DAT_14cb95358 + 0xb8))();
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb95370) && (FUN_144b3d300(&DAT_14cb95370), DAT_14cb95370 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb95368 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.MicNoiseGateThreshold",1)
            ;
            _Init_thread_footer(&DAT_14cb95370);
          }
          fVar22 = (float)(**(code **)(*DAT_14cb95368 + 0xb8))();
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb95380) && (FUN_144b3d300(&DAT_14cb95380), DAT_14cb95380 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb95378 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.MicNoiseAttackTime",1);
            _Init_thread_footer(&DAT_14cb95380);
          }
          local_13c = (float)(**(code **)(*DAT_14cb95378 + 0xb8))();
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb95390) && (FUN_144b3d300(&DAT_14cb95390), DAT_14cb95390 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb95388 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.MicNoiseReleaseTime",1);
            _Init_thread_footer(&DAT_14cb95390);
          }
          local_140 = (float)(**(code **)(*DAT_14cb95388 + 0xb8))();
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb953a0) && (FUN_144b3d300(&DAT_14cb953a0), DAT_14cb953a0 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb95398 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.MicInputGain",1);
            _Init_thread_footer(&DAT_14cb953a0);
          }
          uVar11 = (ulonglong)iVar7;
          fVar23 = (float)(**(code **)(*DAT_14cb95398 + 0xb8))();
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb953b0) && (FUN_144b3d300(&DAT_14cb953b0), DAT_14cb953b0 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14cb953a8 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.MicStereoBias",1);
            _Init_thread_footer(&DAT_14cb953b0);
          }
          lVar4 = iVar17 + lVar4 + uVar11 * 2;
          fVar24 = (float)(**(code **)(*DAT_14cb953a8 + 0xb8))();
          if (1.0 <= fVar24) {
            fVar24 = 1.0;
          }
          if (fVar24 <= -1.0) {
            fVar24 = -1.0;
          }
          fVar26 = ((fVar24 + 1.0) * 0.5 + 1.0) * 1.5707964;
          fVar24 = (fVar24 + 1.0) * 0.7853982;
          fVar26 = (1.0 - ABS(fVar26) / 3.1415927) * ((fVar26 * 4.0) / 3.1415927);
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          fVar24 = (1.0 - ABS(fVar24) / 3.1415927) * ((fVar24 * 4.0) / 3.1415927);
          if (1.0 <= fVar24) {
            fVar24 = 1.0;
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar25 = fVar26;
          if (fVar26 <= fVar24) {
            fVar25 = fVar24;
          }
          fVar26 = fVar26 / fVar25;
          fVar24 = fVar24 / fVar25;
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
          uVar19 = local_fc >> 1;
          if (local_fc < 2) {
            bVar5 = false;
          }
          else {
            uVar10 = *(uint *)(param_1 + 0x5c);
            bVar5 = false;
            iVar7 = 0;
            do {
              if ((int)uVar10 < 1) {
                sVar14 = 0;
              }
              else {
                uVar12 = 0;
                sVar14 = 0;
                do {
                  sVar14 = sVar14 + *(short *)(lVar6 + (longlong)iVar7 * 2 + uVar12 * 2);
                  uVar12 = uVar12 + 1;
                } while (uVar10 != uVar12);
              }
              fVar25 = (float)(int)sVar14 * 3.0517578e-05;
              iVar13 = *(int *)(param_1 + 0xd4);
              if (iVar13 == 0) {
                fVar25 = fVar25 * fVar25 * *(float *)(param_1 + 0xe4) +
                         *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xd8);
                *(float *)(param_1 + 0xd8) = fVar25;
              }
              else if (iVar13 == 1) {
                fVar25 = fVar25 * fVar25 * *(float *)(param_1 + 0xe4) +
                         *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xd8);
                *(float *)(param_1 + 0xd8) = fVar25;
                if (fVar25 < 0.0) {
                  fVar25 = sqrtf(fVar25);
                }
                else {
                  fVar25 = SQRT(fVar25);
                }
              }
              else if (iVar13 == 2) {
                fVar25 = ABS(fVar25);
              }
              fVar27 = *(float *)(param_1 + 0xd0) - fVar25;
              fVar25 = fVar27 * *(float *)(param_1 + 0xbc + (ulonglong)(0.0 < fVar27) * 8) + fVar25;
              *(float *)(param_1 + 0xd0) = fVar25;
              iVar13 = *(int *)(param_1 + 0x98) % *(int *)(param_1 + 0x90);
              *(int *)(param_1 + 0x98) = iVar13 + 1;
              *(short *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar13 * 2) = sVar14;
              *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) % *(int *)(param_1 + 0x90) + 1;
              *(bool *)(param_1 + 0xe8) = fVar21 < fVar25;
              if (fVar25 <= fVar22) {
                if (*(char *)(param_1 + 0x10c) != '\0') {
                  if (*(char *)(param_1 + 0x108) == '\x01') {
                    *(undefined1 *)(param_1 + 0x108) = 0;
                    *(undefined4 *)(param_1 + 0xfc) = 0;
                    *(undefined4 *)(param_1 + 0x104) = 0;
                  }
                  else {
                    iVar13 = (int)(*(float *)(param_1 + 0xf8) * local_140);
                    *(int *)(param_1 + 0xfc) = iVar13;
                    *(undefined4 *)(param_1 + 0x104) = 0;
                    if (iVar13 != 0) {
                      fVar27 = *(float *)(param_1 + 0xf0);
                      fVar28 = 0.0;
                      goto LAB_143ecdafb;
                    }
                  }
                  *(undefined4 *)(param_1 + 0xf0) = 0;
                }
              }
              else if (*(char *)(param_1 + 0x10c) == '\0') {
                if (*(char *)(param_1 + 0x108) == '\x01') {
                  *(undefined1 *)(param_1 + 0x108) = 0;
                  *(undefined4 *)(param_1 + 0xfc) = 0;
                  *(undefined4 *)(param_1 + 0x104) = 0;
                }
                else {
                  iVar13 = (int)(*(float *)(param_1 + 0xf8) * local_13c);
                  *(int *)(param_1 + 0xfc) = iVar13;
                  *(undefined4 *)(param_1 + 0x104) = 0;
                  if (iVar13 != 0) {
                    fVar27 = *(float *)(param_1 + 0xf0);
                    fVar28 = 1.0;
LAB_143ecdafb:
                    *(float *)(param_1 + 0xf4) = fVar28 - fVar27;
                    *(float *)(param_1 + 0xec) = fVar27;
                    goto LAB_143ecdb1b;
                  }
                }
                *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
              }
LAB_143ecdb1b:
              *(bool *)(param_1 + 0x10c) = fVar22 < fVar25;
              if (fVar25 <= fVar21) {
                bVar5 = true;
              }
              else {
                iVar13 = *(int *)(param_1 + 0xfc);
                iVar17 = *(int *)(param_1 + 0x104);
                if (bVar5) {
                  if (iVar17 < iVar13) {
                    fVar25 = ((float)iVar17 * *(float *)(param_1 + 0xf4)) / (float)iVar13 +
                             *(float *)(param_1 + 0xec);
                    *(float *)(param_1 + 0xf0) = fVar25;
                    *(int *)(param_1 + 0x104) = iVar17 + 1;
                  }
                  else {
                    fVar25 = *(float *)(param_1 + 0xf0);
                  }
                  if (0 < *(int *)(param_1 + 0x5c)) {
                    lVar16 = lVar6 + (longlong)iVar7 * 2;
                    uVar12 = 0;
                    do {
                      fVar27 = fVar26;
                      if ((uVar12 & 1) != 0) {
                        fVar27 = fVar24;
                      }
                      fVar27 = ((float)(int)*(short *)(lVar16 + uVar12 * 2) / 32767.0) *
                               fVar27 * fVar25 * fVar23;
                      if (2.0 <= fVar27) {
                        fVar27 = 2.0;
                      }
                      if (fVar27 <= -2.0) {
                        fVar27 = -2.0;
                      }
                      *(short *)(lVar16 + uVar12 * 2) = (short)(int)(fVar27 * 32767.0);
                      uVar12 = uVar12 + 1;
                      iVar13 = *(int *)(param_1 + 0x5c);
                    } while ((longlong)uVar12 < (longlong)iVar13);
                    if (0 < iVar13) {
                      lVar18 = 0;
                      do {
                        iVar17 = *(int *)(param_1 + 0xb0) % *(int *)(param_1 + 0xa8);
                        *(int *)(param_1 + 0xb0) = iVar17;
                        uVar2 = *(undefined2 *)(lVar16 + lVar18 * 2);
                        *(int *)(param_1 + 0xb0) = iVar17 + 1;
                        *(undefined2 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar17 * 2) =
                             uVar2;
                        lVar18 = lVar18 + 1;
                      } while (iVar13 != lVar18);
                    }
                  }
                  if (*(char *)(param_1 + 0x58) == '\0') {
                    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
                    *(undefined1 *)(param_1 + 0x58) = 1;
                  }
                }
                else {
                  if (iVar17 < iVar13) {
                    fVar25 = ((float)iVar17 * *(float *)(param_1 + 0xf4)) / (float)iVar13 +
                             *(float *)(param_1 + 0xec);
                    *(float *)(param_1 + 0xf0) = fVar25;
                    *(int *)(param_1 + 0x104) = iVar17 + 1;
                  }
                  else {
                    fVar25 = *(float *)(param_1 + 0xf0);
                  }
                  lVar16 = (longlong)*(int *)(param_1 + 0x5c);
                  if (0 < lVar16) {
                    lVar18 = lVar6 + (longlong)iVar7 * 2;
                    uVar12 = 0;
                    do {
                      fVar27 = fVar26;
                      if ((uVar12 & 1) != 0) {
                        fVar27 = fVar24;
                      }
                      fVar27 = ((float)(int)*(short *)(lVar18 + uVar12 * 2) / 32767.0) *
                               fVar27 * fVar25 * fVar23;
                      if (2.0 <= fVar27) {
                        fVar27 = 2.0;
                      }
                      if (fVar27 <= -2.0) {
                        fVar27 = -2.0;
                      }
                      *(short *)(lVar18 + uVar12 * 2) = (short)(int)(fVar27 * 32767.0);
                      uVar12 = uVar12 + 1;
                      lVar16 = (longlong)*(int *)(param_1 + 0x5c);
                    } while ((longlong)uVar12 < lVar16);
                  }
                  memcpy((void *)((longlong)iVar7 * 2 + lVar4),(void *)(lVar6 + (longlong)iVar7 * 2)
                         ,lVar16 * 2);
                  uVar11 = (ulonglong)(uint)((int)uVar11 + *(int *)(param_1 + 0x5c));
                }
              }
              *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
              uVar10 = *(uint *)(param_1 + 0x5c);
              iVar7 = iVar7 + uVar10;
            } while (iVar7 < (int)uVar19);
          }
          lVar6 = local_118;
          iVar7 = (int)uVar11;
          if (1 < local_10c) {
            uVar20 = local_10c >> 1;
            uVar10 = *(uint *)(param_1 + 0x5c);
            iVar13 = 0;
            do {
              if ((int)uVar10 < 1) {
                sVar14 = 0;
              }
              else {
                uVar12 = 0;
                sVar14 = 0;
                do {
                  sVar14 = sVar14 + *(short *)(lVar6 + (longlong)iVar13 * 2 + uVar12 * 2);
                  uVar12 = uVar12 + 1;
                } while (uVar10 != uVar12);
              }
              fVar25 = (float)(int)sVar14 * 3.0517578e-05;
              iVar7 = *(int *)(param_1 + 0xd4);
              if (iVar7 == 0) {
                fVar25 = fVar25 * fVar25 * *(float *)(param_1 + 0xe4) +
                         *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xd8);
                *(float *)(param_1 + 0xd8) = fVar25;
              }
              else if (iVar7 == 1) {
                fVar25 = fVar25 * fVar25 * *(float *)(param_1 + 0xe4) +
                         *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xd8);
                *(float *)(param_1 + 0xd8) = fVar25;
                if (fVar25 < 0.0) {
                  fVar25 = sqrtf(fVar25);
                }
                else {
                  fVar25 = SQRT(fVar25);
                }
              }
              else if (iVar7 == 2) {
                fVar25 = ABS(fVar25);
              }
              fVar27 = *(float *)(param_1 + 0xd0) - fVar25;
              fVar25 = fVar27 * *(float *)(param_1 + 0xbc + (ulonglong)(0.0 < fVar27) * 8) + fVar25;
              *(float *)(param_1 + 0xd0) = fVar25;
              iVar7 = *(int *)(param_1 + 0x98) % *(int *)(param_1 + 0x90);
              *(int *)(param_1 + 0x98) = iVar7 + 1;
              *(short *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar7 * 2) = sVar14;
              *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) % *(int *)(param_1 + 0x90) + 1;
              *(bool *)(param_1 + 0xe8) = fVar21 < fVar25;
              if (fVar25 <= fVar22) {
                if (*(char *)(param_1 + 0x10c) != '\0') {
                  if (*(char *)(param_1 + 0x108) == '\x01') {
                    *(undefined1 *)(param_1 + 0x108) = 0;
                    *(undefined4 *)(param_1 + 0xfc) = 0;
                    *(undefined4 *)(param_1 + 0x104) = 0;
                  }
                  else {
                    iVar7 = (int)(*(float *)(param_1 + 0xf8) * local_140);
                    *(int *)(param_1 + 0xfc) = iVar7;
                    *(undefined4 *)(param_1 + 0x104) = 0;
                    if (iVar7 != 0) {
                      fVar27 = *(float *)(param_1 + 0xf0);
                      fVar28 = 0.0;
                      goto LAB_143ecdf5b;
                    }
                  }
                  *(undefined4 *)(param_1 + 0xf0) = 0;
                }
              }
              else if (*(char *)(param_1 + 0x10c) == '\0') {
                if (*(char *)(param_1 + 0x108) == '\x01') {
                  *(undefined1 *)(param_1 + 0x108) = 0;
                  *(undefined4 *)(param_1 + 0xfc) = 0;
                  *(undefined4 *)(param_1 + 0x104) = 0;
                }
                else {
                  iVar7 = (int)(*(float *)(param_1 + 0xf8) * local_13c);
                  *(int *)(param_1 + 0xfc) = iVar7;
                  *(undefined4 *)(param_1 + 0x104) = 0;
                  if (iVar7 != 0) {
                    fVar27 = *(float *)(param_1 + 0xf0);
                    fVar28 = 1.0;
LAB_143ecdf5b:
                    *(float *)(param_1 + 0xf4) = fVar28 - fVar27;
                    *(float *)(param_1 + 0xec) = fVar27;
                    goto LAB_143ecdf7b;
                  }
                }
                *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
              }
LAB_143ecdf7b:
              *(bool *)(param_1 + 0x10c) = fVar22 < fVar25;
              if (fVar25 <= fVar21) {
                bVar5 = true;
              }
              else {
                iVar7 = *(int *)(param_1 + 0xfc);
                iVar17 = *(int *)(param_1 + 0x104);
                if (bVar5) {
                  if (iVar17 < iVar7) {
                    fVar25 = ((float)iVar17 * *(float *)(param_1 + 0xf4)) / (float)iVar7 +
                             *(float *)(param_1 + 0xec);
                    *(float *)(param_1 + 0xf0) = fVar25;
                    *(int *)(param_1 + 0x104) = iVar17 + 1;
                  }
                  else {
                    fVar25 = *(float *)(param_1 + 0xf0);
                  }
                  if (0 < *(int *)(param_1 + 0x5c)) {
                    lVar16 = lVar6 + (longlong)iVar13 * 2;
                    uVar12 = 0;
                    do {
                      fVar27 = fVar26;
                      if ((uVar12 & 1) != 0) {
                        fVar27 = fVar24;
                      }
                      fVar27 = ((float)(int)*(short *)(lVar16 + uVar12 * 2) / 32767.0) *
                               fVar27 * fVar25 * fVar23;
                      if (2.0 <= fVar27) {
                        fVar27 = 2.0;
                      }
                      if (fVar27 <= -2.0) {
                        fVar27 = -2.0;
                      }
                      *(short *)(lVar16 + uVar12 * 2) = (short)(int)(fVar27 * 32767.0);
                      uVar12 = uVar12 + 1;
                      iVar7 = *(int *)(param_1 + 0x5c);
                    } while ((longlong)uVar12 < (longlong)iVar7);
                    if (0 < iVar7) {
                      lVar18 = 0;
                      do {
                        iVar17 = *(int *)(param_1 + 0xb0) % *(int *)(param_1 + 0xa8);
                        *(int *)(param_1 + 0xb0) = iVar17;
                        uVar2 = *(undefined2 *)(lVar16 + lVar18 * 2);
                        *(int *)(param_1 + 0xb0) = iVar17 + 1;
                        *(undefined2 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar17 * 2) =
                             uVar2;
                        lVar18 = lVar18 + 1;
                      } while (iVar7 != lVar18);
                    }
                  }
                  if (*(char *)(param_1 + 0x58) == '\0') {
                    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
                    *(undefined1 *)(param_1 + 0x58) = 1;
                  }
                }
                else {
                  if (iVar17 < iVar7) {
                    fVar25 = ((float)iVar17 * *(float *)(param_1 + 0xf4)) / (float)iVar7 +
                             *(float *)(param_1 + 0xec);
                    *(float *)(param_1 + 0xf0) = fVar25;
                    *(int *)(param_1 + 0x104) = iVar17 + 1;
                  }
                  else {
                    fVar25 = *(float *)(param_1 + 0xf0);
                  }
                  lVar16 = (longlong)*(int *)(param_1 + 0x5c);
                  if (0 < lVar16) {
                    lVar18 = lVar6 + (longlong)iVar13 * 2;
                    uVar12 = 0;
                    do {
                      fVar27 = fVar26;
                      if ((uVar12 & 1) != 0) {
                        fVar27 = fVar24;
                      }
                      fVar27 = ((float)(int)*(short *)(lVar18 + uVar12 * 2) / 32767.0) *
                               fVar27 * fVar25 * fVar23;
                      if (2.0 <= fVar27) {
                        fVar27 = 2.0;
                      }
                      if (fVar27 <= -2.0) {
                        fVar27 = -2.0;
                      }
                      *(short *)(lVar18 + uVar12 * 2) = (short)(int)(fVar27 * 32767.0);
                      uVar12 = uVar12 + 1;
                      lVar16 = (longlong)*(int *)(param_1 + 0x5c);
                    } while ((longlong)uVar12 < lVar16);
                  }
                  memcpy((void *)((ulonglong)uVar19 * 2 + lVar4 + (longlong)iVar13 * 2),
                         (void *)(lVar6 + (longlong)iVar13 * 2),lVar16 * 2);
                  uVar11 = (ulonglong)(uint)((int)uVar11 + *(int *)(param_1 + 0x5c));
                }
              }
              iVar7 = (int)uVar11;
              *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
              uVar10 = *(uint *)(param_1 + 0x5c);
              iVar13 = iVar13 + uVar10;
            } while (iVar13 < (int)uVar20);
          }
          plVar3 = local_138;
          if (*(char *)(param_1 + 0x58) == '\0') {
            *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
          }
          *(undefined1 *)(param_1 + 0x58) = 0;
          iVar17 = (int)local_130 + iVar7 * 2;
          iVar13 = *(int *)(param_1 + 0x38);
          if (iVar13 < iVar17) {
            *(int *)(param_1 + 0x38) = iVar17;
            if ((uint)(*(int *)(param_1 + 0x3c) - iVar13) < (uint)(iVar17 - iVar13)) {
              FUN_1447403be(local_138);
            }
            memset((void *)((longlong)iVar13 + *plVar3),0,(longlong)(iVar17 - iVar13));
          }
          else {
            if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar17);
            }
            if (iVar17 < iVar13) {
              *(int *)(param_1 + 0x38) = iVar17;
            }
          }
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x28);
          local_168 = (uint *)CONCAT44(local_168._4_4_,(int)local_128);
          (**(code **)(*plVar3 + 0x58))(plVar3,local_108,local_120,local_118);
          lVar4 = *(longlong *)(param_1 + 0x18);
          *(uint *)(lVar4 + 0x88) = (local_fc + *(int *)(lVar4 + 0x88)) % *(uint *)(lVar4 + 0x78);
          lVar4 = *(longlong *)(param_1 + 0x18);
          *(uint *)(lVar4 + 0x88) = (local_10c + *(int *)(lVar4 + 0x88)) % *(uint *)(lVar4 + 0x78);
          uVar19 = 0 < iVar7 ^ 3;
        }
        *(uint *)(param_1 + 0x28) = uVar19;
      }
    }
    uVar11 = *(ulonglong *)(param_1 + 0x18);
    if (*(HANDLE *)(uVar11 + 0x80) != (HANDLE)0xffffffffffffffff) {
      DVar8 = WaitForSingleObject(*(HANDLE *)(uVar11 + 0x80),0);
      uVar11 = CONCAT44(extraout_var,DVar8);
      if (DVar8 == 0) {
        BVar9 = ResetEvent(*(HANDLE *)(*(longlong *)(param_1 + 0x18) + 0x80));
        uVar11 = CONCAT44(extraout_var_00,BVar9);
        *(undefined4 *)(param_1 + 0x28) = 1;
        if (*(int *)(param_1 + 0x3c) < 0) {
LAB_143ece243:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4();
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar11 >> 8),1);
}



// FUNCTION 143ece479 FUN_143ece479 body=535 status=ok
// SIG undefined FUN_143ece479(void)

undefined8 FUN_143ece479(undefined4 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  void **ppvVar1;
  wchar_t *pwVar2;
  void *pvVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *_Str2;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_98;
  wchar_t *local_90;
  void **local_88;
  undefined1 local_7c [4];
  void *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != (undefined4 *)0x0) {
    FUN_140056680(&local_a0);
    local_78 = (void *)0x0;
    uStack_70 = 0;
    iVar4 = local_98 + -1;
    if (local_98 == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(&local_78,local_a0,iVar4);
    pvVar3 = local_78;
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    local_58 = *(int *)(param_4 + 0x60) == *(int *)(param_4 + 0x8c);
    if ((bool)local_58) {
      ppvVar1 = (void **)(param_4 + 0x30);
      if (ppvVar1 != &local_78) {
        iVar4 = (int)uStack_70;
        lVar5 = (longlong)(int)uStack_70;
        *(int *)(param_4 + 0x38) = (int)uStack_70;
        if ((int)uStack_70 == 0 && *(int *)(param_4 + 0x3c) == 0) {
          *(undefined4 *)(param_4 + 0x3c) = 0;
        }
        else {
          FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
          if (iVar4 != 0) {
            memcpy(*ppvVar1,pvVar3,lVar5 * 2);
          }
        }
      }
      *(undefined1 *)(param_4 + 0x50) = local_58;
      *(undefined4 *)(param_4 + 0x40) = local_68;
      *(undefined4 *)(param_4 + 0x44) = uStack_64;
      *(undefined4 *)(param_4 + 0x48) = uStack_60;
      *(undefined4 *)(param_4 + 0x4c) = uStack_5c;
    }
    local_90 = (wchar_t *)&local_a0;
    local_88 = &local_78;
    FUN_148a2c8e6(param_4 + 0x58,local_7c);
    if (1 < *(int *)(param_4 + 0x28)) {
      FUN_140056680(&local_90,param_3);
      pwVar2 = local_90;
      _Str1 = L"";
      _Str2 = local_90;
      if ((int)local_88 == 0) {
        _Str2 = L"";
      }
      if (*(int *)(param_4 + 0x28) != 0) {
        _Str1 = *(wchar_t **)(param_4 + 0x20);
      }
      iVar4 = wcscmp(_Str1,_Str2);
      if (pwVar2 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar2);
      }
      pvVar3 = local_78;
      if (iVar4 == 0) {
        ppvVar1 = (void **)(param_4 + 0x30);
        if (ppvVar1 != &local_78) {
          iVar4 = (int)uStack_70;
          lVar5 = (longlong)(int)uStack_70;
          *(int *)(param_4 + 0x38) = (int)uStack_70;
          if ((int)uStack_70 == 0 && *(int *)(param_4 + 0x3c) == 0) {
            *(undefined4 *)(param_4 + 0x3c) = 0;
          }
          else {
            FUN_1446dd670(ppvVar1,uStack_70 & 0xffffffff);
            if (iVar4 != 0) {
              memcpy(*ppvVar1,pvVar3,lVar5 * 2);
            }
          }
        }
        *(undefined1 *)(param_4 + 0x50) = local_58;
        *(undefined4 *)(param_4 + 0x40) = local_68;
        *(undefined4 *)(param_4 + 0x44) = uStack_64;
        *(undefined4 *)(param_4 + 0x48) = uStack_60;
        *(undefined4 *)(param_4 + 0x4c) = uStack_5c;
        local_90 = (wchar_t *)&local_a0;
        local_88 = ppvVar1;
        FUN_148a2ce9c(param_4 + 0x58,local_7c);
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ece692 FUN_143ece692 body=787 status=ok
// SIG undefined FUN_143ece692(void)

undefined1 FUN_143ece692(longlong param_1)

{
  char cVar1;
  int iVar2;
  HRESULT HVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 auStackY_98 [32];
  undefined1 local_61;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  LPVOID local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  uVar5 = 0;
  iVar2 = Ordinal_11(0,param_1 + 0x18,0);
  if (-1 < iVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    FUN_145af9b74(&local_60);
    iVar2 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_60);
    if (0 < iVar2) {
      plVar4 = (longlong *)FUN_147364b50();
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_60);
      if ((longlong **)(param_1 + 0x20) == &local_60) {
        if (local_60 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(param_1 + 0x20) = local_60;
        local_60 = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0x28) = local_58;
        *(undefined4 *)(param_1 + 0x2c) = local_54;
      }
    }
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      FUN_148a2d08a(param_1 + 0x58);
      FUN_148a2d1ce(param_1 + 0x58);
    }
    iVar2 = Ordinal_8(FUN_143ece479,param_1);
    uVar5 = 0;
    if (-1 < iVar2) {
      local_61 = 0;
      if ((DAT_14c872ce0 != 0) &&
         (cVar1 = FUN_14052bb08(DAT_14c872ce0,L"Voice",L"bDuckingOptOut",&local_61), cVar1 == '\0'))
      {
        local_61 = 0;
      }
      uVar5 = local_61;
      local_40 = (longlong *)0x0;
      HVar3 = CoCreateInstance((IID *)&DAT_14ab423d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_14ab423c0,
                               &local_40);
      if (-1 < HVar3) {
        local_48 = (longlong *)0x0;
        iVar2 = (**(code **)(*local_40 + 0x20))(local_40,0,0);
        if (-1 < iVar2) {
          (**(code **)(*local_48 + 0x28))(local_48,&local_50);
          CoTaskMemFree(local_50);
          local_60 = (longlong *)0x0;
          iVar2 = (**(code **)(*local_48 + 0x18))(local_48,&DAT_14b4ac4c8,1,0);
          local_30 = (longlong *)0x0;
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*local_60 + 0x18))(local_60,0,0,&local_30);
            (**(code **)(*local_60 + 0x10))();
            local_60 = (longlong *)0x0;
            local_38 = (longlong *)0x0;
            if (-1 < iVar2) {
              iVar2 = (**(code **)*local_30)(local_30,&DAT_14b4ac4d8,&local_38);
              (**(code **)(*local_30 + 0x10))();
              local_30 = (longlong *)0x0;
              if (-1 < iVar2) {
                (**(code **)(*local_38 + 0x80))(local_38,uVar5);
                (**(code **)(*local_38 + 0x10))();
              }
            }
          }
          (**(code **)(*local_48 + 0x10))();
        }
        (**(code **)(*local_40 + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      uVar5 = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStackY_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143ece9a6 FUN_143ece9a6 body=155 status=ok
// SIG undefined FUN_143ece9a6(void)

void FUN_143ece9a6(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x8000000149e3ac66;
  local_14 = 5;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146577ed8(&local_28);
  local_38 = 0;
  FUN_141471170(&DAT_14cb95320,L"voice.debug.PrintAmplitude",&DAT_14cb95330,
                L"when set to 1, the current incoming amplitude of the VOIP engine will be displayed on screen.\n0: disabled, 1: enabled."
               );
  atexit(FUN_143eccb3f);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecea44 FUN_143ecea44 body=55 status=ok
// SIG undefined FUN_143ecea44(void)

void FUN_143ecea44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb953f0 == 0) {
    uVar1 = FUN_14107675e();
    DAT_14cb953f0 = FUN_14171c317(FUN_146578090,uVar1,L"EInAppPurchaseStatus");
  }
  return;
}



// FUNCTION 143ecea7c FUN_143ecea7c body=488 status=ok
// SIG undefined FUN_143ecea7c(void)

void FUN_143ecea7c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined **local_e8 [11];
  longlong *local_90;
  longlong local_70;
  longlong local_58;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = 0;
  uStack_30 = 0;
  cVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  if ((cVar5 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))();
    FUN_144a99d0c(local_e8,local_38,(longlong)iVar6);
    FUN_140b976f4(&local_f8,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10),0,0);
    FUN_147ce0efe(local_f8,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x60),local_e8);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
    local_e8[0] = &PTR_FUN_149e37220;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_e8[0] = &PTR__purecall_149e35f70;
    if (local_90 != (longlong *)0x0) {
      if (*local_90 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_90);
    }
    if (local_70 != 0) {
      if (*(longlong *)(local_70 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_70);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,local_108);
    FUN_148a32091(lVar3 + 0x30,local_108);
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecec66 FUN_143ecec66 body=402 status=ok
// SIG undefined FUN_143ecec66(void)

void FUN_143ecec66(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)(param_1 + 0x68) != 0) && (uVar2 = *(uint *)(param_1 + 100), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x68))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_30[2] = lVar5;
    *local_30 = &PTR_FUN_14b4c2510;
    local_30[3] = param_1;
    local_38 = 1;
    FUN_142c039ac(&local_20,&local_30);
    if (local_20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_20)(local_20,1);
      }
    }
    if (local_28 != 0) {
      if (local_30 == (undefined8 *)0x0) goto LAB_143ecedc0;
      (**(code **)*local_30)(local_30,0);
      FUN_1446efa72(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ecedc0:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecedfa FUN_143ecedfa body=402 status=ok
// SIG undefined FUN_143ecedfa(void)

void FUN_143ecedfa(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar2 = *(uint *)(param_1 + 0x48), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x4c))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_30[2] = lVar5;
    *local_30 = &PTR_FUN_14b4c25f0;
    local_30[3] = param_1;
    local_38 = 1;
    FUN_142c039ac(&local_20,&local_30);
    if (local_20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_20)(local_20,1);
      }
    }
    if (local_28 != 0) {
      if (local_30 == (undefined8 *)0x0) goto LAB_143ecef54;
      (**(code **)*local_30)(local_30,0);
      FUN_1446efa72(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ecef54:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecef8d FUN_143ecef8d body=55 status=ok
// SIG undefined FUN_143ecef8d(void)

void FUN_143ecef8d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb956c8 == 0) {
    uVar1 = FUN_14107675e();
    DAT_14cb956c8 = FUN_14171c317(FUN_1465790df,uVar1,L"EOnlineProxyStoreOfferDiscountType");
  }
  return;
}



// FUNCTION 143ecefc4 FUN_143ecefc4 body=714 status=ok
// SIG undefined FUN_143ecefc4(void)

void FUN_143ecefc4(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  longlong local_48;
  ulonglong uStack_40;
  longlong *local_30;
  int local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Start",5,0);
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (param_2 != '\0') {
    FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - WasSuccessful",5,0);
    local_30 = (longlong *)0x0;
    cVar5 = FUN_140a68212();
    if (cVar5 != '\0') {
      local_48 = 0;
      plVar6 = (longlong *)FUN_1401e3228();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x90))(plVar6,&local_30);
        if (local_30 != (longlong *)0x0) {
          FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Interface is good"
                        ,5,0);
          local_48 = 0;
          uStack_40 = 0;
          FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Getting Cached Offers"
                        ,5,0);
          (**(code **)(*local_30 + 0x48))(local_30,&local_48);
          FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Converting to proxy store offer"
                        ,5,0);
          FUN_148a34c3e(&local_48,param_1 + 0x58);
          FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Done",5,0);
          *(undefined1 *)(param_1 + 0x50) = 1;
          FUN_145c26966(local_48,uStack_40 & 0xffffffff);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        plVar6 = (longlong *)CONCAT44(uStack_24,local_28);
        if (plVar6 != (longlong *)0x0) {
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
        }
      }
    }
  }
  if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar3 = *(uint *)(param_1 + 0x48), -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x4c))) &&
      (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
    local_30 = (longlong *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = (longlong)&PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_30[2] = lVar7;
    *local_30 = (longlong)&PTR_FUN_14b4c26d0;
    local_30[3] = param_1;
    local_58 = 1;
    FUN_142c039ac(&local_50,&local_30);
    if (local_50 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_50 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_50)(local_50,1);
      }
    }
    if (local_28 != 0) {
      if (local_30 == (longlong *)0x0) goto LAB_143ecf1c4;
      (**(code **)*local_30)(local_30,0);
      FUN_1446efa72(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_30 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ecf1c4:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecf290 FUN_143ecf290 body=402 status=ok
// SIG undefined FUN_143ecf290(void)

void FUN_143ecf290(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)(param_1 + 100) != 0) && (uVar2 = *(uint *)(param_1 + 0x60), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 100))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_30[2] = lVar5;
    *local_30 = &PTR_FUN_14b4c2820;
    local_30[3] = param_1;
    local_38 = 1;
    FUN_142c039ac(&local_20,&local_30);
    if (local_20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_20)(local_20,1);
      }
    }
    if (local_28 != 0) {
      if (local_30 == (undefined8 *)0x0) goto LAB_143ecf3ea;
      (**(code **)*local_30)(local_30,0);
      FUN_1446efa72(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ecf3ea:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecf424 FUN_143ecf424 body=402 status=ok
// SIG undefined FUN_143ecf424(void)

void FUN_143ecf424(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)(param_1 + 0x50) != 0) && (uVar2 = *(uint *)(param_1 + 0x4c), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x50))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_30[2] = lVar5;
    *local_30 = &PTR_FUN_14b4c2900;
    local_30[3] = param_1;
    local_38 = 1;
    FUN_142c039ac(&local_20,&local_30);
    if (local_20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_20)(local_20,1);
      }
    }
    if (local_28 != 0) {
      if (local_30 == (undefined8 *)0x0) goto LAB_143ecf57e;
      (**(code **)*local_30)(local_30,0);
      FUN_1446efa72(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ecf57e:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecf5b7 FUN_143ecf5b7 body=69 status=ok
// SIG undefined FUN_143ecf5b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ecf5b7(void)

{
  _DAT_14cb957a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ecf5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb957b0,1);
  return;
}



// FUNCTION 143ecf5fc FUN_143ecf5fc body=69 status=ok
// SIG undefined FUN_143ecf5fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ecf5fc(void)

{
  _DAT_14cb957c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ecf63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb957c8,1);
  return;
}



// FUNCTION 143ecf641 FUN_143ecf641 body=69 status=ok
// SIG undefined FUN_143ecf641(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ecf641(void)

{
  _DAT_14cb957d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ecf683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb957e0,1);
  return;
}



// FUNCTION 143ecf686 FUN_143ecf686 body=69 status=ok
// SIG undefined FUN_143ecf686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ecf686(void)

{
  _DAT_14cb957e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ecf6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb957f0,1);
  return;
}



// FUNCTION 143ecf6cc FUN_143ecf6cc body=1884 status=ok
// SIG undefined FUN_143ecf6cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ecf6cc(longlong *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_c8 [40];
  LARGE_INTEGER local_a0;
  longlong *local_98;
  longlong local_88;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*DAT_14cb957b8 != 0) {
    uVar7 = (**(code **)(*(longlong *)param_1[0xb] + 0x3d0))();
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3be);
    EnterCriticalSection(lpCriticalSection);
    lVar9 = param_1[0x3c4];
    if ((longlong)(int)lVar9 == 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      lVar10 = param_1[0x3c3];
      param_1[0x3c3] = 0;
      param_1[0x3c4] = 0;
      LeaveCriticalSection(lpCriticalSection);
      lVar12 = 0;
      do {
        FUN_143ecfe2a(param_1,lVar10 + lVar12,uVar7);
        lVar12 = lVar12 + 8;
      } while ((longlong)(int)lVar9 * 8 != lVar12);
      if (lVar10 != 0) {
        FUN_1400020a8(lVar10);
      }
    }
  }
  lVar9 = param_1[0x3ce];
  cVar6 = *(char *)(lVar9 + 0x4c);
  if (cVar6 == '\x04') {
    if (*(int *)(lVar9 + 0x40) <= *(int *)(lVar9 + 0x48)) {
      *(undefined1 *)(lVar9 + 0x4c) = 7;
      goto LAB_143ecf984;
    }
    lVar10 = (longlong)*(int *)(lVar9 + 0x48) * 0x10;
    uVar7 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + lVar10);
    plVar5 = *(longlong **)(*(longlong *)(lVar9 + 0x38) + 8 + lVar10);
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      plVar11 = *(longlong **)(lVar9 + 0x30);
      if (plVar11 != (longlong *)0x0) {
        *(undefined8 *)(lVar9 + 0x30) = 0;
LAB_143ecf861:
        LOCK();
        plVar5 = plVar11 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000143ecf88e:
          if (iVar4 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      plVar11 = *(longlong **)(lVar9 + 0x30);
      if (plVar5 == plVar11) {
        LOCK();
        plVar11 = plVar5 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar11 = plVar5;
          goto joined_r0x000143ecf88e;
        }
      }
      else {
        *(longlong **)(lVar9 + 0x30) = plVar5;
        if (plVar11 != (longlong *)0x0) goto LAB_143ecf861;
      }
    }
    *(undefined8 *)(lVar9 + 0x18) = 0;
    plVar5 = *(longlong **)(lVar9 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(lVar9 + 0x20) = 0;
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
    iVar4 = *(int *)(lVar9 + 0x10);
    if ((longlong)iVar4 != 0) {
      lVar10 = *(longlong *)(lVar9 + 8);
      lVar12 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar10 + lVar12) + 0x20);
        (**(code **)(**(longlong **)(lVar9 + 0x28) + 0xa8))(*(longlong **)(lVar9 + 0x28),&local_a0);
        if (lVar8 == local_a0.QuadPart) {
          lVar8 = *(longlong *)(lVar10 + lVar12);
          lVar10 = *(longlong *)(lVar10 + 8 + lVar12);
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
          }
          plVar5 = *(longlong **)(lVar9 + 0x20);
          *(longlong *)(lVar9 + 0x18) = lVar8;
          *(longlong *)(lVar9 + 0x20) = lVar10;
          if (plVar5 == (longlong *)0x0) goto LAB_143ecf955;
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
          break;
        }
        lVar12 = lVar12 + 0x10;
      } while ((longlong)iVar4 * 0x10 != lVar12);
    }
    lVar8 = *(longlong *)(lVar9 + 0x18);
LAB_143ecf955:
    if (lVar8 == 0) {
      *(undefined1 *)(lVar9 + 0x4c) = 7;
      if ((param_1[0x3bd] != 0) && (*(char *)(param_1[0x3ce] + 0x4c) != '\x01')) {
        param_1[0x3bd] = 0;
      }
      goto LAB_143ecf984;
    }
    *(undefined1 *)(lVar9 + 0x4c) = 3;
    iVar4 = *(int *)(lVar9 + 0x48);
    *(int *)(lVar9 + 0x48) = iVar4 + 1;
    local_a0 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1[0x3ce] + 0x18))->QuadPart;
    plVar5 = *(longlong **)(param_1[0x3ce] + 0x20);
    local_98 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      FUN_148a36610(param_1,&local_a0);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_148a36610(param_1);
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
    }
    lVar9 = *(longlong *)(param_1[0x3ce] + 0x28);
    plVar5 = *(longlong **)(param_1[0x3ce] + 0x30);
    if (plVar5 == (longlong *)0x0) {
      param_1[0x22] = lVar9;
      plVar11 = (longlong *)param_1[0x23];
      if (plVar11 != (longlong *)0x0) {
        param_1[0x23] = 0;
LAB_143ecfcf0:
        LOCK();
        plVar5 = plVar11 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000143ecfd2c:
          if (iVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      param_1[0x22] = lVar9;
      plVar11 = (longlong *)param_1[0x23];
      if (plVar5 == plVar11) {
        LOCK();
        plVar11 = plVar5 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar11 = plVar5;
          goto joined_r0x000143ecfd2c;
        }
      }
      else {
        param_1[0x23] = (longlong)plVar5;
        if (plVar11 != (longlong *)0x0) goto LAB_143ecfcf0;
      }
    }
    param_1[0x3b] = *(longlong *)(param_1[0xb] + 0x300);
    QueryPerformanceCounter(&local_a0);
    param_1[0x3c] = (longlong)((double)local_a0.QuadPart * DAT_14c83f420 + 16777216.0);
    QueryPerformanceCounter(&local_a0);
    param_1[0x3d] = (longlong)((double)local_a0.QuadPart * DAT_14c83f420 + 16777216.0);
    (**(code **)(*param_1 + 0x2e8))(param_1);
    if (((iVar4 != 0) && (param_1[0x28] == 0)) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0))
    {
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar9);
        lVar12 = *(longlong *)(lVar10 + 0x230);
        if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x30) == param_1[0xb])) {
          if (lVar10 != 0) {
            FUN_141663d36();
          }
          break;
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar9);
    }
    goto LAB_143ecf984;
  }
  if (cVar6 != '\x05') {
    if (cVar6 == '\a') {
      *(undefined1 *)(lVar9 + 0x4c) = 6;
      *(undefined4 *)((longlong)param_1 + 0x134) = 1;
      FUN_1459b235e(&local_a0,0x17);
      FUN_143587ad8(param_1,&local_a0);
      if (local_78 != 0) {
        (**(code **)(local_78 + -0x10))(local_78 + -0x10);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    goto LAB_143ecf984;
  }
  *(undefined1 *)(lVar9 + 0x4c) = 6;
  FUN_14156e3fa(lVar9,2);
  if (param_1[0xb] == 0) {
LAB_143ecfb82:
    lVar12 = 0;
  }
  else {
    lVar10 = FUN_14141a00e();
    lVar9 = param_1[0xb];
    if (lVar9 == 0) goto LAB_143ecfb82;
    lVar12 = 0;
    if ((lVar10 != 0) && (lVar8 = *(longlong *)(lVar9 + 0x10), lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x38) < *(int *)(lVar10 + 0x38)) goto LAB_143ecfb82;
      lVar12 = 0;
      if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30) {
        lVar12 = lVar9;
      }
    }
  }
  local_a0 = *(LARGE_INTEGER *)(param_1[0x3ce] + 0x18);
  local_98 = *(longlong **)(param_1[0x3ce] + 0x20);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    UNLOCK();
  }
  FUN_1461f83dc(lVar12,&local_a0);
  plVar5 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_98 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_143ecf984:
  if (((0 < (int)param_1[0x3c9]) && (1.0 <= (double)param_1[0x3c] - (double)param_1[0x3ca])) &&
     ((int)param_1[0x3c9] == (int)param_1[0x3cb])) {
    LOCK();
    *(undefined4 *)(param_1 + 0x3cb) = 0;
    UNLOCK();
    iVar4 = *(int *)((longlong)param_1 + 0x1e4c);
    FUN_141462cfc(param_1[0x3c8],(int)param_1[0x3c9]);
    *(undefined4 *)(param_1 + 0x3c9) = 0;
    if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x1e4c) != 0)) {
      FUN_148a43da4(param_1 + 0x3c8);
    }
  }
  FUN_14358caf8(param_1);
  if (param_1[0xb] != 0) {
    lVar9 = FUN_14141a00e();
    plVar5 = (longlong *)param_1[0xb];
    if (((((plVar5 != (longlong *)0x0) && (lVar9 != 0)) &&
         ((lVar10 = plVar5[2], lVar10 != 0 &&
          ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)))))) && ((DAT_14cb957f8 != 0.0 || (NAN(DAT_14cb957f8))))) &&
       (((*(int *)((longlong)param_1 + 0x134) != 1 &&
         ((*(byte *)((longlong)param_1 + 0xa4) & 4) == 0)) &&
        (cVar6 = (**(code **)(*plVar5 + 0x3c0))(plVar5), cVar6 == '\0')))) {
      dVar3 = *(double *)(param_1[0xb] + 0x300);
      dVar13 = (double)plVar5[0x12a];
      dVar14 = (double)param_1[0x43];
      if ((double)param_1[0x43] <= dVar13) {
        dVar14 = dVar13;
      }
      if ((double)_DAT_14c763adc *
          (double)(~-(ulonglong)(dVar13 == 0.0) & 0x3ff0000000000000 |
                  *(ulonglong *)
                   (&DAT_14aaf9c70 +
                   (ulonglong)(dVar3 < (double)*(float *)(param_1[0xb] + 0xdc)) * 8) &
                  -(ulonglong)(dVar13 == 0.0)) < dVar3 - dVar14) {
        dVar13 = (double)param_1[0x3b];
        if ((double)param_1[0x3b] <= (double)param_1[0x42]) {
          dVar13 = (double)param_1[0x42];
        }
        if ((double)DAT_14cb957f8 < dVar3 - dVar13) {
          FUN_143ecffb6(plVar5,0xffffffff);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ecfe2a FUN_143ecfe2a body=394 status=ok
// SIG undefined FUN_143ecfe2a(void)

void FUN_143ecfe2a(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 4) == 7) goto LAB_143ecfeb5;
  if (*(int *)(param_2 + 4) != 0) {
    if (0.0 < *(float *)((longlong)param_1 + 0x1e5c)) {
      dVar1 = (double)param_1[0x3cc];
      if ((dVar1 == 0.0) && (!NAN(dVar1))) {
        param_1[0x3cc] = (longlong)*(double *)(param_1[0xb] + 0x300);
        goto LAB_143ecfeb5;
      }
      if (*(double *)(param_1[0xb] + 0x300) - dVar1 < (double)*(float *)((longlong)param_1 + 0x1e5c)
         ) goto LAB_143ecfeb5;
    }
    if (*(char *)((longlong)param_1 + 0x1c9d) != '\0') goto LAB_143ecfeb5;
    lVar2 = param_1[0x3ce];
    if ((*(int *)(lVar2 + 0x40) <= *(int *)(lVar2 + 0x48)) ||
       ((*(byte *)(lVar2 + 0x4c) < 8 && ((0xc2U >> (*(byte *)(lVar2 + 0x4c) & 0x1f) & 1) != 0)))) {
      *(undefined1 *)(lVar2 + 0x4c) = 7;
      *(undefined1 *)((longlong)param_1 + 0x1c9d) = 1;
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_48);
      local_58 = (longlong *)local_48;
      if (local_40 == 0) {
        local_58 = (longlong *)&DAT_149dfb77a;
      }
      uVar3 = FUN_146b11fe0(param_3,*(undefined4 *)(param_2 + 4));
      FUN_140002266(local_38,
                    L"UIpNetConnection::HandleSocketSendResult: Socket->SendTo failed with error %i (%s). %s Connection will be closed during next Tick()!"
                    ,*(undefined4 *)(param_2 + 4),uVar3);
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_58 = local_38;
      FUN_147d87416(DAT_14cb0d2b0 + 0xec8,*(undefined8 *)(param_1[0xb] + 0x1a8),param_1[0xb],3);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_143ecfeb5;
    }
    *(undefined1 *)(lVar2 + 0x4c) = 4;
    *(undefined1 *)((longlong)param_1 + 0x1c9d) = 1;
  }
  param_1[0x3cc] = 0;
LAB_143ecfeb5:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ecffb6 FUN_143ecffb6 body=800 status=ok
// SIG undefined FUN_143ecffb6(void)

ulonglong FUN_143ecffb6(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined ***pppuVar9;
  uint uVar10;
  undefined8 unaff_RDI;
  undefined7 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined4 local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8 [2];
  undefined1 *local_b8 [2];
  undefined8 local_a8;
  undefined **local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined ***local_68;
  undefined **local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_1[0x12a] = param_1[0x60];
  if (((*(char *)((longlong)param_1 + 0x949) == '\x01') && (param_1[0x1e] != 0)) &&
     ((*(byte *)(param_1[0x1e] + 0xa4) & 4) == 0)) {
    bVar3 = *(byte *)(param_1 + 0x129);
    uVar11 = (undefined7)((ulonglong)unaff_RDI >> 8);
    uVar8 = CONCAT71(uVar11,bVar3);
    if (1 < bVar3 - 1) {
      if (bVar3 == 3) {
        uVar8 = param_2 & 0xffffffff;
        if ((int)param_2 == -1) {
          uVar5 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2,param_3,uVar8);
          uVar8 = (ulonglong)uVar5;
        }
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_108 = (undefined4)param_1[0x121];
        local_110 = *(undefined4 *)((longlong)param_1 + 0x904);
        local_e8 = param_1[0xf8];
        local_e0 = param_1[0xf9];
        if (local_e0 != 0) {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        local_100 = local_c8;
        local_118 = 0;
        (**(code **)(*param_1 + 0x4c8))(param_1,&local_d8,&local_e8,uVar8);
        uVar8 = CONCAT71(uVar11,4);
        if (local_d0 != 0) {
          if (param_1 == (longlong *)0x0) {
            uVar5 = 0;
            uVar8 = 0;
          }
          else {
            uVar5 = *(uint *)((longlong)param_1 + 0xc);
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            uVar8 = (ulonglong)*(uint *)(lVar12 + 0x10);
            if (*(uint *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              uVar10 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar10);
              }
              LOCK();
              uVar6 = *(uint *)(lVar12 + 0x10);
              bVar13 = uVar6 == 0;
              if (bVar13) {
                *(uint *)(lVar12 + 0x10) = uVar10;
                uVar6 = 0;
              }
              UNLOCK();
              if (bVar13) {
                uVar6 = uVar10;
              }
              uVar8 = (ulonglong)uVar6;
            }
          }
          lVar12 = local_d0;
          plVar1 = local_d8;
          local_58 = &PTR_LAB_14b4c2ab0;
          local_90 = (ulonglong)uVar5 | uVar8 << 0x20;
          *(undefined1 *)(param_1 + 0x129) = 2;
          local_b8[0] = &LAB_143edcf78;
          local_a8 = 0;
          local_68 = (undefined ***)0x0;
          local_98 = &PTR_LAB_14b4c2ab0;
          local_88 = local_48;
          uStack_84 = uStack_44;
          uStack_80 = uStack_40;
          uStack_7c = uStack_3c;
          local_78 = 0;
          local_d0 = 0;
          local_f8 = lVar12;
          local_50 = local_90;
          plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
          plVar7[2] = (longlong)plVar1;
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14b4c3b30;
          plVar7[3] = lVar12;
          local_f0 = plVar7;
          FUN_1461f854a(param_1,&local_f8,local_b8);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar7 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          if (local_78 != 0) {
            pppuVar9 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar9 = &local_58;
            }
            (*(code *)(*pppuVar9)[2])();
          }
          uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),3);
          if (local_d0 != 0 && local_d8 != (longlong *)0x0) {
            (**(code **)(*local_d8 + 0x38))();
          }
        }
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar8 = CONCAT71(uVar11,4);
      }
    }
  }
  else {
    uVar8 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143ed02d8 FUN_143ed02d8 body=474 status=ok
// SIG undefined FUN_143ed02d8(void)

void FUN_143ed02d8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  longlong local_58 [4];
  longlong *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0x1e40);
  iVar3 = *(int *)(param_1 + 0x1e48);
  lVar6 = (longlong)iVar3;
  if (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar8) == *param_2) goto LAB_143ed0473;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 << 4 != lVar8);
  }
  *(uint *)(param_1 + 0x1e48) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1e4c) < iVar3 + 1U) {
    FUN_148a43dd4((longlong *)(param_1 + 0x1e40),iVar3);
    lVar5 = *(longlong *)(param_1 + 0x1e40);
  }
  *(longlong *)(lVar5 + lVar6 * 0x10) = *param_2;
  lVar8 = param_2[1];
  *(longlong *)(lVar5 + 8 + lVar6 * 0x10) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1e50) = *(undefined8 *)(param_1 + 0x1e0);
  if ((*DAT_14cb957b8 == 0) || (lVar5 = *(longlong *)(param_1 + 0x1e28), lVar5 == 0)) {
    LOCK();
    *(int *)(param_1 + 0x1e58) = *(int *)(param_1 + 0x1e58) + 1;
    UNLOCK();
    goto LAB_143ed0473;
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x400000001;
  LOCK();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  UNLOCK();
  ppuVar2 = (undefined8 **)(param_1 + 0x1e28);
  local_88 = 0;
  local_78 = &PTR_LAB_14b4c2970;
  local_98 = &LAB_143edc9b4;
  local_a8 = 0xff;
  local_70 = param_1;
  local_58[0] = lVar5;
  FUN_14014aede(&local_a0);
  if (ppuVar2 == &local_a0) {
LAB_143ed0420:
    if (local_a0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a0)(local_a0,1);
      }
    }
  }
  else {
    puVar4 = *ppuVar2;
    *ppuVar2 = local_a0;
    local_a0 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      goto LAB_143ed0420;
    }
  }
  plVar7 = local_58;
  if (local_38 != (longlong *)0x0) {
    plVar7 = local_38;
  }
  FUN_144717c65(plVar7,local_30 & 0xffffffff);
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143ed0473:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ed04b4 FUN_143ed04b4 body=999 status=ok
// SIG undefined FUN_143ed04b4(void)

void FUN_143ed04b4(void *param_1,void *param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  byte bVar16;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  longlong *local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  byte local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined8 *local_a8;
  longlong local_78;
  longlong *plStack_70;
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong **)((longlong)param_1 + 0x110) == (longlong *)0x0) goto LAB_143ed0855;
  cVar8 = (**(code **)(**(longlong **)((longlong)param_1 + 0x110) + 0x98))();
  if (((cVar8 == '\0') ||
      (cVar8 = *(char *)(*(longlong *)((longlong)param_1 + 0x1e70) + 0x4c), cVar8 == '\x02')) ||
     (cVar8 == '\x04')) goto LAB_143ed0855;
  lVar5 = *(longlong *)((longlong)param_1 + 0x140);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 2) & 1) == 0)) {
    local_f8 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_100 = 0;
    local_108 = param_4;
    FUN_142b051ea(lVar5,&local_f0,param_2,param_3);
    plVar13 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if (local_e8._4_1_ == '\x01') goto LAB_143ed0855;
    param_2 = local_f0;
    param_3 = (int)local_e8;
  }
  lVar5 = DAT_14cb957b8;
  iVar7 = param_3 + 0xe;
  if (-1 < param_3 + 7) {
    iVar7 = param_3 + 7;
  }
  local_c0 = 0;
  if (param_3 < 1) goto LAB_143ed0855;
  if (*(float *)((longlong)param_1 + 0x1e5c) <= 0.0) {
    bVar16 = 0;
  }
  else {
    bVar16 = -(*(double *)((longlong)param_1 + 0x1e60) != 0.0) & 1;
  }
  plVar13 = *(longlong **)((longlong)param_1 + 0x1de8);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar14 = 0;
  }
  else if (iVar4 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar14 = 1;
  }
  uVar15 = iVar7 >> 3;
  if (*(int *)(lVar5 + uVar14 * 4) == 0) {
    local_108 = *(undefined8 *)((longlong)param_1 + 0x110);
    cVar8 = (**(code **)(*plVar13 + 0x50))(plVar13,param_2,uVar15,&local_c0);
    if (cVar8 == '\0') {
      plVar13 = (longlong *)(**(code **)(**(longlong **)((longlong)param_1 + 0x58) + 0x3d0))();
      uVar9 = (**(code **)(*plVar13 + 0xb8))(plVar13);
      local_c0 = CONCAT44(uVar9,(undefined4)local_c0);
    }
    else {
      if (bVar16 == 0) goto LAB_143ed0855;
      plVar13 = (longlong *)0x0;
    }
    FUN_143ecfe2a(param_1,&local_c0,plVar13);
    goto LAB_143ed0855;
  }
  local_58 = (longlong *)0x0;
  local_50 = 0x400000000;
  lVar5 = *(longlong *)((longlong)param_1 + 0x1e28);
  if (lVar5 != 0) {
    local_50 = 0x400000001;
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    local_78 = lVar5;
  }
  ppuVar3 = (undefined8 **)((longlong)param_1 + 0x1e28);
  uVar12 = (**(code **)(**(longlong **)((longlong)param_1 + 0x58) + 0x3d0))();
  local_e8 = (void *)0x0;
  local_f0 = param_1;
  local_e0._0_4_ = uVar15;
  FUN_1447a127e(&local_e8,uVar15,0);
  memcpy(local_e8,param_2,(ulonglong)uVar15);
  local_b8[0] = (code *)0x0;
  local_d8 = uVar12;
  local_d0 = bVar16;
  local_a8 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_a8 = &PTR_LAB_14b4c2990;
  local_a8[1] = local_f0;
  local_a8[2] = local_e8;
  local_e8 = (void *)0x0;
  *(uint *)(local_a8 + 3) = (uint)local_e0;
  *(undefined4 *)((longlong)local_a8 + 0x1c) = local_e0._4_4_;
  local_e0 = 0;
  *(byte *)(local_a8 + 5) = local_d0;
  local_a8[4] = local_d8;
  if (local_a8 + 1 != (longlong *)0x0) {
    local_b8[0] = FUN_143edc9f4;
  }
  local_108 = CONCAT44(local_108._4_4_,0xff);
  FUN_14014aede(&local_c8,local_b8);
  if (ppuVar3 == &local_c8) {
LAB_143ed0794:
    if (local_c8 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_c8 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_c8)(local_c8,1);
      }
    }
  }
  else {
    puVar6 = *ppuVar3;
    *ppuVar3 = local_c8;
    local_c8 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar6 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      goto LAB_143ed0794;
    }
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar13 = &local_78;
  if (local_58 != (longlong *)0x0) {
    plVar13 = local_58;
  }
  FUN_144717c65(plVar13,local_50 & 0xffffffff);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143ed0855:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ed08c2 FUN_143ed08c2 body=129 status=ok
// SIG undefined FUN_143ed08c2(void)

ulonglong FUN_143ed08c2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  ulonglong uVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 0x1e70) + 0x4c) != '\x03') {
    uVar5 = FUN_14358c9d6(param_1);
    return uVar5;
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
LAB_143ed0933:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_14141a00e();
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (lVar3 == 0) goto LAB_143ed0933;
    if ((((lVar2 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
        (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      fVar4 = *(float *)(lVar3 + 0x91c);
      if ((fVar4 != 0.0) || (NAN(fVar4))) goto LAB_143ed093d;
    }
  }
  fVar4 = *(float *)(lVar3 + 0xdc);
LAB_143ed093d:
  return (ulonglong)(uint)fVar4;
}



// FUNCTION 143ed0944 FUN_143ed0944 body=58 status=ok
// SIG undefined FUN_143ed0944(void)

undefined8 FUN_143ed0944(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 143ed097e FUN_143ed097e body=49 status=ok
// SIG undefined FUN_143ed097e(void)

void FUN_143ed097e(void)

{
  FUN_144760e21(DAT_14cb95818,DAT_14cb95820);
  if (DAT_14cb95818 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ed09af FUN_143ed09af body=69 status=ok
// SIG undefined FUN_143ed09af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ed09af(void)

{
  _DAT_14cb95830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ed09f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb95838,1);
  return;
}


