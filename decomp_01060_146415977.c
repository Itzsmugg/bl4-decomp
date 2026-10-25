// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146415977 FUN_146415977 body=47 status=ok
// SIG undefined FUN_146415977(void)

longlong FUN_146415977(void)

{
  if (DAT_14cb12ae0 == 0) {
    FUN_14086a14e(&DAT_14cb12ae0,&PTR_FUN_14ab3b5d0);
  }
  return DAT_14cb12ae0;
}



// FUNCTION 1464159a6 FUN_1464159a6 body=43 status=ok
// SIG undefined FUN_1464159a6(void)

void FUN_1464159a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab3bbc0;
  return;
}



// FUNCTION 1464159d2 FUN_1464159d2 body=55 status=ok
// SIG undefined FUN_1464159d2(void)

void FUN_1464159d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12b00 == 0) {
    uVar1 = FUN_145d88f29();
    DAT_14cb12b00 = FUN_140002ddd(FUN_146415a09,uVar1,L"SessionServiceLogUnsubscribe");
  }
  return;
}



// FUNCTION 146415a09 FUN_146415a09 body=47 status=ok
// SIG undefined FUN_146415a09(void)

longlong FUN_146415a09(void)

{
  if (DAT_14cb12af8 == 0) {
    FUN_14086a14e(&DAT_14cb12af8,&PTR_FUN_14ab3b660);
  }
  return DAT_14cb12af8;
}



// FUNCTION 146415a38 FUN_146415a38 body=43 status=ok
// SIG undefined FUN_146415a38(void)

void FUN_146415a38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab3bd20;
  return;
}



// FUNCTION 146415a64 FUN_146415a64 body=192 status=ok
// SIG undefined FUN_146415a64(void)

void FUN_146415a64(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab3be90;
  puVar1[3] = &DAT_14cb12b10;
  puVar1[4] = FUN_147dfc3b0;
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



// FUNCTION 146415b26 FUN_146415b26 body=34 status=ok
// SIG undefined FUN_146415b26(void)

undefined8 FUN_146415b26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146415b48 FUN_146415b48 body=34 status=ok
// SIG undefined FUN_146415b48(void)

undefined8 FUN_146415b48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146415b6a FUN_146415b6a body=34 status=ok
// SIG undefined FUN_146415b6a(void)

undefined8 FUN_146415b6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146415b8c FUN_146415b8c body=34 status=ok
// SIG undefined FUN_146415b8c(void)

undefined8 FUN_146415b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146415bae FUN_146415bae body=34 status=ok
// SIG undefined FUN_146415bae(void)

undefined8 FUN_146415bae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146415bd0 FUN_146415bd0 body=93 status=ok
// SIG undefined FUN_146415bd0(void)

void FUN_146415bd0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab3be90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146415c2e FUN_146415c2e body=192 status=ok
// SIG undefined FUN_146415c2e(void)

void FUN_146415c2e(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab3c6c0;
  puVar1[3] = &DAT_14cb12b14;
  puVar1[4] = FUN_145c2518e;
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



// FUNCTION 146415cf0 FUN_146415cf0 body=34 status=ok
// SIG undefined FUN_146415cf0(void)

undefined8 FUN_146415cf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146415d12 FUN_146415d12 body=34 status=ok
// SIG undefined FUN_146415d12(void)

undefined8 FUN_146415d12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146415d34 FUN_146415d34 body=34 status=ok
// SIG undefined FUN_146415d34(void)

undefined8 FUN_146415d34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146415d56 FUN_146415d56 body=93 status=ok
// SIG undefined FUN_146415d56(void)

void FUN_146415d56(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab3c6c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146415db4 FUN_146415db4 body=213 status=ok
// SIG undefined FUN_146415db4(void)

void FUN_146415db4(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"Messaging",1);
  uVar2 = local_28;
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_14493e38c(uVar3,uVar2);
  (**(code **)(*plVar4 + 0x68))(plVar4,&local_28);
  plVar5 = local_20;
  *(undefined8 *)(param_1 + 8) = local_28;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != local_20) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x10) = plVar5;
    plVar5 = local_20;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146415e8a FUN_146415e8a body=34 status=ok
// SIG undefined FUN_146415e8a(void)

undefined8 FUN_146415e8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146415eac FUN_146415eac body=192 status=ok
// SIG undefined FUN_146415eac(void)

void FUN_146415eac(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab406f0;
  puVar1[3] = &DAT_14cb12b18;
  puVar1[4] = FUN_147e0bc5a;
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



// FUNCTION 146415f6e FUN_146415f6e body=93 status=ok
// SIG undefined FUN_146415f6e(void)

void FUN_146415f6e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab406f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146415fcc FUN_146415fcc body=192 status=ok
// SIG undefined FUN_146415fcc(void)

void FUN_146415fcc(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab40cd0;
  puVar1[3] = &DAT_14cb12bd8;
  puVar1[4] = FUN_1459cf1b2;
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



// FUNCTION 14641608e FUN_14641608e body=93 status=ok
// SIG undefined FUN_14641608e(void)

void FUN_14641608e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab40cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464160ec FUN_1464160ec body=34 status=ok
// SIG undefined FUN_1464160ec(void)

undefined8 FUN_1464160ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14641610e FUN_14641610e body=231 status=ok
// SIG undefined FUN_14641610e(void)

void FUN_14641610e(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ab41340;
  local_28[3] = &DAT_14cb12c68;
  local_28[4] = FUN_1459cf1e0;
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



// FUNCTION 1464161f6 FUN_1464161f6 body=29 status=ok
// SIG undefined FUN_1464161f6(void)

undefined8 FUN_1464161f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146416214 FUN_146416214 body=93 status=ok
// SIG undefined FUN_146416214(void)

void FUN_146416214(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab41340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146416272 FUN_146416272 body=29 status=ok
// SIG undefined FUN_146416272(void)

undefined8 FUN_146416272(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146416290 FUN_146416290 body=98 status=ok
// SIG undefined FUN_146416290(void)

void FUN_146416290(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_20,L"AVEncoder",1);
  FUN_1405f3750(uVar1,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464162f4 FUN_1464162f4 body=137 status=ok
// SIG undefined FUN_1464162f4(void)

undefined8 * FUN_1464162f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab41798;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  return param_1;
}



// FUNCTION 14641637e FUN_14641637e body=231 status=ok
// SIG undefined FUN_14641637e(void)

void FUN_14641637e(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ab41a90;
  local_28[3] = &DAT_14cb12cc8;
  local_28[4] = FUN_145a24d7a;
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



// FUNCTION 146416466 FUN_146416466 body=98 status=ok
// SIG undefined FUN_146416466(void)

void FUN_146416466(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_20,L"GameplayMediaEncoder",1);
  FUN_1405f3750(uVar1,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464164ca FUN_1464164ca body=64 status=ok
// SIG undefined FUN_1464164ca(void)

void FUN_1464164ca(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = FUN_145ee9e2e();
  if (cVar3 != '\0') {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001464164fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      SetWindowDisplayAffinity(*(undefined8 *)*param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14641650a FUN_14641650a body=93 status=ok
// SIG undefined FUN_14641650a(void)

void FUN_14641650a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab41a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146416568 FUN_146416568 body=29 status=ok
// SIG undefined FUN_146416568(void)

undefined8 FUN_146416568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146416586 FUN_146416586 body=192 status=ok
// SIG undefined FUN_146416586(void)

void FUN_146416586(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab41ff0;
  puVar1[3] = &DAT_14cb12cdc;
  puVar1[4] = FUN_147e1142a;
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



// FUNCTION 146416648 FUN_146416648 body=93 status=ok
// SIG undefined FUN_146416648(void)

void FUN_146416648(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab41ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464166a6 FUN_1464166a6 body=192 status=ok
// SIG undefined FUN_1464166a6(void)

void FUN_1464166a6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab42580;
  puVar1[3] = &DAT_14cb12d0c;
  puVar1[4] = FUN_147e1283a;
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



// FUNCTION 146416768 FUN_146416768 body=93 status=ok
// SIG undefined FUN_146416768(void)

void FUN_146416768(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab42580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464167c6 FUN_1464167c6 body=192 status=ok
// SIG undefined FUN_1464167c6(void)

void FUN_1464167c6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab43ba0;
  puVar1[3] = &DAT_14cb12d4c;
  puVar1[4] = FUN_147e14912;
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



// FUNCTION 146416888 FUN_146416888 body=93 status=ok
// SIG undefined FUN_146416888(void)

void FUN_146416888(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab43ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464168e6 FUN_1464168e6 body=192 status=ok
// SIG undefined FUN_1464168e6(void)

void FUN_1464168e6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ab43dc0;
  puVar1[3] = &DAT_14cb12d50;
  puVar1[4] = FUN_147e14cba;
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



// FUNCTION 1464169a8 FUN_1464169a8 body=93 status=ok
// SIG undefined FUN_1464169a8(void)

void FUN_1464169a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab43dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146416a06 FUN_146416a06 body=231 status=ok
// SIG undefined FUN_146416a06(void)

void FUN_146416a06(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ab44320;
  local_28[3] = &DAT_14cb12d68;
  local_28[4] = FUN_147e15958;
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



// FUNCTION 146416aee FUN_146416aee body=93 status=ok
// SIG undefined FUN_146416aee(void)

void FUN_146416aee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab44320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146416b4b FUN_146416b4b body=177 status=ok
// SIG undefined FUN_146416b4b(void)

undefined8 FUN_146416b4b(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146416bfe FUN_146416bfe body=156 status=ok
// SIG undefined FUN_146416bfe(void)

void FUN_146416bfe(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb12e10;
  DAT_14cb12e08 = 0;
  if (DAT_14cb12e10 != (longlong *)0x0) {
    DAT_14cb12e10 = (longlong *)0x0;
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
  plVar3 = DAT_14cb12e00;
  if (DAT_14cb12e00 != (longlong *)0x0) {
    FUN_140997a5c(DAT_14cb12e00);
    if (*(char *)((longlong)plVar3 + 0x3c) == '\x01') {
      *(undefined1 *)((longlong)plVar3 + 0x3c) = 0;
    }
    if ((longlong *)plVar3[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[2] + 0x10))();
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 0x10))();
    }
    FUN_1400020a8(plVar3);
  }
  DAT_14cb12e00 = (longlong *)0x0;
  return;
}



// FUNCTION 146416c9a FUN_146416c9a body=111 status=ok
// SIG undefined FUN_146416c9a(void)

void FUN_146416c9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12fd8) {
    FUN_144b3d300(&DAT_14cb12fd8);
    if (DAT_14cb12fd8 == -1) {
      FUN_1446ddc76(&DAT_14cb12fd0,"HotReload",1);
      _Init_thread_footer(&DAT_14cb12fd8);
    }
  }
  FUN_1447c1074(DAT_14cb12fd0);
  return;
}



// FUNCTION 146416d09 FUN_146416d09 body=773 status=ok
// SIG undefined FUN_146416d09(void)

bool FUN_146416d09(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_64 = 0;
  lpCmdLine = GetCommandLineW();
  hMem = CommandLineToArgvW(lpCmdLine,&local_64);
  if (hMem != (LPWSTR *)0x0) {
    FUN_1400b22c2(&local_78,&DAT_149e02088);
    if (CONCAT44(DAT_14cb12fb0._4_4_,(undefined4)DAT_14cb12fb0) != 0) {
      FUN_1400020a8();
    }
    DAT_14cb12fb0._0_4_ = local_78;
    DAT_14cb12fb0._4_4_ = uStack_74;
    DAT_14cb12fb8 = iStack_70;
    uRam000000014cb12fbc = uStack_6c;
    if (1 < local_64) {
      lVar10 = 1;
      do {
        FUN_1400020e8(&DAT_14cb12fb0,&DAT_149e001d8,1);
        FUN_140056680(&local_78,hMem[lVar10]);
        local_d0 = 0xffffffff;
        local_d8 = 0;
        iVar2 = FUN_1447ee042(&local_78,&DAT_149e001d8,1,1);
        if (iVar2 != -1) {
          cVar1 = FUN_144a791f8(&local_78,&DAT_149e1419a,1,1);
          uVar11 = 0;
          puVar6 = (undefined2 *)CONCAT44(uStack_74,local_78);
          if (cVar1 != '\0') {
            iVar2 = -1;
            if (iStack_70 != 0) {
              lVar4 = (longlong)iStack_70 * 2;
              lVar7 = 0;
              do {
                if (puVar6[lVar7] == 0x3d) {
                  iVar2 = (int)lVar7;
                  break;
                }
                lVar7 = lVar7 + 1;
                lVar4 = lVar4 + -2;
              } while (lVar4 != 0);
            }
            uVar11 = iVar2 + 1;
          }
          puVar9 = &DAT_149dfb77a;
          uVar8 = iStack_70 - 1;
          if (iStack_70 == 0) {
            puVar6 = &DAT_149dfb77a;
            uVar8 = 0;
          }
          uVar3 = uVar8;
          if ((int)uVar11 < (int)uVar8) {
            uVar3 = uVar11;
          }
          uVar5 = (ulonglong)uVar3;
          if ((int)uVar3 < 1) {
            uVar5 = 0;
          }
          FUN_14006620a(local_a8,puVar6 + uVar5,uVar8 - (int)uVar5);
          uVar8 = iStack_70 - 1;
          if (iStack_70 == 0) {
            uVar8 = 0;
          }
          else {
            puVar9 = (undefined2 *)CONCAT44(uStack_74,local_78);
          }
          if ((int)uVar11 < (int)uVar8) {
            uVar8 = uVar11;
          }
          if ((int)uVar8 < 1) {
            uVar8 = 0;
          }
          FUN_14006620a(local_c8,puVar9,uVar8);
          FUN_144a882a8(local_b8,local_c8,&DAT_149e01f5a);
          FUN_1401c7f3e(local_98,local_b8,local_a8);
          FUN_144a882a8(&local_88,local_98,&DAT_149e01f5a);
          if (CONCAT44(uStack_74,local_78) != 0) {
            FUN_1400020a8();
          }
          local_78 = (undefined4)local_88;
          uStack_74 = local_88._4_4_;
          iStack_70 = (int)uStack_80;
          uStack_6c = uStack_80._4_4_;
          local_88 = 0;
          uStack_80 = 0;
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          if (local_b8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_c8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
        }
        iVar2 = iStack_70 + -1;
        if (iStack_70 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(&DAT_14cb12fb0,CONCAT44(uStack_74,local_78),iVar2);
        if (CONCAT44(uStack_74,local_78) != 0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < local_64);
    }
    LocalFree(hMem);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return hMem != (LPWSTR *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146417010 FUN_146417010 body=29 status=ok
// SIG undefined FUN_146417010(void)

undefined8 FUN_146417010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641702e FUN_14641702e body=29 status=ok
// SIG undefined FUN_14641702e(void)

undefined8 FUN_14641702e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641704b FUN_14641704b body=35 status=ok
// SIG undefined FUN_14641704b(void)

void FUN_14641704b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab46920;
  return;
}



// FUNCTION 14641706e FUN_14641706e body=47 status=ok
// SIG undefined FUN_14641706e(void)

longlong FUN_14641706e(void)

{
  if (DAT_14cb13020 == 0) {
    FUN_140f50038(&DAT_14cb13020,&PTR_s__Script_GbxGameDataCategory_14ab46c20);
  }
  return DAT_14cb13020;
}



// FUNCTION 14641709d FUN_14641709d body=47 status=ok
// SIG undefined FUN_14641709d(void)

longlong FUN_14641709d(void)

{
  if (DAT_14cb13008 == 0) {
    FUN_14073dd9a(&DAT_14cb13008,&PTR_LAB_14ab468d8);
  }
  return DAT_14cb13008;
}



// FUNCTION 1464170cc FUN_1464170cc body=231 status=ok
// SIG undefined FUN_1464170cc(void)

void FUN_1464170cc(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ab4a030;
  local_28[3] = &DAT_14cb1a310;
  local_28[4] = FUN_1459cf20e;
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



// FUNCTION 1464171b4 FUN_1464171b4 body=40 status=ok
// SIG undefined FUN_1464171b4(void)

undefined8 FUN_1464171b4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464171dc FUN_1464171dc body=93 status=ok
// SIG undefined FUN_1464171dc(void)

void FUN_1464171dc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab4a030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14641723a FUN_14641723a body=29 status=ok
// SIG undefined FUN_14641723a(void)

undefined8 FUN_14641723a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146417258 FUN_146417258 body=542 status=ok
// SIG undefined FUN_146417258(void)

void FUN_146417258(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14c83bb08 != 2) {
    FUN_1446efa72(&DAT_14c83bb00,0,2,0x10);
    DAT_14c83bb08 = 2;
  }
  puVar1 = DAT_14c83bb00;
  *DAT_14c83bb00 = &PTR_LAB_14ab4a150;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ab4a0e0;
  puVar1[3] = FUN_147e180ec;
  if (DAT_14c83bb18 != 2) {
    FUN_1446efa72(&DAT_14c83bb10,0,2,0x10);
    DAT_14c83bb18 = 2;
  }
  puVar1 = DAT_14c83bb10;
  *DAT_14c83bb10 = &PTR_LAB_14ab4a230;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ab4a1c0;
  puVar1[3] = FUN_1404de840;
  if (DAT_14c83bb28 != 2) {
    FUN_1446efa72(&DAT_14c83bb20,0,2,0x10);
    DAT_14c83bb28 = 2;
  }
  puVar1 = DAT_14c83bb20;
  *DAT_14c83bb20 = &PTR_LAB_14a176690;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14a176620;
  puVar1[3] = FUN_147e1827c;
  if (DAT_14c83bb38 != 2) {
    FUN_1446efa72(&DAT_14c83bb30,0,2,0x10);
    DAT_14c83bb38 = 2;
  }
  puVar1 = DAT_14c83bb30;
  *DAT_14c83bb30 = &PTR_LAB_14ab4a310;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ab4a2a0;
  puVar1[3] = FUN_147e18176;
  return;
}



// FUNCTION 146417476 FUN_146417476 body=47 status=ok
// SIG undefined FUN_146417476(void)

longlong FUN_146417476(void)

{
  if (DAT_14cb1a318 == 0) {
    FUN_14000fc22(&DAT_14cb1a318,&PTR_FUN_14ab4a440);
  }
  return DAT_14cb1a318;
}



// FUNCTION 1464174a5 FUN_1464174a5 body=49 status=ok
// SIG undefined FUN_1464174a5(void)

longlong FUN_1464174a5(void)

{
  if (DAT_14cb1a340 == 0) {
    FUN_14073dd9a(&DAT_14cb1a340,&PTR_LAB_14ab4a700);
  }
  return DAT_14cb1a340;
}



// FUNCTION 1464174d6 FUN_1464174d6 body=47 status=ok
// SIG undefined FUN_1464174d6(void)

longlong FUN_1464174d6(void)

{
  if (DAT_14cb1a320 == 0) {
    FUN_14000fc22(&DAT_14cb1a320,&PTR_FUN_14ab4a4e0);
  }
  return DAT_14cb1a320;
}



// FUNCTION 146417505 FUN_146417505 body=47 status=ok
// SIG undefined FUN_146417505(void)

longlong FUN_146417505(void)

{
  if (DAT_14cb1a328 == 0) {
    FUN_14000fc22(&DAT_14cb1a328,&PTR_FUN_14ab4a578);
  }
  return DAT_14cb1a328;
}



// FUNCTION 146417534 FUN_146417534 body=47 status=ok
// SIG undefined FUN_146417534(void)

longlong FUN_146417534(void)

{
  if (DAT_14cb1a330 == 0) {
    FUN_14000fc22(&DAT_14cb1a330,&PTR_FUN_14ab4a618);
  }
  return DAT_14cb1a330;
}



// FUNCTION 146417564 FUN_146417564 body=34 status=ok
// SIG undefined FUN_146417564(void)

void FUN_146417564(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401b0f18();
  FUN_14069c8d6(uVar1,&PTR_s_GetSpawnEncounter_14ab4a660,3);
  return;
}



// FUNCTION 14641758b FUN_14641758b body=35 status=ok
// SIG undefined FUN_14641758b(void)

void FUN_14641758b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab4a740;
  return;
}



// FUNCTION 1464175b4 FUN_1464175b4 body=55 status=ok
// SIG undefined FUN_1464175b4(void)

void FUN_1464175b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a358 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a358 = FUN_140002ddd(FUN_1417fe1a1,uVar1,L"GbxActorData");
  }
  return;
}



// FUNCTION 1464175ec FUN_1464175ec body=48 status=ok
// SIG undefined FUN_1464175ec(void)

void FUN_1464175ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000108;
  *puVar1 = &PTR_FUN_14ab50140;
  return;
}



// FUNCTION 14641761c FUN_14641761c body=48 status=ok
// SIG undefined FUN_14641761c(void)

void FUN_14641761c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14ab502b0;
  return;
}



// FUNCTION 14641764c FUN_14641764c body=55 status=ok
// SIG undefined FUN_14641764c(void)

void FUN_14641764c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a388 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a388 = FUN_140002ddd(FUN_146417683,uVar1,L"GbxActorInstanceData");
  }
  return;
}



// FUNCTION 146417683 FUN_146417683 body=49 status=ok
// SIG undefined FUN_146417683(void)

longlong FUN_146417683(void)

{
  if (DAT_14cb1a380 == 0) {
    FUN_14086a14e(&DAT_14cb1a380,&PTR_FUN_14ab4b030);
  }
  return DAT_14cb1a380;
}



// FUNCTION 1464176b4 FUN_1464176b4 body=48 status=ok
// SIG undefined FUN_1464176b4(void)

void FUN_1464176b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ab50410;
  return;
}



// FUNCTION 1464176e4 FUN_1464176e4 body=55 status=ok
// SIG undefined FUN_1464176e4(void)

void FUN_1464176e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a3a8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a3a8 = FUN_140002ddd(FUN_14641771b,uVar1,L"GbxEnemyActorDefInfo");
  }
  return;
}



// FUNCTION 14641771b FUN_14641771b body=47 status=ok
// SIG undefined FUN_14641771b(void)

longlong FUN_14641771b(void)

{
  if (DAT_14cb1a3a0 == 0) {
    FUN_14086a14e(&DAT_14cb1a3a0,&PTR_FUN_14ab4b310);
  }
  return DAT_14cb1a3a0;
}



// FUNCTION 14641774a FUN_14641774a body=48 status=ok
// SIG undefined FUN_14641774a(void)

void FUN_14641774a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ab50570;
  return;
}



// FUNCTION 14641777a FUN_14641777a body=49 status=ok
// SIG undefined FUN_14641777a(void)

longlong FUN_14641777a(void)

{
  if (DAT_14cb1a408 == 0) {
    FUN_14073dd9a(&DAT_14cb1a408,&PTR_LAB_14ab4bfb0);
  }
  return DAT_14cb1a408;
}



// FUNCTION 1464177ab FUN_1464177ab body=47 status=ok
// SIG undefined FUN_1464177ab(void)

longlong FUN_1464177ab(void)

{
  if (DAT_14cb1a3b8 == 0) {
    FUN_14000fc22(&DAT_14cb1a3b8,&PTR_FUN_14ab4b440);
  }
  return DAT_14cb1a3b8;
}



// FUNCTION 1464177da FUN_1464177da body=47 status=ok
// SIG undefined FUN_1464177da(void)

longlong FUN_1464177da(void)

{
  if (DAT_14cb1a3c0 == 0) {
    FUN_14000fc22(&DAT_14cb1a3c0,&PTR_FUN_14ab4b578);
  }
  return DAT_14cb1a3c0;
}



// FUNCTION 146417809 FUN_146417809 body=47 status=ok
// SIG undefined FUN_146417809(void)

longlong FUN_146417809(void)

{
  if (DAT_14cb1a3c8 == 0) {
    FUN_14000fc22(&DAT_14cb1a3c8,&PTR_FUN_14ab4b6b8);
  }
  return DAT_14cb1a3c8;
}



// FUNCTION 146417838 FUN_146417838 body=47 status=ok
// SIG undefined FUN_146417838(void)

longlong FUN_146417838(void)

{
  if (DAT_14cb1a3d0 == 0) {
    FUN_14000fc22(&DAT_14cb1a3d0,&PTR_FUN_14ab4b7f8);
  }
  return DAT_14cb1a3d0;
}



// FUNCTION 146417867 FUN_146417867 body=47 status=ok
// SIG undefined FUN_146417867(void)

longlong FUN_146417867(void)

{
  if (DAT_14cb1a3d8 == 0) {
    FUN_14000fc22(&DAT_14cb1a3d8,&PTR_FUN_14ab4b8e0);
  }
  return DAT_14cb1a3d8;
}



// FUNCTION 146417896 FUN_146417896 body=47 status=ok
// SIG undefined FUN_146417896(void)

longlong FUN_146417896(void)

{
  if (DAT_14cb1a3e0 == 0) {
    FUN_14000fc22(&DAT_14cb1a3e0,&PTR_FUN_14ab4ba88);
  }
  return DAT_14cb1a3e0;
}



// FUNCTION 1464178c5 FUN_1464178c5 body=47 status=ok
// SIG undefined FUN_1464178c5(void)

longlong FUN_1464178c5(void)

{
  if (DAT_14cb1a3e8 == 0) {
    FUN_14000fc22(&DAT_14cb1a3e8,&PTR_FUN_14ab4bb70);
  }
  return DAT_14cb1a3e8;
}



// FUNCTION 1464178f4 FUN_1464178f4 body=47 status=ok
// SIG undefined FUN_1464178f4(void)

longlong FUN_1464178f4(void)

{
  if (DAT_14cb1a3f0 == 0) {
    FUN_14000fc22(&DAT_14cb1a3f0,&PTR_FUN_14ab4bca0);
  }
  return DAT_14cb1a3f0;
}



// FUNCTION 146417923 FUN_146417923 body=47 status=ok
// SIG undefined FUN_146417923(void)

longlong FUN_146417923(void)

{
  if (DAT_14cb1a3f8 == 0) {
    FUN_14000fc22(&DAT_14cb1a3f8,&PTR_FUN_14ab4bdd8);
  }
  return DAT_14cb1a3f8;
}



// FUNCTION 146417952 FUN_146417952 body=34 status=ok
// SIG undefined FUN_146417952(void)

void FUN_146417952(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a73d86();
  FUN_14069c8d6(uVar1,&PTR_s_GetBlackboardActorDef_14ab4be20,9);
  return;
}



// FUNCTION 146417974 FUN_146417974 body=35 status=ok
// SIG undefined FUN_146417974(void)

void FUN_146417974(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab4bff0;
  return;
}



// FUNCTION 146417997 FUN_146417997 body=49 status=ok
// SIG undefined FUN_146417997(void)

longlong FUN_146417997(void)

{
  if (DAT_14cb1a448 == 0) {
    FUN_14073dd9a(&DAT_14cb1a448,&PTR_LAB_14ab4c980);
  }
  return DAT_14cb1a448;
}



// FUNCTION 1464179c8 FUN_1464179c8 body=47 status=ok
// SIG undefined FUN_1464179c8(void)

longlong FUN_1464179c8(void)

{
  if (DAT_14cb1a418 == 0) {
    FUN_14000fc22(&DAT_14cb1a418,&PTR_FUN_14ab4c390);
  }
  return DAT_14cb1a418;
}



// FUNCTION 1464179f7 FUN_1464179f7 body=47 status=ok
// SIG undefined FUN_1464179f7(void)

longlong FUN_1464179f7(void)

{
  if (DAT_14cb1a420 == 0) {
    FUN_14000fc22(&DAT_14cb1a420,&PTR_FUN_14ab4c4c0);
  }
  return DAT_14cb1a420;
}



// FUNCTION 146417a26 FUN_146417a26 body=47 status=ok
// SIG undefined FUN_146417a26(void)

longlong FUN_146417a26(void)

{
  if (DAT_14cb1a428 == 0) {
    FUN_14000fc22(&DAT_14cb1a428,&PTR_FUN_14ab4c5f0);
  }
  return DAT_14cb1a428;
}



// FUNCTION 146417a55 FUN_146417a55 body=47 status=ok
// SIG undefined FUN_146417a55(void)

longlong FUN_146417a55(void)

{
  if (DAT_14cb1a430 == 0) {
    FUN_14000fc22(&DAT_14cb1a430,&PTR_FUN_14ab4c718);
  }
  return DAT_14cb1a430;
}



// FUNCTION 146417a84 FUN_146417a84 body=47 status=ok
// SIG undefined FUN_146417a84(void)

longlong FUN_146417a84(void)

{
  if (DAT_14cb1a438 == 0) {
    FUN_14000fc22(&DAT_14cb1a438,&PTR_FUN_14ab4c850);
  }
  return DAT_14cb1a438;
}



// FUNCTION 146417ab4 FUN_146417ab4 body=34 status=ok
// SIG undefined FUN_146417ab4(void)

void FUN_146417ab4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a73e72();
  FUN_14069c8d6(uVar1,&PTR_s_GbxActor_AddTag_14ab4c890,5);
  return;
}



// FUNCTION 146417ad6 FUN_146417ad6 body=35 status=ok
// SIG undefined FUN_146417ad6(void)

void FUN_146417ad6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab4c9c0;
  return;
}



// FUNCTION 146417af9 FUN_146417af9 body=49 status=ok
// SIG undefined FUN_146417af9(void)

longlong FUN_146417af9(void)

{
  if (DAT_14cb1a468 == 0) {
    FUN_14073dd9a(&DAT_14cb1a468,&PTR_LAB_14ab4cdf0);
  }
  return DAT_14cb1a468;
}



// FUNCTION 146417b2a FUN_146417b2a body=47 status=ok
// SIG undefined FUN_146417b2a(void)

longlong FUN_146417b2a(void)

{
  if (DAT_14cb1a458 == 0) {
    FUN_14000fc22(&DAT_14cb1a458,&PTR_FUN_14ab4cd38);
  }
  return DAT_14cb1a458;
}



// FUNCTION 146417b5a FUN_146417b5a body=34 status=ok
// SIG undefined FUN_146417b5a(void)

void FUN_146417b5a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458d4e28();
  FUN_14069c8d6(uVar1,&PTR_s_GetPreviewOptions_14ab4cd80,1);
  return;
}



// FUNCTION 146417b87 FUN_146417b87 body=35 status=ok
// SIG undefined FUN_146417b87(void)

void FUN_146417b87(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab4ceb0;
  return;
}



// FUNCTION 146417baf FUN_146417baf body=47 status=ok
// SIG undefined FUN_146417baf(void)

longlong FUN_146417baf(void)

{
  if (DAT_14cb1a480 == 0) {
    FUN_14073dd9a(&DAT_14cb1a480,&PTR_LAB_14ab4ce68);
  }
  return DAT_14cb1a480;
}



// FUNCTION 146417bde FUN_146417bde body=35 status=ok
// SIG undefined FUN_146417bde(void)

void FUN_146417bde(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab4d280;
  return;
}



// FUNCTION 146417c01 FUN_146417c01 body=47 status=ok
// SIG undefined FUN_146417c01(void)

longlong FUN_146417c01(void)

{
  if (DAT_14cb1a4b0 == 0) {
    FUN_14073dd9a(&DAT_14cb1a4b0,&PTR_LAB_14ab4d238);
  }
  return DAT_14cb1a4b0;
}



// FUNCTION 146417c30 FUN_146417c30 body=35 status=ok
// SIG undefined FUN_146417c30(void)

void FUN_146417c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab4d5c0;
  return;
}



// FUNCTION 146417c53 FUN_146417c53 body=47 status=ok
// SIG undefined FUN_146417c53(void)

longlong FUN_146417c53(void)

{
  if (DAT_14cb1a4c8 == 0) {
    FUN_14073dd9a(&DAT_14cb1a4c8,&PTR_LAB_14ab4d578);
  }
  return DAT_14cb1a4c8;
}



// FUNCTION 146417c82 FUN_146417c82 body=47 status=ok
// SIG undefined FUN_146417c82(void)

longlong FUN_146417c82(void)

{
  if (DAT_14cb1a4d8 == 0) {
    FUN_1409ce572(&DAT_14cb1a4d8,&PTR_FUN_14ab4d900);
  }
  return DAT_14cb1a4d8;
}



// FUNCTION 146417cb1 FUN_146417cb1 body=47 status=ok
// SIG undefined FUN_146417cb1(void)

longlong FUN_146417cb1(void)

{
  if (DAT_14cb1a4f0 == 0) {
    FUN_1409ce572(&DAT_14cb1a4f0,&PTR_FUN_14ab4d990);
  }
  return DAT_14cb1a4f0;
}



// FUNCTION 146417ce0 FUN_146417ce0 body=47 status=ok
// SIG undefined FUN_146417ce0(void)

longlong FUN_146417ce0(void)

{
  if (DAT_14cb1a510 == 0) {
    FUN_14073dd9a(&DAT_14cb1a510,&PTR_LAB_14ab4da58);
  }
  return DAT_14cb1a510;
}



// FUNCTION 146417d0f FUN_146417d0f body=47 status=ok
// SIG undefined FUN_146417d0f(void)

longlong FUN_146417d0f(void)

{
  if (DAT_14cb1a520 == 0) {
    FUN_1409ce572(&DAT_14cb1a520,&PTR_FUN_14ab4db10);
  }
  return DAT_14cb1a520;
}



// FUNCTION 146417d3e FUN_146417d3e body=49 status=ok
// SIG undefined FUN_146417d3e(void)

longlong FUN_146417d3e(void)

{
  if (DAT_14cb1a5a8 == 0) {
    FUN_14073dd9a(&DAT_14cb1a5a8,&PTR_LAB_14ab4ef30);
  }
  return DAT_14cb1a5a8;
}



// FUNCTION 146417d6f FUN_146417d6f body=47 status=ok
// SIG undefined FUN_146417d6f(void)

longlong FUN_146417d6f(void)

{
  if (DAT_14cb1a538 == 0) {
    FUN_14000fc22(&DAT_14cb1a538,&PTR_FUN_14ab4dc30);
  }
  return DAT_14cb1a538;
}



// FUNCTION 146417d9e FUN_146417d9e body=47 status=ok
// SIG undefined FUN_146417d9e(void)

longlong FUN_146417d9e(void)

{
  if (DAT_14cb1a540 == 0) {
    FUN_14000fc22(&DAT_14cb1a540,&PTR_FUN_14ab4df28);
  }
  return DAT_14cb1a540;
}



// FUNCTION 146417dcd FUN_146417dcd body=47 status=ok
// SIG undefined FUN_146417dcd(void)

longlong FUN_146417dcd(void)

{
  if (DAT_14cb1a548 == 0) {
    FUN_14000fc22(&DAT_14cb1a548,&PTR_FUN_14ab4e220);
  }
  return DAT_14cb1a548;
}



// FUNCTION 146417dfc FUN_146417dfc body=47 status=ok
// SIG undefined FUN_146417dfc(void)

longlong FUN_146417dfc(void)

{
  if (DAT_14cb1a550 == 0) {
    FUN_14000fc22(&DAT_14cb1a550,&PTR_FUN_14ab4e508);
  }
  return DAT_14cb1a550;
}



// FUNCTION 146417e2b FUN_146417e2b body=47 status=ok
// SIG undefined FUN_146417e2b(void)

longlong FUN_146417e2b(void)

{
  if (DAT_14cb1a558 == 0) {
    FUN_14000fc22(&DAT_14cb1a558,&PTR_FUN_14ab4e5a8);
  }
  return DAT_14cb1a558;
}



// FUNCTION 146417e5a FUN_146417e5a body=47 status=ok
// SIG undefined FUN_146417e5a(void)

longlong FUN_146417e5a(void)

{
  if (DAT_14cb1a560 == 0) {
    FUN_14000fc22(&DAT_14cb1a560,&PTR_FUN_14ab4e650);
  }
  return DAT_14cb1a560;
}



// FUNCTION 146417e89 FUN_146417e89 body=47 status=ok
// SIG undefined FUN_146417e89(void)

longlong FUN_146417e89(void)

{
  if (DAT_14cb1a568 == 0) {
    FUN_14000fc22(&DAT_14cb1a568,&PTR_FUN_14ab4e738);
  }
  return DAT_14cb1a568;
}



// FUNCTION 146417eb8 FUN_146417eb8 body=47 status=ok
// SIG undefined FUN_146417eb8(void)

longlong FUN_146417eb8(void)

{
  if (DAT_14cb1a570 == 0) {
    FUN_14000fc22(&DAT_14cb1a570,&PTR_FUN_14ab4e828);
  }
  return DAT_14cb1a570;
}



// FUNCTION 146417ee7 FUN_146417ee7 body=47 status=ok
// SIG undefined FUN_146417ee7(void)

longlong FUN_146417ee7(void)

{
  if (DAT_14cb1a578 == 0) {
    FUN_14000fc22(&DAT_14cb1a578,&PTR_FUN_14ab4e900);
  }
  return DAT_14cb1a578;
}



// FUNCTION 146417f16 FUN_146417f16 body=47 status=ok
// SIG undefined FUN_146417f16(void)

longlong FUN_146417f16(void)

{
  if (DAT_14cb1a580 == 0) {
    FUN_14000fc22(&DAT_14cb1a580,&PTR_FUN_14ab4e9d0);
  }
  return DAT_14cb1a580;
}



// FUNCTION 146417f45 FUN_146417f45 body=47 status=ok
// SIG undefined FUN_146417f45(void)

longlong FUN_146417f45(void)

{
  if (DAT_14cb1a588 == 0) {
    FUN_14000fc22(&DAT_14cb1a588,&PTR_FUN_14ab4eaa0);
  }
  return DAT_14cb1a588;
}



// FUNCTION 146417f74 FUN_146417f74 body=47 status=ok
// SIG undefined FUN_146417f74(void)

longlong FUN_146417f74(void)

{
  if (DAT_14cb1a590 == 0) {
    FUN_14000fc22(&DAT_14cb1a590,&PTR_FUN_14ab4ebc8);
  }
  return DAT_14cb1a590;
}



// FUNCTION 146417fa3 FUN_146417fa3 body=47 status=ok
// SIG undefined FUN_146417fa3(void)

longlong FUN_146417fa3(void)

{
  if (DAT_14cb1a598 == 0) {
    FUN_14000fc22(&DAT_14cb1a598,&PTR_FUN_14ab4ed00);
  }
  return DAT_14cb1a598;
}



// FUNCTION 146417fd2 FUN_146417fd2 body=34 status=ok
// SIG undefined FUN_146417fd2(void)

void FUN_146417fd2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7404a();
  FUN_14069c8d6(uVar1,&PTR_s_EqualEqual_GbxActorDef_14ab4ed40,0xd);
  return;
}



// FUNCTION 146417ff4 FUN_146417ff4 body=35 status=ok
// SIG undefined FUN_146417ff4(void)

void FUN_146417ff4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab4ef70;
  return;
}



// FUNCTION 146418017 FUN_146418017 body=47 status=ok
// SIG undefined FUN_146418017(void)

longlong FUN_146418017(void)

{
  if (DAT_14cb1a5b8 == 0) {
    FUN_1409ce572(&DAT_14cb1a5b8,&PTR_FUN_14ab4f290);
  }
  return DAT_14cb1a5b8;
}



// FUNCTION 146418046 FUN_146418046 body=55 status=ok
// SIG undefined FUN_146418046(void)

void FUN_146418046(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a5d8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a5d8 = FUN_140002ddd(FUN_14641807d,uVar1,L"SpawnEncounterWave");
  }
  return;
}



// FUNCTION 14641807d FUN_14641807d body=47 status=ok
// SIG undefined FUN_14641807d(void)

longlong FUN_14641807d(void)

{
  if (DAT_14cb1a5d0 == 0) {
    FUN_14086a14e(&DAT_14cb1a5d0,&PTR_FUN_14ab4f4e8);
  }
  return DAT_14cb1a5d0;
}



// FUNCTION 1464180ac FUN_1464180ac body=48 status=ok
// SIG undefined FUN_1464180ac(void)

void FUN_1464180ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14ab50960;
  return;
}



// FUNCTION 1464180dc FUN_1464180dc body=49 status=ok
// SIG undefined FUN_1464180dc(void)

longlong FUN_1464180dc(void)

{
  if (DAT_14cb1a620 == 0) {
    FUN_14073dd9a(&DAT_14cb1a620,&PTR_LAB_14ab50080);
  }
  return DAT_14cb1a620;
}



// FUNCTION 14641810d FUN_14641810d body=47 status=ok
// SIG undefined FUN_14641810d(void)

longlong FUN_14641810d(void)

{
  if (DAT_14cb1a5e8 == 0) {
    FUN_14000fc22(&DAT_14cb1a5e8,&PTR_FUN_14ab4f578);
  }
  return DAT_14cb1a5e8;
}



// FUNCTION 14641813c FUN_14641813c body=47 status=ok
// SIG undefined FUN_14641813c(void)

longlong FUN_14641813c(void)

{
  if (DAT_14cb1a5f0 == 0) {
    FUN_14000fc22(&DAT_14cb1a5f0,&PTR_FUN_14ab4f618);
  }
  return DAT_14cb1a5f0;
}



// FUNCTION 14641816b FUN_14641816b body=47 status=ok
// SIG undefined FUN_14641816b(void)

longlong FUN_14641816b(void)

{
  if (DAT_14cb1a5f8 == 0) {
    FUN_14000fc22(&DAT_14cb1a5f8,&PTR_FUN_14ab4f6b8);
  }
  return DAT_14cb1a5f8;
}



// FUNCTION 14641819a FUN_14641819a body=47 status=ok
// SIG undefined FUN_14641819a(void)

longlong FUN_14641819a(void)

{
  if (DAT_14cb1a600 == 0) {
    FUN_14000fc22(&DAT_14cb1a600,&PTR_FUN_14ab4f710);
  }
  return DAT_14cb1a600;
}



// FUNCTION 1464181c9 FUN_1464181c9 body=47 status=ok
// SIG undefined FUN_1464181c9(void)

longlong FUN_1464181c9(void)

{
  if (DAT_14cb1a608 == 0) {
    FUN_14000fc22(&DAT_14cb1a608,&PTR_FUN_14ab4f7b8);
  }
  return DAT_14cb1a608;
}



// FUNCTION 1464181f8 FUN_1464181f8 body=47 status=ok
// SIG undefined FUN_1464181f8(void)

longlong FUN_1464181f8(void)

{
  if (DAT_14cb1a610 == 0) {
    FUN_14000fc22(&DAT_14cb1a610,&PTR_FUN_14ab4f858);
  }
  return DAT_14cb1a610;
}



// FUNCTION 146418228 FUN_146418228 body=158 status=ok
// SIG undefined FUN_146418228(void)

void FUN_146418228(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140af934a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464182c8 FUN_1464182c8 body=34 status=ok
// SIG undefined FUN_1464182c8(void)

void FUN_1464182c8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14120f5c4();
  FUN_14069c8d6(uVar1,&PTR_s_GetCurrentWaveIndex_14ab4f8a0,6);
  return;
}



// FUNCTION 1464182fa FUN_1464182fa body=40 status=ok
// SIG undefined FUN_1464182fa(void)

undefined8 FUN_1464182fa(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418322 FUN_146418322 body=40 status=ok
// SIG undefined FUN_146418322(void)

undefined8 FUN_146418322(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641834a FUN_14641834a body=40 status=ok
// SIG undefined FUN_14641834a(void)

undefined8 FUN_14641834a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418372 FUN_146418372 body=40 status=ok
// SIG undefined FUN_146418372(void)

undefined8 FUN_146418372(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e79a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641839a FUN_14641839a body=40 status=ok
// SIG undefined FUN_14641839a(void)

undefined8 FUN_14641839a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464183c2 FUN_1464183c2 body=40 status=ok
// SIG undefined FUN_1464183c2(void)

undefined8 FUN_1464183c2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464183ea FUN_1464183ea body=40 status=ok
// SIG undefined FUN_1464183ea(void)

undefined8 FUN_1464183ea(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418412 FUN_146418412 body=40 status=ok
// SIG undefined FUN_146418412(void)

undefined8 FUN_146418412(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641843a FUN_14641843a body=40 status=ok
// SIG undefined FUN_14641843a(void)

undefined8 FUN_14641843a(undefined8 param_1,int param_2)

{
  FUN_140b86ea0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418462 FUN_146418462 body=29 status=ok
// SIG undefined FUN_146418462(void)

undefined8 FUN_146418462(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418480 FUN_146418480 body=29 status=ok
// SIG undefined FUN_146418480(void)

undefined8 FUN_146418480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641849e FUN_14641849e body=37 status=ok
// SIG undefined FUN_14641849e(void)

void FUN_14641849e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  FUN_1404e2388(param_2);
  return;
}



// FUNCTION 1464184ea FUN_1464184ea body=29 status=ok
// SIG undefined FUN_1464184ea(void)

undefined8 FUN_1464184ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418508 FUN_146418508 body=29 status=ok
// SIG undefined FUN_146418508(void)

undefined8 FUN_146418508(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418526 FUN_146418526 body=29 status=ok
// SIG undefined FUN_146418526(void)

undefined8 FUN_146418526(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146418543 FUN_146418543 body=35 status=ok
// SIG undefined FUN_146418543(void)

void FUN_146418543(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab51ed0;
  return;
}



// FUNCTION 14641856b FUN_14641856b body=49 status=ok
// SIG undefined FUN_14641856b(void)

longlong FUN_14641856b(void)

{
  if (DAT_14cb1a638 == 0) {
    FUN_14073dd9a(&DAT_14cb1a638,&PTR_LAB_14ab51e88);
  }
  return DAT_14cb1a638;
}



// FUNCTION 14641859c FUN_14641859c body=47 status=ok
// SIG undefined FUN_14641859c(void)

longlong FUN_14641859c(void)

{
  if (DAT_14cb1a648 == 0) {
    FUN_1409ce572(&DAT_14cb1a648,&PTR_FUN_14ab521d0);
  }
  return DAT_14cb1a648;
}



// FUNCTION 1464185cb FUN_1464185cb body=47 status=ok
// SIG undefined FUN_1464185cb(void)

longlong FUN_1464185cb(void)

{
  if (DAT_14cb1a668 == 0) {
    FUN_14073dd9a(&DAT_14cb1a668,&PTR_LAB_14ab52378);
  }
  return DAT_14cb1a668;
}



// FUNCTION 1464185fa FUN_1464185fa body=49 status=ok
// SIG undefined FUN_1464185fa(void)

longlong FUN_1464185fa(void)

{
  if (DAT_14cb1a7b0 == 0) {
    FUN_14086a14e(&DAT_14cb1a7b0,&PTR_FUN_14ab55638);
  }
  return DAT_14cb1a7b0;
}



// FUNCTION 14641862b FUN_14641862b body=47 status=ok
// SIG undefined FUN_14641862b(void)

longlong FUN_14641862b(void)

{
  if (DAT_14cb1a680 == 0) {
    FUN_14073dd9a(&DAT_14cb1a680,&PTR_LAB_14ab52818);
  }
  return DAT_14cb1a680;
}



// FUNCTION 14641865a FUN_14641865a body=47 status=ok
// SIG undefined FUN_14641865a(void)

longlong FUN_14641865a(void)

{
  if (DAT_14cb1a698 == 0) {
    FUN_14073dd9a(&DAT_14cb1a698,&PTR_LAB_14ab52bc8);
  }
  return DAT_14cb1a698;
}



// FUNCTION 146418689 FUN_146418689 body=47 status=ok
// SIG undefined FUN_146418689(void)

longlong FUN_146418689(void)

{
  if (DAT_14cb1a6b0 == 0) {
    FUN_14073dd9a(&DAT_14cb1a6b0,&PTR_LAB_14ab52f78);
  }
  return DAT_14cb1a6b0;
}



// FUNCTION 1464186b8 FUN_1464186b8 body=43 status=ok
// SIG undefined FUN_1464186b8(void)

void FUN_1464186b8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab53440;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1464186e8 FUN_1464186e8 body=49 status=ok
// SIG undefined FUN_1464186e8(void)

longlong FUN_1464186e8(void)

{
  if (DAT_14cb1a6c8 == 0) {
    FUN_14073dd9a(&DAT_14cb1a6c8,&PTR_LAB_14ab533f8);
  }
  return DAT_14cb1a6c8;
}



// FUNCTION 146418719 FUN_146418719 body=47 status=ok
// SIG undefined FUN_146418719(void)

longlong FUN_146418719(void)

{
  if (DAT_14cb1a6e0 == 0) {
    FUN_14073dd9a(&DAT_14cb1a6e0,&PTR_LAB_14ab537d8);
  }
  return DAT_14cb1a6e0;
}



// FUNCTION 146418748 FUN_146418748 body=47 status=ok
// SIG undefined FUN_146418748(void)

longlong FUN_146418748(void)

{
  if (DAT_14cb1a6f0 == 0) {
    FUN_1409ce572(&DAT_14cb1a6f0,&PTR_FUN_14ab53b40);
  }
  return DAT_14cb1a6f0;
}



// FUNCTION 146418777 FUN_146418777 body=47 status=ok
// SIG undefined FUN_146418777(void)

longlong FUN_146418777(void)

{
  if (DAT_14cb1a710 == 0) {
    FUN_14073dd9a(&DAT_14cb1a710,&PTR_LAB_14ab53de8);
  }
  return DAT_14cb1a710;
}



// FUNCTION 1464187a6 FUN_1464187a6 body=55 status=ok
// SIG undefined FUN_1464187a6(void)

void FUN_1464187a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a728 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a728 = FUN_140002ddd(FUN_1464187dd,uVar1,L"SpawnEncounterEventEncounterRef");
  }
  return;
}



// FUNCTION 1464187dd FUN_1464187dd body=47 status=ok
// SIG undefined FUN_1464187dd(void)

longlong FUN_1464187dd(void)

{
  if (DAT_14cb1a720 == 0) {
    FUN_14086a14e(&DAT_14cb1a720,&PTR_FUN_14ab541e0);
  }
  return DAT_14cb1a720;
}



// FUNCTION 14641880c FUN_14641880c body=48 status=ok
// SIG undefined FUN_14641880c(void)

void FUN_14641880c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab5adc0;
  return;
}



// FUNCTION 14641883c FUN_14641883c body=47 status=ok
// SIG undefined FUN_14641883c(void)

longlong FUN_14641883c(void)

{
  if (DAT_14cb1a740 == 0) {
    FUN_14073dd9a(&DAT_14cb1a740,&PTR_LAB_14ab544d8);
  }
  return DAT_14cb1a740;
}



// FUNCTION 14641886c FUN_14641886c body=55 status=ok
// SIG undefined FUN_14641886c(void)

void FUN_14641886c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a758 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a758 = FUN_140002ddd(FUN_1464188a3,uVar1,L"SpawnEncounterEventRandomEntry");
  }
  return;
}



// FUNCTION 1464188a3 FUN_1464188a3 body=47 status=ok
// SIG undefined FUN_1464188a3(void)

longlong FUN_1464188a3(void)

{
  if (DAT_14cb1a750 == 0) {
    FUN_14086a14e(&DAT_14cb1a750,&PTR_FUN_14ab548d0);
  }
  return DAT_14cb1a750;
}



// FUNCTION 1464188d2 FUN_1464188d2 body=48 status=ok
// SIG undefined FUN_1464188d2(void)

void FUN_1464188d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab5af30;
  return;
}



// FUNCTION 146418902 FUN_146418902 body=47 status=ok
// SIG undefined FUN_146418902(void)

longlong FUN_146418902(void)

{
  if (DAT_14cb1a770 == 0) {
    FUN_14073dd9a(&DAT_14cb1a770,&PTR_LAB_14ab54a98);
  }
  return DAT_14cb1a770;
}



// FUNCTION 146418932 FUN_146418932 body=55 status=ok
// SIG undefined FUN_146418932(void)

void FUN_146418932(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a788 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a788 = FUN_140002ddd(FUN_146418969,uVar1,L"SpawnEncounterEventConditionEntry");
  }
  return;
}



// FUNCTION 146418969 FUN_146418969 body=47 status=ok
// SIG undefined FUN_146418969(void)

longlong FUN_146418969(void)

{
  if (DAT_14cb1a780 == 0) {
    FUN_14086a14e(&DAT_14cb1a780,&PTR_FUN_14ab54ea8);
  }
  return DAT_14cb1a780;
}



// FUNCTION 146418998 FUN_146418998 body=48 status=ok
// SIG undefined FUN_146418998(void)

void FUN_146418998(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14ab5b090;
  return;
}



// FUNCTION 1464189c8 FUN_1464189c8 body=50 status=ok
// SIG undefined FUN_1464189c8(void)

void FUN_1464189c8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14ab55010;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464189fa FUN_1464189fa body=47 status=ok
// SIG undefined FUN_1464189fa(void)

longlong FUN_1464189fa(void)

{
  if (DAT_14cb1a7a0 == 0) {
    FUN_14073dd9a(&DAT_14cb1a7a0,&PTR_LAB_14ab54fc8);
  }
  return DAT_14cb1a7a0;
}



// FUNCTION 146418a2a FUN_146418a2a body=55 status=ok
// SIG undefined FUN_146418a2a(void)

void FUN_146418a2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a7b8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a7b8 = FUN_140002ddd(FUN_1464185fa,uVar1,L"SpawnEncounterSpawnerRef");
  }
  return;
}



// FUNCTION 146418a66 FUN_146418a66 body=48 status=ok
// SIG undefined FUN_146418a66(void)

void FUN_146418a66(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ab5b1f0;
  return;
}



// FUNCTION 146418a96 FUN_146418a96 body=49 status=ok
// SIG undefined FUN_146418a96(void)

longlong FUN_146418a96(void)

{
  if (DAT_14cb1a7c8 == 0) {
    FUN_14000fc22(&DAT_14cb1a7c8,&PTR_FUN_14ab55708);
  }
  return DAT_14cb1a7c8;
}



// FUNCTION 146418ac7 FUN_146418ac7 body=49 status=ok
// SIG undefined FUN_146418ac7(void)

longlong FUN_146418ac7(void)

{
  if (DAT_14cb1a7d0 == 0) {
    FUN_14000fc22(&DAT_14cb1a7d0,&PTR_FUN_14ab55800);
  }
  return DAT_14cb1a7d0;
}



// FUNCTION 146418af8 FUN_146418af8 body=47 status=ok
// SIG undefined FUN_146418af8(void)

longlong FUN_146418af8(void)

{
  if (DAT_14cb1a7d8 == 0) {
    FUN_14000fc22(&DAT_14cb1a7d8,&PTR_FUN_14ab55858);
  }
  return DAT_14cb1a7d8;
}



// FUNCTION 146418b27 FUN_146418b27 body=47 status=ok
// SIG undefined FUN_146418b27(void)

longlong FUN_146418b27(void)

{
  if (DAT_14cb1a7e0 == 0) {
    FUN_14000fc22(&DAT_14cb1a7e0,&PTR_FUN_14ab558f8);
  }
  return DAT_14cb1a7e0;
}



// FUNCTION 146418b56 FUN_146418b56 body=47 status=ok
// SIG undefined FUN_146418b56(void)

longlong FUN_146418b56(void)

{
  if (DAT_14cb1a7e8 == 0) {
    FUN_14000fc22(&DAT_14cb1a7e8,&PTR_FUN_14ab55948);
  }
  return DAT_14cb1a7e8;
}



// FUNCTION 146418b85 FUN_146418b85 body=47 status=ok
// SIG undefined FUN_146418b85(void)

longlong FUN_146418b85(void)

{
  if (DAT_14cb1a7f0 == 0) {
    FUN_14000fc22(&DAT_14cb1a7f0,&PTR_FUN_14ab55b28);
  }
  return DAT_14cb1a7f0;
}



// FUNCTION 146418bb4 FUN_146418bb4 body=47 status=ok
// SIG undefined FUN_146418bb4(void)

longlong FUN_146418bb4(void)

{
  if (DAT_14cb1a7f8 == 0) {
    FUN_14000fc22(&DAT_14cb1a7f8,&PTR_FUN_14ab55c50);
  }
  return DAT_14cb1a7f8;
}



// FUNCTION 146418be3 FUN_146418be3 body=47 status=ok
// SIG undefined FUN_146418be3(void)

longlong FUN_146418be3(void)

{
  if (DAT_14cb1a800 == 0) {
    FUN_14000fc22(&DAT_14cb1a800,&PTR_FUN_14ab55d80);
  }
  return DAT_14cb1a800;
}



// FUNCTION 146418c12 FUN_146418c12 body=47 status=ok
// SIG undefined FUN_146418c12(void)

longlong FUN_146418c12(void)

{
  if (DAT_14cb1a808 == 0) {
    FUN_14000fc22(&DAT_14cb1a808,&PTR_FUN_14ab55eb0);
  }
  return DAT_14cb1a808;
}



// FUNCTION 146418c41 FUN_146418c41 body=47 status=ok
// SIG undefined FUN_146418c41(void)

longlong FUN_146418c41(void)

{
  if (DAT_14cb1a810 == 0) {
    FUN_14000fc22(&DAT_14cb1a810,&PTR_FUN_14ab55f48);
  }
  return DAT_14cb1a810;
}



// FUNCTION 146418c70 FUN_146418c70 body=47 status=ok
// SIG undefined FUN_146418c70(void)

longlong FUN_146418c70(void)

{
  if (DAT_14cb1a818 == 0) {
    FUN_14000fc22(&DAT_14cb1a818,&PTR_FUN_14ab55fd0);
  }
  return DAT_14cb1a818;
}



// FUNCTION 146418c9f FUN_146418c9f body=47 status=ok
// SIG undefined FUN_146418c9f(void)

longlong FUN_146418c9f(void)

{
  if (DAT_14cb1a820 == 0) {
    FUN_14000fc22(&DAT_14cb1a820,&PTR_FUN_14ab560f8);
  }
  return DAT_14cb1a820;
}



// FUNCTION 146418cce FUN_146418cce body=47 status=ok
// SIG undefined FUN_146418cce(void)

longlong FUN_146418cce(void)

{
  if (DAT_14cb1a828 == 0) {
    FUN_14000fc22(&DAT_14cb1a828,&PTR_FUN_14ab56190);
  }
  return DAT_14cb1a828;
}



// FUNCTION 146418cfd FUN_146418cfd body=47 status=ok
// SIG undefined FUN_146418cfd(void)

longlong FUN_146418cfd(void)

{
  if (DAT_14cb1a830 == 0) {
    FUN_14000fc22(&DAT_14cb1a830,&PTR_FUN_14ab56230);
  }
  return DAT_14cb1a830;
}



// FUNCTION 146418d2c FUN_146418d2c body=47 status=ok
// SIG undefined FUN_146418d2c(void)

longlong FUN_146418d2c(void)

{
  if (DAT_14cb1a838 == 0) {
    FUN_14000fc22(&DAT_14cb1a838,&PTR_FUN_14ab562c8);
  }
  return DAT_14cb1a838;
}



// FUNCTION 146418d5b FUN_146418d5b body=47 status=ok
// SIG undefined FUN_146418d5b(void)

longlong FUN_146418d5b(void)

{
  if (DAT_14cb1a840 == 0) {
    FUN_14000fc22(&DAT_14cb1a840,&PTR_FUN_14ab563d0);
  }
  return DAT_14cb1a840;
}



// FUNCTION 146418d8a FUN_146418d8a body=47 status=ok
// SIG undefined FUN_146418d8a(void)

longlong FUN_146418d8a(void)

{
  if (DAT_14cb1a848 == 0) {
    FUN_14000fc22(&DAT_14cb1a848,&PTR_FUN_14ab56568);
  }
  return DAT_14cb1a848;
}



// FUNCTION 146418db9 FUN_146418db9 body=47 status=ok
// SIG undefined FUN_146418db9(void)

longlong FUN_146418db9(void)

{
  if (DAT_14cb1a850 == 0) {
    FUN_14000fc22(&DAT_14cb1a850,&PTR_FUN_14ab56608);
  }
  return DAT_14cb1a850;
}



// FUNCTION 146418de8 FUN_146418de8 body=34 status=ok
// SIG undefined FUN_146418de8(void)

void FUN_146418de8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140929c72();
  FUN_14069c8d6(uVar1,&PTR_s_DestroyAllActors_14ab56650,0x10);
  return;
}



// FUNCTION 146418e20 FUN_146418e20 body=47 status=ok
// SIG undefined FUN_146418e20(void)

longlong FUN_146418e20(void)

{
  if (DAT_14cb1a878 == 0) {
    FUN_1409ce572(&DAT_14cb1a878,&PTR_FUN_14ab56b70);
  }
  return DAT_14cb1a878;
}



// FUNCTION 146418e4f FUN_146418e4f body=47 status=ok
// SIG undefined FUN_146418e4f(void)

longlong FUN_146418e4f(void)

{
  if (DAT_14cb1a890 == 0) {
    FUN_14000fc22(&DAT_14cb1a890,&PTR_FUN_14ab56ba0);
  }
  return DAT_14cb1a890;
}



// FUNCTION 146418e7e FUN_146418e7e body=47 status=ok
// SIG undefined FUN_146418e7e(void)

longlong FUN_146418e7e(void)

{
  if (DAT_14cb1a898 == 0) {
    FUN_14000fc22(&DAT_14cb1a898,&PTR_FUN_14ab56d58);
  }
  return DAT_14cb1a898;
}



// FUNCTION 146418ead FUN_146418ead body=47 status=ok
// SIG undefined FUN_146418ead(void)

longlong FUN_146418ead(void)

{
  if (DAT_14cb1a8a0 == 0) {
    FUN_14000fc22(&DAT_14cb1a8a0,&PTR_FUN_14ab56e68);
  }
  return DAT_14cb1a8a0;
}



// FUNCTION 146418edc FUN_146418edc body=47 status=ok
// SIG undefined FUN_146418edc(void)

longlong FUN_146418edc(void)

{
  if (DAT_14cb1a8a8 == 0) {
    FUN_14000fc22(&DAT_14cb1a8a8,&PTR_FUN_14ab56f78);
  }
  return DAT_14cb1a8a8;
}



// FUNCTION 146418f0b FUN_146418f0b body=47 status=ok
// SIG undefined FUN_146418f0b(void)

longlong FUN_146418f0b(void)

{
  if (DAT_14cb1a8b0 == 0) {
    FUN_14000fc22(&DAT_14cb1a8b0,&PTR_FUN_14ab57088);
  }
  return DAT_14cb1a8b0;
}



// FUNCTION 146418f3a FUN_146418f3a body=47 status=ok
// SIG undefined FUN_146418f3a(void)

longlong FUN_146418f3a(void)

{
  if (DAT_14cb1a8b8 == 0) {
    FUN_14000fc22(&DAT_14cb1a8b8,&PTR_FUN_14ab57108);
  }
  return DAT_14cb1a8b8;
}



// FUNCTION 146418f69 FUN_146418f69 body=47 status=ok
// SIG undefined FUN_146418f69(void)

longlong FUN_146418f69(void)

{
  if (DAT_14cb1a8c0 == 0) {
    FUN_14000fc22(&DAT_14cb1a8c0,&PTR_FUN_14ab571f0);
  }
  return DAT_14cb1a8c0;
}



// FUNCTION 146418f98 FUN_146418f98 body=47 status=ok
// SIG undefined FUN_146418f98(void)

longlong FUN_146418f98(void)

{
  if (DAT_14cb1a8c8 == 0) {
    FUN_14000fc22(&DAT_14cb1a8c8,&PTR_FUN_14ab57308);
  }
  return DAT_14cb1a8c8;
}



// FUNCTION 146418fc7 FUN_146418fc7 body=47 status=ok
// SIG undefined FUN_146418fc7(void)

longlong FUN_146418fc7(void)

{
  if (DAT_14cb1a8d0 == 0) {
    FUN_14000fc22(&DAT_14cb1a8d0,&PTR_FUN_14ab57390);
  }
  return DAT_14cb1a8d0;
}



// FUNCTION 146418ff6 FUN_146418ff6 body=47 status=ok
// SIG undefined FUN_146418ff6(void)

longlong FUN_146418ff6(void)

{
  if (DAT_14cb1a8d8 == 0) {
    FUN_14000fc22(&DAT_14cb1a8d8,&PTR_FUN_14ab57418);
  }
  return DAT_14cb1a8d8;
}



// FUNCTION 146419025 FUN_146419025 body=47 status=ok
// SIG undefined FUN_146419025(void)

longlong FUN_146419025(void)

{
  if (DAT_14cb1a8e0 == 0) {
    FUN_14000fc22(&DAT_14cb1a8e0,&PTR_FUN_14ab57468);
  }
  return DAT_14cb1a8e0;
}



// FUNCTION 146419054 FUN_146419054 body=47 status=ok
// SIG undefined FUN_146419054(void)

longlong FUN_146419054(void)

{
  if (DAT_14cb1a8e8 == 0) {
    FUN_14000fc22(&DAT_14cb1a8e8,&PTR_FUN_14ab57540);
  }
  return DAT_14cb1a8e8;
}



// FUNCTION 146419083 FUN_146419083 body=47 status=ok
// SIG undefined FUN_146419083(void)

longlong FUN_146419083(void)

{
  if (DAT_14cb1a8f0 == 0) {
    FUN_14000fc22(&DAT_14cb1a8f0,&PTR_FUN_14ab57668);
  }
  return DAT_14cb1a8f0;
}



// FUNCTION 1464190b2 FUN_1464190b2 body=47 status=ok
// SIG undefined FUN_1464190b2(void)

longlong FUN_1464190b2(void)

{
  if (DAT_14cb1a8f8 == 0) {
    FUN_14000fc22(&DAT_14cb1a8f8,&PTR_FUN_14ab576f0);
  }
  return DAT_14cb1a8f8;
}



// FUNCTION 1464190e1 FUN_1464190e1 body=47 status=ok
// SIG undefined FUN_1464190e1(void)

longlong FUN_1464190e1(void)

{
  if (DAT_14cb1a900 == 0) {
    FUN_14000fc22(&DAT_14cb1a900,&PTR_FUN_14ab577c0);
  }
  return DAT_14cb1a900;
}



// FUNCTION 146419110 FUN_146419110 body=47 status=ok
// SIG undefined FUN_146419110(void)

longlong FUN_146419110(void)

{
  if (DAT_14cb1a908 == 0) {
    FUN_14000fc22(&DAT_14cb1a908,&PTR_FUN_14ab57848);
  }
  return DAT_14cb1a908;
}



// FUNCTION 146419140 FUN_146419140 body=34 status=ok
// SIG undefined FUN_146419140(void)

void FUN_146419140(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407fc5ce();
  FUN_14069c8d6(uVar1,&PTR_s_DestroyAllActors_14ab57890,0x10);
  return;
}



// FUNCTION 14641917a FUN_14641917a body=49 status=ok
// SIG undefined FUN_14641917a(void)

longlong FUN_14641917a(void)

{
  if (DAT_14cb1a988 == 0) {
    FUN_14086a14e(&DAT_14cb1a988,&PTR_FUN_14ab58d20);
  }
  return DAT_14cb1a988;
}



// FUNCTION 1464191ab FUN_1464191ab body=35 status=ok
// SIG undefined FUN_1464191ab(void)

void FUN_1464191ab(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab581b0;
  return;
}



// FUNCTION 1464191ce FUN_1464191ce body=47 status=ok
// SIG undefined FUN_1464191ce(void)

longlong FUN_1464191ce(void)

{
  if (DAT_14cb1a930 == 0) {
    FUN_14073dd9a(&DAT_14cb1a930,&PTR_LAB_14ab58168);
  }
  return DAT_14cb1a930;
}



// FUNCTION 1464191fd FUN_1464191fd body=35 status=ok
// SIG undefined FUN_1464191fd(void)

void FUN_1464191fd(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab584f0;
  return;
}



// FUNCTION 146419220 FUN_146419220 body=47 status=ok
// SIG undefined FUN_146419220(void)

longlong FUN_146419220(void)

{
  if (DAT_14cb1a948 == 0) {
    FUN_14073dd9a(&DAT_14cb1a948,&PTR_LAB_14ab584a8);
  }
  return DAT_14cb1a948;
}



// FUNCTION 14641924f FUN_14641924f body=35 status=ok
// SIG undefined FUN_14641924f(void)

void FUN_14641924f(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab58830;
  return;
}



// FUNCTION 146419272 FUN_146419272 body=47 status=ok
// SIG undefined FUN_146419272(void)

longlong FUN_146419272(void)

{
  if (DAT_14cb1a960 == 0) {
    FUN_14073dd9a(&DAT_14cb1a960,&PTR_LAB_14ab587e8);
  }
  return DAT_14cb1a960;
}



// FUNCTION 1464192a1 FUN_1464192a1 body=47 status=ok
// SIG undefined FUN_1464192a1(void)

longlong FUN_1464192a1(void)

{
  if (DAT_14cb1a970 == 0) {
    FUN_1409ce572(&DAT_14cb1a970,&PTR_FUN_14ab58b90);
  }
  return DAT_14cb1a970;
}



// FUNCTION 1464192d0 FUN_1464192d0 body=55 status=ok
// SIG undefined FUN_1464192d0(void)

void FUN_1464192d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a990 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a990 = FUN_140002ddd(FUN_14641917a,uVar1,L"SpawnerStyleData");
  }
  return;
}



// FUNCTION 146419307 FUN_146419307 body=49 status=ok
// SIG undefined FUN_146419307(void)

longlong FUN_146419307(void)

{
  if (DAT_14cb1a9d0 == 0) {
    FUN_14086a14e(&DAT_14cb1a9d0,&PTR_FUN_14ab591e8);
  }
  return DAT_14cb1a9d0;
}



// FUNCTION 146419338 FUN_146419338 body=48 status=ok
// SIG undefined FUN_146419338(void)

void FUN_146419338(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ab5b460;
  return;
}



// FUNCTION 146419368 FUN_146419368 body=35 status=ok
// SIG undefined FUN_146419368(void)

void FUN_146419368(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab58df0;
  return;
}



// FUNCTION 14641938b FUN_14641938b body=49 status=ok
// SIG undefined FUN_14641938b(void)

longlong FUN_14641938b(void)

{
  if (DAT_14cb1a9a8 == 0) {
    FUN_14073dd9a(&DAT_14cb1a9a8,&PTR_LAB_14ab58da8);
  }
  return DAT_14cb1a9a8;
}



// FUNCTION 1464193bc FUN_1464193bc body=47 status=ok
// SIG undefined FUN_1464193bc(void)

longlong FUN_1464193bc(void)

{
  if (DAT_14cb1a9c0 == 0) {
    FUN_14073dd9a(&DAT_14cb1a9c0,&PTR_LAB_14ab59178);
  }
  return DAT_14cb1a9c0;
}



// FUNCTION 1464193ec FUN_1464193ec body=48 status=ok
// SIG undefined FUN_1464193ec(void)

void FUN_1464193ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ab5b5c0;
  return;
}



// FUNCTION 14641941c FUN_14641941c body=47 status=ok
// SIG undefined FUN_14641941c(void)

longlong FUN_14641941c(void)

{
  if (DAT_14cb1a9e8 == 0) {
    FUN_14086a14e(&DAT_14cb1a9e8,&PTR_FUN_14ab59690);
  }
  return DAT_14cb1a9e8;
}



// FUNCTION 14641944c FUN_14641944c body=48 status=ok
// SIG undefined FUN_14641944c(void)

void FUN_14641944c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000160;
  *puVar1 = &PTR_FUN_14ab5b740;
  return;
}



// FUNCTION 14641947c FUN_14641947c body=47 status=ok
// SIG undefined FUN_14641947c(void)

longlong FUN_14641947c(void)

{
  if (DAT_14cb1aa08 == 0) {
    FUN_14073dd9a(&DAT_14cb1aa08,&PTR_LAB_14ab598c8);
  }
  return DAT_14cb1aa08;
}



// FUNCTION 1464194ab FUN_1464194ab body=47 status=ok
// SIG undefined FUN_1464194ab(void)

longlong FUN_1464194ab(void)

{
  if (DAT_14cb1aa18 == 0) {
    FUN_14086a14e(&DAT_14cb1aa18,&PTR_FUN_14ab59c60);
  }
  return DAT_14cb1aa18;
}



// FUNCTION 1464194da FUN_1464194da body=48 status=ok
// SIG undefined FUN_1464194da(void)

void FUN_1464194da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ab5b8a0;
  return;
}



// FUNCTION 14641950a FUN_14641950a body=35 status=ok
// SIG undefined FUN_14641950a(void)

void FUN_14641950a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab59d40;
  return;
}



// FUNCTION 14641952d FUN_14641952d body=47 status=ok
// SIG undefined FUN_14641952d(void)

longlong FUN_14641952d(void)

{
  if (DAT_14cb1aa38 == 0) {
    FUN_14073dd9a(&DAT_14cb1aa38,&PTR_LAB_14ab59cf8);
  }
  return DAT_14cb1aa38;
}



// FUNCTION 14641955c FUN_14641955c body=47 status=ok
// SIG undefined FUN_14641955c(void)

longlong FUN_14641955c(void)

{
  if (DAT_14cb1aa48 == 0) {
    FUN_14086a14e(&DAT_14cb1aa48,&PTR_FUN_14ab5a5a0);
  }
  return DAT_14cb1aa48;
}



// FUNCTION 14641958c FUN_14641958c body=48 status=ok
// SIG undefined FUN_14641958c(void)

void FUN_14641958c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000210;
  *puVar1 = &PTR_FUN_14ab5ba00;
  return;
}



// FUNCTION 1464195bc FUN_1464195bc body=47 status=ok
// SIG undefined FUN_1464195bc(void)

longlong FUN_1464195bc(void)

{
  if (DAT_14cb1aa68 == 0) {
    FUN_14073dd9a(&DAT_14cb1aa68,&PTR_LAB_14ab5a8f8);
  }
  return DAT_14cb1aa68;
}



// FUNCTION 1464195ec FUN_1464195ec body=40 status=ok
// SIG undefined FUN_1464195ec(void)

undefined8 FUN_1464195ec(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146419614 FUN_146419614 body=40 status=ok
// SIG undefined FUN_146419614(void)

undefined8 FUN_146419614(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641963c FUN_14641963c body=40 status=ok
// SIG undefined FUN_14641963c(void)

undefined8 FUN_14641963c(undefined8 param_1,int param_2)

{
  FUN_14061144a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146419664 FUN_146419664 body=40 status=ok
// SIG undefined FUN_146419664(void)

undefined8 FUN_146419664(undefined8 param_1,int param_2)

{
  FUN_1408102c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641968c FUN_14641968c body=40 status=ok
// SIG undefined FUN_14641968c(void)

undefined8 FUN_14641968c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464196b4 FUN_1464196b4 body=40 status=ok
// SIG undefined FUN_1464196b4(void)

undefined8 FUN_1464196b4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464196dc FUN_1464196dc body=40 status=ok
// SIG undefined FUN_1464196dc(void)

undefined8 FUN_1464196dc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146419704 FUN_146419704 body=40 status=ok
// SIG undefined FUN_146419704(void)

undefined8 FUN_146419704(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


