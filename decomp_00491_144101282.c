// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144101282 FUN_144101282 body=29 status=ok
// SIG undefined FUN_144101282(void)

undefined8 FUN_144101282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14410129f FUN_14410129f body=4745 status=ok
// SIG undefined FUN_14410129f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14410129f(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  char **local_b8;
  undefined1 *local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5fb8 = (ulonglong)uVar2;
  _DAT_14cbc5fc0 = 0x47efffffe0000000;
  _DAT_14cbc5fc8 = 0x47efffffe0000000;
  _DAT_14cbc5fd0 = 0x47efffffe0000000;
  _DAT_14cbc5fd8 = 0x47efffffe0000000;
  _DAT_14cbc5fe0 = 0x47efffffe0000000;
  DAT_14cbc5fe8 = 0x47efffffe0000000;
  _DAT_14cbc5ff0 = 0x47efffffe0000000;
  _DAT_14cbc5ff8 = 0x47efffffe0000000;
  DAT_14cbc6000 = 0;
  _DAT_14cbc6008 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440fc15a;
  local_a8 = &DAT_14011fc1e;
  local_b0 = &DAT_149e02088;
  local_b8 = &local_a8;
  FUN_145ff5b36(&DAT_14cbc6010,"OakCharacterMovement",FUN_145891e72,0);
  atexit((_func_5014 *)&LAB_1440ebff0);
  FUN_1458e052c(&DAT_14cbc6c50);
  _DAT_14cbc6c50 = &PTR_FUN_14b965918;
  DAT_14cbc6c58 = 0;
  _DAT_14cbc6c60 = 0;
  DAT_14cbc6c68 = 0;
  DAT_14cbc6c70 = 0;
  DAT_14cbc6c78 = 0;
  _DAT_14cbc6c80 = 0;
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "Use";
  local_a0 = 3;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6090 = (ulonglong)uVar2;
  local_a8 = "Sight";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6098 = (ulonglong)uVar2;
  local_a8 = "TargetLock";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc60a0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbc60a8);
  if (cVar1 == '\0') {
    _DAT_14cbc60a8 = 0;
    uRam000000014cbc60b0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbc60bc = 0;
  FUN_14052b5e0(&DAT_14cbc60b8,"PlayerAwareness",0);
  _DAT_14cbc60c8 = "PlayerAwareness";
  local_a8 = "basic";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc60d0 = (ulonglong)uVar2;
  local_a8 = "challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc60d8 = (ulonglong)uVar2;
  local_a8 = "online";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc60e0 = (ulonglong)uVar2;
  local_a8 = "social";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc60e8 = (ulonglong)uVar2;
  local_a8 = "alert";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc60f0 = (ulonglong)uVar2;
  local_a8 = "photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc60f8 = (ulonglong)uVar2;
  local_a8 = "generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6100 = (ulonglong)uVar2;
  local_a8 = "mission";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6108 = (ulonglong)uVar2;
  local_a8 = "mail";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6110 = (ulonglong)uVar2;
  local_a8 = "respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6118 = (ulonglong)uVar2;
  local_a8 = "tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6120 = (ulonglong)uVar2;
  local_a8 = "special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6128 = (ulonglong)uVar2;
  local_a8 = "generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6130 = (ulonglong)uVar2;
  local_a8 = "vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6138 = (ulonglong)uVar2;
  local_a8 = "ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6140 = (ulonglong)uVar2;
  local_a8 = "INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6148 = (ulonglong)uVar2;
  local_a8 = "NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6150 = (ulonglong)uVar2;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6158 = (ulonglong)uVar2;
  local_a8 = "collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6160 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc6168,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440ec228);
  FUN_140056680(&DAT_14cbc6178,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440ec239);
  FUN_140056680(&DAT_14cbc6188,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440ec24a);
  FUN_140056680(&DAT_14cbc6198,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1440ec25b);
  FUN_1446f470e(&DAT_14cbc61a8,L"LIMB_GORED",1);
  _DAT_14cbc61b0 = 0x4072c00000000000;
  _DAT_14cbc61b8 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc61c0,L"body",1);
  FUN_1446f470e(&DAT_14cbc61c8,L"title_card",1);
  local_a8 = "Cash";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc61d0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc61d8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440ec26c);
  FUN_1446f470e(&DAT_14cbc61e8,L"UNSET",1);
  local_a8 = "init";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "update";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "config_update";
  local_a0 = 0xd;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "deinit";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbc61f0,L"Party",1);
  FUN_1446f470e(&DAT_14cbc61f8,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbc6200,L"WeaponLockGbxSwimming",1);
  FUN_1446f470e(&DAT_14cbc6208,L"CarryLockGbxSwimming",1);
  FUN_1446f470e(&DAT_14cbc6210,L"Lava",1);
  FUN_1446f470e(&DAT_14cbc6218,L"SuperLava",1);
  FUN_1446f470e(&DAT_14cbc6220,L"OakUnderwaterSwimmable",1);
  FUN_1446f470e(&DAT_14cbc6228,L"ZeroGravity",1);
  FUN_1446f470e(&DAT_14cbc6230,L"Ocean",1);
  local_a8 = "Zipline";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6238 = (ulonglong)uVar2;
  local_a8 = "Target";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc6240 = (ulonglong)uVar2;
  DAT_14cbc6248 = 0;
  _DAT_14cbc6250 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440fcd4a;
  local_a8 = &DAT_14011fc1e;
  local_b0 = &DAT_149e02088;
  local_b8 = &local_a8;
  FUN_145ff61e6(&DAT_14cbc6260,"OakClimbableInteract",FUN_14593e61e,0);
  atexit((_func_5014 *)&LAB_1440f2d79);
  FUN_1446f470e(&DAT_14cbc62e0,L"StageActor",1);
  FUN_1446f470e(&DAT_14cbc62e8,L"Root",1);
  FUN_1446f470e(&DAT_14cbc62f0,L"CutsceneIntro",1);
  FUN_1446f470e(&DAT_14cbc62f8,L"Cutscene",1);
  FUN_1446f470e(&DAT_14cbc6300,L"CinematicMissionGrant",1);
  DAT_14cbc6368 = 0;
  _DAT_14cbc6370 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440fcd50;
  local_a8 = &DAT_14011fc1e;
  FUN_14618a1c6(&local_a8);
  atexit((_func_5014 *)&LAB_1440f45a4);
  DAT_14cbc6460 = 0;
  _DAT_14cbc6468 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440fcd56;
  local_a8 = &DAT_14011fc1e;
  FUN_14618a8c2(&local_a8);
  atexit((_func_5014 *)&LAB_1440f45d2);
  _DAT_14cbc64f8 = &LAB_1440f45d7;
  _DAT_14cbc6500 = 0x44520000;
  DAT_14cbc6504 = 1;
  DAT_14cbc64f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc64f0;
  atexit((_func_5014 *)&LAB_1440f45dc);
  _DAT_14cbc6518 = &LAB_1440f4610;
  _DAT_14cbc6520 = 0x44524000;
  DAT_14cbc6524 = 1;
  DAT_14cbc6510 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc6510;
  atexit((_func_5014 *)&LAB_1440f4615);
  local_a8 = "SMInstance";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6530 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc6548,L"CritterSlot",1);
  FUN_1446f470e(&DAT_14cbc6550,L"Root",1);
  FUN_1446f470e(&DAT_14cbc6558,L"Sprite",1);
  DAT_14cbc6568 = 0;
  LOCK();
  DAT_14cbc6560 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1440f5aa1);
  _DAT_14cbc6578 = &LAB_1440f5aa6;
  _DAT_14cbc6580 = 0x45001000;
  DAT_14cbc6584 = 1;
  DAT_14cbc6570 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc6570;
  atexit((_func_5014 *)&LAB_1440f5aab);
  _DAT_14cbc6598 = &LAB_1440f5adf;
  _DAT_14cbc65a0 = 0x45001000;
  DAT_14cbc65a4 = 1;
  DAT_14cbc6590 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc6590;
  atexit((_func_5014 *)&LAB_1440f5ae4);
  FUN_1446f470e(&DAT_14cbc65b0,L"Root",1);
  FUN_1446f470e(&DAT_14cbc65b8,L"Sprite");
  _DAT_14cbc65c8 = 0;
  LOCK();
  DAT_14cbc65c0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1440f5b18);
  DAT_14cbc65d0._4_4_ = 0;
  DAT_14cbc65d8 = 0;
  FUN_14052b5e0(&DAT_14cbc65d0,"def_globals_critter",0);
  _DAT_14cbc65e0 = "def_globals_critter";
  DAT_14cbc65e8 = 0;
  atexit((_func_5014 *)&LAB_1440f5b1d);
  local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cbc6680,L"gbx.Critters.Enabled",&local_a8,
                L"Whether the Oak Critters are enabled. 0 for disabled, non-zero for enabled.");
  atexit(FUN_1440f5b35);
  local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cbc6698,L"gbx.Critters.EnabledInSplitScreen",&local_a8,
                L"Whether the Oak Critters are enabled while in split-screen. 0 for disabled, non-zero for enabled."
               );
  atexit(FUN_1440f5b7a);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,0x41f00000);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cbc66b0,L"gbx.Critters.MaxFrameTime");
  atexit(FUN_1440f5bbf);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1412cc41e(&DAT_14cbc66c8,L"CritterManager",0,0);
  _DAT_14cbc66e0 = 0;
  uRam000000014cbc66e8 = 0;
  _DAT_14cbc66d8 = &PTR_FUN_14b72c590;
  _DAT_14cbc66f0 = 0;
  uRam000000014cbc66f8 = 0;
  _DAT_14cbc6700 = 0;
  uRam000000014cbc6708 = 0;
  _DAT_14cbc6710 = 0x40400000;
  _DAT_14cbc6714 = 0;
  _DAT_14cbc6718 = 0x40a00000;
  _DAT_14cbc671c = 0;
  _DAT_14cbc6720 = 10;
  _DAT_14cbc6728 = 0;
  uRam000000014cbc6730 = 0;
  _DAT_14cbc6738 = 0;
  uRam000000014cbc6740 = 0;
  _DAT_14cbc6748 = 0;
  uRam000000014cbc6750 = 0;
  _DAT_14cbc6758 = 0;
  uRam000000014cbc6760 = 0;
  _DAT_14cbc6768 = 0;
  uRam000000014cbc6770 = 0;
  DAT_14cbc6778 = 0;
  atexit((_func_5014 *)&LAB_1440f91b4);
  local_a8 = "revived";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc6c88 = (ulonglong)uVar2;
  _DAT_14cbc6788 = &LAB_1440f9554;
  _DAT_14cbc6790 = 0x442ccccd;
  DAT_14cbc6794 = 1;
  DAT_14cbc6780 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc6780;
  atexit((_func_5014 *)&LAB_1440f9559);
  local_a8 = "Downed";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc67a0 = (ulonglong)uVar2;
  local_a8 = "CanBeDowned";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc67a8 = (ulonglong)uVar2;
  local_a8 = "BeingRevived";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc67b0 = (ulonglong)uVar2;
  local_a8 = "DownStateStarted";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc67b8 = (ulonglong)uVar2;
  FUN_146622e3c();
  atexit((_func_5014 *)&LAB_1440f958d);
  local_a8 = "reason";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"FFYL",1);
  _DAT_14cbc6980 = 0;
  local_a8 = "num_revivers";
  local_a0 = 0xc;
  local_9c = 0;
  _DAT_14cbc6978 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"FFYL",1);
  _DAT_14cbc6990 = 0;
  _DAT_14cbc69a0 = &LAB_1440fb08f;
  _DAT_14cbc69a8 = 0x47c2a64d;
  DAT_14cbc69ac = 1;
  DAT_14cbc6998 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc6998;
  DAT_14cbc6988 = (ulonglong)uVar2;
  atexit((_func_5014 *)&LAB_1440fb094);
  FUN_146623378();
  atexit((_func_5014 *)&LAB_1440fb0c8);
  local_a8 = "health_percent";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Health",1);
  _DAT_14cbc6b78 = 0;
  local_a8 = "instant_health";
  local_a0 = 0xe;
  local_9c = 0;
  _DAT_14cbc6b70 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Health",1);
  _DAT_14cbc6b88 = 0;
  local_a8 = "health_over_time";
  local_a0 = 0x10;
  local_9c = 0;
  _DAT_14cbc6b80 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Health",1);
  _DAT_14cbc6b98 = 0;
  local_a8 = "repair_duration";
  local_a0 = 0xf;
  local_9c = 0;
  _DAT_14cbc6b90 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Health");
  _DAT_14cbc6ba8 = 0;
  DAT_14cbc6bb0._4_4_ = 0;
  DAT_14cbc6bb8 = 0;
  _DAT_14cbc6ba0 = (ulonglong)uVar2;
  FUN_14052b5e0(&DAT_14cbc6bb0,"bMelee",0);
  _DAT_14cbc6bc0 = "bMelee";
  local_a8 = "DmgSrc_Melee";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc6bc8 = (ulonglong)uVar2;
  local_a8 = "InitialDamage";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6bd0 = (ulonglong)uVar2;
  local_a8 = "OakPipeline";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6bd8 = (ulonglong)uVar2;
  local_a8 = "PlayerDifficulty";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6be0 = (ulonglong)uVar2;
  local_a8 = "ElementalAtt";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6be8 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441025a0 FUN_1441025a0 body=111 status=ok
// SIG undefined FUN_1441025a0(void)

undefined8 FUN_1441025a0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140da3b08();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140da3b08();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar1 = FUN_14108fcb8(uVar1,param_2);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 144102610 FUN_144102610 body=1239 status=ok
// SIG undefined FUN_144102610(void)

void FUN_144102610(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_144102a42;
    if (iVar7 != 1) goto LAB_14410265a;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_144102a42;
  }
  else {
LAB_14410265a:
    if (iVar7 == 0x10) goto LAB_144102a42;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_144102a42:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_144102a42;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_1441027c7;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1441110e7);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_1441027c7:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_144102847;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_144102847:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14b967320;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b967300;
    local_68[0] = &LAB_1441110a0;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cbc8e54);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144102baa FUN_144102baa body=441 status=ok
// SIG undefined FUN_144102baa(void)

void FUN_144102baa(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong *plStack_48;
  longlong local_40;
  ulonglong uStack_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_143d0e900();
  local_a8 = &PTR_FUN_14a18e458;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_1409f759a();
  FUN_1409f75d4(&local_a8,&DAT_14cbc8e58,uVar2,0);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x3b0) + 0x18))(param_1 + 0x3b0);
  FUN_14078ab28(uVar2,&local_a8);
  FUN_140da3c3c(param_1 + 0x6b8,param_1,0);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140da3b08();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140da3b08();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_14145876a(param_1 + 0x6b8,*(undefined1 *)(lVar5 + 0x57));
      }
    }
  }
  local_a8 = &PTR_FUN_14a18e458;
  FUN_1401edebb(local_30,uStack_28 & 0xffffffff);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ede73(local_40,uStack_38 & 0xffffffff);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
  }
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_98 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144102d76 FUN_144102d76 body=1156 status=ok
// SIG undefined FUN_144102d76(void)

undefined2 * FUN_144102d76(undefined2 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  code *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_80 = &local_48;
      local_48 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1459f2e4c;
      local_88 = &LAB_148c39de3;
      local_90 = &LAB_1457a9eb2;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) && (param_2 != 0))
    {
      lVar7 = *(longlong *)(param_2 + 0x38);
      if (lVar7 == 0) {
        uVar6 = FUN_14050c9fe();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(param_2 + 0x38) = lVar7;
      }
      plVar1 = (longlong *)(param_2 + 0x30);
      lVar8 = *(longlong *)(param_2 + 0x40);
      if (lVar8 == 0) {
        if ((lVar7 != 0) && (*plVar1 != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if (plVar3 != (longlong *)0x0) {
            cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
            if (cVar4 != '\0') {
              uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar8 = FUN_144aff482(uVar6,plVar1);
              *(longlong *)(param_2 + 0x40) = lVar8;
              if (lVar8 != 0) {
                lVar7 = *(longlong *)(param_2 + 0x38);
                goto LAB_144102e2f;
              }
              goto LAB_144102dcf;
            }
          }
          *(undefined8 *)(param_2 + 0x40) = 0;
        }
      }
      else {
LAB_144102e2f:
        if (lVar7 == 0) {
          uVar6 = FUN_14050c9fe();
          lVar7 = FUN_14477b664(uVar6);
          *(longlong *)(param_2 + 0x38) = lVar7;
          lVar8 = *(longlong *)(param_2 + 0x40);
          if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
            plVar3 = *(longlong **)(lVar7 + 0xb8);
            if (plVar3 == (longlong *)0x0) {
LAB_1441031f3:
              lVar8 = 0;
            }
            else {
              cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
              if (cVar4 == '\0') goto LAB_1441031f3;
              uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar8 = FUN_144aff482(uVar6,plVar1);
            }
            *(longlong *)(param_2 + 0x40) = lVar8;
          }
        }
        uVar6 = FUN_1406d3bdc();
        cVar4 = FUN_1448093f4(lVar8,uVar6);
        if ((lVar8 != 0) && (cVar4 != '\0')) {
          if (*(int *)(lVar8 + 0x26c) == 2) {
            lVar7 = FUN_14054e4ec(param_2,0);
            if (lVar7 == 0) goto LAB_1441030f0;
            lVar8 = FUN_140e06fb1(param_3);
            if (lVar8 == 0) {
              local_48 = (code *)0x0;
              plStack_40 = (longlong *)0x0;
            }
            else {
              FUN_1405f62be(lVar8,&local_48);
              if (local_48 != (code *)0x0) {
                piVar9 = &DAT_14c9485f0;
                if (*(int **)(lVar7 + 8) != (int *)0x0) {
                  piVar9 = *(int **)(lVar7 + 8);
                }
                if (((*piVar9 == 0) || (iVar2 = piVar9[1], iVar2 == 0)) ||
                   (*piVar9 == DAT_14c948000)) {
LAB_144103126:
                  local_60 = DAT_14c948620;
                  local_68 = DAT_14c948618;
                }
                else {
                  if ((iVar2 < 2) && (piVar9[9] < 1)) {
                    piVar9 = piVar9 + 2;
                  }
                  else {
                    piVar9 = *(int **)(piVar9 + 6);
                  }
                  if (iVar2 < 1) goto LAB_144103126;
                  local_60 = piVar9[2];
                  local_68 = *(undefined8 *)piVar9;
                }
                (**(code **)(*(longlong *)local_48 + 0x78))(local_48,&local_58,&local_68);
                if (local_58 != 0) {
                  cVar4 = FUN_1405f61f4();
                  *(bool *)param_1 = cVar4 == '\x06';
                  *(undefined1 *)((longlong)param_1 + 1) = 1;
                  if (local_50 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_50 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_50)(local_50);
                      LOCK();
                      piVar9 = (int *)((longlong)local_50 + 0xc);
                      *piVar9 = *piVar9 + -1;
                      UNLOCK();
                      if (*piVar9 == 0) {
                        (**(code **)(*local_50 + 0x10))(local_50);
                      }
                    }
                  }
                  plVar1 = plStack_40;
                  if (plStack_40 != (longlong *)0x0) {
                    LOCK();
                    plVar3 = plStack_40 + 1;
                    *(int *)plVar3 = (int)*plVar3 + -1;
                    UNLOCK();
                    if ((int)*plVar3 == 0) {
                      (**(code **)*plStack_40)(plStack_40);
                      LOCK();
                      piVar9 = (int *)((longlong)plVar1 + 0xc);
                      *piVar9 = *piVar9 + -1;
                      UNLOCK();
                      if (*piVar9 == 0) {
                        (**(code **)(*plVar1 + 0x10))(plVar1);
                      }
                    }
                  }
                  goto LAB_144102dd3;
                }
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_50 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_50)(local_50);
                    LOCK();
                    piVar9 = (int *)((longlong)local_50 + 0xc);
                    *piVar9 = *piVar9 + -1;
                    UNLOCK();
                    if (*piVar9 == 0) {
                      (**(code **)(*local_50 + 0x10))(local_50);
                    }
                  }
                }
              }
            }
            plVar1 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_40 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar9 = (int *)((longlong)plVar1 + 0xc);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (*piVar9 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          else {
            if (*(int *)(lVar8 + 0x26c) != 1) goto LAB_144102dcf;
            lVar7 = FUN_1418e26dc(param_2,0);
            if (lVar7 != 0) {
              lVar8 = FUN_1410eb0b6(param_3);
              if (lVar8 != 0) {
                uVar5 = FUN_1411e55f8(lVar8,lVar7);
                *(undefined1 *)param_1 = uVar5;
                *(undefined1 *)((longlong)param_1 + 1) = 1;
                goto LAB_144102dd3;
              }
            }
          }
LAB_1441030f0:
          *param_1 = 0x100;
          goto LAB_144102dd3;
        }
      }
    }
  }
LAB_144102dcf:
  *(undefined1 *)((longlong)param_1 + 1) = 0;
LAB_144102dd3:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144103214 FUN_144103214 body=2602 status=ok
// SIG undefined FUN_144103214(void)

undefined8 * FUN_144103214(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  longlong lStack_60;
  longlong local_58;
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = FUN_14061177a(param_3);
  if (lVar6 == 0) goto LAB_144103b35;
  uVar7 = FUN_1406d3bdc();
  cVar5 = FUN_1448093f4(lVar6,uVar7);
  if (cVar5 == '\0') goto LAB_144103b35;
  iVar1 = *(int *)(lVar6 + 0x26c);
  local_68 = (undefined2 *)0x0;
  lStack_60 = 0;
  local_58 = 0;
  if (iVar1 == 3) {
    cVar5 = FUN_140114204((undefined8 *)(param_1 + 0x440));
    if (cVar5 != '\0') {
      puVar10 = (undefined8 *)FUN_140ec8370(param_2);
      lVar6 = FUN_140820982();
      local_40 = *(undefined8 *)(lVar6 + 0x18);
      FUN_1400021e4(&local_40,&local_50);
      puVar12 = local_50;
      if (local_48 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar12,1);
      *puVar10 = local_40;
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(param_1 + 0x448);
      puVar10[2] = *(undefined8 *)(param_1 + 0x440);
      FUN_1447715ec(puVar10 + 4,param_1 + 0x450);
    }
    goto LAB_144103b35;
  }
  if (iVar1 == 2) {
    lVar6 = *(longlong *)(param_1 + 0x430);
    if (lVar6 == 0) {
      uVar7 = FUN_14060ed7a();
      lVar6 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x430) = lVar6;
    }
    plVar13 = (longlong *)(param_1 + 0x428);
    if (*(longlong *)(param_1 + 0x438) == 0) {
      if ((lVar6 == 0) || (*plVar13 == 0)) goto LAB_144103b35;
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        *(undefined8 *)(param_1 + 0x438) = 0;
        goto LAB_144103b35;
      }
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar7,plVar13);
      *(longlong *)(param_1 + 0x438) = lVar6;
      if (lVar6 == 0) goto LAB_144103b35;
      lVar6 = *(longlong *)(param_1 + 0x430);
    }
    if (lVar6 == 0) {
      uVar7 = FUN_14060ed7a();
      lVar6 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x430) = lVar6;
      if (((*(longlong *)(param_1 + 0x438) == 0) && (lVar6 != 0)) && (*plVar13 != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar7 = FUN_144aff482(uVar7,plVar13);
        }
        *(undefined8 *)(param_1 + 0x438) = uVar7;
      }
    }
    puVar10 = (undefined8 *)FUN_140ec8370(param_2);
    lVar6 = *(longlong *)(param_1 + 0x430);
    if (lVar6 == 0) {
      uVar7 = FUN_14060ed7a();
      lVar6 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x430) = lVar6;
    }
    if (((*(longlong *)(param_1 + 0x438) == 0) && (lVar6 != 0)) && (*plVar13 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar7 = FUN_144aff482(uVar7,plVar13);
      }
      *(undefined8 *)(param_1 + 0x438) = uVar7;
    }
    lVar6 = FUN_14060ed7a();
  }
  else {
    if (iVar1 != 1) goto LAB_144103b35;
    uVar7 = FUN_143d16358(param_3);
    lVar6 = FUN_141154df6(uVar7);
    uVar7 = FUN_14054e994();
    lStack_60 = FUN_14477b664(uVar7);
    lVar8 = FUN_14054e994();
    uVar7 = FUN_14054e994();
    FUN_1402d1bfa(&local_50,uVar7,lVar6);
    if (local_68 != local_50) {
      local_58 = 0;
    }
    local_68 = local_50;
    lVar9 = FUN_14054e994();
    if (lVar8 == 0) {
LAB_144103328:
      lVar9 = lVar8;
    }
    else if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
             lVar9 + 0x30)) goto LAB_144103328;
    if (lStack_60 != lVar9) {
      local_58 = 0;
    }
    uVar7 = FUN_14477b664(lVar9);
    lStack_60 = FUN_14477b664(uVar7);
    if (((lStack_60 == 0) || (local_68 == (undefined2 *)0x0)) && (lVar6 = local_58, lStack_60 == 0))
    {
      uVar7 = FUN_14054e994();
      lStack_60 = FUN_14477b664(uVar7);
      lVar6 = local_58;
    }
    local_58 = lVar6;
    if (local_58 == 0) {
      local_58 = 0;
      bVar4 = false;
      if ((lStack_60 != 0) && (bVar4 = false, local_68 != (undefined2 *)0x0)) {
        plVar13 = *(longlong **)(lStack_60 + 0xb8);
        if ((plVar13 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar5 == '\0')) {
          local_58 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar13 + 0x110))(plVar13);
          local_58 = FUN_144aff482(uVar7,&local_68);
          if (local_58 != 0) goto LAB_14410351a;
        }
        bVar4 = false;
      }
    }
    else {
LAB_14410351a:
      if (lStack_60 == 0) {
        uVar7 = FUN_14054e994();
        lStack_60 = FUN_14477b664(uVar7);
        if (((lStack_60 != 0) && (local_58 == 0)) && (local_68 != (undefined2 *)0x0)) {
          plVar13 = *(longlong **)(lStack_60 + 0xb8);
          if ((plVar13 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar5 == '\0')) {
            local_58 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar13 + 0x110))(plVar13);
            local_58 = FUN_144aff482(uVar7,&local_68);
          }
        }
      }
      puVar10 = (undefined8 *)FUN_140ec8370(param_2);
      if (lStack_60 == 0) {
        uVar7 = FUN_14054e994();
        lStack_60 = FUN_14477b664(uVar7);
      }
      if (((lStack_60 != 0) && (local_58 == 0)) && (local_68 != (undefined2 *)0x0)) {
        plVar13 = *(longlong **)(lStack_60 + 0xb8);
        if ((plVar13 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar5 == '\0')) {
          local_58 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar13 + 0x110))(plVar13);
          local_58 = FUN_144aff482(uVar7,&local_68);
        }
      }
      lVar6 = FUN_14054e994();
      local_40 = *(undefined8 *)(lVar6 + 0x18);
      FUN_1400021e4(&local_40,&local_50);
      puVar12 = local_50;
      if (local_48 == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar12,1);
      *puVar10 = local_40;
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar10[1] = local_68;
      bVar4 = true;
    }
    lVar6 = *(longlong *)(param_1 + 0x418);
    if (lVar6 == 0) {
      uVar7 = FUN_14054e994();
      lVar6 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x418) = lVar6;
    }
    plVar13 = (longlong *)(param_1 + 0x410);
    if (*(longlong *)(param_1 + 0x420) == 0) {
      if ((lVar6 == 0) || (*plVar13 == 0)) goto LAB_144103b35;
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        *(undefined8 *)(param_1 + 0x420) = 0;
        goto LAB_144103b35;
      }
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar7,plVar13);
      *(longlong *)(param_1 + 0x420) = lVar6;
      if (lVar6 == 0) goto LAB_144103b35;
    }
    if (lStack_60 == 0) {
      uVar7 = FUN_14054e994();
      lStack_60 = FUN_14477b664(uVar7);
    }
    if (local_58 == 0) {
      if ((lStack_60 != 0) && (local_68 != (undefined2 *)0x0)) {
        plVar2 = *(longlong **)(lStack_60 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          local_58 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          local_58 = FUN_144aff482(uVar7,&local_68);
          if (local_58 != 0) goto LAB_1441037b2;
        }
      }
    }
    else {
LAB_1441037b2:
      if (lStack_60 == 0) {
        uVar7 = FUN_14054e994();
        lStack_60 = FUN_14477b664(uVar7);
      }
      lVar6 = *(longlong *)(param_1 + 0x418);
      if (lVar6 == 0) {
        lVar6 = FUN_14054e994();
      }
      lVar6 = FUN_14477b664(lVar6);
      if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0xb8), plVar2 != (longlong *)0x0)) {
        lVar6 = *plVar2;
        pcVar3 = *(code **)(lVar6 + 0x108);
        if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
          cVar5 = (*pcVar3)(plVar2);
          if (cVar5 == '\0') goto LAB_144103844;
          lVar6 = *plVar2;
        }
        pcVar3 = *(code **)(lVar6 + 0x110);
        if (pcVar3 == (code *)&LAB_144783426) {
          ppuVar11 = &PTR_PTR_14c763408;
        }
        else if (pcVar3 == (code *)&LAB_144783432) {
          ppuVar11 = &PTR_PTR_14c75f798;
        }
        else {
          ppuVar11 = (undefined **)(*pcVar3)(plVar2);
        }
        FUN_144aff48c(ppuVar11);
      }
LAB_144103844:
      if ((lStack_60 != 0) && (plVar2 = *(longlong **)(lStack_60 + 0xb8), plVar2 != (longlong *)0x0)
         ) {
        lVar6 = *plVar2;
        pcVar3 = *(code **)(lVar6 + 0x108);
        if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
          cVar5 = (*pcVar3)(plVar2);
          if (cVar5 == '\0') goto LAB_1441038ab;
          lVar6 = *plVar2;
        }
        pcVar3 = *(code **)(lVar6 + 0x110);
        if (pcVar3 == (code *)&LAB_144783426) {
          ppuVar11 = &PTR_PTR_14c763408;
        }
        else if (pcVar3 == (code *)&LAB_144783432) {
          ppuVar11 = &PTR_PTR_14c75f798;
        }
        else {
          ppuVar11 = (undefined **)(*pcVar3)(plVar2);
        }
        FUN_144aff48c(ppuVar11);
      }
    }
LAB_1441038ab:
    if (bVar4) goto LAB_144103b35;
    lVar6 = *(longlong *)(param_1 + 0x418);
    if (lVar6 == 0) {
      uVar7 = FUN_14054e994();
      lVar6 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x418) = lVar6;
    }
    if (((*(longlong *)(param_1 + 0x420) == 0) && (lVar6 != 0)) && (*plVar13 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar7 = FUN_144aff482(uVar7,plVar13);
      }
      *(undefined8 *)(param_1 + 0x420) = uVar7;
    }
    puVar10 = (undefined8 *)FUN_140ec8370(param_2);
    lVar6 = *(longlong *)(param_1 + 0x418);
    if (lVar6 == 0) {
      uVar7 = FUN_14054e994();
      lVar6 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x418) = lVar6;
    }
    if (((*(longlong *)(param_1 + 0x420) == 0) && (lVar6 != 0)) && (*plVar13 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar7 = FUN_144aff482(uVar7,plVar13);
      }
      *(undefined8 *)(param_1 + 0x420) = uVar7;
    }
    lVar6 = FUN_14054e994();
  }
  local_40 = *(undefined8 *)(lVar6 + 0x18);
  FUN_1400021e4(&local_40,&local_50);
  puVar12 = local_50;
  if (local_48 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar12,1);
  *puVar10 = local_40;
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar10[1] = *plVar13;
LAB_144103b35:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144103c40 FUN_144103c40 body=5701 status=ok
// SIG undefined FUN_144103c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_144103c40(undefined4 param_1,int param_2,longlong param_3,int param_4,longlong param_5,
                    longlong *param_6,undefined8 param_7)

{
  void *_Src;
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong *in_RCX;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  byte bVar17;
  bool bVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  byte *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  char local_98;
  char cStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  int local_90;
  int iStack_8c;
  byte local_88;
  char cStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = in_RCX[0x59];
  local_c4 = param_2;
  if (lVar4 == 0) {
    uVar3 = FUN_140bd9786();
    lVar4 = FUN_14477b664(uVar3);
    in_RCX[0x59] = lVar4;
    param_1 = extraout_XMM0_Da;
  }
  plVar8 = in_RCX + 0x58;
  bVar18 = true;
  if (in_RCX[0x5a] == 0) {
    lVar5 = 0;
    if ((lVar4 != 0) && (*plVar8 != 0)) {
      plVar7 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), param_1 = extraout_XMM0_Da_00,
         cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar5 = FUN_144aff482(uVar3,plVar8);
        param_1 = extraout_XMM0_Da_01;
      }
      in_RCX[0x5a] = lVar5;
    }
    bVar18 = lVar5 != 0;
  }
  if ((param_4 == 2) && (bVar18)) {
    if (param_5 == 0) {
LAB_144103ffa:
      if (param_6 != (longlong *)0x0) {
        lVar4 = FUN_141068032();
        param_1 = extraout_XMM0_Da_07;
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(param_6[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(param_6[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
             == lVar4 + 0x30)) &&
           (lVar4 = (**(code **)(param_6[0x354] + 0x38))(param_6 + 0x354),
           param_1 = extraout_XMM0_Da_18, lVar4 != 0)) goto LAB_144103d5e;
      }
    }
    else {
      lVar4 = *(longlong *)(param_5 + 0x240);
      if (lVar4 == 0) {
        uVar3 = *(undefined8 *)(param_5 + 0x230);
        local_88 = (byte)uVar3;
        cStack_87 = (char)((ulonglong)uVar3 >> 8);
        uStack_86 = (undefined2)((ulonglong)uVar3 >> 0x10);
        uStack_84 = (undefined4)((ulonglong)uVar3 >> 0x20);
        lVar4 = FUN_14050aea0();
        *(longlong *)(param_5 + 0x240) = lVar4;
        param_1 = extraout_XMM0_Da_02;
        if (lVar4 == 0) goto LAB_144103ffa;
      }
LAB_144103d5e:
      plVar7 = *(longlong **)(lVar4 + 0x38);
      if ((((plVar7 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,param_7), cVar2 == '\0')) ||
          (cVar2 = FUN_140db3cd0(lVar4,param_7), cVar2 == '\0')) &&
         (cVar2 = FUN_140db3cd0(lVar4,param_7), cVar2 != '\0')) {
        lVar5 = *(longlong *)(lVar4 + 0x38);
        plVar7 = *(longlong **)(lVar4 + 0x40);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar10 = (int *)((longlong)plVar7 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar10 = (int *)((longlong)plVar7 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if ((lVar5 == 0) || (lVar5 = FUN_141450d48(lVar4), lVar5 == 0)) goto LAB_144103e22;
LAB_144103f23:
        cVar2 = FUN_148e08dd2(lVar5,param_3);
        if (cVar2 != '\0') {
          lVar4 = in_RCX[0x5c];
          if (lVar4 == 0) {
            uVar3 = FUN_140bd9786();
            lVar4 = FUN_14477b664(uVar3);
            in_RCX[0x5c] = lVar4;
          }
          plVar7 = in_RCX + 0x5b;
          pbVar6 = (byte *)in_RCX[0x5d];
          if (pbVar6 != (byte *)0x0) {
LAB_144103f6d:
            if (lVar4 == 0) {
              uVar3 = FUN_140bd9786();
              lVar4 = FUN_14477b664(uVar3);
              in_RCX[0x5c] = lVar4;
              pbVar6 = (byte *)in_RCX[0x5d];
              if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) && (*plVar7 != 0))
              {
                plVar8 = *(longlong **)(lVar4 + 0xb8);
                if ((plVar8 == (longlong *)0x0) ||
                   (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
                  pbVar6 = (byte *)0x0;
                }
                else {
                  uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
                  pbVar6 = (byte *)FUN_144aff482(uVar3,plVar7);
                }
                in_RCX[0x5d] = (longlong)pbVar6;
              }
            }
            goto LAB_144104ba6;
          }
          if ((lVar4 != 0) && (*plVar7 != 0)) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              in_RCX[0x5d] = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              pbVar6 = (byte *)FUN_144aff482(uVar3,plVar7);
              in_RCX[0x5d] = (longlong)pbVar6;
              if (pbVar6 != (byte *)0x0) {
                lVar4 = in_RCX[0x5c];
                goto LAB_144103f6d;
              }
            }
          }
        }
        lVar4 = in_RCX[0x59];
        if (lVar4 == 0) {
          uVar3 = FUN_140bd9786();
          lVar4 = FUN_14477b664(uVar3);
          in_RCX[0x59] = lVar4;
        }
        pbVar6 = (byte *)in_RCX[0x5a];
        if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) && (*plVar8 != 0)) {
          plVar7 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar7 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
            pbVar6 = (byte *)0x0;
          }
          else {
            uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
            pbVar6 = (byte *)FUN_144aff482(uVar3,plVar8);
          }
          in_RCX[0x5a] = (longlong)pbVar6;
        }
        goto LAB_144104ba6;
      }
LAB_144103e22:
      lVar5 = *(longlong *)(lVar4 + 0xb8);
      if (lVar5 == 0) {
        uVar3 = *(undefined8 *)(lVar4 + 0xa8);
        local_88 = (byte)uVar3;
        cStack_87 = (char)((ulonglong)uVar3 >> 8);
        uStack_86 = (undefined2)((ulonglong)uVar3 >> 0x10);
        uStack_84 = (undefined4)((ulonglong)uVar3 >> 0x20);
        lVar5 = FUN_14050aea0();
        *(longlong *)(lVar4 + 0xb8) = lVar5;
        param_1 = extraout_XMM0_Da_03;
        if (lVar5 == 0) goto LAB_144104023;
      }
      plVar7 = *(longlong **)(lVar5 + 0x38);
      if ((((plVar7 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,param_7), cVar2 == '\0')) ||
          (cVar2 = FUN_140db3cd0(lVar5,param_7), param_1 = extraout_XMM0_Da_04, cVar2 == '\0')) &&
         (cVar2 = FUN_140db3cd0(lVar4,param_7), param_1 = extraout_XMM0_Da_05, cVar2 != '\0')) {
        lVar4 = *(longlong *)(lVar5 + 0x38);
        plVar7 = *(longlong **)(lVar5 + 0x40);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            param_1 = (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar10 = (int *)((longlong)plVar7 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              param_1 = (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            param_1 = (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar10 = (int *)((longlong)plVar7 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              param_1 = (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if ((lVar4 != 0) &&
           (lVar5 = FUN_141450d48(lVar5), param_1 = extraout_XMM0_Da_06, lVar5 != 0))
        goto LAB_144103f23;
      }
    }
  }
LAB_144104023:
  lVar4 = in_RCX[0x47];
  if (lVar4 == 0) {
    uVar3 = FUN_140bd9786();
    lVar4 = FUN_14477b664(uVar3);
    in_RCX[0x47] = lVar4;
    param_1 = extraout_XMM0_Da_08;
  }
  plVar8 = in_RCX + 0x46;
  bVar18 = true;
  if (in_RCX[0x48] == 0) {
    lVar5 = 0;
    if ((lVar4 != 0) && (*plVar8 != 0)) {
      plVar7 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), param_1 = extraout_XMM0_Da_09,
         cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar5 = FUN_144aff482(uVar3,plVar8);
        param_1 = extraout_XMM0_Da_10;
      }
      in_RCX[0x48] = lVar5;
    }
    bVar18 = lVar5 != 0;
  }
  if ((((1 < param_4) && (param_5 != 0)) && (bVar18)) && (param_3 != 0)) {
    uVar3 = FUN_1447210f0(param_3);
    lVar4 = FUN_140149a73(uVar3,0);
    param_1 = extraout_XMM0_Da_11;
    if ((lVar4 != 0) &&
       (plVar7 = (longlong *)FUN_1403a0144(lVar4), param_1 = extraout_XMM0_Da_12,
       plVar7 != (longlong *)0x0)) {
      lVar4 = FUN_140d1d7e4();
      if ((((*(int *)(lVar4 + 0x30) == 0) ||
           ((iVar12 = *(int *)(lVar4 + 0x34), iVar12 == 0 ||
            (*(int *)(lVar4 + 0x30) == DAT_14c948000)))) || (iVar12 == 1)) || (iVar12 < 2)) {
        local_90 = DAT_14c948620;
        lVar4 = DAT_14c948618;
      }
      else {
        local_90 = *(int *)(*(longlong *)(lVar4 + 0x48) + 0x14);
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0xc);
      }
      local_98 = (char)lVar4;
      cStack_97 = (char)((ulonglong)lVar4 >> 8);
      uStack_96 = (undefined2)((ulonglong)lVar4 >> 0x10);
      uStack_94 = (undefined4)((ulonglong)lVar4 >> 0x20);
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_a8,&local_98);
      local_88 = 0;
      uStack_84 = 0;
      iStack_80 = 0;
      iStack_7c = 0;
      param_1 = FUN_144976b9c(&local_88,local_a8);
      if (local_88 == 1) {
        if (iStack_7c != 0) {
LAB_1441041b0:
          param_1 = FUN_144102d76(&local_98,param_5,param_3);
          if ((cStack_97 != '\x01') || (local_98 != '\0')) {
            lVar4 = FUN_140d1d7e4();
            local_b8 = (void *)0x0;
            local_b0 = *(int *)(lVar4 + 0xf8);
            lVar5 = (longlong)local_b0;
            _Src = *(void **)(lVar4 + 0xf0);
            if (lVar5 == 0) {
              local_ac = 0;
            }
            else {
              FUN_148c134f8(&local_b8,local_b0,0);
              memcpy(local_b8,_Src,lVar5 * 0x30);
            }
            pbVar6 = &local_88;
            param_1 = FUN_14435d068(pbVar6,&local_b8);
            bVar18 = true;
            if ((longlong)iStack_80 != 0) {
              pbVar6 = (byte *)CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(cStack_87,local_88)));
              lVar4 = (longlong)iStack_80 * 0x30;
              local_c8 = param_4;
              local_c0 = plVar8;
              do {
                cVar2 = FUN_143d15720(pbVar6,param_5 + 0x80);
                param_4 = local_c8;
                param_1 = extraout_XMM0_Da_13;
                if (cVar2 != '\0') {
                  if (pbVar6 == (byte *)0x0) {
                    pbVar6 = (byte *)0x0;
                  }
                  else {
                    lVar4 = in_RCX[0x47];
                    if (lVar4 == 0) {
                      uVar3 = FUN_140bd9786();
                      lVar4 = FUN_14477b664(uVar3);
                      in_RCX[0x47] = lVar4;
                      param_1 = extraout_XMM0_Da_14;
                    }
                    plVar8 = local_c0;
                    param_4 = local_c8;
                    pbVar6 = (byte *)in_RCX[0x48];
                    if (pbVar6 == (byte *)0x0) {
                      pbVar6 = (byte *)0x0;
                      bVar18 = false;
                      if ((lVar4 != 0) && (*local_c0 != 0)) {
                        plVar7 = *(longlong **)(lVar4 + 0xb8);
                        if ((plVar7 == (longlong *)0x0) ||
                           (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7),
                           param_1 = extraout_XMM0_Da_16, cVar2 == '\0')) {
                          pbVar6 = (byte *)0x0;
                        }
                        else {
                          uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
                          pbVar6 = (byte *)FUN_144aff482(uVar3,plVar8);
                          param_1 = extraout_XMM0_Da_17;
                        }
                        in_RCX[0x48] = (longlong)pbVar6;
                        bVar18 = false;
                      }
                    }
                    else {
                      bVar18 = false;
                    }
                  }
                  break;
                }
                pbVar6 = pbVar6 + 0x30;
                lVar4 = lVar4 + -0x30;
              } while (lVar4 != 0);
            }
            if (CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(cStack_87,local_88))) != 0) {
              param_1 = FUN_1400020a8();
            }
            if (!bVar18) goto LAB_144104ba6;
          }
        }
      }
      else if ((local_88 != 0) &&
              (cVar2 = FUN_140321d1a(&local_88), param_1 = extraout_XMM0_Da_15, cVar2 != '\0'))
      goto LAB_1441041b0;
    }
  }
  if ((*(char *)((longlong)in_RCX + 0x24d) == '\x01') &&
     (cVar2 = FUN_144105286(param_1,param_5,param_7), cVar2 == '\0')) {
LAB_144104587:
    pbVar6 = (byte *)0x0;
    goto LAB_144104ba6;
  }
  if ((local_c4 != 3) && (*(char *)((longlong)in_RCX + 0x24a) != '\0')) {
    FUN_144102d76(&local_88,param_5,param_3);
    bVar16 = 1;
    if (cStack_87 != '\0') {
      bVar16 = local_88 & 1;
    }
    if (param_6 != (longlong *)0x0) {
      uVar3 = FUN_140437988();
      plVar8 = (longlong *)(**(code **)(*param_6 + 0x288))(param_6,uVar3);
      bVar17 = bVar16;
      if (plVar8 != (longlong *)0x0) {
        uVar3 = FUN_140437988();
        plVar7 = (longlong *)FUN_144718840(plVar8,uVar3);
        if (plVar7 != (longlong *)0x0 && plVar8 != plVar7) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cbc89fc) && (FUN_144b3d300(&DAT_14cbc89fc), DAT_14cbc89fc == -1)) {
            FUN_1446f470e(&DAT_14cbc89f0,L"DispenserEmptied",1);
            DAT_14cbc89f8 = 0xffffffff;
            _Init_thread_footer(&DAT_14cbc89fc);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cbc8a0c) && (FUN_144b3d300(&DAT_14cbc8a0c), DAT_14cbc8a0c == -1)) {
            FUN_1446f470e(&DAT_14cbc8a00,&DAT_149e0617a,1);
            _DAT_14cbc8a08 = 0xffffffff;
            _Init_thread_footer(&DAT_14cbc8a0c);
          }
          plVar8 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7);
          if (DAT_14cbc89f0 != 0 || DAT_14cbc89f8 != 0xffffffff) {
            if ((int)DAT_14cbc89f8 < 0) {
              lVar4 = *plVar8;
              uVar13 = *(uint *)(plVar8 + 1);
LAB_14410445f:
              if (uVar13 != 0) {
                uVar9 = (ulonglong)(int)uVar13;
                goto LAB_144104472;
              }
            }
            else {
              uVar13 = *(uint *)(plVar8 + 1);
              uVar9 = (ulonglong)uVar13;
              lVar4 = *plVar8;
              if ((int)uVar13 <= (int)DAT_14cbc89f8) goto LAB_14410445f;
              if (*(longlong *)(lVar4 + 0x68 + (ulonglong)DAT_14cbc89f8 * 0x88) == DAT_14cbc89f0) {
LAB_1441044b8:
                uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
                cVar2 = FUN_1400b1204(uVar3,&DAT_14cbc89f0,&DAT_14cbc8a00);
                bVar17 = 1;
                if (cVar2 != '\0') {
                  bVar17 = bVar16;
                }
                goto LAB_1441044e7;
              }
LAB_144104472:
              uVar15 = 0;
              do {
                if (*(longlong *)(lVar4 + 0x68 + uVar15) == DAT_14cbc89f0) {
                  DAT_14cbc89f8 = (int)(uVar15 >> 3) * -0xf0f0f0f;
                  if (DAT_14cbc89f8 == 0xffffffff) goto LAB_1441044e7;
                  goto LAB_1441044b8;
                }
                lVar5 = lVar4 + uVar15;
                uVar15 = uVar15 + 0x88;
              } while (lVar5 + 0x88 != uVar9 * 0x88 + lVar4);
            }
            DAT_14cbc89f8 = 0xffffffff;
          }
        }
      }
LAB_1441044e7:
      if (bVar17 == 0) goto LAB_144104587;
    }
  }
  if (1 < param_4) {
    iVar12 = *(int *)((longlong)in_RCX + 0x26c);
    if (iVar12 == 1) {
      lVar4 = FUN_1418e26dc(param_5,param_6);
      if (param_3 != 0 && lVar4 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_e0 = &local_88;
          local_88 = 0x22;
          cStack_87 = '\x0f';
          uStack_86 = 0x4103;
          uStack_84 = 1;
          local_d0 = FUN_14081d0ea;
          local_d8 = &LAB_1459f2e4c;
          local_e8 = &LAB_148c39de3;
          local_f0 = &LAB_1457a9eb2;
          local_f8 = &DAT_149e063b2;
          local_100 = 0;
          local_108 = CONCAT44(local_108._4_4_,0x10000004);
          local_110 = (longlong *)CONCAT44(local_110._4_4_,0x10);
          local_118 = CONCAT44(local_118._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
           (lVar5 = FUN_1410eb0b6(param_3), lVar5 != 0)) {
          cVar2 = FUN_1411e55f8(lVar5,lVar4);
          if (cVar2 == '\0') {
            lVar4 = in_RCX[0x50];
            if (lVar4 == 0) {
              uVar3 = FUN_140bd9786();
              lVar4 = FUN_14477b664(uVar3);
              in_RCX[0x50] = lVar4;
            }
            pbVar6 = (byte *)in_RCX[0x51];
            if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) &&
               (in_RCX[0x4f] != 0)) {
              plVar8 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar8 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
                pbVar6 = (byte *)0x0;
              }
              else {
                uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
                pbVar6 = (byte *)FUN_144aff482(uVar3,in_RCX + 0x4f);
              }
              in_RCX[0x51] = (longlong)pbVar6;
            }
          }
          else {
            lVar4 = in_RCX[0x53];
            if (lVar4 == 0) {
              uVar3 = FUN_140bd9786();
              lVar4 = FUN_14477b664(uVar3);
              in_RCX[0x53] = lVar4;
            }
            pbVar6 = (byte *)in_RCX[0x54];
            if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) &&
               (in_RCX[0x52] != 0)) {
              plVar8 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar8 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
                pbVar6 = (byte *)0x0;
              }
              else {
                uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
                pbVar6 = (byte *)FUN_144aff482(uVar3,in_RCX + 0x52);
              }
              in_RCX[0x54] = (longlong)pbVar6;
            }
          }
          goto LAB_144104ba6;
        }
      }
    }
    else if (iVar12 == 2) {
      lVar4 = FUN_14054e4ec(param_5,param_6);
      if (lVar4 != 0) {
        if (param_3 == 0) {
LAB_1441046ea:
          local_88 = 0;
          cStack_87 = '\0';
          uStack_86 = 0;
          uStack_84 = 0;
          iStack_80 = 0;
          iStack_7c = 0;
        }
        else {
          if (DAT_14cbadd90 == 0) {
            local_e0 = &local_88;
            local_88 = 0x22;
            cStack_87 = '\x0f';
            uStack_86 = 0x4103;
            uStack_84 = 1;
            local_d0 = FUN_14081d0ea;
            local_d8 = &LAB_1459f2e4c;
            local_e8 = &LAB_148c39de3;
            local_f0 = &LAB_1457a9eb2;
            local_f8 = &DAT_149e063b2;
            local_100 = 0;
            local_108 = CONCAT44(local_108._4_4_,0x10000004);
            local_110 = (longlong *)CONCAT44(local_110._4_4_,0x10);
            local_118 = CONCAT44(local_118._4_4_,0x3de0);
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if (((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
             (lVar5 = FUN_140e06fb1(param_3), lVar5 == 0)) goto LAB_1441046ea;
          FUN_1405f62be(lVar5,&local_88);
          plVar8 = (longlong *)CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(cStack_87,local_88)));
          if (plVar8 != (longlong *)0x0) {
            piVar10 = &DAT_14c9485f0;
            if (*(int **)(lVar4 + 8) != (int *)0x0) {
              piVar10 = *(int **)(lVar4 + 8);
            }
            if (((*piVar10 == 0) || (iVar12 = piVar10[1], iVar12 == 0)) ||
               (*piVar10 == DAT_14c948000)) {
LAB_144104f99:
              local_a0 = DAT_14c948620;
              local_a8 = DAT_14c948618;
            }
            else {
              if ((iVar12 < 2) && (piVar10[9] < 1)) {
                plVar7 = (longlong *)(piVar10 + 2);
              }
              else {
                plVar7 = *(longlong **)(piVar10 + 6);
              }
              if (iVar12 < 1) goto LAB_144104f99;
              local_a0 = (int)plVar7[1];
              local_a8 = *plVar7;
            }
            (**(code **)(*plVar8 + 0x78))(plVar8,&local_98,&local_a8);
            if (CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(cStack_97,local_98))) != 0) {
              cVar2 = FUN_1405f61f4();
              if (cVar2 == '\x06') {
                lVar4 = in_RCX[0x53];
                if (lVar4 == 0) {
                  uVar3 = FUN_140bd9786();
                  lVar4 = FUN_14477b664(uVar3);
                  in_RCX[0x53] = lVar4;
                }
                pbVar6 = (byte *)in_RCX[0x54];
                if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) &&
                   (in_RCX[0x52] != 0)) {
                  plVar8 = *(longlong **)(lVar4 + 0xb8);
                  if ((plVar8 == (longlong *)0x0) ||
                     (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
                    pbVar6 = (byte *)0x0;
                  }
                  else {
                    uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
                    pbVar6 = (byte *)FUN_144aff482(uVar3,in_RCX + 0x52);
                  }
                  in_RCX[0x54] = (longlong)pbVar6;
                }
              }
              else {
                lVar4 = in_RCX[0x50];
                if (lVar4 == 0) {
                  uVar3 = FUN_140bd9786();
                  lVar4 = FUN_14477b664(uVar3);
                  in_RCX[0x50] = lVar4;
                }
                pbVar6 = (byte *)in_RCX[0x51];
                if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) &&
                   (in_RCX[0x4f] != 0)) {
                  plVar8 = *(longlong **)(lVar4 + 0xb8);
                  if ((plVar8 == (longlong *)0x0) ||
                     (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
                    pbVar6 = (byte *)0x0;
                  }
                  else {
                    uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
                    pbVar6 = (byte *)FUN_144aff482(uVar3,in_RCX + 0x4f);
                  }
                  in_RCX[0x51] = (longlong)pbVar6;
                }
              }
              plVar8 = (longlong *)CONCAT44(iStack_8c,local_90);
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar8 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar10 = (int *)((longlong)plVar8 + 0xc);
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (*piVar10 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              plVar8 = (longlong *)CONCAT44(iStack_7c,iStack_80);
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar8 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar10 = (int *)((longlong)plVar8 + 0xc);
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (*piVar10 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              goto LAB_144104ba6;
            }
            plVar8 = (longlong *)CONCAT44(iStack_8c,local_90);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar8 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar10 = (int *)((longlong)plVar8 + 0xc);
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (*piVar10 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
          }
        }
        plVar8 = (longlong *)CONCAT44(iStack_7c,iStack_80);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar8 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar10 = (int *)((longlong)plVar8 + 0xc);
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
    }
    else if (iVar12 == 3) {
      pbVar6 = &local_88;
      FUN_146060c02(pbVar6,param_5,param_6);
      cVar2 = FUN_140114204(pbVar6);
      if ((cVar2 != '\0') && (local_88 != 1)) {
        local_98 = '\0';
        uStack_94 = 0;
        local_90 = 0;
        iStack_8c = 0;
        if (param_3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_1447210f0(param_3);
        }
        lVar4 = FUN_140149a73(uVar3,0);
        if (lVar4 != 0) {
          FUN_14039fc7b(&local_88,&local_98,lVar4,0);
        }
        if (local_98 != '\0') {
          if ((char)in_RCX[0x4e] == '\x01') {
            FUN_1403a0728(&local_98,&local_a8);
            if ((int)in_RCX[0x25] != *(int *)((longlong)in_RCX + 0x154)) {
              uVar13 = (uint)((ulonglong)local_a8 >> 0x10);
              uVar11 = (uint)local_a8 & 0xffff;
              plVar8 = in_RCX + 0x2b;
              if ((longlong *)in_RCX[0x2c] != (longlong *)0x0) {
                plVar8 = (longlong *)in_RCX[0x2c];
              }
              iVar12 = *(int *)((longlong)plVar8 +
                               (ulonglong)
                               ((int)in_RCX[0x2d] - 1U &
                               (int)((ulonglong)local_a8 >> 0x20) +
                               ((uint)local_a8 << 0x10 | uVar11) +
                               (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar11 >> 4)) * 4);
              if (iVar12 != -1) {
                lVar4 = in_RCX[0x24];
                iVar14 = iVar12;
                do {
                  if (*(longlong *)(lVar4 + (longlong)iVar14 * 0x30) == local_a8)
                  goto LAB_144104be5;
                  iVar14 = *(int *)((longlong)iVar14 * 0x30 + lVar4 + 0x28);
                } while (iVar14 != -1);
              }
            }
            bVar18 = false;
            goto LAB_144104f77;
          }
          if (local_98 == '\x01') {
            if (iStack_8c != 0) {
LAB_144104c52:
              lVar4 = in_RCX[0x53];
              if (lVar4 == 0) {
                uVar3 = FUN_140bd9786();
                lVar4 = FUN_14477b664(uVar3);
                in_RCX[0x53] = lVar4;
              }
              pbVar6 = (byte *)in_RCX[0x54];
              bVar18 = true;
              if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) &&
                 (in_RCX[0x52] != 0)) {
                plVar8 = *(longlong **)(lVar4 + 0xb8);
                if ((plVar8 == (longlong *)0x0) ||
                   (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
                  pbVar6 = (byte *)0x0;
                }
                else {
                  uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
                  pbVar6 = (byte *)FUN_144aff482(uVar3,in_RCX + 0x52);
                }
                in_RCX[0x54] = (longlong)pbVar6;
              }
              goto LAB_144104f77;
            }
          }
          else {
            cVar2 = FUN_140321d1a(&local_98);
            if (cVar2 != '\0') goto LAB_144104c52;
          }
          lVar4 = in_RCX[0x50];
          if (lVar4 == 0) {
            uVar3 = FUN_140bd9786();
            lVar4 = FUN_14477b664(uVar3);
            in_RCX[0x50] = lVar4;
          }
          pbVar6 = (byte *)in_RCX[0x51];
          bVar18 = true;
          if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) &&
             (local_c8 = param_4, local_c0 = in_RCX, in_RCX[0x4f] != 0)) {
            plVar8 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar8 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
              pbVar6 = (byte *)0x0;
            }
            else {
              uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
              pbVar6 = (byte *)FUN_144aff482(uVar3,in_RCX + 0x4f);
            }
            local_c0[0x51] = (longlong)pbVar6;
            in_RCX = local_c0;
            param_4 = local_c8;
          }
          goto LAB_144104f77;
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_144104b7a:
  local_108 = param_7;
  local_118 = param_5;
  local_110 = param_6;
  pbVar6 = (byte *)FUN_143d1651a(in_RCX,local_c4,param_3,param_4);
LAB_144104ba6:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pbVar6;
  while (iVar12 = *(int *)(lVar5 + 0x28), iVar12 != -1) {
LAB_144104be5:
    lVar5 = lVar4 + (longlong)iVar12 * 0x30;
    if (*(longlong *)(lVar4 + (longlong)iVar12 * 0x30) == local_a8) goto LAB_144104ee5;
  }
  lVar5 = 0;
LAB_144104ee5:
  lVar4 = *(longlong *)(lVar5 + 0x18);
  if (lVar4 == 0) {
    uVar3 = FUN_140bd9786();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(lVar5 + 0x18) = lVar4;
  }
  pbVar6 = *(byte **)(lVar5 + 0x20);
  bVar18 = true;
  if (((pbVar6 == (byte *)0x0) && (pbVar6 = (byte *)0x0, lVar4 != 0)) &&
     (*(longlong *)(lVar5 + 0x10) != 0)) {
    plVar8 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
      pbVar6 = (byte *)0x0;
    }
    else {
      uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
      pbVar6 = (byte *)FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x10));
    }
    *(byte **)(lVar5 + 0x20) = pbVar6;
  }
LAB_144104f77:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (bVar18) goto LAB_144104ba6;
  goto LAB_144104b7a;
}



// FUNCTION 144105286 FUN_144105286 body=344 status=ok
// SIG undefined FUN_144105286(void)

undefined4 FUN_144105286(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    uVar4 = 0;
    goto LAB_1441053a3;
  }
  lVar5 = FUN_14088c018();
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_60 = *(undefined8 *)(param_2 + 0x48);
  local_58 = *(undefined4 *)(param_2 + 0x50);
  FUN_1447715ec(&local_50,param_2 + 0x58);
  uVar3 = FUN_144349c64(lVar5,param_3,0xffffffff);
  uVar4 = 0;
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar5 + 0x30))) {
    lVar7 = (ulonglong)uVar3 * 0x38;
    iVar1 = *(int *)(*(longlong *)(lVar5 + 0x28) + 0x10 + lVar7);
    if (iVar1 == 0) {
LAB_1441053cc:
      local_68 = DAT_14c948620;
      local_70 = DAT_14c948618;
    }
    else {
      lVar6 = *(longlong *)(lVar5 + 0x28) + lVar7;
      iVar2 = *(int *)(lVar6 + 0x14);
      if ((iVar2 == 0) || (iVar1 == DAT_14c948000)) goto LAB_1441053cc;
      if ((iVar2 < 2) && (*(int *)(lVar6 + 0x34) < 1)) {
        lVar6 = lVar6 + 0x18;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x28);
      }
      if ((iVar2 == 1) || (iVar2 < 6)) goto LAB_1441053cc;
      local_68 = *(undefined4 *)(lVar6 + 0x44);
      local_70 = *(undefined8 *)(lVar6 + 0x3c);
    }
    FUN_144928d62(&local_50,5,&local_70);
    uVar4 = FUN_14493b798(&local_60,lVar7 + *(longlong *)(lVar5 + 0x28));
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1441053a3:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144105418 FUN_144105418 body=215 status=ok
// SIG undefined FUN_144105418(void)

bool FUN_144105418(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((param_2 == 0) || ((longlong)*(int *)(param_1 + 0x2c8) == 0)) {
    bVar8 = false;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x2c0);
    lVar7 = (longlong)*(int *)(param_1 + 0x2c8) * 0x18;
    do {
      lVar7 = lVar7 + -0x18;
      lVar4 = plVar6[1];
      if (lVar4 == 0) {
        uVar3 = FUN_141030812();
        lVar4 = FUN_14477b664(uVar3);
        plVar6[1] = lVar4;
      }
      lVar5 = plVar6[2];
      if (lVar5 == 0) {
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*plVar6 != 0) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
              lVar5 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar5 = FUN_144aff482(uVar3,plVar6);
            }
            plVar6[2] = lVar5;
          }
        }
      }
      bVar8 = lVar5 == param_2;
    } while ((!bVar8) && (plVar6 = plVar6 + 3, lVar7 != 0));
  }
  return bVar8;
}



// FUNCTION 1441054f0 FUN_1441054f0 body=465 status=ok
// SIG undefined FUN_1441054f0(void)

undefined8 * FUN_1441054f0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_1 + 0xcc) != 0) && (uVar1 = *(uint *)(param_1 + 200), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0xcc))) &&
       ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
        uVar6 = *puVar7;
      }
      else {
        uVar6 = 0;
      }
      lVar5 = FUN_1409f28d0(uVar6);
      if (lVar5 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1459f2e4c;
          local_48 = &LAB_148c39de3;
          local_50 = &LAB_1457a9eb2;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          *param_2 = 0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          *(undefined4 *)(param_2 + 3) = 0;
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
          param_2[8] = 0x3ff0000000000000;
          param_2[9] = 0x3ff0000000000000;
          param_2[10] = 0x3ff0000000000000;
          param_2[0xb] = 0;
          uVar2 = *(undefined4 *)(lVar5 + 0x3dc4);
          uVar3 = *(undefined4 *)(lVar5 + 0x3dc8);
          uVar4 = *(undefined4 *)(lVar5 + 0x3dcc);
          uVar6 = *(undefined8 *)(lVar5 + 0x3dd0);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar5 + 0x3dc0);
          *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
          *(undefined4 *)(param_2 + 5) = uVar3;
          *(undefined4 *)((longlong)param_2 + 0x2c) = uVar4;
          param_2[6] = uVar6;
          param_2[7] = 0;
          if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_2;
        }
      }
    }
  }
  puVar7 = &DAT_14c846480;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1441056c2 FUN_1441056c2 body=155 status=ok
// SIG undefined FUN_1441056c2(void)

void FUN_1441056c2(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_14050c909();
  lVar5 = *(longlong *)(lVar3 + 0x488);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x488) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x490) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x480) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x480));
    }
    *(undefined8 *)(lVar3 + 0x490) = uVar4;
    return;
  }
  return;
}



// FUNCTION 14410575e FUN_14410575e body=3180 status=ok
// SIG undefined FUN_14410575e(void)

void FUN_14410575e(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  uint *local_100;
  undefined1 *local_f8;
  code *local_f0;
  longlong *local_e0;
  int local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined4 local_b4;
  longlong *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140ca2bb6();
  lVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
  lVar5 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((((lVar5 != 0) && (lVar5 = FUN_1407c8d60(lVar5), lVar5 != 0)) &&
      (*(char *)(lVar5 + 0x2e) == '\x01')) && (lVar5 = FUN_14041acbe(param_1), lVar5 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_100 = &local_d0;
      local_d0 = 0x41030f22;
      uStack_cc = 1;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1459f2e4c;
      local_108 = &LAB_148c39de3;
      local_110 = &LAB_1457a9eb2;
      local_118 = &DAT_149e063b2;
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1418e2a32(param_1,lVar5 + 0x23c0);
    }
  }
  if (lVar4 == 0) goto LAB_144105d8f;
  uVar6 = FUN_1406d3bdc();
  cVar3 = FUN_1448093f4(lVar4,uVar6);
  if (cVar3 == '\0') goto LAB_144105d8f;
  iVar11 = *(int *)(lVar4 + 0x26c);
  if (iVar11 == 1) {
    local_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    local_c8 = 3;
    puVar2 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
    *puVar2 = &PTR_LAB_14b9677f0;
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
    puVar2[2] = lVar5;
    *puVar2 = &PTR_FUN_14b967780;
    puVar2[3] = 0;
    iVar11 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(puVar2 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar11 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar11 = *(int *)(lVar4 + 0x10);
        bVar12 = iVar11 == 0;
        if (bVar12) {
          *(int *)(lVar4 + 0x10) = iVar10;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar11 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar11;
    puVar2[4] = FUN_1410eaeac;
    plVar7 = (longlong *)CONCAT44(uStack_cc,local_d0);
    if ((local_c8 == 0) || (plVar7 == (longlong *)0x0)) {
LAB_144106296:
      if (local_c8 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_144105d7f;
      }
      if (plVar7 != (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        (**(code **)*plVar7)(plVar7,0);
        FUN_1446efa72(&local_d0,0,0,0x10);
        goto LAB_144105d6c;
      }
      plVar9 = (longlong *)0x0;
    }
    else {
      cVar3 = (**(code **)(*plVar7 + 0x30))();
      uVar1 = DAT_14cbd0a90;
      if (cVar3 == '\0') {
        plVar7 = (longlong *)CONCAT44(uStack_cc,local_d0);
        goto LAB_144106296;
      }
      if ((DAT_14cbd0a9c < 1) &&
         (DAT_14cbd0a98 = DAT_14cbd0a98 + -1, DAT_14cbd0a98 <= (int)DAT_14cbd0a90)) {
        if (0 < (int)DAT_14cbd0a90) {
          iVar11 = 0;
          do {
            if (((*(int *)(DAT_14cbd0a88 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar7 = *(longlong **)(DAT_14cbd0a88 + (longlong)iVar11 * 0x10),
                plVar7 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar7 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(&DAT_14cbd0a88,iVar11);
              FUN_14005b248(&DAT_14cbd0a88);
            }
            else {
              iVar11 = iVar11 + 1;
            }
          } while (iVar11 < (int)DAT_14cbd0a90);
        }
        DAT_14cbd0a98 = 2;
        if (2 < (int)(DAT_14cbd0a90 * 2)) {
          DAT_14cbd0a98 = DAT_14cbd0a90 * 2;
        }
        if ((DAT_14cbd0a98 < (int)uVar1) && (DAT_14cbd0a94 != DAT_14cbd0a90)) {
          FUN_14045812c();
        }
      }
      plVar9 = (longlong *)0x0;
      if ((local_c8 != 0) &&
         (plVar7 = (longlong *)CONCAT44(uStack_cc,local_d0), plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x38))(plVar7,&local_e0);
        plVar9 = local_e0;
      }
      uVar1 = DAT_14cbd0a90;
      lVar4 = (longlong)(int)DAT_14cbd0a90;
      DAT_14cbd0a90 = DAT_14cbd0a90 + 1;
      if (DAT_14cbd0a94 < DAT_14cbd0a90) {
        FUN_1447a71f6(&DAT_14cbd0a88,uVar1);
      }
      lVar5 = DAT_14cbd0a88;
      lVar4 = lVar4 * 0x10;
      *(undefined8 *)(DAT_14cbd0a88 + lVar4) = 0;
      *(undefined4 *)(lVar5 + 8 + lVar4) = 0;
      *(ulonglong *)(lVar5 + lVar4) = CONCAT44(uStack_cc,local_d0);
      local_d0 = 0;
      uStack_cc = 0;
      *(int *)(lVar5 + 8 + lVar4) = local_c8;
LAB_144105d6c:
      local_c8 = 0;
      plVar7 = (longlong *)CONCAT44(uStack_cc,local_d0);
LAB_144105d7f:
      if (plVar7 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    param_1[0x28] = (longlong)plVar9;
    goto LAB_144105d8f;
  }
  if (iVar11 == 2) {
    lVar4 = FUN_14041acbe(param_1);
    if (lVar4 == 0) goto LAB_144105d8f;
    if (DAT_14cbadd90 == 0) {
      local_100 = &local_d0;
      local_d0 = 0x41030f22;
      uStack_cc = 1;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1459f2e4c;
      local_108 = &LAB_148c39de3;
      local_110 = &LAB_1457a9eb2;
      local_118 = &DAT_149e063b2;
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar4 = FUN_140e06fb1(lVar4), lVar4 == 0)) goto LAB_144105d8f;
    local_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    local_c8 = 3;
    puVar2 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
    *puVar2 = &PTR_LAB_14b41e020;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar2[2] = lVar8;
    *puVar2 = &PTR_FUN_14b967860;
    puVar2[3] = 0;
    iVar11 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(puVar2 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar11 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar11 = *(int *)(lVar5 + 0x10);
        bVar12 = iVar11 == 0;
        if (bVar12) {
          *(int *)(lVar5 + 0x10) = iVar10;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar11 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar11;
    puVar2[4] = FUN_14054e32a;
  }
  else {
    if (iVar11 != 3) goto LAB_144105d8f;
    FUN_146060b88(&local_d0,param_1);
    *(int *)(param_1 + 0x2b) = local_c8;
    param_1[0x2a] = CONCAT44(uStack_cc,local_d0);
    FUN_1447715ec(param_1 + 0x2c,local_c0);
    if (CONCAT44(uStack_a4,local_a8) != 0) {
      FUN_1400020a8();
    }
    if ((char)param_1[0x2a] != '\n') {
      local_d0 = local_d0 & 0xffffff00;
      uStack_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0[0] = 0;
      local_b4 = 0;
      local_bc = 0;
      local_a0 = 0xc69c4000;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_3f = 1;
      local_3d = 0;
      local_3c = 0;
      local_e0 = (longlong *)0x0;
      local_d8 = 0;
      FUN_1446efa72(&local_e0,0,3,0x10);
      plVar7 = local_e0;
      local_d8 = 3;
      *local_e0 = (longlong)&PTR_LAB_14b3e6310;
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
      local_e0[2] = lVar5;
      *local_e0 = (longlong)&PTR_FUN_14b967940;
      local_e0[3] = 0;
      iVar11 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_e0 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar11 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar11 = *(int *)(lVar4 + 0x10);
          bVar12 = iVar11 == 0;
          if (bVar12) {
            *(int *)(lVar4 + 0x10) = iVar10;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar11 = iVar10;
          }
        }
      }
      *(int *)((longlong)plVar7 + 0x1c) = iVar11;
      plVar7[4] = (longlong)param_1;
      local_b0 = local_e0;
      local_a8 = local_d8;
      uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar4 = FUN_140149a73(uVar6,0);
      if (lVar4 == 0) {
        local_3c = 2;
      }
      else {
        FUN_140983ba6(param_1 + 0x2a,lVar4,&local_d0);
        if (local_3c == 1) {
          if (local_b0 == (longlong *)0x0 || local_a8 == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            (**(code **)(*local_b0 + 0x38))(local_b0,&local_e0);
            plVar7 = local_e0;
          }
          param_1[0x31] = (longlong)plVar7;
        }
      }
      FUN_1409838b8(&local_d0);
      goto LAB_144105d8f;
    }
    lVar4 = FUN_14041acbe(param_1);
    if (lVar4 == 0) goto LAB_144105d8f;
    if (DAT_14cbadd90 == 0) {
      local_d0 = 0x41030f22;
      uStack_cc = 1;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1459f2e4c;
      local_108 = &LAB_148c39de3;
      local_110 = &LAB_1457a9eb2;
      local_118 = &DAT_149e063b2;
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = 0x3de0;
      local_100 = &local_d0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar4 = FUN_140e06fb1(lVar4), lVar4 == 0)) goto LAB_144105d8f;
    local_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    local_c8 = 3;
    puVar2 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
    *puVar2 = &PTR_LAB_14b41e020;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar2[2] = lVar8;
    *puVar2 = &PTR_FUN_14b9678d0;
    puVar2[3] = 0;
    iVar11 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(puVar2 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar11 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar11 = *(int *)(lVar5 + 0x10);
        bVar12 = iVar11 == 0;
        if (bVar12) {
          *(int *)(lVar5 + 0x10) = iVar10;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar11 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar11;
    puVar2[4] = param_1;
  }
  FUN_141180640(lVar4 + 0x30,&local_e0,&local_d0);
  if (local_c8 == 0) {
LAB_144105cb0:
    if (CONCAT44(uStack_cc,local_d0) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
      goto LAB_144105cb0;
    }
  }
  param_1[0x29] = (longlong)local_e0;
LAB_144105d8f:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441063e4 FUN_1441063e4 body=1573 status=ok
// SIG undefined FUN_1441063e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1441063e4(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 unaff_RSI;
  uint uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  undefined1 auStack_58 [46];
  byte local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (plVar2 == (longlong *)0x0) goto LAB_1441066b4;
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  lVar4 = FUN_1406d3bdc();
  if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_1441066b4;
  if (*(char *)((longlong)plVar2 + 0x24e) != '\x01') {
    if (*(char *)((longlong)plVar2 + 0x24d) != '\x01') goto LAB_1441066b4;
    (**(code **)(*param_1 + 0x180))(param_1);
    cVar1 = FUN_144105286();
    if (((cVar1 == '\0') || ((longlong *)param_1[0x1b] == (longlong *)0x0)) ||
       (*(int *)((longlong)param_1 + 0xd4) == 0)) goto LAB_1441066b2;
    uVar9 = *(uint *)(param_1 + 0x1a);
    uVar7 = 0;
    if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_1441066b4;
    lVar3 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    if ((lVar3 == 0) ||
       (((*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 0xd4) ||
         ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)) ||
        (plVar2 = (longlong *)(**(code **)(*(longlong *)param_1[0x1b] + 0x18))(),
        plVar2 == (longlong *)0x0)))) goto LAB_1441066b2;
    uVar5 = FUN_140437988();
    plVar6 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_140437988();
      plVar2 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar2 != (longlong *)0x0 && plVar6 != plVar2) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cbc8a74) &&
           (FUN_144b3d300(&DAT_14cbc8a74), DAT_14cbc8a74 == -1)) {
          FUN_1446f470e(&DAT_14cbc8a68,L"VendingMachineState",1);
          DAT_14cbc8a70 = 0xffffffff;
          _Init_thread_footer(&DAT_14cbc8a74);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cbc8a84) &&
           (FUN_144b3d300(&DAT_14cbc8a84), DAT_14cbc8a84 == -1)) {
          FUN_1446f470e(&DAT_14cbc8a78,L"Inactive",1);
          _DAT_14cbc8a80 = 0xffffffff;
          _Init_thread_footer(&DAT_14cbc8a84);
        }
        plVar6 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2);
        if (DAT_14cbc8a68 != 0 || DAT_14cbc8a70 != 0xffffffff) {
          if ((int)DAT_14cbc8a70 < 0) {
            lVar3 = *plVar6;
            uVar9 = *(uint *)(plVar6 + 1);
LAB_1441067b7:
            if (uVar9 != 0) {
              uVar7 = (ulonglong)(int)uVar9;
              goto LAB_1441067ca;
            }
          }
          else {
            uVar9 = *(uint *)(plVar6 + 1);
            uVar7 = (ulonglong)uVar9;
            lVar3 = *plVar6;
            if ((int)uVar9 <= (int)DAT_14cbc8a70) goto LAB_1441067b7;
            if (*(longlong *)(lVar3 + 0x68 + (ulonglong)DAT_14cbc8a70 * 0x88) == DAT_14cbc8a68) {
LAB_14410683f:
              uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
              puVar8 = &DAT_14cbc8a68;
              puVar11 = &DAT_14cbc8a78;
              goto LAB_144106856;
            }
LAB_1441067ca:
            uVar10 = 0;
            do {
              if (*(longlong *)(lVar3 + 0x68 + uVar10) == DAT_14cbc8a68) {
                DAT_14cbc8a70 = (int)(uVar10 >> 3) * -0xf0f0f0f;
                if (DAT_14cbc8a70 == 0xffffffff) goto LAB_144106866;
                goto LAB_14410683f;
              }
              lVar4 = lVar3 + uVar10;
              uVar10 = uVar10 + 0x88;
            } while (lVar4 + 0x88 != uVar7 * 0x88 + lVar3);
          }
          DAT_14cbc8a70 = 0xffffffff;
        }
      }
    }
    goto LAB_144106866;
  }
  uVar5 = FUN_14041acbe(param_1);
  FUN_144102d76(&local_2a,param_1[0x19],uVar5);
  if ((local_29 != '\x01') || ((local_2a & 1) != 0)) goto LAB_1441066b4;
  if (((longlong *)param_1[0x1b] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0xd4) == 0)) {
LAB_1441066b2:
    uVar7 = 0;
    goto LAB_1441066b4;
  }
  uVar9 = *(uint *)(param_1 + 0x1a);
  uVar7 = 0;
  if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_1441066b4;
  lVar3 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
  if ((lVar3 == 0) ||
     (((*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 0xd4) ||
       ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)) ||
      (plVar2 = (longlong *)(**(code **)(*(longlong *)param_1[0x1b] + 0x18))(),
      plVar2 == (longlong *)0x0)))) goto LAB_1441066b2;
  uVar5 = FUN_140437988();
  plVar6 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar5);
  if (plVar6 != (longlong *)0x0) {
    uVar5 = FUN_140437988();
    plVar2 = (longlong *)FUN_144718840(plVar6,uVar5);
    if (plVar2 != (longlong *)0x0 && plVar6 != plVar2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbc8a54) && (FUN_144b3d300(&DAT_14cbc8a54), DAT_14cbc8a54 == -1))
      {
        FUN_1446f470e(&DAT_14cbc8a48,L"EchoLogState",1);
        DAT_14cbc8a50 = 0xffffffff;
        _Init_thread_footer(&DAT_14cbc8a54);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbc8a64) && (FUN_144b3d300(&DAT_14cbc8a64), DAT_14cbc8a64 == -1))
      {
        FUN_1446f470e(&DAT_14cbc8a58,L"Dormant",1);
        _DAT_14cbc8a60 = 0xffffffff;
        _Init_thread_footer(&DAT_14cbc8a64);
      }
      plVar6 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2);
      if (DAT_14cbc8a48 != 0 || DAT_14cbc8a50 != 0xffffffff) {
        if ((int)DAT_14cbc8a50 < 0) {
          lVar3 = *plVar6;
          uVar9 = *(uint *)(plVar6 + 1);
LAB_1441065e9:
          if (uVar9 != 0) {
            uVar7 = (ulonglong)(int)uVar9;
            goto LAB_1441065fc;
          }
        }
        else {
          uVar9 = *(uint *)(plVar6 + 1);
          uVar7 = (ulonglong)uVar9;
          lVar3 = *plVar6;
          if ((int)uVar9 <= (int)DAT_14cbc8a50) goto LAB_1441065e9;
          if (*(longlong *)(lVar3 + 0x68 + (ulonglong)DAT_14cbc8a50 * 0x88) == DAT_14cbc8a48) {
LAB_144106810:
            uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
            puVar8 = &DAT_14cbc8a48;
            puVar11 = &DAT_14cbc8a58;
LAB_144106856:
            cVar1 = FUN_1400b1204(uVar5,puVar8,puVar11);
            if (cVar1 != '\0') goto LAB_1441066b2;
            goto LAB_144106866;
          }
LAB_1441065fc:
          uVar10 = 0;
          do {
            if (*(longlong *)(lVar3 + 0x68 + uVar10) == DAT_14cbc8a48) {
              DAT_14cbc8a50 = (int)(uVar10 >> 3) * -0xf0f0f0f;
              if (DAT_14cbc8a50 == 0xffffffff) goto LAB_144106866;
              goto LAB_144106810;
            }
            lVar4 = lVar3 + uVar10;
            uVar10 = uVar10 + 0x88;
          } while (lVar4 + 0x88 != uVar7 * 0x88 + lVar3);
        }
        DAT_14cbc8a50 = 0xffffffff;
      }
    }
  }
LAB_144106866:
  uVar7 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_1441066b4:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 144106a0a FUN_144106a0a body=458 status=ok
// SIG undefined FUN_144106a0a(void)

void FUN_144106a0a(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (cVar1 == '\0') {
LAB_144106af3:
    if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (param_2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar2 = FUN_140fb95f6(param_1);
      if (lVar2 == 0) {
        local_38 = (code *)0x0;
      }
      else {
        puVar3 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar2 + 8) != (undefined4 *)0x0) {
          puVar3 = *(undefined4 **)(lVar2 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar2 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar2);
          DAT_14c947fe0 = lVar2;
        }
        FUN_140045924(DAT_14c947fe0,&local_38,puVar3,1);
      }
      local_30 = 0x6000;
      local_28 = 0;
      FUN_148c37594(param_2,&local_38,0,0);
      goto LAB_144106af3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144106be8 FUN_144106be8 body=2261 status=ok
// SIG undefined FUN_144106be8(void)

longlong * FUN_144106be8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong *local_148;
  undefined4 local_140;
  undefined1 local_138 [16];
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 auStack_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_2 = 0;
  param_2[1] = 0;
  local_b0 = 0;
  lVar6 = FUN_140d749c4(0,&local_b0);
  if ((local_b0 == 0 || lVar6 == 0) || (lVar7 = FUN_145a2c21b(), lVar7 == 0)) goto LAB_144106c6e;
  uVar8 = FUN_14086ad12();
  cVar5 = FUN_1448093f4(lVar7,uVar8);
  if (cVar5 == '\0') goto LAB_144106c6e;
  local_c0 = 0;
  local_c8 = *(longlong **)(lVar7 + 0x170);
  local_b8 = 0;
  uVar8 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x178));
  local_c0 = FUN_14477b664(uVar8);
  local_b8 = *(longlong *)(lVar7 + 0x180);
  if (local_c0 == 0) {
    uVar8 = FUN_1465d584e();
    local_c0 = FUN_14477b664(uVar8);
  }
  if (local_b8 == 0) {
    local_b8 = 0;
    if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
      plVar9 = *(longlong **)(local_c0 + 0xb8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
        local_b8 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
        local_b8 = FUN_144aff482(uVar8,&local_c8);
        if (local_b8 != 0) goto LAB_14410700c;
      }
    }
    plVar9 = (longlong *)&DAT_14c844840;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  else {
LAB_14410700c:
    lVar7 = local_b8;
    if (local_c0 == 0) {
      uVar8 = FUN_1465d584e();
      local_c0 = FUN_14477b664(uVar8);
      lVar7 = local_b8;
      if (((local_b8 == 0) && (lVar7 = 0, local_c0 != 0)) && (local_c8 != (longlong *)0x0)) {
        plVar9 = *(longlong **)(local_c0 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
          lVar7 = 0;
          local_b8 = lVar7;
        }
        else {
          uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
          lVar7 = FUN_144aff482(uVar8,&local_c8);
          local_b8 = lVar7;
        }
      }
    }
    plVar9 = (longlong *)(lVar7 + 0x18);
  }
  plVar4 = (longlong *)*plVar9;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  lVar7 = plVar9[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_d8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  local_d0 = DAT_14c844848;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  auStack_58[0] = 0;
  FUN_1446ddda2(&local_78,"UIBigMap_ViewMap",0);
  FUN_140ac6c96(&local_78,&local_d8);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_f8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  local_f0 = (int)lVar7;
  FUN_14023409e(&local_108,&local_d8,1);
  local_78 = CONCAT44(local_78._4_4_,4);
  FUN_14023423e(&local_68,&local_f8);
  local_90 = auStack_58;
  local_98 = &local_78;
  FUN_14010d304(&local_88);
  local_a8 = local_108;
  local_a0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_e8,&local_a8,&local_88);
  FUN_14007f2db(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_100 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  lVar10 = FUN_14001cc68(0x38,0x10);
  lVar7 = local_b0;
  FUN_1400b22c2(local_118,"action_ui_bigmap_tooltip_main_action");
  local_128 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 8))();
  }
  local_120 = local_e0;
  local_158 = lVar7;
  FUN_146624284(lVar10,&local_128,local_118,lVar6);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b9679b0;
  plVar9[2] = lVar10;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_145976dba(param_2,iVar3);
  }
  lVar6 = *param_2;
  *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar10;
  *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_144106c6e:
  cVar5 = (**(code **)(*param_1 + 0x2e8))(param_1,0);
  if (cVar5 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_c8 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_c0 = local_c0 & 0xffffffff00000000;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_60 = 0;
    auStack_58[0] = 0;
    FUN_1446ddda2(&local_78,"BigMap_Action_FastTravel",0);
    FUN_140ac6c96(&local_78,&local_c8);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    lVar6 = FUN_14001cc68(0x30,0x10);
    pcVar11 = "action_ui_bigmap_tooltip_leave_menu_action";
    if ((int)param_2[1] == 0) {
      pcVar11 = "action_ui_bigmap_tooltip_main_action";
    }
    FUN_1400b22c2(local_138,pcVar11);
    local_148 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 8))();
    }
    local_140 = (undefined4)local_c0;
    FUN_146624388(lVar6,&local_148,local_138,param_1);
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b9679d0;
    plVar9[2] = lVar6;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_145976dba(param_2,iVar3);
    }
    lVar7 = *param_2;
    *(longlong *)(lVar7 + (longlong)iVar3 * 0x10) = lVar6;
    *(longlong **)(lVar7 + 8 + (longlong)iVar3 * 0x10) = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441074c0 FUN_1441074c0 body=125 status=ok
// SIG undefined FUN_1441074c0(void)

undefined8 * FUN_1441074c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar4 = param_1[0x19];
  if (lVar4 == 0) {
    puVar5 = &DAT_14c846480;
    puVar6 = param_2;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x180))();
    uVar2 = *(undefined8 *)(lVar4 + 0x200);
    uVar3 = *(undefined8 *)(lVar4 + 0x208);
    uVar1 = *(undefined8 *)(lVar4 + 0x210);
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
    param_2[4] = uVar2;
    param_2[5] = uVar3;
    param_2[6] = uVar1;
    param_2[7] = 0;
    param_2[8] = 0x3ff0000000000000;
    param_2[9] = 0x3ff0000000000000;
    param_2[10] = 0x3ff0000000000000;
    param_2[0xb] = 0;
  }
  return param_2;
}



// FUNCTION 14410753e FUN_14410753e body=1105 status=ok
// SIG undefined FUN_14410753e(void)

longlong FUN_14410753e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0xcc);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(param_1 + 200), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar9 != (longlong *)0x0) && ((int)plVar9[2] == iVar1)) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar9;
      }
      else {
        lVar7 = 0;
      }
      if (((*(byte *)(lVar7 + 0x74c) >> 1 | *(byte *)(lVar7 + 0x74c)) & 1) == 0) goto LAB_1441075e8;
LAB_1441075e1:
      lVar7 = 0;
      goto LAB_14410779f;
    }
LAB_1441075e8:
    if (((*(char *)(param_1 + 0xd0) == '\0') && ((int)uVar2 < DAT_14c9647dc)) &&
       ((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0 &&
        ((((*(int *)(lVar7 + 0x10) == iVar1 && ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) &&
          (lVar7 = FUN_14041acbe(param_1), lVar7 != 0)) &&
         (lVar7 = *(longlong *)(lVar7 + 0x398), lVar7 != 0)))))) {
      if (DAT_14cbae3d8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464f5fc4;
        local_48 = &LAB_148c3dd26;
        local_50 = &LAB_1459673ba;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      }
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
        if (*(int *)(param_1 + 0xcc) == 0) {
LAB_1441078d1:
          lVar6 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 200);
          lVar6 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar9 == (longlong *)0x0) ||
               (((int)plVar9[2] != *(int *)(param_1 + 0xcc) ||
                ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1441078d1;
            lVar6 = *plVar9;
          }
        }
        if (*(longlong *)(lVar7 + 0x744) != *(longlong *)(lVar6 + 0x744)) goto LAB_1441075e1;
      }
    }
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    lVar4 = FUN_14050c909();
    lVar6 = *(longlong *)(lVar4 + 0x238);
    if (lVar6 == 0) {
      uVar5 = FUN_14050c9fe();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0x238) = lVar6;
    }
    lVar7 = *(longlong *)(lVar4 + 0x240);
    if (*(longlong *)(lVar4 + 0x240) == 0) {
      lVar7 = 0;
      if ((lVar6 != 0) && (lVar7 = 0, *(longlong *)(lVar4 + 0x230) != 0)) {
        plVar9 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar9 + 0x110))(plVar9);
          lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x230));
        }
        *(longlong *)(lVar4 + 0x240) = lVar7;
      }
    }
    goto LAB_14410779f;
  }
  lVar7 = FUN_148d11344(param_1);
  if (lVar7 != 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
LAB_1441078d8:
      uVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 200);
      uVar5 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0xcc) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1441078d8;
        uVar5 = *puVar8;
      }
    }
    lVar7 = FUN_148cd049a(lVar7,uVar5);
    if (lVar7 != 0) goto LAB_14410779f;
  }
  lVar4 = FUN_14050c909();
  lVar6 = *(longlong *)(lVar4 + 0x250);
  if (lVar6 == 0) {
    uVar5 = FUN_14050c9fe();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x250) = lVar6;
  }
  lVar7 = *(longlong *)(lVar4 + 600);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar4 + 0x248) != 0)) {
    plVar9 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar9 + 0x110))(plVar9);
      lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x248));
    }
    *(longlong *)(lVar4 + 600) = lVar7;
  }
LAB_14410779f:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 144107990 FUN_144107990 body=482 status=ok
// SIG undefined FUN_144107990(void)

void FUN_144107990(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (cVar1 == '\0') goto LAB_144107a2a;
  if (param_2 == 0) {
LAB_1441079f1:
    param_2 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1441079f1;
  }
  lVar2 = param_1[0x1b];
  if (lVar2 == 0) {
    local_40 = (code *)param_1[0x19];
    lVar2 = FUN_14050aea0();
    param_1[0x1b] = lVar2;
  }
  if (lVar2 != 0 && param_2 != 0) {
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar2 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(lVar2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,&local_40,puVar3,1);
    local_38 = 0x6000;
    local_30 = 0;
    FUN_148c37594(param_2,&local_40,0,0);
  }
LAB_144107a2a:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144107b74 FUN_144107b74 body=487 status=ok
// SIG undefined FUN_144107b74(void)

void FUN_144107b74(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_14060e84c();
  if (lVar3 == 0) goto LAB_144107d0c;
  lVar4 = *(longlong *)(lVar3 + 0x398);
  if (lVar4 == 0) {
LAB_144107d00:
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar2 = 0;
  }
  else {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar4 = *(longlong *)(lVar3 + 0x398);
      if (lVar4 == 0) goto LAB_144107d00;
    }
    if ((((DAT_14cbae3d8 == 0) || (lVar3 = *(longlong *)(lVar4 + 0x10), lVar3 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) !=
        DAT_14cbae3d8 + 0x30)) goto LAB_144107d00;
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(param_1 + 0x58) = uVar1;
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
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar3 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x5c) = iVar2;
LAB_144107d0c:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144107d5c(param_1);
  return;
}



// FUNCTION 144107d5c FUN_144107d5c body=1560 status=ok
// SIG undefined FUN_144107d5c(void)

void FUN_144107d5c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  int iVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  code *pcVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  longlong *local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  longlong local_110;
  code *local_108;
  undefined ***local_f8;
  undefined **local_e8;
  undefined1 *local_e0;
  code *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar4 = FUN_14060e84c();
  if (lVar4 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_150 = local_88;
      local_88[0] = FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = &LAB_1459f2e4c;
      local_158 = &LAB_148c39de3;
      local_160 = &LAB_1457a9eb2;
      local_168 = &DAT_149e063b2;
      local_170 = 0;
      local_178 = 0x10000004;
      local_180 = 0x10;
      local_188 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      lVar11 = FUN_1447210f0(lVar4);
      if ((((lVar11 != 0) &&
           (((*(longlong *)(lVar4 + 0x3dd8) != 0 &&
             (*(longlong *)(lVar4 + 0x3dd8) == *(longlong *)(param_1 + 0x28))) &&
            (*(int *)(param_1 + 0x5c) != 0)))) &&
          (((uVar15 = *(uint *)(param_1 + 0x58), -1 < (int)uVar15 && ((int)uVar15 < DAT_14c9647dc))
           && (puVar13 = (undefined8 *)
                         ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
              puVar13 != (undefined8 *)0x0)))) &&
         ((*(int *)(puVar13 + 2) == *(int *)(param_1 + 0x5c) &&
          ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
          uVar6 = *puVar13;
        }
        else {
          uVar6 = 0;
        }
        uStack_120 = CONCAT44(uStack_120._4_4_,1);
        FUN_1460044b4(&local_128);
        *local_128 = uVar6;
      }
      goto LAB_144107dcb;
    }
  }
  local_128 = (undefined8 *)0x0;
  uStack_120 = 0;
LAB_144107dcb:
  local_88[0] = (code *)0x0;
  local_78 = (undefined ***)0x0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14b967df0;
  local_a0 = param_1;
  local_c8 = FUN_144113f6e;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_LAB_14b967dd0;
  local_e0 = &LAB_144113f02;
  local_108 = FUN_144113f16;
  iVar9 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar9 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar11 = 0;
    do {
      *(undefined2 *)(lVar4 + 0x10 + lVar11) = 0x100;
      lVar11 = lVar11 + 0x18;
    } while ((longlong)iVar9 * 0x18 != lVar11);
  }
  local_130 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)uStack_120 != 0) {
    puVar13 = local_128 + (int)uStack_120;
    puVar16 = local_128;
    do {
      iVar9 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar9 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x38);
        lVar11 = 0;
        do {
          lVar1 = *(longlong *)(lVar4 + lVar11);
          if (lVar1 != 0) {
            lVar5 = FUN_14400fe12();
            pcVar14 = local_108;
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               (local_108 != (code *)0x0)) {
              pppuVar8 = local_f8;
              if (local_f8 == (undefined ***)0x0) {
                pppuVar8 = &local_e8;
              }
              uVar6 = (*(code *)(*pppuVar8)[1])();
              cVar2 = (*pcVar14)(uVar6,lVar1,puVar16);
              if (cVar2 != '\0') {
                uVar15 = (int)(lVar11 >> 3) * -0x55555555;
                if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(param_1 + 0x40))) {
                  *(undefined1 *)(*local_130 + 0x11 + (ulonglong)(uVar15 & 0x7fffffff) * 0x18) = 0;
                  if ((local_88[0] == (code *)0x0) ||
                     (lVar4 = *(longlong *)(*local_130 + (ulonglong)(uVar15 & 0x7fffffff) * 0x18),
                     lVar4 == 0)) goto LAB_144107fbb;
                  lVar11 = FUN_14400fe12();
                  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) goto LAB_144107fbb;
                  pppuVar8 = local_68;
                  pppuVar10 = local_78;
                  pcVar14 = local_88[0];
                  goto LAB_144107fa6;
                }
                break;
              }
            }
          }
          lVar11 = lVar11 + 0x18;
        } while ((longlong)iVar9 * 0x18 != lVar11);
      }
      plVar7 = (longlong *)FUN_1404e9402(local_130);
      *(undefined2 *)(plVar7 + 2) = 1;
      uVar6 = FUN_14400fe12();
      FUN_1404e95e0(param_1,&local_110,uVar6);
      if ((*plVar7 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar4 = local_110;
      *plVar7 = local_110;
      if (local_110 != 0) {
        lVar11 = FUN_14400fe12();
        if (((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) && (local_c8 != (code *)0x0)
           ) {
          pppuVar8 = &local_a8;
          pppuVar10 = local_b8;
          pcVar14 = local_c8;
LAB_144107fa6:
          if (pppuVar10 == (undefined ***)0x0) {
            pppuVar10 = pppuVar8;
          }
          uVar6 = (*(code *)(*pppuVar10)[1])();
          (*pcVar14)(uVar6,lVar4,puVar16);
        }
      }
LAB_144107fbb:
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar13);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    do {
      if ((char)plVar7[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar11 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_110,plVar7[-1]);
          lVar11 = local_110;
        }
        *plVar7 = lVar11;
      }
      else if (*(char *)((longlong)plVar7 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar7);
        }
        FUN_1404e9462(param_1,plVar7 + -1);
      }
      plVar7 = plVar7 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
    iVar9 = *(int *)(param_1 + 0x40);
    if (0 < iVar9) {
      uVar17 = 0;
      bVar3 = false;
      do {
        uVar17 = (ulonglong)(int)uVar17;
        pcVar12 = (char *)(*local_130 + uVar17 * 0x18 + 0x11);
        while (*pcVar12 == '\0') {
          uVar17 = uVar17 + 1;
          pcVar12 = pcVar12 + 0x18;
          if ((longlong)iVar9 <= (longlong)uVar17) {
            if (!bVar3) goto LAB_144108157;
            goto LAB_14410814d;
          }
        }
        FUN_1404ec6d4(local_130,uVar17 & 0xffffffff);
        iVar9 = *(int *)(param_1 + 0x40);
        bVar3 = true;
      } while ((int)uVar17 < iVar9);
LAB_14410814d:
      FUN_141089ae6(local_130);
    }
  }
LAB_144108157:
  if (local_108 != (code *)0x0) {
    pppuVar8 = &local_e8;
    if (local_f8 != (undefined ***)0x0) {
      pppuVar8 = local_f8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar8 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar8 = local_b8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar8 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar8 = local_68;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_128 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144108376 FUN_144108376 body=68 status=ok
// SIG undefined FUN_144108376(void)

void FUN_144108376(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_14117d0df(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 0x38,0);
    return;
  }
  return;
}



// FUNCTION 1441083c0 FUN_1441083c0 body=126 status=ok
// SIG undefined FUN_1441083c0(void)

void FUN_1441083c0(longlong param_1,undefined8 param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && (*(char *)(param_3 + 3) == '\x01')) {
    dVar3 = *(double *)(lVar1 + 0xc0) - param_3[1];
    dVar2 = *(double *)(lVar1 + 0xb8) - *param_3;
    if (*(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x88) < dVar2 * dVar2 + dVar3 * dVar3) {
      lVar1 = FUN_14606fed2(param_1,param_3);
      if ((lVar1 != 0) && (lVar1 != *(longlong *)(param_1 + 0x78))) {
        FUN_14606f8b6(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14410843e FUN_14410843e body=96 status=ok
// SIG undefined FUN_14410843e(void)

void FUN_14410843e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    FUN_146004106(param_1);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    lVar2 = *(longlong *)(param_1 + 0x38) + 8;
    do {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_144a53da8(*(longlong *)(param_1 + 0x30),lVar2);
      }
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14410849e FUN_14410849e body=601 status=ok
// SIG undefined FUN_14410849e(void)

void FUN_14410849e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_88 = 0;
    uStack_80 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_78);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (param_1[10] == 0) goto LAB_144108658;
  param_1[0xe] = param_1[0xb];
  local_68 = 0;
  uStack_60 = (void *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  if (param_1 == (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    FUN_1400bbfc4(&local_50,param_1);
    uStack_70 = CONCAT44(uStack_4c,local_50);
    local_68 = CONCAT44(uStack_44,uStack_48);
    if (uStack_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    uStack_60 = (void *)CONCAT44(uStack_3c,local_40);
    local_58 = CONCAT44(uStack_34,uStack_38);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    if (cVar3 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        local_78 = 0;
        goto LAB_1441085dc;
      }
    }
    local_78 = CONCAT44(local_78._4_4_,uVar2);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar6;
      }
    }
    local_78 = CONCAT44(iVar4,(undefined4)local_78);
  }
LAB_1441085dc:
  _Src = uStack_60;
  *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_70._4_4_;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 0x84) = local_68._4_4_;
  plVar1 = param_1 + 0x11;
  if (plVar1 != &uStack_60) {
    iVar4 = (int)local_58;
    lVar5 = (longlong)(int)local_58;
    *(int *)(param_1 + 0x12) = (int)local_58;
    if ((int)local_58 == 0 && *(int *)((longlong)param_1 + 0x94) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    }
    else {
      FUN_1446dd670(plVar1,local_58 & 0xffffffff);
      if (iVar4 != 0) {
        memcpy((void *)*plVar1,_Src,lVar5 * 2);
      }
    }
  }
  FUN_143cb176c(param_1[0xe],&local_78);
  if (uStack_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_144108658:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441086f8 FUN_1441086f8 body=110 status=ok
// SIG undefined FUN_1441086f8(void)

void FUN_1441086f8(longlong param_1)

{
  undefined2 *puVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_143cb17ec(*(longlong *)(param_1 + 0x70),param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0x94) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x88),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0x88);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 144108767 FUN_144108767 body=41 status=ok
// SIG undefined FUN_144108767(void)

void FUN_144108767(void)

{
  DAT_14cbc8b00 = 0;
  if (DAT_14cbc8af8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69116();
  return;
}



// FUNCTION 1441087d4 FUN_1441087d4 body=49 status=ok
// SIG undefined FUN_1441087d4(void)

void FUN_1441087d4(void)

{
  FUN_1447a1747(DAT_14cbc8bc0,DAT_14cbc8bc8);
  if (DAT_14cbc8bc0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144108806 FUN_144108806 body=5094 status=ok
// SIG undefined FUN_144108806(void)

ulonglong FUN_144108806(longlong *param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  longlong *local_148;
  undefined1 local_140 [8];
  undefined8 *local_138;
  int local_130;
  code *local_128;
  longlong *plStack_120;
  longlong *local_110;
  int local_108;
  int local_100;
  short local_fc [2];
  uint local_f8;
  undefined4 uStack_f4;
  int local_f0;
  uint uStack_ec;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined4 local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((((param_1 == (longlong *)0x0) ||
        (lVar9 = FUN_140f7e331(), *(char *)(lVar9 + 0x32) != '\x01')) ||
       (lVar9 = FUN_1447210f0(param_1), lVar9 == 0)) ||
      ((lVar9 = FUN_1400f6f32(lVar9), lVar9 == 0 ||
       (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 == 0)))) ||
     (FUN_140d27df6(lVar9,local_fc,param_1), local_fc[0] < 0)) {
    uVar19 = 0;
    goto LAB_144108bcb;
  }
  uVar19 = 0;
  local_100 = FUN_140b9fef0(lVar9,local_fc,0);
  if (local_100 < 0) goto LAB_144108bcb;
  uVar10 = FUN_1447210f0(param_1);
  lVar9 = FUN_140149a73(uVar10,0);
  if (lVar9 != 0) {
    FUN_143d29618(lVar9,&local_100);
  }
  FUN_141208f3a(&local_110);
  uVar19 = CONCAT71((int7)((ulonglong)&local_110 >> 8),1);
  if ((longlong)local_108 != 0) {
    plVar13 = local_110 + local_108;
    bVar21 = false;
    plVar14 = local_110;
    do {
      while ((lVar9 = *plVar14, lVar9 != 0 &&
             (plVar11 = (longlong *)(**(code **)(*param_1 + 0x14d0))(param_1),
             plVar11 != (longlong *)0x0))) {
        local_f8 = local_f8 & 0xffffff00;
        uStack_f4 = 0;
        local_f0 = 0;
        uStack_ec = 0;
        local_e8 = 0;
        local_d4 = 0;
        local_e4 = 0;
        uStack_dc = 0;
        local_c8 = 0xc69c4000;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_80 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        local_67 = 1;
        local_65 = 0;
        local_64 = 0;
        plStack_b8 = param_1;
        if (((char)param_1[0x2f] == '\x03') && (lVar16 = FUN_1447210f0(param_1), lVar16 != 0)) {
          uVar10 = FUN_1447210f0(param_1);
          plVar12 = (longlong *)FUN_140636ec6(uVar10);
          if (plVar12 != (longlong *)0x0) {
            if (DAT_14cbadd90 == 0) {
              local_128 = FUN_141030f22;
              local_150 = FUN_14081d0ea;
              local_158 = &LAB_1459f2e4c;
              local_160 = &local_128;
              local_168 = &LAB_148c39de3;
              local_170 = &LAB_1457a9eb2;
              local_178 = &DAT_149e063b2;
              local_180 = 0;
              local_188 = 0x10000004;
              local_190 = 0x10;
              local_198 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
                  == DAT_14cbadd90 + 0x30)) &&
                (FUN_1441f2f48(plVar12,&local_f8), plVar12 != param_1)) &&
               ((cVar7 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar7 != '\0' &&
                (plVar12 = (longlong *)(**(code **)(*plVar12 + 0x14d0))(plVar12),
                plVar12 != (longlong *)0x0)))) {
              bVar6 = (**(code **)(*plVar12 + 0x48))(plVar12,lVar9 + 0x90);
              puVar15 = &DAT_14cb7c580;
              if (bVar6 != 0) {
                puVar15 = &DAT_14cb7c588;
              }
              local_f8 = CONCAT31(local_f8._1_3_,1);
              uStack_f4 = (undefined4)*puVar15;
              local_f0 = (int)((ulonglong)*puVar15 >> 0x20);
              uStack_ec = (uint)bVar6;
            }
          }
        }
        cVar7 = (**(code **)(*param_1 + 0x6c8))(param_1);
        if (cVar7 == '\0') {
          local_f8 = CONCAT31(local_f8._1_3_,1);
          uStack_f4 = (undefined4)DAT_14cb7c588;
          local_f0 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
          uStack_ec = 1;
        }
        (**(code **)(*plVar11 + 0x28))(plVar11,&local_128,lVar9 + 0x90,&local_f8);
        FUN_1409838b8(&local_f8);
        plVar14 = plVar14 + 1;
        bVar21 = true;
        if (plVar14 == plVar13) goto LAB_144108c0d;
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar13);
    if (bVar21) {
LAB_144108c0d:
      cVar7 = (**(code **)(*param_1 + 0x6c8))(param_1);
      if (cVar7 == '\0') {
        if ((char)param_1[0x2f] == '\x03') {
          *(undefined1 *)(param_1 + 0x64a) = 1;
          uVar10 = FUN_14477b072(param_1,DAT_14cbad790);
          (**(code **)(*param_1 + 0x248))(param_1,uVar10,0);
        }
      }
      else {
        lVar9 = FUN_1447210f0(param_1);
        if (lVar9 != 0) {
          uVar10 = FUN_1447210f0(param_1);
          plVar13 = (longlong *)FUN_140636ec6(uVar10);
          if (plVar13 != (longlong *)0x0) {
            if (DAT_14cbadd90 == 0) {
              local_f8 = 0x41030f22;
              uStack_f4 = 1;
              local_150 = FUN_14081d0ea;
              local_158 = &LAB_1459f2e4c;
              local_160 = (code **)&local_f8;
              local_168 = &LAB_148c39de3;
              local_170 = &LAB_1457a9eb2;
              local_178 = &DAT_149e063b2;
              local_180 = 0;
              local_188 = 0x10000004;
              local_190 = 0x10;
              local_198 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
                == DAT_14cbadd90 + 0x30)) {
              plVar14 = (longlong *)(**(code **)(*param_1 + 0x14d0))(param_1);
              if (plVar14 != (longlong *)0x0) {
                lVar9 = FUN_140f7e331();
                (**(code **)(*plVar14 + 0x20))(plVar14,*(undefined1 *)(lVar9 + 0x30));
              }
              if (plVar13 == param_1) {
                plVar13 = (longlong *)(**(code **)(*param_1 + 0x14d8))(param_1);
                if ((plVar13 != (longlong *)0x0) && ((longlong)local_108 != 0)) {
                  plVar11 = local_110 + local_108;
                  plVar14 = local_110;
                  local_148 = plVar11;
                  do {
                    lVar9 = *plVar14;
                    if (lVar9 != 0) {
                      bVar21 = false;
                      local_f8 = local_f8 & 0xffffff00;
                      uStack_f4 = 0;
                      local_f0 = 0;
                      uStack_ec = 0;
                      local_e8 = 0;
                      local_d4 = 0;
                      local_e4 = 0;
                      uStack_dc = 0;
                      local_c8 = 0xc69c4000;
                      local_78 = 0;
                      local_70 = 0;
                      local_68 = 0;
                      local_80 = 0;
                      local_90 = 0;
                      uStack_88 = 0;
                      local_a0 = 0;
                      uStack_98 = 0;
                      local_b0 = 0;
                      uStack_a8 = 0;
                      local_c0 = 0;
                      plStack_b8 = (longlong *)0x0;
                      local_67 = 1;
                      local_65 = 0;
                      local_64 = 0;
                      FUN_1441f2f48(param_1,&local_f8);
                      puVar17 = *(undefined4 **)(lVar9 + 8);
                      if (puVar17 == (undefined4 *)0x0) {
                        puVar17 = &DAT_14c9485f0;
                      }
                      local_128 = (code *)0x0;
                      plStack_120 = (longlong *)0x0;
                      FUN_1400b2348(puVar17,&local_128,1);
                      if ((longlong)DAT_14cbc8bc8 != 0) {
                        plVar12 = DAT_14cbc8bc0;
LAB_14410988f:
                        if ((int)plVar12[1] == (int)plStack_120) {
                          bVar21 = true;
                          plVar11 = local_148;
                          if (1 < (int)plStack_120) {
                            lVar16 = 0;
                            do {
                              uVar2 = *(ushort *)(*plVar12 + lVar16);
                              uVar3 = *(ushort *)(local_128 + lVar16);
                              if (uVar2 == uVar3) {
                                if (uVar2 == 0) break;
                              }
                              else {
                                if (0x7f < (uVar3 | uVar2)) {
                                  iVar20 = (uint)uVar2 - (uint)uVar3;
                                  goto LAB_144109910;
                                }
                                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                                goto code_r0x00014410990d;
                              }
                              lVar16 = lVar16 + 2;
                            } while( true );
                          }
                        }
                        else {
                          if ((int)plVar12[1] + (int)plStack_120 != 1) goto LAB_1441098a5;
                          bVar21 = true;
                        }
                      }
LAB_144109810:
                      if (local_128 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                      if (bVar21) {
                        local_f8 = CONCAT31(local_f8._1_3_,1);
                        uStack_f4 = (undefined4)DAT_14cb7c588;
                        local_f0 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
                        uStack_ec = 1;
                      }
                      (**(code **)(*plVar13 + 0x28))(plVar13,&local_128,lVar9 + 0x90,&local_f8);
                      FUN_1409838b8(&local_f8);
                    }
                    plVar14 = plVar14 + 1;
                  } while (plVar14 != plVar11);
                }
                plVar13 = (longlong *)(**(code **)(*param_1 + 0x14d0))(param_1);
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x18))(plVar13);
                }
                uVar10 = FUN_1447210f0(param_1);
                lVar9 = FUN_1457f66cc(uVar10);
                if (lVar9 != 0) {
                  FUN_1457d4ec8(lVar9);
                }
              }
              else {
                local_f8 = 0x48dbbfd4;
                uStack_f4 = 1;
                local_f0 = 0;
                FUN_141201fe2(param_1 + 0x57,&local_128,plVar13);
              }
            }
          }
        }
      }
      cVar7 = (**(code **)(*param_1 + 0x6c8))(param_1);
      if (cVar7 != '\0') {
        FUN_144109bee(param_1,1);
        FUN_14410a716(param_1);
        plVar13 = (longlong *)FUN_140a68038(1);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x98))(plVar13,&local_f8);
          plVar14 = (longlong *)CONCAT44(uStack_f4,local_f8);
          if (plVar14 != (longlong *)0x0) {
            local_128 = (code *)0x0;
            plStack_120 = (longlong *)((ulonglong)plStack_120 & 0xffffffff00000000);
            FUN_1446efa72(&local_128,0,3,0x10);
            pcVar5 = local_128;
            plStack_120 = (longlong *)CONCAT44(plStack_120._4_4_,3);
            *(undefined ***)local_128 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar16 == 0) {
              LOCK();
              UNLOCK();
              lVar16 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            *(longlong *)(local_128 + 0x10) = lVar16;
            *(undefined ***)local_128 = &PTR_FUN_14b9685a0;
            *(longlong *)(local_128 + 0x18) = 0;
            uVar4 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)(local_128 + 0x18) = uVar4;
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar20 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar20 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar20;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar20 = *(int *)(lVar9 + 0x10);
              bVar21 = iVar20 == 0;
              if (bVar21) {
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar20 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar20 = iVar8;
              }
            }
            *(int *)(pcVar5 + 0x1c) = iVar20;
            *(longlong **)(pcVar5 + 0x20) = param_1;
            (**(code **)(*plVar14 + 0xb8))(plVar14,&local_138,&local_128);
            if ((int)plStack_120 != 0) {
              if (local_128 == (code *)0x0) goto LAB_144108e9a;
              (*(code *)**(undefined8 **)local_128)(local_128,0);
              FUN_1446efa72(&local_128,0,0,0x10);
              plStack_120 = (longlong *)((ulonglong)plStack_120 & 0xffffffff00000000);
            }
            if (local_128 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_144108e9a:
          (**(code **)(*plVar13 + 0x70))(plVar13,&local_128);
          pcVar5 = local_128;
          if (local_128 != (code *)0x0) {
            local_138 = (undefined8 *)0x0;
            local_130 = 0;
            FUN_1446efa72(&local_138,0,3,0x10);
            puVar15 = local_138;
            local_130 = 3;
            *local_138 = &PTR_LAB_149e06450;
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar16 == 0) {
              LOCK();
              UNLOCK();
              lVar16 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            local_138[2] = lVar16;
            *local_138 = &PTR_FUN_14b968610;
            local_138[3] = 0;
            uVar4 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)(local_138 + 3) = uVar4;
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar20 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar20 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar20;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar20 = *(int *)(lVar9 + 0x10);
              bVar21 = iVar20 == 0;
              if (bVar21) {
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar20 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar20 = iVar8;
              }
            }
            *(int *)((longlong)puVar15 + 0x1c) = iVar20;
            puVar15[4] = param_1;
            (**(code **)(*(longlong *)pcVar5 + 0xb0))(pcVar5,local_140,&local_138);
            if (local_130 != 0) {
              if (local_138 == (undefined8 *)0x0) goto LAB_144108fd8;
              (**(code **)*local_138)(local_138,0);
              FUN_1446efa72(&local_138,0,0,0x10);
              local_130 = 0;
            }
            if (local_138 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_144108fd8:
          plVar13 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar14 = plStack_120 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          plVar13 = (longlong *)CONCAT44(uStack_ec,local_f0);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar13 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
        local_f8 = 0;
        uStack_f4 = 0;
        local_f0 = 0;
        FUN_1446efa72(&local_f8,0,3,0x10);
        local_f0 = 3;
        puVar15 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
        *puVar15 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        puVar15[2] = lVar16;
        *puVar15 = &PTR_FUN_14b968680;
        puVar15[3] = 0;
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(puVar15 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar20 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar20 = *(int *)(lVar9 + 0x10);
          bVar21 = iVar20 == 0;
          if (bVar21) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar20 = iVar8;
          }
        }
        *(int *)((longlong)puVar15 + 0x1c) = iVar20;
        puVar15[4] = param_1;
        FUN_1448b6402(&DAT_14c83bb40,&local_128,&local_f8);
        if (local_f0 == 0) {
LAB_14410913a:
          if (CONCAT44(uStack_f4,local_f8) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar15 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
          if (puVar15 != (undefined8 *)0x0) {
            (**(code **)*puVar15)(puVar15,0);
            FUN_1446efa72(&local_f8,0,0,0x10);
            local_f0 = 0;
            goto LAB_14410913a;
          }
        }
        local_f8 = 0;
        uStack_f4 = 0;
        local_f0 = 0;
        FUN_1446efa72(&local_f8,0,3,0x10);
        local_f0 = 3;
        puVar15 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
        *puVar15 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        puVar15[2] = lVar16;
        *puVar15 = &PTR_FUN_14b9686f0;
        puVar15[3] = 0;
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(puVar15 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar20 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar20 = *(int *)(lVar9 + 0x10);
          bVar21 = iVar20 == 0;
          if (bVar21) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar20 = iVar8;
          }
        }
        *(int *)((longlong)puVar15 + 0x1c) = iVar20;
        puVar15[4] = param_1;
        FUN_1448b6402(&DAT_14c872bf8,&local_128,&local_f8);
        if (local_f0 == 0) {
LAB_144109252:
          if (CONCAT44(uStack_f4,local_f8) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar15 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
          if (puVar15 != (undefined8 *)0x0) {
            (**(code **)*puVar15)(puVar15,0);
            FUN_1446efa72(&local_f8,0,0,0x10);
            local_f0 = 0;
            goto LAB_144109252;
          }
        }
        local_f8 = 0;
        uStack_f4 = 0;
        local_f0 = 0;
        FUN_1446efa72(&local_f8,0,3,0x10);
        local_f0 = 3;
        puVar15 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
        *puVar15 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        puVar15[2] = lVar16;
        *puVar15 = &PTR_FUN_14b968760;
        puVar15[3] = 0;
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(puVar15 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar20 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar20 = *(int *)(lVar9 + 0x10);
          bVar21 = iVar20 == 0;
          if (bVar21) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar20 = iVar8;
          }
        }
        *(int *)((longlong)puVar15 + 0x1c) = iVar20;
        puVar15[4] = param_1;
        FUN_1448b6402(&DAT_14c872c10,&local_128,&local_f8);
        if (local_f0 != 0) {
          puVar15 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
          if (puVar15 == (undefined8 *)0x0) goto LAB_14410937a;
          (**(code **)*puVar15)(puVar15,0);
          FUN_1446efa72(&local_f8,0,0,0x10);
          local_f0 = 0;
        }
        if (CONCAT44(uStack_f4,local_f8) != 0) {
          FUN_1400020a8();
        }
      }
LAB_14410937a:
      local_f8 = 0;
      uStack_f4 = 0;
      local_f0 = 0;
      FUN_1446efa72(&local_f8,0,3,0x10);
      local_f0 = 3;
      puVar15 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
      *puVar15 = &PTR_LAB_14b3fc260;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      puVar15[2] = lVar16;
      *puVar15 = &PTR_FUN_14b9687d0;
      puVar15[3] = 0;
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(puVar15 + 3) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar20 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar20 = *(int *)(lVar9 + 0x10);
        bVar21 = iVar20 == 0;
        if (bVar21) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar20 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar20 = iVar8;
        }
      }
      *(int *)((longlong)puVar15 + 0x1c) = iVar20;
      plVar13 = (longlong *)CONCAT44(uStack_f4,local_f8);
      if ((local_f0 == 0) || (plVar13 == (longlong *)0x0)) {
LAB_144109a30:
        if (local_f0 != 0) {
          if (plVar13 == (longlong *)0x0) goto LAB_14410958e;
          (**(code **)*plVar13)(plVar13,0);
          FUN_1446efa72(&local_f8,0,0,0x10);
          goto LAB_144109572;
        }
      }
      else {
        cVar7 = (**(code **)(*plVar13 + 0x30))();
        if (cVar7 == '\0') {
          plVar13 = (longlong *)CONCAT44(uStack_f4,local_f8);
          goto LAB_144109a30;
        }
        plVar13 = param_1 + 0x138;
        if (*(int *)((longlong)param_1 + 0x9d4) < 1) {
          iVar20 = (int)param_1[0x139];
          iVar8 = (int)param_1[0x13a] + -1;
          *(int *)(param_1 + 0x13a) = iVar8;
          if (iVar8 <= iVar20) {
            iVar8 = iVar20;
            if (0 < iVar20) {
              iVar18 = 0;
              do {
                if (((*(int *)(*plVar13 + 8 + (longlong)iVar18 * 0x10) == 0) ||
                    (plVar14 = *(longlong **)(*plVar13 + (longlong)iVar18 * 0x10),
                    plVar14 == (longlong *)0x0)) ||
                   (cVar7 = (**(code **)(*plVar14 + 0x28))(), cVar7 != '\0')) {
                  FUN_14005b288(plVar13,iVar18);
                  FUN_14005b248(plVar13);
                }
                else {
                  iVar18 = iVar18 + 1;
                }
                iVar8 = (int)param_1[0x139];
              } while (iVar18 < iVar8);
            }
            iVar18 = 2;
            if (2 < iVar8 * 2) {
              iVar18 = iVar8 * 2;
            }
            *(int *)(param_1 + 0x13a) = iVar18;
            if ((iVar18 < iVar20) && (*(int *)((longlong)param_1 + 0x9cc) != iVar8)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_f0 != 0) &&
           (plVar14 = (longlong *)CONCAT44(uStack_f4,local_f8), plVar14 != (longlong *)0x0)) {
          (**(code **)(*plVar14 + 0x38))(plVar14,&local_128);
        }
        iVar20 = (int)param_1[0x139];
        *(uint *)(param_1 + 0x139) = iVar20 + 1U;
        if (*(uint *)((longlong)param_1 + 0x9cc) < iVar20 + 1U) {
          FUN_1447a71f6(plVar13,iVar20);
        }
        lVar9 = *plVar13;
        lVar16 = (longlong)iVar20 * 0x10;
        *(undefined8 *)(lVar9 + lVar16) = 0;
        *(undefined4 *)(lVar9 + 8 + lVar16) = 0;
        *(ulonglong *)(lVar9 + lVar16) = CONCAT44(uStack_f4,local_f8);
        local_f8 = 0;
        uStack_f4 = 0;
        *(int *)(lVar9 + 8 + lVar16) = local_f0;
LAB_144109572:
        local_f0 = 0;
        plVar13 = (longlong *)CONCAT44(uStack_f4,local_f8);
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar19 = 0;
    }
  }
LAB_14410958e:
  if (local_110 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_144108bcb:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
code_r0x00014410990d:
  iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_144109910:
  if (iVar20 == 0) goto LAB_144109810;
LAB_1441098a5:
  plVar12 = plVar12 + 2;
  bVar21 = false;
  if (plVar12 == DAT_14cbc8bc0 + (longlong)DAT_14cbc8bc8 * 2) goto LAB_144109810;
  goto LAB_14410988f;
}



// FUNCTION 144109bee FUN_144109bee body=2855 status=ok
// SIG undefined FUN_144109bee(void)

void FUN_144109bee(longlong *param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  wchar_t *_Str1;
  ulonglong uVar15;
  code *_Str2;
  ushort uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ushort uVar19;
  longlong lVar20;
  void *_Src;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  char local_10a;
  byte local_109;
  longlong local_108;
  uint local_fc;
  ulonglong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  code *local_78;
  undefined8 uStack_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_1 == (longlong *)0x0) goto LAB_144109c20;
  local_a8 = 0;
  uStack_a0 = 0;
  local_10a = param_2;
  plVar9 = (longlong *)FUN_140a68038(1);
  if (plVar9 == (longlong *)0x0) {
    local_c0 = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x98))(plVar9,&local_78);
    if (local_78 != (code *)0x0) {
      local_b8 = (longlong *)0x0;
      plStack_b0 = (longlong *)0x0;
      cVar4 = FUN_146624dfc(param_1);
      if (cVar4 != '\0') {
        (**(code **)(*(longlong *)local_78 + 0x40))(local_78,local_b8,&local_a8);
      }
      plVar18 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_b0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
    }
    plVar18 = uStack_70;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = uStack_70 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_c0);
  }
  lVar10 = local_c0;
  FUN_141208f3a(&local_b8);
  local_f0 = param_1;
  if ((longlong)(int)plStack_b0 == 0) {
    local_f8 = 0;
  }
  else {
    plVar9 = local_b8 + (int)plStack_b0;
    local_f8 = 0;
    plVar18 = local_b8;
    local_e0 = lVar10;
    local_d8 = plVar9;
    do {
      if ((*plVar18 != 0) &&
         (local_108 = *plVar18, plVar11 = (longlong *)(**(code **)(*param_1 + 0x14d0))(param_1),
         plVar11 != (longlong *)0x0)) {
        puVar13 = *(undefined4 **)(local_108 + 8);
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = &DAT_14c9485f0;
        }
        local_78 = (code *)0x0;
        uStack_70 = (longlong *)0x0;
        local_e8 = plVar11;
        local_d0 = plVar18;
        FUN_1400b2348(puVar13,&local_78,1);
        if ((longlong)DAT_14cbc8bc8 != 0) {
          plVar9 = DAT_14cbc8bc0;
LAB_14410a14c:
          if ((int)plVar9[1] == (int)uStack_70) {
            bVar3 = true;
            if (1 < (int)uStack_70) {
              lVar20 = 0;
              do {
                uVar19 = *(ushort *)(*plVar9 + lVar20);
                uVar15 = (ulonglong)uVar19;
                uVar16 = *(ushort *)(local_78 + lVar20);
                if (uVar19 == uVar16) {
                  if (uVar19 == 0) break;
                }
                else {
                  if (0x7f < (uVar16 | uVar19)) goto LAB_14410a1c8;
                  uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  uVar17 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                  if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar17]) goto LAB_14410a1c8;
                }
                lVar20 = lVar20 + 2;
              } while( true );
            }
          }
          else {
            if ((int)plVar9[1] + (int)uStack_70 != 1) goto LAB_14410a162;
            bVar3 = true;
          }
          goto LAB_14410a058;
        }
        bVar3 = false;
LAB_14410a058:
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
        }
        plVar11 = local_e8;
        if (bVar3) {
          lVar20 = local_108 + 0x90;
          plVar14 = local_e8;
          cVar4 = (**(code **)(*local_e8 + 0x48))(local_e8,lVar20);
          plVar18 = local_d0;
          plVar9 = local_d8;
          if (cVar4 == '\0') {
            local_168 = 0;
            local_f8 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
            (**(code **)(*plVar11 + 0x58))(plVar11,lVar20,1);
          }
        }
        else {
          local_78 = (code *)0x0;
          uStack_70 = (longlong *)0x0;
          if (lVar10 != 0) {
            if (lVar10 == DAT_14cb8e468) {
              if (&local_78 != (code **)(local_108 + 200)) {
                uVar2 = *(uint *)(local_108 + 0xd0);
                uVar15 = (ulonglong)(int)uVar2;
                _Src = *(void **)(local_108 + 200);
                uStack_70 = (longlong *)(ulonglong)uVar2;
                if (uVar15 == 0) {
LAB_14410a372:
                  uStack_70 = (longlong *)((ulonglong)uStack_70 & 0xffffffff);
                }
                else {
                  FUN_1446dd670(&local_78,uVar2,0);
LAB_14410a352:
                  memcpy(local_78,_Src,uVar15 * 2);
                }
              }
            }
            else {
              FUN_1446f470e(&local_80,L"EPIC",1);
              if (lVar10 == local_80) {
                if (&local_78 != (code **)(local_108 + 0xe8)) {
                  uVar15 = (ulonglong)*(int *)(local_108 + 0xf0);
                  _Src = *(void **)(local_108 + 0xe8);
                  iVar7 = (int)((ulonglong)uStack_70 >> 0x20);
                  goto LAB_14410a331;
                }
              }
              else {
                FUN_1446f470e(&local_88,&DAT_14b4367ec,1);
                if (lVar10 == local_88) {
                  if (&local_78 != (code **)(local_108 + 0xf8)) {
                    uVar15 = (ulonglong)*(int *)(local_108 + 0x100);
                    _Src = *(void **)(local_108 + 0xf8);
                    iVar7 = (int)((ulonglong)uStack_70 >> 0x20);
                    goto LAB_14410a331;
                  }
                }
                else {
                  FUN_1446f470e(&local_90,&DAT_14b4367f4,1);
                  iVar7 = uStack_70._4_4_;
                  if (lVar10 == local_90) {
                    if (&local_78 != (code **)(local_108 + 0x108)) {
                      uVar15 = (ulonglong)*(int *)(local_108 + 0x110);
                      _Src = *(void **)(local_108 + 0x108);
LAB_14410a331:
                      iVar8 = (int)uVar15;
                      uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,iVar8);
                      if (iVar8 == 0 && iVar7 == 0) goto LAB_14410a372;
                      FUN_1446dd670(&local_78,uVar15 & 0xffffffff);
                      if (iVar8 != 0) goto LAB_14410a352;
                    }
                  }
                  else if ((lVar10 == DAT_14cb8e210) && (&local_78 != (code **)(local_108 + 0x118)))
                  {
                    uVar15 = (ulonglong)*(int *)(local_108 + 0x120);
                    _Src = *(void **)(local_108 + 0x118);
                    goto LAB_14410a331;
                  }
                }
              }
            }
          }
          lVar20 = local_108 + 0x90;
          bVar5 = (**(code **)(*local_e8 + 0x48))(local_e8,lVar20);
          if ((longlong)(int)uStack_a0 == 0) {
            cVar6 = FUN_14016169c(param_1,0);
            cVar4 = local_10a;
            if (cVar6 != '\0') {
LAB_14410a493:
              cVar4 = local_10a;
              lVar22 = FUN_14364fb34(param_1,0);
              if ((lVar22 != 0) &&
                 (plVar9 = (longlong *)FUN_1401b2ade(lVar22), plVar9 != (longlong *)0x0)) {
                if (DAT_14cbadd90 == 0) {
                  local_68 = FUN_141030f22;
                  local_120 = FUN_14081d0ea;
                  local_128 = &LAB_1459f2e4c;
                  local_130 = &local_68;
                  local_138 = &LAB_148c39de3;
                  local_140 = &LAB_1457a9eb2;
                  local_148 = &DAT_149e063b2;
                  local_150 = 0;
                  local_158 = 0x10000004;
                  local_160 = 0x10;
                  local_168 = CONCAT44(local_168._4_4_,0x3de0);
                  FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,
                                FUN_1465e9ab8);
                }
                if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
                     (plVar9 != param_1)) &&
                    (*(longlong *)
                      (*(longlong *)(plVar9[2] + 0x30) +
                      (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
                   (plVar9 = (longlong *)(**(code **)(*plVar9 + 0x14d0))(plVar9),
                   plVar9 != (longlong *)0x0)) {
                  bVar5 = (**(code **)(*plVar9 + 0x48))(plVar9,lVar20);
                }
              }
            }
            uVar15 = 0;
            if (bVar5 != 0) {
LAB_14410a4de:
              local_168 = 0;
              uVar12 = (**(code **)(*local_e8 + 0x58))(local_e8,lVar20,uVar15 & 0xffffff01,0);
              local_f8 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
            }
          }
          else {
            _Str2 = (code *)&DAT_149dfb77a;
            if ((int)uStack_70 != 0) {
              _Str2 = local_78;
            }
            lVar22 = (longlong)(int)uStack_a0 * 0x30 + local_a8;
            local_fc = 0;
            lVar10 = local_a8;
            local_109 = bVar5;
            local_c8 = lVar20;
            do {
              iVar7 = *(int *)(lVar10 + 0x28);
              if ((longlong)iVar7 != 0) {
                lVar20 = *(longlong *)(lVar10 + 0x20);
                lVar21 = 0;
                do {
                  _Str1 = L"";
                  if (*(int *)(lVar20 + 0x20 + lVar21) != 0) {
                    _Str1 = *(wchar_t **)(lVar20 + 0x18 + lVar21);
                  }
                  iVar8 = wcscmp(_Str1,(wchar_t *)_Str2);
                  if (iVar8 == 0) {
                    local_fc = 1;
                    break;
                  }
                  lVar21 = lVar21 + 0x40;
                } while ((longlong)iVar7 * 0x40 != lVar21);
              }
              param_1 = local_f0;
              lVar10 = lVar10 + 0x30;
            } while (lVar10 != lVar22);
            cVar6 = FUN_14016169c(local_f0,0);
            cVar4 = local_10a;
            lVar10 = local_e0;
            lVar20 = local_c8;
            if (cVar6 == '\0') {
              uVar15 = (ulonglong)local_fc;
              if (local_109 != ((byte)local_fc & 1)) goto LAB_14410a4de;
            }
            else {
              bVar5 = local_109;
              if ((local_fc & 1) == 0) goto LAB_14410a493;
              uVar15 = CONCAT71((int7)((ulonglong)lVar22 >> 8),1);
              if (local_109 == 0) goto LAB_14410a4de;
            }
          }
          plVar18 = local_d0;
          plVar9 = local_d8;
          if (cVar4 == '\0') {
            FUN_14410b786(param_1,local_108,uVar15 & 0xffffff01);
          }
          if (local_78 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar9);
  }
  if (local_10a == '\0') {
    FUN_1441edcbc(param_1);
  }
  if ((char)param_1[0x2f] != '\x03') {
    (**(code **)(*param_1 + 0x1128))(param_1);
  }
  if ((((local_f8 & 1) != 0) && (cVar4 = FUN_14016169c(param_1,0), cVar4 != '\0')) &&
     (lVar10 = FUN_14364fb34(param_1,0), lVar10 != 0)) {
    plVar9 = (longlong *)FUN_1401b2ade(lVar10);
    if (plVar9 == (longlong *)0x0) {
LAB_144109e10:
      plVar9 = (longlong *)0x0;
    }
    else {
      if (DAT_14cbadd90 == 0) {
        local_130 = &local_78;
        local_78 = FUN_141030f22;
        local_120 = FUN_14081d0ea;
        local_128 = &LAB_1459f2e4c;
        local_138 = &LAB_148c39de3;
        local_140 = &LAB_1457a9eb2;
        local_148 = &DAT_149e063b2;
        local_150 = 0;
        local_158 = 0x10000004;
        local_160 = 0x10;
        local_168 = CONCAT44(local_168._4_4_,0x3de0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
          DAT_14cbadd90 + 0x30)) goto LAB_144109e10;
    }
    if ((plVar9 == param_1) && (iVar7 = FUN_14364fe66(param_1), 1 < iVar7)) {
      iVar7 = 1;
      do {
        lVar10 = FUN_14364fb34(param_1,iVar7);
        if ((lVar10 != 0) && (plVar9 = (longlong *)FUN_1401b2ade(lVar10), plVar9 != (longlong *)0x0)
           ) {
          if (DAT_14cbadd90 == 0) {
            local_78 = FUN_141030f22;
            local_120 = FUN_14081d0ea;
            local_128 = &LAB_1459f2e4c;
            local_130 = &local_78;
            local_138 = &LAB_148c39de3;
            local_140 = &LAB_1457a9eb2;
            local_148 = &DAT_149e063b2;
            local_150 = 0;
            local_158 = 0x10000004;
            local_160 = 0x10;
            local_168 = CONCAT44(local_168._4_4_,0x3de0);
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
              (plVar9 != local_f0)) &&
             (*(longlong *)
               (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30)) {
            FUN_144109bee(plVar9,0);
          }
        }
        param_1 = local_f0;
        iVar7 = iVar7 + 1;
        iVar8 = FUN_14364fe66(local_f0);
      } while (iVar7 < iVar8);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_145842369(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_144109c20:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14410a1c8:
  if (uVar19 == uVar16) goto LAB_14410a058;
LAB_14410a162:
  plVar9 = plVar9 + 2;
  bVar3 = false;
  if (plVar9 == DAT_14cbc8bc0 + (longlong)DAT_14cbc8bc8 * 2) goto LAB_14410a058;
  goto LAB_14410a14c;
}



// FUNCTION 14410a716 FUN_14410a716 body=762 status=ok
// SIG undefined FUN_14410a716(void)

void FUN_14410a716(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) goto LAB_14410a790;
  plVar6 = (longlong *)FUN_140a68038(1);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x98))(plVar6,&local_40);
    if (local_40 == (longlong *)0x0) {
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_38 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
    }
    else {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      cVar4 = FUN_146624dfc(param_1);
      if (cVar4 != '\0') {
        uVar3 = *(uint *)(param_1 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar5 = iVar8;
          }
        }
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,2,0x10);
        local_60 = 2;
        *local_68 = &PTR_LAB_14b4c24a0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_68[2] = lVar7;
        *local_68 = &PTR_FUN_14b968840;
        local_68[3] = CONCAT44(iVar5,uVar3);
        (**(code **)(*local_40 + 0x38))(local_40,local_58,1,&local_68);
        FUN_1441edc00(param_1);
        if (local_60 == 0) {
LAB_14410a8d3:
          if (local_68 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_68 != (undefined8 *)0x0) {
          (**(code **)*local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          local_60 = 0;
          goto LAB_14410a8d3;
        }
        plVar6 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_38 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
        goto LAB_14410a790;
      }
      cVar4 = FUN_1441ed992(param_1);
      plVar6 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_38 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      if (cVar4 != '\0') goto LAB_14410a790;
    }
  }
  FUN_144109bee(param_1,0);
LAB_14410a790:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14410aa12 FUN_14410aa12 body=802 status=ok
// SIG undefined FUN_14410aa12(void)

void FUN_14410aa12(void)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_140f7e331();
  FUN_14572060a(lVar4);
  local_58 = (longlong *)0x0;
  local_50 = *(int *)(lVar4 + 0x28);
  lVar9 = (longlong)local_50;
  _Src = *(void **)(lVar4 + 0x20);
  if (lVar9 != 0) {
    FUN_141208f94(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar9 << 3);
    if ((longlong)local_50 != 0) {
      local_b0 = local_58 + local_50;
      plVar10 = local_58;
      do {
        lVar4 = *plVar10;
        if ((longlong)*(int *)(lVar4 + 0x210) != 0) {
          lVar9 = *(longlong *)(lVar4 + 0x208);
          lVar11 = (longlong)*(int *)(lVar4 + 0x210) * 0x28;
          do {
            lVar5 = FUN_144114d02(lVar9);
            if (lVar5 != 0) {
              plVar6 = (longlong *)FUN_144114d02(lVar9);
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
            lVar9 = lVar9 + 0x28;
            lVar11 = lVar11 + -0x28;
          } while (lVar11 != 0);
        }
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        lVar9 = DAT_14caa8580;
        FUN_1400021e4(lVar4 + 0x38,&local_88);
        FUN_1410f2562(&local_a8);
        iVar8 = (int)local_a0;
        iVar2 = ((int)local_a0 == 0) + 4;
        local_98 = local_a8;
        local_a8 = 0;
        iVar1 = local_a0._4_4_;
        local_90 = local_a0;
        local_a0 = 0;
        iVar7 = iVar2 + iVar8;
        if (iVar7 < iVar8) {
LAB_14410ad26:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar2);
        }
        if (iVar7 < 0) {
LAB_14410ad1f:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (iVar1 < iVar7) {
          FUN_1446f8c06(&local_98);
        }
        FUN_1401aebe8(&local_98,&DAT_149e3129a,3);
        iVar8 = local_80 + -1;
        if (local_80 == 0) {
          iVar8 = 0;
        }
        iVar1 = (int)local_90;
        iVar3 = iVar8 + 1 + (uint)((int)local_90 == 0);
        local_78 = local_98;
        local_98 = 0;
        iVar2 = local_90._4_4_;
        local_70 = local_90;
        local_90 = 0;
        iVar7 = iVar3 + iVar1;
        if (iVar7 < iVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar3);
        }
        if (iVar7 < 0) goto LAB_14410ad1f;
        if (iVar2 < iVar7) {
          FUN_1446f8c06(&local_78);
        }
        FUN_1401aebe8(&local_78,local_88,iVar8);
        iVar8 = (int)local_70;
        iVar2 = ((int)local_70 == 0) + 0xc;
        local_68 = local_78;
        local_78 = 0;
        local_60 = (int)local_70;
        iVar1 = local_70._4_4_;
        local_5c = local_70._4_4_;
        local_70 = 0;
        iVar7 = iVar2 + iVar8;
        if (iVar7 < iVar8) goto LAB_14410ad26;
        if (iVar7 < 0) goto LAB_14410ad1f;
        if (iVar1 < iVar7) {
          FUN_1446f8c06(&local_68);
        }
        FUN_1401aebe8(&local_68,L"Config/Tags",0xb);
        FUN_143272ebc(lVar9,&local_68);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != local_b0);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14410ad36 FUN_14410ad36 body=488 status=ok
// SIG undefined FUN_14410ad36(void)

longlong FUN_14410ad36(longlong param_1)

{
  longlong lVar1;
  int iVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    iVar2 = *(int *)(lVar1 + 0x38);
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= iVar2) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) goto LAB_14410adac;
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
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
      lVar1 = *(longlong *)(param_1 + 0x10);
      iVar2 = *(int *)(lVar1 + 0x38);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= iVar2) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  param_1 = 0;
LAB_14410adac:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14410af30 FUN_14410af30 body=915 status=ok
// SIG undefined FUN_14410af30(void)

void FUN_14410af30(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  void *_Src;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  ulonglong uStack_b0;
  longlong local_a8 [4];
  undefined1 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  void *local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_14410ad36();
  if (((lVar3 == 0) || (plVar4 = (longlong *)FUN_140a68038(1), plVar4 == (longlong *)0x0)) ||
     ((**(code **)(*plVar4 + 0x10))(plVar4,&local_48), param_2 == 0)) goto LAB_14410b28b;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (local_48 != 0) {
    if (local_48 == DAT_14cb8e468) {
      if (&local_58 != (void **)(param_2 + 200)) {
        uVar2 = *(uint *)(param_2 + 0xd0);
        uVar6 = (ulonglong)(int)uVar2;
        _Src = *(void **)(param_2 + 200);
        uStack_50 = (ulonglong)uVar2;
        if (uVar6 == 0) {
LAB_14410b17b:
          uStack_50 = uStack_50 & 0xffffffff;
        }
        else {
          FUN_1446dd670(&local_58,uVar2,0);
LAB_14410b16b:
          memcpy(local_58,_Src,uVar6 * 2);
        }
      }
    }
    else {
      FUN_1446f470e(&local_60,L"EPIC",1);
      if (local_48 == local_60) {
        if (&local_58 != (void **)(param_2 + 0xd8)) {
          uVar6 = (ulonglong)*(int *)(param_2 + 0xe0);
          _Src = *(void **)(param_2 + 0xd8);
          iVar7 = uStack_50._4_4_;
          goto LAB_14410b14a;
        }
      }
      else {
        FUN_1446f470e(&local_68,&DAT_14b4367ec,1);
        if (local_48 == local_68) {
          if (&local_58 != (void **)(param_2 + 0xf8)) {
            uVar6 = (ulonglong)*(int *)(param_2 + 0x100);
            _Src = *(void **)(param_2 + 0xf8);
            iVar7 = uStack_50._4_4_;
            goto LAB_14410b14a;
          }
        }
        else {
          FUN_1446f470e(&local_70,&DAT_14b4367f4,1);
          iVar7 = uStack_50._4_4_;
          if (local_48 == local_70) {
            if (&local_58 != (void **)(param_2 + 0x108)) {
              uVar6 = (ulonglong)*(int *)(param_2 + 0x110);
              _Src = *(void **)(param_2 + 0x108);
LAB_14410b14a:
              iVar5 = (int)uVar6;
              uStack_50 = CONCAT44(uStack_50._4_4_,iVar5);
              if (iVar5 == 0 && iVar7 == 0) goto LAB_14410b17b;
              FUN_1446dd670(&local_58,uVar6 & 0xffffffff);
              if (iVar5 != 0) goto LAB_14410b16b;
            }
          }
          else if ((local_48 == DAT_14cb8e210) && (&local_58 != (void **)(param_2 + 0x118))) {
            uVar6 = (ulonglong)*(int *)(param_2 + 0x120);
            _Src = *(void **)(param_2 + 0x118);
            goto LAB_14410b14a;
          }
        }
      }
    }
  }
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_80);
  if (local_80 != (longlong *)0x0) {
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_88 = 0;
    iVar7 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(local_a8 + 2,local_58,iVar7);
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    (**(code **)(*local_80 + 0x60))(local_80,0,local_a8,&local_b8);
    if ((int)uStack_b0 == 0) {
LAB_14410b226:
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)(local_b8,0);
      FUN_1446efa72(&local_b8,0,0,0x10);
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      goto LAB_14410b226;
    }
    if (local_a8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_78 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14410b28b:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14410b2c4 FUN_14410b2c4 body=404 status=ok
// SIG undefined FUN_14410b2c4(void)

bool FUN_14410b2c4(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = FUN_1401548e0();
    if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      lVar2 = (**(code **)(*param_1 + 8))(param_1);
      lVar3 = FUN_14050caa6();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar2 = FUN_141563480(param_1 + 0x1b);
        *param_2 = lVar2;
        return (bool)(char)param_1[0x1a];
      }
      lVar2 = (**(code **)(*param_1 + 8))(param_1);
      lVar3 = FUN_140fa5e64();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        uVar1 = FUN_1441a499a(param_1,param_2);
        return (bool)uVar1;
      }
      lVar2 = (**(code **)(*param_1 + 8))(param_1);
      lVar3 = FUN_14050b070();
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && (lVar2 = FUN_141450d48(param_1), lVar2 != 0)) {
        lVar3 = FUN_141563480(lVar2 + 0x30);
        *param_2 = lVar3;
        return (bool)*(undefined1 *)(lVar2 + 0x2a);
      }
      lVar2 = (**(code **)(*param_1 + 8))(param_1);
      lVar3 = FUN_140b7bb2c();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar2 = FUN_141563480(param_1 + 0x19);
        *param_2 = lVar2;
        return lVar2 != 0;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x10aa) == '\x01') {
      lVar2 = FUN_141563480(param_1 + 0x216);
      *param_2 = lVar2;
      return true;
    }
  }
  return false;
}



// FUNCTION 14410b458 FUN_14410b458 body=692 status=ok
// SIG undefined FUN_14410b458(void)

undefined8 FUN_14410b458(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined7 uVar9;
  longlong lVar8;
  byte bVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  int iVar11;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar11 = 0;
  if (param_1 == 0) {
LAB_14410b4d6:
    bVar10 = (byte)iVar11;
    bVar4 = 0;
    uVar9 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_50 = &local_30;
      local_30 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar8 = *(longlong *)(param_1 + 0x10);
    iVar11 = *(int *)(lVar8 + 0x38);
    if (*(int *)(DAT_14cb10130 + 0x38) <= iVar11) {
      if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8)
          == DAT_14cb10130 + 0x30) {
        if ((*(longlong *)(param_1 + 0x30) == 0) ||
           (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar8 == 0)) {
LAB_14410b536:
          lVar8 = 0;
        }
        else {
          lVar6 = FUN_140a99ecc();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30 ||
              (lVar6 = *(longlong *)(lVar8 + 0x5c0), lVar6 == 0)))) goto LAB_14410b536;
          uVar7 = FUN_1409388d8();
          cVar5 = FUN_1448093f4(lVar6,uVar7);
          if (cVar5 == '\0') goto LAB_14410b536;
          lVar6 = *(longlong *)(lVar8 + 0x5c0);
          plVar3 = *(longlong **)(lVar8 + 0x5c8);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
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
          if (lVar6 == 0) goto LAB_14410b536;
          lVar8 = *(longlong *)(lVar6 + 0x60);
          if (lVar8 == 0) {
            local_30 = *(code **)(lVar6 + 0x50);
            lVar8 = FUN_14050aea0();
            *(longlong *)(lVar6 + 0x60) = lVar8;
          }
        }
        uVar7 = FUN_14410b2c4(lVar8,param_2);
        goto LAB_14410b4da;
      }
    }
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = (code *)&LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      lVar8 = *(longlong *)(param_1 + 0x10);
      iVar11 = *(int *)(lVar8 + 0x38);
    }
    if ((iVar11 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
        DAT_14cac9ca8 + 0x30)) goto LAB_14410b4d6;
    uVar7 = FUN_14142a9f4(param_1,param_2);
    bVar10 = (byte)uVar7;
    uVar9 = (undefined7)((ulonglong)uVar7 >> 8);
    bVar4 = 1;
  }
  uVar7 = CONCAT71(uVar9,bVar4 & bVar10);
LAB_14410b4da:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14410b70e FUN_14410b70e body=118 status=ok
// SIG undefined FUN_14410b70e(void)

bool FUN_14410b70e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = false;
  local_30 = 0;
  local_38 = 0;
  cVar1 = FUN_14410b2c4();
  cVar2 = FUN_14410b458(param_2,&local_38);
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    bVar3 = local_30 == local_38;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14410b786 FUN_14410b786 body=1672 status=ok
// SIG undefined FUN_14410b786(void)

void FUN_14410b786(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined7 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar5 = (**(code **)(*param_1 + 0x6c8))();
  if ((cVar5 == '\0') || (*(char *)((longlong)param_1 + 0x32b9) != '\x01')) goto LAB_14410bcf1;
  lVar8 = *(longlong *)(param_2 + 0x70);
  if (lVar8 == 0) {
    uVar7 = FUN_140c52150();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_2 + 0x70) = lVar8;
  }
  plVar15 = (longlong *)(param_2 + 0x68);
  lVar9 = *(longlong *)(param_2 + 0x78);
  if (lVar9 == 0) {
    if ((lVar8 == 0) || (*plVar15 == 0)) goto LAB_14410bcf1;
    plVar10 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
      *(undefined8 *)(param_2 + 0x78) = 0;
      goto LAB_14410bcf1;
    }
    uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar9 = FUN_144aff482(uVar7,plVar15);
    *(longlong *)(param_2 + 0x78) = lVar9;
    if (lVar9 == 0) goto LAB_14410bcf1;
    lVar8 = *(longlong *)(param_2 + 0x70);
  }
  if (lVar8 == 0) {
    uVar7 = FUN_140c52150();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_2 + 0x70) = lVar8;
    lVar9 = *(longlong *)(param_2 + 0x78);
    if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar15 != 0)) {
      plVar10 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar9 = FUN_144aff482(uVar7,plVar15);
      }
      *(longlong *)(param_2 + 0x78) = lVar9;
    }
  }
  plVar10 = (longlong *)FUN_140dfc108(param_1);
  local_d0 = CONCAT71(local_d0._1_7_,param_3);
  if ((plVar10 == (longlong *)0x0) || (lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar8 == 0))
  {
    local_dc = 0xffffffff;
    local_d8 = 0;
    lVar8 = 0;
  }
  else {
    lVar14 = *(longlong *)(lVar9 + 0x44);
    uVar12 = (undefined7)((ulonglong)lVar14 >> 8);
    if ((lVar14 != 0) && ((longlong)*(int *)(lVar8 + 0x80) != 0)) {
      lVar16 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0x78) + lVar16) == lVar14) {
          local_dc = 0xffffffff;
          local_d8 = CONCAT71(uVar12,1);
          local_e8 = (longlong *)CONCAT71(uVar12,1);
          bVar3 = true;
          goto LAB_14410ba45;
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)*(int *)(lVar8 + 0x80) * 8 != lVar16);
    }
    local_dc = 0xffffffff;
    local_d8 = CONCAT71(uVar12,1);
    if (0 < *(int *)(lVar8 + 0x90)) {
      lVar14 = 0;
      lVar16 = 0;
      local_e8 = plVar15;
      do {
        lVar17 = *(longlong *)(lVar8 + 0x88) + lVar14;
        lVar11 = FUN_14105c38a(lVar17);
        if (lVar11 != 0) {
          lVar17 = FUN_14105c38a(lVar17);
          lVar11 = *(longlong *)(param_2 + 0x70);
          if (lVar11 == 0) {
            uVar7 = FUN_140c52150();
            lVar11 = FUN_14477b664(uVar7);
            *(longlong *)(param_2 + 0x70) = lVar11;
          }
          lVar13 = *(longlong *)(param_2 + 0x78);
          if (lVar13 == 0) {
            if (lVar11 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = 0;
              if (*plVar15 != 0) {
                plVar15 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar15 == (longlong *)0x0) ||
                   (lVar11 = (**(code **)(*plVar15 + 0x108))(), (char)lVar11 == '\0')) {
                  lVar13 = 0;
                  plVar15 = local_e8;
                }
                else {
                  uVar7 = (**(code **)(*plVar15 + 0x110))(plVar15);
                  plVar15 = local_e8;
                  lVar11 = FUN_144aff482(uVar7,local_e8);
                  lVar13 = lVar11;
                }
                *(longlong *)(param_2 + 0x78) = lVar13;
              }
            }
          }
          if (lVar17 == lVar13) {
            uVar12 = (undefined7)((ulonglong)lVar11 >> 8);
            local_d8 = CONCAT71(uVar12,1);
            bVar3 = false;
            local_dc = (undefined4)lVar16;
            local_e8 = (longlong *)CONCAT71(uVar12,1);
            goto LAB_14410ba45;
          }
        }
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 0x50;
      } while (lVar16 < *(int *)(lVar8 + 0x90));
    }
  }
  local_e8 = (longlong *)0x0;
  bVar3 = false;
LAB_14410ba45:
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = 0;
  iVar2 = *(int *)(lVar9 + 0x20);
  uVar7 = *(undefined8 *)(lVar9 + 0x18);
  local_98 = iVar2;
  if (iVar2 == 0) {
    local_94 = 0;
  }
  else {
    FUN_140d2386a(&local_a0,iVar2,0);
    FUN_140d2381e(local_a0,uVar7,iVar2);
  }
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_1401f3db8(&local_90,lVar9 + 0x28);
  local_78 = *(undefined8 *)(lVar9 + 0x40);
  local_70 = *(undefined4 *)(lVar9 + 0x48);
  local_68 = &local_58;
  local_60 = param_1;
  if ((char)local_d0 == '\0') {
    if (param_1[0x73] != 0) {
      lVar9 = FUN_140082f10();
      plVar15 = (longlong *)param_1[0x73];
      if ((((plVar15 != (longlong *)0x0) && (lVar9 != 0)) && (lVar14 = plVar15[2], lVar14 != 0)) &&
         ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar14 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)))) {
        FUN_14410bf68(&local_a0);
        lVar9 = local_58;
        local_c8 = 0;
        uStack_c0 = 0;
        if ((longlong)(int)uStack_50 != 0) {
          lVar14 = (longlong)(int)uStack_50 << 3;
          lVar16 = 0;
          local_d0 = lVar14;
          do {
            lVar11 = *(longlong *)(lVar9 + lVar16);
            if (((lVar11 != 0) && (DAT_14cb8d3c0 != 0)) &&
               (lVar17 = FUN_1409503e6(DAT_14cb8d3c0,lVar11), lVar17 != 0)) {
              if (DAT_14cb8d3c0 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = FUN_1409503e6(DAT_14cb8d3c0,lVar11);
              }
              lVar17 = (**(code **)(*plVar15 + 0x7e0))(plVar15,lVar17 + 0x1c);
              uVar4 = uStack_c0;
              if (lVar17 != 0) {
                lVar14 = (longlong)(int)uStack_c0;
                uVar6 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
                if (uStack_c0._4_4_ < uVar6) {
                  FUN_1415027c0(&local_c8,uVar4 & 0xffffffff);
                }
                *(longlong *)(local_c8 + lVar14 * 8) = lVar11;
                cVar5 = FUN_14095026a(lVar17,lVar11);
                lVar14 = local_d0;
                if (cVar5 != '\0') {
                  FUN_1411b2196(lVar17,lVar11);
                }
              }
            }
            lVar16 = lVar16 + 8;
          } while (lVar14 != lVar16);
          if ((int)uStack_c0 == 0) {
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            FUN_1411b24f2(&local_c8,param_1);
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            if (((byte)local_d8 & (byte)local_e8) == 1) {
              FUN_14894295a(lVar8,local_dc);
            }
          }
        }
      }
    }
  }
  else if (bVar3) {
    FUN_14410bf68(&local_a0);
    lVar8 = local_58;
    lVar9 = (longlong)(int)uStack_50;
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar14) != 0) {
          FUN_1410c689e(*(longlong *)(lVar8 + lVar14),param_1);
        }
        lVar14 = lVar14 + 8;
      } while (lVar9 * 8 != lVar14);
    }
  }
  else if ((byte)local_e8 == '\0') {
    local_b8 = *(undefined8 *)(param_2 + 0x68);
    uVar7 = FUN_14477b664(*(undefined8 *)(param_2 + 0x70));
    local_b0 = FUN_14477b664(uVar7);
    local_a8 = *(undefined8 *)(param_2 + 0x78);
    FUN_1464f4f72(param_1,&local_b8);
  }
  plVar15 = plStack_88;
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_88 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  FUN_140679ffe(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14410bcf1:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14410be10 FUN_14410be10 body=326 status=ok
// SIG undefined FUN_14410be10(void)

undefined8 * FUN_14410be10(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40 [2];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1400b22c2(local_40,&DAT_14b968dad);
    FUN_1400021e4(param_2 + 0x38,&local_60);
    local_48 = (int)uStack_58;
    uVar2 = (int)uStack_58 - 1;
    if ((int)uStack_58 == 0) {
      uVar2 = 0;
    }
    if (0 < (int)uVar2) {
      uVar3 = 0;
      do {
        uVar1 = *(ushort *)(local_60 + uVar3 * 2);
        *(ushort *)(local_60 + uVar3 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    local_50 = local_60;
    local_44 = uStack_58._4_4_;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1401c7f3e(&local_30,&local_50,local_40);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    puVar4 = local_30;
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_1,puVar4,1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14410bf68 FUN_14410bf68 body=349 status=ok
// SIG undefined FUN_14410bf68(void)

void FUN_14410bf68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar9 = (longlong *)*param_1;
    lVar10 = (longlong)*(int *)(param_1 + 1) * 0x18;
    do {
      lVar7 = *plVar9;
      if (lVar7 == 0) {
LAB_14410bfc6:
        FUN_1409e3aae(plVar9,&local_50);
        plVar4 = local_48;
        lVar7 = local_50;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if ((lVar7 != 0) && (lVar7 = FUN_140aa5740(lVar7), lVar7 != 0)) {
          plVar4 = (longlong *)param_1[7];
          iVar3 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
            FUN_1415027c0(plVar4,iVar3);
          }
          *(longlong *)(*plVar4 + (longlong)iVar3 * 8) = lVar7;
        }
      }
      else {
        uVar6 = FUN_14185607e();
        cVar5 = FUN_1448093f4(lVar7,uVar6);
        if (cVar5 == '\0') goto LAB_14410bfc6;
        lVar7 = *plVar9;
        plVar4 = (longlong *)plVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (lVar7 == 0) goto LAB_14410bfc6;
        uVar6 = param_1[7];
        uVar8 = FUN_145c4e1b4(lVar7);
        FUN_145c4e23a(uVar8,uVar6);
      }
      plVar9 = plVar9 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14410c0de FUN_14410c0de body=4170 status=ok
// SIG undefined FUN_14410c0de(void)

undefined8 * FUN_14410c0de(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b88c0e0;
  param_1[3] = &PTR_FUN_14b88c540;
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
  param_1[4] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 5) = 0;
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
  param_1[6] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 7) = 0;
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
  param_1[8] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 9) = 0;
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
  param_1[10] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0xb) = 0;
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
  param_1[0xc] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0xd) = 0;
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
  param_1[0xe] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = &PTR_FUN_14b88c540;
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
  param_1[0x11] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x12) = 0;
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
  param_1[0x13] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  param_1[0x15] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x16) = 0;
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
  param_1[0x17] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x18) = 0;
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
  param_1[0x19] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x1a) = 0;
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
  param_1[0x1b] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = &PTR_FUN_14b88c540;
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
  param_1[0x1e] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x1f) = 0;
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
  param_1[0x20] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x21) = 0;
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
  param_1[0x22] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x23) = 0;
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
  param_1[0x24] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x25) = 0;
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
  param_1[0x26] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
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
  param_1[0x28] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 14410d18c FUN_14410d18c body=655 status=ok
// SIG undefined FUN_14410d18c(void)

undefined8 * FUN_14410d18c(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_14007ca06();
  FUN_140c6b9f8(param_1,uVar6);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *param_1 = &PTR_FUN_14b88c100;
  *(undefined4 *)(param_1 + 0x16) = 0x2008;
  param_1[0x17] = "ui_takedown_mode_dialog";
  FUN_1400b22c2(local_58,"OakUI.UITakedownModeDialog");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 0x5a);
  lVar7 = FUN_14406d276();
  if (lVar7 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar7);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar7 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14410d3b4;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar8;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_14410d3b4:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14410d41c FUN_14410d41c body=822 status=ok
// SIG undefined FUN_14410d41c(void)

void FUN_14410d41c(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140b7bb2c();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    if ((lVar4 == 0) || (*param_1 == 0)) goto LAB_14410d5a3;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar3,param_1);
        param_1[2] = lVar6;
        if (lVar6 == 0) goto LAB_14410d5a3;
        goto LAB_14410d46c;
      }
    }
    param_1[2] = 0;
  }
  else {
LAB_14410d46c:
    if (param_2 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_80 = &local_38;
        local_38 = FUN_141030f22;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_1459f2e4c;
        local_88 = &LAB_148c39de3;
        local_90 = &LAB_1457a9eb2;
        local_98 = &DAT_149e063b2;
        local_a0 = 0;
        local_a8 = 0x10000004;
        local_b0 = 0x10;
        local_b8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      lVar4 = *(longlong *)(param_2 + 0x10);
      iVar7 = *(int *)(lVar4 + 0x38);
      if ((iVar7 < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (lVar5 = param_2,
         *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         != DAT_14cbadd90 + 0x30)) {
        if (DAT_14cba8288 == 0) {
          local_80 = &local_38;
          local_38 = FUN_141864c34;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1464cee30;
          local_88 = &LAB_148bfac22;
          local_90 = &LAB_140f21842;
          local_98 = &DAT_149e063b2;
          local_a0 = 0;
          local_a8 = 0x10000004;
          local_b0 = 0x10;
          local_b8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          lVar4 = *(longlong *)(param_2 + 0x10);
          iVar7 = *(int *)(lVar4 + 0x38);
        }
        if ((iVar7 < *(int *)(DAT_14cba8288 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
            DAT_14cba8288 + 0x30)) goto LAB_14410d5a3;
        lVar5 = FUN_140cf8aa6(param_2);
      }
      (**(code **)(*(longlong *)(lVar5 + 0xe68) + 0x18))(lVar5 + 0xe68,param_1,param_3);
      lVar4 = *(longlong *)(lVar6 + 0x30);
      if (lVar4 != 0) {
        iVar7 = *(int *)(lVar6 + 0x38);
        if (iVar7 - 1U < 0xfffffffe) {
          if ((char)param_3 == '\0') {
            local_58 = 0;
            local_68 = lVar4;
            local_60 = iVar7;
            uVar3 = FUN_1447210f0(param_2);
            FUN_14148edb2(uVar3,lVar5,&local_68,1);
          }
          else {
            local_40 = 0;
            local_50 = lVar4;
            local_48 = iVar7;
            uVar3 = FUN_1447210f0(param_2);
            FUN_148cfbb3a(uVar3,&local_50,1);
          }
        }
      }
    }
  }
LAB_14410d5a3:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14410d78c FUN_14410d78c body=41 status=ok
// SIG undefined FUN_14410d78c(void)

void FUN_14410d78c(void)

{
  DAT_14cbc8cc0 = 0;
  if (DAT_14cbc8cb8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d691b4();
  return;
}



// FUNCTION 14410d7f4 FUN_14410d7f4 body=1 status=ok
// SIG undefined FUN_14410d7f4(void)

void FUN_14410d7f4(void)

{
  return;
}



// FUNCTION 14410d7f6 FUN_14410d7f6 body=1 status=ok
// SIG undefined FUN_14410d7f6(void)

void FUN_14410d7f6(void)

{
  return;
}



// FUNCTION 14410d7f8 FUN_14410d7f8 body=1088 status=ok
// SIG undefined FUN_14410d7f8(void)

void FUN_14410d7f8(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148d122e0(param_1,5);
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_140b7bb2c();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  if (param_2[2] == 0) {
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_14410dbd8;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,param_2);
        param_2[2] = lVar6;
        if (lVar6 == 0) goto LAB_14410dbd8;
        goto LAB_14410d84b;
      }
    }
    param_2[2] = 0;
    goto LAB_14410dbd8;
  }
LAB_14410d84b:
  if (((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_14410dbd8;
  puVar9 = (undefined8 *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x3c))) ||
     ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_14410dbd8;
  if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
    uVar5 = *puVar9;
  }
  else {
    uVar5 = 0;
  }
  lVar6 = FUN_1447210f0(uVar5);
  if (lVar6 == 0) goto LAB_14410dbd8;
  lVar6 = FUN_140115352(lVar6);
  if (lVar6 == 0) goto LAB_14410dbd8;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c75f6d8 + 1;
  lVar7 = DAT_14c75f6d8 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c75f6d8 + 2;
    lVar7 = DAT_14c75f6d8 + 2;
  }
  DAT_14c75f6d8 = lVar7;
  *(longlong *)(param_1 + 0x68) = lVar8;
  lVar7 = *param_2;
  if (*(longlong *)(param_1 + 0x40) != lVar7) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = lVar7;
  if (*(longlong *)(param_1 + 0x48) != param_2[1]) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(longlong *)(param_1 + 0x50) = param_2[2];
  *(uint *)(param_1 + 0x70) = *(byte *)(param_3 + 0x42) + 1;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar5 = FUN_140b7bb2c();
    lVar7 = FUN_14477b664(uVar5);
    param_2[1] = lVar7;
  }
  lVar8 = param_2[2];
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*param_2 != 0)) {
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_14410dc2b:
      lVar8 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar4 == '\0') goto LAB_14410dc2b;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar8 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar8;
  }
  plVar2 = (longlong *)(param_1 + 0x40);
  if ((longlong)*(int *)(lVar8 + 0xe8) != 0) {
    lVar7 = *(longlong *)(lVar8 + 0xe0);
    lVar8 = (longlong)*(int *)(lVar8 + 0xe8) * 0x18;
    do {
      FUN_141001a8e(lVar6,lVar7,param_1 + 0x58,param_3);
      lVar7 = lVar7 + 0x18;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  local_50 = *(undefined8 *)(param_1 + 0x68);
  local_78 = *(undefined4 *)(param_1 + 0x70);
  FUN_148d17d86(param_1 + 0x20,&local_50,plVar2,3);
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (lVar6 == 0) {
    uVar5 = FUN_140b7bb2c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x48) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar2 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_14410dc32:
      lVar7 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_14410dc32;
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar5,plVar2);
    }
    *(longlong *)(param_1 + 0x50) = lVar7;
  }
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uVar5 = FUN_140b7bb2c();
  lStack_60 = FUN_14477b664(uVar5);
  lVar6 = FUN_140b7bb2c();
  uVar5 = FUN_140b7bb2c();
  FUN_1402d1bfa(&local_48,uVar5,lVar7);
  if (local_68 != local_48) {
    local_58 = 0;
  }
  local_68 = local_48;
  lVar8 = FUN_140b7bb2c();
  if (lVar6 == 0) {
LAB_14410db25:
    lVar8 = lVar6;
  }
  else if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) goto LAB_14410db25;
  if (lStack_60 != lVar8) {
    local_58 = 0;
  }
  uVar5 = FUN_14477b664(lVar8);
  lStack_60 = FUN_14477b664(uVar5);
  if (lStack_60 != 0 && local_48 != 0) {
    local_58 = lVar7;
  }
  FUN_148d17e58(param_1 + 8,&local_68);
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(undefined1 *)(param_1 + 0x80) = 1;
    FUN_144958d50(param_1);
  }
LAB_14410dbd8:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14410dc7c FUN_14410dc7c body=69 status=ok
// SIG undefined FUN_14410dc7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14410dc7c(void)

{
  _DAT_14cbc8da0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014410dcbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc8da8,1);
  return;
}



// FUNCTION 14410dcc1 FUN_14410dcc1 body=69 status=ok
// SIG undefined FUN_14410dcc1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14410dcc1(void)

{
  _DAT_14cbc8db8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014410dd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc8dc0,1);
  return;
}



// FUNCTION 14410dd06 FUN_14410dd06 body=7718 status=ok
// SIG undefined FUN_14410dd06(void)

void FUN_14410dd06(longlong param_1,float param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  code *pcVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  longlong *plVar22;
  code **ppcVar23;
  undefined ***pppuVar24;
  undefined8 *puVar25;
  code *pcVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  code *pcVar29;
  code *pcVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  int iVar33;
  ulonglong uVar34;
  code *pcVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  code *pcVar40;
  bool bVar41;
  code *pcVar42;
  longlong lVar43;
  code *pcVar44;
  longlong lVar45;
  code *pcVar46;
  bool bVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  wchar_t *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  code **local_480;
  undefined1 *local_478;
  undefined1 *local_470;
  longlong *local_460;
  longlong *local_458;
  longlong local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  int local_438;
  undefined4 uStack_434;
  longlong local_430;
  longlong *plStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  longlong local_408;
  undefined8 uStack_400;
  code *local_3f8;
  code *pcStack_3f0;
  undefined ***local_3e8;
  undefined8 uStack_3e0;
  undefined **local_3d8;
  undefined8 *puStack_3d0;
  longlong *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3a8 [2];
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348;
  longlong local_330;
  longlong local_2a0;
  longlong local_280;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  FUN_141023318();
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_14410f376:
    lVar14 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x48);
    lVar14 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      plVar22 = (longlong *)
                ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((plVar22 == (longlong *)0x0) ||
         (((int)plVar22[2] != *(int *)(param_1 + 0x4c) ||
          ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)))) goto LAB_14410f376;
      lVar14 = *plVar22;
    }
  }
  if ((*(longlong *)(lVar14 + 0x430) != 0) && (DAT_14cae9568 == 0)) {
    local_480 = &local_3f8;
    local_3f8 = FUN_1417de738;
    local_470 = &LAB_145893408;
    local_478 = &LAB_1458cbbd2;
    local_488 = &LAB_147ba21f1;
    local_490 = &LAB_1463e9233;
    local_498 = L"Engine";
    local_4a0 = 0;
    local_4a8 = 0x1000000c;
    local_4b0 = 8;
    local_4b8 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
  }
  fVar48 = (float)FUN_1410230e2(param_1);
  lVar14 = *(longlong *)(param_1 + 0x50);
  if (lVar14 == 0) {
    fVar53 = 0.0;
    fVar52 = 0.0;
  }
  else {
    fVar53 = *(float *)(lVar14 + 0x2c);
    fVar52 = *(float *)(lVar14 + 0x34);
  }
  fVar54 = -1.0;
  if (((((*(int *)(param_1 + 0x4c) != 0) && (uVar11 = *(uint *)(param_1 + 0x48), -1 < (int)uVar11))
       && ((int)uVar11 < DAT_14c9647dc)) &&
      ((puVar25 = (undefined8 *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       puVar25 != (undefined8 *)0x0 && (*(int *)(puVar25 + 2) == *(int *)(param_1 + 0x4c))))) &&
     ((*(uint *)(puVar25 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar25 + 1) & 0x10200000) == 0) {
      uVar17 = *puVar25;
    }
    else {
      uVar17 = 0;
    }
    lVar14 = FUN_1447210f0(uVar17);
    if (lVar14 != 0) {
      fVar54 = (float)*(double *)(lVar14 + 0x6d0);
    }
  }
  fVar56 = *(float *)(param_1 + 0x68);
  if (fVar54 < *(float *)(param_1 + 0x68)) {
    *(float *)(param_1 + 0x68) = fVar54;
    fVar56 = fVar54;
  }
  fVar55 = *(float *)(param_1 + 0x6c);
  if (fVar54 < *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x6c) = fVar54;
    fVar55 = fVar54;
  }
  if (*(char *)(param_1 + 0x7f) == '\x01') {
    *(undefined1 *)(param_1 + 0x7f) = 0;
    if (((*(int *)(param_1 + 0x4c) != 0) && (uVar11 = *(uint *)(param_1 + 0x48), -1 < (int)uVar11))
       && (((int)uVar11 < DAT_14c9647dc &&
           (((puVar25 = (undefined8 *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             puVar25 != (undefined8 *)0x0 && (*(int *)(puVar25 + 2) == *(int *)(param_1 + 0x4c))) &&
            ((*(uint *)(puVar25 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(puVar25 + 1) & 0x10200000) == 0) {
        plVar22 = (longlong *)*puVar25;
      }
      else {
        plVar22 = (longlong *)0x0;
      }
      cVar8 = (**(code **)(*plVar22 + 0x6c8))();
      lVar14 = DAT_14cbc8db0;
      if (cVar8 != '\0') {
        lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar36 = *(int *)(lVar45 + 0xc60);
        if (iVar36 == 0x40000002) {
          uVar15 = 0;
        }
        else {
          bVar47 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar36 != 2)) {
            if (iVar36 == 1) {
              DVar12 = FUN_140ad26c0();
              DVar13 = GetCurrentThreadId();
              bVar47 = DVar12 == DVar13;
            }
            else {
              bVar47 = false;
            }
          }
          uVar15 = (ulonglong)(bVar47 ^ 1);
        }
        if (*(int *)(lVar14 + uVar15 * 4) != 0) {
          if (*(int *)(param_1 + 0x4c) == 0) {
LAB_14410f48c:
            uVar17 = 0;
          }
          else {
            uVar11 = *(uint *)(param_1 + 0x48);
            uVar17 = 0;
            if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
              puVar25 = (undefined8 *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
              if ((puVar25 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x4c) ||
                  ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)))) goto LAB_14410f48c;
              uVar17 = *puVar25;
            }
          }
          lVar14 = FUN_1447210f0(uVar17);
          if ((((lVar14 != 0) && ((*(byte *)(lVar14 + 0x155) & 0x20) == 0)) &&
              (lVar16 = FUN_140149a73(lVar14), lVar16 != 0)) &&
             (plVar22 = *(longlong **)(lVar16 + 0x140), plVar22 != (longlong *)0x0)) {
            if (*(int *)(param_1 + 0x4c) == 0) {
LAB_14410f883:
              uVar17 = 0;
            }
            else {
              uVar11 = *(uint *)(param_1 + 0x48);
              uVar17 = 0;
              if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
                puVar25 = (undefined8 *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                if ((puVar25 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x4c) ||
                    ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)))) goto LAB_14410f883;
                uVar17 = *puVar25;
              }
            }
            uVar15 = 1;
            (**(code **)(*plVar22 + 0x98))(plVar22,uVar17,1);
            lVar16 = DAT_14cbc8dc8;
            local_448 = (longlong *)CONCAT44(local_448._4_4_,0xbf800000);
            uStack_440 = (longlong *)CONCAT53((int5)((ulonglong)uStack_440 >> 0x18),0x20000);
            local_438 = 0;
            local_430 = 0;
            plStack_428 = (longlong *)0x0;
            local_420 = 0;
            uStack_418 = 0;
            iVar36 = *(int *)(lVar45 + 0xc60);
            if (iVar36 == 0x40000002) {
              uVar15 = 0;
            }
            else {
              if ((DAT_14c86a9f8 == '\x01') && (iVar36 != 2)) {
                if (iVar36 == 1) {
                  DVar12 = FUN_140ad26c0();
                  DVar13 = GetCurrentThreadId();
                  uVar15 = (ulonglong)(DVar12 == DVar13);
                }
                else {
                  uVar15 = 0;
                }
              }
              uVar15 = uVar15 ^ 1;
            }
            local_448 = (longlong *)
                        CONCAT44(*(undefined4 *)(lVar16 + uVar15 * 4),(undefined4)local_448);
            lVar45 = FUN_140cb9f34();
            lVar16 = FUN_1402d1dc0(lVar45 + 0x218);
            if (lVar16 == 0) {
              uStack_440 = (longlong *)((ulonglong)uStack_440 & 0xffffffff);
              iVar36 = 0;
            }
            else {
              uVar11 = *(uint *)(lVar16 + 0xc);
              uStack_440 = (longlong *)CONCAT44(uVar11,(undefined4)uStack_440);
              if ((int)uVar11 < DAT_14c9647dc) {
                lVar16 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              }
              else {
                lVar16 = 0;
              }
              iVar36 = *(int *)(lVar16 + 0x10);
              if (*(int *)(lVar16 + 0x10) == 0) {
                LOCK();
                iVar36 = DAT_14c964868 + 1;
                UNLOCK();
                iVar33 = DAT_14c964868 + 1;
                bVar47 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar36;
                if (bVar47) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar33);
                }
                LOCK();
                iVar36 = *(int *)(lVar16 + 0x10);
                bVar47 = iVar36 == 0;
                if (bVar47) {
                  *(int *)(lVar16 + 0x10) = iVar33;
                  iVar36 = 0;
                }
                UNLOCK();
                if (bVar47) {
                  iVar36 = iVar33;
                }
              }
            }
            local_438 = iVar36;
            uVar17 = FUN_1408fb156(lVar45 + 0x268);
            uVar21 = FUN_1402d24da(lVar45 + 0x240);
            FUN_14038d0a4(&local_3f8,uVar21,uVar17,0);
            FUN_1405f96d0(&local_408,lVar14,&local_3f8);
            plVar28 = plStack_428;
            local_430 = local_408;
            plStack_428 = uStack_400;
            local_408 = 0;
            uStack_400 = (longlong *)0x0;
            if (plVar28 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar28 + 0x10))();
              }
              if (uStack_400 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)uStack_400 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*uStack_400 + 0x10))();
                }
              }
            }
            if (local_280 != 0) {
              FUN_1400020a8();
            }
            if (local_2a0 != 0) {
              FUN_1400020a8();
            }
            if (local_330 != 0) {
              FUN_1400020a8();
            }
            if (*(int *)(param_1 + 0x4c) == 0) {
LAB_14410f88a:
              lVar14 = 0;
            }
            else {
              uVar11 = *(uint *)(param_1 + 0x48);
              lVar14 = 0;
              if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
                plVar28 = (longlong *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                if ((plVar28 == (longlong *)0x0) ||
                   (((int)plVar28[2] != *(int *)(param_1 + 0x4c) ||
                    ((*(uint *)(plVar28 + 1) & 0x10200000) != 0)))) goto LAB_14410f88a;
                lVar14 = *plVar28;
              }
            }
            lVar45 = *(longlong *)(lVar14 + 0x430);
            if (lVar45 != 0) {
              if (DAT_14cae9568 == 0) {
                local_3f8 = FUN_1417de738;
                local_470 = &LAB_145893408;
                local_478 = &LAB_1458cbbd2;
                local_488 = &LAB_147ba21f1;
                local_490 = &LAB_1463e9233;
                local_498 = L"Engine";
                local_4a0 = 0;
                local_4a8 = 0x1000000c;
                local_4b0 = 8;
                local_4b8 = 0x2b8;
                local_480 = &local_3f8;
                FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
                lVar45 = *(longlong *)(lVar14 + 0x430);
                if (lVar45 == 0) goto LAB_14410f76e;
              }
              if ((((DAT_14cae9568 != 0) && (lVar14 = *(longlong *)(lVar45 + 0x10), lVar14 != 0)) &&
                  (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar14 + 0x38))) &&
                 (*(longlong *)
                   (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                  DAT_14cae9568 + 0x30)) {
                lVar14 = FUN_14030d4a0();
                if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar45 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar45 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
                   (*(uint *)(lVar45 + 0x4f0) < 3)) {
                  uStack_440._0_3_ =
                       CONCAT12((char)*(uint *)(lVar45 + 0x4f0) + '\x01',(undefined2)uStack_440);
                }
              }
            }
LAB_14410f76e:
            if (((local_438 != 0) && (-1 < (longlong)uStack_440)) &&
               (((int)uStack_440._4_4_ < DAT_14c9647dc &&
                (((plVar28 = (longlong *)
                             ((ulonglong)((uStack_440._4_4_ & 0xffff) * 0x18) +
                             *(longlong *)
                              (DAT_14c9647c8 + (ulonglong)(uStack_440._4_4_ >> 0x10) * 8)),
                  plVar28 != (longlong *)0x0 && ((int)plVar28[2] == local_438)) &&
                 ((*(uint *)(plVar28 + 1) & 0x10200000) == 0)))))) {
              if (((*(uint *)(plVar28 + 1) & 0x10200000) == 0) && (lVar14 = *plVar28, lVar14 != 0))
              {
                lVar45 = FUN_14018d992();
                if ((*(int *)(lVar45 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar45 + 0x38) * 8) == lVar45 + 0x30)) {
                  *(byte *)(lVar14 + 0x50) = *(byte *)(lVar14 + 0x50) & 0xfe;
                }
              }
              if (*(int *)(param_1 + 0x4c) == 0) {
LAB_14410f89f:
                uVar17 = 0;
              }
              else {
                uVar11 = *(uint *)(param_1 + 0x48);
                uVar17 = 0;
                if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
                  puVar25 = (undefined8 *)
                            ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                  if ((puVar25 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar25 + 2) != *(int *)(param_1 + 0x4c) ||
                      ((*(uint *)(puVar25 + 1) & 0x10200000) != 0)))) goto LAB_14410f89f;
                  uVar17 = *puVar25;
                }
              }
              (**(code **)(*plVar22 + 0x90))(plVar22,uVar17,&local_448);
            }
            FUN_145c5b6e4(&local_448);
          }
        }
      }
    }
  }
  bVar9 = *(byte *)(param_1 + 0x7e);
  if ((bVar9 == 1) && (fVar52 <= fVar54 - fVar56)) {
    FUN_14143b896(param_1);
    *(undefined1 *)(param_1 + 0x7c) = 0;
    bVar9 = *(byte *)(param_1 + 0x7e);
  }
  if ((bVar9 & 0xfe) == 2) {
    fVar52 = *(float *)(param_1 + 0x88) - param_2;
    *(float *)(param_1 + 0x88) = fVar52;
    fVar56 = *(float *)(param_1 + 0x74) + param_2;
    *(float *)(param_1 + 0x74) = fVar56;
    if (((fVar52 <= 0.0) || (*(char *)(param_1 + 0x7c) != '\0')) ||
       (*(float *)(param_1 + 0x70) <= fVar56)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined1 *)(param_1 + 0x7c) = 0;
      if ((*(longlong *)(param_1 + 0x50) != 0) && (*(char *)(param_1 + 0xa8) == '\x01')) {
        dVar4 = *(double *)(param_1 + 0x90);
        dVar5 = *(double *)(param_1 + 0x98);
        dVar6 = *(double *)(param_1 + 0xa0);
        iVar36 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x20);
        if (*(int *)(param_1 + 0x4c) == 0) {
LAB_14410f47c:
          lVar14 = 0;
        }
        else {
          uVar11 = *(uint *)(param_1 + 0x48);
          lVar14 = 0;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
            plVar22 = (longlong *)
                      ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
            if ((plVar22 == (longlong *)0x0) ||
               (((int)plVar22[2] != *(int *)(param_1 + 0x4c) ||
                ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)))) goto LAB_14410f47c;
            lVar14 = *plVar22;
          }
        }
        if ((*(longlong *)(lVar14 + 0x430) != 0) && (DAT_14cae9568 == 0)) {
          local_480 = &local_3f8;
          local_3f8 = FUN_1417de738;
          local_470 = &LAB_145893408;
          local_478 = &LAB_1458cbbd2;
          local_488 = &LAB_147ba21f1;
          local_490 = &LAB_1463e9233;
          local_498 = L"Engine";
          local_4a0 = 0;
          local_4a8 = 0x1000000c;
          local_4b0 = 8;
          local_4b8 = 0x2b8;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        }
        FUN_1410230e2(param_1);
        cVar8 = '\x01';
        if (*(char *)(param_1 + 0x84) == '\0') {
          cVar8 = *(char *)(param_1 + 0x85);
        }
        if ((longlong)*(int *)(param_1 + 0xe0) == 0) {
          iVar33 = 0;
        }
        else {
          local_460 = (longlong *)CONCAT44(local_460._4_4_,fVar53);
          lVar14 = *(longlong *)(param_1 + 0xd8);
          lVar45 = (longlong)*(int *)(param_1 + 0xe0) * 0x88;
          fVar53 = fVar48;
          do {
            lVar16 = FUN_14147ab14(lVar14);
            if ((lVar16 == 0) || (*(char *)(lVar16 + 0x18) != '\x01')) {
              bVar47 = false;
            }
            else {
              fVar53 = *(float *)(lVar16 + 0x1c);
              bVar47 = true;
            }
            *(float *)(lVar14 + 0x20) = *(float *)(lVar14 + 0x20) + fVar56;
            FUN_1415323da(lVar14,&local_3f8);
            dVar50 = (double)local_3e8 - dVar6;
            dVar49 = (double)local_3f8 - dVar4;
            dVar51 = (double)pcStack_3f0 - dVar5;
            dVar50 = SQRT(dVar50 * dVar50 + dVar49 * dVar49 + dVar51 * dVar51);
            *(double *)(lVar14 + 0x28) = dVar50;
            bVar41 = true;
            if ((double)*(float *)(param_1 + 0x138) <= dVar50) {
              bVar41 = *(float *)(*(longlong *)(param_1 + 0x50) + 0xfc) <=
                       *(float *)(param_1 + 0x138);
            }
            bVar9 = FUN_14410fb32(lVar14);
            *(byte *)(lVar14 + 0x34) = bVar9 & bVar41;
            if ((bVar9 & bVar41) == 0) {
              if ((*(longlong *)(param_1 + 0x50) == 0) ||
                 (*(char *)(*(longlong *)(param_1 + 0x50) + 0x40) == '\0')) {
                *(undefined1 *)(lVar14 + 0x35) = 1;
              }
            }
            else {
              *(float *)(lVar14 + 0x24) = *(float *)(lVar14 + 0x24) - fVar56;
            }
            if (bVar47) {
              if (fVar53 <= *(float *)(lVar14 + 0x20)) goto LAB_14410e2cd;
LAB_14410e29a:
              lVar16 = FUN_14147ab14(lVar14);
              if (lVar16 == 0) {
                if (*(char *)(lVar14 + 0x80) == '\0') {
                  lVar16 = FUN_1461a2fbe(lVar14);
                  if (lVar16 == 0) {
                    if ((*(byte *)(lVar14 + 0x80) & 1) == 0) goto LAB_14410e2cd;
                    goto LAB_14410e2b0;
                  }
                  uVar17 = FUN_1406d3bdc();
                  cVar10 = FUN_1448093f4(lVar16,uVar17);
                  if (cVar10 == '\0') {
                    lVar16 = 0;
                  }
                  *(longlong *)(lVar14 + 0x78) = lVar16;
                  *(undefined1 *)(lVar14 + 0x80) = 1;
                }
                else {
LAB_14410e2b0:
                  lVar16 = *(longlong *)(lVar14 + 0x78);
                }
                if ((lVar16 == 0) ||
                   ((*(char *)(lVar16 + 0x1e1) == '\0' && (*(char *)(lVar16 + 0x1e0) == '\0'))))
                goto LAB_14410e2cd;
              }
            }
            else {
              if (cVar8 != '\0') goto LAB_14410e29a;
LAB_14410e2cd:
              *(undefined1 *)(lVar14 + 0x35) = 1;
            }
            lVar14 = lVar14 + 0x88;
            lVar45 = lVar45 + -0x88;
          } while (lVar45 != 0);
          iVar33 = *(int *)(param_1 + 0xe0);
          fVar53 = local_460._0_4_;
        }
        if (iVar36 < iVar33) {
          puStack_3d0 = &local_448;
          local_448 = (longlong *)
                      CONCAT44(local_448._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x24)
                              );
          local_3c8 = &local_408;
          local_408 = CONCAT44(local_408._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x28)
                              );
          local_3e8 = (undefined ***)0x0;
          local_3d8 = &PTR_LAB_14b968b20;
          local_3f8 = (code *)&LAB_144117b8a;
          FUN_148d18982(*(undefined8 *)(param_1 + 0xd8),iVar33,&local_3f8);
          if (local_3f8 != (code *)0x0) {
            pppuVar24 = local_3e8;
            if (local_3e8 == (undefined ***)0x0) {
              pppuVar24 = &local_3d8;
            }
            (*(code *)(*pppuVar24)[2])();
          }
        }
        *(undefined4 *)(param_1 + 0x80) = 0;
        local_458 = (longlong *)(param_1 + 0xe8);
        local_408 = 0;
        uStack_400 = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0xf0) = 0;
        if (*(int *)(param_1 + 0xf4) < 0) {
          FUN_146625b16(local_458,0);
        }
        iVar33 = *(int *)(param_1 + 0xe0);
        if (iVar33 < 0) {
LAB_14410f8ce:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar33);
        }
        if (*(int *)(param_1 + 0xf4) < iVar33) {
          FUN_146625b16(local_458);
        }
        local_460 = (longlong *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x100) = 0;
        if (*(int *)(param_1 + 0x104) < 0) {
          FUN_146625b16(local_460,0);
        }
        iVar33 = *(int *)(param_1 + 0xe0);
        if (iVar33 < 0) goto LAB_14410f8ce;
        if (*(int *)(param_1 + 0x104) < iVar33) {
          FUN_146625b16(local_460);
          iVar33 = *(int *)(param_1 + 0xe0);
        }
        if (0 < iVar33) {
          lVar45 = 0;
          lVar14 = 0;
          do {
            lVar16 = *(longlong *)(param_1 + 0xd8);
            puVar25 = (undefined8 *)(lVar16 + lVar45);
            if ((((iVar36 <= lVar14) || (*(char *)(lVar16 + 0x35 + lVar45) != '\0')) ||
                (*(char *)(lVar16 + 0x34 + lVar45) != '\x01')) ||
               (0.0 < *(float *)(lVar16 + 0x24 + lVar45))) {
              if (*(longlong *)(lVar16 + 0x10 + lVar45) != 0) {
                FUN_14147ab14(puVar25);
                *(undefined8 *)(lVar16 + 0x10 + lVar45) = 0;
                plVar22 = *(longlong **)(lVar16 + 0x18 + lVar45);
                if (plVar22 != (longlong *)0x0) {
                  *(undefined8 *)(lVar16 + 0x18 + lVar45) = 0;
                  LOCK();
                  plVar28 = plVar22 + 1;
                  *(int *)plVar28 = (int)*plVar28 + -1;
                  UNLOCK();
                  if ((int)*plVar28 == 0) {
                    (**(code **)*plVar22)(plVar22);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar22 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar22 + 0x10))(plVar22);
                    }
                  }
                }
                *(undefined4 *)(lVar16 + 0x24 + lVar45) =
                     *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x44);
                lVar43 = (longlong)(int)uStack_400;
                uVar11 = (int)uStack_400 + 1;
                uStack_400 = (longlong *)CONCAT44(uStack_400._4_4_,uVar11);
                if (uStack_400._4_4_ < uVar11) {
                  FUN_140279b48(&local_408);
                }
                *(undefined8 *)(local_408 + lVar43 * 8) = *puVar25;
              }
              bVar47 = false;
            }
            else {
              bVar47 = true;
              if (((((*(longlong *)(lVar16 + 0x10 + lVar45) == 0) && (*(int *)(param_1 + 0x4c) != 0)
                    ) && ((uVar11 = *(uint *)(param_1 + 0x48), -1 < (int)uVar11 &&
                          (((int)uVar11 < DAT_14c9647dc &&
                           (lVar43 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8),
                           lVar43 != 0)))))) &&
                  (*(int *)(lVar43 + 0x10) == *(int *)(param_1 + 0x4c))) &&
                 ((*(uint *)(lVar43 + 8) & 0x10200000) == 0)) {
                lVar43 = (longlong)*(int *)(param_1 + 0xf0);
                uVar11 = *(int *)(param_1 + 0xf0) + 1;
                *(uint *)(param_1 + 0xf0) = uVar11;
                if (*(uint *)(param_1 + 0xf4) < uVar11) {
                  local_450 = lVar43;
                  FUN_148d18d72(local_458,lVar43);
                  lVar43 = local_450;
                }
                *(undefined8 **)(*local_458 + lVar43 * 8) = puVar25;
              }
            }
            if ((*(char *)(lVar16 + 0x34 + lVar45) == '\x01') &&
               (*(char *)(lVar16 + 0x35 + lVar45) == '\0')) {
              *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
            }
            if (bVar47) {
              iVar33 = *(int *)(param_1 + 0x100);
              uVar11 = iVar33 + 1;
              *(uint *)(param_1 + 0x100) = uVar11;
              if (*(uint *)(param_1 + 0x104) < uVar11) {
                FUN_148d18d72(local_460);
              }
              *(undefined8 **)(*local_460 + (longlong)iVar33 * 8) = puVar25;
            }
            lVar14 = lVar14 + 1;
            lVar45 = lVar45 + 0x88;
          } while (lVar14 < *(int *)(param_1 + 0xe0));
        }
        if (fVar52 <= 0.0) {
          iVar36 = *(int *)(param_1 + 0x100);
          if (1 < (longlong)iVar36) {
            pcVar18 = (code *)*local_460;
            memset(&local_3e8,0,0x2f0);
            pcStack_3f0 = pcVar18 + (longlong)iVar36 * 8 + -8;
            local_3f8 = pcVar18;
            fVar52 = logf((float)iVar36);
            local_3e8 = (undefined ***)CONCAT44(local_3e8._4_4_,(int)(longlong)(fVar52 + fVar52));
            ppcVar23 = &local_3f8;
            do {
              pcVar26 = *ppcVar23;
              pcVar30 = ppcVar23[1];
              iVar36 = *(int *)(ppcVar23 + 2);
              iVar33 = (int)((ulonglong)((longlong)pcVar30 - (longlong)pcVar26) >> 3);
              uVar15 = (ulonglong)(iVar33 + 1);
              pcVar18 = pcVar30;
              pcVar44 = pcVar26;
              if (iVar36 != 0) {
LAB_14410e66c:
                pcVar29 = pcVar26;
                if (8 < (int)(uint)uVar15) {
                  uVar15 = (ulonglong)((uint)uVar15 >> 1);
                  lVar14 = *(longlong *)(pcVar29 + uVar15 * 8);
                  *(longlong *)(pcVar29 + uVar15 * 8) = *(longlong *)pcVar29;
                  *(longlong *)pcVar29 = lVar14;
                  pcVar40 = pcVar18 + 8;
                  pcVar26 = pcVar29;
                  do {
                    pcVar7 = pcVar26 + 8;
                    pcVar35 = pcVar26 + 8;
                    do {
                      pcVar46 = pcVar35;
                      pcVar26 = pcVar7;
                      if (pcVar18 < pcVar26) break;
                      pcVar7 = pcVar26 + 8;
                      pcVar35 = pcVar46 + 8;
                    } while (*(double *)(*(longlong *)pcVar26 + 0x28) <
                             *(double *)(*(longlong *)pcVar29 + 0x28) ||
                             *(double *)(*(longlong *)pcVar26 + 0x28) ==
                             *(double *)(*(longlong *)pcVar29 + 0x28));
                    pcVar7 = pcVar40 + -0x10;
                    do {
                      pcVar35 = pcVar40;
                      pcVar42 = pcVar7;
                      pcVar40 = pcVar35 + -8;
                      if (pcVar40 <= pcVar29) break;
                      pcVar7 = pcVar42 + -8;
                    } while (*(double *)(*(longlong *)pcVar29 + 0x28) <
                             *(double *)(*(longlong *)pcVar40 + 0x28) ||
                             *(double *)(*(longlong *)pcVar29 + 0x28) ==
                             *(double *)(*(longlong *)pcVar40 + 0x28));
                    if (pcVar40 < pcVar26) goto LAB_14410e704;
                    lVar14 = *(longlong *)pcVar26;
                    *(longlong *)pcVar26 = *(longlong *)pcVar40;
                    *(longlong *)pcVar40 = lVar14;
                  } while( true );
                }
                if (pcVar29 < pcVar18) {
                  do {
                    pcVar26 = pcVar29;
                    if (pcVar29 + 8 <= pcVar18) {
                      lVar14 = *(longlong *)pcVar29;
                      pcVar30 = pcVar29 + 8;
                      do {
                        dVar4 = *(double *)(*(longlong *)pcVar30 + 0x28);
                        pcVar44 = pcVar30;
                        lVar45 = *(longlong *)pcVar30;
                        if (dVar4 < *(double *)(lVar14 + 0x28) ||
                            dVar4 == *(double *)(lVar14 + 0x28)) {
                          pcVar44 = pcVar26;
                          lVar45 = lVar14;
                        }
                        lVar14 = lVar45;
                        pcVar26 = pcVar44;
                        pcVar30 = pcVar30 + 8;
                      } while (pcVar30 <= pcVar18);
                    }
                    lVar14 = *(longlong *)pcVar26;
                    *(longlong *)pcVar26 = *(longlong *)pcVar18;
                    *(longlong *)pcVar18 = lVar14;
                    pcVar18 = pcVar18 + -8;
                  } while (pcVar29 < pcVar18);
                }
                goto LAB_14410e944;
              }
LAB_14410e798:
              iVar36 = (int)uVar15;
              if (iVar36 != 0) {
                iVar33 = (iVar33 - (iVar33 + -1 >> 0x1f)) + -1 >> 1;
                iVar39 = iVar33;
joined_r0x00014410e7bf:
                do {
                  iVar38 = iVar33 * 2 + 1;
                  if (iVar38 < iVar36) {
                    iVar37 = iVar33 * 2 + 2;
                    if ((iVar37 < iVar36) &&
                       (*(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28) <
                        *(double *)(*(longlong *)(pcVar26 + (longlong)iVar37 * 8) + 0x28) ||
                        *(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28) ==
                        *(double *)(*(longlong *)(pcVar26 + (longlong)iVar37 * 8) + 0x28))) {
                      iVar38 = iVar37;
                    }
                    lVar14 = *(longlong *)(pcVar26 + (longlong)iVar33 * 8);
                    dVar4 = *(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28);
                    pdVar2 = (double *)(lVar14 + 0x28);
                    if (*pdVar2 <= dVar4 && dVar4 != *pdVar2) {
                      *(longlong *)(pcVar26 + (longlong)iVar33 * 8) =
                           *(longlong *)(pcVar26 + (longlong)iVar38 * 8);
                      *(longlong *)(pcVar26 + (longlong)iVar38 * 8) = lVar14;
                      iVar33 = iVar38;
                      goto joined_r0x00014410e7bf;
                    }
                  }
                  bVar47 = iVar39 != 0;
                  iVar33 = iVar39 + -1;
                  iVar39 = iVar33;
                } while (bVar47);
                if (1 < iVar36) {
                  lVar14 = *(longlong *)pcVar26;
                  *(longlong *)pcVar26 = *(longlong *)(pcVar26 + (uVar15 - 1) * 8);
                  *(longlong *)(pcVar26 + (uVar15 - 1) * 8) = lVar14;
                  if (iVar36 != 2) {
                    do {
                      uVar34 = uVar15 - 1;
                      iVar36 = 0;
                      iVar39 = 1;
                      iVar33 = 0;
                      do {
                        iVar36 = iVar36 + 2;
                        iVar38 = iVar39;
                        if (((longlong)iVar36 < (longlong)uVar34) &&
                           (*(double *)(*(longlong *)(pcVar26 + (longlong)iVar39 * 8) + 0x28) <
                            *(double *)(*(longlong *)(pcVar26 + (longlong)iVar36 * 8) + 0x28) ||
                            *(double *)(*(longlong *)(pcVar26 + (longlong)iVar39 * 8) + 0x28) ==
                            *(double *)(*(longlong *)(pcVar26 + (longlong)iVar36 * 8) + 0x28))) {
                          iVar38 = iVar36;
                        }
                        lVar14 = *(longlong *)(pcVar26 + (longlong)iVar33 * 8);
                        dVar4 = *(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28);
                        pdVar2 = (double *)(lVar14 + 0x28);
                        if (dVar4 < *pdVar2 || dVar4 == *pdVar2) break;
                        *(longlong *)(pcVar26 + (longlong)iVar33 * 8) =
                             *(longlong *)(pcVar26 + (longlong)iVar38 * 8);
                        *(longlong *)(pcVar26 + (longlong)iVar38 * 8) = lVar14;
                        iVar36 = iVar38 * 2;
                        iVar39 = iVar38 * 2 + 1;
                        iVar33 = iVar38;
                      } while ((longlong)iVar39 < (longlong)uVar34);
                      lVar14 = *(longlong *)pcVar26;
                      *(longlong *)pcVar26 = *(longlong *)(pcVar26 + (uVar15 - 2) * 8);
                      *(longlong *)(pcVar26 + (uVar15 - 2) * 8) = lVar14;
                      uVar15 = uVar34;
                    } while (2 < uVar34);
                  }
                }
              }
LAB_14410e944:
              ppcVar23 = ppcVar23 + -3;
            } while (&local_3f8 <= ppcVar23);
            iVar36 = *(int *)(param_1 + 0x100);
          }
          if (0 < iVar36) {
            fVar52 = (float)iVar36 + -1.0;
            if (fVar52 <= 1.0) {
              fVar52 = 1.0;
            }
            lVar14 = 0;
            do {
              *(float *)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar14 * 8) + 0x30) =
                   (float)(int)lVar14 / fVar52;
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)(param_1 + 0x100));
          }
          iVar36 = *(int *)(param_1 + 0xf0);
          if (1 < (longlong)iVar36) {
            pcVar18 = (code *)*local_458;
            memset(&local_3e8,0,0x2f0);
            pcStack_3f0 = pcVar18 + (longlong)iVar36 * 8 + -8;
            local_3f8 = pcVar18;
            fVar52 = logf((float)iVar36);
            local_3e8 = (undefined ***)CONCAT44(local_3e8._4_4_,(int)(longlong)(fVar52 + fVar52));
            ppcVar23 = &local_3f8;
            do {
              pcVar26 = *ppcVar23;
              pcVar30 = ppcVar23[1];
              iVar36 = *(int *)(ppcVar23 + 2);
              iVar33 = (int)((ulonglong)((longlong)pcVar30 - (longlong)pcVar26) >> 3);
              uVar15 = (ulonglong)(iVar33 + 1);
              pcVar18 = pcVar30;
              pcVar44 = pcVar26;
              if (iVar36 != 0) {
LAB_14410ea2e:
                pcVar29 = pcVar26;
                if (8 < (int)(uint)uVar15) {
                  uVar15 = (ulonglong)((uint)uVar15 >> 1);
                  lVar14 = *(longlong *)(pcVar29 + uVar15 * 8);
                  *(longlong *)(pcVar29 + uVar15 * 8) = *(longlong *)pcVar29;
                  *(longlong *)pcVar29 = lVar14;
                  pcVar40 = pcVar18 + 8;
                  pcVar26 = pcVar29;
                  do {
                    pcVar7 = pcVar26 + 8;
                    pcVar35 = pcVar26 + 8;
                    do {
                      pcVar46 = pcVar35;
                      pcVar26 = pcVar7;
                      if (pcVar18 < pcVar26) break;
                      pcVar7 = pcVar26 + 8;
                      pcVar35 = pcVar46 + 8;
                    } while (*(double *)(*(longlong *)pcVar26 + 0x28) <
                             *(double *)(*(longlong *)pcVar29 + 0x28) ||
                             *(double *)(*(longlong *)pcVar26 + 0x28) ==
                             *(double *)(*(longlong *)pcVar29 + 0x28));
                    pcVar7 = pcVar40 + -0x10;
                    do {
                      pcVar35 = pcVar40;
                      pcVar42 = pcVar7;
                      pcVar40 = pcVar35 + -8;
                      if (pcVar40 <= pcVar29) break;
                      pcVar7 = pcVar42 + -8;
                    } while (*(double *)(*(longlong *)pcVar29 + 0x28) <
                             *(double *)(*(longlong *)pcVar40 + 0x28) ||
                             *(double *)(*(longlong *)pcVar29 + 0x28) ==
                             *(double *)(*(longlong *)pcVar40 + 0x28));
                    if (pcVar40 < pcVar26) goto LAB_14410eac6;
                    lVar14 = *(longlong *)pcVar26;
                    *(longlong *)pcVar26 = *(longlong *)pcVar40;
                    *(longlong *)pcVar40 = lVar14;
                  } while( true );
                }
                if (pcVar29 < pcVar18) {
                  do {
                    pcVar26 = pcVar29;
                    if (pcVar29 + 8 <= pcVar18) {
                      lVar14 = *(longlong *)pcVar29;
                      pcVar30 = pcVar29 + 8;
                      do {
                        dVar4 = *(double *)(*(longlong *)pcVar30 + 0x28);
                        pcVar44 = pcVar30;
                        lVar45 = *(longlong *)pcVar30;
                        if (dVar4 < *(double *)(lVar14 + 0x28) ||
                            dVar4 == *(double *)(lVar14 + 0x28)) {
                          pcVar44 = pcVar26;
                          lVar45 = lVar14;
                        }
                        lVar14 = lVar45;
                        pcVar26 = pcVar44;
                        pcVar30 = pcVar30 + 8;
                      } while (pcVar30 <= pcVar18);
                    }
                    lVar14 = *(longlong *)pcVar26;
                    *(longlong *)pcVar26 = *(longlong *)pcVar18;
                    *(longlong *)pcVar18 = lVar14;
                    pcVar18 = pcVar18 + -8;
                  } while (pcVar29 < pcVar18);
                }
                goto LAB_14410ed06;
              }
LAB_14410eb5a:
              iVar36 = (int)uVar15;
              if (iVar36 != 0) {
                iVar33 = (iVar33 - (iVar33 + -1 >> 0x1f)) + -1 >> 1;
                iVar39 = iVar33;
joined_r0x00014410eb81:
                do {
                  iVar38 = iVar33 * 2 + 1;
                  if (iVar38 < iVar36) {
                    iVar37 = iVar33 * 2 + 2;
                    if ((iVar37 < iVar36) &&
                       (*(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28) <
                        *(double *)(*(longlong *)(pcVar26 + (longlong)iVar37 * 8) + 0x28) ||
                        *(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28) ==
                        *(double *)(*(longlong *)(pcVar26 + (longlong)iVar37 * 8) + 0x28))) {
                      iVar38 = iVar37;
                    }
                    lVar14 = *(longlong *)(pcVar26 + (longlong)iVar33 * 8);
                    dVar4 = *(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28);
                    pdVar2 = (double *)(lVar14 + 0x28);
                    if (*pdVar2 <= dVar4 && dVar4 != *pdVar2) {
                      *(longlong *)(pcVar26 + (longlong)iVar33 * 8) =
                           *(longlong *)(pcVar26 + (longlong)iVar38 * 8);
                      *(longlong *)(pcVar26 + (longlong)iVar38 * 8) = lVar14;
                      iVar33 = iVar38;
                      goto joined_r0x00014410eb81;
                    }
                  }
                  bVar47 = iVar39 != 0;
                  iVar33 = iVar39 + -1;
                  iVar39 = iVar33;
                } while (bVar47);
                if (1 < iVar36) {
                  lVar14 = *(longlong *)pcVar26;
                  *(longlong *)pcVar26 = *(longlong *)(pcVar26 + (uVar15 - 1) * 8);
                  *(longlong *)(pcVar26 + (uVar15 - 1) * 8) = lVar14;
                  if (iVar36 != 2) {
                    do {
                      uVar34 = uVar15 - 1;
                      iVar36 = 0;
                      iVar39 = 1;
                      iVar33 = 0;
                      do {
                        iVar36 = iVar36 + 2;
                        iVar38 = iVar39;
                        if (((longlong)iVar36 < (longlong)uVar34) &&
                           (*(double *)(*(longlong *)(pcVar26 + (longlong)iVar39 * 8) + 0x28) <
                            *(double *)(*(longlong *)(pcVar26 + (longlong)iVar36 * 8) + 0x28) ||
                            *(double *)(*(longlong *)(pcVar26 + (longlong)iVar39 * 8) + 0x28) ==
                            *(double *)(*(longlong *)(pcVar26 + (longlong)iVar36 * 8) + 0x28))) {
                          iVar38 = iVar36;
                        }
                        lVar14 = *(longlong *)(pcVar26 + (longlong)iVar33 * 8);
                        dVar4 = *(double *)(*(longlong *)(pcVar26 + (longlong)iVar38 * 8) + 0x28);
                        pdVar2 = (double *)(lVar14 + 0x28);
                        if (dVar4 < *pdVar2 || dVar4 == *pdVar2) break;
                        *(longlong *)(pcVar26 + (longlong)iVar33 * 8) =
                             *(longlong *)(pcVar26 + (longlong)iVar38 * 8);
                        *(longlong *)(pcVar26 + (longlong)iVar38 * 8) = lVar14;
                        iVar36 = iVar38 * 2;
                        iVar39 = iVar38 * 2 + 1;
                        iVar33 = iVar38;
                      } while ((longlong)iVar39 < (longlong)uVar34);
                      lVar14 = *(longlong *)pcVar26;
                      *(longlong *)pcVar26 = *(longlong *)(pcVar26 + (uVar15 - 2) * 8);
                      *(longlong *)(pcVar26 + (uVar15 - 2) * 8) = lVar14;
                      uVar15 = uVar34;
                    } while (2 < uVar34);
                  }
                }
              }
LAB_14410ed06:
              ppcVar23 = ppcVar23 + -3;
            } while (&local_3f8 <= ppcVar23);
            iVar36 = *(int *)(param_1 + 0xf0);
          }
          if (iVar36 < 1) {
LAB_14410f191:
            puVar20 = (undefined4 *)(param_1 + 0x70);
          }
          else {
            lVar14 = 0;
            do {
              lVar45 = *(longlong *)(param_1 + 0x50);
              if (*(int *)(lVar45 + 0x3c) <= lVar14) {
                if (lVar14 == 0) goto LAB_14410f191;
                goto LAB_14410f18b;
              }
              puVar25 = *(undefined8 **)(*(longlong *)(param_1 + 0xe8) + lVar14 * 8);
              pcVar18 = (code *)FUN_14147ab14(puVar25);
              local_3d8 = (undefined **)0x0;
              puStack_3d0 = (undefined8 *)0x0;
              local_3e8 = (undefined ***)0x0;
              uStack_3e0 = 0;
              pcStack_3f0 = (code *)0x0;
              local_3c8 = *(longlong **)(param_1 + 0x48);
              uStack_3c0 = 0;
              local_3b8 = 0;
              puVar27 = &DAT_14c846480;
              puVar31 = local_3a8;
              for (lVar45 = 0xc; lVar45 != 0; lVar45 = lVar45 + -1) {
                *puVar31 = *puVar27;
                puVar27 = puVar27 + 1;
                puVar31 = puVar31 + 1;
              }
              local_348 = 0;
              local_3f8 = pcVar18;
              FUN_1415323da(puVar25,&local_448);
              uStack_380 = SUB84(uStack_440,0);
              uStack_37c = (undefined4)((ulonglong)uStack_440 >> 0x20);
              local_378 = CONCAT44(uStack_434,local_438);
              local_3a8[0] = 0;
              local_3a8[1] = 0;
              local_398 = 0;
              uStack_394 = 0;
              uStack_390 = 0;
              uStack_38c = 0x3ff00000;
              local_388 = (undefined4)local_448;
              uStack_384 = local_448._4_4_;
              uStack_370 = 0;
              local_368 = 0x3ff0000000000000;
              uStack_360 = 0x3ff0000000000000;
              local_358 = 0x3ff0000000000000;
              uStack_350 = 0;
              local_348 = *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x58);
              uStack_3c0 = puVar25[1];
              if ((((*(int *)((longlong)puVar25 + 0xc) == 0) ||
                   (uVar11 = *(uint *)(puVar25 + 1), (int)uVar11 < 0)) ||
                  (DAT_14c9647dc <= (int)uVar11)) ||
                 (((puVar27 = (undefined8 *)
                              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                   puVar27 == (undefined8 *)0x0 ||
                   (*(int *)(puVar27 + 2) != *(int *)((longlong)puVar25 + 0xc))) ||
                  ((*(uint *)(puVar27 + 1) & 0x10200000) != 0)))) {
LAB_14410ef1e:
                local_3b8 = 0;
                iVar36 = 0;
              }
              else {
                if ((*(uint *)(puVar27 + 1) & 0x10200000) == 0) {
                  plVar22 = (longlong *)*puVar27;
                }
                else {
                  plVar22 = (longlong *)0x0;
                }
                lVar45 = (**(code **)(*plVar22 + 0x2d0))();
                if (lVar45 == 0) goto LAB_14410ef1e;
                uVar11 = *(uint *)(lVar45 + 0xc);
                local_3b8 = CONCAT44(local_3b8._4_4_,uVar11);
                if ((int)uVar11 < DAT_14c9647dc) {
                  lVar45 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                }
                else {
                  lVar45 = 0;
                }
                iVar36 = *(int *)(lVar45 + 0x10);
                if (*(int *)(lVar45 + 0x10) == 0) {
                  LOCK();
                  iVar36 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar33 = DAT_14c964868 + 1;
                  bVar47 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar36;
                  if (bVar47) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar33);
                  }
                  LOCK();
                  iVar36 = *(int *)(lVar45 + 0x10);
                  bVar47 = iVar36 == 0;
                  if (bVar47) {
                    *(int *)(lVar45 + 0x10) = iVar33;
                    iVar36 = 0;
                  }
                  UNLOCK();
                  if (bVar47) {
                    iVar36 = iVar33;
                  }
                }
              }
              local_3b8 = CONCAT44(iVar36,(undefined4)local_3b8);
              plVar19 = (longlong *)FUN_14001cc68(400);
              plVar19[1] = (longlong)&DAT_100000001;
              *plVar19 = (longlong)&PTR_FUN_14b967740;
              plVar22 = plVar19 + 2;
              memset(plVar22,0,0x180);
              plVar28 = &DAT_14c846480;
              plVar32 = plVar19 + 0xe;
              for (lVar45 = 0xc; lVar45 != 0; lVar45 = lVar45 + -1) {
                *plVar32 = *plVar28;
                plVar28 = plVar28 + 1;
                plVar32 = plVar32 + 1;
              }
              plVar19[0x26] = 0;
              plVar19[0x27] = 0;
              plVar19[0x24] = 0;
              plVar19[0x25] = 0;
              plVar19[0x22] = 0;
              plVar19[0x23] = 0;
              plVar19[0x20] = 0;
              plVar19[0x21] = 0;
              plVar19[0x1e] = 0;
              plVar19[0x1f] = 0;
              plVar19[0x1c] = 0;
              plVar19[0x1d] = 0;
              *(undefined8 *)((longlong)plVar19 + 0x15c) = 0xffffffff00000080;
              plVar19[0x30] = 0;
              local_448 = plVar22;
              uStack_440 = plVar19;
              FUN_148d13fb6(&local_448,plVar22);
              if (plVar19 == (longlong *)0x0) {
                puVar25[2] = 0x10;
                plVar22 = (longlong *)puVar25[3];
                if (plVar22 != (longlong *)0x0) {
                  puVar25[3] = 0;
LAB_14410f037:
                  LOCK();
                  plVar28 = plVar22 + 1;
                  *(int *)plVar28 = (int)*plVar28 + -1;
                  UNLOCK();
                  if ((int)*plVar28 == 0) {
                    (**(code **)*plVar22)(plVar22);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar22 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar36 = *piVar1;
                    UNLOCK();
joined_r0x00014410f065:
                    if (iVar36 == 0) {
                      (**(code **)(*plVar22 + 0x10))(plVar22);
                    }
                  }
                }
              }
              else {
                LOCK();
                *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                UNLOCK();
                puVar25[2] = plVar22;
                plVar22 = (longlong *)puVar25[3];
                if (plVar19 == plVar22) {
                  LOCK();
                  plVar22 = plVar19 + 1;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)*plVar22 == 0) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar36 = *piVar1;
                    UNLOCK();
                    plVar22 = plVar19;
                    goto joined_r0x00014410f065;
                  }
                }
                else {
                  puVar25[3] = plVar19;
                  if (plVar22 != (longlong *)0x0) goto LAB_14410f037;
                }
              }
              plVar22 = uStack_440;
              if (uStack_440 != (longlong *)0x0) {
                LOCK();
                plVar28 = uStack_440 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 == 0) {
                  (**(code **)*uStack_440)(uStack_440);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar22 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar22 + 0x10))(plVar22);
                  }
                }
              }
              lVar45 = puVar25[2];
              if ((lVar45 != 0) && (FUN_1460071d0(lVar45,&local_3f8), puVar25[2] != 0)) {
                FUN_14654b078();
              }
              plVar22 = uStack_400;
              lVar45 = (longlong)(int)uStack_400;
              uVar11 = (int)uStack_400 + 1;
              uStack_400 = (longlong *)CONCAT44(uStack_400._4_4_,uVar11);
              if (uStack_400._4_4_ < uVar11) {
                FUN_140279b48(&local_408,(ulonglong)plVar22 & 0xffffffff);
              }
              *(undefined8 *)(local_408 + lVar45 * 8) = *puVar25;
              if (pcVar18 != (code *)0x0) {
                uVar3 = *(undefined4 *)(puVar25 + 6);
                FUN_1415323da(puVar25,&local_448);
                FUN_146226008(param_1,pcVar18,&local_448,uVar3);
              }
              if (local_3d8 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)(param_1 + 0xf0));
            lVar45 = *(longlong *)(param_1 + 0x50);
LAB_14410f18b:
            puVar20 = (undefined4 *)(lVar45 + 0x38);
          }
          *(undefined4 *)(param_1 + 0x88) = *puVar20;
        }
        *(undefined4 *)(param_1 + 0xf0) = 0;
        if (*(int *)(param_1 + 0xf4) < 0) {
          FUN_146625b16(local_458,0);
        }
        *(undefined4 *)(param_1 + 0x100) = 0;
        if (*(int *)(param_1 + 0x104) < 0) {
          FUN_146625b16(local_460,0);
        }
        if (local_408 != 0) {
          FUN_1400020a8();
        }
        bVar9 = *(byte *)(param_1 + 0x7e);
      }
    }
    fVar54 = fVar54 - fVar55;
    if (bVar9 == 2) {
      *(bool *)(param_1 + 0x84) = fVar54 <= fVar48;
      if (((fVar54 <= fVar48) || (*(char *)(param_1 + 0x85) != '\0')) ||
         (*(int *)(param_1 + 0x80) != 0)) goto LAB_14410f265;
      FUN_14143b896(param_1,3);
      bVar9 = *(byte *)(param_1 + 0x7e);
    }
    if (bVar9 == 3) {
      fVar48 = (float)(~-(uint)(1e-08 < fVar53) & 0x3f800000 |
                      (uint)(fVar54 / fVar53) & -(uint)(1e-08 < fVar53));
      if (1.0 <= fVar48) {
        fVar48 = 1.0;
      }
      if (fVar48 <= 0.0) {
        fVar48 = 0.0;
      }
      *(float *)(param_1 + 0x78) = fVar48;
      if (fVar53 <= fVar54) {
        FUN_14143b896(param_1,0);
      }
    }
  }
LAB_14410f265:
  fVar48 = *(float *)(param_1 + 0x140) * param_2 + *(float *)(param_1 + 0x13c);
  *(float *)(param_1 + 0x13c) = fVar48;
  *(float *)(param_1 + 0x138) = fVar48 * param_2 + *(float *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar11 = *(uint *)(param_1 + 0x48);
    uVar17 = 0;
    if (((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) goto LAB_14410f2e9;
    puVar25 = (undefined8 *)
              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
    if ((puVar25 != (undefined8 *)0x0) &&
       ((*(int *)(puVar25 + 2) == *(int *)(param_1 + 0x4c) &&
        ((*(uint *)(puVar25 + 1) & 0x10200000) == 0)))) {
      uVar17 = *puVar25;
      goto LAB_14410f2e9;
    }
  }
  uVar17 = 0;
LAB_14410f2e9:
  if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_4d8);
  }
  FUN_1410971da(uVar17);
  return;
LAB_14410e704:
  lVar14 = *(longlong *)pcVar29;
  *(longlong *)pcVar29 = *(longlong *)pcVar40;
  *(longlong *)pcVar40 = lVar14;
  iVar36 = iVar36 + -1;
  pcVar35 = pcVar35 + -0x10;
  if ((longlong)pcVar42 - (longlong)pcVar44 < (longlong)pcVar30 - (longlong)pcVar46) {
    if (pcVar26 < pcVar18) {
      *ppcVar23 = pcVar26;
      ppcVar23[1] = pcVar18;
      *(int *)(ppcVar23 + 2) = iVar36;
      ppcVar23 = ppcVar23 + 3;
    }
    pcVar26 = pcVar29;
    pcVar30 = pcVar42;
    if (pcVar40 <= pcVar29 + 8) goto LAB_14410e944;
  }
  else {
    if (pcVar29 + 8 < pcVar40) {
      *ppcVar23 = pcVar29;
      ppcVar23[1] = pcVar35;
      *(int *)(ppcVar23 + 2) = iVar36;
      ppcVar23 = ppcVar23 + 3;
    }
    pcVar29 = pcVar46;
    pcVar35 = pcVar18;
    pcVar30 = pcVar18;
    if (pcVar18 <= pcVar26) goto LAB_14410e944;
  }
  iVar33 = (int)((ulonglong)((longlong)pcVar30 - (longlong)pcVar29) >> 3);
  uVar15 = (ulonglong)(iVar33 + 1);
  pcVar18 = pcVar35;
  pcVar44 = pcVar29;
  if (iVar36 == 0) goto LAB_14410e798;
  goto LAB_14410e66c;
LAB_14410eac6:
  lVar14 = *(longlong *)pcVar29;
  *(longlong *)pcVar29 = *(longlong *)pcVar40;
  *(longlong *)pcVar40 = lVar14;
  iVar36 = iVar36 + -1;
  pcVar35 = pcVar35 + -0x10;
  if ((longlong)pcVar42 - (longlong)pcVar44 < (longlong)pcVar30 - (longlong)pcVar46) {
    if (pcVar26 < pcVar18) {
      *ppcVar23 = pcVar26;
      ppcVar23[1] = pcVar18;
      *(int *)(ppcVar23 + 2) = iVar36;
      ppcVar23 = ppcVar23 + 3;
    }
    pcVar26 = pcVar29;
    pcVar30 = pcVar42;
    if (pcVar40 <= pcVar29 + 8) goto LAB_14410ed06;
  }
  else {
    if (pcVar29 + 8 < pcVar40) {
      *ppcVar23 = pcVar29;
      ppcVar23[1] = pcVar35;
      *(int *)(ppcVar23 + 2) = iVar36;
      ppcVar23 = ppcVar23 + 3;
    }
    pcVar29 = pcVar46;
    pcVar35 = pcVar18;
    pcVar30 = pcVar18;
    if (pcVar18 <= pcVar26) goto LAB_14410ed06;
  }
  iVar33 = (int)((ulonglong)((longlong)pcVar30 - (longlong)pcVar29) >> 3);
  uVar15 = (ulonglong)(iVar33 + 1);
  pcVar18 = pcVar35;
  pcVar44 = pcVar29;
  if (iVar36 == 0) goto LAB_14410eb5a;
  goto LAB_14410ea2e;
}



// FUNCTION 14410fb32 FUN_14410fb32 body=103 status=ok
// SIG undefined FUN_14410fb32(void)

undefined8 FUN_14410fb32(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar2;
      }
      else {
        lVar4 = 0;
      }
      if (*(char *)(lVar4 + 0x60) == '\x01') {
        uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x40)) &
                0xffffffffffffff08;
        return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 3);
      }
    }
  }
  return 0;
}



// FUNCTION 14410fb99 FUN_14410fb99 body=91 status=ok
// SIG undefined FUN_14410fb99(void)

void FUN_14410fb99(void)

{
  if (DAT_14cbc8e70 != 0) {
    if (DAT_14cbc8e68 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbc8e68)(DAT_14cbc8e68,0);
    FUN_1446efa72(&DAT_14cbc8e68,0,0,0x10);
    DAT_14cbc8e70 = 0;
  }
  if (DAT_14cbc8e68 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14410fbf4 FUN_14410fbf4 body=1537 status=ok
// SIG undefined FUN_14410fbf4(void)

undefined8 FUN_14410fbf4(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  char local_128 [16];
  longlong *local_118;
  undefined4 local_100 [2];
  char local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_d0 [2];
  float local_c8;
  undefined4 uStack_c4;
  ushort local_b0;
  byte local_a8;
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar8 = param_1[1];
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 8))(param_2);
    lVar6 = FUN_1418c9c00();
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
      plVar11 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30) {
        plVar11 = param_2;
      }
      goto LAB_14410fc59;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_14410fc59:
  local_128[0] = '\0';
  local_100[0] = 0;
  FUN_1456bb102(local_128,*(undefined8 *)(lVar8 + 0x250));
  local_f8 = '\0';
  local_d0[0] = 0;
  lVar5 = plVar11[0x1f];
  if (lVar5 == 0) {
    uVar7 = FUN_14016979c();
    lVar5 = FUN_14477b664(uVar7);
    plVar11[0x1f] = lVar5;
  }
  lVar6 = plVar11[0x20];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (plVar11[0x1e] != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar7,plVar11 + 0x1e);
    }
    plVar11[0x20] = lVar6;
  }
  FUN_1400606f6(&local_a0,lVar6,local_128);
  pfVar10 = local_70;
  if (local_70 == (float *)0x0) {
    pfVar10 = &local_a0;
  }
  if (local_68 < 1) {
    pfVar10 = (float *)&DAT_14c9a40e0;
  }
  pfVar9 = &local_c8;
  FUN_1400603ec(pfVar9,lVar6,pfVar10);
  pfVar10 = local_70;
  if (local_70 == (float *)0x0) {
    pfVar10 = &local_a0;
  }
  FUN_1446fdf58(pfVar10,local_68);
  if (local_70 != (float *)0x0) {
    FUN_1400020a8();
  }
  fVar12 = local_c8;
  if (local_a8 != 3) {
    pfVar10 = &local_a0;
    FUN_1400b56fe(pfVar10,&local_c8,3);
    fVar12 = local_a0;
    if (local_80 == 0) {
      fVar12 = 1.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar10 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar3)(pfVar10);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
  }
  *(float *)*param_1 = fVar12 * *(float *)*param_1;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_b0) {
      pfVar9 = (float *)CONCAT44(uStack_c4,local_c8);
    }
    (*pcVar3)(pfVar9);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
  }
  FUN_1448173f8(local_d0);
  if (local_f8 != '\0') {
    if (local_f8 == '\x01') {
      local_f0 = 0;
    }
    else if ((local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))();
      }
    }
    local_f8 = '\0';
  }
  FUN_1448173f8(local_100);
  if ((local_128[0] == '\x03') && (local_118 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  local_128[0] = '\0';
  local_100[0] = 0;
  FUN_1456bb102(local_128,*(undefined8 *)(lVar8 + 0x250));
  local_f8 = '\0';
  local_d0[0] = 0;
  lVar8 = plVar11[0x22];
  if (lVar8 == 0) {
    uVar7 = FUN_14016979c();
    lVar8 = FUN_14477b664(uVar7);
    plVar11[0x22] = lVar8;
  }
  lVar5 = plVar11[0x23];
  if (((lVar5 == 0) && (lVar5 = 0, lVar8 != 0)) && (plVar11[0x21] != 0)) {
    plVar2 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar7,plVar11 + 0x21);
    }
    plVar11[0x23] = lVar5;
  }
  FUN_1400606f6(&local_a0,lVar5,local_128);
  pfVar10 = local_70;
  if (local_70 == (float *)0x0) {
    pfVar10 = &local_a0;
  }
  pfVar9 = (float *)&DAT_14c9a40e0;
  if (0 < local_68) {
    pfVar9 = pfVar10;
  }
  pfVar10 = &local_c8;
  FUN_1400603ec(pfVar10,lVar5,pfVar9);
  pfVar9 = local_70;
  if (local_70 == (float *)0x0) {
    pfVar9 = &local_a0;
  }
  FUN_1446fdf58(pfVar9,local_68);
  if (local_70 != (float *)0x0) {
    FUN_1400020a8();
  }
  fVar12 = local_c8;
  if (local_a8 != 3) {
    pfVar9 = &local_a0;
    FUN_1400b56fe(pfVar9,&local_c8,3);
    fVar12 = local_a0;
    if (local_80 == 0) {
      fVar12 = 1.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar9 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar3)(pfVar9);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
  }
  *(float *)param_1[2] = fVar12 * *(float *)param_1[2];
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_b0) {
      pfVar10 = (float *)CONCAT44(uStack_c4,local_c8);
    }
    (*pcVar3)(pfVar10);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
  }
  FUN_1448173f8(local_d0);
  if (local_f8 != '\0') {
    if (local_f8 == '\x01') {
      local_f0 = 0;
    }
    else if ((local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))();
      }
    }
    local_f8 = '\0';
  }
  FUN_1448173f8(local_100);
  if ((local_128[0] == '\x03') && (local_118 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14411021c FUN_14411021c body=12 status=ok
// SIG undefined FUN_14411021c(void)

void FUN_14411021c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144110225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144110228 FUN_144110228 body=29 status=ok
// SIG undefined FUN_144110228(void)

undefined8 FUN_144110228(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144110246 FUN_144110246 body=29 status=ok
// SIG undefined FUN_144110246(void)

undefined8 FUN_144110246(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441103e2 FUN_1441103e2 body=93 status=ok
// SIG undefined FUN_1441103e2(void)

void FUN_1441103e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9670b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144110440 FUN_144110440 body=93 status=ok
// SIG undefined FUN_144110440(void)

void FUN_144110440(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9670b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14411049e FUN_14411049e body=126 status=ok
// SIG undefined FUN_14411049e(void)

void FUN_14411049e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9670b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014411050d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144110526 FUN_144110526 body=266 status=ok
// SIG undefined FUN_144110526(void)

undefined8 FUN_144110526(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14411062a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14411062a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14411062a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441105de;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_141178150(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1441105de;
    }
  }
  uVar6 = 0;
LAB_1441105de:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144110632 FUN_144110632 body=31 status=ok
// SIG undefined FUN_144110632(void)

undefined8 FUN_144110632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411065e FUN_14411065e body=29 status=ok
// SIG undefined FUN_14411065e(void)

undefined8 FUN_14411065e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441107fa FUN_1441107fa body=93 status=ok
// SIG undefined FUN_1441107fa(void)

void FUN_1441107fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144110858 FUN_144110858 body=93 status=ok
// SIG undefined FUN_144110858(void)

void FUN_144110858(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441108b6 FUN_1441108b6 body=126 status=ok
// SIG undefined FUN_1441108b6(void)

void FUN_1441108b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b95ff40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b967190;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144110925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144110948 FUN_144110948 body=279 status=ok
// SIG undefined FUN_144110948(void)

undefined8 FUN_144110948(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144110a59;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_144110a59;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144110a59:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441109f6;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar7 = 1;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      goto LAB_1441109f6;
    }
  }
  uVar7 = 0;
LAB_1441109f6:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144110a60 FUN_144110a60 body=29 status=ok
// SIG undefined FUN_144110a60(void)

undefined8 FUN_144110a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144110bfc FUN_144110bfc body=93 status=ok
// SIG undefined FUN_144110bfc(void)

void FUN_144110bfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144110c5a FUN_144110c5a body=93 status=ok
// SIG undefined FUN_144110c5a(void)

void FUN_144110c5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95ff40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144110cb8 FUN_144110cb8 body=126 status=ok
// SIG undefined FUN_144110cb8(void)

void FUN_144110cb8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b95ff40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b967200;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144110d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144110d4a FUN_144110d4a body=279 status=ok
// SIG undefined FUN_144110d4a(void)

undefined8 FUN_144110d4a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144110e5b;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_144110e5b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144110e5b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144110df8;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar7 = 1;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      goto LAB_144110df8;
    }
  }
  uVar7 = 0;
LAB_144110df8:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144110e62 FUN_144110e62 body=29 status=ok
// SIG undefined FUN_144110e62(void)

undefined8 FUN_144110e62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144110e94 FUN_144110e94 body=93 status=ok
// SIG undefined FUN_144110e94(void)

void FUN_144110e94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144110ef2 FUN_144110ef2 body=93 status=ok
// SIG undefined FUN_144110ef2(void)

void FUN_144110ef2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967290;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144110f50 FUN_144110f50 body=126 status=ok
// SIG undefined FUN_144110f50(void)

void FUN_144110f50(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b967290;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144110fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144110fce FUN_144110fce body=96 status=ok
// SIG undefined FUN_144110fce(void)

void FUN_144110fce(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  uint *local_40 [2];
  undefined1 local_30 [8];
  byte *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148d0ee54(local_30);
  FUN_1481b5836(local_40,param_2);
  *local_40[0] = (uint)*local_28;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144111030 FUN_144111030 body=98 status=ok
// SIG undefined FUN_144111030(void)

undefined8 FUN_144111030(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  uint *local_40 [2];
  undefined1 local_30 [8];
  byte *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148d0ee54(local_30);
  FUN_1481b5836(local_40,param_2);
  *local_40[0] = (uint)*local_28;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441110be FUN_1441110be body=12 status=ok
// SIG undefined FUN_1441110be(void)

void FUN_1441110be(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441110c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441110ca FUN_1441110ca body=29 status=ok
// SIG undefined FUN_1441110ca(void)

undefined8 FUN_1441110ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411110e FUN_14411110e body=282 status=ok
// SIG undefined FUN_14411110e(void)

undefined8 * FUN_14411110e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1441110e7);
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



// FUNCTION 144111228 FUN_144111228 body=117 status=ok
// SIG undefined FUN_144111228(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144111228(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148d1395a(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148d1395a(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144111293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14411129e FUN_14411129e body=29 status=ok
// SIG undefined FUN_14411129e(void)

undefined8 FUN_14411129e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411143a FUN_14411143a body=93 status=ok
// SIG undefined FUN_14411143a(void)

void FUN_14411143a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144111498 FUN_144111498 body=93 status=ok
// SIG undefined FUN_144111498(void)

void FUN_144111498(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441114f6 FUN_1441114f6 body=126 status=ok
// SIG undefined FUN_1441114f6(void)

void FUN_1441114f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b967330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144111565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144111580 FUN_144111580 body=282 status=ok
// SIG undefined FUN_144111580(void)

undefined8 FUN_144111580(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144111694;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144111694;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_144111694:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144111633;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d0f226(*(undefined8 *)(param_1 + 0x20),param_3);
      uVar6 = 1;
      goto LAB_144111633;
    }
  }
  uVar6 = 0;
LAB_144111633:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14411169c FUN_14411169c body=29 status=ok
// SIG undefined FUN_14411169c(void)

undefined8 FUN_14411169c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144111838 FUN_144111838 body=93 status=ok
// SIG undefined FUN_144111838(void)

void FUN_144111838(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9673a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144111896 FUN_144111896 body=93 status=ok
// SIG undefined FUN_144111896(void)

void FUN_144111896(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9673a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441118f4 FUN_1441118f4 body=126 status=ok
// SIG undefined FUN_1441118f4(void)

void FUN_1441118f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9673a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144111963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14411197c FUN_14411197c body=266 status=ok
// SIG undefined FUN_14411197c(void)

undefined8 FUN_14411197c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144111a80;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144111a80;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144111a80:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144111a27;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_146623ada(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144111a27;
    }
  }
  uVar6 = 0;
LAB_144111a27:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144111a88 FUN_144111a88 body=29 status=ok
// SIG undefined FUN_144111a88(void)

undefined8 FUN_144111a88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144111c24 FUN_144111c24 body=93 status=ok
// SIG undefined FUN_144111c24(void)

void FUN_144111c24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144111c82 FUN_144111c82 body=93 status=ok
// SIG undefined FUN_144111c82(void)

void FUN_144111c82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144111ce0 FUN_144111ce0 body=126 status=ok
// SIG undefined FUN_144111ce0(void)

void FUN_144111ce0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b967410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144111d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144111d68 FUN_144111d68 body=266 status=ok
// SIG undefined FUN_144111d68(void)

undefined8 FUN_144111d68(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144111e6c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144111e6c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144111e6c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144111e13;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14621e864(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144111e13;
    }
  }
  uVar6 = 0;
LAB_144111e13:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144111e74 FUN_144111e74 body=31 status=ok
// SIG undefined FUN_144111e74(void)

undefined8 FUN_144111e74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144111e98 FUN_144111e98 body=29 status=ok
// SIG undefined FUN_144111e98(void)

undefined8 FUN_144111e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112034 FUN_144112034 body=93 status=ok
// SIG undefined FUN_144112034(void)

void FUN_144112034(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9674f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144112092 FUN_144112092 body=93 status=ok
// SIG undefined FUN_144112092(void)

void FUN_144112092(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9674f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441120f0 FUN_1441120f0 body=126 status=ok
// SIG undefined FUN_1441120f0(void)

void FUN_1441120f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9674f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014411215f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144112178 FUN_144112178 body=266 status=ok
// SIG undefined FUN_144112178(void)

undefined8 FUN_144112178(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14411227c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14411227c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14411227c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144112223;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1461f9adc(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144112223;
    }
  }
  uVar6 = 0;
LAB_144112223:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144112284 FUN_144112284 body=29 status=ok
// SIG undefined FUN_144112284(void)

undefined8 FUN_144112284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112420 FUN_144112420 body=93 status=ok
// SIG undefined FUN_144112420(void)

void FUN_144112420(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b967560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14411247e FUN_14411247e body=93 status=ok
// SIG undefined FUN_14411247e(void)

void FUN_14411247e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b967560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441124dc FUN_1441124dc body=126 status=ok
// SIG undefined FUN_1441124dc(void)

void FUN_1441124dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b967560;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014411254b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14411259a FUN_14411259a body=322 status=ok
// SIG undefined FUN_14411259a(void)

undefined8 FUN_14411259a(longlong param_1)

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
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1441126d6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441126d6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144112645;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      plVar3[0x24] = 0;
      uVar7 = 1;
      if ((longlong)(int)plVar3[1] != 0) {
        lVar6 = 0;
        do {
          if ((*(int *)(*plVar3 + 8 + lVar6) != 0) && (*(longlong *)(*plVar3 + lVar6) != 0)) {
            FUN_1447f69b6();
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)(int)plVar3[1] * 0x10 != lVar6);
      }
      goto LAB_144112645;
    }
  }
  uVar7 = 0;
LAB_144112645:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1441126de FUN_1441126de body=29 status=ok
// SIG undefined FUN_1441126de(void)

undefined8 FUN_1441126de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411287a FUN_14411287a body=93 status=ok
// SIG undefined FUN_14411287a(void)

void FUN_14411287a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9675d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441128d8 FUN_1441128d8 body=93 status=ok
// SIG undefined FUN_1441128d8(void)

void FUN_1441128d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9675d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144112936 FUN_144112936 body=126 status=ok
// SIG undefined FUN_144112936(void)

void FUN_144112936(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9675d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441129a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441129f4 FUN_1441129f4 body=322 status=ok
// SIG undefined FUN_1441129f4(void)

undefined8 FUN_1441129f4(longlong param_1)

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
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_144112b30;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144112b30:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144112a9f;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      plVar3[0x24] = 0;
      uVar7 = 1;
      if ((longlong)(int)plVar3[1] != 0) {
        lVar6 = 0;
        do {
          if ((*(int *)(*plVar3 + 8 + lVar6) != 0) && (*(longlong *)(*plVar3 + lVar6) != 0)) {
            FUN_1447f69b6();
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)(int)plVar3[1] * 0x10 != lVar6);
      }
      goto LAB_144112a9f;
    }
  }
  uVar7 = 0;
LAB_144112a9f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 144112b72 FUN_144112b72 body=29 status=ok
// SIG undefined FUN_144112b72(void)

undefined8 FUN_144112b72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112bca FUN_144112bca body=29 status=ok
// SIG undefined FUN_144112bca(void)

undefined8 FUN_144112bca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112c22 FUN_144112c22 body=29 status=ok
// SIG undefined FUN_144112c22(void)

undefined8 FUN_144112c22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112c7a FUN_144112c7a body=29 status=ok
// SIG undefined FUN_144112c7a(void)

undefined8 FUN_144112c7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112cd2 FUN_144112cd2 body=29 status=ok
// SIG undefined FUN_144112cd2(void)

undefined8 FUN_144112cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112d2a FUN_144112d2a body=29 status=ok
// SIG undefined FUN_144112d2a(void)

undefined8 FUN_144112d2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112d82 FUN_144112d82 body=29 status=ok
// SIG undefined FUN_144112d82(void)

undefined8 FUN_144112d82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112da0 FUN_144112da0 body=31 status=ok
// SIG undefined FUN_144112da0(void)

undefined8 FUN_144112da0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112e66 FUN_144112e66 body=31 status=ok
// SIG undefined FUN_144112e66(void)

undefined8 FUN_144112e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144112f74 FUN_144112f74 body=29 status=ok
// SIG undefined FUN_144112f74(void)

undefined8 FUN_144112f74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144113110 FUN_144113110 body=93 status=ok
// SIG undefined FUN_144113110(void)

void FUN_144113110(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9678d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14411316e FUN_14411316e body=93 status=ok
// SIG undefined FUN_14411316e(void)

void FUN_14411316e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41e020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9678d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441131cc FUN_1441131cc body=126 status=ok
// SIG undefined FUN_1441131cc(void)

void FUN_1441131cc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41e020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9678d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014411323b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144113254 FUN_144113254 body=278 status=ok
// SIG undefined FUN_144113254(void)

undefined8 FUN_144113254(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144113364;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144113364;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144113364:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144113317;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14411336c(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_144113317;
    }
  }
  uVar6 = 0;
LAB_144113317:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14411336c FUN_14411336c body=120 status=ok
// SIG undefined FUN_14411336c(void)

void FUN_14411336c(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  FUN_1409c5062(local_60);
  cVar2 = FUN_14493b798(lVar1 + 0x150,local_60);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    FUN_1402798cc(lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441133e6 FUN_1441133e6 body=29 status=ok
// SIG undefined FUN_1441133e6(void)

undefined8 FUN_1441133e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144113582 FUN_144113582 body=93 status=ok
// SIG undefined FUN_144113582(void)

void FUN_144113582(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441135e0 FUN_1441135e0 body=93 status=ok
// SIG undefined FUN_1441135e0(void)

void FUN_1441135e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14411363e FUN_14411363e body=126 status=ok
// SIG undefined FUN_14411363e(void)

void FUN_14411363e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b967940;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441136ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441136c6 FUN_1441136c6 body=266 status=ok
// SIG undefined FUN_1441136c6(void)

undefined8 FUN_1441136c6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441137ca;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441137ca;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441137ca:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14411377e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1402798cc(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14411377e;
    }
  }
  uVar6 = 0;
LAB_14411377e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441137d2 FUN_1441137d2 body=31 status=ok
// SIG undefined FUN_1441137d2(void)

undefined8 FUN_1441137d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441137f2 FUN_1441137f2 body=29 status=ok
// SIG undefined FUN_1441137f2(void)

undefined8 FUN_1441137f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411398e FUN_14411398e body=93 status=ok
// SIG undefined FUN_14411398e(void)

void FUN_14411398e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441139ec FUN_1441139ec body=93 status=ok
// SIG undefined FUN_1441139ec(void)

void FUN_1441139ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b967b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144113a4a FUN_144113a4a body=126 status=ok
// SIG undefined FUN_144113a4a(void)

void FUN_144113a4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b967b10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144113ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144113ac8 FUN_144113ac8 body=53 status=ok
// SIG undefined FUN_144113ac8(void)

void FUN_144113ac8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = FUN_1410ef012(uVar1);
  if (lVar2 != 0) {
    uVar3 = FUN_1410ef012(uVar1);
    FUN_14027a506(uVar3,uVar1);
    return;
  }
  return;
}



// FUNCTION 144113afe FUN_144113afe body=293 status=ok
// SIG undefined FUN_144113afe(void)

undefined8 FUN_144113afe(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144113c1d;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_144113c1d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar9 = local_28;
  }
  else {
LAB_144113c1d:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144113ba9;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar7 = FUN_1410ef012(uVar3);
      uVar8 = 1;
      if (lVar7 != 0) {
        uVar6 = FUN_1410ef012(uVar3);
        FUN_14027a506(uVar6,uVar3);
      }
      goto LAB_144113ba9;
    }
  }
  uVar8 = 0;
LAB_144113ba9:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144113c24 FUN_144113c24 body=31 status=ok
// SIG undefined FUN_144113c24(void)

undefined8 FUN_144113c24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144113d32 FUN_144113d32 body=31 status=ok
// SIG undefined FUN_144113d32(void)

undefined8 FUN_144113d32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144113e40 FUN_144113e40 body=31 status=ok
// SIG undefined FUN_144113e40(void)

undefined8 FUN_144113e40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144113f16 FUN_144113f16 body=15 status=ok
// SIG undefined FUN_144113f16(void)

void FUN_144113f16(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000144113f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_2,*param_3,param_3,(code *)*param_1);
  return;
}



// FUNCTION 144113f3e FUN_144113f3e body=5 status=ok
// SIG undefined FUN_144113f3e(void)

longlong FUN_144113f3e(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144113f44 FUN_144113f44 body=12 status=ok
// SIG undefined FUN_144113f44(void)

void FUN_144113f44(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144113f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144113f50 FUN_144113f50 body=29 status=ok
// SIG undefined FUN_144113f50(void)

undefined8 FUN_144113f50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144113f6e FUN_144113f6e body=295 status=ok
// SIG undefined FUN_144113f6e(void)

void FUN_144113f6e(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = *param_3;
  lVar4 = *param_1;
  if (lVar2 == 0) {
    *(undefined4 *)(param_2 + 200) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(param_2 + 200) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)(param_2 + 0xcc) = iVar3;
  iVar3 = *(int *)(lVar4 + 0x5c);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x58);
    bVar8 = false;
    if (((int)uVar1 < 0) || (bVar8 = false, DAT_14c9647dc <= (int)uVar1)) goto LAB_144114025;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       (((int)plVar5[2] == iVar3 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      bVar8 = lVar4 == lVar2;
      goto LAB_144114025;
    }
  }
  bVar8 = false;
LAB_144114025:
  *(bool *)(param_2 + 0xd0) = bVar8;
  return;
}



// FUNCTION 1441140ae FUN_1441140ae body=5 status=ok
// SIG undefined FUN_1441140ae(void)

longlong FUN_1441140ae(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1441140b4 FUN_1441140b4 body=12 status=ok
// SIG undefined FUN_1441140b4(void)

void FUN_1441140b4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441140bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441140c0 FUN_1441140c0 body=29 status=ok
// SIG undefined FUN_1441140c0(void)

undefined8 FUN_1441140c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411412a FUN_14411412a body=12 status=ok
// SIG undefined FUN_14411412a(void)

void FUN_14411412a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144114136 FUN_144114136 body=29 status=ok
// SIG undefined FUN_144114136(void)

undefined8 FUN_144114136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114202 FUN_144114202 body=12 status=ok
// SIG undefined FUN_144114202(void)

void FUN_144114202(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014411420b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_2,param_3);
  return;
}



// FUNCTION 144114226 FUN_144114226 body=5 status=ok
// SIG undefined FUN_144114226(void)

longlong FUN_144114226(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14411422c FUN_14411422c body=12 status=ok
// SIG undefined FUN_14411422c(void)

void FUN_14411422c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144114238 FUN_144114238 body=29 status=ok
// SIG undefined FUN_144114238(void)

undefined8 FUN_144114238(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114256 FUN_144114256 body=11 status=ok
// SIG undefined FUN_144114256(void)

void FUN_144114256(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_2 + 200) = *param_3;
  return;
}



// FUNCTION 14411427a FUN_14411427a body=5 status=ok
// SIG undefined FUN_14411427a(void)

longlong FUN_14411427a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144114280 FUN_144114280 body=12 status=ok
// SIG undefined FUN_144114280(void)

void FUN_144114280(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14411428c FUN_14411428c body=29 status=ok
// SIG undefined FUN_14411428c(void)

undefined8 FUN_14411428c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411434a FUN_14411434a body=379 status=ok
// SIG undefined FUN_14411434a(void)

void FUN_14411434a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x28) != *(longlong *)(param_2 + 0x130)) {
    return;
  }
  lVar7 = *(longlong *)(param_2 + 0x38);
  if (lVar7 == 0) {
    uVar6 = FUN_14050c9fe();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x38) = lVar7;
  }
  plVar1 = (longlong *)(param_2 + 0x30);
  lVar8 = *(longlong *)(param_2 + 0x40);
  if (lVar8 == 0) {
    if (lVar7 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(param_2 + 0x40) = 0;
      return;
    }
    uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar8 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(param_2 + 0x40) = lVar8;
    if (lVar8 == 0) {
      return;
    }
    lVar7 = *(longlong *)(param_2 + 0x38);
  }
  if (lVar7 == 0) {
    uVar6 = FUN_14050c9fe();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x38) = lVar7;
    lVar8 = *(longlong *)(param_2 + 0x40);
    if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar8 = FUN_144aff482(uVar6,plVar1);
      }
      *(longlong *)(param_2 + 0x40) = lVar8;
    }
  }
  uVar6 = FUN_1406d3bdc();
  cVar5 = FUN_1448093f4(lVar8,uVar6);
  if (((lVar8 != 0) && (cVar5 != '\0')) && (*(char *)(lVar8 + 0x24b) == '\x01')) {
    iVar2 = *(int *)(lVar3 + 0x68);
    *(uint *)(lVar3 + 0x68) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x6c) < iVar2 + 1U) {
      FUN_14050b866((longlong *)(lVar3 + 0x60),iVar2);
    }
    *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 1441144c6 FUN_1441144c6 body=232 status=ok
// SIG undefined FUN_1441144c6(void)

undefined8 FUN_1441144c6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  
  if (*param_2 == 0) {
    return 0;
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  if ((int)plVar7[1] < 1) {
    return 0;
  }
  plVar6 = *(longlong **)(param_1 + 0xd0);
  if (plVar6 == (longlong *)0x0) {
    lVar5 = *(longlong *)(param_1 + 200);
    bVar9 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    plVar7 = (longlong *)param_2[1];
    bVar9 = plVar6 == (longlong *)0x0;
    lVar5 = *(longlong *)(param_1 + 200);
    if (plVar7 == (longlong *)0x0) {
      lVar8 = 0;
      goto LAB_144114572;
    }
  }
  iVar4 = (int)plVar7[1];
  lVar8 = 0;
  do {
    if (iVar4 == 0) goto LAB_144114572;
    LOCK();
    iVar3 = (int)plVar7[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(plVar7 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
  } while (!bVar10);
  lVar8 = *param_2;
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
LAB_144114572:
  if (bVar9) {
    lVar5 = 0;
  }
  else {
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
  }
  if (lVar5 != lVar8) {
    return 0;
  }
  return 1;
}



// FUNCTION 1441145ae FUN_1441145ae body=369 status=ok
// SIG undefined FUN_1441145ae(void)

void FUN_1441145ae(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_68 [36];
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = (longlong *)param_3[1];
  if (plVar8 == (longlong *)0x0) {
    plVar6 = (longlong *)*param_3;
    bVar10 = true;
    plVar9 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
LAB_14411461a:
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar6 = (longlong *)*param_3;
    lVar7 = param_3[1];
    bVar10 = plVar8 == (longlong *)0x0;
    plVar9 = plVar6;
    if (bVar10) {
      plVar9 = (longlong *)0x0;
    }
    if (lVar7 == 0) goto LAB_14411461a;
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_2 + 0xd0);
  *(longlong **)(param_2 + 200) = plVar6;
  *(longlong *)(param_2 + 0xd0) = lVar7;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (plVar9 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  else {
    if (bVar10) {
      *(undefined1 *)(param_2 + 0xd8) = 0;
      goto LAB_1441146fc;
    }
    plVar6 = (longlong *)*param_1;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) {
        uVar4 = 0;
        goto LAB_1441146c5;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar11);
    plVar6 = (longlong *)*plVar6;
    if (plVar6 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      (**(code **)(*plVar9 + 0x28))(plVar9,local_44);
      uVar4 = (**(code **)(*plVar6 + 8))(plVar6,local_44);
    }
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
LAB_1441146c5:
    *(undefined1 *)(param_2 + 0xd8) = uVar4;
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (!bVar10) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1441146fc:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144114738 FUN_144114738 body=5 status=ok
// SIG undefined FUN_144114738(void)

longlong FUN_144114738(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14411473e FUN_14411473e body=12 status=ok
// SIG undefined FUN_14411473e(void)

void FUN_14411473e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14411474a FUN_14411474a body=29 status=ok
// SIG undefined FUN_14411474a(void)

undefined8 FUN_14411474a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114768 FUN_144114768 body=290 status=ok
// SIG undefined FUN_144114768(void)

void FUN_144114768(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)param_3[1];
  bVar8 = true;
  if (plVar6 == (longlong *)0x0) {
LAB_1441147eb:
    cVar4 = '\0';
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_1441147eb;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar5 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar7);
    param_3 = (longlong *)*param_3;
    if (param_3 == (longlong *)0x0) {
      cVar4 = '\0';
    }
    else {
      plVar2 = (longlong *)*param_1;
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) {
          cVar4 = '\0';
          goto LAB_144114818;
        }
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      plVar2 = (longlong *)*plVar2;
      if (plVar2 == (longlong *)0x0) {
        cVar4 = '\0';
      }
      else {
        (**(code **)(*param_3 + 0x28))(param_3,local_34);
        cVar4 = (**(code **)(*plVar2 + 8))(plVar2,local_34);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
LAB_144114818:
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    bVar8 = false;
  }
  if (*(char *)(param_2 + 0xd8) != cVar4) {
    *(char *)(param_2 + 0xd8) = cVar4;
    FUN_140a1982e(param_2);
    FUN_1402798cc(param_2);
  }
  if (!bVar8) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441148a4 FUN_1441148a4 body=5 status=ok
// SIG undefined FUN_1441148a4(void)

longlong FUN_1441148a4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1441148aa FUN_1441148aa body=12 status=ok
// SIG undefined FUN_1441148aa(void)

void FUN_1441148aa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441148b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441148b6 FUN_1441148b6 body=29 status=ok
// SIG undefined FUN_1441148b6(void)

undefined8 FUN_1441148b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114910 FUN_144114910 body=12 status=ok
// SIG undefined FUN_144114910(void)

void FUN_144114910(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14411491c FUN_14411491c body=29 status=ok
// SIG undefined FUN_14411491c(void)

undefined8 FUN_14411491c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411494e FUN_14411494e body=295 status=ok
// SIG undefined FUN_14411494e(void)

void FUN_14411494e(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = *param_3;
  lVar4 = *param_1;
  if (lVar2 == 0) {
    *(undefined4 *)(param_2 + 200) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(param_2 + 200) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)(param_2 + 0xcc) = iVar3;
  iVar3 = *(int *)(lVar4 + 100);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x60);
    bVar8 = false;
    if (((int)uVar1 < 0) || (bVar8 = false, DAT_14c9647dc <= (int)uVar1)) goto LAB_144114a05;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       (((int)plVar5[2] == iVar3 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      bVar8 = lVar4 == lVar2;
      goto LAB_144114a05;
    }
  }
  bVar8 = false;
LAB_144114a05:
  *(bool *)(param_2 + 0xd0) = bVar8;
  return;
}



// FUNCTION 144114a94 FUN_144114a94 body=12 status=ok
// SIG undefined FUN_144114a94(void)

void FUN_144114a94(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144114aa0 FUN_144114aa0 body=29 status=ok
// SIG undefined FUN_144114aa0(void)

undefined8 FUN_144114aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114b3e FUN_144114b3e body=12 status=ok
// SIG undefined FUN_144114b3e(void)

void FUN_144114b3e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144114b4a FUN_144114b4a body=29 status=ok
// SIG undefined FUN_144114b4a(void)

undefined8 FUN_144114b4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114b68 FUN_144114b68 body=319 status=ok
// SIG undefined FUN_144114b68(void)

bool FUN_144114b68(longlong param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 200) == 0) {
    local_38 = (char *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(*(longlong *)(param_1 + 200) + 8);
    puVar5 = &DAT_14c9485f0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = puVar4;
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar5,1);
  }
  if (param_2 == 0) {
    local_30 = "Other";
    local_28 = 5;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    pcVar2 = (char *)(ulonglong)uVar1;
  }
  else {
    puVar4 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_30,puVar4,1);
    pcVar2 = local_30;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_38 == pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144114cd2 FUN_144114cd2 body=12 status=ok
// SIG undefined FUN_144114cd2(void)

void FUN_144114cd2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144114cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144114cde FUN_144114cde body=29 status=ok
// SIG undefined FUN_144114cde(void)

undefined8 FUN_144114cde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114d02 FUN_144114d02 body=359 status=ok
// SIG undefined FUN_144114d02(void)

undefined8 FUN_144114d02(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  
  if (((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
      && ((plVar7 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar7 != (longlong *)0x0 && (*(uint *)(plVar7 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar5 = *plVar7, lVar5 != 0))))
  goto LAB_144114d54;
  if (*(longlong *)(param_1 + 2) == 0) {
    return 0;
  }
  lVar5 = FUN_140007850();
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if ((lVar5 == 0) || (cVar2 == '\0')) {
    if (lVar5 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      return 0;
    }
    uVar3 = *(uint *)(lVar5 + 0xc);
LAB_144114dd3:
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar6 + 0x10) = uVar8;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar8;
      }
    }
    param_1[1] = uVar3;
  }
  else {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) goto LAB_144114dd3;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
    return 0;
  }
LAB_144114d54:
  uVar4 = FUN_14400a366();
  uVar4 = FUN_144718840(lVar5,uVar4);
  return uVar4;
}



// FUNCTION 144114e6a FUN_144114e6a body=31 status=ok
// SIG undefined FUN_144114e6a(void)

undefined8 FUN_144114e6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144114f2c FUN_144114f2c body=29 status=ok
// SIG undefined FUN_144114f2c(void)

undefined8 FUN_144114f2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441150c8 FUN_1441150c8 body=93 status=ok
// SIG undefined FUN_1441150c8(void)

void FUN_1441150c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9685a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144115126 FUN_144115126 body=93 status=ok
// SIG undefined FUN_144115126(void)

void FUN_144115126(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9685a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144115184 FUN_144115184 body=126 status=ok
// SIG undefined FUN_144115184(void)

void FUN_144115184(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9685a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441151f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14411520c FUN_14411520c body=266 status=ok
// SIG undefined FUN_14411520c(void)

undefined8 FUN_14411520c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144115310;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144115310;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144115310:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441152c4;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14410a716(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1441152c4;
    }
  }
  uVar6 = 0;
LAB_1441152c4:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144115318 FUN_144115318 body=29 status=ok
// SIG undefined FUN_144115318(void)

undefined8 FUN_144115318(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441154b4 FUN_1441154b4 body=93 status=ok
// SIG undefined FUN_1441154b4(void)

void FUN_1441154b4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b968610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144115512 FUN_144115512 body=93 status=ok
// SIG undefined FUN_144115512(void)

void FUN_144115512(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b968610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144115570 FUN_144115570 body=126 status=ok
// SIG undefined FUN_144115570(void)

void FUN_144115570(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b968610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441155df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441155fc FUN_1441155fc body=277 status=ok
// SIG undefined FUN_1441155fc(void)

bool FUN_1441155fc(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14411570b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14411570b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14411570b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441156be;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      bVar6 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
      if (bVar6 && param_2 == '\0') {
        FUN_14410a716(*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_1441156be;
    }
  }
  bVar6 = false;
LAB_1441156be:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144115712 FUN_144115712 body=29 status=ok
// SIG undefined FUN_144115712(void)

undefined8 FUN_144115712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441158ae FUN_1441158ae body=93 status=ok
// SIG undefined FUN_1441158ae(void)

void FUN_1441158ae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b968680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14411590c FUN_14411590c body=93 status=ok
// SIG undefined FUN_14411590c(void)

void FUN_14411590c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b968680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14411596a FUN_14411596a body=126 status=ok
// SIG undefined FUN_14411596a(void)

void FUN_14411596a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b968680;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441159d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441159f2 FUN_1441159f2 body=266 status=ok
// SIG undefined FUN_1441159f2(void)

undefined8 FUN_1441159f2(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144115af6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144115af6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144115af6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144115aaa;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14410a716(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144115aaa;
    }
  }
  uVar6 = 0;
LAB_144115aaa:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144115afe FUN_144115afe body=29 status=ok
// SIG undefined FUN_144115afe(void)

undefined8 FUN_144115afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144115c9a FUN_144115c9a body=93 status=ok
// SIG undefined FUN_144115c9a(void)

void FUN_144115c9a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9686f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144115cf8 FUN_144115cf8 body=93 status=ok
// SIG undefined FUN_144115cf8(void)

void FUN_144115cf8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9686f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144115d56 FUN_144115d56 body=126 status=ok
// SIG undefined FUN_144115d56(void)

void FUN_144115d56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9686f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144115dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144115dde FUN_144115dde body=266 status=ok
// SIG undefined FUN_144115dde(void)

undefined8 FUN_144115dde(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144115ee2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144115ee2;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144115ee2:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144115e96;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14410a716(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144115e96;
    }
  }
  uVar6 = 0;
LAB_144115e96:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144115eea FUN_144115eea body=29 status=ok
// SIG undefined FUN_144115eea(void)

undefined8 FUN_144115eea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144116086 FUN_144116086 body=93 status=ok
// SIG undefined FUN_144116086(void)

void FUN_144116086(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b968760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441160e4 FUN_1441160e4 body=93 status=ok
// SIG undefined FUN_1441160e4(void)

void FUN_1441160e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b968760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144116142 FUN_144116142 body=126 status=ok
// SIG undefined FUN_144116142(void)

void FUN_144116142(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b968760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441161b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441161ca FUN_1441161ca body=266 status=ok
// SIG undefined FUN_1441161ca(void)

undefined8 FUN_1441161ca(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441162ce;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441162ce;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441162ce:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144116282;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14410a716(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144116282;
    }
  }
  uVar6 = 0;
LAB_144116282:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441162d6 FUN_1441162d6 body=29 status=ok
// SIG undefined FUN_1441162d6(void)

undefined8 FUN_1441162d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144116472 FUN_144116472 body=93 status=ok
// SIG undefined FUN_144116472(void)

void FUN_144116472(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9687d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441164d0 FUN_1441164d0 body=93 status=ok
// SIG undefined FUN_1441164d0(void)

void FUN_1441164d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9687d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14411652e FUN_14411652e body=126 status=ok
// SIG undefined FUN_14411652e(void)

void FUN_14411652e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc260;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9687d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014411659d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441165ac FUN_1441165ac body=59 status=ok
// SIG undefined FUN_1441165ac(void)

void FUN_1441165ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441166f8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441165e8 FUN_1441165e8 body=271 status=ok
// SIG undefined FUN_1441165e8(void)

undefined8 FUN_1441165e8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441166f1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441166f1;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1441166f1:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441166a6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441166f8(&local_28);
      uVar6 = 1;
      goto LAB_1441166a6;
    }
  }
  uVar6 = 0;
LAB_1441166a6:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441166f8 FUN_1441166f8 body=272 status=ok
// SIG undefined FUN_1441166f8(void)

void FUN_1441166f8(longlong *param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14411681a FUN_14411681a body=29 status=ok
// SIG undefined FUN_14411681a(void)

undefined8 FUN_14411681a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14411684c FUN_14411684c body=93 status=ok
// SIG undefined FUN_14411684c(void)

void FUN_14411684c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c24a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b968840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441168aa FUN_1441168aa body=93 status=ok
// SIG undefined FUN_1441168aa(void)

void FUN_1441168aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c24a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b968840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144116908 FUN_144116908 body=126 status=ok
// SIG undefined FUN_144116908(void)

void FUN_144116908(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4c24a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b968840;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144116977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441169d6 FUN_1441169d6 body=90 status=ok
// SIG undefined FUN_1441169d6(void)

undefined8 FUN_1441169d6(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144116a1e;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_144116a1e;
    }
  }
  uVar2 = 0;
LAB_144116a1e:
  FUN_144109bee(uVar2,0);
  return 1;
}



// FUNCTION 144116a30 FUN_144116a30 body=29 status=ok
// SIG undefined FUN_144116a30(void)

void FUN_144116a30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1418c3a38();
  FUN_1448093f4(uVar1,uVar2);
  return;
}



// FUNCTION 144116a4e FUN_144116a4e body=29 status=ok
// SIG undefined FUN_144116a4e(void)

undefined8 FUN_144116a4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144116bea FUN_144116bea body=93 status=ok
// SIG undefined FUN_144116bea(void)

void FUN_144116bea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9688b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144116c48 FUN_144116c48 body=93 status=ok
// SIG undefined FUN_144116c48(void)

void FUN_144116c48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9688b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144116ca6 FUN_144116ca6 body=126 status=ok
// SIG undefined FUN_144116ca6(void)

void FUN_144116ca6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9688b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144116d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144116d24 FUN_144116d24 body=62 status=ok
// SIG undefined FUN_144116d24(void)

void FUN_144116d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144116e7c(&local_10,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144116d64 FUN_144116d64 body=278 status=ok
// SIG undefined FUN_144116d64(void)

undefined8 FUN_144116d64(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_144116e74;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144116e74;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144116e74:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144116e28;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144116e7c(&local_30,param_3);
      uVar6 = 1;
      goto LAB_144116e28;
    }
  }
  uVar6 = 0;
LAB_144116e28:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144116e7c FUN_144116e7c body=329 status=ok
// SIG undefined FUN_144116e7c(void)

void FUN_144116e7c(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined4 local_1c;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_1c = *param_2;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = FUN_1402d8968(lVar2,&local_1c);
    if (iVar1 == 0xb) {
      lVar2 = FUN_140d1732e(lVar2,&local_1c);
      if (lVar2 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_40 = &local_18;
          local_18 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1459f2e4c;
          local_48 = &LAB_148c39de3;
          local_50 = &LAB_1457a9eb2;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144116fd6 FUN_144116fd6 body=302 status=ok
// SIG undefined FUN_144116fd6(void)

void FUN_144116fd6(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 local_70;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uStack_80 = *param_1;
    local_78 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 2);
    pvVar3 = (void *)param_1[1];
    local_70 = CONCAT44(local_70._4_4_,uVar1);
    local_88 = lVar2;
    if ((longlong)(int)uVar1 == 0) {
      local_70 = (ulonglong)uVar1;
    }
    else {
      FUN_1465417ea(&local_78,uVar1,0);
      memcpy(local_78,pvVar3,(longlong)(int)uVar1 << 3);
    }
    local_68[0] = (code *)0x0;
    local_58 = (undefined8 *)FUN_14001cc68(0x28,8);
    pvVar3 = local_78;
    *local_58 = &PTR_FUN_14b968940;
    local_78 = (void *)0x0;
    uVar4 = (undefined4)local_70;
    uVar5 = local_70._4_4_;
    local_70 = 0;
    *(undefined4 *)(local_58 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)local_58 + 0xc) = local_88._4_4_;
    *(undefined4 *)(local_58 + 2) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)local_58 + 0x14) = uStack_80._4_4_;
    local_58[3] = pvVar3;
    *(undefined4 *)(local_58 + 4) = uVar4;
    *(undefined4 *)((longlong)local_58 + 0x24) = uVar5;
    if (local_58 + 1 != (undefined8 *)0x0) {
      local_68[0] = FUN_1441171c6;
    }
    FUN_1410097ce(lVar2,local_68);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144117106 FUN_144117106 body=116 status=ok
// SIG undefined FUN_144117106(void)

longlong FUN_144117106(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b968920;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1465417ea((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 << 3);
  }
  return param_2 + 0x18;
}



// FUNCTION 144117180 FUN_144117180 body=12 status=ok
// SIG undefined FUN_144117180(void)

void FUN_144117180(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144117189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14411718c FUN_14411718c body=57 status=ok
// SIG undefined FUN_14411718c(void)

undefined8 * FUN_14411718c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b968920;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441171c6 FUN_1441171c6 body=495 status=ok
// SIG undefined FUN_1441171c6(void)

void FUN_1441171c6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((longlong)*(int *)(param_2 + 0x30) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    plVar2 = plVar11 + *(int *)(param_2 + 0x30);
    do {
      lVar5 = *plVar11;
      if (lVar5 != 0) {
        lVar9 = *(longlong *)(lVar5 + 0x40);
        if (lVar9 == 0) {
          uVar8 = FUN_1406ef318();
          lVar9 = FUN_14477b664(uVar8);
          *(longlong *)(lVar5 + 0x40) = lVar9;
        }
        plVar1 = (longlong *)(lVar5 + 0x38);
        lVar10 = *(longlong *)(lVar5 + 0x48);
        if (lVar10 == 0) {
          if ((lVar9 != 0) && (*plVar1 != 0)) {
            plVar6 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
              *(undefined8 *)(lVar5 + 0x48) = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar10 = FUN_144aff482(uVar8,plVar1);
              *(longlong *)(lVar5 + 0x48) = lVar10;
              if (lVar10 != 0) {
                lVar9 = *(longlong *)(lVar5 + 0x40);
                goto LAB_144117232;
              }
            }
          }
        }
        else {
LAB_144117232:
          if (lVar9 == 0) {
            uVar8 = FUN_1406ef318();
            lVar9 = FUN_14477b664(uVar8);
            *(longlong *)(lVar5 + 0x40) = lVar9;
            lVar10 = *(longlong *)(lVar5 + 0x48);
            if (lVar10 == 0) {
              if (lVar9 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = 0;
                if (*plVar1 != 0) {
                  plVar6 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar6 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
                    lVar10 = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar6 + 0x110))(plVar6);
                    lVar10 = FUN_144aff482(uVar8,plVar1);
                  }
                  *(longlong *)(lVar5 + 0x48) = lVar10;
                }
              }
            }
          }
          if ((longlong)(int)param_1[3] != 0) {
            lVar9 = 0;
            do {
              if (*(longlong *)(param_1[2] + lVar9) == lVar10) {
                uVar3 = *(undefined4 *)(param_2 + 0xf8);
                plVar1 = (longlong *)param_1[1];
                uVar8 = *(undefined8 *)(*param_1 + 0xb8);
                iVar4 = (int)plVar1[1];
                lVar9 = (longlong)iVar4;
                *(uint *)(plVar1 + 1) = iVar4 + 1U;
                if (*(uint *)((longlong)plVar1 + 0xc) < iVar4 + 1U) {
                  FUN_1441174a0(plVar1,iVar4);
                }
                lVar10 = *plVar1;
                *(longlong *)(lVar10 + lVar9 * 0x18) = lVar5;
                *(undefined4 *)(lVar10 + 8 + lVar9 * 0x18) = uVar3;
                *(undefined8 *)(lVar10 + 0xc + lVar9 * 0x18) = uVar8;
                break;
              }
              lVar9 = lVar9 + 8;
            } while ((longlong)(int)param_1[3] * 8 != lVar9);
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar2);
  }
  return;
}



// FUNCTION 1441173b6 FUN_1441173b6 body=140 status=ok
// SIG undefined FUN_1441173b6(void)

undefined8 * FUN_1441173b6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14b968940;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
  *(undefined4 *)(puVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar5 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  }
  else {
    FUN_1465417ea(puVar5 + 3,iVar1,0);
    memcpy((void *)puVar5[3],_Src,(longlong)iVar1 << 3);
  }
  return puVar5 + 1;
}



// FUNCTION 144117448 FUN_144117448 body=29 status=ok
// SIG undefined FUN_144117448(void)

void FUN_144117448(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144117466 FUN_144117466 body=57 status=ok
// SIG undefined FUN_144117466(void)

undefined8 * FUN_144117466(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b968940;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441174a0 FUN_1441174a0 body=363 status=ok
// SIG undefined FUN_1441174a0(void)

void FUN_1441174a0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144117536;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144117536:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 144117612 FUN_144117612 body=101 status=ok
// SIG undefined FUN_144117612(void)

void FUN_144117612(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == lVar2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146625738(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 8) = lVar2;
  return;
}



// FUNCTION 144117678 FUN_144117678 body=50 status=ok
// SIG undefined FUN_144117678(void)

void FUN_144117678(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1408d7900(lVar1 + 0x30);
    if (lVar2 == *(longlong *)param_1[1]) {
      *(longlong *)*param_1 = lVar1;
    }
  }
  return;
}



// FUNCTION 1441176aa FUN_1441176aa body=64 status=ok
// SIG undefined FUN_1441176aa(void)

undefined8 * FUN_1441176aa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9689d0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441176ee FUN_1441176ee body=81 status=ok
// SIG undefined FUN_1441176ee(void)

undefined8 FUN_1441176ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 144117744 FUN_144117744 body=89 status=ok
// SIG undefined FUN_144117744(void)

bool FUN_144117744(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14411778f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14411778f:
  return lVar6 == param_2;
}



// FUNCTION 1441177ba FUN_1441177ba body=118 status=ok
// SIG undefined FUN_1441177ba(void)

void FUN_1441177ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8f90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9689d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144117830 FUN_144117830 body=118 status=ok
// SIG undefined FUN_144117830(void)

void FUN_144117830(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8f90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9689d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441178a6 FUN_1441178a6 body=156 status=ok
// SIG undefined FUN_1441178a6(void)

void FUN_1441178a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f8f90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9689d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144117932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144117942 FUN_144117942 body=66 status=ok
// SIG undefined FUN_144117942(void)

void FUN_144117942(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441179e4(param_1 + 0x28,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144117986 FUN_144117986 body=93 status=ok
// SIG undefined FUN_144117986(void)

undefined8 FUN_144117986(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441179e4(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441179e4 FUN_1441179e4 body=403 status=ok
// SIG undefined FUN_1441179e4(void)

void FUN_1441179e4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(*param_1 + 0x4c);
  if (((((iVar1 != 0) && (uVar2 = *(uint *)(*param_1 + 0x48), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)))) &&
     (lVar3 = *param_2, (*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar5;
    }
    else {
      lVar6 = 0;
    }
    lVar4 = *(longlong *)(lVar6 + 0x398);
    if (lVar4 != 0) {
      if (DAT_14cbae3d8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464f5fc4;
        local_48 = &LAB_148c3dd26;
        local_50 = &LAB_1459673ba;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar4 = *(longlong *)(lVar6 + 0x398);
        if (lVar4 == 0) goto LAB_144117a47;
      }
      if (((DAT_14cbae3d8 != 0) && (lVar6 = *(longlong *)(lVar4 + 0x10), lVar6 != 0)) &&
         ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar6 + 0x38) &&
          ((*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
            DAT_14cbae3d8 + 0x30 && (lVar4 == lVar3)))))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_144117a47:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144117c12 FUN_144117c12 body=12 status=ok
// SIG undefined FUN_144117c12(void)

void FUN_144117c12(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144117c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144117c1e FUN_144117c1e body=29 status=ok
// SIG undefined FUN_144117c1e(void)

undefined8 FUN_144117c1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144117c3b FUN_144117c3b body=3362 status=ok
// SIG undefined FUN_144117c3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144117c3b(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8 [2];
  longlong *local_a8;
  char **local_a0;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = (longlong *)0x149fca2ba;
  local_a0._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6c90 = (ulonglong)uVar2;
  _DAT_14cbc6c98 = 0x47efffffe0000000;
  _DAT_14cbc6ca0 = 0x47efffffe0000000;
  _DAT_14cbc6ca8 = 0x47efffffe0000000;
  _DAT_14cbc6cb0 = 0x47efffffe0000000;
  _DAT_14cbc6cb8 = 0x47efffffe0000000;
  _DAT_14cbc6cc0 = 0x47efffffe0000000;
  _DAT_14cbc6cc8 = 0x47efffffe0000000;
  _DAT_14cbc6cd0 = 0x47efffffe0000000;
  local_a8 = (longlong *)&DAT_14a19662d;
  local_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (longlong *)&DAT_14b4871e8;
  local_a0._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6cd8 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14ac8da14;
  local_a0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6ce0 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b4871ec;
  local_a0 = (char **)CONCAT35(local_a0._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6ce8 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbc6cf0);
  if (cVar1 == '\0') {
    _DAT_14cbc6cf0 = 0;
    uRam000000014cbc6cf8 = 0;
  }
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbc6d04 = 0;
  FUN_14052b5e0(&DAT_14cbc6d00,"PlayerAwareness",0);
  _DAT_14cbc6d10 = "PlayerAwareness";
  local_a8 = (longlong *)0x14b604105;
  local_a0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d18 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b60410b;
  local_a0._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d20 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b507318;
  local_a0._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d28 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b604115;
  local_a0._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d30 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14a1774ea;
  local_a0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d38 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b60411c;
  local_a0._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d40 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b604127;
  local_a0._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d48 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b4102b8;
  local_a0._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d50 = (ulonglong)uVar2;
  local_a8 = (longlong *)&DAT_14b604134;
  local_a0._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d58 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b604139;
  local_a0._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d60 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b604141;
  local_a0._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d68 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b60414a;
  local_a0._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d70 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b60415f;
  local_a0._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d78 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b604174;
  local_a0._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d80 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b60417f;
  local_a0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d88 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b60418e;
  local_a0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d90 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b60419d;
  local_a0._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6d98 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b6041b2;
  local_a0._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6da0 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b6041c8;
  local_a0._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6da8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc6db0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14410252c);
  FUN_140056680(&DAT_14cbc6dc0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14410253d);
  FUN_140056680(&DAT_14cbc6dd0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14410254e);
  FUN_140056680(&DAT_14cbc6de0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14410255f);
  FUN_1446f470e(&DAT_14cbc6df0,L"LIMB_GORED",1);
  _DAT_14cbc6df8 = 0x4072c00000000000;
  _DAT_14cbc6e00 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc6e08,L"body",1);
  FUN_1446f470e(&DAT_14cbc6e10,L"title_card",1);
  local_a8 = (longlong *)0x14b96696c;
  local_a0._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6e18 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b966a40;
  local_a0._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc6e20 = (ulonglong)uVar2;
  DAT_14cbc6e28 = 0;
  atexit((_func_5014 *)&LAB_144102570);
  DAT_14cbc7058 = 0;
  atexit((_func_5014 *)&LAB_144102588);
  DAT_14cbc82a0 = 0;
  uRam000000014cbc82a8 = 0;
  _DAT_14cbc82b0 = 0;
  uRam000000014cbc82b8 = 0;
  _DAT_14cbc82c0 = 0;
  uRam000000014cbc82c8 = 0;
  local_a8 = (longlong *)0x14b63ee18;
  local_a0._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc8e58 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b7dd4a0;
  local_a0._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc82d8 = (ulonglong)uVar2;
  local_a8 = (longlong *)0x14b78ba20;
  local_a0._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc82e0 = (ulonglong)uVar2;
  local_a8 = (longlong *)&DAT_14b6040ec;
  local_a0._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc82e8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc82f0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144102d64);
  FUN_1446f470e(&DAT_14cbc8300,L"UNSET",1);
  local_a8 = (longlong *)&DAT_14b3f27c8;
  local_a0._0_5_ = 4;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (longlong *)0x14b6041d4;
  local_a0._0_5_ = 6;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (longlong *)0x14b6041db;
  local_a0._0_5_ = 0xd;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = (longlong *)0x14b6041e9;
  local_a0._0_5_ = 6;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbc8308,L"Party",1);
  FUN_1446f470e(&DAT_14cbc8310,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbc8318,L"dev_perk");
  _DAT_14cbc834c = 0;
  FUN_14052b5e0(&DAT_14cbc8348,"trait_mission",0);
  _DAT_14cbc8358 = "trait_mission";
  _DAT_14cbc8364 = 0;
  FUN_14052b5e0(&DAT_14cbc8360,"weekly_trait_mission",0);
  _DAT_14cbc8370 = "weekly_trait_mission";
  _DAT_14cbc837c = 0;
  FUN_14052b5e0(&DAT_14cbc8378,"Missions",0);
  _DAT_14cbc8388 = 0;
  FUN_14052b5e0(&DAT_14cbc8384,"Timer",0);
  _DAT_14cbc8394 = 0;
  FUN_14052b5e0(&DAT_14cbc8390,"Percent",0);
  DAT_14cbc83a0 = 0;
  atexit((_func_5014 *)&LAB_1441031fb);
  _DAT_14cbc8a18 = &LAB_1441053df;
  _DAT_14cbc8a20 = 0x4625a000;
  DAT_14cbc8a24 = 1;
  DAT_14cbc8a10 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc8a10;
  atexit((_func_5014 *)&LAB_1441053e4);
  _DAT_14cbc8a34 = 0;
  FUN_14052b5e0(&DAT_14cbc8a30,"State",0);
  _DAT_14cbc8a40 = "State";
  local_a8 = (longlong *)0x14b968ba8;
  local_a0 = (char **)CONCAT35(local_a0._5_3_,0xc);
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc8a88 = (ulonglong)uVar2;
  _DAT_14cbc8a94 = 0;
  FUN_14052b5e0(&DAT_14cbc8a90,"State",0);
  DAT_14cbc8b10 = 0;
  _DAT_14cbc8b18 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144114cfc;
  local_a8 = (longlong *)&DAT_14011fc1e;
  FUN_14618afbe(&local_a8);
  atexit((_func_5014 *)&LAB_144108790);
  _DAT_14cbc8ba8 = &LAB_14410879b;
  _DAT_14cbc8bb0 = 0x477c9700;
  DAT_14cbc8bb4 = 1;
  DAT_14cbc8ba0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc8ba0;
  atexit((_func_5014 *)&LAB_1441087a0);
  FUN_140056680(local_b8,L"DLCDef_Banjo");
  local_a0 = (char **)&local_a8;
  local_a8 = local_b8;
  FUN_141469cae(&DAT_14cbc8bc0,&local_a8);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_1441087d4);
  local_a8 = (longlong *)0x14b966d3a;
  local_a0._0_5_ = 0x21;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc8be8 = (ulonglong)uVar2;
  DAT_14cbc8bf0 = 0;
  atexit((_func_5014 *)&LAB_14410c0c6);
  _DAT_14cbc8c38 = &LAB_14410d128;
  _DAT_14cbc8c40 = 0x439d8000;
  DAT_14cbc8c44 = 1;
  DAT_14cbc8c30 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc8c30;
  atexit((_func_5014 *)&LAB_14410d12d);
  _DAT_14cbc8c58 = &LAB_14410d753;
  _DAT_14cbc8c60 = 0x4625a000;
  DAT_14cbc8c64 = 1;
  DAT_14cbc8c50 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc8c50;
  atexit((_func_5014 *)&LAB_14410d758);
  DAT_14cbc8cd0 = 0;
  _DAT_14cbc8cd8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_14411760c;
  local_a8 = (longlong *)&DAT_14011fc1e;
  FUN_14618b6ba(&local_a8);
  atexit((_func_5014 *)&LAB_14410d7b5);
  _DAT_14cbc8d68 = &LAB_14410d7ba;
  _DAT_14cbc8d70 = 0x4625a000;
  DAT_14cbc8d74 = 1;
  DAT_14cbc8d60 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc8d60;
  atexit((_func_5014 *)&LAB_14410d7bf);
  local_a8 = (longlong *)0x14b6bfae0;
  local_a0 = (char **)CONCAT35(local_a0._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8e60 = (ulonglong)uVar2;
  _DAT_14cbc8d88 = &LAB_14410dc3e;
  _DAT_14cbc8d90 = 0x4625a000;
  DAT_14cbc8d94 = 1;
  DAT_14cbc8d80 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc8d80;
  atexit((_func_5014 *)&LAB_14410dc43);
  local_a8._0_4_ = 1;
  local_c8 = 0;
  FUN_14078dbce(&DAT_14cbc8da0,L"oak.player.waypoint_path_enabled",&local_a8,&DAT_149dfb77a);
  atexit(FUN_14410dc7c);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,0x41f00000);
  local_c8 = 0;
  FUN_140a6b41e(&DAT_14cbc8db8,L"oak.player.waypoint_z_offset",&local_a8,&DAT_149dfb77a);
  atexit(FUN_14410dcc1);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


