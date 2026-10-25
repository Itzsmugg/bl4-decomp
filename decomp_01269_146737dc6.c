// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146737dc6 FUN_146737dc6 body=29 status=ok
// SIG undefined FUN_146737dc6(void)

undefined8 FUN_146737dc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737de4 FUN_146737de4 body=29 status=ok
// SIG undefined FUN_146737de4(void)

undefined8 FUN_146737de4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737e02 FUN_146737e02 body=29 status=ok
// SIG undefined FUN_146737e02(void)

undefined8 FUN_146737e02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737e20 FUN_146737e20 body=29 status=ok
// SIG undefined FUN_146737e20(void)

undefined8 FUN_146737e20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737e3e FUN_146737e3e body=29 status=ok
// SIG undefined FUN_146737e3e(void)

undefined8 FUN_146737e3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737e5c FUN_146737e5c body=29 status=ok
// SIG undefined FUN_146737e5c(void)

undefined8 FUN_146737e5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737e7a FUN_146737e7a body=29 status=ok
// SIG undefined FUN_146737e7a(void)

undefined8 FUN_146737e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737e98 FUN_146737e98 body=29 status=ok
// SIG undefined FUN_146737e98(void)

undefined8 FUN_146737e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737eb6 FUN_146737eb6 body=29 status=ok
// SIG undefined FUN_146737eb6(void)

undefined8 FUN_146737eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146737ed4 FUN_146737ed4 body=136 status=ok
// SIG undefined FUN_146737ed4(void)

code * FUN_146737ed4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClothPositionsAndNormalsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ce55ba;
}



// FUNCTION 146737f5c FUN_146737f5c body=136 status=ok
// SIG undefined FUN_146737f5c(void)

code * FUN_146737f5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClothBlendWeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ce5530;
}



// FUNCTION 146737fe4 FUN_146737fe4 body=136 status=ok
// SIG undefined FUN_146737fe4(void)

code * FUN_146737fe4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderDataEdgeToTwinEdgeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494859f6;
}



// FUNCTION 14673806c FUN_14673806c body=136 status=ok
// SIG undefined FUN_14673806c(void)

code * FUN_14673806c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexToEdgeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149485b94;
}



// FUNCTION 1467380f4 FUN_1467380f4 body=43 status=ok
// SIG undefined FUN_1467380f4(void)

void FUN_1467380f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcfe930;
  puVar1[5] = 0;
  return;
}



// FUNCTION 14673811f FUN_14673811f body=47 status=ok
// SIG undefined FUN_14673811f(void)

longlong FUN_14673811f(void)

{
  if (DAT_14cc1c120 == 0) {
    FUN_14073dd9a(&DAT_14cc1c120,&PTR_LAB_14bcfe8e8);
  }
  return DAT_14cc1c120;
}



// FUNCTION 14673814e FUN_14673814e body=43 status=ok
// SIG undefined FUN_14673814e(void)

void FUN_14673814e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcfed60;
  puVar1[5] = 0;
  return;
}



// FUNCTION 146738179 FUN_146738179 body=47 status=ok
// SIG undefined FUN_146738179(void)

longlong FUN_146738179(void)

{
  if (DAT_14cc1c138 == 0) {
    FUN_14073dd9a(&DAT_14cc1c138,&PTR_LAB_14bcfed18);
  }
  return DAT_14cc1c138;
}



// FUNCTION 1467381a8 FUN_1467381a8 body=35 status=ok
// SIG undefined FUN_1467381a8(void)

void FUN_1467381a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcff210;
  return;
}



// FUNCTION 1467381cb FUN_1467381cb body=47 status=ok
// SIG undefined FUN_1467381cb(void)

longlong FUN_1467381cb(void)

{
  if (DAT_14cc1c150 == 0) {
    FUN_14073dd9a(&DAT_14cc1c150,&PTR_LAB_14bcff1c8);
  }
  return DAT_14cc1c150;
}



// FUNCTION 1467381fa FUN_1467381fa body=43 status=ok
// SIG undefined FUN_1467381fa(void)

void FUN_1467381fa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcff680;
  puVar1[5] = 0;
  return;
}



// FUNCTION 146738225 FUN_146738225 body=47 status=ok
// SIG undefined FUN_146738225(void)

longlong FUN_146738225(void)

{
  if (DAT_14cc1c168 == 0) {
    FUN_14073dd9a(&DAT_14cc1c168,&PTR_LAB_14bcff638);
  }
  return DAT_14cc1c168;
}



// FUNCTION 146738254 FUN_146738254 body=103 status=ok
// SIG undefined FUN_146738254(void)

void FUN_146738254(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"ENABLE_DEFORMER_MORPHTARGET");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467382bc FUN_1467382bc body=47 status=ok
// SIG undefined FUN_1467382bc(void)

longlong FUN_1467382bc(void)

{
  if (DAT_14cc1c178 == 0) {
    FUN_1409ce572(&DAT_14cc1c178,&PTR_FUN_14bcffb80);
  }
  return DAT_14cc1c178;
}



// FUNCTION 1467382eb FUN_1467382eb body=66 status=ok
// SIG undefined FUN_1467382eb(void)

void FUN_1467382eb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcffd90;
  puVar1[5] = 0;
  FUN_140e6507e(puVar1 + 6);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 14673832d FUN_14673832d body=49 status=ok
// SIG undefined FUN_14673832d(void)

longlong FUN_14673832d(void)

{
  if (DAT_14cc1c750 == 0) {
    FUN_14086a14e(&DAT_14cc1c750,&PTR_FUN_14bd0fab8);
  }
  return DAT_14cc1c750;
}



// FUNCTION 14673835e FUN_14673835e body=49 status=ok
// SIG undefined FUN_14673835e(void)

longlong FUN_14673835e(void)

{
  if (DAT_14cc1c198 == 0) {
    FUN_14073dd9a(&DAT_14cc1c198,&PTR_LAB_14bcffd48);
  }
  return DAT_14cc1c198;
}



// FUNCTION 14673838f FUN_14673838f body=83 status=ok
// SIG undefined FUN_14673838f(void)

void FUN_14673838f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcffd90;
  puVar1[5] = 0;
  FUN_140e6507e(puVar1 + 6);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *puVar1 = &PTR_FUN_14bd00230;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  return;
}



// FUNCTION 1467383e2 FUN_1467383e2 body=47 status=ok
// SIG undefined FUN_1467383e2(void)

longlong FUN_1467383e2(void)

{
  if (DAT_14cc1c1b0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c1b0,&PTR_LAB_14bd001e8);
  }
  return DAT_14cc1c1b0;
}



// FUNCTION 146738411 FUN_146738411 body=83 status=ok
// SIG undefined FUN_146738411(void)

void FUN_146738411(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcffd90;
  puVar1[5] = 0;
  FUN_140e6507e(puVar1 + 6);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *puVar1 = &PTR_FUN_14bd006d0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  return;
}



// FUNCTION 146738464 FUN_146738464 body=47 status=ok
// SIG undefined FUN_146738464(void)

longlong FUN_146738464(void)

{
  if (DAT_14cc1c1c8 == 0) {
    FUN_14073dd9a(&DAT_14cc1c1c8,&PTR_LAB_14bd00688);
  }
  return DAT_14cc1c1c8;
}



// FUNCTION 146738493 FUN_146738493 body=83 status=ok
// SIG undefined FUN_146738493(void)

void FUN_146738493(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcffd90;
  puVar1[5] = 0;
  FUN_140e6507e(puVar1 + 6);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *puVar1 = &PTR_FUN_14bd00b50;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 1467384eb FUN_1467384eb body=47 status=ok
// SIG undefined FUN_1467384eb(void)

longlong FUN_1467384eb(void)

{
  if (DAT_14cc1c1e0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c1e0,&PTR_LAB_14bd00b08);
  }
  return DAT_14cc1c1e0;
}



// FUNCTION 14673851a FUN_14673851a body=49 status=ok
// SIG undefined FUN_14673851a(void)

longlong FUN_14673851a(void)

{
  if (DAT_14cc1c1f8 == 0) {
    FUN_14073dd9a(&DAT_14cc1c1f8,&PTR_LAB_14bd00f38);
  }
  return DAT_14cc1c1f8;
}



// FUNCTION 14673854b FUN_14673854b body=42 status=ok
// SIG undefined FUN_14673854b(void)

void FUN_14673854b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f379c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd012e0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  return;
}



// FUNCTION 146738575 FUN_146738575 body=47 status=ok
// SIG undefined FUN_146738575(void)

longlong FUN_146738575(void)

{
  if (DAT_14cc1c210 == 0) {
    FUN_14073dd9a(&DAT_14cc1c210,&PTR_LAB_14bd01298);
  }
  return DAT_14cc1c210;
}



// FUNCTION 1467385a4 FUN_1467385a4 body=77 status=ok
// SIG undefined FUN_1467385a4(void)

void FUN_1467385a4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f379c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd01660;
  puVar1[0x10] = &PTR_FUN_14bd01910;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 1467385f1 FUN_1467385f1 body=47 status=ok
// SIG undefined FUN_1467385f1(void)

longlong FUN_1467385f1(void)

{
  if (DAT_14cc1c228 == 0) {
    FUN_14073dd9a(&DAT_14cc1c228,&PTR_LAB_14bd01618);
  }
  return DAT_14cc1c228;
}



// FUNCTION 146738620 FUN_146738620 body=70 status=ok
// SIG undefined FUN_146738620(void)

void FUN_146738620(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f379c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd019f0;
  puVar1[0x10] = &PTR_FUN_14bd01ca0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 146738666 FUN_146738666 body=47 status=ok
// SIG undefined FUN_146738666(void)

longlong FUN_146738666(void)

{
  if (DAT_14cc1c240 == 0) {
    FUN_14073dd9a(&DAT_14cc1c240,&PTR_LAB_14bd019a8);
  }
  return DAT_14cc1c240;
}



// FUNCTION 146738695 FUN_146738695 body=35 status=ok
// SIG undefined FUN_146738695(void)

void FUN_146738695(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd021f0;
  return;
}



// FUNCTION 1467386b8 FUN_1467386b8 body=47 status=ok
// SIG undefined FUN_1467386b8(void)

longlong FUN_1467386b8(void)

{
  if (DAT_14cc1c258 == 0) {
    FUN_14073dd9a(&DAT_14cc1c258,&PTR_LAB_14bd021a8);
  }
  return DAT_14cc1c258;
}



// FUNCTION 1467386e7 FUN_1467386e7 body=43 status=ok
// SIG undefined FUN_1467386e7(void)

void FUN_1467386e7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd02660;
  puVar1[5] = 0;
  return;
}



// FUNCTION 146738712 FUN_146738712 body=47 status=ok
// SIG undefined FUN_146738712(void)

longlong FUN_146738712(void)

{
  if (DAT_14cc1c270 == 0) {
    FUN_14073dd9a(&DAT_14cc1c270,&PTR_LAB_14bd02618);
  }
  return DAT_14cc1c270;
}



// FUNCTION 146738741 FUN_146738741 body=35 status=ok
// SIG undefined FUN_146738741(void)

void FUN_146738741(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd02b70;
  return;
}



// FUNCTION 146738764 FUN_146738764 body=47 status=ok
// SIG undefined FUN_146738764(void)

longlong FUN_146738764(void)

{
  if (DAT_14cc1c288 == 0) {
    FUN_14073dd9a(&DAT_14cc1c288,&PTR_LAB_14bd02b28);
  }
  return DAT_14cc1c288;
}



// FUNCTION 146738793 FUN_146738793 body=43 status=ok
// SIG undefined FUN_146738793(void)

void FUN_146738793(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd02fe0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1467387be FUN_1467387be body=47 status=ok
// SIG undefined FUN_1467387be(void)

longlong FUN_1467387be(void)

{
  if (DAT_14cc1c2a0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c2a0,&PTR_LAB_14bd02f98);
  }
  return DAT_14cc1c2a0;
}



// FUNCTION 1467387ed FUN_1467387ed body=35 status=ok
// SIG undefined FUN_1467387ed(void)

void FUN_1467387ed(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd03450;
  return;
}



// FUNCTION 146738810 FUN_146738810 body=47 status=ok
// SIG undefined FUN_146738810(void)

longlong FUN_146738810(void)

{
  if (DAT_14cc1c2b8 == 0) {
    FUN_14073dd9a(&DAT_14cc1c2b8,&PTR_LAB_14bd03408);
  }
  return DAT_14cc1c2b8;
}



// FUNCTION 14673883f FUN_14673883f body=43 status=ok
// SIG undefined FUN_14673883f(void)

void FUN_14673883f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd038c0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 14673886a FUN_14673886a body=47 status=ok
// SIG undefined FUN_14673886a(void)

longlong FUN_14673886a(void)

{
  if (DAT_14cc1c2d0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c2d0,&PTR_LAB_14bd03878);
  }
  return DAT_14cc1c2d0;
}



// FUNCTION 146738899 FUN_146738899 body=47 status=ok
// SIG undefined FUN_146738899(void)

longlong FUN_146738899(void)

{
  if (DAT_14cc1c2e8 == 0) {
    FUN_1409ce572(&DAT_14cc1c2e8,&PTR_FUN_14bd03e10);
  }
  return DAT_14cc1c2e8;
}



// FUNCTION 1467388c8 FUN_1467388c8 body=50 status=ok
// SIG undefined FUN_1467388c8(void)

void FUN_1467388c8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd03fa0;
  puVar1[5] = &PTR_FUN_14bd04330;
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



// FUNCTION 1467388fa FUN_1467388fa body=47 status=ok
// SIG undefined FUN_1467388fa(void)

longlong FUN_1467388fa(void)

{
  if (DAT_14cc1c308 == 0) {
    FUN_14073dd9a(&DAT_14cc1c308,&PTR_LAB_14bd03f58);
  }
  return DAT_14cc1c308;
}



// FUNCTION 146738929 FUN_146738929 body=47 status=ok
// SIG undefined FUN_146738929(void)

void FUN_146738929(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd044d0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



// FUNCTION 146738958 FUN_146738958 body=47 status=ok
// SIG undefined FUN_146738958(void)

longlong FUN_146738958(void)

{
  if (DAT_14cc1c320 == 0) {
    FUN_14073dd9a(&DAT_14cc1c320,&PTR_LAB_14bd04488);
  }
  return DAT_14cc1c320;
}



// FUNCTION 146738987 FUN_146738987 body=35 status=ok
// SIG undefined FUN_146738987(void)

void FUN_146738987(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd049d0;
  return;
}



// FUNCTION 1467389aa FUN_1467389aa body=47 status=ok
// SIG undefined FUN_1467389aa(void)

longlong FUN_1467389aa(void)

{
  if (DAT_14cc1c340 == 0) {
    FUN_14073dd9a(&DAT_14cc1c340,&PTR_LAB_14bd04988);
  }
  return DAT_14cc1c340;
}



// FUNCTION 1467389d9 FUN_1467389d9 body=68 status=ok
// SIG undefined FUN_1467389d9(void)

void FUN_1467389d9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd04ea0;
  puVar1[5] = &PTR_FUN_14bd05150;
  puVar1[9] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



// FUNCTION 146738a1d FUN_146738a1d body=47 status=ok
// SIG undefined FUN_146738a1d(void)

longlong FUN_146738a1d(void)

{
  if (DAT_14cc1c358 == 0) {
    FUN_14073dd9a(&DAT_14cc1c358,&PTR_LAB_14bd04e58);
  }
  return DAT_14cc1c358;
}



// FUNCTION 146738a4c FUN_146738a4c body=46 status=ok
// SIG undefined FUN_146738a4c(void)

void FUN_146738a4c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd05620;
  puVar1[5] = &PTR_FUN_14bd059b0;
  return;
}



// FUNCTION 146738a7a FUN_146738a7a body=47 status=ok
// SIG undefined FUN_146738a7a(void)

longlong FUN_146738a7a(void)

{
  if (DAT_14cc1c390 == 0) {
    FUN_14073dd9a(&DAT_14cc1c390,&PTR_LAB_14bd055d8);
  }
  return DAT_14cc1c390;
}



// FUNCTION 146738aa9 FUN_146738aa9 body=49 status=ok
// SIG undefined FUN_146738aa9(void)

void FUN_146738aa9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ab700(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd05ac0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 146738ada FUN_146738ada body=47 status=ok
// SIG undefined FUN_146738ada(void)

longlong FUN_146738ada(void)

{
  if (DAT_14cc1c3a8 == 0) {
    FUN_14073dd9a(&DAT_14cc1c3a8,&PTR_LAB_14bd05a78);
  }
  return DAT_14cc1c3a8;
}



// FUNCTION 146738b09 FUN_146738b09 body=105 status=ok
// SIG undefined FUN_146738b09(void)

void FUN_146738b09(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *puVar1 = &PTR_FUN_14bd06180;
  puVar1[0x21] = &PTR_FUN_14bd06490;
  puVar1[0x22] = &PTR_FUN_14bd064c0;
  puVar1[0x23] = &PTR_FUN_14bd064e0;
  puVar1[0x24] = &PTR_FUN_14bd06500;
  *(undefined1 *)((longlong)puVar1 + 0xb1) = 1;
  return;
}



// FUNCTION 146738b77 FUN_146738b77 body=47 status=ok
// SIG undefined FUN_146738b77(void)

longlong FUN_146738b77(void)

{
  if (DAT_14cc1c508 == 0) {
    FUN_14073dd9a(&DAT_14cc1c508,&PTR_LAB_14bd0a0a8);
  }
  return DAT_14cc1c508;
}



// FUNCTION 146738ba6 FUN_146738ba6 body=47 status=ok
// SIG undefined FUN_146738ba6(void)

longlong FUN_146738ba6(void)

{
  if (DAT_14cc1c3c8 == 0) {
    FUN_14073dd9a(&DAT_14cc1c3c8,&PTR_LAB_14bd06138);
  }
  return DAT_14cc1c3c8;
}



// FUNCTION 146738bd6 FUN_146738bd6 body=55 status=ok
// SIG undefined FUN_146738bd6(void)

void FUN_146738bd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c3e0 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c3e0 =
         FUN_140002ddd(FUN_146738c0d,uVar1,L"OptimusNode_ComponentSource_DuplicationInfo");
  }
  return;
}



// FUNCTION 146738c0d FUN_146738c0d body=47 status=ok
// SIG undefined FUN_146738c0d(void)

longlong FUN_146738c0d(void)

{
  if (DAT_14cc1c3d8 == 0) {
    FUN_14086a14e(&DAT_14cc1c3d8,&PTR_FUN_14bd06660);
  }
  return DAT_14cc1c3d8;
}



// FUNCTION 146738c42 FUN_146738c42 body=48 status=ok
// SIG undefined FUN_146738c42(void)

void FUN_146738c42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bd1ae00;
  return;
}



// FUNCTION 146738c77 FUN_146738c77 body=81 status=ok
// SIG undefined FUN_146738c77(void)

void FUN_146738c77(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd06800;
  puVar1[0x21] = &PTR_FUN_14bd06b00;
  puVar1[0x22] = &PTR_FUN_14bd06b18;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  return;
}



// FUNCTION 146738cc8 FUN_146738cc8 body=49 status=ok
// SIG undefined FUN_146738cc8(void)

longlong FUN_146738cc8(void)

{
  if (DAT_14cc1cce8 == 0) {
    FUN_14073dd9a(&DAT_14cc1cce8,&PTR_LAB_14bd171f0);
  }
  return DAT_14cc1cce8;
}



// FUNCTION 146738cf9 FUN_146738cf9 body=47 status=ok
// SIG undefined FUN_146738cf9(void)

longlong FUN_146738cf9(void)

{
  if (DAT_14cc1c3f8 == 0) {
    FUN_14073dd9a(&DAT_14cc1c3f8,&PTR_LAB_14bd067b8);
  }
  return DAT_14cc1c3f8;
}



// FUNCTION 146738d2d FUN_146738d2d body=46 status=ok
// SIG undefined FUN_146738d2d(void)

void FUN_146738d2d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd06d40;
  puVar1[0x21] = &PTR_FUN_14bd07060;
  return;
}



// FUNCTION 146738d5b FUN_146738d5b body=47 status=ok
// SIG undefined FUN_146738d5b(void)

longlong FUN_146738d5b(void)

{
  if (DAT_14cc1c420 == 0) {
    FUN_14073dd9a(&DAT_14cc1c420,&PTR_LAB_14bd06cf8);
  }
  return DAT_14cc1c420;
}



// FUNCTION 146738d8a FUN_146738d8a body=80 status=ok
// SIG undefined FUN_146738d8a(void)

void FUN_146738d8a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14094d944(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd07a40;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x25c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x264) = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  return;
}



// FUNCTION 146738dda FUN_146738dda body=49 status=ok
// SIG undefined FUN_146738dda(void)

longlong FUN_146738dda(void)

{
  if (DAT_14cc1cb28 == 0) {
    FUN_14086a14e(&DAT_14cc1cb28,&PTR_FUN_14bd15a08);
  }
  return DAT_14cc1cb28;
}



// FUNCTION 146738e0b FUN_146738e0b body=47 status=ok
// SIG undefined FUN_146738e0b(void)

longlong FUN_146738e0b(void)

{
  if (DAT_14cc1c438 == 0) {
    FUN_14073dd9a(&DAT_14cc1c438,&PTR_LAB_14bd079f8);
  }
  return DAT_14cc1c438;
}



// FUNCTION 146738e3a FUN_146738e3a body=46 status=ok
// SIG undefined FUN_146738e3a(void)

void FUN_146738e3a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd07ee0;
  puVar1[0x21] = &PTR_FUN_14bd08200;
  return;
}



// FUNCTION 146738e68 FUN_146738e68 body=47 status=ok
// SIG undefined FUN_146738e68(void)

longlong FUN_146738e68(void)

{
  if (DAT_14cc1c450 == 0) {
    FUN_14073dd9a(&DAT_14cc1c450,&PTR_LAB_14bd07e98);
  }
  return DAT_14cc1c450;
}



// FUNCTION 146738e97 FUN_146738e97 body=98 status=ok
// SIG undefined FUN_146738e97(void)

void FUN_146738e97(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_14094d944(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd083c0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(puVar1 + 0x4a);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146738efa FUN_146738efa body=47 status=ok
// SIG undefined FUN_146738efa(void)

longlong FUN_146738efa(void)

{
  if (DAT_14cc1c468 == 0) {
    FUN_14073dd9a(&DAT_14cc1c468,&PTR_LAB_14bd08378);
  }
  return DAT_14cc1c468;
}



// FUNCTION 146738f29 FUN_146738f29 body=74 status=ok
// SIG undefined FUN_146738f29(void)

void FUN_146738f29(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd08880;
  puVar1[0x21] = &PTR_FUN_14bd08b80;
  puVar1[0x22] = &PTR_FUN_14bd08bb0;
  puVar1[0x23] = &PTR_FUN_14bd08be0;
  return;
}



// FUNCTION 146738f73 FUN_146738f73 body=47 status=ok
// SIG undefined FUN_146738f73(void)

longlong FUN_146738f73(void)

{
  if (DAT_14cc1c480 == 0) {
    FUN_14073dd9a(&DAT_14cc1c480,&PTR_LAB_14bd08838);
  }
  return DAT_14cc1c480;
}



// FUNCTION 146738fa2 FUN_146738fa2 body=28 status=ok
// SIG undefined FUN_146738fa2(void)

void FUN_146738fa2(undefined8 param_1)

{
  thunk_FUN_1446f1718();
  FUN_1408a750e(param_1,1);
  return;
}



// FUNCTION 146738fbe FUN_146738fbe body=157 status=ok
// SIG undefined FUN_146738fbe(void)

void FUN_146738fbe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_144757f48(param_1,8);
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  lVar3 = FUN_144a7a812();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return;
  }
  uVar4 = FUN_144b00ba4(param_1);
                    /* WARNING: Could not recover jumptable at 0x000146739039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x170))
            (*(longlong **)(param_1 + 0x10),0,uVar4,0x34);
  return;
}



// FUNCTION 14673905c FUN_14673905c body=55 status=ok
// SIG undefined FUN_14673905c(void)

void FUN_14673905c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c498 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c498 = FUN_140002ddd(FUN_146739093,uVar1,L"OptimusSecondaryInputBindingsGroup");
  }
  return;
}



// FUNCTION 146739093 FUN_146739093 body=47 status=ok
// SIG undefined FUN_146739093(void)

longlong FUN_146739093(void)

{
  if (DAT_14cc1c490 == 0) {
    FUN_14086a14e(&DAT_14cc1c490,&PTR_FUN_14bd08de8);
  }
  return DAT_14cc1c490;
}



// FUNCTION 1467390c2 FUN_1467390c2 body=48 status=ok
// SIG undefined FUN_1467390c2(void)

void FUN_1467390c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bd1b230;
  return;
}



// FUNCTION 1467390f2 FUN_1467390f2 body=47 status=ok
// SIG undefined FUN_1467390f2(void)

longlong FUN_1467390f2(void)

{
  if (DAT_14cc1c4b0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c4b0,&PTR_LAB_14bd093b8);
  }
  return DAT_14cc1c4b0;
}



// FUNCTION 146739122 FUN_146739122 body=61 status=ok
// SIG undefined FUN_146739122(void)

void FUN_146739122(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bd1ee48);
                    /* WARNING: Could not recover jumptable at 0x00014673915c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bd1ee48);
  return;
}



// FUNCTION 146739160 FUN_146739160 body=41 status=ok
// SIG undefined FUN_146739160(void)

void FUN_146739160(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x000146739186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bd1ee48);
  return;
}



// FUNCTION 14673918e FUN_14673918e body=61 status=ok
// SIG undefined FUN_14673918e(void)

void FUN_14673918e(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bd1ee48);
                    /* WARNING: Could not recover jumptable at 0x0001467391c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bd1ee48);
  return;
}



// FUNCTION 1467391cb FUN_1467391cb body=98 status=ok
// SIG undefined FUN_1467391cb(void)

void FUN_1467391cb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd0a9e0;
  puVar1[0x21] = &PTR_LAB_14bd0ace0;
  puVar1[0x22] = &PTR_LAB_14bd0ad00;
  puVar1[0x23] = &PTR_LAB_14bd0ad20;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  return;
}



// FUNCTION 146739232 FUN_146739232 body=47 status=ok
// SIG undefined FUN_146739232(void)

longlong FUN_146739232(void)

{
  if (DAT_14cc1c520 == 0) {
    FUN_14073dd9a(&DAT_14cc1c520,&PTR_LAB_14bd0a998);
  }
  return DAT_14cc1c520;
}



// FUNCTION 146739261 FUN_146739261 body=49 status=ok
// SIG undefined FUN_146739261(void)

longlong FUN_146739261(void)

{
  if (DAT_14cc1c638 == 0) {
    FUN_14073dd9a(&DAT_14cc1c638,&PTR_LAB_14bd0d388);
  }
  return DAT_14cc1c638;
}



// FUNCTION 146739292 FUN_146739292 body=47 status=ok
// SIG undefined FUN_146739292(void)

longlong FUN_146739292(void)

{
  if (DAT_14cc1c538 == 0) {
    FUN_14073dd9a(&DAT_14cc1c538,&PTR_LAB_14bd0add8);
  }
  return DAT_14cc1c538;
}



// FUNCTION 1467392c2 FUN_1467392c2 body=55 status=ok
// SIG undefined FUN_1467392c2(void)

void FUN_1467392c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c550 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c550 = FUN_140002ddd(FUN_1467392f9,uVar1,L"OptimusNode_GetVariable_DuplicationInfo");
  }
  return;
}



// FUNCTION 1467392f9 FUN_1467392f9 body=47 status=ok
// SIG undefined FUN_1467392f9(void)

longlong FUN_1467392f9(void)

{
  if (DAT_14cc1c548 == 0) {
    FUN_14086a14e(&DAT_14cc1c548,&PTR_FUN_14bd0b320);
  }
  return DAT_14cc1c548;
}



// FUNCTION 146739328 FUN_146739328 body=48 status=ok
// SIG undefined FUN_146739328(void)

void FUN_146739328(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bd1b410;
  return;
}



// FUNCTION 146739358 FUN_146739358 body=47 status=ok
// SIG undefined FUN_146739358(void)

longlong FUN_146739358(void)

{
  if (DAT_14cc1c568 == 0) {
    FUN_14073dd9a(&DAT_14cc1c568,&PTR_LAB_14bd0b478);
  }
  return DAT_14cc1c568;
}



// FUNCTION 146739387 FUN_146739387 body=47 status=ok
// SIG undefined FUN_146739387(void)

longlong FUN_146739387(void)

{
  if (DAT_14cc1c578 == 0) {
    FUN_1409ce572(&DAT_14cc1c578,&PTR_FUN_14bd0ba30);
  }
  return DAT_14cc1c578;
}



// FUNCTION 1467393b6 FUN_1467393b6 body=105 status=ok
// SIG undefined FUN_1467393b6(void)

void FUN_1467393b6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd0bc10;
  puVar1[0x21] = &PTR_FUN_14bd0bf10;
  puVar1[0x22] = &PTR_FUN_14bd0bf30;
  puVar1[0x23] = &PTR_FUN_14bd0bf48;
  puVar1[0x24] = &PTR_FUN_14bd0bf58;
  *(undefined8 *)((longlong)puVar1 + 300) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x134) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xb1) = 1;
  return;
}



// FUNCTION 14673941f FUN_14673941f body=47 status=ok
// SIG undefined FUN_14673941f(void)

longlong FUN_14673941f(void)

{
  if (DAT_14cc1c598 == 0) {
    FUN_14073dd9a(&DAT_14cc1c598,&PTR_LAB_14bd0bbc8);
  }
  return DAT_14cc1c598;
}



// FUNCTION 14673944e FUN_14673944e body=55 status=ok
// SIG undefined FUN_14673944e(void)

void FUN_14673944e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c5c0 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c5c0 = FUN_140002ddd(FUN_146739485,uVar1,L"OptimusPinPairInfo");
  }
  return;
}



// FUNCTION 146739485 FUN_146739485 body=47 status=ok
// SIG undefined FUN_146739485(void)

longlong FUN_146739485(void)

{
  if (DAT_14cc1c5b8 == 0) {
    FUN_14086a14e(&DAT_14cc1c5b8,&PTR_FUN_14bd0c198);
  }
  return DAT_14cc1c5b8;
}



// FUNCTION 1467394b4 FUN_1467394b4 body=48 status=ok
// SIG undefined FUN_1467394b4(void)

void FUN_1467394b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bd1b600;
  return;
}



// FUNCTION 1467394e4 FUN_1467394e4 body=55 status=ok
// SIG undefined FUN_1467394e4(void)

void FUN_1467394e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c5d8 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c5d8 = FUN_140002ddd(FUN_14673951b,uVar1,L"OptimusLoopTerminalInfo");
  }
  return;
}



// FUNCTION 14673951b FUN_14673951b body=47 status=ok
// SIG undefined FUN_14673951b(void)

longlong FUN_14673951b(void)

{
  if (DAT_14cc1c5d0 == 0) {
    FUN_14086a14e(&DAT_14cc1c5d0,&PTR_FUN_14bd0c2a8);
  }
  return DAT_14cc1c5d0;
}



// FUNCTION 14673954a FUN_14673954a body=48 status=ok
// SIG undefined FUN_14673954a(void)

void FUN_14673954a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bd1b760;
  return;
}



// FUNCTION 14673957a FUN_14673957a body=143 status=ok
// SIG undefined FUN_14673957a(void)

void FUN_14673957a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd0c600;
  puVar1[0x21] = &PTR_FUN_14bd0c900;
  puVar1[0x22] = &PTR_FUN_14bd0c930;
  puVar1[0x23] = &PTR_FUN_14bd0c950;
  puVar1[0x24] = &PTR_FUN_14bd0c970;
  puVar1[0x25] = &PTR_FUN_14bd0c990;
  *(undefined4 *)(puVar1 + 0x27) = 1;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  *(undefined1 *)((longlong)puVar1 + 0xb1) = 1;
  return;
}



// FUNCTION 146739609 FUN_146739609 body=47 status=ok
// SIG undefined FUN_146739609(void)

longlong FUN_146739609(void)

{
  if (DAT_14cc1c5f0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c5f0,&PTR_LAB_14bd0c5b8);
  }
  return DAT_14cc1c5f0;
}



// FUNCTION 146739638 FUN_146739638 body=88 status=ok
// SIG undefined FUN_146739638(void)

void FUN_146739638(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ae21ba(puVar1);
  *puVar1 = &PTR_FUN_14bd0cc40;
  puVar1[0x21] = &PTR_FUN_14bd0cf50;
  puVar1[0x22] = &PTR_FUN_14bd0cf80;
  puVar1[0x23] = &PTR_FUN_14bd0cfa0;
  puVar1[0x24] = &PTR_FUN_14bd0cfb8;
  return;
}



// FUNCTION 146739690 FUN_146739690 body=47 status=ok
// SIG undefined FUN_146739690(void)

longlong FUN_146739690(void)

{
  if (DAT_14cc1c608 == 0) {
    FUN_14073dd9a(&DAT_14cc1c608,&PTR_LAB_14bd0cbf8);
  }
  return DAT_14cc1c608;
}



// FUNCTION 1467396c0 FUN_1467396c0 body=55 status=ok
// SIG undefined FUN_1467396c0(void)

void FUN_1467396c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c620 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c620 =
         FUN_140002ddd(FUN_1467396f7,uVar1,L"OptimusNode_ResourceAccessorBase_DuplicationInfo");
  }
  return;
}



// FUNCTION 1467396f7 FUN_1467396f7 body=47 status=ok
// SIG undefined FUN_1467396f7(void)

longlong FUN_1467396f7(void)

{
  if (DAT_14cc1c618 == 0) {
    FUN_14086a14e(&DAT_14cc1c618,&PTR_FUN_14bd0d170);
  }
  return DAT_14cc1c618;
}



// FUNCTION 146739726 FUN_146739726 body=48 status=ok
// SIG undefined FUN_146739726(void)

void FUN_146739726(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14bd1b8e0;
  return;
}



// FUNCTION 14673975e FUN_14673975e body=88 status=ok
// SIG undefined FUN_14673975e(void)

void FUN_14673975e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ae21ba(puVar1);
  *puVar1 = &PTR_FUN_14bd0da20;
  puVar1[0x21] = &PTR_FUN_14bd0dd30;
  puVar1[0x22] = &PTR_FUN_14bd0dd60;
  puVar1[0x23] = &PTR_FUN_14bd0dd80;
  puVar1[0x24] = &PTR_FUN_14bd0dd98;
  return;
}



// FUNCTION 1467397b6 FUN_1467397b6 body=47 status=ok
// SIG undefined FUN_1467397b6(void)

longlong FUN_1467397b6(void)

{
  if (DAT_14cc1c650 == 0) {
    FUN_14073dd9a(&DAT_14cc1c650,&PTR_LAB_14bd0d9d8);
  }
  return DAT_14cc1c650;
}



// FUNCTION 1467397e5 FUN_1467397e5 body=102 status=ok
// SIG undefined FUN_1467397e5(void)

void FUN_1467397e5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd0df40;
  puVar1[0x21] = &PTR_FUN_14bd0e240;
  puVar1[0x22] = &PTR_FUN_14bd0e260;
  puVar1[0x23] = &PTR_FUN_14bd0e280;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *(undefined1 *)((longlong)puVar1 + 0xb1) = 1;
  return;
}



// FUNCTION 14673984b FUN_14673984b body=47 status=ok
// SIG undefined FUN_14673984b(void)

longlong FUN_14673984b(void)

{
  if (DAT_14cc1c668 == 0) {
    FUN_14073dd9a(&DAT_14cc1c668,&PTR_LAB_14bd0def8);
  }
  return DAT_14cc1c668;
}



// FUNCTION 14673987a FUN_14673987a body=75 status=ok
// SIG undefined FUN_14673987a(void)

void FUN_14673987a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bd0e3c0;
  puVar1[0xc] = 0;
  puVar1[0xe] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1467398ca FUN_1467398ca body=47 status=ok
// SIG undefined FUN_1467398ca(void)

longlong FUN_1467398ca(void)

{
  if (DAT_14cc1c680 == 0) {
    FUN_14073dd9a(&DAT_14cc1c680,&PTR_LAB_14bd0e378);
  }
  return DAT_14cc1c680;
}



// FUNCTION 1467398f9 FUN_1467398f9 body=35 status=ok
// SIG undefined FUN_1467398f9(void)

void FUN_1467398f9(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd0e720;
  return;
}



// FUNCTION 14673991c FUN_14673991c body=49 status=ok
// SIG undefined FUN_14673991c(void)

longlong FUN_14673991c(void)

{
  if (DAT_14cc1c698 == 0) {
    FUN_14073dd9a(&DAT_14cc1c698,&PTR_LAB_14bd0e6d8);
  }
  return DAT_14cc1c698;
}



// FUNCTION 14673994d FUN_14673994d body=50 status=ok
// SIG undefined FUN_14673994d(void)

void FUN_14673994d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd0ec20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  return;
}



// FUNCTION 14673997f FUN_14673997f body=47 status=ok
// SIG undefined FUN_14673997f(void)

longlong FUN_14673997f(void)

{
  if (DAT_14cc1c6b0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c6b0,&PTR_LAB_14bd0ebd8);
  }
  return DAT_14cc1c6b0;
}



// FUNCTION 1467399ae FUN_1467399ae body=35 status=ok
// SIG undefined FUN_1467399ae(void)

void FUN_1467399ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140efea4e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd0efb0;
  return;
}



// FUNCTION 1467399d6 FUN_1467399d6 body=47 status=ok
// SIG undefined FUN_1467399d6(void)

longlong FUN_1467399d6(void)

{
  if (DAT_14cc1c6e8 == 0) {
    FUN_14073dd9a(&DAT_14cc1c6e8,&PTR_LAB_14bd0f488);
  }
  return DAT_14cc1c6e8;
}



// FUNCTION 146739a0c FUN_146739a0c body=55 status=ok
// SIG undefined FUN_146739a0c(void)

void FUN_146739a0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1cc98 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1cc98 = FUN_140002ddd(FUN_14673acd6,uVar1,L"OptimusFunctionReferenceData");
  }
  return;
}



// FUNCTION 146739a44 FUN_146739a44 body=231 status=ok
// SIG undefined FUN_146739a44(void)

void FUN_146739a44(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14bd1d6a0;
  local_28[3] = &DAT_14cc1c730;
  local_28[4] = FUN_1459d1146;
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



// FUNCTION 146739b2c FUN_146739b2c body=47 status=ok
// SIG undefined FUN_146739b2c(void)

longlong FUN_146739b2c(void)

{
  if (DAT_14cc1c738 == 0) {
    FUN_1409ce572(&DAT_14cc1c738,&PTR_FUN_14bd0f830);
  }
  return DAT_14cc1c738;
}



// FUNCTION 146739b5c FUN_146739b5c body=55 status=ok
// SIG undefined FUN_146739b5c(void)

void FUN_146739b5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c758 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c758 = FUN_140002ddd(FUN_14673832d,uVar1,L"OptimusDataDomain");
  }
  return;
}



// FUNCTION 146739b94 FUN_146739b94 body=48 status=ok
// SIG undefined FUN_146739b94(void)

void FUN_146739b94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bd1bad0;
  return;
}



// FUNCTION 146739bc4 FUN_146739bc4 body=47 status=ok
// SIG undefined FUN_146739bc4(void)

longlong FUN_146739bc4(void)

{
  if (DAT_14cc1c778 == 0) {
    FUN_1409ce572(&DAT_14cc1c778,&PTR_FUN_14bd0fd50);
  }
  return DAT_14cc1c778;
}



// FUNCTION 146739bf3 FUN_146739bf3 body=47 status=ok
// SIG undefined FUN_146739bf3(void)

longlong FUN_146739bf3(void)

{
  if (DAT_14cc1c790 == 0) {
    FUN_1409ce572(&DAT_14cc1c790,&PTR_FUN_14bd0fdd0);
  }
  return DAT_14cc1c790;
}



// FUNCTION 146739c22 FUN_146739c22 body=55 status=ok
// SIG undefined FUN_146739c22(void)

void FUN_146739c22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c7b0 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c7b0 = FUN_140002ddd(FUN_146739c59,uVar1,L"OptimusDataType");
  }
  return;
}



// FUNCTION 146739c59 FUN_146739c59 body=47 status=ok
// SIG undefined FUN_146739c59(void)

longlong FUN_146739c59(void)

{
  if (DAT_14cc1c7a8 == 0) {
    FUN_14086a14e(&DAT_14cc1c7a8,&PTR_FUN_14bd101e0);
  }
  return DAT_14cc1c7a8;
}



// FUNCTION 146739c88 FUN_146739c88 body=48 status=ok
// SIG undefined FUN_146739c88(void)

void FUN_146739c88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bd1be50;
  return;
}



// FUNCTION 146739cb8 FUN_146739cb8 body=55 status=ok
// SIG undefined FUN_146739cb8(void)

void FUN_146739cb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c7c8 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c7c8 = FUN_140002ddd(FUN_141907a77,uVar1,L"OptimusDataTypeRef");
  }
  return;
}



// FUNCTION 146739cf0 FUN_146739cf0 body=48 status=ok
// SIG undefined FUN_146739cf0(void)

void FUN_146739cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bd1bfb0;
  return;
}



// FUNCTION 146739d20 FUN_146739d20 body=165 status=ok
// SIG undefined FUN_146739d20(void)

void FUN_146739d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd10450;
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1457dd23c(param_1 + 2);
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 146739dc5 FUN_146739dc5 body=214 status=ok
// SIG undefined FUN_146739dc5(void)

undefined8 FUN_146739dc5(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_1408cc5f4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (param_3 == '\x01' &&
        *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      (**(code **)(*param_2 + 0x370))(param_2,&local_30);
      FUN_1494bd120(param_1,&local_30);
      goto LAB_146739e43;
    }
  }
  (**(code **)(*param_2 + 0x378))(param_2,&local_30,0);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar2,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_146739e43:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146739e9c FUN_146739e9c body=47 status=ok
// SIG undefined FUN_146739e9c(void)

longlong FUN_146739e9c(void)

{
  if (DAT_14cc1c8b8 == 0) {
    FUN_1409ce572(&DAT_14cc1c8b8,&PTR_FUN_14bd10580);
  }
  return DAT_14cc1c8b8;
}



// FUNCTION 146739ecc FUN_146739ecc body=55 status=ok
// SIG undefined FUN_146739ecc(void)

void FUN_146739ecc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c8d8 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c8d8 = FUN_140002ddd(FUN_146739f03,uVar1,L"OptimusComputeGraphInfo");
  }
  return;
}



// FUNCTION 146739f03 FUN_146739f03 body=47 status=ok
// SIG undefined FUN_146739f03(void)

longlong FUN_146739f03(void)

{
  if (DAT_14cc1c8d0 == 0) {
    FUN_14086a14e(&DAT_14cc1c8d0,&PTR_FUN_14bd10708);
  }
  return DAT_14cc1c8d0;
}



// FUNCTION 146739f32 FUN_146739f32 body=49 status=ok
// SIG undefined FUN_146739f32(void)

longlong FUN_146739f32(void)

{
  if (DAT_14cc1cd40 == 0) {
    FUN_1409ce572(&DAT_14cc1cd40,&PTR_FUN_14bd17770);
  }
  return DAT_14cc1cd40;
}



// FUNCTION 146739f64 FUN_146739f64 body=48 status=ok
// SIG undefined FUN_146739f64(void)

void FUN_146739f64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bd1c1e0;
  return;
}



// FUNCTION 146739f94 FUN_146739f94 body=42 status=ok
// SIG undefined FUN_146739f94(void)

void FUN_146739f94(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd10880;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146739fc9 FUN_146739fc9 body=47 status=ok
// SIG undefined FUN_146739fc9(void)

longlong FUN_146739fc9(void)

{
  if (DAT_14cc1c8f0 == 0) {
    FUN_14073dd9a(&DAT_14cc1c8f0,&PTR_LAB_14bd10838);
  }
  return DAT_14cc1c8f0;
}



// FUNCTION 146739ff8 FUN_146739ff8 body=42 status=ok
// SIG undefined FUN_146739ff8(void)

void FUN_146739ff8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd10c40;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14673a02d FUN_14673a02d body=47 status=ok
// SIG undefined FUN_14673a02d(void)

longlong FUN_14673a02d(void)

{
  if (DAT_14cc1c908 == 0) {
    FUN_14073dd9a(&DAT_14cc1c908,&PTR_LAB_14bd10bf8);
  }
  return DAT_14cc1c908;
}



// FUNCTION 14673a05c FUN_14673a05c body=42 status=ok
// SIG undefined FUN_14673a05c(void)

void FUN_14673a05c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd11000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14673a091 FUN_14673a091 body=47 status=ok
// SIG undefined FUN_14673a091(void)

longlong FUN_14673a091(void)

{
  if (DAT_14cc1c920 == 0) {
    FUN_14073dd9a(&DAT_14cc1c920,&PTR_LAB_14bd10fb8);
  }
  return DAT_14cc1c920;
}



// FUNCTION 14673a0c0 FUN_14673a0c0 body=49 status=ok
// SIG undefined FUN_14673a0c0(void)

longlong FUN_14673a0c0(void)

{
  if (DAT_14cc1c958 == 0) {
    FUN_14073dd9a(&DAT_14cc1c958,&PTR_LAB_14bd11c30);
  }
  return DAT_14cc1c958;
}



// FUNCTION 14673a0f1 FUN_14673a0f1 body=47 status=ok
// SIG undefined FUN_14673a0f1(void)

longlong FUN_14673a0f1(void)

{
  if (DAT_14cc1c930 == 0) {
    FUN_14000fc22(&DAT_14cc1c930,&PTR_FUN_14bd11348);
  }
  return DAT_14cc1c930;
}



// FUNCTION 14673a120 FUN_14673a120 body=47 status=ok
// SIG undefined FUN_14673a120(void)

longlong FUN_14673a120(void)

{
  if (DAT_14cc1c938 == 0) {
    FUN_14000fc22(&DAT_14cc1c938,&PTR_FUN_14bd113f0);
  }
  return DAT_14cc1c938;
}



// FUNCTION 14673a14f FUN_14673a14f body=47 status=ok
// SIG undefined FUN_14673a14f(void)

longlong FUN_14673a14f(void)

{
  if (DAT_14cc1c940 == 0) {
    FUN_14000fc22(&DAT_14cc1c940,&PTR_FUN_14bd114d0);
  }
  return DAT_14cc1c940;
}



// FUNCTION 14673a17e FUN_14673a17e body=47 status=ok
// SIG undefined FUN_14673a17e(void)

longlong FUN_14673a17e(void)

{
  if (DAT_14cc1c948 == 0) {
    FUN_14000fc22(&DAT_14cc1c948,&PTR_FUN_14bd115b0);
  }
  return DAT_14cc1c948;
}



// FUNCTION 14673a1ae FUN_14673a1ae body=34 status=ok
// SIG undefined FUN_14673a1ae(void)

void FUN_14673a1ae(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458f36a4();
  FUN_14069c8d6(uVar1,&PTR_s_GetComponentBindings_14bd115f0,4);
  return;
}



// FUNCTION 14673a1d0 FUN_14673a1d0 body=279 status=ok
// SIG undefined FUN_14673a1d0(void)

void FUN_14673a1d0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bd1ee48);
  iVar3 = FUN_1448332aa(param_2,&DAT_14bd1ee48);
  if (iVar3 < 1) {
    local_24 = 0;
    puVar2 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      }
      else {
        FUN_14572512c(param_2,&local_24);
      }
    }
    else {
      local_24 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    if (0 < local_24) {
      iVar3 = 0;
      do {
        local_28 = 0;
        puVar2 = (ulonglong *)param_2[1];
        if (puVar2[1] < *puVar2 + 4) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
          }
          else {
            FUN_14572512c(param_2,&local_28);
          }
        }
        else {
          *puVar2 = *puVar2 + 4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14673a2e8 FUN_14673a2e8 body=38 status=ok
// SIG undefined FUN_14673a2e8(void)

void FUN_14673a2e8(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_140f4f540();
  FUN_140457ffc(&DAT_14cc1c898,param_1);
  return;
}



// FUNCTION 14673a30e FUN_14673a30e body=55 status=ok
// SIG undefined FUN_14673a30e(void)

void FUN_14673a30e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1cc68 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1cc68 = FUN_140002ddd(FUN_14673abe0,uVar1,L"OptimusFunctionNodeGraphHeaderArray");
  }
  return;
}



// FUNCTION 14673a352 FUN_14673a352 body=55 status=ok
// SIG undefined FUN_14673a352(void)

void FUN_14673a352(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c9d0 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c9d0 = FUN_140002ddd(FUN_14673a389,uVar1,L"OptimusDeformerInstanceExecInfo");
  }
  return;
}



// FUNCTION 14673a389 FUN_14673a389 body=47 status=ok
// SIG undefined FUN_14673a389(void)

longlong FUN_14673a389(void)

{
  if (DAT_14cc1c9c8 == 0) {
    FUN_14086a14e(&DAT_14cc1c9c8,&PTR_FUN_14bd12498);
  }
  return DAT_14cc1c9c8;
}



// FUNCTION 14673a3b8 FUN_14673a3b8 body=48 status=ok
// SIG undefined FUN_14673a3b8(void)

void FUN_14673a3b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bd1c340;
  return;
}



// FUNCTION 14673a3e8 FUN_14673a3e8 body=55 status=ok
// SIG undefined FUN_14673a3e8(void)

void FUN_14673a3e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c9e8 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c9e8 = FUN_140002ddd(FUN_14673a41f,uVar1,L"OptimusDeformerInstanceComponentBinding");
  }
  return;
}



// FUNCTION 14673a41f FUN_14673a41f body=47 status=ok
// SIG undefined FUN_14673a41f(void)

longlong FUN_14673a41f(void)

{
  if (DAT_14cc1c9e0 == 0) {
    FUN_14086a14e(&DAT_14cc1c9e0,&PTR_FUN_14bd125d8);
  }
  return DAT_14cc1c9e0;
}



// FUNCTION 14673a44e FUN_14673a44e body=48 status=ok
// SIG undefined FUN_14673a44e(void)

void FUN_14673a44e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bd1c4a0;
  return;
}



// FUNCTION 14673a483 FUN_14673a483 body=47 status=ok
// SIG undefined FUN_14673a483(void)

longlong FUN_14673a483(void)

{
  if (DAT_14cc1ca00 == 0) {
    FUN_14073dd9a(&DAT_14cc1ca00,&PTR_LAB_14bd12758);
  }
  return DAT_14cc1ca00;
}



// FUNCTION 14673a4b2 FUN_14673a4b2 body=47 status=ok
// SIG undefined FUN_14673a4b2(void)

longlong FUN_14673a4b2(void)

{
  if (DAT_14cc1ca10 == 0) {
    FUN_14000fc22(&DAT_14cc1ca10,&PTR_FUN_14bd12af8);
  }
  return DAT_14cc1ca10;
}



// FUNCTION 14673a4e1 FUN_14673a4e1 body=47 status=ok
// SIG undefined FUN_14673a4e1(void)

longlong FUN_14673a4e1(void)

{
  if (DAT_14cc1ca18 == 0) {
    FUN_14000fc22(&DAT_14cc1ca18,&PTR_FUN_14bd12c68);
  }
  return DAT_14cc1ca18;
}



// FUNCTION 14673a510 FUN_14673a510 body=47 status=ok
// SIG undefined FUN_14673a510(void)

longlong FUN_14673a510(void)

{
  if (DAT_14cc1ca20 == 0) {
    FUN_14000fc22(&DAT_14cc1ca20,&PTR_FUN_14bd12d88);
  }
  return DAT_14cc1ca20;
}



// FUNCTION 14673a53f FUN_14673a53f body=47 status=ok
// SIG undefined FUN_14673a53f(void)

longlong FUN_14673a53f(void)

{
  if (DAT_14cc1ca28 == 0) {
    FUN_14000fc22(&DAT_14cc1ca28,&PTR_FUN_14bd12ee8);
  }
  return DAT_14cc1ca28;
}



// FUNCTION 14673a56e FUN_14673a56e body=47 status=ok
// SIG undefined FUN_14673a56e(void)

longlong FUN_14673a56e(void)

{
  if (DAT_14cc1ca30 == 0) {
    FUN_14000fc22(&DAT_14cc1ca30,&PTR_FUN_14bd13010);
  }
  return DAT_14cc1ca30;
}



// FUNCTION 14673a59d FUN_14673a59d body=47 status=ok
// SIG undefined FUN_14673a59d(void)

longlong FUN_14673a59d(void)

{
  if (DAT_14cc1ca38 == 0) {
    FUN_14000fc22(&DAT_14cc1ca38,&PTR_FUN_14bd13178);
  }
  return DAT_14cc1ca38;
}



// FUNCTION 14673a5cc FUN_14673a5cc body=47 status=ok
// SIG undefined FUN_14673a5cc(void)

longlong FUN_14673a5cc(void)

{
  if (DAT_14cc1ca40 == 0) {
    FUN_14000fc22(&DAT_14cc1ca40,&PTR_FUN_14bd13298);
  }
  return DAT_14cc1ca40;
}



// FUNCTION 14673a5fb FUN_14673a5fb body=47 status=ok
// SIG undefined FUN_14673a5fb(void)

longlong FUN_14673a5fb(void)

{
  if (DAT_14cc1ca48 == 0) {
    FUN_14000fc22(&DAT_14cc1ca48,&PTR_FUN_14bd13408);
  }
  return DAT_14cc1ca48;
}



// FUNCTION 14673a62a FUN_14673a62a body=47 status=ok
// SIG undefined FUN_14673a62a(void)

longlong FUN_14673a62a(void)

{
  if (DAT_14cc1ca50 == 0) {
    FUN_14000fc22(&DAT_14cc1ca50,&PTR_FUN_14bd13528);
  }
  return DAT_14cc1ca50;
}



// FUNCTION 14673a659 FUN_14673a659 body=47 status=ok
// SIG undefined FUN_14673a659(void)

longlong FUN_14673a659(void)

{
  if (DAT_14cc1ca58 == 0) {
    FUN_14000fc22(&DAT_14cc1ca58,&PTR_FUN_14bd13698);
  }
  return DAT_14cc1ca58;
}



// FUNCTION 14673a688 FUN_14673a688 body=47 status=ok
// SIG undefined FUN_14673a688(void)

longlong FUN_14673a688(void)

{
  if (DAT_14cc1ca60 == 0) {
    FUN_14000fc22(&DAT_14cc1ca60,&PTR_FUN_14bd137b8);
  }
  return DAT_14cc1ca60;
}



// FUNCTION 14673a6b7 FUN_14673a6b7 body=47 status=ok
// SIG undefined FUN_14673a6b7(void)

longlong FUN_14673a6b7(void)

{
  if (DAT_14cc1ca68 == 0) {
    FUN_14000fc22(&DAT_14cc1ca68,&PTR_FUN_14bd13918);
  }
  return DAT_14cc1ca68;
}



// FUNCTION 14673a6e6 FUN_14673a6e6 body=47 status=ok
// SIG undefined FUN_14673a6e6(void)

longlong FUN_14673a6e6(void)

{
  if (DAT_14cc1ca70 == 0) {
    FUN_14000fc22(&DAT_14cc1ca70,&PTR_FUN_14bd13a38);
  }
  return DAT_14cc1ca70;
}



// FUNCTION 14673a715 FUN_14673a715 body=47 status=ok
// SIG undefined FUN_14673a715(void)

longlong FUN_14673a715(void)

{
  if (DAT_14cc1ca78 == 0) {
    FUN_14000fc22(&DAT_14cc1ca78,&PTR_FUN_14bd13bb0);
  }
  return DAT_14cc1ca78;
}



// FUNCTION 14673a744 FUN_14673a744 body=47 status=ok
// SIG undefined FUN_14673a744(void)

longlong FUN_14673a744(void)

{
  if (DAT_14cc1ca80 == 0) {
    FUN_14000fc22(&DAT_14cc1ca80,&PTR_FUN_14bd13ce0);
  }
  return DAT_14cc1ca80;
}



// FUNCTION 14673a773 FUN_14673a773 body=47 status=ok
// SIG undefined FUN_14673a773(void)

longlong FUN_14673a773(void)

{
  if (DAT_14cc1ca88 == 0) {
    FUN_14000fc22(&DAT_14cc1ca88,&PTR_FUN_14bd13e48);
  }
  return DAT_14cc1ca88;
}



// FUNCTION 14673a7a2 FUN_14673a7a2 body=47 status=ok
// SIG undefined FUN_14673a7a2(void)

longlong FUN_14673a7a2(void)

{
  if (DAT_14cc1ca90 == 0) {
    FUN_14000fc22(&DAT_14cc1ca90,&PTR_FUN_14bd13f68);
  }
  return DAT_14cc1ca90;
}



// FUNCTION 14673a7d1 FUN_14673a7d1 body=47 status=ok
// SIG undefined FUN_14673a7d1(void)

longlong FUN_14673a7d1(void)

{
  if (DAT_14cc1ca98 == 0) {
    FUN_14000fc22(&DAT_14cc1ca98,&PTR_FUN_14bd140d8);
  }
  return DAT_14cc1ca98;
}



// FUNCTION 14673a800 FUN_14673a800 body=47 status=ok
// SIG undefined FUN_14673a800(void)

longlong FUN_14673a800(void)

{
  if (DAT_14cc1caa0 == 0) {
    FUN_14000fc22(&DAT_14cc1caa0,&PTR_FUN_14bd141f8);
  }
  return DAT_14cc1caa0;
}



// FUNCTION 14673a82f FUN_14673a82f body=47 status=ok
// SIG undefined FUN_14673a82f(void)

longlong FUN_14673a82f(void)

{
  if (DAT_14cc1caa8 == 0) {
    FUN_14000fc22(&DAT_14cc1caa8,&PTR_FUN_14bd14368);
  }
  return DAT_14cc1caa8;
}



// FUNCTION 14673a85e FUN_14673a85e body=47 status=ok
// SIG undefined FUN_14673a85e(void)

longlong FUN_14673a85e(void)

{
  if (DAT_14cc1cab0 == 0) {
    FUN_14000fc22(&DAT_14cc1cab0,&PTR_FUN_14bd14490);
  }
  return DAT_14cc1cab0;
}



// FUNCTION 14673a88d FUN_14673a88d body=47 status=ok
// SIG undefined FUN_14673a88d(void)

longlong FUN_14673a88d(void)

{
  if (DAT_14cc1cab8 == 0) {
    FUN_14000fc22(&DAT_14cc1cab8,&PTR_FUN_14bd14600);
  }
  return DAT_14cc1cab8;
}



// FUNCTION 14673a8bc FUN_14673a8bc body=47 status=ok
// SIG undefined FUN_14673a8bc(void)

longlong FUN_14673a8bc(void)

{
  if (DAT_14cc1cac0 == 0) {
    FUN_14000fc22(&DAT_14cc1cac0,&PTR_FUN_14bd14730);
  }
  return DAT_14cc1cac0;
}



// FUNCTION 14673a8eb FUN_14673a8eb body=47 status=ok
// SIG undefined FUN_14673a8eb(void)

longlong FUN_14673a8eb(void)

{
  if (DAT_14cc1cac8 == 0) {
    FUN_14000fc22(&DAT_14cc1cac8,&PTR_FUN_14bd14898);
  }
  return DAT_14cc1cac8;
}



// FUNCTION 14673a91a FUN_14673a91a body=47 status=ok
// SIG undefined FUN_14673a91a(void)

longlong FUN_14673a91a(void)

{
  if (DAT_14cc1cad0 == 0) {
    FUN_14000fc22(&DAT_14cc1cad0,&PTR_FUN_14bd149c0);
  }
  return DAT_14cc1cad0;
}



// FUNCTION 14673a949 FUN_14673a949 body=47 status=ok
// SIG undefined FUN_14673a949(void)

longlong FUN_14673a949(void)

{
  if (DAT_14cc1cad8 == 0) {
    FUN_14000fc22(&DAT_14cc1cad8,&PTR_FUN_14bd14b28);
  }
  return DAT_14cc1cad8;
}



// FUNCTION 14673a978 FUN_14673a978 body=47 status=ok
// SIG undefined FUN_14673a978(void)

longlong FUN_14673a978(void)

{
  if (DAT_14cc1cae0 == 0) {
    FUN_14000fc22(&DAT_14cc1cae0,&PTR_FUN_14bd14c50);
  }
  return DAT_14cc1cae0;
}



// FUNCTION 14673a9a7 FUN_14673a9a7 body=47 status=ok
// SIG undefined FUN_14673a9a7(void)

longlong FUN_14673a9a7(void)

{
  if (DAT_14cc1cae8 == 0) {
    FUN_14000fc22(&DAT_14cc1cae8,&PTR_FUN_14bd14db8);
  }
  return DAT_14cc1cae8;
}



// FUNCTION 14673a9d6 FUN_14673a9d6 body=47 status=ok
// SIG undefined FUN_14673a9d6(void)

longlong FUN_14673a9d6(void)

{
  if (DAT_14cc1caf0 == 0) {
    FUN_14000fc22(&DAT_14cc1caf0,&PTR_FUN_14bd14ee0);
  }
  return DAT_14cc1caf0;
}



// FUNCTION 14673aa06 FUN_14673aa06 body=34 status=ok
// SIG undefined FUN_14673aa06(void)

void FUN_14673aa06(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141235df2();
  FUN_14069c8d6(uVar1,&PTR_s_EnqueueTriggerGraph_14bd14f20,0x1d);
  return;
}



// FUNCTION 14673aa2d FUN_14673aa2d body=47 status=ok
// SIG undefined FUN_14673aa2d(void)

longlong FUN_14673aa2d(void)

{
  if (DAT_14cc1cb10 == 0) {
    FUN_1409ce572(&DAT_14cc1cb10,&PTR_FUN_14bd15880);
  }
  return DAT_14cc1cb10;
}



// FUNCTION 14673aa5c FUN_14673aa5c body=55 status=ok
// SIG undefined FUN_14673aa5c(void)

void FUN_14673aa5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1cb30 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1cb30 = FUN_140002ddd(FUN_146738dda,uVar1,L"OptimusExecutionDomain");
  }
  return;
}



// FUNCTION 14673aa94 FUN_14673aa94 body=48 status=ok
// SIG undefined FUN_14673aa94(void)

void FUN_14673aa94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bd1c6a0;
  return;
}



// FUNCTION 14673aac4 FUN_14673aac4 body=47 status=ok
// SIG undefined FUN_14673aac4(void)

longlong FUN_14673aac4(void)

{
  if (DAT_14cc1cc30 == 0) {
    FUN_14073dd9a(&DAT_14cc1cc30,&PTR_LAB_14bd15ed0);
  }
  return DAT_14cc1cc30;
}



// FUNCTION 14673aaf3 FUN_14673aaf3 body=47 status=ok
// SIG undefined FUN_14673aaf3(void)

longlong FUN_14673aaf3(void)

{
  if (DAT_14cc1cc20 == 0) {
    FUN_14000fc22(&DAT_14cc1cc20,&PTR_FUN_14bd15d80);
  }
  return DAT_14cc1cc20;
}



// FUNCTION 14673ab22 FUN_14673ab22 body=34 status=ok
// SIG undefined FUN_14673ab22(void)

void FUN_14673ab22(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14585e15a();
  FUN_14069c8d6(uVar1,&PTR_s_GetAccessSpecifierOptions_14bd15dc0,1);
  return;
}



// FUNCTION 14673ab4a FUN_14673ab4a body=55 status=ok
// SIG undefined FUN_14673ab4a(void)

void FUN_14673ab4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1cc50 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1cc50 = FUN_140002ddd(FUN_14673ab81,uVar1,L"OptimusFunctionNodeGraphHeader");
  }
  return;
}



// FUNCTION 14673ab81 FUN_14673ab81 body=47 status=ok
// SIG undefined FUN_14673ab81(void)

longlong FUN_14673ab81(void)

{
  if (DAT_14cc1cc48 == 0) {
    FUN_14086a14e(&DAT_14cc1cc48,&PTR_FUN_14bd163a8);
  }
  return DAT_14cc1cc48;
}



// FUNCTION 14673abb0 FUN_14673abb0 body=48 status=ok
// SIG undefined FUN_14673abb0(void)

void FUN_14673abb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bd1c880;
  return;
}



// FUNCTION 14673abe0 FUN_14673abe0 body=47 status=ok
// SIG undefined FUN_14673abe0(void)

longlong FUN_14673abe0(void)

{
  if (DAT_14cc1cc60 == 0) {
    FUN_14086a14e(&DAT_14cc1cc60,&PTR_FUN_14bd164d8);
  }
  return DAT_14cc1cc60;
}



// FUNCTION 14673ac10 FUN_14673ac10 body=48 status=ok
// SIG undefined FUN_14673ac10(void)

void FUN_14673ac10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bd1c9e0;
  return;
}



// FUNCTION 14673ac40 FUN_14673ac40 body=55 status=ok
// SIG undefined FUN_14673ac40(void)

void FUN_14673ac40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1cc80 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1cc80 = FUN_140002ddd(FUN_14673ac77,uVar1,L"OptimusFunctionReferenceNodeSet");
  }
  return;
}



// FUNCTION 14673ac77 FUN_14673ac77 body=47 status=ok
// SIG undefined FUN_14673ac77(void)

longlong FUN_14673ac77(void)

{
  if (DAT_14cc1cc78 == 0) {
    FUN_14086a14e(&DAT_14cc1cc78,&PTR_FUN_14bd16600);
  }
  return DAT_14cc1cc78;
}



// FUNCTION 14673aca6 FUN_14673aca6 body=48 status=ok
// SIG undefined FUN_14673aca6(void)

void FUN_14673aca6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bd1cb40;
  return;
}



// FUNCTION 14673acd6 FUN_14673acd6 body=47 status=ok
// SIG undefined FUN_14673acd6(void)

longlong FUN_14673acd6(void)

{
  if (DAT_14cc1cc90 == 0) {
    FUN_14086a14e(&DAT_14cc1cc90,&PTR_FUN_14bd16798);
  }
  return DAT_14cc1cc90;
}



// FUNCTION 14673ad06 FUN_14673ad06 body=48 status=ok
// SIG undefined FUN_14673ad06(void)

void FUN_14673ad06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14bd1cca0;
  return;
}



// FUNCTION 14673ad36 FUN_14673ad36 body=47 status=ok
// SIG undefined FUN_14673ad36(void)

longlong FUN_14673ad36(void)

{
  if (DAT_14cc1ccb8 == 0) {
    FUN_14000fc22(&DAT_14cc1ccb8,&PTR_FUN_14bd16bc0);
  }
  return DAT_14cc1ccb8;
}



// FUNCTION 14673ad65 FUN_14673ad65 body=47 status=ok
// SIG undefined FUN_14673ad65(void)

longlong FUN_14673ad65(void)

{
  if (DAT_14cc1ccc0 == 0) {
    FUN_14000fc22(&DAT_14cc1ccc0,&PTR_FUN_14bd16c60);
  }
  return DAT_14cc1ccc0;
}



// FUNCTION 14673ad94 FUN_14673ad94 body=47 status=ok
// SIG undefined FUN_14673ad94(void)

longlong FUN_14673ad94(void)

{
  if (DAT_14cc1ccc8 == 0) {
    FUN_14000fc22(&DAT_14cc1ccc8,&PTR_FUN_14bd16cf0);
  }
  return DAT_14cc1ccc8;
}



// FUNCTION 14673adc3 FUN_14673adc3 body=47 status=ok
// SIG undefined FUN_14673adc3(void)

longlong FUN_14673adc3(void)

{
  if (DAT_14cc1ccd0 == 0) {
    FUN_14000fc22(&DAT_14cc1ccd0,&PTR_FUN_14bd16d80);
  }
  return DAT_14cc1ccd0;
}



// FUNCTION 14673adf2 FUN_14673adf2 body=47 status=ok
// SIG undefined FUN_14673adf2(void)

longlong FUN_14673adf2(void)

{
  if (DAT_14cc1ccd8 == 0) {
    FUN_14000fc22(&DAT_14cc1ccd8,&PTR_FUN_14bd16e68);
  }
  return DAT_14cc1ccd8;
}



// FUNCTION 14673ae22 FUN_14673ae22 body=34 status=ok
// SIG undefined FUN_14673ae22(void)

void FUN_14673ae22(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140f7d9ac();
  FUN_14069c8d6(uVar1,&PTR_s_GetDisplayName_14bd16eb0,5);
  return;
}



// FUNCTION 14673ae4c FUN_14673ae4c body=47 status=ok
// SIG undefined FUN_14673ae4c(void)

longlong FUN_14673ae4c(void)

{
  if (DAT_14cc1cd58 == 0) {
    FUN_14000fc22(&DAT_14cc1cd58,&PTR_FUN_14bd178b8);
  }
  return DAT_14cc1cd58;
}



// FUNCTION 14673ae7b FUN_14673ae7b body=47 status=ok
// SIG undefined FUN_14673ae7b(void)

longlong FUN_14673ae7b(void)

{
  if (DAT_14cc1cd60 == 0) {
    FUN_14000fc22(&DAT_14cc1cd60,&PTR_FUN_14bd17a10);
  }
  return DAT_14cc1cd60;
}



// FUNCTION 14673aeaa FUN_14673aeaa body=47 status=ok
// SIG undefined FUN_14673aeaa(void)

longlong FUN_14673aeaa(void)

{
  if (DAT_14cc1cd68 == 0) {
    FUN_14000fc22(&DAT_14cc1cd68,&PTR_FUN_14bd17b58);
  }
  return DAT_14cc1cd68;
}



// FUNCTION 14673aed9 FUN_14673aed9 body=47 status=ok
// SIG undefined FUN_14673aed9(void)

longlong FUN_14673aed9(void)

{
  if (DAT_14cc1cd70 == 0) {
    FUN_14000fc22(&DAT_14cc1cd70,&PTR_FUN_14bd17ca0);
  }
  return DAT_14cc1cd70;
}



// FUNCTION 14673af08 FUN_14673af08 body=47 status=ok
// SIG undefined FUN_14673af08(void)

longlong FUN_14673af08(void)

{
  if (DAT_14cc1cd78 == 0) {
    FUN_14000fc22(&DAT_14cc1cd78,&PTR_FUN_14bd17dd0);
  }
  return DAT_14cc1cd78;
}



// FUNCTION 14673af37 FUN_14673af37 body=47 status=ok
// SIG undefined FUN_14673af37(void)

longlong FUN_14673af37(void)

{
  if (DAT_14cc1cd80 == 0) {
    FUN_14000fc22(&DAT_14cc1cd80,&PTR_FUN_14bd17f08);
  }
  return DAT_14cc1cd80;
}



// FUNCTION 14673af66 FUN_14673af66 body=47 status=ok
// SIG undefined FUN_14673af66(void)

longlong FUN_14673af66(void)

{
  if (DAT_14cc1cd88 == 0) {
    FUN_14000fc22(&DAT_14cc1cd88,&PTR_FUN_14bd18050);
  }
  return DAT_14cc1cd88;
}



// FUNCTION 14673af95 FUN_14673af95 body=47 status=ok
// SIG undefined FUN_14673af95(void)

longlong FUN_14673af95(void)

{
  if (DAT_14cc1cd90 == 0) {
    FUN_14000fc22(&DAT_14cc1cd90,&PTR_FUN_14bd18178);
  }
  return DAT_14cc1cd90;
}



// FUNCTION 14673afc4 FUN_14673afc4 body=47 status=ok
// SIG undefined FUN_14673afc4(void)

longlong FUN_14673afc4(void)

{
  if (DAT_14cc1cd98 == 0) {
    FUN_14000fc22(&DAT_14cc1cd98,&PTR_FUN_14bd182b0);
  }
  return DAT_14cc1cd98;
}



// FUNCTION 14673aff3 FUN_14673aff3 body=47 status=ok
// SIG undefined FUN_14673aff3(void)

longlong FUN_14673aff3(void)

{
  if (DAT_14cc1cda0 == 0) {
    FUN_14000fc22(&DAT_14cc1cda0,&PTR_FUN_14bd183e8);
  }
  return DAT_14cc1cda0;
}



// FUNCTION 14673b022 FUN_14673b022 body=47 status=ok
// SIG undefined FUN_14673b022(void)

longlong FUN_14673b022(void)

{
  if (DAT_14cc1cda8 == 0) {
    FUN_14000fc22(&DAT_14cc1cda8,&PTR_FUN_14bd18530);
  }
  return DAT_14cc1cda8;
}



// FUNCTION 14673b051 FUN_14673b051 body=47 status=ok
// SIG undefined FUN_14673b051(void)

longlong FUN_14673b051(void)

{
  if (DAT_14cc1cdb0 == 0) {
    FUN_14000fc22(&DAT_14cc1cdb0,&PTR_FUN_14bd18660);
  }
  return DAT_14cc1cdb0;
}



// FUNCTION 14673b080 FUN_14673b080 body=47 status=ok
// SIG undefined FUN_14673b080(void)

longlong FUN_14673b080(void)

{
  if (DAT_14cc1cdb8 == 0) {
    FUN_14000fc22(&DAT_14cc1cdb8,&PTR_FUN_14bd18790);
  }
  return DAT_14cc1cdb8;
}



// FUNCTION 14673b0af FUN_14673b0af body=47 status=ok
// SIG undefined FUN_14673b0af(void)

longlong FUN_14673b0af(void)

{
  if (DAT_14cc1cdc0 == 0) {
    FUN_14000fc22(&DAT_14cc1cdc0,&PTR_FUN_14bd18890);
  }
  return DAT_14cc1cdc0;
}



// FUNCTION 14673b0de FUN_14673b0de body=47 status=ok
// SIG undefined FUN_14673b0de(void)

longlong FUN_14673b0de(void)

{
  if (DAT_14cc1cdc8 == 0) {
    FUN_14000fc22(&DAT_14cc1cdc8,&PTR_FUN_14bd189a0);
  }
  return DAT_14cc1cdc8;
}



// FUNCTION 14673b10d FUN_14673b10d body=47 status=ok
// SIG undefined FUN_14673b10d(void)

longlong FUN_14673b10d(void)

{
  if (DAT_14cc1cdd0 == 0) {
    FUN_14000fc22(&DAT_14cc1cdd0,&PTR_FUN_14bd18a98);
  }
  return DAT_14cc1cdd0;
}



// FUNCTION 14673b13c FUN_14673b13c body=47 status=ok
// SIG undefined FUN_14673b13c(void)

longlong FUN_14673b13c(void)

{
  if (DAT_14cc1cdd8 == 0) {
    FUN_14000fc22(&DAT_14cc1cdd8,&PTR_FUN_14bd18b98);
  }
  return DAT_14cc1cdd8;
}



// FUNCTION 14673b16b FUN_14673b16b body=47 status=ok
// SIG undefined FUN_14673b16b(void)

longlong FUN_14673b16b(void)

{
  if (DAT_14cc1cde0 == 0) {
    FUN_14000fc22(&DAT_14cc1cde0,&PTR_FUN_14bd18cc8);
  }
  return DAT_14cc1cde0;
}



// FUNCTION 14673b19a FUN_14673b19a body=47 status=ok
// SIG undefined FUN_14673b19a(void)

longlong FUN_14673b19a(void)

{
  if (DAT_14cc1cde8 == 0) {
    FUN_14000fc22(&DAT_14cc1cde8,&PTR_FUN_14bd18e30);
  }
  return DAT_14cc1cde8;
}



// FUNCTION 14673b1c9 FUN_14673b1c9 body=47 status=ok
// SIG undefined FUN_14673b1c9(void)

longlong FUN_14673b1c9(void)

{
  if (DAT_14cc1cdf0 == 0) {
    FUN_14000fc22(&DAT_14cc1cdf0,&PTR_FUN_14bd18f70);
  }
  return DAT_14cc1cdf0;
}



// FUNCTION 14673b1f8 FUN_14673b1f8 body=47 status=ok
// SIG undefined FUN_14673b1f8(void)

longlong FUN_14673b1f8(void)

{
  if (DAT_14cc1cdf8 == 0) {
    FUN_14000fc22(&DAT_14cc1cdf8,&PTR_FUN_14bd19000);
  }
  return DAT_14cc1cdf8;
}



// FUNCTION 14673b227 FUN_14673b227 body=47 status=ok
// SIG undefined FUN_14673b227(void)

longlong FUN_14673b227(void)

{
  if (DAT_14cc1ce00 == 0) {
    FUN_14000fc22(&DAT_14cc1ce00,&PTR_FUN_14bd190e0);
  }
  return DAT_14cc1ce00;
}



// FUNCTION 14673b256 FUN_14673b256 body=47 status=ok
// SIG undefined FUN_14673b256(void)

longlong FUN_14673b256(void)

{
  if (DAT_14cc1ce08 == 0) {
    FUN_14000fc22(&DAT_14cc1ce08,&PTR_FUN_14bd191c0);
  }
  return DAT_14cc1ce08;
}



// FUNCTION 14673b285 FUN_14673b285 body=47 status=ok
// SIG undefined FUN_14673b285(void)

longlong FUN_14673b285(void)

{
  if (DAT_14cc1ce10 == 0) {
    FUN_14000fc22(&DAT_14cc1ce10,&PTR_FUN_14bd192a0);
  }
  return DAT_14cc1ce10;
}



// FUNCTION 14673b2b4 FUN_14673b2b4 body=47 status=ok
// SIG undefined FUN_14673b2b4(void)

longlong FUN_14673b2b4(void)

{
  if (DAT_14cc1ce18 == 0) {
    FUN_14000fc22(&DAT_14cc1ce18,&PTR_FUN_14bd19340);
  }
  return DAT_14cc1ce18;
}



// FUNCTION 14673b2e3 FUN_14673b2e3 body=47 status=ok
// SIG undefined FUN_14673b2e3(void)

longlong FUN_14673b2e3(void)

{
  if (DAT_14cc1ce20 == 0) {
    FUN_14000fc22(&DAT_14cc1ce20,&PTR_FUN_14bd193d8);
  }
  return DAT_14cc1ce20;
}



// FUNCTION 14673b312 FUN_14673b312 body=47 status=ok
// SIG undefined FUN_14673b312(void)

longlong FUN_14673b312(void)

{
  if (DAT_14cc1ce28 == 0) {
    FUN_14000fc22(&DAT_14cc1ce28,&PTR_FUN_14bd194c8);
  }
  return DAT_14cc1ce28;
}



// FUNCTION 14673b341 FUN_14673b341 body=47 status=ok
// SIG undefined FUN_14673b341(void)

longlong FUN_14673b341(void)

{
  if (DAT_14cc1ce30 == 0) {
    FUN_14000fc22(&DAT_14cc1ce30,&PTR_FUN_14bd195b8);
  }
  return DAT_14cc1ce30;
}


