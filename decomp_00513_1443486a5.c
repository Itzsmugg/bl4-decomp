// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1443486a5 FUN_1443486a5 body=5473 status=ok
// SIG undefined FUN_1443486a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443486a5(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char *local_a8;
  int local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cbe6380);
  if (cVar2 == '\0') {
    _DAT_14cbe6380 = 0;
    uRam000000014cbe6388 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6390 = (ulonglong)uVar3;
  _DAT_14cbe6398 = 0x47efffffe0000000;
  _DAT_14cbe63a0 = 0x47efffffe0000000;
  _DAT_14cbe63a8 = 0x47efffffe0000000;
  _DAT_14cbe63b0 = 0x47efffffe0000000;
  _DAT_14cbe63b8 = 0x47efffffe0000000;
  _DAT_14cbe63c0 = 0x47efffffe0000000;
  _DAT_14cbe63c8 = 0x47efffffe0000000;
  _DAT_14cbe63d0 = 0x47efffffe0000000;
  local_a8 = "Cash";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe63d8 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbe63e0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144341784);
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe63f4 = 0;
  FUN_14052b5e0(&DAT_14cbe63f0,"PlayerAwareness",0);
  _DAT_14cbe6400 = "PlayerAwareness";
  local_a8 = "basic";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6408 = (ulonglong)uVar3;
  local_a8 = "challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6410 = (ulonglong)uVar3;
  local_a8 = "online";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6418 = (ulonglong)uVar3;
  local_a8 = "social";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6420 = (ulonglong)uVar3;
  local_a8 = "alert";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6428 = (ulonglong)uVar3;
  local_a8 = "photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6430 = (ulonglong)uVar3;
  local_a8 = "generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6438 = (ulonglong)uVar3;
  local_a8 = "mission";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6440 = (ulonglong)uVar3;
  local_a8 = "mail";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6448 = (ulonglong)uVar3;
  local_a8 = "respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6450 = (ulonglong)uVar3;
  local_a8 = "tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6458 = (ulonglong)uVar3;
  local_a8 = "special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6460 = (ulonglong)uVar3;
  local_a8 = "generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6468 = (ulonglong)uVar3;
  local_a8 = "vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6470 = (ulonglong)uVar3;
  local_a8 = "ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6478 = (ulonglong)uVar3;
  local_a8 = "INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6480 = (ulonglong)uVar3;
  local_a8 = "NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6488 = (ulonglong)uVar3;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6490 = (ulonglong)uVar3;
  local_a8 = "collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6498 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbe64a0,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbe64a8,L"Party",1);
  FUN_1446f470e(&DAT_14cbe64b0,&DAT_149e063b2);
  _DAT_14cbe64bc = 0;
  FUN_14052b5e0(&DAT_14cbe64b8,"State",0);
  local_a8 = "TrackerObjects";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe64c8 = (ulonglong)uVar3;
  _DAT_14cbe64d4 = 0;
  FUN_14052b5e0(&DAT_14cbe64d0,"address",0);
  _DAT_14cbe64e0 = "address";
  _DAT_14cbe64ec = 0;
  FUN_14052b5e0(&DAT_14cbe64e8,"enabled",0);
  _DAT_14cbe64f8 = "enabled";
  _DAT_14cbe6504 = 0;
  FUN_14052b5e0(&DAT_14cbe6500,"discovered",0);
  _DAT_14cbe6510 = "discovered";
  _DAT_14cbe651c = 0;
  FUN_14052b5e0(&DAT_14cbe6518,"map_name",0);
  _DAT_14cbe6528 = "map_name";
  local_a8 = "Fragment1";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe6530 = (ulonglong)uVar3;
  local_a8 = "Fragment2";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe6538 = (ulonglong)uVar3;
  local_a8 = "Fragment3";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe6540 = (ulonglong)uVar3;
  local_a8 = "tracker_enabled";
  local_a0 = 0xf;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe7058 = (ulonglong)uVar3;
  local_a8 = "tracker_discovered";
  local_a0 = 0x12;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe7060 = (ulonglong)uVar3;
  DAT_14cbe6548 = 0;
  atexit((_func_5014 *)&LAB_144343eaa);
  local_a8 = "onlinecharacterprefs";
  local_a0 = 0x14;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe66c8 = 0;
  uRam000000014cbe66d0 = 0;
  _DAT_14cbe66d8 = 0;
  DAT_14cbe66e0 = 0;
  uRam000000014cbe66e8 = 0;
  FUN_1446ddda2(&DAT_14cbe66c8,"onlinecharacterprefs");
  atexit((_func_5014 *)&LAB_1443441bf);
  _DAT_14cbe66f0 = 0;
  uRam000000014cbe66f8 = 0;
  _DAT_14cbe6700 = 0;
  DAT_14cbe6708 = 0;
  uRam000000014cbe6710 = 0;
  FUN_1446ddda2(&DAT_14cbe66f0,"oak.onlinecharacterprefs");
  atexit((_func_5014 *)&LAB_1443441d0);
  local_a8 = "Standard";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6718 = (ulonglong)uVar3;
  local_a8 = "PrologueSkip";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6720 = (ulonglong)uVar3;
  local_a8 = "UltimateVaultHunterSkip";
  local_a0 = 0x17;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6728 = (ulonglong)uVar3;
  local_a8 = "SkipToDLC_Cowbell";
  local_a0 = 0x11;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6730 = (ulonglong)uVar3;
  local_a8 = "SkipToDLC_Harmonica";
  local_a0 = 0x13;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6738 = (ulonglong)uVar3;
  ram0x00014cbe6744 = 0;
  FUN_14052b5e0(&DAT_14cbe6740,"local",0);
  _DAT_14cbe6750 = "local";
  _DAT_14cbe675c = 0;
  FUN_14052b5e0(&DAT_14cbe6758,"cloud",0);
  _DAT_14cbe6768 = "cloud";
  _DAT_14cbe6774 = 0;
  FUN_14052b5e0(&DAT_14cbe6770,L"rInvalid resolution in tiff: zero or negative.",0);
  _DAT_14cbe6780 = L"rInvalid resolution in tiff: zero or negative.";
  _DAT_14cbe678c = 0;
  FUN_14052b5e0(&DAT_14cbe6788,&DAT_14a1750e5,0);
  _DAT_14cbe6798 = &DAT_14a1750e5;
  _DAT_14cbe67a4 = 0;
  FUN_14052b5e0(&DAT_14cbe67a0,&DAT_14b400ca8,0);
  _DAT_14cbe67b0 = &DAT_14b400ca8;
  _DAT_14cbe67bc = 0;
  FUN_14052b5e0(&DAT_14cbe67b8,&DAT_14b9dc5b4,0);
  _DAT_14cbe67c8 = &DAT_14b9dc5b4;
  _DAT_14cbe67d4 = 0;
  _DAT_14cbe67d8 = 0;
  FUN_14052b5e0(&DAT_14cbe67d0,"domain",0);
  _DAT_14cbe67e0 = "domain";
  _DAT_14cbe67ec = 0;
  _DAT_14cbe67f0 = 0;
  FUN_14052b5e0(&DAT_14cbe67e8,"domains",0);
  _DAT_14cbe67f8 = "domains";
  _DAT_14cbe6804 = 0;
  _DAT_14cbe6808 = 0;
  FUN_14052b5e0(&DAT_14cbe6800,"cloud",0);
  _DAT_14cbe6810 = "cloud";
  _DAT_14cbe681c = 0;
  _DAT_14cbe6820 = 0;
  FUN_14052b5e0(&DAT_14cbe6818,"shared",0);
  _DAT_14cbe6828 = "shared";
  DAT_14cbe6834._0_4_ = 0;
  DAT_14cbe6834._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbe6830,"characters",0);
  _DAT_14cbe6840 = "characters";
  _DAT_14cbe684c = 0;
  _DAT_14cbe6850 = 0;
  FUN_14052b5e0(&DAT_14cbe6848,"sections",0);
  _DAT_14cbe6858 = "sections";
  _DAT_14cbe6864 = 0;
  _DAT_14cbe6868 = 0;
  FUN_14052b5e0(&DAT_14cbe6860,"roles",0);
  _DAT_14cbe6870 = "roles";
  DAT_14cbe66b0._4_4_ = 0;
  DAT_14cbe66b8 = 0;
  FUN_14052b5e0(&DAT_14cbe66b0,"state",0);
  _DAT_14cbe66c0 = "state";
  DAT_14cbe6878._4_4_ = 0;
  DAT_14cbe6880 = 0;
  FUN_14052b5e0(&DAT_14cbe6878,"progression",0);
  _DAT_14cbe6888 = "progression";
  DAT_14cbe6698._4_4_ = 0;
  DAT_14cbe66a0 = 0;
  FUN_14052b5e0(&DAT_14cbe6698,"class",0);
  _DAT_14cbe66a8 = "class";
  DAT_14cbe7068._4_4_ = 0;
  DAT_14cbe7070 = 0;
  FUN_14052b5e0(&DAT_14cbe7068,"pending_init",0);
  _DAT_14cbe7078 = "pending_init";
  _DAT_14cbe6894 = 0;
  _DAT_14cbe6898 = 0;
  FUN_14052b5e0(&DAT_14cbe6890,"creator",0);
  _DAT_14cbe68a0 = "creator";
  _DAT_14cbe68ac = 0;
  _DAT_14cbe68b0 = 0;
  FUN_14052b5e0(&DAT_14cbe68a8,&DAT_14b9dc5d4,0);
  _DAT_14cbe68b8 = &DAT_14b9dc5d4;
  _DAT_14cbe68c4 = 0;
  _DAT_14cbe68c8 = 0;
  FUN_14052b5e0(&DAT_14cbe68c0,"gender",0);
  _DAT_14cbe68d0 = "gender";
  _DAT_14cbe68dc = 0;
  _DAT_14cbe68e0 = 0;
  FUN_14052b5e0(&DAT_14cbe68d8,"backpack",0);
  _DAT_14cbe68e8 = "backpack";
  _DAT_14cbe68f4 = 0;
  _DAT_14cbe68f8 = 0;
  FUN_14052b5e0(&DAT_14cbe68f0,"missions",0);
  _DAT_14cbe6900 = "missions";
  _DAT_14cbe690c = 0;
  _DAT_14cbe6910 = 0;
  FUN_14052b5e0(&DAT_14cbe6908,"tracked_mission",0);
  _DAT_14cbe6918 = "tracked_mission";
  _DAT_14cbe6924 = 0;
  _DAT_14cbe6928 = 0;
  FUN_14052b5e0(&DAT_14cbe6920,"experience",0);
  _DAT_14cbe6930 = "experience";
  _DAT_14cbe693c = 0;
  _DAT_14cbe6940 = 0;
  FUN_14052b5e0(&DAT_14cbe6938,"inventory",0);
  _DAT_14cbe6948 = "inventory";
  _DAT_14cbe6954 = 0;
  _DAT_14cbe6958 = 0;
  FUN_14052b5e0(&DAT_14cbe6950,"versions",0);
  _DAT_14cbe6960 = "versions";
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe6968,L"gbx.vault.IO_Json",&DAT_14cbe6978,
                L"Force the save/load format for profile data to use JSON instead of YAML");
  atexit(FUN_1443441e1);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe6980,L"gbx.vault.KrakenFormat",&DAT_14cbe6990,
                L"Force the save system to store data ready for kraken");
  atexit(FUN_144344226);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe6998,L"gbx.vault.KrakenShadow",&DAT_14cbe69a8,
                L"If kraken format is active, are we sending full data or the shadow revisions?");
  atexit(FUN_14434426b);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14b9dcf70;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe69b0,L"gbx.vault.kraken_upload",L"EXPERIMENTAL do not use.",&local_a8);
  if (local_a0 != 0) {
    if (local_a8 == (char *)0x0) goto LAB_1443495bb;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1443495bb:
  atexit(FUN_1443447ce);
  local_a8 = "Use";
  local_a0 = 3;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe69f0 = (ulonglong)uVar3;
  local_a8 = "Sight";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe69f8 = (ulonglong)uVar3;
  local_a8 = "TargetLock";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6a00 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cbe6a08,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144344e20);
  FUN_140056680(&DAT_14cbe6a18,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144344e31);
  FUN_140056680(&DAT_14cbe6a28,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144344e42);
  FUN_140056680(&DAT_14cbe6a38,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144344e53);
  FUN_1446f470e(&DAT_14cbe6a48,L"LIMB_GORED",1);
  _DAT_14cbe6a50 = 0x4072c00000000000;
  _DAT_14cbe6a58 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbe6a60,L"body",1);
  FUN_1446f470e(&DAT_14cbe6a68,L"title_card",1);
  _DAT_14cbe6a78 = &LAB_1443453a5;
  _DAT_14cbe6a80 = 0x461f6c00;
  DAT_14cbe6a84 = 1;
  DAT_14cbe6a70 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe6a70;
  atexit((_func_5014 *)&LAB_1443453aa);
  DAT_14cbe6af0 = 0;
  _DAT_14cbe6af8 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1443463d6;
  local_a8 = &DAT_14011fc1e;
  FUN_14618e0a2(&local_a8);
  atexit((_func_5014 *)&LAB_144345407);
  _DAT_14cbe6b88 = &LAB_14434540c;
  _DAT_14cbe6b90 = 0x461f6800;
  DAT_14cbe6b94 = 1;
  DAT_14cbe6b80 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe6b80;
  atexit((_func_5014 *)&LAB_144345411);
  DAT_14cbe6c00 = 0;
  _DAT_14cbe6c08 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144346428;
  local_a8 = &DAT_14011fc1e;
  FUN_14618e79e(&local_a8);
  atexit((_func_5014 *)&LAB_14434546e);
  DAT_14cbe6c90 = 0;
  atexit((_func_5014 *)&LAB_144345473);
  local_a8 = "collisiondamageformula";
  local_a0 = 0x16;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6db8 = (ulonglong)uVar3;
  local_a8 = "boostcooldowntime";
  local_a0 = 0x11;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6dc0 = (ulonglong)uVar3;
  local_a8 = "boostconsumptionrate";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6dc8 = (ulonglong)uVar3;
  local_a8 = "healthtypes";
  local_a0 = 0xb;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6dd0 = (ulonglong)uVar3;
  local_a8 = "body";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6dd8 = (ulonglong)uVar3;
  _DAT_14cbe6de8 = &LAB_14434548b;
  _DAT_14cbe6df0 = 0x461f6400;
  DAT_14cbe6df4 = 1;
  DAT_14cbe6de0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe6de0;
  atexit((_func_5014 *)&LAB_144345490);
  DAT_14cbe6e60 = 0;
  _DAT_14cbe6e68 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144347174;
  local_a8 = &DAT_14011fc1e;
  FUN_14618ee9a(&local_a8);
  atexit((_func_5014 *)&LAB_1443454ed);
  local_a8 = "VEH_COG";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe6ef0 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbe6f68,L"Boosting",1);
  _DAT_14cbe6f70 = 0;
  _DAT_14cbe6f77 = 0;
  _DAT_14cbe6f80 = (undefined4)DAT_14c8464e0;
  uRam000000014cbe6f84 = DAT_14c8464e0._4_4_;
  uRam000000014cbe6f88 = (undefined4)DAT_14c8464e8;
  uRam000000014cbe6f8c = DAT_14c8464e8._4_4_;
  _DAT_14cbe6f90 = DAT_14c8464f0;
  FUN_1446f470e(&DAT_14cbe6f98,L"GbxSwimmable",1);
  FUN_1446f470e(&DAT_14cbe6fa0,L"WaterBodyCollision",1);
  local_a8 = "personal_vehicle";
  local_a0 = 0x10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe6fa8 = (ulonglong)uVar3;
  ram0x00014cbe6fb4 = 0;
  FUN_14052b5e0(&DAT_14cbe6fb0,"personal_vehicle",0);
  _DAT_14cbe6fc0 = "personal_vehicle";
  ram0x00014cbe6fcc = 0;
  FUN_14052b5e0(&DAT_14cbe6fc8,"hover_drive",0);
  _DAT_14cbe6fd8 = "hover_drive";
  ram0x00014cbe6fe4 = 0;
  FUN_14052b5e0(&DAT_14cbe6fe0,"personal_vehicle_customization",0);
  _DAT_14cbe6ff0 = "personal_vehicle_customization";
  ram0x00014cbe6ffc = 0;
  FUN_14052b5e0(&DAT_14cbe6ff8,"vehicle_weapon_slot",0);
  _DAT_14cbe7008 = "vehicle_weapon_slot";
  local_a8 = "body";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe7010 = (ulonglong)uVar3;
  local_a8 = "vehicle_spawn_skel";
  local_a0 = 0x12;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe7018 = (ulonglong)uVar3;
  local_a8 = "vehicle_cooldown";
  local_a0 = 0x10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe7020 = (ulonglong)uVar3;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144349c64 FUN_144349c64 body=69 status=ok
// SIG undefined FUN_144349c64(void)

int FUN_144349c64(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == -1) {
    param_3 = *(int *)(param_1 + 0x20);
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_14435cf80(param_3);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x30))) {
        param_3 = iVar1;
      }
    }
  }
  return param_3;
}



// FUNCTION 144349cba FUN_144349cba body=893 status=ok
// SIG undefined FUN_144349cba(void)

void FUN_144349cba(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408c7d08();
  lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar3 == 0) goto LAB_144349d15;
  lVar4 = FUN_14070560c();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_144349d15;
  FUN_14665e5b2(param_1);
  lVar4 = FUN_14497e828(lVar3);
  if (param_1[0x2f] == 0) {
    local_58 = (code *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    pcVar2 = local_58;
    local_50 = 3;
    *(undefined ***)local_58 = &PTR_LAB_14b9919e0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    *(longlong *)(local_58 + 0x10) = lVar6;
    *(undefined ***)local_58 = &PTR_FUN_14b9de390;
    *(undefined8 *)(local_58 + 0x18) = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 0x18) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar7 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar5 + 0x10);
        bVar9 = iVar7 == 0;
        if (bVar9) {
          *(int *)(lVar5 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)(pcVar2 + 0x1c) = iVar7;
    *(code **)(pcVar2 + 0x20) = FUN_14434a038;
    *(undefined4 *)(pcVar2 + 0x28) = 0;
    FUN_1459cc476(lVar3 + 0x2b98,&local_60,&local_58);
    if (local_50 != 0) {
      if (local_58 == (code *)0x0) goto LAB_144349d5e;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144349d5e:
  if (((lVar4 != 0) && (lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1), lVar5 != 0)) &&
     (*(char *)(lVar5 + 0x178) == '\x03')) {
    lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x398) + 0x18))(lVar3 + 0x398);
    if (((((*(longlong *)(lVar3 + 0x18) != 0) && (*(int *)(lVar3 + 0x14) != 0)) &&
         ((uVar1 = *(uint *)(lVar3 + 0x10), -1 < (int)uVar1 &&
          (((int)uVar1 < DAT_14c9647dc &&
           (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0))))))
        && (*(int *)(lVar5 + 0x10) == *(int *)(lVar3 + 0x14))) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
      FUN_145f9a87c(param_1);
    }
    lVar3 = FUN_140704886(lVar4);
    if (lVar3 != 0) {
      if (param_1[0x2d] == 0) {
        local_58 = FUN_148f05a68;
        local_50 = 0;
        FUN_14665e746(lVar3 + 0x2b0,&local_60,param_1);
        param_1[0x2d] = local_60;
      }
      if (param_1[0x2c] == 0) {
        local_58 = FUN_148f05bbe;
        local_50 = 0;
        FUN_14665e746(lVar3 + 0x280,&local_60,param_1);
        param_1[0x2c] = local_60;
      }
    }
  }
LAB_144349d15:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14434a038 FUN_14434a038 body=415 status=ok
// SIG undefined FUN_14434a038(void)

void FUN_14434a038(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  int local_30;
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    cVar2 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar4 = FUN_1400f6f32(uVar3);
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(lVar4 + 0x30);
        if (lVar1 != 0 && *(longlong *)(lVar4 + 0x68) != 0) {
          FUN_140d27df6(*(longlong *)(lVar4 + 0x68),local_24,param_2);
          if (-1 < local_24[0]) {
            local_38 = (undefined8 *)0x0;
            local_30 = 0;
            FUN_1446efa72(&local_38,0,2,0x10);
            local_30 = 2;
            *local_38 = &PTR_LAB_14b96eac0;
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
            *local_38 = &PTR_FUN_14b9de550;
            local_38[3] = param_2;
            local_48 = 0;
            local_40 = 0;
            FUN_1457cd628(&local_48,&local_38);
            FUN_140ceec8e(lVar1,local_50,local_24,&local_48);
            if (local_30 != 0) {
              if (local_38 == (undefined8 *)0x0) goto LAB_14434a0b0;
              (**(code **)*local_38)(local_38,0);
              FUN_1446efa72(&local_38,0,0,0x10);
              local_30 = 0;
            }
            if (local_38 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
LAB_14434a0b0:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434a1d8 FUN_14434a1d8 body=271 status=ok
// SIG undefined FUN_14434a1d8(void)

void FUN_14434a1d8(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_14070560c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_14497e828(lVar1);
      if (lVar2 != 0) {
        if ((param_1[0x2a] != 0) && ((*(byte *)(param_1[0x2a] + 0x10) & 1) != 0)) {
          FUN_1408256d2(param_1 + 0x2a);
        }
        if (param_1[0x2f] != 0) {
          FUN_14480f766(lVar1 + 0x2b98);
        }
        lVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
        if ((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
          lVar1 = FUN_140704886(lVar2);
          if (lVar1 != 0) {
            if (param_1[0x2d] != 0) {
              FUN_14480f766(lVar1 + 0x2b0);
            }
            if (param_1[0x2c] != 0) {
              FUN_14480f766(lVar1 + 0x280);
            }
          }
        }
        FUN_1406337e2(param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14434a2e8 FUN_14434a2e8 body=1438 status=ok
// SIG undefined FUN_14434a2e8(void)

void FUN_14434a2e8(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  int local_164;
  code *local_160;
  int local_158;
  undefined1 local_14c [12];
  undefined4 local_140;
  undefined1 local_13c;
  code *local_138;
  undefined4 local_130;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8;
  longlong *local_c8;
  longlong local_b8 [4];
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((((*(char *)((longlong)param_1 + 0xea) != '\0') ||
       (lVar6 = (**(code **)(*param_1 + 0x2b8))(), lVar6 == 0)) ||
      (*(char *)(lVar6 + 0x178) != '\x03')) ||
     ((plVar7 = (longlong *)(**(code **)(*param_1 + 0x180))(param_1), plVar7 == (longlong *)0x0 ||
      (lVar6 = (**(code **)(*param_1 + 0x2b8))(param_1), lVar6 == 0)))) goto LAB_14434a383;
  lVar8 = FUN_14070560c();
  if (((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
        ((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) != lVar8 + 0x30 ||
         (lVar8 = (**(code **)(*(longlong *)(lVar6 + 0x398) + 0x18))(lVar6 + 0x398),
         *(longlong *)(lVar8 + 0x18) == 0)))) || (*(int *)(lVar8 + 0x14) == 0)) ||
      (((uVar1 = *(uint *)(lVar8 + 0x10), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
       (lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar11 == 0)))) ||
     ((*(int *)(lVar11 + 0x10) != *(int *)(lVar8 + 0x14) ||
      ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) goto LAB_14434a383;
  lVar11 = FUN_14088c018();
  FUN_1411b80d0(lVar6,local_98);
  local_138 = DAT_14cbe73a0;
  FUN_1401533ba(local_14c,&local_138,1);
  FUN_144928d62(local_88,5,local_14c);
  iVar15 = -1;
  if (0 < *(int *)(lVar11 + 0x30)) {
    lVar6 = 0;
    lVar14 = 0;
    do {
      cVar3 = FUN_14493b798(*(longlong *)(lVar11 + 0x28) + lVar6,local_98);
      if (cVar3 != '\0') {
        iVar15 = (int)lVar14;
        goto LAB_14434a4bd;
      }
      lVar14 = lVar14 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar14 < *(int *)(lVar11 + 0x30));
    iVar15 = -1;
  }
LAB_14434a4bd:
  iVar13 = *(int *)(lVar11 + 0x20);
  lVar6 = (**(code **)(*plVar7 + 0x180))(plVar7);
  if (lVar6 != 0) {
    iVar5 = FUN_14435cf80(iVar13);
    iVar2 = iVar13;
    if (iVar5 < *(int *)(lVar11 + 0x30)) {
      iVar2 = iVar5;
    }
    if (-1 < iVar5) {
      iVar13 = iVar2;
    }
  }
  *(bool *)(param_1 + 0x2e) = iVar13 == iVar15;
  lVar6 = FUN_140149a73(plVar7,0);
  bVar4 = *(byte *)(param_1 + 0x2e);
  if (lVar6 != 0) {
    if ((bVar4 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_1405d584e(lVar11 + 0x38);
    }
    *(byte *)(param_1 + 0x2e) = bVar4;
    if ((param_1[0x2a] == 0) || ((*(byte *)(param_1[0x2a] + 0x10) & 1) == 0)) {
      local_138 = FUN_148f05c7c;
      local_130 = 0;
      local_164 = iVar15;
      FUN_14665e846(&local_160);
      memset(&local_138,0,0xa0);
      uVar9 = FUN_1406f625c(plVar7);
      uVar10 = FUN_140d84280(param_1 + 0x2a);
      local_1b8 = &local_160;
      FUN_140d84456(uVar10,lVar11 + 0x38,uVar9,&local_138);
      if (local_d8 != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
      if (local_118 != 0) {
        if (local_108 == (longlong *)0x0) {
          local_108 = local_f8;
        }
        (**(code **)(*local_108 + 0x10))();
      }
      iVar15 = local_164;
      if (local_158 == 0) {
LAB_14434a633:
        if (local_160 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_160 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_160)(local_160,0);
        FUN_1446efa72(&local_160,0,0,0x10);
        local_158 = 0;
        goto LAB_14434a633;
      }
      bVar4 = *(byte *)(param_1 + 0x2e);
    }
  }
  puVar12 = &DAT_14cbe73a8;
  if ((bVar4 & 1) != 0) {
    puVar12 = &DAT_14cbe73b0;
  }
  local_138 = (code *)*puVar12;
  local_13c = 1;
  local_130 = 0xffffffff;
  local_160 = DAT_14cbe73a0;
  local_158 = -1;
  local_140 = param_2;
  FUN_140f8b8f2(lVar8,&local_160,&local_138);
  plVar7 = (longlong *)plVar7[0x3e];
  if (plVar7 != (longlong *)0x0) {
    lVar6 = FUN_1403ca142();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      if (*(code **)(*plVar7 + 0x498) == (code *)&LAB_14015c36e) {
        cVar3 = (char)plVar7[0x42];
      }
      else {
        cVar3 = (**(code **)(*plVar7 + 0x498))(plVar7);
      }
      if ((((cVar3 == '\b') && (lVar6 = FUN_14088c018(), -1 < iVar15)) &&
          (iVar15 < *(int *)(lVar6 + 0x30))) &&
         ((lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 != 0 &&
          (*(longlong *)(lVar6 + 0x178) != 0)))) {
        lVar8 = FUN_14030d660();
        lVar6 = *(longlong *)(lVar6 + 0x178);
        if (((lVar6 != 0) && ((lVar8 != 0 && (lVar11 = *(longlong *)(lVar6 + 0x10), lVar11 != 0))))
           && ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar11 + 0x38) &&
               ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                 == lVar8 + 0x30 && (lVar6 = *(longlong *)(lVar6 + 0x488), lVar6 != 0)))))) {
          if (DAT_14cbae3d8 == 0) {
            local_138 = FUN_141030f22;
            local_170 = FUN_14081d0ea;
            local_178 = &LAB_1464f5fc4;
            local_188 = &LAB_148c3dd26;
            local_190 = &LAB_1459673ba;
            local_198 = L"Engine";
            local_1a0 = 0;
            local_1a8 = 0x10000004;
            local_1b0 = 0x10;
            local_1b8 = (code **)CONCAT44(local_1b8._4_4_,0x1360);
            local_180 = &local_138;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
          }
          if (((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
             (cVar3 = FUN_1441fe9ce(lVar6), cVar3 != '\0')) {
            FUN_148f05e72(param_1);
          }
        }
      }
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_14434a383:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14434a8e2 FUN_14434a8e2 body=354 status=ok
// SIG undefined FUN_14434a8e2(void)

void FUN_14434a8e2(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_98;
  undefined1 local_90 [4];
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = FUN_140114204(param_2);
  if (cVar2 != '\0') {
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_68 = *param_2;
    local_60 = *(undefined4 *)(param_2 + 1);
    FUN_1447715ec(&local_58,param_2 + 2);
    local_80 = DAT_14cbe7308;
    local_78 = DAT_14cbe7310;
    FUN_144928d62(&local_58,5);
    local_90[0] = 0;
    local_8c = 0;
    local_84 = 0;
    uVar3 = FUN_145c9c755();
    FUN_1401cfad2(uVar3,&local_a0,param_3);
    iVar1 = local_98 + -1;
    if (local_98 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_70,iVar1,local_a0,1);
    FUN_144976b9c(local_90,local_70);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar4 = FUN_140149a73(uVar3,0);
    if (lVar4 != 0) {
      FUN_140bc53f1(&local_68,local_90,lVar4,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434aa46 FUN_14434aa46 body=936 status=ok
// SIG undefined FUN_14434aa46(void)

ulonglong FUN_14434aa46(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,
                       int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined4 local_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined1 local_130 [96];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  longlong local_70;
  char local_60 [16];
  longlong *local_50;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar8 = FUN_14088c018();
  iVar12 = *(int *)(lVar8 + 0x50);
  if (iVar12 == 0) {
    uVar11 = 0;
  }
  else {
    if ((param_4 < 0 || iVar12 <= param_4) && (param_4 = 0, 0 < iVar12)) {
      uVar6 = rand();
      iVar7 = (int)((float)iVar12 * ((float)(uVar6 & 0x7fff) / 32767.0));
      param_4 = iVar12 + -1;
      if (iVar7 < iVar12 + -1) {
        param_4 = iVar7;
      }
    }
    local_60[0] = '\0';
    local_38 = 0;
    FUN_1403723e8(local_130,(longlong)param_4 * 0x128 + *(longlong *)(lVar8 + 0x48),0);
    local_d0 = 0x3f800000;
    local_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    if ((local_a0 != 0) || (local_98 != -0xfffff30)) {
      local_a0 = 0;
      local_98 = -0xfffff30;
      local_90 = 0;
    }
    iVar12 = 0x1e;
    if (0x1e < param_5) {
      iVar12 = param_5;
    }
    local_88 = 0x3f800000;
    local_148 = (undefined8 *)0x0;
    uStack_140 = 0;
    local_158 = 0;
    local_160 = 0;
    local_150 = 0;
    local_168 = 0;
    FUN_140372ab6(&local_148,local_130,iVar12,local_60);
    puVar5 = local_148;
    uVar11 = CONCAT71((int7)((ulonglong)&local_148 >> 8),(int)uStack_140 == 1);
    if ((int)uStack_140 == 1) {
      iVar12 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
        FUN_140372f76(param_3,iVar12);
      }
      puVar2 = (undefined8 *)(*param_3 + (longlong)iVar12 * 0x68);
      puVar2[2] = puVar5[2];
      uVar4 = puVar5[1];
      *puVar2 = *puVar5;
      puVar2[1] = uVar4;
      puVar2[3] = 0;
      puVar2[3] = puVar5[3];
      puVar5[3] = 0;
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar5 + 4);
      *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)puVar5 + 0x24);
      puVar5[4] = 0;
      puVar2[5] = 0;
      puVar2[5] = puVar5[5];
      puVar5[5] = 0;
      *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar5 + 6);
      *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)((longlong)puVar5 + 0x34);
      puVar5[6] = 0;
      puVar2[7] = &DAT_14a171d50;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[8] = puVar5[8];
      FUN_1406022fe(puVar2 + 9,puVar5 + 9);
      puVar2[7] = &PTR_FUN_14b1828b0;
      puVar2[0xb] = 0;
      puVar2[0xb] = puVar5[0xb];
      puVar5[0xb] = 0;
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(puVar5 + 0xc);
      *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)((longlong)puVar5 + 100);
      puVar5[0xc] = 0;
    }
    FUN_14036924e(local_148,(int)uStack_140);
    if (local_148 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    lVar8 = DAT_14c9a3da0;
    if ((longlong)local_38 != 0) {
      lVar13 = (longlong)local_38 + -1;
      lVar10 = lVar13 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
      if (*(longlong *)(lVar8 + lVar10) != 0) {
        FUN_1400020a8();
      }
      lVar8 = DAT_14c9a3da0;
      iVar12 = (int)lVar13;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
      }
      *(undefined4 *)(lVar8 + lVar10) = 0xffffffff;
      iVar7 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar7 = DAT_14c9a3dd0;
      }
      *(int *)(lVar8 + 4 + lVar10) = iVar7;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar9 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar9 = DAT_14c9a3dc0;
      }
      iVar7 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar7 = iVar12;
      }
      bVar3 = (byte)lVar13 & 0x1f;
      DAT_14c9a3dd0 = iVar12;
      *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) &
           (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      local_38 = 0;
    }
    if ((local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434ae11 FUN_14434ae11 body=47 status=ok
// SIG undefined FUN_14434ae11(void)

void FUN_14434ae11(void)

{
  DAT_14cbe74a8 = 0;
  if (DAT_14cbe74a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&DAT_14cbe7460);
  return;
}



// FUNCTION 14434ae40 FUN_14434ae40 body=1590 status=ok
// SIG undefined FUN_14434ae40(void)

void FUN_14434ae40(longlong param_1,longlong *param_2,int *param_3,char param_4,char param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  uint *puVar13;
  char cVar14;
  uint uVar15;
  undefined1 auStack_108 [32];
  code **local_e8;
  longlong **local_e0;
  longlong *local_d8;
  int *local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  uint *local_98;
  longlong *local_90;
  longlong *local_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_2 != (longlong *)0x0) && (lVar5 = FUN_1402a1246(param_2), lVar5 != 0)) &&
     (plVar3 = *(longlong **)(lVar5 + 0xf78), plVar3 != (longlong *)0x0)) {
    iVar11 = (int)plVar3[0x1d];
    if ((longlong)iVar11 != 0) {
      plVar2 = plVar3 + 0x1c;
      lVar5 = 0;
      do {
        if (*(int *)(*plVar2 + 0xec + lVar5) == *param_3) {
          lVar5 = (lVar5 >> 4) * -0x1111111111111111;
          uVar15 = (uint)lVar5;
          if (((int)uVar15 < 0) || (iVar11 <= (int)uVar15)) break;
          if (param_4 == '\0') {
            lVar6 = FUN_14011c349();
            local_80 = *(code **)(lVar6 + 0x48);
            lVar6 = FUN_140254f32(param_2,&local_80);
            if ((lVar6 == 0) ||
               ((*(char *)(lVar6 + 0x138) == '\0' &&
                (*(int *)(lVar6 + 0x94) <= *(int *)(lVar6 + 0x9c))))) break;
            local_90 = (longlong *)param_2[0x187];
            lVar6 = (**(code **)(*param_2 + 0x5e0))(param_2);
            if (lVar6 != 0) {
              if (DAT_14cba8288 == 0) {
                local_80 = FUN_141864c34;
                local_a0 = FUN_14081d0ea;
                local_a8 = &LAB_1464cee30;
                local_b8 = &LAB_148bfac22;
                local_c0 = &LAB_140f21842;
                local_c8 = &DAT_149e063b2;
                local_d0 = (int *)0x0;
                local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x10000004);
                local_e0 = (longlong **)CONCAT44(local_e0._4_4_,0x10);
                local_e8 = (code **)CONCAT44(local_e8._4_4_,0x9cd0);
                local_b0 = &local_80;
                FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
              }
              if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38))
                 && (local_90 != (longlong *)0x0 &&
                     *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
                iVar11 = DAT_14c763998 + 1;
                local_4c = DAT_14c763998;
                lVar6 = param_2[0x1e9];
                DAT_14c763998 = iVar11;
                if (lVar6 == 0 || DAT_14c950c29 != 1) {
                  if (lVar6 != 0) goto LAB_14434b06c;
                  local_58 = 0;
                }
                else {
                  FUN_1456cec3c(lVar6);
LAB_14434b06c:
                  local_58 = lVar6 + 0x3be8;
                }
                local_60 = lVar6;
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(param_2);
                }
                local_68 = param_2 + 0x1c3;
                local_70 = param_2;
                lVar6 = FUN_14011c349();
                local_80 = *(code **)(lVar6 + 0x48);
                local_d0 = &local_4c;
                local_d8 = &local_60;
                local_c0 = (undefined1 *)((ulonglong)local_c0 & 0xffffffffffffff00);
                local_c8 = (undefined2 *)((ulonglong)local_c8 & 0xffffffff00000000);
                local_e8 = &local_80;
                local_e0 = &local_70;
                FUN_143db6b26(local_90,(ulonglong)(uVar15 & 0x7fffffff) * 0xf0 + *plVar2,0x40,0);
              }
            }
          }
          else {
            FUN_140c65c56(*plVar2 + (ulonglong)(uVar15 & 0x7fffffff) * 0xf0,&local_80);
            if (local_80 != (code *)0x0) {
              FUN_1486dc77c(param_2,&DAT_14cbe74e0,*(undefined4 *)(local_80 + 0x40));
            }
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_78 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
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
          }
          uVar4 = 0;
          if (*(longlong *)(*plVar2 + 8 + (ulonglong)(uVar15 & 0x7fffffff) * 0xf0) != 0) {
            uVar8 = FUN_14087df18();
            uVar4 = FUN_148f07162(uVar8);
          }
          cVar14 = (char)lVar5;
          if ((((cVar14 < '\0') || ((int)plVar3[0x1d] <= (int)cVar14)) ||
              (lVar5 = (**(code **)(*plVar3 + 0x180))(plVar3), lVar5 == 0)) ||
             (plVar7 = (longlong *)FUN_14007a5e6(lVar5), plVar7 == (longlong *)0x0))
          goto LAB_14434b16b;
          lVar5 = (ulonglong)(uVar15 & 0x7f) * 0xf0;
          puVar9 = (uint *)(plVar3[0x1c] + lVar5);
          plVar12 = plVar3 + 0x12;
          puVar13 = (uint *)(plVar3[0x1c] + lVar5 + 0xe8);
          local_90 = plVar7;
          if ((int)plVar3[0x13] == *(int *)((longlong)plVar3 + 0xc4)) goto LAB_14434b32b;
          uVar15 = *puVar13;
          plVar7 = plVar3 + 0x19;
          if ((longlong *)plVar3[0x1a] != (longlong *)0x0) {
            plVar7 = (longlong *)plVar3[0x1a];
          }
          iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar3[0x1b] - 1U & uVar15) * 4);
          if (iVar11 == -1) goto LAB_14434b32b;
          lVar5 = *plVar12;
          iVar10 = iVar11;
          goto LAB_14434b24f;
        }
        lVar5 = lVar5 + 0xf0;
      } while ((longlong)iVar11 * 0xf0 - lVar5 != 0);
    }
  }
  goto LAB_14434b170;
  while (iVar10 = *(int *)((longlong)iVar10 * 0x10 + lVar5 + 8), iVar10 != -1) {
LAB_14434b24f:
    if (*(uint *)(lVar5 + (longlong)iVar10 * 0x10) == uVar15) goto LAB_14434b2a6;
  }
  goto LAB_14434b32b;
  while (iVar11 = *(int *)(lVar6 + 8), iVar11 != -1) {
LAB_14434b2a6:
    lVar6 = lVar5 + (longlong)iVar11 * 0x10;
    if (*(uint *)(lVar5 + (longlong)iVar11 * 0x10) == uVar15) goto LAB_14434b2c3;
  }
  lVar6 = 0;
LAB_14434b2c3:
  local_98 = puVar9;
  local_88 = plVar12;
  if (*(uint *)(lVar6 + 4) == puVar9[0x3b]) {
    lVar5 = (**(code **)(*plVar3 + 0x180))(plVar3);
    if ((lVar5 != 0) && (plVar7 = (longlong *)FUN_14007a5e6(lVar5), plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0xf8))(plVar7,puVar13);
    }
    (**(code **)(*local_90 + 0x48))(local_90,*puVar13);
    puVar9 = local_98;
    plVar12 = local_88;
  }
LAB_14434b32b:
  puVar9 = puVar9 + 0x3b;
  if ((int)plVar3[9] != *(int *)((longlong)plVar3 + 0x74)) {
    plVar7 = plVar3 + 0xf;
    if ((longlong *)plVar3[0x10] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar3[0x10];
    }
    iVar11 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar3[0x11] - 1U & *puVar9) * 4);
    if (iVar11 != -1) {
      lVar5 = plVar3[8];
      do {
        if (*(uint *)(lVar5 + (longlong)iVar11 * 0x100) == *puVar9) {
          local_98 = puVar9;
          if (*puVar13 != 0xffffffff) {
            FUN_14127faf4(plVar12,puVar13);
          }
          puVar9 = local_98;
          FUN_14127fd72(plVar3 + 8,local_98);
          break;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0x100 + lVar5 + 0xf8);
      } while (iVar11 != -1);
    }
  }
  FUN_14127fbe6(plVar3 + 0x1e,puVar9);
  FUN_145872da4(plVar2,(int)cVar14);
  FUN_14127fc36(plVar3);
LAB_14434b16b:
  if (param_5 != '\0') {
    FUN_1447f69b6(param_1 + 0x2620);
    local_80 = (code *)((ulonglong)local_80 & 0xffffffffffffff00);
    FUN_148c37c56(param_2,&local_80,param_1,uVar4);
  }
LAB_14434b170:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14434b478 FUN_14434b478 body=79 status=ok
// SIG undefined FUN_14434b478(void)

void FUN_14434b478(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((param_2 == '\0') && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_c = param_3;
    FUN_1447cd2ec(param_1 + 0x2638);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434b4c8 FUN_14434b4c8 body=49 status=ok
// SIG undefined FUN_14434b4c8(void)

void FUN_14434b4c8(void)

{
  FUN_144760e21(DAT_14cbe74f0,DAT_14cbe74f8);
  if (DAT_14cbe74f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14434b4f9 FUN_14434b4f9 body=49 status=ok
// SIG undefined FUN_14434b4f9(void)

void FUN_14434b4f9(void)

{
  FUN_144760e21(DAT_14cbe7508,DAT_14cbe7510);
  if (DAT_14cbe7508 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14434b52a FUN_14434b52a body=848 status=ok
// SIG undefined FUN_14434b52a(void)

void FUN_14434b52a(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  code *local_128;
  uint local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar4 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    iVar9 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & *param_2) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar9 * 0x10) == *param_2)
        goto LAB_14434b6c9;
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x68) + 8);
      } while (iVar9 != -1);
    }
  }
  plVar1 = (longlong *)(param_1 + -0x28);
  lVar4 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14007a5e6(lVar4);
    if (plVar5 != (longlong *)0x0) {
      local_b8 = 0;
      local_b0 = 0x8000000000;
      uStack_a8 = 0xffffffff;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0xf;
      local_58 = 1;
      local_54 = 0;
      uStack_4c = 0;
      cVar3 = (**(code **)(*plVar5 + 0x70))(plVar5,*param_2);
      if (cVar3 != '\0') {
        lVar4 = FUN_14087dee0(&local_118);
        if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x148) == '\x01')) &&
            (*(int *)(param_1 + 0x11c) != 0)) &&
           ((uVar2 = *(uint *)(param_1 + 0x118), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc))))
        {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar10 != (undefined8 *)0x0) &&
             ((*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x11c) &&
              ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
              uVar8 = *puVar10;
            }
            else {
              uVar8 = 0;
            }
            plVar6 = (longlong *)FUN_1401b2ade(uVar8);
            if (plVar6 != (longlong *)0x0) {
              if (DAT_14cb61cd0 == 0) {
                local_140 = &local_128;
                local_128 = FUN_141030f22;
                local_130 = FUN_14081d0ea;
                local_138 = &LAB_1463b31ae;
                local_148 = &LAB_1486dca4f;
                local_150 = &LAB_1464f50a6;
                local_158 = &DAT_149e063b2;
                local_160 = 0;
                local_168 = 0x10000004;
                local_170 = 8;
                local_178 = 0xd70;
                FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084
                             );
              }
              if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8)
                  == DAT_14cb61cd0 + 0x30)) {
                plVar7 = (longlong *)(**(code **)(*plVar5 + 0xb0))(plVar5,*param_2);
                cVar3 = (**(code **)(*plVar5 + 0xa8))(plVar5,*param_2);
                if ((plVar7 == plVar6) && (cVar3 == '\x01')) {
                  cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
                  if (cVar3 != '\0') {
                    uVar8 = FUN_14087dee0(&local_118);
                    local_120 = *param_2;
                    local_11c = 1;
                    FUN_1412fbb12(plVar1,&local_118,&local_120,uVar8);
                    if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c) <
                        *(int *)(param_1 + 0xc)) {
                      FUN_1412fcac6(plVar1,0,0xffffffff);
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_140368b56(&local_118);
    }
  }
LAB_14434b6c9:
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434b87c FUN_14434b87c body=2211 status=ok
// SIG undefined FUN_14434b87c(void)

void FUN_14434b87c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *****pppppuVar21;
  uint uVar22;
  uint *puVar23;
  float fVar24;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  uint *local_190;
  ulonglong local_188;
  undefined8 *local_180;
  longlong *local_178;
  longlong *local_170;
  byte *local_168;
  longlong *plStack_160;
  byte *local_158;
  longlong *plStack_150;
  byte *local_148;
  longlong *plStack_140;
  undefined4 local_12c;
  undefined1 *local_128;
  byte **local_120;
  int local_114;
  undefined1 local_110 [24];
  longlong local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  undefined8 ****local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_148 = (byte *)0x0;
  plStack_140 = (longlong *)0x0;
  local_178 = param_3;
  FUN_14009b010(&local_148,3,0);
  local_180 = &DAT_14c9a1288;
  if ((local_148 != (byte *)0x0) && ((*local_148 & 2) != 0)) {
    local_180 = (undefined8 *)(*(longlong *)(local_148 + 8) + 0x18);
  }
  local_158 = (byte *)0x0;
  plStack_150 = (longlong *)0x0;
  FUN_14009b010(&local_158,2,0);
  local_170 = &DAT_14c9a1270;
  if ((local_158 != (byte *)0x0) && ((*local_158 & 2) != 0)) {
    local_170 = *(longlong **)(local_158 + 8);
  }
  local_98 = (undefined8 *****)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  if ((longlong)*(int *)(param_1 + 0xe8) == 0) {
    fVar24 = 0.0;
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0xe0);
    lVar20 = (longlong)*(int *)(param_1 + 0xe8) * 0xf0 + lVar15;
    fVar24 = 999.9;
    do {
      puVar23 = (uint *)(lVar15 + 0xec);
      if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
        lVar11 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar11 = param_1 + 0x78;
        }
        iVar13 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & *puVar23) * 4);
        if (iVar13 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar13 * 0x100) == *puVar23)
            goto LAB_14434ba26;
            iVar13 = *(int *)((longlong)iVar13 * 0x100 + *(longlong *)(param_1 + 0x40) + 0xf8);
          } while (iVar13 != -1);
        }
      }
      cVar7 = FUN_148f07b6c(param_1,lVar15);
      if (cVar7 != '\0') {
LAB_14434ba26:
        FUN_1412800a8(&local_e8,local_110,puVar23);
        if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
          lVar11 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar11 = param_1 + 0x78;
          }
          iVar13 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & *puVar23) * 4);
          if (iVar13 != -1) {
            do {
              lVar11 = *(longlong *)(param_1 + 0x40) + (longlong)iVar13 * 0x100;
              if (*(uint *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar13 * 0x100) == *puVar23)
              goto LAB_14434ba80;
              iVar13 = *(int *)(lVar11 + 0xf8);
            } while (iVar13 != -1);
          }
        }
        lVar11 = 0;
LAB_14434ba80:
        if (*(float *)(lVar11 + 0xf0) <= fVar24) {
          fVar24 = *(float *)(lVar11 + 0xf0);
        }
      }
      lVar15 = lVar15 + 0xf0;
    } while (lVar15 != lVar20);
  }
  puVar23 = (uint *)(param_1 + 0x50);
  uVar4 = *(uint *)(param_1 + 0x68);
  if (uVar4 == 0) {
    uVar19 = 1;
    uVar16 = 0;
    iVar13 = 0;
    uVar8 = 0;
  }
  else {
    puVar17 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar17 = puVar23;
    }
    uVar8 = *puVar17;
    if (uVar8 == 0) {
      iVar13 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar13 = uVar4 - 1;
      }
      uVar16 = 0;
      uVar19 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar19 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar19 == uVar16) goto LAB_14434bb28;
        iVar13 = iVar13 + 0x20;
        uVar8 = puVar17[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar19 = (ulonglong)(-uVar8 & uVar8);
    uVar3 = uVar19 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar8 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar8) {
      uVar8 = uVar4;
    }
  }
  if (uVar8 != uVar4) {
    uVar22 = 0xffffffff;
    local_190 = puVar23;
    local_188 = (ulonglong)uVar4;
    do {
      lVar15 = *(longlong *)(param_1 + 0x40);
      local_168 = (byte *)0x0;
      plStack_160 = (longlong *)0x0;
      FUN_14009b010(&local_168,3,0);
      cVar7 = FUN_140cd1ba8(lVar15 + (longlong)(int)uVar8 * 0x100 + 0x10,&local_98,0);
      if (cVar7 != '\0') {
        puVar17 = (uint *)(lVar15 + (longlong)(int)uVar8 * 0x100);
        if ((int)uStack_e0 != local_b4) {
          uVar4 = *puVar17;
          puVar12 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar12 = local_b0;
          }
          for (iVar14 = *(int *)(puVar12 + (ulonglong)(local_a0 - 1U & uVar4) * 4); iVar14 != -1;
              iVar14 = *(int *)(local_e8 + (longlong)iVar14 * 0xc + 4)) {
            if (*(uint *)(local_e8 + (longlong)iVar14 * 0xc) == uVar4) {
              pcVar18 = "true";
              goto LAB_14434be06;
            }
          }
        }
        pcVar18 = "false";
        if ((fVar24 <= (float)puVar17[0x3c]) ||
           (pcVar18 = "false", *(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0x34))) {
LAB_14434be06:
          pppppuVar21 = &local_98;
          if (0xf < local_80) {
            pppppuVar21 = (undefined8 *****)local_98;
          }
          local_120 = (byte **)CONCAT44(local_120._4_4_,DAT_14cbe7558);
          local_128 = DAT_14cbe7550;
          FUN_1448075d0(local_110,&local_128);
          if ((local_168 != (byte *)0x0) && ((~*local_168 & 3) == 0)) {
            lVar15 = *(longlong *)(local_168 + 8);
            local_12c = 1;
            local_128 = local_110;
            local_120 = (byte **)&local_12c;
            FUN_14049fede(lVar15 + 0x18,&local_114,&local_128,0);
            lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x28 + (longlong)local_114 * 0x40)
            ;
            puVar23 = local_190;
            if ((lVar15 != 0) && ((*(byte *)(lVar15 + 1) & 2) == 0)) {
              FUN_140126aca(lVar15,pppppuVar21);
              puVar23 = local_190;
            }
          }
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          local_120 = (byte **)CONCAT44(local_120._4_4_,DAT_14cbe7570);
          local_128 = DAT_14cbe7568;
          FUN_1448075d0(local_110,&local_128);
          plVar6 = local_170;
          if ((local_168 != (byte *)0x0) && ((~*local_168 & 3) == 0)) {
            lVar15 = *(longlong *)(local_168 + 8);
            local_12c = 1;
            local_128 = local_110;
            local_120 = (byte **)&local_12c;
            FUN_14049fede(lVar15 + 0x18,&local_114,&local_128,0);
            lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x28 + (longlong)local_114 * 0x40)
            ;
            puVar23 = local_190;
            if ((lVar15 != 0) && ((*(byte *)(lVar15 + 1) & 2) == 0)) {
              FUN_140126aca(lVar15,pcVar18);
              puVar23 = local_190;
            }
          }
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          iVar14 = (int)plVar6[2];
          *(uint *)(plVar6 + 2) = iVar14 + 1U;
          if (*(uint *)((longlong)plVar6 + 0x14) < iVar14 + 1U) {
            FUN_14000961e(plVar6,iVar14);
          }
          lVar15 = *plVar6;
          *(byte **)(lVar15 + (longlong)iVar14 * 0x10) = local_168;
          *(longlong **)(lVar15 + 8 + (longlong)iVar14 * 0x10) = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
            UNLOCK();
          }
        }
      }
      plVar6 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_160 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar22 = uVar22 & ~(uint)uVar19;
      puVar17 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar17 = puVar23;
      }
      uVar4 = *(uint *)(param_1 + 0x68);
      iVar14 = (int)uVar16;
      lVar15 = (longlong)iVar14;
      uVar8 = puVar17[lVar15] & uVar22;
      if (uVar8 == 0) {
        iVar9 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar9 = uVar4 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar14 < iVar9) {
          lVar20 = 0;
          do {
            uVar8 = puVar17[lVar15 + lVar20 + 1];
            if (uVar8 != 0) {
              uVar16 = (ulonglong)(iVar14 + (int)lVar20 + 1);
              uVar22 = 0xffffffff;
              goto LAB_14434c0a7;
            }
            iVar13 = iVar13 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar10 - lVar15 != lVar20);
          uVar22 = 0xffffffff;
          iVar14 = iVar10;
        }
        uVar16 = (ulonglong)(iVar14 + 1);
        puVar23 = local_190;
        uVar8 = uVar4;
      }
      else {
LAB_14434c0a7:
        uVar19 = (ulonglong)(-uVar8 & uVar8);
        uVar3 = uVar19 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar8 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar8) {
          uVar8 = uVar4;
        }
      }
    } while (uVar8 != (uint)local_188);
  }
LAB_14434bb28:
  local_120 = (byte **)CONCAT44(local_120._4_4_,DAT_14cbe7528);
  local_128 = DAT_14cbe7520;
  FUN_1448075d0(local_110,&local_128);
  puVar5 = local_180;
  local_120 = &local_158;
  local_128 = local_110;
  FUN_140744482(local_180,&local_168,&local_128,0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  local_168 = (byte *)0x0;
  plStack_160 = (longlong *)0x0;
  FUN_14009b010(&local_168,1,0);
  if (local_168 != (byte *)0x0) {
    FUN_1404a8912(local_168,*(undefined4 *)(param_1 + 0x34));
  }
  local_120 = (byte **)CONCAT44(local_120._4_4_,DAT_14cbe7540);
  local_128 = DAT_14cbe7538;
  FUN_1448075d0(local_110,&local_128);
  local_128 = local_110;
  local_120 = &local_168;
  FUN_140744482(puVar5,&local_114,&local_128,0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (*local_178 != 0) {
    local_198 = 0;
    FUN_14014191c(*local_178,&DAT_14cbe7410,&local_148,0);
  }
  plVar6 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_160 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1411520aa(&local_e8);
  FUN_1401d9a90(&local_98);
  plVar6 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434c120 FUN_14434c120 body=395 status=ok
// SIG undefined FUN_14434c120(void)

void FUN_14434c120(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  iVar10 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
    FUN_14664d78a(param_1,iVar10);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar10 * 4) = *param_2;
  if ((int)param_1[1] < 2) {
    return;
  }
  lVar2 = *param_1;
  uVar5 = (ulonglong)((int)param_1[1] - 1);
  uVar1 = *(uint *)(lVar2 + uVar5 * 4);
LAB_14434c166:
  uVar8 = (int)uVar5 - 1;
  uVar6 = (ulonglong)(uVar8 >> 1);
  lVar3 = *param_3;
  if (*(int *)(lVar3 + 0x48) == *(int *)(lVar3 + 0x74)) {
    uVar9 = *(uint *)(lVar2 + uVar6 * 4);
  }
  else {
    lVar7 = lVar3 + 0x78;
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x80);
    }
    uVar12 = *(int *)(lVar3 + 0x88) - 1;
    iVar10 = *(int *)(lVar7 + (ulonglong)(uVar12 & uVar1) * 4);
    if (iVar10 == -1) {
      bVar4 = true;
    }
    else {
      iVar14 = iVar10;
      do {
        bVar15 = *(uint *)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar14 * 0x100) == uVar1;
        bVar4 = !bVar15;
        if (bVar15) break;
        iVar14 = *(int *)((longlong)iVar14 * 0x100 + *(longlong *)(lVar3 + 0x40) + 0xf8);
      } while (iVar14 != -1);
    }
    uVar9 = *(uint *)(lVar2 + uVar6 * 4);
    iVar14 = *(int *)(lVar7 + (ulonglong)(uVar12 & uVar9) * 4);
    if (iVar14 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x40);
      iVar13 = iVar14;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar13 * 0x100) == uVar9) {
          if (bVar4) {
            return;
          }
          goto LAB_14434c220;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x100 + lVar3 + 0xf8);
      } while (iVar13 != -1);
    }
  }
  goto LAB_14434c27a;
LAB_14434c220:
  if (iVar10 == -1) goto LAB_14434c240;
  lVar7 = lVar3 + (longlong)iVar10 * 0x100;
  if (*(uint *)(lVar3 + (longlong)iVar10 * 0x100) == uVar1) goto LAB_14434c243;
  iVar10 = *(int *)(lVar7 + 0xf8);
  goto LAB_14434c220;
LAB_14434c240:
  lVar7 = 0;
LAB_14434c243:
  do {
    lVar11 = lVar3 + (longlong)iVar14 * 0x100;
    if (*(uint *)(lVar3 + (longlong)iVar14 * 0x100) == uVar9) goto LAB_14434c26c;
    iVar14 = *(int *)(lVar11 + 0xf8);
  } while (iVar14 != -1);
  lVar11 = 0;
LAB_14434c26c:
  if (*(float *)(lVar11 + 0xf0) <= *(float *)(lVar7 + 0xf0)) {
    return;
  }
LAB_14434c27a:
  *(uint *)(lVar2 + uVar5 * 4) = uVar9;
  *(uint *)(lVar2 + uVar6 * 4) = uVar1;
  uVar5 = uVar6;
  if (uVar8 < 2) {
    return;
  }
  goto LAB_14434c166;
}



// FUNCTION 14434c2bc FUN_14434c2bc body=106 status=ok
// SIG undefined FUN_14434c2bc(void)

void FUN_14434c2bc(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    iVar1 = _finite((double)*(float *)(param_1 + 0x48));
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x41) == '\0')) {
      local_38 = (undefined4)DAT_14c8463f0;
      uStack_34 = DAT_14c8463f0._4_4_;
      uStack_30 = (undefined4)DAT_14c8463f8;
      uStack_2c = DAT_14c8463f8._4_4_;
      FUN_140d26af5(local_28,param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434c328 FUN_14434c328 body=2233 status=ok
// SIG undefined FUN_14434c328(void)

void FUN_14434c328(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_b8 [44];
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_80 [8];
  char *local_78;
  int local_70;
  undefined1 local_6c;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140f05dd8();
  lVar6 = FUN_1447210f0(param_1);
  if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x1f0), lVar6 == 0)) goto LAB_14434c389;
  lVar7 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_14434c389;
  lVar6 = FUN_140704886(lVar6);
  param_1[0x50b] = lVar6;
  if (lVar6 == 0) goto LAB_14434c389;
  (**(code **)(*param_1 + 0x570))(param_1);
  lVar6 = FUN_1447210f0(param_1);
  if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f0) != 0)) && (lVar6 = FUN_1400d6ce6(), lVar6 != 0)
     ) {
    local_78 = (char *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    pcVar9 = local_78;
    local_70 = 3;
    *(undefined ***)local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    *(longlong *)(local_78 + 0x10) = lVar12;
    *(undefined ***)local_78 = &PTR_FUN_14b9deab0;
    pcVar9[0x18] = '\0';
    pcVar9[0x19] = '\0';
    pcVar9[0x1a] = '\0';
    pcVar9[0x1b] = '\0';
    pcVar9[0x1c] = '\0';
    pcVar9[0x1d] = '\0';
    pcVar9[0x1e] = '\0';
    pcVar9[0x1f] = '\0';
    iVar11 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_78 + 0x18) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar11 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar11 = *(int *)(lVar7 + 0x10);
        bVar17 = iVar11 == 0;
        if (bVar17) {
          *(int *)(lVar7 + 0x10) = iVar15;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar11 = iVar15;
        }
      }
    }
    *(int *)(pcVar9 + 0x1c) = iVar11;
    *(code **)(pcVar9 + 0x20) = FUN_145a05a82;
    pcVar9[0x28] = '\0';
    pcVar9[0x29] = '\0';
    pcVar9[0x2a] = '\0';
    pcVar9[0x2b] = '\0';
    FUN_1448b6402(lVar6 + 0x160,local_80,&local_78);
    if (local_70 != 0) {
      if (local_78 == (char *)0x0) goto LAB_14434c52b;
      (*(code *)**(undefined8 **)local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_78 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14434c52b:
  uVar8 = FUN_141483b8e();
  lVar6 = FUN_140d4a0a6(param_1 + 199,uVar8);
  if (lVar6 == 0) {
    param_1[0x4e3] = 0;
LAB_14434c6b6:
    bVar17 = false;
  }
  else {
    uVar4 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 0x4e3) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar11 = *(int *)(lVar6 + 0x10);
    if (iVar11 == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      bVar17 = false;
      LOCK();
      iVar11 = *(int *)(lVar6 + 0x10);
      bVar18 = iVar11 == 0;
      if (bVar18) {
        *(int *)(lVar6 + 0x10) = iVar15;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar11 = iVar15;
      }
      *(int *)((longlong)param_1 + 0x271c) = iVar11;
      if (iVar11 != 0) goto LAB_14434c589;
    }
    else {
      *(int *)((longlong)param_1 + 0x271c) = iVar11;
LAB_14434c589:
      uVar4 = *(uint *)(param_1 + 0x4e3);
      bVar17 = false;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != iVar11)) goto LAB_14434c6b6;
        bVar17 = (*(uint *)(lVar6 + 8) & 0x10200000) == 0;
      }
    }
  }
  *(bool *)(param_1 + 0x566) = bVar17;
  lVar6 = param_1[0x4d6];
  if (lVar6 == 0) {
    uVar8 = FUN_1457512de();
    lVar6 = FUN_14477b664(uVar8);
    param_1[0x4d6] = lVar6;
  }
  plVar1 = param_1 + 0x4d5;
  lVar7 = param_1[0x4d7];
  if (lVar7 == 0) {
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        param_1[0x4d7] = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar8,plVar1);
        param_1[0x4d7] = lVar7;
        if (lVar7 != 0) {
          lVar6 = param_1[0x4d6];
          goto LAB_14434c5f8;
        }
      }
    }
    local_78 = "no_def";
    local_70 = 6;
    local_6c = 0;
    uVar4 = FUN_14001a6c0(&local_78,1);
    pcVar9 = (char *)(ulonglong)uVar4;
  }
  else {
LAB_14434c5f8:
    if (lVar6 == 0) {
      uVar8 = FUN_1457512de();
      lVar6 = FUN_14477b664(uVar8);
      param_1[0x4d6] = lVar6;
      lVar7 = param_1[0x4d7];
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar8,plVar1);
        }
        param_1[0x4d7] = lVar7;
      }
    }
    puVar16 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(lVar7 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_78,puVar16,1);
    pcVar9 = local_78;
  }
  param_1[0x50c] = (longlong)pcVar9;
  if (pcVar9 != (char *)0x0) {
    if (((char)param_1[0x2f] != '\x03') || ((int)param_1[0x55e] != 0)) {
      FUN_14150116e(param_1,1);
      FUN_14434cbe2(param_1);
    }
    lVar6 = param_1[0x50b];
    if ((longlong)*(int *)(lVar6 + 0x130) != 0) {
      lVar7 = *(longlong *)(lVar6 + 0x128);
      lVar12 = (longlong)*(int *)(lVar6 + 0x130) << 3;
      do {
        cVar3 = FUN_14088b7a4(lVar7,param_1);
        if (cVar3 != '\0') goto LAB_14434c91c;
        lVar7 = lVar7 + 8;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    if (param_1 == (longlong *)0x0) {
      uVar4 = 0;
      uVar13 = 0;
    }
    else {
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar13 = (ulonglong)*(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        uVar14 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar14);
        }
        LOCK();
        uVar5 = *(uint *)(lVar7 + 0x10);
        bVar17 = uVar5 == 0;
        if (bVar17) {
          *(uint *)(lVar7 + 0x10) = uVar14;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar17) {
          uVar5 = uVar14;
        }
        uVar13 = (ulonglong)uVar5;
      }
    }
    iVar11 = *(int *)(lVar6 + 0x130);
    *(uint *)(lVar6 + 0x130) = iVar11 + 1U;
    if (*(uint *)(lVar6 + 0x134) < iVar11 + 1U) {
      FUN_1457526ae((longlong *)(lVar6 + 0x128),iVar11);
    }
    *(ulonglong *)(*(longlong *)(lVar6 + 0x128) + (longlong)iVar11 * 8) =
         (ulonglong)uVar4 | uVar13 << 0x20;
    if ((char)param_1[0x2f] == '\x03') {
      FUN_1458673de(lVar6,param_1);
    }
LAB_14434c91c:
    if ((((((param_1[0x9e] != 0) && (*(int *)((longlong)param_1 + 0x4ec) != 0)) &&
          (uVar4 = *(uint *)(param_1 + 0x9d), -1 < (int)uVar4)) &&
         (((int)uVar4 < DAT_14c9647dc &&
          (lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0)))) &&
        ((*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x4ec) &&
         (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 && (DAT_14cbe75d0 != 0)))))) &&
       ((longlong)(int)param_1[0x9c] != 0)) {
      lVar6 = 0;
      do {
        if (*(longlong *)(param_1[0x9b] + 0x68 + lVar6) == DAT_14cbe75d0) {
          iVar11 = (int)(lVar6 >> 3) * -0xf0f0f0f;
          if ((iVar11 != -1) && (lVar6 = param_1[0x9b] + (longlong)iVar11 * 0x88, lVar6 != 0)) {
            pcVar9 = *(char **)(lVar6 + 0x78);
            pcVar10 = DAT_14cbe75bc;
            if ((DAT_14cbe75bc == DAT_14c948034) &&
               (pcVar10 = DAT_14c948034, DAT_14cbe75b8 != DAT_14c948030)) {
              FUN_14011791e(&local_78,DAT_14cbe75b8,(ulonglong)DAT_14cbe75bc >> 0x20);
              DAT_14cbe75bc = local_78;
              pcVar10 = local_78;
            }
            *(bool *)(param_1 + 0x522) = pcVar9 == pcVar10;
          }
          break;
        }
        lVar6 = lVar6 + 0x88;
      } while ((longlong)(int)param_1[0x9c] * 0x88 != lVar6);
    }
    FUN_1406f1bc8(param_1 + 0x184,&local_78);
    cVar3 = FUN_1401144ce(&local_78);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x188) = DAT_14cbe75a8;
      param_1[0x187] = DAT_14cbe75a0;
      FUN_1401533ba(&local_8c,param_1 + 0x50c,1);
      *(undefined8 *)((longlong)param_1 + 0xc44) = local_8c;
      *(undefined4 *)((longlong)param_1 + 0xc4c) = local_84;
    }
    FUN_1411b80d0(param_1,&local_78);
    FUN_14434a8e2(param_1[0x50b],&local_78,0);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14434c389:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14434cbe2 FUN_14434cbe2 body=1350 status=ok
// SIG undefined FUN_14434cbe2(void)

void FUN_14434cbe2(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  uint local_17c;
  longlong *local_178;
  uint local_170;
  uint uStack_16c;
  longlong local_168;
  longlong *local_160;
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
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_178 = (longlong *)(param_1 + 0x2968);
  puVar1 = (uint *)(param_1 + 0x2978);
  iVar5 = *(int *)(param_1 + 0x2990);
  local_188 = param_1;
  if (iVar5 == 0) {
    uVar17 = 1;
    uVar19 = 0;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x2988);
    if (*(uint **)(param_1 + 0x2988) == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar10 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar10 = iVar5 + -1;
      }
      uVar19 = 0;
      uVar17 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar17 = uVar19;
      }
      iVar14 = 0;
      do {
        if (uVar17 == uVar19) goto LAB_14434ccb4;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar8[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar19 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar21 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar10) {
      iVar10 = iVar5;
    }
  }
  if (iVar10 != iVar5) {
    uVar15 = 0xffffffff;
    iVar7 = iVar5;
    do {
      uVar21 = (ulonglong)*(int *)(*local_178 + 0x10 + (longlong)iVar10 * 0x20);
      if (0 < (longlong)uVar21) {
        plVar9 = (longlong *)(*local_178 + (longlong)iVar10 * 0x20 + 8);
        lVar13 = uVar21 * 0xf0 + -0xb;
        local_17c = uVar15;
        do {
          if (*(char *)(*plVar9 + lVar13) == '\x01') {
            FUN_145872da4(plVar9,(int)uVar21 + -1);
          }
          lVar13 = lVar13 + -0xf0;
          bVar23 = 1 < uVar21;
          uVar21 = uVar21 - 1;
        } while (bVar23);
        iVar7 = *(int *)(local_188 + 0x2990);
        param_1 = local_188;
        uVar15 = local_17c;
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar8 = *(uint **)(param_1 + 0x2988);
      if (*(uint **)(param_1 + 0x2988) == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar10 = (int)uVar19;
      lVar13 = (longlong)iVar10;
      uVar16 = puVar8[lVar13] & uVar15;
      if (uVar16 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar10) {
          iVar12 = iVar10;
        }
        if (iVar10 < iVar11) {
          lVar22 = 0;
          do {
            uVar16 = puVar8[lVar13 + lVar22 + 1];
            if (uVar16 != 0) {
              uVar19 = (ulonglong)(iVar10 + (int)lVar22 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14434d0dc;
            }
            iVar14 = iVar14 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar12 - lVar13 != lVar22);
          uVar15 = 0xffffffff;
          iVar10 = iVar12;
        }
        uVar19 = (ulonglong)(iVar10 + 1);
        param_1 = local_188;
        iVar10 = iVar7;
      }
      else {
LAB_14434d0dc:
        uVar17 = (ulonglong)(-uVar16 & uVar16);
        uVar21 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar10) {
          iVar10 = iVar7;
        }
      }
    } while (iVar10 != iVar5);
  }
LAB_14434ccb4:
  if ((longlong)*(int *)(param_1 + 0x2b00) != 0) {
    lVar22 = (longlong)*(int *)(param_1 + 0x2b00) * 0xe8;
    lVar13 = *(longlong *)(param_1 + 11000) + 0x10;
    do {
      if ((*(longlong **)(lVar13 + -0x10) != (longlong *)0x0) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar13 + -0x10) + 0x6c8))(), cVar6 != '\0')) {
        local_f8 = 0;
        local_f0 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_ec = 0xffffffff00000080;
        local_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_a8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_a0 = 0xf;
        local_98 = 1;
        local_70 = 0;
        local_94 = 0;
        uStack_8c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_73 = 0;
        uStack_72 = 0;
        local_80 = 0;
        uStack_7c = 0;
        FUN_1407b25f0(&local_158,lVar13);
        FUN_140c65c56(&local_158,&local_168);
        if (local_168 != 0) {
          uStack_7c = *(undefined4 *)(local_168 + 0x40);
          local_80 = *(undefined4 *)(lVar13 + -8);
          uStack_73 = 1;
          lVar20 = *(longlong *)(lVar13 + -0x10);
          uStack_78 = uStack_7c;
          if ((DAT_14c950c29 == '\x01') && (lVar20 != 0)) {
            FUN_1456cec3c(lVar20);
LAB_14434ce02:
            uStack_16c = 0;
            local_170 = *(uint *)(lVar20 + 0xc);
            if ((int)local_170 < DAT_14c9647dc) {
              lVar20 = (ulonglong)((local_170 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_170 >> 0x10) * 8);
            }
            else {
              lVar20 = 0;
            }
            uVar15 = *(uint *)(lVar20 + 0x10);
            if (*(uint *)(lVar20 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              uVar16 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar23) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar16);
              }
              LOCK();
              uVar15 = *(uint *)(lVar20 + 0x10);
              bVar23 = uVar15 == 0;
              if (bVar23) {
                *(uint *)(lVar20 + 0x10) = uVar16;
                uVar15 = 0;
              }
              UNLOCK();
              if (bVar23) {
                uVar15 = uVar16;
              }
            }
          }
          else {
            if (lVar20 != 0) goto LAB_14434ce02;
            local_170 = 0;
            uVar15 = 0;
          }
          uStack_16c = uVar15;
          plVar9 = (longlong *)FUN_1412e3d70(local_178,uVar15 ^ local_170,&local_170);
          iVar5 = (int)plVar9[1];
          *(uint *)(plVar9 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)plVar9 + 0xc) < iVar5 + 1U) {
            FUN_14088cbea(plVar9,iVar5);
          }
          lVar20 = *plVar9;
          lVar18 = (longlong)iVar5 * 0xf0;
          FUN_1406fd608(lVar20 + lVar18,&local_158);
          param_1 = local_188;
          puVar4 = (undefined4 *)(lVar20 + 0xd8 + lVar18);
          *puVar4 = local_80;
          puVar4[1] = uStack_7c;
          puVar4[2] = uStack_78;
          puVar4[3] = CONCAT13(uStack_71,CONCAT12(uStack_72,CONCAT11(uStack_73,uStack_74)));
          *(undefined8 *)(lVar20 + 0xe8 + lVar18) = local_70;
          lVar20 = FUN_1447210f0(local_188);
          if ((lVar20 != 0) && (*(longlong *)(lVar20 + 0x1f0) != 0)) {
            FUN_1400d6ce6();
          }
        }
        plVar9 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_160 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        FUN_140368b56(&local_158);
      }
      lVar13 = lVar13 + 0xe8;
      lVar22 = lVar22 + -0xe8;
    } while (lVar22 != 0);
  }
  if (*(char *)(param_1 + 0x2b08) != '\0') {
    *(undefined1 *)(param_1 + 0x2b08) = 0;
    FUN_1447f69b6(param_1 + 0x2a30);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14434d12a FUN_14434d12a body=623 status=ok
// SIG undefined FUN_14434d12a(void)

void * FUN_14434d12a(longlong param_1,void *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)(param_1 + 0x2968);
  if (param_3 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar7 = *(uint *)(param_3 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_40 = (ulonglong)uVar7 | uVar3 << 0x20;
  iVar1 = FUN_141303122(plVar6);
  if (iVar1 != -1) {
    if (param_3 == 0) {
      uVar7 = 0;
      uVar3 = 0;
    }
    else {
      uVar7 = *(uint *)(param_3 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar3 = (ulonglong)*(uint *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar2 = *(uint *)(lVar8 + 0x10);
        bVar9 = uVar2 == 0;
        if (bVar9) {
          *(uint *)(lVar8 + 0x10) = uVar5;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar9) {
          uVar2 = uVar5;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    local_40 = (ulonglong)uVar7 | uVar3 << 0x20;
    iVar1 = FUN_141303122(plVar6);
    if (iVar1 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)iVar1 * 0x20 + *plVar6;
    }
    if ((longlong)*(int *)(lVar8 + 0x10) != 0) {
      lVar4 = *(longlong *)(lVar8 + 8);
      lVar8 = (longlong)*(int *)(lVar8 + 0x10) * 0xf0;
      do {
        if (*(char *)(lVar4 + 0xe4) == '\x01') {
          FUN_1406fd608(param_2);
          goto LAB_14434d2b9;
        }
        lVar4 = lVar4 + 0xf0;
        lVar8 = lVar8 + -0xf0;
      } while (lVar8 != 0);
    }
  }
  memset(param_2,0,0xd8);
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0xc0) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
LAB_14434d2b9:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14434d39a FUN_14434d39a body=631 status=ok
// SIG undefined FUN_14434d39a(void)

void FUN_14434d39a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
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
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145d73658();
  if ((*(longlong *)(param_1 + 0x2350) != 0) &&
     (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      lVar3 = FUN_1447210f0(param_1 + -0x3c0);
      cVar2 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if ((lVar3 != 0) && (cVar2 == '\0')) {
        if (*(longlong *)(lVar3 + 0x1f0) == 0) {
          plVar4 = (longlong *)(lVar3 + 0x458);
        }
        else {
          plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
        }
        lVar3 = *(longlong *)(param_1 + 0x2760);
        fVar9 = -1.0;
        if (lVar3 != 0) {
          lVar1 = *plVar4;
          uVar5 = (uint)lVar3;
          if ((int)(uVar5 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
            lVar7 = lVar1 + 0x18;
            if (*(longlong *)(lVar1 + 0x28) != 0) {
              lVar7 = *(longlong *)(lVar1 + 0x28);
            }
            if ((*(uint *)(lVar7 + (ulonglong)((uVar5 & 0xffffff) >> 5) * 4) >> (uVar5 & 0x1f) & 1)
                != 0) {
              lVar7 = *(longlong *)(lVar1 + 8);
              lVar8 = (ulonglong)(uVar5 & 0xffffff) * 0x70;
              lVar6 = lVar7 + lVar8;
              if (((lVar6 != 0) && (*(longlong *)(lVar7 + 0x60 + lVar8) == lVar3)) &&
                 (cVar2 = *(char *)(lVar7 + 1 + lVar8), cVar2 != '\x04')) {
                if (cVar2 == '\x01') {
                  fVar9 = (float)(*(double *)(lVar6 + 8) - *(double *)(lVar1 + 0x140));
                }
                else if (cVar2 == '\x03') {
                  fVar9 = 0.0;
                }
                else {
                  fVar9 = (float)*(double *)(lVar6 + 8);
                }
              }
            }
          }
        }
        FUN_148c36c50(param_2,param_1 + -0x3c0,fVar9);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434d95a FUN_14434d95a body=535 status=ok
// SIG undefined FUN_14434d95a(void)

void FUN_14434d95a(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
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
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (param_2 == 0) {
      lVar4 = FUN_1447210f0(param_1);
      if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
        lVar7 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar7 * 8);
          if (((((iVar1 != 0) &&
                (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
               ((int)uVar2 < DAT_14c9647dc)) &&
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))) {
            if (DAT_14cbadd90 == 0) {
              local_50 = FUN_141030f22;
              local_60 = FUN_14081d0ea;
              local_68 = &LAB_1459f2e4c;
              local_70 = &local_50;
              local_78 = &LAB_148c39de3;
              local_80 = &LAB_1457a9eb2;
              local_88 = &DAT_149e063b2;
              local_90 = 0;
              local_98 = 0x10000004;
              local_a0 = 0x10;
              local_a8 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
              lVar5 = FUN_148e047d8(lVar3 + 0xe50);
              if (lVar5 == param_1 + 0x1a98) {
                FUN_1410ef130(lVar3 + 0xe50);
              }
            }
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(lVar4 + 0x238));
      }
    }
    else {
      lVar4 = FUN_148e047d8(param_2 + 0xe50);
      if (lVar4 == param_1 + 0x1a98) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14434db8e FUN_14434db8e body=605 status=ok
// SIG undefined FUN_14434db8e(void)

void FUN_14434db8e(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_1457512de();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_14434dc1c;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_14434dc1c;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar5;
    if (lVar5 == 0) goto LAB_14434dc1c;
  }
  plVar1 = (longlong *)(param_1 + 0x26a8);
  if (*(longlong *)(param_1 + 0x26b0) == 0) {
    uVar4 = FUN_1457512de();
    uVar4 = FUN_14477b664(uVar4);
    *(undefined8 *)(param_1 + 0x26b0) = uVar4;
  }
  lVar6 = FUN_1457512de();
  uVar4 = FUN_1457512de();
  FUN_1402d1bfa(&local_40,uVar4,lVar5);
  if (*plVar1 != local_40) {
    *(undefined8 *)(param_1 + 0x26b8) = 0;
  }
  *plVar1 = local_40;
  lVar7 = FUN_1457512de();
  if (lVar6 == 0) {
LAB_14434dce4:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_14434dce4;
  if (*(longlong *)(param_1 + 0x26b0) != lVar7) {
    *(undefined8 *)(param_1 + 0x26b8) = 0;
  }
  uVar4 = FUN_14477b664(lVar7);
  lVar6 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x26b0) = lVar6;
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x26a8) != 0)) {
    *(longlong *)(param_1 + 0x26b8) = lVar5;
  }
  if ((param_3 == '\0') || (*(char *)(param_1 + 0x178) != '\x03')) goto LAB_14434dc1c;
  if (lVar6 == 0) {
    uVar4 = FUN_1457512de();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x26b0) = lVar6;
  }
  if (*(longlong *)(param_1 + 0x26b8) == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_14434dc1c;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x26b8) = 0;
      goto LAB_14434dc1c;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x26b8) = lVar6;
    if (lVar6 == 0) goto LAB_14434dc1c;
  }
  FUN_148f0825a(param_1);
LAB_14434dc1c:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14434de0e FUN_14434de0e body=576 status=ok
// SIG undefined FUN_14434de0e(void)

void FUN_14434de0e(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar5 = FUN_1465c8b0e();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if ((lVar4 == 0) || (*plVar1 == 0)) goto LAB_14434dea7;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_14434e047:
      lVar4 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_14434e047;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar5,plVar1);
    }
    *(longlong *)(param_1 + 0x40) = lVar4;
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = false;
  }
  if (((param_2 == 0) || ((param_3 & 1) == 0)) || (bVar7)) goto LAB_14434dea7;
  if (DAT_14cbbd498 == 0) {
    local_50 = &local_38;
    local_38 = FUN_140940982;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_146572ba2;
    local_58 = &LAB_148ca13ba;
    local_60 = &LAB_140e51436;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_14434dea7;
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar5 = FUN_1465c8b0e();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_14434e04b:
      lVar6 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_14434e04b;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,plVar1);
    }
    *(longlong *)(param_1 + 0x40) = lVar6;
  }
  *(longlong *)(param_2 + 0xf70) = lVar6;
LAB_14434dea7:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434e054 FUN_14434e054 body=241 status=ok
// SIG undefined FUN_14434e054(void)

void FUN_14434e054(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  if ((*(byte *)(param_1 + 0x25) & 8) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x2c0))();
    if (((iVar2 != *(int *)((longlong)param_1 + 0x10c)) && (*(char *)(param_1[6] + 0x178) == '\x03')
        ) && (*(int *)((longlong)param_1 + 0x10c) != (int)param_1[0x20])) {
      *(int *)((longlong)param_1 + 0x10c) = (int)param_1[0x20];
      uVar1 = param_1[7];
      if (uVar1 < 0xffffffff00000000) {
        plVar6 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar6 = (longlong *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014434e142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,4);
        return;
      }
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar4 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar4 = DAT_14c998080;
        }
        if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar5 = *(uint **)(lVar3 + 0x18);
          if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
            puVar5 = (uint *)(lVar3 + 8);
          }
          *puVar5 = *puVar5 | 0x10;
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 14434e1b8 FUN_14434e1b8 body=73 status=ok
// SIG undefined FUN_14434e1b8(void)

bool FUN_14434e1b8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2b8))();
  iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
  lVar3 = 0x2e0;
  if (0 < iVar1) {
    lVar3 = 0x2b8;
  }
  iVar1 = (**(code **)(*param_1 + lVar3))(param_1);
  return iVar2 == iVar1;
}



// FUNCTION 14434e202 FUN_14434e202 body=299 status=ok
// SIG undefined FUN_14434e202(void)

longlong * FUN_14434e202(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b9df1c0;
  puVar2[3] = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
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
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = *param_3;
  return param_1;
}



// FUNCTION 14434e34a FUN_14434e34a body=4921 status=ok
// SIG undefined FUN_14434e34a(void)

undefined8 FUN_14434e34a(longlong *param_1)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  code *pcVar17;
  undefined4 *puVar18;
  longlong lVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  wchar_t *local_4a8;
  undefined1 *local_4a0;
  undefined1 *local_498;
  undefined8 *local_490;
  undefined1 *local_488;
  code *local_480;
  undefined4 local_46c;
  longlong local_468;
  undefined1 local_460 [8];
  uint local_458;
  int local_454;
  longlong local_450;
  undefined1 local_448 [24];
  undefined1 local_430 [24];
  undefined8 local_418;
  undefined8 uStack_410;
  longlong local_408;
  undefined8 uStack_400;
  longlong *local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  int local_3c8;
  undefined8 *local_3b8;
  int local_3b0;
  longlong local_3a8;
  longlong *local_398;
  longlong local_388 [4];
  undefined **local_368;
  code *local_360;
  longlong local_358;
  undefined8 local_350;
  undefined **ppuStack_348;
  undefined **local_340;
  undefined *puStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  longlong local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined8 local_2fc;
  undefined8 uStack_2f4;
  longlong local_2e8;
  undefined8 uStack_2e0;
  longlong *local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined8 uStack_2a7;
  undefined8 local_29c;
  undefined8 uStack_294;
  uint local_288;
  longlong *local_280;
  undefined **ppuStack_278;
  undefined8 local_270;
  longlong lStack_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined1 local_250 [48];
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1fc;
  longlong local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  longlong lStack_1b8;
  int local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  undefined4 local_194;
  undefined **local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined2 local_140 [2];
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined1 local_124;
  float local_120;
  char local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  undefined **local_90;
  undefined *local_88;
  longlong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if ((param_1[0x6d] == 0) || (cVar4 = FUN_1408e9b00(), cVar4 == '\0')) {
    uVar7 = 0;
    goto LAB_14434f0d2;
  }
  ppuVar1 = (undefined **)param_1[6];
  *(int *)((longlong)param_1 + 0x2dc) = *(int *)((longlong)param_1 + 0x2dc) + 1;
  (**(code **)(*param_1 + 0x438))(param_1);
  FUN_143ec3f86(param_1,1);
  FUN_140993fa0(param_1);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_430);
  FUN_143ecadfa(ppuVar1,local_448,(char)param_1[7],local_430);
  plVar13 = *(longlong **)(param_1[6] + 0x1b0);
  if (ppuVar1[0x163] == (undefined *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    plVar15 = (longlong *)ppuVar1[0x164];
  }
  if (plVar13 == (longlong *)0x0) {
    uVar14 = 0;
  }
  else {
    pcVar17 = *(code **)(*plVar13 + 0x5e8);
    if (pcVar17 == FUN_140972dde) {
      lVar6 = plVar13[0x76];
      if (lVar6 == 0) {
        pcVar17 = *(code **)(*plVar13 + 0x5f8);
        if (pcVar17 == FUN_144784df4) {
          if (*(code **)(plVar13[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (*(int *)((longlong)plVar13 + 0x75b4) != 0) {
              uVar9 = *(uint *)(plVar13 + 0xeb6);
              lVar6 = 0;
              if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_14434e4cc;
              plVar5 = (longlong *)
                       ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if ((plVar5 != (longlong *)0x0) &&
                 (((int)plVar5[2] == *(int *)((longlong)plVar13 + 0x75b4) &&
                  ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
                if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
                  lVar6 = *plVar5;
                }
                else {
                  lVar6 = 0;
                }
                lVar6 = lVar6 + 0x110;
                goto LAB_14434f128;
              }
            }
          }
          else {
            lVar6 = (**(code **)(plVar13[0x784] + 0x18))(plVar13 + 0x784);
LAB_14434f128:
            if (lVar6 != 0) {
              lVar6 = *(longlong *)(lVar6 + 0x20);
              goto LAB_14434f135;
            }
          }
        }
        else {
          lVar6 = (*pcVar17)(plVar13);
LAB_14434f135:
          if (lVar6 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x3b0);
            goto LAB_14434e4cc;
          }
        }
        lVar6 = 0;
      }
    }
    else {
      lVar6 = (*pcVar17)(plVar13);
    }
LAB_14434e4cc:
    uVar14 = (undefined4)CONCAT71((int7)((ulonglong)local_430 >> 8),lVar6 != 0);
  }
  if (*(char *)(ppuVar1 + 0x2f) == '\x03') {
    uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar6 = FUN_1412af310(uVar7);
    if (lVar6 != 0) {
      local_140[0] = 0;
      local_13c = 0;
      uStack_134 = 0;
      local_12c = 0x3f800000;
      local_124 = 0;
      local_120 = 0.0;
      local_11c = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 1;
      local_c8 = 0;
      local_c0 = 0x200000000;
      local_b8 = 0;
      local_b0 = 0x4fc71eb4;
      local_a8 = 0;
      lStack_a0 = 0;
      local_98 = 0;
      local_46c = uVar14;
      local_468 = lVar6;
      FUN_1405c5fa2();
      local_88 = &DAT_14cb769e8;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = &PTR_FUN_14b0394b0;
      local_120 = (float)FUN_140a9e5d4(param_1);
      local_13c = 0;
      uStack_134 = 0;
      local_12c = CONCAT44(local_120,0x3f800000);
      local_124 = 1;
      local_11c = '\0';
      local_100 = param_1[0x4e];
      if (local_b8 == param_1[0x53]) {
        iVar8 = (int)param_1[0x54];
        if (local_b0 != iVar8) goto LAB_14434e622;
      }
      else {
        iVar8 = (int)param_1[0x54];
LAB_14434e622:
        local_a8 = 0;
        local_b8 = param_1[0x53];
        local_b0 = iVar8;
      }
      local_118 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x224),
                           *(undefined4 *)((longlong)param_1 + 500));
      (*(code *)local_90[4])(&local_90,0);
      local_88 = (undefined *)param_1[0x50];
      FUN_1406022fe(&local_80,param_1 + 0x51);
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x58))(plVar15,ppuVar1,local_140);
      }
      if ((char)param_1[0x6e] == '\0') {
        local_368 = &PTR_FUN_14b322ee0;
        local_360 = (code *)0x0;
        local_358 = CONCAT44(local_358._4_4_,0x34002);
        local_288 = 0;
        local_350 = 0;
        ppuStack_348 = (undefined **)0x0;
        local_340 = (undefined **)0x0;
        puStack_338 = (undefined *)0x0;
        local_330 = 0;
        uStack_328 = 0;
        local_320 = 0;
        uStack_318 = 0;
        local_310 = 0;
        uStack_308 = 0;
        local_300 = 0;
        local_2fc = 0;
        uStack_2f4 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        local_2d8 = (longlong *)0x0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2b8 = 0;
        uStack_2b0 = 0;
        uStack_2af = 0;
        uStack_2a8 = 0;
        uStack_2a7 = 0;
        local_29c = 0;
        uStack_294 = 0;
        local_280 = (longlong *)0x0;
        ppuStack_278 = (undefined **)0x0;
        local_270 = 0;
        lStack_268 = 0;
        local_260 = 0x3002;
        local_258 = 0;
        local_220 = 0;
        local_218 = 0x200000000;
        local_210 = 0;
        local_208 = 0x3f800000;
        local_200 = 0;
        local_1fc = 0;
        local_1f0 = 0;
        local_1e8 = -0xfffff30;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d4 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0.0;
        local_1d0 = 0;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        local_1c0 = 0;
        lStack_1b8 = 0;
        local_1b0 = 0;
        local_194 = 0xbf800000;
        FUN_1405c5fa2();
        local_188 = &DAT_14cb769e8;
        local_180 = 0;
        uStack_178 = 0;
        local_190 = &PTR_FUN_14b0394b0;
        local_158 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_160 = 0;
        pcVar17 = (code *)0x0;
        if (param_1[0x6d] != 0) {
          puVar18 = *(undefined4 **)(param_1[0x6d] + 8);
          puVar16 = &DAT_14c9485f0;
          if (puVar18 != (undefined4 *)0x0) {
            puVar16 = puVar18;
          }
          if (DAT_14c947fe0 == 0) {
            lVar6 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar6);
            DAT_14c947fe0 = lVar6;
          }
          FUN_140045924(DAT_14c947fe0,&local_418,puVar16,1);
          pcVar17 = local_418;
        }
        if (local_360 != pcVar17) {
          local_350 = 0;
        }
        local_360 = pcVar17;
        if (plVar13 != (longlong *)0x0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar13);
        }
        local_280 = plVar13;
        if (ppuVar1 != (undefined **)0x0 && (~DAT_14c950c29 & 1) == 0) {
          FUN_1456cec3c(ppuVar1);
        }
        ppuStack_278 = ppuVar1;
        if ((ppuVar1 != (undefined **)0x0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(ppuVar1);
        }
        puStack_338 = (undefined *)param_1[0x5e];
        if (puStack_338 == (undefined *)0x0) {
          if ((*(int *)(ppuVar1 + 0x1a2) < 1) || (*(longlong *)ppuVar1[0x1a1] == 0)) {
            puStack_338 = (undefined *)0x0;
          }
          else {
            puStack_338 = *(undefined **)(*(longlong *)ppuVar1[0x1a1] + 0xc);
          }
        }
        if (local_11c == '\x01') {
          local_120 = (((float)local_13c + 1.0) / (1.0 - local_13c._4_4_)) * (float)local_12c *
                      (local_12c._4_4_ + (float)uStack_134) + uStack_134._4_4_;
          local_11c = '\0';
        }
        local_270 = CONCAT44(local_270._4_4_,local_120);
        ppuStack_348 = ppuVar1;
        fVar22 = (float)FUN_140284960(param_1);
        local_270 = CONCAT44((float)(~-(uint)(0.0 < fVar22) & 0x3dcccccd |
                                    (uint)(1.0 / fVar22) & -(uint)(0.0 < fVar22)) *
                             *(float *)(param_1[0x6b] + 0x308),(undefined4)local_270);
        lVar6 = FUN_1447e736e(param_1[0x6b] + 0x310);
        if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar6);
        }
        local_208 = CONCAT44(local_208._4_4_,*(undefined4 *)(param_1[0x6b] + 0x338));
        local_210 = lVar6;
        if (local_100 == 0) {
          local_450 = 0;
        }
        else {
          puVar18 = &DAT_14c9485f0;
          if (*(undefined4 **)(local_100 + 8) != (undefined4 *)0x0) {
            puVar18 = *(undefined4 **)(local_100 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar6 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar6);
            DAT_14c947fe0 = lVar6;
          }
          FUN_140045924(DAT_14c947fe0,&local_450,puVar18,1);
        }
        if (lStack_268 != local_450) {
          local_258 = 0;
        }
        lVar6 = param_1[0x6b];
        lStack_268 = local_450;
        if (local_250 != (undefined1 *)(lVar6 + 0x100)) {
          puVar12 = (undefined1 *)(lVar6 + 0x100);
          if (*(undefined1 **)(lVar6 + 0x130) != (undefined1 *)0x0) {
            puVar12 = *(undefined1 **)(lVar6 + 0x130);
          }
          FUN_1400709d4(local_250,puVar12,*(undefined4 *)(lVar6 + 0x138),local_218._4_4_);
        }
        local_208 = CONCAT44((undefined4)local_118,(undefined4)local_208);
        local_198 = (float)(**(code **)(*param_1 + 0x308))(param_1);
        local_198 = local_198 * 0.5;
        local_200 = 0;
        local_1fc = 0;
        if ((local_1f0 != 0) || (local_1e8 != -0xfffff30)) {
          local_1f0 = 0;
          local_1e8 = -0xfffff30;
          local_1e0 = 0;
        }
        local_1d8 = local_118._4_4_;
        local_1d4 = 0;
        local_1d0 = local_118._4_4_;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1c4 = local_118._4_4_;
        local_1c0 = 0;
        if (local_1b0 != 0x4fc71eb4) {
          local_1a8 = 0;
        }
        local_1b0 = 0x4fc71eb4;
        if (lStack_1b8 != local_b8) {
          local_1a8 = 0;
        }
        lStack_1b8 = local_b8;
        FUN_1403e0f94(&local_170,&lStack_a0);
        local_160 = local_140[0];
        (*(code *)local_190[4])(&local_190,0);
        local_188 = local_88;
        FUN_1406022fe(&local_180,&local_80);
        uVar14 = local_46c;
        if (ppuVar1 != (undefined **)0x0) {
          if (DAT_14cbbd498 == 0) {
            local_490 = &local_418;
            local_418 = FUN_140940982;
            local_480 = FUN_14081d0ea;
            local_488 = &LAB_146572ba2;
            local_498 = &LAB_148ca13ba;
            local_4a0 = &LAB_140e51436;
            local_4a8 = L"Engine";
            local_4b0 = 0;
            local_4b8 = 0x10000004;
            local_4c0 = 8;
            local_4c8 = 0x1068;
            FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
          }
          if (((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(ppuVar1[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(ppuVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) ==
               DAT_14cbbd498 + 0x30)) &&
             (lVar6 = (**(code **)(ppuVar1[0x1be] + 0x18))(ppuVar1 + 0x1be), lVar6 != 0)) {
            local_288 = local_288 | 0x800;
          }
        }
        if ((char)uVar14 != '\0') {
          local_288 = local_288 | 1;
        }
        if ((*(byte *)(param_1[0x6b] + 0x2f8) & 1) != 0) {
          local_288 = local_288 | 4;
        }
        local_408 = 0;
        uStack_400 = 0;
        local_418 = (code *)0x0;
        uStack_410 = 0;
        local_3f8 = (longlong *)0x0;
        local_3f0 = (undefined4)DAT_14c8464f8;
        uStack_3ec = DAT_14c8464f8._4_4_;
        uStack_3e8 = (undefined4)DAT_14c846500;
        uStack_3e4 = DAT_14c846500._4_4_;
        local_3e0 = DAT_14c846508;
        cVar4 = (**(code **)(*param_1 + 0x458))(param_1);
        if (cVar4 == '\0') {
          if ((char)uVar14 != '\0') {
            cVar4 = (**(code **)(*plVar13 + 0x700))(plVar13);
            uVar9 = 0x20;
            if (cVar4 == '\0') goto LAB_14434ed90;
          }
        }
        else {
          if (local_418._4_4_ == 0) {
LAB_14434f4ad:
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if ((-1 < (int)(uint)local_418) && ((int)(uint)local_418 < DAT_14c9647dc)) {
              plVar13 = (longlong *)
                        ((ulonglong)(((uint)local_418 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_418 >> 0x10) * 8));
              if ((plVar13 == (longlong *)0x0) ||
                 (((int)plVar13[2] != local_418._4_4_ ||
                  ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_14434f4ad;
              lVar6 = *plVar13;
              if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar6);
              }
            }
          }
          uStack_2d0 = uStack_410;
          local_2c8 = local_408;
          uStack_2c0 = uStack_400;
          local_2d8 = local_3f8;
          uVar9 = 2;
          local_2e8 = lVar6;
LAB_14434ed90:
          local_288 = local_288 | uVar9;
        }
        if ((*(byte *)((longlong)param_1 + 0x2d1) & 0x40) != 0) {
          local_288 = local_288 | 0x40;
        }
        FUN_1412af85e(local_468,&local_458,&local_368);
        if (((((local_454 != 0) && (-1 < (int)local_458)) && ((int)local_458 < DAT_14c9647dc)) &&
            ((plVar13 = (longlong *)
                        ((ulonglong)((local_458 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_458 >> 0x10) * 8)),
             plVar13 != (longlong *)0x0 && ((int)plVar13[2] == local_454)))) &&
           (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (lVar6 = *plVar13, lVar6 != 0)))) {
          fVar22 = *(float *)(lVar6 + 0x1b4);
          if (0.0 <= fVar22) {
LAB_14434ee70:
            *(bool *)(param_1 + 0x6e) = fVar22 <= 0.0;
            if (fVar22 <= 0.0) {
              local_3b8 = (undefined8 *)0x0;
              local_3b0 = 0;
              FUN_1446efa72(&local_3b8,0,3,0x10);
              puVar3 = local_3b8;
              local_3b0 = 3;
              *local_3b8 = &PTR_LAB_149e020b0;
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 1;
              lVar19 = DAT_14c758608 + 1;
              if (lVar10 == 0) {
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 2;
                lVar19 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar19;
              local_3b8[2] = lVar10;
              *local_3b8 = &PTR_FUN_14b9df4d0;
              local_3b8[3] = 0;
              iVar8 = 0;
              if (ppuVar1 != (undefined **)0x0) {
                uVar9 = *(uint *)((longlong)ppuVar1 + 0xc);
                *(uint *)(local_3b8 + 3) = uVar9;
                if ((int)uVar9 < DAT_14c9647dc) {
                  lVar19 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar19 = 0;
                }
                iVar8 = *(int *)(lVar19 + 0x10);
                if (*(int *)(lVar19 + 0x10) == 0) {
                  LOCK();
                  iVar8 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar20 = DAT_14c964868 + 1;
                  bVar21 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar8;
                  if (bVar21) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar20);
                  }
                  LOCK();
                  iVar8 = *(int *)(lVar19 + 0x10);
                  bVar21 = iVar8 == 0;
                  if (bVar21) {
                    *(int *)(lVar19 + 0x10) = iVar20;
                    iVar8 = 0;
                  }
                  UNLOCK();
                  if (bVar21) {
                    iVar8 = iVar20;
                  }
                }
              }
              *(int *)((longlong)puVar3 + 0x1c) = iVar8;
              puVar3[4] = param_1;
              FUN_1448b6402(lVar6 + 0x48,local_460,&local_3b8);
              if (local_3b0 != 0) {
                if (local_3b8 == (undefined8 *)0x0) goto LAB_14434efa8;
                (**(code **)*local_3b8)(local_3b8,0);
                FUN_1446efa72(&local_3b8,0,0,0x10);
                local_3b0 = 0;
              }
              if (local_3b8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else {
            if (*(longlong *)(lVar6 + 0x78) != 0) {
              fVar22 = *(float *)(*(longlong *)(lVar6 + 0x78) + 0x50);
              goto LAB_14434ee70;
            }
            *(undefined1 *)(param_1 + 0x6e) = 0;
          }
LAB_14434efa8:
          *(undefined4 *)(lVar6 + 0x98) = *(undefined4 *)(param_1[0x6b] + 0x2fc);
          *(undefined4 *)(lVar6 + 0x9c) = *(undefined4 *)(param_1[0x6b] + 0x300);
          *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(param_1[0x6b] + 0x304);
        }
        FUN_140df0e32(&local_368);
      }
      else {
        local_358 = 0;
        ppuStack_348 = &PTR_DAT_14b414cb0;
        local_368 = (undefined **)&LAB_143dcca28;
        local_340 = ppuVar1;
        FUN_1458e8594(local_468,&local_3b8);
        FUN_1458e842a(&local_3b8,&local_368);
        FUN_1458e84aa(&local_3b8,&local_418);
        if ((int)uStack_318 != local_3c8) {
          do {
            lVar6 = local_310;
            if ((int)uStack_318 < 0) {
              if ((local_3c8 < 0) || (*(int *)(local_418 + 0x398) <= local_3c8)) break;
            }
            else if (local_3c8 < 0) {
              if (*(int *)(local_368 + 0x73) <= (int)uStack_318) break;
            }
            else if (local_3c8 < *(int *)(local_418 + 0x398) ==
                     (int)uStack_318 < *(int *)(local_368 + 0x73)) break;
            if (((*(char *)(local_310 + 0x313) == '\x01') && (*(longlong *)(local_310 + 0x78) != 0))
               && ((*(byte *)(*(longlong *)(local_310 + 0x78) + 0x16c) & 1) != 0)) {
              *(undefined2 *)(local_310 + 0x312) = 1;
              *(byte *)(local_310 + 0x311) = *(byte *)(local_310 + 0x311) & 0xfd;
            }
            if (local_11c == '\x01') {
              local_120 = (((float)local_13c + 1.0) / (1.0 - local_13c._4_4_)) * (float)local_12c *
                          (local_12c._4_4_ + (float)uStack_134) + uStack_134._4_4_;
              local_11c = '\0';
            }
            FUN_1488df90e(local_310);
            (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x28))(lVar6 + 0x28,local_100);
            FUN_1488dfa14(lVar6,&local_b8);
            FUN_1403e0f94(lVar6 + 0x958,&lStack_a0);
            FUN_143dbfdc6(lVar6,local_140[0],1,1);
            (**(code **)(*(longlong *)(lVar6 + 0x2c8) + 0x20))(lVar6 + 0x2c8,0);
            *(undefined **)(lVar6 + 0x2d0) = local_88;
            FUN_1406022fe(lVar6 + 0x2d8,&local_80);
            fVar22 = (float)FUN_140284960(param_1);
            FUN_1488df968(lVar6,(float)(~-(uint)(0.0 < fVar22) & 0x3dcccccd |
                                       (uint)(1.0 / fVar22) & -(uint)(0.0 < fVar22)) *
                                *(float *)(param_1[0x6b] + 0x308));
            if (*(char *)(param_1[0x6d] + 0x58) == '\x01') {
              FUN_1488df9a2(lVar6);
            }
            FUN_143dbfd4a(lVar6);
            uStack_318 = CONCAT44(uStack_318._4_4_,(int)uStack_318 + 1);
            FUN_14131935c(&local_368);
          } while ((int)uStack_318 != local_3c8);
        }
        if (local_408 != 0) {
          plVar13 = local_3f8;
          if (local_3f8 == (longlong *)0x0) {
            plVar13 = (longlong *)&uStack_3e8;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if (local_358 != 0) {
          ppuVar11 = ppuStack_348;
          if (ppuStack_348 == (undefined **)0x0) {
            ppuVar11 = &puStack_338;
          }
          (**(code **)(*ppuVar11 + 0x10))();
        }
        if (local_3a8 != 0) {
          if (local_398 == (longlong *)0x0) {
            local_398 = local_388;
          }
          (**(code **)(*local_398 + 0x10))();
        }
      }
      local_90 = (undefined **)&DAT_14a171d50;
      uVar2 = uStack_78 >> 0x20;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      if ((int)uVar2 != 0) {
        FUN_140115c12(&local_80,0);
      }
      local_88 = (undefined *)0x0;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      FUN_1403e0ff1(lStack_a0,local_98 & 0xffffffff);
      if (lStack_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_140acdcf6(param_1,local_448);
  FUN_1405e8bfa(param_1);
  FUN_1447f69b6(param_1 + 0x11);
  if ((0 < *(int *)(ppuVar1 + 0x157)) && (*(char *)(ppuVar1 + 0x2f) == '\x03')) {
    FUN_1447cd2ec(ppuVar1 + 0x156,0);
  }
  uVar7 = 1;
LAB_14434f0d2:
  if ((local_70 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14434f684 FUN_14434f684 body=69 status=ok
// SIG undefined FUN_14434f684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14434f684(void)

{
  _DAT_14cbe7788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014434f6c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe7790,1);
  return;
}



// FUNCTION 14434f6c9 FUN_14434f6c9 body=69 status=ok
// SIG undefined FUN_14434f6c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14434f6c9(void)

{
  _DAT_14cbe7798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014434f70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe77a0,1);
  return;
}



// FUNCTION 14434f70e FUN_14434f70e body=69 status=ok
// SIG undefined FUN_14434f70e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14434f70e(void)

{
  _DAT_14cbe77a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014434f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe77b0,1);
  return;
}



// FUNCTION 14434f753 FUN_14434f753 body=69 status=ok
// SIG undefined FUN_14434f753(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14434f753(void)

{
  _DAT_14cbe77b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014434f795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe77c0,1);
  return;
}



// FUNCTION 14434f798 FUN_14434f798 body=6378 status=ok
// SIG undefined FUN_14434f798(void)

ulonglong FUN_14434f798(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  undefined1 *puVar32;
  bool bVar33;
  float fVar34;
  undefined4 uVar35;
  undefined1 auStack_3e8 [32];
  uint local_3c8;
  undefined4 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  wchar_t *local_3a8;
  code *local_3a0;
  undefined1 *local_398;
  undefined8 *local_390;
  code *local_388;
  code *local_380;
  char local_369;
  undefined8 *local_368;
  uint local_35c;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  double local_310;
  longlong local_308;
  longlong lStack_300;
  undefined2 local_2f8 [2];
  undefined8 local_2f4;
  undefined8 uStack_2ec;
  undefined8 local_2e4;
  undefined1 local_2dc;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0 [48];
  undefined1 *local_280;
  undefined8 local_278;
  longlong local_270;
  int local_268;
  undefined8 local_260;
  longlong lStack_258;
  ulonglong local_250;
  undefined **local_248;
  undefined *local_240;
  longlong local_238;
  ulonglong uStack_230;
  byte local_228 [8];
  undefined8 local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  longlong local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  code *local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  code *local_198;
  double dStack_190;
  double local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 *local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  uVar11 = FUN_1408e9b00();
  uVar28 = (ulonglong)uVar11;
  if ((char)uVar11 == '\0') goto LAB_144350573;
  lVar2 = param_1[6];
  *(int *)((longlong)param_1 + 0x2dc) = *(int *)((longlong)param_1 + 0x2dc) + 1;
  (**(code **)(*param_1 + 0x438))(param_1);
  FUN_143ec3f86(param_1,1);
  FUN_140993fa0(param_1);
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_320);
  FUN_143ecadfa(lVar2,&local_338,(char)param_1[7],&local_320);
  plVar21 = *(longlong **)(param_1[6] + 0x1b0);
  if (*(longlong *)(lVar2 + 0xb18) == 0) {
    plVar17 = (longlong *)0x0;
  }
  else {
    plVar17 = *(longlong **)(lVar2 + 0xb20);
  }
  if (plVar21 == (longlong *)0x0) {
    bVar33 = false;
  }
  else {
    pcVar3 = *(code **)(*plVar21 + 0x5e8);
    if (pcVar3 == FUN_140972dde) {
      lVar15 = plVar21[0x76];
      if (lVar15 == 0) {
        pcVar3 = *(code **)(*plVar21 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          if (*(code **)(plVar21[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (*(int *)((longlong)plVar21 + 0x75b4) != 0) {
              uVar27 = *(uint *)(plVar21 + 0xeb6);
              lVar15 = 0;
              if (((int)uVar27 < 0) || (DAT_14c9647dc <= (int)uVar27)) goto LAB_14434f926;
              plVar14 = (longlong *)
                        ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
              if ((plVar14 != (longlong *)0x0) &&
                 (((int)plVar14[2] == *(int *)((longlong)plVar21 + 0x75b4) &&
                  ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) {
                if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                  lVar15 = *plVar14;
                }
                else {
                  lVar15 = 0;
                }
                lVar15 = lVar15 + 0x110;
                goto LAB_14434fb28;
              }
            }
          }
          else {
            lVar15 = (**(code **)(plVar21[0x784] + 0x18))(plVar21 + 0x784);
LAB_14434fb28:
            if (lVar15 != 0) {
              lVar15 = *(longlong *)(lVar15 + 0x20);
              goto LAB_14434fb35;
            }
          }
        }
        else {
          lVar15 = (*pcVar3)(plVar21);
LAB_14434fb35:
          if (lVar15 != 0) {
            lVar15 = *(longlong *)(lVar15 + 0x3b0);
            goto LAB_14434f926;
          }
        }
        lVar15 = 0;
      }
    }
    else {
      lVar15 = (*pcVar3)(plVar21);
    }
LAB_14434f926:
    bVar33 = lVar15 != 0;
  }
  if (*(char *)(lVar2 + 0x178) == '\x03') {
    local_308 = 0;
    lStack_300 = 0;
    local_2f8[0] = 0;
    local_2f4 = 0;
    uStack_2ec = 0;
    local_2e4 = 0x3f800000;
    local_2dc = 0;
    local_2d8 = 0;
    local_2d4 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 1;
    local_280 = (undefined1 *)0x0;
    local_278 = 0x200000000;
    local_270 = 0;
    local_268 = 0x4fc71eb4;
    local_260 = 0;
    lStack_258 = 0;
    local_250 = 0;
    FUN_1405c5fa2();
    local_240 = &DAT_14cb769e8;
    local_238 = 0;
    uStack_230 = 0;
    local_248 = &PTR_FUN_14b0394b0;
    local_228[0] = local_228[0] & 0xf0;
    local_220 = 0;
    dStack_218 = 0.0;
    local_210 = 0.0;
    dStack_208 = 0.0;
    local_200 = 0;
    local_1f8 = DAT_14c8464f8;
    dStack_1f0 = DAT_14c846500;
    local_1e8 = DAT_14c846508;
    local_180 = &DAT_3f8000003f800000;
    local_178 = 0;
    local_170 = 0;
    local_308 = param_1[0x6d];
    if (local_308 == 0) {
      lStack_300 = param_1[0x6e];
      if (*(float *)((longlong)param_1 + 0x394) <= 0.0 &&
          *(float *)((longlong)param_1 + 0x394) != 0.0) {
        if (lStack_300 != 0) {
          fVar34 = (float)FUN_140b53448();
          if (ABS(fVar34) <= 1e-08) {
            fVar34 = (float)FUN_140b536be(lStack_300);
          }
          else {
            fVar34 = (float)FUN_140b531d2();
          }
          goto LAB_14434fb5b;
        }
        *(undefined4 *)((longlong)param_1 + 0x394) = 0;
      }
    }
    else if (*(float *)((longlong)param_1 + 0x394) <= 0.0 &&
             *(float *)((longlong)param_1 + 0x394) != 0.0) {
      if (ABS(*(float *)(local_308 + 0x2f8)) <= 1e-08) {
        fVar34 = *(float *)(local_308 + 0x2d4);
      }
      else {
        fVar34 = *(float *)(local_308 + 0x2d4);
        if (*(float *)(local_308 + 0x2d4) <= *(float *)(local_308 + 0x2dc)) {
          fVar34 = *(float *)(local_308 + 0x2dc);
        }
      }
LAB_14434fb5b:
      *(float *)((longlong)param_1 + 0x394) = fVar34;
    }
    if (((bVar33 != false) &&
        (cVar9 = (**(code **)(*plVar21 + 0x700))(plVar21), plVar21 != (longlong *)0x0)) &&
       (cVar9 == '\0')) {
      uVar16 = FUN_140757e32();
      plVar14 = (longlong *)FUN_144718840(plVar21,uVar16);
      if (plVar14 != (longlong *)0x0) {
        local_170 = (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    local_228[0] = local_228[0] & 0xfe | bVar33;
    local_2d8 = FUN_140a9e5d4(param_1);
    local_2f4 = 0;
    uStack_2ec = 0;
    local_2e4 = CONCAT44(local_2d8,0x3f800000);
    local_2dc = 1;
    local_2d4 = 0;
    local_2d0 = CONCAT44(local_2d0._4_4_,*(undefined4 *)((longlong)param_1 + 500));
    uStack_2b8 = param_1[0x4e];
    lVar15 = param_1[0x6b];
    if (local_2b0 != (undefined1 *)(lVar15 + 0x100)) {
      puVar32 = (undefined1 *)(lVar15 + 0x100);
      if (*(undefined1 **)(lVar15 + 0x130) != (undefined1 *)0x0) {
        puVar32 = *(undefined1 **)(lVar15 + 0x130);
      }
      FUN_1400709d4(local_2b0,puVar32,*(undefined4 *)(lVar15 + 0x138),local_278._4_4_);
    }
    local_2d0 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x224),(undefined4)local_2d0);
    uStack_2c8 = CONCAT44((int)param_1[0x49],*(undefined4 *)((longlong)param_1 + 0x23c));
    local_2c0 = CONCAT44(local_2c0._4_4_,*(undefined4 *)((longlong)param_1 + 0x37c));
    if (local_270 == param_1[0x53]) {
      iVar26 = (int)param_1[0x54];
      if (local_268 != iVar26) goto LAB_14434fcb1;
    }
    else {
      iVar26 = (int)param_1[0x54];
LAB_14434fcb1:
      local_260 = 0;
      local_270 = param_1[0x53];
      local_268 = iVar26;
    }
    local_369 = (char)uVar11;
    (*(code *)local_248[4])(&local_248,0);
    local_240 = (undefined *)param_1[0x50];
    FUN_1406022fe(&local_238,param_1 + 0x51);
    local_1e0 = local_320;
    uStack_1dc = uStack_31c;
    uStack_1d8 = uStack_318;
    uStack_1d4 = uStack_314;
    local_1d0 = local_310;
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_168);
    local_1b8 = local_158;
    local_1c8 = local_168;
    dStack_1c0 = uStack_160;
    local_1b0 = (double)CONCAT44(uStack_334,local_338);
    uStack_1a8 = (double)CONCAT44(uStack_32c,uStack_330);
    local_1a0 = local_328;
    cVar9 = FUN_143ec3e64(param_1);
    fVar34 = *(float *)(param_1 + 0x71);
    if (cVar9 == '\0') {
      fVar34 = fVar34 * *(float *)((longlong)param_1 + 0x15c);
    }
    local_180 = (undefined1 *)CONCAT44(local_180._4_4_,fVar34);
    uVar35 = (**(code **)(*param_1 + 0x3f0))(param_1);
    local_180 = (undefined1 *)CONCAT44(uVar35,(undefined4)local_180);
    cVar9 = (**(code **)(*param_1 + 0x458))(param_1,&local_220);
    local_228[0] = local_228[0] & 0xfd | cVar9 * '\x02';
    local_178 = FUN_14120b5f2(param_1);
    bVar7 = lStack_300 == 0;
    bVar8 = local_308 == 0;
    if (plVar21 == (longlong *)0x0) {
      bVar10 = 0;
    }
    else {
      bVar10 = (**(code **)(*plVar21 + 0x798))(plVar21);
    }
    if (bVar33 == true && (!bVar7 || !bVar8)) {
      if ((bVar10 & local_308 != 0) == 0) {
        if (((double)CONCAT44(uStack_1dc,local_1e0) == (double)local_1c8) &&
           (!NAN((double)CONCAT44(uStack_1dc,local_1e0)) && !NAN((double)local_1c8))) {
          if (((double)CONCAT44(uStack_1d4,uStack_1d8) == dStack_1c0) &&
             (!NAN((double)CONCAT44(uStack_1d4,uStack_1d8)) && !NAN(dStack_1c0))) {
            if ((local_1d0 == local_1b8) && (!NAN(local_1d0) && !NAN(local_1b8)))
            goto LAB_14434fe03;
          }
        }
      }
LAB_14434fe4e:
      bVar10 = 4;
    }
    else {
      if (bVar7 && bVar8) goto LAB_14434fe4e;
LAB_14434fe03:
      bVar10 = 0;
    }
    local_228[0] = local_228[0] & 0xfb | bVar10;
    (**(code **)(*param_1 + 0x490))(param_1);
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x58))(plVar17,lVar2,local_2f8);
    }
    if (((local_228[0] & 2) == 0) && ((bVar33 & local_308 != 0) == 1)) {
      bVar33 = true;
      if ((*(byte *)(local_308 + 0x760) & 1) != 0) {
        bVar33 = 0.0 < *(float *)(local_308 + 0x778);
      }
      if ((plVar21 != (longlong *)0x0) && (bVar33)) {
        uVar16 = FUN_141483aa8();
        plVar17 = (longlong *)(**(code **)(*plVar21 + 0x288))(plVar21,uVar16);
        if (plVar17 != (longlong *)0x0) {
          uVar16 = FUN_141483aa8();
          plVar14 = (longlong *)FUN_144718840(plVar17,uVar16);
          if (((((plVar14 != (longlong *)0x0 && plVar17 != plVar14) &&
                (cVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,*(undefined1 *)(lVar2 + 0xd44)),
                cVar9 != '\0')) && (lVar15 = FUN_140519fd4(plVar21), lVar15 != 0)) &&
              ((*(int *)(lVar15 + 0xc0) != 0 && (0 < *(int *)(lVar15 + 0x80))))) &&
             (((**(int **)(lVar15 + 0x78) != 0x7fffffff &&
               ((uVar28 = *(ulonglong *)(*(int **)(lVar15 + 0x78) + 1), uVar28 >> 0x20 != 0 &&
                (iVar26 = (int)uVar28, -1 < iVar26)))) && (iVar26 < DAT_14c9647dc)))) {
            uVar23 = (ulonglong)((uint)(uVar28 >> 0x10) & 0x7fff);
            local_350 = (uVar28 & 0xffff) * 3;
            puVar18 = (undefined8 *)
                      ((ulonglong)(uint)((int)local_350 * 8) +
                      *(longlong *)(DAT_14c9647c8 + uVar23 * 8));
            if (((puVar18 != (undefined8 *)0x0) &&
                (iVar12 = (int)(uVar28 >> 0x20), *(int *)(puVar18 + 2) == iVar12)) &&
               ((*(uint *)(puVar18 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(puVar18 + 1) & 0x10200000) == 0) {
                local_358 = *puVar18;
              }
              else {
                local_358 = 0;
              }
              if (DAT_14cb223d8 == 0) {
                local_168 = FUN_1449e2820;
                local_380 = FUN_14081d0ea;
                local_388 = FUN_1427b09ee;
                local_398 = &LAB_147f29feb;
                local_3a0 = FUN_1464384fe;
                local_3a8 = L"Engine";
                local_3b0 = 0;
                local_3b8 = 0x10004001;
                local_3c0 = 8;
                local_3c8 = 0x28;
                local_390 = &local_168;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
              }
              plVar17 = (longlong *)(**(code **)(*plVar21 + 0x288))(plVar21,DAT_14cb223d8);
              if (plVar17 != (longlong *)0x0) {
                if (DAT_14cb223d8 == 0) {
                  local_168 = FUN_1449e2820;
                  local_380 = FUN_14081d0ea;
                  local_388 = FUN_1427b09ee;
                  local_398 = &LAB_147f29feb;
                  local_3a0 = FUN_1464384fe;
                  local_3a8 = L"Engine";
                  local_3b0 = 0;
                  local_3b8 = 0x10004001;
                  local_3c0 = 8;
                  local_3c8 = 0x28;
                  local_390 = &local_168;
                  FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                }
                plVar14 = (longlong *)FUN_144718840(plVar17,DAT_14cb223d8);
                if (((plVar17 != plVar14) && (plVar14 != (longlong *)0x0)) &&
                   (lVar15 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar15 != 0)) {
                  if (*(longlong **)(lVar15 + 0x18) == (longlong *)0x0) {
                    local_368 = (undefined8 *)0x0;
                  }
                  else {
                    local_368 = (undefined8 *)
                                (**(code **)(**(longlong **)(lVar15 + 0x18) + 0x180))();
                  }
                  FUN_140154c96(&local_168,local_358);
                  iVar22 = FUN_1448618b0(lVar15 + 0x20,&local_168,local_368);
                  if (iVar22 == 2) {
                    if (((iVar26 < DAT_14c9647dc) &&
                        (plVar17 = (longlong *)
                                   ((ulonglong)(uint)((int)local_350 << 3) +
                                   *(longlong *)(DAT_14c9647c8 + uVar23 * 8)),
                        plVar17 != (longlong *)0x0)) &&
                       (((int)plVar17[2] == iVar12 &&
                        (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (*plVar17 != 0)))))) {
                      uVar11 = *(uint *)(*plVar17 + 0xc);
                      local_220 = CONCAT44(local_220._4_4_,uVar11);
                      if ((int)uVar11 < DAT_14c9647dc) {
                        lVar15 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                      }
                      else {
                        lVar15 = 0;
                      }
                      iVar26 = *(int *)(lVar15 + 0x10);
                      if (*(int *)(lVar15 + 0x10) == 0) {
                        LOCK();
                        iVar26 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar12 = DAT_14c964868 + 1;
                        bVar33 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar26;
                        if (bVar33) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar12);
                        }
                        LOCK();
                        iVar26 = *(int *)(lVar15 + 0x10);
                        bVar33 = iVar26 == 0;
                        if (bVar33) {
                          *(int *)(lVar15 + 0x10) = iVar12;
                          iVar26 = 0;
                        }
                        UNLOCK();
                        if (bVar33) {
                          iVar26 = iVar12;
                        }
                      }
                    }
                    else {
                      local_220 = 0;
                      iVar26 = 0;
                    }
                    local_220 = CONCAT44(iVar26,(uint)local_220);
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar15 = param_1[0x6b];
    if (*(char *)(lVar15 + 0x358) == '\x01') {
      if (*(char *)(lVar15 + 0x359) == '\x01') {
        if (local_220._4_4_ == 0) {
LAB_144350e4f:
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((-1 < (int)(uint)local_220) && ((int)(uint)local_220 < DAT_14c9647dc)) {
            puVar18 = (undefined8 *)
                      ((ulonglong)(((uint)local_220 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_220 >> 0x10) * 8));
            if ((puVar18 == (undefined8 *)0x0) ||
               ((*(int *)(puVar18 + 2) != local_220._4_4_ ||
                ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_144350e4f;
            uVar16 = *puVar18;
          }
        }
        local_3c8 = local_3c8 & 0xffffff00;
        FUN_1470ee510(lVar15 + 0x360,&local_168,uVar16);
LAB_144350000:
        local_1d0 = local_158;
        local_1e0 = (undefined4)local_168;
        uStack_1dc = local_168._4_4_;
        uStack_1d8 = (undefined4)uStack_160;
        uStack_1d4 = uStack_160._4_4_;
      }
      else if (plVar21 != (longlong *)0x0) {
        FUN_14030a482(lVar15 + 0x360,&local_168,plVar21,0);
        goto LAB_144350000;
      }
      lVar15 = param_1[0x6b];
      if (*(char *)(lVar15 + 0x35a) == '\x01') {
        if (*(char *)(lVar15 + 0x359) == '\x01') {
          local_228[0] = local_228[0] | 8;
          if (local_220._4_4_ == 0) {
LAB_144350c36:
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            if ((-1 < (int)(uint)local_220) && ((int)(uint)local_220 < DAT_14c9647dc)) {
              puVar18 = (undefined8 *)
                        ((ulonglong)(((uint)local_220 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_220 >> 0x10) * 8));
              if ((puVar18 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar18 + 2) != local_220._4_4_ ||
                  ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_144350c36;
              uVar16 = *puVar18;
            }
          }
          FUN_140d0fb16(lVar15 + 0x3c0,&local_168,uVar16,0);
          local_198 = (code *)(local_1f8 + (double)local_168);
          dStack_190 = dStack_1f0 + uStack_160;
          local_188 = local_1e8 + local_158;
        }
        else if (plVar21 != (longlong *)0x0) {
          local_228[0] = local_228[0] | 8;
          FUN_140d0fb16(lVar15 + 0x3c0,&local_168,plVar21,0);
          local_188 = local_158;
          local_198 = local_168;
          dStack_190 = uStack_160;
        }
      }
      lVar15 = local_200;
      dVar4 = dStack_208;
      dVar6 = local_210;
      dVar5 = dStack_218;
      if ((local_228[0] & 2) != 0) {
        if ((((local_220._4_4_ != 0) && (-1 < (int)(uint)local_220)) &&
            ((int)(uint)local_220 < DAT_14c9647dc)) &&
           (((plVar21 = (longlong *)
                        ((ulonglong)(((uint)local_220 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_220 >> 0x10) * 8)),
             plVar21 != (longlong *)0x0 && ((int)plVar21[2] == local_220._4_4_)) &&
            (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 &&
             (plVar21 = (longlong *)*plVar21, plVar21 != (longlong *)0x0)))))) {
          if (local_200 != 0) {
            local_a8 = (undefined8 *)0x0;
            local_a0 = 0x1800000000;
            FUN_140a44582(plVar21,&local_168,0);
            lVar24 = (longlong)(int)local_a0;
            puVar18 = &local_168;
            if (local_a8 != (undefined8 *)0x0) {
              puVar18 = local_a8;
            }
            if (lVar24 != 0) {
              lVar31 = 0;
              do {
                plVar17 = *(longlong **)((longlong)puVar18 + lVar31);
                if ((plVar17 != (longlong *)0x0) &&
                   (cVar9 = (**(code **)(*plVar17 + 0x4c8))(plVar17,lVar15), cVar9 != '\0')) {
                  if (local_a8 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  goto LAB_14435022f;
                }
                lVar31 = lVar31 + 8;
              } while (lVar24 * 8 != lVar31);
            }
            if (local_a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          if (*(code **)(*plVar21 + 0x3a8) == (code *)&LAB_144a8179a) {
            plVar17 = (longlong *)plVar21[0x39];
          }
          else {
            plVar17 = (longlong *)(**(code **)(*plVar21 + 0x3a8))(plVar21);
          }
          if (plVar17 == (longlong *)0x0) {
            lVar15 = plVar21[0x39];
            if (lVar15 == 0) {
              local_158 = DAT_14c8464f0;
              local_168 = DAT_14c8464e0;
              uStack_160 = DAT_14c8464e8;
            }
            else {
              local_168 = *(code **)(lVar15 + 0x260);
              uStack_160 = *(double *)(lVar15 + 0x268);
              local_158 = *(double *)(lVar15 + 0x270);
            }
          }
          else {
LAB_14435022f:
            (**(code **)(*plVar17 + 0x4b0))(plVar17,&local_168,local_200);
          }
          dVar5 = dVar5 + (double)local_168;
          dVar6 = dVar6 + uStack_160;
          dVar4 = dVar4 + local_158;
        }
        dVar4 = dVar4 - local_1d0;
        dVar6 = dVar6 - (double)CONCAT44(uStack_1d4,uStack_1d8);
        dVar5 = dVar5 - (double)CONCAT44(uStack_1dc,local_1e0);
        uStack_1a8 = 0.0;
        if ((((dVar6 != 0.0) || (NAN(dVar6))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
          uStack_1a8 = atan2(dVar6,dVar5);
          uStack_1a8 = uStack_1a8 * 57.29577951308232;
        }
        dVar5 = SQRT(dVar5 * dVar5 + dVar6 * dVar6);
        local_1b0 = 0.0;
        if (((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar5 != 0.0 || (NAN(dVar5))))) {
          local_1b0 = atan2(dVar4,dVar5);
          local_1b0 = local_1b0 * 57.29577951308232;
        }
        local_1a0 = 0;
      }
      local_228[0] = local_228[0] & 0xfb;
    }
    puVar32 = local_280;
    if (local_280 == (undefined1 *)0x0) {
      puVar32 = local_2b0;
    }
    if ((longlong)(int)local_278 != 0) {
      lVar15 = (longlong)(int)local_278 * 0x18;
      do {
        FUN_14033465a(puVar32);
        puVar32 = puVar32 + 0x18;
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != 0);
    }
    if ((((local_228[0] & 4) == 0) || (DAT_14c7640dc != '\x01')) || ((int)local_2c0 < DAT_14c7640e4)
       ) {
      local_3c8 = CONCAT31(local_3c8._1_3_,1);
      FUN_1414d3a68(param_1,&local_308,0,local_2c0 & 0xffffffff);
    }
    else {
      iVar26 = (int)local_2c0;
      if ((local_178 == 0) && (0 < DAT_14c7640e8 && DAT_14c7640e8 < (int)local_2c0)) {
        fVar34 = (float)(int)local_2c0 / (float)DAT_14c7640e8;
        iVar12 = (int)ROUND(fVar34 + fVar34 + 0.5) >> 1;
        if (1 < iVar12) {
          fVar34 = (float)(int)local_2c0 / (float)iVar12;
          iVar26 = -((int)ROUND(-0.5 - (fVar34 + fVar34)) >> 1);
        }
      }
      if (0 < (int)local_2c0) {
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar18 = (undefined8 *)(lVar15 + 0x308);
        puVar30 = (undefined8 *)(lVar15 + 0x310);
        local_340 = (longlong *)(lVar15 + 0x2b8);
        local_348 = 0xc00000527800b400;
        iVar22 = 0;
        local_358 = CONCAT44(local_358._4_4_,iVar26);
        iVar12 = (int)local_2c0;
        local_368 = puVar30;
LAB_1443506db:
        if (iVar12 < iVar26) {
          iVar26 = iVar12;
        }
        local_350 = CONCAT44(local_350._4_4_,iVar26);
        puVar20 = (uint *)*puVar18;
        if (puVar20 != (uint *)0x0) goto LAB_144350758;
        do {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_144358231);
          }
          puVar19 = (undefined4 *)*puVar30;
          *puVar30 = 0;
          if (puVar19 == (undefined4 *)0x0) {
            puVar19 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar19 = 0xffffffff;
          *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar18 = puVar19;
          FUN_140217a48(puVar18);
          puVar20 = (uint *)*puVar18;
LAB_144350758:
          uVar28 = *(longlong *)(puVar20 + 0x10) + 7;
          uVar11 = puVar20[0x12];
          while( true ) {
            puVar29 = (undefined8 *)(uVar28 & 0xfffffffffffffff8);
            if (puVar29 + 0x4b <= puVar20 + 0x4000) {
              *(undefined8 **)(puVar20 + 0x10) = puVar29 + 0x4b;
              puVar20[0x12] = uVar11 + 1;
              uVar11 = 0;
              FUN_1447247dc(puVar29,0);
              *puVar29 = &PTR_FUN_14b9df538;
              uVar28 = 0;
              if (param_1 != (longlong *)0x0) {
                uVar11 = *(uint *)((longlong)param_1 + 0xc);
                if ((int)uVar11 < DAT_14c9647dc) {
                  lVar15 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                }
                else {
                  lVar15 = 0;
                }
                uVar28 = (ulonglong)*(uint *)(lVar15 + 0x10);
                if (*(uint *)(lVar15 + 0x10) == 0) {
                  LOCK();
                  iVar26 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar27 = DAT_14c964868 + 1;
                  bVar33 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar26;
                  if (bVar33) {
                    local_35c = uVar27;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar27);
                    uVar27 = local_35c;
                  }
                  LOCK();
                  uVar13 = *(uint *)(lVar15 + 0x10);
                  bVar33 = uVar13 == 0;
                  if (bVar33) {
                    *(uint *)(lVar15 + 0x10) = uVar27;
                    uVar13 = 0;
                  }
                  UNLOCK();
                  if (bVar33) {
                    uVar13 = uVar27;
                  }
                  uVar28 = (ulonglong)uVar13;
                }
              }
              puVar29[0x15] = (ulonglong)uVar11 | uVar28 << 0x20;
              puVar29[0x16] = local_308;
              puVar29[0x17] = lStack_300;
              *(undefined2 *)(puVar29 + 0x18) = local_2f8[0];
              *(undefined4 *)((longlong)puVar29 + 0xc4) = (undefined4)local_2f4;
              *(undefined4 *)(puVar29 + 0x19) = local_2f4._4_4_;
              *(undefined4 *)((longlong)puVar29 + 0xcc) = (undefined4)uStack_2ec;
              *(undefined4 *)(puVar29 + 0x1a) = uStack_2ec._4_4_;
              *(undefined4 *)((longlong)puVar29 + 0xd4) = (undefined4)local_2e4;
              *(undefined4 *)(puVar29 + 0x1b) = local_2e4._4_4_;
              *(undefined1 *)((longlong)puVar29 + 0xdc) = local_2dc;
              *(undefined4 *)(puVar29 + 0x1c) = local_2d8;
              *(undefined1 *)((longlong)puVar29 + 0xe4) = local_2d4;
              *(undefined4 *)(puVar29 + 0x1d) = (undefined4)local_2d0;
              *(undefined4 *)((longlong)puVar29 + 0xec) = local_2d0._4_4_;
              *(undefined4 *)(puVar29 + 0x1e) = (undefined4)uStack_2c8;
              *(undefined4 *)((longlong)puVar29 + 0xf4) = uStack_2c8._4_4_;
              *(int *)(puVar29 + 0x1f) = (int)local_2c0;
              *(undefined4 *)((longlong)puVar29 + 0xfc) = local_2c0._4_4_;
              *(undefined4 *)(puVar29 + 0x20) = (undefined4)uStack_2b8;
              *(undefined4 *)((longlong)puVar29 + 0x104) = uStack_2b8._4_4_;
              puVar29[0x27] = 0;
              puVar32 = local_280;
              if (local_280 == (undefined1 *)0x0) {
                puVar32 = local_2b0;
              }
              FUN_1400709d4(puVar29 + 0x21,puVar32,local_278 & 0xffffffff,0);
              uVar28 = local_250;
              lVar15 = lStack_258;
              puVar29[0x29] = local_270;
              *(int *)(puVar29 + 0x2a) = local_268;
              puVar29[0x2b] = 0;
              puVar29[0x2c] = 0;
              puVar32 = (undefined1 *)(local_250 & 0xffffffff);
              *(int *)(puVar29 + 0x2d) = (int)local_250;
              if ((int)local_250 == 0) {
                *(undefined4 *)((longlong)puVar29 + 0x16c) = 0;
              }
              else {
                FUN_1403e11c4(puVar29 + 0x2c,local_250 & 0xffffffff,0);
                FUN_1403e103e(puVar29[0x2c],lVar15,uVar28 & 0xffffffff);
              }
              puVar30 = local_368;
              puVar29[0x2e] = &DAT_14a171d50;
              puVar29[0x30] = 0;
              puVar29[0x31] = 0;
              puVar29[0x2f] = local_240;
              FUN_1406022fe(puVar29 + 0x30,&local_238);
              puVar29[0x2e] = &PTR_FUN_14b0394b0;
              memcpy(puVar29 + 0x32,local_228,0xbc);
              *(int *)(puVar29 + 0x4a) = iVar22;
              *(undefined4 *)((longlong)puVar29 + 0x254) = (undefined4)local_350;
              if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
              }
              puVar29[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar29[9] = puVar29;
              puVar29[10] = puVar29;
              if (*local_340 == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = *(undefined8 *)(*local_340 + 0x30);
              }
              puVar29[0xf] = uVar16;
              puVar29[0x10] = local_348;
              *(undefined4 *)((longlong)puVar29 + 0x1c) = 0;
              if (puVar29 == (undefined8 *)0x0) {
                local_168 = (code *)CONCAT71(local_168._1_7_,1);
                FUN_1447439e4(0,&local_168);
              }
              else {
                LOCK();
                *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
                UNLOCK();
                local_168 = (code *)CONCAT71(local_168._1_7_,1);
                FUN_1447439e4(puVar29,&local_168);
                LOCK();
                piVar1 = (int *)(puVar29 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar29)(puVar29,1);
                }
              }
              iVar22 = iVar22 + (int)local_358;
              iVar25 = iVar12 - (int)local_358;
              bVar33 = (int)local_358 <= iVar12;
              iVar12 = iVar25;
              iVar26 = (int)local_358;
              if (iVar25 != 0 && bVar33) goto LAB_1443506db;
              goto LAB_14435049e;
            }
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
            LOCK();
            uVar27 = *puVar20;
            *puVar20 = *puVar20 + uVar11 + 1;
            UNLOCK();
            if ((uVar27 ^ uVar11) != 0xffffffff) break;
            puVar20 = (uint *)*puVar18;
            *puVar20 = 0xffffffff;
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
            puVar20[0x12] = 0;
            *puVar18 = puVar20;
            uVar28 = (longlong)puVar20 + 0x5f;
            uVar11 = 0;
          }
        } while( true );
      }
    }
LAB_14435049e:
    local_248 = (undefined **)&DAT_14a171d50;
    uVar28 = uStack_230 >> 0x20;
    uStack_230 = uStack_230 & 0xffffffff00000000;
    if ((int)uVar28 != 0) {
      FUN_140115c12(&local_238,0);
    }
    local_240 = (undefined *)0x0;
    uVar28 = CONCAT71((int7)((ulonglong)puVar32 >> 8),local_369);
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    FUN_1403e0ff1(lStack_258,local_250 & 0xffffffff);
    if (lStack_258 != 0) {
      FUN_1400020a8();
    }
    if (local_280 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140acdcf6(param_1,&local_338);
  FUN_1405e8bfa(param_1);
  FUN_1447f69b6(param_1 + 0x11);
  if ((0 < *(int *)(lVar2 + 0xab8)) && (*(char *)(lVar2 + 0x178) == '\x03')) {
    FUN_1447cd2ec(lVar2 + 0xab0,0);
  }
LAB_144350573:
  if ((local_90 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return uVar28 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144351084 FUN_144351084 body=2934 status=ok
// SIG undefined FUN_144351084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144351084(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  longlong param_9,undefined8 *param_10,undefined4 *param_11,undefined8 *param_12,
                  undefined2 param_13,longlong param_14,code param_15,undefined1 param_16)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  code *pcVar18;
  int iVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined1 auStack_2f8 [32];
  wchar_t *local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  wchar_t *local_2c0;
  wchar_t *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  code **local_2a0;
  code *local_298;
  code *local_290;
  longlong *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  code *local_268;
  undefined1 local_260 [8];
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined1 local_238 [48];
  undefined1 *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  int local_190;
  undefined4 local_18c;
  undefined2 local_188;
  undefined **local_180;
  undefined8 local_178;
  longlong local_170;
  ulonglong uStack_168;
  undefined1 local_160;
  code *local_158 [2];
  undefined8 *local_148;
  code *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  byte local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  longlong local_d8;
  longlong *local_c8;
  longlong local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  param_1 = (longlong *)*param_1;
  uVar6 = (**(code **)(*param_1 + 0x180))();
  lVar14 = param_1[6];
  if (lVar14 == 0) {
LAB_14435111a:
    lVar14 = 0;
  }
  else {
    if (DAT_14cbbd498 == 0) {
      local_2a0 = (code **)&local_258;
      local_258 = FUN_140940982;
      local_290 = FUN_14081d0ea;
      local_298 = (code *)&LAB_146572ba2;
      local_2a8 = &LAB_148ca13ba;
      local_2b0 = (code *)&LAB_140e51436;
      local_2b8 = L"Engine";
      local_2c0 = (wchar_t *)0x0;
      local_2c8 = CONCAT44(local_2c8._4_4_,0x10000004);
      local_2d0 = 8;
      local_2d8 = (wchar_t *)CONCAT44(local_2d8._4_4_,0x1068);
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_14435111a;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_118 = (code *)0x0;
  uStack_110 = 0;
  local_e8 = 0x100;
  local_e5 = 0;
  local_e4 = 8;
  local_d8 = 0;
  local_c8 = (longlong *)0x0;
  local_e6 = local_e6 & 0xe0 | 6;
  uStack_100 = *(undefined8 *)(param_1[6] + 0x1b0);
  puVar20 = &DAT_14c9485f0;
  if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
    puVar20 = (undefined4 *)param_2[1];
  }
  local_108 = lVar14;
  if (DAT_14c947fe0 == 0) {
    lVar11 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar11);
    DAT_14c947fe0 = lVar11;
  }
  FUN_140045924(DAT_14c947fe0,&local_258,puVar20,1);
  local_118 = local_258;
  local_e5 = 3;
  local_e8 = CONCAT11(local_e8._1_1_,1);
  if (((((*(int *)((longlong)param_2 + 0x94) == 0) ||
        (uVar1 = *(uint *)(param_2 + 0x12), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)((longlong)param_2 + 0x94))))) ||
     (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar11 = *plVar12, lVar11 == 0)))) {
    if (param_2[0x13] != 0) {
      lVar11 = FUN_140007850(param_2 + 0x13);
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      lVar7 = DAT_14c9647c8;
      if ((lVar11 == 0) || (cVar4 == '\0')) {
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar11 + 0xc);
          *(uint *)(param_2 + 0x12) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_1443518de;
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_144351358;
        }
        param_2[0x12] = 0;
      }
      else {
        uVar1 = *(uint *)(lVar11 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(param_2 + 0x12) = uVar1;
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(lVar7 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_144351358:
            iVar5 = *(int *)(lVar7 + 0x10);
            if (*(int *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar19 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar21) {
                local_280 = (longlong *)CONCAT44(local_280._4_4_,iVar19);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar19);
                iVar19 = (int)local_280;
              }
              LOCK();
              iVar5 = *(int *)(lVar7 + 0x10);
              bVar21 = iVar5 == 0;
              if (bVar21) {
                *(int *)(lVar7 + 0x10) = iVar19;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar5 = iVar19;
              }
            }
            *(int *)((longlong)param_2 + 0x94) = iVar5;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(param_2 + 0x12) = uVar1;
LAB_1443518de:
          lVar7 = 0;
          goto LAB_144351358;
        }
        if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_144351243;
      }
    }
  }
  else {
LAB_144351243:
    if (DAT_14c949118 == 0) {
      local_268 = FUN_140631fbe;
      local_280 = param_2;
      if (DAT_14c963f04 == '\0') {
        uVar10 = FUN_140011aa6();
        lVar7 = FUN_140011c0e(uVar10,0x250,8);
      }
      else {
        lVar7 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar7;
      FUN_1446f470e(local_260,L"Class",1);
      local_2a0 = &local_268;
      local_2a8 = &LAB_146891e90;
      local_2b0 = (code *)&LAB_146273097;
      local_2c0 = L"Engine";
      local_2b8 = (wchar_t *)CONCAT44(local_2b8._4_4_,199);
      local_2c8 = 0x20;
      local_2d0 = 0x10000000;
      local_2d8._0_4_ = 8;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_258 = FUN_1449e2820;
        local_290 = FUN_14081d0ea;
        local_298 = FUN_14081d0ea;
        local_2a8 = &LAB_1468c5283;
        local_2b0 = FUN_142809da0;
        local_2b8 = L"Engine";
        local_2c0 = (wchar_t *)0x400000000;
        local_2c8 = CONCAT44(local_2c8._4_4_,0x10000000);
        local_2d0 = 8;
        local_2d8._0_4_ = 0x50;
        local_2a0 = (code **)&local_258;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar13 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      uVar10 = FUN_1449e2fb2();
      local_2d8 = L"Class";
      FUN_14574b446(uVar10,lVar7,lVar13,L"/Script/CoreUObject");
      param_2 = local_280;
    }
    if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
        (lVar7 = FUN_140d12354(), lVar7 != 0)) &&
       (*(int *)(lVar7 + 0x38) <= *(int *)(lVar11 + 0x38))) {
      lVar13 = 0;
      if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        lVar13 = lVar11;
      }
      goto LAB_144351392;
    }
  }
  lVar13 = 0;
LAB_144351392:
  pcVar8 = (code *)FUN_141037e38(uVar6,lVar13,param_3,&local_118);
  if (pcVar8 != (code *)0x0) {
    if (pcVar8[0x13a9] != param_15) {
      pcVar8[0x13a9] = param_15;
    }
    if (lVar14 != 0) {
      uVar6 = FUN_140840456();
      plVar12 = (longlong *)FUN_144718840(pcVar8,uVar6);
      if (plVar12 == (longlong *)0x0) {
        if (param_2 != (longlong *)0x0) {
          lVar11 = (**(code **)(*param_2 + 8))(param_2);
          lVar7 = FUN_140a3fed6();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30 && ((char)param_2[0xe4] == '\x01')))) {
            lVar11 = FUN_14141a2e4();
            if ((*(int *)(*(longlong *)(pcVar8 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
               (pcVar18 = pcVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(pcVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
              pcVar18 = (code *)0x0;
            }
            lVar11 = *(longlong *)(lVar14 + 0xe80);
            if (lVar11 != 0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar11);
            }
            bVar3 = DAT_14c950c29;
            *(longlong *)(pcVar18 + 0x18a0) = lVar11;
            lVar14 = *(longlong *)(lVar14 + 0xe88);
            if ((lVar14 != 0) && ((bVar3 & 1) != 0)) {
              FUN_1456cec3c(lVar14);
            }
            *(longlong *)(pcVar18 + 0x18a8) = lVar14;
          }
        }
      }
      else {
        (**(code **)(*plVar12 + 0x18))(plVar12,param_1[6] + 0x3f0);
      }
    }
    local_278 = 0;
    uStack_270 = 0;
    uStack_24c = param_5;
    local_248 = param_6;
    uStack_240 = param_8;
    local_208 = (undefined1 *)0x0;
    lVar14 = *(longlong *)(param_9 + 0x30);
    if (*(longlong *)(param_9 + 0x30) == 0) {
      lVar14 = param_9;
    }
    local_280 = param_2;
    local_258 = pcVar8;
    uStack_250 = param_4;
    FUN_1400709d4(local_238,lVar14,*(undefined4 *)(param_9 + 0x38),0);
    local_1f8 = *param_10;
    local_1f0 = *(undefined4 *)(param_10 + 1);
    local_1e8 = 0;
    local_1e0._0_4_ = param_7;
    local_1d8 = *param_11;
    uStack_1d4 = param_11[1];
    uStack_1d0 = param_11[2];
    uStack_1cc = param_11[3];
    local_1c8 = param_11[4];
    uStack_1c4 = param_11[5];
    uStack_1c0 = param_11[6];
    uStack_1bc = param_11[7];
    local_1b8 = param_11[8];
    uStack_1b4 = param_11[9];
    uStack_1b0 = param_11[10];
    uStack_1ac = param_11[0xb];
    local_1a8 = param_11[0xc];
    uStack_1a4 = param_11[0xd];
    uStack_1a0 = param_11[0xe];
    uStack_19c = param_11[0xf];
    local_198 = 0;
    iVar5 = *(int *)(param_12 + 1);
    uVar6 = *param_12;
    local_190 = iVar5;
    if (iVar5 == 0) {
      local_18c = 0;
    }
    else {
      FUN_1403e11c4(&local_198,iVar5,0);
      FUN_1403e103e(local_198,uVar6,iVar5);
    }
    local_188 = param_13;
    local_180 = (undefined **)&DAT_14a171d50;
    local_170 = 0;
    uStack_168 = 0;
    local_178 = *(undefined8 *)(param_14 + 8);
    FUN_1406022fe(&local_170,param_14 + 0x10);
    local_180 = &PTR_FUN_14b0394b0;
    local_160 = param_16;
    local_158[0] = (code *)0x0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x108,8);
    *puVar9 = &PTR_FUN_14b9de300;
    *(undefined4 *)(puVar9 + 3) = local_248;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_244;
    *(undefined4 *)(puVar9 + 4) = (undefined4)uStack_240;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_240._4_4_;
    *(undefined4 *)(puVar9 + 1) = (undefined4)local_258;
    *(undefined4 *)((longlong)puVar9 + 0xc) = local_258._4_4_;
    *(undefined4 *)(puVar9 + 2) = uStack_250;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_24c;
    puVar9[0xb] = 0;
    puVar16 = local_238;
    if (local_208 != (undefined1 *)0x0) {
      puVar16 = local_208;
    }
    local_148 = puVar9;
    FUN_1400709d4(puVar9 + 5,puVar16,local_200,0);
    iVar5 = local_190;
    lVar14 = local_198;
    puVar9[0xd] = local_1f8;
    *(undefined4 *)(puVar9 + 0xe) = local_1f0;
    puVar9[0xf] = 0;
    puVar15 = &local_1e0;
    puVar17 = puVar9 + 0x10;
    for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar17 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    }
    puVar9[0x19] = 0;
    *(int *)(puVar9 + 0x1a) = local_190;
    if (local_190 == 0) {
      *(undefined4 *)((longlong)puVar9 + 0xd4) = 0;
    }
    else {
      FUN_1403e11c4(puVar9 + 0x19,local_190,0);
      FUN_1403e103e(puVar9[0x19],lVar14,iVar5);
    }
    *(undefined2 *)(puVar9 + 0x1b) = local_188;
    puVar9[0x1c] = &DAT_14a171d50;
    puVar9[0x1e] = 0;
    puVar9[0x1f] = 0;
    puVar9[0x1d] = local_178;
    FUN_1406022fe(puVar9 + 0x1e,&local_170);
    puVar9[0x1c] = &PTR_FUN_14b0394b0;
    *(undefined1 *)(puVar9 + 0x20) = local_160;
    if (puVar9 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_158[0] = FUN_144351c60;
    }
    FUN_1410672ce(pcVar8,local_280,local_158,&local_278);
    local_180 = (undefined **)&DAT_14a171d50;
    uVar2 = uStack_168 >> 0x20;
    uStack_168 = uStack_168 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      FUN_140115c12(&local_170,0);
    }
    local_178 = 0;
    if (local_170 != 0) {
      FUN_1400020a8();
    }
    FUN_1403e0ff1(local_198,local_190);
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_208 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_d8 != 0) {
    plVar12 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar12 = local_b8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)(param_9 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144351bfc FUN_144351bfc body=31 status=ok
// SIG undefined FUN_144351bfc(void)

undefined8 FUN_144351bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144351c22 FUN_144351c22 body=61 status=ok
// SIG undefined FUN_144351c22(void)

undefined8 * FUN_144351c22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144351c60 FUN_144351c60 body=1501 status=ok
// SIG undefined FUN_144351c60(void)

void FUN_144351c60(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(int *)(*param_1 + 0xe40) = (int)param_1[1];
  *(undefined4 *)(*param_1 + 0xe44) = *(undefined4 *)((longlong)param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 2);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    *(float *)(*param_1 + 0xe48) = fVar2;
  }
  if (param_1[3] != 0) {
    lVar5 = *param_1;
    lVar4 = *(longlong *)(lVar5 + 0xe10);
    if ((lVar4 != 0) &&
       ((*(longlong *)(lVar4 + 0x290) == 0 || (0xfffffffd < *(int *)(lVar4 + 0x298) - 1U)))) {
      (**(code **)(*(longlong *)(lVar5 + 0x3c8) + 0x28))(lVar5 + 0x3c8);
    }
  }
  if (0 < (int)param_1[0xb]) {
    plVar6 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar6 = param_1 + 4;
    }
    if ((*plVar6 != 0) && ((int)plVar6[1] - 1U < 0xfffffffe)) {
      plVar1 = (longlong *)(*param_1 + 0xe78);
      if (plVar1 != param_1 + 4) {
        FUN_1400709d4(plVar1,plVar6,(int)param_1[0xb],*(undefined4 *)(*param_1 + 0xeb4));
      }
    }
  }
  if (((code *)param_1[0xc] != (code *)0x0) && ((int)param_1[0xd] - 1U < 0xfffffffe)) {
    uStack_80 = 0x4fc71eb4;
    local_78 = 0;
    local_88 = (code *)param_1[0xc];
    FUN_14893eb4e(*param_1);
  }
  FUN_1411a6e9c(*param_1,(int)param_1[0xf]);
  if ((param_1[0x1c] != 0) && ((longlong)(int)param_1[0x1e] != 0)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(param_1[0x1d] + lVar5) != 0) {
        lVar5 = *param_1;
        (**(code **)(*(longlong *)(lVar5 + 0xeb8) + 0x20))(lVar5 + 0xeb8,0);
        *(longlong *)(lVar5 + 0xec0) = param_1[0x1c];
        FUN_1406022fe(lVar5 + 0xec8,param_1 + 0x1d);
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_1[0x1e] * 8 != lVar5);
  }
  FUN_1403e0f94(*param_1 + 0xe50,param_1 + 0x18);
  FUN_143e0e9f8(*param_1,(short)param_1[0x1a]);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar4 = FUN_14141a2e4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(*param_1 + 0x168);
      if (lVar4 != 0) {
        if (DAT_14cbbd498 == 0) {
          local_b0 = &local_88;
          local_88 = FUN_140940982;
          local_a0 = FUN_14081d0ea;
          local_a8 = &LAB_146572ba2;
          local_b8 = &LAB_148ca13ba;
          local_c0 = &LAB_140e51436;
          local_c8 = L"Engine";
          local_d0 = 0;
          local_d8 = 0x10000004;
          local_e0 = 8;
          local_e8 = (code **)CONCAT44(local_e8._4_4_,0x1068);
          FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
        }
        if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
          plVar6 = (longlong *)(lVar4 + 0xdf0);
          lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xdf0) + 0x18))(plVar6);
          if (lVar4 != 0) {
            uVar8 = (**(code **)(*plVar6 + 0x30))(plVar6);
            uVar9 = (**(code **)(*plVar6 + 0x28))(plVar6);
            uVar10 = (**(code **)(*plVar6 + 0x20))(plVar6);
            lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
            puVar7 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
              puVar7 = *(undefined4 **)(lVar4 + 8);
            }
            if (DAT_14c947fe0 == 0) {
              lVar4 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar4);
              DAT_14c947fe0 = lVar4;
            }
            FUN_140045924(DAT_14c947fe0,&local_90,puVar7,1);
            local_88 = local_90;
            uStack_80 = 0x1ea5d050;
            local_78 = 0;
            local_e8 = (code **)CONCAT44(local_e8._4_4_,uVar8);
            FUN_148f1883e(lVar5,&local_88,uVar10,uVar9);
          }
          lVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
          if (lVar4 != 0) {
            lVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
            puVar7 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
              puVar7 = *(undefined4 **)(lVar4 + 8);
            }
            if (DAT_14c947fe0 == 0) {
              lVar4 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar4);
              DAT_14c947fe0 = lVar4;
            }
            FUN_140045924(DAT_14c947fe0,&local_98,puVar7,1);
            local_88 = local_98;
            uStack_80 = 0x1ea5d050;
            local_78 = 0;
            FUN_148f18c34(lVar5);
          }
        }
      }
      *(char *)(lVar5 + 0x18bc) = (char)param_1[0x1f];
    }
  }
  if ((((*(int *)((longlong)param_1 + 0x84) == 0) ||
       (uVar3 = *(uint *)(param_1 + 0x10), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x84))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))))) {
    if ((((double)param_1[0x11] != 0.0) || (NAN((double)param_1[0x11]))) ||
       (((double)param_1[0x12] != 0.0 ||
        (((NAN((double)param_1[0x12]) || ((double)param_1[0x13] != 0.0)) ||
         (NAN((double)param_1[0x13]))))))) {
      local_78 = param_1[0x13];
      local_88 = (code *)param_1[0x11];
      uStack_80 = (undefined4)param_1[0x12];
      uStack_7c = *(undefined4 *)((longlong)param_1 + 0x94);
      (**(code **)(*(longlong *)(*param_1 + 0x3d0) + 0x88))(*param_1 + 0x3d0);
    }
  }
  else {
    local_78 = param_1[0x13];
    local_e8 = &local_88;
    local_88 = (code *)param_1[0x11];
    uStack_80 = (undefined4)param_1[0x12];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0x94);
    (**(code **)(*(longlong *)(*param_1 + 0x3d0) + 0x80))(*param_1 + 0x3d0,*plVar6,0,param_1[0x14]);
  }
  local_e8 = (code **)((ulonglong)local_e8 & 0xffffffffffffff00);
  FUN_14113775c(*param_1,&DAT_14c846480,1,0);
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14435223e FUN_14435223e body=345 status=ok
// SIG undefined FUN_14435223e(void)

undefined8 * FUN_14435223e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar10 = (undefined8 *)FUN_14001cc68(0x108,8);
  *param_2 = puVar10;
  *puVar10 = &PTR_FUN_14b9de300;
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar7;
  *(undefined4 *)(puVar10 + 4) = uVar8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = uVar9;
  *(undefined4 *)(puVar10 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 0xc) = uVar4;
  *(undefined4 *)(puVar10 + 2) = uVar5;
  *(undefined4 *)((longlong)puVar10 + 0x14) = uVar6;
  puVar10[0xb] = 0;
  lVar11 = param_1 + 0x28;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x58);
  }
  FUN_1400709d4(puVar10 + 5,lVar11,*(undefined4 *)(param_1 + 0x60),0);
  puVar10[0xd] = *(undefined8 *)(param_1 + 0x68);
  *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(param_1 + 0x70);
  puVar10[0xf] = 0;
  puVar12 = (undefined8 *)(param_1 + 0x80);
  puVar13 = puVar10 + 0x10;
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar10[0x19] = 0;
  iVar1 = *(int *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(int *)(puVar10 + 0x1a) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0xd4) = 0;
  }
  else {
    FUN_1403e11c4(puVar10 + 0x19,iVar1,0);
    FUN_1403e103e(puVar10[0x19],uVar2,iVar1);
  }
  *(undefined2 *)(puVar10 + 0x1b) = *(undefined2 *)(param_1 + 0xd8);
  puVar10[0x1c] = &DAT_14a171d50;
  puVar10[0x1e] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x1d] = *(undefined8 *)(param_1 + 0xe8);
  FUN_1406022fe(puVar10 + 0x1e,param_1 + 0xf0);
  puVar10[0x1c] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(puVar10 + 0x20) = *(undefined1 *)(param_1 + 0x100);
  return puVar10 + 1;
}



// FUNCTION 14435239e FUN_14435239e body=29 status=ok
// SIG undefined FUN_14435239e(void)

void FUN_14435239e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443523bc FUN_1443523bc body=167 status=ok
// SIG undefined FUN_1443523bc(void)

undefined8 * FUN_1443523bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9de300;
  param_1[0x1c] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_140115c12(param_1 + 0x1e,0);
  }
  param_1[0x1d] = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1403e0ff1(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144352464 FUN_144352464 body=29 status=ok
// SIG undefined FUN_144352464(void)

undefined8 FUN_144352464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144352600 FUN_144352600 body=93 status=ok
// SIG undefined FUN_144352600(void)

void FUN_144352600(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9de320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435265e FUN_14435265e body=93 status=ok
// SIG undefined FUN_14435265e(void)

void FUN_14435265e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9de320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443526bc FUN_1443526bc body=126 status=ok
// SIG undefined FUN_1443526bc(void)

void FUN_1443526bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de320;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435272b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144352752 FUN_144352752 body=278 status=ok
// SIG undefined FUN_144352752(void)

undefined8 FUN_144352752(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144352862;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144352862;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144352862:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144352816;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1400bc8c2(*(longlong *)(param_1 + 0x20) + 0xe0,&DAT_14cbe7208);
      uVar6 = 1;
      goto LAB_144352816;
    }
  }
  uVar6 = 0;
LAB_144352816:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435286a FUN_14435286a body=29 status=ok
// SIG undefined FUN_14435286a(void)

undefined8 FUN_14435286a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144352a10 FUN_144352a10 body=101 status=ok
// SIG undefined FUN_144352a10(void)

void FUN_144352a10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9919e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144352a76 FUN_144352a76 body=101 status=ok
// SIG undefined FUN_144352a76(void)

void FUN_144352a76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9919e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144352adc FUN_144352adc body=134 status=ok
// SIG undefined FUN_144352adc(void)

void FUN_144352adc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9919e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de390;
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
                    /* WARNING: Could not recover jumptable at 0x000144352b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144352bc4 FUN_144352bc4 body=284 status=ok
// SIG undefined FUN_144352bc4(void)

undefined8 FUN_144352bc4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144352cda;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144352cda;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144352cda:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144352c8d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_144352c8d;
    }
  }
  uVar6 = 0;
LAB_144352c8d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144352ce2 FUN_144352ce2 body=29 status=ok
// SIG undefined FUN_144352ce2(void)

undefined8 FUN_144352ce2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144352e7e FUN_144352e7e body=93 status=ok
// SIG undefined FUN_144352e7e(void)

void FUN_144352e7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de4e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144352edc FUN_144352edc body=93 status=ok
// SIG undefined FUN_144352edc(void)

void FUN_144352edc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de4e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144352f3a FUN_144352f3a body=126 status=ok
// SIG undefined FUN_144352f3a(void)

void FUN_144352f3a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9de4e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144352fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144353016 FUN_144353016 body=359 status=ok
// SIG undefined FUN_144353016(void)

undefined8 FUN_144353016(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144353177;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144353177;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144353177:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443530cc;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      uVar7 = 1;
      if ((*(int *)(param_1 + 0x24) != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar5 != (undefined8 *)0x0) &&
           ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x24) &&
            ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            uVar6 = *puVar5;
          }
          else {
            uVar6 = 0;
          }
          FUN_14434a2e8(uVar6,0xc61c4000);
        }
      }
      goto LAB_1443530cc;
    }
  }
  uVar7 = 0;
LAB_1443530cc:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435317e FUN_14435317e body=29 status=ok
// SIG undefined FUN_14435317e(void)

undefined8 FUN_14435317e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443531b0 FUN_1443531b0 body=93 status=ok
// SIG undefined FUN_1443531b0(void)

void FUN_1443531b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14435320e FUN_14435320e body=93 status=ok
// SIG undefined FUN_14435320e(void)

void FUN_14435320e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de550;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14435326c FUN_14435326c body=126 status=ok
// SIG undefined FUN_14435326c(void)

void FUN_14435326c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96eac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de550;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443532db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144353304 FUN_144353304 body=36 status=ok
// SIG undefined FUN_144353304(void)

undefined1 FUN_144353304(longlong param_1,int param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_1410ef130(*(longlong *)(param_1 + 0x18) + 0xe50);
  }
  return 1;
}



// FUNCTION 144353328 FUN_144353328 body=29 status=ok
// SIG undefined FUN_144353328(void)

undefined8 FUN_144353328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443534c4 FUN_1443534c4 body=93 status=ok
// SIG undefined FUN_1443534c4(void)

void FUN_1443534c4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9de860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144353522 FUN_144353522 body=93 status=ok
// SIG undefined FUN_144353522(void)

void FUN_144353522(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9de860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144353580 FUN_144353580 body=126 status=ok
// SIG undefined FUN_144353580(void)

void FUN_144353580(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de860;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443535ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144353608 FUN_144353608 body=289 status=ok
// SIG undefined FUN_144353608(void)

undefined8 FUN_144353608(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_144353722;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144353722;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_144353722:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443536d3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14435372a(param_1 + 0x20,param_2,param_3);
      uVar6 = 1;
      goto LAB_1443536d3;
    }
  }
  uVar6 = 0;
LAB_1443536d3:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435372a FUN_14435372a body=88 status=ok
// SIG undefined FUN_14435372a(void)

void FUN_14435372a(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_2 + 0x38) != '\0') {
    uVar1 = *param_1;
    if (*(char *)(param_2 + 0x38) == '\x01') {
      if (*(int *)(param_2 + 0x44) == 0) {
        return;
      }
    }
    else {
      cVar2 = FUN_140321d1a(param_2 + 0x38);
      if (cVar2 == '\0') {
        return;
      }
    }
    cVar2 = FUN_1403218c0(param_2 + 0x38,param_3);
    if (cVar2 == '\0') {
      FUN_148f0645c(uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 144353782 FUN_144353782 body=29 status=ok
// SIG undefined FUN_144353782(void)

undefined8 FUN_144353782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435391e FUN_14435391e body=93 status=ok
// SIG undefined FUN_14435391e(void)

void FUN_14435391e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435397c FUN_14435397c body=93 status=ok
// SIG undefined FUN_14435397c(void)

void FUN_14435397c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443539da FUN_1443539da body=126 status=ok
// SIG undefined FUN_1443539da(void)

void FUN_1443539da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de8d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144353a49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144353a58 FUN_144353a58 body=68 status=ok
// SIG undefined FUN_144353a58(void)

void FUN_144353a58(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_4;
  FUN_144353bbe(param_1 + 0x20,&local_10,&stack0x00000028);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144353a9e FUN_144353a9e body=287 status=ok
// SIG undefined FUN_144353a9e(void)

undefined8 FUN_144353a9e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_30 = param_4;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144353bb7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144353bb7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144353bb7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144353b6b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144353bbe(param_1 + 0x20,&local_30,&stack0x00000028);
      uVar6 = 1;
      goto LAB_144353b6b;
    }
  }
  uVar6 = 0;
LAB_144353b6b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144353bbe FUN_144353bbe body=330 status=ok
// SIG undefined FUN_144353bbe(void)

void FUN_144353bbe(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (*param_3 != *param_2) {
    lVar4 = *param_1;
    iVar1 = *(int *)(lVar4 + 0x130);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x128);
      lVar10 = 0;
      do {
        iVar2 = *(int *)(lVar5 + 4 + lVar10);
        if (((((iVar2 != 0) && (uVar3 = *(uint *)(lVar5 + lVar10), -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar2)))) &&
           ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar6;
          }
          else {
            lVar8 = 0;
          }
          if (*(char *)(lVar8 + 0x2b30) == '\x01') {
            if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar6;
            }
            else {
              lVar8 = 0;
            }
            uVar7 = FUN_141483b8e();
            lVar8 = FUN_140d4a0a6(lVar8 + 0x638,uVar7);
            if ((lVar8 != 0) && (*(char *)(lVar8 + 0x170) == '\x01')) {
              iVar1 = *(int *)(lVar5 + 4 + lVar10);
              if (iVar1 != 0) {
                uVar3 = *(uint *)(lVar5 + lVar10);
                uVar7 = 0;
                if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_144353cf1;
                puVar9 = (undefined8 *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                if ((puVar9 != (undefined8 *)0x0) &&
                   ((*(int *)(puVar9 + 2) == iVar1 && ((*(uint *)(puVar9 + 1) & 0x10200000) == 0))))
                {
                  uVar7 = *puVar9;
                  goto LAB_144353cf1;
                }
              }
              uVar7 = 0;
LAB_144353cf1:
              FUN_14126e4e0(lVar4,uVar7);
              return;
            }
          }
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 != lVar10);
    }
  }
  return;
}



// FUNCTION 144353d08 FUN_144353d08 body=29 status=ok
// SIG undefined FUN_144353d08(void)

undefined8 FUN_144353d08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144353ea4 FUN_144353ea4 body=101 status=ok
// SIG undefined FUN_144353ea4(void)

void FUN_144353ea4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dea20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144353f0a FUN_144353f0a body=101 status=ok
// SIG undefined FUN_144353f0a(void)

void FUN_144353f0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dea20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144353f70 FUN_144353f70 body=134 status=ok
// SIG undefined FUN_144353f70(void)

void FUN_144353f70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dea20;
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
                    /* WARNING: Could not recover jumptable at 0x000144353fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144354000 FUN_144354000 body=269 status=ok
// SIG undefined FUN_144354000(void)

undefined8 FUN_144354000(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144354107;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144354107;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144354107:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443540bb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14435410e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1443540bb;
    }
  }
  uVar6 = 0;
LAB_1443540bb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435410e FUN_14435410e body=95 status=ok
// SIG undefined FUN_14435410e(void)

void FUN_14435410e(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if ((((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        FUN_145873f2e(*puVar2);
        return;
      }
      FUN_145873f2e(0);
      return;
    }
  }
  return;
}



// FUNCTION 14435416e FUN_14435416e body=66 status=ok
// SIG undefined FUN_14435416e(void)

void FUN_14435416e(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(byte *)(param_2 + 0xec) & 4) != 0) {
    param_1 = (longlong *)*param_1;
    uVar1 = *(undefined4 *)(param_2 + 0xf8);
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_148d699d4(param_1,iVar2);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  }
  return;
}



// FUNCTION 1443541da FUN_1443541da body=29 status=ok
// SIG undefined FUN_1443541da(void)

undefined8 FUN_1443541da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443541f8 FUN_1443541f8 body=31 status=ok
// SIG undefined FUN_1443541f8(void)

undefined8 FUN_1443541f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144354306 FUN_144354306 body=31 status=ok
// SIG undefined FUN_144354306(void)

undefined8 FUN_144354306(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144354380 FUN_144354380 body=1693 status=ok
// SIG undefined FUN_144354380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144354380(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_198 [32];
  ulonglong local_178;
  uint local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  code *local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar2 = *(int *)(param_1 + 8);
  if ((((((iVar2 == 0) || (uVar20 = *(uint *)(param_1 + 4), (int)uVar20 < 0)) ||
        (DAT_14c9647dc <= (int)uVar20)) ||
       ((plVar13 = (longlong *)
                   ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
        plVar13 == (longlong *)0x0 || ((int)plVar13[2] != iVar2)))) ||
      (lVar18 = *param_2, (*(uint *)(plVar13 + 1) & 0x10200000) != 0)) ||
     ((((*(int *)(param_1 + 0x10) == 0 || (uVar20 = *(uint *)(param_1 + 0xc), (int)uVar20 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar20 ||
        (((lVar19 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8), lVar19 == 0 ||
          (*(int *)(lVar19 + 0x10) != *(int *)(param_1 + 0x10))) || (lVar18 == 0)))))) ||
      ((*(uint *)(lVar19 + 8) & 0x10200000) != 0)))) goto LAB_144354441;
  if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
    lVar19 = *plVar13;
  }
  else {
    lVar19 = 0;
  }
  uVar3 = *(ulonglong *)(lVar19 + 0x2668);
  if (((uVar3 >> 0x20 == 0) || (uVar20 = (uint)uVar3, (int)uVar20 < 0)) ||
     (DAT_14c9647dc <= (int)uVar20)) goto LAB_144354441;
  uVar11 = uVar20 & 0xffff;
  uVar17 = (ulonglong)((uint)(uVar3 >> 0x10) & 0x7fff);
  plVar15 = (longlong *)((ulonglong)(uVar11 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar17 * 8));
  if (((plVar15 == (longlong *)0x0) || (iVar21 = (int)(uVar3 >> 0x20), (int)plVar15[2] != iVar21))
     || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_144354441;
  local_ec = 0x10202;
  if (((int)plVar15[2] == iVar21) && ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) {
    lVar19 = *plVar15;
  }
  else {
    lVar19 = 0;
  }
  if (((int)plVar13[2] == iVar2) &&
     (uVar12 = *(undefined8 *)(lVar19 + 0x2a8), (*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
    if (((longlong *)*plVar13 != (longlong *)0x0) &&
       ((*(longlong *)(lVar18 + 0x1c8) != 0 &&
        (lVar19 = (**(code **)(*(longlong *)*plVar13 + 0x3a8))(), lVar19 != 0)))) {
      (**(code **)(**(longlong **)(lVar18 + 0x1c8) + 0x490))
                (*(longlong **)(lVar18 + 0x1c8),lVar19,&local_ec,uVar12);
    }
  }
  if (((((int)uVar20 < DAT_14c9647dc) &&
       (plVar13 = (longlong *)
                  ((ulonglong)(uVar11 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar17 * 8)),
       plVar13 != (longlong *)0x0)) && ((int)plVar13[2] == iVar21)) &&
     ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
    lVar19 = *plVar13;
  }
  else {
    lVar19 = 0;
  }
  local_f8 = *(undefined8 *)(lVar19 + 0x1a8);
  local_108 = *(undefined4 *)(lVar19 + 0x198);
  uStack_104 = *(undefined4 *)(lVar19 + 0x19c);
  uStack_100 = *(undefined4 *)(lVar19 + 0x1a0);
  uStack_fc = *(undefined4 *)(lVar19 + 0x1a4);
  local_178 = local_178 & 0xffffffffffffff00;
  lVar19 = 0;
  FUN_14639e34e(lVar18,&local_108,0,0);
  if ((int)uVar20 < DAT_14c9647dc) {
    plVar13 = (longlong *)((ulonglong)(uVar11 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar17 * 8));
    if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != iVar21)) ||
       ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) {
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar13;
    }
  }
  auVar1 = *(undefined1 (*) [16])(lVar19 + 0x1b0);
  auVar22 = divpd(auVar1,_DAT_1499387d0);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *(double *)(lVar19 + 0x1c0);
  auVar23 = divpd(auVar23,_DAT_1499387d0);
  auVar22 = roundpd(auVar22,auVar22,3);
  auVar23 = roundpd(auVar23,auVar23,3);
  dVar9 = (auVar1._0_8_ - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar10 = (auVar1._8_8_ - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar7 = (*(double *)(lVar19 + 0x1c0) - auVar23._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar8 = (0.0 - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar4 = sin(dVar9);
  dVar5 = sin(dVar10);
  dVar6 = sin(dVar7);
  sin(dVar8);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar8 = dVar5 * dVar4 * dVar6 + dVar10 * dVar9 * dVar7;
  local_128 = (code *)(dVar4 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6);
  dStack_120 = -(dVar4 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6;
  local_118._8_4_ = SUB84(dVar8,0);
  local_118._0_8_ = -(dVar10 * dVar4 * dVar6) + dVar5 * dVar9 * dVar7;
  local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  lVar19 = *(longlong *)(lVar18 + 0x1c8);
  if (lVar19 != 0) {
    local_d8 = *(undefined8 *)(lVar19 + 0x1a8);
    local_e8 = *(undefined4 *)(lVar19 + 0x198);
    uStack_e4 = *(undefined4 *)(lVar19 + 0x19c);
    uStack_e0 = *(undefined4 *)(lVar19 + 0x1a0);
    uStack_dc = *(undefined4 *)(lVar19 + 0x1a4);
    local_170 = local_170 & 0xffffff00;
    local_178 = 0;
    FUN_144927ad4(lVar19,&local_e8,&local_128,0);
  }
  if (DAT_14cb6a468 == 0) {
    local_140 = &local_128;
    local_128 = FUN_140940a0a;
    local_130 = FUN_14081d0ea;
    local_138 = &LAB_146522c10;
    local_148 = &LAB_14876160d;
    local_150 = &LAB_140e30382;
    local_158 = L"Engine";
    local_160 = 0;
    local_168 = 0x10000004;
    local_170 = 0x10;
    local_178 = CONCAT44(local_178._4_4_,0x9c0);
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
  }
  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < *(int *)(DAT_14cb6a468 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb6a468 + 0x38) * 8) != DAT_14cb6a468 + 0x30)) {
    lVar18 = 0;
  }
  uVar12 = (**(code **)(*(longlong *)(lVar18 + 0x530) + 0x40))(lVar18 + 0x530);
  FUN_145e2d660(uVar12,1,DAT_14cbe75d8);
  if (lVar18 == 0) goto LAB_144354441;
  if (*(int *)(param_1 + 8) == 0) {
LAB_144354954:
    uVar12 = 0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 4);
    uVar12 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(int *)(puVar14 + 2) != *(int *)(param_1 + 8) ||
          ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_144354954;
      uVar12 = *puVar14;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_14435495b:
    uVar16 = 0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 0xc);
    uVar16 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(int *)(puVar14 + 2) != *(int *)(param_1 + 0x10) ||
          ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_14435495b;
      uVar16 = *puVar14;
    }
  }
  FUN_1458fe8c4(uVar12,uVar16,lVar18);
LAB_144354441:
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144354a42 FUN_144354a42 body=12 status=ok
// SIG undefined FUN_144354a42(void)

void FUN_144354a42(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144354a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144354a4e FUN_144354a4e body=29 status=ok
// SIG undefined FUN_144354a4e(void)

undefined8 FUN_144354a4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144354a6c FUN_144354a6c body=57 status=ok
// SIG undefined FUN_144354a6c(void)

undefined8 * FUN_144354a6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9debb0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144354aba FUN_144354aba body=183 status=ok
// SIG undefined FUN_144354aba(void)

void FUN_144354aba(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9debb0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar3;
  *(undefined4 *)(puVar2 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 144354b72 FUN_144354b72 body=183 status=ok
// SIG undefined FUN_144354b72(void)

void FUN_144354b72(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9debb0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar3;
  *(undefined4 *)(puVar2 + 6) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 144354c2a FUN_144354c2a body=222 status=ok
// SIG undefined FUN_144354c2a(void)

void FUN_144354c2a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9debb0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  p_Var2->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var2->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var2->SpareWORD = (short)((uint)uVar4 >> 0x10);
  p_Var2[1].Type = (short)uVar5;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar5 >> 0x10);
  *(undefined4 *)&p_Var2[1].field_0x4 = uVar6;
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)&p_Var2[1].ProcessLocksList.Flink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].CriticalSection,iVar1,0);
    memcpy(p_Var2[1].CriticalSection,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144354cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144354d12 FUN_144354d12 body=20 status=ok
// SIG undefined FUN_144354d12(void)

undefined1 FUN_144354d12(longlong param_1)

{
  FUN_144354d26(param_1 + 0x18);
  return 1;
}



// FUNCTION 144354d26 FUN_144354d26 body=120 status=ok
// SIG undefined FUN_144354d26(void)

void FUN_144354d26(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 2) == param_1[1])) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      uVar2 = FUN_1402d20ea(param_1 + 2);
      FUN_14054853a(uVar3,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 144354d9e FUN_144354d9e body=36 status=ok
// SIG undefined FUN_144354d9e(void)

void FUN_144354d9e(undefined8 *param_1)

{
  FUN_14113775c(*param_1,&DAT_14c846480,1,0,0);
  return;
}



// FUNCTION 144354dec FUN_144354dec body=29 status=ok
// SIG undefined FUN_144354dec(void)

undefined8 FUN_144354dec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144354e0a FUN_144354e0a body=31 status=ok
// SIG undefined FUN_144354e0a(void)

undefined8 FUN_144354e0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144354e2a FUN_144354e2a body=31 status=ok
// SIG undefined FUN_144354e2a(void)

undefined8 FUN_144354e2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144354e9e FUN_144354e9e body=29 status=ok
// SIG undefined FUN_144354e9e(void)

undefined8 FUN_144354e9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435503a FUN_14435503a body=93 status=ok
// SIG undefined FUN_14435503a(void)

void FUN_14435503a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dee80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144355098 FUN_144355098 body=93 status=ok
// SIG undefined FUN_144355098(void)

void FUN_144355098(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dee80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443550f6 FUN_1443550f6 body=126 status=ok
// SIG undefined FUN_1443550f6(void)

void FUN_1443550f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dee80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144355165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435517e FUN_14435517e body=266 status=ok
// SIG undefined FUN_14435517e(void)

undefined8 FUN_14435517e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144355282;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144355282;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144355282:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144355229;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148f0ef5e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144355229;
    }
  }
  uVar6 = 0;
LAB_144355229:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435528a FUN_14435528a body=29 status=ok
// SIG undefined FUN_14435528a(void)

undefined8 FUN_14435528a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144355426 FUN_144355426 body=93 status=ok
// SIG undefined FUN_144355426(void)

void FUN_144355426(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9deef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144355484 FUN_144355484 body=93 status=ok
// SIG undefined FUN_144355484(void)

void FUN_144355484(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9deef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443554e2 FUN_1443554e2 body=126 status=ok
// SIG undefined FUN_1443554e2(void)

void FUN_1443554e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9deef0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144355551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144355574 FUN_144355574 body=277 status=ok
// SIG undefined FUN_144355574(void)

undefined8 FUN_144355574(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144355683;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144355683;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144355683:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14435561f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xe0) = 0;
      FUN_148f0ec6c();
      uVar6 = 1;
      goto LAB_14435561f;
    }
  }
  uVar6 = 0;
LAB_14435561f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435568a FUN_14435568a body=29 status=ok
// SIG undefined FUN_14435568a(void)

undefined8 FUN_14435568a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144355826 FUN_144355826 body=93 status=ok
// SIG undefined FUN_144355826(void)

void FUN_144355826(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9def60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144355884 FUN_144355884 body=93 status=ok
// SIG undefined FUN_144355884(void)

void FUN_144355884(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9def60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443558e2 FUN_1443558e2 body=126 status=ok
// SIG undefined FUN_1443558e2(void)

void FUN_1443558e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9def60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144355951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435597a FUN_14435597a body=289 status=ok
// SIG undefined FUN_14435597a(void)

undefined8 FUN_14435597a(longlong param_1,longlong *param_2)

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
    if (iVar1 == 2) goto LAB_144355a95;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144355a95;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144355a95:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144355a29;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*param_2 != 0) && (*param_2 == *(longlong *)(*(longlong *)(param_1 + 0x20) + 200))) {
        FUN_148f0f4a8();
      }
      goto LAB_144355a29;
    }
  }
  uVar6 = 0;
LAB_144355a29:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144355a9c FUN_144355a9c body=29 status=ok
// SIG undefined FUN_144355a9c(void)

undefined8 FUN_144355a9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144355c38 FUN_144355c38 body=93 status=ok
// SIG undefined FUN_144355c38(void)

void FUN_144355c38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9defd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144355c96 FUN_144355c96 body=93 status=ok
// SIG undefined FUN_144355c96(void)

void FUN_144355c96(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9defd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144355cf4 FUN_144355cf4 body=126 status=ok
// SIG undefined FUN_144355cf4(void)

void FUN_144355cf4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9defd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144355d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144355d7c FUN_144355d7c body=266 status=ok
// SIG undefined FUN_144355d7c(void)

undefined8 FUN_144355d7c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144355e80;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144355e80;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144355e80:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144355e27;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148f0ef5e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144355e27;
    }
  }
  uVar6 = 0;
LAB_144355e27:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144355e88 FUN_144355e88 body=29 status=ok
// SIG undefined FUN_144355e88(void)

undefined8 FUN_144355e88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144356024 FUN_144356024 body=93 status=ok
// SIG undefined FUN_144356024(void)

void FUN_144356024(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144356082 FUN_144356082 body=93 status=ok
// SIG undefined FUN_144356082(void)

void FUN_144356082(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443560e0 FUN_1443560e0 body=126 status=ok
// SIG undefined FUN_1443560e0(void)

void FUN_1443560e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df150;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435614f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435616c FUN_14435616c body=270 status=ok
// SIG undefined FUN_14435616c(void)

undefined8 FUN_14435616c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144356274;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144356274;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144356274:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144356228;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x310))();
      uVar6 = 1;
      goto LAB_144356228;
    }
  }
  uVar6 = 0;
LAB_144356228:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435627c FUN_14435627c body=29 status=ok
// SIG undefined FUN_14435627c(void)

undefined8 FUN_14435627c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144356418 FUN_144356418 body=93 status=ok
// SIG undefined FUN_144356418(void)

void FUN_144356418(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144356476 FUN_144356476 body=93 status=ok
// SIG undefined FUN_144356476(void)

void FUN_144356476(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443564d4 FUN_1443564d4 body=126 status=ok
// SIG undefined FUN_1443564d4(void)

void FUN_1443564d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df1c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144356543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144356566 FUN_144356566 body=272 status=ok
// SIG undefined FUN_144356566(void)

undefined8 FUN_144356566(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144356670;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144356670;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144356670:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144356624;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x338))
                (*(longlong **)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_144356624;
    }
  }
  uVar6 = 0;
LAB_144356624:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144356678 FUN_144356678 body=29 status=ok
// SIG undefined FUN_144356678(void)

undefined8 FUN_144356678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144356814 FUN_144356814 body=93 status=ok
// SIG undefined FUN_144356814(void)

void FUN_144356814(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144356872 FUN_144356872 body=93 status=ok
// SIG undefined FUN_144356872(void)

void FUN_144356872(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443568d0 FUN_1443568d0 body=126 status=ok
// SIG undefined FUN_1443568d0(void)

void FUN_1443568d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df230;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435693f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435695c FUN_14435695c body=270 status=ok
// SIG undefined FUN_14435695c(void)

undefined8 FUN_14435695c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144356a64;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144356a64;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144356a64:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144356a18;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 800))();
      uVar6 = 1;
      goto LAB_144356a18;
    }
  }
  uVar6 = 0;
LAB_144356a18:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144356a6c FUN_144356a6c body=29 status=ok
// SIG undefined FUN_144356a6c(void)

undefined8 FUN_144356a6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144356c08 FUN_144356c08 body=93 status=ok
// SIG undefined FUN_144356c08(void)

void FUN_144356c08(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144356c66 FUN_144356c66 body=93 status=ok
// SIG undefined FUN_144356c66(void)

void FUN_144356c66(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144356cc4 FUN_144356cc4 body=126 status=ok
// SIG undefined FUN_144356cc4(void)

void FUN_144356cc4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df2a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144356d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144356d50 FUN_144356d50 body=270 status=ok
// SIG undefined FUN_144356d50(void)

undefined8 FUN_144356d50(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144356e58;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144356e58;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144356e58:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144356e0c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x330))();
      uVar6 = 1;
      goto LAB_144356e0c;
    }
  }
  uVar6 = 0;
LAB_144356e0c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144356e60 FUN_144356e60 body=29 status=ok
// SIG undefined FUN_144356e60(void)

undefined8 FUN_144356e60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144356ffc FUN_144356ffc body=93 status=ok
// SIG undefined FUN_144356ffc(void)

void FUN_144356ffc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435705a FUN_14435705a body=93 status=ok
// SIG undefined FUN_14435705a(void)

void FUN_14435705a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443570b8 FUN_1443570b8 body=126 status=ok
// SIG undefined FUN_1443570b8(void)

void FUN_1443570b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df310;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144357127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144357144 FUN_144357144 body=270 status=ok
// SIG undefined FUN_144357144(void)

undefined8 FUN_144357144(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14435724c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14435724c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14435724c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144357200;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x328))();
      uVar6 = 1;
      goto LAB_144357200;
    }
  }
  uVar6 = 0;
LAB_144357200:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144357254 FUN_144357254 body=29 status=ok
// SIG undefined FUN_144357254(void)

undefined8 FUN_144357254(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443573f0 FUN_1443573f0 body=93 status=ok
// SIG undefined FUN_1443573f0(void)

void FUN_1443573f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435744e FUN_14435744e body=93 status=ok
// SIG undefined FUN_14435744e(void)

void FUN_14435744e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443574ac FUN_1443574ac body=126 status=ok
// SIG undefined FUN_1443574ac(void)

void FUN_1443574ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df380;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435751b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144357538 FUN_144357538 body=270 status=ok
// SIG undefined FUN_144357538(void)

undefined8 FUN_144357538(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144357640;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144357640;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144357640:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443575f4;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 800))();
      uVar6 = 1;
      goto LAB_1443575f4;
    }
  }
  uVar6 = 0;
LAB_1443575f4:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144357648 FUN_144357648 body=29 status=ok
// SIG undefined FUN_144357648(void)

undefined8 FUN_144357648(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443577e4 FUN_1443577e4 body=93 status=ok
// SIG undefined FUN_1443577e4(void)

void FUN_1443577e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144357842 FUN_144357842 body=93 status=ok
// SIG undefined FUN_144357842(void)

void FUN_144357842(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443578a0 FUN_1443578a0 body=126 status=ok
// SIG undefined FUN_1443578a0(void)

void FUN_1443578a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df3f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435790f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435792c FUN_14435792c body=270 status=ok
// SIG undefined FUN_14435792c(void)

undefined8 FUN_14435792c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144357a34;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144357a34;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144357a34:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443579e8;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x330))();
      uVar6 = 1;
      goto LAB_1443579e8;
    }
  }
  uVar6 = 0;
LAB_1443579e8:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144357a3c FUN_144357a3c body=29 status=ok
// SIG undefined FUN_144357a3c(void)

undefined8 FUN_144357a3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144357bd8 FUN_144357bd8 body=93 status=ok
// SIG undefined FUN_144357bd8(void)

void FUN_144357bd8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144357c36 FUN_144357c36 body=93 status=ok
// SIG undefined FUN_144357c36(void)

void FUN_144357c36(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144357c94 FUN_144357c94 body=126 status=ok
// SIG undefined FUN_144357c94(void)

void FUN_144357c94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df460;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144357d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144357d2a FUN_144357d2a body=279 status=ok
// SIG undefined FUN_144357d2a(void)

undefined8 FUN_144357d2a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144357e3b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144357e3b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144357e3b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144357dd5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (1 < *(byte *)(*(longlong **)(param_1 + 0x20) + 0x18)) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x370))();
      }
      goto LAB_144357dd5;
    }
  }
  uVar6 = 0;
LAB_144357dd5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144357e42 FUN_144357e42 body=29 status=ok
// SIG undefined FUN_144357e42(void)

undefined8 FUN_144357e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144357fde FUN_144357fde body=93 status=ok
// SIG undefined FUN_144357fde(void)

void FUN_144357fde(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435803c FUN_14435803c body=93 status=ok
// SIG undefined FUN_14435803c(void)

void FUN_14435803c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9df4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435809a FUN_14435809a body=126 status=ok
// SIG undefined FUN_14435809a(void)

void FUN_14435809a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9df4d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144358109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144358124 FUN_144358124 body=268 status=ok
// SIG undefined FUN_144358124(void)

undefined8 FUN_144358124(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14435822a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14435822a;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_14435822a:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443581e2;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x370) = 0;
      uVar5 = 1;
      goto LAB_1443581e2;
    }
  }
  uVar5 = 0;
LAB_1443581e2:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144358258 FUN_144358258 body=282 status=ok
// SIG undefined FUN_144358258(void)

undefined8 * FUN_144358258(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144358231);
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



// FUNCTION 144358372 FUN_144358372 body=413 status=ok
// SIG undefined FUN_144358372(void)

void FUN_144358372(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  longlong local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined4 *local_128;
  longlong *local_120;
  undefined2 local_118;
  longlong *local_110;
  undefined1 local_108;
  byte local_100;
  undefined1 local_e9;
  longlong *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined1 local_88 [48];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar2 = *param_1;
  local_e8 = param_1 + 1;
  bVar1 = *(byte *)(lVar2 + 0x2d1);
  local_e9 = (undefined1)param_1[0x44];
  lVar3 = param_1[4];
  local_98 = param_1[0x25];
  lStack_90 = param_1[0x26];
  local_a8 = param_1[0x23];
  lStack_a0 = param_1[0x24];
  local_b8 = param_1[0x21];
  lStack_b0 = param_1[0x22];
  local_c8 = (undefined4)param_1[0x1f];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0xfc);
  uStack_c0 = (undefined4)param_1[0x20];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x104);
  local_e0 = *(undefined8 *)(lVar2 + 0x298);
  local_d8 = *(undefined4 *)(lVar2 + 0x2a0);
  local_d0 = 0;
  local_58 = 0;
  plVar4 = param_1 + 0xd;
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x13];
  }
  FUN_1400709d4(local_88,plVar4,(int)param_1[0x14],0);
  local_140 = param_1[0xc];
  local_148 = *(undefined4 *)((longlong)param_1 + 0x21c);
  local_150 = (undefined4)param_1[0x43];
  local_158 = *(undefined4 *)((longlong)param_1 + 0x214);
  local_108 = local_e9;
  local_138 = local_88;
  local_130 = &local_e0;
  local_128 = &local_c8;
  local_120 = param_1 + 0x18;
  local_118 = (short)lVar3;
  local_110 = param_1 + 0x1a;
  local_100 = (bVar1 & 0x40) >> 6;
  FUN_144351084(local_e8,param_1[3],param_1 + 0x36,(int)param_1[0x42]);
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435851a FUN_14435851a body=29 status=ok
// SIG undefined FUN_14435851a(void)

void FUN_14435851a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144358538 FUN_144358538 body=176 status=ok
// SIG undefined FUN_144358538(void)

undefined8 * FUN_144358538(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b9df550;
  param_1[0x1c] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_140115c12(param_1 + 0x1e,0);
  }
  param_1[0x1d] = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1403e0ff1(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443585e8 FUN_1443585e8 body=5917 status=ok
// SIG undefined FUN_1443585e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443585e8(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _DAT_14cbe7080 = 0x47efffffe0000000;
  _DAT_14cbe7088 = 0x47efffffe0000000;
  _DAT_14cbe7090 = 0x47efffffe0000000;
  _DAT_14cbe7098 = 0x47efffffe0000000;
  _DAT_14cbe70a0 = 0x47efffffe0000000;
  _DAT_14cbe70a8 = 0x47efffffe0000000;
  _DAT_14cbe70b0 = 0x47efffffe0000000;
  _DAT_14cbe70b8 = 0x47efffffe0000000;
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe70c0 = (ulonglong)uVar2;
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe70c8 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe70d0 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe70d8 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbe70e0);
  if (cVar1 == '\0') {
    _DAT_14cbe70e0 = 0;
    uRam000000014cbe70e8 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbe70f4 = 0;
  FUN_14052b5e0(&DAT_14cbe70f0,"PlayerAwareness",0);
  _DAT_14cbe7100 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7108 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7110 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7118 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7120 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7128 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7130 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7138 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7140 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7148 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7150 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7158 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7160 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7168 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7170 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7178 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7180 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7188 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7190 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7198 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbe71a0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144349c08);
  FUN_140056680(&DAT_14cbe71b0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144349c19);
  FUN_140056680(&DAT_14cbe71c0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144349c2a);
  FUN_140056680(&DAT_14cbe71d0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144349c3b);
  FUN_1446f470e(&DAT_14cbe71e0,L"LIMB_GORED",1);
  _DAT_14cbe71e8 = 0x4072c00000000000;
  _DAT_14cbe71f0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbe71f8,L"body",1);
  FUN_1446f470e(&DAT_14cbe7200,L"title_card",1);
  FUN_1446f470e(&DAT_14cbe7208,L"PV_DISMOUNT",1);
  local_70 = "InVehicle";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7210 = (ulonglong)uVar2;
  DAT_14cbe7218 = 0;
  atexit((_func_5014 *)&LAB_144349c4c);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe72a8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe72b0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144349ca9);
  local_70 = "TrackerObjects";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe72c0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbe72c8,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbe72d0,L"Party",1);
  FUN_1446f470e(&DAT_14cbe72d8,&DAT_149e063b2);
  _DAT_14cbe72e4 = 0;
  FUN_14052b5e0(&DAT_14cbe72e0,"State");
  _DAT_14cbe72f4 = 0;
  FUN_14052b5e0(&DAT_14cbe72f0,"VendingMachineState");
  _DAT_14cbe7300 = "VendingMachineState";
  ram0x00014cbe730c = 0;
  FUN_14052b5e0(&DAT_14cbe7308,"InUseState");
  _DAT_14cbe7318 = "InUseState";
  _DAT_14cbe7324 = 0;
  FUN_14052b5e0(&DAT_14cbe7320,"state");
  _DAT_14cbe7330 = "state";
  _DAT_14cbe733c = 0;
  FUN_14052b5e0(&DAT_14cbe7338,"shuffle_timestamp");
  _DAT_14cbe7348 = "shuffle_timestamp";
  _DAT_14cbe7354 = 0;
  FUN_14052b5e0(&DAT_14cbe7350,"iotd_timestamp");
  _DAT_14cbe7360 = "iotd_timestamp";
  _DAT_14cbe736c = 0;
  FUN_14052b5e0(&DAT_14cbe7368,"items");
  _DAT_14cbe7378 = "items";
  _DAT_14cbe7384 = 0;
  FUN_14052b5e0(&DAT_14cbe7380,&DAT_14b3fc248);
  _DAT_14cbe7390 = &DAT_14b3fc248;
  local_70 = "OnCooldown";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7398 = (ulonglong)uVar2;
  local_70 = "VendingMachineState";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe73a0 = (ulonglong)uVar2;
  local_70 = "Inactive";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe73a8 = (ulonglong)uVar2;
  local_70 = "Active";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe73b0 = (ulonglong)uVar2;
  local_70 = "AcceptingInput";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe73b8 = (ulonglong)uVar2;
  _DAT_14cbe73c8 = &LAB_14434a887;
  _DAT_14cbe73d0 = 0x447a0000;
  DAT_14cbe73d4 = 1;
  DAT_14cbe73c0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe73c0;
  atexit((_func_5014 *)&LAB_14434a88c);
  local_70 = "VendingMachineState";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe73e0 = (ulonglong)uVar2;
  _DAT_14cbe73e8 = 0;
  uRam000000014cbe73f0 = 0;
  _DAT_14cbe73f8 = 0;
  DAT_14cbe7400 = 0;
  uRam000000014cbe7408 = 0;
  FUN_1446ddda2(&DAT_14cbe73e8,"shared_progress.story_completed");
  atexit((_func_5014 *)&LAB_14434a8c0);
  local_70 = "lostloot";
  local_68 = 8;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7410 = 0;
  uRam000000014cbe7418 = 0;
  _DAT_14cbe7420 = 0;
  DAT_14cbe7428 = 0;
  uRam000000014cbe7430 = 0;
  FUN_1446ddda2(&DAT_14cbe7410,"lostloot");
  atexit((_func_5014 *)&LAB_14434adef);
  _DAT_14cbe7438 = 0;
  uRam000000014cbe7440 = 0;
  _DAT_14cbe7448 = 0;
  DAT_14cbe7450 = 0;
  uRam000000014cbe7458 = 0;
  FUN_1446ddda2(&DAT_14cbe7438,"oak.lostloot");
  atexit((_func_5014 *)&LAB_14434ae00);
  _DAT_14cbe7480 = 0;
  _DAT_14cbe7488 = 0;
  DAT_14cbe7460 = 0;
  _DAT_14cbe7468 = 0;
  _DAT_14cbe748c = 0xffffffff00000080;
  DAT_14cbe7494 = 0;
  DAT_14cbe74a0 = 0;
  DAT_14cbe74a8 = 0;
  atexit(FUN_14434ae11);
  local_70 = "ScreenDisplayMesh";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe74b0 = (ulonglong)uVar2;
  local_70 = "MachineState";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe74b8 = (ulonglong)uVar2;
  local_70 = "Active";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe74c0 = (ulonglong)uVar2;
  local_70 = "Inactive";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe74c8 = (ulonglong)uVar2;
  local_70 = "CurrentLostLoot";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe74d0 = (ulonglong)uVar2;
  local_70 = "MaxLostLoot";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe74d8 = (ulonglong)uVar2;
  _DAT_14cbe74e4 = 0;
  _DAT_14cbe74e8 = 0;
  FUN_14052b5e0(&DAT_14cbe74e0,&DAT_14b6bcef8);
  DAT_14cbe7520._4_4_ = 0;
  DAT_14cbe7528 = 0;
  FUN_14052b5e0(&DAT_14cbe7520,"items");
  _DAT_14cbe7530 = "items";
  DAT_14cbe7538._4_4_ = 0;
  DAT_14cbe7540 = 0;
  FUN_14052b5e0(&DAT_14cbe7538,"slots");
  _DAT_14cbe7548 = "slots";
  DAT_14cbe7550._4_4_ = 0;
  DAT_14cbe7558 = 0;
  FUN_14052b5e0(&DAT_14cbe7550,"serial");
  _DAT_14cbe7560 = "serial";
  DAT_14cbe7568._4_4_ = 0;
  DAT_14cbe7570 = 0;
  FUN_14052b5e0(&DAT_14cbe7568,"in_machine");
  _DAT_14cbe7578 = "in_machine";
  _DAT_14cbe7584 = 0;
  _DAT_14cbe7588 = 0;
  FUN_14052b5e0(&DAT_14cbe7580,"cooldown");
  _DAT_14cbe7590 = "cooldown";
  local_70 = "05_legendary";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7598 = (ulonglong)uVar2;
  DAT_14cbe74f0 = 0;
  _DAT_14cbe74f8 = 0;
  _DAT_14cbe7500 = 2;
  _DAT_14cbe7504 = 0;
  atexit(FUN_14434b4c8);
  DAT_14cbe7508 = 0;
  _DAT_14cbe7510 = 0;
  _DAT_14cbe7518 = 2;
  _DAT_14cbe751c = 0;
  atexit(FUN_14434b4f9);
  DAT_14cbe75a0._4_4_ = 0;
  DAT_14cbe75a8 = 0;
  FUN_14052b5e0(&DAT_14cbe75a0,"vending");
  _DAT_14cbe75b0 = "vending";
  DAT_14cbe75bc._0_4_ = 0;
  DAT_14cbe75bc._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbe75b8,"active");
  _DAT_14cbe75c8 = "active";
  local_70 = "VendingMachineState";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe75d0 = (ulonglong)uVar2;
  local_70 = "IOTD";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe75d8 = (ulonglong)uVar2;
  local_70 = "SocketComponent_IOTD";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe75e0 = (ulonglong)uVar2;
  local_70 = "cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe75e8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe75f0,"ProximityCollision");
  atexit((_func_5014 *)&LAB_14434c2ab);
  local_70 = "bb";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe77e0 = (ulonglong)uVar2;
  local_78 = 0;
  FUN_1412cc41e(&DAT_14cbe7600,L"FOakWaterManager",0,0);
  local_70 = "Wear";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7610 = (ulonglong)uVar2;
  local_70 = "Rust";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7618 = (ulonglong)uVar2;
  local_70 = "Dirt";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7620 = (ulonglong)uVar2;
  local_70 = "SunDamage";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7628 = (ulonglong)uVar2;
  local_70 = "ws";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7630 = (ulonglong)uVar2;
  local_70 = "wb";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7638 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbe7640,L"Energy",1);
  local_70 = "projectilespershot";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7648 = (ulonglong)uVar2;
  local_70 = "movementaccuracymaxvalue";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7650 = (ulonglong)uVar2;
  local_70 = "standingaccuracypenaltypercent";
  local_68 = 0x1e;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7658 = (ulonglong)uVar2;
  local_70 = "crouchmaxaccuracypenaltypercent";
  local_68 = 0x1f;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7660 = (ulonglong)uVar2;
  local_70 = "loadedshotsdamagepct";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7668 = (ulonglong)uVar2;
  local_70 = "loadedshotsdamageradiuspct";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7670 = (ulonglong)uVar2;
  local_70 = "loadedshotsprojectilespeedpct";
  local_68 = 0x1d;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7678 = (ulonglong)uVar2;
  local_70 = "loadedshotsspreadpct";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7680 = (ulonglong)uVar2;
  local_70 = "loadedshotsaccuracyimpulsepct";
  local_68 = 0x1d;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7688 = (ulonglong)uVar2;
  local_70 = "loadedshotsrecoilpct";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7690 = (ulonglong)uVar2;
  local_70 = "loadedshotsheatimpulsepct";
  local_68 = 0x19;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7698 = (ulonglong)uVar2;
  local_70 = "loadedshotsadditionalprojectiles";
  local_68 = 0x20;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe76a0 = (ulonglong)uVar2;
  local_70 = "loadedshotsadditionalburstcount";
  local_68 = 0x1f;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe76a8 = (ulonglong)uVar2;
  local_70 = "lessthandamagetagsthreshold";
  local_68 = 0x1b;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe76b0 = (ulonglong)uVar2;
  local_70 = "FX_Shield_3rd";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe76b8 = (ulonglong)uVar2;
  local_70 = "FX_Shield_1st";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe76c0 = (ulonglong)uVar2;
  local_70 = "Root";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe76c8 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe76d0 = (ulonglong)uVar2;
  local_70 = "Charging";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe76e8 = (ulonglong)uVar2;
  local_70 = "Charged";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe76f0 = (ulonglong)uVar2;
  local_70 = "Overcharged";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe76f8 = (ulonglong)uVar2;
  local_70 = "Discharging";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7700 = (ulonglong)uVar2;
  local_70 = "Charging";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7708 = (ulonglong)uVar2;
  local_70 = "Charged";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7710 = (ulonglong)uVar2;
  local_70 = "Overcharged";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7718 = (ulonglong)uVar2;
  local_70 = "Discharging";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7720 = (ulonglong)uVar2;
  local_70 = "Reloading";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbe7728 = (ulonglong)uVar2;
  local_70 = "StackCharged";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbe7730 = (ulonglong)uVar2;
  FUN_1458e052c(&DAT_14cbe7738);
  _DAT_14cbe7738 = &PTR_FUN_14b9de2f0;
  DAT_14cbe7740 = 0;
  DAT_14cbe7748 = 0;
  DAT_14cbe7750 = 0;
  DAT_14cbe7758 = 0;
  DAT_14cbe7760 = 0;
  DAT_14cbe7768 = 0;
  DAT_14cbe7770 = 0;
  DAT_14cbe7778 = 0;
  DAT_14cbe7780 = 0;
  local_78 = 0;
  FUN_14153156c(&DAT_14cbe7788,L"gbx.Weapon.ParallelFireProjectile",&DAT_14c7640dc,
                L"If true, the expensive parts of weapon firing are done in a parallel task.");
  atexit(FUN_14434f684);
  local_78 = 0;
  FUN_141471170(&DAT_14cbe7798,L"gbx.Weapon.MaxAsyncSpawnProjectileDelay",&DAT_14c7640e0,
                L"Maximum delay(ms) before all projectiles are forced to spawn.");
  atexit(FUN_14434f6c9);
  local_78 = 0;
  FUN_141471170(&DAT_14cbe77a8,L"gbx.Weapon.MinParallelProjectilesPerShot",&DAT_14c7640e4,
                L"Minimum number of projectiles per shot to qualify spawning a separate worker task."
               );
  atexit(FUN_14434f70e);
  local_78 = 0;
  FUN_141471170(&DAT_14cbe77b8,L"gbx.Weapon.MaxProjectilesPerTask",&DAT_14c7640e8,
                L"Maximum number of projectiles to spawn in a parallel task.");
  atexit(FUN_14434f753);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144359d4c FUN_144359d4c body=304 status=ok
// SIG undefined FUN_144359d4c(void)

void FUN_144359d4c(longlong param_1)

{
  longlong lVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140940982;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146572ba2;
      local_48 = &LAB_148ca13ba;
      local_50 = &LAB_140e51436;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if (((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) &&
       (*(char *)(lVar1 + 0xed4) != '\0')) {
      lVar1 = 0x9c;
      goto LAB_144359dac;
    }
  }
  lVar1 = 0x4c;
LAB_144359dac:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(*(undefined4 *)(param_1 + lVar1));
}



// FUNCTION 144359e7e FUN_144359e7e body=140 status=ok
// SIG undefined FUN_144359e7e(void)

byte FUN_144359e7e(ulonglong param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  
  piVar1 = (int *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0xbc) <= *piVar1) {
    return 1;
  }
  piVar2 = (int *)(param_1 + 0x11c);
  if (*piVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x118);
    bVar4 = 0;
    if (-1 < (int)uVar3) {
      if (DAT_14c9647dc <= (int)uVar3) goto LAB_144359efb;
      plVar5 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      param_1 = DAT_14c9647c8;
      if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *piVar2)) &&
         (param_1 = (ulonglong)*(uint *)(plVar5 + 1), (*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
        plVar5 = (longlong *)*plVar5;
        param_1 = 0;
        if (plVar5 != (longlong *)0x0) {
          bVar4 = (**(code **)(*plVar5 + 0x338))(plVar5,*piVar1 + 2);
          param_1 = (ulonglong)(bVar4 ^ 1);
          bVar4 = 1;
          goto LAB_144359efb;
        }
      }
    }
  }
  bVar4 = 0;
LAB_144359efb:
  return bVar4 & (byte)param_1;
}



// FUNCTION 144359f1c FUN_144359f1c body=70 status=ok
// SIG undefined FUN_144359f1c(void)

void FUN_144359f1c(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x2f8))(param_1);
  }
  if (((*(byte *)(param_1 + 0x17) & 2) != 0) && ((*(byte *)(param_1[0x15] + 0x108) & 1) != 0)) {
    FUN_14120b744(param_1,0);
    return;
  }
  return;
}



// FUNCTION 144359f88 FUN_144359f88 body=1944 status=ok
// SIG undefined FUN_144359f88(void)

void FUN_144359f88(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = uVar10;
    plVar12 = *(longlong **)(param_1 + 0xa8);
    if (plVar12 == (longlong *)0x0) goto LAB_14435a07a;
    *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_14435a012:
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_14435a07a;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa0) = uVar10;
    plVar12 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 == plVar12) {
      LOCK();
      plVar12 = plVar3 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0xa8) = plVar3;
      if (plVar12 != (longlong *)0x0) goto LAB_14435a012;
    }
  }
  LOCK();
  plVar12 = plVar3 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14435a07a:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar4 = *param_3;
  uVar10 = FUN_1408f543e();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,0);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar8;
  FUN_14020a6cc(param_1 + 0x88,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar10 = FUN_1408f543e();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,1);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x9c) = uVar8;
  FUN_14020a6cc(param_1 + 0x94,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar10 = FUN_1408f5405();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,0);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  if (local_80 == 3) {
    uVar8 = local_a0;
    bVar7 = 3;
  }
  else {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    bVar7 = local_80;
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
      bVar7 = local_80;
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar10 = FUN_1408f5405();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,1);
  }
  puVar13 = &local_78;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  uVar8 = FUN_1405d5f74(puVar13);
  *(undefined4 *)(param_1 + 0xb8) = uVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar13 = (undefined4 *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar4 = *param_3;
  uVar10 = FUN_1408f5405();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,2);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
  FUN_14020a6cc(param_1 + 0xbc,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar10 = FUN_1408f5405();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,3);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  if (local_80 == 3) {
    uVar9 = 3;
    uVar8 = local_a0;
  }
  else {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar9 = (uint)local_80;
  }
  *(undefined4 *)(param_1 + 200) = uVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x34);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14435a722 FUN_14435a722 body=308 status=ok
// SIG undefined FUN_14435a722(void)

ulonglong FUN_14435a722(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
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
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x15c) & 4) == 0) {
    if ((*(longlong *)(param_1 + 0x150) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x3c0), lVar1 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
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
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (*(char *)(lVar1 + 0x2580) != '\0')) goto LAB_14435a793;
    }
    uVar2 = 0;
  }
LAB_14435a793:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435a858 FUN_14435a858 body=308 status=ok
// SIG undefined FUN_14435a858(void)

ulonglong FUN_14435a858(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
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
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x15c) & 8) == 0) {
    if ((*(longlong *)(param_1 + 0x150) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x3c0), lVar1 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
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
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (*(char *)(lVar1 + 0x25a8) != '\0')) goto LAB_14435a8c9;
    }
    uVar2 = 0;
  }
LAB_14435a8c9:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435a98d FUN_14435a98d body=41 status=ok
// SIG undefined FUN_14435a98d(void)

void FUN_14435a98d(void)

{
  DAT_14cbe7a80 = 0;
  if (DAT_14cbe7a78 != 0) {
    FUN_1400020a8();
  }
  FUN_1461754d2();
  return;
}



// FUNCTION 14435a9b6 FUN_14435a9b6 body=1277 status=ok
// SIG undefined FUN_14435a9b6(void)

void FUN_14435a9b6(longlong param_1,longlong *param_2,longlong param_3)

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
  FUN_148f1c4f0(param_1 + 0x38,*(undefined8 *)(param_3 + 0x100));
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14435ae0e;
    if (iVar7 != 1) goto LAB_14435aa26;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14435ae0e;
  }
  else {
LAB_14435aa26:
    if (iVar7 == 0x10) goto LAB_14435ae0e;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14435ae0e:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14435ae0e;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14435ab93;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14435fd8b);
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
LAB_14435ab93:
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
          goto LAB_14435ac13;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14435ac13:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14b9e18c0;
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
    local_48 = &PTR_LAB_14b9e18a0;
    local_68[0] = &LAB_14435fd44;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cbe8294);
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



// FUNCTION 14435aec8 FUN_14435aec8 body=78 status=ok
// SIG undefined FUN_14435aec8(void)

void FUN_14435aec8(void)

{
  longlong lVar1;
  
  lVar1 = 0x440;
  do {
    if (*(longlong **)((longlong)&DAT_14cbe7a88 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&DAT_14cbe7a88 + lVar1) + 0x10))();
    }
    if (*(longlong **)(&DAT_14cbe7a70 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(&DAT_14cbe7a70 + lVar1) + 0x10))();
    }
    if (*(longlong *)((longlong)&DAT_14cbe7a60 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14435af30 FUN_14435af30 body=1210 status=ok
// SIG undefined FUN_14435af30(void)

void FUN_14435af30(longlong param_1,undefined8 param_2,longlong param_3)

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
    if (iVar7 == 2) goto LAB_14435af7b;
    if (iVar7 != 1) goto LAB_14435af76;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14435af7b;
  }
  else {
LAB_14435af76:
    if (iVar7 == 0x10) goto LAB_14435af7b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14435af7b:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14435af7b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14435b117;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14435fd8b);
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
LAB_14435b117:
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
          goto LAB_14435b197;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14435b197:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14b9e18f0;
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
    local_48 = &PTR_LAB_14b9e18d0;
    local_68[0] = &LAB_14435ffae;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cbe8298);
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



// FUNCTION 14435b406 FUN_14435b406 body=546 status=ok
// SIG undefined FUN_14435b406(void)

void FUN_14435b406(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != DAT_14cbe7a90) {
    plVar4 = &DAT_14cbe7ac0;
    lVar7 = 0;
    do {
      if (*param_2 == *plVar4) {
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_1446efa72(&local_38,0,3,0x10);
        local_30 = 3;
        *local_38 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_38[2] = lVar6;
        *local_38 = &PTR_FUN_14b9e1970;
        local_38[3] = param_1;
        *(int *)(local_38 + 4) = (int)lVar7;
        goto LAB_14435b530;
      }
      lVar7 = lVar7 + 1;
      plVar4 = plVar4 + 8;
    } while (lVar7 != 0x11);
    goto LAB_14435b5a1;
  }
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_38[2] = lVar5;
  *local_38 = &PTR_FUN_14b9e1900;
  local_38[3] = param_1;
LAB_14435b530:
  iVar3 = local_30;
  puVar2 = local_38;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  if ((int)param_4[1] == 0) {
LAB_14435b550:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_14435b550;
    }
  }
  *param_4 = (longlong)puVar2;
  *(int *)(param_4 + 1) = iVar3;
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_14435b5a1;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14435b5a1:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14435b62a FUN_14435b62a body=320 status=ok
// SIG undefined FUN_14435b62a(void)

undefined8 * FUN_14435b62a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  if (plVar2 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar2 + 0x700))(plVar2);
    if (cVar4 == '\0') {
      lVar6 = FUN_14011c349();
      pcVar3 = *(code **)(*plVar2 + 0x5e8);
      if (pcVar3 == FUN_140972dde) {
        lVar8 = plVar2[0x76];
        if (lVar8 == 0) {
          pcVar3 = *(code **)(*plVar2 + 0x5f8);
          if (pcVar3 == FUN_144784df4) {
            if (*(code **)(plVar2[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (*(int *)((longlong)plVar2 + 0x75b4) != 0) {
                uVar1 = *(uint *)(plVar2 + 0xeb6);
                lVar8 = 0;
                if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14435b701;
                plVar7 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((plVar7 != (longlong *)0x0) &&
                   (((int)plVar7[2] == *(int *)((longlong)plVar2 + 0x75b4) &&
                    ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                    lVar8 = *plVar7;
                  }
                  else {
                    lVar8 = 0;
                  }
                  lVar8 = lVar8 + 0x110;
                  goto LAB_14435b733;
                }
              }
            }
            else {
              lVar8 = (**(code **)(plVar2[0x784] + 0x18))(plVar2 + 0x784);
LAB_14435b733:
              if (lVar8 != 0) {
                lVar8 = *(longlong *)(lVar8 + 0x20);
                goto LAB_14435b73c;
              }
            }
          }
          else {
            lVar8 = (*pcVar3)(plVar2);
LAB_14435b73c:
            if (lVar8 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x3b0);
              goto LAB_14435b701;
            }
          }
          lVar8 = 0;
        }
      }
      else {
        lVar8 = (*pcVar3)(plVar2);
      }
LAB_14435b701:
      uVar5 = *(undefined8 *)(lVar6 + 0x488 + (ulonglong)(lVar8 != 0) * 8);
      goto LAB_14435b711;
    }
  }
  uVar5 = 0;
LAB_14435b711:
  *param_2 = uVar5;
  return param_2;
}



// FUNCTION 14435b76a FUN_14435b76a body=81 status=ok
// SIG undefined FUN_14435b76a(void)

longlong FUN_14435b76a(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + -0x210);
  if ((((int)(uint)bVar1 < *(int *)(param_1 + -0x1f8)) &&
      (plVar2 = *(longlong **)
                 (*(longlong *)(param_1 + -0x200) + 0x38 +
                 (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0)) &&
     (lVar3 = (**(code **)(*plVar2 + 0x2b8))(), lVar3 != 0)) {
    return lVar3;
  }
  return param_1 + 0xf0;
}



// FUNCTION 14435b7bc FUN_14435b7bc body=22 status=ok
// SIG undefined FUN_14435b7bc(void)

void FUN_14435b7bc(longlong param_1)

{
  if (*(char *)(param_1 + 0xf69) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xf69) = 0;
  FUN_146075b90();
  return;
}



// FUNCTION 14435b7d2 FUN_14435b7d2 body=5311 status=ok
// SIG undefined FUN_14435b7d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14435b7d2(longlong param_1,uint param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  code *pcVar19;
  code **ppcVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  longlong *plVar23;
  code **ppcVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  longlong *plVar27;
  int iVar28;
  code *pcVar29;
  longlong lVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_418 [32];
  wchar_t *local_3f8;
  uint local_3f0;
  undefined8 local_3e8;
  wchar_t *local_3e0;
  wchar_t *local_3d8;
  code *local_3d0;
  undefined1 *local_3c8;
  code **local_3c0;
  code *local_3b8;
  code *local_3b0;
  longlong local_3a8;
  longlong *local_3a0;
  ulonglong local_398;
  longlong local_390;
  double local_388;
  double dStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_2e0 [24];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  code *local_2a8 [3];
  longlong local_290;
  undefined **local_288;
  undefined *local_280;
  longlong local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  code *local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined1 local_238 [48];
  undefined1 *local_208;
  undefined4 local_200;
  code *local_1f8 [2];
  undefined8 *local_1e8;
  code *local_1b8 [6];
  code **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  ulonglong local_138;
  undefined8 local_130;
  longlong *plStack_128;
  undefined8 local_120;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (param_1 == 0) goto LAB_14435c67c;
  if (DAT_14cb94538 == 0) {
    local_3c0 = (code **)&local_178;
    local_178._0_4_ = 0x449e2820;
    local_178._4_4_ = 1;
    local_3b0 = FUN_14081d0ea;
    local_3b8 = FUN_1427b09ee;
    local_3c8 = &LAB_148a18249;
    local_3d0 = FUN_14657713c;
    local_3d8 = L"Engine";
    local_3e0 = (wchar_t *)0x0;
    local_3e8 = CONCAT44(local_3e8._4_4_,0x10004001);
    local_3f0 = 8;
    local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar14 = (longlong *)FUN_144718840(param_1,DAT_14cb94538);
  if (plVar14 == (longlong *)0x0) goto LAB_14435c67c;
  lVar15 = (**(code **)(*plVar14 + 0x18))(plVar14);
  if (*(int *)(lVar15 + 0xa8) <= (int)(param_3 & 0xff)) goto LAB_14435c67c;
  plVar14 = *(longlong **)(*(longlong *)(lVar15 + 0xa0) + 0x20 + (param_3 & 0xff) * 0x170);
  if ((DAT_14c950c29 == '\x01') && (plVar14 != (longlong *)0x0)) {
    FUN_1456cec3c(plVar14);
  }
  else if (plVar14 == (longlong *)0x0) goto LAB_14435c67c;
  if (DAT_14cbbd498 == 0) {
    local_3c0 = (code **)&local_178;
    local_178._0_4_ = 0x40940982;
    local_178._4_4_ = 1;
    local_3b0 = FUN_14081d0ea;
    local_3b8 = (code *)&LAB_146572ba2;
    local_3c8 = &LAB_148ca13ba;
    local_3d0 = (code *)&LAB_140e51436;
    local_3d8 = L"Engine";
    local_3e0 = (wchar_t *)0x0;
    local_3e8 = CONCAT44(local_3e8._4_4_,0x10000004);
    local_3f0 = 8;
    local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,0x1068);
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  if (((*(int *)(plVar14[2] + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) !=
       DAT_14cbbd498 + 0x30)) || ((char)plVar14[0x2f] != '\x03')) goto LAB_14435c67c;
  lVar15 = FUN_1407e8892();
  FUN_1405c5fa2();
  local_280 = &DAT_14cb769e8;
  local_278 = 0;
  uStack_270 = 0;
  local_288 = &PTR_FUN_14b0394b0;
  bVar2 = *(byte *)(plVar14 + 0x17b);
  if (((int)(uint)bVar2 < (int)plVar14[0x17e]) &&
     (plVar23 = *(longlong **)
                 (plVar14[0x17d] + 0x10 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8),
     plVar23 != (longlong *)0x0)) {
    fVar32 = (float)(**(code **)(*plVar23 + 0x388))();
    lVar16 = 0xb0;
    if ((0.5 < fVar32) || (lVar16 = 0xd0, fVar32 <= 0.0001)) {
      FUN_1405dc634(&local_288,lVar15 + lVar16);
    }
  }
  fVar32 = 0.0;
  if ((param_2 & 2) != 0) {
    bVar2 = *(byte *)(plVar14 + 0x17b);
    iVar13 = -1;
    if (((int)(uint)bVar2 < (int)plVar14[0x17e]) &&
       (plVar23 = *(longlong **)
                   (plVar14[0x17d] + 0x10 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8),
       plVar23 != (longlong *)0x0)) {
      iVar13 = (**(code **)(*plVar23 + 0x2c0))();
    }
    FUN_1401e6366(plVar14,-iVar13,0,0);
    fVar32 = (float)iVar13;
  }
  if ((param_2 & 1) != 0) {
    (**(code **)(*plVar14 + 0x808))(plVar14,0xffffffff,0,1);
    bVar2 = *(byte *)(plVar14 + 0x17b);
    if (((int)(uint)bVar2 < (int)plVar14[0x17e]) &&
       (plVar23 = *(longlong **)
                   (plVar14[0x17d] + 0x20 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8),
       plVar23 != (longlong *)0x0)) {
      lVar15 = FUN_14018fcd2();
      if ((*(int *)(lVar15 + 0x38) <= *(int *)(plVar23[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar23[2] + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
          lVar15 + 0x30)) {
        (**(code **)(*plVar23 + 0x2e0))(plVar23);
      }
    }
  }
  lVar15 = FUN_1447210f0(plVar14);
  if ((lVar15 != 0) && (plVar14[0x36] != 0)) {
    local_290 = 0;
    lVar16 = plVar14[0x9f];
    if ((longlong)(int)lVar16 != 0) {
      lVar18 = plVar14[0x9e];
      lVar30 = 0;
      local_3a0 = (longlong *)0x0;
      local_3a8 = 0;
      local_398 = plVar14[0x36];
      local_390 = lVar15;
      do {
        plVar23 = *(longlong **)(lVar18 + lVar30);
        plVar11 = local_3a0;
        if (plVar23 != (longlong *)0x0) {
          lVar15 = (**(code **)(*plVar23 + 8))(plVar23);
          lVar17 = FUN_140932c46();
          plVar11 = local_3a0;
          if ((((lVar17 != 0) && (*(int *)(lVar17 + 0x38) <= *(int *)(lVar15 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
               == lVar17 + 0x30)) && ((int)plVar23[6] == 0)) {
            if (*(char *)((longlong)plVar23 + 0x3c) == '\0') {
              FUN_1414afec6(plVar23 + 8,&local_178);
              plVar23 = local_3a0;
              local_3a8 = CONCAT44(local_178._4_4_,(undefined4)local_178);
              plVar11 = (longlong *)CONCAT44(uStack_16c,uStack_170);
              local_178._0_4_ = 0;
              local_178._4_4_ = 0;
              plVar27 = plVar11;
              if (plVar11 != local_3a0) {
                uStack_170 = 0;
                uStack_16c = 0;
                if (local_3a0 == (longlong *)0x0) goto LAB_14435bc74;
                LOCK();
                plVar27 = local_3a0 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 == 0) {
                  (**(code **)*local_3a0)(local_3a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar23 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar23 + 0x10))(plVar23);
                  }
                }
                plVar27 = (longlong *)CONCAT44(uStack_16c,uStack_170);
                plVar23 = plVar11;
              }
              plVar11 = plVar23;
              if (plVar27 != (longlong *)0x0) {
                LOCK();
                plVar23 = plVar27 + 1;
                *(int *)plVar23 = (int)*plVar23 + -1;
                UNLOCK();
                if ((int)*plVar23 == 0) {
                  (**(code **)*plVar27)(plVar27);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar27 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                  }
                }
              }
            }
            else if (*(char *)((longlong)plVar23 + 0x3c) == '\x01') {
              FUN_145ae3c82(plVar23 + 8,&local_178);
              lVar15 = *(longlong *)(CONCAT44(local_178._4_4_,(undefined4)local_178) + 0x58);
              if (lVar15 != 0) {
                local_290 = lVar15;
              }
              plVar23 = (longlong *)CONCAT44(uStack_16c,uStack_170);
              plVar11 = local_3a0;
              if (plVar23 != (longlong *)0x0) {
                LOCK();
                plVar27 = plVar23 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 == 0) {
                  (**(code **)*plVar23)(plVar23);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar23 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar11 = local_3a0;
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar23 + 0x10))(plVar23);
                    plVar11 = local_3a0;
                  }
                }
              }
            }
          }
        }
LAB_14435bc74:
        local_3a0 = plVar11;
        lVar30 = lVar30 + 0x10;
      } while ((longlong)(int)lVar16 * 0x10 != lVar30);
      if (local_3a8 != 0) {
        FUN_1400ecfc6(local_3a8,local_2a8,&local_290);
        local_268 = local_2a8[0];
        FUN_1446dcdd4(&local_178,&local_268);
        lVar15 = FUN_140a4bd48(&local_178);
        if (uStack_160 != 0) {
          FUN_1400020a8();
        }
        if (lVar15 != 0) {
          if (((((*(int *)(lVar15 + 0x94) == 0) ||
                (uVar3 = *(uint *)(lVar15 + 0x90), (int)uVar3 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar3 ||
                ((plVar23 = (longlong *)
                            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 plVar23 == (longlong *)0x0 || ((int)plVar23[2] != *(int *)(lVar15 + 0x94))))))) ||
              ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) || (lVar16 = *plVar23, lVar16 == 0)) {
            if (*(longlong *)(lVar15 + 0x98) != 0) {
              lVar16 = FUN_140007850(lVar15 + 0x98);
              cVar12 = (*(code *)PTR_FUN_14c758760)();
              lVar18 = DAT_14c9647c8;
              if ((lVar16 == 0) || (cVar12 == '\0')) {
                if (lVar16 == 0) {
                  *(undefined8 *)(lVar15 + 0x90) = 0;
                  goto LAB_14435c604;
                }
                uVar3 = *(uint *)(lVar16 + 0xc);
                *(uint *)(lVar15 + 0x90) = uVar3;
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar18 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar18 = 0;
                }
                iVar13 = *(int *)(lVar18 + 0x10);
                if (*(int *)(lVar18 + 0x10) == 0) {
                  LOCK();
                  iVar13 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar28 = DAT_14c964868 + 1;
                  bVar31 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar13;
                  if (bVar31) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar28);
                  }
                  LOCK();
                  iVar13 = *(int *)(lVar18 + 0x10);
                  bVar31 = iVar13 == 0;
                  if (bVar31) {
                    *(int *)(lVar18 + 0x10) = iVar28;
                    iVar13 = 0;
                  }
                  UNLOCK();
                  if (bVar31) {
                    iVar13 = iVar28;
                  }
                }
LAB_14435c5ef:
                *(int *)(lVar15 + 0x94) = iVar13;
              }
              else {
                uVar3 = *(uint *)(lVar16 + 0xc);
                if ((int)uVar3 < DAT_14c9647dc) {
                  if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8) + 8 +
                                (ulonglong)(uVar3 & 0xffff) * 0x18) & 0x8400000) == 0) {
                    *(uint *)(lVar15 + 0x90) = uVar3;
                    lVar18 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                             *(longlong *)(lVar18 + (ulonglong)(uVar3 >> 0x10) * 8);
LAB_14435c5e1:
                    iVar13 = *(int *)(lVar18 + 0x10);
                    if (*(int *)(lVar18 + 0x10) == 0) {
                      LOCK();
                      iVar13 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar28 = DAT_14c964868 + 1;
                      bVar31 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar13;
                      if (bVar31) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar28);
                      }
                      LOCK();
                      iVar13 = *(int *)(lVar18 + 0x10);
                      bVar31 = iVar13 == 0;
                      if (bVar31) {
                        *(int *)(lVar18 + 0x10) = iVar28;
                        iVar13 = 0;
                      }
                      UNLOCK();
                      if (bVar31) {
                        iVar13 = iVar28;
                      }
                    }
                    goto LAB_14435c5ef;
                  }
                }
                else if ((_DAT_00000008 & 0x8400000) == 0) {
                  *(uint *)(lVar15 + 0x90) = uVar3;
                  lVar18 = 0;
                  goto LAB_14435c5e1;
                }
              }
              if ((*(uint *)(lVar16 + 8) >> 0x1e & 1) == 0) goto LAB_14435bd54;
            }
          }
          else {
LAB_14435bd54:
            if (DAT_14c949118 == 0) {
              local_1b8[0] = FUN_140631fbe;
              if (DAT_14c963f04 == '\0') {
                uVar22 = FUN_140011aa6();
                lVar18 = FUN_140011c0e(uVar22,0x250,8);
              }
              else {
                lVar18 = FUN_14001cc68(0x250,8);
              }
              DAT_14c949118 = lVar18;
              FUN_1446f470e(&local_348,L"Class",1);
              local_3c0 = local_1b8;
              local_3c8 = &LAB_146891e90;
              local_3d0 = (code *)&LAB_146273097;
              local_3e0 = L"Engine";
              local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,199);
              local_3e8 = 0x20;
              local_3f0 = 0x10000000;
              local_3f8._0_4_ = 8;
              FUN_14574b4b2(lVar18);
              DAT_14c949118 = lVar18;
              if (DAT_14c951858 == 0) {
                local_178._0_4_ = 0x449e2820;
                local_178._4_4_ = 1;
                local_3b0 = FUN_14081d0ea;
                local_3b8 = FUN_14081d0ea;
                local_3c8 = &LAB_1468c5283;
                local_3d0 = FUN_142809da0;
                local_3d8 = L"Engine";
                local_3e0 = (wchar_t *)0x400000000;
                local_3e8 = CONCAT44(local_3e8._4_4_,0x10000000);
                local_3f0 = 8;
                local_3f8._0_4_ = 0x50;
                local_3c0 = (code **)&local_178;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar30 = DAT_14c951858;
              lVar18 = DAT_14c949118;
              if (DAT_14c948f88 == 0) {
                local_268 = (code *)&DAT_1427db2a2;
                if (DAT_14c963f04 == '\0') {
                  uVar22 = FUN_140011aa6();
                  DAT_14c948f88 = FUN_140011c0e(uVar22,0x250,8);
                }
                else {
                  DAT_14c948f88 = FUN_14001cc68(0x250,8);
                }
                local_3a8 = DAT_14c948f88;
                FUN_1446f470e(&local_178,L"Struct",1);
                lVar17 = local_3a8;
                local_3c8 = &LAB_146891313;
                local_3d0 = FUN_146272f63;
                local_3e0 = L"Engine";
                local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,199);
                local_3e8 = 8;
                local_3f0 = 0x10000020;
                local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,8);
                local_3c0 = (code **)&local_268;
                FUN_14574b4b2(local_3a8);
                DAT_14c948f88 = lVar17;
                local_3a8 = FUN_1446f8646();
                lVar17 = DAT_14c948f88;
                uVar22 = FUN_1400163b0();
                local_3f8 = L"Struct";
                FUN_14574b446(uVar22,lVar17,local_3a8,L"/Script/CoreUObject");
              }
              local_3f8 = L"Class";
              FUN_14574b446(DAT_14c948f88,lVar18,lVar30,L"/Script/CoreUObject");
            }
            if ((((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)
                    ) && (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30))
                  && (lVar18 = FUN_140d12354(), lVar18 != 0)) &&
                 ((*(int *)(lVar18 + 0x38) <= *(int *)(lVar16 + 0x38) &&
                  (*(longlong *)
                    (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8) ==
                   lVar18 + 0x30)))) && (lVar18 = FUN_140f1f93e(), lVar18 != 0)) &&
               ((*(int *)(lVar18 + 0x38) <= *(int *)(lVar16 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8)
                 == lVar18 + 0x30)))) {
              local_2b8 = DAT_14c8464f0;
              local_2c8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_2c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              local_3a8 = lVar15;
              if (DAT_14cba8288 == 0) {
                local_178._0_4_ = 0x41864c34;
                local_178._4_4_ = 1;
                local_3b0 = FUN_14081d0ea;
                local_3b8 = (code *)&LAB_1464cee30;
                local_3c8 = &LAB_148bfac22;
                local_3d0 = (code *)&LAB_140f21842;
                local_3d8 = L"Game";
                local_3e0 = (wchar_t *)0x0;
                local_3e8 = CONCAT44(local_3e8._4_4_,0x10000004);
                local_3f0 = 0x10;
                local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,0x9cd0);
                local_3c0 = (code **)&local_178;
                FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
              }
              uVar8 = local_398;
              if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)
                   ) && (*(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
                 (*(char *)(param_1 + 0x178) == '\x03')) {
                local_2b8 = *(undefined8 *)(param_1 + 0x9c70);
                local_2c8 = *(code **)(param_1 + 0x9c60);
                uStack_2c0 = *(undefined8 *)(param_1 + 0x9c68);
              }
              if (((int)plVar14[0x1a2] < 1) || (*(longlong *)plVar14[0x1a1] == 0)) {
                uVar22 = 0;
              }
              else {
                uVar22 = *(undefined8 *)(*(longlong *)plVar14[0x1a1] + 0xc);
              }
              local_178._0_4_ = CONCAT31(local_178._1_3_,1);
              local_178._4_4_ = (undefined4)uVar22;
              uStack_170 = (undefined4)((ulonglong)uVar22 >> 0x20);
              local_168 = local_168 & 0xffffffffffff0000;
              uStack_160 = DAT_14c8464f8;
              uStack_158 = DAT_14c846500;
              uStack_150 = DAT_14c846508;
              local_148 = 0;
              local_144 = 0;
              local_138 = local_138 & 0xffffffff00000000;
              local_130 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              plStack_128 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              local_120 = DAT_14c8464f0;
              local_258 = local_2b8;
              local_268 = local_2c8;
              uStack_260 = (undefined4)uStack_2c0;
              uStack_25c = uStack_2c0._4_4_;
              FUN_1412140b0(local_2e0,local_398,&local_178);
              local_178._0_4_ = 0;
              local_178._4_4_ = 0;
              uStack_170 = 0;
              uStack_16c = 0;
              local_3f0 = local_3f0 & 0xffffff00;
              local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,0xf);
              FUN_143e0f36e(&local_348,uVar8,local_2e0,&local_178);
              if (CONCAT44(local_178._4_4_,(undefined4)local_178) != 0) {
                FUN_1400020a8();
              }
              dVar10 = dStack_340;
              dVar9 = local_348;
              local_388 = local_338;
              dStack_380 = dStack_330;
              if ((((0 < (int)plVar14[0x1a4]) && (*(longlong *)plVar14[0x1a3] != 0)) &&
                  (lVar15 = *(longlong *)(*(longlong *)plVar14[0x1a3] + 0x48), lVar15 != 0)) ||
                 (((0 < (int)plVar14[0x1a2] && (*(longlong *)plVar14[0x1a1] != 0)) &&
                  (lVar15 = *(longlong *)(*(longlong *)plVar14[0x1a1] + 0x48), lVar15 != 0)))) {
                local_348 = *(double *)(lVar15 + 0x240);
                dStack_340 = *(double *)(lVar15 + 0x248);
                local_338 = *(double *)(lVar15 + 0x250);
                dStack_330 = *(double *)(lVar15 + 600);
              }
              uStack_158 = 0;
              uStack_150 = 0;
              local_178._0_4_ = 0;
              local_178._4_4_ = 0;
              uStack_170 = 0;
              uStack_16c = 0;
              local_144 = CONCAT44(local_144._4_4_,8);
              local_138 = 0;
              plStack_128 = (longlong *)0x0;
              local_148._0_3_ = CONCAT12(local_148._2_1_,0x100) & 0xe0ffff | 0x60000;
              local_148 = (uint)(uint3)local_148;
              local_168 = local_398;
              uStack_160 = local_398;
              puVar26 = *(undefined4 **)(local_3a8 + 8);
              if (puVar26 == (undefined4 *)0x0) {
                puVar26 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar15 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar15);
                DAT_14c947fe0 = lVar15;
              }
              FUN_140045924(DAT_14c947fe0,&local_268,puVar26,1);
              local_178._0_4_ = SUB84(local_268,0);
              local_178._4_4_ = (undefined4)((ulonglong)local_268 >> 0x20);
              local_148 = CONCAT13(3,(uint3)local_148);
              local_148 = CONCAT31(local_148._1_3_,1);
              pcVar19 = (code *)FUN_141037e38(local_390,lVar16,&local_348);
              if (pcVar19 != (code *)0x0) {
                lVar15 = (**(code **)(plVar14[0x119] + 0x18))(plVar14 + 0x119);
                if (lVar15 == 0) {
                  pcVar29 = (code *)0x0;
                }
                else {
                  puVar26 = &DAT_14c9485f0;
                  if (*(undefined4 **)(lVar15 + 8) != (undefined4 *)0x0) {
                    puVar26 = *(undefined4 **)(lVar15 + 8);
                  }
                  if (DAT_14c947fe0 == 0) {
                    lVar15 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar15);
                    DAT_14c947fe0 = lVar15;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_268,puVar26,1);
                  pcVar29 = local_268;
                }
                local_188 = (code **)0x0;
                local_180 = 0x200000000;
                if ((char)plVar14[0x1c7] == '\x01') {
                  bVar2 = *(byte *)(plVar14 + 0x17b);
                  ppcVar20 = (code **)&DAT_14cb77c90;
                  local_180._4_4_ = 2;
                  if ((int)(uint)bVar2 < (int)plVar14[0x17e]) {
                    plVar23 = *(longlong **)
                               (plVar14[0x17d] + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8)
                    ;
                    if (plVar23 != (longlong *)0x0) {
                      ppcVar20 = (code **)(**(code **)(*plVar23 + 0x2f0))
                                                    (plVar23,plVar14[0x17d],(ulonglong)bVar2 * 0x80,
                                                     2);
                      if (local_1b8 == ppcVar20) goto LAB_14435c19f;
                    }
                  }
                  ppcVar24 = (code **)ppcVar20[6];
                  if ((code **)ppcVar20[6] == (code **)0x0) {
                    ppcVar24 = ppcVar20;
                  }
                  FUN_1400709d4(local_1b8,ppcVar24,*(undefined4 *)(ppcVar20 + 7),local_180._4_4_);
                }
LAB_14435c19f:
                lVar15 = local_3a8;
                dVar7 = (double)FUN_144719204((int)*(undefined8 *)(local_3a8 + 200),0);
                dVar34 = (double)FUN_144719204((int)*(undefined8 *)(lVar15 + 0xd0),0);
                dVar4 = sin(dVar7 * 0.017453292519943295);
                dVar7 = cos(dVar7 * 0.017453292519943295);
                dVar5 = sin(dVar34 * 0.017453292519943295);
                dVar34 = cos(dVar34 * 0.017453292519943295);
                fVar33 = (float)FUN_140b536be(lVar15);
                dVar6 = (double)fVar33;
                dVar4 = dVar4 * dVar6;
                dVar5 = dVar5 * dVar7 * dVar6;
                dVar6 = dVar34 * dVar7 * dVar6;
                dVar7 = dVar9 * dVar5 - dVar6 * dVar10;
                dVar34 = local_388 * dVar6 - dVar4 * dVar9;
                dVar35 = dVar10 * dVar4 - dVar5 * local_388;
                dVar7 = dVar7 + dVar7;
                dVar34 = dVar34 + dVar34;
                dVar35 = dVar35 + dVar35;
                local_350 = (dVar9 * dVar34 - dVar35 * dVar10) + dStack_380 * dVar7 + dVar4;
                local_358 = (local_388 * dVar35 - dVar7 * dVar9) + dStack_380 * dVar34 + dVar5;
                local_360 = (dVar10 * dVar7 - dVar34 * local_388) + dStack_380 * dVar35 + dVar6;
                FUN_140b3d268(pcVar19);
                *(float *)(pcVar19 + 0x1b44) = fVar32;
                (**(code **)(*(longlong *)pcVar19 + 0x6e8))(pcVar19,plVar14 + 0x76);
                FUN_1405dc634(pcVar19 + 0xeb8,&local_288);
                local_378 = 0;
                uStack_370 = 0;
                uStack_25c = param_5;
                local_258 = CONCAT44(local_258._4_4_,param_6);
                local_248 = 0x3002;
                local_240 = 0;
                local_208 = (undefined1 *)0x0;
                ppcVar20 = local_188;
                if (local_188 == (code **)0x0) {
                  ppcVar20 = local_1b8;
                }
                local_268 = pcVar19;
                uStack_260 = param_4;
                local_250 = pcVar29;
                FUN_1400709d4(local_238,ppcVar20,local_180 & 0xffffffff,0);
                local_1f8[0] = (code *)0x0;
                puVar21 = (undefined8 *)FUN_14001cc68(0x78,8);
                *puVar21 = &PTR_FUN_14b9e1bc0;
                *(undefined4 *)(puVar21 + 3) = (undefined4)local_258;
                *(undefined4 *)(puVar21 + 1) = (undefined4)local_268;
                *(undefined4 *)((longlong)puVar21 + 0xc) = local_268._4_4_;
                *(undefined4 *)(puVar21 + 2) = uStack_260;
                *(undefined4 *)((longlong)puVar21 + 0x14) = uStack_25c;
                puVar21[4] = local_250;
                *(undefined4 *)(puVar21 + 5) = local_248;
                puVar21[6] = 0;
                puVar21[0xd] = 0;
                puVar25 = local_208;
                if (local_208 == (undefined1 *)0x0) {
                  puVar25 = local_238;
                }
                local_1e8 = puVar21;
                FUN_1400709d4(puVar21 + 7,puVar25,local_200,0);
                if (puVar21 != (undefined8 *)&DAT_fffffffffffffff8) {
                  local_1f8[0] = FUN_1443604a2;
                }
                FUN_1410672ce(pcVar19,local_3a8,local_1f8,&local_378);
                if (local_208 != (undefined1 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_188 != (code **)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_138 != 0) {
                plVar14 = plStack_128;
                if (plStack_128 == (longlong *)0x0) {
                  plVar14 = local_118;
                }
                (**(code **)(*plVar14 + 0x10))();
              }
            }
          }
        }
      }
LAB_14435c604:
      plVar14 = local_3a0;
      if (local_3a0 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_3a0 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*local_3a0)(local_3a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
  }
  local_288 = (undefined **)&DAT_14a171d50;
  uVar8 = uStack_270 >> 0x20;
  uStack_270 = uStack_270 & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    FUN_140115c12(&local_278,0);
  }
  local_280 = (undefined *)0x0;
  if (local_278 != 0) {
    FUN_1400020a8();
  }
LAB_14435c67c:
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14435cce4 FUN_14435cce4 body=75 status=ok
// SIG undefined FUN_14435cce4(void)

longlong FUN_14435cce4(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x13f0);
  if (lVar3 != 0) {
    uVar1 = FUN_1409d2e5a();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435cd1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return lVar3;
    }
  }
  return param_1 + 0x2d8;
}



// FUNCTION 14435cd47 FUN_14435cd47 body=233 status=ok
// SIG undefined FUN_14435cd47(void)

longlong * FUN_14435cd47(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbe8058 == (longlong *)0x0) {
    FUN_14435ce32(&DAT_14cbe8060);
    DAT_14cbe8058 = &DAT_14cbe8060;
  }
  plVar1 = DAT_14cbe8058;
  plVar3 = DAT_14cbe8058 + 1;
  if ((char)DAT_14cbe8058[2] == '\0') {
LAB_14435cd89:
    if (*plVar3 == 0) goto LAB_14435cdab;
    cVar2 = FUN_1449e3c20(DAT_14cbe8058);
    if (cVar2 == '\0') goto LAB_14435ce0a;
  }
  else {
    if ((char)DAT_14cbe8058[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_14435cd89;
    }
LAB_14435cdab:
    if (DAT_14c9a17d8 == (longlong *)0x0) goto LAB_14435ce0a;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1446ddda2(&local_38,"def_globals_weekly",0);
    if (DAT_14c9a17d8 != (longlong *)0x0) {
      (**(code **)(*DAT_14c9a17d8 + 0x2a0))(DAT_14c9a17d8,plVar1,&local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14435ce0a:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 14435ce32 FUN_14435ce32 body=333 status=ok
// SIG undefined FUN_14435ce32(void)

undefined8 * FUN_14435ce32(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b9595c0;
  local_50 = "BMVM";
  local_48 = 4;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[4] = (ulonglong)uVar1;
  local_50 = "TrueBoss";
  local_48 = 8;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[5] = (ulonglong)uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  local_50 = "TraitMission";
  local_48 = 0xc;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[8] = (ulonglong)uVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  local_50 = "TraitMissionTraits";
  local_48 = 0x12;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[0xb] = (ulonglong)uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_50 = "TraitMissionReward";
  local_48 = 0x12;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[0xe] = (ulonglong)uVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435cf80 FUN_14435cf80 body=52 status=ok
// SIG undefined FUN_14435cf80(void)

ulonglong FUN_14435cf80(uint param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_1441cfb9a();
    if (lVar1 != 0) {
      uVar2 = FUN_14435cfb4(lVar1,(ulonglong)param_1);
      return uVar2;
    }
  }
  return (ulonglong)param_1;
}



// FUNCTION 14435cfb4 FUN_14435cfb4 body=180 status=ok
// SIG undefined FUN_14435cfb4(void)

undefined4 FUN_14435cfb4(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = FUN_14435cd47();
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar2 = *(longlong *)(lVar2 + 0x20);
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x20) == lVar2) {
          if ((undefined8 *)(lVar3 + 8) == (undefined8 *)0x0 || lVar3 == 0) {
            return param_2;
          }
          if (*(int *)(lVar3 + 0x10) == 0) {
            return param_2;
          }
          return **(undefined4 **)(lVar3 + 8);
        }
        iVar5 = *(int *)(lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  return param_2;
}



// FUNCTION 14435d068 FUN_14435d068 body=144 status=ok
// SIG undefined FUN_14435d068(void)

undefined8 * FUN_14435d068(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = FUN_1441cfb9a();
    if (lVar2 != 0) {
      FUN_14435d0f8(lVar2,param_1,param_2);
      goto LAB_14435d0bb;
    }
  }
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c134f8(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
  }
LAB_14435d0bb:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14435d0f8 FUN_14435d0f8 body=443 status=ok
// SIG undefined FUN_14435d0f8(void)

longlong * FUN_14435d0f8(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  
  lVar12 = FUN_14435cd47();
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar13 = *(longlong *)(lVar12 + 0x28);
    uVar4 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar15 = (uint)lVar13 & 0xffff;
    lVar14 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x70);
    }
    uVar18 = (ulonglong)
             (*(int *)(param_1 + 0x78) - 1U &
             (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar15) +
             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4));
    iVar20 = *(int *)(lVar14 + uVar18 * 4);
    if (iVar20 != -1) {
      lVar19 = *(longlong *)(param_1 + 0x30);
      do {
        if (*(longlong *)(lVar19 + (longlong)iVar20 * 0x20) == lVar13) {
          *param_2 = 0;
          param_2[1] = 0;
          iVar20 = *(int *)(lVar14 + uVar18 * 4);
          goto LAB_14435d1d4;
        }
        iVar20 = *(int *)((longlong)iVar20 * 0x20 + lVar19 + 0x18);
      } while (iVar20 != -1);
    }
  }
  *param_2 = 0;
  iVar20 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_2 + 1) = iVar20;
  if ((longlong)iVar20 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  FUN_148c134f8(param_2,iVar20,0);
  memcpy((void *)*param_2,_Src,(longlong)iVar20 * 0x30);
  return param_2;
LAB_14435d1d4:
  if (iVar20 == -1) {
    lVar14 = 0;
LAB_14435d1f1:
    if ((longlong)*(int *)(lVar14 + 0x10) != 0) {
      piVar21 = *(int **)(lVar14 + 8);
      piVar1 = piVar21 + (longlong)*(int *)(lVar14 + 0x10) * 6;
      lVar13 = 0;
      do {
        iVar20 = *piVar21;
        if ((-1 < (longlong)iVar20) && (iVar20 < *(int *)(lVar12 + 0x38))) {
          lVar14 = (longlong)iVar20 * 0x10;
          lVar19 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x30) + 8 + lVar14);
          if (lVar19 != 0) {
            lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + lVar14);
            lVar17 = 0;
            do {
              iVar20 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar20 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
                FUN_144360fc0(param_2,iVar20);
                lVar13 = *param_2;
              }
              puVar2 = (undefined4 *)(lVar14 + lVar17);
              lVar16 = (longlong)iVar20 * 0x30;
              uVar5 = *puVar2;
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              uVar9 = *(undefined8 *)(puVar2 + 4);
              uVar10 = *(undefined8 *)(puVar2 + 6);
              uVar11 = *(undefined8 *)(puVar2 + 10);
              puVar3 = (undefined8 *)(lVar13 + 0x20 + lVar16);
              *puVar3 = *(undefined8 *)(puVar2 + 8);
              puVar3[1] = uVar11;
              puVar3 = (undefined8 *)(lVar13 + 0x10 + lVar16);
              *puVar3 = uVar9;
              puVar3[1] = uVar10;
              puVar2 = (undefined4 *)(lVar13 + lVar16);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              lVar17 = lVar17 + 0x30;
            } while (lVar19 * 0x30 != lVar17);
          }
        }
        piVar21 = piVar21 + 6;
      } while (piVar21 != piVar1);
    }
    return param_2;
  }
  lVar14 = lVar19 + (longlong)iVar20 * 0x20;
  if (*(longlong *)(lVar19 + (longlong)iVar20 * 0x20) == lVar13) goto LAB_14435d1f1;
  iVar20 = *(int *)(lVar14 + 0x18);
  goto LAB_14435d1d4;
}



// FUNCTION 14435d2b4 FUN_14435d2b4 body=214 status=ok
// SIG undefined FUN_14435d2b4(void)

longlong FUN_14435d2b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = FUN_14435cd47();
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar1 = *(longlong *)(lVar3 + 0x40);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x20) == lVar1) {
          if ((undefined8 *)(lVar4 + 8) == (undefined8 *)0x0 || lVar4 == 0) {
            return param_2;
          }
          if (*(int *)(lVar4 + 0x10) == 0) {
            return param_2;
          }
          iVar6 = **(int **)(lVar4 + 8);
          if ((longlong)iVar6 < 0) {
            return param_2;
          }
          if (*(int *)(lVar3 + 0x50) <= iVar6) {
            return param_2;
          }
          return (longlong)iVar6 * 0x10 + *(longlong *)(lVar3 + 0x48);
        }
        iVar6 = *(int *)(lVar4 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return param_2;
}



// FUNCTION 14435d38a FUN_14435d38a body=55 status=ok
// SIG undefined FUN_14435d38a(void)

undefined8 FUN_14435d38a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_1441cfb9a();
    if (lVar1 != 0) {
      uVar2 = FUN_14435d3c2(lVar1,param_1);
      return uVar2;
    }
  }
  return param_1;
}



// FUNCTION 14435d3c2 FUN_14435d3c2 body=214 status=ok
// SIG undefined FUN_14435d3c2(void)

longlong FUN_14435d3c2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = FUN_14435cd47();
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar1 = *(longlong *)(lVar3 + 0x58);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x70);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x20) == lVar1) {
          if ((undefined8 *)(lVar4 + 8) == (undefined8 *)0x0 || lVar4 == 0) {
            return param_2;
          }
          if (*(int *)(lVar4 + 0x10) == 0) {
            return param_2;
          }
          iVar6 = **(int **)(lVar4 + 8);
          if ((longlong)iVar6 < 0) {
            return param_2;
          }
          if (*(int *)(lVar3 + 0x68) <= iVar6) {
            return param_2;
          }
          return (longlong)iVar6 * 0x10 + *(longlong *)(lVar3 + 0x60);
        }
        iVar6 = *(int *)(lVar4 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return param_2;
}



// FUNCTION 14435d498 FUN_14435d498 body=146 status=ok
// SIG undefined FUN_14435d498(void)

undefined8 * FUN_14435d498(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = FUN_1441cfb9a();
    if (lVar2 != 0) {
      FUN_14435d52a(lVar2,param_1,param_2);
      goto LAB_14435d4e8;
    }
  }
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  lVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1487816c8(param_1,iVar1,0);
    FUN_148781737(*param_1,lVar2,iVar1);
  }
LAB_14435d4e8:
  FUN_140741dda(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14435d52a FUN_14435d52a body=343 status=ok
// SIG undefined FUN_14435d52a(void)

longlong * FUN_14435d52a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  lVar3 = FUN_14435cd47();
  *param_2 = 0;
  iVar7 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_2 + 1) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1487816c8(param_2,iVar7,0);
    FUN_148781737(*param_2,uVar2,iVar7);
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar4 = *(longlong *)(lVar3 + 0x70);
    uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    lVar5 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 0x20) == lVar4) {
          if ((undefined8 *)(lVar5 + 8) == (undefined8 *)0x0 || lVar5 == 0) {
            return param_2;
          }
          if (*(int *)(lVar5 + 0x10) == 0) {
            return param_2;
          }
          iVar7 = **(int **)(lVar5 + 8);
          if ((longlong)iVar7 < 0) {
            return param_2;
          }
          if (*(int *)(lVar3 + 0x80) <= iVar7) {
            return param_2;
          }
          lVar3 = *(longlong *)(lVar3 + 0x78);
          lVar4 = (longlong)iVar7 * 0x10;
          uVar1 = *(uint *)(lVar3 + 8 + lVar4);
          if (uVar1 == 0) {
            return param_2;
          }
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + uVar1;
          if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar7) < uVar1) {
            FUN_148913a34(param_2,iVar7);
          }
          FUN_148781737((longlong)iVar7 * 0x58 + *param_2,*(undefined8 *)(lVar3 + lVar4),uVar1);
          return param_2;
        }
        iVar7 = *(int *)(lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  return param_2;
}



// FUNCTION 14435d682 FUN_14435d682 body=122 status=ok
// SIG undefined FUN_14435d682(void)

undefined4 * FUN_14435d682(undefined4 *param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_3);
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 * 2);
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  return param_1;
}



// FUNCTION 14435d6fc FUN_14435d6fc body=3472 status=ok
// SIG undefined FUN_14435d6fc(void)

void FUN_14435d6fc(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int *piVar21;
  longlong *plVar22;
  uint *puVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  int *local_108;
  int *local_100;
  longlong local_f8;
  longlong local_f0;
  int *local_e8;
  int *local_e0;
  int *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 local_9c;
  undefined4 local_98 [2];
  longlong *local_90;
  code *local_88;
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_2 != 0) {
    plVar22 = (longlong *)(param_1 + 0x30);
    iVar26 = *(int *)(param_1 + 0x78);
    local_120 = param_1;
    local_118 = plVar22;
    if (iVar26 < 2) {
      lVar10 = param_1 + 0x68;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x70);
      }
      iVar27 = iVar26 + 3;
      if (-1 < iVar26) {
        iVar27 = iVar26;
      }
      if (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100) < iVar27 >> 2) {
        iVar26 = *(int *)(param_1 + 0x58);
        if (iVar26 == 0) {
          uVar24 = 1;
          iVar15 = 0;
          uVar14 = 0;
          iVar27 = 0;
        }
        else {
          puVar23 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar23 = (uint *)(param_1 + 0x40);
          }
          uVar25 = *puVar23;
          if (uVar25 == 0) {
            iVar27 = iVar26 + 0x1e;
            if (-1 < iVar26 + -1) {
              iVar27 = iVar26 + -1;
            }
            uVar14 = 0;
            uVar24 = (ulonglong)(uint)(iVar27 >> 5);
            if (iVar27 >> 5 < 1) {
              uVar24 = uVar14;
            }
            iVar15 = 0;
            do {
              if (uVar24 == uVar14) goto LAB_14435d861;
              iVar15 = iVar15 + 0x20;
              uVar25 = puVar23[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar25 == 0);
          }
          else {
            iVar15 = 0;
            uVar14 = 0;
          }
          uVar24 = (ulonglong)(-uVar25 & uVar25);
          uVar1 = uVar24 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar27 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar26 <= iVar27) {
            iVar27 = iVar26;
          }
        }
        if (iVar27 != iVar26) {
          uVar25 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar10 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x30) + 0x1c + (longlong)iVar27 * 0x20) * 4)
                 = 0xffffffff;
            uVar25 = ~(uint)uVar24 & uVar25;
            puVar23 = *(uint **)(param_1 + 0x50);
            if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
              puVar23 = (uint *)(param_1 + 0x40);
            }
            iVar5 = *(int *)(param_1 + 0x58);
            iVar27 = (int)uVar14;
            lVar17 = (longlong)iVar27;
            uVar9 = puVar23[lVar17] & uVar25;
            if (uVar9 == 0) {
              iVar18 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar18 = iVar5 + -1;
              }
              iVar18 = iVar18 >> 5;
              iVar15 = iVar15 + 0x20;
              iVar19 = iVar18;
              if (iVar18 < iVar27) {
                iVar19 = iVar27;
              }
              if (iVar27 < iVar18) {
                lVar20 = 0;
                do {
                  uVar9 = puVar23[lVar17 + lVar20 + 1];
                  if (uVar9 != 0) {
                    uVar14 = (ulonglong)(iVar27 + (int)lVar20 + 1);
                    uVar25 = 0xffffffff;
                    goto LAB_14435e232;
                  }
                  iVar15 = iVar15 + 0x20;
                  lVar20 = lVar20 + 1;
                } while (iVar19 - lVar17 != lVar20);
                uVar25 = 0xffffffff;
                iVar27 = iVar19;
              }
              uVar14 = (ulonglong)(iVar27 + 1);
              iVar27 = iVar5;
            }
            else {
LAB_14435e232:
              uVar24 = (ulonglong)(-uVar9 & uVar9);
              uVar1 = uVar24 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar27 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar5 <= iVar27) {
                iVar27 = iVar5;
              }
            }
          } while (iVar27 != iVar26);
        }
      }
      else if (iVar26 == 1) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lVar10 + lVar17 * 4) = 0xffffffff;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(param_1 + 0x78));
      }
LAB_14435d861:
      FUN_1440a6ab0(plVar22);
    }
    else {
      FUN_1440a6ab0(plVar22);
      *(undefined4 *)(param_1 + 0x78) = 1;
      FUN_144360622(plVar22);
    }
    lVar10 = FUN_14435cd47();
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      lVar17 = *(longlong *)(param_2 + 0x20);
      local_f8 = (longlong)*(int *)(param_2 + 0x28) * 0x38 + lVar17;
      local_108 = (int *)(lVar10 + 0x80);
      local_100 = (int *)(lVar10 + 0x68);
      local_e8 = (int *)(lVar10 + 0x50);
      local_e0 = (int *)(lVar10 + 0x38);
      local_110 = local_120 + 0x68;
      local_f0 = lVar10;
      do {
        iVar26 = *(int *)(lVar17 + 0x30);
        if (0 < iVar26) {
          lVar20 = 0;
          do {
            fVar2 = *(float *)(*(longlong *)(lVar17 + 0x28) + 0x20 + lVar20 * 0x28);
            iVar27 = (int)ROUND(fVar2 + fVar2 + 0.5) >> 1;
            if (-1 < iVar27) {
              lVar16 = *(longlong *)(*(longlong *)(lVar17 + 0x28) + lVar20 * 0x28);
              lVar11 = FUN_14435cd47();
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cbe81a0) &&
                 (FUN_144b3d300(&DAT_14cbe81a0), DAT_14cbe81a0 == -1)) {
                uVar6 = *(undefined8 *)(lVar11 + 0x28);
                DAT_14cbe8190 = (undefined8 *)0x0;
                DAT_14cbe8198 = 1;
                FUN_1401b309e(&DAT_14cbe8190,1,0);
                *DAT_14cbe8190 = uVar6;
                atexit((_func_5014 *)&LAB_14435e48d);
                _Init_thread_footer(&DAT_14cbe81a0);
              }
              puVar28 = DAT_14cbe8190;
              local_88 = (code *)0x0;
              lVar11 = (longlong)DAT_14cbe8198;
              local_80 = (longlong *)CONCAT44(local_80._4_4_,DAT_14cbe8198);
              bVar29 = false;
              if (lVar11 != 0) {
                FUN_1401b309e(&local_88,DAT_14cbe8198,0);
                memcpy(local_88,puVar28,lVar11 << 3);
                if ((longlong)(int)local_80 != 0) {
                  lVar11 = 0;
                  do {
                    bVar29 = *(longlong *)(local_88 + lVar11) == lVar16;
                    if (bVar29) break;
                    bVar30 = (longlong)(int)local_80 * 8 + -8 != lVar11;
                    lVar11 = lVar11 + 8;
                  } while (bVar30);
                }
                if (local_88 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              if ((lVar20 == 0) || (bVar29)) {
                if (lVar16 == *(longlong *)(lVar10 + 0x20)) {
                  lVar11 = FUN_14088c018();
                  piVar12 = (int *)(lVar11 + 0x30);
                }
                else {
                  piVar12 = local_e0;
                  if ((((lVar16 != *(longlong *)(lVar10 + 0x28)) &&
                       (piVar12 = local_e8, lVar16 != *(longlong *)(lVar10 + 0x40))) &&
                      (piVar12 = local_100, lVar16 != *(longlong *)(lVar10 + 0x58))) &&
                     (piVar12 = local_108, lVar16 != *(longlong *)(lVar10 + 0x70)))
                  goto LAB_14435df94;
                }
                plVar22 = local_118;
                if (iVar27 < *piVar12) {
                  if (bVar29) {
                    uVar25 = (uint)((ulonglong)lVar16 >> 0x10);
                    uVar9 = (uint)lVar16 & 0xffff;
                    uVar25 = ((uint)lVar16 << 0x10 | uVar9) + (int)((ulonglong)lVar16 >> 0x20) +
                             (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar9 >> 4);
                    if (*(int *)(local_120 + 0x38) != *(int *)(local_120 + 100)) {
                      lVar10 = *(longlong *)(local_120 + 0x70);
                      if (*(longlong *)(local_120 + 0x70) == 0) {
                        lVar10 = local_110;
                      }
                      iVar26 = *(int *)(lVar10 + (ulonglong)
                                                 (*(int *)(local_120 + 0x78) - 1U & uVar25) * 4);
                      if (iVar26 != -1) {
                        do {
                          lVar10 = *local_118 + (longlong)iVar26 * 0x20;
                          if (*(longlong *)(*local_118 + (longlong)iVar26 * 0x20) == lVar16) {
                            if (lVar10 != 0) goto LAB_14435de12;
                            break;
                          }
                          iVar26 = *(int *)(lVar10 + 0x18);
                        } while (iVar26 != -1);
                      }
                    }
                    FUN_1443608c2(local_118,&local_88);
                    plVar7 = local_80;
                    *local_80 = lVar16;
                    local_80[1] = 0;
                    local_80[2] = 0;
                    FUN_1440a6cba(0,0);
                    *(undefined4 *)(plVar7 + 3) = 0xffffffff;
                    iVar26 = (int)local_88;
                    cVar8 = FUN_144360b7a(plVar22,uVar25,plVar7,&local_88);
                    if (cVar8 == '\0') {
                      uVar9 = *(int *)(local_120 + 0x38) - *(int *)(local_120 + 100);
                      iVar15 = 1;
                      if (3 < uVar9) {
                        uVar14 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
                        lVar10 = 0x3f;
                        if (uVar14 != 0) {
                          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                          }
                        }
                        iVar15 = 1 << ((byte)lVar10 & 0x1f);
                      }
                      plVar22 = local_118;
                      if (((int)uVar9 < 1) || (iVar15 <= *(int *)(local_120 + 0x78))) {
                        uVar25 = *(int *)(local_120 + 0x78) - 1U & uVar25;
                        *(uint *)((longlong)plVar7 + 0x1c) = uVar25;
                        lVar10 = *(longlong *)(local_120 + 0x70);
                        if (*(longlong *)(local_120 + 0x70) == 0) {
                          lVar10 = local_110;
                        }
                        *(undefined4 *)(plVar7 + 3) =
                             *(undefined4 *)
                              (lVar10 + ((longlong)*(int *)(local_120 + 0x78) - 1U &
                                        (longlong)(int)uVar25) * 4);
                        lVar10 = *(longlong *)(local_120 + 0x70);
                        if (*(longlong *)(local_120 + 0x70) == 0) {
                          lVar10 = local_110;
                        }
                        *(int *)(lVar10 + ((longlong)*(int *)(local_120 + 0x78) - 1U &
                                          (longlong)(int)uVar25) * 4) = iVar26;
                      }
                      else {
                        *(int *)(local_120 + 0x78) = iVar15;
                        FUN_144360622(local_118);
                      }
                    }
                    lVar10 = *plVar22 + (longlong)iVar26 * 0x20;
LAB_14435de12:
                    puVar28 = (undefined8 *)(lVar10 + 8);
                    local_b0 = *(longlong **)(lVar17 + 0x18);
                    if (local_b0 != (longlong *)0x0) {
                      (**(code **)(*local_b0 + 8))();
                    }
                    local_a8 = *(undefined4 *)(lVar17 + 0x20);
                    FUN_14435d682(&local_88,iVar27);
                    piVar12 = (int *)*puVar28;
                    lVar16 = (longlong)*(int *)(lVar10 + 0x10);
                    if (lVar16 != 0) {
                      local_d8 = piVar12 + lVar16 * 6;
                      piVar21 = piVar12;
LAB_14435de86:
                      if (*piVar21 != (int)local_88) goto LAB_14435def2;
                      if (piVar21[4] == (int)local_78) {
                        if (1 < (int)local_78) {
                          lVar11 = 0;
                          do {
                            uVar3 = *(ushort *)(*(longlong *)(piVar21 + 2) + lVar11);
                            uVar4 = *(ushort *)((longlong)local_80 + lVar11);
                            if (uVar3 == uVar4) {
                              if (uVar3 == 0) break;
                            }
                            else {
                              if (0x7f < (uVar4 | uVar3)) {
                                iVar26 = (uint)uVar3 - (uint)uVar4;
                                goto LAB_14435dee3;
                              }
                              if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4])
                              goto code_r0x00014435dee0;
                            }
                            lVar11 = lVar11 + 2;
                          } while( true );
                        }
                      }
                      else if (piVar21[4] + (int)local_78 != 1) goto LAB_14435def2;
                      goto LAB_14435df07;
                    }
LAB_14435df1b:
                    uVar25 = *(int *)(lVar10 + 0x10) + 1;
                    *(uint *)(lVar10 + 0x10) = uVar25;
                    if (*(uint *)(lVar10 + 0x14) < uVar25) {
                      FUN_144360c8e(puVar28);
                      piVar12 = (int *)*puVar28;
                    }
                    piVar12[lVar16 * 6] = (int)local_88;
                    (piVar12 + lVar16 * 6 + 2)[0] = 0;
                    (piVar12 + lVar16 * 6 + 2)[1] = 0;
                    *(longlong **)(piVar12 + lVar16 * 6 + 2) = local_80;
                    local_80 = (longlong *)0x0;
                    piVar12[lVar16 * 6 + 4] = (int)local_78;
                    piVar12[lVar16 * 6 + 5] = local_78._4_4_;
                    local_78 = 0;
LAB_14435df82:
                    lVar10 = local_f0;
                    if (local_80 != (longlong *)0x0) {
                      FUN_1400020a8();
                      lVar10 = local_f0;
                    }
                  }
                  else {
                    local_d0 = *(longlong **)(lVar17 + 0x18);
                    if (local_d0 != (longlong *)0x0) {
                      (**(code **)(*local_d0 + 8))();
                    }
                    local_c8 = *(undefined4 *)(lVar17 + 0x20);
                    FUN_14435d682(&local_88,iVar27,&local_d0);
                    local_c0 = 0;
                    local_b8._0_4_ = 1;
                    FUN_144360dfa(&local_c0,1);
                    FUN_144360f36(local_c0,&local_88,1);
                    plVar22 = local_118;
                    FUN_1443608c2(local_118,local_98);
                    plVar7 = local_90;
                    *local_90 = lVar16;
                    local_90[1] = local_c0;
                    local_c0 = 0;
                    *(undefined4 *)(local_90 + 2) = (undefined4)local_b8;
                    *(undefined4 *)((longlong)local_90 + 0x14) = local_b8._4_4_;
                    local_b8 = 0;
                    *(undefined4 *)(local_90 + 3) = 0xffffffff;
                    local_9c = local_98[0];
                    lVar16 = *local_90;
                    uVar25 = (uint)((ulonglong)lVar16 >> 0x10);
                    uVar9 = (uint)lVar16 & 0xffff;
                    uVar25 = ((uint)lVar16 << 0x10 | uVar9) + (int)((ulonglong)lVar16 >> 0x20) +
                             (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar9 >> 4);
                    cVar8 = FUN_144360b7a(plVar22,uVar25,local_90,&local_9c);
                    if (cVar8 == '\0') {
                      uVar9 = *(int *)(local_120 + 0x38) - *(int *)(local_120 + 100);
                      iVar26 = 1;
                      if (3 < uVar9) {
                        uVar14 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
                        lVar16 = 0x3f;
                        if (uVar14 != 0) {
                          for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        iVar26 = 1 << ((byte)lVar16 & 0x1f);
                      }
                      if (((int)uVar9 < 1) || (iVar26 <= *(int *)(local_120 + 0x78))) {
                        uVar25 = *(int *)(local_120 + 0x78) - 1U & uVar25;
                        *(uint *)((longlong)plVar7 + 0x1c) = uVar25;
                        lVar16 = *(longlong *)(local_120 + 0x70);
                        if (*(longlong *)(local_120 + 0x70) == 0) {
                          lVar16 = local_110;
                        }
                        *(undefined4 *)(plVar7 + 3) =
                             *(undefined4 *)
                              (lVar16 + ((longlong)*(int *)(local_120 + 0x78) - 1U &
                                        (longlong)(int)uVar25) * 4);
                        lVar16 = *(longlong *)(local_120 + 0x70);
                        if (*(longlong *)(local_120 + 0x70) == 0) {
                          lVar16 = local_110;
                        }
                        *(undefined4 *)
                         (lVar16 + ((longlong)*(int *)(local_120 + 0x78) - 1U &
                                   (longlong)(int)uVar25) * 4) = local_9c;
                      }
                      else {
                        *(int *)(local_120 + 0x78) = iVar26;
                        FUN_144360622(local_118);
                      }
                    }
                    FUN_1440a6cba(local_c0);
                    if (local_c0 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_80 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
LAB_14435df94:
              iVar26 = *(int *)(lVar17 + 0x30);
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < iVar26);
        }
        lVar17 = lVar17 + 0x38;
      } while (lVar17 != local_f8);
    }
    if (DAT_14cb0d2b0 != 0) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        puVar13 = *(undefined8 **)(DAT_14cb0d2b0 + 0x1148);
        puVar28 = puVar13 + *(int *)(DAT_14cb0d2b0 + 0x1150);
        lVar10 = 0;
LAB_14435e050:
        do {
          if (lVar10 == 0) {
            if (*(char *)*puVar13 != '\x01') {
              puVar13 = puVar13 + 1;
              lVar10 = 0;
              if (puVar13 == puVar28) goto LAB_14435e0b8;
              goto LAB_14435e050;
            }
            lVar10 = *(longlong *)((char *)*puVar13 + 0x360);
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar28);
        if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x170), lVar10 != 0)) {
          lVar17 = FUN_140425b9a();
          if ((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) {
            FUN_1441452f6(lVar10);
          }
        }
      }
LAB_14435e0b8:
      if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
        puVar13 = *(undefined8 **)(DAT_14cb0d2b0 + 0x1148);
        puVar28 = puVar13 + *(int *)(DAT_14cb0d2b0 + 0x1150);
        lVar10 = 0;
LAB_14435e0e5:
        do {
          if (lVar10 == 0) {
            if (*(char *)*puVar13 != '\x01') {
              puVar13 = puVar13 + 1;
              lVar10 = 0;
              if (puVar13 == puVar28) goto LAB_14435e15e;
              goto LAB_14435e0e5;
            }
            lVar10 = *(longlong *)((char *)*puVar13 + 0x360);
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar28);
        if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x178) != 0)) {
          lVar20 = FUN_14030d660();
          lVar17 = *(longlong *)(lVar10 + 0x178);
          if (((lVar17 != 0) &&
              (((lVar20 != 0 && (lVar16 = *(longlong *)(lVar17 + 0x10), lVar16 != 0)) &&
               (*(int *)(lVar20 + 0x38) <= *(int *)(lVar16 + 0x38))))) &&
             ((*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8)
               == lVar20 + 0x30 && (lVar17 = *(longlong *)(lVar17 + 0x488), lVar17 != 0)))) {
            if (DAT_14cbae3d8 == 0) {
              local_140 = &local_88;
              local_88 = FUN_141030f22;
              local_130 = FUN_14081d0ea;
              local_138 = &LAB_1464f5fc4;
              local_148 = &LAB_148c3dd26;
              local_150 = &LAB_1459673ba;
              local_158 = L"Engine";
              local_160 = 0;
              local_168 = 0x10000004;
              local_170 = 0x10;
              local_178 = 0x1360;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            }
            if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
              cVar8 = FUN_1441fe9ce(lVar17);
              if (cVar8 != '\0') {
                FUN_1441feb12(lVar17);
              }
              if (((*(longlong *)(lVar10 + 0x1f0) != 0) && (lVar10 = FUN_140704886(), lVar10 != 0))
                 && (iVar26 = *(int *)(lVar10 + 0x130), (longlong)iVar26 != 0)) {
                lVar10 = *(longlong *)(lVar10 + 0x128);
                lVar17 = 0;
                do {
                  iVar27 = *(int *)(lVar10 + 4 + lVar17);
                  if ((((iVar27 != 0) && (uVar25 = *(uint *)(lVar10 + lVar17), -1 < (int)uVar25)) &&
                      (((int)uVar25 < DAT_14c9647dc &&
                       ((plVar22 = (longlong *)
                                   ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
                        plVar22 != (longlong *)0x0 && ((int)plVar22[2] == iVar27)))))) &&
                     (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 &&
                      (((((lVar20 = *plVar22, lVar20 != 0 && (*(int *)(lVar20 + 0x271c) != 0)) &&
                         (uVar25 = *(uint *)(lVar20 + 0x2718), -1 < (int)uVar25)) &&
                        (((int)uVar25 < DAT_14c9647dc &&
                         (plVar22 = (longlong *)
                                    ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
                         plVar22 != (longlong *)0x0)))) &&
                       (((int)plVar22[2] == *(int *)(lVar20 + 0x271c) &&
                        (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 && (*plVar22 != 0)))))))))) {
                    FUN_14434a2e8(*plVar22,0xbf800000);
                  }
                  lVar17 = lVar17 + 8;
                } while ((longlong)iVar26 * 8 != lVar17);
              }
            }
          }
        }
      }
    }
  }
LAB_14435e15e:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014435dee0:
  iVar26 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_14435dee3:
  if (iVar26 == 0) {
LAB_14435df07:
    if ((int)((ulonglong)((longlong)piVar21 - (longlong)piVar12) >> 3) * -0x55555555 != -1)
    goto LAB_14435df82;
    goto LAB_14435df1b;
  }
LAB_14435def2:
  piVar21 = piVar21 + 6;
  if (piVar21 == local_d8) goto LAB_14435df1b;
  goto LAB_14435de86;
}



// FUNCTION 14435e49e FUN_14435e49e body=351 status=ok
// SIG undefined FUN_14435e49e(void)

undefined8 * FUN_14435e49e(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if (param_4 == 0) {
    local_40 = FUN_14143f70a();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_40);
    }
    param_4 = FUN_143f7ada4(param_2,&local_40);
    if (param_4 != 0) goto LAB_14435e509;
  }
  else {
LAB_14435e509:
    if ((*(longlong *)(param_4 + 0x3d0) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_4 + 0x3d0) + 0x28), lVar1 != 0)) {
      lVar2 = FUN_14143f70a();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1402a10ba(&local_40,param_2,param_4,param_3);
        if ((local_40._1_1_ != '\0') && ((int)(uint)(byte)local_40 < *(int *)(lVar1 + 0x68))) {
          lVar1 = *(longlong *)(lVar1 + 0x60);
          uVar4 = (ulonglong)((uint)(byte)local_40 * 0x30);
          *param_1 = *(undefined8 *)(lVar1 + uVar4);
          uVar3 = FUN_14477b664(*(undefined8 *)(lVar1 + 8 + uVar4));
          uVar3 = FUN_14477b664(uVar3);
          param_1[1] = uVar3;
          param_1[2] = *(undefined8 *)(lVar1 + 0x10 + uVar4);
          goto LAB_14435e5ae;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_14435e5ae:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14435e60a FUN_14435e60a body=201 status=ok
// SIG undefined FUN_14435e60a(void)

ulonglong FUN_14435e60a(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  char local_30 [4];
  undefined8 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140114204(param_1 + 0x188);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (cVar1 != '\0') {
    local_30[0] = '\0';
    local_2c = 0;
    local_24 = 0;
    if (param_2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x180))(param_2);
    }
    uVar5 = 0;
    lVar4 = FUN_140149a73(uVar3,0);
    if (lVar4 != 0) {
      uVar5 = 0;
      FUN_14039fc7b(param_1 + 0x188,local_30,lVar4,0);
      if (local_30[0] != '\0') {
        if (local_30[0] == '\x01') {
          uVar5 = (ulonglong)(local_24 != 0);
        }
        else {
          uVar2 = FUN_140321d1a(local_30);
          uVar5 = (ulonglong)uVar2;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435e6d4 FUN_14435e6d4 body=18 status=ok
// SIG undefined FUN_14435e6d4(void)

undefined1 FUN_14435e6d4(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  return *(undefined1 *)(lVar1 + 3);
}



// FUNCTION 14435e75e FUN_14435e75e body=29 status=ok
// SIG undefined FUN_14435e75e(void)

undefined8 FUN_14435e75e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435e77c FUN_14435e77c body=31 status=ok
// SIG undefined FUN_14435e77c(void)

undefined8 FUN_14435e77c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435e836 FUN_14435e836 body=31 status=ok
// SIG undefined FUN_14435e836(void)

undefined8 FUN_14435e836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435e938 FUN_14435e938 body=31 status=ok
// SIG undefined FUN_14435e938(void)

undefined8 FUN_14435e938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435e9a6 FUN_14435e9a6 body=31 status=ok
// SIG undefined FUN_14435e9a6(void)

undefined8 FUN_14435e9a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435ea60 FUN_14435ea60 body=31 status=ok
// SIG undefined FUN_14435ea60(void)

undefined8 FUN_14435ea60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435eace FUN_14435eace body=31 status=ok
// SIG undefined FUN_14435eace(void)

undefined8 FUN_14435eace(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435ebdc FUN_14435ebdc body=29 status=ok
// SIG undefined FUN_14435ebdc(void)

undefined8 FUN_14435ebdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435ed78 FUN_14435ed78 body=93 status=ok
// SIG undefined FUN_14435ed78(void)

void FUN_14435ed78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435edd6 FUN_14435edd6 body=93 status=ok
// SIG undefined FUN_14435edd6(void)

void FUN_14435edd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435ee34 FUN_14435ee34 body=126 status=ok
// SIG undefined FUN_14435ee34(void)

void FUN_14435ee34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1460;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435eea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435eebe FUN_14435eebe body=275 status=ok
// SIG undefined FUN_14435eebe(void)

undefined8 FUN_14435eebe(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_14435efcb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14435efcb;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14435efcb:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14435ef7e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140e2bea2(*(undefined8 *)(param_1 + 0x20),param_3);
      uVar6 = 1;
      goto LAB_14435ef7e;
    }
  }
  uVar6 = 0;
LAB_14435ef7e:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435efd2 FUN_14435efd2 body=29 status=ok
// SIG undefined FUN_14435efd2(void)

undefined8 FUN_14435efd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435f16e FUN_14435f16e body=93 status=ok
// SIG undefined FUN_14435f16e(void)

void FUN_14435f16e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e14d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435f1cc FUN_14435f1cc body=93 status=ok
// SIG undefined FUN_14435f1cc(void)

void FUN_14435f1cc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e14d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435f22a FUN_14435f22a body=126 status=ok
// SIG undefined FUN_14435f22a(void)

void FUN_14435f22a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e14d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435f299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435f2bc FUN_14435f2bc body=280 status=ok
// SIG undefined FUN_14435f2bc(void)

undefined8 FUN_14435f2bc(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14435f3ce;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14435f3ce;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14435f3ce:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14435f381;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140e2bccc(param_2,*(longlong *)(param_1 + 0x20) + 0xf0);
      uVar6 = 1;
      goto LAB_14435f381;
    }
  }
  uVar6 = 0;
LAB_14435f381:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435f3d6 FUN_14435f3d6 body=29 status=ok
// SIG undefined FUN_14435f3d6(void)

undefined8 FUN_14435f3d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435f572 FUN_14435f572 body=93 status=ok
// SIG undefined FUN_14435f572(void)

void FUN_14435f572(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435f5d0 FUN_14435f5d0 body=93 status=ok
// SIG undefined FUN_14435f5d0(void)

void FUN_14435f5d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9e1540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14435f62e FUN_14435f62e body=126 status=ok
// SIG undefined FUN_14435f62e(void)

void FUN_14435f62e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1540;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435f69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435f6c0 FUN_14435f6c0 body=280 status=ok
// SIG undefined FUN_14435f6c0(void)

undefined8 FUN_14435f6c0(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14435f7d2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14435f7d2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14435f7d2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14435f785;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140e2bccc(param_2,*(longlong *)(param_1 + 0x20) + 0xf4);
      uVar6 = 1;
      goto LAB_14435f785;
    }
  }
  uVar6 = 0;
LAB_14435f785:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435f85e FUN_14435f85e body=29 status=ok
// SIG undefined FUN_14435f85e(void)

undefined8 FUN_14435f85e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435f87c FUN_14435f87c body=31 status=ok
// SIG undefined FUN_14435f87c(void)

undefined8 FUN_14435f87c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435f97e FUN_14435f97e body=29 status=ok
// SIG undefined FUN_14435f97e(void)

undefined8 FUN_14435f97e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435f9b0 FUN_14435f9b0 body=93 status=ok
// SIG undefined FUN_14435f9b0(void)

void FUN_14435f9b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14435fa0e FUN_14435fa0e body=93 status=ok
// SIG undefined FUN_14435fa0e(void)

void FUN_14435fa0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14435fa6c FUN_14435fa6c body=126 status=ok
// SIG undefined FUN_14435fa6c(void)

void FUN_14435fa6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1790;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435fadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435faea FUN_14435faea body=96 status=ok
// SIG undefined FUN_14435faea(void)

void FUN_14435faea(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined4 *local_40 [2];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f15fd0(local_30);
  FUN_1481b5836(local_40,param_2);
  *local_40[0] = *(undefined4 *)(local_28 + 8);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435fb4c FUN_14435fb4c body=98 status=ok
// SIG undefined FUN_14435fb4c(void)

undefined8 FUN_14435fb4c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined4 *local_40 [2];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f15fd0(local_30);
  FUN_1481b5836(local_40,param_2);
  uVar1 = *(undefined4 *)(local_28 + 8);
  *local_40[0] = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14435fbb0 FUN_14435fbb0 body=29 status=ok
// SIG undefined FUN_14435fbb0(void)

undefined8 FUN_14435fbb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435fbe2 FUN_14435fbe2 body=93 status=ok
// SIG undefined FUN_14435fbe2(void)

void FUN_14435fbe2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14435fc40 FUN_14435fc40 body=93 status=ok
// SIG undefined FUN_14435fc40(void)

void FUN_14435fc40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1800;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14435fc9e FUN_14435fc9e body=126 status=ok
// SIG undefined FUN_14435fc9e(void)

void FUN_14435fc9e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1800;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014435fd0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14435fd24 FUN_14435fd24 body=19 status=ok
// SIG undefined FUN_14435fd24(void)

undefined1 FUN_14435fd24(undefined8 param_1,undefined8 param_2)

{
  FUN_148f16064(param_2);
  return 1;
}



// FUNCTION 14435fd62 FUN_14435fd62 body=12 status=ok
// SIG undefined FUN_14435fd62(void)

void FUN_14435fd62(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014435fd6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14435fd6e FUN_14435fd6e body=29 status=ok
// SIG undefined FUN_14435fd6e(void)

undefined8 FUN_14435fd6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435fdb2 FUN_14435fdb2 body=282 status=ok
// SIG undefined FUN_14435fdb2(void)

undefined8 * FUN_14435fdb2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14435fd8b);
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



// FUNCTION 14435fecc FUN_14435fecc body=117 status=ok
// SIG undefined FUN_14435fecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14435fecc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148f1c5ae(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148f1c5ae(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014435ff37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14435ff42 FUN_14435ff42 body=108 status=ok
// SIG undefined FUN_14435ff42(void)

void FUN_14435ff42(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_148f1ce42(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14435ffcc FUN_14435ffcc body=12 status=ok
// SIG undefined FUN_14435ffcc(void)

void FUN_14435ffcc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014435ffd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14435ffd8 FUN_14435ffd8 body=29 status=ok
// SIG undefined FUN_14435ffd8(void)

undefined8 FUN_14435ffd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14435fff6 FUN_14435fff6 body=282 status=ok
// SIG undefined FUN_14435fff6(void)

undefined8 * FUN_14435fff6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14435fd8b);
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



// FUNCTION 144360110 FUN_144360110 body=117 status=ok
// SIG undefined FUN_144360110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144360110(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14435ff42(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14435ff42(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144360157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144360186 FUN_144360186 body=29 status=ok
// SIG undefined FUN_144360186(void)

undefined8 FUN_144360186(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443601b8 FUN_1443601b8 body=93 status=ok
// SIG undefined FUN_1443601b8(void)

void FUN_1443601b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144360216 FUN_144360216 body=93 status=ok
// SIG undefined FUN_144360216(void)

void FUN_144360216(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1900;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144360274 FUN_144360274 body=126 status=ok
// SIG undefined FUN_144360274(void)

void FUN_144360274(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1900;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443602e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443602fa FUN_1443602fa body=19 status=ok
// SIG undefined FUN_1443602fa(void)

undefined1 FUN_1443602fa(undefined8 param_1,undefined8 param_2)

{
  FUN_144b3bc12(param_2);
  return 1;
}



// FUNCTION 14436030e FUN_14436030e body=29 status=ok
// SIG undefined FUN_14436030e(void)

undefined8 FUN_14436030e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144360340 FUN_144360340 body=93 status=ok
// SIG undefined FUN_144360340(void)

void FUN_144360340(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436039e FUN_14436039e body=93 status=ok
// SIG undefined FUN_14436039e(void)

void FUN_14436039e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


