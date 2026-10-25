// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464bf84a FUN_1464bf84a body=29 status=ok
// SIG undefined FUN_1464bf84a(void)

undefined8 FUN_1464bf84a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf868 FUN_1464bf868 body=29 status=ok
// SIG undefined FUN_1464bf868(void)

undefined8 FUN_1464bf868(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf886 FUN_1464bf886 body=29 status=ok
// SIG undefined FUN_1464bf886(void)

undefined8 FUN_1464bf886(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf8a4 FUN_1464bf8a4 body=29 status=ok
// SIG undefined FUN_1464bf8a4(void)

undefined8 FUN_1464bf8a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf8c2 FUN_1464bf8c2 body=29 status=ok
// SIG undefined FUN_1464bf8c2(void)

undefined8 FUN_1464bf8c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf8e0 FUN_1464bf8e0 body=29 status=ok
// SIG undefined FUN_1464bf8e0(void)

undefined8 FUN_1464bf8e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf8fe FUN_1464bf8fe body=29 status=ok
// SIG undefined FUN_1464bf8fe(void)

undefined8 FUN_1464bf8fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf91c FUN_1464bf91c body=29 status=ok
// SIG undefined FUN_1464bf91c(void)

undefined8 FUN_1464bf91c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf93a FUN_1464bf93a body=29 status=ok
// SIG undefined FUN_1464bf93a(void)

undefined8 FUN_1464bf93a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bf958 FUN_1464bf958 body=115 status=ok
// SIG undefined FUN_1464bf958(void)

void FUN_1464bf958(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1464bf9db FUN_1464bf9db body=47 status=ok
// SIG undefined FUN_1464bf9db(void)

longlong FUN_1464bf9db(void)

{
  if (DAT_14cb57e50 == 0) {
    FUN_14073dd9a(&DAT_14cb57e50,&PTR_LAB_14b06a718);
  }
  return DAT_14cb57e50;
}



// FUNCTION 1464bfa17 FUN_1464bfa17 body=47 status=ok
// SIG undefined FUN_1464bfa17(void)

longlong FUN_1464bfa17(void)

{
  if (DAT_14cb57e90 == 0) {
    FUN_14073dd9a(&DAT_14cb57e90,&PTR_LAB_14b06aa68);
  }
  return DAT_14cb57e90;
}



// FUNCTION 1464bfa53 FUN_1464bfa53 body=47 status=ok
// SIG undefined FUN_1464bfa53(void)

longlong FUN_1464bfa53(void)

{
  if (DAT_14cb57ea8 == 0) {
    FUN_14073dd9a(&DAT_14cb57ea8,&PTR_LAB_14b06add8);
  }
  return DAT_14cb57ea8;
}



// FUNCTION 1464bfa82 FUN_1464bfa82 body=55 status=ok
// SIG undefined FUN_1464bfa82(void)

void FUN_1464bfa82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57ec0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57ec0 = FUN_140002ddd(FUN_1464bfab9,uVar1,L"GbxActiveProfileSaveGameHeader");
  }
  return;
}



// FUNCTION 1464bfab9 FUN_1464bfab9 body=47 status=ok
// SIG undefined FUN_1464bfab9(void)

longlong FUN_1464bfab9(void)

{
  if (DAT_14cb57eb8 == 0) {
    FUN_14086a14e(&DAT_14cb57eb8,&PTR_FUN_14b06b198);
  }
  return DAT_14cb57eb8;
}



// FUNCTION 1464bfae8 FUN_1464bfae8 body=48 status=ok
// SIG undefined FUN_1464bfae8(void)

void FUN_1464bfae8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b070260;
  return;
}



// FUNCTION 1464bfb18 FUN_1464bfb18 body=35 status=ok
// SIG undefined FUN_1464bfb18(void)

void FUN_1464bfb18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b06b280;
  return;
}



// FUNCTION 1464bfb41 FUN_1464bfb41 body=47 status=ok
// SIG undefined FUN_1464bfb41(void)

longlong FUN_1464bfb41(void)

{
  if (DAT_14cb57ed8 == 0) {
    FUN_14073dd9a(&DAT_14cb57ed8,&PTR_LAB_14b06b238);
  }
  return DAT_14cb57ed8;
}



// FUNCTION 1464bfb70 FUN_1464bfb70 body=55 status=ok
// SIG undefined FUN_1464bfb70(void)

void FUN_1464bfb70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57ef0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57ef0 = FUN_140002ddd(FUN_141848dc6,uVar1,L"GbxActivityActorData");
  }
  return;
}



// FUNCTION 1464bfba8 FUN_1464bfba8 body=48 status=ok
// SIG undefined FUN_1464bfba8(void)

void FUN_1464bfba8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b0703e0;
  return;
}



// FUNCTION 1464bfbee FUN_1464bfbee body=47 status=ok
// SIG undefined FUN_1464bfbee(void)

longlong FUN_1464bfbee(void)

{
  if (DAT_14cb57f10 == 0) {
    FUN_14073dd9a(&DAT_14cb57f10,&PTR_LAB_14b06bbf8);
  }
  return DAT_14cb57f10;
}



// FUNCTION 1464bfc23 FUN_1464bfc23 body=47 status=ok
// SIG undefined FUN_1464bfc23(void)

longlong FUN_1464bfc23(void)

{
  if (DAT_14cb57f38 == 0) {
    FUN_14073dd9a(&DAT_14cb57f38,&PTR_LAB_14b06bd18);
  }
  return DAT_14cb57f38;
}



// FUNCTION 1464bfc52 FUN_1464bfc52 body=49 status=ok
// SIG undefined FUN_1464bfc52(void)

longlong FUN_1464bfc52(void)

{
  if (DAT_14cb57f68 == 0) {
    FUN_14073dd9a(&DAT_14cb57f68,&PTR_LAB_14b06c540);
  }
  return DAT_14cb57f68;
}



// FUNCTION 1464bfc83 FUN_1464bfc83 body=47 status=ok
// SIG undefined FUN_1464bfc83(void)

longlong FUN_1464bfc83(void)

{
  if (DAT_14cb57f48 == 0) {
    FUN_14000fc22(&DAT_14cb57f48,&PTR_FUN_14b06be20);
  }
  return DAT_14cb57f48;
}



// FUNCTION 1464bfcb2 FUN_1464bfcb2 body=47 status=ok
// SIG undefined FUN_1464bfcb2(void)

longlong FUN_1464bfcb2(void)

{
  if (DAT_14cb57f50 == 0) {
    FUN_14000fc22(&DAT_14cb57f50,&PTR_FUN_14b06beb8);
  }
  return DAT_14cb57f50;
}



// FUNCTION 1464bfce1 FUN_1464bfce1 body=47 status=ok
// SIG undefined FUN_1464bfce1(void)

longlong FUN_1464bfce1(void)

{
  if (DAT_14cb57f58 == 0) {
    FUN_14000fc22(&DAT_14cb57f58,&PTR_FUN_14b06bf10);
  }
  return DAT_14cb57f58;
}



// FUNCTION 1464bfd10 FUN_1464bfd10 body=34 status=ok
// SIG undefined FUN_1464bfd10(void)

void FUN_1464bfd10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140928036();
  FUN_14069c8d6(uVar1,&PTR_s_GetLayoutNames_14b06bf50,3);
  return;
}



// FUNCTION 1464bfd44 FUN_1464bfd44 body=47 status=ok
// SIG undefined FUN_1464bfd44(void)

longlong FUN_1464bfd44(void)

{
  if (DAT_14cb57f90 == 0) {
    FUN_14086a14e(&DAT_14cb57f90,&PTR_FUN_14b06cc38);
  }
  return DAT_14cb57f90;
}



// FUNCTION 1464bfd73 FUN_1464bfd73 body=49 status=ok
// SIG undefined FUN_1464bfd73(void)

longlong FUN_1464bfd73(void)

{
  if (DAT_14cb58010 == 0) {
    FUN_14086a14e(&DAT_14cb58010,&PTR_FUN_14b06d568);
  }
  return DAT_14cb58010;
}



// FUNCTION 1464bfda9 FUN_1464bfda9 body=47 status=ok
// SIG undefined FUN_1464bfda9(void)

longlong FUN_1464bfda9(void)

{
  if (DAT_14cb57f80 == 0) {
    FUN_14073dd9a(&DAT_14cb57f80,&PTR_LAB_14b06c5d8);
  }
  return DAT_14cb57f80;
}



// FUNCTION 1464bfdd8 FUN_1464bfdd8 body=47 status=ok
// SIG undefined FUN_1464bfdd8(void)

longlong FUN_1464bfdd8(void)

{
  if (DAT_14cb58040 == 0) {
    FUN_14086a14e(&DAT_14cb58040,&PTR_FUN_14b06d888);
  }
  return DAT_14cb58040;
}



// FUNCTION 1464bfe08 FUN_1464bfe08 body=48 status=ok
// SIG undefined FUN_1464bfe08(void)

void FUN_1464bfe08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a0;
  *puVar1 = &PTR_FUN_14b070540;
  return;
}



// FUNCTION 1464bfe38 FUN_1464bfe38 body=47 status=ok
// SIG undefined FUN_1464bfe38(void)

longlong FUN_1464bfe38(void)

{
  if (DAT_14cb57fb0 == 0) {
    FUN_14073dd9a(&DAT_14cb57fb0,&PTR_LAB_14b06cce8);
  }
  return DAT_14cb57fb0;
}



// FUNCTION 1464bfe67 FUN_1464bfe67 body=47 status=ok
// SIG undefined FUN_1464bfe67(void)

longlong FUN_1464bfe67(void)

{
  if (DAT_14cb57fc0 == 0) {
    FUN_14000fc22(&DAT_14cb57fc0,&PTR_FUN_14b06cdb0);
  }
  return DAT_14cb57fc0;
}



// FUNCTION 1464bfe96 FUN_1464bfe96 body=55 status=ok
// SIG undefined FUN_1464bfe96(void)

void FUN_1464bfe96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57fd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57fd0 = FUN_140002ddd(FUN_1464bfecd,uVar1,L"DebugDisplayLayout");
  }
  return;
}



// FUNCTION 1464bfecd FUN_1464bfecd body=47 status=ok
// SIG undefined FUN_1464bfecd(void)

longlong FUN_1464bfecd(void)

{
  if (DAT_14cb57fc8 == 0) {
    FUN_14086a14e(&DAT_14cb57fc8,&PTR_FUN_14b06cec8);
  }
  return DAT_14cb57fc8;
}



// FUNCTION 1464bfefc FUN_1464bfefc body=48 status=ok
// SIG undefined FUN_1464bfefc(void)

void FUN_1464bfefc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b0706c0;
  return;
}



// FUNCTION 1464bff2c FUN_1464bff2c body=47 status=ok
// SIG undefined FUN_1464bff2c(void)

longlong FUN_1464bff2c(void)

{
  if (DAT_14cb57fe8 == 0) {
    FUN_14073dd9a(&DAT_14cb57fe8,&PTR_LAB_14b06d088);
  }
  return DAT_14cb57fe8;
}



// FUNCTION 1464bff5c FUN_1464bff5c body=55 status=ok
// SIG undefined FUN_1464bff5c(void)

void FUN_1464bff5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58000 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58000 = FUN_140002ddd(FUN_1464bff93,uVar1,L"StampAlwaysLoadedActor");
  }
  return;
}



// FUNCTION 1464bff93 FUN_1464bff93 body=47 status=ok
// SIG undefined FUN_1464bff93(void)

longlong FUN_1464bff93(void)

{
  if (DAT_14cb57ff8 == 0) {
    FUN_14086a14e(&DAT_14cb57ff8,&PTR_FUN_14b06d2b8);
  }
  return DAT_14cb57ff8;
}



// FUNCTION 1464bffc2 FUN_1464bffc2 body=48 status=ok
// SIG undefined FUN_1464bffc2(void)

void FUN_1464bffc2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000b0;
  *puVar1 = &PTR_FUN_14b070820;
  return;
}



// FUNCTION 1464bfff2 FUN_1464bfff2 body=49 status=ok
// SIG undefined FUN_1464bfff2(void)

longlong FUN_1464bfff2(void)

{
  if (DAT_14cb58070 == 0) {
    FUN_14086a14e(&DAT_14cb58070,&PTR_FUN_14b06da50);
  }
  return DAT_14cb58070;
}



// FUNCTION 1464c0024 FUN_1464c0024 body=48 status=ok
// SIG undefined FUN_1464c0024(void)

void FUN_1464c0024(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14b070980;
  return;
}



// FUNCTION 1464c0054 FUN_1464c0054 body=47 status=ok
// SIG undefined FUN_1464c0054(void)

longlong FUN_1464c0054(void)

{
  if (DAT_14cb58030 == 0) {
    FUN_14073dd9a(&DAT_14cb58030,&PTR_LAB_14b06d618);
  }
  return DAT_14cb58030;
}



// FUNCTION 1464c0084 FUN_1464c0084 body=48 status=ok
// SIG undefined FUN_1464c0084(void)

void FUN_1464c0084(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b070b00;
  return;
}



// FUNCTION 1464c00b4 FUN_1464c00b4 body=47 status=ok
// SIG undefined FUN_1464c00b4(void)

longlong FUN_1464c00b4(void)

{
  if (DAT_14cb58060 == 0) {
    FUN_14073dd9a(&DAT_14cb58060,&PTR_LAB_14b06d948);
  }
  return DAT_14cb58060;
}



// FUNCTION 1464c00e4 FUN_1464c00e4 body=55 status=ok
// SIG undefined FUN_1464c00e4(void)

void FUN_1464c00e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58078 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58078 = FUN_140002ddd(FUN_1464bfff2,uVar1,L"GbxActivityAreaStampLayoutSwitch");
  }
  return;
}



// FUNCTION 1464c011c FUN_1464c011c body=48 status=ok
// SIG undefined FUN_1464c011c(void)

void FUN_1464c011c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b070c80;
  return;
}



// FUNCTION 1464c014c FUN_1464c014c body=55 status=ok
// SIG undefined FUN_1464c014c(void)

void FUN_1464c014c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58090 = FUN_140002ddd(FUN_1464c0183,uVar1,L"GbxActivityAreaStampLayoutSwitchNamed");
  }
  return;
}



// FUNCTION 1464c0183 FUN_1464c0183 body=47 status=ok
// SIG undefined FUN_1464c0183(void)

longlong FUN_1464c0183(void)

{
  if (DAT_14cb58088 == 0) {
    FUN_14086a14e(&DAT_14cb58088,&PTR_FUN_14b06dc28);
  }
  return DAT_14cb58088;
}



// FUNCTION 1464c01b2 FUN_1464c01b2 body=48 status=ok
// SIG undefined FUN_1464c01b2(void)

void FUN_1464c01b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14b070e10;
  return;
}



// FUNCTION 1464c01e2 FUN_1464c01e2 body=55 status=ok
// SIG undefined FUN_1464c01e2(void)

void FUN_1464c01e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb580a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb580a8 = FUN_140002ddd(FUN_1464c0219,uVar1,L"GbxActivityAreaStampLayoutSwitchFact");
  }
  return;
}



// FUNCTION 1464c0219 FUN_1464c0219 body=47 status=ok
// SIG undefined FUN_1464c0219(void)

longlong FUN_1464c0219(void)

{
  if (DAT_14cb580a0 == 0) {
    FUN_14086a14e(&DAT_14cb580a0,&PTR_FUN_14b06dd20);
  }
  return DAT_14cb580a0;
}



// FUNCTION 1464c0248 FUN_1464c0248 body=48 status=ok
// SIG undefined FUN_1464c0248(void)

void FUN_1464c0248(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b070fa0;
  return;
}



// FUNCTION 1464c027d FUN_1464c027d body=47 status=ok
// SIG undefined FUN_1464c027d(void)

longlong FUN_1464c027d(void)

{
  if (DAT_14cb580c0 == 0) {
    FUN_14073dd9a(&DAT_14cb580c0,&PTR_LAB_14b06dfd8);
  }
  return DAT_14cb580c0;
}



// FUNCTION 1464c02ac FUN_1464c02ac body=50 status=ok
// SIG undefined FUN_1464c02ac(void)

void FUN_1464c02ac(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bf9282(puVar1);
  *puVar1 = &PTR_FUN_14b06e100;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  return;
}



// FUNCTION 1464c02e3 FUN_1464c02e3 body=47 status=ok
// SIG undefined FUN_1464c02e3(void)

longlong FUN_1464c02e3(void)

{
  if (DAT_14cb580d8 == 0) {
    FUN_14073dd9a(&DAT_14cb580d8,&PTR_LAB_14b06e0b8);
  }
  return DAT_14cb580d8;
}



// FUNCTION 1464c0312 FUN_1464c0312 body=49 status=ok
// SIG undefined FUN_1464c0312(void)

longlong FUN_1464c0312(void)

{
  if (DAT_14cb58150 == 0) {
    FUN_14073dd9a(&DAT_14cb58150,&PTR_LAB_14b06f3b0);
  }
  return DAT_14cb58150;
}



// FUNCTION 1464c0343 FUN_1464c0343 body=47 status=ok
// SIG undefined FUN_1464c0343(void)

longlong FUN_1464c0343(void)

{
  if (DAT_14cb580e8 == 0) {
    FUN_14000fc22(&DAT_14cb580e8,&PTR_FUN_14b06e5b0);
  }
  return DAT_14cb580e8;
}



// FUNCTION 1464c0372 FUN_1464c0372 body=47 status=ok
// SIG undefined FUN_1464c0372(void)

longlong FUN_1464c0372(void)

{
  if (DAT_14cb580f0 == 0) {
    FUN_14000fc22(&DAT_14cb580f0,&PTR_FUN_14b06e6d8);
  }
  return DAT_14cb580f0;
}



// FUNCTION 1464c03a1 FUN_1464c03a1 body=47 status=ok
// SIG undefined FUN_1464c03a1(void)

longlong FUN_1464c03a1(void)

{
  if (DAT_14cb580f8 == 0) {
    FUN_14000fc22(&DAT_14cb580f8,&PTR_FUN_14b06e7d0);
  }
  return DAT_14cb580f8;
}



// FUNCTION 1464c03d0 FUN_1464c03d0 body=47 status=ok
// SIG undefined FUN_1464c03d0(void)

longlong FUN_1464c03d0(void)

{
  if (DAT_14cb58100 == 0) {
    FUN_14000fc22(&DAT_14cb58100,&PTR_FUN_14b06e8a8);
  }
  return DAT_14cb58100;
}



// FUNCTION 1464c03ff FUN_1464c03ff body=47 status=ok
// SIG undefined FUN_1464c03ff(void)

longlong FUN_1464c03ff(void)

{
  if (DAT_14cb58108 == 0) {
    FUN_14000fc22(&DAT_14cb58108,&PTR_FUN_14b06e998);
  }
  return DAT_14cb58108;
}



// FUNCTION 1464c042e FUN_1464c042e body=47 status=ok
// SIG undefined FUN_1464c042e(void)

longlong FUN_1464c042e(void)

{
  if (DAT_14cb58110 == 0) {
    FUN_14000fc22(&DAT_14cb58110,&PTR_FUN_14b06ead8);
  }
  return DAT_14cb58110;
}



// FUNCTION 1464c045d FUN_1464c045d body=47 status=ok
// SIG undefined FUN_1464c045d(void)

longlong FUN_1464c045d(void)

{
  if (DAT_14cb58118 == 0) {
    FUN_14000fc22(&DAT_14cb58118,&PTR_FUN_14b06ec18);
  }
  return DAT_14cb58118;
}



// FUNCTION 1464c048c FUN_1464c048c body=47 status=ok
// SIG undefined FUN_1464c048c(void)

longlong FUN_1464c048c(void)

{
  if (DAT_14cb58120 == 0) {
    FUN_14000fc22(&DAT_14cb58120,&PTR_FUN_14b06ed48);
  }
  return DAT_14cb58120;
}



// FUNCTION 1464c04bb FUN_1464c04bb body=47 status=ok
// SIG undefined FUN_1464c04bb(void)

longlong FUN_1464c04bb(void)

{
  if (DAT_14cb58128 == 0) {
    FUN_14000fc22(&DAT_14cb58128,&PTR_FUN_14b06ee78);
  }
  return DAT_14cb58128;
}



// FUNCTION 1464c04ea FUN_1464c04ea body=47 status=ok
// SIG undefined FUN_1464c04ea(void)

longlong FUN_1464c04ea(void)

{
  if (DAT_14cb58130 == 0) {
    FUN_14000fc22(&DAT_14cb58130,&PTR_FUN_14b06ef58);
  }
  return DAT_14cb58130;
}



// FUNCTION 1464c0519 FUN_1464c0519 body=47 status=ok
// SIG undefined FUN_1464c0519(void)

longlong FUN_1464c0519(void)

{
  if (DAT_14cb58138 == 0) {
    FUN_14000fc22(&DAT_14cb58138,&PTR_FUN_14b06f048);
  }
  return DAT_14cb58138;
}



// FUNCTION 1464c0548 FUN_1464c0548 body=47 status=ok
// SIG undefined FUN_1464c0548(void)

longlong FUN_1464c0548(void)

{
  if (DAT_14cb58140 == 0) {
    FUN_14000fc22(&DAT_14cb58140,&PTR_FUN_14b06f188);
  }
  return DAT_14cb58140;
}



// FUNCTION 1464c0578 FUN_1464c0578 body=34 status=ok
// SIG undefined FUN_1464c0578(void)

void FUN_1464c0578(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7f6ea();
  FUN_14069c8d6(uVar1,&PTR_s_CreateActivityRequest_14b06f1d0,0xc);
  return;
}



// FUNCTION 1464c059a FUN_1464c059a body=35 status=ok
// SIG undefined FUN_1464c059a(void)

void FUN_1464c059a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b06f3f0;
  return;
}



// FUNCTION 1464c05bd FUN_1464c05bd body=47 status=ok
// SIG undefined FUN_1464c05bd(void)

longlong FUN_1464c05bd(void)

{
  if (DAT_14cb58160 == 0) {
    FUN_1409ce572(&DAT_14cb58160,&PTR_FUN_14b06f700);
  }
  return DAT_14cb58160;
}



// FUNCTION 1464c05ec FUN_1464c05ec body=47 status=ok
// SIG undefined FUN_1464c05ec(void)

longlong FUN_1464c05ec(void)

{
  if (DAT_14cb58178 == 0) {
    FUN_1409ce572(&DAT_14cb58178,&PTR_FUN_14b06f770);
  }
  return DAT_14cb58178;
}



// FUNCTION 1464c061c FUN_1464c061c body=55 status=ok
// SIG undefined FUN_1464c061c(void)

void FUN_1464c061c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58198 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58198 = FUN_140002ddd(FUN_1464c0653,uVar1,L"ActivityProbability");
  }
  return;
}



// FUNCTION 1464c0653 FUN_1464c0653 body=47 status=ok
// SIG undefined FUN_1464c0653(void)

longlong FUN_1464c0653(void)

{
  if (DAT_14cb58190 == 0) {
    FUN_14086a14e(&DAT_14cb58190,&PTR_FUN_14b06fa10);
  }
  return DAT_14cb58190;
}



// FUNCTION 1464c0682 FUN_1464c0682 body=48 status=ok
// SIG undefined FUN_1464c0682(void)

void FUN_1464c0682(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14b071230;
  return;
}



// FUNCTION 1464c06b2 FUN_1464c06b2 body=49 status=ok
// SIG undefined FUN_1464c06b2(void)

longlong FUN_1464c06b2(void)

{
  if (DAT_14cb581a8 == 0) {
    FUN_14086a14e(&DAT_14cb581a8,&PTR_FUN_14b070198);
  }
  return DAT_14cb581a8;
}



// FUNCTION 1464c06e4 FUN_1464c06e4 body=48 status=ok
// SIG undefined FUN_1464c06e4(void)

void FUN_1464c06e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000290;
  *puVar1 = &PTR_FUN_14b071390;
  return;
}



// FUNCTION 1464c0714 FUN_1464c0714 body=40 status=ok
// SIG undefined FUN_1464c0714(void)

undefined8 FUN_1464c0714(undefined8 param_1,int param_2)

{
  FUN_1458e2c6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c073c FUN_1464c073c body=62 status=ok
// SIG undefined FUN_1464c073c(void)

undefined8 * FUN_1464c073c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b06aab0;
  FUN_1411f36fa(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c077a FUN_1464c077a body=40 status=ok
// SIG undefined FUN_1464c077a(void)

undefined8 FUN_1464c077a(undefined8 param_1,int param_2)

{
  FUN_1414ba612();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c07a2 FUN_1464c07a2 body=40 status=ok
// SIG undefined FUN_1464c07a2(void)

undefined8 FUN_1464c07a2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c07ca FUN_1464c07ca body=40 status=ok
// SIG undefined FUN_1464c07ca(void)

undefined8 FUN_1464c07ca(undefined8 param_1,int param_2)

{
  FUN_140cb4f02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c07f2 FUN_1464c07f2 body=40 status=ok
// SIG undefined FUN_1464c07f2(void)

undefined8 FUN_1464c07f2(undefined8 param_1,int param_2)

{
  FUN_140e01364();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c081a FUN_1464c081a body=40 status=ok
// SIG undefined FUN_1464c081a(void)

undefined8 FUN_1464c081a(undefined8 param_1,int param_2)

{
  FUN_14034d9a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c0842 FUN_1464c0842 body=40 status=ok
// SIG undefined FUN_1464c0842(void)

undefined8 FUN_1464c0842(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c086a FUN_1464c086a body=40 status=ok
// SIG undefined FUN_1464c086a(void)

undefined8 FUN_1464c086a(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c0892 FUN_1464c0892 body=40 status=ok
// SIG undefined FUN_1464c0892(void)

undefined8 FUN_1464c0892(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c08ba FUN_1464c08ba body=40 status=ok
// SIG undefined FUN_1464c08ba(void)

undefined8 FUN_1464c08ba(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c08e2 FUN_1464c08e2 body=34 status=ok
// SIG undefined FUN_1464c08e2(void)

undefined8 FUN_1464c08e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c0904 FUN_1464c0904 body=34 status=ok
// SIG undefined FUN_1464c0904(void)

undefined8 FUN_1464c0904(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c0926 FUN_1464c0926 body=34 status=ok
// SIG undefined FUN_1464c0926(void)

undefined8 FUN_1464c0926(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c0948 FUN_1464c0948 body=34 status=ok
// SIG undefined FUN_1464c0948(void)

undefined8 FUN_1464c0948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c096a FUN_1464c096a body=34 status=ok
// SIG undefined FUN_1464c096a(void)

undefined8 FUN_1464c096a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c098c FUN_1464c098c body=34 status=ok
// SIG undefined FUN_1464c098c(void)

undefined8 FUN_1464c098c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c09ae FUN_1464c09ae body=34 status=ok
// SIG undefined FUN_1464c09ae(void)

undefined8 FUN_1464c09ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c09d0 FUN_1464c09d0 body=34 status=ok
// SIG undefined FUN_1464c09d0(void)

undefined8 FUN_1464c09d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c09f2 FUN_1464c09f2 body=34 status=ok
// SIG undefined FUN_1464c09f2(void)

undefined8 FUN_1464c09f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c0a14 FUN_1464c0a14 body=34 status=ok
// SIG undefined FUN_1464c0a14(void)

undefined8 FUN_1464c0a14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c0a36 FUN_1464c0a36 body=34 status=ok
// SIG undefined FUN_1464c0a36(void)

undefined8 FUN_1464c0a36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c0a58 FUN_1464c0a58 body=34 status=ok
// SIG undefined FUN_1464c0a58(void)

undefined8 FUN_1464c0a58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464c0a7a FUN_1464c0a7a body=55 status=ok
// SIG undefined FUN_1464c0a7a(void)

void FUN_1464c0a7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb581c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb581c8 = FUN_140002ddd(FUN_1464c0ab1,uVar1,L"GbxActivityEffect");
  }
  return;
}



// FUNCTION 1464c0ab1 FUN_1464c0ab1 body=47 status=ok
// SIG undefined FUN_1464c0ab1(void)

longlong FUN_1464c0ab1(void)

{
  if (DAT_14cb581c0 == 0) {
    FUN_14086a14e(&DAT_14cb581c0,&PTR_FUN_14b075700);
  }
  return DAT_14cb581c0;
}



// FUNCTION 1464c0ae0 FUN_1464c0ae0 body=48 status=ok
// SIG undefined FUN_1464c0ae0(void)

void FUN_1464c0ae0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b07bee0;
  return;
}



// FUNCTION 1464c0b10 FUN_1464c0b10 body=47 status=ok
// SIG undefined FUN_1464c0b10(void)

longlong FUN_1464c0b10(void)

{
  if (DAT_14cb581d8 == 0) {
    FUN_14086a14e(&DAT_14cb581d8,&PTR_FUN_14b075808);
  }
  return DAT_14cb581d8;
}



// FUNCTION 1464c0b40 FUN_1464c0b40 body=48 status=ok
// SIG undefined FUN_1464c0b40(void)

void FUN_1464c0b40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b07c050;
  return;
}



// FUNCTION 1464c0b70 FUN_1464c0b70 body=55 status=ok
// SIG undefined FUN_1464c0b70(void)

void FUN_1464c0b70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58200 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58200 = FUN_140002ddd(FUN_1464c0ba7,uVar1,L"ActivityDataByRegion");
  }
  return;
}



// FUNCTION 1464c0ba7 FUN_1464c0ba7 body=47 status=ok
// SIG undefined FUN_1464c0ba7(void)

longlong FUN_1464c0ba7(void)

{
  if (DAT_14cb581f8 == 0) {
    FUN_14086a14e(&DAT_14cb581f8,&PTR_FUN_14b075ab8);
  }
  return DAT_14cb581f8;
}



// FUNCTION 1464c0bd6 FUN_1464c0bd6 body=48 status=ok
// SIG undefined FUN_1464c0bd6(void)

void FUN_1464c0bd6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a0;
  *puVar1 = &PTR_FUN_14b07c1c0;
  return;
}



// FUNCTION 1464c0c06 FUN_1464c0c06 body=55 status=ok
// SIG undefined FUN_1464c0c06(void)

void FUN_1464c0c06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58218 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58218 = FUN_140002ddd(FUN_1464c0c3d,uVar1,L"GbxActivityGlobals");
  }
  return;
}



// FUNCTION 1464c0c3d FUN_1464c0c3d body=47 status=ok
// SIG undefined FUN_1464c0c3d(void)

longlong FUN_1464c0c3d(void)

{
  if (DAT_14cb58210 == 0) {
    FUN_14086a14e(&DAT_14cb58210,&PTR_FUN_14b0761c8);
  }
  return DAT_14cb58210;
}



// FUNCTION 1464c0c6c FUN_1464c0c6c body=48 status=ok
// SIG undefined FUN_1464c0c6c(void)

void FUN_1464c0c6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000002c8;
  *puVar1 = &PTR_FUN_14b07c320;
  return;
}



// FUNCTION 1464c0c9c FUN_1464c0c9c body=47 status=ok
// SIG undefined FUN_1464c0c9c(void)

longlong FUN_1464c0c9c(void)

{
  if (DAT_14cb58238 == 0) {
    FUN_14073dd9a(&DAT_14cb58238,&PTR_LAB_14b076450);
  }
  return DAT_14cb58238;
}



// FUNCTION 1464c0ccb FUN_1464c0ccb body=47 status=ok
// SIG undefined FUN_1464c0ccb(void)

longlong FUN_1464c0ccb(void)

{
  if (DAT_14cb58228 == 0) {
    FUN_14000fc22(&DAT_14cb58228,&PTR_FUN_14b0762c8);
  }
  return DAT_14cb58228;
}



// FUNCTION 1464c0cfa FUN_1464c0cfa body=34 status=ok
// SIG undefined FUN_1464c0cfa(void)

void FUN_1464c0cfa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7f7d6();
  FUN_14069c8d6(uVar1,&PTR_s_OverrideHeightmapMaterialParamVa_14b076310,1);
  return;
}



// FUNCTION 1464c0d1c FUN_1464c0d1c body=47 status=ok
// SIG undefined FUN_1464c0d1c(void)

longlong FUN_1464c0d1c(void)

{
  if (DAT_14cb58250 == 0) {
    FUN_14073dd9a(&DAT_14cb58250,&PTR_LAB_14b076b58);
  }
  return DAT_14cb58250;
}



// FUNCTION 1464c0d4c FUN_1464c0d4c body=55 status=ok
// SIG undefined FUN_1464c0d4c(void)

void FUN_1464c0d4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58268 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58268 = FUN_140002ddd(FUN_1464c0d83,uVar1,L"DesiredLayoutByName");
  }
  return;
}



// FUNCTION 1464c0d83 FUN_1464c0d83 body=47 status=ok
// SIG undefined FUN_1464c0d83(void)

longlong FUN_1464c0d83(void)

{
  if (DAT_14cb58260 == 0) {
    FUN_14086a14e(&DAT_14cb58260,&PTR_FUN_14b076ca8);
  }
  return DAT_14cb58260;
}



// FUNCTION 1464c0db2 FUN_1464c0db2 body=48 status=ok
// SIG undefined FUN_1464c0db2(void)

void FUN_1464c0db2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b07c480;
  return;
}



// FUNCTION 1464c0de2 FUN_1464c0de2 body=55 status=ok
// SIG undefined FUN_1464c0de2(void)

void FUN_1464c0de2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58280 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58280 = FUN_140002ddd(FUN_1464c0e19,uVar1,L"GbxActivityMapInitializationDef");
  }
  return;
}



// FUNCTION 1464c0e19 FUN_1464c0e19 body=47 status=ok
// SIG undefined FUN_1464c0e19(void)

longlong FUN_1464c0e19(void)

{
  if (DAT_14cb58278 == 0) {
    FUN_14086a14e(&DAT_14cb58278,&PTR_FUN_14b076e48);
  }
  return DAT_14cb58278;
}



// FUNCTION 1464c0e48 FUN_1464c0e48 body=48 status=ok
// SIG undefined FUN_1464c0e48(void)

void FUN_1464c0e48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b07c5e0;
  return;
}



// FUNCTION 1464c0e78 FUN_1464c0e78 body=47 status=ok
// SIG undefined FUN_1464c0e78(void)

longlong FUN_1464c0e78(void)

{
  if (DAT_14cb58298 == 0) {
    FUN_14073dd9a(&DAT_14cb58298,&PTR_LAB_14b076ef8);
  }
  return DAT_14cb58298;
}



// FUNCTION 1464c0ea7 FUN_1464c0ea7 body=47 status=ok
// SIG undefined FUN_1464c0ea7(void)

longlong FUN_1464c0ea7(void)

{
  if (DAT_14cb582b0 == 0) {
    FUN_14073dd9a(&DAT_14cb582b0,&PTR_LAB_14b077008);
  }
  return DAT_14cb582b0;
}



// FUNCTION 1464c0edb FUN_1464c0edb body=47 status=ok
// SIG undefined FUN_1464c0edb(void)

longlong FUN_1464c0edb(void)

{
  if (DAT_14cb582c8 == 0) {
    FUN_14073dd9a(&DAT_14cb582c8,&PTR_LAB_14b077648);
  }
  return DAT_14cb582c8;
}



// FUNCTION 1464c0f0a FUN_1464c0f0a body=47 status=ok
// SIG undefined FUN_1464c0f0a(void)

longlong FUN_1464c0f0a(void)

{
  if (DAT_14cb582d8 == 0) {
    FUN_1409ce572(&DAT_14cb582d8,&PTR_FUN_14b077710);
  }
  return DAT_14cb582d8;
}



// FUNCTION 1464c0f39 FUN_1464c0f39 body=35 status=ok
// SIG undefined FUN_1464c0f39(void)

void FUN_1464c0f39(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0777e0;
  return;
}



// FUNCTION 1464c0f61 FUN_1464c0f61 body=47 status=ok
// SIG undefined FUN_1464c0f61(void)

longlong FUN_1464c0f61(void)

{
  if (DAT_14cb582f8 == 0) {
    FUN_14073dd9a(&DAT_14cb582f8,&PTR_LAB_14b077798);
  }
  return DAT_14cb582f8;
}



// FUNCTION 1464c0f90 FUN_1464c0f90 body=55 status=ok
// SIG undefined FUN_1464c0f90(void)

void FUN_1464c0f90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58310 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58310 = FUN_140002ddd(FUN_1464c0fc7,uVar1,L"ActivitySerialNumber");
  }
  return;
}



// FUNCTION 1464c0fc7 FUN_1464c0fc7 body=47 status=ok
// SIG undefined FUN_1464c0fc7(void)

longlong FUN_1464c0fc7(void)

{
  if (DAT_14cb58308 == 0) {
    FUN_14086a14e(&DAT_14cb58308,&PTR_FUN_14b077b08);
  }
  return DAT_14cb58308;
}



// FUNCTION 1464c0ff6 FUN_1464c0ff6 body=48 status=ok
// SIG undefined FUN_1464c0ff6(void)

void FUN_1464c0ff6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14b07c7d0;
  return;
}



// FUNCTION 1464c1026 FUN_1464c1026 body=47 status=ok
// SIG undefined FUN_1464c1026(void)

longlong FUN_1464c1026(void)

{
  if (DAT_14cb58328 == 0) {
    FUN_14073dd9a(&DAT_14cb58328,&PTR_LAB_14b077d38);
  }
  return DAT_14cb58328;
}



// FUNCTION 1464c1055 FUN_1464c1055 body=47 status=ok
// SIG undefined FUN_1464c1055(void)

longlong FUN_1464c1055(void)

{
  if (DAT_14cb58348 == 0) {
    FUN_14073dd9a(&DAT_14cb58348,&PTR_LAB_14b077fb0);
  }
  return DAT_14cb58348;
}



// FUNCTION 1464c1084 FUN_1464c1084 body=47 status=ok
// SIG undefined FUN_1464c1084(void)

longlong FUN_1464c1084(void)

{
  if (DAT_14cb58338 == 0) {
    FUN_14000fc22(&DAT_14cb58338,&PTR_FUN_14b077dc0);
  }
  return DAT_14cb58338;
}



// FUNCTION 1464c10b4 FUN_1464c10b4 body=34 status=ok
// SIG undefined FUN_1464c10b4(void)

void FUN_1464c10b4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7f8c2();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_ReplicatedFXData_14b077e00,1);
  return;
}



// FUNCTION 1464c10d6 FUN_1464c10d6 body=47 status=ok
// SIG undefined FUN_1464c10d6(void)

longlong FUN_1464c10d6(void)

{
  if (DAT_14cb583e8 == 0) {
    FUN_1409ce572(&DAT_14cb583e8,&PTR_FUN_14b078090);
  }
  return DAT_14cb583e8;
}



// FUNCTION 1464c1105 FUN_1464c1105 body=47 status=ok
// SIG undefined FUN_1464c1105(void)

longlong FUN_1464c1105(void)

{
  if (DAT_14cb58400 == 0) {
    FUN_1409ce572(&DAT_14cb58400,&PTR_FUN_14b078100);
  }
  return DAT_14cb58400;
}



// FUNCTION 1464c1134 FUN_1464c1134 body=35 status=ok
// SIG undefined FUN_1464c1134(void)

void FUN_1464c1134(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b078210;
  return;
}



// FUNCTION 1464c1161 FUN_1464c1161 body=47 status=ok
// SIG undefined FUN_1464c1161(void)

longlong FUN_1464c1161(void)

{
  if (DAT_14cb58420 == 0) {
    FUN_14073dd9a(&DAT_14cb58420,&PTR_LAB_14b0781c8);
  }
  return DAT_14cb58420;
}



// FUNCTION 1464c119b FUN_1464c119b body=47 status=ok
// SIG undefined FUN_1464c119b(void)

longlong FUN_1464c119b(void)

{
  if (DAT_14cb58448 == 0) {
    FUN_14073dd9a(&DAT_14cb58448,&PTR_LAB_14b078528);
  }
  return DAT_14cb58448;
}



// FUNCTION 1464c11ca FUN_1464c11ca body=47 status=ok
// SIG undefined FUN_1464c11ca(void)

longlong FUN_1464c11ca(void)

{
  if (DAT_14cb58458 == 0) {
    FUN_1409ce572(&DAT_14cb58458,&PTR_FUN_14b0785e0);
  }
  return DAT_14cb58458;
}



// FUNCTION 1464c11fa FUN_1464c11fa body=55 status=ok
// SIG undefined FUN_1464c11fa(void)

void FUN_1464c11fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58478 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58478 = FUN_140002ddd(FUN_1464c1231,uVar1,L"GbxActorPartDebugItem");
  }
  return;
}



// FUNCTION 1464c1231 FUN_1464c1231 body=47 status=ok
// SIG undefined FUN_1464c1231(void)

longlong FUN_1464c1231(void)

{
  if (DAT_14cb58470 == 0) {
    FUN_14086a14e(&DAT_14cb58470,&PTR_FUN_14b078870);
  }
  return DAT_14cb58470;
}



// FUNCTION 1464c1260 FUN_1464c1260 body=49 status=ok
// SIG undefined FUN_1464c1260(void)

longlong FUN_1464c1260(void)

{
  if (DAT_14cb584d0 == 0) {
    FUN_14086a14e(&DAT_14cb584d0,&PTR_FUN_14b078d90);
  }
  return DAT_14cb584d0;
}



// FUNCTION 1464c1292 FUN_1464c1292 body=48 status=ok
// SIG undefined FUN_1464c1292(void)

void FUN_1464c1292(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b07cb20;
  return;
}



// FUNCTION 1464c12c2 FUN_1464c12c2 body=55 status=ok
// SIG undefined FUN_1464c12c2(void)

void FUN_1464c12c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58490 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58490 = FUN_140002ddd(FUN_1464c12f9,uVar1,L"GbxActorPartInsertInfo");
  }
  return;
}



// FUNCTION 1464c12f9 FUN_1464c12f9 body=49 status=ok
// SIG undefined FUN_1464c12f9(void)

longlong FUN_1464c12f9(void)

{
  if (DAT_14cb58488 == 0) {
    FUN_14086a14e(&DAT_14cb58488,&PTR_FUN_14b078940);
  }
  return DAT_14cb58488;
}



// FUNCTION 1464c132a FUN_1464c132a body=48 status=ok
// SIG undefined FUN_1464c132a(void)

void FUN_1464c132a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b07cc80;
  return;
}



// FUNCTION 1464c135a FUN_1464c135a body=55 status=ok
// SIG undefined FUN_1464c135a(void)

void FUN_1464c135a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb584a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb584a8 = FUN_140002ddd(FUN_1464c1391,uVar1,L"GbxActorPartInsertItem");
  }
  return;
}



// FUNCTION 1464c1391 FUN_1464c1391 body=47 status=ok
// SIG undefined FUN_1464c1391(void)

longlong FUN_1464c1391(void)

{
  if (DAT_14cb584a0 == 0) {
    FUN_14086a14e(&DAT_14cb584a0,&PTR_FUN_14b078a58);
  }
  return DAT_14cb584a0;
}



// FUNCTION 1464c13c0 FUN_1464c13c0 body=48 status=ok
// SIG undefined FUN_1464c13c0(void)

void FUN_1464c13c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b07cdf0;
  return;
}



// FUNCTION 1464c13f0 FUN_1464c13f0 body=48 status=ok
// SIG undefined FUN_1464c13f0(void)

void FUN_1464c13f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b07cf50;
  return;
}



// FUNCTION 1464c1420 FUN_1464c1420 body=48 status=ok
// SIG undefined FUN_1464c1420(void)

void FUN_1464c1420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b07d0d0;
  return;
}



// FUNCTION 1464c1450 FUN_1464c1450 body=55 status=ok
// SIG undefined FUN_1464c1450(void)

void FUN_1464c1450(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb584f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb584f0 = FUN_140002ddd(FUN_1464c1487,uVar1,L"GbxActorPartAnimList");
  }
  return;
}



// FUNCTION 1464c1487 FUN_1464c1487 body=49 status=ok
// SIG undefined FUN_1464c1487(void)

longlong FUN_1464c1487(void)

{
  if (DAT_14cb584e8 == 0) {
    FUN_14086a14e(&DAT_14cb584e8,&PTR_FUN_14b078fa0);
  }
  return DAT_14cb584e8;
}



// FUNCTION 1464c14b8 FUN_1464c14b8 body=48 status=ok
// SIG undefined FUN_1464c14b8(void)

void FUN_1464c14b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b07d2c0;
  return;
}



// FUNCTION 1464c14e8 FUN_1464c14e8 body=55 status=ok
// SIG undefined FUN_1464c14e8(void)

void FUN_1464c14e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58508 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58508 = FUN_140002ddd(FUN_1464c151f,uVar1,L"GbxActorPartAnimSet");
  }
  return;
}



// FUNCTION 1464c151f FUN_1464c151f body=49 status=ok
// SIG undefined FUN_1464c151f(void)

longlong FUN_1464c151f(void)

{
  if (DAT_14cb58500 == 0) {
    FUN_14086a14e(&DAT_14cb58500,&PTR_FUN_14b079168);
  }
  return DAT_14cb58500;
}



// FUNCTION 1464c1550 FUN_1464c1550 body=48 status=ok
// SIG undefined FUN_1464c1550(void)

void FUN_1464c1550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14b07d420;
  return;
}



// FUNCTION 1464c1580 FUN_1464c1580 body=55 status=ok
// SIG undefined FUN_1464c1580(void)

void FUN_1464c1580(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58520 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58520 = FUN_140002ddd(FUN_1464c15b7,uVar1,L"GbxActorPartAnimMatchSet");
  }
  return;
}



// FUNCTION 1464c15b7 FUN_1464c15b7 body=47 status=ok
// SIG undefined FUN_1464c15b7(void)

longlong FUN_1464c15b7(void)

{
  if (DAT_14cb58518 == 0) {
    FUN_14086a14e(&DAT_14cb58518,&PTR_FUN_14b079248);
  }
  return DAT_14cb58518;
}



// FUNCTION 1464c15e6 FUN_1464c15e6 body=48 status=ok
// SIG undefined FUN_1464c15e6(void)

void FUN_1464c15e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14b07d580;
  return;
}



// FUNCTION 1464c1616 FUN_1464c1616 body=47 status=ok
// SIG undefined FUN_1464c1616(void)

longlong FUN_1464c1616(void)

{
  if (DAT_14cb58530 == 0) {
    FUN_14086a14e(&DAT_14cb58530,&PTR_FUN_14b0793c0);
  }
  return DAT_14cb58530;
}



// FUNCTION 1464c1646 FUN_1464c1646 body=48 status=ok
// SIG undefined FUN_1464c1646(void)

void FUN_1464c1646(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000138;
  *puVar1 = &PTR_FUN_14b07d6e0;
  return;
}



// FUNCTION 1464c1676 FUN_1464c1676 body=47 status=ok
// SIG undefined FUN_1464c1676(void)

longlong FUN_1464c1676(void)

{
  if (DAT_14cb58548 == 0) {
    FUN_14086a14e(&DAT_14cb58548,&PTR_FUN_14b079448);
  }
  return DAT_14cb58548;
}



// FUNCTION 1464c16a6 FUN_1464c16a6 body=48 status=ok
// SIG undefined FUN_1464c16a6(void)

void FUN_1464c16a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b07d8d0;
  return;
}



// FUNCTION 1464c16d6 FUN_1464c16d6 body=47 status=ok
// SIG undefined FUN_1464c16d6(void)

longlong FUN_1464c16d6(void)

{
  if (DAT_14cb58560 == 0) {
    FUN_1409ce572(&DAT_14cb58560,&PTR_FUN_14b079590);
  }
  return DAT_14cb58560;
}



// FUNCTION 1464c1706 FUN_1464c1706 body=57 status=ok
// SIG undefined FUN_1464c1706(void)

void FUN_1464c1706(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58580 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58580 = FUN_140002ddd(FUN_1464c173f,uVar1,L"GbxActorPartDef_Body");
  }
  return;
}



// FUNCTION 1464c173f FUN_1464c173f body=47 status=ok
// SIG undefined FUN_1464c173f(void)

longlong FUN_1464c173f(void)

{
  if (DAT_14cb58578 == 0) {
    FUN_14086a14e(&DAT_14cb58578,&PTR_FUN_14b0796e0);
  }
  return DAT_14cb58578;
}



// FUNCTION 1464c176e FUN_1464c176e body=48 status=ok
// SIG undefined FUN_1464c176e(void)

void FUN_1464c176e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b07dad0;
  return;
}



// FUNCTION 1464c179e FUN_1464c179e body=47 status=ok
// SIG undefined FUN_1464c179e(void)

longlong FUN_1464c179e(void)

{
  if (DAT_14cb58590 == 0) {
    FUN_14086a14e(&DAT_14cb58590,&PTR_FUN_14b0799a8);
  }
  return DAT_14cb58590;
}



// FUNCTION 1464c17ce FUN_1464c17ce body=48 status=ok
// SIG undefined FUN_1464c17ce(void)

void FUN_1464c17ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a8;
  *puVar1 = &PTR_FUN_14b07dcc0;
  return;
}



// FUNCTION 1464c17fe FUN_1464c17fe body=55 status=ok
// SIG undefined FUN_1464c17fe(void)

void FUN_1464c17fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb585b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb585b0 = FUN_140002ddd(FUN_1464c1835,uVar1,L"GbxActorPartChecklistItem");
  }
  return;
}



// FUNCTION 1464c1835 FUN_1464c1835 body=47 status=ok
// SIG undefined FUN_1464c1835(void)

longlong FUN_1464c1835(void)

{
  if (DAT_14cb585a8 == 0) {
    FUN_14086a14e(&DAT_14cb585a8,&PTR_FUN_14b079af0);
  }
  return DAT_14cb585a8;
}



// FUNCTION 1464c1864 FUN_1464c1864 body=48 status=ok
// SIG undefined FUN_1464c1864(void)

void FUN_1464c1864(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b07deb0;
  return;
}



// FUNCTION 1464c1894 FUN_1464c1894 body=55 status=ok
// SIG undefined FUN_1464c1894(void)

void FUN_1464c1894(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb585c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb585c8 = FUN_140002ddd(FUN_1464c18cb,uVar1,L"GbxActorPartDef_Checklist");
  }
  return;
}



// FUNCTION 1464c18cb FUN_1464c18cb body=47 status=ok
// SIG undefined FUN_1464c18cb(void)

longlong FUN_1464c18cb(void)

{
  if (DAT_14cb585c0 == 0) {
    FUN_14086a14e(&DAT_14cb585c0,&PTR_FUN_14b079c10);
  }
  return DAT_14cb585c0;
}



// FUNCTION 1464c18fa FUN_1464c18fa body=48 status=ok
// SIG undefined FUN_1464c18fa(void)

void FUN_1464c18fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14b07e010;
  return;
}



// FUNCTION 1464c192a FUN_1464c192a body=55 status=ok
// SIG undefined FUN_1464c192a(void)

void FUN_1464c192a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb585e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb585e0 = FUN_140002ddd(FUN_1464c1961,uVar1,L"AnimTaggedDialogEvent");
  }
  return;
}



// FUNCTION 1464c1961 FUN_1464c1961 body=47 status=ok
// SIG undefined FUN_1464c1961(void)

longlong FUN_1464c1961(void)

{
  if (DAT_14cb585d8 == 0) {
    FUN_14086a14e(&DAT_14cb585d8,&PTR_FUN_14b079dd0);
  }
  return DAT_14cb585d8;
}



// FUNCTION 1464c1990 FUN_1464c1990 body=48 status=ok
// SIG undefined FUN_1464c1990(void)

void FUN_1464c1990(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b07e200;
  return;
}



// FUNCTION 1464c19c0 FUN_1464c19c0 body=55 status=ok
// SIG undefined FUN_1464c19c0(void)

void FUN_1464c19c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb585f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb585f8 = FUN_140002ddd(FUN_1464c19f7,uVar1,L"ActorTaggedDialogEventList");
  }
  return;
}



// FUNCTION 1464c19f7 FUN_1464c19f7 body=47 status=ok
// SIG undefined FUN_1464c19f7(void)

longlong FUN_1464c19f7(void)

{
  if (DAT_14cb585f0 == 0) {
    FUN_14086a14e(&DAT_14cb585f0,&PTR_FUN_14b079f58);
  }
  return DAT_14cb585f0;
}



// FUNCTION 1464c1a26 FUN_1464c1a26 body=48 status=ok
// SIG undefined FUN_1464c1a26(void)

void FUN_1464c1a26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b07e360;
  return;
}



// FUNCTION 1464c1a56 FUN_1464c1a56 body=47 status=ok
// SIG undefined FUN_1464c1a56(void)

longlong FUN_1464c1a56(void)

{
  if (DAT_14cb58608 == 0) {
    FUN_14086a14e(&DAT_14cb58608,&PTR_FUN_14b07a090);
  }
  return DAT_14cb58608;
}



// FUNCTION 1464c1a86 FUN_1464c1a86 body=48 status=ok
// SIG undefined FUN_1464c1a86(void)

void FUN_1464c1a86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14b07e4c0;
  return;
}



// FUNCTION 1464c1ab6 FUN_1464c1ab6 body=55 status=ok
// SIG undefined FUN_1464c1ab6(void)

void FUN_1464c1ab6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58628 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58628 = FUN_140002ddd(FUN_1464c1aed,uVar1,L"GbxDialogSpeakerInfo");
  }
  return;
}



// FUNCTION 1464c1aed FUN_1464c1aed body=47 status=ok
// SIG undefined FUN_1464c1aed(void)

longlong FUN_1464c1aed(void)

{
  if (DAT_14cb58620 == 0) {
    FUN_14086a14e(&DAT_14cb58620,&PTR_FUN_14b07a1e0);
  }
  return DAT_14cb58620;
}



// FUNCTION 1464c1b1c FUN_1464c1b1c body=48 status=ok
// SIG undefined FUN_1464c1b1c(void)

void FUN_1464c1b1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b07e6b0;
  return;
}



// FUNCTION 1464c1b4c FUN_1464c1b4c body=55 status=ok
// SIG undefined FUN_1464c1b4c(void)

void FUN_1464c1b4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58640 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58640 = FUN_140002ddd(FUN_1464c1b83,uVar1,L"ActorTaggedDialogNameData");
  }
  return;
}



// FUNCTION 1464c1b83 FUN_1464c1b83 body=47 status=ok
// SIG undefined FUN_1464c1b83(void)

longlong FUN_1464c1b83(void)

{
  if (DAT_14cb58638 == 0) {
    FUN_14086a14e(&DAT_14cb58638,&PTR_FUN_14b07a358);
  }
  return DAT_14cb58638;
}



// FUNCTION 1464c1bb2 FUN_1464c1bb2 body=48 status=ok
// SIG undefined FUN_1464c1bb2(void)

void FUN_1464c1bb2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b07e820;
  return;
}



// FUNCTION 1464c1be2 FUN_1464c1be2 body=47 status=ok
// SIG undefined FUN_1464c1be2(void)

longlong FUN_1464c1be2(void)

{
  if (DAT_14cb58650 == 0) {
    FUN_14086a14e(&DAT_14cb58650,&PTR_FUN_14b07a490);
  }
  return DAT_14cb58650;
}



// FUNCTION 1464c1c12 FUN_1464c1c12 body=48 status=ok
// SIG undefined FUN_1464c1c12(void)

void FUN_1464c1c12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14b07e980;
  return;
}



// FUNCTION 1464c1c42 FUN_1464c1c42 body=55 status=ok
// SIG undefined FUN_1464c1c42(void)

void FUN_1464c1c42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58670 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58670 = FUN_140002ddd(FUN_1464c1c79,uVar1,L"ActorTaggedFaceFXData");
  }
  return;
}



// FUNCTION 1464c1c79 FUN_1464c1c79 body=47 status=ok
// SIG undefined FUN_1464c1c79(void)

longlong FUN_1464c1c79(void)

{
  if (DAT_14cb58668 == 0) {
    FUN_14086a14e(&DAT_14cb58668,&PTR_FUN_14b07a628);
  }
  return DAT_14cb58668;
}



// FUNCTION 1464c1ca8 FUN_1464c1ca8 body=48 status=ok
// SIG undefined FUN_1464c1ca8(void)

void FUN_1464c1ca8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b07eb70;
  return;
}



// FUNCTION 1464c1cd8 FUN_1464c1cd8 body=47 status=ok
// SIG undefined FUN_1464c1cd8(void)

longlong FUN_1464c1cd8(void)

{
  if (DAT_14cb58680 == 0) {
    FUN_14086a14e(&DAT_14cb58680,&PTR_FUN_14b07a748);
  }
  return DAT_14cb58680;
}



// FUNCTION 1464c1d08 FUN_1464c1d08 body=48 status=ok
// SIG undefined FUN_1464c1d08(void)

void FUN_1464c1d08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14b07ecd0;
  return;
}



// FUNCTION 1464c1d38 FUN_1464c1d38 body=55 status=ok
// SIG undefined FUN_1464c1d38(void)

void FUN_1464c1d38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb586a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb586a0 = FUN_140002ddd(FUN_1464c1d6f,uVar1,L"GbxActorPartTaggedItem");
  }
  return;
}



// FUNCTION 1464c1d6f FUN_1464c1d6f body=47 status=ok
// SIG undefined FUN_1464c1d6f(void)

longlong FUN_1464c1d6f(void)

{
  if (DAT_14cb58698 == 0) {
    FUN_14086a14e(&DAT_14cb58698,&PTR_FUN_14b07a8a8);
  }
  return DAT_14cb58698;
}



// FUNCTION 1464c1d9e FUN_1464c1d9e body=48 status=ok
// SIG undefined FUN_1464c1d9e(void)

void FUN_1464c1d9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b07eec0;
  return;
}



// FUNCTION 1464c1dce FUN_1464c1dce body=47 status=ok
// SIG undefined FUN_1464c1dce(void)

longlong FUN_1464c1dce(void)

{
  if (DAT_14cb586b0 == 0) {
    FUN_14086a14e(&DAT_14cb586b0,&PTR_FUN_14b07a988);
  }
  return DAT_14cb586b0;
}



// FUNCTION 1464c1dfe FUN_1464c1dfe body=48 status=ok
// SIG undefined FUN_1464c1dfe(void)

void FUN_1464c1dfe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b07f020;
  return;
}



// FUNCTION 1464c1e2e FUN_1464c1e2e body=55 status=ok
// SIG undefined FUN_1464c1e2e(void)

void FUN_1464c1e2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb586d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb586d0 = FUN_140002ddd(FUN_1464c1e65,uVar1,L"GbxActorPartDef_Filter");
  }
  return;
}



// FUNCTION 1464c1e65 FUN_1464c1e65 body=47 status=ok
// SIG undefined FUN_1464c1e65(void)

longlong FUN_1464c1e65(void)

{
  if (DAT_14cb586c8 == 0) {
    FUN_14086a14e(&DAT_14cb586c8,&PTR_FUN_14b07aaf0);
  }
  return DAT_14cb586c8;
}



// FUNCTION 1464c1e94 FUN_1464c1e94 body=48 status=ok
// SIG undefined FUN_1464c1e94(void)

void FUN_1464c1e94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14b07f190;
  return;
}



// FUNCTION 1464c1ec4 FUN_1464c1ec4 body=47 status=ok
// SIG undefined FUN_1464c1ec4(void)

longlong FUN_1464c1ec4(void)

{
  if (DAT_14cb586e0 == 0) {
    FUN_1409ce572(&DAT_14cb586e0,&PTR_FUN_14b07ac00);
  }
  return DAT_14cb586e0;
}



// FUNCTION 1464c1ef4 FUN_1464c1ef4 body=55 status=ok
// SIG undefined FUN_1464c1ef4(void)

void FUN_1464c1ef4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58700 = FUN_140002ddd(FUN_1464c1f2b,uVar1,L"GbxActorPartGestaltList");
  }
  return;
}



// FUNCTION 1464c1f2b FUN_1464c1f2b body=47 status=ok
// SIG undefined FUN_1464c1f2b(void)

longlong FUN_1464c1f2b(void)

{
  if (DAT_14cb586f8 == 0) {
    FUN_14086a14e(&DAT_14cb586f8,&PTR_FUN_14b07ad08);
  }
  return DAT_14cb586f8;
}



// FUNCTION 1464c1f5a FUN_1464c1f5a body=48 status=ok
// SIG undefined FUN_1464c1f5a(void)

void FUN_1464c1f5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b07f430;
  return;
}



// FUNCTION 1464c1f8a FUN_1464c1f8a body=55 status=ok
// SIG undefined FUN_1464c1f8a(void)

void FUN_1464c1f8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58718 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58718 = FUN_140002ddd(FUN_1464c1fc1,uVar1,L"GbxActorPartGestaltSet");
  }
  return;
}



// FUNCTION 1464c1fc1 FUN_1464c1fc1 body=49 status=ok
// SIG undefined FUN_1464c1fc1(void)

longlong FUN_1464c1fc1(void)

{
  if (DAT_14cb58710 == 0) {
    FUN_14086a14e(&DAT_14cb58710,&PTR_FUN_14b07af20);
  }
  return DAT_14cb58710;
}



// FUNCTION 1464c1ff2 FUN_1464c1ff2 body=48 status=ok
// SIG undefined FUN_1464c1ff2(void)

void FUN_1464c1ff2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b07f590;
  return;
}



// FUNCTION 1464c2022 FUN_1464c2022 body=55 status=ok
// SIG undefined FUN_1464c2022(void)

void FUN_1464c2022(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58730 = FUN_140002ddd(FUN_1464c2059,uVar1,L"GbxActorPartGestaltMatchSet");
  }
  return;
}



// FUNCTION 1464c2059 FUN_1464c2059 body=47 status=ok
// SIG undefined FUN_1464c2059(void)

longlong FUN_1464c2059(void)

{
  if (DAT_14cb58728 == 0) {
    FUN_14086a14e(&DAT_14cb58728,&PTR_FUN_14b07aff8);
  }
  return DAT_14cb58728;
}



// FUNCTION 1464c2088 FUN_1464c2088 body=48 status=ok
// SIG undefined FUN_1464c2088(void)

void FUN_1464c2088(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14b07f6f0;
  return;
}



// FUNCTION 1464c20b8 FUN_1464c20b8 body=47 status=ok
// SIG undefined FUN_1464c20b8(void)

longlong FUN_1464c20b8(void)

{
  if (DAT_14cb58740 == 0) {
    FUN_14086a14e(&DAT_14cb58740,&PTR_FUN_14b07b3b8);
  }
  return DAT_14cb58740;
}



// FUNCTION 1464c20e8 FUN_1464c20e8 body=48 status=ok
// SIG undefined FUN_1464c20e8(void)

void FUN_1464c20e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a0;
  *puVar1 = &PTR_FUN_14b07f850;
  return;
}



// FUNCTION 1464c2118 FUN_1464c2118 body=47 status=ok
// SIG undefined FUN_1464c2118(void)

longlong FUN_1464c2118(void)

{
  if (DAT_14cb58758 == 0) {
    FUN_14086a14e(&DAT_14cb58758,&PTR_FUN_14b07b440);
  }
  return DAT_14cb58758;
}



// FUNCTION 1464c2148 FUN_1464c2148 body=48 status=ok
// SIG undefined FUN_1464c2148(void)

void FUN_1464c2148(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b07fa40;
  return;
}



// FUNCTION 1464c2178 FUN_1464c2178 body=47 status=ok
// SIG undefined FUN_1464c2178(void)

longlong FUN_1464c2178(void)

{
  if (DAT_14cb587b8 == 0) {
    FUN_14086a14e(&DAT_14cb587b8,&PTR_FUN_14b07bd48);
  }
  return DAT_14cb587b8;
}



// FUNCTION 1464c21a8 FUN_1464c21a8 body=48 status=ok
// SIG undefined FUN_1464c21a8(void)

void FUN_1464c21a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001e8;
  *puVar1 = &PTR_FUN_14b07ffc0;
  return;
}



// FUNCTION 1464c21d8 FUN_1464c21d8 body=47 status=ok
// SIG undefined FUN_1464c21d8(void)

longlong FUN_1464c21d8(void)

{
  if (DAT_14cb587d0 == 0) {
    FUN_14086a14e(&DAT_14cb587d0,&PTR_FUN_14b07bdd8);
  }
  return DAT_14cb587d0;
}



// FUNCTION 1464c2208 FUN_1464c2208 body=48 status=ok
// SIG undefined FUN_1464c2208(void)

void FUN_1464c2208(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b0801b0;
  return;
}



// FUNCTION 1464c2238 FUN_1464c2238 body=40 status=ok
// SIG undefined FUN_1464c2238(void)

undefined8 FUN_1464c2238(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2260 FUN_1464c2260 body=40 status=ok
// SIG undefined FUN_1464c2260(void)

undefined8 FUN_1464c2260(undefined8 param_1,int param_2)

{
  thunk_FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2288 FUN_1464c2288 body=40 status=ok
// SIG undefined FUN_1464c2288(void)

undefined8 FUN_1464c2288(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c22b0 FUN_1464c22b0 body=40 status=ok
// SIG undefined FUN_1464c22b0(void)

undefined8 FUN_1464c22b0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c22d8 FUN_1464c22d8 body=29 status=ok
// SIG undefined FUN_1464c22d8(void)

undefined8 FUN_1464c22d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c22f6 FUN_1464c22f6 body=29 status=ok
// SIG undefined FUN_1464c22f6(void)

undefined8 FUN_1464c22f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2314 FUN_1464c2314 body=29 status=ok
// SIG undefined FUN_1464c2314(void)

undefined8 FUN_1464c2314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2332 FUN_1464c2332 body=29 status=ok
// SIG undefined FUN_1464c2332(void)

undefined8 FUN_1464c2332(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2350 FUN_1464c2350 body=29 status=ok
// SIG undefined FUN_1464c2350(void)

undefined8 FUN_1464c2350(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c236e FUN_1464c236e body=29 status=ok
// SIG undefined FUN_1464c236e(void)

undefined8 FUN_1464c236e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c238c FUN_1464c238c body=29 status=ok
// SIG undefined FUN_1464c238c(void)

undefined8 FUN_1464c238c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c23aa FUN_1464c23aa body=29 status=ok
// SIG undefined FUN_1464c23aa(void)

undefined8 FUN_1464c23aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c23c8 FUN_1464c23c8 body=29 status=ok
// SIG undefined FUN_1464c23c8(void)

undefined8 FUN_1464c23c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c23e6 FUN_1464c23e6 body=29 status=ok
// SIG undefined FUN_1464c23e6(void)

undefined8 FUN_1464c23e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2404 FUN_1464c2404 body=29 status=ok
// SIG undefined FUN_1464c2404(void)

undefined8 FUN_1464c2404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2422 FUN_1464c2422 body=29 status=ok
// SIG undefined FUN_1464c2422(void)

undefined8 FUN_1464c2422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2440 FUN_1464c2440 body=29 status=ok
// SIG undefined FUN_1464c2440(void)

undefined8 FUN_1464c2440(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c245e FUN_1464c245e body=29 status=ok
// SIG undefined FUN_1464c245e(void)

undefined8 FUN_1464c245e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c247c FUN_1464c247c body=29 status=ok
// SIG undefined FUN_1464c247c(void)

undefined8 FUN_1464c247c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c249a FUN_1464c249a body=29 status=ok
// SIG undefined FUN_1464c249a(void)

undefined8 FUN_1464c249a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c24b8 FUN_1464c24b8 body=29 status=ok
// SIG undefined FUN_1464c24b8(void)

undefined8 FUN_1464c24b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c24d6 FUN_1464c24d6 body=29 status=ok
// SIG undefined FUN_1464c24d6(void)

undefined8 FUN_1464c24d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c24f4 FUN_1464c24f4 body=29 status=ok
// SIG undefined FUN_1464c24f4(void)

undefined8 FUN_1464c24f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464c2512 FUN_1464c2512 body=29 status=ok
// SIG undefined FUN_1464c2512(void)

undefined8 FUN_1464c2512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


