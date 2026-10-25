// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1466063e4 FUN_1466063e4 body=34 status=ok
// SIG undefined FUN_1466063e4(void)

undefined8 FUN_1466063e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146606406 FUN_146606406 body=156 status=ok
// SIG undefined FUN_146606406(void)

undefined8 * FUN_146606406(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1466064a2 FUN_1466064a2 body=34 status=ok
// SIG undefined FUN_1466064a2(void)

undefined8 FUN_1466064a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1466064c4 FUN_1466064c4 body=34 status=ok
// SIG undefined FUN_1466064c4(void)

undefined8 FUN_1466064c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1466064e6 FUN_1466064e6 body=34 status=ok
// SIG undefined FUN_1466064e6(void)

undefined8 FUN_1466064e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146606508 FUN_146606508 body=34 status=ok
// SIG undefined FUN_146606508(void)

undefined8 FUN_146606508(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14660652a FUN_14660652a body=34 status=ok
// SIG undefined FUN_14660652a(void)

undefined8 FUN_14660652a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14660654c FUN_14660654c body=34 status=ok
// SIG undefined FUN_14660654c(void)

undefined8 FUN_14660654c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14660656e FUN_14660656e body=34 status=ok
// SIG undefined FUN_14660656e(void)

undefined8 FUN_14660656e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146606590 FUN_146606590 body=34 status=ok
// SIG undefined FUN_146606590(void)

undefined8 FUN_146606590(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1466065b2 FUN_1466065b2 body=34 status=ok
// SIG undefined FUN_1466065b2(void)

undefined8 FUN_1466065b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1466065d4 FUN_1466065d4 body=55 status=ok
// SIG undefined FUN_1466065d4(void)

void FUN_1466065d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9ce8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9ce8 = FUN_140002ddd(FUN_14660660b,uVar1,L"OakWidgetData_LootFeed");
  }
  return;
}



// FUNCTION 14660660b FUN_14660660b body=47 status=ok
// SIG undefined FUN_14660660b(void)

longlong FUN_14660660b(void)

{
  if (DAT_14cbb9ce0 == 0) {
    FUN_14086a14e(&DAT_14cbb9ce0,&PTR_FUN_14b8aef50);
  }
  return DAT_14cbb9ce0;
}



// FUNCTION 14660663a FUN_14660663a body=43 status=ok
// SIG undefined FUN_14660663a(void)

void FUN_14660663a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14b8b6200;
  return;
}



// FUNCTION 146606666 FUN_146606666 body=55 status=ok
// SIG undefined FUN_146606666(void)

void FUN_146606666(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba888 = FUN_140002ddd(FUN_14660669d,uVar1,L"OakWidgetData_LostLoot");
  }
  return;
}



// FUNCTION 14660669d FUN_14660669d body=47 status=ok
// SIG undefined FUN_14660669d(void)

longlong FUN_14660669d(void)

{
  if (DAT_14cbba880 == 0) {
    FUN_14086a14e(&DAT_14cbba880,&PTR_FUN_14b8af000);
  }
  return DAT_14cbba880;
}



// FUNCTION 1466066cc FUN_1466066cc body=43 status=ok
// SIG undefined FUN_1466066cc(void)

void FUN_1466066cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000b70;
  *puVar1 = &PTR_FUN_14b8b6390;
  return;
}



// FUNCTION 1466066f8 FUN_1466066f8 body=55 status=ok
// SIG undefined FUN_1466066f8(void)

void FUN_1466066f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba8a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba8a0 = FUN_140002ddd(FUN_14660672f,uVar1,L"OakWidgetData_LostLootMisc");
  }
  return;
}



// FUNCTION 14660672f FUN_14660672f body=47 status=ok
// SIG undefined FUN_14660672f(void)

longlong FUN_14660672f(void)

{
  if (DAT_14cbba898 == 0) {
    FUN_14086a14e(&DAT_14cbba898,&PTR_FUN_14b8af188);
  }
  return DAT_14cbba898;
}



// FUNCTION 14660675e FUN_14660675e body=43 status=ok
// SIG undefined FUN_14660675e(void)

void FUN_14660675e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000d8;
  *puVar1 = &PTR_FUN_14b8b6640;
  return;
}



// FUNCTION 14660678a FUN_14660678a body=55 status=ok
// SIG undefined FUN_14660678a(void)

void FUN_14660678a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba8b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba8b8 = FUN_140002ddd(FUN_1466067c1,uVar1,L"OakWidgetData_Activity");
  }
  return;
}



// FUNCTION 1466067c1 FUN_1466067c1 body=47 status=ok
// SIG undefined FUN_1466067c1(void)

longlong FUN_1466067c1(void)

{
  if (DAT_14cbba8b0 == 0) {
    FUN_14086a14e(&DAT_14cbba8b0,&PTR_FUN_14b8af2e8);
  }
  return DAT_14cbba8b0;
}



// FUNCTION 1466067f0 FUN_1466067f0 body=43 status=ok
// SIG undefined FUN_1466067f0(void)

void FUN_1466067f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b8b67d0;
  return;
}



// FUNCTION 14660681c FUN_14660681c body=55 status=ok
// SIG undefined FUN_14660681c(void)

void FUN_14660681c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba8d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba8d0 = FUN_140002ddd(FUN_146606853,uVar1,L"OakWidgetData_MatchmakingIndicator");
  }
  return;
}



// FUNCTION 146606853 FUN_146606853 body=47 status=ok
// SIG undefined FUN_146606853(void)

longlong FUN_146606853(void)

{
  if (DAT_14cbba8c8 == 0) {
    FUN_14086a14e(&DAT_14cbba8c8,&PTR_FUN_14b8af738);
  }
  return DAT_14cbba8c8;
}



// FUNCTION 146606882 FUN_146606882 body=43 status=ok
// SIG undefined FUN_146606882(void)

void FUN_146606882(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000001e8;
  *puVar1 = &PTR_FUN_14b8b6930;
  return;
}



// FUNCTION 1466068ae FUN_1466068ae body=55 status=ok
// SIG undefined FUN_1466068ae(void)

void FUN_1466068ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba8e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba8e8 =
         FUN_140002ddd(FUN_1466068e5,uVar1,L"OakWidgetData_MatchmakingMenu_RequirementEntry");
  }
  return;
}



// FUNCTION 1466068e5 FUN_1466068e5 body=47 status=ok
// SIG undefined FUN_1466068e5(void)

longlong FUN_1466068e5(void)

{
  if (DAT_14cbba8e0 == 0) {
    FUN_14086a14e(&DAT_14cbba8e0,&PTR_FUN_14b8af8f0);
  }
  return DAT_14cbba8e0;
}



// FUNCTION 146606914 FUN_146606914 body=43 status=ok
// SIG undefined FUN_146606914(void)

void FUN_146606914(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b8b6ac0;
  return;
}



// FUNCTION 146606940 FUN_146606940 body=55 status=ok
// SIG undefined FUN_146606940(void)

void FUN_146606940(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba900 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba900 =
         FUN_140002ddd(FUN_146606977,uVar1,L"OakWidgetData_MatchmakingMenu_ExperienceEntry");
  }
  return;
}



// FUNCTION 146606977 FUN_146606977 body=49 status=ok
// SIG undefined FUN_146606977(void)

longlong FUN_146606977(void)

{
  if (DAT_14cbba8f8 == 0) {
    FUN_14086a14e(&DAT_14cbba8f8,&PTR_FUN_14b8afbd0);
  }
  return DAT_14cbba8f8;
}



// FUNCTION 1466069a8 FUN_1466069a8 body=43 status=ok
// SIG undefined FUN_1466069a8(void)

void FUN_1466069a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b8b6c20;
  return;
}



// FUNCTION 1466069d4 FUN_1466069d4 body=55 status=ok
// SIG undefined FUN_1466069d4(void)

void FUN_1466069d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba918 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba918 = FUN_140002ddd(FUN_146606a0b,uVar1,L"OakWidgetData_MatchmakingMenu");
  }
  return;
}



// FUNCTION 146606a0b FUN_146606a0b body=47 status=ok
// SIG undefined FUN_146606a0b(void)

longlong FUN_146606a0b(void)

{
  if (DAT_14cbba910 == 0) {
    FUN_14086a14e(&DAT_14cbba910,&PTR_FUN_14b8b0308);
  }
  return DAT_14cbba910;
}



// FUNCTION 146606a3a FUN_146606a3a body=43 status=ok
// SIG undefined FUN_146606a3a(void)

void FUN_146606a3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000002f8;
  *puVar1 = &PTR_FUN_14b8b6d80;
  return;
}



// FUNCTION 146606a66 FUN_146606a66 body=55 status=ok
// SIG undefined FUN_146606a66(void)

void FUN_146606a66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba930 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba930 = FUN_140002ddd(FUN_146606a9d,uVar1,L"OakWidgetData_MatchmakingSettingsMenu");
  }
  return;
}



// FUNCTION 146606a9d FUN_146606a9d body=47 status=ok
// SIG undefined FUN_146606a9d(void)

longlong FUN_146606a9d(void)

{
  if (DAT_14cbba928 == 0) {
    FUN_14086a14e(&DAT_14cbba928,&PTR_FUN_14b8b07e0);
  }
  return DAT_14cbba928;
}



// FUNCTION 146606acc FUN_146606acc body=43 status=ok
// SIG undefined FUN_146606acc(void)

void FUN_146606acc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000320;
  *puVar1 = &PTR_FUN_14b8b6f10;
  return;
}



// FUNCTION 146606af8 FUN_146606af8 body=55 status=ok
// SIG undefined FUN_146606af8(void)

void FUN_146606af8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba948 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba948 = FUN_140002ddd(FUN_146606b2f,uVar1,L"GbxMayhemItem");
  }
  return;
}



// FUNCTION 146606b2f FUN_146606b2f body=47 status=ok
// SIG undefined FUN_146606b2f(void)

longlong FUN_146606b2f(void)

{
  if (DAT_14cbba940 == 0) {
    FUN_14086a14e(&DAT_14cbba940,&PTR_FUN_14b8b0a90);
  }
  return DAT_14cbba940;
}



// FUNCTION 146606b5e FUN_146606b5e body=43 status=ok
// SIG undefined FUN_146606b5e(void)

void FUN_146606b5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14b8b70a0;
  return;
}



// FUNCTION 146606b8a FUN_146606b8a body=55 status=ok
// SIG undefined FUN_146606b8a(void)

void FUN_146606b8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba960 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba960 = FUN_140002ddd(FUN_146606bc1,uVar1,L"OakUIData_Mayhem");
  }
  return;
}



// FUNCTION 146606bc1 FUN_146606bc1 body=47 status=ok
// SIG undefined FUN_146606bc1(void)

longlong FUN_146606bc1(void)

{
  if (DAT_14cbba958 == 0) {
    FUN_14086a14e(&DAT_14cbba958,&PTR_FUN_14b8b0bd0);
  }
  return DAT_14cbba958;
}



// FUNCTION 146606bf0 FUN_146606bf0 body=43 status=ok
// SIG undefined FUN_146606bf0(void)

void FUN_146606bf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14b8b7200;
  return;
}



// FUNCTION 146606c1c FUN_146606c1c body=55 status=ok
// SIG undefined FUN_146606c1c(void)

void FUN_146606c1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba978 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba978 = FUN_140002ddd(FUN_146606c53,uVar1,L"OakUIData_DebugAITreeTaskInfo");
  }
  return;
}



// FUNCTION 146606c53 FUN_146606c53 body=47 status=ok
// SIG undefined FUN_146606c53(void)

longlong FUN_146606c53(void)

{
  if (DAT_14cbba970 == 0) {
    FUN_14086a14e(&DAT_14cbba970,&PTR_FUN_14b8b0d50);
  }
  return DAT_14cbba970;
}



// FUNCTION 146606c82 FUN_146606c82 body=43 status=ok
// SIG undefined FUN_146606c82(void)

void FUN_146606c82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b8b7390;
  return;
}



// FUNCTION 146606cae FUN_146606cae body=55 status=ok
// SIG undefined FUN_146606cae(void)

void FUN_146606cae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba990 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba990 = FUN_140002ddd(FUN_146606ce5,uVar1,L"OakUIData_MenuDebugAITree");
  }
  return;
}



// FUNCTION 146606ce5 FUN_146606ce5 body=47 status=ok
// SIG undefined FUN_146606ce5(void)

longlong FUN_146606ce5(void)

{
  if (DAT_14cbba988 == 0) {
    FUN_14086a14e(&DAT_14cbba988,&PTR_FUN_14b8b0e70);
  }
  return DAT_14cbba988;
}



// FUNCTION 146606d14 FUN_146606d14 body=43 status=ok
// SIG undefined FUN_146606d14(void)

void FUN_146606d14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000d8;
  *puVar1 = &PTR_FUN_14b8b74f0;
  return;
}



// FUNCTION 146606d40 FUN_146606d40 body=55 status=ok
// SIG undefined FUN_146606d40(void)

void FUN_146606d40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba9a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba9a8 = FUN_140002ddd(FUN_146606d77,uVar1,L"OakWidgetData_MenuDebugFontTesting");
  }
  return;
}



// FUNCTION 146606d77 FUN_146606d77 body=47 status=ok
// SIG undefined FUN_146606d77(void)

longlong FUN_146606d77(void)

{
  if (DAT_14cbba9a0 == 0) {
    FUN_14086a14e(&DAT_14cbba9a0,&PTR_FUN_14b8b0f70);
  }
  return DAT_14cbba9a0;
}



// FUNCTION 146606da6 FUN_146606da6 body=43 status=ok
// SIG undefined FUN_146606da6(void)

void FUN_146606da6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14b8b7680;
  return;
}



// FUNCTION 146606dd2 FUN_146606dd2 body=55 status=ok
// SIG undefined FUN_146606dd2(void)

void FUN_146606dd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba9c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba9c0 = FUN_140002ddd(FUN_146606e09,uVar1,L"OakUIData_MenuDebugGbxProgression");
  }
  return;
}



// FUNCTION 146606e09 FUN_146606e09 body=47 status=ok
// SIG undefined FUN_146606e09(void)

longlong FUN_146606e09(void)

{
  if (DAT_14cbba9b8 == 0) {
    FUN_14086a14e(&DAT_14cbba9b8,&PTR_FUN_14b8b1090);
  }
  return DAT_14cbba9b8;
}



// FUNCTION 146606e38 FUN_146606e38 body=43 status=ok
// SIG undefined FUN_146606e38(void)

void FUN_146606e38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000d8;
  *puVar1 = &PTR_FUN_14b8b7810;
  return;
}



// FUNCTION 146606e64 FUN_146606e64 body=55 status=ok
// SIG undefined FUN_146606e64(void)

void FUN_146606e64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba9d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba9d8 = FUN_140002ddd(FUN_146606e9b,uVar1,L"OakUIData_DebugGearItemInfo");
  }
  return;
}



// FUNCTION 146606e9b FUN_146606e9b body=47 status=ok
// SIG undefined FUN_146606e9b(void)

longlong FUN_146606e9b(void)

{
  if (DAT_14cbba9d0 == 0) {
    FUN_14086a14e(&DAT_14cbba9d0,&PTR_FUN_14b8b1218);
  }
  return DAT_14cbba9d0;
}



// FUNCTION 146606eca FUN_146606eca body=43 status=ok
// SIG undefined FUN_146606eca(void)

void FUN_146606eca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b8b79a0;
  return;
}



// FUNCTION 146606ef6 FUN_146606ef6 body=55 status=ok
// SIG undefined FUN_146606ef6(void)

void FUN_146606ef6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba9f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba9f0 = FUN_140002ddd(FUN_146606f2d,uVar1,L"OakUIData_SelectedPartInfo");
  }
  return;
}



// FUNCTION 146606f2d FUN_146606f2d body=47 status=ok
// SIG undefined FUN_146606f2d(void)

longlong FUN_146606f2d(void)

{
  if (DAT_14cbba9e8 == 0) {
    FUN_14086a14e(&DAT_14cbba9e8,&PTR_FUN_14b8b1330);
  }
  return DAT_14cbba9e8;
}



// FUNCTION 146606f5c FUN_146606f5c body=43 status=ok
// SIG undefined FUN_146606f5c(void)

void FUN_146606f5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b8b7b00;
  return;
}



// FUNCTION 146606f88 FUN_146606f88 body=55 status=ok
// SIG undefined FUN_146606f88(void)

void FUN_146606f88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaa08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaa08 = FUN_140002ddd(FUN_146606fbf,uVar1,L"OakUIData_MenuDebugGearBuilder");
  }
  return;
}



// FUNCTION 146606fbf FUN_146606fbf body=47 status=ok
// SIG undefined FUN_146606fbf(void)

longlong FUN_146606fbf(void)

{
  if (DAT_14cbbaa00 == 0) {
    FUN_14086a14e(&DAT_14cbbaa00,&PTR_FUN_14b8b16b0);
  }
  return DAT_14cbbaa00;
}



// FUNCTION 146606fee FUN_146606fee body=43 status=ok
// SIG undefined FUN_146606fee(void)

void FUN_146606fee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000138;
  *puVar1 = &PTR_FUN_14b8b7c60;
  return;
}



// FUNCTION 14660701a FUN_14660701a body=55 status=ok
// SIG undefined FUN_14660701a(void)

void FUN_14660701a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaa80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaa80 = FUN_140002ddd(FUN_146607051,uVar1,L"OakUIData_OakPauseMenu");
  }
  return;
}



// FUNCTION 146607051 FUN_146607051 body=47 status=ok
// SIG undefined FUN_146607051(void)

longlong FUN_146607051(void)

{
  if (DAT_14cbbaa78 == 0) {
    FUN_14086a14e(&DAT_14cbbaa78,&PTR_FUN_14b8b1ae8);
  }
  return DAT_14cbbaa78;
}



// FUNCTION 146607080 FUN_146607080 body=43 status=ok
// SIG undefined FUN_146607080(void)

void FUN_146607080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000318;
  *puVar1 = &PTR_FUN_14b8b7df0;
  return;
}



// FUNCTION 1466070ac FUN_1466070ac body=55 status=ok
// SIG undefined FUN_1466070ac(void)

void FUN_1466070ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaa98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaa98 = FUN_140002ddd(FUN_1466070e3,uVar1,L"OakWidgetData_MenuTitlePicker");
  }
  return;
}



// FUNCTION 1466070e3 FUN_1466070e3 body=47 status=ok
// SIG undefined FUN_1466070e3(void)

longlong FUN_1466070e3(void)

{
  if (DAT_14cbbaa90 == 0) {
    FUN_14086a14e(&DAT_14cbbaa90,&PTR_FUN_14b8b1c00);
  }
  return DAT_14cbbaa90;
}



// FUNCTION 146607112 FUN_146607112 body=43 status=ok
// SIG undefined FUN_146607112(void)

void FUN_146607112(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b8b7fb0;
  return;
}



// FUNCTION 14660713e FUN_14660713e body=55 status=ok
// SIG undefined FUN_14660713e(void)

void FUN_14660713e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaab0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaab0 = FUN_140002ddd(FUN_146607175,uVar1,L"OakUIData_MenuTutorialSequence");
  }
  return;
}



// FUNCTION 146607175 FUN_146607175 body=47 status=ok
// SIG undefined FUN_146607175(void)

longlong FUN_146607175(void)

{
  if (DAT_14cbbaaa8 == 0) {
    FUN_14086a14e(&DAT_14cbbaaa8,&PTR_FUN_14b8b2278);
  }
  return DAT_14cbbaaa8;
}



// FUNCTION 1466071a4 FUN_1466071a4 body=43 status=ok
// SIG undefined FUN_1466071a4(void)

void FUN_1466071a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000178;
  *puVar1 = &PTR_FUN_14b8b8140;
  return;
}



// FUNCTION 1466071d0 FUN_1466071d0 body=55 status=ok
// SIG undefined FUN_1466071d0(void)

void FUN_1466071d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaac8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaac8 = FUN_140002ddd(FUN_146607207,uVar1,L"OakWidgetData_ChallengePips");
  }
  return;
}



// FUNCTION 146607207 FUN_146607207 body=47 status=ok
// SIG undefined FUN_146607207(void)

longlong FUN_146607207(void)

{
  if (DAT_14cbbaac0 == 0) {
    FUN_14086a14e(&DAT_14cbbaac0,&PTR_FUN_14b8b2438);
  }
  return DAT_14cbbaac0;
}



// FUNCTION 146607236 FUN_146607236 body=43 status=ok
// SIG undefined FUN_146607236(void)

void FUN_146607236(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b8b82d0;
  return;
}



// FUNCTION 146607262 FUN_146607262 body=55 status=ok
// SIG undefined FUN_146607262(void)

void FUN_146607262(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaae0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaae0 = FUN_140002ddd(FUN_146607299,uVar1,L"OakUIData_Message");
  }
  return;
}



// FUNCTION 146607299 FUN_146607299 body=47 status=ok
// SIG undefined FUN_146607299(void)

longlong FUN_146607299(void)

{
  if (DAT_14cbbaad8 == 0) {
    FUN_14086a14e(&DAT_14cbbaad8,&PTR_FUN_14b8b2da0);
  }
  return DAT_14cbbaad8;
}



// FUNCTION 1466072c8 FUN_1466072c8 body=43 status=ok
// SIG undefined FUN_1466072c8(void)

void FUN_1466072c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000248;
  *puVar1 = &PTR_FUN_14b8b8460;
  return;
}



// FUNCTION 1466072f4 FUN_1466072f4 body=55 status=ok
// SIG undefined FUN_1466072f4(void)

void FUN_1466072f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaaf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaaf8 = FUN_140002ddd(FUN_14660732b,uVar1,L"OakWidgetData_MissionRequirement");
  }
  return;
}



// FUNCTION 14660732b FUN_14660732b body=49 status=ok
// SIG undefined FUN_14660732b(void)

longlong FUN_14660732b(void)

{
  if (DAT_14cbbaaf0 == 0) {
    FUN_14086a14e(&DAT_14cbbaaf0,&PTR_FUN_14b8b2f38);
  }
  return DAT_14cbbaaf0;
}



// FUNCTION 14660735c FUN_14660735c body=43 status=ok
// SIG undefined FUN_14660735c(void)

void FUN_14660735c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14b8b85f0;
  return;
}



// FUNCTION 146607388 FUN_146607388 body=55 status=ok
// SIG undefined FUN_146607388(void)

void FUN_146607388(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbab10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbab10 = FUN_140002ddd(FUN_1466073bf,uVar1,L"OakWidgetData_MissionTrait");
  }
  return;
}



// FUNCTION 1466073bf FUN_1466073bf body=47 status=ok
// SIG undefined FUN_1466073bf(void)

longlong FUN_1466073bf(void)

{
  if (DAT_14cbbab08 == 0) {
    FUN_14086a14e(&DAT_14cbbab08,&PTR_FUN_14b8b3008);
  }
  return DAT_14cbbab08;
}



// FUNCTION 1466073ee FUN_1466073ee body=43 status=ok
// SIG undefined FUN_1466073ee(void)

void FUN_1466073ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b8b8780;
  return;
}



// FUNCTION 14660741a FUN_14660741a body=55 status=ok
// SIG undefined FUN_14660741a(void)

void FUN_14660741a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbab28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbab28 = FUN_140002ddd(FUN_146607451,uVar1,L"OakWidgetData_MissionPip");
  }
  return;
}



// FUNCTION 146607451 FUN_146607451 body=47 status=ok
// SIG undefined FUN_146607451(void)

longlong FUN_146607451(void)

{
  if (DAT_14cbbab20 == 0) {
    FUN_14086a14e(&DAT_14cbbab20,&PTR_FUN_14b8b3218);
  }
  return DAT_14cbbab20;
}



// FUNCTION 146607480 FUN_146607480 body=43 status=ok
// SIG undefined FUN_146607480(void)

void FUN_146607480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14b8b88e0;
  return;
}



// FUNCTION 1466074ac FUN_1466074ac body=55 status=ok
// SIG undefined FUN_1466074ac(void)

void FUN_1466074ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbab40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbab40 = FUN_140002ddd(FUN_1466074e3,uVar1,L"OakWidgetData_MissionAccept");
  }
  return;
}



// FUNCTION 1466074e3 FUN_1466074e3 body=47 status=ok
// SIG undefined FUN_1466074e3(void)

longlong FUN_1466074e3(void)

{
  if (DAT_14cbbab38 == 0) {
    FUN_14086a14e(&DAT_14cbbab38,&PTR_FUN_14b8b3c28);
  }
  return DAT_14cbbab38;
}



// FUNCTION 146607512 FUN_146607512 body=43 status=ok
// SIG undefined FUN_146607512(void)

void FUN_146607512(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000001f0;
  *puVar1 = &PTR_FUN_14b8b8a80;
  return;
}



// FUNCTION 14660753d FUN_14660753d body=47 status=ok
// SIG undefined FUN_14660753d(void)

longlong FUN_14660753d(void)

{
  if (DAT_14cbbabb8 == 0) {
    FUN_1409ce572(&DAT_14cbbabb8,&PTR_FUN_14b8b3d60);
  }
  return DAT_14cbbabb8;
}



// FUNCTION 14660756c FUN_14660756c body=47 status=ok
// SIG undefined FUN_14660756c(void)

longlong FUN_14660756c(void)

{
  if (DAT_14cbbabd0 == 0) {
    FUN_1409ce572(&DAT_14cbbabd0,&PTR_FUN_14b8b3de0);
  }
  return DAT_14cbbabd0;
}



// FUNCTION 14660759c FUN_14660759c body=55 status=ok
// SIG undefined FUN_14660759c(void)

void FUN_14660759c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbabf0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbabf0 = FUN_140002ddd(FUN_1466075d3,uVar1,L"MissionLogFilters");
  }
  return;
}



// FUNCTION 1466075d3 FUN_1466075d3 body=47 status=ok
// SIG undefined FUN_1466075d3(void)

longlong FUN_1466075d3(void)

{
  if (DAT_14cbbabe8 == 0) {
    FUN_14086a14e(&DAT_14cbbabe8,&PTR_FUN_14b8b3fe0);
  }
  return DAT_14cbbabe8;
}



// FUNCTION 146607602 FUN_146607602 body=43 status=ok
// SIG undefined FUN_146607602(void)

void FUN_146607602(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b8b8d20;
  return;
}



// FUNCTION 14660762e FUN_14660762e body=55 status=ok
// SIG undefined FUN_14660762e(void)

void FUN_14660762e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac08 = FUN_140002ddd(FUN_146607665,uVar1,L"TraitWrapper");
  }
  return;
}



// FUNCTION 146607665 FUN_146607665 body=47 status=ok
// SIG undefined FUN_146607665(void)

longlong FUN_146607665(void)

{
  if (DAT_14cbbac00 == 0) {
    FUN_14086a14e(&DAT_14cbbac00,&PTR_FUN_14b8b4088);
  }
  return DAT_14cbbac00;
}



// FUNCTION 146607694 FUN_146607694 body=43 status=ok
// SIG undefined FUN_146607694(void)

void FUN_146607694(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b8b8e80;
  return;
}



// FUNCTION 1466076c0 FUN_1466076c0 body=55 status=ok
// SIG undefined FUN_1466076c0(void)

void FUN_1466076c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac20 = FUN_140002ddd(FUN_1466076f7,uVar1,L"OakWidgetData_MissionLogDetails");
  }
  return;
}



// FUNCTION 1466076f7 FUN_1466076f7 body=49 status=ok
// SIG undefined FUN_1466076f7(void)

longlong FUN_1466076f7(void)

{
  if (DAT_14cbbac18 == 0) {
    FUN_14086a14e(&DAT_14cbbac18,&PTR_FUN_14b8b4870);
  }
  return DAT_14cbbac18;
}



// FUNCTION 146607728 FUN_146607728 body=49 status=ok
// SIG undefined FUN_146607728(void)

longlong FUN_146607728(void)

{
  if (DAT_14cbbacc0 == 0) {
    FUN_14086a14e(&DAT_14cbbacc0,&PTR_FUN_14b8b5a90);
  }
  return DAT_14cbbacc0;
}



// FUNCTION 14660775a FUN_14660775a body=43 status=ok
// SIG undefined FUN_14660775a(void)

void FUN_14660775a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000138;
  *puVar1 = &PTR_FUN_14b8b8fe0;
  return;
}



// FUNCTION 146607786 FUN_146607786 body=55 status=ok
// SIG undefined FUN_146607786(void)

void FUN_146607786(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac38 = FUN_140002ddd(FUN_1466077bd,uVar1,L"MissionLogSortingGroup");
  }
  return;
}



// FUNCTION 1466077bd FUN_1466077bd body=49 status=ok
// SIG undefined FUN_1466077bd(void)

longlong FUN_1466077bd(void)

{
  if (DAT_14cbbac30 == 0) {
    FUN_14086a14e(&DAT_14cbbac30,&PTR_FUN_14b8b49c0);
  }
  return DAT_14cbbac30;
}



// FUNCTION 1466077ee FUN_1466077ee body=43 status=ok
// SIG undefined FUN_1466077ee(void)

void FUN_1466077ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b8b9140;
  return;
}



// FUNCTION 146607819 FUN_146607819 body=47 status=ok
// SIG undefined FUN_146607819(void)

longlong FUN_146607819(void)

{
  if (DAT_14cbbac48 == 0) {
    FUN_14086a14e(&DAT_14cbbac48,&PTR_FUN_14b8b4fb8);
  }
  return DAT_14cbbac48;
}



// FUNCTION 146607848 FUN_146607848 body=43 status=ok
// SIG undefined FUN_146607848(void)

void FUN_146607848(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000388;
  *puVar1 = &PTR_FUN_14b8b92a0;
  return;
}



// FUNCTION 146607874 FUN_146607874 body=55 status=ok
// SIG undefined FUN_146607874(void)

void FUN_146607874(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac68 = FUN_140002ddd(FUN_1466078ab,uVar1,L"OakUIObjectiveEntry");
  }
  return;
}



// FUNCTION 1466078ab FUN_1466078ab body=47 status=ok
// SIG undefined FUN_1466078ab(void)

longlong FUN_1466078ab(void)

{
  if (DAT_14cbbac60 == 0) {
    FUN_14086a14e(&DAT_14cbbac60,&PTR_FUN_14b8b51e8);
  }
  return DAT_14cbbac60;
}



// FUNCTION 1466078da FUN_1466078da body=43 status=ok
// SIG undefined FUN_1466078da(void)

void FUN_1466078da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b8b9430;
  return;
}



// FUNCTION 146607906 FUN_146607906 body=55 status=ok
// SIG undefined FUN_146607906(void)

void FUN_146607906(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac80 = FUN_140002ddd(FUN_14660793d,uVar1,L"OakObjectiveUXDetails");
  }
  return;
}



// FUNCTION 14660793d FUN_14660793d body=49 status=ok
// SIG undefined FUN_14660793d(void)

longlong FUN_14660793d(void)

{
  if (DAT_14cbbac78 == 0) {
    FUN_14086a14e(&DAT_14cbbac78,&PTR_FUN_14b8b52a8);
  }
  return DAT_14cbbac78;
}



// FUNCTION 14660796e FUN_14660796e body=43 status=ok
// SIG undefined FUN_14660796e(void)

void FUN_14660796e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b8b9590;
  return;
}



// FUNCTION 14660799a FUN_14660799a body=55 status=ok
// SIG undefined FUN_14660799a(void)

void FUN_14660799a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbac98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbac98 = FUN_140002ddd(FUN_1466079d1,uVar1,L"OakObjectiveUXDetails_Count");
  }
  return;
}



// FUNCTION 1466079d1 FUN_1466079d1 body=47 status=ok
// SIG undefined FUN_1466079d1(void)

longlong FUN_1466079d1(void)

{
  if (DAT_14cbbac90 == 0) {
    FUN_14086a14e(&DAT_14cbbac90,&PTR_FUN_14b8b53e0);
  }
  return DAT_14cbbac90;
}



// FUNCTION 146607a00 FUN_146607a00 body=43 status=ok
// SIG undefined FUN_146607a00(void)

void FUN_146607a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b8b96f0;
  return;
}



// FUNCTION 146607a2c FUN_146607a2c body=55 status=ok
// SIG undefined FUN_146607a2c(void)

void FUN_146607a2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbacb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbacb0 = FUN_140002ddd(FUN_146607a63,uVar1,L"OakObjectiveUXDetails_Timer");
  }
  return;
}



// FUNCTION 146607a63 FUN_146607a63 body=47 status=ok
// SIG undefined FUN_146607a63(void)

longlong FUN_146607a63(void)

{
  if (DAT_14cbbaca8 == 0) {
    FUN_14086a14e(&DAT_14cbbaca8,&PTR_FUN_14b8b5470);
  }
  return DAT_14cbbaca8;
}



// FUNCTION 146607a92 FUN_146607a92 body=43 status=ok
// SIG undefined FUN_146607a92(void)

void FUN_146607a92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b8b9850;
  return;
}



// FUNCTION 146607abe FUN_146607abe body=55 status=ok
// SIG undefined FUN_146607abe(void)

void FUN_146607abe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbacc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbacc8 = FUN_140002ddd(FUN_146607728,uVar1,L"OakObjectiveUXData");
  }
  return;
}



// FUNCTION 146607af6 FUN_146607af6 body=43 status=ok
// SIG undefined FUN_146607af6(void)

void FUN_146607af6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000e8;
  *puVar1 = &PTR_FUN_14b8b99b0;
  return;
}



// FUNCTION 146607b22 FUN_146607b22 body=55 status=ok
// SIG undefined FUN_146607b22(void)

void FUN_146607b22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbace0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbace0 = FUN_140002ddd(FUN_146607b59,uVar1,L"OakMissionUXData");
  }
  return;
}



// FUNCTION 146607b59 FUN_146607b59 body=49 status=ok
// SIG undefined FUN_146607b59(void)

longlong FUN_146607b59(void)

{
  if (DAT_14cbbacd8 == 0) {
    FUN_14086a14e(&DAT_14cbbacd8,&PTR_FUN_14b8b5d48);
  }
  return DAT_14cbbacd8;
}



// FUNCTION 146607b8a FUN_146607b8a body=43 status=ok
// SIG undefined FUN_146607b8a(void)

void FUN_146607b8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b8b9b20;
  return;
}



// FUNCTION 146607bb6 FUN_146607bb6 body=55 status=ok
// SIG undefined FUN_146607bb6(void)

void FUN_146607bb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbacf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbacf8 = FUN_140002ddd(FUN_146607bed,uVar1,L"OakWidgetData_MissionTracker");
  }
  return;
}



// FUNCTION 146607bed FUN_146607bed body=47 status=ok
// SIG undefined FUN_146607bed(void)

longlong FUN_146607bed(void)

{
  if (DAT_14cbbacf0 == 0) {
    FUN_14086a14e(&DAT_14cbbacf0,&PTR_FUN_14b8b60a0);
  }
  return DAT_14cbbacf0;
}



// FUNCTION 146607c1c FUN_146607c1c body=43 status=ok
// SIG undefined FUN_146607c1c(void)

void FUN_146607c1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000001e8;
  *puVar1 = &PTR_FUN_14b8b9c80;
  return;
}



// FUNCTION 146607c48 FUN_146607c48 body=29 status=ok
// SIG undefined FUN_146607c48(void)

undefined8 FUN_146607c48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607c66 FUN_146607c66 body=38 status=ok
// SIG undefined FUN_146607c66(void)

undefined8 FUN_146607c66(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607c8c FUN_146607c8c body=29 status=ok
// SIG undefined FUN_146607c8c(void)

undefined8 FUN_146607c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607caa FUN_146607caa body=29 status=ok
// SIG undefined FUN_146607caa(void)

undefined8 FUN_146607caa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607cc8 FUN_146607cc8 body=29 status=ok
// SIG undefined FUN_146607cc8(void)

undefined8 FUN_146607cc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607ce6 FUN_146607ce6 body=29 status=ok
// SIG undefined FUN_146607ce6(void)

undefined8 FUN_146607ce6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607d04 FUN_146607d04 body=29 status=ok
// SIG undefined FUN_146607d04(void)

undefined8 FUN_146607d04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607d22 FUN_146607d22 body=29 status=ok
// SIG undefined FUN_146607d22(void)

undefined8 FUN_146607d22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607d40 FUN_146607d40 body=29 status=ok
// SIG undefined FUN_146607d40(void)

undefined8 FUN_146607d40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607d5e FUN_146607d5e body=29 status=ok
// SIG undefined FUN_146607d5e(void)

undefined8 FUN_146607d5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607d7c FUN_146607d7c body=29 status=ok
// SIG undefined FUN_146607d7c(void)

undefined8 FUN_146607d7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607d9a FUN_146607d9a body=29 status=ok
// SIG undefined FUN_146607d9a(void)

undefined8 FUN_146607d9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607db8 FUN_146607db8 body=29 status=ok
// SIG undefined FUN_146607db8(void)

undefined8 FUN_146607db8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607dd6 FUN_146607dd6 body=29 status=ok
// SIG undefined FUN_146607dd6(void)

undefined8 FUN_146607dd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607df4 FUN_146607df4 body=29 status=ok
// SIG undefined FUN_146607df4(void)

undefined8 FUN_146607df4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607e12 FUN_146607e12 body=29 status=ok
// SIG undefined FUN_146607e12(void)

undefined8 FUN_146607e12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607e30 FUN_146607e30 body=70 status=ok
// SIG undefined FUN_146607e30(void)

undefined8 * FUN_146607e30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8b7970;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145a24368(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607e76 FUN_146607e76 body=29 status=ok
// SIG undefined FUN_146607e76(void)

undefined8 FUN_146607e76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607e94 FUN_146607e94 body=29 status=ok
// SIG undefined FUN_146607e94(void)

undefined8 FUN_146607e94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607eb2 FUN_146607eb2 body=29 status=ok
// SIG undefined FUN_146607eb2(void)

undefined8 FUN_146607eb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607ed0 FUN_146607ed0 body=29 status=ok
// SIG undefined FUN_146607ed0(void)

undefined8 FUN_146607ed0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607eee FUN_146607eee body=29 status=ok
// SIG undefined FUN_146607eee(void)

undefined8 FUN_146607eee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607f0c FUN_146607f0c body=29 status=ok
// SIG undefined FUN_146607f0c(void)

undefined8 FUN_146607f0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607f2a FUN_146607f2a body=29 status=ok
// SIG undefined FUN_146607f2a(void)

undefined8 FUN_146607f2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607f48 FUN_146607f48 body=29 status=ok
// SIG undefined FUN_146607f48(void)

undefined8 FUN_146607f48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607f66 FUN_146607f66 body=29 status=ok
// SIG undefined FUN_146607f66(void)

undefined8 FUN_146607f66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607f84 FUN_146607f84 body=29 status=ok
// SIG undefined FUN_146607f84(void)

undefined8 FUN_146607f84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607fa2 FUN_146607fa2 body=29 status=ok
// SIG undefined FUN_146607fa2(void)

undefined8 FUN_146607fa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607fc0 FUN_146607fc0 body=29 status=ok
// SIG undefined FUN_146607fc0(void)

undefined8 FUN_146607fc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607fde FUN_146607fde body=29 status=ok
// SIG undefined FUN_146607fde(void)

undefined8 FUN_146607fde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146607ffc FUN_146607ffc body=29 status=ok
// SIG undefined FUN_146607ffc(void)

undefined8 FUN_146607ffc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14660801a FUN_14660801a body=29 status=ok
// SIG undefined FUN_14660801a(void)

undefined8 FUN_14660801a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146608038 FUN_146608038 body=29 status=ok
// SIG undefined FUN_146608038(void)

undefined8 FUN_146608038(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146608056 FUN_146608056 body=29 status=ok
// SIG undefined FUN_146608056(void)

undefined8 FUN_146608056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146608074 FUN_146608074 body=29 status=ok
// SIG undefined FUN_146608074(void)

undefined8 FUN_146608074(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146608092 FUN_146608092 body=29 status=ok
// SIG undefined FUN_146608092(void)

undefined8 FUN_146608092(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466080b0 FUN_1466080b0 body=29 status=ok
// SIG undefined FUN_1466080b0(void)

undefined8 FUN_1466080b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466080ce FUN_1466080ce body=29 status=ok
// SIG undefined FUN_1466080ce(void)

undefined8 FUN_1466080ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466080ec FUN_1466080ec body=29 status=ok
// SIG undefined FUN_1466080ec(void)

undefined8 FUN_1466080ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14660810a FUN_14660810a body=29 status=ok
// SIG undefined FUN_14660810a(void)

undefined8 FUN_14660810a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146608128 FUN_146608128 body=29 status=ok
// SIG undefined FUN_146608128(void)

undefined8 FUN_146608128(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146608146 FUN_146608146 body=55 status=ok
// SIG undefined FUN_146608146(void)

void FUN_146608146(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbad10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbad10 = FUN_140002ddd(FUN_14660817d,uVar1,L"OakUIData_NameplateHealthType");
  }
  return;
}



// FUNCTION 14660817d FUN_14660817d body=47 status=ok
// SIG undefined FUN_14660817d(void)

longlong FUN_14660817d(void)

{
  if (DAT_14cbbad08 == 0) {
    FUN_14086a14e(&DAT_14cbbad08,&PTR_FUN_14b8b9f00);
  }
  return DAT_14cbbad08;
}



// FUNCTION 1466081ac FUN_1466081ac body=43 status=ok
// SIG undefined FUN_1466081ac(void)

void FUN_1466081ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b8c0c80;
  return;
}



// FUNCTION 1466081d8 FUN_1466081d8 body=55 status=ok
// SIG undefined FUN_1466081d8(void)

void FUN_1466081d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbad28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbad28 = FUN_140002ddd(FUN_14660820f,uVar1,L"OakUIData_NameplateBar");
  }
  return;
}



// FUNCTION 14660820f FUN_14660820f body=49 status=ok
// SIG undefined FUN_14660820f(void)

longlong FUN_14660820f(void)

{
  if (DAT_14cbbad20 == 0) {
    FUN_14086a14e(&DAT_14cbbad20,&PTR_FUN_14b8ba1e8);
  }
  return DAT_14cbbad20;
}



// FUNCTION 146608240 FUN_146608240 body=43 status=ok
// SIG undefined FUN_146608240(void)

void FUN_146608240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b8c0de0;
  return;
}



// FUNCTION 14660826c FUN_14660826c body=55 status=ok
// SIG undefined FUN_14660826c(void)

void FUN_14660826c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbad40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbad40 = FUN_140002ddd(FUN_1466082a3,uVar1,L"OakWidgetData_Nameplate");
  }
  return;
}



// FUNCTION 1466082a3 FUN_1466082a3 body=47 status=ok
// SIG undefined FUN_1466082a3(void)

longlong FUN_1466082a3(void)

{
  if (DAT_14cbbad38 == 0) {
    FUN_14086a14e(&DAT_14cbbad38,&PTR_FUN_14b8baaf0);
  }
  return DAT_14cbbad38;
}



// FUNCTION 1466082d2 FUN_1466082d2 body=43 status=ok
// SIG undefined FUN_1466082d2(void)

void FUN_1466082d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000001d0;
  *puVar1 = &PTR_FUN_14b8c0f40;
  return;
}



// FUNCTION 1466082fd FUN_1466082fd body=47 status=ok
// SIG undefined FUN_1466082fd(void)

longlong FUN_1466082fd(void)

{
  if (DAT_14cbbae28 == 0) {
    FUN_14086a14e(&DAT_14cbbae28,&PTR_FUN_14b8bafe0);
  }
  return DAT_14cbbae28;
}



// FUNCTION 14660832c FUN_14660832c body=43 status=ok
// SIG undefined FUN_14660832c(void)

void FUN_14660832c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000238;
  *puVar1 = &PTR_FUN_14b8c10d0;
  return;
}



// FUNCTION 146608358 FUN_146608358 body=55 status=ok
// SIG undefined FUN_146608358(void)

void FUN_146608358(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbae48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbae48 = FUN_140002ddd(FUN_14660838f,uVar1,L"OakUI_NewGameMenu_Entry");
  }
  return;
}



// FUNCTION 14660838f FUN_14660838f body=47 status=ok
// SIG undefined FUN_14660838f(void)

longlong FUN_14660838f(void)

{
  if (DAT_14cbbae40 == 0) {
    FUN_14086a14e(&DAT_14cbbae40,&PTR_FUN_14b8bb300);
  }
  return DAT_14cbbae40;
}



// FUNCTION 1466083be FUN_1466083be body=43 status=ok
// SIG undefined FUN_1466083be(void)

void FUN_1466083be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b8c1260;
  return;
}



// FUNCTION 1466083ea FUN_1466083ea body=55 status=ok
// SIG undefined FUN_1466083ea(void)

void FUN_1466083ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbae60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbae60 = FUN_140002ddd(FUN_146608421,uVar1,L"OakWidgetData_NewGameMenu");
  }
  return;
}



// FUNCTION 146608421 FUN_146608421 body=47 status=ok
// SIG undefined FUN_146608421(void)

longlong FUN_146608421(void)

{
  if (DAT_14cbbae58 == 0) {
    FUN_14086a14e(&DAT_14cbbae58,&PTR_FUN_14b8bb750);
  }
  return DAT_14cbbae58;
}



// FUNCTION 146608450 FUN_146608450 body=43 status=ok
// SIG undefined FUN_146608450(void)

void FUN_146608450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000208;
  *puVar1 = &PTR_FUN_14b8c13c0;
  return;
}



// FUNCTION 14660847c FUN_14660847c body=55 status=ok
// SIG undefined FUN_14660847c(void)

void FUN_14660847c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbae78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbae78 = FUN_140002ddd(FUN_1466084b3,uVar1,L"OakWidgetData_News");
  }
  return;
}



// FUNCTION 1466084b3 FUN_1466084b3 body=47 status=ok
// SIG undefined FUN_1466084b3(void)

longlong FUN_1466084b3(void)

{
  if (DAT_14cbbae70 == 0) {
    FUN_14086a14e(&DAT_14cbbae70,&PTR_FUN_14b8bbfc8);
  }
  return DAT_14cbbae70;
}



// FUNCTION 1466084e2 FUN_1466084e2 body=43 status=ok
// SIG undefined FUN_1466084e2(void)

void FUN_1466084e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000248;
  *puVar1 = &PTR_FUN_14b8c1550;
  return;
}



// FUNCTION 14660850e FUN_14660850e body=55 status=ok
// SIG undefined FUN_14660850e(void)

void FUN_14660850e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbafa0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbafa0 = FUN_140002ddd(FUN_146608545,uVar1,L"OakUIData_OakMainMenu");
  }
  return;
}



// FUNCTION 146608545 FUN_146608545 body=47 status=ok
// SIG undefined FUN_146608545(void)

longlong FUN_146608545(void)

{
  if (DAT_14cbbaf98 == 0) {
    FUN_14086a14e(&DAT_14cbbaf98,&PTR_FUN_14b8bc620);
  }
  return DAT_14cbbaf98;
}



// FUNCTION 146608574 FUN_146608574 body=43 status=ok
// SIG undefined FUN_146608574(void)

void FUN_146608574(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000708;
  *puVar1 = &PTR_FUN_14b8c16e0;
  return;
}



// FUNCTION 1466085a0 FUN_1466085a0 body=55 status=ok
// SIG undefined FUN_1466085a0(void)

void FUN_1466085a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbafe0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbafe0 = FUN_140002ddd(FUN_1418d1884,uVar1,L"OakWidgetData_OptionsMenu_GamepadBinding");
  }
  return;
}



// FUNCTION 1466085d8 FUN_1466085d8 body=43 status=ok
// SIG undefined FUN_1466085d8(void)

void FUN_1466085d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b8c1870;
  return;
}



// FUNCTION 146608604 FUN_146608604 body=55 status=ok
// SIG undefined FUN_146608604(void)

void FUN_146608604(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbaff8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbaff8 = FUN_140002ddd(FUN_14660863b,uVar1,L"OakWidgetData_OptionsMenu_GamepadBindings");
  }
  return;
}



// FUNCTION 14660863b FUN_14660863b body=47 status=ok
// SIG undefined FUN_14660863b(void)

longlong FUN_14660863b(void)

{
  if (DAT_14cbbaff0 == 0) {
    FUN_14086a14e(&DAT_14cbbaff0,&PTR_FUN_14b8bcd70);
  }
  return DAT_14cbbaff0;
}



// FUNCTION 14660866a FUN_14660866a body=43 status=ok
// SIG undefined FUN_14660866a(void)

void FUN_14660866a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000001b0;
  *puVar1 = &PTR_FUN_14b8c19d0;
  return;
}



// FUNCTION 146608696 FUN_146608696 body=55 status=ok
// SIG undefined FUN_146608696(void)

void FUN_146608696(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb010 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb010 = FUN_140002ddd(FUN_1466086cd,uVar1,L"OakWidgetData_OptionsMenu");
  }
  return;
}



// FUNCTION 1466086cd FUN_1466086cd body=47 status=ok
// SIG undefined FUN_1466086cd(void)

longlong FUN_1466086cd(void)

{
  if (DAT_14cbbb008 == 0) {
    FUN_14086a14e(&DAT_14cbbb008,&PTR_FUN_14b8bd748);
  }
  return DAT_14cbbb008;
}



// FUNCTION 1466086fc FUN_1466086fc body=43 status=ok
// SIG undefined FUN_1466086fc(void)

void FUN_1466086fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000348;
  *puVar1 = &PTR_FUN_14b8c1b30;
  return;
}



// FUNCTION 146608728 FUN_146608728 body=55 status=ok
// SIG undefined FUN_146608728(void)

void FUN_146608728(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb028 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb028 = FUN_140002ddd(FUN_14660875f,uVar1,L"OakWidgetData_OptionsMenuNavBar");
  }
  return;
}



// FUNCTION 14660875f FUN_14660875f body=47 status=ok
// SIG undefined FUN_14660875f(void)

longlong FUN_14660875f(void)

{
  if (DAT_14cbbb020 == 0) {
    FUN_14086a14e(&DAT_14cbbb020,&PTR_FUN_14b8bd858);
  }
  return DAT_14cbbb020;
}



// FUNCTION 14660878e FUN_14660878e body=43 status=ok
// SIG undefined FUN_14660878e(void)

void FUN_14660878e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000238;
  *puVar1 = &PTR_FUN_14b8c1cd0;
  return;
}



// FUNCTION 1466087ba FUN_1466087ba body=55 status=ok
// SIG undefined FUN_1466087ba(void)

void FUN_1466087ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb040 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb040 = FUN_140002ddd(FUN_1466087f1,uVar1,L"OakWidgetData_OverheadNameplateEntry");
  }
  return;
}



// FUNCTION 1466087f1 FUN_1466087f1 body=47 status=ok
// SIG undefined FUN_1466087f1(void)

longlong FUN_1466087f1(void)

{
  if (DAT_14cbbb038 == 0) {
    FUN_14086a14e(&DAT_14cbbb038,&PTR_FUN_14b8beb30);
  }
  return DAT_14cbbb038;
}



// FUNCTION 146608820 FUN_146608820 body=43 status=ok
// SIG undefined FUN_146608820(void)

void FUN_146608820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000001a8;
  *puVar1 = &PTR_FUN_14b8c1e60;
  return;
}



// FUNCTION 14660884b FUN_14660884b body=47 status=ok
// SIG undefined FUN_14660884b(void)

longlong FUN_14660884b(void)

{
  if (DAT_14cbbb050 == 0) {
    FUN_14086a14e(&DAT_14cbbb050,&PTR_FUN_14b8bec78);
  }
  return DAT_14cbbb050;
}



// FUNCTION 14660887a FUN_14660887a body=43 status=ok
// SIG undefined FUN_14660887a(void)

void FUN_14660887a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14b8c1fc0;
  return;
}



// FUNCTION 1466088a6 FUN_1466088a6 body=55 status=ok
// SIG undefined FUN_1466088a6(void)

void FUN_1466088a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb070 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb070 = FUN_140002ddd(FUN_1466088dd,uVar1,L"OakUIData_PassiveBar");
  }
  return;
}



// FUNCTION 1466088dd FUN_1466088dd body=47 status=ok
// SIG undefined FUN_1466088dd(void)

longlong FUN_1466088dd(void)

{
  if (DAT_14cbbb068 == 0) {
    FUN_14086a14e(&DAT_14cbbb068,&PTR_FUN_14b8bee88);
  }
  return DAT_14cbbb068;
}



// FUNCTION 14660890c FUN_14660890c body=43 status=ok
// SIG undefined FUN_14660890c(void)

void FUN_14660890c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000d0;
  *puVar1 = &PTR_FUN_14b8c2150;
  return;
}



// FUNCTION 146608937 FUN_146608937 body=47 status=ok
// SIG undefined FUN_146608937(void)

longlong FUN_146608937(void)

{
  if (DAT_14cbbb080 == 0) {
    FUN_1409ce572(&DAT_14cbbb080,&PTR_FUN_14b8bef40);
  }
  return DAT_14cbbb080;
}



// FUNCTION 146608966 FUN_146608966 body=55 status=ok
// SIG undefined FUN_146608966(void)

void FUN_146608966(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb0a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb0a0 = FUN_140002ddd(FUN_14660899d,uVar1,L"PhotoModeStepperDetails");
  }
  return;
}



// FUNCTION 14660899d FUN_14660899d body=47 status=ok
// SIG undefined FUN_14660899d(void)

longlong FUN_14660899d(void)

{
  if (DAT_14cbbb098 == 0) {
    FUN_14086a14e(&DAT_14cbbb098,&PTR_FUN_14b8bf080);
  }
  return DAT_14cbbb098;
}



// FUNCTION 1466089cc FUN_1466089cc body=43 status=ok
// SIG undefined FUN_1466089cc(void)

void FUN_1466089cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b8c2380;
  return;
}



// FUNCTION 1466089f8 FUN_1466089f8 body=55 status=ok
// SIG undefined FUN_1466089f8(void)

void FUN_1466089f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb0b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb0b8 = FUN_140002ddd(FUN_146608a2f,uVar1,L"PhotoModeDefaultOption");
  }
  return;
}



// FUNCTION 146608a2f FUN_146608a2f body=47 status=ok
// SIG undefined FUN_146608a2f(void)

longlong FUN_146608a2f(void)

{
  if (DAT_14cbbb0b0 == 0) {
    FUN_14086a14e(&DAT_14cbbb0b0,&PTR_FUN_14b8bf520);
  }
  return DAT_14cbbb0b0;
}



// FUNCTION 146608a5e FUN_146608a5e body=43 status=ok
// SIG undefined FUN_146608a5e(void)

void FUN_146608a5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b8c24e0;
  return;
}



// FUNCTION 146608a8a FUN_146608a8a body=55 status=ok
// SIG undefined FUN_146608a8a(void)

void FUN_146608a8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb0d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb0d0 = FUN_140002ddd(FUN_146608ac1,uVar1,L"PhotoModeDefaultOptionsGroup");
  }
  return;
}



// FUNCTION 146608ac1 FUN_146608ac1 body=47 status=ok
// SIG undefined FUN_146608ac1(void)

longlong FUN_146608ac1(void)

{
  if (DAT_14cbbb0c8 == 0) {
    FUN_14086a14e(&DAT_14cbbb0c8,&PTR_FUN_14b8bf750);
  }
  return DAT_14cbbb0c8;
}



// FUNCTION 146608af0 FUN_146608af0 body=43 status=ok
// SIG undefined FUN_146608af0(void)

void FUN_146608af0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b8c2640;
  return;
}



// FUNCTION 146608b1b FUN_146608b1b body=47 status=ok
// SIG undefined FUN_146608b1b(void)

longlong FUN_146608b1b(void)

{
  if (DAT_14cbbb0e0 == 0) {
    FUN_14086a14e(&DAT_14cbbb0e0,&PTR_FUN_14b8bf880);
  }
  return DAT_14cbbb0e0;
}



// FUNCTION 146608b4a FUN_146608b4a body=43 status=ok
// SIG undefined FUN_146608b4a(void)

void FUN_146608b4a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b8c27a0;
  return;
}



// FUNCTION 146608b76 FUN_146608b76 body=55 status=ok
// SIG undefined FUN_146608b76(void)

void FUN_146608b76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb100 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb100 = FUN_140002ddd(FUN_146608bad,uVar1,L"PhotoModeOption");
  }
  return;
}



// FUNCTION 146608bad FUN_146608bad body=47 status=ok
// SIG undefined FUN_146608bad(void)

longlong FUN_146608bad(void)

{
  if (DAT_14cbbb0f8 == 0) {
    FUN_14086a14e(&DAT_14cbbb0f8,&PTR_FUN_14b8bfa00);
  }
  return DAT_14cbbb0f8;
}



// FUNCTION 146608bdc FUN_146608bdc body=43 status=ok
// SIG undefined FUN_146608bdc(void)

void FUN_146608bdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b8c2900;
  return;
}



// FUNCTION 146608c08 FUN_146608c08 body=55 status=ok
// SIG undefined FUN_146608c08(void)

void FUN_146608c08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb118 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb118 = FUN_140002ddd(FUN_146608c3f,uVar1,L"PhotoModeOptionsGroup");
  }
  return;
}



// FUNCTION 146608c3f FUN_146608c3f body=47 status=ok
// SIG undefined FUN_146608c3f(void)

longlong FUN_146608c3f(void)

{
  if (DAT_14cbbb110 == 0) {
    FUN_14086a14e(&DAT_14cbbb110,&PTR_FUN_14b8bfb88);
  }
  return DAT_14cbbb110;
}



// FUNCTION 146608c6e FUN_146608c6e body=43 status=ok
// SIG undefined FUN_146608c6e(void)

void FUN_146608c6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b8c2a70;
  return;
}



// FUNCTION 146608c9a FUN_146608c9a body=55 status=ok
// SIG undefined FUN_146608c9a(void)

void FUN_146608c9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb130 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb130 = FUN_140002ddd(FUN_146608cd1,uVar1,L"OakUIWidgetData_PhotoMode_Toggle");
  }
  return;
}



// FUNCTION 146608cd1 FUN_146608cd1 body=47 status=ok
// SIG undefined FUN_146608cd1(void)

longlong FUN_146608cd1(void)

{
  if (DAT_14cbbb128 == 0) {
    FUN_14086a14e(&DAT_14cbbb128,&PTR_FUN_14b8bfcc8);
  }
  return DAT_14cbbb128;
}



// FUNCTION 146608d00 FUN_146608d00 body=43 status=ok
// SIG undefined FUN_146608d00(void)

void FUN_146608d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b8c2bd0;
  return;
}



// FUNCTION 146608d2c FUN_146608d2c body=55 status=ok
// SIG undefined FUN_146608d2c(void)

void FUN_146608d2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb148 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb148 = FUN_140002ddd(FUN_146608d63,uVar1,L"OakUIWidgetData_PhotoMode_Slider");
  }
  return;
}



// FUNCTION 146608d63 FUN_146608d63 body=47 status=ok
// SIG undefined FUN_146608d63(void)

longlong FUN_146608d63(void)

{
  if (DAT_14cbbb140 == 0) {
    FUN_14086a14e(&DAT_14cbbb140,&PTR_FUN_14b8bfe08);
  }
  return DAT_14cbbb140;
}



// FUNCTION 146608d92 FUN_146608d92 body=43 status=ok
// SIG undefined FUN_146608d92(void)

void FUN_146608d92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b8c2d30;
  return;
}



// FUNCTION 146608dbe FUN_146608dbe body=55 status=ok
// SIG undefined FUN_146608dbe(void)

void FUN_146608dbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb160 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb160 = FUN_140002ddd(FUN_146608df5,uVar1,L"OakUIWidgetData_PhotoMode_Stepper");
  }
  return;
}



// FUNCTION 146608df5 FUN_146608df5 body=47 status=ok
// SIG undefined FUN_146608df5(void)

longlong FUN_146608df5(void)

{
  if (DAT_14cbbb158 == 0) {
    FUN_14086a14e(&DAT_14cbbb158,&PTR_FUN_14b8bff48);
  }
  return DAT_14cbbb158;
}



// FUNCTION 146608e24 FUN_146608e24 body=43 status=ok
// SIG undefined FUN_146608e24(void)

void FUN_146608e24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b8c2e90;
  return;
}



// FUNCTION 146608e4f FUN_146608e4f body=47 status=ok
// SIG undefined FUN_146608e4f(void)

longlong FUN_146608e4f(void)

{
  if (DAT_14cbbb170 == 0) {
    FUN_14086a14e(&DAT_14cbbb170,&PTR_FUN_14b8c04b8);
  }
  return DAT_14cbbb170;
}



// FUNCTION 146608e7e FUN_146608e7e body=43 status=ok
// SIG undefined FUN_146608e7e(void)

void FUN_146608e7e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000180;
  *puVar1 = &PTR_FUN_14b8c2ff0;
  return;
}



// FUNCTION 146608eaa FUN_146608eaa body=55 status=ok
// SIG undefined FUN_146608eaa(void)

void FUN_146608eaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb190 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb190 = FUN_140002ddd(FUN_146608ee1,uVar1,L"OakWidgetData_PlayerStats");
  }
  return;
}



// FUNCTION 146608ee1 FUN_146608ee1 body=47 status=ok
// SIG undefined FUN_146608ee1(void)

longlong FUN_146608ee1(void)

{
  if (DAT_14cbbb188 == 0) {
    FUN_14086a14e(&DAT_14cbbb188,&PTR_FUN_14b8c07a0);
  }
  return DAT_14cbbb188;
}



// FUNCTION 146608f10 FUN_146608f10 body=43 status=ok
// SIG undefined FUN_146608f10(void)

void FUN_146608f10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000e0;
  *puVar1 = &PTR_FUN_14b8c3190;
  return;
}



// FUNCTION 146608f3c FUN_146608f3c body=55 status=ok
// SIG undefined FUN_146608f3c(void)

void FUN_146608f3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb1a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb1a8 = FUN_140002ddd(FUN_146608f73,uVar1,L"OakWidgetData_ProtoExample");
  }
  return;
}



// FUNCTION 146608f73 FUN_146608f73 body=47 status=ok
// SIG undefined FUN_146608f73(void)

longlong FUN_146608f73(void)

{
  if (DAT_14cbbb1a0 == 0) {
    FUN_14086a14e(&DAT_14cbbb1a0,&PTR_FUN_14b8c0938);
  }
  return DAT_14cbbb1a0;
}



// FUNCTION 146608fa2 FUN_146608fa2 body=43 status=ok
// SIG undefined FUN_146608fa2(void)

void FUN_146608fa2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000100;
  *puVar1 = &PTR_FUN_14b8c3320;
  return;
}



// FUNCTION 146608fce FUN_146608fce body=55 status=ok
// SIG undefined FUN_146608fce(void)

void FUN_146608fce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb1c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb1c8 = FUN_140002ddd(FUN_146609005,uVar1,L"RadialWheelElement");
  }
  return;
}



// FUNCTION 146609005 FUN_146609005 body=47 status=ok
// SIG undefined FUN_146609005(void)

longlong FUN_146609005(void)

{
  if (DAT_14cbbb1c0 == 0) {
    FUN_14086a14e(&DAT_14cbbb1c0,&PTR_FUN_14b8c0a30);
  }
  return DAT_14cbbb1c0;
}



// FUNCTION 146609034 FUN_146609034 body=43 status=ok
// SIG undefined FUN_146609034(void)

void FUN_146609034(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b8c34b0;
  return;
}


