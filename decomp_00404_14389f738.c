// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14389f738 FUN_14389f738 body=122 status=ok
// SIG undefined FUN_14389f738(void)

void FUN_14389f738(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x98) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14389f7b2 FUN_14389f7b2 body=122 status=ok
// SIG undefined FUN_14389f7b2(void)

void FUN_14389f7b2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa8 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14389f82c FUN_14389f82c body=2238 status=ok
// SIG undefined FUN_14389f82c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14389f82c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  char *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cb242a0);
  if (cVar1 == '\0') {
    _DAT_14cb242a0 = 0;
    uRam000000014cb242a8 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb242b8 = 0;
  LOCK();
  DAT_14cb242b0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143888bd8);
  _DAT_14cb242c8 = 0;
  LOCK();
  DAT_14cb242c0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143888bdd);
  _DAT_14cb242d0 = 0x47efffffe0000000;
  _DAT_14cb242d8 = 0x47efffffe0000000;
  DAT_14cb242e0 = 0x47efffffe0000000;
  DAT_14cb242e8 = 0x47efffffe0000000;
  DAT_14cb242f0 = 0x47efffffe0000000;
  DAT_14cb242f8 = 0x47efffffe0000000;
  _DAT_14cb24300 = 0x47efffffe0000000;
  _DAT_14cb24308 = 0x47efffffe0000000;
  local_78 = "AssetRegistry";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb24310 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb246a8,L"GpsTrace",1);
  FUN_1446f470e(&local_78,L"HeldActor",1);
  FUN_14598ad7a(&DAT_14cb24318,&local_78,3);
  DAT_14cb24330 = 0;
  LOCK();
  DAT_14cb24328 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143893c0e);
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_88 = 0;
  FUN_14078dbce(&DAT_14cb24338,L"a.gbx.Perception.TickManager",&local_78,
                L"Whether the GbxPerceptionManager ticks. 0 for disabled, non-zero for enabled.");
  atexit(FUN_143893e09);
  local_88 = 0;
  FUN_1412cc41e(&DAT_14cb24350,L"PerceptionManager",0,0);
  _DAT_14cb24368 = &LAB_143896f6d;
  _DAT_14cb24370 = 0x447a4000;
  DAT_14cb24374 = 1;
  DAT_14cb24360 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb24360;
  atexit((_func_5014 *)&LAB_143896f72);
  local_78 = "MaxAge";
  local_70 = 6;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb24380 = (ulonglong)uVar2;
  local_78 = "SightRadius";
  local_70 = 0xb;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb24388 = (ulonglong)uVar2;
  local_78 = "SightHalfAngle";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb24390 = (ulonglong)uVar2;
  local_78 = "ProximityRadius";
  local_70 = 0xf;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb24398 = (ulonglong)uVar2;
  local_78 = "BulletRadius";
  local_70 = 0xc;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb243a0 = (ulonglong)uVar2;
  local_78 = "SenseFriendly";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb243a8 = (ulonglong)uVar2;
  local_78 = "SenseNeutral";
  local_70 = 0xc;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb243b0 = (ulonglong)uVar2;
  local_78 = "SenseHostile";
  local_70 = 0xc;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb243b8 = (ulonglong)uVar2;
  local_78 = "Disable";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb243c0 = (ulonglong)uVar2;
  local_78 = "PredictionAge";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb243c8 = (ulonglong)uVar2;
  _DAT_14cb243d0 = 0x47efffffe0000000;
  _DAT_14cb243d8 = 0x47efffffe0000000;
  _DAT_14cb243e0 = 0x47efffffe0000000;
  _DAT_14cb243f0 = 0x47efffffe0000000;
  _DAT_14cb243f8 = 0x47efffffe0000000;
  _DAT_14cb24400 = 0x47efffffe0000000;
  _DAT_14cb24408 = 0x47efffffe0000000;
  _DAT_14cb24410 = 0x47efffffe0000000;
  _DAT_14cb24418 = 0x47efffffe0000000;
  DAT_14cb24420 = 0x47efffffe0000000;
  local_78 = "bone";
  local_70 = 4;
  local_6c = 0;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cb24428,L"Unitialized_Targetable",1);
  FUN_1446f470e(&DAT_14cb24430,L"Invalid_Targetable",1);
  FUN_1446f470e(&DAT_14cb24438,L"NoTarget",1);
  DAT_14cb246d0 = 0;
  LOCK();
  DAT_14cb246c8 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_14389720e);
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_88 = 0;
  FUN_14078dbce(&DAT_14cb24440,L"a.gbx.Targeting.TickManager",&local_78,
                L"Whether the GbxTargetingManager ticks. 0 for disabled, non-zero for enabled.");
  atexit(FUN_143898ad3);
  local_88 = 0;
  FUN_1412cc41e(&DAT_14cb24458,L"TargetingManager",0,0);
  _DAT_14cb24470 = &LAB_14389b6b0;
  DAT_14cb24478 = 0xc;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9290 = 0x18;
    DAT_14c9a9328 = &LAB_14389b76a;
    DAT_14c9a9350 = &DAT_14494cb88;
    DAT_14c9a9330 = &LAB_141053018;
    _DAT_14c9a9338 = &LAB_14389b780;
    _DAT_14c9a9340 = &LAB_147f5ffa6;
    _DAT_14c9a9348 = &LAB_147f5ffb6;
    _DAT_14c9a92b0 = FUN_1461febe8;
    _DAT_14c9a92a8 = &LAB_147f5ffa0;
    _DAT_14c9a9360 = FUN_147f6032c;
    _DAT_14c9a93a0 = FUN_147f60354;
    _DAT_14c9a9298 = 0x3dcccccd00000000;
    uRam000000014c9a92a0 = 0x3f8000003e4ccccd;
    DAT_14c9a9321 = 0;
    DAT_14c9a9294 = 0x1e;
    _DAT_14c9a92e0 = &LAB_14389b79e;
    _DAT_14c9a92f0 = FUN_14389b7ac;
  }
  else {
    _DAT_14cb24468 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb24468;
  }
  DAT_14cb244e0 = 0;
  uRam000000014cb244e8 = 0;
  local_68 = 0;
  local_58 = &PTR_LAB_14a1795c0;
  local_50 = &LAB_14389f536;
  local_78 = &DAT_14011fc1e;
  FUN_1460e0c6a(&local_78);
  atexit((_func_5014 *)&LAB_14389a19b);
  ram0x00014cb24574 = 0;
  FUN_14052b5e0(&DAT_14cb24570,"Hostiles",0);
  _DAT_14cb24580 = "Hostiles";
  ram0x00014cb2458c = 0;
  FUN_14052b5e0(&DAT_14cb24588,"Friends",0);
  _DAT_14cb24598 = "Friends";
  ram0x00014cb245a4 = 0;
  FUN_14052b5e0(&DAT_14cb245a0,"Neutrals",0);
  _DAT_14cb245b0 = "Neutrals";
  local_78 = "P";
  local_70 = 1;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb245b8 = (ulonglong)uVar2;
  _DAT_14cb245c0 = 0x7f0000;
  _DAT_14cb245c8 = DAT_14cb245e8;
  DAT_14cb245e8 = &DAT_14cb245b8;
  local_78 = "PG";
  local_70 = 2;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb245d0 = (ulonglong)uVar2;
  _DAT_14cb245d8 = 0xff0080;
  _DAT_14cb245e0 = DAT_14cb245e8;
  DAT_14cb245e8 = &DAT_14cb245d0;
  _DAT_14cb246b4 = 0;
  FUN_14052b5e0(&DAT_14cb246b0,&DAT_14ac8d393,0);
  _DAT_14cb246c0 = &DAT_14ac8d393;
  _DAT_14cb245f8 = &LAB_14389a321;
  _DAT_14cb24600 = 0x43c70000;
  DAT_14cb24604 = 1;
  DAT_14cb245f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb245f0;
  atexit((_func_5014 *)&LAB_14389a326);
  _DAT_14cb24614 = 0;
  FUN_14052b5e0(&DAT_14cb24610,"Hostiles",0);
  _DAT_14cb24620 = "Hostiles";
  _DAT_14cb2462c = 0;
  FUN_14052b5e0(&DAT_14cb24628,"Friends",0);
  _DAT_14cb24638 = "Friends";
  _DAT_14cb24644 = 0;
  FUN_14052b5e0(&DAT_14cb24640,"Neutrals",0);
  _DAT_14cb24650 = "Neutrals";
  _DAT_14cb2465c = 0;
  FUN_14052b5e0(&DAT_14cb24658,"DefaultAttitudeFromOthers",0);
  _DAT_14cb24668 = "DefaultAttitudeFromOthers";
  FUN_1446f470e(&DAT_14cb24670,L"ai_target",1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a00ec FUN_1438a00ec body=270 status=ok
// SIG undefined FUN_1438a00ec(void)

void FUN_1438a00ec(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_2;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  else if (lVar5 == 0) goto LAB_1438a0122;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(lVar5);
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  uVar3 = *(uint *)(lVar5 + 0x10);
  if (*(uint *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    uVar4 = DAT_14c964868 + 1;
    bVar6 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar4);
    }
    LOCK();
    uVar3 = *(uint *)(lVar5 + 0x10);
    bVar6 = uVar3 == 0;
    if (bVar6) {
      *(uint *)(lVar5 + 0x10) = uVar4;
      uVar3 = 0;
    }
    UNLOCK();
    if (bVar6) {
      uVar3 = uVar4;
    }
  }
  local_30 = CONCAT44(uVar3,uVar1);
  FUN_147f66984(param_1 + 0x2c8,uVar1 ^ uVar3);
LAB_1438a0122:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a01fb FUN_1438a01fb body=55 status=ok
// SIG undefined FUN_1438a01fb(void)

void FUN_1438a01fb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb247d0 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb247d0 =
         FUN_14171c317(FUN_14644287a,uVar1,L"EGeometryCollectionChunkCollisionOverrideSettings");
  }
  return;
}



// FUNCTION 1438a0249 FUN_1438a0249 body=55 status=ok
// SIG undefined FUN_1438a0249(void)

void FUN_1438a0249(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb248a0 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb248a0 = FUN_14171c317(FUN_146442c76,uVar1,L"ESwapType");
  }
  return;
}



// FUNCTION 1438a0280 FUN_1438a0280 body=55 status=ok
// SIG undefined FUN_1438a0280(void)

void FUN_1438a0280(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24928 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb24928 = FUN_14171c317(FUN_146442e62,uVar1,L"EDestructionProjectileType");
  }
  return;
}



// FUNCTION 1438a02b7 FUN_1438a02b7 body=55 status=ok
// SIG undefined FUN_1438a02b7(void)

void FUN_1438a02b7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb249d0 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb249d0 = FUN_14171c317(FUN_1464430e1,uVar1,L"EObjectStateTypeEnumMirror");
  }
  return;
}



// FUNCTION 1438a02ee FUN_1438a02ee body=55 status=ok
// SIG undefined FUN_1438a02ee(void)

void FUN_1438a02ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb249e8 == 0) {
    uVar1 = FUN_1413f8713();
    DAT_14cb249e8 = FUN_14171c317(FUN_146443110,uVar1,L"EClusterConnectionTypeEnumMirror");
  }
  return;
}



// FUNCTION 1438a0325 FUN_1438a0325 body=69 status=ok
// SIG undefined FUN_1438a0325(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a0325(void)

{
  _DAT_14cb24ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a0367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb24ac0,1);
  return;
}



// FUNCTION 1438a036a FUN_1438a036a body=69 status=ok
// SIG undefined FUN_1438a036a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a036a(void)

{
  _DAT_14cb24a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a03ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb24a18,1);
  return;
}



// FUNCTION 1438a03af FUN_1438a03af body=69 status=ok
// SIG undefined FUN_1438a03af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a03af(void)

{
  _DAT_14cb24a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a03f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb24a30,1);
  return;
}



// FUNCTION 1438a0405 FUN_1438a0405 body=671 status=ok
// SIG undefined FUN_1438a0405(void)

void FUN_1438a0405(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb24a80 == 0) {
    DAT_14cb24a80 = DAT_14cb24a80 ^ 1;
    FUN_147f66546(&local_58);
    uVar7 = (ulonglong)local_48;
    lVar4 = local_58;
    if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
      do {
        lVar4 = *(longlong *)(local_58 + (uVar7 & 0xffffffff) * 8);
        if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
          lVar4 = *(longlong *)(lVar4 + 0xb0);
          if (lVar4 == 0) {
            lVar4 = FUN_1448abda6();
          }
          if (lVar4 == param_1) {
            lVar4 = *(longlong *)(local_58 + (longlong)(int)local_48 * 8);
            iVar1 = *(int *)(lVar4 + 0x140);
            if ((longlong)iVar1 != 0) {
              lVar2 = *(longlong *)(lVar4 + 0x138);
              lVar3 = 0;
              do {
                lVar10 = *(longlong *)(lVar2 + lVar3);
                if (lVar10 != 0) {
                  lVar5 = FUN_145b64fbc();
                  lVar10 = *(longlong *)(lVar10 + 0x10);
                  if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30)) goto LAB_1438a0637;
                }
                lVar3 = lVar3 + 8;
              } while ((longlong)iVar1 * 8 != lVar3);
            }
            plVar6 = (longlong *)FUN_147f665ef(lVar4);
            FUN_140b506a4(plVar6);
            (**(code **)(*plVar6 + 0x490))(plVar6,lVar4,&DAT_14cadad98,0);
          }
        }
LAB_1438a0637:
        uVar7 = (longlong)(int)local_48;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 + 1;
          local_48 = (uint)uVar7;
          if ((longlong)local_50 <= (longlong)uVar7) break;
        } while (*(longlong *)(local_58 + uVar7 * 8) == 0);
        lVar4 = local_58;
      } while ((-2 < (longlong)uVar8) && ((int)local_48 < local_50));
    }
  }
  else {
    DAT_14cb24a80 = DAT_14cb24a80 ^ 1;
    FUN_147f66546(&local_58);
    uVar7 = (ulonglong)local_48;
    lVar4 = local_58;
    if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
      do {
        uVar9 = (uint)uVar7;
        lVar2 = *(longlong *)(lVar4 + (uVar7 & 0xffffffff) * 8);
        if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
          lVar3 = *(longlong *)(lVar2 + 0xb0);
          if (lVar3 == 0) {
            lVar3 = FUN_1448abda6(lVar2);
            lVar4 = local_58;
            uVar9 = local_48;
          }
          if (lVar3 == param_1) {
            lVar2 = *(longlong *)(lVar4 + (longlong)(int)uVar9 * 8);
            lVar3 = (longlong)*(int *)(lVar2 + 0x140);
            if (lVar3 != 0) {
              lVar2 = *(longlong *)(lVar2 + 0x138);
              lVar10 = 0;
              do {
                plVar6 = *(longlong **)(lVar2 + lVar10);
                if (plVar6 != (longlong *)0x0) {
                  lVar4 = FUN_145b64fbc();
                  if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                      lVar4 + 0x30)) {
                    (**(code **)(*plVar6 + 0x420))(plVar6,0);
                  }
                }
                lVar10 = lVar10 + 8;
                lVar4 = local_58;
                uVar9 = local_48;
              } while (lVar3 * 8 != lVar10);
            }
          }
        }
        uVar7 = (longlong)(int)uVar9;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 + 1;
          local_48 = (uint)uVar7;
          if ((longlong)local_50 <= (longlong)uVar7) break;
        } while (*(longlong *)(lVar4 + uVar7 * 8) == 0);
      } while ((-2 < (longlong)uVar8) && ((int)local_48 < local_50));
    }
  }
  if (lVar4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a06a5 FUN_1438a06a5 body=69 status=ok
// SIG undefined FUN_1438a06a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a06a5(void)

{
  _DAT_14cb24a50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a06e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb24a58,1);
  return;
}



// FUNCTION 1438a06ea FUN_1438a06ea body=69 status=ok
// SIG undefined FUN_1438a06ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a06ea(void)

{
  _DAT_14cb24a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb24a70,1);
  return;
}



// FUNCTION 1438a0730 FUN_1438a0730 body=48 status=ok
// SIG undefined FUN_1438a0730(void)

longlong FUN_1438a0730(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145b085a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a0760 FUN_1438a0760 body=48 status=ok
// SIG undefined FUN_1438a0760(void)

longlong FUN_1438a0760(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_140aee5f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a0798 FUN_1438a0798 body=48 status=ok
// SIG undefined FUN_1438a0798(void)

longlong FUN_1438a0798(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xaf0;
  FUN_140aee5f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a0810 FUN_1438a0810 body=316 status=ok
// SIG undefined FUN_1438a0810(void)

void FUN_1438a0810(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1[1] == 0) {
    return;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar5 == 0) {
    return;
  }
  if (*(uint *)(lVar5 + 0x10) != param_1[1]) {
    return;
  }
  if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 2);
  if ((*(byte *)(lVar5 + 0x319) & 8) == 0) {
    return;
  }
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x410) + (longlong)(int)param_1[4] * 4);
  if (lVar2 == -1) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x340) + lVar2 * 8);
  }
  uVar1 = rand();
  if ((float)param_1[5] < (float)(uVar1 & 0x7fff) / 32767.0) {
    return;
  }
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1438a0910;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_1438a0910;
    }
  }
  uVar3 = 0;
LAB_1438a0910:
  FUN_1448a1196(uVar3,param_1[4]);
  if (plVar6 != (longlong *)0x0) {
    lVar5 = *(longlong *)(*plVar6 + 0x2c0);
    lVar2 = (longlong)(int)plVar6[1] * 0x10;
    if ((*(char *)(lVar5 + 0xd + lVar2) == '\0') && (*(char *)(lVar5 + 0xb + lVar2) == '\x04')) {
      *(undefined4 *)(lVar5 + lVar2) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 1438a0962 FUN_1438a0962 body=29 status=ok
// SIG undefined FUN_1438a0962(void)

undefined8 FUN_1438a0962(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a0980 FUN_1438a0980 body=286 status=ok
// SIG undefined FUN_1438a0980(void)

void FUN_1438a0980(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((puVar3 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar3 != (undefined8 *)0x0 && (*(uint *)(puVar3 + 2) == param_1[1])))) &&
     ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar6 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)(int)param_1[4] * 4);
    if (lVar6 == -1) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0x340) + lVar6 * 8);
    }
    lVar6 = *(longlong *)(*plVar5 + 0x110);
    lVar7 = (longlong)(int)plVar5[1] * 0x30;
    if (((float)((*(double *)(lVar6 + 0x18 + lVar7) - *(double *)(lVar6 + lVar7)) *
                 (*(double *)(lVar6 + 0x20 + lVar7) - *(double *)(lVar6 + 8 + lVar7)) *
                (*(double *)(lVar6 + 0x28 + lVar7) - *(double *)(lVar6 + 0x10 + lVar7))) <=
         (float)param_1[5]) && (*(longlong *)(lVar2 + 8) != 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = 0;
      }
      FUN_1448a1196(uVar4);
      *(undefined4 *)(*(longlong *)(*plVar5 + 0x2c0) + (longlong)(int)plVar5[1] * 0x10) = 0xffffffff
      ;
    }
  }
  return;
}



// FUNCTION 1438a0ab4 FUN_1438a0ab4 body=29 status=ok
// SIG undefined FUN_1438a0ab4(void)

undefined8 FUN_1438a0ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a0ad2 FUN_1438a0ad2 body=277 status=ok
// SIG undefined FUN_1438a0ad2(void)

void FUN_1438a0ad2(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0 &&
          (*(uint *)(lVar4 + 0x10) == param_1[1])) && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0))))
  {
    lVar4 = (longlong)
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x410) +
                    (longlong)(int)param_1[0x10] * 4);
    if (lVar4 == -1) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x340) + lVar4 * 8);
    }
    if (0 < *(int *)(*(longlong *)(*plVar3 + 0xf8) + 0x10 + (longlong)(int)plVar3[1] * 0x18)) {
      lVar4 = *(longlong *)(*plVar3 + 0xf8) + (longlong)(int)plVar3[1] * 0x18;
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(lVar4 + 8);
        if (*(longlong *)(lVar4 + 8) == 0) {
          lVar6 = lVar4;
        }
        lVar6 = *(longlong *)(lVar6 + lVar5 * 8);
        uVar2 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(lVar6 + 0x60) = uVar2;
        lVar7 = *(longlong *)(lVar6 + 0x10);
        bVar8 = *(byte *)(lVar7 + 0x1c) & 0x1f;
        if (bVar8 == 4 && lVar7 != 0) {
          do {
            lVar7 = *(longlong *)(lVar7 + 0x20);
            bVar8 = *(byte *)(lVar7 + 0x1c) & 0x1f;
          } while (lVar7 != 0 && bVar8 == 4);
        }
        uVar2 = *(undefined8 *)(param_1 + (ulonglong)(bVar8 == 0xb) * 4 + 8 + 2);
        *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_1 + (ulonglong)(bVar8 == 0xb) * 4 + 8)
        ;
        *(undefined8 *)(lVar6 + 0x50) = uVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar4 + 0x10));
    }
  }
  return;
}



// FUNCTION 1438a0bf2 FUN_1438a0bf2 body=29 status=ok
// SIG undefined FUN_1438a0bf2(void)

void FUN_1438a0bf2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1438a0c10 FUN_1438a0c10 body=29 status=ok
// SIG undefined FUN_1438a0c10(void)

undefined8 FUN_1438a0c10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a0c2d FUN_1438a0c2d body=1267 status=ok
// SIG undefined FUN_1438a0c2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a0c2d(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&DAT_14cb246d8,L"OnApplyField",1);
  FUN_1446f470e(&DAT_14cb246e8,L"OnApplyFieldWithProperties",1);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac8e1a0,1,0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_48,&DAT_14cb24710);
  if (cVar2 == '\0') {
    _DAT_14cb24710 = 0;
    uRam000000014cb24718 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac90270,3,&PTR_FUN_14ac90240);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac90b10,1,&PTR_FUN_14ac90ae0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac91790;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac917b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac92520,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac92c20,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac934e0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac93500,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac939a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac94760,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ac94d90;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac94de0,1,&PTR_FUN_14ac94db0);
  FUN_1446f470e(&DAT_14cb24970,L"PainterComponent",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac95540,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac959f0,1,0);
  ppuStack_60 = &PTR_FUN_14ac96310;
  local_68 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxDestruction",&PTR_FUN_14ac96350,1,0);
  local_48._0_1_ = 1;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb24ab8,L"p.gbx.Destruction.bEnableBoundsChunkCulling",&local_48,
                L"Whether or not to enable the feature that dynamically and automatically removes chunks that exceed the limits of a geometry collection asset defined bounds."
               );
  atexit(FUN_1438a0325);
  local_48 = (undefined8 *)((ulonglong)local_48._1_7_ << 8);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb24a10,L"p.gbx.Destruction.bEnableGCModifyAndSaveInCommandlets",&local_48,
                L"Whether or not to enable the building the removal on break arrays that happens upon saving a DST in commandlets."
               );
  atexit(FUN_1438a036a);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb24a28,L"p.gbx.Destruction.AllowGlobalFields",&local_48,
                L"Enable/disable the ability to spawn a field in the global solver if there is no specific solver found."
               );
  atexit(FUN_1438a03af);
  DAT_14cb24a40 = 0;
  _DAT_14cb24a48 = 0;
  atexit((_func_5014 *)&LAB_1438a03f4);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14a1e19d0;
  local_48[3] = FUN_1438a0405;
  local_68 = CONCAT44(local_68._4_4_,1);
  FUN_14156bb80(&DAT_14cb24a50,L"ToggleDestructionMirroredCollisionRender",
                L"Debug draw the collision that has been mirrored into the built destruction solver scenes."
                ,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1438a106a;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1438a106a:
  atexit(FUN_1438a06a5);
  local_48 = (undefined8 *)0x800000014ac96d7e;
  local_34 = 0xe;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146443216(&local_48);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb24a68,L"p.gbx.Destruction.DestructionConfig",&local_48,
                L"To determine destruction functionality:\n0: Enable destruction.\n1: Disable destruction by replacing it with static asset.2: Remove destructible actor from the world."
               );
  atexit(FUN_1438a06ea);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a1124 FUN_1438a1124 body=132 status=ok
// SIG undefined FUN_1438a1124(void)

void FUN_1438a1124(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_141796d34();
  if (*(longlong *)(param_1 + 0xaf8) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xaf8) + 0xf8);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
  }
  FUN_1406cc26a(param_1,lVar2,1,1);
  if ((*(longlong *)(param_1 + 0xaf8) != 0) &&
     (cVar1 = *(char *)(*(longlong *)(param_1 + 0xaf8) + 0xd8), cVar1 != 'd')) {
    *(char *)(param_1 + 0x67a) = cVar1;
  }
  if (7 < *(uint *)(param_1 + 0x67c)) {
    *(undefined4 *)(param_1 + 0x67c) = 0;
  }
  return;
}



// FUNCTION 1438a11a8 FUN_1438a11a8 body=152 status=ok
// SIG undefined FUN_1438a11a8(void)

void FUN_1438a11a8(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined2 *)(puVar6 + 8) = 1;
  *puVar6 = &PTR_FUN_149f45dc0;
  puVar6[10] = FUN_1438a156a;
  puVar6[0xc] = 0;
  puVar6[0xe] = &PTR_LAB_14ac989c0;
  *(undefined4 *)(puVar6 + 0xf) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uVar3;
  *(undefined4 *)(puVar6 + 0x10) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uVar5;
  puVar6[0x11] = uVar1;
  puVar6[0x12] = 0;
  puVar6[0x14] = 0;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar6);
  return;
}



// FUNCTION 1438a1240 FUN_1438a1240 body=756 status=ok
// SIG undefined FUN_1438a1240(void)

void FUN_1438a1240(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  double dVar3;
  int iVar4;
  void *_Src;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)((longlong)param_1 + 0xc) != 0) &&
       (uVar12 = *(uint *)(param_1 + 1), -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)) &&
     (((lVar10 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8), lVar10 != 0 &&
       (*(int *)(lVar10 + 0x10) == *(int *)((longlong)param_1 + 0xc))) &&
      ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
    local_38 = (ulonglong *)0x0;
    local_30 = *(int *)(*param_1 + 0x348);
    lVar10 = (longlong)local_30;
    _Src = *(void **)(*param_1 + 0x340);
    if (lVar10 != 0) {
      FUN_14172b2d6(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar10 << 3);
      if ((longlong)local_30 != 0) {
        puVar1 = local_38 + local_30;
        puVar11 = local_38;
        do {
          plVar5 = (longlong *)*puVar11;
          if (plVar5 != (longlong *)0x0) {
            iVar4 = *(int *)((longlong)param_1 + 0xc);
            if ((iVar4 == 0) || (uVar12 = *(uint *)(param_1 + 1), (int)uVar12 < 0)) {
LAB_1438a150f:
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if ((int)uVar12 < DAT_14c9647dc) {
                plVar6 = (longlong *)
                         ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != iVar4)) ||
                   ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_1438a150f;
                lVar10 = *plVar6;
              }
            }
            dVar3 = *(double *)(*(longlong *)(*plVar5 + 0x28) + (longlong)(int)plVar5[1] * 0x18);
            if ((*(double *)(lVar10 + 0xb10) <= dVar3 && dVar3 != *(double *)(lVar10 + 0xb10)) &&
               (dVar3 < *(double *)(lVar10 + 0xb28))) {
              lVar14 = *(longlong *)(*plVar5 + 0x28) + (longlong)(int)plVar5[1] * 0x18;
              dVar3 = *(double *)(lVar14 + 8);
              if (((*(double *)(lVar10 + 0xb18) <= dVar3 && dVar3 != *(double *)(lVar10 + 0xb18)) &&
                  ((dVar3 < *(double *)(lVar10 + 0xb30) &&
                   (dVar3 = *(double *)(lVar14 + 0x10),
                   *(double *)(lVar10 + 0xb20) <= dVar3 && dVar3 != *(double *)(lVar10 + 0xb20)))))
                 && (dVar3 < *(double *)(lVar10 + 0xb38))) goto LAB_1438a1500;
            }
            lVar10 = *param_1;
            uVar9 = 0xffffffff;
            if (*(int *)(lVar10 + 0x358) != *(int *)(lVar10 + 900)) {
              uVar12 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4))
                       * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              lVar14 = lVar10 + 0x388;
              if (*(longlong *)(lVar10 + 0x390) != 0) {
                lVar14 = *(longlong *)(lVar10 + 0x390);
              }
              iVar13 = *(int *)(lVar14 + (ulonglong)
                                         (*(int *)(lVar10 + 0x398) - 1U & (uVar12 >> 0x10 ^ uVar12))
                                         * 4);
              if (iVar13 != -1) {
                do {
                  puVar2 = (ulonglong *)(*(longlong *)(lVar10 + 0x350) + (longlong)iVar13 * 0x18);
                  if ((longlong *)*puVar2 == plVar5) {
                    if ((puVar2 != (ulonglong *)0x0) && (puVar2 + 1 != (ulonglong *)0x0)) {
                      uVar9 = (undefined4)puVar2[1];
                    }
                    break;
                  }
                  iVar13 = (int)puVar2[2];
                } while (iVar13 != -1);
              }
            }
            if ((iVar4 == 0) || (uVar12 = *(uint *)(param_1 + 1), (int)uVar12 < 0)) {
LAB_1438a1516:
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              if ((int)uVar12 < DAT_14c9647dc) {
                puVar8 = (undefined8 *)
                         ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar4)) ||
                   ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_1438a1516;
                uVar7 = *puVar8;
              }
            }
            FUN_1448a1196(uVar7,uVar9);
            *(undefined4 *)(*(longlong *)(*plVar5 + 0x2c0) + (longlong)(int)plVar5[1] * 0x10) =
                 0xffffffff;
          }
LAB_1438a1500:
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar1);
      }
      if (local_38 != (ulonglong *)0x0) {
        FUN_1400020a8(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a154c FUN_1438a154c body=29 status=ok
// SIG undefined FUN_1438a154c(void)

undefined8 FUN_1438a154c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a156a FUN_1438a156a body=118 status=ok
// SIG undefined FUN_1438a156a(void)

void FUN_1438a156a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = param_1[2];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = param_1[1];
    lVar7 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar7);
      if ((((-1 < (longlong)iVar1) && (lVar3 = *param_1, iVar1 < *(int *)(lVar3 + 0x418))) &&
          (lVar6 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x410) + (longlong)iVar1 * 4),
          lVar6 != -1)) &&
         (puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 0x340) + lVar6 * 8),
         puVar4 != (undefined8 *)0x0)) {
        FUN_1403f44de(*puVar4,*(undefined4 *)(puVar4 + 1),4);
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
  }
  return;
}



// FUNCTION 1438a15f6 FUN_1438a15f6 body=57 status=ok
// SIG undefined FUN_1438a15f6(void)

undefined8 * FUN_1438a15f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ac989c0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a162f FUN_1438a162f body=137 status=ok
// SIG undefined FUN_1438a162f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a162f(void)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&DAT_14cb24ad8,L"PainterComponent",1);
  FUN_1400b22c2(local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_20,&DAT_14cb24ae0);
  if (cVar1 == '\0') {
    _DAT_14cb24ae0 = 0;
    uRam000000014cb24ae8 = 0;
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a16bc FUN_1438a16bc body=55 status=ok
// SIG undefined FUN_1438a16bc(void)

void FUN_1438a16bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24b28 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24b28 = FUN_14171c317(FUN_14644360f,uVar1,L"EGbxAudioNotifyType");
  }
  return;
}



// FUNCTION 1438a16f3 FUN_1438a16f3 body=55 status=ok
// SIG undefined FUN_1438a16f3(void)

void FUN_1438a16f3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24c78 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24c78 = FUN_14171c317(FUN_146443be3,uVar1,L"EWwiseResourceLoadingState");
  }
  return;
}



// FUNCTION 1438a172a FUN_1438a172a body=55 status=ok
// SIG undefined FUN_1438a172a(void)

void FUN_1438a172a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d20 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d20 = FUN_14171c317(FUN_146443f0e,uVar1,L"EGbxAudioGraphExecutionState");
  }
  return;
}



// FUNCTION 1438a1761 FUN_1438a1761 body=55 status=ok
// SIG undefined FUN_1438a1761(void)

void FUN_1438a1761(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24df8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24df8 = FUN_14171c317(FUN_1464443d8,uVar1,L"EAudioGraphEmitterSpawnFrequency");
  }
  return;
}



// FUNCTION 1438a1798 FUN_1438a1798 body=55 status=ok
// SIG undefined FUN_1438a1798(void)

void FUN_1438a1798(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24ff0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24ff0 = FUN_14171c317(FUN_146444f8a,uVar1,L"FGbxAudioNodeTableReadIndexMethod");
  }
  return;
}



// FUNCTION 1438a1856 FUN_1438a1856 body=57 status=ok
// SIG undefined FUN_1438a1856(void)

void FUN_1438a1856(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24d08 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24d08 = FUN_140002ddd(FUN_146443eaf,uVar1,L"GbxAudioGraphSettings");
  }
  return;
}



// FUNCTION 1438a1938 FUN_1438a1938 body=57 status=ok
// SIG undefined FUN_1438a1938(void)

void FUN_1438a1938(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e70 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e70 = FUN_140002ddd(FUN_146444697,uVar1,L"GbxAudioNodeAspectSettings_PostEvent");
  }
  return;
}



// FUNCTION 1438a1a7c FUN_1438a1a7c body=576 status=ok
// SIG undefined FUN_1438a1a7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a1a7c(void)

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
  _DAT_14cb24b00 = (ulonglong)uVar1;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14ac98ce0,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac990e0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14ac99100,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14ac9bae0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14ac9bbe0,1,0);
  FUN_14098d3d2(FUN_1438a16f3,L"/Script/GbxAudio",L"EWwiseResourceLoadingState",&DAT_14cb24c70);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14ac9bdf0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14ac9bfa0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14ac9c690,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac9ce50;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14ac9cef0,1,&PTR_FUN_14ac9ce70);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 6;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14ac9d290);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac9e420;
  local_58 = 0x12;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14ac9e440);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14ac9eee0;
  local_58 = 6;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14ac9ef00);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a1cc0 FUN_1438a1cc0 body=55 status=ok
// SIG undefined FUN_1438a1cc0(void)

void FUN_1438a1cc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25070 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25070 = FUN_14171c317(FUN_14644580d,uVar1,L"EAudioTimepointDataField");
  }
  return;
}



// FUNCTION 1438a1cf7 FUN_1438a1cf7 body=55 status=ok
// SIG undefined FUN_1438a1cf7(void)

void FUN_1438a1cf7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25088 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25088 = FUN_14171c317(FUN_14644583c,uVar1,L"EGbxAudioNodeExecutionState");
  }
  return;
}



// FUNCTION 1438a1d2e FUN_1438a1d2e body=228 status=ok
// SIG undefined FUN_1438a1d2e(void)

longlong FUN_1438a1d2e(void)

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
  if (DAT_14cb252d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f6f07f;
    local_40 = FUN_1464465e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb252d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a1e13 FUN_1438a1e13 body=55 status=ok
// SIG undefined FUN_1438a1e13(void)

void FUN_1438a1e13(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25310 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25310 = FUN_14171c317(FUN_14644669c,uVar1,L"EAudioEmitterOrphanPolicy");
  }
  return;
}



// FUNCTION 1438a1e4a FUN_1438a1e4a body=55 status=ok
// SIG undefined FUN_1438a1e4a(void)

void FUN_1438a1e4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25418 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25418 = FUN_14171c317(FUN_146446c31,uVar1,L"EGbxAudioAnimPreviewDrawing");
  }
  return;
}



// FUNCTION 1438a1e87 FUN_1438a1e87 body=55 status=ok
// SIG undefined FUN_1438a1e87(void)

void FUN_1438a1e87(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25478 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25478 = FUN_14171c317(FUN_146446d64,uVar1,L"EWwisePlaybackAction");
  }
  return;
}



// FUNCTION 1438a1ebe FUN_1438a1ebe body=55 status=ok
// SIG undefined FUN_1438a1ebe(void)

void FUN_1438a1ebe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25490 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25490 = FUN_14171c317(FUN_146446d93,uVar1,L"EWwisePostEventFlags");
  }
  return;
}



// FUNCTION 1438a1ef5 FUN_1438a1ef5 body=55 status=ok
// SIG undefined FUN_1438a1ef5(void)

void FUN_1438a1ef5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb254a8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb254a8 = FUN_14171c317(FUN_146446dc2,uVar1,L"EGbxAudioAcousticsInfoFlags");
  }
  return;
}



// FUNCTION 1438a1f2c FUN_1438a1f2c body=55 status=ok
// SIG undefined FUN_1438a1f2c(void)

void FUN_1438a1f2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb254c0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb254c0 = FUN_14171c317(FUN_146446bd3,uVar1,L"EWwiseValidationSeverity");
  }
  return;
}



// FUNCTION 1438a1fd4 FUN_1438a1fd4 body=57 status=ok
// SIG undefined FUN_1438a1fd4(void)

void FUN_1438a1fd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25130 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25130 = FUN_140002ddd(FUN_146445c2f,uVar1,L"GbxAudioGraphSettings_Action");
  }
  return;
}



// FUNCTION 1438a202a FUN_1438a202a body=57 status=ok
// SIG undefined FUN_1438a202a(void)

void FUN_1438a202a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25160 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25160 = FUN_140002ddd(FUN_146445d25,uVar1,L"GbxAudioGraphSettings_Start");
  }
  return;
}



// FUNCTION 1438a2080 FUN_1438a2080 body=57 status=ok
// SIG undefined FUN_1438a2080(void)

void FUN_1438a2080(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25190 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25190 = FUN_140002ddd(FUN_146445e1b,uVar1,L"GbxAudioGraphSettings_Parallel");
  }
  return;
}



// FUNCTION 1438a21de FUN_1438a21de body=57 status=ok
// SIG undefined FUN_1438a21de(void)

void FUN_1438a21de(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xf8) = 0;
  return;
}



// FUNCTION 1438a2218 FUN_1438a2218 body=492 status=ok
// SIG undefined FUN_1438a2218(void)

void FUN_1438a2218(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar4 = 0;
    uVar10 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = *puVar9;
    if (uVar6 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar4 = 0;
      uVar12 = iVar11 >> 5;
      if (iVar11 >> 5 < 1) {
        uVar12 = 0;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) goto LAB_1438a2381;
        iVar5 = iVar5 + 0x20;
        uVar6 = puVar9[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar10 = (ulonglong)(-uVar6 & uVar6);
    uVar2 = uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar11 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar11) {
      iVar11 = iVar3;
    }
  }
  if (iVar11 < iVar3) {
    uVar6 = 0xffffffff;
    do {
      lVar14 = *param_1;
      *(undefined8 *)(lVar14 + 8 + (longlong)iVar11 * 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar11 * 0x20) = 0xffffffffffffffff;
      uVar6 = ~(uint)uVar10 & uVar6;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar11 = (int)uVar4;
      lVar14 = (longlong)iVar11;
      uVar12 = puVar9[lVar14] & uVar6;
      if (uVar12 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) break;
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar12 = puVar9[lVar14 + lVar13 + 1];
          if (uVar12 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar8 - lVar14 == lVar13) goto LAB_1438a2381;
        }
        uVar4 = (ulonglong)(iVar11 + (int)lVar13 + 1);
        uVar6 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar12 & uVar12);
      uVar2 = uVar10 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar11 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar3);
  }
LAB_1438a2381:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar12 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar12 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar12;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 1438a2406 FUN_1438a2406 body=154 status=ok
// SIG undefined FUN_1438a2406(void)

longlong FUN_1438a2406(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_1438a2470;
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
LAB_1438a2470:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1438a24a0(param_1,param_2);
  return param_1;
}



// FUNCTION 1438a24a0 FUN_1438a24a0 body=365 status=ok
// SIG undefined FUN_1438a24a0(void)

longlong * FUN_1438a24a0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1438a2218(param_1,(ulonglong)uVar1);
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
      uVar6 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar6 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar6;
      FUN_1446efbd8(param_1 + 2);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar9 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          *(undefined8 *)(lVar4 + 8 + lVar7) = 0;
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = 0xffffffffffffffff;
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar3 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar3 + 0x10 + lVar7);
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = *(undefined8 *)(lVar3 + 0x18 + lVar7);
        }
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 1438a2628 FUN_1438a2628 body=115 status=ok
// SIG undefined FUN_1438a2628(void)

undefined8 FUN_1438a2628(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      uVar3 = *(undefined8 *)(param_3 + lVar9);
      lVar4 = *(longlong *)(param_3 + 8 + lVar9);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + 8 + lVar9);
      *(undefined8 *)(param_2 + lVar9) = uVar3;
      *(longlong *)(param_2 + 8 + lVar9) = lVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      lVar4 = param_3 + lVar9;
      uVar6 = *(undefined4 *)(lVar4 + 0x14);
      uVar7 = *(undefined4 *)(lVar4 + 0x18);
      uVar8 = *(undefined4 *)(lVar4 + 0x1c);
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar9);
      *puVar2 = *(undefined4 *)(lVar4 + 0x10);
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      lVar9 = lVar9 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1438a2746 FUN_1438a2746 body=354 status=ok
// SIG undefined FUN_1438a2746(void)

void FUN_1438a2746(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2d0);
  *(undefined4 *)(param_2 + 7) = 0x3f800000;
  *param_2 = &PTR_FUN_14acb15d0;
  *(undefined4 *)(param_2 + 9) = 0xaaad1010;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x11) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0x3ff00000;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0x3ff0000000000000;
  param_2[0x17] = 0x3ff0000000000000;
  param_2[0x18] = 0x3ff0000000000000;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  *(undefined1 *)(param_2 + 0x23) = 1;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0xffffffff00000080;
  param_2[0x30] = 0;
  param_2[0x3a] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1dc) = 0xffffffff00000080;
  param_2[0x3e] = 0;
  param_2[0x4a] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined8 *)((longlong)param_2 + 0x25c) = 0xffffffff00000080;
  param_2[0x4e] = 0;
  param_2[0x54] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2ac) = 0xffffffff00000080;
  param_2[0x58] = 0;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  param_2[0x5c] = 0;
  param_2[0x5d] = 0;
  param_2[0x5a] = 0;
  param_2[0x5b] = 0;
  return;
}



// FUNCTION 1438a28a8 FUN_1438a28a8 body=57 status=ok
// SIG undefined FUN_1438a28a8(void)

void FUN_1438a28a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25388 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25388 = FUN_140002ddd(FUN_14644692a,uVar1,L"GbxAudioProvider");
  }
  return;
}



// FUNCTION 1438a28fe FUN_1438a28fe body=159 status=ok
// SIG undefined FUN_1438a28fe(void)

void FUN_1438a28fe(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x138);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14acb1590;
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  param_2[0xd] = 0;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x23] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0xffffffff00000080;
  param_2[0x27] = 0;
  return;
}



// FUNCTION 1438a29aa FUN_1438a29aa body=57 status=ok
// SIG undefined FUN_1438a29aa(void)

void FUN_1438a29aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb253b8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb253b8 = FUN_140002ddd(FUN_146446a22,uVar1,L"GbxAudioProviderDef");
  }
  return;
}



// FUNCTION 1438a2a4c FUN_1438a2a4c body=39 status=ok
// SIG undefined FUN_1438a2a4c(void)

undefined8 FUN_1438a2a4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1438a2ad2 FUN_1438a2ad2 body=31 status=ok
// SIG undefined FUN_1438a2ad2(void)

undefined8 FUN_1438a2ad2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a2b14 FUN_1438a2b14 body=946 status=ok
// SIG undefined FUN_1438a2b14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a2b14(void)

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
  _DAT_14cb25060 = (ulonglong)uVar1;
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14aca4f90;
  local_68 = 10;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14aca4fd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 0xe;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14aca5be0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14aca6140,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14aca61f0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14aca69c0;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14aca69e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14aca70b0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14aca76e0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14aca91e0,1,&PTR_FUN_14aca91b0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14aca9990;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14aca99b0,2,0);
  ppuStack_60 = &PTR_FUN_14aca9fa0;
  local_68 = 2;
  uStack_58 = 4;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14acaa020);
  _DAT_14cb254ec = 0;
  FUN_14052b5e0(&DAT_14cb254e8,"volume_overall",0);
  _DAT_14cb254f8 = 0;
  FUN_14052b5e0(&DAT_14cb254f4,"volume_music",0);
  _DAT_14cb25504 = 0;
  FUN_14052b5e0(&DAT_14cb25500,"volume_sfx",0);
  _DAT_14cb25510 = 0;
  FUN_14052b5e0(&DAT_14cb2550c,"volume_dialog",0);
  _DAT_14cb2551c = 0;
  FUN_14052b5e0(&DAT_14cb25518,"PlayInBackground",0);
  _DAT_14cb25528 = 0;
  FUN_14052b5e0(&DAT_14cb25524,"MuteHitNotifies",0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acaa510,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acaa8b0,1,0);
  _DAT_14cb25560 = 0xffffffff;
  _DAT_14cb25564 = 0;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acaaf40,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14acab050);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acab4b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acab7d0,1,&PTR_FUN_14acab7a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",0,0,&PTR_FUN_14acab8e0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a2ec8 FUN_1438a2ec8 body=311 status=ok
// SIG undefined FUN_1438a2ec8(void)

void FUN_1438a2ec8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x50) == 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x148), lVar4 != 0)) {
    FUN_1403c747e(lVar4,&local_30,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x38));
    FUN_1403c75f4(param_1 + 0x50,&local_30);
    if ((local_30 != (longlong *)0x0) &&
       (*(int *)(local_30 + 0x21) = (int)local_30[0x21] + -1, (int)local_30[0x26] < 1)) {
      FUN_1400847bc(local_30 + 0x17,0);
      if ((int)local_30[0x21] == 0) {
        FUN_140087e46(local_30);
        if (*local_30 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1438a2ef1;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_30);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_30);
        }
      }
    }
  }
LAB_1438a2ef1:
  FUN_140d27362(param_4,param_1 + 0x50);
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a3000 FUN_1438a3000 body=56 status=ok
// SIG undefined FUN_1438a3000(void)

void FUN_1438a3000(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001438a302d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1438a3038 FUN_1438a3038 body=59 status=ok
// SIG undefined FUN_1438a3038(void)

void FUN_1438a3038(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  FUN_147f77696(param_1 + 0x50);
  uVar2 = FUN_147f7773e(param_1);
  FUN_1438a3074(param_1 + 0x50,lVar1 + 0x40,uVar2);
  return;
}



// FUNCTION 1438a3074 FUN_1438a3074 body=1017 status=ok
// SIG undefined FUN_1438a3074(void)

void FUN_1438a3074(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  size_t sVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong local_140 [2];
  longlong local_130 [2];
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong local_108 [2];
  char *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  int local_d8;
  longlong local_60;
  char *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_2 + 1) == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)*param_2;
  }
  local_60 = 0;
  if (pwVar11 == (wchar_t *)0x0) {
    local_f0 = 0;
    local_58 = (char *)0x0;
    local_50 = 0;
    local_f8 = (char *)0x0;
  }
  else {
    sVar9 = wcslen(pwVar11);
    FUN_1449b853c(&local_e0,pwVar11,sVar9 & 0xffffffff,1);
    local_f8 = local_58;
    if (local_58 == (char *)0x0) {
      local_f0 = 0;
    }
    else {
      sVar9 = strlen(local_58);
      local_f0 = (undefined4)sVar9;
    }
  }
  FUN_1405b449e(param_1);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (*(uint *)(param_2 + 1) < 2) {
    pwVar11 = L"Empty Expression";
    plVar13 = local_108;
  }
  else {
    if (*(short *)(param_1 + 0x90) == -1) {
      iVar10 = *(int *)(param_1 + 0x50);
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      plVar13 = (longlong *)(param_1 + 0x98);
      local_148 = param_3;
      if (*(int *)(param_1 + 0xa4) < iVar10) {
        FUN_147f7f652(plVar13);
        iVar10 = *(int *)(param_1 + 0x50);
      }
      if (iVar10 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x48);
        lVar14 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0xa0);
          lVar12 = (longlong)iVar2;
          *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
            FUN_147f7f6c2(plVar13,iVar2);
          }
          lVar5 = *plVar13;
          *(undefined4 *)(lVar5 + lVar12 * 0x18) = 0;
          *(undefined4 *)(lVar5 + 8 + lVar12 * 0x18) = 0;
          uVar3 = *(uint *)(lVar4 + 0x18 + lVar14);
          if (uVar3 == 0xffffffff) {
            iVar2 = *(int *)(lVar4 + 0x10 + lVar14);
            if (0 < iVar2) {
              puVar1 = (undefined4 *)(lVar5 + lVar12 * 0x18);
              FUN_1405b4428(&local_e0,iVar2,*(undefined8 *)(lVar4 + 8 + lVar14));
              cVar7 = FUN_1405b43cc(&local_e0);
              if (cVar7 == '\0') {
                cVar7 = FUN_147f7a9dc(&local_e0,&local_11c);
                if (cVar7 == '\0') {
                  cVar7 = FUN_147f7adf0(&local_e0,&local_120);
                  plVar6 = local_148;
                  if (cVar7 == '\0') {
                    if (local_148 != (longlong *)0x0) {
                      iVar2 = local_d8 + -1;
                      if (local_d8 == 0) {
                        iVar2 = 0;
                      }
                      FUN_1446f82e2(&local_e8,iVar2,local_e0,1);
                      local_150 = local_e8;
                      lVar12 = (**(code **)(*plVar6 + 0xc0))(plVar6);
                      if (lVar12 == 0) {
                        iVar2 = local_d8 + -1;
                        if (local_d8 == 0) {
                          iVar2 = 0;
                        }
                        FUN_1446f82e2(&local_e8,iVar2,local_e0,1);
                        local_150 = local_e8;
                        lVar12 = (**(code **)(*plVar6 + 0xb8))(plVar6);
                        if (lVar12 == 0) goto LAB_1438a341d;
                        *puVar1 = 4;
                      }
                      else {
                        *puVar1 = 5;
                      }
                      *(undefined8 *)(puVar1 + 2) = local_150;
                      *(longlong **)(puVar1 + 4) = plVar6;
                      goto LAB_1438a32b6;
                    }
LAB_1438a341d:
                    pwVar11 = local_e0;
                    if (local_d8 == 0) {
                      pwVar11 = L"";
                    }
                    FUN_140002266(local_130,L"invalid expression: %s",pwVar11);
                    if (local_130[0] != 0) {
                      FUN_1400020a8();
                    }
                    goto LAB_1438a3187;
                  }
                  *puVar1 = 3;
                  uVar8 = local_120;
                }
                else {
                  *puVar1 = 2;
                  uVar8 = local_11c;
                }
                puVar1[2] = uVar8;
              }
              else {
                pwVar11 = L"";
                if (local_d8 != 0) {
                  pwVar11 = local_e0;
                }
                dVar15 = _wtof(pwVar11);
                *puVar1 = 1;
                puVar1[2] = (float)dVar15;
              }
LAB_1438a32b6:
              if (local_e0 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else if ((((uVar3 & 0xfffffff6) == 6) || (uVar3 == 0x13)) || (uVar3 == 0x10)) {
            pwVar11 = L"Contains invalid Operator";
            plVar13 = local_140;
            goto LAB_1438a317c;
          }
          lVar14 = lVar14 + 0x20;
        } while ((longlong)iVar10 * 0x20 != lVar14);
      }
      *(undefined1 *)(param_1 + 0xa8) = 1;
      goto LAB_1438a3191;
    }
    pwVar11 = L"Invalid Syntax";
    plVar13 = local_118;
  }
LAB_1438a317c:
  FUN_140056680(plVar13,pwVar11);
  local_e0 = (wchar_t *)*plVar13;
LAB_1438a3187:
  if (local_e0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1438a3191:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a3470 FUN_1438a3470 body=82 status=ok
// SIG undefined FUN_1438a3470(void)

void FUN_1438a3470(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  plVar2 = (longlong *)FUN_147f7773e();
  FUN_1438a3074(param_1 + 0x50,lVar1 + 0x48,plVar2);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a34b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined8 *)(lVar1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1438a34c2 FUN_1438a34c2 body=82 status=ok
// SIG undefined FUN_1438a34c2(void)

void FUN_1438a34c2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  plVar2 = (longlong *)FUN_147f7773e();
  FUN_1438a3074(param_1 + 0x50,lVar1 + 0x40,plVar2);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a3508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)(lVar1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1438a3518 FUN_1438a3518 body=393 status=ok
// SIG undefined FUN_1438a3518(void)

void FUN_1438a3518(longlong param_1,double *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(double *)(param_1 + 0x110) == 0.0) ||
     (*(double *)(param_1 + 0x110) == param_2[0x22] || param_2[0x22] == 0.0)) {
    FUN_147f78212(param_1,param_2);
  }
  else {
    pdVar14 = (double *)param_2[0x20];
    if ((double *)param_2[0x20] == (double *)0x0) {
      pdVar14 = param_2;
    }
    if ((longlong)*(int *)(param_2 + 0x21) != 0) {
      pdVar15 = pdVar14 + (longlong)*(int *)(param_2 + 0x21) * 4;
      do {
        pdVar11 = (double *)param_2[0x22];
        dVar2 = *pdVar14;
        dVar3 = pdVar14[1];
        dVar4 = pdVar11[1];
        dVar5 = pdVar11[2];
        dVar6 = *pdVar11;
        local_88 = *(undefined4 *)(pdVar14 + 2);
        uStack_84 = *(undefined4 *)((longlong)pdVar14 + 0x14);
        uStack_80 = *(undefined4 *)(pdVar14 + 3);
        uStack_7c = *(undefined4 *)((longlong)pdVar14 + 0x1c);
        pdVar11 = *(double **)(param_1 + 0x110);
        dVar7 = *pdVar11;
        dVar8 = pdVar11[2];
        dVar9 = pdVar11[1];
        iVar10 = *(int *)(param_1 + 0x108);
        *(uint *)(param_1 + 0x108) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x10c) < iVar10 + 1U) {
          FUN_147f7ee40(param_1,iVar10);
        }
        lVar12 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar12 = param_1;
        }
        lVar13 = (longlong)iVar10 * 0x20;
        *(double *)(lVar12 + lVar13) = (((dVar2 - dVar4) / dVar5 + dVar6) - dVar7) * dVar8 + dVar9;
        *(double *)(lVar12 + 8 + lVar13) = (dVar3 / dVar5) * dVar8;
        puVar1 = (undefined4 *)(lVar12 + 0x10 + lVar13);
        *puVar1 = local_88;
        puVar1[1] = uStack_84;
        puVar1[2] = uStack_80;
        puVar1[3] = uStack_7c;
        pdVar14 = pdVar14 + 4;
      } while (pdVar14 != pdVar15);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147f7829c(param_1);
  return;
}



// FUNCTION 1438a36a2 FUN_1438a36a2 body=591 status=ok
// SIG undefined FUN_1438a36a2(void)

void FUN_1438a36a2(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  double *pdVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_180 [32];
  double *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar15 = *param_2;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else if (param_3 == '\x01' && 0 < *(int *)(param_1 + 0x108)) {
      local_80 = (double *)0x0;
      local_78 = 0x800000000;
      FUN_147f78a78(param_1,local_180);
      pdVar17 = local_80;
      if (local_80 == (double *)0x0) {
        pdVar17 = local_180;
      }
      if ((longlong)(int)local_78 != 0) {
        pdVar18 = pdVar17 + (longlong)(int)local_78 * 4;
        do {
          pdVar13 = *(double **)(param_1 + 0x110);
          dVar4 = *pdVar17;
          dVar5 = pdVar17[1];
          dVar6 = pdVar13[1];
          dVar7 = pdVar13[2];
          dVar8 = *pdVar13;
          local_198 = *(undefined4 *)(pdVar17 + 2);
          uStack_194 = *(undefined4 *)((longlong)pdVar17 + 0x14);
          uStack_190 = *(undefined4 *)(pdVar17 + 3);
          uStack_18c = *(undefined4 *)((longlong)pdVar17 + 0x1c);
          pdVar13 = (double *)*param_2;
          dVar9 = *pdVar13;
          dVar10 = pdVar13[2];
          dVar11 = pdVar13[1];
          iVar12 = *(int *)(param_1 + 0x108);
          *(uint *)(param_1 + 0x108) = iVar12 + 1U;
          if (*(uint *)(param_1 + 0x10c) < iVar12 + 1U) {
            FUN_147f7ee40(param_1,iVar12);
          }
          lVar15 = *(longlong *)(param_1 + 0x100);
          if (*(longlong *)(param_1 + 0x100) == 0) {
            lVar15 = param_1;
          }
          lVar16 = (longlong)iVar12 * 0x20;
          *(double *)(lVar15 + lVar16) =
               (((dVar4 - dVar6) / dVar7 + dVar8) - dVar9) * dVar10 + dVar11;
          *(double *)(lVar15 + 8 + lVar16) = (dVar5 / dVar7) * dVar10;
          puVar3 = (undefined4 *)(lVar15 + 0x10 + lVar16);
          *puVar3 = local_198;
          puVar3[1] = uStack_194;
          puVar3[2] = uStack_190;
          puVar3[3] = uStack_18c;
          pdVar17 = pdVar17 + 4;
        } while (pdVar17 != pdVar18);
      }
      if (local_80 != (double *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = *param_2;
    }
  }
  lVar16 = param_2[1];
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x118);
  *(longlong *)(param_1 + 0x110) = lVar15;
  *(longlong *)(param_1 + 0x118) = lVar16;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = (longlong *)param_2[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a38f2 FUN_1438a38f2 body=326 status=ok
// SIG undefined FUN_1438a38f2(void)

undefined8 * FUN_1438a38f2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x110) != 0) goto LAB_1438a390b;
  plVar4 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14acb7dd0;
  FUN_147f819d6(plVar4 + 2,0x404e000000000000,0x3fe0000000000000);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x118);
    if (plVar5 == (longlong *)0x0) goto LAB_1438a390b;
    *(undefined8 *)(param_1 + 0x118) = 0;
LAB_1438a39c8:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_1438a390b;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x110) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x118);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x118) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1438a39c8;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1438a390b:
  *param_2 = *(undefined8 *)(param_1 + 0x110);
  lVar3 = *(longlong *)(param_1 + 0x118);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1438a3a38 FUN_1438a3a38 body=331 status=ok
// SIG undefined FUN_1438a3a38(void)

void FUN_1438a3a38(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  code *local_50;
  longlong **local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x2d] == 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1438a36a2(param_1 + 0xb,&local_30,1);
    (**(code **)(*param_1 + 0xa8))(param_1,&local_40);
    local_60 = local_40;
    local_58 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    local_48 = &local_68;
    local_50 = FUN_1438a71ca;
    local_68 = param_1;
    FUN_1408f9750(param_1);
    plVar3 = local_58;
    plVar4 = local_38;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_38;
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar4 = local_38;
        }
      }
    }
  }
  else {
    FUN_1438a38f2(param_1 + 0xb,&local_68);
    plVar4 = local_60;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a3b84 FUN_1438a3b84 body=54 status=ok
// SIG undefined FUN_1438a3b84(void)

void FUN_1438a3b84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  FUN_147f77696(param_1 + 0x178);
  FUN_1438a3074(param_1 + 0x178,lVar1 + 0x38,param_1);
  return;
}



// FUNCTION 1438a3bba FUN_1438a3bba body=1339 status=ok
// SIG undefined FUN_1438a3bba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a3bba(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  double **ppdVar12;
  longlong lVar13;
  ulonglong uVar14;
  double *pdVar15;
  double *pdVar16;
  longlong *plVar17;
  bool bVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_318 [40];
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  double *local_2c0;
  longlong *local_2b8;
  double **local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  double local_1a0 [3];
  undefined4 local_188;
  double local_180 [32];
  double *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_80 = (double *)0x0;
  local_78 = 0x800000000;
  plVar1 = param_1 + 0xb;
  FUN_147f78854(plVar1,local_180);
  pdVar16 = local_80;
  if (local_80 == (double *)0x0) {
    pdVar16 = local_180;
  }
  if ((longlong)(int)local_78 != 0) {
    pdVar15 = pdVar16 + (longlong)(int)local_78 * 4;
    do {
      if ((param_1[0x2f] == 0) || (*(char *)(param_1[0x2f] + 0x140) != '\x01')) {
        lVar6 = param_1[8];
        lVar7 = param_1[9];
        uVar11 = FUN_1408d3a8a(lVar6);
        FUN_147f7a8f8(&local_2c0,uVar11);
        if (local_2b8 != (longlong *)0x0) {
          iVar10 = (int)local_2b8[1];
          do {
            if (iVar10 == 0) {
              plVar17 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar9 = (int)local_2b8[1];
            bVar18 = iVar10 == iVar9;
            if (bVar18) {
              *(int *)(local_2b8 + 1) = iVar10 + 1;
              iVar9 = iVar10;
            }
            iVar10 = iVar9;
            UNLOCK();
            plVar17 = local_2b8;
          } while (!bVar18);
          LOCK();
          piVar3 = (int *)((longlong)local_2b8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_2b8 + 0x10))();
          }
          if (plVar17 != (longlong *)0x0) {
            if ((local_2c0 != (double *)0x0) && (lVar13 = *(longlong *)(lVar7 + 0x38), lVar13 != 0))
            {
              local_2d0 = *(undefined8 *)(lVar6 + 0x148);
              local_2c8 = *(longlong *)(lVar6 + 0x150);
              if (local_2c8 != 0) {
                LOCK();
                *(int *)(local_2c8 + 8) = *(int *)(local_2c8 + 8) + 1;
                UNLOCK();
                lVar13 = *(longlong *)(lVar7 + 0x38);
              }
              FUN_147f77e3c(local_2c0,&local_2c0,lVar13,&local_2d0);
              plVar2 = local_2b8;
              param_1[0x2f] = (longlong)local_2c0;
              local_2c0 = (double *)0x0;
              plVar8 = (longlong *)param_1[0x30];
              if (local_2b8 == plVar8) {
LAB_1438a3da5:
                plVar8 = local_2b8;
                if (local_2b8 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_2b8 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_2b8)(local_2b8);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar8 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
              }
              else {
                local_2b8 = (longlong *)0x0;
                param_1[0x30] = (longlong)plVar2;
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar8 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar8)(plVar8);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar8 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                  goto LAB_1438a3da5;
                }
              }
              dVar19 = -1.0;
              if (9.999999747378752e-05 < pdVar16[1]) {
                dVar19 = pdVar16[1] + *pdVar16;
              }
              param_1[0x31] = (longlong)dVar19;
            }
            LOCK();
            plVar8 = plVar17 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar3 = (int *)((longlong)plVar17 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
      }
      pdVar16 = pdVar16 + 4;
    } while (pdVar16 != pdVar15);
  }
  if (param_1[0x2f] != 0) {
    FUN_1438a38f2(plVar1,&local_2c0);
    plVar17 = local_2b8;
    auVar22._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
    auVar22._0_8_ = DAT_14cb262c8;
    auVar22._12_4_ = 0x45300000;
    dVar21 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
             (auVar22._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
    dVar19 = *local_2c0;
    dVar4 = local_2c0[2];
    dVar5 = local_2c0[1];
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_2b8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar3 = (int *)((longlong)plVar17 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    if ((*(char *)(param_1[0x2f] + 0x140) != '\x01') ||
       (((double)param_1[0x31] < (dVar21 - dVar19) * dVar4 + dVar5 && (0.0 < (double)param_1[0x31]))
       )) {
      FUN_147f762da();
      param_1[0x2f] = 0;
      plVar17 = (longlong *)param_1[0x30];
      if (plVar17 != (longlong *)0x0) {
        param_1[0x30] = 0;
        LOCK();
        plVar8 = plVar17 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar3 = (int *)((longlong)plVar17 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      local_1a0[1] = 0.0;
      local_1a0[2] = 0.0;
      local_188 = 0;
      FUN_1438a38f2(plVar1,&local_2c0);
      plVar17 = local_2b8;
      auVar20._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
      auVar20._0_8_ = DAT_14cb262c8;
      auVar20._12_4_ = 0x45300000;
      local_1a0[0] = ((((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
                      (auVar20._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0 - *local_2c0) *
                     local_2c0[2] + local_2c0[1];
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_2b8 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar3 = (int *)((longlong)plVar17 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      local_1a0[1] = 0.0;
      local_1c0 = (double **)0x0;
      local_1b8 = 0x800000000;
      local_1b0 = 0;
      uStack_1a8 = 0;
      FUN_1438a38f2(plVar1,&local_2f0);
      local_2e0 = local_2f0;
      local_2d8 = local_2e8;
      if (local_2e8 == (longlong *)0x0) {
        FUN_1438a36a2(&local_2c0,&local_2e0);
      }
      else {
        LOCK();
        *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
        UNLOCK();
        FUN_1438a36a2(&local_2c0,&local_2e0);
        if (local_2e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2e8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_2e8)(local_2e8);
            LOCK();
            piVar3 = (int *)((longlong)local_2e8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_2e8 + 0x10))(local_2e8);
            }
          }
        }
      }
      uVar14 = 0;
      if (0 < (int)local_1b8) {
        ppdVar12 = &local_2c0;
        if (local_1c0 != (double **)0x0) {
          ppdVar12 = local_1c0;
        }
        uVar14 = 0;
        do {
          if (local_1a0[0] < (double)*ppdVar12) goto LAB_1438a405c;
          uVar14 = uVar14 + 1;
          ppdVar12 = ppdVar12 + 4;
        } while ((local_1b8 & 0xffffffff) != uVar14);
        uVar14 = local_1b8 & 0xffffffff;
      }
LAB_1438a405c:
      FUN_147f78178(&local_2c0,local_1a0,uVar14);
      FUN_147f78c0c(param_1,&local_2c0,1);
      FUN_147f6f94a(&local_2c0);
    }
  }
  if (((int)param_1[0x2c] < 1) && (param_1[0x2f] == 0)) {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  if (local_80 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a40f6 FUN_1438a40f6 body=1 status=ok
// SIG undefined FUN_1438a40f6(void)

void FUN_1438a40f6(void)

{
  return;
}



// FUNCTION 1438a40f8 FUN_1438a40f8 body=334 status=ok
// SIG undefined FUN_1438a40f8(void)

undefined8 FUN_1438a40f8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((char)param_1[0xd] == '\0') {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar2 = FUN_1449baec6(uVar3);
      if (lVar2 != 0) {
        uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar2 = FUN_1449baec6(uVar3);
        *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) | 2;
      }
    }
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],&local_58,param_1 + 0xb);
    FUN_140056680(local_78,&DAT_14a1354e6);
    FUN_1468181c8(&local_68,&local_58,local_78);
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = (undefined4)uStack_60;
    uStack_4c = uStack_60._4_4_;
    local_68 = 0;
    uStack_60 = 0;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    plVar1 = (longlong *)param_1[9];
    uVar3 = (**(code **)*plVar1)(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_68,uVar3,&local_48);
    *(undefined1 *)(param_1 + 0xd) = 1;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a424a FUN_1438a424a body=77 status=ok
// SIG undefined FUN_1438a424a(void)

void FUN_1438a424a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar1 = FUN_1449baec6(uVar2);
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar1 = FUN_1449baec6(uVar2);
      *(byte *)(lVar1 + 0x6c) = *(byte *)(lVar1 + 0x6c) & 0xfd;
    }
  }
  return;
}



// FUNCTION 1438a42ba FUN_1438a42ba body=157 status=ok
// SIG undefined FUN_1438a42ba(void)

void FUN_1438a42ba(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 != 0) {
    do {
      pcVar1 = (code *)*param_2;
      plVar3 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar3 = param_2 + 4;
      }
      local_38 = lVar4;
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,&local_38);
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a4358 FUN_1438a4358 body=73 status=ok
// SIG undefined FUN_1438a4358(void)

void FUN_1438a4358(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x1d0) != 0) {
    lVar2 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1c0);
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *param_2 = *(undefined8 *)(lVar2 + 0x20);
    param_2[1] = uVar1;
    param_2[2] = *(undefined8 *)(lVar2 + 0x30);
    return;
  }
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return;
}



// FUNCTION 1438a43a1 FUN_1438a43a1 body=69 status=ok
// SIG undefined FUN_1438a43a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a43a1(void)

{
  _DAT_14cb25848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a43e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb25850,1);
  return;
}



// FUNCTION 1438a43e6 FUN_1438a43e6 body=69 status=ok
// SIG undefined FUN_1438a43e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a43e6(void)

{
  _DAT_14cb25858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a4428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb25860,1);
  return;
}



// FUNCTION 1438a442c FUN_1438a442c body=538 status=ok
// SIG undefined FUN_1438a442c(void)

void FUN_1438a442c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb25ab0 == '\x01') {
    if ((char)param_2 == '\0') {
      lVar3 = (longlong)(int)(*(longlong **)(param_1 + 0x40))[1];
      if (lVar3 != 0) {
        lVar2 = **(longlong **)(param_1 + 0x40);
        lVar4 = 0;
        do {
          if (*(longlong *)(lVar2 + lVar4) != 0) {
            FUN_14033a7c0();
          }
          lVar4 = lVar4 + 8;
        } while (lVar3 * 8 != lVar4);
      }
    }
    else if (DAT_14cb25ed0 != (longlong *)0x0) {
      (**(code **)(*DAT_14cb25ed0 + 0x2b8))();
    }
    FUN_147f82a5c(param_2);
    FUN_14042c9dc(*(undefined8 *)(param_1 + 0x60));
    if (DAT_14cb25ab0 == '\x01') {
      if (DAT_14cb253f8 == (longlong *)0x0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147f6f09d;
        local_60 = &LAB_146201c25;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000006;
        local_80 = 8;
        local_88 = 0x480;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
      }
      plVar1 = DAT_14cb253f8;
      lVar3 = DAT_14cb253f8[0x22];
      if (lVar3 == 0) {
        (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
        lVar3 = plVar1[0x22];
      }
      if ((longlong)*(int *)(lVar3 + 0x1f0) != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x1e8);
        lVar3 = (longlong)*(int *)(lVar3 + 0x1f0) << 4;
        do {
          FUN_1438a4e74(lVar2);
          lVar2 = lVar2 + 0x10;
          lVar3 = lVar3 + -0x10;
        } while (lVar3 != 0);
      }
    }
    if ((char)param_2 == '\0') {
      FUN_147f83630();
      FUN_1461a3132(*(undefined8 *)(param_1 + 0x60));
      FUN_147f7c724();
      if (DAT_14cb25ab0 == '\x01') {
        AK::SoundEngine::UnloadBank(DAT_14cb25950,(void *)0x0,0);
      }
      AK::SoundEngine::RenderAudio(true);
      if (DAT_14cb25ab0 == '\x01') {
        AK::SoundEngine::LoadBank(DAT_14cb25950,0);
      }
      FUN_145947ca4();
      FUN_147f83690();
    }
    else {
      AK::SoundEngine::RenderAudio(true);
    }
    FUN_1438a4cca();
    FUN_147f82ac0(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a465c FUN_1438a465c body=69 status=ok
// SIG undefined FUN_1438a465c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a465c(void)

{
  _DAT_14cb25868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a469e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb25870,1);
  return;
}



// FUNCTION 1438a46a1 FUN_1438a46a1 body=69 status=ok
// SIG undefined FUN_1438a46a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a46a1(void)

{
  _DAT_14cb25878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a46e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb25880,1);
  return;
}



// FUNCTION 1438a46e6 FUN_1438a46e6 body=69 status=ok
// SIG undefined FUN_1438a46e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a46e6(void)

{
  _DAT_14cb25888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a4728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb25890,1);
  return;
}



// FUNCTION 1438a472b FUN_1438a472b body=69 status=ok
// SIG undefined FUN_1438a472b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a472b(void)

{
  _DAT_14cb25898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a476d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb258a0,1);
  return;
}



// FUNCTION 1438a4770 FUN_1438a4770 body=69 status=ok
// SIG undefined FUN_1438a4770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a4770(void)

{
  _DAT_14cb258a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a47b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb258b0,1);
  return;
}



// FUNCTION 1438a47b5 FUN_1438a47b5 body=69 status=ok
// SIG undefined FUN_1438a47b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a47b5(void)

{
  _DAT_14cb258b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a47f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb258c0,1);
  return;
}



// FUNCTION 1438a47fa FUN_1438a47fa body=69 status=ok
// SIG undefined FUN_1438a47fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a47fa(void)

{
  _DAT_14cb258c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a483c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb258d0,1);
  return;
}



// FUNCTION 1438a483f FUN_1438a483f body=69 status=ok
// SIG undefined FUN_1438a483f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a483f(void)

{
  _DAT_14cb258d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a4881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb258e0,1);
  return;
}



// FUNCTION 1438a4884 FUN_1438a4884 body=69 status=ok
// SIG undefined FUN_1438a4884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a4884(void)

{
  _DAT_14cb258e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a48c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb258f0,1);
  return;
}



// FUNCTION 1438a48c9 FUN_1438a48c9 body=69 status=ok
// SIG undefined FUN_1438a48c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a48c9(void)

{
  _DAT_14cb258f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438a490b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb25900,1);
  return;
}



// FUNCTION 1438a491e FUN_1438a491e body=554 status=ok
// SIG undefined FUN_1438a491e(void)

void FUN_1438a491e(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  wchar_t *local_60 [2];
  undefined2 *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_140d5712e();
  lVar8 = *(longlong *)(lVar5 + 0x28);
  plVar3 = *(longlong **)(lVar5 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar8 + 0x30);
  lVar5 = (longlong)local_38;
  pvVar4 = *(void **)(lVar8 + 0x28);
  if (lVar5 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar4,lVar5 * 2);
  }
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
  FUN_140d56fc2();
  pwVar6 = AK::StreamMgr::GetCurrentLanguage();
  puVar7 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar7 = local_50;
  }
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)pwVar6 + lVar8);
    uVar10 = (ulonglong)uVar9;
    uVar11 = *(ushort *)((longlong)puVar7 + lVar8);
    if (uVar9 != uVar11) break;
    if (uVar9 == 0) goto LAB_1438a4a2b;
LAB_1438a4a00:
    lVar8 = lVar8 + 2;
  }
  if ((uVar11 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1438a4a00;
  }
  if (uVar9 != uVar11) {
    FUN_146447ffa(local_60,&local_50);
    AK::StreamMgr::SetCurrentLanguage(local_60[0]);
    if (local_60[0] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_1438a442c(param_1,1);
    pvVar4 = local_40;
    local_70 = (void *)0x0;
    lVar8 = (longlong)local_38;
    local_68 = local_38;
    if (lVar8 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_38,0);
      memcpy(local_70,pvVar4,lVar8 * 2);
    }
    puVar7 = local_50;
    local_80 = (void *)0x0;
    local_78 = local_48;
    if ((longlong)local_48 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_48,0);
      memcpy(local_80,puVar7,(longlong)local_48 * 2);
    }
    FUN_1461efdd0(param_1,&local_80,&local_70);
  }
LAB_1438a4a2b:
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a4b4a FUN_1438a4b4a body=382 status=ok
// SIG undefined FUN_1438a4b4a(void)

void FUN_1438a4b4a(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 0xc) != -1) {
    FUN_147f8328a();
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    lVar6 = 0;
    do {
      uVar2 = puVar4[lVar6];
      bVar1 = (&DAT_14acb3f34)[lVar6];
      iVar7 = (uint)uVar2 - (uint)bVar1;
      if (iVar7 == 0) {
        if (uVar2 == 0) goto LAB_1438a4c33;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_1438a4c2e;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_1438a4c2b;
      }
      lVar6 = lVar6 + 1;
    } while( true );
  }
  uVar5 = FUN_140d5712e();
  FUN_140056680(&local_48,&DAT_149e19e7a);
  local_38 = &DAT_14acb7de8;
  local_30 = 5;
  local_2c = 0;
  uVar3 = FUN_14001a6c0(&local_38,1);
LAB_1438a4c88:
  local_38 = (undefined2 *)(ulonglong)uVar3;
  FUN_1461bef36(uVar5,&local_38,&local_48);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1438a491e(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1438a4c2b:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_1438a4c2e:
  if (iVar7 == 0) {
LAB_1438a4c33:
    FUN_1400020e8(&local_48,L"-Hans-CN",8);
  }
  uVar5 = FUN_140d5712e();
  local_38 = &DAT_14acb7de8;
  local_30 = 5;
  local_2c = 0;
  uVar3 = FUN_14001a6c0(&local_38,1);
  goto LAB_1438a4c88;
}



// FUNCTION 1438a4cca FUN_1438a4cca body=425 status=ok
// SIG undefined FUN_1438a4cca(void)

void FUN_1438a4cca(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb25ab0 == '\x01') {
    if (DAT_14cb253f8 == (longlong *)0x0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147f6f09d;
      local_60 = &LAB_146201c25;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000006;
      local_80 = 8;
      local_88 = 0x480;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
    }
    plVar2 = DAT_14cb253f8;
    lVar3 = DAT_14cb253f8[0x22];
    if (lVar3 == 0) {
      (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
      lVar3 = plVar2[0x22];
    }
    local_38 = (code *)0x0;
    iVar5 = *(int *)(lVar3 + 0x1f0);
    uVar1 = *(undefined8 *)(lVar3 + 0x1e8);
    local_30 = iVar5;
    if (iVar5 == 0) {
      local_2c = 0;
      iVar5 = 0;
    }
    else {
      FUN_140b856de(&local_38,iVar5,0);
      FUN_140b8566a(local_38,uVar1,iVar5);
      iVar5 = 0;
      if ((longlong)local_30 != 0) {
        lVar3 = (longlong)local_30 << 4;
        pcVar4 = local_38;
        do {
          FUN_1413dbde0(pcVar4);
          pcVar4 = pcVar4 + 0x10;
          lVar3 = lVar3 + -0x10;
          iVar5 = local_30;
        } while (lVar3 != 0);
      }
    }
    FUN_1447a1747(local_38,iVar5);
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438a4e74 FUN_1438a4e74 body=81 status=ok
// SIG undefined FUN_1438a4e74(void)

undefined8 FUN_1438a4e74(undefined8 *param_1)

{
  uint uVar1;
  AKRESULT AVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  wchar_t *pwVar4;
  
  if (DAT_14cb25ab0 == '\x01') {
    if (*(int *)(param_1 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*param_1;
    }
    if (pwVar4 == (wchar_t *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = AK::SoundEngine::GetIDFromString(pwVar4);
    }
    AVar2 = AK::SoundEngine::PrepareBank(1,uVar1,1,0);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,AVar2) >> 8),AVar2 == 1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1438a4ec6 FUN_1438a4ec6 body=79 status=ok
// SIG undefined FUN_1438a4ec6(void)

undefined8 FUN_1438a4ec6(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((int)param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)param_1[1] + -1;
    uVar2 = *(undefined8 *)(*param_1 + (longlong)iVar1 * 8);
    *(int *)(param_1 + 1) = iVar1;
    iVar1 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
      FUN_1407c33ba(param_1 + 2,iVar1);
    }
    *(undefined8 *)(param_1[2] + (longlong)iVar1 * 8) = uVar2;
  }
  return uVar2;
}



// FUNCTION 1438a4f15 FUN_1438a4f15 body=49 status=ok
// SIG undefined FUN_1438a4f15(void)

void FUN_1438a4f15(void)

{
  FUN_145c28fd3(DAT_14cb25a00,DAT_14cb25a08);
  if (DAT_14cb25a00 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1438a4f46 FUN_1438a4f46 body=49 status=ok
// SIG undefined FUN_1438a4f46(void)

void FUN_1438a4f46(void)

{
  FUN_141819ce7(DAT_14cb25a10,DAT_14cb25a18);
  if (DAT_14cb25a10 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1438a4f78 FUN_1438a4f78 body=11 status=ok
// SIG undefined FUN_1438a4f78(void)

undefined8 * FUN_1438a4f78(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 4);
  return param_2;
}



// FUNCTION 1438a4f8c FUN_1438a4f8c body=545 status=ok
// SIG undefined FUN_1438a4f8c(void)

undefined8
FUN_1438a4f8c(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,longlong *param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = *(int *)(param_2 + 1);
  uVar3 = 0x1f;
  if ((iVar6 < 2) || (uVar7 = iVar6 - 1, 0x103 < uVar7)) goto LAB_1438a5188;
  if (((param_3 == 0) || (*(int *)(param_3 + 4) != 0xe)) &&
     (cVar2 = FUN_146818f4e(param_2), cVar2 == '\0')) {
    iVar1 = *(int *)(param_1 + 0x18) + -1;
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_5,*(undefined8 *)(param_1 + 0x10),iVar1);
  }
  if ((param_4 == 0 && param_3 != 0) && (*(char *)(param_3 + 0x18) == '\x01')) {
    pwVar4 = AK::StreamMgr::GetCurrentLanguage();
    sVar5 = wcslen(pwVar4);
    if (sVar5 != 0) {
      uVar7 = iVar6 + (int)sVar5;
      uVar3 = 2;
      if (0x103 < (int)uVar7) goto LAB_1438a5188;
      pwVar4 = AK::StreamMgr::GetCurrentLanguage();
      FUN_140056680(&local_78,pwVar4);
      local_58 = local_78;
      if (local_70 == 0) {
        local_58 = L"";
      }
      if ((int)param_5[1] == 0) {
        local_68 = L"";
LAB_1438a50ac:
        sVar5 = wcslen(local_68);
        local_60 = (int)sVar5;
      }
      else {
        local_68 = (wchar_t *)*param_5;
        if (local_68 != (wchar_t *)0x0) goto LAB_1438a50ac;
        local_60 = 0;
      }
      if (local_58 == (wchar_t *)0x0) {
        local_50 = 0;
      }
      else {
        sVar5 = wcslen(local_58);
        local_50 = (int)sVar5;
      }
      FUN_140bee87a(&local_88,&local_68,2);
      if (&local_88 == param_5) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_5 != 0) {
          FUN_1400020a8();
        }
        *param_5 = local_88;
        local_88 = 0;
        *(undefined4 *)(param_5 + 1) = local_80;
        *(undefined4 *)((longlong)param_5 + 0xc) = local_7c;
      }
      FUN_1400020e8(param_5,&DAT_149e065c6,1);
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  iVar6 = (int)param_5[1] + -1;
  if ((int)param_5[1] == 0) {
    iVar6 = 0;
  }
  uVar3 = 2;
  if ((int)(iVar6 + uVar7) < 0x104) {
    iVar6 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar6 = 0;
    }
    FUN_1400020e8(param_5,*param_2,iVar6);
    uVar3 = 1;
  }
LAB_1438a5188:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1438a51ae FUN_1438a51ae body=236 status=ok
// SIG undefined FUN_1438a51ae(void)

void FUN_1438a51ae(undefined4 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (DAT_14c82b500 != (longlong *)0x0) {
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar1 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar1 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) {
        return;
      }
    }
    *param_1 = param_2;
    uVar2 = (**(code **)(*DAT_14c82b500 + 0x20))();
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    if (param_3 != 0) {
      *param_4 = FUN_1438a529a;
      param_4[4] = param_1;
      *(uint *)(param_4 + 1) = param_3;
      *(uint *)((longlong)param_4 + 0xc) = param_3;
      *(uint *)(param_4 + 2) = param_3;
    }
  }
  return;
}



// FUNCTION 1438a529a FUN_1438a529a body=194 status=ok
// SIG undefined FUN_1438a529a(void)

void FUN_1438a529a(undefined8 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < param_3) {
    uVar2 = *param_4;
    do {
      local_78 = 0;
      local_68 = &PTR_LAB_14acb4d50;
      local_88[0] = FUN_1438a6d12;
      local_98 = 0x4ff;
      local_60 = param_1;
      local_58 = param_2;
      local_54 = uVar2;
      FUN_14014aede(&local_90,local_88);
      if (local_90 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_90 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_90)(local_90,1);
        }
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a535e FUN_1438a535e body=20 status=ok
// SIG undefined FUN_1438a535e(void)

void FUN_1438a535e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x30);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 1438a5372 FUN_1438a5372 body=4113 status=ok
// SIG undefined FUN_1438a5372(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a5372(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  AKRESULT AVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *pvVar12;
  undefined8 uVar13;
  IAkStreamMgr *pIVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackY_338 [32];
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  uint local_294;
  uint local_290;
  undefined4 local_28c;
  longlong local_288;
  undefined4 local_27c;
  undefined4 local_270;
  undefined4 local_264;
  undefined4 local_258;
  undefined2 local_250;
  undefined4 local_244;
  longlong *local_240 [7];
  AkStreamMgrSettings local_201;
  code *local_200;
  longlong *local_1f8;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *plStack_110;
  code *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_338;
  local_200 = (code *)0x149eccdf0;
  local_1f8 = (longlong *)CONCAT35(local_1f8._5_3_,8);
  uVar5 = FUN_14001a6c0(&local_200,1);
  plVar10 = (longlong *)FUN_1447c1074(uVar5);
  if (plVar10 != (longlong *)0x0) {
    plVar11 = (longlong *)FUN_145b0fd00();
    lVar19 = plVar11[0x22];
    if (lVar19 == 0) {
      (**(code **)(*plVar11 + 1000))(plVar11);
      lVar19 = plVar11[0x22];
      if (lVar19 != 0) goto LAB_1438a542a;
      local_118._0_4_ = 0;
      iVar6 = 0;
      uVar7 = (uint)local_118;
    }
    else {
LAB_1438a542a:
      uVar7 = *(uint *)(lVar19 + 0xc);
      local_118 = (code *)(ulonglong)uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar6 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar18 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar18);
        }
        LOCK();
        iVar6 = *(int *)(lVar19 + 0x10);
        bVar20 = iVar6 == 0;
        if (bVar20) {
          *(int *)(lVar19 + 0x10) = iVar18;
          iVar6 = 0;
        }
        UNLOCK();
        uVar7 = (uint)local_118;
        if (bVar20) {
          iVar6 = iVar18;
        }
      }
    }
    local_118._0_4_ = uVar7;
    local_118 = (code *)CONCAT44(iVar6,(uint)local_118);
    FUN_140056680(&local_288,L"Editor Settings for GbxAudio");
    FUN_140233b1a(&local_f8,&local_288);
    FUN_140056680(&local_108,L"Gbx Audio");
    FUN_140233b1a(local_240,&local_108);
    local_200 = (code *)0x14acb403c;
    local_1f8._0_5_ = 9;
    uVar7 = FUN_14001a6c0(&local_200,1);
    local_128 = (code *)(ulonglong)uVar7;
    local_200 = (code *)0x14acb4046;
    local_1f8._0_5_ = 7;
    uVar7 = FUN_14001a6c0(&local_200,1);
    local_138 = (code *)(ulonglong)uVar7;
    local_200 = (code *)0x149e3b486;
    local_1f8 = (longlong *)CONCAT35(local_1f8._5_3_,6);
    uVar7 = FUN_14001a6c0(&local_200,1);
    local_200 = (code *)(ulonglong)uVar7;
    (**(code **)(*plVar10 + 0x58))(plVar10,local_2b8,&local_200);
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_2b0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)local_2b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2b0 + 0x10))(local_2b0);
        }
      }
    }
    if (local_240[0] != (longlong *)0x0) {
      (**(code **)(*local_240[0] + 0x10))();
    }
    if (local_108 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    if (local_288 != 0) {
      FUN_1400020a8();
    }
  }
  pvVar12 = (void *)FUN_14001cc68(0xe8,0x10);
  FUN_146447d36(pvVar12);
  DAT_14cb259f8 = pvVar12;
  if (pvVar12 == (void *)0x0) goto LAB_1438a5ed4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caced84) && (FUN_144b3d300(&DAT_14caced84), DAT_14caced84 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_14054d46e(&DAT_14c846b20,L"nosound");
    if (cVar3 == '\0') {
      DAT_14caced80 = 0;
    }
    else {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar4 = FUN_14054d46e(&DAT_14c846b20,L"enablesound");
      DAT_14caced80 = bVar4 ^ 1;
    }
    _Init_thread_footer(&DAT_14caced84);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caced8c) && (FUN_144b3d300(&DAT_14caced8c), DAT_14caced8c == -1)) {
    DAT_14caced88 = 1;
    if (DAT_14c866ff0 == '\0') {
      if (DAT_14c872bf0 == '\x01') {
        DAT_14caced88 = DAT_14c872bc0 ^ 1;
      }
      else {
        DAT_14caced88 = 0;
      }
    }
    _Init_thread_footer(&DAT_14caced8c);
  }
  if ((DAT_14caced88 == 0) && ((DAT_14caced80 & 1) == 0)) {
    if (DAT_14cb25ab0 == '\x01') {
LAB_1438a56b4:
      pvVar12 = DAT_14cb259f8;
      local_200 = (code *)0x0;
      local_1f8 = (longlong *)((ulonglong)local_1f8 & 0xffffffff00000000);
      FUN_1446efa72(&local_200,0,3,0x10);
      pcVar2 = local_200;
      *(undefined ***)local_200 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar19 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar19 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar19;
      *(longlong *)(local_200 + 0x10) = lVar17;
      *(undefined ***)local_200 = &PTR_FUN_14acb5410;
      *(void **)(local_200 + 0x18) = pvVar12;
      *(code **)(local_200 + 0x20) = FUN_140607a08;
      plVar10 = (longlong *)(param_1 + 8);
      local_200 = (code *)0x0;
      local_1f8 = (longlong *)((ulonglong)local_1f8 & 0xffffffff00000000);
      if (*(int *)(param_1 + 0x10) == 0) {
LAB_1438a5769:
        if (*plVar10 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar15 = (undefined8 *)*plVar10;
        if (puVar15 != (undefined8 *)0x0) {
          (**(code **)*puVar15)(puVar15,0);
          FUN_1446efa72(plVar10,0,0,0x10);
          *(undefined4 *)(param_1 + 0x10) = 0;
          goto LAB_1438a5769;
        }
      }
      *(code **)(param_1 + 8) = pcVar2;
      *(undefined4 *)(param_1 + 0x10) = 3;
      if ((int)local_1f8 == 0) {
LAB_1438a57c0:
        if (local_200 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_200 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_200)(local_200,0);
        FUN_1446efa72(&local_200,0,0,0x10);
        local_1f8 = (longlong *)((ulonglong)local_1f8 & 0xffffffff00000000);
        goto LAB_1438a57c0;
      }
      uVar13 = FUN_1401cb356();
      FUN_1405f67fc(uVar13,&local_200,plVar10,L"FGbxAudioDevice_Tick");
      *(code **)(param_1 + 0x18) = local_200;
      local_200 = (code *)0x0;
      plVar10 = *(longlong **)(param_1 + 0x20);
      *(longlong **)(param_1 + 0x20) = local_1f8;
      local_1f8 = (longlong *)0x0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_1f8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1f8 + 0x10))();
          }
        }
      }
      goto LAB_1438a5ed4;
    }
    if (DAT_14cb253f8 == (longlong *)0x0) {
      local_200 = FUN_1449e2820;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8);
    }
    plVar10 = DAT_14cb253f8;
    lVar19 = DAT_14cb253f8[0x22];
    if (lVar19 == 0) {
      (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
      lVar19 = plVar10[0x22];
      if (lVar19 == 0) goto LAB_1438a5ead;
    }
    AK::MemoryMgr::GetDefaultSettings((AkMemSettings *)&local_200);
    local_140 = 0;
    local_1a8 = &LAB_1438ab348;
    local_1a0 = &LAB_1438ab360;
    AVar8 = AK::MemoryMgr::Init((AkMemSettings *)&local_200);
    if (AVar8 == 1) {
      AK::StreamMgr::GetDefaultSettings((AkStreamMgrSettings *)&local_f8);
      pIVar14 = AK::StreamMgr::Create(&local_201);
      if (pIVar14 != (IAkStreamMgr *)0x0) {
        uVar13 = FUN_140d5712e();
        FUN_140056680(&local_288,&DAT_149e19e7a);
        local_f8 = (longlong *)&DAT_14acb7de8;
        local_f0 = 5;
        local_ec = 0;
        uVar7 = FUN_14001a6c0(&local_f8,1);
        local_f8 = (longlong *)(ulonglong)uVar7;
        FUN_1461bef36(uVar13,&local_f8,&local_288);
        if (local_288 != 0) {
          FUN_1400020a8();
        }
        lVar17 = FUN_140d5712e();
        FUN_146447f14(lVar17 + 8,&local_f8,pvVar12);
        FUN_1438a491e(pvVar12);
        FUN_145d5d61c(local_240,lVar19);
        cVar3 = FUN_145c0f624(local_240);
        if (cVar3 != '\0') {
          FUN_1438ab382((AkInitSettings *)&local_f8,lVar19);
          local_60 = &DAT_1438a490e;
          local_58 = &DAT_1438a490f;
          local_50 = &DAT_1438a4910;
          AK::SoundEngine::GetDefaultPlatformInitSettings((AkPlatformInitSettings *)&local_288);
          local_250 = *(undefined2 *)(lVar19 + 0x318);
          local_244 = *(undefined4 *)(lVar19 + 0x338);
          local_27c = 0xffffffff;
          local_270 = 0xffffffff;
          local_264 = 0xffffffff;
          local_258 = 0xffffffff;
          AVar8 = AK::SoundEngine::Init
                            ((AkInitSettings *)&local_f8,(AkPlatformInitSettings *)&local_288);
          if (AVar8 == 1) {
            AK::MusicEngine::GetDefaultInitSettings((AkMusicSettings *)&local_108);
            local_28c = local_108._0_4_;
            AVar8 = AK::MusicEngine::Init((AkMusicSettings *)&local_28c);
            if (AVar8 == 1) {
              AK::SoundEngine::GetAudioSettings((AkAudioSettings *)&local_294);
              *(uint *)((longlong)pvVar12 + 0x90) = local_290;
              *(uint *)((longlong)pvVar12 + 0x94) = local_294;
              _DAT_14cb262c0 = (double)local_294 / (double)local_290;
              *(double *)((longlong)pvVar12 + 0x98) = _DAT_14cb262c0;
              DAT_14cb262b8 = 1;
              DAT_14cb262bc = local_290;
              if (DAT_14cb26560 == (undefined8 *)0x0) {
                puVar15 = (undefined8 *)FUN_14001cc68(0x48,0x10);
                *puVar15 = 0;
                puVar15[1] = 0;
                puVar15[2] = 0;
                puVar15[3] = 0;
                InitializeCriticalSection((LPCRITICAL_SECTION)(puVar15 + 4));
                SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar15 + 4),4000);
                DAT_14cb26560 = puVar15;
              }
              DAT_14cb25ab0 = '\x01';
              if (DAT_14cb253f8 == (longlong *)0x0) {
                local_108 = FUN_1449e2820;
                FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8);
              }
              if (DAT_14cb253f8[0x22] == 0) {
                (**(code **)(*DAT_14cb253f8 + 1000))();
              }
              local_108 = (code *)0x0;
              plStack_100 = (longlong *)0x0;
              FUN_1410f2562(&local_138);
              iVar6 = (int)local_130;
              iVar9 = ((int)local_130 == 0) + 0xb;
              local_128 = local_138;
              local_138 = (code *)0x0;
              iVar18 = local_130._4_4_;
              local_120 = local_130;
              local_130 = (longlong *)0x0;
              iVar16 = iVar9 + iVar6;
              if (iVar16 < iVar6) {
LAB_1438a631c:
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar9);
              }
              if (iVar16 < 0) {
LAB_1438a6323:
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar16);
              }
              if (iVar18 < iVar16) {
                FUN_1446f8c06(&local_128);
              }
              FUN_1401aebe8(&local_128,L"WwiseAudio",10);
              iVar6 = (int)local_120;
              iVar9 = ((int)local_120 == 0) + 1;
              local_118 = local_128;
              local_128 = (code *)0x0;
              iVar18 = local_120._4_4_;
              plStack_110 = local_120;
              local_120 = (longlong *)0x0;
              iVar16 = iVar9 + iVar6;
              if (iVar16 < iVar6) goto LAB_1438a631c;
              if (iVar16 < 0) goto LAB_1438a6323;
              if (iVar18 < iVar16) {
                FUN_1446f8c06(&local_118);
              }
              FUN_1401aebe8(&local_118,&DAT_149dfb77a,0);
              local_108 = local_118;
              plStack_100 = plStack_110;
              local_118 = (code *)0x0;
              plStack_110 = (longlong *)0x0;
              if (local_128 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_138 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_145ec9994(&local_108);
              if ((DAT_14cb25ab0 == '\x01') &&
                 (AVar8 = AK::SoundEngine::LoadBank(DAT_14cb25950,0), AVar8 == 1)) {
                FUN_145947ca4();
                FUN_1438a4cca();
              }
              if (local_108 != (code *)0x0) {
                FUN_1400020a8();
              }
              if ((longlong)DAT_14cb25a18 != 0) {
                plVar10 = *(longlong **)((longlong)pvVar12 + 0x30);
                lVar17 = (longlong)DAT_14cb25a18 * 0x2c0;
                lVar19 = DAT_14cb25a10;
                do {
                  iVar6 = (int)plVar10[1];
                  *(uint *)(plVar10 + 1) = iVar6 + 1U;
                  if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
                    FUN_1407c33ba(plVar10,iVar6);
                  }
                  *(longlong *)(*plVar10 + (longlong)iVar6 * 8) = lVar19;
                  lVar19 = lVar19 + 0x2c0;
                  lVar17 = lVar17 + -0x2c0;
                } while (lVar17 != 0);
              }
              FUN_144d5c300(&PTR_PTR_14c762698);
              FUN_140056680(&local_108,L"MasterMixListener");
              AK::SoundEngine::RegisterGameObj(1);
              if (local_108 != (code *)0x0) {
                FUN_1400020a8();
              }
              FUN_146448e30(*(undefined8 *)((longlong)pvVar12 + 0x60));
              AK::SoundEngine::RegisterGlobalCallback(FUN_1401cdafb,4,pvVar12,0,0,0);
              local_108 = (code *)FUN_1438a4ec6(*(undefined8 *)((longlong)pvVar12 + 0x30));
              if (local_108 != (code *)0x0) {
                *(int *)(local_108 + 0x108) = *(int *)(local_108 + 0x108) + 1;
              }
              plVar10 = (longlong *)((longlong)pvVar12 + 0xa0);
              FUN_1403c75f4(plVar10,&local_108);
              pcVar2 = local_108;
              if (((local_108 != (code *)0x0) &&
                  (*(int *)(local_108 + 0x108) = *(int *)(local_108 + 0x108) + -1,
                  *(int *)(local_108 + 0x130) < 1)) &&
                 (FUN_1400847bc(local_108 + 0xb8,0), *(int *)(pcVar2 + 0x108) == 0)) {
                FUN_140087e46(pcVar2);
                if (*(longlong *)pcVar2 != -1) {
                  if (DAT_14cb259f8 == (void *)0x0) goto LAB_1438a5dbc;
                  FUN_14033a6c8(*(undefined8 *)((longlong)DAT_14cb259f8 + 0x40),pcVar2);
                }
                if (DAT_14cb259f8 != (void *)0x0) {
                  FUN_14008869e(*(undefined8 *)((longlong)DAT_14cb259f8 + 0x30),pcVar2);
                }
              }
LAB_1438a5dbc:
              plVar11 = (longlong *)*plVar10;
              if (plVar11 == (longlong *)0x0) goto LAB_1438a56b4;
              if (((*(char *)((longlong)plVar11 + 0x114) != '\x01') &&
                  (*(undefined1 *)((longlong)plVar11 + 0x114) = 1, *plVar11 != -1)) &&
                 (DAT_14cb259f8 != (void *)0x0)) {
                FUN_1407c31d4(*(undefined8 *)((longlong)DAT_14cb259f8 + 0x40));
              }
              lVar19 = *plVar10;
              FUN_140056680(&local_108,L"WorldlessEmitter");
              if (DAT_14cb259f8 != (void *)0x0) {
                FUN_1407c3058(DAT_14cb259f8,lVar19,1,&local_108);
              }
              if (local_108 != (code *)0x0) {
                FUN_1400020a8();
              }
              *(undefined1 *)(*plVar10 + 0xb0) = 0;
              plStack_100 = (longlong *)FUN_1456c1abe();
              local_108 = (code *)(plStack_100 + 2);
              FUN_1456c1a1c(&local_108);
              plVar10 = plStack_100;
              if (plStack_100 == (longlong *)0x0) {
                *(code **)((longlong)pvVar12 + 0xa8) = local_108;
                plVar11 = *(longlong **)((longlong)pvVar12 + 0xb0);
                if (plVar11 != (longlong *)0x0) {
                  *(undefined8 *)((longlong)pvVar12 + 0xb0) = 0;
LAB_1438a5fdd:
                  LOCK();
                  plVar10 = plVar11 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar6 = *piVar1;
                    UNLOCK();
joined_r0x0001438a5fd0:
                    if (iVar6 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
              }
              else {
                LOCK();
                *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
                UNLOCK();
                *(code **)((longlong)pvVar12 + 0xa8) = local_108;
                plVar11 = *(longlong **)((longlong)pvVar12 + 0xb0);
                if (plStack_100 == plVar11) {
                  LOCK();
                  plVar11 = plStack_100 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*plStack_100)(plStack_100);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar6 = *piVar1;
                    UNLOCK();
                    plVar11 = plVar10;
                    goto joined_r0x0001438a5fd0;
                  }
                }
                else {
                  *(longlong **)((longlong)pvVar12 + 0xb0) = plStack_100;
                  if (plVar11 != (longlong *)0x0) goto LAB_1438a5fdd;
                }
              }
              plVar10 = plStack_100;
              if (plStack_100 != (longlong *)0x0) {
                LOCK();
                plVar11 = plStack_100 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*plStack_100)(plStack_100);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              FUN_140056680(&local_108,L"WorldlessListener");
              local_2a8 = *(undefined8 *)((longlong)pvVar12 + 0xa8);
              local_2a0 = *(longlong *)((longlong)pvVar12 + 0xb0);
              if (local_2a0 != 0) {
                LOCK();
                *(int *)(local_2a0 + 8) = *(int *)(local_2a0 + 8) + 1;
                UNLOCK();
              }
              FUN_1456c1c2a(pvVar12,&local_2a8,1,&local_108);
              if (local_108 != (code *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1438a56b4;
            }
          }
        }
      }
    }
  }
LAB_1438a5ead:
  pvVar12 = DAT_14cb259f8;
  if (DAT_14cb259f8 != (void *)0x0) {
    FUN_145af7286(DAT_14cb259f8);
    FUN_1400020a8(pvVar12);
  }
  DAT_14cb259f8 = (void *)0x0;
LAB_1438a5ed4:
  FUN_146448184(&local_200,param_1);
  FUN_146448264(&local_200,param_1);
  FUN_146448344(&local_200,param_1);
  if ((local_48 ^ (ulonglong)auStackY_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a6384 FUN_1438a6384 body=1186 status=ok
// SIG undefined FUN_1438a6384(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a6384(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  ulonglong local_b8 [2];
  code *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  ulonglong *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1401cb356();
  local_d8 = *(undefined8 *)(param_1 + 0x18);
  local_d0 = *(longlong *)(param_1 + 0x20);
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 0xc) = *(int *)(local_d0 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_d8);
  FUN_140457ffc(&DAT_14cb10a20,param_1);
  FUN_140457ffc(&DAT_14c872cf8,param_1);
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  lVar3 = DAT_14cb259f8;
  if (DAT_14cb259f8 == 0) goto LAB_1438a641b;
  if (DAT_14cb25ab0 == '\0') {
LAB_1438a67ba:
    lVar3 = DAT_14cb259f8;
    FUN_145af7286(DAT_14cb259f8);
    FUN_1400020a8(lVar3);
  }
  else {
    AK::SoundEngine::WakeupFromSuspend(0);
    if (DAT_14cb25ab0 == '\x01') {
      lVar7 = (longlong)(int)(*(longlong **)(lVar3 + 0x40))[1];
      if (lVar7 != 0) {
        lVar9 = **(longlong **)(lVar3 + 0x40);
        lVar8 = 0;
        do {
          if (*(longlong *)(lVar9 + lVar8) != 0) {
            FUN_14033a7c0();
          }
          lVar8 = lVar8 + 8;
        } while (lVar7 * 8 != lVar8);
      }
    }
    AK::SoundEngine::RenderAudio(true);
    DAT_14cb25ab0 = '\0';
    AK::SoundEngine::ClearPreparedEvents();
    AK::SoundEngine::ClearBanks();
    AK::SoundEngine::RenderAudio(true);
    plVar6 = *(longlong **)(lVar3 + 0xa0);
    if (plVar6 != (longlong *)0x0) {
      if ((*plVar6 != -1) && (DAT_14cb259f8 != 0)) {
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar6);
        plVar6 = *(longlong **)(lVar3 + 0xa0);
        if (plVar6 == (longlong *)0x0) goto LAB_1438a6601;
      }
      *(int *)(plVar6 + 0x21) = (int)plVar6[0x21] + -1;
      if ((int)plVar6[0x26] < 1) {
        FUN_1400847bc(plVar6 + 0x17,0);
        if ((int)plVar6[0x21] == 0) {
          FUN_140087e46(plVar6);
          if (*plVar6 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_1438a65f6;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar6);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar6);
          }
        }
      }
LAB_1438a65f6:
      *(undefined8 *)(lVar3 + 0xa0) = 0;
    }
LAB_1438a6601:
    plVar6 = *(longlong **)(lVar3 + 0xa8);
    if (plVar6 != (longlong *)0x0) {
      if (*plVar6 != -1) {
        local_c0 = *(longlong *)(lVar3 + 0xb0);
        if (local_c0 != 0) {
          LOCK();
          *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
          UNLOCK();
        }
        local_c8 = plVar6;
        FUN_145a1fe88(lVar3,&local_c8);
      }
      *(undefined8 *)(lVar3 + 0xa8) = 0;
      plVar6 = *(longlong **)(lVar3 + 0xb0);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + 0xb0) = 0;
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
    lVar7 = FUN_140d5712e();
    FUN_140457ffc(lVar7 + 8,lVar3);
    AK::SoundEngine::UnregisterGlobalCallback(FUN_1401cdafb,4);
    FUN_145c28f9c();
    FUN_1438a9ffe(*(undefined8 *)(lVar3 + 0x50));
    FUN_1459ad656(*(undefined8 *)(lVar3 + 0x70));
    AK::SoundEngine::UnregisterGameObj(1);
    if (DAT_14cb26560 != 0) {
      FUN_140396844();
    }
    lVar7 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x30) + 0x18);
    if (lVar7 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x10);
      lVar9 = 0;
      do {
        lVar8 = *(longlong *)(lVar3 + lVar9);
        if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x130))) {
          local_b8[0] = 0;
          local_b8[1] = 0;
          local_98 = 0;
          local_88 = &PTR_LAB_14acb5280;
          local_a8 = FUN_1438a833e;
          local_80 = local_b8;
          FUN_1438a42ba(lVar8,&local_a8);
          if (local_b8[0] != 0) {
            FUN_1400020a8();
          }
        }
        lVar9 = lVar9 + 8;
      } while (lVar7 * 8 != lVar9);
    }
    AK::SoundEngine::RenderAudio(true);
    lVar3 = DAT_14cb26560;
    if (DAT_14cb26560 != 0) {
      FUN_14644804c(DAT_14cb26560);
      FUN_1400020a8(lVar3);
      DAT_14cb26560 = 0;
    }
    AK::MusicEngine::Term();
    AK::SoundEngine::Term();
    FUN_145be8eac();
    if (AK::IAkStreamMgr::m_pStreamMgr != (IAkStreamMgr *)0x0) {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 8))();
    }
    AK::MemoryMgr::Term();
    _DAT_14c7626a0 = 0;
    if (DAT_14cb259f8 != 0) goto LAB_1438a67ba;
  }
  DAT_14cb259f8 = 0;
LAB_1438a641b:
  local_a8 = (code *)0x149eccdf0;
  local_a0 = 8;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  plVar6 = (longlong *)FUN_1447c1074(uVar4);
  if (plVar6 != (longlong *)0x0) {
    local_a8 = (code *)0x14acb403c;
    local_a0 = 9;
    local_9c = 0;
    uVar5 = FUN_14001a6c0(&local_a8,1);
    local_b8[0] = (ulonglong)uVar5;
    local_a8 = (code *)0x14acb4046;
    local_a0 = 7;
    local_9c = 0;
    uVar5 = FUN_14001a6c0(&local_a8,1);
    local_c8 = (longlong *)(ulonglong)uVar5;
    local_a8 = (code *)0x149e3b486;
    local_a0 = 6;
    local_9c = 0;
    uVar5 = FUN_14001a6c0(&local_a8,1);
    local_a8 = (code *)(ulonglong)uVar5;
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_a8,&local_c8,local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a6849 FUN_1438a6849 body=41 status=ok
// SIG undefined FUN_1438a6849(void)

void FUN_1438a6849(void)

{
  DAT_14cb25a98 = 0;
  if (DAT_14cb25a90 != 0) {
    FUN_1400020a8();
  }
  FUN_146175c7e();
  return;
}



// FUNCTION 1438a6872 FUN_1438a6872 body=91 status=ok
// SIG undefined FUN_1438a6872(void)

void FUN_1438a6872(void)

{
  if (DAT_14cb25ac0 != 0) {
    if (DAT_14cb25ab8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb25ab8)(DAT_14cb25ab8,0);
    FUN_1446efa72(&DAT_14cb25ab8,0,0,0x10);
    DAT_14cb25ac0 = 0;
  }
  if (DAT_14cb25ab8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1438a68d6 FUN_1438a68d6 body=103 status=ok
// SIG undefined FUN_1438a68d6(void)

undefined8 *
FUN_1438a68d6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    local_38 = param_5;
    (**(code **)(*plVar1 + 8))(plVar1,&local_28);
    *(undefined4 *)param_2 = local_28;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
    *(undefined4 *)(param_2 + 1) = uStack_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a698a FUN_1438a698a body=57 status=ok
// SIG undefined FUN_1438a698a(void)

void FUN_1438a698a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25668 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25668 = FUN_140002ddd(FUN_146447949,uVar1,L"WwiseAuxBusDef");
  }
  return;
}



// FUNCTION 1438a6a20 FUN_1438a6a20 body=57 status=ok
// SIG undefined FUN_1438a6a20(void)

void FUN_1438a6a20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25698 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar1,L"WwiseEventDef");
  }
  return;
}



// FUNCTION 1438a6aaa FUN_1438a6aaa body=57 status=ok
// SIG undefined FUN_1438a6aaa(void)

void FUN_1438a6aaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb256c8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar1,L"WwiseGameParameterDef");
  }
  return;
}



// FUNCTION 1438a6b90 FUN_1438a6b90 body=57 status=ok
// SIG undefined FUN_1438a6b90(void)

void FUN_1438a6b90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25728 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25728 = FUN_140002ddd(FUN_14644797a,uVar1,L"WwiseSoundBankDef");
  }
  return;
}



// FUNCTION 1438a6cc4 FUN_1438a6cc4 body=57 status=ok
// SIG undefined FUN_1438a6cc4(void)

void FUN_1438a6cc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25788 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar1,L"WwiseSwitchDef");
  }
  return;
}



// FUNCTION 1438a6d12 FUN_1438a6d12 body=39 status=ok
// SIG undefined FUN_1438a6d12(void)

void FUN_1438a6d12(undefined8 *param_1)

{
  bool bVar1;
  
  (*(code *)*param_1)(*(undefined4 *)(param_1 + 1),*(undefined4 *)((longlong)param_1 + 0xc));
  bVar1 = AK::MemoryMgr::IsInitialized();
  if (bVar1) {
    AK::MemoryMgr::TrimForThread();
    return;
  }
  return;
}



// FUNCTION 1438a6d50 FUN_1438a6d50 body=29 status=ok
// SIG undefined FUN_1438a6d50(void)

undefined8 FUN_1438a6d50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a6d9e FUN_1438a6d9e body=29 status=ok
// SIG undefined FUN_1438a6d9e(void)

undefined8 FUN_1438a6d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a6edc FUN_1438a6edc body=138 status=ok
// SIG undefined FUN_1438a6edc(void)

void FUN_1438a6edc(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14644586c();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
      local_28 = *(undefined8 *)(param_1 + 8);
      local_20 = *(longlong *)(param_1 + 0x10);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_2 + 0xb0))(param_2,&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a6f68 FUN_1438a6f68 body=88 status=ok
// SIG undefined FUN_1438a6f68(void)

void FUN_1438a6f68(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14644586c();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
      FUN_1438a3518(param_2 + 0xb,*(undefined8 *)(param_1 + 8));
      (**(code **)(*param_2 + 0x80))(param_2);
    }
    **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
  }
  return;
}



// FUNCTION 1438a6fc0 FUN_1438a6fc0 body=68 status=ok
// SIG undefined FUN_1438a6fc0(void)

void FUN_1438a6fc0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_146444210();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001438a6ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x78))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1438a7004 FUN_1438a7004 body=71 status=ok
// SIG undefined FUN_1438a7004(void)

void FUN_1438a7004(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_146444210();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001438a703d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x80))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1438a704c FUN_1438a704c body=84 status=ok
// SIG undefined FUN_1438a704c(void)

void FUN_1438a704c(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_146444210();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001438a7095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1438a70a0 FUN_1438a70a0 body=68 status=ok
// SIG undefined FUN_1438a70a0(void)

void FUN_1438a70a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_146444340();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001438a70d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x78))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1438a70e4 FUN_1438a70e4 body=71 status=ok
// SIG undefined FUN_1438a70e4(void)

void FUN_1438a70e4(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_146444340();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001438a711d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x80))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1438a712c FUN_1438a712c body=156 status=ok
// SIG undefined FUN_1438a712c(void)

void FUN_1438a712c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  uVar3 = FUN_146444340();
  cVar2 = FUN_1448093f4(param_2,uVar3);
  if ((param_2 != (longlong *)0x0) && (cVar2 != '\0')) {
    cVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar2 != '\0') {
      FUN_1438a38f2(lVar1 + 0x58,local_40);
      (**(code **)(*param_2 + 0x88))(param_2,param_1[1],local_40,lVar1 + 0x178);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a71ca FUN_1438a71ca body=138 status=ok
// SIG undefined FUN_1438a71ca(void)

void FUN_1438a71ca(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14644586c();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar1 != '\0') {
      local_28 = *(undefined8 *)(param_1 + 8);
      local_20 = *(longlong *)(param_1 + 0x10);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_2 + 0xb0))(param_2,&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a737e FUN_1438a737e body=29 status=ok
// SIG undefined FUN_1438a737e(void)

undefined8 FUN_1438a737e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a73b0 FUN_1438a73b0 body=85 status=ok
// SIG undefined FUN_1438a73b0(void)

void FUN_1438a73b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4db0;
  return;
}



// FUNCTION 1438a7406 FUN_1438a7406 body=85 status=ok
// SIG undefined FUN_1438a7406(void)

void FUN_1438a7406(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4db0;
  return;
}



// FUNCTION 1438a745c FUN_1438a745c body=118 status=ok
// SIG undefined FUN_1438a745c(void)

void FUN_1438a745c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb4db0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a74c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a74da FUN_1438a74da body=19 status=ok
// SIG undefined FUN_1438a74da(void)

undefined1 FUN_1438a74da(undefined8 param_1,undefined8 param_2)

{
  FUN_1438a74ee(param_2);
  return 1;
}



// FUNCTION 1438a74ee FUN_1438a74ee body=165 status=ok
// SIG undefined FUN_1438a74ee(void)

void FUN_1438a74ee(longlong *param_1)

{
  uint uVar1;
  void **ppvVar2;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if ((0 < (int)param_1[1]) && (ppvVar2 = (void **)*param_1, &local_38 != ppvVar2)) {
    uVar1 = *(uint *)(ppvVar2 + 1);
    _Src = *ppvVar2;
    uStack_30 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1446dd670(&local_38,uVar1,0);
      memcpy(local_38,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  if (DAT_14cb259f8 != 0) {
    FUN_1413dbde0(&local_38);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a7594 FUN_1438a7594 body=29 status=ok
// SIG undefined FUN_1438a7594(void)

undefined8 FUN_1438a7594(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a75c6 FUN_1438a75c6 body=85 status=ok
// SIG undefined FUN_1438a75c6(void)

void FUN_1438a75c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4e20;
  return;
}



// FUNCTION 1438a761c FUN_1438a761c body=85 status=ok
// SIG undefined FUN_1438a761c(void)

void FUN_1438a761c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4e20;
  return;
}



// FUNCTION 1438a7672 FUN_1438a7672 body=118 status=ok
// SIG undefined FUN_1438a7672(void)

void FUN_1438a7672(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb4e20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a76d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a76f0 FUN_1438a76f0 body=19 status=ok
// SIG undefined FUN_1438a76f0(void)

undefined1 FUN_1438a76f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1438a7704(param_2);
  return 1;
}



// FUNCTION 1438a7704 FUN_1438a7704 body=165 status=ok
// SIG undefined FUN_1438a7704(void)

void FUN_1438a7704(longlong *param_1)

{
  uint uVar1;
  void **ppvVar2;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if ((0 < (int)param_1[1]) && (ppvVar2 = (void **)*param_1, &local_38 != ppvVar2)) {
    uVar1 = *(uint *)(ppvVar2 + 1);
    _Src = *ppvVar2;
    uStack_30 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1446dd670(&local_38,uVar1,0);
      memcpy(local_38,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  if (DAT_14cb259f8 != 0) {
    FUN_1438a4e74(&local_38);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a77aa FUN_1438a77aa body=29 status=ok
// SIG undefined FUN_1438a77aa(void)

undefined8 FUN_1438a77aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a77dc FUN_1438a77dc body=85 status=ok
// SIG undefined FUN_1438a77dc(void)

void FUN_1438a77dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4e90;
  return;
}



// FUNCTION 1438a7832 FUN_1438a7832 body=85 status=ok
// SIG undefined FUN_1438a7832(void)

void FUN_1438a7832(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4e90;
  return;
}



// FUNCTION 1438a7888 FUN_1438a7888 body=118 status=ok
// SIG undefined FUN_1438a7888(void)

void FUN_1438a7888(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb4e90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a78ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a7910 FUN_1438a7910 body=29 status=ok
// SIG undefined FUN_1438a7910(void)

undefined8 FUN_1438a7910(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a7942 FUN_1438a7942 body=85 status=ok
// SIG undefined FUN_1438a7942(void)

void FUN_1438a7942(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4f00;
  return;
}



// FUNCTION 1438a7998 FUN_1438a7998 body=85 status=ok
// SIG undefined FUN_1438a7998(void)

void FUN_1438a7998(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4f00;
  return;
}



// FUNCTION 1438a79ee FUN_1438a79ee body=118 status=ok
// SIG undefined FUN_1438a79ee(void)

void FUN_1438a79ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb4f00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a7a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a7a8e FUN_1438a7a8e body=31 status=ok
// SIG undefined FUN_1438a7a8e(void)

undefined8 FUN_1438a7a8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a7aae FUN_1438a7aae body=23 status=ok
// SIG undefined FUN_1438a7aae(void)

undefined8 FUN_1438a7aae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1438a7ac6 FUN_1438a7ac6 body=29 status=ok
// SIG undefined FUN_1438a7ac6(void)

undefined8 FUN_1438a7ac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a7af8 FUN_1438a7af8 body=85 status=ok
// SIG undefined FUN_1438a7af8(void)

void FUN_1438a7af8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4f70;
  return;
}



// FUNCTION 1438a7b4e FUN_1438a7b4e body=85 status=ok
// SIG undefined FUN_1438a7b4e(void)

void FUN_1438a7b4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4f70;
  return;
}



// FUNCTION 1438a7ba4 FUN_1438a7ba4 body=118 status=ok
// SIG undefined FUN_1438a7ba4(void)

void FUN_1438a7ba4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb4f70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a7c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a7c22 FUN_1438a7c22 body=19 status=ok
// SIG undefined FUN_1438a7c22(void)

undefined1 FUN_1438a7c22(undefined8 param_1,undefined8 param_2)

{
  FUN_1438a7c36(param_2);
  return 1;
}



// FUNCTION 1438a7c36 FUN_1438a7c36 body=281 status=ok
// SIG undefined FUN_1438a7c36(void)

void FUN_1438a7c36(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong lStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (int)param_1[1]) {
    iVar1 = *(int *)((undefined8 *)*param_1 + 1);
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_28,iVar3,*(undefined8 *)*param_1,1);
    local_20 = 0;
    lStack_18 = 0;
    if (DAT_14cb259f8 != 0) {
      if (DAT_14cb25758 == 0) {
        uVar5 = FUN_140cd185c();
        DAT_14cb25758 = FUN_140002ddd(FUN_146447bb9,uVar5,L"WwiseStateDef");
      }
      local_20 = FUN_14477b664(DAT_14cb25758);
      lStack_18 = 0;
      if (((local_20 != 0) && (local_28 != 0)) &&
         (plVar2 = *(longlong **)(local_20 + 0xb8), plVar2 != (longlong *)0x0)) {
        cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lStack_18 = FUN_144aff482(uVar5,&local_28);
          if ((lStack_18 != 0) && (DAT_14cb25ab0 != '\0')) {
            AK::SoundEngine::SetState(*(uint *)(lStack_18 + 0x48),*(uint *)(lStack_18 + 0x38));
          }
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a7d50 FUN_1438a7d50 body=29 status=ok
// SIG undefined FUN_1438a7d50(void)

undefined8 FUN_1438a7d50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a7d82 FUN_1438a7d82 body=85 status=ok
// SIG undefined FUN_1438a7d82(void)

void FUN_1438a7d82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4fe0;
  return;
}



// FUNCTION 1438a7dd8 FUN_1438a7dd8 body=85 status=ok
// SIG undefined FUN_1438a7dd8(void)

void FUN_1438a7dd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb4fe0;
  return;
}



// FUNCTION 1438a7e2e FUN_1438a7e2e body=118 status=ok
// SIG undefined FUN_1438a7e2e(void)

void FUN_1438a7e2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb4fe0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a7e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a7eb6 FUN_1438a7eb6 body=29 status=ok
// SIG undefined FUN_1438a7eb6(void)

undefined8 FUN_1438a7eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a7ee8 FUN_1438a7ee8 body=85 status=ok
// SIG undefined FUN_1438a7ee8(void)

void FUN_1438a7ee8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5050;
  return;
}



// FUNCTION 1438a7f3e FUN_1438a7f3e body=85 status=ok
// SIG undefined FUN_1438a7f3e(void)

void FUN_1438a7f3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb5050;
  return;
}



// FUNCTION 1438a7f94 FUN_1438a7f94 body=118 status=ok
// SIG undefined FUN_1438a7f94(void)

void FUN_1438a7f94(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb5050;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a7ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a8010 FUN_1438a8010 body=29 status=ok
// SIG undefined FUN_1438a8010(void)

undefined8 FUN_1438a8010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a8042 FUN_1438a8042 body=85 status=ok
// SIG undefined FUN_1438a8042(void)

void FUN_1438a8042(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb50c0;
  return;
}



// FUNCTION 1438a8098 FUN_1438a8098 body=85 status=ok
// SIG undefined FUN_1438a8098(void)

void FUN_1438a8098(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb50c0;
  return;
}



// FUNCTION 1438a80ee FUN_1438a80ee body=118 status=ok
// SIG undefined FUN_1438a80ee(void)

void FUN_1438a80ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb50c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a8155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438a816a FUN_1438a816a body=467 status=ok
// SIG undefined FUN_1438a816a(void)

void FUN_1438a816a(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar13 = 1;
      iVar10 = 0;
      uVar11 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar10 = 0;
        uVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x1c + (longlong)iVar8 * 0x20) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_1438a82ee;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_1438a82ee:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 1438a833e FUN_1438a833e body=205 status=ok
// SIG undefined FUN_1438a833e(void)

void FUN_1438a833e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0x18), lVar1 != 0)) &&
     ((DAT_14cb26569 & 1) != 0)) {
    puVar2 = *(undefined4 **)(lVar1 + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2;
    }
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_1400b2348(puVar4,local_48,1);
    FUN_140ba7826(&local_30,&DAT_149e01f72,local_48);
    iVar3 = local_28 + -1;
    if (local_28 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(*param_1,local_30,iVar3);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a8436 FUN_1438a8436 body=29 status=ok
// SIG undefined FUN_1438a8436(void)

undefined8 FUN_1438a8436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438a8454 FUN_1438a8454 body=850 status=ok
// SIG undefined FUN_1438a8454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1438a8454(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
  bool bVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  undefined8 local_b0;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar24 = (longlong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar28 = *(longlong *)(param_1 + 0x18);
    lVar27 = 0;
    do {
      if (((*(longlong **)(lVar28 + lVar27) != (longlong *)0x0) &&
          (puVar4 = (undefined8 *)**(longlong **)(lVar28 + lVar27), puVar4 != (undefined8 *)0x0)) &&
         (*(char *)((longlong)puVar4 + 0x51) == '\x01')) {
        (**(code **)*puVar4)(puVar4,1);
        *(undefined8 *)(lVar28 + lVar27) = 0;
        plVar18 = *(longlong **)(lVar28 + 8 + lVar27);
        if (plVar18 != (longlong *)0x0) {
          *(undefined8 *)(lVar28 + 8 + lVar27) = 0;
          LOCK();
          plVar1 = plVar18 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
      }
      lVar27 = lVar27 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar27);
    iVar3 = *(int *)(param_1 + 0x20);
    lVar28 = (longlong)iVar3;
    if (lVar28 != 0) {
      plVar18 = (longlong *)*plVar24;
      local_90 = plVar18 + 2;
      iVar17 = 0;
      bVar26 = *plVar18 == 0;
      iVar21 = 0;
      local_98 = plVar24;
      do {
        lVar27 = (longlong)iVar21;
        iVar20 = iVar21 + 1;
        if (iVar21 + 1 < iVar3) {
          iVar20 = iVar3;
        }
        plVar24 = local_90 + lVar27 * 2;
        iVar22 = iVar21;
        lVar25 = lVar27;
        do {
          lVar25 = lVar25 + 1;
          iVar23 = iVar20;
          if (lVar28 <= lVar25) break;
          lVar5 = *plVar24;
          iVar22 = iVar22 + 1;
          plVar24 = plVar24 + 2;
          iVar23 = iVar22;
        } while (bVar26 == (lVar5 == 0));
        iVar20 = iVar23 - iVar21;
        local_9c = iVar17;
        if (bVar26 == false) {
          if (iVar17 != iVar21) {
            memmove(plVar18 + (longlong)iVar17 * 2,plVar18 + lVar27 * 2,(longlong)iVar20 << 4);
          }
          iVar17 = local_9c + iVar20;
        }
        else {
          FUN_140188b2d(plVar18 + lVar27 * 2,iVar20);
          iVar17 = local_9c;
        }
        bVar26 = (bool)(bVar26 ^ 1);
        iVar21 = iVar23;
      } while (lVar25 < lVar28);
      *(int *)(param_1 + 0x20) = iVar17;
      plVar24 = local_98;
    }
  }
  plVar18 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar18[1] = (longlong)&DAT_100000001;
  *plVar18 = (longlong)&PTR_FUN_14acb52e0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[4] = 0;
  plVar18[5] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  *(undefined4 *)(plVar18 + 4) = 0;
  if (plVar18 == (longlong *)0x0) {
    _DAT_00000028 = *(undefined4 *)param_2;
    _DAT_0000002c = *(undefined4 *)((longlong)param_2 + 4);
    _DAT_00000030 = *(undefined4 *)(param_2 + 1);
    _DAT_00000034 = *(undefined4 *)((longlong)param_2 + 0xc);
    _DAT_00000038 = *(undefined4 *)(param_2 + 2);
    _DAT_0000003c = *(undefined4 *)((longlong)param_2 + 0x14);
    _DAT_00000040 = *(undefined4 *)(param_2 + 3);
    _DAT_00000044 = *(undefined4 *)((longlong)param_2 + 0x1c);
    _DAT_00000048 = *(undefined4 *)(param_2 + 4);
    _DAT_0000004c = *(undefined4 *)((longlong)param_2 + 0x24);
    _DAT_00000050 = *(undefined4 *)(param_2 + 5);
    _DAT_00000054 = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    uVar6 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)((longlong)param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 1);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar10 = *(undefined4 *)(param_2 + 2);
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar12 = *(undefined4 *)(param_2 + 3);
    uVar13 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar15 = *(undefined4 *)(param_2 + 5);
    uVar16 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(plVar18 + 9) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)plVar18 + 0x4c) = uVar14;
    *(undefined4 *)(plVar18 + 10) = uVar15;
    *(undefined4 *)((longlong)plVar18 + 0x54) = uVar16;
    *(undefined4 *)(plVar18 + 7) = uVar10;
    *(undefined4 *)((longlong)plVar18 + 0x3c) = uVar11;
    *(undefined4 *)(plVar18 + 8) = uVar12;
    *(undefined4 *)((longlong)plVar18 + 0x44) = uVar13;
    *(undefined4 *)(plVar18 + 5) = uVar6;
    *(undefined4 *)((longlong)plVar18 + 0x2c) = uVar7;
    *(undefined4 *)(plVar18 + 6) = uVar8;
    *(undefined4 *)((longlong)plVar18 + 0x34) = uVar9;
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_b8 = local_88;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14acb5300;
  local_88[0] = &LAB_1438a87a8;
  local_b0 = param_2[2];
  local_60 = plVar18 + 2;
  local_58 = plVar18;
  lVar28 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                     (*(longlong **)(param_1 + 0x10),*param_2,
                      *(undefined4 *)((longlong)param_2 + 0xc),4);
  if (lVar28 != 0) {
    plVar18[2] = lVar28;
    plVar18[3] = param_2[2];
    iVar3 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
      FUN_14181a1d0(plVar24,iVar3);
    }
    lVar28 = *plVar24;
    *(longlong **)(lVar28 + (longlong)iVar3 * 0x10) = plVar18 + 2;
    *(longlong **)(lVar28 + 8 + (longlong)iVar3 * 0x10) = plVar18;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
  }
  if (local_88[0] != (undefined1 *)0x0) {
    pppuVar19 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar19 = &local_68;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar24 = plVar18 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1438a8828 FUN_1438a8828 body=24 status=ok
// SIG undefined FUN_1438a8828(void)

void FUN_1438a8828(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438a883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1438a8840 FUN_1438a8840 body=696 status=ok
// SIG undefined FUN_1438a8840(void)

int * FUN_1438a8840(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447711aa(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1438a8a23;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_1438a8a23:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x20);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x20) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1438a8af8 FUN_1438a8af8 body=173 status=ok
// SIG undefined FUN_1438a8af8(void)

void FUN_1438a8af8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          *(undefined8 *)(puVar1 + 2) = 0;
          *(undefined8 *)(puVar1 + 4) = 0xffffffffffffffff;
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1438a8ba6((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1438a8b63;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1438a8b63:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1438a8ba6 FUN_1438a8ba6 body=136 status=ok
// SIG undefined FUN_1438a8ba6(void)

void FUN_1438a8ba6(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1438a8c2e FUN_1438a8c2e body=671 status=ok
// SIG undefined FUN_1438a8c2e(void)

void FUN_1438a8c2e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1438a8cab;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1438a8cab:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 1438a8f00 FUN_1438a8f00 body=4303 status=ok
// SIG undefined FUN_1438a8f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a8f00(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb25608 = 0xffffffff;
  _DAT_14cb2560c = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb1a90,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb1f90,1,0);
  local_48 = "AssetRegistry";
  local_40 = 0xd;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb25640 = (ulonglong)uVar3;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb2060,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb2260,1,&PTR_FUN_14acb2230);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb25b0,1,&PTR_FUN_14acb2580);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb2780,1,&PTR_FUN_14acb2750);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb2ea0,1,&PTR_FUN_14acb2e70);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb30d0,1,&PTR_FUN_14acb30a0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb32d0,1,&PTR_FUN_14acb32a0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb34c0,1,&PTR_FUN_14acb3490);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxAudio",&PTR_FUN_14acb3620,1,&PTR_FUN_14acb35f0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_48,&DAT_14cb257e0);
  if (cVar2 == '\0') {
    _DAT_14cb257e0 = 0;
    uRam000000014cb257e8 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = "bone";
  local_40 = 4;
  local_3c = 0;
  FUN_14001a6c0(&local_48,1);
  FUN_1446f470e(&DAT_14cb257f0,&DAT_14acb36a4,1);
  _DAT_14cb257f8 = 0x3f000000;
  uRam000000014cb257fc = 0x3f000000;
  uRam000000014cb25800 = 0x3f000000;
  uRam000000014cb25804 = 0x3f800000;
  FUN_1446f470e(&DAT_14cb25808,L"Then",1);
  FUN_1446f470e(&DAT_14cb25810,L"Else",1);
  _DAT_14cb25820 = 0;
  FUN_1400b22c2(&DAT_14cb25828,&DAT_149e02088);
  atexit((_func_5014 *)&LAB_1438a4297);
  DAT_14cb25838 = 0;
  uRam000000014cb25840 = 0;
  atexit((_func_5014 *)&LAB_1438a42a8);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14a1e19d0;
  *(code **)(local_48 + 0x18) = FUN_147f7c554;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cb25848,L"gbx.audio.StopWorld",L"Stops all currently playing world audio",
                &local_48);
  if (local_40 == 0) {
LAB_1438a92cc:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a92cc;
  }
  atexit(FUN_1438a43a1);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_149e062c0;
  *(code **)(local_48 + 0x18) = FUN_147f7c5d1;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb25858,L"gbx.audio.StopAll",L"Stops all currently playing audio",&local_48);
  if (local_40 == 0) {
LAB_1438a93b8:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a93b8;
  }
  atexit(FUN_1438a43e6);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_149e062c0;
  *(undefined1 **)(local_48 + 0x18) = &LAB_147f7c622;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb25868,L"gbx.audio.ReloadBanks",L"Reload soundbanks",&local_48);
  if (local_40 == 0) {
LAB_1438a9496:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a9496;
  }
  atexit(FUN_1438a465c);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb4db0;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb25878,L"gbx.audio.LoadBank",
                L"Test command to load a bank. Use: \"gbx.audio.loadbank bankname\"",&local_48);
  if (local_40 == 0) {
LAB_1438a9577:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a9577;
  }
  atexit(FUN_1438a46a1);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb4e20;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb25888,L"gbx.audio.UnloadBank",
                L"Test command to unload a bank. Use: \"gbx.audio.unloadbank bankname\"",&local_48);
  if (local_40 == 0) {
LAB_1438a9651:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a9651;
  }
  atexit(FUN_1438a46e6);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb4e90;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb25898,L"gbx.audio.mute",L"Mute all audio playing through Wwise",&local_48);
  if (local_40 == 0) {
LAB_1438a972b:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a972b;
  }
  atexit(FUN_1438a472b);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb4f00;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb258a8,L"gbx.audio.PlayAudioInBackground",
                L"Toggle playing audio when the game window is not in focus",&local_48);
  if (local_40 == 0) {
LAB_1438a9805:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a9805;
  }
  atexit(FUN_1438a4770);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_14acb7d20;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb7cb0;
  *(code **)(local_48 + 0x18) = FUN_147f7c636;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141819a96(&DAT_14cb258b8,L"gbx.audio.sololistener",L"Disable all listeners except this one",
                &local_48);
  if (local_40 == 0) {
LAB_1438a98f1:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a98f1;
  }
  atexit(FUN_1438a47b5);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb4f70;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb258c8,L"gbx.audio.SetState",
                L"Debug command to set a WWise state. Use: \"gbx.audio.SetState WorkUnit.StateGroup:State\""
                ,&local_48);
  if (local_40 == 0) {
LAB_1438a99cb:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a99cb;
  }
  atexit(FUN_1438a47fa);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb4fe0;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb258d8,L"gbx.audio.DisableListenerPitch",
                L"Debug command to toggle whether or not we update the pitch of the listener\'s transform. Use: \"gbx.audio.DisableListenerPitch\""
                ,&local_48);
  if (local_40 == 0) {
LAB_1438a9aa5:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a9aa5;
  }
  atexit(FUN_1438a483f);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb5050;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb258e8,L"gbx.audio.profiler.start",
                L"starts a profiling capture without being connected with Wwise Authoring",&local_48
               );
  if (local_40 == 0) {
LAB_1438a9b7f:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1438a9b7f;
  }
  atexit(FUN_1438a4884);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14acb50c0;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb258f8,L"gbx.audio.profiler.stop",
                L"stops the current profiling capture session",&local_48);
  if (local_40 != 0) {
    if (local_48 == (char *)0x0) goto LAB_1438a9c67;
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1438a9c67:
  atexit(FUN_1438a48c9);
  _DAT_14cb2590c = 0;
  FUN_14052b5e0(&DAT_14cb25908,"volume_overall",0);
  _DAT_14cb25918 = 0;
  FUN_14052b5e0(&DAT_14cb25914,"volume_music",0);
  _DAT_14cb25924 = 0;
  FUN_14052b5e0(&DAT_14cb25920,"volume_sfx",0);
  _DAT_14cb25930 = 0;
  FUN_14052b5e0(&DAT_14cb2592c,"volume_dialog",0);
  _DAT_14cb2593c = 0;
  FUN_14052b5e0(&DAT_14cb25938,"PlayInBackground",0);
  _DAT_14cb25948 = 0;
  FUN_14052b5e0(&DAT_14cb25944,"MuteHitNotifies",0);
  DAT_14cb25950 = AK::SoundEngine::GetIDFromString("Init");
  FUN_147f7c68a();
  atexit((_func_5014 *)&LAB_1438a4911);
  DAT_14cb25a00 = 0;
  _DAT_14cb25a08 = 0;
  atexit(FUN_1438a4f15);
  DAT_14cb25a10 = 0;
  _DAT_14cb25a18 = 0;
  FUN_14612d9e0();
  atexit(FUN_1438a4f46);
  local_48 = (char *)0x800000014acb3fdc;
  local_34 = 8;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14644809c(&local_48);
  FUN_1446f470e(&DAT_14cb25a28,L"default",1);
  FUN_140056680(&DAT_14cb25a30,L"default");
  atexit((_func_5014 *)&LAB_1438a6827);
  FUN_140056680(&DAT_14cb25a40,L"world");
  atexit((_func_5014 *)&LAB_1438a6838);
  DAT_14cb25a70 = 0;
  DAT_14cb25a78 = 0;
  DAT_14cb25a50 = 0;
  _DAT_14cb25a58 = 0;
  _DAT_14cb25a7c = 0xffffffff00000080;
  DAT_14cb25a84 = 0;
  DAT_14cb25a90 = 0;
  DAT_14cb25a98 = 0;
  atexit(FUN_1438a6849);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438a9fd0 FUN_1438a9fd0 body=41 status=ok
// SIG undefined FUN_1438a9fd0(void)

void FUN_1438a9fd0(void)

{
  DAT_14cb25b28 = 0;
  if (DAT_14cb25b20 != 0) {
    FUN_1400020a8();
  }
  FUN_145d63948();
  return;
}



// FUNCTION 1438a9ffe FUN_1438a9ffe body=188 status=ok
// SIG undefined FUN_1438a9ffe(void)

void FUN_1438a9ffe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar8 = 0;
  do {
    lVar9 = (longlong)*(int *)(param_1 + 8 + lVar8 * 0x10);
    if (0 < lVar9) {
      plVar6 = (longlong *)(lVar8 * 0x10 + param_1);
      puVar7 = (undefined8 *)*plVar6;
      puVar10 = puVar7 + lVar9 * 2;
      do {
        uVar4 = *puVar7;
        plVar5 = (longlong *)puVar7[1];
        if (plVar5 == (longlong *)0x0) {
          FUN_140521208(uVar4);
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          FUN_140521208(uVar4);
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar10);
      iVar3 = *(int *)((longlong)plVar6 + 0xc);
      FUN_145af758a(*plVar6,(int)plVar6[1]);
      *(undefined4 *)(plVar6 + 1) = 0;
      if ((iVar3 < 0) && (*(int *)((longlong)plVar6 + 0xc) != 0)) {
        FUN_147f843dc(plVar6,0);
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  return;
}



// FUNCTION 1438aa0ba FUN_1438aa0ba body=526 status=ok
// SIG undefined FUN_1438aa0ba(void)

void FUN_1438aa0ba(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  
  uVar9 = (ulonglong)(int)param_1[1];
  iVar8 = (int)(float)(int)param_1[1];
  if (-1 < iVar8 && 0 < (longlong)uVar9) {
    lVar10 = uVar9 * 0x10;
    iVar11 = 0;
    do {
      lVar10 = lVar10 + -0x10;
      lVar3 = *param_1;
      lVar4 = *(longlong *)(lVar3 + 8 + lVar10);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 1)) {
        plVar5 = *(longlong **)(lVar3 + lVar10);
        if (*(char *)((longlong)plVar5 + 0x3c) == '\x01') {
          (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
        }
      }
      else {
        if (*(char *)(*(longlong *)(lVar3 + lVar10) + 0x3c) == '\x01') {
          FUN_140521208();
        }
        FUN_140ca4b24(param_1,(int)uVar9 + -1);
        FUN_14181af64(param_1);
      }
      if (uVar9 < 2) break;
      uVar9 = uVar9 - 1;
      bVar6 = iVar11 < iVar8;
      iVar11 = iVar11 + 1;
    } while (bVar6);
  }
  iVar8 = (int)param_1[3];
  uVar7 = *(uint *)(param_1 + 6);
  if ((int)uVar7 < 0 || iVar8 <= (int)uVar7) {
    uVar7 = iVar8 - 1;
    *(uint *)(param_1 + 6) = uVar7;
  }
  if (-1 < (int)(uVar7 | (int)((float)iVar8 * 0.5))) {
    plVar5 = param_1 + 2;
    iVar11 = 0;
    do {
      uVar9 = (ulonglong)uVar7;
      plVar1 = (longlong *)(*plVar5 + uVar9 * 0x10);
      lVar10 = *(longlong *)(*plVar5 + 8 + uVar9 * 0x10);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 8) != 1)) {
        plVar1 = (longlong *)*plVar1;
        if (*(char *)((longlong)plVar1 + 0x3c) == '\x01') {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
        }
      }
      else {
        if (*(char *)(*plVar1 + 0x3c) == '\x01') {
          FUN_140521208();
          uVar9 = (ulonglong)*(uint *)(param_1 + 6);
        }
        FUN_140ca4b24(plVar5,uVar9);
        FUN_14181af64(plVar5);
      }
      lVar10 = param_1[6];
      uVar7 = (int)lVar10 - 1;
      *(uint *)(param_1 + 6) = uVar7;
    } while ((0 < (int)lVar10) &&
            (bVar6 = iVar11 < (int)((float)iVar8 * 0.5), iVar11 = iVar11 + 1, bVar6));
  }
  iVar8 = (int)param_1[5];
  uVar7 = *(uint *)((longlong)param_1 + 0x34);
  if ((int)uVar7 < 0 || iVar8 <= (int)uVar7) {
    uVar7 = iVar8 - 1;
    *(uint *)((longlong)param_1 + 0x34) = uVar7;
  }
  if (-1 < (int)(uVar7 | (int)((float)iVar8 * 0.2))) {
    plVar5 = param_1 + 4;
    iVar11 = 0;
    do {
      uVar9 = (ulonglong)uVar7;
      plVar1 = (longlong *)(*plVar5 + uVar9 * 0x10);
      lVar10 = *(longlong *)(*plVar5 + 8 + uVar9 * 0x10);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 8) != 1)) {
        plVar1 = (longlong *)*plVar1;
        if (*(char *)((longlong)plVar1 + 0x3c) == '\x01') {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
        }
      }
      else {
        if (*(char *)(*plVar1 + 0x3c) == '\x01') {
          FUN_140521208();
          uVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
        }
        FUN_140ca4b24(plVar5,uVar9);
        FUN_14181af64(plVar5);
      }
      iVar2 = *(int *)((longlong)param_1 + 0x34);
      uVar7 = iVar2 - 1;
      *(uint *)((longlong)param_1 + 0x34) = uVar7;
    } while ((0 < iVar2) && (bVar6 = iVar11 < (int)((float)iVar8 * 0.2), iVar11 = iVar11 + 1, bVar6)
            );
  }
  return;
}



// FUNCTION 1438aa2c8 FUN_1438aa2c8 body=46 status=ok
// SIG undefined FUN_1438aa2c8(void)

void FUN_1438aa2c8(void)

{
  if (DAT_14cb25be0 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    DAT_14cb25be0 = 0;
  }
  return;
}



// FUNCTION 1438aa2f6 FUN_1438aa2f6 body=41 status=ok
// SIG undefined FUN_1438aa2f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438aa2f6(void)

{
  _DAT_14cb25c30 = 0;
  if (DAT_14cb25c28 != 0) {
    FUN_1400020a8();
  }
  FUN_146173164();
  return;
}



// FUNCTION 1438aa31f FUN_1438aa31f body=46 status=ok
// SIG undefined FUN_1438aa31f(void)

void FUN_1438aa31f(void)

{
  longlong lVar1;
  
  lVar1 = 0x80;
  do {
    if (*(longlong *)(&DAT_14cb25c30 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438aa34d FUN_1438aa34d body=46 status=ok
// SIG undefined FUN_1438aa34d(void)

void FUN_1438aa34d(void)

{
  longlong lVar1;
  
  lVar1 = 0x80;
  do {
    if (*(longlong *)((longlong)&DAT_14cb25cb0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438aa37b FUN_1438aa37b body=46 status=ok
// SIG undefined FUN_1438aa37b(void)

void FUN_1438aa37b(void)

{
  longlong lVar1;
  
  lVar1 = 0x80;
  do {
    if (*(longlong *)((longlong)&DAT_14cb25d30 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438aa3a9 FUN_1438aa3a9 body=46 status=ok
// SIG undefined FUN_1438aa3a9(void)

void FUN_1438aa3a9(void)

{
  longlong lVar1;
  
  lVar1 = 0x80;
  do {
    if (*(longlong *)((longlong)&DAT_14cb25db0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1438aa3d7 FUN_1438aa3d7 body=59 status=ok
// SIG undefined FUN_1438aa3d7(void)

void FUN_1438aa3d7(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb25e48;
  if (DAT_14cb25e48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb25e48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438aa407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1438aa432 FUN_1438aa432 body=195 status=ok
// SIG undefined FUN_1438aa432(void)

void FUN_1438aa432(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = DAT_14cb259f8;
  if (DAT_14cb259f8 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 == 0) {
    uVar5 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (((lVar7 != 0) || (lVar7 = 0, lVar6 == 0)) || (*(longlong *)(param_1 + 0x30) == 0))
  goto LAB_1438aa4c6;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_1438aa4f1:
    lVar7 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar4 == '\0') goto LAB_1438aa4f1;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x30));
  }
  *(longlong *)(param_1 + 0x40) = lVar7;
LAB_1438aa4c6:
  FUN_1447eec96(lVar3,lVar7,uVar1,0);
  return;
}



// FUNCTION 1438aa913 FUN_1438aa913 body=49 status=ok
// SIG undefined FUN_1438aa913(void)

void FUN_1438aa913(void)

{
  FUN_1401cdcb6(DAT_14cb262d0,DAT_14cb262d8);
  if (DAT_14cb262d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1438aa952 FUN_1438aa952 body=1112 status=ok
// SIG undefined FUN_1438aa952(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438aa952(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  lVar6 = DAT_14cb26560;
  dVar13 = _DAT_14cb262c0;
  if (DAT_14cb26560 == 0) {
    return;
  }
  uVar12 = (undefined4)DAT_14cb262c8;
  uVar18 = (undefined4)((ulonglong)DAT_14cb262c8 >> 0x20);
  if (param_1 < 0x100) {
    if (param_1 < 8) {
      if (param_1 != 1) {
        if (param_1 != 4) {
          return;
        }
        FUN_147f8279c(DAT_14cb26560,param_2);
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14cb26560 + 0x20));
      if (param_2 == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_2;
      }
      iVar1 = *(int *)(lVar6 + 0x18);
      lVar11 = (longlong)iVar1;
      *(uint *)(lVar6 + 0x18) = iVar1 + 1U;
      if (*(uint *)(lVar6 + 0x1c) < iVar1 + 1U) {
        FUN_1464490fe((longlong *)(lVar6 + 0x10),iVar1);
      }
      lVar9 = *(longlong *)(lVar6 + 0x10);
      *(undefined4 *)(lVar9 + lVar11 * 0x18) = 1;
      *(undefined8 *)(lVar9 + 8 + lVar11 * 0x18) = uVar10;
      *(undefined8 *)(lVar9 + 0x10 + lVar11 * 0x18) = 0;
      goto LAB_1438aac88;
    }
    if (param_1 == 8) {
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14cb26560 + 0x20));
      if (param_2 == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_2;
      }
      iVar1 = *(int *)(lVar6 + 0x18);
      *(uint *)(lVar6 + 0x18) = iVar1 + 1U;
      if (*(uint *)(lVar6 + 0x1c) < iVar1 + 1U) {
        FUN_1464490fe((longlong *)(lVar6 + 0x10),iVar1);
      }
      lVar11 = *(longlong *)(lVar6 + 0x10);
      lVar9 = (longlong)iVar1 * 0x18;
      *(undefined4 *)(lVar11 + lVar9) = 8;
      *(undefined8 *)(lVar11 + 8 + lVar9) = uVar10;
      *(undefined8 *)(lVar11 + 0x10 + lVar9) = 0;
      puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar7 = &PTR_FUN_14acb8920;
      uVar12 = *(undefined4 *)((longlong)param_2 + 4);
      uVar18 = *(undefined4 *)(param_2 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar10 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar12;
      *(undefined4 *)(puVar7 + 2) = uVar18;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
      puVar7[3] = uVar10;
      puVar7[4] = uVar3;
      puVar7[5] = uVar4;
      puVar7[6] = uVar5;
    }
    else {
      if (param_1 != 0x40) {
        return;
      }
      auVar15._8_4_ = uVar18;
      auVar15._0_8_ = DAT_14cb262c8;
      auVar15._12_4_ = 0x45300000;
      dVar13 = (((double)CONCAT44(0x43300000,uVar12) - 4503599627370496.0) +
               (auVar15._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14cb26560 + 0x20));
      if (param_2 == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_2;
      }
      iVar1 = *(int *)(lVar6 + 0x18);
      *(uint *)(lVar6 + 0x18) = iVar1 + 1U;
      if (*(uint *)(lVar6 + 0x1c) < iVar1 + 1U) {
        FUN_1464490fe((longlong *)(lVar6 + 0x10),iVar1);
      }
      lVar11 = *(longlong *)(lVar6 + 0x10);
      lVar9 = (longlong)iVar1 * 0x18;
      *(undefined4 *)(lVar11 + lVar9) = 0x40;
      *(undefined8 *)(lVar11 + 8 + lVar9) = uVar10;
      *(undefined8 *)(lVar11 + 0x10 + lVar9) = 0;
      puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar7 = &PTR_FUN_14acb8938;
      uVar12 = *(undefined4 *)((longlong)param_2 + 4);
      uVar18 = *(undefined4 *)(param_2 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar10 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar12;
      *(undefined4 *)(puVar7 + 2) = uVar18;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
      puVar7[3] = uVar10;
      puVar7[4] = uVar3;
      puVar7[5] = param_2[4];
      puVar7[6] = dVar13;
    }
    puVar8 = *(undefined8 **)(*(longlong *)(lVar6 + 0x10) + 0x10 + lVar9);
    *(undefined8 **)(*(longlong *)(lVar6 + 0x10) + 0x10 + lVar9) = puVar7;
  }
  else {
    if (param_1 < 0x4000) {
      if (param_1 != 0x100) {
        if (param_1 != 0x2000) {
          return;
        }
        FUN_147f8285c(DAT_14cb26560,param_2);
        return;
      }
      auVar16._8_4_ = uVar18;
      auVar16._0_8_ = DAT_14cb262c8;
      auVar16._12_4_ = 0x45300000;
      dVar14 = ((double)CONCAT44(0x43300000,uVar12) - 4503599627370496.0) +
               (auVar16._8_8_ - 1.9342813113834067e+25);
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14cb26560 + 0x20));
      if (param_2 == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_2;
      }
      iVar1 = *(int *)(lVar6 + 0x18);
      *(uint *)(lVar6 + 0x18) = iVar1 + 1U;
      if (*(uint *)(lVar6 + 0x1c) < iVar1 + 1U) {
        FUN_1464490fe((longlong *)(lVar6 + 0x10),iVar1);
      }
      lVar11 = *(longlong *)(lVar6 + 0x10);
      lVar9 = (longlong)iVar1 * 0x18;
      *(undefined4 *)(lVar11 + lVar9) = 0x100;
    }
    else {
      if (param_1 != 0x4000) {
        if (param_1 != 0x10000) {
          return;
        }
        FUN_147f82952(DAT_14cb26560,param_2);
        return;
      }
      auVar17._8_4_ = uVar18;
      auVar17._0_8_ = DAT_14cb262c8;
      auVar17._12_4_ = 0x45300000;
      dVar14 = ((double)CONCAT44(0x43300000,uVar12) - 4503599627370496.0) +
               (auVar17._8_8_ - 1.9342813113834067e+25);
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14cb26560 + 0x20));
      if (param_2 == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_2;
      }
      iVar1 = *(int *)(lVar6 + 0x18);
      *(uint *)(lVar6 + 0x18) = iVar1 + 1U;
      if (*(uint *)(lVar6 + 0x1c) < iVar1 + 1U) {
        FUN_1464490fe((longlong *)(lVar6 + 0x10),iVar1);
      }
      lVar11 = *(longlong *)(lVar6 + 0x10);
      lVar9 = (longlong)iVar1 * 0x18;
      *(undefined4 *)(lVar11 + lVar9) = 0x4000;
    }
    *(undefined8 *)(lVar11 + 8 + lVar9) = uVar10;
    *(undefined8 *)(lVar11 + 0x10 + lVar9) = 0;
    puVar7 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    *puVar7 = &PTR_FUN_14acb8928;
    puVar8 = puVar7;
    for (lVar11 = 9; puVar8 = puVar8 + 1, lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar8 = *param_2;
      param_2 = param_2 + 1;
    }
    puVar7[10] = dVar14 * dVar13;
    puVar8 = *(undefined8 **)(*(longlong *)(lVar6 + 0x10) + 0x10 + lVar9);
    *(undefined8 **)(*(longlong *)(lVar6 + 0x10) + 0x10 + lVar9) = puVar7;
  }
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_1438aac88:
                    /* WARNING: Could not recover jumptable at 0x0001438aac9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x20));
  return;
}



// FUNCTION 1438aadaa FUN_1438aadaa body=41 status=ok
// SIG undefined FUN_1438aadaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1438aadaa(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar1._0_8_ = DAT_14cb262c8;
  auVar1._12_4_ = 0x45300000;
  return (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
         (auVar1._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
}



// FUNCTION 1438aadd4 FUN_1438aadd4 body=398 status=ok
// SIG undefined FUN_1438aadd4(void)

void FUN_1438aadd4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x160);
  if (lVar4 == 0) {
    uVar3 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x160) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x158) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x168) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x158));
        *(longlong *)(param_1 + 0x168) = lVar4;
        if (lVar4 != 0) goto LAB_1438aae14;
      }
    }
    if ((*(char *)(param_1 + 0x148) != '\x01') || (*(longlong *)(param_1 + 0x14c) == 0))
    goto LAB_1438aaeb0;
  }
LAB_1438aae14:
  local_38 = 0;
  uStack_30 = 0;
  local_40 = FUN_140206ee8((char *)(param_1 + 0x148));
  FUN_140942716();
  plVar1 = (longlong *)(param_1 + 0x180);
  if ((*(longlong *)(param_1 + 0x180) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x50));
  }
  *plVar1 = local_40;
  FUN_140942716(plVar1);
  if ((local_40 != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(local_40 + 0x50));
  }
  if ((*plVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(*plVar1 + 0x48);
  }
  *(undefined1 *)(param_1 + 0x108) = 2;
LAB_1438aaeb0:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438aaf64 FUN_1438aaf64 body=534 status=ok
// SIG undefined FUN_1438aaf64(void)

int FUN_1438aaf64(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_14073751e();
  if (DAT_14c951858 == 0) {
    local_80 = &local_38;
    local_38 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1468c5283;
    local_90 = FUN_142809da0;
    local_98 = L"Engine";
    local_a0 = 0x400000000;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (lVar5 = lVar3,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         != lVar2 + 0x30)) {
        lVar5 = 0;
      }
    } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
  }
  uVar1 = *(undefined8 *)(lVar5 + 0x118);
  local_68 = *(undefined8 *)(param_1 + 0x148);
  local_60 = *(undefined4 *)(param_1 + 0x150);
  local_58 = *(undefined8 *)(param_1 + 0x158);
  uVar4 = FUN_14477b664(*(undefined8 *)(param_1 + 0x160));
  local_50 = FUN_14477b664(uVar4);
  local_48 = *(undefined8 *)(param_1 + 0x168);
  local_40 = *(undefined8 *)(param_1 + 0x170);
  FUN_140942716(&local_40);
  FUN_140c576fe(&local_38,&local_68);
  dVar8 = ((double)(int)uVar1 * (double)local_2c) / (double)(int)((ulonglong)uVar1 >> 0x20);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar8;
  auVar6 = roundpd(auVar6,auVar6,1);
  auVar7._0_8_ = (double)(int)(dVar8 - auVar6._0_8_) + dVar8;
  auVar7._8_8_ = 0;
  auVar6 = roundpd(auVar7,auVar7,1);
  dVar8 = auVar6._0_8_;
  if (2147483647.0 <= dVar8) {
    dVar8 = 2147483647.0;
  }
  if (dVar8 <= -2147483648.0) {
    dVar8 = -2147483648.0;
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return (int)dVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ab17c FUN_1438ab17c body=402 status=ok
// SIG undefined FUN_1438ab17c(void)

void FUN_1438ab17c(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_50 = param_2[2];
  uVar1 = FUN_14477b664(param_2[3]);
  local_48 = FUN_14477b664(uVar1);
  local_40 = param_2[4];
  local_38 = param_2[5];
  FUN_140942716(&local_38);
  uVar1 = 0;
  if (param_4 != '\0') {
    uVar1 = param_3;
    param_3 = 0;
  }
  *(undefined8 *)(param_1 + 0x13c) = param_3;
  *(undefined8 *)(param_1 + 0x134) = uVar1;
  *(char *)(param_1 + 0x130) = param_4;
  *(undefined4 *)(param_1 + 0x150) = local_58;
  *(undefined8 *)(param_1 + 0x148) = local_60;
  if (*(longlong *)(param_1 + 0x158) != local_50) {
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(longlong *)(param_1 + 0x158) = local_50;
  if (*(longlong *)(param_1 + 0x160) != local_48) {
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  uVar1 = FUN_14477b664();
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  *(undefined8 *)(param_1 + 0x168) = local_40;
  FUN_144a82394(param_1 + 0x170,&local_38);
  FUN_140862298(param_1 + 0x148);
  FUN_147f81cba(param_1);
  if ((local_38 != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(local_38 + 0x50));
  }
  if ((param_2[5] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_2[5] + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438ab382 FUN_1438ab382 body=141 status=ok
// SIG undefined FUN_1438ab382(void)

AkInitSettings * FUN_1438ab382(AkInitSettings *param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x2c] = (AkInitSettings)0x0;
  AK::SoundEngine::GetDefaultInitSettings(param_1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x314);
  *(int *)(param_1 + 0x1c) = (int)(longlong)(*(float *)(param_2 + 0x2f8) * 1048576.0);
  if ((*(char *)(param_2 + 0x305) == '\x01') && (DAT_14cb259f8 != 0)) {
    FUN_1438a51ae(DAT_14cb259f8 + 0xd4,*(undefined4 *)(param_2 + 0x30c),
                  *(undefined4 *)(param_2 + 0x308),param_1 + 0x38);
  }
  return param_1;
}



// FUNCTION 1438ab448 FUN_1438ab448 body=61 status=ok
// SIG undefined FUN_1438ab448(void)

void FUN_1438ab448(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb26360);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14acb87a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 1438ab4be FUN_1438ab4be body=85 status=ok
// SIG undefined FUN_1438ab4be(void)

void FUN_1438ab4be(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xc00,0);
    lVar4 = 0xff;
    plVar1 = plVar2;
    do {
      plVar3 = (longlong *)((longlong)plVar1 + 0xc);
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x100;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1438ab513 FUN_1438ab513 body=69 status=ok
// SIG undefined FUN_1438ab513(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ab513(void)

{
  _DAT_14cb263e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438ab555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb263f0,1);
  return;
}



// FUNCTION 1438ab558 FUN_1438ab558 body=69 status=ok
// SIG undefined FUN_1438ab558(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ab558(void)

{
  _DAT_14cb263f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001438ab59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb26400,1);
  return;
}



// FUNCTION 1438ab59e FUN_1438ab59e body=320 status=ok
// SIG undefined FUN_1438ab59e(void)

void FUN_1438ab59e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((longlong *)*param_1 != (longlong *)0x0) && (*(longlong *)*param_1 != -1)) {
    iVar8 = 0;
    (**(code **)(*param_2 + 0x4a8))(param_2,local_98,*(undefined8 *)(param_1[1] + 0x88),0);
    puVar6 = local_98;
    puVar7 = local_f8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    lVar1 = *param_1;
    lVar4 = lVar1 + 0x140;
    uVar2 = *(uint *)(lVar1 + 0x1d4);
    *(undefined4 *)(lVar1 + 0x1d0) = 0;
    if ((int)uVar2 < 0) {
      FUN_147f80112(lVar4,0);
      iVar8 = *(int *)(lVar1 + 0x1d0);
      uVar2 = *(uint *)(lVar1 + 0x1d4);
    }
    *(undefined1 *)(lVar1 + 0x26c) = 0;
    *(uint *)(lVar1 + 0x1d0) = iVar8 + 1U;
    if (uVar2 < iVar8 + 1U) {
      FUN_140089f7a(lVar4,iVar8);
    }
    if (*(longlong *)(lVar1 + 0x1c0) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x1c0);
    }
    lVar3 = (longlong)iVar8 * 0x80;
    puVar6 = local_f8;
    puVar7 = (undefined8 *)(lVar4 + lVar3);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined8 *)(lVar4 + 0x60 + lVar3) = 0x3f800000;
    *(undefined2 *)(lVar4 + 0x68 + lVar3) = 0;
    *(undefined8 *)(lVar4 + 0x6c + lVar3) = 0;
    FUN_1447906c0(lVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ab718 FUN_1438ab718 body=162 status=ok
// SIG undefined FUN_1438ab718(void)

undefined8 FUN_1438ab718(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar1 = *param_1;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = *(ulonglong *)(lVar1 + 0x30);
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar6 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[8];
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)param_2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar7 != -1) {
      do {
        puVar4 = (ulonglong *)(*param_2 + (longlong)iVar7 * 0x18);
        if (*puVar4 == uVar2) goto LAB_1438ab79c;
        iVar7 = (int)puVar4[2];
      } while (iVar7 != -1);
    }
  }
  puVar4 = (ulonglong *)0x0;
LAB_1438ab79c:
  puVar3 = puVar4 + 1;
  if (puVar4 == (ulonglong *)0x0) {
    puVar3 = (ulonglong *)0x0;
  }
  if (puVar3 != (ulonglong *)0x0) {
    *(ulonglong *)(lVar1 + 0x38) = *puVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),puVar3 != (ulonglong *)0x0);
}



// FUNCTION 1438ab7ba FUN_1438ab7ba body=751 status=ok
// SIG undefined FUN_1438ab7ba(void)

void FUN_1438ab7ba(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStackY_c8 [32];
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStackY_c8;
  if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x10)) {
    do {
      lVar15 = *(longlong *)(param_1 + 8);
      lVar8 = *(longlong *)(lVar15 + 0x10);
      if (lVar8 != 0) {
        LOCK();
        *(undefined4 *)(*(longlong *)(lVar8 + 0x50) + 8) = 1;
        UNLOCK();
        local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar8 + 0x38));
        AK::SoundEngine::PrepareEvent
                  (1,(uint *)&local_88,1,
                   (_func_void_uint_void_ptr_AKRESULT_void_ptr *)&LAB_1438abac4,
                   *(void **)(lVar8 + 0x50));
      }
      FUN_14042ca7a(param_1,lVar15);
    } while (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x10));
  }
  local_88 = 0;
  uStack_80 = 0;
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 == 0) {
    uVar11 = 1;
    uVar14 = 0;
    iVar13 = 0;
    iVar5 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x30);
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar11 = uVar14;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar14) goto LAB_1438aba6a;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar14 = 0;
      iVar13 = 0;
    }
    uVar11 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar5 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != iVar3) {
    uVar16 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(param_1 + 0x20);
      lVar8 = (longlong)iVar5;
      fVar17 = *(float *)(lVar15 + 8 + lVar8 * 0x18) - param_2;
      *(float *)(lVar15 + 8 + lVar8 * 0x18) = fVar17;
      if (fVar17 < 0.0) {
        puVar1 = (undefined8 *)(lVar15 + lVar8 * 0x18);
        FUN_140f4e7ec(lVar15,*puVar1);
        uVar2 = uStack_80;
        lVar15 = (longlong)(int)uStack_80;
        uVar6 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
        if (uStack_80._4_4_ < uVar6) {
          FUN_147f85482(&local_88,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_88 + lVar15 * 8) = *puVar1;
      }
      lVar15 = local_88;
      uVar16 = uVar16 & ~(uint)uVar11;
      puVar7 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x30);
      }
      iVar4 = *(int *)(param_1 + 0x48);
      iVar5 = (int)uVar14;
      lVar8 = (longlong)iVar5;
      uVar6 = puVar7[lVar8] & uVar16;
      if (uVar6 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar12 = 0;
          do {
            uVar6 = puVar7[lVar8 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1438ab9e2;
            }
            iVar13 = iVar13 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar10 - lVar8 != lVar12);
          uVar16 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar4;
      }
      else {
LAB_1438ab9e2:
        uVar11 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar11 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar3);
    lVar8 = (longlong)(int)uStack_80;
    if (lVar8 != 0) {
      lVar12 = 0;
      do {
        FUN_147f84e74((longlong *)(param_1 + 0x20),*(undefined8 *)(lVar15 + lVar12));
        lVar12 = lVar12 + 8;
      } while (lVar8 * 8 != lVar12);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
LAB_1438aba6a:
  if ((local_70 ^ (ulonglong)auStackY_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438abae4 FUN_1438abae4 body=72 status=ok
// SIG undefined FUN_1438abae4(void)

void FUN_1438abae4(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  if (param_4 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 8));
    *(uint *)(param_4 + 0x30) = (uint)(param_3 != 1) * 3 + 2;
                    /* WARNING: Could not recover jumptable at 0x0001438abb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 8));
    return;
  }
  return;
}



// FUNCTION 1438abb2c FUN_1438abb2c body=79 status=ok
// SIG undefined FUN_1438abb2c(void)

void FUN_1438abb2c(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  if ((param_4 != 0) && (DAT_14cb26448 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 8));
    *(uint *)(param_4 + 0x30) = (uint)(param_3 != 1) * 5;
                    /* WARNING: Could not recover jumptable at 0x0001438abb6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 8));
    return;
  }
  return;
}



// FUNCTION 1438abbb4 FUN_1438abbb4 body=61 status=ok
// SIG undefined FUN_1438abbb4(void)

void FUN_1438abbb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb26470);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14acb87a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 1438abbf2 FUN_1438abbf2 body=52 status=ok
// SIG undefined FUN_1438abbf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438abbf2(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb2645c = _DAT_14cb2645c + -1;
    *param_2 = DAT_14cb26450;
    DAT_14cb26450 = param_2;
  }
  return;
}



// FUNCTION 1438abc60 FUN_1438abc60 body=61 status=ok
// SIG undefined FUN_1438abc60(void)

void FUN_1438abc60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb264b0);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14acb87a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 1438abc9e FUN_1438abc9e body=52 status=ok
// SIG undefined FUN_1438abc9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438abc9e(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb264ac = _DAT_14cb264ac + -1;
    *param_2 = DAT_14cb264a0;
    DAT_14cb264a0 = param_2;
  }
  return;
}



// FUNCTION 1438abd44 FUN_1438abd44 body=61 status=ok
// SIG undefined FUN_1438abd44(void)

void FUN_1438abd44(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181acc4(&DAT_14cb26530);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14acb87a0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 1438abd82 FUN_1438abd82 body=31 status=ok
// SIG undefined FUN_1438abd82(void)

undefined8 FUN_1438abd82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438abda2 FUN_1438abda2 body=73 status=ok
// SIG undefined FUN_1438abda2(void)

undefined8 FUN_1438abda2(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]));
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1438abdf2 FUN_1438abdf2 body=163 status=ok
// SIG undefined FUN_1438abdf2(void)

void FUN_1438abdf2(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && (param_1[1] != -1)) && (*plVar1 == param_1[1])) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    FUN_141819b04(plVar1,param_1[2],(int)param_1[3]);
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) {
          return;
        }
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1438abea0 FUN_1438abea0 body=29 status=ok
// SIG undefined FUN_1438abea0(void)

void FUN_1438abea0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1438abebe FUN_1438abebe body=55 status=ok
// SIG undefined FUN_1438abebe(void)

undefined8 * FUN_1438abebe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14acb88b0;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438abef6 FUN_1438abef6 body=151 status=ok
// SIG undefined FUN_1438abef6(void)

undefined8 * FUN_1438abef6(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14acb88f8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  local_30 = &local_40;
  local_40 = puVar1;
  local_38 = param_2;
  FUN_1401ac3b6(*(undefined8 *)(param_1 + 8),local_24,&local_38,0);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ac00e FUN_1438ac00e body=137 status=ok
// SIG undefined FUN_1438ac00e(void)

void FUN_1438ac00e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    lVar4 = (longlong)(int)((longlong *)*param_1)[1];
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)*param_1 + lVar5) == *(int *)(*(longlong *)(param_2 + 0x50) + 8))
        {
          plVar2 = (longlong *)param_1[1];
          puVar3 = &DAT_14c9485f0;
          if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
            puVar3 = *(undefined4 **)(param_2 + 8);
          }
          iVar1 = (int)plVar2[1];
          *(uint *)(plVar2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
            FUN_14014a81a(plVar2,iVar1);
          }
          FUN_1447a97f4((longlong)iVar1 * 0x28 + *plVar2,puVar3);
          return;
        }
        lVar5 = lVar5 + 4;
      } while (lVar4 * 4 != lVar5);
    }
  }
  return;
}



// FUNCTION 1438ac0c2 FUN_1438ac0c2 body=29 status=ok
// SIG undefined FUN_1438ac0c2(void)

undefined8 FUN_1438ac0c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438ac0f4 FUN_1438ac0f4 body=85 status=ok
// SIG undefined FUN_1438ac0f4(void)

void FUN_1438ac0f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8950;
  return;
}



// FUNCTION 1438ac14a FUN_1438ac14a body=85 status=ok
// SIG undefined FUN_1438ac14a(void)

void FUN_1438ac14a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8950;
  return;
}



// FUNCTION 1438ac1a0 FUN_1438ac1a0 body=118 status=ok
// SIG undefined FUN_1438ac1a0(void)

void FUN_1438ac1a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35db0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb8950;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438ac207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438ac21e FUN_1438ac21e body=19 status=ok
// SIG undefined FUN_1438ac21e(void)

undefined1 FUN_1438ac21e(undefined8 param_1,undefined8 param_2)

{
  FUN_1438ac232(param_2);
  return 1;
}



// FUNCTION 1438ac232 FUN_1438ac232 body=181 status=ok
// SIG undefined FUN_1438ac232(void)

void FUN_1438ac232(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_1 + 0x10))
            (param_1,L"------------- Gathering Loaded Wwise Events -------------",*puVar1,puVar1 + 4
            );
  local_28 = (undefined8 *)0x0;
  local_20 = 2;
  FUN_147f84718(&local_28,2);
  *local_28 = 0x300000002;
  FUN_1438ac2e8(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_1 + 0x10))
            (param_1,L"------------- Gathering Loaded Wwise Events COMPLETED! -------------",*puVar1
             ,puVar1 + 4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ac2e8 FUN_1438ac2e8 body=341 status=ok
// SIG undefined FUN_1438ac2e8(void)

void FUN_1438ac2e8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  longlong *local_70;
  code *local_68;
  undefined8 *puStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  if (DAT_14cb263e0 == 0) {
    puVar5 = &DAT_149dfb77a;
    uVar3 = 0;
  }
  else {
    puStack_60 = &local_78;
    local_70 = &local_88;
    local_68 = FUN_1438ac00e;
    local_78 = param_2;
    FUN_14042cac6();
    uVar3 = uStack_80 & 0xffffffff;
    puVar5 = (undefined2 *)&DAT_149e31048;
    if ((int)uStack_80 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
  }
  FUN_140047918(param_1,L"Found %i events%s",uVar3,puVar5);
  uVar1 = 0;
  if ((longlong)(int)uStack_80 != 0) {
    lVar6 = (longlong)(int)uStack_80 * 0x28;
    lVar2 = local_88;
    do {
      local_68 = (code *)0x0;
      puStack_60 = (undefined8 *)0x0;
      FUN_1400b2348(lVar2,&local_68,1);
      pcVar4 = (code *)&DAT_149dfb77a;
      if ((int)puStack_60 != 0) {
        pcVar4 = local_68;
      }
      FUN_140047918(param_1,L"- %s",pcVar4);
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x28;
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != 0);
    uVar1 = (int)uStack_80;
  }
  FUN_1456d172d(local_88,uVar1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ac43e FUN_1438ac43e body=29 status=ok
// SIG undefined FUN_1438ac43e(void)

undefined8 FUN_1438ac43e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438ac470 FUN_1438ac470 body=85 status=ok
// SIG undefined FUN_1438ac470(void)

void FUN_1438ac470(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8af0;
  return;
}



// FUNCTION 1438ac4c6 FUN_1438ac4c6 body=85 status=ok
// SIG undefined FUN_1438ac4c6(void)

void FUN_1438ac4c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35db0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8af0;
  return;
}



// FUNCTION 1438ac51c FUN_1438ac51c body=118 status=ok
// SIG undefined FUN_1438ac51c(void)

void FUN_1438ac51c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35db0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb8af0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438ac583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438ac59a FUN_1438ac59a body=19 status=ok
// SIG undefined FUN_1438ac59a(void)

undefined1 FUN_1438ac59a(undefined8 param_1,undefined8 param_2)

{
  FUN_1438ac5ae(param_2);
  return 1;
}



// FUNCTION 1438ac5ae FUN_1438ac5ae body=174 status=ok
// SIG undefined FUN_1438ac5ae(void)

void FUN_1438ac5ae(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_1 + 0x10))
            (param_1,L"------------- Gathering UnloadQueue Events -------------",*puVar1,puVar1 + 4)
  ;
  local_28 = (undefined4 *)0x0;
  local_20 = 1;
  FUN_147f84718(&local_28,1);
  *local_28 = 4;
  FUN_1438ac2e8(param_1,&local_28);
  if (local_28 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_1 + 0x10))
            (param_1,L"------------- Gathering UnloadQueue Events COMPLETED! -------------",*puVar1,
             puVar1 + 4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ac65e FUN_1438ac65e body=166 status=ok
// SIG undefined FUN_1438ac65e(void)

undefined8 * FUN_1438ac65e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14acb8c60;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 == (longlong *)0x0) goto LAB_1438ac6ab;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1438ac6a3;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_1438ac6a3:
  param_1[3] = 0;
LAB_1438ac6ab:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1438ac718 FUN_1438ac718 body=112 status=ok
// SIG undefined FUN_1438ac718(void)

void FUN_1438ac718(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8c60;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x108) = *(int *)(lVar2 + 0x108) + 1;
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1438ac788 FUN_1438ac788 body=112 status=ok
// SIG undefined FUN_1438ac788(void)

void FUN_1438ac788(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acb8c60;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x108) = *(int *)(lVar2 + 0x108) + 1;
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1438ac7f8 FUN_1438ac7f8 body=150 status=ok
// SIG undefined FUN_1438ac7f8(void)

void FUN_1438ac7f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acb8c60;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    *(int *)&p_Var2[0x10].Blink = *(int *)&p_Var2[0x10].Blink + 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001438ac87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1438ac88e FUN_1438ac88e body=331 status=ok
// SIG undefined FUN_1438ac88e(void)

void FUN_1438ac88e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_2 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
     (**(longlong **)(param_1 + 0x18) != -1)) {
    iVar8 = 0;
    (**(code **)(*param_2 + 0x4a8))
              (param_2,local_98,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88),0);
    puVar6 = local_98;
    puVar7 = local_f8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar4 = lVar1 + 0x140;
    uVar2 = *(uint *)(lVar1 + 0x1d4);
    *(undefined4 *)(lVar1 + 0x1d0) = 0;
    if ((int)uVar2 < 0) {
      FUN_147f80112(lVar4,0);
      iVar8 = *(int *)(lVar1 + 0x1d0);
      uVar2 = *(uint *)(lVar1 + 0x1d4);
    }
    *(undefined1 *)(lVar1 + 0x26c) = 0;
    *(uint *)(lVar1 + 0x1d0) = iVar8 + 1U;
    if (uVar2 < iVar8 + 1U) {
      FUN_140089f7a(lVar4,iVar8);
    }
    if (*(longlong *)(lVar1 + 0x1c0) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x1c0);
    }
    lVar3 = (longlong)iVar8 * 0x80;
    puVar6 = local_f8;
    puVar7 = (undefined8 *)(lVar4 + lVar3);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined8 *)(lVar4 + 0x60 + lVar3) = 0x3f800000;
    *(undefined2 *)(lVar4 + 0x68 + lVar3) = 0;
    *(undefined8 *)(lVar4 + 0x6c + lVar3) = 0;
    FUN_1447906c0(lVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ac9da FUN_1438ac9da body=336 status=ok
// SIG undefined FUN_1438ac9da(void)

undefined8 FUN_1438ac9da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_2 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
     (**(longlong **)(param_1 + 0x18) != -1)) {
    iVar8 = 0;
    (**(code **)(*param_2 + 0x4a8))
              (param_2,local_98,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88),0);
    puVar6 = local_98;
    puVar7 = local_f8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar4 = lVar1 + 0x140;
    uVar2 = *(uint *)(lVar1 + 0x1d4);
    *(undefined4 *)(lVar1 + 0x1d0) = 0;
    if ((int)uVar2 < 0) {
      FUN_147f80112(lVar4,0);
      iVar8 = *(int *)(lVar1 + 0x1d0);
      uVar2 = *(uint *)(lVar1 + 0x1d4);
    }
    *(undefined1 *)(lVar1 + 0x26c) = 0;
    *(uint *)(lVar1 + 0x1d0) = iVar8 + 1U;
    if (uVar2 < iVar8 + 1U) {
      FUN_140089f7a(lVar4,iVar8);
    }
    if (*(longlong *)(lVar1 + 0x1c0) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x1c0);
    }
    lVar3 = (longlong)iVar8 * 0x80;
    puVar6 = local_f8;
    puVar7 = (undefined8 *)(lVar4 + lVar3);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined8 *)(lVar4 + 0x60 + lVar3) = 0x3f800000;
    *(undefined2 *)(lVar4 + 0x68 + lVar3) = 0;
    *(undefined8 *)(lVar4 + 0x6c + lVar3) = 0;
    FUN_1447906c0(lVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438acb2c FUN_1438acb2c body=68 status=ok
// SIG undefined FUN_1438acb2c(void)

undefined8 * FUN_1438acb2c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14acb8cd0;
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



// FUNCTION 1438acb70 FUN_1438acb70 body=68 status=ok
// SIG undefined FUN_1438acb70(void)

undefined8 * FUN_1438acb70(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14acb8db0;
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



// FUNCTION 1438acbdb FUN_1438acbdb body=5422 status=ok
// SIG undefined FUN_1438acbdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438acbdb(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb25ad0 = (ulonglong)uVar2;
  DAT_14cb25b38 = 0;
  uRam000000014cb25b40 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_1438abdec;
  local_98 = &DAT_14011fc1e;
  FUN_1460e1400(&local_98);
  atexit((_func_5014 *)&LAB_1438a9ff9);
  DAT_14cb25be0 = 0;
  atexit(FUN_1438aa2c8);
  DAT_14cb25c08 = 0;
  DAT_14cb25c10 = 0;
  DAT_14cb25be8 = 0;
  _DAT_14cb25bf0 = 0;
  _DAT_14cb25c14 = 0xffffffff00000080;
  _DAT_14cb25c1c = 0;
  DAT_14cb25c28 = 0;
  _DAT_14cb25c30 = 0;
  atexit(FUN_1438aa2f6);
  FUN_140056680(&DAT_14cb25c40,L"Event");
  FUN_140056680(&DAT_14cb25c50,L"AuxBus");
  FUN_140056680(&DAT_14cb25c60,L"AcousticTexture");
  FUN_140056680(&DAT_14cb25c70,L"State");
  FUN_140056680(&DAT_14cb25c80,L"Switch");
  FUN_140056680(&DAT_14cb25c90,L"GameParameter");
  FUN_140056680(&DAT_14cb25ca0,L"Trigger");
  FUN_140056680(&DAT_14cb25cb0,L"ActorMixer");
  atexit(FUN_1438aa31f);
  FUN_140056680(&DAT_14cb25cc0,L"Events");
  FUN_140056680(&DAT_14cb25cd0,L"Busses");
  FUN_140056680(&DAT_14cb25ce0,L"VirtualAcoustics");
  FUN_140056680(&DAT_14cb25cf0,L"States");
  FUN_140056680(&DAT_14cb25d00,L"Switches");
  FUN_140056680(&DAT_14cb25d10,L"GameParameters");
  FUN_140056680(&DAT_14cb25d20,L"Triggers");
  FUN_140056680(&DAT_14cb25d30,L"ActorMixer");
  atexit(FUN_1438aa34d);
  FUN_140056680(&DAT_14cb25d40,L"Events");
  FUN_140056680(&DAT_14cb25d50,L"Master-Mixer Hierarchy");
  FUN_140056680(&DAT_14cb25d60,L"Virtual Acoustics");
  FUN_140056680(&DAT_14cb25d70,L"States");
  FUN_140056680(&DAT_14cb25d80,L"Switches");
  FUN_140056680(&DAT_14cb25d90,L"Game Parameters");
  FUN_140056680(&DAT_14cb25da0,L"Triggers");
  FUN_140056680(&DAT_14cb25db0,L"Actor-Mixer Hierarchy");
  atexit(FUN_1438aa37b);
  FUN_140056680(&DAT_14cb25dc0,L"Events");
  FUN_140056680(&DAT_14cb25dd0,L"Auxiliary Busses");
  FUN_140056680(&DAT_14cb25de0,L"Textures");
  FUN_140056680(&DAT_14cb25df0,L"States");
  FUN_140056680(&DAT_14cb25e00,L"Switches");
  FUN_140056680(&DAT_14cb25e10,L"GameParameters");
  FUN_140056680(&DAT_14cb25e20,L"Triggers");
  FUN_140056680(&DAT_14cb25e30,L"Actor Mixer");
  atexit(FUN_1438aa3a9);
  _DAT_14cb25e40 = 0;
  DAT_14cb25e48 = 0;
  atexit(FUN_1438aa3d7);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb25e50);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb25e50,4000);
  atexit((_func_5014 *)&LAB_1438aa412);
  DAT_14cb25e78 = 0;
  _DAT_14cb25e80 = 0;
  atexit((_func_5014 *)&LAB_1438aa420);
  _DAT_14cb25e8c = 0;
  FUN_14052b5e0(&DAT_14cb25e88,"volume_overall",0);
  _DAT_14cb25e98 = 0;
  FUN_14052b5e0(&DAT_14cb25e94,"volume_music",0);
  _DAT_14cb25ea4 = 0;
  FUN_14052b5e0(&DAT_14cb25ea0,"volume_sfx",0);
  _DAT_14cb25eb0 = 0;
  FUN_14052b5e0(&DAT_14cb25eac,"volume_dialog",0);
  _DAT_14cb25ebc = 0;
  FUN_14052b5e0(&DAT_14cb25eb8,"PlayInBackground",0);
  _DAT_14cb25ec8 = 0;
  FUN_14052b5e0(&DAT_14cb25ec4,"MuteHitNotifies",0);
  FUN_140056680(&DAT_14cb25f08,&DAT_149e01f64);
  atexit((_func_5014 *)&LAB_1438aa4f5);
  FUN_140056680(&DAT_14cb25f18,&DAT_149f0f4f8);
  atexit((_func_5014 *)&LAB_1438aa506);
  FUN_140056680(&DAT_14cb25ef8,L"return");
  atexit((_func_5014 *)&LAB_1438aa517);
  FUN_140056680(&DAT_14cb25f28,L"path");
  atexit((_func_5014 *)&LAB_1438aa528);
  FUN_140056680(&DAT_14cb25f38,L"filePath");
  atexit((_func_5014 *)&LAB_1438aa539);
  FUN_140056680(&DAT_14cb25ed8,L"from");
  atexit((_func_5014 *)&LAB_1438aa54a);
  FUN_140056680(&DAT_14cb25f48,L"name");
  atexit((_func_5014 *)&LAB_1438aa55b);
  FUN_140056680(&DAT_14cb25f58,L"type");
  atexit((_func_5014 *)&LAB_1438aa56c);
  FUN_140056680(&DAT_14cb25f68,L"children");
  atexit((_func_5014 *)&LAB_1438aa57d);
  FUN_140056680(&DAT_14cb25f78,L"childrenCount");
  atexit((_func_5014 *)&LAB_1438aa58e);
  FUN_140056680(&DAT_14cb25f88,L"ancestors");
  atexit((_func_5014 *)&LAB_1438aa59f);
  FUN_140056680(&DAT_14cb25f98,L"descendants");
  atexit((_func_5014 *)&LAB_1438aa5b0);
  FUN_140056680(&DAT_14cb25fa8,L"workunit:type");
  atexit((_func_5014 *)&LAB_1438aa5c1);
  FUN_140056680(&DAT_14cb25fb8,L"Folder");
  atexit((_func_5014 *)&LAB_1438aa5d2);
  FUN_140056680(&DAT_14cb25fc8,L"PhysicalFolder");
  atexit((_func_5014 *)&LAB_1438aa5e3);
  FUN_140056680(&DAT_14cb25fd8,L"search");
  atexit((_func_5014 *)&LAB_1438aa5f4);
  FUN_140056680(&DAT_14cb25fe8,L"parent");
  atexit((_func_5014 *)&LAB_1438aa605);
  FUN_140056680(&DAT_14cb25ff8,L"select");
  atexit((_func_5014 *)&LAB_1438aa616);
  FUN_140056680(&DAT_14cb25ee8,L"transform");
  atexit((_func_5014 *)&LAB_1438aa627);
  FUN_140056680(&DAT_14cb26008,L"object");
  atexit((_func_5014 *)&LAB_1438aa638);
  FUN_140056680(&DAT_14cb26018,L"objects");
  atexit((_func_5014 *)&LAB_1438aa649);
  FUN_140056680(&DAT_14cb26028,L"value");
  atexit((_func_5014 *)&LAB_1438aa65a);
  FUN_140056680(&DAT_14cb26038,L"command");
  atexit((_func_5014 *)&LAB_1438aa66b);
  FUN_140056680(&DAT_14cb26048,L"transport");
  atexit((_func_5014 *)&LAB_1438aa67c);
  FUN_140056680(&DAT_14cb26058,L"action");
  atexit((_func_5014 *)&LAB_1438aa68d);
  FUN_140056680(&DAT_14cb26068,L"play");
  atexit((_func_5014 *)&LAB_1438aa69e);
  FUN_140056680(&DAT_14cb26078,L"stop");
  atexit((_func_5014 *)&LAB_1438aa6af);
  FUN_140056680(&DAT_14cb26088,L"stopped");
  atexit((_func_5014 *)&LAB_1438aa6c0);
  FUN_140056680(&DAT_14cb26098,L"displayName");
  atexit((_func_5014 *)&LAB_1438aa6d1);
  FUN_140056680(&DAT_14cb260a8,L"Delete Items");
  atexit((_func_5014 *)&LAB_1438aa6e2);
  FUN_140056680(&DAT_14cb260b8,L"Drag Drop Items");
  atexit((_func_5014 *)&LAB_1438aa6f3);
  FUN_140056680(&DAT_14cb260c8,L"Undo");
  atexit((_func_5014 *)&LAB_1438aa704);
  FUN_140056680(&DAT_14cb260d8,L"Redo");
  atexit((_func_5014 *)&LAB_1438aa715);
  FUN_140056680(&DAT_14cb260e8,L"state");
  atexit((_func_5014 *)&LAB_1438aa726);
  FUN_140056680(&DAT_14cb260f8,L"ofType");
  atexit((_func_5014 *)&LAB_1438aa737);
  FUN_140056680(&DAT_14cb26108,L"Project");
  atexit((_func_5014 *)&LAB_1438aa748);
  FUN_140056680(&DAT_14cb26118,L"property");
  atexit((_func_5014 *)&LAB_1438aa759);
  FUN_140056680(&DAT_14cb26128,L"Volume");
  atexit((_func_5014 *)&LAB_1438aa76a);
  FUN_140056680(&DAT_14cb26138,L"FindInProjectExplorerSyncGroup1");
  atexit((_func_5014 *)&LAB_1438aa77b);
  FUN_140056680(&DAT_14cb26148,L"trimmedDuration");
  atexit((_func_5014 *)&LAB_1438aa78c);
  FUN_140056680(&DAT_14cb26158,L"Sound");
  atexit((_func_5014 *)&LAB_1438aa79d);
  FUN_140056680(&DAT_14cb26168,L"WorkUnit");
  atexit((_func_5014 *)&LAB_1438aa7ae);
  FUN_140056680(&DAT_14cb26178,L"object");
  atexit((_func_5014 *)&LAB_1438aa7bf);
  FUN_140056680(&DAT_14cb26188,L"numPeaks");
  atexit((_func_5014 *)&LAB_1438aa7d0);
  FUN_140056680(&DAT_14cb26198,L"timeFrom");
  atexit((_func_5014 *)&LAB_1438aa7e1);
  FUN_140056680(&DAT_14cb261a8,L"timeTo");
  atexit((_func_5014 *)&LAB_1438aa7f2);
  FUN_140056680(&DAT_14cb261b8,L"getCrossChannelPeaks");
  atexit((_func_5014 *)&LAB_1438aa803);
  FUN_140056680(&DAT_14cb261c8,L"peaksBinaryStrings");
  atexit((_func_5014 *)&LAB_1438aa814);
  FUN_140056680(&DAT_14cb261d8,L"maxAbsValue");
  atexit((_func_5014 *)&LAB_1438aa825);
  FUN_140056680(&DAT_14cb261e8,L"peaksArrayLength");
  atexit((_func_5014 *)&LAB_1438aa836);
  FUN_140056680(&DAT_14cb261f8,L"peaksDataSize");
  atexit((_func_5014 *)&LAB_1438aa847);
  FUN_140056680(&DAT_14cb26208,L"object");
  atexit((_func_5014 *)&LAB_1438aa858);
  FUN_140056680(&DAT_14cb26218,L"property");
  atexit((_func_5014 *)&LAB_1438aa869);
  FUN_140056680(&DAT_14cb26228,L"return");
  atexit((_func_5014 *)&LAB_1438aa87a);
  FUN_140056680(&DAT_14cb26238,L"platform");
  atexit((_func_5014 *)&LAB_1438aa88b);
  FUN_140056680(&DAT_14cb26248,L"TrimEnd");
  atexit((_func_5014 *)&LAB_1438aa89c);
  FUN_140056680(&DAT_14cb26258,L"TrimBegin");
  atexit((_func_5014 *)&LAB_1438aa8ad);
  FUN_140056680(&DAT_14cb26268,L"playbackDurationMin");
  atexit((_func_5014 *)&LAB_1438aa8be);
  FUN_140056680(&DAT_14cb26278,L"playbackDurationMax");
  atexit((_func_5014 *)&LAB_1438aa8cf);
  FUN_140056680(&DAT_14cb26288,L"playbackDurationType");
  atexit((_func_5014 *)&LAB_1438aa8e0);
  FUN_140056680(&DAT_14cb26298,L"trimBegin");
  atexit((_func_5014 *)&LAB_1438aa8f1);
  FUN_140056680(&DAT_14cb262a8,L"trimEnd");
  atexit((_func_5014 *)&LAB_1438aa902);
  DAT_14cb262d0 = 0;
  _DAT_14cb262d8 = 0;
  atexit(FUN_1438aa913);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb262e0,4000);
  atexit((_func_5014 *)&LAB_1438aa944);
  _DAT_14cb26308 = 0xffffffff;
  _DAT_14cb2630c = 0;
  _DAT_14cb26338 = &LAB_1438ab30f;
  _DAT_14cb26340 = 0x434a0000;
  DAT_14cb26344 = 1;
  DAT_14cb26330 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb26330;
  atexit((_func_5014 *)&LAB_1438ab314);
  DAT_14cb26350 = (undefined8 *)0x0;
  _DAT_14cb26358 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x2800,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 10;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb26358 = _DAT_14cb26358 + 0x80;
  *puVar4 = DAT_14cb26350;
  DAT_14cb26350 = puVar3;
  DAT_14cb26360 = (undefined8 *)0x0;
  _DAT_14cb26368 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x800,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb26360;
  _DAT_14cb26368 = _DAT_14cb26368 + 0x20;
  _DAT_14cb26378 = &LAB_1438ab40f;
  _DAT_14cb26380 = 0x43480000;
  DAT_14cb26384 = 1;
  DAT_14cb26370 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb26370;
  DAT_14cb26360 = puVar3;
  atexit((_func_5014 *)&LAB_1438ab414);
  DAT_14cb26390 = 0;
  DAT_14cb26398 = (undefined8 *)0x0;
  _DAT_14cb263a0 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x3000,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 0xc;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb263a0 = _DAT_14cb263a0 + 0x80;
  *puVar4 = DAT_14cb26398;
  DAT_14cb26398 = puVar3;
  DAT_14cb263a8 = (undefined8 *)0x0;
  _DAT_14cb263b0 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x600,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = (undefined8 *)((longlong)puVar1 + 0xc);
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb263b0 = _DAT_14cb263b0 + 0x80;
  *puVar4 = DAT_14cb263a8;
  DAT_14cb263a8 = puVar3;
  DAT_14cb263b8 = (undefined8 *)0x0;
  _DAT_14cb263c0 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x800,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb263b8;
  _DAT_14cb263c0 = _DAT_14cb263c0 + 0x20;
  _DAT_14cb263d0 = &LAB_1438ab485;
  _DAT_14cb263d8 = 0x43480000;
  DAT_14cb263dc = 1;
  DAT_14cb263c8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb263c8;
  DAT_14cb263b8 = puVar3;
  atexit((_func_5014 *)&LAB_1438ab48a);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e35db0;
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
  *(longlong *)(local_98 + 0x10) = lVar6;
  *(undefined ***)local_98 = &PTR_FUN_14acb8950;
  local_a8 = 0;
  FUN_14170bbaa(&DAT_14cb263e8,L"gbx.audio.log.LoadedEvents",L"Produce a list of all loaded events",
                &local_98);
  if (local_90 == 0) {
LAB_1438adb23:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_1438adb23;
  }
  atexit(FUN_1438ab513);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e35db0;
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
  *(longlong *)(local_98 + 0x10) = lVar6;
  *(undefined ***)local_98 = &PTR_FUN_14acb8af0;
  local_a8 = 0;
  FUN_14170bbaa(&DAT_14cb263f8,L"gbx.audio.log.UnloadQueueEvents",
                L"Produce a list of all events currently in the UnloadQueue",&local_98);
  if (local_90 != 0) {
    if (local_98 == (char *)0x0) goto LAB_1438adc0b;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1438adc0b:
  atexit(FUN_1438ab558);
  DAT_14cb26408 = (undefined8 *)0x0;
  _DAT_14cb26410 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x2400,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 9;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb26410 = _DAT_14cb26410 + 0x80;
  *puVar4 = DAT_14cb26408;
  DAT_14cb26408 = puVar3;
  DAT_14cb26418 = (undefined8 *)0x0;
  _DAT_14cb26420 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x800,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb26418;
  _DAT_14cb26420 = _DAT_14cb26420 + 0x20;
  _DAT_14cb26430 = &LAB_1438ab6df;
  _DAT_14cb26438 = 0x43480000;
  DAT_14cb2643c = 1;
  DAT_14cb26428 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb26428;
  DAT_14cb26418 = puVar3;
  atexit((_func_5014 *)&LAB_1438ab6e4);
  DAT_14cb26448 = 0;
  DAT_14cb26450 = (undefined8 *)0x0;
  _DAT_14cb26458 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x2800,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 10;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb26458 = _DAT_14cb26458 + 0x80;
  *puVar4 = DAT_14cb26450;
  DAT_14cb26450 = puVar3;
  DAT_14cb26460 = (undefined8 *)0x0;
  _DAT_14cb26468 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x1c00,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 7;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb26468 = _DAT_14cb26468 + 0x80;
  *puVar4 = DAT_14cb26460;
  DAT_14cb26460 = puVar3;
  DAT_14cb26470 = (undefined8 *)0x0;
  _DAT_14cb26478 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x800,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb26470;
  _DAT_14cb26478 = _DAT_14cb26478 + 0x20;
  _DAT_14cb26488 = &LAB_1438abb7b;
  _DAT_14cb26490 = 0x43480000;
  DAT_14cb26494 = 1;
  DAT_14cb26480 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb26480;
  DAT_14cb26470 = puVar3;
  atexit((_func_5014 *)&LAB_1438abb80);
  DAT_14cb264a0 = (undefined8 *)0x0;
  _DAT_14cb264a8 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x2800,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 10;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb264a8 = _DAT_14cb264a8 + 0x80;
  *puVar4 = DAT_14cb264a0;
  DAT_14cb264a0 = puVar3;
  DAT_14cb264b0 = (undefined8 *)0x0;
  _DAT_14cb264b8 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x800,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb264b0;
  _DAT_14cb264b8 = _DAT_14cb264b8 + 0x20;
  _DAT_14cb264c8 = &LAB_1438abc26;
  _DAT_14cb264d0 = 0x43480000;
  DAT_14cb264d4 = 1;
  DAT_14cb264c0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb264c0;
  DAT_14cb264b0 = puVar3;
  atexit((_func_5014 *)&LAB_1438abc2b);
  DAT_14cb264e0 = (undefined8 *)0x0;
  _DAT_14cb264e8 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x2800,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 10;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb264e8 = _DAT_14cb264e8 + 0x80;
  *puVar4 = DAT_14cb264e0;
  DAT_14cb264e0 = puVar3;
  DAT_14cb264f0 = (undefined8 *)0x0;
  _DAT_14cb264f8 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x800,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb264f0;
  _DAT_14cb264f8 = _DAT_14cb264f8 + 0x20;
  _DAT_14cb26508 = &LAB_1438abcd2;
  _DAT_14cb26510 = 0x43480000;
  DAT_14cb26514 = 1;
  DAT_14cb26500 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb26500;
  DAT_14cb264f0 = puVar3;
  atexit((_func_5014 *)&LAB_1438abcd7);
  DAT_14cb26520 = (undefined8 *)0x0;
  _DAT_14cb26528 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x2000,0);
  lVar5 = 0x7f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  _DAT_14cb26528 = _DAT_14cb26528 + 0x80;
  *puVar4 = DAT_14cb26520;
  DAT_14cb26520 = puVar3;
  DAT_14cb26530 = (undefined8 *)0x0;
  _DAT_14cb26538 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x800,0);
  lVar5 = 0x1f;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 8;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14cb26530;
  _DAT_14cb26538 = _DAT_14cb26538 + 0x20;
  _DAT_14cb26548 = &LAB_1438abd0b;
  _DAT_14cb26550 = 0x43480000;
  DAT_14cb26554 = 1;
  DAT_14cb26540 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb26540;
  DAT_14cb26530 = puVar3;
  atexit((_func_5014 *)&LAB_1438abd10);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ae10c FUN_1438ae10c body=55 status=ok
// SIG undefined FUN_1438ae10c(void)

void FUN_1438ae10c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb265a8 == 0) {
    uVar1 = FUN_141051039();
    DAT_14cb265a8 = FUN_14171c317(FUN_14644946f,uVar1,L"EFaceFXActorBlendMode");
  }
  return;
}



// FUNCTION 1438ae166 FUN_1438ae166 body=1534 status=ok
// SIG undefined FUN_1438ae166(void)

void FUN_1438ae166(longlong param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *_Src;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar5 = (*pcVar3)(plVar6), cVar5 == '\0')) {
          _Src = (longlong *)(lVar7 + *(int *)((longlong)plVar6 + 0x44));
          if (_Src != &local_38) {
            if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar6 + 0x100))(plVar6,&local_38,_Src,(int)plVar6[6]);
            }
            else {
              memcpy(&local_38,_Src,
                     (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar6 + 0xa0))(plVar6,lVar7,&local_38);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar6[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,&local_38,lVar7,1);
      }
      else {
        (*pcVar3)(plVar6,&local_38,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar5 = (*pcVar3)(), cVar5 == '\0')) {
          puVar8 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar6 + 0x44));
          if (puVar8 != &local_40) {
            if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar6 + 0x100))(plVar6,&local_40,puVar8,(int)plVar6[6]);
            }
            else {
              memcpy(&local_40,puVar8,
                     (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar6 + 0xa0))(plVar6,lVar7,&local_40);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar6[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,&local_40,lVar7,1);
      }
      else {
        (*pcVar3)(plVar6,&local_40,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      else {
LAB_1438ae557:
        if (lVar7 == 0) goto LAB_1438ae5da;
      }
      if (*(char *)(lVar7 + 0x188) == '\x01') {
        bVar9 = *(longlong *)(lVar7 + 0xd8) != 0;
        goto LAB_1438ae5dc;
      }
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x140);
    lVar7 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    bVar9 = false;
    do {
      if (*plVar6 == local_38) {
        if (plVar6 == (longlong *)0x0) goto LAB_1438ae5da;
        lVar7 = plVar6[7];
        goto LAB_1438ae557;
      }
      plVar6 = plVar6 + 9;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
    goto LAB_1438ae5dc;
  }
LAB_1438ae5da:
  bVar9 = false;
LAB_1438ae5dc:
  *param_3 = bVar9;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438ae766 FUN_1438ae766 body=1520 status=ok
// SIG undefined FUN_1438ae766(void)

void FUN_1438ae766(longlong param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *_Src;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar5 = (*pcVar3)(plVar6), cVar5 == '\0')) {
          _Src = (longlong *)(lVar7 + *(int *)((longlong)plVar6 + 0x44));
          if (_Src != &local_38) {
            if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar6 + 0x100))(plVar6,&local_38,_Src,(int)plVar6[6]);
            }
            else {
              memcpy(&local_38,_Src,
                     (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar6 + 0xa0))(plVar6,lVar7,&local_38);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar6[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,&local_38,lVar7,1);
      }
      else {
        (*pcVar3)(plVar6,&local_38,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar5 = (*pcVar3)(), cVar5 == '\0')) {
          puVar8 = (undefined8 *)(lVar7 + *(int *)((longlong)plVar6 + 0x44));
          if (puVar8 != &local_40) {
            if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar6 + 0x100))(plVar6,&local_40,puVar8,(int)plVar6[6]);
            }
            else {
              memcpy(&local_40,puVar8,
                     (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar6 + 0xa0))(plVar6,lVar7,&local_40);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar6[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,&local_40,lVar7,1);
      }
      else {
        (*pcVar3)(plVar6,&local_40,lVar7);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
      else {
LAB_1438aeb53:
        if (lVar7 == 0) goto LAB_1438aebcc;
      }
      bVar9 = *(char *)(lVar7 + 0x188) == '\0';
      goto LAB_1438aebce;
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x140);
    lVar7 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    bVar9 = false;
    do {
      if (*plVar6 == local_38) {
        if (plVar6 == (longlong *)0x0) goto LAB_1438aebcc;
        lVar7 = plVar6[7];
        goto LAB_1438aeb53;
      }
      plVar6 = plVar6 + 9;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
    goto LAB_1438aebce;
  }
LAB_1438aebcc:
  bVar9 = false;
LAB_1438aebce:
  *param_3 = bVar9;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438aed58 FUN_1438aed58 body=2045 status=ok
// SIG undefined FUN_1438aed58(void)

void FUN_1438aed58(longlong param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *_Src;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(plVar10), cVar6 == '\0')) {
          puVar12 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (puVar12 != &local_48) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_48,puVar12,(int)plVar10[6]);
            }
            else {
              memcpy(&local_48,puVar12,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_48);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar10[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_48,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_48,lVar8);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar11 = (undefined8 *)*puVar12;
        puVar12 = puVar11 + 2;
      } while ((longlong *)*puVar11 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar11[1];
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
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  puVar12 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar12 = *(undefined8 **)(param_2 + 0x38);
  }
  local_50 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(plVar10), cVar6 == '\0')) {
          _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (_Src != &local_50) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_50,_Src,(int)plVar10[6]);
            }
            else {
              memcpy(&local_50,_Src,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_50);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar10[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_50,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_50,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  local_58 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(), cVar6 == '\0')) {
          puVar11 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (puVar11 != &local_58) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_58,puVar11,(int)plVar10[6]);
            }
            else {
              memcpy(&local_58,puVar11,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_58);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar10[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_58,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_58,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  uVar7 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_2 + 0x20) = uVar7;
  if (local_50 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      bVar5 = lVar8 != 0 & DAT_14c950c29;
      uVar7 = (ulonglong)bVar5;
      if (bVar5 == 1) {
        FUN_1456cec3c(lVar8);
      }
      else {
LAB_1438af2e9:
        if (lVar8 == 0) goto LAB_1438af2f2;
      }
      bVar5 = FUN_147f86d28(lVar8,puVar12);
      bVar9 = 1;
      goto LAB_1438af2f4;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x148);
    uVar7 = 0;
    if (lVar8 != 0) {
      plVar10 = *(longlong **)(param_1 + 0x140);
      uVar7 = lVar8 * 8;
      bVar5 = (byte)uVar7;
      lVar8 = lVar8 * 0x48;
      bVar9 = 0;
      do {
        if (*plVar10 == local_50) {
          if (plVar10 == (longlong *)0x0) goto LAB_1438af2f2;
          lVar8 = plVar10[7];
          goto LAB_1438af2e9;
        }
        plVar10 = plVar10 + 9;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
      goto LAB_1438af2f4;
    }
  }
LAB_1438af2f2:
  bVar5 = (byte)uVar7;
  bVar9 = 0;
LAB_1438af2f4:
  *param_3 = bVar9 & bVar5;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438af556 FUN_1438af556 body=146 status=ok
// SIG undefined FUN_1438af556(void)

undefined8 FUN_1438af556(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_3 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      else {
LAB_1438af59b:
        if (lVar5 == 0) goto LAB_1438af5a0;
      }
      uVar2 = FUN_147f86d28(lVar5,param_2);
      param_1 = uVar2 & 0xffffffff;
      uVar3 = (undefined7)(uVar2 >> 8);
      bVar1 = 1;
      goto LAB_1438af5a2;
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x140);
    lVar5 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    bVar1 = 0;
    uVar3 = 0;
    do {
      if (*plVar4 == param_3) {
        if (plVar4 == (longlong *)0x0) goto LAB_1438af5a0;
        lVar5 = plVar4[7];
        goto LAB_1438af59b;
      }
      plVar4 = plVar4 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
    goto LAB_1438af5a2;
  }
LAB_1438af5a0:
  bVar1 = 0;
  uVar3 = 0;
LAB_1438af5a2:
  return CONCAT71(uVar3,bVar1 & (byte)param_1);
}



// FUNCTION 1438af5e8 FUN_1438af5e8 body=3 status=ok
// SIG undefined FUN_1438af5e8(void)

undefined8 FUN_1438af5e8(void)

{
  return 0;
}



// FUNCTION 1438af5ec FUN_1438af5ec body=1524 status=ok
// SIG undefined FUN_1438af5ec(void)

void FUN_1438af5ec(longlong param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *_Src;
  undefined8 *puVar11;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(plVar10), cVar6 == '\0')) {
          _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (_Src != &local_38) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_38,_Src,(int)plVar10[6]);
            }
            else {
              memcpy(&local_38,_Src,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_38);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar10[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_38,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
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
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_58 = FUN_1446ddbd2();
    local_50 = FUN_1468d96f0;
    local_60 = 0;
    local_68 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar10[3];
    if ((*(byte *)((longlong)plVar10 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar10 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar10 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar10 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar6 = (*pcVar3)(), cVar6 == '\0')) {
          puVar11 = (undefined8 *)(lVar8 + *(int *)((longlong)plVar10 + 0x44));
          if (puVar11 != &local_40) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar10 + 0x100))(plVar10,&local_40,puVar11,(int)plVar10[6]);
            }
            else {
              memcpy(&local_40,puVar11,
                     (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar10 + 0xa0))(plVar10,lVar8,&local_40);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar10[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar10,&local_40,lVar8,1);
      }
      else {
        (*pcVar3)(plVar10,&local_40,lVar8);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar11;
        puVar11 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar10);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  uVar7 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_2 + 0x20) = uVar7;
  if (local_38 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      bVar5 = lVar8 != 0 & DAT_14c950c29;
      uVar7 = (ulonglong)bVar5;
      if (bVar5 == 1) {
        FUN_1456cec3c(lVar8);
      }
      else {
LAB_1438af9d9:
        if (lVar8 == 0) goto LAB_1438afa54;
      }
      bVar5 = FUN_1438b3fe2(lVar8,0);
      bVar9 = 1;
      goto LAB_1438afa56;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x148);
    uVar7 = 0;
    if (lVar8 != 0) {
      plVar10 = *(longlong **)(param_1 + 0x140);
      uVar7 = lVar8 * 8;
      bVar5 = (byte)uVar7;
      lVar8 = lVar8 * 0x48;
      bVar9 = 0;
      do {
        if (*plVar10 == local_38) {
          if (plVar10 == (longlong *)0x0) goto LAB_1438afa54;
          lVar8 = plVar10[7];
          goto LAB_1438af9d9;
        }
        plVar10 = plVar10 + 9;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
      goto LAB_1438afa56;
    }
  }
LAB_1438afa54:
  bVar5 = (byte)uVar7;
  bVar9 = 0;
LAB_1438afa56:
  *param_3 = bVar9 & bVar5;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438afbe2 FUN_1438afbe2 body=142 status=ok
// SIG undefined FUN_1438afbe2(void)

undefined8 FUN_1438afbe2(ulonglong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      else {
LAB_1438afc23:
        if (lVar5 == 0) goto LAB_1438afc66;
      }
      uVar2 = FUN_1438b3fe2(lVar5,0);
      param_1 = uVar2 & 0xffffffff;
      uVar3 = (undefined7)(uVar2 >> 8);
      bVar1 = 1;
      goto LAB_1438afc68;
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x140);
    lVar5 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    bVar1 = 0;
    uVar3 = 0;
    do {
      if (*plVar4 == param_2) {
        if (plVar4 == (longlong *)0x0) goto LAB_1438afc66;
        lVar5 = plVar4[7];
        goto LAB_1438afc23;
      }
      plVar4 = plVar4 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
    goto LAB_1438afc68;
  }
LAB_1438afc66:
  bVar1 = 0;
  uVar3 = 0;
LAB_1438afc68:
  return CONCAT71(uVar3,bVar1 & (byte)param_1);
}



// FUNCTION 1438afc70 FUN_1438afc70 body=2851 status=ok
// SIG undefined FUN_1438afc70(void)

void FUN_1438afc70(longlong param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  undefined4 *_Src;
  int *_Src_00;
  undefined8 *puVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar11 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar11 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(plVar11), cVar7 == '\0')) {
          puVar12 = (undefined8 *)(lVar9 + *(int *)((longlong)plVar11 + 0x44));
          if (puVar12 != &local_40) {
            if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar11 + 0x100))(plVar11,&local_40,puVar12,(int)plVar11[6]);
            }
            else {
              memcpy(&local_40,puVar12,
                     (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar11 + 0xa0))(plVar11,lVar9,&local_40);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar11[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar11,&local_40,lVar9,1);
      }
      else {
        (*pcVar3)(plVar11,&local_40,lVar9);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar11);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  uStack_48 = 0;
  uStack_44 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar11 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar11 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(plVar11), cVar7 == '\0')) {
          _Src = (undefined4 *)(lVar9 + *(int *)((longlong)plVar11 + 0x44));
          if (_Src != &uStack_48) {
            if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar11 + 0x100))(plVar11,&uStack_48,_Src,(int)plVar11[6]);
            }
            else {
              memcpy(&uStack_48,_Src,
                     (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar11 + 0xa0))(plVar11,lVar9,&uStack_48);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar11[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar11,&uStack_48,lVar9,1);
      }
      else {
        (*pcVar3)(plVar11,&uStack_48,lVar9);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar11);
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
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_14067a048;
    local_70 = 0;
    local_78 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar11 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar11 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(plVar11), cVar7 == '\0')) {
          _Src_00 = (int *)(lVar9 + *(int *)((longlong)plVar11 + 0x44));
          if (_Src_00 != &local_4c) {
            if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar11 + 0x100))(plVar11,&local_4c,_Src_00,(int)plVar11[6]);
            }
            else {
              memcpy(&local_4c,_Src_00,
                     (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar11 + 0xa0))(plVar11,lVar9,&local_4c);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar11[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar11,&local_4c,lVar9,1);
      }
      else {
        (*pcVar3)(plVar11,&local_4c,lVar9);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar11);
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
  iVar5 = local_4c;
  local_58 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar11 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar11[3];
    if ((*(byte *)((longlong)plVar11 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar11 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar11 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar11 + 0x88);
        if ((pcVar3 == (code *)&LAB_1447713a0) || (cVar7 = (*pcVar3)(), cVar7 == '\0')) {
          puVar12 = (undefined8 *)(lVar9 + *(int *)((longlong)plVar11 + 0x44));
          if (puVar12 != &local_58) {
            if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar11 + 0x100))(plVar11,&local_58,puVar12,(int)plVar11[6]);
            }
            else {
              memcpy(&local_58,puVar12,
                     (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*plVar11 + 0xa0))(plVar11,lVar9,&local_58);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar11[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar11,&local_58,lVar9,1);
      }
      else {
        (*pcVar3)(plVar11,&local_58,lVar9);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar11);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  uVar2 = local_40;
  uVar8 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_2 + 0x20) = uVar8;
  if (CONCAT44(uStack_44,uStack_48) == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      bVar6 = lVar9 != 0 & DAT_14c950c29;
      uVar8 = (ulonglong)bVar6;
      if (bVar6 == 1) {
        FUN_1456cec3c(lVar9);
      }
      else {
LAB_1438b03d8:
        if (lVar9 == 0) goto LAB_1438b04a2;
      }
      bVar6 = FUN_1438b3d1c(lVar9,uVar2,iVar5 != 0);
      bVar10 = 1;
      goto LAB_1438b04a4;
    }
  }
  else {
    lVar9 = (longlong)*(int *)(param_1 + 0x148);
    uVar8 = 0;
    if (lVar9 != 0) {
      plVar11 = *(longlong **)(param_1 + 0x140);
      uVar8 = lVar9 * 8;
      bVar6 = (byte)uVar8;
      lVar9 = lVar9 * 0x48;
      bVar10 = 0;
      do {
        if (*plVar11 == CONCAT44(uStack_44,uStack_48)) {
          if (plVar11 == (longlong *)0x0) goto LAB_1438b04a2;
          lVar9 = plVar11[7];
          goto LAB_1438b03d8;
        }
        plVar11 = plVar11 + 9;
        lVar9 = lVar9 + -0x48;
      } while (lVar9 != 0);
      goto LAB_1438b04a4;
    }
  }
LAB_1438b04a2:
  bVar6 = (byte)uVar8;
  bVar10 = 0;
LAB_1438b04a4:
  *param_3 = bVar10 & bVar6;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1438b0794 FUN_1438b0794 body=156 status=ok
// SIG undefined FUN_1438b0794(void)

undefined8 FUN_1438b0794(ulonglong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_3 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      else {
LAB_1438b07dd:
        if (lVar5 == 0) goto LAB_1438b0824;
      }
      uVar2 = FUN_1438b3d1c(lVar5,param_2,param_4);
      param_1 = uVar2 & 0xffffffff;
      uVar3 = (undefined7)(uVar2 >> 8);
      bVar1 = 1;
      goto LAB_1438b0826;
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x140);
    lVar5 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    bVar1 = 0;
    uVar3 = 0;
    do {
      if (*plVar4 == param_3) {
        if (plVar4 == (longlong *)0x0) goto LAB_1438b0824;
        lVar5 = plVar4[7];
        goto LAB_1438b07dd;
      }
      plVar4 = plVar4 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
    goto LAB_1438b0826;
  }
LAB_1438b0824:
  bVar1 = 0;
  uVar3 = 0;
LAB_1438b0826:
  return CONCAT71(uVar3,bVar1 & (byte)param_1);
}


