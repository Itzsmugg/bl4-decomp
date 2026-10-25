// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c8705e FUN_143c8705e body=57 status=ok
// SIG undefined FUN_143c8705e(void)

void FUN_143c8705e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de90 = FUN_140002ddd(FUN_146538c5d,uVar1,L"ObjectiveTypeSettings_Talk");
  }
  return;
}



// FUNCTION 143c87097 FUN_143c87097 body=969 status=ok
// SIG undefined FUN_143c87097(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c87097(void)

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
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb6daa8 = (ulonglong)uVar1;
  lVar2 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b393240,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3935f0,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b393f10;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b393f50);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3940c0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b394380;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3943a0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3944d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b394790);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3949d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b394ea0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b395000 + lVar2),L"/Script/GbxGame",
                  *(undefined8 *)
                   ((longlong)&PTR_u_EObjectiveTriggerPlayerEventType_14b395008 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14b395010 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b395750);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b395ba0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b395bc0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b395c80);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b396140);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b396440;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b396460);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b396580);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b396820);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b396de0,1,&PTR_FUN_14b396db0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b397560;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b397580);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b397950;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b397970);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b397df0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b397e10);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b3982c0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3982e0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b398510);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c87464 FUN_143c87464 body=55 status=ok
// SIG undefined FUN_143c87464(void)

void FUN_143c87464(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dea8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dea8 = FUN_14171c317(FUN_14653907b,uVar1,L"EAreaObjectiveDetectionMethod");
  }
  return;
}



// FUNCTION 143c8749b FUN_143c8749b body=55 status=ok
// SIG undefined FUN_143c8749b(void)

void FUN_143c8749b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dfe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dfe0 = FUN_14171c317(FUN_14653977a,uVar1,L"ECompoundObjectiveValueEvaluatorOp");
  }
  return;
}



// FUNCTION 143c874d2 FUN_143c874d2 body=55 status=ok
// SIG undefined FUN_143c874d2(void)

void FUN_143c874d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e130 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e130 = FUN_14171c317(FUN_146539eaa,uVar1,L"EMissionObjectiveTimerDisplayStyle");
  }
  return;
}



// FUNCTION 143c8750a FUN_143c8750a body=55 status=ok
// SIG undefined FUN_143c8750a(void)

void FUN_143c8750a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e148 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e148 = FUN_140002ddd(FUN_143c87541,uVar1,L"ObjectiveTimerThreshold");
  }
  return;
}



// FUNCTION 143c87541 FUN_143c87541 body=47 status=ok
// SIG undefined FUN_143c87541(void)

longlong FUN_143c87541(void)

{
  if (DAT_14cb6e140 == 0) {
    FUN_14086a14e(&DAT_14cb6e140,&PTR_FUN_14b39daa0);
  }
  return DAT_14cb6e140;
}



// FUNCTION 143c87570 FUN_143c87570 body=48 status=ok
// SIG undefined FUN_143c87570(void)

void FUN_143c87570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b3a3d20;
  return;
}



// FUNCTION 143c875a0 FUN_143c875a0 body=55 status=ok
// SIG undefined FUN_143c875a0(void)

void FUN_143c875a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e160 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e160 = FUN_140002ddd(FUN_143c875d7,uVar1,L"ObjectiveTimerPenalty");
  }
  return;
}



// FUNCTION 143c875d7 FUN_143c875d7 body=47 status=ok
// SIG undefined FUN_143c875d7(void)

longlong FUN_143c875d7(void)

{
  if (DAT_14cb6e158 == 0) {
    FUN_14086a14e(&DAT_14cb6e158,&PTR_FUN_14b39dbc8);
  }
  return DAT_14cb6e158;
}



// FUNCTION 143c87606 FUN_143c87606 body=48 status=ok
// SIG undefined FUN_143c87606(void)

void FUN_143c87606(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b3a3e80;
  return;
}



// FUNCTION 143c87644 FUN_143c87644 body=55 status=ok
// SIG undefined FUN_143c87644(void)

void FUN_143c87644(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e190 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e190 = FUN_14171c317(FUN_146539f0a,uVar1,L"EObjectivePhaseWaypointVisibilityFlag");
  }
  return;
}



// FUNCTION 143c8767b FUN_143c8767b body=55 status=ok
// SIG undefined FUN_143c8767b(void)

void FUN_143c8767b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e2e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e2e8 = FUN_14171c317(FUN_14653a45b,uVar1,L"EPerchAvailability");
  }
  return;
}



// FUNCTION 143c876b2 FUN_143c876b2 body=55 status=ok
// SIG undefined FUN_143c876b2(void)

void FUN_143c876b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e300 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e300 = FUN_14171c317(FUN_14653a48a,uVar1,L"EIdleTimeBehavior");
  }
  return;
}



// FUNCTION 143c876e9 FUN_143c876e9 body=55 status=ok
// SIG undefined FUN_143c876e9(void)

void FUN_143c876e9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e330 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e330 = FUN_14171c317(FUN_14653a4f3,uVar1,L"EPerchAlignment");
  }
  return;
}



// FUNCTION 143c87740 FUN_143c87740 body=48 status=ok
// SIG undefined FUN_143c87740(void)

longlong FUN_143c87740(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_140c639a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c87794 FUN_143c87794 body=592 status=ok
// SIG undefined FUN_143c87794(void)

void FUN_143c87794(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2 + 1,0,0x200);
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
  *param_2 = &PTR_FUN_14b3a1a90;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined4 *)(param_2 + 0x13) = 0x10;
  param_2[0x16] = 0;
  param_2[0x15] = &PTR_FUN_14b023b20;
  param_2[0x18] = &PTR_FUN_14b023b40;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = &PTR_FUN_14b00be70;
  *(undefined4 *)(param_2 + 0x1d) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined1 *)((longlong)param_2 + 0x104) = 1;
  *(undefined4 *)(param_2 + 0x22) = 0xf00000d0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  *(undefined4 *)(param_2 + 0x25) = 0xf00000d0;
  *(undefined1 *)(param_2 + 0x27) = 0;
  *(undefined4 *)((longlong)param_2 + 0x13c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x141) = 0;
  *(undefined4 *)((longlong)param_2 + 0x144) = 6;
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
  param_2[0x2a] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 0x2b) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 0x2d) = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0xf00000d0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0x3f800000;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  return;
}



// FUNCTION 143c879f0 FUN_143c879f0 body=57 status=ok
// SIG undefined FUN_143c879f0(void)

void FUN_143c879f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ded8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ded8 = FUN_140002ddd(FUN_146539177,uVar1,L"ObjectiveTypeSettings_Use");
  }
  return;
}



// FUNCTION 143c87b0c FUN_143c87b0c body=31 status=ok
// SIG undefined FUN_143c87b0c(void)

undefined8 FUN_143c87b0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c87bb0 FUN_143c87bb0 body=57 status=ok
// SIG undefined FUN_143c87bb0(void)

void FUN_143c87bb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e010 = FUN_140002ddd(FUN_146539840,uVar1,L"ObjectiveValueEvaluator_CustomEvaluator");
  }
  return;
}



// FUNCTION 143c87c16 FUN_143c87c16 body=57 status=ok
// SIG undefined FUN_143c87c16(void)

void FUN_143c87c16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e028 = FUN_140002ddd(FUN_1465398a0,uVar1,L"ObjectiveValueEvaluator_FactExpression");
  }
  return;
}



// FUNCTION 143c87cd8 FUN_143c87cd8 body=57 status=ok
// SIG undefined FUN_143c87cd8(void)

void FUN_143c87cd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e178 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e178 = FUN_140002ddd(FUN_146539c84,uVar1,L"ObjectiveValueEvaluator_Timer");
  }
  return;
}



// FUNCTION 143c87d12 FUN_143c87d12 body=254 status=ok
// SIG undefined FUN_143c87d12(void)

longlong FUN_143c87d12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_1 + 0x10) != lVar1) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  uVar4 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_14089d632(param_1 + 0x70,param_2 + 0x70);
  FUN_14089d5e2(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_1401f3db8(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 143c87e10 FUN_143c87e10 body=330 status=ok
// SIG undefined FUN_143c87e10(void)

void FUN_143c87e10(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x88;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143c87e81;
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
LAB_143c87e81:
    iVar5 = (int)(uVar4 / 0x88);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x88,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c87f5a FUN_143c87f5a body=333 status=ok
// SIG undefined FUN_143c87f5a(void)

void FUN_143c87f5a(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x68);
    do {
      *(undefined4 *)(puVar3 + -0xc) = *(undefined4 *)(param_2 + 1);
      puVar3[-0xd] = *param_2;
      *(undefined4 *)(puVar3 + -0xb) = *(undefined4 *)(param_2 + 2);
      puVar3[-8] = 0;
      puVar3[-10] = 0;
      puVar3[-9] = 0;
      puVar3[-10] = param_2[3];
      uVar2 = FUN_14477b664(param_2[4]);
      uVar2 = FUN_14477b664(uVar2);
      puVar3[-9] = uVar2;
      puVar3[-8] = param_2[5];
      uVar2 = param_2[7];
      puVar3[-7] = param_2[6];
      puVar3[-6] = uVar2;
      puVar3[-5] = param_2[8];
      *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(param_2 + 9);
      puVar3[-3] = 0;
      *(undefined4 *)(puVar3 + -2) = *(undefined4 *)(param_2 + 0xb);
      puVar3[-1] = &PTR_FUN_14b00be10;
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 0xe);
      uVar2 = param_2[0xd];
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1407fb7e8(puVar3,iVar1,0);
        FUN_1406b363d(*puVar3,uVar2);
      }
      puVar3[2] = 0;
      iVar1 = *(int *)(param_2 + 0x10);
      uVar2 = param_2[0xf];
      *(int *)(puVar3 + 3) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
      }
      else {
        FUN_1407fb936(puVar3 + 2,iVar1,0);
        FUN_1406b40b4(puVar3[2],uVar2);
      }
      param_2 = param_2 + 0x11;
      puVar3 = puVar3 + 0x11;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143c880a8 FUN_143c880a8 body=229 status=ok
// SIG undefined FUN_143c880a8(void)

void FUN_143c880a8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
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
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c8818d FUN_143c8818d body=209 status=ok
// SIG undefined FUN_143c8818d(void)

void FUN_143c8818d(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar4) = *(undefined4 *)(param_2 + 8 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined4 *)(param_1 + 0x10 + lVar4) = *(undefined4 *)(param_2 + 0x10 + lVar4);
      *(undefined8 *)(param_1 + 0x28 + lVar4) = 0;
      puVar1 = (undefined8 *)(param_1 + 0x18 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar4) = *(undefined8 *)(param_2 + 0x18 + lVar4);
      uVar3 = FUN_14477b664(*(undefined8 *)(param_2 + 0x20 + lVar4));
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x20 + lVar4) = uVar3;
      *(undefined8 *)(param_1 + 0x28 + lVar4) = *(undefined8 *)(param_2 + 0x28 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x40 + lVar4) = *(undefined8 *)(param_2 + 0x40 + lVar4);
      *(undefined4 *)(param_1 + 0x48 + lVar4) = *(undefined4 *)(param_2 + 0x48 + lVar4);
      *(undefined8 *)(param_1 + 0x50 + lVar4) = 0;
      *(undefined4 *)(param_1 + 0x58 + lVar4) = *(undefined4 *)(param_2 + 0x58 + lVar4);
      lVar4 = lVar4 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143c8826c FUN_143c8826c body=146 status=ok
// SIG undefined FUN_143c8826c(void)

void FUN_143c8826c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3a49c0;
  plVar3 = (longlong *)param_1[0x18];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_140e7c694(param_1);
  return;
}



// FUNCTION 143c882fe FUN_143c882fe body=230 status=ok
// SIG undefined FUN_143c882fe(void)

longlong FUN_143c882fe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_148794e3a();
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(longlong *)(param_1 + 0x78) = lVar4;
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
  uVar6 = *(undefined4 *)(param_2 + 0x84);
  uVar7 = *(undefined4 *)(param_2 + 0x88);
  uVar8 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  FUN_143c883e4(param_1 + 0x90,param_2 + 0x90);
  FUN_143c8843e(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  lVar4 = *(longlong *)(param_2 + 0xc0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(longlong *)(param_1 + 0xc0) = lVar4;
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



// FUNCTION 143c883e4 FUN_143c883e4 body=89 status=ok
// SIG undefined FUN_143c883e4(void)

undefined8 * FUN_143c883e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143c88498(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 143c8843e FUN_143c8843e body=89 status=ok
// SIG undefined FUN_143c8843e(void)

undefined8 * FUN_143c8843e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_143c885e0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 143c88498 FUN_143c88498 body=327 status=ok
// SIG undefined FUN_143c88498(void)

void FUN_143c88498(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143c88506;
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
LAB_143c88506:
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



// FUNCTION 143c885e0 FUN_143c885e0 body=327 status=ok
// SIG undefined FUN_143c885e0(void)

void FUN_143c885e0(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x14;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143c8864e;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_143c8864e:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c88744 FUN_143c88744 body=29 status=ok
// SIG undefined FUN_143c88744(void)

undefined8 FUN_143c88744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c887ec FUN_143c887ec body=87 status=ok
// SIG undefined FUN_143c887ec(void)

void FUN_143c887ec(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x60) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x70));
  if (*(longlong *)(param_2 + 0x68) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c8885a FUN_143c8885a body=260 status=ok
// SIG undefined FUN_143c8885a(void)

undefined8 FUN_143c8885a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 0x48);
    param_2 = param_2 + 0x78;
    do {
      *(int *)(param_2 + -0x70) = piVar3[-0x10];
      *(undefined8 *)(param_2 + -0x78) = *(undefined8 *)(piVar3 + -0x12);
      *(int *)(param_2 + -0x68) = piVar3[-0xe];
      lVar1 = *(longlong *)(piVar3 + -0xc);
      if (*(longlong *)(param_2 + -0x60) != lVar1) {
        *(undefined8 *)(param_2 + -0x50) = 0;
      }
      *(longlong *)(param_2 + -0x60) = lVar1;
      if (*(longlong *)(param_2 + -0x58) != *(longlong *)(piVar3 + -10)) {
        *(undefined8 *)(param_2 + -0x50) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -0x58) = uVar2;
      *(undefined8 *)(param_2 + -0x50) = *(undefined8 *)(piVar3 + -8);
      uVar2 = *(undefined8 *)(piVar3 + -4);
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(piVar3 + -6);
      *(undefined8 *)(param_2 + -0x40) = uVar2;
      if ((*(longlong *)(param_2 + -0x38) != *(longlong *)(piVar3 + -2)) ||
         (*(int *)(param_2 + -0x30) != *piVar3)) {
        *(longlong *)(param_2 + -0x38) = *(longlong *)(piVar3 + -2);
        *(int *)(param_2 + -0x30) = *piVar3;
        *(undefined8 *)(param_2 + -0x28) = 0;
      }
      *(int *)(param_2 + -0x20) = piVar3[4];
      FUN_1406b39e6(param_2 + -0x10,piVar3 + 8);
      FUN_1406b3a44(param_2,piVar3 + 0xc);
      piVar3 = piVar3 + 0x22;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c88986 FUN_143c88986 body=59 status=ok
// SIG undefined FUN_143c88986(void)

undefined8 FUN_143c88986(longlong *param_1)

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



// FUNCTION 143c889d2 FUN_143c889d2 body=100 status=ok
// SIG undefined FUN_143c889d2(void)

void FUN_143c889d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    *(undefined ***)(param_2 + 0x60) = &PTR_FUN_14b00be10;
    FUN_14487da0a(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FUN_1400020a8();
    }
    FUN_14487da48(*(undefined8 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x70));
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 143c88a86 FUN_143c88a86 body=29 status=ok
// SIG undefined FUN_143c88a86(void)

undefined8 FUN_143c88a86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c88b22 FUN_143c88b22 body=254 status=ok
// SIG undefined FUN_143c88b22(void)

undefined8 FUN_143c88b22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0x48;
    do {
      *(undefined4 *)(param_2 + -0x40 + lVar5) = *(undefined4 *)(param_3 + -0x40 + lVar5);
      *(undefined8 *)(param_2 + -0x48 + lVar5) = *(undefined8 *)(param_3 + -0x48 + lVar5);
      *(undefined4 *)(param_2 + -0x38 + lVar5) = *(undefined4 *)(param_3 + -0x38 + lVar5);
      lVar3 = *(longlong *)(param_3 + -0x30 + lVar5);
      if (*(longlong *)(param_2 + -0x30 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + -0x20 + lVar5) = 0;
      }
      lVar1 = param_3 + lVar5;
      *(longlong *)(param_2 + -0x30 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + -0x28 + lVar5) != *(longlong *)(lVar1 + -0x28)) {
        *(undefined8 *)(param_2 + -0x20 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + -0x28 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + -0x20 + lVar5) = *(undefined8 *)(lVar1 + -0x20);
      uVar4 = *(undefined8 *)(lVar1 + -0x10);
      puVar2 = (undefined8 *)(param_2 + -0x18 + lVar5);
      *puVar2 = *(undefined8 *)(lVar1 + -0x18);
      puVar2[1] = uVar4;
      if ((*(longlong *)(param_2 + -8 + lVar5) != *(longlong *)(lVar1 + -8)) ||
         (*(int *)(param_2 + lVar5) != *(int *)(param_3 + lVar5))) {
        *(longlong *)(param_2 + -8 + lVar5) = *(longlong *)(lVar1 + -8);
        *(undefined4 *)(param_2 + lVar5) = *(undefined4 *)(param_3 + lVar5);
        *(undefined8 *)(param_2 + 8 + lVar5) = 0;
      }
      *(undefined4 *)(param_2 + 0x10 + lVar5) = *(undefined4 *)(lVar1 + 0x10);
      lVar5 = lVar5 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c88c48 FUN_143c88c48 body=59 status=ok
// SIG undefined FUN_143c88c48(void)

undefined8 FUN_143c88c48(longlong *param_1)

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



// FUNCTION 143c88cf8 FUN_143c88cf8 body=120 status=ok
// SIG undefined FUN_143c88cf8(void)

void FUN_143c88cf8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *param_2 = &PTR_FUN_14b3a4a90;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined2 *)(param_2 + 0xb) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x5a) = 1;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 143c88dbe FUN_143c88dbe body=181 status=ok
// SIG undefined FUN_143c88dbe(void)

void FUN_143c88dbe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x128);
  *(undefined4 *)((longlong)param_2 + 0x10) = 2;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined1 *)((longlong)param_2 + 0x6c) = 0xff;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined1 *)((longlong)param_2 + 0x120) = 0;
  *(undefined4 *)((longlong)param_2 + 0x130) = 0;
  *(undefined1 **)((longlong)param_2 + 0x134) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_2 + 0x13c) = 0;
  *(undefined1 **)((longlong)param_2 + 0x140) = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 143c88e73 FUN_143c88e73 body=912 status=ok
// SIG undefined FUN_143c88e73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c88e73(void)

{
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39beb0,1,&PTR_FUN_14b39be90,1);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39c000,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39c140,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39c3d0,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39c570,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39c750,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39c900,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39cc60,2,&PTR_FUN_14b39cc40,1);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39cdb0,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39ced0,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39d080,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39d270,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39d510,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39d6d0,2,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39d820,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39e0e0,4,&PTR_FUN_14b39e0c0,1);
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b39e520,1,&PTR_FUN_14b39e500,1);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b39eb30,1,&PTR_FUN_14b39eb00,1,0,0);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b39fd30,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a0440,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a0650,1,0,0,0,0);
  _DAT_14cb6e2a0 = 0x47efffffe0000000;
  _DAT_14cb6e2a8 = 0x47efffffe0000000;
  _DAT_14cb6e2b0 = 0x47efffffe0000000;
  _DAT_14cb6e2b8 = 0x47efffffe0000000;
  _DAT_14cb6e2c0 = 0x47efffffe0000000;
  _DAT_14cb6e2c8 = 0x47efffffe0000000;
  _DAT_14cb6e2d0 = 0x47efffffe0000000;
  _DAT_14cb6e2d8 = 0x47efffffe0000000;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a1100,1,0,0,&PTR_FUN_14b3a10c0,2);
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a16a0,1,0,0,&PTR_FUN_14b3a1680,1);
  return;
}



// FUNCTION 143c89204 FUN_143c89204 body=55 status=ok
// SIG undefined FUN_143c89204(void)

void FUN_143c89204(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e438 = FUN_14171c317(FUN_14653acb0,uVar1,L"EPickupLifespanType");
  }
  return;
}



// FUNCTION 143c8923b FUN_143c8923b body=55 status=ok
// SIG undefined FUN_143c8923b(void)

void FUN_143c8923b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e468 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e468 = FUN_14171c317(FUN_14653ad18,uVar1,L"EOakUI_PingType");
  }
  return;
}



// FUNCTION 143c89272 FUN_143c89272 body=55 status=ok
// SIG undefined FUN_143c89272(void)

void FUN_143c89272(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e5b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e5b0 = FUN_14171c317(FUN_14653b37b,uVar1,L"EProjectileExplosionFlags");
  }
  return;
}



// FUNCTION 143c8931a FUN_143c8931a body=48 status=ok
// SIG undefined FUN_143c8931a(void)

longlong FUN_143c8931a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8934a FUN_143c8934a body=48 status=ok
// SIG undefined FUN_143c8934a(void)

longlong FUN_143c8934a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c893ea FUN_143c893ea body=57 status=ok
// SIG undefined FUN_143c893ea(void)

void FUN_143c893ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e3c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e3c0 = FUN_140002ddd(FUN_14653aacd,uVar1,L"PerchUserDef");
  }
  return;
}



// FUNCTION 143c89440 FUN_143c89440 body=57 status=ok
// SIG undefined FUN_143c89440(void)

void FUN_143c89440(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e420 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e420 = FUN_140002ddd(FUN_14653ac51,uVar1,L"PickupActorDef");
  }
  return;
}



// FUNCTION 143c894a0 FUN_143c894a0 body=57 status=ok
// SIG undefined FUN_143c894a0(void)

void FUN_143c894a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e498 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e498 = FUN_140002ddd(FUN_14653ad76,uVar1,L"PingFeedbackDef");
  }
  return;
}



// FUNCTION 143c89500 FUN_143c89500 body=168 status=ok
// SIG undefined FUN_143c89500(void)

undefined1 FUN_143c89500(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      lVar12 = *(longlong *)(param_3 + 8 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + 8 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1[1] = lVar12;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 2) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
      *(undefined4 *)(plVar1 + 3) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar6;
      *(undefined4 *)(plVar1 + 4) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar8;
      *(undefined4 *)(plVar1 + 5) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar10;
      *(undefined1 *)(plVar1 + 6) = *(undefined1 *)(param_3 + 0x30 + lVar13);
      lVar13 = lVar13 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c8961a FUN_143c8961a body=533 status=ok
// SIG undefined FUN_143c8961a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8961a(void)

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
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a6090,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a63e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a6a10,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb6e3b0 = (ulonglong)uVar1;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a6c60,1,&PTR_FUN_14b3a6c30);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a6fb0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3a71d0);
  FUN_14098d3d2(FUN_143c89204,L"/Script/GbxGame",L"EPickupLifespanType",&DAT_14cb6e430);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a7350,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b3a7940;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a7990,1,&PTR_FUN_14b3a7960);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3a9350,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b3add80;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3ade20,1,&PTR_FUN_14b3adda0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c89830 FUN_143c89830 body=55 status=ok
// SIG undefined FUN_143c89830(void)

void FUN_143c89830(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e980 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e980 = FUN_14171c317(FUN_14653ce5e,uVar1,L"EProjectileGameplayBounceSurfaceType");
  }
  return;
}



// FUNCTION 143c89878 FUN_143c89878 body=55 status=ok
// SIG undefined FUN_143c89878(void)

void FUN_143c89878(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e9e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e9e8 = FUN_14171c317(FUN_14653d08c,uVar1,L"EProjectileDrunkenMovementType");
  }
  return;
}



// FUNCTION 143c898af FUN_143c898af body=55 status=ok
// SIG undefined FUN_143c898af(void)

void FUN_143c898af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ea30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ea30 = FUN_14171c317(FUN_14653d1bc,uVar1,L"EProjectileFlag");
  }
  return;
}



// FUNCTION 143c898e6 FUN_143c898e6 body=55 status=ok
// SIG undefined FUN_143c898e6(void)

void FUN_143c898e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ea48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ea48 = FUN_14171c317(FUN_14653d1eb,uVar1,L"EHomingTargetUntargetableAction");
  }
  return;
}



// FUNCTION 143c8991d FUN_143c8991d body=55 status=ok
// SIG undefined FUN_143c8991d(void)

void FUN_143c8991d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ea60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ea60 = FUN_14171c317(FUN_14653d21a,uVar1,L"EHomingTargetLostReason");
  }
  return;
}



// FUNCTION 143c89962 FUN_143c89962 body=40 status=ok
// SIG undefined FUN_143c89962(void)

void FUN_143c89962(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  *(undefined4 *)((longlong)param_2 + 0x90) = 0x3f800000;
  return;
}



// FUNCTION 143c89b68 FUN_143c89b68 body=464 status=ok
// SIG undefined FUN_143c89b68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c89b68(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb6e8b0 = (ulonglong)uVar1;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3b1e90);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3b2440,1,&PTR_FUN_14b3b23f0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b3b3100;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3b31c0,1,&PTR_FUN_14b3b3120);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3b6400);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b3b6a50;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3b6a70);
  FUN_14098d3d2(FUN_143c898af,L"/Script/GbxGame",L"EProjectileFlag",&DAT_14cb6ea28);
  uStack_48 = 2;
  ppuStack_50 = &PTR_FUN_14b3b77e0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3b7820);
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3b7be0,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3b7d80);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c89d3c FUN_143c89d3c body=55 status=ok
// SIG undefined FUN_143c89d3c(void)

void FUN_143c89d3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb40 = FUN_14171c317(FUN_14653d894,uVar1,L"ESpawnProjectileExec");
  }
  return;
}



// FUNCTION 143c89d73 FUN_143c89d73 body=55 status=ok
// SIG undefined FUN_143c89d73(void)

void FUN_143c89d73(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eb58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eb58 = FUN_14171c317(FUN_14653d8c3,uVar1,L"EProjectileOwnerOptions");
  }
  return;
}



// FUNCTION 143c89daa FUN_143c89daa body=55 status=ok
// SIG undefined FUN_143c89daa(void)

void FUN_143c89daa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ec40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ec40 = FUN_14171c317(FUN_14653dd27,uVar1,L"EProjectileDetachAction");
  }
  return;
}



// FUNCTION 143c89de1 FUN_143c89de1 body=55 status=ok
// SIG undefined FUN_143c89de1(void)

void FUN_143c89de1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eca0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eca0 = FUN_14171c317(FUN_14653df1e,uVar1,L"EPuddleState");
  }
  return;
}



// FUNCTION 143c89e18 FUN_143c89e18 body=48 status=ok
// SIG undefined FUN_143c89e18(void)

longlong FUN_143c89e18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140d7dc8a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c89e54 FUN_143c89e54 body=48 status=ok
// SIG undefined FUN_143c89e54(void)

longlong FUN_143c89e54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140d7dc8a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c89ef8 FUN_143c89ef8 body=83 status=ok
// SIG undefined FUN_143c89ef8(void)

void FUN_143c89ef8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3c0500;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000143c89f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c89f6a FUN_143c89f6a body=136 status=ok
// SIG undefined FUN_143c89f6a(void)

undefined1 FUN_143c89f6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if (DAT_14c950c29 == 1) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
        }
      }
      bVar1 = DAT_14c950c29;
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
        }
      }
      *(longlong *)(param_2 + 0x10 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c8a06c FUN_143c8a06c body=365 status=ok
// SIG undefined FUN_143c8a06c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8a06c(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3b9c70);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb6eb30 = (ulonglong)uVar1;
  uStack_48 = 2;
  ppuStack_50 = &PTR_FUN_14b3ba1a0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3ba1e0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3bd840,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b3bdd60;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3bdd80);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b3bf1e0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3bf200,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c01f0,1,&PTR_FUN_14b3c01c0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c8a1dc FUN_143c8a1dc body=55 status=ok
// SIG undefined FUN_143c8a1dc(void)

void FUN_143c8a1dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6edb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6edb0 = FUN_14171c317(FUN_14653e666,uVar1,L"EPuddleHazardBuildType");
  }
  return;
}



// FUNCTION 143c8a213 FUN_143c8a213 body=55 status=ok
// SIG undefined FUN_143c8a213(void)

void FUN_143c8a213(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6edc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6edc8 = FUN_14171c317(FUN_14653e695,uVar1,L"EPuddleHazardInstanceBuildType");
  }
  return;
}



// FUNCTION 143c8a24a FUN_143c8a24a body=55 status=ok
// SIG undefined FUN_143c8a24a(void)

void FUN_143c8a24a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ef80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ef80 = FUN_14171c317(FUN_14653ed7a,uVar1,L"ERelativeDirectionType");
  }
  return;
}



// FUNCTION 143c8a281 FUN_143c8a281 body=55 status=ok
// SIG undefined FUN_143c8a281(void)

void FUN_143c8a281(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6efb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6efb0 =
         FUN_14171c317(FUN_14653ee42,uVar1,L"ERelativeFactsSystemActorReferenceSubmapMode");
  }
  return;
}



// FUNCTION 143c8a2b8 FUN_143c8a2b8 body=47 status=ok
// SIG undefined FUN_143c8a2b8(void)

longlong FUN_143c8a2b8(void)

{
  if (DAT_14cb6f140 == 0) {
    FUN_14086a14e(&DAT_14cb6f140,&PTR_FUN_14b3c5570);
  }
  return DAT_14cb6f140;
}



// FUNCTION 143c8a2e8 FUN_143c8a2e8 body=48 status=ok
// SIG undefined FUN_143c8a2e8(void)

void FUN_143c8a2e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b3cb790;
  return;
}



// FUNCTION 143c8a318 FUN_143c8a318 body=55 status=ok
// SIG undefined FUN_143c8a318(void)

void FUN_143c8a318(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f160 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f160 = FUN_14171c317(FUN_14653f4e0,uVar1,L"EScreenParticleScalingMode");
  }
  return;
}



// FUNCTION 143c8a356 FUN_143c8a356 body=48 status=ok
// SIG undefined FUN_143c8a356(void)

longlong FUN_143c8a356(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1412e218e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8a386 FUN_143c8a386 body=48 status=ok
// SIG undefined FUN_143c8a386(void)

longlong FUN_143c8a386(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1412e218e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8a400 FUN_143c8a400 body=57 status=ok
// SIG undefined FUN_143c8a400(void)

void FUN_143c8a400(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ede0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ede0 = FUN_140002ddd(FUN_14653e6c4,uVar1,L"PuddleHazardDef");
  }
  return;
}



// FUNCTION 143c8a448 FUN_143c8a448 body=57 status=ok
// SIG undefined FUN_143c8a448(void)

void FUN_143c8a448(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ee70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ee70 = FUN_140002ddd(FUN_14653e900,uVar1,L"RadiateDamageAreaBodySettings");
  }
  return;
}



// FUNCTION 143c8a578 FUN_143c8a578 body=57 status=ok
// SIG undefined FUN_143c8a578(void)

void FUN_143c8a578(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f010 = FUN_140002ddd(FUN_14653f000,uVar1,L"ReplicatedMissionFactAdd");
  }
  return;
}



// FUNCTION 143c8a5d6 FUN_143c8a5d6 body=57 status=ok
// SIG undefined FUN_143c8a5d6(void)

void FUN_143c8a5d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f028 = FUN_140002ddd(FUN_14653f060,uVar1,L"ReplicatedMissionFactChange");
  }
  return;
}



// FUNCTION 143c8a64e FUN_143c8a64e body=57 status=ok
// SIG undefined FUN_143c8a64e(void)

void FUN_143c8a64e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f040 = FUN_140002ddd(FUN_14653f0c0,uVar1,L"ReplicatedGeneratedMissionCreation");
  }
  return;
}



// FUNCTION 143c8a790 FUN_143c8a790 body=29 status=ok
// SIG undefined FUN_143c8a790(void)

undefined8 FUN_143c8a790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8a810 FUN_143c8a810 body=130 status=ok
// SIG undefined FUN_143c8a810(void)

undefined8 FUN_143c8a810(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10 + lVar6) = *(undefined1 *)(param_3 + -0x10 + lVar6);
      uVar3 = *(undefined8 *)(param_3 + -8 + lVar6);
      lVar4 = *(longlong *)(param_3 + lVar6);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + lVar6);
      *(undefined8 *)(param_2 + -8 + lVar6) = uVar3;
      *(longlong *)(param_2 + lVar6) = lVar4;
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
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c8a8ba FUN_143c8a8ba body=59 status=ok
// SIG undefined FUN_143c8a8ba(void)

undefined8 FUN_143c8a8ba(longlong *param_1)

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



// FUNCTION 143c8a900 FUN_143c8a900 body=74 status=ok
// SIG undefined FUN_143c8a900(void)

void FUN_143c8a900(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14b3cb8f0;
    plVar3 = (longlong *)param_2[3];
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
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 143c8a998 FUN_143c8a998 body=83 status=ok
// SIG undefined FUN_143c8a998(void)

undefined8 * FUN_143c8a998(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3cb8f0;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8a9ec FUN_143c8a9ec body=55 status=ok
// SIG undefined FUN_143c8a9ec(void)

void FUN_143c8a9ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f148 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f148 = FUN_140002ddd(FUN_143c8a2b8,uVar1,L"ReplicatedMissionObjectiveUxModifierUpdate")
    ;
  }
  return;
}



// FUNCTION 143c8aa5c FUN_143c8aa5c body=49 status=ok
// SIG undefined FUN_143c8aa5c(void)

void FUN_143c8aa5c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c8aaa8 FUN_143c8aaa8 body=49 status=ok
// SIG undefined FUN_143c8aaa8(void)

void FUN_143c8aaa8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c8aae5 FUN_143c8aae5 body=952 status=ok
// SIG undefined FUN_143c8aae5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8aae5(void)

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
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b3c2130;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c2170);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c25c0,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb6ee08 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c27a0,1,&PTR_FUN_14b3c2770);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c2cc0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c3240,1,&PTR_FUN_14b3c31f0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c3310,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c3910,1,&PTR_FUN_14b3c38e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c3c80,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c4300,1,&PTR_FUN_14b3c42d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c43c0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c4460);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b3c4800;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c4820);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b3c4b00;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c4b20);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c4bd0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 0xf;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c55b0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b3c6a40;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3c6a60);
  FUN_1446f470e(&DAT_14cb6f1e8,L"ClientHideScreenParticle",1);
  FUN_1446f470e(&DAT_14cb6f1f8,L"ClientSetScreenParticleActorParameter",1);
  FUN_1446f470e(&DAT_14cb6f208,L"ClientSetScreenParticleColorParameter",1);
  FUN_1446f470e(&DAT_14cb6f218,L"ClientSetScreenParticleFloatParameter",1);
  FUN_1446f470e(&DAT_14cb6f228,L"ClientSetScreenParticleMaterialParameter",1);
  FUN_1446f470e(&DAT_14cb6f238,L"ClientSetScreenParticleVectorParameter",1);
  FUN_1446f470e(&DAT_14cb6f250,L"ClientShowScreenParticleEx",1);
  FUN_1446f470e(&DAT_14cb6f260,L"ClientTrackParticleProperty",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3c8bf0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c8aea0 FUN_143c8aea0 body=55 status=ok
// SIG undefined FUN_143c8aea0(void)

void FUN_143c8aea0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f2a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f2a0 = FUN_14171c317(FUN_14653fe5b,uVar1,L"EScreenParticleVisibility");
  }
  return;
}



// FUNCTION 143c8aed8 FUN_143c8aed8 body=55 status=ok
// SIG undefined FUN_143c8aed8(void)

void FUN_143c8aed8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f2d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f2d0 = FUN_140002ddd(FUN_143c8af0f,uVar1,L"SharedProgressCharacterUse_ValueResolver");
  }
  return;
}



// FUNCTION 143c8af0f FUN_143c8af0f body=47 status=ok
// SIG undefined FUN_143c8af0f(void)

longlong FUN_143c8af0f(void)

{
  if (DAT_14cb6f2c8 == 0) {
    FUN_14086a14e(&DAT_14cb6f2c8,&PTR_FUN_14b3cdc18);
  }
  return DAT_14cb6f2c8;
}



// FUNCTION 143c8af3e FUN_143c8af3e body=48 status=ok
// SIG undefined FUN_143c8af3e(void)

void FUN_143c8af3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b3d5140;
  return;
}



// FUNCTION 143c8af6e FUN_143c8af6e body=55 status=ok
// SIG undefined FUN_143c8af6e(void)

void FUN_143c8af6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f3b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f3b8 = FUN_140002ddd(FUN_143c8afa5,uVar1,L"SpawnModifier_StatCounter");
  }
  return;
}



// FUNCTION 143c8afa5 FUN_143c8afa5 body=47 status=ok
// SIG undefined FUN_143c8afa5(void)

longlong FUN_143c8afa5(void)

{
  if (DAT_14cb6f3b0 == 0) {
    FUN_14086a14e(&DAT_14cb6f3b0,&PTR_FUN_14b3cfb90);
  }
  return DAT_14cb6f3b0;
}



// FUNCTION 143c8afe2 FUN_143c8afe2 body=48 status=ok
// SIG undefined FUN_143c8afe2(void)

void FUN_143c8afe2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000168;
  *puVar1 = &PTR_FUN_14b3d5640;
  return;
}



// FUNCTION 143c8b01e FUN_143c8b01e body=227 status=ok
// SIG undefined FUN_143c8b01e(void)

longlong FUN_143c8b01e(void)

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
  if (DAT_14cb6f4f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145b81516;
    local_38 = &LAB_143c8b013;
    local_40 = &LAB_143c8b016;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/GbxGame",L"StatStateCacheProgressRole_Shared",&DAT_14cb6f4f0,
                  &DAT_143c8b012);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6f4f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c8b102 FUN_143c8b102 body=47 status=ok
// SIG undefined FUN_143c8b102(void)

longlong FUN_143c8b102(void)

{
  if (DAT_14cb6f4f8 == 0) {
    FUN_14073dd9a(&DAT_14cb6f4f8,&PTR_FUN_14b3d1528);
  }
  return DAT_14cb6f4f8;
}



// FUNCTION 143c8b131 FUN_143c8b131 body=55 status=ok
// SIG undefined FUN_143c8b131(void)

void FUN_143c8b131(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f638 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f638 = FUN_14171c317(FUN_146540b1c,uVar1,L"FUnlockableLedgerType");
  }
  return;
}



// FUNCTION 143c8b16d FUN_143c8b16d body=55 status=ok
// SIG undefined FUN_143c8b16d(void)

void FUN_143c8b16d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f710 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f710 = FUN_14171c317(FUN_146540e94,uVar1,L"EUsabilityConditionContextType");
  }
  return;
}



// FUNCTION 143c8b1a4 FUN_143c8b1a4 body=55 status=ok
// SIG undefined FUN_143c8b1a4(void)

void FUN_143c8b1a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f758 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f758 = FUN_14171c317(FUN_146540ff2,uVar1,L"ECostSource");
  }
  return;
}



// FUNCTION 143c8b1db FUN_143c8b1db body=55 status=ok
// SIG undefined FUN_143c8b1db(void)

void FUN_143c8b1db(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f770 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f770 = FUN_14171c317(FUN_146541021,uVar1,L"EUsableCostContext");
  }
  return;
}



// FUNCTION 143c8b212 FUN_143c8b212 body=55 status=ok
// SIG undefined FUN_143c8b212(void)

void FUN_143c8b212(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f7a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f7a0 = FUN_14171c317(FUN_1465410b2,uVar1,L"EUsabilityResponseType");
  }
  return;
}



// FUNCTION 143c8b24a FUN_143c8b24a body=38 status=ok
// SIG undefined FUN_143c8b24a(void)

undefined8 FUN_143c8b24a(undefined8 param_1,int param_2)

{
  FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8b35c FUN_143c8b35c body=29 status=ok
// SIG undefined FUN_143c8b35c(void)

undefined8 FUN_143c8b35c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8b3f0 FUN_143c8b3f0 body=59 status=ok
// SIG undefined FUN_143c8b3f0(void)

undefined8 FUN_143c8b3f0(longlong *param_1)

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



// FUNCTION 143c8b490 FUN_143c8b490 body=29 status=ok
// SIG undefined FUN_143c8b490(void)

undefined8 FUN_143c8b490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8b4ae FUN_143c8b4ae body=55 status=ok
// SIG undefined FUN_143c8b4ae(void)

void FUN_143c8b4ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f2d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f2d0 = FUN_140002ddd(FUN_143c8af0f,uVar1,L"SharedProgressCharacterUse_ValueResolver");
  }
  return;
}



// FUNCTION 143c8b516 FUN_143c8b516 body=29 status=ok
// SIG undefined FUN_143c8b516(void)

undefined8 FUN_143c8b516(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8b542 FUN_143c8b542 body=252 status=ok
// SIG undefined FUN_143c8b542(void)

void FUN_143c8b542(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 5,0,0x140);
  *param_2 = &PTR_FUN_14b3d57a0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  FUN_144928b90(param_2 + 10,6);
  FUN_144928b90(param_2 + 0x11,6);
  param_2[0x18] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 4;
  *(undefined4 *)(param_2 + 0x19) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x1d) = 3;
  *(char *)(param_2 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x1f] = 0;
  *(undefined2 *)(param_2 + 0x23) = 4;
  *(undefined4 *)(param_2 + 0x20) = 0x40000000;
  *(undefined1 *)(param_2 + 0x24) = 3;
  *(char *)(param_2 + 0x25) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_2 + 0x26) = 1;
  *(undefined8 *)((longlong)param_2 + 0x134) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0xffffffffffffffff;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  return;
}



// FUNCTION 143c8b63e FUN_143c8b63e body=237 status=ok
// SIG undefined FUN_143c8b63e(void)

void FUN_143c8b63e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b3d57a0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  FUN_144928b90(param_2 + 10,6);
  FUN_144928b90(param_2 + 0x11,6);
  param_2[0x18] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 4;
  *(undefined4 *)(param_2 + 0x19) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x1d) = 3;
  *(char *)(param_2 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x1f] = 0;
  *(undefined2 *)(param_2 + 0x23) = 4;
  *(undefined4 *)(param_2 + 0x20) = 0x40000000;
  *(undefined1 *)(param_2 + 0x24) = 3;
  *(char *)(param_2 + 0x25) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_2 + 0x26) = 1;
  *(undefined8 *)((longlong)param_2 + 0x134) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0xffffffffffffffff;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  return;
}



// FUNCTION 143c8b750 FUN_143c8b750 body=393 status=ok
// SIG undefined FUN_143c8b750(void)

undefined8 FUN_143c8b750(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar3 = param_2 + lVar16;
      lVar4 = param_3 + lVar16;
      FUN_1403de7ba(param_2 + lVar16 + 8,param_3 + lVar16 + 8);
      *(undefined1 *)(param_2 + lVar16 + 0x28) = *(undefined1 *)(param_3 + lVar16 + 0x28);
      lVar5 = param_2 + lVar16;
      lVar6 = param_3 + lVar16;
      FUN_1403de7ba(lVar5 + 0x30,lVar6 + 0x30);
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
      *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(lVar6 + 0x58);
      lVar6 = param_2 + 0x60 + lVar16;
      lVar5 = param_3 + lVar16;
      FUN_1447715ec(lVar6,lVar5 + 0x60);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar5 + 0x88);
      *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar5 + 0x90);
      FUN_1447715ec(lVar3 + 0x98,lVar4 + 0x98);
      FUN_144983130(lVar3 + 0xc0,lVar4 + 0xc0);
      FUN_144983130(lVar3 + 0xf8,lVar4 + 0xf8);
      *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(lVar5 + 0x150);
      uVar9 = *(undefined4 *)(lVar5 + 0x130);
      uVar10 = *(undefined4 *)(lVar5 + 0x134);
      uVar11 = *(undefined4 *)(lVar5 + 0x138);
      uVar12 = *(undefined4 *)(lVar5 + 0x13c);
      uVar13 = *(undefined4 *)(lVar5 + 0x144);
      uVar14 = *(undefined4 *)(lVar5 + 0x148);
      uVar15 = *(undefined4 *)(lVar5 + 0x14c);
      *(undefined4 *)(lVar6 + 0xe0) = *(undefined4 *)(lVar5 + 0x140);
      *(undefined4 *)(lVar6 + 0xe4) = uVar13;
      *(undefined4 *)(lVar6 + 0xe8) = uVar14;
      *(undefined4 *)(lVar6 + 0xec) = uVar15;
      *(undefined4 *)(lVar6 + 0xd0) = uVar9;
      *(undefined4 *)(lVar6 + 0xd4) = uVar10;
      *(undefined4 *)(lVar6 + 0xd8) = uVar11;
      *(undefined4 *)(lVar6 + 0xdc) = uVar12;
      uVar7 = *(undefined8 *)(lVar5 + 0x158);
      lVar3 = *(longlong *)(lVar5 + 0x160);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      plVar8 = *(longlong **)(param_2 + 0x160 + lVar16);
      *(undefined8 *)(param_2 + 0x158 + lVar16) = uVar7;
      *(longlong *)(param_2 + 0x160 + lVar16) = lVar3;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar16 = lVar16 + 0x168;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c8b902 FUN_143c8b902 body=59 status=ok
// SIG undefined FUN_143c8b902(void)

undefined8 FUN_143c8b902(longlong *param_1)

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



// FUNCTION 143c8b94e FUN_143c8b94e body=38 status=ok
// SIG undefined FUN_143c8b94e(void)

void FUN_143c8b94e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_143c8ba20(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 143c8b9c2 FUN_143c8b9c2 body=38 status=ok
// SIG undefined FUN_143c8b9c2(void)

undefined8 FUN_143c8b9c2(undefined8 param_1,int param_2)

{
  FUN_143c8ba20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8b9e8 FUN_143c8b9e8 body=55 status=ok
// SIG undefined FUN_143c8b9e8(void)

void FUN_143c8b9e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f3b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f3b8 = FUN_140002ddd(FUN_143c8afa5,uVar1,L"SpawnModifier_StatCounter");
  }
  return;
}



// FUNCTION 143c8ba20 FUN_143c8ba20 body=347 status=ok
// SIG undefined FUN_143c8ba20(void)

void FUN_143c8ba20(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b3d57a0;
  plVar2 = (longlong *)param_1[0x2c];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = param_1 + 0x20;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x24) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x23)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x23)) {
    FUN_1400020a8(*plVar2);
  }
  plVar2 = param_1 + 0x19;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar2);
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c8bbcc FUN_143c8bbcc body=57 status=ok
// SIG undefined FUN_143c8bbcc(void)

void FUN_143c8bbcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f418 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f418 = FUN_140002ddd(FUN_1465403da,uVar1,L"SpawnPatternDef");
  }
  return;
}



// FUNCTION 143c8bcc4 FUN_143c8bcc4 body=57 status=ok
// SIG undefined FUN_143c8bcc4(void)

void FUN_143c8bcc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f4c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f4c8 = FUN_140002ddd(FUN_14654073d,uVar1,L"StatModifierAspect");
  }
  return;
}



// FUNCTION 143c8bd0c FUN_143c8bd0c body=373 status=ok
// SIG undefined FUN_143c8bd0c(void)

void FUN_143c8bd0c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *param_2 = &PTR_FUN_14b3d6940;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = &PTR_FUN_14b00be70;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xf00000d0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
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
  param_2[9] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 143c8be8e FUN_143c8be8e body=57 status=ok
// SIG undefined FUN_143c8be8e(void)

void FUN_143c8be8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f528 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f528 = FUN_140002ddd(FUN_14654086d,uVar1,L"StringDisplayValue");
  }
  return;
}



// FUNCTION 143c8bed6 FUN_143c8bed6 body=251 status=ok
// SIG undefined FUN_143c8bed6(void)

void FUN_143c8bed6(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_14b3d6cf0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return;
}



// FUNCTION 143c8c012 FUN_143c8c012 body=57 status=ok
// SIG undefined FUN_143c8c012(void)

void FUN_143c8c012(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f588 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f588 = FUN_140002ddd(FUN_1465409f3,uVar1,L"UIStatAspect");
  }
  return;
}



// FUNCTION 143c8c068 FUN_143c8c068 body=280 status=ok
// SIG undefined FUN_143c8c068(void)

void FUN_143c8c068(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b3d9970;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
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
  param_2[6] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 9) = 1;
  return;
}



// FUNCTION 143c8c18c FUN_143c8c18c body=57 status=ok
// SIG undefined FUN_143c8c18c(void)

void FUN_143c8c18c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f620 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f620 = FUN_140002ddd(FUN_146540aba,uVar1,L"UnlockableEntryDef");
  }
  return;
}



// FUNCTION 143c8c1e6 FUN_143c8c1e6 body=57 status=ok
// SIG undefined FUN_143c8c1e6(void)

void FUN_143c8c1e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f650 = FUN_140002ddd(FUN_146540b4b,uVar1,L"UnlockableLedgerDef");
  }
  return;
}



// FUNCTION 143c8c220 FUN_143c8c220 body=160 status=ok
// SIG undefined FUN_143c8c220(void)

longlong FUN_143c8c220(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_1487a7f6e(param_1 + 0x28,param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_1 + 0x40) != lVar1) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = lVar1;
  if (*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  FUN_1487a7fc2(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 143c8c34a FUN_143c8c34a body=88 status=ok
// SIG undefined FUN_143c8c34a(void)

void FUN_143c8c34a(undefined8 param_1,undefined1 *param_2)

{
  memset(param_2,0,0xa0);
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0x10) = 0xf00000d0;
  param_2[0x20] = 4;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x70) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  param_2[0x98] = 0;
  return;
}



// FUNCTION 143c8c3bc FUN_143c8c3bc body=478 status=ok
// SIG undefined FUN_143c8c3bc(void)

void FUN_143c8c3bc(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2 + 2,0,0x150);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b023b20;
  param_2[3] = &PTR_FUN_14b023b40;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = &PTR_FUN_14b00be70;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((longlong)param_2 + 0x5c) = 1;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0xf00000d0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0;
  *(undefined1 *)((longlong)param_2 + 0x99) = 0;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 6;
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
  param_2[0x15] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0xf00000d0;
  param_2[0x21] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0x3f800000;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  return;
}



// FUNCTION 143c8c670 FUN_143c8c670 body=123 status=ok
// SIG undefined FUN_143c8c670(void)

void FUN_143c8c670(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xb0);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b023840;
  *(undefined1 *)((longlong)param_2 + 0x19) = 0;
  param_2[5] = 0;
  param_2[4] = &PTR_FUN_14b023870;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x62) = 0;
  param_2[0xf] = 0;
  param_2[0xe] = &PTR_FUN_14b023870;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb2) = 0;
  return;
}



// FUNCTION 143c8c720 FUN_143c8c720 body=192 status=ok
// SIG undefined FUN_143c8c720(void)

void FUN_143c8c720(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x108);
  *(undefined4 *)((longlong)param_2 + 8) = 0xb38ec559;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0x4348000000000000;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined ***)((longlong)param_2 + 0x20) = &PTR_FUN_14b023840;
  *(undefined1 *)((longlong)param_2 + 0x39) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined ***)((longlong)param_2 + 0x40) = &PTR_FUN_14b023870;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined1 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x82) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined ***)((longlong)param_2 + 0x90) = &PTR_FUN_14b023870;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined1 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xca) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined ***)((longlong)param_2 + 0xe0) = &PTR_FUN_14b0238b0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0x43b4000000000000;
  return;
}



// FUNCTION 143c8c7eb FUN_143c8c7eb body=1394 status=ok
// SIG undefined FUN_143c8c7eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8c7eb(void)

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
  FUN_14098d3d2(FUN_143c8aea0,L"/Script/GbxGame",L"EScreenParticleVisibility",&DAT_14cb6f298);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3cdb70);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3cdc50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3cdd00);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3ce090,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3ce4c0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3ceb10,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3cef30,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3cf300,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3cf7e0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3cf880);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3cfbd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3cfec0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d0930);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d0a50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3d0f90,1,&PTR_FUN_14b3d0f40);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb6f488 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d1140);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d13e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3d1570,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3d18f0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d1b40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d1f90);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3d26e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3d27a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d2970);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d2a10);
  _DAT_14cb6f5b0 = 0x47efffffe0000000;
  _DAT_14cb6f5b8 = 0x47efffffe0000000;
  _DAT_14cb6f5c0 = 0x47efffffe0000000;
  _DAT_14cb6f5c8 = 0x47efffffe0000000;
  _DAT_14cb6f5d0 = 0x47efffffe0000000;
  _DAT_14cb6f5d8 = 0x47efffffe0000000;
  _DAT_14cb6f5e0 = 0x47efffffe0000000;
  _DAT_14cb6f5e8 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb6f5f0);
  if (cVar1 == '\0') {
    _DAT_14cb6f5f0 = 0;
    uRam000000014cb6f5f8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb6f604 = 0;
  FUN_14052b5e0(&DAT_14cb6f600,"PlayerAwareness",0);
  _DAT_14cb6f610 = "PlayerAwareness";
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b3d2f70;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d2f90);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3d31d0,3,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d3340);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b3d3ac0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d3ae0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b3d3fc0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d4000);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b3d4e20;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3d4e40);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c8cd60 FUN_143c8cd60 body=55 status=ok
// SIG undefined FUN_143c8cd60(void)

void FUN_143c8cd60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f848 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f848 = FUN_14171c317(FUN_1465419f9,uVar1,L"EUsabilityType");
  }
  return;
}



// FUNCTION 143c8cd97 FUN_143c8cd97 body=55 status=ok
// SIG undefined FUN_143c8cd97(void)

void FUN_143c8cd97(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f860 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f860 = FUN_14171c317(FUN_146541a2a,uVar1,L"EHoldToUseMode");
  }
  return;
}



// FUNCTION 143c8cdce FUN_143c8cdce body=55 status=ok
// SIG undefined FUN_143c8cdce(void)

void FUN_143c8cdce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc88 = FUN_14171c317(FUN_1465430c0,uVar1,L"EWaypointInfoFlag");
  }
  return;
}



// FUNCTION 143c8ce05 FUN_143c8ce05 body=55 status=ok
// SIG undefined FUN_143c8ce05(void)

void FUN_143c8ce05(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fca0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fca0 = FUN_14171c317(FUN_1465430ef,uVar1,L"EWaypointInstanceType");
  }
  return;
}



// FUNCTION 143c8ce3c FUN_143c8ce3c body=55 status=ok
// SIG undefined FUN_143c8ce3c(void)

void FUN_143c8ce3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fd30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fd30 = FUN_14171c317(FUN_1465432d7,uVar1,L"EZoomHandlerValueResolverType");
  }
  return;
}



// FUNCTION 143c8ce73 FUN_143c8ce73 body=41 status=ok
// SIG undefined FUN_143c8ce73(void)

void FUN_143c8ce73(void)

{
  DAT_14cb6fe08 = 0;
  if (DAT_14cb6fe00 != 0) {
    FUN_1400020a8();
  }
  FUN_145d645a2();
  return;
}



// FUNCTION 143c8ceda FUN_143c8ceda body=8 status=ok
// SIG undefined FUN_143c8ceda(void)

undefined * FUN_143c8ceda(void)

{
  return &DAT_14cb70058;
}



// FUNCTION 143c8cee7 FUN_143c8cee7 body=41 status=ok
// SIG undefined FUN_143c8cee7(void)

void FUN_143c8cee7(void)

{
  DAT_14cb6ff20 = 0;
  if (DAT_14cb6ff18 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64640();
  return;
}



// FUNCTION 143c8cf4e FUN_143c8cf4e body=64 status=ok
// SIG undefined FUN_143c8cf4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8cf4e(void)

{
  if (DAT_14cb70030 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb70028 = 0;
  if (DAT_14cb70020 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb6ffe0);
  return;
}



// FUNCTION 143c8cf8e FUN_143c8cf8e body=64 status=ok
// SIG undefined FUN_143c8cf8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8cf8e(void)

{
  if (DAT_14cb700a8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb700a0 = 0;
  if (DAT_14cb70098 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb70058);
  return;
}



// FUNCTION 143c8d06a FUN_143c8d06a body=276 status=ok
// SIG undefined FUN_143c8d06a(void)

void FUN_143c8d06a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b3e4af0;
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
  param_2[5] = DAT_14caa8578;
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 143c8d196 FUN_143c8d196 body=57 status=ok
// SIG undefined FUN_143c8d196(void)

void FUN_143c8d196(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f8b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f8b0 = FUN_140002ddd(FUN_146541b86,uVar1,L"UsabilityPromptDef");
  }
  return;
}



// FUNCTION 143c8d1de FUN_143c8d1de body=57 status=ok
// SIG undefined FUN_143c8d1de(void)

void FUN_143c8d1de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f8e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f8e0 = FUN_140002ddd(FUN_146541c17,uVar1,L"GbxContextParam_PlayerUsingObject");
  }
  return;
}



// FUNCTION 143c8d226 FUN_143c8d226 body=106 status=ok
// SIG undefined FUN_143c8d226(void)

void FUN_143c8d226(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x20) = 2;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x69) = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 2;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  return;
}



// FUNCTION 143c8d41e FUN_143c8d41e body=57 status=ok
// SIG undefined FUN_143c8d41e(void)

void FUN_143c8d41e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc10 =
         FUN_140002ddd(FUN_146542e3e,uVar1,L"WaypointAttachmentStrategyState_RegistryActor");
  }
  return;
}



// FUNCTION 143c8d4ea FUN_143c8d4ea body=57 status=ok
// SIG undefined FUN_143c8d4ea(void)

void FUN_143c8d4ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc70 = FUN_140002ddd(FUN_146543060,uVar1,L"WaypointDef");
  }
  return;
}



// FUNCTION 143c8d570 FUN_143c8d570 body=136 status=ok
// SIG undefined FUN_143c8d570(void)

undefined8
FUN_143c8d570(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_5,1);
  }
  else {
    *param_5 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_5 + 1,1);
  }
  else {
    param_5[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 143c8d641 FUN_143c8d641 body=1808 status=ok
// SIG undefined FUN_143c8d641(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8d641(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  char *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b3d9b60 + lVar3),L"/Script/GbxGame",
                  *(undefined8 *)((longlong)&PTR_u_EUsabilityType_14b3d9b68 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14b3d9b70 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x40);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3da2a0);
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb6f8a0 = (ulonglong)uVar2;
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3da550,1,&PTR_FUN_14b3da520);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3da620);
  FUN_1446f470e(&DAT_14cb6f8f0,L"BP_OnUsed",1);
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3daa20,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3dacd0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3dad80);
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3db0d0,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3db320);
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3db7d0,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3dbdc0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3dbfe0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 0x11;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3dcfa0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3dd630,1,&PTR_FUN_14b3dd600);
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3ddc20,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3ddd70);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3ddf40);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3de100);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3de2b0);
  FUN_14098d3d2(FUN_143c8cdce,L"/Script/GbxGame",L"EWaypointInfoFlag",&DAT_14cb6fc80);
  FUN_14098d3d2(FUN_143c8ce05,L"/Script/GbxGame",L"EWaypointInstanceType");
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3debc0,1,0);
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3dec80,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3ded30);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3dee10);
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3deed0,1,0);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14b3df0f0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3df110);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3dfbb0,2,&PTR_FUN_14b3dfb60);
  DAT_14cb6fe18 = 0;
  _DAT_14cb6fe20 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143c8d636;
  local_98 = &DAT_14011fc1e;
  FUN_14617c246(&local_98);
  atexit((_func_5014 *)&LAB_143c8ce9c);
  _DAT_14cb6feb8 = &LAB_143c8cea1;
  _DAT_14cb6fec0 = 0x469c4000;
  DAT_14cb6fec4 = 1;
  DAT_14cb6feb0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb6feb0;
  atexit((_func_5014 *)&LAB_143c8cea6);
  DAT_14cb6ff30 = 0;
  _DAT_14cb6ff38 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143c8d63c;
  local_98 = &DAT_14011fc1e;
  FUN_14617c942(&local_98);
  atexit((_func_5014 *)&LAB_143c8cf10);
  _DAT_14cb6ffc8 = &LAB_143c8cf15;
  _DAT_14cb6ffd0 = 0x469c4000;
  DAT_14cb6ffd4 = 1;
  DAT_14cb6ffc0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb6ffc0;
  atexit((_func_5014 *)&LAB_143c8cf1a);
  _DAT_14cb70078 = 0;
  _DAT_14cb70080 = 0;
  _DAT_14cb70058 = 0;
  uRam000000014cb70060 = 0;
  _DAT_14cb70084 = 0xffffffff00000080;
  _DAT_14cb7008c = 0;
  DAT_14cb70098 = 0;
  _DAT_14cb700a0 = 0;
  DAT_14cb700a8 = 0;
  uRam000000014cb700b0 = 0;
  _DAT_14cb700b8 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cb700c0);
  atexit(FUN_143c8cf8e);
  local_98 = "ActivityInstanceId";
  local_90 = 0x12;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  DAT_14cb700c8 = (ulonglong)uVar2;
  _DAT_14cb700d0 = 0;
  uRam000000014cb700d8 = 0;
  _DAT_14cb700e0 = 0;
  DAT_14cb700e8 = 0;
  uRam000000014cb700f0 = 0;
  FUN_1446ddda2(&DAT_14cb700d0,"allactivities",0);
  atexit((_func_5014 *)&LAB_143c8cfce);
  _DAT_14cb700f8 = 0;
  uRam000000014cb70100 = 0;
  _DAT_14cb70108 = 0;
  DAT_14cb70110 = 0;
  uRam000000014cb70118 = 0;
  FUN_1446ddda2(&DAT_14cb700f8,"serial",0);
  atexit((_func_5014 *)&LAB_143c8cfdf);
  _DAT_14cb70120 = 0;
  uRam000000014cb70128 = 0;
  _DAT_14cb70130 = 0;
  DAT_14cb70138 = 0;
  uRam000000014cb70140 = 0;
  FUN_1446ddda2(&DAT_14cb70120,"missionstate",0);
  atexit((_func_5014 *)&LAB_143c8cff0);
  _DAT_14cb70150 = 0;
  LOCK();
  DAT_14cb70148 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143c8d001);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_98,&DAT_14cb70158);
  if (cVar1 == '\0') {
    _DAT_14cb70158 = 0;
    uRam000000014cb70160 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb70170 = 0;
  LOCK();
  DAT_14cb70168 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143c8d03a);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c8dd91 FUN_143c8dd91 body=41 status=ok
// SIG undefined FUN_143c8dd91(void)

void FUN_143c8dd91(void)

{
  DAT_14cb702b8 = 0;
  if (DAT_14cb702b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d646de();
  return;
}



// FUNCTION 143c8ddf8 FUN_143c8ddf8 body=41 status=ok
// SIG undefined FUN_143c8ddf8(void)

void FUN_143c8ddf8(void)

{
  DAT_14cb70410 = 0;
  if (DAT_14cb70408 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6477c();
  return;
}



// FUNCTION 143c8de5f FUN_143c8de5f body=41 status=ok
// SIG undefined FUN_143c8de5f(void)

void FUN_143c8de5f(void)

{
  DAT_14cb70520 = 0;
  if (DAT_14cb70518 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6481a();
  return;
}



// FUNCTION 143c8dec6 FUN_143c8dec6 body=59 status=ok
// SIG undefined FUN_143c8dec6(void)

void FUN_143c8dec6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb70608;
  if (DAT_14cb70608 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb70608 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c8def6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c8df02 FUN_143c8df02 body=992 status=ok
// SIG undefined FUN_143c8df02(void)

void FUN_143c8df02(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  int local_5c [2];
  int local_54;
  undefined1 local_50 [4];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x74))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
      (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))) {
    lVar12 = 0;
    plVar5 = plVar9;
    do {
      if (plVar5[5] != 0) {
        lVar12 = *(longlong *)(plVar5[5] + 0x30);
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar12 + 0x360);
        }
        break;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2f0))(plVar5);
    } while (plVar5 != (longlong *)0x0);
    lVar6 = (**(code **)(*plVar9 + 0x2c0))(plVar9);
    if ((lVar12 != 0) && (lVar6 != 0)) {
      FUN_14572638c(&local_68,lVar12);
      local_78 = local_68;
      FUN_1401533ba(local_5c,&local_78,1);
      if (param_3 == '\0') {
        local_88 = (undefined4)*param_2;
        uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_80 = (undefined4)param_2[1];
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_1487b0354(&local_78);
        FUN_1487b0412(lVar6,&local_78);
        if ((longlong)(int)param_2[1] == 0) {
          uVar11 = 0;
        }
        else {
          plVar5 = (longlong *)*param_2;
          plVar9 = plVar5 + (int)param_2[1];
          uVar11 = 0;
          local_a0 = plVar9;
          do {
            lVar12 = *plVar5;
            if (lVar12 != 0) {
              piVar7 = &DAT_14c948620;
              piVar8 = (int *)&DAT_14c948618;
              if (*(int *)(lVar12 + 0x28) != 0) {
                piVar7 = &DAT_14c948620;
                piVar8 = (int *)&DAT_14c948618;
                if (*(int *)(lVar12 + 0x2c) != 0) {
                  piVar7 = &DAT_14c948620;
                  piVar8 = (int *)&DAT_14c948618;
                  if (*(int *)(lVar12 + 0x28) != DAT_14c948000) {
                    piVar7 = &DAT_14c948620;
                    piVar8 = (int *)&DAT_14c948618;
                    if (1 < *(int *)(lVar12 + 0x2c)) {
                      piVar8 = (int *)(*(longlong *)(lVar12 + 0x40) + 0xc);
                      piVar7 = (int *)(*(longlong *)(lVar12 + 0x40) + 0x14);
                    }
                  }
                }
              }
              if (((*piVar8 == local_5c[0]) && (*piVar7 == local_54)) &&
                 (iVar4 = *(int *)(param_1 + 0x80), (longlong)iVar4 != 0)) {
                local_90 = *(longlong *)(param_1 + 0x78);
                lVar6 = local_90 + 8;
                lVar13 = 0;
                local_98 = uVar11;
                do {
                  cVar3 = FUN_14493b798(lVar13 + lVar6,lVar12 + 0x18);
                  uVar11 = local_98;
                  plVar9 = local_a0;
                  if (cVar3 != '\0') {
                    iVar4 = *(int *)(local_90 + 0x80 + lVar13);
                    if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x80))) {
                      FUN_1487b04b6(param_1);
                      uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
                    }
                    break;
                  }
                  lVar13 = lVar13 + 0x280;
                } while ((longlong)iVar4 * 0x280 != lVar13);
              }
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar9);
        }
        FUN_1405d7ab2(local_78,local_70);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if ((uVar11 & 1) == 0) goto LAB_143c8dfd2;
      }
      else {
        if ((longlong)(int)param_2[1] == 0) goto LAB_143c8dfd2;
        plVar5 = (longlong *)*param_2;
        plVar9 = plVar5 + (int)param_2[1];
        bVar10 = false;
LAB_143c8e058:
        do {
          lVar12 = *plVar5;
          if (lVar12 != 0) {
            piVar7 = &DAT_14c948620;
            piVar8 = (int *)&DAT_14c948618;
            if (*(int *)(lVar12 + 0x28) != 0) {
              piVar7 = &DAT_14c948620;
              piVar8 = (int *)&DAT_14c948618;
              if (*(int *)(lVar12 + 0x2c) != 0) {
                piVar7 = &DAT_14c948620;
                piVar8 = (int *)&DAT_14c948618;
                if (*(int *)(lVar12 + 0x28) != DAT_14c948000) {
                  piVar7 = &DAT_14c948620;
                  piVar8 = (int *)&DAT_14c948618;
                  if (1 < *(int *)(lVar12 + 0x2c)) {
                    piVar8 = (int *)(*(longlong *)(lVar12 + 0x40) + 0xc);
                    piVar7 = (int *)(*(longlong *)(lVar12 + 0x40) + 0x14);
                  }
                }
              }
            }
            if (((*piVar8 == local_5c[0]) && (*piVar7 == local_54)) &&
               ((iVar4 = FUN_1409c755a(param_1), -1 < iVar4 && (iVar4 < *(int *)(param_1 + 0x80)))))
            {
              iVar2 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
                FUN_1446f48e2(param_1 + 0x98,iVar2);
              }
              *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 4) = iVar4;
              local_4c = 0;
              FUN_141130d84(param_1,iVar4,0,local_50);
              plVar5 = plVar5 + 1;
              bVar10 = true;
              if (plVar5 == plVar9) goto LAB_143c8e133;
              goto LAB_143c8e058;
            }
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar9);
        if (!bVar10) goto LAB_143c8dfd2;
      }
LAB_143c8e133:
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x58));
      FUN_1487b5f14(param_1 + 0x288);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x58));
      FUN_1449f36ec(param_1);
      FUN_140b61c9c(param_1);
    }
  }
LAB_143c8dfd2:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c8e2e4 FUN_143c8e2e4 body=992 status=ok
// SIG undefined FUN_143c8e2e4(void)

void FUN_143c8e2e4(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  int local_5c [2];
  int local_54;
  undefined1 local_50 [4];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x74))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
      (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))) {
    lVar12 = 0;
    plVar5 = plVar9;
    do {
      if (plVar5[5] != 0) {
        lVar12 = *(longlong *)(plVar5[5] + 0x30);
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(lVar12 + 0x360);
        }
        break;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2f0))(plVar5);
    } while (plVar5 != (longlong *)0x0);
    lVar6 = (**(code **)(*plVar9 + 0x2c0))(plVar9);
    if ((lVar12 != 0) && (lVar6 != 0)) {
      FUN_14572638c(&local_68,lVar12);
      local_78 = local_68;
      FUN_1401533ba(local_5c,&local_78,1);
      if (param_3 == '\0') {
        local_88 = (undefined4)*param_2;
        uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_80 = (undefined4)param_2[1];
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_1487b0620(&local_78);
        FUN_1487b0412(lVar6,&local_78);
        if ((longlong)(int)param_2[1] == 0) {
          uVar11 = 0;
        }
        else {
          plVar5 = (longlong *)*param_2;
          plVar9 = plVar5 + (int)param_2[1];
          uVar11 = 0;
          local_a0 = plVar9;
          do {
            lVar12 = *plVar5;
            if (lVar12 != 0) {
              piVar7 = &DAT_14c948620;
              piVar8 = (int *)&DAT_14c948618;
              if (*(int *)(lVar12 + 0x28) != 0) {
                piVar7 = &DAT_14c948620;
                piVar8 = (int *)&DAT_14c948618;
                if (*(int *)(lVar12 + 0x2c) != 0) {
                  piVar7 = &DAT_14c948620;
                  piVar8 = (int *)&DAT_14c948618;
                  if (*(int *)(lVar12 + 0x28) != DAT_14c948000) {
                    piVar7 = &DAT_14c948620;
                    piVar8 = (int *)&DAT_14c948618;
                    if (1 < *(int *)(lVar12 + 0x2c)) {
                      piVar8 = (int *)(*(longlong *)(lVar12 + 0x40) + 0xc);
                      piVar7 = (int *)(*(longlong *)(lVar12 + 0x40) + 0x14);
                    }
                  }
                }
              }
              if (((*piVar8 == local_5c[0]) && (*piVar7 == local_54)) &&
                 (iVar4 = *(int *)(param_1 + 0x80), (longlong)iVar4 != 0)) {
                local_90 = *(longlong *)(param_1 + 0x78);
                lVar6 = local_90 + 8;
                lVar13 = 0;
                local_98 = uVar11;
                do {
                  cVar3 = FUN_14493b798(lVar13 + lVar6,lVar12 + 0x18);
                  uVar11 = local_98;
                  plVar9 = local_a0;
                  if (cVar3 != '\0') {
                    iVar4 = *(int *)(local_90 + 0x80 + lVar13);
                    if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x80))) {
                      FUN_1487b04b6(param_1);
                      uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
                    }
                    break;
                  }
                  lVar13 = lVar13 + 0x280;
                } while ((longlong)iVar4 * 0x280 != lVar13);
              }
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar9);
        }
        FUN_1405d7ab2(local_78,local_70);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if ((uVar11 & 1) == 0) goto LAB_143c8e3b4;
      }
      else {
        if ((longlong)(int)param_2[1] == 0) goto LAB_143c8e3b4;
        plVar5 = (longlong *)*param_2;
        plVar9 = plVar5 + (int)param_2[1];
        bVar10 = false;
LAB_143c8e43a:
        do {
          lVar12 = *plVar5;
          if (lVar12 != 0) {
            piVar7 = &DAT_14c948620;
            piVar8 = (int *)&DAT_14c948618;
            if (*(int *)(lVar12 + 0x28) != 0) {
              piVar7 = &DAT_14c948620;
              piVar8 = (int *)&DAT_14c948618;
              if (*(int *)(lVar12 + 0x2c) != 0) {
                piVar7 = &DAT_14c948620;
                piVar8 = (int *)&DAT_14c948618;
                if (*(int *)(lVar12 + 0x28) != DAT_14c948000) {
                  piVar7 = &DAT_14c948620;
                  piVar8 = (int *)&DAT_14c948618;
                  if (1 < *(int *)(lVar12 + 0x2c)) {
                    piVar8 = (int *)(*(longlong *)(lVar12 + 0x40) + 0xc);
                    piVar7 = (int *)(*(longlong *)(lVar12 + 0x40) + 0x14);
                  }
                }
              }
            }
            if (((*piVar8 == local_5c[0]) && (*piVar7 == local_54)) &&
               ((iVar4 = FUN_14493b030(param_1), -1 < iVar4 && (iVar4 < *(int *)(param_1 + 0x80)))))
            {
              iVar2 = *(int *)(param_1 + 0xa0);
              *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
              if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
                FUN_1446f48e2(param_1 + 0x98,iVar2);
              }
              *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 4) = iVar4;
              local_4c = 0;
              FUN_141130d84(param_1,iVar4,0,local_50);
              plVar5 = plVar5 + 1;
              bVar10 = true;
              if (plVar5 == plVar9) goto LAB_143c8e515;
              goto LAB_143c8e43a;
            }
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar9);
        if (!bVar10) goto LAB_143c8e3b4;
      }
LAB_143c8e515:
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x58));
      FUN_1487b5f14(param_1 + 0x288);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x58));
      FUN_1449f36ec(param_1);
      FUN_140b61c9c(param_1);
    }
  }
LAB_143c8e3b4:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c8e6c6 FUN_143c8e6c6 body=894 status=ok
// SIG undefined FUN_143c8e6c6(void)

void FUN_143c8e6c6(longlong *param_1,undefined8 *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  longlong *local_98;
  char *local_90;
  char local_81;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  longlong **local_60;
  undefined1 *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((((*(int *)((longlong)param_1 + 0x74) != 0) &&
        (uVar1 = *(uint *)(param_1 + 0xe), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x74))))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
      (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
    lVar7 = 0;
    plVar3 = plVar6;
    do {
      if (plVar3[5] != 0) {
        lVar7 = *(longlong *)(plVar3[5] + 0x30);
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)(lVar7 + 0x360);
        }
        break;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
    } while (plVar3 != (longlong *)0x0);
    lVar4 = (**(code **)(*plVar6 + 0x2c0))(plVar6);
    lVar2 = DAT_14cb84f20;
    if ((DAT_14cb84f20 != 0 && lVar7 != 0) && lVar4 != 0) {
      FUN_14572638c(&local_80,lVar7);
      local_81 = '\0';
      if (param_3 == '\0') {
        local_d8 = *(undefined4 *)param_2;
        uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_d0 = *(undefined4 *)(param_2 + 1);
        uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_1487b051e(&local_c0);
        FUN_1487b0412(lVar4,&local_c0);
        if ((longlong)*(int *)(param_2 + 1) != 0) {
          plVar6 = (longlong *)*param_2;
          lVar7 = (longlong)*(int *)(param_2 + 1) << 3;
          do {
            lVar4 = *plVar6;
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x20) == local_80)) {
              local_90 = &local_81;
              local_e8 = *(undefined8 *)(lVar4 + 0x28);
              local_e0 = *(undefined4 *)(lVar4 + 0x30);
              local_68 = FUN_143c932f2;
              local_60 = &local_a0;
              local_58 = &LAB_143c930c8;
              local_a0 = plVar6;
              local_98 = param_1;
              local_50 = &local_68;
              uVar5 = FUN_1401ad114();
              local_78 = local_e8;
              local_70 = local_e0;
              FUN_140e9367e(lVar2,&local_78,uVar5,&local_58);
            }
            plVar6 = plVar6 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        FUN_1405d7ab2(local_c0,local_b8);
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
      }
      else if ((longlong)*(int *)(param_2 + 1) != 0) {
        plVar6 = (longlong *)*param_2;
        lVar7 = (longlong)*(int *)(param_2 + 1) << 3;
        do {
          lVar4 = *plVar6;
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x20) == local_80)) {
            local_90 = &local_81;
            local_b0 = *(longlong *)(lVar4 + 0x28);
            local_a8 = *(undefined4 *)(lVar4 + 0x30);
            local_68 = FUN_143c93234;
            local_60 = &local_a0;
            local_58 = &LAB_143c930c8;
            local_a0 = param_1;
            local_98 = plVar6;
            local_50 = &local_68;
            uVar5 = FUN_1401ad114();
            local_c0 = local_b0;
            local_b8 = local_a8;
            FUN_140e9367e(lVar2,&local_c0,uVar5,&local_58);
          }
          plVar6 = plVar6 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (local_81 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb));
        FUN_1487b5f14(param_1 + 0x51);
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb));
        FUN_1449f36ec(param_1);
        FUN_140b61c9c(param_1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c8ea46 FUN_143c8ea46 body=370 status=ok
// SIG undefined FUN_143c8ea46(void)

void FUN_143c8ea46(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60 [2];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 0x48) != 0) {
    plVar5 = &local_50;
    FUN_140631198(param_2,plVar5);
    FUN_1400021e4(param_2 + 0x88,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    iVar2 = *(int *)(param_1 + 0xa0);
    iVar3 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_140ab114a(param_1,plVar5,param_2,iVar3 >> 2);
    iVar2 = *(int *)(param_1 + 0xa0);
    if (local_48 == 0) {
      lVar1 = param_1 + (ulonglong)(iVar2 != 0) * 0x10;
      plVar5 = (longlong *)(lVar1 + 0x88);
      local_48 = *(int *)(lVar1 + 0x90);
    }
    iVar3 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar3 >> 2 <= local_48) {
      FUN_1400021e4(param_2 + 0x88,local_60);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      local_48 = (int)plVar5[1];
    }
    if (local_48 != 0) {
      lVar1 = *plVar5;
      lVar4 = 0;
      do {
        local_70 = 0;
        local_68 = 0;
        local_88 = param_3;
        local_80 = &local_70;
        FUN_143c8ebba(param_1,0xffffffff,*(undefined4 *)(lVar1 + lVar4),param_2);
        lVar4 = lVar4 + 4;
      } while ((longlong)local_48 * 4 != lVar4);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c8ebba FUN_143c8ebba body=3979 status=ok
// SIG undefined FUN_143c8ebba(void)

void FUN_143c8ebba(ulonglong param_1,uint param_2,uint param_3,longlong param_4,longlong *param_5,
                  undefined8 *param_6)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 *local_290;
  longlong local_288;
  ulonglong local_280;
  int local_278;
  int local_274;
  int *local_270;
  uint local_268;
  int local_264;
  longlong local_260;
  longlong local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  ulonglong uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 *local_128;
  undefined8 local_120;
  int local_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_288 = param_4;
  local_280 = param_1;
  if ((-1 < (int)param_3) && (uVar7 = *(uint *)(param_1 + 0x80), (int)param_3 < (int)uVar7)) {
    lVar20 = *(longlong *)(param_1 + 0x78);
    lVar21 = (ulonglong)param_3 * 0x280;
    bVar24 = (int)param_2 < 0;
    lVar23 = *(longlong *)(lVar20 + 0x250 + lVar21);
    if ((*(char *)(lVar20 + 0x90 + lVar21) == '\0') && ((bVar24 || uVar7 <= param_2) || lVar23 == 0)
       ) {
      lVar20 = lVar20 + lVar21;
      if (bVar24 || uVar7 <= param_2) {
        if (*(longlong *)(lVar20 + 600) != 0) goto LAB_143c8f0b6;
        if ((longlong)*(int *)(param_4 + 0x70) != 0) {
          local_270 = (int *)(lVar20 + 8);
          lVar13 = *(longlong *)(param_4 + 0x68);
          lVar15 = (longlong)*(int *)(param_4 + 0x70) * 0x38;
          do {
            cVar5 = FUN_14493b798(lVar13,local_270);
            if (cVar5 != '\0') goto LAB_143c8f0b6;
            lVar13 = lVar13 + 0x38;
            lVar15 = lVar15 + -0x38;
          } while (lVar15 != 0);
        }
      }
      if (lVar23 == 0) {
        if (*(char *)(local_288 + 0x84) == '\x01') {
          if (*(longlong *)(lVar20 + 600) == 0) {
            iVar6 = 0;
            iVar8 = 0;
          }
          else {
            piVar9 = *(int **)(*(longlong *)(lVar20 + 600) + 8);
            piVar11 = &DAT_14c9485f0;
            if (piVar9 != (int *)0x0) {
              piVar11 = piVar9;
            }
            piVar9 = (int *)&DAT_14c948618;
            if (((*piVar11 != 0) && (iVar8 = piVar11[1], iVar8 != 0)) && (*piVar11 != DAT_14c948000)
               ) {
              if ((iVar8 < 2) && (piVar11[9] < 1)) {
                piVar11 = piVar11 + 2;
              }
              else {
                piVar11 = *(int **)(piVar11 + 6);
              }
              if (0 < iVar8) {
                piVar9 = piVar11;
              }
            }
            iVar8 = *piVar9;
            iVar6 = piVar9[2];
          }
          if ((iVar8 != *(int *)(local_288 + 0x78)) || (iVar6 != *(int *)(local_288 + 0x80)))
          goto LAB_143c8f0b6;
        }
        local_128 = (undefined8 *)0x0;
        local_120 = 0x2000000000;
        if (*(int *)(lVar20 + 0x150) != *(int *)(lVar20 + 0x17c)) {
          lVar23 = lVar20 + 0x180;
          if (*(longlong *)(lVar20 + 0x188) != 0) {
            lVar23 = *(longlong *)(lVar20 + 0x188);
          }
          iVar8 = *(int *)(lVar23 + (ulonglong)(*(int *)(lVar20 + 400) - 1U & param_2) * 4);
          if (iVar8 != -1) {
            do {
              lVar23 = *(longlong *)(lVar20 + 0x148) + (longlong)iVar8 * 0x30;
              if (*(uint *)(*(longlong *)(lVar20 + 0x148) + (longlong)iVar8 * 0x30) == param_2)
              goto LAB_143c8f271;
              iVar8 = *(int *)(lVar23 + 0x28);
            } while (iVar8 != -1);
          }
        }
        lVar23 = 0;
LAB_143c8f271:
        lVar21 = lVar23 + 8;
        if (lVar23 == 0) {
          lVar21 = 0;
        }
        if (lVar21 == 0) {
          lVar21 = lVar20 + 0x40;
        }
        if (bVar24 || uVar7 <= param_2) {
          lVar21 = lVar20 + 0x40;
        }
        if (*(int *)(lVar20 + 0x1a0) != *(int *)(lVar20 + 0x1cc)) {
          lVar23 = lVar20 + 0x1d0;
          if (*(longlong *)(lVar20 + 0x1d8) != 0) {
            lVar23 = *(longlong *)(lVar20 + 0x1d8);
          }
          iVar8 = *(int *)(lVar23 + (ulonglong)(*(int *)(lVar20 + 0x1e0) - 1U & param_2) * 4);
          if (iVar8 != -1) {
            do {
              lVar23 = *(longlong *)(lVar20 + 0x198) + (longlong)iVar8 * 0x30;
              if (*(uint *)(*(longlong *)(lVar20 + 0x198) + (longlong)iVar8 * 0x30) == param_2)
              goto LAB_143c8f2f3;
              iVar8 = *(int *)(lVar23 + 0x28);
            } while (iVar8 != -1);
          }
        }
        lVar23 = 0;
LAB_143c8f2f3:
        lVar13 = lVar23 + 8;
        if (lVar23 == 0) {
          lVar13 = 0;
        }
        if (lVar13 == 0) {
          lVar13 = lVar20 + 0x60;
        }
        if (bVar24 || uVar7 <= param_2) {
          lVar13 = lVar20 + 0x60;
        }
        if (*(longlong *)(local_288 + 8) == *(longlong *)(lVar13 + 8)) {
          uVar7 = *(uint *)(local_288 + 0x18);
          uVar12 = *(uint *)(lVar13 + 0x18);
          uVar17 = uVar12;
          if ((int)uVar7 < (int)uVar12) {
            uVar17 = uVar7;
          }
          if (0 < (int)uVar17) {
            uVar18 = 0;
            do {
              if ((*(ulonglong *)(*(longlong *)(lVar13 + 0x10) + uVar18 * 8) &
                  ~*(ulonglong *)(*(longlong *)(local_288 + 0x10) + uVar18 * 8)) != 0)
              goto LAB_143c8f0b6;
              uVar18 = uVar18 + 1;
            } while (uVar17 != uVar18);
          }
          if ((int)uVar7 < (int)uVar12) {
            lVar23 = 0;
            do {
              if (*(longlong *)
                   ((longlong)(int)uVar7 * 8 + *(longlong *)(lVar13 + 0x10) + lVar23 * 8) != 0)
              goto LAB_143c8f0b6;
              lVar23 = lVar23 + 1;
            } while (uVar12 - uVar7 != (int)lVar23);
          }
          if (*(longlong *)(lVar21 + 8) == *(longlong *)(local_288 + 8)) {
            uVar12 = *(uint *)(lVar21 + 0x18);
            uVar17 = uVar7;
            if ((int)uVar12 < (int)uVar7) {
              uVar17 = uVar12;
            }
            if (0 < (int)uVar17) {
              uVar18 = 0;
              do {
                if ((*(ulonglong *)(*(longlong *)(local_288 + 0x10) + uVar18 * 8) &
                    ~*(ulonglong *)(*(longlong *)(lVar21 + 0x10) + uVar18 * 8)) != 0)
                goto LAB_143c8f0b6;
                uVar18 = uVar18 + 1;
              } while (uVar17 != uVar18);
            }
            if ((int)uVar12 < (int)uVar7) {
              lVar23 = 0;
              do {
                if (*(longlong *)
                     ((longlong)(int)uVar12 * 8 + *(longlong *)(local_288 + 0x10) + lVar23 * 8) != 0
                   ) goto LAB_143c8f0b6;
                lVar23 = lVar23 + 1;
              } while (uVar7 - uVar12 != (int)lVar23);
            }
            cVar5 = FUN_1405d595e();
            if (cVar5 == '\0') {
              if ((longlong)*(int *)(lVar20 + 0xf0) != 0) {
                lVar23 = *(longlong *)(lVar20 + 0xe8);
                lVar21 = (longlong)*(int *)(lVar20 + 0xf0) * 0x90;
                do {
                  lVar13 = (longlong)(int)local_120;
                  uVar7 = (int)local_120 + 1;
                  local_120 = CONCAT44(local_120._4_4_,uVar7);
                  if (local_120._4_4_ < uVar7) {
                    FUN_141863f18();
                  }
                  puVar10 = local_128;
                  if (local_128 == (undefined8 *)0x0) {
                    puVar10 = &local_228;
                  }
                  puVar10[lVar13] = lVar23;
                  lVar23 = lVar23 + 0x90;
                  lVar21 = lVar21 + -0x90;
                } while (lVar21 != 0);
              }
              if (0 < (longlong)*(int *)(param_6 + 1)) {
                piVar11 = (int *)*param_6;
                piVar9 = piVar11 + *(int *)(param_6 + 1);
                do {
                  iVar8 = *piVar11;
                  if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(local_280 + 0x80))) {
                    lVar21 = (longlong)iVar8 * 0x280;
                    lVar23 = (longlong)*(int *)(*(longlong *)(local_280 + 0x78) + 0xf0 + lVar21);
                    if (lVar23 != 0) {
                      lVar21 = *(longlong *)(*(longlong *)(local_280 + 0x78) + 0xe8 + lVar21);
                      lVar23 = lVar23 * 0x90;
                      do {
                        lVar13 = (longlong)(int)local_120;
                        uVar7 = (int)local_120 + 1;
                        local_120 = CONCAT44(local_120._4_4_,uVar7);
                        if (local_120._4_4_ < uVar7) {
                          FUN_141863f18();
                        }
                        puVar10 = local_128;
                        if (local_128 == (undefined8 *)0x0) {
                          puVar10 = &local_228;
                        }
                        puVar10[lVar13] = lVar21;
                        lVar21 = lVar21 + 0x90;
                        lVar23 = lVar23 + -0x90;
                      } while (lVar23 != 0);
                    }
                  }
                  piVar11 = piVar11 + 1;
                } while (piVar11 != piVar9);
              }
              local_248 = (undefined8 *)0x0;
              uVar7 = *(uint *)(local_288 + 0x48);
              uStack_240 = (ulonglong)uVar7;
              if ((longlong)(int)uVar7 != 0) {
                FUN_140bfc2d4(&local_248);
              }
              memset(local_248,0,(longlong)(int)uVar7 << 4);
              if (0 < *(int *)(local_288 + 0x48)) {
                lVar23 = 0;
                iVar8 = (int)local_120;
                do {
                  plVar14 = local_248 + lVar23 * 2;
                  if (0 < iVar8) {
                    local_280 = *(longlong *)(local_288 + 0x50) + lVar23 * 0x20;
                    lVar21 = lVar23 * 0x20 + *(longlong *)(local_288 + 0x40);
                    lVar13 = 0;
                    do {
                      puVar10 = local_128;
                      if (local_128 == (undefined8 *)0x0) {
                        puVar10 = &local_228;
                      }
                      lVar15 = puVar10[lVar13];
                      if (*(longlong *)(lVar15 + 0x48) == *(longlong *)(lVar21 + 8)) {
                        uVar7 = *(uint *)(lVar15 + 0x58);
                        uVar12 = *(uint *)(lVar21 + 0x18);
                        uVar17 = uVar12;
                        if ((int)uVar7 < (int)uVar12) {
                          uVar17 = uVar7;
                        }
                        if (0 < (int)uVar17) {
                          uVar18 = 0;
                          do {
                            if ((*(ulonglong *)(*(longlong *)(lVar21 + 0x10) + uVar18 * 8) &
                                ~*(ulonglong *)(*(longlong *)(lVar15 + 0x50) + uVar18 * 8)) != 0)
                            goto LAB_143c8f683;
                            uVar18 = uVar18 + 1;
                          } while (uVar17 != uVar18);
                        }
                        if ((int)uVar7 < (int)uVar12) {
                          lVar19 = 0;
                          do {
                            if (*(longlong *)
                                 ((longlong)(int)uVar7 * 8 + *(longlong *)(lVar21 + 0x10) +
                                 lVar19 * 8) != 0) goto LAB_143c8f683;
                            lVar19 = lVar19 + 1;
                          } while (uVar12 - uVar7 != (int)lVar19);
                        }
                        cVar5 = FUN_1405d595e(lVar15 + 0x40);
                        if (cVar5 == '\0') {
                          lVar15 = plVar14[1];
                          uVar7 = (int)lVar15 + 1;
                          *(uint *)(plVar14 + 1) = uVar7;
                          if (*(uint *)((longlong)plVar14 + 0xc) < uVar7) {
                            FUN_1446f48e2(plVar14);
                          }
                          *(int *)(*plVar14 + (longlong)(int)lVar15 * 4) = (int)lVar13;
                          iVar8 = (int)local_120;
                        }
                      }
LAB_143c8f683:
                      lVar13 = lVar13 + 1;
                    } while (lVar13 < iVar8);
                  }
                  if ((int)plVar14[1] == 0) goto LAB_143c8fad3;
                  lVar23 = lVar23 + 1;
                } while (lVar23 < *(int *)(local_288 + 0x48));
              }
              puVar10 = local_128;
              if (local_128 == (undefined8 *)0x0) {
                puVar10 = &local_228;
              }
              if ((int)uStack_240 != 0) {
                local_238 = 0;
                uStack_230 = 0;
                local_280 = 0;
LAB_143c8f711:
                if ((longlong)(int)uStack_240 != 0) goto code_r0x000143c8f71f;
LAB_143c8f89a:
                local_f8 = 0;
                local_108 = 0;
                uStack_100 = 0;
                uStack_dc = 0;
                uStack_d8 = 0;
                local_d0 = 0;
                uStack_c8 = 0;
                local_c0 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                local_88 = (void *)0x0;
                uStack_80 = 0;
                local_f0 = 0;
                uStack_e8 = 0;
                local_e0 = 0;
                uStack_a4 = *(undefined4 *)(lVar20 + 0x80);
                local_a8 = 0x3f800000;
                local_118 = (int)*(undefined8 *)(lVar20 + 8);
                uStack_114 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 8) >> 0x20);
                uStack_110 = *(uint *)(lVar20 + 0x10);
                FUN_1447715ec(&local_108,lVar20 + 0x18);
                uStack_a0 = *(undefined8 *)(lVar20 + 0x210);
                uStack_98 = *(undefined8 *)(lVar20 + 0x218);
                uStack_90 = *(undefined8 *)(lVar20 + 0x220);
                if (0 < (int)uStack_230) {
                  lVar20 = 0;
                  do {
                    uVar18 = uStack_80;
                    puVar4 = (undefined4 *)puVar10[*(int *)(local_238 + lVar20 * 4)];
                    lVar23 = (longlong)(int)uStack_80;
                    uVar7 = (int)uStack_80 + 1;
                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
                    if (uStack_80._4_4_ < uVar7) {
                      FUN_1446f48e2(&local_88,uVar18 & 0xffffffff);
                    }
                    *(undefined4 *)((longlong)local_88 + lVar23 * 4) = *puVar4;
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < (int)uStack_230);
                }
                iVar8 = (int)param_5[1];
                *(uint *)(param_5 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_5 + 0xc) < iVar8 + 1U) {
                  FUN_141864142(param_5,iVar8);
                }
                lVar23 = *param_5;
                lVar13 = (longlong)iVar8 * 0xa0;
                puVar10 = (undefined8 *)(lVar23 + lVar13);
                *(undefined2 *)puVar10 = 0;
                *(undefined8 *)((longlong)puVar10 + 4) = 0;
                puVar10[2] = 0;
                puVar10[3] = 0;
                *(undefined4 *)(puVar10 + 4) = 0;
                puVar10[5] = 0;
                puVar10[6] = 0;
                *(uint *)(puVar10 + 1) = uStack_110;
                *puVar10 = CONCAT44(uStack_114,local_118);
                FUN_1447715ec(puVar10 + 2,&local_108);
                *(undefined2 *)(puVar10 + 7) = 0;
                *(undefined8 *)((longlong)puVar10 + 0x3c) = 0;
                lVar20 = lVar23 + lVar13;
                *(undefined8 *)(lVar20 + 0x48) = 0;
                *(undefined8 *)(lVar20 + 0x50) = 0;
                *(undefined4 *)(lVar20 + 0x58) = 0;
                *(undefined8 *)(lVar20 + 0x60) = 0;
                *(undefined8 *)(lVar20 + 0x68) = 0;
                *(ulonglong *)(lVar20 + 0x38) = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
                *(undefined4 *)(lVar20 + 0x40) = uStack_d8;
                FUN_1447715ec((undefined8 *)(lVar20 + 0x48),&local_d0);
                _Src = local_88;
                *(ulonglong *)(lVar20 + 0x70) = CONCAT44(uStack_a4,local_a8);
                *(undefined8 *)(lVar20 + 0x78) = uStack_a0;
                *(undefined4 *)(lVar20 + 0x80) = (undefined4)uStack_98;
                *(undefined4 *)(lVar20 + 0x84) = uStack_98._4_4_;
                *(undefined4 *)(lVar20 + 0x88) = (undefined4)uStack_90;
                *(undefined4 *)(lVar20 + 0x8c) = uStack_90._4_4_;
                *(undefined8 *)(lVar20 + 0x90) = 0;
                lVar21 = (longlong)(int)uStack_80;
                *(int *)(lVar20 + 0x98) = (int)uStack_80;
                if (lVar21 == 0) {
                  *(undefined4 *)(lVar23 + lVar13 + 0x9c) = 0;
                }
                else {
                  puVar10 = (undefined8 *)(lVar23 + lVar13 + 0x90);
                  FUN_144a06ca8(puVar10,uStack_80 & 0xffffffff,0);
                  memcpy((void *)*puVar10,_Src,lVar21 << 2);
                }
                if (local_88 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_b8 != 0) {
                  FUN_1400020a8();
                }
                if (local_f0 != 0) {
                  FUN_1400020a8();
                }
LAB_143c8fac1:
                if (local_238 != 0) {
                  FUN_1400020a8();
                }
              }
LAB_143c8fad3:
              FUN_144716727(local_248,uStack_240 & 0xffffffff);
              if (local_248 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
      else {
        local_268 = param_3;
        if (0 < *(int *)(*(longlong *)(local_280 + 0x78) + 0x120 + lVar21)) {
          lVar21 = *(longlong *)(local_280 + 0x78) + lVar21;
          local_258 = lVar21 + 0x128;
          local_250 = (undefined8 *)(lVar21 + 8);
          local_270 = (int *)(lVar21 + 0x18);
          local_260 = lVar21 + 0x20;
          lVar20 = 0;
          do {
            uVar7 = *(uint *)(*(longlong *)(lVar21 + 0x118) + lVar20 * 4);
            if ((int)uVar7 < *(int *)(local_280 + 0x80) && -1 < (int)uVar7) {
              lVar23 = *(longlong *)(local_280 + 0x78);
              lVar13 = (ulonglong)uVar7 * 0x280;
              uVar12 = -(uint)(lVar23 + lVar13 == 0) | uVar7 |
                       -(uint)(*(longlong *)(lVar23 + 600 + lVar13) == 0);
              if (((int)uVar12 < *(int *)(local_280 + 0x80) && -1 < (int)uVar12) &&
                 (lVar13 = *(longlong *)(lVar23 + 600 + (ulonglong)uVar12 * 0x280),
                 lVar23 + (ulonglong)uVar12 * 0x280 != 0 && lVar13 != 0)) {
                piVar9 = *(int **)(lVar13 + 8);
                if (piVar9 == (int *)0x0) {
                  piVar9 = &DAT_14c9485f0;
                }
                piVar11 = (int *)&DAT_14c948618;
                if (*piVar9 != 0) {
                  iVar8 = piVar9[1];
                  piVar11 = (int *)&DAT_14c948618;
                  if ((iVar8 != 0) && (piVar11 = (int *)&DAT_14c948618, *piVar9 != DAT_14c948000)) {
                    if ((iVar8 < 2) && (piVar9[9] < 1)) {
                      piVar9 = piVar9 + 2;
                    }
                    else {
                      piVar9 = *(int **)(piVar9 + 6);
                    }
                    piVar11 = (int *)&DAT_14c948618;
                    if (0 < iVar8) {
                      piVar11 = piVar9;
                    }
                  }
                }
                local_278 = piVar11[2];
                local_274 = *piVar11;
                local_264 = piVar11[1];
                if ((*(char *)(local_288 + 0x84) != '\x01') ||
                   ((local_274 == *(int *)(local_288 + 0x78) &&
                    (local_278 == *(int *)(local_288 + 0x80))))) {
                  if (lVar20 < *(int *)(lVar21 + 0x140)) {
                    lVar23 = *(longlong *)(lVar21 + 0x138);
                    if (*(longlong *)(lVar21 + 0x138) == 0) {
                      lVar23 = local_258;
                    }
                    local_228 = *(undefined8 *)(lVar23 + lVar20 * 0x10);
                    local_220 = *(undefined4 *)(lVar23 + 8 + lVar20 * 0x10);
                  }
                  else {
                    local_228 = 0;
                    local_220 = 0;
                  }
                  lVar23 = param_5[1];
                  lVar13 = (longlong)(int)lVar23;
                  local_290 = &local_228;
                  local_298 = param_5;
                  FUN_143c8ebba(local_280,local_268,(ulonglong)uVar7,local_288);
                  if ((int)lVar23 < (int)param_5[1]) {
                    lVar23 = lVar13 * 0xa0 + 0x48;
                    do {
                      lVar15 = *param_5;
                      *(undefined4 *)(lVar15 + 0x2c + lVar23) = *(undefined4 *)(lVar21 + 0x80);
                      *(undefined8 *)(lVar15 + -0x10 + lVar23) = *local_250;
                      *(undefined4 *)(lVar15 + -8 + lVar23) = *(undefined4 *)(local_250 + 1);
                      FUN_1447715ec(lVar15 + lVar23,local_270);
                      local_238 = CONCAT44(local_264,local_274);
                      uStack_230 = CONCAT44(uStack_230._4_4_,local_278);
                      FUN_144928d62(lVar15 + lVar23,5,&local_238);
                      dVar1 = *(double *)(lVar21 + 0x220);
                      dVar2 = *(double *)(lVar21 + 0x218);
                      *(double *)(lVar15 + 0x30 + lVar23) =
                           *(double *)(lVar21 + 0x210) + *(double *)(lVar15 + 0x30 + lVar23);
                      *(double *)(lVar15 + 0x38 + lVar23) =
                           dVar2 + *(double *)(lVar15 + 0x38 + lVar23);
                      *(double *)(lVar15 + 0x40 + lVar23) =
                           *(double *)(lVar15 + 0x40 + lVar23) + dVar1;
                      puVar10 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
                      piVar9 = (int *)&DAT_14c948618;
                      if (*(int *)(lVar21 + 0x18) != 0) {
                        iVar8 = *(int *)(lVar21 + 0x1c);
                        puVar10 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
                        piVar9 = (int *)&DAT_14c948618;
                        if (iVar8 != 0) {
                          puVar10 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
                          piVar9 = (int *)&DAT_14c948618;
                          if (*(int *)(lVar21 + 0x18) != DAT_14c948000) {
                            if ((1 < iVar8) || (lVar19 = local_260, 0 < *(int *)(lVar21 + 0x3c))) {
                              lVar19 = *(longlong *)(lVar21 + 0x30);
                            }
                            puVar10 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
                            piVar9 = (int *)&DAT_14c948618;
                            if (1 < iVar8) {
                              piVar9 = (int *)(lVar19 + 0xc);
                              puVar10 = (undefined8 *)(lVar19 + 0x10);
                            }
                          }
                        }
                      }
                      local_118 = *piVar9;
                      if (local_118 == 0) {
                        uStack_110 = DAT_14cb7bba0;
                        local_118 = (int)DAT_14cb7bb98;
                        uStack_114 = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
                      }
                      else {
                        uStack_114 = (undefined4)*puVar10;
                        uStack_110 = (uint)((ulonglong)*puVar10 >> 0x20);
                      }
                      FUN_144928d62(lVar15 + lVar23 + -0x38,1,&local_118);
                      local_248 = DAT_14c948618;
                      uVar3 = DAT_14c948620;
                      if (((*local_270 != 0) && (iVar8 = *(int *)(lVar21 + 0x1c), iVar8 != 0)) &&
                         (*local_270 != DAT_14c948000)) {
                        if ((1 < iVar8) || (lVar19 = local_260, 0 < *(int *)(lVar21 + 0x3c))) {
                          lVar19 = *(longlong *)(lVar21 + 0x30);
                        }
                        if ((iVar8 != 1) && (4 < iVar8)) {
                          local_248 = *(undefined8 **)(lVar19 + 0x30);
                          uVar3 = *(undefined4 *)(lVar19 + 0x38);
                        }
                      }
                      uStack_240 = CONCAT44(uStack_240._4_4_,uVar3);
                      FUN_14013eb2c(lVar15 + lVar23 + -0x48,&local_248);
                      lVar13 = lVar13 + 1;
                      lVar23 = lVar23 + 0xa0;
                    } while (lVar13 < (int)param_5[1]);
                  }
                }
              }
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < *(int *)(lVar21 + 0x120));
        }
      }
    }
  }
LAB_143c8f0b6:
  if ((local_70 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143c8f71f:
  local_280 = (ulonglong)((int)local_280 + 1);
  puVar22 = local_248 + (longlong)(int)uStack_240 * 2;
  puVar16 = local_248;
  while( true ) {
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    if ((longlong)*(int *)(puVar16 + 1) == 0) break;
    piVar11 = (int *)*puVar16;
    piVar9 = piVar11 + *(int *)(puVar16 + 1);
    do {
      iVar8 = *piVar11;
      if ((longlong)(int)uStack_230 != 0) {
        lVar23 = 0;
        do {
          if (*(int *)(local_238 + lVar23) == iVar8) goto LAB_143c8f7b9;
          lVar23 = lVar23 + 4;
        } while ((longlong)(int)uStack_230 * 4 != lVar23);
      }
      lVar23 = (longlong)(int)uStack_110;
      uStack_110 = uStack_110 + 1;
      if (uStack_10c < uStack_110) {
        FUN_1446f48e2(&local_118);
      }
      *(int *)(CONCAT44(uStack_114,local_118) + lVar23 * 4) = iVar8;
LAB_143c8f7b9:
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar9);
    if (uStack_110 == 0) {
      if (CONCAT44(uStack_114,local_118) != 0) {
        FUN_1400020a8();
      }
      break;
    }
    if ((int)uStack_110 < 1) {
      iVar8 = 0;
    }
    else {
      DAT_14cb70b40 = DAT_14cb70b40 * 0xbb38435 + 0x3619636b;
      iVar8 = (int)((float)(int)uStack_110 * ((float)(DAT_14cb70b40 >> 9 | 0x3f800000) + -1.0));
    }
    uVar3 = *(undefined4 *)(CONCAT44(uStack_114,local_118) + (longlong)iVar8 * 4);
    lVar23 = (longlong)(int)uStack_230;
    uVar7 = (int)uStack_230 + 1;
    uStack_230 = CONCAT44(uStack_230._4_4_,uVar7);
    if (uStack_230._4_4_ < uVar7) {
      FUN_1446f48e2(&local_238);
    }
    *(undefined4 *)(local_238 + lVar23 * 4) = uVar3;
    if (CONCAT44(uStack_114,local_118) != 0) {
      FUN_1400020a8();
    }
    puVar16 = puVar16 + 2;
    if (puVar16 == puVar22) goto LAB_143c8f89a;
  }
  if ((int)local_280 == 5) goto LAB_143c8fac1;
  goto LAB_143c8f711;
}



// FUNCTION 143c8fb46 FUN_143c8fb46 body=215 status=ok
// SIG undefined FUN_143c8fb46(void)

int FUN_143c8fb46(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = *param_1;
  iVar4 = -1;
  if (*(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = lVar1 + 0x1e0;
    if (*(longlong *)(lVar1 + 0x1e8) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x1e8);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x1f0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x1a8) + (longlong)iVar7 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x1a8) + (longlong)iVar7 * 0x20) == lVar2) {
          if ((undefined8 *)(lVar5 + 8) == (undefined8 *)0x0 || lVar5 == 0) {
            return iVar4;
          }
          if (*(int *)(lVar5 + 0x10) < 1) {
            return iVar4;
          }
          iVar7 = **(int **)(lVar5 + 8);
          if (iVar7 < 0) {
            return iVar4;
          }
          iVar4 = -1;
          if (iVar7 < *(int *)(lVar1 + 0x80)) {
            iVar4 = iVar7;
          }
          return iVar4;
        }
        iVar7 = *(int *)(lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  return iVar4;
}



// FUNCTION 143c8fc1e FUN_143c8fc1e body=307 status=ok
// SIG undefined FUN_143c8fc1e(void)

longlong * FUN_143c8fc1e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = FUN_1487a9ea6(param_2);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x28), lVar3 != 0)) {
      lVar6 = *(longlong *)(lVar3 + 0x550);
      if (*(longlong *)(lVar3 + 0x550) == 0) {
        lVar6 = lVar3;
      }
      uVar4 = FUN_1447210f0(lVar6);
      plVar5 = (longlong *)FUN_1406f625c(uVar4);
      if (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x308))(plVar5,0);
        if (plVar5 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
          if (lVar3 != 0) {
            FUN_1487b12f8(lVar3,&local_28,*(undefined4 *)(lVar6 + 0x558));
            if (local_28 != 0) {
              local_30 = *(undefined4 *)(local_28 + 0x13c);
              local_38 = *(undefined8 *)(local_28 + 0x134);
              *(undefined4 *)(param_1 + 1) = 1;
              FUN_1487b79dc(param_1,0);
              puVar2 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar2 + 1) = local_30;
              *puVar2 = local_38;
            }
            if (local_20 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_20 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*local_20)(local_20);
                LOCK();
                piVar1 = (int *)((longlong)local_20 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_20 + 0x10))(local_20);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c8fd52 FUN_143c8fd52 body=5498 status=ok
// SIG undefined FUN_143c8fd52(void)

void FUN_143c8fd52(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  wchar_t ****_Str2;
  undefined1 uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  wchar_t *****pppppwVar25;
  longlong lVar26;
  ulonglong *puVar27;
  bool bVar28;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  ushort local_d0;
  byte local_c8;
  wchar_t ****local_c0;
  undefined8 uStack_b8;
  ushort local_a8;
  byte local_a0;
  ulonglong local_98;
  longlong lStack_90;
  longlong *local_88;
  int local_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((((*(int *)(param_1 + 0x34) != 0) && (uVar3 = *(uint *)(param_1 + 0x30), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((puVar20 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar20 != (undefined8 *)0x0 && (*(int *)(puVar20 + 2) == *(int *)(param_1 + 0x34))))) &&
     ((*(uint *)(puVar20 + 1) & 0x10200000) == 0)) {
    plVar17 = (longlong *)*puVar20;
    for (plVar12 = plVar17; plVar12 != (longlong *)0x0;
        plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2f0))(plVar12)) {
      if (plVar12[5] != 0) {
        lVar26 = *(longlong *)(plVar12[5] + 0x30);
        if ((lVar26 != 0) && (*(longlong *)(lVar26 + 0x360) != 0)) {
          plVar13 = (longlong *)FUN_14001cc68(0x178,0x10);
          plVar13[1] = (longlong)&DAT_100000001;
          *plVar13 = (longlong)&PTR_FUN_14b3e5fa0;
          plVar12 = plVar13 + 2;
          FUN_141863c34(plVar12);
          local_f8 = plVar12;
          local_f0 = plVar13;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            LOCK();
            plVar12 = plVar13 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
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
          iVar23 = 0;
          if (param_2[1] == 0) goto LAB_143c8ff0b;
          lVar26 = param_2[0x17];
          lVar14 = FUN_14105e9e4();
          iVar23 = 0;
          if (lVar14 == 0) goto LAB_143c8ff0b;
          FUN_1406f1bc8(lVar14,&local_98);
          FUN_140b126e4(&local_98,&local_c0);
          iVar22 = (int)uStack_b8;
          _Str2 = local_c0;
          local_c0 = (wchar_t ****)0x0;
          uStack_b8 = 0;
          if (CONCAT44(uStack_6c,local_70) != 0) {
            FUN_1400020a8();
          }
          iVar4 = *(int *)(param_1 + 0xa0);
          iVar23 = 0;
          if ((longlong)iVar4 == 0) goto LAB_143c8fefe;
          local_100 = *(longlong *)(param_1 + 0x98);
          local_110 = 0;
          iVar23 = 0;
          goto LAB_143c9115e;
        }
        break;
      }
    }
  }
  goto LAB_143c9055c;
LAB_143c9115e:
  do {
    lVar14 = *(longlong *)(local_100 + 0x10 + local_110);
    if (*(int *)(lVar14 + 0x58) == (int)lVar26) {
      if (*(int *)(lVar14 + 0x50) == iVar22) {
        if ((iVar22 < 2) ||
           (iVar11 = wcscmp(*(wchar_t **)(lVar14 + 0x48),(wchar_t *)_Str2), iVar11 == 0)) {
LAB_143c9119f:
          lVar14 = *(longlong *)(local_100 + 0x30 + local_110);
          if (lVar14 != 0) {
            if (local_f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
              UNLOCK();
            }
            local_108 = *(longlong **)(lVar14 + 0x20);
            *(longlong **)(lVar14 + 0x18) = local_f8;
            *(longlong **)(lVar14 + 0x20) = local_f0;
            if (local_108 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_108 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*local_108)();
                LOCK();
                piVar1 = (int *)((longlong)local_108 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_108 + 0x10))();
                }
              }
            }
          }
          iVar23 = iVar23 + 1;
        }
      }
      else if (*(int *)(lVar14 + 0x50) + iVar22 == 1) goto LAB_143c9119f;
    }
    local_110 = local_110 + 0x40;
  } while ((longlong)iVar4 * 0x40 != local_110);
LAB_143c8fefe:
  if ((wchar_t *****)_Str2 != (wchar_t *****)0x0) {
    FUN_1400020a8(_Str2);
  }
LAB_143c8ff0b:
  plVar12 = local_f8;
  *(int *)(local_f8 + 0x2b) = iVar23;
  if (param_2[1] == 0) {
    *(undefined4 *)(local_f8 + 0x1e) = 0;
    iVar23 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2[1] + 0xc);
    *(uint *)(local_f8 + 0x1e) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar26 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar26 = 0;
    }
    iVar23 = *(int *)(lVar26 + 0x10);
    if (*(int *)(lVar26 + 0x10) == 0) {
      LOCK();
      iVar23 = DAT_14c964868 + 1;
      UNLOCK();
      iVar22 = DAT_14c964868 + 1;
      bVar28 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar23;
      if (bVar28) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar22);
      }
      LOCK();
      iVar23 = *(int *)(lVar26 + 0x10);
      bVar28 = iVar23 == 0;
      if (bVar28) {
        *(int *)(lVar26 + 0x10) = iVar22;
        iVar23 = 0;
      }
      UNLOCK();
      if (bVar28) {
        iVar23 = iVar22;
      }
    }
  }
  *(int *)((longlong)plVar12 + 0xf4) = iVar23;
  plVar13 = (longlong *)param_2[2];
  if ((plVar12[0x23] != *plVar13) || ((int)plVar12[0x24] != (int)plVar13[1])) {
    plVar12[0x23] = *plVar13;
    *(int *)(plVar12 + 0x24) = (int)plVar13[1];
    plVar12[0x25] = 0;
  }
  plVar12[0x26] = param_2[0xd];
  *(int *)((longlong)plVar12 + 4) = (int)param_2[0x17];
  *(undefined4 *)((longlong)plVar12 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  FUN_14185e400(plVar12 + 0x15,param_2 + 0xe);
  uVar8 = 0;
  if (*(char *)((longlong)param_2 + 0xc1) != '\0') {
    uVar8 = (undefined1)(int)param_2[0x18];
  }
  *(undefined1 *)((longlong)plVar12 + 0x152) = uVar8;
  lVar26 = *param_2;
  if (lVar26 == 0) {
    if ((char)param_2[0x19] == '\x01') {
      *(undefined4 *)((longlong)plVar12 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc4);
    }
    if ((char)param_2[0x1b] == '\x01') {
      *(undefined4 *)((longlong)plVar12 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xd4);
    }
    if ((char)param_2[0x1a] == '\x01') {
      *(undefined4 *)(plVar12 + 4) = *(undefined4 *)((longlong)param_2 + 0xcc);
    }
    if ((char)param_2[0x1c] == '\x01') {
      *(undefined4 *)(plVar12 + 2) = *(undefined4 *)((longlong)param_2 + 0xdc);
    }
    if (*(char *)((longlong)param_2 + 0xe5) == '\x01') {
      *(undefined1 *)((longlong)plVar12 + 0x14) = *(undefined1 *)((longlong)param_2 + 0xe4);
    }
    if (*(char *)((longlong)param_2 + 0xec) == '\x01') {
      *(int *)(plVar12 + 3) = (int)param_2[0x1d];
    }
    if ((char)param_2[0x1f] == '\x01') {
      *(undefined4 *)((longlong)plVar12 + 0x154) = *(undefined4 *)((longlong)param_2 + 0xf4);
    }
    if (*(char *)((longlong)param_2 + 0xf1) == '\x01') {
      *(char *)((longlong)plVar12 + 0x15c) = (char)param_2[0x1e];
    }
    if (*(char *)((longlong)param_2 + 0xfd) == '\x01') {
      *(undefined1 *)(plVar12 + 0x20) = *(undefined1 *)((longlong)param_2 + 0xfc);
    }
    if ((char)param_2[0x22] == '\x01') {
      FUN_1400fce78(plVar12 + 0x21,param_2 + 0x20);
    }
    FUN_140002266(&local_98,L"Activity id : %d",(int)*plVar12);
    puVar27 = (ulonglong *)(param_2 + 0x23);
    if (*(int *)((longlong)param_2 + 0x124) == -1) {
      puVar27 = &local_98;
    }
    puVar2 = (ulonglong *)(plVar12 + 0x28);
    if (puVar2 != puVar27) {
      plVar17 = &lStack_90;
      if (*(int *)((longlong)param_2 + 0x124) != -1) {
        plVar17 = param_2 + 0x24;
      }
      iVar23 = (int)*plVar17;
      pvVar5 = (void *)*puVar27;
      *(int *)(plVar12 + 0x29) = iVar23;
      if (iVar23 == 0 && *(int *)((longlong)plVar12 + 0x14c) == 0) {
        *(undefined4 *)((longlong)plVar12 + 0x14c) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar23);
        if (iVar23 != 0) {
          memcpy((void *)*puVar2,pvVar5,(longlong)iVar23 * 2);
        }
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)param_2[0xc] != 0) {
      lVar26 = param_2[0xb];
      lVar14 = (longlong)(int)param_2[0xc] * 0x18;
      do {
        iVar23 = (int)plVar12[6];
        *(uint *)(plVar12 + 6) = iVar23 + 1U;
        if (*(uint *)((longlong)plVar12 + 0x34) < iVar23 + 1U) {
          FUN_1487b82d4(plVar12 + 5,iVar23);
        }
        FUN_141853f36((longlong)iVar23 * 0x18 + plVar12[5],lVar26);
        lVar26 = lVar26 + 0x18;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != 0);
    }
    FUN_1405dc634(plVar12 + 0xc,param_2 + 3);
    FUN_1405dc634(plVar12 + 8,param_2 + 7);
  }
  else {
    lVar14 = *(longlong *)(lVar26 + 0x20);
    if (lVar14 == 0) {
      uVar15 = FUN_141843f5a();
      lVar14 = FUN_14477b664(uVar15);
      *(longlong *)(lVar26 + 0x20) = lVar14;
    }
    lVar16 = *(longlong *)(lVar26 + 0x28);
    if (lVar16 == 0) {
      if ((lVar14 != 0) && (*(longlong *)(lVar26 + 0x18) != 0)) {
        plVar13 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar13 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar9 == '\0')) {
          *(undefined8 *)(lVar26 + 0x28) = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar13 + 0x110))(plVar13);
          lVar16 = FUN_144aff482(uVar15,(longlong *)(lVar26 + 0x18));
          *(longlong *)(lVar26 + 0x28) = lVar16;
          if (lVar16 != 0) goto LAB_143c905c0;
        }
      }
    }
    else {
LAB_143c905c0:
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,plVar17);
      FUN_1447c3578(lVar16 + 0x100,&local_c0,&local_98);
      uVar10 = FUN_1405d5f74(&local_c0);
      if ((char)param_2[0x19] != '\0') {
        uVar10 = *(undefined4 *)((longlong)param_2 + 0xc4);
      }
      *(undefined4 *)((longlong)local_f8 + 0x24) = uVar10;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppppwVar25 = &local_c0;
        if (0x18 < local_a8) {
          pppppwVar25 = (wchar_t *****)local_c0;
        }
        (*pcVar6)(pppppwVar25);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0);
      }
      lVar26 = DAT_14c9a3da0;
      if ((longlong)local_70 != 0) {
        lVar24 = (longlong)local_70 + -1;
        lVar14 = lVar24 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
        if (*(longlong *)(lVar26 + lVar14) != 0) {
          FUN_1400020a8();
        }
        lVar26 = DAT_14c9a3da0;
        iVar23 = (int)lVar24;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar23;
        }
        *(undefined4 *)(lVar26 + lVar14) = 0xffffffff;
        iVar22 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar22 = DAT_14c9a3dd0;
        }
        *(int *)(lVar26 + 4 + lVar14) = iVar22;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar22 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar22 = iVar23;
        }
        bVar7 = (byte)lVar24 & 0x1f;
        DAT_14c9a3dd0 = iVar23;
        *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_70 = 0;
      }
      if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,plVar17);
      FUN_1447c3578(lVar16 + 0x90,&local_c0,&local_98);
      uVar10 = FUN_1405d5f74(&local_c0);
      if ((char)param_2[0x1b] != '\0') {
        uVar10 = *(undefined4 *)((longlong)param_2 + 0xd4);
      }
      *(undefined4 *)((longlong)local_f8 + 0x1c) = uVar10;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppppwVar25 = &local_c0;
        if (0x18 < local_a8) {
          pppppwVar25 = (wchar_t *****)local_c0;
        }
        (*pcVar6)(pppppwVar25);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0);
      }
      lVar26 = DAT_14c9a3da0;
      if ((longlong)local_70 != 0) {
        lVar24 = (longlong)local_70 + -1;
        lVar14 = lVar24 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
        if (*(longlong *)(lVar26 + lVar14) != 0) {
          FUN_1400020a8();
        }
        lVar26 = DAT_14c9a3da0;
        iVar23 = (int)lVar24;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar23;
        }
        *(undefined4 *)(lVar26 + lVar14) = 0xffffffff;
        iVar22 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar22 = DAT_14c9a3dd0;
        }
        *(int *)(lVar26 + 4 + lVar14) = iVar22;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar22 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar22 = iVar23;
        }
        bVar7 = (byte)lVar24 & 0x1f;
        DAT_14c9a3dd0 = iVar23;
        *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_70 = 0;
      }
      if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,plVar17);
      FUN_1447c3578(lVar16 + 200,&local_c0,&local_98);
      uVar10 = FUN_1405d5f74(&local_c0);
      if ((char)param_2[0x1a] != '\0') {
        uVar10 = *(undefined4 *)((longlong)param_2 + 0xcc);
      }
      *(undefined4 *)(local_f8 + 4) = uVar10;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar6 != (code *)0x0) {
        pppppwVar25 = &local_c0;
        if (0x18 < local_a8) {
          pppppwVar25 = (wchar_t *****)local_c0;
        }
        (*pcVar6)(pppppwVar25);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0);
      }
      lVar26 = DAT_14c9a3da0;
      if ((longlong)local_70 != 0) {
        lVar24 = (longlong)local_70 + -1;
        lVar14 = lVar24 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
        if (*(longlong *)(lVar26 + lVar14) != 0) {
          FUN_1400020a8();
        }
        lVar26 = DAT_14c9a3da0;
        iVar23 = (int)lVar24;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar23;
        }
        *(undefined4 *)(lVar26 + lVar14) = 0xffffffff;
        iVar22 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar22 = DAT_14c9a3dd0;
        }
        *(int *)(lVar26 + 4 + lVar14) = iVar22;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar22 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar22 = iVar23;
        }
        bVar7 = (byte)lVar24 & 0x1f;
        DAT_14c9a3dd0 = iVar23;
        *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_70 = 0;
      }
      if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,plVar17);
      puVar18 = &local_e8;
      FUN_1447c3578(lVar16 + 0x18,puVar18,&local_98);
      uVar10 = local_e8;
      if (local_c8 != 3) {
        FUN_1400b56fe(&local_c0,&local_e8,3);
        uVar10 = 0;
        if (local_a0 != 0) {
          uVar10 = local_c0._0_4_;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppppwVar25 = &local_c0;
          if (0x18 < local_a8) {
            pppppwVar25 = (wchar_t *****)local_c0;
          }
          (*pcVar6)(pppppwVar25);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
      }
      plVar12 = local_f8;
      if ((char)param_2[0x1c] != '\0') {
        uVar10 = *(undefined4 *)((longlong)param_2 + 0xdc);
      }
      *(undefined4 *)(local_f8 + 2) = uVar10;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_d0) {
          puVar18 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
        }
        (*pcVar6)(puVar18);
      }
      if (0x18 < local_d0) {
        FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
      }
      if ((longlong)local_70 != 0) {
        lVar14 = (longlong)local_70 + -1;
        local_110 = DAT_14c9a3da0;
        lVar26 = lVar14 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar26),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar26));
        if (*(longlong *)(local_110 + lVar26) != 0) {
          FUN_1400020a8();
        }
        lVar24 = DAT_14c9a3da0;
        iVar23 = (int)lVar14;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar23;
        }
        *(undefined4 *)(lVar24 + lVar26) = 0xffffffff;
        iVar22 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar22 = DAT_14c9a3dd0;
        }
        *(int *)(lVar24 + 4 + lVar26) = iVar22;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar22 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar22 = iVar23;
        }
        bVar7 = (byte)lVar14 & 0x1f;
        DAT_14c9a3dd0 = iVar23;
        *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_70 = 0;
      }
      if ((((char)local_98 != '\0') && (plVar12 = local_f8, (char)local_98 == '\x03')) &&
         (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
          plVar12 = local_f8;
        }
      }
      puVar19 = (undefined1 *)(lVar16 + 0x50);
      if (*(char *)((longlong)param_2 + 0xe5) != '\0') {
        puVar19 = (undefined1 *)((longlong)param_2 + 0xe4);
      }
      *(undefined1 *)((longlong)plVar12 + 0x14) = *puVar19;
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,plVar17);
      puVar18 = &local_e8;
      FUN_1447c3578(lVar16 + 0x58,puVar18,&local_98);
      uVar10 = local_e8;
      if (local_c8 != 3) {
        FUN_1400b56fe(&local_c0,&local_e8,3);
        uVar10 = 0;
        if (local_a0 != 0) {
          uVar10 = local_c0._0_4_;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppppwVar25 = &local_c0;
          if (0x18 < local_a8) {
            pppppwVar25 = (wchar_t *****)local_c0;
          }
          (*pcVar6)(pppppwVar25);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
      }
      if (*(char *)((longlong)param_2 + 0xec) != '\0') {
        uVar10 = (undefined4)param_2[0x1d];
      }
      *(undefined4 *)(local_f8 + 3) = uVar10;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_d0) {
          puVar18 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
        }
        (*pcVar6)(puVar18);
      }
      if (0x18 < local_d0) {
        FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
      }
      lVar26 = DAT_14c9a3da0;
      if ((longlong)local_70 != 0) {
        lVar14 = (longlong)local_70 + -1;
        lVar24 = lVar14 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar24),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar24));
        if (*(longlong *)(lVar26 + lVar24) != 0) {
          FUN_1400020a8();
        }
        lVar26 = DAT_14c9a3da0;
        iVar23 = (int)lVar14;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar23;
        }
        *(undefined4 *)(lVar26 + lVar24) = 0xffffffff;
        iVar22 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar22 = DAT_14c9a3dd0;
        }
        *(int *)(lVar26 + 4 + lVar24) = iVar22;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar22 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar22 = iVar23;
        }
        bVar7 = (byte)lVar14 & 0x1f;
        DAT_14c9a3dd0 = iVar23;
        *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_70 = 0;
      }
      if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,plVar17);
      puVar18 = &local_e8;
      FUN_1447c3578(lVar16 + 0x18,puVar18,&local_98);
      if (local_c8 == 3) {
        local_c8 = 3;
        uVar10 = local_e8;
      }
      else {
        FUN_1400b56fe(&local_c0,&local_e8,3);
        uVar10 = 0;
        if (local_a0 != 0) {
          uVar10 = local_c0._0_4_;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pppppwVar25 = &local_c0;
          if (0x18 < local_a8) {
            pppppwVar25 = (wchar_t *****)local_c0;
          }
          (*pcVar6)(pppppwVar25);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
      }
      plVar12 = local_f8;
      if ((char)param_2[0x1f] != '\0') {
        uVar10 = *(undefined4 *)((longlong)param_2 + 0xf4);
      }
      *(undefined4 *)((longlong)local_f8 + 0x154) = uVar10;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_d0) {
          puVar18 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
        }
        (*pcVar6)(puVar18);
      }
      if (0x18 < local_d0) {
        FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
      }
      lVar26 = DAT_14c9a3da0;
      if ((longlong)local_70 != 0) {
        lVar14 = (longlong)local_70 + -1;
        lVar24 = lVar14 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar24),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar24));
        if (*(longlong *)(lVar26 + lVar24) != 0) {
          FUN_1400020a8();
        }
        lVar26 = DAT_14c9a3da0;
        iVar23 = (int)lVar14;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar23;
        }
        *(undefined4 *)(lVar26 + lVar24) = 0xffffffff;
        iVar22 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar22 = DAT_14c9a3dd0;
        }
        *(int *)(lVar26 + 4 + lVar24) = iVar22;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar21 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar21 = DAT_14c9a3dc0;
        }
        iVar22 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar22 = iVar23;
        }
        bVar7 = (byte)lVar14 & 0x1f;
        DAT_14c9a3dd0 = iVar23;
        *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar21 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_70 = 0;
      }
      if ((((char)local_98 != '\0') && (plVar12 = local_f8, (char)local_98 == '\x03')) &&
         (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
          plVar12 = local_f8;
        }
      }
      plVar17 = (longlong *)(lVar16 + 0x138);
      if (*(char *)((longlong)param_2 + 0xf1) != '\0') {
        plVar17 = param_2 + 0x1e;
      }
      *(char *)((longlong)plVar12 + 0x15c) = (char)*plVar17;
    }
    *(undefined1 *)(plVar12 + 0x27) = *(undefined1 *)(*param_2 + 0xb0);
    puVar19 = (undefined1 *)(*param_2 + 0xb1);
    if (*(char *)((longlong)param_2 + 0xfd) != '\0') {
      puVar19 = (undefined1 *)((longlong)param_2 + 0xfc);
    }
    *(undefined1 *)(plVar12 + 0x20) = *puVar19;
    plVar17 = (longlong *)(*param_2 + 0xb8);
    if ((char)param_2[0x22] != '\0') {
      plVar17 = param_2 + 0x20;
    }
    FUN_1400fce78(plVar12 + 0x21,plVar17);
    puVar18 = &DAT_14c9485f0;
    if (*(undefined4 **)(*param_2 + 8) != (undefined4 *)0x0) {
      puVar18 = *(undefined4 **)(*param_2 + 8);
    }
    local_98 = 0;
    lStack_90 = 0;
    FUN_1400b2348(puVar18,&local_98,1);
    puVar27 = (ulonglong *)(param_2 + 0x23);
    if (*(int *)((longlong)param_2 + 0x124) == -1) {
      puVar27 = &local_98;
    }
    puVar2 = (ulonglong *)(plVar12 + 0x28);
    if (puVar2 != puVar27) {
      plVar17 = &lStack_90;
      if (*(int *)((longlong)param_2 + 0x124) != -1) {
        plVar17 = param_2 + 0x24;
      }
      iVar23 = (int)*plVar17;
      pvVar5 = (void *)*puVar27;
      *(int *)(plVar12 + 0x29) = iVar23;
      if (iVar23 == 0 && *(int *)((longlong)plVar12 + 0x14c) == 0) {
        *(undefined4 *)((longlong)plVar12 + 0x14c) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar23);
        if (iVar23 != 0) {
          memcpy((void *)*puVar2,pvVar5,(longlong)iVar23 * 2);
        }
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    plVar17 = plVar12 + 5;
    FUN_1411af516(plVar17,*param_2 + 0x30);
    if ((longlong)(int)param_2[0xc] != 0) {
      lVar26 = param_2[0xb];
      lVar14 = (longlong)(int)param_2[0xc] * 0x18;
      do {
        iVar23 = (int)plVar12[6];
        *(uint *)(plVar12 + 6) = iVar23 + 1U;
        if (*(uint *)((longlong)plVar12 + 0x34) < iVar23 + 1U) {
          FUN_1487b82d4(plVar17,iVar23);
        }
        FUN_141853f36((longlong)iVar23 * 0x18 + *plVar17,lVar26);
        lVar26 = lVar26 + 0x18;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != 0);
    }
    lVar26 = *param_2;
    (**(code **)(plVar12[0xc] + 0x20))(plVar12 + 0xc,0);
    plVar12[0xd] = *(longlong *)(lVar26 + 0x70);
    FUN_1406022fe(plVar12 + 0xe,lVar26 + 0x78);
    FUN_1405dc634(plVar12 + 0xc,param_2 + 3);
    *(undefined4 *)(plVar12 + 7) = *(undefined4 *)(*param_2 + 0x40);
    lVar26 = *param_2;
    (**(code **)(plVar12[8] + 0x20))(plVar12 + 8,0);
    plVar12[9] = *(longlong *)(lVar26 + 0x50);
    FUN_1406022fe(plVar12 + 10,lVar26 + 0x58);
    FUN_1405dc634(plVar12 + 8,param_2 + 7);
    *(undefined4 *)(plVar12 + 0x10) = *(undefined4 *)(*param_2 + 0x88);
    lVar26 = *param_2;
    (**(code **)(plVar12[0x11] + 0x20))(plVar12 + 0x11,0);
    plVar12[0x12] = *(longlong *)(lVar26 + 0x98);
    FUN_1406022fe(plVar12 + 0x13,lVar26 + 0xa0);
  }
  iVar23 = *(int *)(param_1 + 0x1f8);
  *(uint *)(param_1 + 0x1f8) = iVar23 + 1U;
  if (*(uint *)(param_1 + 0x1fc) < iVar23 + 1U) {
    FUN_14591f904((longlong *)(param_1 + 0x1f0),iVar23);
  }
  plVar17 = local_f0;
  lVar26 = *(longlong *)(param_1 + 0x1f0);
  *(longlong **)(lVar26 + (longlong)iVar23 * 0x10) = local_f8;
  *(longlong **)(lVar26 + 8 + (longlong)iVar23 * 0x10) = local_f0;
  if (local_f0 == (longlong *)0x0) {
    FUN_141358634(param_1,&local_f8);
  }
  else {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
    FUN_141358634(param_1);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar17 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
LAB_143c9055c:
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c912cd FUN_143c912cd body=69 status=ok
// SIG undefined FUN_143c912cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c912cd(void)

{
  _DAT_14cb70610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9130f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb70618,1);
  return;
}



// FUNCTION 143c91312 FUN_143c91312 body=69 status=ok
// SIG undefined FUN_143c91312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c91312(void)

{
  _DAT_14cb70628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c91354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb70630,1);
  return;
}



// FUNCTION 143c91357 FUN_143c91357 body=69 status=ok
// SIG undefined FUN_143c91357(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c91357(void)

{
  _DAT_14cb70640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c91399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb70648,1);
  return;
}



// FUNCTION 143c9139c FUN_143c9139c body=69 status=ok
// SIG undefined FUN_143c9139c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c9139c(void)

{
  _DAT_14cb70c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c913de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb70c10,1);
  return;
}



// FUNCTION 143c913e1 FUN_143c913e1 body=69 status=ok
// SIG undefined FUN_143c913e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c913e1(void)

{
  _DAT_14cb70bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c91423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb70bf8,1);
  return;
}



// FUNCTION 143c91426 FUN_143c91426 body=41 status=ok
// SIG undefined FUN_143c91426(void)

void FUN_143c91426(void)

{
  DAT_14cb706a8 = 0;
  if (DAT_14cb706a0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d648b8();
  return;
}



// FUNCTION 143c91454 FUN_143c91454 body=1706 status=ok
// SIG undefined FUN_143c91454(void)

ulonglong FUN_143c91454(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *_Dst;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 unaff_RDI;
  undefined8 *_Src;
  bool bVar17;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  longlong local_88 [2];
  undefined8 local_78;
  longlong local_70 [2];
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar7 = *(int *)(param_1 + 0x84);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (((iVar7 == 0) || (uVar16 = *(uint *)(param_1 + 0x80), (int)uVar16 < 0)) ||
     (DAT_14c9647dc <= (int)uVar16)) goto LAB_143c919de;
  puVar12 = (undefined8 *)
            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
  if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar7)) ||
     ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)*puVar12;
  }
  plVar13 = (longlong *)
            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
  if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != iVar7)) ||
     (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 ||
      (plVar13 = (longlong *)*plVar13, plVar13 == (longlong *)0x0)))) {
LAB_143c91542:
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    do {
      if (plVar13[5] != 0) {
        lVar14 = *(longlong *)(plVar13[5] + 0x30);
        if (lVar14 == 0) goto LAB_143c91542;
        lVar14 = *(longlong *)(lVar14 + 0x360);
        break;
      }
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x2f0))(plVar13);
    } while (plVar13 != (longlong *)0x0);
  }
  if (((plVar9 == (longlong *)0x0) ||
      ((**(code **)(*plVar9 + 0x2c0))(plVar9), lVar14 == 0 || *(longlong *)(param_1 + 0x18) == 0))
     || ((*(byte *)(lVar14 + 0x155) & 0x20) != 0)) goto LAB_143c919de;
  if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x178) != 0) {
    if (*(int *)(param_1 + 0x84) == 0) {
LAB_143c91aaf:
      uVar15 = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x80);
      uVar15 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x84) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143c91aaf;
        uVar15 = *puVar12;
      }
    }
    cVar6 = FUN_14576c79f(*(longlong *)(param_1 + 0x68) + 0x170,uVar15);
    if (cVar6 == '\0') goto LAB_143c919de;
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x68) + 0x188) == 0) ||
     (cVar6 = FUN_14576c79f(*(longlong *)(param_1 + 0x68) + 0x180), cVar6 != '\0')) {
    uVar15 = 0;
    do {
      if (plVar9[5] != 0) {
        lVar14 = *(longlong *)(plVar9[5] + 0x30);
        if (lVar14 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar14 + 0x360);
        }
        break;
      }
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2f0))(plVar9);
    } while (plVar9 != (longlong *)0x0);
    lVar14 = 0;
    lVar10 = FUN_140149a73(uVar15,0);
    if (((lVar10 == 0) || (*(int *)(*(longlong *)(param_1 + 0x68) + 0x198) == 0)) ||
       (cVar6 = FUN_1405d584e(*(longlong *)(param_1 + 0x68) + 400,lVar10), lVar14 = lVar10,
       cVar6 != '\0')) {
      plVar9 = *(longlong **)(param_1 + 8);
      local_8c = (undefined4)CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
      if (plVar9 == (longlong *)0x0) {
LAB_143c916c5:
        plVar9 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar9[1];
        do {
          if (iVar7 == 0) goto LAB_143c916c5;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar17 = iVar7 == iVar5;
          if (bVar17) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar17);
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar13 = plVar9 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar13 = plVar9 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        local_8c = 0;
      }
      FUN_1405d7ab2(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
      *(undefined4 *)(param_1 + 0x110) = 0;
      if (*(int *)(param_1 + 0x114) != 0) {
        FUN_140f8dd3e(param_1 + 0x108,0);
      }
      plVar13 = (longlong *)(param_1 + 0xe8);
      iVar7 = *(int *)(param_1 + 0xf4);
      FUN_14029e8dd(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if ((iVar7 < 0) && (*(int *)(param_1 + 0xf4) != 0)) {
        FUN_1409c5ac0(plVar13,0);
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_140115c12(param_1 + 0x50,0);
      }
      lVar14 = param_1 + 0x40;
      *(undefined **)(param_1 + 0x48) = &DAT_14cb70058;
      lVar10 = *(longlong *)(param_1 + 0x18);
      if (*(int *)(lVar10 + 0x80) == 0) {
        FUN_1405dc634(lVar14,lVar10 + 0x88);
      }
      else if (*(int *)(lVar10 + 0x80) == 1) {
        local_58 = 0;
        uStack_50 = 0;
        FUN_1449f3ff4(lVar10 + 0x88,&local_58);
        iVar7 = (int)uStack_50;
        if (0 < (int)uStack_50) {
          uVar16 = (int)uStack_50 - 1;
          uVar8 = rand();
          uVar8 = (uint)((float)iVar7 * ((float)(uVar8 & 0x7fff) / 32767.0));
          if ((int)uVar8 < (int)uVar16) {
            uVar16 = uVar8;
          }
          if ((-1 < (int)uVar8) && ((int)uVar16 < (int)uStack_50)) {
            FUN_140653d46(lVar14,(ulonglong)uVar16 * 8 + local_58);
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      lVar10 = *(longlong *)(param_1 + 0x18);
      if (*(char *)(lVar10 + 0x152) == '\x01') {
        local_78 = *(undefined8 *)(lVar10 + 0x118);
        FUN_1400021e4(&local_78,local_70);
        FUN_1400b22c2(local_88,"Region.");
        FUN_1401c7f3e(&local_58,local_88,local_70);
        iVar7 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar7 = 0;
        }
        FUN_1446f82e2(local_60,iVar7,local_58,1);
        FUN_140653d46(lVar14,local_60);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
        lVar10 = *(longlong *)(param_1 + 0x18);
      }
      if (*(char *)(lVar10 + 0xd8) != '\0') {
        iVar7 = *(int *)(param_1 + 0xf0);
        *(uint *)(param_1 + 0xf0) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0xf4) < iVar7 + 1U) {
          FUN_1406251ee(plVar13,iVar7);
        }
        lVar14 = *plVar13;
        puVar12 = (undefined8 *)(lVar14 + (longlong)iVar7 * 0x48);
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar10 + 0xb0);
        *puVar12 = *(undefined8 *)(lVar10 + 0xa8);
        _Src = (undefined8 *)(lVar10 + 0xb8);
        bVar2 = *(byte *)(lVar10 + 0xd8);
        uVar3 = *(ushort *)(lVar10 + 0xd0);
        *(ushort *)(puVar12 + 5) = uVar3;
        _Dst = puVar12 + 2;
        if (0x18 < uVar3) {
          _Dst = (undefined8 *)FUN_14001cc68(uVar3,0);
          puVar12[2] = _Dst;
          _Src = (undefined8 *)*_Src;
        }
        lVar14 = lVar14 + (longlong)iVar7 * 0x48;
        uVar11 = (ulonglong)((uint)bVar2 * 0x120);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar11);
        if (pcVar4 == (code *)0x0) {
          memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
        }
        else {
          (*pcVar4)(_Dst,_Src);
        }
        *(undefined1 *)(lVar14 + 0x30) = *(undefined1 *)(lVar10 + 0xd8);
        *(undefined8 *)(lVar14 + 0x38) = 0;
        iVar7 = *(int *)(lVar10 + 0xe8);
        uVar15 = *(undefined8 *)(lVar10 + 0xe0);
        *(int *)(lVar14 + 0x40) = iVar7;
        if (iVar7 == 0) {
          *(undefined4 *)(lVar14 + 0x44) = 0;
        }
        else {
          FUN_1409c7014((undefined8 *)(lVar14 + 0x38),iVar7,0);
          FUN_1409c694a(*(undefined8 *)(lVar14 + 0x38),uVar15,iVar7);
        }
      }
      *(code **)(param_1 + 0x10) = FUN_1405d7e34;
      if ((char)local_8c == '\0') {
        LOCK();
        plVar13 = plVar9 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      uVar11 = 0;
    }
  }
LAB_143c919de:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 143c91b00 FUN_143c91b00 body=202 status=ok
// SIG undefined FUN_143c91b00(void)

void FUN_143c91b00(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(undefined8 *)(param_1 + 0x128);
  local_50 = *(undefined4 *)(param_1 + 0x130);
  FUN_1448075d0(local_48);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    FUN_1400b22c2(local_48,"Invalid");
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(lVar1 + 8);
    }
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_1400b2348(puVar2,local_48,1);
  }
  *(undefined1 *)(param_1 + 0x169) = 1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c91be3 FUN_143c91be3 body=41 status=ok
// SIG undefined FUN_143c91be3(void)

void FUN_143c91be3(void)

{
  DAT_14cb70a80 = 0;
  if (DAT_14cb70a78 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64956();
  return;
}



// FUNCTION 143c91c4c FUN_143c91c4c body=431 status=ok
// SIG undefined FUN_143c91c4c(void)

void FUN_143c91c4c(longlong *param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  byte local_48;
  float local_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_40 = param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_40);
    lVar4 = FUN_1447210f0(param_1);
    if (lVar4 != 0) {
      uVar2 = FUN_14119d0a4(lVar4);
      FUN_140e65914(uVar2,param_1,*(undefined4 *)(lVar4 + 0x6f4));
    }
  }
  if ((char)param_1[0x98] == '\0') {
    uVar2 = FUN_1447210f0(param_1);
    plVar3 = (longlong *)FUN_1406f625c(uVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x308))(plVar3,0);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x1d8) == '\x01') {
            local_48 = *(byte *)(param_1 + 0x91) ^ 1;
            FUN_143c91dfc(lVar4,param_1 + 0x8f,param_1,param_1 + 0x92);
            *(undefined1 *)(param_1 + 0x98) = 1;
            *(int *)((longlong)param_1 + 0x4cc) = (int)param_1[0x99];
          }
          else {
            param_2 = param_2 + *(float *)((longlong)param_1 + 0x4c4);
            *(float *)((longlong)param_1 + 0x4c4) = param_2;
            fVar1 = *(float *)((longlong)param_1 + 0x4cc);
            if (fVar1 < param_2) {
              *(float *)((longlong)param_1 + 0x4c4) = param_2 - fVar1;
              fVar5 = 60.0;
              if (fVar1 + fVar1 <= 60.0) {
                fVar5 = fVar1 + fVar1;
              }
              *(float *)((longlong)param_1 + 0x4cc) = fVar5;
              FUN_1487b29e8(lVar4,&local_40);
              if (CONCAT44(uStack_3c,local_40) != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c91dfc FUN_143c91dfc body=288 status=ok
// SIG undefined FUN_143c91dfc(void)

void FUN_143c91dfc(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  int local_80;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    FUN_1400b22c2(local_58,&DAT_149dfc116);
  }
  else {
    local_68[0] = *(longlong *)(param_3 + 0x18);
    FUN_1400021e4(local_68,local_58);
  }
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    iVar6 = 0;
    do {
      uVar2 = *(ulonglong *)(lVar1 + lVar5);
      if ((int)uVar2 == 0) {
        iVar4 = (int)(uVar2 >> 0x20);
      }
      else {
        iVar4 = FUN_14002c2bd(uVar2 & 0xffffffff,0);
      }
      if (iVar4 != 0) {
        local_70 = *(undefined8 *)(lVar1 + lVar5);
        FUN_1400021e4(&local_70,local_68);
        local_88 = param_5;
        local_80 = iVar6;
        FUN_143c92226(param_1,local_68,param_3,param_4);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        iVar6 = iVar6 + 1;
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != lVar5);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c91f2a FUN_143c91f2a body=619 status=ok
// SIG undefined FUN_143c91f2a(void)

ulonglong FUN_143c91f2a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  wchar_t *_Str;
  longlong *plVar7;
  undefined8 unaff_RBX;
  undefined2 *puVar8;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 uStack_100;
  longlong local_f8 [2];
  undefined1 local_e8 [24];
  longlong local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(*param_1 + 8);
  FUN_140bdd98c();
  lVar3 = *(longlong *)(*param_1 + 8);
  FUN_140bdd98c();
  if (lVar3 != 0 && lVar2 != 0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_140bddd88(lVar2,local_f8,0);
    local_108 = (wchar_t *)0x0;
    uStack_100 = 0;
    FUN_140bddd88(lVar3,&local_108,0);
    puVar8 = &DAT_149dfb77a;
    _Str = L"";
    if ((int)uStack_100 != 0) {
      _Str = local_108;
    }
    _wtoi(_Str);
    uStack_84 = 0;
    uStack_80 = 0;
    if (*(int *)((undefined8 *)param_1[2] + 1) != 0) {
      puVar8 = *(undefined2 **)param_1[2];
    }
    FUN_1405f0d29(&local_88,puVar8,0);
    puVar6 = (undefined8 *)param_1[1];
    *puVar6 = CONCAT44(uStack_84,local_88);
    *(undefined4 *)(puVar6 + 1) = uStack_80;
    FUN_14000bbd8(local_e8,local_f8,0);
    FUN_1409c5062(&local_c0,local_e8);
    lVar4 = param_1[1];
    plVar1 = (longlong *)(lVar4 + 0x10);
    if (*(byte *)(lVar4 + 0x30) == 0x1f) {
      puVar6 = (undefined8 *)*plVar1;
      *(undefined4 *)(puVar6 + 1) = local_b8;
      *puVar6 = local_c0;
      FUN_1447715ec(puVar6 + 2);
    }
    else {
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar4 + 0x30) * 0x120));
      if (pcVar5 != (code *)0x0) {
        plVar7 = plVar1;
        if (0x18 < *(ushort *)(lVar4 + 0x28)) {
          plVar7 = (longlong *)*plVar1;
        }
        (*pcVar5)(plVar7);
      }
      if (0x18 < *(ushort *)(lVar4 + 0x28)) {
        FUN_1400020a8(*plVar1);
      }
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_88 = (undefined4)local_c0;
      uStack_84 = (undefined4)((ulonglong)local_c0 >> 0x20);
      uStack_80 = local_b8;
      FUN_1447715ec(&local_78);
      *(undefined2 *)(lVar4 + 0x28) = 0x38;
      puVar6 = (undefined8 *)FUN_14001cc68(0x38,0);
      *(undefined8 **)(lVar4 + 0x10) = puVar6;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      *(undefined4 *)(puVar6 + 1) = uStack_80;
      *puVar6 = CONCAT44(uStack_84,local_88);
      FUN_1447715ec(puVar6 + 2,&local_78);
      *(undefined1 *)(lVar4 + 0x30) = 0x1f;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar3 != 0 && lVar2 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c921a0 FUN_143c921a0 body=133 status=ok
// SIG undefined FUN_143c921a0(void)

undefined8 FUN_143c921a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x34))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) &&
       (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)) {
      while (plVar3[5] == 0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2f0))();
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
      }
      lVar2 = *(longlong *)(plVar3[5] + 0x30);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar2 + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 143c92226 FUN_143c92226 body=551 status=ok
// SIG undefined FUN_143c92226(void)

void FUN_143c92226(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  ulonglong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined **local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined2 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a3;
  undefined1 local_9c;
  undefined1 local_97;
  undefined1 local_90;
  undefined1 local_8b;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar1 = 0;
  uVar2 = (ulonglong)(*(int *)(param_2 + 1) - 1);
  if (*(int *)(param_2 + 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1446f82e2(local_190,uVar2,*param_2,1);
  FUN_1446dcdd4(&local_188,local_190);
  if (DAT_14cb6fec8 != 0) {
    uVar1 = FUN_144815d88(DAT_14cb6fec8,&local_188);
  }
  if (local_170 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (uVar1 != 0) {
    local_188 = uVar1;
    local_180 = param_3;
    local_178 = param_4;
    FUN_1405d6618();
    local_168 = &DAT_14cb6ffe0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = &PTR_FUN_14b075650;
    FUN_1405d6618();
    local_148 = &DAT_14cb6ffe0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = &PTR_FUN_14b075650;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_c7 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a3 = 0;
    local_9c = 0;
    local_97 = 0;
    local_90 = 0;
    local_8b = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_11c = 0;
    uStack_114 = 0;
    local_64 = 0xffffffff;
    local_cc = *(undefined4 *)(uVar1 + 200);
    if (&local_70 != param_2) {
      FUN_14186443c(&local_70,param_2);
    }
    local_c8 = param_5;
    local_c7 = 1;
    local_d0 = param_6;
    FUN_14186372a(&local_188,param_3);
    FUN_143c8fd52(param_1,&local_188);
    FUN_141863308(&local_188);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c9244e FUN_143c9244e body=660 status=ok
// SIG undefined FUN_143c9244e(void)

void FUN_143c9244e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) goto LAB_143c9256f;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x30) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar3 = *(int *)(lVar8 + 0x10);
  if (iVar3 == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar9 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar9);
    }
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar3 = *(int *)(lVar8 + 0x10);
    bVar10 = iVar3 == 0;
    if (bVar10) {
      *(int *)(lVar8 + 0x10) = iVar9;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar10) {
      iVar3 = iVar9;
    }
    *(int *)(param_1 + 0x34) = iVar3;
    if (iVar3 != 0) goto LAB_143c924a8;
  }
  else {
    *(int *)(param_1 + 0x34) = iVar3;
LAB_143c924a8:
    uVar1 = *(uint *)(param_1 + 0x30);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != iVar3 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)*puVar5;
      }
    }
  }
  uVar4 = (**(code **)(*plVar6 + 0x2b0))();
  *(undefined8 *)(param_1 + 0x200) = uVar4;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_143c92663:
    lVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_143c92663;
      lVar8 = *plVar6;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x40);
  *(longlong *)(param_1 + 0x1e8) = lVar8;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (lVar8 == 0) goto LAB_143c9256f;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14b3e6070;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar7;
  *local_30 = &PTR_FUN_14b3e6000;
  local_30[3] = param_1;
  FUN_1487b8368(lVar8 + 0x58,&local_38,&local_30);
  if (local_28 == 0) {
LAB_143c92648:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_143c92648;
  }
  *(undefined8 *)(param_1 + 0x228) = local_38;
LAB_143c9256f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c926e4 FUN_143c926e4 body=609 status=ok
// SIG undefined FUN_143c926e4(void)

void FUN_143c926e4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  char cVar2;
  wchar_t *_Str;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb70be8) {
    FUN_144b3d300(&DAT_14cb70be8);
    if (DAT_14cb70be8 == -1) {
      FUN_1446f470e(&DAT_14cb70be0,L"GlobalActivities",1);
      _Init_thread_footer(&DAT_14cb70be8);
    }
  }
  if (param_2 != 0) {
    cVar2 = FUN_143e21cdc(param_2,param_3,&DAT_14cb70be0);
    if (cVar2 != '\0') {
      local_78[0] = 0;
      local_78[1] = 0;
      local_b8 = 0;
      FUN_143e21d5e(param_2,param_3,&DAT_14cb70be0,local_78);
      local_88 = 0;
      uStack_80 = 0;
      FUN_1403de9f2(local_78,&local_88,&DAT_149e06196,1);
      if (0 < (int)uStack_80 && (uStack_80 & 1) == 0) {
        lVar4 = 0;
        iVar3 = 0;
        do {
          local_98 = (void *)0x0;
          local_90 = *(int *)(local_88 + 8 + lVar4);
          lVar5 = (longlong)local_90;
          pvVar1 = *(void **)(local_88 + lVar4);
          if (lVar5 == 0) {
            local_8c = 0;
          }
          else {
            FUN_1446dd670(&local_98,local_90,0);
            memcpy(local_98,pvVar1,lVar5 * 2);
          }
          _Str = L"";
          if (*(int *)(local_88 + 0x18 + lVar4) != 0) {
            _Str = *(wchar_t **)(local_88 + 0x10 + lVar4);
          }
          _wtoi(_Str);
          pvVar1 = local_98;
          local_a8 = (void *)0x0;
          lVar5 = (longlong)local_90;
          local_a0 = local_90;
          if (lVar5 == 0) {
            local_9c = 0;
          }
          else {
            FUN_1446dd670(&local_a8,local_90,0);
            memcpy(local_a8,pvVar1,lVar5 * 2);
          }
          FUN_1487b41dc(param_1,&local_a8);
          if (local_98 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar3 = iVar3 + 2;
          lVar4 = lVar4 + 0x20;
        } while (iVar3 < (int)uStack_80);
      }
      FUN_1447a1747(local_88);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c92946 FUN_143c92946 body=31 status=ok
// SIG undefined FUN_143c92946(void)

undefined8 FUN_143c92946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c92a48 FUN_143c92a48 body=31 status=ok
// SIG undefined FUN_143c92a48(void)

undefined8 FUN_143c92a48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c92b0e FUN_143c92b0e body=55 status=ok
// SIG undefined FUN_143c92b0e(void)

void FUN_143c92b0e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487b581c(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143c92b9e FUN_143c92b9e body=29 status=ok
// SIG undefined FUN_143c92b9e(void)

undefined8 FUN_143c92b9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c92d3a FUN_143c92d3a body=101 status=ok
// SIG undefined FUN_143c92d3a(void)

void FUN_143c92d3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e57b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined8 *)((longlong)puVar1 + 0x24) = uVar3;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = uVar4;
  return;
}



// FUNCTION 143c92da0 FUN_143c92da0 body=101 status=ok
// SIG undefined FUN_143c92da0(void)

void FUN_143c92da0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e57b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined8 *)((longlong)puVar1 + 0x24) = uVar3;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = uVar4;
  return;
}



// FUNCTION 143c92e06 FUN_143c92e06 body=134 status=ok
// SIG undefined FUN_143c92e06(void)

void FUN_143c92e06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e57b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  DVar6 = *(DWORD *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  p_Var1->Flags = DVar6;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar7;
  p_Var1->SpareWORD = (short)((uint)uVar7 >> 0x10);
  p_Var1[1].Type = (short)uVar8;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar8 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c92e7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c92e96 FUN_143c92e96 body=269 status=ok
// SIG undefined FUN_143c92e96(void)

undefined8 FUN_143c92e96(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143c92f9d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143c92f9d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143c92f9d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143c92f51;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143c92fa4(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143c92f51;
    }
  }
  uVar6 = 0;
LAB_143c92f51:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c92fa4 FUN_143c92fa4 body=193 status=ok
// SIG undefined FUN_143c92fa4(void)

void FUN_143c92fa4(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
        (((*(uint *)(puVar2 + 1) & 0x10200000) == 0 &&
         ((param_1[3] != 0 && (uVar1 = param_1[2], -1 < (int)uVar1)))))) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar5 != (undefined8 *)0x0) && (*(uint *)(puVar5 + 2) == param_1[3])) &&
         ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
          uVar3 = *puVar2;
        }
        else {
          uVar3 = 0;
        }
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          uVar4 = *puVar5;
        }
        else {
          uVar4 = 0;
        }
        FUN_1487ae2ce(uVar3,uVar4,CONCAT31((int3)((uVar1 & 0xffff) >> 8),(char)param_1[4]));
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c93078 FUN_143c93078 body=12 status=ok
// SIG undefined FUN_143c93078(void)

void FUN_143c93078(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c93081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143c93084 FUN_143c93084 body=29 status=ok
// SIG undefined FUN_143c93084(void)

undefined8 FUN_143c93084(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c930d6 FUN_143c930d6 body=349 status=ok
// SIG undefined FUN_143c930d6(void)

void FUN_143c930d6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c258c2(param_2 + 0x18,&local_58);
  local_68 = *(undefined8 *)(*(longlong *)*param_1 + 0x20);
  FUN_1401533ba(&local_7c,&local_68,1);
  if (local_7c == 0) {
    local_60 = DAT_14cb7bba0;
    local_68 = DAT_14cb7bb98;
  }
  else {
    local_60 = local_74;
    local_68 = CONCAT44(uStack_78,local_7c);
  }
  FUN_144928d62(local_48,1,&local_68);
  local_70 = *(undefined8 *)(*(longlong *)*param_1 + 0x18);
  FUN_1401533ba(&local_68,&local_70,1);
  FUN_14013eb2c(&local_58,&local_68);
  plVar2 = (longlong *)param_1[1];
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140f12bd2(plVar2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x38 + *plVar2);
  *(undefined2 *)puVar3 = 0;
  *(undefined8 *)((longlong)puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 1) = local_50;
  *puVar3 = local_58;
  FUN_1447715ec(puVar3 + 2,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c93234 FUN_143c93234 body=189 status=ok
// SIG undefined FUN_143c93234(void)

void FUN_143c93234(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  lVar3 = *(longlong *)param_1[1];
  local_38 = lVar3 + 0x40;
  iVar4 = FUN_14140ae8a(lVar2,param_2,lVar3 + 0x18,lVar3 + 0x20);
  if ((-1 < iVar4) && (iVar4 < *(int *)(lVar2 + 0x80))) {
    iVar1 = *(int *)(lVar2 + 0xa0);
    *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
      FUN_1446f48e2(lVar2 + 0x98,iVar1);
    }
    *(int *)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 4) = iVar4;
    *(undefined1 *)param_1[2] = 1;
    local_2c = 0;
    FUN_141130d84(lVar2,iVar4,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c932f2 FUN_143c932f2 body=404 status=ok
// SIG undefined FUN_143c932f2(void)

void FUN_143c932f2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_1[1];
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_78 = *(undefined8 *)(param_2 + 0x18);
  local_70 = *(undefined4 *)(param_2 + 0x20);
  FUN_1447715ec(&local_68,param_2 + 0x28);
  local_88 = *(undefined8 *)(*(longlong *)*param_1 + 0x20);
  FUN_1401533ba(&local_9c,&local_88,1);
  if (local_9c == 0) {
    local_80 = DAT_14cb7bba0;
    local_88 = DAT_14cb7bb98;
  }
  else {
    local_80 = local_94;
    local_88 = CONCAT44(uStack_98,local_9c);
  }
  FUN_144928d62(&local_68,1,&local_88);
  local_90 = *(undefined8 *)(*(longlong *)*param_1 + 0x18);
  FUN_1401533ba(&local_88,&local_90,1);
  FUN_14013eb2c(&local_78,&local_88);
  iVar1 = *(int *)(lVar2 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x78);
    lVar5 = 0;
    do {
      cVar4 = FUN_14493b798(lVar5 + lVar3 + 8,&local_78);
      if (cVar4 != '\0') {
        iVar1 = *(int *)(lVar3 + 0x80 + lVar5);
        if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x80))) {
          FUN_1487b04b6(lVar2);
          *(undefined1 *)param_1[2] = 1;
        }
        break;
      }
      lVar5 = lVar5 + 0x280;
    } while ((longlong)iVar1 * 0x280 != lVar5);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c934b4 FUN_143c934b4 body=174 status=ok
// SIG undefined FUN_143c934b4(void)

void FUN_143c934b4(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  code *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  code **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x28) != 0) {
    local_58 = param_1[1];
    uVar1 = *(undefined8 *)*param_1;
    local_30 = &local_58;
    local_68 = *(undefined8 *)(param_2 + 0x28);
    local_60 = *(undefined4 *)(param_2 + 0x30);
    local_20 = &local_38;
    local_38 = FUN_143c93564;
    local_28 = &LAB_143c930c8;
    local_50 = param_2;
    uVar2 = FUN_1401ad114();
    local_48 = local_68;
    local_40 = local_60;
    FUN_140e9367e(uVar1,&local_48,uVar2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c93564 FUN_143c93564 body=42 status=ok
// SIG undefined FUN_143c93564(void)

void FUN_143c93564(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  FUN_14140ae8a(*param_1,param_2,lVar1 + 0x18,lVar1 + 0x20,lVar1 + 0x40);
  return;
}



// FUNCTION 143c93680 FUN_143c93680 body=371 status=ok
// SIG undefined FUN_143c93680(void)

undefined8 FUN_143c93680(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 *local_58;
  undefined4 local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  lVar8 = *(longlong *)(lVar3 + 0x170);
  iVar1 = *(int *)(lVar3 + 0x178);
  if ((longlong)iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0;
    do {
      local_4c = *(char *)(lVar8 + 0x44 + lVar7);
      if (local_4c == '\x01') {
        local_50 = *(undefined4 *)(lVar8 + 0x40 + lVar7);
      }
      if ((*(int *)(lVar3 + 0x84) == 0) || (uVar2 = *(uint *)(lVar3 + 0x80), (int)uVar2 < 0)) {
LAB_143c9377f:
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != *(int *)(lVar3 + 0x84))) ||
             ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_143c9377f;
          uVar4 = *puVar5;
        }
      }
      local_60 = lVar8 + 0x20 + lVar7;
      local_68 = lVar8 + 8 + lVar7;
      local_58 = &local_50;
      FUN_140630b48(uVar4,*(undefined8 *)(lVar8 + lVar7),lVar3 + 0xe8,lVar3 + 0xf8);
      lVar7 = lVar7 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar7);
    uVar6 = *(undefined4 *)(lVar3 + 0x178);
    lVar8 = *(longlong *)(lVar3 + 0x170);
  }
  iVar1 = *(int *)(lVar3 + 0x17c);
  FUN_1405d7b1d(lVar8,uVar6);
  *(undefined4 *)(lVar3 + 0x178) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar3 + 0x17c) != 0)) {
    FUN_1487b7b4c(lVar3 + 0x170);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c937fe FUN_143c937fe body=12 status=ok
// SIG undefined FUN_143c937fe(void)

void FUN_143c937fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143c93807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143c9380a FUN_143c9380a body=29 status=ok
// SIG undefined FUN_143c9380a(void)

undefined8 FUN_143c9380a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c93828 FUN_143c93828 body=68 status=ok
// SIG undefined FUN_143c93828(void)

undefined8 * FUN_143c93828(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3e5dc0;
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



// FUNCTION 143c9386c FUN_143c9386c body=91 status=ok
// SIG undefined FUN_143c9386c(void)

bool FUN_143c9386c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143c9389c;
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
LAB_143c9389c:
  return lVar6 == param_2;
}



// FUNCTION 143c93906 FUN_143c93906 body=29 status=ok
// SIG undefined FUN_143c93906(void)

undefined8 FUN_143c93906(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c93aa2 FUN_143c93aa2 body=93 status=ok
// SIG undefined FUN_143c93aa2(void)

void FUN_143c93aa2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e5ec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c93b00 FUN_143c93b00 body=93 status=ok
// SIG undefined FUN_143c93b00(void)

void FUN_143c93b00(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e5ec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c93b5e FUN_143c93b5e body=126 status=ok
// SIG undefined FUN_143c93b5e(void)

void FUN_143c93b5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5ec0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c93bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c93be6 FUN_143c93be6 body=266 status=ok
// SIG undefined FUN_143c93be6(void)

undefined8 FUN_143c93be6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143c93cea;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143c93cea;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143c93cea:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143c93c91;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_146128e5e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143c93c91;
    }
  }
  uVar6 = 0;
LAB_143c93c91:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c93cf2 FUN_143c93cf2 body=29 status=ok
// SIG undefined FUN_143c93cf2(void)

undefined8 FUN_143c93cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c93e8e FUN_143c93e8e body=93 status=ok
// SIG undefined FUN_143c93e8e(void)

void FUN_143c93e8e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e5f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c93eec FUN_143c93eec body=93 status=ok
// SIG undefined FUN_143c93eec(void)

void FUN_143c93eec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e5f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c93f4a FUN_143c93f4a body=126 status=ok
// SIG undefined FUN_143c93f4a(void)

void FUN_143c93f4a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5f30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c93fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c94022 FUN_143c94022 body=350 status=ok
// SIG undefined FUN_143c94022(void)

undefined8 FUN_143c94022(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143c9417a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143c9417a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143c9417a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143c94116;
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
          FUN_146121750(uVar6);
        }
      }
      goto LAB_143c94116;
    }
  }
  uVar7 = 0;
LAB_143c94116:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c94182 FUN_143c94182 body=29 status=ok
// SIG undefined FUN_143c94182(void)

undefined8 FUN_143c94182(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c941b4 FUN_143c941b4 body=93 status=ok
// SIG undefined FUN_143c941b4(void)

void FUN_143c941b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6070;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e6000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c94212 FUN_143c94212 body=93 status=ok
// SIG undefined FUN_143c94212(void)

void FUN_143c94212(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6070;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e6000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c94270 FUN_143c94270 body=126 status=ok
// SIG undefined FUN_143c94270(void)

void FUN_143c94270(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6070;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e6000;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c942df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c942f8 FUN_143c942f8 body=20 status=ok
// SIG undefined FUN_143c942f8(void)

undefined1 FUN_143c942f8(longlong param_1)

{
  FUN_143c926e4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143c94314 FUN_143c94314 body=29 status=ok
// SIG undefined FUN_143c94314(void)

undefined8 FUN_143c94314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c944b0 FUN_143c944b0 body=93 status=ok
// SIG undefined FUN_143c944b0(void)

void FUN_143c944b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e6170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9450e FUN_143c9450e body=93 status=ok
// SIG undefined FUN_143c9450e(void)

void FUN_143c9450e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3e6170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c9456c FUN_143c9456c body=126 status=ok
// SIG undefined FUN_143c9456c(void)

void FUN_143c9456c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e6170;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c945db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c945ea FUN_143c945ea body=90 status=ok
// SIG undefined FUN_143c945ea(void)

void FUN_143c945ea(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1403a0728(param_2 + 0x38,local_28);
  FUN_1487b4434(uVar1,param_2,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c94646 FUN_143c94646 body=302 status=ok
// SIG undefined FUN_143c94646(void)

undefined8 FUN_143c94646(longlong param_1,longlong param_2)

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
    if (iVar1 == 2) goto LAB_143c9476e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143c9476e;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_143c9476e:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143c946f7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      FUN_1403a0728(param_2 + 0x38,&local_38);
      FUN_1487b4434(uVar6,param_2,&local_38);
      uVar6 = 1;
      goto LAB_143c946f7;
    }
  }
  uVar6 = 0;
LAB_143c946f7:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c94775 FUN_143c94775 body=2003 status=ok
// SIG undefined FUN_143c94775(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c94775(void)

{
  double dVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_98,&DAT_14cb70178);
  if (cVar3 == '\0') {
    _DAT_14cb70178 = 0;
    uRam000000014cb70180 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_98 = "ActivityInstanceId";
  local_90 = 0x12;
  local_8c = 0;
  uVar4 = FUN_14001a6c0(&local_98,1);
  DAT_14cb70188 = (ulonglong)uVar4;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar4 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb70190 = (ulonglong)uVar4;
  _DAT_14cb70198 = 0;
  uRam000000014cb701a0 = 0;
  _DAT_14cb701a8 = 0;
  DAT_14cb701b0 = 0;
  uRam000000014cb701b8 = 0;
  FUN_1446ddda2(&DAT_14cb70198,"allactivities",0);
  atexit((_func_5014 *)&LAB_143c8dd54);
  _DAT_14cb701c0 = 0;
  uRam000000014cb701c8 = 0;
  _DAT_14cb701d0 = 0;
  DAT_14cb701d8 = 0;
  uRam000000014cb701e0 = 0;
  FUN_1446ddda2(&DAT_14cb701c0,"serial",0);
  atexit((_func_5014 *)&LAB_143c8dd65);
  _DAT_14cb701e8 = 0;
  uRam000000014cb701f0 = 0;
  _DAT_14cb701f8 = 0;
  DAT_14cb70200 = 0;
  uRam000000014cb70208 = 0;
  FUN_1446ddda2(&DAT_14cb701e8,"missionstate",0);
  atexit((_func_5014 *)&LAB_143c8dd76);
  ram0x00014cb70c24 = 0;
  FUN_14052b5e0(&DAT_14cb70c20,"Layout",0);
  _DAT_14cb70c30 = "Layout";
  DAT_14cb70214 = 0;
  FUN_14052b5e0(&DAT_14cb70210,"ResetLayoutToDefault",0);
  _DAT_14cb70220 = "ResetLayoutToDefault";
  DAT_14cb7022c = 0;
  FUN_14052b5e0(&DAT_14cb70228,"SetDefaultLayout",0);
  _DAT_14cb70238 = "SetDefaultLayout";
  ram0x00014cb70244 = 0;
  FUN_14052b5e0(&DAT_14cb70240,"SetSwitches",0);
  _DAT_14cb70250 = "SetSwitches";
  _DAT_14cb70260 = 0;
  LOCK();
  DAT_14cb70258 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143c8dd87);
  DAT_14cb702c8 = 0;
  _DAT_14cb702d0 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143c92b08;
  local_98 = &DAT_14011fc1e;
  FUN_14617d03e(&local_98);
  atexit((_func_5014 *)&LAB_143c8ddba);
  _DAT_14cb70368 = &LAB_143c8ddbf;
  _DAT_14cb70370 = 0x461ef000;
  DAT_14cb70374 = 1;
  DAT_14cb70360 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb70360;
  atexit((_func_5014 *)&LAB_143c8ddc4);
  _DAT_14cb70380 = 0x47efffffe0000000;
  _DAT_14cb70388 = 0x47efffffe0000000;
  _DAT_14cb70390 = 0x47efffffe0000000;
  _DAT_14cb70398 = 0x47efffffe0000000;
  _DAT_14cb703a0 = 0x47efffffe0000000;
  _DAT_14cb703a8 = 0x47efffffe0000000;
  _DAT_14cb703b0 = 0x47efffffe0000000;
  _DAT_14cb703b8 = 0x47efffffe0000000;
  DAT_14cb70420 = 0;
  _DAT_14cb70428 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143c92b46;
  local_98 = &DAT_14011fc1e;
  FUN_14617d73a(&local_98);
  atexit((_func_5014 *)&LAB_143c8de21);
  _DAT_14cb704b8 = &LAB_143c8de26;
  _DAT_14cb704c0 = 0x461ef400;
  DAT_14cb704c4 = 1;
  DAT_14cb704b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb704b0;
  atexit((_func_5014 *)&LAB_143c8de2b);
  DAT_14cb70530 = 0;
  _DAT_14cb70538 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143c92b4c;
  local_98 = &DAT_14011fc1e;
  FUN_14617de36(&local_98);
  atexit((_func_5014 *)&LAB_143c8de88);
  _DAT_14cb705c8 = &LAB_143c8de8d;
  _DAT_14cb705d0 = 0x461ef800;
  DAT_14cb705d4 = 1;
  DAT_14cb705c0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb705c0;
  atexit((_func_5014 *)&LAB_143c8de92);
  local_98 = "nexus";
  local_90 = 5;
  local_8c = 0;
  uVar4 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb705e0 = (ulonglong)uVar4;
  _DAT_14cb705ec = 0;
  FUN_14052b5e0(&DAT_14cb705e8,"status",0);
  _DAT_14cb705f8 = "status";
  DAT_14cb70600 = 0;
  DAT_14cb70608 = 0;
  atexit(FUN_143c8dec6);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb70610,L"gbx.Activities.Enabled",&local_98,
                L"Whether the Activities System is enabled. Zero for disabled, non-zero for enabled."
               );
  atexit(FUN_143c912cd);
  local_98 = (char *)CONCAT44(local_98._4_4_,1000);
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb70628,L"gbx.Activities.MaxSpawnBudget",&local_98,
                L"The max budget for the activity system. Every activity def has an arbitrary number, and the total can not exceed this MaxSpawnBudget number."
               );
  atexit(FUN_143c91312);
  local_98 = (char *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_c8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb70640,L"gbx.Activities.UseMemoryStopper",&local_98,
                L"Whether the Activities System uses the memory stopper. If true, then we check if the memory state is nominal and if it\'s not, we don\'t spawn any new activities."
               );
  atexit(FUN_143c91357);
  local_98._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb70c08,L"gbx.Activities.CacheEnabledAreasMissionChoices",&local_98,
                L"Whether the generated mission should use the cache to optimize run speed. (on by default, can be turned off to make debugging easier)."
               );
  atexit(FUN_143c9139c);
  local_98 = (char *)((ulonglong)local_98._4_4_ << 0x20);
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb70bf0,L"gbx.Activities.AlwaysPickClosestArea",&local_98,
                L"If this is enabled, the closest area will always be the one the activity system will pick."
               );
  atexit(FUN_143c913e1);
  local_98 = &DAT_14a19662d;
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  DAT_14cb706b8 = (undefined8 *)0x0;
  _DAT_14cb706c0 = 0;
  puVar5 = (undefined8 *)FUN_140595974(0xa400,0);
  lVar7 = 0x3f;
  puVar2 = puVar5;
  do {
    puVar6 = puVar2 + 0x52;
    *puVar2 = puVar6;
    lVar7 = lVar7 + -1;
    puVar2 = puVar6;
  } while (lVar7 != 0);
  _DAT_14cb706c0 = _DAT_14cb706c0 + 0x40;
  *puVar6 = DAT_14cb706b8;
  DAT_14cb706b8 = puVar5;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143c9367a;
  local_98 = &DAT_14011fc1e;
  FUN_1460e1b96(&local_98);
  atexit((_func_5014 *)&LAB_143c9144f);
  DAT_14cb70758 = 0;
  atexit((_func_5014 *)&LAB_143c91bcb);
  DAT_14cb70a90 = 0;
  _DAT_14cb70a98 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_143c93900;
  local_98 = &DAT_14011fc1e;
  FUN_14617e532(&local_98);
  atexit((_func_5014 *)&LAB_143c91c0c);
  _DAT_14cb70b28 = &LAB_143c91c11;
  _DAT_14cb70b30 = 0x461ef000;
  DAT_14cb70b34 = 1;
  DAT_14cb70b20 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb70b20;
  atexit((_func_5014 *)&LAB_143c91c16);
  FUN_1402160b8(&local_98);
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (undefined *)((ulonglong)local_c8._4_4_ << 0x20);
  FUN_14021300e(&local_a0,0x7e8,1,1);
  dVar1 = (double)((longlong)local_98 - local_a0) / 10000000.0;
  DAT_14cb70b40 = (undefined4)((ulonglong)(longlong)ROUND(dVar1 + dVar1 + 0.5) >> 1);
  FUN_1446f470e(&DAT_14cb70b48,L"Root",1);
  local_c8 = &DAT_14b3e52f1;
  local_c0 = local_c0 & 0xffff0000;
  FUN_14655db90(&DAT_14cb70b50,FUN_1487b2c22,"FActivitySerialNumber",0xf);
  atexit((_func_5014 *)&LAB_143c91f1d);
  _DAT_14cb70bc8 = 0;
  LOCK();
  DAT_14cb70bc0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143c92196);
  local_c8 = (undefined *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_1412cc41e(&DAT_14cb70bd4,L"FGbxActivitySystem",0,0);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c94f85 FUN_143c94f85 body=49 status=ok
// SIG undefined FUN_143c94f85(void)

void FUN_143c94f85(void)

{
  FUN_140ad223a(DAT_14cb70c78,DAT_14cb70c80);
  if (DAT_14cb70c78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c94fb6 FUN_143c94fb6 body=49 status=ok
// SIG undefined FUN_143c94fb6(void)

void FUN_143c94fb6(void)

{
  FUN_1403d9da7(DAT_14cb70c88,DAT_14cb70c90);
  if (DAT_14cb70c88 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c95054 FUN_143c95054 body=132 status=ok
// SIG undefined FUN_143c95054(void)

void FUN_143c95054(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b392a30;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &DAT_14a171d50;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &DAT_14a171d50;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0xb] = &DAT_14cb70058;
  param_1[0xf] = &DAT_14cb70058;
  return;
}



// FUNCTION 143c95112 FUN_143c95112 body=302 status=ok
// SIG undefined FUN_143c95112(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143c95112(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  void *_Src;
  
  uVar7 = (ulonglong)*(byte *)(param_1 + 0x45);
  if ((int)(uint)*(byte *)(param_1 + 0x45) < *(int *)(DAT_14cb71140 + 0x3a8)) {
    lVar2 = *(longlong *)(DAT_14cb71140 + 0x3a0);
    *param_2 = *(undefined8 *)(lVar2 + uVar7 * 0x28);
    puVar1 = (undefined4 *)(lVar2 + 8 + uVar7 * 0x28);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *(undefined4 *)(param_2 + 1) = *puVar1;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    *(undefined4 *)(param_2 + 2) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    param_2[3] = 0;
    _Src = *(void **)(lVar2 + 0x18 + uVar7 * 0x28);
    iVar6 = *(int *)(lVar2 + 0x20 + uVar7 * 0x28);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb70f20) {
      FUN_144b3d300(&DAT_14cb70f20);
      if (DAT_14cb70f20 == -1) {
        _DAT_14cb70f08 = 0;
        DAT_14cb70f10 = (void *)0x0;
        DAT_14cb70ef8 = 0;
        _DAT_14cb70f00 = 0;
        _DAT_14cb70f18 = 0;
        atexit((_func_5014 *)&LAB_143c95240);
        _Init_thread_footer(&DAT_14cb70f20);
      }
    }
    *param_2 = DAT_14cb70ef8;
    uVar3 = DAT_14cb70f00_4;
    uVar4 = _DAT_14cb70f08;
    uVar5 = DAT_14cb70f08_4;
    *(undefined4 *)(param_2 + 1) = _DAT_14cb70f00;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    *(undefined4 *)(param_2 + 2) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    param_2[3] = 0;
    _Src = DAT_14cb70f10;
    iVar6 = DAT_14cb70f18;
  }
  *(int *)(param_2 + 4) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar6,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar6 * 2);
  }
  return param_2;
}



// FUNCTION 143c95252 FUN_143c95252 body=272 status=ok
// SIG undefined FUN_143c95252(void)

void FUN_143c95252(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140c1c194();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*param_2 == 0)) goto LAB_143c952d1;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_143c9535b:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_143c9535b;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_2);
  }
  param_2[2] = lVar5;
LAB_143c952d1:
  cVar2 = FUN_1411b1ca0(*param_1,param_2);
  uVar6 = 0;
  if ((lVar5 != 0) && (cVar2 == '\0')) {
    cVar2 = FUN_14094f774(param_1[1],lVar5);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x3f800000;
    }
  }
  lVar4 = *(longlong *)(param_1[2] + 0x80);
  if (lVar4 == 0) {
    lVar4 = param_1[2];
  }
  *(undefined4 *)(lVar4 + (longlong)*(int *)param_1[3] * 4) = uVar6;
  lVar4 = *(longlong *)(param_1[2] + 0x80);
  if (lVar4 == 0) {
    lVar4 = param_1[2];
  }
  *(float *)param_1[4] = *(float *)(lVar4 + (longlong)*(int *)param_1[3] * 4) + *(float *)param_1[4]
  ;
  *(int *)param_1[3] = *(int *)param_1[3] + 1;
  return;
}



// FUNCTION 143c95362 FUN_143c95362 body=626 status=ok
// SIG undefined FUN_143c95362(void)

bool FUN_143c95362(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)*param_2;
  if (plVar7 != (longlong *)0x0) {
    uVar14 = 0;
    local_b0 = plVar7;
    (**(code **)(*plVar7 + 8))(plVar7,param_1 + 0xf0,0);
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,param_1 + 0x1a0,0);
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,param_1 + 0x1c8,0);
    iVar2 = *(int *)(param_1 + 0x138);
    if (iVar2 == 0) {
      uVar15 = 1;
      iVar10 = 0;
      iVar4 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x130);
      if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x120);
      }
      uVar6 = *puVar5;
      if (uVar6 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar10 = 0;
        do {
          if (uVar15 == uVar14) goto LAB_143c95468;
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar5[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar14 = 0;
        iVar10 = 0;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar6 = 0xffffffff;
      do {
        (**(code **)(*(longlong *)*param_2 + 8))
                  ((longlong *)*param_2,
                   *(longlong *)(param_1 + 0x110) + (longlong)iVar4 * 0x38 + 0x10,0);
        uVar6 = ~(uint)uVar15 & uVar6;
        puVar5 = *(uint **)(param_1 + 0x130);
        if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x120);
        }
        iVar3 = *(int *)(param_1 + 0x138);
        iVar4 = (int)uVar14;
        lVar12 = (longlong)iVar4;
        uVar11 = puVar5[lVar12] & uVar6;
        if (uVar11 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar4) {
            iVar9 = iVar4;
          }
          if (iVar4 < iVar8) {
            lVar13 = 0;
            do {
              uVar11 = puVar5[lVar12 + lVar13 + 1];
              if (uVar11 != 0) {
                uVar14 = (ulonglong)(iVar4 + (int)lVar13 + 1);
                uVar6 = 0xffffffff;
                goto LAB_143c95582;
              }
              iVar10 = iVar10 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar9 - lVar12 != lVar13);
            uVar6 = 0xffffffff;
            iVar4 = iVar9;
          }
          uVar14 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_143c95582:
          uVar15 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
LAB_143c95468:
    local_78 = 0;
    local_68 = &PTR_LAB_14b3e70f0;
    local_88 = &LAB_143c99878;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_60 = param_2;
    FUN_140b38cfe(param_1);
    plVar7 = local_b0;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7 != (longlong *)0x0;
}



// FUNCTION 143c955d6 FUN_143c955d6 body=1229 status=ok
// SIG undefined FUN_143c955d6(void)

void FUN_143c955d6(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_198 [40];
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined1 local_140 [7];
  char local_139;
  longlong local_138 [2];
  undefined8 local_128 [6];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_60;
  
  lVar4 = DAT_14cb71140;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_3;
  local_168 = param_1;
  local_158 = param_2;
  local_150 = param_4;
  if ((longlong)*(int *)(param_1 + 0x180) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x178);
    local_148 = plVar9 + (longlong)*(int *)(param_1 + 0x180) * 6;
    local_160 = param_3 + 4;
    do {
      if ((longlong)(int)plVar9[3] != 0) {
        plVar6 = (longlong *)plVar9[2];
        plVar8 = plVar6 + (int)plVar9[3];
        do {
          if ((int)local_158[1] != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*local_158 + lVar11) == *plVar6) goto LAB_143c956de;
              lVar11 = lVar11 + 8;
            } while ((longlong)(int)local_158[1] << 3 != lVar11);
          }
          if ((int)local_158[3] == 0) goto LAB_143c957f5;
          lVar11 = 0;
          while (*(longlong *)(local_158[2] + lVar11) != *plVar6) {
            lVar11 = lVar11 + 8;
            if ((longlong)(int)local_158[3] << 3 == lVar11) goto LAB_143c957f5;
          }
LAB_143c956de:
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar8);
      }
      lVar11 = plVar9[1];
      if ((longlong)(int)lVar11 != 0) {
        lVar12 = *plVar9;
        lVar10 = 0;
        do {
          if ((int)(uint)*(ushort *)(lVar12 + lVar10) < *(int *)(lVar4 + 0x3f8)) {
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_d8 = 2;
            local_d4 = 0x3f800000;
            uStack_d0 = 0x3f800000;
            uStack_cc = 0x3f800000;
            uStack_c8 = 0x3f800000;
            local_c4 = 0;
            local_98 = 0;
            lStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            FUN_141864954((ulonglong)((uint)*(ushort *)(lVar12 + lVar10) * 0x50) +
                          *(longlong *)(lVar4 + 0x3f0),&local_f8);
            local_139 = '\0';
            FUN_144a13f80(param_4,local_140,&local_f8,&local_139);
            if (local_139 == '\0') {
              pcVar3 = (code *)*local_170;
              plVar8 = (longlong *)local_170[2];
              if ((longlong *)local_170[2] == (longlong *)0x0) {
                plVar8 = local_160;
              }
              uVar7 = (**(code **)(*plVar8 + 8))();
              (*pcVar3)(uVar7,&local_f8);
              param_4 = local_150;
            }
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            if (lStack_90 != 0) {
              FUN_1400020a8();
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
          }
          lVar10 = lVar10 + 2;
        } while ((longlong)(int)lVar11 * 2 != lVar10);
      }
LAB_143c957f5:
      plVar9 = plVar9 + 6;
    } while (plVar9 != local_148);
  }
  iVar2 = *(int *)(local_168 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar11 = *(longlong *)(local_168 + 0x168);
    local_160 = local_170 + 4;
    lVar12 = 0;
    do {
      uVar1 = *(ushort *)(lVar11 + lVar12);
      if ((int)(uint)uVar1 < *(int *)(lVar4 + 0x3f8)) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_d8 = 2;
        local_d4 = 0x3f800000;
        uStack_d0 = 0x3f800000;
        uStack_cc = 0x3f800000;
        uStack_c8 = 0x3f800000;
        local_c4 = 0;
        local_98 = 0;
        lStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        FUN_141864954((ulonglong)((uint)uVar1 * 0x50) + *(longlong *)(lVar4 + 0x3f0),&local_f8);
        local_139 = '\0';
        FUN_144a13f80(param_4,local_140,&local_f8,&local_139);
        if (local_139 == '\0') {
          pcVar3 = (code *)*local_170;
          plVar9 = (longlong *)local_170[2];
          if ((longlong *)local_170[2] == (longlong *)0x0) {
            plVar9 = local_160;
          }
          uVar7 = (**(code **)(*plVar9 + 8))();
          (*pcVar3)(uVar7,&local_f8);
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        if (lStack_90 != 0) {
          FUN_1400020a8();
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
      lVar12 = lVar12 + 2;
    } while ((longlong)iVar2 * 2 != lVar12);
  }
  lVar4 = local_168;
  plVar9 = local_170;
  if (*(char *)(local_168 + 0x160) == '\0') goto LAB_143c959e1;
  lVar11 = *(longlong *)(local_168 + 0x90);
  if (lVar11 == 0) {
    uVar7 = FUN_140b38cc4();
    lVar11 = FUN_14477b664(uVar7);
    *(longlong *)(lVar4 + 0x90) = lVar11;
  }
  lVar12 = *(longlong *)(lVar4 + 0x98);
  if (lVar12 == 0) {
    if ((lVar11 == 0) || (*(longlong *)(lVar4 + 0x88) == 0)) goto LAB_143c959e1;
    plVar8 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')) {
      *(undefined8 *)(lVar4 + 0x98) = 0;
      goto LAB_143c959e1;
    }
    uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
    lVar12 = FUN_144aff482(uVar7,(longlong *)(lVar4 + 0x88));
    *(longlong *)(lVar4 + 0x98) = lVar12;
    if (lVar12 == 0) goto LAB_143c959e1;
  }
  local_138[0] = *plVar9;
  local_128[0] = 0;
  if (local_138[0] != 0) {
    plVar8 = plVar9 + 4;
    if ((longlong *)plVar9[2] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar9[2];
    }
    (**(code **)*plVar8)(plVar8,local_128);
  }
  FUN_143c955d6(lVar12,local_158,local_138,local_150);
LAB_143c959e1:
  if (*plVar9 != 0) {
    plVar8 = plVar9 + 4;
    if ((longlong *)plVar9[2] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar9[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c95aa4 FUN_143c95aa4 body=119 status=ok
// SIG undefined FUN_143c95aa4(void)

void FUN_143c95aa4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  local_28 = &PTR_LAB_14b3e7130;
  local_48 = &LAB_143c998e6;
  local_20 = param_2;
  FUN_140b38cfe(0,&local_68);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c95b1c FUN_143c95b1c body=1090 status=ok
// SIG undefined FUN_143c95b1c(void)

void FUN_143c95b1c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  char cVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_198 [40];
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158 [5];
  ulonglong uStack_130;
  char local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_160 = param_1;
  FUN_1409ad290();
  lVar4 = DAT_14cb71140;
  if (*param_2 == 0) {
    puVar7 = &DAT_14c9a1308;
  }
  else {
    puVar7 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb70f58);
  }
  pbVar3 = (byte *)*puVar7;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 2)) {
    lVar10 = (longlong)(int)(*(longlong **)(pbVar3 + 8))[2];
    if (lVar10 != 0) {
      lVar11 = **(longlong **)(pbVar3 + 8);
      local_170 = (longlong *)(lVar4 + 0x3f0);
      local_168 = (longlong *)(local_160 + 0x168);
      lVar10 = lVar10 << 4;
      do {
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_e8 = 2;
        local_e4 = 0x3f800000;
        uStack_e0 = 0x3f800000;
        uStack_dc = 0x3f800000;
        uStack_d8 = 0x3f800000;
        local_d4 = 0;
        local_98 = 0;
        lStack_90 = 0;
        local_a8 = 0;
        lStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_88 = 0;
        uVar8 = FUN_1418545fa();
        cVar5 = FUN_1446e7478(lVar11,&local_108,uVar8,0);
        if (cVar5 != '\0') {
          FUN_140164348(local_158,&local_108);
          uVar6 = FUN_144a81f2c(local_170,local_158);
          iVar2 = *(int *)(local_160 + 0x170);
          *(uint *)(local_160 + 0x170) = iVar2 + 1U;
          if (*(uint *)(local_160 + 0x174) < iVar2 + 1U) {
            FUN_14488eebe(local_168,iVar2);
          }
          *(undefined2 *)(*local_168 + (longlong)iVar2 * 2) = uVar6;
          if ((local_118 == '\x04') && (local_118 = -1, uStack_130 != 0)) {
            FUN_1400020a8();
          }
        }
        if (lStack_90 != 0) {
          FUN_1400020a8();
        }
        if (lStack_a0 != 0) {
          FUN_1400020a8();
        }
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        lVar11 = lVar11 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
  }
  if (*param_2 == 0) {
    puVar7 = &DAT_14c9a1308;
  }
  else {
    puVar7 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb70f60);
  }
  pbVar3 = (byte *)*puVar7;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 2)) {
    lVar10 = (longlong)*(int *)(*(undefined8 **)(pbVar3 + 8) + 2);
    if (lVar10 != 0) {
      plVar9 = (longlong *)**(undefined8 **)(pbVar3 + 8);
      local_168 = plVar9 + lVar10 * 2;
      local_170 = (longlong *)(local_160 + 0x178);
      do {
        local_158[4] = 0;
        uStack_130 = 0;
        local_158[2] = 0;
        local_158[3] = 0;
        local_158[0] = 0;
        local_158[1] = 0;
        uVar8 = FUN_143c42bf2();
        cVar5 = FUN_1446e7478(plVar9,local_158,uVar8,0);
        if (cVar5 != '\0') {
          iVar2 = *(int *)(local_160 + 0x180);
          *(uint *)(local_160 + 0x180) = iVar2 + 1U;
          if (*(uint *)(local_160 + 0x184) < iVar2 + 1U) {
            FUN_143c99da2(local_170,iVar2);
          }
          lVar10 = *local_170;
          plVar1 = (longlong *)(lVar10 + (longlong)iVar2 * 0x30);
          FUN_143c99d93(plVar1);
          FUN_1403de7ba(lVar10 + (longlong)iVar2 * 0x30 + 0x10,local_158);
          if ((int)uStack_130 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uStack_130 & 0xffffffff);
          }
          if (*(int *)((longlong)plVar1 + 0xc) < (int)uStack_130) {
            FUN_1448759c8(plVar1);
          }
          if ((int)uStack_130 != 0) {
            lVar10 = (longlong)(int)uStack_130 * 0x90;
            lVar11 = local_158[4];
            do {
              FUN_140164348(&local_108,lVar11);
              uVar6 = FUN_144a81f2c(lVar4 + 0x3f0,&local_108);
              iVar2 = (int)plVar1[1];
              *(uint *)(plVar1 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)plVar1 + 0xc) < iVar2 + 1U) {
                FUN_14488eebe(plVar1,iVar2);
              }
              *(undefined2 *)(*plVar1 + (longlong)iVar2 * 2) = uVar6;
              if ((char)local_c8 == '\x04') {
                local_c8 = CONCAT71(local_c8._1_7_,0xff);
                if (CONCAT44(uStack_dc,uStack_e0) != 0) {
                  FUN_1400020a8();
                }
              }
              lVar11 = lVar11 + 0x90;
              lVar10 = lVar10 + -0x90;
            } while (lVar10 != 0);
          }
        }
        FUN_143c43d88(local_158[4],uStack_130 & 0xffffffff);
        if (local_158[4] != 0) {
          FUN_1400020a8();
        }
        if (local_158[2] != 0) {
          FUN_1400020a8();
        }
        if (local_158[0] != 0) {
          FUN_1400020a8();
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != local_168);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c95f60 FUN_143c95f60 body=274 status=ok
// SIG undefined FUN_143c95f60(void)

void FUN_143c95f60(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140c1c194();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    uVar6 = 0;
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_143c95faf;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
      goto LAB_143c95faf;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_2);
    param_2[2] = lVar5;
    if (lVar5 == 0) goto LAB_143c95faf;
  }
  cVar2 = FUN_14094f774(*param_1,lVar5);
  uVar6 = param_3;
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
LAB_143c95faf:
  lVar4 = *(longlong *)(param_1[1] + 0x80);
  if (lVar4 == 0) {
    lVar4 = param_1[1];
  }
  *(undefined4 *)(lVar4 + (longlong)*(int *)param_1[2] * 4) = uVar6;
  lVar4 = *(longlong *)(param_1[1] + 0x80);
  if (lVar4 == 0) {
    lVar4 = param_1[1];
  }
  *(float *)param_1[3] = *(float *)(lVar4 + (longlong)*(int *)param_1[2] * 4) + *(float *)param_1[3]
  ;
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  return;
}



// FUNCTION 143c96072 FUN_143c96072 body=41 status=ok
// SIG undefined FUN_143c96072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c96072(void)

{
  _DAT_14cb70fb8 = 0;
  if (DAT_14cb70fb0 != 0) {
    FUN_1400020a8();
  }
  FUN_1461622e2();
  return;
}



// FUNCTION 143c9609b FUN_143c9609b body=49 status=ok
// SIG undefined FUN_143c9609b(void)

void FUN_143c9609b(void)

{
  FUN_146544143(DAT_14cb70fc8,DAT_14cb70fd0);
  if (DAT_14cb70fc8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c960de FUN_143c960de body=722 status=ok
// SIG undefined FUN_143c960de(void)

void FUN_143c960de(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  undefined1 local_50 [4];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((((*(longlong *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
        (uVar9 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar9)) &&
       (((int)uVar9 < DAT_14c9647dc &&
        (plVar11 = (longlong *)
                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
        plVar11 != (longlong *)0x0)))) &&
      (((int)plVar11[2] == *(int *)(param_1 + 0x20) &&
       (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
        (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0)))))) &&
     (lVar5 = FUN_1447210f0(plVar11), lVar5 != 0)) {
    uVar6 = FUN_140437988();
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,uVar6);
    if (plVar11 != (longlong *)0x0) {
      uVar6 = FUN_140437988();
      plVar7 = (longlong *)FUN_144718840(plVar11,uVar6);
      if (plVar7 != (longlong *)0x0 && plVar11 != plVar7) {
        bVar14 = *(byte *)(lVar5 + 0x152);
        if ((bVar14 == 1) || ((bVar14 < 7 && ((0x68U >> (bVar14 & 0x1f) & 1) != 0)))) {
          lVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
          cVar4 = FUN_142b34f2c(lVar5);
          if (cVar4 == '\0') goto LAB_143c96363;
          bVar3 = true;
        }
        else {
          lVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
          bVar3 = false;
        }
        lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x50);
        if (lVar17 != 0) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
          local_58 = lVar5 + 0x20;
          lVar16 = 0;
          do {
            lVar2 = *(longlong *)(lVar1 + lVar16);
            if (lVar2 != 0) {
              uVar9 = (uint)*(byte *)(lVar2 + 0x43);
              plVar11 = &DAT_14c9a6318;
              if ((int)(uint)*(byte *)(lVar2 + 0x43) < *(int *)(DAT_14cb71140 + 0x3c8)) {
                plVar11 = (longlong *)
                          ((ulonglong)(uVar9 * 0xc) + *(longlong *)(DAT_14cb71140 + 0x3c0));
              }
              if ((*plVar11 != 0) || ((int)plVar11[1] != -1)) {
                bVar14 = *(byte *)(lVar2 + 0x44);
                uVar10 = (uint)bVar14;
                iVar15 = *(int *)(DAT_14cb71140 + 0x3d8);
                plVar11 = &DAT_14c9a6324;
                if ((int)(uint)bVar14 < iVar15) {
                  plVar11 = (longlong *)
                            ((ulonglong)(uVar10 * 0xc) + *(longlong *)(DAT_14cb71140 + 0x3d0));
                }
                if (*plVar11 != 0) {
                  if (!bVar3) {
                    local_60 = &DAT_14c9a6324;
                    if ((int)uVar10 < iVar15) {
                      local_60 = (longlong *)
                                 ((ulonglong)(uVar10 * 0xc) + *(longlong *)(DAT_14cb71140 + 0x3d0));
                    }
                    puVar13 = &DAT_14c9a6318;
                    if ((int)uVar9 < *(int *)(DAT_14cb71140 + 0x3c8)) {
                      puVar13 = (undefined8 *)
                                ((ulonglong)(uVar9 * 0xc) + *(longlong *)(DAT_14cb71140 + 0x3c0));
                    }
                    lVar8 = FUN_1470d685e(local_58,puVar13);
                    if (*(longlong *)(lVar8 + 0xc) != *local_60) {
                      *(longlong *)(lVar8 + 0xc) = *local_60;
                      *(int *)(lVar8 + 0x14) = (int)local_60[1];
                    }
                    bVar14 = *(byte *)(lVar2 + 0x44);
                    iVar15 = *(int *)(DAT_14cb71140 + 0x3d8);
                    uVar10 = (uint)bVar14;
                  }
                  local_4c = 0;
                  puVar13 = &DAT_14c9a6324;
                  if ((int)uVar10 < iVar15) {
                    puVar13 = (undefined8 *)
                              ((ulonglong)((uint)bVar14 * 0xc) +
                              *(longlong *)(DAT_14cb71140 + 0x3d0));
                  }
                  puVar12 = &DAT_14c9a6318;
                  if ((int)(uint)*(byte *)(lVar2 + 0x43) < *(int *)(DAT_14cb71140 + 0x3c8)) {
                    puVar12 = (undefined8 *)
                              ((ulonglong)((uint)*(byte *)(lVar2 + 0x43) * 0xc) +
                              *(longlong *)(DAT_14cb71140 + 0x3c0));
                  }
                  FUN_140f8b8f2(lVar5,puVar12,puVar13,local_50);
                }
              }
            }
            lVar16 = lVar16 + 8;
          } while (lVar17 * 8 != lVar16);
        }
      }
    }
  }
LAB_143c96363:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c963b1 FUN_143c963b1 body=49 status=ok
// SIG undefined FUN_143c963b1(void)

void FUN_143c963b1(void)

{
  FUN_14028f404(DAT_14cb70ff8,DAT_14cb71000);
  if (DAT_14cb70ff8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c963e2 FUN_143c963e2 body=1577 status=ok
// SIG undefined FUN_143c963e2(void)

void FUN_143c963e2(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  iVar16 = (int)param_1[1];
  if (1 < (longlong)iVar16) {
    lVar2 = *param_1;
    memset(local_358,0,0x2f0);
    local_360 = lVar2 + (longlong)iVar16 * 0x18 + -0x18;
    local_368 = lVar2;
    fVar26 = logf((float)iVar16);
    local_358[0] = (int)(longlong)(fVar26 + fVar26);
    plVar6 = &local_368;
    do {
      puVar12 = (undefined8 *)*plVar6;
      puVar11 = (undefined8 *)plVar6[1];
      iVar16 = (int)plVar6[2];
      iVar24 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar12) >> 3) * -0x55555555;
      uVar18 = iVar24 + 1;
      puVar8 = puVar12;
      puVar7 = puVar12;
      puVar14 = puVar11;
      if (iVar16 != 0) {
LAB_143c9648d:
        if (8 < (int)uVar18) {
          uVar13 = (ulonglong)(uVar18 >> 1);
          uVar21 = puVar8[uVar13 * 3 + 2];
          uVar9 = puVar8[uVar13 * 3];
          uVar3 = (puVar8 + uVar13 * 3)[1];
          puVar8[uVar13 * 3 + 2] = puVar8[2];
          uVar4 = puVar8[1];
          puVar8[uVar13 * 3] = *puVar8;
          (puVar8 + uVar13 * 3)[1] = uVar4;
          puVar8[2] = uVar21;
          *puVar8 = uVar9;
          puVar8[1] = uVar3;
          puVar20 = puVar14 + 3;
          puVar7 = puVar8;
          do {
            puVar5 = puVar7 + 3;
            puVar15 = puVar7 + 3;
            do {
              puVar7 = puVar15;
              puVar23 = puVar5;
              if (puVar14 < puVar7) break;
              iVar24 = (int)*puVar8 - (int)*puVar7;
              if (iVar24 == 0) {
                iVar24 = (int)((ulonglong)*puVar8 >> 0x20) - (int)((ulonglong)*puVar7 >> 0x20);
              }
              puVar5 = puVar23 + 3;
              puVar15 = puVar7 + 3;
            } while (-1 < iVar24);
            puVar5 = puVar20 + -6;
            do {
              puVar15 = puVar20;
              puVar22 = puVar5;
              puVar20 = puVar15 + -3;
              if (puVar20 <= puVar8) break;
              iVar24 = (int)*puVar20 - (int)*puVar8;
              if (iVar24 == 0) {
                iVar24 = (int)((ulonglong)*puVar20 >> 0x20) - (int)((ulonglong)*puVar8 >> 0x20);
              }
              puVar5 = puVar22 + -3;
            } while (-1 < iVar24);
            if (puVar20 < puVar7) goto LAB_143c965b2;
            uVar21 = puVar7[2];
            uVar9 = *puVar7;
            uVar3 = puVar7[1];
            puVar7[2] = puVar15[-1];
            uVar4 = puVar15[-2];
            *puVar7 = *puVar20;
            puVar7[1] = uVar4;
            puVar15[-1] = uVar21;
            *puVar20 = uVar9;
            puVar15[-2] = uVar3;
          } while( true );
        }
        if (puVar8 < puVar14) {
          do {
            puVar12 = puVar8;
            if (puVar8 + 3 <= puVar14) {
              puVar11 = puVar8 + 3;
              uVar21 = *puVar8;
              do {
                uVar9 = *puVar11;
                iVar16 = (int)uVar21 - (int)uVar9;
                if (iVar16 == 0) {
                  iVar16 = (int)((ulonglong)uVar21 >> 0x20) - (int)((ulonglong)uVar9 >> 0x20);
                }
                puVar7 = puVar11;
                if (-1 < iVar16) {
                  uVar9 = uVar21;
                  puVar7 = puVar12;
                }
                puVar12 = puVar7;
                puVar11 = puVar11 + 3;
                uVar21 = uVar9;
              } while (puVar11 <= puVar14);
            }
            local_58 = puVar12[2];
            local_68 = *puVar12;
            uStack_60 = puVar12[1];
            uVar9 = local_68;
            uVar3 = uStack_60;
            puVar12[2] = puVar14[2];
            uVar21 = puVar14[1];
            *puVar12 = *puVar14;
            puVar12[1] = uVar21;
            puVar14[2] = local_58;
            local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
            *(undefined4 *)puVar14 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
            puVar14 = puVar14 + -3;
            local_68 = uVar9;
            uStack_60 = uVar3;
          } while (puVar8 < puVar14);
        }
        goto LAB_143c969d1;
      }
LAB_143c96683:
      if (uVar18 != 0) {
        iVar16 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
        iVar24 = iVar16;
joined_r0x000143c966aa:
        do {
          iVar19 = iVar16 * 2 + 1;
          if (iVar19 < (int)uVar18) {
            iVar10 = iVar16 * 2 + 2;
            if (iVar10 < (int)uVar18) {
              iVar17 = (int)puVar7[(longlong)iVar10 * 3] - (int)puVar7[(longlong)iVar19 * 3];
              if (iVar17 == 0) {
                iVar17 = (int)((ulonglong)puVar7[(longlong)iVar10 * 3] >> 0x20) -
                         (int)((ulonglong)puVar7[(longlong)iVar19 * 3] >> 0x20);
              }
              if (-1 < iVar17) {
                iVar19 = iVar10;
              }
            }
            iVar10 = (int)puVar7[(longlong)iVar16 * 3] - (int)puVar7[(longlong)iVar19 * 3];
            if (iVar10 == 0) {
              iVar10 = (int)((ulonglong)puVar7[(longlong)iVar16 * 3] >> 0x20) -
                       (int)((ulonglong)puVar7[(longlong)iVar19 * 3] >> 0x20);
            }
            if (iVar10 < 0) {
              puVar14 = puVar7 + (longlong)iVar16 * 3;
              puVar12 = puVar7 + (longlong)iVar19 * 3;
              local_58 = puVar14[2];
              local_68 = *puVar14;
              uStack_60 = puVar14[1];
              uVar9 = local_68;
              uVar3 = uStack_60;
              puVar14[2] = puVar12[2];
              uVar21 = puVar12[1];
              *puVar14 = *puVar12;
              puVar14[1] = uVar21;
              puVar12[2] = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              *(undefined4 *)puVar12 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar12 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_60._4_4_;
              local_68 = uVar9;
              uStack_60 = uVar3;
              iVar16 = iVar19;
              goto joined_r0x000143c966aa;
            }
          }
          bVar25 = iVar24 != 0;
          iVar16 = iVar24 + -1;
          iVar24 = iVar16;
        } while (bVar25);
        if (1 < (int)uVar18) {
          uVar13 = (ulonglong)uVar18 - 1;
          local_58 = puVar7[2];
          local_68 = *puVar7;
          uStack_60 = puVar7[1];
          uVar9 = local_68;
          uVar3 = uStack_60;
          puVar7[2] = puVar7[uVar13 * 3 + 2];
          uVar21 = (puVar7 + uVar13 * 3)[1];
          *puVar7 = puVar7[uVar13 * 3];
          puVar7[1] = uVar21;
          puVar7[uVar13 * 3 + 2] = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar14 = puVar7 + uVar13 * 3;
          *(undefined4 *)puVar14 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
          local_68 = uVar9;
          uStack_60 = uVar3;
          if (uVar18 != 2) {
            do {
              iVar16 = 0;
              iVar19 = 1;
              iVar24 = 0;
              do {
                iVar16 = iVar16 + 2;
                iVar10 = iVar19;
                if ((longlong)iVar16 < (longlong)uVar13) {
                  iVar17 = (int)puVar7[(longlong)iVar16 * 3] - (int)puVar7[(longlong)iVar19 * 3];
                  if (iVar17 == 0) {
                    iVar17 = (int)((ulonglong)puVar7[(longlong)iVar16 * 3] >> 0x20) -
                             (int)((ulonglong)puVar7[(longlong)iVar19 * 3] >> 0x20);
                  }
                  if (-1 < iVar17) {
                    iVar10 = iVar16;
                  }
                }
                iVar16 = (int)puVar7[(longlong)iVar24 * 3] - (int)puVar7[(longlong)iVar10 * 3];
                if (iVar16 == 0) {
                  iVar16 = (int)((ulonglong)puVar7[(longlong)iVar24 * 3] >> 0x20) -
                           (int)((ulonglong)puVar7[(longlong)iVar10 * 3] >> 0x20);
                }
                if (-1 < iVar16) break;
                puVar14 = puVar7 + (longlong)iVar24 * 3;
                puVar12 = puVar7 + (longlong)iVar10 * 3;
                uVar21 = puVar14[2];
                uVar9 = *puVar14;
                uVar3 = puVar14[1];
                puVar14[2] = puVar12[2];
                uVar4 = puVar12[1];
                *puVar14 = *puVar12;
                puVar14[1] = uVar4;
                puVar12[2] = uVar21;
                *puVar12 = uVar9;
                puVar12[1] = uVar3;
                iVar16 = iVar10 * 2;
                iVar19 = iVar10 * 2 + 1;
                iVar24 = iVar10;
              } while ((longlong)iVar19 < (longlong)uVar13);
              uVar1 = uVar13 - 1;
              local_58 = puVar7[2];
              local_68 = *puVar7;
              uStack_60 = puVar7[1];
              uVar9 = local_68;
              uVar3 = uStack_60;
              puVar7[2] = puVar7[uVar1 * 3 + 2];
              uVar21 = (puVar7 + uVar1 * 3)[1];
              *puVar7 = puVar7[uVar1 * 3];
              puVar7[1] = uVar21;
              puVar7[uVar1 * 3 + 2] = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar14 = puVar7 + uVar1 * 3;
              *(undefined4 *)puVar14 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
              bVar25 = 2 < uVar13;
              uVar13 = uVar1;
              local_68 = uVar9;
              uStack_60 = uVar3;
            } while (bVar25);
          }
        }
      }
LAB_143c969d1:
      plVar6 = plVar6 + -3;
    } while (&local_368 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143c965b2:
  local_58 = puVar8[2];
  local_68 = *puVar8;
  uStack_60 = puVar8[1];
  uVar9 = local_68;
  uVar3 = uStack_60;
  puVar8[2] = puVar15[-1];
  uVar21 = puVar15[-2];
  *puVar8 = *puVar20;
  puVar8[1] = uVar21;
  puVar15[-1] = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar20 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_68._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_60._4_4_;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -6;
  local_68 = uVar9;
  uStack_60 = uVar3;
  if ((longlong)puVar22 - (longlong)puVar12 < (longlong)puVar11 - (longlong)puVar23) {
    if (puVar7 < puVar14) {
      *plVar6 = (longlong)puVar7;
      plVar6[1] = (longlong)puVar14;
      *(int *)(plVar6 + 2) = iVar16;
      plVar6 = plVar6 + 3;
    }
    puVar7 = puVar8;
    puVar11 = puVar22;
    if (puVar20 <= puVar8 + 3) goto LAB_143c969d1;
  }
  else {
    if (puVar8 + 3 < puVar20) {
      *plVar6 = (longlong)puVar8;
      plVar6[1] = (longlong)puVar15;
      *(int *)(plVar6 + 2) = iVar16;
      plVar6 = plVar6 + 3;
    }
    puVar8 = puVar23;
    puVar15 = puVar14;
    puVar11 = puVar14;
    if (puVar14 <= puVar7) goto LAB_143c969d1;
  }
  iVar24 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar8) >> 3) * -0x55555555;
  uVar18 = iVar24 + 1;
  puVar12 = puVar8;
  puVar8 = puVar7;
  puVar14 = puVar15;
  if (iVar16 == 0) goto LAB_143c96683;
  goto LAB_143c9648d;
}



// FUNCTION 143c96a0c FUN_143c96a0c body=273 status=ok
// SIG undefined FUN_143c96a0c(void)

undefined8 *
FUN_143c96a0c(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_4;
  puVar9 = (undefined8 *)*param_3;
  puVar6 = (undefined8 *)*param_2;
  puVar1 = puVar6 + (longlong)(int)param_2[1] * 3;
  if ((int)param_3[1] != 0 && (longlong)(int)param_2[1] != 0) {
    puVar2 = puVar9 + (longlong)(int)param_3[1] * 3;
    do {
      iVar5 = (int)((ulonglong)*puVar6 >> 0x20);
      iVar7 = (int)((ulonglong)*puVar9 >> 0x20);
      iVar3 = (int)*puVar6;
      iVar4 = (int)*puVar9;
      iVar8 = iVar3 - iVar4;
      if (iVar8 == 0) {
        iVar8 = iVar5 - iVar7;
      }
      if (iVar8 < 0) {
        FUN_141120422(&local_48,puVar6);
        puVar6 = puVar6 + 3;
      }
      else {
        iVar4 = iVar4 - iVar3;
        if (iVar4 == 0) {
          iVar4 = iVar7 - iVar5;
        }
        if (-1 < iVar4) {
          puVar6 = puVar6 + 3;
        }
        puVar9 = puVar9 + 3;
      }
    } while ((puVar6 != puVar1) && (puVar9 != puVar2));
  }
  local_40 = local_48;
  if (puVar6 != puVar1) {
    do {
      FUN_141120422(&local_40,puVar6);
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar1);
  }
  *param_1 = local_40;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143c96b2a FUN_143c96b2a body=190 status=ok
// SIG undefined FUN_143c96b2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c96b2a(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  _DAT_14cb70de8 = &PTR_FUN_14b3e7b10;
  _DAT_14cb70ee0 = 0;
  if (DAT_14cb70ed8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bd72(&DAT_14cb70e98);
  _DAT_14cb70e90 = 0;
  if (DAT_14cb70e88 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bdaa(&DAT_14cb70e48);
  _DAT_14cb70de8 = &PTR_LAB_14b424db0;
  if (DAT_14cb8a6f8 != (undefined *)0x0) {
    puVar1 = DAT_14cb8a6f8;
    if (DAT_14cb8a6f8 == &DAT_14cb70de8) {
      puVar3 = &DAT_14cb8a6f8;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = *(undefined **)(puVar2 + 0x28);
        if (puVar1 == (undefined *)0x0) {
          _DAT_14cb70de8 = &PTR_LAB_14b424db0;
          return;
        }
      } while (puVar1 != &DAT_14cb70de8);
      puVar3 = (undefined8 *)(puVar2 + 0x28);
    }
    *puVar3 = DAT_14cb70e10;
    DAT_14cb70e10 = 0;
  }
  return;
}



// FUNCTION 143c96be8 FUN_143c96be8 body=1228 status=ok
// SIG undefined FUN_143c96be8(void)

undefined8 FUN_143c96be8(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  char local_a0;
  undefined7 uStack_9f;
  longlong *local_90;
  undefined4 local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3e6280;
  FUN_140be3cb8(plVar5 + 2);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    plVar14 = *(longlong **)(param_1 + 0x18);
    if (plVar14 == (longlong *)0x0) goto LAB_143c96ce9;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_143c96c8b:
    LOCK();
    plVar8 = plVar14 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_143c96ce9;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x10) = plVar5 + 2;
    plVar14 = *(longlong **)(param_1 + 0x18);
    if (plVar5 == plVar14) {
      LOCK();
      plVar14 = plVar5 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar5;
      if (plVar14 != (longlong *)0x0) goto LAB_143c96c8b;
    }
  }
  LOCK();
  plVar14 = plVar5 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_143c96ce9:
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  if (lVar7 != 0) {
    uStack_b0 = *(undefined8 *)(lVar7 + 0x68);
    local_b8 = lVar7;
  }
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
LAB_143c97085:
    if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 1;
  }
  plVar14 = *(longlong **)(param_1 + 0x28);
  plVar5 = plVar14 + (longlong)*(int *)(param_1 + 0x30) * 5;
LAB_143c96d2c:
  if ((int)plVar14[4] != 0) {
    lVar7 = plVar14[1];
    if (lVar7 == 0) {
      uVar6 = FUN_140c1c194();
      lVar7 = FUN_14477b664(uVar6);
      plVar14[1] = lVar7;
    }
    plVar8 = (longlong *)plVar14[2];
    if (plVar8 == (longlong *)0x0) {
      if ((lVar7 != 0) && (*plVar14 != 0)) {
        plVar8 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
          plVar14[2] = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
          plVar8 = (longlong *)FUN_144aff482(uVar6);
          plVar14[2] = (longlong)plVar8;
          if (plVar8 != (longlong *)0x0) goto LAB_143c96d59;
        }
      }
    }
    else {
LAB_143c96d59:
      if ((longlong)(int)plVar14[4] != 0) {
        lVar7 = 0;
        do {
          if (*(char *)(plVar14[3] + lVar7) != '\0') {
            FUN_143e21ad4(&local_b8,&DAT_14cb70de8,plVar8);
            local_d8 = (undefined4)local_b8;
            uStack_d4 = local_b8._4_4_;
            uStack_d0 = (undefined4)uStack_b0;
            uStack_cc = uStack_b0._4_4_;
            _local_c8 = CONCAT71(uStack_a7,1);
            if (0 < (int)plVar14[4]) {
              lVar7 = 0x20;
              uVar15 = 0;
              goto LAB_143c96e22;
            }
            break;
          }
          lVar7 = lVar7 + 0x58;
        } while ((longlong)(int)plVar14[4] * 0x58 - lVar7 != 0);
      }
    }
  }
  goto LAB_143c97078;
LAB_143c96e22:
  do {
    lVar9 = plVar14[3];
    cVar4 = *(char *)(lVar9 + -0x20 + lVar7);
    if (cVar4 == '\x02') {
      lVar10 = FUN_140be360c(&local_d8);
      if (lVar10 != 0) {
        local_a0 = '\0';
        local_78[0] = 0;
        FUN_14575a19a(&local_a0,0);
        FUN_1447c3578(lVar9 + lVar7,local_70,&local_a0);
        (**(code **)(*plVar8 + 0x58))(plVar8,uVar15 & 0xffffffff,lVar10,local_70);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar12 = local_70;
          if (0x18 < local_58) {
            ppppuVar12 = (undefined8 ****)local_70[0];
          }
          (*pcVar2)(ppppuVar12);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        FUN_1448173f8(local_78);
        if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
      }
    }
    else if (cVar4 == '\x01') {
      lVar10 = *(longlong *)(lVar9 + -0x10 + lVar7);
      if (lVar10 == 0) {
        uVar6 = FUN_140c1c194();
        lVar10 = FUN_14477b664(uVar6);
        *(longlong *)(lVar9 + -0x10 + lVar7) = lVar10;
      }
      lVar11 = *(longlong *)(lVar9 + -8 + lVar7);
      if (lVar11 == 0) {
        if ((lVar10 != 0) && (*(longlong *)(lVar9 + lVar7 + -0x18) != 0)) {
          plVar3 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            *(undefined8 *)(lVar9 + -8 + lVar7) = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar11 = FUN_144aff482(uVar6);
            *(longlong *)(lVar9 + -8 + lVar7) = lVar11;
            if (lVar11 != 0) goto LAB_143c96e92;
          }
        }
        lVar9 = FUN_140be360c(&local_d8);
        if (lVar9 != 0) {
          puVar13 = &DAT_14a179944;
          goto LAB_143c97023;
        }
      }
      else {
LAB_143c96e92:
        FUN_143e21ad4(&local_d8,&DAT_14cb70de8,lVar11);
      }
    }
    else if ((cVar4 == '\0') && (lVar9 = FUN_140be360c(&local_d8), lVar9 != 0)) {
      puVar13 = &DAT_14a157a11;
LAB_143c97023:
      FUN_1400b22c2(&local_a0,puVar13);
      FUN_1407e14ea(lVar9,&local_a0,0);
      if (CONCAT71(uStack_9f,local_a0) != 0) {
        FUN_1400020a8();
      }
    }
    uVar15 = uVar15 + 1;
    lVar7 = lVar7 + 0x58;
  } while ((longlong)uVar15 < (longlong)(int)plVar14[4]);
LAB_143c97078:
  plVar14 = plVar14 + 5;
  if (plVar14 == plVar5) goto LAB_143c97085;
  goto LAB_143c96d2c;
}



// FUNCTION 143c970ff FUN_143c970ff body=41 status=ok
// SIG undefined FUN_143c970ff(void)

void FUN_143c970ff(void)

{
  DAT_14cb71190 = 0;
  if (DAT_14cb71188 != 0) {
    FUN_1400020a8();
  }
  FUN_146167520();
  return;
}



// FUNCTION 143c97134 FUN_143c97134 body=49 status=ok
// SIG undefined FUN_143c97134(void)

void FUN_143c97134(void)

{
  FUN_144760e21(DAT_14cb711d0,DAT_14cb711d8);
  if (DAT_14cb711d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c97165 FUN_143c97165 body=49 status=ok
// SIG undefined FUN_143c97165(void)

void FUN_143c97165(void)

{
  FUN_144760e21(DAT_14cb711e8,DAT_14cb711f0);
  if (DAT_14cb711e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c971ae FUN_143c971ae body=69 status=ok
// SIG undefined FUN_143c971ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c971ae(void)

{
  _DAT_14cb71248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c971f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb71250,1);
  return;
}



// FUNCTION 143c971f8 FUN_143c971f8 body=52 status=ok
// SIG undefined FUN_143c971f8(void)

void FUN_143c971f8(longlong *param_1)

{
  *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xf7;
  (**(code **)(*param_1 + 0x808))();
  if (param_1[0x23d] != 0) {
    *(undefined4 *)(param_1[0x23d] + 0x2bd4) = 0xbf800000;
  }
  return;
}



// FUNCTION 143c973a6 FUN_143c973a6 body=282 status=ok
// SIG undefined FUN_143c973a6(void)

undefined8 FUN_143c973a6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0x330);
  if (plVar5 == (longlong *)0x0) {
    FUN_1406c9d00(param_1 + 0x228,&local_38);
    if (local_30 == 0) {
      uVar2 = FUN_140927942();
      local_30 = FUN_14477b664(uVar2);
    }
    if (local_28 == (longlong *)0x0) {
      if ((((local_30 != 0) && (local_38 != 0)) &&
          (plVar5 = *(longlong **)(local_30 + 0xb8), plVar5 != (longlong *)0x0)) &&
         (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 != '\0')) {
        uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
        local_28 = (longlong *)FUN_144aff482(uVar2,&local_38);
        if (local_28 != (longlong *)0x0) goto LAB_143c97432;
      }
    }
    else {
LAB_143c97432:
      plVar5 = local_28;
      lVar3 = (**(code **)(*local_28 + 8))(local_28);
      lVar4 = FUN_140355b7c();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) goto LAB_143c973cb;
    }
    uVar2 = 0;
  }
  else {
LAB_143c973cb:
    uVar2 = (**(code **)(*plVar5 + 0x160))(plVar5,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 143c974c2 FUN_143c974c2 body=129 status=ok
// SIG undefined FUN_143c974c2(void)

void FUN_143c974c2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x330);
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x210) != 0)) {
    lVar3 = *(longlong *)(lVar4 + 0x208);
    lVar4 = (longlong)*(int *)(lVar4 + 0x210) * 0x28;
    do {
      lVar2 = FUN_145971716(lVar3);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_145971692(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  return;
}


