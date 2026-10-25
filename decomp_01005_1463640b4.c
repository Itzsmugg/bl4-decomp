// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463640b4 FUN_1463640b4 body=40 status=ok
// SIG undefined FUN_1463640b4(void)

undefined8 FUN_1463640b4(undefined8 param_1,int param_2)

{
  FUN_14582bde2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463640dc FUN_1463640dc body=40 status=ok
// SIG undefined FUN_1463640dc(void)

undefined8 FUN_1463640dc(undefined8 param_1,int param_2)

{
  FUN_14582bde2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146364104 FUN_146364104 body=40 status=ok
// SIG undefined FUN_146364104(void)

undefined8 FUN_146364104(undefined8 param_1,int param_2)

{
  FUN_14582bde2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636412c FUN_14636412c body=40 status=ok
// SIG undefined FUN_14636412c(void)

undefined8 FUN_14636412c(undefined8 param_1,int param_2)

{
  FUN_145ce034c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146364154 FUN_146364154 body=40 status=ok
// SIG undefined FUN_146364154(void)

undefined8 FUN_146364154(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636417c FUN_14636417c body=40 status=ok
// SIG undefined FUN_14636417c(void)

undefined8 FUN_14636417c(undefined8 param_1,int param_2)

{
  FUN_1411a8230();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463641a4 FUN_1463641a4 body=40 status=ok
// SIG undefined FUN_1463641a4(void)

undefined8 FUN_1463641a4(undefined8 param_1,int param_2)

{
  FUN_1411a8230();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463641cc FUN_1463641cc body=40 status=ok
// SIG undefined FUN_1463641cc(void)

undefined8 FUN_1463641cc(undefined8 param_1,int param_2)

{
  FUN_1411a8230();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463641f4 FUN_1463641f4 body=40 status=ok
// SIG undefined FUN_1463641f4(void)

undefined8 FUN_1463641f4(undefined8 param_1,int param_2)

{
  FUN_145af9c14();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636421c FUN_14636421c body=29 status=ok
// SIG undefined FUN_14636421c(void)

undefined8 FUN_14636421c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636423a FUN_14636423a body=29 status=ok
// SIG undefined FUN_14636423a(void)

undefined8 FUN_14636423a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146364258 FUN_146364258 body=29 status=ok
// SIG undefined FUN_146364258(void)

undefined8 FUN_146364258(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146364276 FUN_146364276 body=29 status=ok
// SIG undefined FUN_146364276(void)

undefined8 FUN_146364276(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146364294 FUN_146364294 body=29 status=ok
// SIG undefined FUN_146364294(void)

undefined8 FUN_146364294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463642b2 FUN_1463642b2 body=29 status=ok
// SIG undefined FUN_1463642b2(void)

undefined8 FUN_1463642b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463642d0 FUN_1463642d0 body=93 status=ok
// SIG undefined FUN_1463642d0(void)

void FUN_1463642d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a588740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14636432e FUN_14636432e body=252 status=ok
// SIG undefined FUN_14636432e(void)

void FUN_14636432e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
  }
  FUN_145a1edae(param_1 + 0x38,&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  lVar4 = param_1 + 0x28;
  cVar3 = FUN_145a1ee04(lVar4,param_2);
  if (cVar3 != '\0') {
    local_38 = *param_2;
    plVar2 = (longlong *)param_2[1];
    local_30 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      FUN_1477fcfe0(lVar4,&local_38);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      FUN_1477fcfe0(lVar4);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001463643bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14636442c FUN_14636442c body=192 status=ok
// SIG undefined FUN_14636442c(void)

void FUN_14636442c(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a588e10;
  puVar1[3] = &DAT_14cabc00c;
  puVar1[4] = FUN_145c7b756;
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



// FUNCTION 1463644ee FUN_1463644ee body=93 status=ok
// SIG undefined FUN_1463644ee(void)

void FUN_1463644ee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a588e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14636454c FUN_14636454c body=60 status=ok
// SIG undefined FUN_14636454c(void)

void FUN_14636454c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1411b1052(param_1 + 200,L"FMediaTicker",0,0,0xffffffffffffffff,0);
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  return;
}



// FUNCTION 146364588 FUN_146364588 body=324 status=ok
// SIG undefined FUN_146364588(void)

undefined8 * FUN_146364588(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)FUN_140f7b050();
  plVar1 = plVar3 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)plVar3[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = (int)plVar3[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar3;
  if ((iStack_4c != iVar5) || (uStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar4 = (longlong)iStack_6c * 0xa0;
      if ((((*(int *)(lVar2 + 0x48 + lVar4) == *param_3) &&
           (*(int *)(lVar2 + 0x4c + lVar4) == param_3[1])) &&
          (*(int *)(lVar2 + 0x50 + lVar4) == param_3[2])) &&
         (*(int *)(lVar2 + 0x54 + lVar4) == param_3[3])) {
        *param_2 = *(undefined8 *)(lVar2 + lVar4);
        goto LAB_146364692;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar5) ||
             local_88 != plVar3);
  }
  *param_2 = 0;
LAB_146364692:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463646cd FUN_1463646cd body=47 status=ok
// SIG undefined FUN_1463646cd(void)

longlong FUN_1463646cd(void)

{
  if (DAT_14cabc010 == 0) {
    FUN_1409ce572(&DAT_14cabc010,&PTR_FUN_14a588ff0);
  }
  return DAT_14cabc010;
}



// FUNCTION 1463646fc FUN_1463646fc body=47 status=ok
// SIG undefined FUN_1463646fc(void)

longlong FUN_1463646fc(void)

{
  if (DAT_14cabc028 == 0) {
    FUN_1409ce572(&DAT_14cabc028,&PTR_FUN_14a589060);
  }
  return DAT_14cabc028;
}



// FUNCTION 14636472b FUN_14636472b body=47 status=ok
// SIG undefined FUN_14636472b(void)

longlong FUN_14636472b(void)

{
  if (DAT_14cabc040 == 0) {
    FUN_1409ce572(&DAT_14cabc040,&PTR_FUN_14a5890e0);
  }
  return DAT_14cabc040;
}



// FUNCTION 14636475a FUN_14636475a body=47 status=ok
// SIG undefined FUN_14636475a(void)

longlong FUN_14636475a(void)

{
  if (DAT_14cabc058 == 0) {
    FUN_14086a14e(&DAT_14cabc058,&PTR_FUN_14a589350);
  }
  return DAT_14cabc058;
}



// FUNCTION 14636478a FUN_14636478a body=48 status=ok
// SIG undefined FUN_14636478a(void)

void FUN_14636478a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14a589c50;
  return;
}



// FUNCTION 1463647ba FUN_1463647ba body=55 status=ok
// SIG undefined FUN_1463647ba(void)

void FUN_1463647ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc078 == 0) {
    uVar1 = FUN_145a24c9b();
    DAT_14cabc078 = FUN_140002ddd(FUN_1463647f1,uVar1,L"MediaPlayerOptions");
  }
  return;
}



// FUNCTION 1463647f1 FUN_1463647f1 body=49 status=ok
// SIG undefined FUN_1463647f1(void)

longlong FUN_1463647f1(void)

{
  if (DAT_14cabc070 == 0) {
    FUN_14086a14e(&DAT_14cabc070,&PTR_FUN_14a5896e8);
  }
  return DAT_14cabc070;
}



// FUNCTION 146364822 FUN_146364822 body=48 status=ok
// SIG undefined FUN_146364822(void)

void FUN_146364822(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14a589dc0;
  return;
}



// FUNCTION 146364852 FUN_146364852 body=192 status=ok
// SIG undefined FUN_146364852(void)

void FUN_146364852(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a58a970;
  puVar1[3] = &DAT_14cabc0e4;
  puVar1[4] = FUN_14780b65a;
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



// FUNCTION 146364914 FUN_146364914 body=29 status=ok
// SIG undefined FUN_146364914(void)

undefined8 FUN_146364914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146364932 FUN_146364932 body=29 status=ok
// SIG undefined FUN_146364932(void)

undefined8 FUN_146364932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146364950 FUN_146364950 body=93 status=ok
// SIG undefined FUN_146364950(void)

void FUN_146364950(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a58a970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1463649ad FUN_1463649ad body=49 status=ok
// SIG undefined FUN_1463649ad(void)

longlong FUN_1463649ad(void)

{
  if (DAT_14cabc200 == 0) {
    FUN_14000fc22(&DAT_14cabc200,&PTR_FUN_14a58cd58);
  }
  return DAT_14cabc200;
}



// FUNCTION 1463649de FUN_1463649de body=47 status=ok
// SIG undefined FUN_1463649de(void)

longlong FUN_1463649de(void)

{
  if (DAT_14cabc208 == 0) {
    FUN_14000fc22(&DAT_14cabc208,&PTR_FUN_14a58ce08);
  }
  return DAT_14cabc208;
}



// FUNCTION 146364a0d FUN_146364a0d body=47 status=ok
// SIG undefined FUN_146364a0d(void)

longlong FUN_146364a0d(void)

{
  if (DAT_14cabc210 == 0) {
    FUN_14000fc22(&DAT_14cabc210,&PTR_FUN_14a58cec8);
  }
  return DAT_14cabc210;
}



// FUNCTION 146364a3c FUN_146364a3c body=35 status=ok
// SIG undefined FUN_146364a3c(void)

void FUN_146364a3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a58abc0;
  return;
}



// FUNCTION 146364a5f FUN_146364a5f body=47 status=ok
// SIG undefined FUN_146364a5f(void)

longlong FUN_146364a5f(void)

{
  if (DAT_14cabc108 == 0) {
    FUN_14073dd9a(&DAT_14cabc108,&PTR_LAB_14a58ab78);
  }
  return DAT_14cabc108;
}



// FUNCTION 146364a8e FUN_146364a8e body=47 status=ok
// SIG undefined FUN_146364a8e(void)

longlong FUN_146364a8e(void)

{
  if (DAT_14cabc118 == 0) {
    FUN_1409ce572(&DAT_14cabc118,&PTR_FUN_14a58aee0);
  }
  return DAT_14cabc118;
}



// FUNCTION 146364abd FUN_146364abd body=47 status=ok
// SIG undefined FUN_146364abd(void)

longlong FUN_146364abd(void)

{
  if (DAT_14cabc130 == 0) {
    FUN_1409ce572(&DAT_14cabc130,&PTR_FUN_14a58af70);
  }
  return DAT_14cabc130;
}



// FUNCTION 146364aec FUN_146364aec body=49 status=ok
// SIG undefined FUN_146364aec(void)

longlong FUN_146364aec(void)

{
  if (DAT_14cabc188 == 0) {
    FUN_14073dd9a(&DAT_14cabc188,&PTR_LAB_14a58b7a0);
  }
  return DAT_14cabc188;
}



// FUNCTION 146364b1d FUN_146364b1d body=47 status=ok
// SIG undefined FUN_146364b1d(void)

longlong FUN_146364b1d(void)

{
  if (DAT_14cabc148 == 0) {
    FUN_14000fc22(&DAT_14cabc148,&PTR_FUN_14a58aff0);
  }
  return DAT_14cabc148;
}



// FUNCTION 146364b4c FUN_146364b4c body=47 status=ok
// SIG undefined FUN_146364b4c(void)

longlong FUN_146364b4c(void)

{
  if (DAT_14cabc150 == 0) {
    FUN_14000fc22(&DAT_14cabc150,&PTR_FUN_14a58b070);
  }
  return DAT_14cabc150;
}



// FUNCTION 146364b7b FUN_146364b7b body=47 status=ok
// SIG undefined FUN_146364b7b(void)

longlong FUN_146364b7b(void)

{
  if (DAT_14cabc158 == 0) {
    FUN_14000fc22(&DAT_14cabc158,&PTR_FUN_14a58b108);
  }
  return DAT_14cabc158;
}



// FUNCTION 146364baa FUN_146364baa body=47 status=ok
// SIG undefined FUN_146364baa(void)

longlong FUN_146364baa(void)

{
  if (DAT_14cabc160 == 0) {
    FUN_14000fc22(&DAT_14cabc160,&PTR_FUN_14a58b1a0);
  }
  return DAT_14cabc160;
}



// FUNCTION 146364bd9 FUN_146364bd9 body=47 status=ok
// SIG undefined FUN_146364bd9(void)

longlong FUN_146364bd9(void)

{
  if (DAT_14cabc168 == 0) {
    FUN_14000fc22(&DAT_14cabc168,&PTR_FUN_14a58b220);
  }
  return DAT_14cabc168;
}



// FUNCTION 146364c08 FUN_146364c08 body=47 status=ok
// SIG undefined FUN_146364c08(void)

longlong FUN_146364c08(void)

{
  if (DAT_14cabc170 == 0) {
    FUN_14000fc22(&DAT_14cabc170,&PTR_FUN_14a58b2b8);
  }
  return DAT_14cabc170;
}



// FUNCTION 146364c37 FUN_146364c37 body=47 status=ok
// SIG undefined FUN_146364c37(void)

longlong FUN_146364c37(void)

{
  if (DAT_14cabc178 == 0) {
    FUN_14000fc22(&DAT_14cabc178,&PTR_FUN_14a58b308);
  }
  return DAT_14cabc178;
}



// FUNCTION 146364c66 FUN_146364c66 body=34 status=ok
// SIG undefined FUN_146364c66(void)

void FUN_146364c66(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145869788();
  FUN_14069c8d6(uVar1,&PTR_s_GetAspectRatio_14a58b350,7);
  return;
}



// FUNCTION 146364c93 FUN_146364c93 body=93 status=ok
// SIG undefined FUN_146364c93(void)

void FUN_146364c93(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14a58bd20;
  puVar1[5] = &PTR_LAB_14a58bfd0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 146364cf0 FUN_146364cf0 body=49 status=ok
// SIG undefined FUN_146364cf0(void)

longlong FUN_146364cf0(void)

{
  if (DAT_14cabc6c8 == 0) {
    FUN_14073dd9a(&DAT_14cabc6c8,&PTR_LAB_14a595c80);
  }
  return DAT_14cabc6c8;
}



// FUNCTION 146364d21 FUN_146364d21 body=49 status=ok
// SIG undefined FUN_146364d21(void)

longlong FUN_146364d21(void)

{
  if (DAT_14cabc1a0 == 0) {
    FUN_14073dd9a(&DAT_14cabc1a0,&PTR_LAB_14a58bcd8);
  }
  return DAT_14cabc1a0;
}



// FUNCTION 146364d52 FUN_146364d52 body=47 status=ok
// SIG undefined FUN_146364d52(void)

longlong FUN_146364d52(void)

{
  if (DAT_14cabc1c0 == 0) {
    FUN_14073dd9a(&DAT_14cabc1c0,&PTR_LAB_14a58c1f0);
  }
  return DAT_14cabc1c0;
}



// FUNCTION 146364d81 FUN_146364d81 body=47 status=ok
// SIG undefined FUN_146364d81(void)

longlong FUN_146364d81(void)

{
  if (DAT_14cabc1b0 == 0) {
    FUN_14000fc22(&DAT_14cabc1b0,&PTR_FUN_14a58c0a8);
  }
  return DAT_14cabc1b0;
}



// FUNCTION 146364db0 FUN_146364db0 body=34 status=ok
// SIG undefined FUN_146364db0(void)

void FUN_146364db0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a6a890();
  FUN_14069c8d6(uVar1,&PTR_s_SetFilePath_14a58c0f0,1);
  return;
}



// FUNCTION 146364dd2 FUN_146364dd2 body=47 status=ok
// SIG undefined FUN_146364dd2(void)

longlong FUN_146364dd2(void)

{
  if (DAT_14cabc1f0 == 0) {
    FUN_14073dd9a(&DAT_14cabc1f0,&PTR_LAB_14a58c7b0);
  }
  return DAT_14cabc1f0;
}



// FUNCTION 146364e01 FUN_146364e01 body=47 status=ok
// SIG undefined FUN_146364e01(void)

longlong FUN_146364e01(void)

{
  if (DAT_14cabc1d8 == 0) {
    FUN_14000fc22(&DAT_14cabc1d8,&PTR_FUN_14a58c5b0);
  }
  return DAT_14cabc1d8;
}



// FUNCTION 146364e30 FUN_146364e30 body=47 status=ok
// SIG undefined FUN_146364e30(void)

longlong FUN_146364e30(void)

{
  if (DAT_14cabc1e0 == 0) {
    FUN_14000fc22(&DAT_14cabc1e0,&PTR_FUN_14a58c648);
  }
  return DAT_14cabc1e0;
}



// FUNCTION 146364e60 FUN_146364e60 body=34 status=ok
// SIG undefined FUN_146364e60(void)

void FUN_146364e60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458f0cbc();
  FUN_14069c8d6(uVar1,&PTR_s_GetMediaPlayer_14a58c690,2);
  return;
}



// FUNCTION 146364e87 FUN_146364e87 body=49 status=ok
// SIG undefined FUN_146364e87(void)

longlong FUN_146364e87(void)

{
  if (DAT_14cabc218 == 0) {
    FUN_1409ce572(&DAT_14cabc218,&PTR_FUN_14a58cf90);
  }
  return DAT_14cabc218;
}



// FUNCTION 146364eb8 FUN_146364eb8 body=47 status=ok
// SIG undefined FUN_146364eb8(void)

longlong FUN_146364eb8(void)

{
  if (DAT_14cabc230 == 0) {
    FUN_1409ce572(&DAT_14cabc230,&PTR_FUN_14a58d000);
  }
  return DAT_14cabc230;
}



// FUNCTION 146364ee7 FUN_146364ee7 body=39 status=ok
// SIG undefined FUN_146364ee7(void)

void FUN_146364ee7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14a58d150;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146364f13 FUN_146364f13 body=47 status=ok
// SIG undefined FUN_146364f13(void)

longlong FUN_146364f13(void)

{
  if (DAT_14cabc250 == 0) {
    FUN_14073dd9a(&DAT_14cabc250,&PTR_LAB_14a58d108);
  }
  return DAT_14cabc250;
}



// FUNCTION 146364f42 FUN_146364f42 body=47 status=ok
// SIG undefined FUN_146364f42(void)

longlong FUN_146364f42(void)

{
  if (DAT_14cabc260 == 0) {
    FUN_14086a14e(&DAT_14cabc260,&PTR_FUN_14a58d5c0);
  }
  return DAT_14cabc260;
}



// FUNCTION 146364f72 FUN_146364f72 body=48 status=ok
// SIG undefined FUN_146364f72(void)

void FUN_146364f72(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14a597e50;
  return;
}



// FUNCTION 146364fa2 FUN_146364fa2 body=55 status=ok
// SIG undefined FUN_146364fa2(void)

void FUN_146364fa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc280 == 0) {
    uVar1 = FUN_1412da4c6();
    DAT_14cabc280 = FUN_140002ddd(FUN_146364fd9,uVar1,L"MediaMetadataItemsBPT");
  }
  return;
}



// FUNCTION 146364fd9 FUN_146364fd9 body=47 status=ok
// SIG undefined FUN_146364fd9(void)

longlong FUN_146364fd9(void)

{
  if (DAT_14cabc278 == 0) {
    FUN_14086a14e(&DAT_14cabc278,&PTR_FUN_14a58d6c8);
  }
  return DAT_14cabc278;
}



// FUNCTION 146365008 FUN_146365008 body=48 status=ok
// SIG undefined FUN_146365008(void)

void FUN_146365008(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a597fb0;
  return;
}



// FUNCTION 146365038 FUN_146365038 body=47 status=ok
// SIG undefined FUN_146365038(void)

longlong FUN_146365038(void)

{
  if (DAT_14cabc290 == 0) {
    FUN_14000fc22(&DAT_14cabc290,&PTR_FUN_14a58d748);
  }
  return DAT_14cabc290;
}



// FUNCTION 146365067 FUN_146365067 body=47 status=ok
// SIG undefined FUN_146365067(void)

longlong FUN_146365067(void)

{
  if (DAT_14cabc298 == 0) {
    FUN_14000fc22(&DAT_14cabc298,&PTR_FUN_14a58d840);
  }
  return DAT_14cabc298;
}



// FUNCTION 146365096 FUN_146365096 body=47 status=ok
// SIG undefined FUN_146365096(void)

longlong FUN_146365096(void)

{
  if (DAT_14cabc2a0 == 0) {
    FUN_14000fc22(&DAT_14cabc2a0,&PTR_FUN_14a58d920);
  }
  return DAT_14cabc2a0;
}



// FUNCTION 1463650c5 FUN_1463650c5 body=47 status=ok
// SIG undefined FUN_1463650c5(void)

longlong FUN_1463650c5(void)

{
  if (DAT_14cabc2a8 == 0) {
    FUN_14000fc22(&DAT_14cabc2a8,&PTR_FUN_14a58d960);
  }
  return DAT_14cabc2a8;
}



// FUNCTION 1463650f4 FUN_1463650f4 body=47 status=ok
// SIG undefined FUN_1463650f4(void)

longlong FUN_1463650f4(void)

{
  if (DAT_14cabc2b0 == 0) {
    FUN_14000fc22(&DAT_14cabc2b0,&PTR_FUN_14a58da90);
  }
  return DAT_14cabc2b0;
}



// FUNCTION 146365123 FUN_146365123 body=47 status=ok
// SIG undefined FUN_146365123(void)

longlong FUN_146365123(void)

{
  if (DAT_14cabc2b8 == 0) {
    FUN_14000fc22(&DAT_14cabc2b8,&PTR_FUN_14a58dbb0);
  }
  return DAT_14cabc2b8;
}



// FUNCTION 146365152 FUN_146365152 body=47 status=ok
// SIG undefined FUN_146365152(void)

longlong FUN_146365152(void)

{
  if (DAT_14cabc2c0 == 0) {
    FUN_14000fc22(&DAT_14cabc2c0,&PTR_FUN_14a58dcd0);
  }
  return DAT_14cabc2c0;
}



// FUNCTION 146365181 FUN_146365181 body=47 status=ok
// SIG undefined FUN_146365181(void)

longlong FUN_146365181(void)

{
  if (DAT_14cabc2c8 == 0) {
    FUN_14000fc22(&DAT_14cabc2c8,&PTR_FUN_14a58dd68);
  }
  return DAT_14cabc2c8;
}



// FUNCTION 1463651b0 FUN_1463651b0 body=47 status=ok
// SIG undefined FUN_1463651b0(void)

longlong FUN_1463651b0(void)

{
  if (DAT_14cabc2d0 == 0) {
    FUN_14000fc22(&DAT_14cabc2d0,&PTR_FUN_14a58de00);
  }
  return DAT_14cabc2d0;
}



// FUNCTION 1463651df FUN_1463651df body=47 status=ok
// SIG undefined FUN_1463651df(void)

longlong FUN_1463651df(void)

{
  if (DAT_14cabc2d8 == 0) {
    FUN_14000fc22(&DAT_14cabc2d8,&PTR_FUN_14a58dea0);
  }
  return DAT_14cabc2d8;
}



// FUNCTION 14636520e FUN_14636520e body=47 status=ok
// SIG undefined FUN_14636520e(void)

longlong FUN_14636520e(void)

{
  if (DAT_14cabc2e0 == 0) {
    FUN_14000fc22(&DAT_14cabc2e0,&PTR_FUN_14a58df28);
  }
  return DAT_14cabc2e0;
}



// FUNCTION 14636523d FUN_14636523d body=47 status=ok
// SIG undefined FUN_14636523d(void)

longlong FUN_14636523d(void)

{
  if (DAT_14cabc2e8 == 0) {
    FUN_14000fc22(&DAT_14cabc2e8,&PTR_FUN_14a58dfa8);
  }
  return DAT_14cabc2e8;
}



// FUNCTION 14636526c FUN_14636526c body=47 status=ok
// SIG undefined FUN_14636526c(void)

longlong FUN_14636526c(void)

{
  if (DAT_14cabc2f0 == 0) {
    FUN_14000fc22(&DAT_14cabc2f0,&PTR_FUN_14a58e0d0);
  }
  return DAT_14cabc2f0;
}



// FUNCTION 14636529b FUN_14636529b body=47 status=ok
// SIG undefined FUN_14636529b(void)

longlong FUN_14636529b(void)

{
  if (DAT_14cabc2f8 == 0) {
    FUN_14000fc22(&DAT_14cabc2f8,&PTR_FUN_14a58e160);
  }
  return DAT_14cabc2f8;
}



// FUNCTION 1463652ca FUN_1463652ca body=47 status=ok
// SIG undefined FUN_1463652ca(void)

longlong FUN_1463652ca(void)

{
  if (DAT_14cabc300 == 0) {
    FUN_14000fc22(&DAT_14cabc300,&PTR_FUN_14a58e2c8);
  }
  return DAT_14cabc300;
}



// FUNCTION 1463652f9 FUN_1463652f9 body=47 status=ok
// SIG undefined FUN_1463652f9(void)

longlong FUN_1463652f9(void)

{
  if (DAT_14cabc308 == 0) {
    FUN_14000fc22(&DAT_14cabc308,&PTR_FUN_14a58e3e8);
  }
  return DAT_14cabc308;
}



// FUNCTION 146365328 FUN_146365328 body=47 status=ok
// SIG undefined FUN_146365328(void)

longlong FUN_146365328(void)

{
  if (DAT_14cabc310 == 0) {
    FUN_14000fc22(&DAT_14cabc310,&PTR_FUN_14a58e530);
  }
  return DAT_14cabc310;
}



// FUNCTION 146365357 FUN_146365357 body=47 status=ok
// SIG undefined FUN_146365357(void)

longlong FUN_146365357(void)

{
  if (DAT_14cabc318 == 0) {
    FUN_14000fc22(&DAT_14cabc318,&PTR_FUN_14a58e5c0);
  }
  return DAT_14cabc318;
}



// FUNCTION 146365386 FUN_146365386 body=47 status=ok
// SIG undefined FUN_146365386(void)

longlong FUN_146365386(void)

{
  if (DAT_14cabc320 == 0) {
    FUN_14000fc22(&DAT_14cabc320,&PTR_FUN_14a58e658);
  }
  return DAT_14cabc320;
}



// FUNCTION 1463653b5 FUN_1463653b5 body=47 status=ok
// SIG undefined FUN_1463653b5(void)

longlong FUN_1463653b5(void)

{
  if (DAT_14cabc328 == 0) {
    FUN_14000fc22(&DAT_14cabc328,&PTR_FUN_14a58e6f0);
  }
  return DAT_14cabc328;
}



// FUNCTION 1463653e4 FUN_1463653e4 body=47 status=ok
// SIG undefined FUN_1463653e4(void)

longlong FUN_1463653e4(void)

{
  if (DAT_14cabc330 == 0) {
    FUN_14000fc22(&DAT_14cabc330,&PTR_FUN_14a58e770);
  }
  return DAT_14cabc330;
}



// FUNCTION 146365413 FUN_146365413 body=47 status=ok
// SIG undefined FUN_146365413(void)

longlong FUN_146365413(void)

{
  if (DAT_14cabc338 == 0) {
    FUN_14000fc22(&DAT_14cabc338,&PTR_FUN_14a58e8a0);
  }
  return DAT_14cabc338;
}



// FUNCTION 146365442 FUN_146365442 body=47 status=ok
// SIG undefined FUN_146365442(void)

longlong FUN_146365442(void)

{
  if (DAT_14cabc340 == 0) {
    FUN_14000fc22(&DAT_14cabc340,&PTR_FUN_14a58e9e0);
  }
  return DAT_14cabc340;
}



// FUNCTION 146365471 FUN_146365471 body=47 status=ok
// SIG undefined FUN_146365471(void)

longlong FUN_146365471(void)

{
  if (DAT_14cabc348 == 0) {
    FUN_14000fc22(&DAT_14cabc348,&PTR_FUN_14a58ea68);
  }
  return DAT_14cabc348;
}



// FUNCTION 1463654a0 FUN_1463654a0 body=47 status=ok
// SIG undefined FUN_1463654a0(void)

longlong FUN_1463654a0(void)

{
  if (DAT_14cabc350 == 0) {
    FUN_14000fc22(&DAT_14cabc350,&PTR_FUN_14a58eb00);
  }
  return DAT_14cabc350;
}



// FUNCTION 1463654cf FUN_1463654cf body=47 status=ok
// SIG undefined FUN_1463654cf(void)

longlong FUN_1463654cf(void)

{
  if (DAT_14cabc358 == 0) {
    FUN_14000fc22(&DAT_14cabc358,&PTR_FUN_14a58eb98);
  }
  return DAT_14cabc358;
}



// FUNCTION 1463654fe FUN_1463654fe body=47 status=ok
// SIG undefined FUN_1463654fe(void)

longlong FUN_1463654fe(void)

{
  if (DAT_14cabc360 == 0) {
    FUN_14000fc22(&DAT_14cabc360,&PTR_FUN_14a58ed08);
  }
  return DAT_14cabc360;
}



// FUNCTION 14636552d FUN_14636552d body=47 status=ok
// SIG undefined FUN_14636552d(void)

longlong FUN_14636552d(void)

{
  if (DAT_14cabc368 == 0) {
    FUN_14000fc22(&DAT_14cabc368,&PTR_FUN_14a58ee70);
  }
  return DAT_14cabc368;
}



// FUNCTION 14636555c FUN_14636555c body=47 status=ok
// SIG undefined FUN_14636555c(void)

longlong FUN_14636555c(void)

{
  if (DAT_14cabc370 == 0) {
    FUN_14000fc22(&DAT_14cabc370,&PTR_FUN_14a58efd8);
  }
  return DAT_14cabc370;
}



// FUNCTION 14636558b FUN_14636558b body=47 status=ok
// SIG undefined FUN_14636558b(void)

longlong FUN_14636558b(void)

{
  if (DAT_14cabc378 == 0) {
    FUN_14000fc22(&DAT_14cabc378,&PTR_FUN_14a58f058);
  }
  return DAT_14cabc378;
}



// FUNCTION 1463655ba FUN_1463655ba body=47 status=ok
// SIG undefined FUN_1463655ba(void)

longlong FUN_1463655ba(void)

{
  if (DAT_14cabc380 == 0) {
    FUN_14000fc22(&DAT_14cabc380,&PTR_FUN_14a58f0d8);
  }
  return DAT_14cabc380;
}



// FUNCTION 1463655e9 FUN_1463655e9 body=47 status=ok
// SIG undefined FUN_1463655e9(void)

longlong FUN_1463655e9(void)

{
  if (DAT_14cabc388 == 0) {
    FUN_14000fc22(&DAT_14cabc388,&PTR_FUN_14a58f1f8);
  }
  return DAT_14cabc388;
}



// FUNCTION 146365618 FUN_146365618 body=47 status=ok
// SIG undefined FUN_146365618(void)

longlong FUN_146365618(void)

{
  if (DAT_14cabc390 == 0) {
    FUN_14000fc22(&DAT_14cabc390,&PTR_FUN_14a58f320);
  }
  return DAT_14cabc390;
}



// FUNCTION 146365647 FUN_146365647 body=47 status=ok
// SIG undefined FUN_146365647(void)

longlong FUN_146365647(void)

{
  if (DAT_14cabc398 == 0) {
    FUN_14000fc22(&DAT_14cabc398,&PTR_FUN_14a58f440);
  }
  return DAT_14cabc398;
}



// FUNCTION 146365676 FUN_146365676 body=47 status=ok
// SIG undefined FUN_146365676(void)

longlong FUN_146365676(void)

{
  if (DAT_14cabc3a0 == 0) {
    FUN_14000fc22(&DAT_14cabc3a0,&PTR_FUN_14a58f560);
  }
  return DAT_14cabc3a0;
}



// FUNCTION 1463656a5 FUN_1463656a5 body=47 status=ok
// SIG undefined FUN_1463656a5(void)

longlong FUN_1463656a5(void)

{
  if (DAT_14cabc3a8 == 0) {
    FUN_14000fc22(&DAT_14cabc3a8,&PTR_FUN_14a58f680);
  }
  return DAT_14cabc3a8;
}



// FUNCTION 1463656d4 FUN_1463656d4 body=47 status=ok
// SIG undefined FUN_1463656d4(void)

longlong FUN_1463656d4(void)

{
  if (DAT_14cabc3b0 == 0) {
    FUN_14000fc22(&DAT_14cabc3b0,&PTR_FUN_14a58f708);
  }
  return DAT_14cabc3b0;
}



// FUNCTION 146365703 FUN_146365703 body=47 status=ok
// SIG undefined FUN_146365703(void)

longlong FUN_146365703(void)

{
  if (DAT_14cabc3b8 == 0) {
    FUN_14000fc22(&DAT_14cabc3b8,&PTR_FUN_14a58f790);
  }
  return DAT_14cabc3b8;
}



// FUNCTION 146365732 FUN_146365732 body=47 status=ok
// SIG undefined FUN_146365732(void)

longlong FUN_146365732(void)

{
  if (DAT_14cabc3c0 == 0) {
    FUN_14000fc22(&DAT_14cabc3c0,&PTR_FUN_14a58f828);
  }
  return DAT_14cabc3c0;
}



// FUNCTION 146365761 FUN_146365761 body=47 status=ok
// SIG undefined FUN_146365761(void)

longlong FUN_146365761(void)

{
  if (DAT_14cabc3c8 == 0) {
    FUN_14000fc22(&DAT_14cabc3c8,&PTR_FUN_14a58f8c0);
  }
  return DAT_14cabc3c8;
}



// FUNCTION 146365790 FUN_146365790 body=47 status=ok
// SIG undefined FUN_146365790(void)

longlong FUN_146365790(void)

{
  if (DAT_14cabc3d0 == 0) {
    FUN_14000fc22(&DAT_14cabc3d0,&PTR_FUN_14a58f958);
  }
  return DAT_14cabc3d0;
}



// FUNCTION 1463657bf FUN_1463657bf body=47 status=ok
// SIG undefined FUN_1463657bf(void)

longlong FUN_1463657bf(void)

{
  if (DAT_14cabc3d8 == 0) {
    FUN_14000fc22(&DAT_14cabc3d8,&PTR_FUN_14a58f9e0);
  }
  return DAT_14cabc3d8;
}



// FUNCTION 1463657ee FUN_1463657ee body=47 status=ok
// SIG undefined FUN_1463657ee(void)

longlong FUN_1463657ee(void)

{
  if (DAT_14cabc3e0 == 0) {
    FUN_14000fc22(&DAT_14cabc3e0,&PTR_FUN_14a58fa68);
  }
  return DAT_14cabc3e0;
}



// FUNCTION 14636581d FUN_14636581d body=47 status=ok
// SIG undefined FUN_14636581d(void)

longlong FUN_14636581d(void)

{
  if (DAT_14cabc3e8 == 0) {
    FUN_14000fc22(&DAT_14cabc3e8,&PTR_FUN_14a58faf0);
  }
  return DAT_14cabc3e8;
}



// FUNCTION 14636584c FUN_14636584c body=47 status=ok
// SIG undefined FUN_14636584c(void)

longlong FUN_14636584c(void)

{
  if (DAT_14cabc3f0 == 0) {
    FUN_14000fc22(&DAT_14cabc3f0,&PTR_FUN_14a58fb88);
  }
  return DAT_14cabc3f0;
}



// FUNCTION 14636587b FUN_14636587b body=47 status=ok
// SIG undefined FUN_14636587b(void)

longlong FUN_14636587b(void)

{
  if (DAT_14cabc3f8 == 0) {
    FUN_14000fc22(&DAT_14cabc3f8,&PTR_FUN_14a58fc18);
  }
  return DAT_14cabc3f8;
}



// FUNCTION 1463658aa FUN_1463658aa body=47 status=ok
// SIG undefined FUN_1463658aa(void)

longlong FUN_1463658aa(void)

{
  if (DAT_14cabc400 == 0) {
    FUN_14000fc22(&DAT_14cabc400,&PTR_FUN_14a58fca0);
  }
  return DAT_14cabc400;
}



// FUNCTION 1463658d9 FUN_1463658d9 body=47 status=ok
// SIG undefined FUN_1463658d9(void)

longlong FUN_1463658d9(void)

{
  if (DAT_14cabc408 == 0) {
    FUN_14000fc22(&DAT_14cabc408,&PTR_FUN_14a58fd80);
  }
  return DAT_14cabc408;
}



// FUNCTION 146365908 FUN_146365908 body=47 status=ok
// SIG undefined FUN_146365908(void)

longlong FUN_146365908(void)

{
  if (DAT_14cabc410 == 0) {
    FUN_14000fc22(&DAT_14cabc410,&PTR_FUN_14a58fe70);
  }
  return DAT_14cabc410;
}



// FUNCTION 146365937 FUN_146365937 body=47 status=ok
// SIG undefined FUN_146365937(void)

longlong FUN_146365937(void)

{
  if (DAT_14cabc418 == 0) {
    FUN_14000fc22(&DAT_14cabc418,&PTR_FUN_14a58ffa0);
  }
  return DAT_14cabc418;
}



// FUNCTION 146365966 FUN_146365966 body=47 status=ok
// SIG undefined FUN_146365966(void)

longlong FUN_146365966(void)

{
  if (DAT_14cabc420 == 0) {
    FUN_14000fc22(&DAT_14cabc420,&PTR_FUN_14a590080);
  }
  return DAT_14cabc420;
}



// FUNCTION 146365995 FUN_146365995 body=47 status=ok
// SIG undefined FUN_146365995(void)

longlong FUN_146365995(void)

{
  if (DAT_14cabc428 == 0) {
    FUN_14000fc22(&DAT_14cabc428,&PTR_FUN_14a590240);
  }
  return DAT_14cabc428;
}



// FUNCTION 1463659c4 FUN_1463659c4 body=47 status=ok
// SIG undefined FUN_1463659c4(void)

longlong FUN_1463659c4(void)

{
  if (DAT_14cabc430 == 0) {
    FUN_14000fc22(&DAT_14cabc430,&PTR_FUN_14a590370);
  }
  return DAT_14cabc430;
}



// FUNCTION 1463659f3 FUN_1463659f3 body=47 status=ok
// SIG undefined FUN_1463659f3(void)

longlong FUN_1463659f3(void)

{
  if (DAT_14cabc438 == 0) {
    FUN_14000fc22(&DAT_14cabc438,&PTR_FUN_14a590440);
  }
  return DAT_14cabc438;
}



// FUNCTION 146365a22 FUN_146365a22 body=47 status=ok
// SIG undefined FUN_146365a22(void)

longlong FUN_146365a22(void)

{
  if (DAT_14cabc440 == 0) {
    FUN_14000fc22(&DAT_14cabc440,&PTR_FUN_14a5904c8);
  }
  return DAT_14cabc440;
}



// FUNCTION 146365a51 FUN_146365a51 body=47 status=ok
// SIG undefined FUN_146365a51(void)

longlong FUN_146365a51(void)

{
  if (DAT_14cabc448 == 0) {
    FUN_14000fc22(&DAT_14cabc448,&PTR_FUN_14a590550);
  }
  return DAT_14cabc448;
}



// FUNCTION 146365a80 FUN_146365a80 body=47 status=ok
// SIG undefined FUN_146365a80(void)

longlong FUN_146365a80(void)

{
  if (DAT_14cabc450 == 0) {
    FUN_14000fc22(&DAT_14cabc450,&PTR_FUN_14a5905a0);
  }
  return DAT_14cabc450;
}



// FUNCTION 146365aaf FUN_146365aaf body=47 status=ok
// SIG undefined FUN_146365aaf(void)

longlong FUN_146365aaf(void)

{
  if (DAT_14cabc458 == 0) {
    FUN_14000fc22(&DAT_14cabc458,&PTR_FUN_14a590628);
  }
  return DAT_14cabc458;
}



// FUNCTION 146365ade FUN_146365ade body=47 status=ok
// SIG undefined FUN_146365ade(void)

longlong FUN_146365ade(void)

{
  if (DAT_14cabc460 == 0) {
    FUN_14000fc22(&DAT_14cabc460,&PTR_FUN_14a5906b8);
  }
  return DAT_14cabc460;
}



// FUNCTION 146365b0d FUN_146365b0d body=47 status=ok
// SIG undefined FUN_146365b0d(void)

longlong FUN_146365b0d(void)

{
  if (DAT_14cabc468 == 0) {
    FUN_14000fc22(&DAT_14cabc468,&PTR_FUN_14a590740);
  }
  return DAT_14cabc468;
}



// FUNCTION 146365b3c FUN_146365b3c body=47 status=ok
// SIG undefined FUN_146365b3c(void)

longlong FUN_146365b3c(void)

{
  if (DAT_14cabc470 == 0) {
    FUN_14000fc22(&DAT_14cabc470,&PTR_FUN_14a590810);
  }
  return DAT_14cabc470;
}



// FUNCTION 146365b6b FUN_146365b6b body=47 status=ok
// SIG undefined FUN_146365b6b(void)

longlong FUN_146365b6b(void)

{
  if (DAT_14cabc478 == 0) {
    FUN_14000fc22(&DAT_14cabc478,&PTR_FUN_14a590980);
  }
  return DAT_14cabc478;
}



// FUNCTION 146365b9a FUN_146365b9a body=47 status=ok
// SIG undefined FUN_146365b9a(void)

longlong FUN_146365b9a(void)

{
  if (DAT_14cabc480 == 0) {
    FUN_14000fc22(&DAT_14cabc480,&PTR_FUN_14a590a18);
  }
  return DAT_14cabc480;
}



// FUNCTION 146365bc9 FUN_146365bc9 body=47 status=ok
// SIG undefined FUN_146365bc9(void)

longlong FUN_146365bc9(void)

{
  if (DAT_14cabc488 == 0) {
    FUN_14000fc22(&DAT_14cabc488,&PTR_FUN_14a590ab0);
  }
  return DAT_14cabc488;
}



// FUNCTION 146365bf8 FUN_146365bf8 body=47 status=ok
// SIG undefined FUN_146365bf8(void)

longlong FUN_146365bf8(void)

{
  if (DAT_14cabc490 == 0) {
    FUN_14000fc22(&DAT_14cabc490,&PTR_FUN_14a590b80);
  }
  return DAT_14cabc490;
}



// FUNCTION 146365c27 FUN_146365c27 body=47 status=ok
// SIG undefined FUN_146365c27(void)

longlong FUN_146365c27(void)

{
  if (DAT_14cabc498 == 0) {
    FUN_14000fc22(&DAT_14cabc498,&PTR_FUN_14a590c18);
  }
  return DAT_14cabc498;
}



// FUNCTION 146365c56 FUN_146365c56 body=47 status=ok
// SIG undefined FUN_146365c56(void)

longlong FUN_146365c56(void)

{
  if (DAT_14cabc4a0 == 0) {
    FUN_14000fc22(&DAT_14cabc4a0,&PTR_FUN_14a590cf0);
  }
  return DAT_14cabc4a0;
}



// FUNCTION 146365c85 FUN_146365c85 body=47 status=ok
// SIG undefined FUN_146365c85(void)

longlong FUN_146365c85(void)

{
  if (DAT_14cabc4a8 == 0) {
    FUN_14000fc22(&DAT_14cabc4a8,&PTR_FUN_14a590de8);
  }
  return DAT_14cabc4a8;
}



// FUNCTION 146365cb4 FUN_146365cb4 body=47 status=ok
// SIG undefined FUN_146365cb4(void)

longlong FUN_146365cb4(void)

{
  if (DAT_14cabc4b0 == 0) {
    FUN_14000fc22(&DAT_14cabc4b0,&PTR_FUN_14a590eb0);
  }
  return DAT_14cabc4b0;
}



// FUNCTION 146365ce3 FUN_146365ce3 body=47 status=ok
// SIG undefined FUN_146365ce3(void)

longlong FUN_146365ce3(void)

{
  if (DAT_14cabc4b8 == 0) {
    FUN_14000fc22(&DAT_14cabc4b8,&PTR_FUN_14a590f58);
  }
  return DAT_14cabc4b8;
}



// FUNCTION 146365d12 FUN_146365d12 body=47 status=ok
// SIG undefined FUN_146365d12(void)

longlong FUN_146365d12(void)

{
  if (DAT_14cabc4c0 == 0) {
    FUN_14000fc22(&DAT_14cabc4c0,&PTR_FUN_14a591108);
  }
  return DAT_14cabc4c0;
}



// FUNCTION 146365d41 FUN_146365d41 body=47 status=ok
// SIG undefined FUN_146365d41(void)

longlong FUN_146365d41(void)

{
  if (DAT_14cabc4c8 == 0) {
    FUN_14000fc22(&DAT_14cabc4c8,&PTR_FUN_14a591268);
  }
  return DAT_14cabc4c8;
}



// FUNCTION 146365d70 FUN_146365d70 body=47 status=ok
// SIG undefined FUN_146365d70(void)

longlong FUN_146365d70(void)

{
  if (DAT_14cabc4d0 == 0) {
    FUN_14000fc22(&DAT_14cabc4d0,&PTR_FUN_14a591400);
  }
  return DAT_14cabc4d0;
}



// FUNCTION 146365d9f FUN_146365d9f body=47 status=ok
// SIG undefined FUN_146365d9f(void)

longlong FUN_146365d9f(void)

{
  if (DAT_14cabc4d8 == 0) {
    FUN_14000fc22(&DAT_14cabc4d8,&PTR_FUN_14a591518);
  }
  return DAT_14cabc4d8;
}



// FUNCTION 146365dce FUN_146365dce body=47 status=ok
// SIG undefined FUN_146365dce(void)

longlong FUN_146365dce(void)

{
  if (DAT_14cabc4e0 == 0) {
    FUN_14000fc22(&DAT_14cabc4e0,&PTR_FUN_14a5915c0);
  }
  return DAT_14cabc4e0;
}



// FUNCTION 146365dfd FUN_146365dfd body=47 status=ok
// SIG undefined FUN_146365dfd(void)

longlong FUN_146365dfd(void)

{
  if (DAT_14cabc4e8 == 0) {
    FUN_14000fc22(&DAT_14cabc4e8,&PTR_FUN_14a5916d8);
  }
  return DAT_14cabc4e8;
}



// FUNCTION 146365e2c FUN_146365e2c body=47 status=ok
// SIG undefined FUN_146365e2c(void)

longlong FUN_146365e2c(void)

{
  if (DAT_14cabc4f0 == 0) {
    FUN_14000fc22(&DAT_14cabc4f0,&PTR_FUN_14a591760);
  }
  return DAT_14cabc4f0;
}



// FUNCTION 146365e5b FUN_146365e5b body=47 status=ok
// SIG undefined FUN_146365e5b(void)

longlong FUN_146365e5b(void)

{
  if (DAT_14cabc4f8 == 0) {
    FUN_14000fc22(&DAT_14cabc4f8,&PTR_FUN_14a5917e8);
  }
  return DAT_14cabc4f8;
}



// FUNCTION 146365e8a FUN_146365e8a body=34 status=ok
// SIG undefined FUN_146365e8a(void)

void FUN_146365e8a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14117a870();
  FUN_14069c8d6(uVar1,&PTR_s_CanPause_14a591830,0x4e);
  return;
}



// FUNCTION 146365eb1 FUN_146365eb1 body=35 status=ok
// SIG undefined FUN_146365eb1(void)

void FUN_146365eb1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a592ee0;
  return;
}



// FUNCTION 146365ed4 FUN_146365ed4 body=47 status=ok
// SIG undefined FUN_146365ed4(void)

longlong FUN_146365ed4(void)

{
  if (DAT_14cabc558 == 0) {
    FUN_14073dd9a(&DAT_14cabc558,&PTR_LAB_14a592e98);
  }
  return DAT_14cabc558;
}



// FUNCTION 146365f03 FUN_146365f03 body=49 status=ok
// SIG undefined FUN_146365f03(void)

longlong FUN_146365f03(void)

{
  if (DAT_14cabc5d0 == 0) {
    FUN_14073dd9a(&DAT_14cabc5d0,&PTR_LAB_14a593e10);
  }
  return DAT_14cabc5d0;
}



// FUNCTION 146365f34 FUN_146365f34 body=47 status=ok
// SIG undefined FUN_146365f34(void)

longlong FUN_146365f34(void)

{
  if (DAT_14cabc568 == 0) {
    FUN_14000fc22(&DAT_14cabc568,&PTR_FUN_14a593240);
  }
  return DAT_14cabc568;
}



// FUNCTION 146365f63 FUN_146365f63 body=47 status=ok
// SIG undefined FUN_146365f63(void)

longlong FUN_146365f63(void)

{
  if (DAT_14cabc570 == 0) {
    FUN_14000fc22(&DAT_14cabc570,&PTR_FUN_14a593318);
  }
  return DAT_14cabc570;
}



// FUNCTION 146365f92 FUN_146365f92 body=47 status=ok
// SIG undefined FUN_146365f92(void)

longlong FUN_146365f92(void)

{
  if (DAT_14cabc578 == 0) {
    FUN_14000fc22(&DAT_14cabc578,&PTR_FUN_14a5933e8);
  }
  return DAT_14cabc578;
}



// FUNCTION 146365fc1 FUN_146365fc1 body=47 status=ok
// SIG undefined FUN_146365fc1(void)

longlong FUN_146365fc1(void)

{
  if (DAT_14cabc580 == 0) {
    FUN_14000fc22(&DAT_14cabc580,&PTR_FUN_14a5934b8);
  }
  return DAT_14cabc580;
}



// FUNCTION 146365ff0 FUN_146365ff0 body=47 status=ok
// SIG undefined FUN_146365ff0(void)

longlong FUN_146365ff0(void)

{
  if (DAT_14cabc588 == 0) {
    FUN_14000fc22(&DAT_14cabc588,&PTR_FUN_14a593598);
  }
  return DAT_14cabc588;
}



// FUNCTION 14636601f FUN_14636601f body=47 status=ok
// SIG undefined FUN_14636601f(void)

longlong FUN_14636601f(void)

{
  if (DAT_14cabc590 == 0) {
    FUN_14000fc22(&DAT_14cabc590,&PTR_FUN_14a593670);
  }
  return DAT_14cabc590;
}



// FUNCTION 14636604e FUN_14636604e body=47 status=ok
// SIG undefined FUN_14636604e(void)

longlong FUN_14636604e(void)

{
  if (DAT_14cabc598 == 0) {
    FUN_14000fc22(&DAT_14cabc598,&PTR_FUN_14a593750);
  }
  return DAT_14cabc598;
}



// FUNCTION 14636607d FUN_14636607d body=47 status=ok
// SIG undefined FUN_14636607d(void)

longlong FUN_14636607d(void)

{
  if (DAT_14cabc5a0 == 0) {
    FUN_14000fc22(&DAT_14cabc5a0,&PTR_FUN_14a593820);
  }
  return DAT_14cabc5a0;
}



// FUNCTION 1463660ac FUN_1463660ac body=47 status=ok
// SIG undefined FUN_1463660ac(void)

longlong FUN_1463660ac(void)

{
  if (DAT_14cabc5a8 == 0) {
    FUN_14000fc22(&DAT_14cabc5a8,&PTR_FUN_14a5938a0);
  }
  return DAT_14cabc5a8;
}



// FUNCTION 1463660db FUN_1463660db body=47 status=ok
// SIG undefined FUN_1463660db(void)

longlong FUN_1463660db(void)

{
  if (DAT_14cabc5b0 == 0) {
    FUN_14000fc22(&DAT_14cabc5b0,&PTR_FUN_14a593970);
  }
  return DAT_14cabc5b0;
}



// FUNCTION 14636610a FUN_14636610a body=47 status=ok
// SIG undefined FUN_14636610a(void)

longlong FUN_14636610a(void)

{
  if (DAT_14cabc5b8 == 0) {
    FUN_14000fc22(&DAT_14cabc5b8,&PTR_FUN_14a593a50);
  }
  return DAT_14cabc5b8;
}



// FUNCTION 146366139 FUN_146366139 body=47 status=ok
// SIG undefined FUN_146366139(void)

longlong FUN_146366139(void)

{
  if (DAT_14cabc5c0 == 0) {
    FUN_14000fc22(&DAT_14cabc5c0,&PTR_FUN_14a593b78);
  }
  return DAT_14cabc5c0;
}



// FUNCTION 146366168 FUN_146366168 body=34 status=ok
// SIG undefined FUN_146366168(void)

void FUN_146366168(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14589332a();
  FUN_14069c8d6(uVar1,&PTR_DAT_14a593bc0,0xc);
  return;
}



// FUNCTION 14636618f FUN_14636618f body=42 status=ok
// SIG undefined FUN_14636618f(void)

void FUN_14636618f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a593e50;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1463661b9 FUN_1463661b9 body=47 status=ok
// SIG undefined FUN_1463661b9(void)

longlong FUN_1463661b9(void)

{
  if (DAT_14cabc5e0 == 0) {
    FUN_1409ce572(&DAT_14cabc5e0,&PTR_FUN_14a594160);
  }
  return DAT_14cabc5e0;
}



// FUNCTION 1463661e8 FUN_1463661e8 body=47 status=ok
// SIG undefined FUN_1463661e8(void)

longlong FUN_1463661e8(void)

{
  if (DAT_14cabc5f8 == 0) {
    FUN_1409ce572(&DAT_14cabc5f8,&PTR_FUN_14a5941f0);
  }
  return DAT_14cabc5f8;
}



// FUNCTION 146366218 FUN_146366218 body=55 status=ok
// SIG undefined FUN_146366218(void)

void FUN_146366218(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc618 == 0) {
    uVar1 = FUN_1412da4c6();
    DAT_14cabc618 = FUN_140002ddd(FUN_14636624f,uVar1,L"MediaSoundComponentSpectralData");
  }
  return;
}



// FUNCTION 14636624f FUN_14636624f body=49 status=ok
// SIG undefined FUN_14636624f(void)

longlong FUN_14636624f(void)

{
  if (DAT_14cabc610 == 0) {
    FUN_14086a14e(&DAT_14cabc610,&PTR_FUN_14a594310);
  }
  return DAT_14cabc610;
}



// FUNCTION 146366280 FUN_146366280 body=48 status=ok
// SIG undefined FUN_146366280(void)

void FUN_146366280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a598360;
  return;
}



// FUNCTION 1463662b0 FUN_1463662b0 body=49 status=ok
// SIG undefined FUN_1463662b0(void)

longlong FUN_1463662b0(void)

{
  if (DAT_14cabc680 == 0) {
    FUN_14073dd9a(&DAT_14cabc680,&PTR_LAB_14a594f20);
  }
  return DAT_14cabc680;
}



// FUNCTION 1463662e1 FUN_1463662e1 body=47 status=ok
// SIG undefined FUN_1463662e1(void)

longlong FUN_1463662e1(void)

{
  if (DAT_14cabc628 == 0) {
    FUN_14000fc22(&DAT_14cabc628,&PTR_FUN_14a5943e0);
  }
  return DAT_14cabc628;
}



// FUNCTION 146366310 FUN_146366310 body=47 status=ok
// SIG undefined FUN_146366310(void)

longlong FUN_146366310(void)

{
  if (DAT_14cabc630 == 0) {
    FUN_14000fc22(&DAT_14cabc630,&PTR_FUN_14a594478);
  }
  return DAT_14cabc630;
}



// FUNCTION 14636633f FUN_14636633f body=47 status=ok
// SIG undefined FUN_14636633f(void)

longlong FUN_14636633f(void)

{
  if (DAT_14cabc638 == 0) {
    FUN_14000fc22(&DAT_14cabc638,&PTR_FUN_14a594500);
  }
  return DAT_14cabc638;
}



// FUNCTION 14636636e FUN_14636636e body=47 status=ok
// SIG undefined FUN_14636636e(void)

longlong FUN_14636636e(void)

{
  if (DAT_14cabc640 == 0) {
    FUN_14000fc22(&DAT_14cabc640,&PTR_FUN_14a5945f0);
  }
  return DAT_14cabc640;
}



// FUNCTION 14636639d FUN_14636639d body=47 status=ok
// SIG undefined FUN_14636639d(void)

longlong FUN_14636639d(void)

{
  if (DAT_14cabc648 == 0) {
    FUN_14000fc22(&DAT_14cabc648,&PTR_FUN_14a5946d0);
  }
  return DAT_14cabc648;
}



// FUNCTION 1463663cc FUN_1463663cc body=47 status=ok
// SIG undefined FUN_1463663cc(void)

longlong FUN_1463663cc(void)

{
  if (DAT_14cabc650 == 0) {
    FUN_14000fc22(&DAT_14cabc650,&PTR_FUN_14a594790);
  }
  return DAT_14cabc650;
}



// FUNCTION 1463663fb FUN_1463663fb body=47 status=ok
// SIG undefined FUN_1463663fb(void)

longlong FUN_1463663fb(void)

{
  if (DAT_14cabc658 == 0) {
    FUN_14000fc22(&DAT_14cabc658,&PTR_FUN_14a594858);
  }
  return DAT_14cabc658;
}



// FUNCTION 14636642a FUN_14636642a body=47 status=ok
// SIG undefined FUN_14636642a(void)

longlong FUN_14636642a(void)

{
  if (DAT_14cabc660 == 0) {
    FUN_14000fc22(&DAT_14cabc660,&PTR_FUN_14a594940);
  }
  return DAT_14cabc660;
}



// FUNCTION 146366459 FUN_146366459 body=47 status=ok
// SIG undefined FUN_146366459(void)

longlong FUN_146366459(void)

{
  if (DAT_14cabc668 == 0) {
    FUN_14000fc22(&DAT_14cabc668,&PTR_FUN_14a5949c8);
  }
  return DAT_14cabc668;
}



// FUNCTION 146366488 FUN_146366488 body=47 status=ok
// SIG undefined FUN_146366488(void)

longlong FUN_146366488(void)

{
  if (DAT_14cabc670 == 0) {
    FUN_14000fc22(&DAT_14cabc670,&PTR_FUN_14a594b60);
  }
  return DAT_14cabc670;
}



// FUNCTION 1463664b8 FUN_1463664b8 body=34 status=ok
// SIG undefined FUN_1463664b8(void)

void FUN_1463664b8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458d45e4();
  FUN_14069c8d6(uVar1,&PTR_s_BP_GetAttenuationSettingsToApply_14a594ba0,10);
  return;
}



// FUNCTION 1463664df FUN_1463664df body=47 status=ok
// SIG undefined FUN_1463664df(void)

longlong FUN_1463664df(void)

{
  if (DAT_14cabc690 == 0) {
    FUN_14000fc22(&DAT_14cabc690,&PTR_FUN_14a595730);
  }
  return DAT_14cabc690;
}



// FUNCTION 14636650e FUN_14636650e body=47 status=ok
// SIG undefined FUN_14636650e(void)

longlong FUN_14636650e(void)

{
  if (DAT_14cabc698 == 0) {
    FUN_14000fc22(&DAT_14cabc698,&PTR_FUN_14a595818);
  }
  return DAT_14cabc698;
}



// FUNCTION 14636653d FUN_14636653d body=47 status=ok
// SIG undefined FUN_14636653d(void)

longlong FUN_14636653d(void)

{
  if (DAT_14cabc6a0 == 0) {
    FUN_14000fc22(&DAT_14cabc6a0,&PTR_FUN_14a5958f8);
  }
  return DAT_14cabc6a0;
}



// FUNCTION 14636656c FUN_14636656c body=47 status=ok
// SIG undefined FUN_14636656c(void)

longlong FUN_14636656c(void)

{
  if (DAT_14cabc6a8 == 0) {
    FUN_14000fc22(&DAT_14cabc6a8,&PTR_FUN_14a5959d8);
  }
  return DAT_14cabc6a8;
}



// FUNCTION 14636659b FUN_14636659b body=47 status=ok
// SIG undefined FUN_14636659b(void)

longlong FUN_14636659b(void)

{
  if (DAT_14cabc6b0 == 0) {
    FUN_14000fc22(&DAT_14cabc6b0,&PTR_FUN_14a595ab8);
  }
  return DAT_14cabc6b0;
}



// FUNCTION 1463665ca FUN_1463665ca body=47 status=ok
// SIG undefined FUN_1463665ca(void)

longlong FUN_1463665ca(void)

{
  if (DAT_14cabc6b8 == 0) {
    FUN_14000fc22(&DAT_14cabc6b8,&PTR_FUN_14a595b40);
  }
  return DAT_14cabc6b8;
}



// FUNCTION 1463665fa FUN_1463665fa body=34 status=ok
// SIG undefined FUN_1463665fa(void)

void FUN_1463665fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141092b70();
  FUN_14069c8d6(uVar1,&PTR_s_GetUrl_14a595b80,6);
  return;
}



// FUNCTION 14636661c FUN_14636661c body=86 status=ok
// SIG undefined FUN_14636661c(void)

void FUN_14636661c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a595cc0;
  puVar1[5] = &PTR_LAB_14a595f70;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 146366678 FUN_146366678 body=55 status=ok
// SIG undefined FUN_146366678(void)

void FUN_146366678(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc738 == 0) {
    uVar1 = FUN_1412da4c6();
    DAT_14cabc738 = FUN_140002ddd(FUN_1463666af,uVar1,L"MediaSourceCacheSettings");
  }
  return;
}



// FUNCTION 1463666af FUN_1463666af body=49 status=ok
// SIG undefined FUN_1463666af(void)

longlong FUN_1463666af(void)

{
  if (DAT_14cabc730 == 0) {
    FUN_14086a14e(&DAT_14cabc730,&PTR_FUN_14a5960e0);
  }
  return DAT_14cabc730;
}



// FUNCTION 1463666e0 FUN_1463666e0 body=48 status=ok
// SIG undefined FUN_1463666e0(void)

void FUN_1463666e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a5984c0;
  return;
}



// FUNCTION 146366710 FUN_146366710 body=126 status=ok
// SIG undefined FUN_146366710(void)

void FUN_146366710(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140265b64();
  lVar1 = *(longlong *)(param_1 + 0x158);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_28 = 0;
  FUN_14485c47a(&local_28,lVar1);
  *(undefined8 *)(param_1 + 400) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14636678f FUN_14636678f body=47 status=ok
// SIG undefined FUN_14636678f(void)

longlong FUN_14636678f(void)

{
  if (DAT_14cabc758 == 0) {
    FUN_1409ce572(&DAT_14cabc758,&PTR_FUN_14a5961b0);
  }
  return DAT_14cabc758;
}



// FUNCTION 1463667be FUN_1463667be body=93 status=ok
// SIG undefined FUN_1463667be(void)

void FUN_1463667be(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14a5962c0;
  puVar1[5] = &PTR_FUN_14a596570;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 14636681b FUN_14636681b body=47 status=ok
// SIG undefined FUN_14636681b(void)

longlong FUN_14636681b(void)

{
  if (DAT_14cabc7e8 == 0) {
    FUN_14073dd9a(&DAT_14cabc7e8,&PTR_LAB_14a596278);
  }
  return DAT_14cabc7e8;
}



// FUNCTION 14636684a FUN_14636684a body=47 status=ok
// SIG undefined FUN_14636684a(void)

longlong FUN_14636684a(void)

{
  if (DAT_14cabc808 == 0) {
    FUN_14073dd9a(&DAT_14cabc808,&PTR_LAB_14a596678);
  }
  return DAT_14cabc808;
}



// FUNCTION 146366879 FUN_146366879 body=47 status=ok
// SIG undefined FUN_146366879(void)

longlong FUN_146366879(void)

{
  if (DAT_14cabc840 == 0) {
    FUN_14073dd9a(&DAT_14cabc840,&PTR_LAB_14a596ba8);
  }
  return DAT_14cabc840;
}



// FUNCTION 1463668a8 FUN_1463668a8 body=231 status=ok
// SIG undefined FUN_1463668a8(void)

void FUN_1463668a8(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14a598e30;
  local_28[3] = &DAT_14cabc850;
  local_28[4] = FUN_145d70d98;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146366990 FUN_146366990 body=47 status=ok
// SIG undefined FUN_146366990(void)

longlong FUN_146366990(void)

{
  if (DAT_14cabc858 == 0) {
    FUN_1409ce572(&DAT_14cabc858,&PTR_FUN_14a596fb0);
  }
  return DAT_14cabc858;
}



// FUNCTION 1463669bf FUN_1463669bf body=47 status=ok
// SIG undefined FUN_1463669bf(void)

longlong FUN_1463669bf(void)

{
  if (DAT_14cabc870 == 0) {
    FUN_1409ce572(&DAT_14cabc870,&PTR_FUN_14a597050);
  }
  return DAT_14cabc870;
}



// FUNCTION 1463669ee FUN_1463669ee body=47 status=ok
// SIG undefined FUN_1463669ee(void)

longlong FUN_1463669ee(void)

{
  if (DAT_14cabc888 == 0) {
    FUN_1409ce572(&DAT_14cabc888,&PTR_FUN_14a5970f0);
  }
  return DAT_14cabc888;
}



// FUNCTION 146366a1e FUN_146366a1e body=55 status=ok
// SIG undefined FUN_146366a1e(void)

void FUN_146366a1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc8a8 == 0) {
    uVar1 = FUN_1412da4c6();
    DAT_14cabc8a8 = FUN_140002ddd(FUN_146366a55,uVar1,L"MediaCaptureDevice");
  }
  return;
}



// FUNCTION 146366a55 FUN_146366a55 body=49 status=ok
// SIG undefined FUN_146366a55(void)

longlong FUN_146366a55(void)

{
  if (DAT_14cabc8a0 == 0) {
    FUN_14086a14e(&DAT_14cabc8a0,&PTR_FUN_14a5971e8);
  }
  return DAT_14cabc8a0;
}



// FUNCTION 146366a86 FUN_146366a86 body=48 status=ok
// SIG undefined FUN_146366a86(void)

void FUN_146366a86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a598a00;
  return;
}



// FUNCTION 146366ab6 FUN_146366ab6 body=49 status=ok
// SIG undefined FUN_146366ab6(void)

longlong FUN_146366ab6(void)

{
  if (DAT_14cabc8d8 == 0) {
    FUN_14073dd9a(&DAT_14cabc8d8,&PTR_LAB_14a597680);
  }
  return DAT_14cabc8d8;
}



// FUNCTION 146366ae7 FUN_146366ae7 body=47 status=ok
// SIG undefined FUN_146366ae7(void)

longlong FUN_146366ae7(void)

{
  if (DAT_14cabc8b8 == 0) {
    FUN_14000fc22(&DAT_14cabc8b8,&PTR_FUN_14a597318);
  }
  return DAT_14cabc8b8;
}



// FUNCTION 146366b16 FUN_146366b16 body=47 status=ok
// SIG undefined FUN_146366b16(void)

longlong FUN_146366b16(void)

{
  if (DAT_14cabc8c0 == 0) {
    FUN_14000fc22(&DAT_14cabc8c0,&PTR_FUN_14a597448);
  }
  return DAT_14cabc8c0;
}



// FUNCTION 146366b45 FUN_146366b45 body=47 status=ok
// SIG undefined FUN_146366b45(void)

longlong FUN_146366b45(void)

{
  if (DAT_14cabc8c8 == 0) {
    FUN_14000fc22(&DAT_14cabc8c8,&PTR_FUN_14a597578);
  }
  return DAT_14cabc8c8;
}



// FUNCTION 146366b74 FUN_146366b74 body=34 status=ok
// SIG undefined FUN_146366b74(void)

void FUN_146366b74(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a6a97c();
  FUN_14069c8d6(uVar1,&PTR_s_EnumerateAudioCaptureDevices_14a5975c0,3);
  return;
}



// FUNCTION 146366b96 FUN_146366b96 body=35 status=ok
// SIG undefined FUN_146366b96(void)

void FUN_146366b96(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5976c0;
  return;
}



// FUNCTION 146366bba FUN_146366bba body=40 status=ok
// SIG undefined FUN_146366bba(void)

undefined8 FUN_146366bba(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366be8 FUN_146366be8 body=40 status=ok
// SIG undefined FUN_146366be8(void)

undefined8 FUN_146366be8(undefined8 param_1,int param_2)

{
  FUN_145a3698e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366c10 FUN_146366c10 body=40 status=ok
// SIG undefined FUN_146366c10(void)

undefined8 FUN_146366c10(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366c38 FUN_146366c38 body=40 status=ok
// SIG undefined FUN_146366c38(void)

undefined8 FUN_146366c38(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366c60 FUN_146366c60 body=40 status=ok
// SIG undefined FUN_146366c60(void)

undefined8 FUN_146366c60(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366c88 FUN_146366c88 body=69 status=ok
// SIG undefined FUN_146366c88(void)

undefined8 * FUN_146366c88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a593e50;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366cce FUN_146366cce body=40 status=ok
// SIG undefined FUN_146366cce(void)

undefined8 FUN_146366cce(undefined8 param_1,int param_2)

{
  FUN_145a3698e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366cf6 FUN_146366cf6 body=40 status=ok
// SIG undefined FUN_146366cf6(void)

undefined8 FUN_146366cf6(undefined8 param_1,int param_2)

{
  FUN_145a3698e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366d1e FUN_146366d1e body=83 status=ok
// SIG undefined FUN_146366d1e(void)

undefined8 * FUN_146366d1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5966c0;
  param_1[5] = &PTR_LAB_14a596970;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3698e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366d72 FUN_146366d72 body=40 status=ok
// SIG undefined FUN_146366d72(void)

undefined8 FUN_146366d72(undefined8 param_1,int param_2)

{
  FUN_145a3698e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366d9a FUN_146366d9a body=40 status=ok
// SIG undefined FUN_146366d9a(void)

undefined8 FUN_146366d9a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366dc2 FUN_146366dc2 body=29 status=ok
// SIG undefined FUN_146366dc2(void)

undefined8 FUN_146366dc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366de0 FUN_146366de0 body=29 status=ok
// SIG undefined FUN_146366de0(void)

undefined8 FUN_146366de0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366dfe FUN_146366dfe body=29 status=ok
// SIG undefined FUN_146366dfe(void)

undefined8 FUN_146366dfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366e1c FUN_146366e1c body=29 status=ok
// SIG undefined FUN_146366e1c(void)

undefined8 FUN_146366e1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366e3a FUN_146366e3a body=29 status=ok
// SIG undefined FUN_146366e3a(void)

undefined8 FUN_146366e3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366e58 FUN_146366e58 body=29 status=ok
// SIG undefined FUN_146366e58(void)

undefined8 FUN_146366e58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366e76 FUN_146366e76 body=29 status=ok
// SIG undefined FUN_146366e76(void)

undefined8 FUN_146366e76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366e94 FUN_146366e94 body=29 status=ok
// SIG undefined FUN_146366e94(void)

undefined8 FUN_146366e94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146366eb2 FUN_146366eb2 body=93 status=ok
// SIG undefined FUN_146366eb2(void)

void FUN_146366eb2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a598e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146366f10 FUN_146366f10 body=320 status=ok
// SIG undefined FUN_146366f10(void)

void FUN_146366f10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_14a599010;
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar1 == 0) {
    LOCK();
    UNLOCK();
    lVar1 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_60[2] = lVar1;
  *local_60 = &PTR_FUN_14a598fa0;
  local_60[3] = FUN_1478197be;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar1 = (longlong)*(int *)(param_1 + 0x20) << 4;
    do {
      local_70 = 0;
      local_68 = 0;
      FUN_1458f49e6(&local_70,&local_60);
      FUN_1458f4784();
      local_50 = lVar2;
      local_48 = &local_70;
      FUN_1458f481c(local_3c,&local_50);
      FUN_1449db362(&local_70);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  FUN_1449db362(&local_60);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146367052 FUN_146367052 body=53 status=ok
// SIG undefined FUN_146367052(void)

void FUN_146367052(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar2 = (longlong)*(int *)(param_1 + 0x20) << 4;
    do {
      FUN_1458f4784();
      FUN_14589a41a(lVar1);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146367091 FUN_146367091 body=47 status=ok
// SIG undefined FUN_146367091(void)

longlong FUN_146367091(void)

{
  if (DAT_14cabc980 == 0) {
    FUN_14073dd9a(&DAT_14cabc980,&PTR_LAB_14a5995c8);
  }
  return DAT_14cabc980;
}



// FUNCTION 1463670c0 FUN_1463670c0 body=55 status=ok
// SIG undefined FUN_1463670c0(void)

void FUN_1463670c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc998 == 0) {
    uVar1 = FUN_141051008();
    DAT_14cabc998 = FUN_140002ddd(FUN_1463670f7,uVar1,L"LegacyLazyObjectPtrFragment");
  }
  return;
}



// FUNCTION 1463670f7 FUN_1463670f7 body=47 status=ok
// SIG undefined FUN_1463670f7(void)

longlong FUN_1463670f7(void)

{
  if (DAT_14cabc990 == 0) {
    FUN_14086a14e(&DAT_14cabc990,&PTR_FUN_14a599718);
  }
  return DAT_14cabc990;
}



// FUNCTION 146367126 FUN_146367126 body=48 status=ok
// SIG undefined FUN_146367126(void)

void FUN_146367126(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a5a3300;
  return;
}



// FUNCTION 146367156 FUN_146367156 body=47 status=ok
// SIG undefined FUN_146367156(void)

longlong FUN_146367156(void)

{
  if (DAT_14cabcb08 == 0) {
    FUN_14000fc22(&DAT_14cabcb08,&PTR_FUN_14a59b7e0);
  }
  return DAT_14cabcb08;
}



// FUNCTION 146367185 FUN_146367185 body=47 status=ok
// SIG undefined FUN_146367185(void)

longlong FUN_146367185(void)

{
  if (DAT_14cabcd90 == 0) {
    FUN_14000fc22(&DAT_14cabcd90,&PTR_FUN_14a5a1438);
  }
  return DAT_14cabcd90;
}



// FUNCTION 1463671b4 FUN_1463671b4 body=55 status=ok
// SIG undefined FUN_1463671b4(void)

void FUN_1463671b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc9c8 == 0) {
    uVar1 = FUN_141051008();
    DAT_14cabc9c8 = FUN_140002ddd(FUN_1463671eb,uVar1,L"LevelSequenceCameraSettings");
  }
  return;
}



// FUNCTION 1463671eb FUN_1463671eb body=47 status=ok
// SIG undefined FUN_1463671eb(void)

longlong FUN_1463671eb(void)

{
  if (DAT_14cabc9c0 == 0) {
    FUN_14086a14e(&DAT_14cabc9c0,&PTR_FUN_14a599900);
  }
  return DAT_14cabc9c0;
}



// FUNCTION 14636721a FUN_14636721a body=48 status=ok
// SIG undefined FUN_14636721a(void)

void FUN_14636721a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14a5a3470;
  return;
}



// FUNCTION 14636724a FUN_14636724a body=55 status=ok
// SIG undefined FUN_14636724a(void)

void FUN_14636724a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc9e0 == 0) {
    uVar1 = FUN_141051008();
    DAT_14cabc9e0 = FUN_140002ddd(FUN_146367281,uVar1,L"LevelSequenceLegacyObjectReference");
  }
  return;
}



// FUNCTION 146367281 FUN_146367281 body=47 status=ok
// SIG undefined FUN_146367281(void)

longlong FUN_146367281(void)

{
  if (DAT_14cabc9d8 == 0) {
    FUN_14086a14e(&DAT_14cabc9d8,&PTR_FUN_14a5999d8);
  }
  return DAT_14cabc9d8;
}



// FUNCTION 1463672b0 FUN_1463672b0 body=48 status=ok
// SIG undefined FUN_1463672b0(void)

void FUN_1463672b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a5a35e0;
  return;
}



// FUNCTION 1463672e0 FUN_1463672e0 body=55 status=ok
// SIG undefined FUN_1463672e0(void)

void FUN_1463672e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabc9f8 == 0) {
    uVar1 = FUN_141051008();
    DAT_14cabc9f8 = FUN_140002ddd(FUN_146367317,uVar1,L"LevelSequenceObjectReferenceMap");
  }
  return;
}



// FUNCTION 146367317 FUN_146367317 body=47 status=ok
// SIG undefined FUN_146367317(void)

longlong FUN_146367317(void)

{
  if (DAT_14cabc9f0 == 0) {
    FUN_14086a14e(&DAT_14cabc9f0,&PTR_FUN_14a599a70);
  }
  return DAT_14cabc9f0;
}



// FUNCTION 146367346 FUN_146367346 body=48 status=ok
// SIG undefined FUN_146367346(void)

void FUN_146367346(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a5a3740;
  return;
}



// FUNCTION 146367376 FUN_146367376 body=50 status=ok
// SIG undefined FUN_146367376(void)

void FUN_146367376(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a599c60;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1463673a8 FUN_1463673a8 body=47 status=ok
// SIG undefined FUN_1463673a8(void)

longlong FUN_1463673a8(void)

{
  if (DAT_14cabca18 == 0) {
    FUN_14073dd9a(&DAT_14cabca18,&PTR_LAB_14a599c18);
  }
  return DAT_14cabca18;
}


