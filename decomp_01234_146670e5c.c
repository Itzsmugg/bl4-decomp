// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146670e5c FUN_146670e5c body=93 status=ok
// SIG undefined FUN_146670e5c(void)

void FUN_146670e5c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba50d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146670eb9 FUN_146670eb9 body=54 status=ok
// SIG undefined FUN_146670eb9(void)

void FUN_146670eb9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ba51240;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 5;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 146670eef FUN_146670eef body=47 status=ok
// SIG undefined FUN_146670eef(void)

longlong FUN_146670eef(void)

{
  if (DAT_14cbf52d0 == 0) {
    FUN_14073dd9a(&DAT_14cbf52d0,&PTR_LAB_14ba511f8);
  }
  return DAT_14cbf52d0;
}



// FUNCTION 146670f1e FUN_146670f1e body=47 status=ok
// SIG undefined FUN_146670f1e(void)

longlong FUN_146670f1e(void)

{
  if (DAT_14cbf53b8 == 0) {
    FUN_1409ce572(&DAT_14cbf53b8,&PTR_FUN_14ba516a0);
  }
  return DAT_14cbf53b8;
}



// FUNCTION 146670f52 FUN_146670f52 body=49 status=ok
// SIG undefined FUN_146670f52(void)

longlong FUN_146670f52(void)

{
  if (DAT_14cbf53d8 == 0) {
    FUN_14073dd9a(&DAT_14cbf53d8,&PTR_LAB_14ba51718);
  }
  return DAT_14cbf53d8;
}



// FUNCTION 146670f83 FUN_146670f83 body=42 status=ok
// SIG undefined FUN_146670f83(void)

void FUN_146670f83(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14593f68a(puVar1);
  *puVar1 = &PTR_FUN_14ba51c50;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}



// FUNCTION 146670fb2 FUN_146670fb2 body=47 status=ok
// SIG undefined FUN_146670fb2(void)

longlong FUN_146670fb2(void)

{
  if (DAT_14cbf5420 == 0) {
    FUN_14073dd9a(&DAT_14cbf5420,&PTR_LAB_14ba51c08);
  }
  return DAT_14cbf5420;
}



// FUNCTION 146670fe6 FUN_146670fe6 body=47 status=ok
// SIG undefined FUN_146670fe6(void)

longlong FUN_146670fe6(void)

{
  if (DAT_14cbf5438 == 0) {
    FUN_14073dd9a(&DAT_14cbf5438,&PTR_LAB_14ba52278);
  }
  return DAT_14cbf5438;
}



// FUNCTION 146671015 FUN_146671015 body=42 status=ok
// SIG undefined FUN_146671015(void)

void FUN_146671015(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14593f68a(puVar1);
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = &PTR_FUN_14ba52620;
  return;
}



// FUNCTION 14667103f FUN_14667103f body=47 status=ok
// SIG undefined FUN_14667103f(void)

longlong FUN_14667103f(void)

{
  if (DAT_14cbf5450 == 0) {
    FUN_14073dd9a(&DAT_14cbf5450,&PTR_LAB_14ba525d8);
  }
  return DAT_14cbf5450;
}



// FUNCTION 14667106e FUN_14667106e body=43 status=ok
// SIG undefined FUN_14667106e(void)

void FUN_14667106e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14593f68a(puVar1);
  *puVar1 = &PTR_FUN_14ba52a70;
  puVar1[0x1c] = 0;
  return;
}



// FUNCTION 14667109e FUN_14667109e body=47 status=ok
// SIG undefined FUN_14667109e(void)

longlong FUN_14667109e(void)

{
  if (DAT_14cbf5468 == 0) {
    FUN_14073dd9a(&DAT_14cbf5468,&PTR_LAB_14ba52a28);
  }
  return DAT_14cbf5468;
}



// FUNCTION 1466710cd FUN_1466710cd body=32 status=ok
// SIG undefined FUN_1466710cd(void)

void FUN_1466710cd(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_14593f68a(param_1);
  *param_1 = &PTR_FUN_14ba52e50;
  return;
}



// FUNCTION 1466710f2 FUN_1466710f2 body=47 status=ok
// SIG undefined FUN_1466710f2(void)

longlong FUN_1466710f2(void)

{
  if (DAT_14cbf5480 == 0) {
    FUN_14073dd9a(&DAT_14cbf5480,&PTR_LAB_14ba52e08);
  }
  return DAT_14cbf5480;
}



// FUNCTION 146671122 FUN_146671122 body=231 status=ok
// SIG undefined FUN_146671122(void)

void FUN_146671122(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba5b8a0;
  local_28[3] = &DAT_14cbf5490;
  local_28[4] = FUN_1459d0dae;
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



// FUNCTION 14667120a FUN_14667120a body=55 status=ok
// SIG undefined FUN_14667120a(void)

void FUN_14667120a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5648 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5648 = FUN_140002ddd(FUN_1466718d8,uVar1,L"PartyRepData");
  }
  return;
}



// FUNCTION 146671242 FUN_146671242 body=55 status=ok
// SIG undefined FUN_146671242(void)

void FUN_146671242(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5500 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5500 = FUN_140002ddd(FUN_146671502,uVar1,L"PartyMemberRepData");
  }
  return;
}



// FUNCTION 14667127a FUN_14667127a body=55 status=ok
// SIG undefined FUN_14667127a(void)

void FUN_14667127a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf54a0 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf54a0 = FUN_140002ddd(FUN_1466712b1,uVar1,L"PartyMemberPlatformData");
  }
  return;
}



// FUNCTION 1466712b1 FUN_1466712b1 body=47 status=ok
// SIG undefined FUN_1466712b1(void)

longlong FUN_1466712b1(void)

{
  if (DAT_14cbf5498 == 0) {
    FUN_14086a14e(&DAT_14cbf5498,&PTR_FUN_14ba53b20);
  }
  return DAT_14cbf5498;
}



// FUNCTION 1466712e0 FUN_1466712e0 body=47 status=ok
// SIG undefined FUN_1466712e0(void)

longlong FUN_1466712e0(void)

{
  if (DAT_14cbf5820 == 0) {
    FUN_14086a14e(&DAT_14cbf5820,&PTR_FUN_14ba587b8);
  }
  return DAT_14cbf5820;
}



// FUNCTION 146671310 FUN_146671310 body=48 status=ok
// SIG undefined FUN_146671310(void)

void FUN_146671310(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14ba59080;
  return;
}



// FUNCTION 146671340 FUN_146671340 body=55 status=ok
// SIG undefined FUN_146671340(void)

void FUN_146671340(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf54b8 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf54b8 = FUN_140002ddd(FUN_146671377,uVar1,L"PartyMemberJoinInProgressRequest");
  }
  return;
}



// FUNCTION 146671377 FUN_146671377 body=47 status=ok
// SIG undefined FUN_146671377(void)

longlong FUN_146671377(void)

{
  if (DAT_14cbf54b0 == 0) {
    FUN_14086a14e(&DAT_14cbf54b0,&PTR_FUN_14ba53c58);
  }
  return DAT_14cbf54b0;
}



// FUNCTION 1466713a6 FUN_1466713a6 body=48 status=ok
// SIG undefined FUN_1466713a6(void)

void FUN_1466713a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ba591e0;
  return;
}



// FUNCTION 1466713d6 FUN_1466713d6 body=55 status=ok
// SIG undefined FUN_1466713d6(void)

void FUN_1466713d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf54d0 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf54d0 = FUN_140002ddd(FUN_14667140d,uVar1,L"PartyMemberJoinInProgressResponse");
  }
  return;
}



// FUNCTION 14667140d FUN_14667140d body=47 status=ok
// SIG undefined FUN_14667140d(void)

longlong FUN_14667140d(void)

{
  if (DAT_14cbf54c8 == 0) {
    FUN_14086a14e(&DAT_14cbf54c8,&PTR_FUN_14ba53e48);
  }
  return DAT_14cbf54c8;
}



// FUNCTION 14667143c FUN_14667143c body=48 status=ok
// SIG undefined FUN_14667143c(void)

void FUN_14667143c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ba59340;
  return;
}



// FUNCTION 14667146c FUN_14667146c body=55 status=ok
// SIG undefined FUN_14667146c(void)

void FUN_14667146c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf54e8 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf54e8 = FUN_140002ddd(FUN_1466714a3,uVar1,L"PartyMemberJoinInProgressData");
  }
  return;
}



// FUNCTION 1466714a3 FUN_1466714a3 body=47 status=ok
// SIG undefined FUN_1466714a3(void)

longlong FUN_1466714a3(void)

{
  if (DAT_14cbf54e0 == 0) {
    FUN_14086a14e(&DAT_14cbf54e0,&PTR_FUN_14ba53fb8);
  }
  return DAT_14cbf54e0;
}



// FUNCTION 1466714d2 FUN_1466714d2 body=48 status=ok
// SIG undefined FUN_1466714d2(void)

void FUN_1466714d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ba594a0;
  return;
}



// FUNCTION 146671502 FUN_146671502 body=47 status=ok
// SIG undefined FUN_146671502(void)

longlong FUN_146671502(void)

{
  if (DAT_14cbf54f8 == 0) {
    FUN_14086a14e(&DAT_14cbf54f8,&PTR_FUN_14ba541d0);
  }
  return DAT_14cbf54f8;
}



// FUNCTION 146671531 FUN_146671531 body=47 status=ok
// SIG undefined FUN_146671531(void)

longlong FUN_146671531(void)

{
  if (DAT_14cbf5808 == 0) {
    FUN_1409ce572(&DAT_14cbf5808,&PTR_FUN_14ba58700);
  }
  return DAT_14cbf5808;
}



// FUNCTION 146671560 FUN_146671560 body=47 status=ok
// SIG undefined FUN_146671560(void)

longlong FUN_146671560(void)

{
  if (DAT_14cbf5628 == 0) {
    FUN_14086a14e(&DAT_14cbf5628,&PTR_FUN_14ba558c0);
  }
  return DAT_14cbf5628;
}



// FUNCTION 146671590 FUN_146671590 body=48 status=ok
// SIG undefined FUN_146671590(void)

void FUN_146671590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000270;
  *puVar1 = &PTR_FUN_14ba59600;
  return;
}



// FUNCTION 1466715c5 FUN_1466715c5 body=47 status=ok
// SIG undefined FUN_1466715c5(void)

longlong FUN_1466715c5(void)

{
  if (DAT_14cbf5518 == 0) {
    FUN_14073dd9a(&DAT_14cbf5518,&PTR_LAB_14ba542f8);
  }
  return DAT_14cbf5518;
}



// FUNCTION 1466715f4 FUN_1466715f4 body=54 status=ok
// SIG undefined FUN_1466715f4(void)

void FUN_1466715f4(longlong *param_1)

{
  char cVar1;
  
  switchD_143c3d4dc::caseD_1d();
  cVar1 = FUN_144a792c0(param_1,0x30);
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146671623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c8))(param_1);
  return;
}



// FUNCTION 14667162a FUN_14667162a body=47 status=ok
// SIG undefined FUN_14667162a(void)

longlong FUN_14667162a(void)

{
  if (DAT_14cbf5568 == 0) {
    FUN_1409ce572(&DAT_14cbf5568,&PTR_FUN_14ba54d10);
  }
  return DAT_14cbf5568;
}



// FUNCTION 146671659 FUN_146671659 body=47 status=ok
// SIG undefined FUN_146671659(void)

longlong FUN_146671659(void)

{
  if (DAT_14cbf5580 == 0) {
    FUN_1409ce572(&DAT_14cbf5580,&PTR_FUN_14ba54d90);
  }
  return DAT_14cbf5580;
}



// FUNCTION 146671688 FUN_146671688 body=47 status=ok
// SIG undefined FUN_146671688(void)

longlong FUN_146671688(void)

{
  if (DAT_14cbf5598 == 0) {
    FUN_1409ce572(&DAT_14cbf5598,&PTR_FUN_14ba55210);
  }
  return DAT_14cbf5598;
}



// FUNCTION 1466716b7 FUN_1466716b7 body=47 status=ok
// SIG undefined FUN_1466716b7(void)

longlong FUN_1466716b7(void)

{
  if (DAT_14cbf55b0 == 0) {
    FUN_1409ce572(&DAT_14cbf55b0,&PTR_FUN_14ba55290);
  }
  return DAT_14cbf55b0;
}



// FUNCTION 1466716e6 FUN_1466716e6 body=47 status=ok
// SIG undefined FUN_1466716e6(void)

longlong FUN_1466716e6(void)

{
  if (DAT_14cbf55c8 == 0) {
    FUN_1409ce572(&DAT_14cbf55c8,&PTR_FUN_14ba553c0);
  }
  return DAT_14cbf55c8;
}



// FUNCTION 146671715 FUN_146671715 body=47 status=ok
// SIG undefined FUN_146671715(void)

longlong FUN_146671715(void)

{
  if (DAT_14cbf55e0 == 0) {
    FUN_1409ce572(&DAT_14cbf55e0,&PTR_FUN_14ba554a0);
  }
  return DAT_14cbf55e0;
}



// FUNCTION 146671744 FUN_146671744 body=55 status=ok
// SIG undefined FUN_146671744(void)

void FUN_146671744(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5600 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5600 = FUN_140002ddd(FUN_14667177b,uVar1,L"PartyPlatformSessionInfo");
  }
  return;
}



// FUNCTION 14667177b FUN_14667177b body=47 status=ok
// SIG undefined FUN_14667177b(void)

longlong FUN_14667177b(void)

{
  if (DAT_14cbf55f8 == 0) {
    FUN_14086a14e(&DAT_14cbf55f8,&PTR_FUN_14ba55608);
  }
  return DAT_14cbf55f8;
}



// FUNCTION 1466717aa FUN_1466717aa body=48 status=ok
// SIG undefined FUN_1466717aa(void)

void FUN_1466717aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ba5a820;
  return;
}



// FUNCTION 1466717da FUN_1466717da body=55 status=ok
// SIG undefined FUN_1466717da(void)

void FUN_1466717da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5618 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5618 = FUN_140002ddd(FUN_146671811,uVar1,L"PartyPrivacySettings");
  }
  return;
}



// FUNCTION 146671811 FUN_146671811 body=47 status=ok
// SIG undefined FUN_146671811(void)

longlong FUN_146671811(void)

{
  if (DAT_14cbf5610 == 0) {
    FUN_14086a14e(&DAT_14cbf5610,&PTR_FUN_14ba55840);
  }
  return DAT_14cbf5610;
}



// FUNCTION 146671840 FUN_146671840 body=48 status=ok
// SIG undefined FUN_146671840(void)

void FUN_146671840(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14ba5a980;
  return;
}



// FUNCTION 146671870 FUN_146671870 body=55 status=ok
// SIG undefined FUN_146671870(void)

void FUN_146671870(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5630 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5630 = FUN_140002ddd(FUN_146671560,uVar1,L"OnlinePartyRepDataBase");
  }
  return;
}



// FUNCTION 1466718a8 FUN_1466718a8 body=48 status=ok
// SIG undefined FUN_1466718a8(void)

void FUN_1466718a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ba5aaf0;
  return;
}



// FUNCTION 1466718d8 FUN_1466718d8 body=47 status=ok
// SIG undefined FUN_1466718d8(void)

longlong FUN_1466718d8(void)

{
  if (DAT_14cbf5640 == 0) {
    FUN_14086a14e(&DAT_14cbf5640,&PTR_FUN_14ba55b68);
  }
  return DAT_14cbf5640;
}



// FUNCTION 146671908 FUN_146671908 body=48 status=ok
// SIG undefined FUN_146671908(void)

void FUN_146671908(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14ba5ac80;
  return;
}



// FUNCTION 146671938 FUN_146671938 body=47 status=ok
// SIG undefined FUN_146671938(void)

longlong FUN_146671938(void)

{
  if (DAT_14cbf5660 == 0) {
    FUN_14073dd9a(&DAT_14cbf5660,&PTR_LAB_14ba56178);
  }
  return DAT_14cbf5660;
}



// FUNCTION 146671967 FUN_146671967 body=92 status=ok
// SIG undefined FUN_146671967(void)

void FUN_146671967(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ba56860;
  puVar1[5] = &PTR_FUN_14ba56b70;
  *(undefined2 *)(puVar1 + 6) = 0x101;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



// FUNCTION 1466719c8 FUN_1466719c8 body=47 status=ok
// SIG undefined FUN_1466719c8(void)

longlong FUN_1466719c8(void)

{
  if (DAT_14cbf56a0 == 0) {
    FUN_14073dd9a(&DAT_14cbf56a0,&PTR_LAB_14ba56818);
  }
  return DAT_14cbf56a0;
}



// FUNCTION 1466719fc FUN_1466719fc body=47 status=ok
// SIG undefined FUN_1466719fc(void)

longlong FUN_1466719fc(void)

{
  if (DAT_14cbf56b8 == 0) {
    FUN_14073dd9a(&DAT_14cbf56b8,&PTR_LAB_14ba56df8);
  }
  return DAT_14cbf56b8;
}



// FUNCTION 146671a2c FUN_146671a2c body=55 status=ok
// SIG undefined FUN_146671a2c(void)

void FUN_146671a2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5748 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5748 = FUN_140002ddd(FUN_146671a63,uVar1,L"SocialPlatformDescription");
  }
  return;
}



// FUNCTION 146671a63 FUN_146671a63 body=49 status=ok
// SIG undefined FUN_146671a63(void)

longlong FUN_146671a63(void)

{
  if (DAT_14cbf5740 == 0) {
    FUN_14086a14e(&DAT_14cbf5740,&PTR_FUN_14ba57550);
  }
  return DAT_14cbf5740;
}



// FUNCTION 146671a94 FUN_146671a94 body=48 status=ok
// SIG undefined FUN_146671a94(void)

void FUN_146671a94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14ba5aeb0;
  return;
}



// FUNCTION 146671ac4 FUN_146671ac4 body=47 status=ok
// SIG undefined FUN_146671ac4(void)

longlong FUN_146671ac4(void)

{
  if (DAT_14cbf5760 == 0) {
    FUN_14073dd9a(&DAT_14cbf5760,&PTR_LAB_14ba57a98);
  }
  return DAT_14cbf5760;
}



// FUNCTION 146671af3 FUN_146671af3 body=47 status=ok
// SIG undefined FUN_146671af3(void)

longlong FUN_146671af3(void)

{
  if (DAT_14cbf5778 == 0) {
    FUN_14073dd9a(&DAT_14cbf5778,&PTR_LAB_14ba58028);
  }
  return DAT_14cbf5778;
}



// FUNCTION 146671b27 FUN_146671b27 body=47 status=ok
// SIG undefined FUN_146671b27(void)

longlong FUN_146671b27(void)

{
  if (DAT_14cbf57d8 == 0) {
    FUN_1409ce572(&DAT_14cbf57d8,&PTR_FUN_14ba58590);
  }
  return DAT_14cbf57d8;
}



// FUNCTION 146671b56 FUN_146671b56 body=47 status=ok
// SIG undefined FUN_146671b56(void)

longlong FUN_146671b56(void)

{
  if (DAT_14cbf57f0 == 0) {
    FUN_1409ce572(&DAT_14cbf57f0,&PTR_FUN_14ba58670);
  }
  return DAT_14cbf57f0;
}



// FUNCTION 146671b86 FUN_146671b86 body=55 status=ok
// SIG undefined FUN_146671b86(void)

void FUN_146671b86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5828 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5828 = FUN_140002ddd(FUN_1466712e0,uVar1,L"UserPlatform");
  }
  return;
}



// FUNCTION 146671bbe FUN_146671bbe body=48 status=ok
// SIG undefined FUN_146671bbe(void)

void FUN_146671bbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14ba5b290;
  return;
}



// FUNCTION 146671bee FUN_146671bee body=47 status=ok
// SIG undefined FUN_146671bee(void)

longlong FUN_146671bee(void)

{
  if (DAT_14cbf5838 == 0) {
    FUN_1409ce572(&DAT_14cbf5838,&PTR_FUN_14ba58860);
  }
  return DAT_14cbf5838;
}



// FUNCTION 146671c1d FUN_146671c1d body=47 status=ok
// SIG undefined FUN_146671c1d(void)

longlong FUN_146671c1d(void)

{
  if (DAT_14cbf5858 == 0) {
    FUN_14073dd9a(&DAT_14cbf5858,&PTR_LAB_14ba58978);
  }
  return DAT_14cbf5858;
}



// FUNCTION 146671c4c FUN_146671c4c body=69 status=ok
// SIG undefined FUN_146671c4c(void)

undefined8 * FUN_146671c4c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba51240;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671c92 FUN_146671c92 body=72 status=ok
// SIG undefined FUN_146671c92(void)

undefined8 * FUN_146671c92(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba51c50;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b3cec(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671cda FUN_146671cda body=72 status=ok
// SIG undefined FUN_146671cda(void)

undefined8 * FUN_146671cda(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba51c50;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1459b3cec(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671d22 FUN_146671d22 body=40 status=ok
// SIG undefined FUN_146671d22(void)

undefined8 FUN_146671d22(undefined8 param_1,int param_2)

{
  FUN_1459b3cec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671d4a FUN_146671d4a body=40 status=ok
// SIG undefined FUN_146671d4a(void)

undefined8 FUN_146671d4a(undefined8 param_1,int param_2)

{
  FUN_1459b3cec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671d72 FUN_146671d72 body=29 status=ok
// SIG undefined FUN_146671d72(void)

undefined8 FUN_146671d72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671d90 FUN_146671d90 body=29 status=ok
// SIG undefined FUN_146671d90(void)

undefined8 FUN_146671d90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671dae FUN_146671dae body=29 status=ok
// SIG undefined FUN_146671dae(void)

undefined8 FUN_146671dae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671dcc FUN_146671dcc body=29 status=ok
// SIG undefined FUN_146671dcc(void)

undefined8 FUN_146671dcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671dea FUN_146671dea body=29 status=ok
// SIG undefined FUN_146671dea(void)

undefined8 FUN_146671dea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671e08 FUN_146671e08 body=29 status=ok
// SIG undefined FUN_146671e08(void)

undefined8 FUN_146671e08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671e26 FUN_146671e26 body=29 status=ok
// SIG undefined FUN_146671e26(void)

undefined8 FUN_146671e26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671e44 FUN_146671e44 body=29 status=ok
// SIG undefined FUN_146671e44(void)

undefined8 FUN_146671e44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671e62 FUN_146671e62 body=29 status=ok
// SIG undefined FUN_146671e62(void)

undefined8 FUN_146671e62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671e80 FUN_146671e80 body=29 status=ok
// SIG undefined FUN_146671e80(void)

undefined8 FUN_146671e80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671e9e FUN_146671e9e body=29 status=ok
// SIG undefined FUN_146671e9e(void)

undefined8 FUN_146671e9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671ebc FUN_146671ebc body=93 status=ok
// SIG undefined FUN_146671ebc(void)

void FUN_146671ebc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba5b8a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146671f1a FUN_146671f1a body=29 status=ok
// SIG undefined FUN_146671f1a(void)

undefined8 FUN_146671f1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146671f38 FUN_146671f38 body=55 status=ok
// SIG undefined FUN_146671f38(void)

void FUN_146671f38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5cf0 == 0) {
    uVar1 = FUN_1410510fd();
    DAT_14cbf5cf0 = FUN_140002ddd(FUN_146671f6f,uVar1,L"SocialChatChannelConfig");
  }
  return;
}



// FUNCTION 146671f6f FUN_146671f6f body=47 status=ok
// SIG undefined FUN_146671f6f(void)

longlong FUN_146671f6f(void)

{
  if (DAT_14cbf5ce8 == 0) {
    FUN_14086a14e(&DAT_14cbf5ce8,&PTR_FUN_14ba60eb0);
  }
  return DAT_14cbf5ce8;
}



// FUNCTION 146671f9e FUN_146671f9e body=48 status=ok
// SIG undefined FUN_146671f9e(void)

void FUN_146671f9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ba617f0;
  return;
}



// FUNCTION 146671fd3 FUN_146671fd3 body=47 status=ok
// SIG undefined FUN_146671fd3(void)

longlong FUN_146671fd3(void)

{
  if (DAT_14cbf5d08 == 0) {
    FUN_14073dd9a(&DAT_14cbf5d08,&PTR_LAB_14ba613a8);
  }
  return DAT_14cbf5d08;
}



// FUNCTION 146672002 FUN_146672002 body=29 status=ok
// SIG undefined FUN_146672002(void)

undefined8 FUN_146672002(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667201f FUN_14667201f body=47 status=ok
// SIG undefined FUN_14667201f(void)

longlong FUN_14667201f(void)

{
  if (DAT_14cbf5d38 == 0) {
    FUN_1409ce572(&DAT_14cbf5d38,&PTR_FUN_14ba62030);
  }
  return DAT_14cbf5d38;
}



// FUNCTION 14667204e FUN_14667204e body=49 status=ok
// SIG undefined FUN_14667204e(void)

longlong FUN_14667204e(void)

{
  if (DAT_14cbf5e28 == 0) {
    FUN_14073dd9a(&DAT_14cbf5e28,&PTR_LAB_14ba62fb0);
  }
  return DAT_14cbf5e28;
}



// FUNCTION 14667207f FUN_14667207f body=47 status=ok
// SIG undefined FUN_14667207f(void)

longlong FUN_14667207f(void)

{
  if (DAT_14cbf5d58 == 0) {
    FUN_14000fc22(&DAT_14cbf5d58,&PTR_FUN_14ba620a8);
  }
  return DAT_14cbf5d58;
}



// FUNCTION 1466720ae FUN_1466720ae body=47 status=ok
// SIG undefined FUN_1466720ae(void)

longlong FUN_1466720ae(void)

{
  if (DAT_14cbf5d68 == 0) {
    FUN_14000fc22(&DAT_14cbf5d68,&PTR_FUN_14ba62118);
  }
  return DAT_14cbf5d68;
}



// FUNCTION 1466720dd FUN_1466720dd body=47 status=ok
// SIG undefined FUN_1466720dd(void)

longlong FUN_1466720dd(void)

{
  if (DAT_14cbf5d78 == 0) {
    FUN_14000fc22(&DAT_14cbf5d78,&PTR_FUN_14ba62248);
  }
  return DAT_14cbf5d78;
}



// FUNCTION 14667210c FUN_14667210c body=47 status=ok
// SIG undefined FUN_14667210c(void)

longlong FUN_14667210c(void)

{
  if (DAT_14cbf5d88 == 0) {
    FUN_14000fc22(&DAT_14cbf5d88,&PTR_FUN_14ba62368);
  }
  return DAT_14cbf5d88;
}



// FUNCTION 14667213b FUN_14667213b body=47 status=ok
// SIG undefined FUN_14667213b(void)

longlong FUN_14667213b(void)

{
  if (DAT_14cbf5d98 == 0) {
    FUN_14000fc22(&DAT_14cbf5d98,&PTR_FUN_14ba62430);
  }
  return DAT_14cbf5d98;
}



// FUNCTION 14667216a FUN_14667216a body=47 status=ok
// SIG undefined FUN_14667216a(void)

longlong FUN_14667216a(void)

{
  if (DAT_14cbf5da8 == 0) {
    FUN_14000fc22(&DAT_14cbf5da8,&PTR_FUN_14ba62500);
  }
  return DAT_14cbf5da8;
}



// FUNCTION 146672199 FUN_146672199 body=47 status=ok
// SIG undefined FUN_146672199(void)

longlong FUN_146672199(void)

{
  if (DAT_14cbf5db8 == 0) {
    FUN_14000fc22(&DAT_14cbf5db8,&PTR_FUN_14ba62580);
  }
  return DAT_14cbf5db8;
}



// FUNCTION 1466721c8 FUN_1466721c8 body=47 status=ok
// SIG undefined FUN_1466721c8(void)

longlong FUN_1466721c8(void)

{
  if (DAT_14cbf5dc8 == 0) {
    FUN_14000fc22(&DAT_14cbf5dc8,&PTR_FUN_14ba62628);
  }
  return DAT_14cbf5dc8;
}



// FUNCTION 1466721f7 FUN_1466721f7 body=47 status=ok
// SIG undefined FUN_1466721f7(void)

longlong FUN_1466721f7(void)

{
  if (DAT_14cbf5dd8 == 0) {
    FUN_14000fc22(&DAT_14cbf5dd8,&PTR_FUN_14ba626e0);
  }
  return DAT_14cbf5dd8;
}



// FUNCTION 146672226 FUN_146672226 body=47 status=ok
// SIG undefined FUN_146672226(void)

longlong FUN_146672226(void)

{
  if (DAT_14cbf5de8 == 0) {
    FUN_14000fc22(&DAT_14cbf5de8,&PTR_FUN_14ba62838);
  }
  return DAT_14cbf5de8;
}



// FUNCTION 146672255 FUN_146672255 body=47 status=ok
// SIG undefined FUN_146672255(void)

longlong FUN_146672255(void)

{
  if (DAT_14cbf5df8 == 0) {
    FUN_14000fc22(&DAT_14cbf5df8,&PTR_FUN_14ba629c0);
  }
  return DAT_14cbf5df8;
}



// FUNCTION 146672284 FUN_146672284 body=47 status=ok
// SIG undefined FUN_146672284(void)

longlong FUN_146672284(void)

{
  if (DAT_14cbf5e08 == 0) {
    FUN_14000fc22(&DAT_14cbf5e08,&PTR_FUN_14ba62a88);
  }
  return DAT_14cbf5e08;
}



// FUNCTION 1466722b3 FUN_1466722b3 body=47 status=ok
// SIG undefined FUN_1466722b3(void)

longlong FUN_1466722b3(void)

{
  if (DAT_14cbf5e18 == 0) {
    FUN_14000fc22(&DAT_14cbf5e18,&PTR_FUN_14ba62bf8);
  }
  return DAT_14cbf5e18;
}



// FUNCTION 1466722e2 FUN_1466722e2 body=34 status=ok
// SIG undefined FUN_1466722e2(void)

void FUN_1466722e2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459f5c76();
  FUN_14069c8d6(uVar1,&PTR_s_ClientAckJoiningServer_14ba62c80,0xd);
  return;
}



// FUNCTION 146672304 FUN_146672304 body=47 status=ok
// SIG undefined FUN_146672304(void)

longlong FUN_146672304(void)

{
  if (DAT_14cbf5e58 == 0) {
    FUN_14073dd9a(&DAT_14cbf5e58,&PTR_LAB_14ba638d8);
  }
  return DAT_14cbf5e58;
}



// FUNCTION 146672339 FUN_146672339 body=49 status=ok
// SIG undefined FUN_146672339(void)

longlong FUN_146672339(void)

{
  if (DAT_14cbf5e88 == 0) {
    FUN_14073dd9a(&DAT_14cbf5e88,&PTR_LAB_14ba643d0);
  }
  return DAT_14cbf5e88;
}



// FUNCTION 14667236a FUN_14667236a body=47 status=ok
// SIG undefined FUN_14667236a(void)

longlong FUN_14667236a(void)

{
  if (DAT_14cbf5e68 == 0) {
    FUN_14000fc22(&DAT_14cbf5e68,&PTR_FUN_14ba640a0);
  }
  return DAT_14cbf5e68;
}



// FUNCTION 146672399 FUN_146672399 body=47 status=ok
// SIG undefined FUN_146672399(void)

longlong FUN_146672399(void)

{
  if (DAT_14cbf5e70 == 0) {
    FUN_14000fc22(&DAT_14cbf5e70,&PTR_FUN_14ba640f8);
  }
  return DAT_14cbf5e70;
}



// FUNCTION 1466723c8 FUN_1466723c8 body=47 status=ok
// SIG undefined FUN_1466723c8(void)

longlong FUN_1466723c8(void)

{
  if (DAT_14cbf5e78 == 0) {
    FUN_14000fc22(&DAT_14cbf5e78,&PTR_FUN_14ba64138);
  }
  return DAT_14cbf5e78;
}



// FUNCTION 1466723f8 FUN_1466723f8 body=34 status=ok
// SIG undefined FUN_1466723f8(void)

void FUN_1466723f8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458d5eb0();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_InLobby_14ba64180,3);
  return;
}



// FUNCTION 14667241f FUN_14667241f body=47 status=ok
// SIG undefined FUN_14667241f(void)

longlong FUN_14667241f(void)

{
  if (DAT_14cbf5ed8 == 0) {
    FUN_14086a14e(&DAT_14cbf5ed8,&PTR_FUN_14ba64b78);
  }
  return DAT_14cbf5ed8;
}



// FUNCTION 14667244e FUN_14667244e body=48 status=ok
// SIG undefined FUN_14667244e(void)

void FUN_14667244e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ba65850;
  return;
}



// FUNCTION 14667247e FUN_14667247e body=55 status=ok
// SIG undefined FUN_14667247e(void)

void FUN_14667247e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5ef8 == 0) {
    uVar1 = FUN_145a25b1d();
    DAT_14cbf5ef8 = FUN_140002ddd(FUN_1466724b5,uVar1,L"LobbyPlayerStateInfoArray");
  }
  return;
}



// FUNCTION 1466724b5 FUN_1466724b5 body=47 status=ok
// SIG undefined FUN_1466724b5(void)

longlong FUN_1466724b5(void)

{
  if (DAT_14cbf5ef0 == 0) {
    FUN_14086a14e(&DAT_14cbf5ef0,&PTR_FUN_14ba64ce8);
  }
  return DAT_14cbf5ef0;
}



// FUNCTION 1466724e4 FUN_1466724e4 body=48 status=ok
// SIG undefined FUN_1466724e4(void)

void FUN_1466724e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14ba659f0;
  return;
}



// FUNCTION 146672514 FUN_146672514 body=47 status=ok
// SIG undefined FUN_146672514(void)

longlong FUN_146672514(void)

{
  if (DAT_14cbf5f20 == 0) {
    FUN_14073dd9a(&DAT_14cbf5f20,&PTR_LAB_14ba65020);
  }
  return DAT_14cbf5f20;
}



// FUNCTION 146672543 FUN_146672543 body=47 status=ok
// SIG undefined FUN_146672543(void)

longlong FUN_146672543(void)

{
  if (DAT_14cbf5f08 == 0) {
    FUN_14000fc22(&DAT_14cbf5f08,&PTR_FUN_14ba64d38);
  }
  return DAT_14cbf5f08;
}



// FUNCTION 146672572 FUN_146672572 body=47 status=ok
// SIG undefined FUN_146672572(void)

longlong FUN_146672572(void)

{
  if (DAT_14cbf5f10 == 0) {
    FUN_14000fc22(&DAT_14cbf5f10,&PTR_FUN_14ba64da0);
  }
  return DAT_14cbf5f10;
}



// FUNCTION 1466725a2 FUN_1466725a2 body=34 status=ok
// SIG undefined FUN_1466725a2(void)

void FUN_1466725a2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458996a6();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_LobbyStarted_14ba64de0,2);
  return;
}



// FUNCTION 1466725c4 FUN_1466725c4 body=38 status=ok
// SIG undefined FUN_1466725c4(void)

void FUN_1466725c4(longlong param_1)

{
  FUN_140115e24();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  return;
}



// FUNCTION 1466725ea FUN_1466725ea body=192 status=ok
// SIG undefined FUN_1466725ea(void)

void FUN_1466725ea(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba65bd0;
  puVar1[3] = &DAT_14cbf5f54;
  puVar1[4] = FUN_1459d0ddc;
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



// FUNCTION 1466726ac FUN_1466726ac body=72 status=ok
// SIG undefined FUN_1466726ac(void)

undefined8 * FUN_1466726ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba63920;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_145850f18(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466726f4 FUN_1466726f4 body=29 status=ok
// SIG undefined FUN_1466726f4(void)

undefined8 FUN_1466726f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146672712 FUN_146672712 body=29 status=ok
// SIG undefined FUN_146672712(void)

undefined8 FUN_146672712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146672730 FUN_146672730 body=93 status=ok
// SIG undefined FUN_146672730(void)

void FUN_146672730(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba65bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14667278e FUN_14667278e body=29 status=ok
// SIG undefined FUN_14667278e(void)

undefined8 FUN_14667278e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466727ac FUN_1466727ac body=231 status=ok
// SIG undefined FUN_1466727ac(void)

void FUN_1466727ac(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba65ed0;
  local_28[3] = &DAT_14cbf5f68;
  local_28[4] = FUN_145a0a5ee;
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



// FUNCTION 146672894 FUN_146672894 body=93 status=ok
// SIG undefined FUN_146672894(void)

void FUN_146672894(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba65ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466728f2 FUN_1466728f2 body=69 status=ok
// SIG undefined FUN_1466728f2(void)

undefined8 * FUN_1466728f2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ba65f90;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146672938 FUN_146672938 body=198 status=ok
// SIG undefined FUN_146672938(void)

void FUN_146672938(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  local_48 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"PatchCheck",L"ModuleName",&local_38);
  uVar1 = FUN_144a52528();
  puVar3 = local_38;
  if ((int)uStack_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar3,1);
  plVar2 = (longlong *)FUN_1401e3324(uVar1,local_40);
  if (plVar2 == param_1) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146672a00 FUN_146672a00 body=231 status=ok
// SIG undefined FUN_146672a00(void)

void FUN_146672a00(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba68fd0;
  local_28[3] = &DAT_14cbf5f88;
  local_28[4] = FUN_1459d0e0a;
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



// FUNCTION 146672ae8 FUN_146672ae8 body=47 status=ok
// SIG undefined FUN_146672ae8(void)

longlong FUN_146672ae8(void)

{
  if (DAT_14cbf5f98 == 0) {
    FUN_1409ce572(&DAT_14cbf5f98,&PTR_FUN_14ba660b0);
  }
  return DAT_14cbf5f98;
}



// FUNCTION 146672b17 FUN_146672b17 body=47 status=ok
// SIG undefined FUN_146672b17(void)

longlong FUN_146672b17(void)

{
  if (DAT_14cbf5fc0 == 0) {
    FUN_14073dd9a(&DAT_14cbf5fc0,&PTR_LAB_14ba66350);
  }
  return DAT_14cbf5fc0;
}



// FUNCTION 146672b46 FUN_146672b46 body=47 status=ok
// SIG undefined FUN_146672b46(void)

longlong FUN_146672b46(void)

{
  if (DAT_14cbf5fb0 == 0) {
    FUN_14000fc22(&DAT_14cbf5fb0,&PTR_FUN_14ba660f8);
  }
  return DAT_14cbf5fb0;
}



// FUNCTION 146672b76 FUN_146672b76 body=34 status=ok
// SIG undefined FUN_146672b76(void)

void FUN_146672b76(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a56e3a();
  FUN_14069c8d6(uVar1,&PTR_s_StartHotfixProcess_14ba66140,1);
  return;
}



// FUNCTION 146672b98 FUN_146672b98 body=32 status=ok
// SIG undefined FUN_146672b98(void)

undefined8 FUN_146672b98(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"DedicatedServer");
  return param_2;
}



// FUNCTION 146672bb8 FUN_146672bb8 body=47 status=ok
// SIG undefined FUN_146672bb8(void)

longlong FUN_146672bb8(void)

{
  if (DAT_14cbf6048 == 0) {
    FUN_1409ce572(&DAT_14cbf6048,&PTR_FUN_14ba67710);
  }
  return DAT_14cbf6048;
}



// FUNCTION 146672be7 FUN_146672be7 body=47 status=ok
// SIG undefined FUN_146672be7(void)

longlong FUN_146672be7(void)

{
  if (DAT_14cbf6060 == 0) {
    FUN_1409ce572(&DAT_14cbf6060,&PTR_FUN_14ba677f0);
  }
  return DAT_14cbf6060;
}



// FUNCTION 146672c16 FUN_146672c16 body=49 status=ok
// SIG undefined FUN_146672c16(void)

longlong FUN_146672c16(void)

{
  if (DAT_14cbf6078 == 0) {
    FUN_14086a14e(&DAT_14cbf6078,&PTR_FUN_14ba67a48);
  }
  return DAT_14cbf6078;
}



// FUNCTION 146672c48 FUN_146672c48 body=48 status=ok
// SIG undefined FUN_146672c48(void)

void FUN_146672c48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14ba68e40;
  return;
}



// FUNCTION 146672c78 FUN_146672c78 body=47 status=ok
// SIG undefined FUN_146672c78(void)

longlong FUN_146672c78(void)

{
  if (DAT_14cbf6098 == 0) {
    FUN_14073dd9a(&DAT_14cbf6098,&PTR_LAB_14ba682a8);
  }
  return DAT_14cbf6098;
}



// FUNCTION 146672ca8 FUN_146672ca8 body=39 status=ok
// SIG undefined FUN_146672ca8(void)

void FUN_146672ca8(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    return;
  }
  FUN_149016402(param_1);
  return;
}



// FUNCTION 146672cd0 FUN_146672cd0 body=29 status=ok
// SIG undefined FUN_146672cd0(void)

undefined8 FUN_146672cd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146672cee FUN_146672cee body=93 status=ok
// SIG undefined FUN_146672cee(void)

void FUN_146672cee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba68fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146672d4c FUN_146672d4c body=29 status=ok
// SIG undefined FUN_146672d4c(void)

undefined8 FUN_146672d4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146672d69 FUN_146672d69 body=47 status=ok
// SIG undefined FUN_146672d69(void)

longlong FUN_146672d69(void)

{
  if (DAT_14cbf60f8 == 0) {
    FUN_140f50038(&DAT_14cbf60f8,&PTR_s__Script_Rejoin_14ba69c08);
  }
  return DAT_14cbf60f8;
}



// FUNCTION 146672d98 FUN_146672d98 body=47 status=ok
// SIG undefined FUN_146672d98(void)

longlong FUN_146672d98(void)

{
  if (DAT_14cbf6110 == 0) {
    FUN_1409ce572(&DAT_14cbf6110,&PTR_FUN_14ba69cc0);
  }
  return DAT_14cbf6110;
}



// FUNCTION 146672dc7 FUN_146672dc7 body=47 status=ok
// SIG undefined FUN_146672dc7(void)

longlong FUN_146672dc7(void)

{
  if (DAT_14cbf6130 == 0) {
    FUN_14073dd9a(&DAT_14cbf6130,&PTR_LAB_14ba69e78);
  }
  return DAT_14cbf6130;
}



// FUNCTION 146672df6 FUN_146672df6 body=192 status=ok
// SIG undefined FUN_146672df6(void)

void FUN_146672df6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba6a480;
  puVar1[3] = &DAT_14cbf6158;
  puVar1[4] = FUN_1459d0e38;
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



// FUNCTION 146672eb8 FUN_146672eb8 body=93 status=ok
// SIG undefined FUN_146672eb8(void)

void FUN_146672eb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146672f16 FUN_146672f16 body=29 status=ok
// SIG undefined FUN_146672f16(void)

undefined8 FUN_146672f16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146672f34 FUN_146672f34 body=192 status=ok
// SIG undefined FUN_146672f34(void)

void FUN_146672f34(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba6a750;
  puVar1[3] = &DAT_14cbf61f0;
  puVar1[4] = FUN_145c2fcb4;
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



// FUNCTION 146672ff6 FUN_146672ff6 body=78 status=ok
// SIG undefined FUN_146672ff6(void)

void FUN_146672ff6(longlong param_1)

{
  FUN_14052bb08(DAT_14c872ce0,L"PlayTimeLimit",L"bEnabled",param_1 + 0x10,&DAT_14c872ce8);
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return;
  }
  FUN_14901e912();
  FUN_14901e9d8();
  return;
}



// FUNCTION 146673044 FUN_146673044 body=93 status=ok
// SIG undefined FUN_146673044(void)

void FUN_146673044(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6a750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466730a2 FUN_1466730a2 body=47 status=ok
// SIG undefined FUN_1466730a2(void)

longlong FUN_1466730a2(longlong param_1,int param_2)

{
  FUN_1410c966c(param_1 + 8);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1466730d2 FUN_1466730d2 body=55 status=ok
// SIG undefined FUN_1466730d2(void)

void FUN_1466730d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6550 == 0) {
    uVar1 = FUN_14596ec61();
    DAT_14cbf6550 = FUN_140002ddd(FUN_146673262,uVar1,L"WebJSFunction");
  }
  return;
}



// FUNCTION 14667310a FUN_14667310a body=192 status=ok
// SIG undefined FUN_14667310a(void)

void FUN_14667310a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba6e8c0;
  puVar1[3] = &DAT_14cbf650c;
  puVar1[4] = FUN_14904f07e;
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



// FUNCTION 1466731cc FUN_1466731cc body=55 status=ok
// SIG undefined FUN_1466731cc(void)

void FUN_1466731cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6538 == 0) {
    uVar1 = FUN_14596ec61();
    DAT_14cbf6538 = FUN_140002ddd(FUN_146673203,uVar1,L"WebJSCallbackBase");
  }
  return;
}



// FUNCTION 146673203 FUN_146673203 body=47 status=ok
// SIG undefined FUN_146673203(void)

longlong FUN_146673203(void)

{
  if (DAT_14cbf6530 == 0) {
    FUN_14086a14e(&DAT_14cbf6530,&PTR_FUN_14ba6c520);
  }
  return DAT_14cbf6530;
}



// FUNCTION 146673232 FUN_146673232 body=48 status=ok
// SIG undefined FUN_146673232(void)

void FUN_146673232(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ba6d1d0;
  return;
}



// FUNCTION 146673262 FUN_146673262 body=47 status=ok
// SIG undefined FUN_146673262(void)

longlong FUN_146673262(void)

{
  if (DAT_14cbf6548 == 0) {
    FUN_14086a14e(&DAT_14cbf6548,&PTR_FUN_14ba6c588);
  }
  return DAT_14cbf6548;
}



// FUNCTION 146673292 FUN_146673292 body=48 status=ok
// SIG undefined FUN_146673292(void)

void FUN_146673292(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ba6d330;
  return;
}



// FUNCTION 1466732c2 FUN_1466732c2 body=47 status=ok
// SIG undefined FUN_1466732c2(void)

longlong FUN_1466732c2(void)

{
  if (DAT_14cbf6560 == 0) {
    FUN_14086a14e(&DAT_14cbf6560,&PTR_FUN_14ba6c5f0);
  }
  return DAT_14cbf6560;
}



// FUNCTION 1466732f2 FUN_1466732f2 body=48 status=ok
// SIG undefined FUN_1466732f2(void)

void FUN_1466732f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ba6d490;
  return;
}



// FUNCTION 146673322 FUN_146673322 body=29 status=ok
// SIG undefined FUN_146673322(void)

undefined8 FUN_146673322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146673340 FUN_146673340 body=29 status=ok
// SIG undefined FUN_146673340(void)

undefined8 FUN_146673340(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667335e FUN_14667335e body=29 status=ok
// SIG undefined FUN_14667335e(void)

undefined8 FUN_14667335e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667337c FUN_14667337c body=93 status=ok
// SIG undefined FUN_14667337c(void)

void FUN_14667337c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6e8c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466733da FUN_1466733da body=231 status=ok
// SIG undefined FUN_1466733da(void)

void FUN_1466733da(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba6ff80;
  local_28[3] = &DAT_14cbf6598;
  local_28[4] = FUN_1459d0e66;
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



// FUNCTION 1466734c2 FUN_1466734c2 body=93 status=ok
// SIG undefined FUN_1466734c2(void)

void FUN_1466734c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba6ff80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146673520 FUN_146673520 body=29 status=ok
// SIG undefined FUN_146673520(void)

undefined8 FUN_146673520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667353e FUN_14667353e body=192 status=ok
// SIG undefined FUN_14667353e(void)

void FUN_14667353e(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba703d0;
  puVar1[3] = &DAT_14cbf65c0;
  puVar1[4] = FUN_145a5fd68;
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



// FUNCTION 146673600 FUN_146673600 body=93 status=ok
// SIG undefined FUN_146673600(void)

void FUN_146673600(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba702f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14667365e FUN_14667365e body=93 status=ok
// SIG undefined FUN_14667365e(void)

void FUN_14667365e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba70360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466736bc FUN_1466736bc body=93 status=ok
// SIG undefined FUN_1466736bc(void)

void FUN_1466736bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba703d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14667371a FUN_14667371a body=64 status=ok
// SIG undefined FUN_14667371a(void)

undefined8 * FUN_14667371a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba70440;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14667375a FUN_14667375a body=45 status=ok
// SIG undefined FUN_14667375a(void)

void FUN_14667375a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1448c2e86();
                    /* WARNING: Could not recover jumptable at 0x000146673784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,DAT_14cbf65a0,param_1 + 0x10,*(code **)(*plVar1 + 0x28));
  return;
}



// FUNCTION 146673788 FUN_146673788 body=45 status=ok
// SIG undefined FUN_146673788(void)

void FUN_146673788(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1448c2e86();
                    /* WARNING: Could not recover jumptable at 0x0001466737b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,DAT_14cbf65a0,param_1 + 0x10,*(code **)(*plVar1 + 0x30));
  return;
}



// FUNCTION 1466737b6 FUN_1466737b6 body=192 status=ok
// SIG undefined FUN_1466737b6(void)

void FUN_1466737b6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba704e0;
  puVar1[3] = &DAT_14cbf65c4;
  puVar1[4] = FUN_145a1fbc6;
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



// FUNCTION 146673878 FUN_146673878 body=93 status=ok
// SIG undefined FUN_146673878(void)

void FUN_146673878(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba704e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466738d6 FUN_1466738d6 body=34 status=ok
// SIG undefined FUN_1466738d6(void)

undefined8 FUN_1466738d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1466738f8 FUN_1466738f8 body=49 status=ok
// SIG undefined FUN_1466738f8(void)

longlong FUN_1466738f8(void)

{
  if (DAT_14cbf65d0 == 0) {
    FUN_140f50038(&DAT_14cbf65d0,&PTR_s__Script_GbxBlockout_14ba705b0);
  }
  return DAT_14cbf65d0;
}



// FUNCTION 146673929 FUN_146673929 body=175 status=ok
// SIG undefined FUN_146673929(void)

void FUN_146673929(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ea704(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba708c0;
  puVar1[5] = &PTR_FUN_14ba713d0;
  puVar1[6] = &PTR_FUN_14ba71410;
  puVar1[0x55] = &PTR_FUN_14ba71460;
  puVar1[0x56] = &PTR_FUN_14ba714e0;
  puVar1[0x57] = &PTR_FUN_14ba714f0;
  *(undefined1 *)(puVar1 + 0xe3) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x71c) = 0x42c80000;
  puVar1[0xe4] = &DAT_3f8000003f800000;
  puVar1[0xe5] = &DAT_3f8000003f800000;
  uVar2 = DAT_14c8464e8;
  puVar1[0xe6] = DAT_14c8464e0;
  puVar1[0xe7] = uVar2;
  puVar1[0xe8] = DAT_14c8464f0;
  puVar1[0xe9] = 0x3f80000000000000;
  return;
}



// FUNCTION 1466739d8 FUN_1466739d8 body=47 status=ok
// SIG undefined FUN_1466739d8(void)

longlong FUN_1466739d8(void)

{
  if (DAT_14cbf6630 == 0) {
    FUN_1409ce572(&DAT_14cbf6630,&PTR_FUN_14ba71bb0);
  }
  return DAT_14cbf6630;
}



// FUNCTION 146673a07 FUN_146673a07 body=47 status=ok
// SIG undefined FUN_146673a07(void)

longlong FUN_146673a07(void)

{
  if (DAT_14cbf65f8 == 0) {
    FUN_14073dd9a(&DAT_14cbf65f8,&PTR_LAB_14ba70878);
  }
  return DAT_14cbf65f8;
}



// FUNCTION 146673a36 FUN_146673a36 body=47 status=ok
// SIG undefined FUN_146673a36(void)

longlong FUN_146673a36(void)

{
  if (DAT_14cbf6620 == 0) {
    FUN_14073dd9a(&DAT_14cbf6620,&PTR_LAB_14ba71800);
  }
  return DAT_14cbf6620;
}



// FUNCTION 146673a65 FUN_146673a65 body=47 status=ok
// SIG undefined FUN_146673a65(void)

longlong FUN_146673a65(void)

{
  if (DAT_14cbf6610 == 0) {
    FUN_14000fc22(&DAT_14cbf6610,&PTR_FUN_14ba71728);
  }
  return DAT_14cbf6610;
}



// FUNCTION 146673a94 FUN_146673a94 body=34 status=ok
// SIG undefined FUN_146673a94(void)

void FUN_146673a94(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a91730();
  FUN_14069c8d6(uVar1,&PTR_s_SetMaterialParameters_14ba71770,1);
  return;
}



// FUNCTION 146673ab6 FUN_146673ab6 body=35 status=ok
// SIG undefined FUN_146673ab6(void)

void FUN_146673ab6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba71840;
  return;
}



// FUNCTION 146673ad9 FUN_146673ad9 body=54 status=ok
// SIG undefined FUN_146673ad9(void)

void FUN_146673ad9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1);
  *puVar1 = &PTR_FUN_14ba71d40;
  memset(puVar1 + 7,0,0x160);
  return;
}



// FUNCTION 146673b0f FUN_146673b0f body=47 status=ok
// SIG undefined FUN_146673b0f(void)

longlong FUN_146673b0f(void)

{
  if (DAT_14cbf6650 == 0) {
    FUN_14073dd9a(&DAT_14cbf6650,&PTR_LAB_14ba71cf8);
  }
  return DAT_14cbf6650;
}



// FUNCTION 146673b3e FUN_146673b3e body=192 status=ok
// SIG undefined FUN_146673b3e(void)

void FUN_146673b3e(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba721d0;
  puVar1[3] = &DAT_14cbf6668;
  puVar1[4] = FUN_1459d0e94;
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



// FUNCTION 146673c00 FUN_146673c00 body=40 status=ok
// SIG undefined FUN_146673c00(void)

undefined8 FUN_146673c00(undefined8 param_1,int param_2)

{
  FUN_14006e248();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146673c28 FUN_146673c28 body=40 status=ok
// SIG undefined FUN_146673c28(void)

undefined8 FUN_146673c28(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146673c50 FUN_146673c50 body=93 status=ok
// SIG undefined FUN_146673c50(void)

void FUN_146673c50(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba721d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146673cae FUN_146673cae body=34 status=ok
// SIG undefined FUN_146673cae(void)

undefined8 FUN_146673cae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146673cd0 FUN_146673cd0 body=49 status=ok
// SIG undefined FUN_146673cd0(void)

longlong FUN_146673cd0(void)

{
  if (DAT_14cbf6678 == 0) {
    FUN_140f50038(&DAT_14cbf6678,&PTR_s__Script_GbxBiome_14ba7229f_1_14ba72280);
  }
  return DAT_14cbf6678;
}



// FUNCTION 146673d01 FUN_146673d01 body=47 status=ok
// SIG undefined FUN_146673d01(void)

longlong FUN_146673d01(void)

{
  if (DAT_14cbf6690 == 0) {
    FUN_14073dd9a(&DAT_14cbf6690,&PTR_LAB_14ba72398);
  }
  return DAT_14cbf6690;
}



// FUNCTION 146673d30 FUN_146673d30 body=47 status=ok
// SIG undefined FUN_146673d30(void)

longlong FUN_146673d30(void)

{
  if (DAT_14cbf66c0 == 0) {
    FUN_14073dd9a(&DAT_14cbf66c0,&PTR_LAB_14ba72aa8);
  }
  return DAT_14cbf66c0;
}



// FUNCTION 146673d5f FUN_146673d5f body=113 status=ok
// SIG undefined FUN_146673d5f(void)

void FUN_146673d5f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14090bd5e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba73980;
  puVar1[5] = &PTR_FUN_14ba74570;
  puVar1[6] = &PTR_FUN_14ba745b0;
  puVar1[0x55] = &PTR_FUN_14ba74600;
  puVar1[0x56] = &PTR_FUN_14ba74680;
  puVar1[0x57] = &PTR_FUN_14ba74690;
  puVar1[0xe3] = &PTR_FUN_14ba746c0;
  return;
}



// FUNCTION 146673dd0 FUN_146673dd0 body=47 status=ok
// SIG undefined FUN_146673dd0(void)

longlong FUN_146673dd0(void)

{
  if (DAT_14cbf66d8 == 0) {
    FUN_14073dd9a(&DAT_14cbf66d8,&PTR_LAB_14ba73938);
  }
  return DAT_14cbf66d8;
}



// FUNCTION 146673dff FUN_146673dff body=113 status=ok
// SIG undefined FUN_146673dff(void)

void FUN_146673dff(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400f3bfc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba74810;
  puVar1[5] = &PTR_FUN_14ba75400;
  puVar1[6] = &PTR_FUN_14ba75440;
  puVar1[0x55] = &PTR_FUN_14ba75490;
  puVar1[0x56] = &PTR_FUN_14ba75510;
  puVar1[0x57] = &PTR_FUN_14ba75520;
  puVar1[0xe3] = &PTR_FUN_14ba75550;
  return;
}



// FUNCTION 146673e70 FUN_146673e70 body=47 status=ok
// SIG undefined FUN_146673e70(void)

longlong FUN_146673e70(void)

{
  if (DAT_14cbf66f0 == 0) {
    FUN_14073dd9a(&DAT_14cbf66f0,&PTR_LAB_14ba747c8);
  }
  return DAT_14cbf66f0;
}



// FUNCTION 146673ea0 FUN_146673ea0 body=231 status=ok
// SIG undefined FUN_146673ea0(void)

void FUN_146673ea0(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba75980;
  local_28[3] = &DAT_14cbf675c;
  local_28[4] = FUN_1459d0ec2;
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



// FUNCTION 146673f88 FUN_146673f88 body=344 status=ok
// SIG undefined FUN_146673f88(void)

void FUN_146673f88(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50._0_4_ = 1;
  uStack_50._4_4_ = 0;
  FUN_141518130(&local_58,0);
  lVar3 = local_58;
  FUN_140056680(local_38,L"GbxBiomeHISMComponent");
  FUN_140056680(local_48,L"/Script/GbxBiome.GbxBiomeMeshComponent");
  FUN_141517fc0(lVar3,2,local_48,local_38);
  iVar1 = (int)uStack_50;
  lVar3 = (longlong)(int)uStack_50;
  uVar2 = (int)uStack_50 + 1;
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  if (uStack_50._4_4_ < uVar2) {
    FUN_141518130(&local_58,iVar1);
  }
  lVar3 = lVar3 * 0xa0 + local_58;
  FUN_140056680(local_38,L"/Script/GbxProceduralEditor.GbxProceduralBuilderSettingsActor");
  FUN_140056680(local_48,L"/Script/GbxBiome.GbxProceduralBuilderSettingsActor");
  FUN_141517fc0(lVar3,2,local_48,local_38);
  FUN_140056680(local_38,L"GbxBiome");
  local_68 = local_58;
  local_60 = (int)uStack_50;
  FUN_141071fba(&local_68,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a24(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466740e2 FUN_1466740e2 body=40 status=ok
// SIG undefined FUN_1466740e2(void)

undefined8 FUN_1466740e2(undefined8 param_1,int param_2)

{
  FUN_140899bb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667410a FUN_14667410a body=40 status=ok
// SIG undefined FUN_14667410a(void)

undefined8 FUN_14667410a(undefined8 param_1,int param_2)

{
  FUN_14006df30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146674132 FUN_146674132 body=93 status=ok
// SIG undefined FUN_146674132(void)

void FUN_146674132(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba75980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146674190 FUN_146674190 body=34 status=ok
// SIG undefined FUN_146674190(void)

undefined8 FUN_146674190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1466741b2 FUN_1466741b2 body=47 status=ok
// SIG undefined FUN_1466741b2(void)

longlong FUN_1466741b2(void)

{
  if (DAT_14cbf6768 == 0) {
    FUN_140f50038(&DAT_14cbf6768,&PTR_s__Script_GbxProcedural_14ba75a4e_2_14ba75a30);
  }
  return DAT_14cbf6768;
}



// FUNCTION 1466741e1 FUN_1466741e1 body=35 status=ok
// SIG undefined FUN_1466741e1(void)

void FUN_1466741e1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba75b20;
  return;
}



// FUNCTION 146674204 FUN_146674204 body=47 status=ok
// SIG undefined FUN_146674204(void)

longlong FUN_146674204(void)

{
  if (DAT_14cbf6780 == 0) {
    FUN_14073dd9a(&DAT_14cbf6780,&PTR_LAB_14ba75ad8);
  }
  return DAT_14cbf6780;
}



// FUNCTION 146674234 FUN_146674234 body=192 status=ok
// SIG undefined FUN_146674234(void)

void FUN_146674234(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba76190;
  puVar1[3] = &DAT_14cbf6790;
  puVar1[4] = FUN_1459a6b9a;
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



// FUNCTION 1466742f6 FUN_1466742f6 body=40 status=ok
// SIG undefined FUN_1466742f6(void)

undefined8 FUN_1466742f6(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667431e FUN_14667431e body=93 status=ok
// SIG undefined FUN_14667431e(void)

void FUN_14667431e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba76190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14667437c FUN_14667437c body=34 status=ok
// SIG undefined FUN_14667437c(void)

undefined8 FUN_14667437c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14667439e FUN_14667439e body=47 status=ok
// SIG undefined FUN_14667439e(void)

longlong FUN_14667439e(void)

{
  if (DAT_14cbf67a0 == 0) {
    FUN_140f50038(&DAT_14cbf67a0,&PTR_s__Script_GbxPCG_14ba7625f_1_14ba76240);
  }
  return DAT_14cbf67a0;
}



// FUNCTION 1466743ce FUN_1466743ce body=192 status=ok
// SIG undefined FUN_1466743ce(void)

void FUN_1466743ce(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba769c0;
  puVar1[3] = &DAT_14cbf67b0;
  puVar1[4] = FUN_1459a6bc4;
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



// FUNCTION 14667448f FUN_14667448f body=35 status=ok
// SIG undefined FUN_14667448f(void)

void FUN_14667448f(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1405ba846(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba76320;
  return;
}



// FUNCTION 1466744b2 FUN_1466744b2 body=47 status=ok
// SIG undefined FUN_1466744b2(void)

longlong FUN_1466744b2(void)

{
  if (DAT_14cbf67c0 == 0) {
    FUN_14073dd9a(&DAT_14cbf67c0,&PTR_LAB_14ba762d8);
  }
  return DAT_14cbf67c0;
}



// FUNCTION 1466744e2 FUN_1466744e2 body=40 status=ok
// SIG undefined FUN_1466744e2(void)

undefined8 FUN_1466744e2(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667450a FUN_14667450a body=93 status=ok
// SIG undefined FUN_14667450a(void)

void FUN_14667450a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba769c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146674568 FUN_146674568 body=34 status=ok
// SIG undefined FUN_146674568(void)

undefined8 FUN_146674568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14667458a FUN_14667458a body=49 status=ok
// SIG undefined FUN_14667458a(void)

longlong FUN_14667458a(void)

{
  if (DAT_14cbf6848 == 0) {
    FUN_140f50038(&DAT_14cbf6848,&PTR_s__Script_GbxBlockingVolumes_14ba781b0);
  }
  return DAT_14cbf6848;
}



// FUNCTION 1466745bb FUN_1466745bb body=47 status=ok
// SIG undefined FUN_1466745bb(void)

longlong FUN_1466745bb(void)

{
  if (DAT_14cbf67e8 == 0) {
    FUN_14073dd9a(&DAT_14cbf67e8,&PTR_LAB_14ba76b28);
  }
  return DAT_14cbf67e8;
}



// FUNCTION 1466745ea FUN_1466745ea body=46 status=ok
// SIG undefined FUN_1466745ea(void)

void FUN_1466745ea(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba76fe0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}



// FUNCTION 146674618 FUN_146674618 body=47 status=ok
// SIG undefined FUN_146674618(void)

longlong FUN_146674618(void)

{
  if (DAT_14cbf6800 == 0) {
    FUN_14073dd9a(&DAT_14cbf6800,&PTR_LAB_14ba76f98);
  }
  return DAT_14cbf6800;
}



// FUNCTION 146674647 FUN_146674647 body=75 status=ok
// SIG undefined FUN_146674647(void)

void FUN_146674647(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba77460;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  return;
}



// FUNCTION 146674697 FUN_146674697 body=47 status=ok
// SIG undefined FUN_146674697(void)

longlong FUN_146674697(void)

{
  if (DAT_14cbf6818 == 0) {
    FUN_14073dd9a(&DAT_14cbf6818,&PTR_LAB_14ba77420);
  }
  return DAT_14cbf6818;
}



// FUNCTION 1466746cb FUN_1466746cb body=47 status=ok
// SIG undefined FUN_1466746cb(void)

longlong FUN_1466746cb(void)

{
  if (DAT_14cbf6830 == 0) {
    FUN_14073dd9a(&DAT_14cbf6830,&PTR_LAB_14ba77aa8);
  }
  return DAT_14cbf6830;
}



// FUNCTION 1466746fa FUN_1466746fa body=192 status=ok
// SIG undefined FUN_1466746fa(void)

void FUN_1466746fa(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba78310;
  puVar1[3] = &DAT_14cbf692c;
  puVar1[4] = FUN_145a2ce50;
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



// FUNCTION 1466747bc FUN_1466747bc body=69 status=ok
// SIG undefined FUN_1466747bc(void)

undefined8 * FUN_1466747bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba76b70;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146674802 FUN_146674802 body=40 status=ok
// SIG undefined FUN_146674802(void)

undefined8 FUN_146674802(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667482a FUN_14667482a body=93 status=ok
// SIG undefined FUN_14667482a(void)

void FUN_14667482a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba78310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146674888 FUN_146674888 body=72 status=ok
// SIG undefined FUN_146674888(void)

undefined8 * FUN_146674888(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba78380;
  if (param_1[1] != 0) {
    FUN_140113f3a();
    param_1[1] = 0;
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1466748d0 FUN_1466748d0 body=39 status=ok
// SIG undefined FUN_1466748d0(void)

void FUN_1466748d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140834366(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba784a0;
  *(byte *)((longlong)puVar1 + 99) = *(byte *)((longlong)puVar1 + 99) | 2;
  return;
}



// FUNCTION 1466748f7 FUN_1466748f7 body=47 status=ok
// SIG undefined FUN_1466748f7(void)

longlong FUN_1466748f7(void)

{
  if (DAT_14cbf6950 == 0) {
    FUN_14073dd9a(&DAT_14cbf6950,&PTR_LAB_14ba78458);
  }
  return DAT_14cbf6950;
}



// FUNCTION 146674926 FUN_146674926 body=57 status=ok
// SIG undefined FUN_146674926(void)

void FUN_146674926(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba78bb0;
  puVar1[5] = &PTR_FUN_14ba79030;
  puVar1[6] = &PTR_LAB_14ba79070;
  return;
}



// FUNCTION 14667495f FUN_14667495f body=47 status=ok
// SIG undefined FUN_14667495f(void)

longlong FUN_14667495f(void)

{
  if (DAT_14cbf6968 == 0) {
    FUN_14073dd9a(&DAT_14cbf6968,&PTR_LAB_14ba78b68);
  }
  return DAT_14cbf6968;
}



// FUNCTION 14667498e FUN_14667498e body=57 status=ok
// SIG undefined FUN_14667498e(void)

void FUN_14667498e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba79190;
  puVar1[5] = &PTR_FUN_14ba79770;
  puVar1[6] = &PTR_LAB_14ba797b0;
  return;
}



// FUNCTION 1466749c7 FUN_1466749c7 body=47 status=ok
// SIG undefined FUN_1466749c7(void)

longlong FUN_1466749c7(void)

{
  if (DAT_14cbf6980 == 0) {
    FUN_14073dd9a(&DAT_14cbf6980,&PTR_LAB_14ba79148);
  }
  return DAT_14cbf6980;
}



// FUNCTION 1466749f6 FUN_1466749f6 body=35 status=ok
// SIG undefined FUN_1466749f6(void)

void FUN_1466749f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba798c0;
  return;
}



// FUNCTION 146674a19 FUN_146674a19 body=47 status=ok
// SIG undefined FUN_146674a19(void)

longlong FUN_146674a19(void)

{
  if (DAT_14cbf6bc0 == 0) {
    FUN_14073dd9a(&DAT_14cbf6bc0,&PTR_LAB_14ba7ec08);
  }
  return DAT_14cbf6bc0;
}



// FUNCTION 146674a48 FUN_146674a48 body=47 status=ok
// SIG undefined FUN_146674a48(void)

longlong FUN_146674a48(void)

{
  if (DAT_14cbf6998 == 0) {
    FUN_14073dd9a(&DAT_14cbf6998,&PTR_LAB_14ba79878);
  }
  return DAT_14cbf6998;
}



// FUNCTION 146674a77 FUN_146674a77 body=57 status=ok
// SIG undefined FUN_146674a77(void)

void FUN_146674a77(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba79c40;
  puVar1[5] = &PTR_FUN_14ba7a220;
  puVar1[6] = &PTR_LAB_14ba7a260;
  return;
}



// FUNCTION 146674ab0 FUN_146674ab0 body=47 status=ok
// SIG undefined FUN_146674ab0(void)

longlong FUN_146674ab0(void)

{
  if (DAT_14cbf69b8 == 0) {
    FUN_14073dd9a(&DAT_14cbf69b8,&PTR_LAB_14ba79bf8);
  }
  return DAT_14cbf69b8;
}



// FUNCTION 146674ae0 FUN_146674ae0 body=55 status=ok
// SIG undefined FUN_146674ae0(void)

void FUN_146674ae0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf69d0 == 0) {
    uVar1 = FUN_141022b16();
    DAT_14cbf69d0 = FUN_140002ddd(FUN_146674b17,uVar1,L"GbxPrefabGbxBlockingVolumeParams");
  }
  return;
}



// FUNCTION 146674b17 FUN_146674b17 body=47 status=ok
// SIG undefined FUN_146674b17(void)

longlong FUN_146674b17(void)

{
  if (DAT_14cbf69c8 == 0) {
    FUN_14086a14e(&DAT_14cbf69c8,&PTR_FUN_14ba7a618);
  }
  return DAT_14cbf69c8;
}


