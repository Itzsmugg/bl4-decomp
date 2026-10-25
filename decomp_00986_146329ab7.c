// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146329ab7 FUN_146329ab7 body=47 status=ok
// SIG undefined FUN_146329ab7(void)

longlong FUN_146329ab7(void)

{
  if (DAT_14caa8998 == 0) {
    FUN_14086a14e(&DAT_14caa8998,&PTR_FUN_14a3e7700);
  }
  return DAT_14caa8998;
}



// FUNCTION 146329ae6 FUN_146329ae6 body=48 status=ok
// SIG undefined FUN_146329ae6(void)

void FUN_146329ae6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001b8;
  *puVar1 = &PTR_FUN_14a3e95f0;
  return;
}



// FUNCTION 146329b16 FUN_146329b16 body=55 status=ok
// SIG undefined FUN_146329b16(void)

void FUN_146329b16(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa89b8 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89b8 = FUN_140002ddd(FUN_146329b4d,uVar1,L"FilterSimulationProxiesDataflowNode");
  }
  return;
}



// FUNCTION 146329b4d FUN_146329b4d body=47 status=ok
// SIG undefined FUN_146329b4d(void)

longlong FUN_146329b4d(void)

{
  if (DAT_14caa89b0 == 0) {
    FUN_14086a14e(&DAT_14caa89b0,&PTR_FUN_14a3e7968);
  }
  return DAT_14caa89b0;
}



// FUNCTION 146329b7c FUN_146329b7c body=48 status=ok
// SIG undefined FUN_146329b7c(void)

void FUN_146329b7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001c8;
  *puVar1 = &PTR_FUN_14a3e98b0;
  return;
}



// FUNCTION 146329bac FUN_146329bac body=55 status=ok
// SIG undefined FUN_146329bac(void)

void FUN_146329bac(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa89d0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89d0 = FUN_140002ddd(FUN_146329be3,uVar1,L"SimulationProxiesTerminalDataflowNode");
  }
  return;
}



// FUNCTION 146329be3 FUN_146329be3 body=47 status=ok
// SIG undefined FUN_146329be3(void)

longlong FUN_146329be3(void)

{
  if (DAT_14caa89c8 == 0) {
    FUN_14086a14e(&DAT_14caa89c8,&PTR_FUN_14a3e7aa8);
  }
  return DAT_14caa89c8;
}



// FUNCTION 146329c12 FUN_146329c12 body=48 status=ok
// SIG undefined FUN_146329c12(void)

void FUN_146329c12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a8;
  *puVar1 = &PTR_FUN_14a3e9b80;
  return;
}



// FUNCTION 146329c42 FUN_146329c42 body=231 status=ok
// SIG undefined FUN_146329c42(void)

void FUN_146329c42(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14a3ea140;
  local_28[3] = &DAT_14caa89e0;
  local_28[4] = FUN_1459cecbc;
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



// FUNCTION 146329d2a FUN_146329d2a body=40 status=ok
// SIG undefined FUN_146329d2a(void)

undefined8 FUN_146329d2a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329d52 FUN_146329d52 body=40 status=ok
// SIG undefined FUN_146329d52(void)

undefined8 FUN_146329d52(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329d7a FUN_146329d7a body=40 status=ok
// SIG undefined FUN_146329d7a(void)

undefined8 FUN_146329d7a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329da2 FUN_146329da2 body=40 status=ok
// SIG undefined FUN_146329da2(void)

undefined8 FUN_146329da2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329dca FUN_146329dca body=40 status=ok
// SIG undefined FUN_146329dca(void)

undefined8 FUN_146329dca(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329df2 FUN_146329df2 body=40 status=ok
// SIG undefined FUN_146329df2(void)

undefined8 FUN_146329df2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329e1a FUN_146329e1a body=40 status=ok
// SIG undefined FUN_146329e1a(void)

undefined8 FUN_146329e1a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329e42 FUN_146329e42 body=29 status=ok
// SIG undefined FUN_146329e42(void)

undefined8 FUN_146329e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329e60 FUN_146329e60 body=29 status=ok
// SIG undefined FUN_146329e60(void)

undefined8 FUN_146329e60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329e7e FUN_146329e7e body=29 status=ok
// SIG undefined FUN_146329e7e(void)

undefined8 FUN_146329e7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329e9c FUN_146329e9c body=29 status=ok
// SIG undefined FUN_146329e9c(void)

undefined8 FUN_146329e9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329eba FUN_146329eba body=29 status=ok
// SIG undefined FUN_146329eba(void)

undefined8 FUN_146329eba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329ed8 FUN_146329ed8 body=29 status=ok
// SIG undefined FUN_146329ed8(void)

undefined8 FUN_146329ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329ef6 FUN_146329ef6 body=29 status=ok
// SIG undefined FUN_146329ef6(void)

undefined8 FUN_146329ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329f14 FUN_146329f14 body=29 status=ok
// SIG undefined FUN_146329f14(void)

undefined8 FUN_146329f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329f32 FUN_146329f32 body=29 status=ok
// SIG undefined FUN_146329f32(void)

undefined8 FUN_146329f32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329f50 FUN_146329f50 body=29 status=ok
// SIG undefined FUN_146329f50(void)

undefined8 FUN_146329f50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329f6e FUN_146329f6e body=29 status=ok
// SIG undefined FUN_146329f6e(void)

undefined8 FUN_146329f6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329f8c FUN_146329f8c body=29 status=ok
// SIG undefined FUN_146329f8c(void)

undefined8 FUN_146329f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329faa FUN_146329faa body=29 status=ok
// SIG undefined FUN_146329faa(void)

undefined8 FUN_146329faa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329fc8 FUN_146329fc8 body=29 status=ok
// SIG undefined FUN_146329fc8(void)

undefined8 FUN_146329fc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146329fe6 FUN_146329fe6 body=29 status=ok
// SIG undefined FUN_146329fe6(void)

undefined8 FUN_146329fe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632a004 FUN_14632a004 body=29 status=ok
// SIG undefined FUN_14632a004(void)

undefined8 FUN_14632a004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632a022 FUN_14632a022 body=93 status=ok
// SIG undefined FUN_14632a022(void)

void FUN_14632a022(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3ea140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14632a080 FUN_14632a080 body=29 status=ok
// SIG undefined FUN_14632a080(void)

undefined8 FUN_14632a080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632a09d FUN_14632a09d body=32 status=ok
// SIG undefined FUN_14632a09d(void)

void FUN_14632a09d(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_140c444d0(param_1);
  *param_1 = &PTR_FUN_14a3ea390;
  return;
}



// FUNCTION 14632a0bd FUN_14632a0bd body=47 status=ok
// SIG undefined FUN_14632a0bd(void)

longlong FUN_14632a0bd(void)

{
  if (DAT_14caa89f0 == 0) {
    FUN_14073dd9a(&DAT_14caa89f0,&PTR_LAB_14a3ea348);
  }
  return DAT_14caa89f0;
}



// FUNCTION 14632a0ec FUN_14632a0ec body=47 status=ok
// SIG undefined FUN_14632a0ec(void)

longlong FUN_14632a0ec(void)

{
  if (DAT_14caa8ae8 == 0) {
    FUN_14000fc22(&DAT_14caa8ae8,&PTR_FUN_14a3ec488);
  }
  return DAT_14caa8ae8;
}



// FUNCTION 14632a11b FUN_14632a11b body=69 status=ok
// SIG undefined FUN_14632a11b(void)

void FUN_14632a11b(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3ea7b0;
  puVar1[5] = &PTR_FUN_14a3eac30;
  puVar1[6] = &PTR_LAB_14a3eac70;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  return;
}



// FUNCTION 14632a165 FUN_14632a165 body=47 status=ok
// SIG undefined FUN_14632a165(void)

longlong FUN_14632a165(void)

{
  if (DAT_14caa8a20 == 0) {
    FUN_14073dd9a(&DAT_14caa8a20,&PTR_LAB_14a3ea768);
  }
  return DAT_14caa8a20;
}



// FUNCTION 14632a19a FUN_14632a19a body=26 status=ok
// SIG undefined FUN_14632a19a(void)

void FUN_14632a19a(longlong param_1)

{
  FUN_1401c3ca6();
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}



// FUNCTION 14632a1b4 FUN_14632a1b4 body=26 status=ok
// SIG undefined FUN_14632a1b4(void)

void FUN_14632a1b4(longlong param_1)

{
  FUN_1401c3216();
  *(undefined1 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 14632a1ce FUN_14632a1ce body=47 status=ok
// SIG undefined FUN_14632a1ce(void)

longlong FUN_14632a1ce(void)

{
  if (DAT_14caa8a38 == 0) {
    FUN_14073dd9a(&DAT_14caa8a38,&PTR_LAB_14a3ead48);
  }
  return DAT_14caa8a38;
}



// FUNCTION 14632a1fd FUN_14632a1fd body=47 status=ok
// SIG undefined FUN_14632a1fd(void)

longlong FUN_14632a1fd(void)

{
  if (DAT_14caa8a58 == 0) {
    FUN_14086a14e(&DAT_14caa8a58,&PTR_FUN_14a3eb318);
  }
  return DAT_14caa8a58;
}



// FUNCTION 14632a22c FUN_14632a22c body=48 status=ok
// SIG undefined FUN_14632a22c(void)

void FUN_14632a22c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14a3ee6c0;
  return;
}



// FUNCTION 14632a25c FUN_14632a25c body=55 status=ok
// SIG undefined FUN_14632a25c(void)

void FUN_14632a25c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8a78 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8a78 = FUN_140002ddd(FUN_14632a293,uVar1,L"RemovalEventCallbackWrapper");
  }
  return;
}



// FUNCTION 14632a293 FUN_14632a293 body=47 status=ok
// SIG undefined FUN_14632a293(void)

longlong FUN_14632a293(void)

{
  if (DAT_14caa8a70 == 0) {
    FUN_14086a14e(&DAT_14caa8a70,&PTR_FUN_14a3eb3a8);
  }
  return DAT_14caa8a70;
}



// FUNCTION 14632a2c2 FUN_14632a2c2 body=48 status=ok
// SIG undefined FUN_14632a2c2(void)

void FUN_14632a2c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14a3ee820;
  return;
}



// FUNCTION 14632a2f2 FUN_14632a2f2 body=55 status=ok
// SIG undefined FUN_14632a2f2(void)

void FUN_14632a2f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8a90 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8a90 = FUN_140002ddd(FUN_14632a329,uVar1,L"CrumblingEventCallbackWrapper");
  }
  return;
}



// FUNCTION 14632a329 FUN_14632a329 body=47 status=ok
// SIG undefined FUN_14632a329(void)

longlong FUN_14632a329(void)

{
  if (DAT_14caa8a88 == 0) {
    FUN_14086a14e(&DAT_14caa8a88,&PTR_FUN_14a3eb440);
  }
  return DAT_14caa8a88;
}



// FUNCTION 14632a358 FUN_14632a358 body=48 status=ok
// SIG undefined FUN_14632a358(void)

void FUN_14632a358(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14a3ee980;
  return;
}



// FUNCTION 14632a388 FUN_14632a388 body=55 status=ok
// SIG undefined FUN_14632a388(void)

void FUN_14632a388(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8aa8 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8aa8 = FUN_140002ddd(FUN_14632a3bf,uVar1,L"ChaosHandlerSet");
  }
  return;
}



// FUNCTION 14632a3bf FUN_14632a3bf body=47 status=ok
// SIG undefined FUN_14632a3bf(void)

longlong FUN_14632a3bf(void)

{
  if (DAT_14caa8aa0 == 0) {
    FUN_14086a14e(&DAT_14caa8aa0,&PTR_FUN_14a3eb540);
  }
  return DAT_14caa8aa0;
}



// FUNCTION 14632a3ee FUN_14632a3ee body=48 status=ok
// SIG undefined FUN_14632a3ee(void)

void FUN_14632a3ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14a3eeae0;
  return;
}



// FUNCTION 14632a429 FUN_14632a429 body=47 status=ok
// SIG undefined FUN_14632a429(void)

longlong FUN_14632a429(void)

{
  if (DAT_14caa8ac0 == 0) {
    FUN_14073dd9a(&DAT_14caa8ac0,&PTR_LAB_14a3eba08);
  }
  return DAT_14caa8ac0;
}



// FUNCTION 14632a458 FUN_14632a458 body=55 status=ok
// SIG undefined FUN_14632a458(void)

void FUN_14632a458(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8ad8 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8ad8 = FUN_140002ddd(FUN_14632a48f,uVar1,L"ChaosPhysicsCollisionInfo");
  }
  return;
}



// FUNCTION 14632a48f FUN_14632a48f body=49 status=ok
// SIG undefined FUN_14632a48f(void)

longlong FUN_14632a48f(void)

{
  if (DAT_14caa8ad0 == 0) {
    FUN_14086a14e(&DAT_14caa8ad0,&PTR_FUN_14a3ec3d8);
  }
  return DAT_14caa8ad0;
}



// FUNCTION 14632a4c0 FUN_14632a4c0 body=48 status=ok
// SIG undefined FUN_14632a4c0(void)

void FUN_14632a4c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14a3eec50;
  return;
}



// FUNCTION 14632a4f0 FUN_14632a4f0 body=35 status=ok
// SIG undefined FUN_14632a4f0(void)

void FUN_14632a4f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3ec570;
  return;
}



// FUNCTION 14632a51d FUN_14632a51d body=47 status=ok
// SIG undefined FUN_14632a51d(void)

longlong FUN_14632a51d(void)

{
  if (DAT_14caa8af8 == 0) {
    FUN_14073dd9a(&DAT_14caa8af8,&PTR_LAB_14a3ec528);
  }
  return DAT_14caa8af8;
}



// FUNCTION 14632a54c FUN_14632a54c body=47 status=ok
// SIG undefined FUN_14632a54c(void)

longlong FUN_14632a54c(void)

{
  if (DAT_14caa8b18 == 0) {
    FUN_14073dd9a(&DAT_14caa8b18,&PTR_LAB_14a3ec9c0);
  }
  return DAT_14caa8b18;
}



// FUNCTION 14632a57b FUN_14632a57b body=47 status=ok
// SIG undefined FUN_14632a57b(void)

longlong FUN_14632a57b(void)

{
  if (DAT_14caa8b08 == 0) {
    FUN_14000fc22(&DAT_14caa8b08,&PTR_FUN_14a3ec8e8);
  }
  return DAT_14caa8b08;
}



// FUNCTION 14632a5aa FUN_14632a5aa body=34 status=ok
// SIG undefined FUN_14632a5aa(void)

void FUN_14632a5aa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a65a34();
  FUN_14069c8d6(uVar1,&PTR_s_ConvertPhysicsCollisionToHitResu_14a3ec930,1);
  return;
}



// FUNCTION 14632a5cc FUN_14632a5cc body=35 status=ok
// SIG undefined FUN_14632a5cc(void)

void FUN_14632a5cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3eca00;
  return;
}



// FUNCTION 14632a5ef FUN_14632a5ef body=35 status=ok
// SIG undefined FUN_14632a5ef(void)

void FUN_14632a5ef(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3ecda0;
  return;
}



// FUNCTION 14632a612 FUN_14632a612 body=47 status=ok
// SIG undefined FUN_14632a612(void)

longlong FUN_14632a612(void)

{
  if (DAT_14caa8b30 == 0) {
    FUN_14073dd9a(&DAT_14caa8b30,&PTR_LAB_14a3ecd58);
  }
  return DAT_14caa8b30;
}



// FUNCTION 14632a641 FUN_14632a641 body=49 status=ok
// SIG undefined FUN_14632a641(void)

longlong FUN_14632a641(void)

{
  if (DAT_14caa8b40 == 0) {
    FUN_1409ce572(&DAT_14caa8b40,&PTR_FUN_14a3ed100);
  }
  return DAT_14caa8b40;
}



// FUNCTION 14632a672 FUN_14632a672 body=55 status=ok
// SIG undefined FUN_14632a672(void)

void FUN_14632a672(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8b60 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8b60 = FUN_140002ddd(FUN_14632a6a9,uVar1,L"ChaosDebugSubstepControl");
  }
  return;
}



// FUNCTION 14632a6a9 FUN_14632a6a9 body=47 status=ok
// SIG undefined FUN_14632a6a9(void)

longlong FUN_14632a6a9(void)

{
  if (DAT_14caa8b58 == 0) {
    FUN_14086a14e(&DAT_14caa8b58,&PTR_FUN_14a3ed278);
  }
  return DAT_14caa8b58;
}



// FUNCTION 14632a6d8 FUN_14632a6d8 body=48 status=ok
// SIG undefined FUN_14632a6d8(void)

void FUN_14632a6d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14a3eefa0;
  return;
}



// FUNCTION 14632a708 FUN_14632a708 body=55 status=ok
// SIG undefined FUN_14632a708(void)

void FUN_14632a708(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8b78 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8b78 = FUN_140002ddd(FUN_14632a73f,uVar1,L"DataflowRigidSolverProxy");
  }
  return;
}



// FUNCTION 14632a73f FUN_14632a73f body=47 status=ok
// SIG undefined FUN_14632a73f(void)

longlong FUN_14632a73f(void)

{
  if (DAT_14caa8b70 == 0) {
    FUN_14086a14e(&DAT_14caa8b70,&PTR_FUN_14a3ed300);
  }
  return DAT_14caa8b70;
}



// FUNCTION 14632a76e FUN_14632a76e body=48 status=ok
// SIG undefined FUN_14632a76e(void)

void FUN_14632a76e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14a3ef110;
  return;
}



// FUNCTION 14632a79e FUN_14632a79e body=49 status=ok
// SIG undefined FUN_14632a79e(void)

longlong FUN_14632a79e(void)

{
  if (DAT_14caa8ba0 == 0) {
    FUN_14073dd9a(&DAT_14caa8ba0,&PTR_LAB_14a3edb20);
  }
  return DAT_14caa8ba0;
}



// FUNCTION 14632a7cf FUN_14632a7cf body=47 status=ok
// SIG undefined FUN_14632a7cf(void)

longlong FUN_14632a7cf(void)

{
  if (DAT_14caa8b88 == 0) {
    FUN_14000fc22(&DAT_14caa8b88,&PTR_FUN_14a3ed350);
  }
  return DAT_14caa8b88;
}



// FUNCTION 14632a7fe FUN_14632a7fe body=47 status=ok
// SIG undefined FUN_14632a7fe(void)

longlong FUN_14632a7fe(void)

{
  if (DAT_14caa8b90 == 0) {
    FUN_14000fc22(&DAT_14caa8b90,&PTR_FUN_14a3ed3e8);
  }
  return DAT_14caa8b90;
}



// FUNCTION 14632a82e FUN_14632a82e body=34 status=ok
// SIG undefined FUN_14632a82e(void)

void FUN_14632a82e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14119cd9e();
  FUN_14069c8d6(uVar1,&PTR_s_SetAsCurrentWorldSolver_14a3ed430,2);
  return;
}



// FUNCTION 14632a856 FUN_14632a856 body=192 status=ok
// SIG undefined FUN_14632a856(void)

void FUN_14632a856(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a3ef410;
  puVar1[3] = &DAT_14caa8bf4;
  puVar1[4] = FUN_1459cecea;
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



// FUNCTION 14632a918 FUN_14632a918 body=48 status=ok
// SIG undefined FUN_14632a918(void)

void FUN_14632a918(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14091baa4();
  uVar2 = FUN_14119cd9e();
  uVar3 = FUN_14119cd9e();
  *(undefined8 *)(lVar1 + 0xb8) = uVar3;
  *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 14632a948 FUN_14632a948 body=62 status=ok
// SIG undefined FUN_14632a948(void)

void FUN_14632a948(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140da6ea8(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3ee3c0;
  puVar1[7] = &PTR_FUN_14a3ee680;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14632a986 FUN_14632a986 body=47 status=ok
// SIG undefined FUN_14632a986(void)

longlong FUN_14632a986(void)

{
  if (DAT_14caa8c00 == 0) {
    FUN_14073dd9a(&DAT_14caa8c00,&PTR_LAB_14a3ee378);
  }
  return DAT_14caa8c00;
}



// FUNCTION 14632a9b6 FUN_14632a9b6 body=31 status=ok
// SIG undefined FUN_14632a9b6(void)

void FUN_14632a9b6(longlong param_1)

{
  longlong *plVar1;
  
  FUN_144a63f30();
  plVar1 = (longlong *)FUN_14091baa4();
  *plVar1 = param_1 + 0x38;
  return;
}



// FUNCTION 14632a9d6 FUN_14632a9d6 body=40 status=ok
// SIG undefined FUN_14632a9d6(void)

undefined8 FUN_14632a9d6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632a9fe FUN_14632a9fe body=40 status=ok
// SIG undefined FUN_14632a9fe(void)

undefined8 FUN_14632a9fe(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632aa26 FUN_14632aa26 body=40 status=ok
// SIG undefined FUN_14632aa26(void)

undefined8 FUN_14632aa26(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632aa4e FUN_14632aa4e body=40 status=ok
// SIG undefined FUN_14632aa4e(void)

undefined8 FUN_14632aa4e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632aa76 FUN_14632aa76 body=40 status=ok
// SIG undefined FUN_14632aa76(void)

undefined8 FUN_14632aa76(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632aa9e FUN_14632aa9e body=40 status=ok
// SIG undefined FUN_14632aa9e(void)

undefined8 FUN_14632aa9e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632aac6 FUN_14632aac6 body=80 status=ok
// SIG undefined FUN_14632aac6(void)

undefined8 * FUN_14632aac6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3ee3c0;
  param_1[7] = &PTR_FUN_14a3ee680;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632ab16 FUN_14632ab16 body=29 status=ok
// SIG undefined FUN_14632ab16(void)

undefined8 FUN_14632ab16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632ab34 FUN_14632ab34 body=29 status=ok
// SIG undefined FUN_14632ab34(void)

undefined8 FUN_14632ab34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632ab52 FUN_14632ab52 body=29 status=ok
// SIG undefined FUN_14632ab52(void)

undefined8 FUN_14632ab52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632ab70 FUN_14632ab70 body=29 status=ok
// SIG undefined FUN_14632ab70(void)

undefined8 FUN_14632ab70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632ab8e FUN_14632ab8e body=29 status=ok
// SIG undefined FUN_14632ab8e(void)

undefined8 FUN_14632ab8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632abac FUN_14632abac body=29 status=ok
// SIG undefined FUN_14632abac(void)

undefined8 FUN_14632abac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632abca FUN_14632abca body=29 status=ok
// SIG undefined FUN_14632abca(void)

undefined8 FUN_14632abca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632abe8 FUN_14632abe8 body=93 status=ok
// SIG undefined FUN_14632abe8(void)

void FUN_14632abe8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3ef410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14632ac46 FUN_14632ac46 body=29 status=ok
// SIG undefined FUN_14632ac46(void)

undefined8 FUN_14632ac46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632ac6d FUN_14632ac6d body=47 status=ok
// SIG undefined FUN_14632ac6d(void)

longlong FUN_14632ac6d(void)

{
  if (DAT_14caa8c30 == 0) {
    FUN_14073dd9a(&DAT_14caa8c30,&PTR_LAB_14a3ef708);
  }
  return DAT_14caa8c30;
}



// FUNCTION 14632ac9c FUN_14632ac9c body=39 status=ok
// SIG undefined FUN_14632ac9c(void)

void FUN_14632ac9c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14a3efe60;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14632acc8 FUN_14632acc8 body=47 status=ok
// SIG undefined FUN_14632acc8(void)

longlong FUN_14632acc8(void)

{
  if (DAT_14caa8c48 == 0) {
    FUN_14073dd9a(&DAT_14caa8c48,&PTR_LAB_14a3efe18);
  }
  return DAT_14caa8c48;
}



// FUNCTION 14632acf7 FUN_14632acf7 body=49 status=ok
// SIG undefined FUN_14632acf7(void)

longlong FUN_14632acf7(void)

{
  if (DAT_14caa8cb8 == 0) {
    FUN_14073dd9a(&DAT_14caa8cb8,&PTR_LAB_14a3f12c0);
  }
  return DAT_14caa8cb8;
}



// FUNCTION 14632ad28 FUN_14632ad28 body=47 status=ok
// SIG undefined FUN_14632ad28(void)

longlong FUN_14632ad28(void)

{
  if (DAT_14caa8c58 == 0) {
    FUN_14000fc22(&DAT_14caa8c58,&PTR_FUN_14a3f0260);
  }
  return DAT_14caa8c58;
}



// FUNCTION 14632ad57 FUN_14632ad57 body=47 status=ok
// SIG undefined FUN_14632ad57(void)

longlong FUN_14632ad57(void)

{
  if (DAT_14caa8c60 == 0) {
    FUN_14000fc22(&DAT_14caa8c60,&PTR_FUN_14a3f03d8);
  }
  return DAT_14caa8c60;
}



// FUNCTION 14632ad86 FUN_14632ad86 body=47 status=ok
// SIG undefined FUN_14632ad86(void)

longlong FUN_14632ad86(void)

{
  if (DAT_14caa8c68 == 0) {
    FUN_14000fc22(&DAT_14caa8c68,&PTR_FUN_14a3f0510);
  }
  return DAT_14caa8c68;
}



// FUNCTION 14632adb5 FUN_14632adb5 body=47 status=ok
// SIG undefined FUN_14632adb5(void)

longlong FUN_14632adb5(void)

{
  if (DAT_14caa8c70 == 0) {
    FUN_14000fc22(&DAT_14caa8c70,&PTR_FUN_14a3f0688);
  }
  return DAT_14caa8c70;
}



// FUNCTION 14632ade4 FUN_14632ade4 body=47 status=ok
// SIG undefined FUN_14632ade4(void)

longlong FUN_14632ade4(void)

{
  if (DAT_14caa8c78 == 0) {
    FUN_14000fc22(&DAT_14caa8c78,&PTR_FUN_14a3f07b0);
  }
  return DAT_14caa8c78;
}



// FUNCTION 14632ae13 FUN_14632ae13 body=47 status=ok
// SIG undefined FUN_14632ae13(void)

longlong FUN_14632ae13(void)

{
  if (DAT_14caa8c80 == 0) {
    FUN_14000fc22(&DAT_14caa8c80,&PTR_FUN_14a3f0920);
  }
  return DAT_14caa8c80;
}



// FUNCTION 14632ae42 FUN_14632ae42 body=47 status=ok
// SIG undefined FUN_14632ae42(void)

longlong FUN_14632ae42(void)

{
  if (DAT_14caa8c88 == 0) {
    FUN_14000fc22(&DAT_14caa8c88,&PTR_FUN_14a3f0a50);
  }
  return DAT_14caa8c88;
}



// FUNCTION 14632ae71 FUN_14632ae71 body=47 status=ok
// SIG undefined FUN_14632ae71(void)

longlong FUN_14632ae71(void)

{
  if (DAT_14caa8c90 == 0) {
    FUN_14000fc22(&DAT_14caa8c90,&PTR_FUN_14a3f0c00);
  }
  return DAT_14caa8c90;
}



// FUNCTION 14632aea0 FUN_14632aea0 body=47 status=ok
// SIG undefined FUN_14632aea0(void)

longlong FUN_14632aea0(void)

{
  if (DAT_14caa8c98 == 0) {
    FUN_14000fc22(&DAT_14caa8c98,&PTR_FUN_14a3f0db8);
  }
  return DAT_14caa8c98;
}



// FUNCTION 14632aecf FUN_14632aecf body=47 status=ok
// SIG undefined FUN_14632aecf(void)

longlong FUN_14632aecf(void)

{
  if (DAT_14caa8ca0 == 0) {
    FUN_14000fc22(&DAT_14caa8ca0,&PTR_FUN_14a3f0e10);
  }
  return DAT_14caa8ca0;
}



// FUNCTION 14632aefe FUN_14632aefe body=47 status=ok
// SIG undefined FUN_14632aefe(void)

longlong FUN_14632aefe(void)

{
  if (DAT_14caa8ca8 == 0) {
    FUN_14000fc22(&DAT_14caa8ca8,&PTR_FUN_14a3f0e68);
  }
  return DAT_14caa8ca8;
}



// FUNCTION 14632af2e FUN_14632af2e body=34 status=ok
// SIG undefined FUN_14632af2e(void)

void FUN_14632af2e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14595739c();
  FUN_14069c8d6(uVar1,&PTR_s_AddFieldCommand_14a3f0eb0,0xb);
  return;
}



// FUNCTION 14632af50 FUN_14632af50 body=49 status=ok
// SIG undefined FUN_14632af50(void)

longlong FUN_14632af50(void)

{
  if (DAT_14caa8fa8 == 0) {
    FUN_14086a14e(&DAT_14caa8fa8,&PTR_FUN_14a3fd638);
  }
  return DAT_14caa8fa8;
}



// FUNCTION 14632af81 FUN_14632af81 body=57 status=ok
// SIG undefined FUN_14632af81(void)

void FUN_14632af81(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f1f30;
  puVar1[5] = &PTR_FUN_14a3f23c0;
  puVar1[6] = &PTR_LAB_14a3f2400;
  return;
}



// FUNCTION 14632afbf FUN_14632afbf body=49 status=ok
// SIG undefined FUN_14632afbf(void)

longlong FUN_14632afbf(void)

{
  if (DAT_14caa8cd8 == 0) {
    FUN_14073dd9a(&DAT_14caa8cd8,&PTR_LAB_14a3f1ee8);
  }
  return DAT_14caa8cd8;
}



// FUNCTION 14632aff5 FUN_14632aff5 body=47 status=ok
// SIG undefined FUN_14632aff5(void)

longlong FUN_14632aff5(void)

{
  if (DAT_14caa8cf8 == 0) {
    FUN_14073dd9a(&DAT_14caa8cf8,&PTR_LAB_14a3f2600);
  }
  return DAT_14caa8cf8;
}



// FUNCTION 14632b024 FUN_14632b024 body=47 status=ok
// SIG undefined FUN_14632b024(void)

longlong FUN_14632b024(void)

{
  if (DAT_14caa8ce8 == 0) {
    FUN_14000fc22(&DAT_14caa8ce8,&PTR_FUN_14a3f24f8);
  }
  return DAT_14caa8ce8;
}



// FUNCTION 14632b054 FUN_14632b054 body=34 status=ok
// SIG undefined FUN_14632b054(void)

void FUN_14632b054(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598efa6();
  FUN_14069c8d6(uVar1,&PTR_s_SetMetaDataIteration_14a3f2540,1);
  return;
}



// FUNCTION 14632b076 FUN_14632b076 body=57 status=ok
// SIG undefined FUN_14632b076(void)

void FUN_14632b076(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f2640;
  puVar1[5] = &PTR_FUN_14a3f2ad0;
  puVar1[6] = &PTR_LAB_14a3f2b10;
  return;
}



// FUNCTION 14632b0b4 FUN_14632b0b4 body=47 status=ok
// SIG undefined FUN_14632b0b4(void)

longlong FUN_14632b0b4(void)

{
  if (DAT_14caa8d18 == 0) {
    FUN_14073dd9a(&DAT_14caa8d18,&PTR_LAB_14a3f2d50);
  }
  return DAT_14caa8d18;
}



// FUNCTION 14632b0e3 FUN_14632b0e3 body=47 status=ok
// SIG undefined FUN_14632b0e3(void)

longlong FUN_14632b0e3(void)

{
  if (DAT_14caa8d08 == 0) {
    FUN_14000fc22(&DAT_14caa8d08,&PTR_FUN_14a3f2c28);
  }
  return DAT_14caa8d08;
}



// FUNCTION 14632b112 FUN_14632b112 body=34 status=ok
// SIG undefined FUN_14632b112(void)

void FUN_14632b112(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f092();
  FUN_14069c8d6(uVar1,&PTR_s_SetMetaDataaProcessingResolution_14a3f2c70,1);
  return;
}



// FUNCTION 14632b134 FUN_14632b134 body=57 status=ok
// SIG undefined FUN_14632b134(void)

void FUN_14632b134(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f2d90;
  puVar1[5] = &PTR_FUN_14a3f3220;
  puVar1[6] = &PTR_LAB_14a3f3260;
  return;
}



// FUNCTION 14632b172 FUN_14632b172 body=47 status=ok
// SIG undefined FUN_14632b172(void)

longlong FUN_14632b172(void)

{
  if (DAT_14caa8d38 == 0) {
    FUN_14073dd9a(&DAT_14caa8d38,&PTR_LAB_14a3f35a0);
  }
  return DAT_14caa8d38;
}



// FUNCTION 14632b1a1 FUN_14632b1a1 body=47 status=ok
// SIG undefined FUN_14632b1a1(void)

longlong FUN_14632b1a1(void)

{
  if (DAT_14caa8d28 == 0) {
    FUN_14000fc22(&DAT_14caa8d28,&PTR_FUN_14a3f33f8);
  }
  return DAT_14caa8d28;
}



// FUNCTION 14632b1d0 FUN_14632b1d0 body=34 status=ok
// SIG undefined FUN_14632b1d0(void)

void FUN_14632b1d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f17e();
  FUN_14069c8d6(uVar1,&PTR_s_SetMetaDataFilterType_14a3f3440,1);
  return;
}



// FUNCTION 14632b1f2 FUN_14632b1f2 body=57 status=ok
// SIG undefined FUN_14632b1f2(void)

void FUN_14632b1f2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f35e0;
  puVar1[5] = &PTR_FUN_14a3f3a70;
  puVar1[6] = &PTR_LAB_14a3f3ab0;
  return;
}



// FUNCTION 14632b22b FUN_14632b22b body=57 status=ok
// SIG undefined FUN_14632b22b(void)

void FUN_14632b22b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f3b80;
  puVar1[5] = &PTR_FUN_14a3f4010;
  puVar1[6] = &PTR_LAB_14a3f4050;
  return;
}



// FUNCTION 14632b269 FUN_14632b269 body=49 status=ok
// SIG undefined FUN_14632b269(void)

longlong FUN_14632b269(void)

{
  if (DAT_14caa8d50 == 0) {
    FUN_14073dd9a(&DAT_14caa8d50,&PTR_LAB_14a3f3b38);
  }
  return DAT_14caa8d50;
}



// FUNCTION 14632b29a FUN_14632b29a body=57 status=ok
// SIG undefined FUN_14632b29a(void)

void FUN_14632b29a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f4120;
  puVar1[5] = &PTR_FUN_14a3f45b0;
  puVar1[6] = &PTR_LAB_14a3f45f0;
  return;
}



// FUNCTION 14632b2d8 FUN_14632b2d8 body=49 status=ok
// SIG undefined FUN_14632b2d8(void)

longlong FUN_14632b2d8(void)

{
  if (DAT_14caa8d68 == 0) {
    FUN_14073dd9a(&DAT_14caa8d68,&PTR_LAB_14a3f40d8);
  }
  return DAT_14caa8d68;
}



// FUNCTION 14632b309 FUN_14632b309 body=57 status=ok
// SIG undefined FUN_14632b309(void)

void FUN_14632b309(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f46c0;
  puVar1[5] = &PTR_FUN_14a3f4b50;
  puVar1[6] = &PTR_LAB_14a3f4b90;
  return;
}



// FUNCTION 14632b347 FUN_14632b347 body=49 status=ok
// SIG undefined FUN_14632b347(void)

longlong FUN_14632b347(void)

{
  if (DAT_14caa8d80 == 0) {
    FUN_14073dd9a(&DAT_14caa8d80,&PTR_LAB_14a3f4678);
  }
  return DAT_14caa8d80;
}



// FUNCTION 14632b378 FUN_14632b378 body=57 status=ok
// SIG undefined FUN_14632b378(void)

void FUN_14632b378(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3f4c70;
  puVar1[5] = &PTR_FUN_14a3f5100;
  puVar1[6] = &PTR_LAB_14a3f5140;
  return;
}



// FUNCTION 14632b3b1 FUN_14632b3b1 body=49 status=ok
// SIG undefined FUN_14632b3b1(void)

longlong FUN_14632b3b1(void)

{
  if (DAT_14caa8d98 == 0) {
    FUN_14073dd9a(&DAT_14caa8d98,&PTR_LAB_14a3f4c28);
  }
  return DAT_14caa8d98;
}



// FUNCTION 14632b3e7 FUN_14632b3e7 body=47 status=ok
// SIG undefined FUN_14632b3e7(void)

longlong FUN_14632b3e7(void)

{
  if (DAT_14caa8db8 == 0) {
    FUN_14073dd9a(&DAT_14caa8db8,&PTR_LAB_14a3f5320);
  }
  return DAT_14caa8db8;
}



// FUNCTION 14632b416 FUN_14632b416 body=47 status=ok
// SIG undefined FUN_14632b416(void)

longlong FUN_14632b416(void)

{
  if (DAT_14caa8da8 == 0) {
    FUN_14000fc22(&DAT_14caa8da8,&PTR_FUN_14a3f5238);
  }
  return DAT_14caa8da8;
}



// FUNCTION 14632b446 FUN_14632b446 body=34 status=ok
// SIG undefined FUN_14632b446(void)

void FUN_14632b446(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f356();
  FUN_14069c8d6(uVar1,&PTR_s_SetUniformInteger_14a3f5280,1);
  return;
}



// FUNCTION 14632b468 FUN_14632b468 body=72 status=ok
// SIG undefined FUN_14632b468(void)

void FUN_14632b468(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3f5360;
  puVar1[5] = &PTR_FUN_14a3f57f0;
  puVar1[6] = &PTR_LAB_14a3f5830;
  *(undefined4 *)(puVar1 + 0x22) = 0;
  return;
}



// FUNCTION 14632b4b5 FUN_14632b4b5 body=47 status=ok
// SIG undefined FUN_14632b4b5(void)

longlong FUN_14632b4b5(void)

{
  if (DAT_14caa8dd8 == 0) {
    FUN_14073dd9a(&DAT_14caa8dd8,&PTR_LAB_14a3f5c80);
  }
  return DAT_14caa8dd8;
}



// FUNCTION 14632b4e4 FUN_14632b4e4 body=47 status=ok
// SIG undefined FUN_14632b4e4(void)

longlong FUN_14632b4e4(void)

{
  if (DAT_14caa8dc8 == 0) {
    FUN_14000fc22(&DAT_14caa8dc8,&PTR_FUN_14a3f5a68);
  }
  return DAT_14caa8dc8;
}



// FUNCTION 14632b514 FUN_14632b514 body=34 status=ok
// SIG undefined FUN_14632b514(void)

void FUN_14632b514(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f442();
  FUN_14069c8d6(uVar1,&PTR_s_SetRadialIntMask_14a3f5ab0,1);
  return;
}



// FUNCTION 14632b53b FUN_14632b53b body=47 status=ok
// SIG undefined FUN_14632b53b(void)

longlong FUN_14632b53b(void)

{
  if (DAT_14caa8df8 == 0) {
    FUN_14073dd9a(&DAT_14caa8df8,&PTR_LAB_14a3f6370);
  }
  return DAT_14caa8df8;
}



// FUNCTION 14632b56a FUN_14632b56a body=47 status=ok
// SIG undefined FUN_14632b56a(void)

longlong FUN_14632b56a(void)

{
  if (DAT_14caa8de8 == 0) {
    FUN_14000fc22(&DAT_14caa8de8,&PTR_FUN_14a3f6288);
  }
  return DAT_14caa8de8;
}



// FUNCTION 14632b59a FUN_14632b59a body=34 status=ok
// SIG undefined FUN_14632b59a(void)

void FUN_14632b59a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f52e();
  FUN_14069c8d6(uVar1,&PTR_s_SetUniformScalar_14a3f62d0,1);
  return;
}



// FUNCTION 14632b5bc FUN_14632b5bc body=72 status=ok
// SIG undefined FUN_14632b5bc(void)

void FUN_14632b5bc(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3f63b0;
  puVar1[5] = &PTR_FUN_14a3f6840;
  puVar1[6] = &PTR_LAB_14a3f6880;
  *(undefined4 *)(puVar1 + 0x22) = 0x3f800000;
  return;
}



// FUNCTION 14632b609 FUN_14632b609 body=47 status=ok
// SIG undefined FUN_14632b609(void)

longlong FUN_14632b609(void)

{
  if (DAT_14caa8e18 == 0) {
    FUN_14073dd9a(&DAT_14caa8e18,&PTR_LAB_14a3f6d40);
  }
  return DAT_14caa8e18;
}



// FUNCTION 14632b638 FUN_14632b638 body=47 status=ok
// SIG undefined FUN_14632b638(void)

longlong FUN_14632b638(void)

{
  if (DAT_14caa8e08 == 0) {
    FUN_14000fc22(&DAT_14caa8e08,&PTR_FUN_14a3f6b10);
  }
  return DAT_14caa8e08;
}



// FUNCTION 14632b668 FUN_14632b668 body=34 status=ok
// SIG undefined FUN_14632b668(void)

void FUN_14632b668(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f61a();
  FUN_14069c8d6(uVar1,&PTR_s_SetWaveScalar_14a3f6b50,1);
  return;
}



// FUNCTION 14632b68f FUN_14632b68f body=47 status=ok
// SIG undefined FUN_14632b68f(void)

longlong FUN_14632b68f(void)

{
  if (DAT_14caa8e38 == 0) {
    FUN_14073dd9a(&DAT_14caa8e38,&PTR_LAB_14a3f7770);
  }
  return DAT_14caa8e38;
}



// FUNCTION 14632b6be FUN_14632b6be body=47 status=ok
// SIG undefined FUN_14632b6be(void)

longlong FUN_14632b6be(void)

{
  if (DAT_14caa8e28 == 0) {
    FUN_14000fc22(&DAT_14caa8e28,&PTR_FUN_14a3f74e8);
  }
  return DAT_14caa8e28;
}



// FUNCTION 14632b6ee FUN_14632b6ee body=34 status=ok
// SIG undefined FUN_14632b6ee(void)

void FUN_14632b6ee(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f706();
  FUN_14069c8d6(uVar1,&PTR_s_SetRadialFalloff_14a3f7530,1);
  return;
}



// FUNCTION 14632b715 FUN_14632b715 body=47 status=ok
// SIG undefined FUN_14632b715(void)

longlong FUN_14632b715(void)

{
  if (DAT_14caa8e58 == 0) {
    FUN_14073dd9a(&DAT_14caa8e58,&PTR_LAB_14a3f8210);
  }
  return DAT_14caa8e58;
}



// FUNCTION 14632b744 FUN_14632b744 body=47 status=ok
// SIG undefined FUN_14632b744(void)

longlong FUN_14632b744(void)

{
  if (DAT_14caa8e48 == 0) {
    FUN_14000fc22(&DAT_14caa8e48,&PTR_FUN_14a3f7f48);
  }
  return DAT_14caa8e48;
}



// FUNCTION 14632b774 FUN_14632b774 body=34 status=ok
// SIG undefined FUN_14632b774(void)

void FUN_14632b774(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f7f2();
  FUN_14069c8d6(uVar1,&PTR_s_SetPlaneFalloff_14a3f7f90,1);
  return;
}



// FUNCTION 14632b79b FUN_14632b79b body=47 status=ok
// SIG undefined FUN_14632b79b(void)

longlong FUN_14632b79b(void)

{
  if (DAT_14caa8e78 == 0) {
    FUN_14073dd9a(&DAT_14caa8e78,&PTR_LAB_14a3f8b90);
  }
  return DAT_14caa8e78;
}



// FUNCTION 14632b7ca FUN_14632b7ca body=47 status=ok
// SIG undefined FUN_14632b7ca(void)

longlong FUN_14632b7ca(void)

{
  if (DAT_14caa8e68 == 0) {
    FUN_14000fc22(&DAT_14caa8e68,&PTR_FUN_14a3f8958);
  }
  return DAT_14caa8e68;
}



// FUNCTION 14632b7fa FUN_14632b7fa body=34 status=ok
// SIG undefined FUN_14632b7fa(void)

void FUN_14632b7fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f8de();
  FUN_14069c8d6(uVar1,&PTR_s_SetBoxFalloff_14a3f89a0,1);
  return;
}



// FUNCTION 14632b821 FUN_14632b821 body=47 status=ok
// SIG undefined FUN_14632b821(void)

longlong FUN_14632b821(void)

{
  if (DAT_14caa8e98 == 0) {
    FUN_14073dd9a(&DAT_14caa8e98,&PTR_LAB_14a3f9380);
  }
  return DAT_14caa8e98;
}



// FUNCTION 14632b850 FUN_14632b850 body=47 status=ok
// SIG undefined FUN_14632b850(void)

longlong FUN_14632b850(void)

{
  if (DAT_14caa8e88 == 0) {
    FUN_14000fc22(&DAT_14caa8e88,&PTR_FUN_14a3f9210);
  }
  return DAT_14caa8e88;
}



// FUNCTION 14632b880 FUN_14632b880 body=34 status=ok
// SIG undefined FUN_14632b880(void)

void FUN_14632b880(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598f9ca();
  FUN_14069c8d6(uVar1,&PTR_s_SetNoiseField_14a3f9250,1);
  return;
}



// FUNCTION 14632b8a7 FUN_14632b8a7 body=47 status=ok
// SIG undefined FUN_14632b8a7(void)

longlong FUN_14632b8a7(void)

{
  if (DAT_14caa8eb8 == 0) {
    FUN_14073dd9a(&DAT_14caa8eb8,&PTR_LAB_14a3f9b00);
  }
  return DAT_14caa8eb8;
}



// FUNCTION 14632b8d6 FUN_14632b8d6 body=47 status=ok
// SIG undefined FUN_14632b8d6(void)

longlong FUN_14632b8d6(void)

{
  if (DAT_14caa8ea8 == 0) {
    FUN_14000fc22(&DAT_14caa8ea8,&PTR_FUN_14a3f99d0);
  }
  return DAT_14caa8ea8;
}



// FUNCTION 14632b906 FUN_14632b906 body=34 status=ok
// SIG undefined FUN_14632b906(void)

void FUN_14632b906(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598fab6();
  FUN_14069c8d6(uVar1,&PTR_s_SetUniformVector_14a3f9a10,1);
  return;
}



// FUNCTION 14632b928 FUN_14632b928 body=93 status=ok
// SIG undefined FUN_14632b928(void)

void FUN_14632b928(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3f9b40;
  puVar1[5] = &PTR_FUN_14a3f9fd0;
  puVar1[6] = &PTR_LAB_14a3fa010;
  *(undefined4 *)(puVar1 + 0x22) = 0x3f800000;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  return;
}



// FUNCTION 14632b98a FUN_14632b98a body=47 status=ok
// SIG undefined FUN_14632b98a(void)

longlong FUN_14632b98a(void)

{
  if (DAT_14caa8ed8 == 0) {
    FUN_14073dd9a(&DAT_14caa8ed8,&PTR_LAB_14a3fa280);
  }
  return DAT_14caa8ed8;
}



// FUNCTION 14632b9b9 FUN_14632b9b9 body=47 status=ok
// SIG undefined FUN_14632b9b9(void)

longlong FUN_14632b9b9(void)

{
  if (DAT_14caa8ec8 == 0) {
    FUN_14000fc22(&DAT_14caa8ec8,&PTR_FUN_14a3fa148);
  }
  return DAT_14caa8ec8;
}



// FUNCTION 14632b9e8 FUN_14632b9e8 body=34 status=ok
// SIG undefined FUN_14632b9e8(void)

void FUN_14632b9e8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598fba2();
  FUN_14069c8d6(uVar1,&PTR_s_SetRadialVector_14a3fa190,1);
  return;
}



// FUNCTION 14632ba0a FUN_14632ba0a body=93 status=ok
// SIG undefined FUN_14632ba0a(void)

void FUN_14632ba0a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3fa2c0;
  puVar1[5] = &PTR_FUN_14a3fa750;
  puVar1[6] = &PTR_LAB_14a3fa790;
  *(undefined4 *)(puVar1 + 0x22) = 0x3f800000;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  return;
}



// FUNCTION 14632ba6c FUN_14632ba6c body=47 status=ok
// SIG undefined FUN_14632ba6c(void)

longlong FUN_14632ba6c(void)

{
  if (DAT_14caa8ef8 == 0) {
    FUN_14073dd9a(&DAT_14caa8ef8,&PTR_LAB_14a3fa960);
  }
  return DAT_14caa8ef8;
}



// FUNCTION 14632ba9b FUN_14632ba9b body=47 status=ok
// SIG undefined FUN_14632ba9b(void)

longlong FUN_14632ba9b(void)

{
  if (DAT_14caa8ee8 == 0) {
    FUN_14000fc22(&DAT_14caa8ee8,&PTR_FUN_14a3fa880);
  }
  return DAT_14caa8ee8;
}



// FUNCTION 14632baca FUN_14632baca body=34 status=ok
// SIG undefined FUN_14632baca(void)

void FUN_14632baca(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598fc8e();
  FUN_14069c8d6(uVar1,&PTR_s_SetRandomVector_14a3fa8c0,1);
  return;
}



// FUNCTION 14632baec FUN_14632baec body=72 status=ok
// SIG undefined FUN_14632baec(void)

void FUN_14632baec(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3fa9a0;
  puVar1[5] = &PTR_FUN_14a3fae30;
  puVar1[6] = &PTR_LAB_14a3fae70;
  *(undefined4 *)(puVar1 + 0x22) = 0x3f800000;
  return;
}



// FUNCTION 14632bb39 FUN_14632bb39 body=47 status=ok
// SIG undefined FUN_14632bb39(void)

longlong FUN_14632bb39(void)

{
  if (DAT_14caa8f18 == 0) {
    FUN_14073dd9a(&DAT_14caa8f18,&PTR_LAB_14a3fb220);
  }
  return DAT_14caa8f18;
}



// FUNCTION 14632bb68 FUN_14632bb68 body=47 status=ok
// SIG undefined FUN_14632bb68(void)

longlong FUN_14632bb68(void)

{
  if (DAT_14caa8f08 == 0) {
    FUN_14000fc22(&DAT_14caa8f08,&PTR_FUN_14a3fb060);
  }
  return DAT_14caa8f08;
}



// FUNCTION 14632bb98 FUN_14632bb98 body=34 status=ok
// SIG undefined FUN_14632bb98(void)

void FUN_14632bb98(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598fd7a();
  FUN_14069c8d6(uVar1,&PTR_s_SetOperatorField_14a3fb0a0,1);
  return;
}



// FUNCTION 14632bbba FUN_14632bbba body=89 status=ok
// SIG undefined FUN_14632bbba(void)

void FUN_14632bbba(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3fb260;
  puVar1[5] = &PTR_FUN_14a3fb6f0;
  puVar1[6] = &PTR_LAB_14a3fb730;
  *(undefined4 *)(puVar1 + 0x22) = 0x3f800000;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x25) = 0;
  return;
}



// FUNCTION 14632bc18 FUN_14632bc18 body=47 status=ok
// SIG undefined FUN_14632bc18(void)

longlong FUN_14632bc18(void)

{
  if (DAT_14caa8f38 == 0) {
    FUN_14073dd9a(&DAT_14caa8f38,&PTR_LAB_14a3fb930);
  }
  return DAT_14caa8f38;
}



// FUNCTION 14632bc47 FUN_14632bc47 body=47 status=ok
// SIG undefined FUN_14632bc47(void)

longlong FUN_14632bc47(void)

{
  if (DAT_14caa8f28 == 0) {
    FUN_14000fc22(&DAT_14caa8f28,&PTR_FUN_14a3fb838);
  }
  return DAT_14caa8f28;
}



// FUNCTION 14632bc76 FUN_14632bc76 body=34 status=ok
// SIG undefined FUN_14632bc76(void)

void FUN_14632bc76(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598fe66();
  FUN_14069c8d6(uVar1,&PTR_s_SetToIntegerField_14a3fb880,1);
  return;
}



// FUNCTION 14632bc98 FUN_14632bc98 body=73 status=ok
// SIG undefined FUN_14632bc98(void)

void FUN_14632bc98(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3fb970;
  puVar1[5] = &PTR_FUN_14a3fbe00;
  puVar1[6] = &PTR_LAB_14a3fbe40;
  puVar1[0x22] = 0;
  return;
}



// FUNCTION 14632bce6 FUN_14632bce6 body=47 status=ok
// SIG undefined FUN_14632bce6(void)

longlong FUN_14632bce6(void)

{
  if (DAT_14caa8f58 == 0) {
    FUN_14073dd9a(&DAT_14caa8f58,&PTR_LAB_14a3fc030);
  }
  return DAT_14caa8f58;
}



// FUNCTION 14632bd15 FUN_14632bd15 body=47 status=ok
// SIG undefined FUN_14632bd15(void)

longlong FUN_14632bd15(void)

{
  if (DAT_14caa8f48 == 0) {
    FUN_14000fc22(&DAT_14caa8f48,&PTR_FUN_14a3fbf40);
  }
  return DAT_14caa8f48;
}



// FUNCTION 14632bd44 FUN_14632bd44 body=34 status=ok
// SIG undefined FUN_14632bd44(void)

void FUN_14632bd44(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14598ff52();
  FUN_14069c8d6(uVar1,&PTR_s_SetToFloatField_14a3fbf80,1);
  return;
}



// FUNCTION 14632bd66 FUN_14632bd66 body=73 status=ok
// SIG undefined FUN_14632bd66(void)

void FUN_14632bd66(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3fc070;
  puVar1[5] = &PTR_FUN_14a3fc500;
  puVar1[6] = &PTR_LAB_14a3fc540;
  puVar1[0x22] = 0;
  return;
}



// FUNCTION 14632bdb4 FUN_14632bdb4 body=47 status=ok
// SIG undefined FUN_14632bdb4(void)

longlong FUN_14632bdb4(void)

{
  if (DAT_14caa8f78 == 0) {
    FUN_14073dd9a(&DAT_14caa8f78,&PTR_LAB_14a3fc850);
  }
  return DAT_14caa8f78;
}



// FUNCTION 14632bde3 FUN_14632bde3 body=47 status=ok
// SIG undefined FUN_14632bde3(void)

longlong FUN_14632bde3(void)

{
  if (DAT_14caa8f68 == 0) {
    FUN_14000fc22(&DAT_14caa8f68,&PTR_FUN_14a3fc6d0);
  }
  return DAT_14caa8f68;
}



// FUNCTION 14632be12 FUN_14632be12 body=34 status=ok
// SIG undefined FUN_14632be12(void)

void FUN_14632be12(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599003e();
  FUN_14069c8d6(uVar1,&PTR_s_SetCullingField_14a3fc710,1);
  return;
}



// FUNCTION 14632be34 FUN_14632be34 body=79 status=ok
// SIG undefined FUN_14632be34(void)

void FUN_14632be34(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3fc890;
  puVar1[5] = &PTR_FUN_14a3fcd20;
  puVar1[6] = &PTR_LAB_14a3fcd60;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  return;
}



// FUNCTION 14632be88 FUN_14632be88 body=47 status=ok
// SIG undefined FUN_14632be88(void)

longlong FUN_14632be88(void)

{
  if (DAT_14caa8f98 == 0) {
    FUN_14073dd9a(&DAT_14caa8f98,&PTR_LAB_14a3fced0);
  }
  return DAT_14caa8f98;
}



// FUNCTION 14632beb7 FUN_14632beb7 body=47 status=ok
// SIG undefined FUN_14632beb7(void)

longlong FUN_14632beb7(void)

{
  if (DAT_14caa8f88 == 0) {
    FUN_14000fc22(&DAT_14caa8f88,&PTR_FUN_14a3fce18);
  }
  return DAT_14caa8f88;
}



// FUNCTION 14632bee6 FUN_14632bee6 body=34 status=ok
// SIG undefined FUN_14632bee6(void)

void FUN_14632bee6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599012a();
  FUN_14069c8d6(uVar1,&PTR_s_SetReturnResultsTerminal_14a3fce60,1);
  return;
}



// FUNCTION 14632bf08 FUN_14632bf08 body=62 status=ok
// SIG undefined FUN_14632bf08(void)

void FUN_14632bf08(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3fcf10;
  puVar1[5] = &PTR_FUN_14a3fd3a0;
  puVar1[6] = &PTR_LAB_14a3fd3e0;
  return;
}



// FUNCTION 14632bf46 FUN_14632bf46 body=48 status=ok
// SIG undefined FUN_14632bf46(void)

void FUN_14632bf46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a3fdd70;
  return;
}



// FUNCTION 14632bf76 FUN_14632bf76 body=40 status=ok
// SIG undefined FUN_14632bf76(void)

undefined8 FUN_14632bf76(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632bf9e FUN_14632bf9e body=40 status=ok
// SIG undefined FUN_14632bf9e(void)

undefined8 FUN_14632bf9e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632bfc6 FUN_14632bfc6 body=40 status=ok
// SIG undefined FUN_14632bfc6(void)

undefined8 FUN_14632bfc6(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632bfee FUN_14632bfee body=40 status=ok
// SIG undefined FUN_14632bfee(void)

undefined8 FUN_14632bfee(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c016 FUN_14632c016 body=40 status=ok
// SIG undefined FUN_14632c016(void)

undefined8 FUN_14632c016(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c03e FUN_14632c03e body=40 status=ok
// SIG undefined FUN_14632c03e(void)

undefined8 FUN_14632c03e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c066 FUN_14632c066 body=40 status=ok
// SIG undefined FUN_14632c066(void)

undefined8 FUN_14632c066(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c08e FUN_14632c08e body=40 status=ok
// SIG undefined FUN_14632c08e(void)

undefined8 FUN_14632c08e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c0b6 FUN_14632c0b6 body=40 status=ok
// SIG undefined FUN_14632c0b6(void)

undefined8 FUN_14632c0b6(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c0de FUN_14632c0de body=40 status=ok
// SIG undefined FUN_14632c0de(void)

undefined8 FUN_14632c0de(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c106 FUN_14632c106 body=40 status=ok
// SIG undefined FUN_14632c106(void)

undefined8 FUN_14632c106(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c12e FUN_14632c12e body=40 status=ok
// SIG undefined FUN_14632c12e(void)

undefined8 FUN_14632c12e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c156 FUN_14632c156 body=40 status=ok
// SIG undefined FUN_14632c156(void)

undefined8 FUN_14632c156(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c17e FUN_14632c17e body=40 status=ok
// SIG undefined FUN_14632c17e(void)

undefined8 FUN_14632c17e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c1a6 FUN_14632c1a6 body=40 status=ok
// SIG undefined FUN_14632c1a6(void)

undefined8 FUN_14632c1a6(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c1ce FUN_14632c1ce body=40 status=ok
// SIG undefined FUN_14632c1ce(void)

undefined8 FUN_14632c1ce(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c1f6 FUN_14632c1f6 body=40 status=ok
// SIG undefined FUN_14632c1f6(void)

undefined8 FUN_14632c1f6(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c21e FUN_14632c21e body=40 status=ok
// SIG undefined FUN_14632c21e(void)

undefined8 FUN_14632c21e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c246 FUN_14632c246 body=40 status=ok
// SIG undefined FUN_14632c246(void)

undefined8 FUN_14632c246(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c26e FUN_14632c26e body=40 status=ok
// SIG undefined FUN_14632c26e(void)

undefined8 FUN_14632c26e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c296 FUN_14632c296 body=40 status=ok
// SIG undefined FUN_14632c296(void)

undefined8 FUN_14632c296(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c2be FUN_14632c2be body=40 status=ok
// SIG undefined FUN_14632c2be(void)

undefined8 FUN_14632c2be(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c2e6 FUN_14632c2e6 body=40 status=ok
// SIG undefined FUN_14632c2e6(void)

undefined8 FUN_14632c2e6(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c30e FUN_14632c30e body=40 status=ok
// SIG undefined FUN_14632c30e(void)

undefined8 FUN_14632c30e(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c336 FUN_14632c336 body=40 status=ok
// SIG undefined FUN_14632c336(void)

undefined8 FUN_14632c336(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c35e FUN_14632c35e body=29 status=ok
// SIG undefined FUN_14632c35e(void)

undefined8 FUN_14632c35e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632c380 FUN_14632c380 body=49 status=ok
// SIG undefined FUN_14632c380(void)

longlong FUN_14632c380(void)

{
  if (DAT_14caa9010 == 0) {
    FUN_14073dd9a(&DAT_14caa9010,&PTR_LAB_14a3fe460);
  }
  return DAT_14caa9010;
}



// FUNCTION 14632c3b1 FUN_14632c3b1 body=47 status=ok
// SIG undefined FUN_14632c3b1(void)

longlong FUN_14632c3b1(void)

{
  if (DAT_14caa8ff0 == 0) {
    FUN_14000fc22(&DAT_14caa8ff0,&PTR_FUN_14a3fe0d8);
  }
  return DAT_14caa8ff0;
}



// FUNCTION 14632c3e0 FUN_14632c3e0 body=47 status=ok
// SIG undefined FUN_14632c3e0(void)

longlong FUN_14632c3e0(void)

{
  if (DAT_14caa8ff8 == 0) {
    FUN_14000fc22(&DAT_14caa8ff8,&PTR_FUN_14a3fe218);
  }
  return DAT_14caa8ff8;
}



// FUNCTION 14632c40f FUN_14632c40f body=47 status=ok
// SIG undefined FUN_14632c40f(void)

longlong FUN_14632c40f(void)

{
  if (DAT_14caa9000 == 0) {
    FUN_14000fc22(&DAT_14caa9000,&PTR_FUN_14a3fe348);
  }
  return DAT_14caa9000;
}



// FUNCTION 14632c43e FUN_14632c43e body=34 status=ok
// SIG undefined FUN_14632c43e(void)

void FUN_14632c43e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a65b20();
  FUN_14069c8d6(uVar1,&PTR_s_SetCustomInstanceDataByIndex_14a3fe390,3);
  return;
}



// FUNCTION 14632c460 FUN_14632c460 body=35 status=ok
// SIG undefined FUN_14632c460(void)

void FUN_14632c460(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3fe4a0;
  return;
}



// FUNCTION 14632c484 FUN_14632c484 body=55 status=ok
// SIG undefined FUN_14632c484(void)

void FUN_14632c484(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa9028 == 0) {
    uVar1 = FUN_140ef4a6d();
    DAT_14caa9028 = FUN_140002ddd(FUN_14632c4bb,uVar1,L"GeometryCollectionDamagePropagationData");
  }
  return;
}



// FUNCTION 14632c4bb FUN_14632c4bb body=49 status=ok
// SIG undefined FUN_14632c4bb(void)

longlong FUN_14632c4bb(void)

{
  if (DAT_14caa9020 == 0) {
    FUN_14086a14e(&DAT_14caa9020,&PTR_FUN_14a3fe8f0);
  }
  return DAT_14caa9020;
}



// FUNCTION 14632c4ec FUN_14632c4ec body=48 status=ok
// SIG undefined FUN_14632c4ec(void)

void FUN_14632c4ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a40bec0;
  return;
}



// FUNCTION 14632c51c FUN_14632c51c body=47 status=ok
// SIG undefined FUN_14632c51c(void)

longlong FUN_14632c51c(void)

{
  if (DAT_14caa9318 == 0) {
    FUN_14000fc22(&DAT_14caa9318,&PTR_FUN_14a4039a8);
  }
  return DAT_14caa9318;
}



// FUNCTION 14632c54b FUN_14632c54b body=47 status=ok
// SIG undefined FUN_14632c54b(void)

longlong FUN_14632c54b(void)

{
  if (DAT_14caa90d8 == 0) {
    FUN_14000fc22(&DAT_14caa90d8,&PTR_FUN_14a3ff5e0);
  }
  return DAT_14caa90d8;
}



// FUNCTION 14632c57a FUN_14632c57a body=47 status=ok
// SIG undefined FUN_14632c57a(void)

longlong FUN_14632c57a(void)

{
  if (DAT_14caa90d0 == 0) {
    FUN_14000fc22(&DAT_14caa90d0,&PTR_FUN_14a3ff4d0);
  }
  return DAT_14caa90d0;
}



// FUNCTION 14632c5a9 FUN_14632c5a9 body=47 status=ok
// SIG undefined FUN_14632c5a9(void)

longlong FUN_14632c5a9(void)

{
  if (DAT_14caa9328 == 0) {
    FUN_14000fc22(&DAT_14caa9328,&PTR_FUN_14a403b30);
  }
  return DAT_14caa9328;
}



// FUNCTION 14632c5d8 FUN_14632c5d8 body=47 status=ok
// SIG undefined FUN_14632c5d8(void)

longlong FUN_14632c5d8(void)

{
  if (DAT_14caa9320 == 0) {
    FUN_14000fc22(&DAT_14caa9320,&PTR_FUN_14a403a68);
  }
  return DAT_14caa9320;
}



// FUNCTION 14632c607 FUN_14632c607 body=47 status=ok
// SIG undefined FUN_14632c607(void)

longlong FUN_14632c607(void)

{
  if (DAT_14caa90e8 == 0) {
    FUN_14000fc22(&DAT_14caa90e8,&PTR_FUN_14a3ff7e8);
  }
  return DAT_14caa90e8;
}



// FUNCTION 14632c636 FUN_14632c636 body=47 status=ok
// SIG undefined FUN_14632c636(void)

longlong FUN_14632c636(void)

{
  if (DAT_14caa90e0 == 0) {
    FUN_14000fc22(&DAT_14caa90e0,&PTR_FUN_14a3ff6f0);
  }
  return DAT_14caa90e0;
}



// FUNCTION 14632c665 FUN_14632c665 body=47 status=ok
// SIG undefined FUN_14632c665(void)

longlong FUN_14632c665(void)

{
  if (DAT_14caa9330 == 0) {
    FUN_14000fc22(&DAT_14caa9330,&PTR_FUN_14a403bb0);
  }
  return DAT_14caa9330;
}



// FUNCTION 14632c694 FUN_14632c694 body=47 status=ok
// SIG undefined FUN_14632c694(void)

longlong FUN_14632c694(void)

{
  if (DAT_14caa9338 == 0) {
    FUN_14000fc22(&DAT_14caa9338,&PTR_FUN_14a403c28);
  }
  return DAT_14caa9338;
}



// FUNCTION 14632c6c3 FUN_14632c6c3 body=47 status=ok
// SIG undefined FUN_14632c6c3(void)

longlong FUN_14632c6c3(void)

{
  if (DAT_14caa93a8 == 0) {
    FUN_14000fc22(&DAT_14caa93a8,&PTR_FUN_14a404780);
  }
  return DAT_14caa93a8;
}



// FUNCTION 14632c6f2 FUN_14632c6f2 body=49 status=ok
// SIG undefined FUN_14632c6f2(void)

longlong FUN_14632c6f2(void)

{
  if (DAT_14caa93a0 == 0) {
    FUN_14000fc22(&DAT_14caa93a0,&PTR_FUN_14a4046b0);
  }
  return DAT_14caa93a0;
}



// FUNCTION 14632c723 FUN_14632c723 body=47 status=ok
// SIG undefined FUN_14632c723(void)

longlong FUN_14632c723(void)

{
  if (DAT_14caa9050 == 0) {
    FUN_1409ce572(&DAT_14caa9050,&PTR_FUN_14a3fea60);
  }
  return DAT_14caa9050;
}



// FUNCTION 14632c752 FUN_14632c752 body=47 status=ok
// SIG undefined FUN_14632c752(void)

longlong FUN_14632c752(void)

{
  if (DAT_14caa9068 == 0) {
    FUN_1409ce572(&DAT_14caa9068,&PTR_FUN_14a3fead0);
  }
  return DAT_14caa9068;
}



// FUNCTION 14632c781 FUN_14632c781 body=35 status=ok
// SIG undefined FUN_14632c781(void)

void FUN_14632c781(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3fec00;
  return;
}



// FUNCTION 14632c7a9 FUN_14632c7a9 body=47 status=ok
// SIG undefined FUN_14632c7a9(void)

longlong FUN_14632c7a9(void)

{
  if (DAT_14caa9088 == 0) {
    FUN_14073dd9a(&DAT_14caa9088,&PTR_LAB_14a3febb8);
  }
  return DAT_14caa9088;
}



// FUNCTION 14632c7d8 FUN_14632c7d8 body=35 status=ok
// SIG undefined FUN_14632c7d8(void)

void FUN_14632c7d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3fef50;
  return;
}



// FUNCTION 14632c7fb FUN_14632c7fb body=47 status=ok
// SIG undefined FUN_14632c7fb(void)

longlong FUN_14632c7fb(void)

{
  if (DAT_14caa90a0 == 0) {
    FUN_14073dd9a(&DAT_14caa90a0,&PTR_LAB_14a3fef08);
  }
  return DAT_14caa90a0;
}



// FUNCTION 14632c82a FUN_14632c82a body=47 status=ok
// SIG undefined FUN_14632c82a(void)

longlong FUN_14632c82a(void)

{
  if (DAT_14caa90c0 == 0) {
    FUN_14073dd9a(&DAT_14caa90c0,&PTR_LAB_14a3ff3b0);
  }
  return DAT_14caa90c0;
}



// FUNCTION 14632c859 FUN_14632c859 body=47 status=ok
// SIG undefined FUN_14632c859(void)

longlong FUN_14632c859(void)

{
  if (DAT_14caa90b0 == 0) {
    FUN_14000fc22(&DAT_14caa90b0,&PTR_FUN_14a3ff2e0);
  }
  return DAT_14caa90b0;
}



// FUNCTION 14632c888 FUN_14632c888 body=34 status=ok
// SIG undefined FUN_14632c888(void)

void FUN_14632c888(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145907348();
  FUN_14069c8d6(uVar1,&PTR_s_OnActorEndPlay_14a3ff320,1);
  return;
}


