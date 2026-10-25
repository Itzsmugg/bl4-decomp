// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144035e26 FUN_144035e26 body=148 status=ok
// SIG undefined FUN_144035e26(void)

void FUN_144035e26(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b6e3650;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0x3ff0000000000000;
  param_2[0x11] = 0x3ff0000000000000;
  param_2[0x12] = 0x3ff0000000000000;
  param_2[0x13] = 0;
  *(undefined1 *)((longlong)param_2 + 0xa1) = 1;
  *(undefined4 *)(param_2 + 0x15) = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  return;
}



// FUNCTION 144035eba FUN_144035eba body=57 status=ok
// SIG undefined FUN_144035eba(void)

void FUN_144035eba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7428 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7428 = FUN_140002ddd(FUN_1465cbb6e,uVar1,L"OakBodyNodeSettings_GrappleTarget");
  }
  return;
}



// FUNCTION 144035f5e FUN_144035f5e body=57 status=ok
// SIG undefined FUN_144035f5e(void)

void FUN_144035f5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7440 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7440 = FUN_140002ddd(FUN_1465cbbce,uVar1,L"OakBodyNodeState_GrappleTarget");
  }
  return;
}



// FUNCTION 144035fa6 FUN_144035fa6 body=57 status=ok
// SIG undefined FUN_144035fa6(void)

void FUN_144035fa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7458 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7458 = FUN_140002ddd(FUN_1465cbc65,uVar1,L"OakBodyNodeSettings_Radio");
  }
  return;
}



// FUNCTION 144036044 FUN_144036044 body=57 status=ok
// SIG undefined FUN_144036044(void)

void FUN_144036044(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7470 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7470 = FUN_140002ddd(FUN_1465cbcc4,uVar1,L"OakBodyNodeState_Radio");
  }
  return;
}



// FUNCTION 14403608c FUN_14403608c body=123 status=ok
// SIG undefined FUN_14403608c(void)

void FUN_14403608c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 144036108 FUN_144036108 body=410 status=ok
// SIG undefined FUN_144036108(void)

void FUN_144036108(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x18 + lVar4 * 0x48) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x48 + 8) != 0) {
        FUN_1400020a8();
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
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
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



// FUNCTION 1440362a3 FUN_1440362a3 body=49 status=ok
// SIG undefined FUN_1440362a3(void)

void FUN_1440362a3(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    FUN_14076ba36(param_1 + 1);
    param_1 = param_1 + 0x4f;
  }
  return;
}



// FUNCTION 1440362d4 FUN_1440362d4 body=1826 status=ok
// SIG undefined FUN_1440362d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440362d4(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba6fa8 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6d6fa0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6d70a0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b6d7a10;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6d7a50,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6d7be0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6d7cd0,1,0);
  _DAT_14cba7074 = 0;
  FUN_14052b5e0(&DAT_14cba7070,"volume_overall",0);
  _DAT_14cba7080 = 0;
  FUN_14052b5e0(&DAT_14cba707c,"volume_music",0);
  _DAT_14cba708c = 0;
  FUN_14052b5e0(&DAT_14cba7088,"volume_sfx",0);
  _DAT_14cba7098 = 0;
  FUN_14052b5e0(&DAT_14cba7094,"volume_dialog",0);
  _DAT_14cba70a4 = 0;
  FUN_14052b5e0(&DAT_14cba70a0,"PlayInBackground",0);
  _DAT_14cba70b0 = 0;
  FUN_14052b5e0(&DAT_14cba70ac,"MuteHitNotifies",0);
  _DAT_14cba70bc = 0;
  FUN_14052b5e0(&DAT_14cba70b8,"audio_preset",0);
  _DAT_14cba70c8 = 0;
  FUN_14052b5e0(&DAT_14cba70c4,"force_mono",0);
  _DAT_14cba70d4 = 0;
  FUN_14052b5e0(&DAT_14cba70d0,"use_controller_speaker",0);
  _DAT_14cba70e0 = 0;
  FUN_14052b5e0(&DAT_14cba70dc,"menu_music_volume",0);
  _DAT_14cba70ec = 0;
  FUN_14052b5e0(&DAT_14cba70e8,"game_music_volume",0);
  _DAT_14cba70f8 = 0;
  FUN_14052b5e0(&DAT_14cba70f4,"cinematic_music_volume",0);
  _DAT_14cba7104 = 0;
  FUN_14052b5e0(&DAT_14cba7100,"boss_music_trim",0);
  _DAT_14cba7110 = 0;
  FUN_14052b5e0(&DAT_14cba710c,"player_weapons_trim",0);
  _DAT_14cba711c = 0;
  FUN_14052b5e0(&DAT_14cba7118,"explosions_trim",0);
  _DAT_14cba7128 = 0;
  FUN_14052b5e0(&DAT_14cba7124,"ui_trim",0);
  _DAT_14cba7134 = 0;
  FUN_14052b5e0(&DAT_14cba7130,"outgoing_damage_trim",0);
  _DAT_14cba7140 = 0;
  FUN_14052b5e0(&DAT_14cba713c,"incoming_damage_trim",0);
  _DAT_14cba714c = 0;
  FUN_14052b5e0(&DAT_14cba7148,"player_voice_volume",0);
  _DAT_14cba7158 = 0;
  FUN_14052b5e0(&DAT_14cba7154,"player_efforts_trim",0);
  _DAT_14cba7164 = 0;
  FUN_14052b5e0(&DAT_14cba7160,"player_callouts_trim",0);
  _DAT_14cba7170 = 0;
  FUN_14052b5e0(&DAT_14cba716c,"player_idle_lines_trim",0);
  _DAT_14cba717c = 0;
  FUN_14052b5e0(&DAT_14cba7178,"combat_voice_volume",0);
  _DAT_14cba7188 = 0;
  FUN_14052b5e0(&DAT_14cba7184,"claptrap_volume",0);
  _DAT_14cba7194 = 0;
  FUN_14052b5e0(&DAT_14cba7190,"eq_mode",0);
  _DAT_14cba71a0 = 0;
  FUN_14052b5e0(&DAT_14cba719c,"audio_language",0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6d8750,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6d8800);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6d91a0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6d91c0,1,0);
  FUN_1446f470e(&DAT_14cba7238,L"AddUIViewState",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6da780,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba7260);
  if (cVar1 == '\0') {
    _DAT_14cba7260 = 0;
    uRam000000014cba7268 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6dc950,3,0);
  FUN_1446f470e(&DAT_14cba72c8,L"CooldownBegin_ScriptEvent",1);
  FUN_1446f470e(&DAT_14cba72d8,L"CooldownEnd_ScriptEvent",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6dd4f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6dd8a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6dd970);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6dda00);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6ddb40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6dddb0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6deb70);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6dedc0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6df020);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6df180);
  FUN_1446f470e(&DAT_14cba7480,L"BossFightState",1);
  local_50 = "Complete";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba7488 = (ulonglong)uVar2;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6e1a50;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6e1aa0,1,&PTR_FUN_14b6e1a70);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440369f8 FUN_1440369f8 body=228 status=ok
// SIG undefined FUN_1440369f8(void)

longlong FUN_1440369f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba8288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141864c34;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464cee30;
    local_38 = &LAB_148bfac22;
    local_40 = &LAB_140f21842;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144036aee FUN_144036aee body=55 status=ok
// SIG undefined FUN_144036aee(void)

void FUN_144036aee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7940 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7940 = FUN_14171c317(FUN_1465cd2b2,uVar1,L"ECollectiblePartyChallengeAttitude");
  }
  return;
}



// FUNCTION 144036b69 FUN_144036b69 body=55 status=ok
// SIG undefined FUN_144036b69(void)

void FUN_144036b69(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7a68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7a68 = FUN_14171c317(FUN_1465cd576,uVar1,L"ECharacterHealthCondition");
  }
  return;
}



// FUNCTION 144036ba0 FUN_144036ba0 body=55 status=ok
// SIG undefined FUN_144036ba0(void)

void FUN_144036ba0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7a80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7a80 = FUN_14171c317(FUN_1465cd5a7,uVar1,L"EWeaponChangeOperationType");
  }
  return;
}



// FUNCTION 144036bd7 FUN_144036bd7 body=55 status=ok
// SIG undefined FUN_144036bd7(void)

void FUN_144036bd7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7a98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7a98 = FUN_14171c317(FUN_1465cd5d6,uVar1,L"ELootPoolTypes");
  }
  return;
}



// FUNCTION 144036c0e FUN_144036c0e body=47 status=ok
// SIG undefined FUN_144036c0e(void)

longlong FUN_144036c0e(void)

{
  if (DAT_14cba7f58 == 0) {
    FUN_14000fc22(&DAT_14cba7f58,&PTR_FUN_14b6f17d8);
  }
  return DAT_14cba7f58;
}



// FUNCTION 144036c58 FUN_144036c58 body=47 status=ok
// SIG undefined FUN_144036c58(void)

longlong FUN_144036c58(void)

{
  if (DAT_14cba81c0 == 0) {
    FUN_14000fc22(&DAT_14cba81c0,&PTR_FUN_14b6f44b0);
  }
  return DAT_14cba81c0;
}



// FUNCTION 144036c88 FUN_144036c88 body=1222 status=ok
// SIG undefined FUN_144036c88(void)

void FUN_144036c88(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  int *_Src;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_3c;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x20);
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_34);
            goto LAB_144036e35;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_34,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_34,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_34,lVar5);
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (int)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
LAB_144036e35:
  iVar7 = local_34;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_3c);
            goto LAB_144036fcf;
          }
        }
        puVar9 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_3c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_3c,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_3c,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_3c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_3c,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_3c = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
LAB_144036fcf:
  puVar9 = &local_3c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (iVar7 == 0) {
    FUN_1400bc8c2(param_1 + 0x6608,puVar9);
  }
  else {
    FUN_1400bc96c();
  }
  if ((CONCAT44(uStack_2c,uStack_30) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144037154 FUN_144037154 body=47 status=ok
// SIG undefined FUN_144037154(void)

longlong FUN_144037154(void)

{
  if (DAT_14cba8248 == 0) {
    FUN_14000fc22(&DAT_14cba8248,&PTR_FUN_14b6f4fc0);
  }
  return DAT_14cba8248;
}



// FUNCTION 144037184 FUN_144037184 body=1445 status=ok
// SIG undefined FUN_144037184(void)

void FUN_144037184(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  undefined8 *puVar9;
  int *_Src;
  undefined4 *_Src_00;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  local_40 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uStack_3c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_88) >> 0x20);
  iStack_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&iStack_44);
            goto LAB_14403735b;
          }
        }
        _Src = (int *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &iStack_44) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&iStack_44,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&iStack_44,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&iStack_44,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&iStack_44,lVar6);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_44 = (int)uVar2;
      local_40 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_44);
    }
  }
LAB_14403735b:
  iVar7 = iStack_44;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar6,&local_48);
            goto LAB_144037512;
          }
        }
        _Src_00 = (undefined4 *)(lVar6 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_48,lVar6,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar6);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_48 = (undefined4)uVar2;
      iStack_44 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_144037512:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = *(longlong *)(&DAT_00006850 + param_1);
  if ((lVar6 != 0) && (*(longlong **)(lVar6 + 0x1eb8) != (longlong *)0x0)) {
    uVar10 = 0;
    if (iVar7 != 0) {
      uVar10 = local_48;
    }
    (**(code **)(**(longlong **)(lVar6 + 0x1eb8) + 0xb8 + (ulonglong)(iVar7 == 0) * 8))();
    *(undefined4 *)(lVar6 + 0x4594) = uVar10;
  }
  if ((CONCAT44(uStack_3c,local_40) ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144037732 FUN_144037732 body=5624 status=ok
// SIG undefined FUN_144037732(void)

void FUN_144037732(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82a8) {
    FUN_144b3d300(&DAT_14cba82a8);
    if (DAT_14cba82a8 == -1) {
      FUN_1446f470e(&DAT_14cba82a0,L"UsableActorState",1);
      _Init_thread_footer(&DAT_14cba82a8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82b4) {
    FUN_144b3d300(&DAT_14cba82b4);
    if (DAT_14cba82b4 == -1) {
      FUN_1446f470e(&DAT_14cba82ac,L"ResourcePoolManager",1);
      _Init_thread_footer(&DAT_14cba82b4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82c0) {
    FUN_144b3d300(&DAT_14cba82c0);
    if (DAT_14cba82c0 == -1) {
      FUN_1446f470e(&DAT_14cba82b8,L"HealthState",1);
      _Init_thread_footer(&DAT_14cba82c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82cc) {
    FUN_144b3d300(&DAT_14cba82cc);
    if (DAT_14cba82cc == -1) {
      FUN_1446f470e(&DAT_14cba82c4,L"HealthCondition",1);
      _Init_thread_footer(&DAT_14cba82cc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82d8) {
    FUN_144b3d300(&DAT_14cba82d8);
    if (DAT_14cba82d8 == -1) {
      FUN_1446f470e(&DAT_14cba82d0,L"DeathType",1);
      _Init_thread_footer(&DAT_14cba82d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82e4) {
    FUN_144b3d300(&DAT_14cba82e4);
    if (DAT_14cba82e4 == -1) {
      FUN_1446f470e(&DAT_14cba82dc,L"ReplicatedAttachedParticles",1);
      _Init_thread_footer(&DAT_14cba82e4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82f0) {
    FUN_144b3d300(&DAT_14cba82f0);
    if (DAT_14cba82f0 == -1) {
      FUN_1446f470e(&DAT_14cba82e8,L"WeaponSwapTimeScale",1);
      _Init_thread_footer(&DAT_14cba82f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba82fc) {
    FUN_144b3d300(&DAT_14cba82fc);
    if (DAT_14cba82fc == -1) {
      FUN_1446f470e(&DAT_14cba82f4,L"FirmwareManager",1);
      _Init_thread_footer(&DAT_14cba82fc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8308) {
    FUN_144b3d300(&DAT_14cba8308);
    if (DAT_14cba8308 == -1) {
      FUN_1446f470e(&DAT_14cba8300,L"WeaponTargetLocks",1);
      _Init_thread_footer(&DAT_14cba8308);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8314) {
    FUN_144b3d300(&DAT_14cba8314);
    if (DAT_14cba8314 == -1) {
      FUN_1446f470e(&DAT_14cba830c,L"bWeaponsRestricted",1);
      _Init_thread_footer(&DAT_14cba8314);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8320) {
    FUN_144b3d300(&DAT_14cba8320);
    if (DAT_14cba8320 == -1) {
      FUN_1446f470e(&DAT_14cba8318,L"WeaponLoweredFlags",1);
      _Init_thread_footer(&DAT_14cba8320);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba832c) {
    FUN_144b3d300(&DAT_14cba832c);
    if (DAT_14cba832c == -1) {
      FUN_1446f470e(&DAT_14cba8324,L"InventoryAugmentEffects",1);
      _Init_thread_footer(&DAT_14cba832c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8338) {
    FUN_144b3d300(&DAT_14cba8338);
    if (DAT_14cba8338 == -1) {
      FUN_1446f470e(&DAT_14cba8330,L"ReplicatedEquipmentLockMask",1);
      _Init_thread_footer(&DAT_14cba8338);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8344) {
    FUN_144b3d300(&DAT_14cba8344);
    if (DAT_14cba8344 == -1) {
      FUN_1446f470e(&DAT_14cba833c,L"IsDeadFromLavaWaterBody",1);
      _Init_thread_footer(&DAT_14cba8344);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8350) {
    FUN_144b3d300(&DAT_14cba8350);
    if (DAT_14cba8350 == -1) {
      FUN_1446f470e(&DAT_14cba8348,L"bCanUseWeaponWhileSprinting",1);
      _Init_thread_footer(&DAT_14cba8350);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba835c) {
    FUN_144b3d300(&DAT_14cba835c);
    if (DAT_14cba835c == -1) {
      FUN_1446f470e(&DAT_14cba8354,L"bCanZoomWhileSprinting",1);
      _Init_thread_footer(&DAT_14cba835c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8368) {
    FUN_144b3d300(&DAT_14cba8368);
    if (DAT_14cba8368 == -1) {
      FUN_1446f470e(&DAT_14cba8360,L"MovementLockReplicator",1);
      _Init_thread_footer(&DAT_14cba8368);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8374) {
    FUN_144b3d300(&DAT_14cba8374);
    if (DAT_14cba8374 == -1) {
      FUN_1446f470e(&DAT_14cba836c,L"IdleTrickPlayCount",1);
      _Init_thread_footer(&DAT_14cba8374);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8380) {
    FUN_144b3d300(&DAT_14cba8380);
    if (DAT_14cba8380 == -1) {
      FUN_1446f470e(&DAT_14cba8378,L"AICharacterState",1);
      _Init_thread_footer(&DAT_14cba8380);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba838c) {
    FUN_144b3d300(&DAT_14cba838c);
    if (DAT_14cba838c == -1) {
      FUN_1446f470e(&DAT_14cba8384,L"OakStatusEffectContainer",1);
      _Init_thread_footer(&DAT_14cba838c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8398) {
    FUN_144b3d300(&DAT_14cba8398);
    if (DAT_14cba8398 == -1) {
      FUN_1446f470e(&DAT_14cba8390,L"GbxStatusEffectPresentationList",1);
      _Init_thread_footer(&DAT_14cba8398);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83a4) {
    FUN_144b3d300(&DAT_14cba83a4);
    if (DAT_14cba83a4 == -1) {
      FUN_1446f470e(&DAT_14cba839c,L"ActionSkillLock",1);
      _Init_thread_footer(&DAT_14cba83a4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83b0) {
    FUN_144b3d300(&DAT_14cba83b0);
    if (DAT_14cba83b0 == -1) {
      FUN_1446f470e(&DAT_14cba83a8,L"GbxProgressionManager",1);
      _Init_thread_footer(&DAT_14cba83b0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83bc) {
    FUN_144b3d300(&DAT_14cba83bc);
    if (DAT_14cba83bc == -1) {
      FUN_1446f470e(&DAT_14cba83b4,L"ReplicatedDownState",1);
      _Init_thread_footer(&DAT_14cba83bc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83c8) {
    FUN_144b3d300(&DAT_14cba83c8);
    if (DAT_14cba83c8 == -1) {
      FUN_1446f470e(&DAT_14cba83c0,L"bActorSucessfullyRevived",1);
      _Init_thread_footer(&DAT_14cba83c8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83d4) {
    FUN_144b3d300(&DAT_14cba83d4);
    if (DAT_14cba83d4 == -1) {
      FUN_1446f470e(&DAT_14cba83cc,L"ActorBeingRevived",1);
      _Init_thread_footer(&DAT_14cba83d4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83e0) {
    FUN_144b3d300(&DAT_14cba83e0);
    if (DAT_14cba83e0 == -1) {
      FUN_1446f470e(&DAT_14cba83d8,L"bCanZoomWhileInjured",1);
      _Init_thread_footer(&DAT_14cba83e0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83ec) {
    FUN_144b3d300(&DAT_14cba83ec);
    if (DAT_14cba83ec == -1) {
      FUN_1446f470e(&DAT_14cba83e4,L"VehicleDriverComponent",1);
      _Init_thread_footer(&DAT_14cba83ec);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba83f8) {
    FUN_144b3d300(&DAT_14cba83f8);
    if (DAT_14cba83f8 == -1) {
      FUN_1446f470e(&DAT_14cba83f0,L"EquippedInventorySlots",1);
      _Init_thread_footer(&DAT_14cba83f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8404) {
    FUN_144b3d300(&DAT_14cba8404);
    if (DAT_14cba8404 == -1) {
      FUN_1446f470e(&DAT_14cba83fc,L"ReplicatedDeathHitReactionState",1);
      _Init_thread_footer(&DAT_14cba8404);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8410) {
    FUN_144b3d300(&DAT_14cba8410);
    if (DAT_14cba8410 == -1) {
      FUN_1446f470e(&DAT_14cba8408,L"UXNameRepData",1);
      _Init_thread_footer(&DAT_14cba8410);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba841c) {
    FUN_144b3d300(&DAT_14cba841c);
    if (DAT_14cba841c == -1) {
      FUN_1446f470e(&DAT_14cba8414,L"bUseOverheadNameplateOverride",1);
      _Init_thread_footer(&DAT_14cba841c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8428) {
    FUN_144b3d300(&DAT_14cba8428);
    if (DAT_14cba8428 == -1) {
      FUN_1446f470e(&DAT_14cba8420,L"NPCInteractionRepState",1);
      _Init_thread_footer(&DAT_14cba8428);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8434) {
    FUN_144b3d300(&DAT_14cba8434);
    if (DAT_14cba8434 == -1) {
      FUN_1446f470e(&DAT_14cba842c,L"MeleeState",1);
      _Init_thread_footer(&DAT_14cba8434);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8440) {
    FUN_144b3d300(&DAT_14cba8440);
    if (DAT_14cba8440 == -1) {
      FUN_1446f470e(&DAT_14cba8438,L"bCanBeExecuted",1);
      _Init_thread_footer(&DAT_14cba8440);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba844c) {
    FUN_144b3d300(&DAT_14cba844c);
    if (DAT_14cba844c == -1) {
      FUN_1446f470e(&DAT_14cba8444,L"MeleeExecutionState",1);
      _Init_thread_footer(&DAT_14cba844c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8458) {
    FUN_144b3d300(&DAT_14cba8458);
    if (DAT_14cba8458 == -1) {
      FUN_1446f470e(&DAT_14cba8450,L"GrapplerState",1);
      _Init_thread_footer(&DAT_14cba8458);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8464) {
    FUN_144b3d300(&DAT_14cba8464);
    if (DAT_14cba8464 == -1) {
      FUN_1446f470e(&DAT_14cba845c,L"GrappleableState",1);
      _Init_thread_footer(&DAT_14cba8464);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8470) {
    FUN_144b3d300(&DAT_14cba8470);
    if (DAT_14cba8470 == -1) {
      FUN_1446f470e(&DAT_14cba8468,L"CarrierState",1);
      _Init_thread_footer(&DAT_14cba8470);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba847c) {
    FUN_144b3d300(&DAT_14cba847c);
    if (DAT_14cba847c == -1) {
      FUN_1446f470e(&DAT_14cba8474,L"ReplicatedZoomState",1);
      _Init_thread_footer(&DAT_14cba847c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8488) {
    FUN_144b3d300(&DAT_14cba8488);
    if (DAT_14cba8488 == -1) {
      FUN_1446f470e(&DAT_14cba8480,L"HauntedMutex",1);
      _Init_thread_footer(&DAT_14cba8488);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8494) {
    FUN_144b3d300(&DAT_14cba8494);
    if (DAT_14cba8494 == -1) {
      FUN_1446f470e(&DAT_14cba848c,L"bIsEntangled",1);
      _Init_thread_footer(&DAT_14cba8494);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84a0) {
    FUN_144b3d300(&DAT_14cba84a0);
    if (DAT_14cba84a0 == -1) {
      FUN_1446f470e(&DAT_14cba8498,L"ReplicatedPlayerStats",1);
      _Init_thread_footer(&DAT_14cba84a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84ac) {
    FUN_144b3d300(&DAT_14cba84ac);
    if (DAT_14cba84ac == -1) {
      FUN_1446f470e(&DAT_14cba84a4,L"CoverUserState",1);
      _Init_thread_footer(&DAT_14cba84ac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84b8) {
    FUN_144b3d300(&DAT_14cba84b8);
    if (DAT_14cba84b8 == -1) {
      FUN_1446f470e(&DAT_14cba84b0,L"CinematicViewConsumerState",1);
      _Init_thread_footer(&DAT_14cba84b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84c4) {
    FUN_144b3d300(&DAT_14cba84c4);
    if (DAT_14cba84c4 == -1) {
      FUN_1446f470e(&DAT_14cba84bc,L"AICloakState",1);
      _Init_thread_footer(&DAT_14cba84c4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84d0) {
    FUN_144b3d300(&DAT_14cba84d0);
    if (DAT_14cba84d0 == -1) {
      FUN_1446f470e(&DAT_14cba84c8,L"bWaitingForSpawnTrick",1);
      _Init_thread_footer(&DAT_14cba84d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84dc) {
    FUN_144b3d300(&DAT_14cba84dc);
    if (DAT_14cba84dc == -1) {
      FUN_1446f470e(&DAT_14cba84d4,L"AITargetLockState",1);
      _Init_thread_footer(&DAT_14cba84dc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84e8) {
    FUN_144b3d300(&DAT_14cba84e8);
    if (DAT_14cba84e8 == -1) {
      FUN_1446f470e(&DAT_14cba84e0,L"GoreState",1);
      _Init_thread_footer(&DAT_14cba84e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba84f4) {
    FUN_144b3d300(&DAT_14cba84f4);
    if (DAT_14cba84f4 == -1) {
      FUN_1446f470e(&DAT_14cba84ec,L"OakTraitContainer",1);
      _Init_thread_footer(&DAT_14cba84f4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8500) {
    FUN_144b3d300(&DAT_14cba8500);
    if (DAT_14cba8500 == -1) {
      FUN_1446f470e(&DAT_14cba84f8,L"OverkillThresholdScalar",1);
      _Init_thread_footer(&DAT_14cba8500);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba850c) {
    FUN_144b3d300(&DAT_14cba850c);
    if (DAT_14cba850c == -1) {
      FUN_1446f470e(&DAT_14cba8504,L"OrderRewindState",1);
      _Init_thread_footer(&DAT_14cba850c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8518) {
    FUN_144b3d300(&DAT_14cba8518);
    if (DAT_14cba8518 == -1) {
      FUN_1446f470e(&DAT_14cba8510,L"AllowForcedGadgetUse",1);
      _Init_thread_footer(&DAT_14cba8518);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8524) {
    FUN_144b3d300(&DAT_14cba8524);
    if (DAT_14cba8524 == -1) {
      FUN_1446f470e(&DAT_14cba851c,L"ReplicatedFreezeState",1);
      _Init_thread_footer(&DAT_14cba8524);
      return;
    }
  }
  return;
}



// FUNCTION 144038e5e FUN_144038e5e body=205 status=ok
// SIG undefined FUN_144038e5e(void)

void FUN_144038e5e(undefined1 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x200000000;
  lVar1 = 0x4c;
  do {
    param_1[lVar1 + -0x24] = 0;
    *(undefined8 *)(param_1 + lVar1 + -0xc) = 0;
    *(undefined8 *)(param_1 + lVar1 + -4) = 0x200000000;
    lVar1 = lVar1 + 0x28;
  } while (lVar1 != 0x13c);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 2;
  param_1[0x1e8] = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0x400000000;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x18a) = 0;
  *(undefined8 *)(param_1 + 0x192) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1aa) = 0;
  *(undefined8 *)(param_1 + 0x1b2) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  return;
}



// FUNCTION 144038f2c FUN_144038f2c body=48 status=ok
// SIG undefined FUN_144038f2c(void)

longlong FUN_144038f2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144038f5c FUN_144038f5c body=48 status=ok
// SIG undefined FUN_144038f5c(void)

longlong FUN_144038f5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144038f8c FUN_144038f8c body=48 status=ok
// SIG undefined FUN_144038f8c(void)

longlong FUN_144038f8c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144038fbc FUN_144038fbc body=48 status=ok
// SIG undefined FUN_144038fbc(void)

longlong FUN_144038fbc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144038fec FUN_144038fec body=48 status=ok
// SIG undefined FUN_144038fec(void)

longlong FUN_144038fec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403901c FUN_14403901c body=48 status=ok
// SIG undefined FUN_14403901c(void)

longlong FUN_14403901c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403904c FUN_14403904c body=48 status=ok
// SIG undefined FUN_14403904c(void)

longlong FUN_14403904c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403907c FUN_14403907c body=48 status=ok
// SIG undefined FUN_14403907c(void)

longlong FUN_14403907c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440390ac FUN_1440390ac body=48 status=ok
// SIG undefined FUN_1440390ac(void)

longlong FUN_1440390ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_14128f48a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440390e0 FUN_1440390e0 body=48 status=ok
// SIG undefined FUN_1440390e0(void)

longlong FUN_1440390e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144039110 FUN_144039110 body=48 status=ok
// SIG undefined FUN_144039110(void)

longlong FUN_144039110(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144039140 FUN_144039140 body=48 status=ok
// SIG undefined FUN_144039140(void)

longlong FUN_144039140(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144039170 FUN_144039170 body=48 status=ok
// SIG undefined FUN_144039170(void)

longlong FUN_144039170(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440391a0 FUN_1440391a0 body=48 status=ok
// SIG undefined FUN_1440391a0(void)

longlong FUN_1440391a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440391d0 FUN_1440391d0 body=48 status=ok
// SIG undefined FUN_1440391d0(void)

longlong FUN_1440391d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144039200 FUN_144039200 body=48 status=ok
// SIG undefined FUN_144039200(void)

longlong FUN_144039200(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144039230 FUN_144039230 body=48 status=ok
// SIG undefined FUN_144039230(void)

longlong FUN_144039230(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144039260 FUN_144039260 body=48 status=ok
// SIG undefined FUN_144039260(void)

longlong FUN_144039260(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144039290 FUN_144039290 body=48 status=ok
// SIG undefined FUN_144039290(void)

longlong FUN_144039290(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440392c0 FUN_1440392c0 body=48 status=ok
// SIG undefined FUN_1440392c0(void)

longlong FUN_1440392c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440392f0 FUN_1440392f0 body=90 status=ok
// SIG undefined FUN_1440392f0(void)

undefined8 * FUN_1440392f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6eb6a0;
  param_1[5] = &PTR_LAB_14b6eb9a0;
  param_1[6] = &PTR_LAB_14b6eb9d0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403935e FUN_14403935e body=48 status=ok
// SIG undefined FUN_14403935e(void)

longlong FUN_14403935e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403938e FUN_14403938e body=48 status=ok
// SIG undefined FUN_14403938e(void)

longlong FUN_14403938e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440393be FUN_1440393be body=48 status=ok
// SIG undefined FUN_1440393be(void)

longlong FUN_1440393be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440393ee FUN_1440393ee body=48 status=ok
// SIG undefined FUN_1440393ee(void)

longlong FUN_1440393ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x878;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403941e FUN_14403941e body=48 status=ok
// SIG undefined FUN_14403941e(void)

longlong FUN_14403941e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1100;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403944e FUN_14403944e body=48 status=ok
// SIG undefined FUN_14403944e(void)

longlong FUN_14403944e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1108;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403947e FUN_14403947e body=48 status=ok
// SIG undefined FUN_14403947e(void)

longlong FUN_14403947e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1118;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440394ae FUN_1440394ae body=48 status=ok
// SIG undefined FUN_1440394ae(void)

longlong FUN_1440394ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1120;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440394de FUN_1440394de body=48 status=ok
// SIG undefined FUN_1440394de(void)

longlong FUN_1440394de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1128;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403950e FUN_14403950e body=48 status=ok
// SIG undefined FUN_14403950e(void)

longlong FUN_14403950e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1130;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403953e FUN_14403953e body=48 status=ok
// SIG undefined FUN_14403953e(void)

longlong FUN_14403953e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1138;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403956e FUN_14403956e body=48 status=ok
// SIG undefined FUN_14403956e(void)

longlong FUN_14403956e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1140;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403959e FUN_14403959e body=48 status=ok
// SIG undefined FUN_14403959e(void)

longlong FUN_14403959e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1148;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440395ce FUN_1440395ce body=48 status=ok
// SIG undefined FUN_1440395ce(void)

longlong FUN_1440395ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1150;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440395fe FUN_1440395fe body=48 status=ok
// SIG undefined FUN_1440395fe(void)

longlong FUN_1440395fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1158;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403962e FUN_14403962e body=48 status=ok
// SIG undefined FUN_14403962e(void)

longlong FUN_14403962e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1160;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403965e FUN_14403965e body=48 status=ok
// SIG undefined FUN_14403965e(void)

longlong FUN_14403965e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1168;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403968e FUN_14403968e body=48 status=ok
// SIG undefined FUN_14403968e(void)

longlong FUN_14403968e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1170;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440396be FUN_1440396be body=48 status=ok
// SIG undefined FUN_1440396be(void)

longlong FUN_1440396be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1178;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440396ee FUN_1440396ee body=48 status=ok
// SIG undefined FUN_1440396ee(void)

longlong FUN_1440396ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1180;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403971e FUN_14403971e body=48 status=ok
// SIG undefined FUN_14403971e(void)

longlong FUN_14403971e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1188;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403974e FUN_14403974e body=48 status=ok
// SIG undefined FUN_14403974e(void)

longlong FUN_14403974e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1190;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403977e FUN_14403977e body=48 status=ok
// SIG undefined FUN_14403977e(void)

longlong FUN_14403977e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1198;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440397ae FUN_1440397ae body=48 status=ok
// SIG undefined FUN_1440397ae(void)

longlong FUN_1440397ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11b0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440397de FUN_1440397de body=48 status=ok
// SIG undefined FUN_1440397de(void)

longlong FUN_1440397de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403980e FUN_14403980e body=48 status=ok
// SIG undefined FUN_14403980e(void)

longlong FUN_14403980e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403983e FUN_14403983e body=48 status=ok
// SIG undefined FUN_14403983e(void)

longlong FUN_14403983e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403986e FUN_14403986e body=48 status=ok
// SIG undefined FUN_14403986e(void)

longlong FUN_14403986e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403989e FUN_14403989e body=48 status=ok
// SIG undefined FUN_14403989e(void)

longlong FUN_14403989e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440398ce FUN_1440398ce body=48 status=ok
// SIG undefined FUN_1440398ce(void)

longlong FUN_1440398ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440398fe FUN_1440398fe body=48 status=ok
// SIG undefined FUN_1440398fe(void)

longlong FUN_1440398fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ac8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403992e FUN_14403992e body=48 status=ok
// SIG undefined FUN_14403992e(void)

longlong FUN_14403992e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403995e FUN_14403995e body=48 status=ok
// SIG undefined FUN_14403995e(void)

longlong FUN_14403995e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b68;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403998e FUN_14403998e body=48 status=ok
// SIG undefined FUN_14403998e(void)

longlong FUN_14403998e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b70;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440399f4 FUN_1440399f4 body=57 status=ok
// SIG undefined FUN_1440399f4(void)

void FUN_1440399f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba76e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba76e0 = FUN_140002ddd(FUN_1465ccd04,uVar1,L"OakBoundaryDef");
  }
  return;
}



// FUNCTION 144039ab6 FUN_144039ab6 body=54 status=ok
// SIG undefined FUN_144039ab6(void)

void FUN_144039ab6(longlong *param_1)

{
  FUN_144039aec(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144039aec FUN_144039aec body=128 status=ok
// SIG undefined FUN_144039aec(void)

void FUN_144039aec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 144039b6e FUN_144039b6e body=54 status=ok
// SIG undefined FUN_144039b6e(void)

void FUN_144039b6e(longlong *param_1)

{
  FUN_144039ba4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144039ba4 FUN_144039ba4 body=494 status=ok
// SIG undefined FUN_144039ba4(void)

void FUN_144039ba4(longlong *param_1,int param_2)

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
        if (uVar14 == uVar13) goto LAB_144039d00;
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
          if (iVar7 - lVar11 == lVar9) goto LAB_144039d00;
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
LAB_144039d00:
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



// FUNCTION 14403a5a8 FUN_14403a5a8 body=226 status=ok
// SIG undefined FUN_14403a5a8(void)

void FUN_14403a5a8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x48) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x48;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14403a68c FUN_14403a68c body=749 status=ok
// SIG undefined FUN_14403a68c(void)

bool FUN_14403a68c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_14403a965;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x48;
      } while (lVar11 * 0x48 != lVar12);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_14403a87f:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_14403a87f;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x00014403a8ce;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x00014403a8ce:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_14403a965;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_14403a858:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x00014403a91d;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_14403a93c;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_14403a858;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_14403a93c:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x00014403a91d:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_14403a965:
  return iVar3 != param_2;
}



// FUNCTION 14403a97a FUN_14403a97a body=231 status=ok
// SIG undefined FUN_14403a97a(void)

void FUN_14403a97a(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x48;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14403aa62 FUN_14403aa62 body=1068 status=ok
// SIG undefined FUN_14403aa62(void)

void FUN_14403aa62(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 8);
  iVar4 = (int)plVar3[1];
  iVar12 = 0;
  iVar10 = 0;
  if ((longlong)iVar4 != 0) {
    lVar14 = 0;
    iVar10 = 0;
    do {
      iVar10 = iVar10 + (uint)(byte)(*(int *)(*plVar3 + lVar14) != -1 |
                                    *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar14 = lVar14 + 0x48;
    } while ((longlong)iVar4 * 0x48 != lVar14);
  }
  if (param_3 != (longlong *)0x0) {
    iVar12 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar12 = iVar12 - iVar10;
  local_80 = param_2;
  if (0 < iVar4) {
    local_78 = param_3 + 7;
    lVar14 = 0;
    do {
      iVar4 = *(int *)(*plVar3 + lVar14 * 0x48);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar4 != -1)) {
        puVar1 = (uint *)(*plVar3 + lVar14 * 0x48);
        if (iVar4 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar1);
        }
        local_60 = puVar1;
        local_58 = puVar1 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar13 = *puVar1;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar3 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar3 = local_78;
          }
          iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_3[9] - 1U & uVar13) * 4);
          if (iVar4 != -1) {
            do {
              lVar11 = *param_3 + (longlong)iVar4 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar4 * 0x10) == uVar13) {
                if ((uint *)(lVar11 + 4) != (uint *)0x0 && lVar11 != 0) {
                  if (*(uint *)(lVar11 + 4) != puVar1[1]) {
                    iVar4 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar4 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
                      FUN_14593fc44(param_4,iVar4);
                    }
                    lVar11 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar11 = param_4;
                    }
                    *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) =
                         ((ulonglong)uVar13 << 0x20) + lVar14;
                  }
                  goto LAB_14403abda;
                }
                break;
              }
              iVar4 = *(int *)(lVar11 + 8);
            } while (iVar4 != -1);
          }
        }
        iVar4 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar4 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar4 + 1U) {
          FUN_14593fc44(param_4,iVar4);
        }
        lVar11 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar11 = param_4;
        }
        *(ulonglong *)(lVar11 + (longlong)iVar4 * 8) = ((ulonglong)uVar13 << 0x20) + lVar14;
        iVar12 = iVar12 + 1;
      }
LAB_14403abda:
      lVar14 = lVar14 + 1;
      plVar3 = *(longlong **)(param_1 + 8);
    } while (lVar14 < (int)plVar3[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar12)) {
    puVar1 = (uint *)(param_3 + 2);
    iVar4 = (int)param_3[5];
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar13 = *puVar9;
      if (uVar13 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_14403ae5d;
          iVar10 = iVar10 + 0x20;
          uVar13 = puVar9[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 < iVar4) {
      local_68 = local_80 + 7;
      uVar13 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar14 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar6 = *(uint *)(lVar14 + (longlong)iVar5 * 0x10);
          plVar3 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar3 = local_68;
          }
          iVar7 = *(int *)((longlong)plVar3 + (ulonglong)((int)local_80[9] - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar7 * 0x10) == uVar6) goto LAB_14403adc8;
              iVar7 = *(int *)((longlong)iVar7 * 0x10 + *local_80 + 8);
            } while (iVar7 != -1);
          }
        }
        iVar4 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar4 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar10);
          FUN_1400cc390(param_5,iVar4);
          param_3 = local_70;
          iVar10 = (int)local_78;
        }
        lVar11 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar11 = param_5;
        }
        *(undefined4 *)(lVar11 + (longlong)iVar4 * 4) =
             *(undefined4 *)(lVar14 + (longlong)iVar5 * 0x10);
        if (iVar12 < 2) break;
        iVar12 = iVar12 + -1;
        iVar4 = (int)param_3[5];
LAB_14403adc8:
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar9 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar9 = puVar1;
        }
        iVar5 = (int)uVar15;
        lVar14 = (longlong)iVar5;
        uVar6 = puVar9[lVar14] & uVar13;
        if (uVar6 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar6 = puVar9[lVar14 + lVar11 + 1];
            if (uVar6 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar8 - lVar14 == lVar11) goto LAB_14403ae5d;
          }
          uVar15 = (ulonglong)(iVar5 + (int)lVar11 + 1);
          uVar13 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar4);
    }
  }
LAB_14403ae5d:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14403ae90 FUN_14403ae90 body=496 status=ok
// SIG undefined FUN_14403ae90(void)

void FUN_14403ae90(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14403b082 FUN_14403b082 body=723 status=ok
// SIG undefined FUN_14403b082(void)

undefined8 FUN_14403b082(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_14403b2e3;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_14403b2e3:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14403b38c FUN_14403b38c body=94 status=ok
// SIG undefined FUN_14403b38c(void)

undefined1 FUN_14403b38c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(param_3 + lVar2);
      lVar1 = *(longlong *)(param_3 + 8 + lVar2);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + 8 + lVar2);
        }
      }
      *(longlong *)(param_2 + 8 + lVar2) = lVar1;
      lVar2 = lVar2 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14403b484 FUN_14403b484 body=49 status=ok
// SIG undefined FUN_14403b484(void)

undefined8 * FUN_14403b484(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6ff130;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403b4b6 FUN_14403b4b6 body=48 status=ok
// SIG undefined FUN_14403b4b6(void)

undefined8 * FUN_14403b4b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6fb670;
  FUN_14403b4ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403b4ea FUN_14403b4ea body=90 status=ok
// SIG undefined FUN_14403b4ea(void)

void FUN_14403b4ea(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x328);
    FUN_140d17bd8(lVar2 + 8);
    FUN_1400020a8(lVar2);
    param_1[1] = lVar1;
    lVar2 = lVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x00014403b541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,0);
  return;
}



// FUNCTION 14403b544 FUN_14403b544 body=3429 status=ok
// SIG undefined FUN_14403b544(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14403b544(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba75d0 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6e6130,1,&PTR_FUN_14b6e6100);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cba7660);
  if (cVar1 == '\0') {
    _DAT_14cba7660 = 0;
    uRam000000014cba7668 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cba7698,L"NetMulticast_PlayKillEffects",1);
  FUN_1446f470e(&DAT_14cba76a8,L"PlayKillEffects",1);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6e78f0,1,&PTR_FUN_14b6e78c0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6e7be0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6e7f80,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6e87d0,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6e8880);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6e8c90,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6e8dd0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6e9050);
  _DAT_14cba7798 = 0x47efffffe0000000;
  _DAT_14cba77a0 = 0x47efffffe0000000;
  _DAT_14cba77a8 = 0x47efffffe0000000;
  _DAT_14cba77b0 = 0x47efffffe0000000;
  _DAT_14cba77b8 = 0x47efffffe0000000;
  _DAT_14cba77c0 = 0x47efffffe0000000;
  _DAT_14cba77c8 = 0x47efffffe0000000;
  _DAT_14cba77d0 = 0x47efffffe0000000;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba77d8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cba77e0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144036add);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cba77f4 = 0;
  FUN_14052b5e0(&DAT_14cba77f0,"PlayerAwareness",0);
  _DAT_14cba7800 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7808 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7810 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7818 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7820 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7828 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7830 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7838 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7840 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7848 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7850 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7858 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7860 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7868 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7870 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7878 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7880 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7888 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7890 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba7898 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cba78a0,L"UNSET",1);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cba78a8,L"Party",1);
  FUN_1446f470e(&DAT_14cba78b0,&DAT_149e063b2,1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6e99a0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6eaaa0,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6eab60);
  FUN_1446f470e(&DAT_14cba7960,L"OnFinishedLoading",1);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b6eba00;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6eba50,1,&PTR_FUN_14b6eba20);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6ebe00,1,0);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba79c0 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba79c8 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba79d0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cba79d8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144036b25);
  FUN_140056680(&DAT_14cba79e8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144036b36);
  FUN_140056680(&DAT_14cba79f8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144036b47);
  FUN_140056680(&DAT_14cba7a08,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144036b58);
  FUN_1446f470e(&DAT_14cba7a18,L"LIMB_GORED",1);
  _DAT_14cba7a20 = 0x4072c00000000000;
  _DAT_14cba7a28 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cba7a30,L"body",1);
  FUN_1446f470e(&DAT_14cba7a38,L"title_card",1);
  FUN_1446f470e(&DAT_14cba7bf8,L"BroadcastLevelUp",1);
  FUN_1446f470e(&DAT_14cba7c08,L"BroadcastSpecializationLevelUp",1);
  FUN_1446f470e(&DAT_14cba7c40,L"ClientCancelGrappleCarry",1);
  FUN_1446f470e(&DAT_14cba7c50,L"ClientLockWeaponActions",1);
  FUN_1446f470e(&DAT_14cba7c60,L"ClientNotifyMeleeExecutionHostLockFailed",1);
  FUN_1446f470e(&DAT_14cba7c70,L"ClientPlayAudioEvent",1);
  FUN_1446f470e(&DAT_14cba7c80,L"ClientSetActiveActionSkill",1);
  FUN_1446f470e(&DAT_14cba7c90,L"ClientSetActiveWeaponEquipSlot",1);
  FUN_1446f470e(&DAT_14cba7ca0,L"ClientStopWeaponActions",1);
  FUN_1446f470e(&DAT_14cba7cb0,L"ClientUnlockWeaponActions",1);
  FUN_1446f470e(&DAT_14cba7cc0,L"ClientWeaponChangeDuration",1);
  FUN_1446f470e(&DAT_14cba7cd0,L"DEBUG_Server_AddOvershield",1);
  FUN_1446f470e(&DAT_14cba7ce0,L"DeployEcho4",1);
  FUN_1446f470e(&DAT_14cba7e50,L"NotifyCanUseRepairKit",1);
  FUN_1446f470e(&DAT_14cba7e60,L"OnEchoLocationPingEnded",1);
  FUN_1446f470e(&DAT_14cba7e70,L"OnEchoLocationPingStarted",1);
  FUN_1446f470e(&DAT_14cba8010,L"ServerGiveUp",1);
  FUN_1446f470e(&DAT_14cba8020,L"ServerLockWeaponActions",1);
  FUN_1446f470e(&DAT_14cba8030,L"ServerPerformSpecificMelee",1);
  FUN_1446f470e(&DAT_14cba8040,L"ServerPlayIdleTrick",1);
  FUN_1446f470e(&DAT_14cba8050,L"ServerSetCurrentWeapon",1);
  FUN_1446f470e(&DAT_14cba8060,L"ServerSetIsAnyMenuOpen",1);
  FUN_1446f470e(&DAT_14cba8070,L"ServerSetWantsWeaponLowered",1);
  FUN_1446f470e(&DAT_14cba8080,L"ServerSetZoomState",1);
  FUN_1446f470e(&DAT_14cba8090,L"ServerStartGrapple",1);
  FUN_1446f470e(&DAT_14cba80a0,L"ServerStartUsingGadget",1);
  FUN_1446f470e(&DAT_14cba80b0,L"ServerStopIdleTrick",1);
  FUN_1446f470e(&DAT_14cba80c0,L"ServerStopUsingGadget",1);
  FUN_1446f470e(&DAT_14cba80d0,L"ServerStopWeaponActions",1);
  FUN_1446f470e(&DAT_14cba80e0,L"ServerTryToThrow",1);
  FUN_1446f470e(&DAT_14cba80f0,L"ServerTryToUncarry",1);
  FUN_1446f470e(&DAT_14cba8100,L"ServerUnlockWeaponActions",1);
  FUN_1446f470e(&DAT_14cba81e8,L"StartHealSelf",1);
  FUN_1446f470e(&DAT_14cba8200,L"StartUsingRepairKit",1);
  FUN_1446f470e(&DAT_14cba8220,L"StopHealSelf",1);
  ppuStack_80 = &PTR_FUN_14b6f9b80;
  uStack_78 = 3;
  local_88 = 6;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6f9cd0,1,&PTR_FUN_14b6f9be0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14403c2b4 FUN_14403c2b4 body=191 status=ok
// SIG undefined FUN_14403c2b4(void)

void FUN_14403c2b4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b706ef0;
  plVar3 = (longlong *)param_1[0x1ba];
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
  *(undefined4 *)(param_1 + 0x195) = 0;
  if (param_1[0x194] != 0) {
    FUN_1400020a8();
  }
  FUN_14023f968(param_1 + 0x18c);
  *param_1 = &PTR_FUN_14b0e7580;
  FUN_144801c4e(param_1[0x17c],*(undefined4 *)(param_1 + 0x17d));
  if (param_1[0x17c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x178] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x176) == '\x01') {
    *(undefined1 *)(param_1 + 0x176) = 0;
  }
  FUN_140998e52(param_1);
  return;
}



// FUNCTION 14403c373 FUN_14403c373 body=55 status=ok
// SIG undefined FUN_14403c373(void)

void FUN_14403c373(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8680 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8680 = FUN_14171c317(FUN_1465d0744,uVar1,L"EOakCharacterLockableMovementModeFlags");
  }
  return;
}



// FUNCTION 14403c3aa FUN_14403c3aa body=55 status=ok
// SIG undefined FUN_14403c3aa(void)

void FUN_14403c3aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8698 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8698 = FUN_14171c317(FUN_1465d0773,uVar1,L"EYesNoResult");
  }
  return;
}



// FUNCTION 14403c3e1 FUN_14403c3e1 body=55 status=ok
// SIG undefined FUN_14403c3e1(void)

void FUN_14403c3e1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba86b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba86b0 =
         FUN_14171c317(FUN_1465d07a2,uVar1,L"EOakCharacterFunctionLibraryPerformMeleeFlags");
  }
  return;
}



// FUNCTION 14403c4ec FUN_14403c4ec body=550 status=ok
// SIG undefined FUN_14403c4ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14403c4ec(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
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
  _DAT_14cba8528 = (ulonglong)uVar2;
  _DAT_14cba8530 = 0x47efffffe0000000;
  _DAT_14cba8538 = 0x47efffffe0000000;
  _DAT_14cba8540 = 0x47efffffe0000000;
  _DAT_14cba8548 = 0x47efffffe0000000;
  _DAT_14cba8550 = 0x47efffffe0000000;
  _DAT_14cba8558 = 0x47efffffe0000000;
  _DAT_14cba8560 = 0x47efffffe0000000;
  _DAT_14cba8568 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba8570);
  if (cVar1 == '\0') {
    _DAT_14cba8570 = 0;
    uRam000000014cba8578 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&DAT_14cba85c0,L"OnWeaponChanged",1);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7019b0,1,&PTR_FUN_14b701960);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7021a0,1,&PTR_FUN_14b702150);
  _DAT_14cba8634 = 0;
  FUN_14052b5e0(&DAT_14cba8630,"PlayerAwareness",0);
  _DAT_14cba8640 = "PlayerAwareness";
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b705050);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7052f0);
  local_60 = &PTR_FUN_14b706b90;
  local_68 = 0;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b706bf0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14403c714 FUN_14403c714 body=55 status=ok
// SIG undefined FUN_14403c714(void)

void FUN_14403c714(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8760 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8760 = FUN_14171c317(FUN_1465d0ba2,uVar1,L"ERepairKitState");
  }
  return;
}



// FUNCTION 14403c74b FUN_14403c74b body=55 status=ok
// SIG undefined FUN_14403c74b(void)

void FUN_14403c74b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8790 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8790 = FUN_14171c317(FUN_1465d0c68,uVar1,L"ERepairKitCooldownReductionMethod");
  }
  return;
}



// FUNCTION 14403c782 FUN_14403c782 body=55 status=ok
// SIG undefined FUN_14403c782(void)

void FUN_14403c782(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba87d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba87d8 = FUN_14171c317(FUN_1465d0dc4,uVar1,L"EOakCharacterLockVolumeLockContext");
  }
  return;
}



// FUNCTION 14403c7b9 FUN_14403c7b9 body=55 status=ok
// SIG undefined FUN_14403c7b9(void)

void FUN_14403c7b9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba88a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba88a8 = FUN_14171c317(FUN_1465d1042,uVar1,L"EOakCharacterMovementRejectableMove");
  }
  return;
}



// FUNCTION 14403c7f0 FUN_14403c7f0 body=55 status=ok
// SIG undefined FUN_14403c7f0(void)

void FUN_14403c7f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba88c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba88c0 = FUN_14171c317(FUN_1465d1071,uVar1,L"EOakCharacterMovementMoveRejectionReason");
  }
  return;
}



// FUNCTION 14403c82c FUN_14403c82c body=47 status=ok
// SIG undefined FUN_14403c82c(void)

longlong FUN_14403c82c(void)

{
  if (DAT_14cba8940 == 0) {
    FUN_14000fc22(&DAT_14cba8940,&PTR_FUN_14b70b280);
  }
  return DAT_14cba8940;
}



// FUNCTION 14403c85c FUN_14403c85c body=48 status=ok
// SIG undefined FUN_14403c85c(void)

void FUN_14403c85c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xe0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14403c88c FUN_14403c88c body=47 status=ok
// SIG undefined FUN_14403c88c(void)

longlong FUN_14403c88c(void)

{
  if (DAT_14cba8950 == 0) {
    FUN_14000fc22(&DAT_14cba8950,&PTR_FUN_14b70b338);
  }
  return DAT_14cba8950;
}



// FUNCTION 14403c8d8 FUN_14403c8d8 body=1880 status=ok
// SIG undefined FUN_14403c8d8(void)

void FUN_14403c8d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8990) {
    FUN_144b3d300(&DAT_14cba8990);
    if (DAT_14cba8990 == -1) {
      FUN_1446f470e(&DAT_14cba8988,L"bIsGliding",1);
      _Init_thread_footer(&DAT_14cba8990);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba899c) {
    FUN_144b3d300(&DAT_14cba899c);
    if (DAT_14cba899c == -1) {
      FUN_1446f470e(&DAT_14cba8994,L"bIsSlidingDownLadder",1);
      _Init_thread_footer(&DAT_14cba899c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89a8) {
    FUN_144b3d300(&DAT_14cba89a8);
    if (DAT_14cba89a8 == -1) {
      FUN_1446f470e(&DAT_14cba89a0,L"ReplicatedCurrentZipline",1);
      _Init_thread_footer(&DAT_14cba89a8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89b4) {
    FUN_144b3d300(&DAT_14cba89b4);
    if (DAT_14cba89b4 == -1) {
      FUN_1446f470e(&DAT_14cba89ac,L"GroundSlamHeightScalar",1);
      _Init_thread_footer(&DAT_14cba89b4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89c0) {
    FUN_144b3d300(&DAT_14cba89c0);
    if (DAT_14cba89c0 == -1) {
      FUN_1446f470e(&DAT_14cba89b8,L"GroundSlamDamage",1);
      _Init_thread_footer(&DAT_14cba89c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89cc) {
    FUN_144b3d300(&DAT_14cba89cc);
    if (DAT_14cba89cc == -1) {
      FUN_1446f470e(&DAT_14cba89c4,L"GroundSlamRange",1);
      _Init_thread_footer(&DAT_14cba89cc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89d8) {
    FUN_144b3d300(&DAT_14cba89d8);
    if (DAT_14cba89d8 == -1) {
      FUN_1446f470e(&DAT_14cba89d0,L"DashSpeed",1);
      _Init_thread_footer(&DAT_14cba89d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89e4) {
    FUN_144b3d300(&DAT_14cba89e4);
    if (DAT_14cba89e4 == -1) {
      FUN_1446f470e(&DAT_14cba89dc,L"GlidingAirControl",1);
      _Init_thread_footer(&DAT_14cba89e4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89f0) {
    FUN_144b3d300(&DAT_14cba89f0);
    if (DAT_14cba89f0 == -1) {
      FUN_1446f470e(&DAT_14cba89e8,L"GlidingSpeed",1);
      _Init_thread_footer(&DAT_14cba89f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba89fc) {
    FUN_144b3d300(&DAT_14cba89fc);
    if (DAT_14cba89fc == -1) {
      FUN_1446f470e(&DAT_14cba89f4,L"GlidingSpeedBoost",1);
      _Init_thread_footer(&DAT_14cba89fc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a08) {
    FUN_144b3d300(&DAT_14cba8a08);
    if (DAT_14cba8a08 == -1) {
      FUN_1446f470e(&DAT_14cba8a00,L"GlidingAcceleration",1);
      _Init_thread_footer(&DAT_14cba8a08);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a14) {
    FUN_144b3d300(&DAT_14cba8a14);
    if (DAT_14cba8a14 == -1) {
      FUN_1446f470e(&DAT_14cba8a0c,L"GlidingDeceleration",1);
      _Init_thread_footer(&DAT_14cba8a14);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a20) {
    FUN_144b3d300(&DAT_14cba8a20);
    if (DAT_14cba8a20 == -1) {
      FUN_1446f470e(&DAT_14cba8a18,L"VaultPowerCost_Dash",1);
      _Init_thread_footer(&DAT_14cba8a20);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a2c) {
    FUN_144b3d300(&DAT_14cba8a2c);
    if (DAT_14cba8a2c == -1) {
      FUN_1446f470e(&DAT_14cba8a24,L"VaultPowerCost_DoubleJump",1);
      _Init_thread_footer(&DAT_14cba8a2c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a38) {
    FUN_144b3d300(&DAT_14cba8a38);
    if (DAT_14cba8a38 == -1) {
      FUN_1446f470e(&DAT_14cba8a30,L"VaultPowerCost_Glide",1);
      _Init_thread_footer(&DAT_14cba8a38);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a44) {
    FUN_144b3d300(&DAT_14cba8a44);
    if (DAT_14cba8a44 == -1) {
      FUN_1446f470e(&DAT_14cba8a3c,L"VaultPowerCost_Grapple",1);
      _Init_thread_footer(&DAT_14cba8a44);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a50) {
    FUN_144b3d300(&DAT_14cba8a50);
    if (DAT_14cba8a50 == -1) {
      FUN_1446f470e(&DAT_14cba8a48,L"VaultPowerCost_GroundSlam",1);
      _Init_thread_footer(&DAT_14cba8a50);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba8a5c) {
    FUN_144b3d300(&DAT_14cba8a5c);
    if (DAT_14cba8a5c == -1) {
      FUN_1446f470e(&DAT_14cba8a54,L"VaultPower_Forgiveness",1);
      _Init_thread_footer(&DAT_14cba8a5c);
      return;
    }
  }
  return;
}



// FUNCTION 14403d030 FUN_14403d030 body=55 status=ok
// SIG undefined FUN_14403d030(void)

void FUN_14403d030(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8a68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8a68 = FUN_140002ddd(FUN_14403d067,uVar1,L"ZiplineMovementPhysics");
  }
  return;
}



// FUNCTION 14403d067 FUN_14403d067 body=47 status=ok
// SIG undefined FUN_14403d067(void)

longlong FUN_14403d067(void)

{
  if (DAT_14cba8a60 == 0) {
    FUN_14086a14e(&DAT_14cba8a60,&PTR_FUN_14b70cd28);
  }
  return DAT_14cba8a60;
}



// FUNCTION 14403d096 FUN_14403d096 body=48 status=ok
// SIG undefined FUN_14403d096(void)

void FUN_14403d096(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000038;
  *puVar1 = &PTR_FUN_14b710890;
  return;
}



// FUNCTION 14403d0c6 FUN_14403d0c6 body=55 status=ok
// SIG undefined FUN_14403d0c6(void)

void FUN_14403d0c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8a80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8a80 = FUN_140002ddd(FUN_14403d0fd,uVar1,L"ZiplineMovementSettings");
  }
  return;
}



// FUNCTION 14403d0fd FUN_14403d0fd body=47 status=ok
// SIG undefined FUN_14403d0fd(void)

longlong FUN_14403d0fd(void)

{
  if (DAT_14cba8a78 == 0) {
    FUN_14086a14e(&DAT_14cba8a78,&PTR_FUN_14b70d1a8);
  }
  return DAT_14cba8a78;
}



// FUNCTION 14403d12c FUN_14403d12c body=48 status=ok
// SIG undefined FUN_14403d12c(void)

void FUN_14403d12c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14b710a00;
  return;
}



// FUNCTION 14403d164 FUN_14403d164 body=48 status=ok
// SIG undefined FUN_14403d164(void)

longlong FUN_14403d164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1058;
  FUN_1411c456a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403d194 FUN_14403d194 body=48 status=ok
// SIG undefined FUN_14403d194(void)

longlong FUN_14403d194(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11c0;
  FUN_1411c456a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403d1c4 FUN_14403d1c4 body=48 status=ok
// SIG undefined FUN_14403d1c4(void)

longlong FUN_14403d1c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145a26394(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403d1f4 FUN_14403d1f4 body=48 status=ok
// SIG undefined FUN_14403d1f4(void)

longlong FUN_14403d1f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145a26394(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403d232 FUN_14403d232 body=54 status=ok
// SIG undefined FUN_14403d232(void)

void FUN_14403d232(longlong *param_1)

{
  FUN_14403d268(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14403d268 FUN_14403d268 body=128 status=ok
// SIG undefined FUN_14403d268(void)

void FUN_14403d268(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14403d2ea FUN_14403d2ea body=498 status=ok
// SIG undefined FUN_14403d2ea(void)

longlong * FUN_14403d2ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[9];
  plVar6 = param_1 + 8;
  if ((ulonglong)(longlong)iVar1 < 2) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
    if (iVar1 == 0) goto LAB_14403d363;
  }
  else {
    FUN_1446efa72(plVar6,0,iVar1,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar6 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar6;
  }
  plVar6 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar6,(longlong)iVar1 << 2);
LAB_14403d363:
  *(int *)(param_1 + 9) = iVar1;
  uVar2 = *(uint *)(param_2 + 1);
  FUN_14403d268(param_1,(ulonglong)uVar2);
  lVar4 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
    FUN_140549c28(param_1);
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
  iVar1 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 != 0) {
    plVar6 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar6,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar2) {
    lVar4 = *param_1;
    lVar3 = *param_2;
    lVar10 = 0;
    uVar9 = 0;
    do {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar6 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
          == 0) {
        *(undefined4 *)(lVar4 + lVar10) = *(undefined4 *)(lVar3 + lVar10);
        *(undefined4 *)(lVar4 + 4 + lVar10) = *(undefined4 *)(lVar3 + 4 + lVar10);
      }
      else {
        *(undefined8 *)(lVar4 + lVar10) = *(undefined8 *)(lVar3 + lVar10);
        FUN_14872e0d0(lVar4 + 8 + lVar10,lVar3 + 8 + lVar10);
        *(undefined8 *)(lVar4 + 0x20 + lVar10) = *(undefined8 *)(lVar3 + 0x20 + lVar10);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x28;
    } while (uVar2 != uVar9);
  }
  return param_1;
}



// FUNCTION 14403d4ea FUN_14403d4ea body=429 status=ok
// SIG undefined FUN_14403d4ea(void)

undefined8
FUN_14403d4ea(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             char *param_5)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = *(char **)param_2[1];
  if ((char *)((undefined8 *)param_2[1])[1] < pcVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_5,1);
  }
  else {
    *param_5 = *pcVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5 + 0x14,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_5 + 0x14) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (*param_5 == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      param_5[1] = '\0';
      param_5[4] = '\0';
      param_5[5] = '\0';
      param_5[6] = '\0';
      param_5[7] = '\0';
      param_5[8] = '\0';
      param_5[9] = '\0';
      param_5[10] = '\0';
      param_5[0xb] = '\0';
    }
  }
  else {
    pcVar1 = *(char **)param_2[1];
    if ((char *)((undefined8 *)param_2[1])[1] < pcVar1 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5 + 1,1);
    }
    else {
      param_5[1] = *pcVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_5 + 4,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_5 + 4) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_5 + 8,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_5 + 8) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    param_5[0xc] = param_5[0xc] + '\x01';
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 14403d730 FUN_14403d730 body=76 status=ok
// SIG undefined FUN_14403d730(void)

void FUN_14403d730(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0xffffffff00000080;
  *(undefined1 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 14403d7b4 FUN_14403d7b4 body=29 status=ok
// SIG undefined FUN_14403d7b4(void)

undefined8 FUN_14403d7b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403d7d2 FUN_14403d7d2 body=29 status=ok
// SIG undefined FUN_14403d7d2(void)

undefined8 FUN_14403d7d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403d8e8 FUN_14403d8e8 body=59 status=ok
// SIG undefined FUN_14403d8e8(void)

undefined8 FUN_14403d8e8(longlong *param_1)

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



// FUNCTION 14403d98a FUN_14403d98a body=29 status=ok
// SIG undefined FUN_14403d98a(void)

undefined8 FUN_14403d98a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403d9b6 FUN_14403d9b6 body=212 status=ok
// SIG undefined FUN_14403d9b6(void)

void FUN_14403d9b6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xe0);
  *param_2 = 0x40a0000044bb8000;
  param_2[1] = 0x447a000043fa0000;
  *(undefined4 *)(param_2 + 2) = 0x3e99999a;
  *(undefined1 *)((longlong)param_2 + 0x14) = 6;
  param_2[3] = 0x240000000;
  param_2[4] = 0x434800003f000000;
  param_2[5] = 0x42a00000453b8000;
  param_2[6] = 0x42f000003e4ccccd;
  param_2[7] = 0x40a0000044bb8000;
  param_2[8] = 0x447a000043fa0000;
  *(undefined4 *)(param_2 + 9) = 0x3e99999a;
  *(undefined1 *)((longlong)param_2 + 0x4c) = 6;
  param_2[10] = 0x240000000;
  param_2[0xb] = 0x434800003f000000;
  param_2[0xc] = 0x42a00000453b8000;
  param_2[0xd] = 0x42f000003e4ccccd;
  param_2[0xe] = 0x42c8000041f00000;
  *(undefined4 *)(param_2 + 0xf) = 0x42b40000;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0x7012;
  param_2[0x24] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 14403db48 FUN_14403db48 body=103 status=ok
// SIG undefined FUN_14403db48(void)

void FUN_14403db48(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_2 + 0xd8) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0xd8) + 0x50));
  }
  if ((*(longlong *)(param_2 + 0xa8) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 0x50));
    return;
  }
  return;
}



// FUNCTION 14403dbc6 FUN_14403dbc6 body=63 status=ok
// SIG undefined FUN_14403dbc6(void)

undefined1 FUN_14403dbc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14403dd3a(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 14403dc2e FUN_14403dc2e body=59 status=ok
// SIG undefined FUN_14403dc2e(void)

undefined8 FUN_14403dc2e(longlong *param_1)

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



// FUNCTION 14403dc7a FUN_14403dc7a body=113 status=ok
// SIG undefined FUN_14403dc7a(void)

void FUN_14403dc7a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    if (*(longlong *)(param_2 + 0x110) != 0) {
      FUN_1400020a8();
    }
    if ((*(longlong *)(param_2 + 0xd8) != 0 & DAT_14cb26569) == 1) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0xd8) + 0x50));
    }
    if ((*(longlong *)(param_2 + 0xa8) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 14403dd3a FUN_14403dd3a body=797 status=ok
// SIG undefined FUN_14403dd3a(void)

undefined8 * FUN_14403dd3a(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = param_2;
  puVar10 = param_1;
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  param_1[0x10] = param_2[0x10];
  lVar8 = param_2[0x12];
  if (param_1[0x12] != lVar8) {
    param_1[0x14] = 0;
  }
  param_1[0x12] = lVar8;
  if (param_1[0x13] != param_2[0x13]) {
    param_1[0x14] = 0;
  }
  uVar6 = FUN_14477b664();
  uVar6 = FUN_14477b664(uVar6);
  param_1[0x13] = uVar6;
  param_1[0x14] = param_2[0x14];
  if ((param_1[0x15] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x15] + 0x50));
  }
  bVar5 = DAT_14cb26569;
  lVar8 = param_2[0x15];
  param_1[0x15] = lVar8;
  if ((lVar8 != 0) && ((bVar5 & 1) != 0)) {
    piVar1 = *(int **)(lVar8 + 0x50);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar7 = 5;
    }
    else {
      if ((char)piVar1[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_14403de03;
      }
      iVar7 = 2;
    }
    LOCK();
    piVar1[2] = iVar7;
    UNLOCK();
  }
LAB_14403de03:
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x16] = param_2[0x16];
  lVar8 = param_2[0x18];
  if (param_1[0x18] != lVar8) {
    param_1[0x1a] = 0;
  }
  param_1[0x18] = lVar8;
  if (param_1[0x19] != param_2[0x19]) {
    param_1[0x1a] = 0;
  }
  uVar6 = FUN_14477b664();
  uVar6 = FUN_14477b664(uVar6);
  param_1[0x19] = uVar6;
  param_1[0x1a] = param_2[0x1a];
  if ((param_1[0x1b] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1b] + 0x50));
  }
  bVar5 = DAT_14cb26569;
  lVar8 = param_2[0x1b];
  param_1[0x1b] = lVar8;
  if ((lVar8 != 0) && ((bVar5 & 1) != 0)) {
    piVar1 = *(int **)(lVar8 + 0x50);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar7 = 5;
    }
    else {
      if ((char)piVar1[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_14403dea8;
      }
      iVar7 = 2;
    }
    LOCK();
    piVar1[2] = iVar7;
    UNLOCK();
  }
LAB_14403dea8:
  if ((param_1[0x1c] != param_2[0x1c]) || (*(int *)(param_1 + 0x1d) != *(int *)(param_2 + 0x1d))) {
    param_1[0x1c] = param_2[0x1c];
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
    param_1[0x1e] = 0;
  }
  param_1[0x1f] = param_2[0x1f];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x21);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
  *(undefined4 *)(param_1 + 0x21) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar4;
  if (param_1 != param_2) {
    iVar7 = *(int *)(param_2 + 0x23);
    _Src = (void *)param_2[0x22];
    *(int *)(param_1 + 0x23) = iVar7;
    if (iVar7 == 0 && *(int *)((longlong)param_1 + 0x11c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x22,iVar7);
      if (iVar7 != 0) {
        memcpy((void *)param_1[0x22],_Src,(longlong)iVar7 * 2);
      }
    }
  }
  param_1[0x24] = param_2[0x24];
  return param_1;
}



// FUNCTION 14403e074 FUN_14403e074 body=1472 status=ok
// SIG undefined FUN_14403e074(void)

longlong FUN_14403e074(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_148680618();
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  if ((*(longlong *)(param_1 + 0x270) != *(longlong *)(param_2 + 0x270)) ||
     (*(int *)(param_1 + 0x278) != *(int *)(param_2 + 0x278))) {
    *(longlong *)(param_1 + 0x270) = *(longlong *)(param_2 + 0x270);
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
    *(undefined8 *)(param_1 + 0x280) = 0;
  }
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 0x298);
  uVar2 = *(undefined4 *)(param_2 + 0x28c);
  uVar3 = *(undefined4 *)(param_2 + 0x290);
  uVar4 = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = uVar2;
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  *(undefined4 *)(param_1 + 0x294) = uVar4;
  FUN_148c01182(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_148c01182(param_1 + 0x3d8,param_2 + 0x3d8);
  uVar2 = *(undefined4 *)(param_2 + 0x514);
  uVar3 = *(undefined4 *)(param_2 + 0x518);
  uVar4 = *(undefined4 *)(param_2 + 0x51c);
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0x514) = uVar2;
  *(undefined4 *)(param_1 + 0x518) = uVar3;
  *(undefined4 *)(param_1 + 0x51c) = uVar4;
  if ((*(longlong *)(param_1 + 0x520) != *(longlong *)(param_2 + 0x520)) ||
     (*(int *)(param_1 + 0x528) != *(int *)(param_2 + 0x528))) {
    *(longlong *)(param_1 + 0x520) = *(longlong *)(param_2 + 0x520);
    *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_2 + 0x528);
    *(undefined8 *)(param_1 + 0x530) = 0;
  }
  if ((*(longlong *)(param_1 + 0x538) != *(longlong *)(param_2 + 0x538)) ||
     (*(int *)(param_1 + 0x540) != *(int *)(param_2 + 0x540))) {
    *(longlong *)(param_1 + 0x538) = *(longlong *)(param_2 + 0x538);
    *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_2 + 0x540);
    *(undefined8 *)(param_1 + 0x548) = 0;
  }
  if ((*(longlong *)(param_1 + 0x550) != *(longlong *)(param_2 + 0x550)) ||
     (*(int *)(param_1 + 0x558) != *(int *)(param_2 + 0x558))) {
    *(longlong *)(param_1 + 0x550) = *(longlong *)(param_2 + 0x550);
    *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
    *(undefined8 *)(param_1 + 0x560) = 0;
  }
  if ((*(longlong *)(param_1 + 0x568) != *(longlong *)(param_2 + 0x568)) ||
     (*(int *)(param_1 + 0x570) != *(int *)(param_2 + 0x570))) {
    *(longlong *)(param_1 + 0x568) = *(longlong *)(param_2 + 0x568);
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
    *(undefined8 *)(param_1 + 0x578) = 0;
  }
  if ((*(longlong *)(param_1 + 0x580) != *(longlong *)(param_2 + 0x580)) ||
     (*(int *)(param_1 + 0x588) != *(int *)(param_2 + 0x588))) {
    *(longlong *)(param_1 + 0x580) = *(longlong *)(param_2 + 0x580);
    *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
    *(undefined8 *)(param_1 + 0x590) = 0;
  }
  FUN_148c01460(param_1 + 0x598,param_2 + 0x598);
  FUN_148c013e6(param_1 + 0x5e8,param_2 + 0x5e8);
  if ((*(longlong *)(param_1 + 0x638) != *(longlong *)(param_2 + 0x638)) ||
     (*(int *)(param_1 + 0x640) != *(int *)(param_2 + 0x640))) {
    *(longlong *)(param_1 + 0x638) = *(longlong *)(param_2 + 0x638);
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x640);
    *(undefined8 *)(param_1 + 0x648) = 0;
  }
  if ((*(longlong *)(param_1 + 0x650) != *(longlong *)(param_2 + 0x650)) ||
     (*(int *)(param_1 + 0x658) != *(int *)(param_2 + 0x658))) {
    *(longlong *)(param_1 + 0x650) = *(longlong *)(param_2 + 0x650);
    *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
    *(undefined8 *)(param_1 + 0x660) = 0;
  }
  if ((*(longlong *)(param_1 + 0x668) != *(longlong *)(param_2 + 0x668)) ||
     (*(int *)(param_1 + 0x670) != *(int *)(param_2 + 0x670))) {
    *(longlong *)(param_1 + 0x668) = *(longlong *)(param_2 + 0x668);
    *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_2 + 0x670);
    *(undefined8 *)(param_1 + 0x678) = 0;
  }
  FUN_148c0169c(param_1 + 0x680,param_2 + 0x680);
  *(undefined2 *)(param_1 + 0x6d0) = *(undefined2 *)(param_2 + 0x6d0);
  *(undefined1 *)(param_1 + 0x6d2) = *(undefined1 *)(param_2 + 0x6d2);
  *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(param_2 + 0x6d8);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
  FUN_1447715ec(param_1 + 0x6e8,param_2 + 0x6e8);
  *(undefined1 *)(param_1 + 0x710) = *(undefined1 *)(param_2 + 0x710);
  *(undefined2 *)(param_1 + 0x718) = *(undefined2 *)(param_2 + 0x718);
  *(undefined1 *)(param_1 + 0x71a) = *(undefined1 *)(param_2 + 0x71a);
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_2 + 0x720);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  FUN_1447715ec(param_1 + 0x730,param_2 + 0x730);
  *(undefined1 *)(param_1 + 0x758) = *(undefined1 *)(param_2 + 0x758);
  *(undefined2 *)(param_1 + 0x760) = *(undefined2 *)(param_2 + 0x760);
  *(undefined1 *)(param_1 + 0x762) = *(undefined1 *)(param_2 + 0x762);
  *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_2 + 0x768);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  FUN_1447715ec(param_1 + 0x778,param_2 + 0x778);
  *(undefined1 *)(param_1 + 0x7a0) = *(undefined1 *)(param_2 + 0x7a0);
  *(undefined2 *)(param_1 + 0x7a8) = *(undefined2 *)(param_2 + 0x7a8);
  *(undefined1 *)(param_1 + 0x7aa) = *(undefined1 *)(param_2 + 0x7aa);
  *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(param_2 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_2 + 0x7b8);
  FUN_1447715ec(param_1 + 0x7c0,param_2 + 0x7c0);
  *(undefined1 *)(param_1 + 0x7e8) = *(undefined1 *)(param_2 + 0x7e8);
  *(undefined2 *)(param_1 + 0x7f0) = *(undefined2 *)(param_2 + 0x7f0);
  *(undefined1 *)(param_1 + 0x7f2) = *(undefined1 *)(param_2 + 0x7f2);
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_2 + 0x7f8);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 0x800);
  FUN_1447715ec(param_1 + 0x808,param_2 + 0x808);
  *(undefined1 *)(param_1 + 0x830) = *(undefined1 *)(param_2 + 0x830);
  *(undefined2 *)(param_1 + 0x838) = *(undefined2 *)(param_2 + 0x838);
  *(undefined1 *)(param_1 + 0x83a) = *(undefined1 *)(param_2 + 0x83a);
  *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(param_2 + 0x840);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_2 + 0x848);
  FUN_1447715ec(param_1 + 0x850,param_2 + 0x850);
  *(undefined1 *)(param_1 + 0x878) = *(undefined1 *)(param_2 + 0x878);
  *(undefined2 *)(param_1 + 0x880) = *(undefined2 *)(param_2 + 0x880);
  *(undefined1 *)(param_1 + 0x882) = *(undefined1 *)(param_2 + 0x882);
  *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(param_2 + 0x888);
  *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_2 + 0x890);
  FUN_1447715ec(param_1 + 0x898,param_2 + 0x898);
  *(undefined1 *)(param_1 + 0x8c0) = *(undefined1 *)(param_2 + 0x8c0);
  *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_2 + 0x8d0);
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(param_2 + 0x8c8);
  *(undefined8 *)(param_1 + 0x8d8) = *(undefined8 *)(param_2 + 0x8d8);
  uVar2 = *(undefined4 *)(param_2 + 0x8e4);
  uVar3 = *(undefined4 *)(param_2 + 0x8e8);
  uVar4 = *(undefined4 *)(param_2 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_2 + 0x8e0);
  *(undefined4 *)(param_1 + 0x8e4) = uVar2;
  *(undefined4 *)(param_1 + 0x8e8) = uVar3;
  *(undefined4 *)(param_1 + 0x8ec) = uVar4;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x8f8);
    _Src = *(void **)(param_2 + 0x8f0);
    *(int *)(param_1 + 0x8f8) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x8fc) == 0) {
      *(undefined4 *)(param_1 + 0x8fc) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x8f0),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x8f0),_Src,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x900) = *(undefined8 *)(param_2 + 0x900);
  FUN_14403dd3a(param_1 + 0x908,param_2 + 0x908);
  return param_1;
}



// FUNCTION 14403e634 FUN_14403e634 body=57 status=ok
// SIG undefined FUN_14403e634(void)

void FUN_14403e634(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8ab0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8ab0 = FUN_140002ddd(FUN_1465d1526,uVar1,L"OakCharacterMovementDef");
  }
  return;
}



// FUNCTION 14403e67c FUN_14403e67c body=57 status=ok
// SIG undefined FUN_14403e67c(void)

void FUN_14403e67c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8ac8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8ac8 = FUN_140002ddd(FUN_1465d1586,uVar1,L"OakCharacterSaveHeader");
  }
  return;
}



// FUNCTION 14403e6e5 FUN_14403e6e5 body=616 status=ok
// SIG undefined FUN_14403e6e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14403e6e5(void)

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
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba8738 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b708ed0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b7093a0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7093e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b709520);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b709e10;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b709e30,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b70a1c0,1,0);
  _DAT_14cba8818 = 0x47efffffe0000000;
  _DAT_14cba8820 = 0x47efffffe0000000;
  _DAT_14cba8828 = 0x47efffffe0000000;
  _DAT_14cba8830 = 0x47efffffe0000000;
  _DAT_14cba8838 = 0x47efffffe0000000;
  _DAT_14cba8840 = 0x47efffffe0000000;
  _DAT_14cba8848 = 0x47efffffe0000000;
  _DAT_14cba8850 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cba8908,L"ClientOnVaultPowerDepleted",1);
  FUN_1446f470e(&DAT_14cba8918,L"ClientOnVaultPowerNotDepleted",1);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b70c770;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b70c850,1,&PTR_FUN_14b70c7b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b70e940);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b70ea60);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b70ec40);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b70f830,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14403e994 FUN_14403e994 body=55 status=ok
// SIG undefined FUN_14403e994(void)

void FUN_14403e994(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8d48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8d48 = FUN_14171c317(FUN_1465d1c7c,uVar1,L"EOakSwimmingVolumeType");
  }
  return;
}



// FUNCTION 14403e9cb FUN_14403e9cb body=55 status=ok
// SIG undefined FUN_14403e9cb(void)

void FUN_14403e9cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8d60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8d60 = FUN_14171c317(FUN_1465d1cab,uVar1,L"EOakSwimmingAreaType");
  }
  return;
}



// FUNCTION 14403ea3c FUN_14403ea3c body=55 status=ok
// SIG undefined FUN_14403ea3c(void)

void FUN_14403ea3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8ff0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8ff0 = FUN_14171c317(FUN_1465d26ae,uVar1,L"EOakCinematicStageSpawnPointType");
  }
  return;
}



// FUNCTION 14403ea73 FUN_14403ea73 body=55 status=ok
// SIG undefined FUN_14403ea73(void)

void FUN_14403ea73(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9020 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9020 = FUN_14171c317(FUN_1465d22f3,uVar1,L"EOakCinematicStagePositionType");
  }
  return;
}



// FUNCTION 14403eaaa FUN_14403eaaa body=55 status=ok
// SIG undefined FUN_14403eaaa(void)

void FUN_14403eaaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9140 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9140 = FUN_14171c317(FUN_1465d2b34,uVar1,L"EVendingMachinePasswordEntryAction");
  }
  return;
}



// FUNCTION 14403eaee FUN_14403eaee body=48 status=ok
// SIG undefined FUN_14403eaee(void)

longlong FUN_14403eaee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145ca397c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403eb1e FUN_14403eb1e body=48 status=ok
// SIG undefined FUN_14403eb1e(void)

longlong FUN_14403eb1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145ca397c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403eb7e FUN_14403eb7e body=57 status=ok
// SIG undefined FUN_14403eb7e(void)

void FUN_14403eb7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8b50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8b50 = FUN_140002ddd(FUN_1465d1a22,uVar1,L"OakCharacterStandInDef");
  }
  return;
}



// FUNCTION 14403ecc2 FUN_14403ecc2 body=57 status=ok
// SIG undefined FUN_14403ecc2(void)

void FUN_14403ecc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8e48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8e48 = FUN_140002ddd(FUN_1465d1eea,uVar1,L"OakCinematicPlayerAnimDef");
  }
  return;
}



// FUNCTION 14403eda6 FUN_14403eda6 body=141 status=ok
// SIG undefined FUN_14403eda6(void)

undefined1 FUN_14403eda6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 0x10 + lVar3) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14403ee88 FUN_14403ee88 body=57 status=ok
// SIG undefined FUN_14403ee88(void)

void FUN_14403ee88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba91c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba91c0 = FUN_140002ddd(FUN_1465d2d7c,uVar1,L"OakCollectibleSetCompletionDef");
  }
  return;
}



// FUNCTION 14403eec1 FUN_14403eec1 body=2855 status=ok
// SIG undefined FUN_14403eec1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14403eec1(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8b28 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b713320);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b713430);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7134e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b713590);
  _DAT_14cba8ba8 = 0x47efffffe0000000;
  _DAT_14cba8bb0 = 0x47efffffe0000000;
  _DAT_14cba8bb8 = 0x47efffffe0000000;
  _DAT_14cba8bc0 = 0x47efffffe0000000;
  _DAT_14cba8bc8 = 0x47efffffe0000000;
  _DAT_14cba8bd0 = 0x47efffffe0000000;
  _DAT_14cba8bd8 = 0x47efffffe0000000;
  _DAT_14cba8be0 = 0x47efffffe0000000;
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "Use";
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8be8 = (ulonglong)uVar2;
  local_60 = "Sight";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8bf0 = (ulonglong)uVar2;
  local_60 = "TargetLock";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8bf8 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cba8c00);
  if (cVar1 == '\0') {
    _DAT_14cba8c00 = 0;
    uRam000000014cba8c08 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  _DAT_14cba8c14 = 0;
  FUN_14052b5e0(&DAT_14cba8c10,"PlayerAwareness",0);
  _DAT_14cba8c20 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c28 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c30 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c38 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c40 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c48 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c50 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c58 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c60 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c68 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c70 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c78 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c80 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c88 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c90 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8c98 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8ca0 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8ca8 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8cb0 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8cb8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cba8cc0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14403e950);
  FUN_140056680(&DAT_14cba8cd0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14403e961);
  FUN_140056680(&DAT_14cba8ce0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14403e972);
  FUN_140056680(&DAT_14cba8cf0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14403e983);
  FUN_1446f470e(&DAT_14cba8d00,L"LIMB_GORED",1);
  _DAT_14cba8d08 = 0x4072c00000000000;
  _DAT_14cba8d10 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cba8d18,L"body",1);
  FUN_1446f470e(&DAT_14cba8d20,L"title_card",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b713910,1,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b713a80 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)((longlong)&PTR_u_EOakSwimmingVolumeType_14b713a88 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14b713a90 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x40);
  local_60 = "Cash";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba8d70 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cba8d78,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14403ea02);
  FUN_1446f470e(&DAT_14cba8d88,L"UNSET",1);
  local_60 = "init";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "update";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "config_update";
  local_58 = 0xd;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "deinit";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&DAT_14cba8d90,L"Party",1);
  FUN_1446f470e(&DAT_14cba8d98,&DAT_149e063b2,1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b713ba0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7141c0,1,&PTR_FUN_14b714190);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b714920,1,0);
  _DAT_14cba8e08 = 0xffffffff;
  _DAT_14cba8e0c = 0;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b714dd0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7155a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b715c70,1,&PTR_FUN_14b715c40);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b716170,1,0);
  FUN_1446f470e(&DAT_14cba8ec0,L"ClientsCallStageEvent",1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7178a0,3,&PTR_FUN_14b717850);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b717f50);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b718150,1,0);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b718680;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7186c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b718c70,2,&PTR_FUN_14b718c20);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b719490,2,&PTR_FUN_14b719460);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b719830,1,&PTR_FUN_14b719800);
  FUN_1446f470e(&DAT_14cba9168,L"OnPasswordAccepted",1);
  FUN_1446f470e(&DAT_14cba9178,L"OnPasswordDenied",1);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b71a200;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b71a250,1,&PTR_FUN_14b71a220);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b71ab10,1,&PTR_FUN_14b71aac0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b71ad10,1,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14403f9ec FUN_14403f9ec body=55 status=ok
// SIG undefined FUN_14403f9ec(void)

void FUN_14403f9ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba92a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba92a0 = FUN_14171c317(FUN_1465d34d7,uVar1,L"EOakCreditsSlidePosition");
  }
  return;
}



// FUNCTION 14403fa23 FUN_14403fa23 body=55 status=ok
// SIG undefined FUN_14403fa23(void)

void FUN_14403fa23(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9488 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9488 = FUN_14171c317(FUN_1465d3b9c,uVar1,L"EOakCritterBehavior");
  }
  return;
}



// FUNCTION 14403fa5a FUN_14403fa5a body=55 status=ok
// SIG undefined FUN_14403fa5a(void)

void FUN_14403fa5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba94a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba94a0 = FUN_14171c317(FUN_1465d3bcd,uVar1,L"EOakCritterDirection");
  }
  return;
}



// FUNCTION 14403fa91 FUN_14403fa91 body=47 status=ok
// SIG undefined FUN_14403fa91(void)

longlong FUN_14403fa91(void)

{
  if (DAT_14cba9550 == 0) {
    FUN_14073dd9a(&DAT_14cba9550,&PTR_LAB_14b7263a0);
  }
  return DAT_14cba9550;
}



// FUNCTION 14403fac0 FUN_14403fac0 body=47 status=ok
// SIG undefined FUN_14403fac0(void)

longlong FUN_14403fac0(void)

{
  if (DAT_14cba9540 == 0) {
    FUN_14000fc22(&DAT_14cba9540,&PTR_FUN_14b7262e8);
  }
  return DAT_14cba9540;
}



// FUNCTION 14403faf0 FUN_14403faf0 body=2303 status=ok
// SIG undefined FUN_14403faf0(void)

void FUN_14403faf0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  code *local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1468d96f0;
      local_140 = 0;
      local_148 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar3);
          if (cVar4 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar6,&local_28);
            goto LAB_14403fce2;
          }
        }
        puVar7 = (undefined8 *)(lVar6 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar7 != &local_28) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_28,puVar7,(int)plVar3[6]);
          }
          else {
            memcpy(&local_28,puVar7,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_140 = CONCAT44(local_140._4_4_,(int)plVar3[6]);
        local_148 = local_148 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_28,lVar6,1);
      }
      else {
        (*pcVar2)(plVar3,&local_28,lVar6);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar8 = (undefined8 *)*puVar7;
        puVar7 = puVar8 + 2;
      } while ((longlong *)*puVar8 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar8[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_28);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_28);
    }
  }
LAB_14403fce2:
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_141710108;
      local_140 = 0x1000000000000000;
      local_148 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar3);
          if (cVar4 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar6,&local_48);
            goto LAB_14403fec0;
          }
        }
        puVar7 = (undefined8 *)(lVar6 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar7,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_140 = CONCAT44(local_140._4_4_,(int)plVar3[6]);
        local_148 = local_148 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_48,lVar6,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar6);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar8 = (undefined8 *)*puVar7;
        puVar7 = puVar8 + 2;
      } while ((longlong *)*puVar8 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar8[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,&local_48);
    }
  }
LAB_14403fec0:
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1403a682c;
      local_140 = 0;
      local_148 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar6;
      *(longlong *)(param_2 + 0x40) = lVar6;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar3);
          if (cVar4 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar6,local_a8);
            goto LAB_1440400d3;
          }
        }
        puVar7 = (undefined8 *)(lVar6 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar7 != local_a8) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,local_a8,puVar7,(int)plVar3[6]);
          }
          else {
            memcpy(local_a8,puVar7,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_140 = CONCAT44(local_140._4_4_,(int)plVar3[6]);
        local_148 = local_148 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,local_a8,lVar6,1);
      }
      else {
        (*pcVar2)(plVar3,local_a8,lVar6);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar8 = (undefined8 *)*puVar7;
        puVar7 = puVar8 + 2;
      } while ((longlong *)*puVar8 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar8[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,local_a8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,local_a8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_a8[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar5,param_2,local_a8);
    }
  }
LAB_1440400d3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar7 = local_a8;
  puVar8 = local_108;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_120 = local_48;
  uVar5 = FUN_14477b664(uStack_40);
  local_118 = FUN_14477b664(uVar5);
  local_110 = local_38;
  FUN_1440f93de(local_28,&local_120,local_108);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440403f0 FUN_1440403f0 body=34 status=ok
// SIG undefined FUN_1440403f0(void)

void FUN_1440403f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144040418();
  FUN_14069c8d6(uVar1,&PTR_s_SpawnCritter_14b726330,1);
  return;
}



// FUNCTION 144040418 FUN_144040418 body=227 status=ok
// SIG undefined FUN_144040418(void)

longlong FUN_144040418(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba9548 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140cf07f0;
    local_38 = &LAB_1440404fc;
    local_40 = FUN_1440404ff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCritterStatics",&DAT_14cba9548,FUN_1440403f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba9548;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440404ff FUN_1440404ff body=35 status=ok
// SIG undefined FUN_1440404ff(void)

void FUN_1440404ff(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7263e0;
  return;
}



// FUNCTION 144040522 FUN_144040522 body=55 status=ok
// SIG undefined FUN_144040522(void)

void FUN_144040522(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba95f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba95f8 = FUN_14171c317(FUN_1465d4104,uVar1,L"EChallengeFilterAttitudeSetting");
  }
  return;
}



// FUNCTION 144040559 FUN_144040559 body=55 status=ok
// SIG undefined FUN_144040559(void)

void FUN_144040559(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9610 = FUN_14171c317(FUN_1465d4133,uVar1,L"EChallengePlayerMovement");
  }
  return;
}



// FUNCTION 144040590 FUN_144040590 body=55 status=ok
// SIG undefined FUN_144040590(void)

void FUN_144040590(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9628 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9628 = FUN_14171c317(FUN_1465d4162,uVar1,L"EChallengeEnemyType");
  }
  return;
}



// FUNCTION 1440405c7 FUN_1440405c7 body=55 status=ok
// SIG undefined FUN_1440405c7(void)

void FUN_1440405c7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9640 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9640 = FUN_14171c317(FUN_1465d4191,uVar1,L"EPickupSource");
  }
  return;
}



// FUNCTION 1440405fe FUN_1440405fe body=55 status=ok
// SIG undefined FUN_1440405fe(void)

void FUN_1440405fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9658 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9658 = FUN_14171c317(FUN_1465d41c0,uVar1,L"EEchoUpgradeCondition");
  }
  return;
}



// FUNCTION 144040635 FUN_144040635 body=55 status=ok
// SIG undefined FUN_144040635(void)

void FUN_144040635(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9670 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9670 = FUN_14171c317(FUN_1465d41ef,uVar1,L"EChallengeScenario");
  }
  return;
}



// FUNCTION 14404066c FUN_14404066c body=55 status=ok
// SIG undefined FUN_14404066c(void)

void FUN_14404066c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9688 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9688 = FUN_14171c317(FUN_1465d421e,uVar1,L"EChallengeShieldSource");
  }
  return;
}



// FUNCTION 1440406b0 FUN_1440406b0 body=48 status=ok
// SIG undefined FUN_1440406b0(void)

longlong FUN_1440406b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_14105ea68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440406e0 FUN_1440406e0 body=38 status=ok
// SIG undefined FUN_1440406e0(void)

undefined8 FUN_1440406e0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440407d4 FUN_1440407d4 body=57 status=ok
// SIG undefined FUN_1440407d4(void)

void FUN_1440407d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9270 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9270 = FUN_140002ddd(FUN_1465d3448,uVar1,L"OakCorpseArchetypeDef");
  }
  return;
}



// FUNCTION 1440408ca FUN_1440408ca body=57 status=ok
// SIG undefined FUN_1440408ca(void)

void FUN_1440408ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9410 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9410 = FUN_140002ddd(FUN_1465d3a16,uVar1,L"OakCritterBiomeDef");
  }
  return;
}



// FUNCTION 144040944 FUN_144040944 body=57 status=ok
// SIG undefined FUN_144040944(void)

void FUN_144040944(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9470 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9470 = FUN_140002ddd(FUN_1465d3b3d,uVar1,L"OakCritterDef_FX");
  }
  return;
}



// FUNCTION 1440409e8 FUN_1440409e8 body=57 status=ok
// SIG undefined FUN_1440409e8(void)

void FUN_1440409e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba94d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba94d0 = FUN_140002ddd(FUN_1465d3c94,uVar1,L"OakCritterDef_Mesh");
  }
  return;
}



// FUNCTION 144040a84 FUN_144040a84 body=57 status=ok
// SIG undefined FUN_144040a84(void)

void FUN_144040a84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9530 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9530 = FUN_140002ddd(FUN_1465d3e29,uVar1,L"OakCritterMaterialParameterDef");
  }
  return;
}



// FUNCTION 144040afa FUN_144040afa body=57 status=ok
// SIG undefined FUN_144040afa(void)

void FUN_144040afa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9568 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9568 = FUN_140002ddd(FUN_1465d3e88,uVar1,L"OakCrosshairDef");
  }
  return;
}



// FUNCTION 144040b9f FUN_144040b9f body=1201 status=ok
// SIG undefined FUN_144040b9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144040b9f(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
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
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b720830,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b720c30,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b720e80);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba9248 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b721770,1,&PTR_FUN_14b721720);
  FUN_1446f470e(&DAT_14cba92b0,L"GetNiagaraComponent",1);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b722260;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b722280,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b722790,1,0);
  local_50 = "SMInstance";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba9300 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba9308);
  if (cVar1 == '\0') {
    _DAT_14cba9308 = 0;
    uRam000000014cba9310 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b722b90,2,&PTR_FUN_14b722b60);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b723120,1,&PTR_FUN_14b7230f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b723950,1,&PTR_FUN_14b723920);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b723ba0,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b724220,1,&PTR_FUN_14b7241d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7244b0,1,&PTR_FUN_14b724480);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b724760);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b725a50;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b725a90);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b725d80,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b726110);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7261d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b726680,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b726760);
  FUN_1446f470e(&DAT_14cba9578,L"UNSET",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b726c70,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b726fc0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b727490);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b7278d0 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b7278d8 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b7278e0 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0xf0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b727bf0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144041054 FUN_144041054 body=55 status=ok
// SIG undefined FUN_144041054(void)

void FUN_144041054(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9780 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9780 = FUN_14171c317(FUN_1418c9c39,uVar1,L"EOakElementalType");
  }
  return;
}



// FUNCTION 14404108b FUN_14404108b body=55 status=ok
// SIG undefined FUN_14404108b(void)

void FUN_14404108b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9798 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9798 = FUN_14171c317(FUN_1465d4a4b,uVar1,L"EOakElementalDeathEffects");
  }
  return;
}



// FUNCTION 1440410c4 FUN_1440410c4 body=227 status=ok
// SIG undefined FUN_1440410c4(void)

longlong FUN_1440410c4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba97c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_145898c7a;
    local_28 = &LAB_144006868;
    local_38 = &LAB_1440411a8;
    local_40 = FUN_1440411ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/OakGame",L"OakDebugMenu",&DAT_14cba97c0,&DAT_1440410c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba97c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440411ab FUN_1440411ab body=98 status=ok
// SIG undefined FUN_1440411ab(void)

void FUN_1440411ab(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x31) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x39) = 0;
  puVar1[9] = 0x4082c00000000000;
  puVar1[10] = 0x4059000000000000;
  *puVar1 = &PTR_FUN_14b72ffd0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
  return;
}



// FUNCTION 14404121d FUN_14404121d body=47 status=ok
// SIG undefined FUN_14404121d(void)

longlong FUN_14404121d(void)

{
  if (DAT_14cba97c8 == 0) {
    FUN_14073dd9a(&DAT_14cba97c8,&PTR_LAB_14b72ff88);
  }
  return DAT_14cba97c8;
}



// FUNCTION 14404124c FUN_14404124c body=55 status=ok
// SIG undefined FUN_14404124c(void)

void FUN_14404124c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9868 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9868 = FUN_14171c317(FUN_1465d4cfc,uVar1,L"EHoloFactReactionType");
  }
  return;
}



// FUNCTION 144041283 FUN_144041283 body=55 status=ok
// SIG undefined FUN_144041283(void)

void FUN_144041283(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9898 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9898 = FUN_14171c317(FUN_1465d4d5a,uVar1,L"EFactReactionType");
  }
  return;
}



// FUNCTION 1440412ba FUN_1440412ba body=55 status=ok
// SIG undefined FUN_1440412ba(void)

void FUN_1440412ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba98e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba98e0 = FUN_14171c317(FUN_1465d4e4f,uVar1,L"EOakDialogGameplayEvents");
  }
  return;
}



// FUNCTION 1440412f1 FUN_1440412f1 body=55 status=ok
// SIG undefined FUN_1440412f1(void)

void FUN_1440412f1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba98f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba98f8 = FUN_14171c317(FUN_1465d4e7e,uVar1,L"EDialogMethodOfDeath");
  }
  return;
}



// FUNCTION 144041328 FUN_144041328 body=55 status=ok
// SIG undefined FUN_144041328(void)

void FUN_144041328(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9910 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9910 = FUN_14171c317(FUN_1465d4ead,uVar1,L"EDialogLimbType");
  }
  return;
}



// FUNCTION 14404135f FUN_14404135f body=55 status=ok
// SIG undefined FUN_14404135f(void)

void FUN_14404135f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ab8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ab8 = FUN_14171c317(FUN_1465d51b0,uVar1,L"EOakDLICDriverLimit");
  }
  return;
}



// FUNCTION 144041396 FUN_144041396 body=79 status=ok
// SIG undefined FUN_144041396(void)

undefined8 * FUN_144041396(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b72ffd0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1440068a2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440413e6 FUN_1440413e6 body=48 status=ok
// SIG undefined FUN_1440413e6(void)

longlong FUN_1440413e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144041416 FUN_144041416 body=48 status=ok
// SIG undefined FUN_144041416(void)

longlong FUN_144041416(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404145e FUN_14404145e body=48 status=ok
// SIG undefined FUN_14404145e(void)

longlong FUN_14404145e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144041496 FUN_144041496 body=48 status=ok
// SIG undefined FUN_144041496(void)

longlong FUN_144041496(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440414d6 FUN_1440414d6 body=48 status=ok
// SIG undefined FUN_1440414d6(void)

longlong FUN_1440414d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144041506 FUN_144041506 body=48 status=ok
// SIG undefined FUN_144041506(void)

longlong FUN_144041506(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144041536 FUN_144041536 body=48 status=ok
// SIG undefined FUN_144041536(void)

longlong FUN_144041536(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404156e FUN_14404156e body=48 status=ok
// SIG undefined FUN_14404156e(void)

longlong FUN_14404156e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a80;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440415a6 FUN_1440415a6 body=48 status=ok
// SIG undefined FUN_1440415a6(void)

longlong FUN_1440415a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1c60;
  FUN_1458dfeba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144041604 FUN_144041604 body=187 status=ok
// SIG undefined FUN_144041604(void)

void FUN_144041604(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xe0);
  param_2[1] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0xf00000d0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xf00000d0;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined2 *)(param_2 + 0x15) = 0x100;
  *(undefined4 *)((longlong)param_2 + 0xaa) = 0;
  *(undefined4 *)((longlong)param_2 + 0xad) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *param_2 = &PTR_FUN_14b735d00;
  param_2[0x26] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 1440416d8 FUN_1440416d8 body=57 status=ok
// SIG undefined FUN_1440416d8(void)

void FUN_1440416d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba96c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba96c0 = FUN_140002ddd(FUN_1465d4653,uVar1,L"OakDamageSourceDef");
  }
  return;
}



// FUNCTION 14404172e FUN_14404172e body=207 status=ok
// SIG undefined FUN_14404172e(void)

void FUN_14404172e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x118);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b049ca0;
  param_2[3] = &DAT_3f8000003f800000;
  param_2[4] = &DAT_3f8000003f800000;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x3f4ccccd3e4ccccd;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x3f8000003e4ccccd;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0xf00000d0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined4 *)(param_2 + 0x19) = 0x9bf48485;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b736140;
  *(undefined1 *)(param_2 + 0x24) = 1;
  *(undefined1 *)((longlong)param_2 + 0x122) = 0;
  return;
}



// FUNCTION 14404180a FUN_14404180a body=57 status=ok
// SIG undefined FUN_14404180a(void)

void FUN_14404180a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba97b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba97b0 = FUN_140002ddd(FUN_1465d4a7a,uVar1,L"OakDamageTypeDef");
  }
  return;
}



// FUNCTION 144041912 FUN_144041912 body=57 status=ok
// SIG undefined FUN_144041912(void)

void FUN_144041912(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9940 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9940 = FUN_140002ddd(FUN_1465d4f72,uVar1,L"OakDiscoveryCategoryDef");
  }
  return;
}



// FUNCTION 14404199c FUN_14404199c body=57 status=ok
// SIG undefined FUN_14404199c(void)

void FUN_14404199c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ae8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ae8 = FUN_140002ddd(FUN_1465d5248,uVar1,L"OakDiscoveryLocationTypeDef");
  }
  return;
}



// FUNCTION 1440419ed FUN_1440419ed body=1897 status=ok
// SIG undefined FUN_1440419ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440419ed(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba96b0 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b72e280);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b72e700);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b72fa70,1,0);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b72fda0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b72fde0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7302a0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b730410,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b730980,1,&PTR_FUN_14b730930);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b730b90);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b7312f0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b731310,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b731be0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b731c30,1,&PTR_FUN_14b731c00);
  FUN_14098d3d2(FUN_1440412ba,L"/Script/OakGame",L"EOakDialogGameplayEvents",&DAT_14cba98d8);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b732cb0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b732cf0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b732e40);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7331b0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b734670);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cba9998);
  if (cVar1 == '\0') {
    _DAT_14cba9998 = 0;
    uRam000000014cba99a0 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b734d30,1,0);
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cba99c0 = 0x47efffffe0000000;
  _DAT_14cba99c8 = 0x47efffffe0000000;
  _DAT_14cba99d0 = 0x47efffffe0000000;
  _DAT_14cba99d8 = 0x47efffffe0000000;
  _DAT_14cba99e0 = 0x47efffffe0000000;
  _DAT_14cba99e8 = 0x47efffffe0000000;
  _DAT_14cba99f0 = 0x47efffffe0000000;
  _DAT_14cba99f8 = 0x47efffffe0000000;
  _DAT_14cba9a04 = 0;
  FUN_14052b5e0(&DAT_14cba9a00,"PlayerAwareness",0);
  _DAT_14cba9a10 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a18 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a20 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a28 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a30 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a38 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a40 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a48 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a50 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a58 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a60 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a68 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a70 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a78 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a80 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a88 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a90 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9a98 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9aa0 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba9aa8 = (ulonglong)uVar2;
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b735080;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7350a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b735b70);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144042158 FUN_144042158 body=55 status=ok
// SIG undefined FUN_144042158(void)

void FUN_144042158(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9b38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9b38 = FUN_14171c317(FUN_1465d5540,uVar1,L"EOakDiscoveryPresentationDriver");
  }
  return;
}



// FUNCTION 14404218f FUN_14404218f body=55 status=ok
// SIG undefined FUN_14404218f(void)

void FUN_14404218f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9b50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9b50 = FUN_14171c317(FUN_1465d556f,uVar1,L"EOakDiscoveryExploreGroup");
  }
  return;
}



// FUNCTION 1440421c6 FUN_1440421c6 body=55 status=ok
// SIG undefined FUN_1440421c6(void)

void FUN_1440421c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9b80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9b80 = FUN_14171c317(FUN_1465d5634,uVar1,L"ECompassPingType");
  }
  return;
}



// FUNCTION 1440421fe FUN_1440421fe body=55 status=ok
// SIG undefined FUN_1440421fe(void)

void FUN_1440421fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ce8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ce8 = FUN_140002ddd(FUN_144042235,uVar1,L"OakDiscoveryViewableMapRegionMaterialData");
  }
  return;
}



// FUNCTION 144042235 FUN_144042235 body=47 status=ok
// SIG undefined FUN_144042235(void)

longlong FUN_144042235(void)

{
  if (DAT_14cba9ce0 == 0) {
    FUN_14086a14e(&DAT_14cba9ce0,&PTR_FUN_14b73a9a0);
  }
  return DAT_14cba9ce0;
}



// FUNCTION 144042264 FUN_144042264 body=48 status=ok
// SIG undefined FUN_144042264(void)

void FUN_144042264(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000002d0;
  *puVar1 = &PTR_FUN_14b745970;
  return;
}



// FUNCTION 144042294 FUN_144042294 body=55 status=ok
// SIG undefined FUN_144042294(void)

void FUN_144042294(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9f48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9f48 = FUN_14171c317(FUN_1465d67d7,uVar1,L"EOakEcho4AttributeValueType");
  }
  return;
}



// FUNCTION 1440422cb FUN_1440422cb body=55 status=ok
// SIG undefined FUN_1440422cb(void)

void FUN_1440422cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9f78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9f78 = FUN_14171c317(FUN_1465d689c,uVar1,L"EOakEchoLocationIndicatorPriorityStrategy");
  }
  return;
}



// FUNCTION 144042302 FUN_144042302 body=55 status=ok
// SIG undefined FUN_144042302(void)

void FUN_144042302(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9fc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9fc0 = FUN_14171c317(FUN_1465d6988,uVar1,L"EOakEchoLocationState");
  }
  return;
}



// FUNCTION 144042339 FUN_144042339 body=55 status=ok
// SIG undefined FUN_144042339(void)

void FUN_144042339(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9fd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9fd8 = FUN_14171c317(FUN_1465d6929,uVar1,L"EOakEchoLocationInputType");
  }
  return;
}



// FUNCTION 144042370 FUN_144042370 body=55 status=ok
// SIG undefined FUN_144042370(void)

void FUN_144042370(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ff0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ff0 = FUN_14171c317(FUN_1465d69b7,uVar1,L"EOakEchoLocationFailedReason");
  }
  return;
}



// FUNCTION 1440423ad FUN_1440423ad body=47 status=ok
// SIG undefined FUN_1440423ad(void)

longlong FUN_1440423ad(void)

{
  if (DAT_14cbaa0c0 == 0) {
    FUN_14073dd9a(&DAT_14cbaa0c0,&PTR_LAB_14b742d70);
  }
  return DAT_14cbaa0c0;
}



// FUNCTION 1440423dc FUN_1440423dc body=47 status=ok
// SIG undefined FUN_1440423dc(void)

longlong FUN_1440423dc(void)

{
  if (DAT_14cbaa0b0 == 0) {
    FUN_14000fc22(&DAT_14cbaa0b0,&PTR_FUN_14b742ca8);
  }
  return DAT_14cbaa0b0;
}



// FUNCTION 14404240c FUN_14404240c body=2096 status=ok
// SIG undefined FUN_14404240c(void)

void FUN_14404240c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *unaff_RBX;
  bool bVar9;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_141710108;
      local_80 = 0x1000000000000000;
      local_88 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      unaff_RBX = *(int **)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) =
           (longlong)*(int *)((longlong)plVar4 + 0x44) + (longlong)unaff_RBX;
      *(int **)(param_2 + 0x40) = unaff_RBX;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,unaff_RBX,&local_38);
            goto LAB_1440425ea;
          }
        }
        unaff_RBX = (int *)((longlong)unaff_RBX + (longlong)*(int *)((longlong)plVar4 + 0x44));
        if (unaff_RBX != (int *)&local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,unaff_RBX,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,unaff_RBX,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,unaff_RBX,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,unaff_RBX);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1440425ea:
  iStack_40 = 0;
  uStack_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      unaff_RBX = *(int **)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) =
           (longlong)*(int *)((longlong)plVar4 + 0x44) + (longlong)unaff_RBX;
      *(int **)(param_2 + 0x40) = unaff_RBX;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,unaff_RBX,&iStack_40);
            goto LAB_14404279e;
          }
        }
        unaff_RBX = (int *)((longlong)unaff_RBX + (longlong)*(int *)((longlong)plVar4 + 0x44));
        if (unaff_RBX != &iStack_40) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&iStack_40,unaff_RBX,(int)plVar4[6]);
          }
          else {
            memcpy(&iStack_40,unaff_RBX,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&iStack_40,unaff_RBX,1);
      }
      else {
        (*pcVar3)(plVar4,&iStack_40,unaff_RBX);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_40 = (int)uVar2;
      uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_40);
    }
  }
LAB_14404279e:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      unaff_RBX = *(int **)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) =
           (longlong)*(int *)((longlong)plVar4 + 0x44) + (longlong)unaff_RBX;
      *(int **)(param_2 + 0x40) = unaff_RBX;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,unaff_RBX,&local_44);
            goto LAB_144042951;
          }
        }
        unaff_RBX = (int *)((longlong)unaff_RBX + (longlong)*(int *)((longlong)plVar4 + 0x44));
        if (unaff_RBX != &local_44) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_44,unaff_RBX,(int)plVar4[6]);
          }
          else {
            memcpy(&local_44,unaff_RBX,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_44,unaff_RBX,1);
      }
      else {
        (*pcVar3)(plVar4,&local_44,unaff_RBX);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_44);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_44 = (int)uVar2;
      iStack_40 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_44);
    }
  }
LAB_144042951:
  bVar9 = local_44 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_3c,iStack_40);
  local_60 = local_38;
  uVar8 = FUN_14477b664(uStack_30);
  local_58 = FUN_14477b664(uVar8);
  local_50 = local_28;
  FUN_14410d41c(&local_60,uVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar9) & 0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144042c3e FUN_144042c3e body=34 status=ok
// SIG undefined FUN_144042c3e(void)

void FUN_144042c3e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144042c66();
  FUN_14069c8d6(uVar1,&PTR_s_PlayAndCompleteEchoLogDef_14b742cf0,1);
  return;
}



// FUNCTION 144042c66 FUN_144042c66 body=227 status=ok
// SIG undefined FUN_144042c66(void)

longlong FUN_144042c66(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaa0b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140cf07f0;
    local_38 = &LAB_144042d4a;
    local_40 = FUN_144042d4d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakEchoLogBlueprintLibrary",&DAT_14cbaa0b8,FUN_144042c3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa0b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144042d4d FUN_144042d4d body=35 status=ok
// SIG undefined FUN_144042d4d(void)

void FUN_144042d4d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b742db0;
  return;
}



// FUNCTION 144042d70 FUN_144042d70 body=48 status=ok
// SIG undefined FUN_144042d70(void)

longlong FUN_144042d70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042da8 FUN_144042da8 body=48 status=ok
// SIG undefined FUN_144042da8(void)

longlong FUN_144042da8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042e18 FUN_144042e18 body=48 status=ok
// SIG undefined FUN_144042e18(void)

longlong FUN_144042e18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042e50 FUN_144042e50 body=48 status=ok
// SIG undefined FUN_144042e50(void)

longlong FUN_144042e50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042e90 FUN_144042e90 body=48 status=ok
// SIG undefined FUN_144042e90(void)

longlong FUN_144042e90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c40;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042ec8 FUN_144042ec8 body=48 status=ok
// SIG undefined FUN_144042ec8(void)

longlong FUN_144042ec8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c48;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042f00 FUN_144042f00 body=48 status=ok
// SIG undefined FUN_144042f00(void)

longlong FUN_144042f00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c50;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042f38 FUN_144042f38 body=48 status=ok
// SIG undefined FUN_144042f38(void)

longlong FUN_144042f38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c58;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042f70 FUN_144042f70 body=48 status=ok
// SIG undefined FUN_144042f70(void)

longlong FUN_144042f70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c60;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042fa8 FUN_144042fa8 body=48 status=ok
// SIG undefined FUN_144042fa8(void)

longlong FUN_144042fa8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c68;
  FUN_141368c9c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144042fe0 FUN_144042fe0 body=48 status=ok
// SIG undefined FUN_144042fe0(void)

longlong FUN_144042fe0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043010 FUN_144043010 body=48 status=ok
// SIG undefined FUN_144043010(void)

longlong FUN_144043010(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043040 FUN_144043040 body=48 status=ok
// SIG undefined FUN_144043040(void)

longlong FUN_144043040(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043070 FUN_144043070 body=48 status=ok
// SIG undefined FUN_144043070(void)

longlong FUN_144043070(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440430a0 FUN_1440430a0 body=48 status=ok
// SIG undefined FUN_1440430a0(void)

longlong FUN_1440430a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440430d0 FUN_1440430d0 body=48 status=ok
// SIG undefined FUN_1440430d0(void)

longlong FUN_1440430d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043100 FUN_144043100 body=48 status=ok
// SIG undefined FUN_144043100(void)

longlong FUN_144043100(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x840;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043130 FUN_144043130 body=48 status=ok
// SIG undefined FUN_144043130(void)

longlong FUN_144043130(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x848;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043160 FUN_144043160 body=48 status=ok
// SIG undefined FUN_144043160(void)

longlong FUN_144043160(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043190 FUN_144043190 body=48 status=ok
// SIG undefined FUN_144043190(void)

longlong FUN_144043190(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440431c0 FUN_1440431c0 body=48 status=ok
// SIG undefined FUN_1440431c0(void)

longlong FUN_1440431c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440431f0 FUN_1440431f0 body=48 status=ok
// SIG undefined FUN_1440431f0(void)

longlong FUN_1440431f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043220 FUN_144043220 body=48 status=ok
// SIG undefined FUN_144043220(void)

longlong FUN_144043220(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043250 FUN_144043250 body=48 status=ok
// SIG undefined FUN_144043250(void)

longlong FUN_144043250(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043280 FUN_144043280 body=48 status=ok
// SIG undefined FUN_144043280(void)

longlong FUN_144043280(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x840;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440432b0 FUN_1440432b0 body=48 status=ok
// SIG undefined FUN_1440432b0(void)

longlong FUN_1440432b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x848;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440432e0 FUN_1440432e0 body=48 status=ok
// SIG undefined FUN_1440432e0(void)

longlong FUN_1440432e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043310 FUN_144043310 body=48 status=ok
// SIG undefined FUN_144043310(void)

longlong FUN_144043310(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043340 FUN_144043340 body=38 status=ok
// SIG undefined FUN_144043340(void)

undefined8 FUN_144043340(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440433a6 FUN_1440433a6 body=57 status=ok
// SIG undefined FUN_1440433a6(void)

void FUN_1440433a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9b20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9b20 = FUN_140002ddd(FUN_1465d54de,uVar1,L"OakDiscoveryPriorityGroupDef");
  }
  return;
}



// FUNCTION 1440433fa FUN_1440433fa body=57 status=ok
// SIG undefined FUN_1440433fa(void)

void FUN_1440433fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9b68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9b68 = FUN_140002ddd(FUN_1465d55d5,uVar1,L"OakUIDisplayDataDef_ExploreCategory");
  }
  return;
}



// FUNCTION 144043442 FUN_144043442 body=242 status=ok
// SIG undefined FUN_144043442(void)

void FUN_144043442(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x180);
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 9) = 0;
  memset(param_2 + 10,0,0x96);
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0x466a6000;
  *(undefined1 *)((longlong)param_2 + 0x115) = 0;
  *(undefined1 *)(param_2 + 0x24) = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(undefined1 *)(param_2 + 0x28) = 1;
  *param_2 = &PTR_FUN_14b7446b0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined1 *)(param_2 + 0x2c) = 10;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0x100000006;
  *(undefined1 *)((longlong)param_2 + 0x18c) = 1;
  *(undefined1 *)((longlong)param_2 + 0x18e) = 1;
  param_2[0x34] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 14404354c FUN_14404354c body=57 status=ok
// SIG undefined FUN_14404354c(void)

void FUN_14404354c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9b98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9b98 = FUN_140002ddd(FUN_1465d5663,uVar1,L"OakDiscoveryPresentationDef");
  }
  return;
}


