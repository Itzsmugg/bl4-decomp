// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144063f14 FUN_144063f14 body=50 status=ok
// SIG undefined FUN_144063f14(void)

longlong FUN_144063f14(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144063f46 FUN_144063f46 body=51 status=ok
// SIG undefined FUN_144063f46(void)

longlong FUN_144063f46(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 144063f7a FUN_144063f7a body=47 status=ok
// SIG undefined FUN_144063f7a(void)

longlong FUN_144063f7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144063faa FUN_144063faa body=38 status=ok
// SIG undefined FUN_144063faa(void)

undefined8 FUN_144063faa(undefined8 param_1,int param_2)

{
  FUN_14406350c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144063fd0 FUN_144063fd0 body=45 status=ok
// SIG undefined FUN_144063fd0(void)

longlong FUN_144063fd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14406350c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144063ffe FUN_144063ffe body=45 status=ok
// SIG undefined FUN_144063ffe(void)

longlong FUN_144063ffe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14406350c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144064037 FUN_144064037 body=6811 status=ok
// SIG undefined FUN_144064037(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144064037(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&DAT_14cbb27a8,L"Party",1);
  FUN_1446f470e(&DAT_14cbb27b0,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbb27b8,L"Join",1);
  FUN_1446f470e(&DAT_14cbb27c0,L"Invite",1);
  FUN_1446f470e(&DAT_14cbb27c8,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbb27d0,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbb27d8,L"Mute",1);
  FUN_1446f470e(&DAT_14cbb27e0,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbb27e8,L"Promote",1);
  FUN_1446f470e(&DAT_14cbb27f0,L"Kick",1);
  FUN_1446f470e(&DAT_14cbb27f8,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbb2800,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbb2808,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbb2810,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbb2818,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb2820,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb2828,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbb2830,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbb2838,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbb2840,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbb2848,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbb2850,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbb2858,L"Cancel",1);
  _DAT_14cbb2860 = 0;
  uRam000000014cbb2868 = 0;
  _DAT_14cbb2870 = 0;
  DAT_14cbb2878 = 0;
  uRam000000014cbb2880 = 0;
  FUN_1446ddda2(&DAT_14cbb2860,"Dialog_Join",0);
  atexit((_func_5014 *)&LAB_144062b58);
  _DAT_14cbb2888 = 0;
  uRam000000014cbb2890 = 0;
  _DAT_14cbb2898 = 0;
  DAT_14cbb28a0 = 0;
  uRam000000014cbb28a8 = 0;
  FUN_1446ddda2(&DAT_14cbb2888,"Dialog_Invite",0);
  atexit((_func_5014 *)&LAB_144062b69);
  _DAT_14cbb28b0 = 0;
  uRam000000014cbb28b8 = 0;
  _DAT_14cbb28c0 = 0;
  DAT_14cbb28c8 = 0;
  uRam000000014cbb28d0 = 0;
  FUN_1446ddda2(&DAT_14cbb28b0,"Dialog_ViewProfile",0);
  atexit((_func_5014 *)&LAB_144062b7a);
  _DAT_14cbb28d8 = 0;
  uRam000000014cbb28e0 = 0;
  _DAT_14cbb28e8 = 0;
  DAT_14cbb28f0 = 0;
  uRam000000014cbb28f8 = 0;
  FUN_1446ddda2(&DAT_14cbb28d8,"Dialog_AddFriend",0);
  atexit((_func_5014 *)&LAB_144062b8b);
  _DAT_14cbb2900 = 0;
  uRam000000014cbb2908 = 0;
  _DAT_14cbb2910 = 0;
  DAT_14cbb2918 = 0;
  uRam000000014cbb2920 = 0;
  FUN_1446ddda2(&DAT_14cbb2900,"Dialog_Mute",0);
  atexit((_func_5014 *)&LAB_144062b9c);
  _DAT_14cbb2928 = 0;
  uRam000000014cbb2930 = 0;
  _DAT_14cbb2938 = 0;
  DAT_14cbb2940 = 0;
  uRam000000014cbb2948 = 0;
  FUN_1446ddda2(&DAT_14cbb2928,"Dialog_Unmute",0);
  atexit((_func_5014 *)&LAB_144062bad);
  _DAT_14cbb2950 = 0;
  uRam000000014cbb2958 = 0;
  _DAT_14cbb2960 = 0;
  DAT_14cbb2968 = 0;
  uRam000000014cbb2970 = 0;
  FUN_1446ddda2(&DAT_14cbb2950,"Dialog_Promote",0);
  atexit((_func_5014 *)&LAB_144062bbe);
  _DAT_14cbb2978 = 0;
  uRam000000014cbb2980 = 0;
  _DAT_14cbb2988 = 0;
  DAT_14cbb2990 = 0;
  uRam000000014cbb2998 = 0;
  FUN_1446ddda2(&DAT_14cbb2978,"Dialog_Kick",0);
  atexit((_func_5014 *)&LAB_144062bcf);
  _DAT_14cbb29a0 = 0;
  uRam000000014cbb29a8 = 0;
  _DAT_14cbb29b0 = 0;
  DAT_14cbb29b8 = 0;
  uRam000000014cbb29c0 = 0;
  FUN_1446ddda2(&DAT_14cbb29a0,"Dialog_AddShiftFriend",0);
  atexit((_func_5014 *)&LAB_144062be0);
  _DAT_14cbb29c8 = 0;
  uRam000000014cbb29d0 = 0;
  _DAT_14cbb29d8 = 0;
  DAT_14cbb29e0 = 0;
  uRam000000014cbb29e8 = 0;
  FUN_1446ddda2(&DAT_14cbb29c8,"Dialog_RemoveShiftFriend",0);
  atexit((_func_5014 *)&LAB_144062bf1);
  _DAT_14cbb29f0 = 0;
  uRam000000014cbb29f8 = 0;
  _DAT_14cbb2a00 = 0;
  DAT_14cbb2a08 = 0;
  uRam000000014cbb2a10 = 0;
  FUN_1446ddda2(&DAT_14cbb29f0,"Dialog_AddFavorite",0);
  atexit((_func_5014 *)&LAB_144062c02);
  _DAT_14cbb2a18 = 0;
  uRam000000014cbb2a20 = 0;
  _DAT_14cbb2a28 = 0;
  DAT_14cbb2a30 = 0;
  uRam000000014cbb2a38 = 0;
  FUN_1446ddda2(&DAT_14cbb2a18,"Dialog_RemoveFavorite",0);
  atexit((_func_5014 *)&LAB_144062c13);
  _DAT_14cbb2a40 = 0;
  uRam000000014cbb2a48 = 0;
  _DAT_14cbb2a50 = 0;
  DAT_14cbb2a58 = 0;
  uRam000000014cbb2a60 = 0;
  FUN_1446ddda2(&DAT_14cbb2a40,"Dialog_BlockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144062c24);
  _DAT_14cbb2a68 = 0;
  uRam000000014cbb2a70 = 0;
  _DAT_14cbb2a78 = 0;
  DAT_14cbb2a80 = 0;
  uRam000000014cbb2a88 = 0;
  FUN_1446ddda2(&DAT_14cbb2a68,"Dialog_UnblockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144062c35);
  _DAT_14cbb2a90 = 0;
  uRam000000014cbb2a98 = 0;
  _DAT_14cbb2aa0 = 0;
  DAT_14cbb2aa8 = 0;
  uRam000000014cbb2ab0 = 0;
  FUN_1446ddda2(&DAT_14cbb2a90,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144062c46);
  _DAT_14cbb2ab8 = 0;
  uRam000000014cbb2ac0 = 0;
  _DAT_14cbb2ac8 = 0;
  DAT_14cbb2ad0 = 0;
  uRam000000014cbb2ad8 = 0;
  FUN_1446ddda2(&DAT_14cbb2ab8,"Dialog_InviteFriend",0);
  atexit((_func_5014 *)&LAB_144062c57);
  _DAT_14cbb2ae0 = 0;
  uRam000000014cbb2ae8 = 0;
  _DAT_14cbb2af0 = 0;
  DAT_14cbb2af8 = 0;
  uRam000000014cbb2b00 = 0;
  FUN_1446ddda2(&DAT_14cbb2ae0,"Dialog_InviteRecentFriends",0);
  atexit((_func_5014 *)&LAB_144062c68);
  _DAT_14cbb2b08 = 0;
  uRam000000014cbb2b10 = 0;
  _DAT_14cbb2b18 = 0;
  DAT_14cbb2b20 = 0;
  uRam000000014cbb2b28 = 0;
  FUN_1446ddda2(&DAT_14cbb2b08,"Dialog_JoinRecentFriendsHost",0);
  atexit((_func_5014 *)&LAB_144062c79);
  _DAT_14cbb2b30 = 0;
  uRam000000014cbb2b38 = 0;
  _DAT_14cbb2b40 = 0;
  DAT_14cbb2b48 = 0;
  uRam000000014cbb2b50 = 0;
  FUN_1446ddda2(&DAT_14cbb2b30,"Dialog_ViewProfiles",0);
  atexit((_func_5014 *)&LAB_144062c8a);
  _DAT_14cbb2b58 = 0;
  uRam000000014cbb2b60 = 0;
  _DAT_14cbb2b68 = 0;
  DAT_14cbb2b70 = 0;
  uRam000000014cbb2b78 = 0;
  FUN_1446ddda2(&DAT_14cbb2b58,"Dialog_TeleportToPlayer",0);
  atexit((_func_5014 *)&LAB_144062c9b);
  _DAT_14cbb2b80 = 0;
  uRam000000014cbb2b88 = 0;
  _DAT_14cbb2b90 = 0;
  DAT_14cbb2b98 = 0;
  uRam000000014cbb2ba0 = 0;
  FUN_1446ddda2(&DAT_14cbb2b80,"Dialog_Cancel",0);
  atexit((_func_5014 *)&LAB_144062cac);
  FUN_1400b22c2(&DAT_14cbb2ba8,"GoOnlineText");
  atexit((_func_5014 *)&LAB_144062cbd);
  FUN_1400b22c2(&DAT_14cbb2bb8,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_144062cce);
  FUN_1400b22c2(&DAT_14cbb2bc8,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_144062cdf);
  FUN_1400b22c2(&DAT_14cbb2bd8,"GoingOnlineTextThreePeriods");
  atexit((_func_5014 *)&LAB_144062cf0);
  FUN_1446f470e(&DAT_14cbb2be8,L"UNSET",1);
  FUN_140056680(&DAT_14cbb2bf0,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_144062d01);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b835cd0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b836130,1,0);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2c30 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbb2c38);
  if (cVar1 == '\0') {
    _DAT_14cbb2c38 = 0;
    uRam000000014cbb2c40 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbb2c48 = 0x47efffffe0000000;
  _DAT_14cbb2c50 = 0x47efffffe0000000;
  _DAT_14cbb2c58 = 0x47efffffe0000000;
  _DAT_14cbb2c60 = 0x47efffffe0000000;
  _DAT_14cbb2c68 = 0x47efffffe0000000;
  _DAT_14cbb2c70 = 0x47efffffe0000000;
  _DAT_14cbb2c78 = 0x47efffffe0000000;
  _DAT_14cbb2c80 = 0x47efffffe0000000;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2c88 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb2c90,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144062d12);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2ca4 = 0;
  FUN_14052b5e0(&DAT_14cbb2ca0,"PlayerAwareness",0);
  _DAT_14cbb2cb0 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2cb8 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2cc0 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2cc8 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2cd0 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2cd8 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2ce0 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2ce8 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2cf0 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2cf8 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d00 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d08 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d10 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d18 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d20 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d28 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d30 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d38 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d40 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d48 = (ulonglong)uVar2;
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
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b836590,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b836a00,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b836ea0,1,0);
  local_70 = "audio_calibration";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2d98 = (ulonglong)uVar2;
  local_70 = "brightness_calibration";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2da0 = (ulonglong)uVar2;
  local_70 = "brightness_calibration_ftc";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2da8 = (ulonglong)uVar2;
  local_70 = "safe_area_calibration";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2db0 = (ulonglong)uVar2;
  local_70 = "options_accessibility";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2db8 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b837490,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b837900,1,0);
  FUN_1400b22c2(&DAT_14cbb2e00,"tint_siren");
  atexit((_func_5014 *)&LAB_144062d23);
  FUN_1400b22c2(&DAT_14cbb2e10,"tint_health");
  atexit((_func_5014 *)&LAB_144062d34);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2e20 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2e28 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb2e30 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbb2e38,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144062d45);
  FUN_140056680(&DAT_14cbb2e48,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144062d56);
  FUN_140056680(&DAT_14cbb2e58,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144062d67);
  FUN_140056680(&DAT_14cbb2e68,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144062d78);
  FUN_1446f470e(&DAT_14cbb2e78,L"LIMB_GORED",1);
  _DAT_14cbb2e80 = 0x4072c00000000000;
  _DAT_14cbb2e88 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbb2e90,L"body",1);
  FUN_1446f470e(&DAT_14cbb2e98,L"title_card",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b838460,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8388e0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b838d50,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8393b0,1,0);
  FUN_1446f470e(&DAT_14cbb2f58,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbb2f60,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbb2f68,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbb2f70,L"TimeOfDayForecastEvents",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8398e0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b839d40,1,0);
  _DAT_14cbb2fb4 = 0;
  _DAT_14cbb2fb8 = 0;
  FUN_14052b5e0(&DAT_14cbb2fb0,"character",0);
  _DAT_14cbb2fc0 = 0;
  _DAT_14cbb2fc4 = 0;
  FUN_14052b5e0(&DAT_14cbb2fbc,"profile",0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83a1a0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83a6b0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83ab20,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83b0e0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83b550,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83ba20,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83bf20,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83c840,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83ccb0,1,0);
  FUN_140056680(&DAT_14cbb30e0,L"available");
  atexit((_func_5014 *)&LAB_144063119);
  FUN_140056680(&DAT_14cbb30f0,L"synced");
  atexit((_func_5014 *)&LAB_14406312a);
  FUN_140056680(&DAT_14cbb3100,L"offline");
  atexit((_func_5014 *)&LAB_14406313b);
  FUN_140056680(&DAT_14cbb3110,L"incompatible");
  atexit((_func_5014 *)&LAB_14406314c);
  FUN_140056680(&DAT_14cbb3120,L"conflict");
  atexit((_func_5014 *)&LAB_14406315d);
  _DAT_14cbb3130 = 0;
  uRam000000014cbb3138 = 0;
  _DAT_14cbb3140 = 0;
  DAT_14cbb3148 = 0;
  uRam000000014cbb3150 = 0;
  FUN_1446ddda2(&DAT_14cbb3130,"MainMenuVersionText",0);
  atexit((_func_5014 *)&LAB_14406316e);
  _DAT_14cbb3158 = 0;
  uRam000000014cbb3160 = 0;
  _DAT_14cbb3168 = 0;
  DAT_14cbb3170 = 0;
  uRam000000014cbb3178 = 0;
  FUN_1446ddda2(&DAT_14cbb3158,"MainMenuVersionUpdateReadyText",0);
  atexit((_func_5014 *)&LAB_14406317f);
  local_70 = "show_max_saves";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3180 = (ulonglong)uVar2;
  local_70 = "uvh_apply_db";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3188 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbb3190,L"Quality",1);
  FUN_1446f470e(&DAT_14cbb3198,L"Performance",1);
  _DAT_14cbb31a0 = 0;
  uRam000000014cbb31a8 = 0;
  _DAT_14cbb31b0 = 0;
  DAT_14cbb31b8 = 0;
  uRam000000014cbb31c0 = 0;
  FUN_1446ddda2(&DAT_14cbb31a0,"Default",0);
  atexit((_func_5014 *)&LAB_144063190);
  local_70 = "Char_Placeholder";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb31c8 = (ulonglong)uVar2;
  local_70 = "cancel";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb31d0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbb31d8,&DAT_149e06384,1);
  FUN_1446f470e(&DAT_14cbb31e0,&DAT_149e06338,1);
  FUN_1446f470e(&DAT_14cbb31e8,L"confirm");
  local_70 = "offline";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb31f0 = (ulonglong)uVar2;
  _DAT_14cbb31f8 = 0;
  uRam000000014cbb3200 = 0;
  _DAT_14cbb3208 = 0;
  DAT_14cbb3210 = 0;
  uRam000000014cbb3218 = 0;
  FUN_1446ddda2(&DAT_14cbb31f8,"offline",0);
  atexit((_func_5014 *)&LAB_1440631a1);
  _DAT_14cbb3220 = 0;
  uRam000000014cbb3228 = 0;
  _DAT_14cbb3230 = 0;
  DAT_14cbb3238 = 0;
  uRam000000014cbb3240 = 0;
  FUN_1446ddda2(&DAT_14cbb3220,"local_only",0);
  atexit((_func_5014 *)&LAB_1440631b2);
  local_70 = "lan";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3248 = (ulonglong)uVar2;
  _DAT_14cbb3250 = 0;
  uRam000000014cbb3258 = 0;
  _DAT_14cbb3260 = 0;
  DAT_14cbb3268 = 0;
  uRam000000014cbb3270 = 0;
  FUN_1446ddda2(&DAT_14cbb3250,&DAT_14b842e21,0);
  atexit((_func_5014 *)&LAB_1440631c3);
  local_70 = "online_public";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3278 = (ulonglong)uVar2;
  _DAT_14cbb3280 = 0;
  uRam000000014cbb3288 = 0;
  _DAT_14cbb3290 = 0;
  DAT_14cbb3298 = 0;
  uRam000000014cbb32a0 = 0;
  FUN_1446ddda2(&DAT_14cbb3280,"online_public",0);
  atexit((_func_5014 *)&LAB_1440631d4);
  local_70 = "online_friends";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb32a8 = (ulonglong)uVar2;
  _DAT_14cbb32b0 = 0;
  uRam000000014cbb32b8 = 0;
  _DAT_14cbb32c0 = 0;
  DAT_14cbb32c8 = 0;
  uRam000000014cbb32d0 = 0;
  FUN_1446ddda2(&DAT_14cbb32b0,"online_friends",0);
  atexit((_func_5014 *)&LAB_1440631e5);
  local_70 = "online_invite";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb32d8 = (ulonglong)uVar2;
  _DAT_14cbb32e0 = 0;
  uRam000000014cbb32e8 = 0;
  _DAT_14cbb32f0 = 0;
  DAT_14cbb32f8 = 0;
  uRam000000014cbb3300 = 0;
  FUN_1446ddda2(&DAT_14cbb32e0,"online_invite",0);
  atexit((_func_5014 *)&LAB_1440631f6);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83d0e0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83d550,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83d9c0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83de30,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83e2a0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83e710,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83eb70,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83f420,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b83fcd0,2,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b840160,1,0);
  _DAT_14cbb3444 = 0;
  _DAT_14cbb3448 = 0;
  FUN_14052b5e0(&DAT_14cbb3440,"State",0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b840a20,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b841210,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b841c30,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8420a0,1,0);
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b842da0,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144065b29 FUN_144065b29 body=55 status=ok
// SIG undefined FUN_144065b29(void)

void FUN_144065b29(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb37d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb37d0 = FUN_14171c317(FUN_144065b60,uVar1,L"ESplitScreenVisiblity");
  }
  return;
}



// FUNCTION 144065b60 FUN_144065b60 body=47 status=ok
// SIG undefined FUN_144065b60(void)

longlong FUN_144065b60(void)

{
  if (DAT_14cbb37c8 == 0) {
    FUN_1409ce572(&DAT_14cbb37c8,&PTR_FUN_14b844540);
  }
  return DAT_14cbb37c8;
}



// FUNCTION 144065b90 FUN_144065b90 body=55 status=ok
// SIG undefined FUN_144065b90(void)

void FUN_144065b90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb37e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb37e8 = FUN_140002ddd(FUN_144065bc7,uVar1,L"OakUISplitScreenTransform");
  }
  return;
}



// FUNCTION 144065bc7 FUN_144065bc7 body=47 status=ok
// SIG undefined FUN_144065bc7(void)

longlong FUN_144065bc7(void)

{
  if (DAT_14cbb37e0 == 0) {
    FUN_14086a14e(&DAT_14cbb37e0,&PTR_FUN_14b844650);
  }
  return DAT_14cbb37e0;
}



// FUNCTION 144065bf6 FUN_144065bf6 body=48 status=ok
// SIG undefined FUN_144065bf6(void)

void FUN_144065bf6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b84b050;
  return;
}



// FUNCTION 144065c26 FUN_144065c26 body=55 status=ok
// SIG undefined FUN_144065c26(void)

void FUN_144065c26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3800 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3800 = FUN_140002ddd(FUN_144065c5d,uVar1,L"OakUISplitScreenData");
  }
  return;
}



// FUNCTION 144065c5d FUN_144065c5d body=47 status=ok
// SIG undefined FUN_144065c5d(void)

longlong FUN_144065c5d(void)

{
  if (DAT_14cbb37f8 == 0) {
    FUN_14086a14e(&DAT_14cbb37f8,&PTR_FUN_14b844870);
  }
  return DAT_14cbb37f8;
}



// FUNCTION 144065c92 FUN_144065c92 body=48 status=ok
// SIG undefined FUN_144065c92(void)

void FUN_144065c92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b84b1b0;
  return;
}



// FUNCTION 144065cc2 FUN_144065cc2 body=55 status=ok
// SIG undefined FUN_144065cc2(void)

void FUN_144065cc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3818 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3818 = FUN_140002ddd(FUN_144065cf9,uVar1,L"OakUIData_HUDItem");
  }
  return;
}



// FUNCTION 144065cf9 FUN_144065cf9 body=47 status=ok
// SIG undefined FUN_144065cf9(void)

longlong FUN_144065cf9(void)

{
  if (DAT_14cbb3810 == 0) {
    FUN_14086a14e(&DAT_14cbb3810,&PTR_FUN_14b8449f0);
  }
  return DAT_14cbb3810;
}



// FUNCTION 144065d2e FUN_144065d2e body=48 status=ok
// SIG undefined FUN_144065d2e(void)

void FUN_144065d2e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14b84b320;
  return;
}



// FUNCTION 144065d5e FUN_144065d5e body=55 status=ok
// SIG undefined FUN_144065d5e(void)

void FUN_144065d5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3950 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3950 =
         FUN_14171c317(FUN_1465f9080,uVar1,
                       L"EOakUIDisplayDataDef_ActionSkillShowDurationBarInAlternateMode");
  }
  return;
}



// FUNCTION 144065d95 FUN_144065d95 body=55 status=ok
// SIG undefined FUN_144065d95(void)

void FUN_144065d95(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3968 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3968 =
         FUN_14171c317(FUN_1465f90af,uVar1,
                       L"EOakUIDisplayDataDef_ActionSkillShowChargesInAlternateMode");
  }
  return;
}



// FUNCTION 144065dd4 FUN_144065dd4 body=55 status=ok
// SIG undefined FUN_144065dd4(void)

void FUN_144065dd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3a10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3a10 = FUN_14171c317(FUN_1465f9359,uVar1,L"EElementEffectiveness");
  }
  return;
}



// FUNCTION 144065e0b FUN_144065e0b body=55 status=ok
// SIG undefined FUN_144065e0b(void)

void FUN_144065e0b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3ad0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3ad0 = FUN_14171c317(FUN_1465f95d9,uVar1,L"EOakPointModifierType");
  }
  return;
}



// FUNCTION 144065e47 FUN_144065e47 body=47 status=ok
// SIG undefined FUN_144065e47(void)

longlong FUN_144065e47(void)

{
  if (DAT_14cbb3af8 == 0) {
    FUN_14000fc22(&DAT_14cbb3af8,&PTR_FUN_14b849570);
  }
  return DAT_14cbb3af8;
}



// FUNCTION 144065e76 FUN_144065e76 body=2252 status=ok
// SIG undefined FUN_144065e76(void)

void FUN_144065e76(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *_Src;
  int iVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int *_Src_00;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong *local_60;
  undefined4 local_58;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_b8);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_b8) >> 0x20);
  local_34 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_80 = FUN_1408a629c;
    local_88 = &DAT_14c9520b8;
    local_90 = 0;
    local_98 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar5[3];
    if ((*(byte *)((longlong)plVar5 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar5 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar5 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar5 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(plVar5), cVar7 == '\0')) {
          puVar10 = (undefined4 *)(lVar9 + *(int *)((longlong)plVar5 + 0x44));
          if (puVar10 != &local_34) {
            if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar5 + 0x100))(plVar5,&local_34,puVar10,(int)plVar5[6]);
            }
            else {
              memcpy(&local_34,puVar10,
                     (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,lVar9,&local_34);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar5[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar5,&local_34,lVar9,1);
      }
      else {
        (*pcVar3)(plVar5,&local_34,lVar9);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar5);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
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
      local_34 = (undefined4)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
    local_88 = (undefined *)FUN_1446ddbd2();
    local_80 = FUN_140dafe7a;
    local_90 = 0;
    local_98 = 0xc001;
    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
    atexit(FUN_142829758);
    _Init_thread_footer(&DAT_14c963e88);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar5[3];
    if ((*(byte *)((longlong)plVar5 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar5 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar5 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar5 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(plVar5), cVar7 == '\0')) {
          puVar10 = (undefined4 *)(lVar9 + *(int *)((longlong)plVar5 + 0x44));
          if (puVar10 != &uStack_48) {
            if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar5 + 0x100))(plVar5,&uStack_48,puVar10,(int)plVar5[6]);
            }
            else {
              memcpy(&uStack_48,puVar10,
                     (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,lVar9,&uStack_48);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar5[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar5,&uStack_48,lVar9,1);
      }
      else {
        (*pcVar3)(plVar5,&uStack_48,lVar9);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar5);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48 = (undefined4)uVar2;
      uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_48);
    }
  }
  local_4c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_88 = (undefined *)FUN_1446ddbd2();
    local_80 = FUN_14067a048;
    local_90 = 0;
    local_98 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar5[3];
    if ((*(byte *)((longlong)plVar5 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar5 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar5 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar5 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(plVar5), cVar7 == '\0')) {
          _Src_00 = (int *)(lVar9 + *(int *)((longlong)plVar5 + 0x44));
          if (_Src_00 != &local_4c) {
            if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar5 + 0x100))(plVar5,&local_4c,_Src_00,(int)plVar5[6]);
            }
            else {
              memcpy(&local_4c,_Src_00,
                     (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,lVar9,&local_4c);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar5[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar5,&local_4c,lVar9,1);
      }
      else {
        (*pcVar3)(plVar5,&local_4c,lVar9);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar5);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_4c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_4c = (int)uVar2;
      uStack_48 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_4c);
    }
  }
  iVar6 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar9 = (longlong)(int)uStack_40;
  _Src = (void *)CONCAT44(uStack_44,uStack_48);
  local_68 = (int)uStack_40;
  if (lVar9 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,uStack_40 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar9 * 2);
  }
  FUN_1442b4154(&local_60,local_34,&local_70,iVar6 != 0);
  plVar5 = (longlong *)*param_3;
  if (plVar5 != local_60) {
    *param_3 = (longlong)local_60;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 8))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(undefined4 *)(param_3 + 1) = local_58;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    FUN_1400020a8();
  }
  if ((CONCAT44(uStack_2c,uStack_30) ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14406674c FUN_14406674c body=29 status=ok
// SIG undefined FUN_14406674c(void)

undefined8 FUN_14406674c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144066802 FUN_144066802 body=59 status=ok
// SIG undefined FUN_144066802(void)

undefined8 FUN_144066802(longlong *param_1)

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



// FUNCTION 1440668a4 FUN_1440668a4 body=29 status=ok
// SIG undefined FUN_1440668a4(void)

undefined8 FUN_1440668a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144066992 FUN_144066992 body=59 status=ok
// SIG undefined FUN_144066992(void)

undefined8 FUN_144066992(longlong *param_1)

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



// FUNCTION 144066a34 FUN_144066a34 body=29 status=ok
// SIG undefined FUN_144066a34(void)

undefined8 FUN_144066a34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144066a60 FUN_144066a60 body=110 status=ok
// SIG undefined FUN_144066a60(void)

void FUN_144066a60(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x90);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b84b480;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 5) = 0x3f333333;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0x3f333333;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined4 *)(param_2 + 0xd) = 0x3f333333;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0x3f333333;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  return;
}



// FUNCTION 144066b46 FUN_144066b46 body=95 status=ok
// SIG undefined FUN_144066b46(void)

undefined8 FUN_144066b46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x18;
    do {
      if (*(char *)(param_3 + -8 + lVar1) == '\0') {
        *(undefined1 *)(param_2 + -8 + lVar1) = 0;
        *(undefined8 *)(param_2 + -0x10 + lVar1) = *(undefined8 *)(param_3 + -0x10 + lVar1);
      }
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144066bce FUN_144066bce body=59 status=ok
// SIG undefined FUN_144066bce(void)

undefined8 FUN_144066bce(longlong *param_1)

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



// FUNCTION 144066c1a FUN_144066c1a body=125 status=ok
// SIG undefined FUN_144066c1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144066c1a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 144066cea FUN_144066cea body=130 status=ok
// SIG undefined FUN_144066cea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144066cea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144066d6c FUN_144066d6c body=55 status=ok
// SIG undefined FUN_144066d6c(void)

void FUN_144066d6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3818 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3818 = FUN_140002ddd(FUN_144065cf9,uVar1,L"OakUIData_HUDItem");
  }
  return;
}



// FUNCTION 144066de4 FUN_144066de4 body=57 status=ok
// SIG undefined FUN_144066de4(void)

void FUN_144066de4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3848 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3848 = FUN_140002ddd(FUN_1465f8ae2,uVar1,L"OakUISkillTooltipDataDef");
  }
  return;
}



// FUNCTION 144066e2c FUN_144066e2c body=536 status=ok
// SIG undefined FUN_144066e2c(void)

void FUN_144066e2c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0x10] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
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
  param_2[3] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b84b950;
  lVar2 = 0;
  do {
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
    *(longlong **)((longlong)param_2 + lVar2 + 0x28) = DAT_14c844840;
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
    *(undefined4 *)((longlong)param_2 + lVar2 + 0x30) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x60);
  return;
}



// FUNCTION 14406705c FUN_14406705c body=57 status=ok
// SIG undefined FUN_14406705c(void)

void FUN_14406705c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3860 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3860 = FUN_140002ddd(FUN_1465f8b42,uVar1,L"OakUIDisplayDataDef_UICharacterName");
  }
  return;
}



// FUNCTION 1440670a4 FUN_1440670a4 body=298 status=ok
// SIG undefined FUN_1440670a4(void)

void FUN_1440670a4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
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
  *param_2 = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  *(undefined2 *)(param_2 + 6) = 4;
  *(undefined4 *)(param_2 + 3) = 0x3f800000;
  *(undefined1 *)(param_2 + 7) = 3;
  *(char *)(param_2 + 8) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return;
}



// FUNCTION 1440671f4 FUN_1440671f4 body=57 status=ok
// SIG undefined FUN_1440671f4(void)

void FUN_1440671f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3890 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3890 = FUN_140002ddd(FUN_1465f8c3a,uVar1,L"OakUIDisplayDataDef_UIRandomCharacterName");
  }
  return;
}



// FUNCTION 14406723c FUN_14406723c body=267 status=ok
// SIG undefined FUN_14406723c(void)

void FUN_14406723c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
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
  param_2[3] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b84bdb0;
  return;
}



// FUNCTION 144067360 FUN_144067360 body=57 status=ok
// SIG undefined FUN_144067360(void)

void FUN_144067360(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb38a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb38a8 = FUN_140002ddd(FUN_1465f8cd3,uVar1,L"OakUIDisplayDataDef_UITraitName");
  }
  return;
}



// FUNCTION 1440673a8 FUN_1440673a8 body=267 status=ok
// SIG undefined FUN_1440673a8(void)

void FUN_1440673a8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
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
  param_2[3] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b84bf30;
  return;
}



// FUNCTION 1440674cc FUN_1440674cc body=57 status=ok
// SIG undefined FUN_1440674cc(void)

void FUN_1440674cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb38c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb38c0 =
         FUN_140002ddd(FUN_1465f8d69,uVar1,L"OakUIDisplayDataDef_UIInteractiveObjectName");
  }
  return;
}



// FUNCTION 14406754a FUN_14406754a body=57 status=ok
// SIG undefined FUN_14406754a(void)

void FUN_14406754a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3920 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3920 = FUN_140002ddd(FUN_1465f8fc1,uVar1,L"OakUIDisplayDataDef_DifficultyEntry");
  }
  return;
}



// FUNCTION 144067592 FUN_144067592 body=516 status=ok
// SIG undefined FUN_144067592(void)

void FUN_144067592(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b4677f0;
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
  param_2[3] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = &PTR_FUN_14b84c6b0;
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
  param_2[5] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 7) = 1;
  *(undefined4 *)((longlong)param_2 + 0x39) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3d) = 0;
  return;
}



// FUNCTION 1440677a2 FUN_1440677a2 body=57 status=ok
// SIG undefined FUN_1440677a2(void)

void FUN_1440677a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3938 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3938 = FUN_140002ddd(FUN_1465f9020,uVar1,L"OakUIDisplayDataDef_GraphDisplayData");
  }
  return;
}



// FUNCTION 1440677ea FUN_1440677ea body=171 status=ok
// SIG undefined FUN_1440677ea(void)

void FUN_1440677ea(undefined8 param_1,undefined1 *param_2)

{
  memset(param_2,0,0x120);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x31) = 0;
  *(undefined8 *)(param_2 + 0x39) = 0;
  param_2[0x41] = 1;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x90) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x99) = 0x100;
  param_2[0x9c] = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 0xc4) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_2 + 0x100) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x110) = 0x3f800000;
  param_2[0x119] = 0;
  return;
}



// FUNCTION 1440678b0 FUN_1440678b0 body=342 status=ok
// SIG undefined FUN_1440678b0(void)

void FUN_1440678b0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x240);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b84cd00;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3b) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x22) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x24) = 1;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined8 *)((longlong)param_2 + 0x151) = 0;
  *(undefined8 *)((longlong)param_2 + 0x159) = 0;
  *(undefined1 *)((longlong)param_2 + 0x161) = 1;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x36) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x1b9) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x1bc) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1e4) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined4 *)(param_2 + 0x44) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x46) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x239) = 0;
  *(undefined1 *)((longlong)param_2 + 0x241) = 0;
  *(undefined4 *)((longlong)param_2 + 0x244) = 0xbf800000;
  return;
}



// FUNCTION 144067a12 FUN_144067a12 body=57 status=ok
// SIG undefined FUN_144067a12(void)

void FUN_144067a12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3998 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3998 = FUN_140002ddd(FUN_1465f9174,uVar1,L"OakUIDisplayDataDef_ActionSkill");
  }
  return;
}



// FUNCTION 144067a5a FUN_144067a5a body=57 status=ok
// SIG undefined FUN_144067a5a(void)

void FUN_144067a5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb39b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb39b0 = FUN_140002ddd(FUN_1465f91d4,uVar1,L"OakUIDisplayDataDef_VaultHunterBar");
  }
  return;
}



// FUNCTION 144067aa2 FUN_144067aa2 body=57 status=ok
// SIG undefined FUN_144067aa2(void)

void FUN_144067aa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb39c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb39c8 =
         FUN_140002ddd(FUN_1465f9234,uVar1,L"OakUIDisplayDataDef_ActionSkillScreenButtons");
  }
  return;
}



// FUNCTION 144067af8 FUN_144067af8 body=57 status=ok
// SIG undefined FUN_144067af8(void)

void FUN_144067af8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3a28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3a28 = FUN_140002ddd(FUN_1465f938a,uVar1,L"UIElementDamageEffectDef");
  }
  return;
}



// FUNCTION 144067b5c FUN_144067b5c body=57 status=ok
// SIG undefined FUN_144067b5c(void)

void FUN_144067b5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3b48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3b48 =
         FUN_140002ddd(FUN_1465f97d1,uVar1,L"OakUIGameSettingEditCondition_IsSplitscreenActive");
  }
  return;
}



// FUNCTION 144067ba4 FUN_144067ba4 body=57 status=ok
// SIG undefined FUN_144067ba4(void)

void FUN_144067ba4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3b60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3b60 =
         FUN_140002ddd(FUN_1465f9867,uVar1,
                       L"OakUIGameSettingEditCondition_IsInGameSplitscreenActive");
  }
  return;
}



// FUNCTION 144067bec FUN_144067bec body=2770 status=ok
// SIG undefined FUN_144067bec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144067bec(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  _DAT_14cbb3588 = 0x47efffffe0000000;
  _DAT_14cbb3590 = 0x47efffffe0000000;
  _DAT_14cbb3598 = 0x47efffffe0000000;
  _DAT_14cbb35a0 = 0x47efffffe0000000;
  _DAT_14cbb35a8 = 0x47efffffe0000000;
  _DAT_14cbb35b0 = 0x47efffffe0000000;
  _DAT_14cbb35b8 = 0x47efffffe0000000;
  _DAT_14cbb35c0 = 0x47efffffe0000000;
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb35c8 = (ulonglong)uVar2;
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb35d0 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb35d8 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb35e0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbb35e8);
  if (cVar1 == '\0') {
    _DAT_14cbb35e8 = 0;
    uRam000000014cbb35f0 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbb35fc = 0;
  FUN_14052b5e0(&DAT_14cbb35f8,"PlayerAwareness",0);
  _DAT_14cbb3608 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3610 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3618 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3620 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3628 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3630 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3638 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3640 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3648 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3650 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3658 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3660 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3668 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3670 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3678 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3680 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3688 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3690 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3698 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb36a0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbb36a8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144065ad4);
  FUN_140056680(&DAT_14cbb36b8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144065ae5);
  FUN_140056680(&DAT_14cbb36c8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144065af6);
  FUN_140056680(&DAT_14cbb36d8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144065b07);
  FUN_1446f470e(&DAT_14cbb36e8,L"LIMB_GORED",1);
  _DAT_14cbb36f0 = 0x4072c00000000000;
  _DAT_14cbb36f8 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbb3700,L"body",1);
  FUN_1446f470e(&DAT_14cbb3708,L"title_card",1);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3710 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbb3718,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144065b18);
  FUN_1446f470e(&DAT_14cbb3728,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbb3730,L"Party",1);
  FUN_1446f470e(&DAT_14cbb3738,&DAT_149e063b2,1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b844070,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8444d0,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b844a30;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b844a50);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 0xc;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b845940);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14b846fd0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b847010);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b847210);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8475a0,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b847e60;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b847eb0,1,&PTR_FUN_14b847e80);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8484c0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b848c60,1,&PTR_FUN_14b848c10);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b848ff0,1,0);
  FUN_14098d3d2(FUN_144065e0b,L"/Script/OakGame",L"EOakPointModifierType",&DAT_14cbb3ac8);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b849410,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b849f80,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b84a300);
  local_70 = "UpscalingMethod";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3b88 = (ulonglong)uVar2;
  local_70 = "FrameGeneration";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3b90 = (ulonglong)uVar2;
  local_70 = "Upscaling";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3b98 = (ulonglong)uVar2;
  local_70 = "AntiAliasingMethod";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3ba0 = (ulonglong)uVar2;
  local_70 = "WindowsTextureLODGroups";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3ba8 = (ulonglong)uVar2;
  local_70 = "Textures";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3bb0 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b84afa0,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440687d0 FUN_1440687d0 body=55 status=ok
// SIG undefined FUN_1440687d0(void)

void FUN_1440687d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb4078 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb4078 = FUN_14171c317(FUN_1465fab77,uVar1,L"EOakPassiveHUDIconType");
  }
  return;
}



// FUNCTION 144068807 FUN_144068807 body=55 status=ok
// SIG undefined FUN_144068807(void)

void FUN_144068807(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb4090 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb4090 = FUN_14171c317(FUN_1465faba6,uVar1,L"EOakPassiveCaps");
  }
  return;
}



// FUNCTION 144068850 FUN_144068850 body=48 status=ok
// SIG undefined FUN_144068850(void)

longlong FUN_144068850(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440688e2 FUN_1440688e2 body=471 status=ok
// SIG undefined FUN_1440688e2(void)

void FUN_1440688e2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
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
  *param_2 = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 1) = 0;
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
  param_2[2] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 3) = 0;
  return;
}



// FUNCTION 144068aba FUN_144068aba body=50 status=ok
// SIG undefined FUN_144068aba(void)

void FUN_144068aba(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x10))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144068ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 144068c20 FUN_144068c20 body=42 status=ok
// SIG undefined FUN_144068c20(void)

void FUN_144068c20(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_2 + 8) == '\x01') {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 144068c90 FUN_144068c90 body=5266 status=ok
// SIG undefined FUN_144068c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144068c90(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b84df40,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b84e900,1,0);
  FUN_1400b22c2(&DAT_14cbb3c68,"hostile");
  atexit((_func_5014 *)&LAB_1440686c0);
  FUN_1400b22c2(&DAT_14cbb3c78,&DAT_14b84e928);
  atexit((_func_5014 *)&LAB_1440686d1);
  FUN_1400b22c2(&DAT_14cbb3c88,"locdisc");
  atexit((_func_5014 *)&LAB_1440686e2);
  FUN_1400b22c2(&DAT_14cbb3c98,"locunclaimed");
  atexit((_func_5014 *)&LAB_1440686f3);
  FUN_1400b22c2(&DAT_14cbb3ca8,"locclaimed");
  atexit((_func_5014 *)&LAB_144068704);
  FUN_1400b22c2(&DAT_14cbb3cb8,"mainmission");
  atexit((_func_5014 *)&LAB_144068715);
  FUN_1400b22c2(&DAT_14cbb3cc8,"sidemission");
  atexit((_func_5014 *)&LAB_144068726);
  FUN_1400b22c2(&DAT_14cbb3cd8,"tempmission");
  atexit((_func_5014 *)&LAB_144068737);
  FUN_1400b22c2(&DAT_14cbb3ce8,&DAT_149e62dd2);
  atexit((_func_5014 *)&LAB_144068748);
  FUN_1400b22c2(&DAT_14cbb3cf8,&DAT_14b84e971);
  atexit((_func_5014 *)&LAB_144068759);
  FUN_1400b22c2(&DAT_14cbb3d08,&DAT_14b84e975);
  atexit((_func_5014 *)&LAB_14406876a);
  FUN_1400b22c2(&DAT_14cbb3d18,"close");
  atexit((_func_5014 *)&LAB_14406877b);
  FUN_1400b22c2(&DAT_14cbb3d28,"behind");
  atexit((_func_5014 *)&LAB_14406878c);
  FUN_1400b22c2(&DAT_14cbb3d38,"above");
  atexit((_func_5014 *)&LAB_14406879d);
  FUN_1400b22c2(&DAT_14cbb3d48,"neutral");
  atexit((_func_5014 *)&LAB_1440687ae);
  FUN_1400b22c2(&DAT_14cbb3d58,"below");
  atexit((_func_5014 *)&LAB_1440687bf);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b84ef50);
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3d80 = (ulonglong)uVar1;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3d88 = (ulonglong)uVar1;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3d90 = (ulonglong)uVar1;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3d98 = (ulonglong)uVar1;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3da0 = (ulonglong)uVar1;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3da8 = (ulonglong)uVar1;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3db0 = (ulonglong)uVar1;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3db8 = (ulonglong)uVar1;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3dc0 = (ulonglong)uVar1;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3dc8 = (ulonglong)uVar1;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3dd0 = (ulonglong)uVar1;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3dd8 = (ulonglong)uVar1;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3de0 = (ulonglong)uVar1;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3de8 = (ulonglong)uVar1;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3df0 = (ulonglong)uVar1;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3df8 = (ulonglong)uVar1;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3e00 = (ulonglong)uVar1;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3e08 = (ulonglong)uVar1;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3e10 = (ulonglong)uVar1;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb3e18 = (ulonglong)uVar1;
  _DAT_14cbb3e24 = 0;
  FUN_14052b5e0(&DAT_14cbb3e20,"profile");
  _DAT_14cbb3e30 = 0;
  FUN_14052b5e0(&DAT_14cbb3e2c,"input");
  _DAT_14cbb3e3c = 0;
  FUN_14052b5e0(&DAT_14cbb3e38,"cursor");
  _DAT_14cbb3e48 = 0;
  FUN_14052b5e0(&DAT_14cbb3e44,"invert_x_axis");
  _DAT_14cbb3e54 = 0;
  FUN_14052b5e0(&DAT_14cbb3e50,"invert_y_axis");
  _DAT_14cbb3e60 = 0;
  FUN_14052b5e0(&DAT_14cbb3e5c,"sensitivity");
  _DAT_14cbb3e6c = 0;
  FUN_14052b5e0(&DAT_14cbb3e68,"friction_default",0);
  _DAT_14cbb3e78 = 0;
  FUN_14052b5e0(&DAT_14cbb3e74,"pc_scroll_sensitivity");
  _DAT_14cbb3e84 = 0;
  FUN_14052b5e0(&DAT_14cbb3e80,"max_idle_time");
  _DAT_14cbb3e90 = 0;
  FUN_14052b5e0(&DAT_14cbb3e8c);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b84f360);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b84f730,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b850150,2,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b850fd0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8512e0,1,&PTR_FUN_14b8512b0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b851660,1,&PTR_FUN_14b851610);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b851e10,1,&PTR_FUN_14b851de0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b851ec0,1,0);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14b8524f0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b852530);
  _DAT_14cbb40ec = 0;
  FUN_14052b5e0(&DAT_14cbb40e8,"character",0);
  _DAT_14cbb40f8 = 0;
  FUN_14052b5e0(&DAT_14cbb40f4,"profile",0);
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4100 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4108 = (ulonglong)uVar1;
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4110 = (ulonglong)uVar1;
  local_70 = "entry_sets";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4118 = (ulonglong)uVar1;
  local_70 = "entries";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4120 = (ulonglong)uVar1;
  local_70 = "menu_title";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4128 = (ulonglong)uVar1;
  local_70 = "actions";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4130 = (ulonglong)uVar1;
  local_70 = "loc_text";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4138 = (ulonglong)uVar1;
  local_70 = "desc_text";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4140 = (ulonglong)uVar1;
  local_70 = "style";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4148 = (ulonglong)uVar1;
  local_70 = "horizontal";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4150 = (ulonglong)uVar1;
  local_70 = "entry_set_default";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4158 = (ulonglong)uVar1;
  local_70 = "required_nexus_layer";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4160 = (ulonglong)uVar1;
  local_70 = "tooltip_key";
  local_68 = 0xb;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4168 = (ulonglong)uVar1;
  local_70 = "set_push";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4170 = (ulonglong)uVar1;
  local_70 = "exit_game";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4178 = (ulonglong)uVar1;
  local_70 = "back";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4180 = (ulonglong)uVar1;
  local_70 = "back_actions";
  local_68 = 0xc;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4188 = (ulonglong)uVar1;
  _DAT_14cbb4190 = 0;
  uRam000000014cbb4198 = 0;
  _DAT_14cbb41a0 = 0;
  DAT_14cbb41a8 = 0;
  uRam000000014cbb41b0 = 0;
  FUN_1446ddda2(&DAT_14cbb4190);
  atexit((_func_5014 *)&LAB_14406883e);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b8526a0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b852900,4,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b852a30,1,0);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b852af0,1,0);
  local_70 = "state_remove_primary";
  local_68 = 0x14;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4260 = (ulonglong)uVar1;
  local_70 = "state_add_primary";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4268 = (ulonglong)uVar1;
  local_70 = "state_add";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4270 = (ulonglong)uVar1;
  local_70 = "state_rem";
  local_68 = 9;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4278 = (ulonglong)uVar1;
  local_70 = "set_menu_state";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4280 = (ulonglong)uVar1;
  local_70 = "set_active_options";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbb4288 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14cbb4290,L"BackpackSlotFocused",1);
  FUN_1446f470e(&DAT_14cbb42a0,L"BackpackSlotUnfocused",1);
  FUN_1446f470e(&DAT_14cbb42b0,L"BuyItem",1);
  FUN_1446f470e(&DAT_14cbb42c0,L"ClickAssaultRifle",1);
  FUN_1446f470e(&DAT_14cbb42d0,L"ClickClassMod",1);
  FUN_1446f470e(&DAT_14cbb42e0,L"ClickEnhancement",1);
  FUN_1446f470e(&DAT_14cbb42f0,L"ClickGadget",1);
  FUN_1446f470e(&DAT_14cbb4300,L"ClickGrenade",1);
  FUN_1446f470e(&DAT_14cbb4310,L"ClickHeavyWeapon",1);
  FUN_1446f470e(&DAT_14cbb4320,L"ClickPistol",1);
  FUN_1446f470e(&DAT_14cbb4330,L"ClickRepKit",1);
  FUN_1446f470e(&DAT_14cbb4340,L"ClickShield",1);
  FUN_1446f470e(&DAT_14cbb4350,L"ClickShotgun",1);
  FUN_1446f470e(&DAT_14cbb4360,L"ClickSMG",1);
  FUN_1446f470e(&DAT_14cbb4370,L"ClickSniper",1);
  FUN_1446f470e(&DAT_14cbb4380,L"CloseBackpack",1);
  FUN_1446f470e(&DAT_14cbb4390,L"ClosePlayerStats",1);
  FUN_1446f470e(&DAT_14cbb43a0,L"CloseRewardCenter",1);
  FUN_1446f470e(&DAT_14cbb43b0,L"CompareStart",1);
  FUN_1446f470e(&DAT_14cbb43c0,L"CompareStop",1);
  FUN_1446f470e(&DAT_14cbb43d0,L"DropItem",1);
  FUN_1446f470e(&DAT_14cbb43e0,L"EquipAssaultRifle",1);
  FUN_1446f470e(&DAT_14cbb43f0,L"EquipClassMod",1);
  FUN_1446f470e(&DAT_14cbb4400,L"EquipEnhancement",1);
  FUN_1446f470e(&DAT_14cbb4410,L"EquipGadget",1);
  FUN_1446f470e(&DAT_14cbb4420,L"EquipGrenade",1);
  FUN_1446f470e(&DAT_14cbb4430,L"EquipHeavyWeapon",1);
  FUN_1446f470e(&DAT_14cbb4440,L"EquipItem",1);
  FUN_1446f470e(&DAT_14cbb4450,L"EquipPistol",1);
  FUN_1446f470e(&DAT_14cbb4460,L"EquipRepKit",1);
  FUN_1446f470e(&DAT_14cbb4470,L"EquipShield",1);
  FUN_1446f470e(&DAT_14cbb4480,L"EquipShotgun",1);
  FUN_1446f470e(&DAT_14cbb4490,L"EquipSMG",1);
  FUN_1446f470e(&DAT_14cbb44a0,L"EquipSniper",1);
  FUN_1446f470e(&DAT_14cbb44b0,L"Error",1);
  FUN_1446f470e(&DAT_14cbb44c0,L"FirmwareTransferComplete",1);
  FUN_1446f470e(&DAT_14cbb44d0,L"GearSlotFocused",1);
  FUN_1446f470e(&DAT_14cbb44e0,L"GearSlotUnfocused",1);
  FUN_1446f470e(&DAT_14cbb44f0,L"MarkItem",1);
  FUN_1446f470e(&DAT_14cbb4500,L"MarkItemBank",1);
  FUN_1446f470e(&DAT_14cbb4510,L"MarkItemFavorite",1);
  FUN_1446f470e(&DAT_14cbb4520,L"MarkItemTrash",1);
  FUN_1446f470e(&DAT_14cbb4530,L"OpenBackpack",1);
  FUN_1446f470e(&DAT_14cbb4540,L"OpenLegendaryReward",1);
  FUN_1446f470e(&DAT_14cbb4550,L"OpenPlayerStats",1);
  FUN_1446f470e(&DAT_14cbb4560,L"OpenReward",1);
  FUN_1446f470e(&DAT_14cbb4570,L"OpenRewardCenter",1);
  FUN_1446f470e(&DAT_14cbb4580,L"PutItemInTransferSlot",1);
  FUN_1446f470e(&DAT_14cbb4590,L"RemoveItemFromTransferSlot",1);
  FUN_1446f470e(&DAT_14cbb45a0,L"SellItem",1);
  FUN_1446f470e(&DAT_14cbb45b0,L"StartEchoLogsMenuTutorial",1);
  FUN_1446f470e(&DAT_14cbb45c0,L"StartEquipMenuTutorial",1);
  FUN_1446f470e(&DAT_14cbb45d0,L"StartEquippedFirmwareTutorial",1);
  FUN_1446f470e(&DAT_14cbb45e0,L"StartFirmwareTransferTutorial",1);
  FUN_1446f470e(&DAT_14cbb45f0,L"StartLostLootTutorial",1);
  FUN_1446f470e(&DAT_14cbb4600,L"StartRewardCenterTutorial",1);
  FUN_1446f470e(&DAT_14cbb4610,L"StartVendingMachineTutorial",1);
  FUN_1446f470e(&DAT_14cbb4620,L"TakeItem",1);
  FUN_1446f470e(&DAT_14cbb4630,L"TrashItem",1);
  FUN_1446f470e(&DAT_14cbb4640,L"UnequipItem",1);
  FUN_1446f470e(&DAT_14cbb4650,L"WeaponSlotFocused",1);
  FUN_1446f470e(&DAT_14cbb4660,L"WeaponSlotUnfocused",1);
  local_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b857e50,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406a124 FUN_14406a124 body=47 status=ok
// SIG undefined FUN_14406a124(void)

longlong FUN_14406a124(void)

{
  if (DAT_14cbb48f0 == 0) {
    FUN_14000fc22(&DAT_14cbb48f0,&PTR_FUN_14b85f0e0);
  }
  return DAT_14cbb48f0;
}



// FUNCTION 14406a153 FUN_14406a153 body=47 status=ok
// SIG undefined FUN_14406a153(void)

longlong FUN_14406a153(void)

{
  if (DAT_14cbb4900 == 0) {
    FUN_14000fc22(&DAT_14cbb4900,&PTR_FUN_14b85f228);
  }
  return DAT_14cbb4900;
}



// FUNCTION 14406a182 FUN_14406a182 body=2384 status=ok
// SIG undefined FUN_14406a182(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14406a182(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
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
  _DAT_14cbb4688 = (ulonglong)uVar1;
  local_40 = "state_remove_primary";
  local_38 = 0x14;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb4690 = (ulonglong)uVar1;
  local_40 = "state_add_primary";
  local_38 = 0x11;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb4698 = (ulonglong)uVar1;
  local_40 = "state_add";
  local_38 = 9;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb46a0 = (ulonglong)uVar1;
  local_40 = "state_rem";
  local_38 = 9;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb46a8 = (ulonglong)uVar1;
  local_40 = "set_menu_state";
  local_38 = 0xe;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb46b0 = (ulonglong)uVar1;
  local_40 = "set_active_options";
  local_38 = 0x12;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb46b8 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14cbb46c0,L"AddWaypoint",1);
  FUN_1446f470e(&DAT_14cbb46d0,L"CantDo",1);
  FUN_1446f470e(&DAT_14cbb46e0,L"Center",1);
  FUN_1446f470e(&DAT_14cbb46f0,L"DragEnd",1);
  FUN_1446f470e(&DAT_14cbb4700,L"DragMoved",1);
  FUN_1446f470e(&DAT_14cbb4710,L"DragStart",1);
  FUN_1446f470e(&DAT_14cbb4720,L"ExploreMenuClose",1);
  FUN_1446f470e(&DAT_14cbb4730,L"ExploreMenuOpen",1);
  FUN_1446f470e(&DAT_14cbb4740,L"InteractableElementRollOver",1);
  FUN_1446f470e(&DAT_14cbb4750,L"LocateOnMap",1);
  FUN_1446f470e(&DAT_14cbb4760,L"NewMap",1);
  FUN_1446f470e(&DAT_14cbb4770,L"RemoveWaypoint",1);
  FUN_1446f470e(&DAT_14cbb4780,L"Select",1);
  FUN_1446f470e(&DAT_14cbb4790,L"StartBigMapEndGameMenuTutorial",1);
  FUN_1446f470e(&DAT_14cbb47a0,L"StartBigMapIntroMenuTutorial",1);
  FUN_1446f470e(&DAT_14cbb47b0,L"ToggleLegendItem",1);
  FUN_1446f470e(&DAT_14cbb47c0,L"ZoomIn",1);
  FUN_1446f470e(&DAT_14cbb47d0,L"ZoomOut",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b85db60,1,0);
  FUN_1446f470e(&DAT_14cbb47f8,L"AcceptContract",1);
  FUN_1446f470e(&DAT_14cbb4808,L"AcceptMission",1);
  FUN_1446f470e(&DAT_14cbb4818,L"ActivateMayhemMode",1);
  FUN_1446f470e(&DAT_14cbb4828,L"ActivityComplete",1);
  FUN_1446f470e(&DAT_14cbb4838,L"ActivityDiscovered",1);
  FUN_1446f470e(&DAT_14cbb4848,L"CollectibleFound",1);
  FUN_1446f470e(&DAT_14cbb4858,L"CompleteChallenge",1);
  FUN_1446f470e(&DAT_14cbb4868,L"CompleteContract",1);
  FUN_1446f470e(&DAT_14cbb4878,L"CompleteMission",1);
  FUN_1446f470e(&DAT_14cbb4888,L"DeactivateMayhemMode",1);
  FUN_1446f470e(&DAT_14cbb4898,L"DiscoverLocation",1);
  FUN_1446f470e(&DAT_14cbb48a8,L"EnterLocation",1);
  FUN_1446f470e(&DAT_14cbb48b8,L"NotifyLevelUp",1);
  FUN_1446f470e(&DAT_14cbb48c8,L"NotifyReachLevel2",1);
  FUN_1446f470e(&DAT_14cbb48d8,L"PressButtonPrompt",1);
  FUN_1446f470e(&DAT_14cbb48e8,L"TakedownCountdown",1);
  FUN_1446f470e(&DAT_14cbb48f8,L"TakedownGo",1);
  FUN_1446f470e(&DAT_14cbb4908,L"TrackContract",1);
  FUN_1446f470e(&DAT_14cbb4918,L"TrackMission",1);
  FUN_1446f470e(&DAT_14cbb4928,L"UnlockChallenge",1);
  FUN_1446f470e(&DAT_14cbb4938,L"UnlockMode",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b85fc40,1,0);
  FUN_1446f470e(&DAT_14cbb4960,L"AllPlayersReady",1);
  FUN_1446f470e(&DAT_14cbb4970,L"CycleRapSheetCharacter",1);
  FUN_1446f470e(&DAT_14cbb4980,L"LineupCharacterClick",1);
  FUN_1446f470e(&DAT_14cbb4990,L"LineupCharacterHover",1);
  FUN_1446f470e(&DAT_14cbb49a0,L"LineupIntro",1);
  FUN_1446f470e(&DAT_14cbb49b0,L"MakeCharacterChoice",1);
  FUN_1446f470e(&DAT_14cbb49c0,L"TransitionBackToLineup",1);
  FUN_1446f470e(&DAT_14cbb49d0,L"TransitionToCharacterSelected",1);
  FUN_1446f470e(&DAT_14cbb49e0,L"TransitionToRapSheet",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b860c90,1,0);
  FUN_1446f470e(&DAT_14cbb4a08,L"OnPulse",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8610e0,1,0);
  FUN_1446f470e(&DAT_14cbb4a30,L"ApplyCustomization",1);
  FUN_1446f470e(&DAT_14cbb4a40,L"CantDo",1);
  FUN_1446f470e(&DAT_14cbb4a50,L"Customization_Hover",1);
  FUN_1446f470e(&DAT_14cbb4a60,L"Customization_Select",1);
  FUN_1446f470e(&DAT_14cbb4a70,L"CustomizationMenu_Hover",1);
  FUN_1446f470e(&DAT_14cbb4a80,L"CustomizationMenu_Select",1);
  FUN_1446f470e(&DAT_14cbb4a90,L"HideUI",1);
  FUN_1446f470e(&DAT_14cbb4aa0,L"ShowUI",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b861f30,1,0);
  FUN_1446f470e(&DAT_14cbb4ac8,L"InsufficientPoints",1);
  FUN_1446f470e(&DAT_14cbb4ad8,L"StartTutorial",1);
  FUN_1446f470e(&DAT_14cbb4ae8,L"Upgraded",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8626a0,1,0);
  FUN_1446f470e(&DAT_14cbb4b10,L"HoldActionLoop",1);
  FUN_1446f470e(&DAT_14cbb4b20,L"HoldActionStart",1);
  FUN_1446f470e(&DAT_14cbb4b30,L"HoldActionStop",1);
  FUN_1446f470e(&DAT_14cbb4b40,L"SliderDown",1);
  FUN_1446f470e(&DAT_14cbb4b50,L"SliderError",1);
  FUN_1446f470e(&DAT_14cbb4b60,L"SliderUp",1);
  FUN_1446f470e(&DAT_14cbb4b70,L"StepperLeft",1);
  FUN_1446f470e(&DAT_14cbb4b80,L"StepperRight",1);
  FUN_1446f470e(&DAT_14cbb4b90,L"SwitchOff",1);
  FUN_1446f470e(&DAT_14cbb4ba0,L"SwitchOn",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8636f0,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406aad4 FUN_14406aad4 body=2422 status=ok
// SIG undefined FUN_14406aad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14406aad4(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbb4bc8 = (ulonglong)uVar1;
  local_50 = "state_remove_primary";
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbb4bd0 = (ulonglong)uVar1;
  local_50 = "state_add_primary";
  local_48 = 0x11;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbb4bd8 = (ulonglong)uVar1;
  local_50 = "state_add";
  local_48 = 9;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbb4be0 = (ulonglong)uVar1;
  local_50 = "state_rem";
  local_48 = 9;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbb4be8 = (ulonglong)uVar1;
  local_50 = "set_menu_state";
  local_48 = 0xe;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbb4bf0 = (ulonglong)uVar1;
  local_50 = "set_active_options";
  local_48 = 0x12;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbb4bf8 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14cbb4c00,L"FailToUseGadget",1);
  FUN_1446f470e(&DAT_14cbb4c10,L"FailToUsePrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4c20,L"FailToUseSecondarySkill",1);
  FUN_1446f470e(&DAT_14cbb4c30,L"GainChargeGadget",1);
  FUN_1446f470e(&DAT_14cbb4c40,L"GainChargePrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4c50,L"GainChargeSecondarySkill",1);
  FUN_1446f470e(&DAT_14cbb4c60,L"ReadyToUseGadgetGrenade",1);
  FUN_1446f470e(&DAT_14cbb4c70,L"ReadyToUseGadgetHeavyWeapon",1);
  FUN_1446f470e(&DAT_14cbb4c80,L"ReadyToUseGadgetOther",1);
  FUN_1446f470e(&DAT_14cbb4c90,L"ReadyToUsePrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4ca0,L"ReadyToUseSecondarySkill",1);
  FUN_1446f470e(&DAT_14cbb4cb0,L"StartReadyCountdownGadget",1);
  FUN_1446f470e(&DAT_14cbb4cc0,L"StartReadyCountdownPrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4cd0,L"StartReadyCountdownSecondarySkill",1);
  FUN_1446f470e(&DAT_14cbb4ce0,L"TickReadyCountdownOneGadget",1);
  FUN_1446f470e(&DAT_14cbb4cf0,L"TickReadyCountdownOnePrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4d00,L"TickReadyCountdownOneSecondarySkill",1);
  FUN_1446f470e(&DAT_14cbb4d10,L"TickReadyCountdownThreeGadget",1);
  FUN_1446f470e(&DAT_14cbb4d20,L"TickReadyCountdownThreePrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4d30,L"TickReadyCountdownThreeSecondarySkill",1);
  FUN_1446f470e(&DAT_14cbb4d40,L"TickReadyCountdownTwoGadget",1);
  FUN_1446f470e(&DAT_14cbb4d50,L"TickReadyCountdownTwoPrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4d60,L"TickReadyCountdownTwoSecondarySkill",1);
  FUN_1446f470e(&DAT_14cbb4d70,L"UseGadget",1);
  FUN_1446f470e(&DAT_14cbb4d80,L"UsePrimarySkill",1);
  FUN_1446f470e(&DAT_14cbb4d90,L"UseSecondarySkill",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b866170,1,0);
  FUN_1446f470e(&DAT_14cbb4db8,L"DisplayGenericSlideOut",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b866650,1,0);
  FUN_1446f470e(&DAT_14cbb4de0,L"InspectNewItem",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b866b10,1,0);
  FUN_1446f470e(&DAT_14cbb4e08,L"ListCollapsed",1);
  FUN_1446f470e(&DAT_14cbb4e18,L"ListExpanded",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b867120,1,0);
  FUN_1446f470e(&DAT_14cbb4e40,L"AppearAmmo",1);
  FUN_1446f470e(&DAT_14cbb4e50,L"AppearCash",1);
  FUN_1446f470e(&DAT_14cbb4e60,L"AppearCommon",1);
  FUN_1446f470e(&DAT_14cbb4e70,L"AppearDLC",1);
  FUN_1446f470e(&DAT_14cbb4e80,L"AppearEpic",1);
  FUN_1446f470e(&DAT_14cbb4e90,L"AppearEridium",1);
  FUN_1446f470e(&DAT_14cbb4ea0,L"AppearLegendary",1);
  FUN_1446f470e(&DAT_14cbb4eb0,L"AppearMail",1);
  FUN_1446f470e(&DAT_14cbb4ec0,L"AppearRare",1);
  FUN_1446f470e(&DAT_14cbb4ed0,L"AppearUncommon",1);
  FUN_1446f470e(&DAT_14cbb4ee0,L"CashLower",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b868330,1,0);
  FUN_1446f470e(&DAT_14cbb4f08,L"ContinueCampaign",1);
  FUN_1446f470e(&DAT_14cbb4f18,L"CoopRelinquish",1);
  FUN_1446f470e(&DAT_14cbb4f28,L"DifficultySwapEasy",1);
  FUN_1446f470e(&DAT_14cbb4f38,L"DifficultySwapHard",1);
  FUN_1446f470e(&DAT_14cbb4f48,L"DifficultySwapMedium",1);
  FUN_1446f470e(&DAT_14cbb4f58,L"DifficultySwapVeryHard",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b868f00,1,0);
  FUN_1446f470e(&DAT_14cbb4f80,L"ElementClicked",1);
  FUN_1446f470e(&DAT_14cbb4f90,L"ElementClickedError",1);
  FUN_1446f470e(&DAT_14cbb4fa0,L"ElementFocused",1);
  FUN_1446f470e(&DAT_14cbb4fb0,L"ElementUnfocused",1);
  FUN_1446f470e(&DAT_14cbb4fc0,L"EscapeInput",1);
  FUN_1446f470e(&DAT_14cbb4fd0,L"MenuClose",1);
  FUN_1446f470e(&DAT_14cbb4fe0,L"MenuOpen",1);
  FUN_1446f470e(&DAT_14cbb4ff0,L"ScrollDown",1);
  FUN_1446f470e(&DAT_14cbb5000,L"ScrollUp",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b869e30,1,0);
  FUN_1446f470e(&DAT_14cbb5028,L"ElementFocused",1);
  FUN_1446f470e(&DAT_14cbb5038,L"ElementUnfocused",1);
  FUN_1446f470e(&DAT_14cbb5048,L"OnMenuTutorialSequenceClosed",1);
  FUN_1446f470e(&DAT_14cbb5058,L"OnMenuTutorialSequenceNext",1);
  FUN_1446f470e(&DAT_14cbb5068,L"OnMenuTutorialSequenceOpen",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86a880,1,0);
  FUN_1446f470e(&DAT_14cbb5090,L"MissionAccepted",1);
  FUN_1446f470e(&DAT_14cbb50a0,L"MissionAcceptedAndTracked",1);
  FUN_1446f470e(&DAT_14cbb50b0,L"MissionTracked",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86b020,1,0);
  FUN_1446f470e(&DAT_14cbb50d8,L"StartMissionLogMenuTutorial",1);
  FUN_1446f470e(&DAT_14cbb50e8,L"StartMissionReplayMenuTutorial",1);
  FUN_1446f470e(&DAT_14cbb50f8,L"TrackMission",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86b720,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406b44c FUN_14406b44c body=47 status=ok
// SIG undefined FUN_14406b44c(void)

longlong FUN_14406b44c(void)

{
  if (DAT_14cbb5688 == 0) {
    FUN_14073dd9a(&DAT_14cbb5688,&PTR_FUN_14b873360);
  }
  return DAT_14cbb5688;
}



// FUNCTION 14406b47b FUN_14406b47b body=47 status=ok
// SIG undefined FUN_14406b47b(void)

longlong FUN_14406b47b(void)

{
  if (DAT_14cbb5668 == 0) {
    FUN_14000fc22(&DAT_14cbb5668,&PTR_FUN_14b873160);
  }
  return DAT_14cbb5668;
}



// FUNCTION 14406b4aa FUN_14406b4aa body=47 status=ok
// SIG undefined FUN_14406b4aa(void)

longlong FUN_14406b4aa(void)

{
  if (DAT_14cbb5678 == 0) {
    FUN_14000fc22(&DAT_14cbb5678,&PTR_FUN_14b8732a8);
  }
  return DAT_14cbb5678;
}



// FUNCTION 14406b4de FUN_14406b4de body=35 status=ok
// SIG undefined FUN_14406b4de(void)

void FUN_14406b4de(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e62c38(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8733a0;
  return;
}



// FUNCTION 14406b502 FUN_14406b502 body=227 status=ok
// SIG undefined FUN_14406b502(void)

longlong FUN_14406b502(void)

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
  if (DAT_14cbb5680 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418b752a;
    local_38 = &LAB_14406b4db;
    local_40 = FUN_14406b4de;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIScript_Takedown",&DAT_14cbb5680,&DAT_14406b4da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5680;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406b5e6 FUN_14406b5e6 body=38 status=ok
// SIG undefined FUN_14406b5e6(void)

undefined8 FUN_14406b5e6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406b60c FUN_14406b60c body=2469 status=ok
// SIG undefined FUN_14406b60c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14406b60c(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
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
  _DAT_14cbb5120 = (ulonglong)uVar1;
  local_40 = "state_remove_primary";
  local_38 = 0x14;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb5128 = (ulonglong)uVar1;
  local_40 = "state_add_primary";
  local_38 = 0x11;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb5130 = (ulonglong)uVar1;
  local_40 = "state_add";
  local_38 = 9;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb5138 = (ulonglong)uVar1;
  local_40 = "state_rem";
  local_38 = 9;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb5140 = (ulonglong)uVar1;
  local_40 = "set_menu_state";
  local_38 = 0xe;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb5148 = (ulonglong)uVar1;
  local_40 = "set_active_options";
  local_38 = 0x12;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb5150 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14cbb5158,L"HideObjectives",1);
  FUN_1446f470e(&DAT_14cbb5168,L"MissionCompleted",1);
  FUN_1446f470e(&DAT_14cbb5178,L"MissionFailed",1);
  FUN_1446f470e(&DAT_14cbb5188,L"ObjectiveCompleted",1);
  FUN_1446f470e(&DAT_14cbb5198,L"ObjectiveFailed",1);
  FUN_1446f470e(&DAT_14cbb51a8,L"ShowObjectives",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86c2b0,1,0);
  FUN_1446f470e(&DAT_14cbb51d0,L"ResetDefault",1);
  FUN_1446f470e(&DAT_14cbb51e0,L"SafeAreaAdjustDown",1);
  FUN_1446f470e(&DAT_14cbb51f0,L"SafeAreaAdjustUp",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86ca40,1,0);
  FUN_1446f470e(&DAT_14cbb5218,L"OutOfBounds",1);
  FUN_1446f470e(&DAT_14cbb5228,L"Returning",1);
  FUN_1446f470e(&DAT_14cbb5238,L"Suspense",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86d190,1,0);
  FUN_1446f470e(&DAT_14cbb5260,L"TakePhoto",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86d640,1,0);
  FUN_1446f470e(&DAT_14cbb5288,L"FailToUseRepairKit",1);
  FUN_1446f470e(&DAT_14cbb5298,L"GainChargeRepairKit",1);
  FUN_1446f470e(&DAT_14cbb52a8,L"ReadyToUseRepairKit",1);
  FUN_1446f470e(&DAT_14cbb52b8,L"StartReadyCountdownRepairKit",1);
  FUN_1446f470e(&DAT_14cbb52c8,L"TickReadyCountdownOneRepairKit",1);
  FUN_1446f470e(&DAT_14cbb52d8,L"TickReadyCountdownThreeRepairKit",1);
  FUN_1446f470e(&DAT_14cbb52e8,L"TickReadyCountdownTwoRepairKit",1);
  FUN_1446f470e(&DAT_14cbb52f8,L"UseRepairKit",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86e580,1,0);
  FUN_1446f470e(&DAT_14cbb5320,L"NotEnoughFuelError",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b86ea50,1,0);
  FUN_1446f470e(&DAT_14cbb5348,L"ActionSkillCooldown",1);
  FUN_1446f470e(&DAT_14cbb5358,L"ChangeTreeOne",1);
  FUN_1446f470e(&DAT_14cbb5368,L"ChangeTreeThree",1);
  FUN_1446f470e(&DAT_14cbb5378,L"ChangeTreeTwo",1);
  FUN_1446f470e(&DAT_14cbb5388,L"EquipActionSkill",1);
  FUN_1446f470e(&DAT_14cbb5398,L"EquipAugment",1);
  FUN_1446f470e(&DAT_14cbb53a8,L"EquipCapstone",1);
  FUN_1446f470e(&DAT_14cbb53b8,L"EquipSkill",1);
  FUN_1446f470e(&DAT_14cbb53c8,L"Focused",1);
  FUN_1446f470e(&DAT_14cbb53d8,L"InactiveNode",1);
  FUN_1446f470e(&DAT_14cbb53e8,L"InsufficientPoints",1);
  FUN_1446f470e(&DAT_14cbb53f8,L"InvestPointFour",1);
  FUN_1446f470e(&DAT_14cbb5408,L"InvestPointMax",1);
  FUN_1446f470e(&DAT_14cbb5418,L"InvestPointOne",1);
  FUN_1446f470e(&DAT_14cbb5428,L"InvestPointThree",1);
  FUN_1446f470e(&DAT_14cbb5438,L"InvestPointTwo",1);
  FUN_1446f470e(&DAT_14cbb5448,L"OpenPlayerStats",1);
  FUN_1446f470e(&DAT_14cbb5458,L"RemovePoint",1);
  FUN_1446f470e(&DAT_14cbb5468,L"ResetPoints",1);
  FUN_1446f470e(&DAT_14cbb5478,L"StartTutorialAugments",1);
  FUN_1446f470e(&DAT_14cbb5488,L"StartTutorialCapstones",1);
  FUN_1446f470e(&DAT_14cbb5498,L"StartTutorialIntro",1);
  FUN_1446f470e(&DAT_14cbb54a8,L"StartTutorialRespec",1);
  FUN_1446f470e(&DAT_14cbb54b8,L"StartTutorialSkills",1);
  FUN_1446f470e(&DAT_14cbb54c8,L"StartTutorialSpecializations",1);
  FUN_1446f470e(&DAT_14cbb54d8,L"UnequipActionSkill",1);
  FUN_1446f470e(&DAT_14cbb54e8,L"UnequipAugment",1);
  FUN_1446f470e(&DAT_14cbb54f8,L"UnequipCapstone",1);
  FUN_1446f470e(&DAT_14cbb5508,L"UnequipSkill",1);
  FUN_1446f470e(&DAT_14cbb5518,L"Unfocused",1);
  FUN_1446f470e(&DAT_14cbb5528,L"UnlockBranches",1);
  FUN_1446f470e(&DAT_14cbb5538,L"UnlockSkill",1);
  FUN_1446f470e(&DAT_14cbb5548,L"UnlockSlot",1);
  FUN_1446f470e(&DAT_14cbb5558,L"UnlockTier",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b871a40,1,0);
  FUN_1446f470e(&DAT_14cbb5580,L"FriendRequestReceived",1);
  FUN_1446f470e(&DAT_14cbb5590,L"PromotedToPartyLeader",1);
  FUN_1446f470e(&DAT_14cbb55a0,L"SessionInviteReceived",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8721f0,1,0);
  FUN_1446f470e(&DAT_14cbb55c8,L"NavBackward",1);
  FUN_1446f470e(&DAT_14cbb55d8,L"NavEntered",1);
  FUN_1446f470e(&DAT_14cbb55e8,L"NavExited",1);
  FUN_1446f470e(&DAT_14cbb55f8,L"NavForward",1);
  FUN_1446f470e(&DAT_14cbb5608,L"SubNavBackward",1);
  FUN_1446f470e(&DAT_14cbb5618,L"SubNavEntered",1);
  FUN_1446f470e(&DAT_14cbb5628,L"SubNavExited",1);
  FUN_1446f470e(&DAT_14cbb5638,L"SubNavForward",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b873020,1,0);
  FUN_1446f470e(&DAT_14cbb5660,L"ChangeTakedownMode",1);
  FUN_1446f470e(&DAT_14cbb5670,L"LaunchTakedown",1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b873640,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406bfb4 FUN_14406bfb4 body=47 status=ok
// SIG undefined FUN_14406bfb4(void)

longlong FUN_14406bfb4(void)

{
  if (DAT_14cbb5890 == 0) {
    FUN_14000fc22(&DAT_14cbb5890,&PTR_FUN_14b875e58);
  }
  return DAT_14cbb5890;
}



// FUNCTION 14406bfe3 FUN_14406bfe3 body=47 status=ok
// SIG undefined FUN_14406bfe3(void)

longlong FUN_14406bfe3(void)

{
  if (DAT_14cbb58d0 == 0) {
    FUN_14000fc22(&DAT_14cbb58d0,&PTR_FUN_14b8762e8);
  }
  return DAT_14cbb58d0;
}



// FUNCTION 14406c012 FUN_14406c012 body=47 status=ok
// SIG undefined FUN_14406c012(void)

longlong FUN_14406c012(void)

{
  if (DAT_14cbb58e0 == 0) {
    FUN_14000fc22(&DAT_14cbb58e0,&PTR_FUN_14b876408);
  }
  return DAT_14cbb58e0;
}



// FUNCTION 14406c041 FUN_14406c041 body=55 status=ok
// SIG undefined FUN_14406c041(void)

void FUN_14406c041(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb59c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb59c0 = FUN_14171c317(FUN_1465ff7bc,uVar1,L"EOakUISettingsMappingType");
  }
  return;
}



// FUNCTION 14406c078 FUN_14406c078 body=55 status=ok
// SIG undefined FUN_14406c078(void)

void FUN_14406c078(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5c28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5c28 = FUN_140002ddd(FUN_14406c0af,uVar1,L"OakUISlideShowManagerDef");
  }
  return;
}



// FUNCTION 14406c0af FUN_14406c0af body=47 status=ok
// SIG undefined FUN_14406c0af(void)

longlong FUN_14406c0af(void)

{
  if (DAT_14cbb5c20 == 0) {
    FUN_14086a14e(&DAT_14cbb5c20,&PTR_FUN_14b87c390);
  }
  return DAT_14cbb5c20;
}



// FUNCTION 14406c0de FUN_14406c0de body=48 status=ok
// SIG undefined FUN_14406c0de(void)

void FUN_14406c0de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b87d650;
  return;
}



// FUNCTION 14406c10e FUN_14406c10e body=48 status=ok
// SIG undefined FUN_14406c10e(void)

longlong FUN_14406c10e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1459345fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c13e FUN_14406c13e body=48 status=ok
// SIG undefined FUN_14406c13e(void)

longlong FUN_14406c13e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1459345fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c16e FUN_14406c16e body=48 status=ok
// SIG undefined FUN_14406c16e(void)

longlong FUN_14406c16e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1459345fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c19e FUN_14406c19e body=48 status=ok
// SIG undefined FUN_14406c19e(void)

longlong FUN_14406c19e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1410bf6a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c1ce FUN_14406c1ce body=48 status=ok
// SIG undefined FUN_14406c1ce(void)

longlong FUN_14406c1ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1410bf6a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c1fe FUN_14406c1fe body=48 status=ok
// SIG undefined FUN_14406c1fe(void)

longlong FUN_14406c1fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1410bf6a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c2b2 FUN_14406c2b2 body=57 status=ok
// SIG undefined FUN_14406c2b2(void)

void FUN_14406c2b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5b28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5b28 = FUN_140002ddd(FUN_1465ffe3b,uVar1,L"OakSkillComponentUIHandlerData");
  }
  return;
}



// FUNCTION 14406c350 FUN_14406c350 body=52 status=ok
// SIG undefined FUN_14406c350(void)

void FUN_14406c350(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14406c3ee FUN_14406c3ee body=268 status=ok
// SIG undefined FUN_14406c3ee(void)

void FUN_14406c3ee(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2,0,0xe8);
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
  *param_2 = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  memset(param_2 + 3,0,0xd0);
  return;
}



// FUNCTION 14406c520 FUN_14406c520 body=57 status=ok
// SIG undefined FUN_14406c520(void)

void FUN_14406c520(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5c10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5c10 = FUN_140002ddd(FUN_146600366,uVar1,L"OakUISkillTreesDef");
  }
  return;
}



// FUNCTION 14406c55a FUN_14406c55a body=29 status=ok
// SIG undefined FUN_14406c55a(void)

undefined8 FUN_14406c55a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c5ee FUN_14406c5ee body=180 status=ok
// SIG undefined FUN_14406c5ee(void)

undefined8 FUN_14406c5ee(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x38);
    do {
      if (*(char *)(param_3 + 2) == '\0') {
        *(undefined1 *)(puVar5 + -5) = 0;
        puVar5[-6] = param_3[1];
      }
      puVar5[-4] = param_3[3];
      puVar5[-3] = param_3[4];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
      uVar3 = *(undefined4 *)(param_3 + 6);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_3 + 5);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      if (puVar5 + -7 != param_3) {
        iVar1 = *(int *)(param_3 + 8);
        _Src = (void *)param_3[7];
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 9;
      puVar5 = puVar5 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14406c6ca FUN_14406c6ca body=59 status=ok
// SIG undefined FUN_14406c6ca(void)

undefined8 FUN_14406c6ca(longlong *param_1)

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



// FUNCTION 14406c710 FUN_14406c710 body=143 status=ok
// SIG undefined FUN_14406c710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14406c710(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b87d7c0;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a171dc0;
    if ((*(char *)(param_2 + 2) != '\0') &&
       (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 14406c7f2 FUN_14406c7f2 body=154 status=ok
// SIG undefined FUN_14406c7f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14406c7f2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b87d7c0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406c88c FUN_14406c88c body=55 status=ok
// SIG undefined FUN_14406c88c(void)

void FUN_14406c88c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5c28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5c28 = FUN_140002ddd(FUN_14406c0af,uVar1,L"OakUISlideShowManagerDef");
  }
  return;
}



// FUNCTION 14406c8c4 FUN_14406c8c4 body=118 status=ok
// SIG undefined FUN_14406c8c4(void)

undefined8 FUN_14406c8c4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbe4090 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbe4090,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406c93c FUN_14406c93c body=117 status=ok
// SIG undefined FUN_14406c93c(void)

undefined8 * FUN_14406c93c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 14406c9c3 FUN_14406c9c3 body=2073 status=ok
// SIG undefined FUN_14406c9c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14406c9c3(void)

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
  _DAT_14cbb5698 = (ulonglong)uVar1;
  local_40 = "state_remove_primary";
  local_38 = 0x14;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb56a0 = (ulonglong)uVar1;
  local_40 = "state_add_primary";
  local_38 = 0x11;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb56a8 = (ulonglong)uVar1;
  local_40 = "state_add";
  local_38 = 9;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb56b0 = (ulonglong)uVar1;
  local_40 = "state_rem";
  local_38 = 9;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb56b8 = (ulonglong)uVar1;
  local_40 = "set_menu_state";
  local_38 = 0xe;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb56c0 = (ulonglong)uVar1;
  local_40 = "set_active_options";
  local_38 = 0x12;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cbb56c8 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14cbb56d0,L"PressedStart",1);
  FUN_1446f470e(&DAT_14cbb56e0,L"SplashIntro",1);
  FUN_1446f470e(&DAT_14cbb56f0,L"SplashTransition",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b873dc0,1,0);
  FUN_1446f470e(&DAT_14cbb5718,L"Countdown",1);
  FUN_1446f470e(&DAT_14cbb5728,L"ExitImmediatelyMissionReplay",1);
  FUN_1446f470e(&DAT_14cbb5738,L"ToggleTravelStatus",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b874570,1,0);
  FUN_1446f470e(&DAT_14cbb5760,L"DisplayTutorialSlideout",1);
  FUN_1446f470e(&DAT_14cbb5770,L"ExpandedTutorialWaiting",1);
  FUN_1446f470e(&DAT_14cbb5780,L"OnExpandedTutorialClosed",1);
  FUN_1446f470e(&DAT_14cbb5790,L"OnTutorialExpanded",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b874e80,1,0);
  FUN_1446f470e(&DAT_14cbb57b8,L"ActivateVaultCard",1);
  FUN_1446f470e(&DAT_14cbb57c8,L"EquipAssaultRifle",1);
  FUN_1446f470e(&DAT_14cbb57d8,L"EquipClassMod",1);
  FUN_1446f470e(&DAT_14cbb57e8,L"EquipEnhancement",1);
  FUN_1446f470e(&DAT_14cbb57f8,L"EquipGadget",1);
  FUN_1446f470e(&DAT_14cbb5808,L"EquipGrenade",1);
  FUN_1446f470e(&DAT_14cbb5818,L"EquipHeavyWeapon",1);
  FUN_1446f470e(&DAT_14cbb5828,L"EquipPistol",1);
  FUN_1446f470e(&DAT_14cbb5838,L"EquipRepKit",1);
  FUN_1446f470e(&DAT_14cbb5848,L"EquipShield",1);
  FUN_1446f470e(&DAT_14cbb5858,L"EquipShotgun",1);
  FUN_1446f470e(&DAT_14cbb5868,L"EquipSMG",1);
  FUN_1446f470e(&DAT_14cbb5878,L"EquipSniper",1);
  FUN_1446f470e(&DAT_14cbb5888,L"Error",1);
  FUN_1446f470e(&DAT_14cbb5898,L"PurchaseReward",1);
  FUN_1446f470e(&DAT_14cbb58a8,L"PurchaseVaultCard",1);
  FUN_1446f470e(&DAT_14cbb58b8,L"StartTutorial",1);
  FUN_1446f470e(&DAT_14cbb58c8,L"SubNavBackward",1);
  FUN_1446f470e(&DAT_14cbb58d8,L"SubNavForward",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8768b0,1,0);
  FUN_1446f470e(&DAT_14cbb5900,L"SearchPing",1);
  FUN_1446f470e(&DAT_14cbb5910,L"SearchSuccess",1);
  FUN_1446f470e(&DAT_14cbb5920,L"Switch",1);
  FUN_1446f470e(&DAT_14cbb5930,L"TrackerActivate",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b877150,1,0);
  FUN_1446f470e(&DAT_14cbb5958,L"Closing",1);
  FUN_1446f470e(&DAT_14cbb5968,L"Highlighting",1);
  FUN_1446f470e(&DAT_14cbb5978,L"Opening",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8778a0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b877960,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b877e30;
  local_58 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b877e50,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8782e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b878780,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b878c20,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b879090,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b8794b0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b879930,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b879da0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87a1c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87a5e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87aa10,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b87afb0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 8;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87c260,1,&PTR_FUN_14b87c120);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b87c3d0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b87c490,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406d1e0 FUN_14406d1e0 body=55 status=ok
// SIG undefined FUN_14406d1e0(void)

void FUN_14406d1e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5da8 = FUN_140002ddd(FUN_14406d217,uVar1,L"TakedownDialogInfo");
  }
  return;
}



// FUNCTION 14406d217 FUN_14406d217 body=47 status=ok
// SIG undefined FUN_14406d217(void)

longlong FUN_14406d217(void)

{
  if (DAT_14cbb5da0 == 0) {
    FUN_14086a14e(&DAT_14cbb5da0,&PTR_FUN_14b87fa48);
  }
  return DAT_14cbb5da0;
}



// FUNCTION 14406d246 FUN_14406d246 body=48 status=ok
// SIG undefined FUN_14406d246(void)

void FUN_14406d246(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b888a60;
  return;
}



// FUNCTION 14406d276 FUN_14406d276 body=55 status=ok
// SIG undefined FUN_14406d276(void)

void FUN_14406d276(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5dc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5dc0 = FUN_140002ddd(FUN_14406d2ad,uVar1,L"UITakedownModeDef");
  }
  return;
}



// FUNCTION 14406d2ad FUN_14406d2ad body=47 status=ok
// SIG undefined FUN_14406d2ad(void)

longlong FUN_14406d2ad(void)

{
  if (DAT_14cbb5db8 == 0) {
    FUN_14086a14e(&DAT_14cbb5db8,&PTR_FUN_14b87fbd0);
  }
  return DAT_14cbb5db8;
}



// FUNCTION 14406d2dc FUN_14406d2dc body=48 status=ok
// SIG undefined FUN_14406d2dc(void)

void FUN_14406d2dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000150;
  *puVar1 = &PTR_FUN_14b888bc0;
  return;
}



// FUNCTION 14406d30e FUN_14406d30e body=227 status=ok
// SIG undefined FUN_14406d30e(void)

longlong FUN_14406d30e(void)

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
  if (DAT_14cbb5dd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14406d3f2;
    local_40 = &LAB_14406d3f5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/OakGame",L"NexusConfigStore_UITakedownModeDef",&DAT_14cbb5dd0,
                  &DAT_14406d30c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406d405 FUN_14406d405 body=47 status=ok
// SIG undefined FUN_14406d405(void)

longlong FUN_14406d405(void)

{
  if (DAT_14cbb5dd8 == 0) {
    FUN_14073dd9a(&DAT_14cbb5dd8,&PTR_LAB_14b87fc68);
  }
  return DAT_14cbb5dd8;
}



// FUNCTION 14406d434 FUN_14406d434 body=55 status=ok
// SIG undefined FUN_14406d434(void)

void FUN_14406d434(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e20 = FUN_14171c317(FUN_146600ec8,uVar1,L"EOakUIDisplayDataDef_GadgetType");
  }
  return;
}



// FUNCTION 14406d46b FUN_14406d46b body=55 status=ok
// SIG undefined FUN_14406d46b(void)

void FUN_14406d46b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e68 = FUN_14171c317(FUN_146600fec,uVar1,L"EOakUI_SkillNodeType");
  }
  return;
}



// FUNCTION 14406d4a2 FUN_14406d4a2 body=55 status=ok
// SIG undefined FUN_14406d4a2(void)

void FUN_14406d4a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e80 = FUN_14171c317(FUN_14660101d,uVar1,L"EOakUI_SkillTreeColor");
  }
  return;
}



// FUNCTION 14406d4d9 FUN_14406d4d9 body=55 status=ok
// SIG undefined FUN_14406d4d9(void)

void FUN_14406d4d9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5e98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5e98 = FUN_14171c317(FUN_14660104c,uVar1,L"EOakUI_SkillLinkType");
  }
  return;
}



// FUNCTION 14406d510 FUN_14406d510 body=55 status=ok
// SIG undefined FUN_14406d510(void)

void FUN_14406d510(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5eb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5eb0 = FUN_14171c317(FUN_14660107b,uVar1,L"EOakUI_WorldIconTypes");
  }
  return;
}



// FUNCTION 14406d54a FUN_14406d54a body=227 status=ok
// SIG undefined FUN_14406d54a(void)

longlong FUN_14406d54a(void)

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
  if (DAT_14cbb5ec0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14634e584;
    local_28 = &LAB_143fb370a;
    local_38 = &LAB_14406d62e;
    local_40 = FUN_14406d631;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGExtension_HUDPerspective",&DAT_14cbb5ec0,
                  &DAT_14406d548);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5ec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406d631 FUN_14406d631 body=42 status=ok
// SIG undefined FUN_14406d631(void)

void FUN_14406d631(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_143fb373e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b880780;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14406d665 FUN_14406d665 body=47 status=ok
// SIG undefined FUN_14406d665(void)

longlong FUN_14406d665(void)

{
  if (DAT_14cbb5ec8 == 0) {
    FUN_14073dd9a(&DAT_14cbb5ec8,&PTR_LAB_14b880738);
  }
  return DAT_14cbb5ec8;
}



// FUNCTION 14406d696 FUN_14406d696 body=227 status=ok
// SIG undefined FUN_14406d696(void)

longlong FUN_14406d696(void)

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
  if (DAT_14cbb5ed8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14634e584;
    local_28 = &LAB_143fb370a;
    local_38 = &LAB_14406d77a;
    local_40 = FUN_14406d77d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGExtension_SafeScreenHelper",&DAT_14cbb5ed8,
                  &DAT_14406d694);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5ed8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406d77d FUN_14406d77d body=50 status=ok
// SIG undefined FUN_14406d77d(void)

void FUN_14406d77d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_143fb373e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b880be0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14406d7b9 FUN_14406d7b9 body=47 status=ok
// SIG undefined FUN_14406d7b9(void)

longlong FUN_14406d7b9(void)

{
  if (DAT_14cbb5ee0 == 0) {
    FUN_14073dd9a(&DAT_14cbb5ee0,&PTR_LAB_14b880b98);
  }
  return DAT_14cbb5ee0;
}



// FUNCTION 14406d7ea FUN_14406d7ea body=227 status=ok
// SIG undefined FUN_14406d7ea(void)

longlong FUN_14406d7ea(void)

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
  if (DAT_14cbb5ef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14634e584;
    local_28 = &LAB_143fb370a;
    local_38 = &LAB_14406d8ce;
    local_40 = FUN_14406d8d1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGExtension_SettingsHelper",&DAT_14cbb5ef0,
                  &DAT_14406d7e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406d8d1 FUN_14406d8d1 body=43 status=ok
// SIG undefined FUN_14406d8d1(void)

void FUN_14406d8d1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_143fb373e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b880f80;
  puVar1[5] = 0;
  return;
}



// FUNCTION 14406d907 FUN_14406d907 body=47 status=ok
// SIG undefined FUN_14406d907(void)

longlong FUN_14406d907(void)

{
  if (DAT_14cbb5ef8 == 0) {
    FUN_14073dd9a(&DAT_14cbb5ef8,&PTR_LAB_14b880f38);
  }
  return DAT_14cbb5ef8;
}



// FUNCTION 14406d938 FUN_14406d938 body=227 status=ok
// SIG undefined FUN_14406d938(void)

longlong FUN_14406d938(void)

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
  if (DAT_14cbb5f08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14634e584;
    local_28 = &LAB_143fb370a;
    local_38 = &LAB_14406da1c;
    local_40 = FUN_14406da1f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGExtension_SplitScreenHelper",&DAT_14cbb5f08,
                  &DAT_14406d936);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406da1f FUN_14406da1f body=68 status=ok
// SIG undefined FUN_14406da1f(void)

void FUN_14406da1f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_143fb373e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b881330;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x3ff0000000000000;
  puVar1[9] = 0x3ff0000000000000;
  return;
}



// FUNCTION 14406da6d FUN_14406da6d body=47 status=ok
// SIG undefined FUN_14406da6d(void)

longlong FUN_14406da6d(void)

{
  if (DAT_14cbb5f10 == 0) {
    FUN_14073dd9a(&DAT_14cbb5f10,&PTR_LAB_14b8812e8);
  }
  return DAT_14cbb5f10;
}



// FUNCTION 14406daa0 FUN_14406daa0 body=60 status=ok
// SIG undefined FUN_14406daa0(void)

void FUN_14406daa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_148b51df6(puVar1);
  *puVar1 = &PTR_FUN_14b881700;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  return;
}



// FUNCTION 14406dadc FUN_14406dadc body=227 status=ok
// SIG undefined FUN_14406dadc(void)

longlong FUN_14406dadc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb5f20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_1458d5bec;
    local_38 = &LAB_14406da9d;
    local_40 = FUN_14406daa0;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGSubsystem",&DAT_14cbb5f20,&DAT_14406da9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5f20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406dbc0 FUN_14406dbc0 body=47 status=ok
// SIG undefined FUN_14406dbc0(void)

longlong FUN_14406dbc0(void)

{
  if (DAT_14cbb5f28 == 0) {
    FUN_14073dd9a(&DAT_14cbb5f28,&PTR_FUN_14b8816b8);
  }
  return DAT_14cbb5f28;
}



// FUNCTION 14406dbf0 FUN_14406dbf0 body=55 status=ok
// SIG undefined FUN_14406dbf0(void)

void FUN_14406dbf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5f40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5f40 =
         FUN_140002ddd(FUN_14406dc27,uVar1,L"GbxUIUMGWidgetExtensionConfig_HUDPerspective");
  }
  return;
}



// FUNCTION 14406dc27 FUN_14406dc27 body=47 status=ok
// SIG undefined FUN_14406dc27(void)

longlong FUN_14406dc27(void)

{
  if (DAT_14cbb5f38 == 0) {
    FUN_14086a14e(&DAT_14cbb5f38,&PTR_FUN_14b881a90);
  }
  return DAT_14cbb5f38;
}



// FUNCTION 14406dc56 FUN_14406dc56 body=48 status=ok
// SIG undefined FUN_14406dc56(void)

void FUN_14406dc56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b8895e0;
  return;
}



// FUNCTION 14406dc86 FUN_14406dc86 body=55 status=ok
// SIG undefined FUN_14406dc86(void)

void FUN_14406dc86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5f58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5f58 =
         FUN_140002ddd(FUN_14406dcbd,uVar1,L"GbxUIUMGWidgetExtensionConfig_SettingsHelper");
  }
  return;
}



// FUNCTION 14406dcbd FUN_14406dcbd body=47 status=ok
// SIG undefined FUN_14406dcbd(void)

longlong FUN_14406dcbd(void)

{
  if (DAT_14cbb5f50 == 0) {
    FUN_14086a14e(&DAT_14cbb5f50,&PTR_FUN_14b881b80);
  }
  return DAT_14cbb5f50;
}



// FUNCTION 14406dcec FUN_14406dcec body=48 status=ok
// SIG undefined FUN_14406dcec(void)

void FUN_14406dcec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b889770;
  return;
}



// FUNCTION 14406dd1c FUN_14406dd1c body=55 status=ok
// SIG undefined FUN_14406dd1c(void)

void FUN_14406dd1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5f70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5f70 =
         FUN_140002ddd(FUN_14406dd53,uVar1,L"GbxUIUMGWidgetExtensionConfig_SplitScreenHelper");
  }
  return;
}



// FUNCTION 14406dd53 FUN_14406dd53 body=47 status=ok
// SIG undefined FUN_14406dd53(void)

longlong FUN_14406dd53(void)

{
  if (DAT_14cbb5f68 == 0) {
    FUN_14086a14e(&DAT_14cbb5f68,&PTR_FUN_14b881c78);
  }
  return DAT_14cbb5f68;
}



// FUNCTION 14406dd82 FUN_14406dd82 body=48 status=ok
// SIG undefined FUN_14406dd82(void)

void FUN_14406dd82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b889900;
  return;
}



// FUNCTION 14406ddb6 FUN_14406ddb6 body=43 status=ok
// SIG undefined FUN_14406ddb6(void)

void FUN_14406ddb6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145aa0d36(puVar1);
  *puVar1 = &PTR_FUN_14b881d70;
  puVar1[6] = &PTR_FUN_14b882040;
  return;
}



// FUNCTION 14406dde2 FUN_14406dde2 body=227 status=ok
// SIG undefined FUN_14406dde2(void)

longlong FUN_14406dde2(void)

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
  if (DAT_14cbb5f80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_145a8823c;
    local_38 = &LAB_14406ddb3;
    local_40 = FUN_14406ddb6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGWidgetManager",&DAT_14cbb5f80,&DAT_14406ddb2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5f80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406dec6 FUN_14406dec6 body=47 status=ok
// SIG undefined FUN_14406dec6(void)

longlong FUN_14406dec6(void)

{
  if (DAT_14cbb5f88 == 0) {
    FUN_14073dd9a(&DAT_14cbb5f88,&PTR_FUN_14b881d28);
  }
  return DAT_14cbb5f88;
}



// FUNCTION 14406defa FUN_14406defa body=140 status=ok
// SIG undefined FUN_14406defa(void)

void FUN_14406defa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a2d2c6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b882390;
  puVar1[5] = &PTR_FUN_14b882890;
  puVar1[0x2d] = &PTR_FUN_14b8828d0;
  puVar1[0x86] = &PTR_FUN_14b882900;
  puVar1[0x8e] = &PTR_FUN_14b882920;
  puVar1[0xa7] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xaa] = 0;
  puVar1[0xab] = 0;
  puVar1[0xac] = 0;
  puVar1[0xad] = 0;
  puVar1[0xae] = 0;
  puVar1[0xaf] = 0;
  puVar1[0xb0] = 0;
  puVar1[0xb1] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb3] = 0;
  puVar1[0xb4] = 0;
  return;
}



// FUNCTION 14406df86 FUN_14406df86 body=227 status=ok
// SIG undefined FUN_14406df86(void)

longlong FUN_14406df86(void)

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
  if (DAT_14cbb5fa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146599668;
    local_38 = &LAB_14406def7;
    local_40 = FUN_14406defa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x5a8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGWidget_HUDContainer",&DAT_14cbb5fa0,&DAT_14406def6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5fa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406e06a FUN_14406e06a body=47 status=ok
// SIG undefined FUN_14406e06a(void)

longlong FUN_14406e06a(void)

{
  if (DAT_14cbb5fa8 == 0) {
    FUN_14073dd9a(&DAT_14cbb5fa8,&PTR_FUN_14b882348);
  }
  return DAT_14cbb5fa8;
}



// FUNCTION 14406e099 FUN_14406e099 body=47 status=ok
// SIG undefined FUN_14406e099(void)

longlong FUN_14406e099(void)

{
  if (DAT_14cbb5fe8 == 0) {
    FUN_14073dd9a(&DAT_14cbb5fe8,&PTR_LAB_14b882ed0);
  }
  return DAT_14cbb5fe8;
}



// FUNCTION 14406e0c8 FUN_14406e0c8 body=47 status=ok
// SIG undefined FUN_14406e0c8(void)

longlong FUN_14406e0c8(void)

{
  if (DAT_14cbb5fc0 == 0) {
    FUN_14000fc22(&DAT_14cbb5fc0,&PTR_FUN_14b882a08);
  }
  return DAT_14cbb5fc0;
}



// FUNCTION 14406e0f7 FUN_14406e0f7 body=47 status=ok
// SIG undefined FUN_14406e0f7(void)

longlong FUN_14406e0f7(void)

{
  if (DAT_14cbb5fd0 == 0) {
    FUN_14000fc22(&DAT_14cbb5fd0,&PTR_FUN_14b882ab0);
  }
  return DAT_14cbb5fd0;
}



// FUNCTION 14406e126 FUN_14406e126 body=47 status=ok
// SIG undefined FUN_14406e126(void)

longlong FUN_14406e126(void)

{
  if (DAT_14cbb5fd8 == 0) {
    FUN_14000fc22(&DAT_14cbb5fd8,&PTR_FUN_14b882b50);
  }
  return DAT_14cbb5fd8;
}



// FUNCTION 14406e156 FUN_14406e156 body=38 status=ok
// SIG undefined FUN_14406e156(void)

void FUN_14406e156(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1442b5a62();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14406e17c FUN_14406e17c body=34 status=ok
// SIG undefined FUN_14406e17c(void)

void FUN_14406e17c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14406e1a4();
  FUN_14069c8d6(uVar1,&PTR_s_GetOakPlayerController_14b882b90,1);
  return;
}



// FUNCTION 14406e1a4 FUN_14406e1a4 body=227 status=ok
// SIG undefined FUN_14406e1a4(void)

longlong FUN_14406e1a4(void)

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
  if (DAT_14cbb5fe0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_143fb10b4;
    local_38 = &LAB_14406e288;
    local_40 = &LAB_14406e28b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGWidget_HUDItemBase",&DAT_14cbb5fe0,FUN_14406e17c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb5fe0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406e29e FUN_14406e29e body=195 status=ok
// SIG undefined FUN_14406e29e(void)

undefined8 * FUN_14406e29e(undefined8 *param_1)

{
  FUN_140e2f36c();
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 2;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *param_1 = &PTR_FUN_14b882f10;
  param_1[5] = &PTR_FUN_14b8833d0;
  param_1[0x2d] = &PTR_FUN_14b883410;
  param_1[0x5c] = &PTR_FUN_14b883440;
  param_1[0x62] = &PTR_FUN_14b883480;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x351) = 0;
  *(undefined8 *)((longlong)param_1 + 0x359) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  return param_1;
}



// FUNCTION 14406e362 FUN_14406e362 body=103 status=ok
// SIG undefined FUN_14406e362(void)

void FUN_14406e362(longlong param_1)

{
  *(undefined ***)(param_1 + 0x310) = &PTR_FUN_14b889ad0;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x2e0) = &PTR_LAB_14b889a90;
  FUN_144760e21(*(undefined8 *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x2f0));
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_1400020a8();
  }
  FUN_143fb1118(param_1);
  return;
}



// FUNCTION 14406e3ce FUN_14406e3ce body=47 status=ok
// SIG undefined FUN_14406e3ce(void)

longlong FUN_14406e3ce(void)

{
  if (DAT_14cbb6008 == 0) {
    FUN_14073dd9a(&DAT_14cbb6008,&PTR_LAB_14b883600);
  }
  return DAT_14cbb6008;
}



// FUNCTION 14406e3fd FUN_14406e3fd body=47 status=ok
// SIG undefined FUN_14406e3fd(void)

longlong FUN_14406e3fd(void)

{
  if (DAT_14cbb5ff8 == 0) {
    FUN_14000fc22(&DAT_14cbb5ff8,&PTR_FUN_14b883540);
  }
  return DAT_14cbb5ff8;
}



// FUNCTION 14406e42c FUN_14406e42c body=669 status=ok
// SIG undefined FUN_14406e42c(void)

void FUN_14406e42c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
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
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_24);
            goto LAB_14406e5e9;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if ((puVar9 != &local_24) && ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar4 + 0x100))(plVar4,&local_24,puVar9,(int)plVar4[6]);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_24,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_24,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
LAB_14406e5e9:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406e6ca FUN_14406e6ca body=34 status=ok
// SIG undefined FUN_14406e6ca(void)

void FUN_14406e6ca(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14406e6f2();
  FUN_14069c8d6(uVar1,&PTR_s_NativeOnModeVisibleChanged_14b883580,1);
  return;
}



// FUNCTION 14406e6f2 FUN_14406e6f2 body=227 status=ok
// SIG undefined FUN_14406e6f2(void)

longlong FUN_14406e6f2(void)

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
  if (DAT_14cbb6000 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14406e19e;
    local_38 = &LAB_14406e7d6;
    local_40 = FUN_14406e7d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGWidget_SaveIndicator",&DAT_14cbb6000,FUN_14406e6ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406e7d9 FUN_14406e7d9 body=88 status=ok
// SIG undefined FUN_14406e7d9(void)

void FUN_14406e7d9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14406e29e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b883640;
  puVar1[5] = &PTR_FUN_14b883b00;
  puVar1[0x2d] = &PTR_FUN_14b883b40;
  puVar1[0x5c] = &PTR_FUN_14b883b70;
  puVar1[0x62] = &PTR_FUN_14b883bb0;
  return;
}



// FUNCTION 14406e831 FUN_14406e831 body=47 status=ok
// SIG undefined FUN_14406e831(void)

longlong FUN_14406e831(void)

{
  if (DAT_14cbb6030 == 0) {
    FUN_14073dd9a(&DAT_14cbb6030,&PTR_FUN_14b883eb0);
  }
  return DAT_14cbb6030;
}



// FUNCTION 14406e860 FUN_14406e860 body=47 status=ok
// SIG undefined FUN_14406e860(void)

longlong FUN_14406e860(void)

{
  if (DAT_14cbb6020 == 0) {
    FUN_14000fc22(&DAT_14cbb6020,&PTR_FUN_14b883c38);
  }
  return DAT_14cbb6020;
}



// FUNCTION 14406e894 FUN_14406e894 body=133 status=ok
// SIG undefined FUN_14406e894(void)

void FUN_14406e894(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14406e29e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b883ef0;
  puVar1[5] = &PTR_FUN_14b8843b0;
  puVar1[0x2d] = &PTR_FUN_14b8843f0;
  puVar1[0x5c] = &PTR_FUN_14b884420;
  puVar1[0x62] = &PTR_FUN_14b884460;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  puVar1[0x77] = 0;
  puVar1[0x78] = 0x40a00000bf800000;
  return;
}



// FUNCTION 14406e91a FUN_14406e91a body=227 status=ok
// SIG undefined FUN_14406e91a(void)

longlong FUN_14406e91a(void)

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
  if (DAT_14cbb6028 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14406e19e;
    local_38 = &LAB_14406e891;
    local_40 = FUN_14406e894;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x3c8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGWidget_TakedownTimer",&DAT_14cbb6028,&DAT_14406e890);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406ea08 FUN_14406ea08 body=101 status=ok
// SIG undefined FUN_14406ea08(void)

void FUN_14406ea08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b883ef0;
  param_1[5] = &PTR_FUN_14b8843b0;
  param_1[0x2d] = &PTR_FUN_14b8843f0;
  param_1[0x5c] = &PTR_FUN_14b884420;
  param_1[0x62] = &PTR_FUN_14b884460;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_14406e362(param_1);
  return;
}



// FUNCTION 14406ea70 FUN_14406ea70 body=227 status=ok
// SIG undefined FUN_14406ea70(void)

longlong FUN_14406ea70(void)

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
  if (DAT_14cbb6040 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14634e584;
    local_38 = &LAB_14406eb54;
    local_40 = FUN_14406eb57;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x2d8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIUMGWidget_TakedownRewardPoint",&DAT_14cbb6040,
                  &DAT_14406ea6e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406eb57 FUN_14406eb57 body=71 status=ok
// SIG undefined FUN_14406eb57(void)

void FUN_14406eb57(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e2f36c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8845a0;
  puVar1[5] = &PTR_FUN_14b884a40;
  puVar1[0x2d] = &PTR_FUN_14b884a80;
  puVar1[0x5a] = 0;
  return;
}



// FUNCTION 14406eba3 FUN_14406eba3 body=47 status=ok
// SIG undefined FUN_14406eba3(void)

longlong FUN_14406eba3(void)

{
  if (DAT_14cbb6048 == 0) {
    FUN_14073dd9a(&DAT_14cbb6048,&PTR_LAB_14b884558);
  }
  return DAT_14cbb6048;
}



// FUNCTION 14406ebd4 FUN_14406ebd4 body=227 status=ok
// SIG undefined FUN_14406ebd4(void)

longlong FUN_14406ebd4(void)

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
  if (DAT_14cbb60b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_143fb2e2e;
    local_38 = &LAB_14406ecb8;
    local_40 = &LAB_14406ecbb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewModelRepo",&DAT_14cbb60b8,&DAT_14406ebd2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb60b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406ecc9 FUN_14406ecc9 body=47 status=ok
// SIG undefined FUN_14406ecc9(void)

longlong FUN_14406ecc9(void)

{
  if (DAT_14cbb60c0 == 0) {
    FUN_14073dd9a(&DAT_14cbb60c0,&PTR_LAB_14b885018);
  }
  return DAT_14cbb60c0;
}



// FUNCTION 14406ecf8 FUN_14406ecf8 body=47 status=ok
// SIG undefined FUN_14406ecf8(void)

longlong FUN_14406ecf8(void)

{
  if (DAT_14cbb60e8 == 0) {
    FUN_14073dd9a(&DAT_14cbb60e8,&PTR_LAB_14b885300);
  }
  return DAT_14cbb60e8;
}



// FUNCTION 14406ed27 FUN_14406ed27 body=47 status=ok
// SIG undefined FUN_14406ed27(void)

longlong FUN_14406ed27(void)

{
  if (DAT_14cbb60d0 == 0) {
    FUN_14000fc22(&DAT_14cbb60d0,&PTR_FUN_14b8850d8);
  }
  return DAT_14cbb60d0;
}



// FUNCTION 14406ed56 FUN_14406ed56 body=139 status=ok
// SIG undefined FUN_14406ed56(void)

void FUN_14406ed56(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144336012(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406ede6 FUN_14406ede6 body=47 status=ok
// SIG undefined FUN_14406ede6(void)

longlong FUN_14406ede6(void)

{
  if (DAT_14cbb60d8 == 0) {
    FUN_14000fc22(&DAT_14cbb60d8,&PTR_FUN_14b885178);
  }
  return DAT_14cbb60d8;
}



// FUNCTION 14406ee30 FUN_14406ee30 body=123 status=ok
// SIG undefined FUN_14406ee30(void)

void FUN_14406ee30(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144336012(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406eeac FUN_14406eeac body=86 status=ok
// SIG undefined FUN_14406eeac(void)

void FUN_14406eeac(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14cbb6268;
  local_18 = DAT_14cbb6260;
  FUN_144335efa(param_1,param_1 + 0x88,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406ef0e FUN_14406ef0e body=97 status=ok
// SIG undefined FUN_14406ef0e(void)

void FUN_14406ef0e(longlong param_1,char *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x98) != *param_2) {
    *(char *)(param_1 + 0x98) = *param_2;
    local_10 = DAT_14cbb6278;
    local_18 = DAT_14cbb6270;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406ef70 FUN_14406ef70 body=34 status=ok
// SIG undefined FUN_14406ef70(void)

void FUN_14406ef70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14406ef98();
  FUN_14069c8d6(uVar1,&PTR_s_GetCultureISO_14b8851c0,2);
  return;
}



// FUNCTION 14406ef98 FUN_14406ef98 body=227 status=ok
// SIG undefined FUN_14406ef98(void)

longlong FUN_14406ef98(void)

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
  if (DAT_14cbb60e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14659d51a;
    local_38 = &LAB_14406f07c;
    local_40 = &LAB_14406f07f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewModel_CultureSettings",&DAT_14cbb60e0,FUN_14406ef70)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb60e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f090 FUN_14406f090 body=85 status=ok
// SIG undefined FUN_14406f090(void)

void FUN_14406f090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b88bdb0;
  param_1[5] = &PTR_FUN_14b88c090;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145948cb6(param_1);
  return;
}



// FUNCTION 14406f0e6 FUN_14406f0e6 body=91 status=ok
// SIG undefined FUN_14406f0e6(void)

void FUN_14406f0e6(longlong param_1,char *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x70) != *param_2) {
    *(char *)(param_1 + 0x70) = *param_2;
    local_10 = DAT_14cbb6288;
    local_18 = DAT_14cbb6280;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f144 FUN_14406f144 body=227 status=ok
// SIG undefined FUN_14406f144(void)

longlong FUN_14406f144(void)

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
  if (DAT_14cbb6118 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14659d51a;
    local_38 = &LAB_14406f228;
    local_40 = FUN_14406f22b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewModel_HUDIndicators",&DAT_14cbb6118,&DAT_14406f142);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f22b FUN_14406f22b body=58 status=ok
// SIG undefined FUN_14406f22b(void)

void FUN_14406f22b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d0286c(puVar1,param_1);
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14b8854d0;
  puVar1[5] = &PTR_FUN_14b8857b0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  return;
}



// FUNCTION 14406f271 FUN_14406f271 body=47 status=ok
// SIG undefined FUN_14406f271(void)

longlong FUN_14406f271(void)

{
  if (DAT_14cbb6120 == 0) {
    FUN_14073dd9a(&DAT_14cbb6120,&PTR_LAB_14b885488);
  }
  return DAT_14cbb6120;
}



// FUNCTION 14406f2aa FUN_14406f2aa body=102 status=ok
// SIG undefined FUN_14406f2aa(void)

void FUN_14406f2aa(longlong param_1,float *param_2)

{
  float fVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x70) != fVar1) || (NAN(*(float *)(param_1 + 0x70)) || NAN(fVar1))) {
    *(float *)(param_1 + 0x70) = fVar1;
    local_10 = DAT_14cbb6298;
    local_18 = DAT_14cbb6290;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f31c FUN_14406f31c body=102 status=ok
// SIG undefined FUN_14406f31c(void)

void FUN_14406f31c(longlong param_1,float *param_2)

{
  float fVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x74) != fVar1) || (NAN(*(float *)(param_1 + 0x74)) || NAN(fVar1))) {
    *(float *)(param_1 + 0x74) = fVar1;
    local_10 = DAT_14cbb62a8;
    local_18 = DAT_14cbb62a0;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f388 FUN_14406f388 body=68 status=ok
// SIG undefined FUN_14406f388(void)

void FUN_14406f388(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d0286c(puVar1,param_1);
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14b885980;
  puVar1[5] = &PTR_FUN_14b885c60;
  puVar1[0xe] = 0x3f80000000000000;
  return;
}



// FUNCTION 14406f3cc FUN_14406f3cc body=227 status=ok
// SIG undefined FUN_14406f3cc(void)

longlong FUN_14406f3cc(void)

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
  if (DAT_14cbb6130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14659d51a;
    local_38 = &LAB_14406f385;
    local_40 = FUN_14406f388;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewModel_ProgressBar",&DAT_14cbb6130,&DAT_14406f384);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f4b0 FUN_14406f4b0 body=47 status=ok
// SIG undefined FUN_14406f4b0(void)

longlong FUN_14406f4b0(void)

{
  if (DAT_14cbb6138 == 0) {
    FUN_14073dd9a(&DAT_14cbb6138,&PTR_FUN_14b885938);
  }
  return DAT_14cbb6138;
}



// FUNCTION 14406f4df FUN_14406f4df body=55 status=ok
// SIG undefined FUN_14406f4df(void)

void FUN_14406f4df(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb6150 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb6150 = FUN_14171c317(FUN_14406f516,uVar1,L"EOakUISplitScreenMode");
  }
  return;
}



// FUNCTION 14406f516 FUN_14406f516 body=47 status=ok
// SIG undefined FUN_14406f516(void)

longlong FUN_14406f516(void)

{
  if (DAT_14cbb6148 == 0) {
    FUN_1409ce572(&DAT_14cbb6148,&PTR_FUN_14b885d60);
  }
  return DAT_14cbb6148;
}



// FUNCTION 14406f550 FUN_14406f550 body=97 status=ok
// SIG undefined FUN_14406f550(void)

void FUN_14406f550(longlong param_1,char *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x88) != *param_2) {
    *(char *)(param_1 + 0x88) = *param_2;
    local_10 = DAT_14cbb62b8;
    local_18 = DAT_14cbb62b0;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f5b4 FUN_14406f5b4 body=227 status=ok
// SIG undefined FUN_14406f5b4(void)

longlong FUN_14406f5b4(void)

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
  if (DAT_14cbb6160 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14659d51a;
    local_38 = &LAB_14406f698;
    local_40 = FUN_14406f69b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewModel_SplitScreen",&DAT_14cbb6160,&DAT_14406f5b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6160;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f69b FUN_14406f69b body=84 status=ok
// SIG undefined FUN_14406f69b(void)

void FUN_14406f69b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d0286c(puVar1,param_1);
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14b885ed0;
  puVar1[5] = &PTR_FUN_14b8861b0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 2;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 14406f6f5 FUN_14406f6f5 body=47 status=ok
// SIG undefined FUN_14406f6f5(void)

longlong FUN_14406f6f5(void)

{
  if (DAT_14cbb6168 == 0) {
    FUN_14073dd9a(&DAT_14cbb6168,&PTR_LAB_14b885e88);
  }
  return DAT_14cbb6168;
}



// FUNCTION 14406f724 FUN_14406f724 body=68 status=ok
// SIG undefined FUN_14406f724(void)

void FUN_14406f724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b885ed0;
  param_1[5] = &PTR_FUN_14b8861b0;
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145948cb6(param_1);
  return;
}



// FUNCTION 14406f780 FUN_14406f780 body=102 status=ok
// SIG undefined FUN_14406f780(void)

void FUN_14406f780(longlong param_1,float *param_2)

{
  float fVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x7c) != fVar1) || (NAN(*(float *)(param_1 + 0x7c)) || NAN(fVar1))) {
    *(float *)(param_1 + 0x7c) = fVar1;
    local_10 = DAT_14cbb62d8;
    local_18 = DAT_14cbb62d0;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f7f6 FUN_14406f7f6 body=97 status=ok
// SIG undefined FUN_14406f7f6(void)

void FUN_14406f7f6(longlong param_1,char *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x84) != *param_2) {
    *(char *)(param_1 + 0x84) = *param_2;
    local_10 = DAT_14cbb62c8;
    local_18 = DAT_14cbb62c0;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f858 FUN_14406f858 body=97 status=ok
// SIG undefined FUN_14406f858(void)

void FUN_14406f858(longlong param_1,char *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x85) != *param_2) {
    *(char *)(param_1 + 0x85) = *param_2;
    local_10 = DAT_14cbb62e8;
    local_18 = DAT_14cbb62e0;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f8ba FUN_14406f8ba body=160 status=ok
// SIG undefined FUN_14406f8ba(void)

void FUN_14406f8ba(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_40 = *(undefined4 *)(param_2 + 2);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 4);
  lVar1 = (longlong)local_30;
  _Src = (void *)param_2[3];
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_1443365fc(param_1,&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406f95e FUN_14406f95e body=227 status=ok
// SIG undefined FUN_14406f95e(void)

longlong FUN_14406f95e(void)

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
  if (DAT_14cbb6178 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14659d51a;
    local_38 = &LAB_14406fa42;
    local_40 = FUN_14406fa45;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewModel_RewardPointData",&DAT_14cbb6178,&DAT_14406f95c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb6178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406fa45 FUN_14406fa45 body=84 status=ok
// SIG undefined FUN_14406fa45(void)

void FUN_14406fa45(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d0286c(puVar1,param_1);
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14b8864c0;
  puVar1[5] = &PTR_LAB_14b8867a0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7e) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 14406fab0 FUN_14406fab0 body=47 status=ok
// SIG undefined FUN_14406fab0(void)

longlong FUN_14406fab0(void)

{
  if (DAT_14cbb6180 == 0) {
    FUN_14073dd9a(&DAT_14cbb6180,&PTR_LAB_14b886478);
  }
  return DAT_14cbb6180;
}



// FUNCTION 14406fae0 FUN_14406fae0 body=108 status=ok
// SIG undefined FUN_14406fae0(void)

void FUN_14406fae0(longlong param_1,float *param_2)

{
  float fVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x88) != fVar1) || (NAN(*(float *)(param_1 + 0x88)) || NAN(fVar1))) {
    *(float *)(param_1 + 0x88) = fVar1;
    local_10 = DAT_14cbb6308;
    local_18 = DAT_14cbb6300;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406fb4e FUN_14406fb4e body=97 status=ok
// SIG undefined FUN_14406fb4e(void)

void FUN_14406fb4e(longlong param_1,int *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x8c) != *param_2) {
    *(int *)(param_1 + 0x8c) = *param_2;
    local_10 = DAT_14cbb6318;
    local_18 = DAT_14cbb6310;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406fbba FUN_14406fbba body=97 status=ok
// SIG undefined FUN_14406fbba(void)

void FUN_14406fbba(longlong param_1,char *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x90) != *param_2) {
    *(char *)(param_1 + 0x90) = *param_2;
    local_10 = DAT_14cbb6328;
    local_18 = DAT_14cbb6320;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406fc1e FUN_14406fc1e body=227 status=ok
// SIG undefined FUN_14406fc1e(void)

longlong FUN_14406fc1e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb61a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14406f3cc;
    local_38 = &LAB_14406fd02;
    local_40 = FUN_14406fd05;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIViewModel_TakedownTimer",&DAT_14cbb61a0,&DAT_14406fc1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb61a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14406fd05 FUN_14406fd05 body=82 status=ok
// SIG undefined FUN_14406fd05(void)

void FUN_14406fd05(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d0286c(puVar1,param_1);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0x3f80000000000000;
  *puVar1 = &PTR_FUN_14b886aa0;
  puVar1[5] = &PTR_LAB_14b886d80;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x81) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x89) = 0;
  return;
}



// FUNCTION 14406fd66 FUN_14406fd66 body=47 status=ok
// SIG undefined FUN_14406fd66(void)

longlong FUN_14406fd66(void)

{
  if (DAT_14cbb61a8 == 0) {
    FUN_14073dd9a(&DAT_14cbb61a8,&PTR_LAB_14b886a58);
  }
  return DAT_14cbb61a8;
}



// FUNCTION 14406fd96 FUN_14406fd96 body=38 status=ok
// SIG undefined FUN_14406fd96(void)

undefined8 FUN_14406fd96(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406fdbc FUN_14406fdbc body=38 status=ok
// SIG undefined FUN_14406fdbc(void)

undefined8 FUN_14406fdbc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406fde2 FUN_14406fde2 body=38 status=ok
// SIG undefined FUN_14406fde2(void)

undefined8 FUN_14406fde2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406fe08 FUN_14406fe08 body=38 status=ok
// SIG undefined FUN_14406fe08(void)

undefined8 FUN_14406fe08(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406fe2e FUN_14406fe2e body=38 status=ok
// SIG undefined FUN_14406fe2e(void)

undefined8 FUN_14406fe2e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406fe54 FUN_14406fe54 body=68 status=ok
// SIG undefined FUN_14406fe54(void)

undefined8 * FUN_14406fe54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b881700;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_141566b46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406fe98 FUN_14406fe98 body=38 status=ok
// SIG undefined FUN_14406fe98(void)

undefined8 FUN_14406fe98(undefined8 param_1,int param_2)

{
  FUN_145bd00e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406febe FUN_14406febe body=45 status=ok
// SIG undefined FUN_14406febe(void)

longlong FUN_14406febe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145bd00e6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406feec FUN_14406feec body=38 status=ok
// SIG undefined FUN_14406feec(void)

undefined8 FUN_14406feec(undefined8 param_1,int param_2)

{
  FUN_141471a12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406ff12 FUN_14406ff12 body=45 status=ok
// SIG undefined FUN_14406ff12(void)

longlong FUN_14406ff12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406ff40 FUN_14406ff40 body=48 status=ok
// SIG undefined FUN_14406ff40(void)

longlong FUN_14406ff40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406ff70 FUN_14406ff70 body=48 status=ok
// SIG undefined FUN_14406ff70(void)

longlong FUN_14406ff70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406ffa0 FUN_14406ffa0 body=48 status=ok
// SIG undefined FUN_14406ffa0(void)

longlong FUN_14406ffa0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406ffd0 FUN_14406ffd0 body=38 status=ok
// SIG undefined FUN_14406ffd0(void)

undefined8 FUN_14406ffd0(undefined8 param_1,int param_2)

{
  FUN_14406e362();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14406fff6 FUN_14406fff6 body=45 status=ok
// SIG undefined FUN_14406fff6(void)

longlong FUN_14406fff6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407002a FUN_14407002a body=48 status=ok
// SIG undefined FUN_14407002a(void)

longlong FUN_14407002a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144070062 FUN_144070062 body=48 status=ok
// SIG undefined FUN_144070062(void)

longlong FUN_144070062(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2e0;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407009e FUN_14407009e body=159 status=ok
// SIG undefined FUN_14407009e(void)

void FUN_14407009e(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x98) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x9c) = iVar2;
  return;
}



// FUNCTION 14407018e FUN_14407018e body=48 status=ok
// SIG undefined FUN_14407018e(void)

longlong FUN_14407018e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x310;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440701d6 FUN_1440701d6 body=38 status=ok
// SIG undefined FUN_1440701d6(void)

undefined8 FUN_1440701d6(undefined8 param_1,int param_2)

{
  FUN_14406e362();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440701fc FUN_1440701fc body=45 status=ok
// SIG undefined FUN_1440701fc(void)

longlong FUN_1440701fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407022a FUN_14407022a body=48 status=ok
// SIG undefined FUN_14407022a(void)

longlong FUN_14407022a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407025a FUN_14407025a body=48 status=ok
// SIG undefined FUN_14407025a(void)

longlong FUN_14407025a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2e0;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407028a FUN_14407028a body=48 status=ok
// SIG undefined FUN_14407028a(void)

longlong FUN_14407028a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x310;
  FUN_14406e362(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440702ba FUN_1440702ba body=38 status=ok
// SIG undefined FUN_1440702ba(void)

undefined8 FUN_1440702ba(undefined8 param_1,int param_2)

{
  FUN_14406ea08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440702e0 FUN_1440702e0 body=45 status=ok
// SIG undefined FUN_1440702e0(void)

longlong FUN_1440702e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14406ea08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407030e FUN_14407030e body=48 status=ok
// SIG undefined FUN_14407030e(void)

longlong FUN_14407030e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_14406ea08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407033e FUN_14407033e body=48 status=ok
// SIG undefined FUN_14407033e(void)

longlong FUN_14407033e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2e0;
  FUN_14406ea08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407036e FUN_14407036e body=48 status=ok
// SIG undefined FUN_14407036e(void)

longlong FUN_14407036e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x310;
  FUN_14406ea08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407039e FUN_14407039e body=38 status=ok
// SIG undefined FUN_14407039e(void)

undefined8 FUN_14407039e(undefined8 param_1,int param_2)

{
  FUN_140cdcea6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440703c4 FUN_1440703c4 body=45 status=ok
// SIG undefined FUN_1440703c4(void)

longlong FUN_1440703c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440703f2 FUN_1440703f2 body=48 status=ok
// SIG undefined FUN_1440703f2(void)

longlong FUN_1440703f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144070422 FUN_144070422 body=38 status=ok
// SIG undefined FUN_144070422(void)

undefined8 FUN_144070422(undefined8 param_1,int param_2)

{
  FUN_143fb2ee8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144070448 FUN_144070448 body=38 status=ok
// SIG undefined FUN_144070448(void)

undefined8 FUN_144070448(undefined8 param_1,int param_2)

{
  FUN_14406f090();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407046e FUN_14407046e body=45 status=ok
// SIG undefined FUN_14407046e(void)

longlong FUN_14407046e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14406f090(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440704a4 FUN_1440704a4 body=38 status=ok
// SIG undefined FUN_1440704a4(void)

undefined8 FUN_1440704a4(undefined8 param_1,int param_2)

{
  FUN_145948cb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440704ca FUN_1440704ca body=45 status=ok
// SIG undefined FUN_1440704ca(void)

longlong FUN_1440704ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145948cb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144070500 FUN_144070500 body=38 status=ok
// SIG undefined FUN_144070500(void)

undefined8 FUN_144070500(undefined8 param_1,int param_2)

{
  FUN_145948cb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144070526 FUN_144070526 body=45 status=ok
// SIG undefined FUN_144070526(void)

longlong FUN_144070526(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145948cb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407055c FUN_14407055c body=38 status=ok
// SIG undefined FUN_14407055c(void)

undefined8 FUN_14407055c(undefined8 param_1,int param_2)

{
  FUN_14406f724();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144070582 FUN_144070582 body=45 status=ok
// SIG undefined FUN_144070582(void)

longlong FUN_144070582(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14406f724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440705b8 FUN_1440705b8 body=79 status=ok
// SIG undefined FUN_1440705b8(void)

undefined8 * FUN_1440705b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8864c0;
  param_1[5] = &PTR_LAB_14b8867a0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145948cb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14407061a FUN_14407061a body=76 status=ok
// SIG undefined FUN_14407061a(void)

undefined8 * FUN_14407061a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b886aa0;
  param_1[5] = &PTR_LAB_14b886d80;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145948cb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


