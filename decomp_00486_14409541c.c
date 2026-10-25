// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14409541c FUN_14409541c body=55 status=ok
// SIG undefined FUN_14409541c(void)

void FUN_14409541c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf310 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf310 = FUN_14171c317(FUN_146611af9,uVar1,L"EOakSpawnZoneOption");
  }
  return;
}



// FUNCTION 144095464 FUN_144095464 body=55 status=ok
// SIG undefined FUN_144095464(void)

void FUN_144095464(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf400 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf400 = FUN_14171c317(FUN_14409549b,uVar1,L"EOakWorldSettingsAttributeType");
  }
  return;
}



// FUNCTION 14409549b FUN_14409549b body=47 status=ok
// SIG undefined FUN_14409549b(void)

longlong FUN_14409549b(void)

{
  if (DAT_14cbbf3f8 == 0) {
    FUN_1409ce572(&DAT_14cbbf3f8,&PTR_FUN_14b908b90);
  }
  return DAT_14cbbf3f8;
}



// FUNCTION 1440954ca FUN_1440954ca body=55 status=ok
// SIG undefined FUN_1440954ca(void)

void FUN_1440954ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf418 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf418 = FUN_140002ddd(FUN_144095501,uVar1,L"OakWorldSettingsValueResolver");
  }
  return;
}



// FUNCTION 144095501 FUN_144095501 body=47 status=ok
// SIG undefined FUN_144095501(void)

longlong FUN_144095501(void)

{
  if (DAT_14cbbf410 == 0) {
    FUN_14086a14e(&DAT_14cbbf410,&PTR_FUN_14b908cc0);
  }
  return DAT_14cbbf410;
}



// FUNCTION 144095530 FUN_144095530 body=48 status=ok
// SIG undefined FUN_144095530(void)

void FUN_144095530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b90e200;
  return;
}



// FUNCTION 144095560 FUN_144095560 body=55 status=ok
// SIG undefined FUN_144095560(void)

void FUN_144095560(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf448 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf448 = FUN_14171c317(FUN_146611e04,uVar1,L"EOakZoneTransitionGate");
  }
  return;
}



// FUNCTION 144095597 FUN_144095597 body=55 status=ok
// SIG undefined FUN_144095597(void)

void FUN_144095597(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf460 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf460 = FUN_14171c317(FUN_146611e33,uVar1,L"EOakZoneTransitionDirection");
  }
  return;
}



// FUNCTION 1440955d6 FUN_1440955d6 body=55 status=ok
// SIG undefined FUN_1440955d6(void)

void FUN_1440955d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf600 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf600 = FUN_14171c317(FUN_1466126de,uVar1,L"EObjectiveLootSubType");
  }
  return;
}



// FUNCTION 14409560d FUN_14409560d body=55 status=ok
// SIG undefined FUN_14409560d(void)

void FUN_14409560d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf618 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf618 = FUN_14171c317(FUN_14661270d,uVar1,L"EObjectiveLootGameplayMode");
  }
  return;
}



// FUNCTION 144095655 FUN_144095655 body=55 status=ok
// SIG undefined FUN_144095655(void)

void FUN_144095655(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf870 = FUN_14171c317(FUN_146612e38,uVar1,L"EPersonalVehicleSummonState");
  }
  return;
}



// FUNCTION 14409568c FUN_14409568c body=55 status=ok
// SIG undefined FUN_14409568c(void)

void FUN_14409568c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf888 = FUN_14171c317(FUN_146612e67,uVar1,L"EPersonalVehicleSummonPermission");
  }
  return;
}



// FUNCTION 1440956c3 FUN_1440956c3 body=55 status=ok
// SIG undefined FUN_1440956c3(void)

void FUN_1440956c3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf8a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf8a0 = FUN_14171c317(FUN_146612e98,uVar1,L"EPersonalVehicleSpawnPhase");
  }
  return;
}



// FUNCTION 1440956fa FUN_1440956fa body=48 status=ok
// SIG undefined FUN_1440956fa(void)

longlong FUN_1440956fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1406228ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144095760 FUN_144095760 body=29 status=ok
// SIG undefined FUN_144095760(void)

undefined8 FUN_144095760(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409581a FUN_14409581a body=59 status=ok
// SIG undefined FUN_14409581a(void)

undefined8 FUN_14409581a(longlong *param_1)

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



// FUNCTION 1440958ba FUN_1440958ba body=29 status=ok
// SIG undefined FUN_1440958ba(void)

undefined8 FUN_1440958ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440958d8 FUN_1440958d8 body=55 status=ok
// SIG undefined FUN_1440958d8(void)

void FUN_1440958d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf418 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf418 = FUN_140002ddd(FUN_144095501,uVar1,L"OakWorldSettingsValueResolver");
  }
  return;
}



// FUNCTION 1440959b4 FUN_1440959b4 body=57 status=ok
// SIG undefined FUN_1440959b4(void)

void FUN_1440959b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf4b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf4b0 = FUN_140002ddd(FUN_146611fb9,uVar1,L"ObjectiveTypeSettings_EchoLog");
  }
  return;
}



// FUNCTION 1440959fc FUN_1440959fc body=115 status=ok
// SIG undefined FUN_1440959fc(void)

void FUN_1440959fc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa8);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b90e990;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  return;
}



// FUNCTION 144095a7c FUN_144095a7c body=57 status=ok
// SIG undefined FUN_144095a7c(void)

void FUN_144095a7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf4c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf4c8 = FUN_140002ddd(FUN_14661204f,uVar1,L"ObjectiveTypeSettings_EchoPanelHack");
  }
  return;
}



// FUNCTION 144095b5c FUN_144095b5c body=57 status=ok
// SIG undefined FUN_144095b5c(void)

void FUN_144095b5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf528 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf528 = FUN_140002ddd(FUN_14661223a,uVar1,L"ObjectiveTypeSettings_OakBoss");
  }
  return;
}



// FUNCTION 144095ba4 FUN_144095ba4 body=117 status=ok
// SIG undefined FUN_144095ba4(void)

void FUN_144095ba4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *param_2 = &PTR_FUN_14b90f190;
  return;
}



// FUNCTION 144095c26 FUN_144095c26 body=57 status=ok
// SIG undefined FUN_144095c26(void)

void FUN_144095c26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf540 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf540 = FUN_140002ddd(FUN_1466122d1,uVar1,L"ObjectiveTypeSettings_OakDamage");
  }
  return;
}



// FUNCTION 144095ce4 FUN_144095ce4 body=57 status=ok
// SIG undefined FUN_144095ce4(void)

void FUN_144095ce4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf570 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf570 = FUN_140002ddd(FUN_1466123fd,uVar1,L"ObjectiveTypeSettings_OakDown");
  }
  return;
}



// FUNCTION 144095d2c FUN_144095d2c body=109 status=ok
// SIG undefined FUN_144095d2c(void)

void FUN_144095d2c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b90f670;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  return;
}



// FUNCTION 144095da6 FUN_144095da6 body=57 status=ok
// SIG undefined FUN_144095da6(void)

void FUN_144095da6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf588 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf588 = FUN_140002ddd(FUN_146612493,uVar1,L"ObjectiveTypeSettings_OakEscort");
  }
  return;
}



// FUNCTION 144095dee FUN_144095dee body=851 status=ok
// SIG undefined FUN_144095dee(void)

void FUN_144095dee(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  memset(param_2 + 1,0,0x398);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b90f830;
  *(undefined4 *)(param_2 + 0x19) = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x1e] = &PTR_FUN_14b023b08;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x22) = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0x3b9cbb9e;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined8 *)((longlong)param_2 + 0x149) = 0;
  *(undefined8 *)((longlong)param_2 + 0x151) = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  iVar3 = DAT_14c844850;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  *(undefined4 *)((longlong)param_2 + 0x1cc) = 0;
  param_2[0x3c] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_2[0x3a] = DAT_14c8464e0;
  param_2[0x3b] = uVar4;
  uVar4 = DAT_14c846500;
  param_2[0x3d] = DAT_14c8464f8;
  param_2[0x3e] = uVar4;
  param_2[0x3f] = DAT_14c846508;
  uVar7 = DAT_14c846518._4_4_;
  uVar6 = (undefined4)DAT_14c846518;
  uVar5 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_2 + 0x40) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_2 + 0x204) = uVar5;
  *(undefined4 *)(param_2 + 0x41) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x20c) = uVar7;
  param_2[0x42] = DAT_14c846520;
  param_2[0x45] = 0;
  param_2[0x43] = 0;
  *(undefined2 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x46) = 0x10;
  param_2[0x49] = 0;
  param_2[0x48] = &PTR_FUN_14b023b20;
  param_2[0x4b] = &PTR_FUN_14b023b40;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = &PTR_FUN_14b00be70;
  *(undefined4 *)(param_2 + 0x50) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x52) = 0;
  *(undefined4 *)(param_2 + 0x53) = 0;
  *(undefined1 *)((longlong)param_2 + 0x29c) = 1;
  *(undefined4 *)(param_2 + 0x55) = 0xf00000d0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  *(undefined4 *)(param_2 + 0x58) = 0xf00000d0;
  *(undefined1 *)(param_2 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2d4) = 0;
  *(undefined1 *)((longlong)param_2 + 0x2d9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2dc) = 6;
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
  param_2[0x5d] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 0x5e) = 0;
  *(undefined4 *)(param_2 + 0x5f) = 0;
  *(undefined2 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x61) = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  *(undefined4 *)(param_2 + 0x68) = 0xf00000d0;
  param_2[0x69] = 0;
  *(undefined4 *)(param_2 + 0x6a) = 0x3f800000;
  param_2[0x6b] = 0;
  param_2[0x6c] = 0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  param_2[0x6f] = 0;
  param_2[0x70] = 0;
  param_2[0x71] = 0;
  param_2[0x72] = 0;
  param_2[0x73] = 0;
  return;
}



// FUNCTION 14409614e FUN_14409614e body=57 status=ok
// SIG undefined FUN_14409614e(void)

void FUN_14409614e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf5a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf5a0 = FUN_140002ddd(FUN_1466124f2,uVar1,L"ObjectiveTypeSettings_OakExchangeItem");
  }
  return;
}



// FUNCTION 14409623a FUN_14409623a body=57 status=ok
// SIG undefined FUN_14409623a(void)

void FUN_14409623a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf5e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf5e8 = FUN_140002ddd(FUN_14661267f,uVar1,L"ObjectiveTypeSettings_OakKill");
  }
  return;
}



// FUNCTION 1440962f6 FUN_1440962f6 body=57 status=ok
// SIG undefined FUN_1440962f6(void)

void FUN_1440962f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf630 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf630 = FUN_140002ddd(FUN_14661273c,uVar1,L"ObjectiveTypeSettings_OakLoot");
  }
  return;
}



// FUNCTION 14409633e FUN_14409633e body=141 status=ok
// SIG undefined FUN_14409633e(void)

void FUN_14409633e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xc0);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b910170;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb5) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbd) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  return;
}



// FUNCTION 1440963d8 FUN_1440963d8 body=57 status=ok
// SIG undefined FUN_1440963d8(void)

void FUN_1440963d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf648 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf648 = FUN_140002ddd(FUN_1466127d3,uVar1,L"ObjectiveTypeSettings_OakMigration");
  }
  return;
}



// FUNCTION 14409646c FUN_14409646c body=148 status=ok
// SIG undefined FUN_14409646c(void)

void FUN_14409646c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb8);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  *param_2 = &PTR_FUN_14b910670;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 14409650c FUN_14409650c body=57 status=ok
// SIG undefined FUN_14409650c(void)

void FUN_14409650c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf750 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf750 = FUN_140002ddd(FUN_1466128f2,uVar1,L"ObjectiveTypeSettings_OakPickup");
  }
  return;
}



// FUNCTION 144096554 FUN_144096554 body=151 status=ok
// SIG undefined FUN_144096554(void)

void FUN_144096554(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe8);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b910840;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0xe9) = 0;
  return;
}



// FUNCTION 1440965f0 FUN_1440965f0 body=57 status=ok
// SIG undefined FUN_1440965f0(void)

void FUN_1440965f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf768 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf768 = FUN_140002ddd(FUN_146612989,uVar1,L"ObjectiveTypeSettings_OakRevive");
  }
  return;
}



// FUNCTION 144096638 FUN_144096638 body=135 status=ok
// SIG undefined FUN_144096638(void)

void FUN_144096638(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7a) = 1;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0x44fa0000;
  param_2[0x16] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *param_2 = &PTR_FUN_14b910a00;
  return;
}



// FUNCTION 1440966cc FUN_1440966cc body=57 status=ok
// SIG undefined FUN_1440966cc(void)

void FUN_1440966cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf780 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf780 = FUN_140002ddd(FUN_146612a1f,uVar1,L"ObjectiveTypeSettings_OakTravel");
  }
  return;
}



// FUNCTION 144096764 FUN_144096764 body=133 status=ok
// SIG undefined FUN_144096764(void)

void FUN_144096764(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b911080;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  param_2[0xf] = 0;
  *(undefined8 *)((longlong)param_2 + 0x7e) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  return;
}



// FUNCTION 1440967f6 FUN_1440967f6 body=57 status=ok
// SIG undefined FUN_1440967f6(void)

void FUN_1440967f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf7e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf7e0 = FUN_140002ddd(FUN_146612c79,uVar1,L"ObjectiveTypeSettings_PlaceCarryable");
  }
  return;
}



// FUNCTION 14409683e FUN_14409683e body=73 status=ok
// SIG undefined FUN_14409683e(void)

void FUN_14409683e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x38) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0x3f800000;
  return;
}



// FUNCTION 14409689a FUN_14409689a body=57 status=ok
// SIG undefined FUN_14409689a(void)

void FUN_14409689a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf810 = FUN_140002ddd(FUN_146612da5,uVar1,L"OffsetFromHostLevelValueResolver");
  }
  return;
}



// FUNCTION 1440968e2 FUN_1440968e2 body=2393 status=ok
// SIG undefined FUN_1440968e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440968e2(void)

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
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b908070;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9080c0,2,&PTR_FUN_14b908090);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf368 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b908680,1,&PTR_FUN_14b908650);
  _DAT_14cbbf3a0 = 0x47efffffe0000000;
  _DAT_14cbbf3a8 = 0x47efffffe0000000;
  _DAT_14cbbf3b0 = 0x47efffffe0000000;
  _DAT_14cbbf3b8 = 0x47efffffe0000000;
  _DAT_14cbbf3c0 = 0x47efffffe0000000;
  _DAT_14cbbf3c8 = 0x47efffffe0000000;
  _DAT_14cbbf3d0 = 0x47efffffe0000000;
  _DAT_14cbbf3d8 = 0x47efffffe0000000;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b908b30,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b908d00;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b908d20);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b90a110;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b90a180,1,&PTR_FUN_14b90a150);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90a290);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90a470);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90a750);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90a9f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90aae0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90acd0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90aea0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90b070);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90b140);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90b2a0);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b90b6f0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90b730);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90b9f0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cbbf658);
  if (cVar1 == '\0') {
    _DAT_14cbbf658 = 0;
    uRam000000014cbbf660 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf66c = 0;
  FUN_14052b5e0(&DAT_14cbbf668,"PlayerAwareness",0);
  _DAT_14cbbf678 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf680 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf688 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf690 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf698 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6a0 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6a8 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6b0 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6b8 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6c0 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6c8 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6d0 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6d8 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6e0 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6e8 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6f0 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf6f8 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf700 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf708 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf710 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90bd90);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90bf80);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90c040);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90c650);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90ca20);
  local_60 = "Cash";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cbbf820 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbbf828,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144095644);
  FUN_1446f470e(&DAT_14cbbf838,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbbf840,L"Party",1);
  FUN_1446f470e(&DAT_14cbbf848,&DAT_149e063b2,1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b90cf10,1,0);
  uStack_68 = 3;
  ppuStack_70 = &PTR_FUN_14b90d7f0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b90d850);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b90de20,1,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409723c FUN_14409723c body=55 status=ok
// SIG undefined FUN_14409723c(void)

void FUN_14409723c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf970 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf970 = FUN_14171c317(FUN_146613700,uVar1,L"EPingActivationState");
  }
  return;
}



// FUNCTION 144097273 FUN_144097273 body=55 status=ok
// SIG undefined FUN_144097273(void)

void FUN_144097273(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfb40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfb40 = FUN_14171c317(FUN_146613df0,uVar1,L"EPoAActorClaimPhase");
  }
  return;
}



// FUNCTION 1440972aa FUN_1440972aa body=55 status=ok
// SIG undefined FUN_1440972aa(void)

void FUN_1440972aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfb58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfb58 = FUN_14171c317(FUN_146613e1f,uVar1,L"EPoAActorPhase");
  }
  return;
}



// FUNCTION 1440972e1 FUN_1440972e1 body=55 status=ok
// SIG undefined FUN_1440972e1(void)

void FUN_1440972e1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfc30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfc30 = FUN_14171c317(FUN_1466141d2,uVar1,L"ERecentPlayerDamageFlags");
  }
  return;
}



// FUNCTION 144097318 FUN_144097318 body=55 status=ok
// SIG undefined FUN_144097318(void)

void FUN_144097318(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfcc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfcc0 = FUN_14171c317(FUN_1466144f2,uVar1,L"EAtt_RepairKit");
  }
  return;
}



// FUNCTION 144097350 FUN_144097350 body=48 status=ok
// SIG undefined FUN_144097350(void)

longlong FUN_144097350(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097380 FUN_144097380 body=48 status=ok
// SIG undefined FUN_144097380(void)

longlong FUN_144097380(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440973b0 FUN_1440973b0 body=48 status=ok
// SIG undefined FUN_1440973b0(void)

longlong FUN_1440973b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440973e0 FUN_1440973e0 body=48 status=ok
// SIG undefined FUN_1440973e0(void)

longlong FUN_1440973e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097410 FUN_144097410 body=48 status=ok
// SIG undefined FUN_144097410(void)

longlong FUN_144097410(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097440 FUN_144097440 body=48 status=ok
// SIG undefined FUN_144097440(void)

longlong FUN_144097440(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097470 FUN_144097470 body=48 status=ok
// SIG undefined FUN_144097470(void)

longlong FUN_144097470(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440974a0 FUN_1440974a0 body=48 status=ok
// SIG undefined FUN_1440974a0(void)

longlong FUN_1440974a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440974d0 FUN_1440974d0 body=48 status=ok
// SIG undefined FUN_1440974d0(void)

longlong FUN_1440974d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141284692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097504 FUN_144097504 body=48 status=ok
// SIG undefined FUN_144097504(void)

longlong FUN_144097504(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097534 FUN_144097534 body=48 status=ok
// SIG undefined FUN_144097534(void)

longlong FUN_144097534(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097564 FUN_144097564 body=48 status=ok
// SIG undefined FUN_144097564(void)

longlong FUN_144097564(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097594 FUN_144097594 body=48 status=ok
// SIG undefined FUN_144097594(void)

longlong FUN_144097594(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145d73182(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144097624 FUN_144097624 body=57 status=ok
// SIG undefined FUN_144097624(void)

void FUN_144097624(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf9c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf9c8 = FUN_140002ddd(FUN_1466137dc,uVar1,L"PlaceableActorDef");
  }
  return;
}



// FUNCTION 14409767a FUN_14409767a body=57 status=ok
// SIG undefined FUN_14409767a(void)

void FUN_14409767a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf9f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf9f8 = FUN_140002ddd(FUN_146613909,uVar1,L"PlayerBaseLuckResolver");
  }
  return;
}



// FUNCTION 1440976d0 FUN_1440976d0 body=57 status=ok
// SIG undefined FUN_1440976d0(void)

void FUN_1440976d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfa80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfa80 = FUN_140002ddd(FUN_146613a35,uVar1,L"PlayerDifficultyDataTableValueResolver");
  }
  return;
}



// FUNCTION 144097822 FUN_144097822 body=173 status=ok
// SIG undefined FUN_144097822(void)

void FUN_144097822(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 2,0,0xf8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b91a3d0;
  *(undefined4 *)(param_2 + 4) = 0x4000;
  *(undefined1 *)(param_2 + 6) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[7] = DAT_14c8464e0;
  param_2[8] = uVar1;
  param_2[9] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  param_2[10] = DAT_14c8464f8;
  param_2[0xb] = uVar1;
  param_2[0xc] = DAT_14c846508;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0xffffffff00000080;
  param_2[0x15] = 0;
  param_2[0x1b] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0xffffffff00000080;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 1440978d4 FUN_1440978d4 body=57 status=ok
// SIG undefined FUN_1440978d4(void)

void FUN_1440978d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfba0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfba0 = FUN_140002ddd(FUN_146613f4c,uVar1,L"PoAActorDef");
  }
  return;
}



// FUNCTION 144097970 FUN_144097970 body=39 status=ok
// SIG undefined FUN_144097970(void)

undefined8 FUN_144097970(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144097a24 FUN_144097a24 body=129 status=ok
// SIG undefined FUN_144097a24(void)

void FUN_144097a24(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xd0);
  *param_2 = &PTR_FUN_14b91b900;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined2 *)(param_2 + 0x1a) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 144097ab2 FUN_144097ab2 body=57 status=ok
// SIG undefined FUN_144097ab2(void)

void FUN_144097ab2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfd78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfd78 = FUN_140002ddd(FUN_146614895,uVar1,L"RepairKitAudioAspect");
  }
  return;
}



// FUNCTION 144097b26 FUN_144097b26 body=1104 status=ok
// SIG undefined FUN_144097b26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144097b26(void)

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
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b912740,1,&PTR_FUN_14b9126f0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbbf948 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9127e0);
  FUN_14098d3d2(FUN_14409723c,L"/Script/OakGame",L"EPingActivationState",&DAT_14cbbf968);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbbf980);
  if (cVar1 == '\0') {
    _DAT_14cbbf980 = 0;
    uRam000000014cbbf988 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b913130,2,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b913520);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b913790);
  _DAT_14cbbfa08 = 0x47efffffe0000000;
  _DAT_14cbbfa10 = 0x47efffffe0000000;
  _DAT_14cbbfa18 = 0x47efffffe0000000;
  _DAT_14cbbfa20 = 0x47efffffe0000000;
  _DAT_14cbbfa28 = 0x47efffffe0000000;
  _DAT_14cbbfa30 = 0x47efffffe0000000;
  _DAT_14cbbfa38 = 0x47efffffe0000000;
  _DAT_14cbbfa40 = 0x47efffffe0000000;
  _DAT_14cbbfa4c = 0;
  FUN_14052b5e0(&DAT_14cbbfa48,"PlayerAwareness",0);
  _DAT_14cbbfa58 = "PlayerAwareness";
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9138c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b913ad0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b913c20);
  _DAT_14cbbfaac = 0;
  FUN_14052b5e0(&DAT_14cbbfaa8,"State",0);
  _DAT_14cbbfab8 = "State";
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b914170,1,&PTR_FUN_14b914140);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b9150a0;
  local_68 = 6;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9151d0,1,&PTR_FUN_14b9150e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b915570,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b915720);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b915820);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b915900);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b9171d0;
  local_68 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9171f0);
  FUN_1446f470e(&DAT_14cbbfd30,L"BroadcastEffect",1);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b918310;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9183b0,1,&PTR_FUN_14b918330);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b918650);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b918700);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9187b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b918890);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144097f7a FUN_144097f7a body=220 status=ok
// SIG undefined FUN_144097f7a(void)

longlong FUN_144097f7a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbfe78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_144098057;
    local_40 = FUN_14409805a;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x348;
    FUN_14081cfa3(L"/Script/OakGame",L"SharedProgressionConverter",&DAT_14cbbfe78,&DAT_144097f78);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbfe78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409805a FUN_14409805a body=551 status=ok
// SIG undefined FUN_14409805a(void)

void FUN_14409805a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b91f330;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1f] = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x10c) = 0;
  puVar1[0x23] = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[0x29] = 0;
  *(undefined4 *)(puVar1 + 0x2a) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x15c) = 0;
  puVar1[0x2d] = 0;
  *(undefined4 *)(puVar1 + 0x2e) = 0;
  puVar1[0x33] = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x1ac) = 0;
  puVar1[0x37] = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  puVar1[0x3f] = 0;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x20c) = 0;
  puVar1[0x43] = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  puVar1[0x49] = 0;
  *(undefined4 *)(puVar1 + 0x4a) = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x25c) = 0;
  puVar1[0x4d] = 0;
  *(undefined4 *)(puVar1 + 0x4e) = 0;
  puVar1[0x53] = 0;
  *(undefined4 *)(puVar1 + 0x54) = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x2ac) = 0;
  puVar1[0x57] = 0;
  *(undefined4 *)(puVar1 + 0x58) = 0;
  puVar1[0x59] = 0;
  *(undefined4 *)(puVar1 + 0x5a) = 0;
  puVar1[0x5b] = 0;
  *(undefined4 *)(puVar1 + 0x5c) = 0;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  puVar1[0x5f] = 0;
  puVar1[0x60] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  *(undefined4 *)(puVar1 + 99) = 0xffff;
  *(undefined4 *)(puVar1 + 0x68) = 0;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  puVar1[100] = 0;
  puVar1[0x65] = 0;
  return;
}



// FUNCTION 144098287 FUN_144098287 body=47 status=ok
// SIG undefined FUN_144098287(void)

longlong FUN_144098287(void)

{
  if (DAT_14cbbfe80 == 0) {
    FUN_14073dd9a(&DAT_14cbbfe80,&PTR_LAB_14b91f2e8);
  }
  return DAT_14cbbfe80;
}



// FUNCTION 1440982b6 FUN_1440982b6 body=55 status=ok
// SIG undefined FUN_1440982b6(void)

void FUN_1440982b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff20 = FUN_14171c317(FUN_14661550a,uVar1,L"EChargeMeterFillCondition");
  }
  return;
}



// FUNCTION 1440982ed FUN_1440982ed body=55 status=ok
// SIG undefined FUN_1440982ed(void)

void FUN_1440982ed(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff50 = FUN_14171c317(FUN_1466155d0,uVar1,L"EAugmentModifierVariation");
  }
  return;
}



// FUNCTION 144098324 FUN_144098324 body=55 status=ok
// SIG undefined FUN_144098324(void)

void FUN_144098324(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfff8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfff8 = FUN_14171c317(FUN_14661594e,uVar1,L"EShieldState");
  }
  return;
}



// FUNCTION 14409835b FUN_14409835b body=55 status=ok
// SIG undefined FUN_14409835b(void)

void FUN_14409835b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0010 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0010 = FUN_14171c317(FUN_146615352,uVar1,L"EShieldHealthSystem");
  }
  return;
}



// FUNCTION 144098392 FUN_144098392 body=55 status=ok
// SIG undefined FUN_144098392(void)

void FUN_144098392(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0028 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0028 = FUN_14171c317(FUN_14661597d,uVar1,L"EShieldAugmentEvent");
  }
  return;
}



// FUNCTION 1440983c9 FUN_1440983c9 body=55 status=ok
// SIG undefined FUN_1440983c9(void)

void FUN_1440983c9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0158 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0158 = FUN_14171c317(FUN_146615c1c,uVar1,L"EGlyphType");
  }
  return;
}



// FUNCTION 144098400 FUN_144098400 body=47 status=ok
// SIG undefined FUN_144098400(void)

longlong FUN_144098400(void)

{
  if (DAT_14cbc0278 == 0) {
    FUN_14000fc22(&DAT_14cbc0278,&PTR_FUN_14b9295a0);
  }
  return DAT_14cbc0278;
}



// FUNCTION 144098430 FUN_144098430 body=721 status=ok
// SIG undefined FUN_144098430(void)

void FUN_144098430(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_1440985fd;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
LAB_1440985fd:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14422b0c6(local_28);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144098702 FUN_144098702 body=47 status=ok
// SIG undefined FUN_144098702(void)

longlong FUN_144098702(void)

{
  if (DAT_14cbc0280 == 0) {
    FUN_14000fc22(&DAT_14cbc0280,&PTR_FUN_14b929660);
  }
  return DAT_14cbc0280;
}



// FUNCTION 144098732 FUN_144098732 body=721 status=ok
// SIG undefined FUN_144098732(void)

void FUN_144098732(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_1440988ff;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
LAB_1440988ff:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14422b134(local_28);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144098a04 FUN_144098a04 body=48 status=ok
// SIG undefined FUN_144098a04(void)

longlong FUN_144098a04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098a34 FUN_144098a34 body=48 status=ok
// SIG undefined FUN_144098a34(void)

longlong FUN_144098a34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098a64 FUN_144098a64 body=48 status=ok
// SIG undefined FUN_144098a64(void)

longlong FUN_144098a64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098a94 FUN_144098a94 body=48 status=ok
// SIG undefined FUN_144098a94(void)

longlong FUN_144098a94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098ac4 FUN_144098ac4 body=48 status=ok
// SIG undefined FUN_144098ac4(void)

longlong FUN_144098ac4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098af4 FUN_144098af4 body=48 status=ok
// SIG undefined FUN_144098af4(void)

longlong FUN_144098af4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098b24 FUN_144098b24 body=48 status=ok
// SIG undefined FUN_144098b24(void)

longlong FUN_144098b24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098b54 FUN_144098b54 body=48 status=ok
// SIG undefined FUN_144098b54(void)

longlong FUN_144098b54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098b84 FUN_144098b84 body=48 status=ok
// SIG undefined FUN_144098b84(void)

longlong FUN_144098b84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141027ec8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144098bb4 FUN_144098bb4 body=1226 status=ok
// SIG undefined FUN_144098bb4(void)

undefined8 * FUN_144098bb4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  *param_1 = &PTR_FUN_14b91f330;
  plVar6 = param_1 + 0x67;
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar5 = (undefined8 *)*plVar6;
    if (puVar5 == (undefined8 *)0x0) goto LAB_144098c1d;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar6,0,0,0x10);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*plVar6 != 0) {
    FUN_1400020a8();
  }
LAB_144098c1d:
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_14409a989(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  plVar6 = param_1 + 0x4f;
  puVar3 = (uint *)(param_1 + 0x51);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
    uVar18 = 0;
    uVar16 = 1;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[0x53];
    if ((uint *)param_1[0x53] == (uint *)0x0) {
      puVar11 = puVar3;
    }
    uVar17 = *puVar11;
    if (uVar17 == 0) {
      iVar14 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar14 = iVar4 + -1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_144098e13;
        iVar14 = iVar14 + 0x20;
        uVar17 = puVar11[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar12 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar10) {
      iVar10 = iVar4;
    }
  }
  if (iVar10 < iVar4) {
    uVar17 = 0xffffffff;
    do {
      lVar15 = *plVar6;
      lVar13 = (longlong)iVar10 * 0x80;
      *(undefined4 *)(lVar15 + 0x70 + lVar13) = 0;
      if (*(longlong *)(lVar15 + 0x68 + lVar13) != 0) {
        FUN_1400020a8();
      }
      FUN_1402d9776(lVar15 + lVar13 + 0x28);
      if (*(longlong *)(lVar15 + lVar13 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar11 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar11 = puVar3;
      }
      iVar4 = *(int *)(param_1 + 0x54);
      iVar10 = (int)uVar18;
      lVar15 = (longlong)iVar10;
      uVar7 = puVar11[lVar15] & uVar17;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar8 <= iVar10) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar11[lVar15 + lVar13 + 1];
          if (uVar7 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar15 == lVar13) goto LAB_144098e13;
        }
        uVar18 = (ulonglong)(iVar10 + (int)lVar13 + 1);
        uVar17 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar12 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar4);
  }
LAB_144098e13:
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)((longlong)param_1 + 0x284) != 0) {
    FUN_14095c99c(plVar6,0);
  }
  param_1[0x55] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2a4)) {
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (*plVar6 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6ef66(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144099aa4(param_1 + 0x3b,0);
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6ef66(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_144099c94(param_1 + 0x25,0);
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14409a0f0(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14409a0f0(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14409a350(param_1 + 7,0);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409907e FUN_14409907e body=48 status=ok
// SIG undefined FUN_14409907e(void)

longlong FUN_14409907e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440990ae FUN_1440990ae body=48 status=ok
// SIG undefined FUN_1440990ae(void)

longlong FUN_1440990ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440990de FUN_1440990de body=48 status=ok
// SIG undefined FUN_1440990de(void)

longlong FUN_1440990de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409910e FUN_14409910e body=48 status=ok
// SIG undefined FUN_14409910e(void)

longlong FUN_14409910e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145ae0748(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099156 FUN_144099156 body=48 status=ok
// SIG undefined FUN_144099156(void)

longlong FUN_144099156(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099186 FUN_144099186 body=48 status=ok
// SIG undefined FUN_144099186(void)

longlong FUN_144099186(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440991b6 FUN_1440991b6 body=48 status=ok
// SIG undefined FUN_1440991b6(void)

longlong FUN_1440991b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440991e6 FUN_1440991e6 body=48 status=ok
// SIG undefined FUN_1440991e6(void)

longlong FUN_1440991e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409921e FUN_14409921e body=48 status=ok
// SIG undefined FUN_14409921e(void)

longlong FUN_14409921e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1870;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099256 FUN_144099256 body=48 status=ok
// SIG undefined FUN_144099256(void)

longlong FUN_144099256(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1878;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409928e FUN_14409928e body=48 status=ok
// SIG undefined FUN_14409928e(void)

longlong FUN_14409928e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1880;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440992ce FUN_1440992ce body=48 status=ok
// SIG undefined FUN_1440992ce(void)

longlong FUN_1440992ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1d10;
  FUN_1461d9fba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409930a FUN_14409930a body=48 status=ok
// SIG undefined FUN_14409930a(void)

longlong FUN_14409930a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409933a FUN_14409933a body=48 status=ok
// SIG undefined FUN_14409933a(void)

longlong FUN_14409933a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409936a FUN_14409936a body=48 status=ok
// SIG undefined FUN_14409936a(void)

longlong FUN_14409936a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409939a FUN_14409939a body=48 status=ok
// SIG undefined FUN_14409939a(void)

longlong FUN_14409939a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440993ca FUN_1440993ca body=48 status=ok
// SIG undefined FUN_1440993ca(void)

longlong FUN_1440993ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440993fa FUN_1440993fa body=48 status=ok
// SIG undefined FUN_1440993fa(void)

longlong FUN_1440993fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409942a FUN_14409942a body=48 status=ok
// SIG undefined FUN_14409942a(void)

longlong FUN_14409942a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409945a FUN_14409945a body=48 status=ok
// SIG undefined FUN_14409945a(void)

longlong FUN_14409945a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409948a FUN_14409948a body=48 status=ok
// SIG undefined FUN_14409948a(void)

longlong FUN_14409948a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_145888ac2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440994c4 FUN_1440994c4 body=48 status=ok
// SIG undefined FUN_1440994c4(void)

longlong FUN_1440994c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440994f4 FUN_1440994f4 body=48 status=ok
// SIG undefined FUN_1440994f4(void)

longlong FUN_1440994f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099524 FUN_144099524 body=48 status=ok
// SIG undefined FUN_144099524(void)

longlong FUN_144099524(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099554 FUN_144099554 body=48 status=ok
// SIG undefined FUN_144099554(void)

longlong FUN_144099554(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099584 FUN_144099584 body=48 status=ok
// SIG undefined FUN_144099584(void)

longlong FUN_144099584(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440995b4 FUN_1440995b4 body=48 status=ok
// SIG undefined FUN_1440995b4(void)

longlong FUN_1440995b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440995e4 FUN_1440995e4 body=48 status=ok
// SIG undefined FUN_1440995e4(void)

longlong FUN_1440995e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099614 FUN_144099614 body=48 status=ok
// SIG undefined FUN_144099614(void)

longlong FUN_144099614(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099644 FUN_144099644 body=48 status=ok
// SIG undefined FUN_144099644(void)

longlong FUN_144099644(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_141052174(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099674 FUN_144099674 body=48 status=ok
// SIG undefined FUN_144099674(void)

longlong FUN_144099674(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440996a4 FUN_1440996a4 body=48 status=ok
// SIG undefined FUN_1440996a4(void)

longlong FUN_1440996a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440996d4 FUN_1440996d4 body=48 status=ok
// SIG undefined FUN_1440996d4(void)

longlong FUN_1440996d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099704 FUN_144099704 body=48 status=ok
// SIG undefined FUN_144099704(void)

longlong FUN_144099704(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099734 FUN_144099734 body=48 status=ok
// SIG undefined FUN_144099734(void)

longlong FUN_144099734(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099764 FUN_144099764 body=48 status=ok
// SIG undefined FUN_144099764(void)

longlong FUN_144099764(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099794 FUN_144099794 body=48 status=ok
// SIG undefined FUN_144099794(void)

longlong FUN_144099794(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440997c4 FUN_1440997c4 body=48 status=ok
// SIG undefined FUN_1440997c4(void)

longlong FUN_1440997c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440997f4 FUN_1440997f4 body=48 status=ok
// SIG undefined FUN_1440997f4(void)

longlong FUN_1440997f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_1412df528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099824 FUN_144099824 body=48 status=ok
// SIG undefined FUN_144099824(void)

longlong FUN_144099824(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1458ecc12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099854 FUN_144099854 body=48 status=ok
// SIG undefined FUN_144099854(void)

longlong FUN_144099854(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1458ecc12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099884 FUN_144099884 body=48 status=ok
// SIG undefined FUN_144099884(void)

longlong FUN_144099884(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440998b4 FUN_1440998b4 body=48 status=ok
// SIG undefined FUN_1440998b4(void)

longlong FUN_1440998b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440998e4 FUN_1440998e4 body=48 status=ok
// SIG undefined FUN_1440998e4(void)

longlong FUN_1440998e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099914 FUN_144099914 body=48 status=ok
// SIG undefined FUN_144099914(void)

longlong FUN_144099914(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099944 FUN_144099944 body=48 status=ok
// SIG undefined FUN_144099944(void)

longlong FUN_144099944(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099974 FUN_144099974 body=48 status=ok
// SIG undefined FUN_144099974(void)

longlong FUN_144099974(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440999a4 FUN_1440999a4 body=48 status=ok
// SIG undefined FUN_1440999a4(void)

longlong FUN_1440999a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440999d4 FUN_1440999d4 body=48 status=ok
// SIG undefined FUN_1440999d4(void)

longlong FUN_1440999d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099a04 FUN_144099a04 body=48 status=ok
// SIG undefined FUN_144099a04(void)

longlong FUN_144099a04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_145bcc354(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144099a34 FUN_144099a34 body=57 status=ok
// SIG undefined FUN_144099a34(void)

void FUN_144099a34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfe08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfe08 = FUN_140002ddd(FUN_146614ff2,uVar1,L"ResurrectTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 144099aa4 FUN_144099aa4 body=494 status=ok
// SIG undefined FUN_144099aa4(void)

void FUN_144099aa4(longlong *param_1,int param_2)

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
        if (uVar14 == uVar13) goto LAB_144099c00;
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
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar4 * 0x28) != 0) {
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
          if (iVar7 - lVar11 == lVar9) goto LAB_144099c00;
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
LAB_144099c00:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 144099c94 FUN_144099c94 body=552 status=ok
// SIG undefined FUN_144099c94(void)

void FUN_144099c94(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
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
      iVar9 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_144099e22;
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar4 * 0x80;
      *(undefined4 *)(lVar11 + 0x70 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x68 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_144099ebe(lVar11 + lVar10 + 0x28);
      if (*(longlong *)(lVar11 + lVar10 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
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
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar8[lVar11 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar11 == lVar10) goto LAB_144099e22;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_144099e22:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14095c99c(param_1,param_2);
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



// FUNCTION 144099ebe FUN_144099ebe body=54 status=ok
// SIG undefined FUN_144099ebe(void)

void FUN_144099ebe(longlong *param_1)

{
  FUN_144099ef4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144099ef4 FUN_144099ef4 body=507 status=ok
// SIG undefined FUN_144099ef4(void)

void FUN_144099ef4(longlong *param_1,int param_2)

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
        if (uVar14 == uVar13) goto LAB_14409a05b;
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
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar4 * 0x48) != 0) {
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
          if (iVar7 - lVar11 == lVar9) goto LAB_14409a05b;
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
LAB_14409a05b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
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



// FUNCTION 14409a0f0 FUN_14409a0f0 body=54 status=ok
// SIG undefined FUN_14409a0f0(void)

void FUN_14409a0f0(longlong *param_1)

{
  FUN_14409a126(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14409a126 FUN_14409a126 body=552 status=ok
// SIG undefined FUN_14409a126(void)

void FUN_14409a126(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
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
      iVar9 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_14409a2b4;
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar4 * 0x80;
      *(undefined4 *)(lVar11 + 0x70 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x68 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_140c64cae(lVar11 + lVar10 + 0x28);
      if (*(longlong *)(lVar11 + lVar10 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
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
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar8[lVar11 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar11 == lVar10) goto LAB_14409a2b4;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_14409a2b4:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14095c99c(param_1,param_2);
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



// FUNCTION 14409a350 FUN_14409a350 body=505 status=ok
// SIG undefined FUN_14409a350(void)

void FUN_14409a350(longlong *param_1,int param_2)

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
        if (uVar14 == uVar13) goto LAB_14409a4b7;
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
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar4 * 0x38) != 0) {
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
          if (iVar7 - lVar11 == lVar9) goto LAB_14409a4b7;
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
LAB_14409a4b7:
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



// FUNCTION 14409a558 FUN_14409a558 body=57 status=ok
// SIG undefined FUN_14409a558(void)

void FUN_14409a558(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfef0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfef0 = FUN_140002ddd(FUN_146615415,uVar1,L"ShieldArmorAspect");
  }
  return;
}



// FUNCTION 14409a5d4 FUN_14409a5d4 body=125 status=ok
// SIG undefined FUN_14409a5d4(void)

void FUN_14409a5d4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  *(undefined4 *)((longlong)param_2 + 0x60) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x100) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x110) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x118) = 0xffffffff;
  return;
}



// FUNCTION 14409a67c FUN_14409a67c body=57 status=ok
// SIG undefined FUN_14409a67c(void)

void FUN_14409a67c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff98 = FUN_140002ddd(FUN_146615763,uVar1,L"ShieldHealthAspect");
  }
  return;
}



// FUNCTION 14409a6d0 FUN_14409a6d0 body=57 status=ok
// SIG undefined FUN_14409a6d0(void)

void FUN_14409a6d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbffb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbffb0 = FUN_140002ddd(FUN_1466157f9,uVar1,L"ShieldOnScreenFXAspect");
  }
  return;
}



// FUNCTION 14409a718 FUN_14409a718 body=57 status=ok
// SIG undefined FUN_14409a718(void)

void FUN_14409a718(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbffc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbffc8 = FUN_140002ddd(FUN_146615858,uVar1,L"ShieldStatsContainer");
  }
  return;
}



// FUNCTION 14409a77a FUN_14409a77a body=57 status=ok
// SIG undefined FUN_14409a77a(void)

void FUN_14409a77a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc00e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc00e0 = FUN_140002ddd(FUN_146615b59,uVar1,L"SiloBaseObjectDef");
  }
  return;
}



// FUNCTION 14409a7ea FUN_14409a7ea body=57 status=ok
// SIG undefined FUN_14409a7ea(void)

void FUN_14409a7ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc01d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc01d8 = FUN_140002ddd(FUN_146615e6d,uVar1,L"SoloTravelStationObjectDef");
  }
  return;
}



// FUNCTION 14409a832 FUN_14409a832 body=259 status=ok
// SIG undefined FUN_14409a832(void)

void FUN_14409a832(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x110);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b92dab0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined2 *)(param_2 + 10) = 4;
  *(undefined4 *)(param_2 + 7) = 1;
  *(undefined1 *)(param_2 + 0xb) = 2;
  *(byte *)(param_2 + 0xc) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_2[0xd] = 0;
  *(undefined2 *)(param_2 + 0x11) = 4;
  *(undefined4 *)(param_2 + 0xe) = 1;
  *(undefined1 *)(param_2 + 0x12) = 2;
  *(byte *)(param_2 + 0x13) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_2[0x14] = 0;
  *(undefined2 *)(param_2 + 0x18) = 4;
  *(undefined4 *)(param_2 + 0x15) = 0x447a0000;
  *(undefined1 *)(param_2 + 0x19) = 3;
  *(char *)(param_2 + 0x1a) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x1c] = 0;
  *(undefined2 *)(param_2 + 0x20) = 4;
  *(undefined4 *)(param_2 + 0x1d) = 0x3f000000;
  *(undefined1 *)(param_2 + 0x21) = 3;
  *(char *)(param_2 + 0x22) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_2 + 0x23) = 0;
  return;
}



// FUNCTION 14409a936 FUN_14409a936 body=57 status=ok
// SIG undefined FUN_14409a936(void)

void FUN_14409a936(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc01f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc01f0 = FUN_140002ddd(FUN_146615ecc,uVar1,L"SpawnerStyleDef_OakTown");
  }
  return;
}



// FUNCTION 14409a989 FUN_14409a989 body=47 status=ok
// SIG undefined FUN_14409a989(void)

void FUN_14409a989(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14409a9b8 FUN_14409a9b8 body=1536 status=ok
// SIG undefined FUN_14409a9b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14409a9b8(void)

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
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbbfdd0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbbfdd8);
  if (cVar1 == '\0') {
    _DAT_14cbbfdd8 = 0;
    uRam000000014cbbfde0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b91eb20,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b91edb0,1,&PTR_FUN_14b91ed60);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b91ee70);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b91f1b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b91f5d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b920200,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b920690);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b920750);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b920b30;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b920b50);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b921130;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b921150);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9214a0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9217a0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b921840);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9218d0);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b921aa0 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b921aa8 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b921ab0 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x70);
  local_50 = "Use";
  local_48 = 3;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0038 = (ulonglong)uVar2;
  local_50 = "Sight";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0040 = (ulonglong)uVar2;
  local_50 = "TargetLock";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0048 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b921ca0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b923980,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9240e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b924cf0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b925f90,1,0);
  FUN_1446f470e(&DAT_14cbc012c,L"UNSET",1);
  local_50 = "state_rem";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0138 = (ulonglong)uVar2;
  local_50 = "state_add";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0140 = (ulonglong)uVar2;
  local_50 = "state_remove_primary";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0148 = (ulonglong)uVar2;
  FUN_14098d3d2(FUN_1440983c9,L"/Script/OakGame",L"EGlyphType",&DAT_14cbc0150);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9271c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b927770,1,&PTR_FUN_14b927720);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b927830);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b927fe0,1,&PTR_FUN_14b927fb0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9283d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b928d80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b928e50,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b929510);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b929b90,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409afbc FUN_14409afbc body=55 status=ok
// SIG undefined FUN_14409afbc(void)

void FUN_14409afbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0338 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0338 = FUN_14171c317(FUN_14661687e,uVar1,L"ETerminalBehaviorType");
  }
  return;
}



// FUNCTION 14409aff3 FUN_14409aff3 body=55 status=ok
// SIG undefined FUN_14409aff3(void)

void FUN_14409aff3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0350 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0350 = FUN_14171c317(FUN_1466168ad,uVar1,L"ETerminalAugmentExecutionType");
  }
  return;
}



// FUNCTION 14409b02f FUN_14409b02f body=47 status=ok
// SIG undefined FUN_14409b02f(void)

longlong FUN_14409b02f(void)

{
  if (DAT_14cbc04b0 == 0) {
    FUN_14000fc22(&DAT_14cbc04b0,&PTR_FUN_14b933238);
  }
  return DAT_14cbc04b0;
}



// FUNCTION 14409b07a FUN_14409b07a body=55 status=ok
// SIG undefined FUN_14409b07a(void)

void FUN_14409b07a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0570 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0570 = FUN_140002ddd(FUN_14409b0b1,uVar1,L"TrueActivityMissionDef");
  }
  return;
}



// FUNCTION 14409b0b1 FUN_14409b0b1 body=47 status=ok
// SIG undefined FUN_14409b0b1(void)

longlong FUN_14409b0b1(void)

{
  if (DAT_14cbc0568 == 0) {
    FUN_14086a14e(&DAT_14cbc0568,&PTR_FUN_14b933f78);
  }
  return DAT_14cbc0568;
}



// FUNCTION 14409b0e0 FUN_14409b0e0 body=48 status=ok
// SIG undefined FUN_14409b0e0(void)

void FUN_14409b0e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000880;
  *puVar1 = &PTR_FUN_14b9389f0;
  return;
}



// FUNCTION 14409b110 FUN_14409b110 body=55 status=ok
// SIG undefined FUN_14409b110(void)

void FUN_14409b110(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc05a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc05a0 = FUN_14171c317(FUN_1466172a0,uVar1,L"EAtt_TurretGadget");
  }
  return;
}



// FUNCTION 14409b147 FUN_14409b147 body=55 status=ok
// SIG undefined FUN_14409b147(void)

void FUN_14409b147(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc05f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc05f8 = FUN_14171c317(FUN_1466173b0,uVar1,L"ETurretDeployType");
  }
  return;
}



// FUNCTION 14409b1a0 FUN_14409b1a0 body=282 status=ok
// SIG undefined FUN_14409b1a0(void)

void FUN_14409b1a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b9359d0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x44) = 0xff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x7c) = 0xff;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xb4) = 0xff;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 2;
  *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf4) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x104) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10c) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0x132) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x13a) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar1 + 300) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x144) = 0xffffffffffffffff;
  puVar1[0x2c] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  return;
}



// FUNCTION 14409b2cb FUN_14409b2cb body=47 status=ok
// SIG undefined FUN_14409b2cb(void)

longlong FUN_14409b2cb(void)

{
  if (DAT_14cbc08a0 == 0) {
    FUN_14000fc22(&DAT_14cbc08a0,&PTR_FUN_14b936d80);
  }
  return DAT_14cbc08a0;
}



// FUNCTION 14409b2fa FUN_14409b2fa body=796 status=ok
// SIG undefined FUN_14409b2fa(void)

void FUN_14409b2fa(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
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
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_14409b4da;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,&local_48);
    }
  }
LAB_14409b4da:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  uVar7 = FUN_14477b664(uStack_40);
  local_58 = FUN_14477b664(uVar7);
  local_50 = local_38;
  FUN_144337c7a(param_1,&local_60);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409b618 FUN_14409b618 body=132 status=ok
// SIG undefined FUN_14409b618(void)

void FUN_14409b618(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cbc08b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409b69d FUN_14409b69d body=47 status=ok
// SIG undefined FUN_14409b69d(void)

longlong FUN_14409b69d(void)

{
  if (DAT_14cbc08b8 == 0) {
    FUN_14000fc22(&DAT_14cbc08b8,&PTR_FUN_14b936eb8);
  }
  return DAT_14cbc08b8;
}



// FUNCTION 14409b6cc FUN_14409b6cc body=800 status=ok
// SIG undefined FUN_14409b6cc(void)

void FUN_14409b6cc(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
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
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_48);
            goto LAB_14409b8ac;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_48,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&local_48,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar3[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_48,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,&local_48);
    }
  }
LAB_14409b8ac:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  uVar7 = FUN_14477b664(uStack_40);
  local_58 = FUN_14477b664(uVar7);
  local_50 = local_38;
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_60);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409b9ee FUN_14409b9ee body=48 status=ok
// SIG undefined FUN_14409b9ee(void)

longlong FUN_14409b9ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409ba1e FUN_14409ba1e body=48 status=ok
// SIG undefined FUN_14409ba1e(void)

longlong FUN_14409ba1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409ba4e FUN_14409ba4e body=48 status=ok
// SIG undefined FUN_14409ba4e(void)

longlong FUN_14409ba4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409ba7e FUN_14409ba7e body=48 status=ok
// SIG undefined FUN_14409ba7e(void)

longlong FUN_14409ba7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145c404e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409baae FUN_14409baae body=48 status=ok
// SIG undefined FUN_14409baae(void)

longlong FUN_14409baae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bade FUN_14409bade body=48 status=ok
// SIG undefined FUN_14409bade(void)

longlong FUN_14409bade(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bb0e FUN_14409bb0e body=48 status=ok
// SIG undefined FUN_14409bb0e(void)

longlong FUN_14409bb0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bb3e FUN_14409bb3e body=48 status=ok
// SIG undefined FUN_14409bb3e(void)

longlong FUN_14409bb3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bb6e FUN_14409bb6e body=48 status=ok
// SIG undefined FUN_14409bb6e(void)

longlong FUN_14409bb6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bb9e FUN_14409bb9e body=48 status=ok
// SIG undefined FUN_14409bb9e(void)

longlong FUN_14409bb9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bbce FUN_14409bbce body=48 status=ok
// SIG undefined FUN_14409bbce(void)

longlong FUN_14409bbce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bbfe FUN_14409bbfe body=48 status=ok
// SIG undefined FUN_14409bbfe(void)

longlong FUN_14409bbfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bc2e FUN_14409bc2e body=48 status=ok
// SIG undefined FUN_14409bc2e(void)

longlong FUN_14409bc2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_14102816a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bc5e FUN_14409bc5e body=48 status=ok
// SIG undefined FUN_14409bc5e(void)

longlong FUN_14409bc5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14610a014(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bc8e FUN_14409bc8e body=48 status=ok
// SIG undefined FUN_14409bc8e(void)

longlong FUN_14409bc8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14610a014(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bcbe FUN_14409bcbe body=48 status=ok
// SIG undefined FUN_14409bcbe(void)

longlong FUN_14409bcbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_14610a014(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bcee FUN_14409bcee body=48 status=ok
// SIG undefined FUN_14409bcee(void)

longlong FUN_14409bcee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_14610a014(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409bd2c FUN_14409bd2c body=223 status=ok
// SIG undefined FUN_14409bd2c(void)

void FUN_14409bd2c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x1a8);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0xffffffff00000080;
  param_2[0xc] = 0;
  param_2[0x12] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0xffffffff00000080;
  param_2[0x16] = 0;
  param_2[0x1c] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0xffffffff00000080;
  param_2[0x20] = 0;
  param_2[0x26] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0xffffffff00000080;
  param_2[0x2a] = 0;
  param_2[0x30] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0xffffffff00000080;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x36) = 0;
  *param_2 = &PTR_FUN_14b937520;
  memset(param_2 + 0x37,0,0xa0);
  return;
}



// FUNCTION 14409be24 FUN_14409be24 body=57 status=ok
// SIG undefined FUN_14409be24(void)

void FUN_14409be24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc02f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc02f0 = FUN_140002ddd(FUN_1466166f1,uVar1,L"TaggedAnimDef_Oak");
  }
  return;
}



// FUNCTION 14409bf56 FUN_14409bf56 body=108 status=ok
// SIG undefined FUN_14409bf56(void)

void FUN_14409bf56(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xa0);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b938410;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  return;
}



// FUNCTION 14409bfce FUN_14409bfce body=57 status=ok
// SIG undefined FUN_14409bfce(void)

void FUN_14409bfce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0450 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0450 = FUN_140002ddd(FUN_146616d56,uVar1,L"TraitMissionDef");
  }
  return;
}



// FUNCTION 14409c040 FUN_14409c040 body=29 status=ok
// SIG undefined FUN_14409c040(void)

undefined8 FUN_14409c040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14409c06c FUN_14409c06c body=59 status=ok
// SIG undefined FUN_14409c06c(void)

void FUN_14409c06c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140af858e(param_2);
  *param_2 = &PTR_FUN_14b97be40;
  param_2[0x10b] = 0;
  param_2[0x10c] = 0;
  param_2[0x10d] = 0;
  param_2[0x10e] = 0;
  *(undefined4 *)(param_2 + 0x10f) = 0;
  return;
}



// FUNCTION 14409c0a8 FUN_14409c0a8 body=59 status=ok
// SIG undefined FUN_14409c0a8(void)

void FUN_14409c0a8(undefined8 param_1,undefined8 *param_2)

{
  FUN_140af858e(param_2);
  *param_2 = &PTR_FUN_14b97be40;
  param_2[0x10b] = 0;
  param_2[0x10c] = 0;
  param_2[0x10d] = 0;
  param_2[0x10e] = 0;
  *(undefined4 *)(param_2 + 0x10f) = 0;
  return;
}



// FUNCTION 14409c134 FUN_14409c134 body=59 status=ok
// SIG undefined FUN_14409c134(void)

undefined8 FUN_14409c134(longlong *param_1)

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



// FUNCTION 14409c180 FUN_14409c180 body=65 status=ok
// SIG undefined FUN_14409c180(void)

void FUN_14409c180(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    *param_2 = &PTR_FUN_14b7bcd40;
    if (param_2[0x101] != 0) {
      FUN_1400020a8();
    }
    FUN_140d79878(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14409c30c FUN_14409c30c body=57 status=ok
// SIG undefined FUN_14409c30c(void)

void FUN_14409c30c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0840 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0840 = FUN_140002ddd(FUN_146617a2b,uVar1,L"VaultCardExperienceDef");
  }
  return;
}



// FUNCTION 14409c34d FUN_14409c34d body=2846 status=ok
// SIG undefined FUN_14409c34d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14409c34d(void)

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
  FUN_1446f470e(&DAT_14cbc02a8,L"ClientSetCurrentInteractable",1);
  FUN_1446f470e(&DAT_14cbc02b8,L"ServerClearCurrentInteractable",1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b92f770,1,0);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc02e0 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b92f990);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b92fbb0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b930080);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14b930560;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9305a0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9307b0);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0390 = (ulonglong)uVar2;
  local_70 = "StopUse";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0398 = (ulonglong)uVar2;
  local_70 = "SecondaryUse";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc03a0 = (ulonglong)uVar2;
  local_70 = "StopSecondaryUse";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc03a8 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b931530,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b931a90,1,&PTR_FUN_14b931a40);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b931d50);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b932460,1,&PTR_FUN_14b932410);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b933080,1,0);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbc0490);
  if (cVar1 == '\0') {
    _DAT_14cbc0490 = 0;
    uRam000000014cbc0498 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9337b0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b933c90,1,&PTR_FUN_14b933c10);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b933e70);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b933fb0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9341f0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b935300;
  local_88 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b935320,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b935650;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b935670);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9357b0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9358d0);
  FUN_1400b22c2(&DAT_14cbc0650,"tint_siren");
  atexit((_func_5014 *)&LAB_14409b17e);
  FUN_1400b22c2(&DAT_14cbc0660,"tint_health");
  atexit((_func_5014 *)&LAB_14409b18f);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b935c70,1,0);
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0688 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0690 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0698 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06a0 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06a8 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06b0 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06b8 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06c0 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06c8 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06d0 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06d8 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06e0 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06e8 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06f0 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc06f8 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0700 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0708 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0710 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70);
  _DAT_14cbc0718 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b936100);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0768 = 0x47efffffe0000000;
  _DAT_14cbc0770 = 0x47efffffe0000000;
  _DAT_14cbc0778 = 0x47efffffe0000000;
  _DAT_14cbc0780 = 0x47efffffe0000000;
  _DAT_14cbc0788 = 0x47efffffe0000000;
  _DAT_14cbc0790 = 0x47efffffe0000000;
  _DAT_14cbc0798 = 0x47efffffe0000000;
  _DAT_14cbc07a0 = 0x47efffffe0000000;
  _DAT_14cbc07ac = 0;
  FUN_14052b5e0(&DAT_14cbc07a8,"PlayerAwareness",0);
  _DAT_14cbc07b8 = "PlayerAwareness";
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b936940,1,&PTR_FUN_14b9368a0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b936a50);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc0850 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc0858,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14409b2ba);
  FUN_1446f470e(&DAT_14cbc0868,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbc0870,L"Party",1);
  FUN_1446f470e(&DAT_14cbc0878,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbc0880,L"Client_OnPurchasedCosmetic",1);
  FUN_1446f470e(&DAT_14cbc0890,L"Client_OnPurchasedInventoryItem",1);
  FUN_1446f470e(&DAT_14cbc08b0,L"Server_ActivateVaultCard",1);
  FUN_1446f470e(&DAT_14cbc08c0,L"Server_PurchaseCosmetic",1);
  FUN_1446f470e(&DAT_14cbc08d0,L"Server_PurchaseInventoryItem",1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b937390,1,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409ce6c FUN_14409ce6c body=55 status=ok
// SIG undefined FUN_14409ce6c(void)

void FUN_14409ce6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc09b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc09b8 = FUN_14171c317(FUN_146618223,uVar1,L"EVaultCardDayOfWeek");
  }
  return;
}



// FUNCTION 14409cea3 FUN_14409cea3 body=55 status=ok
// SIG undefined FUN_14409cea3(void)

void FUN_14409cea3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0a08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0a08 = FUN_14171c317(FUN_146618348,uVar1,L"EVaultPowerLevel");
  }
  return;
}



// FUNCTION 14409ceda FUN_14409ceda body=55 status=ok
// SIG undefined FUN_14409ceda(void)

void FUN_14409ceda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0b28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0b28 = FUN_14171c317(FUN_146618914,uVar1,L"EMigrationWaypointAttachmentRule");
  }
  return;
}



// FUNCTION 14409cf11 FUN_14409cf11 body=55 status=ok
// SIG undefined FUN_14409cf11(void)

void FUN_14409cf11(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0bb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0bb8 = FUN_14171c317(FUN_146618bfc,uVar1,L"EAtt_WeaponBehaviorAtlasLock");
  }
  return;
}



// FUNCTION 14409cf48 FUN_14409cf48 body=55 status=ok
// SIG undefined FUN_14409cf48(void)

void FUN_14409cf48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0c00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0c00 = FUN_14171c317(FUN_146618d58,uVar1,L"EWeaponChargeState");
  }
  return;
}



// FUNCTION 14409cf7f FUN_14409cf7f body=55 status=ok
// SIG undefined FUN_14409cf7f(void)

void FUN_14409cf7f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0c30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0c30 = FUN_14171c317(FUN_146618e1e,uVar1,L"EWeaponChargeComparisonOperatorType");
  }
  return;
}



// FUNCTION 14409cfb6 FUN_14409cfb6 body=55 status=ok
// SIG undefined FUN_14409cfb6(void)

void FUN_14409cfb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0c48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0c48 = FUN_14171c317(FUN_146618e4d,uVar1,L"EWeaponChargeEventType");
  }
  return;
}



// FUNCTION 14409cfed FUN_14409cfed body=55 status=ok
// SIG undefined FUN_14409cfed(void)

void FUN_14409cfed(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0c78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0c78 = FUN_14171c317(FUN_146618f14,uVar1,L"EAtt_WeaponBehaviorCharge");
  }
  return;
}



// FUNCTION 14409d024 FUN_14409d024 body=55 status=ok
// SIG undefined FUN_14409d024(void)

void FUN_14409d024(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0cc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0cc0 = FUN_14171c317(FUN_1466190a0,uVar1,L"EAtt_WeaponBehaviorFireProjectile");
  }
  return;
}



// FUNCTION 14409d05b FUN_14409d05b body=55 status=ok
// SIG undefined FUN_14409d05b(void)

void FUN_14409d05b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0cf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0cf0 = FUN_14171c317(FUN_146619166,uVar1,L"EAtt_WeaponBehaviorOakFire");
  }
  return;
}



// FUNCTION 14409d092 FUN_14409d092 body=55 status=ok
// SIG undefined FUN_14409d092(void)

void FUN_14409d092(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d20 = FUN_14171c317(FUN_1466191fe,uVar1,L"EAtt_WeaponBehaviorStatusEffectModifier");
  }
  return;
}



// FUNCTION 14409d0c9 FUN_14409d0c9 body=55 status=ok
// SIG undefined FUN_14409d0c9(void)

void FUN_14409d0c9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d50 = FUN_14171c317(FUN_14661928c,uVar1,L"EAtt_WeaponBehaviorOakZoom");
  }
  return;
}



// FUNCTION 14409d100 FUN_14409d100 body=55 status=ok
// SIG undefined FUN_14409d100(void)

void FUN_14409d100(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d80 = FUN_14171c317(FUN_146619352,uVar1,L"EAtt_WeaponBehaviorOrderFireProjectile");
  }
  return;
}



// FUNCTION 14409d137 FUN_14409d137 body=55 status=ok
// SIG undefined FUN_14409d137(void)

void FUN_14409d137(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0dc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0dc8 = FUN_14171c317(FUN_1466194ae,uVar1,L"EAtt_WeaponBehaviorRepair");
  }
  return;
}



// FUNCTION 14409d16e FUN_14409d16e body=55 status=ok
// SIG undefined FUN_14409d16e(void)

void FUN_14409d16e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0de0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0de0 = FUN_14171c317(FUN_1466194dd,uVar1,L"EOverheatedShotResetMethod");
  }
  return;
}



// FUNCTION 14409d1b4 FUN_14409d1b4 body=79 status=ok
// SIG undefined FUN_14409d1b4(void)

undefined8 * FUN_14409d1b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14409d204(param_1,iVar1);
      FUN_14409d34b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14409d204 FUN_14409d204 body=327 status=ok
// SIG undefined FUN_14409d204(void)

void FUN_14409d204(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14409d272;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14409d272:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14409d34b FUN_14409d34b body=52 status=ok
// SIG undefined FUN_14409d34b(void)

void FUN_14409d34b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1457e3dd4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14409d410 FUN_14409d410 body=57 status=ok
// SIG undefined FUN_14409d410(void)

void FUN_14409d410(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0b88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0b88 = FUN_140002ddd(FUN_146618b3d,uVar1,L"WeaponAimAssistAspect");
  }
  return;
}



// FUNCTION 14409d4c4 FUN_14409d4c4 body=57 status=ok
// SIG undefined FUN_14409d4c4(void)

void FUN_14409d4c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0c90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0c90 = FUN_140002ddd(FUN_146618f7b,uVar1,L"WeaponBehaviorDef_Charge");
  }
  return;
}



// FUNCTION 14409d52a FUN_14409d52a body=57 status=ok
// SIG undefined FUN_14409d52a(void)

void FUN_14409d52a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0cd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0cd8 = FUN_140002ddd(FUN_146619107,uVar1,L"WeaponBehaviorDef_FireProjectile");
  }
  return;
}



// FUNCTION 14409d5f0 FUN_14409d5f0 body=57 status=ok
// SIG undefined FUN_14409d5f0(void)

void FUN_14409d5f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0db0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0db0 = FUN_140002ddd(FUN_14661944f,uVar1,L"WeaponBehaviorDef_OrderFireProjectile");
  }
  return;
}



// FUNCTION 14409d638 FUN_14409d638 body=261 status=ok
// SIG undefined FUN_14409d638(void)

void FUN_14409d638(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 6,0,0x1a0);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14b9456c0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0xf) = 0x3f800000;
  param_2[0x10] = 0x3f0000003f400000;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x24) = 0x3f800000;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x2e) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x30) = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x39) = 0x3f800000;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 14409d74a FUN_14409d74a body=57 status=ok
// SIG undefined FUN_14409d74a(void)

void FUN_14409d74a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0df8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0df8 = FUN_140002ddd(FUN_146619543,uVar1,L"WeaponBehaviorDef_Repair");
  }
  return;
}



// FUNCTION 14409d783 FUN_14409d783 body=1787 status=ok
// SIG undefined FUN_14409d783(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14409d783(void)

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
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0910 = (ulonglong)uVar1;
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0918 = (ulonglong)uVar1;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0920 = (ulonglong)uVar1;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0928 = (ulonglong)uVar1;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0930 = (ulonglong)uVar1;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0938 = (ulonglong)uVar1;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0940 = (ulonglong)uVar1;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0948 = (ulonglong)uVar1;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0950 = (ulonglong)uVar1;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0958 = (ulonglong)uVar1;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0960 = (ulonglong)uVar1;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0968 = (ulonglong)uVar1;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0970 = (ulonglong)uVar1;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0978 = (ulonglong)uVar1;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0980 = (ulonglong)uVar1;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0988 = (ulonglong)uVar1;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0990 = (ulonglong)uVar1;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0998 = (ulonglong)uVar1;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc09a0 = (ulonglong)uVar1;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc09a8 = (ulonglong)uVar1;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b93c310;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93c330);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b93c6d0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b93cd50;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b93cda0,1,&PTR_FUN_14b93cd70);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b93cf20,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93dc30);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b93dfd0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93e160);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b93e4e0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93e500);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93e640);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93e930);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b93efc0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93efe0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b93f240);
  ppuStack_60 = &PTR_FUN_14b9402a0;
  local_68 = 3;
  local_58 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b940320);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b940670);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b940b60;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b940b80);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b940cc0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b940ce0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b941120;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b941140);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b941420;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b941440);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b941a10;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b941a30);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b942090;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9420d0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409de80 FUN_14409de80 body=55 status=ok
// SIG undefined FUN_14409de80(void)

void FUN_14409de80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0e30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0e30 = FUN_14171c317(FUN_1466199bd,uVar1,L"EAtt_WeaponBehaviorShield");
  }
  return;
}



// FUNCTION 14409deb7 FUN_14409deb7 body=55 status=ok
// SIG undefined FUN_14409deb7(void)

void FUN_14409deb7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0e48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0e48 = FUN_14171c317(FUN_1466199ec,uVar1,L"EWeaponShieldActivationTrigger");
  }
  return;
}



// FUNCTION 14409deee FUN_14409deee body=55 status=ok
// SIG undefined FUN_14409deee(void)

void FUN_14409deee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0e60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0e60 = FUN_14171c317(FUN_146619a1b,uVar1,L"EWeaponShieldEffectType");
  }
  return;
}



// FUNCTION 14409df25 FUN_14409df25 body=55 status=ok
// SIG undefined FUN_14409df25(void)

void FUN_14409df25(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0e90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0e90 = FUN_14171c317(FUN_146619ae2,uVar1,L"EWeaponShieldAudioBehaviorType");
  }
  return;
}



// FUNCTION 14409df5c FUN_14409df5c body=55 status=ok
// SIG undefined FUN_14409df5c(void)

void FUN_14409df5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0ef0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0ef0 = FUN_14171c317(FUN_146619cd4,uVar1,L"EAtt_WeaponBehaviorStockReload");
  }
  return;
}



// FUNCTION 14409df93 FUN_14409df93 body=55 status=ok
// SIG undefined FUN_14409df93(void)

void FUN_14409df93(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1150 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1150 = FUN_14171c317(FUN_14661a7ce,uVar1,L"EWeaponShieldState");
  }
  return;
}



// FUNCTION 14409dfca FUN_14409dfca body=55 status=ok
// SIG undefined FUN_14409dfca(void)

void FUN_14409dfca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1298 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1298 = FUN_14171c317(FUN_14661aed4,uVar1,L"EWeaponManufacturerMod");
  }
  return;
}



// FUNCTION 14409e09c FUN_14409e09c body=49 status=ok
// SIG undefined FUN_14409e09c(void)

void FUN_14409e09c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14409e13e FUN_14409e13e body=57 status=ok
// SIG undefined FUN_14409e13e(void)

void FUN_14409e13e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0ec0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0ec0 = FUN_140002ddd(FUN_146619bdf,uVar1,L"WeaponBehaviorDef_Shield");
  }
  return;
}



// FUNCTION 14409e192 FUN_14409e192 body=57 status=ok
// SIG undefined FUN_14409e192(void)

void FUN_14409e192(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0ed8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0ed8 = FUN_140002ddd(FUN_146619c75,uVar1,L"WeaponBehaviorDef_Sight");
  }
  return;
}



// FUNCTION 14409e220 FUN_14409e220 body=57 status=ok
// SIG undefined FUN_14409e220(void)

void FUN_14409e220(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0f08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0f08 = FUN_140002ddd(FUN_146619d3b,uVar1,L"WeaponBehaviorDef_StockReload");
  }
  return;
}



// FUNCTION 14409e292 FUN_14409e292 body=57 status=ok
// SIG undefined FUN_14409e292(void)

void FUN_14409e292(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc12b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc12b0 = FUN_140002ddd(FUN_14661af03,uVar1,L"WeaponManufacturerModDef");
  }
  return;
}



// FUNCTION 14409e2da FUN_14409e2da body=57 status=ok
// SIG undefined FUN_14409e2da(void)

void FUN_14409e2da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc12e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc12e0 = FUN_140002ddd(FUN_14661af91,uVar1,L"JakobsRicochetModDef");
  }
  return;
}



// FUNCTION 14409e37c FUN_14409e37c body=57 status=ok
// SIG undefined FUN_14409e37c(void)

void FUN_14409e37c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1340 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1340 = FUN_140002ddd(FUN_14661b179,uVar1,L"WeaponOverrideDefAspect");
  }
  return;
}



// FUNCTION 14409e3e2 FUN_14409e3e2 body=57 status=ok
// SIG undefined FUN_14409e3e2(void)

void FUN_14409e3e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1358 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1358 = FUN_140002ddd(FUN_14661b20f,uVar1,L"WeaponPartValueResolver");
  }
  return;
}



// FUNCTION 14409e41b FUN_14409e41b body=1156 status=ok
// SIG undefined FUN_14409e41b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14409e41b(void)

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
  _DAT_14cbc0e08 = (ulonglong)uVar1;
  local_50 = "Use";
  local_48 = 3;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0e10 = (ulonglong)uVar1;
  local_50 = "Sight";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0e18 = (ulonglong)uVar1;
  local_50 = "TargetLock";
  local_48 = 10;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbc0e20 = (ulonglong)uVar1;
  ppuStack_60 = &PTR_FUN_14b946d40;
  local_68 = 3;
  uStack_58 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b946dc0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b947320);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b9476e0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b947700);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b947b80,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b948150,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9484a0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b948920,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9489e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b948b50,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9491e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b949600,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b949700,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b949b50,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b949c20,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b94a460,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b94ac70;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b94ac90,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b94afa0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b94b320,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b94b410);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b94b600);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b94bd60;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b94be00,1,&PTR_FUN_14b94bd80);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b94c170,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b94c260);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b94c420);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b94c560);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409e8a0 FUN_14409e8a0 body=55 status=ok
// SIG undefined FUN_14409e8a0(void)

void FUN_14409e8a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc13e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc13e0 = FUN_14171c317(FUN_14661b7d8,uVar1,L"EAtt_WeaponWear");
  }
  return;
}



// FUNCTION 14409e8d8 FUN_14409e8d8 body=55 status=ok
// SIG undefined FUN_14409e8d8(void)

void FUN_14409e8d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1440 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1440 = FUN_140002ddd(FUN_14409e90f,uVar1,L"TrueBossList");
  }
  return;
}



// FUNCTION 14409e90f FUN_14409e90f body=47 status=ok
// SIG undefined FUN_14409e90f(void)

longlong FUN_14409e90f(void)

{
  if (DAT_14cbc1438 == 0) {
    FUN_14086a14e(&DAT_14cbc1438,&PTR_FUN_14b9519e0);
  }
  return DAT_14cbc1438;
}



// FUNCTION 14409e93e FUN_14409e93e body=48 status=ok
// SIG undefined FUN_14409e93e(void)

void FUN_14409e93e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b956980;
  return;
}


