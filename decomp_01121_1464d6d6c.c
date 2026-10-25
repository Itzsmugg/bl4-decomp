// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464d6d6c FUN_1464d6d6c body=40 status=ok
// SIG undefined FUN_1464d6d6c(void)

undefined8 FUN_1464d6d6c(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d6d94 FUN_1464d6d94 body=52 status=ok
// SIG undefined FUN_1464d6d94(void)

longlong FUN_1464d6d94(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x30);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d6dc8 FUN_1464d6dc8 body=40 status=ok
// SIG undefined FUN_1464d6dc8(void)

undefined8 FUN_1464d6dc8(undefined8 param_1,int param_2)

{
  FUN_1458e0158();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d6df0 FUN_1464d6df0 body=40 status=ok
// SIG undefined FUN_1464d6df0(void)

undefined8 FUN_1464d6df0(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d6e18 FUN_1464d6e18 body=124 status=ok
// SIG undefined FUN_1464d6e18(void)

longlong * FUN_1464d6e18(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x240,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b10ff10;
  FUN_1458caeb6(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1464d6e94 FUN_1464d6e94 body=34 status=ok
// SIG undefined FUN_1464d6e94(void)

undefined8 FUN_1464d6e94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6eb6 FUN_1464d6eb6 body=34 status=ok
// SIG undefined FUN_1464d6eb6(void)

undefined8 FUN_1464d6eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6ed8 FUN_1464d6ed8 body=34 status=ok
// SIG undefined FUN_1464d6ed8(void)

undefined8 FUN_1464d6ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6efa FUN_1464d6efa body=34 status=ok
// SIG undefined FUN_1464d6efa(void)

undefined8 FUN_1464d6efa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6f1c FUN_1464d6f1c body=34 status=ok
// SIG undefined FUN_1464d6f1c(void)

undefined8 FUN_1464d6f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6f3e FUN_1464d6f3e body=34 status=ok
// SIG undefined FUN_1464d6f3e(void)

undefined8 FUN_1464d6f3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6f60 FUN_1464d6f60 body=34 status=ok
// SIG undefined FUN_1464d6f60(void)

undefined8 FUN_1464d6f60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6f82 FUN_1464d6f82 body=34 status=ok
// SIG undefined FUN_1464d6f82(void)

undefined8 FUN_1464d6f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6fca FUN_1464d6fca body=34 status=ok
// SIG undefined FUN_1464d6fca(void)

undefined8 FUN_1464d6fca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d6fec FUN_1464d6fec body=34 status=ok
// SIG undefined FUN_1464d6fec(void)

undefined8 FUN_1464d6fec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d7018 FUN_1464d7018 body=34 status=ok
// SIG undefined FUN_1464d7018(void)

undefined8 FUN_1464d7018(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d703a FUN_1464d703a body=34 status=ok
// SIG undefined FUN_1464d703a(void)

undefined8 FUN_1464d703a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d705c FUN_1464d705c body=34 status=ok
// SIG undefined FUN_1464d705c(void)

undefined8 FUN_1464d705c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d707e FUN_1464d707e body=34 status=ok
// SIG undefined FUN_1464d707e(void)

undefined8 FUN_1464d707e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d70a0 FUN_1464d70a0 body=34 status=ok
// SIG undefined FUN_1464d70a0(void)

undefined8 FUN_1464d70a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d70c2 FUN_1464d70c2 body=34 status=ok
// SIG undefined FUN_1464d70c2(void)

undefined8 FUN_1464d70c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d70e4 FUN_1464d70e4 body=34 status=ok
// SIG undefined FUN_1464d70e4(void)

undefined8 FUN_1464d70e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d7106 FUN_1464d7106 body=34 status=ok
// SIG undefined FUN_1464d7106(void)

undefined8 FUN_1464d7106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d7128 FUN_1464d7128 body=34 status=ok
// SIG undefined FUN_1464d7128(void)

undefined8 FUN_1464d7128(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d714a FUN_1464d714a body=34 status=ok
// SIG undefined FUN_1464d714a(void)

undefined8 FUN_1464d714a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d716c FUN_1464d716c body=34 status=ok
// SIG undefined FUN_1464d716c(void)

undefined8 FUN_1464d716c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464d718e FUN_1464d718e body=9 status=ok
// SIG undefined FUN_1464d718e(void)

void FUN_1464d718e(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 1464d7198 FUN_1464d7198 body=34 status=ok
// SIG undefined FUN_1464d7198(void)

undefined8 FUN_1464d7198(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 1464d71ba FUN_1464d71ba body=9 status=ok
// SIG undefined FUN_1464d71ba(void)

void FUN_1464d71ba(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 1464d71c4 FUN_1464d71c4 body=34 status=ok
// SIG undefined FUN_1464d71c4(void)

undefined8 FUN_1464d71c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 1464d71e6 FUN_1464d71e6 body=9 status=ok
// SIG undefined FUN_1464d71e6(void)

void FUN_1464d71e6(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 1464d71f0 FUN_1464d71f0 body=34 status=ok
// SIG undefined FUN_1464d71f0(void)

undefined8 FUN_1464d71f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 1464d7212 FUN_1464d7212 body=47 status=ok
// SIG undefined FUN_1464d7212(void)

longlong FUN_1464d7212(void)

{
  if (DAT_14cb5c8c0 == 0) {
    FUN_14073dd9a(&DAT_14cb5c8c0,&PTR_LAB_14b112680);
  }
  return DAT_14cb5c8c0;
}



// FUNCTION 1464d7241 FUN_1464d7241 body=47 status=ok
// SIG undefined FUN_1464d7241(void)

longlong FUN_1464d7241(void)

{
  if (DAT_14cb5c8a0 == 0) {
    FUN_14000fc22(&DAT_14cb5c8a0,&PTR_FUN_14b1124c0);
  }
  return DAT_14cb5c8a0;
}



// FUNCTION 1464d7270 FUN_1464d7270 body=47 status=ok
// SIG undefined FUN_1464d7270(void)

longlong FUN_1464d7270(void)

{
  if (DAT_14cb5c8b0 == 0) {
    FUN_14000fc22(&DAT_14cb5c8b0,&PTR_FUN_14b1125c0);
  }
  return DAT_14cb5c8b0;
}



// FUNCTION 1464d729f FUN_1464d729f body=79 status=ok
// SIG undefined FUN_1464d729f(void)

void FUN_1464d729f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406046aa(puVar1);
  *puVar1 = &PTR_FUN_14b1126c0;
  puVar1[5] = &PTR_FUN_14b1129c0;
  puVar1[6] = &PTR_FUN_14b1129f0;
  puVar1[0x14] = &PTR_FUN_14b112a20;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 1464d72f3 FUN_1464d72f3 body=47 status=ok
// SIG undefined FUN_1464d72f3(void)

longlong FUN_1464d72f3(void)

{
  if (DAT_14cb5c8d8 == 0) {
    FUN_1409ce572(&DAT_14cb5c8d8,&PTR_FUN_14b112aa0);
  }
  return DAT_14cb5c8d8;
}



// FUNCTION 1464d7322 FUN_1464d7322 body=55 status=ok
// SIG undefined FUN_1464d7322(void)

void FUN_1464d7322(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c8f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c8f8 = FUN_140002ddd(FUN_1464d7359,uVar1,L"GbxDestructibleFractureEffectsSettings");
  }
  return;
}



// FUNCTION 1464d7359 FUN_1464d7359 body=49 status=ok
// SIG undefined FUN_1464d7359(void)

longlong FUN_1464d7359(void)

{
  if (DAT_14cb5c8f0 == 0) {
    FUN_14086a14e(&DAT_14cb5c8f0,&PTR_FUN_14b112e30);
  }
  return DAT_14cb5c8f0;
}



// FUNCTION 1464d738a FUN_1464d738a body=48 status=ok
// SIG undefined FUN_1464d738a(void)

void FUN_1464d738a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14b119200;
  return;
}



// FUNCTION 1464d73ba FUN_1464d73ba body=55 status=ok
// SIG undefined FUN_1464d73ba(void)

void FUN_1464d73ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c910 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c910 = FUN_140002ddd(FUN_1464d73f1,uVar1,L"GbxDestructibleCollisionEventSettings");
  }
  return;
}



// FUNCTION 1464d73f1 FUN_1464d73f1 body=49 status=ok
// SIG undefined FUN_1464d73f1(void)

longlong FUN_1464d73f1(void)

{
  if (DAT_14cb5c908 == 0) {
    FUN_14086a14e(&DAT_14cb5c908,&PTR_FUN_14b113220);
  }
  return DAT_14cb5c908;
}



// FUNCTION 1464d7422 FUN_1464d7422 body=48 status=ok
// SIG undefined FUN_1464d7422(void)

void FUN_1464d7422(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b119360;
  return;
}



// FUNCTION 1464d7452 FUN_1464d7452 body=35 status=ok
// SIG undefined FUN_1464d7452(void)

void FUN_1464d7452(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b113350;
  return;
}



// FUNCTION 1464d747a FUN_1464d747a body=47 status=ok
// SIG undefined FUN_1464d747a(void)

longlong FUN_1464d747a(void)

{
  if (DAT_14cb5c928 == 0) {
    FUN_14073dd9a(&DAT_14cb5c928,&PTR_LAB_14b113308);
  }
  return DAT_14cb5c928;
}



// FUNCTION 1464d74aa FUN_1464d74aa body=55 status=ok
// SIG undefined FUN_1464d74aa(void)

void FUN_1464d74aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c940 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c940 = FUN_140002ddd(FUN_1464d74e1,uVar1,L"GbxDialogAudioProvider");
  }
  return;
}



// FUNCTION 1464d74e1 FUN_1464d74e1 body=47 status=ok
// SIG undefined FUN_1464d74e1(void)

longlong FUN_1464d74e1(void)

{
  if (DAT_14cb5c938 == 0) {
    FUN_14086a14e(&DAT_14cb5c938,&PTR_FUN_14b113660);
  }
  return DAT_14cb5c938;
}



// FUNCTION 1464d7510 FUN_1464d7510 body=48 status=ok
// SIG undefined FUN_1464d7510(void)

void FUN_1464d7510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000300;
  *puVar1 = &PTR_FUN_14b1194c0;
  return;
}



// FUNCTION 1464d7540 FUN_1464d7540 body=55 status=ok
// SIG undefined FUN_1464d7540(void)

void FUN_1464d7540(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c958 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c958 = FUN_140002ddd(FUN_1464d7577,uVar1,L"GbxDialogAudioProviderDef");
  }
  return;
}



// FUNCTION 1464d7577 FUN_1464d7577 body=47 status=ok
// SIG undefined FUN_1464d7577(void)

longlong FUN_1464d7577(void)

{
  if (DAT_14cb5c950 == 0) {
    FUN_14086a14e(&DAT_14cb5c950,&PTR_FUN_14b1136e8);
  }
  return DAT_14cb5c950;
}



// FUNCTION 1464d75a6 FUN_1464d75a6 body=48 status=ok
// SIG undefined FUN_1464d75a6(void)

void FUN_1464d75a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000148;
  *puVar1 = &PTR_FUN_14b119690;
  return;
}



// FUNCTION 1464d75d6 FUN_1464d75d6 body=55 status=ok
// SIG undefined FUN_1464d75d6(void)

void FUN_1464d75d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c970 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c970 = FUN_140002ddd(FUN_1464d760d,uVar1,L"DistributedSpeakerInfo");
  }
  return;
}



// FUNCTION 1464d760d FUN_1464d760d body=47 status=ok
// SIG undefined FUN_1464d760d(void)

longlong FUN_1464d760d(void)

{
  if (DAT_14cb5c968 == 0) {
    FUN_14086a14e(&DAT_14cb5c968,&PTR_FUN_14b1137b8);
  }
  return DAT_14cb5c968;
}



// FUNCTION 1464d763c FUN_1464d763c body=48 status=ok
// SIG undefined FUN_1464d763c(void)

void FUN_1464d763c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b119830;
  return;
}



// FUNCTION 1464d766c FUN_1464d766c body=55 status=ok
// SIG undefined FUN_1464d766c(void)

void FUN_1464d766c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c988 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c988 = FUN_140002ddd(FUN_1464d76a3,uVar1,L"RecentConversationInfo");
  }
  return;
}



// FUNCTION 1464d76a3 FUN_1464d76a3 body=47 status=ok
// SIG undefined FUN_1464d76a3(void)

longlong FUN_1464d76a3(void)

{
  if (DAT_14cb5c980 == 0) {
    FUN_14086a14e(&DAT_14cb5c980,&PTR_FUN_14b1139f0);
  }
  return DAT_14cb5c980;
}



// FUNCTION 1464d76d2 FUN_1464d76d2 body=48 status=ok
// SIG undefined FUN_1464d76d2(void)

void FUN_1464d76d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b119990;
  return;
}



// FUNCTION 1464d7702 FUN_1464d7702 body=55 status=ok
// SIG undefined FUN_1464d7702(void)

void FUN_1464d7702(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c9a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c9a0 = FUN_140002ddd(FUN_1464d7739,uVar1,L"RecentDialogPerformanceInfo");
  }
  return;
}



// FUNCTION 1464d7739 FUN_1464d7739 body=47 status=ok
// SIG undefined FUN_1464d7739(void)

longlong FUN_1464d7739(void)

{
  if (DAT_14cb5c998 == 0) {
    FUN_14086a14e(&DAT_14cb5c998,&PTR_FUN_14b113b10);
  }
  return DAT_14cb5c998;
}



// FUNCTION 1464d7768 FUN_1464d7768 body=48 status=ok
// SIG undefined FUN_1464d7768(void)

void FUN_1464d7768(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b119af0;
  return;
}



// FUNCTION 1464d7798 FUN_1464d7798 body=35 status=ok
// SIG undefined FUN_1464d7798(void)

void FUN_1464d7798(void)

{
  FUN_1446ddc76(&DAT_14cb5cda8,"TriggerDialogEventEx",1);
  return;
}



// FUNCTION 1464d77bb FUN_1464d77bb body=49 status=ok
// SIG undefined FUN_1464d77bb(void)

longlong FUN_1464d77bb(void)

{
  if (DAT_14cb5ca30 == 0) {
    FUN_14073dd9a(&DAT_14cb5ca30,&PTR_LAB_14b115150);
  }
  return DAT_14cb5ca30;
}



// FUNCTION 1464d77ec FUN_1464d77ec body=47 status=ok
// SIG undefined FUN_1464d77ec(void)

longlong FUN_1464d77ec(void)

{
  if (DAT_14cb5c9b0 == 0) {
    FUN_14000fc22(&DAT_14cb5c9b0,&PTR_FUN_14b113c70);
  }
  return DAT_14cb5c9b0;
}



// FUNCTION 1464d781b FUN_1464d781b body=47 status=ok
// SIG undefined FUN_1464d781b(void)

longlong FUN_1464d781b(void)

{
  if (DAT_14cb5c9b8 == 0) {
    FUN_14000fc22(&DAT_14cb5c9b8,&PTR_FUN_14b113d50);
  }
  return DAT_14cb5c9b8;
}



// FUNCTION 1464d784a FUN_1464d784a body=47 status=ok
// SIG undefined FUN_1464d784a(void)

longlong FUN_1464d784a(void)

{
  if (DAT_14cb5c9c0 == 0) {
    FUN_14000fc22(&DAT_14cb5c9c0,&PTR_FUN_14b113e30);
  }
  return DAT_14cb5c9c0;
}



// FUNCTION 1464d7879 FUN_1464d7879 body=47 status=ok
// SIG undefined FUN_1464d7879(void)

longlong FUN_1464d7879(void)

{
  if (DAT_14cb5c9c8 == 0) {
    FUN_14000fc22(&DAT_14cb5c9c8,&PTR_FUN_14b113f70);
  }
  return DAT_14cb5c9c8;
}



// FUNCTION 1464d78a8 FUN_1464d78a8 body=47 status=ok
// SIG undefined FUN_1464d78a8(void)

longlong FUN_1464d78a8(void)

{
  if (DAT_14cb5c9d0 == 0) {
    FUN_14000fc22(&DAT_14cb5c9d0,&PTR_FUN_14b1140b0);
  }
  return DAT_14cb5c9d0;
}



// FUNCTION 1464d78d7 FUN_1464d78d7 body=47 status=ok
// SIG undefined FUN_1464d78d7(void)

longlong FUN_1464d78d7(void)

{
  if (DAT_14cb5c9d8 == 0) {
    FUN_14000fc22(&DAT_14cb5c9d8,&PTR_FUN_14b1141b8);
  }
  return DAT_14cb5c9d8;
}



// FUNCTION 1464d7906 FUN_1464d7906 body=47 status=ok
// SIG undefined FUN_1464d7906(void)

longlong FUN_1464d7906(void)

{
  if (DAT_14cb5c9e0 == 0) {
    FUN_14000fc22(&DAT_14cb5c9e0,&PTR_FUN_14b1142b0);
  }
  return DAT_14cb5c9e0;
}



// FUNCTION 1464d7935 FUN_1464d7935 body=47 status=ok
// SIG undefined FUN_1464d7935(void)

longlong FUN_1464d7935(void)

{
  if (DAT_14cb5c9e8 == 0) {
    FUN_14000fc22(&DAT_14cb5c9e8,&PTR_FUN_14b1143a0);
  }
  return DAT_14cb5c9e8;
}



// FUNCTION 1464d7964 FUN_1464d7964 body=47 status=ok
// SIG undefined FUN_1464d7964(void)

longlong FUN_1464d7964(void)

{
  if (DAT_14cb5c9f0 == 0) {
    FUN_14000fc22(&DAT_14cb5c9f0,&PTR_FUN_14b114498);
  }
  return DAT_14cb5c9f0;
}



// FUNCTION 1464d7993 FUN_1464d7993 body=47 status=ok
// SIG undefined FUN_1464d7993(void)

longlong FUN_1464d7993(void)

{
  if (DAT_14cb5c9f8 == 0) {
    FUN_14000fc22(&DAT_14cb5c9f8,&PTR_FUN_14b114590);
  }
  return DAT_14cb5c9f8;
}



// FUNCTION 1464d79c2 FUN_1464d79c2 body=47 status=ok
// SIG undefined FUN_1464d79c2(void)

longlong FUN_1464d79c2(void)

{
  if (DAT_14cb5ca00 == 0) {
    FUN_14000fc22(&DAT_14cb5ca00,&PTR_FUN_14b114680);
  }
  return DAT_14cb5ca00;
}



// FUNCTION 1464d79f1 FUN_1464d79f1 body=47 status=ok
// SIG undefined FUN_1464d79f1(void)

longlong FUN_1464d79f1(void)

{
  if (DAT_14cb5ca08 == 0) {
    FUN_14000fc22(&DAT_14cb5ca08,&PTR_FUN_14b114770);
  }
  return DAT_14cb5ca08;
}



// FUNCTION 1464d7a20 FUN_1464d7a20 body=47 status=ok
// SIG undefined FUN_1464d7a20(void)

longlong FUN_1464d7a20(void)

{
  if (DAT_14cb5ca10 == 0) {
    FUN_14000fc22(&DAT_14cb5ca10,&PTR_FUN_14b1148e8);
  }
  return DAT_14cb5ca10;
}



// FUNCTION 1464d7a4f FUN_1464d7a4f body=47 status=ok
// SIG undefined FUN_1464d7a4f(void)

longlong FUN_1464d7a4f(void)

{
  if (DAT_14cb5ca18 == 0) {
    FUN_14000fc22(&DAT_14cb5ca18,&PTR_FUN_14b114b98);
  }
  return DAT_14cb5ca18;
}



// FUNCTION 1464d7a7e FUN_1464d7a7e body=47 status=ok
// SIG undefined FUN_1464d7a7e(void)

longlong FUN_1464d7a7e(void)

{
  if (DAT_14cb5ca20 == 0) {
    FUN_14000fc22(&DAT_14cb5ca20,&PTR_FUN_14b114ed0);
  }
  return DAT_14cb5ca20;
}



// FUNCTION 1464d7aae FUN_1464d7aae body=34 status=ok
// SIG undefined FUN_1464d7aae(void)

void FUN_1464d7aae(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a80782();
  FUN_14069c8d6(uVar1,&PTR_s_ActivateScript_14b114f10,0xf);
  return;
}



// FUNCTION 1464d7ad0 FUN_1464d7ad0 body=35 status=ok
// SIG undefined FUN_1464d7ad0(void)

void FUN_1464d7ad0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b115190;
  return;
}



// FUNCTION 1464d7af3 FUN_1464d7af3 body=47 status=ok
// SIG undefined FUN_1464d7af3(void)

longlong FUN_1464d7af3(void)

{
  if (DAT_14cb5ca50 == 0) {
    FUN_14073dd9a(&DAT_14cb5ca50,&PTR_LAB_14b115670);
  }
  return DAT_14cb5ca50;
}



// FUNCTION 1464d7b22 FUN_1464d7b22 body=47 status=ok
// SIG undefined FUN_1464d7b22(void)

longlong FUN_1464d7b22(void)

{
  if (DAT_14cb5ca40 == 0) {
    FUN_14000fc22(&DAT_14cb5ca40,&PTR_FUN_14b115470);
  }
  return DAT_14cb5ca40;
}



// FUNCTION 1464d7b52 FUN_1464d7b52 body=34 status=ok
// SIG undefined FUN_1464d7b52(void)

void FUN_1464d7b52(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140b4ce5a();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_DialogProvider_14b1154b0,1);
  return;
}



// FUNCTION 1464d7b7e FUN_1464d7b7e body=196 status=ok
// SIG undefined FUN_1464d7b7e(void)

void FUN_1464d7b7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5ca68) {
    FUN_144b3d300(&DAT_14cb5ca68);
    if (DAT_14cb5ca68 == -1) {
      FUN_1446f470e(&DAT_14cb5ca60,L"GbxDialogProvider",1);
      _Init_thread_footer(&DAT_14cb5ca68);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5ca74) {
    FUN_144b3d300(&DAT_14cb5ca74);
    if (DAT_14cb5ca74 == -1) {
      FUN_1446f470e(&DAT_14cb5ca6c,L"NameTag",1);
      _Init_thread_footer(&DAT_14cb5ca74);
      return;
    }
  }
  return;
}



// FUNCTION 1464d7c42 FUN_1464d7c42 body=47 status=ok
// SIG undefined FUN_1464d7c42(void)

longlong FUN_1464d7c42(void)

{
  if (DAT_14cb5ca78 == 0) {
    FUN_1409ce572(&DAT_14cb5ca78,&PTR_FUN_14b115730);
  }
  return DAT_14cb5ca78;
}



// FUNCTION 1464d7c71 FUN_1464d7c71 body=47 status=ok
// SIG undefined FUN_1464d7c71(void)

longlong FUN_1464d7c71(void)

{
  if (DAT_14cb5ca90 == 0) {
    FUN_14086a14e(&DAT_14cb5ca90,&PTR_FUN_14b115890);
  }
  return DAT_14cb5ca90;
}



// FUNCTION 1464d7ca0 FUN_1464d7ca0 body=48 status=ok
// SIG undefined FUN_1464d7ca0(void)

void FUN_1464d7ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b119d20;
  return;
}



// FUNCTION 1464d7cd0 FUN_1464d7cd0 body=55 status=ok
// SIG undefined FUN_1464d7cd0(void)

void FUN_1464d7cd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cab0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cab0 = FUN_140002ddd(FUN_1464d7d07,uVar1,L"GbxDialogConditionRequirement");
  }
  return;
}



// FUNCTION 1464d7d07 FUN_1464d7d07 body=47 status=ok
// SIG undefined FUN_1464d7d07(void)

longlong FUN_1464d7d07(void)

{
  if (DAT_14cb5caa8 == 0) {
    FUN_14086a14e(&DAT_14cb5caa8,&PTR_FUN_14b115a70);
  }
  return DAT_14cb5caa8;
}



// FUNCTION 1464d7d3c FUN_1464d7d3c body=48 status=ok
// SIG undefined FUN_1464d7d3c(void)

void FUN_1464d7d3c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b119e80;
  return;
}



// FUNCTION 1464d7d6c FUN_1464d7d6c body=35 status=ok
// SIG undefined FUN_1464d7d6c(void)

void FUN_1464d7d6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b115bb0;
  return;
}



// FUNCTION 1464d7d94 FUN_1464d7d94 body=47 status=ok
// SIG undefined FUN_1464d7d94(void)

longlong FUN_1464d7d94(void)

{
  if (DAT_14cb5cac8 == 0) {
    FUN_14073dd9a(&DAT_14cb5cac8,&PTR_LAB_14b115b68);
  }
  return DAT_14cb5cac8;
}



// FUNCTION 1464d7dc3 FUN_1464d7dc3 body=62 status=ok
// SIG undefined FUN_1464d7dc3(void)

void FUN_1464d7dc3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b116120;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 1464d7e01 FUN_1464d7e01 body=47 status=ok
// SIG undefined FUN_1464d7e01(void)

longlong FUN_1464d7e01(void)

{
  if (DAT_14cb5cae0 == 0) {
    FUN_14073dd9a(&DAT_14cb5cae0,&PTR_LAB_14b1160d8);
  }
  return DAT_14cb5cae0;
}



// FUNCTION 1464d7e30 FUN_1464d7e30 body=55 status=ok
// SIG undefined FUN_1464d7e30(void)

void FUN_1464d7e30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5caf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5caf8 = FUN_140002ddd(FUN_1464d7e67,uVar1,L"QuietTimeTracker");
  }
  return;
}



// FUNCTION 1464d7e67 FUN_1464d7e67 body=47 status=ok
// SIG undefined FUN_1464d7e67(void)

longlong FUN_1464d7e67(void)

{
  if (DAT_14cb5caf0 == 0) {
    FUN_14086a14e(&DAT_14cb5caf0,&PTR_FUN_14b1164b8);
  }
  return DAT_14cb5caf0;
}



// FUNCTION 1464d7e96 FUN_1464d7e96 body=48 status=ok
// SIG undefined FUN_1464d7e96(void)

void FUN_1464d7e96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14b119fe0;
  return;
}



// FUNCTION 1464d7ec6 FUN_1464d7ec6 body=55 status=ok
// SIG undefined FUN_1464d7ec6(void)

void FUN_1464d7ec6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cb10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cb10 = FUN_140002ddd(FUN_1464d7efd,uVar1,L"DialogLookupResult");
  }
  return;
}



// FUNCTION 1464d7efd FUN_1464d7efd body=47 status=ok
// SIG undefined FUN_1464d7efd(void)

longlong FUN_1464d7efd(void)

{
  if (DAT_14cb5cb08 == 0) {
    FUN_14086a14e(&DAT_14cb5cb08,&PTR_FUN_14b116638);
  }
  return DAT_14cb5cb08;
}



// FUNCTION 1464d7f2c FUN_1464d7f2c body=48 status=ok
// SIG undefined FUN_1464d7f2c(void)

void FUN_1464d7f2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b11a140;
  return;
}



// FUNCTION 1464d7f5c FUN_1464d7f5c body=55 status=ok
// SIG undefined FUN_1464d7f5c(void)

void FUN_1464d7f5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cb28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cb28 = FUN_140002ddd(FUN_1464d7f93,uVar1,L"DialogLookupResultBucket");
  }
  return;
}



// FUNCTION 1464d7f93 FUN_1464d7f93 body=47 status=ok
// SIG undefined FUN_1464d7f93(void)

longlong FUN_1464d7f93(void)

{
  if (DAT_14cb5cb20 == 0) {
    FUN_14086a14e(&DAT_14cb5cb20,&PTR_FUN_14b116798);
  }
  return DAT_14cb5cb20;
}



// FUNCTION 1464d7fc2 FUN_1464d7fc2 body=48 status=ok
// SIG undefined FUN_1464d7fc2(void)

void FUN_1464d7fc2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b11a2a0;
  return;
}



// FUNCTION 1464d7ff2 FUN_1464d7ff2 body=55 status=ok
// SIG undefined FUN_1464d7ff2(void)

void FUN_1464d7ff2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cb40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cb40 = FUN_140002ddd(FUN_1464d8029,uVar1,L"DialogDecisionNode");
  }
  return;
}



// FUNCTION 1464d8029 FUN_1464d8029 body=47 status=ok
// SIG undefined FUN_1464d8029(void)

longlong FUN_1464d8029(void)

{
  if (DAT_14cb5cb38 == 0) {
    FUN_14086a14e(&DAT_14cb5cb38,&PTR_FUN_14b116a40);
  }
  return DAT_14cb5cb38;
}



// FUNCTION 1464d8058 FUN_1464d8058 body=48 status=ok
// SIG undefined FUN_1464d8058(void)

void FUN_1464d8058(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14b11a400;
  return;
}



// FUNCTION 1464d8088 FUN_1464d8088 body=55 status=ok
// SIG undefined FUN_1464d8088(void)

void FUN_1464d8088(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cb58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cb58 = FUN_140002ddd(FUN_1464d80bf,uVar1,L"DialogLookupDecision");
  }
  return;
}



// FUNCTION 1464d80bf FUN_1464d80bf body=47 status=ok
// SIG undefined FUN_1464d80bf(void)

longlong FUN_1464d80bf(void)

{
  if (DAT_14cb5cb50 == 0) {
    FUN_14086a14e(&DAT_14cb5cb50,&PTR_FUN_14b116c08);
  }
  return DAT_14cb5cb50;
}



// FUNCTION 1464d80ee FUN_1464d80ee body=48 status=ok
// SIG undefined FUN_1464d80ee(void)

void FUN_1464d80ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b11a560;
  return;
}



// FUNCTION 1464d811e FUN_1464d811e body=47 status=ok
// SIG undefined FUN_1464d811e(void)

longlong FUN_1464d811e(void)

{
  if (DAT_14cb5cb68 == 0) {
    FUN_14086a14e(&DAT_14cb5cb68,&PTR_FUN_14b116e48);
  }
  return DAT_14cb5cb68;
}



// FUNCTION 1464d814e FUN_1464d814e body=48 status=ok
// SIG undefined FUN_1464d814e(void)

void FUN_1464d814e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b11a6c0;
  return;
}



// FUNCTION 1464d8183 FUN_1464d8183 body=47 status=ok
// SIG undefined FUN_1464d8183(void)

longlong FUN_1464d8183(void)

{
  if (DAT_14cb5cb88 == 0) {
    FUN_14073dd9a(&DAT_14cb5cb88,&PTR_LAB_14b1170f8);
  }
  return DAT_14cb5cb88;
}



// FUNCTION 1464d81b2 FUN_1464d81b2 body=55 status=ok
// SIG undefined FUN_1464d81b2(void)

void FUN_1464d81b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cba0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cba0 = FUN_140002ddd(FUN_1464d81e9,uVar1,L"GbxDialogGameDataCategories_DONTUSE");
  }
  return;
}



// FUNCTION 1464d81e9 FUN_1464d81e9 body=47 status=ok
// SIG undefined FUN_1464d81e9(void)

longlong FUN_1464d81e9(void)

{
  if (DAT_14cb5cb98 == 0) {
    FUN_14086a14e(&DAT_14cb5cb98,&PTR_FUN_14b1171d8);
  }
  return DAT_14cb5cb98;
}



// FUNCTION 1464d8218 FUN_1464d8218 body=48 status=ok
// SIG undefined FUN_1464d8218(void)

void FUN_1464d8218(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b11a820;
  return;
}



// FUNCTION 1464d8248 FUN_1464d8248 body=55 status=ok
// SIG undefined FUN_1464d8248(void)

void FUN_1464d8248(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cbb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cbb8 = FUN_140002ddd(FUN_1464d827f,uVar1,L"GbxDialogGestureWeight_ValueResolver");
  }
  return;
}



// FUNCTION 1464d827f FUN_1464d827f body=47 status=ok
// SIG undefined FUN_1464d827f(void)

longlong FUN_1464d827f(void)

{
  if (DAT_14cb5cbb0 == 0) {
    FUN_14086a14e(&DAT_14cb5cbb0,&PTR_FUN_14b1172a8);
  }
  return DAT_14cb5cbb0;
}



// FUNCTION 1464d82ae FUN_1464d82ae body=48 status=ok
// SIG undefined FUN_1464d82ae(void)

void FUN_1464d82ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b11a990;
  return;
}



// FUNCTION 1464d82de FUN_1464d82de body=55 status=ok
// SIG undefined FUN_1464d82de(void)

void FUN_1464d82de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cbd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cbd0 = FUN_140002ddd(FUN_1464d8315,uVar1,L"GbxDialogIsSpeaking_ValueResolver");
  }
  return;
}



// FUNCTION 1464d8315 FUN_1464d8315 body=47 status=ok
// SIG undefined FUN_1464d8315(void)

longlong FUN_1464d8315(void)

{
  if (DAT_14cb5cbc8 == 0) {
    FUN_14086a14e(&DAT_14cb5cbc8,&PTR_FUN_14b117370);
  }
  return DAT_14cb5cbc8;
}



// FUNCTION 1464d8344 FUN_1464d8344 body=48 status=ok
// SIG undefined FUN_1464d8344(void)

void FUN_1464d8344(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b11ab80;
  return;
}



// FUNCTION 1464d8374 FUN_1464d8374 body=49 status=ok
// SIG undefined FUN_1464d8374(void)

longlong FUN_1464d8374(void)

{
  if (DAT_14cb5cc00 == 0) {
    FUN_14073dd9a(&DAT_14cb5cc00,&PTR_LAB_14b117640);
  }
  return DAT_14cb5cc00;
}



// FUNCTION 1464d83a5 FUN_1464d83a5 body=47 status=ok
// SIG undefined FUN_1464d83a5(void)

longlong FUN_1464d83a5(void)

{
  if (DAT_14cb5cbe0 == 0) {
    FUN_14000fc22(&DAT_14cb5cbe0,&PTR_FUN_14b1173f8);
  }
  return DAT_14cb5cbe0;
}



// FUNCTION 1464d83d4 FUN_1464d83d4 body=47 status=ok
// SIG undefined FUN_1464d83d4(void)

longlong FUN_1464d83d4(void)

{
  if (DAT_14cb5cbe8 == 0) {
    FUN_14000fc22(&DAT_14cb5cbe8,&PTR_FUN_14b117450);
  }
  return DAT_14cb5cbe8;
}



// FUNCTION 1464d8403 FUN_1464d8403 body=47 status=ok
// SIG undefined FUN_1464d8403(void)

longlong FUN_1464d8403(void)

{
  if (DAT_14cb5cbf0 == 0) {
    FUN_14000fc22(&DAT_14cb5cbf0,&PTR_FUN_14b117490);
  }
  return DAT_14cb5cbf0;
}



// FUNCTION 1464d8432 FUN_1464d8432 body=34 status=ok
// SIG undefined FUN_1464d8432(void)

void FUN_1464d8432(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140317d24();
  FUN_14069c8d6(uVar1,&PTR_s_OnProviderDialogFinished_14b1174d0,3);
  return;
}



// FUNCTION 1464d845e FUN_1464d845e body=196 status=ok
// SIG undefined FUN_1464d845e(void)

void FUN_1464d845e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cc18) {
    FUN_144b3d300(&DAT_14cb5cc18);
    if (DAT_14cb5cc18 == -1) {
      FUN_1446f470e(&DAT_14cb5cc10,L"GbxDialogProvider",1);
      _Init_thread_footer(&DAT_14cb5cc18);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cc24) {
    FUN_144b3d300(&DAT_14cb5cc24);
    if (DAT_14cb5cc24 == -1) {
      FUN_1446f470e(&DAT_14cb5cc1c,L"AttachedAudioImplementer",1);
      _Init_thread_footer(&DAT_14cb5cc24);
      return;
    }
  }
  return;
}



// FUNCTION 1464d8522 FUN_1464d8522 body=55 status=ok
// SIG undefined FUN_1464d8522(void)

void FUN_1464d8522(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cc30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cc30 = FUN_140002ddd(FUN_1464d8559,uVar1,L"GbxDialogMoodsGesturesDefaults");
  }
  return;
}



// FUNCTION 1464d8559 FUN_1464d8559 body=47 status=ok
// SIG undefined FUN_1464d8559(void)

longlong FUN_1464d8559(void)

{
  if (DAT_14cb5cc28 == 0) {
    FUN_14086a14e(&DAT_14cb5cc28,&PTR_FUN_14b117c00);
  }
  return DAT_14cb5cc28;
}



// FUNCTION 1464d8588 FUN_1464d8588 body=48 status=ok
// SIG undefined FUN_1464d8588(void)

void FUN_1464d8588(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14b11ad70;
  return;
}



// FUNCTION 1464d85b8 FUN_1464d85b8 body=55 status=ok
// SIG undefined FUN_1464d85b8(void)

void FUN_1464d85b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cc48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cc48 = FUN_140002ddd(FUN_1464d85ef,uVar1,L"GbxDialogMoodsMap");
  }
  return;
}



// FUNCTION 1464d85ef FUN_1464d85ef body=47 status=ok
// SIG undefined FUN_1464d85ef(void)

longlong FUN_1464d85ef(void)

{
  if (DAT_14cb5cc40 == 0) {
    FUN_14086a14e(&DAT_14cb5cc40,&PTR_FUN_14b117d90);
  }
  return DAT_14cb5cc40;
}



// FUNCTION 1464d861e FUN_1464d861e body=48 status=ok
// SIG undefined FUN_1464d861e(void)

void FUN_1464d861e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b11aed0;
  return;
}



// FUNCTION 1464d864e FUN_1464d864e body=55 status=ok
// SIG undefined FUN_1464d864e(void)

void FUN_1464d864e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cc60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cc60 = FUN_140002ddd(FUN_1464d8685,uVar1,L"GbxDialogMoodsProvider");
  }
  return;
}



// FUNCTION 1464d8685 FUN_1464d8685 body=47 status=ok
// SIG undefined FUN_1464d8685(void)

longlong FUN_1464d8685(void)

{
  if (DAT_14cb5cc58 == 0) {
    FUN_14086a14e(&DAT_14cb5cc58,&PTR_FUN_14b117ef8);
  }
  return DAT_14cb5cc58;
}



// FUNCTION 1464d86b4 FUN_1464d86b4 body=48 status=ok
// SIG undefined FUN_1464d86b4(void)

void FUN_1464d86b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b11b030;
  return;
}



// FUNCTION 1464d86e4 FUN_1464d86e4 body=55 status=ok
// SIG undefined FUN_1464d86e4(void)

void FUN_1464d86e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cc78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cc78 = FUN_140002ddd(FUN_1464d871b,uVar1,L"GbxDialogMoodWeight_ValueResolver");
  }
  return;
}



// FUNCTION 1464d871b FUN_1464d871b body=47 status=ok
// SIG undefined FUN_1464d871b(void)

longlong FUN_1464d871b(void)

{
  if (DAT_14cb5cc70 == 0) {
    FUN_14086a14e(&DAT_14cb5cc70,&PTR_FUN_14b117fc0);
  }
  return DAT_14cb5cc70;
}



// FUNCTION 1464d874a FUN_1464d874a body=48 status=ok
// SIG undefined FUN_1464d874a(void)

void FUN_1464d874a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b11b190;
  return;
}



// FUNCTION 1464d877a FUN_1464d877a body=35 status=ok
// SIG undefined FUN_1464d877a(void)

void FUN_1464d877a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b1180c0;
  return;
}



// FUNCTION 1464d87a2 FUN_1464d87a2 body=47 status=ok
// SIG undefined FUN_1464d87a2(void)

longlong FUN_1464d87a2(void)

{
  if (DAT_14cb5cc90 == 0) {
    FUN_14073dd9a(&DAT_14cb5cc90,&PTR_LAB_14b118078);
  }
  return DAT_14cb5cc90;
}



// FUNCTION 1464d87d1 FUN_1464d87d1 body=47 status=ok
// SIG undefined FUN_1464d87d1(void)

longlong FUN_1464d87d1(void)

{
  if (DAT_14cb5cca0 == 0) {
    FUN_14000fc22(&DAT_14cb5cca0,&PTR_FUN_14b1183b8);
  }
  return DAT_14cb5cca0;
}



// FUNCTION 1464d8800 FUN_1464d8800 body=47 status=ok
// SIG undefined FUN_1464d8800(void)

longlong FUN_1464d8800(void)

{
  if (DAT_14cb5cca8 == 0) {
    FUN_14000fc22(&DAT_14cb5cca8,&PTR_FUN_14b118428);
  }
  return DAT_14cb5cca8;
}



// FUNCTION 1464d882f FUN_1464d882f body=47 status=ok
// SIG undefined FUN_1464d882f(void)

longlong FUN_1464d882f(void)

{
  if (DAT_14cb5ccb0 == 0) {
    FUN_1409ce572(&DAT_14cb5ccb0,&PTR_FUN_14b1184e0);
  }
  return DAT_14cb5ccb0;
}



// FUNCTION 1464d885e FUN_1464d885e body=55 status=ok
// SIG undefined FUN_1464d885e(void)

void FUN_1464d885e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ccd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ccd0 = FUN_140002ddd(FUN_1464d8895,uVar1,L"StartDialogParams");
  }
  return;
}



// FUNCTION 1464d8895 FUN_1464d8895 body=49 status=ok
// SIG undefined FUN_1464d8895(void)

longlong FUN_1464d8895(void)

{
  if (DAT_14cb5ccc8 == 0) {
    FUN_14086a14e(&DAT_14cb5ccc8,&PTR_FUN_14b118678);
  }
  return DAT_14cb5ccc8;
}



// FUNCTION 1464d88c6 FUN_1464d88c6 body=48 status=ok
// SIG undefined FUN_1464d88c6(void)

void FUN_1464d88c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b11b480;
  return;
}



// FUNCTION 1464d88f6 FUN_1464d88f6 body=55 status=ok
// SIG undefined FUN_1464d88f6(void)

void FUN_1464d88f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cce8 = FUN_140002ddd(FUN_1464d892d,uVar1,L"InitialDialogInProgress");
  }
  return;
}



// FUNCTION 1464d892d FUN_1464d892d body=47 status=ok
// SIG undefined FUN_1464d892d(void)

longlong FUN_1464d892d(void)

{
  if (DAT_14cb5cce0 == 0) {
    FUN_14086a14e(&DAT_14cb5cce0,&PTR_FUN_14b118778);
  }
  return DAT_14cb5cce0;
}



// FUNCTION 1464d895c FUN_1464d895c body=48 status=ok
// SIG undefined FUN_1464d895c(void)

void FUN_1464d895c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b11b5e0;
  return;
}



// FUNCTION 1464d898c FUN_1464d898c body=49 status=ok
// SIG undefined FUN_1464d898c(void)

longlong FUN_1464d898c(void)

{
  if (DAT_14cb5cd38 == 0) {
    FUN_14073dd9a(&DAT_14cb5cd38,&PTR_LAB_14b1190e0);
  }
  return DAT_14cb5cd38;
}



// FUNCTION 1464d89bd FUN_1464d89bd body=47 status=ok
// SIG undefined FUN_1464d89bd(void)

longlong FUN_1464d89bd(void)

{
  if (DAT_14cb5cd00 == 0) {
    FUN_14000fc22(&DAT_14cb5cd00,&PTR_FUN_14b118850);
  }
  return DAT_14cb5cd00;
}



// FUNCTION 1464d89ec FUN_1464d89ec body=96 status=ok
// SIG undefined FUN_1464d89ec(void)

void FUN_1464d89ec(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5cd08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464d8a4d FUN_1464d8a4d body=47 status=ok
// SIG undefined FUN_1464d8a4d(void)

longlong FUN_1464d8a4d(void)

{
  if (DAT_14cb5cd10 == 0) {
    FUN_14000fc22(&DAT_14cb5cd10,&PTR_FUN_14b118958);
  }
  return DAT_14cb5cd10;
}



// FUNCTION 1464d8a7c FUN_1464d8a7c body=47 status=ok
// SIG undefined FUN_1464d8a7c(void)

longlong FUN_1464d8a7c(void)

{
  if (DAT_14cb5cd18 == 0) {
    FUN_14000fc22(&DAT_14cb5cd18,&PTR_FUN_14b1189b8);
  }
  return DAT_14cb5cd18;
}



// FUNCTION 1464d8aab FUN_1464d8aab body=47 status=ok
// SIG undefined FUN_1464d8aab(void)

longlong FUN_1464d8aab(void)

{
  if (DAT_14cb5cd20 == 0) {
    FUN_14000fc22(&DAT_14cb5cd20,&PTR_FUN_14b118a18);
  }
  return DAT_14cb5cd20;
}



// FUNCTION 1464d8ada FUN_1464d8ada body=47 status=ok
// SIG undefined FUN_1464d8ada(void)

longlong FUN_1464d8ada(void)

{
  if (DAT_14cb5cd28 == 0) {
    FUN_14000fc22(&DAT_14cb5cd28,&PTR_FUN_14b118a70);
  }
  return DAT_14cb5cd28;
}



// FUNCTION 1464d8b0a FUN_1464d8b0a body=34 status=ok
// SIG undefined FUN_1464d8b0a(void)

void FUN_1464d8b0a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d53794();
  FUN_14069c8d6(uVar1,&PTR_s_NetMulticast_StartDialog_14b118ab0,5);
  return;
}



// FUNCTION 1464d8b32 FUN_1464d8b32 body=742 status=ok
// SIG undefined FUN_1464d8b32(void)

void FUN_1464d8b32(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cd50) {
    FUN_144b3d300(&DAT_14cb5cd50);
    if (DAT_14cb5cd50 == -1) {
      FUN_1446f470e(&DAT_14cb5cd48,L"NameTagHandle",1);
      _Init_thread_footer(&DAT_14cb5cd50);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cd5c) {
    FUN_144b3d300(&DAT_14cb5cd5c);
    if (DAT_14cb5cd5c == -1) {
      FUN_1446f470e(&DAT_14cb5cd54,L"bSpeakDirectlyToPlayer",1);
      _Init_thread_footer(&DAT_14cb5cd5c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cd68) {
    FUN_144b3d300(&DAT_14cb5cd68);
    if (DAT_14cb5cd68 == -1) {
      FUN_1446f470e(&DAT_14cb5cd60,L"DirectSpeakerTarget",1);
      _Init_thread_footer(&DAT_14cb5cd68);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cd74) {
    FUN_144b3d300(&DAT_14cb5cd74);
    if (DAT_14cb5cd74 == -1) {
      FUN_1446f470e(&DAT_14cb5cd6c,L"bIsRegisteredOnServer",1);
      _Init_thread_footer(&DAT_14cb5cd74);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cd80) {
    FUN_144b3d300(&DAT_14cb5cd80);
    if (DAT_14cb5cd80 == -1) {
      FUN_1446f470e(&DAT_14cb5cd78,L"SpeakerType",1);
      _Init_thread_footer(&DAT_14cb5cd80);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cd8c) {
    FUN_144b3d300(&DAT_14cb5cd8c);
    if (DAT_14cb5cd8c == -1) {
      FUN_1446f470e(&DAT_14cb5cd84,L"BaseVoicePitchOffset",1);
      _Init_thread_footer(&DAT_14cb5cd8c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cd98) {
    FUN_144b3d300(&DAT_14cb5cd98);
    if (DAT_14cb5cd98 == -1) {
      FUN_1446f470e(&DAT_14cb5cd90,L"NametagVoicePitchOffset",1);
      _Init_thread_footer(&DAT_14cb5cd98);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5cda4) {
    FUN_144b3d300(&DAT_14cb5cda4);
    if (DAT_14cb5cda4 == -1) {
      FUN_1446f470e(&DAT_14cb5cd9c,L"InitialDialogInProgress",1);
      _Init_thread_footer(&DAT_14cb5cda4);
      return;
    }
  }
  return;
}



// FUNCTION 1464d8e18 FUN_1464d8e18 body=40 status=ok
// SIG undefined FUN_1464d8e18(void)

undefined8 FUN_1464d8e18(undefined8 param_1,int param_2)

{
  FUN_14042c3da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8e40 FUN_1464d8e40 body=40 status=ok
// SIG undefined FUN_1464d8e40(void)

undefined8 FUN_1464d8e40(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8e68 FUN_1464d8e68 body=40 status=ok
// SIG undefined FUN_1464d8e68(void)

undefined8 FUN_1464d8e68(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8e90 FUN_1464d8e90 body=40 status=ok
// SIG undefined FUN_1464d8e90(void)

undefined8 FUN_1464d8e90(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8eb8 FUN_1464d8eb8 body=40 status=ok
// SIG undefined FUN_1464d8eb8(void)

undefined8 FUN_1464d8eb8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8ee0 FUN_1464d8ee0 body=29 status=ok
// SIG undefined FUN_1464d8ee0(void)

undefined8 FUN_1464d8ee0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8efe FUN_1464d8efe body=29 status=ok
// SIG undefined FUN_1464d8efe(void)

undefined8 FUN_1464d8efe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8f1c FUN_1464d8f1c body=29 status=ok
// SIG undefined FUN_1464d8f1c(void)

undefined8 FUN_1464d8f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8f3a FUN_1464d8f3a body=29 status=ok
// SIG undefined FUN_1464d8f3a(void)

undefined8 FUN_1464d8f3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8f58 FUN_1464d8f58 body=48 status=ok
// SIG undefined FUN_1464d8f58(void)

void FUN_1464d8f58(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x148);
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b1197f0;
  return;
}



// FUNCTION 1464d8f88 FUN_1464d8f88 body=29 status=ok
// SIG undefined FUN_1464d8f88(void)

undefined8 FUN_1464d8f88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8fa6 FUN_1464d8fa6 body=29 status=ok
// SIG undefined FUN_1464d8fa6(void)

undefined8 FUN_1464d8fa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8fc4 FUN_1464d8fc4 body=29 status=ok
// SIG undefined FUN_1464d8fc4(void)

undefined8 FUN_1464d8fc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d8fe2 FUN_1464d8fe2 body=29 status=ok
// SIG undefined FUN_1464d8fe2(void)

undefined8 FUN_1464d8fe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d9000 FUN_1464d9000 body=29 status=ok
// SIG undefined FUN_1464d9000(void)

undefined8 FUN_1464d9000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d901e FUN_1464d901e body=29 status=ok
// SIG undefined FUN_1464d901e(void)

undefined8 FUN_1464d901e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d903c FUN_1464d903c body=29 status=ok
// SIG undefined FUN_1464d903c(void)

undefined8 FUN_1464d903c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d905a FUN_1464d905a body=29 status=ok
// SIG undefined FUN_1464d905a(void)

undefined8 FUN_1464d905a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d9078 FUN_1464d9078 body=29 status=ok
// SIG undefined FUN_1464d9078(void)

undefined8 FUN_1464d9078(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d9096 FUN_1464d9096 body=29 status=ok
// SIG undefined FUN_1464d9096(void)

undefined8 FUN_1464d9096(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d90b4 FUN_1464d90b4 body=29 status=ok
// SIG undefined FUN_1464d90b4(void)

undefined8 FUN_1464d90b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d90d2 FUN_1464d90d2 body=29 status=ok
// SIG undefined FUN_1464d90d2(void)

undefined8 FUN_1464d90d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d90f0 FUN_1464d90f0 body=29 status=ok
// SIG undefined FUN_1464d90f0(void)

undefined8 FUN_1464d90f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d910e FUN_1464d910e body=29 status=ok
// SIG undefined FUN_1464d910e(void)

undefined8 FUN_1464d910e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d912c FUN_1464d912c body=29 status=ok
// SIG undefined FUN_1464d912c(void)

undefined8 FUN_1464d912c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d914a FUN_1464d914a body=29 status=ok
// SIG undefined FUN_1464d914a(void)

undefined8 FUN_1464d914a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d9168 FUN_1464d9168 body=44 status=ok
// SIG undefined FUN_1464d9168(void)

void FUN_1464d9168(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145accad0(param_2);
  return;
}



// FUNCTION 1464d9194 FUN_1464d9194 body=29 status=ok
// SIG undefined FUN_1464d9194(void)

undefined8 FUN_1464d9194(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d91b2 FUN_1464d91b2 body=29 status=ok
// SIG undefined FUN_1464d91b2(void)

undefined8 FUN_1464d91b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d91d0 FUN_1464d91d0 body=29 status=ok
// SIG undefined FUN_1464d91d0(void)

undefined8 FUN_1464d91d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d91ee FUN_1464d91ee body=29 status=ok
// SIG undefined FUN_1464d91ee(void)

undefined8 FUN_1464d91ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464d920b FUN_1464d920b body=47 status=ok
// SIG undefined FUN_1464d920b(void)

longlong FUN_1464d920b(void)

{
  if (DAT_14cb5cdb8 == 0) {
    FUN_14073dd9a(&DAT_14cb5cdb8,&PTR_LAB_14b11c788);
  }
  return DAT_14cb5cdb8;
}



// FUNCTION 1464d923a FUN_1464d923a body=35 status=ok
// SIG undefined FUN_1464d923a(void)

void FUN_1464d923a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b11cb40;
  return;
}



// FUNCTION 1464d9267 FUN_1464d9267 body=47 status=ok
// SIG undefined FUN_1464d9267(void)

longlong FUN_1464d9267(void)

{
  if (DAT_14cb5cdd0 == 0) {
    FUN_14073dd9a(&DAT_14cb5cdd0,&PTR_LAB_14b11caf8);
  }
  return DAT_14cb5cdd0;
}



// FUNCTION 1464d9296 FUN_1464d9296 body=55 status=ok
// SIG undefined FUN_1464d9296(void)

void FUN_1464d9296(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cdf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cdf0 = FUN_140002ddd(FUN_1464d92cd,uVar1,L"CurrentDialogPerformanceInfo");
  }
  return;
}



// FUNCTION 1464d92cd FUN_1464d92cd body=49 status=ok
// SIG undefined FUN_1464d92cd(void)

longlong FUN_1464d92cd(void)

{
  if (DAT_14cb5cde8 == 0) {
    FUN_14086a14e(&DAT_14cb5cde8,&PTR_FUN_14b11d018);
  }
  return DAT_14cb5cde8;
}



// FUNCTION 1464d92fe FUN_1464d92fe body=48 status=ok
// SIG undefined FUN_1464d92fe(void)

void FUN_1464d92fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b124220;
  return;
}



// FUNCTION 1464d932e FUN_1464d932e body=55 status=ok
// SIG undefined FUN_1464d932e(void)

void FUN_1464d932e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ce08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ce08 = FUN_140002ddd(FUN_1464d9365,uVar1,L"DialogContext");
  }
  return;
}



// FUNCTION 1464d9365 FUN_1464d9365 body=49 status=ok
// SIG undefined FUN_1464d9365(void)

longlong FUN_1464d9365(void)

{
  if (DAT_14cb5ce00 == 0) {
    FUN_14086a14e(&DAT_14cb5ce00,&PTR_FUN_14b11d0d8);
  }
  return DAT_14cb5ce00;
}



// FUNCTION 1464d9396 FUN_1464d9396 body=48 status=ok
// SIG undefined FUN_1464d9396(void)

void FUN_1464d9396(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000002e8;
  *puVar1 = &PTR_FUN_14b124380;
  return;
}



// FUNCTION 1464d93c6 FUN_1464d93c6 body=55 status=ok
// SIG undefined FUN_1464d93c6(void)

void FUN_1464d93c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ce20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ce20 = FUN_140002ddd(FUN_1464d93fd,uVar1,L"GbxDialogVoicePitchOffset_ValueResolver");
  }
  return;
}



// FUNCTION 1464d93fd FUN_1464d93fd body=47 status=ok
// SIG undefined FUN_1464d93fd(void)

longlong FUN_1464d93fd(void)

{
  if (DAT_14cb5ce18 == 0) {
    FUN_14086a14e(&DAT_14cb5ce18,&PTR_FUN_14b11d1d8);
  }
  return DAT_14cb5ce18;
}



// FUNCTION 1464d942c FUN_1464d942c body=48 status=ok
// SIG undefined FUN_1464d942c(void)

void FUN_1464d942c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b1244e0;
  return;
}



// FUNCTION 1464d945c FUN_1464d945c body=47 status=ok
// SIG undefined FUN_1464d945c(void)

longlong FUN_1464d945c(void)

{
  if (DAT_14cb5ce38 == 0) {
    FUN_14073dd9a(&DAT_14cb5ce38,&PTR_LAB_14b11d2a8);
  }
  return DAT_14cb5ce38;
}



// FUNCTION 1464d948b FUN_1464d948b body=49 status=ok
// SIG undefined FUN_1464d948b(void)

longlong FUN_1464d948b(void)

{
  if (DAT_14cb5ce48 == 0) {
    FUN_14086a14e(&DAT_14cb5ce48,&PTR_FUN_14b11d390);
  }
  return DAT_14cb5ce48;
}



// FUNCTION 1464d94bc FUN_1464d94bc body=48 status=ok
// SIG undefined FUN_1464d94bc(void)

void FUN_1464d94bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b1246d0;
  return;
}



// FUNCTION 1464d94ec FUN_1464d94ec body=47 status=ok
// SIG undefined FUN_1464d94ec(void)

longlong FUN_1464d94ec(void)

{
  if (DAT_14cb5ce68 == 0) {
    FUN_14073dd9a(&DAT_14cb5ce68,&PTR_LAB_14b11d498);
  }
  return DAT_14cb5ce68;
}



// FUNCTION 1464d951b FUN_1464d951b body=47 status=ok
// SIG undefined FUN_1464d951b(void)

longlong FUN_1464d951b(void)

{
  if (DAT_14cb5ce78 == 0) {
    FUN_14086a14e(&DAT_14cb5ce78,&PTR_FUN_14b11d8c0);
  }
  return DAT_14cb5ce78;
}



// FUNCTION 1464d954a FUN_1464d954a body=48 status=ok
// SIG undefined FUN_1464d954a(void)

void FUN_1464d954a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b124870;
  return;
}



// FUNCTION 1464d957a FUN_1464d957a body=35 status=ok
// SIG undefined FUN_1464d957a(void)

void FUN_1464d957a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b11da00;
  return;
}



// FUNCTION 1464d95a7 FUN_1464d95a7 body=47 status=ok
// SIG undefined FUN_1464d95a7(void)

longlong FUN_1464d95a7(void)

{
  if (DAT_14cb5ce98 == 0) {
    FUN_14073dd9a(&DAT_14cb5ce98,&PTR_LAB_14b11d9b8);
  }
  return DAT_14cb5ce98;
}



// FUNCTION 1464d95d6 FUN_1464d95d6 body=35 status=ok
// SIG undefined FUN_1464d95d6(void)

void FUN_1464d95d6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ce0648(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b11dd50;
  return;
}



// FUNCTION 1464d95f9 FUN_1464d95f9 body=47 status=ok
// SIG undefined FUN_1464d95f9(void)

longlong FUN_1464d95f9(void)

{
  if (DAT_14cb5ceb0 == 0) {
    FUN_14073dd9a(&DAT_14cb5ceb0,&PTR_LAB_14b11dd08);
  }
  return DAT_14cb5ceb0;
}



// FUNCTION 1464d9628 FUN_1464d9628 body=50 status=ok
// SIG undefined FUN_1464d9628(void)

void FUN_1464d9628(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b11e450;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 2;
  return;
}



// FUNCTION 1464d965a FUN_1464d965a body=47 status=ok
// SIG undefined FUN_1464d965a(void)

longlong FUN_1464d965a(void)

{
  if (DAT_14cb5cec8 == 0) {
    FUN_14073dd9a(&DAT_14cb5cec8,&PTR_LAB_14b11e408);
  }
  return DAT_14cb5cec8;
}



// FUNCTION 1464d9689 FUN_1464d9689 body=47 status=ok
// SIG undefined FUN_1464d9689(void)

longlong FUN_1464d9689(void)

{
  if (DAT_14cb5cee0 == 0) {
    FUN_14073dd9a(&DAT_14cb5cee0,&PTR_LAB_14b11e7a8);
  }
  return DAT_14cb5cee0;
}



// FUNCTION 1464d96bd FUN_1464d96bd body=49 status=ok
// SIG undefined FUN_1464d96bd(void)

longlong FUN_1464d96bd(void)

{
  if (DAT_14cb5cf18 == 0) {
    FUN_14073dd9a(&DAT_14cb5cf18,&PTR_LAB_14b11efd0);
  }
  return DAT_14cb5cf18;
}



// FUNCTION 1464d96ee FUN_1464d96ee body=47 status=ok
// SIG undefined FUN_1464d96ee(void)

longlong FUN_1464d96ee(void)

{
  if (DAT_14cb5cef0 == 0) {
    FUN_14000fc22(&DAT_14cb5cef0,&PTR_FUN_14b11ec10);
  }
  return DAT_14cb5cef0;
}



// FUNCTION 1464d971d FUN_1464d971d body=47 status=ok
// SIG undefined FUN_1464d971d(void)

longlong FUN_1464d971d(void)

{
  if (DAT_14cb5cef8 == 0) {
    FUN_14000fc22(&DAT_14cb5cef8,&PTR_FUN_14b11ed58);
  }
  return DAT_14cb5cef8;
}



// FUNCTION 1464d974c FUN_1464d974c body=47 status=ok
// SIG undefined FUN_1464d974c(void)

longlong FUN_1464d974c(void)

{
  if (DAT_14cb5cf00 == 0) {
    FUN_14000fc22(&DAT_14cb5cf00,&PTR_FUN_14b11ee00);
  }
  return DAT_14cb5cf00;
}



// FUNCTION 1464d977b FUN_1464d977b body=47 status=ok
// SIG undefined FUN_1464d977b(void)

longlong FUN_1464d977b(void)

{
  if (DAT_14cb5cf08 == 0) {
    FUN_14000fc22(&DAT_14cb5cf08,&PTR_FUN_14b11eeb0);
  }
  return DAT_14cb5cf08;
}



// FUNCTION 1464d97aa FUN_1464d97aa body=34 status=ok
// SIG undefined FUN_1464d97aa(void)

void FUN_1464d97aa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a80874();
  FUN_14069c8d6(uVar1,&PTR_s_MakeActorDiscoverable_14b11eef0,4);
  return;
}



// FUNCTION 1464d97cc FUN_1464d97cc body=35 status=ok
// SIG undefined FUN_1464d97cc(void)

void FUN_1464d97cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b11f010;
  return;
}



// FUNCTION 1464d97ef FUN_1464d97ef body=47 status=ok
// SIG undefined FUN_1464d97ef(void)

longlong FUN_1464d97ef(void)

{
  if (DAT_14cb5cf30 == 0) {
    FUN_14073dd9a(&DAT_14cb5cf30,&PTR_LAB_14b11f348);
  }
  return DAT_14cb5cf30;
}



// FUNCTION 1464d981e FUN_1464d981e body=47 status=ok
// SIG undefined FUN_1464d981e(void)

longlong FUN_1464d981e(void)

{
  if (DAT_14cb5cf40 == 0) {
    FUN_14086a14e(&DAT_14cb5cf40,&PTR_FUN_14b11f3d8);
  }
  return DAT_14cb5cf40;
}



// FUNCTION 1464d984e FUN_1464d984e body=48 status=ok
// SIG undefined FUN_1464d984e(void)

void FUN_1464d984e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b124a10;
  return;
}



// FUNCTION 1464d987e FUN_1464d987e body=55 status=ok
// SIG undefined FUN_1464d987e(void)

void FUN_1464d987e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cf60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cf60 = FUN_140002ddd(FUN_1464d98b5,uVar1,L"GbxDiscoveryPPSettings");
  }
  return;
}



// FUNCTION 1464d98b5 FUN_1464d98b5 body=49 status=ok
// SIG undefined FUN_1464d98b5(void)

longlong FUN_1464d98b5(void)

{
  if (DAT_14cb5cf58 == 0) {
    FUN_14086a14e(&DAT_14cb5cf58,&PTR_FUN_14b11f590);
  }
  return DAT_14cb5cf58;
}



// FUNCTION 1464d98e6 FUN_1464d98e6 body=48 status=ok
// SIG undefined FUN_1464d98e6(void)

void FUN_1464d98e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b124bb0;
  return;
}



// FUNCTION 1464d9916 FUN_1464d9916 body=55 status=ok
// SIG undefined FUN_1464d9916(void)

void FUN_1464d9916(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cf78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cf78 = FUN_140002ddd(FUN_1464d994d,uVar1,L"GbxDiscoveryCustomWaypointSettings");
  }
  return;
}



// FUNCTION 1464d994d FUN_1464d994d body=47 status=ok
// SIG undefined FUN_1464d994d(void)

longlong FUN_1464d994d(void)

{
  if (DAT_14cb5cf70 == 0) {
    FUN_14086a14e(&DAT_14cb5cf70,&PTR_FUN_14b11fa68);
  }
  return DAT_14cb5cf70;
}



// FUNCTION 1464d997c FUN_1464d997c body=48 status=ok
// SIG undefined FUN_1464d997c(void)

void FUN_1464d997c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b124d10;
  return;
}



// FUNCTION 1464d99ac FUN_1464d99ac body=55 status=ok
// SIG undefined FUN_1464d99ac(void)

void FUN_1464d99ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cf90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cf90 = FUN_140002ddd(FUN_1464d99e3,uVar1,L"GbxDiscoveryMarkOnMapItem");
  }
  return;
}



// FUNCTION 1464d99e3 FUN_1464d99e3 body=47 status=ok
// SIG undefined FUN_1464d99e3(void)

longlong FUN_1464d99e3(void)

{
  if (DAT_14cb5cf88 == 0) {
    FUN_14086a14e(&DAT_14cb5cf88,&PTR_FUN_14b11fbb0);
  }
  return DAT_14cb5cf88;
}



// FUNCTION 1464d9a12 FUN_1464d9a12 body=48 status=ok
// SIG undefined FUN_1464d9a12(void)

void FUN_1464d9a12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b124e70;
  return;
}



// FUNCTION 1464d9a42 FUN_1464d9a42 body=55 status=ok
// SIG undefined FUN_1464d9a42(void)

void FUN_1464d9a42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cfa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cfa8 = FUN_140002ddd(FUN_1464d9a79,uVar1,L"GbxDiscoveryGlobals");
  }
  return;
}



// FUNCTION 1464d9a79 FUN_1464d9a79 body=47 status=ok
// SIG undefined FUN_1464d9a79(void)

longlong FUN_1464d9a79(void)

{
  if (DAT_14cb5cfa0 == 0) {
    FUN_14086a14e(&DAT_14cb5cfa0,&PTR_FUN_14b1204e8);
  }
  return DAT_14cb5cfa0;
}



// FUNCTION 1464d9aa8 FUN_1464d9aa8 body=48 status=ok
// SIG undefined FUN_1464d9aa8(void)

void FUN_1464d9aa8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000230;
  *puVar1 = &PTR_FUN_14b124fd0;
  return;
}



// FUNCTION 1464d9ad8 FUN_1464d9ad8 body=47 status=ok
// SIG undefined FUN_1464d9ad8(void)

longlong FUN_1464d9ad8(void)

{
  if (DAT_14cb5cfc0 == 0) {
    FUN_14073dd9a(&DAT_14cb5cfc0,&PTR_LAB_14b120638);
  }
  return DAT_14cb5cfc0;
}



// FUNCTION 1464d9b07 FUN_1464d9b07 body=47 status=ok
// SIG undefined FUN_1464d9b07(void)

longlong FUN_1464d9b07(void)

{
  if (DAT_14cb5cfd0 == 0) {
    FUN_14086a14e(&DAT_14cb5cfd0,&PTR_FUN_14b120880);
  }
  return DAT_14cb5cfd0;
}



// FUNCTION 1464d9b36 FUN_1464d9b36 body=48 status=ok
// SIG undefined FUN_1464d9b36(void)

void FUN_1464d9b36(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b125130;
  return;
}



// FUNCTION 1464d9b66 FUN_1464d9b66 body=47 status=ok
// SIG undefined FUN_1464d9b66(void)

longlong FUN_1464d9b66(void)

{
  if (DAT_14cb5cff0 == 0) {
    FUN_14073dd9a(&DAT_14cb5cff0,&PTR_LAB_14b120998);
  }
  return DAT_14cb5cff0;
}



// FUNCTION 1464d9b95 FUN_1464d9b95 body=49 status=ok
// SIG undefined FUN_1464d9b95(void)

longlong FUN_1464d9b95(void)

{
  if (DAT_14cb5d000 == 0) {
    FUN_14086a14e(&DAT_14cb5d000,&PTR_FUN_14b120e30);
  }
  return DAT_14cb5d000;
}



// FUNCTION 1464d9bc6 FUN_1464d9bc6 body=48 status=ok
// SIG undefined FUN_1464d9bc6(void)

void FUN_1464d9bc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000e0;
  *puVar1 = &PTR_FUN_14b1252d0;
  return;
}



// FUNCTION 1464d9bf6 FUN_1464d9bf6 body=49 status=ok
// SIG undefined FUN_1464d9bf6(void)

longlong FUN_1464d9bf6(void)

{
  if (DAT_14cb5d040 == 0) {
    FUN_14073dd9a(&DAT_14cb5d040,&PTR_LAB_14b1211c0);
  }
  return DAT_14cb5d040;
}



// FUNCTION 1464d9c27 FUN_1464d9c27 body=47 status=ok
// SIG undefined FUN_1464d9c27(void)

longlong FUN_1464d9c27(void)

{
  if (DAT_14cb5d028 == 0) {
    FUN_14000fc22(&DAT_14cb5d028,&PTR_FUN_14b120ee8);
  }
  return DAT_14cb5d028;
}



// FUNCTION 1464d9c56 FUN_1464d9c56 body=47 status=ok
// SIG undefined FUN_1464d9c56(void)

longlong FUN_1464d9c56(void)

{
  if (DAT_14cb5d030 == 0) {
    FUN_14000fc22(&DAT_14cb5d030,&PTR_FUN_14b120f40);
  }
  return DAT_14cb5d030;
}



// FUNCTION 1464d9c86 FUN_1464d9c86 body=34 status=ok
// SIG undefined FUN_1464d9c86(void)

void FUN_1464d9c86(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1410c02f4();
  FUN_14069c8d6(uVar1,&PTR_s_CreateNewDiscoveryLocationId_14b120f80,2);
  return;
}



// FUNCTION 1464d9cad FUN_1464d9cad body=49 status=ok
// SIG undefined FUN_1464d9cad(void)

longlong FUN_1464d9cad(void)

{
  if (DAT_14cb5d060 == 0) {
    FUN_14086a14e(&DAT_14cb5d060,&PTR_FUN_14b121b90);
  }
  return DAT_14cb5d060;
}



// FUNCTION 1464d9ce4 FUN_1464d9ce4 body=55 status=ok
// SIG undefined FUN_1464d9ce4(void)

void FUN_1464d9ce4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d068 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d068 = FUN_140002ddd(FUN_1464d9cad,uVar1,L"GbxDiscoveryLocationInstanceConfig");
  }
  return;
}



// FUNCTION 1464d9d1c FUN_1464d9d1c body=48 status=ok
// SIG undefined FUN_1464d9d1c(void)

void FUN_1464d9d1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000003f8;
  *puVar1 = &PTR_FUN_14b125470;
  return;
}



// FUNCTION 1464d9d4c FUN_1464d9d4c body=35 status=ok
// SIG undefined FUN_1464d9d4c(void)

void FUN_1464d9d4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b121ca0;
  return;
}


