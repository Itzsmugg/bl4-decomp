// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1440de292 FUN_1440de292 body=5288 status=ok
// SIG undefined FUN_1440de292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440de292(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  char **local_b8;
  undefined8 local_b0;
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
  _DAT_14cbc3ef0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbc3ef8);
  if (cVar1 == '\0') {
    _DAT_14cbc3ef8 = 0;
    uRam000000014cbc3f00 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbc3f08 = 0x47efffffe0000000;
  _DAT_14cbc3f10 = 0x47efffffe0000000;
  _DAT_14cbc3f18 = 0x47efffffe0000000;
  _DAT_14cbc3f20 = 0x47efffffe0000000;
  _DAT_14cbc3f28 = 0x47efffffe0000000;
  _DAT_14cbc3f30 = 0x47efffffe0000000;
  _DAT_14cbc3f38 = 0x47efffffe0000000;
  _DAT_14cbc3f40 = 0x47efffffe0000000;
  local_a8 = "Cash";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3f48 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc3f50,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440d353c);
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3f64 = 0;
  FUN_14052b5e0(&DAT_14cbc3f60,"PlayerAwareness",0);
  _DAT_14cbc3f70 = "PlayerAwareness";
  local_a8 = "basic";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3f78 = (ulonglong)uVar2;
  local_a8 = "challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3f80 = (ulonglong)uVar2;
  local_a8 = "online";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3f88 = (ulonglong)uVar2;
  local_a8 = "social";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3f90 = (ulonglong)uVar2;
  local_a8 = "alert";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3f98 = (ulonglong)uVar2;
  local_a8 = "photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fa0 = (ulonglong)uVar2;
  local_a8 = "generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fa8 = (ulonglong)uVar2;
  local_a8 = "mission";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fb0 = (ulonglong)uVar2;
  local_a8 = "mail";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fb8 = (ulonglong)uVar2;
  local_a8 = "respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fc0 = (ulonglong)uVar2;
  local_a8 = "tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fc8 = (ulonglong)uVar2;
  local_a8 = "special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fd0 = (ulonglong)uVar2;
  local_a8 = "generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fd8 = (ulonglong)uVar2;
  local_a8 = "vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fe0 = (ulonglong)uVar2;
  local_a8 = "ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3fe8 = (ulonglong)uVar2;
  local_a8 = "INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3ff0 = (ulonglong)uVar2;
  local_a8 = "NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc3ff8 = (ulonglong)uVar2;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc4000 = (ulonglong)uVar2;
  local_a8 = "collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc4008 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc4010,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbc4018,L"Party",1);
  FUN_1446f470e(&DAT_14cbc4020,&DAT_149e063b2,1);
  local_a8 = "Use";
  local_a0 = 3;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc4028 = (ulonglong)uVar2;
  local_a8 = "Sight";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc4030 = (ulonglong)uVar2;
  local_a8 = "TargetLock";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc4038 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc4040,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440d38e7);
  FUN_140056680(&DAT_14cbc4050,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440d38f8);
  FUN_140056680(&DAT_14cbc4060,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440d3909);
  FUN_140056680(&DAT_14cbc4070,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1440d391a);
  FUN_1446f470e(&DAT_14cbc4080,L"LIMB_GORED",1);
  _DAT_14cbc4088 = 0x4072c00000000000;
  _DAT_14cbc4090 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc4098,L"body",1);
  FUN_1446f470e(&DAT_14cbc40a0,L"title_card",1);
  FUN_140056680(&DAT_14cbc40a8,&DAT_14b4aa8be);
  atexit((_func_5014 *)&LAB_1440d392b);
  DAT_14cbc40b8 = 0;
  atexit((_func_5014 *)&LAB_1440d393c);
  local_a8 = "Oak2_CharacterXP_Progression";
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc44f8 = (ulonglong)uVar2;
  local_a8 = "BaseEnemyExperienceFormula";
  local_a0 = 0x1a;
  local_9c = 0;
  DAT_14cbc5658 = _DAT_14cbc44f8;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc4500 = (ulonglong)uVar2;
  DAT_14cbc4508 = 0;
  atexit((_func_5014 *)&LAB_1440d3e5e);
  local_a8 = "BioArmored";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc46b0 = (ulonglong)uVar2;
  local_a8 = "IsArmorActive";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc46b8 = (ulonglong)uVar2;
  local_a8 = "Radius";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc46c0 = (ulonglong)uVar2;
  local_a8 = "active";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc46c8 = (ulonglong)uVar2;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf20fc;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc46d0,"anchor_to_vehicle_com",FUN_148cf2102,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d4f03);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf212c;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4750,"boundary_postprocess",FUN_148cf2132,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d4f0f);
  local_a8 = "cameramode_boundary";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc47d0 = (ulonglong)uVar2;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf22e6;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc47e0,"exit_ladder",FUN_148cf22ec,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d5080);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf232c;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4860,"ffyl_pitch",FUN_148cf2332,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d508d);
  DAT_14cbc48e0._4_4_ = 0;
  DAT_14cbc48e8 = 0;
  FUN_14052b5e0(&DAT_14cbc48e0,&DAT_14b961f9c,0);
  _DAT_14cbc48f0 = &DAT_14b961f9c;
  DAT_14cbc48f8._4_4_ = 0;
  DAT_14cbc4900 = 0;
  FUN_14052b5e0(&DAT_14cbc48f8,&DAT_14b3f2748,0);
  _DAT_14cbc4908 = &DAT_14b3f2748;
  DAT_14cbc4910._4_4_ = 0;
  DAT_14cbc4918 = 0;
  FUN_14052b5e0(&DAT_14cbc4910,"cycle_time",0);
  _DAT_14cbc4920 = "cycle_time";
  DAT_14cbc4928._4_4_ = 0;
  DAT_14cbc4930 = 0;
  FUN_14052b5e0(&DAT_14cbc4928,"cycle_curve",0);
  _DAT_14cbc4938 = "cycle_curve";
  DAT_14cbc4940._4_4_ = 0;
  DAT_14cbc4948 = 0;
  FUN_14052b5e0(&DAT_14cbc4940,"easing",0);
  _DAT_14cbc4950 = "easing";
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf2620;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4960,"ffyl_post_process",FUN_148cf2626,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d5099);
  local_a8 = "cameramode_ffyl_a";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc49e0 = (ulonglong)uVar2;
  local_a8 = "cameramode_ffyl_b";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc49e8 = (ulonglong)uVar2;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf2646;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc49f0,"grapple_focus",FUN_148cf264c,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d510b);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf26c6;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4a70,"ladder",FUN_148cf26cc,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d5117);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf2c68;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4af0,"limit_pitch_by_slope",FUN_148cf2c6e,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d5123);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf2ca2;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4b70,"lock_on",FUN_148cf2ca8,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d512f);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf321c;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4bf0,"puppet_offset",FUN_148cf3222,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d513b);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf35a6;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4c70,"snap_to_target",FUN_148cf35ac,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d527e);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf35ec;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4cf0,"structured_interaction",FUN_148cf35f2,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d528a);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf4c58;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4d70,"boost_fov",FUN_148cf4c5e,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d52db);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf4ee2;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4df0,"vehicle_impacts",FUN_148cf4ee8,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d52e7);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf4f12;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4e70,"vehicle_look",FUN_148cf4f18,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d52f3);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf5376;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4ef0,"vehicle_offset",FUN_148cf537c,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d52ff);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148cf555e;
  local_a8 = &DAT_14880dc9c;
  local_b0 = 0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cbc4f70,"vehicle_weapon_clearance",FUN_148cf5564,0xffffffff);
  atexit((_func_5014 *)&LAB_1440d530b);
  local_a8 = (char *)0x0;
  local_98 = 0;
  FUN_1459c4618(&DAT_14cbc4ff0,"blueprint",FUN_148cf558e,&local_a8);
  atexit((_func_5014 *)&LAB_1440d538f);
  local_a8 = "blueprint_class";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5070 = (ulonglong)uVar2;
  local_a8 = (char *)0x0;
  local_98 = 0;
  FUN_1459c4618(&DAT_14cbc5080,"collision_offset_trace",FUN_148cf5b7e,&local_a8);
  atexit((_func_5014 *)&LAB_1440d539b);
  local_a8 = "CollisionOffsetTrace";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc5100 = (ulonglong)uVar2;
  local_a8 = (char *)0x0;
  local_98 = 0;
  FUN_1459c4618(&DAT_14cbc5110,"fov_only",FUN_148cf5bc4,&local_a8);
  atexit((_func_5014 *)&LAB_1440d53a7);
  local_a8 = (char *)0x0;
  local_98 = 0;
  FUN_1459c4618(&DAT_14cbc5190,"puppet",FUN_148cf5c02,&local_a8);
  atexit((_func_5014 *)&LAB_1440d5461);
  local_a8 = (char *)0x0;
  local_98 = 0;
  FUN_1459c4618(&DAT_14cbc5210,"vehicle_enter",FUN_148cf5c58,&local_a8);
  atexit((_func_5014 *)&LAB_1440d546d);
  local_a8 = (char *)0x0;
  local_98 = 0;
  FUN_1459c4618(&DAT_14cbc5290,"vehicle_exit",FUN_148cf5cb2,&local_a8);
  atexit((_func_5014 *)&LAB_1440d5479);
  local_a8 = (char *)0x0;
  local_98 = 0;
  FUN_1459c4618(&DAT_14cbc5310,"weapon_bring_up",FUN_148cf5cf8,&local_a8);
  atexit((_func_5014 *)&LAB_1440d5485);
  DAT_14cbc53f0 = 0;
  _DAT_14cbc53f8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440db806;
  local_a8 = &DAT_14011fc1e;
  FUN_1460dd05a(&local_a8);
  atexit((_func_5014 *)&LAB_1440d54ba);
  local_a8 = (char *)CONCAT71(local_a8._1_7_,1);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cbc5480,L"p.gbx.physics.carryables_use_ccd",&local_a8,
                L"Whether or not carryables use CCD.");
  atexit(FUN_1440d54bf);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,1);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cbc5498,L"oak.CarryableObject.ForceDisallowNanite",&local_a8,
                L"0: Do not change or set bDisallowNanite flag for ACarryableObject and FCarryableObjectBodySettings \n1: Force bDisallowNanite=true on the static mesh component for ACarryableObject and FCarryableObjectBodySettings \n2: Force bDisallowNanite=false on the static mesh component for ACarryableObject and FCarryableObjectBodySettings "
               );
  atexit(FUN_1440d5504);
  DAT_14cbc56a0 = 0;
  _DAT_14cbc56a8 = 0;
  _DAT_14cbc56b0 = 2;
  _DAT_14cbc56b4 = 0;
  ram0x00014cbc56bc = 0;
  _DAT_14cbc56c4 = 0;
  _DAT_14cbc56c8 = 2;
  _DAT_14cbc56cc = 0;
  _DAT_14cbc56d8 = 0;
  LOCK();
  DAT_14cbc56d0._0_4_ = 0;
  DAT_14cbc56d0._4_4_ = 0;
  UNLOCK();
  atexit(FUN_1440d5549);
  _DAT_14cbc54c0 = &LAB_1440d5db4;
  _DAT_14cbc54c8 = 0x461f1066;
  DAT_14cbc54cc = 1;
  DAT_14cbc54b8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc54b8;
  atexit((_func_5014 *)&LAB_1440d5db9);
  DAT_14cbc5538 = 0;
  _DAT_14cbc5540 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440dbcc2;
  local_a8 = &DAT_14011fc1e;
  FUN_146188cd2(&local_a8);
  atexit((_func_5014 *)&LAB_1440d5e16);
  local_a8 = "associatedcarryableobject";
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc55f0 = (ulonglong)uVar2;
  local_a8 = "ContainerEnabled";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc55d0 = (ulonglong)uVar2;
  local_a8 = "CarryablePlaced";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc55d8 = (ulonglong)uVar2;
  local_a8 = "ContainsCarryable";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc55e0 = (ulonglong)uVar2;
  local_a8 = "AnyPlayerCarryingAssociatedObject";
  local_a0 = 0x21;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc55e8 = (ulonglong)uVar2;
  local_a8 = "Carryable_object";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc55f8 = (ulonglong)uVar2;
  local_a8 = "Carried";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc54b0 = (ulonglong)uVar2;
  local_a8 = "nexus";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5610 = (ulonglong)uVar2;
  local_a8 = "DispenserActive";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc5600 = (ulonglong)uVar2;
  local_a8 = "DispenserEmptied";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc5608 = (ulonglong)uVar2;
  _DAT_14cbc5620 = &LAB_1440d7c7f;
  _DAT_14cbc5628 = 0x461f1000;
  DAT_14cbc562c = 1;
  DAT_14cbc5618 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc5618;
  atexit((_func_5014 *)&LAB_1440d7c84);
  FUN_1446f470e(&DAT_14cbc5638,L"WeaponLockCarrying",1);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440df7f8 FUN_1440df7f8 body=3084 status=ok
// SIG undefined FUN_1440df7f8(void)

void FUN_1440df7f8(longlong *param_1,longlong param_2,longlong *param_3,char *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  int iVar23;
  ulonglong uVar24;
  uint *puVar25;
  undefined1 auStack_428 [32];
  undefined1 *local_408;
  undefined4 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined2 *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  code **local_3d0;
  undefined1 *local_3c8;
  code *local_3c0;
  longlong *local_3b0;
  uint local_3a4;
  uint *local_3a0;
  uint *local_398;
  longlong local_390;
  char *local_388;
  code *local_380;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_374 = 0xbf800000;
  local_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_2f0 = 0;
  local_2e8 = 0x200000000;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_3b0 = param_1;
  FUN_1405c5fa2();
  local_2d8 = &DAT_14cb769e8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = &PTR_FUN_14b0394b0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_274 = 0;
  uStack_26c = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  local_238 = FUN_140938dea();
  local_230 = 0xffffffff;
  local_1c8 = 0;
  local_1c0 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_168 = 1;
  local_164 = 0;
  uStack_15c = 0;
  local_150 = 0x100000000;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  local_378[0] = 0xe;
  if (param_4[1] == '\0') {
    if (*param_3 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)(*param_3 + 0x11b);
    }
    *param_4 = cVar3;
    param_4[1] = '\x01';
  }
  local_388 = param_4;
  if ((*param_3 == 0) || (*(char *)(*param_3 + 0x11a) != '\x01')) {
    if (*param_4 == '\x01') {
      puVar7 = (uint *)(local_3b0 + 0x7d);
      uVar12 = *(uint *)(local_3b0 + 0x80);
      if (uVar12 == 0) {
        uVar21 = 1;
        uVar24 = 0;
        iVar23 = 0;
        uVar17 = 0;
      }
      else {
        puVar25 = (uint *)local_3b0[0x7f];
        if ((uint *)local_3b0[0x7f] == (uint *)0x0) {
          puVar25 = puVar7;
        }
        uVar17 = *puVar25;
        if (uVar17 == 0) {
          iVar23 = uVar12 + 0x1e;
          if (-1 < (int)(uVar12 - 1)) {
            iVar23 = uVar12 - 1;
          }
          uVar24 = 0;
          uVar21 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar21 = uVar24;
          }
          iVar23 = 0;
          do {
            if (uVar21 == uVar24) goto LAB_1440dff66;
            iVar23 = iVar23 + 0x20;
            uVar17 = puVar25[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar24 = 0;
          iVar23 = 0;
        }
        uVar21 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar21 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar17 = (iVar23 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar12 <= (int)uVar17) {
          uVar17 = uVar12;
        }
      }
      if (uVar17 != uVar12) {
        uVar5 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
                -0x7a143595;
        local_3a4 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        local_3a4 = local_3a4 >> 0x10 ^ local_3a4;
        uVar5 = 0xffffffff;
        plVar15 = local_3b0;
        local_3a0 = puVar7;
        local_398 = (uint *)(ulonglong)uVar12;
        local_390 = param_2;
LAB_1440dfd13:
        lVar19 = plVar15[0x7b];
        lVar6 = (longlong)(int)uVar17 * 0x60;
        if (*(int *)(lVar19 + 0x10 + lVar6) != *(int *)(lVar19 + 0x3c + lVar6)) {
          puVar22 = (undefined4 *)(lVar19 + lVar6);
          puVar16 = *(undefined4 **)(puVar22 + 0x12);
          if (*(undefined4 **)(puVar22 + 0x12) == (undefined4 *)0x0) {
            puVar16 = puVar22 + 0x10;
          }
          iVar4 = puVar16[puVar22[0x14] - 1 & local_3a4];
          if (iVar4 != -1) {
            lVar19 = *(longlong *)(puVar22 + 2);
            iVar18 = iVar4;
            do {
              if (*(longlong **)(lVar19 + (longlong)iVar18 * 0x18) == param_3) goto LAB_1440dfd8b;
              iVar18 = *(int *)(lVar19 + (longlong)iVar18 * 0x18 + 0x10);
            } while (iVar18 != -1);
          }
        }
        goto LAB_1440dfe6c;
      }
    }
    else if (param_2 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_3d0 = &local_380;
        local_380 = FUN_141030f22;
        local_3c0 = FUN_14081d0ea;
        local_3c8 = &LAB_1459f2e4c;
        local_3d8 = &LAB_148c39de3;
        local_3e0 = &LAB_1457a9eb2;
        local_3e8 = &DAT_149e063b2;
        local_3f0 = 0;
        local_3f8 = 0x10000004;
        local_400 = 0x10;
        local_408 = (undefined1 *)CONCAT44(local_408._4_4_,0x3de0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (uVar12 = FUN_1408966e4(param_2),
         (int)local_3b0[0x7c] != *(int *)((longlong)local_3b0 + 0x40c))) {
        plVar15 = local_3b0 + 0x82;
        if ((longlong *)local_3b0[0x83] != (longlong *)0x0) {
          plVar15 = (longlong *)local_3b0[0x83];
        }
        iVar23 = *(int *)((longlong)plVar15 + (ulonglong)((int)local_3b0[0x84] - 1U & uVar12) * 4);
        if (iVar23 != -1) {
          lVar19 = local_3b0[0x7b];
          iVar4 = iVar23;
          do {
            iVar18 = iVar23;
            if (*(uint *)(lVar19 + (longlong)iVar4 * 0x60) == uVar12) goto LAB_1440e01c1;
            iVar4 = *(int *)((longlong)iVar4 * 0x60 + lVar19 + 0x58);
          } while (iVar4 != -1);
        }
      }
    }
  }
  else {
    local_398 = (uint *)(local_3b0 + 0x7d);
    iVar23 = (int)local_3b0[0x80];
    if (iVar23 == 0) {
      uVar24 = 1;
      uVar21 = 0;
      iVar18 = 0;
      iVar4 = 0;
    }
    else {
      puVar7 = (uint *)local_3b0[0x7f];
      if ((uint *)local_3b0[0x7f] == (uint *)0x0) {
        puVar7 = local_398;
      }
      uVar12 = *puVar7;
      if (uVar12 == 0) {
        iVar4 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar4 = iVar23 + -1;
        }
        uVar21 = 0;
        uVar24 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar24 = uVar21;
        }
        iVar18 = 0;
        do {
          if (uVar24 == uVar21) goto LAB_1440dff66;
          iVar18 = iVar18 + 0x20;
          uVar12 = puVar7[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar21 = 0;
        iVar18 = 0;
      }
      uVar24 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar24 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar4 = (iVar18 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar4) {
        iVar4 = iVar23;
      }
    }
    if (iVar4 != iVar23) {
      uVar12 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
               -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      local_3a0 = (uint *)CONCAT44(local_3a0._4_4_,uVar12 >> 0x10 ^ uVar12);
      uVar12 = 0xffffffff;
      plVar15 = local_3b0;
LAB_1440dfff3:
      lVar19 = plVar15[0x7b];
      lVar6 = (longlong)iVar4 * 0x60;
      if (*(int *)(lVar19 + 0x10 + lVar6) != *(int *)(lVar19 + 0x3c + lVar6)) {
        puVar25 = (uint *)(lVar19 + lVar6);
        puVar7 = *(uint **)(puVar25 + 0x12);
        if (*(uint **)(puVar25 + 0x12) == (uint *)0x0) {
          puVar7 = puVar25 + 0x10;
        }
        uVar17 = puVar7[puVar25[0x14] - 1 & (uint)local_3a0];
        if (uVar17 != 0xffffffff) {
          lVar19 = *(longlong *)(puVar25 + 2);
          uVar5 = uVar17;
          do {
            if (*(longlong **)(lVar19 + (longlong)(int)uVar5 * 0x18) == param_3) goto LAB_1440e0060;
            uVar5 = *(uint *)(lVar19 + (longlong)(int)uVar5 * 0x18 + 0x10);
          } while (uVar5 != 0xffffffff);
        }
      }
      goto LAB_1440e00db;
    }
  }
  goto LAB_1440dff66;
  while (iVar18 = *(int *)(lVar6 + 0x58), *(int *)(lVar6 + 0x58) != -1) {
LAB_1440e01c1:
    lVar6 = lVar19 + (longlong)iVar18 * 0x60;
    if (*(uint *)(lVar19 + (longlong)iVar18 * 0x60) == uVar12) goto LAB_1440e01e3;
  }
  lVar6 = 0;
LAB_1440e01e3:
  if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
    uVar17 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    uVar17 = uVar17 >> 0x10 ^ uVar17;
    lVar20 = lVar6 + 0x40;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      lVar20 = *(longlong *)(lVar6 + 0x48);
    }
    iVar4 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar6 + 0x50) - 1U & uVar17) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong **)(*(longlong *)(lVar6 + 8) + (longlong)iVar4 * 0x18) == param_3)
        goto LAB_1440e027c;
        iVar4 = *(int *)(*(longlong *)(lVar6 + 8) + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  goto LAB_1440dff66;
  while (iVar23 = *(int *)(lVar6 + 0x58), iVar23 != -1) {
LAB_1440e027c:
    lVar6 = lVar19 + (longlong)iVar23 * 0x60;
    if (*(uint *)(lVar19 + (longlong)iVar23 * 0x60) == uVar12) goto LAB_1440e02f6;
  }
  lVar6 = 0;
LAB_1440e02f6:
  if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
    lVar19 = lVar6 + 0x40;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      lVar19 = *(longlong *)(lVar6 + 0x48);
    }
    iVar23 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar6 + 0x50) - 1U & uVar17) * 4);
    if (iVar23 != -1) {
      do {
        puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 8) + (longlong)iVar23 * 0x18);
        if ((longlong *)*puVar10 == param_3) goto LAB_1440e0344;
        iVar23 = *(int *)(puVar10 + 2);
      } while (iVar23 != -1);
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_1440e0344:
  uVar8 = puVar10[1];
  goto LAB_1440e0357;
  while (iVar4 = *(int *)(puVar10 + 2), iVar4 != -1) {
LAB_1440dfd8b:
    puVar10 = (undefined8 *)(lVar19 + (longlong)iVar4 * 0x18);
    if ((longlong *)*puVar10 == param_3) goto LAB_1440dfda5;
  }
  puVar10 = (undefined8 *)0x0;
LAB_1440dfda5:
  if (*(char *)(puVar10[1] + 0x28) == '\x01') {
    uVar2 = *puVar22;
    uVar8 = (**(code **)(*plVar15 + 0x180))(plVar15);
    lVar19 = local_390;
    lVar6 = FUN_140d172b5(uVar8,uVar2);
    if (lVar6 == lVar19 && lVar6 != 0) {
      FUN_148cfd572(local_3b0,param_3,lVar6);
    }
    if (puVar22[4] != puVar22[0xf]) {
      puVar16 = puVar22 + 0x10;
      if (*(undefined4 **)(puVar22 + 0x12) != (undefined4 *)0x0) {
        puVar16 = *(undefined4 **)(puVar22 + 0x12);
      }
      iVar4 = puVar16[puVar22[0x14] - 1 & local_3a4];
      if (iVar4 != -1) {
        do {
          puVar10 = (undefined8 *)(*(longlong *)(puVar22 + 2) + (longlong)iVar4 * 0x18);
          if ((longlong *)*puVar10 == param_3) goto LAB_1440dfe3b;
          iVar4 = *(int *)(puVar10 + 2);
        } while (iVar4 != -1);
      }
    }
    puVar10 = (undefined8 *)0x0;
LAB_1440dfe3b:
    local_408 = local_378;
    FUN_140d1c8e8(local_3b0,*puVar22,param_3,puVar10[1]);
    uVar12 = *(uint *)(local_3b0 + 0x80);
    puVar7 = local_3a0;
    plVar15 = local_3b0;
  }
LAB_1440dfe6c:
  uVar5 = uVar5 & ~(uint)uVar21;
  puVar25 = (uint *)plVar15[0x7f];
  if ((uint *)plVar15[0x7f] == (uint *)0x0) {
    puVar25 = puVar7;
  }
  iVar4 = (int)uVar24;
  lVar19 = (longlong)iVar4;
  uVar17 = puVar25[lVar19] & uVar5;
  if (uVar17 == 0) {
    iVar18 = uVar12 + 0x1e;
    if (-1 < (int)(uVar12 - 1)) {
      iVar18 = uVar12 - 1;
    }
    iVar18 = iVar18 >> 5;
    iVar23 = iVar23 + 0x20;
    iVar11 = iVar18;
    if (iVar18 < iVar4) {
      iVar11 = iVar4;
    }
    puVar7 = local_3a0;
    if (iVar4 < iVar18) {
      lVar6 = 0;
      do {
        uVar17 = puVar25[lVar19 + lVar6 + 1];
        if (uVar17 != 0) {
          uVar24 = (ulonglong)(iVar4 + (int)lVar6 + 1);
          uVar5 = 0xffffffff;
          goto LAB_1440dfef1;
        }
        iVar23 = iVar23 + 0x20;
        lVar6 = lVar6 + 1;
      } while (iVar11 - lVar19 != lVar6);
      uVar5 = 0xffffffff;
      iVar4 = iVar11;
    }
    uVar24 = (ulonglong)(iVar4 + 1);
    plVar15 = local_3b0;
    uVar17 = uVar12;
  }
  else {
LAB_1440dfef1:
    uVar21 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = uVar21 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar17 = (iVar23 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)uVar12 <= (int)uVar17) {
      uVar17 = uVar12;
    }
  }
  if (uVar17 == (uint)local_398) goto LAB_1440dff66;
  goto LAB_1440dfd13;
  while (uVar17 = *(uint *)(puVar10 + 2), uVar17 != 0xffffffff) {
LAB_1440e0060:
    puVar10 = (undefined8 *)(lVar19 + (longlong)(int)uVar17 * 0x18);
    if ((longlong *)*puVar10 == param_3) goto LAB_1440e007a;
  }
  puVar10 = (undefined8 *)0x0;
LAB_1440e007a:
  if (*(char *)(puVar10[1] + 0x28) == '\x01') {
    local_3a4 = *puVar25;
    uVar8 = (**(code **)(*plVar15 + 0x180))(plVar15);
    plVar9 = (longlong *)FUN_140d172b5(uVar8,local_3a4);
    plVar15 = local_3b0;
    if (((plVar9 != (longlong *)0x0) && ((char)plVar9[0x2f] == '\x03')) &&
       (cVar3 = (**(code **)(*plVar9 + 0x6c8))(plVar9), plVar15 = local_3b0, cVar3 != '\0')) {
      if (puVar25[4] == puVar25[0xf]) goto LAB_1440e02d9;
      puVar7 = puVar25 + 0x10;
      if (*(uint **)(puVar25 + 0x12) != (uint *)0x0) {
        puVar7 = *(uint **)(puVar25 + 0x12);
      }
      uVar12 = puVar7[puVar25[0x14] - 1 & (uint)local_3a0];
      if (uVar12 == 0xffffffff) goto LAB_1440e02d9;
      goto LAB_1440e02c2;
    }
  }
LAB_1440e00db:
  uVar12 = uVar12 & ~(uint)uVar24;
  puVar7 = (uint *)plVar15[0x7f];
  if ((uint *)plVar15[0x7f] == (uint *)0x0) {
    puVar7 = local_398;
  }
  iVar11 = (int)plVar15[0x80];
  iVar4 = (int)uVar21;
  lVar19 = (longlong)iVar4;
  uVar17 = puVar7[lVar19] & uVar12;
  if (uVar17 == 0) {
    iVar13 = iVar11 + 0x1e;
    if (-1 < iVar11 + -1) {
      iVar13 = iVar11 + -1;
    }
    iVar13 = iVar13 >> 5;
    iVar18 = iVar18 + 0x20;
    iVar14 = iVar13;
    if (iVar13 < iVar4) {
      iVar14 = iVar4;
    }
    if (iVar4 < iVar13) {
      lVar6 = 0;
      do {
        uVar17 = puVar7[lVar19 + lVar6 + 1];
        if (uVar17 != 0) {
          uVar21 = (ulonglong)(iVar4 + (int)lVar6 + 1);
          uVar12 = 0xffffffff;
          goto LAB_1440e0162;
        }
        iVar18 = iVar18 + 0x20;
        lVar6 = lVar6 + 1;
      } while (iVar14 - lVar19 != lVar6);
      uVar12 = 0xffffffff;
      iVar4 = iVar14;
    }
    uVar21 = (ulonglong)(iVar4 + 1);
    plVar15 = local_3b0;
    iVar4 = iVar11;
  }
  else {
LAB_1440e0162:
    uVar24 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = uVar24 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar4 = (iVar18 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar4) {
      iVar4 = iVar11;
    }
  }
  if (iVar4 == iVar23) goto LAB_1440dff66;
  goto LAB_1440dfff3;
  while (uVar12 = *(uint *)(puVar10 + 2), uVar12 != 0xffffffff) {
LAB_1440e02c2:
    puVar10 = (undefined8 *)(*(longlong *)(puVar25 + 2) + (longlong)(int)uVar12 * 0x18);
    if ((longlong *)*puVar10 == param_3) goto LAB_1440e02db;
  }
LAB_1440e02d9:
  puVar10 = (undefined8 *)0x0;
LAB_1440e02db:
  uVar8 = puVar10[1];
  uVar12 = *puVar25;
LAB_1440e0357:
  local_408 = local_378;
  FUN_140d1c8e8(local_3b0,uVar12,param_3,uVar8);
LAB_1440dff66:
  FUN_140d17bd8(local_378);
  if (local_388[1] == '\x01') {
    local_388[1] = '\0';
  }
  if ((local_60 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440e0406 FUN_1440e0406 body=630 status=ok
// SIG undefined FUN_1440e0406(void)

void FUN_1440e0406(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)((longlong)param_1 + 0xe3) != '\x01') goto LAB_1440e0653;
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  if (((lVar3 == 0) || (param_2 == 0)) || (*(char *)(lVar3 + 0x178) != '\x03')) goto LAB_1440e0653;
  lVar3 = FUN_1402a1246(param_2);
  if (lVar3 == 0) goto LAB_1440e0653;
  lVar3 = param_3[1];
  if (lVar3 == 0) {
    uVar4 = FUN_141528ae6();
    lVar3 = FUN_14477b664(uVar4);
    param_3[1] = lVar3;
  }
  lVar5 = param_3[2];
  if (lVar5 == 0) {
    if ((lVar3 == 0) || (*param_3 == 0)) goto LAB_1440e0653;
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_3);
        param_3[2] = lVar5;
        if (lVar5 == 0) goto LAB_1440e0653;
        lVar3 = param_3[1];
        goto LAB_1440e0496;
      }
    }
    goto LAB_1440e064b;
  }
LAB_1440e0496:
  if (lVar3 == 0) {
    uVar4 = FUN_141528ae6();
    lVar3 = FUN_14477b664(uVar4);
    param_3[1] = lVar3;
    lVar5 = param_3[2];
    if (lVar5 == 0) {
      if ((lVar3 == 0) || (*param_3 == 0)) goto LAB_1440e0653;
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,param_3);
          param_3[2] = lVar5;
          if (lVar5 == 0) goto LAB_1440e0653;
          goto LAB_1440e0513;
        }
      }
LAB_1440e064b:
      param_3[2] = 0;
      goto LAB_1440e0653;
    }
  }
LAB_1440e0513:
  lVar3 = FUN_148d12502(lVar5,param_2);
  if (lVar3 == 0) goto LAB_1440e0653;
  local_48 = 0;
  lStack_40 = 0;
  uVar4 = FUN_140b7bb2c();
  lVar5 = FUN_14477b664(uVar4);
  lVar6 = FUN_140b7bb2c();
  uVar4 = FUN_140b7bb2c();
  FUN_1402d1bfa(&local_38,uVar4,lVar3);
  if (local_38 != 0) {
    lStack_40 = 0;
  }
  local_50 = local_38;
  lVar7 = FUN_140b7bb2c();
  if (lVar6 == 0) {
LAB_1440e05a6:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_1440e05a6;
  if (lVar5 != lVar7) {
    lStack_40 = 0;
  }
  uVar4 = FUN_14477b664(lVar7);
  local_48 = FUN_14477b664(uVar4);
  if (local_48 != 0 && local_38 != 0) {
    lStack_40 = lVar3;
  }
  (**(code **)(*(longlong *)(param_2 + 0xe68) + 0x18))((longlong *)(param_2 + 0xe68),&local_50,0);
LAB_1440e0653:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440e06d2 FUN_1440e06d2 body=15570 status=ok
// SIG undefined FUN_1440e06d2(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440e06d2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong **pplVar2;
  undefined4 *puVar3;
  longlong **pplVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  longlong ***ppplVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  uint *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  longlong *plVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  undefined4 *puVar35;
  undefined1 *puVar36;
  longlong **pplVar37;
  longlong *plVar38;
  undefined4 uVar39;
  int iVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  int iVar44;
  undefined1 *puVar45;
  longlong lVar46;
  uint uVar47;
  int iVar48;
  longlong *plVar49;
  byte *pbVar50;
  bool bVar51;
  float fVar52;
  undefined1 auStack_4f8 [40];
  uint *local_4d0;
  byte *local_4c8;
  longlong *local_4c0;
  longlong *local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  uint *local_4a0;
  longlong local_498;
  longlong *local_490;
  longlong *local_488;
  longlong *local_480;
  longlong *local_478;
  longlong *local_470;
  longlong *local_468;
  longlong *local_460;
  longlong local_458;
  longlong local_450;
  longlong local_448;
  longlong *local_440;
  undefined8 local_438;
  undefined4 local_430;
  char local_429;
  longlong *local_428;
  undefined8 uStack_420;
  undefined8 local_410;
  longlong *local_408;
  ulonglong uStack_400;
  longlong local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  longlong local_3e0;
  undefined8 uStack_3d8;
  longlong **local_3c8;
  undefined8 uStack_3c0;
  uint local_3b8 [4];
  uint *local_3a8;
  int local_3a0;
  uint local_39c;
  int iStack_398;
  int local_394;
  undefined1 local_390 [8];
  undefined1 *local_388;
  uint local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 *local_350;
  undefined8 uStack_348;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    iVar44 = 0;
  }
  else {
    uVar13 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x3d0) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar31 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar31 = 0;
    }
    iVar44 = *(int *)(lVar31 + 0x10);
    if (*(int *)(lVar31 + 0x10) == 0) {
      LOCK();
      iVar44 = DAT_14c964868 + 1;
      UNLOCK();
      iVar48 = DAT_14c964868 + 1;
      bVar51 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar44;
      if (bVar51) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar48);
      }
      LOCK();
      iVar44 = *(int *)(lVar31 + 0x10);
      bVar51 = iVar44 == 0;
      if (bVar51) {
        *(int *)(lVar31 + 0x10) = iVar48;
        iVar44 = 0;
      }
      UNLOCK();
      if (bVar51) {
        iVar44 = iVar48;
      }
    }
  }
  *(int *)(param_1 + 0x3d4) = iVar44;
  uStack_370 = (longlong ***)CONCAT44(uStack_370._4_4_,(int)uStack_370);
  if ((DAT_14cbc5838 == 0) ||
     (uStack_370 = (longlong ***)CONCAT44(uStack_370._4_4_,(int)uStack_370), DAT_14cbc5818 == 0))
  goto LAB_1440e4291;
  local_3c8 = &local_408;
  local_408 = (longlong *)0x0;
  uStack_400 = 0;
  uStack_370 = &local_3c8;
  local_378._0_2_ = 0xa494;
  local_378._2_2_ = 0x440e;
  local_378._4_4_ = 1;
  FUN_141221196();
  local_498 = FUN_1407e8892();
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(local_498 + 0x40);
  local_4c8 = (byte *)(longlong)*(int *)(local_498 + 0x198);
  if (local_4c8 != (byte *)0x0) {
    pbVar50 = *(byte **)(local_498 + 400);
    local_4c8 = local_4c8 + (longlong)pbVar50;
    local_4c0 = (longlong *)(param_1 + 0x518);
    puVar20 = (uint *)(param_1 + 0x528);
    lVar31 = param_1 + 0x550;
    local_4d0 = (uint *)(param_1 + 0x558);
    do {
      if (*(int *)(param_1 + 0x54c) == 0) {
        iVar44 = *(int *)(param_1 + 0x520);
        *(int *)(param_1 + 0x520) = iVar44 + 1;
        if (*(int *)(param_1 + 0x524) == iVar44) {
          FUN_1447cc1b4(local_4c0,iVar44);
        }
        iVar48 = *(int *)(param_1 + 0x540);
        if (iVar48 == 0) {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar48 + 0x1e;
          if (-1 < iVar48 + -1) {
            iVar12 = iVar48 + -1;
          }
          iVar12 = iVar12 >> 5;
        }
        iVar24 = iVar48 + 1;
        iVar33 = iVar48 + 0x1f;
        if (-1 < iVar48) {
          iVar33 = iVar48;
        }
        if (iVar33 >> 5 == iVar12) {
          *(int *)(param_1 + 0x540) = iVar24;
        }
        else {
          if (*(int *)(param_1 + 0x544) <= iVar48) {
            iVar12 = iVar48;
            if (iVar48 + 0x20U < 0xa0) {
              iVar24 = 0x80;
            }
            else {
              uVar13 = iVar48 + 0x20U >> 5;
              if (*(int *)(param_1 + 0x544) + 0x1fU < 0xa0) {
                uVar47 = 4;
                if (4 < uVar13) {
                  uVar47 = uVar13;
                }
              }
              else {
                uVar47 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
              }
              uVar17 = (ulonglong)(uVar47 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar14 = (uint)(uVar17 + 0xf);
                  if (uVar47 < 0x1ffd) {
                    uVar17 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar14 >> 4]];
                  }
                  else {
                    uVar29 = uVar17 + 0xf & 0xfffffffffffffff0;
                    if (uVar29 < 0x7ff1) {
                      bVar23 = (&DAT_14c841e00)[uVar14 >> 4];
                      uVar27 = 0x32;
                      if (0x32 < bVar23) {
                        uVar27 = (ulonglong)bVar23;
                      }
                      uVar43 = 0x32 - (ulonglong)bVar23;
                      do {
                        uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar43 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar43 & 0xffffffff] & 0xf) == 0) goto LAB_1440e0de8;
                        lVar25 = uVar27 + 1 + uVar43;
                        uVar43 = uVar43 - 1;
                      } while (lVar25 != 0x33);
                    }
                    uVar17 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar17 = 0x10;
                    }
                    uVar17 = -uVar17 & (uVar29 + uVar17) - 1;
                  }
                }
                else {
                  local_4b0 = (longlong *)(ulonglong)uVar13;
                  uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                  uVar13 = (uint)local_4b0;
                  iVar12 = *(int *)(param_1 + 0x540);
                }
              }
LAB_1440e0de8:
              iVar40 = (int)(uVar17 >> 2);
              iVar24 = iVar40 << 5;
              if (iVar40 < (int)uVar13) {
                iVar24 = -0x20;
              }
            }
            *(int *)(param_1 + 0x544) = iVar24;
            FUN_1446efbd8(puVar20,iVar12);
            iVar24 = *(int *)(param_1 + 0x540) + 1;
          }
          iVar12 = iVar24 + 0x1f;
          if (-1 < iVar24) {
            iVar12 = iVar24;
          }
          *(int *)(param_1 + 0x540) = iVar24;
          if (iVar24 % 0x20 != 0) {
            puVar16 = *(uint **)(param_1 + 0x538);
            if (*(uint **)(param_1 + 0x538) == (uint *)0x0) {
              puVar16 = puVar20;
            }
            bVar23 = -(char)(iVar24 % 0x20);
            puVar16[iVar12 >> 5] = (puVar16[iVar12 >> 5] << (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
          }
        }
        lVar25 = (longlong)iVar44;
        puVar16 = *(uint **)(param_1 + 0x538);
        if (*(uint **)(param_1 + 0x538) == (uint *)0x0) {
          puVar16 = puVar20;
        }
        bVar23 = (byte)iVar48 & 0x1f;
        puVar16[iVar33 >> 5] = puVar16[iVar33 >> 5] & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
      }
      else {
        iVar44 = *(int *)(param_1 + 0x548);
        lVar25 = (longlong)iVar44;
        iVar48 = *(int *)(*(longlong *)(param_1 + 0x518) + 4 + lVar25 * 0xc);
        *(int *)(param_1 + 0x548) = iVar48;
        iVar12 = *(int *)(param_1 + 0x54c) + -1;
        *(int *)(param_1 + 0x54c) = iVar12;
        if (iVar12 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x518) + (longlong)iVar48 * 0xc) = 0xffffffff;
        }
      }
      uVar13 = 1 << ((byte)iVar44 & 0x1f);
      puVar16 = *(uint **)(param_1 + 0x538);
      if (*(uint **)(param_1 + 0x538) == (uint *)0x0) {
        puVar16 = puVar20;
      }
      iVar48 = iVar44 + 0x1f;
      if (-1 < iVar44) {
        iVar48 = iVar44;
      }
      puVar16[iVar48 >> 5] = puVar16[iVar48 >> 5] | uVar13;
      lVar46 = *(longlong *)(param_1 + 0x518);
      bVar23 = *pbVar50;
      *(byte *)(lVar46 + lVar25 * 0xc) = bVar23;
      *(undefined4 *)(lVar46 + 4 + lVar25 * 0xc) = 0xffffffff;
      uVar47 = *(int *)(param_1 + 0x520) - *(int *)(param_1 + 0x54c);
      if (1 < uVar47) {
        lVar41 = *(longlong *)(param_1 + 0x558);
        if (*(longlong *)(param_1 + 0x558) == 0) {
          lVar41 = lVar31;
        }
        iVar12 = *(int *)(lVar41 + (ulonglong)(*(int *)(param_1 + 0x560) - 1U & (uint)bVar23) * 4);
        if (iVar12 != -1) {
          lVar41 = *local_4c0;
          do {
            if (*(byte *)(lVar41 + (longlong)iVar12 * 0xc) == bVar23) {
              if (*(int *)(param_1 + 0x54c) != 0) {
                *(int *)(lVar41 + (longlong)*(int *)(param_1 + 0x548) * 0xc) = iVar44;
              }
              *(undefined4 *)(lVar41 + (longlong)iVar44 * 0xc) = 0xffffffff;
              if (*(int *)(param_1 + 0x54c) < 1) {
                uVar39 = 0xffffffff;
              }
              else {
                uVar39 = *(undefined4 *)(param_1 + 0x548);
              }
              *(undefined4 *)((longlong)iVar44 * 0xc + lVar41 + 4) = uVar39;
              *(int *)(param_1 + 0x548) = iVar44;
              *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + 1;
              puVar16 = *(uint **)(param_1 + 0x538);
              if (*(uint **)(param_1 + 0x538) == (uint *)0x0) {
                puVar16 = puVar20;
              }
              puVar16[iVar48 >> 5] = puVar16[iVar48 >> 5] & ~uVar13;
              goto LAB_1440e0d1d;
            }
            iVar12 = *(int *)((longlong)iVar12 * 0xc + lVar41 + 4);
          } while (iVar12 != -1);
        }
      }
      uVar13 = 1;
      if (3 < uVar47) {
        uVar17 = (ulonglong)(uVar47 & 0xfffffffe) + 0xf;
        lVar41 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        uVar13 = 1 << ((byte)lVar41 & 0x1f);
      }
      if (((int)uVar47 < 1) || ((int)uVar13 <= *(int *)(param_1 + 0x560))) {
        lVar46 = lVar46 + lVar25 * 0xc;
        uVar13 = *(int *)(param_1 + 0x560) - 1U & (uint)bVar23;
        *(uint *)(lVar46 + 8) = uVar13;
        lVar25 = *(longlong *)(param_1 + 0x558);
        if (*(longlong *)(param_1 + 0x558) == 0) {
          lVar25 = lVar31;
        }
        *(undefined4 *)(lVar46 + 4) =
             *(undefined4 *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x560) - 1U & uVar13) * 4);
        lVar25 = *(longlong *)(param_1 + 0x558);
        if (*(longlong *)(param_1 + 0x558) == 0) {
          lVar25 = lVar31;
        }
        *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x560) - 1U & uVar13) * 4) = iVar44;
      }
      else {
        *(uint *)(param_1 + 0x560) = uVar13;
        if (*(longlong *)(param_1 + 0x558) != 0) {
          FUN_1446efa72(local_4d0,0,0,4);
          uVar13 = *(uint *)(param_1 + 0x560);
        }
        if (uVar13 != 0) {
          if (uVar13 == 1) {
            if (*(longlong *)local_4d0 != 0) {
              FUN_1446efa72(local_4d0,0,0,4);
            }
LAB_1440e0a18:
            uVar47 = 0;
            do {
              lVar25 = *(longlong *)(param_1 + 0x558);
              if (*(longlong *)(param_1 + 0x558) == 0) {
                lVar25 = lVar31;
              }
              *(undefined4 *)
               (lVar25 + (ulonglong)(*(int *)(param_1 + 0x560) + 0x7fffffffU & uVar47) * 4) =
                   0xffffffff;
              uVar47 = uVar47 + 1;
            } while (uVar13 != uVar47);
          }
          else {
            FUN_1446efa72(local_4d0,0,uVar13,4);
            if (0 < (int)uVar13) goto LAB_1440e0a18;
          }
          iVar44 = *(int *)(param_1 + 0x540);
          if (iVar44 == 0) {
            uVar17 = 0;
            uVar29 = 1;
            iVar12 = 0;
            iVar48 = 0;
          }
          else {
            puVar16 = *(uint **)(param_1 + 0x538);
            if (*(uint **)(param_1 + 0x538) == (uint *)0x0) {
              puVar16 = puVar20;
            }
            uVar13 = *puVar16;
            if (uVar13 == 0) {
              iVar48 = iVar44 + 0x1e;
              if (-1 < iVar44 + -1) {
                iVar48 = iVar44 + -1;
              }
              uVar17 = 0;
              uVar29 = (ulonglong)(uint)(iVar48 >> 5);
              if (iVar48 >> 5 < 1) {
                uVar29 = uVar17;
              }
              iVar12 = 0;
              do {
                if (uVar29 == uVar17) goto LAB_1440e0d1d;
                iVar12 = iVar12 + 0x20;
                uVar13 = puVar16[uVar17 + 1];
                uVar17 = uVar17 + 1;
              } while (uVar13 == 0);
            }
            else {
              uVar17 = 0;
              iVar12 = 0;
            }
            uVar29 = (ulonglong)(-uVar13 & uVar13);
            uVar27 = uVar29 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar48 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if (iVar44 <= iVar48) {
              iVar48 = iVar44;
            }
          }
          if (iVar48 < iVar44) {
            puVar45 = &DAT_ffffffff;
            do {
              lVar25 = *(longlong *)(param_1 + 0x518);
              lVar41 = (longlong)iVar48;
              uVar13 = *(int *)(param_1 + 0x560) - 1U & (uint)*(byte *)(lVar25 + lVar41 * 0xc);
              *(uint *)(lVar25 + 8 + lVar41 * 0xc) = uVar13;
              lVar46 = *(longlong *)(param_1 + 0x558);
              if (*(longlong *)(param_1 + 0x558) == 0) {
                lVar46 = lVar31;
              }
              *(undefined4 *)(lVar25 + 4 + lVar41 * 0xc) =
                   *(undefined4 *)
                    (lVar46 + (ulonglong)(*(int *)(param_1 + 0x560) - 1U & uVar13) * 4);
              lVar25 = *(longlong *)(param_1 + 0x558);
              if (*(longlong *)(param_1 + 0x558) == 0) {
                lVar25 = lVar31;
              }
              *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x560) - 1U & uVar13) * 4) = iVar48;
              uVar13 = ~(uint)uVar29 & (uint)puVar45;
              puVar16 = *(uint **)(param_1 + 0x538);
              if (*(uint **)(param_1 + 0x538) == (uint *)0x0) {
                puVar16 = puVar20;
              }
              iVar44 = *(int *)(param_1 + 0x540);
              iVar48 = (int)uVar17;
              lVar25 = (longlong)iVar48;
              uVar47 = puVar16[lVar25] & uVar13;
              if (uVar47 == 0) {
                iVar24 = iVar44 + 0x1e;
                if (-1 < iVar44 + -1) {
                  iVar24 = iVar44 + -1;
                }
                iVar24 = iVar24 >> 5;
                iVar33 = iVar24;
                if (iVar24 < iVar48) {
                  iVar33 = iVar48;
                }
                if (iVar24 <= iVar48) break;
                lVar46 = 0;
                while( true ) {
                  iVar12 = iVar12 + 0x20;
                  uVar47 = puVar16[lVar25 + lVar46 + 1];
                  if (uVar47 != 0) break;
                  lVar46 = lVar46 + 1;
                  if (iVar33 - lVar25 == lVar46) goto LAB_1440e0d1d;
                }
                uVar17 = (ulonglong)(iVar48 + (int)lVar46 + 1);
                uVar13 = 0xffffffff;
              }
              puVar45 = (undefined1 *)(ulonglong)uVar13;
              uVar29 = (ulonglong)(-uVar47 & uVar47);
              uVar27 = uVar29 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar48 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            } while (iVar48 < iVar44);
          }
        }
      }
LAB_1440e0d1d:
      pbVar50 = pbVar50 + 1;
    } while (pbVar50 != local_4c8);
  }
  if ((int)uStack_400 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_400 & 0xffffffff);
  }
  local_470 = (longlong *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xbc) < (int)uStack_400) {
    FUN_1440ea936();
  }
  if ((int)uStack_400 != 0) {
    local_490 = local_408 + (int)uStack_400;
    local_4a8 = param_1 + 0xa0;
    local_4b0 = (longlong *)(param_1 + 0x780);
    lVar31 = param_1 + 0x7b8;
    local_4b8 = (longlong *)(param_1 + 0x7c0);
    local_4d0 = (uint *)(param_1 + 0x790);
    plVar22 = local_408;
    do {
      lVar25 = *plVar22;
      local_478 = plVar22;
      if (lVar25 != 0) {
        uVar5 = *(undefined1 *)(lVar25 + 0x28);
        puVar35 = *(undefined4 **)(lVar25 + 8);
        if (puVar35 == (undefined4 *)0x0) {
          puVar35 = &DAT_14c9485f0;
        }
        if (DAT_14c947fe0 == 0) {
          lVar46 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar46);
          DAT_14c947fe0 = lVar46;
        }
        FUN_140045924(DAT_14c947fe0,&local_410,puVar35,1);
        uVar18 = local_410;
        plVar22 = local_470;
        iVar44 = *(int *)(param_1 + 0xb8);
        uVar13 = iVar44 + 1;
        *(uint *)(param_1 + 0xb8) = uVar13;
        if (*(uint *)(param_1 + 0xbc) < uVar13) {
          FUN_146622320(local_470);
        }
        lVar46 = *plVar22;
        lVar41 = (longlong)iVar44 * 0x20;
        *(undefined8 *)(lVar46 + lVar41) = uVar18;
        puVar26 = (undefined8 *)(lVar46 + 8 + lVar41);
        *puVar26 = 0;
        puVar26[1] = 0;
        *(undefined1 *)(lVar46 + 0x18 + lVar41) = uVar5;
        if ((longlong)*(int *)(lVar25 + 0x38) != 0) {
          plVar22 = *(longlong **)(lVar25 + 0x30);
          local_4c0 = plVar22 + (longlong)*(int *)(lVar25 + 0x38) * 3;
LAB_1440e102d:
          pbVar50 = (byte *)FUN_1408d7900(plVar22);
          if (pbVar50 != (byte *)0x0) {
            iVar44 = *(int *)(param_1 + 0xb8);
            lVar25 = *(longlong *)(param_1 + 0xb0);
            iVar48 = *(int *)(param_1 + 0xa8);
            uVar13 = iVar48 + 1;
            *(uint *)(param_1 + 0xa8) = uVar13;
            local_4c8 = pbVar50;
            if (*(uint *)(param_1 + 0xac) < uVar13) {
              FUN_1466223a6(local_4a8);
            }
            lVar46 = *(longlong *)(param_1 + 0xa0);
            lVar41 = (longlong)iVar48 * 0x20;
            *(byte **)(lVar46 + lVar41) = local_4c8;
            *(longlong *)(lVar46 + 8 + lVar41) = lVar25 + (longlong)iVar44 * 0x20 + -0x20;
            puVar26 = (undefined8 *)(lVar46 + 0x10 + lVar41);
            *puVar26 = 0;
            puVar26[1] = 0xffffffffffffffff;
            lVar25 = *(longlong *)
                      (*(longlong *)(param_1 + 0xa0) + -0x20 +
                      (longlong)*(int *)(param_1 + 0xa8) * 0x20);
            if (lVar25 != 0) {
              lVar32 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + *(longlong *)(param_1 + 0xb0);
              puVar35 = *(undefined4 **)(lVar25 + 8);
              if (puVar35 == (undefined4 *)0x0) {
                puVar35 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar25 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar25);
                DAT_14c947fe0 = lVar25;
              }
              FUN_140045924(DAT_14c947fe0,&local_378,puVar35,1);
              if (CONCAT44(local_378._4_4_,CONCAT22(local_378._2_2_,(undefined2)local_378)) != 0) {
                iVar44 = *(int *)(lVar32 + -0x10);
                uVar13 = iVar44 + 1;
                *(uint *)(lVar32 + -0x10) = uVar13;
                if (*(uint *)(lVar32 + -0xc) < uVar13) {
                  FUN_1446f84a2((longlong *)(lVar32 + -0x18));
                }
                *(ulonglong *)(*(longlong *)(lVar32 + -0x18) + (longlong)iVar44 * 8) =
                     CONCAT44(local_378._4_4_,CONCAT22(local_378._2_2_,(undefined2)local_378));
              }
            }
            *(int *)(lVar46 + lVar41 + 0x18) = *(int *)(param_1 + 0xa8) + -1;
            if ((longlong)*(int *)(local_498 + 0x1a8) != 0) {
              bVar23 = local_4c8[0x160];
              lVar25 = 0;
              do {
                if (*(byte *)(*(longlong *)(local_498 + 0x1a0) + lVar25) == bVar23) {
                  iVar44 = *(int *)(param_1 + 0x788);
                  iVar48 = *(int *)(param_1 + 0x7b4);
                  if (iVar44 == iVar48) goto LAB_1440e11f8;
                  lVar25 = *(longlong *)(param_1 + 0x7c0);
                  if (*(longlong *)(param_1 + 0x7c0) == 0) {
                    lVar25 = lVar31;
                  }
                  iVar12 = *(int *)(lVar25 + (ulonglong)
                                             (*(int *)(param_1 + 0x7c8) - 1U & (uint)bVar23) * 4);
                  if (iVar12 == -1) goto LAB_1440e11f8;
                  goto LAB_1440e11da;
                }
                lVar25 = lVar25 + 1;
              } while (*(int *)(local_498 + 0x1a8) != lVar25);
            }
          }
          goto LAB_1440e17ee;
        }
      }
LAB_1440e19e8:
      plVar22 = local_478 + 1;
    } while (plVar22 != local_490);
  }
  local_3a8 = (uint *)0x0;
  local_3a0 = 0;
  local_3c8 = (longlong **)0x0;
  uStack_3c0 = 0;
  local_39c = 0x80;
  iStack_398 = -1;
  local_394 = 0;
  local_388 = (undefined1 *)0x0;
  local_380 = 0;
  local_428 = (longlong *)0x0;
  uStack_420 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    local_450 = param_1 + 0x1a0;
    local_480 = (longlong *)(param_1 + 0x1f0);
    local_4d0 = (uint *)(param_1 + 0x290);
    local_448 = param_1 + 0xd0;
    local_458 = param_1 + 0xc0;
    local_460 = (longlong *)(param_1 + 0xe0);
    local_468 = (longlong *)(param_1 + 0xf0);
    local_4a8 = param_1 + 0x228;
    local_488 = (longlong *)(param_1 + 0x230);
    local_4a0 = (uint *)(param_1 + 0x200);
    local_4b0 = (longlong *)(param_1 + 0x2c8);
    plVar22 = (longlong *)(param_1 + 0x2a0);
    plVar19 = (longlong *)0x0;
    local_4b8 = plVar22;
    do {
      plVar49 = (longlong *)((longlong)plVar19 * 0x20);
      local_4c8 = (byte *)(*(longlong *)(param_1 + 0xa0) + (longlong)plVar49);
      local_368 = (longlong *)0x0;
      local_358 = &PTR_LAB_14b9644a0;
      uStack_348 = CONCAT44(uStack_348._4_4_,(int)plVar19);
      local_378._0_2_ = 0xaa06;
      local_378._2_2_ = 0x440e;
      local_378._4_4_ = 1;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_470 = plVar19;
      local_350 = (undefined8 *)param_1;
      FUN_140623bee(local_4c8,&local_3f8);
      lVar31 = local_3f8;
      lVar25 = (longlong)(int)uStack_3f0;
      if (lVar25 != 0) {
        lVar46 = 0;
        do {
          local_438 = *(undefined8 *)(lVar31 + lVar46);
          pcVar9 = (code *)CONCAT44(local_378._4_4_,CONCAT22(local_378._2_2_,(undefined2)local_378))
          ;
          plVar19 = local_368;
          if (local_368 == (longlong *)0x0) {
            plVar19 = &local_358;
          }
          uVar18 = (**(code **)(*plVar19 + 8))();
          (*pcVar9)(uVar18,&local_438);
          lVar46 = lVar46 + 8;
        } while (lVar25 * 8 != lVar46);
      }
      if (local_3f8 != 0) {
        FUN_1400020a8(local_3f8);
      }
      ppplVar10 = uStack_370;
      if (CONCAT44(local_378._4_4_,CONCAT22(local_378._2_2_,(undefined2)local_378)) != 0) {
        plVar19 = local_368;
        if (local_368 == (longlong *)0x0) {
          plVar19 = &local_358;
        }
        (**(code **)(*plVar19 + 0x10))();
        ppplVar10 = uStack_370;
      }
      uStack_370._4_4_ = (undefined4)((ulonglong)ppplVar10 >> 0x20);
      if (*(longlong *)local_4c8 == 0) {
        local_429 = '\0';
      }
      else {
        local_429 = *(char *)(*(longlong *)local_4c8 + 0x160);
      }
      lVar31 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)plVar49);
      local_478 = plVar49;
      if ((lVar31 != 0) && ((*(char *)(lVar31 + 0x18) != '\x01' || (local_429 == '\n')))) {
        uStack_370 = ppplVar10;
        plVar19 = (longlong *)FUN_140d17572(local_450,local_429,&local_429);
        lVar31 = *(longlong *)(param_1 + 0xa0) + (longlong)plVar49;
        local_378._0_2_ = (undefined2)lVar31;
        local_378._2_2_ = (undefined2)((ulonglong)lVar31 >> 0x10);
        local_378._4_4_ = (undefined4)((ulonglong)lVar31 >> 0x20);
        FUN_14100c576(plVar19,&local_378);
        if (local_429 == '\n') {
          local_378._0_2_ = 0;
          local_378._2_2_ = 0;
          local_378._4_4_ = 0;
          uStack_370._0_4_ = 0;
          uStack_370._4_4_ = 0;
          local_490 = plVar19;
          FUN_148cfcd02(*(longlong *)(param_1 + 0xa0) + (longlong)plVar49,&local_378);
          plVar19 = (longlong *)
                    CONCAT44(local_378._4_4_,CONCAT22(local_378._2_2_,(undefined2)local_378));
          if ((longlong)(int)uStack_370 != 0) {
            local_440 = plVar19 + (int)uStack_370;
            do {
              puVar35 = *(undefined4 **)(*plVar19 + 8);
              if (puVar35 == (undefined4 *)0x0) {
                puVar35 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar31 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar31);
                DAT_14c947fe0 = lVar31;
              }
              FUN_140045924(DAT_14c947fe0,&local_3f8,puVar35,1);
              uVar13 = (uint)((ulonglong)local_3f8 >> 0x10);
              uVar47 = (uint)local_3f8 & 0xffff;
              uVar13 = ((uint)local_3f8 << 0x10 | uVar47) + (int)((ulonglong)local_3f8 >> 0x20) +
                       (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar47 >> 4);
              iVar48 = *(int *)(param_1 + 0x1f8);
              iVar44 = *(int *)(param_1 + 0x224);
              if (iVar48 != iVar44) {
                lVar31 = *(longlong *)(param_1 + 0x230);
                if (*(longlong *)(param_1 + 0x230) == 0) {
                  lVar31 = local_4a8;
                }
                iVar12 = *(int *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x238) - 1U & uVar13) * 4)
                ;
                if (iVar12 != -1) {
                  do {
                    lVar31 = *local_480 + (longlong)iVar12 * 0x20;
                    if (*(longlong *)(*local_480 + (longlong)iVar12 * 0x20) == local_3f8) {
                      if (lVar31 != 0) goto LAB_1440e32bb;
                      break;
                    }
                    iVar12 = *(int *)(lVar31 + 0x18);
                  } while (iVar12 != -1);
                }
              }
              if (iVar44 == 0) {
                *(int *)(param_1 + 0x1f8) = iVar48 + 1;
                if (*(int *)(param_1 + 0x1fc) == iVar48) {
                  FUN_1447711aa(local_480,iVar48);
                }
                iVar44 = *(int *)(param_1 + 0x218);
                if (iVar44 == 0) {
                  iVar12 = -1;
                }
                else {
                  iVar12 = iVar44 + 0x1e;
                  if (-1 < iVar44 + -1) {
                    iVar12 = iVar44 + -1;
                  }
                  iVar12 = iVar12 >> 5;
                }
                iVar24 = iVar44 + 1;
                iVar33 = iVar44 + 0x1f;
                if (-1 < iVar44) {
                  iVar33 = iVar44;
                }
                if (iVar33 >> 5 == iVar12) {
                  *(int *)(param_1 + 0x218) = iVar24;
                }
                else {
                  if (*(int *)(param_1 + 0x21c) <= iVar44) {
                    iVar12 = iVar44;
                    if (iVar44 + 0x20U < 0xa0) {
                      iVar24 = 0x80;
                    }
                    else {
                      uVar47 = iVar44 + 0x20U >> 5;
                      if (*(int *)(param_1 + 0x21c) + 0x1fU < 0xa0) {
                        uVar14 = 4;
                        if (4 < uVar47) {
                          uVar14 = uVar47;
                        }
                      }
                      else {
                        uVar14 = uVar47 + (uVar47 * 3 >> 3) + 0x10;
                      }
                      uVar17 = (ulonglong)(uVar14 * 4);
                      if (DAT_14c872d28 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                          uVar15 = (uint)(uVar17 + 0xf);
                          if (uVar14 < 0x1ffd) {
                            uVar17 = (ulonglong)
                                     (ushort)(&DAT_14c841d90)
                                             [0x32 - (byte)(&DAT_14c841e00)[uVar15 >> 4]];
                          }
                          else {
                            uVar29 = uVar17 + 0xf & 0xfffffffffffffff0;
                            if (uVar29 < 0x7ff1) {
                              bVar23 = (&DAT_14c841e00)[uVar15 >> 4];
                              uVar27 = 0x32;
                              if (0x32 < bVar23) {
                                uVar27 = (ulonglong)bVar23;
                              }
                              uVar43 = 0x32 - (ulonglong)bVar23;
                              do {
                                uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar43 & 0xffffffff];
                                if (((&DAT_14c841d90)[uVar43 & 0xffffffff] & 0xf) == 0)
                                goto LAB_1440e33c7;
                                lVar31 = uVar27 + 1 + uVar43;
                                uVar43 = uVar43 - 1;
                              } while (lVar31 != 0x33);
                            }
                            uVar17 = (ulonglong)DAT_14c841df8;
                            if (DAT_14c841df8 < 0x11) {
                              uVar17 = 0x10;
                            }
                            uVar17 = -uVar17 & (uVar29 + uVar17) - 1;
                          }
                        }
                        else {
                          uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                          iVar12 = *(int *)(param_1 + 0x218);
                        }
                      }
LAB_1440e33c7:
                      iVar40 = (int)(uVar17 >> 2);
                      iVar24 = iVar40 << 5;
                      if (iVar40 < (int)uVar47) {
                        iVar24 = -0x20;
                      }
                    }
                    *(int *)(param_1 + 0x21c) = iVar24;
                    FUN_1446efbd8(local_4a0,iVar12);
                    iVar24 = *(int *)(param_1 + 0x218) + 1;
                  }
                  iVar12 = iVar24 + 0x1f;
                  if (-1 < iVar24) {
                    iVar12 = iVar24;
                  }
                  *(int *)(param_1 + 0x218) = iVar24;
                  if (iVar24 % 0x20 != 0) {
                    puVar20 = *(uint **)(param_1 + 0x210);
                    if (*(uint **)(param_1 + 0x210) == (uint *)0x0) {
                      puVar20 = local_4a0;
                    }
                    bVar23 = -(char)(iVar24 % 0x20);
                    puVar20[iVar12 >> 5] =
                         (puVar20[iVar12 >> 5] << (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
                  }
                }
                lVar31 = (longlong)iVar48;
                puVar20 = *(uint **)(param_1 + 0x210);
                if (*(uint **)(param_1 + 0x210) == (uint *)0x0) {
                  puVar20 = local_4a0;
                }
                bVar23 = (byte)iVar44 & 0x1f;
                puVar20[iVar33 >> 5] =
                     puVar20[iVar33 >> 5] & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
              }
              else {
                iVar48 = *(int *)(param_1 + 0x220);
                lVar31 = (longlong)iVar48;
                iVar12 = *(int *)(*(longlong *)(param_1 + 0x1f0) + 4 + lVar31 * 0x20);
                *(int *)(param_1 + 0x220) = iVar12;
                *(int *)(param_1 + 0x224) = iVar44 + -1;
                if (iVar44 + -1 != 0) {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar12 * 0x20) =
                       0xffffffff;
                }
              }
              uVar47 = 1 << ((byte)iVar48 & 0x1f);
              puVar20 = *(uint **)(param_1 + 0x210);
              if (*(uint **)(param_1 + 0x210) == (uint *)0x0) {
                puVar20 = local_4a0;
              }
              iVar44 = iVar48 + 0x1f;
              if (-1 < iVar48) {
                iVar44 = iVar48;
              }
              puVar20[iVar44 >> 5] = puVar20[iVar44 >> 5] | uVar47;
              lVar25 = *(longlong *)(param_1 + 0x1f0);
              lVar31 = lVar31 * 0x20;
              puVar35 = (undefined4 *)(lVar25 + lVar31);
              *(longlong *)(lVar25 + lVar31) = local_3f8;
              puVar26 = (undefined8 *)(lVar25 + 8 + lVar31);
              *puVar26 = 0;
              puVar26[1] = 0;
              *(undefined4 *)(lVar25 + 0x18 + lVar31) = 0xffffffff;
              uVar14 = *(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 0x224);
              local_4c0 = (longlong *)(longlong)iVar48;
              if (1 < uVar14) {
                lVar31 = *(longlong *)(param_1 + 0x230);
                if (*(longlong *)(param_1 + 0x230) == 0) {
                  lVar31 = local_4a8;
                }
                iVar12 = *(int *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x238) - 1U & uVar13) * 4)
                ;
                if (iVar12 != -1) {
                  do {
                    puVar3 = (undefined4 *)(*local_480 + (longlong)iVar12 * 0x20);
                    if (*(longlong *)(*local_480 + (longlong)iVar12 * 0x20) == local_3f8) {
                      if (*(longlong *)(puVar3 + 2) != 0) {
                        FUN_1400020a8();
                      }
                      uVar39 = *puVar35;
                      uVar6 = puVar35[1];
                      uVar7 = puVar35[2];
                      uVar8 = puVar35[3];
                      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar35 + 4);
                      *puVar3 = uVar39;
                      puVar3[1] = uVar6;
                      puVar3[2] = uVar7;
                      puVar3[3] = uVar8;
                      lVar31 = *(longlong *)(param_1 + 0x1f0);
                      if (*(int *)(param_1 + 0x224) != 0) {
                        *(int *)(lVar31 + (longlong)*(int *)(param_1 + 0x220) * 0x20) = iVar48;
                      }
                      *(undefined4 *)(lVar31 + (longlong)local_4c0 * 0x20) = 0xffffffff;
                      if (*(int *)(param_1 + 0x224) < 1) {
                        uVar39 = 0xffffffff;
                      }
                      else {
                        uVar39 = *(undefined4 *)(param_1 + 0x220);
                      }
                      *(undefined4 *)(lVar31 + (longlong)local_4c0 * 0x20 + 4) = uVar39;
                      *(int *)(param_1 + 0x220) = iVar48;
                      *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
                      puVar20 = *(uint **)(param_1 + 0x210);
                      if (*(uint **)(param_1 + 0x210) == (uint *)0x0) {
                        puVar20 = local_4a0;
                      }
                      puVar20[iVar44 >> 5] = puVar20[iVar44 >> 5] & ~uVar47;
                      goto LAB_1440e329a;
                    }
                    iVar12 = puVar3[6];
                  } while (iVar12 != -1);
                }
              }
              uVar47 = 1;
              if (3 < uVar14) {
                uVar17 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
                lVar31 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                  }
                }
                uVar47 = 1 << ((byte)lVar31 & 0x1f);
              }
              if (((int)uVar14 < 1) || ((int)uVar47 <= *(int *)(param_1 + 0x238))) {
                uVar13 = *(int *)(param_1 + 0x238) - 1U & uVar13;
                puVar35[7] = uVar13;
                lVar31 = *(longlong *)(param_1 + 0x230);
                if (*(longlong *)(param_1 + 0x230) == 0) {
                  lVar31 = local_4a8;
                }
                puVar35[6] = *(undefined4 *)
                              (lVar31 + ((longlong)*(int *)(param_1 + 0x238) - 1U &
                                        (longlong)(int)uVar13) * 4);
                lVar31 = *(longlong *)(param_1 + 0x230);
                if (*(longlong *)(param_1 + 0x230) == 0) {
                  lVar31 = local_4a8;
                }
                *(int *)(lVar31 + ((longlong)*(int *)(param_1 + 0x238) - 1U & (longlong)(int)uVar13)
                                  * 4) = iVar48;
              }
              else {
                *(uint *)(param_1 + 0x238) = uVar47;
                if (*(longlong *)(param_1 + 0x230) != 0) {
                  FUN_1446efa72(local_488,0,0,4);
                  uVar47 = *(uint *)(param_1 + 0x238);
                }
                lVar31 = local_4a8;
                if (uVar47 != 0) {
                  if (uVar47 == 1) {
                    if (*local_488 != 0) {
                      FUN_1446efa72(local_488,0,0,4);
                    }
LAB_1440e2f2b:
                    uVar13 = 0;
                    do {
                      lVar25 = *(longlong *)(param_1 + 0x230);
                      if (*(longlong *)(param_1 + 0x230) == 0) {
                        lVar25 = lVar31;
                      }
                      *(undefined4 *)
                       (lVar25 + (ulonglong)(*(int *)(param_1 + 0x238) + 0x7fffffffU & uVar13) * 4)
                           = 0xffffffff;
                      uVar13 = uVar13 + 1;
                    } while (uVar47 != uVar13);
                  }
                  else {
                    FUN_1446efa72(local_488,0,uVar47,4);
                    lVar31 = local_4a8;
                    if (0 < (int)uVar47) goto LAB_1440e2f2b;
                  }
                  iVar44 = *(int *)(param_1 + 0x218);
                  if (iVar44 == 0) {
                    uVar17 = 0;
                    uVar29 = 1;
                    iVar12 = 0;
                    iVar48 = 0;
                  }
                  else {
                    puVar20 = *(uint **)(param_1 + 0x210);
                    if (*(uint **)(param_1 + 0x210) == (uint *)0x0) {
                      puVar20 = local_4a0;
                    }
                    uVar13 = *puVar20;
                    if (uVar13 == 0) {
                      iVar48 = iVar44 + 0x1e;
                      if (-1 < iVar44 + -1) {
                        iVar48 = iVar44 + -1;
                      }
                      uVar17 = 0;
                      uVar29 = (ulonglong)(uint)(iVar48 >> 5);
                      if (iVar48 >> 5 < 1) {
                        uVar29 = uVar17;
                      }
                      iVar12 = 0;
                      do {
                        if (uVar29 == uVar17) goto LAB_1440e329a;
                        iVar12 = iVar12 + 0x20;
                        uVar13 = puVar20[uVar17 + 1];
                        uVar17 = uVar17 + 1;
                      } while (uVar13 == 0);
                    }
                    else {
                      uVar17 = 0;
                      iVar12 = 0;
                    }
                    uVar29 = (ulonglong)(-uVar13 & uVar13);
                    uVar27 = uVar29 * 2 + 1;
                    lVar31 = 0x3f;
                    if (uVar27 != 0) {
                      for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                      }
                    }
                    iVar48 = (iVar12 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                    if (iVar44 <= iVar48) {
                      iVar48 = iVar44;
                    }
                  }
                  if (iVar48 < iVar44) {
                    uVar13 = 0xffffffff;
                    do {
                      lVar31 = *(longlong *)(param_1 + 0x1f0);
                      lVar46 = (longlong)iVar48 * 0x20;
                      uVar18 = *(undefined8 *)(lVar31 + lVar46);
                      uVar47 = (uint)((ulonglong)uVar18 >> 0x10);
                      uVar14 = (uint)uVar18 & 0xffff;
                      uVar27 = (longlong)
                               (int)(((uint)uVar18 << 0x10 | uVar14) +
                                     (int)((ulonglong)uVar18 >> 0x20) +
                                     (uVar47 << 0x13 | uVar47 & 0xffff) + (uVar14 >> 4)) &
                               (longlong)*(int *)(param_1 + 0x238) - 1U;
                      iVar44 = (int)uVar27;
                      *(int *)(lVar31 + 0x1c + lVar46) = iVar44;
                      lVar25 = *(longlong *)(param_1 + 0x230);
                      if (*(longlong *)(param_1 + 0x230) == 0) {
                        lVar25 = local_4a8;
                      }
                      *(undefined4 *)(lVar31 + 0x18 + lVar46) =
                           *(undefined4 *)
                            (lVar25 + ((longlong)*(int *)(param_1 + 0x238) - 1U & uVar27) * 4);
                      lVar31 = *(longlong *)(param_1 + 0x230);
                      if (*(longlong *)(param_1 + 0x230) == 0) {
                        lVar31 = local_4a8;
                      }
                      *(int *)(lVar31 + ((longlong)iVar44 & (longlong)*(int *)(param_1 + 0x238) - 1U
                                        ) * 4) = iVar48;
                      uVar13 = ~(uint)uVar29 & uVar13;
                      puVar20 = *(uint **)(param_1 + 0x210);
                      if (*(uint **)(param_1 + 0x210) == (uint *)0x0) {
                        puVar20 = local_4a0;
                      }
                      iVar44 = *(int *)(param_1 + 0x218);
                      iVar48 = (int)uVar17;
                      lVar31 = (longlong)iVar48;
                      uVar47 = puVar20[lVar31] & uVar13;
                      if (uVar47 == 0) {
                        iVar24 = iVar44 + 0x1e;
                        if (-1 < iVar44 + -1) {
                          iVar24 = iVar44 + -1;
                        }
                        iVar24 = iVar24 >> 5;
                        iVar33 = iVar24;
                        if (iVar24 < iVar48) {
                          iVar33 = iVar48;
                        }
                        if (iVar24 <= iVar48) break;
                        lVar25 = 0;
                        while( true ) {
                          iVar12 = iVar12 + 0x20;
                          uVar47 = puVar20[lVar31 + lVar25 + 1];
                          if (uVar47 != 0) break;
                          lVar25 = lVar25 + 1;
                          if (iVar33 - lVar31 == lVar25) goto LAB_1440e329a;
                        }
                        uVar17 = (ulonglong)(iVar48 + (int)lVar25 + 1);
                        uVar13 = 0xffffffff;
                      }
                      uVar29 = (ulonglong)(-uVar47 & uVar47);
                      uVar27 = uVar29 * 2 + 1;
                      lVar31 = 0x3f;
                      if (uVar27 != 0) {
                        for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                        }
                      }
                      iVar48 = (iVar12 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                    } while (iVar48 < iVar44);
                  }
                }
              }
LAB_1440e329a:
              lVar31 = *local_480 + (longlong)local_4c0 * 0x20;
LAB_1440e32bb:
              lVar25 = local_490[1];
              iVar44 = *(int *)(lVar31 + 0x10);
              *(uint *)(lVar31 + 0x10) = iVar44 + 1U;
              if (*(uint *)(lVar31 + 0x14) < iVar44 + 1U) {
                FUN_1405b572a((longlong *)(lVar31 + 8),iVar44);
              }
              *(short *)(*(longlong *)(lVar31 + 8) + (longlong)iVar44 * 2) = (short)(int)lVar25 + -1
              ;
              plVar19 = plVar19 + 1;
            } while (plVar19 != local_440);
            plVar19 = (longlong *)
                      CONCAT44(local_378._4_4_,CONCAT22(local_378._2_2_,(undefined2)local_378));
            plVar22 = local_4b8;
          }
          if (plVar19 != (longlong *)0x0) {
            FUN_1400020a8(plVar19);
          }
        }
      }
      lVar31 = *(longlong *)local_4c8;
      if (lVar31 == 0) {
        local_378._0_2_ = 0;
        local_378._4_4_ = 0;
        uStack_370._0_4_ = 0;
        local_368 = (longlong *)0x0;
        uStack_360 = 0;
        local_358 = (undefined **)((ulonglong)local_358._4_4_ << 0x20);
        local_350 = (undefined8 *)0x0;
        uStack_348 = 0;
      }
      else {
        local_368 = (longlong *)0x0;
        uStack_360 = 0;
        local_358 = (undefined **)((ulonglong)local_358._4_4_ << 0x20);
        local_350 = (undefined8 *)0x0;
        uStack_348 = 0;
        uStack_370._0_4_ = *(undefined4 *)(lVar31 + 0xe8);
        uVar18 = *(undefined8 *)(lVar31 + 0xe0);
        local_378._0_2_ = (undefined2)uVar18;
        local_378._2_2_ = (undefined2)((ulonglong)uVar18 >> 0x10);
        local_378._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
        FUN_1447715ec(&local_368,lVar31 + 0xf0);
      }
      cVar11 = FUN_140114204(&local_378);
      uVar17 = uStack_420;
      if (cVar11 != '\0') {
        if (local_429 == '\x01') {
          lVar31 = (longlong)(int)uStack_420;
          uVar13 = (int)uStack_420 + 1;
          uStack_420 = CONCAT44(uStack_420._4_4_,uVar13);
          if (uStack_420._4_4_ < uVar13) {
            FUN_14100c5e2(&local_428,uVar17 & 0xffffffff);
          }
          local_428[lVar31] = (longlong)local_4c8;
        }
        else {
          local_3f8 = 0;
          uStack_3f0 = 0;
          local_3e8 = 0;
          local_3e0 = 0;
          uStack_3d8 = 0;
          uVar17 = (ulonglong)local_368._4_4_;
          if (0 < (int)local_368._4_4_) {
            uVar29 = 0;
            do {
              if (((int)local_368 == 0) || ((int)local_368 == DAT_14c948000)) {
                local_430 = DAT_14c948620;
                local_438 = DAT_14c948618;
              }
              else {
                puVar26 = &uStack_360;
                if (0 < uStack_348._4_4_) {
                  puVar26 = local_350;
                }
                if (1 < (int)uVar17) {
                  puVar26 = local_350;
                }
                local_438 = *(undefined8 *)((longlong)puVar26 + uVar29 * 0xc);
                local_430 = *(undefined4 *)((longlong)puVar26 + uVar29 * 0xc + 8);
              }
              FUN_144928d62(&local_3f8,uVar29 & 0xffffffff,&local_438);
              iVar44 = iStack_398;
              uVar17 = uStack_3c0;
              if (2 < uVar29) {
                uVar13 = (uint)local_3f8;
                iVar48 = (int)uStack_3c0;
                if ((int)uStack_3c0 != local_394) {
                  puVar45 = local_388;
                  if (local_388 == (undefined1 *)0x0) {
                    puVar45 = local_390;
                  }
                  iVar12 = *(int *)(puVar45 + (ulonglong)(local_380 - 1 & (uint)local_3f8) * 4);
                  while (iVar12 != -1) {
                    pplVar37 = local_3c8 + (longlong)iVar12 * 8;
                    if (*(uint *)(local_3c8 + (longlong)iVar12 * 8) == (uint)local_3f8) {
                      if (pplVar37 != (longlong **)0x0) goto LAB_1440e2456;
                      break;
                    }
                    iVar12 = *(int *)(pplVar37 + 7);
                  }
                }
                if (local_394 == 0) {
                  uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(int)uStack_3c0 + 1);
                  if (uStack_3c0._4_4_ == iVar48) {
                    FUN_1406cd6a8(&local_3c8,uVar17 & 0xffffffff);
                  }
                  iVar44 = local_3a0;
                  if (local_3a0 == 0) {
                    iVar12 = -1;
                  }
                  else {
                    iVar12 = local_3a0 + 0x1e;
                    if (-1 < local_3a0 + -1) {
                      iVar12 = local_3a0 + -1;
                    }
                    iVar12 = iVar12 >> 5;
                  }
                  iVar24 = local_3a0 + 1;
                  iVar33 = local_3a0 + 0x1f;
                  if (-1 < local_3a0) {
                    iVar33 = local_3a0;
                  }
                  if (iVar33 >> 5 == iVar12) {
                    local_3a0 = iVar24;
                  }
                  else {
                    if ((int)local_39c <= local_3a0) {
                      if (local_3a0 + 0x20U < 0xa0) {
                        local_39c = 0x80;
                      }
                      else {
                        uVar47 = local_3a0 + 0x20U >> 5;
                        if (local_39c + 0x1f < 0xa0) {
                          uVar14 = 4;
                          if (4 < uVar47) {
                            uVar14 = uVar47;
                          }
                        }
                        else {
                          uVar14 = uVar47 + (uVar47 * 3 >> 3) + 0x10;
                        }
                        uVar17 = (ulonglong)(uVar14 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar15 = (uint)(uVar17 + 0xf);
                            if (uVar14 < 0x1ffd) {
                              uVar17 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar15 >> 4]];
                            }
                            else {
                              uVar27 = uVar17 + 0xf & 0xfffffffffffffff0;
                              if (uVar27 < 0x7ff1) {
                                bVar23 = (&DAT_14c841e00)[uVar15 >> 4];
                                uVar43 = 0x32;
                                if (0x32 < bVar23) {
                                  uVar43 = (ulonglong)bVar23;
                                }
                                uVar42 = 0x32 - (ulonglong)bVar23;
                                do {
                                  uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar42 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar42 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_1440e25f3;
                                  lVar31 = uVar43 + 1 + uVar42;
                                  uVar42 = uVar42 - 1;
                                } while (lVar31 != 0x33);
                              }
                              uVar17 = (ulonglong)DAT_14c841df8;
                              if (DAT_14c841df8 < 0x11) {
                                uVar17 = 0x10;
                              }
                              uVar17 = -uVar17 & (uVar27 + uVar17) - 1;
                            }
                          }
                          else {
                            uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                          }
                        }
LAB_1440e25f3:
                        iVar12 = (int)(uVar17 >> 2);
                        local_39c = iVar12 << 5;
                        if (iVar12 < (int)uVar47) {
                          local_39c = 0xffffffe0;
                        }
                      }
                      FUN_1446efbd8(local_3b8,local_3a0);
                      iVar24 = local_3a0 + 1;
                    }
                    iVar12 = iVar24 + 0x1f;
                    if (-1 < iVar24) {
                      iVar12 = iVar24;
                    }
                    local_3a0 = iVar24;
                    if (iVar24 % 0x20 != 0) {
                      puVar20 = local_3a8;
                      if (local_3a8 == (uint *)0x0) {
                        puVar20 = local_3b8;
                      }
                      bVar23 = -(char)(iVar24 % 0x20);
                      puVar20[iVar12 >> 5] =
                           (puVar20[iVar12 >> 5] << (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
                    }
                  }
                  lVar31 = (longlong)iVar48;
                  puVar20 = local_3a8;
                  if (local_3a8 == (uint *)0x0) {
                    puVar20 = local_3b8;
                  }
                  bVar23 = (byte)iVar44 & 0x1f;
                  puVar20[iVar33 >> 5] =
                       puVar20[iVar33 >> 5] & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
                  iVar44 = iVar48;
                }
                else {
                  lVar31 = (longlong)iStack_398;
                  iStack_398 = *(int *)((longlong)local_3c8 + lVar31 * 0x40 + 4);
                  local_394 = local_394 + -1;
                  if (local_394 != 0) {
                    *(undefined4 *)(local_3c8 + (longlong)iStack_398 * 8) = 0xffffffff;
                  }
                }
                pplVar37 = local_3c8;
                uVar47 = 1 << ((byte)iVar44 & 0x1f);
                puVar20 = local_3a8;
                if (local_3a8 == (uint *)0x0) {
                  puVar20 = local_3b8;
                }
                iVar48 = iVar44 + 0x1f;
                if (-1 < iVar44) {
                  iVar48 = iVar44;
                }
                local_490 = (longlong *)(longlong)(iVar48 >> 5);
                puVar20[(longlong)local_490] = puVar20[(longlong)local_490] | uVar47;
                pplVar2 = local_3c8 + lVar31 * 8;
                FUN_1447a97f4(pplVar2,&local_3f8);
                pplVar4 = pplVar37 + lVar31 * 8 + 5;
                *pplVar4 = (longlong *)0x0;
                pplVar4[1] = (longlong *)0x0;
                *(undefined4 *)(pplVar37 + lVar31 * 8 + 7) = 0xffffffff;
                uVar14 = (int)uStack_3c0 - local_394;
                local_4c0 = (longlong *)(longlong)iVar44;
                if (1 < uVar14) {
                  puVar45 = local_388;
                  if (local_388 == (undefined1 *)0x0) {
                    puVar45 = local_390;
                  }
                  iVar48 = *(int *)(puVar45 + (ulonglong)(local_380 - 1 & uVar13) * 4);
                  if (iVar48 != -1) {
                    do {
                      pplVar37 = local_3c8 + (longlong)iVar48 * 8;
                      if (*(int *)(local_3c8 + (longlong)iVar48 * 8) == *(int *)pplVar2) {
                        if (pplVar37[5] != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                        if (pplVar37[3] != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                        iVar48 = *(int *)pplVar2;
                        iVar12 = *(int *)((longlong)pplVar2 + 4);
                        iVar24 = *(int *)(pplVar2 + 1);
                        iVar33 = *(int *)((longlong)pplVar2 + 0xc);
                        plVar22 = pplVar2[2];
                        plVar19 = pplVar2[3];
                        plVar49 = pplVar2[4];
                        plVar21 = pplVar2[5];
                        pplVar37[6] = pplVar2[6];
                        pplVar37[4] = plVar49;
                        pplVar37[5] = plVar21;
                        pplVar37[2] = plVar22;
                        pplVar37[3] = plVar19;
                        *(int *)pplVar37 = iVar48;
                        *(int *)((longlong)pplVar37 + 4) = iVar12;
                        *(int *)(pplVar37 + 1) = iVar24;
                        *(int *)((longlong)pplVar37 + 0xc) = iVar33;
                        if (local_394 != 0) {
                          *(int *)(local_3c8 + (longlong)iStack_398 * 8) = iVar44;
                        }
                        *(undefined4 *)(local_3c8 + (longlong)local_4c0 * 8) = 0xffffffff;
                        iVar48 = -1;
                        if (0 < local_394) {
                          iVar48 = iStack_398;
                        }
                        *(int *)((longlong)local_3c8 + (longlong)local_4c0 * 0x40 + 4) = iVar48;
                        iStack_398 = iVar44;
                        local_394 = local_394 + 1;
                        puVar20 = local_3a8;
                        if (local_3a8 == (uint *)0x0) {
                          puVar20 = local_3b8;
                        }
                        puVar20[(longlong)local_490] =
                             puVar20[(longlong)local_490] & (uVar47 ^ 0xffffffff);
                        goto LAB_1440e243d;
                      }
                      iVar48 = *(int *)(pplVar37 + 7);
                    } while (iVar48 != -1);
                  }
                }
                uVar47 = 1;
                if (3 < uVar14) {
                  uVar17 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
                  lVar31 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                    }
                  }
                  uVar47 = 1 << ((byte)lVar31 & 0x1f);
                }
                if (((int)uVar14 < 1) || ((int)uVar47 <= (int)local_380)) {
                  uVar13 = local_380 - 1 & uVar13;
                  *(uint *)((longlong)pplVar2 + 0x3c) = uVar13;
                  puVar45 = local_388;
                  if (local_388 == (undefined1 *)0x0) {
                    puVar45 = local_390;
                  }
                  *(int *)(pplVar2 + 7) =
                       *(int *)(puVar45 +
                               ((longlong)(int)local_380 - 1U & (longlong)(int)uVar13) * 4);
                  puVar45 = local_388;
                  if (local_388 == (undefined1 *)0x0) {
                    puVar45 = local_390;
                  }
                  *(int *)(puVar45 + ((longlong)(int)local_380 - 1U & (longlong)(int)uVar13) * 4) =
                       iVar44;
                }
                else {
                  local_380 = uVar47;
                  if (local_388 != (undefined1 *)0x0) {
                    FUN_1446efa72(&local_388,0,0,4);
                  }
                  uVar13 = local_380;
                  if (local_380 != 0) {
                    if (local_380 == 1) {
                      if (local_388 != (undefined1 *)0x0) {
                        FUN_1446efa72(&local_388,0,0,4);
                      }
LAB_1440e2125:
                      uVar47 = 0;
                      do {
                        puVar45 = local_388;
                        if (local_388 == (undefined1 *)0x0) {
                          puVar45 = local_390;
                        }
                        *(undefined4 *)(puVar45 + (ulonglong)(local_380 + 0x7fffffff & uVar47) * 4)
                             = 0xffffffff;
                        uVar47 = uVar47 + 1;
                      } while (uVar13 != uVar47);
                    }
                    else {
                      FUN_1446efa72(&local_388,0,local_380,4);
                      if (0 < (int)uVar13) goto LAB_1440e2125;
                    }
                    if (local_3a0 == 0) {
                      uVar17 = 0;
                      uVar27 = 1;
                      iVar48 = 0;
                      iVar44 = 0;
                    }
                    else {
                      puVar20 = local_3a8;
                      if (local_3a8 == (uint *)0x0) {
                        puVar20 = local_3b8;
                      }
                      uVar13 = *puVar20;
                      if (uVar13 == 0) {
                        iVar44 = local_3a0 + 0x1e;
                        if (-1 < local_3a0 + -1) {
                          iVar44 = local_3a0 + -1;
                        }
                        uVar17 = 0;
                        uVar27 = (ulonglong)(uint)(iVar44 >> 5);
                        if (iVar44 >> 5 < 1) {
                          uVar27 = uVar17;
                        }
                        iVar48 = 0;
                        do {
                          if (uVar27 == uVar17) goto LAB_1440e243d;
                          iVar48 = iVar48 + 0x20;
                          uVar13 = puVar20[uVar17 + 1];
                          uVar17 = uVar17 + 1;
                        } while (uVar13 == 0);
                      }
                      else {
                        uVar17 = 0;
                        iVar48 = 0;
                      }
                      uVar27 = (ulonglong)(-uVar13 & uVar13);
                      uVar43 = uVar27 * 2 + 1;
                      lVar31 = 0x3f;
                      if (uVar43 != 0) {
                        for (; uVar43 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                        }
                      }
                      iVar44 = (iVar48 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                      if (local_3a0 <= iVar44) {
                        iVar44 = local_3a0;
                      }
                    }
                    if (iVar44 < local_3a0) {
                      puVar45 = &DAT_ffffffff;
                      do {
                        lVar31 = (longlong)iVar44;
                        uVar43 = (longlong)(int)local_380 - 1U &
                                 (longlong)*(int *)(local_3c8 + lVar31 * 8);
                        iVar12 = (int)uVar43;
                        *(int *)((longlong)local_3c8 + lVar31 * 0x40 + 0x3c) = iVar12;
                        puVar36 = local_388;
                        if (local_388 == (undefined1 *)0x0) {
                          puVar36 = local_390;
                        }
                        *(undefined4 *)(local_3c8 + lVar31 * 8 + 7) =
                             *(undefined4 *)(puVar36 + ((longlong)(int)local_380 - 1U & uVar43) * 4)
                        ;
                        puVar36 = local_388;
                        if (local_388 == (undefined1 *)0x0) {
                          puVar36 = local_390;
                        }
                        *(int *)(puVar36 + ((longlong)iVar12 & (longlong)(int)local_380 - 1U) * 4) =
                             iVar44;
                        uVar13 = ~(uint)uVar27 & (uint)puVar45;
                        puVar20 = local_3a8;
                        if (local_3a8 == (uint *)0x0) {
                          puVar20 = local_3b8;
                        }
                        iVar44 = (int)uVar17;
                        lVar31 = (longlong)iVar44;
                        uVar47 = puVar20[lVar31] & uVar13;
                        if (uVar47 == 0) {
                          iVar12 = local_3a0 + 0x1e;
                          if (-1 < local_3a0 + -1) {
                            iVar12 = local_3a0 + -1;
                          }
                          iVar12 = iVar12 >> 5;
                          iVar24 = iVar12;
                          if (iVar12 < iVar44) {
                            iVar24 = iVar44;
                          }
                          if (iVar12 <= iVar44) break;
                          lVar25 = 0;
                          while( true ) {
                            iVar48 = iVar48 + 0x20;
                            uVar47 = puVar20[lVar31 + lVar25 + 1];
                            if (uVar47 != 0) break;
                            lVar25 = lVar25 + 1;
                            if (iVar24 - lVar31 == lVar25) goto LAB_1440e243d;
                          }
                          uVar17 = (ulonglong)(iVar44 + (int)lVar25 + 1);
                          uVar13 = 0xffffffff;
                        }
                        puVar45 = (undefined1 *)(ulonglong)uVar13;
                        uVar27 = (ulonglong)(-uVar47 & uVar47);
                        uVar43 = uVar27 * 2 + 1;
                        lVar31 = 0x3f;
                        if (uVar43 != 0) {
                          for (; uVar43 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                          }
                        }
                        iVar44 = (iVar48 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                      } while (iVar44 < local_3a0);
                    }
                  }
                }
LAB_1440e243d:
                pplVar37 = local_3c8 + (longlong)local_4c0 * 8;
LAB_1440e2456:
                iVar44 = *(int *)(pplVar37 + 6);
                *(uint *)(pplVar37 + 6) = iVar44 + 1U;
                if (*(uint *)((longlong)pplVar37 + 0x34) < iVar44 + 1U) {
                  FUN_14100c5e2(pplVar37 + 5,iVar44);
                }
                pplVar37[5][iVar44] = (longlong)local_4c8;
                plVar22 = local_4b8;
              }
              uVar29 = uVar29 + 1;
              uVar17 = (ulonglong)(int)local_368._4_4_;
            } while ((longlong)uVar29 < (longlong)uVar17);
            if (local_3e0 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      lVar31 = *(longlong *)(param_1 + 0xa0) + (longlong)local_478;
      if (*(longlong *)local_4c8 == 0) {
        local_3f8 = 0;
      }
      else {
        puVar35 = *(undefined4 **)(*(longlong *)local_4c8 + 8);
        if (puVar35 == (undefined4 *)0x0) {
          puVar35 = &DAT_14c9485f0;
        }
        if (DAT_14c947fe0 == 0) {
          lVar25 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar25);
          DAT_14c947fe0 = lVar25;
        }
        FUN_140045924(DAT_14c947fe0,&local_3f8,puVar35,1);
      }
      uVar13 = (uint)((ulonglong)local_3f8 >> 0x10);
      uVar47 = (uint)local_3f8 & 0xffff;
      uVar13 = ((uint)local_3f8 << 0x10 | uVar47) + (int)((ulonglong)local_3f8 >> 0x20) +
               (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar47 >> 4);
      iVar44 = *(int *)(param_1 + 0x298);
      iVar48 = *(int *)(param_1 + 0x2c4);
      if (iVar44 != iVar48) {
        plVar19 = *(longlong **)(param_1 + 0x2d0);
        if (*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) {
          plVar19 = local_4b0;
        }
        iVar12 = *(int *)((longlong)plVar19 +
                         (ulonglong)(*(int *)(param_1 + 0x2d8) - 1U & uVar13) * 4);
        if (iVar12 != -1) {
          do {
            plVar19 = (longlong *)(*(longlong *)local_4d0 + (longlong)iVar12 * 0x18);
            if (*plVar19 == local_3f8) {
              if (plVar19 != (longlong *)0x0) goto LAB_1440e29e2;
              break;
            }
            iVar12 = (int)plVar19[2];
          } while (iVar12 != -1);
        }
      }
      if (iVar48 == 0) {
        *(int *)(param_1 + 0x298) = iVar44 + 1;
        if (*(int *)(param_1 + 0x29c) == iVar44) {
          FUN_14482b872(local_4d0,iVar44);
        }
        iVar48 = *(int *)(param_1 + 0x2b8);
        if (iVar48 == 0) {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar48 + 0x1e;
          if (-1 < iVar48 + -1) {
            iVar12 = iVar48 + -1;
          }
          iVar12 = iVar12 >> 5;
        }
        iVar24 = iVar48 + 1;
        iVar33 = iVar48 + 0x1f;
        if (-1 < iVar48) {
          iVar33 = iVar48;
        }
        if (iVar33 >> 5 == iVar12) {
          *(int *)(param_1 + 0x2b8) = iVar24;
        }
        else {
          if (*(int *)(param_1 + 700) <= iVar48) {
            iVar12 = iVar48;
            if (iVar48 + 0x20U < 0xa0) {
              iVar24 = 0x80;
            }
            else {
              uVar47 = iVar48 + 0x20U >> 5;
              if (*(int *)(param_1 + 700) + 0x1fU < 0xa0) {
                uVar14 = 4;
                if (4 < uVar47) {
                  uVar14 = uVar47;
                }
              }
              else {
                uVar14 = uVar47 + (uVar47 * 3 >> 3) + 0x10;
              }
              uVar17 = (ulonglong)(uVar14 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar15 = (uint)(uVar17 + 0xf);
                  if (uVar14 < 0x1ffd) {
                    uVar17 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 >> 4]];
                  }
                  else {
                    uVar29 = uVar17 + 0xf & 0xfffffffffffffff0;
                    if (uVar29 < 0x7ff1) {
                      bVar23 = (&DAT_14c841e00)[uVar15 >> 4];
                      uVar27 = 0x32;
                      if (0x32 < bVar23) {
                        uVar27 = (ulonglong)bVar23;
                      }
                      uVar43 = 0x32 - (ulonglong)bVar23;
                      do {
                        uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar43 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar43 & 0xffffffff] & 0xf) == 0) goto LAB_1440e35e1;
                        lVar25 = uVar27 + 1 + uVar43;
                        uVar43 = uVar43 - 1;
                      } while (lVar25 != 0x33);
                    }
                    uVar17 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar17 = 0x10;
                    }
                    uVar17 = -uVar17 & (uVar29 + uVar17) - 1;
                  }
                }
                else {
                  uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                  iVar12 = *(int *)(param_1 + 0x2b8);
                }
              }
LAB_1440e35e1:
              iVar40 = (int)(uVar17 >> 2);
              iVar24 = iVar40 << 5;
              if (iVar40 < (int)uVar47) {
                iVar24 = -0x20;
              }
            }
            plVar22 = local_4b8;
            *(int *)(param_1 + 700) = iVar24;
            FUN_1446efbd8(local_4b8,iVar12);
            iVar24 = *(int *)(param_1 + 0x2b8) + 1;
          }
          iVar12 = iVar24 + 0x1f;
          if (-1 < iVar24) {
            iVar12 = iVar24;
          }
          *(int *)(param_1 + 0x2b8) = iVar24;
          if (iVar24 % 0x20 != 0) {
            plVar19 = *(longlong **)(param_1 + 0x2b0);
            if (*(longlong **)(param_1 + 0x2b0) == (longlong *)0x0) {
              plVar19 = plVar22;
            }
            bVar23 = -(char)(iVar24 % 0x20);
            *(uint *)((longlong)plVar19 + (longlong)(iVar12 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar12 >> 5) * 4) << (bVar23 & 0x1f)
                       ) >> (bVar23 & 0x1f);
          }
        }
        lVar25 = (longlong)iVar44;
        plVar19 = *(longlong **)(param_1 + 0x2b0);
        if (*(longlong **)(param_1 + 0x2b0) == (longlong *)0x0) {
          plVar19 = plVar22;
        }
        bVar23 = (byte)iVar48 & 0x1f;
        puVar20 = (uint *)((longlong)plVar19 + (longlong)(iVar33 >> 5) * 4);
        *puVar20 = *puVar20 & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
      }
      else {
        iVar44 = *(int *)(param_1 + 0x2c0);
        lVar25 = (longlong)iVar44;
        iVar12 = *(int *)(*(longlong *)(param_1 + 0x290) + 4 + lVar25 * 0x18);
        *(int *)(param_1 + 0x2c0) = iVar12;
        *(int *)(param_1 + 0x2c4) = iVar48 + -1;
        plVar22 = local_4b8;
        if (iVar48 + -1 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar12 * 0x18) = 0xffffffff;
        }
      }
      plVar19 = *(longlong **)(param_1 + 0x2b0);
      if (*(longlong **)(param_1 + 0x2b0) == (longlong *)0x0) {
        plVar19 = plVar22;
      }
      iVar48 = iVar44 + 0x1f;
      if (-1 < iVar44) {
        iVar48 = iVar44;
      }
      puVar20 = (uint *)((longlong)plVar19 + (longlong)(iVar48 >> 5) * 4);
      *puVar20 = *puVar20 | 1 << ((byte)iVar44 & 0x1f);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x290) + lVar25 * 0x18);
      *plVar19 = local_3f8;
      plVar19[1] = 0;
      *(undefined4 *)(plVar19 + 2) = 0xffffffff;
      uVar47 = *(int *)(param_1 + 0x298) - *(int *)(param_1 + 0x2c4);
      if ((uVar47 != 0) && (uVar47 != 1)) {
        plVar49 = *(longlong **)(param_1 + 0x2d0);
        if (*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) {
          plVar49 = local_4b0;
        }
        iVar48 = *(int *)((longlong)plVar49 +
                         (ulonglong)(*(int *)(param_1 + 0x2d8) - 1U & uVar13) * 4);
        if (iVar48 != -1) {
          do {
            plVar49 = (longlong *)(*(longlong *)local_4d0 + (longlong)iVar48 * 0x18);
            if (*plVar49 == local_3f8) {
              uVar39 = *(undefined4 *)((longlong)plVar19 + 4);
              lVar25 = plVar19[1];
              uVar6 = *(undefined4 *)((longlong)plVar19 + 0xc);
              *(int *)plVar49 = (int)*plVar19;
              *(undefined4 *)((longlong)plVar49 + 4) = uVar39;
              *(int *)(plVar49 + 1) = (int)lVar25;
              *(undefined4 *)((longlong)plVar49 + 0xc) = uVar6;
              FUN_148cffe02(local_4d0,iVar44);
              goto LAB_1440e29cb;
            }
            iVar48 = (int)plVar49[2];
          } while (iVar48 != -1);
        }
      }
      if (uVar47 < 4) {
        iVar48 = (int)&DAT_00000001;
      }
      else {
        uVar17 = (ulonglong)(uVar47 & 0xfffffffe) + 0xf;
        lVar25 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar48 = 1 << ((byte)lVar25 & 0x1f);
      }
      if (((int)uVar47 < 1) || (iVar48 <= *(int *)(param_1 + 0x2d8))) {
        uVar13 = *(int *)(param_1 + 0x2d8) - 1U & uVar13;
        *(uint *)((longlong)plVar19 + 0x14) = uVar13;
        plVar49 = *(longlong **)(param_1 + 0x2d0);
        if (*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) {
          plVar49 = local_4b0;
        }
        *(undefined4 *)(plVar19 + 2) =
             *(undefined4 *)
              ((longlong)plVar49 +
              ((longlong)*(int *)(param_1 + 0x2d8) - 1U & (longlong)(int)uVar13) * 4);
        plVar19 = *(longlong **)(param_1 + 0x2d0);
        if (*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) {
          plVar19 = local_4b0;
        }
        *(int *)((longlong)plVar19 +
                ((longlong)*(int *)(param_1 + 0x2d8) - 1U & (longlong)(int)uVar13) * 4) = iVar44;
      }
      else {
        *(int *)(param_1 + 0x2d8) = iVar48;
        FUN_1418e10ca(local_4d0);
      }
LAB_1440e29cb:
      plVar19 = (longlong *)(*(longlong *)local_4d0 + (longlong)iVar44 * 0x18);
LAB_1440e29e2:
      plVar49 = local_478;
      plVar19[1] = lVar31;
      lVar25 = *(longlong *)(param_1 + 0xa0);
      lVar31 = *(longlong *)(lVar25 + (longlong)local_478);
      if ((lVar31 == 0) || (*(char *)(lVar31 + 200) == '\0')) {
        iVar44 = *(int *)(param_1 + 0xd8);
        *(uint *)(param_1 + 0xd8) = iVar44 + 1U;
        if (*(uint *)(param_1 + 0xdc) < iVar44 + 1U) {
          FUN_1418e131e(local_448,iVar44);
        }
        *(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar44 * 8) =
             lVar25 + (longlong)plVar49;
        lVar25 = *(longlong *)(param_1 + 0xa0);
        lVar31 = *(longlong *)(lVar25 + (longlong)plVar49);
        if (lVar31 != 0) goto LAB_1440e2a4d;
      }
      else {
LAB_1440e2a4d:
        if (*(char *)(lVar31 + 0x11c) == '\x01') {
          iVar44 = *(int *)(param_1 + 200);
          *(uint *)(param_1 + 200) = iVar44 + 1U;
          if (*(uint *)(param_1 + 0xcc) < iVar44 + 1U) {
            FUN_1418e131e(local_458,iVar44);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar44 * 8) =
               lVar25 + (longlong)plVar49;
          *(int *)(*(longlong *)(param_1 + 0xa0) + 0x1c + (longlong)plVar49) =
               *(int *)(param_1 + 200) + -1;
          lVar25 = *(longlong *)(param_1 + 0xa0);
        }
      }
      lVar31 = FUN_140b3e1a8(lVar25 + (longlong)plVar49);
      if (lVar31 != 0) {
        lVar31 = *(longlong *)(param_1 + 0xa0);
        iVar44 = *(int *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = iVar44 + 1U;
        if (*(uint *)(param_1 + 0xec) < iVar44 + 1U) {
          FUN_1418e131e(local_460,iVar44);
        }
        *(longlong *)(*local_460 + (longlong)iVar44 * 8) = lVar31 + (longlong)plVar49;
      }
      lVar31 = *(longlong *)(param_1 + 0xa0);
      lVar25 = *(longlong *)(lVar31 + (longlong)plVar49);
      if (((lVar25 != 0) && (*(char *)(lVar25 + 0x139) == '\x01')) && (0 < *(int *)(lVar25 + 0x13c))
         ) {
        iVar44 = *(int *)(param_1 + 0xf8);
        *(uint *)(param_1 + 0xf8) = iVar44 + 1U;
        if (*(uint *)(param_1 + 0xfc) < iVar44 + 1U) {
          FUN_1418e131e(local_468,iVar44);
        }
        *(longlong *)(*local_468 + (longlong)iVar44 * 8) = lVar31 + (longlong)plVar49;
      }
      if (local_350 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      plVar19 = (longlong *)((longlong)local_470 + 1);
    } while ((longlong)plVar19 < (longlong)*(int *)(param_1 + 0xa8));
    if ((longlong)(int)uStack_420 != 0) {
      local_4c0 = local_428 + (int)uStack_420;
      local_4c8 = (byte *)(param_1 + 0x2e0);
      plVar22 = local_428;
      do {
        plVar19 = (longlong *)*plVar22;
        if (plVar19 != (longlong *)0x0) {
          lVar31 = *plVar19;
          if (lVar31 == 0) {
            local_378._0_2_ = 0;
            local_378._4_4_ = 0;
            uStack_370._0_4_ = 0;
            local_368 = (longlong *)0x0;
            uStack_360 = 0;
            local_358 = (undefined **)((ulonglong)local_358._4_4_ << 0x20);
            local_350 = (undefined8 *)0x0;
            uStack_348 = 0;
          }
          else {
            local_368 = (longlong *)0x0;
            uStack_360 = 0;
            local_358 = (undefined **)((ulonglong)local_358._4_4_ << 0x20);
            local_350 = (undefined8 *)0x0;
            uStack_348 = 0;
            uStack_370._0_4_ = *(undefined4 *)(lVar31 + 0xe8);
            uVar18 = *(undefined8 *)(lVar31 + 0xe0);
            local_378._0_2_ = (undefined2)uVar18;
            local_378._2_2_ = (undefined2)((ulonglong)uVar18 >> 0x10);
            local_378._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
            FUN_1447715ec(&local_368,lVar31 + 0xf0);
          }
          FUN_14014e996(&local_378,&local_3f8,1,0);
          if ((int)uStack_3c0 != local_394) {
            puVar45 = local_388;
            if (local_388 == (undefined1 *)0x0) {
              puVar45 = local_390;
            }
            iVar44 = *(int *)(puVar45 + (ulonglong)(local_380 - 1 & (uint)local_3f8) * 4);
            while (iVar44 != -1) {
              pplVar37 = local_3c8 + (longlong)iVar44 * 8;
              if (*(uint *)(local_3c8 + (longlong)iVar44 * 8) == (uint)local_3f8)
              goto LAB_1440e38a9;
              iVar44 = *(int *)(pplVar37 + 7);
            }
          }
          pplVar37 = (longlong **)0x0;
LAB_1440e38a9:
          if (local_3e0 != 0) {
            FUN_1400020a8();
          }
          if (local_350 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if ((pplVar37 != (longlong **)0x0) &&
             (iVar44 = *(int *)(pplVar37 + 6), (longlong)iVar44 != 0)) {
            plVar49 = pplVar37[5];
            lVar31 = 0;
            do {
              uVar17 = *(ulonglong *)((longlong)plVar49 + lVar31);
              local_378._0_2_ = (undefined2)uVar17;
              local_378._2_2_ = (undefined2)(uVar17 >> 0x10);
              local_378._4_4_ = (undefined4)(uVar17 >> 0x20);
              uVar13 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
              uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
              plVar21 = (longlong *)FUN_141534be4(local_4c8,uVar13 >> 0x10 ^ uVar13,&local_378);
              lVar25 = plVar21[1];
              uVar13 = (int)lVar25 + 1;
              *(uint *)(plVar21 + 1) = uVar13;
              if (*(uint *)((longlong)plVar21 + 0xc) < uVar13) {
                FUN_14100c5e2(plVar21);
              }
              *(longlong **)(*plVar21 + (longlong)(int)lVar25 * 8) = plVar19;
              lVar31 = lVar31 + 8;
            } while ((longlong)iVar44 * 8 != lVar31);
          }
        }
        plVar22 = plVar22 + 1;
      } while (plVar22 != local_4c0);
    }
  }
  lVar25 = local_498;
  lVar31 = *(longlong *)(local_498 + 0xa0);
  if (lVar31 == 0) {
    uVar18 = FUN_1465f39ea();
    lVar31 = FUN_14477b664(uVar18);
    *(longlong *)(lVar25 + 0xa0) = lVar31;
  }
  lVar25 = *(longlong *)(lVar25 + 0xa8);
  if (lVar25 == 0) {
    ppplVar10 = uStack_370;
    if ((lVar31 != 0) && (*(longlong *)(local_498 + 0x98) != 0)) {
      plVar22 = *(longlong **)(lVar31 + 0xb8);
      if (plVar22 != (longlong *)0x0) {
        cVar11 = (**(code **)(*plVar22 + 0x108))(plVar22);
        if (cVar11 != '\0') {
          uVar18 = (**(code **)(*plVar22 + 0x110))(plVar22);
          lVar25 = FUN_144aff482(uVar18);
          *(longlong *)(local_498 + 0xa8) = lVar25;
          ppplVar10 = uStack_370;
          if (lVar25 != 0) goto LAB_1440e39ab;
          goto LAB_1440e3fe0;
        }
      }
      *(undefined8 *)(local_498 + 0xa8) = 0;
      ppplVar10 = uStack_370;
    }
  }
  else {
LAB_1440e39ab:
    if ((longlong)*(int *)(lVar25 + 0x20) != 0) {
      lVar31 = *(longlong *)(lVar25 + 0x18);
      lVar25 = (longlong)*(int *)(lVar25 + 0x20) * 0x68 + lVar31;
      do {
        iVar44 = *(int *)(lVar31 + 0x28) + -1;
        if (*(int *)(lVar31 + 0x28) == 0) {
          iVar44 = 0;
        }
        FUN_1446f82e2(&local_378,iVar44,*(undefined8 *)(lVar31 + 0x20),1);
        local_3f8 = CONCAT44(local_378._4_4_,CONCAT22(local_378._2_2_,(undefined2)local_378));
        FUN_144a13f80(param_1 + 0x150,&local_378,&local_3f8,0);
        iVar44 = *(int *)(lVar31 + 0x48);
        if ((longlong)iVar44 != 0) {
          lVar46 = *(longlong *)(lVar31 + 0x40);
          lVar41 = 0;
          do {
            uVar18 = *(undefined8 *)(lVar46 + lVar41);
            local_378._0_2_ = (undefined2)uVar18;
            local_378._2_2_ = (undefined2)((ulonglong)uVar18 >> 0x10);
            local_378._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
            lVar32 = FUN_1403363fe(param_1);
            if (lVar32 != 0) {
              iVar48 = *(int *)(lVar32 + 0x18);
              if ((-1 < (longlong)iVar48) && (iVar48 < *(int *)(param_1 + 0xa8))) {
                *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10 + (longlong)iVar48 * 0x20) =
                     local_3f8;
              }
            }
            lVar41 = lVar41 + 0x18;
          } while ((longlong)iVar44 * 0x18 != lVar41);
        }
        lVar31 = lVar31 + 0x68;
      } while (lVar31 != lVar25);
    }
    iVar44 = *(int *)(param_1 + 0xf8);
    ppplVar10 = uStack_370;
    if (1 < (longlong)iVar44) {
      lVar31 = *(longlong *)(param_1 + 0xf0);
      memset(&local_368,0,0x2f0);
      local_378._0_2_ = (undefined2)lVar31;
      local_378._2_2_ = (undefined2)((ulonglong)lVar31 >> 0x10);
      local_378._4_4_ = (undefined4)((ulonglong)lVar31 >> 0x20);
      uStack_370 = (longlong ***)(lVar31 + (longlong)iVar44 * 8 + -8);
      fVar52 = logf((float)iVar44);
      local_368 = (longlong *)CONCAT44(local_368._4_4_,(int)(longlong)(fVar52 + fVar52));
      plVar22 = &local_378;
      do {
        plVar49 = (longlong *)*plVar22;
        plVar19 = (longlong *)plVar22[1];
        iVar44 = (int)plVar22[2];
        iVar48 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar49) >> 3);
        uVar17 = (ulonglong)(iVar48 + 1);
        if (iVar44 != 0) {
LAB_1440e3b15:
          if (8 < (int)(uint)uVar17) {
            uVar13 = (uint)uVar17 >> 1;
            lVar31 = plVar49[uVar13];
            plVar49[uVar13] = *plVar49;
            *plVar49 = lVar31;
            plVar21 = plVar49;
            plVar28 = plVar19 + 1;
            do {
              plVar21 = plVar21 + 1;
              if (plVar21 <= plVar19) {
                do {
                  if ((longlong *)*plVar49 != (longlong *)0x0 &&
                      (longlong *)*plVar21 != (longlong *)0x0) {
                    lVar31 = *(longlong *)*plVar49;
                    iVar12 = -1;
                    iVar48 = -1;
                    if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                      iVar48 = *(int *)(lVar31 + 0x13c);
                    }
                    lVar31 = *(longlong *)*plVar21;
                    if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                      iVar12 = *(int *)(lVar31 + 0x13c);
                    }
                    if (iVar12 < iVar48) break;
                  }
                  plVar21 = plVar21 + 1;
                } while (plVar21 <= plVar19);
              }
              plVar38 = plVar28 + -1;
              if (plVar49 < plVar38) {
                do {
                  plVar28 = plVar38;
                  if (((longlong *)*plVar49 != (longlong *)0x0) &&
                     ((longlong *)*plVar28 != (longlong *)0x0)) {
                    lVar31 = *(longlong *)*plVar28;
                    iVar12 = -1;
                    iVar48 = -1;
                    if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                      iVar48 = *(int *)(lVar31 + 0x13c);
                    }
                    lVar31 = *(longlong *)*plVar49;
                    if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                      iVar12 = *(int *)(lVar31 + 0x13c);
                    }
                    if (iVar12 < iVar48) {
                      plVar38 = plVar28;
                      plVar28 = plVar28 + 1;
                      break;
                    }
                  }
                  plVar38 = plVar28 + -1;
                } while (plVar49 < plVar38);
              }
              if (plVar38 < plVar21) goto LAB_1440e3c2d;
              lVar31 = *plVar21;
              *plVar21 = *plVar38;
              *plVar38 = lVar31;
              plVar28 = plVar38;
            } while( true );
          }
          for (; plVar28 = plVar49, plVar21 = plVar49, plVar49 < plVar19; plVar19 = plVar19 + -1) {
            while (plVar38 = plVar28, plVar21 = plVar21 + 1, plVar21 <= plVar19) {
              plVar28 = plVar38;
              if (((longlong *)*plVar21 != (longlong *)0x0) &&
                 ((longlong *)*plVar38 != (longlong *)0x0)) {
                lVar31 = *(longlong *)*plVar38;
                iVar48 = -1;
                iVar44 = -1;
                if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                  iVar44 = *(int *)(lVar31 + 0x13c);
                }
                lVar31 = *(longlong *)*plVar21;
                if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                  iVar48 = *(int *)(lVar31 + 0x13c);
                }
                plVar28 = plVar21;
                if (iVar44 <= iVar48) {
                  plVar28 = plVar38;
                }
              }
            }
            lVar31 = *plVar38;
            *plVar38 = *plVar19;
            *plVar19 = lVar31;
          }
          goto LAB_1440e3fab;
        }
LAB_1440e3cb5:
        iVar44 = (int)uVar17;
        if (iVar44 != 0) {
          iVar48 = (iVar48 - (iVar48 + -1 >> 0x1f)) + -1 >> 1;
          iVar12 = iVar48;
joined_r0x0001440e3cd6:
          do {
            iVar24 = iVar48 * 2 + 1;
            if (iVar24 < iVar44) {
              iVar40 = iVar48 * 2 + 2;
              iVar33 = iVar24;
              if (((iVar40 < iVar44) &&
                  (iVar33 = iVar40, (longlong *)plVar49[iVar24] != (longlong *)0x0)) &&
                 ((longlong *)plVar49[iVar40] != (longlong *)0x0)) {
                lVar31 = *(longlong *)plVar49[iVar40];
                iVar34 = -1;
                iVar30 = -1;
                if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                  iVar30 = *(int *)(lVar31 + 0x13c);
                }
                lVar31 = *(longlong *)plVar49[iVar24];
                if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                  iVar34 = *(int *)(lVar31 + 0x13c);
                }
                iVar33 = iVar24;
                if (iVar30 <= iVar34) {
                  iVar33 = iVar40;
                }
              }
              plVar19 = (longlong *)plVar49[iVar33];
              if (plVar19 != (longlong *)0x0) {
                plVar21 = (longlong *)plVar49[iVar48];
                if (plVar21 != (longlong *)0x0) {
                  lVar31 = *plVar21;
                  iVar40 = -1;
                  iVar24 = -1;
                  if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                    iVar24 = *(int *)(lVar31 + 0x13c);
                  }
                  lVar31 = *plVar19;
                  if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                    iVar40 = *(int *)(lVar31 + 0x13c);
                  }
                  if (iVar40 < iVar24) {
                    plVar49[iVar48] = (longlong)plVar19;
                    plVar49[iVar33] = (longlong)plVar21;
                    iVar48 = iVar33;
                    goto joined_r0x0001440e3cd6;
                  }
                }
              }
            }
            bVar51 = iVar12 != 0;
            iVar48 = iVar12 + -1;
            iVar12 = iVar48;
          } while (bVar51);
          if (1 < iVar44) {
            lVar31 = *plVar49;
            *plVar49 = plVar49[uVar17 - 1];
            plVar49[uVar17 - 1] = lVar31;
            if (iVar44 != 2) {
              do {
                uVar29 = uVar17 - 1;
                iVar44 = 0;
                iVar12 = 1;
                iVar48 = 0;
                do {
                  iVar44 = iVar44 + 2;
                  iVar24 = iVar12;
                  if ((((longlong)iVar44 < (longlong)uVar29) &&
                      (iVar24 = iVar44, (longlong *)plVar49[iVar12] != (longlong *)0x0)) &&
                     ((longlong *)plVar49[iVar44] != (longlong *)0x0)) {
                    lVar31 = *(longlong *)plVar49[iVar44];
                    iVar40 = -1;
                    iVar33 = -1;
                    if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                      iVar33 = *(int *)(lVar31 + 0x13c);
                    }
                    lVar31 = *(longlong *)plVar49[iVar12];
                    if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                      iVar40 = *(int *)(lVar31 + 0x13c);
                    }
                    iVar24 = iVar12;
                    if (iVar33 <= iVar40) {
                      iVar24 = iVar44;
                    }
                  }
                  plVar19 = (longlong *)plVar49[iVar24];
                  if (plVar19 == (longlong *)0x0) break;
                  plVar21 = (longlong *)plVar49[iVar48];
                  if (plVar21 == (longlong *)0x0) break;
                  lVar31 = *plVar21;
                  iVar12 = -1;
                  iVar44 = -1;
                  if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                    iVar44 = *(int *)(lVar31 + 0x13c);
                  }
                  lVar31 = *plVar19;
                  if ((lVar31 != 0) && (*(char *)(lVar31 + 0x139) == '\x01')) {
                    iVar12 = *(int *)(lVar31 + 0x13c);
                  }
                  if (iVar44 <= iVar12) break;
                  plVar49[iVar48] = (longlong)plVar19;
                  plVar49[iVar24] = (longlong)plVar21;
                  iVar44 = iVar24 * 2;
                  iVar12 = iVar24 * 2 + 1;
                  iVar48 = iVar24;
                } while ((longlong)iVar12 < (longlong)uVar29);
                lVar31 = *plVar49;
                *plVar49 = plVar49[uVar17 - 2];
                plVar49[uVar17 - 2] = lVar31;
                uVar17 = uVar29;
              } while (2 < uVar29);
            }
          }
        }
LAB_1440e3fab:
        plVar22 = plVar22 + -3;
        ppplVar10 = uStack_370;
      } while (&local_378 <= plVar22);
    }
    uStack_370._4_4_ = (undefined4)((ulonglong)ppplVar10 >> 0x20);
    *(char *)(param_1 + 0x770) = (DAT_14c758624 == '\x03') + '\x01';
    if (*(longlong *)(param_1 + 0x758) == 0) {
      local_378._0_2_ = 0x670e;
      local_378._2_2_ = 0x45b1;
      local_378._4_4_ = 1;
      uStack_370._0_4_ = 0;
      FUN_146621eca(&local_3f8,param_1);
      *(longlong *)(param_1 + 0x758) = local_3f8;
      ppplVar10 = (longlong ***)CONCAT44(uStack_370._4_4_,(int)uStack_370);
    }
  }
LAB_1440e3fe0:
  uStack_370 = ppplVar10;
  if (local_428 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_380 = 0;
  if (local_388 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3a0 == 0) {
    uVar17 = 0;
    uVar29 = 1;
    iVar48 = 0;
    iVar44 = 0;
  }
  else {
    puVar20 = local_3a8;
    if (local_3a8 == (uint *)0x0) {
      puVar20 = local_3b8;
    }
    uVar13 = *puVar20;
    if (uVar13 == 0) {
      iVar44 = local_3a0 + 0x1e;
      if (-1 < local_3a0 + -1) {
        iVar44 = local_3a0 + -1;
      }
      uVar17 = 0;
      uVar29 = (ulonglong)(uint)(iVar44 >> 5);
      if (iVar44 >> 5 < 1) {
        uVar29 = uVar17;
      }
      iVar48 = 0;
      do {
        if (uVar29 == uVar17) goto LAB_1440e41fd;
        iVar48 = iVar48 + 0x20;
        uVar13 = puVar20[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar17 = 0;
      iVar48 = 0;
    }
    uVar29 = (ulonglong)(-uVar13 & uVar13);
    uVar27 = uVar29 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    iVar44 = (iVar48 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
    if (local_3a0 <= iVar44) {
      iVar44 = local_3a0;
    }
  }
  if (iVar44 < local_3a0) {
    uVar13 = 0xffffffff;
    do {
      pplVar37 = local_3c8;
      if (local_3c8[(longlong)iVar44 * 8 + 5] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (pplVar37[(longlong)iVar44 * 8 + 3] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar29;
      puVar20 = local_3a8;
      if (local_3a8 == (uint *)0x0) {
        puVar20 = local_3b8;
      }
      iVar44 = (int)uVar17;
      lVar31 = (longlong)iVar44;
      uVar47 = puVar20[lVar31] & uVar13;
      if (uVar47 == 0) {
        iVar12 = local_3a0 + 0x1e;
        if (-1 < local_3a0 + -1) {
          iVar12 = local_3a0 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar24 = iVar12;
        if (iVar12 < iVar44) {
          iVar24 = iVar44;
        }
        if (iVar12 <= iVar44) break;
        lVar25 = 0;
        while( true ) {
          iVar48 = iVar48 + 0x20;
          uVar47 = puVar20[lVar31 + lVar25 + 1];
          if (uVar47 != 0) break;
          lVar25 = lVar25 + 1;
          if (iVar24 - lVar31 == lVar25) goto LAB_1440e41fd;
        }
        uVar17 = (ulonglong)(iVar44 + (int)lVar25 + 1);
        uVar13 = 0xffffffff;
      }
      uVar29 = (ulonglong)(-uVar47 & uVar47);
      uVar27 = uVar29 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar44 = (iVar48 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
    } while (iVar44 < local_3a0);
  }
LAB_1440e41fd:
  uVar17 = uStack_3c0 >> 0x20;
  uStack_3c0 = uStack_3c0 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    FUN_140b7ce44(&local_3c8,0);
  }
  iStack_398 = 0xffffffff;
  local_394 = 0;
  local_3a0 = 0;
  if (0x80 < local_39c) {
    local_39c = 0x80;
    FUN_1446efbd8(local_3b8,0);
  }
  if (local_3a8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_3c8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_408 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1440e4291:
  if ((local_70 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar12 = *(int *)((longlong)iVar12 * 0x10 + *local_4b0 + 8), iVar12 != -1) {
LAB_1440e11da:
    if (*(byte *)(*local_4b0 + (longlong)iVar12 * 0x10) == bVar23) goto LAB_1440e173d;
  }
LAB_1440e11f8:
  if (iVar48 == 0) {
    *(int *)(param_1 + 0x788) = iVar44 + 1;
    if (*(int *)(param_1 + 0x78c) == iVar44) {
      FUN_144869a3c(local_4b0,iVar44);
    }
    iVar48 = *(int *)(param_1 + 0x7a8);
    if (iVar48 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar48 + 0x1e;
      if (-1 < iVar48 + -1) {
        iVar12 = iVar48 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    iVar24 = iVar48 + 1;
    iVar33 = iVar48 + 0x1f;
    if (-1 < iVar48) {
      iVar33 = iVar48;
    }
    if (iVar33 >> 5 == iVar12) {
      *(int *)(param_1 + 0x7a8) = iVar24;
    }
    else {
      if (*(int *)(param_1 + 0x7ac) <= iVar48) {
        iVar12 = iVar48;
        if (iVar48 + 0x20U < 0xa0) {
          iVar24 = 0x80;
        }
        else {
          uVar13 = iVar48 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x7ac) + 0x1fU < 0xa0) {
            uVar47 = 4;
            if (4 < uVar13) {
              uVar47 = uVar13;
            }
          }
          else {
            uVar47 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar17 = (ulonglong)(uVar47 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar14 = (uint)(uVar17 + 0xf);
              if (uVar47 < 0x1ffd) {
                uVar17 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar14 >> 4]];
              }
              else {
                uVar29 = uVar17 + 0xf & 0xfffffffffffffff0;
                if (uVar29 < 0x7ff1) {
                  bVar23 = (&DAT_14c841e00)[uVar14 >> 4];
                  uVar27 = 0x32;
                  if (0x32 < bVar23) {
                    uVar27 = (ulonglong)bVar23;
                  }
                  uVar43 = 0x32 - (ulonglong)bVar23;
                  do {
                    uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar43 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar43 & 0xffffffff] & 0xf) == 0) goto LAB_1440e18bc;
                    lVar25 = uVar27 + 1 + uVar43;
                    uVar43 = uVar43 - 1;
                  } while (lVar25 != 0x33);
                }
                uVar17 = (ulonglong)DAT_14c841df8;
                if (DAT_14c841df8 < 0x11) {
                  uVar17 = 0x10;
                }
                uVar17 = -uVar17 & (uVar29 + uVar17) - 1;
              }
            }
            else {
              uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
              iVar12 = *(int *)(param_1 + 0x7a8);
            }
          }
LAB_1440e18bc:
          iVar40 = (int)(uVar17 >> 2);
          iVar24 = iVar40 << 5;
          if (iVar40 < (int)uVar13) {
            iVar24 = -0x20;
          }
        }
        *(int *)(param_1 + 0x7ac) = iVar24;
        FUN_1446efbd8(local_4d0,iVar12);
        iVar24 = *(int *)(param_1 + 0x7a8) + 1;
      }
      iVar12 = iVar24 + 0x1f;
      if (-1 < iVar24) {
        iVar12 = iVar24;
      }
      *(int *)(param_1 + 0x7a8) = iVar24;
      if (iVar24 % 0x20 != 0) {
        puVar20 = *(uint **)(param_1 + 0x7a0);
        if (*(uint **)(param_1 + 0x7a0) == (uint *)0x0) {
          puVar20 = local_4d0;
        }
        bVar23 = -(char)(iVar24 % 0x20);
        puVar20[iVar12 >> 5] = (puVar20[iVar12 >> 5] << (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
      }
    }
    lVar25 = (longlong)iVar44;
    puVar20 = *(uint **)(param_1 + 0x7a0);
    if (*(uint **)(param_1 + 0x7a0) == (uint *)0x0) {
      puVar20 = local_4d0;
    }
    bVar23 = (byte)iVar48 & 0x1f;
    puVar20[iVar33 >> 5] = puVar20[iVar33 >> 5] & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
  }
  else {
    iVar44 = *(int *)(param_1 + 0x7b0);
    lVar25 = (longlong)iVar44;
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x780) + 4 + lVar25 * 0x10);
    *(int *)(param_1 + 0x7b0) = iVar12;
    *(int *)(param_1 + 0x7b4) = iVar48 + -1;
    if (iVar48 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x780) + (longlong)iVar12 * 0x10) = 0xffffffff;
    }
  }
  uVar13 = 1 << ((byte)iVar44 & 0x1f);
  puVar20 = *(uint **)(param_1 + 0x7a0);
  if (*(uint **)(param_1 + 0x7a0) == (uint *)0x0) {
    puVar20 = local_4d0;
  }
  iVar48 = iVar44 + 0x1f;
  if (-1 < iVar44) {
    iVar48 = iVar44;
  }
  puVar20[iVar48 >> 5] = puVar20[iVar48 >> 5] | uVar13;
  lVar46 = *(longlong *)(param_1 + 0x780);
  lVar25 = lVar25 * 0x10;
  puVar26 = (undefined8 *)(lVar46 + lVar25);
  bVar23 = local_4c8[0x160];
  *(byte *)(lVar46 + lVar25) = bVar23;
  *(undefined8 *)(lVar46 + 4 + lVar25) = 0xffffffffffffffff;
  uVar47 = *(int *)(param_1 + 0x788) - *(int *)(param_1 + 0x7b4);
  if (1 < uVar47) {
    lVar25 = *(longlong *)(param_1 + 0x7c0);
    if (*(longlong *)(param_1 + 0x7c0) == 0) {
      lVar25 = lVar31;
    }
    iVar12 = *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x7c8) - 1U & (uint)bVar23) * 4);
    if (iVar12 != -1) {
      do {
        puVar1 = (undefined8 *)(*local_4b0 + (longlong)iVar12 * 0x10);
        if (*(byte *)(*local_4b0 + (longlong)iVar12 * 0x10) == bVar23) {
          *puVar1 = *puVar26;
          lVar25 = *(longlong *)(param_1 + 0x780);
          if (*(int *)(param_1 + 0x7b4) != 0) {
            *(int *)(lVar25 + (longlong)*(int *)(param_1 + 0x7b0) * 0x10) = iVar44;
          }
          *(undefined4 *)(lVar25 + (longlong)iVar44 * 0x10) = 0xffffffff;
          if (*(int *)(param_1 + 0x7b4) < 1) {
            uVar39 = SUB84(&DAT_ffffffff,0);
          }
          else {
            uVar39 = *(undefined4 *)(param_1 + 0x7b0);
          }
          *(undefined4 *)(lVar25 + (longlong)iVar44 * 0x10 + 4) = uVar39;
          *(int *)(param_1 + 0x7b0) = iVar44;
          *(int *)(param_1 + 0x7b4) = *(int *)(param_1 + 0x7b4) + 1;
          puVar20 = *(uint **)(param_1 + 0x7a0);
          if (*(uint **)(param_1 + 0x7a0) == (uint *)0x0) {
            puVar20 = local_4d0;
          }
          puVar20[iVar48 >> 5] = puVar20[iVar48 >> 5] & ~uVar13;
          goto LAB_1440e173d;
        }
        iVar12 = *(int *)(puVar1 + 1);
      } while (iVar12 != -1);
    }
  }
  uVar13 = 1;
  if (3 < uVar47) {
    uVar17 = (ulonglong)(uVar47 & 0xfffffffe) + 0xf;
    lVar25 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar25 & 0x1f);
  }
  if (((int)uVar47 < 1) || ((int)uVar13 <= *(int *)(param_1 + 0x7c8))) {
    uVar13 = *(int *)(param_1 + 0x7c8) - 1U & (uint)bVar23;
    *(uint *)((longlong)puVar26 + 0xc) = uVar13;
    lVar25 = *(longlong *)(param_1 + 0x7c0);
    if (*(longlong *)(param_1 + 0x7c0) == 0) {
      lVar25 = lVar31;
    }
    *(undefined4 *)(puVar26 + 1) =
         *(undefined4 *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x7c8) - 1U & uVar13) * 4);
    lVar25 = *(longlong *)(param_1 + 0x7c0);
    if (*(longlong *)(param_1 + 0x7c0) == 0) {
      lVar25 = lVar31;
    }
    *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x7c8) - 1U & uVar13) * 4) = iVar44;
  }
  else {
    *(uint *)(param_1 + 0x7c8) = uVar13;
    if (*(longlong *)(param_1 + 0x7c0) != 0) {
      FUN_1446efa72(local_4b8,0,0,4);
      uVar13 = *(uint *)(param_1 + 0x7c8);
    }
    if (uVar13 != 0) {
      if (uVar13 == 1) {
        if (*local_4b8 != 0) {
          FUN_1446efa72(local_4b8,0,0,4);
        }
LAB_1440e140f:
        uVar47 = 0;
        do {
          lVar25 = *(longlong *)(param_1 + 0x7c0);
          if (*(longlong *)(param_1 + 0x7c0) == 0) {
            lVar25 = lVar31;
          }
          *(undefined4 *)
           (lVar25 + (ulonglong)(*(int *)(param_1 + 0x7c8) + 0x7fffffffU & uVar47) * 4) = 0xffffffff
          ;
          uVar47 = uVar47 + 1;
        } while (uVar13 != uVar47);
      }
      else {
        FUN_1446efa72(local_4b8,0,uVar13,4);
        if (0 < (int)uVar13) goto LAB_1440e140f;
      }
      iVar44 = *(int *)(param_1 + 0x7a8);
      if (iVar44 == 0) {
        uVar17 = 0;
        uVar29 = 1;
        iVar12 = 0;
        iVar48 = 0;
      }
      else {
        puVar20 = *(uint **)(param_1 + 0x7a0);
        if (*(uint **)(param_1 + 0x7a0) == (uint *)0x0) {
          puVar20 = local_4d0;
        }
        uVar13 = *puVar20;
        if (uVar13 == 0) {
          iVar48 = iVar44 + 0x1e;
          if (-1 < iVar44 + -1) {
            iVar48 = iVar44 + -1;
          }
          uVar17 = 0;
          uVar47 = iVar48 >> 5;
          if (iVar48 >> 5 < 1) {
            uVar47 = 0;
          }
          iVar12 = 0;
          do {
            if (uVar47 == uVar17) goto LAB_1440e173d;
            iVar12 = iVar12 + 0x20;
            uVar13 = puVar20[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar17 = 0;
          iVar12 = 0;
        }
        uVar29 = (ulonglong)(-uVar13 & uVar13);
        uVar27 = uVar29 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar48 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar44 <= iVar48) {
          iVar48 = iVar44;
        }
      }
      if (iVar48 < iVar44) {
        puVar45 = &DAT_ffffffff;
        do {
          lVar25 = *(longlong *)(param_1 + 0x780);
          lVar41 = (longlong)iVar48 * 0x10;
          uVar13 = *(int *)(param_1 + 0x7c8) - 1U & (uint)*(byte *)(lVar25 + lVar41);
          *(uint *)(lVar25 + 0xc + lVar41) = uVar13;
          lVar46 = *(longlong *)(param_1 + 0x7c0);
          if (*(longlong *)(param_1 + 0x7c0) == 0) {
            lVar46 = lVar31;
          }
          *(undefined4 *)(lVar25 + 8 + lVar41) =
               *(undefined4 *)(lVar46 + (ulonglong)(*(int *)(param_1 + 0x7c8) - 1U & uVar13) * 4);
          lVar25 = *(longlong *)(param_1 + 0x7c0);
          if (*(longlong *)(param_1 + 0x7c0) == 0) {
            lVar25 = lVar31;
          }
          *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x7c8) - 1U & uVar13) * 4) = iVar48;
          uVar13 = ~(uint)uVar29 & (uint)puVar45;
          puVar20 = *(uint **)(param_1 + 0x7a0);
          if (*(uint **)(param_1 + 0x7a0) == (uint *)0x0) {
            puVar20 = local_4d0;
          }
          iVar44 = *(int *)(param_1 + 0x7a8);
          iVar48 = (int)uVar17;
          lVar25 = (longlong)iVar48;
          uVar47 = puVar20[lVar25] & uVar13;
          if (uVar47 == 0) {
            iVar24 = iVar44 + 0x1e;
            if (-1 < iVar44 + -1) {
              iVar24 = iVar44 + -1;
            }
            iVar24 = iVar24 >> 5;
            iVar33 = iVar24;
            if (iVar24 < iVar48) {
              iVar33 = iVar48;
            }
            if (iVar24 <= iVar48) break;
            lVar46 = 0;
            while( true ) {
              iVar12 = iVar12 + 0x20;
              uVar47 = puVar20[lVar25 + lVar46 + 1];
              if (uVar47 != 0) break;
              lVar46 = lVar46 + 1;
              if (iVar33 - lVar25 == lVar46) goto LAB_1440e173d;
            }
            uVar17 = (ulonglong)(iVar48 + (int)lVar46 + 1);
            uVar13 = 0xffffffff;
          }
          puVar45 = (undefined1 *)(ulonglong)uVar13;
          uVar29 = (ulonglong)(-uVar47 & uVar47);
          uVar27 = uVar29 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar48 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        } while (iVar48 < iVar44);
      }
    }
  }
LAB_1440e173d:
  uVar13 = *(uint *)(local_4c8 + 0x1dc);
  if (uVar13 == 0) goto LAB_1440e17ee;
  if (*(int *)(param_1 + 0x788) == *(int *)(param_1 + 0x7b4)) {
LAB_1440e17db:
    if (_DAT_00000004 < uVar13) {
      uVar13 = _DAT_00000004;
    }
  }
  else {
    bVar23 = local_4c8[0x160];
    lVar25 = *(longlong *)(param_1 + 0x7c0);
    if (*(longlong *)(param_1 + 0x7c0) == 0) {
      lVar25 = lVar31;
    }
    iVar44 = *(int *)(lVar25 + (ulonglong)(*(int *)(param_1 + 0x7c8) - 1U & (uint)bVar23) * 4);
    if (iVar44 == -1) goto LAB_1440e17db;
    lVar25 = *local_4b0;
    iVar48 = iVar44;
    do {
      lVar46 = lVar25 + (longlong)iVar48 * 0x10;
      if (*(byte *)(lVar25 + (longlong)iVar48 * 0x10) == bVar23) goto LAB_1440e17b3;
      iVar48 = *(int *)(lVar46 + 8);
    } while (iVar48 != -1);
    lVar46 = 0;
LAB_1440e17b3:
    if (*(uint *)(lVar46 + 4) < uVar13) {
      uVar13 = *(uint *)(lVar46 + 4);
    }
    do {
      lVar46 = (longlong)iVar44 * 0x10 + lVar25;
      if (*(byte *)((longlong)iVar44 * 0x10 + lVar25) == bVar23) goto LAB_1440e17ea;
      iVar44 = *(int *)(lVar46 + 8);
    } while (iVar44 != -1);
  }
  lVar46 = 0;
LAB_1440e17ea:
  *(uint *)(lVar46 + 4) = uVar13;
LAB_1440e17ee:
  plVar22 = plVar22 + 3;
  if (plVar22 == local_4c0) goto LAB_1440e19e8;
  goto LAB_1440e102d;
LAB_1440e3c2d:
  lVar31 = *plVar49;
  *plVar49 = *plVar38;
  *plVar38 = lVar31;
  iVar44 = iVar44 + -1;
  plVar28 = plVar28 + -2;
  if ((longlong)plVar28 - (longlong)plVar49 < (longlong)plVar19 - (longlong)plVar21) {
    if (plVar21 < plVar19) {
      *plVar22 = (longlong)plVar21;
      plVar22[1] = (longlong)plVar19;
      *(int *)(plVar22 + 2) = iVar44;
      plVar22 = plVar22 + 3;
    }
    if (plVar38 <= plVar49 + 1) goto LAB_1440e3fab;
  }
  else {
    if (plVar49 + 1 < plVar38) {
      *plVar22 = (longlong)plVar49;
      plVar22[1] = (longlong)plVar28;
      *(int *)(plVar22 + 2) = iVar44;
      plVar22 = plVar22 + 3;
    }
    plVar28 = plVar19;
    plVar49 = plVar21;
    if (plVar19 <= plVar21) goto LAB_1440e3fab;
  }
  iVar48 = (int)((ulonglong)((longlong)plVar28 - (longlong)plVar49) >> 3);
  uVar17 = (ulonglong)(iVar48 + 1);
  plVar19 = plVar28;
  if (iVar44 == 0) goto LAB_1440e3cb5;
  goto LAB_1440e3b15;
}



// FUNCTION 1440e43de FUN_1440e43de body=127 status=ok
// SIG undefined FUN_1440e43de(void)

void FUN_1440e43de(longlong param_1,undefined4 param_2,longlong param_3,char param_4,char param_5)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_140d18446();
    if (lVar1 != 0) {
      *(char *)(lVar1 + 0x28) = param_4;
      FUN_140d1855e(param_1 + 0x6d8,param_3,lVar1,param_2);
    }
    if (param_5 != '\0') {
      if (param_4 != '\0') {
        FUN_1440e445e();
        return;
      }
      FUN_1440e55ee(param_1,param_3,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1440e445e FUN_1440e445e body=4495 status=ok
// SIG undefined FUN_1440e445e(void)

void FUN_1440e445e(longlong param_1,longlong *param_2,uint param_3)

{
  int *_Src;
  void *_Dst;
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong uVar29;
  undefined1 auStack_c8 [32];
  int local_a8;
  uint local_a4;
  uint *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) goto LAB_1440e5157;
  puVar18 = (uint *)(param_1 + 0x4d8);
  iVar27 = *(int *)(param_1 + 0x4f0);
  if (iVar27 == 0) {
    uVar20 = 1;
    uVar11 = 0;
    iVar14 = 0;
    iVar25 = 0;
  }
  else {
    puVar16 = *(uint **)(param_1 + 0x4e8);
    if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
      puVar16 = puVar18;
    }
    uVar7 = *puVar16;
    if (uVar7 == 0) {
      iVar25 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar25 = iVar27 + -1;
      }
      uVar11 = 0;
      uVar20 = (ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        uVar20 = uVar11;
      }
      iVar14 = 0;
      do {
        if (uVar20 == uVar11) goto LAB_1440e4531;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar16[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar11 = 0;
      iVar14 = 0;
    }
    uVar20 = (ulonglong)(-uVar7 & uVar7);
    uVar29 = uVar20 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar25 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar27 <= iVar25) {
      iVar25 = iVar27;
    }
  }
  if (iVar25 == iVar27) {
LAB_1440e4531:
    uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    local_a4 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_a4 = local_a4 >> 0x10 ^ local_a4;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x4c8);
    uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    local_a4 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_a4 = local_a4 >> 0x10 ^ local_a4;
    iVar15 = iVar27 + 0x1e;
    if (-1 < iVar27 + -1) {
      iVar15 = iVar27 + -1;
    }
    iVar15 = iVar15 >> 5;
    uVar7 = 0xffffffff;
    do {
      lVar26 = (longlong)iVar25 * 0x60;
      if (*(int *)(lVar12 + 0x10 + lVar26) != *(int *)(lVar12 + 0x3c + lVar26)) {
        lVar26 = lVar26 + lVar12;
        lVar22 = lVar26 + 0x40;
        if (*(longlong *)(lVar26 + 0x48) != 0) {
          lVar22 = *(longlong *)(lVar26 + 0x48);
        }
        iVar25 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar26 + 0x50) - 1U & local_a4) * 4);
        if (iVar25 != -1) {
          lVar26 = *(longlong *)(lVar26 + 8);
          iVar19 = iVar25;
          do {
            if (*(longlong **)(lVar26 + (longlong)iVar19 * 0x18) == param_2) goto LAB_1440e46cc;
            iVar19 = *(int *)(lVar26 + (longlong)iVar19 * 0x18 + 0x10);
          } while (iVar19 != -1);
        }
      }
      uVar7 = uVar7 & ~(uint)uVar20;
      puVar16 = *(uint **)(param_1 + 0x4e8);
      if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
        puVar16 = puVar18;
      }
      iVar25 = (int)uVar11;
      lVar26 = (longlong)iVar25;
      uVar8 = puVar16[lVar26] & uVar7;
      if (uVar8 == 0) {
        iVar19 = iVar15;
        if (iVar15 < iVar25) {
          iVar19 = iVar25;
        }
        if (iVar15 <= iVar25) break;
        lVar22 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar8 = puVar16[lVar26 + lVar22 + 1];
          if (uVar8 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar19 - lVar26 == lVar22) goto LAB_1440e455d;
        }
        uVar11 = (ulonglong)(iVar25 + (int)lVar22 + 1);
        uVar7 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar8 & uVar8);
      uVar29 = uVar20 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar25 = (iVar14 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    } while (iVar25 < iVar27);
  }
LAB_1440e455d:
  local_a8 = -1;
  goto LAB_1440e46e7;
  while (iVar25 = (int)plVar28[2], iVar25 != -1) {
LAB_1440e46cc:
    plVar28 = (longlong *)(lVar26 + (longlong)iVar25 * 0x18);
    if ((longlong *)*plVar28 == param_2) goto LAB_1440e46e0;
  }
  plVar28 = (longlong *)0x0;
LAB_1440e46e0:
  local_a8 = (int)plVar28[1];
LAB_1440e46e7:
  puVar16 = (uint *)(param_1 + 0x4c8);
  iVar14 = *(int *)(param_1 + 0x4d0);
  iVar25 = *(int *)(param_1 + 0x4fc);
  if (iVar14 != iVar25) {
    lVar12 = param_1 + 0x500;
    if (*(longlong *)(param_1 + 0x508) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x508);
    }
    iVar15 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & param_3) * 4);
    if (iVar15 != -1) {
      do {
        lVar12 = *(longlong *)puVar16 + (longlong)iVar15 * 0x60;
        if (*(uint *)(*(longlong *)puVar16 + (longlong)iVar15 * 0x60) == param_3) {
          if (lVar12 != 0) goto LAB_1440e4b2a;
          break;
        }
        iVar15 = *(int *)(lVar12 + 0x58);
      } while (iVar15 != -1);
    }
  }
  local_a0 = puVar16;
  if (iVar25 == 0) {
    *(int *)(param_1 + 0x4d0) = iVar14 + 1;
    if (*(int *)(param_1 + 0x4d4) == iVar14) {
      FUN_14488f93c(puVar16,iVar14);
      iVar27 = *(int *)(param_1 + 0x4f0);
    }
    if (iVar27 == 0) {
      iVar25 = -1;
    }
    else {
      iVar25 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar25 = iVar27 + -1;
      }
      iVar25 = iVar25 >> 5;
    }
    iVar15 = iVar27 + 1;
    iVar19 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar19 = iVar27;
    }
    if (iVar19 >> 5 == iVar25) {
      *(int *)(param_1 + 0x4f0) = iVar15;
    }
    else {
      if (*(int *)(param_1 + 0x4f4) <= iVar27) {
        iVar25 = iVar27;
        if (iVar27 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar7 = iVar27 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x4f4) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar7) {
              uVar8 = uVar7;
            }
          }
          else {
            uVar8 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
          }
          uVar11 = (ulonglong)(uVar8 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar9 = (uint)(uVar11 + 0xf);
              if (uVar8 < 0x1ffd) {
                uVar11 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
              }
              else {
                uVar20 = uVar11 + 0xf & 0xfffffffffffffff0;
                if (uVar20 < 0x7ff1) {
                  bVar13 = (&DAT_14c841e00)[uVar9 >> 4];
                  uVar29 = 0x32;
                  if (0x32 < bVar13) {
                    uVar29 = (ulonglong)bVar13;
                  }
                  uVar21 = 0x32 - (ulonglong)bVar13;
                  do {
                    uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_1440e536d;
                    lVar12 = uVar29 + 1 + uVar21;
                    uVar21 = uVar21 - 1;
                  } while (lVar12 != 0x33);
                }
                uVar11 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar11 = (ulonglong)DAT_14c841df8;
                }
                uVar11 = -uVar11 & (uVar20 + uVar11) - 1;
              }
            }
            else {
              uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              iVar25 = *(int *)(param_1 + 0x4f0);
            }
          }
LAB_1440e536d:
          iVar10 = (int)(uVar11 >> 2);
          iVar15 = -0x20;
          if ((int)uVar7 <= iVar10) {
            iVar15 = iVar10 << 5;
          }
        }
        *(int *)(param_1 + 0x4f4) = iVar15;
        FUN_1446efbd8(puVar18,iVar25);
        iVar15 = *(int *)(param_1 + 0x4f0) + 1;
      }
      iVar25 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar25 = iVar15;
      }
      *(int *)(param_1 + 0x4f0) = iVar15;
      if (iVar15 % 0x20 != 0) {
        puVar16 = *(uint **)(param_1 + 0x4e8);
        if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
          puVar16 = puVar18;
        }
        bVar13 = -(char)(iVar15 % 0x20);
        puVar16[iVar25 >> 5] = (puVar16[iVar25 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar14;
    puVar16 = *(uint **)(param_1 + 0x4e8);
    if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
      puVar16 = puVar18;
    }
    bVar13 = (byte)iVar27 & 0x1f;
    puVar16[iVar19 >> 5] = puVar16[iVar19 >> 5] & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar14 = *(int *)(param_1 + 0x4f8);
    lVar12 = (longlong)iVar14;
    iVar27 = *(int *)(*(longlong *)(param_1 + 0x4c8) + 4 + lVar12 * 0x60);
    *(int *)(param_1 + 0x4f8) = iVar27;
    *(int *)(param_1 + 0x4fc) = iVar25 + -1;
    if (iVar25 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x4c8) + (longlong)iVar27 * 0x60) = 0xffffffff;
    }
  }
  puVar16 = *(uint **)(param_1 + 0x4e8);
  if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
    puVar16 = puVar18;
  }
  iVar27 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar27 = iVar14;
  }
  puVar16[iVar27 >> 5] = puVar16[iVar27 >> 5] | 1 << ((byte)iVar14 & 0x1f);
  uVar7 = 1;
  _Src = (int *)(*(longlong *)(param_1 + 0x4c8) + lVar12 * 0x60);
  local_78 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 0x8000000000;
  puVar16 = (uint *)(*(longlong *)(param_1 + 0x4c8) + lVar12 * 0x60);
  puVar17 = puVar16 + 2;
  *puVar16 = param_3;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  puVar17[0] = 0;
  puVar17[1] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[0xd] = 0x80;
  puVar16[0xe] = 0xffffffff;
  puVar16[0xf] = 0;
  if (puVar17 != (uint *)&local_98) {
    _Src[6] = 0;
    _Src[7] = 0;
    _Src[8] = 0;
    _Src[9] = 0;
    uStack_70 = 0;
  }
  local_68 = 0xffffffff;
  _Src[0x10] = 0;
  _Src[0x12] = 0;
  _Src[0x13] = 0;
  local_58 = 0;
  _Src[0x14] = 0;
  uStack_50 = 0;
  FUN_144039ab6();
  _Src[0x16] = -1;
  uVar8 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4fc);
  if (uVar8 != 1) {
    if (*(int *)(param_1 + 0x4d0) != *(int *)(param_1 + 0x4fc)) {
      lVar12 = param_1 + 0x500;
      if (*(longlong *)(param_1 + 0x508) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x508);
      }
      iVar27 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & param_3) * 4);
      if (iVar27 != -1) {
        do {
          _Dst = (void *)(*(longlong *)local_a0 + (longlong)iVar27 * 0x60);
          if (*(int *)(*(longlong *)local_a0 + (longlong)iVar27 * 0x60) == *_Src) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_144039ab6((longlong)_Dst + 8);
            memmove(_Dst,_Src,0x58);
            FUN_1440eace2(local_a0,iVar14);
            goto LAB_1440e4b0f;
          }
          iVar27 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar27 != -1);
      }
    }
    if (3 < uVar8) {
      uVar11 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar7 = 1 << ((byte)lVar12 & 0x1f);
    }
  }
  if (((int)uVar8 < 1) || ((int)uVar7 <= *(int *)(param_1 + 0x510))) {
    param_3 = *(int *)(param_1 + 0x510) - 1U & param_3;
    _Src[0x17] = param_3;
    lVar12 = *(longlong *)(param_1 + 0x508);
    if (*(longlong *)(param_1 + 0x508) == 0) {
      lVar12 = param_1 + 0x500;
    }
    _Src[0x16] = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x510) - 1U &
                                   (longlong)(int)param_3) * 4);
    lVar12 = *(longlong *)(param_1 + 0x508);
    if (*(longlong *)(param_1 + 0x508) == 0) {
      lVar12 = param_1 + 0x500;
    }
    *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x510) - 1U & (longlong)(int)param_3) * 4) =
         iVar14;
  }
  else {
    *(uint *)(param_1 + 0x510) = uVar7;
    plVar28 = (longlong *)(param_1 + 0x508);
    if (*(longlong *)(param_1 + 0x508) != 0) {
      FUN_1446efa72(plVar28,0,0,4);
      uVar7 = *(uint *)(param_1 + 0x510);
    }
    if (uVar7 != 0) {
      lVar12 = param_1 + 0x500;
      if (uVar7 == 1) {
        if (*plVar28 != 0) {
          FUN_1446efa72(plVar28,0,0,4);
        }
LAB_1440e49fc:
        uVar8 = 0;
        do {
          lVar26 = *(longlong *)(param_1 + 0x508);
          if (*(longlong *)(param_1 + 0x508) == 0) {
            lVar26 = lVar12;
          }
          *(undefined4 *)(lVar26 + (ulonglong)(*(int *)(param_1 + 0x510) + 0x7fffffffU & uVar8) * 4)
               = 0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      else {
        FUN_1446efa72(plVar28,0,uVar7,4);
        if (0 < (int)uVar7) goto LAB_1440e49fc;
      }
      iVar27 = *(int *)(param_1 + 0x4f0);
      if (iVar27 == 0) {
        uVar11 = 0;
        uVar20 = 1;
        iVar15 = 0;
        iVar25 = 0;
      }
      else {
        puVar16 = *(uint **)(param_1 + 0x4e8);
        if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
          puVar16 = puVar18;
        }
        uVar7 = *puVar16;
        if (uVar7 == 0) {
          iVar25 = iVar27 + 0x1e;
          if (-1 < iVar27 + -1) {
            iVar25 = iVar27 + -1;
          }
          uVar11 = 0;
          uVar20 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar20 = uVar11;
          }
          iVar15 = 0;
          do {
            if (uVar20 == uVar11) goto LAB_1440e4b0f;
            iVar15 = iVar15 + 0x20;
            uVar7 = puVar16[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar11 = 0;
          iVar15 = 0;
        }
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar29 = uVar20 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar25 = (iVar15 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar27 <= iVar25) {
          iVar25 = iVar27;
        }
      }
      if (iVar25 < iVar27) {
        uVar7 = 0xffffffff;
        do {
          lVar26 = *(longlong *)(param_1 + 0x4c8);
          lVar24 = (longlong)iVar25 * 0x60;
          uVar29 = (longlong)*(int *)(param_1 + 0x510) - 1U & (longlong)*(int *)(lVar26 + lVar24);
          iVar27 = (int)uVar29;
          *(int *)(lVar26 + 0x5c + lVar24) = iVar27;
          lVar22 = *(longlong *)(param_1 + 0x508);
          if (*(longlong *)(param_1 + 0x508) == 0) {
            lVar22 = lVar12;
          }
          *(undefined4 *)(lVar26 + 0x58 + lVar24) =
               *(undefined4 *)(lVar22 + ((longlong)*(int *)(param_1 + 0x510) - 1U & uVar29) * 4);
          lVar26 = *(longlong *)(param_1 + 0x508);
          if (*(longlong *)(param_1 + 0x508) == 0) {
            lVar26 = lVar12;
          }
          *(int *)(lVar26 + ((longlong)iVar27 & (longlong)*(int *)(param_1 + 0x510) - 1U) * 4) =
               iVar25;
          uVar7 = ~(uint)uVar20 & uVar7;
          puVar16 = *(uint **)(param_1 + 0x4e8);
          if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
            puVar16 = puVar18;
          }
          iVar27 = *(int *)(param_1 + 0x4f0);
          iVar25 = (int)uVar11;
          lVar26 = (longlong)iVar25;
          uVar8 = puVar16[lVar26] & uVar7;
          if (uVar8 == 0) {
            iVar19 = iVar27 + 0x1e;
            if (-1 < iVar27 + -1) {
              iVar19 = iVar27 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar10 = iVar19;
            if (iVar19 < iVar25) {
              iVar10 = iVar25;
            }
            if (iVar19 <= iVar25) break;
            lVar22 = 0;
            while( true ) {
              iVar15 = iVar15 + 0x20;
              uVar8 = puVar16[lVar26 + lVar22 + 1];
              if (uVar8 != 0) break;
              lVar22 = lVar22 + 1;
              if (iVar10 - lVar26 == lVar22) goto LAB_1440e4b0f;
            }
            uVar11 = (ulonglong)(iVar25 + (int)lVar22 + 1);
            uVar7 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar8 & uVar8);
          uVar29 = uVar20 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar25 = (iVar15 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        } while (iVar25 < iVar27);
      }
    }
  }
LAB_1440e4b0f:
  lVar12 = *(longlong *)local_a0 + (longlong)iVar14 * 0x60;
LAB_1440e4b2a:
  plVar28 = (longlong *)(lVar12 + 8);
  iVar25 = *(int *)(lVar12 + 0x10);
  iVar27 = *(int *)(lVar12 + 0x3c);
  if (iVar25 != iVar27) {
    lVar26 = lVar12 + 0x40;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      lVar26 = *(longlong *)(lVar12 + 0x48);
    }
    iVar14 = *(int *)(lVar26 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & local_a4) * 4);
    if (iVar14 != -1) {
      do {
        plVar1 = (longlong *)(*plVar28 + (longlong)iVar14 * 0x18);
        if ((longlong *)*plVar1 == param_2) {
          if (plVar1 != (longlong *)0x0) goto LAB_1440e5148;
          break;
        }
        iVar14 = (int)plVar1[2];
      } while (iVar14 != -1);
    }
  }
  if (iVar27 == 0) {
    *(int *)(lVar12 + 0x10) = iVar25 + 1;
    if (*(int *)(lVar12 + 0x14) == iVar25) {
      FUN_14482b872(plVar28,iVar25);
    }
    iVar27 = *(int *)(lVar12 + 0x30);
    if (iVar27 == 0) {
      iVar14 = -1;
    }
    else {
      iVar14 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar14 = iVar27 + -1;
      }
      iVar14 = iVar14 >> 5;
    }
    lVar26 = lVar12 + 0x18;
    iVar15 = iVar27 + 1;
    iVar19 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar19 = iVar27;
    }
    if (iVar19 >> 5 == iVar14) {
      *(int *)(lVar12 + 0x30) = iVar15;
    }
    else {
      if (*(int *)(lVar12 + 0x34) <= iVar27) {
        iVar14 = iVar27;
        if (iVar27 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar7 = iVar27 + 0x20U >> 5;
          if (*(int *)(lVar12 + 0x34) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar7) {
              uVar8 = uVar7;
            }
          }
          else {
            uVar8 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
          }
          uVar11 = (ulonglong)(uVar8 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar9 = (uint)(uVar11 + 0xf);
              if (uVar8 < 0x1ffd) {
                uVar11 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
              }
              else {
                uVar20 = uVar11 + 0xf & 0xfffffffffffffff0;
                if (uVar20 < 0x7ff1) {
                  bVar13 = (&DAT_14c841e00)[uVar9 >> 4];
                  uVar29 = 0x32;
                  if (0x32 < bVar13) {
                    uVar29 = (ulonglong)bVar13;
                  }
                  uVar21 = 0x32 - (ulonglong)bVar13;
                  do {
                    uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_1440e540f;
                    lVar22 = uVar29 + 1 + uVar21;
                    uVar21 = uVar21 - 1;
                  } while (lVar22 != 0x33);
                }
                uVar11 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar11 = (ulonglong)DAT_14c841df8;
                }
                uVar11 = -uVar11 & (uVar20 + uVar11) - 1;
              }
            }
            else {
              uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              iVar14 = *(int *)(lVar12 + 0x30);
            }
          }
LAB_1440e540f:
          iVar10 = (int)(uVar11 >> 2);
          iVar15 = -0x20;
          if ((int)uVar7 <= iVar10) {
            iVar15 = iVar10 << 5;
          }
        }
        *(int *)(lVar12 + 0x34) = iVar15;
        FUN_1446efbd8(lVar26,iVar14);
        iVar15 = *(int *)(lVar12 + 0x30) + 1;
      }
      iVar14 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar14 = iVar15;
      }
      *(int *)(lVar12 + 0x30) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar22 = *(longlong *)(lVar12 + 0x28);
        if (*(longlong *)(lVar12 + 0x28) == 0) {
          lVar22 = lVar26;
        }
        bVar13 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar22 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)(lVar22 + (longlong)(iVar14 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar22 = (longlong)iVar25;
    if (*(longlong *)(lVar12 + 0x28) != 0) {
      lVar26 = *(longlong *)(lVar12 + 0x28);
    }
    bVar13 = (byte)iVar27 & 0x1f;
    puVar18 = (uint *)(lVar26 + (longlong)(iVar19 >> 5) * 4);
    *puVar18 = *puVar18 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar25 = *(int *)(lVar12 + 0x38);
    lVar22 = (longlong)iVar25;
    iVar14 = *(int *)(*plVar28 + 4 + lVar22 * 0x18);
    *(int *)(lVar12 + 0x38) = iVar14;
    *(int *)(lVar12 + 0x3c) = iVar27 + -1;
    if (iVar27 + -1 != 0) {
      *(undefined4 *)(*plVar28 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  local_a0 = (uint *)(lVar12 + 0x18);
  uVar7 = 1;
  puVar18 = *(uint **)(lVar12 + 0x28);
  if (*(uint **)(lVar12 + 0x28) == (uint *)0x0) {
    puVar18 = local_a0;
  }
  iVar27 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar27 = iVar25;
  }
  puVar18[iVar27 >> 5] = puVar18[iVar27 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  puVar2 = (undefined8 *)(*plVar28 + lVar22 * 0x18);
  *puVar2 = param_2;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar8 = *(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c);
  if (1 < uVar8) {
    lVar26 = lVar12 + 0x40;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      lVar26 = *(longlong *)(lVar12 + 0x48);
    }
    iVar27 = *(int *)(lVar26 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & local_a4) * 4);
    if (iVar27 != -1) {
      do {
        plVar1 = (longlong *)(*plVar28 + (longlong)iVar27 * 0x18);
        if ((longlong *)*plVar1 == param_2) {
          uVar3 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar4 = *(undefined4 *)(puVar2 + 1);
          uVar5 = *(undefined4 *)((longlong)puVar2 + 0xc);
          *(undefined4 *)plVar1 = *(undefined4 *)puVar2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
          *(undefined4 *)(plVar1 + 1) = uVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
          FUN_1440ead5c(plVar28,iVar25);
          goto LAB_1440e5135;
        }
        iVar27 = (int)plVar1[2];
      } while (iVar27 != -1);
    }
  }
  if (3 < uVar8) {
    uVar11 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
    lVar26 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar26 & 0x1f);
  }
  if (((int)uVar8 < 1) || ((int)uVar7 <= *(int *)(lVar12 + 0x50))) {
    uVar7 = *(int *)(lVar12 + 0x50) - 1U & local_a4;
    *(uint *)((longlong)puVar2 + 0x14) = uVar7;
    lVar26 = *(longlong *)(lVar12 + 0x48);
    if (*(longlong *)(lVar12 + 0x48) == 0) {
      lVar26 = lVar12 + 0x40;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          (lVar26 + ((longlong)*(int *)(lVar12 + 0x50) - 1U & (longlong)(int)uVar7) * 4);
    lVar26 = *(longlong *)(lVar12 + 0x48);
    if (*(longlong *)(lVar12 + 0x48) == 0) {
      lVar26 = lVar12 + 0x40;
    }
    *(int *)(lVar26 + ((longlong)*(int *)(lVar12 + 0x50) - 1U & (longlong)(int)uVar7) * 4) = iVar25;
  }
  else {
    *(uint *)(lVar12 + 0x50) = uVar7;
    plVar1 = (longlong *)(lVar12 + 0x48);
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      FUN_1446efa72(plVar1,0,0,4);
      uVar7 = *(uint *)(lVar12 + 0x50);
    }
    if (uVar7 != 0) {
      lVar26 = lVar12 + 0x40;
      if (uVar7 == 1) {
        if (*plVar1 != 0) {
          FUN_1446efa72(plVar1,0,0,4);
        }
LAB_1440e4d56:
        uVar8 = 0;
        do {
          lVar22 = *(longlong *)(lVar12 + 0x48);
          if (*(longlong *)(lVar12 + 0x48) == 0) {
            lVar22 = lVar26;
          }
          *(undefined4 *)(lVar22 + (ulonglong)(*(int *)(lVar12 + 0x50) + 0x7fffffffU & uVar8) * 4) =
               0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      else {
        FUN_1446efa72(plVar1,0,uVar7,4);
        if (0 < (int)uVar7) goto LAB_1440e4d56;
      }
      iVar27 = *(int *)(lVar12 + 0x30);
      if (iVar27 == 0) {
        uVar11 = 0;
        uVar20 = 1;
        iVar15 = 0;
        iVar14 = 0;
      }
      else {
        puVar18 = *(uint **)(lVar12 + 0x28);
        if (*(uint **)(lVar12 + 0x28) == (uint *)0x0) {
          puVar18 = local_a0;
        }
        uVar7 = *puVar18;
        if (uVar7 == 0) {
          iVar14 = iVar27 + 0x1e;
          if (-1 < iVar27 + -1) {
            iVar14 = iVar27 + -1;
          }
          uVar11 = 0;
          uVar20 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar20 = uVar11;
          }
          iVar15 = 0;
          do {
            if (uVar20 == uVar11) goto LAB_1440e5135;
            iVar15 = iVar15 + 0x20;
            uVar7 = puVar18[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar11 = 0;
          iVar15 = 0;
        }
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar29 = uVar20 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar14 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar27 <= iVar14) {
          iVar14 = iVar27;
        }
      }
      if (iVar14 < iVar27) {
        uVar7 = 0xffffffff;
        do {
          lVar22 = *plVar28;
          lVar23 = (longlong)iVar14;
          uVar29 = *(ulonglong *)(lVar22 + lVar23 * 0x18);
          uVar8 = ((uint)(uVar29 >> 0x14) & 0xffff ^ (uint)(uVar29 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          uVar29 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)*(int *)(lVar12 + 0x50) - 1U;
          iVar27 = (int)uVar29;
          *(int *)(lVar22 + 0x14 + lVar23 * 0x18) = iVar27;
          lVar24 = *(longlong *)(lVar12 + 0x48);
          if (*(longlong *)(lVar12 + 0x48) == 0) {
            lVar24 = lVar26;
          }
          *(undefined4 *)(lVar22 + 0x10 + lVar23 * 0x18) =
               *(undefined4 *)(lVar24 + ((longlong)*(int *)(lVar12 + 0x50) - 1U & uVar29) * 4);
          lVar22 = *(longlong *)(lVar12 + 0x48);
          if (*(longlong *)(lVar12 + 0x48) == 0) {
            lVar22 = lVar26;
          }
          *(int *)(lVar22 + ((longlong)iVar27 & (longlong)*(int *)(lVar12 + 0x50) - 1U) * 4) =
               iVar14;
          uVar7 = ~(uint)uVar20 & uVar7;
          puVar18 = *(uint **)(lVar12 + 0x28);
          if (*(uint **)(lVar12 + 0x28) == (uint *)0x0) {
            puVar18 = local_a0;
          }
          iVar27 = *(int *)(lVar12 + 0x30);
          iVar14 = (int)uVar11;
          lVar22 = (longlong)iVar14;
          uVar8 = puVar18[lVar22] & uVar7;
          if (uVar8 == 0) {
            iVar19 = iVar27 + 0x1e;
            if (-1 < iVar27 + -1) {
              iVar19 = iVar27 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar10 = iVar19;
            if (iVar19 < iVar14) {
              iVar10 = iVar14;
            }
            if (iVar19 <= iVar14) break;
            lVar24 = 0;
            while( true ) {
              iVar15 = iVar15 + 0x20;
              uVar8 = puVar18[lVar22 + lVar24 + 1];
              if (uVar8 != 0) break;
              lVar24 = lVar24 + 1;
              if (iVar10 - lVar22 == lVar24) goto LAB_1440e5135;
            }
            uVar11 = (ulonglong)(iVar14 + (int)lVar24 + 1);
            uVar7 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar8 & uVar8);
          uVar29 = uVar20 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar14 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        } while (iVar14 < iVar27);
      }
    }
  }
LAB_1440e5135:
  plVar1 = (longlong *)(*plVar28 + (longlong)iVar25 * 0x18);
LAB_1440e5148:
  iVar27 = local_a8;
  if (local_a8 == -1) {
    if (*param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined1 *)(*param_2 + 0x160);
    }
    local_98 = CONCAT71(local_98._1_7_,uVar6);
    plVar28 = (longlong *)FUN_145dc6c74(param_1 + 0x1a0,uVar6);
    iVar27 = (int)plVar28[1];
    *(uint *)(plVar28 + 1) = iVar27 + 1U;
    if (*(uint *)((longlong)plVar28 + 0xc) < iVar27 + 1U) {
      FUN_14100c5e2(plVar28,iVar27);
    }
    *(longlong **)(*plVar28 + (longlong)iVar27 * 8) = param_2;
  }
  *(int *)(plVar1 + 1) = iVar27;
LAB_1440e5157:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440e55ee FUN_1440e55ee body=1839 status=ok
// SIG undefined FUN_1440e55ee(void)

void FUN_1440e55ee(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  char cVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auStack_a8 [35];
  char local_85;
  int local_84;
  ulonglong local_80;
  uint local_74;
  uint *local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != (longlong *)0x0) && (*(int *)(param_1 + 0x4d0) != *(int *)(param_1 + 0x4fc))) {
    lVar1 = param_1 + 0x500;
    lVar24 = *(longlong *)(param_1 + 0x508);
    if (*(longlong *)(param_1 + 0x508) == 0) {
      lVar24 = lVar1;
    }
    iVar15 = *(int *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & param_3) * 4);
    if (iVar15 != -1) {
      lVar24 = *(longlong *)(param_1 + 0x4c8);
      iVar16 = iVar15;
      do {
        if (*(uint *)(lVar24 + (longlong)iVar16 * 0x60) == param_3) goto LAB_1440e568e;
        iVar16 = *(int *)((longlong)iVar16 * 0x60 + lVar24 + 0x58);
      } while (iVar16 != -1);
    }
  }
  goto LAB_1440e59a8;
  while (iVar15 = *(int *)(lVar14 + 0x58), iVar15 != -1) {
LAB_1440e568e:
    lVar14 = lVar24 + (longlong)iVar15 * 0x60;
    if (*(uint *)(lVar24 + (longlong)iVar15 * 0x60) == param_3) goto LAB_1440e56a5;
  }
  lVar14 = 0;
LAB_1440e56a5:
  if (*(int *)(lVar14 + 0x10) != *(int *)(lVar14 + 0x3c)) {
    uVar10 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar10 = uVar10 >> 0x10 ^ uVar10;
    lVar24 = lVar14 + 0x40;
    if (*(longlong *)(lVar14 + 0x48) != 0) {
      lVar24 = *(longlong *)(lVar14 + 0x48);
    }
    iVar15 = *(int *)(lVar24 + (ulonglong)(*(int *)(lVar14 + 0x50) - 1U & uVar10) * 4);
    if (iVar15 != -1) {
      do {
        if (*(longlong **)(*(longlong *)(lVar14 + 8) + (longlong)iVar15 * 0x18) == param_2) {
          if (*param_2 == 0) {
            local_49 = '\0';
          }
          else {
            local_49 = *(char *)(*param_2 + 0x160);
          }
          plVar7 = (longlong *)FUN_140d17572(param_1 + 0x1a0);
          iVar15 = *(int *)(param_1 + 0x4d0);
          iVar16 = *(int *)(param_1 + 0x4fc);
          if (iVar15 == iVar16) goto LAB_1440e57a1;
          lVar24 = *(longlong *)(param_1 + 0x508);
          if (*(longlong *)(param_1 + 0x508) == 0) {
            lVar24 = lVar1;
          }
          iVar12 = *(int *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & param_3) * 4);
          if (iVar12 == -1) goto LAB_1440e57a1;
          goto LAB_1440e5784;
        }
        iVar15 = *(int *)(*(longlong *)(lVar14 + 8) + (longlong)iVar15 * 0x18 + 0x10);
      } while (iVar15 != -1);
    }
  }
  goto LAB_1440e59a8;
code_r0x0001440e58d1:
  iVar15 = *(int *)(puVar13 + 2);
  if (iVar15 == -1) goto LAB_1440e5914;
  goto LAB_1440e58c1;
  while (iVar12 = *(int *)(lVar24 + 0x58), iVar12 != -1) {
LAB_1440e5784:
    lVar24 = *(longlong *)(param_1 + 0x4c8) + (longlong)iVar12 * 0x60;
    if (*(uint *)(*(longlong *)(param_1 + 0x4c8) + (longlong)iVar12 * 0x60) == param_3)
    goto LAB_1440e57a3;
  }
LAB_1440e57a1:
  lVar24 = 0;
LAB_1440e57a3:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar24 + 0x3c)) {
    lVar14 = lVar24 + 0x40;
    if (*(longlong *)(lVar24 + 0x48) != 0) {
      lVar14 = *(longlong *)(lVar24 + 0x48);
    }
    iVar12 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar24 + 0x50) - 1U & uVar10) * 4);
    if (iVar12 != -1) {
      do {
        puVar13 = (undefined8 *)(*(longlong *)(lVar24 + 8) + (longlong)iVar12 * 0x18);
        if ((longlong *)*puVar13 == param_2) goto LAB_1440e57f0;
        iVar12 = *(int *)(puVar13 + 2);
      } while (iVar12 != -1);
    }
  }
  puVar13 = (undefined8 *)0x0;
LAB_1440e57f0:
  uVar4 = *(uint *)(puVar13 + 1);
  lVar24 = (longlong)(int)uVar4;
  if ((-1 < lVar24) && (iVar12 = (int)plVar7[1], (int)uVar4 < iVar12)) {
    if (~uVar4 + iVar12 != 0) {
      memmove((void *)(*plVar7 + lVar24 * 8),(void *)(*plVar7 + lVar24 * 8 + 8),
              (longlong)(int)(~uVar4 + iVar12) << 3);
      iVar12 = (int)plVar7[1];
    }
    *(int *)(plVar7 + 1) = iVar12 + -1;
    FUN_1440eadce(plVar7);
    iVar15 = *(int *)(param_1 + 0x4d0);
    iVar16 = *(int *)(param_1 + 0x4fc);
  }
  if (iVar15 != iVar16) {
    lVar24 = *(longlong *)(param_1 + 0x508);
    if (*(longlong *)(param_1 + 0x508) == 0) {
      lVar24 = lVar1;
    }
    iVar15 = *(int *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & param_3) * 4);
    if (iVar15 != -1) {
      do {
        lVar24 = *(longlong *)(param_1 + 0x4c8) + (longlong)iVar15 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0x4c8) + (longlong)iVar15 * 0x60) == param_3)
        goto LAB_1440e588d;
        iVar15 = *(int *)(lVar24 + 0x58);
      } while (iVar15 != -1);
    }
  }
  lVar24 = 0;
LAB_1440e588d:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar24 + 0x3c)) {
    lVar14 = lVar24 + 0x40;
    if (*(longlong *)(lVar24 + 0x48) != 0) {
      lVar14 = *(longlong *)(lVar24 + 0x48);
    }
    iVar15 = *(int *)(lVar14 + ((longlong)(int)uVar10 & (longlong)*(int *)(lVar24 + 0x50) - 1U) * 4)
    ;
    if (iVar15 != -1) {
      lVar24 = *(longlong *)(lVar24 + 8);
LAB_1440e58c1:
      puVar13 = (undefined8 *)(lVar24 + (longlong)iVar15 * 0x18);
      if ((longlong *)*puVar13 != param_2) goto code_r0x0001440e58d1;
      iVar16 = *(int *)(lVar14 + (longlong)*(int *)((longlong)puVar13 + 0x14) * 4);
      if (iVar16 == iVar15) {
        puVar8 = (undefined4 *)(lVar14 + (longlong)*(int *)((longlong)puVar13 + 0x14) * 4);
      }
      else {
        do {
          lVar14 = (longlong)iVar16;
          iVar16 = *(int *)(lVar24 + 0x10 + lVar14 * 0x18);
        } while (iVar16 != iVar15);
        puVar8 = (undefined4 *)(lVar24 + lVar14 * 0x18 + 0x10);
      }
      *puVar8 = *(undefined4 *)(puVar13 + 2);
      FUN_1440ead5c();
    }
  }
LAB_1440e5914:
  puVar2 = (uint *)(param_1 + 0x4d8);
  uVar10 = *(uint *)(param_1 + 0x4f0);
  if (uVar10 == 0) {
    uVar22 = 1;
    uVar26 = 0;
    iVar15 = 0;
    uVar6 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x4e8);
    if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar6 = *puVar9;
    if (uVar6 == 0) {
      iVar15 = uVar10 + 0x1e;
      if (-1 < (int)(uVar10 - 1)) {
        iVar15 = uVar10 - 1;
      }
      uVar26 = 0;
      uVar22 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar22 = uVar26;
      }
      iVar15 = 0;
      do {
        if (uVar22 == uVar26) goto LAB_1440e59a8;
        iVar15 = iVar15 + 0x20;
        uVar6 = puVar9[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar26 = 0;
      iVar15 = 0;
    }
    uVar22 = (ulonglong)(-uVar6 & uVar6);
    uVar11 = uVar22 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar6 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    if ((int)uVar10 <= (int)uVar6) {
      uVar6 = uVar10;
    }
  }
  if (uVar6 != uVar10) {
    local_85 = local_49;
    uVar17 = uVar10;
    uVar25 = 0xffffffff;
    do {
      local_74 = uVar25;
      local_84 = iVar15;
      local_58 = uVar26;
      if (*(int *)(param_1 + 0x4d0) != *(int *)(param_1 + 0x4fc)) {
        lVar24 = *(longlong *)(param_1 + 0x4c8);
        uVar6 = *(uint *)(lVar24 + (longlong)(int)uVar6 * 0x60);
        lVar14 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(param_1 + 0x508) == 0) {
          lVar14 = lVar1;
        }
        iVar15 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & uVar6) * 4);
        while (iVar15 != -1) {
          lVar14 = lVar24 + (longlong)iVar15 * 0x60;
          if (*(uint *)(lVar24 + (longlong)iVar15 * 0x60) == uVar6) goto LAB_1440e5a12;
          iVar15 = *(int *)(lVar14 + 0x58);
        }
      }
      lVar14 = 0;
LAB_1440e5a12:
      iVar15 = *(int *)(lVar14 + 0x30);
      if (iVar15 == 0) {
        uVar11 = 1;
        uVar26 = 0;
        iVar12 = 0;
        iVar16 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar14 + 0x28);
        if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
          puVar9 = (uint *)(lVar14 + 0x18);
        }
        uVar6 = *puVar9;
        if (uVar6 == 0) {
          iVar16 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar16 = iVar15 + -1;
          }
          uVar26 = 0;
          uVar11 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar11 = uVar26;
          }
          iVar12 = 0;
          do {
            if (uVar11 == uVar26) goto LAB_1440e5c24;
            iVar12 = iVar12 + 0x20;
            uVar6 = puVar9[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar26 = 0;
          iVar12 = 0;
        }
        uVar11 = (ulonglong)(-uVar6 & uVar6);
        uVar3 = uVar11 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar16 = (iVar12 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar16) {
          iVar16 = iVar15;
        }
      }
      if (iVar16 != iVar15) {
        uVar6 = 0xffffffff;
        iVar18 = iVar15;
        do {
          iVar19 = *(int *)(*(longlong *)(lVar14 + 8) + 8 + (longlong)iVar16 * 0x18);
          if ((int)uVar4 <= iVar19) {
            plVar7 = (longlong *)(*(longlong *)(lVar14 + 8) + (longlong)iVar16 * 0x18);
            plVar5 = (longlong *)*plVar7;
            if (plVar5 != (longlong *)0x0) {
              lVar24 = *plVar5;
              if (lVar24 == 0) {
                cVar21 = '\0';
              }
              else {
                cVar21 = *(char *)(lVar24 + 0x160);
              }
              if (cVar21 == local_49) {
                *(int *)(plVar7 + 1) = iVar19 + -1;
                iVar18 = *(int *)(lVar14 + 0x30);
              }
            }
          }
          uVar6 = uVar6 & ~(uint)uVar11;
          puVar9 = *(uint **)(lVar14 + 0x28);
          if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
            puVar9 = (uint *)(lVar14 + 0x18);
          }
          iVar16 = (int)uVar26;
          lVar24 = (longlong)iVar16;
          uVar17 = puVar9[lVar24] & uVar6;
          if (uVar17 == 0) {
            iVar19 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar19 = iVar18 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar20 = iVar19;
            if (iVar19 < iVar16) {
              iVar20 = iVar16;
            }
            if (iVar16 < iVar19) {
              lVar23 = 0;
              do {
                uVar17 = puVar9[lVar24 + lVar23 + 1];
                if (uVar17 != 0) {
                  uVar26 = (ulonglong)(iVar16 + (int)lVar23 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_1440e5bd4;
                }
                iVar12 = iVar12 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar20 - lVar24 != lVar23);
              uVar6 = 0xffffffff;
              lVar24 = (longlong)iVar20;
            }
            uVar26 = lVar24 + 1U & 0xffffffff;
            iVar16 = iVar18;
          }
          else {
LAB_1440e5bd4:
            uVar11 = (ulonglong)(-uVar17 & uVar17);
            uVar3 = uVar11 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar16 = (iVar12 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if (iVar18 <= iVar16) {
              iVar16 = iVar18;
            }
          }
        } while (iVar16 != iVar15);
        uVar17 = *(uint *)(param_1 + 0x4f0);
        local_60 = uVar22;
      }
LAB_1440e5c24:
      uVar25 = local_74 & ~(uint)uVar22;
      puVar9 = *(uint **)(param_1 + 0x4e8);
      if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar16 = (int)local_58;
      lVar24 = (longlong)iVar16;
      uVar6 = puVar9[lVar24] & uVar25;
      uVar26 = local_58;
      iVar15 = local_84;
      if (uVar6 == 0) {
        iVar12 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar12 = uVar17 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = local_84 + 0x20;
        iVar18 = iVar12;
        if (iVar12 < iVar16) {
          iVar18 = iVar16;
        }
        if (iVar16 < iVar12) {
          lVar14 = 0;
          do {
            uVar6 = puVar9[lVar24 + lVar14 + 1];
            if (uVar6 != 0) {
              uVar25 = 0xffffffff;
              uVar26 = (ulonglong)(iVar16 + (int)lVar14 + 1);
              goto LAB_1440e5cb9;
            }
            iVar15 = iVar15 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar18 - lVar24 != lVar14);
          uVar25 = 0xffffffff;
          iVar16 = iVar18;
        }
        uVar26 = (ulonglong)(iVar16 + 1);
        uVar6 = uVar17;
      }
      else {
LAB_1440e5cb9:
        uVar22 = (ulonglong)(-uVar6 & uVar6);
        uVar11 = uVar22 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar6 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar6) {
          uVar6 = uVar17;
        }
      }
      local_80 = (ulonglong)uVar10;
      local_70 = puVar2;
      local_68 = lVar1;
    } while (uVar6 != uVar10);
  }
LAB_1440e59a8:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440e5d1e FUN_1440e5d1e body=411 status=ok
// SIG undefined FUN_1440e5d1e(void)

void FUN_1440e5d1e(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x5c0) == *(int *)(param_1 + 0x5ec)) {
    return;
  }
  if (*(int *)(param_1 + 0x3e0) == *(int *)(param_1 + 0x40c)) {
    return;
  }
  lVar4 = param_1 + 0x410;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x418);
  }
  iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
  if (iVar6 == -1) {
    return;
  }
  while (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar6 * 0x60) != param_2) {
    iVar6 = *(int *)((longlong)iVar6 * 0x60 + *(longlong *)(param_1 + 0x3d8) + 0x58);
    if (iVar6 == -1) {
      return;
    }
  }
  uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  lVar4 = param_1 + 0x5f0;
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x5f8);
  }
  iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x600) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4
                  );
  if (iVar6 == -1) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x5b8);
  iVar7 = iVar6;
  while (*(ulonglong *)(lVar4 + (longlong)iVar7 * 0x20) != param_3) {
    iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar4 + 0x18);
    if (iVar7 == -1) {
      return;
    }
  }
  do {
    lVar8 = lVar4 + (longlong)iVar6 * 0x20;
    if (*(ulonglong *)(lVar4 + (longlong)iVar6 * 0x20) == param_3) goto LAB_1440e5e3e;
    iVar6 = *(int *)(lVar8 + 0x18);
  } while (iVar6 != -1);
  lVar8 = 0;
LAB_1440e5e3e:
  iVar6 = *(int *)(lVar8 + 0x10);
  if ((longlong)iVar6 != 0) {
    lVar4 = *(longlong *)(lVar8 + 8);
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + lVar8);
      if ((((lVar1 != 0) && (cVar2 = FUN_140d2b622(param_1,param_2,lVar1), cVar2 != '\0')) &&
          (lVar5 = FUN_140d18446(param_1,param_2,lVar1), lVar5 != 0)) &&
         (*(char *)(lVar5 + 0x28) == '\0')) {
        *(undefined1 *)(lVar5 + 0x28) = 1;
        FUN_140d1855e(param_1 + 0x6d8,lVar1,lVar5,param_2);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar6 * 8 != lVar8);
  }
  return;
}



// FUNCTION 1440e5eba FUN_1440e5eba body=48 status=ok
// SIG undefined FUN_1440e5eba(void)

void FUN_1440e5eba(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (((param_4 & 0xfd) == 0) && ((*(byte *)(param_1 + 0x770) & 0xfd) != 0)) {
    FUN_1440e5eea(param_1);
  }
  *(byte *)(param_1 + 0x770) = param_4;
  return;
}



// FUNCTION 1440e5eea FUN_1440e5eea body=1637 status=ok
// SIG undefined FUN_1440e5eea(void)

void FUN_1440e5eea(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  int iVar23;
  bool bVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_138 [35];
  char local_115;
  undefined4 local_114;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  ulonglong *local_d8;
  uint *local_d0;
  double local_c8;
  short local_bc [2];
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if (lVar7 != 0) {
    if ((*(longlong *)(lVar7 + 0x1f0) == 0) || (lVar8 = FUN_141356fdc(), lVar8 == 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x30);
    }
    lVar7 = FUN_1400f6f32(lVar7);
    if (((lVar7 != 0) && (lVar8 != 0)) && (local_100 = *(longlong *)(lVar7 + 0x68), local_100 != 0))
    {
      local_115 = *(char *)(lVar8 + 0xb8);
      local_b8 = 0;
      uStack_b0 = 0;
      uVar10 = *(uint *)(param_1 + 0x80);
      if (uVar10 == 0) {
        uVar22 = 1;
        uVar16 = 0;
        iVar23 = 0;
        uVar5 = 0;
      }
      else {
        puVar9 = (uint *)param_1[0x7f];
        if ((uint *)param_1[0x7f] == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x7d);
        }
        uVar5 = *puVar9;
        if (uVar5 == 0) {
          iVar23 = uVar10 + 0x1e;
          if (-1 < (int)(uVar10 - 1)) {
            iVar23 = uVar10 - 1;
          }
          uVar16 = 0;
          uVar22 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar22 = uVar16;
          }
          iVar23 = 0;
          do {
            if (uVar22 == uVar16) goto LAB_1440e64e5;
            iVar23 = iVar23 + 0x20;
            uVar5 = puVar9[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar16 = 0;
          iVar23 = 0;
        }
        uVar22 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar22 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar5 = (iVar23 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar10 <= (int)uVar5) {
          uVar5 = uVar10;
        }
      }
      if (uVar5 != uVar10) {
        uVar20 = 0xffffffff;
        local_f8 = (ulonglong)uVar10;
        local_e8 = lVar8;
        local_d0 = (uint *)(param_1 + 0x7d);
        do {
          puVar17 = (undefined4 *)((longlong)(int)uVar5 * 0x60 + param_1[0x7b]);
          bVar24 = (longlong)uStack_b0 < 0;
          uStack_b0 = uStack_b0 & 0xffffffff00000000;
          if (bVar24) {
            FUN_1440eb066(&local_b8);
          }
          uVar19 = *puVar17;
          cVar4 = FUN_140d174a2(param_1,uVar19);
          if (((cVar4 != '\0') && (FUN_140d173bc(local_100,local_bc,uVar19), -1 < local_bc[0])) &&
             (lVar7 = FUN_140bccd38(local_100,local_bc), lVar7 != 0)) {
            lVar8 = FUN_14030d4a0();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
              local_108 = lVar7;
              if ((longlong)(int)param_1[0x1d] != 0) {
                puVar21 = (ulonglong *)param_1[0x1c];
                local_d8 = puVar21 + (int)param_1[0x1d];
                local_e0 = puVar17 + 0x10;
                do {
                  lVar7 = FUN_140b3e1a8(*puVar21);
                  if ((lVar7 != 0) && (puVar17[4] != puVar17[0xf])) {
                    uVar2 = *puVar21;
                    uVar10 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
                    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
                    puVar13 = *(undefined4 **)(puVar17 + 0x12);
                    if (*(undefined4 **)(puVar17 + 0x12) == (undefined4 *)0x0) {
                      puVar13 = local_e0;
                    }
                    iVar15 = puVar13[puVar17[0x14] - 1 & (uVar10 >> 0x10 ^ uVar10)];
                    if (iVar15 != -1) {
                      do {
                        puVar1 = (ulonglong *)(*(longlong *)(puVar17 + 2) + (longlong)iVar15 * 0x18)
                        ;
                        if (*puVar1 == uVar2) {
                          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) break;
                          local_110 = (undefined8 *)puVar1[1];
                          local_c8 = 0.0;
                          local_114 = *(undefined4 *)(lVar7 + 0x18);
                          lVar8 = FUN_140f0c81a(local_108);
                          if (lVar8 != 0) {
                            FUN_140f0c9b6(lVar8,local_114,&local_c8);
                          }
                          dVar3 = ((double)CONCAT44(0x43300000,(int)*local_110) - 4503599627370496.0
                                  ) + ((double)CONCAT44(0x45300000,
                                                        (int)((ulonglong)*local_110 >> 0x20)) -
                                      1.9342813113834067e+25);
                          if (local_115 != '\0') {
                            lVar8 = *(longlong *)*puVar21;
                            if ((lVar8 == 0) || (*(byte *)(lVar8 + 0x4a0) == 0)) {
                              uVar14 = 0;
                            }
                            else {
                              uVar14 = *(undefined8 *)
                                        (*(longlong *)(lVar8 + 0x498) + -0x50 +
                                        (ulonglong)((uint)*(byte *)(lVar8 + 0x4a0) * 0x50));
                            }
                            auVar26._8_4_ = (int)((ulonglong)uVar14 >> 0x20);
                            auVar26._0_8_ = uVar14;
                            auVar26._12_4_ = 0x45300000;
                            dVar3 = (dVar3 * 100.0) /
                                    (((double)CONCAT44(0x43300000,(int)uVar14) - 4503599627370496.0)
                                    + (auVar26._8_8_ - 1.9342813113834067e+25));
                          }
                          if ((dVar3 - local_c8 <= 9.999999747378752e-05) ||
                             (fVar25 = (float)FUN_145bca954(local_108), uVar2 = uStack_b0,
                             dVar3 - (double)fVar25 <= 9.999999747378752e-05)) break;
                          lVar8 = *(longlong *)*puVar21;
                          iVar15 = (int)uStack_b0;
                          if ((local_115 == '\0') && (*(char *)(lVar7 + 0x1c) != '\0')) {
                            if ((*(char *)((longlong)local_110 + 0x11) == '\0') &&
                               (*(char *)((longlong)local_110 + 0x12) != '\x01')) break;
                            uVar19 = *(undefined4 *)(lVar7 + 0x18);
                            puVar18 = (undefined8 *)&DAT_00000001;
                            uVar14 = 1;
                            uVar6 = 1;
                          }
                          else {
                            puVar18 = (undefined8 *)*local_110;
                            if (puVar18 == (undefined8 *)0x0) break;
                            if ((lVar8 == 0) || (*(byte *)(lVar8 + 0x4a0) == 0)) {
                              uVar14 = 0;
                            }
                            else {
                              uVar14 = *(undefined8 *)
                                        (*(longlong *)(lVar8 + 0x498) + -0x50 +
                                        (ulonglong)((uint)*(byte *)(lVar8 + 0x4a0) * 0x50));
                            }
                            uVar19 = *(undefined4 *)(lVar7 + 0x18);
                            uVar6 = (undefined4)uVar14;
                          }
                          uVar10 = (int)uStack_b0 + 1;
                          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
                          if (uStack_b0._4_4_ < uVar10) {
                            local_114 = uVar19;
                            local_110 = puVar18;
                            local_f0 = uVar14;
                            FUN_1440ea328(&local_b8,uVar2 & 0xffffffff);
                            uVar6 = (undefined4)local_f0;
                            puVar18 = local_110;
                            uVar19 = local_114;
                          }
                          lVar7 = (longlong)iVar15;
                          *(undefined4 *)(local_b8 + lVar7 * 0xc) = uVar19;
                          *(int *)(local_b8 + 4 + lVar7 * 0xc) = (int)puVar18;
                          *(undefined4 *)(local_b8 + 8 + lVar7 * 0xc) = uVar6;
                          break;
                        }
                        iVar15 = (int)puVar1[2];
                      } while (iVar15 != -1);
                    }
                  }
                  puVar21 = puVar21 + 1;
                } while (puVar21 != local_d8);
              }
              FUN_143f02c38(local_e8,*(undefined4 *)(local_108 + 0xe0),&local_b8);
            }
          }
          uVar20 = uVar20 & ~(uint)uVar22;
          puVar9 = (uint *)param_1[0x7f];
          if ((uint *)param_1[0x7f] == (uint *)0x0) {
            puVar9 = local_d0;
          }
          uVar10 = *(uint *)(param_1 + 0x80);
          iVar15 = (int)uVar16;
          lVar7 = (longlong)iVar15;
          uVar5 = puVar9[lVar7] & uVar20;
          if (uVar5 == 0) {
            iVar11 = uVar10 + 0x1e;
            if (-1 < (int)(uVar10 - 1)) {
              iVar11 = uVar10 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar23 = iVar23 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar15) {
              iVar12 = iVar15;
            }
            if (iVar15 < iVar11) {
              lVar8 = 0;
              do {
                uVar5 = puVar9[lVar7 + lVar8 + 1];
                if (uVar5 != 0) {
                  uVar16 = (ulonglong)(iVar15 + (int)lVar8 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_1440e6492;
                }
                iVar23 = iVar23 + 0x20;
                lVar8 = lVar8 + 1;
              } while (iVar12 - lVar7 != lVar8);
              uVar20 = 0xffffffff;
              iVar15 = iVar12;
            }
            uVar16 = (ulonglong)(iVar15 + 1);
            uVar5 = uVar10;
          }
          else {
LAB_1440e6492:
            uVar22 = (ulonglong)(-uVar5 & uVar5);
            uVar2 = uVar22 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar5 = (iVar23 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)uVar10 <= (int)uVar5) {
              uVar5 = uVar10;
            }
          }
        } while (uVar5 != (uint)local_f8);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1440e64e5:
  if ((local_a0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440e6550 FUN_1440e6550 body=443 status=ok
// SIG undefined FUN_1440e6550(void)

void FUN_1440e6550(longlong param_1,undefined4 param_2,ulonglong *param_3,longlong *param_4,
                  uint param_5,char param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar5 = (ulonglong)param_5;
  param_3[4] = uVar5;
  *param_3 = uVar5;
  uVar2 = 1;
  if (uVar5 == 0) {
    if (*param_4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(*param_4 + 200);
    }
  }
  *(undefined1 *)(param_3 + 5) = uVar2;
  bVar3 = FUN_1440e6892(uVar5);
  if (*param_4 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(*param_4 + 0x4a0);
  }
  if (bVar3 == bVar4) {
    *(undefined1 *)((longlong)param_3 + 0x12) = 1;
    lVar1 = *param_4;
    if ((lVar1 == 0) || (*(char *)(lVar1 + 0x118) != '\x01')) {
      *(undefined1 *)((longlong)param_3 + 0x11) = 1;
      *(uint *)((longlong)param_3 + 0x14) = bVar4 - 1;
      lVar1 = *param_4;
      if ((lVar1 == 0) || (*(byte *)(lVar1 + 0x4a0) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ulonglong *)
                 (*(longlong *)(lVar1 + 0x498) + -0x50 +
                 (ulonglong)((uint)*(byte *)(lVar1 + 0x4a0) * 0x50));
      }
      param_3[1] = uVar6;
    }
    else {
      if ((byte)(bVar3 - 1) < *(byte *)(lVar1 + 0x4a0)) {
        uVar6 = *(ulonglong *)
                 (*(longlong *)(lVar1 + 0x498) + (ulonglong)((uint)(byte)(bVar3 - 1) * 0x50));
      }
      else {
        uVar6 = 0;
      }
      uVar5 = uVar5 % uVar6;
      bVar3 = FUN_1440e6892(uVar5 & 0xffffffff);
      *param_3 = uVar5;
      *(byte *)(param_3 + 2) = bVar3;
      *(uint *)((longlong)param_3 + 0x14) = bVar3 - 1;
    }
  }
  else {
    *(byte *)(param_3 + 2) = bVar3;
    *(uint *)((longlong)param_3 + 0x14) = bVar3 - 1;
  }
  if (bVar4 != 0) {
    lVar1 = *param_4;
    uVar6 = 0;
    do {
      if ((lVar1 == 0) || (*(byte *)(lVar1 + 0x4a0) <= uVar6)) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)*(undefined8 *)(*(longlong *)(lVar1 + 0x498) + uVar6 * 0x50);
      }
      if (uVar5 < (ulonglong)(longlong)iVar7) {
        param_3[1] = (longlong)iVar7;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uint)bVar4);
  }
  if ((param_4[2] != 0) && (*(char *)((longlong)param_3 + 0x11) == '\0')) {
    FUN_144a8b5fe(param_1 + 0x150);
  }
  if (param_6 == '\0') {
    return;
  }
  FUN_140d1855e(param_1 + 0x6d8,param_4,param_3,param_2);
  return;
}



// FUNCTION 1440e670c FUN_1440e670c body=388 status=ok
// SIG undefined FUN_1440e670c(void)

void FUN_1440e670c(longlong *param_1,undefined4 param_2,longlong param_3,longlong *param_4,
                  byte param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined1 local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    lVar2 = FUN_140d172b5(lVar2,param_2);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x9a8) + 0x10))(lVar2 + 0x9a8);
      if (lVar2 != 0) {
        local_68 = 0;
        puStack_60 = &DAT_3f800000ffffffff;
        local_50 = 0;
        uStack_48 = 0;
        local_58 = 1;
        if (*(int *)(param_3 + 0x14) < (int)(uint)param_5) {
          uVar4 = 0;
        }
        else {
          do {
            lVar5 = *param_4;
            if ((lVar5 == 0) || (*(byte *)(lVar5 + 0x4a0) <= param_5)) {
              lVar5 = 0;
            }
            else {
              lVar5 = *(longlong *)(lVar5 + 0x498) + (ulonglong)((uint)param_5 * 0x50) + 0x10;
            }
            lVar3 = FUN_140c520a2(lVar5);
            if (lVar3 != 0) {
              cVar1 = FUN_14105c016(lVar2,lVar3);
              if (cVar1 != '\0') {
                if (lVar5 == 0) {
                  local_80 = 0;
                  local_78 = 0;
                }
                else {
                  local_80 = FUN_140c520a2(lVar5);
                  local_78 = FUN_1418a5c14(lVar5);
                }
                local_70 = 1;
                FUN_14164c0ba(lVar2,&local_80,&local_68);
              }
            }
            param_5 = param_5 + 1;
          } while ((int)(uint)param_5 <= *(int *)(param_3 + 0x14));
          uVar4 = uStack_48 & 0xffffffff;
        }
        FUN_140de863f(local_50,uVar4);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440e6892 FUN_1440e6892 body=125 status=ok
// SIG undefined FUN_1440e6892(void)

ulonglong FUN_1440e6892(uint param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  
  lVar1 = *param_2;
  uVar4 = (ulonglong)param_1;
  if (lVar1 != 0) {
    uVar5 = *(uint *)(lVar1 + 0x4a0);
    if (1 < (byte)uVar5) {
      puVar6 = *(ulonglong **)(lVar1 + 0x498);
      uVar2 = 1;
      do {
        if ((((ulonglong)(uVar5 & 0xff) <= uVar2 - 1) || (*puVar6 <= uVar4)) && (uVar4 < puVar6[10])
           ) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        puVar6 = puVar6 + 10;
      } while ((uVar5 & 0xff) != uVar2);
    }
    if ((byte)uVar5 != 0) {
      uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + 0x498) + (ulonglong)((uVar5 - 1 & 0xff) * 0x50));
      goto LAB_1440e68f4;
    }
  }
  uVar5 = 0;
  uVar2 = 0;
LAB_1440e68f4:
  uVar3 = (ulonglong)(uVar5 & 0xff);
  if (uVar4 < uVar2) {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1440e6910 FUN_1440e6910 body=104 status=ok
// SIG undefined FUN_1440e6910(void)

uint * FUN_1440e6910(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x570) != *(int *)(param_1 + 0x59c)) {
    lVar1 = param_1 + 0x5a0;
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x5a8);
    }
    uVar4 = *(uint *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x5b0) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x568) + (longlong)(int)uVar4 * 0x18);
        if (*puVar3 == param_2) goto LAB_1440e696c;
        uVar4 = puVar3[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar3 = (uint *)0x0;
LAB_1440e696c:
  puVar2 = puVar3 + 2;
  if (puVar3 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 1440e6978 FUN_1440e6978 body=4206 status=ok
// SIG undefined FUN_1440e6978(void)

void FUN_1440e6978(longlong *param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
                  char param_5,char param_6,longlong param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  undefined8 unaff_R13;
  undefined4 uVar19;
  ulonglong uVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_428 [32];
  undefined4 local_408;
  undefined4 local_400;
  longlong local_3f8;
  undefined8 local_3f0;
  wchar_t *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  undefined8 *local_3d0;
  undefined1 *local_3c8;
  code *local_3c0;
  longlong *local_3b8;
  longlong local_3b0;
  ulonglong local_3a8;
  longlong local_3a0;
  undefined1 local_398 [8];
  undefined8 *local_390;
  ulonglong local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined1 *puStack_370;
  undefined8 local_368;
  longlong lStack_360;
  ulonglong local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  ulonglong uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  lVar6 = (**(code **)(*param_1 + 0x180))();
  if (((lVar6 == 0) || (lVar6 = FUN_1400f6f32(lVar6), lVar6 == 0)) ||
     (lVar6 = *(longlong *)(lVar6 + 0x68), lVar6 == 0)) goto LAB_1440e73e0;
  FUN_140d27df6(lVar6,&local_378,param_7);
  uVar5 = FUN_143d9d0da(lVar6,&local_378);
  if (((uVar5 == 0xffffffff) || (*(char *)((longlong)param_2 + 0x11) != '\0')) ||
     ((char)param_2[5] != '\x01')) goto LAB_1440e73e0;
  plVar11 = (longlong *)*param_2;
  bVar17 = (byte)param_2[2];
  uVar13 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),bVar17);
  bVar9 = 0;
  if (param_3 == (longlong *)0x0) {
LAB_1440e6b15:
    iVar18 = (int)plVar11;
    lVar6 = 0;
  }
  else {
    uVar8 = (longlong)plVar11 + (longlong)param_4;
    *param_2 = uVar8;
    lVar6 = *param_3;
    if (((lVar6 == 0) || (iVar18 = *(int *)(lVar6 + 0x4a0), iVar18 == 0)) || (iVar18 < 2)) {
      bVar9 = 0;
    }
    else {
      bVar9 = 0;
      do {
        if (uVar8 < *(ulonglong *)(*(longlong *)(lVar6 + 0x498) + (ulonglong)((uint)bVar9 * 0x50)))
        break;
        bVar9 = bVar9 + 1;
      } while ((uint)bVar9 < iVar18 - 1U);
    }
    *(byte *)(param_2 + 2) = bVar9;
    lVar6 = *param_3;
    if ((lVar6 == 0) || (*(byte *)(lVar6 + 0x4a0) <= bVar9)) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(ulonglong *)(*(longlong *)(lVar6 + 0x498) + (ulonglong)((uint)bVar9 * 0x50));
    }
    param_2[1] = uVar14;
    lVar6 = *param_3;
    if (lVar6 == 0) {
      bVar22 = false;
LAB_1440e6af5:
      *(bool *)((longlong)param_2 + 0x11) = bVar22;
      if ((bVar17 < bVar9) || (bVar9 = 0, bVar22 != false)) goto LAB_1440e7764;
    }
    else {
      if ((longlong)*(int *)(lVar6 + 0x4a0) != 0) {
        bVar22 = *(ulonglong *)
                  (*(longlong *)(lVar6 + 0x498) + -0x50 + (longlong)*(int *)(lVar6 + 0x4a0) * 0x50)
                 <= uVar8;
        goto LAB_1440e6af5;
      }
      *(undefined1 *)((longlong)param_2 + 0x11) = 1;
      bVar22 = true;
LAB_1440e7764:
      local_3b8 = plVar11;
      if ((((param_7 != 0) && (lVar6 = (**(code **)(*param_1 + 0x180))(), lVar6 != 0)) &&
          (lVar6 = FUN_1400f6f32(), lVar6 != 0)) && (*(longlong *)(lVar6 + 0x68) != 0)) {
        bVar9 = bVar22 + (char)param_2[2];
        FUN_140d27df6(*(longlong *)(lVar6 + 0x68),local_398,param_7);
        lVar6 = (**(code **)(*param_1 + 0x180))();
        if ((lVar6 != 0) &&
           (local_3b0 = (**(code **)(*(longlong *)(param_7 + 0x9a8) + 0x10))(), local_3b0 != 0)) {
          uVar16 = *(uint *)((longlong)param_2 + 0x14);
          uVar8 = (ulonglong)uVar16;
          bVar10 = bVar17;
          if ((int)(uint)bVar17 < (int)uVar16) {
            bVar10 = (byte)uVar16;
          }
          uVar14 = (ulonglong)bVar9;
          uVar16 = (uint)bVar10;
          if (uVar16 < bVar9) {
            uVar20 = (ulonglong)uVar16;
            lVar6 = (ulonglong)(uVar16 * 0x50) + 0x10;
            local_3a8 = uVar14;
            do {
              uVar16 = (uint)uVar8;
              lVar12 = *param_3;
              if (((lVar12 != 0) && ((byte)uVar20 < *(byte *)(lVar12 + 0x4a0))) &&
                 (lVar12 = *(longlong *)(lVar12 + 0x498) + lVar6, lVar12 != 0)) {
                if (*(char *)(param_7 + 0x178) == '\x03') {
                  local_378 = (code *)0x0;
                  local_368 = 0;
                  puStack_370 = &DAT_3f800000ffffffff;
                  lStack_360 = 0;
                  local_358 = 0;
                  local_3a0 = lVar12;
                  local_390 = (undefined8 *)FUN_140c520a2(lVar12);
                  local_388 = FUN_1418a5c14(local_3a0);
                  local_380 = 1;
                  FUN_14164c0ba(local_3b0,&local_390,&local_378);
                  FUN_140de863f(lStack_360,local_358 & 0xffffffff);
                  if (lStack_360 != 0) {
                    FUN_1400020a8();
                  }
                  uVar16 = *(uint *)((longlong)param_2 + 0x14);
                  uVar14 = local_3a8;
                }
                uVar8 = (ulonglong)uVar16;
                if ((int)uVar16 <= (int)uVar20) {
                  uVar8 = uVar20 & 0xffffffff;
                }
                *(int *)((longlong)param_2 + 0x14) = (int)uVar8;
              }
              uVar20 = uVar20 + 1;
              lVar6 = lVar6 + 0x50;
            } while (uVar14 != uVar20);
          }
        }
      }
      bVar9 = *(byte *)((longlong)param_2 + 0x11);
      plVar11 = local_3b8;
    }
    iVar18 = (int)plVar11;
    if ((bVar9 & 1) == 0) goto LAB_1440e6b15;
    lVar6 = *param_2 - param_2[1];
    *param_2 = param_2[1];
    *(undefined1 *)((longlong)param_2 + 0x12) = 1;
  }
  if ((bVar9 & 1) == 0) {
    if (bVar17 < (byte)param_2[2]) {
      if (param_6 == '\0') {
        local_3b8 = param_1 + 0xd5;
        do {
          if (param_5 != '\0') {
            FUN_148d01664(local_3b8,param_3,uVar13 & 0xffffffff,uVar5);
          }
          FUN_148d01720(param_1 + 0xe1,uVar5,param_3,uVar13 & 0xffffffff);
          bVar17 = (char)uVar13 + 1;
          uVar13 = CONCAT71((int7)(uVar13 >> 8),bVar17);
        } while (bVar17 < (byte)param_2[2]);
      }
    }
    else {
      lVar6 = *param_3;
      if (lVar6 == 0) {
        iVar21 = 0;
      }
      else {
        iVar1 = *(int *)(lVar6 + 0x4a0);
        iVar21 = 0;
        if ((iVar1 == 0) || (iVar1 < 2)) {
          bVar17 = 0;
        }
        else {
          bVar17 = 0;
          do {
            if ((ulonglong)(longlong)iVar18 <
                *(ulonglong *)(*(longlong *)(lVar6 + 0x498) + (ulonglong)((uint)bVar17 * 0x50)))
            break;
            bVar17 = bVar17 + 1;
          } while ((uint)bVar17 < iVar1 - 1U);
        }
        if (bVar17 < (byte)iVar1) {
          lVar6 = *(longlong *)(lVar6 + 0x498);
          uVar16 = (uint)bVar17;
          lVar12 = *(longlong *)(lVar6 + 8 + (ulonglong)(uVar16 * 0x50));
          if (lVar12 == 0) {
            uVar13 = *(ulonglong *)(lVar6 + (ulonglong)(uVar16 * 0x50));
          }
          else {
            iVar21 = 0;
            if (bVar17 != 0) {
              iVar21 = *(int *)(lVar6 + (ulonglong)((uint)(byte)(bVar17 - 1) * 0x50));
            }
            uVar13 = *(ulonglong *)(lVar6 + (ulonglong)(uVar16 * 0x50));
            for (; (ulonglong)(longlong)iVar21 < uVar13; iVar21 = iVar21 + (int)lVar12) {
              if (iVar18 < iVar21) goto LAB_1440e71cc;
            }
          }
          iVar21 = (int)uVar13;
        }
      }
LAB_1440e71cc:
      if ((param_5 == '\x01' && param_6 == '\0') && (ulonglong)(longlong)iVar21 <= *param_2) {
        FUN_148d017da(param_1 + 0xd8,param_3,param_2,uVar5);
      }
    }
  }
  else {
    if (param_6 == '\0') {
      if (param_5 != '\0') {
        FUN_1440eb096(param_1 + 0xd2,param_3,uVar5);
      }
      FUN_1440eac36(param_1 + 0xde,uVar5,param_3);
    }
    lVar12 = *param_3;
    if (lVar12 != 0) {
      if (*(char *)(lVar12 + 0x160) == '\x0e') {
        FUN_145c3443a(param_1 + 0xc,param_3);
        lVar12 = *param_3;
        if (lVar12 == 0) goto LAB_1440e6b8d;
      }
      if ((*(char *)(lVar12 + 0x118) == '\x01') &&
         (FUN_14606898a(param_1,uVar5,param_3), lVar6 != 0)) {
        local_3f8 = param_7;
        local_400 = CONCAT31(local_400._1_3_,param_6);
        local_408 = CONCAT31(local_408._1_3_,param_5);
        FUN_1440e6978(param_1,param_2,param_3,lVar6);
      }
    }
LAB_1440e6b8d:
    iVar18 = (int)param_1[0x6f];
    *(uint *)(param_1 + 0x6f) = iVar18 + 1U;
    if (*(uint *)((longlong)param_1 + 0x37c) < iVar18 + 1U) {
      FUN_1466226b8(param_1 + 0x6e,iVar18);
    }
    lVar6 = param_1[0x6e];
    *(uint *)(lVar6 + (longlong)iVar18 * 0x10) = uVar5;
    *(longlong **)(lVar6 + 8 + (longlong)iVar18 * 0x10) = param_3;
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        plVar11 = (longlong *)(lVar6 + 0x458);
      }
      else {
        plVar11 = (longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      local_3b0 = *plVar11;
      local_390 = (undefined8 *)0x0;
      local_388 = local_388 & 0xffffffff00000000;
      FUN_1446efa72(&local_390,0,3,0x10);
      puVar3 = local_390;
      local_388 = CONCAT44(local_388._4_4_,3);
      *local_390 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_390[2] = lVar12;
      *local_390 = &PTR_FUN_14b964550;
      local_390[3] = 0;
      iVar18 = 0;
      local_3b8 = param_4;
      if (param_1 != (longlong *)0x0) {
        uVar16 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_390 + 3) = uVar16;
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar18 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar18 = DAT_14c964868 + 1;
          UNLOCK();
          iVar21 = DAT_14c964868 + 1;
          bVar22 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar18;
          if (bVar22) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar21);
          }
          LOCK();
          iVar18 = *(int *)(lVar6 + 0x10);
          bVar22 = iVar18 == 0;
          if (bVar22) {
            *(int *)(lVar6 + 0x10) = iVar21;
            iVar18 = 0;
          }
          UNLOCK();
          if (bVar22) {
            iVar18 = iVar21;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar18;
      puVar3[4] = FUN_145a9e05e;
      *(undefined4 *)(puVar3 + 5) = 0;
      local_378 = (code *)0x0;
      puStack_370 = (undefined1 *)((ulonglong)puStack_370 & 0xffffffff00000000);
      FUN_14487d8d8(&local_378,&local_390);
      uStack_338 = CONCAT71(uStack_338._1_7_,1);
      FUN_14016fdb0(local_3b0,local_398,&local_378);
      (*(code *)(&PTR_LAB_14a1c87a0)[uStack_338 & 0xff])(&local_378);
      param_4 = local_3b8;
      if ((int)local_388 != 0) {
        if (local_390 == (undefined8 *)0x0) goto LAB_1440e6d72;
        (**(code **)*local_390)(local_390,0);
        FUN_1446efa72(&local_390,0,0,0x10);
        local_388 = local_388 & 0xffffffff00000000;
      }
      if (local_390 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_1440e6d72:
    puVar3 = (undefined8 *)param_3[2];
    local_390 = puVar3;
    if ((puVar3 != (undefined8 *)0x0) &&
       (fVar23 = (float)FUN_1418e03a2(param_1,uVar5,&local_390), 0.9999 <= fVar23)) {
      uVar16 = (uint)local_378;
      local_378 = (code *)CONCAT44(0xbf800000,uVar16 & 0xffffff00);
      puStack_370 = (undefined1 *)((ulonglong)puStack_370 & 0xffffffffffffff00);
      local_368 = 0;
      lStack_360 = 0;
      local_358 = local_358 & 0xffffffff00000000;
      local_2f0 = 0;
      local_2e8 = 0x200000000;
      local_350 = 0;
      uStack_348 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_330 = 0;
      uStack_328 = 0;
      FUN_1405c5fa2();
      local_2d8 = &DAT_14cb769e8;
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_2e0 = &PTR_FUN_14b0394b0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2b0 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = 0;
      local_274 = 0;
      uStack_26c = 0;
      local_264 = 0;
      uStack_25c = 0;
      local_254 = 0;
      uStack_24c = 0;
      local_244 = 0;
      local_238 = FUN_140938dea();
      local_230 = 0xffffffff;
      local_1c8 = 0;
      local_1c0 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1bc = 0xffffffff00000080;
      local_1b4 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      local_170 = 0xf;
      local_168 = 1;
      local_164 = 0;
      uStack_15c = 0;
      local_150 = 0x100000000;
      local_148 = 1;
      local_140 = 0;
      local_13c = 0;
      local_138 = 0;
      local_110 = 0;
      local_108 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_104 = 0xffffffff00000080;
      local_fc = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_d4 = 0;
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_e0 = 0;
      local_d8 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_70 = 0x100000000;
      local_68 = 0;
      local_378 = (code *)CONCAT71(local_378._1_7_,0x19);
      uStack_84 = SUB84(puVar3,0);
      uStack_80 = (undefined4)((ulonglong)puVar3 >> 0x20);
      FUN_140896820(param_1,uVar5,&local_378);
      FUN_140d17bd8(&local_378);
    }
  }
  lVar6 = FUN_140b3e1a8(param_3);
  if ((lVar6 != 0) && (lVar12 = *(longlong *)(param_7 + 0x430), lVar12 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_378 = FUN_1417de738;
      local_3c0 = (code *)&LAB_145893408;
      local_3c8 = &LAB_1458cbbd2;
      local_3d0 = &local_378;
      local_3d8 = &LAB_147ba21f1;
      local_3e0 = &LAB_1463e9233;
      local_3e8 = L"Engine";
      local_3f0 = 0;
      local_3f8 = CONCAT44(local_3f8._4_4_,0x1000000c);
      local_400 = 8;
      local_408 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar12 = *(longlong *)(param_7 + 0x430);
      if (lVar12 == 0) goto LAB_1440e7279;
    }
    if ((((DAT_14cae9568 != 0) && (lVar7 = *(longlong *)(lVar12 + 0x10), lVar7 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      lVar7 = FUN_14030d4a0();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
        lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
        if (((lVar7 == 0) ||
            ((*(longlong *)(lVar7 + 0x1f0) == 0 || (lVar7 = FUN_141356fdc(), lVar7 == 0)))) ||
           (*(longlong *)(lVar7 + 0x30) == 0)) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *(char *)(*(longlong *)(lVar7 + 0x30) + 0xb8);
        }
        lVar7 = *param_3;
        uVar19 = 0;
        if ((lVar7 != 0) && (uVar19 = 0, *(byte *)(lVar7 + 0x4a0) != 0)) {
          uVar19 = *(undefined4 *)
                    (*(longlong *)(lVar7 + 0x498) + -0x50 +
                    (ulonglong)((uint)*(byte *)(lVar7 + 0x4a0) * 0x50));
        }
        if (param_4 != (longlong *)0x0) {
          if (cVar4 == '\0' && *(char *)(lVar6 + 0x1c) == '\x01') {
            if ((*(char *)((longlong)param_2 + 0x11) != '\0') ||
               (*(char *)((longlong)param_2 + 0x12) == '\x01')) {
              uVar2 = *(undefined4 *)(lVar6 + 0x18);
              uVar13 = 1;
              uVar19 = 1;
              goto LAB_1440e74dd;
            }
          }
          else {
            uVar13 = *param_2;
            if (uVar13 != 0) {
              uVar2 = *(undefined4 *)(lVar6 + 0x18);
LAB_1440e74dd:
              FUN_145db0bea(lVar12,uVar2,uVar13,uVar19);
            }
          }
        }
      }
    }
  }
LAB_1440e7279:
  if (((param_3 != (longlong *)0x0) &&
      (lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 != 0)) &&
     (lVar6 = FUN_140d7139d(lVar6,uVar5), lVar6 != 0)) {
    if (DAT_14cbae3d8 == 0) {
      local_378 = FUN_141030f22;
      local_3c0 = FUN_14081d0ea;
      local_3c8 = &LAB_1464f5fc4;
      local_3d0 = &local_378;
      local_3d8 = &LAB_148c3dd26;
      local_3e0 = &LAB_1459673ba;
      local_3e8 = L"Engine";
      local_3f0 = 0;
      local_3f8 = CONCAT44(local_3f8._4_4_,0x10000004);
      local_400 = 0x10;
      local_408 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
        ((plVar11 = (longlong *)FUN_1401b2ade(lVar6), plVar11 != (longlong *)0x0 &&
         ((cVar4 = (**(code **)(*plVar11 + 0x6c8))(plVar11), cVar4 != '\0' &&
          ((char)plVar11[0x2f] == '\x03')))))) &&
       ((int)param_1[0x7c] != *(int *)((longlong)param_1 + 0x40c))) {
      plVar11 = param_1 + 0x82;
      if ((longlong *)param_1[0x83] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[0x83];
      }
      iVar18 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[0x84] - 1U & uVar5) * 4);
      if (iVar18 != -1) {
        do {
          lVar12 = param_1[0x7b] + (longlong)iVar18 * 0x60;
          if (*(uint *)(param_1[0x7b] + (longlong)iVar18 * 0x60) == uVar5) {
            if ((lVar12 != 0) && ((longlong *)(lVar12 + 8) != (longlong *)0x0)) {
              uVar13 = (ulonglong)*(uint *)((longlong)param_3 + 0x1c);
              if (*(uint *)((longlong)param_3 + 0x1c) != 0xffffffff) goto LAB_1440e76b1;
              if ((longlong)(int)param_1[0x19] != 0) {
                lVar7 = (longlong)(int)param_1[0x19] << 3;
                uVar13 = 0;
                goto LAB_1440e73a7;
              }
            }
            break;
          }
          iVar18 = *(int *)(lVar12 + 0x58);
        } while (iVar18 != -1);
      }
    }
  }
  goto LAB_1440e73ba;
  while( true ) {
    uVar13 = uVar13 + 1;
    lVar7 = lVar7 + -8;
    if (lVar7 == 0) break;
LAB_1440e73a7:
    if (*(longlong **)(param_1[0x18] + uVar13 * 8) == param_3) goto LAB_1440e76b1;
  }
  goto LAB_1440e73ba;
LAB_1440e76b1:
  if (((-1 < (int)uVar13) && ((int)uVar13 < (int)param_1[0x19])) &&
     (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 0x3c))) {
    uVar16 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
             -0x7a143595;
    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
    lVar7 = lVar12 + 0x40;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      lVar7 = *(longlong *)(lVar12 + 0x48);
    }
    iVar18 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & (uVar16 >> 0x10 ^ uVar16))
                              * 4);
    if (iVar18 != -1) {
      do {
        puVar3 = (undefined8 *)(*(longlong *)(lVar12 + 8) + (longlong)iVar18 * 0x18);
        if ((longlong *)*puVar3 == param_3) {
          if (puVar3 + 1 != (longlong *)0x0 && puVar3 != (undefined8 *)0x0) {
            lVar12 = puVar3[1];
            uVar15 = 1;
            if (*(char *)(lVar12 + 0x11) == '\0') {
              uVar15 = *(undefined1 *)(lVar12 + 0x12);
            }
            FUN_140045b56(lVar6 + 0xf90,uVar13,CONCAT71((int7)((ulonglong)lVar7 >> 8),uVar15));
            FUN_1457a1eae(lVar6);
          }
          break;
        }
        iVar18 = *(int *)(puVar3 + 2);
      } while (iVar18 != -1);
    }
  }
LAB_1440e73ba:
  FUN_140d1855e(param_1 + 0xdb,param_3,param_2,uVar5);
  if ((*param_3 != 0) && (*(char *)(*param_3 + 0x160) == '\x01')) {
    FUN_145c3443a(param_1 + 0xf,param_3);
  }
LAB_1440e73e0:
  if ((local_60 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440e7a38 FUN_1440e7a38 body=472 status=ok
// SIG undefined FUN_1440e7a38(void)

undefined8 FUN_1440e7a38(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_14054e994();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
  }
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 < 1) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = FUN_14054e994();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar6;
    }
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 < 0) {
      return 0;
    }
  }
  if (iVar7 < *(int *)(lVar6 + 0x4a0)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = FUN_14054e994();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x10) = lVar5;
      lVar6 = *(longlong *)(param_1 + 0x18);
    }
    if (lVar6 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar6 = 0;
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(param_1 + 0x18) = lVar6;
      }
    }
    uVar4 = FUN_140c520a2((longlong)*(int *)(param_1 + 0x20) * 0x50 + *(longlong *)(lVar6 + 0x498) +
                          0x10);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1440e7c49 FUN_1440e7c49 body=41 status=ok
// SIG undefined FUN_1440e7c49(void)

void FUN_1440e7c49(void)

{
  DAT_14cbc5c70 = 0;
  if (DAT_14cbc5c68 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68e9e();
  return;
}



// FUNCTION 1440e7cb0 FUN_1440e7cb0 body=41 status=ok
// SIG undefined FUN_1440e7cb0(void)

void FUN_1440e7cb0(void)

{
  DAT_14cbc5d80 = 0;
  if (DAT_14cbc5d78 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68f3c();
  return;
}



// FUNCTION 1440e7cde FUN_1440e7cde body=1273 status=ok
// SIG undefined FUN_1440e7cde(void)

void FUN_1440e7cde(longlong param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined1 auStack_2b8 [32];
  undefined2 *local_298;
  undefined2 *local_290;
  undefined4 local_288;
  undefined4 local_280;
  double local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  int local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_238;
  undefined4 uStack_234;
  int local_230;
  undefined4 uStack_22c;
  double local_228;
  longlong local_220 [2];
  undefined4 local_210;
  undefined4 uStack_20c;
  int local_208;
  float local_1e0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  char local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x30) = 0x3f29a9aa;
    *(undefined4 *)(param_2 + 0x34) = 0x3ce0e0e2;
    *(undefined4 *)(param_2 + 0x38) = 0x3f64e4e6;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  }
  lVar8 = *(longlong *)(param_1 + 0x4208);
  if (lVar8 == 0) goto LAB_1440e7d3e;
  fVar1 = *(float *)(param_1 + 0x4288);
  puVar12 = &DAT_149e06338;
  puVar16 = &DAT_149e06338;
  if (*(char *)(param_1 + 0x422b) != '\0') {
    puVar16 = &DAT_149e06384;
  }
  uVar3 = *(undefined4 *)(lVar8 + 0x568);
  puVar15 = &DAT_149e06338;
  if (*(char *)(param_1 + 0x422a) != '\0') {
    puVar15 = &DAT_149e06384;
  }
  uVar4 = *(undefined4 *)(&DAT_00002bb0 + param_1);
  if (*(char *)(param_1 + 0x4229) != '\0') {
    puVar12 = &DAT_149e06384;
  }
  bVar2 = *(byte *)(lVar8 + 0x178);
  lVar8 = FUN_147867946();
  if ((longlong)*(int *)(lVar8 + 0x48) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = 0;
    lVar13 = 0;
    do {
      if (*(ulonglong *)(*(longlong *)(lVar8 + 0x40) + 8 + lVar13) == (ulonglong)bVar2) {
        local_a0 = *(undefined8 *)(*(longlong *)(lVar8 + 0x40) + lVar13);
        break;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)*(int *)(lVar8 + 0x48) * 0x10 != lVar13);
  }
  FUN_1400021e4(&local_a0,&local_210);
  if (local_208 == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  else {
    puVar14 = (undefined2 *)CONCAT44(uStack_20c,local_210);
  }
  local_278 = (double)fVar1;
  local_298 = puVar15;
  local_290 = puVar16;
  local_288 = uVar4;
  local_280 = uVar3;
  FUN_140002266(local_220,
                L"%s Wants To Glide: %s, May Want to Glide: %s, Glide Ready: %s, Jumped Count: %d (%d), Distance To Ground: %g"
                ,puVar14,puVar12);
  if (CONCAT44(uStack_20c,local_210) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    local_210 = 0;
    FUN_147d8f316(param_2,local_220);
  }
  FUN_140bdfda8(param_1,&local_a0);
  if (local_88 == '\x01') {
    local_298 = local_90;
    FUN_140002266(&local_238,L"X=%3.3f Y=%3.3f Z=%3.3f",local_a0,local_98);
    if (local_230 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)CONCAT44(uStack_234,local_238);
    }
    FUN_140002266(&local_210,L"Glide Modifier Force: %s",puVar12);
    if (CONCAT44(uStack_234,local_238) != 0) {
      FUN_1400020a8();
    }
    if (param_2 != 0) {
      local_238 = 0;
      FUN_147d8f316(param_2,&local_210);
    }
    if (CONCAT44(uStack_20c,local_210) != 0) {
      FUN_1400020a8();
    }
  }
  if (((((*(char *)(param_1 + 0x42b4) == '\x01') && (*(int *)(param_1 + 0x42ac) != 0)) &&
       (uVar5 = *(uint *)(param_1 + 0x42a8), -1 < (int)uVar5)) &&
      (((int)uVar5 < DAT_14c9647dc &&
       (plVar11 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0)))) &&
     (((int)plVar11[2] == *(int *)(param_1 + 0x42ac) && ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)
      ))) {
    if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar11;
    }
    else {
      lVar8 = 0;
    }
    FUN_148cfdc16(&local_210,lVar8 + 0x110);
    if (*(int *)(param_1 + 0x42ac) == 0) {
LAB_1440e81c3:
      uVar9 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x42a8);
      uVar9 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x42ac) ||
            ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1440e81c3;
        uVar9 = *puVar10;
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x1c8);
    if (lVar8 == 0) {
      local_248 = DAT_14c8464f0;
      local_258 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_250 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_258 = *(longlong *)(lVar8 + 0x260);
      uStack_250 = *(undefined8 *)(lVar8 + 0x268);
      local_248 = *(undefined8 *)(lVar8 + 0x270);
    }
    FUN_148d02a64(uVar9,&local_238,&local_258);
    dVar6 = (double)CONCAT44(uStack_234,local_238);
    dVar7 = (double)CONCAT44(uStack_22c,local_230);
    fVar1 = *(float *)(param_1 + 0x42b0);
    local_298 = (undefined2 *)local_228;
    FUN_140002266(&local_268,L"X=%3.3f Y=%3.3f Z=%3.3f",dVar6,dVar7);
    if (local_260 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)CONCAT44(uStack_264,local_268);
    }
    local_298 = (undefined2 *)(double)local_1e0;
    local_290 = (undefined2 *)(double)fVar1;
    FUN_140002266(&local_258,L"Glide Burst: TraveledOnForceVector %s (%g/%g), ElapsedTime: %g",
                  puVar12,SQRT(local_228 * local_228 + dVar6 * dVar6 + dVar7 * dVar7));
    if (CONCAT44(uStack_264,local_268) != 0) {
      FUN_1400020a8();
    }
    if (param_2 != 0) {
      local_268 = 0;
      FUN_147d8f316(param_2,&local_258);
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    FUN_14585a28e(&local_210);
  }
  if (local_220[0] != 0) {
    FUN_1400020a8();
  }
LAB_1440e7d3e:
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  }
  if ((local_80 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440e81d8 FUN_1440e81d8 body=18 status=ok
// SIG undefined FUN_1440e81d8(void)

undefined8 FUN_1440e81d8(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x2be0) >> 8),
                  *(longlong *)(param_1 + 0x2be0) == DAT_14cbc6c68);
}



// FUNCTION 1440e81ea FUN_1440e81ea body=225 status=ok
// SIG undefined FUN_1440e81ea(void)

void FUN_1440e81ea(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  double dStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  if (lVar2 == 0) {
    fVar3 = 0.0;
  }
  else {
    plVar1 = *(longlong **)(lVar2 + 0x3c0);
    if (plVar1 == (longlong *)0x0) {
      local_18 = DAT_14c846508;
      local_28 = DAT_14c8464f8;
      dStack_20 = DAT_14c846500;
    }
    else {
      (**(code **)(*plVar1 + 0x680))(plVar1,&local_28);
      lVar2 = *(longlong *)(param_1 + 0x1f0);
    }
    fVar3 = (float)dStack_20;
    if (*(char *)(lVar2 + 0x178) == '\x02') {
      fVar3 = (fVar3 * 65536.0) / 360.0;
      fVar3 = (float)((uint)((ulonglong)(longlong)ROUND(fVar3 + fVar3 + 0.5) >> 1) & 0xffff) * 360.0
              * 1.5258789e-05;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar3);
}



// FUNCTION 1440e82cc FUN_1440e82cc body=1158 status=ok
// SIG undefined FUN_1440e82cc(void)

double * FUN_1440e82cc(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  float local_124;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  float local_f8;
  undefined4 uStack_f4;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  dVar11 = DAT_14c8464e8;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar19 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  fVar15 = (float)SQRT(dVar19);
  if (fVar15 <= 0.0) {
    puVar8 = (undefined8 *)*param_1;
    uVar24 = (undefined4)puVar8[2];
    uVar25 = (undefined4)((ulonglong)puVar8[2] >> 0x20);
    uVar20 = (undefined4)*puVar8;
    uVar21 = (undefined4)((ulonglong)*puVar8 >> 0x20);
    uVar22 = (undefined4)puVar8[1];
    uVar23 = (undefined4)((ulonglong)puVar8[1] >> 0x20);
    dVar3 = DAT_14c8464f0;
    dVar2 = DAT_14c8464e8;
    dVar1 = DAT_14c8464e0;
  }
  else {
    pdVar7 = (double *)*param_1;
    dVar4 = *pdVar7;
    uVar20 = SUB84(dVar4,0);
    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = pdVar7[1];
    uVar22 = SUB84(dVar5,0);
    uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = pdVar7[2];
    uVar24 = SUB84(dVar6,0);
    uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar19 = (dVar6 * dVar3 + dVar4 * dVar1 + dVar2 * dVar5) / dVar19;
    dVar3 = dVar3 * dVar19;
    dVar2 = dVar2 * dVar19;
    dVar1 = dVar19 * dVar1;
  }
  dVar4 = (double)CONCAT44(uVar23,uVar22) - dVar2;
  dVar19 = (double)CONCAT44(uVar21,uVar20) - dVar1;
  fVar14 = (float)SQRT(dVar19 * dVar19 + dVar4 * dVar4);
  dVar5 = (double)CONCAT44(uVar25,uVar24) - dVar3;
  dVar6 = ((dVar5 * DAT_14c8462d0 + dVar19 * DAT_14c8462c0 + dVar4 * DAT_14c8462c8) /
          (DAT_14c8462d0 * DAT_14c8462d0 +
          DAT_14c8462c0 * DAT_14c8462c0 + DAT_14c8462c8 * DAT_14c8462c8)) * DAT_14c8462d0;
  fVar16 = (float)ABS(dVar6);
  plVar9 = (longlong *)param_1[2];
  if (0.0 < fVar14) {
    fVar18 = *(float *)(plVar9 + 0x8bb);
    fVar17 = fVar18 - fVar14;
    if (1e-08 <= fVar17 * fVar17) {
      plVar13 = plVar9 + 0x8bf;
      if (fVar14 < fVar18) {
        plVar13 = (longlong *)((longlong)plVar9 + 0x45ec);
      }
      fVar18 = *(float *)param_1[1] * *(float *)((longlong)plVar13 + 4);
      if (fVar18 <= fVar17) {
        fVar17 = fVar18;
      }
      if (fVar17 <= -fVar18) {
        fVar17 = -fVar18;
      }
      fVar18 = fVar17 + fVar14;
    }
    dVar4 = dVar4 * (double)(fVar18 / fVar14);
    dVar19 = dVar19 * (double)(fVar18 / fVar14);
    dVar5 = 0.0;
  }
  uVar20 = SUB84(DAT_14c8464e0,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
  dVar10 = DAT_14c8464f0;
  local_118 = dVar1;
  dStack_110 = dVar2;
  local_108 = dVar3;
  if (0.0 < fVar16) {
    local_120 = DAT_14c8464e0;
    local_124 = fVar15;
    FUN_1401e70c6(plVar9,&local_f8);
    fVar14 = local_f8;
    cVar12 = (char)uStack_f4;
    fVar18 = (float)(**(code **)(*plVar9 + 0x478))(plVar9);
    fVar15 = 0.0;
    if (1e-08 < ABS(fVar18)) {
      if (cVar12 == '\0') {
        fVar14 = 0.0;
      }
      fVar15 = fVar14 * *(float *)((longlong)plVar9 + 0x4244);
    }
    fVar15 = -fVar15;
    fVar14 = fVar15 - fVar16;
    if (1e-08 <= fVar14 * fVar14) {
      fVar15 = *(float *)param_1[1] * *(float *)(plVar9 + 0x84b);
      if (fVar15 <= fVar14) {
        fVar14 = fVar15;
      }
      if (fVar14 <= -fVar15) {
        fVar14 = -fVar15;
      }
      fVar15 = fVar14 + fVar16;
    }
    uVar20 = SUB84(local_120,0);
    uVar21 = (undefined4)((ulonglong)local_120 >> 0x20);
    dVar10 = dVar6 * (double)(fVar15 / fVar16);
    fVar15 = local_124;
  }
  local_138 = FUN_148cfdcf6(plVar9,fVar15,(float)SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2)
                           );
  FUN_140b81d26(&local_f8,&local_118,param_3,*(undefined4 *)param_1[1]);
  *param_2 = (double)CONCAT44(uVar21,uVar20) + dVar19 + (double)CONCAT44(uStack_f4,local_f8);
  param_2[1] = dVar11 + dVar4 + local_f0;
  param_2[2] = dVar5 + local_e8 + dVar10;
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1440e8753 FUN_1440e8753 body=119 status=ok
// SIG undefined FUN_1440e8753(void)

void FUN_1440e8753(void)

{
  if (DAT_14cbc5f60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbc5f50 != 0) {
    FUN_1400020a8();
  }
  if ((DAT_14cbc5ee8 != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(DAT_14cbc5ee8 + 0x50));
  }
  if ((DAT_14cbc5eb8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(DAT_14cbc5eb8 + 0x50));
    return;
  }
  return;
}



// FUNCTION 1440e87ca FUN_1440e87ca body=639 status=ok
// SIG undefined FUN_1440e87ca(void)

void FUN_1440e87ca(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  FUN_14056b53e();
  if ((*(char *)(param_1 + 0x43f0) != '\0') ||
     ((((*(byte *)(param_1 + 0x3115) & 1) == 0 && ((&DAT_00001100)[param_1] == '\x03')) ||
      (*(longlong *)(param_1 + 0x43d8) == 0)))) goto LAB_1440e8845;
  lVar7 = *(longlong *)(param_1 + 0x43d8) + 0x20;
  lVar2 = FUN_14485c28e(lVar7);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14485c28e(lVar7);
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_1440e8845;
    lVar7 = param_1 + 0x3210;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar6 = FUN_140153468(lVar7);
  if (((lVar6 == 0) || ((*(byte *)(lVar7 + 0x298) & 2) != 0)) ||
     (*(longlong *)(param_1 + 0x110) == 0)) goto LAB_1440e8845;
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_1440e8845;
    lVar7 = param_1 + 0x3210;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar7 = FUN_140153468(lVar7);
  if ((lVar2 == 0) || (lVar7 == 0)) goto LAB_1440e8845;
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) == '\x01') {
      lVar7 = param_1 + 0x3210;
      goto LAB_1440e8a07;
    }
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x3170) + 0xd8;
LAB_1440e8a07:
    lVar7 = FUN_140153468(lVar7);
  }
  if (lVar7 == lVar2) {
    if (*(longlong *)(param_1 + 0x110) == 0) {
      dVar8 = 3.4028234663852886e+38;
    }
    else {
      dVar8 = *(double *)(*(longlong *)(param_1 + 0x110) + 0x270);
    }
    if (((float)(dVar8 - *(double *)(param_1 + 0x3088)) <
         *(float *)(*(longlong *)(param_1 + 0x43d8) + 0x70)) || ((&DAT_00001100)[param_1] != '\x03')
       ) {
      FUN_145c8a45a(param_1);
    }
  }
LAB_1440e8845:
  plVar4 = *(longlong **)(param_1 + 0x1f0);
  if (plVar4 != (longlong *)0x0) {
    uVar3 = FUN_140437cd0();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140437cd0();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
        FUN_140258126(uVar3,param_2);
      }
    }
  }
  FUN_1404f9ac2(param_1);
  FUN_1440ef4da(param_1 + 0x44d8);
  if (((*(byte *)(param_1 + 0x4458) & 1) != 0) &&
     (((*(char *)(param_1 + 0x46e0) != '\0' || (*(char *)(param_1 + 0x4668) == '\x01')) &&
      (*(longlong **)(param_1 + 0x4208) != (longlong *)0x0)))) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4208) + 0x700))();
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x4458) = *(byte *)(param_1 + 0x4458) & 0xfe;
    }
  }
  if ((*(char *)(param_1 + 0x46e0) == '\x01') && ((&DAT_00004160)[param_1] == '\x01')) {
    (&DAT_00004160)[param_1] = 0;
    FUN_140254db4(param_1 + 0x41b0);
    *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) & 0xf9;
  }
  return;
}



// FUNCTION 1440e8a4a FUN_1440e8a4a body=414 status=ok
// SIG undefined FUN_1440e8a4a(void)

float FUN_1440e8a4a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[0x841] == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = (float)FUN_144b3ad2a(param_1[0x841] + 0x6890);
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x480))(param_1);
  local_b0 = *(undefined8 *)(param_1[0x842] + 0x270);
  FUN_1446dcdd4(&local_a8);
  if (DAT_14cb1d1f0 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_144837462(DAT_14cb1d1f0,&local_a8);
  }
  if (lStack_90 != 0) {
    FUN_1400020a8();
  }
  if (plVar1 != (longlong *)0x0) {
    local_88 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_80 = 0x8000000000;
    local_78 = 0xffffffff;
    local_48 = 0;
    lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,0,&local_a8);
    FUN_14052c7cd(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uStack_60 = uStack_60 & 0xffffffff00000000;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14052c796(&local_a8);
    if (lVar2 != 0) {
      fVar4 = fVar3 * *(float *)(lVar2 + 0x38);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return fVar4 * *(float *)(param_1 + 0x39c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440e8bea FUN_1440e8bea body=2622 status=ok
// SIG undefined FUN_1440e8bea(void)

ulonglong FUN_1440e8bea(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  double dVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar12 = (**(code **)(*param_1 + 0xd00))();
  if (((cVar12 != '\0') && (param_1[0x842] != 0)) && (param_1[0x841] != 0)) {
    if (param_1[0x87b] != 0) {
      lVar20 = param_1[0x87b] + 0x20;
      lVar15 = FUN_14485c28e(lVar20);
      if (lVar15 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = FUN_14485c28e(lVar20);
      }
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_1440e8cc7;
        plVar19 = param_1 + 0x642;
      }
      else {
        plVar19 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      lVar20 = FUN_140153468(plVar19);
      if (((lVar20 != 0) && ((*(byte *)(plVar19 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
        if (param_1[0x62e] == 0) {
          if ((char)param_1[0x696] != '\x01') goto LAB_1440e8cc7;
          plVar19 = param_1 + 0x642;
        }
        else {
          plVar19 = (longlong *)(param_1[0x62e] + 0xd8);
        }
        lVar20 = FUN_140153468(plVar19);
        if ((lVar15 != 0) && (lVar20 != 0)) {
          if (param_1[0x62e] == 0) {
            if ((char)param_1[0x696] == '\x01') {
              plVar19 = param_1 + 0x642;
              goto LAB_1440e93a6;
            }
            lVar20 = 0;
          }
          else {
            plVar19 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_1440e93a6:
            lVar20 = FUN_140153468(plVar19);
          }
          if (lVar20 == lVar15) goto LAB_1440e932d;
        }
      }
    }
LAB_1440e8cc7:
    if ((param_1[0x57c] != DAT_14cbc6c68) && (cVar12 = FUN_140fb2b02(param_1), cVar12 != '\0')) {
      if ((char)param_1[0x220] == '\n') {
        bVar21 = param_1[0x22] != 0;
      }
      else {
        bVar21 = false;
      }
      cVar12 = *(char *)((longlong)param_1 + 0x4229);
      cVar13 = (**(code **)(*param_1 + 0xd68))(param_1,param_2);
      if (cVar13 == '\0') {
        if ((0.0 <= *(float *)((longlong)param_1 + 0x2bd4)) &&
           ((*(int *)(param_1[0x3e] + 0x568) < 1 ||
            (*(float *)(param_1[0x842] + 0x288) <=
             *(float *)((longlong)param_1 + 0x2bd4) - *(float *)(param_1 + 0x57b))))) {
          dVar3 = (double)param_1[0x25];
          dVar4 = (double)param_1[0x26];
          dVar5 = (double)param_1[0x27];
          if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
            cVar13 = (char)param_1[0x3dc] != '\0';
          }
          else {
            plVar19 = (longlong *)param_1[0x3d7];
            if (plVar19 == (longlong *)0x0) {
LAB_1440e8e4d:
              cVar13 = '\0';
            }
            else if (*(code **)(*plVar19 + 0x40) == (code *)&LAB_1449cc0ea) {
              if (*(char *)((longlong)plVar19 + 0xb2) != '\0') goto LAB_1440e8e4d;
              if (*(char *)((longlong)plVar19 + 0x79) == '\0') {
                if ((int)plVar19[4] < 1) goto LAB_1440e8e4d;
                cVar13 = (char)plVar19[0xf];
              }
              else {
                cVar13 = '\x01';
              }
            }
            else {
              cVar13 = (**(code **)(*plVar19 + 0x40))();
            }
          }
          cVar14 = FUN_143cde786(param_1,param_2,param_3);
          if (cVar14 != '\0') {
            if (((bVar21) && (param_1[0x57c] != DAT_14cbc6c68)) && (cVar12 != '\0')) {
              (**(code **)(*param_1 + 0xf18))(param_1,1);
            }
            lVar15 = param_1[0x57e];
            if (lVar15 == 0) {
              uVar16 = FUN_140aed8fc();
              lVar15 = FUN_14477b664(uVar16);
              param_1[0x57e] = lVar15;
            }
            plVar19 = param_1 + 0x57d;
            if (param_1[0x57f] == 0) {
              if ((lVar15 != 0) && (*plVar19 != 0)) {
                plVar8 = *(longlong **)(lVar15 + 0xb8);
                if ((plVar8 == (longlong *)0x0) ||
                   (cVar12 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar12 == '\0')) {
                  param_1[0x57f] = 0;
                }
                else {
                  uVar16 = (**(code **)(*plVar8 + 0x110))(plVar8);
                  lVar15 = FUN_144aff482(uVar16,plVar19);
                  param_1[0x57f] = lVar15;
                  if (lVar15 != 0) goto LAB_1440e8f27;
                }
              }
            }
            else {
LAB_1440e8f27:
              if (cVar13 == '\x01' && param_1[0x3d7] != 0) {
                fVar24 = *(float *)(param_1[0x3d7] + 0x38);
                if (param_1[0x22] == 0) {
                  uVar23 = 0xe0000000;
                  uVar25 = 0x47efffff;
                }
                else {
                  uVar16 = *(undefined8 *)(param_1[0x22] + 0x270);
                  uVar23 = (undefined4)uVar16;
                  uVar25 = (undefined4)((ulonglong)uVar16 >> 0x20);
                }
                plVar8 = param_1 + 0x25;
                if ((float)(double)CONCAT44(uVar25,uVar23) < fVar24) {
                  if (DAT_14caf84d0 == (longlong *)0x0) {
                    local_d0 = &local_b8;
                    local_b8 = FUN_1449e2820;
                    local_c0 = FUN_14081d0ea;
                    local_c8 = &LAB_145a62952;
                    local_d8 = &LAB_147c8cd45;
                    local_e0 = &LAB_1461468ae;
                    local_e8 = L"Engine";
                    local_f0 = 0;
                    local_f8 = 0x10000006;
                    local_100 = 8;
                    local_108 = 0x218;
                    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4)
                    ;
                  }
                  plVar9 = DAT_14caf84d0;
                  lVar15 = DAT_14caf84d0[0x22];
                  if (lVar15 == 0) {
                    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
                    lVar15 = plVar9[0x22];
                  }
                  fVar1 = *(float *)(lVar15 + 0x38);
                  fVar2 = *(float *)(param_1 + 0x57a);
                  lVar15 = param_1[0x57e];
                  if (lVar15 == 0) {
                    uVar16 = FUN_140aed8fc();
                    lVar15 = FUN_14477b664(uVar16);
                    param_1[0x57e] = lVar15;
                  }
                  lVar20 = param_1[0x57f];
                  if (((lVar20 == 0) && (lVar20 = 0, lVar15 != 0)) && (*plVar19 != 0)) {
                    plVar9 = *(longlong **)(lVar15 + 0xb8);
                    if ((plVar9 == (longlong *)0x0) ||
                       (cVar12 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar12 == '\0')) {
                      lVar20 = 0;
                    }
                    else {
                      uVar16 = (**(code **)(*plVar9 + 0x110))(plVar9);
                      lVar20 = FUN_144aff482(uVar16,plVar19);
                    }
                    param_1[0x57f] = lVar20;
                  }
                  fVar29 = (fVar24 - (float)(double)CONCAT44(uVar25,uVar23)) +
                           *(float *)(lVar20 + 0x1c);
                  fVar24 = -fVar2;
                  uVar22 = -(uint)(fVar24 < fVar2);
                  fVar24 = fVar1 * (float)(~uVar22 & 0xbf800000 | (uint)fVar24 & uVar22) *
                           (fVar29 + fVar29);
                  if (fVar24 < 0.0) {
                    fVar24 = sqrtf(fVar24);
                  }
                  else {
                    fVar24 = SQRT(fVar24);
                  }
                  param_1[0x27] = (longlong)(double)fVar24;
                }
                uVar11 = DAT_14c8464e8._4_4_;
                uVar25 = (undefined4)DAT_14c8464e8;
                uVar23 = DAT_14c8464e0._4_4_;
                local_a8 = param_1[0x27];
                local_b8 = (code *)*plVar8;
                uStack_b0 = param_1[0x26];
                *(undefined4 *)plVar8 = (undefined4)DAT_14c8464e0;
                *(undefined4 *)((longlong)param_1 + 300) = uVar23;
                *(undefined4 *)(param_1 + 0x26) = uVar25;
                *(undefined4 *)((longlong)param_1 + 0x134) = uVar11;
                param_1[0x27] = DAT_14c8464f0;
                lVar15 = param_1[0x57a];
                *(undefined4 *)(param_1 + 0x57a) = 0xbf800000;
                bVar6 = *(byte *)(param_1[0x3e] + 0x550);
                if (param_1[0x57c] == DAT_14cbc6c78) {
                  *(undefined1 *)(param_1 + 0x845) = 1;
                }
                plVar9 = (longlong *)param_1[0x3d7];
                *(undefined1 *)((longlong)plVar9 + 0xb2) = 1;
                (**(code **)(*plVar9 + 0xf8))(plVar9,1);
                *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) | 8;
                *(byte *)(param_1[0x3e] + 0x550) =
                     *(byte *)(param_1[0x3e] + 0x550) & 0xf7 | bVar6 & 8;
                *(int *)(param_1 + 0x57a) = (int)lVar15;
                param_1[0x27] = local_a8;
                *(undefined4 *)plVar8 = (undefined4)local_b8;
                *(undefined4 *)((longlong)param_1 + 300) = local_b8._4_4_;
                *(undefined4 *)(param_1 + 0x26) = (undefined4)uStack_b0;
                *(undefined4 *)((longlong)param_1 + 0x134) = uStack_b0._4_4_;
                FUN_140d735ec(param_1);
              }
              if (param_1[0x57c] == DAT_14cbc6c58) {
                FUN_143cde6b6(param_1);
              }
              *(undefined1 *)((longlong)param_1 + 0x422b) = 0;
              cVar12 = FUN_140b89c26(param_1);
              if (cVar12 != '\0') {
                *(undefined1 *)((longlong)param_1 + 0x422b) = 1;
              }
              (**(code **)(*param_1 + 0xef8))(param_1);
              if ((*(char *)(param_1[0x842] + 0x51e) != '\0') ||
                 (0 < *(int *)(param_1[0x841] + 0x568))) {
                *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) | 8;
              }
              cVar12 = (**(code **)(*param_1 + 0xf38))(param_1);
              if (cVar12 != '\0') {
                plVar19 = (longlong *)CONCAT71((int7)((ulonglong)plVar19 >> 8),1);
                FUN_140153cb0(param_1,1);
                if (*(char *)(param_1[0x842] + 0x298) == '\x01') {
                  param_1[0x73] = DAT_14c8464f0;
                  uVar11 = DAT_14c8464e8._4_4_;
                  uVar25 = (undefined4)DAT_14c8464e8;
                  uVar23 = DAT_14c8464e0._4_4_;
                  *(undefined4 *)(param_1 + 0x71) = (undefined4)DAT_14c8464e0;
                  *(undefined4 *)((longlong)param_1 + 0x38c) = uVar23;
                  *(undefined4 *)(param_1 + 0x72) = uVar25;
                  *(undefined4 *)((longlong)param_1 + 0x394) = uVar11;
                  goto LAB_1440e932f;
                }
              }
            }
            plVar19 = (longlong *)CONCAT71((int7)((ulonglong)plVar19 >> 8),1);
            if (param_1[0x57c] != DAT_14cb75f40) {
              fVar24 = *(float *)(param_1[0x842] + 0x260);
              if (((((fVar24 != 1.0) || (NAN(fVar24))) && ((double)param_1[0x71] == 0.0)) &&
                  ((!NAN((double)param_1[0x71]) && ((double)param_1[0x72] == 0.0)))) &&
                 ((!NAN((double)param_1[0x72]) &&
                  (((double)param_1[0x73] == 0.0 && (!NAN((double)param_1[0x73]))))))) {
                dVar26 = (double)param_1[0x25] - dVar3;
                param_1[0x25] = (longlong)dVar26;
                dVar10 = (double)param_1[0x26] - dVar4;
                param_1[0x26] = (longlong)dVar10;
                dVar27 = (double)param_1[0x27] - dVar5;
                param_1[0x27] = (longlong)dVar27;
                dVar28 = dVar3 * dVar3 + dVar4 * dVar4;
                if ((dVar28 != 1.0) || (NAN(dVar28))) {
                  if (9.99999993922529e-09 <= dVar28) {
                    dVar4 = dVar4 * (1.0 / SQRT(dVar28));
                    dVar3 = dVar3 * (1.0 / SQRT(dVar28));
                  }
                  else {
                    dVar3 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                    dVar4 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  }
                }
                dVar28 = (double)((float)SQRT(dVar28) * *(float *)(param_1[0x842] + 0x260));
                param_1[0x25] = (longlong)(dVar26 + dVar3 * dVar28);
                param_1[0x26] = (longlong)(dVar10 + dVar4 * dVar28);
                param_1[0x27] = (longlong)(dVar27 + (double)(float)dVar5);
              }
            }
            goto LAB_1440e932f;
          }
        }
      }
      else {
        *(int *)(param_1 + 0x576) = (int)param_1[0x576] + 1;
        uVar7 = param_1[7];
        if (uVar7 < 0xffffffff00000000) {
          plVar19 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar19 = (longlong *)0x0;
          }
          (**(code **)(*plVar19 + 0x58))(plVar19,param_1,uVar7,10);
        }
        else {
          uVar22 = (uint)uVar7;
          if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c998088)) {
            puVar17 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar17 = DAT_14c998080;
            }
            if ((*(uint *)(puVar17 + ((uint)(uVar7 >> 3) & 0xffffffc)) >> (uVar22 & 0x1f) & 1) != 0)
            {
              lVar15 = DAT_14c998060 + (ulonglong)(uVar22 & 0x7fffffff) * 0x68;
              puVar18 = *(uint **)(lVar15 + 0x18);
              if (*(uint **)(lVar15 + 0x18) == (uint *)0x0) {
                puVar18 = (uint *)(lVar15 + 8);
              }
              *puVar18 = *puVar18 | 0x400;
              *(byte *)(lVar15 + 0x60) = *(byte *)(lVar15 + 0x60) | 1;
            }
          }
        }
        lVar15 = param_1[0x16];
        if (lVar15 == 0) {
          lVar15 = FUN_1448abda6(param_1);
        }
        *(float *)(param_1 + 0x57b) = (float)*(double *)(lVar15 + 0x6d0);
        if (param_1[0x3e] != 0) {
          *(int *)(param_1[0x3e] + 0x568) = (int)param_1[0x576];
        }
      }
    }
  }
LAB_1440e932d:
  plVar19 = (longlong *)0x0;
LAB_1440e932f:
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar19 & 0xffffffff;
}



// FUNCTION 1440e9650 FUN_1440e9650 body=293 status=ok
// SIG undefined FUN_1440e9650(void)

void FUN_1440e9650(longlong param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_143cdf4b4();
  if (*(longlong *)(param_1 + 0x4430) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4430) + 0x18;
    lVar1 = FUN_14485c28e(lVar2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_14485c28e(lVar2);
    }
    if (lVar1 == param_2) {
      FUN_1418e087a(param_1);
    }
  }
  if (*(longlong *)(param_1 + 0x43d8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x43d8) + 0x20;
    lVar1 = FUN_14485c28e(lVar2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_14485c28e(lVar2);
    }
    if (lVar1 == param_2) {
      if ((*(longlong *)(param_1 + 0x43d8) != 0) &&
         (FUN_145aa9ba2(param_1,1), *(char *)(param_1 + 0x43f0) == '\0')) {
        if (*param_3 == '\x01') {
          FUN_145aa9a9a(param_1);
        }
        else {
          FUN_145c8a45a(param_1);
        }
      }
      FUN_1465d11fa(param_1 + 0x4408,param_1 + 0x4388);
      if ((longlong)*(int *)(param_1 + 0x4658) != 0) {
        lVar1 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 18000) + 8 + lVar1) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 18000) + lVar1) != 0)) {
            FUN_1404f401e(param_1 + 18000,param_1);
            break;
          }
          lVar1 = lVar1 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x4658) * 0x10 != lVar1);
      }
      *(undefined4 *)(param_1 + 0x43f4) = 0;
    }
  }
  FUN_140b89c80(param_1);
  return;
}



// FUNCTION 1440e9776 FUN_1440e9776 body=185 status=ok
// SIG undefined FUN_1440e9776(void)

float FUN_1440e9776(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(plVar1);
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + 0xa0) & 0x40) != 0) &&
       ((cVar2 != '\0' || (cVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1), cVar2 != '\0')))) {
      param_3 = param_3 * *(float *)(param_1 + 0x1ce0);
    }
    lVar3 = FUN_140fd5728();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       ((*(byte *)(param_2 + 0xc90) & 2) != 0)) {
      if (*(longlong *)(param_1 + 0x4208) == 0) {
        fVar4 = 1.0;
      }
      else {
        fVar4 = (float)FUN_144b3ad2a(*(longlong *)(param_1 + 0x4208) + 0x6890);
      }
      param_3 = param_3 * fVar4;
    }
  }
  return param_3;
}



// FUNCTION 1440e9830 FUN_1440e9830 body=598 status=ok
// SIG undefined FUN_1440e9830(void)

float FUN_1440e9830(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  if (param_1[0x841] == 0) {
    fVar7 = 1.0;
  }
  else {
    fVar7 = (float)FUN_144b3ad2a(param_1[0x841] + 0x6890);
  }
  if (*(code **)(*param_1 + 0xbe8) == FUN_1400d1efa) {
    fVar8 = (float)FUN_1400d1efa(param_1);
  }
  else {
    fVar8 = (float)(**(code **)(*param_1 + 0xbe8))(param_1);
  }
  plVar5 = param_1 + 0x2f;
  lVar4 = param_1[0x2f];
  if (*(code **)(lVar4 + 0xe0) == (code *)&LAB_144948d28) {
    if ((*(byte *)((longlong)param_1 + 0x291) - 1 < 2) && (param_1[0x22] != 0)) goto LAB_1440e98c2;
LAB_1440e98df:
    cVar3 = (**(code **)(lVar4 + 0xd8))(plVar5);
    if (cVar3 != '\0') goto LAB_1440e98c2;
  }
  else {
    cVar3 = (**(code **)(lVar4 + 0xe0))(plVar5);
    if (cVar3 == '\0') {
      lVar4 = *plVar5;
      goto LAB_1440e98df;
    }
LAB_1440e98c2:
    fVar8 = fVar8 * *(float *)(param_1 + 0x39c);
  }
  if ((char)param_1[0x220] == '\x05') {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') goto LAB_1440e98f9;
      plVar5 = param_1 + 0x642;
    }
    else {
      plVar5 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    lVar4 = FUN_140153468(plVar5);
    if (lVar4 != 0) {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_1440e98f9;
        plVar5 = param_1 + 0x642;
      }
      else {
        plVar5 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      fVar8 = (float)FUN_143cf5db6(plVar5,*(undefined4 *)((longlong)param_1 + 0x2e4));
    }
  }
LAB_1440e98f9:
  fVar7 = fVar7 * fVar8;
  plVar5 = (longlong *)param_1[0x841];
  if (plVar5 == (longlong *)0x0) {
    return fVar7;
  }
  pcVar2 = *(code **)(*plVar5 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (plVar5[0x76] != 0) goto LAB_1440e99d9;
    pcVar2 = *(code **)(*plVar5 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      if (*(code **)(plVar5[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (*(int *)((longlong)plVar5 + 0x75b4) == 0) {
          return fVar7;
        }
        uVar1 = *(uint *)(plVar5 + 0xeb6);
        if ((int)uVar1 < 0) {
          return fVar7;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return fVar7;
        }
        plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (plVar6 == (longlong *)0x0) {
          return fVar7;
        }
        if ((int)plVar6[2] != *(int *)((longlong)plVar5 + 0x75b4)) {
          return fVar7;
        }
        if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
          return fVar7;
        }
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar6;
        }
        else {
          lVar4 = 0;
        }
        lVar4 = lVar4 + 0x110;
      }
      else {
        lVar4 = (**(code **)(plVar5[0x784] + 0x18))(plVar5 + 0x784);
      }
      if (lVar4 == 0) {
        return fVar7;
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
    }
    else {
      lVar4 = (*pcVar2)();
    }
    if (lVar4 == 0) {
      return fVar7;
    }
    lVar4 = *(longlong *)(lVar4 + 0x3b0);
  }
  else {
    lVar4 = (*pcVar2)();
  }
  if (lVar4 == 0) {
    return fVar7;
  }
LAB_1440e99d9:
  lVar4 = FUN_1403ca227();
  if (*(float *)(lVar4 + 0x1f0) <= fVar7) {
    fVar7 = *(float *)(lVar4 + 0x1f0);
  }
  return fVar7;
}



// FUNCTION 1440e9a86 FUN_1440e9a86 body=308 status=ok
// SIG undefined FUN_1440e9a86(void)

void FUN_1440e9a86(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)param_1[0x3d7];
  if (plVar1 == (longlong *)0x0) goto LAB_1440e9af3;
  if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
    cVar2 = (char)param_1[0x3dc];
joined_r0x0001440e9b1c:
    if (cVar2 == '\0') goto LAB_1440e9af3;
  }
  else {
    if (*(code **)(*plVar1 + 0x40) != (code *)&LAB_1449cc0ea) {
      cVar2 = (**(code **)(*plVar1 + 0x40))();
      goto joined_r0x0001440e9b1c;
    }
    if ((*(char *)((longlong)plVar1 + 0xb2) != '\0') ||
       ((*(char *)((longlong)plVar1 + 0x79) == '\0' &&
        (((int)plVar1[4] < 1 || ((char)plVar1[0xf] != '\x01')))))) goto LAB_1440e9af3;
  }
  cVar2 = (**(code **)(*param_1 + 0xdd8))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x78))();
    if (cVar2 == '\0') {
      fVar3 = 0.0;
    }
    else {
      fVar3 = 1.0;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x80))();
    if (cVar2 != '\0') {
      fVar3 = fVar3 + -1.0;
    }
    local_38 = (undefined4)DAT_14c8462c0;
    uStack_34 = DAT_14c8462c0._4_4_;
    uStack_30 = (undefined4)DAT_14c8462c8;
    uStack_2c = DAT_14c8462c8._4_4_;
    local_28 = DAT_14c8462d0;
    (**(code **)(*(longlong *)param_1[0x841] + 0x768))((longlong *)param_1[0x841],&local_38,fVar3,0)
    ;
  }
LAB_1440e9af3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440e9bbc FUN_1440e9bbc body=226 status=ok
// SIG undefined FUN_1440e9bbc(void)

undefined4 FUN_1440e9bbc(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  cVar4 = (**(code **)(*param_1 + 0x600))();
  if (cVar4 != '\0') {
    lVar6 = param_1[0x102];
    if (lVar6 == 0) {
      lVar6 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
      param_1[0x102] = lVar6;
    }
    if ((*(byte *)(lVar6 + 0x60) & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 0x897);
      uVar2 = *(uint *)(param_1 + 0x88b);
      lVar6 = param_1[0x8a0];
      lVar3 = param_1[0x220];
      uVar5 = FUN_140fec570(param_1);
      *(uint *)(param_1 + 0x897) = *(uint *)(param_1 + 0x897) & 0xfffffffe | uVar1 & 1;
      *(uint *)(param_1 + 0x88b) = *(uint *)(param_1 + 0x88b) & 0xfffffffe | uVar2 & 1;
      *(short *)(param_1 + 0x8a0) = (short)lVar6;
      if (((char)lVar3 == '\r') == ((char)param_1[0x220] == '\r')) {
        return uVar5;
      }
      FUN_1440eea16(param_1 + 0x89b,(char)param_1[0x220] == '\r');
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 1440e9c9e FUN_1440e9c9e body=243 status=ok
// SIG undefined FUN_1440e9c9e(void)

void FUN_1440e9c9e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (((*(longlong *)(param_1 + 0x43d8) != 0) && (*(char *)(param_1 + 0x43f0) == '\x01')) &&
     (plVar3 = *(longlong **)(param_1 + 0x4208), plVar3 != (longlong *)0x0)) {
    uVar1 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar1);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar2 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x80);
        if (lVar2 != 0) {
          uVar1 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0x80);
          (**(code **)(*plVar4 + 0x28))(plVar4,uVar1);
        }
        lVar2 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0xa8);
        if (lVar2 != 0) {
          uVar1 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001440e9d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x28))(plVar4,uVar1,*(code **)(*plVar4 + 0x28));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1440e9d92 FUN_1440e9d92 body=99 status=ok
// SIG undefined FUN_1440e9d92(void)

void FUN_1440e9d92(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_14409eea8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1440f0a5e(param_1 + 0x44d8,param_3);
    }
  }
  FUN_143cdf098(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1440e9df6 FUN_1440e9df6 body=125 status=ok
// SIG undefined FUN_1440e9df6(void)

void FUN_1440e9df6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_14409eea8();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (*(longlong *)(param_1 + 0x118) != 0)) {
      cVar1 = FUN_14064b1de(*(longlong *)(param_1 + 0x118),param_3);
      if (cVar1 == '\0') {
        FUN_1440f0b5e(param_1 + 0x44d8,param_3);
      }
    }
  }
  FUN_143cdf1f6(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1440e9e74 FUN_1440e9e74 body=74 status=ok
// SIG undefined FUN_1440e9e74(void)

void FUN_1440e9e74(longlong param_1,longlong param_2)

{
  FUN_140aed762();
  if ((*(char *)(param_2 + 0x88) == '\0') && ((&DAT_00001100)[param_1] == '\r')) {
    *(undefined4 *)(param_1 + 0x4504) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0x4508) = *(undefined4 *)(param_2 + 0xc4);
  }
  return;
}



// FUNCTION 1440e9efe FUN_1440e9efe body=407 status=ok
// SIG undefined FUN_1440e9efe(void)

void FUN_1440e9efe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x3c0);
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1463c0cc2;
      local_68 = &LAB_147c9db5b;
      local_70 = &LAB_1463f9c44;
      local_78 = &DAT_149e063b2;
      local_80 = 0x2000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x1f0);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      if ((*(longlong *)(lVar1 + 0x438) != lVar2) || (*(longlong *)(lVar1 + 0x430) == 0)) {
        if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
  FUN_1440efc5c(param_1 + 0x44d8);
  FUN_1440f02da(param_1 + 0x44d8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1440ea1a8 FUN_1440ea1a8 body=110 status=ok
// SIG undefined FUN_1440ea1a8(void)

void FUN_1440ea1a8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  longlong lVar2;
  
  FUN_1412c6716(param_1,param_2,param_3,param_4,param_5);
  fVar1 = *(float *)(param_2 + 0x554);
  if (0.0 <= fVar1) {
    lVar2 = *(longlong *)(&DAT_00006850 + param_3);
    *(float *)(param_1 + 0x554) = fVar1;
    *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
    *(float *)(lVar2 + 0x4504) = fVar1;
    *(undefined4 *)(lVar2 + 0x4508) = *(undefined4 *)(param_1 + 0x558);
  }
  return;
}



// FUNCTION 1440ea216 FUN_1440ea216 body=112 status=ok
// SIG undefined FUN_1440ea216(void)

void FUN_1440ea216(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (*(char *)(param_3 + 0x78) == '\0')) {
    lVar1 = FUN_14016cc74();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x4504);
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x4508);
    }
  }
  FUN_1409936f4(param_1,param_2,param_3);
  return;
}



// FUNCTION 1440ea286 FUN_1440ea286 body=160 status=ok
// SIG undefined FUN_1440ea286(void)

undefined4 FUN_1440ea286(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14093b092();
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(param_3 + 0x28)) &
            0xffffffffffffff04;
    uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
    local_3c = 0xbf800000;
    FUN_1401fdf7f(uVar2 & 0xffffffff,param_3,param_1 + 0xc0,&local_3c);
    local_3c = 0xbf800000;
    FUN_1401fdf7f(uVar2 & 0xffffffff,param_3,param_1 + 0xc4,&local_3c);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ea328 FUN_1440ea328 body=363 status=ok
// SIG undefined FUN_1440ea328(void)

void FUN_1440ea328(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1440ea3be;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1440ea3be:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1440ea494 FUN_1440ea494 body=55 status=ok
// SIG undefined FUN_1440ea494(void)

void FUN_1440ea494(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1466221e6(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1440ea518 FUN_1440ea518 body=31 status=ok
// SIG undefined FUN_1440ea518(void)

undefined8 FUN_1440ea518(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ea5d2 FUN_1440ea5d2 body=31 status=ok
// SIG undefined FUN_1440ea5d2(void)

undefined8 FUN_1440ea5d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ea63e FUN_1440ea63e body=336 status=ok
// SIG undefined FUN_1440ea63e(void)

undefined8 FUN_1440ea63e(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  puVar7 = &DAT_14c9485f0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar7 = puVar1;
  }
  FUN_140045924(DAT_14c947fe0,local_28,puVar7,1);
  uVar4 = local_28._0_4_ & 0xffff;
  uVar4 = (local_28._0_4_ << 0x10 | uVar4) + local_28._4_4_ +
          (local_28._2_4_ << 0x13 | local_28._2_4_ & 0xffff) + (uVar4 >> 4);
  puVar2 = (uint *)*param_1;
  uVar5 = uVar4 >> 0xd ^ *puVar2 - uVar4;
  uVar6 = uVar5 << 8 ^ (-0x61c88647 - uVar4) - uVar5;
  uVar8 = uVar6 >> 0xd ^ (uVar4 - uVar5) - uVar6;
  uVar4 = uVar8 >> 0xc ^ (uVar5 - uVar6) - uVar8;
  uVar5 = uVar4 << 0x10 ^ (uVar6 - uVar8) - uVar4;
  uVar6 = uVar5 >> 5 ^ (uVar8 - uVar4) - uVar5;
  uVar8 = uVar6 >> 3 ^ (uVar4 - uVar5) - uVar6;
  uVar4 = uVar8 << 10 ^ (uVar5 - uVar6) - uVar8;
  *puVar2 = uVar4 >> 0xf ^ uVar6 - (uVar8 + uVar4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ea7ae FUN_1440ea7ae body=12 status=ok
// SIG undefined FUN_1440ea7ae(void)

void FUN_1440ea7ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001440ea7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1440ea7ba FUN_1440ea7ba body=29 status=ok
// SIG undefined FUN_1440ea7ba(void)

undefined8 FUN_1440ea7ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ea7d8 FUN_1440ea7d8 body=277 status=ok
// SIG undefined FUN_1440ea7d8(void)

undefined8 FUN_1440ea7d8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (param_2 == 0) {
    local_40 = 0;
  }
  else {
    puVar5 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_40,puVar5,1);
  }
  local_38 = 0x3003;
  local_30 = 0;
  if (*(byte *)(lVar1 + 0x90) != 0) {
    lVar3 = lVar1 + 0x58;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x88);
    }
    lVar4 = 0;
    do {
      if ((*(ulonglong *)(lVar3 + lVar4) == local_40) && (*(int *)(lVar3 + 8 + lVar4) == 0x3003)) {
        *(undefined1 *)param_1[1] = 1;
        uVar2 = 0;
        goto LAB_1440ea88e;
      }
      lVar4 = lVar4 + 0x18;
    } while ((ulonglong)*(byte *)(lVar1 + 0x90) * 0x18 != lVar4);
  }
  uVar2 = 1;
LAB_1440ea88e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ea90c FUN_1440ea90c body=12 status=ok
// SIG undefined FUN_1440ea90c(void)

void FUN_1440ea90c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001440ea915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1440ea918 FUN_1440ea918 body=29 status=ok
// SIG undefined FUN_1440ea918(void)

undefined8 FUN_1440ea918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ea936 FUN_1440ea936 body=208 status=ok
// SIG undefined FUN_1440ea936(void)

void FUN_1440ea936(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1440eaa06 FUN_1440eaa06 body=287 status=ok
// SIG undefined FUN_1440eaa06(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1440eaa06(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (*param_2 == 0) {
    local_38[1] = 0;
  }
  else {
    puVar2 = *(undefined4 **)(*param_2 + 8);
    puVar6 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar6 = puVar2;
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,local_38 + 1,puVar6,1);
  }
  local_38[0] = FUN_1403363fe(lVar1,local_38 + 1);
  if (local_38[0] != 0) {
    uVar3 = ((uint)(local_38[0] >> 0x14) & 0xffff ^ (uint)(local_38[0] >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = FUN_141534be4(lVar1 + 0x5b8,uVar3 >> 0x10 ^ uVar3,local_38);
    local_40 = (longlong)(int)param_1[1] * 0x20 + *(longlong *)(lVar1 + 0xa0);
    FUN_14100c576(uVar4);
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440eab3e FUN_1440eab3e body=5 status=ok
// SIG undefined FUN_1440eab3e(void)

longlong FUN_1440eab3e(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1440eab44 FUN_1440eab44 body=12 status=ok
// SIG undefined FUN_1440eab44(void)

void FUN_1440eab44(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001440eab4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1440eab50 FUN_1440eab50 body=29 status=ok
// SIG undefined FUN_1440eab50(void)

undefined8 FUN_1440eab50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440eab9e FUN_1440eab9e body=29 status=ok
// SIG undefined FUN_1440eab9e(void)

undefined8 FUN_1440eab9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440eabbc FUN_1440eabbc body=122 status=ok
// SIG undefined FUN_1440eabbc(void)

void FUN_1440eabbc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1440eac36 FUN_1440eac36 body=171 status=ok
// SIG undefined FUN_1440eac36(void)

void FUN_1440eac36(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_1440eaccb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440eaccb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440eace2 FUN_1440eace2 body=122 status=ok
// SIG undefined FUN_1440eace2(void)

void FUN_1440eace2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1440ead5c FUN_1440ead5c body=114 status=ok
// SIG undefined FUN_1440ead5c(void)

void FUN_1440ead5c(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1440eadce FUN_1440eadce body=374 status=ok
// SIG undefined FUN_1440eadce(void)

void FUN_1440eadce(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1440eae77;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1440eae77:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 1440eaf44 FUN_1440eaf44 body=289 status=ok
// SIG undefined FUN_1440eaf44(void)

undefined4 *
FUN_1440eaf44(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d19732(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_48 = uVar5;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_140d183b8(param_1,uVar5,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140d1c3ca(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440eb066 FUN_1440eb066 body=48 status=ok
// SIG undefined FUN_1440eb066(void)

void FUN_1440eb066(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1440eb096 FUN_1440eb096 body=173 status=ok
// SIG undefined FUN_1440eb096(void)

void FUN_1440eb096(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1440eb12d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440eb12d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440eb150 FUN_1440eb150 body=31 status=ok
// SIG undefined FUN_1440eb150(void)

undefined8 FUN_1440eb150(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440eb170 FUN_1440eb170 body=31 status=ok
// SIG undefined FUN_1440eb170(void)

undefined8 FUN_1440eb170(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440eb1de FUN_1440eb1de body=171 status=ok
// SIG undefined FUN_1440eb1de(void)

void FUN_1440eb1de(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_1440eb273;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440eb273:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440eb289 FUN_1440eb289 body=3427 status=ok
// SIG undefined FUN_1440eb289(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440eb289(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc56f8 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cbc5700);
  if (cVar2 == '\0') {
    _DAT_14cbc5700 = 0;
    uRam000000014cbc5708 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5710 = 0x47efffffe0000000;
  _DAT_14cbc5718 = 0x47efffffe0000000;
  _DAT_14cbc5720 = 0x47efffffe0000000;
  _DAT_14cbc5728 = 0x47efffffe0000000;
  _DAT_14cbc5730 = 0x47efffffe0000000;
  _DAT_14cbc5738 = 0x47efffffe0000000;
  _DAT_14cbc5740 = 0x47efffffe0000000;
  _DAT_14cbc5748 = 0x47efffffe0000000;
  _DAT_14cbc5754 = 0;
  FUN_14052b5e0(&DAT_14cbc5750,"PlayerAwareness",0);
  _DAT_14cbc5760 = "PlayerAwareness";
  local_a8 = "basic";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5768 = (ulonglong)uVar3;
  local_a8 = "challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5770 = (ulonglong)uVar3;
  local_a8 = "online";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5778 = (ulonglong)uVar3;
  local_a8 = "social";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5780 = (ulonglong)uVar3;
  local_a8 = "alert";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5788 = (ulonglong)uVar3;
  local_a8 = "photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5790 = (ulonglong)uVar3;
  local_a8 = "generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5798 = (ulonglong)uVar3;
  local_a8 = "mission";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57a0 = (ulonglong)uVar3;
  local_a8 = "mail";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57a8 = (ulonglong)uVar3;
  local_a8 = "respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57b0 = (ulonglong)uVar3;
  local_a8 = "tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57b8 = (ulonglong)uVar3;
  local_a8 = "special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57c0 = (ulonglong)uVar3;
  local_a8 = "generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57c8 = (ulonglong)uVar3;
  local_a8 = "vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57d0 = (ulonglong)uVar3;
  local_a8 = "ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57d8 = (ulonglong)uVar3;
  local_a8 = "INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57e0 = (ulonglong)uVar3;
  local_a8 = "NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57e8 = (ulonglong)uVar3;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57f0 = (ulonglong)uVar3;
  local_a8 = "collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc57f8 = (ulonglong)uVar3;
  _DAT_14cbc5808 = &LAB_1440df73c;
  _DAT_14cbc5810 = 0x461c6000;
  DAT_14cbc5814 = 1;
  DAT_14cbc5800 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc5800;
  atexit((_func_5014 *)&LAB_1440df741);
  _DAT_14cbc5828 = &LAB_1440df775;
  _DAT_14cbc5830 = 0x461c6800;
  DAT_14cbc5834 = 1;
  DAT_14cbc5820 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc5820;
  atexit((_func_5014 *)&LAB_1440df77a);
  _DAT_14cbc5848 = &LAB_1440df7ae;
  _DAT_14cbc5850 = 0x447a0000;
  DAT_14cbc5854 = 1;
  DAT_14cbc5840 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc5840;
  atexit((_func_5014 *)&LAB_1440df7b3);
  local_a8 = "Cash";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5860 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbc5868,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1440df7e7);
  FUN_1446f470e(&DAT_14cbc5878,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbc5880,L"Party",1);
  FUN_1446f470e(&DAT_14cbc5888,&DAT_149e063b2,1);
  local_a8 = "DidHostComplete";
  local_a0 = 0xf;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc5890 = (ulonglong)uVar3;
  local_a8 = "IsMissionDriven";
  local_a0 = 0xf;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc5898 = (ulonglong)uVar3;
  local_a8 = "Use";
  local_a0 = 3;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc58a0 = (ulonglong)uVar3;
  local_a8 = "Sight";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc58a8 = (ulonglong)uVar3;
  local_a8 = "TargetLock";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc58b0 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cbc58b8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440e067d);
  FUN_140056680(&DAT_14cbc58c8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440e068e);
  FUN_140056680(&DAT_14cbc58d8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440e069f);
  FUN_140056680(&DAT_14cbc58e8,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1440e06b0);
  FUN_1446f470e(&DAT_14cbc58f8,L"LIMB_GORED",1);
  _DAT_14cbc5900 = 0x4072c00000000000;
  _DAT_14cbc5908 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc5910,L"body",1);
  FUN_1446f470e(&DAT_14cbc5918,L"title_card",1);
  FUN_140056680(&DAT_14cbc5920,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1440e06c1);
  _DAT_14cbc5934 = 0;
  FUN_14052b5e0(&DAT_14cbc5930,"State",0);
  _DAT_14cbc5940 = "State";
  _DAT_14cbc594c = 0;
  FUN_14052b5e0(&DAT_14cbc5948,"trait_mission",0);
  _DAT_14cbc5958 = "trait_mission";
  _DAT_14cbc5964 = 0;
  FUN_14052b5e0(&DAT_14cbc5960,"weekly_trait_mission",0);
  _DAT_14cbc5970 = "weekly_trait_mission";
  DAT_14cbc5978 = (undefined8 *)0x0;
  _DAT_14cbc5980 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x18000,0);
  lVar6 = 0x7ff;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 6;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  _DAT_14cbc5980 = _DAT_14cbc5980 + 0x800;
  *puVar5 = DAT_14cbc5978;
  DAT_14cbc5978 = puVar4;
  _DAT_14cbc598c = 0;
  FUN_14052b5e0(&DAT_14cbc5988,"progress",0);
  _DAT_14cbc5998 = "progress";
  _DAT_14cbc59a4 = 0;
  FUN_14052b5e0(&DAT_14cbc59a0,"complete",0);
  _DAT_14cbc59b0 = "complete";
  _DAT_14cbc59bc = 0;
  FUN_14052b5e0(&DAT_14cbc59b8,"active",0);
  _DAT_14cbc59c8 = "active";
  _DAT_14cbc59d4 = 0;
  FUN_14052b5e0(&DAT_14cbc59d0,"rewards",0);
  _DAT_14cbc59e0 = "rewards";
  local_a8 = "player";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc59e8 = (ulonglong)uVar3;
  local_a8 = "party";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc59f0 = (ulonglong)uVar3;
  local_a8 = "Claimed";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc59f8 = (ulonglong)uVar3;
  local_a8 = "Discovered";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5a00 = (ulonglong)uVar3;
  _DAT_14cbc5a0c = 0;
  FUN_14052b5e0(&DAT_14cbc5a08,"status",0);
  _DAT_14cbc5a18 = "status";
  local_a8 = "Completed";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc5a20 = (ulonglong)uVar3;
  _DAT_14cbc5a30 = &LAB_1440e79e7;
  _DAT_14cbc5a38 = 0x447a0000;
  DAT_14cbc5a3c = 1;
  DAT_14cbc5a28 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc5a28;
  atexit((_func_5014 *)&LAB_1440e79ec);
  DAT_14cbc5a48 = 0;
  atexit((_func_5014 *)&LAB_1440e7a20);
  _DAT_14cbc5c08 = &LAB_1440e7c10;
  _DAT_14cbc5c10 = 0x461e3400;
  DAT_14cbc5c14 = 1;
  DAT_14cbc5c00 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc5c00;
  atexit((_func_5014 *)&LAB_1440e7c15);
  DAT_14cbc5c80 = 0;
  _DAT_14cbc5c88 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440eb144;
  local_a8 = &DAT_14011fc1e;
  FUN_1461893ce(&local_a8);
  atexit((_func_5014 *)&LAB_1440e7c72);
  _DAT_14cbc5d18 = &LAB_1440e7c77;
  _DAT_14cbc5d20 = 0x461e4800;
  DAT_14cbc5d24 = 1;
  DAT_14cbc5d10 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc5d10;
  atexit((_func_5014 *)&LAB_1440e7c7c);
  DAT_14cbc5d90 = 0;
  _DAT_14cbc5d98 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1440eb14a;
  local_a8 = &DAT_14011fc1e;
  FUN_146189aca(&local_a8);
  atexit((_func_5014 *)&LAB_1440e7cd9);
  FUN_1446f470e(&DAT_14cbc5e20,L"JetpackGliding",1);
  FUN_1446f470e(&DAT_14cbc5e28,L"CharacterDash",1);
  FUN_1446f470e(&DAT_14cbc5e30,L"CharacterLadder",1);
  FUN_1446f470e(&DAT_14cbc5e38,L"GrappleCourseCorrection",1);
  FUN_1446f470e(&DAT_14cbc5e40,L"GroundSlam",1);
  FUN_1446f470e(&DAT_14cbc5e48,L"OakUnderwaterSwimmable",1);
  FUN_1446f470e(&DAT_14cbc5e50,L"ZeroGravity",1);
  FUN_1446f470e(&DAT_14cbc5e58,L"Lava",1);
  FUN_1446f470e(&DAT_14cbc5e60,L"SuperLava",1);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ebffc FUN_1440ebffc body=555 status=ok
// SIG undefined FUN_1440ebffc(void)

void FUN_1440ebffc(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"OakCharacterMovementTags");
  FUN_1446f470e(&local_40,L"Movement.JumpType.SprintJump",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 8) = local_28;
  FUN_1446f470e(&local_40,L"Movement.JumpType.DoubleJump",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x10) = local_28;
  FUN_1446f470e(&local_40,L"Movement.JumpType.UpwardLadderJump",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  FUN_1446f470e(&local_40,L"Movement.JumpType.JumpFromLadder",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x20) = local_28;
  FUN_1446f470e(&local_40,L"Movement.JumpType.JumpFromWater",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x28) = local_28;
  FUN_1446f470e(&local_40,L"Movement.JumpType.JumpFromZipline",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ec27e FUN_1440ec27e body=2384 status=ok
// SIG undefined FUN_1440ec27e(void)

void FUN_1440ec27e(longlong param_1,char param_2,undefined1 param_3)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined1 local_d8 [8];
  undefined8 *local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  int local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined1 *)(param_1 + 0x171) = param_3;
  if (((*(char *)(param_1 + 0x170) == param_2) && (*(char *)(param_1 + 0x172) != '\x01')) ||
     (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x1f0), lVar15 == 0))
  goto LAB_1440ec2fe;
  if (DAT_14cba8288 == 0) {
    local_f0 = &local_98;
    local_98 = FUN_141864c34;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_1464cee30;
    local_f8 = &LAB_148bfac22;
    local_100 = &LAB_140f21842;
    local_108 = &DAT_149e063b2;
    local_110 = 0;
    local_118 = 0x10000004;
    local_120 = 0x10;
    local_128 = CONCAT44(local_128._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) ||
      ((param_2 != '\0' && (*(char *)(lVar15 + 0x73eb) == '\x02')))) ||
     ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xb0), lVar4 == 0 &&
      (lVar4 = FUN_1448abda6(), lVar4 == 0)))) goto LAB_1440ec2fe;
  lVar5 = FUN_1403ca227();
  if (*(char *)(param_1 + 0x171) != '\x01') {
    if (*(int *)(lVar5 + 0x520) != *(int *)(lVar5 + 0x54c)) {
      lVar9 = *(longlong *)(lVar4 + 0x18);
      uVar1 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar10 = (uint)lVar9 & 0xffff;
      lVar7 = lVar5 + 0x550;
      if (*(longlong *)(lVar5 + 0x558) != 0) {
        lVar7 = *(longlong *)(lVar5 + 0x558);
      }
      iVar11 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(lVar5 + 0x560) - 1U &
                                (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar10) +
                                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          plVar13 = (longlong *)(*(longlong *)(lVar5 + 0x518) + (longlong)iVar11 * 0x28);
          if (*plVar13 == lVar9) {
            if (plVar13 != (longlong *)0x0) {
              plVar13 = plVar13 + 1;
              goto LAB_1440ec375;
            }
            break;
          }
          iVar11 = (int)plVar13[4];
        } while (iVar11 != -1);
      }
    }
    goto LAB_1440ec2fe;
  }
  plVar13 = (longlong *)(lVar5 + 0x568);
LAB_1440ec375:
  if (plVar13 == (longlong *)0x0) goto LAB_1440ec2fe;
  lVar5 = plVar13[1];
  if (lVar5 == 0) {
    uVar6 = FUN_145c6ef2e();
    lVar5 = FUN_14477b664(uVar6);
    plVar13[1] = lVar5;
  }
  if (plVar13[2] == 0) {
    if ((lVar5 == 0) || (*plVar13 == 0)) goto LAB_1440ec2fe;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      plVar13[2] = 0;
      goto LAB_1440ec2fe;
    }
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar6,plVar13);
    plVar13[2] = lVar5;
    if (lVar5 == 0) goto LAB_1440ec2fe;
  }
  if ((*(char *)(param_1 + 0x172) == '\0') && (*(char *)(param_1 + 0x173) == '\0')) {
    lVar5 = (**(code **)(*(longlong *)(lVar15 + 0x10a0) + 0x20))(lVar15 + 0x10a0);
    if (param_2 == '\0') {
      lVar9 = plVar13[1];
      if (lVar9 == 0) {
        uVar6 = FUN_145c6ef2e();
        lVar9 = FUN_14477b664(uVar6);
        plVar13[1] = lVar9;
      }
      lVar7 = plVar13[2];
      if (lVar7 == 0) {
        if ((lVar9 != 0) && (*plVar13 != 0)) {
          plVar2 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            plVar13[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar6,plVar13);
            plVar13[2] = lVar7;
            if (lVar7 != 0) goto LAB_1440ec7e1;
          }
        }
        local_c0 = 0;
      }
      else {
LAB_1440ec7e1:
        puVar14 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
          puVar14 = *(undefined4 **)(lVar7 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar9 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar9);
          DAT_14c947fe0 = lVar9;
        }
        FUN_140045924(DAT_14c947fe0,&local_c0,puVar14,1);
      }
      local_b8 = 0x3005;
      local_b0 = 0;
      FUN_143d07c96(lVar15,lVar15);
      if (lVar5 != 0) {
        FUN_140457ffc(lVar5 + 0x158,param_1);
        FUN_140457ffc(lVar5 + 400,param_1);
      }
    }
    else {
      local_a8 = 0;
      uStack_a0 = 0;
      lVar9 = plVar13[1];
      if (lVar9 == 0) {
        uVar6 = FUN_145c6ef2e();
        lVar9 = FUN_14477b664(uVar6);
        plVar13[1] = lVar9;
      }
      lVar7 = plVar13[2];
      if (((lVar7 == 0) && (lVar7 = 0, lVar9 != 0)) && (*plVar13 != 0)) {
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar6,plVar13);
        }
        plVar13[2] = lVar7;
      }
      local_128 = 0;
      FUN_1405fd19a(lVar15,lVar7,lVar15,&local_a8);
      if ((lVar5 != 0) && (*(char *)(param_1 + 0x171) != '\0')) {
        local_98 = (code *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        local_90 = 3;
        *(undefined ***)local_98 = &PTR_LAB_14b3e9ef0;
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
        *(longlong *)(local_98 + 0x10) = lVar7;
        *(undefined ***)local_98 = &PTR_FUN_14b9659f0;
        *(longlong *)(local_98 + 0x18) = param_1;
        *(code **)(local_98 + 0x20) = FUN_1440ecbd0;
        FUN_1403524de(lVar5 + 0x158,&local_d0,&local_98);
        if (local_90 == 0) {
LAB_1440ec54d:
          if (local_98 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_98 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90 = 0;
          goto LAB_1440ec54d;
        }
        local_98 = (code *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        local_90 = 3;
        *(undefined ***)local_98 = &PTR_LAB_14b3e9ef0;
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
        *(longlong *)(local_98 + 0x10) = lVar7;
        *(undefined ***)local_98 = &PTR_FUN_14b9659f0;
        *(longlong *)(local_98 + 0x18) = param_1;
        *(undefined1 **)(local_98 + 0x20) = &LAB_1440ecdec;
        FUN_1403524de(lVar5 + 400,&local_d0,&local_98);
        if (local_90 != 0) {
          if (local_98 == (code *)0x0) goto LAB_1440ec862;
          (*(code *)**(undefined8 **)local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          local_90 = 0;
        }
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1440ec862:
  if ((*(char *)(param_1 + 0x172) != '\0') || (*(char *)(param_1 + 0x173) == '\x01')) {
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar8 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_d0[2] = lVar9;
    *local_d0 = &PTR_FUN_14b965a60;
    local_d0[3] = 0;
    uVar1 = *(uint *)(lVar15 + 0xc);
    *(uint *)(local_d0 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar11 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar11 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar11 = iVar12;
      }
    }
    *(int *)((longlong)puVar8 + 0x1c) = iVar11;
    puVar8[4] = param_1;
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar8 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar6 = *puVar8;
    local_98 = (code *)0x0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_d0);
    local_58 = 1;
    FUN_14016fdb0(uVar6,local_d8,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_1440ec9d6;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1440ec9d6:
  *(char *)(param_1 + 0x170) = param_2;
LAB_1440ec2fe:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ecbd0 FUN_1440ecbd0 body=522 status=ok
// SIG undefined FUN_1440ecbd0(void)

void FUN_1440ecbd0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x1f0);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
        (*(char *)(lVar1 + 0x178) == '\x03')) && (*(char *)(lVar1 + 0x73eb) != '\x02')) {
      if (*(char *)(lVar1 + 0x66f8) == '\0') {
        *(undefined1 *)(lVar1 + 0x66f8) = 1;
        uVar2 = *(ulonglong *)(lVar1 + 0x28);
        if (uVar2 < 0xffffffff00000000) {
          plVar6 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar6 = (longlong *)0x0;
          }
          (**(code **)(*plVar6 + 0x58))(plVar6,lVar1,uVar2,0x36);
        }
        else {
          uVar7 = (uint)uVar2;
          if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
            puVar4 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar4 = DAT_14c998080;
            }
            if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
              lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
              lVar5 = *(longlong *)(lVar3 + 0x18);
              if (*(longlong *)(lVar3 + 0x18) == 0) {
                lVar5 = lVar3 + 8;
              }
              *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x400000;
              *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
            }
          }
        }
      }
      FUN_140f330f4(lVar1 + 0x71a8,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ecdf2 FUN_1440ecdf2 body=1023 status=ok
// SIG undefined FUN_1440ecdf2(void)

void FUN_1440ecdf2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)(param_1 + 0x110);
  lVar5 = *(longlong *)(lVar8 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6();
    if (lVar5 == 0) goto LAB_1440ed05e;
    lVar8 = *(longlong *)(param_1 + 0x110);
  }
  lVar8 = *(longlong *)(lVar8 + 0x1f0);
  if (lVar8 != 0) {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_38;
      local_38 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar6 = FUN_1403ca227(), *(int *)(lVar6 + 0x520) != *(int *)(lVar6 + 0x54c))) {
      lVar5 = *(longlong *)(lVar5 + 0x18);
      uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar13 = (uint)lVar5 & 0xffff;
      lVar10 = lVar6 + 0x550;
      if (*(longlong *)(lVar6 + 0x558) != 0) {
        lVar10 = *(longlong *)(lVar6 + 0x558);
      }
      iVar9 = *(int *)(lVar10 + (ulonglong)
                                (*(int *)(lVar6 + 0x560) - 1U &
                                (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar13) +
                                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar6 + 0x518) + (longlong)iVar9 * 0x28);
          if (*plVar1 == lVar5) {
            plVar11 = plVar1 + 1;
            if (plVar11 == (longlong *)0x0 || plVar1 == (longlong *)0x0) break;
            lVar5 = plVar1[2];
            if (lVar5 == 0) {
              uVar7 = FUN_145c6ef2e();
              lVar5 = FUN_14477b664(uVar7);
              plVar1[2] = lVar5;
            }
            if (plVar1[3] == 0) {
              if ((lVar5 == 0) || (*plVar11 == 0)) break;
              plVar2 = *(longlong **)(lVar5 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                plVar1[3] = 0;
                break;
              }
              uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar5 = FUN_144aff482(uVar7,plVar11);
              plVar1[3] = lVar5;
              if (lVar5 == 0) break;
            }
            lVar5 = (**(code **)(*(longlong *)(lVar8 + 0x10a0) + 0x20))(lVar8 + 0x10a0);
            if (lVar5 != 0) {
              FUN_140457ffc(lVar5 + 0x158,param_1);
              FUN_140457ffc(lVar5 + 400,param_1);
            }
            lVar5 = plVar1[2];
            if (lVar5 == 0) {
              uVar7 = FUN_145c6ef2e();
              lVar5 = FUN_14477b664(uVar7);
              plVar1[2] = lVar5;
            }
            lVar6 = plVar1[3];
            if (lVar6 == 0) {
              if ((lVar5 != 0) && (*plVar11 != 0)) {
                plVar2 = *(longlong **)(lVar5 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                  plVar1[3] = 0;
                }
                else {
                  uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar6 = FUN_144aff482(uVar7,plVar11);
                  plVar1[3] = lVar6;
                  if (lVar6 != 0) goto LAB_1440ed002;
                }
              }
              local_50 = 0;
            }
            else {
LAB_1440ed002:
              puVar12 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
                puVar12 = *(undefined4 **)(lVar6 + 8);
              }
              if (DAT_14c947fe0 == 0) {
                lVar5 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar5);
                DAT_14c947fe0 = lVar5;
              }
              FUN_140045924(DAT_14c947fe0,&local_50,puVar12,1);
            }
            local_48 = 0x3005;
            local_40 = 0;
            FUN_143d07c96(lVar8,lVar8);
            *(undefined1 *)(param_1 + 0x170) = 0;
            break;
          }
          iVar9 = (int)plVar1[4];
        } while (iVar9 != -1);
      }
    }
  }
LAB_1440ed05e:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ed1f2 FUN_1440ed1f2 body=1483 status=ok
// SIG undefined FUN_1440ed1f2(void)

void FUN_1440ed1f2(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined *puVar12;
  longlong *plVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined8 *local_380;
  undefined1 *local_378;
  undefined8 local_370;
  undefined2 *local_368;
  undefined1 *local_360;
  undefined1 *local_358;
  uint *local_350;
  undefined1 *local_348;
  code *local_340;
  uint local_330 [4];
  undefined1 local_320 [4];
  undefined4 local_31c;
  undefined8 local_300;
  undefined4 local_27c;
  undefined4 local_250;
  undefined1 local_220 [4];
  undefined4 local_21c;
  undefined1 local_210 [148];
  undefined4 local_17c;
  undefined4 local_150;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar3 = *(longlong *)(param_1[0x22] + 0x1f0);
  if (lVar3 != 0) {
    if (DAT_14cba8288 == 0) {
      local_350 = local_330;
      local_330[0] = 0x41864c34;
      local_330[1] = 1;
      local_340 = FUN_14081d0ea;
      local_348 = &LAB_1464cee30;
      local_358 = &LAB_148bfac22;
      local_360 = &LAB_140f21842;
      local_368 = &DAT_149e063b2;
      local_370 = 0;
      local_378 = (undefined1 *)CONCAT44(local_378._4_4_,0x10000004);
      local_380 = (undefined8 *)CONCAT44(local_380._4_4_,0x10);
      local_388 = CONCAT44(local_388._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
         (*(char *)(lVar3 + 0x178) == '\x03')) &&
        ((*(char *)(lVar3 + 0x73eb) != '\x02' &&
         (cVar6 = (**(code **)(*param_1 + 0x40))(param_1), cVar6 == '\0')))) &&
       ((lVar11 = *(longlong *)(&DAT_00001ce8 + param_1[0x22]), lVar11 != 0 &&
        (lVar8 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))(), lVar8 != 0)))) {
      lVar9 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
      lVar8 = *(longlong *)(param_1[0x1c] + 0x110);
      if (lVar8 == 0) {
        local_108 = 3.4028234663852886e+38;
        uStack_100 = 0x47efffffe0000000;
        local_f8 = 3.4028234663852886e+38;
        local_120 = 3.4028234663852886e+38;
        local_118 = local_120;
      }
      else {
        local_108 = *(double *)(lVar8 + 0x260);
        uStack_100 = *(undefined8 *)(lVar8 + 0x268);
        local_f8 = *(double *)(lVar8 + 0x270);
        local_120 = local_108 + 0.0;
        local_118 = *(double *)(lVar8 + 0x268) + 0.0;
      }
      local_110 = local_f8 - (double)*(float *)(lVar9 + 0x20);
      memset(local_220,0,0x100);
      local_150 = 0xffffffff;
      local_17c = 0xffffffff;
      local_21c = 0x3f800000;
      local_cc = 0;
      local_c8 = 0x101;
      local_a0 = 0;
      local_98 = 0x800000000;
      local_80 = 0;
      local_78 = 0x400000000;
      local_e0 = 0;
      local_d4 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_df = 1;
      local_dd = 0;
      local_d0 = 0;
      local_dc = 0x1000000;
      local_d8 = 1;
      if (*(longlong *)(&DAT_00001ce8 + param_1[0x22]) != 0) {
        local_90 = *(undefined4 *)(*(longlong *)(&DAT_00001ce8 + param_1[0x22]) + 0xc);
        local_78 = 0x400000001;
      }
      uVar10 = FUN_1447210f0(lVar11);
      uVar7 = (**(code **)(**(longlong **)(param_1[0x22] + 0x110) + 0x580))();
      local_378 = &DAT_14cad0f10;
      local_380 = &local_f0;
      local_388 = CONCAT44(local_388._4_4_,uVar7);
      cVar6 = FUN_1400b50cc(uVar10,local_220,&local_108,&local_120);
      if (cVar6 != '\0') {
        uVar7 = (undefined4)local_210._16_8_;
        uVar15 = SUB84(local_210._16_8_,4);
        local_330[0] = 0;
        local_330[1] = 0;
        local_330[2] = 0;
        memset(local_320,0,0x100);
        local_250 = 0xffffffff;
        local_27c = 0xffffffff;
        local_31c = 0x3f800000;
        local_388 = 0;
        (**(code **)(*(longlong *)param_1[0x22] + 0x900))
                  ((longlong *)param_1[0x22],local_210,local_330,0);
        if (((local_330[0] ^ 0xffffffff) & 3) == 0) {
          uVar7 = (undefined4)local_300;
          uVar15 = (undefined4)((ulonglong)local_300 >> 0x20);
        }
        lVar11 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
        dVar5 = DAT_14c8464f0;
        if (lVar11 != 0) {
          dVar5 = (double)*(float *)(lVar11 + 0x18);
        }
        fVar1 = *(float *)(param_1 + 7);
        fVar2 = *(float *)(*(longlong *)(lVar3 + 0x438) + 0x640);
        lVar11 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
        if (ABS(fVar1 - (float)((double)CONCAT44(uVar15,uVar7) + dVar5)) <=
            (fVar2 + fVar2) - *(float *)(lVar11 + 0x18)) {
          if (*(char *)(lVar3 + 0x66f8) == '\0') {
            *(undefined1 *)(lVar3 + 0x66f8) = 1;
            uVar4 = *(ulonglong *)(lVar3 + 0x28);
            if (uVar4 < 0xffffffff00000000) {
              plVar13 = DAT_14c9980d0;
              if (DAT_14c9980d8 == 0) {
                plVar13 = (longlong *)0x0;
              }
              (**(code **)(*plVar13 + 0x58))(plVar13,lVar3,uVar4,0x36);
            }
            else {
              uVar14 = (uint)uVar4;
              if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
                puVar12 = &DAT_14c998070;
                if (DAT_14c998080 != (undefined *)0x0) {
                  puVar12 = DAT_14c998080;
                }
                if ((*(uint *)(puVar12 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1)
                    != 0) {
                  lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
                  lVar11 = *(longlong *)(lVar8 + 0x18);
                  if (*(longlong *)(lVar8 + 0x18) == 0) {
                    lVar11 = lVar8 + 8;
                  }
                  *(uint *)(lVar11 + 4) = *(uint *)(lVar11 + 4) | 0x400000;
                  *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
                }
              }
            }
          }
          FUN_140f330f4(lVar3 + 0x71a8,1);
          *(undefined1 *)((longlong)param_1 + 0x173) = 0;
          FUN_1440ecdf2(param_1);
        }
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ed7c4 FUN_1440ed7c4 body=389 status=ok
// SIG undefined FUN_1440ed7c4(void)

void FUN_1440ed7c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
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
  FUN_1406900ec(param_2 + 0x410,&local_28);
  *(bool *)(param_1 + 0x172) = local_28 == DAT_14cbc6218;
  FUN_1406900ec(param_2 + 0x410,&local_28);
  if ((local_28 != DAT_14cbc6210) && (*(char *)(param_1 + 0x172) == '\0')) goto LAB_1440ed886;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xa8);
  if (lVar1 == 0) {
LAB_1440ed867:
    lVar1 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      local_40 = &local_28;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1440ed867;
  }
  if (*(char *)(lVar1 + 0x5d30) == '\x01') {
    *(undefined1 *)(param_1 + 0x173) = 1;
  }
  FUN_1440ec27e(param_1,1,1);
LAB_1440ed886:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1413209de(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ed94a FUN_1440ed94a body=232 status=ok
// SIG undefined FUN_1440ed94a(void)

void FUN_1440ed94a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (cVar1 != '\0') goto LAB_1440ed9b4;
  }
  FUN_1406900ec(param_2 + 0x410,&local_28);
  if (local_28 == DAT_14cbc6210) {
    FUN_1440ec27e(param_1,0,1);
    *(undefined1 *)((longlong)param_1 + 0x173) = 0;
  }
LAB_1440ed9b4:
  FUN_1413209de(param_1);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((cVar1 != '\0') && ((int)param_1[4] == 0)) {
    cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x10c) == '\0')) {
      (**(code **)(*param_1 + 0x60))(param_1,0);
      FUN_1404da4f4(param_1,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440eda46 FUN_1440eda46 body=1429 status=ok
// SIG undefined FUN_1440eda46(void)

void FUN_1440eda46(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  wchar_t *_Str;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  code *local_90;
  wchar_t *local_80;
  int local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(float *)(param_1[0x1c] + 0x1f8) <= 0.0001) || (*(char *)(param_1[0x1c] + 0x290) != '\0'))
  goto LAB_1440edae7;
  lVar1 = *(longlong *)(param_1[0x22] + 0xa8);
  if (lVar1 == 0) {
LAB_1440edb1d:
    (**(code **)(*param_1 + 0xc0))(param_1);
    FUN_1489a0710(param_1,param_2,param_3);
    FUN_140bc19bc(param_1,1);
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1464cee30;
      local_a8 = &LAB_148bfac22;
      local_b0 = &LAB_140f21842;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1440edb1d;
    if (*(char *)(lVar1 + 0x73eb) == '\x02') goto LAB_1440edae7;
    (**(code **)(*param_1 + 0xc0))(param_1);
    FUN_1489a0710(param_1,param_2,param_3);
    FUN_140bc19bc(param_1,1);
    lVar7 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
    if ((*(longlong *)(lVar7 + 0x118) == 0) ||
       (plVar10 = *(longlong **)(lVar7 + 0x120), plVar10 == (longlong *)0x0)) {
LAB_1440edd76:
      uVar8 = 0;
    }
    else {
      if (*(code **)(*plVar10 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar10 = plVar10 + 0x143;
      }
      else {
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if ((int)plVar10[6] == *(int *)((longlong)plVar10 + 0x5c)) goto LAB_1440edd76;
      plVar11 = plVar10 + 0xc;
      if ((longlong *)plVar10[0xd] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar10[0xd];
      }
      iVar4 = *(int *)((longlong)plVar11 +
                      (ulonglong)((int)plVar10[0xe] - 1U & *(uint *)(lVar7 + 0x128)) * 4);
      if (iVar4 == -1) goto LAB_1440edd76;
      do {
        lVar12 = (longlong)iVar4 * 0xe0;
        if (*(uint *)(plVar10[5] + lVar12) == *(uint *)(lVar7 + 0x128)) {
          if (*(char *)(lVar7 + 0x40) != '\x02') goto LAB_1440edd76;
          uVar8 = CONCAT71((int7)((ulonglong)lVar12 >> 8),*(char *)(lVar7 + 0x1b8) == '\x01');
          break;
        }
        iVar4 = *(int *)(lVar12 + plVar10[5] + 0xd0);
        uVar8 = 0;
      } while (iVar4 != -1);
    }
    FUN_1409c9c98(lVar7,uVar8);
    lVar7 = (**(code **)(*(longlong *)(lVar1 + 0x3c20) + 0x18))(lVar1 + 0x3c20);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x50) = 0xbf800000;
    }
    if ((*(char *)(lVar1 + 0x178) == '\x03') &&
       ((*(char *)(lVar1 + 0x5d30) == '\x01' || (*(char *)((longlong)param_1 + 0x172) == '\x01'))))
    {
      FUN_140f330f4(lVar1 + 0x71a8,1);
      cVar3 = (**(code **)(*param_1 + 0xe0))();
      if ((cVar3 != '\0') || (*(char *)((longlong)param_1 + 0x172) == '\x01')) {
        if (*(char *)(lVar1 + 0x66f8) == '\0') {
          *(undefined1 *)(lVar1 + 0x66f8) = 1;
          uVar2 = *(ulonglong *)(lVar1 + 0x28);
          if (uVar2 < 0xffffffff00000000) {
            plVar10 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar10 = (longlong *)0x0;
            }
            (**(code **)(*plVar10 + 0x58))(plVar10,lVar1,uVar2,0x36);
          }
          else {
            uVar13 = (uint)uVar2;
            if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
              puVar9 = &DAT_14c998070;
              if (DAT_14c998080 != (undefined *)0x0) {
                puVar9 = DAT_14c998080;
              }
              if ((*(uint *)(puVar9 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0
                 ) {
                lVar12 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
                lVar7 = *(longlong *)(lVar12 + 0x18);
                if (*(longlong *)(lVar12 + 0x18) == 0) {
                  lVar7 = lVar12 + 8;
                }
                *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | 0x400000;
                *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
              }
            }
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x173) = 0;
      }
    }
    uVar8 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x20))(lVar1 + 0x3b48);
    FUN_1418dfe60(uVar8,1,DAT_14cbc6208);
    local_68 = *(undefined1 *)((longlong)param_1 + 0x10c);
    local_70 = (code *)CONCAT71(local_70._1_7_,(char)param_2);
    local_70 = (code *)CONCAT44(param_3,(undefined4)local_70);
    FUN_1447cd2ec(lVar1 + 0x66c0);
    cVar3 = (**(code **)(*param_1 + 0xe0))(param_1);
    if ((cVar3 == '\0') || (*(char *)((longlong)param_1 + 0x172) == '\x01')) {
      FUN_148e03136(lVar1 + 0x6890);
    }
  }
  if ((*(char *)((longlong)param_1 + 0x171) == '\0') &&
     (lVar1 = param_1[4], (longlong)(int)lVar1 != 0)) {
    lVar7 = param_1[3];
    lVar12 = 0;
    do {
      iVar4 = *(int *)(lVar7 + 4 + lVar12);
      if ((((iVar4 != 0) && (uVar13 = *(uint *)(lVar7 + lVar12), -1 < (int)uVar13)) &&
          ((int)uVar13 < DAT_14c9647dc)) &&
         (((plVar10 = (longlong *)
                      ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar4)) &&
          ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
          lVar6 = *plVar10;
        }
        else {
          lVar6 = 0;
        }
        local_80 = *(wchar_t **)(lVar6 + 0x18);
        FUN_1400021e4(&local_80,&local_70);
        FUN_1400021e4(&DAT_14cbc6230,&local_80);
        _Str = local_80;
        if (local_78 == 0) {
          _Str = L"";
        }
        if (_Str == (wchar_t *)0x0) {
          bVar14 = false;
        }
        else {
          sVar5 = wcslen(_Str);
          local_d0 = 0xffffffff;
          local_d8 = 0;
          iVar4 = FUN_1447ee042(&local_70,_Str,sVar5 & 0xffffffff,1);
          bVar14 = iVar4 != -1;
        }
        if (local_80 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_70 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (bVar14) {
          FUN_1440ec27e(param_1,1,0);
          break;
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar1 * 8 != lVar12);
  }
LAB_1440edae7:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440edfdc FUN_1440edfdc body=527 status=ok
// SIG undefined FUN_1440edfdc(void)

void FUN_1440edfdc(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((0.0001 < *(float *)(param_1[0x1c] + 0x1f8)) && (*(char *)(param_1[0x1c] + 0x290) == '\0')) {
    FUN_1409df424();
    FUN_140bc19bc(param_1,0);
    if (*(char *)((longlong)param_1 + 0x10d) == '\x04') {
      FUN_148d021a8(param_1[0x22]);
    }
    lVar1 = *(longlong *)(param_1[0x22] + 0xa8);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x20))(lVar1 + 0x3b48);
        FUN_1418dfe60(uVar3,0,DAT_14cbc6208);
        FUN_1440fc6e4(lVar1 + 0x66e0,param_2);
        local_28._0_2_ = CONCAT11(*(undefined1 *)((longlong)param_1 + 0x10d),(char)param_2);
        FUN_1447cd2ec(lVar1 + 0x66d0);
        cVar2 = (**(code **)(*param_1 + 0xe0))(param_1);
        if ((cVar2 == '\0') || (*(char *)((longlong)param_1 + 0x172) == '\x01')) {
          FUN_14422a8f4(lVar1 + 0x6890);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x171) == '\0') {
      FUN_1440ec27e(param_1,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ee26c FUN_1440ee26c body=84 status=ok
// SIG undefined FUN_1440ee26c(void)

byte FUN_1440ee26c(longlong *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  
  if (((param_2 != '\0') || (*(char *)((longlong)param_1 + 0x10e) == '\0')) &&
     (*(char *)((longlong)param_1 + 0xb2) == '\0')) {
    if (param_2 != '\x01' || *(byte *)((longlong)param_1 + 0xb1) != 0) {
      return *(byte *)((longlong)param_1 + 0xb1);
    }
    cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (cVar1 != '\0') {
      bVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdd0))();
      return bVar2 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 1440ee2e8 FUN_1440ee2e8 body=224 status=ok
// SIG undefined FUN_1440ee2e8(void)

void FUN_1440ee2e8(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24;
  undefined1 local_23;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1eb8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x1eb8) + 0x38) = *(undefined4 *)(param_1 + 0x1ef8);
  }
  *(undefined8 *)(param_1 + 0x1ed8) = *(undefined8 *)(param_1 + 0x1eec);
  lVar2 = *(longlong *)(param_1 + 0x4208);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x1eb8), plVar1 != (longlong *)0x0)) {
    if (*param_2 == '\0') {
      if (*(char *)(param_1 + 0x1ee0) == '\0') goto LAB_1440ee34e;
      lVar2 = lVar2 + 0x66c0;
      local_1c = (**(code **)(*plVar1 + 0xb0))();
      local_20 = *(undefined4 *)(param_1 + 0x1ee4);
      local_24 = *(undefined1 *)(param_1 + 0x1ee1);
    }
    else {
      if (*(char *)(param_1 + 0x1ee0) != '\0') goto LAB_1440ee34e;
      lVar2 = lVar2 + 0x66d0;
      local_23 = (**(code **)(*plVar1 + 0xb0))();
      local_24 = *(undefined1 *)(param_1 + 0x1ee8);
    }
    FUN_1447cd2ec(lVar2);
  }
LAB_1440ee34e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ee3ca FUN_1440ee3ca body=363 status=ok
// SIG undefined FUN_1440ee3ca(void)

void FUN_1440ee3ca(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x8b2) = 0;
  if (param_1[0x3d7] == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xdb8))(param_1);
    if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
      cVar2 = *(char *)((longlong)param_1 + 0x1eea);
    }
    else {
      if ((longlong *)param_1[0x3d7] == (longlong *)0x0) goto LAB_1440ee489;
      cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x48))();
    }
    if (((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0xdd0))(param_1), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 200))(), cVar2 != '\0')) {
      param_1[0x27] = (longlong)(double)*(float *)((longlong)param_1 + 0x4594);
      FUN_143e4ad46(param_1,param_2,param_3);
      param_1[0x27] = 0;
      goto LAB_1440ee497;
    }
  }
LAB_1440ee489:
  FUN_143e4ad46(param_1,param_2,param_3);
LAB_1440ee497:
  if (((param_1[0x841] == 0) || ((longlong *)param_1[0x3d7] == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0xb0))(), cVar2 != '\x04')) {
    return;
  }
  cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x40))();
  if ((cVar2 != '\x01' || cVar1 != '\0') ||
     (cVar2 = (**(code **)(*param_1 + 0xdb8))(param_1), cVar2 == '\0')) {
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = (**(code **)(*param_1 + 0xdb8))(param_1);
    if (cVar1 != '\0') {
      return;
    }
    cVar1 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x40))();
    if (cVar1 != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x8b2) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001440ee52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x841] + 0x7f0))();
  return;
}



// FUNCTION 1440ee536 FUN_1440ee536 body=118 status=ok
// SIG undefined FUN_1440ee536(void)

void FUN_1440ee536(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_143e4a8d0();
  plVar1 = *(longlong **)(param_1 + 0x1eb8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,0);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xa0))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x48))();
        if ((cVar2 != '\0') && (0.0 < *(double *)(param_1 + 0x138))) {
          FUN_1404da4f4(*(undefined8 *)(param_1 + 0x1eb8),1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1440ee5ac FUN_1440ee5ac body=770 status=ok
// SIG undefined FUN_1440ee5ac(void)

undefined8 FUN_1440ee5ac(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xb0))();
    uVar4 = 1;
    if (cVar3 == '\x02') goto LAB_1440ee88a;
    if (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xb0))();
      uVar4 = 2;
      if (cVar3 == '\x04') goto LAB_1440ee88a;
    }
    lVar1 = *(longlong *)(param_1 + 0x4210);
    if (((lVar1 != 0) && (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0)) &&
       (*(int *)(lVar1 + 0x6b4) < *(int *)(lVar1 + 0x688))) {
      plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0xd0))();
      FUN_1446f470e(&local_18,L"blood",1);
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar2 = (uint)((ulonglong)local_18 >> 0x10);
        uVar7 = (uint)local_18 & 0xffff;
        plVar6 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar5[8];
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar5[9] - 1U &
                        (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar7) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*plVar5 + (longlong)iVar8 * 0x10) == local_18) goto LAB_1440ee8a7;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + *plVar5 + 8);
          } while (iVar8 != -1);
        }
      }
      FUN_1446f470e(&local_20,L"Blood",1);
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar2 = (uint)((ulonglong)local_20 >> 0x10);
        uVar7 = (uint)local_20 & 0xffff;
        plVar6 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar5[8];
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar5[9] - 1U &
                        (int)((ulonglong)local_20 >> 0x20) + ((uint)local_20 << 0x10 | uVar7) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*plVar5 + (longlong)iVar8 * 0x10) == local_20) goto LAB_1440ee8a7;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + *plVar5 + 8);
          } while (iVar8 != -1);
        }
      }
      FUN_1446f470e(&local_28,&DAT_14b964cc4,1);
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar2 = (uint)((ulonglong)local_28 >> 0x10);
        uVar7 = (uint)local_28 & 0xffff;
        plVar6 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar5[8];
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar5[9] - 1U &
                        (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar7) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*plVar5 + (longlong)iVar8 * 0x10) == local_28) goto LAB_1440ee8ab;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + *plVar5 + 8);
          } while (iVar8 != -1);
        }
      }
      FUN_1446f470e(&local_30,&DAT_14b964ccc,1);
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar2 = (uint)((ulonglong)local_30 >> 0x10);
        uVar7 = (uint)local_30 & 0xffff;
        plVar6 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar5[8];
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar5[9] - 1U &
                        (int)((ulonglong)local_30 >> 0x20) + ((uint)local_30 << 0x10 | uVar7) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*plVar5 + (longlong)iVar8 * 0x10) == local_30) goto LAB_1440ee8ab;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + *plVar5 + 8);
            uVar4 = 0;
          } while (iVar8 != -1);
          goto LAB_1440ee88a;
        }
      }
    }
  }
  uVar4 = 0;
  goto LAB_1440ee88a;
LAB_1440ee8a7:
  uVar4 = 3;
  goto LAB_1440ee88a;
LAB_1440ee8ab:
  uVar4 = 4;
LAB_1440ee88a:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1440ee8b0 FUN_1440ee8b0 body=338 status=ok
// SIG undefined FUN_1440ee8b0(void)

void FUN_1440ee8b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_1 != 0) && (lVar1 = *(longlong *)(*param_1 + 0x1f0), lVar1 != 0)) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) && (*param_1 != 0)
       ) {
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
      FUN_1409c9c98(uVar2,0);
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



// FUNCTION 1440eea16 FUN_1440eea16 body=2337 status=ok
// SIG undefined FUN_1440eea16(void)

void FUN_1440eea16(longlong *param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  ulonglong local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = *param_1;
  if ((lVar7 == 0) || (plVar10 = *(longlong **)(lVar7 + 0x1f0), plVar10 == (longlong *)0x0))
  goto LAB_1440eef36;
  lVar7 = *(longlong *)(lVar7 + 0x4210);
  if (DAT_14cba8288 == 0) {
    local_f0 = &local_58;
    local_58 = FUN_141864c34;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_1464cee30;
    local_f8 = &LAB_148bfac22;
    local_100 = &LAB_140f21842;
    local_108 = L"Game";
    local_110 = 0;
    local_118 = 0x10000004;
    local_120 = 0x10;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((((*(int *)(plVar10[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (lVar7 == 0 ||
        *(longlong *)
         (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
        DAT_14cba8288 + 0x30)) || (*param_1 == 0)) || ((*(byte *)(plVar10 + 0xaa) & 0x10) != 0))
  goto LAB_1440eef36;
  if (param_2 == '\0') {
    cVar3 = FUN_1404fa388(param_1 + 0xc);
    if (cVar3 != '\0') {
      local_d8 = plVar10[0x6ba];
      local_d0 = plVar10[0x6bb];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      uVar5 = FUN_140206ee8(lVar7 + 0x9b8,&local_d8);
      FUN_140bd765a(param_1 + 0xc,uVar5,0);
    }
    cVar3 = (**(code **)(*plVar10 + 0x700))(plVar10);
    if ((cVar3 != '\0') && (lVar8 = plVar10[0x78], lVar8 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_f0 = &local_58;
        local_58 = FUN_141030f22;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_1459f2e4c;
        local_f8 = &LAB_148c39de3;
        local_100 = &LAB_1457a9eb2;
        local_108 = L"Game";
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3de0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         ((*(code **)(lVar7 + 0x9e8) != (code *)0x0 && (*(int *)(lVar7 + 0x9f0) - 1U < 0xfffffffe)))
         ) {
        local_50 = (longlong *)CONCAT44(local_50._4_4_,*(int *)(lVar7 + 0x9f0));
        local_48 = 0;
        local_58 = *(code **)(lVar7 + 0x9e8);
        FUN_140fd0a38(lVar8,&local_58,lVar8 + 0x960,0);
      }
    }
    lVar8 = 0x4578;
    if (((((*(int *)((longlong)param_1 + 0x84) != 0) &&
          (uVar2 = *(uint *)(param_1 + 0x10), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar10 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x84))))) &&
       (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && ((longlong *)*plVar10 != (longlong *)0x0))))
    {
      (**(code **)(*(longlong *)*plVar10 + 0x2b0))();
      goto LAB_1440eef17;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar10 + 0x700))(plVar10);
    if ((cVar3 != '\0') && (lVar8 = plVar10[0x78], lVar8 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_f0 = &local_58;
        local_58 = FUN_141030f22;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_1459f2e4c;
        local_f8 = &LAB_148c39de3;
        local_100 = &LAB_1457a9eb2;
        local_108 = L"Game";
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3de0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
          (*(code **)(lVar7 + 0x9e8) != (code *)0x0)) && (*(int *)(lVar7 + 0x9f0) - 1U < 0xfffffffe)
         ) {
        local_50 = (longlong *)CONCAT44(local_50._4_4_,*(int *)(lVar7 + 0x9f0));
        local_48 = 0;
        local_110 = 0;
        local_118 = 0x3f800000;
        local_120 = CONCAT31(local_120._1_3_,1);
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffffffffff00);
        local_58 = *(code **)(lVar7 + 0x9e8);
        FUN_140cab31c(lVar8,&local_58,0xff,lVar8 + 0x960);
      }
    }
    cVar3 = FUN_1404fa388(param_1 + 0xc);
    if (cVar3 == '\0') {
      local_88 = *(undefined8 *)(lVar7 + 0x988);
      local_80 = *(undefined4 *)(lVar7 + 0x990);
      local_78 = *(undefined8 *)(lVar7 + 0x998);
      uVar5 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x9a0));
      local_70 = FUN_14477b664(uVar5);
      local_68 = *(undefined8 *)(lVar7 + 0x9a8);
      local_60 = *(longlong *)(lVar7 + 0x9b0);
      if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        piVar1 = *(int **)(local_60 + 0x50);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar4 = 5;
        }
        else {
          if ((char)piVar1[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_1440eeb96;
          }
          iVar4 = 2;
        }
        LOCK();
        piVar1[2] = iVar4;
        UNLOCK();
      }
LAB_1440eeb96:
      local_128 = (undefined8 *)0x0;
      FUN_140f7fb5b(&local_58,plVar10,&local_88,0);
      if ((code **)(param_1 + 0xc) != &local_58) {
        param_1[0xc] = (longlong)local_58;
        local_58 = (code *)0x0;
        plVar9 = (longlong *)param_1[0xd];
        param_1[0xd] = (longlong)local_50;
        local_50 = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0xe) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 0x74) = local_48._4_4_;
      *(undefined4 *)(param_1 + 0xf) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_3c;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
    }
    if (((*(int *)((longlong)param_1 + 0x84) == 0) ||
        (uVar2 = *(uint *)(param_1 + 0x10), (int)uVar2 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar2 ||
        (((lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 == 0 ||
          (*(int *)(lVar8 + 0x10) != *(int *)((longlong)param_1 + 0x84))) ||
         ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))))) {
      lVar6 = FUN_1412fe774(lVar7 + 0xa00);
      lVar8 = 0x4568;
      if ((lVar6 != 0) && (plVar10[0x85] != 0)) {
        local_128 = &local_a8;
        local_98 = DAT_14c846508;
        local_a8 = DAT_14c8464f8;
        uStack_a0 = DAT_14c846500;
        local_c8 = (undefined4)DAT_14c8464e0;
        uStack_c4 = DAT_14c8464e0._4_4_;
        uStack_c0 = (undefined4)DAT_14c8464e8;
        uStack_bc = DAT_14c8464e8._4_4_;
        local_b8 = DAT_14c8464f0;
        local_108 = (wchar_t *)CONCAT71(local_108._1_7_,1);
        local_118 = CONCAT31(local_118._1_3_,1);
        local_110 = local_110 & 0xffffffffffffff00;
        local_120 = 2;
        lVar7 = FUN_140a44468(lVar6,plVar10[0x85],*(undefined8 *)(lVar7 + 0xa28));
        if (lVar7 != 0) {
          if (DAT_14cb39ca0 == 0) {
            local_f0 = &local_58;
            local_58 = FUN_144a7958c;
            local_e0 = FUN_14081d0ea;
            local_e8 = &LAB_14638c6c0;
            local_f8 = &LAB_14811044c;
            local_100 = &LAB_1407f5cf8;
            local_108 = L"Engine";
            local_110 = 0;
            local_118 = 0x10000004;
            local_120 = 0x10;
            local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x8e0);
            FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
          }
          if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) {
            uVar2 = *(uint *)(lVar7 + 0xc);
            *(uint *)(param_1 + 0x10) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            iVar4 = *(int *)(lVar7 + 0x10);
            if (iVar4 == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar12 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar12) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar4 = *(int *)(lVar7 + 0x10);
              bVar12 = iVar4 == 0;
              if (bVar12) {
                *(int *)(lVar7 + 0x10) = iVar11;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar12) {
                iVar4 = iVar11;
              }
              *(int *)((longlong)param_1 + 0x84) = iVar4;
              if (iVar4 == 0) goto LAB_1440eef29;
            }
            else {
              *(int *)((longlong)param_1 + 0x84) = iVar4;
            }
            uVar2 = *(uint *)(param_1 + 0x10);
            if (((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
                 (plVar9 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar9 != (longlong *)0x0)) &&
                (((int)plVar9[2] == iVar4 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) &&
               (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)) {
              *(byte *)((longlong)plVar9 + 0x7cc) = *(byte *)((longlong)plVar9 + 0x7cc) & 0xef;
              FUN_140388f74(plVar9);
              FUN_140e996a4(plVar9,plVar10);
              FUN_140357fa8(plVar9,2,0);
              FUN_1440ef4da(param_1);
              (**(code **)(*plVar9 + 0xa60))(plVar9,1);
            }
            goto LAB_1440eef29;
          }
        }
LAB_1440eef17:
        param_1[0x10] = 0;
      }
    }
    else {
      lVar8 = 0x4568;
    }
  }
LAB_1440eef29:
  FUN_1447cd2ec(lVar8 + *param_1,0);
LAB_1440eef36:
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ef338 FUN_1440ef338 body=396 status=ok
// SIG undefined FUN_1440ef338(void)

void FUN_1440ef338(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
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
  if ((*param_1 != 0) && (lVar2 = *(longlong *)(*param_1 + 0x1f0), lVar2 != 0)) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar3 = *param_1, lVar3 != 0)) {
      if ((*(byte *)(lVar2 + 0x550) & 0x10) == 0) {
        param_1[4] = param_1[3];
      }
      *(undefined8 *)((longlong)param_1 + 0x2c) = 0xbf800000bf800000;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xbf800000;
      bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x1f0) + 0x550);
      FUN_1409df526(lVar3,&DAT_14cbc6238);
      *(byte *)(*(longlong *)(*param_1 + 0x1f0) + 0x550) =
           *(byte *)(*(longlong *)(*param_1 + 0x1f0) + 0x550) & 0xf7 | bVar1 & 8;
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



// FUNCTION 1440ef4da FUN_1440ef4da body=267 status=ok
// SIG undefined FUN_1440ef4da(void)

void FUN_1440ef4da(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x84) != 0) && (uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x84))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))) {
      FUN_1440ef5e6(param_1,local_38);
      FUN_1404e0f62(lVar2,DAT_14cbc6240,local_38);
      bVar5 = true;
      if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1))
         && (((int)uVar1 < DAT_14c9647dc &&
             ((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0 &&
              (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x1c))))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
      FUN_1449e3cec(lVar2,bVar5,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ef5e6 FUN_1440ef5e6 body=543 status=ok
// SIG undefined FUN_1440ef5e6(void)

undefined4 * FUN_1440ef5e6(longlong *param_1,undefined4 *param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  char cVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_68 [32];
  float local_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (((lVar3 != 0) && ((&DAT_00001100)[lVar3] == '\r')) && (*(int *)(lVar3 + 0x44f4) != 0)) {
    uVar2 = *(uint *)(lVar3 + 0x44f0);
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((((plVar7 != (longlong *)0x0) &&
           (((int)plVar7[2] == *(int *)(lVar3 + 0x44f4) &&
            (lVar4 = *(longlong *)(lVar3 + 0x4210), (*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) &&
          (lVar4 != 0)) && (lVar5 = *plVar7, lVar5 != 0)) {
        if ((*(longlong *)(lVar3 + 0xa8) == 0) ||
           (*(char *)(*(longlong *)(lVar3 + 0xa8) + 0x178) != '\x01')) {
          cVar8 = *(char *)((longlong)param_1 + 0x29);
          uVar10 = (undefined4)*(undefined8 *)(lVar3 + 0x128);
          uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x128) >> 0x20);
          dVar13 = *(double *)(lVar3 + 0x130);
          dVar14 = *(double *)(lVar3 + 0x138);
        }
        else {
          FUN_1440a4e02(lVar5,&local_48,*(undefined4 *)((longlong)param_1 + 0x2c));
          lVar3 = *param_1;
          dVar1 = *(double *)(lVar3 + 0x128);
          uVar10 = SUB84(dVar1,0);
          uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar13 = *(double *)(lVar3 + 0x130);
          dVar14 = *(double *)(lVar3 + 0x138);
          cVar8 = 0.0 < local_38 * dVar14 +
                        (double)CONCAT44(uStack_44,local_48) * dVar1 + local_40 * dVar13;
        }
        pfVar9 = (float *)(lVar4 + 0x970);
        if (*(char *)(lVar5 + 0x25fa) == '\0') {
          pfVar9 = (float *)(lVar4 + 0x938);
        }
        if (cVar8 == '\0') {
          fVar12 = -1.0;
        }
        else {
          fVar12 = 1.0;
        }
        local_48 = fVar12 * (float)SQRT(dVar14 * dVar14 +
                                        (double)CONCAT44(uVar11,uVar10) *
                                        (double)CONCAT44(uVar11,uVar10) + dVar13 * dVar13) * *pfVar9
                   + *(float *)((longlong)param_1 + 0x2c);
        FUN_1440ef806(lVar5,&local_48);
        FUN_1440a2790(lVar5,param_2,local_48);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar10 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1440ef806 FUN_1440ef806 body=360 status=ok
// SIG undefined FUN_1440ef806(void)

undefined8 FUN_1440ef806(longlong param_1,float *param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x2668);
  if (((lVar2 != 0) && (0 < (longlong)*(int *)(lVar2 + 0x670))) &&
     (fVar1 = *(float *)(*(longlong *)(lVar2 + 0x668) + -0x14 +
                        (longlong)*(int *)(lVar2 + 0x670) * 0x14), 0.0 < fVar1)) {
    local_54 = 0.0;
    local_58 = fVar1;
    FUN_1440a4b86(param_1,&local_54,&local_58);
    fVar5 = *param_2;
    if ((fVar5 < local_54) || (local_58 < fVar5)) {
      if ((*(longlong *)(param_1 + 0x2668) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x2668) + 0x695) != '\x01')) {
        bVar3 = fVar5 < local_54;
        if (param_3 != '\0') {
          bVar3 = local_58 < fVar5;
        }
        if (!bVar3) goto LAB_1440ef90f;
        if (local_58 <= fVar5) {
          fVar5 = local_58;
        }
        if (fVar5 <= local_54) {
          fVar5 = local_54;
        }
        uVar4 = 1;
      }
      else {
        if (0.0 <= fVar5) {
          if (fVar1 < fVar5) {
            fVar5 = (float)FUN_1447c7e44(fVar5 - fVar1);
            fVar5 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar1 |
                           (uint)(fVar5 + 0.0) & -(uint)(fVar5 != 0.0));
          }
        }
        else {
          fVar5 = (float)FUN_1447c7e44();
          fVar5 = (float)(-(uint)(fVar5 != 0.0) & (uint)(fVar1 - fVar5));
        }
        uVar4 = 0;
      }
      *param_2 = fVar5;
      goto LAB_1440ef911;
    }
  }
LAB_1440ef90f:
  uVar4 = 0;
LAB_1440ef911:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ef970 FUN_1440ef970 body=507 status=ok
// SIG undefined FUN_1440ef970(void)

double * FUN_1440ef970(longlong *param_1,double *param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  float fVar11;
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
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*param_1 != 0) && (lVar5 = *(longlong *)(*param_1 + 0x1f0), lVar5 != 0)) {
    if (DAT_14cba8288 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141864c34;
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
    }
    if ((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
        (lVar5 = *(longlong *)(lVar5 + 0x438), lVar5 != 0)) &&
       (lVar6 = *(longlong *)(*param_1 + 0x4210), lVar6 != 0)) {
      lVar10 = lVar6 + 0x940;
      if (*(char *)(param_3 + 0x25fa) == '\0') {
        lVar10 = lVar6 + 0x908;
      }
      dVar2 = *(double *)(lVar5 + 0x270);
      dVar3 = *(double *)(lVar5 + 0x268);
      dVar4 = *(double *)(lVar5 + 0x260);
      fVar11 = (float)FUN_1440efb72(param_1);
      fVar1 = *(float *)(lVar10 + 0x2c);
      *param_2 = dVar4 + 0.0;
      param_2[1] = dVar3 + 0.0;
      param_2[2] = (double)(fVar11 + fVar1) + dVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar9 = DAT_14c8464e8._4_4_;
  uVar8 = (undefined4)DAT_14c8464e8;
  uVar7 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440efb72 FUN_1440efb72 body=145 status=ok
// SIG undefined FUN_1440efb72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1440efb72(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0xa8) != 0)) &&
     (*(char *)(*(longlong *)(lVar1 + 0xa8) + 0x178) == '\x01')) {
    auVar5 = *(undefined1 (*) [16])(param_2 + 0x280) & _DAT_149931180;
    auVar4 = _DAT_149931180 & *(undefined1 (*) [16])(param_2 + 0x290);
    auVar2._16_16_ = auVar4;
    auVar2._0_16_ = auVar5;
    auVar4._8_8_ = auVar5._0_8_;
    auVar5 = minpd(auVar5,auVar2._8_16_);
    auVar4 = minpd(auVar5,auVar4);
    if (0.0001 < (float)auVar4._0_8_) {
      fVar3 = 0.0;
      if (0.0 <= *(float *)(lVar1 + 0x470)) {
        fVar3 = *(float *)(lVar1 + 0x470);
      }
      fVar6 = fVar3 * (float)auVar4._0_8_ + *(float *)(param_2 + 0x640);
      fVar3 = 0.0;
      if (0.0 <= fVar6) {
        fVar3 = fVar6;
      }
      return fVar3;
    }
  }
  return (float)*(double *)(param_2 + 0x290) * *(float *)(param_2 + 0x640);
}



// FUNCTION 1440efc04 FUN_1440efc04 body=88 status=ok
// SIG undefined FUN_1440efc04(void)

undefined8 FUN_1440efc04(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((&DAT_00001100)[param_1] != '\r') || (*(int *)(param_1 + 0x44f4) == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x44f0);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x44f4)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 1440efc5c FUN_1440efc5c body=1660 status=ok
// SIG undefined FUN_1440efc5c(void)

void FUN_1440efc5c(longlong *param_1)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  uint *puVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  longlong local_a0;
  float *local_98;
  double local_90;
  double local_88;
  double local_80;
  code *local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*param_1 == 0) || (lVar3 = *(longlong *)(*param_1 + 0x1f0), lVar3 == 0)) goto LAB_1440efccc;
  if (DAT_14cba8288 == 0) {
    local_c0 = &local_78;
    local_78 = FUN_141864c34;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_1464cee30;
    local_c8 = &LAB_148bfac22;
    local_d0 = &LAB_140f21842;
    local_d8 = &DAT_149e063b2;
    local_e0 = 0;
    local_e8 = 0x10000004;
    local_f0 = 0x10;
    local_f8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) ||
     (lVar7 = *(longlong *)(*param_1 + 0x4210), lVar7 == 0)) goto LAB_1440efccc;
  iVar1 = (int)param_1[2];
  if ((longlong)iVar1 < 1) {
    local_a0 = 0;
    lVar6 = local_a0;
  }
  else {
    iVar11 = -iVar1;
    fVar15 = 3.4028235e+38;
    local_a0 = 0;
    local_98 = (float *)(lVar7 + 0x93c);
    uVar10 = (longlong)iVar1;
    do {
      lVar6 = param_1[1] + uVar10 * 8;
      puVar4 = (uint *)(lVar6 + -8);
      iVar1 = *(int *)(lVar6 + -4);
      if (((((iVar1 == 0) || (uVar8 = *puVar4, (int)uVar8 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar8 ||
            ((plVar9 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar9 == (longlong *)0x0 || ((int)plVar9[2] != iVar1)))))) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (lVar6 = *plVar9, lVar6 == 0)) {
        uVar8 = *(uint *)(param_1 + 2);
        if (uVar10 != uVar8) {
          memmove(puVar4,(void *)(param_1[1] + uVar10 * 8),(longlong)(int)(iVar11 + uVar8) << 3);
          uVar8 = *(uint *)(param_1 + 2);
        }
        *(uint *)(param_1 + 2) = uVar8 - 1;
        FUN_1440fc786();
      }
      else {
        FUN_1440ef970(param_1,&local_78,lVar6);
        if (*(longlong *)(lVar6 + 0x2668) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = FUN_147a1e2a6(*(longlong *)(lVar6 + 0x2668),&local_78,1);
        }
        FUN_1440a2790(lVar6,&local_90,uVar14);
        fVar13 = (float)((local_68 - local_80) * (local_68 - local_80) +
                        ((double)local_78 - local_90) * ((double)local_78 - local_90) +
                        (local_70 - local_88) * (local_70 - local_88));
        pfVar2 = local_98;
        if (*(char *)(lVar6 + 0x25fa) != '\0') {
          pfVar2 = (float *)(lVar7 + 0x974);
        }
        if (fVar13 <= *pfVar2 * *pfVar2) {
          if (((((*(int *)((longlong)param_1 + 0x1c) != 0) &&
                (uVar8 = *(uint *)(param_1 + 3), -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc))
              && ((plVar9 = (longlong *)
                            ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                  plVar9 != (longlong *)0x0 &&
                  ((int)plVar9[2] == *(int *)((longlong)param_1 + 0x1c))))) &&
             (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar6 == *plVar9)))) break;
          if (fVar13 < fVar15) {
            fVar15 = fVar13;
            local_a0 = lVar6;
          }
        }
      }
      iVar11 = iVar11 + 1;
      bVar12 = 1 < uVar10;
      uVar10 = uVar10 - 1;
      lVar6 = local_a0;
    } while (bVar12);
  }
  local_a0 = lVar6;
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  if (iVar1 == 0) {
    lVar7 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 3);
    lVar7 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != iVar1 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar9;
      }
    }
  }
  if (lVar7 == local_a0) goto LAB_1440efccc;
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
LAB_1440f01aa:
    lVar7 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 4);
    lVar7 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)((longlong)param_1 + 0x24) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1440f01aa;
      lVar7 = *plVar9;
    }
  }
  if (iVar1 == 0) {
LAB_1440f01b1:
    lVar6 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 3);
    lVar6 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != iVar1 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
      goto LAB_1440f01b1;
      lVar6 = *plVar9;
    }
  }
  if (lVar7 == lVar6) {
    param_1[4] = 0;
  }
  if (local_a0 == 0) {
    param_1[3] = 0;
    if (*(char *)(lVar3 + 0x178) != '\x03') goto LAB_1440efccc;
    lVar3 = *param_1;
LAB_1440f0108:
    lVar7 = 0;
  }
  else {
    uVar8 = *(uint *)(local_a0 + 0xc);
    *(uint *)(param_1 + 3) = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar1 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar1 = *(int *)(lVar7 + 0x10);
      bVar12 = iVar1 == 0;
      if (bVar12) {
        *(int *)(lVar7 + 0x10) = iVar11;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar1 = iVar11;
      }
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar1;
    if (*(char *)(lVar3 + 0x178) != '\x03') goto LAB_1440efccc;
    lVar3 = *param_1;
    if (iVar1 == 0) goto LAB_1440f0108;
    uVar8 = *(uint *)(param_1 + 3);
    lVar7 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != iVar1 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
      goto LAB_1440f0108;
      lVar7 = *plVar9;
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
    }
  }
  *(longlong *)(lVar3 + 0x4560) = lVar7;
  uVar10 = *(ulonglong *)(lVar3 + 0x38);
  if (uVar10 < 0xffffffff00000000) {
    plVar9 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar9 = (longlong *)0x0;
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,lVar3,uVar10,0x13);
  }
  else {
    uVar8 = (uint)uVar10;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c998088)) {
      puVar5 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar5 = DAT_14c998080;
      }
      if ((*(uint *)(puVar5 + ((uint)(uVar10 >> 3) & 0xffffffc)) >> (uVar8 & 0x1f) & 1) != 0) {
        lVar3 = DAT_14c998060 + (ulonglong)(uVar8 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar3 + 0x18);
        if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar3 + 8);
        }
        *puVar4 = *puVar4 | 0x80000;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
      }
    }
  }
LAB_1440efccc:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f02da FUN_1440f02da body=1598 status=ok
// SIG undefined FUN_1440f02da(void)

void FUN_1440f02da(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((*param_1 == 0) || (plVar16 = *(longlong **)(*param_1 + 0x4208), plVar16 == (longlong *)0x0)
       ) || (cVar9 = (**(code **)(*plVar16 + 0x700))(), cVar9 == '\0')) ||
     (((lVar2 = *param_1, *(longlong *)(lVar2 + 0x110) == 0 || (*(longlong *)(lVar2 + 0x4210) == 0))
      || (lVar2 = *(longlong *)(lVar2 + 0x1f0), lVar2 == 0)))) goto LAB_1440f07e5;
  if (DAT_14cba8288 == 0) {
    local_110 = &local_c8;
    local_c8 = FUN_141864c34;
    local_100 = FUN_14081d0ea;
    local_108 = &LAB_1464cee30;
    local_118 = &LAB_148bfac22;
    local_120 = &LAB_140f21842;
    local_128 = &DAT_149e063b2;
    local_130 = 0;
    local_138 = 0x10000004;
    local_140 = 0x10;
    local_148 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) ||
     ((*(byte *)(lVar2 + 0x550) & 0x10) != 0)) goto LAB_1440f07e5;
  *(undefined1 *)(param_1 + 5) = 0;
  cVar9 = (**(code **)(*(longlong *)*param_1 + 0xe78))((longlong *)*param_1,0x8000000);
  if (cVar9 == '\0') goto LAB_1440f07e5;
  lVar11 = *param_1;
  if ((&DAT_00001100)[lVar11] == '\r') {
    *(undefined1 *)(param_1 + 5) = 1;
    goto LAB_1440f07e5;
  }
  if (((((((*(int *)((longlong)param_1 + 0x1c) == 0) ||
          (uVar1 = *(uint *)(param_1 + 3), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
        ((plVar16 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)((longlong)param_1 + 0x1c))))) ||
       ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (lVar3 = *plVar16, lVar3 == 0)) ||
     (((*(int *)((longlong)param_1 + 0x24) != 0 && (uVar1 = *(uint *)(param_1 + 4), -1 < (int)uVar1)
       ) && ((((int)uVar1 < DAT_14c9647dc &&
              (((plVar16 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                plVar16 != (longlong *)0x0 &&
                ((int)plVar16[2] == *(int *)((longlong)param_1 + 0x24))) &&
               ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) && (lVar3 == *plVar16))))))
  goto LAB_1440f07e5;
  *(undefined1 *)(param_1 + 5) = 1;
  lVar4 = *(longlong *)(lVar11 + 0x4210);
  lVar11 = *(longlong *)(lVar11 + 0x110);
  local_c8 = *(code **)(lVar11 + 0x260);
  uStack_c0 = *(undefined8 *)(lVar11 + 0x268);
  local_b8 = *(undefined8 *)(lVar11 + 0x270);
  if (*(longlong *)(lVar3 + 0x2668) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = FUN_147a1e2a6(*(longlong *)(lVar3 + 0x2668),&local_c8,1);
  }
  FUN_1440a4e02(lVar3,&local_e0,uVar18);
  lVar11 = *param_1;
  fVar20 = (float)(*(double *)(lVar11 + 0x138) * local_d0 +
                  *(double *)(lVar11 + 0x128) * local_e0 + *(double *)(lVar11 + 0x130) * local_d8);
  fVar19 = ABS(fVar20);
  if ((((*(char *)(lVar3 + 0x25fa) == '\x01') && (lVar11 = FUN_1440a0008(lVar3), lVar11 != 0)) &&
      (cVar9 = '\x01', *(char *)(lVar11 + 0x564) != '\0')) ||
     (cVar9 = *(char *)(lVar3 + 0x25f8), cVar9 != '\0')) {
    lVar11 = (**(code **)(*(longlong *)(lVar2 + 0x3b38) + 0x18))(lVar2 + 0x3b38);
    plVar16 = &DAT_14cbcb1e0;
    if ((*(longlong *)(lVar11 + 0x118) != 0) &&
       (plVar12 = *(longlong **)(lVar11 + 0x120), plVar12 != (longlong *)0x0)) {
      if (*(code **)(*plVar12 + 0x20) == (code *)&LAB_144a7e90a) {
        plVar12 = plVar12 + 0x143;
      }
      else {
        plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12);
      }
      if ((int)plVar12[6] != *(int *)((longlong)plVar12 + 0x5c)) {
        uVar1 = *(uint *)(lVar11 + 0x128);
        plVar14 = plVar12 + 0xc;
        if ((longlong *)plVar12[0xd] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar12[0xd];
        }
        iVar13 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar12[0xe] - 1U & uVar1) * 4);
        if (iVar13 != -1) {
          lVar11 = plVar12[5];
          iVar15 = iVar13;
          do {
            if (*(uint *)(lVar11 + (longlong)iVar15 * 0xe0) == uVar1) goto LAB_1440f0666;
            iVar15 = *(int *)((longlong)iVar15 * 0xe0 + lVar11 + 0xd0);
          } while (iVar15 != -1);
        }
      }
    }
    goto LAB_1440f068d;
  }
LAB_1440f06df:
  if (*(float *)(lVar4 + 0x978) <= fVar19) {
    if (fVar20 <= 0.0) {
LAB_1440f07e0:
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  else {
    plVar16 = *(longlong **)(lVar2 + 0x3c0);
    if (plVar16 == (longlong *)0x0) {
      local_e8 = DAT_14c846508;
      local_f8 = DAT_14c8464f8;
      uStack_f0 = DAT_14c846500;
    }
    else {
      (**(code **)(*plVar16 + 0x680))(plVar16,&local_f8);
    }
    dVar8 = (double)FUN_144719204((int)local_f8,0x4076800000000000);
    dVar7 = (double)FUN_144719204((int)uStack_f0,0x4076800000000000);
    dVar5 = sin(dVar8 * 0.017453292519943295);
    dVar8 = cos(dVar8 * 0.017453292519943295);
    dVar6 = sin(dVar7 * 0.017453292519943295);
    dVar7 = cos(dVar7 * 0.017453292519943295);
    bVar10 = 0.0 < local_d0 * dVar5 + local_e0 * dVar7 * dVar8 + dVar6 * dVar8 * local_d8;
  }
  goto LAB_1440f07e2;
  while (iVar13 = *(int *)(lVar17 + 0xd0), iVar13 != -1) {
LAB_1440f0666:
    lVar17 = lVar11 + (longlong)iVar13 * 0xe0;
    if (*(uint *)(lVar11 + (longlong)iVar13 * 0xe0) == uVar1) goto LAB_1440f0689;
  }
  lVar17 = 0;
LAB_1440f0689:
  plVar16 = (longlong *)(lVar17 + 0x10);
LAB_1440f068d:
  if (cVar9 == '\x02') {
    bVar10 = false;
    if (((0.0 < fVar20) &&
        (*(float *)(lVar4 + 0x97c) <= fVar19 && fVar19 != *(float *)(lVar4 + 0x97c))) &&
       (*plVar16 != lVar3)) {
      if (*(char *)(lVar3 + 0x25fa) == '\0') {
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_1440f07e0;
    }
  }
  else {
    if (cVar9 != '\x01') goto LAB_1440f06df;
    bVar10 = true;
    if (((fVar20 < 0.0) &&
        (*(float *)(lVar4 + 0x97c) <= fVar19 && fVar19 != *(float *)(lVar4 + 0x97c))) &&
       ((*plVar16 != lVar3 && (*(char *)(lVar3 + 0x25fa) == '\0')))) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
LAB_1440f07e2:
  *(bool *)((longlong)param_1 + 0x29) = bVar10;
LAB_1440f07e5:
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f091a FUN_1440f091a body=323 status=ok
// SIG undefined FUN_1440f091a(void)

void FUN_1440f091a(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((((((*param_1 != 0) && ((char)param_1[5] == '\x01')) &&
        (cVar2 = FUN_1440f0c42(param_1), cVar2 != '\0')) &&
       ((*(int *)((longlong)param_1 + 0x1c) != 0 &&
        (uVar7 = *(uint *)(param_1 + 3), -1 < (int)uVar7)))) &&
      (((int)uVar7 < DAT_14c9647dc &&
       ((lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar6 != 0 &&
        (*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x1c))))))) &&
     (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 && ((&DAT_00001100)[*param_1] != '\r')))) {
    FUN_140257a06(*param_1,&DAT_14cbc6238,0xd);
    lVar6 = *param_1;
    if (*(int *)(&DAT_00002bb0 + lVar6) != 0) {
      *(undefined4 *)(&DAT_00002bb0 + lVar6) = 0;
      uVar1 = *(ulonglong *)(lVar6 + 0x38);
      if (uVar1 < 0xffffffff00000000) {
        plVar5 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar5 = (longlong *)0x0;
        }
        (**(code **)(*plVar5 + 0x58))();
      }
      else {
        uVar7 = (uint)uVar1;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar3 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar3 = DAT_14c998080;
          }
          if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar6 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            puVar4 = *(uint **)(lVar6 + 0x18);
            if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
              puVar4 = (uint *)(lVar6 + 8);
            }
            *puVar4 = *puVar4 | 0x400;
            *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
          }
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 1440f0a5e FUN_1440f0a5e body=255 status=ok
// SIG undefined FUN_1440f0a5e(void)

void FUN_1440f0a5e(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar7 = (longlong)*(int *)(param_1 + 0x10) << 3;
    do {
      cVar2 = FUN_1440fc8fc(lVar5,param_2);
      if (cVar2 != '\0') {
        return;
      }
      lVar5 = lVar5 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if (param_2 == 0) {
    uVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar4;
      }
      uVar6 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1440fca3c((longlong *)(param_1 + 8),iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) =
       (ulonglong)uVar8 | uVar6 << 0x20;
  return;
}



// FUNCTION 1440f0b5e FUN_1440f0b5e body=226 status=ok
// SIG undefined FUN_1440f0b5e(void)

void FUN_1440f0b5e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  uint *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  if (param_2 == 0) {
    local_30 = 0;
    iVar1 = 0;
  }
  else {
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x10) = iVar3;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar3;
      }
    }
  }
  local_28 = &local_30;
  local_2c = iVar1;
  FUN_1440fcb96(param_1 + 8);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f0c42 FUN_1440f0c42 body=622 status=ok
// SIG undefined FUN_1440f0c42(void)

undefined8 FUN_1440f0c42(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
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
  undefined8 local_48;
  undefined4 local_40;
  code *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*param_1 == 0) || ((char)param_1[7] != '\0')) || (*(int *)((longlong)param_1 + 0x1c) == 0))
  goto LAB_1440f0d92;
  uVar1 = *(uint *)(param_1 + 3);
  uVar5 = 0;
  if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1440f0d94;
  plVar3 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if ((plVar3 != (longlong *)0x0) &&
     (((int)plVar3[2] == *(int *)((longlong)param_1 + 0x1c) &&
      ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar3;
    }
    else {
      lVar6 = 0;
    }
    local_48 = DAT_14cbc2020;
    local_40 = 0xffffffff;
    FUN_140c823b2(lVar6 + 0x4d8,local_38);
    if ((local_38[0] == DAT_14c9a6400) &&
       (cVar2 = (**(code **)(*(longlong *)*param_1 + 0xe78))((longlong *)*param_1,0x8000000),
       cVar2 != '\0')) {
      lVar6 = *param_1;
      if (*(longlong *)(lVar6 + 0x3170) == 0) {
        if ((*(char *)(lVar6 + 0x34b0) == '\x01') && (lVar7 = lVar6 + 0x3210, lVar7 != 0))
        goto LAB_1440f0dc2;
      }
      else {
        lVar7 = *(longlong *)(lVar6 + 0x3170) + 0xd8;
LAB_1440f0dc2:
        lVar4 = FUN_140153468(lVar7);
        if ((lVar4 != 0) &&
           (((*(byte *)(lVar7 + 0x298) & 2) == 0 && (*(longlong *)(lVar6 + 0x110) != 0))))
        goto LAB_1440f0d92;
      }
      if (((*(byte *)(*param_1 + 0x1f18) & 1) == 0) &&
         (lVar6 = *(longlong *)(*param_1 + 0x1f0), lVar6 != 0)) {
        if (DAT_14cba8288 == 0) {
          local_38[0] = FUN_141864c34;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_1464cee30;
          local_68 = &LAB_148bfac22;
          local_70 = &LAB_140f21842;
          local_78 = &DAT_149e063b2;
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = 0x9cd0;
          local_60 = local_38;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          uVar5 = CONCAT71((int7)((ulonglong)(DAT_14cba8288 + 0x30) >> 8),
                           *(char *)(lVar6 + 0x5d30) == '\0');
          goto LAB_1440f0d94;
        }
      }
    }
  }
LAB_1440f0d92:
  uVar5 = 0;
LAB_1440f0d94:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1440f0eb2 FUN_1440f0eb2 body=203 status=ok
// SIG undefined FUN_1440f0eb2(void)

void FUN_1440f0eb2(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*param_1 == 0) {
    return;
  }
  lVar6 = *(longlong *)(*param_1 + 0x4560);
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  else if (lVar6 == 0) {
    uVar4 = 0;
    uVar3 = 0;
    goto LAB_1440f0f10;
  }
  uVar4 = *(uint *)(lVar6 + 0xc);
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
  if (*(uint *)(lVar6 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar5 = DAT_14c964868 + 1;
    bVar7 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar7) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar5);
    }
    LOCK();
    uVar2 = *(uint *)(lVar6 + 0x10);
    bVar7 = uVar2 == 0;
    if (bVar7) {
      *(uint *)(lVar6 + 0x10) = uVar5;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar7) {
      uVar2 = uVar5;
    }
    uVar3 = (ulonglong)uVar2;
  }
LAB_1440f0f10:
  param_1[3] = (ulonglong)uVar4 | uVar3 << 0x20;
  return;
}



// FUNCTION 1440f0f7e FUN_1440f0f7e body=191 status=ok
// SIG undefined FUN_1440f0f7e(void)

void FUN_1440f0f7e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(float *)(param_1 + 0x2c) <= 0.0 && *(float *)(param_1 + 0x2c) != 0.0) &&
        (*(int *)(param_1 + 0x1c) != 0)) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)))) &&
     (((int)plVar3[2] == *(int *)(param_1 + 0x1c) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))))) {
    FUN_1440ef970(param_1,local_30,lVar2);
    if (*(longlong *)(lVar2 + 0x2668) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_147a1e2a6(*(longlong *)(lVar2 + 0x2668),local_30,1);
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440f103e FUN_1440f103e body=1009 status=ok
// SIG undefined FUN_1440f103e(void)

void FUN_1440f103e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  longlong *plVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  dVar5 = DAT_14c8462a0;
  dVar4 = DAT_14c846298;
  dVar10 = DAT_14c846290;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((((*(float *)(param_1 + 0x30) <= 0.0 && *(float *)(param_1 + 0x30) != 0.0) &&
         (*(int *)(param_1 + 0x1c) != 0)) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1))
       && ((((int)uVar1 < DAT_14c9647dc &&
            (plVar7 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar7 != (longlong *)0x0)) &&
           (((int)plVar7[2] == *(int *)(param_1 + 0x1c) &&
            (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar2 = *plVar7, lVar2 != 0)))))))) &&
      (*(char *)(lVar2 + 0x25fa) == '\x01')) && (0.0 <= *(float *)(param_1 + 0x2c))) {
    FUN_1440ef970(param_1,&local_a8,lVar2);
    FUN_1440a2790(lVar2,&local_c0,*(undefined4 *)(param_1 + 0x2c));
    if (*(char *)(lVar2 + 0x2630) == '\x01') {
      pdVar6 = (double *)&DAT_14c846480;
      if (*(longlong *)(lVar2 + 0x1c8) != 0) {
        pdVar6 = (double *)(*(longlong *)(lVar2 + 0x1c8) + 0x240);
      }
      dVar14 = *(double *)(lVar2 + 0x2638) * pdVar6[8];
      dVar16 = *(double *)(lVar2 + 0x2640) * pdVar6[9];
      dVar9 = *(double *)(lVar2 + 0x2648) * pdVar6[10];
      dVar11 = *pdVar6;
      dVar12 = pdVar6[1];
      dVar3 = pdVar6[2];
      dVar15 = pdVar6[3];
      dVar17 = dVar16 * dVar11 - dVar14 * dVar12;
      dVar18 = dVar9 * dVar12 - dVar16 * dVar3;
      dVar19 = dVar14 * dVar3 - dVar11 * dVar9;
      dVar18 = dVar18 + dVar18;
      dVar19 = dVar19 + dVar19;
      dVar17 = dVar17 + dVar17;
      local_a8 = (dVar17 * dVar12 - dVar19 * dVar3) + dVar15 * dVar18 + dVar14 + pdVar6[4];
      dStack_a0 = (dVar3 * dVar18 - dVar11 * dVar17) + pdVar6[3] * dVar19 + dVar16 + pdVar6[5];
      local_98 = dVar17 * dVar15 + dVar9 + (dVar19 * dVar11 - dVar18 * dVar12) + pdVar6[6];
    }
    local_c0 = local_c0 - local_a8;
    local_b8 = local_b8 - dStack_a0;
    dVar15 = local_c0 * local_c0 + local_b8 * local_b8;
    if ((dVar15 != 1.0) || (NAN(dVar15))) {
      dVar19 = DAT_14c8464e0;
      dVar11 = DAT_14c8464e8;
      dVar12 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar15) {
        dVar19 = local_c0 * (1.0 / SQRT(dVar15));
        dVar11 = local_b8 * (1.0 / SQRT(dVar15));
        dVar12 = 0.0;
      }
    }
    else {
      dVar19 = local_c0;
      dVar11 = local_b8;
      dVar12 = (double)(-(ulonglong)(local_b0 - local_98 == 0.0) & (ulonglong)(local_b0 - local_98))
      ;
    }
    fVar13 = (float)(dVar5 * dVar12 + dVar10 * dVar19 + dVar4 * dVar11);
    dVar10 = (dVar10 * dVar11 - dVar19 * dVar4) * DAT_14c8462d0 +
             (dVar4 * dVar12 - dVar11 * dVar5) * DAT_14c8462c0 +
             (dVar5 * dVar19 - dVar12 * dVar10) * DAT_14c8462c8;
    if ((((fVar13 != 0.0) || (NAN(fVar13))) || (dVar10 != 0.0)) || (NAN(dVar10))) {
      dVar10 = atan2(dVar10,(double)fVar13);
      fVar13 = (float)dVar10 * 57.295776 + 360.0;
    }
    else {
      fVar13 = 360.0;
    }
    uVar8 = FUN_1447c7e44(fVar13,0x43b40000);
    *(undefined4 *)(param_1 + 0x30) = uVar8;
  }
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f1430 FUN_1440f1430 body=552 status=ok
// SIG undefined FUN_1440f1430(void)

double * FUN_1440f1430(longlong param_1,double *param_2)

{
  double dVar1;
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
  
  dVar9 = DAT_14c8462a0;
  dVar8 = DAT_14c846298;
  dVar7 = DAT_14c846290;
  if (0.0 <= *(float *)(param_1 + 0x30)) {
    dVar2 = (double)*(float *)(param_1 + 0x30) * 0.017453292519943295;
    dVar1 = sin(dVar2);
    dVar2 = cos(dVar2);
    dVar5 = DAT_14c8462c8 * DAT_14c8462c8;
    dVar6 = dVar1 * DAT_14c8462c0;
    dVar3 = dVar1 * DAT_14c8462c8;
    dVar1 = dVar1 * DAT_14c8462d0;
    dVar13 = DAT_14c8462d0 * DAT_14c8462d0;
    dVar4 = 1.0 - dVar2;
    dVar10 = DAT_14c8462c0 * DAT_14c8462d0 * dVar4;
    dVar11 = DAT_14c8462c8 * DAT_14c8462d0 * dVar4;
    dVar12 = DAT_14c8462c0 * DAT_14c8462c8 * dVar4;
    *param_2 = (dVar10 + dVar3) * dVar9 +
               (dVar4 * DAT_14c8462c0 * DAT_14c8462c0 + dVar2) * dVar7 + (dVar12 - dVar1) * dVar8;
    param_2[1] = (dVar11 - dVar6) * dVar9 +
                 (dVar12 + dVar1) * dVar7 + (dVar5 * dVar4 + dVar2) * dVar8;
    param_2[2] = (dVar13 * dVar4 + dVar2) * dVar9 +
                 (dVar10 - dVar3) * dVar7 + (dVar11 + dVar6) * dVar8;
  }
  else {
    param_2[2] = DAT_14c8464f0;
    dVar7 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar7;
  }
  return param_2;
}



// FUNCTION 1440f1658 FUN_1440f1658 body=681 status=ok
// SIG undefined FUN_1440f1658(void)

double * FUN_1440f1658(longlong param_1,double *param_2,longlong param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar10 = DAT_14c8462a0;
  dVar9 = DAT_14c846298;
  dVar8 = DAT_14c846290;
  if ((((((*(int *)(param_1 + 0x1c) == 0) || (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       ((plVar11 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x1c))))) ||
      (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
       ((*plVar11 == 0 || (*(char *)(*plVar11 + 0x25fa) != '\x01')))))) ||
     (*(float *)(param_1 + 0x30) < 0.0)) {
    param_2[2] = DAT_14c8464f0;
    dVar8 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar8;
  }
  else {
    dVar3 = (double)*(float *)(param_1 + 0x30) * 0.017453292519943295;
    dVar2 = sin(dVar3);
    dVar3 = cos(dVar3);
    dVar6 = DAT_14c8462c8 * DAT_14c8462c8;
    dVar7 = dVar2 * DAT_14c8462c0;
    dVar4 = dVar2 * DAT_14c8462c8;
    dVar2 = dVar2 * DAT_14c8462d0;
    dVar14 = DAT_14c8462d0 * DAT_14c8462d0;
    dVar5 = 1.0 - dVar3;
    dVar12 = DAT_14c8462c0 * DAT_14c8462d0 * dVar5;
    dVar13 = DAT_14c8462c8 * DAT_14c8462d0 * dVar5;
    dVar15 = DAT_14c8462c0 * DAT_14c8462c8 * dVar5;
    dVar16 = (double)*(float *)(param_3 + 0x78);
    *param_2 = -((dVar12 + dVar4) * dVar10 +
                (dVar5 * DAT_14c8462c0 * DAT_14c8462c0 + dVar3) * dVar8 + (dVar15 - dVar2) * dVar9)
               * dVar16;
    param_2[1] = -((dVar13 - dVar7) * dVar10 +
                  (dVar15 + dVar2) * dVar8 + (dVar6 * dVar5 + dVar3) * dVar9) * dVar16;
    param_2[2] = -((dVar14 * dVar5 + dVar3) * dVar10 +
                  (dVar12 - dVar4) * dVar8 + (dVar13 + dVar7) * dVar9) * dVar16;
  }
  return param_2;
}



// FUNCTION 1440f1902 FUN_1440f1902 body=5038 status=ok
// SIG undefined FUN_1440f1902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440f1902(longlong *param_1,float param_2,int param_3)

{
  float fVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  ulonglong uVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  double *pdVar19;
  float *pfVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  uint local_400;
  undefined4 *local_3f8;
  undefined1 *local_3f0;
  undefined8 *local_3e8;
  double local_3e0;
  float *local_3d8;
  longlong local_3d0;
  float local_3c4;
  float local_3c0;
  float local_3bc;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  undefined4 local_398;
  float local_394;
  float local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  double local_378;
  undefined8 uStack_370;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  longlong lStack_340;
  double local_338;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  undefined4 local_23c;
  byte local_233;
  undefined4 local_210;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  longlong local_188;
  longlong lStack_180;
  undefined1 local_178;
  undefined4 local_174;
  undefined2 local_170;
  longlong local_148;
  undefined8 local_140;
  longlong local_128;
  undefined8 local_120;
  double local_110;
  double local_108;
  double local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((((1e-06 <= param_2) && (lVar17 = *param_1, *(longlong *)(lVar17 + 0x110) != 0)) &&
      (lVar21 = *(longlong *)(lVar17 + 0x4208), lVar21 != 0)) &&
     ((plVar4 = *(longlong **)(lVar21 + 0x438), plVar4 != (longlong *)0x0 &&
      (lVar16 = *(longlong *)(lVar17 + 0x4210), lVar16 != 0)))) {
    local_3d0 = lVar16 + 0x908;
    if (*(char *)(lVar21 + 0x178) == '\x01') {
      if ((((*(int *)((longlong)param_1 + 0x1c) == 0) ||
           (uVar22 = *(uint *)(param_1 + 3), (int)uVar22 < 0)) || (DAT_14c9647dc <= (int)uVar22)) ||
         (((plVar18 = (longlong *)
                      ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
           plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)((longlong)param_1 + 0x1c))) ||
          (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (lVar21 = *plVar18, lVar21 == 0)))))) {
        local_110 = (double)param_2;
        local_100 = *(double *)(lVar17 + 0x138) * local_110;
        local_108 = *(double *)(lVar17 + 0x130) * local_110;
        local_110 = local_110 * *(double *)(lVar17 + 0x128);
        if (((local_110 == 0.0) && (!NAN(local_110))) &&
           ((local_108 == 0.0 && (((!NAN(local_108) && (local_100 == 0.0)) && (!NAN(local_100)))))))
        goto LAB_1440f2ca1;
        memset(&local_2e0,0,0x100);
        local_198 = *(undefined1 (*) [16])(plVar4 + 0x48);
        local_188 = plVar4[0x4a];
        lStack_180 = plVar4[0x4b];
        pdVar19 = &local_110;
      }
      else {
        dVar29 = (double)plVar4[0x4e];
        dVar27 = (double)plVar4[0x4c];
        dVar31 = (double)plVar4[0x4d];
        FUN_1440f0f7e(param_1);
        FUN_1440f103e(param_1);
        FUN_1440a4e02(lVar21,&local_110,*(undefined4 *)((longlong)param_1 + 0x2c));
        lVar17 = *param_1;
        dVar24 = *(double *)(lVar17 + 0x128);
        dVar33 = *(double *)(lVar17 + 0x130);
        dVar2 = *(double *)(lVar17 + 0x138);
        dVar32 = local_100 * dVar2 + local_110 * dVar24 + local_108 * dVar33;
        dVar24 = SQRT(dVar2 * dVar2 + dVar24 * dVar24 + dVar33 * dVar33);
        if (dVar32 <= 0.0) {
          dVar24 = -dVar24;
        }
        *(float *)((longlong)param_1 + 0x2c) =
             param_2 * (float)dVar24 + *(float *)((longlong)param_1 + 0x2c);
        FUN_1440ef806(lVar21,(longlong)param_1 + 0x2c,0.0 < dVar32);
        FUN_1440a2790(lVar21,&local_388,*(undefined4 *)((longlong)param_1 + 0x2c));
        FUN_1440a4e02(lVar21,&local_1b0,*(undefined4 *)((longlong)param_1 + 0x2c));
        fVar23 = (float)FUN_1440efb72(param_1,plVar4);
        pfVar20 = (float *)(lVar16 + 0x96c);
        if (*(char *)(lVar21 + 0x25fa) == '\0') {
          pfVar20 = (float *)(lVar16 + 0x934);
        }
        fVar36 = *pfVar20;
        FUN_1440f1658(param_1,&local_1c8,local_3d0);
        local_1d0 = ((local_378 - (double)(fVar23 + fVar36)) + local_1b8) - dVar29;
        local_1d8 = (uStack_380 + dStack_1c0) - dVar31;
        local_1e0 = (local_388 + local_1c8) - dVar27;
        dVar29 = (double)(float)dVar24;
        lVar17 = *param_1;
        *(double *)(lVar17 + 0x128) = dVar29 * local_1b0;
        *(double *)(lVar17 + 0x130) = local_1a8 * dVar29;
        *(double *)(lVar17 + 0x138) = local_1a0 * dVar29;
        if ((((local_1e0 == 0.0) && (!NAN(local_1e0))) &&
            ((local_1d8 == 0.0 && ((!NAN(local_1d8) && (local_1d0 == 0.0)))))) && (!NAN(local_1d0)))
        goto LAB_1440f2ca1;
        memset(&local_2e0,0,0x100);
        lVar17 = *param_1;
        local_198 = *(undefined1 (*) [16])(plVar4 + 0x48);
        local_188 = plVar4[0x4a];
        lStack_180 = plVar4[0x4b];
        pdVar19 = &local_1e0;
      }
      local_408 = &local_2e0;
      local_210 = 0xffffffff;
      local_23c = 0xffffffff;
      local_2e0._4_4_ = 0x3f800000;
      local_400 = local_400 & 0xffffff00;
      FUN_1402eda10(lVar17,pdVar19,local_198,1);
    }
    else {
      cVar15 = FUN_1440f0c42(param_1);
      if ((((cVar15 == '\0') || (*(int *)((longlong)param_1 + 0x1c) == 0)) ||
          ((uVar22 = *(uint *)(param_1 + 3), (int)uVar22 < 0 ||
           (((DAT_14c9647dc <= (int)uVar22 ||
             (plVar18 = (longlong *)
                        ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
             plVar18 == (longlong *)0x0)) || ((int)plVar18[2] != *(int *)((longlong)param_1 + 0x1c))
            ))))) ||
         (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (lVar17 = *plVar18, lVar17 == 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_428);
      }
      if (1e-06 <= param_2) {
        lVar21 = lVar16 + 0x940;
        if (*(char *)(lVar17 + 0x25fa) == '\0') {
          lVar21 = local_3d0;
        }
        local_3d8 = (float *)((longlong)param_1 + 0x2c);
        do {
          lVar16 = *param_1;
          if ((*(int *)(lVar16 + 0x444) <= param_3) || (*(longlong *)(lVar16 + 0x1f0) == 0)) break;
          param_3 = param_3 + 1;
          *(byte *)(lVar16 + 0x5b4) = *(byte *)(lVar16 + 0x5b4) & 0xdf;
          fVar23 = *(float *)(*param_1 + 0x440);
          fVar36 = param_2;
          if ((fVar23 < param_2) &&
             ((param_3 < *(int *)(*param_1 + 0x444) && (fVar36 = fVar23, param_2 * 0.5 <= fVar23))))
          {
            fVar36 = param_2 * 0.5;
          }
          dVar29 = (double)plVar4[0x4e];
          dVar27 = (double)plVar4[0x4c];
          dVar31 = (double)plVar4[0x4d];
          FUN_1440f0f7e(param_1);
          FUN_1440f103e(param_1);
          FUN_1440a4e02(lVar17,&local_1b0,*(undefined4 *)((longlong)param_1 + 0x2c));
          dVar2 = local_1a0;
          dVar33 = local_1a8;
          dVar24 = local_1b0;
          lVar16 = *param_1;
          local_1b8 = *(double *)(lVar16 + 0x398);
          local_1c8 = *(double *)(lVar16 + 0x388);
          dStack_1c0 = *(double *)(lVar16 + 0x390);
          dVar32 = 1.0;
          if (*(char *)((longlong)param_1 + 0x29) == '\0') {
            dVar32 = -1.0;
          }
          fVar23 = 1e-06;
          if (1e-06 <= fVar36) {
            fVar23 = fVar36;
          }
          dVar30 = (double)*(float *)(lVar21 + 8);
          *(double *)(lVar16 + 0x388) = dVar32 * local_1b0 * dVar30;
          *(double *)(lVar16 + 0x390) = local_1a8 * dVar32 * dVar30;
          *(double *)(lVar16 + 0x398) = local_1a0 * dVar32 * dVar30;
          *(undefined4 *)(*param_1 + 0x430) = 0x3f800000;
          local_408 = (undefined8 *)CONCAT44(local_408._4_4_,*(undefined4 *)(lVar21 + 0xc));
          bVar5 = false;
          (**(code **)(*(longlong *)*param_1 + 0x6f0))
                    ((longlong *)*param_1,fVar23,*(undefined4 *)(lVar21 + 4),0);
          lVar16 = *param_1;
          *(double *)(lVar16 + 0x398) = local_1b8;
          *(double *)(lVar16 + 0x388) = local_1c8;
          *(double *)(lVar16 + 0x390) = dStack_1c0;
          lVar16 = *param_1;
          dVar30 = (*(double *)(lVar16 + 0x138) * dVar2 +
                   *(double *)(lVar16 + 0x128) * dVar24 + *(double *)(lVar16 + 0x130) * dVar33) /
                   (dVar2 * dVar2 + dVar24 * dVar24 + dVar33 * dVar33);
          dVar26 = dVar2 * dVar30;
          dVar32 = dVar33 * dVar30;
          dVar30 = dVar30 * dVar24;
          dVar25 = SQRT(dVar26 * dVar26 + dVar30 * dVar30 + dVar32 * dVar32);
          if (*(char *)((longlong)param_1 + 0x29) == '\0') {
            dVar25 = -dVar25;
          }
          fVar36 = 0.0;
          if ((bool)*(char *)((longlong)param_1 + 0x29) !=
              dVar2 * dVar26 + dVar24 * dVar30 + dVar33 * dVar32 < 0.0) {
            fVar36 = (float)dVar25;
          }
          *(float *)((longlong)param_1 + 0x2c) =
               fVar36 * fVar23 + *(float *)((longlong)param_1 + 0x2c);
          cVar15 = FUN_1440ef806(lVar17,local_3d8);
          FUN_1440a2790(lVar17,&local_1e0,*(undefined4 *)((longlong)param_1 + 0x2c));
          FUN_1440a4e02(lVar17,&local_2f8,*(undefined4 *)((longlong)param_1 + 0x2c));
          dVar24 = (double)plVar4[0x52];
          fVar1 = *(float *)(plVar4 + 200);
          fVar28 = *(float *)(lVar21 + 0x2c);
          FUN_1440f1658(param_1,&local_310,local_3d0);
          local_318 = ((local_1d0 - (double)((float)dVar24 * fVar1 + fVar28)) + local_300) - dVar29;
          local_320 = (local_1d8 + local_308) - dVar31;
          local_328 = (local_1e0 + local_310) - dVar27;
          if ((ABS(local_328) <= 9.999999747378752e-05) && (ABS(local_320) <= 9.999999747378752e-05)
             ) {
            bVar5 = ABS(local_318) <= 9.999999747378752e-05;
          }
          fVar1 = *(float *)((longlong)param_1 + 0x34);
          if (0.0 <= fVar1) {
            uVar22 = -(uint)(0.0 < *(float *)(lVar21 + 0x10));
            fVar28 = (float)(~uVar22 & 0x3f800000 |
                            (uint)(fVar1 / *(float *)(lVar21 + 0x10)) & uVar22);
            if (1.0 <= fVar28) {
              fVar28 = 1.0;
            }
            if (fVar28 <= 0.0) {
              fVar28 = 0.0;
            }
            *(uint *)((longlong)param_1 + 0x34) =
                 ~-(uint)(fVar28 < 1.0) & 0xbf800000 |
                 (uint)(fVar23 + fVar1) & -(uint)(fVar28 < 1.0);
            dVar29 = (double)FUN_140bcb07c((double)fVar28,*(undefined1 *)(lVar21 + 0x14),
                                           SUB84((double)*(float *)(lVar21 + 0x18),0));
            dVar29 = (double)(float)(dVar29 + 0.0);
            local_328 = local_328 * dVar29;
            local_320 = local_320 * dVar29;
            local_318 = dVar29 * local_318;
          }
          dVar29 = (double)fVar36;
          lVar16 = *param_1;
          *(double *)(lVar16 + 0x128) = dVar29 * local_2f8;
          *(double *)(lVar16 + 0x130) = local_2f0 * dVar29;
          *(double *)(lVar16 + 0x138) = local_2e8 * dVar29;
          cVar3 = *(char *)((longlong)param_1 + 0x29);
          if (bVar5) {
LAB_1440f22a7:
            if (cVar15 != '\0') {
LAB_1440f234d:
              FUN_1440a3d8e(lVar17,&local_110,*param_1);
              dVar31 = local_100;
              dVar27 = local_108;
              dVar29 = local_110;
              if (local_f8 != '\x01') {
                lVar16 = *param_1;
                dVar29 = (double)*(float *)(lVar21 + 0x20);
                *(double *)(lVar16 + 0x128) = *(double *)(lVar16 + 0x128) * dVar29;
                *(double *)(lVar16 + 0x130) = *(double *)(lVar16 + 0x130) * dVar29;
                *(double *)(lVar16 + 0x138) = dVar29 * *(double *)(lVar16 + 0x138);
                goto LAB_1440f2aa4;
              }
              dVar33 = (double)plVar4[0x4c];
              lStack_340 = plVar4[0x4d];
              local_3e0 = (double)plVar4[0x4d];
              dVar24 = (double)plVar4[0x4e];
              uVar34 = SUB84(local_100,0);
              uVar35 = (undefined4)((ulonglong)local_100 >> 0x20);
              local_348 = dVar33;
              local_338 = dVar24;
              fVar36 = (float)(**(code **)(*(longlong *)*param_1 + 0x478))();
              fVar36 = ABS(fVar36);
              if ((*(char *)(lVar17 + 0x25fa) == '\x01') &&
                 (lVar16 = FUN_1440a0008(lVar17), lVar16 != 0)) {
                local_350 = (double)*(float *)(lVar16 + 0x584) + dVar24;
                dVar2 = (local_350 - dVar24) * (double)(fVar36 + fVar36);
                if (dVar2 <= 0.0) {
                  dVar2 = 0.0;
                }
                dVar32 = local_350 - dVar31;
                dVar32 = (dVar32 + dVar32) / (double)fVar36;
                if (dVar32 <= 0.0) {
                  dVar32 = 0.0;
                }
                dVar32 = SQRT(dVar32) + SQRT(dVar2) / (double)fVar36;
                local_3a0 = dVar31;
                local_3b0 = DAT_14c8464e8;
                local_3a8 = DAT_14c8464f0;
                local_3b8 = DAT_14c8464e0;
                if (1e-08 < ABS(dVar32)) {
                  dVar32 = 1.0 / dVar32;
                  local_3b0 = (dVar27 - local_3e0) * dVar32;
                  local_3a8 = SQRT(dVar2);
                  local_3b8 = dVar32 * (dVar29 - dVar33);
                }
                local_358 = local_3b0 * 0.0 + local_3e0;
                local_360 = local_3b8 * 0.0 + dVar33;
                dVar31 = (double)plVar4[0x50];
                if ((double)plVar4[0x51] <= (double)plVar4[0x50]) {
                  dVar31 = (double)plVar4[0x51];
                }
                local_3c0 = (float)dVar31;
                fVar1 = *(float *)((longlong)plVar4 + 0x644);
                local_3c4 = (float)(double)plVar4[0x52];
                local_3bc = *(float *)(plVar4 + 200);
                local_174 = 0;
                local_170 = 0x101;
                local_148 = 0;
                local_140 = 0x800000000;
                local_128 = 0;
                local_120 = 0x400000000;
                uVar14 = (ulonglong)lStack_180 >> 8;
                local_198 = ZEXT416(0);
                local_178 = 0;
                local_188 = 0x100000000000100;
                lStack_180 = CONCAT71((uint7)uVar14 & 0xffffff,1);
                local_378 = _DAT_14cad0ee0;
                uStack_370 = uRam000000014cad0ee8;
                local_388 = _DAT_14cad0ed0;
                uStack_380 = _DAT_14cad0ed8;
                lVar16 = 0;
                do {
                  bVar5 = *(char *)((longlong)&local_388 + lVar16) == '\x02';
                  bVar6 = *(char *)((longlong)&local_388 + lVar16 + 1) == '\x02';
                  bVar7 = *(char *)((longlong)&local_388 + lVar16 + 2) == '\x02';
                  bVar8 = *(char *)((longlong)&local_388 + lVar16 + 3) == '\x02';
                  bVar9 = *(char *)((longlong)&local_388 + lVar16 + 4) == '\x02';
                  bVar10 = *(char *)((longlong)&local_388 + lVar16 + 5) == '\x02';
                  bVar11 = *(char *)((longlong)&local_388 + lVar16 + 6) == '\x02';
                  bVar12 = *(char *)((longlong)&local_388 + lVar16 + 7) == '\x02';
                  if ((bool)(~bVar5 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16) = 2;
                  }
                  if ((bool)(~bVar6 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16 + 1) = 2;
                  }
                  if ((bool)(~bVar7 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16 + 2) = 2;
                  }
                  if ((bool)(~bVar8 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16 + 3) = 2;
                  }
                  if ((bool)(~bVar9 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16 + 4) = 2;
                  }
                  if ((bool)(~bVar10 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16 + 5) = 2;
                  }
                  if ((bool)(~bVar11 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16 + 6) = 2;
                  }
                  if ((bool)(~bVar12 & 1)) {
                    *(undefined1 *)((longlong)&local_388 + lVar16 + 7) = 2;
                  }
                  if ((bool)(~bVar5 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16) = 2;
                  }
                  if ((bool)(~bVar6 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16 + 1) = 2;
                  }
                  if ((bool)(~bVar7 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16 + 2) = 2;
                  }
                  if ((bool)(~bVar8 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16 + 3) = 2;
                  }
                  if ((bool)(~bVar9 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16 + 4) = 2;
                  }
                  if ((bool)(~bVar10 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16 + 5) = 2;
                  }
                  if ((bool)(~bVar11 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16 + 6) = 2;
                  }
                  if ((bool)(~bVar12 & 1)) {
                    *(undefined1 *)((longlong)&uStack_380 + lVar16 + 7) = 2;
                  }
                  lVar16 = lVar16 + 0x10;
                } while (lVar16 != 0x20);
                (**(code **)(*(longlong *)*param_1 + 0x4d8))
                          ((longlong *)*param_1,local_198,&local_388);
                memset(&local_2e0,0,0x100);
                local_210 = 0xffffffff;
                local_2e0._4_4_ = 0x3f800000;
                local_23c = 0xffffffff;
                if ((*param_1 == 0) ||
                   ((lVar16 = *(longlong *)(*param_1 + 0xb0), lVar16 == 0 &&
                    (lVar16 = FUN_1448abda6(), lVar16 == 0)))) {
LAB_1440f28ea:
                  if (local_128 != 0) {
                    FUN_1400020a8();
                  }
                  uVar34 = SUB84(local_3a0,0);
                  uVar35 = (undefined4)((ulonglong)local_3a0 >> 0x20);
                  if (local_148 != 0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1440f2918;
                }
                local_394 = fVar1 * local_3c0;
                local_390 = local_3bc * local_3c4;
                local_398 = 3;
                local_400 = (**(code **)(*plVar4 + 0x580))(plVar4);
                local_3e8 = &local_388;
                local_3f0 = local_198;
                local_3f8 = &local_398;
                local_408 = &DAT_14c8463d0;
                FUN_14021655c(lVar16,&local_2e0,&local_348);
                if ((local_233 & 3) == 1) goto LAB_1440f28ea;
                lVar16 = *param_1;
                *(double *)(lVar16 + 0x128) = local_3b8;
                *(double *)(lVar16 + 0x130) = local_3b0;
                *(double *)(lVar16 + 0x138) = local_3a8;
                if (local_128 != 0) {
                  FUN_1400020a8();
                }
                if (local_148 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
LAB_1440f2918:
                dVar31 = ((dVar24 + 0.0) - dVar24) * (double)(fVar36 + fVar36);
                if (dVar31 <= 0.0) {
                  dVar31 = 0.0;
                }
                dVar24 = (dVar24 + 0.0) - (double)CONCAT44(uVar35,uVar34);
                dVar24 = (dVar24 + dVar24) / (double)fVar36;
                if (dVar24 <= 0.0) {
                  dVar24 = 0.0;
                }
                dVar24 = SQRT(dVar24) + SQRT(dVar31) / (double)fVar36;
                dVar32 = DAT_14c8464e0;
                dVar2 = DAT_14c8464e8;
                dVar30 = DAT_14c8464f0;
                if (1e-08 < ABS(dVar24)) {
                  dVar24 = 1.0 / dVar24;
                  dVar32 = dVar24 * (dVar29 - dVar33);
                  dVar2 = (dVar27 - local_3e0) * dVar24;
                  dVar30 = SQRT(dVar31);
                }
                lVar16 = *param_1;
                *(double *)(lVar16 + 0x128) = dVar32;
                *(double *)(lVar16 + 0x130) = dVar2;
                *(double *)(lVar16 + 0x138) = dVar30;
              }
              if (0.0001 <= *(float *)(lVar21 + 0x28)) {
                dVar24 = (double)*(float *)(lVar21 + 0x28);
                lVar16 = *param_1;
                dVar29 = *(double *)(lVar16 + 0x128);
                dVar27 = *(double *)(lVar16 + 0x130);
                dVar31 = *(double *)(lVar16 + 0x138);
                dVar33 = dVar31 * dVar31 + dVar29 * dVar29 + dVar27 * dVar27;
                if (dVar24 * dVar24 < dVar33) {
                  dVar24 = (1.0 / SQRT(dVar33)) * dVar24;
                  dVar31 = dVar31 * dVar24;
                  dVar27 = dVar27 * dVar24;
                  dVar29 = dVar29 * dVar24;
                }
              }
              else {
                lVar16 = *param_1;
                dVar27 = DAT_14c8464e8;
                dVar31 = DAT_14c8464f0;
                dVar29 = DAT_14c8464e0;
              }
              *(double *)(lVar16 + 0x128) = dVar29;
              *(double *)(lVar16 + 0x130) = dVar27;
              *(double *)(lVar16 + 0x138) = dVar31;
              goto LAB_1440f2aa4;
            }
          }
          else {
            memset(&local_2e0,0,0x100);
            local_210 = 0xffffffff;
            local_23c = 0xffffffff;
            local_2e0._4_4_ = 0x3f800000;
            local_198 = *(undefined1 (*) [16])(plVar4 + 0x48);
            local_188 = plVar4[0x4a];
            lStack_180 = plVar4[0x4b];
            local_400 = local_400 & 0xffffff00;
            local_408 = &local_2e0;
            FUN_1402eda10(*param_1,&local_328,local_198);
            if ((local_233 & 1) == 0) goto LAB_1440f22a7;
            auVar13._12_4_ = 0;
            auVar13._0_12_ = local_198._4_12_;
            local_198 = auVar13 << 0x20;
            lVar16 = *(longlong *)(lVar17 + 0x2668);
            uVar34 = 0;
            if ((lVar16 != 0) && (0 < (longlong)*(int *)(lVar16 + 0x670))) {
              uVar34 = *(undefined4 *)
                        (*(longlong *)(lVar16 + 0x668) + -0x14 +
                        (longlong)*(int *)(lVar16 + 0x670) * 0x14);
            }
            local_110 = (double)CONCAT44(local_110._4_4_,uVar34);
            FUN_1440a4b86(lVar17,local_198,&local_110);
            if (cVar3 == '\0') {
              fVar36 = *local_3d8 - (float)local_198._0_4_;
            }
            else {
              fVar36 = local_110._0_4_ - *local_3d8;
            }
            if (cVar15 != '\0' || fVar36 <= *(float *)(lVar21 + 0x24)) goto LAB_1440f234d;
LAB_1440f2aa4:
            FUN_1409df526(*param_1,&DAT_14cbc6238);
          }
          param_2 = param_2 - fVar23;
          plVar18 = (longlong *)*param_1;
          if ((char)plVar18[0x220] != '\r') {
            (**(code **)(*plVar18 + 0x668))(plVar18,param_2,param_3);
          }
        } while (1e-06 <= param_2);
      }
    }
  }
LAB_1440f2ca1:
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f2d28 FUN_1440f2d28 body=80 status=ok
// SIG undefined FUN_1440f2d28(void)

void FUN_1440f2d28(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0x4510,&local_10);
  }
  else {
    FUN_1400bc96c();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440f2d86 FUN_1440f2d86 body=291 status=ok
// SIG undefined FUN_1440f2d86(void)

void FUN_1440f2d86(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != 0) && (lVar3 = FUN_148d02e18(param_3), lVar3 != 0)) {
    FUN_148cfdfb0(lVar3,param_1);
    if ((longlong)*(int *)(param_1 + 0x288) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x280);
      lVar6 = (longlong)*(int *)(param_1 + 0x288) << 3;
      do {
        cVar1 = FUN_148d0a624(lVar4,lVar3);
        if (cVar1 != '\0') {
          local_2c = 0;
          local_30 = *(uint *)(lVar3 + 0xc);
          if ((int)local_30 < DAT_14c9647dc) {
            lVar3 = (ulonglong)((local_30 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
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
            bVar7 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar7) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar2 = *(int *)(lVar3 + 0x10);
            bVar7 = iVar2 == 0;
            if (bVar7) {
              *(int *)(lVar3 + 0x10) = iVar5;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar7) {
              iVar2 = iVar5;
            }
          }
          local_2c = iVar2;
          FUN_148d02e80(param_1 + 0x280);
          break;
        }
        lVar4 = lVar4 + 8;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f2eaa FUN_1440f2eaa body=190 status=ok
// SIG undefined FUN_1440f2eaa(void)

void FUN_1440f2eaa(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
    if ((DAT_14c761388 != 0) &&
       ((lVar2 = param_1[0x16], lVar2 != 0 || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)))) {
      uVar1 = FUN_14119d0a4(lVar2);
      FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f2f6c FUN_1440f2f6c body=47 status=ok
// SIG undefined FUN_1440f2f6c(void)

void FUN_1440f2f6c(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1440f2f9c FUN_1440f2f9c body=106 status=ok
// SIG undefined FUN_1440f2f9c(void)

void FUN_1440f2f9c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((plVar3 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar3);
LAB_1440f2fd2:
        if ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar3 + 0x2d8))(plVar3);
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_1440f2fd2;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1440f3006 FUN_1440f3006 body=180 status=ok
// SIG undefined FUN_1440f3006(void)

void FUN_1440f3006(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar3);
LAB_1440f3041:
        if ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar3 + 0x2e0))(plVar3);
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_1440f3041;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = FUN_145999744();
    lVar2 = *(longlong *)(param_1 + 0x28);
    if ((((lVar2 != 0) && (lVar5 != 0)) && (lVar4 = *(longlong *)(lVar2 + 0x10), lVar4 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + 1;
    }
  }
  return;
}



// FUNCTION 1440f30ba FUN_1440f30ba body=1386 status=ok
// SIG undefined FUN_1440f30ba(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1440f30ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  void *_Dst;
  uint uVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_b8 [40];
  char local_90;
  undefined7 uStack_8f;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined8 *******local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar14 = *(longlong *)(param_1 + 0x48) + 0x80;
  cVar5 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar14);
  if (cVar5 != '\0') {
    lVar17 = *(longlong *)(param_1 + 0x40);
    if (lVar17 == 0) {
      lVar11 = 0;
      local_88 = 0;
LAB_1440f3530:
      local_80 = (longlong *)0x0;
      bVar19 = true;
    }
    else {
      if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_1440f33c4:
        lVar11 = 0;
      }
      else {
        uVar8 = *(uint *)(lVar17 + 0x48);
        lVar11 = 0;
        if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
          plVar15 = (longlong *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
          if ((plVar15 == (longlong *)0x0) ||
             (((int)plVar15[2] != *(int *)(lVar17 + 0x4c) ||
              ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_1440f33c4;
          lVar11 = *plVar15;
        }
      }
      plVar15 = *(longlong **)(lVar17 + 0x118);
      local_88 = param_1;
      if (plVar15 == (longlong *)0x0) goto LAB_1440f3530;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar19 = false;
      local_80 = plVar15;
    }
    plVar15 = local_80;
    local_68 = 0;
    local_90 = '\x03';
    local_78._0_4_ = 0;
    if (lVar11 == 0) {
      iVar6 = 0;
      uVar8 = (uint)local_78;
    }
    else {
      uVar8 = *(uint *)(lVar11 + 0xc);
      local_78 = (ulonglong)uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar6 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar6 = *(int *)(lVar17 + 0x10);
        bVar18 = iVar6 == 0;
        if (bVar18) {
          *(int *)(lVar17 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        uVar8 = (uint)local_78;
        if (bVar18) {
          iVar6 = iVar13;
        }
      }
    }
    local_78._0_4_ = uVar8;
    local_78 = CONCAT44(iVar6,(uint)local_78);
    local_70 = 2;
    if (local_68 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
      local_68 = 0;
    }
    if (!bVar19) {
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    FUN_1447c3578(lVar14,local_60,&local_90);
    lVar14 = FUN_14030a32e(local_60);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppppppuVar10 = local_60;
      if (0x18 < local_48) {
        pppppppuVar10 = local_60[0];
      }
      (*pcVar3)(pppppppuVar10);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    lVar17 = DAT_14c9a3da0;
    if ((longlong)local_68 != 0) {
      lVar11 = (longlong)local_68 + -1;
      lVar16 = lVar11 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
      if (*(longlong *)(lVar17 + lVar16) != 0) {
        FUN_1400020a8();
      }
      lVar17 = DAT_14c9a3da0;
      iVar6 = (int)lVar11;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
      }
      *(undefined4 *)(lVar17 + lVar16) = 0xffffffff;
      iVar13 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar13 = DAT_14c9a3dd0;
      }
      *(int *)(lVar17 + 4 + lVar16) = iVar13;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar9 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar9 = DAT_14c9a3dc0;
      }
      iVar13 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar13 = iVar6;
      }
      bVar4 = (byte)lVar11 & 0x1f;
      DAT_14c9a3dd0 = iVar6;
      *(uint *)(puVar9 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_68 = 0;
    }
    if ((local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (lVar14 == 0) {
      FUN_1400b22c2(&local_90,"Settings.StageActor");
      _Dst = (void *)CONCAT71(uStack_8f,local_90);
      if ((longlong)(int)local_88 != 0) {
        uVar8 = 1;
        lVar14 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar14) == 0x2e) {
            if (uVar8 != 0) {
              uVar12 = (int)local_88 - 1;
              if ((int)local_88 == 0) {
                uVar12 = 0;
              }
              if ((int)uVar8 < (int)uVar12) {
                uVar12 = uVar8;
              }
              if (0 < (int)uVar12) {
                if ((int)local_88 - uVar12 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar12 * 2),
                          (longlong)(int)((int)local_88 - uVar12) * 2);
                }
                local_88 = CONCAT44(local_88._4_4_,(int)local_88 - uVar12);
                FUN_1449649ae(&local_90);
                _Dst = (void *)CONCAT71(uStack_8f,local_90);
              }
            }
            break;
          }
          uVar8 = uVar8 + 1;
          lVar14 = lVar14 + 2;
        } while ((longlong)(int)local_88 * 2 != lVar14);
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar7 = 0;
      goto LAB_1440f339a;
    }
    lVar17 = FUN_1459f3116();
    if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8
         ) == lVar17 + 0x30)) {
      uVar8 = *(uint *)(lVar14 + 0xc);
      *(uint *)(param_1 + 0x70) = uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar6 = *(int *)(lVar14 + 0x10);
        bVar19 = iVar6 == 0;
        if (bVar19) {
          *(int *)(lVar14 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar6 = iVar13;
        }
        *(int *)(param_1 + 0x74) = iVar6;
        uVar7 = 1;
        if (iVar6 == 0) goto LAB_1440f339a;
      }
      else {
        *(int *)(param_1 + 0x74) = *(int *)(lVar14 + 0x10);
      }
      uVar7 = 1;
      goto LAB_1440f339a;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar7 = 1;
LAB_1440f339a:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1440f3626 FUN_1440f3626 body=382 status=ok
// SIG undefined FUN_1440f3626(void)

void FUN_1440f3626(longlong *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  byte local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1447210f0();
  if (lVar4 != 0) {
    FUN_1447210f0(param_1);
  }
  if ((char)param_1[0x2f] == '\x03') {
    if (param_2 < 0) {
      bVar2 = false;
      iVar3 = -1;
    }
    else {
      bVar2 = param_2 < (int)param_1[0x9a];
      iVar3 = -1;
      if (param_2 < (int)param_1[0x9a]) {
        iVar3 = param_2;
      }
    }
    *(int *)(param_1 + 0x9e) = iVar3;
    lVar4 = FUN_1447210f0(param_1);
    if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
      lVar9 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar9 * 8);
        if ((((iVar3 != 0) &&
             (uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar9 * 8), -1 < (int)uVar1)) &&
            ((int)uVar1 < DAT_14c9647dc)) &&
           (((plVar6 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar3)) &&
            (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
             (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))))) {
          if (bVar2) {
            local_48 = 0;
            local_44 = 1;
            local_40 = 0x40000000;
            local_3c = local_3c & 0xfe;
            lVar5 = *plVar6;
            plVar7 = param_1;
            puVar8 = &local_48;
          }
          else {
            local_58 = 0;
            local_54 = 1;
            local_50 = 0x40000000;
            local_4c = local_4c & 0xfe;
            lVar5 = *plVar6;
            plVar7 = plVar6;
            puVar8 = &local_58;
          }
          (**(code **)(lVar5 + 0xe38))(plVar6,plVar7,puVar8);
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar4 + 0x238));
    }
    FUN_148d04170(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f37a6 FUN_1440f37a6 body=621 status=ok
// SIG undefined FUN_1440f37a6(void)

ulonglong FUN_1440f37a6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    plVar6 = (longlong *)*param_2;
    plVar7 = plVar6 + (longlong)(int)param_2[1] * 9;
    do {
      if (0 < (longlong)*(int *)(param_1 + 0x4e0)) {
        uVar3 = *(ulonglong *)(param_1 + 0x4d8);
        lVar8 = 0;
        uVar4 = 0;
        do {
          if ((*(longlong *)(uVar3 + lVar8) == *plVar6) &&
             (*(char *)(uVar3 + 0xb0 + lVar8) == '\x01')) {
            if ((((*(int *)((longlong)plVar6 + 0x44) != 0) &&
                 (((uVar1 = *(uint *)(plVar6 + 8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))
                  && (plVar5 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar5 != (longlong *)0x0)))) &&
                ((((int)plVar5[2] == *(int *)((longlong)plVar6 + 0x44) && (uVar3 != uVar4)) &&
                 ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
               ((uVar1 = *(uint *)(plVar5 + 1), uVar4 = (ulonglong)uVar1, (uVar1 & 0x10200000) == 0
                && (lVar8 = *plVar5, lVar8 != 0)))) {
              if (DAT_14cb5b388 == 0) {
                local_50 = FUN_141864c34;
                local_60 = FUN_14081d0ea;
                local_68 = &LAB_146431698;
                local_70 = &local_50;
                local_78 = &LAB_1486775cb;
                local_80 = &LAB_1464cee35;
                local_88 = &DAT_149e063b2;
                local_90 = 0;
                local_98 = 0x10000005;
                local_a0 = 0x10;
                local_a8 = 0x3a20;
                FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
              }
              uVar4 = DAT_14cb5b388;
              if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38))
                 && (uVar4 = DAT_14cb5b388 + 0x30,
                    *(ulonglong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == uVar4)) {
                uVar4 = FUN_148d034c2(param_1,lVar8);
              }
            }
            goto LAB_1440f3892;
          }
          uVar4 = uVar4 - 0xc0;
          lVar8 = lVar8 + 0xc0;
        } while ((longlong)*(int *)(param_1 + 0x4e0) * 0xc0 + uVar4 != 0);
      }
      uVar1 = *(uint *)((longlong)plVar6 + 0x44);
      uVar4 = (ulonglong)uVar1;
      if ((((uVar1 != 0) && (uVar2 = *(uint *)(plVar6 + 8), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         ((lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 != 0 &&
          (*(uint *)(lVar8 + 0x10) == uVar1)))) {
        uVar4 = (ulonglong)*(uint *)(lVar8 + 8);
      }
LAB_1440f3892:
      plVar6 = plVar6 + 9;
    } while (plVar6 != plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1440f3a14 FUN_1440f3a14 body=763 status=ok
// SIG undefined FUN_1440f3a14(void)

void FUN_1440f3a14(longlong *param_1,code *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = param_2;
  uVar5 = FUN_14477b072(param_1,DAT_14cac9a08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_40);
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 != 0) {
    FUN_1447210f0(param_1);
  }
  if ((param_2 != (code *)0x0) && (lVar6 = *(longlong *)(param_2 + 0x430), lVar6 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_40 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar6 = *(longlong *)(param_2 + 0x430);
      if (lVar6 == 0) goto LAB_1440f3b29;
    }
    if ((((DAT_14cae9568 != 0) && (lVar9 = *(longlong *)(lVar6 + 0x10), lVar9 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      uVar2 = *(uint *)(param_2 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar4 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar8;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar8;
        }
      }
      local_40 = (code *)CONCAT44(uVar4,uVar2);
      iVar3 = FUN_148d0b9ae(param_1 + 0xa9,uVar2 ^ uVar4);
      if (iVar3 == -1) {
        uVar1 = *(undefined1 *)(lVar6 + 0xb8);
        uVar2 = *(uint *)(param_2 + 0xc);
        local_40 = (code *)(ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar4 = *(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar8);
          }
          LOCK();
          uVar4 = *(uint *)(lVar9 + 0x10);
          bVar10 = uVar4 == 0;
          if (bVar10) {
            *(uint *)(lVar9 + 0x10) = uVar8;
            uVar4 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_40;
          if (bVar10) {
            uVar4 = uVar8;
          }
        }
        local_40._0_4_ = uVar2;
        local_40 = (code *)CONCAT44(uVar4,(uint)local_40);
        puVar7 = (undefined1 *)FUN_148d0ba68(param_1 + 0xa9,uVar4 ^ (uint)local_40);
        *puVar7 = uVar1;
        *(undefined1 *)(lVar6 + 0xb8) = 1;
      }
    }
  }
LAB_1440f3b29:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f3d10 FUN_1440f3d10 body=947 status=ok
// SIG undefined FUN_1440f3d10(void)

void FUN_1440f3d10(longlong *param_1,code *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
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
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_1447210f0();
  if (lVar5 != 0) {
    FUN_1447210f0(param_1);
  }
  if ((param_2 != (code *)0x0) && (lVar5 = *(longlong *)(param_2 + 0x430), lVar5 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar5 = *(longlong *)(param_2 + 0x430);
      if (lVar5 == 0) goto LAB_1440f3e01;
    }
    if ((((DAT_14cae9568 != 0) && (lVar9 = *(longlong *)(lVar5 + 0x10), lVar9 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      uVar2 = *(uint *)(param_2 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      plVar1 = param_1 + 0xa9;
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar4 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar7;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar7;
        }
      }
      local_48 = (code *)CONCAT44(uVar4,uVar2);
      iVar3 = FUN_148d0b9ae(plVar1,uVar2 ^ uVar4);
      if (iVar3 != -1) {
        uVar2 = *(uint *)(param_2 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar4 = *(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          uVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar7);
          }
          LOCK();
          uVar4 = *(uint *)(lVar9 + 0x10);
          bVar10 = uVar4 == 0;
          if (bVar10) {
            *(uint *)(lVar9 + 0x10) = uVar7;
            uVar4 = 0;
          }
          UNLOCK();
          if (bVar10) {
            uVar4 = uVar7;
          }
        }
        local_48 = (code *)CONCAT44(uVar4,uVar2);
        iVar3 = FUN_148d0b9ae(plVar1,uVar2 ^ uVar4);
        if (iVar3 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar3 * 0x14 + *plVar1;
        }
        *(undefined1 *)(lVar5 + 0xb8) = *(undefined1 *)(lVar9 + 8);
        uVar2 = *(uint *)(param_2 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar3 = *(int *)(lVar5 + 0x10);
          bVar10 = iVar3 == 0;
          if (bVar10) {
            *(int *)(lVar5 + 0x10) = iVar8;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar3 = iVar8;
          }
        }
        FUN_148d0c05a(plVar1,CONCAT44(iVar3,uVar2));
      }
    }
  }
LAB_1440f3e01:
  local_48 = param_2;
  uVar6 = FUN_14477b072(param_1,DAT_14cac9a18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_48);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f40c4 FUN_1440f40c4 body=1173 status=ok
// SIG undefined FUN_1440f40c4(void)

void FUN_1440f40c4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = param_1 + -0x390;
  lVar4 = FUN_1447210f0(lVar7);
  if (lVar4 != 0) {
    FUN_1447210f0(lVar7);
  }
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
LAB_1440f4111:
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_140355e94(param_1 + 0x208);
  }
  else {
    lVar4 = (**(code **)(*param_2 + 8))(param_2);
    lVar12 = FUN_1465d2598();
    if (((lVar12 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar12 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
        lVar12 + 0x30)) goto LAB_1440f4111;
    *(longlong **)(param_1 + 0x28) = param_2;
    FUN_148d0453a(param_2,&local_60);
    FUN_14078b280(param_1 + 0x208,lVar7,&local_60);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar6 = (longlong *)(param_1 + 0x28);
  lVar4 = FUN_1447210f0(lVar7);
  if (lVar4 != 0) {
    lVar4 = FUN_1447210f0(lVar7);
    if ((*(char *)(lVar4 + 0x152) == '\x02') || (*(char *)(lVar4 + 0x152) == '\x04'))
    goto LAB_1440f414f;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = lVar7;
  local_80 = plVar6;
  FUN_148d09a88(lVar7);
  if ((0 < *(int *)(param_1 + 0x140)) && (*(int *)(param_1 + 0x140) == (int)uStack_70)) {
    lVar7 = 0;
    do {
      if (0 < (int)uStack_70) {
        uVar11 = 0xffffffff;
        uVar9 = 0;
        iVar3 = (int)uStack_70;
        do {
          lVar4 = *(longlong *)(local_78 + uVar9 * 8);
          if (lVar4 != 0) {
            local_50 = *(undefined8 *)(lVar4 + 0x18);
            FUN_1400021e4(&local_50,&local_60);
            puVar5 = &DAT_149dfb77a;
            if (local_58 != 0) {
              puVar5 = local_60;
            }
            cVar2 = FUN_1402ca022(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + lVar7 * 0x80),
                                  puVar5);
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (cVar2 != '\0') {
              uVar11 = uVar9 & 0xffffffff;
            }
            iVar3 = (int)uStack_70;
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)iVar3);
        if ((-1 < (int)uVar11) && ((int)uVar11 < iVar3)) {
          lVar12 = *(longlong *)(local_78 + uVar11 * 8);
          lVar4 = *(longlong *)(param_1 + 0x138) + lVar7 * 0x80;
          puVar10 = (uint *)(lVar4 + 0x70);
          if (lVar12 == 0) {
            *puVar10 = 0;
            iVar3 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar12 + 0xc);
            *puVar10 = uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar3 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar3 = *(int *)(lVar12 + 0x10);
              bVar13 = iVar3 == 0;
              if (bVar13) {
                *(int *)(lVar12 + 0x10) = iVar8;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar3 = iVar8;
              }
            }
          }
          *(int *)(lVar4 + 0x74) = iVar3;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x140));
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_148d09f94(local_88);
  if ((0 < *(int *)(param_1 + 0x150)) && (*(int *)(param_1 + 0x150) == (int)uStack_70)) {
    lVar7 = 0;
    do {
      if (0 < (int)uStack_70) {
        uVar11 = 0xffffffff;
        uVar9 = 0;
        iVar3 = (int)uStack_70;
        do {
          lVar4 = *(longlong *)(local_78 + uVar9 * 8);
          if (lVar4 != 0) {
            local_50 = *(undefined8 *)(lVar4 + 0x18);
            FUN_1400021e4(&local_50,&local_60);
            puVar5 = &DAT_149dfb77a;
            if (local_58 != 0) {
              puVar5 = local_60;
            }
            cVar2 = FUN_1402ca022(*(undefined8 *)(*(longlong *)(param_1 + 0x148) + lVar7 * 0xc0),
                                  puVar5);
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (cVar2 != '\0') {
              uVar11 = uVar9 & 0xffffffff;
            }
            iVar3 = (int)uStack_70;
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)iVar3);
        if ((-1 < (int)uVar11) && ((int)uVar11 < iVar3)) {
          lVar12 = *(longlong *)(local_78 + uVar11 * 8);
          lVar4 = *(longlong *)(param_1 + 0x148) + lVar7 * 0xc0;
          puVar10 = (uint *)(lVar4 + 0xb8);
          if (lVar12 == 0) {
            *puVar10 = 0;
            iVar3 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar12 + 0xc);
            *puVar10 = uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar3 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar3 = *(int *)(lVar12 + 0x10);
              bVar13 = iVar3 == 0;
              if (bVar13) {
                *(int *)(lVar12 + 0x10) = iVar8;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar3 = iVar8;
              }
            }
          }
          *(int *)(lVar4 + 0xbc) = iVar3;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x150));
  }
  plVar6 = local_80;
  lVar7 = local_88;
  if (local_78 != 0) {
    FUN_1400020a8();
    plVar6 = local_80;
    lVar7 = local_88;
  }
LAB_1440f414f:
  if (*plVar6 != 0) {
    FUN_1407bebdc(param_1 + 0x2f8,param_1 + 8,lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f457b FUN_1440f457b body=41 status=ok
// SIG undefined FUN_1440f457b(void)

void FUN_1440f457b(void)

{
  DAT_14cbc6358 = 0;
  if (DAT_14cbc6350 != 0) {
    FUN_1400020a8();
  }
  FUN_145d68fda();
  return;
}



// FUNCTION 1440f45a9 FUN_1440f45a9 body=41 status=ok
// SIG undefined FUN_1440f45a9(void)

void FUN_1440f45a9(void)

{
  DAT_14cbc6450 = 0;
  if (DAT_14cbc6448 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69078();
  return;
}



// FUNCTION 1440f464a FUN_1440f464a body=750 status=ok
// SIG undefined FUN_1440f464a(void)

void FUN_1440f464a(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
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
  lVar9 = param_1[0x101];
  if ((lVar9 != 0) && (lVar2 = param_1[0x108], lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x124) = *(undefined8 *)(lVar9 + 0x150);
    uVar6 = *(undefined8 *)(lVar9 + 0x148);
    *(undefined8 *)(lVar2 + 0x114) = *(undefined8 *)(lVar9 + 0x140);
    *(undefined8 *)(lVar2 + 0x11c) = uVar6;
    lVar9 = param_1[0x101];
    lVar2 = param_1[0x108];
    *(undefined4 *)(lVar2 + 0x13c) = *(undefined4 *)(lVar9 + 0x168);
    uVar3 = *(undefined4 *)(lVar9 + 0x15c);
    uVar4 = *(undefined4 *)(lVar9 + 0x160);
    uVar5 = *(undefined4 *)(lVar9 + 0x164);
    *(undefined4 *)(lVar2 + 300) = *(undefined4 *)(lVar9 + 0x158);
    *(undefined4 *)(lVar2 + 0x130) = uVar3;
    *(undefined4 *)(lVar2 + 0x134) = uVar4;
    *(undefined4 *)(lVar2 + 0x138) = uVar5;
    if (*(char *)(param_1[0x101] + 0x168) == '\x01') {
      *(undefined1 *)(param_1[0x108] + 0x13c) = 0;
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x5f0))(param_1);
      if (plVar7 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_147f29feb;
          local_50 = FUN_1464384fe;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb223d8);
        if (plVar7 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_40 = &local_20;
            local_20 = FUN_1449e2820;
            local_30 = FUN_14081d0ea;
            local_38 = FUN_1427b09ee;
            local_48 = &LAB_147f29feb;
            local_50 = FUN_1464384fe;
            local_58 = L"Engine";
            local_60 = 0;
            local_68 = 0x10004001;
            local_70 = 8;
            local_78 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb223d8);
          if ((((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) &&
              (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 != 0)) &&
             ((((*(char *)(lVar9 + 0x50) == '\x01' &&
                (lVar2 = *(longlong *)(lVar9 + 0x20), lVar2 != 0)) &&
               ((*(short *)(lVar9 + 0x28) < 0 || (*(longlong *)(lVar9 + 0x30) != 0)))) &&
              (*(char *)(lVar2 + 0x88) == '\x01')))) {
            uVar1 = *(undefined1 *)(lVar2 + 0x89);
            *(undefined1 *)(param_1[0x108] + 0x13c) = 1;
            *(undefined1 *)(param_1[0x108] + 0x13d) = uVar1;
          }
        }
      }
    }
    FUN_1402d1dc0(param_1[0x101] + 0x170);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f494e FUN_1440f494e body=2627 status=ok
// SIG undefined FUN_1440f494e(void)

void FUN_1440f494e(longlong param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  byte bVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double _Y;
  double _Y_00;
  double _X;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined8 *local_2b0;
  undefined1 *local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  code *local_290;
  undefined1 *local_288;
  undefined8 *local_280;
  code *local_278;
  code *local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  double dStack_250;
  double local_248;
  undefined4 local_1c4;
  undefined4 local_198;
  double local_168;
  double dStack_160;
  double local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((*(longlong *)(param_1 + 0x808) == 0) ||
     (lVar16 = *(longlong *)(param_1 + 0x168), lVar16 == 0)) goto LAB_1440f5093;
  FUN_14030a482(*(longlong *)(param_1 + 0x808) + 0x98,&local_268,lVar16,0);
  pdVar1 = (double *)(param_1 + 0x810);
  *(double *)(param_1 + 0x820) = local_258;
  *(undefined4 *)(param_1 + 0x810) = (undefined4)local_268;
  *(undefined4 *)(param_1 + 0x814) = local_268._4_4_;
  *(undefined4 *)(param_1 + 0x818) = uStack_260;
  *(undefined4 *)(param_1 + 0x81c) = uStack_25c;
  FUN_140d0fb16(*(longlong *)(param_1 + 0x808) + 0xf8,&local_268,lVar16,0);
  puVar2 = (undefined4 *)(param_1 + 0x828);
  *(double *)(param_1 + 0x838) = local_258;
  *(undefined4 *)(param_1 + 0x828) = (undefined4)local_268;
  *(undefined4 *)(param_1 + 0x82c) = local_268._4_4_;
  *(undefined4 *)(param_1 + 0x830) = uStack_260;
  *(undefined4 *)(param_1 + 0x834) = uStack_25c;
  if (*(char *)(*(longlong *)(param_1 + 0x808) + 0x129) == '\x01') {
    if (DAT_14cb939a8 == 0) {
      local_268 = FUN_140940982;
      local_270 = FUN_14081d0ea;
      local_278 = (code *)&LAB_146522c26;
      local_288 = &LAB_148a0db91;
      local_290 = (code *)&LAB_146572ba7;
      local_298 = L"Engine";
      local_2a0 = 0;
      local_2a8 = (undefined1 *)CONCAT44(local_2a8._4_4_,0x10000004);
      local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,8);
      local_2b8 = 0xdd8;
      local_280 = &local_268;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30)) {
      if (DAT_14cb94538 == 0) {
        local_268 = FUN_1449e2820;
        local_270 = FUN_14081d0ea;
        local_278 = FUN_1427b09ee;
        local_288 = &LAB_148a18249;
        local_290 = FUN_14657713c;
        local_298 = L"Engine";
        local_2a0 = 0;
        local_2a8 = (undefined1 *)CONCAT44(local_2a8._4_4_,0x10004001);
        local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,8);
        local_2b8 = 0x28;
        local_280 = &local_268;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar15 = (longlong *)FUN_144718840(lVar16,DAT_14cb94538);
      if ((plVar15 == (longlong *)0x0) ||
         (lVar16 = (**(code **)(*plVar15 + 0x10))(plVar15), *(int *)(lVar16 + 0xa8) < 1))
      goto LAB_1440f4b8b;
      lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0xa0) + 0x20);
      if ((DAT_14c950c29 == '\x01') && (lVar16 != 0)) {
        FUN_1456cec3c(lVar16);
      }
      else if (lVar16 == 0) goto LAB_1440f4b8b;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x808) + 300);
    if (lVar4 == 0) {
      bVar3 = *(byte *)(lVar16 + 0xbd8);
      *(double *)(param_1 + 0x820) = DAT_14c8464f0;
      dVar5 = DAT_14c8464e8;
      *pdVar1 = DAT_14c8464e0;
      *(double *)(param_1 + 0x818) = dVar5;
      local_258 = DAT_14c846508;
      local_268 = (code *)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      uStack_260 = (undefined4)DAT_14c846500;
      uStack_25c = DAT_14c846500._4_4_;
      if (((int)(uint)bVar3 < *(int *)(lVar16 + 0xbf0)) &&
         (plVar15 = *(longlong **)
                     (*(longlong *)(lVar16 + 0xbe8) + 8 +
                     (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8), plVar15 != (longlong *)0x0)) {
        (**(code **)(*plVar15 + 0x2d8))(plVar15,pdVar1,&local_268);
      }
    }
    else {
      FUN_148a21650(lVar16,lVar4,pdVar1,&local_268);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x808) + 0x12a) == '\x01') {
      *(double *)(param_1 + 0x838) = local_258;
      *puVar2 = (undefined4)local_268;
      *(undefined4 *)(param_1 + 0x82c) = local_268._4_4_;
      *(undefined4 *)(param_1 + 0x830) = uStack_260;
      *(undefined4 *)(param_1 + 0x834) = uStack_25c;
    }
  }
LAB_1440f4b8b:
  cVar14 = *(char *)(*(longlong *)(param_1 + 0x808) + 0x128);
  if (*(longlong *)(param_1 + 0x840) == 0) {
    if ((cVar14 != '\0') && (plVar15 = *(longlong **)(param_1 + 0x168), plVar15 != (longlong *)0x0))
    {
      (**(code **)(*plVar15 + 0x588))(plVar15,&local_138,&local_150);
      dVar20 = (double)FUN_144719204(local_150,0x4076800000000000);
      dVar7 = (double)FUN_144719204(uStack_148,0x4076800000000000);
      dVar5 = sin(dVar20 * 0.017453292519943295);
      dVar20 = cos(dVar20 * 0.017453292519943295);
      dVar6 = sin(dVar7 * 0.017453292519943295);
      dVar7 = cos(dVar7 * 0.017453292519943295);
      local_158 = dVar5 * 5000.0 + local_128;
      dStack_160 = dVar6 * dVar20 * 5000.0 + dStack_130;
      local_168 = dVar7 * dVar20 * 5000.0 + local_138;
      local_fc = 0;
      local_f8 = 0x101;
      local_d0 = 0;
      local_c8 = 0x800000000;
      local_b0 = 0;
      local_a4 = 4;
      local_110 = 1;
      local_104 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_10f = 1;
      local_10d = 0;
      local_100 = 0;
      local_10c = 0x1000000;
      local_108 = 1;
      local_c0 = *(undefined4 *)((longlong)plVar15 + 0xc);
      local_a8 = 1;
      if (DAT_14cb223d8 == 0) {
        local_268 = FUN_1449e2820;
        local_270 = FUN_14081d0ea;
        local_278 = FUN_1427b09ee;
        local_288 = &LAB_147f29feb;
        local_290 = FUN_1464384fe;
        local_298 = L"Engine";
        local_2a0 = 0;
        local_2a8 = (undefined1 *)CONCAT44(local_2a8._4_4_,0x10004001);
        local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,8);
        local_2b8 = 0x28;
        local_280 = &local_268;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15);
      if (plVar15 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_268 = FUN_1449e2820;
          local_270 = FUN_14081d0ea;
          local_278 = FUN_1427b09ee;
          local_288 = &LAB_147f29feb;
          local_290 = FUN_1464384fe;
          local_298 = L"Engine";
          local_2a0 = 0;
          local_2a8 = (undefined1 *)CONCAT44(local_2a8._4_4_,0x10004001);
          local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,8);
          local_2b8 = 0x28;
          local_280 = &local_268;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar17 = (longlong *)FUN_144718840(plVar15);
        if ((((((plVar15 != plVar17) && (plVar17 != (longlong *)0x0)) &&
              (lVar16 = (**(code **)(*plVar17 + 0x10))(plVar17), lVar16 != 0)) &&
             ((*(char *)(lVar16 + 0x52) == '\0' && (*(char *)(lVar16 + 0x50) == '\x01')))) &&
            ((lVar4 = *(longlong *)(lVar16 + 0x20), lVar4 != 0 &&
             ((*(short *)(lVar16 + 0x28) < 0 || (*(longlong *)(lVar16 + 0x30) != 0)))))) &&
           (*(char *)(lVar4 + 0x88) == '\x01')) {
          local_100 = (undefined1)(1 << (*(byte *)(lVar4 + 0x89) & 0x1f));
        }
      }
      memset(&local_268,0,0x100);
      local_198 = 0xffffffff;
      local_268 = (code *)CONCAT44(0x3f800000,(undefined4)local_268);
      local_1c4 = 0xffffffff;
      uVar18 = FUN_1447210f0(param_1);
      local_2a8 = &DAT_14cad0f10;
      local_2b0 = &local_120;
      local_2b8 = 0x10;
      cVar14 = FUN_1400b50cc(uVar18,&local_268,&local_138,&local_168);
      if (cVar14 == '\0') {
        local_248 = local_158;
        local_258 = local_168;
        dStack_250 = dStack_160;
      }
      dVar8 = local_248 - *(double *)(param_1 + 0x820);
      dVar10 = dStack_250 - *(double *)(param_1 + 0x818);
      dVar9 = local_258 - *(double *)(param_1 + 0x810);
      dVar19 = dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10;
      if (((dVar19 != 1.0) || (_Y = dVar8, _Y_00 = dVar10, _X = dVar9, NAN(dVar19))) &&
         (_Y = DAT_14c8464f0, _Y_00 = DAT_14c8464e8, _X = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar19)) {
        dVar19 = 1.0 / SQRT(dVar19);
        _Y = dVar8 * dVar19;
        _Y_00 = dVar10 * dVar19;
        _X = dVar9 * dVar19;
      }
      dVar19 = 0.0;
      if (0.0 <= dVar5 * _Y + dVar7 * dVar20 * _X + dVar6 * dVar20 * _Y_00) {
        if (((_X != 0.0) || (NAN(_X))) || ((_Y_00 != 0.0 || (NAN(_Y_00))))) {
          dVar19 = atan2(_Y_00,_X);
          dVar19 = dVar19 * 57.29577951308232;
        }
        dVar20 = SQRT(_X * _X + _Y_00 * _Y_00);
        dVar5 = 0.0;
        if (((_Y != 0.0) || (NAN(_Y))) || ((dVar20 != 0.0 || (NAN(dVar20))))) {
          dVar5 = atan2(_Y,dVar20);
          dVar5 = dVar5 * 57.29577951308232;
        }
        *(double *)(param_1 + 0x828) = dVar5;
        *(double *)(param_1 + 0x830) = dVar19;
        *(undefined8 *)(param_1 + 0x838) = 0;
      }
      else {
        *(double *)(param_1 + 0x820) = local_128;
        *pdVar1 = local_138;
        *(double *)(param_1 + 0x818) = dStack_130;
        *(undefined8 *)(param_1 + 0x838) = local_140;
        *puVar2 = local_150;
        *(undefined4 *)(param_1 + 0x82c) = uStack_14c;
        *(undefined4 *)(param_1 + 0x830) = uStack_148;
        *(undefined4 *)(param_1 + 0x834) = uStack_144;
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    *(char *)(*(longlong *)(param_1 + 0x840) + 0x140) = cVar14;
    *(undefined1 *)(*(longlong *)(param_1 + 0x840) + 0x141) = 1;
    lVar16 = *(longlong *)(param_1 + 0x840);
    *(undefined8 *)(lVar16 + 0x158) = *(undefined8 *)(param_1 + 0x820);
    uVar18 = *(undefined8 *)(param_1 + 0x818);
    *(double *)(lVar16 + 0x148) = *pdVar1;
    *(undefined8 *)(lVar16 + 0x150) = uVar18;
    *(undefined1 *)(*(longlong *)(param_1 + 0x840) + 0x1c0) = 1;
    lVar16 = *(longlong *)(param_1 + 0x840);
    *(undefined8 *)(lVar16 + 0x1d8) = *(undefined8 *)(param_1 + 0x838);
    uVar11 = *(undefined4 *)(param_1 + 0x82c);
    uVar12 = *(undefined4 *)(param_1 + 0x830);
    uVar13 = *(undefined4 *)(param_1 + 0x834);
    *(undefined4 *)(lVar16 + 0x1c8) = *puVar2;
    *(undefined4 *)(lVar16 + 0x1cc) = uVar11;
    *(undefined4 *)(lVar16 + 0x1d0) = uVar12;
    *(undefined4 *)(lVar16 + 0x1d4) = uVar13;
  }
LAB_1440f5093:
  if ((local_a0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f5392 FUN_1440f5392 body=1693 status=ok
// SIG undefined FUN_1440f5392(void)

void FUN_1440f5392(longlong param_1)

{
  int *piVar1;
  longlong ****pppplVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong ***ppplVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong ****pppplVar15;
  int iVar16;
  longlong ****pppplVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  char *local_98;
  char local_89;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong ***local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ushort local_60;
  byte local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x808) == 0) || (*(longlong *)(param_1 + 0xac8) != 0))
  goto LAB_1440f53ca;
  *(undefined1 *)(param_1 + 0x848) = 0;
  lVar12 = FUN_1407a0dc0(*(longlong *)(param_1 + 0x808) + 0x198);
  if (lVar12 == 0) goto LAB_1440f53ca;
  uVar13 = FUN_1447210f0(param_1);
  FUN_1409e0c66(&local_80,uVar13);
  if ((longlong ****)local_78 == (longlong ****)0x0) goto LAB_1440f53ca;
  iVar10 = *(int *)(local_78 + 1);
  do {
    if (iVar10 == 0) {
      pppplVar17 = (longlong ****)0x0;
      break;
    }
    LOCK();
    iVar11 = *(int *)(local_78 + 1);
    bVar19 = iVar10 == iVar11;
    if (bVar19) {
      *(int *)(local_78 + 1) = iVar10 + 1;
      iVar11 = iVar10;
    }
    iVar10 = iVar11;
    UNLOCK();
    pppplVar17 = (longlong ****)local_78;
  } while (!bVar19);
  LOCK();
  piVar1 = (int *)((longlong)local_78 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (*(code *)(*local_78)[2])();
  }
  plVar5 = local_80;
  if (pppplVar17 == (longlong ****)0x0) goto LAB_1440f53ca;
  if (local_80 != (longlong *)0x0) {
    lVar12 = *(longlong *)(param_1 + 0x808);
    lVar14 = *(longlong *)(lVar12 + 0x210);
    if (lVar14 != 0) {
      local_68 = *(undefined8 *)(param_1 + 0x820);
      local_78 = *(longlong ****)(param_1 + 0x810);
      uStack_70 = *(undefined4 *)(param_1 + 0x818);
      uStack_6c = *(undefined4 *)(param_1 + 0x81c);
      local_80 = (longlong *)0x0;
      local_60 = 0x18;
      local_58 = 4;
      local_50 = (byte)~DAT_14c9a8994 >> 3 & 4;
      uVar4 = (uint)((ulonglong)lVar14 >> 0x10);
      uVar18 = (uint)lVar14 & 0xffff;
      uVar13 = FUN_145765d38(param_1 + 0x858,
                             ((uint)lVar14 << 0x10 | uVar18) + (int)((ulonglong)lVar14 >> 0x20) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4),lVar12 + 0x210);
      FUN_1403719a4(uVar13,&local_80);
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar7 != (code *)0x0) {
        pppplVar15 = (longlong ****)local_78;
        if (local_60 < 0x19) {
          pppplVar15 = &local_78;
        }
        (*pcVar7)(pppplVar15);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
      lVar12 = *(longlong *)(param_1 + 0x808);
    }
    lVar14 = *(longlong *)(lVar12 + 0x218);
    if (lVar14 != 0) {
      local_68 = *(undefined8 *)(param_1 + 0x838);
      local_78 = *(longlong ****)(param_1 + 0x828);
      uStack_70 = *(undefined4 *)(param_1 + 0x830);
      uStack_6c = *(undefined4 *)(param_1 + 0x834);
      local_80 = (longlong *)0x0;
      local_60 = 0x18;
      local_58 = 5;
      local_50 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
      uVar4 = (uint)((ulonglong)lVar14 >> 0x10);
      uVar18 = (uint)lVar14 & 0xffff;
      uVar13 = FUN_145765d38(param_1 + 0x858,
                             ((uint)lVar14 << 0x10 | uVar18) + (int)((ulonglong)lVar14 >> 0x20) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4),lVar12 + 0x218);
      FUN_1403719a4(uVar13,&local_80);
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar7 != (code *)0x0) {
        pppplVar15 = (longlong ****)local_78;
        if (local_60 < 0x19) {
          pppplVar15 = &local_78;
        }
        (*pcVar7)(pppplVar15);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78);
      }
    }
    local_98 = &local_89;
    local_89 = '\0';
    FUN_143881578(plVar5,&local_80,*(undefined8 *)(param_1 + 0x1b0),param_1 + 0x850);
    ppplVar8 = local_78;
    if ((longlong **)(param_1 + 0xac8) != &local_80) {
      *(longlong **)(param_1 + 0xac8) = local_80;
      local_80 = (longlong *)0x0;
      pppplVar15 = *(longlong *****)(param_1 + 0xad0);
      if ((longlong ****)local_78 != pppplVar15) {
        local_78 = (longlong ***)0x0;
        *(longlong ****)(param_1 + 0xad0) = ppplVar8;
        if (pppplVar15 != (longlong ****)0x0) {
          LOCK();
          pppplVar2 = pppplVar15 + 1;
          *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
          UNLOCK();
          if (*(int *)pppplVar2 == 0) {
            (*(code *)**pppplVar15)(pppplVar15);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar15)[2])(pppplVar15);
            }
          }
        }
      }
    }
    ppplVar8 = local_78;
    if ((longlong ****)local_78 != (longlong ****)0x0) {
      LOCK();
      pppplVar15 = (longlong ****)(local_78 + 1);
      *(int *)pppplVar15 = *(int *)pppplVar15 + -1;
      UNLOCK();
      if (*(int *)pppplVar15 == 0) {
        (*(code *)**local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)ppplVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppplVar8)[2])(ppplVar8);
        }
      }
    }
    plVar5 = *(longlong **)(param_1 + 0xac8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0xad8) = DAT_14c75b13c;
      if (local_89 == '\x01') {
        FUN_148d06232(param_1);
      }
      else {
        local_80 = (longlong *)0x0;
        local_78 = (longlong ***)((ulonglong)local_78 & 0xffffffff00000000);
        FUN_1446efa72(&local_80,0,3,0x10);
        plVar3 = local_80;
        local_78 = (longlong ***)CONCAT44(local_78._4_4_,3);
        *local_80 = (longlong)&PTR_LAB_14ac8b4c0;
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar14 == 0) {
          LOCK();
          UNLOCK();
          lVar14 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        local_80[2] = lVar14;
        *local_80 = (longlong)&PTR_FUN_14b965c40;
        local_80[3] = 0;
        iVar10 = 0;
        if (param_1 != 0) {
          uVar4 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_80 + 3) = uVar4;
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          iVar10 = *(int *)(lVar12 + 0x10);
          if (*(int *)(lVar12 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar19 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar19) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar10 = *(int *)(lVar12 + 0x10);
            bVar19 = iVar10 == 0;
            if (bVar19) {
              *(int *)(lVar12 + 0x10) = iVar11;
              iVar10 = 0;
            }
            UNLOCK();
            if (bVar19) {
              iVar10 = iVar11;
            }
          }
        }
        *(int *)((longlong)plVar3 + 0x1c) = iVar10;
        plVar3[4] = param_1;
        if (((int)local_78 == 0) || (local_80 == (longlong *)0x0)) {
LAB_1440f59cc:
          if ((int)local_78 != 0) {
            if (local_80 == (longlong *)0x0) goto LAB_1440f5764;
            (**(code **)*local_80)(local_80,0);
            FUN_1446efa72(&local_80,0,0,0x10);
            goto LAB_1440f574e;
          }
        }
        else {
          cVar9 = (**(code **)(*local_80 + 0x30))();
          if (cVar9 == '\0') {
            goto LAB_1440f59cc;
          }
          plVar3 = plVar5 + 0x26;
          if (*(int *)((longlong)plVar5 + 0x144) < 1) {
            iVar10 = (int)plVar5[0x27];
            iVar11 = (int)plVar5[0x28] + -1;
            *(int *)(plVar5 + 0x28) = iVar11;
            if (iVar11 <= iVar10) {
              iVar11 = iVar10;
              if (0 < iVar10) {
                iVar16 = 0;
                do {
                  if (((*(int *)(*plVar3 + 8 + (longlong)iVar16 * 0x10) == 0) ||
                      (plVar6 = *(longlong **)(*plVar3 + (longlong)iVar16 * 0x10),
                      plVar6 == (longlong *)0x0)) ||
                     (cVar9 = (**(code **)(*plVar6 + 0x28))(), cVar9 != '\0')) {
                    FUN_14005b288(plVar3,iVar16);
                    FUN_14005b248(plVar3);
                  }
                  else {
                    iVar16 = iVar16 + 1;
                  }
                  iVar11 = (int)plVar5[0x27];
                } while (iVar16 < iVar11);
              }
              iVar16 = 2;
              if (2 < iVar11 * 2) {
                iVar16 = iVar11 * 2;
              }
              *(int *)(plVar5 + 0x28) = iVar16;
              if ((iVar16 < iVar10) && (*(int *)((longlong)plVar5 + 0x13c) != iVar11)) {
                FUN_14045812c();
              }
            }
          }
          if (((int)local_78 != 0) && (local_80 != (longlong *)0x0)) {
            (**(code **)(*local_80 + 0x38))(local_80,local_88);
          }
          iVar10 = (int)plVar5[0x27];
          *(uint *)(plVar5 + 0x27) = iVar10 + 1U;
          if (*(uint *)((longlong)plVar5 + 0x13c) < iVar10 + 1U) {
            FUN_1447a71f6(plVar3,iVar10);
          }
          lVar12 = *plVar3;
          lVar14 = (longlong)iVar10 * 0x10;
          *(undefined8 *)(lVar12 + lVar14) = 0;
          *(undefined4 *)(lVar12 + 8 + lVar14) = 0;
          *(longlong **)(lVar12 + lVar14) = local_80;
          local_80 = (longlong *)0x0;
          *(int *)(lVar12 + 8 + lVar14) = (int)local_78;
LAB_1440f574e:
          local_78 = (longlong ***)((ulonglong)local_78 & 0xffffffff00000000);
        }
        if (local_80 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1440f5764:
  LOCK();
  pppplVar15 = pppplVar17 + 1;
  *(int *)pppplVar15 = *(int *)pppplVar15 + -1;
  UNLOCK();
  if (*(int *)pppplVar15 == 0) {
    (*(code *)**pppplVar17)(pppplVar17);
    LOCK();
    piVar1 = (int *)((longlong)pppplVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (*(code *)(*pppplVar17)[2])(pppplVar17);
    }
  }
LAB_1440f53ca:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f5a30 FUN_1440f5a30 body=64 status=ok
// SIG undefined FUN_1440f5a30(void)

undefined8 FUN_1440f5a30(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 4;
  FUN_14387d746(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440f5b35 FUN_1440f5b35 body=69 status=ok
// SIG undefined FUN_1440f5b35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440f5b35(void)

{
  _DAT_14cbc6680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440f5b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc6688,1);
  return;
}



// FUNCTION 1440f5b7a FUN_1440f5b7a body=69 status=ok
// SIG undefined FUN_1440f5b7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440f5b7a(void)

{
  _DAT_14cbc6698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440f5bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc66a0,1);
  return;
}



// FUNCTION 1440f5bbf FUN_1440f5bbf body=69 status=ok
// SIG undefined FUN_1440f5bbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440f5bbf(void)

{
  _DAT_14cbc66b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440f5c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc66b8,1);
  return;
}



// FUNCTION 1440f5c04 FUN_1440f5c04 body=786 status=ok
// SIG undefined FUN_1440f5c04(void)

void FUN_1440f5c04(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    iVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar1;
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
      iVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar7 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar5;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar7 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x74) = iVar7;
  local_40 = (longlong *)FUN_14143f70a();
  if ((local_40 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  lVar8 = FUN_143f7ada4(param_2,&local_40);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(param_1 + 0xb8) = lVar8;
  local_50 = FUN_140870f68;
  local_48 = 0;
  FUN_146623736(&local_40,param_1);
  if (((local_38 == 0) || (local_40 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_40 + 0x30))(), uVar1 = DAT_14cb95110, cVar4 == '\0')) {
    if (local_38 != 0) {
      if (local_40 == (longlong *)0x0) {
        pcVar6 = (code *)0x0;
        goto LAB_1440f5e2a;
      }
      pcVar6 = (code *)0x0;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      goto LAB_1440f5e14;
    }
    pcVar6 = (code *)0x0;
  }
  else {
    if ((DAT_14cb9511c < 1) &&
       (DAT_14cb95118 = DAT_14cb95118 + -1, DAT_14cb95118 <= (int)DAT_14cb95110)) {
      if (0 < (int)DAT_14cb95110) {
        iVar7 = 0;
        do {
          if (((*(int *)(DAT_14cb95108 + 8 + (longlong)iVar7 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(DAT_14cb95108 + (longlong)iVar7 * 0x10),
              plVar2 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(&DAT_14cb95108,iVar7);
            FUN_14005b248(&DAT_14cb95108);
          }
          else {
            iVar7 = iVar7 + 1;
          }
        } while (iVar7 < (int)DAT_14cb95110);
      }
      DAT_14cb95118 = 2;
      if (2 < (int)(DAT_14cb95110 * 2)) {
        DAT_14cb95118 = DAT_14cb95110 * 2;
      }
      if ((DAT_14cb95118 < (int)uVar1) && (DAT_14cb95114 != DAT_14cb95110)) {
        FUN_14045812c();
      }
    }
    pcVar6 = (code *)0x0;
    if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x38))(local_40,&local_50);
      pcVar6 = local_50;
    }
    uVar1 = DAT_14cb95110;
    lVar8 = (longlong)(int)DAT_14cb95110;
    DAT_14cb95110 = DAT_14cb95110 + 1;
    if (DAT_14cb95114 < DAT_14cb95110) {
      FUN_1447a71f6(&DAT_14cb95108,uVar1);
    }
    lVar3 = DAT_14cb95108;
    lVar8 = lVar8 * 0x10;
    *(undefined8 *)(DAT_14cb95108 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong **)(lVar3 + lVar8) = local_40;
    local_40 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar8) = local_38;
LAB_1440f5e14:
    local_38 = 0;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1440f5e2a:
  *(code **)(param_1 + 0x40) = pcVar6;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f5f18 FUN_1440f5f18 body=1659 status=ok
// SIG undefined FUN_1440f5f18(void)

void FUN_1440f5f18(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = param_2[1];
  local_90 = param_3;
  if (lVar9 == 0) {
    uVar8 = FUN_1402d1c56();
    lVar9 = FUN_14477b664(uVar8);
    param_2[1] = lVar9;
  }
  if (param_2[2] == 0) {
    if ((lVar9 == 0) || (*param_2 == 0)) goto LAB_1440f6309;
    plVar17 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar17 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar5 == '\0')) {
      param_2[2] = 0;
      goto LAB_1440f6309;
    }
    uVar8 = (**(code **)(*plVar17 + 0x110))(plVar17);
    lVar9 = FUN_144aff482(uVar8,param_2);
    param_2[2] = lVar9;
    if (lVar9 == 0) goto LAB_1440f6309;
  }
  local_88 = param_1;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x58);
    lVar15 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    local_80 = param_2;
    do {
      plVar17 = local_80;
      if (*(longlong *)(lVar9 + 0x68) == 0) {
        uVar8 = FUN_1402d1c56();
        uVar8 = FUN_14477b664(uVar8);
        *(undefined8 *)(lVar9 + 0x68) = uVar8;
      }
      lVar10 = plVar17[1];
      if (lVar10 == 0) {
        lVar10 = FUN_1402d1c56();
      }
      local_78 = *plVar17;
      lVar10 = FUN_14477b664(lVar10);
      iVar6 = 0;
      if ((lVar10 != 0) && (plVar17 = *(longlong **)(lVar10 + 0xb8), plVar17 != (longlong *)0x0)) {
        lVar11 = *plVar17;
        pcVar2 = *(code **)(lVar11 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar5 = (*pcVar2)(plVar17);
          iVar6 = 0;
          if (cVar5 == '\0') goto LAB_1440f603e;
          lVar11 = *plVar17;
        }
        pcVar2 = *(code **)(lVar11 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar2)(plVar17);
        }
        iVar6 = FUN_144aff48c(ppuVar14);
      }
LAB_1440f603e:
      lVar11 = *(longlong *)(lVar9 + 0x60);
      lVar3 = *(longlong *)(lVar9 + 0x68);
      iVar7 = 0;
      if ((lVar3 != 0) &&
         (plVar17 = *(longlong **)(lVar3 + 0xb8), iVar7 = 0, plVar17 != (longlong *)0x0)) {
        lVar12 = *plVar17;
        pcVar2 = *(code **)(lVar12 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar5 = (*pcVar2)(plVar17);
          if (cVar5 == '\0') goto LAB_1440f60a7;
          lVar12 = *plVar17;
        }
        pcVar2 = *(code **)(lVar12 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar2)(plVar17);
        }
        iVar7 = FUN_144aff48c(ppuVar14);
      }
LAB_1440f60a7:
      param_2 = local_80;
      if ((iVar7 == iVar6) && (lVar11 == local_78)) {
        if (lVar3 == lVar10) {
LAB_1440f6196:
          if (lVar9 != 0) goto LAB_1440f61a4;
          break;
        }
        if ((lVar10 != 0) && (lVar3 != 0)) {
          iVar6 = *(int *)(lVar10 + 0x38);
          iVar7 = *(int *)(lVar3 + 0x38);
          if (((iVar6 <= iVar7) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) == lVar10 + 0x30))
             || ((iVar7 <= iVar6 &&
                 (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar7 * 8) == lVar3 + 0x30)
                 ))) goto LAB_1440f6196;
        }
      }
      lVar9 = lVar9 + 0x88;
      lVar15 = lVar15 + -0x88;
    } while (lVar15 != 0);
  }
  lVar15 = local_88;
  iVar6 = *(int *)(local_88 + 0x60);
  *(uint *)(local_88 + 0x60) = iVar6 + 1U;
  if (*(uint *)(local_88 + 100) < iVar6 + 1U) {
    FUN_14662359e(local_88 + 0x58,iVar6);
  }
  lVar10 = *(longlong *)(lVar15 + 0x58);
  lVar11 = (longlong)iVar6 * 0x88;
  lVar9 = lVar10 + lVar11;
  plVar17 = (longlong *)(lVar10 + lVar11);
  plVar19 = plVar17 + 0xc;
  *plVar17 = lVar15;
  plVar17[1] = (longlong)&DAT_14cbc66d8;
  *(undefined4 *)(plVar17 + 2) = 0;
  plVar17[3] = 0;
  plVar17[4] = 0;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  *(undefined4 *)(plVar17 + 0xb) = 0xffffffff;
  *(undefined1 *)((longlong)plVar17 + 0x5c) = 0;
  FUN_148bc39e8(plVar19,param_2);
  plVar17[0xf] = 0;
  plVar17[0x10] = 0;
  uVar8 = FUN_14050fd64();
  lVar15 = plVar17[0xd];
  if (lVar15 == 0) {
    uVar13 = FUN_1402d1c56();
    lVar15 = FUN_14477b664(uVar13);
    *(longlong *)(lVar9 + 0x68) = lVar15;
  }
  plVar17 = (longlong *)(lVar10 + lVar11 + 0x38);
  lVar10 = *(longlong *)(lVar9 + 0x70);
  if (((lVar10 == 0) && (lVar10 = 0, lVar15 != 0)) && (*plVar19 != 0)) {
    plVar4 = *(longlong **)(lVar15 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      lVar10 = 0;
    }
    else {
      uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar10 = FUN_144aff482(uVar13,plVar19);
    }
    *(longlong *)(lVar9 + 0x70) = lVar10;
  }
  local_98 = 0;
  FUN_14088df30(uVar8,&local_70,lVar10,0);
  plVar19 = local_68;
  if (plVar17 != &local_70) {
    *(longlong *)(lVar9 + 0x38) = local_70;
    local_70 = 0;
    plVar4 = *(longlong **)(lVar9 + 0x40);
    if (local_68 != plVar4) {
      local_68 = (longlong *)0x0;
      *(longlong **)(lVar9 + 0x40) = plVar19;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar4 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
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
    }
  }
  plVar19 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (*plVar17 != 0) {
    lVar15 = FUN_1408710a5();
    plVar17 = *(longlong **)(lVar9 + 0x38);
    plVar19 = *(longlong **)(lVar9 + 0x40);
    if (plVar19 == (longlong *)0x0) {
      (**(code **)(*plVar17 + 8))(plVar17,lVar15 + 0x70,0);
      (**(code **)(*plVar17 + 8))(plVar17,lVar15 + 0x48,0);
    }
    else {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      (**(code **)(*plVar17 + 8))(plVar17,lVar15 + 0x70,0);
      (**(code **)(*plVar17 + 8))(plVar17,lVar15 + 0x48,0);
      LOCK();
      plVar17 = plVar19 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
LAB_1440f61a4:
  if (*(longlong *)(lVar9 + 0x38) == 0) goto LAB_1440f6309;
  lVar15 = *(longlong *)(lVar9 + 0x68);
  if (lVar15 == 0) {
    uVar8 = FUN_1402d1c56();
    lVar15 = FUN_14477b664(uVar8);
    *(longlong *)(lVar9 + 0x68) = lVar15;
  }
  if (*(longlong *)(lVar9 + 0x70) == 0) {
    if ((lVar15 == 0) || (*(longlong *)(lVar9 + 0x60) == 0)) goto LAB_1440f6309;
    plVar17 = *(longlong **)(lVar15 + 0xb8);
    if ((plVar17 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar5 == '\0')) {
      *(undefined8 *)(lVar9 + 0x70) = 0;
      goto LAB_1440f6309;
    }
    uVar8 = (**(code **)(*plVar17 + 0x110))(plVar17);
    lVar15 = FUN_144aff482(uVar8,(longlong *)(lVar9 + 0x60));
    *(longlong *)(lVar9 + 0x70) = lVar15;
    if (lVar15 == 0) goto LAB_1440f6309;
  }
  lVar15 = *(longlong *)(lVar9 + 0x38);
  if (((*(char *)(lVar15 + 0x30) == '\0') && (*(char *)(lVar15 + 0x31) == '\0')) &&
     (*(int *)(lVar15 + 0x6c) == 2)) {
    FUN_1440f926a(lVar9,local_90);
  }
  else {
    iVar6 = *(int *)(lVar9 + 0x80);
    *(uint *)(lVar9 + 0x80) = iVar6 + 1U;
    if (*(uint *)(lVar9 + 0x84) < iVar6 + 1U) {
      FUN_144a2c682((longlong *)(lVar9 + 0x78),iVar6);
    }
    puVar16 = local_90;
    puVar18 = (undefined8 *)((longlong)iVar6 * 0x60 + *(longlong *)(lVar9 + 0x78));
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar18 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar18 = puVar18 + 1;
    }
  }
LAB_1440f6309:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f6602 FUN_1440f6602 body=11185 status=ok
// SIG undefined FUN_1440f6602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440f6602(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  double dVar5;
  double _X;
  int iVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  uint3 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  char cVar16;
  undefined1 uVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  LARGE_INTEGER LVar26;
  undefined1 *puVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  void *_Dst;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  longlong *plVar36;
  longlong lVar37;
  int iVar38;
  ulonglong uVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  undefined8 extraout_XMM0_Qa;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar49 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar50 [16];
  undefined8 extraout_XMM0_Qb_06;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_5e8 [32];
  ulonglong local_5c8;
  undefined4 local_5c0;
  undefined4 local_5b8;
  undefined8 local_5b0;
  undefined2 *local_5a8;
  undefined1 *local_5a0;
  undefined1 *local_598;
  undefined1 *local_590;
  undefined1 *local_588;
  code *local_580;
  longlong *local_578;
  undefined8 local_570;
  undefined1 (*local_568) [16];
  longlong *local_560;
  longlong *local_558;
  undefined4 local_54c;
  undefined8 local_548;
  longlong *local_540;
  int local_534;
  LARGE_INTEGER local_530;
  longlong *local_528;
  longlong local_520;
  longlong local_518;
  int local_50c;
  longlong *local_508;
  longlong local_500;
  undefined1 (*local_4f8) [16];
  longlong local_4f0;
  undefined8 local_4e8;
  LARGE_INTEGER local_4e0;
  longlong *local_4d8;
  undefined1 *local_4d0;
  undefined1 local_4c8 [16];
  longlong *local_4b8;
  code *local_4a8 [2];
  undefined8 local_498;
  undefined **local_488;
  longlong local_480;
  undefined8 local_468;
  longlong *plStack_460;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined8 uStack_440;
  longlong *local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408 [16];
  longlong *local_3f8;
  undefined1 *puStack_3f0;
  undefined8 *local_3e8;
  longlong *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *local_3d0;
  longlong local_3c8;
  longlong *plStack_3c0;
  longlong *local_3b8;
  longlong local_3a8 [84];
  undefined1 *local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  if (((((((*(int *)(param_1 + 0x54) == 0) || (uVar33 = *(uint *)(param_1 + 0x50), (int)uVar33 < 0))
         || (DAT_14c9647dc <= (int)uVar33)) ||
        ((plVar28 = (longlong *)
                    ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
         plVar28 == (longlong *)0x0 || ((int)plVar28[2] != *(int *)(param_1 + 0x54))))) ||
       ((*(uint *)(plVar28 + 1) & 0x10200000) != 0)) || (lVar23 = *plVar28, lVar23 == 0)) ||
     ((((*(longlong *)(lVar23 + 0x30) != 0 &&
        (lVar29 = *(longlong *)(*(longlong *)(lVar23 + 0x30) + 0x2b0), lVar29 != 0)) &&
       ((*(longlong *)(lVar29 + 0x588) != 0 &&
        (*(double *)(lVar23 + 0x708) <= *(double *)(lVar23 + 0x6d0))))) ||
      (((*(byte *)(lVar23 + 0x154) & 0x40) != 0 && (iVar20 = FUN_14490d72a(lVar23), iVar20 == 3)))))
     ) goto LAB_1440f6786;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar29 = 0;
    do {
      lVar37 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar29);
      if (*(longlong *)(lVar37 + 0x360) == lVar23) {
        if ((lVar37 != 0) && ((*(byte *)(lVar37 + 0x278) & 1) != 0)) goto LAB_1440f6786;
        break;
      }
      lVar29 = lVar29 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar29);
  }
  cVar16 = FUN_144a80e00(lVar23);
  if ((cVar16 != '\0') && (*(char *)(lVar23 + 0x155) < '\0')) goto LAB_1440f6786;
  plVar28 = DAT_14cabd158;
  if ((DAT_14c846b14 == '\x01') &&
     (((DAT_14c872bf0 == '\0' && ((DAT_14ca9a35c & 1) != 0)) && (DAT_14ca84e78 != '\x01')))) {
    if (DAT_14cabd108 != 0) {
      plVar28 = (longlong *)(DAT_14cabd108 + 0x10);
      goto LAB_1440f686a;
    }
  }
  else {
LAB_1440f686a:
    if ((plVar28 != (longlong *)0x0) && (cVar16 = (**(code **)(*plVar28 + 0x68))(), cVar16 != '\0'))
    goto LAB_1440f6786;
  }
  local_500 = param_1 + 0x28;
  FUN_140896aa8();
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(float *)(param_1 + 0x48) = (float)*(double *)(lVar23 + 0x6d0);
  *(undefined1 *)(param_1 + 0x68) = 0;
  local_520 = param_1 + -0x20;
  cVar16 = FUN_140254caa(param_1 + -0x20);
  auVar50._8_8_ = extraout_XMM0_Qb;
  auVar50._0_8_ = extraout_XMM0_Qa;
  if (cVar16 == '\0') {
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  if (*(longlong *)(param_1 + 0xa8) + 1U <= DAT_14c872be0) {
    QueryPerformanceCounter((LARGE_INTEGER *)local_408);
    dVar5 = (double)(longlong)local_408._0_8_ * DAT_14c83f420 + 16777216.0;
    auVar49._12_4_ = in_XMM1_Dd;
    auVar49._8_4_ = in_XMM1_Dc;
    dVar43 = dVar5 - *(double *)(param_1 + 0xb0);
    if ((ulonglong)*(uint *)(param_1 + 0x8cc) == 0x100) {
      dVar52 = *(double *)(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 0x8c8) * 8);
      *(double *)(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 0x8c8) * 8) = dVar43;
      iVar32 = *(int *)(param_1 + 0x8c8);
      iVar20 = *(int *)(param_1 + 0x8cc);
      uVar33 = iVar32 + 0x100;
      if (-1 < (int)(iVar32 + 1U)) {
        uVar33 = iVar32 + 1U;
      }
      *(uint *)(param_1 + 0x8c8) = (iVar32 - (uVar33 & 0xffffff00)) + 1;
    }
    else {
      *(double *)(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 0x8cc) * 8) = dVar43;
      iVar20 = *(int *)(param_1 + 0x8cc) + 1;
      *(int *)(param_1 + 0x8cc) = iVar20;
      dVar52 = 0.0;
    }
    dVar43 = dVar43 + (*(double *)(param_1 + 0x8b8) - dVar52);
    *(double *)(param_1 + 0x8b8) = dVar43;
    dVar43 = dVar43 / (double)iVar20;
    *(double *)(param_1 + 0x8c0) = dVar43;
    *(double *)(param_1 + 0xb0) = dVar5;
    *(ulonglong *)(param_1 + 0xa8) = DAT_14c872be0;
    auVar49._0_8_ = dVar43 * 1000.0;
    auVar50._4_12_ = auVar49._4_12_;
    auVar50._0_4_ = (float)auVar49._0_8_;
    *(bool *)(param_1 + 0xa0) = *DAT_14cbc66c0 <= auVar50._0_4_ && auVar50._0_4_ != *DAT_14cbc66c0;
  }
  if ((((*(int *)(param_1 + 0x54) != 0) && (uVar33 = *(uint *)(param_1 + 0x50), -1 < (int)uVar33))
      && (((int)uVar33 < DAT_14c9647dc &&
          (((plVar28 = (longlong *)
                       ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
            plVar28 != (longlong *)0x0 && ((int)plVar28[2] == *(int *)(param_1 + 0x54))) &&
           ((*(uint *)(plVar28 + 1) & 0x10200000) == 0)))))) && (lVar23 = *plVar28, lVar23 != 0)) {
    lVar29 = FUN_1408710a5();
    fVar42 = *(float *)(param_1 + 0x48);
    auVar50 = ZEXT416((uint)fVar42);
    if (*(float *)(param_1 + 0x60) + *(float *)(lVar29 + 0x24) <= fVar42) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (*(char *)(param_1 + 0x88) == '\x01') {
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      *(undefined2 *)(param_1 + 0x69) = 0;
      *(float *)(param_1 + 0x60) = fVar42;
      plVar28 = (longlong *)FUN_140636ec6(lVar23);
      auVar50._8_8_ = extraout_XMM0_Qb_01;
      auVar50._0_8_ = extraout_XMM0_Qa_00;
      if (plVar28 != (longlong *)0x0) {
        lVar23 = plVar28[0x7a];
        if (lVar23 == 0) {
          lVar23 = (**(code **)(*plVar28 + 0x6b8))(plVar28);
          auVar50._8_8_ = extraout_XMM0_Qb_02;
          auVar50._0_8_ = extraout_XMM0_Qa_01;
          if (lVar23 == 0) goto LAB_1440f6a26;
        }
        uVar33 = *(uint *)(lVar23 + 0xc);
        *(uint *)(param_1 + 0x58) = uVar33;
        if ((int)uVar33 < DAT_14c9647dc) {
          lVar37 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
        }
        else {
          lVar37 = 0;
        }
        iVar20 = *(int *)(lVar37 + 0x10);
        if (*(int *)(lVar37 + 0x10) == 0) {
          LOCK();
          iVar20 = DAT_14c964868 + 1;
          UNLOCK();
          iVar32 = DAT_14c964868 + 1;
          bVar40 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar20;
          if (bVar40) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar32);
          }
          LOCK();
          iVar20 = *(int *)(lVar37 + 0x10);
          bVar40 = iVar20 == 0;
          if (bVar40) {
            *(int *)(lVar37 + 0x10) = iVar32;
            iVar20 = 0;
          }
          UNLOCK();
          if (bVar40) {
            iVar20 = iVar32;
          }
        }
        *(int *)(param_1 + 0x5c) = iVar20;
        lVar23 = *(longlong *)(lVar23 + 0x1c8);
        if (lVar23 == 0) {
          puVar31 = &DAT_14c8464e0;
          uVar22 = DAT_14c8464f0;
        }
        else {
          puVar31 = (undefined8 *)(lVar23 + 0x260);
          uVar22 = *(undefined8 *)(lVar23 + 0x270);
        }
        uVar21 = *(undefined4 *)((longlong)puVar31 + 4);
        uVar8 = *(undefined4 *)(puVar31 + 1);
        uVar9 = *(undefined4 *)((longlong)puVar31 + 0xc);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)puVar31;
        *(undefined4 *)(param_1 + 0x74) = uVar21;
        *(undefined4 *)(param_1 + 0x78) = uVar8;
        *(undefined4 *)(param_1 + 0x7c) = uVar9;
        *(undefined8 *)(param_1 + 0x80) = uVar22;
        *(undefined1 *)(param_1 + 0x88) = 1;
        if (DAT_14cbadd90 == 0) {
          local_590 = local_408;
          local_408._0_8_ = FUN_141030f22;
          local_580 = FUN_14081d0ea;
          local_588 = &LAB_1459f2e4c;
          local_598 = &LAB_148c39de3;
          local_5a0 = &LAB_1457a9eb2;
          local_5a8 = &DAT_149e063b2;
          local_5b0 = 0;
          local_5b8 = 0x10000004;
          local_5c0 = 0x10;
          local_5c8 = CONCAT44(local_5c8._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(plVar28[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar28[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
            DAT_14cbadd90 + 0x30)) {
          *(undefined1 *)(param_1 + 0x69) = 0;
          cVar16 = '\0';
          bVar40 = false;
        }
        else {
          cVar16 = (char)plVar28[0x64c];
          *(char *)(param_1 + 0x69) = cVar16;
          bVar40 = plVar28[0x162] != 0;
        }
        *(bool *)(param_1 + 0x6a) = bVar40;
        fVar42 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 100);
        auVar50 = ZEXT416((uint)fVar42);
        *(bool *)(param_1 + 0x6b) = fVar42 <= *(float *)(lVar29 + 0x2c);
        if ((cVar16 != '\0') || (bVar40 != false)) {
          *(undefined1 *)(param_1 + 0x68) = 1;
        }
      }
    }
  }
LAB_1440f6a26:
  if (((((*(char *)(param_1 + 0x88) == '\x01') && (*(int *)(param_1 + 0x54) != 0)) &&
       (uVar33 = *(uint *)(param_1 + 0x50), -1 < (int)uVar33)) &&
      (((int)uVar33 < DAT_14c9647dc &&
       (plVar28 = (longlong *)
                  ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
       plVar28 != (longlong *)0x0)))) &&
     (((int)plVar28[2] == *(int *)(param_1 + 0x54) &&
      (((*(uint *)(plVar28 + 1) & 0x10200000) == 0 && (lVar23 = *plVar28, lVar23 != 0)))))) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar37 = *(longlong *)(param_1 + 0x38) + 0x48;
      lVar29 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
      do {
        *(undefined1 *)(lVar37 + 0x14) = 0;
        if (*(int *)(lVar37 + 0xc) < 0) {
          *(undefined4 *)(lVar37 + 8) = 0;
          FUN_148d0d0ba(lVar37);
        }
        else {
          *(undefined4 *)(lVar37 + 8) = 0;
        }
        lVar37 = lVar37 + 0x88;
        lVar29 = lVar29 + -0x88;
      } while (lVar29 != 0);
    }
    FUN_14435e49e(local_4c8,lVar23,param_1 + 0x70,*(undefined8 *)(param_1 + 0x98));
    lVar29 = local_4c8._8_8_;
    if (local_4c8._8_8_ == 0) {
      uVar22 = FUN_1415289f2();
      lVar29 = FUN_14477b664(uVar22);
      local_4c8._8_8_ = lVar29;
    }
    puVar1 = (ulonglong *)(param_1 + 0x38);
    if (local_4b8 == (longlong *)0x0) {
      if ((lVar29 != 0) && (local_4c8._0_8_ != 0)) {
        plVar28 = *(longlong **)(lVar29 + 0xb8);
        if ((plVar28 == (longlong *)0x0) ||
           (cVar16 = (**(code **)(*plVar28 + 0x108))(plVar28), cVar16 == '\0')) {
          local_4b8 = (longlong *)0x0;
        }
        else {
          uVar22 = (**(code **)(*plVar28 + 0x110))(plVar28);
          local_4b8 = (longlong *)FUN_144aff482(uVar22,local_4c8);
          if (local_4b8 != (longlong *)0x0) goto LAB_1440f6b94;
        }
      }
    }
    else {
LAB_1440f6b94:
      plVar28 = local_4b8;
      uVar24 = *(ulonglong *)(param_1 + 0x38);
      iVar20 = *(int *)(param_1 + 0x40);
      uVar39 = (ulonglong)iVar20;
      if (uVar39 != 0) {
        lVar29 = 0;
        do {
          if (*(longlong **)(uVar24 + 8 + lVar29) == local_4b8) {
            uVar33 = (int)(lVar29 >> 3) * -0xf0f0f0f;
            if ((int)uVar33 < iVar20 && -1 < (int)uVar33) {
              uVar39 = (ulonglong)(uVar33 & 0x7fffffff);
              goto LAB_1440f6c3b;
            }
            break;
          }
          lVar29 = lVar29 + 0x88;
        } while (uVar39 * 0x88 != lVar29);
      }
      *(uint *)(param_1 + 0x40) = iVar20 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar20 + 1U) {
        FUN_14662359e(puVar1,iVar20);
        uVar24 = *puVar1;
      }
      FUN_1418e1b2c(uVar39 * 0x88 + uVar24,local_520,plVar28);
      uVar24 = *puVar1;
LAB_1440f6c3b:
      *(undefined1 *)(uVar24 + 0x5c + uVar39 * 0x88) = 1;
    }
    local_408._0_8_ = lVar23;
    LOCK();
    DAT_14cbc6568 = DAT_14cbc6568 + 1;
    UNLOCK();
    uVar22 = FUN_140f6dc7c(DAT_14cbc6560);
    local_408._8_8_ = uVar22;
    local_3f8 = &DAT_14cbc6560;
    LOCK();
    DAT_14cbc6568 = DAT_14cbc6568 + 1;
    UNLOCK();
    puStack_3f0 = local_408;
    FUN_140f6dc2e(local_408 + 8);
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_3e8 = (undefined8 *)0x0;
    plStack_3e0 = &DAT_14cbc6560;
    LOCK();
    DAT_14cbc6568 = DAT_14cbc6568 + 1;
    UNLOCK();
    uStack_3d8 = local_408;
    auVar50._0_8_ = FUN_140f6dc2e(&local_3e8);
    plVar28 = plStack_3e0;
    puVar31 = local_3e8;
    auVar50._8_8_ = extraout_XMM0_Qb_00;
    LOCK();
    DAT_14cbc6568 = DAT_14cbc6568 + -1;
    UNLOCK();
    local_4e0.QuadPart = local_408._8_8_;
    local_4d8 = local_3f8;
    LOCK();
    *(int *)(local_3f8 + 1) = (int)local_3f8[1] + 1;
    UNLOCK();
    local_4d0 = puStack_3f0;
    LOCK();
    *(int *)(plStack_3e0 + 1) = (int)plStack_3e0[1] + 1;
    UNLOCK();
    if ((undefined8 *)local_408._8_8_ != local_3e8) {
      do {
        LVar26 = local_4e0;
        lVar23 = *(longlong *)(local_4e0.QuadPart + 0x10);
        lVar29 = *(longlong *)(lVar23 + 0x638);
        if (lVar29 == 0) {
          local_4e8 = *(undefined8 *)(lVar23 + 0x628);
          FUN_1446dcdd4(&local_468,&local_4e8);
          lVar29 = FUN_144837462(DAT_14cbc6588,&local_468);
          if (local_458._8_8_ != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar23 + 0x638) = lVar29;
          if (lVar29 != 0) goto LAB_1440f6fa9;
        }
        else {
LAB_1440f6fa9:
          dVar43 = *(double *)(lVar23 + 0x260) - *(double *)(param_1 + 0x70);
          dVar52 = *(double *)(lVar23 + 0x268) - *(double *)(param_1 + 0x78);
          dVar5 = *(double *)(lVar23 + 0x270) - *(double *)(param_1 + 0x80);
          if ((float)(dVar5 * dVar5 + dVar52 * dVar52 + dVar43 * dVar43) <=
              *(float *)(lVar23 + 0x620) * *(float *)(lVar23 + 0x620)) {
            local_570 = *(ulonglong *)(param_1 + 0x38);
            iVar20 = *(int *)(param_1 + 0x40);
            local_578 = (longlong *)(longlong)iVar20;
            if (local_578 != (longlong *)0x0) {
              lVar37 = 0;
              do {
                if (*(longlong *)(local_570 + 8 + lVar37) == lVar29) {
                  uVar33 = (int)(lVar37 >> 3) * -0xf0f0f0f;
                  if ((int)uVar33 < iVar20 && -1 < (int)uVar33) {
                    local_578 = (longlong *)(ulonglong)(uVar33 & 0x7fffffff);
                    goto LAB_1440f70c5;
                  }
                  break;
                }
                lVar37 = lVar37 + 0x88;
              } while ((longlong)local_578 * 0x88 != lVar37);
            }
            *(uint *)(param_1 + 0x40) = iVar20 + 1U;
            if (*(uint *)(param_1 + 0x44) < iVar20 + 1U) {
              FUN_14662359e(puVar1,local_578);
              local_570 = *puVar1;
            }
            FUN_1418e1b2c((longlong)local_578 * 0x88 + local_570,local_520,lVar29);
            local_570 = *puVar1;
LAB_1440f70c5:
            if (lVar23 != 0) {
              uVar33 = *(uint *)(lVar23 + 0xc);
              local_540 = (longlong *)(ulonglong)uVar33;
              if ((int)uVar33 < DAT_14c9647dc) {
                lVar23 = (ulonglong)((uVar33 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8);
              }
              else {
                lVar23 = 0;
              }
              uVar24 = (ulonglong)*(uint *)(lVar23 + 0x10);
              if (*(uint *)(lVar23 + 0x10) == 0) {
                LOCK();
                iVar20 = DAT_14c964868 + 1;
                UNLOCK();
                uVar33 = DAT_14c964868 + 1;
                bVar40 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar20;
                if (bVar40) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar33);
                }
                LOCK();
                uVar19 = *(uint *)(lVar23 + 0x10);
                bVar40 = uVar19 == 0;
                if (bVar40) {
                  *(uint *)(lVar23 + 0x10) = uVar33;
                  uVar19 = 0;
                }
                UNLOCK();
                uVar24 = (ulonglong)uVar19;
                if (bVar40) {
                  uVar24 = (ulonglong)uVar33;
                }
              }
              lVar23 = local_570 + (longlong)local_578 * 0x88;
              local_578 = (longlong *)((longlong)local_578 * 0x88 + local_570 + 0x48);
              iVar20 = *(int *)(lVar23 + 0x50);
              *(uint *)(lVar23 + 0x50) = iVar20 + 1U;
              if (*(uint *)(lVar23 + 0x54) < iVar20 + 1U) {
                FUN_148d0a4d6(local_578,iVar20);
              }
              *(ulonglong *)(*local_578 + (longlong)iVar20 * 8) =
                   (uVar24 << 0x20) + (longlong)local_540;
            }
          }
        }
        local_4e0.QuadPart = FUN_140f6dc7c(*(undefined8 *)LVar26);
        auVar50._0_8_ = FUN_140f6dc2e(&local_4e0);
        auVar50._8_8_ = extraout_XMM0_Qb_03;
      } while ((undefined8 *)local_4e0.QuadPart != puVar31);
    }
    LOCK();
    *(int *)(plVar28 + 1) = (int)plVar28[1] + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_4d8 + 1) = (int)local_4d8[1] + -1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_3e0 + 1) = (int)plStack_3e0[1] + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_3f8 + 1) = (int)local_3f8[1] + -1;
    UNLOCK();
  }
  iVar20 = *(int *)(param_1 + 0x40);
  lVar23 = (longlong)iVar20;
  if (lVar23 < 1) {
LAB_1440f7295:
    if (iVar20 != 0) {
      local_578 = *(longlong **)(param_1 + 0x38);
      lVar23 = (longlong)iVar20;
      goto LAB_1440f72a3;
    }
  }
  else {
    if ((((*(longlong *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 0x54) != 0)) &&
        (uVar33 = *(uint *)(param_1 + 0x50), -1 < (int)uVar33)) &&
       ((((int)uVar33 < DAT_14c9647dc &&
         (plVar28 = (longlong *)
                    ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
         plVar28 != (longlong *)0x0)) &&
        (((int)plVar28[2] == *(int *)(param_1 + 0x54) &&
         (((*(uint *)(plVar28 + 1) & 0x10200000) == 0 && (lVar29 = *plVar28, lVar29 != 0)))))))) {
      local_3e8 = (undefined8 *)0x0;
      plStack_3e0 = (longlong *)0x0;
      local_3f8 = (longlong *)0x0;
      puStack_3f0 = (undefined1 *)0x0;
      local_408 = ZEXT816(0);
      uVar10 = CONCAT12(uStack_3d8._2_1_,0x100);
      uStack_3d8._0_4_ = (uint)(uVar10 & 0xe0ffff);
      uStack_3d8 = (undefined1 *)CONCAT44(8,(uint)uStack_3d8);
      local_3c8 = 0;
      local_3b8 = (longlong *)0x0;
      uVar22 = FUN_145bc5052();
      local_468 = (undefined8 *)0x0;
      plStack_460 = (longlong *)0x0;
      local_458 = ZEXT816(0x3ff0000000000000) << 0x40;
      local_448 = 0;
      uStack_440 = 0;
      local_438 = (longlong *)0x0;
      uStack_430 = 0;
      local_428 = 0x3ff0000000000000;
      uStack_420 = 0x3ff0000000000000;
      local_418 = 0x3ff0000000000000;
      uStack_410 = 0;
      lVar23 = FUN_141037e38(lVar29,uVar22,&local_468,local_408);
      auVar50._8_8_ = extraout_XMM0_Qb_04;
      auVar50._0_8_ = extraout_XMM0_Qa_02;
      if ((lVar23 != 0) && (DAT_14c950c29 != '\0')) {
        auVar50._0_8_ = FUN_1456cec3c(lVar23);
        auVar50._8_8_ = extraout_XMM0_Qb_06;
      }
      *(longlong *)(param_1 + 0x90) = lVar23;
      if (local_3c8 != 0) {
        plVar28 = local_3b8;
        if (local_3b8 == (longlong *)0x0) {
          plVar28 = local_3a8;
        }
        auVar50._0_8_ = (**(code **)(*plVar28 + 0x10))();
        auVar50._8_8_ = extraout_XMM0_Qb_05;
      }
      iVar20 = *(int *)(param_1 + 0x40);
      goto LAB_1440f7295;
    }
    local_578 = *(longlong **)(param_1 + 0x38);
LAB_1440f72a3:
    auVar49 = _DAT_1499387d0;
    local_528 = local_578 + lVar23 * 0x11;
    dVar5 = (double)DAT_1499387d0;
    dVar43 = DAT_1499387d0._8_8_;
    auVar50 = roundpd(auVar50,ZEXT816(0),3);
    dVar52 = (0.0 - auVar50._0_8_ * dVar5) * 0.008726646259971648;
    _X = (0.0 - auVar50._8_8_ * dVar43) * 0.008726646259971648;
    do {
      lVar23 = local_578[0xd];
      if (lVar23 == 0) {
        uVar22 = FUN_1402d1c56();
        lVar23 = FUN_14477b664(uVar22);
        local_578[0xd] = lVar23;
      }
      if (local_578[0xe] != 0) {
LAB_1440f7324:
        lVar23 = local_578[7];
        if ((((lVar23 != 0) && (*(char *)(lVar23 + 0x30) == '\0')) &&
            (*(char *)(lVar23 + 0x31) == '\0')) && (*(int *)(lVar23 + 0x6c) == 2)) {
          if ((longlong)(int)local_578[0x10] != 0) {
            lVar23 = (longlong)(int)local_578[0x10] * 0x60;
            do {
              FUN_1440f926a(local_578);
              lVar23 = lVar23 + -0x60;
            } while (lVar23 != 0);
          }
          *(undefined4 *)(local_578 + 0x10) = 0;
          if (*(int *)((longlong)local_578 + 0x84) < 0) {
            FUN_1401a2688(local_578 + 0xf);
          }
        }
        goto LAB_1440f8a15;
      }
      if ((lVar23 != 0) && (plVar28 = local_578 + 0xc, *plVar28 != 0)) {
        plVar30 = *(longlong **)(lVar23 + 0xb8);
        if ((plVar30 == (longlong *)0x0) ||
           (cVar16 = (**(code **)(*plVar30 + 0x108))(plVar30), cVar16 == '\0')) {
          local_578[0xe] = 0;
        }
        else {
          uVar22 = (**(code **)(*plVar30 + 0x110))(plVar30);
          lVar23 = FUN_144aff482(uVar22,plVar28);
          local_578[0xe] = lVar23;
          if (lVar23 != 0) goto LAB_1440f7324;
        }
      }
      plVar30 = local_578;
      plVar28 = local_578 + 3;
      if (local_578[3] == 0) {
        fVar42 = *(float *)(*local_578 + 0x68);
        if (*(float *)(local_578 + 2) <= fVar42) {
          fVar41 = (float)FUN_14085b07e(local_578[1] + 0x40);
          *(float *)(plVar30 + 2) = fVar42 + fVar41;
          cVar16 = FUN_140254caa(*plVar30);
          if ((((cVar16 != '\0') && (lVar23 = *local_578, *(char *)(lVar23 + 0x89) == '\0')) &&
              ((*(char *)(lVar23 + 0x8a) == '\0' &&
               ((*(char *)(lVar23 + 0x8b) == '\0' && (*(char *)(lVar23 + 0xc0) == '\0')))))) &&
             (((*(char *)((longlong)local_578 + 0x5c) != '\0' || ((int)local_578[10] != 0)) &&
              (((((lVar23 = local_578[7], lVar23 != 0 && (*(char *)(lVar23 + 0x30) == '\0')) &&
                 (*(char *)(lVar23 + 0x31) == '\0')) &&
                ((*(int *)(lVar23 + 0x6c) == 2 && (*(int *)(local_578[1] + 0x30) != 0)))) &&
               ((int)local_578[6] < *(int *)(local_578[1] + 0x48))))))) {
            lVar29 = FUN_1408710a5();
            plVar30 = local_578;
            lVar23 = *local_578;
            if ((longlong)*(int *)(lVar23 + 0x60) == 0) {
              iVar20 = 0;
            }
            else {
              lVar37 = 0;
              iVar20 = 0;
              do {
                iVar20 = iVar20 + *(int *)(*(longlong *)(lVar23 + 0x58) + 0x30 + lVar37);
                lVar37 = lVar37 + 0x88;
              } while ((longlong)*(int *)(lVar23 + 0x60) * 0x88 != lVar37);
            }
            if (iVar20 < *(int *)(lVar29 + 0x38)) {
              if ((*(int *)(lVar23 + 0x7c) == 0) ||
                 (uVar33 = *(uint *)(lVar23 + 0x78), (int)uVar33 < 0)) {
LAB_1440f8bab:
                lVar29 = 0;
              }
              else {
                lVar29 = 0;
                if ((int)uVar33 < DAT_14c9647dc) {
                  plVar25 = (longlong *)
                            ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8));
                  if (((plVar25 == (longlong *)0x0) || ((int)plVar25[2] != *(int *)(lVar23 + 0x7c)))
                     || ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)) goto LAB_1440f8bab;
                  lVar29 = *plVar25;
                }
              }
              lVar23 = FUN_1407a0dc0(local_578[1] + 0x50);
              iVar20 = *(int *)(*plVar30 + 0x74);
              if ((iVar20 == 0) || (uVar33 = *(uint *)(*plVar30 + 0x70), (int)uVar33 < 0)) {
LAB_1440f8bb2:
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                if ((int)uVar33 < DAT_14c9647dc) {
                  puVar31 = (undefined8 *)
                            ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8));
                  if (((puVar31 == (undefined8 *)0x0) || (*(int *)(puVar31 + 2) != iVar20)) ||
                     ((*(uint *)(puVar31 + 1) & 0x10200000) != 0)) goto LAB_1440f8bb2;
                  uVar22 = *puVar31;
                }
              }
              FUN_1409e0c66(local_408,uVar22);
              if ((longlong *)local_408._8_8_ != (longlong *)0x0) {
                iVar20 = (int)*(longlong *)(local_408._8_8_ + 8);
                do {
                  if (iVar20 == 0) {
                    plVar30 = (longlong *)0x0;
                    break;
                  }
                  LOCK();
                  iVar32 = (int)*(longlong *)(local_408._8_8_ + 8);
                  bVar40 = iVar20 == iVar32;
                  if (bVar40) {
                    *(int *)(local_408._8_8_ + 8) = iVar20 + 1;
                    iVar32 = iVar20;
                  }
                  iVar20 = iVar32;
                  UNLOCK();
                  plVar30 = (longlong *)local_408._8_8_;
                } while (!bVar40);
                LOCK();
                piVar2 = (int *)(local_408._8_8_ + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)local_408._8_8_ + 0x10))();
                }
                plVar25 = local_578;
                if (plVar30 == (longlong *)0x0) goto LAB_1440f8a15;
                if (((lVar29 != 0) && (lVar23 != 0)) &&
                   (uVar22 = local_408._0_8_, local_408._0_8_ != 0)) {
                  if ((int)local_578[0xb] == -1) {
                    uVar21 = FUN_140f4e490(local_578[1]);
                    *(undefined4 *)(plVar25 + 0xb) = uVar21;
                  }
                  FUN_140bc281a(local_408,lVar23);
                  local_5c8 = local_5c8 & 0xffffffffffffff00;
                  FUN_140a41f04(uVar22,&local_468,lVar29,local_408);
                  plVar25 = plStack_460;
                  if (plVar28 == &local_468) {
LAB_1440f8c94:
                    plVar28 = plStack_460;
                    if (plStack_460 != (longlong *)0x0) {
                      LOCK();
                      plVar25 = plStack_460 + 1;
                      *(int *)plVar25 = (int)*plVar25 + -1;
                      UNLOCK();
                      if ((int)*plVar25 == 0) {
                        (**(code **)*plStack_460)(plStack_460);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar28 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar28 + 0x10))(plVar28);
                        }
                      }
                    }
                  }
                  else {
                    local_578[3] = (longlong)local_468;
                    local_468 = (undefined8 *)0x0;
                    plVar28 = (longlong *)local_578[4];
                    if (plStack_460 == plVar28) goto LAB_1440f8c94;
                    plStack_460 = (longlong *)0x0;
                    local_578[4] = (longlong)plVar25;
                    if (plVar28 != (longlong *)0x0) {
                      LOCK();
                      plVar25 = plVar28 + 1;
                      *(int *)plVar25 = (int)*plVar25 + -1;
                      UNLOCK();
                      if ((int)*plVar25 == 0) {
                        (**(code **)*plVar28)(plVar28);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar28 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar28 + 0x10))(plVar28);
                        }
                      }
                      goto LAB_1440f8c94;
                    }
                  }
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = local_408._8_8_;
                  local_408 = auVar12 << 0x40;
                  FUN_14076ba36(local_408 + 8);
                }
                LOCK();
                plVar28 = plVar30 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 != 0) goto LAB_1440f8a15;
                (**(code **)*plVar30)(plVar30);
                LOCK();
                piVar2 = (int *)((longlong)plVar30 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 != 0) goto LAB_1440f8a15;
                lVar23 = *plVar30;
LAB_1440f8d0c:
                (**(code **)(lVar23 + 0x10))(plVar30);
              }
            }
          }
        }
      }
      else if (0.0 < *(float *)(local_578[3] + 0x178)) {
        iVar20 = *(int *)(*local_578 + 0x74);
        if ((((iVar20 != 0) && (uVar33 = *(uint *)(*local_578 + 0x70), -1 < (int)uVar33)) &&
            ((((int)uVar33 < DAT_14c9647dc &&
              ((plVar30 = (longlong *)
                          ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
               plVar30 != (longlong *)0x0 && ((int)plVar30[2] == iVar20)))) &&
             ((*(uint *)(plVar30 + 1) & 0x10200000) == 0)))) &&
           ((local_518 = *plVar30, local_518 != 0 && ((*(byte *)(local_518 + 0x155) & 0x20) == 0))))
        {
          fVar42 = (float)FUN_14085b07e(local_578[1] + 0x38);
          uVar21 = DAT_14cb1c840;
          if (DAT_14c9a7d10 == (undefined8 *)0x0) {
            DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
            *DAT_14c9a7d10 = 0;
            DAT_14c9a7d10[1] = 0;
            DAT_14c9a7d10[2] = 0;
            DAT_14c9a7d10[3] = 0;
          }
          uVar22 = FUN_14005915a(DAT_14c9a7d10,local_408,uVar21);
          local_530.QuadPart = local_408._0_8_;
          if (local_408._0_8_ == 0) {
            plVar30 = (longlong *)0x0;
LAB_1440f7560:
            uVar15 = local_408._8_8_;
            if ((longlong *)local_408._8_8_ != (longlong *)0x0) {
              LOCK();
              plVar25 = (longlong *)(local_408._8_8_ + 8);
              *(int *)plVar25 = (int)*plVar25 + -1;
              UNLOCK();
              if ((int)*plVar25 == 0) {
                uVar22 = (*(code *)**(undefined8 **)local_408._8_8_)(local_408._8_8_);
                LOCK();
                piVar2 = (int *)(uVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  uVar22 = (**(code **)(*(longlong *)uVar15 + 0x10))(uVar15);
                }
              }
            }
            local_54c = (undefined4)CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
            if (plVar30 == (longlong *)0x0) goto LAB_1440f8b7a;
            iVar20 = (int)plVar30[1];
            do {
              if (iVar20 == 0) {
                local_558 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar32 = (int)plVar30[1];
              bVar40 = iVar20 == iVar32;
              if (bVar40) {
                *(int *)(plVar30 + 1) = iVar20 + 1;
                iVar32 = iVar20;
              }
              iVar20 = iVar32;
              UNLOCK();
              local_558 = plVar30;
            } while (!bVar40);
            LOCK();
            piVar2 = (int *)((longlong)plVar30 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
            if (local_558 == (longlong *)0x0) goto LAB_1440f8b7a;
            local_54c = 0;
          }
          else {
            plVar30 = (longlong *)local_408._8_8_;
            if ((longlong *)local_408._8_8_ != (longlong *)0x0) {
              LOCK();
              *(int *)(local_408._8_8_ + 8) = (int)*(longlong *)(local_408._8_8_ + 8) + 1;
              UNLOCK();
              LOCK();
              *(int *)(local_408._8_8_ + 0xc) = *(int *)(local_408._8_8_ + 0xc) + 1;
              UNLOCK();
              LOCK();
              plVar25 = (longlong *)(local_408._8_8_ + 8);
              *(int *)plVar25 = (int)*plVar25 + -1;
              UNLOCK();
              if ((int)*plVar25 == 0) {
                uVar22 = (*(code *)**(undefined8 **)local_408._8_8_)(local_408._8_8_);
                LOCK();
                piVar2 = (int *)((longlong)plVar30 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  uVar22 = (**(code **)(*plVar30 + 0x10))(plVar30);
                }
              }
              goto LAB_1440f7560;
            }
            local_54c = (undefined4)CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
LAB_1440f8b7a:
            local_558 = (longlong *)0x0;
            local_530.QuadPart = 0;
          }
          lVar23 = *plVar28;
          local_568 = (undefined1 (*) [16])(lVar23 + 0x4f8);
          if (*(undefined1 (**) [16])(lVar23 + 0x878) != (undefined1 (*) [16])0x0) {
            local_568 = *(undefined1 (**) [16])(lVar23 + 0x878);
          }
          if ((longlong)*(int *)(lVar23 + 0x880) != 0) {
            local_50c = (int)ROUND(fVar42 + fVar42 + 0.5) >> 1;
            local_4f8 = (undefined1 (*) [16])
                        ((longlong)*(int *)(lVar23 + 0x880) * 0x38 + (longlong)local_568);
            local_508 = local_578 + 5;
            local_534 = 0;
            do {
              if ((local_568[3][4] & 1) == 0) {
                if (local_568[2][0] == '\x04') {
                  local_4b8 = *(longlong **)local_568[1];
                  local_4c8 = *local_568;
                }
                else {
                  FUN_1400b56fe(local_408,local_568,4);
                  uVar24 = (ulonglong)local_3e8 & 0xff;
                  if (uVar24 != 0) {
                    local_4b8 = local_3f8;
                    local_4c8 = local_408;
                  }
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                                     (ulonglong)((uint)(byte)local_3e8 * 0x120));
                  if (pcVar3 != (code *)0x0) {
                    LVar26.QuadPart = (LONGLONG)local_408;
                    if (0x18 < (ushort)puStack_3f0) {
                      LVar26 = (LARGE_INTEGER)local_408._0_8_;
                    }
                    (*pcVar3)(LVar26.QuadPart);
                  }
                  if (0x18 < (ushort)puStack_3f0) {
                    FUN_1400020a8(local_408._0_8_);
                  }
                  if (uVar24 == 0) goto LAB_1440f8343;
                }
                puVar27 = (undefined1 *)local_578[1];
                local_4d0 = (undefined1 *)0x0;
                uVar22 = FUN_1415289f2();
                lVar23 = FUN_14477b664(uVar22);
                local_4d8 = (longlong *)lVar23;
                lVar29 = FUN_1415289f2();
                uVar22 = FUN_1415289f2();
                FUN_1402d1bfa(local_408,uVar22,puVar27);
                if ((undefined8 *)local_408._0_8_ != (undefined8 *)0x0) {
                  local_4d0 = (undefined1 *)0x0;
                }
                local_4e0.QuadPart = local_408._0_8_;
                lVar37 = FUN_1415289f2();
                if (lVar29 == 0) {
LAB_1440f77ae:
                  lVar37 = lVar29;
                }
                else if (lVar37 == 0) {
                  lVar37 = 0;
                }
                else if ((*(int *)(lVar37 + 0x38) <= *(int *)(lVar29 + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(lVar29 + 0x30) + (longlong)*(int *)(lVar37 + 0x38) * 8) ==
                         lVar37 + 0x30)) goto LAB_1440f77ae;
                if (lVar23 != lVar37) {
                  local_4d0 = (undefined1 *)0x0;
                }
                uVar22 = FUN_14477b664(lVar37);
                local_4d8 = (longlong *)FUN_14477b664(uVar22);
                if ((local_4d8 != (longlong *)0x0) &&
                   ((undefined8 *)local_4e0.QuadPart != (undefined8 *)0x0)) {
                  local_4d0 = puVar27;
                }
                local_468 = (undefined8 *)local_518;
                FUN_1402d2668(local_408);
                plVar28 = plStack_3e0;
                puVar31 = local_3e8;
                local_468 = (undefined8 *)local_408._8_8_;
                plStack_460 = local_3f8;
                LOCK();
                *(int *)(local_3f8 + 1) = (int)local_3f8[1] + 1;
                UNLOCK();
                local_458._0_8_ = puStack_3f0;
                LOCK();
                *(int *)(plStack_3e0 + 1) = (int)plStack_3e0[1] + 1;
                UNLOCK();
                if ((undefined8 *)local_408._8_8_ == local_3e8) {
                  bVar40 = false;
                }
                else {
                  do {
                    puVar14 = local_468;
                    lVar23 = local_468[2];
                    dVar53 = *(double *)(lVar23 + 0x260) - (double)local_4c8._0_8_;
                    dVar51 = *(double *)(lVar23 + 0x268) - (double)local_4c8._8_8_;
                    dVar44 = *(double *)(lVar23 + 0x270) - (double)local_4b8;
                    if (((float)(dVar44 * dVar44 + dVar51 * dVar51 + dVar53 * dVar53) <=
                         *(float *)(lVar23 + 0x640) * *(float *)(lVar23 + 0x640)) &&
                       ((bVar40 = true, *(int *)(lVar23 + 0x650) == 0 ||
                        (cVar16 = FUN_148d08770(lVar23 + 0x648), cVar16 != '\0')))) break;
                    local_468 = (undefined8 *)FUN_1402d1d46(*puVar14);
                    FUN_1402d26f2(&local_468);
                    bVar40 = false;
                  } while (local_468 != puVar31);
                }
                LOCK();
                *(int *)(plVar28 + 1) = (int)plVar28[1] + -1;
                UNLOCK();
                LOCK();
                *(int *)(plStack_460 + 1) = (int)plStack_460[1] + -1;
                UNLOCK();
                LOCK();
                *(int *)(plStack_3e0 + 1) = (int)plStack_3e0[1] + -1;
                UNLOCK();
                LOCK();
                *(int *)(local_3f8 + 1) = (int)local_3f8[1] + -1;
                UNLOCK();
                if (!bVar40) {
                  if ((longlong)(int)local_578[10] != 0) {
                    lVar23 = 0;
                    do {
                      iVar20 = *(int *)(local_578[9] + 4 + lVar23);
                      if ((((((iVar20 != 0) &&
                             (uVar33 = *(uint *)(local_578[9] + lVar23), -1 < (int)uVar33)) &&
                            ((int)uVar33 < DAT_14c9647dc)) &&
                           ((plVar28 = (longlong *)
                                       ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8)),
                            plVar28 != (longlong *)0x0 && ((int)plVar28[2] == iVar20)))) &&
                          ((*(uint *)(plVar28 + 1) & 0x10200000) == 0)) &&
                         ((lVar29 = *plVar28, lVar29 != 0 &&
                          (dVar53 = (double)local_4c8._0_8_ - *(double *)(lVar29 + 0x260),
                          dVar51 = (double)local_4c8._8_8_ - *(double *)(lVar29 + 0x268),
                          dVar44 = (double)local_4b8 - *(double *)(lVar29 + 0x270),
                          (float)(dVar44 * dVar44 + dVar51 * dVar51 + dVar53 * dVar53) <
                          *(float *)(lVar29 + 0x620) * *(float *)(lVar29 + 0x620)))))
                      goto LAB_1440f7a77;
                      lVar23 = lVar23 + 8;
                    } while ((longlong)(int)local_578[10] * 8 != lVar23);
                  }
                  if (*(char *)((longlong)local_578 + 0x5c) == '\x01') {
                    FUN_14435e49e(local_408);
                    lVar23 = local_408._8_8_;
                    if (local_408._8_8_ == 0) {
                      uVar22 = FUN_1415289f2();
                      lVar23 = FUN_14477b664(uVar22);
                      local_408._8_8_ = lVar23;
                    }
                    plVar28 = local_3f8;
                    if (local_3f8 == (longlong *)0x0) {
                      if (lVar23 == 0) {
LAB_1440f8386:
                        plVar28 = (longlong *)0x0;
                      }
                      else {
                        plVar28 = (longlong *)0x0;
                        if (local_408._0_8_ != 0) {
                          plVar28 = *(longlong **)(lVar23 + 0xb8);
                          if ((plVar28 == (longlong *)0x0) ||
                             (cVar16 = (**(code **)(*plVar28 + 0x108))(), cVar16 == '\0'))
                          goto LAB_1440f8386;
                          uVar22 = (**(code **)(*plVar28 + 0x110))(plVar28);
                          plVar28 = (longlong *)FUN_144aff482(uVar22);
                        }
                      }
                    }
                    if ((longlong *)local_578[1] == plVar28) {
LAB_1440f7a77:
                      if ((int)local_578[0xb] == 0) {
                        local_570 = local_570 & 0xffffffff00000000;
                      }
                      else {
                        local_408._0_12_ = ZEXT812(0xffffffffffffffff);
                        local_3e8 = DAT_14cbc5fe8;
                        local_3f8 = _DAT_14cbc5fd8;
                        puStack_3f0 = _DAT_14cbc5fe0;
                        local_3d0 = DAT_14cbc5fe8;
                        plStack_3e0 = _DAT_14cbc5fd8;
                        uStack_3d8 = _DAT_14cbc5fe0;
                        local_3c8 = 0;
                        plStack_3c0 = (longlong *)0x0;
                        local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,0xffffffff);
                        cVar16 = FUN_14024b1e0(local_568);
                        if (cVar16 == '\0') {
                          local_570 = local_570 & 0xffffffff00000000;
                          cVar16 = '\0';
                        }
                        else {
                          FUN_143815780(&local_468);
                          if (local_468._4_1_ == '\x01') {
                            uVar33 = (uint)local_468 & 0xff;
                            if ((char)local_468 == '\0') {
                              uVar33 = 0x80000000;
                            }
                            local_570 = CONCAT44(local_570._4_4_,uVar33);
                            cVar16 = ((*(uint *)(local_578 + 0xb) & uVar33) == 0) * '\x03';
                          }
                          else {
                            cVar16 = '\0';
                            local_570 = (ulonglong)local_570._4_4_ << 0x20;
                          }
                        }
                        plVar28 = plStack_3c0;
                        if (plStack_3c0 != (longlong *)0x0) {
                          LOCK();
                          plVar30 = plStack_3c0 + 1;
                          *(int *)plVar30 = (int)*plVar30 + -1;
                          UNLOCK();
                          if ((int)*plVar30 == 0) {
                            (**(code **)*plStack_3c0)(plStack_3c0);
                            LOCK();
                            piVar2 = (int *)((longlong)plVar28 + 0xc);
                            *piVar2 = *piVar2 + -1;
                            UNLOCK();
                            if (*piVar2 == 0) {
                              (**(code **)(*plVar28 + 0x10))(plVar28);
                            }
                          }
                        }
                        if (cVar16 != '\0') {
                          if (cVar16 == '\x03') goto LAB_1440f8343;
                          break;
                        }
                      }
                      lVar23 = *local_578;
                      local_4f0 = *(longlong *)(lVar23 + 0xb0);
                      if (local_4f0 != 0) {
                        local_108 = (undefined1 *)0x0;
                        local_100 = 0x2000000000;
                        lVar29 = local_578[1];
                        if (*(int *)(lVar29 + 0x30) == 0) {
LAB_1440f8674:
                          bVar40 = false;
                        }
                        else {
                          if ((*(int *)(lVar23 + 0x74) == 0) ||
                             (uVar33 = *(uint *)(lVar23 + 0x70), (int)uVar33 < 0)) {
LAB_1440f83a0:
                            uVar22 = 0;
                          }
                          else {
                            uVar22 = 0;
                            if ((int)uVar33 < DAT_14c9647dc) {
                              puVar31 = (undefined8 *)
                                        ((ulonglong)((uVar33 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar33 >> 0x10) * 8));
                              if (((puVar31 == (undefined8 *)0x0) ||
                                  (*(int *)(puVar31 + 2) != *(int *)(lVar23 + 0x74))) ||
                                 ((*(uint *)(puVar31 + 1) & 0x10200000) != 0)) goto LAB_1440f83a0;
                              uVar22 = *puVar31;
                            }
                          }
                          uVar24 = FUN_1408b794c(&local_468,uVar22);
                          local_560 = plStack_460;
                          if (plStack_460 == (longlong *)0x0) {
LAB_1440f855d:
                            local_548 = CONCAT71((int7)(uVar24 >> 8),1);
                            local_560 = (longlong *)0x0;
LAB_1440f8581:
                            plVar28 = (longlong *)0x0;
                          }
                          else {
                            uVar24 = (ulonglong)*(uint *)(plStack_460 + 1);
                            do {
                              uVar33 = (uint)uVar24;
                              if (uVar33 == 0) {
                                local_560 = (longlong *)0x0;
                                break;
                              }
                              LOCK();
                              uVar19 = *(uint *)(plStack_460 + 1);
                              if (uVar33 == uVar19) {
                                *(uint *)(plStack_460 + 1) = uVar33 + 1;
                              }
                              else {
                                uVar24 = (ulonglong)uVar19;
                              }
                              UNLOCK();
                            } while (uVar33 != uVar19);
                            LOCK();
                            piVar2 = (int *)((longlong)plStack_460 + 0xc);
                            *piVar2 = *piVar2 + -1;
                            UNLOCK();
                            if (*piVar2 == 0) {
                              uVar24 = (**(code **)(*plStack_460 + 0x10))();
                            }
                            if (local_560 == (longlong *)0x0) goto LAB_1440f855d;
                            if (local_468 == (undefined8 *)0x0) {
LAB_1440f8575:
                              local_548 = 0;
                              goto LAB_1440f8581;
                            }
                            lVar23 = FUN_144a2b138(local_468,local_4c8);
                            if (lVar23 == 0) {
                              uVar21 = 0x3860a972;
                              local_468 = (undefined8 *)0x0;
                            }
                            else {
                              local_468 = *(undefined8 **)(lVar23 + 0x3c8);
                              uVar21 = *(undefined4 *)(lVar23 + 0x3d0);
                            }
                            plStack_460 = (longlong *)CONCAT44(plStack_460._4_4_,uVar21);
                            auVar11._8_8_ = 0;
                            auVar11._0_8_ = local_458._8_8_;
                            local_458 = auVar11 << 0x40;
                            plVar28 = (longlong *)FUN_140944864(&local_468);
                            if (plVar28 == (longlong *)0x0) goto LAB_1440f8575;
                            lVar23 = (**(code **)(*plVar28 + 8))(plVar28);
                            lVar37 = FUN_14086ad12();
                            if ((lVar37 == 0) || (*(int *)(lVar23 + 0x38) < *(int *)(lVar37 + 0x38))
                               ) goto LAB_1440f8575;
                            local_548 = 0;
                            if (*(longlong *)
                                 (*(longlong *)(lVar23 + 0x30) +
                                 (longlong)*(int *)(lVar37 + 0x38) * 8) != lVar37 + 0x30) {
                              plVar28 = (longlong *)0x0;
                            }
                          }
                          iVar20 = *(int *)(lVar29 + 0x30);
                          if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_1456afac4(iVar20);
                          }
                          if ((int)local_100._4_4_ < iVar20) {
                            FUN_148d0d0ea(local_408);
                            iVar20 = *(int *)(lVar29 + 0x30);
                          }
                          if (iVar20 != 0) {
                            plVar30 = *(longlong **)(lVar29 + 0x28);
                            local_540 = plVar30 + (longlong)iVar20 * 3;
                            do {
                              lVar23 = plVar30[1];
                              if (lVar23 == 0) {
                                uVar22 = FUN_1402d1c56();
                                lVar23 = FUN_14477b664(uVar22);
                                plVar30[1] = lVar23;
                              }
                              plVar25 = (longlong *)plVar30[2];
                              if (plVar25 == (longlong *)0x0) {
                                if ((lVar23 != 0) && (*plVar30 != 0)) {
                                  plVar25 = *(longlong **)(lVar23 + 0xb8);
                                  if ((plVar25 == (longlong *)0x0) ||
                                     (cVar16 = (**(code **)(*plVar25 + 0x108))(plVar25),
                                     cVar16 == '\0')) {
                                    plVar30[2] = 0;
                                  }
                                  else {
                                    uVar22 = (**(code **)(*plVar25 + 0x110))(plVar25);
                                    plVar25 = (longlong *)FUN_144aff482(uVar22);
                                    plVar30[2] = (longlong)plVar25;
                                    if (plVar25 != (longlong *)0x0) goto LAB_1440f7d8b;
                                  }
                                }
                              }
                              else {
LAB_1440f7d8b:
                                if ((((uint)local_570 == 0) ||
                                    (uVar33 = FUN_140f4e58e(plVar25), uVar33 == 0)) ||
                                   ((uVar33 & (uint)local_570) != 0)) {
                                  if ((plVar28 == (longlong *)0x0) ||
                                     ((longlong)(int)plVar25[4] < 1)) {
LAB_1440f7ea0:
                                    cVar16 = (**(code **)(*plVar25 + 0x20))(plVar25);
                                    if (cVar16 != '\0') {
                                      uVar22 = FUN_1402d1c56();
                                      FUN_14477b664(uVar22);
                                      lVar29 = FUN_1402d1c56();
                                      uVar22 = FUN_1402d1c56();
                                      FUN_1402d1bfa(&local_468,uVar22,plVar25);
                                      puVar31 = local_468;
                                      lVar23 = FUN_1402d1c56();
                                      if (lVar29 == 0) {
LAB_1440f7f16:
                                        lVar23 = lVar29;
                                      }
                                      else if (lVar23 == 0) {
                                        lVar23 = 0;
                                      }
                                      else if ((*(int *)(lVar23 + 0x38) <= *(int *)(lVar29 + 0x38))
                                              && (*(longlong *)
                                                   (*(longlong *)(lVar29 + 0x30) +
                                                   (longlong)*(int *)(lVar23 + 0x38) * 8) ==
                                                  lVar23 + 0x30)) goto LAB_1440f7f16;
                                      uVar22 = FUN_14477b664(lVar23);
                                      lVar23 = FUN_14477b664(uVar22);
                                      if (lVar23 == 0) {
                                        plVar25 = (longlong *)0x0;
                                      }
                                      if (puVar31 == (undefined8 *)0x0) {
                                        plVar25 = (longlong *)0x0;
                                      }
                                      lVar29 = (longlong)(int)local_100;
                                      uVar33 = (int)local_100 + 1;
                                      local_100 = CONCAT44(local_100._4_4_,uVar33);
                                      if (local_100._4_4_ < uVar33) {
                                        FUN_148d0d1f8(local_408);
                                      }
                                      puVar27 = local_108;
                                      if (local_108 == (undefined1 *)0x0) {
                                        puVar27 = local_408;
                                      }
                                      *(undefined8 *)(puVar27 + lVar29 * 0x18 + 8) = 0;
                                      *(undefined8 *)((longlong)(puVar27 + lVar29 * 0x18 + 8) + 8) =
                                           0;
                                      *(undefined8 **)(puVar27 + lVar29 * 0x18) = puVar31;
                                      uVar22 = FUN_14477b664(lVar23);
                                      uVar22 = FUN_14477b664(uVar22);
                                      *(undefined8 *)(puVar27 + lVar29 * 0x18 + 8) = uVar22;
                                      *(longlong **)(puVar27 + lVar29 * 0x18 + 0x10) = plVar25;
                                    }
                                  }
                                  else {
                                    plVar36 = (longlong *)plVar25[3];
                                    lVar23 = (longlong)(int)plVar25[4] * 0x18;
                                    do {
                                      lVar29 = plVar36[1];
                                      if (lVar29 == 0) {
                                        uVar22 = FUN_14086ad12();
                                        lVar29 = FUN_14477b664(uVar22);
                                        plVar36[1] = lVar29;
                                      }
                                      lVar37 = plVar36[2];
                                      if (lVar37 == 0) {
                                        if ((lVar29 != 0) && (*plVar36 != 0)) {
                                          plVar4 = *(longlong **)(lVar29 + 0xb8);
                                          if ((plVar4 == (longlong *)0x0) ||
                                             (cVar16 = (**(code **)(*plVar4 + 0x108))(plVar4),
                                             cVar16 == '\0')) {
                                            plVar36[2] = 0;
                                          }
                                          else {
                                            uVar22 = (**(code **)(*plVar4 + 0x110))(plVar4);
                                            lVar37 = FUN_144aff482(uVar22);
                                            plVar36[2] = lVar37;
                                            if (lVar37 != 0) goto LAB_1440f7dea;
                                          }
                                        }
                                      }
                                      else {
LAB_1440f7dea:
                                        cVar16 = FUN_1418b44a2(plVar28);
                                        if ((cVar16 != '\0') ||
                                           (cVar16 = FUN_1418b44a2(lVar37), cVar16 != '\0')) {
                                          if (plVar36 != (longlong *)0x0) goto LAB_1440f7ea0;
                                          break;
                                        }
                                      }
                                      plVar36 = plVar36 + 3;
                                      lVar23 = lVar23 + -0x18;
                                    } while (lVar23 != 0);
                                  }
                                }
                              }
                              plVar30 = plVar30 + 3;
                            } while (plVar30 != local_540);
                          }
                          plVar28 = local_560;
                          iVar20 = (int)local_100;
                          if ((char)local_548 == '\0') {
                            LOCK();
                            plVar30 = local_560 + 1;
                            *(int *)plVar30 = (int)*plVar30 + -1;
                            UNLOCK();
                            if ((int)*plVar30 == 0) {
                              (**(code **)*local_560)(local_560);
                              LOCK();
                              piVar2 = (int *)((longlong)plVar28 + 0xc);
                              *piVar2 = *piVar2 + -1;
                              UNLOCK();
                              if (*piVar2 == 0) {
                                (**(code **)(*local_560 + 0x10))();
                              }
                            }
                          }
                          if (iVar20 == 0) goto LAB_1440f8674;
                          iVar20 = (int)local_100;
                          if ((int)local_100 < 1) {
                            lVar23 = 0;
                          }
                          else {
                            iVar32 = (int)local_100 + -1;
                            uVar33 = rand();
                            iVar20 = (int)((float)iVar20 * ((float)(uVar33 & 0x7fff) / 32767.0));
                            if (iVar20 < iVar32) {
                              iVar32 = iVar20;
                            }
                            lVar23 = (longlong)iVar32;
                          }
                          puVar27 = local_108;
                          if (local_108 == (undefined1 *)0x0) {
                            puVar27 = local_408;
                          }
                          plVar28 = (longlong *)(puVar27 + lVar23 * 0x18);
                          lVar23 = plVar28[1];
                          if (lVar23 == 0) {
                            uVar22 = FUN_1402d1c56();
                            lVar23 = FUN_14477b664(uVar22);
                            plVar28[1] = lVar23;
                          }
                          plVar30 = (longlong *)plVar28[2];
                          if (plVar30 == (longlong *)0x0) {
                            bVar40 = false;
                            if ((lVar23 != 0) && (*plVar28 != 0)) {
                              plVar30 = *(longlong **)(lVar23 + 0xb8);
                              if ((plVar30 == (longlong *)0x0) ||
                                 (cVar16 = (**(code **)(*plVar30 + 0x108))(plVar30), cVar16 == '\0')
                                 ) {
                                plVar28[2] = 0;
                              }
                              else {
                                uVar22 = (**(code **)(*plVar30 + 0x110))(plVar30);
                                plVar30 = (longlong *)FUN_144aff482(uVar22);
                                plVar28[2] = (longlong)plVar30;
                                if (plVar30 != (longlong *)0x0) goto LAB_1440f80e0;
                              }
                              goto LAB_1440f8674;
                            }
                          }
                          else {
LAB_1440f80e0:
                            uVar33 = rand();
                            dVar44 = (double)(((float)(uVar33 & 0x7fff) / 32767.0) * 360.0);
                            uVar24 = local_578[1];
                            auVar7._8_8_ = 0;
                            auVar7._0_8_ = dVar44;
                            auVar50 = divpd(auVar7 << 0x40,auVar49);
                            auVar50 = roundpd(auVar50,auVar50,3);
                            dVar53 = (0.0 - auVar50._0_8_ * dVar5) * 0.008726646259971648;
                            dVar44 = (dVar44 - auVar50._8_8_ * dVar43) * 0.008726646259971648;
                            dVar51 = sin(dVar53);
                            dVar45 = sin(dVar44);
                            dVar46 = sin(dVar52);
                            sin(_X);
                            dVar47 = cos(dVar53);
                            dVar44 = cos(dVar44);
                            dVar48 = cos(dVar52);
                            cos(_X);
                            dVar53 = dVar45 * dVar51 * dVar46 + dVar44 * dVar47 * dVar48;
                            local_468 = (undefined8 *)
                                        (dVar51 * dVar45 * dVar48 - dVar47 * dVar44 * dVar46);
                            plStack_460 = (longlong *)
                                          (-(dVar51 * dVar44 * dVar48) - dVar47 * dVar45 * dVar46);
                            local_458._8_4_ = SUB84(dVar53,0);
                            local_458._0_8_ = -(dVar44 * dVar51 * dVar46) + dVar45 * dVar47 * dVar48
                            ;
                            local_458._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
                            local_448 = local_4c8._0_8_;
                            uStack_440 = local_4c8._8_8_;
                            local_438 = local_4b8;
                            uStack_430 = 0;
                            local_428 = 0x3ff0000000000000;
                            uStack_420 = 0x3ff0000000000000;
                            local_418 = 0x3ff0000000000000;
                            uStack_410 = 0;
                            local_5c8 = uVar24;
                            (**(code **)(*plVar30 + 0x18))(plVar30,&local_4e0,&local_468);
                            bVar40 = (undefined8 *)local_4e0.QuadPart != (undefined8 *)0x0;
                            if (bVar40) {
                              lVar23 = local_578[6];
                              uVar33 = (int)lVar23 + 1;
                              *(uint *)(local_578 + 6) = uVar33;
                              if (*(uint *)((longlong)local_578 + 0x34) < uVar33) {
                                FUN_1466238e2(local_508);
                              }
                              lVar29 = *local_508;
                              lVar23 = (longlong)(int)lVar23 * 0x10;
                              ((LARGE_INTEGER *)(lVar29 + lVar23))->QuadPart = (LONGLONG)local_4e0;
                              *(longlong **)(lVar29 + 8 + lVar23) = local_4d8;
                              if (local_4d8 != (longlong *)0x0) {
                                LOCK();
                                *(int *)(local_4d8 + 1) = (int)local_4d8[1] + 1;
                                UNLOCK();
                              }
                            }
                            plVar28 = local_4d8;
                            if (local_4d8 != (longlong *)0x0) {
                              LOCK();
                              plVar30 = local_4d8 + 1;
                              *(int *)plVar30 = (int)*plVar30 + -1;
                              UNLOCK();
                              if ((int)*plVar30 == 0) {
                                (**(code **)*local_4d8)(local_4d8);
                                LOCK();
                                piVar2 = (int *)((longlong)plVar28 + 0xc);
                                *piVar2 = *piVar2 + -1;
                                UNLOCK();
                                if (*piVar2 == 0) {
                                  (**(code **)(*plVar28 + 0x10))(plVar28);
                                }
                              }
                            }
                          }
                        }
                        if (local_108 != (undefined1 *)0x0) {
                          FUN_1400020a8();
                        }
                        if ((bVar40) &&
                           ((local_534 = local_534 + 1, local_50c <= local_534 ||
                            (*(int *)(local_578[1] + 0x48) <= (int)local_578[6])))) break;
                      }
                    }
                  }
                }
              }
LAB_1440f8343:
              local_568 = (undefined1 (*) [16])(local_568[3] + 8);
            } while (local_568 != local_4f8);
          }
          local_578[3] = 0;
          plVar28 = (longlong *)local_578[4];
          if (plVar28 != (longlong *)0x0) {
            local_578[4] = 0;
            LOCK();
            plVar30 = plVar28 + 1;
            *(int *)plVar30 = (int)*plVar30 + -1;
            UNLOCK();
            if ((int)*plVar30 == 0) {
              (**(code **)*plVar28)(plVar28);
              LOCK();
              piVar2 = (int *)((longlong)plVar28 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
              }
            }
          }
          plVar28 = local_558;
          if ((char)local_54c == '\0') {
            LOCK();
            plVar30 = local_558 + 1;
            *(int *)plVar30 = (int)*plVar30 + -1;
            UNLOCK();
            if ((int)*plVar30 == 0) {
              (**(code **)*local_558)(local_558);
              LOCK();
              piVar2 = (int *)((longlong)plVar28 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                lVar23 = *local_558;
                plVar30 = local_558;
                goto LAB_1440f8d0c;
              }
            }
          }
        }
      }
LAB_1440f8a15:
      lVar23 = *local_578;
      if (*(char *)(lVar23 + 0xa8) == '\x01') {
        local_3f8 = *(longlong **)(lVar23 + 0xa0);
        local_408 = *(undefined1 (*) [16])(lVar23 + 0x90);
        if (0 < (int)local_578[6]) {
          plVar28 = local_578 + 5;
          uVar24 = 0;
          do {
            uVar33 = (uint)uVar24;
            lVar23 = *local_578;
            puVar31 = (undefined8 *)(uVar24 * 0x10 + local_578[5]);
            if (*(char *)(lVar23 + 0x88) == '\x01') {
              (**(code **)(*(longlong *)*puVar31 + 0x28))();
              lVar23 = *local_578;
            }
            (**(code **)(*(longlong *)*puVar31 + 0x10))
                      ((longlong *)*puVar31,lVar23,*(undefined4 *)(lVar23 + 0x6c),local_408);
            cVar16 = (**(code **)(*(longlong *)*puVar31 + 0x20))();
            if (cVar16 != '\0') {
              lVar23 = *plVar28;
              plVar30 = *(longlong **)(lVar23 + 8 + (longlong)(int)uVar33 * 0x10);
              if (plVar30 != (longlong *)0x0) {
                LOCK();
                plVar25 = plVar30 + 1;
                *(int *)plVar25 = (int)*plVar25 + -1;
                UNLOCK();
                if ((int)*plVar25 == 0) {
                  (**(code **)*plVar30)(plVar30);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar30 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar30 + 0x10))(plVar30);
                  }
                }
              }
              iVar20 = (int)local_578[6];
              if (~uVar33 + iVar20 != 0) {
                _Dst = (void *)(lVar23 + (longlong)(int)uVar33 * 0x10);
                memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar33 + iVar20) << 4)
                ;
                iVar20 = (int)local_578[6];
              }
              *(int *)(local_578 + 6) = iVar20 + -1;
              FUN_1418e2270(plVar28);
              uVar33 = uVar33 - 1;
            }
            uVar24 = (ulonglong)(uVar33 + 1);
          } while ((int)(uVar33 + 1) < (int)local_578[6]);
        }
      }
      local_578 = local_578 + 0x11;
    } while (local_578 != local_528);
    iVar20 = *(int *)(param_1 + 0x40);
    lVar23 = (longlong)iVar20;
    if (lVar23 != 0) {
      plVar28 = *(longlong **)(param_1 + 0x38);
      uVar17 = FUN_1440f91c0(plVar28);
      local_570 = CONCAT71(local_570._1_7_,uVar17);
      local_528 = plVar28 + 0x11;
      local_568 = (undefined1 (*) [16])((ulonglong)local_568 & 0xffffffff00000000);
      iVar32 = 0;
      local_560 = plVar28;
      do {
        bVar13 = (byte)local_570;
        local_570 = local_570 ^ 1;
        local_578 = (longlong *)CONCAT44(local_578._4_4_,iVar32);
        lVar29 = (longlong)iVar32;
        iVar38 = iVar32 + 1;
        if (iVar32 + 1 < iVar20) {
          iVar38 = iVar20;
        }
        plVar28 = local_528 + lVar29 * 0x11;
        local_540 = (longlong *)CONCAT71(local_540._1_7_,bVar13);
        lVar37 = lVar29;
        do {
          lVar37 = lVar37 + 1;
          iVar6 = iVar38;
          if (lVar23 <= lVar37) break;
          bVar18 = FUN_1440f91c0(plVar28);
          iVar32 = iVar32 + 1;
          plVar28 = plVar28 + 0x11;
          iVar6 = iVar32;
        } while ((bVar13 & 1) == bVar18);
        iVar32 = iVar6;
        iVar38 = iVar32 - (int)local_578;
        if (((ulonglong)local_540 & 1) == 0) {
          FUN_1411cbed1(local_560 + lVar29 * 0x11,iVar38);
        }
        else {
          if ((int)local_568 != (int)local_578) {
            memmove(local_560 + (longlong)(int)local_568 * 0x11,local_560 + lVar29 * 0x11,
                    (longlong)iVar38 * 0x88);
          }
          local_568 = (undefined1 (*) [16])CONCAT44(local_568._4_4_,(int)local_568 + iVar38);
        }
      } while (lVar37 < lVar23);
      *(int *)(param_1 + 0x40) = (int)local_568;
    }
  }
  lVar23 = *(longlong *)(param_1 + 0x90);
  if (lVar23 != 0) {
    iVar20 = *(int *)(lVar23 + 0x3a0);
    lVar29 = (longlong)iVar20;
    if (lVar29 != 0) {
      plVar28 = *(longlong **)(lVar23 + 0x398);
      local_578 = (longlong *)CONCAT71(local_578._1_7_,*plVar28 == 0);
      iVar38 = 0;
      iVar32 = 0;
      do {
        plVar30 = local_578;
        bVar13 = (byte)local_578;
        local_578 = (longlong *)((ulonglong)local_578 ^ 1);
        iVar6 = iVar32 + 1;
        if (iVar32 + 1 < iVar20) {
          iVar6 = iVar20;
        }
        iVar34 = iVar32;
        lVar37 = (longlong)iVar32;
        do {
          lVar37 = lVar37 + 1;
          iVar35 = iVar6;
          if (lVar29 <= lVar37) break;
          iVar34 = iVar34 + 1;
          iVar35 = iVar34;
        } while ((bool)(bVar13 & 1) == (plVar28[lVar37] == 0));
        if (((ulonglong)plVar30 & 1) == 0) {
          if (iVar38 != iVar32) {
            memmove(plVar28 + iVar38,plVar28 + iVar32,(longlong)(iVar35 - iVar32) << 3);
          }
          iVar38 = iVar38 + (iVar35 - iVar32);
        }
        iVar32 = iVar35;
      } while (lVar37 < lVar29);
      *(int *)(lVar23 + 0x3a0) = iVar38;
      lVar23 = *(longlong *)(param_1 + 0x90);
      if (0 < *(int *)(lVar23 + 0x3a0)) {
        uVar33 = 0;
        do {
          uVar24 = (ulonglong)uVar33;
          lVar29 = *(longlong *)(*(longlong *)(lVar23 + 0x398) + uVar24 * 8);
          lVar37 = *(longlong *)(lVar29 + 0xb0);
          if ((lVar37 == 0) && (lVar37 = FUN_1448abda6(lVar29), lVar37 == 0)) {
            fVar42 = 0.0;
          }
          else {
            fVar42 = (float)*(double *)(lVar37 + 0x6d0);
          }
          *(float *)(lVar29 + 0xb20) = fVar42;
          if (*(int *)(lVar29 + 0xb4c) < 0) {
            *(undefined4 *)(lVar29 + 0xb48) = 0;
            FUN_14481578e(lVar29 + 0xb40,0);
          }
          else {
            *(undefined4 *)(lVar29 + 0xb48) = 0;
          }
          if (*(int *)(lVar29 + 0x728) < 1) {
            if ((*(byte *)(lVar29 + 0x9c) & 1) != 0) {
              FUN_1401bf202(lVar29);
            }
            iVar20 = *(int *)(lVar23 + 0x3a0);
            if (~uVar33 + iVar20 != 0) {
              memmove((void *)(*(longlong *)(lVar23 + 0x398) + uVar24 * 8),
                      (void *)(*(longlong *)(lVar23 + 0x398) + uVar24 * 8 + 8),
                      (longlong)(int)(~uVar33 + iVar20) << 3);
              iVar20 = *(int *)(lVar23 + 0x3a0);
            }
            *(int *)(lVar23 + 0x3a0) = iVar20 + -1;
            FUN_1418e21e0((longlong *)(lVar23 + 0x398));
            uVar33 = uVar33 - 1;
          }
          uVar33 = uVar33 + 1;
        } while ((int)uVar33 < *(int *)(lVar23 + 0x3a0));
      }
    }
  }
  if ((0 < *(int *)(param_1 + 0x40)) && (*(char *)(param_1 + 0x88) == '\x01')) {
    local_498 = 0;
    local_488 = &PTR_LAB_14b965f50;
    local_480 = local_520;
    local_4a8[0] = FUN_1440fd16e;
    FUN_1417399ce(local_500,local_4a8,0);
  }
LAB_1440f6786:
  if ((local_f0 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f91c0 FUN_1440f91c0 body=170 status=ok
// SIG undefined FUN_1440f91c0(void)

bool FUN_1440f91c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 == 0) {
    uVar4 = FUN_1402d1c56();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x68) = lVar5;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x60) == 0)) goto LAB_1440f9243;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      goto LAB_1440f9243;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x60));
    *(longlong *)(param_1 + 0x70) = lVar5;
    if (lVar5 == 0) goto LAB_1440f9243;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    return true;
  }
LAB_1440f9243:
  bVar3 = true;
  if ((*(char *)(param_1 + 0x5c) == '\0') && (*(int *)(param_1 + 0x50) < 1)) {
    bVar3 = 0 < *(int *)(param_1 + 0x30);
  }
  return bVar3;
}



// FUNCTION 1440f926a FUN_1440f926a body=370 status=ok
// SIG undefined FUN_1440f926a(void)

void FUN_1440f926a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(*param_1 + 0xb0);
  if (lVar3 == 0) goto LAB_1440f939c;
  lVar6 = param_1[0xd];
  if (lVar6 == 0) {
    uVar5 = FUN_1402d1c56();
    lVar6 = FUN_14477b664(uVar5);
    param_1[0xd] = lVar6;
  }
  plVar7 = (longlong *)param_1[0xe];
  if (plVar7 == (longlong *)0x0) {
    if ((lVar6 == 0) || (param_1[0xc] == 0)) goto LAB_1440f939c;
    plVar7 = *(longlong **)(lVar6 + 0xb8);
    if (plVar7 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
        plVar7 = (longlong *)FUN_144aff482(uVar5,param_1 + 0xc);
        param_1[0xe] = (longlong)plVar7;
        if (plVar7 == (longlong *)0x0) goto LAB_1440f939c;
        goto LAB_1440f92c4;
      }
    }
    param_1[0xe] = 0;
  }
  else {
LAB_1440f92c4:
    local_48 = &DAT_14cbc66d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_40,param_2,lVar3);
    if (local_40 != 0) {
      iVar2 = (int)param_1[6];
      *(uint *)(param_1 + 6) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
        FUN_1466238e2(param_1 + 5,iVar2);
      }
      lVar3 = param_1[5];
      *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = local_40;
      *(longlong **)(lVar3 + 8 + (longlong)iVar2 * 0x10) = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_38 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
LAB_1440f939c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440f93de FUN_1440f93de body=194 status=ok
// SIG undefined FUN_1440f93de(void)

void FUN_1440f93de(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x180))();
  }
  FUN_148d07c68(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_1440f5f18(local_30,param_2,param_3);
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f94a2 FUN_1440f94a2 body=171 status=ok
// SIG undefined FUN_1440f94a2(void)

void FUN_1440f94a2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x1c))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
      ((plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0 &&
       (*(longlong *)(param_1 + 0x10) != 0)))))) {
    local_18 = *(undefined8 *)(param_4 + 4);
    local_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    (**(code **)(*plVar2 + 0xa10))(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x80));
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440f959a FUN_1440f959a body=213 status=ok
// SIG undefined FUN_1440f959a(void)

void FUN_1440f959a(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(byte *)(param_1 + 0x244) = param_2;
  if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
    *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
         ((ushort)*(undefined4 *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xffc3) +
         (ushort)(param_2 & 0xf) * 4;
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001440f966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))();
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        lVar4 = *(longlong *)(lVar2 + 0x18);
        if (*(longlong *)(lVar2 + 0x18) == 0) {
          lVar4 = lVar2 + 8;
        }
        *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 1;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440f9670 FUN_1440f9670 body=597 status=ok
// SIG undefined FUN_1440f9670(void)

void FUN_1440f9670(longlong param_1,undefined4 param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong *plVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 auStack_58 [45];
  byte local_2b;
  undefined1 local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x245) = 0;
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558);
    *puVar1 = *puVar1 & 0xff3f;
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
    if (uVar3 < 0xffffffff00000000) {
      plVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar10 = (longlong *)0x0;
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,*(longlong *)(param_1 + 0x238),uVar3,0x40);
    }
    else {
      uVar12 = (uint)uVar3;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c998088)) {
        puVar9 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar9 = DAT_14c998080;
        }
        if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar12 & 0x1f) & 1) != 0) {
          lVar8 = DAT_14c998060 + (ulonglong)(uVar12 & 0x7fffffff) * 0x68;
          lVar7 = *(longlong *)(lVar8 + 0x18);
          if (*(longlong *)(lVar8 + 0x18) == 0) {
            lVar7 = lVar8 + 8;
          }
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 1;
          *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
        }
      }
    }
    puVar2 = (undefined8 *)(param_1 + 0x308);
    cVar4 = FUN_1403ae288(puVar2);
    if (cVar4 != '\0') {
      if (*(longlong *)(param_1 + 0x328) != 0) {
        lVar7 = FUN_14008e0ae(puVar2);
        iVar5 = *(int *)(lVar7 + 0x50);
        if (iVar5 == 0) {
          FUN_1402a453c((int *)(lVar7 + 0x50));
          iVar5 = *(int *)(lVar7 + 0x50);
        }
        if (*(longlong *)(param_1 + 0x328) != 0) {
          FUN_14480f766(DAT_14c9a3d60 + (longlong)iVar5 * 0x88 + -0x18);
        }
        *(undefined8 *)(param_1 + 0x328) = 0;
      }
      if (*(longlong *)(param_1 + 0x330) != 0) {
        lVar7 = FUN_14008e0ae(puVar2);
        if (*(longlong *)(param_1 + 0x330) != 0) {
          FUN_14480f766(lVar7 + 0x168);
        }
        *(undefined8 *)(param_1 + 0x330) = 0;
      }
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined1 *)(param_1 + 0x324) = 0xff;
      *(undefined4 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x318) = 0;
    }
    FUN_14142ad0e(param_1,0,&DAT_14cbc67b0);
    uVar6 = FUN_140843f56(param_1);
    local_2b = *(byte *)(param_1 + 0x240) & 1;
    pbVar11 = &local_2b;
    local_2a = (undefined1)uVar6;
    local_29 = (char)param_2;
    FUN_1447cd2ec(param_1 + 0xb8);
    FUN_148d0d8dc(param_1 + 200,
                  CONCAT71((int7)((ulonglong)pbVar11 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                  0xffffffffffffff01,uVar6,param_2);
    if ((char)param_2 != '\0') {
      FUN_1416c1800(param_1,1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440f98fc FUN_1440f98fc body=1015 status=ok
// SIG undefined FUN_1440f98fc(void)

undefined8 FUN_1440f98fc(longlong param_1,longlong *param_2,byte param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x230) != 0) && ((*(byte *)(param_1 + 0x240) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x245) = 1;
    *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
         (ushort)*(undefined4 *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xff3f | 0x40;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
    if (uVar4 < 0xffffffff00000000) {
      plVar8 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,*(longlong *)(param_1 + 0x238),uVar4,0x40);
    }
    else {
      uVar11 = (uint)uVar4;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
        puVar9 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar9 = DAT_14c998080;
        }
        if ((*(uint *)(puVar9 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar7 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
          lVar12 = *(longlong *)(lVar7 + 0x18);
          if (*(longlong *)(lVar7 + 0x18) == 0) {
            lVar12 = lVar7 + 8;
          }
          *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 1;
          *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
        }
      }
    }
    *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) & 0xfe | param_3;
    iVar2 = *(int *)(param_1 + 0x2f0);
    FUN_141289672(&local_48,param_2);
    iVar3 = *(int *)(param_1 + 0x300);
    if (iVar3 < *(int *)(param_1 + 0x2f4)) {
      if (iVar3 != 0) {
        lVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + 8 + lVar12) ==
              CONCAT44(uStack_3c,uStack_40)) goto LAB_1440f9a9e;
          lVar12 = lVar12 + 0x10;
        } while ((longlong)iVar3 * 0x10 != lVar12);
      }
      (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x238));
      iVar3 = *(int *)(param_1 + 0x300);
      *(uint *)(param_1 + 0x300) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x304) < iVar3 + 1U) {
        FUN_1458797ae((longlong *)(param_1 + 0x2f8),iVar3);
      }
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar3 * 0x10);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      FUN_1440f9cf4(param_1);
      local_38 = (code *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x2f0));
      FUN_1447cd2ec(param_1 + 0xe0,&local_38);
      FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
      if (*(char *)(*(longlong *)(param_1 + 0x230) + 0x3c) == '\x01') {
        FUN_14142ad0e(param_1,1,&DAT_14cbc67b0);
      }
      if ((((((iVar2 == 0) && (FUN_141289672(&local_48,param_2), CONCAT44(uStack_3c,uStack_40) != 0)
             ) && (uStack_44 != 0)) && ((-1 < (int)local_48 && ((int)local_48 < DAT_14c9647dc)))) &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((local_48 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 &&
           ((*(uint *)(plVar8 + 2) == uStack_44 && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))))))
         && (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar12 = *plVar8, lVar12 != 0)))) {
        if (DAT_14cac9ca8 == 0) {
          local_38 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_1478c0a72;
          local_70 = &LAB_1417b2375;
          local_78 = L"Engine";
          local_80 = 0x1000000000;
          local_88 = 0x10000004;
          local_90 = 8;
          local_98 = 0x390;
          local_60 = &local_38;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        lVar12 = *(longlong *)(lVar12 + 0x10);
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
            DAT_14cac9ca8 + 0x30)) {
          uVar5 = FUN_140843f56(param_1);
          puVar10 = &local_38;
          local_38 = (code *)(CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 0x240)) &
                             0xffffffffffffff01);
          local_38._0_2_ = CONCAT11((char)uVar5,(undefined1)local_38);
          FUN_1447cd2ec(param_1 + 0x90);
          FUN_1440fd31a(param_1 + 0xa0,
                        CONCAT71((int7)((ulonglong)puVar10 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                        0xffffffffffffff01,uVar5);
        }
      }
      FUN_14142ad8e(param_1);
      uVar6 = 1;
      goto LAB_1440f9aa0;
    }
  }
LAB_1440f9a9e:
  uVar6 = 0;
LAB_1440f9aa0:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1440f9cf4 FUN_1440f9cf4 body=2601 status=ok
// SIG undefined FUN_1440f9cf4(void)

void FUN_1440f9cf4(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x2f0) = iVar6;
  if ((longlong)iVar6 == 0) {
    bVar4 = 0;
  }
  else {
    puVar17 = *(uint **)(param_1 + 0x2f8);
    lVar15 = (longlong)iVar6 << 4;
    do {
      if ((((puVar17[1] != 0) && (uVar16 = *puVar17, -1 < (int)uVar16)) &&
          ((int)uVar16 < DAT_14c9647dc)) &&
         (((plVar12 = (longlong *)
                      ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
           plVar12 != (longlong *)0x0 && (*(uint *)(plVar12 + 2) == puVar17[1])) &&
          (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
           (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)))))) {
        if (DAT_14caf64b8 == 0) {
          local_90 = FUN_141030f22;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_142b4754c;
          local_b0 = &local_90;
          local_b8 = &LAB_147c45ce0;
          local_c0 = &LAB_1463f1ff4;
          local_c8 = &DAT_149e063b2;
          local_d0 = 0x4000000000;
          local_d8 = 0x10000004;
          local_e0 = 8;
          local_e8 = 0x428;
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
            DAT_14caf64b8 + 0x30)) {
          pcVar2 = *(code **)(*plVar12 + 0x5e8);
          if (pcVar2 == FUN_140972dde) {
            if (plVar12[0x76] != 0) goto LAB_1440f9ff8;
            pcVar2 = *(code **)(*plVar12 + 0x5f8);
            if (pcVar2 == FUN_144784df4) {
              if (*(code **)(plVar12[0x784] + 0x18) == (code *)&LAB_144904684) {
                if (((((*(int *)((longlong)plVar12 + 0x75b4) == 0) ||
                      (uVar16 = *(uint *)(plVar12 + 0xeb6), (int)uVar16 < 0)) ||
                     (DAT_14c9647dc <= (int)uVar16)) ||
                    ((plVar13 = (longlong *)
                                ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
                     plVar13 == (longlong *)0x0 ||
                     ((int)plVar13[2] != *(int *)((longlong)plVar12 + 0x75b4))))) ||
                   ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_1440f9ea8;
                if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
                  lVar9 = *plVar13;
                }
                else {
                  lVar9 = 0;
                }
                lVar9 = lVar9 + 0x110;
              }
              else {
                lVar9 = (**(code **)(plVar12[0x784] + 0x18))(plVar12 + 0x784);
              }
              if (lVar9 == 0) goto LAB_1440f9ea8;
              lVar9 = *(longlong *)(lVar9 + 0x20);
            }
            else {
              lVar9 = (*pcVar2)(plVar12);
            }
            if (lVar9 == 0) goto LAB_1440f9ea8;
            lVar9 = *(longlong *)(lVar9 + 0x3b0);
          }
          else {
            lVar9 = (*pcVar2)(plVar12);
          }
          if (lVar9 != 0) goto LAB_1440f9ff8;
        }
      }
LAB_1440f9ea8:
      puVar17 = puVar17 + 4;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
    puVar17 = (uint *)0x0;
LAB_1440f9ff8:
    bVar4 = (puVar17 != (uint *)0x0) << 5;
  }
  *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xdf | bVar4;
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
  if (uVar3 < 0xffffffff00000000) {
    plVar12 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar12 = (longlong *)0x0;
    }
    (**(code **)(*plVar12 + 0x58))(plVar12,*(longlong *)(param_1 + 0x238),uVar3,0x40);
  }
  else {
    uVar16 = (uint)uVar3;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
      puVar11 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar11 = DAT_14c998080;
      }
      if ((*(uint *)(puVar11 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
        lVar9 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
        lVar15 = *(longlong *)(lVar9 + 0x18);
        if (*(longlong *)(lVar9 + 0x18) == 0) {
          lVar15 = lVar9 + 8;
        }
        *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) | 1;
        *(byte *)(lVar9 + 0x60) = *(byte *)(lVar9 + 0x60) | 1;
      }
    }
  }
  *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
       (ushort)*(undefined4 *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xf0ff |
       (ushort)((*(uint *)(param_1 + 0x2f0) & 0xf) << 8);
  *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
       (ushort)*(undefined4 *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xefff |
       (ushort)((*(uint *)(param_1 + 0x240) & 0x20) << 7);
  *(ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558) =
       (ushort)*(undefined4 *)(*(longlong *)(param_1 + 0x238) + 0x7558) & 0xdfff |
       (*(byte *)(param_1 + 0x241) & 1) << 0xd;
  FUN_14623dda6(param_1);
  if (((0 < *(int *)(param_1 + 0x2f0)) && (*(longlong *)(param_1 + 0x230) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x230) + 0x3c) == '\x01')) {
    puVar1 = (undefined4 *)(param_1 + 0x308);
    cVar5 = FUN_1403ae288(puVar1);
    if (((cVar5 == '\0') && (lVar15 = *(longlong *)(param_1 + 0x230), lVar15 != 0)) &&
       (((*(byte *)(param_1 + 0x240) & 1) != 0 && (*(char *)(lVar15 + 0x3c) == '\x01')))) {
      lVar15 = FUN_14011c2be(lVar15 + 0x40);
      if (lVar15 != 0) {
        uVar7 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x3a20) + 0x10))
                          (*(longlong *)(param_1 + 0x238) + 0x3a20);
        FUN_14036c7e6(uVar7,&local_90,lVar15,1);
        *(undefined8 *)(param_1 + 0x318) = local_80;
        *(undefined8 *)(param_1 + 800) = uStack_78;
        *puVar1 = (undefined4)local_90;
        *(undefined4 *)(param_1 + 0x30c) = local_90._4_4_;
        *(int *)(param_1 + 0x310) = iStack_88;
        *(undefined4 *)(param_1 + 0x314) = uStack_84;
      }
      cVar5 = FUN_1403ae288(puVar1);
      if (cVar5 != '\0') {
        lVar15 = FUN_14008e0ae(puVar1);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(lVar15 + 0x54);
        if (*(longlong *)(param_1 + 0x328) == 0) {
          lVar15 = FUN_14008e0ae(puVar1);
          iVar6 = *(int *)(lVar15 + 0x50);
          if (iVar6 == 0) {
            FUN_1402a453c((int *)(lVar15 + 0x50));
            iVar6 = *(int *)(lVar15 + 0x50);
          }
          lVar9 = DAT_14c9a3d60;
          lVar15 = *(longlong *)(param_1 + 0x238);
          local_90 = (code *)0x0;
          iStack_88 = 0;
          FUN_1446efa72(&local_90,0,3,0x10);
          pcVar2 = local_90;
          iStack_88 = 3;
          *(undefined ***)local_90 = &PTR_LAB_14a1c8700;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          *(longlong *)(local_90 + 0x10) = lVar10;
          *(undefined ***)local_90 = &PTR_FUN_14b9661f0;
          *(undefined8 *)(local_90 + 0x18) = 0;
          iVar14 = 0;
          if (lVar15 != 0) {
            uVar16 = *(uint *)(lVar15 + 0xc);
            *(uint *)(local_90 + 0x18) = uVar16;
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            iVar14 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar14 = DAT_14c964868 + 1;
              UNLOCK();
              iVar18 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar14;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar18);
              }
              LOCK();
              iVar14 = *(int *)(lVar15 + 0x10);
              bVar19 = iVar14 == 0;
              if (bVar19) {
                *(int *)(lVar15 + 0x10) = iVar18;
                iVar14 = 0;
              }
              UNLOCK();
              if (bVar19) {
                iVar14 = iVar18;
              }
            }
          }
          *(int *)(pcVar2 + 0x1c) = iVar14;
          *(longlong *)(pcVar2 + 0x20) = param_1;
          FUN_140c67310(lVar9 + (longlong)iVar6 * 0x88 + -0x18,&local_98,&local_90);
          if (iStack_88 == 0) {
LAB_1440fa2ee:
            if (local_90 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_90 != (code *)0x0) {
            (*(code *)**(undefined8 **)local_90)(local_90,0);
            FUN_1446efa72(&local_90,0,0,0x10);
            iStack_88 = 0;
            goto LAB_1440fa2ee;
          }
          *(undefined8 *)(param_1 + 0x328) = local_98;
        }
        if (*(longlong *)(param_1 + 0x330) == 0) {
          lVar8 = FUN_14008e0ae(puVar1);
          lVar15 = *(longlong *)(param_1 + 0x238);
          local_90 = (code *)0x0;
          iStack_88 = 0;
          FUN_1446efa72(&local_90,0,3,0x10);
          pcVar2 = local_90;
          iStack_88 = 3;
          *(undefined ***)local_90 = &PTR_LAB_14b3f7890;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar9 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar9 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar9;
          *(longlong *)(local_90 + 0x10) = lVar10;
          *(undefined ***)local_90 = &PTR_FUN_14b966260;
          *(undefined8 *)(local_90 + 0x18) = 0;
          iVar6 = 0;
          if (lVar15 != 0) {
            uVar16 = *(uint *)(lVar15 + 0xc);
            *(uint *)(local_90 + 0x18) = uVar16;
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            iVar6 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar14 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar14);
              }
              LOCK();
              iVar6 = *(int *)(lVar15 + 0x10);
              bVar19 = iVar6 == 0;
              if (bVar19) {
                *(int *)(lVar15 + 0x10) = iVar14;
                iVar6 = 0;
              }
              UNLOCK();
              if (bVar19) {
                iVar6 = iVar14;
              }
            }
          }
          *(int *)(pcVar2 + 0x1c) = iVar6;
          *(longlong *)(pcVar2 + 0x20) = param_1;
          FUN_14036a282(lVar8 + 0x168,&local_98,&local_90);
          if (iStack_88 == 0) {
LAB_1440fa433:
            if (local_90 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_90 != (code *)0x0) {
            (*(code *)**(undefined8 **)local_90)(local_90,0);
            FUN_1446efa72(&local_90,0,0,0x10);
            iStack_88 = 0;
            goto LAB_1440fa433;
          }
          *(undefined8 *)(param_1 + 0x330) = local_98;
        }
      }
    }
  }
  lVar15 = param_1 + 0x308;
  cVar5 = FUN_1403ae288(lVar15);
  if (cVar5 == '\0') {
    lVar15 = param_1 + 0x2a0;
    cVar5 = FUN_1403ae288(lVar15);
    if (cVar5 == '\0') goto LAB_1440fa56d;
    if (*(int *)(param_1 + 0x2f0) < 1) {
      fVar21 = *(float *)(param_1 + 0x2dc);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x300);
      if ((longlong)iVar6 == 0) {
        fVar21 = 0.0;
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x2f8);
        fVar22 = 1.0;
        fVar21 = 0.0;
        lVar8 = 0;
        do {
          fVar20 = (float)(**(code **)(**(longlong **)(lVar9 + 8 + lVar8) + 0x30))();
          fVar21 = fVar21 + fVar20 * fVar22;
          fVar22 = fVar22 * *(float *)(*(longlong *)(param_1 + 0x230) + 0x5c);
          lVar8 = lVar8 + 0x10;
        } while ((longlong)iVar6 * 0x10 != lVar8);
      }
      fVar21 = -fVar21;
    }
  }
  else if (*(int *)(param_1 + 0x2f0) < 1) {
    fVar21 = *(float *)(param_1 + 0x338);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x300);
    if ((longlong)iVar6 == 0) {
      fVar21 = 0.0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x2f8);
      fVar22 = 1.0;
      fVar21 = 0.0;
      lVar8 = 0;
      do {
        fVar20 = (float)(**(code **)(**(longlong **)(lVar9 + 8 + lVar8) + 0x30))();
        fVar21 = fVar21 + fVar20 * fVar22;
        fVar22 = fVar22 * *(float *)(*(longlong *)(param_1 + 0x230) + 0x5c);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar6 * 0x10 != lVar8);
    }
  }
  lVar15 = FUN_14008e0ae(lVar15);
  *(float *)(lVar15 + 0x58) = fVar21;
  FUN_14020a6cc(lVar15 + 0x50,1);
LAB_1440fa56d:
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14142ad8e(param_1);
  return;
}



// FUNCTION 1440fa71e FUN_1440fa71e body=35 status=ok
// SIG undefined FUN_1440fa71e(void)

void FUN_1440fa71e(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x230) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x230) + 0x35) == '\x01')) &&
     (*(char *)(param_1 + 0x243) == '\x01')) {
    FUN_1416c1800(param_1,6);
    return;
  }
  return;
}



// FUNCTION 1440fa742 FUN_1440fa742 body=2296 status=ok
// SIG undefined FUN_1440fa742(void)

void FUN_1440fa742(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  code *local_b8;
  int local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x230) == 0) goto LAB_1440fada2;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_2 == 0) goto LAB_1440fada2;
  }
  else {
    FUN_1456cec3c(param_2);
  }
  if (DAT_14cb56270 == 0) {
    local_f0 = &local_b8;
    local_b8 = FUN_1449e2820;
    local_e0 = FUN_14081d0ea;
    local_e8 = FUN_1427b09ee;
    local_f8 = &LAB_148630fef;
    local_100 = FUN_1464b6a91;
    local_108 = L"Engine";
    local_110 = 0;
    local_118 = 0x10004001;
    local_120 = 8;
    local_128 = (undefined2 *)CONCAT44(local_128._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar5 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
  if ((plVar5 == (longlong *)0x0 || param_2 == 0) ||
     (lVar6 = (**(code **)(*plVar5 + 0x20))(), lVar6 == 0)) goto LAB_1440fada2;
  if (*(int *)(param_1 + 0x34c) == 0) {
LAB_1440fade5:
    lVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x348);
    lVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_1 + 0x34c) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1440fade5;
      lVar6 = *plVar10;
    }
  }
  if (lVar6 == param_2) {
    uVar9 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x238));
    lVar6 = *(longlong *)(param_1 + 0x238);
    uVar14 = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x164);
  }
  else {
    plVar10 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    if (plVar10 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar10 + 8))(plVar10);
      lVar7 = FUN_14069c71e();
      if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) && ((char)plVar10[0xbd] != '\x01')) goto LAB_1440fada2;
    }
    iVar4 = FUN_14486116a(*(longlong *)(param_1 + 0x238) + 0x898,param_2);
    if (iVar4 != 2) goto LAB_1440fada2;
    if (((((*(int *)(param_1 + 0x34c) != 0) && (uVar1 = *(uint *)(param_1 + 0x348), -1 < (int)uVar1)
          ) && (((int)uVar1 < DAT_14c9647dc &&
                ((plVar10 = (longlong *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x34c)))))))
        && ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (*plVar10 != 0)) {
      FUN_1412f7942(param_1);
    }
    iVar4 = DAT_14c9647dc;
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x348) = uVar1;
    if ((int)uVar1 < iVar4) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar6 + 0x10) = iVar12;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar4 = iVar12;
      }
    }
    *(int *)(param_1 + 0x34c) = iVar4;
    *(longlong **)(param_1 + 0x350) = plVar5;
    lVar8 = (**(code **)(*plVar5 + 0x20))(plVar5);
    lVar6 = *(longlong *)(param_1 + 0x238);
    local_b8 = (code *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    pcVar3 = local_b8;
    local_b0 = 3;
    *(undefined ***)local_b8 = &PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    *(longlong *)(local_b8 + 0x10) = lVar11;
    *(undefined ***)local_b8 = &PTR_FUN_14b9665e0;
    *(undefined8 *)(local_b8 + 0x18) = 0;
    iVar4 = 0;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0xc);
      *(uint *)(local_b8 + 0x18) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar13 = iVar4 == 0;
        if (bVar13) {
          *(int *)(lVar6 + 0x10) = iVar12;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar4 = iVar12;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar4;
    *(longlong *)(pcVar3 + 0x20) = param_1;
    FUN_1403524de(lVar8 + 400,&local_d0,&local_b8);
    if (local_b0 == 0) {
LAB_1440faa83:
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_b8 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_b8)(local_b8,0);
      FUN_1446efa72(&local_b8,0,0,0x10);
      local_b0 = 0;
      goto LAB_1440faa83;
    }
    *(undefined8 **)(param_1 + 0x360) = local_d0;
    lVar8 = (**(code **)(*plVar5 + 0x20))(plVar5);
    lVar6 = *(longlong *)(param_1 + 0x238);
    local_b8 = (code *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    pcVar3 = local_b8;
    local_b0 = 3;
    *(undefined ***)local_b8 = &PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    *(longlong *)(local_b8 + 0x10) = lVar11;
    *(undefined ***)local_b8 = &PTR_FUN_14b966650;
    *(undefined8 *)(local_b8 + 0x18) = 0;
    iVar4 = 0;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0xc);
      *(uint *)(local_b8 + 0x18) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar13 = iVar4 == 0;
        if (bVar13) {
          *(int *)(lVar6 + 0x10) = iVar12;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar4 = iVar12;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar4;
    *(longlong *)(pcVar3 + 0x20) = param_1;
    FUN_1403524de(lVar8 + 0x1f8,&local_d0,&local_b8);
    if (local_b0 == 0) {
LAB_1440fabc4:
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_b8 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_b8)(local_b8,0);
      FUN_1446efa72(&local_b8,0,0,0x10);
      local_b0 = 0;
      goto LAB_1440fabc4;
    }
    *(undefined8 **)(param_1 + 0x370) = local_d0;
    uVar9 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x238));
    lVar6 = *(longlong *)(param_1 + 0x238);
    uVar14 = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x164);
  }
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar2 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_d0[2] = lVar8;
  *local_d0 = &PTR_FUN_14b95cc50;
  local_d0[3] = 0;
  iVar4 = 0;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0xc);
    *(uint *)(local_d0 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar6 + 0x10) = iVar12;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar4 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = &LAB_1458cb45c;
  *(undefined4 *)(puVar2 + 5) = 0;
  local_b8 = (code *)0x0;
  local_b0 = 0;
  FUN_14487d8d8(&local_b8,&local_d0);
  local_78 = 1;
  local_128 = local_c0;
  local_c0[0] = 0;
  local_bc = 0xbf800000;
  FUN_1406f4044(uVar9,param_1 + 0x380,&local_b8,uVar14);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_c8 != 0) {
    if (local_d0 == (undefined8 *)0x0) goto LAB_1440fada2;
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1440fada2:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440fb03c FUN_1440fb03c body=83 status=ok
// SIG undefined FUN_1440fb03c(void)

void FUN_1440fb03c(longlong param_1)

{
  if (((0 < *(int *)(param_1 + 0x224)) && (*(longlong *)(param_1 + 0x230) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x230) + 0x160) == '\x01')) {
    FUN_141509760(param_1);
    FUN_1447cd2ec(param_1 + 0x198,0);
    return;
  }
  FUN_1416c1800(param_1,3);
  return;
}



// FUNCTION 1440fb0f0 FUN_1440fb0f0 body=70 status=ok
// SIG undefined FUN_1440fb0f0(void)

undefined8 FUN_1440fb0f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3d0), lVar1 != 0)) {
    lVar2 = FUN_1402095ca();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1440fb136 FUN_1440fb136 body=1038 status=ok
// SIG undefined FUN_1440fb136(void)

float FUN_1440fb136(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0 || param_3 == 0) {
    fVar9 = 1.0;
    goto LAB_1440fb2e6;
  }
  if ((longlong)(int)param_2[0x15] != 0) {
    plVar4 = (longlong *)param_2[0x14];
    plVar1 = plVar4 + (int)param_2[0x15];
    do {
      if (*(int *)(param_3 + 0x78) != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_3 + 0x70) + lVar8) == *plVar4) goto LAB_1440fb1f3;
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(param_3 + 0x78) << 3 != lVar8);
      }
      fVar9 = 0.0;
      if ((longlong)*(int *)(param_3 + 0x88) == 0) goto LAB_1440fb2e6;
      lVar8 = 0;
      while (*(longlong *)(*(longlong *)(param_3 + 0x80) + lVar8) != *plVar4) {
        lVar8 = lVar8 + 8;
        if ((longlong)*(int *)(param_3 + 0x88) * 8 == lVar8) goto LAB_1440fb2e6;
      }
LAB_1440fb1f3:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  if (*(longlong *)(param_3 + 0x144) == 0) {
LAB_1440fb31a:
    fVar10 = 1.0;
    if ((0 < *(int *)(param_3 + 0x158)) &&
       (lVar8 = FUN_148d098be(*(undefined8 *)(param_3 + 0x150)), lVar8 != 0)) goto LAB_1440fb272;
  }
  else {
    lVar5 = FUN_1405c673d();
    lVar8 = *(longlong *)(param_1 + 0x48);
    if (lVar8 == 0) {
LAB_1440fb252:
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(lVar5 + 0x54));
    }
    else {
      if (DAT_14cbadd90 == 0) {
        local_70 = &local_58;
        local_58 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1459f2e4c;
        local_78 = &LAB_148c39de3;
        local_80 = &LAB_1457a9eb2;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
      goto LAB_1440fb252;
      uVar3 = FUN_1409fe09c(lVar8);
    }
    uVar6 = FUN_1405c673d();
    lVar8 = FUN_14087c394(uVar6,param_3 + 0x144,uVar3);
    if (lVar8 == 0) goto LAB_1440fb31a;
LAB_1440fb272:
    lVar5 = (**(code **)(*param_2 + 8))(param_2);
    lVar7 = FUN_14018fb44();
    fVar10 = 1.0;
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar5 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30)))) {
      switch(*(undefined1 *)((longlong)param_2 + 0x121)) {
      case 0:
        fVar10 = *(float *)(lVar8 + 8);
        break;
      case 1:
        fVar10 = *(float *)(lVar8 + 0xc);
        break;
      case 2:
        fVar10 = *(float *)(lVar8 + 0x10);
        break;
      case 3:
        fVar10 = *(float *)(lVar8 + 0x14);
        break;
      case 4:
        fVar10 = *(float *)(lVar8 + 0x18);
        break;
      case 5:
        fVar10 = *(float *)(lVar8 + 0x1c);
        break;
      default:
        fVar10 = 1.0;
      }
      lVar8 = *(longlong *)(param_1 + 0x410);
      if (lVar8 != 0) {
        if (DAT_14cba8288 == 0) {
          local_70 = &local_58;
          local_58 = FUN_141864c34;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1464cee30;
          local_78 = &LAB_148bfac22;
          local_80 = &LAB_140f21842;
          local_88 = &DAT_149e063b2;
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
          bVar2 = *(char *)((longlong)param_2 + 0x121) - 1;
          if (bVar2 < 5) {
            fVar9 = *(float *)(lVar8 + 0x716c + (ulonglong)bVar2 * 0xc);
          }
          else {
            fVar9 = 1.0;
          }
          fVar10 = fVar10 * fVar9;
        }
      }
    }
  }
  fVar9 = fVar10;
  if ((*(char *)(param_1 + 0x53d) == '\x01') && (fVar9 = 1.0, 1.0 <= fVar10)) {
    fVar9 = fVar10;
  }
LAB_1440fb2e6:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar9;
}



// FUNCTION 1440fb560 FUN_1440fb560 body=1937 status=ok
// SIG undefined FUN_1440fb560(void)

void FUN_1440fb560(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  byte bVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined ***local_e0;
  undefined1 *local_d8;
  code *local_d0;
  char local_b9;
  char local_b8 [16];
  longlong *local_a8;
  undefined4 local_90 [2];
  undefined **local_88;
  char local_80;
  undefined7 uStack_7f;
  undefined ***local_78;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  char *local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = param_2 + 10;
  local_88 = (undefined **)FUN_144100da8;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9666c0;
  local_60 = (longlong *)CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 800));
  uVar5 = FUN_140682380();
  FUN_140c7e696(plVar1,uVar5);
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 != 0) {
    if (DAT_14cba8288 == 0) {
      local_88 = (undefined **)FUN_141864c34;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_1464cee30;
      local_e8 = &LAB_148bfac22;
      local_f0 = &LAB_140f21842;
      local_f8 = &DAT_149e063b2;
      local_100 = 0;
      local_108 = 0x10000004;
      local_110 = 0x10;
      local_118 = 0x9cd0;
      local_e0 = &local_88;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1410f26bc(*param_2 + 0x118,&local_88);
      plVar3 = (longlong *)CONCAT71(uStack_7f,local_80);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      local_b8[0] = '\0';
      local_90[0] = 0;
      FUN_1418adffa(&local_88,plVar1,&DAT_14cbc6be8,local_b8);
      FUN_14097626c(lVar7 + 0x69c0,&local_88);
      local_88 = &PTR_LAB_14b3f62b0;
      FUN_1448173f8(local_58);
      if (local_80 != '\0') {
        if (local_80 == '\x01') {
          local_78 = (undefined ***)0x0;
        }
        else if ((local_80 == '\x03') && (local_70 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
        local_80 = '\0';
      }
      FUN_1448173f8(local_90);
      if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a8 + 0x10))();
        }
      }
    }
  }
  plVar3 = param_2 + 4;
  FUN_140c706a0(plVar3,*(undefined8 *)(param_1 + 0x28));
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) {
LAB_1440fb750:
    puVar8 = (undefined8 *)(param_1 + 0x38);
  }
  else {
    uVar5 = FUN_1409d2e5a();
    plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
    if ((plVar6 == (longlong *)0x0) ||
       (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), *(char *)(lVar7 + 8) == '\0'))
    goto LAB_1440fb750;
    puVar8 = (undefined8 *)(param_1 + 0x28);
  }
  FUN_14095c05e(plVar3,*puVar8);
  FUN_140c98bce(param_2 + 7,*(undefined8 *)(param_1 + 0x38));
  local_58[0] = &local_b9;
  local_b9 = '\0';
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b966750;
  local_88 = (undefined **)FUN_144100e98;
  local_60 = param_2;
  FUN_140cf3304(param_1 + 0x58,&local_88);
  if (local_88 != (undefined **)0x0) {
    pppuVar10 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar10 = &local_68;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  if (local_b9 == '\0') {
    FUN_140b47236(plVar3,0);
  }
  if ((*(longlong *)(param_1 + 0xa0) != 0) && ((longlong)*(int *)(param_1 + 0xb0) != 0)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar7) != 0) {
        FUN_143e4779a(plVar3,param_1 + 0x98);
        goto LAB_1440fb82a;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(param_1 + 0xb0) * 8 != lVar7);
  }
  FUN_143e478a8(plVar3);
LAB_1440fb82a:
  if ((*(char *)(param_1 + 0x51a) == '\x01') ||
     (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 == (longlong *)0x0)) goto LAB_1440fba45;
  lVar7 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar9 = FUN_14018fb44();
  if ((lVar9 == 0) ||
     (((*(int *)(lVar7 + 0x38) < *(int *)(lVar9 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) || (*(char *)((longlong)plVar3 + 0x121) == '\0')))) goto LAB_1440fba45;
  if ((*(longlong **)(param_1 + 0x478) == (longlong *)0x0) ||
     (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x478) + 0x5d8))(), lVar7 == 0)) {
LAB_1440fb8a9:
    lVar7 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_88 = (undefined **)FUN_141030f22;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_1459f2e4c;
      local_e8 = &LAB_148c39de3;
      local_f0 = &LAB_1457a9eb2;
      local_f8 = &DAT_149e063b2;
      local_100 = 0;
      local_108 = 0x10000004;
      local_110 = 0x10;
      local_118 = 0x3de0;
      local_e0 = &local_88;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1440fb8a9;
  }
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (lVar9 == 0) {
LAB_1440fb9cc:
    if (lVar7 == 0) goto LAB_1440fba45;
LAB_1440fb9d1:
    lVar9 = FUN_1405c673d();
    if (*(int *)(lVar9 + 0x30) < 1) goto LAB_1440fba45;
    bVar11 = (char)*(int *)(lVar9 + 0x30) - 1;
    bVar4 = FUN_1409fe09c(lVar7);
    if (bVar4 < bVar11) {
      bVar11 = bVar4;
    }
    lVar7 = (ulonglong)*(byte *)((longlong)plVar3 + 0x121) * 0x10 +
            (ulonglong)bVar11 * 0x170 + *(longlong *)(lVar9 + 0x28) + 0xa0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_88 = (undefined **)FUN_141030f22;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_1459f2e4c;
      local_e8 = &LAB_148c39de3;
      local_f0 = &LAB_1457a9eb2;
      local_f8 = &DAT_149e063b2;
      local_100 = 0;
      local_108 = 0x10000004;
      local_110 = 0x10;
      local_118 = 0x3de0;
      local_e0 = &local_88;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1440fb9cc;
    if (lVar7 != 0) goto LAB_1440fb9d1;
    lVar7 = FUN_1405c673d();
    if (*(int *)(lVar7 + 0x30) < 1) goto LAB_1440fba45;
    bVar11 = (char)*(int *)(lVar7 + 0x30) - 1;
    bVar4 = FUN_1409fe09c(lVar9);
    if (bVar4 < bVar11) {
      bVar11 = bVar4;
    }
    lVar7 = (ulonglong)*(byte *)((longlong)plVar3 + 0x121) * 0x10 +
            (ulonglong)bVar11 * 0x170 + *(longlong *)(lVar7 + 0x28) + 0x100;
  }
  local_b8[0] = '\0';
  local_90[0] = 0;
  FUN_1418adffa(&local_88,plVar1,&DAT_14cbc6be0,local_b8);
  FUN_140cd739a(lVar7,&local_88);
  local_88 = &PTR_LAB_14b3f62b0;
  FUN_1448173f8(local_58);
  if (local_80 != '\0') {
    if (local_80 == '\x01') {
      local_78 = (undefined ***)0x0;
    }
    else if ((local_80 == '\x03') && (local_70 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    local_80 = '\0';
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_a8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
LAB_1440fba45:
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fbcf2 FUN_1440fbcf2 body=1035 status=ok
// SIG undefined FUN_1440fbcf2(void)

void FUN_1440fbcf2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  code *local_f0;
  longlong local_e0;
  longlong *local_d8;
  float local_d0;
  char local_cc;
  undefined8 local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  float *local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1410f26bc(*param_2 + 0x118,&local_e0);
  if ((local_e0 != 0) && (*(char *)(local_e0 + 8) == '\x02')) {
    uVar7 = rand();
    param_2 = param_2 + 10;
    local_c8 = (code *)FUN_1409178de();
    if ((local_c8 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c8);
    }
    FUN_140b0175a(param_2,&local_d0,&local_c8,0);
    if (local_cc == '\0') {
      local_d0 = 0.0;
    }
    fVar13 = 0.0;
    if ((float)(uVar7 & 0x7fff) / 32767.0 < local_d0) {
      FUN_14662349e(param_2,&local_c8);
      if (local_c8._4_1_ == '\0') {
        fVar13 = 0.0;
      }
      else {
        fVar13 = (float)local_c8;
      }
    }
    fVar3 = *(float *)(param_1 + 800);
    fVar4 = *(float *)(param_1 + 0x558);
    lVar9 = *(longlong *)(param_1 + 0x28);
    fVar12 = 1.0;
    if (lVar9 != 0) {
      if (DAT_14cba8288 == 0) {
        local_c8 = FUN_141864c34;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_1464cee30;
        local_108 = &LAB_148bfac22;
        local_110 = &LAB_140f21842;
        local_118 = &DAT_149e063b2;
        local_120 = 0;
        local_128 = 0x10000004;
        local_130 = (undefined *)CONCAT44(local_130._4_4_,0x10);
        local_138 = 0x9cd0;
        local_100 = &local_c8;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      iVar5 = *(int *)(DAT_14cba8288 + 0x38);
      if ((iVar5 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar5 * 8) ==
          DAT_14cba8288 + 0x30)) {
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14b967700;
        local_c8 = (code *)&LAB_144112d48;
        fVar12 = (float)FUN_1409764a6(lVar9 + 0x69c0,CONCAT71((int7)(int3)((uint)iVar5 >> 8),2));
      }
    }
    local_d0 = 1.0;
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_LAB_14b966770;
    local_c8 = FUN_144100f14;
    local_a0 = param_1;
    local_98 = &local_d0;
    FUN_140cf3304(param_1 + 0x58,&local_c8);
    if (local_c8 != (code *)0x0) {
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    fVar12 = fVar12 * local_d0;
    lVar9 = *(longlong *)(param_1 + 0x480);
    fVar14 = 0.0;
    if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x40) != 0)) {
      lVar10 = *(longlong *)(lVar9 + 0x38);
      lVar9 = (longlong)*(int *)(lVar9 + 0x40) * 0x88;
      do {
        fVar11 = (float)FUN_1405583ce(lVar10);
        fVar14 = fVar14 + fVar11;
        lVar10 = lVar10 + 0x88;
        lVar9 = lVar9 + -0x88;
      } while (lVar9 != 0);
    }
    lVar9 = FUN_1405831b2();
    uVar6 = *(undefined4 *)(lVar9 + 0x10d4);
    local_c8 = (code *)FUN_1406821b4();
    if ((local_c8 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_c8);
    }
    local_130 = &DAT_14cbc6bd8;
    local_128 = CONCAT31(local_128._1_3_,2);
    local_138 = uVar6;
    FUN_140553a9a(param_2,&local_c8,0,
                  -(uint)(0.0 < fVar14) & (uint)((fVar13 + fVar12) * ((fVar3 * fVar4) / fVar14)));
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440fc0fe FUN_1440fc0fe body=91 status=ok
// SIG undefined FUN_1440fc0fe(void)

void FUN_1440fc0fe(void)

{
  if (DAT_14cbc6c10 != 0) {
    if (DAT_14cbc6c08 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbc6c08)(DAT_14cbc6c08,0);
    FUN_1446efa72(&DAT_14cbc6c08,0,0,0x10);
    DAT_14cbc6c10 = 0;
  }
  if (DAT_14cbc6c08 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1440fc160 FUN_1440fc160 body=29 status=ok
// SIG undefined FUN_1440fc160(void)

undefined8 FUN_1440fc160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fc19a FUN_1440fc19a body=93 status=ok
// SIG undefined FUN_1440fc19a(void)

void FUN_1440fc19a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9659f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fc1f8 FUN_1440fc1f8 body=93 status=ok
// SIG undefined FUN_1440fc1f8(void)

void FUN_1440fc1f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9659f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fc256 FUN_1440fc256 body=126 status=ok
// SIG undefined FUN_1440fc256(void)

void FUN_1440fc256(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9659f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fc2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fc2e2 FUN_1440fc2e2 body=21 status=ok
// SIG undefined FUN_1440fc2e2(void)

undefined8 FUN_1440fc2e2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1440fc2f8 FUN_1440fc2f8 body=29 status=ok
// SIG undefined FUN_1440fc2f8(void)

undefined8 FUN_1440fc2f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fc494 FUN_1440fc494 body=93 status=ok
// SIG undefined FUN_1440fc494(void)

void FUN_1440fc494(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b965a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fc4f2 FUN_1440fc4f2 body=93 status=ok
// SIG undefined FUN_1440fc4f2(void)

void FUN_1440fc4f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b965a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fc550 FUN_1440fc550 body=126 status=ok
// SIG undefined FUN_1440fc550(void)

void FUN_1440fc550(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b965a60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fc5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fc5d8 FUN_1440fc5d8 body=266 status=ok
// SIG undefined FUN_1440fc5d8(void)

undefined8 FUN_1440fc5d8(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440fc6dc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fc6dc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440fc6dc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fc690;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440ed1f2(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1440fc690;
    }
  }
  uVar6 = 0;
LAB_1440fc690:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fc6e4 FUN_1440fc6e4 body=162 status=ok
// SIG undefined FUN_1440fc6e4(void)

void FUN_1440fc6e4(longlong *param_1,undefined4 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1440fc771;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440fc771:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440fc786 FUN_1440fc786 body=374 status=ok
// SIG undefined FUN_1440fc786(void)

void FUN_1440fc786(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1440fc82f;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1440fc82f:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
    }
  }
  return;
}



// FUNCTION 1440fc8fc FUN_1440fc8fc body=320 status=ok
// SIG undefined FUN_1440fc8fc(void)

bool FUN_1440fc8fc(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 1440fca3c FUN_1440fca3c body=346 status=ok
// SIG undefined FUN_1440fca3c(void)

void FUN_1440fca3c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1440fcace;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1440fcace:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1440fcb96 FUN_1440fcb96 body=275 status=ok
// SIG undefined FUN_1440fcb96(void)

int FUN_1440fcb96(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar3 = FUN_1440fccaa(lVar1,*param_2);
    iVar12 = 0;
    iVar8 = 0;
    do {
      lVar11 = (longlong)iVar8;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar6) {
        iVar2 = iVar6;
      }
      lVar13 = lVar1 + 8 + lVar11 * 8;
      iVar9 = iVar8;
      lVar5 = lVar11;
      do {
        lVar5 = lVar5 + 1;
        iVar10 = iVar2;
        if (lVar7 <= lVar5) break;
        bVar4 = FUN_1440fccaa(lVar13,*param_2);
        iVar9 = iVar9 + 1;
        lVar13 = lVar13 + 8;
        iVar10 = iVar9;
      } while ((bVar3 & 1) == bVar4);
      if ((bVar3 & 1) == 0) {
        if (iVar12 != iVar8) {
          memmove((void *)(lVar1 + (longlong)iVar12 * 8),(void *)(lVar1 + lVar11 * 8),
                  (longlong)(iVar10 - iVar8) << 3);
        }
        iVar12 = iVar12 + (iVar10 - iVar8);
      }
      iVar8 = iVar10;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar7);
    *(int *)(param_1 + 1) = iVar12;
    iVar6 = iVar6 - iVar12;
  }
  return iVar6;
}



// FUNCTION 1440fccaa FUN_1440fccaa body=159 status=ok
// SIG undefined FUN_1440fccaa(void)

bool FUN_1440fccaa(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 != 0) &&
       ((((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)) &&
        ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
      return false;
    }
    if (((param_2[1] != 0) && (-1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
         (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
      return (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
    }
  }
  return true;
}



// FUNCTION 1440fcd5c FUN_1440fcd5c body=29 status=ok
// SIG undefined FUN_1440fcd5c(void)

undefined8 FUN_1440fcd5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fcef8 FUN_1440fcef8 body=93 status=ok
// SIG undefined FUN_1440fcef8(void)

void FUN_1440fcef8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fcf56 FUN_1440fcf56 body=93 status=ok
// SIG undefined FUN_1440fcf56(void)

void FUN_1440fcf56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b965c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fcfb4 FUN_1440fcfb4 body=126 status=ok
// SIG undefined FUN_1440fcfb4(void)

void FUN_1440fcfb4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b965c40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fd023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fd04c FUN_1440fd04c body=289 status=ok
// SIG undefined FUN_1440fd04c(void)

undefined8 FUN_1440fd04c(longlong param_1,longlong *param_2)

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
    if (iVar1 == 2) goto LAB_1440fd167;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fd167;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440fd167:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fd0fb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*param_2 != 0) && (*param_2 == *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xac8))) {
        FUN_148d06232();
      }
      goto LAB_1440fd0fb;
    }
  }
  uVar6 = 0;
LAB_1440fd0fb:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fd16e FUN_1440fd16e body=151 status=ok
// SIG undefined FUN_1440fd16e(void)

void FUN_1440fd16e(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = (longlong)*(int *)(*param_1 + 0x60);
  if (lVar4 != 0) {
    plVar6 = *(longlong **)(*param_1 + 0x58);
    plVar5 = plVar6 + lVar4 * 0x11;
    do {
      lVar4 = *plVar6;
      if ((*(char *)(lVar4 + 0xa8) == '\x01') && (lVar3 = plVar6[6], (longlong)(int)lVar3 != 0)) {
        uVar1 = *(undefined4 *)(lVar4 + 0x6c);
        lVar2 = plVar6[5];
        lVar7 = 0;
        do {
          (**(code **)(**(longlong **)(lVar2 + lVar7) + 0x18))
                    (*(longlong **)(lVar2 + lVar7),*plVar6,uVar1,lVar4 + 0x90);
          lVar7 = lVar7 + 0x10;
        } while ((longlong)(int)lVar3 * 0x10 != lVar7);
      }
      plVar6 = plVar6 + 0x11;
    } while (plVar6 != plVar5);
  }
  return;
}



// FUNCTION 1440fd230 FUN_1440fd230 body=29 status=ok
// SIG undefined FUN_1440fd230(void)

undefined8 FUN_1440fd230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fd24e FUN_1440fd24e body=204 status=ok
// SIG undefined FUN_1440fd24e(void)

void FUN_1440fd24e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1440fd2fb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440fd2fb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440fd31a FUN_1440fd31a body=171 status=ok
// SIG undefined FUN_1440fd31a(void)

void FUN_1440fd31a(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_1440fd3af;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440fd3af:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440fd3c6 FUN_1440fd3c6 body=186 status=ok
// SIG undefined FUN_1440fd3c6(void)

void FUN_1440fd3c6(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1440fd468;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440fd468:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440fd480 FUN_1440fd480 body=171 status=ok
// SIG undefined FUN_1440fd480(void)

void FUN_1440fd480(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_1440fd515;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1440fd515:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1440fd52c FUN_1440fd52c body=29 status=ok
// SIG undefined FUN_1440fd52c(void)

undefined8 FUN_1440fd52c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fd6c8 FUN_1440fd6c8 body=93 status=ok
// SIG undefined FUN_1440fd6c8(void)

void FUN_1440fd6c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fd726 FUN_1440fd726 body=93 status=ok
// SIG undefined FUN_1440fd726(void)

void FUN_1440fd726(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fd784 FUN_1440fd784 body=126 status=ok
// SIG undefined FUN_1440fd784(void)

void FUN_1440fd784(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b966030;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fd7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fd80c FUN_1440fd80c body=266 status=ok
// SIG undefined FUN_1440fd80c(void)

undefined8 FUN_1440fd80c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440fd910;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fd910;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440fd910:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fd8c4;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14142ad8e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1440fd8c4;
    }
  }
  uVar6 = 0;
LAB_1440fd8c4:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fd918 FUN_1440fd918 body=29 status=ok
// SIG undefined FUN_1440fd918(void)

undefined8 FUN_1440fd918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fdab4 FUN_1440fdab4 body=93 status=ok
// SIG undefined FUN_1440fdab4(void)

void FUN_1440fdab4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9660a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fdb12 FUN_1440fdb12 body=93 status=ok
// SIG undefined FUN_1440fdb12(void)

void FUN_1440fdb12(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9660a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fdb70 FUN_1440fdb70 body=126 status=ok
// SIG undefined FUN_1440fdb70(void)

void FUN_1440fdb70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9660a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fdbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fdbf8 FUN_1440fdbf8 body=266 status=ok
// SIG undefined FUN_1440fdbf8(void)

undefined8 FUN_1440fdbf8(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440fdcfc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fdcfc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440fdcfc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fdcb0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1440fb03c(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1440fdcb0;
    }
  }
  uVar6 = 0;
LAB_1440fdcb0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fdd04 FUN_1440fdd04 body=29 status=ok
// SIG undefined FUN_1440fdd04(void)

undefined8 FUN_1440fdd04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fdea0 FUN_1440fdea0 body=93 status=ok
// SIG undefined FUN_1440fdea0(void)

void FUN_1440fdea0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fdefe FUN_1440fdefe body=93 status=ok
// SIG undefined FUN_1440fdefe(void)

void FUN_1440fdefe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fdf5c FUN_1440fdf5c body=126 status=ok
// SIG undefined FUN_1440fdf5c(void)

void FUN_1440fdf5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b966110;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fdfcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fdfe6 FUN_1440fdfe6 body=268 status=ok
// SIG undefined FUN_1440fdfe6(void)

undefined8 FUN_1440fdfe6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440fe0ec;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fe0ec;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440fe0ec:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fe0a0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      FUN_1440f9670(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_1440fe0a0;
    }
  }
  uVar6 = 0;
LAB_1440fe0a0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fe0f4 FUN_1440fe0f4 body=29 status=ok
// SIG undefined FUN_1440fe0f4(void)

undefined8 FUN_1440fe0f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fe290 FUN_1440fe290 body=93 status=ok
// SIG undefined FUN_1440fe290(void)

void FUN_1440fe290(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fe2ee FUN_1440fe2ee body=93 status=ok
// SIG undefined FUN_1440fe2ee(void)

void FUN_1440fe2ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fe34c FUN_1440fe34c body=126 status=ok
// SIG undefined FUN_1440fe34c(void)

void FUN_1440fe34c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b966180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fe3bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fe3d4 FUN_1440fe3d4 body=275 status=ok
// SIG undefined FUN_1440fe3d4(void)

undefined8 FUN_1440fe3d4(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1440fe4e1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fe4e1;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440fe4e1:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fe483;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148d0945a(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_1440fe483;
    }
  }
  uVar6 = 0;
LAB_1440fe483:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fe4e8 FUN_1440fe4e8 body=29 status=ok
// SIG undefined FUN_1440fe4e8(void)

undefined8 FUN_1440fe4e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fe684 FUN_1440fe684 body=93 status=ok
// SIG undefined FUN_1440fe684(void)

void FUN_1440fe684(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9661f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fe6e2 FUN_1440fe6e2 body=93 status=ok
// SIG undefined FUN_1440fe6e2(void)

void FUN_1440fe6e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9661f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fe740 FUN_1440fe740 body=126 status=ok
// SIG undefined FUN_1440fe740(void)

void FUN_1440fe740(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9661f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fe7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fe7c8 FUN_1440fe7c8 body=266 status=ok
// SIG undefined FUN_1440fe7c8(void)

undefined8 FUN_1440fe7c8(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440fe8cc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fe8cc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440fe8cc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fe880;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14142ad8e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1440fe880;
    }
  }
  uVar6 = 0;
LAB_1440fe880:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fe8d4 FUN_1440fe8d4 body=29 status=ok
// SIG undefined FUN_1440fe8d4(void)

undefined8 FUN_1440fe8d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fea70 FUN_1440fea70 body=93 status=ok
// SIG undefined FUN_1440fea70(void)

void FUN_1440fea70(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440feace FUN_1440feace body=93 status=ok
// SIG undefined FUN_1440feace(void)

void FUN_1440feace(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440feb2c FUN_1440feb2c body=126 status=ok
// SIG undefined FUN_1440feb2c(void)

void FUN_1440feb2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b966260;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440feb9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440febb6 FUN_1440febb6 body=268 status=ok
// SIG undefined FUN_1440febb6(void)

undefined8 FUN_1440febb6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440fecbc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440fecbc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440fecbc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440fec70;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      FUN_1440f9670(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_1440fec70;
    }
  }
  uVar6 = 0;
LAB_1440fec70:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440fecc8 FUN_1440fecc8 body=29 status=ok
// SIG undefined FUN_1440fecc8(void)

undefined8 FUN_1440fecc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440fee64 FUN_1440fee64 body=93 status=ok
// SIG undefined FUN_1440fee64(void)

void FUN_1440fee64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9662d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440feec2 FUN_1440feec2 body=93 status=ok
// SIG undefined FUN_1440feec2(void)

void FUN_1440feec2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9662d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fef20 FUN_1440fef20 body=126 status=ok
// SIG undefined FUN_1440fef20(void)

void FUN_1440fef20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9662d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fef8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440fef9e FUN_1440fef9e body=37 status=ok
// SIG undefined FUN_1440fef9e(void)

void FUN_1440fef9e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_1440fa742(uVar1,uVar2);
  return;
}



// FUNCTION 1440fefc4 FUN_1440fefc4 body=290 status=ok
// SIG undefined FUN_1440fefc4(void)

undefined8 FUN_1440fefc4(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440ff0e0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440ff0e0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440ff0e0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440ff093;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
      FUN_1440fa742(uVar7,uVar5);
      uVar7 = 1;
      goto LAB_1440ff093;
    }
  }
  uVar7 = 0;
LAB_1440ff093:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ff0e8 FUN_1440ff0e8 body=29 status=ok
// SIG undefined FUN_1440ff0e8(void)

undefined8 FUN_1440ff0e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ff284 FUN_1440ff284 body=93 status=ok
// SIG undefined FUN_1440ff284(void)

void FUN_1440ff284(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ff2e2 FUN_1440ff2e2 body=93 status=ok
// SIG undefined FUN_1440ff2e2(void)

void FUN_1440ff2e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ff340 FUN_1440ff340 body=126 status=ok
// SIG undefined FUN_1440ff340(void)

void FUN_1440ff340(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b966340;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440ff3af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440ff3be FUN_1440ff3be body=45 status=ok
// SIG undefined FUN_1440ff3be(void)

void FUN_1440ff3be(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_1466230ec(uVar1,uVar2,param_2);
  return;
}



// FUNCTION 1440ff3ec FUN_1440ff3ec body=293 status=ok
// SIG undefined FUN_1440ff3ec(void)

undefined8 FUN_1440ff3ec(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440ff50b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440ff50b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440ff50b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440ff49b;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
      FUN_1466230ec(uVar7,uVar5,param_2);
      uVar7 = 1;
      goto LAB_1440ff49b;
    }
  }
  uVar7 = 0;
LAB_1440ff49b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ff512 FUN_1440ff512 body=29 status=ok
// SIG undefined FUN_1440ff512(void)

undefined8 FUN_1440ff512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ff6ae FUN_1440ff6ae body=93 status=ok
// SIG undefined FUN_1440ff6ae(void)

void FUN_1440ff6ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9663b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ff70c FUN_1440ff70c body=93 status=ok
// SIG undefined FUN_1440ff70c(void)

void FUN_1440ff70c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9663b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ff76a FUN_1440ff76a body=126 status=ok
// SIG undefined FUN_1440ff76a(void)

void FUN_1440ff76a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9663b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440ff7d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440ff7e8 FUN_1440ff7e8 body=45 status=ok
// SIG undefined FUN_1440ff7e8(void)

void FUN_1440ff7e8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_1466230ec(uVar1,uVar2,param_2);
  return;
}



// FUNCTION 1440ff816 FUN_1440ff816 body=293 status=ok
// SIG undefined FUN_1440ff816(void)

undefined8 FUN_1440ff816(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440ff935;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440ff935;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1440ff935:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440ff8c5;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
      FUN_1466230ec(uVar7,uVar5,param_2);
      uVar7 = 1;
      goto LAB_1440ff8c5;
    }
  }
  uVar7 = 0;
LAB_1440ff8c5:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ff948 FUN_1440ff948 body=29 status=ok
// SIG undefined FUN_1440ff948(void)

undefined8 FUN_1440ff948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ffae4 FUN_1440ffae4 body=93 status=ok
// SIG undefined FUN_1440ffae4(void)

void FUN_1440ffae4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ffb42 FUN_1440ffb42 body=93 status=ok
// SIG undefined FUN_1440ffb42(void)

void FUN_1440ffb42(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440ffba0 FUN_1440ffba0 body=126 status=ok
// SIG undefined FUN_1440ffba0(void)

void FUN_1440ffba0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b966420;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440ffc0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440ffc2e FUN_1440ffc2e body=271 status=ok
// SIG undefined FUN_1440ffc2e(void)

undefined8 FUN_1440ffc2e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440ffd37;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440ffd37;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1440ffd37:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440ffcef;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x2e0) = 0;
      uVar5 = 1;
      goto LAB_1440ffcef;
    }
  }
  uVar5 = 0;
LAB_1440ffcef:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ffd3e FUN_1440ffd3e body=29 status=ok
// SIG undefined FUN_1440ffd3e(void)

undefined8 FUN_1440ffd3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440ffeda FUN_1440ffeda body=93 status=ok
// SIG undefined FUN_1440ffeda(void)

void FUN_1440ffeda(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fff38 FUN_1440fff38 body=93 status=ok
// SIG undefined FUN_1440fff38(void)

void FUN_1440fff38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b966490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440fff96 FUN_1440fff96 body=126 status=ok
// SIG undefined FUN_1440fff96(void)

void FUN_1440fff96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b966490;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144100005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144100020 FUN_144100020 body=268 status=ok
// SIG undefined FUN_144100020(void)

undefined8 FUN_144100020(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144100126;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144100126;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_144100126:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441000de;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x388) = 0;
      uVar5 = 1;
      goto LAB_1441000de;
    }
  }
  uVar5 = 0;
LAB_1441000de:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14410012e FUN_14410012e body=29 status=ok
// SIG undefined FUN_14410012e(void)

undefined8 FUN_14410012e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441002ca FUN_1441002ca body=93 status=ok
// SIG undefined FUN_1441002ca(void)

void FUN_1441002ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966570;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144100328 FUN_144100328 body=93 status=ok
// SIG undefined FUN_144100328(void)

void FUN_144100328(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966570;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144100386 FUN_144100386 body=126 status=ok
// SIG undefined FUN_144100386(void)

void FUN_144100386(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b966570;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b966500;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441003f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144100404 FUN_144100404 body=104 status=ok
// SIG undefined FUN_144100404(void)

void FUN_144100404(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x238) + 0x700))();
  if (cVar2 != '\0') {
    FUN_1440fd24e(lVar1 + 0x1a8,param_2,param_3,*(undefined4 *)(lVar1 + 0x2f0));
    return;
  }
  return;
}



// FUNCTION 14410046c FUN_14410046c body=335 status=ok
// SIG undefined FUN_14410046c(void)

undefined8 FUN_14410046c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441005b5;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1441005b5;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar8 = local_48;
  }
  else {
LAB_1441005b5:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144100527;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x238) + 0x700))();
      uVar7 = 1;
      if (cVar3 != '\0') {
        FUN_1440fd24e(lVar6 + 0x1a8,param_2,param_3,*(undefined4 *)(lVar6 + 0x2f0));
      }
      goto LAB_144100527;
    }
  }
  uVar7 = 0;
LAB_144100527:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441005bc FUN_1441005bc body=29 status=ok
// SIG undefined FUN_1441005bc(void)

undefined8 FUN_1441005bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144100758 FUN_144100758 body=93 status=ok
// SIG undefined FUN_144100758(void)

void FUN_144100758(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9665e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441007b6 FUN_1441007b6 body=93 status=ok
// SIG undefined FUN_1441007b6(void)

void FUN_1441007b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9665e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144100814 FUN_144100814 body=126 status=ok
// SIG undefined FUN_144100814(void)

void FUN_144100814(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9665e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144100883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14410089c FUN_14410089c body=275 status=ok
// SIG undefined FUN_14410089c(void)

undefined8 FUN_14410089c(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1441009a9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441009a9;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441009a9:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14410094b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_145c62e7a(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_14410094b;
    }
  }
  uVar6 = 0;
LAB_14410094b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441009b0 FUN_1441009b0 body=29 status=ok
// SIG undefined FUN_1441009b0(void)

undefined8 FUN_1441009b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144100b4c FUN_144100b4c body=93 status=ok
// SIG undefined FUN_144100b4c(void)

void FUN_144100b4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144100baa FUN_144100baa body=93 status=ok
// SIG undefined FUN_144100baa(void)

void FUN_144100baa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b966650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144100c08 FUN_144100c08 body=126 status=ok
// SIG undefined FUN_144100c08(void)

void FUN_144100c08(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b966650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144100c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144100c90 FUN_144100c90 body=275 status=ok
// SIG undefined FUN_144100c90(void)

undefined8 FUN_144100c90(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144100d9d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144100d9d;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144100d9d:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144100d3f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_145c62e7a(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_144100d3f;
    }
  }
  uVar6 = 0;
LAB_144100d3f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144100da8 FUN_144100da8 body=168 status=ok
// SIG undefined FUN_144100da8(void)

float FUN_144100da8(float *param_1,float *param_2,longlong *param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  double local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_3 = (longlong *)*param_3;
  fVar2 = *param_2 * *param_1;
  if (param_3 != (longlong *)0x0) {
    local_48 = (double)*param_2;
    FUN_140002266(local_40,L"%.2f = %.2f * %.2f (InitialDamage * DPS Modifier)",(double)fVar2,
                  (double)*param_1);
    uVar1 = FUN_1411a0a54();
    (**(code **)(*param_3 + 8))(param_3,uVar1,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144100e7a FUN_144100e7a body=29 status=ok
// SIG undefined FUN_144100e7a(void)

undefined8 FUN_144100e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144100e98 FUN_144100e98 body=51 status=ok
// SIG undefined FUN_144100e98(void)

ulonglong FUN_144100e98(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_2 + 0xaa);
  if (cVar1 == '\x01') {
    FUN_140b47236(*param_1 + 0x20);
    *(undefined1 *)param_1[1] = 1;
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) ^ 1) & 0xffffffff;
}



// FUNCTION 144100eea FUN_144100eea body=12 status=ok
// SIG undefined FUN_144100eea(void)

void FUN_144100eea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144100ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144100ef6 FUN_144100ef6 body=29 status=ok
// SIG undefined FUN_144100ef6(void)

undefined8 FUN_144100ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144100f14 FUN_144100f14 body=834 status=ok
// SIG undefined FUN_144100f14(void)

undefined8 FUN_144100f14(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_138 [32];
  char local_118 [16];
  longlong *local_108;
  undefined4 local_f0 [2];
  char local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined4 local_c0 [2];
  float local_b8;
  undefined4 uStack_b4;
  ushort local_a0;
  byte local_98;
  float local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  float *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = *param_1;
  if (param_2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_2 + 8))(param_2);
    lVar7 = FUN_1418c9c00();
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) {
      plVar12 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        plVar12 = param_2;
      }
      goto LAB_144100f75;
    }
  }
  plVar12 = (longlong *)0x0;
LAB_144100f75:
  local_118[0] = '\0';
  local_f0[0] = 0;
  FUN_1456bb102(local_118,*(undefined8 *)(lVar9 + 0x38));
  local_e8 = '\0';
  local_c0[0] = 0;
  lVar9 = plVar12[0x25];
  if (lVar9 == 0) {
    uVar8 = FUN_14016979c();
    lVar9 = FUN_14477b664(uVar8);
    plVar12[0x25] = lVar9;
  }
  lVar6 = plVar12[0x26];
  if (((lVar6 == 0) && (lVar6 = 0, lVar9 != 0)) && (plVar12[0x24] != 0)) {
    plVar2 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar8,plVar12 + 0x24);
    }
    plVar12[0x26] = lVar6;
  }
  FUN_1400606f6(&local_90,lVar6,local_118);
  pfVar10 = local_60;
  if (local_60 == (float *)0x0) {
    pfVar10 = &local_90;
  }
  pfVar11 = (float *)&DAT_14c9a40e0;
  if (0 < local_58) {
    pfVar11 = pfVar10;
  }
  pfVar10 = &local_b8;
  FUN_1400603ec(pfVar10,lVar6,pfVar11);
  pfVar11 = local_60;
  if (local_60 == (float *)0x0) {
    pfVar11 = &local_90;
  }
  FUN_1446fdf58(pfVar11,local_58);
  if (local_60 != (float *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 == 3) {
    uVar5 = 3;
    fVar13 = local_b8;
  }
  else {
    pfVar11 = &local_90;
    FUN_1400b56fe(pfVar11,&local_b8,3);
    fVar13 = local_90;
    if (local_70 == 0) {
      fVar13 = 1.0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_78) {
        pfVar11 = (float *)CONCAT44(uStack_8c,local_90);
      }
      (*pcVar3)(pfVar11);
    }
    if (0x18 < local_78) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
    uVar5 = (uint)local_98;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_a0) {
      pfVar10 = (float *)CONCAT44(uStack_b4,local_b8);
    }
    (*pcVar3)(pfVar10);
  }
  if (0x18 < local_a0) {
    FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
  }
  FUN_1448173f8(local_c0);
  if (local_e8 != '\0') {
    if (local_e8 == '\x01') {
      local_e0 = 0;
    }
    else if ((local_e8 == '\x03') && (local_d8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))();
      }
    }
    local_e8 = '\0';
  }
  FUN_1448173f8(local_f0);
  if ((local_118[0] == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  pfVar10 = (float *)param_1[1];
  *pfVar10 = fVar13 * *pfVar10;
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)pfVar10 >> 8),1);
}



// FUNCTION 144101276 FUN_144101276 body=12 status=ok
// SIG undefined FUN_144101276(void)

void FUN_144101276(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014410127f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}


