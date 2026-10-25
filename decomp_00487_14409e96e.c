// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14409e96e FUN_14409e96e body=55 status=ok
// SIG undefined FUN_14409e96e(void)

void FUN_14409e96e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1458 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1458 = FUN_140002ddd(FUN_14409e9a5,uVar1,L"TraitMissionList");
  }
  return;
}



// FUNCTION 14409e9a5 FUN_14409e9a5 body=47 status=ok
// SIG undefined FUN_14409e9a5(void)

longlong FUN_14409e9a5(void)

{
  if (DAT_14cbc1450 == 0) {
    FUN_14086a14e(&DAT_14cbc1450,&PTR_FUN_14b951ae8);
  }
  return DAT_14cbc1450;
}



// FUNCTION 14409e9d4 FUN_14409e9d4 body=48 status=ok
// SIG undefined FUN_14409e9d4(void)

void FUN_14409e9d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b956ae0;
  return;
}



// FUNCTION 14409ea04 FUN_14409ea04 body=55 status=ok
// SIG undefined FUN_14409ea04(void)

void FUN_14409ea04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1470 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1470 = FUN_140002ddd(FUN_14409ea3b,uVar1,L"TraitList");
  }
  return;
}



// FUNCTION 14409ea3b FUN_14409ea3b body=47 status=ok
// SIG undefined FUN_14409ea3b(void)

longlong FUN_14409ea3b(void)

{
  if (DAT_14cbc1468 == 0) {
    FUN_14086a14e(&DAT_14cbc1468,&PTR_FUN_14b951bd0);
  }
  return DAT_14cbc1468;
}



// FUNCTION 14409ea6a FUN_14409ea6a body=48 status=ok
// SIG undefined FUN_14409ea6a(void)

void FUN_14409ea6a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b956c40;
  return;
}



// FUNCTION 14409ea9a FUN_14409ea9a body=55 status=ok
// SIG undefined FUN_14409ea9a(void)

void FUN_14409ea9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1488 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1488 = FUN_140002ddd(FUN_14409ead1,uVar1,L"RewardsList");
  }
  return;
}



// FUNCTION 14409ead1 FUN_14409ead1 body=47 status=ok
// SIG undefined FUN_14409ead1(void)

longlong FUN_14409ead1(void)

{
  if (DAT_14cbc1480 == 0) {
    FUN_14086a14e(&DAT_14cbc1480,&PTR_FUN_14b951cc0);
  }
  return DAT_14cbc1480;
}



// FUNCTION 14409eb00 FUN_14409eb00 body=48 status=ok
// SIG undefined FUN_14409eb00(void)

void FUN_14409eb00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b956da0;
  return;
}



// FUNCTION 14409eb30 FUN_14409eb30 body=55 status=ok
// SIG undefined FUN_14409eb30(void)

void FUN_14409eb30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc14a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc14a0 = FUN_140002ddd(FUN_14409eb67,uVar1,L"WeeklyGlobals");
  }
  return;
}



// FUNCTION 14409eb67 FUN_14409eb67 body=47 status=ok
// SIG undefined FUN_14409eb67(void)

longlong FUN_14409eb67(void)

{
  if (DAT_14cbc1498 == 0) {
    FUN_14086a14e(&DAT_14cbc1498,&PTR_FUN_14b952148);
  }
  return DAT_14cbc1498;
}



// FUNCTION 14409eb96 FUN_14409eb96 body=48 status=ok
// SIG undefined FUN_14409eb96(void)

void FUN_14409eb96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b956f00;
  return;
}



// FUNCTION 14409ebc8 FUN_14409ebc8 body=227 status=ok
// SIG undefined FUN_14409ebc8(void)

longlong FUN_14409ebc8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc14b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_14409ecac;
    local_40 = FUN_14409ecaf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/OakGame",L"WeeklyManager",&DAT_14cbc14b0,&DAT_14409ebc6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc14b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409ecaf FUN_14409ecaf body=79 status=ok
// SIG undefined FUN_14409ecaf(void)

void FUN_14409ecaf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b9522d0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 14409ed03 FUN_14409ed03 body=47 status=ok
// SIG undefined FUN_14409ed03(void)

longlong FUN_14409ed03(void)

{
  if (DAT_14cbc14b8 == 0) {
    FUN_14073dd9a(&DAT_14cbc14b8,&PTR_LAB_14b952288);
  }
  return DAT_14cbc14b8;
}



// FUNCTION 14409ed32 FUN_14409ed32 body=55 status=ok
// SIG undefined FUN_14409ed32(void)

void FUN_14409ed32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1540 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1540 = FUN_14171c317(FUN_14409ed69,uVar1,L"EZiplineMovementDirectionRule");
  }
  return;
}



// FUNCTION 14409ed69 FUN_14409ed69 body=47 status=ok
// SIG undefined FUN_14409ed69(void)

longlong FUN_14409ed69(void)

{
  if (DAT_14cbc1538 == 0) {
    FUN_1409ce572(&DAT_14cbc1538,&PTR_FUN_14b952c70);
  }
  return DAT_14cbc1538;
}



// FUNCTION 14409ed98 FUN_14409ed98 body=55 status=ok
// SIG undefined FUN_14409ed98(void)

void FUN_14409ed98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1558 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1558 = FUN_14171c317(FUN_14409edcf,uVar1,L"EZiplineDismountPlacementType");
  }
  return;
}



// FUNCTION 14409edcf FUN_14409edcf body=47 status=ok
// SIG undefined FUN_14409edcf(void)

longlong FUN_14409edcf(void)

{
  if (DAT_14cbc1550 == 0) {
    FUN_1409ce572(&DAT_14cbc1550,&PTR_FUN_14b952cf0);
  }
  return DAT_14cbc1550;
}



// FUNCTION 14409edfe FUN_14409edfe body=55 status=ok
// SIG undefined FUN_14409edfe(void)

void FUN_14409edfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1570 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1570 = FUN_140002ddd(FUN_14409ee35,uVar1,L"ZiplineDismountSetting");
  }
  return;
}



// FUNCTION 14409ee35 FUN_14409ee35 body=47 status=ok
// SIG undefined FUN_14409ee35(void)

longlong FUN_14409ee35(void)

{
  if (DAT_14cbc1568 == 0) {
    FUN_14086a14e(&DAT_14cbc1568,&PTR_FUN_14b9530b8);
  }
  return DAT_14cbc1568;
}



// FUNCTION 14409ee76 FUN_14409ee76 body=48 status=ok
// SIG undefined FUN_14409ee76(void)

void FUN_14409ee76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b957760;
  return;
}



// FUNCTION 14409eea8 FUN_14409eea8 body=227 status=ok
// SIG undefined FUN_14409eea8(void)

longlong FUN_14409eea8(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc1580 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_14409ef8c;
    local_40 = FUN_14409ef8f;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x26b0;
    FUN_14081cfa3(L"/Script/OakGame",L"Zipline",&DAT_14cbc1580,&DAT_14409eea6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc1580;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409ef8f FUN_14409ef8f body=941 status=ok
// SIG undefined FUN_14409ef8f(void)

void FUN_14409ef8f(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_1;
  FUN_14064ffa8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9535e0;
  puVar1[0x72] = &PTR_FUN_14b953c50;
  puVar1[0x73] = &PTR_FUN_14b953c70;
  puVar1[0x74] = &PTR_FUN_14b953ca0;
  puVar1[0x75] = &PTR_FUN_14b953cb0;
  puVar1[0x76] = &PTR_FUN_14b953d20;
  puVar1[0x77] = &PTR_FUN_14b953d50;
  puVar1[0x78] = &PTR_FUN_14b953d80;
  puVar1[0x7f] = &PTR_FUN_14b953e30;
  puVar1[0x80] = &PTR_FUN_14b953ea0;
  puVar1[0x81] = &PTR_FUN_14b953f10;
  puVar1[0x82] = &PTR_FUN_14b953f40;
  puVar1[0x83] = &PTR_FUN_14b953f80;
  puVar1[0x84] = &PTR_FUN_14b954020;
  puVar1[0x85] = &PTR_FUN_14b954040;
  puVar1[0x89] = &PTR_FUN_14b954060;
  puVar1[0x8a] = &PTR_FUN_14b954120;
  puVar1[0x8b] = &PTR_FUN_14b9541a0;
  puVar1[0x8c] = &PTR_FUN_14b9541f0;
  puVar1[0x8d] = &PTR_FUN_14b954230;
  puVar1[0x8e] = &PTR_FUN_14b954250;
  puVar1[0x8f] = &PTR_FUN_14b954270;
  puVar1[0x90] = &PTR_FUN_14b954290;
  puVar1[0x91] = &PTR_FUN_14b9542b0;
  puVar1[0x92] = &PTR_FUN_14b9542d0;
  puVar1[0x93] = &PTR_FUN_14b9542f0;
  puVar1[0x94] = &PTR_FUN_14b954310;
  puVar1[0x95] = &PTR_FUN_14b954330;
  puVar1[0x96] = &PTR_FUN_14b954350;
  puVar1[0x34b] = &PTR_FUN_14b954370;
  puVar1[0x352] = &PTR_FUN_14b954380;
  puVar1[0x353] = &PTR_FUN_14b9543c0;
  puVar1[0x354] = &PTR_FUN_14b954400;
  puVar1[0x355] = &PTR_FUN_14b954450;
  puVar1[0x356] = &PTR_FUN_14b954480;
  puVar1[0x359] = &PTR_FUN_14b9544c0;
  puVar1[0x35a] = &PTR_FUN_14b9544d0;
  puVar1[0x35b] = &PTR_FUN_14b954500;
  puVar1[0x35c] = &PTR_FUN_14b9545a0;
  *(undefined1 *)(puVar1 + 0x4c0) = 0;
  *(undefined4 *)(puVar1 + 0x4bf) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2601) = 1;
  uVar3 = DAT_14c8464e8;
  puVar1[0x4c1] = DAT_14c8464e0;
  puVar1[0x4c2] = uVar3;
  puVar1[0x4c3] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 0x4c4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2624) = 0;
  *(undefined1 *)(puVar1 + 0x4c5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x262c) = 0;
  *(undefined2 *)(puVar1 + 0x4c6) = 0x100;
  uVar3 = DAT_14c8464e8;
  puVar1[0x4c7] = DAT_14c8464e0;
  puVar1[0x4c8] = uVar3;
  puVar1[0x4c9] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 0x4ca) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2654) = 0;
  *(undefined1 *)(puVar1 + 0x4cb) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x265c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2685) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x268d) = 0;
  puVar1[0x4cf] = 0;
  puVar1[0x4d0] = 0;
  puVar1[0x4cd] = 0;
  puVar1[0x4ce] = 0;
  puVar1[0x4d3] = 0;
  puVar1[0x4d4] = 0;
  local_38 = "SplineComponent";
  local_30 = 0xf;
  local_2c = 0;
  uVar2 = FUN_14001a6c0(&local_38,1);
  uVar3 = FUN_14092ee58();
  local_40 = 0;
  local_48 = 1;
  lVar4 = FUN_14048696c(puVar1,uVar2,uVar3,uVar3);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  puVar1[0x4cd] = lVar4;
  FUN_140486fc4(lVar4,puVar1[0x39],0);
  (**(code **)(*(longlong *)puVar1[0x4cd] + 0x588))((longlong *)puVar1[0x4cd],1);
  *(undefined4 *)(puVar1[0x4cd] + 0x688) = 0x1e;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14409f360 FUN_14409f360 body=47 status=ok
// SIG undefined FUN_14409f360(void)

longlong FUN_14409f360(void)

{
  if (DAT_14cbc1588 == 0) {
    FUN_14073dd9a(&DAT_14cbc1588,&PTR_LAB_14b953598);
  }
  return DAT_14cbc1588;
}



// FUNCTION 14409f390 FUN_14409f390 body=597 status=ok
// SIG undefined FUN_14409f390(void)

void FUN_14409f390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9535e0;
  param_1[0x72] = &PTR_FUN_14b953c50;
  param_1[0x73] = &PTR_FUN_14b953c70;
  param_1[0x74] = &PTR_FUN_14b953ca0;
  param_1[0x75] = &PTR_FUN_14b953cb0;
  param_1[0x76] = &PTR_FUN_14b953d20;
  param_1[0x77] = &PTR_FUN_14b953d50;
  param_1[0x78] = &PTR_FUN_14b953d80;
  param_1[0x7f] = &PTR_FUN_14b953e30;
  param_1[0x80] = &PTR_FUN_14b953ea0;
  param_1[0x81] = &PTR_FUN_14b953f10;
  param_1[0x82] = &PTR_FUN_14b953f40;
  param_1[0x83] = &PTR_FUN_14b953f80;
  param_1[0x84] = &PTR_FUN_14b954020;
  param_1[0x85] = &PTR_FUN_14b954040;
  param_1[0x89] = &PTR_FUN_14b954060;
  param_1[0x8a] = &PTR_FUN_14b954120;
  param_1[0x8b] = &PTR_FUN_14b9541a0;
  param_1[0x8c] = &PTR_FUN_14b9541f0;
  param_1[0x8d] = &PTR_FUN_14b954230;
  param_1[0x8e] = &PTR_FUN_14b954250;
  param_1[0x8f] = &PTR_FUN_14b954270;
  param_1[0x90] = &PTR_FUN_14b954290;
  param_1[0x91] = &PTR_FUN_14b9542b0;
  param_1[0x92] = &PTR_FUN_14b9542d0;
  param_1[0x93] = &PTR_FUN_14b9542f0;
  param_1[0x94] = &PTR_FUN_14b954310;
  param_1[0x95] = &PTR_FUN_14b954330;
  param_1[0x96] = &PTR_FUN_14b954350;
  param_1[0x34b] = &PTR_FUN_14b954370;
  param_1[0x352] = &PTR_FUN_14b954380;
  param_1[0x353] = &PTR_FUN_14b9543c0;
  param_1[0x354] = &PTR_FUN_14b954400;
  param_1[0x355] = &PTR_FUN_14b954450;
  param_1[0x356] = &PTR_FUN_14b954480;
  param_1[0x359] = &PTR_FUN_14b9544c0;
  param_1[0x35a] = &PTR_FUN_14b9544d0;
  param_1[0x35b] = &PTR_FUN_14b954500;
  param_1[0x35c] = &PTR_FUN_14b9545a0;
  if (param_1[0x4d0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4ce] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 14409f5e6 FUN_14409f5e6 body=55 status=ok
// SIG undefined FUN_14409f5e6(void)

void FUN_14409f5e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc15a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc15a0 = FUN_140002ddd(FUN_14409f61d,uVar1,L"VerticalZiplineDismountData");
  }
  return;
}



// FUNCTION 14409f61d FUN_14409f61d body=47 status=ok
// SIG undefined FUN_14409f61d(void)

longlong FUN_14409f61d(void)

{
  if (DAT_14cbc1598 == 0) {
    FUN_14086a14e(&DAT_14cbc1598,&PTR_FUN_14b9548b8);
  }
  return DAT_14cbc1598;
}



// FUNCTION 14409f64c FUN_14409f64c body=48 status=ok
// SIG undefined FUN_14409f64c(void)

void FUN_14409f64c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14b9578c0;
  return;
}



// FUNCTION 14409f67c FUN_14409f67c body=55 status=ok
// SIG undefined FUN_14409f67c(void)

void FUN_14409f67c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc15b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc15b8 = FUN_140002ddd(FUN_14409f6b3,uVar1,L"HorizontalZiplineDismountData");
  }
  return;
}



// FUNCTION 14409f6b3 FUN_14409f6b3 body=47 status=ok
// SIG undefined FUN_14409f6b3(void)

longlong FUN_14409f6b3(void)

{
  if (DAT_14cbc15b0 == 0) {
    FUN_14086a14e(&DAT_14cbc15b0,&PTR_FUN_14b954a70);
  }
  return DAT_14cbc15b0;
}



// FUNCTION 14409f6e2 FUN_14409f6e2 body=48 status=ok
// SIG undefined FUN_14409f6e2(void)

void FUN_14409f6e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14b957a20;
  return;
}



// FUNCTION 14409f712 FUN_14409f712 body=55 status=ok
// SIG undefined FUN_14409f712(void)

void FUN_14409f712(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc15d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc15d0 = FUN_140002ddd(FUN_14409f749,uVar1,L"ZiplineDef");
  }
  return;
}



// FUNCTION 14409f749 FUN_14409f749 body=47 status=ok
// SIG undefined FUN_14409f749(void)

longlong FUN_14409f749(void)

{
  if (DAT_14cbc15c8 == 0) {
    FUN_14086a14e(&DAT_14cbc15c8,&PTR_FUN_14b955330);
  }
  return DAT_14cbc15c8;
}



// FUNCTION 14409f788 FUN_14409f788 body=48 status=ok
// SIG undefined FUN_14409f788(void)

void FUN_14409f788(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000005c8;
  *puVar1 = &PTR_FUN_14b957b90;
  return;
}



// FUNCTION 14409f7ec FUN_14409f7ec body=1042 status=ok
// SIG undefined FUN_14409f7ec(void)

longlong * FUN_14409f7ec(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  code *local_98;
  code *local_90;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = FUN_1447262c2(param_3);
  if (lVar5 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_a0 = &local_68;
      local_68 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1478c0a72;
      local_b0 = &LAB_1417b2375;
      local_b8 = L"Engine";
      local_c0 = 0x1000000000;
      local_c8 = 0x10000004;
      local_d0 = 8;
      local_d8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      uVar6 = FUN_1447210f0(lVar5);
      lVar5 = *(longlong *)(lVar5 + 0x1c8);
      if (lVar5 == 0) {
        local_58 = DAT_14c8464f0;
        local_68 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_68 = *(code **)(lVar5 + 0x260);
        uStack_60 = *(undefined8 *)(lVar5 + 0x268);
        local_58 = *(undefined8 *)(lVar5 + 0x270);
      }
      FUN_1408b794c(&local_80,uVar6);
      plVar10 = (longlong *)CONCAT44(uStack_74,local_78);
      if (plVar10 == (longlong *)0x0) {
LAB_14409f9dc:
        bVar14 = true;
        plVar10 = (longlong *)0x0;
LAB_14409f9e1:
        *param_2 = *(longlong *)(param_1 + 0x88);
        uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0x90));
        lVar5 = FUN_14477b664(uVar6);
        param_2[1] = lVar5;
        param_2[2] = *(longlong *)(param_1 + 0x98);
        if (bVar14) goto LAB_14409fa30;
      }
      else {
        iVar4 = (int)plVar10[1];
        do {
          if (iVar4 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar2 = (int)plVar10[1];
          bVar14 = iVar4 == iVar2;
          if (bVar14) {
            *(int *)(plVar10 + 1) = iVar4 + 1;
            iVar2 = iVar4;
          }
          iVar4 = iVar2;
          UNLOCK();
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_74,local_78) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
        }
        if (plVar10 == (longlong *)0x0) goto LAB_14409f9dc;
        if (local_80 == 0) {
          bVar14 = false;
          goto LAB_14409f9e1;
        }
        lVar5 = FUN_144a2b138();
        if (lVar5 == 0) {
          local_78 = 0x3860a972;
          local_80 = 0;
        }
        else {
          local_80 = *(longlong *)(lVar5 + 0x3c8);
          local_78 = *(undefined4 *)(lVar5 + 0x3d0);
        }
        local_70 = 0;
        plVar7 = (longlong *)FUN_140944864();
        if (plVar7 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
          lVar8 = FUN_141030812();
          if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)) && ((longlong)*(int *)(param_1 + 0xa8) != 0)) {
            plVar11 = *(longlong **)(param_1 + 0xa0);
            plVar13 = plVar11 + (longlong)*(int *)(param_1 + 0xa8) * 6;
            do {
              lVar5 = plVar11[1];
              if (lVar5 == 0) {
                uVar6 = FUN_141030812();
                lVar5 = FUN_14477b664(uVar6);
                plVar11[1] = lVar5;
              }
              plVar12 = (longlong *)plVar11[2];
              plVar9 = plVar7;
              if (plVar12 == (longlong *)0x0) {
                if (lVar5 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = (longlong *)0x0;
                  if (*plVar11 != 0) {
                    plVar12 = *(longlong **)(lVar5 + 0xb8);
                    if ((plVar12 == (longlong *)0x0) ||
                       (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
                      plVar12 = (longlong *)0x0;
                    }
                    else {
                      uVar6 = (**(code **)(*plVar12 + 0x110))(plVar12);
                      plVar12 = (longlong *)FUN_144aff482(uVar6,plVar11);
                    }
                    plVar11[2] = (longlong)plVar12;
                  }
                }
              }
              do {
                if (plVar12 == plVar9) {
                  *param_2 = plVar11[3];
                  uVar6 = FUN_14477b664(plVar11[4]);
                  lVar5 = FUN_14477b664(uVar6);
                  param_2[1] = lVar5;
                  plVar11 = plVar11 + 5;
                  goto LAB_14409f9d3;
                }
                plVar9 = (longlong *)FUN_1403155a4(plVar9);
              } while (plVar9 != (longlong *)0x0);
              plVar11 = plVar11 + 6;
            } while (plVar11 != plVar13);
          }
        }
        *param_2 = *(longlong *)(param_1 + 0x88);
        uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0x90));
        lVar5 = FUN_14477b664(uVar6);
        param_2[1] = lVar5;
        plVar11 = (longlong *)(param_1 + 0x98);
LAB_14409f9d3:
        param_2[2] = *plVar11;
      }
      LOCK();
      plVar7 = plVar10 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      goto LAB_14409fa30;
    }
  }
  *param_2 = *(longlong *)(param_1 + 0x88);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0x90));
  lVar5 = FUN_14477b664(uVar6);
  param_2[1] = lVar5;
  param_2[2] = *(longlong *)(param_1 + 0x98);
LAB_14409fa30:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14409fc44 FUN_14409fc44 body=141 status=ok
// SIG undefined FUN_14409fc44(void)

ulonglong FUN_14409fc44(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar1 = FUN_1400e8a68(param_3);
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x430), lVar1 == 0)) {
    if ((*(char *)(param_1 + 0x10) == '\x01') && (lVar1 = FUN_1447262c2(param_3), lVar1 != 0)) {
      lVar3 = FUN_140d12354();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),*(undefined1 *)(lVar1 + 0x136c));
      }
    }
  }
  else if (*(char *)(lVar1 + 0x291) != '\0') {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xe0))(lVar1 + 0x178);
    return uVar2 ^ 1;
  }
  return 0;
}



// FUNCTION 14409fcd2 FUN_14409fcd2 body=88 status=ok
// SIG undefined FUN_14409fcd2(void)

undefined8 FUN_14409fcd2(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140c8232a(param_1 + -0x448);
  if (cVar1 == '\x01') {
    if ((*(longlong *)(param_1 + 0x21b8) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x21b8) + 0x458) == '\x01')) {
      lVar2 = (**(code **)(*param_2 + 0x110))(param_2);
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x420) & 2) == 0)) goto LAB_14409fd1d;
    }
    uVar3 = 1;
  }
  else {
LAB_14409fd1d:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14409fd3e FUN_14409fd3e body=618 status=ok
// SIG undefined FUN_14409fd3e(void)

void FUN_14409fd3e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  uint local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_78;
  longlong local_70;
  longlong local_68 [3];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_2 + 8))(param_2);
    lVar7 = FUN_1465bf9b2();
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      *(longlong **)(param_1 + 0x2220) = param_2;
      *(undefined1 *)(param_1 + 0x2488) = 1;
      lVar6 = FUN_148ccb7ea(param_2 + 0x8f);
      if (lVar6 != 0) {
        lVar7 = *(longlong *)(lVar6 + 0x88);
        if (lVar7 == 0) {
          uVar8 = FUN_145c6907a();
          lVar7 = FUN_14477b664(uVar8);
          *(longlong *)(lVar6 + 0x88) = lVar7;
        }
        lVar1 = param_1 + -0x400;
        local_90 = *(longlong *)(lVar6 + 0x90);
        if (((local_90 == 0) && (local_90 = 0, lVar7 != 0)) && (*(longlong *)(lVar6 + 0x80) != 0)) {
          plVar4 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            local_90 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
            local_90 = FUN_144aff482(uVar8,(longlong *)(lVar6 + 0x80));
          }
          *(longlong *)(lVar6 + 0x90) = local_90;
        }
        local_68[0] = 0;
        local_68[1] = 0;
        if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
          if (lVar1 != 0) goto LAB_14409feb4;
          local_70 = 0;
        }
        else {
          FUN_1456cec3c(lVar1);
LAB_14409feb4:
          local_70 = param_1 + 0x21f8;
        }
        local_88 = 0;
        local_98 = local_98 & 0xffffff00;
        local_78 = lVar1;
        FUN_14119f328(param_1 + 0x2350,&local_78,local_68,0);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        if ((*(char *)(param_1 + -0x288) == '\x03') && ((longlong)*(int *)(lVar6 + 0x20) != 0)) {
          lVar7 = *(longlong *)(lVar6 + 0x18);
          lVar6 = (longlong)*(int *)(lVar6 + 0x20) << 4;
          do {
            uVar2 = *(undefined4 *)(lVar7 + 8);
            uVar3 = *(undefined4 *)(lVar7 + 0xc);
            FUN_1446dcdd4(local_68,lVar7);
            local_98 = 1;
            FUN_14119f7a4(param_1 + 0x2350,local_68,uVar2,uVar3);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            lVar7 = lVar7 + 0x10;
            lVar6 = lVar6 + -0x10;
          } while (lVar6 != 0);
        }
      }
      local_68[0] = *(longlong *)(param_1 + 0x2220);
      *(undefined1 *)(param_1 + 0x2488) = *(undefined1 *)(local_68[0] + 0x472);
      goto LAB_14409fd7d;
    }
  }
  *(undefined8 *)(param_1 + 0x2220) = 0;
  *(undefined1 *)(param_1 + 0x2488) = 1;
  local_68[0] = 0;
LAB_14409fd7d:
  FUN_140655f5e(param_1);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14409ffce FUN_14409ffce body=46 status=ok
// SIG undefined FUN_14409ffce(void)

void FUN_14409ffce(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_140521022(param_1);
  return;
}



// FUNCTION 1440a0008 FUN_1440a0008 body=309 status=ok
// SIG undefined FUN_1440a0008(void)

longlong * FUN_1440a0008(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = (**(code **)(*(longlong *)(param_1 + 0x400) + 0x28))(param_1 + 0x400);
  FUN_1406c9d00(uVar3,&local_30);
  if (local_28 == 0) {
    uVar3 = FUN_140927942();
    local_28 = FUN_14477b664(uVar3);
  }
  if (local_20 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if ((local_28 == 0) || (local_30 == 0)) goto LAB_1440a0120;
    plVar5 = *(longlong **)(local_28 + 0xb8);
    if ((plVar5 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 != '\0')) {
      uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
      local_20 = (longlong *)FUN_144aff482(uVar3,&local_30);
      if (local_20 != (longlong *)0x0) goto LAB_1440a0066;
    }
  }
  else {
LAB_1440a0066:
    plVar1 = local_20;
    lVar4 = (**(code **)(*local_20 + 8))(local_20);
    if (DAT_14cbc15d0 == 0) {
      uVar3 = FUN_14064613c();
      DAT_14cbc15d0 = FUN_140002ddd(FUN_14409f749,uVar3,L"ZiplineDef");
      if (DAT_14cbc15d0 == 0) goto LAB_1440a00b1;
    }
    if (*(int *)(DAT_14cbc15d0 + 0x38) <= *(int *)(lVar4 + 0x38)) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbc15d0 + 0x38) * 8)
          == DAT_14cbc15d0 + 0x30) {
        plVar5 = plVar1;
      }
      goto LAB_1440a0120;
    }
  }
LAB_1440a00b1:
  plVar5 = (longlong *)0x0;
LAB_1440a0120:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1440a013e FUN_1440a013e body=9809 status=ok
// SIG undefined FUN_1440a013e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440a013e(longlong param_1)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  double *pdVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  byte bVar31;
  longlong lVar32;
  bool bVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined1 auVar70 [16];
  double dVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar74;
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined1 auStack_4f8 [32];
  undefined8 *local_4d8;
  ulonglong local_4d0;
  undefined1 local_4c8;
  longlong local_4b8;
  uint *local_4b0;
  longlong *local_4a8;
  longlong local_4a0;
  ulonglong local_498;
  longlong *local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  double local_478;
  float local_46c;
  double local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  double local_448;
  double local_438;
  double local_428;
  double local_418;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  double local_378;
  double local_370;
  double local_368;
  uint *local_360;
  double local_358;
  double local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double local_258;
  double dStack_250;
  double local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  lVar13 = *(longlong *)(param_1 + 0x1c8);
  if (lVar13 == 0) {
LAB_1440a02e8:
    local_198 = 0.0;
    dStack_190 = DAT_14c846500;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = local_188._8_8_;
    local_188 = auVar40 << 0x40;
  }
  else {
    local_168 = DAT_14c846520;
    local_178 = DAT_14c846510;
    dStack_170 = DAT_14c846518;
    dVar12 = (double)FUN_141226a1c();
    uVar85 = (undefined4)lVar13;
    lVar13 = *(longlong *)(param_1 + 0x1c8);
    if (lVar13 == 0) goto LAB_1440a02e8;
    dVar35 = *(double *)(lVar13 + 0x240);
    dVar36 = *(double *)(lVar13 + 0x248);
    dVar37 = *(double *)(lVar13 + 0x250);
    dVar38 = *(double *)(lVar13 + 600);
    pdVar16 = *(double **)(lVar13 + 0x228);
    local_178 = dVar35;
    dStack_170 = dVar36;
    local_168 = dVar37;
    dStack_160 = dVar38;
    if (pdVar16 == (double *)0x0) {
      uVar85 = 0x40;
      pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
      dVar12 = DAT_14c8463d8;
      *pdVar16 = DAT_14c8463d0;
      pdVar16[1] = dVar12;
      dVar12 = DAT_14c8463e8;
      pdVar16[2] = DAT_14c8463e0;
      pdVar16[3] = dVar12;
      dVar12 = DAT_14c846500;
      pdVar16[4] = DAT_14c8464f8;
      pdVar16[5] = dVar12;
      dVar12 = DAT_14c846508;
      pdVar16[6] = DAT_14c846508;
      *(double **)(lVar13 + 0x228) = pdVar16;
    }
    auVar54._8_8_ = -(ulonglong)(dVar36 != pdVar16[1]);
    auVar54._0_8_ = -(ulonglong)(dVar35 != *pdVar16);
    auVar53._8_8_ = -(ulonglong)(dVar38 != pdVar16[3]);
    auVar53._0_8_ = -(ulonglong)(dVar37 != pdVar16[2]);
    iVar9 = movmskpd(SUB84(dVar12,0),auVar54);
    uVar19 = movmskpd(uVar85,auVar53);
    if ((uVar19 & 0x3fffffff) != 0 || iVar9 != 0) {
      pdVar16[2] = local_168;
      pdVar16[3] = dStack_160;
      *pdVar16 = local_178;
      pdVar16[1] = dStack_170;
      FUN_1448052ee(&local_178,&local_348);
      pdVar16[6] = local_338;
      pdVar16[4] = local_348;
      pdVar16[5] = dStack_340;
    }
    dStack_190 = pdVar16[5];
    local_198 = 0.0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_188._8_8_;
    local_188 = auVar5 << 0x40;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      local_4c8 = 0;
      local_4d0 = local_4d0 & 0xffffffff00000000;
      local_4d8 = (undefined8 *)0x0;
      FUN_1407fd932(*(longlong *)(param_1 + 0x1c8),&DAT_14c8464e0,&local_198);
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x2668);
  if (lVar13 != 0) {
    local_2d8 = DAT_14c8464f0;
    local_2e8 = DAT_14c8464e0;
    dStack_2e0 = DAT_14c8464e8;
    auVar40 = *(undefined1 (*) [16])(lVar13 + 0x1b0);
    dVar35 = auVar40._0_8_;
    dVar36 = auVar40._8_8_;
    dVar12 = *(double *)(lVar13 + 0x1c0);
    pdVar16 = *(double **)(lVar13 + 0x230);
    if (pdVar16 == (double *)0x0) {
      pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
      dVar37 = DAT_14c8463d8;
      *pdVar16 = DAT_14c8463d0;
      pdVar16[1] = dVar37;
      dVar37 = DAT_14c8463e8;
      pdVar16[2] = DAT_14c8463e0;
      pdVar16[3] = dVar37;
      dVar37 = DAT_14c846500;
      pdVar16[4] = DAT_14c8464f8;
      pdVar16[5] = dVar37;
      pdVar16[6] = DAT_14c846508;
      *(double **)(lVar13 + 0x230) = pdVar16;
    }
    auVar54 = _DAT_1499387d0;
    if ((((pdVar16[4] != dVar35) || (NAN(pdVar16[4]) || NAN(dVar35))) || (pdVar16[5] != dVar36)) ||
       (NAN(pdVar16[5]) || NAN(dVar36))) {
LAB_1440a038c:
      auVar64._8_8_ = 0;
      auVar64._0_8_ = dVar12;
      dVar37 = (double)DAT_1499387d0;
      dVar38 = DAT_1499387d0._8_8_;
      auVar40 = divpd(auVar40,_DAT_1499387d0);
      auVar53 = divpd(auVar64,_DAT_1499387d0);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar53 = roundpd(auVar53,auVar53,3);
      auVar76._0_8_ = dVar35 - auVar40._0_8_ * dVar37;
      auVar76._8_8_ = dVar36 - auVar40._8_8_ * dVar38;
      auVar65._0_8_ = dVar12 - auVar53._0_8_ * dVar37;
      auVar65._8_8_ = 0.0 - auVar53._8_8_ * dVar38;
      auVar70._0_8_ = auVar76._0_8_ + dVar37;
      auVar70._8_8_ = auVar76._8_8_ + dVar38;
      auVar61._0_8_ = auVar65._0_8_ + dVar37;
      auVar61._8_8_ = auVar65._8_8_ + dVar38;
      auVar41._8_8_ = -(ulonglong)(0.0 <= auVar76._8_8_);
      auVar41._0_8_ = -(ulonglong)(0.0 <= auVar76._0_8_);
      auVar53 = blendvpd(auVar70,auVar76,auVar41);
      auVar42._8_8_ = -(ulonglong)(0.0 <= auVar65._8_8_);
      auVar42._0_8_ = -(ulonglong)(0.0 <= auVar65._0_8_);
      auVar40 = blendvpd(auVar61,auVar65,auVar42);
      auVar66._0_8_ = auVar53._0_8_ + -360.0;
      auVar66._8_8_ = auVar53._8_8_ + -360.0;
      auVar43._8_8_ = -(ulonglong)(180.0 < auVar53._8_8_);
      auVar43._0_8_ = -(ulonglong)(180.0 < auVar53._0_8_);
      auVar53 = blendvpd(auVar53,auVar66,auVar43);
      auVar44._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
      auVar44._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
      auVar4._8_8_ = auVar40._8_8_ + 0.0;
      auVar4._0_8_ = auVar40._0_8_ + -360.0;
      auVar40 = blendvpd(auVar40,auVar4,auVar44);
      *(undefined1 (*) [16])(pdVar16 + 4) = auVar53;
      dVar12 = auVar40._0_8_;
      pdVar16[6] = dVar12;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = dVar12;
      auVar40 = divpd(auVar53,auVar54);
      auVar54 = divpd(auVar77,auVar54);
      auVar40 = roundpd(auVar40,auVar40,3);
      auVar54 = roundpd(auVar54,auVar54,3);
      dVar69 = (auVar53._0_8_ - auVar40._0_8_ * dVar37) * 0.008726646259971648;
      dVar73 = (auVar53._8_8_ - auVar40._8_8_ * dVar38) * 0.008726646259971648;
      dVar74 = (dVar12 - auVar54._0_8_ * dVar37) * 0.008726646259971648;
      dVar82 = (0.0 - auVar54._8_8_ * dVar38) * 0.008726646259971648;
      dVar12 = sin(dVar69);
      dVar35 = sin(dVar73);
      dVar36 = sin(dVar74);
      sin(dVar82);
      dVar37 = cos(dVar69);
      dVar38 = cos(dVar73);
      dVar69 = cos(dVar74);
      cos(dVar82);
      *pdVar16 = dVar12 * dVar35 * dVar69 - dVar37 * dVar38 * dVar36;
      pdVar16[1] = -(dVar12 * dVar38 * dVar69) - dVar37 * dVar35 * dVar36;
      pdVar16[2] = -(dVar38 * dVar12 * dVar36) + dVar35 * dVar37 * dVar69;
      pdVar16[3] = dVar35 * dVar12 * dVar36 + dVar38 * dVar37 * dVar69;
    }
    else if ((pdVar16[6] != dVar12) || (NAN(pdVar16[6]) || NAN(dVar12))) goto LAB_1440a038c;
    local_178 = *pdVar16;
    dStack_170 = pdVar16[1];
    local_168 = pdVar16[2];
    dStack_160 = pdVar16[3];
    local_348 = local_2e8;
    dStack_340 = dStack_2e0;
    local_338 = local_2d8;
    local_4d0 = local_4d0 & 0xffffffffffffff00;
    local_4d8 = (undefined8 *)0x0;
    FUN_144927ad4(lVar13);
    local_1a8 = DAT_14c846508;
    local_1b8 = DAT_14c8464f8;
    dStack_1b0 = DAT_14c846500;
    local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
    FUN_14020f75c(*(undefined8 *)(param_1 + 0x2668));
    local_1c8 = DAT_14c846520;
    local_1d8 = DAT_14c846510;
    dStack_1d0 = DAT_14c846518;
    (**(code **)(**(longlong **)(param_1 + 0x2668) + 0x478))();
    lVar13 = *(longlong *)(param_1 + 0x2668);
    if (lVar13 != 0) {
      uVar19 = *(uint *)(lVar13 + 0x628);
      uVar11 = 1;
      if (1 < (int)uVar19) {
        uVar11 = uVar19;
      }
      uVar11 = uVar11 - 1;
      if (*(char *)(lVar13 + 0x695) != '\0') {
        uVar11 = uVar19;
      }
      local_4a8 = (longlong *)(param_1 + 0x2670);
      uVar19 = *(uint *)(param_1 + 0x2678);
      bVar33 = true;
      if (uVar19 == uVar11) {
        bVar33 = *(uint *)(param_1 + 0x2688) != uVar11;
      }
      lVar25 = (longlong)(int)uVar19;
      lVar13 = *local_4a8;
      if (uVar19 != 0) {
        lVar30 = 0;
        do {
          if (*(longlong *)(lVar13 + lVar30) == 0) {
            bVar31 = 1;
          }
          else {
            bVar31 = (byte)((uint)*(undefined4 *)(*(longlong *)(lVar13 + lVar30) + 8) >> 0x1e) & 1;
          }
          bVar33 = (bool)(bVar33 | bVar31);
          lVar30 = lVar30 + 8;
        } while (lVar25 * 8 - lVar30 != 0);
      }
      local_490 = (longlong *)(param_1 + 0x2680);
      if ((longlong)*(int *)(param_1 + 0x2688) == 0) {
        if (bVar33 != false) goto LAB_1440a072b;
LAB_1440a08ec:
        local_4b8 = FUN_1440a0008(param_1);
        if (local_4b8 == 0) goto LAB_1440a20ec;
      }
      else {
        lVar13 = *(longlong *)(param_1 + 0x2680);
        lVar30 = (longlong)*(int *)(param_1 + 0x2688) * 8;
        lVar25 = 0;
        do {
          lVar23 = *(longlong *)(lVar13 + lVar25);
          if (lVar23 == 0) {
            bVar31 = 1;
          }
          else {
            bVar31 = (byte)((uint)*(undefined4 *)(lVar23 + 8) >> 0x1e) & 1;
          }
          bVar33 = (bool)(bVar33 | bVar31);
          lVar25 = lVar25 + 8;
        } while (lVar30 != lVar25);
        if (bVar33 == false) goto LAB_1440a08ec;
        lVar25 = 0;
        do {
          plVar26 = *(longlong **)(lVar13 + lVar25);
          if (plVar26 != (longlong *)0x0) {
            (**(code **)(*plVar26 + 0x420))(plVar26,0);
          }
          lVar25 = lVar25 + 8;
        } while (lVar30 != lVar25);
        lVar13 = *(longlong *)(param_1 + 0x2670);
        uVar19 = *(uint *)(param_1 + 0x2678);
        lVar25 = (longlong)(int)uVar19;
LAB_1440a072b:
        if (uVar19 != 0) {
          lVar30 = 0;
          do {
            plVar26 = *(longlong **)(lVar13 + lVar30);
            if (plVar26 != (longlong *)0x0) {
              (**(code **)(*plVar26 + 0x420))(plVar26,0);
            }
            lVar30 = lVar30 + 8;
          } while (lVar25 * 8 != lVar30);
        }
        *(undefined4 *)(param_1 + 0x2688) = 0;
        if (*(int *)(param_1 + 0x268c) != 0) {
          FUN_14880e352(local_490,0);
        }
        *(undefined4 *)(param_1 + 0x2678) = 0;
        if (*(int *)(param_1 + 0x267c) != 0) {
          FUN_148401d32(local_4a8,0);
        }
        local_4b8 = FUN_1440a0008(param_1);
        uVar19 = uVar11;
        if ((int)uVar11 < 1 || local_4b8 == 0) goto LAB_1440a20ec;
        do {
          local_4d0 = 0;
          local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
          lVar13 = FUN_1483f46c8(param_1,0,0x2000000);
          FUN_140486fc4(lVar13,*(undefined8 *)(param_1 + 0x1c8),0);
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
          iVar9 = *(int *)(param_1 + 0x2678);
          *(uint *)(param_1 + 0x2678) = iVar9 + 1U;
          if (*(uint *)(param_1 + 0x267c) < iVar9 + 1U) {
            FUN_148401d92(local_4a8,iVar9);
          }
          *(longlong *)(*local_4a8 + (longlong)iVar9 * 8) = lVar13;
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
          local_4d0 = 0;
          local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
          lVar13 = FUN_1483e6a2e(param_1,0,0x2000000);
          *(byte *)(lVar13 + 0x2d5) = *(byte *)(lVar13 + 0x2d5) & 0xdf;
          FUN_140486fc4(lVar13,*(undefined8 *)(param_1 + 0x1c8),0);
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
          iVar9 = *(int *)(param_1 + 0x2688);
          uVar10 = iVar9 + 1;
          *(uint *)(param_1 + 0x2688) = uVar10;
          if (*(uint *)(param_1 + 0x268c) < uVar10) {
            FUN_14880e3b2(local_490);
          }
          *(longlong *)(*local_490 + (longlong)iVar9 * 8) = lVar13;
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (0 < (int)uVar11) {
        local_498 = local_4b8 + 0x460;
        uVar18 = 0;
        local_4a0 = param_1;
        do {
          lVar13 = *(longlong *)(param_1 + 0x2668);
          iVar9 = *(int *)(lVar13 + 0x628);
          if (iVar9 < 1) {
            uVar83 = (undefined4)DAT_14cad32a0;
            uVar84 = (undefined4)((ulonglong)DAT_14cad32a0 >> 0x20);
            uVar87 = (undefined4)DAT_14cad32a8;
            uVar88 = (undefined4)((ulonglong)DAT_14cad32a8 >> 0x20);
            uVar89 = (undefined4)DAT_14cad32b0;
            uVar90 = (undefined4)((ulonglong)DAT_14cad32b0 >> 0x20);
            local_1c8 = DAT_14cad32e0;
            local_1d8 = DAT_14cad32d0;
            dStack_1d0 = DAT_14cad32d8;
            puVar14 = &DAT_14cad3298;
            uVar85 = uVar83;
            uVar86 = uVar84;
            uVar91 = uVar89;
            uVar92 = uVar90;
            uVar93 = uVar87;
            uVar94 = uVar88;
          }
          else {
            bVar31 = *(byte *)(lVar13 + 0x695) ^ 1;
            uVar19 = (uint)uVar18;
            if ((int)uVar19 < iVar9 || bVar31 != 0) {
              uVar10 = iVar9 - 1U;
              if ((int)uVar19 < (int)(iVar9 - 1U)) {
                uVar10 = uVar19;
              }
              uVar28 = (ulonglong)uVar10;
              if ((int)uVar10 < 1) {
                uVar28 = 0;
              }
              lVar13 = *(longlong *)(lVar13 + 0x620);
              lVar25 = uVar28 * 0x58;
              uVar15 = *(undefined8 *)(lVar13 + 8 + lVar25);
              uVar83 = (undefined4)uVar15;
              uVar84 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar15 = *(undefined8 *)(lVar13 + 0x10 + lVar25);
              uVar87 = (undefined4)uVar15;
              uVar88 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar15 = *(undefined8 *)(lVar13 + 0x18 + lVar25);
              uVar89 = (undefined4)uVar15;
              uVar90 = (undefined4)((ulonglong)uVar15 >> 0x20);
            }
            else {
              lVar13 = *(longlong *)(lVar13 + 0x620);
              uVar83 = (undefined4)*(undefined8 *)(lVar13 + 8);
              uVar84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 8) >> 0x20);
              uVar87 = (undefined4)*(undefined8 *)(lVar13 + 0x10);
              uVar88 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x10) >> 0x20);
              uVar89 = (undefined4)*(undefined8 *)(lVar13 + 0x18);
              uVar90 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x18) >> 0x20);
              uVar28 = 0;
            }
            local_1c8 = *(double *)(lVar13 + 0x48 + uVar28 * 0x58);
            pdVar16 = (double *)(lVar13 + 0x38 + uVar28 * 0x58);
            local_1d8 = *pdVar16;
            dStack_1d0 = pdVar16[1];
            uVar19 = uVar19 + 1;
            if ((int)uVar19 < iVar9 || bVar31 != 0) {
              uVar10 = iVar9 - 1U;
              if ((int)uVar19 < (int)(iVar9 - 1U)) {
                uVar10 = uVar19;
              }
              uVar28 = (ulonglong)uVar10;
              if ((int)uVar10 < 1) {
                uVar28 = 0;
              }
              lVar25 = uVar28 * 0x58;
              uVar15 = *(undefined8 *)(lVar13 + 8 + lVar25);
              uVar85 = (undefined4)uVar15;
              uVar86 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar15 = *(undefined8 *)(lVar13 + 0x10 + lVar25);
              uVar93 = (undefined4)uVar15;
              uVar94 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar15 = *(undefined8 *)(lVar13 + 0x18 + lVar25);
              uVar91 = (undefined4)uVar15;
              uVar92 = (undefined4)((ulonglong)uVar15 >> 0x20);
            }
            else {
              uVar85 = (undefined4)*(undefined8 *)(lVar13 + 8);
              uVar86 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 8) >> 0x20);
              uVar93 = (undefined4)*(undefined8 *)(lVar13 + 0x10);
              uVar94 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x10) >> 0x20);
              uVar91 = (undefined4)*(undefined8 *)(lVar13 + 0x18);
              uVar92 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x18) >> 0x20);
              uVar28 = 0;
            }
            puVar14 = (undefined4 *)(lVar13 + uVar28 * 0x58);
          }
          uVar28 = uVar18 + 1;
          uVar29 = uVar28 & 0xffffffff;
          local_1e8 = *(undefined8 *)(puVar14 + 0xc);
          local_1f8 = *(undefined8 *)(puVar14 + 8);
          uStack_1f0 = *(undefined8 *)(puVar14 + 10);
          if (((longlong)uVar18 < (longlong)*(int *)(param_1 + 0x2678)) &&
             (plVar26 = *(longlong **)(*local_4a8 + uVar18 * 8), plVar26 != (longlong *)0x0)) {
            FUN_14010ee68(param_1,plVar26);
            local_208 = DAT_14c846520;
            local_218 = DAT_14c846510;
            dStack_210 = DAT_14c846518;
            (**(code **)(*plVar26 + 0x478))(plVar26,&local_218);
            local_228 = DAT_14c8464f0;
            local_238 = DAT_14c8464e0;
            dStack_230 = DAT_14c8464e8;
            auVar40 = *(undefined1 (*) [16])(plVar26 + 0x36);
            dVar35 = auVar40._0_8_;
            dVar36 = auVar40._8_8_;
            dVar12 = (double)plVar26[0x38];
            pdVar16 = (double *)plVar26[0x46];
            if (pdVar16 == (double *)0x0) {
              pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
              dVar37 = DAT_14c8463d8;
              *pdVar16 = DAT_14c8463d0;
              pdVar16[1] = dVar37;
              dVar37 = DAT_14c8463e8;
              pdVar16[2] = DAT_14c8463e0;
              pdVar16[3] = dVar37;
              dVar37 = DAT_14c846500;
              pdVar16[4] = DAT_14c8464f8;
              pdVar16[5] = dVar37;
              pdVar16[6] = DAT_14c846508;
              plVar26[0x46] = (longlong)pdVar16;
            }
            auVar54 = _DAT_1499387d0;
            if ((((pdVar16[4] != dVar35) || (NAN(pdVar16[4]) || NAN(dVar35))) ||
                (pdVar16[5] != dVar36)) || (NAN(pdVar16[5]) || NAN(dVar36))) {
LAB_1440a0af5:
              auVar55._8_8_ = 0;
              auVar55._0_8_ = dVar12;
              dVar37 = (double)DAT_1499387d0;
              dVar38 = DAT_1499387d0._8_8_;
              auVar40 = divpd(auVar40,_DAT_1499387d0);
              auVar53 = divpd(auVar55,_DAT_1499387d0);
              auVar40 = roundpd(auVar40,auVar40,3);
              auVar53 = roundpd(auVar53,auVar53,3);
              auVar78._0_8_ = dVar35 - auVar40._0_8_ * dVar37;
              auVar78._8_8_ = dVar36 - auVar40._8_8_ * dVar38;
              auVar56._0_8_ = dVar12 - auVar53._0_8_ * dVar37;
              auVar56._8_8_ = 0.0 - auVar53._8_8_ * dVar38;
              auVar71._0_8_ = auVar78._0_8_ + dVar37;
              auVar71._8_8_ = auVar78._8_8_ + dVar38;
              auVar62._0_8_ = auVar56._0_8_ + dVar37;
              auVar62._8_8_ = auVar56._8_8_ + dVar38;
              auVar45._8_8_ = -(ulonglong)(0.0 <= auVar78._8_8_);
              auVar45._0_8_ = -(ulonglong)(0.0 <= auVar78._0_8_);
              auVar53 = blendvpd(auVar71,auVar78,auVar45);
              auVar46._8_8_ = -(ulonglong)(0.0 <= auVar56._8_8_);
              auVar46._0_8_ = -(ulonglong)(0.0 <= auVar56._0_8_);
              auVar40 = blendvpd(auVar62,auVar56,auVar46);
              auVar57._0_8_ = auVar53._0_8_ + -360.0;
              auVar57._8_8_ = auVar53._8_8_ + -360.0;
              auVar67._0_8_ = auVar40._0_8_ + -360.0;
              auVar67._8_8_ = auVar40._8_8_ + 0.0;
              auVar47._8_8_ = -(ulonglong)(180.0 < auVar53._8_8_);
              auVar47._0_8_ = -(ulonglong)(180.0 < auVar53._0_8_);
              auVar53 = blendvpd(auVar53,auVar57,auVar47);
              auVar48._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
              auVar48._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
              auVar40 = blendvpd(auVar40,auVar67,auVar48);
              *(undefined1 (*) [16])(pdVar16 + 4) = auVar53;
              dVar12 = auVar40._0_8_;
              pdVar16[6] = dVar12;
              auVar79._8_8_ = 0;
              auVar79._0_8_ = dVar12;
              auVar40 = divpd(auVar53,auVar54);
              auVar54 = divpd(auVar79,auVar54);
              auVar40 = roundpd(auVar40,auVar40,3);
              auVar54 = roundpd(auVar54,auVar54,3);
              dVar36 = (auVar53._0_8_ - auVar40._0_8_ * dVar37) * 0.008726646259971648;
              dVar69 = (auVar53._8_8_ - auVar40._8_8_ * dVar38) * 0.008726646259971648;
              dVar73 = (dVar12 - auVar54._0_8_ * dVar37) * 0.008726646259971648;
              dVar74 = (0.0 - auVar54._8_8_ * dVar38) * 0.008726646259971648;
              local_468 = sin(dVar36);
              dVar12 = sin(dVar69);
              local_4b0 = (uint *)CONCAT44(uVar84,uVar83);
              local_488 = (double)CONCAT44(uVar92,uVar91);
              uStack_480 = 0;
              local_458 = (double)CONCAT44(uVar94,uVar93);
              uStack_450 = 0;
              dVar35 = sin(dVar73);
              sin(dVar74);
              dVar36 = cos(dVar36);
              dVar37 = cos(dVar69);
              dVar38 = cos(dVar73);
              cos(dVar74);
              uVar83 = SUB84(local_4b0,0);
              uVar84 = (undefined4)((ulonglong)local_4b0 >> 0x20);
              *pdVar16 = local_468 * dVar12 * dVar38 - dVar36 * dVar37 * dVar35;
              pdVar16[1] = -(local_468 * dVar37 * dVar38) - dVar36 * dVar12 * dVar35;
              pdVar16[2] = -(dVar37 * local_468 * dVar35) + dVar12 * dVar36 * dVar38;
              pdVar16[3] = dVar12 * local_468 * dVar35 + dVar37 * dVar36 * dVar38;
              uVar91 = (int)local_488;
              uVar92 = local_488._4_4_;
              uVar93 = (undefined4)local_458;
              uVar94 = local_458._4_4_;
            }
            else if ((pdVar16[6] != dVar12) || (NAN(pdVar16[6]) || NAN(dVar12))) goto LAB_1440a0af5;
            local_178 = *pdVar16;
            dStack_170 = pdVar16[1];
            local_168 = pdVar16[2];
            dStack_160 = pdVar16[3];
            local_348 = local_238;
            dStack_340 = dStack_230;
            local_338 = local_228;
            local_4d0 = local_4d0 & 0xffffffffffffff00;
            local_4d8 = (undefined8 *)0x0;
            FUN_144927ad4(plVar26,&local_348,&local_178,0);
            local_258 = DAT_14c8464f8;
            dStack_250 = DAT_14c846500;
            local_248 = DAT_14c846508;
            local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
            FUN_14020f75c(plVar26,&local_258,0,0);
            (**(code **)(*plVar26 + 0x588))(plVar26,1);
            (**(code **)(*plVar26 + 0x720))(plVar26,0);
            uVar15 = FUN_1401ca522(local_498);
            (**(code **)(*plVar26 + 0xa78))(plVar26,uVar15);
            if (*(char *)((longlong)plVar26 + 0x844) != *(char *)(local_4b8 + 0x528)) {
              *(char *)((longlong)plVar26 + 0x844) = *(char *)(local_4b8 + 0x528);
              *(byte *)((longlong)plVar26 + 0x845) = *(byte *)((longlong)plVar26 + 0x845) | 4;
            }
            local_268 = local_1e8;
            local_278 = local_1f8;
            uStack_270 = uStack_1f0;
            local_290 = CONCAT44(uVar86,uVar85);
            local_288 = CONCAT44(uVar94,uVar93);
            local_280 = CONCAT44(uVar92,uVar91);
            local_2a8 = local_1d8;
            dStack_2a0 = dStack_1d0;
            local_298 = local_1c8;
            local_2c0 = CONCAT44(uVar84,uVar83);
            local_2b8 = CONCAT44(uVar88,uVar87);
            local_2b0 = CONCAT44(uVar90,uVar89);
            local_4d8 = &local_278;
            local_4d0 = CONCAT71(local_4d0._1_7_,1);
            FUN_147a28118(plVar26,&local_2c0,&local_2a8);
            if (((*(byte *)((longlong)plVar26 + 0x9c) & 1) == 0) &&
               (*(char *)(param_1 + 100) < '\0')) {
              FUN_140b506a4(plVar26);
            }
          }
          if (((longlong)uVar18 < (longlong)*(int *)(param_1 + 0x2688)) &&
             (plVar26 = *(longlong **)(*local_490 + uVar18 * 8), plVar26 != (longlong *)0x0)) {
            FUN_14010ee68(param_1,plVar26);
            (**(code **)(*plVar26 + 0x588))(plVar26,1);
            (**(code **)(*plVar26 + 0x940))(plVar26,0);
            (**(code **)(*plVar26 + 0x938))(plVar26,2,1);
            if ((*(byte *)((longlong)plVar26 + 0x2d3) & 8) == 0) {
              *(byte *)((longlong)plVar26 + 0x2d3) = *(byte *)((longlong)plVar26 + 0x2d3) | 8;
              (**(code **)(*plVar26 + 0x958))(plVar26);
            }
            lVar13 = *(longlong *)(param_1 + 0x2668);
            lVar25 = (longlong)*(int *)(lVar13 + 0x628);
            if ((lVar13 == 0 || (longlong)uVar28 < lVar25) || (*(char *)(lVar13 + 0x695) == '\0')) {
              if ((longlong)uVar18 < lVar25) {
                bVar33 = false;
                goto LAB_1440a0fd3;
              }
            }
            else if ((longlong)uVar18 < lVar25) {
              uVar29 = 0;
              bVar33 = true;
LAB_1440a0fd3:
              if ((int)uVar29 < *(int *)(lVar13 + 0x628)) {
                lVar25 = *(longlong *)(lVar13 + 0x620);
                lVar23 = uVar18 * 0x58;
                fVar1 = *(float *)(lVar25 + lVar23);
                lVar30 = uVar29 * 0x58;
                if (bVar33) {
                  fVar34 = *(float *)(lVar13 + 0x634) + fVar1;
                }
                else {
                  fVar34 = *(float *)(lVar25 + lVar30);
                }
                local_448 = (double)CONCAT44(local_448._4_4_,fVar34);
                dVar35 = (double)CONCAT44(uVar92,uVar91) - (double)CONCAT44(uVar90,uVar89);
                dVar36 = (double)CONCAT44(uVar94,uVar93) - (double)CONCAT44(uVar88,uVar87);
                dVar12 = (double)CONCAT44(uVar86,uVar85) - (double)CONCAT44(uVar84,uVar83);
                dVar37 = dVar35 * dVar35 + dVar12 * dVar12 + dVar36 * dVar36;
                if (((dVar37 != 1.0) ||
                    (dVar38 = dVar12, dVar69 = dVar35, dVar73 = dVar36, NAN(dVar37))) &&
                   (dVar38 = DAT_14c8464e0, dVar69 = DAT_14c8464f0, dVar73 = DAT_14c8464e8,
                   9.99999993922529e-09 <= dVar37)) {
                  dVar38 = 1.0 / SQRT(dVar37);
                  dVar69 = dVar35 * dVar38;
                  dVar73 = dVar36 * dVar38;
                  dVar38 = dVar12 * dVar38;
                }
                uVar85 = *(undefined4 *)(lVar25 + 4 + lVar23);
                dVar12 = *(double *)(lVar25 + 8 + lVar23);
                dVar35 = *(double *)(lVar25 + 0x10 + lVar23);
                dVar36 = *(double *)(lVar25 + 0x18 + lVar23);
                dVar37 = *(double *)(lVar25 + 0x20 + lVar23);
                dVar74 = *(double *)(lVar25 + 0x28 + lVar23);
                dVar82 = *(double *)(lVar25 + 0x30 + lVar23);
                local_3f0 = *(double *)(lVar25 + 0x38 + lVar23);
                local_3f8 = *(double *)(lVar25 + 0x40 + lVar23);
                local_400 = *(double *)(lVar25 + 0x48 + lVar23);
                uVar15 = *(undefined8 *)(lVar25 + 0x50 + lVar23);
                uVar86 = *(undefined4 *)(lVar25 + 4 + lVar30);
                local_428 = *(double *)(lVar25 + 8 + lVar30);
                local_438 = *(double *)(lVar25 + 0x10 + lVar30);
                local_3e8 = *(double *)(lVar25 + 0x18 + lVar30);
                local_468 = *(double *)(lVar25 + 0x20 + lVar30);
                local_478 = *(double *)(lVar25 + 0x28 + lVar30);
                local_418 = *(double *)(lVar25 + 0x30 + lVar30);
                local_4b0 = *(uint **)(lVar25 + 0x38 + lVar30);
                uVar3 = *(undefined8 *)(lVar25 + 0x50 + lVar30);
                local_488 = *(double *)(lVar25 + 0x40 + lVar30);
                local_458 = *(double *)(lVar25 + 0x48 + lVar30);
                local_2d8 = DAT_14c8463e0;
                dStack_2d0 = DAT_14c8463e8;
                local_2e8 = DAT_14c8463d0;
                dStack_2e0 = DAT_14c8463d8;
                if (((9.999999747378752e-05 < ABS(dVar38)) || (9.999999747378752e-05 < ABS(dVar73)))
                   || (9.999999747378752e-05 < ABS(dVar69))) {
                  dVar39 = dVar69 * dVar69 + dVar38 * dVar38 + dVar73 * dVar73;
                  if (((dVar39 != 1.0) ||
                      (local_168 = dVar69, dStack_170 = dVar73, local_178 = dVar38, NAN(dVar39))) &&
                     (local_168 = DAT_14c8464f0, dStack_170 = DAT_14c8464e8,
                     local_178 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar39)) {
                    dVar39 = 1.0 / SQRT(dVar39);
                    local_168 = dVar69 * dVar39;
                    dStack_170 = dVar73 * dVar39;
                    local_178 = dVar38 * dVar39;
                  }
                  dVar38 = 1.0;
                  if (0.9998999834060669 <= ABS(local_168)) {
                    dVar38 = 0.0;
                  }
                  dVar69 = (double)(~-(ulonglong)(ABS(local_168) < 0.9998999834060669) &
                                   0x3ff0000000000000);
                  dVar73 = dVar69 * dStack_170 + local_178 * -0.0;
                  dVar69 = dVar38 * local_178 - local_168 * dVar69;
                  dVar38 = local_168 * 0.0 - dStack_170 * dVar38;
                  dVar39 = dVar73 * dVar73 + dVar38 * dVar38 + dVar69 * dVar69;
                  if (((dVar39 != 1.0) ||
                      (local_158 = dVar38, local_148 = dVar73, local_150 = dVar69, NAN(dVar39))) &&
                     (local_158 = DAT_14c8464e0, local_148 = DAT_14c8464f0,
                     local_150 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar39)) {
                    dVar39 = 1.0 / SQRT(dVar39);
                    local_158 = dVar38 * dVar39;
                    local_148 = dVar73 * dVar39;
                    local_150 = dVar69 * dVar39;
                  }
                  local_128 = local_178 * local_150 - local_158 * dStack_170;
                  local_130 = local_168 * local_158 - local_148 * local_178;
                  local_138 = dStack_170 * local_148 - local_150 * local_168;
                  dStack_160 = 0.0;
                  local_140 = 0.0;
                  local_120 = 0;
                  local_118 = DAT_14c8464e0;
                  local_110 = DAT_14c8464e8;
                  dStack_108 = DAT_14c8464f0;
                  local_100 = 0x3ff0000000000000;
                  local_46c = fVar1;
                  FUN_14481fd10(&local_2e8,&local_178);
                  fVar1 = local_46c;
                }
                dVar8 = dStack_2d0;
                dVar7 = local_2d8;
                dVar6 = dStack_2e0;
                dVar39 = local_2e8;
                dVar38 = dVar12 * dStack_2e0 - local_2e8 * dVar35;
                dVar69 = dVar36 * local_2e8 - local_2d8 * dVar12;
                dVar73 = dVar35 * local_2d8 - dStack_2e0 * dVar36;
                dVar38 = dVar38 + dVar38;
                dVar69 = dVar69 + dVar69;
                dVar73 = dVar73 + dVar73;
                dStack_160 = (dStack_2e0 * dVar73 - local_2e8 * dVar69) +
                             dStack_2d0 * dVar38 + dVar36;
                local_168 = (local_2e8 * dVar38 - dVar73 * local_2d8) + dStack_2d0 * dVar69 + dVar35
                ;
                dStack_170 = (dVar69 * local_2d8 - dVar38 * dStack_2e0) +
                             dVar73 * dStack_2d0 + dVar12;
                local_178 = (double)CONCAT44(uVar85,fVar1);
                dVar12 = dVar37 * dStack_2e0 - local_2e8 * dVar74;
                dVar35 = dVar82 * local_2e8 - local_2d8 * dVar37;
                dVar36 = dVar74 * local_2d8 - dStack_2e0 * dVar82;
                dVar12 = dVar12 + dVar12;
                dVar35 = dVar35 + dVar35;
                dVar36 = dVar36 + dVar36;
                local_148 = (dStack_2e0 * dVar36 - local_2e8 * dVar35) +
                            dStack_2d0 * dVar12 + dVar82;
                local_150 = (local_2e8 * dVar12 - dVar36 * local_2d8) + dStack_2d0 * dVar35 + dVar74
                ;
                local_158 = (dVar35 * local_2d8 - dVar12 * dStack_2e0) +
                            dStack_2d0 * dVar36 + dVar37;
                dVar12 = local_3f0 * dStack_2e0 - local_2e8 * local_3f8;
                dVar35 = local_400 * local_2e8 - local_2d8 * local_3f0;
                dVar36 = local_3f8 * local_2d8 - dStack_2e0 * local_400;
                dVar12 = dVar12 + dVar12;
                dVar35 = dVar35 + dVar35;
                dVar36 = dVar36 + dVar36;
                local_130 = (dStack_2e0 * dVar36 - local_2e8 * dVar35) +
                            dStack_2d0 * dVar12 + local_400;
                local_138 = (local_2e8 * dVar12 - dVar36 * local_2d8) +
                            dStack_2d0 * dVar35 + local_3f8;
                local_140 = (dVar35 * local_2d8 - dVar12 * dStack_2e0) +
                            dStack_2d0 * dVar36 + local_3f0;
                dVar12 = local_428 * dStack_2e0 - local_2e8 * local_438;
                dVar35 = local_3e8 * local_2e8 - local_2d8 * local_428;
                dVar36 = local_438 * local_2d8 - dStack_2e0 * local_3e8;
                dVar12 = dVar12 + dVar12;
                dVar35 = dVar35 + dVar35;
                dVar36 = dVar36 + dVar36;
                local_330 = (dStack_2e0 * dVar36 - local_2e8 * dVar35) +
                            dStack_2d0 * dVar12 + local_3e8;
                local_338 = (local_2e8 * dVar12 - dVar36 * local_2d8) +
                            dStack_2d0 * dVar35 + local_438;
                local_348 = (double)CONCAT44(uVar86,SUB84(local_448,0));
                dStack_340 = (dVar35 * local_2d8 - dVar12 * dStack_2e0) +
                             dVar36 * dStack_2d0 + local_428;
                dVar12 = local_468 * dStack_2e0 - local_2e8 * local_478;
                dVar35 = local_418 * local_2e8 - local_2d8 * local_468;
                dVar36 = local_478 * local_2d8 - dStack_2e0 * local_418;
                dVar12 = dVar12 + dVar12;
                dVar35 = dVar35 + dVar35;
                dVar36 = dVar36 + dVar36;
                local_318 = (dStack_2e0 * dVar36 - local_2e8 * dVar35) +
                            dStack_2d0 * dVar12 + local_418;
                local_320 = (local_2e8 * dVar12 - dVar36 * local_2d8) +
                            dStack_2d0 * dVar35 + local_478;
                local_328 = (dVar35 * local_2d8 - dVar12 * dStack_2e0) +
                            dStack_2d0 * dVar36 + local_468;
                dVar12 = (double)local_4b0 * dStack_2e0 - local_2e8 * local_488;
                dVar35 = local_458 * local_2e8 - local_2d8 * (double)local_4b0;
                dVar36 = local_488 * local_2d8 - dStack_2e0 * local_458;
                dVar12 = dVar12 + dVar12;
                dVar35 = dVar35 + dVar35;
                dVar36 = dVar36 + dVar36;
                local_300 = (dStack_2e0 * dVar36 - local_2e8 * dVar35) +
                            dStack_2d0 * dVar12 + local_458;
                local_308 = (local_2e8 * dVar12 - dVar36 * local_2d8) +
                            dStack_2d0 * dVar35 + local_488;
                local_310 = (dVar35 * local_2d8 - dVar12 * dStack_2e0) +
                            dStack_2d0 * dVar36 + (double)local_4b0;
                local_360 = (uint *)0x42a0000000000000;
                local_358 = 8796093022208.0;
                local_350 = 8796093022208.0;
                local_378 = -8796093022208.0;
                local_370 = -8796093022208.0;
                local_368 = -8796093022208.0;
                local_2f8 = uVar3;
                local_128 = (double)uVar15;
                FUN_1407210fe(&local_178,&local_348,&local_360);
                dVar73 = local_368;
                dVar37 = local_370;
                dVar69 = local_378;
                local_488 = local_350;
                uVar85 = SUB84(local_368,0);
                uVar86 = (undefined4)((ulonglong)local_368 >> 0x20);
                local_4b0 = local_360;
                local_458 = local_358;
                dVar38 = (double)*(float *)(local_4b8 + 0x458);
                FUN_1448052ee(&local_2e8,&local_390);
                auVar40 = *(undefined1 (*) [16])(plVar26 + 0x36);
                dVar35 = auVar40._0_8_;
                dVar36 = auVar40._8_8_;
                dVar12 = (double)plVar26[0x38];
                pdVar16 = (double *)plVar26[0x46];
                if (pdVar16 == (double *)0x0) {
                  pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
                  dVar74 = DAT_14c8463d8;
                  *pdVar16 = DAT_14c8463d0;
                  pdVar16[1] = dVar74;
                  dVar74 = DAT_14c8463e8;
                  pdVar16[2] = DAT_14c8463e0;
                  pdVar16[3] = dVar74;
                  dVar74 = DAT_14c846500;
                  pdVar16[4] = DAT_14c8464f8;
                  pdVar16[5] = dVar74;
                  pdVar16[6] = DAT_14c846508;
                  plVar26[0x46] = (longlong)pdVar16;
                }
                auVar54 = _DAT_1499387d0;
                if (((pdVar16[4] != dVar35) || (NAN(pdVar16[4]) || NAN(dVar35))) ||
                   ((pdVar16[5] != dVar36 || (NAN(pdVar16[5]) || NAN(dVar36))))) {
LAB_1440a1b06:
                  auVar58._8_8_ = 0;
                  auVar58._0_8_ = dVar12;
                  dVar74 = (double)DAT_1499387d0;
                  dVar82 = DAT_1499387d0._8_8_;
                  auVar40 = divpd(auVar40,_DAT_1499387d0);
                  auVar53 = divpd(auVar58,_DAT_1499387d0);
                  auVar40 = roundpd(auVar40,auVar40,3);
                  auVar53 = roundpd(auVar53,auVar53,3);
                  auVar80._0_8_ = dVar35 - auVar40._0_8_ * dVar74;
                  auVar80._8_8_ = dVar36 - auVar40._8_8_ * dVar82;
                  auVar59._0_8_ = dVar12 - auVar53._0_8_ * dVar74;
                  auVar59._8_8_ = 0.0 - auVar53._8_8_ * dVar82;
                  auVar72._0_8_ = auVar80._0_8_ + dVar74;
                  auVar72._8_8_ = auVar80._8_8_ + dVar82;
                  auVar63._0_8_ = auVar59._0_8_ + dVar74;
                  auVar63._8_8_ = auVar59._8_8_ + dVar82;
                  auVar49._8_8_ = -(ulonglong)(0.0 <= auVar80._8_8_);
                  auVar49._0_8_ = -(ulonglong)(0.0 <= auVar80._0_8_);
                  auVar53 = blendvpd(auVar72,auVar80,auVar49);
                  auVar50._8_8_ = -(ulonglong)(0.0 <= auVar59._8_8_);
                  auVar50._0_8_ = -(ulonglong)(0.0 <= auVar59._0_8_);
                  auVar40 = blendvpd(auVar63,auVar59,auVar50);
                  auVar60._0_8_ = auVar53._0_8_ + -360.0;
                  auVar60._8_8_ = auVar53._8_8_ + -360.0;
                  auVar68._0_8_ = auVar40._0_8_ + -360.0;
                  auVar68._8_8_ = auVar40._8_8_ + 0.0;
                  auVar51._8_8_ = -(ulonglong)(180.0 < auVar53._8_8_);
                  auVar51._0_8_ = -(ulonglong)(180.0 < auVar53._0_8_);
                  auVar53 = blendvpd(auVar53,auVar60,auVar51);
                  auVar52._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
                  auVar52._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
                  auVar40 = blendvpd(auVar40,auVar68,auVar52);
                  *(undefined1 (*) [16])(pdVar16 + 4) = auVar53;
                  dVar12 = auVar40._0_8_;
                  pdVar16[6] = dVar12;
                  auVar81._8_8_ = 0;
                  auVar81._0_8_ = dVar12;
                  auVar40 = divpd(auVar53,auVar54);
                  auVar54 = divpd(auVar81,auVar54);
                  auVar40 = roundpd(auVar40,auVar40,3);
                  auVar54 = roundpd(auVar54,auVar54,3);
                  dVar35 = (auVar53._0_8_ - auVar40._0_8_ * dVar74) * 0.008726646259971648;
                  dVar36 = (auVar53._8_8_ - auVar40._8_8_ * dVar82) * 0.008726646259971648;
                  dVar74 = (dVar12 - auVar54._0_8_ * dVar74) * 0.008726646259971648;
                  dVar82 = (0.0 - auVar54._8_8_ * dVar82) * 0.008726646259971648;
                  local_418 = sin(dVar35);
                  local_468 = dVar73;
                  local_448 = sin(dVar36);
                  local_428 = sin(dVar74);
                  local_478 = dVar38;
                  sin(dVar82);
                  local_438 = cos(dVar35);
                  uVar85 = SUB84(local_468,0);
                  uVar86 = (undefined4)((ulonglong)local_468 >> 0x20);
                  dVar12 = cos(dVar36);
                  dVar35 = cos(dVar74);
                  dVar38 = local_478;
                  cos(dVar82);
                  *pdVar16 = local_418 * local_448 * dVar35 - local_438 * dVar12 * local_428;
                  pdVar16[1] = -(local_418 * dVar12 * dVar35) - local_438 * local_448 * local_428;
                  pdVar16[2] = -(dVar12 * local_418 * local_428) + local_448 * local_438 * dVar35;
                  pdVar16[3] = local_448 * local_418 * local_428 + dVar12 * local_438 * dVar35;
                }
                else if ((pdVar16[6] != dVar12) || (NAN(pdVar16[6]) || NAN(dVar12)))
                goto LAB_1440a1b06;
                dVar36 = (local_488 + (double)CONCAT44(uVar86,uVar85)) * 0.5;
                dVar35 = (local_458 + dVar37) * 0.5;
                dVar74 = ((double)local_4b0 + dVar69) * 0.5;
                dVar12 = (double)CONCAT44(uVar86,uVar85) - local_488;
                dVar37 = dVar37 - local_458;
                dVar69 = dVar69 - (double)local_4b0;
                dVar82 = dVar6 * dVar36 - dVar35 * dVar7;
                dVar82 = dVar82 + dVar82;
                dVar75 = dVar39 * dVar35 - dVar74 * dVar6;
                dVar75 = dVar75 + dVar75;
                dVar73 = dVar7 * dVar74 - dVar36 * dVar39;
                dVar73 = dVar73 + dVar73;
                local_1a8 = (dVar39 * dVar73 - dVar82 * dVar6) + dVar8 * dVar75 + dVar36;
                dStack_1b0 = (dVar7 * dVar82 - dVar75 * dVar39) + dVar8 * dVar73 + dVar35;
                local_1b8 = (dVar6 * dVar75 - dVar73 * dVar7) + dVar8 * dVar82 + dVar74;
                local_198 = *pdVar16;
                dStack_190 = pdVar16[1];
                local_188 = *(undefined1 (*) [16])(pdVar16 + 2);
                local_4d0 = local_4d0 & 0xffffffffffffff00;
                local_4d8 = (undefined8 *)0x0;
                FUN_144927ad4(plVar26,&local_1b8,&local_198);
                local_3a8 = DAT_14c846510;
                dStack_3a0 = DAT_14c846518;
                local_398 = DAT_14c846520;
                (**(code **)(*plVar26 + 0x478))(plVar26,&local_3a8);
                local_3b8 = local_380;
                local_3c8 = local_390;
                uStack_3c0 = uStack_388;
                local_4d8 = (undefined8 *)((ulonglong)local_4d8 & 0xffffffffffffff00);
                FUN_14020f75c(plVar26,&local_3c8,0);
                local_3e0 = dVar69 * 0.5 + dVar38;
                local_3d8 = dVar37 * 0.5 + dVar38;
                local_3d0 = dVar12 * 0.5 + dVar38;
                FUN_140c9cc04(plVar26,&local_3e0,1);
                param_1 = local_4a0;
              }
            }
            if (((*(byte *)((longlong)plVar26 + 0x9c) & 1) == 0) &&
               (*(char *)(param_1 + 100) < '\0')) {
              FUN_140b506a4(plVar26);
            }
          }
          uVar18 = uVar28;
        } while (uVar28 != uVar11);
      }
    }
  }
LAB_1440a20ec:
  lVar13 = FUN_1440a0008(param_1);
  if (lVar13 == 0) goto LAB_1440a2457;
  if (((*(char *)(param_1 + 0x25fa) == '\x01') && (lVar25 = FUN_1440a0008(param_1), lVar25 != 0)) &&
     (*(char *)(lVar25 + 0x564) != '\0')) {
LAB_1440a2147:
    uVar85 = *(undefined4 *)(lVar13 + 0x508);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x25f8);
    if (cVar2 == '\0') {
      uVar85 = *(undefined4 *)(lVar13 + 0x50c);
    }
    else {
      if (cVar2 == '\x01') goto LAB_1440a2147;
      uVar85 = 0;
      if (cVar2 == '\x02') {
        uVar85 = *(undefined4 *)(lVar13 + 0x510);
      }
    }
  }
  lVar25 = *(longlong *)(param_1 + 0x2668);
  local_4b8 = lVar13;
  local_4a0 = param_1;
  if (lVar25 == 0) {
    lVar25 = *(longlong *)(param_1 + 0x1c8);
    if (lVar25 == 0) {
      local_188._0_8_ = DAT_14c8464f0;
      local_198 = DAT_14c8464e0;
      dStack_190 = DAT_14c8464e8;
    }
    else {
      local_198 = *(double *)(lVar25 + 0x260);
      dStack_190 = *(double *)(lVar25 + 0x268);
      local_188._0_8_ = *(undefined8 *)(lVar25 + 0x270);
    }
LAB_1440a2272:
    if (lVar25 == 0) {
      local_2d8 = DAT_14c8464f0;
      local_2e8 = DAT_14c8464e0;
      dStack_2e0 = DAT_14c8464e8;
    }
    else {
      local_2e8 = *(double *)(lVar25 + 0x260);
      dStack_2e0 = *(double *)(lVar25 + 0x268);
      local_2d8 = *(double *)(lVar25 + 0x270);
    }
  }
  else {
    local_178 = (double)((ulonglong)local_178 & 0xffffffff00000000);
    uVar86 = 0;
    uVar15 = FUN_140753fde(lVar25 + 0x668,0);
    FUN_140703b8c(lVar25,&local_198,uVar15,1);
    lVar25 = *(longlong *)(param_1 + 0x2668);
    if (lVar25 == 0) {
      lVar25 = *(longlong *)(param_1 + 0x1c8);
      goto LAB_1440a2272;
    }
    if (0 < (longlong)*(int *)(lVar25 + 0x670)) {
      uVar86 = *(undefined4 *)
                (*(longlong *)(lVar25 + 0x668) + -0x14 + (longlong)*(int *)(lVar25 + 0x670) * 0x14);
    }
    local_178 = (double)((ulonglong)local_178 & 0xffffffff00000000);
    uVar15 = FUN_140753fde(lVar25 + 0x668,uVar86);
    FUN_140703b8c(lVar25,&local_2e8,uVar15,1);
  }
  lVar30 = FUN_1402d20ea(lVar13 + 0x488);
  lVar25 = local_4b8;
  if ((lVar30 != 0) && (iVar9 = *(int *)(local_4a0 + 0x2678), (longlong)iVar9 != 0)) {
    lVar23 = *(longlong *)(local_4a0 + 0x2670);
    lVar32 = 0;
    do {
      plVar26 = *(longlong **)(lVar23 + lVar32);
      if (plVar26 != (longlong *)0x0) {
        (**(code **)(*plVar26 + 0x638))(plVar26,0,lVar30);
        FUN_14347fe0c(plVar26,*(undefined8 *)(lVar25 + 0x500),uVar85);
        local_168 = (double)local_188._0_8_;
        local_178 = local_198;
        dStack_170 = dStack_190;
        FUN_1479e6904(plVar26,*(undefined8 *)(lVar25 + 0x518),&local_178);
        local_338 = local_2d8;
        local_348 = local_2e8;
        dStack_340 = dStack_2e0;
        FUN_1479e6904(plVar26,*(undefined8 *)(lVar25 + 0x520),&local_348);
      }
      lVar32 = lVar32 + 8;
    } while ((longlong)iVar9 * 8 != lVar32);
  }
  local_4b0 = (uint *)(lVar13 + 0x4c0);
  uVar19 = *(uint *)(local_4b8 + 0x4d8);
  local_498 = (ulonglong)uVar19;
  if (uVar19 == 0) {
    uVar28 = 1;
    plVar26 = (longlong *)0x0;
    iVar9 = 0;
    uVar18 = 0;
  }
  else {
    puVar17 = *(uint **)(local_4b8 + 0x4d0);
    if (*(uint **)(local_4b8 + 0x4d0) == (uint *)0x0) {
      puVar17 = local_4b0;
    }
    uVar11 = *puVar17;
    if (uVar11 == 0) {
      iVar9 = uVar19 + 0x1e;
      if (-1 < (int)(uVar19 - 1)) {
        iVar9 = uVar19 - 1;
      }
      plVar26 = (longlong *)0x0;
      plVar22 = (longlong *)(ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        plVar22 = plVar26;
      }
      iVar9 = 0;
      do {
        if (plVar22 == plVar26) goto LAB_1440a2457;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar17[(longlong)plVar26 + 1];
        plVar26 = (longlong *)((longlong)plVar26 + 1);
      } while (uVar11 == 0);
    }
    else {
      plVar26 = (longlong *)0x0;
      iVar9 = 0;
    }
    uVar28 = (ulonglong)(-uVar11 & uVar11);
    uVar18 = uVar28 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar11 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    uVar18 = (ulonglong)uVar11;
    if ((int)uVar19 <= (int)uVar11) {
      uVar18 = local_498;
    }
  }
  if ((uint)uVar18 != uVar19) {
    uVar19 = 0xffffffff;
    do {
      local_490 = (longlong *)CONCAT44(local_490._4_4_,uVar19);
      lVar13 = (longlong)(int)uVar18 * 0x38;
      local_4a8 = plVar26;
      if (*(longlong *)(*(longlong *)(local_4b8 + 0x4b0) + lVar13) != 0) {
        puVar27 = (undefined8 *)(*(longlong *)(local_4b8 + 0x4b0) + lVar13);
        lVar13 = FUN_1402d20ea(puVar27 + 1);
        if ((lVar13 != 0) && (iVar24 = *(int *)(local_4a0 + 0x2678), (longlong)iVar24 != 0)) {
          lVar25 = *(longlong *)(local_4a0 + 0x2670);
          lVar30 = 0;
          local_488 = (double)CONCAT44(local_488._4_4_,iVar9);
          do {
            plVar26 = *(longlong **)(lVar25 + lVar30);
            if (plVar26 != (longlong *)0x0) {
              (**(code **)(*plVar26 + 0x640))(plVar26,*puVar27,lVar13);
              lVar23 = local_4b8;
              FUN_14347fe0c(plVar26,*(undefined8 *)(local_4b8 + 0x500),uVar85);
              local_168 = (double)local_188._0_8_;
              local_178 = local_198;
              dStack_170 = dStack_190;
              FUN_1479e6904(plVar26,*(undefined8 *)(lVar23 + 0x518),&local_178);
              local_338 = local_2d8;
              local_348 = local_2e8;
              dStack_340 = dStack_2e0;
              iVar9 = (int)local_488;
              FUN_1479e6904(plVar26,*(undefined8 *)(lVar23 + 0x520),&local_348);
            }
            lVar30 = lVar30 + 8;
          } while ((longlong)iVar24 * 8 != lVar30);
        }
      }
      uVar19 = (uint)local_490 & ~(uint)uVar28;
      puVar17 = *(uint **)(local_4b8 + 0x4d0);
      if (*(uint **)(local_4b8 + 0x4d0) == (uint *)0x0) {
        puVar17 = local_4b0;
      }
      uVar11 = *(uint *)(local_4b8 + 0x4d8);
      iVar24 = (int)local_4a8;
      lVar13 = (longlong)iVar24;
      uVar10 = puVar17[lVar13] & uVar19;
      plVar26 = local_4a8;
      if (uVar10 == 0) {
        iVar20 = uVar11 + 0x1e;
        if (-1 < (int)(uVar11 - 1)) {
          iVar20 = uVar11 - 1;
        }
        iVar20 = iVar20 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar21 = iVar20;
        if (iVar20 < iVar24) {
          iVar21 = iVar24;
        }
        if (iVar24 < iVar20) {
          lVar25 = 0;
          do {
            uVar10 = puVar17[lVar13 + lVar25 + 1];
            if (uVar10 != 0) {
              plVar26 = (longlong *)(ulonglong)(iVar24 + (int)lVar25 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1440a2692;
            }
            iVar9 = iVar9 + 0x20;
            lVar25 = lVar25 + 1;
          } while (iVar21 - lVar13 != lVar25);
          uVar19 = 0xffffffff;
          iVar24 = iVar21;
        }
        plVar26 = (longlong *)(ulonglong)(iVar24 + 1);
        uVar10 = uVar11;
      }
      else {
LAB_1440a2692:
        uVar28 = (ulonglong)(-uVar10 & uVar10);
        uVar18 = uVar28 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar10 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar11 <= (int)uVar10) {
          uVar10 = uVar11;
        }
      }
      uVar18 = (ulonglong)uVar10;
    } while (uVar10 != (uint)local_498);
  }
LAB_1440a2457:
  if ((local_f0 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440a2790 FUN_1440a2790 body=186 status=ok
// SIG undefined FUN_1440a2790(void)

undefined8 * FUN_1440a2790(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x2668);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      param_2[2] = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8._4_4_;
      uVar3 = (undefined4)DAT_14c8464e8;
      uVar5 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar5;
      *(undefined4 *)(param_2 + 1) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x268);
    *param_2 = *(undefined8 *)(lVar1 + 0x260);
    param_2[1] = uVar2;
    param_2[2] = *(undefined8 *)(lVar1 + 0x270);
  }
  else {
    local_1c = 0;
    uVar5 = FUN_140753fde(lVar1 + 0x668,param_3);
    FUN_140703b8c(lVar1,param_2,uVar5,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1440a284c FUN_1440a284c body=79 status=ok
// SIG undefined FUN_1440a284c(void)

void FUN_1440a284c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 0x38) == '\x01') {
      uVar2 = *(int *)(param_2 + 0x44) != 0;
    }
    else {
      uVar2 = FUN_140321d1a(param_2 + 0x38);
    }
    *(undefined1 *)(param_1 + 0x2694) = uVar2;
    FUN_1440a289c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1440a289c FUN_1440a289c body=614 status=ok
// SIG undefined FUN_1440a289c(void)

void FUN_1440a289c(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1440a3652();
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,3,0x10);
    puVar4 = local_a0;
    local_98 = 3;
    *local_a0 = &PTR_LAB_14ab67120;
    *(undefined1 *)(local_a0 + 1) = param_2;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_a0[2] = lVar5;
    *local_a0 = &PTR_FUN_14b9585b0;
    local_a0[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_a0 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar7 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar7 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar6;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar7 = iVar6;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = FUN_1440a3706;
    *(undefined4 *)(puVar4 + 5) = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 0;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x26a0,&local_88,0x800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_98 != 0) {
      if (local_a0 == (undefined8 *)0x0) goto LAB_1440a2a62;
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1440a2a62:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440a2b04 FUN_1440a2b04 body=695 status=ok
// SIG undefined FUN_1440a2b04(void)

void FUN_1440a2b04(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined4 local_cc;
  char local_c8 [4];
  undefined8 local_c4;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140f05dd8();
  lVar6 = FUN_1440a0008(param_1);
  if ((lVar6 != 0) && (lVar7 = FUN_1447210f0(param_1), lVar7 != 0)) {
    cVar4 = FUN_140114204(lVar6 + 0x590);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x2694) = 1;
    }
    else {
      local_d8[0] = 0;
      local_d4 = 0;
      local_cc = 0;
      local_c8[0] = '\0';
      local_c4 = 0;
      iStack_bc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      iStack_b0 = 0;
      local_a8 = 0xc69c4000;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_47 = 1;
      local_45 = 0;
      local_44 = 0;
      FUN_1446efa72(&uStack_b8,0,3,0x10);
      iStack_b0 = 3;
      puVar2 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
      *puVar2 = &PTR_LAB_14b3e6310;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      puVar2[2] = lVar8;
      *puVar2 = &PTR_FUN_14b958540;
      puVar2[3] = 0;
      iVar5 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(puVar2 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar5 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar5 = *(int *)(lVar10 + 0x10);
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar5 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar2 + 0x1c) = iVar5;
      puVar2[4] = FUN_1440a284c;
      *(undefined4 *)(puVar2 + 5) = 0;
      lVar7 = FUN_140149a73(lVar7,0);
      if (lVar7 == 0) {
        local_44 = 2;
      }
      else {
        FUN_140983ba6(lVar6 + 0x590,lVar7,local_d8);
      }
      if (local_c8[0] == '\x01') {
        uVar11 = iStack_bc != 0;
      }
      else {
        uVar11 = FUN_140321d1a(local_c8);
      }
      *(undefined1 *)(param_1 + 0x2694) = uVar11;
      plVar3 = (longlong *)CONCAT44(uStack_b4,uStack_b8);
      if (plVar3 == (longlong *)0x0 || iStack_b0 == 0) {
        local_e0 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_e0);
      }
      *(undefined8 *)(param_1 + 0x2698) = local_e0;
      FUN_1409838b8(local_d8);
    }
  }
  FUN_1440a289c(param_1,1);
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1440a2dbc(param_1);
  return;
}



// FUNCTION 1440a2dbc FUN_1440a2dbc body=1969 status=ok
// SIG undefined FUN_1440a2dbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440a2dbc(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double *pdVar3;
  float fVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  double *pdVar16;
  longlong *plVar17;
  undefined8 uVar18;
  float *pfVar19;
  byte bVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  float fVar35;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  longlong lStack_230;
  undefined8 *local_228 [21];
  longlong local_180;
  uint local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_168 = DAT_14cbc2020;
  uStack_160 = CONCAT44(uStack_160._4_4_,0xffffffff);
  FUN_140c823b2(param_1 + 0x4d8,&local_238,&local_168);
  lVar12 = DAT_14c9a6400;
  lVar10 = CONCAT44(uStack_234,local_238);
  if (lVar10 != DAT_14c9a6400) {
    if (0 < *(int *)(param_1 + 0x2690)) {
      iVar23 = 0;
      do {
        FUN_140cba244(param_1 + 0x2518,iVar23);
        FUN_1418e7ef6(param_1 + 0x24f0);
        iVar23 = iVar23 + 1;
      } while (iVar23 < *(int *)(param_1 + 0x2690));
    }
    *(undefined4 *)(param_1 + 0x2690) = 0;
    goto LAB_1440a2ecd;
  }
  if ((0 < *(int *)(param_1 + 0x2690)) || (local_250 = FUN_1440a0008(param_1), local_250 == 0))
  goto LAB_1440a2ecd;
  local_108 = 0;
  uStack_100 = 0;
  lVar15 = FUN_1440a0008();
  if ((lVar15 == 0) ||
     ((lVar22 = *(longlong *)(param_1 + 0x2668), lVar22 == 0 ||
      ((longlong)*(int *)(lVar22 + 0x670) < 1)))) {
LAB_1440a3131:
    lVar15 = 0;
  }
  else {
    fVar24 = *(float *)(*(longlong *)(lVar22 + 0x668) +
                       (longlong)*(int *)(lVar22 + 0x670) * 0x14 + -0x14);
    if (fVar24 <= 0.0) goto LAB_1440a3131;
    pfVar19 = (float *)(param_1 + 0x262c);
    if (*(char *)(param_1 + 0x2628) == '\0') {
      pfVar19 = (float *)(lVar15 + 0x55c);
    }
    fVar4 = *pfVar19;
    pfVar19 = (float *)(param_1 + 0x265c);
    if (*(char *)(param_1 + 0x2658) == '\0') {
      pfVar19 = (float *)(lVar15 + 0x55c);
    }
    fVar30 = (fVar24 - *pfVar19) - fVar4;
    fVar35 = 0.0;
    if (0.0 <= fVar30) {
      fVar35 = fVar30;
    }
    if (fVar35 <= 0.0) {
      local_238 = 0;
      FUN_140753fde(lVar22 + 0x668,fVar24 * 0.5);
      FUN_140703b8c(lVar22,&local_238);
      uVar13 = uStack_100;
      lVar15 = (longlong)(int)uStack_100;
      uVar14 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar14);
      if (uStack_100._4_4_ < uVar14) {
        FUN_1403e3958(&local_108,uVar13 & 0xffffffff);
      }
      *(undefined8 **)(local_108 + 0x10 + lVar15 * 0x18) = local_228[0];
      puVar2 = (undefined8 *)(local_108 + lVar15 * 0x18);
      *puVar2 = CONCAT44(uStack_234,local_238);
      puVar2[1] = lStack_230;
      lVar15 = local_108;
    }
    else {
      fVar24 = fVar35 / *(float *)(lVar15 + 0x558);
      iVar23 = (int)ROUND(fVar24 + fVar24 + 0.5) >> 1;
      if (iVar23 < 2) {
        iVar23 = 1;
      }
      iVar21 = 0;
      do {
        lVar15 = *(longlong *)(param_1 + 0x2668);
        local_238 = 0;
        FUN_140753fde(lVar15 + 0x668,(float)iVar21 * (fVar35 / (float)iVar23) + fVar4,&local_238);
        FUN_140703b8c(lVar15,&local_238);
        uVar13 = uStack_100;
        lVar15 = (longlong)(int)uStack_100;
        uVar14 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar14);
        if (uStack_100._4_4_ < uVar14) {
          FUN_1403e3958(&local_108,uVar13 & 0xffffffff);
        }
        *(undefined8 **)(local_108 + 0x10 + lVar15 * 0x18) = local_228[0];
        puVar2 = (undefined8 *)(local_108 + lVar15 * 0x18);
        *puVar2 = CONCAT44(uStack_234,local_238);
        puVar2[1] = lStack_230;
        iVar21 = iVar21 + 1;
        lVar15 = local_108;
      } while (iVar23 + 1 != iVar21);
    }
  }
  auVar11 = _DAT_149934d80;
  if (0 < (int)uStack_100) {
    local_250 = local_250 + 0x52c;
    local_240 = param_1 + 0x24f0;
    plVar1 = (longlong *)(param_1 + 0x2518);
    local_248 = param_1 + 0x2550;
    lVar22 = 0;
    do {
      pdVar3 = (double *)(local_108 + lVar22 * 0x18);
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_14c = 0x3ff00000;
      local_128 = auVar11;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0;
      lVar15 = *(longlong *)(param_1 + 0x1c8);
      pdVar16 = (double *)(lVar15 + 0x240);
      if (lVar15 == 0) {
        pdVar16 = (double *)&DAT_14c846480;
      }
      dVar6 = *pdVar3 - pdVar16[4];
      dVar7 = pdVar3[1] - pdVar16[5];
      dVar27 = *(double *)(local_108 + 0x10 + lVar22 * 0x18) - pdVar16[6];
      dVar8 = -*pdVar16;
      dVar9 = -pdVar16[1];
      dVar25 = pdVar16[2] * -1.0;
      dVar26 = pdVar16[3] * 1.0;
      dVar34 = dVar6 * dVar25 - dVar8 * dVar27;
      dVar31 = dVar7 * dVar8 - dVar6 * dVar9;
      dVar33 = dVar27 * dVar9 - dVar7 * dVar25;
      dVar33 = dVar33 + dVar33;
      dVar34 = dVar34 + dVar34;
      dVar31 = dVar31 + dVar31;
      auVar32 = *(undefined1 (*) [16])(pdVar16 + 8);
      auVar28 = divpd(auVar11,auVar32);
      auVar29._8_8_ = 0x3ff0000000000000;
      auVar29._0_8_ = pdVar16[10];
      local_148 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar32._0_8_)) & auVar28._0_8_)
                  * ((dVar31 * dVar9 - dVar34 * dVar25) + dVar26 * dVar33 + dVar6);
      dStack_140 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar32._8_8_)) & auVar28._8_8_)
                   * (dVar31 * *pdVar16 + dVar25 * dVar33 + dVar26 * dVar34 + dVar7);
      auVar32 = divpd(ZEXT816(0x3ff0000000000000),auVar29);
      local_138 = (dVar26 * dVar31 + dVar27 + (dVar34 * dVar8 - dVar33 * dVar9)) *
                  (double)(-(ulonglong)(9.99999993922529e-09 < ABS(pdVar16[10])) & auVar32._0_8_);
      uStack_130 = 0;
      local_16c = (uint)lVar22;
      local_258 = local_250;
      local_260 = 0;
      local_268 = &local_168;
      FUN_148d41afa(&local_238,param_1,lVar15,0);
      if (*(int *)(param_1 + 0x2520) != *(int *)(param_1 + 0x254c)) {
        lVar15 = *(longlong *)(param_1 + 0x2558);
        if (*(longlong *)(param_1 + 0x2558) == 0) {
          lVar15 = local_248;
        }
        iVar23 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0x2560) - 1U & local_16c) * 4);
        if (iVar23 != -1) {
          do {
            if (*(uint *)(*plVar1 + (longlong)iVar23 * 0xe0) == local_16c) {
              uVar18 = FUN_140df1a8c(plVar1,local_16c,&local_16c);
              FUN_148cc8e28(&local_238,uVar18);
              break;
            }
            iVar23 = *(int *)((longlong)iVar23 * 0xe0 + *plVar1 + 0xd0);
          } while (iVar23 != -1);
        }
      }
      plVar17 = (longlong *)FUN_140df1a8c(plVar1,local_16c,&local_16c);
      lVar15 = CONCAT44(uStack_234,local_238);
      if (DAT_14c950c29 == 1) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = CONCAT44(uStack_234,local_238);
        }
      }
      bVar20 = DAT_14c950c29;
      *plVar17 = lVar15;
      lVar15 = lStack_230;
      if ((bVar20 & 1) != 0) {
        if (lStack_230 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = lStack_230;
          bVar20 = DAT_14c950c29;
        }
      }
      plVar17[1] = lVar15;
      memcpy(plVar17 + 2,local_228,0xa4);
      lVar15 = local_180;
      if ((bVar20 & 1) != 0) {
        if (local_180 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = local_180;
        }
      }
      plVar17[0x17] = lVar15;
      FUN_1418e7ef6(local_240);
      lVar22 = lVar22 + 1;
      lVar15 = local_108;
    } while (lVar22 < (int)uStack_100);
  }
  *(int *)(param_1 + 0x2690) = (int)uStack_100;
  if (lVar15 != 0) {
    FUN_1400020a8();
  }
LAB_1440a2ecd:
  lVar15 = FUN_1440a0008(param_1);
  if (((lVar15 != 0) && (*(char *)(lVar15 + 0x514) == '\x01')) &&
     (iVar23 = *(int *)(param_1 + 0x2678), (longlong)iVar23 != 0)) {
    lVar15 = *(longlong *)(param_1 + 0x2670);
    lVar22 = 0;
    do {
      lVar5 = *(longlong *)(lVar15 + lVar22);
      if (lVar5 != 0) {
        FUN_1449e3cec(lVar5,lVar10 != lVar12,1);
      }
      lVar22 = lVar22 + 8;
    } while ((longlong)iVar23 * 8 != lVar22);
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440a356e FUN_1440a356e body=227 status=ok
// SIG undefined FUN_1440a356e(void)

void FUN_1440a356e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (0 < *(int *)(param_1 + 0x2690)) {
    iVar5 = 0;
    do {
      FUN_140cba244(param_1 + 0x2518,iVar5);
      FUN_1418e7ef6(param_1 + 0x24f0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x2690));
  }
  *(undefined4 *)(param_1 + 0x2690) = 0;
  if (*(longlong *)(param_1 + 0x2698) != 0) {
    lVar3 = FUN_1447210f0(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_1440a0008(param_1);
      if (lVar4 != 0) {
        cVar2 = FUN_140114204(lVar4 + 0x590);
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x2694) = 0;
          uVar1 = *(undefined8 *)(param_1 + 0x2698);
          lVar3 = FUN_140149a73(lVar3,0);
          if (lVar3 != 0) {
            FUN_140825b72(lVar4 + 0x590,uVar1,lVar3,0);
          }
        }
      }
    }
  }
  FUN_140d6119a(param_1,param_2);
  FUN_1440a3652(param_1);
  FUN_1440a3706(param_1,1);
  return;
}



// FUNCTION 1440a3652 FUN_1440a3652 body=179 status=ok
// SIG undefined FUN_1440a3652(void)

void FUN_1440a3652(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x26a0) != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = *(longlong *)(param_1 + 0x26a0);
      if (lVar2 != 0) {
        lVar1 = *plVar3;
        uVar4 = (uint)lVar2;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar5 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar5 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
               (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x26a0) = 0;
  }
  return;
}



// FUNCTION 1440a3706 FUN_1440a3706 body=288 status=ok
// SIG undefined FUN_1440a3706(void)

void FUN_1440a3706(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_1440a3806;
  FUN_1440a3652();
  if ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) {
    local_50 = DAT_14cbc2018;
    local_48 = 0xffffffff;
    FUN_140c823b2(param_1 + 0x4d8,&local_40);
    if (local_40 != DAT_14c9a6400) goto LAB_1440a377e;
    uVar1 = (undefined4)
            CONCAT71((int7)((ulonglong)&local_40 >> 8),*(undefined1 *)(param_1 + 0x2694));
  }
  else {
LAB_1440a377e:
    uVar1 = 0;
  }
  param_1 = param_1 + 0x4d8;
  local_50 = DAT_14cbc2020;
  local_48 = 0xffffffff;
  FUN_140c823b2(param_1,&local_40);
  if ((bool)(char)uVar1 != (local_40 == DAT_14c9a6400)) {
    if (param_2 == '\0') {
      local_30 = FUN_1406400be(param_1);
    }
    else {
      local_30 = 0xc61c4000;
    }
    local_2c = 1;
    local_40 = DAT_14cbc2020;
    local_38 = 0xffffffff;
    FUN_141094e00(param_1,&local_40,uVar1);
  }
LAB_1440a3806:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a3828 FUN_1440a3828 body=131 status=ok
// SIG undefined FUN_1440a3828(void)

void FUN_1440a3828(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  param_1 = param_1 + -0x398;
  FUN_140bfc8e6();
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      if (*(longlong *)(param_2 + 0x68) == DAT_14cbc2018) {
        FUN_1440a289c(param_1,*(float *)(param_2 + 0x84) <= 0.0 && *(float *)(param_2 + 0x84) != 0.0
                     );
        return;
      }
      if (*(longlong *)(param_2 + 0x68) == DAT_14cbc2020) {
        FUN_1440a2dbc(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440a38ac FUN_1440a38ac body=1248 status=ok
// SIG undefined FUN_1440a38ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1440a38ac(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined4 local_330;
  uint *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  uint local_308;
  undefined8 local_304;
  undefined1 local_2f8 [4];
  undefined4 local_2f4;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 local_254;
  undefined4 local_228;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [4];
  undefined4 local_1c4;
  undefined1 local_1b8 [148];
  undefined4 local_124;
  undefined4 local_f8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar13 = FUN_1440a0008();
  lVar14 = FUN_1447210f0(param_1);
  if ((((lVar13 != 0) && (*(longlong *)(param_1 + 0x2668) != 0)) && (lVar14 != 0)) &&
     ((plVar2 = (longlong *)param_3[0x3e], plVar2 != (longlong *)0x0 && (param_3[0x22] != 0)))) {
    lVar13 = 0;
    memset(local_1c8,0,0x100);
    local_f8 = 0xffffffff;
    local_124 = 0xffffffff;
    local_1c4 = 0x3f800000;
    local_1cc = 0;
    local_1d0 = 0;
    (**(code **)(*plVar2 + 0x528))(plVar2);
    local_a4 = 0;
    local_a0 = 0x101;
    local_78 = 0;
    local_70 = 0x800000000;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x400000000;
    local_b8 = 0;
    local_ac = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b7 = 1;
    local_b5 = 0;
    local_a8 = 0;
    local_b4 = 0x1000000;
    local_b0 = 1;
    local_1e8 = _DAT_14cad0ee0;
    uStack_1e0 = uRam000000014cad0ee8;
    local_1f8 = _DAT_14cad0ed0;
    uStack_1f0 = _DAT_14cad0ed8;
    do {
      cVar11 = *(char *)((longlong)&uStack_1f0 + lVar13 + 5);
      cVar8 = *(char *)((longlong)&uStack_1f0 + lVar13 + 6);
      cVar9 = *(char *)((longlong)&uStack_1f0 + lVar13 + 7);
      bVar3 = *(char *)((longlong)&local_1f8 + lVar13) == DAT_149c360b0;
      bVar4 = *(char *)((longlong)&local_1f8 + lVar13 + 1) == DAT_149c360b0._1_1_;
      bVar5 = *(char *)((longlong)&local_1f8 + lVar13 + 2) == DAT_149c360b0._2_1_;
      bVar6 = *(char *)((longlong)&local_1f8 + lVar13 + 3) == DAT_149c360b0._3_1_;
      bVar7 = *(char *)((longlong)&local_1f8 + lVar13 + 4) == DAT_149c360b0._4_1_;
      if ((bool)(~bVar3 & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13) = 2;
      }
      if ((bool)(~bVar4 & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13 + 1) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13 + 2) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13 + 3) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13 + 4) = 2;
      }
      if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar13 + 5) == DAT_149c360b0._5_1_) & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13 + 5) = 2;
      }
      if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar13 + 6) == DAT_149c360b0._6_1_) & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13 + 6) = 2;
      }
      if ((bool)(~(*(char *)((longlong)&local_1f8 + lVar13 + 7) == DAT_149c360b0._7_1_) & 1)) {
        *(undefined1 *)((longlong)&local_1f8 + lVar13 + 7) = 2;
      }
      if ((bool)(~bVar3 & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13) = 2;
      }
      if ((bool)(~bVar4 & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13 + 1) = 2;
      }
      if ((bool)(~bVar5 & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13 + 2) = 2;
      }
      if ((bool)(~bVar6 & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13 + 3) = 2;
      }
      if ((bool)(~bVar7 & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13 + 4) = 2;
      }
      if ((bool)(~(cVar11 == DAT_149c360b0._13_1_) & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13 + 5) = 2;
      }
      if ((bool)(~(cVar8 == DAT_149c360b0._14_1_) & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13 + 6) = 2;
      }
      if ((bool)(~(cVar9 == DAT_149c360b0._15_1_) & 1)) {
        *(undefined1 *)((longlong)&uStack_1f0 + lVar13 + 7) = 2;
      }
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x20);
    (**(code **)(*param_3 + 0x4d8))(param_3,&local_c8,&local_1f8);
    uVar10 = local_50;
    uVar1 = *(undefined4 *)((longlong)plVar2 + 0xc);
    lVar13 = (longlong)(int)local_50;
    uVar12 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar12);
    if (local_50._4_4_ < uVar12) {
      FUN_1447de67e(local_68,uVar10 & 0xffffffff);
    }
    puVar15 = local_68;
    if (local_58 != (undefined1 *)0x0) {
      puVar15 = local_58;
    }
    *(undefined4 *)(puVar15 + lVar13 * 4) = uVar1;
    local_308 = 3;
    local_304 = CONCAT44(local_1d0,local_1cc);
    local_330 = (**(code **)(*(longlong *)param_3[0x22] + 0x580))();
    local_320 = &local_c8;
    local_338 = &DAT_14c8463d0;
    local_328 = &local_308;
    local_318 = &local_1f8;
    cVar11 = FUN_14021655c(lVar14,local_1c8,param_4,param_5);
    if (cVar11 != '\0') {
      local_308 = 0;
      local_304 = 0;
      memset(local_2f8,0,0x100);
      local_228 = 0xffffffff;
      local_254 = 0xffffffff;
      local_2f4 = 0x3f800000;
      local_338 = (undefined8 *)0x0;
      (**(code **)(*param_3 + 0x900))(param_3,local_1b8,&local_308,0);
      if (((local_308 ^ 0xffffffff) & 3) == 0) {
        param_2[2] = local_2d8;
        *param_2 = local_2e8;
        param_2[1] = uStack_2e0;
        *(undefined1 *)(param_2 + 3) = 1;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1440a3d4c;
      }
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_2 + 3) = 0;
LAB_1440a3d4c:
  if ((local_48 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a3d8e FUN_1440a3d8e body=507 status=ok
// SIG undefined FUN_1440a3d8e(void)

undefined1 (*) [16]
FUN_1440a3d8e(longlong param_1,undefined1 (*param_2) [16],longlong param_3,char param_4)

{
  double dVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_98 [32];
  float local_78;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = 0x2630;
  if (param_4 != '\0') {
    lVar9 = 0x2600;
  }
  if (*(char *)(param_1 + lVar9) == '\x01') {
    plVar2 = *(longlong **)(param_3 + 0x1f0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x528))(plVar2,local_74,&local_78);
      pdVar8 = (double *)&DAT_14c846480;
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        pdVar8 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
      }
      dVar10 = (*(double *)(param_1 + 8 + lVar9) + 0.0) * pdVar8[8];
      dVar11 = (*(double *)(param_1 + 0x10 + lVar9) + 0.0) * pdVar8[9];
      dVar12 = ((double)(local_78 - *(float *)(param_1 + 0x2660)) +
               *(double *)(param_1 + 0x18 + lVar9)) * pdVar8[10];
      dVar5 = *pdVar8;
      dVar6 = pdVar8[1];
      dVar7 = pdVar8[2];
      dVar1 = pdVar8[3];
      dVar13 = dVar11 * dVar5 - dVar10 * dVar6;
      dVar14 = dVar12 * dVar6 - dVar11 * dVar7;
      dVar15 = dVar10 * dVar7 - dVar5 * dVar12;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      dVar4 = (dVar7 * dVar14 - dVar5 * dVar13) + pdVar8[3] * dVar15 + dVar11 + pdVar8[5];
      dVar11 = pdVar8[6];
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = (dVar13 * dVar6 - dVar15 * dVar7) + dVar1 * dVar14 + dVar10 + pdVar8[4];
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *param_2 = auVar3;
      *(double *)param_2[1] = dVar13 * dVar1 + dVar12 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar11;
      param_2[1][8] = 1;
      goto LAB_1440a3f55;
    }
  }
  else if (*(char *)(param_1 + lVar9) == '\0') {
    FUN_1440a3f90(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_98);
  }
  param_2[1][8] = 0;
LAB_1440a3f55:
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a3f90 FUN_1440a3f90 body=2228 status=ok
// SIG undefined FUN_1440a3f90(void)

longlong FUN_1440a3f90(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double *pdVar13;
  longlong lVar14;
  undefined4 uVar15;
  float fVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_188 [32];
  double *local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar11 = FUN_1440a0008();
  if ((lVar11 == 0) || (lVar14 = *(longlong *)(param_1 + 0x2668), lVar14 == 0)) {
LAB_1440a462e:
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  else {
    if (param_4 == '\0') {
      if ((longlong)*(int *)(lVar14 + 0x670) < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)
                  (*(longlong *)(lVar14 + 0x668) + -0x14 + (longlong)*(int *)(lVar14 + 0x670) * 0x14
                  );
      }
      local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
      uVar2 = FUN_140753fde(lVar14 + 0x668,uVar15);
      dVar12 = (double)FUN_140703b8c(lVar14,&local_130,uVar2,1);
      uVar15 = (undefined4)lVar14;
      if (*(char *)(param_1 + 0x25fa) == '\x01') goto LAB_1440a413e;
      lVar14 = *(longlong *)(param_1 + 0x2668);
      uVar15 = 0;
      if (0 < (longlong)*(int *)(lVar14 + 0x670)) {
        uVar15 = *(undefined4 *)
                  (*(longlong *)(lVar14 + 0x668) + -0x14 + (longlong)*(int *)(lVar14 + 0x670) * 0x14
                  );
      }
      FUN_147a1dad4(lVar14,&local_118,uVar15,1);
      uVar15 = SUB84(local_118,0);
      uVar17 = (uint)((ulonglong)local_118 >> 0x20);
      uVar18 = SUB84(uStack_110,0);
      uVar19 = (uint)((ulonglong)uStack_110 >> 0x20);
    }
    else {
      local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
      uVar2 = FUN_140753fde(lVar14 + 0x668,0);
      dVar12 = (double)FUN_140703b8c(lVar14,&local_130,uVar2,1);
      uVar15 = (undefined4)lVar14;
      if (*(char *)(param_1 + 0x25fa) != '\0') {
LAB_1440a413e:
        if (*(char *)(param_1 + 0x25fb) == '\x01') {
          dVar20 = *(double *)(param_3 + 0x388);
          dVar1 = *(double *)(param_3 + 0x390);
          dVar6 = 1.0 / SQRT(dVar20 * dVar20 + dVar1 * dVar1);
          dVar1 = dVar1 * dVar6;
          dVar6 = dVar6 * dVar20;
          uVar18 = 0;
          uVar17 = 0;
          if ((ABS(dVar6) <= 9.999999747378752e-05) && (ABS(dVar1) <= 9.999999747378752e-05)) {
            lVar14 = param_3 + 0x44d8;
            dVar12 = (double)FUN_1440f1430(lVar14,&local_118);
            uVar15 = (undefined4)lVar14;
            uVar17 = (uint)((ulonglong)local_108 >> 0x20) ^ 0x80000000;
            uVar18 = SUB84(local_108,0);
            dVar1 = -uStack_110;
            dVar6 = -local_118;
          }
        }
        else {
          uVar18 = SUB84(DAT_14c8464f0,0);
          uVar17 = (uint)((ulonglong)DAT_14c8464f0 >> 0x20);
          dVar1 = DAT_14c8464e8;
          dVar6 = DAT_14c8464e0;
        }
        if (((ABS(dVar6) <= 9.999999747378752e-05) && (ABS(dVar1) <= 9.999999747378752e-05)) &&
           (ABS((double)CONCAT44(uVar17,uVar18)) <= 9.999999747378752e-05)) {
          lVar14 = *(longlong *)(param_1 + 0x1c8);
          if (lVar14 == 0) {
            uVar15 = SUB84(DAT_14c8464f8,0);
            uVar18 = SUB84(DAT_14c846500,0);
          }
          else {
            dVar1 = *(double *)(lVar14 + 0x240);
            dVar6 = *(double *)(lVar14 + 0x248);
            dVar20 = *(double *)(lVar14 + 0x250);
            dVar3 = *(double *)(lVar14 + 600);
            pdVar13 = *(double **)(lVar14 + 0x228);
            local_118 = dVar1;
            uStack_110 = dVar6;
            local_108 = dVar20;
            uStack_100 = dVar3;
            if (pdVar13 == (double *)0x0) {
              uVar15 = 0x40;
              pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
              dVar12 = DAT_14c8463d8;
              *pdVar13 = DAT_14c8463d0;
              pdVar13[1] = dVar12;
              dVar12 = DAT_14c8463e8;
              pdVar13[2] = DAT_14c8463e0;
              pdVar13[3] = dVar12;
              dVar12 = DAT_14c846500;
              pdVar13[4] = DAT_14c8464f8;
              pdVar13[5] = dVar12;
              dVar12 = DAT_14c846508;
              pdVar13[6] = DAT_14c846508;
              *(double **)(lVar14 + 0x228) = pdVar13;
            }
            auVar4._8_4_ = (int)-(ulonglong)(dVar6 != pdVar13[1]);
            auVar4._0_8_ = -(ulonglong)(dVar1 != *pdVar13);
            auVar4._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar13[1]) >> 0x20);
            iVar10 = movmskpd(SUB84(dVar12,0),auVar4);
            auVar5._8_4_ = (int)-(ulonglong)(dVar3 != pdVar13[3]);
            auVar5._0_8_ = -(ulonglong)(dVar20 != pdVar13[2]);
            auVar5._12_4_ = (int)(-(ulonglong)(dVar3 != pdVar13[3]) >> 0x20);
            uVar17 = movmskpd(uVar15,auVar5);
            if ((uVar17 & 0x3fffffff) != 0 || iVar10 != 0) {
              *(undefined4 *)(pdVar13 + 2) = (undefined4)local_108;
              *(undefined4 *)((longlong)pdVar13 + 0x14) = local_108._4_4_;
              *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_100;
              *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_100._4_4_;
              *(undefined4 *)pdVar13 = (undefined4)local_118;
              *(uint *)((longlong)pdVar13 + 4) = local_118._4_4_;
              *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_110;
              *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_110._4_4_;
              FUN_1448052ee(&local_118,&local_f8);
              pdVar13[6] = local_e8;
              pdVar13[4] = local_f8;
              pdVar13[5] = dStack_f0;
            }
            uVar15 = SUB84(pdVar13[4],0);
            uVar18 = SUB84(pdVar13[5],0);
          }
          dVar1 = (double)FUN_144719204(uVar15,0);
          dVar6 = (double)FUN_144719204(uVar18,0);
          dVar12 = sin(dVar1 * 0.017453292519943295);
          dVar20 = cos(dVar1 * 0.017453292519943295);
          dVar1 = sin(dVar6 * 0.017453292519943295);
          dVar6 = cos(dVar6 * 0.017453292519943295);
          dVar1 = dVar1 * dVar20;
          dVar6 = dVar6 * dVar20;
          dVar20 = dVar6 * dVar6 + dVar1 * dVar1;
          if ((dVar20 != 1.0) || (NAN(dVar20))) {
            if (9.99999993922529e-09 <= dVar20) {
              dVar1 = dVar1 * (1.0 / SQRT(dVar20));
              dVar6 = dVar6 * (1.0 / SQRT(dVar20));
              uVar18 = 0;
              uVar17 = 0;
            }
            else {
              uVar18 = SUB84(DAT_14c8464f0,0);
              uVar17 = (uint)((ulonglong)DAT_14c8464f0 >> 0x20);
              dVar1 = DAT_14c8464e8;
              dVar6 = DAT_14c8464e0;
            }
          }
          else {
            uVar8 = -(ulonglong)(dVar12 == 0.0) & (ulonglong)dVar12;
            uVar18 = (undefined4)uVar8;
            uVar17 = (uint)(uVar8 >> 0x20);
          }
        }
        dVar12 = (double)*(float *)(lVar11 + 0x578);
        dVar20 = (double)CONCAT44(uVar17,uVar18) * dVar12;
        dVar1 = dVar1 * dVar12;
        local_150 = (double)*(float *)(lVar11 + 0x57c) + local_120;
        local_160 = local_128 + 0.0;
        local_158 = local_130 + 0.0;
        dVar6 = dVar6 * dVar12;
        uVar17 = 0;
        do {
          uVar19 = uVar17 + 1;
          fVar16 = (float)(uVar19 >> 1) * 22.5;
          if ((uVar17 & 1) == 0) {
            fVar16 = -fVar16;
          }
          dVar12 = sin((double)fVar16 * 0.017453292519943295);
          dVar3 = cos((double)fVar16 * 0.017453292519943295);
          dVar7 = 1.0 - dVar3;
          dVar22 = DAT_14c8462c0 * DAT_14c8462d0 * dVar7;
          dVar9 = DAT_14c8462c8 * DAT_14c8462d0 * dVar7;
          dVar21 = DAT_14c8462c0 * DAT_14c8462c8 * dVar7;
          local_108 = (DAT_14c8462d0 * DAT_14c8462d0 * dVar7 + dVar3) * dVar20 +
                      (dVar22 - dVar12 * DAT_14c8462c8) * dVar6 +
                      (dVar9 + dVar12 * DAT_14c8462c0) * dVar1 + local_150;
          uStack_110 = (dVar9 - dVar12 * DAT_14c8462c0) * dVar20 +
                       (dVar21 + dVar12 * DAT_14c8462d0) * dVar6 +
                       (DAT_14c8462c8 * DAT_14c8462c8 * dVar7 + dVar3) * dVar1 + local_160;
          local_118 = (dVar22 + dVar12 * DAT_14c8462c8) * dVar20 +
                      (dVar7 * DAT_14c8462c0 * DAT_14c8462c0 + dVar3) * dVar6 +
                      (dVar21 - dVar12 * DAT_14c8462d0) * dVar1 + local_158;
          local_e8 = local_108 - (double)*(float *)(lVar11 + 0x580);
          local_168 = &local_f8;
          local_f8 = local_118;
          dStack_f0 = uStack_110;
          FUN_1440a38ac(param_1,param_2,param_3,&local_118);
          if (*(char *)(param_2 + 0x18) != '\0') goto LAB_1440a4632;
          uVar17 = uVar19;
        } while (uVar19 != 8);
        goto LAB_1440a462e;
      }
      FUN_147a1dad4(*(undefined8 *)(param_1 + 0x2668),&local_f8,0,1);
      local_108 = -local_e8;
      uVar19 = (uint)((ulonglong)dStack_f0 >> 0x20) ^ 0x80000000;
      uVar18 = SUB84(dStack_f0,0);
      uVar17 = (uint)((ulonglong)local_f8 >> 0x20) ^ 0x80000000;
      uVar15 = SUB84(local_f8,0);
    }
    dVar12 = (double)CONCAT44(uVar17,uVar15) * (double)CONCAT44(uVar17,uVar15) +
             (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar19,uVar18);
    if ((dVar12 != 1.0) || (NAN(dVar12))) {
      dVar20 = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      dVar6 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar12) {
        dVar20 = 0.0;
        dVar1 = (double)CONCAT44(uVar19,uVar18) * (1.0 / SQRT(dVar12));
        dVar6 = (double)CONCAT44(uVar17,uVar15) * (1.0 / SQRT(dVar12));
      }
    }
    else {
      dVar20 = (double)(-(ulonglong)(local_108 == 0.0) & (ulonglong)local_108);
      dVar1 = (double)CONCAT44(uVar19,uVar18);
      dVar6 = (double)CONCAT44(uVar17,uVar15);
    }
    dVar12 = (double)*(float *)(lVar11 + 0x568);
    local_e8 = dVar20 * dVar12 + local_120;
    local_140 = dVar1 * dVar12 + local_128;
    local_148 = dVar6 * dVar12 + local_130;
    local_138 = local_e8 - (double)*(float *)(lVar11 + 0x570);
    local_168 = &local_148;
    local_f8 = local_148;
    dStack_f0 = local_140;
    FUN_1440a38ac(param_1,param_2,param_3);
  }
LAB_1440a4632:
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1440a4846 FUN_1440a4846 body=54 status=ok
// SIG undefined FUN_1440a4846(void)

void FUN_1440a4846(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1440a0008(param_1 + -0x1ad8);
  if (lVar1 != 0) {
    *param_3 = *(undefined4 *)(lVar1 + 0x560);
    *param_4 = 0;
  }
  return;
}



// FUNCTION 1440a487c FUN_1440a487c body=777 status=ok
// SIG undefined FUN_1440a487c(void)

undefined8 FUN_1440a487c(longlong param_1,longlong *param_2,longlong param_3,undefined1 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*param_2 != 0) && (plVar3 = (longlong *)param_2[1], plVar3 != (longlong *)0x0)) {
    if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar3 = plVar3 + 0x143;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if ((int)plVar3[6] != *(int *)((longlong)plVar3 + 0x5c)) {
      plVar6 = plVar3 + 0xc;
      if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar3[0xd];
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)plVar3[0xe] - 1U & *(uint *)(param_2 + 2)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(plVar3[5] + (longlong)iVar5 * 0xe0) == *(uint *)(param_2 + 2)) {
            *param_4 = 3;
            puVar8 = &DAT_14cbcb1e0;
            if ((*param_2 == 0) || (plVar3 = (longlong *)param_2[1], plVar3 == (longlong *)0x0))
            goto LAB_1440a49ee;
            if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_144a7e90a) {
              plVar3 = plVar3 + 0x143;
            }
            else {
              plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
            }
            if ((int)plVar3[6] == *(int *)((longlong)plVar3 + 0x5c)) goto LAB_1440a49ee;
            uVar1 = *(uint *)(param_2 + 2);
            plVar6 = plVar3 + 0xc;
            if ((longlong *)plVar3[0xd] != (longlong *)0x0) {
              plVar6 = (longlong *)plVar3[0xd];
            }
            iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[0xe] - 1U & uVar1) * 4);
            if (iVar5 == -1) goto LAB_1440a49ee;
            lVar2 = plVar3[5];
            iVar7 = iVar5;
            goto LAB_1440a49a6;
          }
          iVar5 = *(int *)(plVar3[5] + ((longlong)iVar5 * 0x1c + 0x1a) * 8);
        } while (iVar5 != -1);
      }
    }
  }
  goto LAB_1440a4a3e;
  while (iVar7 = *(int *)((longlong)iVar7 * 0xe0 + lVar2 + 0xd0), iVar7 != -1) {
LAB_1440a49a6:
    if (*(uint *)(lVar2 + (longlong)iVar7 * 0xe0) == uVar1) goto LAB_1440a49c8;
  }
  goto LAB_1440a49ee;
  while (iVar5 = *(int *)(lVar9 + 0xd0), iVar5 != -1) {
LAB_1440a49c8:
    lVar9 = lVar2 + (longlong)iVar5 * 0xe0;
    if (*(uint *)(lVar2 + (longlong)iVar5 * 0xe0) == uVar1) goto LAB_1440a49ea;
  }
  lVar9 = 0;
LAB_1440a49ea:
  puVar8 = (undefined8 *)(lVar9 + 0x10);
LAB_1440a49ee:
  FUN_1449a52e6(puVar8,&local_50);
  *(undefined8 *)(param_4 + 0x18) = local_40;
  *(undefined4 *)(param_4 + 8) = (undefined4)local_50;
  *(undefined4 *)(param_4 + 0xc) = local_50._4_4_;
  *(undefined4 *)(param_4 + 0x10) = uStack_48;
  *(undefined4 *)(param_4 + 0x14) = uStack_44;
  if (param_3 != 0) {
    if (DAT_14cba8288 == 0) {
      local_50 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      local_70 = &local_50;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
        (*(longlong *)(&DAT_00006850 + param_3) != 0)) &&
       ((lVar2 = *(longlong *)(param_3 + 0x438), lVar2 != 0 &&
        (lVar9 = *(longlong *)(*(longlong *)(&DAT_00006850 + param_3) + 0x4210), lVar9 != 0)))) {
      lVar4 = lVar9 + 0x940;
      if (*(char *)(param_1 + 0xb22) == '\0') {
        lVar4 = lVar9 + 0x908;
      }
      *(double *)(param_4 + 0x18) =
           *(double *)(param_4 + 0x18) -
           (double)((float)*(double *)(lVar2 + 0x290) * *(float *)(lVar2 + 0x640) +
                   *(float *)(lVar4 + 0x2c));
    }
  }
LAB_1440a4a3e:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1440a4b86 FUN_1440a4b86 body=322 status=ok
// SIG undefined FUN_1440a4b86(void)

void FUN_1440a4b86(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x2668);
  fVar8 = 0.0;
  if ((lVar2 != 0) && (0 < (longlong)*(int *)(lVar2 + 0x670))) {
    fVar8 = *(float *)(*(longlong *)(lVar2 + 0x668) + -0x14 +
                      (longlong)*(int *)(lVar2 + 0x670) * 0x14);
  }
  *param_2 = 0.0;
  *param_3 = fVar8;
  if ((*(longlong *)(param_1 + 0x2668) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2668) + 0x695) != '\0')) {
    return;
  }
  lVar2 = FUN_1440a0008(param_1);
  if (lVar2 == 0) {
    return;
  }
  if ((((*(char *)(param_1 + 0x25fa) != '\x01') || (lVar3 = FUN_1440a0008(param_1), lVar3 == 0)) ||
      (*(char *)(lVar3 + 0x564) == '\0')) && (cVar1 = *(char *)(param_1 + 0x25f8), cVar1 != '\x01'))
  {
    pfVar5 = (float *)(lVar2 + 0x574);
    if (*(char *)(param_1 + 0x25fa) != '\0') {
      pfVar5 = (float *)(lVar2 + 0x588);
    }
    pfVar4 = (float *)(param_1 + 0x2624);
    if (*(char *)(param_1 + 0x2620) == '\0') {
      pfVar4 = pfVar5;
    }
    fVar6 = *pfVar4;
    *param_2 = fVar6;
    if (cVar1 == '\x02') goto LAB_1440a4c9a;
  }
  pfVar5 = (float *)(lVar2 + 0x588);
  if (*(char *)(param_1 + 0x25fa) == '\0') {
    pfVar5 = (float *)(lVar2 + 0x574);
  }
  pfVar4 = (float *)(param_1 + 0x2654);
  if (*(char *)(param_1 + 0x2650) == '\0') {
    pfVar4 = pfVar5;
  }
  *param_3 = fVar8 - *pfVar4;
  fVar6 = *param_2;
LAB_1440a4c9a:
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *param_2 = fVar6;
  fVar7 = *param_3;
  if (fVar8 <= *param_3) {
    fVar7 = fVar8;
  }
  if (fVar7 <= fVar6) {
    fVar7 = fVar6;
  }
  *param_3 = fVar7;
  return;
}



// FUNCTION 1440a4cc8 FUN_1440a4cc8 body=313 status=ok
// SIG undefined FUN_1440a4cc8(void)

ulonglong FUN_1440a4cc8(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (*(longlong *)(&DAT_00006850 + param_2) != 0)) {
      plVar2 = (longlong *)FUN_1440efc04();
      if (plVar2 == param_1 + -0x35b) {
        uVar1 = 0;
        goto LAB_1440a4d21;
      }
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  uVar1 = uVar1 ^ 1;
LAB_1440a4d21:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a4e02 FUN_1440a4e02 body=153 status=ok
// SIG undefined FUN_1440a4e02(void)

double * FUN_1440a4e02(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_2[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if (*(longlong *)(param_1 + 0x2668) != 0) {
    FUN_147a1dad4(*(longlong *)(param_1 + 0x2668),param_2,param_3,1);
  }
  if (((ABS(*param_2) <= 9.999999747378752e-05) && (ABS(param_2[1]) <= 9.999999747378752e-05)) &&
     (ABS(param_2[2]) <= 9.999999747378752e-05)) {
    param_2[2] = DAT_14c8462e8;
    dVar1 = DAT_14c8462e0;
    *param_2 = DAT_14c8462d8;
    param_2[1] = dVar1;
  }
  return param_2;
}



// FUNCTION 1440a4e9b FUN_1440a4e9b body=91 status=ok
// SIG undefined FUN_1440a4e9b(void)

void FUN_1440a4e9b(void)

{
  if (DAT_14cbc1a28 != 0) {
    if (DAT_14cbc1a20 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbc1a20)(DAT_14cbc1a20,0);
    FUN_1446efa72(&DAT_14cbc1a20,0,0,0x10);
    DAT_14cbc1a28 = 0;
  }
  if (DAT_14cbc1a20 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1440a4ef6 FUN_1440a4ef6 body=48 status=ok
// SIG undefined FUN_1440a4ef6(void)

longlong FUN_1440a4ef6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a4f26 FUN_1440a4f26 body=48 status=ok
// SIG undefined FUN_1440a4f26(void)

longlong FUN_1440a4f26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a4f56 FUN_1440a4f56 body=48 status=ok
// SIG undefined FUN_1440a4f56(void)

longlong FUN_1440a4f56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a4f86 FUN_1440a4f86 body=48 status=ok
// SIG undefined FUN_1440a4f86(void)

longlong FUN_1440a4f86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a4fb6 FUN_1440a4fb6 body=132 status=ok
// SIG undefined FUN_1440a4fb6(void)

undefined8 * FUN_1440a4fb6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9522d0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1440a6ab0(param_1 + 6,0);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a503a FUN_1440a503a body=38 status=ok
// SIG undefined FUN_1440a503a(void)

undefined8 FUN_1440a503a(undefined8 param_1,int param_2)

{
  FUN_14409f390();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5060 FUN_1440a5060 body=48 status=ok
// SIG undefined FUN_1440a5060(void)

longlong FUN_1440a5060(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5090 FUN_1440a5090 body=48 status=ok
// SIG undefined FUN_1440a5090(void)

longlong FUN_1440a5090(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a50c0 FUN_1440a50c0 body=48 status=ok
// SIG undefined FUN_1440a50c0(void)

longlong FUN_1440a50c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a50f0 FUN_1440a50f0 body=48 status=ok
// SIG undefined FUN_1440a50f0(void)

longlong FUN_1440a50f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5120 FUN_1440a5120 body=48 status=ok
// SIG undefined FUN_1440a5120(void)

longlong FUN_1440a5120(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5150 FUN_1440a5150 body=48 status=ok
// SIG undefined FUN_1440a5150(void)

longlong FUN_1440a5150(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5180 FUN_1440a5180 body=48 status=ok
// SIG undefined FUN_1440a5180(void)

longlong FUN_1440a5180(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a51b0 FUN_1440a51b0 body=48 status=ok
// SIG undefined FUN_1440a51b0(void)

longlong FUN_1440a51b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a51e0 FUN_1440a51e0 body=48 status=ok
// SIG undefined FUN_1440a51e0(void)

longlong FUN_1440a51e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5210 FUN_1440a5210 body=48 status=ok
// SIG undefined FUN_1440a5210(void)

longlong FUN_1440a5210(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5240 FUN_1440a5240 body=48 status=ok
// SIG undefined FUN_1440a5240(void)

longlong FUN_1440a5240(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5270 FUN_1440a5270 body=48 status=ok
// SIG undefined FUN_1440a5270(void)

longlong FUN_1440a5270(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a52a0 FUN_1440a52a0 body=48 status=ok
// SIG undefined FUN_1440a52a0(void)

longlong FUN_1440a52a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a52d0 FUN_1440a52d0 body=48 status=ok
// SIG undefined FUN_1440a52d0(void)

longlong FUN_1440a52d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5300 FUN_1440a5300 body=48 status=ok
// SIG undefined FUN_1440a5300(void)

longlong FUN_1440a5300(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5330 FUN_1440a5330 body=48 status=ok
// SIG undefined FUN_1440a5330(void)

longlong FUN_1440a5330(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5360 FUN_1440a5360 body=48 status=ok
// SIG undefined FUN_1440a5360(void)

longlong FUN_1440a5360(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5390 FUN_1440a5390 body=48 status=ok
// SIG undefined FUN_1440a5390(void)

longlong FUN_1440a5390(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a53c0 FUN_1440a53c0 body=48 status=ok
// SIG undefined FUN_1440a53c0(void)

longlong FUN_1440a53c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a53f0 FUN_1440a53f0 body=48 status=ok
// SIG undefined FUN_1440a53f0(void)

longlong FUN_1440a53f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5420 FUN_1440a5420 body=48 status=ok
// SIG undefined FUN_1440a5420(void)

longlong FUN_1440a5420(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5450 FUN_1440a5450 body=48 status=ok
// SIG undefined FUN_1440a5450(void)

longlong FUN_1440a5450(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5480 FUN_1440a5480 body=48 status=ok
// SIG undefined FUN_1440a5480(void)

longlong FUN_1440a5480(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a54b0 FUN_1440a54b0 body=48 status=ok
// SIG undefined FUN_1440a54b0(void)

longlong FUN_1440a54b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a54e0 FUN_1440a54e0 body=48 status=ok
// SIG undefined FUN_1440a54e0(void)

longlong FUN_1440a54e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5510 FUN_1440a5510 body=48 status=ok
// SIG undefined FUN_1440a5510(void)

longlong FUN_1440a5510(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5540 FUN_1440a5540 body=48 status=ok
// SIG undefined FUN_1440a5540(void)

longlong FUN_1440a5540(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5570 FUN_1440a5570 body=48 status=ok
// SIG undefined FUN_1440a5570(void)

longlong FUN_1440a5570(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a55a0 FUN_1440a55a0 body=48 status=ok
// SIG undefined FUN_1440a55a0(void)

longlong FUN_1440a55a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a55d0 FUN_1440a55d0 body=48 status=ok
// SIG undefined FUN_1440a55d0(void)

longlong FUN_1440a55d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5600 FUN_1440a5600 body=48 status=ok
// SIG undefined FUN_1440a5600(void)

longlong FUN_1440a5600(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5630 FUN_1440a5630 body=48 status=ok
// SIG undefined FUN_1440a5630(void)

longlong FUN_1440a5630(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5660 FUN_1440a5660 body=48 status=ok
// SIG undefined FUN_1440a5660(void)

longlong FUN_1440a5660(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5690 FUN_1440a5690 body=48 status=ok
// SIG undefined FUN_1440a5690(void)

longlong FUN_1440a5690(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a56c0 FUN_1440a56c0 body=48 status=ok
// SIG undefined FUN_1440a56c0(void)

longlong FUN_1440a56c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a56f0 FUN_1440a56f0 body=48 status=ok
// SIG undefined FUN_1440a56f0(void)

longlong FUN_1440a56f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5720 FUN_1440a5720 body=48 status=ok
// SIG undefined FUN_1440a5720(void)

longlong FUN_1440a5720(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5754 FUN_1440a5754 body=48 status=ok
// SIG undefined FUN_1440a5754(void)

longlong FUN_1440a5754(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_14409f390(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5784 FUN_1440a5784 body=48 status=ok
// SIG undefined FUN_1440a5784(void)

longlong FUN_1440a5784(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a57b4 FUN_1440a57b4 body=48 status=ok
// SIG undefined FUN_1440a57b4(void)

longlong FUN_1440a57b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a57e4 FUN_1440a57e4 body=48 status=ok
// SIG undefined FUN_1440a57e4(void)

longlong FUN_1440a57e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5814 FUN_1440a5814 body=48 status=ok
// SIG undefined FUN_1440a5814(void)

longlong FUN_1440a5814(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5844 FUN_1440a5844 body=48 status=ok
// SIG undefined FUN_1440a5844(void)

longlong FUN_1440a5844(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5874 FUN_1440a5874 body=48 status=ok
// SIG undefined FUN_1440a5874(void)

longlong FUN_1440a5874(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a58a4 FUN_1440a58a4 body=48 status=ok
// SIG undefined FUN_1440a58a4(void)

longlong FUN_1440a58a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a58d4 FUN_1440a58d4 body=48 status=ok
// SIG undefined FUN_1440a58d4(void)

longlong FUN_1440a58d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5904 FUN_1440a5904 body=48 status=ok
// SIG undefined FUN_1440a5904(void)

longlong FUN_1440a5904(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a596a FUN_1440a596a body=73 status=ok
// SIG undefined FUN_1440a596a(void)

void FUN_1440a596a(undefined8 param_1,void *param_2)

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



// FUNCTION 1440a59f8 FUN_1440a59f8 body=29 status=ok
// SIG undefined FUN_1440a59f8(void)

undefined8 FUN_1440a59f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5a58 FUN_1440a5a58 body=54 status=ok
// SIG undefined FUN_1440a5a58(void)

undefined1 FUN_1440a5a58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c133ae(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1440a5ab6 FUN_1440a5ab6 body=59 status=ok
// SIG undefined FUN_1440a5ab6(void)

undefined8 FUN_1440a5ab6(longlong *param_1)

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



// FUNCTION 1440a5afc FUN_1440a5afc body=37 status=ok
// SIG undefined FUN_1440a5afc(void)

void FUN_1440a5afc(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1440a5b72 FUN_1440a5b72 body=29 status=ok
// SIG undefined FUN_1440a5b72(void)

undefined8 FUN_1440a5b72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5bd2 FUN_1440a5bd2 body=54 status=ok
// SIG undefined FUN_1440a5bd2(void)

undefined1 FUN_1440a5bd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1335e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1440a5c30 FUN_1440a5c30 body=59 status=ok
// SIG undefined FUN_1440a5c30(void)

undefined8 FUN_1440a5c30(longlong *param_1)

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



// FUNCTION 1440a5c76 FUN_1440a5c76 body=37 status=ok
// SIG undefined FUN_1440a5c76(void)

void FUN_1440a5c76(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1440a5cec FUN_1440a5cec body=29 status=ok
// SIG undefined FUN_1440a5cec(void)

undefined8 FUN_1440a5cec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5d4c FUN_1440a5d4c body=54 status=ok
// SIG undefined FUN_1440a5d4c(void)

undefined1 FUN_1440a5d4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cbcd46(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1440a5daa FUN_1440a5daa body=59 status=ok
// SIG undefined FUN_1440a5daa(void)

undefined8 FUN_1440a5daa(longlong *param_1)

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



// FUNCTION 1440a5df0 FUN_1440a5df0 body=37 status=ok
// SIG undefined FUN_1440a5df0(void)

void FUN_1440a5df0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1440a5e66 FUN_1440a5e66 body=29 status=ok
// SIG undefined FUN_1440a5e66(void)

undefined8 FUN_1440a5e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a5ea2 FUN_1440a5ea2 body=44 status=ok
// SIG undefined FUN_1440a5ea2(void)

void FUN_1440a5ea2(undefined8 param_1,longlong *param_2)

{
  FUN_140741dda(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1440a5ee4 FUN_1440a5ee4 body=54 status=ok
// SIG undefined FUN_1440a5ee4(void)

undefined1 FUN_1440a5ee4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878159e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1440a5f42 FUN_1440a5f42 body=59 status=ok
// SIG undefined FUN_1440a5f42(void)

undefined8 FUN_1440a5f42(longlong *param_1)

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



// FUNCTION 1440a5f88 FUN_1440a5f88 body=48 status=ok
// SIG undefined FUN_1440a5f88(void)

void FUN_1440a5f88(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    FUN_140741dda(*param_2,(int)param_2[1]);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1440a6008 FUN_1440a6008 body=29 status=ok
// SIG undefined FUN_1440a6008(void)

undefined8 FUN_1440a6008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a6068 FUN_1440a6068 body=546 status=ok
// SIG undefined FUN_1440a6068(void)

undefined8 FUN_1440a6068(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      if (*(char *)(param_3 + 0x10 + lVar8) == '\0') {
        *(undefined1 *)(param_2 + 0x10 + lVar8) = 0;
        *(undefined8 *)(param_2 + 8 + lVar8) = *(undefined8 *)(param_3 + 8 + lVar8);
      }
      *(undefined4 *)(param_2 + 0x18 + lVar8) = *(undefined4 *)(param_3 + 0x18 + lVar8);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      if (param_2 + lVar8 == param_3 + lVar8) {
        *(undefined8 *)(param_2 + 0x40 + lVar8) = *(undefined8 *)(param_3 + 0x40 + lVar8);
        *(undefined8 *)(param_2 + 0x58 + lVar8) = *(undefined8 *)(param_3 + 0x58 + lVar8);
        *(undefined8 *)(param_2 + 0x70 + lVar8) = *(undefined8 *)(param_3 + 0x70 + lVar8);
      }
      else {
        FUN_1440a6372(*(undefined8 *)(param_2 + 0x30 + lVar8),
                      *(undefined4 *)(param_2 + 0x38 + lVar8));
        iVar3 = *(int *)(param_3 + 0x38 + lVar8);
        uVar4 = *(undefined8 *)(param_3 + 0x30 + lVar8);
        *(int *)(param_2 + 0x38 + lVar8) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x3c + lVar8) == 0) {
          *(undefined4 *)(param_2 + 0x3c + lVar8) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar8 + 0x30);
          FUN_1440a639e(puVar9,iVar3);
          FUN_1440a647e(*puVar9,uVar4,iVar3);
        }
        *(undefined8 *)(param_2 + 0x40 + lVar8) = *(undefined8 *)(param_3 + 0x40 + lVar8);
        FUN_1440a64f6(*(undefined8 *)(param_2 + 0x48 + lVar8),
                      *(undefined4 *)(param_2 + 0x50 + lVar8));
        iVar3 = *(int *)(param_3 + 0x50 + lVar8);
        uVar4 = *(undefined8 *)(param_3 + 0x48 + lVar8);
        *(int *)(param_2 + 0x50 + lVar8) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x54 + lVar8) == 0) {
          *(undefined4 *)(param_2 + 0x54 + lVar8) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar8 + 0x48);
          FUN_1440a6522(puVar9,iVar3);
          FUN_1440a6602(*puVar9,uVar4,iVar3);
        }
        *(undefined8 *)(param_2 + 0x58 + lVar8) = *(undefined8 *)(param_3 + 0x58 + lVar8);
        FUN_1440a666f(*(undefined8 *)(param_2 + 0x60 + lVar8),
                      *(undefined4 *)(param_2 + 0x68 + lVar8));
        iVar3 = *(int *)(param_3 + 0x68 + lVar8);
        uVar4 = *(undefined8 *)(param_3 + 0x60 + lVar8);
        *(int *)(param_2 + 0x68 + lVar8) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x6c + lVar8) == 0) {
          *(undefined4 *)(param_2 + 0x6c + lVar8) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar8 + 0x60);
          FUN_1440a669a(puVar9,iVar3);
          FUN_1440a677a(*puVar9,uVar4,iVar3);
        }
        *(undefined8 *)(param_2 + 0x70 + lVar8) = *(undefined8 *)(param_3 + 0x70 + lVar8);
        FUN_1440a67e7(*(undefined8 *)(param_2 + 0x78 + lVar8),
                      *(undefined4 *)(param_2 + 0x80 + lVar8));
        iVar3 = *(int *)(param_3 + 0x80 + lVar8);
        uVar4 = *(undefined8 *)(param_3 + 0x78 + lVar8);
        *(int *)(param_2 + 0x80 + lVar8) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x84 + lVar8) == 0) {
          *(undefined4 *)(param_2 + 0x84 + lVar8) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar8 + 0x78);
          FUN_1440a681e(puVar9,iVar3);
          FUN_1440a68fe(*puVar9,uVar4,iVar3);
        }
      }
      lVar8 = lVar8 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1440a62b2 FUN_1440a62b2 body=59 status=ok
// SIG undefined FUN_1440a62b2(void)

undefined8 FUN_1440a62b2(longlong *param_1)

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



// FUNCTION 1440a62fe FUN_1440a62fe body=38 status=ok
// SIG undefined FUN_1440a62fe(void)

void FUN_1440a62fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1440a696c(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1440a6372 FUN_1440a6372 body=43 status=ok
// SIG undefined FUN_1440a6372(void)

void FUN_1440a6372(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1440a639e FUN_1440a639e body=224 status=ok
// SIG undefined FUN_1440a639e(void)

void FUN_1440a639e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1440a647e FUN_1440a647e body=120 status=ok
// SIG undefined FUN_1440a647e(void)

void FUN_1440a647e(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_148c134f8(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1440a64f6 FUN_1440a64f6 body=43 status=ok
// SIG undefined FUN_1440a64f6(void)

void FUN_1440a64f6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1440a6522 FUN_1440a6522 body=224 status=ok
// SIG undefined FUN_1440a6522(void)

void FUN_1440a6522(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1440a6602 FUN_1440a6602 body=109 status=ok
// SIG undefined FUN_1440a6602(void)

void FUN_1440a6602(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_148c13408(param_1,iVar1,0);
        FUN_148c1347b(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1440a666f FUN_1440a666f body=43 status=ok
// SIG undefined FUN_1440a666f(void)

void FUN_1440a666f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1440a669a FUN_1440a669a body=224 status=ok
// SIG undefined FUN_1440a669a(void)

void FUN_1440a669a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1440a677a FUN_1440a677a body=109 status=ok
// SIG undefined FUN_1440a677a(void)

void FUN_1440a677a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_148cbcd96(param_1,iVar1,0);
        FUN_148cbce09(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1440a67e7 FUN_1440a67e7 body=54 status=ok
// SIG undefined FUN_1440a67e7(void)

void FUN_1440a67e7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140741dda(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1440a681e FUN_1440a681e body=224 status=ok
// SIG undefined FUN_1440a681e(void)

void FUN_1440a681e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1440a68fe FUN_1440a68fe body=109 status=ok
// SIG undefined FUN_1440a68fe(void)

void FUN_1440a68fe(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1487816c8(param_1,iVar1,0);
        FUN_148781737(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1440a696c FUN_1440a696c body=229 status=ok
// SIG undefined FUN_1440a696c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440a696c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b9595c0;
  FUN_1440a67e7(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1440a666f(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1440a64f6(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1440a6372(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001440a6a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1440a6a52 FUN_1440a6a52 body=38 status=ok
// SIG undefined FUN_1440a6a52(void)

undefined8 FUN_1440a6a52(undefined8 param_1,int param_2)

{
  FUN_1440a696c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a6a78 FUN_1440a6a78 body=55 status=ok
// SIG undefined FUN_1440a6a78(void)

void FUN_1440a6a78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc14a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc14a0 = FUN_140002ddd(FUN_14409eb67,uVar1,L"WeeklyGlobals");
  }
  return;
}



// FUNCTION 1440a6ab0 FUN_1440a6ab0 body=521 status=ok
// SIG undefined FUN_1440a6ab0(void)

void FUN_1440a6ab0(longlong *param_1,int param_2)

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
        if (uVar14 == uVar13) goto LAB_1440a6c1f;
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
      lVar10 = (longlong)iVar4 * 0x20;
      FUN_1440a6cba(*(undefined8 *)(lVar11 + 8 + lVar10),*(undefined4 *)(lVar11 + 0x10 + lVar10));
      if (*(longlong *)(lVar11 + 8 + lVar10) != 0) {
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
          if (iVar7 - lVar11 == lVar10) goto LAB_1440a6c1f;
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
LAB_1440a6c1f:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1440a6cba FUN_1440a6cba body=47 status=ok
// SIG undefined FUN_1440a6cba(void)

void FUN_1440a6cba(longlong param_1,int param_2)

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



// FUNCTION 1440a6d2c FUN_1440a6d2c body=57 status=ok
// SIG undefined FUN_1440a6d2c(void)

void FUN_1440a6d2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1500 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1500 = FUN_140002ddd(FUN_14661bac2,uVar1,L"WorldRegionDef");
  }
  return;
}



// FUNCTION 1440a6d66 FUN_1440a6d66 body=29 status=ok
// SIG undefined FUN_1440a6d66(void)

undefined8 FUN_1440a6d66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a6e5e FUN_1440a6e5e body=59 status=ok
// SIG undefined FUN_1440a6e5e(void)

undefined8 FUN_1440a6e5e(longlong *param_1)

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



// FUNCTION 1440a6f00 FUN_1440a6f00 body=29 status=ok
// SIG undefined FUN_1440a6f00(void)

undefined8 FUN_1440a6f00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a6fb6 FUN_1440a6fb6 body=59 status=ok
// SIG undefined FUN_1440a6fb6(void)

undefined8 FUN_1440a6fb6(longlong *param_1)

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



// FUNCTION 1440a7058 FUN_1440a7058 body=29 status=ok
// SIG undefined FUN_1440a7058(void)

undefined8 FUN_1440a7058(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a70f8 FUN_1440a70f8 body=59 status=ok
// SIG undefined FUN_1440a70f8(void)

undefined8 FUN_1440a70f8(longlong *param_1)

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



// FUNCTION 1440a719a FUN_1440a719a body=29 status=ok
// SIG undefined FUN_1440a719a(void)

undefined8 FUN_1440a719a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a71fa FUN_1440a71fa body=430 status=ok
// SIG undefined FUN_1440a71fa(void)

undefined8 FUN_1440a71fa(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_2 + 0x478);
    do {
      FUN_148b897b2(puVar7 + -0x8f,param_3);
      *(undefined4 *)(puVar7 + -4) = *(undefined4 *)(param_3 + 0x8b);
      puVar7[-3] = param_3[0x8c];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x46c);
      uVar4 = *(undefined4 *)(param_3 + 0x8e);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x474);
      *(undefined4 *)(puVar7 + -2) = *(undefined4 *)(param_3 + 0x8d);
      *(undefined4 *)((longlong)puVar7 + -0xc) = uVar3;
      *(undefined4 *)(puVar7 + -1) = uVar4;
      *(undefined4 *)((longlong)puVar7 + -4) = uVar5;
      if (puVar7 + -0x8f == param_3) {
        puVar7[2] = param_3[0x91];
        uVar6 = param_3[0x93];
        puVar7[3] = param_3[0x92];
        puVar7[4] = uVar6;
      }
      else {
        iVar1 = *(int *)(param_3 + 0x90);
        pvVar2 = (void *)param_3[0x8f];
        *(int *)(puVar7 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar7 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar7,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar7,pvVar2,(longlong)iVar1 * 2);
          }
        }
        puVar7[2] = param_3[0x91];
        uVar3 = *(undefined4 *)((longlong)param_3 + 0x494);
        uVar4 = *(undefined4 *)(param_3 + 0x93);
        uVar5 = *(undefined4 *)((longlong)param_3 + 0x49c);
        *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_3 + 0x92);
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar3;
        *(undefined4 *)(puVar7 + 4) = uVar4;
        *(undefined4 *)((longlong)puVar7 + 0x24) = uVar5;
        iVar1 = *(int *)(param_3 + 0x95);
        pvVar2 = (void *)param_3[0x94];
        *(int *)(puVar7 + 6) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar7 + 0x34) == 0) {
          *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
        }
        else {
          FUN_1446dd670(puVar7 + 5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)puVar7[5],pvVar2,(longlong)iVar1 * 2);
          }
        }
      }
      FUN_143c443e8(puVar7 + 7,param_3 + 0x96);
      memcpy(puVar7 + 0x11,param_3 + 0xa0,0x8c);
      puVar7[0x23] = param_3[0xb2];
      *(undefined4 *)(puVar7 + 0x24) = *(undefined4 *)(param_3 + 0xb3);
      FUN_1447715ec(puVar7 + 0x25,param_3 + 0xb4);
      puVar7 = puVar7 + 0xb9;
      param_3 = param_3 + 0xb9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1440a73d0 FUN_1440a73d0 body=59 status=ok
// SIG undefined FUN_1440a73d0(void)

undefined8 FUN_1440a73d0(longlong *param_1)

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



// FUNCTION 1440a741c FUN_1440a741c body=38 status=ok
// SIG undefined FUN_1440a741c(void)

void FUN_1440a741c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x5c8) == '\x01') {
    FUN_1440a74b6(param_2);
    *(undefined1 *)(param_2 + 0x5c8) = 0;
  }
  return;
}



// FUNCTION 1440a74b6 FUN_1440a74b6 body=208 status=ok
// SIG undefined FUN_1440a74b6(void)

void FUN_1440a74b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b959c60;
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9f) = 0;
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  FUN_143c44106(param_1 + 0x96);
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  return;
}



// FUNCTION 1440a7586 FUN_1440a7586 body=38 status=ok
// SIG undefined FUN_1440a7586(void)

undefined8 FUN_1440a7586(undefined8 param_1,int param_2)

{
  FUN_1440a74b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a75ac FUN_1440a75ac body=55 status=ok
// SIG undefined FUN_1440a75ac(void)

void FUN_1440a75ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc15d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc15d0 = FUN_140002ddd(FUN_14409f749,uVar1,L"ZiplineDef");
  }
  return;
}



// FUNCTION 1440a761a FUN_1440a761a body=57 status=ok
// SIG undefined FUN_1440a761a(void)

void FUN_1440a761a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1648 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1648 = FUN_140002ddd(FUN_14661bd29,uVar1,L"ZoneTravelStationObjectDef");
  }
  return;
}



// FUNCTION 1440a7654 FUN_1440a7654 body=1288 status=ok
// SIG undefined FUN_1440a7654(void)

bool FUN_1440a7654(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = param_1[1];
  lVar7 = *(longlong *)(param_2 + 0x90);
  if (lVar7 == 0) {
    uVar6 = FUN_140da11f2();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x90) = lVar7;
  }
  if (*(longlong *)(param_2 + 0x98) == 0) {
    if ((lVar7 != 0) && (*(longlong *)(param_2 + 0x88) != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_2 + 0x98) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(param_2 + 0x88));
        *(longlong *)(param_2 + 0x98) = lVar7;
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(param_2 + 0x90);
          goto LAB_1440a76b2;
        }
      }
    }
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0;
    puVar11 = &DAT_14caa8558;
    if (*(longlong *)(lVar10 + 0x40) != 0) {
      puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x40) + 0x18);
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_1403de7ba(&local_88,puVar11);
    if ((longlong)*(int *)(param_2 + 0xa8) != 0) {
      plVar14 = *(longlong **)(param_2 + 0xa0);
      plVar2 = plVar14 + (longlong)*(int *)(param_2 + 0xa8) * 9;
      do {
        if ((longlong)(int)plVar14[1] != 0) {
          plVar8 = (longlong *)*plVar14;
          plVar13 = plVar8 + (int)plVar14[1];
          do {
            if ((int)uStack_80 != 0) {
              lVar10 = 0;
              do {
                if (*(longlong *)(local_88 + lVar10) == *plVar8) goto LAB_1440a7826;
                lVar10 = lVar10 + 8;
              } while ((longlong)(int)uStack_80 << 3 != lVar10);
            }
            if ((int)uStack_70 == 0) goto LAB_1440a7944;
            lVar10 = 0;
            while (*(longlong *)(local_78 + lVar10) != *plVar8) {
              lVar10 = lVar10 + 8;
              if ((longlong)(int)uStack_70 << 3 == lVar10) goto LAB_1440a7944;
            }
LAB_1440a7826:
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar13);
        }
        lVar10 = plVar14[7];
        if (lVar10 == 0) {
          uVar6 = FUN_140da11b8();
          lVar10 = FUN_14477b664(uVar6);
          plVar14[7] = lVar10;
        }
        if (plVar14[8] == 0) {
          if ((lVar10 != 0) && (plVar14[6] != 0)) {
            plVar13 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar13 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
              plVar14[8] = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar13 + 0x110))(plVar13);
              lVar10 = FUN_144aff482(uVar6,plVar14 + 6);
              plVar14[8] = lVar10;
              if (lVar10 != 0) goto LAB_1440a7854;
            }
          }
          iVar1 = (int)plVar14[5];
          if (iVar1 != 0) {
            if (iVar1 < 1) {
              iVar12 = 0;
            }
            else {
              uVar4 = rand();
              iVar5 = (int)((float)iVar1 * ((float)(uVar4 & 0x7fff) / 32767.0));
              iVar12 = iVar1 + -1;
              if (iVar5 < iVar1 + -1) {
                iVar12 = iVar5;
              }
            }
            plVar13 = (longlong *)((longlong)iVar12 * 0x18 + plVar14[4]);
            if (lStack_a0 == 0) {
              uVar6 = FUN_14036a63e();
              lStack_a0 = FUN_14477b664(uVar6);
            }
            lVar10 = plVar13[1];
            if (lVar10 == 0) {
              lVar10 = FUN_140da11f2();
            }
            lVar7 = *plVar13;
            lVar9 = FUN_14477b664(lVar10);
            lVar10 = plVar13[2];
            goto LAB_1440a788c;
          }
        }
        else {
LAB_1440a7854:
          if (lStack_a0 == 0) {
            uVar6 = FUN_14036a63e();
            lStack_a0 = FUN_14477b664(uVar6);
          }
          lVar10 = plVar14[7];
          if (lVar10 == 0) {
            lVar10 = FUN_140da11b8();
          }
          lVar7 = plVar14[6];
          lVar9 = FUN_14477b664(lVar10);
          lVar10 = plVar14[8];
LAB_1440a788c:
          if (local_a8 != lVar7) {
            local_98 = 0;
          }
          if (lStack_a0 != lVar9) {
            local_98 = 0;
          }
          local_a8 = lVar7;
          uVar6 = FUN_14477b664(lVar9);
          lStack_a0 = FUN_14477b664(uVar6);
          local_98 = lVar10;
        }
        if (lStack_a0 == 0) {
          uVar6 = FUN_14036a63e();
          lStack_a0 = FUN_14477b664(uVar6);
        }
        if (local_98 != 0) break;
        if ((lStack_a0 != 0) && (local_a8 != 0)) {
          plVar13 = *(longlong **)(lStack_a0 + 0xb8);
          if ((plVar13 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
            local_98 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar13 + 0x110))(plVar13);
            local_98 = FUN_144aff482(uVar6,&local_a8);
          }
          if (local_98 != 0) break;
        }
LAB_1440a7944:
        plVar14 = plVar14 + 9;
      } while (plVar14 != plVar2);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    lVar10 = local_a8;
    if (local_88 != 0) {
      FUN_1400020a8();
      lVar10 = local_a8;
    }
  }
  else {
LAB_1440a76b2:
    if (lVar7 == 0) {
      lVar7 = FUN_140da11f2();
    }
    lVar10 = *(longlong *)(param_2 + 0x88);
    local_a8 = lVar10;
    lStack_a0 = FUN_14477b664(lVar7);
    local_98 = *(longlong *)(param_2 + 0x98);
  }
  plVar2 = (longlong *)*param_1;
  if (*plVar2 != lVar10) {
    plVar2[2] = 0;
  }
  *plVar2 = lVar10;
  if (plVar2[1] != lStack_a0) {
    plVar2[2] = 0;
  }
  uVar6 = FUN_14477b664();
  lVar10 = FUN_14477b664(uVar6);
  plVar2[1] = lVar10;
  plVar2[2] = local_98;
  param_1 = (longlong *)*param_1;
  lVar10 = param_1[1];
  if (lVar10 == 0) {
    uVar6 = FUN_14036a63e();
    lVar10 = FUN_14477b664(uVar6);
    param_1[1] = lVar10;
  }
  if (param_1[2] == 0) {
    bVar15 = true;
    if ((lVar10 != 0) && (*param_1 != 0)) {
      plVar2 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar10 = FUN_144aff482(uVar6,param_1);
      }
      param_1[2] = lVar10;
      bVar15 = lVar10 == 0;
    }
  }
  else {
    bVar15 = false;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar15;
}



// FUNCTION 1440a7b76 FUN_1440a7b76 body=5 status=ok
// SIG undefined FUN_1440a7b76(void)

longlong FUN_1440a7b76(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1440a7b7c FUN_1440a7b7c body=12 status=ok
// SIG undefined FUN_1440a7b7c(void)

void FUN_1440a7b7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001440a7b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1440a7b88 FUN_1440a7b88 body=29 status=ok
// SIG undefined FUN_1440a7b88(void)

undefined8 FUN_1440a7b88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a7ba6 FUN_1440a7ba6 body=31 status=ok
// SIG undefined FUN_1440a7ba6(void)

undefined8 FUN_1440a7ba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a7c14 FUN_1440a7c14 body=29 status=ok
// SIG undefined FUN_1440a7c14(void)

undefined8 FUN_1440a7c14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a7c46 FUN_1440a7c46 body=101 status=ok
// SIG undefined FUN_1440a7c46(void)

void FUN_1440a7c46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b958410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1440a7cac FUN_1440a7cac body=101 status=ok
// SIG undefined FUN_1440a7cac(void)

void FUN_1440a7cac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b958410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1440a7d12 FUN_1440a7d12 body=134 status=ok
// SIG undefined FUN_1440a7d12(void)

void FUN_1440a7d12(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b958410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440a7d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440a7df2 FUN_1440a7df2 body=100 status=ok
// SIG undefined FUN_1440a7df2(void)

undefined8 FUN_1440a7df2(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1440a7e3e;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_1440a7e3e;
    }
  }
  uVar2 = 0;
LAB_1440a7e3e:
  FUN_1409c2518(uVar2,param_1 + 0x20,param_1 + 0x2c);
  return 1;
}



// FUNCTION 1440a7e56 FUN_1440a7e56 body=556 status=ok
// SIG undefined FUN_1440a7e56(void)

void FUN_1440a7e56(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((plVar6 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
      ((lVar3 = *plVar6, lVar3 != 0 && (*(longlong *)(lVar3 + 0x2620) != 0)))))) {
    plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x2620) + 0x2a8);
    if ((DAT_14c950c29 == '\x01') && (plVar6 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar6);
    }
    else if (plVar6 == (longlong *)0x0) goto LAB_1440a8030;
    FUN_1405e47c6(plVar6,0);
    lVar5 = *(longlong *)(lVar3 + 0x1c8);
    if ((lVar5 != 0) && (plVar4 = (longlong *)plVar6[0x39], plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x490))(plVar4,lVar5,&DAT_14cadada0,0);
      lVar5 = *(longlong *)(lVar3 + 0x1c8);
    }
    puVar7 = &DAT_14c846480;
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar5 + 0x240);
    }
    local_78 = 0;
    FUN_14113775c(plVar6,puVar7,0,0);
    lVar5 = FUN_1447210f0(lVar3);
    if (lVar5 != 0) {
      lVar5 = FUN_1447210f0(lVar3);
      bVar1 = *(byte *)(lVar5 + 0x152);
      if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
        local_78 = 0;
        (**(code **)(*plVar6 + 800))(plVar6,0,local_30,&local_48);
        lVar5 = FUN_148ccbb3e(lVar3);
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        *(longlong *)(lVar3 + 0x2618) = lVar5;
        FUN_140486fc4(lVar5,*(undefined8 *)(lVar3 + 0x1c8),0);
        (**(code **)(**(longlong **)(lVar3 + 0x2618) + 0x728))
                  (*(longlong **)(lVar3 + 0x2618),DAT_14cad0f00,1);
        local_58 = local_38;
        local_68 = local_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        FUN_140c9cc04(*(undefined8 *)(lVar3 + 0x2618),&local_68,1);
        FUN_140b506a4(*(undefined8 *)(lVar3 + 0x2618));
      }
    }
  }
LAB_1440a8030:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440a80ae FUN_1440a80ae body=29 status=ok
// SIG undefined FUN_1440a80ae(void)

undefined8 FUN_1440a80ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a80cc FUN_1440a80cc body=29 status=ok
// SIG undefined FUN_1440a80cc(void)

undefined8 FUN_1440a80cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a8272 FUN_1440a8272 body=101 status=ok
// SIG undefined FUN_1440a8272(void)

void FUN_1440a8272(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b958540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440a82d8 FUN_1440a82d8 body=101 status=ok
// SIG undefined FUN_1440a82d8(void)

void FUN_1440a82d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b958540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440a833e FUN_1440a833e body=134 status=ok
// SIG undefined FUN_1440a833e(void)

void FUN_1440a833e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b958540;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440a83b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440a8426 FUN_1440a8426 body=310 status=ok
// SIG undefined FUN_1440a8426(void)

undefined8 FUN_1440a8426(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440a8556;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440a8556;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_1440a8556:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440a8502;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1440a8502;
    }
  }
  uVar6 = 0;
LAB_1440a8502:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a855e FUN_1440a855e body=29 status=ok
// SIG undefined FUN_1440a855e(void)

undefined8 FUN_1440a855e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440a8704 FUN_1440a8704 body=101 status=ok
// SIG undefined FUN_1440a8704(void)

void FUN_1440a8704(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9585b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440a876a FUN_1440a876a body=101 status=ok
// SIG undefined FUN_1440a876a(void)

void FUN_1440a876a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9585b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1440a87d0 FUN_1440a87d0 body=134 status=ok
// SIG undefined FUN_1440a87d0(void)

void FUN_1440a87d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab67120;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b9585b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440a8847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440a88b8 FUN_1440a88b8 body=278 status=ok
// SIG undefined FUN_1440a88b8(void)

undefined8 FUN_1440a88b8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1440a89c8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440a89c8;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440a89c8:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440a897c;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),
                 CONCAT71((int7)((ulonglong)plVar5 >> 8),*(undefined1 *)(param_1 + 8)));
      uVar6 = 1;
      goto LAB_1440a897c;
    }
  }
  uVar6 = 0;
LAB_1440a897c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a89cf FUN_1440a89cf body=4122 status=ok
// SIG undefined FUN_1440a89cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440a89cf(void)

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
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1368 = (ulonglong)uVar2;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b951340,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b951430);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14b951790;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9517b0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9518f0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b952180);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b952590,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9526b0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b9527b0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b952af0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b952bf0,1,0);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbc1528);
  if (cVar1 == '\0') {
    _DAT_14cbc1528 = 0;
    uRam000000014cbc1530 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14b9545c0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b954630,1,&PTR_FUN_14b954600);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b955370);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b9554e0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b955a90,1,&PTR_FUN_14b955a40);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b955b50);
  local_70 = "ActivityInstanceId";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1658 = (ulonglong)uVar2;
  local_70 = "Standard";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1660 = (ulonglong)uVar2;
  local_70 = "PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1668 = (ulonglong)uVar2;
  local_70 = "UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1670 = (ulonglong)uVar2;
  local_70 = "SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1678 = (ulonglong)uVar2;
  local_70 = "SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1680 = (ulonglong)uVar2;
  local_70 = "nexus";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1688 = (ulonglong)uVar2;
  _DAT_14cbc1690 = 0;
  uRam000000014cbc1698 = 0;
  _DAT_14cbc16a0 = 0;
  DAT_14cbc16a8 = 0;
  uRam000000014cbc16b0 = 0;
  FUN_1446ddda2(&DAT_14cbc1690,"allactivities",0);
  atexit((_func_5014 *)&LAB_14409f7b8);
  _DAT_14cbc16b8 = 0;
  uRam000000014cbc16c0 = 0;
  _DAT_14cbc16c8 = 0;
  DAT_14cbc16d0 = 0;
  uRam000000014cbc16d8 = 0;
  FUN_1446ddda2(&DAT_14cbc16b8,"serial",0);
  atexit((_func_5014 *)&LAB_14409f7c9);
  _DAT_14cbc16e0 = 0;
  uRam000000014cbc16e8 = 0;
  _DAT_14cbc16f0 = 0;
  DAT_14cbc16f8 = 0;
  uRam000000014cbc1700 = 0;
  FUN_1446ddda2(&DAT_14cbc16e0,"missionstate",0);
  atexit((_func_5014 *)&LAB_14409f7da);
  FUN_1446f470e(&DAT_14cbc1708,L"PainterComponent",1);
  local_70 = "EridiumEncasingState";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1a18 = (ulonglong)uVar2;
  local_70 = "BlockAll";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1710 = (ulonglong)uVar2;
  local_70 = "PhysicsActorIgnoreOnlyPawn";
  local_68 = 0x1a;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1718 = (ulonglong)uVar2;
  _DAT_14cbc1720 = 0x47efffffe0000000;
  _DAT_14cbc1728 = 0x47efffffe0000000;
  _DAT_14cbc1730 = 0x47efffffe0000000;
  _DAT_14cbc1738 = 0x47efffffe0000000;
  _DAT_14cbc1740 = 0x47efffffe0000000;
  _DAT_14cbc1748 = 0x47efffffe0000000;
  _DAT_14cbc1750 = 0x47efffffe0000000;
  _DAT_14cbc1758 = 0x47efffffe0000000;
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1760 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1768 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1770 = (ulonglong)uVar2;
  _DAT_14cbc177c = 0;
  FUN_14052b5e0(&DAT_14cbc1778,"PlayerAwareness",0);
  _DAT_14cbc1788 = "PlayerAwareness";
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1790 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1798 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17a0 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17a8 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17b0 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17b8 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17c0 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17c8 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17d0 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17d8 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17e0 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17e8 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17f0 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc17f8 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1800 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1808 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1810 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1818 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1820 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc1828,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14409fbff);
  FUN_140056680(&DAT_14cbc1838,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14409fc10);
  FUN_140056680(&DAT_14cbc1848,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14409fc21);
  FUN_140056680(&DAT_14cbc1858,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14409fc32);
  FUN_1446f470e(&DAT_14cbc1868,L"LIMB_GORED",1);
  _DAT_14cbc1870 = 0x4072c00000000000;
  _DAT_14cbc1878 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc1880,L"body",1);
  FUN_1446f470e(&DAT_14cbc1888,L"title_card",1);
  local_70 = "interactivedamageable";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc1890 = (ulonglong)uVar2;
  local_70 = "damageable";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18a8 = (ulonglong)uVar2;
  local_70 = "damageable_state";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18a0 = (ulonglong)uVar2;
  local_70 = "default";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18b0 = (ulonglong)uVar2;
  local_70 = "destroyed";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1898 = (ulonglong)uVar2;
  local_70 = "Team_IO_Combat";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18b8 = (ulonglong)uVar2;
  local_70 = "open";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18c8 = (ulonglong)uVar2;
  local_70 = "interactive";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18c0 = (ulonglong)uVar2;
  local_70 = "off";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18d8 = (ulonglong)uVar2;
  local_70 = "locked";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18e0 = (ulonglong)uVar2;
  local_70 = "on";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc18d0 = (ulonglong)uVar2;
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbc18e8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc18f0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14409fd2d);
  FUN_1446f470e(&DAT_14cbc1900,L"UNSET",1);
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
  FUN_1446f470e(&DAT_14cbc1908,L"Party",1);
  FUN_1446f470e(&DAT_14cbc1910,&DAT_149e063b2,1);
  local_70 = "pressed";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1928 = (ulonglong)uVar2;
  local_70 = "interactive";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1948 = (ulonglong)uVar2;
  local_70 = "off";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1938 = (ulonglong)uVar2;
  local_70 = "locked";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1940 = (ulonglong)uVar2;
  local_70 = "on";
  local_68 = 2;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1930 = (ulonglong)uVar2;
  local_70 = "usable_state";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1968 = (ulonglong)uVar2;
  local_70 = "default";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1960 = (ulonglong)uVar2;
  local_70 = "usable";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1958 = (ulonglong)uVar2;
  local_70 = "used";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1950 = (ulonglong)uVar2;
  DAT_14cbc1970 = 0;
  atexit((_func_5014 *)&LAB_14409ffb5);
  local_70 = "placed";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc1a00 = (ulonglong)uVar2;
  local_70 = "hidden";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cbc19f8 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a99ec FUN_1440a99ec body=545 status=ok
// SIG undefined FUN_1440a99ec(void)

undefined8 * FUN_1440a99ec(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b959c60;
  *(undefined4 *)(param_1 + 0x8b) = 0x43480000;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  local_50 = "Direction";
  local_48 = 9;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[0xa0] = (ulonglong)uVar1;
  param_1[0xa1] = 0xbf800000;
  *(undefined4 *)(param_1 + 0xa2) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x514) = 1;
  local_50 = "StartPoint";
  local_48 = 10;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[0xa3] = (ulonglong)uVar1;
  local_50 = "EndPoint";
  local_48 = 8;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  param_1[0xa4] = (ulonglong)uVar1;
  *(undefined1 *)(param_1 + 0xa5) = 2;
  *(undefined1 *)((longlong)param_1 + 0x52d) = 1;
  *(undefined2 *)((longlong)param_1 + 0x52f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x554) = 0;
  param_1[0xab] = 0x447a0000;
  *(undefined4 *)(param_1 + 0xac) = 0x42480000;
  *(undefined1 *)((longlong)param_1 + 0x564) = 1;
  param_1[0xad] = 0x437a0000442f0000;
  param_1[0xae] = 0x42c8000044bb8000;
  *(undefined4 *)(param_1 + 0xaf) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0x437a0000;
  *(undefined4 *)(param_1 + 0xb0) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0x43c80000;
  *(undefined4 *)(param_1 + 0xb1) = 0x42c80000;
  *(undefined2 *)(param_1 + 0xb2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined1 *)((longlong)param_1 + 0x52c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x52e) = 1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440a9c14 FUN_1440a9c14 body=66 status=ok
// SIG undefined FUN_1440a9c14(void)

void FUN_1440a9c14(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc2018,1);
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc2020,1);
  return;
}



// FUNCTION 1440a9cb4 FUN_1440a9cb4 body=166 status=ok
// SIG undefined FUN_1440a9cb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440a9cb4(void)

{
  DAT_14cbc1ab8 = 0;
  if (DAT_14cbc1ab0 != 0) {
    FUN_1400020a8();
  }
  DAT_14cbc1a78 = 0;
  if (DAT_14cbc1a7c != 0) {
    FUN_144727cd0(&DAT_14cbc1a70,0);
  }
  _DAT_14cbc1aa0 = 0xffffffff;
  DAT_14cbc1a98 = 0;
  if (0x80 < DAT_14cbc1a9c) {
    DAT_14cbc1a9c = 0x80;
    FUN_1446efbd8(&DAT_14cbc1a80,0);
  }
  if (DAT_14cbc1a90 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbc1a70 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1440a9d5a FUN_1440a9d5a body=69 status=ok
// SIG undefined FUN_1440a9d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440a9d5a(void)

{
  _DAT_14cbc1ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001440a9d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbc1ac8,1);
  return;
}



// FUNCTION 1440a9e06 FUN_1440a9e06 body=74 status=ok
// SIG undefined FUN_1440a9e06(void)

void FUN_1440a9e06(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x24] != 0) {
    lVar1 = FUN_14061d010();
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
      FUN_14614a8b0(lVar1,uVar2,1);
      *(undefined1 *)((longlong)param_1 + 0x129) = 5;
    }
  }
  return;
}



// FUNCTION 1440a9e72 FUN_1440a9e72 body=6952 status=ok
// SIG undefined FUN_1440a9e72(void)

void FUN_1440a9e72(longlong ******param_1)

{
  int *piVar1;
  longlong *****ppppplVar2;
  longlong *****ppppplVar3;
  longlong ****pppplVar4;
  longlong *****ppppplVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *****ppppplVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong ***ppplVar17;
  longlong lVar18;
  longlong ******pppppplVar19;
  longlong *******ppppppplVar20;
  longlong *plVar21;
  int iVar22;
  longlong ******pppppplVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_128 [32];
  longlong *****local_108;
  longlong *****local_100;
  longlong *****local_f8;
  undefined1 local_f0 [4];
  char local_ec;
  undefined8 local_e8;
  longlong *****ppppplStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  longlong ******local_70;
  int local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x2f) == '\x03') {
    FUN_1441683a2(param_1 + 0xe1a,param_1);
    local_e8 = (longlong ******)0x0;
    ppppplStack_e0 = (longlong *****)((ulonglong)ppppplStack_e0 & 0xffffffff00000000);
    FUN_1446efa72(&local_e8,0,3,0x10);
    pppplVar4 = (longlong ****)local_e8;
    ppppplStack_e0 = (longlong *****)CONCAT44(ppppplStack_e0._4_4_,3);
    *local_e8 = (longlong *****)&PTR_LAB_14b42c920;
    LOCK();
    UNLOCK();
    ppplVar17 = (longlong ***)(DAT_14c758608 + 1);
    lVar25 = DAT_14c758608 + 1;
    if (ppplVar17 == (longlong ***)0x0) {
      LOCK();
      UNLOCK();
      ppplVar17 = (longlong ***)(DAT_14c758608 + 2);
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_e8[2] = (longlong *****)ppplVar17;
    *local_e8 = (longlong *****)&PTR_FUN_14b95ba10;
    local_e8[3] = (longlong *****)0x0;
    iVar12 = 0;
    if (param_1 != (longlong ******)0x0) {
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar12 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar24 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar24);
        }
        LOCK();
        iVar12 = *(int *)(lVar25 + 0x10);
        bVar26 = iVar12 == 0;
        if (bVar26) {
          *(int *)(lVar25 + 0x10) = iVar24;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar12 = iVar24;
        }
      }
    }
    *(int *)((longlong)pppplVar4 + 0x1c) = iVar12;
    pppplVar4[4] = (longlong ***)&LAB_140ed5ea4;
    *(undefined4 *)(pppplVar4 + 5) = 0;
    if (((int)ppppplStack_e0 == 0) || (local_e8 == (longlong ******)0x0)) {
LAB_1440ab611:
      if ((int)ppppplStack_e0 == 0) {
        ppppppplVar20 = (longlong *******)0x0;
        goto LAB_1440aa0bd;
      }
      if (local_e8 != (longlong ******)0x0) {
        ppppppplVar20 = (longlong *******)0x0;
        (*(code *)**local_e8)(local_e8,0);
        FUN_1446efa72(&local_e8,0,0,0x10);
        goto LAB_1440aa0b0;
      }
      ppppppplVar20 = (longlong *******)0x0;
    }
    else {
      cVar10 = (*(code *)(*local_e8)[6])();
      if (cVar10 == '\0') {
        goto LAB_1440ab611;
      }
      pppppplVar23 = param_1 + 0x74a;
      if (*(int *)((longlong)param_1 + 0x3a64) < 1) {
        iVar12 = *(int *)(param_1 + 0x74b);
        iVar24 = *(int *)(param_1 + 0x74c);
        *(int *)(param_1 + 0x74c) = iVar24 + -1;
        if (iVar24 + -1 <= iVar12) {
          iVar24 = iVar12;
          if (0 < iVar12) {
            iVar22 = 0;
            do {
              if (((*(int *)(*pppppplVar23 + (longlong)iVar22 * 2 + 1) == 0) ||
                  (pppplVar4 = (*pppppplVar23)[(longlong)iVar22 * 2],
                  pppplVar4 == (longlong ****)0x0)) ||
                 (cVar10 = (*(code *)(*pppplVar4)[5])(), cVar10 != '\0')) {
                FUN_14005b288(pppppplVar23,iVar22);
                FUN_14005b248(pppppplVar23);
              }
              else {
                iVar22 = iVar22 + 1;
              }
              iVar24 = *(int *)(param_1 + 0x74b);
            } while (iVar22 < iVar24);
          }
          iVar22 = 2;
          if (2 < iVar24 * 2) {
            iVar22 = iVar24 * 2;
          }
          *(int *)(param_1 + 0x74c) = iVar22;
          if ((iVar22 < iVar12) && (*(int *)((longlong)param_1 + 0x3a5c) != iVar24)) {
            FUN_14045812c();
          }
        }
      }
      ppppppplVar20 = (longlong *******)0x0;
      if (((int)ppppplStack_e0 != 0) && (local_e8 != (longlong ******)0x0)) {
        (*(code *)(*local_e8)[7])(local_e8,&local_70);
        ppppppplVar20 = (longlong *******)local_70;
      }
      iVar12 = *(int *)(param_1 + 0x74b);
      lVar25 = (longlong)iVar12;
      *(uint *)(param_1 + 0x74b) = iVar12 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3a5c) < iVar12 + 1U) {
        FUN_1447a71f6(pppppplVar23,iVar12);
      }
      ppppplVar5 = *pppppplVar23;
      ppppplVar5[lVar25 * 2] = (longlong ****)0x0;
      *(undefined4 *)(ppppplVar5 + lVar25 * 2 + 1) = 0;
      ppppplVar5[lVar25 * 2] = (longlong ****)local_e8;
      local_e8 = (longlong ******)0x0;
      *(int *)(ppppplVar5 + lVar25 * 2 + 1) = (int)ppppplStack_e0;
LAB_1440aa0b0:
      ppppplStack_e0 = (longlong *****)((ulonglong)ppppplStack_e0 & 0xffffffff00000000);
LAB_1440aa0bd:
      if (local_e8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
    param_1[0x1399] = (longlong *****)ppppppplVar20;
  }
  FUN_14071053a(param_1 + 0x8f0,param_1);
  local_100 = (longlong *****)0x0;
  if ((param_1 == (longlong ******)0x0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != (longlong ******)0x0) goto LAB_1440aa10b;
    bVar26 = true;
    local_f8 = (longlong *****)0x0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_1440aa10b:
    local_f8 = (longlong *****)(param_1 + 0x214);
    bVar26 = false;
  }
  local_100 = (longlong *****)param_1;
  FUN_140e343d0(param_1 + 0x825);
  FUN_140e34780(param_1 + 0x1271,param_1 + 0x77f);
  FUN_140e34506(param_1 + 0x1282,param_1 + 0x780);
  FUN_140b24d9a(param_1 + 0x1339,param_1);
  if ((param_1 != (longlong ******)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  pppppplVar23 = (longlong ******)0x0;
  if (!bVar26) {
    pppppplVar23 = param_1 + 0x745;
  }
  local_e8 = param_1;
  ppppplStack_e0 = (longlong *****)pppppplVar23;
  FUN_140edff80(param_1 + 0xd12);
  if ((param_1 != (longlong ******)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  local_108 = (longlong *****)(param_1 + 0xd12);
  local_e8 = param_1;
  ppppplStack_e0 = (longlong *****)pppppplVar23;
  FUN_1418ae19c(param_1 + 0xd54);
  *(undefined4 *)(param_1 + 0x9aa) = 0xff7fffff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbc1fe0) && (FUN_144b3d300(&DAT_14cbc1fe0), DAT_14cbc1fe0 == -1)) {
    local_c8 = (longlong *****)0x6100680043006e;
    uStack_c0._0_2_ = L'n';
    uStack_c0._2_2_ = L'g';
    uStack_c0._4_2_ = L'e';
    uStack_c0._6_2_ = L'd';
    local_d8 = (longlong *)0x69007200740073;
    plStack_d0 = (longlong *)0x6f006900740063;
    local_e8 = (longlong ******)0x70006100650057;
    ppppplStack_e0 = (longlong *****)0x650052006e006f;
    uStack_b8 = uStack_b8 & 0xffffffffffff0000;
    FUN_1446f470e(&DAT_14cbc1fd8,&local_e8,1);
    _Init_thread_footer(&DAT_14cbc1fe0);
  }
  ppppplVar5 = DAT_14cbc1fd8;
  local_e8 = (longlong ******)0x0;
  ppppplStack_e0 = (longlong *****)0x0;
  if (param_1 != (longlong ******)0x0) {
    uVar11 = *(uint *)((longlong)param_1 + 0xc);
    local_e8 = (longlong ******)(ulonglong)uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    iVar12 = *(int *)(lVar25 + 0x10);
    if (*(int *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar24);
      }
      LOCK();
      iVar12 = *(int *)(lVar25 + 0x10);
      bVar26 = iVar12 == 0;
      if (bVar26) {
        *(int *)(lVar25 + 0x10) = iVar24;
        iVar12 = 0;
      }
      UNLOCK();
      uVar11 = (uint)local_e8;
      if (bVar26) {
        iVar12 = iVar24;
      }
    }
    local_e8._0_4_ = uVar11;
    local_e8 = (longlong ******)CONCAT44(iVar12,(uint)local_e8);
    ppppplStack_e0 = ppppplVar5;
    if ((((((ppppplVar5 != (longlong *****)0x0) && (iVar12 != 0)) && (-1 < (int)(uint)local_e8)) &&
         (((int)(uint)local_e8 < DAT_14c9647dc &&
          (plVar21 = (longlong *)
                     ((ulonglong)(((uint)local_e8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_e8 >> 0x10) * 8)),
          plVar21 != (longlong *)0x0)))) && ((int)plVar21[2] == iVar12)) &&
       (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (*plVar21 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar21 + 0x10),ppppplVar5,1);
      ppppplVar5 = ppppplStack_e0;
    }
  }
  ppppplStack_e0 = ppppplVar5;
  FUN_14053c012(param_1 + 0xc28,&local_e8);
  FUN_140459624(param_1);
  uVar11 = rand();
  *(float *)((longlong)param_1 + 0x7fec) = (float)(uVar11 & 0x7fff) / 32767.0;
  if (*(char *)(param_1 + 0x2f) == '\x03') {
    local_e8 = (longlong ******)0x0;
    ppppplStack_e0 = (longlong *****)((ulonglong)ppppplStack_e0 & 0xffffffff00000000);
    FUN_1446efa72(&local_e8,0,3,0x10);
    puVar8 = local_e8;
    ppppplStack_e0._0_4_ = 3;
    *local_e8 = (longlong *****)&PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar25 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_e8[2] = (longlong *****)lVar18;
    *local_e8 = (longlong *****)&PTR_FUN_14b95bac0;
    local_e8[3] = (longlong *****)0x0;
    iVar12 = 0;
    if (param_1 != (longlong ******)0x0) {
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar12 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar24 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar12 = *(int *)(lVar25 + 0x10);
        bVar26 = iVar12 == 0;
        if (bVar26) {
          *(int *)(lVar25 + 0x10) = iVar24;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar12 = iVar24;
        }
      }
    }
    *(int *)((longlong)puVar8 + 0x1c) = iVar12;
    puVar8[4] = FUN_140f3209a;
    *(undefined4 *)(puVar8 + 5) = 0;
    FUN_1403524de(param_1 + 0x850,&local_70,&local_e8);
    if ((int)ppppplStack_e0 == 0) {
LAB_1440aa422:
      if (local_e8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (longlong ******)0x0) {
      (*(code *)**local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      ppppplStack_e0._0_4_ = 0;
      goto LAB_1440aa422;
    }
    FUN_14411ea8c(param_1 + 0x9e9,param_1);
    local_e8 = (longlong ******)0x0;
    ppppplStack_e0._0_4_ = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    puVar8 = local_e8;
    ppppplStack_e0._0_4_ = 3;
    iVar12 = (int)ppppplStack_e0;
    ppppplStack_e0._0_4_ = 3;
    *local_e8 = (longlong *****)&PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar25 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_e8[2] = (longlong *****)lVar18;
    *local_e8 = (longlong *****)&PTR_FUN_14b95bf90;
    local_e8[3] = (longlong *****)0x0;
    iVar24 = 0;
    if (param_1 != (longlong ******)0x0) {
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar24 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar24 = DAT_14c964868 + 1;
        UNLOCK();
        iVar22 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar24;
        ppppplStack_e0._0_4_ = iVar12;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar24 = *(int *)(lVar25 + 0x10);
        bVar26 = iVar24 == 0;
        if (bVar26) {
          *(int *)(lVar25 + 0x10) = iVar22;
          iVar24 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar24 = iVar22;
        }
      }
    }
    *(int *)((longlong)puVar8 + 0x1c) = iVar24;
    puVar8[4] = param_1;
    FUN_1403524de(param_1 + 0x95e,&local_70,&local_e8);
    if ((int)ppppplStack_e0 == 0) {
LAB_1440aa54d:
      if (local_e8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (longlong ******)0x0) {
      (*(code *)**local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      ppppplStack_e0._0_4_ = 0;
      goto LAB_1440aa54d;
    }
    local_e8 = (longlong ******)0x0;
    ppppplStack_e0._0_4_ = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    puVar8 = local_e8;
    ppppplStack_e0._0_4_ = 3;
    iVar12 = (int)ppppplStack_e0;
    ppppplStack_e0._0_4_ = 3;
    *local_e8 = (longlong *****)&PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar25 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_e8[2] = (longlong *****)lVar18;
    *local_e8 = (longlong *****)&PTR_FUN_14b95c000;
    local_e8[3] = (longlong *****)0x0;
    iVar24 = 0;
    if (param_1 != (longlong ******)0x0) {
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar24 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar24 = DAT_14c964868 + 1;
        UNLOCK();
        iVar22 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar24;
        ppppplStack_e0._0_4_ = iVar12;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar24 = *(int *)(lVar25 + 0x10);
        bVar26 = iVar24 == 0;
        if (bVar26) {
          *(int *)(lVar25 + 0x10) = iVar22;
          iVar24 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar24 = iVar22;
        }
      }
    }
    *(int *)((longlong)puVar8 + 0x1c) = iVar24;
    puVar8[4] = param_1;
    FUN_1403524de(param_1 + 0x95b,&local_70,&local_e8);
    if ((int)ppppplStack_e0 == 0) {
LAB_1440aa669:
      if (local_e8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (longlong ******)0x0) {
      (*(code *)**local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      ppppplStack_e0._0_4_ = 0;
      goto LAB_1440aa669;
    }
    local_e8 = (longlong ******)0x0;
    ppppplStack_e0._0_4_ = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    puVar8 = local_e8;
    ppppplStack_e0._0_4_ = 3;
    iVar12 = (int)ppppplStack_e0;
    ppppplStack_e0._0_4_ = 3;
    *local_e8 = (longlong *****)&PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar25 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_e8[2] = (longlong *****)lVar18;
    *local_e8 = (longlong *****)&PTR_FUN_14b95c070;
    local_e8[3] = (longlong *****)0x0;
    iVar24 = 0;
    if (param_1 != (longlong ******)0x0) {
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar24 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar24 = DAT_14c964868 + 1;
        UNLOCK();
        iVar22 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar24;
        ppppplStack_e0._0_4_ = iVar12;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar22);
        }
        LOCK();
        iVar24 = *(int *)(lVar25 + 0x10);
        bVar26 = iVar24 == 0;
        if (bVar26) {
          *(int *)(lVar25 + 0x10) = iVar22;
          iVar24 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar24 = iVar22;
        }
      }
    }
    *(int *)((longlong)puVar8 + 0x1c) = iVar24;
    puVar8[4] = param_1;
    FUN_1403524de(param_1 + 0x844,&local_70,&local_e8);
    if ((int)ppppplStack_e0 == 0) {
LAB_1440aa785:
      if (local_e8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (longlong ******)0x0) {
      (*(code *)**local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      ppppplStack_e0._0_4_ = 0;
      goto LAB_1440aa785;
    }
    local_e8 = (longlong ******)0x0;
    ppppplStack_e0._0_4_ = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    puVar8 = local_e8;
    ppppplStack_e0._0_4_ = 3;
    iVar12 = (int)ppppplStack_e0;
    ppppplStack_e0._0_4_ = 3;
    *local_e8 = (longlong *****)&PTR_LAB_14b41bb90;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar25 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_e8[2] = (longlong *****)lVar18;
    *local_e8 = (longlong *****)&PTR_FUN_14b95c0e0;
    local_e8[3] = (longlong *****)0x0;
    iVar24 = 0;
    if (param_1 != (longlong ******)0x0) {
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar24 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar24 = DAT_14c964868 + 1;
        UNLOCK();
        iVar22 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar24;
        ppppplStack_e0._0_4_ = iVar12;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar22);
        }
        LOCK();
        iVar24 = *(int *)(lVar25 + 0x10);
        bVar26 = iVar24 == 0;
        if (bVar26) {
          *(int *)(lVar25 + 0x10) = iVar22;
          iVar24 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar24 = iVar22;
        }
      }
    }
    *(int *)((longlong)puVar8 + 0x1c) = iVar24;
    puVar8[4] = &LAB_1406d2830;
    *(undefined4 *)(puVar8 + 5) = 0;
    FUN_140f6d16c(param_1 + 0x8f0,&local_70,&local_e8);
    param_1[0x1362] = (longlong *****)local_70;
    if ((int)ppppplStack_e0 == 0) {
LAB_1440aa8be:
      if (local_e8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_e8 != (longlong ******)0x0) {
      (*(code *)**local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      ppppplStack_e0._0_4_ = 0;
      goto LAB_1440aa8be;
    }
    local_e8 = (longlong ******)0x0;
    ppppplStack_e0._0_4_ = 0;
    FUN_1446efa72(&local_e8,0,3,0x10);
    pppplVar4 = (longlong ****)local_e8;
    ppppplStack_e0 = (longlong *****)CONCAT44(ppppplStack_e0._4_4_,3);
    *local_e8 = (longlong *****)&PTR_LAB_14b4edb80;
    LOCK();
    UNLOCK();
    ppplVar17 = (longlong ***)(DAT_14c758608 + 1);
    lVar25 = DAT_14c758608 + 1;
    if (ppplVar17 == (longlong ***)0x0) {
      LOCK();
      UNLOCK();
      ppplVar17 = (longlong ***)(DAT_14c758608 + 2);
      lVar25 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar25;
    local_e8[2] = (longlong *****)ppplVar17;
    *local_e8 = (longlong *****)&PTR_FUN_14b95bb30;
    local_e8[3] = (longlong *****)0x0;
    iVar12 = 0;
    if (param_1 != (longlong ******)0x0) {
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_e8 + 3) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      iVar12 = *(int *)(lVar25 + 0x10);
      if (*(int *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar24 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar24);
        }
        LOCK();
        iVar12 = *(int *)(lVar25 + 0x10);
        bVar26 = iVar12 == 0;
        if (bVar26) {
          *(int *)(lVar25 + 0x10) = iVar24;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar12 = iVar24;
        }
      }
    }
    *(int *)((longlong)pppplVar4 + 0x1c) = iVar12;
    pppplVar4[4] = (longlong ***)&DAT_1412d64ee;
    *(undefined4 *)(pppplVar4 + 5) = 0;
    if (((int)ppppplStack_e0 == 0) || (local_e8 == (longlong ******)0x0)) {
LAB_1440ab6d1:
      if ((int)ppppplStack_e0 != 0) {
        if (local_e8 == (longlong ******)0x0) goto LAB_1440aaae6;
        (*(code *)**local_e8)(local_e8,0);
        FUN_1446efa72(&local_e8,0,0,0x10);
        goto LAB_1440aaad0;
      }
    }
    else {
      cVar10 = (*(code *)(*local_e8)[6])();
      if (cVar10 == '\0') {
        goto LAB_1440ab6d1;
      }
      pppppplVar23 = param_1 + 0xe37;
      if (*(int *)((longlong)param_1 + 0x71cc) < 1) {
        iVar12 = *(int *)(param_1 + 0xe38);
        iVar24 = *(int *)(param_1 + 0xe39);
        *(int *)(param_1 + 0xe39) = iVar24 + -1;
        if (iVar24 + -1 <= iVar12) {
          iVar24 = iVar12;
          if (0 < iVar12) {
            iVar22 = 0;
            do {
              if (((*(int *)(*pppppplVar23 + (longlong)iVar22 * 2 + 1) == 0) ||
                  (pppplVar4 = (*pppppplVar23)[(longlong)iVar22 * 2],
                  pppplVar4 == (longlong ****)0x0)) ||
                 (cVar10 = (*(code *)(*pppplVar4)[5])(), cVar10 != '\0')) {
                FUN_14005b288(pppppplVar23,iVar22);
                FUN_14005b248(pppppplVar23);
              }
              else {
                iVar22 = iVar22 + 1;
              }
              iVar24 = *(int *)(param_1 + 0xe38);
            } while (iVar22 < iVar24);
          }
          iVar22 = 2;
          if (2 < iVar24 * 2) {
            iVar22 = iVar24 * 2;
          }
          *(int *)(param_1 + 0xe39) = iVar22;
          if ((iVar22 < iVar12) && (*(int *)((longlong)param_1 + 0x71c4) != iVar24)) {
            FUN_14045812c();
          }
        }
      }
      if (((int)ppppplStack_e0 != 0) && (local_e8 != (longlong ******)0x0)) {
        (*(code *)(*local_e8)[7])(local_e8,&local_70);
      }
      iVar12 = *(int *)(param_1 + 0xe38);
      lVar25 = (longlong)iVar12;
      *(uint *)(param_1 + 0xe38) = iVar12 + 1U;
      if (*(uint *)((longlong)param_1 + 0x71c4) < iVar12 + 1U) {
        FUN_1447a71f6(pppppplVar23,iVar12);
      }
      ppppplVar5 = *pppppplVar23;
      ppppplVar5[lVar25 * 2] = (longlong ****)0x0;
      *(undefined4 *)(ppppplVar5 + lVar25 * 2 + 1) = 0;
      ppppplVar5[lVar25 * 2] = (longlong ****)local_e8;
      local_e8 = (longlong ******)0x0;
      *(int *)(ppppplVar5 + lVar25 * 2 + 1) = (int)ppppplStack_e0;
LAB_1440aaad0:
      ppppplStack_e0 = (longlong *****)((ulonglong)ppppplStack_e0 & 0xffffffff00000000);
    }
    if (local_e8 != (longlong ******)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1440aaae6:
  local_e8 = (longlong ******)0x0;
  ppppplStack_e0 = (longlong *****)((ulonglong)ppppplStack_e0 & 0xffffffff00000000);
  FUN_1446efa72(&local_e8,0,3,0x10);
  pppplVar4 = (longlong ****)local_e8;
  ppppplStack_e0 = (longlong *****)CONCAT44(ppppplStack_e0._4_4_,3);
  *local_e8 = (longlong *****)&PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  ppplVar17 = (longlong ***)(DAT_14c758608 + 1);
  lVar25 = DAT_14c758608 + 1;
  if (ppplVar17 == (longlong ***)0x0) {
    LOCK();
    UNLOCK();
    ppplVar17 = (longlong ***)(DAT_14c758608 + 2);
    lVar25 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar25;
  local_e8[2] = (longlong *****)ppplVar17;
  *local_e8 = (longlong *****)&PTR_FUN_14b95bac0;
  local_e8[3] = (longlong *****)0x0;
  iVar12 = 0;
  if (param_1 != (longlong ******)0x0) {
    uVar11 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    iVar12 = *(int *)(lVar25 + 0x10);
    if (*(int *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar24);
      }
      LOCK();
      iVar12 = *(int *)(lVar25 + 0x10);
      bVar26 = iVar12 == 0;
      if (bVar26) {
        *(int *)(lVar25 + 0x10) = iVar24;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar26) {
        iVar12 = iVar24;
      }
    }
  }
  *(int *)((longlong)pppplVar4 + 0x1c) = iVar12;
  pppplVar4[4] = (longlong ***)FUN_1411d4f7e;
  *(undefined4 *)(pppplVar4 + 5) = 0;
  FUN_1403524de(param_1 + 0x85a,&local_70,&local_e8);
  if ((int)ppppplStack_e0 == 0) {
LAB_1440aac0a:
    if (local_e8 != (longlong ******)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (longlong ******)0x0) {
    (*(code *)**local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    ppppplStack_e0 = (longlong *****)((ulonglong)ppppplStack_e0 & 0xffffffff00000000);
    goto LAB_1440aac0a;
  }
  if (param_1[0x7ee] == (longlong *****)0x0) goto LAB_1440ab0a1;
  (*(code *)(*param_1)[0x173])(param_1);
  ppppplVar5 = param_1[0x7ee];
  local_e8 = (longlong ******)CONCAT71(local_e8._1_7_,*(undefined1 *)(ppppplVar5 + 0x1d9));
  ppppplStack_e0 = (longlong *****)0x0;
  local_d8 = (longlong *)0x0;
  plStack_d0 = (longlong *)0x0;
  FUN_1401f3db8(&ppppplStack_e0,ppppplVar5 + 0x1da);
  plVar21 = local_d8;
  local_c8 = (longlong *****)ppppplVar5[0x1dd];
  uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(ppppplVar5 + 0x1de));
  uStack_b8 = 0;
  ppppplVar5 = local_c8;
  if ((((char)local_e8 == '\0') || (ppppplVar5 = ppppplStack_e0, (char)local_e8 == '\x01')) ||
     ((char)local_e8 == '\x02')) {
    bVar26 = ppppplVar5 == (longlong *****)0x0;
  }
  else {
    bVar26 = true;
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_d8)();
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
    }
  }
  if (((!bVar26) && (lVar25 = FUN_1447210f0(), lVar25 != 0)) &&
     (lVar25 = *(longlong *)(lVar25 + 0x178), lVar25 != 0)) {
    lVar18 = FUN_14030d660();
    if ((*(int *)(lVar18 + 0x38) <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8
         ) == lVar18 + 0x30)) {
      local_e8 = (longlong ******)&LAB_148ccc0f6;
      ppppplStack_e0 = (longlong *****)((ulonglong)ppppplStack_e0 & 0xffffffff00000000);
      FUN_148ccbff6(lVar25 + 0x5c8,&local_70,param_1);
      param_1[0x106c] = (longlong *****)local_70;
    }
  }
  if (*(char *)(param_1 + 0x2f) == '\x03') {
    pppplVar4 = param_1[0x7ee][0x152];
    if (pppplVar4 != (longlong ****)0x0) {
      local_c8._0_5_ = (uint5)(uint)local_c8;
      local_a0 = 0;
      local_98 = 0;
      local_e8 = (longlong ******)0x0;
      ppppplStack_e0 = (longlong *****)0x0;
      local_d8 = (longlong *)0x0;
      plStack_d0 = (longlong *)0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      local_94 = 0xffffffff00000080;
      local_8c = 0;
      local_80 = 0;
      local_78 = 0;
      ppppplVar5 = (longlong *****)param_1[0x7ee][0x153];
      if (ppppplVar5 != (longlong *****)0x0) {
        LOCK();
        *(int *)(ppppplVar5 + 1) = *(int *)(ppppplVar5 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)(ppppplVar5 + 1) = *(int *)(ppppplVar5 + 1) + 1;
        UNLOCK();
        LOCK();
        ppppplVar2 = ppppplVar5 + 1;
        *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
        UNLOCK();
        if (*(int *)ppppplVar2 == 0) {
          (*(code *)**ppppplVar5)(ppppplVar5);
          LOCK();
          piVar1 = (int *)((longlong)ppppplVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppppplVar5)[2])(ppppplVar5);
          }
        }
        ppppplVar2 = ppppplStack_e0;
        LOCK();
        *(int *)(ppppplVar5 + 1) = *(int *)(ppppplVar5 + 1) + 1;
        UNLOCK();
        local_e8 = (longlong ******)pppplVar4;
        if (ppppplVar5 == ppppplStack_e0) {
          LOCK();
          ppppplVar2 = ppppplVar5 + 1;
          *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
          UNLOCK();
          ppppplVar9 = ppppplStack_e0;
          if (*(int *)ppppplVar2 == 0) {
            (*(code *)**ppppplVar5)(ppppplVar5);
            LOCK();
            piVar1 = (int *)((longlong)ppppplVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar12 = *piVar1;
            UNLOCK();
            ppppplVar2 = ppppplVar5;
joined_r0x0001440aae26:
            ppppplVar9 = ppppplStack_e0;
            if (iVar12 == 0) {
              (*(code *)(*ppppplVar2)[2])(ppppplVar2);
              ppppplVar9 = ppppplStack_e0;
            }
          }
        }
        else {
          ppppplVar9 = ppppplVar5;
          if (ppppplStack_e0 != (longlong *****)0x0) {
            LOCK();
            ppppplVar3 = ppppplStack_e0 + 1;
            *(int *)ppppplVar3 = *(int *)ppppplVar3 + -1;
            UNLOCK();
            if (*(int *)ppppplVar3 == 0) {
              pppplVar4 = *ppppplStack_e0;
              ppppplStack_e0 = ppppplVar5;
              (*(code *)*pppplVar4)(ppppplVar2);
              LOCK();
              piVar1 = (int *)((longlong)ppppplVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar12 = *piVar1;
              UNLOCK();
              goto joined_r0x0001440aae26;
            }
          }
        }
        ppppplStack_e0 = ppppplVar9;
        LOCK();
        ppppplVar2 = ppppplVar5 + 1;
        *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
        UNLOCK();
        pppplVar4 = (longlong ****)local_e8;
        if (*(int *)ppppplVar2 == 0) {
          (*(code *)**ppppplVar5)(ppppplVar5);
          LOCK();
          piVar1 = (int *)((longlong)ppppplVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          pppplVar4 = (longlong ****)local_e8;
          if (*piVar1 == 0) {
            (*(code *)(*ppppplVar5)[2])(ppppplVar5);
            pppplVar4 = (longlong ****)local_e8;
          }
        }
      }
      local_e8 = (longlong ******)pppplVar4;
      FUN_140fbc5b2(param_1 + 0xd1b,local_f0,&local_e8);
      if (local_ec == '\x01') {
        local_ec = '\0';
      }
      local_78 = 0;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&uStack_c0);
      plVar21 = plStack_d0;
      if (local_c8._4_1_ == '\x01') {
        local_c8._0_5_ = (uint5)(uint)local_c8;
      }
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_d0 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      ppppplVar5 = ppppplStack_e0;
      if (ppppplStack_e0 != (longlong *****)0x0) {
        LOCK();
        ppppplVar2 = ppppplStack_e0 + 1;
        *(int *)ppppplVar2 = *(int *)ppppplVar2 + -1;
        UNLOCK();
        if (*(int *)ppppplVar2 == 0) {
          (*(code *)**ppppplStack_e0)(ppppplStack_e0);
          LOCK();
          piVar1 = (int *)((longlong)ppppplVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppppplVar5)[2])(ppppplVar5);
          }
        }
      }
    }
  }
  lVar25 = FUN_140316ff8();
  lVar14 = 0;
  FUN_1414180c0(param_1,lVar25 + 0x168,0,0);
  lVar25 = FUN_1418657f4(param_1);
  lVar18 = FUN_1447210f0(param_1);
  if (lVar18 != 0) {
    lVar14 = FUN_140115352(lVar18);
  }
  lVar18 = FUN_140316ff8();
  if (((lVar14 == 0) || (lVar25 == 0)) || (*(char *)(param_1 + 0x2f) != '\x03')) goto LAB_1440ab0a1;
  lVar16 = *(longlong *)(lVar18 + 0x68);
  if (lVar16 == 0) {
    uVar15 = FUN_1407ad36c();
    lVar16 = FUN_14477b664(uVar15);
    *(longlong *)(lVar18 + 0x68) = lVar16;
  }
  plVar21 = (longlong *)(lVar18 + 0x60);
  if (*(longlong *)(lVar18 + 0x70) == 0) {
    if ((lVar16 == 0) || (*plVar21 == 0)) goto LAB_1440ab0a1;
    plVar7 = *(longlong **)(lVar16 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar10 == '\0')) {
      *(undefined8 *)(lVar18 + 0x70) = 0;
      goto LAB_1440ab0a1;
    }
    uVar15 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar16 = FUN_144aff482(uVar15,plVar21);
    *(longlong *)(lVar18 + 0x70) = lVar16;
    if (lVar16 == 0) goto LAB_1440ab0a1;
  }
  local_70 = (longlong ******)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  pppppplVar23 = local_70;
  local_68 = 3;
  *local_70 = (longlong *****)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  pppppplVar19 = (longlong ******)(DAT_14c758608 + 1);
  lVar18 = DAT_14c758608 + 1;
  if (pppppplVar19 == (longlong ******)0x0) {
    LOCK();
    UNLOCK();
    pppppplVar19 = (longlong ******)(DAT_14c758608 + 2);
    lVar18 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar18;
  local_70[2] = (longlong *****)pppppplVar19;
  *local_70 = (longlong *****)&PTR_FUN_14b95c8b0;
  local_70[3] = (longlong *****)0x0;
  iVar12 = 0;
  if (param_1 != (longlong ******)0x0) {
    uVar11 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_70 + 3) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar12 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar12 = *(int *)(lVar18 + 0x10);
      bVar26 = iVar12 == 0;
      if (bVar26) {
        *(int *)(lVar18 + 0x10) = iVar24;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar26) {
        iVar12 = iVar24;
      }
    }
  }
  *(int *)((longlong)pppppplVar23 + 0x1c) = iVar12;
  pppppplVar23[4] = (longlong *****)param_1;
  FUN_141162a1e(lVar25,&local_e8,plVar21);
  iVar12 = FUN_1410c0616(lVar14,&local_e8,&local_70);
  if (iVar12 == 0) {
    ppppppplVar20 = (longlong *******)local_70;
    if (local_68 == 0) {
      ppppppplVar20 = (longlong *******)0x0;
    }
    (*(code *)(*ppppppplVar20)[0xb])();
  }
  if (local_68 != 0) {
    if ((longlong *******)local_70 == (longlong *******)0x0) goto LAB_1440ab0a1;
    (*(code *)**local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if ((longlong *******)local_70 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
LAB_1440ab0a1:
  FUN_140c7d22e(param_1 + 0xff1,param_1);
  FUN_1418dff10(param_1 + 0x111a,param_1);
  if ((*(byte *)(param_1 + 0xd2a) & 4) == 0) {
    *(byte *)(param_1 + 0xd2a) = *(byte *)(param_1 + 0xd2a) & 0xfa | 4;
    (*(code *)param_1[0xd12][2])(local_108);
  }
  FUN_1415048e2(param_1 + 0xd54);
  FUN_1418f0e44(param_1 + 0xd89,param_1);
  if (*(char *)(param_1 + 0x1201) != '\0') {
    FUN_14108fcb8(param_1 + 0x11f8);
  }
  if ((*(char *)(param_1 + 0x2f) == '\x03') &&
     (ppppplVar5 = param_1[0x7ee], ppppplVar5 != (longlong *****)0x0)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar25 = (ulonglong)((uint)*(ushort *)((longlong)ppppplVar5 + 0xe2c) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    local_e8 = (longlong ******)((ulonglong)local_e8 & 0xffffffffffffff00);
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    FUN_1456bb102(&local_e8,param_1);
    FUN_1448729ea(lVar25,&local_70,&local_e8);
    uVar13 = FUN_14005fbd2(&local_70,0);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppppplVar20 = &local_70;
      if (0x18 < local_58) {
        ppppppplVar20 = (longlong *******)local_70;
      }
      (*pcVar6)(ppppppplVar20);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70);
    }
    FUN_1448173f8(&uStack_c0);
    if (((char)local_e8 == '\x03') && (local_d8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))();
      }
    }
    FUN_14422b29e(param_1 + 0x1321,param_1[0x7ee] + 0x1f1,uVar13);
  }
  FUN_1418e7f6a(param_1 + 0x1076,param_1);
  FUN_140c7c762(param_1 + 0x10f8,param_1);
  FUN_140e1bfb6(param_1 + 0xce3,param_1);
  FUN_1409b52ac(param_1 + 0x752);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ab9f6 FUN_1440ab9f6 body=66 status=ok
// SIG undefined FUN_1440ab9f6(void)

undefined8 FUN_1440ab9f6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((((*(longlong *)(&DAT_00006850 + param_1) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(&DAT_00006850 + param_1) + 0x4588), lVar1 != 0)) &&
      (*(char *)(lVar1 + 0x1f) == '\x01')) &&
     (cVar2 = (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x60))(param_1 + 0x3b48), cVar2 != '\0'
     )) {
    return 0;
  }
  return 1;
}



// FUNCTION 1440aba7e FUN_1440aba7e body=946 status=ok
// SIG undefined FUN_1440aba7e(void)

ulonglong FUN_1440aba7e(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 unaff_RDI;
  longlong lVar9;
  
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
                (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) &&
               ((int)uVar1 < DAT_14c9647dc)) &&
              ((plVar8 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x75b4))
               ))) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar8;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = lVar4 + 0x110;
            goto LAB_1440abce5;
          }
        }
        else {
          lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_1440abce5:
          if (lVar4 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x20);
            goto LAB_1440abcf2;
          }
        }
      }
      else {
        lVar4 = (*pcVar2)(param_1);
LAB_1440abcf2:
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x3b0);
          goto LAB_1440abd02;
        }
      }
      goto LAB_1440abb2f;
    }
  }
  else {
    lVar4 = (*pcVar2)(param_1);
LAB_1440abd02:
    if (lVar4 == 0) {
LAB_1440abb2f:
      if (((longlong *)param_1[0x7ee] == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*(longlong *)param_1[0x7ee] + 0x80))(), cVar3 == '\0')) {
        uVar6 = FUN_1433b76c8(param_1);
        return uVar6;
      }
    }
  }
  if (((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) && (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (((char)param_1[0x2f] != '\x03') && ((char)param_1[0x2f] != '\0')) goto LAB_1440abd85;
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0);
      if ((0 < *(int *)(lVar4 + 0x90)) && (lVar7 = **(longlong **)(lVar4 + 0x88), lVar7 != 0)) {
        lVar5 = FUN_1402cf98a();
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
           ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30 &&
            (lVar4 = *(longlong *)(**(longlong **)(lVar4 + 0x88) + 0x178), lVar4 != 0)))) {
          lVar9 = *(longlong *)(lVar4 + 0x2b0);
        }
      }
    }
    if ((*(byte *)(lVar9 + 0x39d) & 4) == 0) goto LAB_1440abd85;
    lVar4 = param_1[0x39];
    if (lVar4 == 0) {
      if ((double)*(float *)(lVar9 + 0x40c) <= DAT_14c8464f0) goto LAB_1440abd85;
    }
    else if ((double)*(float *)(lVar9 + 0x40c) < *(double *)(lVar4 + 0x270) ||
             (double)*(float *)(lVar9 + 0x40c) == *(double *)(lVar4 + 0x270)) {
      if ((*(byte *)(lVar4 + 0x9c) & 1) == 0) goto LAB_1440abd85;
      if ((-4398046511104.0 <= *(double *)(lVar4 + 0x160) - *(double *)(lVar4 + 0x178)) &&
         (*(double *)(lVar4 + 0x160) + *(double *)(lVar4 + 0x178) <= 4398046511104.0)) {
        if ((-4398046511104.0 <= *(double *)(lVar4 + 0x168) - *(double *)(lVar4 + 0x180)) &&
           (*(double *)(lVar4 + 0x168) + *(double *)(lVar4 + 0x180) <= 4398046511104.0)) {
          if ((-4398046511104.0 <= *(double *)(lVar4 + 0x170) - *(double *)(lVar4 + 0x188)) &&
             (*(double *)(lVar4 + 0x170) + *(double *)(lVar4 + 0x188) <= 4398046511104.0))
          goto LAB_1440abd85;
        }
      }
      (**(code **)(*param_1 + 0x518))(param_1);
      goto LAB_1440abd83;
    }
    lVar4 = *(longlong *)(lVar9 + 0x410);
    if ((((lVar4 == 0) || (lVar7 = FUN_1411311bc(), lVar7 == 0)) ||
        (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30 || (lVar4 = *(longlong *)(lVar9 + 0x410), lVar4 == 0)))) {
      plVar8 = (longlong *)FUN_1411311bc();
      lVar4 = plVar8[0x22];
    }
    else {
      lVar7 = FUN_1411311bc();
      if (((lVar7 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(lVar9 + 0x410);
      }
      lVar4 = plVar8[0x22];
    }
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      lVar4 = plVar8[0x22];
    }
    (**(code **)(*param_1 + 0x510))(param_1,lVar4);
  }
LAB_1440abd83:
  uVar6 = 0;
LAB_1440abd85:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1440abe30 FUN_1440abe30 body=289 status=ok
// SIG undefined FUN_1440abe30(void)

bool FUN_1440abe30(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x450) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x450) + 0x1087) != '\x01')) {
    return false;
  }
  plVar3 = (longlong *)(param_1 + -0x3b20);
  pcVar2 = *(code **)(*plVar3 + 0x5e8);
  if (pcVar2 != FUN_140972dde) {
    lVar4 = (*pcVar2)(plVar3);
    goto LAB_1440abefa;
  }
  lVar4 = *(longlong *)(param_1 + -0x3770);
  if (lVar4 != 0) goto LAB_1440abefa;
  pcVar2 = *(code **)(*plVar3 + 0x5f8);
  if (pcVar2 == FUN_144784df4) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x100) + 0x18);
    if (pcVar2 == (code *)&LAB_144904684) {
      if (*(int *)(param_1 + 0x3a94) != 0) {
        uVar1 = *(uint *)(param_1 + 0x3a90);
        lVar4 = 0;
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1440abefa;
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar3 != (longlong *)0x0) &&
           (((int)plVar3[2] == *(int *)(param_1 + 0x3a94) &&
            ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar3;
          }
          else {
            lVar4 = 0;
          }
          lVar4 = lVar4 + 0x110;
          goto LAB_1440abf19;
        }
      }
    }
    else {
      lVar4 = (*pcVar2)(param_1 + 0x100);
LAB_1440abf19:
      if (lVar4 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20);
        goto LAB_1440abf22;
      }
    }
  }
  else {
    lVar4 = (*pcVar2)(plVar3);
LAB_1440abf22:
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x3b0);
      goto LAB_1440abefa;
    }
  }
  lVar4 = 0;
LAB_1440abefa:
  return lVar4 == 0;
}



// FUNCTION 1440abf52 FUN_1440abf52 body=36 status=ok
// SIG undefined FUN_1440abf52(void)

undefined1 FUN_1440abf52(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 0x9208) < 2) &&
     (*(char *)(*(longlong *)(param_1 + 0x3f70) + 0xdf9) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x7f20);
  }
  return uVar1;
}



// FUNCTION 1440ac040 FUN_1440ac040 body=100 status=ok
// SIG undefined FUN_1440ac040(void)

float FUN_1440ac040(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + -0xc70) == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(*(longlong *)(param_1 + -0xc70) + 0x360);
  }
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2a28) + 0x28))(param_1 + 0x2a28);
  if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
     (*(longlong *)(param_1 + 0x6338) != 0)) {
    fVar2 = fVar2 * *(float *)(*(longlong *)(param_1 + 0x6338) + 100);
  }
  return fVar2;
}



// FUNCTION 1440ac0a4 FUN_1440ac0a4 body=95 status=ok
// SIG undefined FUN_1440ac0a4(void)

void FUN_1440ac0a4(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  (**(code **)(*(longlong *)(param_1 + -0x10a0) + 0x828))(param_1 + -0x10a0,&local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ac134 FUN_1440ac134 body=38 status=ok
// SIG undefined FUN_1440ac134(void)

void FUN_1440ac134(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar1 = FUN_1447210f0();
    FUN_144120578(1,uVar1);
    return;
  }
  return;
}



// FUNCTION 1440ac15a FUN_1440ac15a body=202 status=ok
// SIG undefined FUN_1440ac15a(void)

void FUN_1440ac15a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1407ae1a6(param_1 + 0x6c48,&local_40,&DAT_14cb8c3a8);
  if (local_40 != 0) {
    uVar3 = *(undefined1 *)(param_1 + 0x6f68);
    local_30 = "Input";
    local_28 = 5;
    local_24 = 0;
    uVar4 = FUN_14001a6c0(&local_30,1);
    local_30 = (char *)(ulonglong)uVar4;
    FUN_1407add6a(local_40,&local_30,&DAT_14cbc1dc8,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ac226 FUN_1440ac226 body=150 status=ok
// SIG undefined FUN_1440ac226(void)

void FUN_1440ac226(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x6030) & 1) != 0) {
      return;
    }
    FUN_141877826(param_1 + 0x1290);
    lVar2 = FUN_1405831b2();
    lVar2 = FUN_140963a30(lVar2 + 0x1040);
    if (lVar2 != 0) {
      lVar3 = 0x38;
      if ((*(byte *)(param_1 + 0x12c0) & 2) == 0) {
        lVar3 = 0x20;
      }
      cVar1 = (**(code **)(*(longlong *)(param_1 + -0x2a78) + lVar3))(param_1 + -0x2a78,lVar2);
      if (cVar1 != '\0') {
        return;
      }
    }
  }
  else {
    FUN_141877826(param_1 + 0x1290);
  }
                    /* WARNING: Could not recover jumptable at 0x0001440ac259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x3b58) + 0x5c8))((longlong *)(param_1 + -0x3b58),0);
  return;
}



// FUNCTION 1440ac2d6 FUN_1440ac2d6 body=51 status=ok
// SIG undefined FUN_1440ac2d6(void)

longlong FUN_1440ac2d6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x420) == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_1440af8ea(*(longlong *)(param_1 + 0x420) + 0xd38);
    lVar2 = lVar1 + 0x30;
    if (lVar1 == 0) {
      lVar2 = 0;
    }
  }
  return lVar2;
}



// FUNCTION 1440ac30a FUN_1440ac30a body=201 status=ok
// SIG undefined FUN_1440ac30a(void)

undefined8 FUN_1440ac30a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  
  if (param_2 == '\0') {
    return *(undefined8 *)(param_1 + -0x3608);
  }
  plVar4 = *(longlong **)(param_1 + 0x3bb0);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) {
      return 0;
    }
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar4 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  lVar5 = *(longlong *)(param_1 + 0x3ba8);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x1fc) != 0)) {
    uVar3 = *(uint *)(lVar5 + 0x1f8);
    uVar9 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1440ac39e;
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((puVar8 != (undefined8 *)0x0) && (*(int *)(puVar8 + 2) == *(int *)(lVar5 + 0x1fc))) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
      uVar9 = *puVar8;
      goto LAB_1440ac39e;
    }
  }
  uVar9 = 0;
LAB_1440ac39e:
  LOCK();
  plVar1 = plVar4 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return uVar9;
}



// FUNCTION 1440ac426 FUN_1440ac426 body=714 status=ok
// SIG undefined FUN_1440ac426(void)

undefined4 * FUN_1440ac426(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + -0x3a30);
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x3a30) + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    if (*(longlong *)(param_1 + -0x3680) != 0) goto LAB_1440ac553;
    pcVar3 = *(code **)(*(longlong *)(param_1 + -0x3a30) + 0x5f8);
    if (pcVar3 == FUN_144784df4) {
      pcVar3 = *(code **)(*(longlong *)(param_1 + 0x1f0) + 0x18);
      if (pcVar3 == (code *)&LAB_144904684) {
        if (((((*(int *)(param_1 + 0x3b84) != 0) &&
              (uVar2 = *(uint *)(param_1 + 0x3b80), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x3b84))))) &&
           ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar6 = *plVar7;
          }
          else {
            lVar6 = 0;
          }
          lVar6 = lVar6 + 0x110;
          goto LAB_1440ac539;
        }
      }
      else {
        lVar6 = (*pcVar3)(param_1 + 0x1f0);
LAB_1440ac539:
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x20);
          goto LAB_1440ac542;
        }
      }
    }
    else {
      lVar6 = (*pcVar3)(plVar1);
LAB_1440ac542:
      if (lVar6 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x3b0);
        goto LAB_1440ac54e;
      }
    }
  }
  else {
    lVar6 = (*pcVar3)(plVar1);
LAB_1440ac54e:
    if (lVar6 != 0) {
LAB_1440ac553:
      lVar6 = *(longlong *)(param_1 + -0x3670);
      if (lVar6 == 0) {
LAB_1440ac6db:
        (**(code **)(*plVar1 + 0x718))(plVar1,&local_40);
      }
      else {
        if (DAT_14cbadd90 == 0) {
          local_60 = &local_40;
          local_40 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_1459f2e4c;
          local_68 = &LAB_148c39de3;
          local_70 = &LAB_1457a9eb2;
          local_78 = &DAT_149e063b2;
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          lVar6 = *(longlong *)(param_1 + -0x3670);
          if (lVar6 == 0) goto LAB_1440ac6db;
        }
        if ((((DAT_14cbadd90 == 0) || (lVar4 = *(longlong *)(lVar6 + 0x10), lVar4 == 0)) ||
            ((*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cbadd90 + 0x38) ||
             ((*(longlong *)
                (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
               DAT_14cbadd90 + 0x30 || (*(longlong **)(lVar6 + 0x448) == (longlong *)0x0)))))) ||
           ((cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x448) + 0x878))(), cVar5 == '\0' &&
            (*(longlong **)(lVar6 + 0x21f0) != plVar1)))) goto LAB_1440ac6db;
        (**(code **)(**(longlong **)(lVar6 + 0x448) + 0x730))
                  (*(longlong **)(lVar6 + 0x448),&local_40);
      }
      *(undefined8 *)(param_2 + 4) = local_30;
      *param_2 = (undefined4)local_40;
      param_2[1] = local_40._4_4_;
      param_2[2] = uStack_38;
      param_2[3] = uStack_34;
      *(undefined1 *)(param_2 + 6) = 1;
      goto LAB_1440ac4f8;
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
LAB_1440ac4f8:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1440ac70c FUN_1440ac70c body=1910 status=ok
// SIG undefined FUN_1440ac70c(void)

ulonglong FUN_1440ac70c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  void *_Src;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  undefined7 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte unaff_BPL;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  code *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar9 = (undefined7)(local_48 >> 8);
  bVar7 = 1;
  if (*(int *)(param_1 + 0x41f0) != *(int *)(param_1 + 0x421c)) {
    lVar13 = *(longlong *)(param_3 + 0xcfc);
    uVar8 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar15 = (uint)lVar13 & 0xffff;
    lVar14 = param_1 + 0x4220;
    if (*(longlong *)(param_1 + 0x4228) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x4228);
    }
    iVar16 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x4230) - 1U &
                               (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar15) +
                               (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar15 >> 4)) * 4);
    if (iVar16 != -1) {
      while (plVar10 = (longlong *)(*(longlong *)(param_1 + 0x41e8) + (longlong)iVar16 * 0x48),
            *plVar10 != lVar13) {
        iVar16 = (int)plVar10[8];
        if (iVar16 == -1) goto LAB_1440ac7d7;
      }
      if (plVar10 + 1 == (longlong *)0x0 || plVar10 == (longlong *)0x0) goto LAB_1440ac7d7;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_d0 = param_4;
      if ((longlong *)(param_1 + -0x3a30) == (longlong *)0x0) {
        local_c8._0_4_ = 0;
        iVar16 = 0;
        uVar8 = (uint)local_c8;
      }
      else {
        uVar8 = *(uint *)(param_1 + -0x3a24);
        local_c8 = (ulonglong)uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar16 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar16 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar16;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar16 = *(int *)(lVar13 + 0x10);
          bVar19 = iVar16 == 0;
          if (bVar19) {
            *(int *)(lVar13 + 0x10) = iVar12;
            iVar16 = 0;
          }
          UNLOCK();
          uVar8 = (uint)local_c8;
          if (bVar19) {
            iVar16 = iVar12;
          }
        }
      }
      local_c8._0_4_ = uVar8;
      local_c8 = CONCAT44(iVar16,(uint)local_c8);
      local_b8 = &DAT_14c9a63f0;
      local_d8 = (longlong *)(param_1 + -0x3a30);
      puStack_b0 = &local_c8;
      FUN_1406c57ae(&local_98,&local_a0,&local_b8,0);
      if (param_3 == 0) {
        local_c8._0_4_ = 0;
        iVar16 = 0;
        uVar8 = (uint)local_c8;
      }
      else {
        uVar8 = *(uint *)(param_3 + 0xc);
        local_c8 = (ulonglong)uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar16 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar16 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar16;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar16 = *(int *)(lVar13 + 0x10);
          bVar19 = iVar16 == 0;
          if (bVar19) {
            *(int *)(lVar13 + 0x10) = iVar12;
            iVar16 = 0;
          }
          UNLOCK();
          uVar8 = (uint)local_c8;
          if (bVar19) {
            iVar16 = iVar12;
          }
        }
      }
      local_c8._0_4_ = uVar8;
      local_c8 = CONCAT44(iVar16,(uint)local_c8);
      local_b8 = &DAT_14c9a63e8;
      puStack_b0 = &local_c8;
      FUN_1406c57ae(&local_98,&local_a0,&local_b8,0);
      local_b8 = (undefined8 *)0x0;
      puStack_b0 = (undefined8 *)0x0;
      local_c8 = 0;
      uStack_c0 = 0;
      plVar11 = plVar10 + 1;
      if ((longlong *)plVar10[6] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar10[6];
      }
      lVar13 = plVar10[7];
      if ((longlong)(int)lVar13 != 0) {
        lVar14 = 0;
        do {
          uVar6 = uStack_c0;
          lVar17 = (longlong)(int)uStack_c0;
          uVar8 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar8);
          if (uStack_c0._4_4_ < uVar8) {
            FUN_1406f071e(&local_c8,uVar6 & 0xffffffff);
          }
          piVar1 = (int *)((longlong)plVar11 + lVar14 + 0x20);
          lVar17 = lVar17 * 0x20;
          iVar16 = piVar1[-5];
          iVar12 = piVar1[-4];
          iVar4 = piVar1[-3];
          piVar2 = (int *)(local_c8 + lVar17);
          *piVar2 = piVar1[-6];
          piVar2[1] = iVar16;
          piVar2[2] = iVar12;
          piVar2[3] = iVar4;
          *(undefined8 *)(local_c8 + 0x10 + lVar17) = 0;
          iVar16 = *piVar1;
          _Src = *(void **)(piVar1 + -2);
          *(int *)(local_c8 + 0x18 + lVar17) = iVar16;
          if ((longlong)iVar16 == 0) {
            *(undefined4 *)(local_c8 + lVar17 + 0x1c) = 0;
          }
          else {
            puVar18 = (undefined8 *)(lVar17 + local_c8 + 0x10);
            FUN_1446dd670(puVar18,iVar16,0);
            memcpy((void *)*puVar18,_Src,(longlong)iVar16 * 2);
          }
          lVar14 = lVar14 + 0x28;
        } while ((longlong)(int)lVar13 * 0x28 != lVar14);
      }
      uVar5 = local_d0;
      lVar13 = *(longlong *)(param_1 + -0x3608);
      if (lVar13 != 0) {
        if (DAT_14cb63950 == 0) {
          local_a0 = FUN_144a7958c;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_1464ec72a;
          local_f0 = &local_a0;
          local_f8 = &LAB_1486f5f75;
          local_100 = &LAB_140945686;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000004;
          local_120 = 0x10;
          local_128 = 0x19d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
        }
        if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
          FUN_141226b46(&local_b8,lVar13 + 0x1288,&local_98);
        }
      }
      pcVar3 = *(code **)(*local_d8 + 0x5e8);
      if (pcVar3 == FUN_140972dde) {
        if (*(longlong *)(param_1 + -0x3680) != 0) goto LAB_1440acc50;
        pcVar3 = *(code **)(*local_d8 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          pcVar3 = *(code **)(*(longlong *)(param_1 + 0x1f0) + 0x18);
          if (pcVar3 == (code *)&LAB_144904684) {
            if ((((*(int *)(param_1 + 0x3b84) != 0) &&
                 (uVar8 = *(uint *)(param_1 + 0x3b80), -1 < (int)uVar8)) &&
                ((int)uVar8 < DAT_14c9647dc)) &&
               (((plVar10 = (longlong *)
                            ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                 plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x3b84))) &&
                ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                lVar13 = *plVar10;
              }
              else {
                lVar13 = 0;
              }
              lVar13 = lVar13 + 0x110;
              goto LAB_1440acc2a;
            }
          }
          else {
            lVar13 = (*pcVar3)(param_1 + 0x1f0);
LAB_1440acc2a:
            if (lVar13 != 0) {
              lVar13 = *(longlong *)(lVar13 + 0x20);
              goto LAB_1440acc37;
            }
          }
        }
        else {
          lVar13 = (*pcVar3)();
LAB_1440acc37:
          if (lVar13 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x3b0);
            goto LAB_1440acc47;
          }
        }
      }
      else {
        lVar13 = (*pcVar3)();
LAB_1440acc47:
        if (lVar13 != 0) {
LAB_1440acc50:
          plVar10 = *(longlong **)(param_1 + 0x3bb0);
          if (plVar10 != (longlong *)0x0) {
            iVar16 = (int)plVar10[1];
            do {
              if (iVar16 == 0) goto LAB_1440acb5c;
              LOCK();
              iVar12 = (int)plVar10[1];
              bVar19 = iVar16 == iVar12;
              if (bVar19) {
                *(int *)(plVar10 + 1) = iVar16 + 1;
                iVar12 = iVar16;
              }
              iVar16 = iVar12;
              UNLOCK();
            } while (!bVar19);
            lVar13 = *(longlong *)(param_1 + 0x3ba8);
            if (((lVar13 != 0) && (*(int *)(lVar13 + 0x1fc) != 0)) &&
               ((uVar8 = *(uint *)(lVar13 + 0x1f8), -1 < (int)uVar8 &&
                (((((int)uVar8 < DAT_14c9647dc &&
                   (plVar11 = (longlong *)
                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                   plVar11 != (longlong *)0x0)) && ((int)plVar11[2] == *(int *)(lVar13 + 0x1fc))) &&
                 (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))))))) {
              FUN_141226b46(&local_b8,*plVar11 + 0x1288,&local_98);
            }
            LOCK();
            plVar11 = plVar10 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
      }
LAB_1440acb5c:
      FUN_142b35dec(uVar5,&local_b8,&local_c8,0);
      unaff_BPL = FUN_141696f8c(uVar5);
      FUN_140861e20(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_140861e20(local_b8,(ulonglong)puStack_b0 & 0xffffffff);
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140535736(&local_98);
      bVar7 = 0;
      uVar9 = 0;
    }
  }
LAB_1440ac7d7:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar9,bVar7 | unaff_BPL) & 0xffffffffffffff01;
}



// FUNCTION 1440aceae FUN_1440aceae body=2022 status=ok
// SIG undefined FUN_1440aceae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440aceae(longlong param_1,uint param_2,longlong param_3)

{
  wchar_t *pwVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  int local_a4;
  code *local_a0;
  undefined1 local_98 [8];
  code *local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  wchar_t *local_60;
  undefined8 local_58;
  uint local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((int)param_2 < 0) || (*(char *)(param_1 + -0x3a70) != '\x03')) ||
     (uVar14 = (ulonglong)param_2, *(int *)(param_1 + 0x3d08) <= (int)param_2)) goto LAB_1440ad1fc;
  pwVar1 = (wchar_t *)(param_1 + -0x3be8);
  lVar15 = uVar14 * 0x48 + *(longlong *)(param_1 + 0x3d00);
  FUN_140705884(param_1 + 0x3bf0,lVar15);
  uVar4 = FUN_140232fad();
  if (((uVar4 == param_2) && (*(longlong *)(lVar15 + 0x20) != 0)) &&
     ((*(longlong *)(lVar15 + 0x28) != 0 &&
      ((lVar7 = FUN_1407afa82(pwVar1), lVar7 != 0 && (*(char *)(lVar7 + 0xb2c) == '\x01')))))) {
    plVar12 = (longlong *)(lVar15 + 0x20);
    FUN_1401861f4(param_1 + 0x3bd8,uVar14);
    if (*plVar12 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(lVar15 + 0x28);
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pwVar1,uVar14);
    if (*plVar12 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(lVar15 + 0x28);
    }
    uVar8 = (**(code **)(*plVar11 + 8))();
    FUN_140aeefbc(uVar8,0,1);
    *plVar12 = 0;
    *(undefined8 *)(lVar15 + 0x28) = 0;
  }
  FUN_1401861f4(param_1 + 0x3bd8,uVar14);
  lVar7 = FUN_1447210f0(pwVar1);
  if (lVar7 == 0) goto LAB_1440ad1fc;
  lVar9 = *(longlong *)(param_3 + 8);
  if ((((((*(int *)(lVar9 + 0x74) == 0) || (uVar4 = *(uint *)(lVar9 + 0x70), (int)uVar4 < 0)) ||
        (DAT_14c9647dc <= (int)uVar4)) ||
       ((plVar12 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(lVar9 + 0x74))))) ||
      ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar10 = *plVar12, lVar10 == 0)) {
    if (*(longlong *)(lVar9 + 0x78) == 0) goto LAB_1440ad1fc;
    lVar10 = FUN_140007850(lVar9 + 0x78);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    lVar13 = DAT_14c9647c8;
    if ((lVar10 == 0) || (cVar2 == '\0')) {
      if (lVar10 == 0) {
        *(undefined8 *)(lVar9 + 0x70) = 0;
        goto LAB_1440ad1fc;
      }
      uVar4 = *(uint *)(lVar10 + 0xc);
      *(uint *)(lVar9 + 0x70) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar5 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar16) {
          local_a4 = iVar6;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
          iVar6 = local_a4;
        }
        LOCK();
        iVar5 = *(int *)(lVar13 + 0x10);
        bVar16 = iVar5 == 0;
        if (bVar16) {
          *(int *)(lVar13 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar5 = iVar6;
        }
      }
LAB_1440ad1e9:
      *(int *)(lVar9 + 0x74) = iVar5;
    }
    else {
      uVar4 = *(uint *)(lVar10 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar4 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(lVar9 + 0x70) = uVar4;
          lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(lVar13 + (ulonglong)(uVar4 >> 0x10) * 8);
LAB_1440ad1de:
          iVar5 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            local_a4 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,local_a4);
            }
            LOCK();
            iVar5 = *(int *)(lVar13 + 0x10);
            bVar16 = iVar5 == 0;
            if (bVar16) {
              *(int *)(lVar13 + 0x10) = local_a4;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar16) {
              iVar5 = local_a4;
            }
          }
          goto LAB_1440ad1e9;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar9 + 0x70) = uVar4;
        lVar13 = 0;
        goto LAB_1440ad1de;
      }
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) != 0) goto LAB_1440ad1fc;
  }
  if (DAT_14c949118 == 0) {
    local_a0 = FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar8 = FUN_140011aa6();
      lVar9 = FUN_140011c0e(uVar8,0x250,8);
    }
    else {
      lVar9 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar9;
    FUN_1446f470e(local_98,L"Class",1);
    local_c0 = &local_a0;
    local_c8 = &LAB_146891e90;
    local_d0 = (code *)&LAB_146273097;
    local_e0 = L"Engine";
    local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
    local_e8 = 0x20;
    local_f0 = 0x10000000;
    local_f8._0_4_ = 8;
    FUN_14574b4b2(lVar9);
    DAT_14c949118 = lVar9;
    if (DAT_14c951858 == 0) {
      local_c0 = &local_90;
      local_90 = FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1468c5283;
      local_d0 = FUN_142809da0;
      local_d8 = L"Engine";
      local_e0 = (wchar_t *)0x400000000;
      local_e8 = CONCAT44(local_e8._4_4_,0x10000000);
      local_f0 = 8;
      local_f8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = DAT_14c951858;
    lVar9 = DAT_14c949118;
    uVar8 = FUN_1449e2fb2();
    local_f8 = L"Class";
    FUN_14574b446(uVar8,lVar9,lVar13,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar9 = FUN_140126fc0(), lVar9 == 0)) ||
     ((*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
       lVar9 + 0x30)))) goto LAB_1440ad1fc;
  cVar2 = FUN_1459b764e(pwVar1);
  local_e8 = CONCAT71(local_e8._1_7_,1);
  local_f0 = CONCAT31(local_f0._1_3_,1);
  local_f8 = pwVar1;
  local_90 = (code *)FUN_141020042(lVar7,lVar10,&DAT_14c846480,pwVar1);
  FUN_14101fdf2(lVar15 + 0x20,&local_90);
  if (*(longlong *)(lVar15 + 0x20) == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(lVar15 + 0x28);
  }
  lVar15 = (**(code **)(*plVar12 + 8))();
  if (lVar15 == 0) goto LAB_1440ad1fc;
  lVar7 = (**(code **)(*(longlong *)pwVar1 + 0x5e8))(pwVar1);
  if (lVar7 == 0) {
LAB_1440ad283:
    lVar7 = 0;
  }
  else {
    if (DAT_14cbae3d8 == 0) {
      local_90 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = (code *)&LAB_1464f5fc4;
      local_c8 = &LAB_148c3dd26;
      local_d0 = (code *)&LAB_1459673ba;
      local_d8 = L"Engine";
      local_e0 = (wchar_t *)0x0;
      local_e8 = CONCAT44(local_e8._4_4_,0x10000004);
      local_f0 = 0x10;
      local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,0x1360);
      local_c0 = &local_90;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) != DAT_14cbae3d8 + 0x30)) goto LAB_1440ad283;
  }
  uVar4 = FUN_1403ae46b();
  if (uVar4 == param_2) {
    iVar5 = FUN_14042831e(pwVar1);
    iVar6 = FUN_1403ae46b();
    if (((lVar7 != 0) && (iVar5 == iVar6)) && (*(byte *)(lVar7 + 0xce4) != 0)) {
      FUN_14130b0ce(pwVar1,*(byte *)(lVar7 + 0xce4) - 1,1,0);
    }
  }
  if ((cVar2 == '\0') && (cVar3 = FUN_140ae5f1a(uVar14), cVar3 != '\0')) {
    FUN_141020220(pwVar1,uVar14);
  }
  uVar4 = *(uint *)(lVar15 + 0xc);
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar5 = *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar16 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar16) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar5 = *(int *)(lVar7 + 0x10);
    bVar16 = iVar5 == 0;
    if (bVar16) {
      *(int *)(lVar7 + 0x10) = iVar6;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar16) {
      iVar5 = iVar6;
    }
  }
  local_58 = CONCAT44(iVar5,uVar4);
  local_78 = 0;
  local_68 = &PTR_LAB_14b95c650;
  local_88 = FUN_1440b611c;
  local_60 = pwVar1;
  local_50 = param_2;
  local_4c = cVar2;
  FUN_140f6405a(lVar15,param_3 + 8);
LAB_1440ad1fc:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ad696 FUN_1440ad696 body=2052 status=ok
// SIG undefined FUN_1440ad696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440ad696(longlong param_1,longlong param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_2b8 [32];
  code *local_298;
  undefined4 local_290;
  undefined8 local_288;
  wchar_t *local_280;
  wchar_t *local_278;
  code *local_270;
  undefined1 *local_268;
  code **local_260;
  code *local_258;
  code *local_250;
  undefined1 local_23d;
  int local_23c;
  undefined8 local_238;
  longlong lStack_230;
  code *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  longlong local_210;
  undefined1 local_208 [80];
  undefined1 local_1b8 [256];
  longlong local_b8;
  undefined1 local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((*(char *)(param_2 + 0x160) < '\0') ||
     (*(int *)(param_1 + 0x3d08) <= (int)*(char *)(param_2 + 0x160))) goto LAB_1440ad6d1;
  pcVar1 = (code *)(param_1 + -0x3be8);
  local_23d = FUN_1459b764e(pcVar1);
  if (*(char *)(param_1 + -0x3a70) != '\x03') goto LAB_1440ad6d1;
  cVar3 = *(char *)(param_2 + 0x160);
  lVar7 = *(longlong *)(param_1 + 0x3d00);
  lVar10 = lVar7 + (longlong)cVar3 * 0x48;
  FUN_140705884(param_1 + 0x3bf0,lVar10);
  lVar7 = lVar7 + (longlong)cVar3 * 0x48;
  plVar14 = (longlong *)(lVar7 + 0x20);
  if ((*plVar14 != 0) && (plVar12 = *(longlong **)(lVar10 + 0x28), plVar12 != (longlong *)0x0)) {
    (**(code **)(*plVar12 + 0x18))(plVar12,pcVar1,(int)*(char *)(param_2 + 0x160));
    if (*plVar14 == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = *(longlong **)(lVar10 + 0x28);
    }
    uVar6 = (**(code **)(*plVar12 + 8))();
    FUN_140aeefbc(uVar6,0,1);
    *plVar14 = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
  }
  FUN_1401861f4(param_1 + 0x3bd8,(int)*(char *)(param_2 + 0x160));
  lVar7 = FUN_1447210f0(pcVar1);
  if (lVar7 == 0) goto LAB_1440ad6d1;
  lVar8 = *(longlong *)(param_2 + 0x50);
  if ((((*(int *)(lVar8 + 0x74) == 0) || (uVar2 = *(uint *)(lVar8 + 0x70), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(lVar8 + 0x74))) ||
      (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar9 = *plVar12, lVar9 == 0)))))) {
    if (*(longlong *)(lVar8 + 0x78) == 0) goto LAB_1440ad6d1;
    lVar9 = FUN_140007850(lVar8 + 0x78);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    lVar13 = DAT_14c9647c8;
    if ((lVar9 == 0) || (cVar3 == '\0')) {
      if (lVar9 == 0) {
        *(undefined8 *)(lVar8 + 0x70) = 0;
        goto LAB_1440ad6d1;
      }
      uVar2 = *(uint *)(lVar9 + 0xc);
      *(uint *)(lVar8 + 0x70) = uVar2;
      if (DAT_14c9647dc <= (int)uVar2) goto LAB_1440ad99e;
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
LAB_1440ad969:
      iVar4 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        local_23c = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        local_23c);
        }
        LOCK();
        iVar4 = *(int *)(lVar13 + 0x10);
        bVar15 = iVar4 == 0;
        if (bVar15) {
          *(int *)(lVar13 + 0x10) = local_23c;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar4 = local_23c;
        }
      }
      *(int *)(lVar8 + 0x74) = iVar4;
    }
    else {
      uVar2 = *(uint *)(lVar9 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar2 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(lVar8 + 0x70) = uVar2;
          lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(lVar13 + (ulonglong)(uVar2 >> 0x10) * 8);
          goto LAB_1440ad969;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar8 + 0x70) = uVar2;
LAB_1440ad99e:
        lVar13 = 0;
        goto LAB_1440ad969;
      }
    }
    if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) != 0) goto LAB_1440ad6d1;
  }
  if (DAT_14c949118 == 0) {
    local_228 = FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar6 = FUN_140011aa6();
      lVar8 = FUN_140011c0e(uVar6,0x250,8);
    }
    else {
      lVar8 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar8;
    FUN_1446f470e(&local_238,L"Class",1);
    local_260 = &local_228;
    local_268 = &LAB_146891e90;
    local_270 = (code *)&LAB_146273097;
    local_280 = L"Engine";
    local_278 = (wchar_t *)CONCAT44(local_278._4_4_,199);
    local_288 = 0x20;
    local_290 = 0x10000000;
    local_298._0_4_ = 8;
    FUN_14574b4b2(lVar8);
    DAT_14c949118 = lVar8;
    if (DAT_14c951858 == 0) {
      local_260 = (code **)&local_220;
      local_220 = FUN_1449e2820;
      local_250 = FUN_14081d0ea;
      local_258 = FUN_14081d0ea;
      local_268 = &LAB_1468c5283;
      local_270 = FUN_142809da0;
      local_278 = L"Engine";
      local_280 = (wchar_t *)0x400000000;
      local_288 = CONCAT44(local_288._4_4_,0x10000000);
      local_290 = 8;
      local_298._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = DAT_14c951858;
    lVar8 = DAT_14c949118;
    uVar6 = FUN_1449e2fb2();
    local_298 = (code *)0x149e6ee30;
    FUN_14574b446(uVar6,lVar8,lVar13,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar8 = FUN_140126fc0(), lVar8 == 0)) ||
     ((*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
       lVar8 + 0x30)))) goto LAB_1440ad6d1;
  local_288 = CONCAT71(local_288._1_7_,1);
  local_290 = CONCAT31(local_290._1_3_,1);
  local_298 = pcVar1;
  local_220 = (code *)FUN_141020042(lVar7,lVar9,&DAT_14c846480,pcVar1);
  FUN_14101fdf2(plVar14,&local_220);
  if (*plVar14 == 0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = *(longlong **)(lVar10 + 0x28);
  }
  lVar10 = (**(code **)(*plVar14 + 8))();
  if (lVar10 == 0) goto LAB_1440ad6d1;
  lVar7 = (**(code **)(*(longlong *)pcVar1 + 0x5e8))(pcVar1);
  if (lVar7 == 0) {
LAB_1440ada02:
    lVar7 = 0;
  }
  else {
    if (DAT_14cbae3d8 == 0) {
      local_220 = FUN_141030f22;
      local_250 = FUN_14081d0ea;
      local_258 = (code *)&LAB_1464f5fc4;
      local_268 = &LAB_148c3dd26;
      local_270 = (code *)&LAB_1459673ba;
      local_278 = L"Engine";
      local_280 = (wchar_t *)0x0;
      local_288 = CONCAT44(local_288._4_4_,0x10000004);
      local_290 = 0x10;
      local_298 = (code *)CONCAT44(local_298._4_4_,0x1360);
      local_260 = (code **)&local_220;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) != DAT_14cbae3d8 + 0x30)) goto LAB_1440ada02;
  }
  cVar3 = *(char *)(param_2 + 0x160);
  iVar4 = FUN_1403ae46b();
  if (iVar4 == cVar3) {
    iVar4 = FUN_14042831e(pcVar1);
    iVar5 = FUN_1403ae46b();
    if (((lVar7 != 0) && (iVar4 == iVar5)) && (*(byte *)(lVar7 + 0xce4) != 0)) {
      FUN_14130b0ce(pcVar1,*(byte *)(lVar7 + 0xce4) - 1,1,0);
    }
  }
  lStack_230 = 0;
  uVar2 = *(uint *)(lVar10 + 0xc);
  local_238 = (ulonglong)uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar4 = *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar5 = DAT_14c964868 + 1;
    bVar15 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar15) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar5);
    }
    LOCK();
    iVar4 = *(int *)(lVar7 + 0x10);
    bVar15 = iVar4 == 0;
    if (bVar15) {
      *(int *)(lVar7 + 0x10) = iVar5;
      iVar4 = 0;
    }
    UNLOCK();
    uVar2 = (uint)local_238;
    if (bVar15) {
      iVar4 = iVar5;
    }
  }
  local_238._0_4_ = uVar2;
  local_238 = CONCAT44(iVar4,(uint)local_238);
  cVar3 = FUN_14493c216(&local_238,0);
  if (cVar3 == '\0') {
    lStack_230 = lVar10;
  }
  uStack_218 = local_238;
  local_210 = lStack_230;
  local_220 = pcVar1;
  FUN_14154dd46(local_208,param_2);
  local_90 = local_23d;
  local_88[0] = (code *)0x0;
  puVar11 = (undefined8 *)FUN_14001cc68(0x1a0,8);
  *puVar11 = &PTR_FUN_14b95c670;
  puVar11[3] = local_210;
  *(undefined4 *)(puVar11 + 1) = (undefined4)local_220;
  *(undefined4 *)((longlong)puVar11 + 0xc) = local_220._4_4_;
  *(undefined4 *)(puVar11 + 2) = (undefined4)uStack_218;
  *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_218._4_4_;
  local_78 = puVar11;
  FUN_14661e63c(puVar11 + 4,local_208);
  *(undefined1 *)(puVar11 + 0x33) = local_90;
  if (puVar11 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_1440b63a2;
  }
  FUN_140f6405a(lVar10,param_2 + 0x50,local_88);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(local_1b8);
LAB_1440ad6d1:
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ade9e FUN_1440ade9e body=337 status=ok
// SIG undefined FUN_1440ade9e(void)

void FUN_1440ade9e(byte *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong unaff_RBP;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar7);
      if (lVar2 != 0) {
        lVar5 = FUN_14081cebe();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          bVar4 = *param_1;
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar4);
          puVar6 = &DAT_149e1e318;
          if (bVar4 == 1) {
            local_58 = *param_3;
            uStack_54 = param_3[1];
            uStack_50 = param_3[2];
            uStack_4c = param_3[3];
            puVar6 = &local_58;
          }
          FUN_140b3c54c(lVar2,0,puVar6);
          FUN_140b3c4ca(lVar2,unaff_RBP & 0xffffffff);
          if ((((*(uint *)(lVar2 + 0x2e4) & 2) == 0) == (bool)bVar4) &&
             (*(uint *)(lVar2 + 0x2e4) = (*(uint *)(lVar2 + 0x2e4) & 0xfffffffd) + (uint)bVar4 * 2,
             (~*(byte *)(lVar2 + 0x9c) & 3) == 0)) {
            bVar4 = *(byte *)(lVar2 + 0x9d);
            if ((bVar4 & 1) == 0) {
LAB_1440adf9b:
              *(byte *)(lVar2 + 0x9d) = bVar4 | 1;
              FUN_1401057d4(lVar2);
              FUN_14010586c(&DAT_14cad0140,lVar2);
            }
            else if (*(longlong *)(lVar2 + 0xb0) == 0) {
              lVar5 = FUN_1448abda6(lVar2);
              if (lVar5 == 0) {
                bVar4 = *(byte *)(lVar2 + 0x9d);
                goto LAB_1440adf9b;
              }
            }
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440adff0 FUN_1440adff0 body=103 status=ok
// SIG undefined FUN_1440adff0(void)

undefined8 * FUN_1440adff0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x3a00);
  if (plVar3 == (longlong *)0x0) {
LAB_1440ae047:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1440ae047;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_2 = *(undefined8 *)(param_1 + 0x39f8);
    param_2[1] = plVar3;
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



// FUNCTION 1440ae058 FUN_1440ae058 body=172 status=ok
// SIG undefined FUN_1440ae058(void)

undefined8 FUN_1440ae058(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  
  plVar4 = *(longlong **)(param_1 + 0x75e0);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) {
      return 0;
    }
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar10 = iVar7 == iVar6;
    if (bVar10) {
      *(int *)(plVar4 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar10);
  lVar5 = *(longlong *)(param_1 + 0x75d8);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x204) != 0)) {
    uVar3 = *(uint *)(lVar5 + 0x200);
    uVar9 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1440ae0d3;
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((puVar8 != (undefined8 *)0x0) && (*(int *)(puVar8 + 2) == *(int *)(lVar5 + 0x204))) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
      uVar9 = *puVar8;
      goto LAB_1440ae0d3;
    }
  }
  uVar9 = 0;
LAB_1440ae0d3:
  LOCK();
  plVar1 = plVar4 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return uVar9;
}



// FUNCTION 1440ae104 FUN_1440ae104 body=186 status=ok
// SIG undefined FUN_1440ae104(void)

void FUN_1440ae104(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(&DAT_00006850 + param_1);
  if (plVar2 != (longlong *)0x0) {
    local_19 = '\0';
    (**(code **)(*plVar2 + 0xf20))(plVar2,1,&local_19);
    if (local_19 == '\x01') {
      *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) | 8;
      goto LAB_1440ae1a1;
    }
    cVar1 = FUN_140fb2b02(*(undefined8 *)(&DAT_00006850 + param_1));
    if (cVar1 == '\0') goto LAB_1440ae1a1;
  }
  FUN_141864f18(param_1);
  plVar2 = *(longlong **)(&DAT_00006850 + param_1);
  if (plVar2 != (longlong *)0x0) {
    if (((char)plVar2[0x220] == '\n') && (plVar2[0x22] != 0)) {
      *(undefined1 *)((longlong)plVar2 + 0x422b) = 0;
      (**(code **)(*plVar2 + 0xef8))();
      plVar2 = *(longlong **)(&DAT_00006850 + param_1);
    }
    *(byte *)(plVar2 + 0x774) = *(byte *)(plVar2 + 0x774) & 0xfe;
  }
LAB_1440ae1a1:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ae1ec FUN_1440ae1ec body=590 status=ok
// SIG undefined FUN_1440ae1ec(void)

ulonglong FUN_1440ae1ec(longlong param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 unaff_RDI;
  
  lVar5 = *(longlong *)(param_1 + 0x11e8);
  if ((((lVar5 != 0) && ((&DAT_00001100)[lVar5] == '\n')) && (*(longlong *)(lVar5 + 0x110) != 0)) &&
     ((cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x178) + 0x118))(lVar5 + 0x178), cVar2 != '\0' &&
      (uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1), (*(byte *)(lVar5 + 0x1c8) & 2) != 0)))
     ) goto LAB_1440ae42f;
  if (((*(char *)(param_1 + 0x178) != '\x02') ||
      ((lVar5 = *(longlong *)(&DAT_00006850 + param_1), lVar5 == 0 ||
       (cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x178) + 0xe0))(lVar5 + 0x178), cVar2 != '\0'))))
     || (*(int *)(&DAT_00002bb0 + *(longlong *)(&DAT_00006850 + param_1)) ==
         *(int *)(param_1 + 0x568))) {
    bVar1 = *(byte *)(param_1 + 0x550);
    lVar4 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x10))(param_1 + 0x3c20);
    lVar5 = *(longlong *)(&DAT_00006850 + param_1);
    if (((((lVar5 != 0) &&
          (cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x178) + 0x118))(lVar5 + 0x178), cVar2 != '\0'
          )) && ((*(byte *)(lVar5 + 0x1c8) & 2) != 0)) &&
        (((*(byte *)(*(longlong *)(&DAT_00006850 + param_1) + 0x5b5) & 0x20) == 0 &&
         (cVar2 = FUN_1410040b8(param_1 + 0x88d0), cVar2 == '\0')))) &&
       (((lVar4 == 0 ||
         ((lVar5 = FUN_14058c572(lVar4), lVar5 == 0 || (*(float *)(lVar4 + 0x50) <= 0.0)))) ||
        (*(char *)(lVar5 + 0x730) == '\0')))) {
      cVar2 = (**(code **)(*(longlong *)(*(longlong *)(&DAT_00006850 + param_1) + 0x178) + 0xe0))
                        (*(longlong *)(&DAT_00006850 + param_1) + 0x178);
      cVar3 = '\x01';
      if (((cVar2 == '\0') &&
          (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(&DAT_00006850 + param_1) + 0x178) + 0xd8
                               ))(*(longlong *)(&DAT_00006850 + param_1) + 0x178), cVar2 == '\0'))
         && (cVar2 = (**(code **)(**(longlong **)(&DAT_00006850 + param_1) + 0xdb8))(),
            cVar2 == '\0')) {
        if ((&DAT_00001100)[*(longlong *)(&DAT_00006850 + param_1)] != '\r') goto LAB_1440ae42d;
        cVar3 = FUN_140fb2b02();
      }
      if (cVar3 == '\x01' && (bVar1 & 2) == 0) {
        uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        if (((*(byte *)(param_1 + 0x551) & 8) != 0) ||
           (lVar5 = *(longlong *)(&DAT_00006850 + param_1), *(char *)(lVar5 + 0x2ca8) != '\0'))
        goto LAB_1440ae42f;
        iVar7 = *(int *)(param_1 + 0x568);
        if (iVar7 == 0) {
          cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x178) + 0xd8))(lVar5 + 0x178);
          iVar7 = *(int *)(param_1 + 0x568);
          if (cVar2 != '\0') {
            iVar7 = iVar7 + 1;
            if (iVar7 < *(int *)(param_1 + 0x564)) goto LAB_1440ae401;
            goto LAB_1440ae42d;
          }
        }
        if (iVar7 < *(int *)(param_1 + 0x564)) {
          if (iVar7 != 0) {
LAB_1440ae401:
                    /* WARNING: Could not recover jumptable at 0x0001440ae41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (**(code **)(**(longlong **)(&DAT_00006850 + param_1) + 0xf08))
                              (*(longlong **)(&DAT_00006850 + param_1),iVar7,0);
            return uVar6;
          }
          goto LAB_1440ae42f;
        }
      }
    }
  }
LAB_1440ae42d:
  uVar6 = 0;
LAB_1440ae42f:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1440ae45c FUN_1440ae45c body=33 status=ok
// SIG undefined FUN_1440ae45c(void)

void FUN_1440ae45c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_498 [32];
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 uStack_44c;
  undefined1 uStack_448;
  undefined8 uStack_444;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_424;
  undefined4 uStack_41c;
  undefined5 uStack_418;
  undefined3 uStack_413;
  undefined5 uStack_410;
  undefined8 uStack_408;
  undefined2 uStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  char cStack_2f4;
  undefined1 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  int iStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined8 uStack_27c;
  undefined4 uStack_274;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  undefined4 uStack_224;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 uStack_1a8;
  undefined4 uStack_180;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  if (((*(char *)(param_1 + 0x178) != '\x03') || (*(longlong *)(param_1 + 0x3f70) == 0)) ||
     (*(char *)(param_1 + 0x7920) != '\0')) {
    return;
  }
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (((*(char *)(param_1 + 0x178) != '\x03') || (lVar4 = FUN_1447210f0(), lVar4 == 0)) ||
     ((FUN_14111cb72(param_1), *(char *)(param_1 + 0x7923) != '\x01' ||
      (lVar4 = FUN_140cf8388(param_1), lVar4 == 0)))) goto LAB_14111c983;
  uStack_44c = 0;
  uStack_448 = 0;
  uStack_444 = 0;
  uStack_438 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_430 = DAT_14cb7bd68;
  uStack_428 = DAT_14cb7bd70;
  uStack_424 = DAT_14cb7bd80;
  uStack_41c = DAT_14cb7bd88;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_410 = 0;
  uStack_418 = 0;
  uStack_413 = 0;
  uStack_3f0 = 0xc000;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_37c = 0x3ff00000;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_354 = 0x3ff00000;
  uStack_350 = 0;
  uStack_34c = 0x3ff00000;
  uStack_348 = 0x3ff0000000000000;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_310 = 0xffffffff;
  uStack_30c = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  cStack_2f4 = '\0';
  uStack_2f0 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_2a0 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  iStack_2b8 = 0;
  uStack_2c8 = 0;
  puStack_2c0 = (undefined8 *)0x0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_27c = 0xffffffff00000080;
  uStack_274 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_22c = 0xffffffff00000080;
  uStack_224 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0xffffffff00000000;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1cc = 0xffffffff00000080;
  uStack_1c4 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_180 = 0;
  uStack_158 = 0;
  uStack_150 = 0x200000000;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_134 = 0x20;
  uStack_130 = 0xffffffff;
  uStack_12c = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x200000000;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x20;
  uStack_c8 = 0xffffffff;
  uStack_c4 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  uStack_80 = 0x200000000;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0x20;
  uStack_60 = 0xffffffff;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar5 = FUN_14111d03a(param_1);
  FUN_14111cb14(&uStack_478,uVar5);
  FUN_1411f52f4(&uStack_468,param_1 + 0x7938);
  FUN_1406fa324(&uStack_328,param_1 + 0x7970);
  uStack_318 = *(undefined8 *)(param_1 + 0x7980);
  uStack_310 = 0;
  uStack_30c = (undefined4)*(undefined8 *)(param_1 + 0x7988);
  uStack_308 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x7988) >> 0x20);
  uStack_300 = *(undefined8 *)(param_1 + 0x7990);
  lVar11 = *(longlong *)(param_1 + 0x3f70);
  if (*(char *)(lVar11 + 0xcb8) == '\x01') {
    uStack_2f8 = *(undefined4 *)(lVar11 + 0xcbc);
    cStack_2f4 = '\x01';
  }
  else if (cStack_2f4 == '\x01') {
    cStack_2f4 = '\0';
  }
  uStack_2f0 = *(undefined1 *)(lVar11 + 0xcc0);
  if (iStack_2b8 != 3) {
    FUN_1446efa72(&puStack_2c0,0,3,0x10);
    iStack_2b8 = 3;
  }
  puVar1 = puStack_2c0;
  *puStack_2c0 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  puStack_2c0[2] = lVar7;
  *puStack_2c0 = &PTR_FUN_14b95bba0;
  puStack_2c0[3] = 0;
  if (param_1 == 0) {
    *(undefined4 *)((longlong)puStack_2c0 + 0x1c) = 0;
    puStack_2c0[4] = &LAB_140ebee4e;
    *(undefined4 *)(puStack_2c0 + 5) = 0;
    FUN_14054d68c(&uStack_2b0,0x7998);
    uRam0000000000007923 = 0;
LAB_14111c9d8:
    uVar8 = 0;
    FUN_14111dba4(lVar4,0,&uStack_478);
    uVar6 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xc);
    *(uint *)(puStack_2c0 + 3) = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar2 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar2 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar2 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar2 = iVar9;
      }
    }
    *(int *)((longlong)puVar1 + 0x1c) = iVar2;
    puVar1[4] = &LAB_140ebee4e;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_14054d68c(&uStack_2b0,param_1 + 0x7998);
    *(undefined1 *)(param_1 + 0x7923) = 0;
    if (param_1 == 0) goto LAB_14111c9d8;
    uVar8 = *(uint *)(param_1 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar2 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar2 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar2 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar2 = iVar9;
      }
    }
    FUN_14111dba4(lVar4,CONCAT44(iVar2,uVar8),&uStack_478);
    uVar8 = *(uint *)(param_1 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar3 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar3 = uVar10;
      }
      uVar6 = (ulonglong)uVar3;
    }
  }
  FUN_14111cd7e(lVar4,(ulonglong)uVar8 | uVar6 << 0x20,0x3f800000,0);
  FUN_14111cc7e(&uStack_478);
LAB_14111c983:
  if ((uStack_38 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440ae47e FUN_1440ae47e body=345 status=ok
// SIG undefined FUN_1440ae47e(void)

void FUN_1440ae47e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_140350ab4(param_1 + 0x7c78);
  if ((((cVar2 != '\0') && (*(char *)(param_1 + 0x7e11) == '\x01')) &&
      (*(int *)(param_1 + 0x7ec4) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 0x7ec0), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) &&
         (((int)plVar3[2] == *(int *)(param_1 + 0x7ec4) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) &&
       (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)) {
      local_38 = 0;
      uStack_30 = 0;
      (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_38);
      if ((int)uStack_30 != 0) {
        FUN_140ed3f6c(&local_48,&local_38,&local_19);
        FUN_1417b5a8e(param_1 + 0x7950,&local_48);
        FUN_14499183d(local_48,local_40);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        FUN_140e74190(&local_48,&local_38,&local_19);
        FUN_1417b5a8e(param_1 + 0x7960,&local_48);
        FUN_14499183d(local_48,local_40);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440ae670 FUN_1440ae670 body=835 status=ok
// SIG undefined FUN_1440ae670(void)

undefined8 FUN_1440ae670(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*(longlong *)(param_1 + 0x3f70) != 0) && (*(longlong *)(param_1 + 0x32b8) != 0)) &&
      (lVar3 = FUN_14025708c(*(longlong *)(param_1 + 0x32b8),DAT_14c9abbf0), lVar3 != 0)) &&
     (*(char *)(lVar3 + 0x362) == '\x01')) {
    lVar3 = *(longlong *)(param_1 + 0x3f70);
    lVar5 = *(longlong *)(lVar3 + 0x1020);
    if (lVar5 == 0) {
      uVar7 = FUN_145702a16();
      lVar5 = FUN_14477b664(uVar7);
      *(longlong *)(lVar3 + 0x1020) = lVar5;
    }
    lVar9 = *(longlong *)(lVar3 + 0x1028);
    if (lVar9 == 0) {
      uVar7 = 0;
      if ((lVar5 == 0) || (*(longlong *)(lVar3 + 0x1018) == 0)) goto LAB_1440ae8ef;
      plVar4 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar2 == '\0')) {
        *(undefined8 *)(lVar3 + 0x1028) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar3 + 0x1018));
        *(longlong *)(lVar3 + 0x1028) = lVar9;
        if (lVar9 != 0) goto LAB_1440ae707;
      }
    }
    else {
LAB_1440ae707:
      local_120 = param_1 + 0x10e0;
      lVar9 = lVar9 + 0x18;
      lVar3 = 0;
      local_128 = lVar9;
      do {
        plVar4 = (longlong *)FUN_140963a30(lVar9 + lVar3 * 0x28);
        if (plVar4 != (longlong *)0x0) {
          lVar5 = FUN_140bb5692();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
              (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
               == lVar5 + 0x30)) && (lVar5 = plVar4[0x14], (longlong)(int)lVar5 != 0)) {
            lVar9 = plVar4[0x13];
            lVar8 = 0;
            do {
              lVar1 = *(longlong *)(lVar9 + lVar8);
              if (lVar1 != 0) {
                lVar6 = FUN_1414339a4();
                lVar1 = *(longlong *)(lVar1 + 0x10);
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                    lVar6 + 0x30)) goto LAB_1440ae925;
              }
              lVar8 = lVar8 + 0x10;
            } while ((longlong)(int)lVar5 * 0x10 != lVar8);
          }
          local_f8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          uStack_f0 = 0x8000000000;
          local_e8 = 0xffffffff;
          local_c0 = 0x100;
          local_be = 0;
          local_98 = 0;
          local_90 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_8c = 0xffffffff00000080;
          local_84 = 0;
          local_78 = 0;
          local_70 = 0;
          local_c8 = param_1;
          FUN_140725242(&local_b8,&local_118);
          local_68 = local_120;
          uStack_d0 = uStack_d0 & 0xffffffff00000000;
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_118);
          lVar5 = (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_c8);
          lVar8 = FUN_1414339a4();
          lVar9 = local_128;
          if (*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) {
            bVar10 = false;
          }
          else {
            bVar10 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30;
          }
          local_70 = 0;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_b8);
          if (bVar10) {
LAB_1440ae925:
            uVar7 = 1;
            goto LAB_1440ae8ef;
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 6);
    }
  }
  uVar7 = 0;
LAB_1440ae8ef:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1440ae9d6 FUN_1440ae9d6 body=470 status=ok
// SIG undefined FUN_1440ae9d6(void)

void FUN_1440ae9d6(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] != 0) goto LAB_1440aeab4;
    pcVar2 = *(code **)(*param_1 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
          return;
        }
        uVar1 = *(uint *)(param_1 + 0xeb6);
        if ((int)uVar1 < 0) {
          return;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return;
        }
        plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        if ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x75b4)) {
          return;
        }
        if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
          return;
        }
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar6;
        }
        else {
          lVar4 = 0;
        }
        lVar4 = lVar4 + 0x110;
      }
      else {
        lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
      }
      if (lVar4 == 0) {
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
    }
    else {
      lVar4 = (*pcVar2)(param_1);
    }
    if (lVar4 == 0) {
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x3b0);
  }
  else {
    lVar4 = (*pcVar2)(param_1);
  }
  if (lVar4 == 0) {
    return;
  }
LAB_1440aeab4:
  cVar3 = FUN_145735610(param_1);
  if ((cVar3 != '\0') || (cVar3 = FUN_145932e54(param_1 + 0x1076), cVar3 == '\0')) {
    if ((((param_1[0xd0a] != 0) && (lVar4 = *(longlong *)(param_1[0xd0a] + 0x4588), lVar4 != 0)) &&
        (*(char *)(lVar4 + 0x24) == '\x01')) &&
       (cVar3 = (**(code **)(param_1[0x769] + 0x48))(param_1 + 0x769), cVar3 != '\0')) {
      return;
    }
    if ((char)param_1[0x2f] == '\x03') {
      FUN_1447f69b6(param_1 + 0xa5e);
    }
                    /* WARNING: Could not recover jumptable at 0x0001440aeb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x765] + 0x38))(param_1 + 0x765);
    return;
  }
  if (param_1[0xd0a] != 0) {
    FUN_14662205c();
  }
  if ((char)param_1[0x2f] == '\x03') {
    return;
  }
  uVar5 = FUN_14477b072(param_1,DAT_14cba8090);
                    /* WARNING: Could not recover jumptable at 0x0001440aeb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1440aec5a FUN_1440aec5a body=199 status=ok
// SIG undefined FUN_1440aec5a(void)

void FUN_1440aec5a(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar1 = *(ulonglong *)(param_1 + -0x3bc8);
  plVar6 = (longlong *)(param_1 + -0x3bf0);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,plVar6,uVar1,0x69);
  }
  else {
    uVar7 = (uint)uVar1;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
        lVar4 = *(longlong *)(lVar2 + 0x18);
        if (*(longlong *)(lVar2 + 0x18) == 0) {
          lVar4 = lVar2 + 8;
        }
        *(uint *)(lVar4 + 0xc) = *(uint *)(lVar4 + 0xc) | 0x200;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001440aec98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x578))(plVar6);
  return;
}



// FUNCTION 1440aef2c FUN_1440aef2c body=1565 status=ok
// SIG undefined FUN_1440aef2c(void)

void FUN_1440aef2c(longlong *param_1,char param_2,char param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(char *)(param_1 + 0x332) = param_2;
  if (param_1[0x7ee] == 0) {
    pcVar2 = *(code **)(*param_1 + 0x5e8);
    if (pcVar2 == FUN_140972dde) {
      lVar4 = param_1[0x76];
      if (lVar4 != 0) goto LAB_1440af1a3;
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
                (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) &&
               ((int)uVar1 < DAT_14c9647dc)) &&
              ((plVar8 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x75b4))
               ))) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar8;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = lVar4 + 0x110;
            goto LAB_1440af189;
          }
        }
        else {
          lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_1440af189:
          if (lVar4 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x20);
            goto LAB_1440af192;
          }
        }
      }
      else {
        lVar4 = (*pcVar2)(param_1);
LAB_1440af192:
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x3b0);
          goto LAB_1440af19e;
        }
      }
    }
    else {
      lVar4 = (*pcVar2)(param_1);
LAB_1440af19e:
      if (lVar4 != 0) {
LAB_1440af1a3:
        if ((*(byte *)(lVar4 + 0x39a) & 8) == 0) goto LAB_1440af49c;
      }
    }
    if ((*(byte *)(param_1 + 0x332) & 1) == 0) goto LAB_1440af1bd;
LAB_1440aef68:
    lVar4 = FUN_140cf8aa6(param_1);
    if (lVar4 != 0) {
      FUN_146630cb8(lVar4);
    }
    uVar5 = (**(code **)(param_1[0x767] + 0x18))(param_1 + 0x767);
    FUN_140cbde20(uVar5,0);
    lVar4 = param_1[0xd0a];
    if (lVar4 != 0) {
      lVar7 = lVar4 + 0x11f8;
      if (*(longlong *)(lVar4 + 0x1208) != 0) {
        lVar7 = *(longlong *)(lVar4 + 0x1208);
      }
      if ((longlong)*(int *)(lVar4 + 0x1210) != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar7 + lVar10) == DAT_14cbd0a80) goto LAB_1440aefdc;
          lVar10 = lVar10 + 8;
        } while ((longlong)*(int *)(lVar4 + 0x1210) * 8 != lVar10);
      }
      FUN_1400bc96c(lVar4 + 0x11f0,&DAT_14cbd0a80);
LAB_1440aefdc:
      lVar7 = lVar4 + 0x4670;
      if (*(longlong *)(lVar4 + 0x4680) != 0) {
        lVar7 = *(longlong *)(lVar4 + 0x4680);
      }
      if ((longlong)*(int *)(lVar4 + 0x4688) != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar7 + lVar10) == DAT_14cbd0a80) goto LAB_1440af014;
          lVar10 = lVar10 + 8;
        } while ((longlong)*(int *)(lVar4 + 0x4688) * 8 != lVar10);
      }
      FUN_1400bc96c(lVar4 + 0x4668,&DAT_14cbd0a80);
LAB_1440af014:
      lVar7 = lVar4 + 0x1b78;
      if (*(longlong *)(lVar4 + 0x1b88) != 0) {
        lVar7 = *(longlong *)(lVar4 + 0x1b88);
      }
      if ((longlong)*(int *)(lVar4 + 0x1b90) != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar7 + lVar10) == DAT_14cbd0a80) goto LAB_1440af04c;
          lVar10 = lVar10 + 8;
        } while ((longlong)*(int *)(lVar4 + 0x1b90) * 8 != lVar10);
      }
      FUN_1400bc96c(lVar4 + 0x1b70,&DAT_14cbd0a80);
LAB_1440af04c:
      lVar7 = lVar4 + 0x1110;
      if (*(longlong *)(lVar4 + 0x1140) != 0) {
        lVar7 = *(longlong *)(lVar4 + 0x1140);
      }
      if ((longlong)*(int *)(lVar4 + 0x1148) != 0) {
        lVar10 = (longlong)*(int *)(lVar4 + 0x1148) * 0xc;
        do {
          if (*(longlong *)(lVar7 + 4) == DAT_14cbd0a80) {
            if (lVar7 != 0) goto LAB_1440af08a;
            break;
          }
          lVar7 = lVar7 + 0xc;
          lVar10 = lVar10 + -0xc;
        } while (lVar10 != 0);
      }
      FUN_140257a06(lVar4,&DAT_14cbd0a80,0);
LAB_1440af08a:
      local_30 = DAT_14cbd0a80;
      FUN_1400bc96c(lVar4 + 0x46e0);
    }
    local_40 = 0;
    local_48 = 0;
    FUN_140d78b8a(param_1 + 0xc1d,DAT_14cbd0a80,0xff,1);
    lVar4 = 0x9948;
  }
  else {
    if (param_2 != '\0') goto LAB_1440aef68;
LAB_1440af1bd:
    plVar8 = (longlong *)param_1[0xd0a];
    if (plVar8 != (longlong *)0x0) {
      plVar6 = plVar8 + 0x23f;
      if ((longlong *)plVar8[0x241] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar8[0x241];
      }
      if ((longlong)(int)plVar8[0x242] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)((longlong)plVar6 + lVar4) == DAT_14cbd0a80) {
            FUN_1400bc8c2(plVar8 + 0x23e,&DAT_14cbd0a80);
            break;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)plVar8[0x242] * 8 != lVar4);
      }
      plVar6 = plVar8 + 0x8ce;
      if ((longlong *)plVar8[0x8d0] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar8[0x8d0];
      }
      if ((longlong)(int)plVar8[0x8d1] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)((longlong)plVar6 + lVar4) == DAT_14cbd0a80) {
            FUN_1400bc8c2(plVar8 + 0x8cd,&DAT_14cbd0a80);
            break;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)plVar8[0x8d1] * 8 != lVar4);
      }
      plVar6 = plVar8 + 0x36f;
      if ((longlong *)plVar8[0x371] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar8[0x371];
      }
      if ((longlong)(int)plVar8[0x372] != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)((longlong)plVar6 + lVar4) == DAT_14cbd0a80) {
            FUN_1400bc8c2(plVar8 + 0x36e,&DAT_14cbd0a80);
            break;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)plVar8[0x372] * 8 != lVar4);
      }
      FUN_1409df526(plVar8,&DAT_14cbd0a80);
      local_30 = DAT_14cbd0a80;
      FUN_1400bc8c2(plVar8 + 0x8dc);
      if ((plVar8[0x39d] == 0) || (*(byte *)(plVar8[0x39d] + 0x178) < 2)) {
        cVar3 = (char)plVar8[0x3dc];
joined_r0x0001440af4c5:
        if (cVar3 != '\0') {
LAB_1440af4cb:
          (**(code **)(*plVar8 + 0xde0))(plVar8);
        }
      }
      else {
        plVar6 = (longlong *)plVar8[0x3d7];
        if (plVar6 != (longlong *)0x0) {
          if (*(code **)(*plVar6 + 0x40) != (code *)&LAB_1449cc0ea) {
            cVar3 = (**(code **)(*plVar6 + 0x40))();
            goto joined_r0x0001440af4c5;
          }
          if ((*(char *)((longlong)plVar6 + 0xb2) != '\0') ||
             ((*(char *)((longlong)plVar6 + 0x79) == '\0' &&
              (((int)plVar6[4] < 1 || ((char)plVar6[0xf] != '\x01')))))) goto LAB_1440af3ce;
          goto LAB_1440af4cb;
        }
      }
    }
LAB_1440af3ce:
    FUN_140bc1ec4(param_1 + 0xc1d,DAT_14cbd0a80,0xff,0);
    lVar4 = 0x9960;
  }
  FUN_1447f69b6(lVar4 + (longlong)param_1);
  uVar5 = (**(code **)(param_1[0x10c] + 0x10))(param_1 + 0x10c);
  puVar9 = &DAT_14cbd0a80;
  FUN_140a82c6c(uVar5,&DAT_14cbd0a80,(char)param_1[0x332],1);
  if ((char)param_1[0x332] == '\x01') {
    if (param_3 != '\0') {
LAB_1440af439:
      FUN_1405e47c6(param_1,CONCAT71((int7)((ulonglong)puVar9 >> 8),(char)param_1[0x332]) ^ 1);
    }
  }
  else if ((*(byte *)((longlong)param_1 + 0x65) & 1) == 0) goto LAB_1440af439;
  FUN_14030ec08(param_1);
  if ((char)param_1[0x2f] == '\x03') {
    FUN_1406966b6(param_1,&DAT_14cbd0a80,(char)param_1[0x332]);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
LAB_1440af49c:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440af5ce FUN_1440af5ce body=317 status=ok
// SIG undefined FUN_1440af5ce(void)

longlong FUN_1440af5ce(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + -0x38a0);
  if (lVar2 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464f5fc4;
      local_38 = &LAB_148c3dd26;
      local_40 = &LAB_1459673ba;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar2 = *(longlong *)(param_1 + -0x38a0);
      if (lVar2 == 0) goto LAB_1440af5f1;
    }
    lVar3 = 0;
    if ((DAT_14cbae3d8 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0))
    goto LAB_1440af5f3;
    if (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          == DAT_14cbae3d8 + 0x30) {
        lVar3 = lVar2;
      }
      goto LAB_1440af5f3;
    }
  }
LAB_1440af5f1:
  lVar3 = 0;
LAB_1440af5f3:
  lVar2 = lVar3 + 0xd28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1440af70c FUN_1440af70c body=70 status=ok
// SIG undefined FUN_1440af70c(void)

undefined4 FUN_1440af70c(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 0x3f70) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))(), cVar1 != '\0')) {
    return 0x3dcccccd;
  }
  return *(undefined4 *)(&DAT_14b95af90 + (ulonglong)((*(byte *)(param_1 + 0x60) & 0x10) == 0) * 4);
}



// FUNCTION 1440af752 FUN_1440af752 body=177 status=ok
// SIG undefined FUN_1440af752(void)

undefined8 FUN_1440af752(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x2e70);
  if (DAT_14cbc1dd8 == 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_20,DAT_14cbc1dd0,1);
    DAT_14cbc1dd8 = local_20;
  }
  cVar1 = FUN_14021d296(&local_28,&DAT_14cbc1dd8);
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)(param_1 + 0x88) + 0x10))(param_1 + 0x88);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440af804 FUN_1440af804 body=228 status=ok
// SIG undefined FUN_1440af804(void)

longlong FUN_1440af804(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba8288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141864c34;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464cee30;
    local_38 = &LAB_148bfac22;
    local_40 = &LAB_140f21842;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440af8ea FUN_1440af8ea body=261 status=ok
// SIG undefined FUN_1440af8ea(void)

longlong FUN_1440af8ea(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1459f1378();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1440af9f0 FUN_1440af9f0 body=449 status=ok
// SIG undefined FUN_1440af9f0(void)

undefined8 * FUN_1440af9f0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar1 = *(longlong *)(&DAT_00006850 + param_2), lVar1 != 0)) {
      *(undefined1 *)param_1 = *(undefined1 *)(lVar1 + 0x4388);
      lVar2 = *(longlong *)(lVar1 + 0x4390);
      param_1[1] = lVar2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      param_1[8] = *(undefined8 *)(lVar1 + 0x43c8);
      uVar3 = *(undefined4 *)(lVar1 + 0x4398);
      uVar4 = *(undefined4 *)(lVar1 + 0x439c);
      uVar5 = *(undefined4 *)(lVar1 + 0x43a0);
      uVar6 = *(undefined4 *)(lVar1 + 0x43a4);
      uVar7 = *(undefined4 *)(lVar1 + 0x43a8);
      uVar8 = *(undefined4 *)(lVar1 + 0x43ac);
      uVar9 = *(undefined4 *)(lVar1 + 0x43b0);
      uVar10 = *(undefined4 *)(lVar1 + 0x43b4);
      uVar11 = *(undefined4 *)(lVar1 + 0x43bc);
      uVar12 = *(undefined4 *)(lVar1 + 0x43c0);
      uVar13 = *(undefined4 *)(lVar1 + 0x43c4);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar1 + 0x43b8);
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar11;
      *(undefined4 *)(param_1 + 7) = uVar12;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar13;
      *(undefined4 *)(param_1 + 4) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
      *(undefined4 *)(param_1 + 5) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar10;
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 3) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar14 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[3] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[4] = uVar14;
  param_1[5] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = DAT_14c8464f0;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440afbb4 FUN_1440afbb4 body=680 status=ok
// SIG undefined FUN_1440afbb4(void)

void FUN_1440afbb4(longlong param_1,code *param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined8 local_b8 [5];
  char local_90;
  code *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_d0 = &local_88;
      local_88 = FUN_141864c34;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_1464cee30;
      local_d8 = &LAB_148bfac22;
      local_e0 = &LAB_140f21842;
      local_e8 = &DAT_149e063b2;
      local_f0 = 0;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      local_b8[0] = *param_4;
      FUN_1446dcdd4(&local_88);
      if (DAT_14cb85860 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)FUN_144837462(DAT_14cb85860,&local_88);
      }
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
      lVar1 = *(longlong *)(param_1 + 0x430);
      if (lVar1 != 0) {
        lVar3 = FUN_140993a2e();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (param_2 != (code *)0x0 && plVar2 != (longlong *)0x0)) {
          plVar4 = plVar2 + 0x19;
          if ((&DAT_00001100)[lVar1] == '\x01') {
            plVar4 = plVar2 + 7;
          }
          local_78 = (ulonglong)param_3 << 0x20;
          local_88 = param_2;
          (**(code **)(*plVar2 + 0x18))(plVar2,local_b8,param_2,param_1);
          local_80 = 0;
          if (local_90 != '\0') {
            local_80 = local_b8[0];
          }
          local_70 = *(undefined4 *)((longlong)plVar4 + 0xc);
          uStack_6c = FUN_141313966(plVar4,param_1);
          local_68 = (undefined4)plVar4[4];
          local_64 = (undefined4)plVar4[2];
          local_60 = *(undefined4 *)((longlong)plVar4 + 0x14);
          local_5c = (undefined4)plVar4[3];
          local_58 = *(undefined4 *)((longlong)plVar4 + 0x1c);
          FUN_1461449c8(lVar1,&local_88);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440afe5e FUN_1440afe5e body=509 status=ok
// SIG undefined FUN_1440afe5e(void)

void FUN_1440afe5e(longlong param_1,char param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      iVar2 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(&local_28,iVar2,*param_3,1);
      if (param_2 == '\0') {
        FUN_1400bc8c2(param_1 + 0x6f68,&local_28);
      }
      else {
        FUN_1400bc96c();
      }
      FUN_1440ac15a();
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (uVar1 < 0xffffffff00000000) {
        plVar6 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,0x3e);
      }
      else {
        uVar7 = (uint)uVar1;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
          puVar4 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar4 = DAT_14c998080;
          }
          if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
            lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
            lVar5 = *(longlong *)(lVar3 + 0x18);
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              lVar5 = lVar3 + 8;
            }
            *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x40000000;
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440b005c FUN_1440b005c body=222 status=ok
// SIG undefined FUN_1440b005c(void)

void FUN_1440b005c(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x7fe8) != '\x01')) {
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x48);
    }
    else {
      uVar6 = (uint)uVar1;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
          lVar4 = *(longlong *)(lVar2 + 0x18);
          if (*(longlong *)(lVar2 + 0x18) == 0) {
            lVar4 = lVar2 + 8;
          }
          *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x100;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x7fe8) = 1;
    FUN_1447f69b6(param_1 + 0x7fd0);
    return;
  }
  return;
}



// FUNCTION 1440b013a FUN_1440b013a body=1707 status=ok
// SIG undefined FUN_1440b013a(void)

void FUN_1440b013a(code *param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  ulonglong local_2c0;
  undefined2 *local_2b8;
  undefined1 *local_2b0;
  undefined ****local_2a8;
  code **local_2a0;
  undefined1 *local_298;
  code *local_290;
  longlong local_288;
  uint local_27c;
  undefined8 local_278;
  int local_270;
  int local_26c;
  longlong local_268;
  ulonglong uStack_260;
  code *local_250;
  longlong *local_248;
  longlong *local_240;
  undefined1 local_238 [16];
  undefined4 local_228 [50];
  undefined1 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined ***local_150;
  undefined4 local_148;
  longlong local_140;
  int local_138;
  undefined **local_78;
  undefined **local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (param_1 == (code *)0x0) goto LAB_1440b019b;
  if (DAT_14cba8288 == 0) {
    local_2a0 = &local_250;
    local_250 = FUN_141864c34;
    local_290 = FUN_14081d0ea;
    local_298 = &LAB_1464cee30;
    local_2a8 = (undefined ****)&LAB_148bfac22;
    local_2b0 = &LAB_140f21842;
    local_2b8 = &DAT_149e063b2;
    local_2c0 = 0;
    local_2c8 = CONCAT44(local_2c8._4_4_,0x10000004);
    local_2d0 = 0x10;
    local_2d8 = CONCAT44(local_2d8._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1440b019b;
  uVar10 = FUN_14119f41e();
  plVar11 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x288))(param_1,uVar10);
  if (plVar11 == (longlong *)0x0) {
LAB_1440b021c:
    local_288 = 0;
    plVar12 = (longlong *)0x0;
    bVar5 = 0;
  }
  else {
    uVar10 = FUN_14119f41e();
    plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
    if (plVar12 == (longlong *)0x0 || plVar11 == plVar12) goto LAB_1440b021c;
    local_288 = (**(code **)(*plVar12 + 0x10))(plVar12);
    bVar5 = 1;
  }
  uVar10 = FUN_14131a30e();
  plVar11 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x288))(param_1,uVar10);
  if (plVar11 == (longlong *)0x0) goto LAB_1440b019b;
  uVar10 = FUN_14131a30e();
  plVar13 = (longlong *)FUN_144718840(plVar11,uVar10);
  if ((plVar11 == plVar13) || (!(bool)(bVar5 & local_288 != 0 & plVar13 != (longlong *)0x0)))
  goto LAB_1440b019b;
  uVar10 = FUN_1447210f0(param_1);
  local_278 = FUN_140cbc0d8(uVar10);
  pcVar3 = *(code **)(*(longlong *)param_1 + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    lVar14 = *(longlong *)(param_1 + 0x3b0);
    if (lVar14 == 0) {
      pcVar3 = *(code **)(*(longlong *)param_1 + 0x5f8);
      if (pcVar3 == FUN_144784df4) {
        if (*(code **)(*(longlong *)(param_1 + 0x3c20) + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)(param_1 + 0x75b4) != 0) {
            uVar2 = *(uint *)(param_1 + 0x75b0);
            lVar14 = 0;
            if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b0349;
            plVar11 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar11 != (longlong *)0x0) &&
               (((int)plVar11[2] == *(int *)(param_1 + 0x75b4) &&
                ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
                lVar14 = *plVar11;
              }
              else {
                lVar14 = 0;
              }
              lVar14 = lVar14 + 0x110;
              goto LAB_1440b04d4;
            }
          }
        }
        else {
          lVar14 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x18))(param_1 + 0x3c20);
LAB_1440b04d4:
          if (lVar14 != 0) {
            lVar14 = *(longlong *)(lVar14 + 0x20);
            goto LAB_1440b04e1;
          }
        }
      }
      else {
        lVar14 = (*pcVar3)(param_1);
LAB_1440b04e1:
        if (lVar14 != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x3b0);
          goto LAB_1440b0349;
        }
      }
      lVar14 = 0;
    }
  }
  else {
    lVar14 = (*pcVar3)(param_1);
  }
LAB_1440b0349:
  local_27c = (uint)(lVar14 == 0);
  local_58 = 0;
  local_50 = 0x400000001;
  local_78 = &PTR_PTR_14c763990;
  local_148 = 1;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    local_50 = 0x400000002;
    local_70 = &PTR_PTR_14c763fe0;
    local_148 = 2;
  }
  local_268 = 0;
  uStack_260 = 0;
  local_150 = &local_78;
  uVar15 = 0;
  local_250 = (code *)((ulonglong)local_250 & 0xffffffffffffff00);
  local_228[0] = 0;
  FUN_1456bb102(&local_250,param_1);
  uVar8 = (**(code **)(*(longlong *)(param_1 + 0x10c0) + 0x18))(param_1 + 0x10c0);
  uVar2 = local_27c;
  local_2b0 = (undefined1 *)CONCAT44(local_2b0._4_4_,local_27c);
  local_2b8 = (undefined2 *)((ulonglong)local_2b8 & 0xffffffffffffff00);
  local_2c0 = local_2c0 & 0xffffffffffffff00;
  local_2d8 = local_278;
  local_2c8 = 0;
  local_2d0 = CONCAT31(local_2d0._1_3_,1);
  local_2a8 = &local_150;
  FUN_1403695ab(&local_268,param_2,uVar8,&local_250);
  FUN_1448173f8(local_228);
  if (((char)local_250 == '\x03') && (local_240 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_240 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_240 + 0x10))();
    }
  }
  lVar14 = local_268;
  if ((int)uStack_260 != 0) {
    local_250 = (code *)((ulonglong)local_250 & 0xffffffffffffff00);
    local_228[0] = 0;
    FUN_1456bb102(&local_250,param_1);
    FUN_140368c94(lVar14,&local_150,&local_250,uVar2);
    FUN_1448173f8(local_228);
    if (((char)local_250 == '\x03') && (local_240 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_240 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_240 + 0x10))();
      }
    }
    if (local_150 != (undefined ***)0x0) {
      if ((longlong)local_138 != 0) {
        lVar14 = 0;
        do {
          if (*(longlong *)(local_140 + lVar14) == 0) goto LAB_1440b06c1;
          lVar14 = lVar14 + 8;
        } while ((longlong)local_138 * 8 != lVar14);
      }
      if (((local_150[0xf] != (undefined **)0x0) || (local_150[0x10] != (undefined **)0x0)) ||
         (1 < *(uint *)(local_150 + 0x12))) {
        local_26c = -1;
        local_270 = -1;
        (**(code **)(*(longlong *)(param_1 + 0x3be8) + 0xa0))
                  (param_1 + 0x3be8,&local_250,&local_150);
        cVar7 = FUN_140ae5c1d(&local_250,&local_26c,&local_270);
        if (cVar7 != '\0') {
          local_250 = param_1;
          local_248 = plVar12;
          local_240 = plVar13;
          FUN_1406fd608(local_238,&local_150);
          local_158 = local_288;
          local_160 = param_3;
          local_15c = param_4;
          iVar9 = FUN_14042831e(param_1);
          iVar6 = local_270;
          if (local_270 < iVar9 || iVar9 < local_26c) {
            if (local_26c <= local_270) {
              iVar9 = local_26c;
              do {
                cVar7 = FUN_1440b07e6(&local_250,iVar9);
                if (cVar7 != '\0') break;
                bVar4 = iVar9 < iVar6;
                iVar9 = iVar9 + 1;
              } while (bVar4);
            }
          }
          else {
            FUN_1440b07e6(&local_250,iVar9);
          }
          FUN_140368b56(local_238);
        }
      }
    }
LAB_1440b06c1:
    FUN_140368b56(&local_150);
    uVar15 = uStack_260 & 0xffffffff;
  }
  FUN_14036924e(local_268,uVar15);
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1440b019b:
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440b07e6 FUN_1440b07e6 body=1177 status=ok
// SIG undefined FUN_1440b07e6(void)

undefined8 FUN_1440b07e6(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = param_1 + 3;
  cVar4 = FUN_14101fe5e(*param_1,plVar1,param_2);
  if ((cVar4 == '\0') ||
     (lVar5 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],plVar1),
     lVar5 == 0)) {
    uVar8 = 0;
    goto LAB_1440b0bc2;
  }
  if ((-1 < (int)param_2) &&
     (((((int)param_2 < *(int *)(*param_1 + 0x78f0) &&
        (lVar9 = (ulonglong)param_2 * 0x48 + *(longlong *)(*param_1 + 0x78e8), lVar9 != 0)) &&
       (*(longlong **)(lVar9 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar9 + 0x20) != 0)) &&
      (lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x28) + 8))(), lVar9 != 0)))) {
    lVar6 = FUN_1404281d6(*param_1);
    if (lVar6 == lVar9) {
      local_e8._0_1_ = 1;
      FUN_140d78d10(*param_1 + 0x60e8,0,0xff,1);
      lVar6 = *param_1;
      if (*(char *)(lVar6 + 0x178) == '\x03') {
        local_e8 = (ulonglong)local_e8._1_7_ << 8;
        FUN_141145750(lVar6,0,0,1);
      }
      else {
        local_e0 = (longlong *)CONCAT44(local_e0._4_4_,param_2);
        local_e8 = (ulonglong)local_e8._1_7_ << 8;
        FUN_1465cf5d6(lVar6,0,0,1);
      }
    }
    if (((char)param_1[0x1e] == '\x01') &&
       (lVar6 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],lVar9 + 0x3f0),
       lVar6 != 0)) {
      lVar2 = param_1[0x1f];
      lVar7 = (**(code **)(*(longlong *)param_1[2] + 8))();
      local_58 = lVar7;
      if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar7 != 0) goto LAB_1440b0946;
        local_50 = 0;
      }
      else {
        FUN_1456cec3c(lVar7);
LAB_1440b0946:
        uVar8 = FUN_14131a30e();
        local_50 = FUN_144718840(lVar7,uVar8);
      }
      lVar7 = (**(code **)(*(longlong *)param_1[1] + 8))();
      local_68 = lVar7;
      if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar7 != 0) goto LAB_1440b0995;
        local_60 = 0;
      }
      else {
        FUN_1456cec3c(lVar7);
LAB_1440b0995:
        uVar8 = FUN_14119f41e();
        local_60 = FUN_144718840(lVar7,uVar8);
      }
      lVar7 = (longlong)*(int *)(*param_1 + 0x78f0);
      local_6c = 0xffffffff;
      if (0 < lVar7) {
        lVar3 = *(longlong *)(*param_1 + 0x78e8);
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar3 + 0x20 + lVar10) == lVar9) {
            local_6c = *(undefined4 *)(lVar3 + 0xc + lVar10);
            break;
          }
          lVar10 = lVar10 + 0x48;
        } while (lVar7 * 0x48 != lVar10);
      }
      local_e0 = &local_58;
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,1);
      local_e8 = local_e8 & 0xffffffffffffff00;
      FUN_1416a1924(lVar2,&local_6c,lVar6 + 0xb8,&local_68);
    }
  }
  local_6c = 0xffffffff;
  lVar9 = param_1[0x1f];
  lVar6 = (**(code **)(*(longlong *)param_1[2] + 8))();
  local_80 = lVar6;
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar6 != 0) goto LAB_1440b0a68;
    local_78 = 0;
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_1440b0a68:
    uVar8 = FUN_14131a30e();
    local_78 = FUN_144718840(lVar6,uVar8);
  }
  lVar6 = (**(code **)(*(longlong *)param_1[1] + 8))();
  local_90 = lVar6;
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar6 != 0) goto LAB_1440b0aad;
    local_88 = 0;
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_1440b0aad:
    uVar8 = FUN_14119f41e();
    local_88 = FUN_144718840(lVar6,uVar8);
  }
  local_e0 = &local_90;
  local_d0 = &local_6c;
  local_d8 = &local_80;
  local_c0 = 0;
  local_c8 = 0;
  local_e8 = lVar5 + 0xb8U;
  FUN_143db6b26(lVar9,plVar1,0,0);
  lVar9 = param_1[0x1f];
  lVar6 = (**(code **)(*(longlong *)param_1[1] + 8))();
  local_a0 = lVar6;
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar6 != 0) goto LAB_1440b0b43;
    local_98 = 0;
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_1440b0b43:
    uVar8 = FUN_14119f41e();
    local_98 = FUN_144718840(lVar6,uVar8);
  }
  lVar6 = (**(code **)(*(longlong *)param_1[2] + 8))();
  local_b0 = lVar6;
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar6 != 0) goto LAB_1440b0b85;
    local_a8 = 0;
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_1440b0b85:
    uVar8 = FUN_14131a30e();
    local_a8 = FUN_144718840(lVar6,uVar8);
  }
  local_e0 = (longlong *)CONCAT44(local_e0._4_4_,param_2);
  local_e8 = lVar5 + 0xb8U;
  FUN_143db6682(lVar9,&local_6c,&local_b0,&local_a0);
  uVar8 = 1;
LAB_1440b0bc2:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1440b0c80 FUN_1440b0c80 body=1376 status=ok
// SIG undefined FUN_1440b0c80(void)

void FUN_1440b0c80(longlong *param_1,uint param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 == (longlong *)0x0) goto LAB_1440b0cdd;
  if (DAT_14cba8288 == 0) {
    local_b0 = &local_58;
    local_58 = FUN_141864c34;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1464cee30;
    local_b8 = &LAB_148bfac22;
    local_c0 = &LAB_140f21842;
    local_c8 = L"Game";
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = (longlong *)CONCAT44(local_e0._4_4_,0x10);
    local_e8 = CONCAT44(local_e8._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
      != DAT_14cba8288 + 0x30)) goto LAB_1440b0cdd;
  uVar1 = FUN_14119f41e();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
  if (plVar2 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar1 = FUN_14119f41e();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    plVar10 = (longlong *)0x0;
    if (plVar2 != plVar3) {
      plVar10 = plVar3;
    }
  }
  uVar1 = FUN_14131a30e();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar1 = FUN_14131a30e();
    plVar4 = (longlong *)FUN_144718840(plVar2,uVar1);
    plVar3 = (longlong *)0x0;
    if (plVar2 != plVar4) {
      plVar3 = plVar4;
    }
  }
  if (((((((int)param_2 < 0) || (plVar3 == (longlong *)0x0)) || (plVar10 == (longlong *)0x0)) ||
       (((*(uint *)(param_1 + 1) & 0x40000000) != 0 || ((int)param_1[0xf1e] <= (int)param_2)))) ||
      ((lVar5 = (ulonglong)param_2 * 0x48 + param_1[0xf1d], lVar5 == 0 ||
       ((*(longlong **)(lVar5 + 0x28) == (longlong *)0x0 || *(longlong *)(lVar5 + 0x20) == 0 ||
        (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))(), lVar5 == 0)))))) ||
     ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) goto LAB_1440b0cdd;
  lVar6 = (**(code **)(*plVar10 + 0x40))(plVar10,lVar5 + 0x3f0);
  if (lVar6 == 0) goto LAB_1440b0cdd;
  local_49 = 0;
  lVar7 = FUN_141893240(lVar6,lVar5 + 0x3f0,0);
  if (lVar7 == 0) goto LAB_1440b0cdd;
  if (DAT_14cb939a8 == 0) {
    local_b0 = &local_58;
    local_58 = FUN_140940982;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_146522c26;
    local_b8 = &LAB_148a0db91;
    local_c0 = &LAB_146572ba7;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = (longlong *)CONCAT44(local_e0._4_4_,8);
    local_e8 = CONCAT44(local_e8._4_4_,0xdd8);
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) &&
     (*(char *)(lVar5 + 0xcf8) == '\x01')) {
    local_e8 = CONCAT71(local_e8._1_7_,1);
    FUN_140d78d10(param_1 + 0xc1d,*(undefined1 *)(lVar5 + 0xd44),0xff,1);
  }
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10);
  if (lVar8 == 0) goto LAB_1440b0cdd;
  if (param_3 == '\0') {
    lVar7 = (**(code **)(*plVar10 + 8))(plVar10);
    local_88 = lVar7;
    if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar7 != 0) goto LAB_1440b0f36;
      local_80 = 0;
    }
    else {
      FUN_1456cec3c(lVar7);
LAB_1440b0f36:
      uVar1 = FUN_14119f41e();
      local_80 = FUN_144718840(lVar7,uVar1);
    }
    lVar7 = (**(code **)(*plVar3 + 8))(plVar3);
    local_98 = lVar7;
    if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar7 != 0) goto LAB_1440b0fc3;
      local_90 = 0;
    }
    else {
      FUN_1456cec3c(lVar7);
LAB_1440b0fc3:
      uVar1 = FUN_14131a30e();
      local_90 = FUN_144718840(lVar7,uVar1);
    }
    local_e8 = lVar6 + 0xb8U;
    FUN_143db6904(lVar8,param_2,&local_98,&local_88);
  }
  else {
    lVar9 = (**(code **)(*plVar3 + 8))(plVar3);
    local_68 = lVar9;
    if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar9 != 0) goto LAB_1440b0ef8;
      local_60 = 0;
    }
    else {
      FUN_1456cec3c(lVar9);
LAB_1440b0ef8:
      uVar1 = FUN_14131a30e();
      local_60 = FUN_144718840(lVar9,uVar1);
    }
    lVar9 = (**(code **)(*plVar10 + 8))(plVar10);
    local_78 = lVar9;
    if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar9 != 0) goto LAB_1440b0f7e;
      local_70 = 0;
    }
    else {
      FUN_1456cec3c(lVar9);
LAB_1440b0f7e:
      uVar1 = FUN_14119f41e();
      local_70 = FUN_144718840(lVar9,uVar1);
    }
    local_58 = (code *)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar7 + 0xf8));
    local_e0 = &local_68;
    local_d8 = 0;
    local_e8 = local_e8 & 0xffffffffffffff00;
    FUN_1416a1924(lVar8,&local_58,lVar6 + 0xb8U);
  }
  FUN_140aeefbc(lVar5,0,1);
LAB_1440b0cdd:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1440b11e1 FUN_1440b11e1 body=91 status=ok
// SIG undefined FUN_1440b11e1(void)

void FUN_1440b11e1(void)

{
  if (DAT_14cbc2048 != 0) {
    if (DAT_14cbc2040 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbc2040)(DAT_14cbc2040,0);
    FUN_1446efa72(&DAT_14cbc2040,0,0,0x10);
    DAT_14cbc2048 = 0;
  }
  if (DAT_14cbc2040 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1440b123c FUN_1440b123c body=31 status=ok
// SIG undefined FUN_1440b123c(void)

undefined8 FUN_1440b123c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b1268 FUN_1440b1268 body=31 status=ok
// SIG undefined FUN_1440b1268(void)

undefined8 FUN_1440b1268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b1294 FUN_1440b1294 body=31 status=ok
// SIG undefined FUN_1440b1294(void)

undefined8 FUN_1440b1294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b12bc FUN_1440b12bc body=31 status=ok
// SIG undefined FUN_1440b12bc(void)

undefined8 FUN_1440b12bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b132a FUN_1440b132a body=31 status=ok
// SIG undefined FUN_1440b132a(void)

undefined8 FUN_1440b132a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b1438 FUN_1440b1438 body=31 status=ok
// SIG undefined FUN_1440b1438(void)

undefined8 FUN_1440b1438(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b14f2 FUN_1440b14f2 body=31 status=ok
// SIG undefined FUN_1440b14f2(void)

undefined8 FUN_1440b14f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b1512 FUN_1440b1512 body=29 status=ok
// SIG undefined FUN_1440b1512(void)

undefined8 FUN_1440b1512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b16ae FUN_1440b16ae body=93 status=ok
// SIG undefined FUN_1440b16ae(void)

void FUN_1440b16ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b170c FUN_1440b170c body=93 status=ok
// SIG undefined FUN_1440b170c(void)

void FUN_1440b170c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b176a FUN_1440b176a body=126 status=ok
// SIG undefined FUN_1440b176a(void)

void FUN_1440b176a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bc10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440b17d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1440b17fa FUN_1440b17fa body=271 status=ok
// SIG undefined FUN_1440b17fa(void)

undefined8 FUN_1440b17fa(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1440b1903;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1440b1903;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1440b1903:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1440b18b7;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x4f48);
      uVar6 = 1;
      goto LAB_1440b18b7;
    }
  }
  uVar6 = 0;
LAB_1440b18b7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440b190a FUN_1440b190a body=29 status=ok
// SIG undefined FUN_1440b190a(void)

undefined8 FUN_1440b190a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440b1aa6 FUN_1440b1aa6 body=93 status=ok
// SIG undefined FUN_1440b1aa6(void)

void FUN_1440b1aa6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bc80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1440b1b04 FUN_1440b1b04 body=93 status=ok
// SIG undefined FUN_1440b1b04(void)

void FUN_1440b1b04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bc80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


