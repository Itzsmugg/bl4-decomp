// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14402977c FUN_14402977c body=48 status=ok
// SIG undefined FUN_14402977c(void)

longlong FUN_14402977c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440297ac FUN_1440297ac body=48 status=ok
// SIG undefined FUN_1440297ac(void)

longlong FUN_1440297ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440297ec FUN_1440297ec body=48 status=ok
// SIG undefined FUN_1440297ec(void)

longlong FUN_1440297ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402981c FUN_14402981c body=48 status=ok
// SIG undefined FUN_14402981c(void)

longlong FUN_14402981c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144029854 FUN_144029854 body=48 status=ok
// SIG undefined FUN_144029854(void)

longlong FUN_144029854(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144029884 FUN_144029884 body=48 status=ok
// SIG undefined FUN_144029884(void)

longlong FUN_144029884(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440298bc FUN_1440298bc body=48 status=ok
// SIG undefined FUN_1440298bc(void)

longlong FUN_1440298bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440298fc FUN_1440298fc body=48 status=ok
// SIG undefined FUN_1440298fc(void)

longlong FUN_1440298fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x26f8;
  FUN_1458e3620(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440299d8 FUN_1440299d8 body=57 status=ok
// SIG undefined FUN_1440299d8(void)

void FUN_1440299d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4df0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4df0 = FUN_140002ddd(FUN_1465c0bd0,uVar1,L"InventoryAugmentReceivedDamageEventPayload")
    ;
  }
  return;
}



// FUNCTION 144029a20 FUN_144029a20 body=567 status=ok
// SIG undefined FUN_144029a20(void)

void FUN_144029a20(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  *param_1 = &PTR_FUN_14b694008;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3da0;
  if ((longlong)*(int *)(param_1 + 0xe) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0xe) + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar5 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  cVar2 = *(char *)(param_1 + 9);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[10] = 0;
    }
    else if ((cVar2 == '\x03') && (plVar3 = (longlong *)param_1[0xb], plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  lVar5 = DAT_14c9a3da0;
  if ((longlong)*(int *)(param_1 + 8) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 8) + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar5 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[4] = 0;
    }
    else if ((cVar2 == '\x03') && (plVar3 = (longlong *)param_1[5], plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  FUN_1418c5716(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144029c9e FUN_144029c9e body=82 status=ok
// SIG undefined FUN_144029c9e(void)

undefined8 * FUN_144029c9e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 144029d96 FUN_144029d96 body=57 status=ok
// SIG undefined FUN_144029d96(void)

void FUN_144029d96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4f78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4f78 = FUN_140002ddd(FUN_1465c12c7,uVar1,L"InventoryGadgetClassData");
  }
  return;
}



// FUNCTION 144029e28 FUN_144029e28 body=57 status=ok
// SIG undefined FUN_144029e28(void)

void FUN_144029e28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba50d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba50d8 = FUN_140002ddd(FUN_1465c16bc,uVar1,L"StructuredInteractableState");
  }
  return;
}



// FUNCTION 144029e70 FUN_144029e70 body=57 status=ok
// SIG undefined FUN_144029e70(void)

void FUN_144029e70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba51a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba51a8 = FUN_140002ddd(FUN_1465c19db,uVar1,L"JumpPadDef");
  }
  return;
}



// FUNCTION 144029ee0 FUN_144029ee0 body=57 status=ok
// SIG undefined FUN_144029ee0(void)

void FUN_144029ee0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba52c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba52c8 = FUN_140002ddd(FUN_1465c1c8b,uVar1,L"LevelTravelStationObjectDef");
  }
  return;
}



// FUNCTION 144029f19 FUN_144029f19 body=2575 status=ok
// SIG undefined FUN_144029f19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144029f19(void)

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
  _DAT_14cba4cd8 = (ulonglong)uVar2;
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b688040;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b688080);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b688610);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b688840);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b688e90;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b688ed0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b689040);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b689270);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b689380);
  FUN_14098d3d2(FUN_144028b34,L"/Script/OakGame",L"EInventoryAugmentEffectType",&DAT_14cba4e18);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6894c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b689590);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b689640);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b689710);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6897d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b689890);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b689e10,1,&PTR_FUN_14b689dc0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68a2a0,1,&PTR_FUN_14b68a250);
  local_60 = "Use";
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba4f50 = (ulonglong)uVar2;
  local_60 = "StopUse";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba4f58 = (ulonglong)uVar2;
  local_60 = "SecondaryUse";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba4f60 = (ulonglong)uVar2;
  local_60 = "StopSecondaryUse";
  local_58 = 0x10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba4f68 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cba4fa0,L"ServerInputDoubleTap",1);
  FUN_1446f470e(&DAT_14cba4fb0,L"ServerInputHeld",1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68ac40,1,&PTR_FUN_14b68ac10);
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68afa0,1,0);
  _DAT_14cba5018 = 0x47efffffe0000000;
  _DAT_14cba5020 = 0x47efffffe0000000;
  _DAT_14cba5028 = 0x47efffffe0000000;
  _DAT_14cba5030 = 0x47efffffe0000000;
  _DAT_14cba5038 = 0x47efffffe0000000;
  _DAT_14cba5040 = 0x47efffffe0000000;
  _DAT_14cba5048 = 0x47efffffe0000000;
  _DAT_14cba5050 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cba5058);
  if (cVar1 == '\0') {
    _DAT_14cba5058 = 0;
    uRam000000014cba5060 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cba506c = 0;
  FUN_14052b5e0(&DAT_14cba5068,"PlayerAwareness",0);
  _DAT_14cba5078 = "PlayerAwareness";
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68b420,1,0);
  FUN_1446f470e(&DAT_14cba50a0,L"OnCultureChanged",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68b8c0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68be60,1,&PTR_FUN_14b68be30);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68c1c0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68c580,1,0);
  FUN_1446f470e(&DAT_14cba5148,L"OnLaunched",1);
  FUN_1446f470e(&DAT_14cba5158,L"OnLaunchedVehicle",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b68e9b0,2,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b68ebc0);
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51b8 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51c0 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51c8 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51d0 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51d8 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51e0 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51e8 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51f0 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba51f8 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5200 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5208 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5210 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5218 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5220 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5228 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5230 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5238 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5240 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5248 = (ulonglong)uVar2;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b690350,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b690900,1,&PTR_FUN_14b6908b0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6909c0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b690d50,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b691200,1,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14402a92c FUN_14402a92c body=55 status=ok
// SIG undefined FUN_14402a92c(void)

void FUN_14402a92c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba53d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba53d0 = FUN_140002ddd(FUN_14402a963,uVar1,L"LootableAttachedLootInfo");
  }
  return;
}



// FUNCTION 14402a963 FUN_14402a963 body=47 status=ok
// SIG undefined FUN_14402a963(void)

longlong FUN_14402a963(void)

{
  if (DAT_14cba53c8 == 0) {
    FUN_14086a14e(&DAT_14cba53c8,&PTR_FUN_14b695c18);
  }
  return DAT_14cba53c8;
}



// FUNCTION 14402a992 FUN_14402a992 body=48 status=ok
// SIG undefined FUN_14402a992(void)

void FUN_14402a992(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14b69ca80;
  return;
}



// FUNCTION 14402a9c2 FUN_14402a9c2 body=47 status=ok
// SIG undefined FUN_14402a9c2(void)

longlong FUN_14402a9c2(void)

{
  if (DAT_14cba53f0 == 0) {
    FUN_14000fc22(&DAT_14cba53f0,&PTR_FUN_14b695ee8);
  }
  return DAT_14cba53f0;
}



// FUNCTION 14402a9f1 FUN_14402a9f1 body=107 status=ok
// SIG undefined FUN_14402a9f1(void)

void FUN_14402a9f1(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14402aa5e(&local_28);
  FUN_1447cd2ec(param_1,&local_28);
  FUN_14402b333(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14402aa5e FUN_14402aa5e body=93 status=ok
// SIG undefined FUN_14402aa5e(void)

undefined8 * FUN_14402aa5e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14402b333(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14402ba4c(param_1,iVar1);
      FUN_14402bb31(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14402aacc FUN_14402aacc body=55 status=ok
// SIG undefined FUN_14402aacc(void)

void FUN_14402aacc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba55c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba55c8 = FUN_14171c317(FUN_1465c30ea,uVar1,L"ELuckCategoryType");
  }
  return;
}



// FUNCTION 14402ab0a FUN_14402ab0a body=55 status=ok
// SIG undefined FUN_14402ab0a(void)

void FUN_14402ab0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5750 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5750 = FUN_140002ddd(FUN_14402ab41,uVar1,0x14b69b5f8);
  }
  return;
}



// FUNCTION 14402ab41 FUN_14402ab41 body=47 status=ok
// SIG undefined FUN_14402ab41(void)

longlong FUN_14402ab41(void)

{
  if (DAT_14cba5748 == 0) {
    FUN_14086a14e(&DAT_14cba5748,&PTR_FUN_14b69b718);
  }
  return DAT_14cba5748;
}



// FUNCTION 14402ab76 FUN_14402ab76 body=48 status=ok
// SIG undefined FUN_14402ab76(void)

void FUN_14402ab76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b69e8b0;
  return;
}



// FUNCTION 14402aba6 FUN_14402aba6 body=55 status=ok
// SIG undefined FUN_14402aba6(void)

void FUN_14402aba6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5780 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5780 = FUN_14171c317(FUN_1465c3566,uVar1,L"EPlatformActivityAction");
  }
  return;
}



// FUNCTION 14402abde FUN_14402abde body=48 status=ok
// SIG undefined FUN_14402abde(void)

longlong FUN_14402abde(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ac0e FUN_14402ac0e body=48 status=ok
// SIG undefined FUN_14402ac0e(void)

longlong FUN_14402ac0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ac4e FUN_14402ac4e body=48 status=ok
// SIG undefined FUN_14402ac4e(void)

longlong FUN_14402ac4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ac86 FUN_14402ac86 body=48 status=ok
// SIG undefined FUN_14402ac86(void)

longlong FUN_14402ac86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402acce FUN_14402acce body=48 status=ok
// SIG undefined FUN_14402acce(void)

longlong FUN_14402acce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ad06 FUN_14402ad06 body=48 status=ok
// SIG undefined FUN_14402ad06(void)

longlong FUN_14402ad06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ad4e FUN_14402ad4e body=48 status=ok
// SIG undefined FUN_14402ad4e(void)

longlong FUN_14402ad4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ad7e FUN_14402ad7e body=48 status=ok
// SIG undefined FUN_14402ad7e(void)

longlong FUN_14402ad7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402adbe FUN_14402adbe body=48 status=ok
// SIG undefined FUN_14402adbe(void)

longlong FUN_14402adbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140baa2f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ae18 FUN_14402ae18 body=48 status=ok
// SIG undefined FUN_14402ae18(void)

longlong FUN_14402ae18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ae48 FUN_14402ae48 body=48 status=ok
// SIG undefined FUN_14402ae48(void)

longlong FUN_14402ae48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ae78 FUN_14402ae78 body=48 status=ok
// SIG undefined FUN_14402ae78(void)

longlong FUN_14402ae78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402aea8 FUN_14402aea8 body=48 status=ok
// SIG undefined FUN_14402aea8(void)

longlong FUN_14402aea8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402aed8 FUN_14402aed8 body=48 status=ok
// SIG undefined FUN_14402aed8(void)

longlong FUN_14402aed8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402af08 FUN_14402af08 body=48 status=ok
// SIG undefined FUN_14402af08(void)

longlong FUN_14402af08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402af38 FUN_14402af38 body=48 status=ok
// SIG undefined FUN_14402af38(void)

longlong FUN_14402af38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402af68 FUN_14402af68 body=48 status=ok
// SIG undefined FUN_14402af68(void)

longlong FUN_14402af68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402af98 FUN_14402af98 body=48 status=ok
// SIG undefined FUN_14402af98(void)

longlong FUN_14402af98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_145bcc094(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402b046 FUN_14402b046 body=29 status=ok
// SIG undefined FUN_14402b046(void)

undefined8 FUN_14402b046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402b0b6 FUN_14402b0b6 body=398 status=ok
// SIG undefined FUN_14402b0b6(void)

undefined8 FUN_14402b0b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      if (param_2 != param_3) {
        iVar1 = *(int *)(param_3 + 8 + lVar4);
        _Src = *(void **)(param_3 + lVar4);
        *(int *)(param_2 + 8 + lVar4) = iVar1;
        if (iVar1 == 0 && *(int *)(param_2 + 0xc + lVar4) == 0) {
          *(undefined4 *)(param_2 + 0xc + lVar4) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(param_2 + lVar4),iVar1);
          if (iVar1 != 0) {
            memcpy(*(void **)(param_2 + lVar4),_Src,(longlong)iVar1 * 2);
          }
        }
      }
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar4);
      if (*(longlong *)(param_2 + 0x10 + lVar4) != lVar2) {
        *(undefined8 *)(param_2 + 0x20 + lVar4) = 0;
      }
      *(longlong *)(param_2 + 0x10 + lVar4) = lVar2;
      if (*(longlong *)(param_2 + 0x18 + lVar4) != *(longlong *)(param_3 + 0x18 + lVar4)) {
        *(undefined8 *)(param_2 + 0x20 + lVar4) = 0;
      }
      uVar3 = FUN_14477b664();
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_2 + lVar4 + 0x18) = uVar3;
      *(undefined8 *)(param_2 + lVar4 + 0x20) = *(undefined8 *)(param_3 + lVar4 + 0x20);
      FUN_1486c1fae();
      FUN_1486c1fae(param_2 + lVar4 + 0x40,param_3 + lVar4 + 0x40);
      FUN_14875f55c(param_2 + lVar4 + 0x58,param_3 + lVar4 + 0x58);
      lVar2 = *(longlong *)(param_3 + lVar4 + 0x70);
      if (*(longlong *)(param_2 + lVar4 + 0x70) != lVar2) {
        *(undefined8 *)(param_2 + 0x80 + lVar4) = 0;
      }
      *(longlong *)(param_2 + 0x70 + lVar4) = lVar2;
      if (*(longlong *)(param_2 + 0x78 + lVar4) != *(longlong *)(param_3 + 0x78 + lVar4)) {
        *(undefined8 *)(param_2 + 0x80 + lVar4) = 0;
      }
      uVar3 = FUN_14477b664();
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_2 + 0x78 + lVar4) = uVar3;
      *(undefined8 *)(param_2 + 0x80 + lVar4) = *(undefined8 *)(param_3 + 0x80 + lVar4);
      *(undefined8 *)(param_2 + 0x88 + lVar4) = *(undefined8 *)(param_3 + 0x88 + lVar4);
      lVar4 = lVar4 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14402b26c FUN_14402b26c body=59 status=ok
// SIG undefined FUN_14402b26c(void)

undefined8 FUN_14402b26c(longlong *param_1)

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



// FUNCTION 14402b2b8 FUN_14402b2b8 body=43 status=ok
// SIG undefined FUN_14402b2b8(void)

void FUN_14402b2b8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0x12] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14402b333 FUN_14402b333 body=46 status=ok
// SIG undefined FUN_14402b333(void)

void FUN_14402b333(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x12;
  }
  return;
}



// FUNCTION 14402b362 FUN_14402b362 body=57 status=ok
// SIG undefined FUN_14402b362(void)

void FUN_14402b362(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5488 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5488 = FUN_140002ddd(FUN_1465c2aa8,uVar1,L"LootableObjectBodySettings");
  }
  return;
}



// FUNCTION 14402b424 FUN_14402b424 body=57 status=ok
// SIG undefined FUN_14402b424(void)

void FUN_14402b424(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba54d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba54d0 = FUN_140002ddd(FUN_1465c2bce,uVar1,L"LootableObjectDef");
  }
  return;
}



// FUNCTION 14402b5b2 FUN_14402b5b2 body=29 status=ok
// SIG undefined FUN_14402b5b2(void)

undefined8 FUN_14402b5b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402b652 FUN_14402b652 body=111 status=ok
// SIG undefined FUN_14402b652(void)

undefined8 FUN_14402b652(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined1 *)(param_2 + 0x24 + lVar1) = *(undefined1 *)(param_3 + 0x24 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14402b6c2 FUN_14402b6c2 body=39 status=ok
// SIG undefined FUN_14402b6c2(void)

undefined8
FUN_14402b6c2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14402b706 FUN_14402b706 body=59 status=ok
// SIG undefined FUN_14402b706(void)

undefined8 FUN_14402b706(longlong *param_1)

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



// FUNCTION 14402b74c FUN_14402b74c body=62 status=ok
// SIG undefined FUN_14402b74c(void)

void FUN_14402b74c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b345010;
    FUN_1400fd473(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14402b7e2 FUN_14402b7e2 body=71 status=ok
// SIG undefined FUN_14402b7e2(void)

undefined8 * FUN_14402b7e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402b82a FUN_14402b82a body=55 status=ok
// SIG undefined FUN_14402b82a(void)

void FUN_14402b82a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5750 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5750 = FUN_140002ddd(FUN_14402ab41,uVar1,0x14b69b5f8);
  }
  return;
}



// FUNCTION 14402b8ce FUN_14402b8ce body=57 status=ok
// SIG undefined FUN_14402b8ce(void)

void FUN_14402b8ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5798 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5798 = FUN_140002ddd(FUN_1465c35cd,uVar1,L"MissionActionType_RunPlatformActivity");
  }
  return;
}



// FUNCTION 14402b942 FUN_14402b942 body=57 status=ok
// SIG undefined FUN_14402b942(void)

void FUN_14402b942(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba57b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba57b0 = FUN_140002ddd(FUN_1465c362c,uVar1,L"MissionActionType_UnlockEchoLog");
  }
  return;
}



// FUNCTION 14402b9b0 FUN_14402b9b0 body=57 status=ok
// SIG undefined FUN_14402b9b0(void)

void FUN_14402b9b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba57c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba57c8 = FUN_140002ddd(FUN_1465c368c,uVar1,L"MissionActionType_WaitForEchoLogIO");
  }
  return;
}



// FUNCTION 14402ba4c FUN_14402ba4c body=229 status=ok
// SIG undefined FUN_14402ba4c(void)

void FUN_14402ba4c(longlong param_1,int param_2,int param_3)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x90);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x90,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14402bb31 FUN_14402bb31 body=335 status=ok
// SIG undefined FUN_14402bb31(void)

void FUN_14402bb31(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(param_1 + lVar5) = 0;
      iVar3 = *(int *)(param_2 + 8 + lVar5);
      _Src = *(void **)(param_2 + lVar5);
      *(int *)(param_1 + 8 + lVar5) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xc + lVar5) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + lVar5),iVar3,0);
        memcpy(*(void **)(param_1 + lVar5),_Src,(longlong)iVar3 * 2);
      }
      lVar1 = param_1 + lVar5;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      lVar2 = param_2 + 0x28 + lVar5;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar2 + -0x18);
      uVar4 = FUN_14477b664(*(undefined8 *)(lVar2 + -0x10));
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(lVar1 + 0x18) = uVar4;
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + -8);
      FUN_1486b967a(lVar1 + 0x28,lVar2);
      lVar1 = param_1 + lVar5;
      lVar2 = param_2 + lVar5;
      FUN_1486b967a(lVar1 + 0x40,lVar2 + 0x40);
      *(undefined8 *)(lVar1 + 0x58) = 0;
      *(undefined8 *)(lVar1 + 0x60) = 0;
      *(undefined8 *)(lVar1 + 0x68) = 0;
      *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar2 + 0x58);
      uVar4 = FUN_14477b664(*(undefined8 *)(lVar2 + 0x60));
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(lVar1 + 0x60) = uVar4;
      *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar2 + 0x68);
      FUN_1486b96c2(param_1 + lVar5 + 0x70,param_2 + lVar5 + 0x70);
      *(undefined8 *)(param_1 + lVar5 + 0x88) = *(undefined8 *)(param_2 + lVar5 + 0x88);
      lVar5 = lVar5 + 0x90;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14402bc80 FUN_14402bc80 body=2074 status=ok
// SIG undefined FUN_14402bc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14402bc80(void)

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
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b695830);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba5340 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cba5348);
  if (cVar1 == '\0') {
    _DAT_14cba5348 = 0;
    uRam000000014cba5350 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cba5358 = 0x47efffffe0000000;
  _DAT_14cba5360 = 0x47efffffe0000000;
  _DAT_14cba5368 = 0x47efffffe0000000;
  _DAT_14cba5370 = 0x47efffffe0000000;
  _DAT_14cba5378 = 0x47efffffe0000000;
  _DAT_14cba5380 = 0x47efffffe0000000;
  _DAT_14cba5388 = 0x47efffffe0000000;
  _DAT_14cba5390 = 0x47efffffe0000000;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b696f80,2,&PTR_FUN_14b696ee0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b697060);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6975c0,1,&PTR_FUN_14b697570);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6986b0);
  _DAT_14cba54e4 = 0;
  FUN_14052b5e0(&DAT_14cba54e0,"PlayerAwareness",0);
  _DAT_14cba54f0 = "PlayerAwareness";
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6992d0,1,&PTR_FUN_14b699200);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b699540);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b6997f0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b699810);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b699910);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b699af0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b69ada0,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b69b340,1,&PTR_FUN_14b69b2f0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69b3f0);
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba5698 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56a0 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56a8 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56b0 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56b8 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56c0 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56c8 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56d0 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56d8 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56e0 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56e8 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56f0 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba56f8 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba5700 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba5708 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba5710 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba5718 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cba5720 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70);
  _DAT_14cba5728 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,0x14b69b5d0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69b750);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69b860);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b69bab0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69bad0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69bbe0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69bd00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69bde0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69bee0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69c010);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69c0e0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69c190);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b69c330);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14402c49c FUN_14402c49c body=55 status=ok
// SIG undefined FUN_14402c49c(void)

void FUN_14402c49c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5990 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5990 = FUN_14171c317(FUN_1465c40f5,uVar1,L"EMissionConditionChallengeCheckStatus");
  }
  return;
}



// FUNCTION 14402c4d4 FUN_14402c4d4 body=55 status=ok
// SIG undefined FUN_14402c4d4(void)

void FUN_14402c4d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba59d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba59d8 =
         FUN_140002ddd(FUN_14402c50b,uVar1,L"MissionDependencyConditionState_PlayerLevel");
  }
  return;
}



// FUNCTION 14402c50b FUN_14402c50b body=47 status=ok
// SIG undefined FUN_14402c50b(void)

longlong FUN_14402c50b(void)

{
  if (DAT_14cba59d0 == 0) {
    FUN_14086a14e(&DAT_14cba59d0,&PTR_FUN_14b6a14a8);
  }
  return DAT_14cba59d0;
}



// FUNCTION 14402c53a FUN_14402c53a body=48 status=ok
// SIG undefined FUN_14402c53a(void)

void FUN_14402c53a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b6a6f50;
  return;
}



// FUNCTION 14402c56a FUN_14402c56a body=55 status=ok
// SIG undefined FUN_14402c56a(void)

void FUN_14402c56a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba59f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba59f0 = FUN_140002ddd(FUN_14402c5a1,uVar1,L"MissionDependencyCondition_PlayerLevel");
  }
  return;
}



// FUNCTION 14402c5a1 FUN_14402c5a1 body=47 status=ok
// SIG undefined FUN_14402c5a1(void)

longlong FUN_14402c5a1(void)

{
  if (DAT_14cba59e8 == 0) {
    FUN_14086a14e(&DAT_14cba59e8,&PTR_FUN_14b6a15b0);
  }
  return DAT_14cba59e8;
}



// FUNCTION 14402c5d0 FUN_14402c5d0 body=48 status=ok
// SIG undefined FUN_14402c5d0(void)

void FUN_14402c5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b6a70b0;
  return;
}



// FUNCTION 14402c600 FUN_14402c600 body=55 status=ok
// SIG undefined FUN_14402c600(void)

void FUN_14402c600(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5be0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5be0 =
         FUN_14171c317(FUN_1465c4d44,uVar1,L"EMissionTaskTypeDef_TriggerVolume_Condition");
  }
  return;
}



// FUNCTION 14402c67c FUN_14402c67c body=48 status=ok
// SIG undefined FUN_14402c67c(void)

longlong FUN_14402c67c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c6ac FUN_14402c6ac body=48 status=ok
// SIG undefined FUN_14402c6ac(void)

longlong FUN_14402c6ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c6dc FUN_14402c6dc body=48 status=ok
// SIG undefined FUN_14402c6dc(void)

longlong FUN_14402c6dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c70c FUN_14402c70c body=48 status=ok
// SIG undefined FUN_14402c70c(void)

longlong FUN_14402c70c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c73c FUN_14402c73c body=48 status=ok
// SIG undefined FUN_14402c73c(void)

longlong FUN_14402c73c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c76c FUN_14402c76c body=48 status=ok
// SIG undefined FUN_14402c76c(void)

longlong FUN_14402c76c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c79c FUN_14402c79c body=48 status=ok
// SIG undefined FUN_14402c79c(void)

longlong FUN_14402c79c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c7cc FUN_14402c7cc body=48 status=ok
// SIG undefined FUN_14402c7cc(void)

longlong FUN_14402c7cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c7fc FUN_14402c7fc body=48 status=ok
// SIG undefined FUN_14402c7fc(void)

longlong FUN_14402c7fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c82c FUN_14402c82c body=48 status=ok
// SIG undefined FUN_14402c82c(void)

longlong FUN_14402c82c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ead17e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c864 FUN_14402c864 body=48 status=ok
// SIG undefined FUN_14402c864(void)

longlong FUN_14402c864(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ead17e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c8cc FUN_14402c8cc body=48 status=ok
// SIG undefined FUN_14402c8cc(void)

longlong FUN_14402c8cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_140ead17e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c8fc FUN_14402c8fc body=48 status=ok
// SIG undefined FUN_14402c8fc(void)

longlong FUN_14402c8fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_140ead17e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c934 FUN_14402c934 body=48 status=ok
// SIG undefined FUN_14402c934(void)

longlong FUN_14402c934(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1870;
  FUN_140ead17e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c972 FUN_14402c972 body=48 status=ok
// SIG undefined FUN_14402c972(void)

longlong FUN_14402c972(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1878;
  FUN_140ead17e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c9b2 FUN_14402c9b2 body=48 status=ok
// SIG undefined FUN_14402c9b2(void)

longlong FUN_14402c9b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1880;
  FUN_140ead17e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402c9ea FUN_14402c9ea body=48 status=ok
// SIG undefined FUN_14402c9ea(void)

longlong FUN_14402c9ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ca1a FUN_14402ca1a body=48 status=ok
// SIG undefined FUN_14402ca1a(void)

longlong FUN_14402ca1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ca4a FUN_14402ca4a body=48 status=ok
// SIG undefined FUN_14402ca4a(void)

longlong FUN_14402ca4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ca7a FUN_14402ca7a body=48 status=ok
// SIG undefined FUN_14402ca7a(void)

longlong FUN_14402ca7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402caaa FUN_14402caaa body=48 status=ok
// SIG undefined FUN_14402caaa(void)

longlong FUN_14402caaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cada FUN_14402cada body=48 status=ok
// SIG undefined FUN_14402cada(void)

longlong FUN_14402cada(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cb0a FUN_14402cb0a body=48 status=ok
// SIG undefined FUN_14402cb0a(void)

longlong FUN_14402cb0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cb3a FUN_14402cb3a body=48 status=ok
// SIG undefined FUN_14402cb3a(void)

longlong FUN_14402cb3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cb72 FUN_14402cb72 body=48 status=ok
// SIG undefined FUN_14402cb72(void)

longlong FUN_14402cb72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_1457a90ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cbba FUN_14402cbba body=48 status=ok
// SIG undefined FUN_14402cbba(void)

longlong FUN_14402cbba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cbea FUN_14402cbea body=48 status=ok
// SIG undefined FUN_14402cbea(void)

longlong FUN_14402cbea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cc1a FUN_14402cc1a body=48 status=ok
// SIG undefined FUN_14402cc1a(void)

longlong FUN_14402cc1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cc5a FUN_14402cc5a body=48 status=ok
// SIG undefined FUN_14402cc5a(void)

longlong FUN_14402cc5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x878;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cca2 FUN_14402cca2 body=48 status=ok
// SIG undefined FUN_14402cca2(void)

longlong FUN_14402cca2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1100;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ccd2 FUN_14402ccd2 body=48 status=ok
// SIG undefined FUN_14402ccd2(void)

longlong FUN_14402ccd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1108;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cd12 FUN_14402cd12 body=48 status=ok
// SIG undefined FUN_14402cd12(void)

longlong FUN_14402cd12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1118;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cd4a FUN_14402cd4a body=48 status=ok
// SIG undefined FUN_14402cd4a(void)

longlong FUN_14402cd4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1120;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cd82 FUN_14402cd82 body=48 status=ok
// SIG undefined FUN_14402cd82(void)

longlong FUN_14402cd82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1128;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cdba FUN_14402cdba body=48 status=ok
// SIG undefined FUN_14402cdba(void)

longlong FUN_14402cdba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1130;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cdf2 FUN_14402cdf2 body=48 status=ok
// SIG undefined FUN_14402cdf2(void)

longlong FUN_14402cdf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1138;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ce2a FUN_14402ce2a body=48 status=ok
// SIG undefined FUN_14402ce2a(void)

longlong FUN_14402ce2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1140;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ce62 FUN_14402ce62 body=48 status=ok
// SIG undefined FUN_14402ce62(void)

longlong FUN_14402ce62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1148;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ce9a FUN_14402ce9a body=48 status=ok
// SIG undefined FUN_14402ce9a(void)

longlong FUN_14402ce9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1150;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ced2 FUN_14402ced2 body=48 status=ok
// SIG undefined FUN_14402ced2(void)

longlong FUN_14402ced2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1158;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cf0a FUN_14402cf0a body=48 status=ok
// SIG undefined FUN_14402cf0a(void)

longlong FUN_14402cf0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1160;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cf42 FUN_14402cf42 body=48 status=ok
// SIG undefined FUN_14402cf42(void)

longlong FUN_14402cf42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1168;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cf7a FUN_14402cf7a body=48 status=ok
// SIG undefined FUN_14402cf7a(void)

longlong FUN_14402cf7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1170;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cfb2 FUN_14402cfb2 body=48 status=ok
// SIG undefined FUN_14402cfb2(void)

longlong FUN_14402cfb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1178;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402cfea FUN_14402cfea body=48 status=ok
// SIG undefined FUN_14402cfea(void)

longlong FUN_14402cfea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1180;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d022 FUN_14402d022 body=48 status=ok
// SIG undefined FUN_14402d022(void)

longlong FUN_14402d022(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1188;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d05a FUN_14402d05a body=48 status=ok
// SIG undefined FUN_14402d05a(void)

longlong FUN_14402d05a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1190;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d092 FUN_14402d092 body=48 status=ok
// SIG undefined FUN_14402d092(void)

longlong FUN_14402d092(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1198;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d0ca FUN_14402d0ca body=48 status=ok
// SIG undefined FUN_14402d0ca(void)

longlong FUN_14402d0ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11b0;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d102 FUN_14402d102 body=48 status=ok
// SIG undefined FUN_14402d102(void)

longlong FUN_14402d102(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a20;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d13a FUN_14402d13a body=48 status=ok
// SIG undefined FUN_14402d13a(void)

longlong FUN_14402d13a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a28;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d172 FUN_14402d172 body=48 status=ok
// SIG undefined FUN_14402d172(void)

longlong FUN_14402d172(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a30;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d1aa FUN_14402d1aa body=48 status=ok
// SIG undefined FUN_14402d1aa(void)

longlong FUN_14402d1aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a38;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d1e2 FUN_14402d1e2 body=48 status=ok
// SIG undefined FUN_14402d1e2(void)

longlong FUN_14402d1e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a40;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d21a FUN_14402d21a body=48 status=ok
// SIG undefined FUN_14402d21a(void)

longlong FUN_14402d21a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a48;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d252 FUN_14402d252 body=48 status=ok
// SIG undefined FUN_14402d252(void)

longlong FUN_14402d252(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ac8;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d282 FUN_14402d282 body=48 status=ok
// SIG undefined FUN_14402d282(void)

longlong FUN_14402d282(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad0;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d2d2 FUN_14402d2d2 body=48 status=ok
// SIG undefined FUN_14402d2d2(void)

longlong FUN_14402d2d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b68;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d302 FUN_14402d302 body=48 status=ok
// SIG undefined FUN_14402d302(void)

longlong FUN_14402d302(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b70;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d332 FUN_14402d332 body=48 status=ok
// SIG undefined FUN_14402d332(void)

longlong FUN_14402d332(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9cd0;
  FUN_14623b172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d3b0 FUN_14402d3b0 body=57 status=ok
// SIG undefined FUN_14402d3b0(void)

void FUN_14402d3b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba59c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba59c0 = FUN_140002ddd(FUN_1465c41ba,uVar1,L"MissionDependencyCondition_Challenge");
  }
  return;
}



// FUNCTION 14402d3ea FUN_14402d3ea body=29 status=ok
// SIG undefined FUN_14402d3ea(void)

undefined8 FUN_14402d3ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d4a6 FUN_14402d4a6 body=68 status=ok
// SIG undefined FUN_14402d4a6(void)

undefined8 FUN_14402d4a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877eb30(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 14402d512 FUN_14402d512 body=59 status=ok
// SIG undefined FUN_14402d512(void)

undefined8 FUN_14402d512(longlong *param_1)

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



// FUNCTION 14402d558 FUN_14402d558 body=125 status=ok
// SIG undefined FUN_14402d558(void)

void FUN_14402d558(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_2 = &PTR_FUN_14b351f30;
    plVar3 = (longlong *)param_2[9];
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
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)param_2[2];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14402d624 FUN_14402d624 body=134 status=ok
// SIG undefined FUN_14402d624(void)

undefined8 * FUN_14402d624(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b351f30;
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d6aa FUN_14402d6aa body=55 status=ok
// SIG undefined FUN_14402d6aa(void)

void FUN_14402d6aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba59d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba59d8 =
         FUN_140002ddd(FUN_14402c50b,uVar1,L"MissionDependencyConditionState_PlayerLevel");
  }
  return;
}



// FUNCTION 14402d6e2 FUN_14402d6e2 body=29 status=ok
// SIG undefined FUN_14402d6e2(void)

undefined8 FUN_14402d6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d7aa FUN_14402d7aa body=62 status=ok
// SIG undefined FUN_14402d7aa(void)

undefined1 FUN_14402d7aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_144983130(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14402d810 FUN_14402d810 body=59 status=ok
// SIG undefined FUN_14402d810(void)

undefined8 FUN_14402d810(longlong *param_1)

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



// FUNCTION 14402d856 FUN_14402d856 body=105 status=ok
// SIG undefined FUN_14402d856(void)

void FUN_14402d856(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b6a7210;
    plVar1 = param_2 + 2;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 6) * 0x120)
                       );
    if (pcVar2 != (code *)0x0) {
      plVar3 = plVar1;
      if (0x18 < *(ushort *)(param_2 + 5)) {
        plVar3 = (longlong *)*plVar1;
      }
      (*pcVar2)(plVar3);
    }
    if (0x18 < *(ushort *)(param_2 + 5)) {
      FUN_1400020a8(*plVar1);
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14402d90e FUN_14402d90e body=114 status=ok
// SIG undefined FUN_14402d90e(void)

undefined8 * FUN_14402d90e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6a7210;
  plVar1 = param_1 + 2;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 6) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 5)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 5)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402d980 FUN_14402d980 body=55 status=ok
// SIG undefined FUN_14402d980(void)

void FUN_14402d980(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba59f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba59f0 = FUN_140002ddd(FUN_14402c5a1,uVar1,L"MissionDependencyCondition_PlayerLevel");
  }
  return;
}



// FUNCTION 14402d9fa FUN_14402d9fa body=57 status=ok
// SIG undefined FUN_14402d9fa(void)

void FUN_14402d9fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5a08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5a08 = FUN_140002ddd(FUN_1465c421a,uVar1,L"MissionGiverType_PoA");
  }
  return;
}



// FUNCTION 14402da9e FUN_14402da9e body=57 status=ok
// SIG undefined FUN_14402da9e(void)

void FUN_14402da9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5a50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5a50 = FUN_140002ddd(FUN_1465c43dd,uVar1,L"MissionObjectiveAspect_Breadcrumbs");
  }
  return;
}



// FUNCTION 14402dd3e FUN_14402dd3e body=57 status=ok
// SIG undefined FUN_14402dd3e(void)

void FUN_14402dd3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5c68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5c68 = FUN_140002ddd(FUN_1465c4fb0,uVar1,L"MissionUsableDef");
  }
  return;
}



// FUNCTION 14402ddae FUN_14402ddae body=57 status=ok
// SIG undefined FUN_14402ddae(void)

void FUN_14402ddae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5dc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5dc8 = FUN_140002ddd(FUN_1465c5685,uVar1,L"ModularTerminalDef");
  }
  return;
}



// FUNCTION 14402ddf6 FUN_14402ddf6 body=57 status=ok
// SIG undefined FUN_14402ddf6(void)

void FUN_14402ddf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5e88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5e88 = FUN_140002ddd(FUN_1465c574f,uVar1,L"ModularTurretDef");
  }
  return;
}



// FUNCTION 14402de36 FUN_14402de36 body=2518 status=ok
// SIG undefined FUN_14402de36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14402de36(void)

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
  _DAT_14cba5880 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cba5888);
  if (cVar1 == '\0') {
    _DAT_14cba5888 = 0;
    uRam000000014cba5890 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cba5898 = 0x47efffffe0000000;
  _DAT_14cba58a0 = 0x47efffffe0000000;
  _DAT_14cba58a8 = 0x47efffffe0000000;
  _DAT_14cba58b0 = 0x47efffffe0000000;
  _DAT_14cba58b8 = 0x47efffffe0000000;
  _DAT_14cba58c0 = 0x47efffffe0000000;
  _DAT_14cba58c8 = 0x47efffffe0000000;
  _DAT_14cba58d0 = 0x47efffffe0000000;
  _DAT_14cba58dc = 0;
  FUN_14052b5e0(&DAT_14cba58d8,"PlayerAwareness",0);
  _DAT_14cba58e8 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba58f0 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba58f8 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5900 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5908 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5910 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5918 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5920 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5928 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5930 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5938 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5940 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5948 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5950 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5958 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5960 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5968 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5970 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5978 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5980 = (ulonglong)uVar2;
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b6a13b0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a13d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a15f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a17b0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a1b80);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a1c80);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a1d70);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a1e30);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a1ed0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a2040);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6a2930,1,&PTR_FUN_14b6a2900);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a2a60);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a2c20);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a2ef0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a31c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a3570);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a3720);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b6a3eb0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6a3f00,1,&PTR_FUN_14b6a3ed0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a4200);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6a42b0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a43e0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6a5290,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a5460);
  FUN_1446f470e(&DAT_14cba5d60,L"PlayAudioForTerminal",1);
  FUN_1446f470e(&DAT_14cba5d70,L"PlayAudioForTerminalAtSource",1);
  FUN_1446f470e(&DAT_14cba5d80,L"SetupTerminalStructure",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6a62a0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a68d0);
  local_60 = "Use";
  local_58 = 3;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5dd8 = (ulonglong)uVar2;
  local_60 = "Sight";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5de0 = (ulonglong)uVar2;
  local_60 = "TargetLock";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba5de8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cba5df0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14402c637);
  FUN_140056680(&DAT_14cba5e00,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14402c648);
  FUN_140056680(&DAT_14cba5e10,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14402c659);
  FUN_140056680(&DAT_14cba5e20,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14402c66a);
  FUN_1446f470e(&DAT_14cba5e30,L"LIMB_GORED",1);
  _DAT_14cba5e38 = 0x4072c00000000000;
  _DAT_14cba5e40 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cba5e48,L"body",1);
  FUN_1446f470e(&DAT_14cba5e50,L"title_card",1);
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6a69d0,1,0);
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6a6b90);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14402e812 FUN_14402e812 body=227 status=ok
// SIG undefined FUN_14402e812(void)

longlong FUN_14402e812(void)

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
  if (DAT_14cba5f80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14402e8f6;
    local_40 = &LAB_14402e8f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/OakGame",L"NexusConfigStoreSlideShowManager",&DAT_14cba5f80,
                  &DAT_14402e810);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5f80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14402e909 FUN_14402e909 body=47 status=ok
// SIG undefined FUN_14402e909(void)

longlong FUN_14402e909(void)

{
  if (DAT_14cba5f88 == 0) {
    FUN_14073dd9a(&DAT_14cba5f88,&PTR_LAB_14b6b1798);
  }
  return DAT_14cba5f88;
}



// FUNCTION 14402e938 FUN_14402e938 body=55 status=ok
// SIG undefined FUN_14402e938(void)

void FUN_14402e938(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6130 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6130 = FUN_14171c317(FUN_1465c5fbb,uVar1,L"EOakUIDialogBoxStyle");
  }
  return;
}



// FUNCTION 14402e96f FUN_14402e96f body=55 status=ok
// SIG undefined FUN_14402e96f(void)

void FUN_14402e96f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6148 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6148 = FUN_14171c317(FUN_1465c5fea,uVar1,L"EOakUIDialogTextAlign");
  }
  return;
}



// FUNCTION 14402e9a6 FUN_14402e9a6 body=55 status=ok
// SIG undefined FUN_14402e9a6(void)

void FUN_14402e9a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba61a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba61a8 = FUN_14171c317(FUN_1465c613f,uVar1,L"EMessagePriority");
  }
  return;
}



// FUNCTION 14402e9dd FUN_14402e9dd body=55 status=ok
// SIG undefined FUN_14402e9dd(void)

void FUN_14402e9dd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba62c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba62c0 = FUN_14171c317(FUN_1465c65d3,uVar1,L"ENPCInteractionState");
  }
  return;
}



// FUNCTION 14402ea14 FUN_14402ea14 body=55 status=ok
// SIG undefined FUN_14402ea14(void)

void FUN_14402ea14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6308 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6308 = FUN_14171c317(FUN_1465c66ef,uVar1,L"ENPCInteractionType");
  }
  return;
}



// FUNCTION 14402ea6d FUN_14402ea6d body=55 status=ok
// SIG undefined FUN_14402ea6d(void)

void FUN_14402ea6d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6518 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6518 = FUN_14171c317(FUN_1465c6d6c,uVar1,L"EStampAutoRegionTagMode");
  }
  return;
}



// FUNCTION 14402eaa4 FUN_14402eaa4 body=55 status=ok
// SIG undefined FUN_14402eaa4(void)

void FUN_14402eaa4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6578 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6578 = FUN_14171c317(FUN_1465c70b0,uVar1,L"EAscensionBeamActionType");
  }
  return;
}



// FUNCTION 14402eadc FUN_14402eadc body=38 status=ok
// SIG undefined FUN_14402eadc(void)

undefined8 FUN_14402eadc(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402eb1a FUN_14402eb1a body=48 status=ok
// SIG undefined FUN_14402eb1a(void)

longlong FUN_14402eb1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cb4f02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402eb4a FUN_14402eb4a body=48 status=ok
// SIG undefined FUN_14402eb4a(void)

longlong FUN_14402eb4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140cb4f02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402eb7a FUN_14402eb7a body=48 status=ok
// SIG undefined FUN_14402eb7a(void)

longlong FUN_14402eb7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140e01364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ebaa FUN_14402ebaa body=48 status=ok
// SIG undefined FUN_14402ebaa(void)

longlong FUN_14402ebaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140e01364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ebda FUN_14402ebda body=48 status=ok
// SIG undefined FUN_14402ebda(void)

longlong FUN_14402ebda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_140e01364(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14402ec42 FUN_14402ec42 body=57 status=ok
// SIG undefined FUN_14402ec42(void)

void FUN_14402ec42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6100 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6100 = FUN_140002ddd(FUN_1465c5f2c,uVar1,L"GbxUICharacterInfoDef");
  }
  return;
}



// FUNCTION 14402ecc0 FUN_14402ecc0 body=57 status=ok
// SIG undefined FUN_14402ecc0(void)

void FUN_14402ecc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6178 = FUN_140002ddd(FUN_1465c60b0,uVar1,L"DialogBoxDef");
  }
  return;
}



// FUNCTION 14402ed20 FUN_14402ed20 body=57 status=ok
// SIG undefined FUN_14402ed20(void)

void FUN_14402ed20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba61c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba61c0 = FUN_140002ddd(FUN_1465c616e,uVar1,L"MessageDef");
  }
  return;
}



// FUNCTION 14402edd2 FUN_14402edd2 body=57 status=ok
// SIG undefined FUN_14402edd2(void)

void FUN_14402edd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6208 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6208 = FUN_140002ddd(FUN_1465c6333,uVar1,L"MenuTutorialSequenceDef");
  }
  return;
}



// FUNCTION 14402ee28 FUN_14402ee28 body=191 status=ok
// SIG undefined FUN_14402ee28(void)

void FUN_14402ee28(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  param_2[0x26] = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x27) = 0xffffffff00000080;
  param_2[0x29] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  param_2[0x2e] = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x36) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x3a) = 0xf;
  *(undefined2 *)(param_2 + 0x3c) = 1;
  *(undefined8 *)(param_2 + 0x3d) = 0;
  *(undefined8 *)(param_2 + 0x3f) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x44);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x66) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x62) = 0;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x5e) = 0;
  return;
}



// FUNCTION 14402ef20 FUN_14402ef20 body=738 status=ok
// SIG undefined FUN_14402ef20(void)

void FUN_14402ef20(undefined8 param_1,void *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  memset(param_2,0,0x310);
  *(undefined ***)((longlong)param_2 + 0x60) = &PTR_FUN_14b023b08;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0;
  *(undefined1 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0x3b9cbb9e;
  *(undefined4 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x108) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  iVar3 = DAT_14c844850;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  *(undefined4 *)((longlong)param_2 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x140) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x148) = uVar4;
  uVar4 = DAT_14c846500;
  *(undefined8 *)((longlong)param_2 + 0x158) = DAT_14c8464f8;
  *(undefined8 *)((longlong)param_2 + 0x160) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x168) = DAT_14c846508;
  uVar7 = DAT_14c846518._4_4_;
  uVar6 = (undefined4)DAT_14c846518;
  uVar5 = DAT_14c846510._4_4_;
  *(undefined4 *)((longlong)param_2 + 0x170) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_2 + 0x174) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x178) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x17c) = uVar7;
  *(undefined8 *)((longlong)param_2 + 0x180) = DAT_14c846520;
  *(undefined8 *)((longlong)param_2 + 0x198) = 0;
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  *(undefined2 *)((longlong)param_2 + 400) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1a0) = 0x10;
  *(undefined8 *)((longlong)param_2 + 0x1b8) = 0;
  *(undefined ***)((longlong)param_2 + 0x1b0) = &PTR_FUN_14b023b20;
  *(undefined ***)((longlong)param_2 + 0x1c8) = &PTR_FUN_14b023b40;
  *(undefined8 *)((longlong)param_2 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d8) = 0;
  *(undefined ***)((longlong)param_2 + 0x1e0) = &PTR_FUN_14b00be70;
  *(undefined4 *)((longlong)param_2 + 0x1f0) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x200) = 0;
  *(undefined4 *)((longlong)param_2 + 0x208) = 0;
  *(undefined1 *)((longlong)param_2 + 0x20c) = 1;
  *(undefined4 *)((longlong)param_2 + 0x218) = 0xf00000d0;
  *(undefined8 *)((longlong)param_2 + 0x220) = 0;
  *(undefined8 *)((longlong)param_2 + 0x228) = 0;
  *(undefined4 *)((longlong)param_2 + 0x230) = 0xf00000d0;
  *(undefined1 *)((longlong)param_2 + 0x240) = 0;
  *(undefined4 *)((longlong)param_2 + 0x244) = 0;
  *(undefined1 *)((longlong)param_2 + 0x249) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24c) = 6;
  if (iVar1 < iVar3) {
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
  plVar2 = DAT_14c844840;
  *(longlong **)((longlong)param_2 + 600) = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)((longlong)param_2 + 0x260) = 0;
  *(undefined4 *)((longlong)param_2 + 0x268) = 0;
  *(undefined2 *)((longlong)param_2 + 0x270) = 0;
  *(undefined4 *)((longlong)param_2 + 0x278) = 0;
  *(undefined8 *)((longlong)param_2 + 0x280) = 0;
  *(undefined8 *)((longlong)param_2 + 0x288) = 0;
  *(undefined8 *)((longlong)param_2 + 0x290) = 0;
  *(undefined8 *)((longlong)param_2 + 0x298) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2b0) = 0xf00000d0;
  *(undefined8 *)((longlong)param_2 + 0x2b8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c0) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x300) = 0;
  *(undefined8 *)((longlong)param_2 + 0x308) = 0;
  return;
}



// FUNCTION 14402f272 FUN_14402f272 body=57 status=ok
// SIG undefined FUN_14402f272(void)

void FUN_14402f272(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6368 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6368 = FUN_140002ddd(FUN_1465c68b4,uVar1,L"OakAchievementDef");
  }
  return;
}



// FUNCTION 14402f358 FUN_14402f358 body=6667 status=ok
// SIG undefined FUN_14402f358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14402f358(void)

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
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  char *local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6af360,1,&PTR_FUN_14b6af330);
  local_148 = "AssetRegistry";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,0xd);
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba5ed0 = (ulonglong)uVar12;
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6af880,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6afda0,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b02a0,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b07b0,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b0cd0,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b11e0,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b1710,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b1c20,1,0);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b23b0,1,&PTR_FUN_14b6b2380);
  FUN_1400b22c2(&local_148,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar11 = FUN_140b10a34(&local_148,&DAT_14cba5fc8);
  if (cVar11 == '\0') {
    _DAT_14cba5fc8 = 0;
    uRam000000014cba5fd0 = 0;
  }
  if (local_148 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_148 = "bone";
  dStack_140._0_5_ = 4;
  FUN_14001a6c0(&local_148,1);
  _DAT_14cba5fd8 = 0x47efffffe0000000;
  _DAT_14cba5fe0 = 0x47efffffe0000000;
  _DAT_14cba5fe8 = 0x47efffffe0000000;
  _DAT_14cba5ff0 = 0x47efffffe0000000;
  _DAT_14cba5ff8 = 0x47efffffe0000000;
  _DAT_14cba6000 = 0x47efffffe0000000;
  _DAT_14cba6008 = 0x47efffffe0000000;
  _DAT_14cba6010 = 0x47efffffe0000000;
  _DAT_14cba601c = 0;
  FUN_14052b5e0(&DAT_14cba6018,"PlayerAwareness",0);
  _DAT_14cba6028 = "PlayerAwareness";
  local_148 = "basic";
  dStack_140._0_5_ = 5;
  uVar12 = FUN_14001a6c0(&local_148,1);
  DAT_14cba6030 = (ulonglong)uVar12;
  local_148 = "challenge";
  dStack_140._0_5_ = 9;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6038 = (ulonglong)uVar12;
  local_148 = "online";
  dStack_140._0_5_ = 6;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6040 = (ulonglong)uVar12;
  local_148 = "social";
  dStack_140._0_5_ = 6;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6048 = (ulonglong)uVar12;
  local_148 = "alert";
  dStack_140._0_5_ = 5;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6050 = (ulonglong)uVar12;
  local_148 = "photo_mode";
  dStack_140._0_5_ = 10;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6058 = (ulonglong)uVar12;
  local_148 = "generic_task";
  dStack_140._0_5_ = 0xc;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6060 = (ulonglong)uVar12;
  local_148 = "mission";
  dStack_140._0_5_ = 7;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6068 = (ulonglong)uVar12;
  local_148 = "mail";
  dStack_140._0_5_ = 4;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6070 = (ulonglong)uVar12;
  local_148 = "respawn";
  dStack_140._0_5_ = 7;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6078 = (ulonglong)uVar12;
  local_148 = "tutorial";
  dStack_140._0_5_ = 8;
  uVar12 = FUN_14001a6c0(&local_148,1);
  DAT_14cba6080 = (ulonglong)uVar12;
  local_148 = "special_notification";
  dStack_140._0_5_ = 0x14;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6088 = (ulonglong)uVar12;
  local_148 = "generic_notification";
  dStack_140._0_5_ = 0x14;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6090 = (ulonglong)uVar12;
  local_148 = "vault_card";
  dStack_140._0_5_ = 10;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6098 = (ulonglong)uVar12;
  local_148 = "ONLINE_MESSAGE";
  dStack_140._0_5_ = 0xe;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba60a0 = (ulonglong)uVar12;
  local_148 = "INGAME_MESSAGE";
  dStack_140._0_5_ = 0xe;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba60a8 = (ulonglong)uVar12;
  local_148 = "NOTIFICATION_MESSAGE";
  dStack_140._0_5_ = 0x14;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba60b0 = (ulonglong)uVar12;
  local_148 = "MENU_TUTORIAL_MESSAGE";
  dStack_140._0_5_ = 0x15;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba60b8 = (ulonglong)uVar12;
  local_148 = "collectible";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,0xb);
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba60c0 = (ulonglong)uVar12;
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b28f0,1,0);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b3480,1,&PTR_FUN_14b6b3430);
  uStack_1f8 = 2;
  ppuStack_200 = &PTR_FUN_14b6b4160;
  local_208 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b41f0,1,&PTR_FUN_14b6b41a0);
  uStack_1f8 = 1;
  ppuStack_200 = &PTR_FUN_14b6b4be0;
  local_208 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6b4c00);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b5550,1,&PTR_FUN_14b6b5520);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b5910,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b6050,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b67a0,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b6d30,1,0);
  uStack_1f8 = 1;
  ppuStack_200 = &PTR_FUN_14b6b71b0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b7200,1,&PTR_FUN_14b6b71d0);
  uStack_1f8 = 1;
  ppuStack_200 = &PTR_FUN_14b6b7e00;
  local_208 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6b7e20);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b8080,1,&PTR_FUN_14b6b8050);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b8440,1,0);
  _DAT_14cba63a8 = 0xb33bbd2e;
  local_148 = DAT_14c846290;
  dStack_140 = DAT_14c846298;
  local_138 = DAT_14c8462a0;
  local_130 = DAT_14c8462a8;
  dStack_128 = DAT_14c8462b0;
  local_120 = DAT_14c8462b8;
  local_118 = DAT_14c8462c0;
  dStack_110 = DAT_14c8462c8;
  local_108 = DAT_14c8462d0;
  local_100 = DAT_14c8462d8;
  dStack_f8 = DAT_14c8462e0;
  local_f0 = DAT_14c8462e8;
  dVar17 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + (double)DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar17 * dVar17;
  uVar14 = SUB84(DAT_14c8464f0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    local_1f0 = DAT_14c8464e8;
    dVar18 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      local_1f0 = dVar17 * (1.0 / SQRT(dVar1));
      dVar18 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar18;
    local_1e8 = (double)CONCAT44(uVar15,uVar13);
  }
  else {
    local_1e8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_1f0 = dVar17;
  }
  uStack_1e0 = 0;
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
  local_158 = DAT_14c846300;
  local_168 = DAT_14c8462f0;
  dStack_160 = DAT_14c8462f8;
  local_188 = DAT_14c846308;
  dStack_180 = DAT_14c846310;
  local_178 = DAT_14c846318;
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
  DAT_14cba63b0 = (void *)0x0;
  _DAT_14cba63b8 = 10;
  FUN_1405b70fe(&DAT_14cba63b0,10,0);
  pvVar9 = DAT_14cba63b0;
  memcpy(DAT_14cba63b0,&local_148,0x60);
  *(double *)((longlong)pvVar9 + 0x60) = dVar2;
  *(double *)((longlong)pvVar9 + 0x68) = local_1f0;
  *(double *)((longlong)pvVar9 + 0x70) = local_1e8;
  *(double *)((longlong)pvVar9 + 0x78) = dVar3;
  *(double *)((longlong)pvVar9 + 0x80) = dVar19;
  *(ulonglong *)((longlong)pvVar9 + 0x88) = CONCAT44(uVar15,uVar13);
  *(double *)((longlong)pvVar9 + 0x90) = local_168;
  *(double *)((longlong)pvVar9 + 0x98) = dStack_160;
  *(double *)((longlong)pvVar9 + 0xa0) = local_158;
  *(double *)((longlong)pvVar9 + 0xb8) = local_178;
  *(double *)((longlong)pvVar9 + 0xa8) = local_188;
  *(double *)((longlong)pvVar9 + 0xb0) = dStack_180;
  *(double *)((longlong)pvVar9 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar9 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar9 + 0xd0) = CONCAT44(uVar21,uVar20);
  *(double *)((longlong)pvVar9 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar9 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar9 + 0xe8) = CONCAT44(uVar16,uVar14);
  atexit((_func_5014 *)&LAB_14402ea4b);
  uVar13 = SUB84(DAT_14c846290,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar14 = SUB84(DAT_14c846298,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if (((((double)DAT_14c846290 != 0.0) || (NAN((double)DAT_14c846290))) || (DAT_14c846298 != 0.0))
     || (NAN(DAT_14c846298))) {
    local_1f0 = atan2(DAT_14c846298,(double)DAT_14c846290);
    local_1f0 = local_1f0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846290,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar14 = SUB84(DAT_14c846298,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_1f0 = 0.0;
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
    local_1c8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1c8 = local_1c8 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462a8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar14 = SUB84(DAT_14c8462b0,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1c8 = 0.0;
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
    local_1d0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1d0 = local_1d0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462c0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462c8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1d0 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  local_198 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_198 = atan2(DAT_14c8462d0,dVar17);
    local_198 = local_198 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c8462d8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar13 = SUB84(DAT_14c8462e0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1d8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1d8 = local_1d8 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1d8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  local_1a0 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1a0 = atan2(DAT_14c8462e8,dVar17);
    local_1a0 = local_1a0 * 57.29577951308232;
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
  local_1a8 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_1a8 = atan2(dVar3,dVar4);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_1b0 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1b0 = atan2(dVar5,dVar17);
    local_1b0 = local_1b0 * 57.29577951308232;
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
  local_1b8 = 0.0;
  if ((((dVar17 != 0.0) || (NAN(dVar17))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    local_1b8 = atan2(dVar17,dVar18);
    local_1b8 = local_1b8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar18 * dVar18 + dVar17 * dVar17);
  local_1c0 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1c0 = atan2((double)CONCAT44(uVar16,uVar14),dVar17);
    local_1c0 = local_1c0 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462f8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar17 = 0.0;
  local_1e8 = dVar1;
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
  local_190 = dVar2;
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
  DAT_14cba63c0 = (double *)0x0;
  _DAT_14cba63c8 = 10;
  FUN_1464bf958(&DAT_14cba63c0,10,0);
  pdVar10 = DAT_14cba63c0;
  *DAT_14cba63c0 = local_1e8;
  pdVar10[1] = local_1f0;
  pdVar10[2] = 0.0;
  pdVar10[3] = local_190;
  pdVar10[4] = local_1c8;
  pdVar10[5] = 0.0;
  pdVar10[6] = local_198;
  pdVar10[7] = local_1d0;
  pdVar10[8] = 0.0;
  pdVar10[9] = local_1a0;
  pdVar10[10] = local_1d8;
  pdVar10[0xb] = 0.0;
  pdVar10[0xc] = local_1b0;
  pdVar10[0xd] = local_1a8;
  pdVar10[0xe] = 0.0;
  pdVar10[0xf] = local_1c0;
  pdVar10[0x10] = local_1b8;
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
  atexit((_func_5014 *)&LAB_14402ea5c);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b84f0,1,0);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6b85a0);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6b8710);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6b8cf0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b90e0,1,0);
  local_148 = "Use";
  dStack_140._0_5_ = 3;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6478 = (ulonglong)uVar12;
  local_148 = "Sight";
  dStack_140._0_5_ = 5;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6480 = (ulonglong)uVar12;
  local_148 = "TargetLock";
  dStack_140._0_5_ = 10;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba6488 = (ulonglong)uVar12;
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6b9190);
  local_148 = "ActivityInstanceId";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,0x12);
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cba64a8 = (ulonglong)uVar12;
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6b99e0,1,0);
  uStack_1f8 = 0;
  local_208 = 0;
  ppuStack_200 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6ba2c0,1,0);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6ba4c0);
  FUN_14098d3d2(FUN_14402ea6d,L"/Script/OakGame",L"EStampAutoRegionTagMode",&DAT_14cba6510);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6ba730);
  ppuStack_200 = (undefined **)0x0;
  uStack_1f8 = 0;
  local_208 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6babc0,1,&PTR_FUN_14b6bab90);
  FUN_1446f470e(&DAT_14cba6600,L"OnNextBeamAscensionStepReached",1);
  FUN_1446f470e(&DAT_14cba6620,L"OnStartPlayerLerp",1);
  uStack_1f8 = 1;
  ppuStack_200 = &PTR_FUN_14b6bc400;
  local_208 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6bc470,1,&PTR_FUN_14b6bc420);
  if ((local_e0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144030d64 FUN_144030d64 body=55 status=ok
// SIG undefined FUN_144030d64(void)

void FUN_144030d64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6748 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6748 = FUN_14171c317(FUN_1465c7ffb,uVar1,L"EGbxEcho4PerchState");
  }
  return;
}



// FUNCTION 144030d9b FUN_144030d9b body=55 status=ok
// SIG undefined FUN_144030d9b(void)

void FUN_144030d9b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6808 = FUN_14171c317(FUN_1465c838a,uVar1,L"EOakChargeDirectionType");
  }
  return;
}



// FUNCTION 144030dd2 FUN_144030dd2 body=55 status=ok
// SIG undefined FUN_144030dd2(void)

void FUN_144030dd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6820 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6820 = FUN_14171c317(FUN_1465c83b9,uVar1,L"EOakChargeRelativeSize");
  }
  return;
}



// FUNCTION 144030e09 FUN_144030e09 body=55 status=ok
// SIG undefined FUN_144030e09(void)

void FUN_144030e09(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6838 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6838 = FUN_14171c317(FUN_1465c83e8,uVar1,L"EOakChargeFinishCondition");
  }
  return;
}



// FUNCTION 144030e48 FUN_144030e48 body=55 status=ok
// SIG undefined FUN_144030e48(void)

void FUN_144030e48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba68f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba68f8 = FUN_14171c317(FUN_1465c85df,uVar1,L"EAICloakStage");
  }
  return;
}



// FUNCTION 144030e7f FUN_144030e7f body=55 status=ok
// SIG undefined FUN_144030e7f(void)

void FUN_144030e7f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6910 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6910 = FUN_14171c317(FUN_1465c860e,uVar1,L"EAICloakTransitionAt");
  }
  return;
}



// FUNCTION 144030eb6 FUN_144030eb6 body=55 status=ok
// SIG undefined FUN_144030eb6(void)

void FUN_144030eb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba69a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba69a8 = FUN_14171c317(FUN_1465c8902,uVar1,L"EOakAICloakValue");
  }
  return;
}



// FUNCTION 144030f0a FUN_144030f0a body=203 status=ok
// SIG undefined FUN_144030f0a(void)

void FUN_144030f0a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  *(undefined1 *)((longlong)param_2 + 0x28) = 1;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined1 *)((longlong)param_2 + 0x58) = 1;
  *(undefined1 *)((longlong)param_2 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x82) = 0;
  *(undefined1 *)((longlong)param_2 + 0x8a) = 1;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined2 *)((longlong)param_2 + 0xd0) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0xd2) = 1;
  *(undefined1 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_2 + 0xd9) = 1;
  *(undefined4 *)((longlong)param_2 + 0xd5) = 0x1010101;
  *(undefined8 *)((longlong)param_2 + 0xfb) = 0;
  *(undefined8 *)((longlong)param_2 + 0x103) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x10b) = 1;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  return;
}



// FUNCTION 144030ffe FUN_144030ffe body=289 status=ok
// SIG undefined FUN_144030ffe(void)

void FUN_144030ffe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x240);
  *(undefined1 *)((longlong)param_2 + 0xd0) = 3;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x100) = 1;
  *(undefined8 *)((longlong)param_2 + 0x108) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined1 *)((longlong)param_2 + 0x130) = 1;
  *(undefined1 *)((longlong)param_2 + 0x132) = 0;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_2 + 0x140) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  *(undefined8 *)((longlong)param_2 + 0x152) = 0;
  *(undefined8 *)((longlong)param_2 + 0x15a) = 0;
  *(undefined1 *)((longlong)param_2 + 0x162) = 1;
  *(undefined4 *)((longlong)param_2 + 0x164) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_2 + 0x168) = 0;
  *(undefined8 *)((longlong)param_2 + 0x170) = 0;
  *(undefined1 *)((longlong)param_2 + 0x178) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_2 + 400) = 0;
  *(undefined8 *)((longlong)param_2 + 0x198) = 0;
  *(undefined8 *)((longlong)param_2 + 0x180) = 0;
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1a8) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1aa) = 1;
  *(undefined1 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1b1) = 1;
  *(undefined4 *)((longlong)param_2 + 0x1ad) = 0x1010101;
  *(undefined8 *)((longlong)param_2 + 0x1d3) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1db) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c0) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1e3) = 1;
  *(undefined8 *)((longlong)param_2 + 0x220) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x228) = 0;
  *(undefined8 *)((longlong)param_2 + 0x230) = 0;
  *(undefined1 *)((longlong)param_2 + 0x238) = 3;
  return;
}



// FUNCTION 144031120 FUN_144031120 body=327 status=ok
// SIG undefined FUN_144031120(void)

undefined8 * FUN_144031120(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  memset(param_1 + 9,0,0x88);
  *(undefined1 *)(param_1 + 0x1a) = 3;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined1 *)((longlong)param_1 + 0x132) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x152) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x162) = 1;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3dcccccd;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x10101;
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b1) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1ad) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0x1d3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1db) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e3) = 1;
  param_1[0x43] = 0;
  param_1[0x44] = 0x200000000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f9) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 3;
  return param_1;
}



// FUNCTION 144031292 FUN_144031292 body=162 status=ok
// SIG undefined FUN_144031292(void)

void FUN_144031292(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  *param_2 = &PTR_FUN_14b6c9250;
  param_2[3] = 0x3f0000003f000000;
  param_2[4] = 0x43c800003f000000;
  param_2[5] = 0x404000003fc00000;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x44fa0000461c4000;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x43c80000457a0000;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x42c80000;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0x3f0000003f800000;
  param_2[0xb] = 0x4000000040800000;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined4 *)((longlong)param_2 + 100) = 0x3f800000;
  param_2[0xd] = 0x4076800000000000;
  param_2[0xe] = 0x4076800000000000;
  param_2[0xf] = 0x4010000040800000;
  param_2[0x10] = 0x4000000041f00000;
  *(undefined4 *)(param_2 + 0x11) = 0x3f000000;
  return;
}



// FUNCTION 144031340 FUN_144031340 body=57 status=ok
// SIG undefined FUN_144031340(void)

void FUN_144031340(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6a38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6a38 = FUN_140002ddd(FUN_1465c8b45,uVar1,L"OakAimAssistParameters");
  }
  return;
}



// FUNCTION 144031379 FUN_144031379 body=878 status=ok
// SIG undefined FUN_144031379(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144031379(void)

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
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c0ba0,1,&PTR_FUN_14b6c0b70);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c11e0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6c1f50;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c1f70,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c26f0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c2f70,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba67f8 = (ulonglong)uVar2;
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = &PTR_FUN_14b6c4190;
  local_68 = 0;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c41f0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c45d0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c4e40,1,0);
  _DAT_14cba68b0 = 0x47efffffe0000000;
  _DAT_14cba68b8 = 0x47efffffe0000000;
  _DAT_14cba68c0 = 0x47efffffe0000000;
  _DAT_14cba68c8 = 0x47efffffe0000000;
  _DAT_14cba68d0 = 0x47efffffe0000000;
  _DAT_14cba68d8 = 0x47efffffe0000000;
  _DAT_14cba68e0 = 0x47efffffe0000000;
  _DAT_14cba68e8 = 0x47efffffe0000000;
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b6c6080;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c60f0,1,&PTR_FUN_14b6c60c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c69c0,1,&PTR_FUN_14b6c6970);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6c6b70;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6c6b90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6c6c50);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba69e8);
  if (cVar1 == '\0') {
    _DAT_14cba69e8 = 0;
    uRam000000014cba69f0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c77a0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c78c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6c8290);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440316e8 FUN_1440316e8 body=55 status=ok
// SIG undefined FUN_1440316e8(void)

void FUN_1440316e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6b28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6b28 = FUN_14171c317(FUN_1465c8f4f,uVar1,L"EOakAISpawnScriptedTask");
  }
  return;
}



// FUNCTION 14403171f FUN_14403171f body=55 status=ok
// SIG undefined FUN_14403171f(void)

void FUN_14403171f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6b70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6b70 = FUN_14171c317(FUN_1465c9050,uVar1,L"EOakAIWeaponStateResolverValue");
  }
  return;
}



// FUNCTION 14403175c FUN_14403175c body=4017 status=ok
// SIG undefined FUN_14403175c(void)

void FUN_14403175c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  uint local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = (undefined8 *)0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar9 = (*pcVar3)(plVar4);
          if (cVar9 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_14403192f;
          }
        }
        puVar10 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
LAB_14403192f:
  local_40 = 0;
  uStack_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1409e12a0;
      local_80 = 0;
      local_88 = (undefined8 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
          cVar9 = (*pcVar3)(plVar4);
          if (cVar9 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_40);
            goto LAB_144031ae3;
          }
        }
        puVar11 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &local_40) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_40,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_40,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar4,&local_40,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_40,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_40 = (undefined4)uVar2;
      uStack_3c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
LAB_144031ae3:
  iStack_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = (undefined8 *)0x28001;
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
          cVar9 = (*pcVar3)(plVar4);
          if (cVar9 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&iStack_44);
            goto LAB_144031c96;
          }
        }
        piVar12 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (piVar12 != &iStack_44) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&iStack_44,piVar12,(int)plVar4[6]);
          }
          else {
            memcpy(&iStack_44,piVar12,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar4,&iStack_44,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&iStack_44,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
LAB_144031c96:
  iVar8 = iStack_44;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = (undefined8 *)0x28001;
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
          cVar9 = (*pcVar3)(plVar4);
          if (cVar9 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
            goto LAB_144031e4d;
          }
        }
        piVar12 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (piVar12 != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,piVar12,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,piVar12,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_48 = (int)uVar2;
      iStack_44 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_144031e4d:
  iVar7 = local_48;
  local_50 = local_50 & 0xffffff00;
  uStack_58 = 0;
  uStack_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
          cVar9 = (*pcVar3)(plVar4);
          if (cVar9 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_58);
            goto LAB_14403200b;
          }
        }
        puVar11 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &uStack_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_58,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_58,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar4,&uStack_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_58,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&uStack_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_58 = (undefined4)uVar2;
      uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_58);
    }
  }
LAB_14403200b:
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = (undefined8 *)0x28001;
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
          cVar9 = (*pcVar3)(plVar4);
          if (cVar9 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_5c);
            goto LAB_1440321be;
          }
        }
        piVar12 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (piVar12 != &local_5c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_5c,piVar12,(int)plVar4[6]);
          }
          else {
            memcpy(&local_5c,piVar12,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1400746b0(plVar4,&local_5c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_5c,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_5c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_5c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_5c = (int)uVar2;
      uStack_58 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_5c);
    }
  }
LAB_1440321be:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = &local_68;
  local_60 = local_50;
  local_68 = CONCAT44(uStack_54,uStack_58);
  local_80 = CONCAT71(local_80._1_7_,local_5c != 0);
  FUN_1440ca546(local_38,CONCAT44(uStack_3c,local_40),iVar8 != 0,iVar7 != 0);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14403270e FUN_14403270e body=55 status=ok
// SIG undefined FUN_14403270e(void)

void FUN_14403270e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6bc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6bc8 = FUN_14171c317(FUN_1465c91e9,uVar1,L"EOakAmmoType");
  }
  return;
}



// FUNCTION 144032745 FUN_144032745 body=55 status=ok
// SIG undefined FUN_144032745(void)

void FUN_144032745(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6bf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6bf8 = FUN_14171c317(FUN_1465c92b0,uVar1,L"EOakAmmoResolverValue");
  }
  return;
}



// FUNCTION 14403277c FUN_14403277c body=55 status=ok
// SIG undefined FUN_14403277c(void)

void FUN_14403277c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6c28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6c28 = FUN_14171c317(FUN_1465c9376,uVar1,L"EOakAmmoResolverState");
  }
  return;
}



// FUNCTION 1440327b3 FUN_1440327b3 body=55 status=ok
// SIG undefined FUN_1440327b3(void)

void FUN_1440327b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6dd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6dd8 = FUN_14171c317(FUN_1465c9ca2,uVar1,L"EPopulatePackageNameChunkMapPhase");
  }
  return;
}



// FUNCTION 1440327ea FUN_1440327ea body=55 status=ok
// SIG undefined FUN_1440327ea(void)

void FUN_1440327ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6df0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6df0 = FUN_14171c317(FUN_1465c9cd1,uVar1,L"EOakAssetChunkRuleType");
  }
  return;
}



// FUNCTION 144032822 FUN_144032822 body=48 status=ok
// SIG undefined FUN_144032822(void)

longlong FUN_144032822(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144032852 FUN_144032852 body=48 status=ok
// SIG undefined FUN_144032852(void)

longlong FUN_144032852(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144032882 FUN_144032882 body=48 status=ok
// SIG undefined FUN_144032882(void)

longlong FUN_144032882(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440328b2 FUN_1440328b2 body=48 status=ok
// SIG undefined FUN_1440328b2(void)

longlong FUN_1440328b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440328e2 FUN_1440328e2 body=48 status=ok
// SIG undefined FUN_1440328e2(void)

longlong FUN_1440328e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x688;
  FUN_140b21360(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440329b0 FUN_1440329b0 body=212 status=ok
// SIG undefined FUN_1440329b0(void)

undefined8 FUN_1440329b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0x2b4);
    memcpy((void *)(param_2 + 0x2d0),(void *)(param_3 + 0x2d0),0x98);
    if (param_2 != param_3) {
      if (*(char *)(param_3 + 0x3d0) == '\x01') {
        puVar3 = (undefined8 *)(param_3 + 0x370);
        puVar4 = (undefined8 *)(param_2 + 0x370);
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar1 = 1;
      }
      else {
        if (*(char *)(param_2 + 0x3d0) != '\x01') goto LAB_144032a44;
        uVar1 = 0;
      }
      *(undefined1 *)(param_2 + 0x3d0) = uVar1;
    }
LAB_144032a44:
    memcpy((void *)(param_2 + 0x3e0),(void *)(param_3 + 0x3e0),0xab);
    param_4 = param_4 + -1;
    param_3 = param_3 + 0x490;
    param_2 = param_2 + 0x490;
  } while( true );
}



// FUNCTION 144032ab0 FUN_144032ab0 body=55 status=ok
// SIG undefined FUN_144032ab0(void)

undefined8 * FUN_144032ab0(undefined8 *param_1,int param_2)

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



// FUNCTION 144032af6 FUN_144032af6 body=200 status=ok
// SIG undefined FUN_144032af6(void)

void FUN_144032af6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6d6320;
  plVar3 = (longlong *)param_1[0x148];
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
  if (param_1[0x144] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb2] = &PTR_FUN_14b0a0bc0;
  if (*(char *)(param_1 + 300) == '\x01') {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  param_1[0x20] = &PTR_FUN_14b0a0bc0;
  if (*(char *)(param_1 + 0x9a) == '\x01') {
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
  *param_1 = &PTR_FUN_14b0a0e90;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144032bbe FUN_144032bbe body=57 status=ok
// SIG undefined FUN_144032bbe(void)

void FUN_144032bbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6ca0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6ca0 = FUN_140002ddd(FUN_1465c95d1,uVar1,L"OakAnimNode_ArmIK");
  }
  return;
}



// FUNCTION 144032c44 FUN_144032c44 body=29 status=ok
// SIG undefined FUN_144032c44(void)

undefined8 FUN_144032c44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144032d02 FUN_144032d02 body=166 status=ok
// SIG undefined FUN_144032d02(void)

undefined4 * FUN_144032d02(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  lVar4 = *(longlong *)(param_2 + 4);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(longlong *)(param_1 + 4) = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  uVar3 = *(undefined8 *)(param_2 + 6);
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = uVar3;
  *(longlong *)(param_1 + 8) = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 144032db6 FUN_144032db6 body=258 status=ok
// SIG undefined FUN_144032db6(void)

void FUN_144032db6(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  memset(param_2 + 1,0,0x2b0);
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
  *param_2 = &PTR_FUN_14b6d3010;
  *(undefined4 *)(param_2 + 0x27) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x28) = 0x3dcccccd;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined1 *)(param_2 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_2 + 0x164) = 0xffffffff;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  do {
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x1d0) = 0;
    pbVar1 = (byte *)((longlong)param_2 + lVar3 + 0x1d8);
    *pbVar1 = *pbVar1 & 0xfc;
    *(undefined1 *)((longlong)param_2 + lVar3 + 0x1d9) = 0;
    *(undefined ***)((longlong)param_2 + lVar3 + 0x1c8) = &PTR_FUN_14b6d2dc0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + 0x1e0);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)param_2 + lVar3 + 0x1f0) = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + 0x1f8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + 0x208);
    *puVar2 = 0;
    puVar2[1] = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0xf0);
  return;
}



// FUNCTION 144032eb8 FUN_144032eb8 body=57 status=ok
// SIG undefined FUN_144032eb8(void)

void FUN_144032eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6d78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6d78 = FUN_140002ddd(FUN_1465c9b19,uVar1,L"OakAnimNode_OrderRewind");
  }
  return;
}



// FUNCTION 144032f22 FUN_144032f22 body=31 status=ok
// SIG undefined FUN_144032f22(void)

undefined8 FUN_144032f22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144032f42 FUN_144032f42 body=57 status=ok
// SIG undefined FUN_144032f42(void)

void FUN_144032f42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6da8 = FUN_140002ddd(FUN_1465c9c0e,uVar1,L"OakAnimSetPickerEx");
  }
  return;
}



// FUNCTION 144032ffa FUN_144032ffa body=165 status=ok
// SIG undefined FUN_144032ffa(void)

void FUN_144032ffa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x140);
  *param_2 = &PTR_FUN_14b6d43b0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x1e) = 0x3f800000;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x28) = 0x3f800000;
  return;
}



// FUNCTION 1440330dc FUN_1440330dc body=87 status=ok
// SIG undefined FUN_1440330dc(void)

void FUN_1440330dc(undefined8 param_1,undefined4 *param_2)

{
  memset(param_2,0,0xa0);
  *param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xf00000d0;
  param_2[0x12] = 0x3f800000;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_2[0x22] = 0xf00000d0;
  param_2[0x26] = 0x3f800000;
  return;
}



// FUNCTION 14403315e FUN_14403315e body=97 status=ok
// SIG undefined FUN_14403315e(void)

void FUN_14403315e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *param_2 = &PTR_FUN_14b6d4cc0;
  return;
}



// FUNCTION 1440331cb FUN_1440331cb body=1009 status=ok
// SIG undefined FUN_1440331cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440331cb(void)

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
  _DAT_14cba6a48 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c9f20,1,&PTR_FUN_14b6c9ef0);
  _DAT_14cba6a80 = 0x47efffffe0000000;
  _DAT_14cba6a88 = 0x47efffffe0000000;
  _DAT_14cba6a90 = 0x47efffffe0000000;
  _DAT_14cba6a98 = 0x47efffffe0000000;
  _DAT_14cba6aa0 = 0x47efffffe0000000;
  _DAT_14cba6aa8 = 0x47efffffe0000000;
  _DAT_14cba6ab0 = 0x47efffffe0000000;
  _DAT_14cba6ab8 = 0x47efffffe0000000;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6c9fc0,1,0);
  _DAT_14cba6ad8 = 0xffffffff;
  _DAT_14cba6adc = 0;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6ca120,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6caaf0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6caee0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6caf00);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6cb4d0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b6cb6c0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6cb6e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6cbe30,1,0);
  uStack_58 = 3;
  ppuStack_60 = &PTR_FUN_14b6cc760;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6cc7c0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6cc900,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6ccc00);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6ccda0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6cce50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6cd000);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6cd4c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6cd690);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6ce460);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6ce560);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6ce720,1,0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b6cf970;
  local_68 = 7;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6cfad0,1,&PTR_FUN_14b6cf9b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6d0ec0,1,&PTR_FUN_14b6d0d80);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440335c0 FUN_1440335c0 body=55 status=ok
// SIG undefined FUN_1440335c0(void)

void FUN_1440335c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6fe8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6fe8 = FUN_14171c317(FUN_1465cadbe,uVar1,L"EAudioPresetMode");
  }
  return;
}



// FUNCTION 1440335f7 FUN_1440335f7 body=55 status=ok
// SIG undefined FUN_1440335f7(void)

void FUN_1440335f7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7000 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7000 = FUN_14171c317(FUN_1465cadef,uVar1,L"EAudioEQMode");
  }
  return;
}



// FUNCTION 14403362e FUN_14403362e body=55 status=ok
// SIG undefined FUN_14403362e(void)

void FUN_14403362e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba71e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba71e0 = FUN_14171c317(FUN_1465cb078,uVar1,L"ELevelUpHealthStrategy");
  }
  return;
}



// FUNCTION 14403366e FUN_14403366e body=55 status=ok
// SIG undefined FUN_14403366e(void)

void FUN_14403366e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba74c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba74c0 = FUN_14171c317(FUN_1465cbe1c,uVar1,L"EBossInfoState");
  }
  return;
}



// FUNCTION 1440336a5 FUN_1440336a5 body=47 status=ok
// SIG undefined FUN_1440336a5(void)

longlong FUN_1440336a5(void)

{
  if (DAT_14cba7540 == 0) {
    FUN_14000fc22(&DAT_14cba7540,&PTR_FUN_14b6dfe28);
  }
  return DAT_14cba7540;
}



// FUNCTION 1440336d4 FUN_1440336d4 body=1701 status=ok
// SIG undefined FUN_1440336d4(void)

void FUN_1440336d4(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_1468d96f0;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_1440338a6;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_1440338a6:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_1468d96f0;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_144033a5a;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
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
LAB_144033a5a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144122946(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144033d7f FUN_144033d7f body=47 status=ok
// SIG undefined FUN_144033d7f(void)

longlong FUN_144033d7f(void)

{
  if (DAT_14cba7558 == 0) {
    FUN_14000fc22(&DAT_14cba7558,&PTR_FUN_14b6e0108);
  }
  return DAT_14cba7558;
}



// FUNCTION 144033dae FUN_144033dae body=1704 status=ok
// SIG undefined FUN_144033dae(void)

void FUN_144033dae(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  int *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_30 = 0;
  uStack_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_1468d96f0;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_30);
            goto LAB_144033f80;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &uStack_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
LAB_144033f80:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_14067a048;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x28001;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_34);
            goto LAB_144034133;
          }
        }
        _Src_00 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_34) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_34,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_34,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_34,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_34,lVar5);
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
LAB_144034133:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1441253bc(param_1,CONCAT44(uStack_2c,uStack_30),local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144034457 FUN_144034457 body=47 status=ok
// SIG undefined FUN_144034457(void)

longlong FUN_144034457(void)

{
  if (DAT_14cba7598 == 0) {
    FUN_14000fc22(&DAT_14cba7598,&PTR_FUN_14b6e0720);
  }
  return DAT_14cba7598;
}



// FUNCTION 144034486 FUN_144034486 body=1799 status=ok
// SIG undefined FUN_144034486(void)

void FUN_144034486(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_2f8 [32];
  ulonglong local_2d8;
  undefined8 local_2d0;
  undefined *local_2c8;
  code *local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined4 local_178;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_2c8 = (undefined *)FUN_140342cba();
          local_2c0 = FUN_1468c7f1e;
          local_2d0 = 0;
          local_2d8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_2c0 = FUN_1468d96f0;
      local_2c8 = &DAT_14c951a38;
      local_2d0 = 0;
      local_2d8 = 0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2b0);
            goto LAB_14403465e;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_2b0) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2b0,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2b0,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_2d0 = CONCAT44(local_2d0._4_4_,(int)plVar4[6]);
        local_2d8 = local_2d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2b0,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2b0,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2b0 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2b0);
    }
  }
LAB_14403465e:
  local_280 = 0;
  local_278 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_274 = 0xffffffff00000080;
  local_26c = 0;
  local_260 = 0;
  local_258 = 0;
  local_230 = 0;
  local_228 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_224 = 0xffffffff00000080;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0xffffffff00000000;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c4 = 0xffffffff00000080;
  local_1bc = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0x200000000;
  local_138 = 0;
  local_130 = 0;
  uStack_12c = 0x20;
  uStack_128 = 0xffffffff;
  uStack_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x20;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0x200000000;
  local_68 = 0;
  local_60 = 0;
  uStack_5c = 0x20;
  uStack_58 = 0xffffffff;
  uStack_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
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
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2a8);
            goto LAB_144034964;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_2a8) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2a8,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2a8,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_2d0 = CONCAT44(local_2d0._4_4_,(int)plVar4[6]);
        local_2d8 = local_2d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2a8,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2a8,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_2a8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2a8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2a8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2a8);
    }
  }
LAB_144034964:
  puVar8 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar8 = &local_2a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144123486(param_1,local_2b0,puVar8);
  local_2a8 = 0;
  FUN_14076ba36(&uStack_2a0);
  if ((local_28 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144034b8e FUN_144034b8e body=47 status=ok
// SIG undefined FUN_144034b8e(void)

longlong FUN_144034b8e(void)

{
  if (DAT_14cba75a0 == 0) {
    FUN_14000fc22(&DAT_14cba75a0,&PTR_FUN_14b6e0828);
  }
  return DAT_14cba75a0;
}



// FUNCTION 144034bbe FUN_144034bbe body=1573 status=ok
// SIG undefined FUN_144034bbe(void)

void FUN_144034bbe(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  int *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_30 = 0;
  uStack_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_1468d96f0;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_30);
            goto LAB_144034d90;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &uStack_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
LAB_144034d90:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_34);
            goto LAB_144034f43;
          }
        }
        _Src_00 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_34) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_34,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_34,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_34,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_34,lVar5);
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
LAB_144034f43:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((-1 < local_34) && (local_34 < *(int *)(param_1 + 0x638))) {
    FUN_144123486();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440351e4 FUN_1440351e4 body=47 status=ok
// SIG undefined FUN_1440351e4(void)

longlong FUN_1440351e4(void)

{
  if (DAT_14cba75a8 == 0) {
    FUN_14000fc22(&DAT_14cba75a8,&PTR_FUN_14b6e0918);
  }
  return DAT_14cba75a8;
}



// FUNCTION 144035214 FUN_144035214 body=1701 status=ok
// SIG undefined FUN_144035214(void)

void FUN_144035214(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_1468d96f0;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0x4008001;
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
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_1440353e6;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_1440353e6:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951a88) {
        FUN_144b3d300(&DAT_14c951a88);
        if (DAT_14c951a88 == -1) {
          local_48 = (undefined *)FUN_140342cba();
          local_40 = FUN_1468c7f1e;
          local_50 = 0;
          local_58 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
      }
      local_40 = FUN_1409e12a0;
      local_48 = &DAT_14c951a38;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_14403559a;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
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
LAB_14403559a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1441235c0(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440358ca FUN_1440358ca body=48 status=ok
// SIG undefined FUN_1440358ca(void)

longlong FUN_1440358ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440358fa FUN_1440358fa body=48 status=ok
// SIG undefined FUN_1440358fa(void)

longlong FUN_1440358fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x958;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403592a FUN_14403592a body=48 status=ok
// SIG undefined FUN_14403592a(void)

longlong FUN_14403592a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x960;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403595a FUN_14403595a body=48 status=ok
// SIG undefined FUN_14403595a(void)

longlong FUN_14403595a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x990;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14403598a FUN_14403598a body=48 status=ok
// SIG undefined FUN_14403598a(void)

longlong FUN_14403598a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x998;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440359ba FUN_1440359ba body=48 status=ok
// SIG undefined FUN_1440359ba(void)

longlong FUN_1440359ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440359f2 FUN_1440359f2 body=48 status=ok
// SIG undefined FUN_1440359f2(void)

longlong FUN_1440359f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035a2a FUN_144035a2a body=48 status=ok
// SIG undefined FUN_144035a2a(void)

longlong FUN_144035a2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xbf0;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035a5a FUN_144035a5a body=48 status=ok
// SIG undefined FUN_144035a5a(void)

longlong FUN_144035a5a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc30;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035a92 FUN_144035a92 body=48 status=ok
// SIG undefined FUN_144035a92(void)

longlong FUN_144035a92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc38;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035ad2 FUN_144035ad2 body=48 status=ok
// SIG undefined FUN_144035ad2(void)

longlong FUN_144035ad2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035b02 FUN_144035b02 body=48 status=ok
// SIG undefined FUN_144035b02(void)

longlong FUN_144035b02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035b32 FUN_144035b32 body=48 status=ok
// SIG undefined FUN_144035b32(void)

longlong FUN_144035b32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035b62 FUN_144035b62 body=48 status=ok
// SIG undefined FUN_144035b62(void)

longlong FUN_144035b62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035b92 FUN_144035b92 body=48 status=ok
// SIG undefined FUN_144035b92(void)

longlong FUN_144035b92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035bc2 FUN_144035bc2 body=48 status=ok
// SIG undefined FUN_144035bc2(void)

longlong FUN_144035bc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14144d176(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035bfa FUN_144035bfa body=48 status=ok
// SIG undefined FUN_144035bfa(void)

longlong FUN_144035bfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14144d176(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144035c4e FUN_144035c4e body=57 status=ok
// SIG undefined FUN_144035c4e(void)

void FUN_144035c4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6fd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6fd0 =
         FUN_140002ddd(FUN_1465cad5f,uVar1,L"OakAudioGameSettingEditCondition_MainMenuSpecific");
  }
  return;
}



// FUNCTION 144035d2a FUN_144035d2a body=57 status=ok
// SIG undefined FUN_144035d2a(void)

void FUN_144035d2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba73c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba73c8 = FUN_140002ddd(FUN_1465cb9b9,uVar1,L"OakBodyNodeSettings_FirstPerson");
  }
  return;
}



// FUNCTION 144035d72 FUN_144035d72 body=57 status=ok
// SIG undefined FUN_144035d72(void)

void FUN_144035d72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba73e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba73e0 = FUN_140002ddd(FUN_1465cba18,uVar1,L"OakBodyNodeState_FirstPerson");
  }
  return;
}



// FUNCTION 144035dd0 FUN_144035dd0 body=57 status=ok
// SIG undefined FUN_144035dd0(void)

void FUN_144035dd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba73f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba73f8 = FUN_140002ddd(FUN_1465cbaaf,uVar1,L"OakBodyNodeSettings_GlideModifier");
  }
  return;
}


