// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14673ea50 FUN_14673ea50 body=50 status=ok
// SIG undefined FUN_14673ea50(void)

void FUN_14673ea50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd2fc00;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  return;
}



// FUNCTION 14673ea88 FUN_14673ea88 body=55 status=ok
// SIG undefined FUN_14673ea88(void)

void FUN_14673ea88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e318 == 0) {
    uVar1 = FUN_1413257ed();
    DAT_14cc1e318 = FUN_140002ddd(FUN_14673eabf,uVar1,L"LiveLinkRoleProjectSetting");
  }
  return;
}



// FUNCTION 14673eabf FUN_14673eabf body=47 status=ok
// SIG undefined FUN_14673eabf(void)

longlong FUN_14673eabf(void)

{
  if (DAT_14cc1e310 == 0) {
    FUN_14086a14e(&DAT_14cc1e310,&PTR_FUN_14bd302d8);
  }
  return DAT_14cc1e310;
}



// FUNCTION 14673eaee FUN_14673eaee body=48 status=ok
// SIG undefined FUN_14673eaee(void)

void FUN_14673eaee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bd34fd0;
  return;
}



// FUNCTION 14673eb1e FUN_14673eb1e body=42 status=ok
// SIG undefined FUN_14673eb1e(void)

void FUN_14673eb1e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd30400;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14673eb48 FUN_14673eb48 body=47 status=ok
// SIG undefined FUN_14673eb48(void)

longlong FUN_14673eb48(void)

{
  if (DAT_14cc1e330 == 0) {
    FUN_14073dd9a(&DAT_14cc1e330,&PTR_LAB_14bd303b8);
  }
  return DAT_14cc1e330;
}



// FUNCTION 14673eb77 FUN_14673eb77 body=47 status=ok
// SIG undefined FUN_14673eb77(void)

longlong FUN_14673eb77(void)

{
  if (DAT_14cc1e348 == 0) {
    FUN_14073dd9a(&DAT_14cc1e348,&PTR_LAB_14bd30db8);
  }
  return DAT_14cc1e348;
}



// FUNCTION 14673ebab FUN_14673ebab body=47 status=ok
// SIG undefined FUN_14673ebab(void)

longlong FUN_14673ebab(void)

{
  if (DAT_14cc1e460 == 0) {
    FUN_1409ce572(&DAT_14cc1e460,&PTR_FUN_14bd31550);
  }
  return DAT_14cc1e460;
}



// FUNCTION 14673ebda FUN_14673ebda body=47 status=ok
// SIG undefined FUN_14673ebda(void)

longlong FUN_14673ebda(void)

{
  if (DAT_14cc1e480 == 0) {
    FUN_14073dd9a(&DAT_14cc1e480,&PTR_LAB_14bd317b8);
  }
  return DAT_14cc1e480;
}



// FUNCTION 14673ec09 FUN_14673ec09 body=47 status=ok
// SIG undefined FUN_14673ec09(void)

longlong FUN_14673ec09(void)

{
  if (DAT_14cc1e4f8 == 0) {
    FUN_14073dd9a(&DAT_14cc1e4f8,&PTR_LAB_14bd320a8);
  }
  return DAT_14cc1e4f8;
}



// FUNCTION 14673ec38 FUN_14673ec38 body=47 status=ok
// SIG undefined FUN_14673ec38(void)

longlong FUN_14673ec38(void)

{
  if (DAT_14cc1e540 == 0) {
    FUN_14073dd9a(&DAT_14cc1e540,&PTR_LAB_14bd32568);
  }
  return DAT_14cc1e540;
}



// FUNCTION 14673ec67 FUN_14673ec67 body=49 status=ok
// SIG undefined FUN_14673ec67(void)

longlong FUN_14673ec67(void)

{
  if (DAT_14cc1e550 == 0) {
    FUN_1409ce572(&DAT_14cc1e550,&PTR_FUN_14bd32af0);
  }
  return DAT_14cc1e550;
}



// FUNCTION 14673ec98 FUN_14673ec98 body=97 status=ok
// SIG undefined FUN_14673ec98(void)

void FUN_14673ec98(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459153a0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd32f20;
  *(undefined4 *)(puVar1 + 5) = 0x20100;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  uVar2 = DAT_14c846500;
  puVar1[9] = DAT_14c8464f8;
  puVar1[10] = uVar2;
  puVar1[0xb] = DAT_14c846508;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 14673ecf9 FUN_14673ecf9 body=47 status=ok
// SIG undefined FUN_14673ecf9(void)

longlong FUN_14673ecf9(void)

{
  if (DAT_14cc1e570 == 0) {
    FUN_14073dd9a(&DAT_14cc1e570,&PTR_LAB_14bd32ed8);
  }
  return DAT_14cc1e570;
}



// FUNCTION 14673ed28 FUN_14673ed28 body=107 status=ok
// SIG undefined FUN_14673ed28(void)

void FUN_14673ed28(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459153a0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd32f20;
  *(undefined4 *)(puVar1 + 5) = 0x20100;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  puVar1[0xb] = DAT_14c846508;
  uVar2 = DAT_14c846500;
  puVar1[9] = DAT_14c8464f8;
  puVar1[10] = uVar2;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14bd33290;
  return;
}



// FUNCTION 14673ed93 FUN_14673ed93 body=47 status=ok
// SIG undefined FUN_14673ed93(void)

longlong FUN_14673ed93(void)

{
  if (DAT_14cc1e588 == 0) {
    FUN_14073dd9a(&DAT_14cc1e588,&PTR_LAB_14bd33248);
  }
  return DAT_14cc1e588;
}



// FUNCTION 14673edc2 FUN_14673edc2 body=47 status=ok
// SIG undefined FUN_14673edc2(void)

longlong FUN_14673edc2(void)

{
  if (DAT_14cc1e5b0 == 0) {
    FUN_14073dd9a(&DAT_14cc1e5b0,&PTR_LAB_14bd33a18);
  }
  return DAT_14cc1e5b0;
}



// FUNCTION 14673edf1 FUN_14673edf1 body=64 status=ok
// SIG undefined FUN_14673edf1(void)

void FUN_14673edf1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459afc3c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd33e40;
  FUN_1446ddc76(puVar1 + 5,&DAT_149e3cc95,1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14673ee31 FUN_14673ee31 body=47 status=ok
// SIG undefined FUN_14673ee31(void)

longlong FUN_14673ee31(void)

{
  if (DAT_14cc1e5c8 == 0) {
    FUN_14073dd9a(&DAT_14cc1e5c8,&PTR_LAB_14bd33df8);
  }
  return DAT_14cc1e5c8;
}



// FUNCTION 14673ee60 FUN_14673ee60 body=49 status=ok
// SIG undefined FUN_14673ee60(void)

longlong FUN_14673ee60(void)

{
  if (DAT_14cc1e610 == 0) {
    FUN_14073dd9a(&DAT_14cc1e610,&PTR_LAB_14bd34500);
  }
  return DAT_14cc1e610;
}



// FUNCTION 14673ee91 FUN_14673ee91 body=47 status=ok
// SIG undefined FUN_14673ee91(void)

longlong FUN_14673ee91(void)

{
  if (DAT_14cc1e5e0 == 0) {
    FUN_14000fc22(&DAT_14cc1e5e0,&PTR_FUN_14bd34150);
  }
  return DAT_14cc1e5e0;
}



// FUNCTION 14673eec0 FUN_14673eec0 body=47 status=ok
// SIG undefined FUN_14673eec0(void)

longlong FUN_14673eec0(void)

{
  if (DAT_14cc1e5f0 == 0) {
    FUN_14000fc22(&DAT_14cc1e5f0,&PTR_FUN_14bd34190);
  }
  return DAT_14cc1e5f0;
}



// FUNCTION 14673eeef FUN_14673eeef body=47 status=ok
// SIG undefined FUN_14673eeef(void)

longlong FUN_14673eeef(void)

{
  if (DAT_14cc1e5f8 == 0) {
    FUN_14000fc22(&DAT_14cc1e5f8,&PTR_FUN_14bd342f0);
  }
  return DAT_14cc1e5f8;
}



// FUNCTION 14673ef1e FUN_14673ef1e body=47 status=ok
// SIG undefined FUN_14673ef1e(void)

longlong FUN_14673ef1e(void)

{
  if (DAT_14cc1e600 == 0) {
    FUN_14000fc22(&DAT_14cc1e600,&PTR_FUN_14bd343e8);
  }
  return DAT_14cc1e600;
}



// FUNCTION 14673ef4e FUN_14673ef4e body=34 status=ok
// SIG undefined FUN_14673ef4e(void)

void FUN_14673ef4e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a97360();
  FUN_14069c8d6(uVar1,&PTR_s_UpdateVirtualSubjectFrameData_In_14bd34430,2);
  return;
}



// FUNCTION 14673ef70 FUN_14673ef70 body=82 status=ok
// SIG undefined FUN_14673ef70(void)

void FUN_14673ef70(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_14585362c(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14bd34540;
  puVar1[5] = &PTR_LAB_14bd34800;
  puVar1[0x2e] = &PTR_FUN_149eacb10;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x181) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x189) = 0;
  return;
}



// FUNCTION 14673efc2 FUN_14673efc2 body=72 status=ok
// SIG undefined FUN_14673efc2(void)

undefined8 * FUN_14673efc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd27920;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a22c6a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f00a FUN_14673f00a body=40 status=ok
// SIG undefined FUN_14673f00a(void)

undefined8 FUN_14673f00a(undefined8 param_1,int param_2)

{
  FUN_14598b02c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f032 FUN_14673f032 body=40 status=ok
// SIG undefined FUN_14673f032(void)

undefined8 FUN_14673f032(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f05a FUN_14673f05a body=94 status=ok
// SIG undefined FUN_14673f05a(void)

undefined8 * FUN_14673f05a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd2cf30;
  param_1[5] = &PTR_LAB_14bd2d3b0;
  param_1[6] = &PTR_LAB_14bd2d3f0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f0b8 FUN_14673f0b8 body=40 status=ok
// SIG undefined FUN_14673f0b8(void)

undefined8 FUN_14673f0b8(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f0e0 FUN_14673f0e0 body=40 status=ok
// SIG undefined FUN_14673f0e0(void)

undefined8 FUN_14673f0e0(undefined8 param_1,int param_2)

{
  FUN_14592967c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f108 FUN_14673f108 body=69 status=ok
// SIG undefined FUN_14673f108(void)

undefined8 * FUN_14673f108(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd30400;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f14e FUN_14673f14e body=40 status=ok
// SIG undefined FUN_14673f14e(void)

undefined8 FUN_14673f14e(undefined8 param_1,int param_2)

{
  FUN_1458d7b84();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f176 FUN_14673f176 body=76 status=ok
// SIG undefined FUN_14673f176(void)

undefined8 * FUN_14673f176(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd34540;
  param_1[5] = &PTR_LAB_14bd34800;
  FUN_1448eac94(param_1 + 0x2e);
  FUN_145a4964c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f1c2 FUN_14673f1c2 body=29 status=ok
// SIG undefined FUN_14673f1c2(void)

undefined8 FUN_14673f1c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f1e0 FUN_14673f1e0 body=29 status=ok
// SIG undefined FUN_14673f1e0(void)

undefined8 FUN_14673f1e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f1fe FUN_14673f1fe body=29 status=ok
// SIG undefined FUN_14673f1fe(void)

undefined8 FUN_14673f1fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f21c FUN_14673f21c body=29 status=ok
// SIG undefined FUN_14673f21c(void)

undefined8 FUN_14673f21c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f23a FUN_14673f23a body=213 status=ok
// SIG undefined FUN_14673f23a(void)

LPCRITICAL_SECTION
FUN_14673f23a(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14bd35410;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14bd353a0;
  (p_Var3->ProcessLocksList).Blink = param_2;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3->Flags = DVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14673f310 FUN_14673f310 body=29 status=ok
// SIG undefined FUN_14673f310(void)

undefined8 FUN_14673f310(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f32e FUN_14673f32e body=29 status=ok
// SIG undefined FUN_14673f32e(void)

undefined8 FUN_14673f32e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f34c FUN_14673f34c body=93 status=ok
// SIG undefined FUN_14673f34c(void)

void FUN_14673f34c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14673f3aa FUN_14673f3aa body=29 status=ok
// SIG undefined FUN_14673f3aa(void)

undefined8 FUN_14673f3aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f3cc FUN_14673f3cc body=47 status=ok
// SIG undefined FUN_14673f3cc(void)

longlong FUN_14673f3cc(void)

{
  if (DAT_14cc1e6a8 == 0) {
    FUN_14073dd9a(&DAT_14cc1e6a8,&PTR_LAB_14bd382a8);
  }
  return DAT_14cc1e6a8;
}



// FUNCTION 14673f3fb FUN_14673f3fb body=47 status=ok
// SIG undefined FUN_14673f3fb(void)

longlong FUN_14673f3fb(void)

{
  if (DAT_14cc1e6b8 == 0) {
    FUN_14086a14e(&DAT_14cc1e6b8,&PTR_FUN_14bd38870);
  }
  return DAT_14cc1e6b8;
}



// FUNCTION 14673f42a FUN_14673f42a body=49 status=ok
// SIG undefined FUN_14673f42a(void)

longlong FUN_14673f42a(void)

{
  if (DAT_14cc1e700 == 0) {
    FUN_14086a14e(&DAT_14cc1e700,&PTR_FUN_14bd39088);
  }
  return DAT_14cc1e700;
}



// FUNCTION 14673f45c FUN_14673f45c body=48 status=ok
// SIG undefined FUN_14673f45c(void)

void FUN_14673f45c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14bd3a820;
  return;
}



// FUNCTION 14673f48c FUN_14673f48c body=55 status=ok
// SIG undefined FUN_14673f48c(void)

void FUN_14673f48c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e6f0 == 0) {
    uVar1 = FUN_14596edd1();
    DAT_14cc1e6f0 = FUN_140002ddd(FUN_14673f4c3,uVar1,L"LiveLinkPropertyData");
  }
  return;
}



// FUNCTION 14673f4c3 FUN_14673f4c3 body=47 status=ok
// SIG undefined FUN_14673f4c3(void)

longlong FUN_14673f4c3(void)

{
  if (DAT_14cc1e6e8 == 0) {
    FUN_14086a14e(&DAT_14cc1e6e8,&PTR_FUN_14bd38f80);
  }
  return DAT_14cc1e6e8;
}



// FUNCTION 14673f4f2 FUN_14673f4f2 body=48 status=ok
// SIG undefined FUN_14673f4f2(void)

void FUN_14673f4f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14bd3a990;
  return;
}



// FUNCTION 14673f522 FUN_14673f522 body=55 status=ok
// SIG undefined FUN_14673f522(void)

void FUN_14673f522(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e708 == 0) {
    uVar1 = FUN_14596edd1();
    DAT_14cc1e708 = FUN_140002ddd(FUN_14673f42a,uVar1,L"LiveLinkSubSectionData");
  }
  return;
}



// FUNCTION 14673f55a FUN_14673f55a body=48 status=ok
// SIG undefined FUN_14673f55a(void)

void FUN_14673f55a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bd3aaf0;
  return;
}



// FUNCTION 14673f58a FUN_14673f58a body=54 status=ok
// SIG undefined FUN_14673f58a(void)

void FUN_14673f58a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd39270;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 14673f5c0 FUN_14673f5c0 body=49 status=ok
// SIG undefined FUN_14673f5c0(void)

longlong FUN_14673f5c0(void)

{
  if (DAT_14cc1e770 == 0) {
    FUN_14073dd9a(&DAT_14cc1e770,&PTR_LAB_14bd39228);
  }
  return DAT_14cc1e770;
}



// FUNCTION 14673f5f1 FUN_14673f5f1 body=58 status=ok
// SIG undefined FUN_14673f5f1(void)

void FUN_14673f5f1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_14bd39620;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14673f62b FUN_14673f62b body=47 status=ok
// SIG undefined FUN_14673f62b(void)

longlong FUN_14673f62b(void)

{
  if (DAT_14cc1e788 == 0) {
    FUN_14073dd9a(&DAT_14cc1e788,&PTR_LAB_14bd395d8);
  }
  return DAT_14cc1e788;
}



// FUNCTION 14673f65a FUN_14673f65a body=58 status=ok
// SIG undefined FUN_14673f65a(void)

void FUN_14673f65a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_14bd39ab0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14673f694 FUN_14673f694 body=47 status=ok
// SIG undefined FUN_14673f694(void)

longlong FUN_14673f694(void)

{
  if (DAT_14cc1e7b0 == 0) {
    FUN_14073dd9a(&DAT_14cc1e7b0,&PTR_LAB_14bd39a68);
  }
  return DAT_14cc1e7b0;
}



// FUNCTION 14673f6c3 FUN_14673f6c3 body=58 status=ok
// SIG undefined FUN_14673f6c3(void)

void FUN_14673f6c3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_14bd39ed0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14673f6fd FUN_14673f6fd body=47 status=ok
// SIG undefined FUN_14673f6fd(void)

longlong FUN_14673f6fd(void)

{
  if (DAT_14cc1e7c8 == 0) {
    FUN_14073dd9a(&DAT_14cc1e7c8,&PTR_LAB_14bd39e88);
  }
  return DAT_14cc1e7c8;
}



// FUNCTION 14673f72c FUN_14673f72c body=117 status=ok
// SIG undefined FUN_14673f72c(void)

void FUN_14673f72c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_1411ab854(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd3a3f0;
  puVar1[0x25] = &PTR_FUN_14bd3a740;
  puVar1[0x26] = 0;
  FUN_1411ab84c(&local_19);
  *(undefined1 *)(puVar1 + 0xd) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14673f7a2 FUN_14673f7a2 body=47 status=ok
// SIG undefined FUN_14673f7a2(void)

longlong FUN_14673f7a2(void)

{
  if (DAT_14cc1e810 == 0) {
    FUN_14073dd9a(&DAT_14cc1e810,&PTR_LAB_14bd3a3a8);
  }
  return DAT_14cc1e810;
}



// FUNCTION 14673f7d2 FUN_14673f7d2 body=40 status=ok
// SIG undefined FUN_14673f7d2(void)

undefined8 FUN_14673f7d2(undefined8 param_1,int param_2)

{
  FUN_145907244();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f7fa FUN_14673f7fa body=40 status=ok
// SIG undefined FUN_14673f7fa(void)

undefined8 FUN_14673f7fa(undefined8 param_1,int param_2)

{
  FUN_140885ffc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f822 FUN_14673f822 body=29 status=ok
// SIG undefined FUN_14673f822(void)

undefined8 FUN_14673f822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f840 FUN_14673f840 body=29 status=ok
// SIG undefined FUN_14673f840(void)

undefined8 FUN_14673f840(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f85e FUN_14673f85e body=29 status=ok
// SIG undefined FUN_14673f85e(void)

undefined8 FUN_14673f85e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673f87b FUN_14673f87b body=47 status=ok
// SIG undefined FUN_14673f87b(void)

longlong FUN_14673f87b(void)

{
  if (DAT_14cc1e828 == 0) {
    FUN_140f50038(&DAT_14cc1e828,&PTR_s__Script_TakeMovieScene_14bd3aff8);
  }
  return DAT_14cc1e828;
}



// FUNCTION 14673f8aa FUN_14673f8aa body=47 status=ok
// SIG undefined FUN_14673f8aa(void)

longlong FUN_14673f8aa(void)

{
  if (DAT_14cc1e848 == 0) {
    FUN_14073dd9a(&DAT_14cc1e848,&PTR_LAB_14bd3b308);
  }
  return DAT_14cc1e848;
}



// FUNCTION 14673f8d9 FUN_14673f8d9 body=47 status=ok
// SIG undefined FUN_14673f8d9(void)

longlong FUN_14673f8d9(void)

{
  if (DAT_14cc1e860 == 0) {
    FUN_14073dd9a(&DAT_14cc1e860,&PTR_LAB_14bd3b968);
  }
  return DAT_14cc1e860;
}



// FUNCTION 14673f908 FUN_14673f908 body=45 status=ok
// SIG undefined FUN_14673f908(void)

void FUN_14673f908(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd3be00;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return;
}



// FUNCTION 14673f935 FUN_14673f935 body=47 status=ok
// SIG undefined FUN_14673f935(void)

longlong FUN_14673f935(void)

{
  if (DAT_14cc1e878 == 0) {
    FUN_14073dd9a(&DAT_14cc1e878,&PTR_LAB_14bd3bdb8);
  }
  return DAT_14cc1e878;
}



// FUNCTION 14673f964 FUN_14673f964 body=192 status=ok
// SIG undefined FUN_14673f964(void)

void FUN_14673f964(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd3c1a0;
  puVar1[3] = &DAT_14cc1e888;
  puVar1[4] = FUN_1459d11d0;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14673fa26 FUN_14673fa26 body=72 status=ok
// SIG undefined FUN_14673fa26(void)

undefined8 * FUN_14673fa26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd3be00;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673fa6e FUN_14673fa6e body=93 status=ok
// SIG undefined FUN_14673fa6e(void)

void FUN_14673fa6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd3c1a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14673facc FUN_14673facc body=29 status=ok
// SIG undefined FUN_14673facc(void)

undefined8 FUN_14673facc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673faea FUN_14673faea body=192 status=ok
// SIG undefined FUN_14673faea(void)

void FUN_14673faea(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd3c370;
  puVar1[3] = &DAT_14cc1e88c;
  puVar1[4] = FUN_14954969a;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14673fbac FUN_14673fbac body=93 status=ok
// SIG undefined FUN_14673fbac(void)

void FUN_14673fbac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd3c370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14673fc0a FUN_14673fc0a body=192 status=ok
// SIG undefined FUN_14673fc0a(void)

void FUN_14673fc0a(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd3c930;
  puVar1[3] = &DAT_14cc1e89c;
  puVar1[4] = FUN_145a59e5e;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14673fccc FUN_14673fccc body=93 status=ok
// SIG undefined FUN_14673fccc(void)

void FUN_14673fccc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd3c930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14673fd2a FUN_14673fd2a body=29 status=ok
// SIG undefined FUN_14673fd2a(void)

undefined8 FUN_14673fd2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14673fd48 FUN_14673fd48 body=110 status=ok
// SIG undefined FUN_14673fd48(void)

void FUN_14673fd48(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145c85d54(&local_30);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_30,param_1 + 0x18);
  if (*(char *)(param_1 + 8) == '\x01') {
    CoUninitialize();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14673fdb8 FUN_14673fdb8 body=60 status=ok
// SIG undefined FUN_14673fdb8(void)

void FUN_14673fdb8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bd3d730;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14673fdf4 FUN_14673fdf4 body=47 status=ok
// SIG undefined FUN_14673fdf4(void)

longlong FUN_14673fdf4(void)

{
  if (DAT_14cc1e8a8 == 0) {
    FUN_14086a14e(&DAT_14cc1e8a8,&PTR_FUN_14bd3d9f0);
  }
  return DAT_14cc1e8a8;
}



// FUNCTION 14673fe24 FUN_14673fe24 body=48 status=ok
// SIG undefined FUN_14673fe24(void)

void FUN_14673fe24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bd3f700;
  return;
}



// FUNCTION 14673fe54 FUN_14673fe54 body=49 status=ok
// SIG undefined FUN_14673fe54(void)

longlong FUN_14673fe54(void)

{
  if (DAT_14cc1e8e8 == 0) {
    FUN_14073dd9a(&DAT_14cc1e8e8,&PTR_LAB_14bd3dd30);
  }
  return DAT_14cc1e8e8;
}



// FUNCTION 14673fe85 FUN_14673fe85 body=47 status=ok
// SIG undefined FUN_14673fe85(void)

longlong FUN_14673fe85(void)

{
  if (DAT_14cc1e8c0 == 0) {
    FUN_14000fc22(&DAT_14cc1e8c0,&PTR_FUN_14bd3dae0);
  }
  return DAT_14cc1e8c0;
}



// FUNCTION 14673feb4 FUN_14673feb4 body=47 status=ok
// SIG undefined FUN_14673feb4(void)

longlong FUN_14673feb4(void)

{
  if (DAT_14cc1e8c8 == 0) {
    FUN_14000fc22(&DAT_14cc1e8c8,&PTR_FUN_14bd3db80);
  }
  return DAT_14cc1e8c8;
}



// FUNCTION 14673fee3 FUN_14673fee3 body=47 status=ok
// SIG undefined FUN_14673fee3(void)

longlong FUN_14673fee3(void)

{
  if (DAT_14cc1e8d0 == 0) {
    FUN_14000fc22(&DAT_14cc1e8d0,&PTR_FUN_14bd3dbd8);
  }
  return DAT_14cc1e8d0;
}



// FUNCTION 14673ff12 FUN_14673ff12 body=47 status=ok
// SIG undefined FUN_14673ff12(void)

longlong FUN_14673ff12(void)

{
  if (DAT_14cc1e8d8 == 0) {
    FUN_14000fc22(&DAT_14cc1e8d8,&PTR_FUN_14bd3dc30);
  }
  return DAT_14cc1e8d8;
}



// FUNCTION 14673ff42 FUN_14673ff42 body=34 status=ok
// SIG undefined FUN_14673ff42(void)

void FUN_14673ff42(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599bf06();
  FUN_14069c8d6(uVar1,&PTR_s_GetAudioCaptureDeviceInfo_14bd3dc70,4);
  return;
}



// FUNCTION 14673ff64 FUN_14673ff64 body=46 status=ok
// SIG undefined FUN_14673ff64(void)

void FUN_14673ff64(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145aaa822(puVar1);
  *puVar1 = &PTR_FUN_14bd3dd70;
  FUN_14158ed7c(puVar1 + 0x15);
  return;
}



// FUNCTION 14673ff97 FUN_14673ff97 body=47 status=ok
// SIG undefined FUN_14673ff97(void)

longlong FUN_14673ff97(void)

{
  if (DAT_14cc1e908 == 0) {
    FUN_14073dd9a(&DAT_14cc1e908,&PTR_LAB_14bd3e130);
  }
  return DAT_14cc1e908;
}



// FUNCTION 14673ffc6 FUN_14673ffc6 body=47 status=ok
// SIG undefined FUN_14673ffc6(void)

longlong FUN_14673ffc6(void)

{
  if (DAT_14cc1e8f8 == 0) {
    FUN_14000fc22(&DAT_14cc1e8f8,&PTR_FUN_14bd3e070);
  }
  return DAT_14cc1e8f8;
}



// FUNCTION 14673fff6 FUN_14673fff6 body=34 status=ok
// SIG undefined FUN_14673fff6(void)

void FUN_14673fff6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a9744c();
  FUN_14069c8d6(uVar1,&PTR_s_CreateAudioCapture_14bd3e0b0,1);
  return;
}



// FUNCTION 146740018 FUN_146740018 body=35 status=ok
// SIG undefined FUN_146740018(void)

void FUN_146740018(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd3e170;
  return;
}



// FUNCTION 14674003b FUN_14674003b body=47 status=ok
// SIG undefined FUN_14674003b(void)

longlong FUN_14674003b(void)

{
  if (DAT_14cc1e948 == 0) {
    FUN_14000fc22(&DAT_14cc1e948,&PTR_FUN_14bd3e7c0);
  }
  return DAT_14cc1e948;
}



// FUNCTION 14674006a FUN_14674006a body=55 status=ok
// SIG undefined FUN_14674006a(void)

void FUN_14674006a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1e938 == 0) {
    uVar1 = FUN_145a25c93();
    DAT_14cc1e938 = FUN_140002ddd(FUN_1467400a1,uVar1,L"AudioInputDeviceInfo");
  }
  return;
}



// FUNCTION 1467400a1 FUN_1467400a1 body=49 status=ok
// SIG undefined FUN_1467400a1(void)

longlong FUN_1467400a1(void)

{
  if (DAT_14cc1e930 == 0) {
    FUN_14086a14e(&DAT_14cc1e930,&PTR_FUN_14bd3e6d0);
  }
  return DAT_14cc1e930;
}



// FUNCTION 1467400d2 FUN_1467400d2 body=48 status=ok
// SIG undefined FUN_1467400d2(void)

void FUN_1467400d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bd3f870;
  return;
}



// FUNCTION 146740102 FUN_146740102 body=47 status=ok
// SIG undefined FUN_146740102(void)

longlong FUN_146740102(void)

{
  if (DAT_14cc1e968 == 0) {
    FUN_14073dd9a(&DAT_14cc1e968,&PTR_LAB_14bd3ea90);
  }
  return DAT_14cc1e968;
}



// FUNCTION 146740131 FUN_146740131 body=47 status=ok
// SIG undefined FUN_146740131(void)

longlong FUN_146740131(void)

{
  if (DAT_14cc1e950 == 0) {
    FUN_14000fc22(&DAT_14cc1e950,&PTR_FUN_14bd3e8b8);
  }
  return DAT_14cc1e950;
}



// FUNCTION 146740160 FUN_146740160 body=47 status=ok
// SIG undefined FUN_146740160(void)

longlong FUN_146740160(void)

{
  if (DAT_14cc1e958 == 0) {
    FUN_14000fc22(&DAT_14cc1e958,&PTR_FUN_14bd3e9b0);
  }
  return DAT_14cc1e958;
}



// FUNCTION 146740190 FUN_146740190 body=34 status=ok
// SIG undefined FUN_146740190(void)

void FUN_146740190(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a97538();
  FUN_14069c8d6(uVar1,&PTR_s_Conv_AudioInputDeviceInfoToStrin_14bd3e9f0,2);
  return;
}



// FUNCTION 1467401b2 FUN_1467401b2 body=35 status=ok
// SIG undefined FUN_1467401b2(void)

void FUN_1467401b2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd3ead0;
  return;
}



// FUNCTION 1467401d5 FUN_1467401d5 body=47 status=ok
// SIG undefined FUN_1467401d5(void)

longlong FUN_1467401d5(void)

{
  if (DAT_14cc1e980 == 0) {
    FUN_14073dd9a(&DAT_14cc1e980,&PTR_LAB_14bd3ee68);
  }
  return DAT_14cc1e980;
}



// FUNCTION 146740204 FUN_146740204 body=192 status=ok
// SIG undefined FUN_146740204(void)

void FUN_146740204(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd3fa00;
  puVar1[3] = &DAT_14cc1e990;
  puVar1[4] = FUN_1459d11fe;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467402c6 FUN_1467402c6 body=37 status=ok
// SIG undefined FUN_1467402c6(void)

void FUN_1467402c6(longlong param_1)

{
  FUN_1458cf7a8();
  LOCK();
  *(undefined4 *)(param_1 + 0x9c4) = 1;
  UNLOCK();
  FUN_1458cf7c2(param_1);
  return;
}



// FUNCTION 1467402ec FUN_1467402ec body=82 status=ok
// SIG undefined FUN_1467402ec(void)

undefined4 FUN_1467402ec(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x958) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x958) + 0x60))();
    if (cVar2 != '\0') {
      FUN_14954919c(param_1 + 0x918);
    }
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  *(undefined2 *)(param_1 + 0x9b4) = 0;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x9c4);
  *(undefined4 *)(param_1 + 0x9c4) = 0;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x9b6) = 0;
  return uVar1;
}



// FUNCTION 14674033e FUN_14674033e body=40 status=ok
// SIG undefined FUN_14674033e(void)

undefined8 FUN_14674033e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146740366 FUN_146740366 body=40 status=ok
// SIG undefined FUN_146740366(void)

undefined8 FUN_146740366(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14674038e FUN_14674038e body=29 status=ok
// SIG undefined FUN_14674038e(void)

undefined8 FUN_14674038e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467403ac FUN_1467403ac body=29 status=ok
// SIG undefined FUN_1467403ac(void)

undefined8 FUN_1467403ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467403ca FUN_1467403ca body=93 status=ok
// SIG undefined FUN_1467403ca(void)

void FUN_1467403ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd3fa00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146740428 FUN_146740428 body=29 status=ok
// SIG undefined FUN_146740428(void)

undefined8 FUN_146740428(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146740446 FUN_146740446 body=192 status=ok
// SIG undefined FUN_146740446(void)

void FUN_146740446(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd3fc60;
  puVar1[3] = &DAT_14cc1e994;
  puVar1[4] = FUN_1459a6d14;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146740522 FUN_146740522 body=106 status=ok
// SIG undefined FUN_146740522(void)

undefined8 FUN_146740522(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  int iVar2;
  
  iVar2 = 2;
  lVar1 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_14494321d(0x30);
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    *(int *)&lpCriticalSection[1].DebugInfo = iVar2;
    *(LPCRITICAL_SECTION *)((longlong)&DAT_14cc1e9a0 + lVar1) = lpCriticalSection;
    lVar1 = lVar1 + 8;
    iVar2 = iVar2 + 1;
  } while (lVar1 != 0x60);
  return 0;
}



// FUNCTION 14674058c FUN_14674058c body=83 status=ok
// SIG undefined FUN_14674058c(void)

undefined8 FUN_14674058c(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  lVar1 = 0;
  do {
    lpCriticalSection = *(LPCRITICAL_SECTION *)((longlong)&DAT_14cc1e9a0 + lVar1);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection(lpCriticalSection);
      thunk_FUN_1400020a8(lpCriticalSection,0x30);
    }
    *(undefined8 *)((longlong)&DAT_14cc1e9a0 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x60);
  return 0;
}



// FUNCTION 1467405e0 FUN_1467405e0 body=79 status=ok
// SIG undefined FUN_1467405e0(void)

LPCRITICAL_SECTION FUN_1467405e0(uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 < 2) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_14494321d(0x30);
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    *(uint *)&lpCriticalSection[1].DebugInfo = param_1;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(&DAT_14cc1e990 + (longlong)(int)param_1 * 8);
  }
  return lpCriticalSection;
}



// FUNCTION 146740630 FUN_146740630 body=53 status=ok
// SIG undefined FUN_146740630(void)

void FUN_146740630(LPCRITICAL_SECTION param_1)

{
  if ((param_1 != (LPCRITICAL_SECTION)0x0) && (*(uint *)&param_1[1].DebugInfo < 2)) {
    DeleteCriticalSection(param_1);
    thunk_FUN_1400020a8(param_1,0x30);
    return;
  }
  return;
}



// FUNCTION 146740666 FUN_146740666 body=93 status=ok
// SIG undefined FUN_146740666(void)

void FUN_146740666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd3fc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467406c4 FUN_1467406c4 body=34 status=ok
// SIG undefined FUN_1467406c4(void)

undefined8 FUN_1467406c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1467406e6 FUN_1467406e6 body=43 status=ok
// SIG undefined FUN_1467406e6(void)

void FUN_1467406e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bd4d670;
  return;
}



// FUNCTION 146740711 FUN_146740711 body=47 status=ok
// SIG undefined FUN_146740711(void)

longlong FUN_146740711(void)

{
  if (DAT_14cc1ee88 == 0) {
    FUN_14000fc22(&DAT_14cc1ee88,&PTR_FUN_14bd4b3b0);
  }
  return DAT_14cc1ee88;
}



// FUNCTION 146740740 FUN_146740740 body=47 status=ok
// SIG undefined FUN_146740740(void)

longlong FUN_146740740(void)

{
  if (DAT_14cc1ee90 == 0) {
    FUN_14000fc22(&DAT_14cc1ee90,&PTR_FUN_14bd4b400);
  }
  return DAT_14cc1ee90;
}



// FUNCTION 14674076f FUN_14674076f body=47 status=ok
// SIG undefined FUN_14674076f(void)

longlong FUN_14674076f(void)

{
  if (DAT_14cc1ee98 == 0) {
    FUN_14000fc22(&DAT_14cc1ee98,&PTR_FUN_14bd4b490);
  }
  return DAT_14cc1ee98;
}



// FUNCTION 14674079e FUN_14674079e body=47 status=ok
// SIG undefined FUN_14674079e(void)

longlong FUN_14674079e(void)

{
  if (DAT_14cc1eea0 == 0) {
    FUN_14000fc22(&DAT_14cc1eea0,&PTR_FUN_14bd4b520);
  }
  return DAT_14cc1eea0;
}



// FUNCTION 1467407cd FUN_1467407cd body=47 status=ok
// SIG undefined FUN_1467407cd(void)

longlong FUN_1467407cd(void)

{
  if (DAT_14cc1eea8 == 0) {
    FUN_14000fc22(&DAT_14cc1eea8,&PTR_FUN_14bd4b640);
  }
  return DAT_14cc1eea8;
}



// FUNCTION 1467407fc FUN_1467407fc body=47 status=ok
// SIG undefined FUN_1467407fc(void)

longlong FUN_1467407fc(void)

{
  if (DAT_14cc1eeb0 == 0) {
    FUN_14000fc22(&DAT_14cc1eeb0,&PTR_FUN_14bd4b748);
  }
  return DAT_14cc1eeb0;
}



// FUNCTION 14674082b FUN_14674082b body=47 status=ok
// SIG undefined FUN_14674082b(void)

longlong FUN_14674082b(void)

{
  if (DAT_14cc1eeb8 == 0) {
    FUN_14000fc22(&DAT_14cc1eeb8,&PTR_FUN_14bd4b8b8);
  }
  return DAT_14cc1eeb8;
}



// FUNCTION 14674085a FUN_14674085a body=47 status=ok
// SIG undefined FUN_14674085a(void)

longlong FUN_14674085a(void)

{
  if (DAT_14cc1eec0 == 0) {
    FUN_14000fc22(&DAT_14cc1eec0,&PTR_FUN_14bd4ba90);
  }
  return DAT_14cc1eec0;
}



// FUNCTION 146740889 FUN_146740889 body=47 status=ok
// SIG undefined FUN_146740889(void)

longlong FUN_146740889(void)

{
  if (DAT_14cc1eec8 == 0) {
    FUN_14000fc22(&DAT_14cc1eec8,&PTR_FUN_14bd4bb20);
  }
  return DAT_14cc1eec8;
}



// FUNCTION 1467408b8 FUN_1467408b8 body=47 status=ok
// SIG undefined FUN_1467408b8(void)

longlong FUN_1467408b8(void)

{
  if (DAT_14cc1eed0 == 0) {
    FUN_14000fc22(&DAT_14cc1eed0,&PTR_FUN_14bd4bc48);
  }
  return DAT_14cc1eed0;
}



// FUNCTION 1467408e7 FUN_1467408e7 body=47 status=ok
// SIG undefined FUN_1467408e7(void)

longlong FUN_1467408e7(void)

{
  if (DAT_14cc1eed8 == 0) {
    FUN_14000fc22(&DAT_14cc1eed8,&PTR_FUN_14bd4bcd8);
  }
  return DAT_14cc1eed8;
}



// FUNCTION 146740916 FUN_146740916 body=47 status=ok
// SIG undefined FUN_146740916(void)

longlong FUN_146740916(void)

{
  if (DAT_14cc1eee0 == 0) {
    FUN_14000fc22(&DAT_14cc1eee0,&PTR_FUN_14bd4bdf8);
  }
  return DAT_14cc1eee0;
}



// FUNCTION 146740945 FUN_146740945 body=47 status=ok
// SIG undefined FUN_146740945(void)

longlong FUN_146740945(void)

{
  if (DAT_14cc1eee8 == 0) {
    FUN_14000fc22(&DAT_14cc1eee8,&PTR_FUN_14bd4bf28);
  }
  return DAT_14cc1eee8;
}



// FUNCTION 146740974 FUN_146740974 body=47 status=ok
// SIG undefined FUN_146740974(void)

longlong FUN_146740974(void)

{
  if (DAT_14cc1eef0 == 0) {
    FUN_14000fc22(&DAT_14cc1eef0,&PTR_FUN_14bd4c0a8);
  }
  return DAT_14cc1eef0;
}



// FUNCTION 1467409a3 FUN_1467409a3 body=47 status=ok
// SIG undefined FUN_1467409a3(void)

longlong FUN_1467409a3(void)

{
  if (DAT_14cc1eef8 == 0) {
    FUN_14000fc22(&DAT_14cc1eef8,&PTR_FUN_14bd4c1a0);
  }
  return DAT_14cc1eef8;
}



// FUNCTION 1467409d2 FUN_1467409d2 body=47 status=ok
// SIG undefined FUN_1467409d2(void)

longlong FUN_1467409d2(void)

{
  if (DAT_14cc1ef00 == 0) {
    FUN_14000fc22(&DAT_14cc1ef00,&PTR_FUN_14bd4c310);
  }
  return DAT_14cc1ef00;
}



// FUNCTION 146740a01 FUN_146740a01 body=47 status=ok
// SIG undefined FUN_146740a01(void)

longlong FUN_146740a01(void)

{
  if (DAT_14cc1ef08 == 0) {
    FUN_14000fc22(&DAT_14cc1ef08,&PTR_FUN_14bd4c4d8);
  }
  return DAT_14cc1ef08;
}



// FUNCTION 146740a30 FUN_146740a30 body=47 status=ok
// SIG undefined FUN_146740a30(void)

longlong FUN_146740a30(void)

{
  if (DAT_14cc1ef10 == 0) {
    FUN_14000fc22(&DAT_14cc1ef10,&PTR_FUN_14bd4c5c0);
  }
  return DAT_14cc1ef10;
}



// FUNCTION 146740a5f FUN_146740a5f body=47 status=ok
// SIG undefined FUN_146740a5f(void)

longlong FUN_146740a5f(void)

{
  if (DAT_14cc1ef18 == 0) {
    FUN_14000fc22(&DAT_14cc1ef18,&PTR_FUN_14bd4c740);
  }
  return DAT_14cc1ef18;
}



// FUNCTION 146740a8e FUN_146740a8e body=47 status=ok
// SIG undefined FUN_146740a8e(void)

longlong FUN_146740a8e(void)

{
  if (DAT_14cc1ef20 == 0) {
    FUN_14000fc22(&DAT_14cc1ef20,&PTR_FUN_14bd4c820);
  }
  return DAT_14cc1ef20;
}



// FUNCTION 146740abd FUN_146740abd body=47 status=ok
// SIG undefined FUN_146740abd(void)

longlong FUN_146740abd(void)

{
  if (DAT_14cc1ef28 == 0) {
    FUN_14000fc22(&DAT_14cc1ef28,&PTR_FUN_14bd4c998);
  }
  return DAT_14cc1ef28;
}



// FUNCTION 146740aec FUN_146740aec body=47 status=ok
// SIG undefined FUN_146740aec(void)

longlong FUN_146740aec(void)

{
  if (DAT_14cc1ef30 == 0) {
    FUN_14000fc22(&DAT_14cc1ef30,&PTR_FUN_14bd4ca20);
  }
  return DAT_14cc1ef30;
}



// FUNCTION 146740b1b FUN_146740b1b body=47 status=ok
// SIG undefined FUN_146740b1b(void)

longlong FUN_146740b1b(void)

{
  if (DAT_14cc1ef38 == 0) {
    FUN_14000fc22(&DAT_14cc1ef38,&PTR_FUN_14bd4cac0);
  }
  return DAT_14cc1ef38;
}



// FUNCTION 146740b4a FUN_146740b4a body=47 status=ok
// SIG undefined FUN_146740b4a(void)

longlong FUN_146740b4a(void)

{
  if (DAT_14cc1ef40 == 0) {
    FUN_14000fc22(&DAT_14cc1ef40,&PTR_FUN_14bd4cb50);
  }
  return DAT_14cc1ef40;
}



// FUNCTION 146740b79 FUN_146740b79 body=47 status=ok
// SIG undefined FUN_146740b79(void)

longlong FUN_146740b79(void)

{
  if (DAT_14cc1ef48 == 0) {
    FUN_14000fc22(&DAT_14cc1ef48,&PTR_FUN_14bd4cbd0);
  }
  return DAT_14cc1ef48;
}



// FUNCTION 146740ba8 FUN_146740ba8 body=47 status=ok
// SIG undefined FUN_146740ba8(void)

longlong FUN_146740ba8(void)

{
  if (DAT_14cc1ef50 == 0) {
    FUN_14000fc22(&DAT_14cc1ef50,&PTR_FUN_14bd4cc60);
  }
  return DAT_14cc1ef50;
}



// FUNCTION 146740bd7 FUN_146740bd7 body=47 status=ok
// SIG undefined FUN_146740bd7(void)

longlong FUN_146740bd7(void)

{
  if (DAT_14cc1ef58 == 0) {
    FUN_14000fc22(&DAT_14cc1ef58,&PTR_FUN_14bd4ccf0);
  }
  return DAT_14cc1ef58;
}



// FUNCTION 146740c06 FUN_146740c06 body=47 status=ok
// SIG undefined FUN_146740c06(void)

longlong FUN_146740c06(void)

{
  if (DAT_14cc1ef60 == 0) {
    FUN_14000fc22(&DAT_14cc1ef60,&PTR_FUN_14bd4cd88);
  }
  return DAT_14cc1ef60;
}



// FUNCTION 146740c35 FUN_146740c35 body=47 status=ok
// SIG undefined FUN_146740c35(void)

longlong FUN_146740c35(void)

{
  if (DAT_14cc1ef68 == 0) {
    FUN_14000fc22(&DAT_14cc1ef68,&PTR_FUN_14bd4ceb8);
  }
  return DAT_14cc1ef68;
}



// FUNCTION 146740c64 FUN_146740c64 body=34 status=ok
// SIG undefined FUN_146740c64(void)

void FUN_146740c64(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a97624();
  FUN_14069c8d6(uVar1,&PTR_s_EndSession_14bd4cf00,0x1d);
  return;
}



// FUNCTION 146740c86 FUN_146740c86 body=35 status=ok
// SIG undefined FUN_146740c86(void)

void FUN_146740c86(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd4d340;
  return;
}



// FUNCTION 146740caa FUN_146740caa body=192 status=ok
// SIG undefined FUN_146740caa(void)

void FUN_146740caa(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd4d7e0;
  puVar1[3] = &DAT_14cc1ef88;
  puVar1[4] = FUN_1459a6d3e;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146740d6c FUN_146740d6c body=40 status=ok
// SIG undefined FUN_146740d6c(void)

undefined8 FUN_146740d6c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146740d94 FUN_146740d94 body=34 status=ok
// SIG undefined FUN_146740d94(void)

undefined8 FUN_146740d94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146740db6 FUN_146740db6 body=93 status=ok
// SIG undefined FUN_146740db6(void)

void FUN_146740db6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd4d7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146740e14 FUN_146740e14 body=34 status=ok
// SIG undefined FUN_146740e14(void)

undefined8 FUN_146740e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146740e36 FUN_146740e36 body=47 status=ok
// SIG undefined FUN_146740e36(void)

longlong FUN_146740e36(void)

{
  if (DAT_14cc1ef98 == 0) {
    FUN_140f50038(&DAT_14cc1ef98,&PTR_s__Script_InterchangeExport_14bd4d890);
  }
  return DAT_14cc1ef98;
}



// FUNCTION 146740e66 FUN_146740e66 body=192 status=ok
// SIG undefined FUN_146740e66(void)

void FUN_146740e66(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd4dca0;
  puVar1[3] = &DAT_14cc1efa8;
  puVar1[4] = FUN_1459a6d68;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146740f28 FUN_146740f28 body=190 status=ok
// SIG undefined FUN_146740f28(void)

void FUN_146740f28(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    FUN_146153af4();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  puVar1 = local_28;
  local_20 = 2;
  *local_28 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd4dd50;
  FUN_1448b6402(&DAT_14c872cf8,local_30,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146740ff3 FUN_146740ff3 body=47 status=ok
// SIG undefined FUN_146740ff3(void)

longlong FUN_146740ff3(void)

{
  if (DAT_14cc1efb8 == 0) {
    FUN_14073dd9a(&DAT_14cc1efb8,&PTR_LAB_14bd4d978);
  }
  return DAT_14cc1efb8;
}



// FUNCTION 146741022 FUN_146741022 body=93 status=ok
// SIG undefined FUN_146741022(void)

void FUN_146741022(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd4dca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146741080 FUN_146741080 body=29 status=ok
// SIG undefined FUN_146741080(void)

undefined8 FUN_146741080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14674109d FUN_14674109d body=47 status=ok
// SIG undefined FUN_14674109d(void)

longlong FUN_14674109d(void)

{
  if (DAT_14cc1eff0 == 0) {
    FUN_1409ce572(&DAT_14cc1eff0,&PTR_FUN_14bd4df20);
  }
  return DAT_14cc1eff0;
}



// FUNCTION 1467410cc FUN_1467410cc body=49 status=ok
// SIG undefined FUN_1467410cc(void)

longlong FUN_1467410cc(void)

{
  if (DAT_14cc1f008 == 0) {
    FUN_14086a14e(&DAT_14cc1f008,&PTR_FUN_14bd4e010);
  }
  return DAT_14cc1f008;
}



// FUNCTION 1467410fe FUN_1467410fe body=48 status=ok
// SIG undefined FUN_1467410fe(void)

void FUN_1467410fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bd53d20;
  return;
}



// FUNCTION 14674112e FUN_14674112e body=47 status=ok
// SIG undefined FUN_14674112e(void)

longlong FUN_14674112e(void)

{
  if (DAT_14cc1f020 == 0) {
    FUN_1409ce572(&DAT_14cc1f020,&PTR_FUN_14bd4e0b0);
  }
  return DAT_14cc1f020;
}



// FUNCTION 14674115d FUN_14674115d body=47 status=ok
// SIG undefined FUN_14674115d(void)

longlong FUN_14674115d(void)

{
  if (DAT_14cc1f038 == 0) {
    FUN_14000fc22(&DAT_14cc1f038,&PTR_FUN_14bd4e1c8);
  }
  return DAT_14cc1f038;
}



// FUNCTION 14674118c FUN_14674118c body=47 status=ok
// SIG undefined FUN_14674118c(void)

longlong FUN_14674118c(void)

{
  if (DAT_14cc1f040 == 0) {
    FUN_14000fc22(&DAT_14cc1f040,&PTR_FUN_14bd4e3c0);
  }
  return DAT_14cc1f040;
}



// FUNCTION 1467411bb FUN_1467411bb body=47 status=ok
// SIG undefined FUN_1467411bb(void)

longlong FUN_1467411bb(void)

{
  if (DAT_14cc1f048 == 0) {
    FUN_14000fc22(&DAT_14cc1f048,&PTR_FUN_14bd4e4f8);
  }
  return DAT_14cc1f048;
}



// FUNCTION 1467411ea FUN_1467411ea body=47 status=ok
// SIG undefined FUN_1467411ea(void)

longlong FUN_1467411ea(void)

{
  if (DAT_14cc1f050 == 0) {
    FUN_14000fc22(&DAT_14cc1f050,&PTR_FUN_14bd4e5d8);
  }
  return DAT_14cc1f050;
}



// FUNCTION 146741219 FUN_146741219 body=47 status=ok
// SIG undefined FUN_146741219(void)

longlong FUN_146741219(void)

{
  if (DAT_14cc1f058 == 0) {
    FUN_14000fc22(&DAT_14cc1f058,&PTR_FUN_14bd4e730);
  }
  return DAT_14cc1f058;
}



// FUNCTION 146741248 FUN_146741248 body=47 status=ok
// SIG undefined FUN_146741248(void)

longlong FUN_146741248(void)

{
  if (DAT_14cc1f060 == 0) {
    FUN_14000fc22(&DAT_14cc1f060,&PTR_FUN_14bd4e898);
  }
  return DAT_14cc1f060;
}



// FUNCTION 146741277 FUN_146741277 body=47 status=ok
// SIG undefined FUN_146741277(void)

longlong FUN_146741277(void)

{
  if (DAT_14cc1f068 == 0) {
    FUN_14000fc22(&DAT_14cc1f068,&PTR_FUN_14bd4e9b8);
  }
  return DAT_14cc1f068;
}



// FUNCTION 1467412a6 FUN_1467412a6 body=47 status=ok
// SIG undefined FUN_1467412a6(void)

longlong FUN_1467412a6(void)

{
  if (DAT_14cc1f070 == 0) {
    FUN_14000fc22(&DAT_14cc1f070,&PTR_FUN_14bd4eae8);
  }
  return DAT_14cc1f070;
}



// FUNCTION 1467412d5 FUN_1467412d5 body=47 status=ok
// SIG undefined FUN_1467412d5(void)

longlong FUN_1467412d5(void)

{
  if (DAT_14cc1f078 == 0) {
    FUN_14000fc22(&DAT_14cc1f078,&PTR_FUN_14bd4ec38);
  }
  return DAT_14cc1f078;
}



// FUNCTION 146741304 FUN_146741304 body=47 status=ok
// SIG undefined FUN_146741304(void)

longlong FUN_146741304(void)

{
  if (DAT_14cc1f080 == 0) {
    FUN_14000fc22(&DAT_14cc1f080,&PTR_FUN_14bd4ed10);
  }
  return DAT_14cc1f080;
}



// FUNCTION 146741333 FUN_146741333 body=47 status=ok
// SIG undefined FUN_146741333(void)

longlong FUN_146741333(void)

{
  if (DAT_14cc1f088 == 0) {
    FUN_14000fc22(&DAT_14cc1f088,&PTR_FUN_14bd4ee38);
  }
  return DAT_14cc1f088;
}



// FUNCTION 146741362 FUN_146741362 body=47 status=ok
// SIG undefined FUN_146741362(void)

longlong FUN_146741362(void)

{
  if (DAT_14cc1f090 == 0) {
    FUN_14000fc22(&DAT_14cc1f090,&PTR_FUN_14bd4eed0);
  }
  return DAT_14cc1f090;
}



// FUNCTION 146741391 FUN_146741391 body=47 status=ok
// SIG undefined FUN_146741391(void)

longlong FUN_146741391(void)

{
  if (DAT_14cc1f098 == 0) {
    FUN_14000fc22(&DAT_14cc1f098,&PTR_FUN_14bd4ef68);
  }
  return DAT_14cc1f098;
}



// FUNCTION 1467413c0 FUN_1467413c0 body=47 status=ok
// SIG undefined FUN_1467413c0(void)

longlong FUN_1467413c0(void)

{
  if (DAT_14cc1f0a0 == 0) {
    FUN_14000fc22(&DAT_14cc1f0a0,&PTR_FUN_14bd4f000);
  }
  return DAT_14cc1f0a0;
}



// FUNCTION 1467413ef FUN_1467413ef body=47 status=ok
// SIG undefined FUN_1467413ef(void)

longlong FUN_1467413ef(void)

{
  if (DAT_14cc1f0a8 == 0) {
    FUN_14000fc22(&DAT_14cc1f0a8,&PTR_FUN_14bd4f1b8);
  }
  return DAT_14cc1f0a8;
}



// FUNCTION 14674141e FUN_14674141e body=47 status=ok
// SIG undefined FUN_14674141e(void)

longlong FUN_14674141e(void)

{
  if (DAT_14cc1f0b0 == 0) {
    FUN_14000fc22(&DAT_14cc1f0b0,&PTR_FUN_14bd4f470);
  }
  return DAT_14cc1f0b0;
}



// FUNCTION 14674144d FUN_14674144d body=47 status=ok
// SIG undefined FUN_14674144d(void)

longlong FUN_14674144d(void)

{
  if (DAT_14cc1f0b8 == 0) {
    FUN_14000fc22(&DAT_14cc1f0b8,&PTR_FUN_14bd4f618);
  }
  return DAT_14cc1f0b8;
}



// FUNCTION 14674147c FUN_14674147c body=47 status=ok
// SIG undefined FUN_14674147c(void)

longlong FUN_14674147c(void)

{
  if (DAT_14cc1f0c0 == 0) {
    FUN_14000fc22(&DAT_14cc1f0c0,&PTR_FUN_14bd4f738);
  }
  return DAT_14cc1f0c0;
}



// FUNCTION 1467414ab FUN_1467414ab body=47 status=ok
// SIG undefined FUN_1467414ab(void)

longlong FUN_1467414ab(void)

{
  if (DAT_14cc1f0c8 == 0) {
    FUN_14000fc22(&DAT_14cc1f0c8,&PTR_FUN_14bd4f8a8);
  }
  return DAT_14cc1f0c8;
}



// FUNCTION 1467414da FUN_1467414da body=47 status=ok
// SIG undefined FUN_1467414da(void)

longlong FUN_1467414da(void)

{
  if (DAT_14cc1f0d0 == 0) {
    FUN_14000fc22(&DAT_14cc1f0d0,&PTR_FUN_14bd4fa18);
  }
  return DAT_14cc1f0d0;
}



// FUNCTION 146741509 FUN_146741509 body=47 status=ok
// SIG undefined FUN_146741509(void)

longlong FUN_146741509(void)

{
  if (DAT_14cc1f0d8 == 0) {
    FUN_14000fc22(&DAT_14cc1f0d8,&PTR_FUN_14bd4fc28);
  }
  return DAT_14cc1f0d8;
}



// FUNCTION 146741538 FUN_146741538 body=47 status=ok
// SIG undefined FUN_146741538(void)

longlong FUN_146741538(void)

{
  if (DAT_14cc1f0e0 == 0) {
    FUN_14000fc22(&DAT_14cc1f0e0,&PTR_FUN_14bd4fe28);
  }
  return DAT_14cc1f0e0;
}



// FUNCTION 146741567 FUN_146741567 body=47 status=ok
// SIG undefined FUN_146741567(void)

longlong FUN_146741567(void)

{
  if (DAT_14cc1f0e8 == 0) {
    FUN_14000fc22(&DAT_14cc1f0e8,&PTR_FUN_14bd4ff48);
  }
  return DAT_14cc1f0e8;
}



// FUNCTION 146741596 FUN_146741596 body=47 status=ok
// SIG undefined FUN_146741596(void)

longlong FUN_146741596(void)

{
  if (DAT_14cc1f0f0 == 0) {
    FUN_14000fc22(&DAT_14cc1f0f0,&PTR_FUN_14bd50020);
  }
  return DAT_14cc1f0f0;
}



// FUNCTION 1467415c5 FUN_1467415c5 body=47 status=ok
// SIG undefined FUN_1467415c5(void)

longlong FUN_1467415c5(void)

{
  if (DAT_14cc1f0f8 == 0) {
    FUN_14000fc22(&DAT_14cc1f0f8,&PTR_FUN_14bd501c0);
  }
  return DAT_14cc1f0f8;
}



// FUNCTION 1467415f4 FUN_1467415f4 body=47 status=ok
// SIG undefined FUN_1467415f4(void)

longlong FUN_1467415f4(void)

{
  if (DAT_14cc1f100 == 0) {
    FUN_14000fc22(&DAT_14cc1f100,&PTR_FUN_14bd50368);
  }
  return DAT_14cc1f100;
}



// FUNCTION 146741623 FUN_146741623 body=47 status=ok
// SIG undefined FUN_146741623(void)

longlong FUN_146741623(void)

{
  if (DAT_14cc1f108 == 0) {
    FUN_14000fc22(&DAT_14cc1f108,&PTR_FUN_14bd50448);
  }
  return DAT_14cc1f108;
}



// FUNCTION 146741652 FUN_146741652 body=47 status=ok
// SIG undefined FUN_146741652(void)

longlong FUN_146741652(void)

{
  if (DAT_14cc1f110 == 0) {
    FUN_14000fc22(&DAT_14cc1f110,&PTR_FUN_14bd505f8);
  }
  return DAT_14cc1f110;
}



// FUNCTION 146741681 FUN_146741681 body=47 status=ok
// SIG undefined FUN_146741681(void)

longlong FUN_146741681(void)

{
  if (DAT_14cc1f118 == 0) {
    FUN_14000fc22(&DAT_14cc1f118,&PTR_FUN_14bd507b0);
  }
  return DAT_14cc1f118;
}



// FUNCTION 1467416b0 FUN_1467416b0 body=47 status=ok
// SIG undefined FUN_1467416b0(void)

longlong FUN_1467416b0(void)

{
  if (DAT_14cc1f120 == 0) {
    FUN_14000fc22(&DAT_14cc1f120,&PTR_FUN_14bd50a08);
  }
  return DAT_14cc1f120;
}



// FUNCTION 1467416df FUN_1467416df body=47 status=ok
// SIG undefined FUN_1467416df(void)

longlong FUN_1467416df(void)

{
  if (DAT_14cc1f128 == 0) {
    FUN_14000fc22(&DAT_14cc1f128,&PTR_FUN_14bd50c50);
  }
  return DAT_14cc1f128;
}



// FUNCTION 14674170e FUN_14674170e body=47 status=ok
// SIG undefined FUN_14674170e(void)

longlong FUN_14674170e(void)

{
  if (DAT_14cc1f130 == 0) {
    FUN_14000fc22(&DAT_14cc1f130,&PTR_FUN_14bd50d80);
  }
  return DAT_14cc1f130;
}



// FUNCTION 14674173d FUN_14674173d body=47 status=ok
// SIG undefined FUN_14674173d(void)

longlong FUN_14674173d(void)

{
  if (DAT_14cc1f138 == 0) {
    FUN_14000fc22(&DAT_14cc1f138,&PTR_FUN_14bd50f28);
  }
  return DAT_14cc1f138;
}



// FUNCTION 14674176c FUN_14674176c body=47 status=ok
// SIG undefined FUN_14674176c(void)

longlong FUN_14674176c(void)

{
  if (DAT_14cc1f140 == 0) {
    FUN_14000fc22(&DAT_14cc1f140,&PTR_FUN_14bd510e0);
  }
  return DAT_14cc1f140;
}



// FUNCTION 14674179b FUN_14674179b body=47 status=ok
// SIG undefined FUN_14674179b(void)

longlong FUN_14674179b(void)

{
  if (DAT_14cc1f148 == 0) {
    FUN_14000fc22(&DAT_14cc1f148,&PTR_FUN_14bd51300);
  }
  return DAT_14cc1f148;
}



// FUNCTION 1467417ca FUN_1467417ca body=47 status=ok
// SIG undefined FUN_1467417ca(void)

longlong FUN_1467417ca(void)

{
  if (DAT_14cc1f150 == 0) {
    FUN_14000fc22(&DAT_14cc1f150,&PTR_FUN_14bd513d0);
  }
  return DAT_14cc1f150;
}



// FUNCTION 1467417f9 FUN_1467417f9 body=47 status=ok
// SIG undefined FUN_1467417f9(void)

longlong FUN_1467417f9(void)

{
  if (DAT_14cc1f158 == 0) {
    FUN_14000fc22(&DAT_14cc1f158,&PTR_FUN_14bd514b0);
  }
  return DAT_14cc1f158;
}



// FUNCTION 146741828 FUN_146741828 body=47 status=ok
// SIG undefined FUN_146741828(void)

longlong FUN_146741828(void)

{
  if (DAT_14cc1f160 == 0) {
    FUN_14000fc22(&DAT_14cc1f160,&PTR_FUN_14bd515c8);
  }
  return DAT_14cc1f160;
}



// FUNCTION 146741857 FUN_146741857 body=47 status=ok
// SIG undefined FUN_146741857(void)

longlong FUN_146741857(void)

{
  if (DAT_14cc1f168 == 0) {
    FUN_14000fc22(&DAT_14cc1f168,&PTR_FUN_14bd51668);
  }
  return DAT_14cc1f168;
}



// FUNCTION 146741886 FUN_146741886 body=47 status=ok
// SIG undefined FUN_146741886(void)

longlong FUN_146741886(void)

{
  if (DAT_14cc1f170 == 0) {
    FUN_14000fc22(&DAT_14cc1f170,&PTR_FUN_14bd517c0);
  }
  return DAT_14cc1f170;
}



// FUNCTION 1467418b5 FUN_1467418b5 body=47 status=ok
// SIG undefined FUN_1467418b5(void)

longlong FUN_1467418b5(void)

{
  if (DAT_14cc1f178 == 0) {
    FUN_14000fc22(&DAT_14cc1f178,&PTR_FUN_14bd51930);
  }
  return DAT_14cc1f178;
}



// FUNCTION 1467418e4 FUN_1467418e4 body=47 status=ok
// SIG undefined FUN_1467418e4(void)

longlong FUN_1467418e4(void)

{
  if (DAT_14cc1f180 == 0) {
    FUN_14000fc22(&DAT_14cc1f180,&PTR_FUN_14bd51b10);
  }
  return DAT_14cc1f180;
}



// FUNCTION 146741913 FUN_146741913 body=47 status=ok
// SIG undefined FUN_146741913(void)

longlong FUN_146741913(void)

{
  if (DAT_14cc1f188 == 0) {
    FUN_14000fc22(&DAT_14cc1f188,&PTR_FUN_14bd51d08);
  }
  return DAT_14cc1f188;
}



// FUNCTION 146741942 FUN_146741942 body=47 status=ok
// SIG undefined FUN_146741942(void)

longlong FUN_146741942(void)

{
  if (DAT_14cc1f190 == 0) {
    FUN_14000fc22(&DAT_14cc1f190,&PTR_FUN_14bd51e30);
  }
  return DAT_14cc1f190;
}



// FUNCTION 146741971 FUN_146741971 body=47 status=ok
// SIG undefined FUN_146741971(void)

longlong FUN_146741971(void)

{
  if (DAT_14cc1f198 == 0) {
    FUN_14000fc22(&DAT_14cc1f198,&PTR_FUN_14bd51ee8);
  }
  return DAT_14cc1f198;
}



// FUNCTION 1467419a0 FUN_1467419a0 body=34 status=ok
// SIG undefined FUN_1467419a0(void)

void FUN_1467419a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145988f00();
  FUN_14069c8d6(uVar1,&PTR_s_GetAttributeIndexFromString_14bd51f30,0x2d);
  return;
}



// FUNCTION 1467419c7 FUN_1467419c7 body=47 status=ok
// SIG undefined FUN_1467419c7(void)

longlong FUN_1467419c7(void)

{
  if (DAT_14cc1f1b8 == 0) {
    FUN_14086a14e(&DAT_14cc1f1b8,&PTR_FUN_14bd53328);
  }
  return DAT_14cc1f1b8;
}



// FUNCTION 1467419f6 FUN_1467419f6 body=48 status=ok
// SIG undefined FUN_1467419f6(void)

void FUN_1467419f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14bd53f50;
  return;
}



// FUNCTION 146741a26 FUN_146741a26 body=47 status=ok
// SIG undefined FUN_146741a26(void)

longlong FUN_146741a26(void)

{
  if (DAT_14cc1f1d8 == 0) {
    FUN_14073dd9a(&DAT_14cc1f1d8,&PTR_LAB_14bd53418);
  }
  return DAT_14cc1f1d8;
}



// FUNCTION 146741a56 FUN_146741a56 body=192 status=ok
// SIG undefined FUN_146741a56(void)

void FUN_146741a56(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd540c0;
  puVar1[3] = &DAT_14cc1f1e8;
  puVar1[4] = FUN_1459d125a;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146741b18 FUN_146741b18 body=40 status=ok
// SIG undefined FUN_146741b18(void)

undefined8 FUN_146741b18(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146741b40 FUN_146741b40 body=29 status=ok
// SIG undefined FUN_146741b40(void)

undefined8 FUN_146741b40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146741b5e FUN_146741b5e body=29 status=ok
// SIG undefined FUN_146741b5e(void)

undefined8 FUN_146741b5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146741b7c FUN_146741b7c body=93 status=ok
// SIG undefined FUN_146741b7c(void)

void FUN_146741b7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd540c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146741bda FUN_146741bda body=29 status=ok
// SIG undefined FUN_146741bda(void)

undefined8 FUN_146741bda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146741bf8 FUN_146741bf8 body=68 status=ok
// SIG undefined FUN_146741bf8(void)

undefined8 * FUN_146741bf8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd58c40;
  FUN_14476820c(param_1 + 6);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146741c3c FUN_146741c3c body=192 status=ok
// SIG undefined FUN_146741c3c(void)

void FUN_146741c3c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd5a160;
  puVar1[3] = &DAT_14cc1f5a8;
  puVar1[4] = FUN_1459d1288;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146741cfe FUN_146741cfe body=93 status=ok
// SIG undefined FUN_146741cfe(void)

void FUN_146741cfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd5a160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146741d5c FUN_146741d5c body=29 status=ok
// SIG undefined FUN_146741d5c(void)

undefined8 FUN_146741d5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146741d7a FUN_146741d7a body=192 status=ok
// SIG undefined FUN_146741d7a(void)

void FUN_146741d7a(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd5a260;
  puVar1[3] = &DAT_14cc1f5ac;
  puVar1[4] = FUN_1459d12b6;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146741e3c FUN_146741e3c body=93 status=ok
// SIG undefined FUN_146741e3c(void)

void FUN_146741e3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd5a260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146741e9a FUN_146741e9a body=29 status=ok
// SIG undefined FUN_146741e9a(void)

undefined8 FUN_146741e9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146741eb7 FUN_146741eb7 body=47 status=ok
// SIG undefined FUN_146741eb7(void)

longlong FUN_146741eb7(void)

{
  if (DAT_14cc1f5b0 == 0) {
    FUN_1409ce572(&DAT_14cc1f5b0,&PTR_FUN_14bd5a360);
  }
  return DAT_14cc1f5b0;
}



// FUNCTION 146741ee6 FUN_146741ee6 body=47 status=ok
// SIG undefined FUN_146741ee6(void)

longlong FUN_146741ee6(void)

{
  if (DAT_14cc1f5e0 == 0) {
    FUN_14073dd9a(&DAT_14cc1f5e0,&PTR_LAB_14bd5ac30);
  }
  return DAT_14cc1f5e0;
}



// FUNCTION 146741f15 FUN_146741f15 body=47 status=ok
// SIG undefined FUN_146741f15(void)

longlong FUN_146741f15(void)

{
  if (DAT_14cc1f5c8 == 0) {
    FUN_14000fc22(&DAT_14cc1f5c8,&PTR_FUN_14bd5a430);
  }
  return DAT_14cc1f5c8;
}



// FUNCTION 146741f44 FUN_146741f44 body=47 status=ok
// SIG undefined FUN_146741f44(void)

longlong FUN_146741f44(void)

{
  if (DAT_14cc1f5d0 == 0) {
    FUN_14000fc22(&DAT_14cc1f5d0,&PTR_FUN_14bd5a510);
  }
  return DAT_14cc1f5d0;
}



// FUNCTION 146741f74 FUN_146741f74 body=34 status=ok
// SIG undefined FUN_146741f74(void)

void FUN_146741f74(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145923d3a();
  FUN_14069c8d6(uVar1,&PTR_s_GetSourceUVLayerNamesFunc_14bd5a550,2);
  return;
}



// FUNCTION 146741f9b FUN_146741f9b body=118 status=ok
// SIG undefined FUN_146741f9b(void)

void FUN_146741f9b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd5ac70;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc9) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe9) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x105) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10d) = 0;
  *(undefined4 *)(puVar1 + 0x23) = 0x40400000;
  *(undefined1 *)((longlong)puVar1 + 0x11c) = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  return;
}



// FUNCTION 146742011 FUN_146742011 body=35 status=ok
// SIG undefined FUN_146742011(void)

void FUN_146742011(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd5afd0;
  return;
}



// FUNCTION 146742034 FUN_146742034 body=47 status=ok
// SIG undefined FUN_146742034(void)

longlong FUN_146742034(void)

{
  if (DAT_14cc1f5f8 == 0) {
    FUN_14073dd9a(&DAT_14cc1f5f8,&PTR_LAB_14bd5af88);
  }
  return DAT_14cc1f5f8;
}



// FUNCTION 146742063 FUN_146742063 body=59 status=ok
// SIG undefined FUN_146742063(void)

void FUN_146742063(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd5b4b0;
  puVar1[0x15] = 0x10;
  puVar1[0x16] = 0x4170000043340000;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  return;
}



// FUNCTION 1467420a3 FUN_1467420a3 body=47 status=ok
// SIG undefined FUN_1467420a3(void)

longlong FUN_1467420a3(void)

{
  if (DAT_14cc1f610 == 0) {
    FUN_14073dd9a(&DAT_14cc1f610,&PTR_LAB_14bd5b468);
  }
  return DAT_14cc1f610;
}



// FUNCTION 1467420d2 FUN_1467420d2 body=47 status=ok
// SIG undefined FUN_1467420d2(void)

longlong FUN_1467420d2(void)

{
  if (DAT_14cc1f620 == 0) {
    FUN_1409ce572(&DAT_14cc1f620,&PTR_FUN_14bd5b7c0);
  }
  return DAT_14cc1f620;
}



// FUNCTION 146742101 FUN_146742101 body=47 status=ok
// SIG undefined FUN_146742101(void)

longlong FUN_146742101(void)

{
  if (DAT_14cc1f638 == 0) {
    FUN_1409ce572(&DAT_14cc1f638,&PTR_FUN_14bd5b840);
  }
  return DAT_14cc1f638;
}



// FUNCTION 146742130 FUN_146742130 body=47 status=ok
// SIG undefined FUN_146742130(void)

longlong FUN_146742130(void)

{
  if (DAT_14cc1f650 == 0) {
    FUN_1409ce572(&DAT_14cc1f650,&PTR_FUN_14bd5b8c0);
  }
  return DAT_14cc1f650;
}



// FUNCTION 14674215f FUN_14674215f body=59 status=ok
// SIG undefined FUN_14674215f(void)

void FUN_14674215f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd5bbb0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0x3f800000;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  return;
}



// FUNCTION 14674219f FUN_14674219f body=47 status=ok
// SIG undefined FUN_14674219f(void)

longlong FUN_14674219f(void)

{
  if (DAT_14cc1f670 == 0) {
    FUN_14073dd9a(&DAT_14cc1f670,&PTR_LAB_14bd5bb68);
  }
  return DAT_14cc1f670;
}



// FUNCTION 1467421ce FUN_1467421ce body=90 status=ok
// SIG undefined FUN_1467421ce(void)

void FUN_1467421ce(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd5c070;
  puVar1[0x15] = 0x3f80000000000000;
  puVar1[0x16] = 0;
  puVar1[0x17] = &DAT_3f8000003f800000;
  puVar1[0x18] = 0x3f0000003f000000;
  puVar1[0x19] = 0x3f8000003f000000;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  return;
}



// FUNCTION 14674222d FUN_14674222d body=47 status=ok
// SIG undefined FUN_14674222d(void)

longlong FUN_14674222d(void)

{
  if (DAT_14cc1f688 == 0) {
    FUN_14073dd9a(&DAT_14cc1f688,&PTR_LAB_14bd5c028);
  }
  return DAT_14cc1f688;
}



// FUNCTION 14674225c FUN_14674225c body=47 status=ok
// SIG undefined FUN_14674225c(void)

longlong FUN_14674225c(void)

{
  if (DAT_14cc1f6a8 == 0) {
    FUN_14073dd9a(&DAT_14cc1f6a8,&PTR_LAB_14bd5c5b0);
  }
  return DAT_14cc1f6a8;
}


