// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464ab6d8 FUN_1464ab6d8 body=40 status=ok
// SIG undefined FUN_1464ab6d8(void)

undefined8 FUN_1464ab6d8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ab700 FUN_1464ab700 body=34 status=ok
// SIG undefined FUN_1464ab700(void)

undefined8 FUN_1464ab700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464ab722 FUN_1464ab722 body=93 status=ok
// SIG undefined FUN_1464ab722(void)

void FUN_1464ab722(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afd3140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464ab780 FUN_1464ab780 body=34 status=ok
// SIG undefined FUN_1464ab780(void)

undefined8 FUN_1464ab780(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464ab7a7 FUN_1464ab7a7 body=47 status=ok
// SIG undefined FUN_1464ab7a7(void)

longlong FUN_1464ab7a7(void)

{
  if (DAT_14cb53cf0 == 0) {
    FUN_14073dd9a(&DAT_14cb53cf0,&PTR_LAB_14afd32a8);
  }
  return DAT_14cb53cf0;
}



// FUNCTION 1464ab7db FUN_1464ab7db body=47 status=ok
// SIG undefined FUN_1464ab7db(void)

longlong FUN_1464ab7db(void)

{
  if (DAT_14cb53d08 == 0) {
    FUN_14073dd9a(&DAT_14cb53d08,&PTR_LAB_14afd3358);
  }
  return DAT_14cb53d08;
}



// FUNCTION 1464ab80a FUN_1464ab80a body=47 status=ok
// SIG undefined FUN_1464ab80a(void)

longlong FUN_1464ab80a(void)

{
  if (DAT_14cb53d28 == 0) {
    FUN_14073dd9a(&DAT_14cb53d28,&PTR_LAB_14afd3428);
  }
  return DAT_14cb53d28;
}



// FUNCTION 1464ab839 FUN_1464ab839 body=49 status=ok
// SIG undefined FUN_1464ab839(void)

longlong FUN_1464ab839(void)

{
  if (DAT_14cb53d90 == 0) {
    FUN_14073dd9a(&DAT_14cb53d90,&PTR_LAB_14afd3fb0);
  }
  return DAT_14cb53d90;
}



// FUNCTION 1464ab86a FUN_1464ab86a body=47 status=ok
// SIG undefined FUN_1464ab86a(void)

longlong FUN_1464ab86a(void)

{
  if (DAT_14cb53d38 == 0) {
    FUN_14000fc22(&DAT_14cb53d38,&PTR_FUN_14afd3560);
  }
  return DAT_14cb53d38;
}



// FUNCTION 1464ab899 FUN_1464ab899 body=47 status=ok
// SIG undefined FUN_1464ab899(void)

longlong FUN_1464ab899(void)

{
  if (DAT_14cb53d40 == 0) {
    FUN_14000fc22(&DAT_14cb53d40,&PTR_FUN_14afd3630);
  }
  return DAT_14cb53d40;
}



// FUNCTION 1464ab8c8 FUN_1464ab8c8 body=49 status=ok
// SIG undefined FUN_1464ab8c8(void)

longlong FUN_1464ab8c8(void)

{
  if (DAT_14cb53fe0 == 0) {
    FUN_1409ce572(&DAT_14cb53fe0,&PTR_FUN_14afd6dc0);
  }
  return DAT_14cb53fe0;
}



// FUNCTION 1464ab8f9 FUN_1464ab8f9 body=47 status=ok
// SIG undefined FUN_1464ab8f9(void)

longlong FUN_1464ab8f9(void)

{
  if (DAT_14cb53d48 == 0) {
    FUN_14000fc22(&DAT_14cb53d48,&PTR_FUN_14afd3760);
  }
  return DAT_14cb53d48;
}



// FUNCTION 1464ab928 FUN_1464ab928 body=47 status=ok
// SIG undefined FUN_1464ab928(void)

longlong FUN_1464ab928(void)

{
  if (DAT_14cb53d50 == 0) {
    FUN_14000fc22(&DAT_14cb53d50,&PTR_FUN_14afd37f8);
  }
  return DAT_14cb53d50;
}



// FUNCTION 1464ab957 FUN_1464ab957 body=47 status=ok
// SIG undefined FUN_1464ab957(void)

longlong FUN_1464ab957(void)

{
  if (DAT_14cb53d58 == 0) {
    FUN_14000fc22(&DAT_14cb53d58,&PTR_FUN_14afd38f0);
  }
  return DAT_14cb53d58;
}



// FUNCTION 1464ab986 FUN_1464ab986 body=47 status=ok
// SIG undefined FUN_1464ab986(void)

longlong FUN_1464ab986(void)

{
  if (DAT_14cb53d60 == 0) {
    FUN_14000fc22(&DAT_14cb53d60,&PTR_FUN_14afd39e0);
  }
  return DAT_14cb53d60;
}



// FUNCTION 1464ab9b5 FUN_1464ab9b5 body=47 status=ok
// SIG undefined FUN_1464ab9b5(void)

longlong FUN_1464ab9b5(void)

{
  if (DAT_14cb53d68 == 0) {
    FUN_14000fc22(&DAT_14cb53d68,&PTR_FUN_14afd3a78);
  }
  return DAT_14cb53d68;
}



// FUNCTION 1464ab9e4 FUN_1464ab9e4 body=47 status=ok
// SIG undefined FUN_1464ab9e4(void)

longlong FUN_1464ab9e4(void)

{
  if (DAT_14cb53d70 == 0) {
    FUN_14000fc22(&DAT_14cb53d70,&PTR_FUN_14afd3b58);
  }
  return DAT_14cb53d70;
}



// FUNCTION 1464aba13 FUN_1464aba13 body=47 status=ok
// SIG undefined FUN_1464aba13(void)

longlong FUN_1464aba13(void)

{
  if (DAT_14cb53d78 == 0) {
    FUN_14000fc22(&DAT_14cb53d78,&PTR_FUN_14afd3ce8);
  }
  return DAT_14cb53d78;
}



// FUNCTION 1464aba42 FUN_1464aba42 body=47 status=ok
// SIG undefined FUN_1464aba42(void)

longlong FUN_1464aba42(void)

{
  if (DAT_14cb53d80 == 0) {
    FUN_14000fc22(&DAT_14cb53d80,&PTR_FUN_14afd3dc8);
  }
  return DAT_14cb53d80;
}



// FUNCTION 1464aba72 FUN_1464aba72 body=34 status=ok
// SIG undefined FUN_1464aba72(void)

void FUN_1464aba72(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7e824();
  FUN_14069c8d6(uVar1,&PTR_s_AddTimeOfDayEventListener_14afd3e10,10);
  return;
}



// FUNCTION 1464aba94 FUN_1464aba94 body=35 status=ok
// SIG undefined FUN_1464aba94(void)

void FUN_1464aba94(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afd3ff0;
  return;
}



// FUNCTION 1464abab8 FUN_1464abab8 body=55 status=ok
// SIG undefined FUN_1464abab8(void)

void FUN_1464abab8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53da8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53da8 = FUN_140002ddd(FUN_1464abaef,uVar1,L"TimeOfDayControlledLightStateSettings");
  }
  return;
}



// FUNCTION 1464abaef FUN_1464abaef body=47 status=ok
// SIG undefined FUN_1464abaef(void)

longlong FUN_1464abaef(void)

{
  if (DAT_14cb53da0 == 0) {
    FUN_14086a14e(&DAT_14cb53da0,&PTR_FUN_14afd4508);
  }
  return DAT_14cb53da0;
}



// FUNCTION 1464abb1e FUN_1464abb1e body=48 status=ok
// SIG undefined FUN_1464abb1e(void)

void FUN_1464abb1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14afd9ad0;
  return;
}



// FUNCTION 1464abb4e FUN_1464abb4e body=55 status=ok
// SIG undefined FUN_1464abb4e(void)

void FUN_1464abb4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53dc0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53dc0 = FUN_140002ddd(FUN_1464abb85,uVar1,L"TimeOfDayControlledLightSettings");
  }
  return;
}



// FUNCTION 1464abb85 FUN_1464abb85 body=49 status=ok
// SIG undefined FUN_1464abb85(void)

longlong FUN_1464abb85(void)

{
  if (DAT_14cb53db8 == 0) {
    FUN_14086a14e(&DAT_14cb53db8,&PTR_FUN_14afd4648);
  }
  return DAT_14cb53db8;
}



// FUNCTION 1464abbb6 FUN_1464abbb6 body=48 status=ok
// SIG undefined FUN_1464abbb6(void)

void FUN_1464abbb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14afd9c30;
  return;
}



// FUNCTION 1464abbe6 FUN_1464abbe6 body=47 status=ok
// SIG undefined FUN_1464abbe6(void)

longlong FUN_1464abbe6(void)

{
  if (DAT_14cb53dd8 == 0) {
    FUN_14073dd9a(&DAT_14cb53dd8,&PTR_LAB_14afd4798);
  }
  return DAT_14cb53dd8;
}



// FUNCTION 1464abc15 FUN_1464abc15 body=47 status=ok
// SIG undefined FUN_1464abc15(void)

longlong FUN_1464abc15(void)

{
  if (DAT_14cb53df0 == 0) {
    FUN_14073dd9a(&DAT_14cb53df0,&PTR_LAB_14afd48d8);
  }
  return DAT_14cb53df0;
}



// FUNCTION 1464abc44 FUN_1464abc44 body=47 status=ok
// SIG undefined FUN_1464abc44(void)

longlong FUN_1464abc44(void)

{
  if (DAT_14cb53e08 == 0) {
    FUN_14073dd9a(&DAT_14cb53e08,&PTR_LAB_14afd4a18);
  }
  return DAT_14cb53e08;
}



// FUNCTION 1464abc74 FUN_1464abc74 body=55 status=ok
// SIG undefined FUN_1464abc74(void)

void FUN_1464abc74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e20 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e20 = FUN_140002ddd(FUN_1464abcab,uVar1,L"TimeOfDayAllowedMaterialParameter");
  }
  return;
}



// FUNCTION 1464abcab FUN_1464abcab body=49 status=ok
// SIG undefined FUN_1464abcab(void)

longlong FUN_1464abcab(void)

{
  if (DAT_14cb53e18 == 0) {
    FUN_14086a14e(&DAT_14cb53e18,&PTR_FUN_14afd4cd8);
  }
  return DAT_14cb53e18;
}



// FUNCTION 1464abcdc FUN_1464abcdc body=48 status=ok
// SIG undefined FUN_1464abcdc(void)

void FUN_1464abcdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14afd9d90;
  return;
}



// FUNCTION 1464abd0c FUN_1464abd0c body=47 status=ok
// SIG undefined FUN_1464abd0c(void)

longlong FUN_1464abd0c(void)

{
  if (DAT_14cb53e30 == 0) {
    FUN_14086a14e(&DAT_14cb53e30,&PTR_FUN_14afd5130);
  }
  return DAT_14cb53e30;
}



// FUNCTION 1464abd3b FUN_1464abd3b body=49 status=ok
// SIG undefined FUN_1464abd3b(void)

longlong FUN_1464abd3b(void)

{
  if (DAT_14cb53ef0 == 0) {
    FUN_14086a14e(&DAT_14cb53ef0,&PTR_FUN_14afd5fc0);
  }
  return DAT_14cb53ef0;
}



// FUNCTION 1464abd6c FUN_1464abd6c body=48 status=ok
// SIG undefined FUN_1464abd6c(void)

void FUN_1464abd6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14afd9ef0;
  return;
}



// FUNCTION 1464abd9c FUN_1464abd9c body=55 status=ok
// SIG undefined FUN_1464abd9c(void)

void FUN_1464abd9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e50 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e50 = FUN_140002ddd(FUN_1464abdd3,uVar1,L"TimeOfDayKey");
  }
  return;
}



// FUNCTION 1464abdd3 FUN_1464abdd3 body=49 status=ok
// SIG undefined FUN_1464abdd3(void)

longlong FUN_1464abdd3(void)

{
  if (DAT_14cb53e48 == 0) {
    FUN_14086a14e(&DAT_14cb53e48,&PTR_FUN_14afd5280);
  }
  return DAT_14cb53e48;
}



// FUNCTION 1464abe04 FUN_1464abe04 body=48 status=ok
// SIG undefined FUN_1464abe04(void)

void FUN_1464abe04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14afda050;
  return;
}



// FUNCTION 1464abe34 FUN_1464abe34 body=47 status=ok
// SIG undefined FUN_1464abe34(void)

longlong FUN_1464abe34(void)

{
  if (DAT_14cb53e60 == 0) {
    FUN_14086a14e(&DAT_14cb53e60,&PTR_FUN_14afd5448);
  }
  return DAT_14cb53e60;
}



// FUNCTION 1464abe64 FUN_1464abe64 body=48 status=ok
// SIG undefined FUN_1464abe64(void)

void FUN_1464abe64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14afda1b0;
  return;
}



// FUNCTION 1464abe94 FUN_1464abe94 body=47 status=ok
// SIG undefined FUN_1464abe94(void)

longlong FUN_1464abe94(void)

{
  if (DAT_14cb53e78 == 0) {
    FUN_14086a14e(&DAT_14cb53e78,&PTR_FUN_14afd5500);
  }
  return DAT_14cb53e78;
}



// FUNCTION 1464abec4 FUN_1464abec4 body=48 status=ok
// SIG undefined FUN_1464abec4(void)

void FUN_1464abec4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14afda320;
  return;
}



// FUNCTION 1464abef4 FUN_1464abef4 body=47 status=ok
// SIG undefined FUN_1464abef4(void)

longlong FUN_1464abef4(void)

{
  if (DAT_14cb53e90 == 0) {
    FUN_14086a14e(&DAT_14cb53e90,&PTR_FUN_14afd5608);
  }
  return DAT_14cb53e90;
}



// FUNCTION 1464abf24 FUN_1464abf24 body=48 status=ok
// SIG undefined FUN_1464abf24(void)

void FUN_1464abf24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14afda490;
  return;
}



// FUNCTION 1464abf54 FUN_1464abf54 body=55 status=ok
// SIG undefined FUN_1464abf54(void)

void FUN_1464abf54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53eb0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53eb0 = FUN_140002ddd(FUN_1464abf8b,uVar1,L"TimeOfDayWeatherForecast");
  }
  return;
}



// FUNCTION 1464abf8b FUN_1464abf8b body=49 status=ok
// SIG undefined FUN_1464abf8b(void)

longlong FUN_1464abf8b(void)

{
  if (DAT_14cb53ea8 == 0) {
    FUN_14086a14e(&DAT_14cb53ea8,&PTR_FUN_14afd58a8);
  }
  return DAT_14cb53ea8;
}



// FUNCTION 1464abfbc FUN_1464abfbc body=48 status=ok
// SIG undefined FUN_1464abfbc(void)

void FUN_1464abfbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000024;
  *puVar1 = &PTR_FUN_14afda5f0;
  return;
}



// FUNCTION 1464abfec FUN_1464abfec body=47 status=ok
// SIG undefined FUN_1464abfec(void)

longlong FUN_1464abfec(void)

{
  if (DAT_14cb53ec0 == 0) {
    FUN_14086a14e(&DAT_14cb53ec0,&PTR_FUN_14afd59b8);
  }
  return DAT_14cb53ec0;
}



// FUNCTION 1464ac01c FUN_1464ac01c body=48 status=ok
// SIG undefined FUN_1464ac01c(void)

void FUN_1464ac01c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14afda750;
  return;
}



// FUNCTION 1464ac04c FUN_1464ac04c body=47 status=ok
// SIG undefined FUN_1464ac04c(void)

longlong FUN_1464ac04c(void)

{
  if (DAT_14cb53ed8 == 0) {
    FUN_14086a14e(&DAT_14cb53ed8,&PTR_FUN_14afd5ac8);
  }
  return DAT_14cb53ed8;
}



// FUNCTION 1464ac07c FUN_1464ac07c body=48 status=ok
// SIG undefined FUN_1464ac07c(void)

void FUN_1464ac07c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14afda8c0;
  return;
}



// FUNCTION 1464ac0ac FUN_1464ac0ac body=55 status=ok
// SIG undefined FUN_1464ac0ac(void)

void FUN_1464ac0ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53ef8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53ef8 = FUN_140002ddd(FUN_1464abd3b,uVar1,L"TimeOfDayLayer");
  }
  return;
}



// FUNCTION 1464ac0e3 FUN_1464ac0e3 body=49 status=ok
// SIG undefined FUN_1464ac0e3(void)

longlong FUN_1464ac0e3(void)

{
  if (DAT_14cb53ff8 == 0) {
    FUN_14086a14e(&DAT_14cb53ff8,&PTR_FUN_14afd6ec8);
  }
  return DAT_14cb53ff8;
}



// FUNCTION 1464ac114 FUN_1464ac114 body=48 status=ok
// SIG undefined FUN_1464ac114(void)

void FUN_1464ac114(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14afdaa30;
  return;
}



// FUNCTION 1464ac144 FUN_1464ac144 body=58 status=ok
// SIG undefined FUN_1464ac144(void)

void FUN_1464ac144(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afd6200;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1464ac183 FUN_1464ac183 body=47 status=ok
// SIG undefined FUN_1464ac183(void)

longlong FUN_1464ac183(void)

{
  if (DAT_14cb53f10 == 0) {
    FUN_14073dd9a(&DAT_14cb53f10,&PTR_LAB_14afd61b8);
  }
  return DAT_14cb53f10;
}



// FUNCTION 1464ac1b2 FUN_1464ac1b2 body=49 status=ok
// SIG undefined FUN_1464ac1b2(void)

longlong FUN_1464ac1b2(void)

{
  if (DAT_14cb53f20 == 0) {
    FUN_14086a14e(&DAT_14cb53f20,&PTR_FUN_14afd6580);
  }
  return DAT_14cb53f20;
}



// FUNCTION 1464ac1e4 FUN_1464ac1e4 body=48 status=ok
// SIG undefined FUN_1464ac1e4(void)

void FUN_1464ac1e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14afdab90;
  return;
}



// FUNCTION 1464ac214 FUN_1464ac214 body=47 status=ok
// SIG undefined FUN_1464ac214(void)

longlong FUN_1464ac214(void)

{
  if (DAT_14cb53f38 == 0) {
    FUN_14086a14e(&DAT_14cb53f38,&PTR_FUN_14afd6658);
  }
  return DAT_14cb53f38;
}



// FUNCTION 1464ac244 FUN_1464ac244 body=48 status=ok
// SIG undefined FUN_1464ac244(void)

void FUN_1464ac244(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14afdad20;
  return;
}



// FUNCTION 1464ac274 FUN_1464ac274 body=47 status=ok
// SIG undefined FUN_1464ac274(void)

longlong FUN_1464ac274(void)

{
  if (DAT_14cb53f50 == 0) {
    FUN_14086a14e(&DAT_14cb53f50,&PTR_FUN_14afd6740);
  }
  return DAT_14cb53f50;
}



// FUNCTION 1464ac2a4 FUN_1464ac2a4 body=48 status=ok
// SIG undefined FUN_1464ac2a4(void)

void FUN_1464ac2a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14afdaeb0;
  return;
}



// FUNCTION 1464ac2d4 FUN_1464ac2d4 body=47 status=ok
// SIG undefined FUN_1464ac2d4(void)

longlong FUN_1464ac2d4(void)

{
  if (DAT_14cb53f68 == 0) {
    FUN_14086a14e(&DAT_14cb53f68,&PTR_FUN_14afd6820);
  }
  return DAT_14cb53f68;
}



// FUNCTION 1464ac304 FUN_1464ac304 body=48 status=ok
// SIG undefined FUN_1464ac304(void)

void FUN_1464ac304(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14afdb040;
  return;
}



// FUNCTION 1464ac334 FUN_1464ac334 body=47 status=ok
// SIG undefined FUN_1464ac334(void)

longlong FUN_1464ac334(void)

{
  if (DAT_14cb53f80 == 0) {
    FUN_14086a14e(&DAT_14cb53f80,&PTR_FUN_14afd6918);
  }
  return DAT_14cb53f80;
}



// FUNCTION 1464ac364 FUN_1464ac364 body=48 status=ok
// SIG undefined FUN_1464ac364(void)

void FUN_1464ac364(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14afdb1d0;
  return;
}



// FUNCTION 1464ac394 FUN_1464ac394 body=47 status=ok
// SIG undefined FUN_1464ac394(void)

longlong FUN_1464ac394(void)

{
  if (DAT_14cb53f98 == 0) {
    FUN_14086a14e(&DAT_14cb53f98,&PTR_FUN_14afd6a08);
  }
  return DAT_14cb53f98;
}



// FUNCTION 1464ac3c4 FUN_1464ac3c4 body=48 status=ok
// SIG undefined FUN_1464ac3c4(void)

void FUN_1464ac3c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14afdb360;
  return;
}



// FUNCTION 1464ac3f4 FUN_1464ac3f4 body=57 status=ok
// SIG undefined FUN_1464ac3f4(void)

void FUN_1464ac3f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fb8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fb8 = FUN_140002ddd(FUN_1464ac42d,uVar1,L"TimeOfDayPropertyParameterVector4");
  }
  return;
}



// FUNCTION 1464ac42d FUN_1464ac42d body=47 status=ok
// SIG undefined FUN_1464ac42d(void)

longlong FUN_1464ac42d(void)

{
  if (DAT_14cb53fb0 == 0) {
    FUN_14086a14e(&DAT_14cb53fb0,&PTR_FUN_14afd6af8);
  }
  return DAT_14cb53fb0;
}



// FUNCTION 1464ac45c FUN_1464ac45c body=48 status=ok
// SIG undefined FUN_1464ac45c(void)

void FUN_1464ac45c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000030;
  *puVar1 = &PTR_FUN_14afdb4f0;
  return;
}



// FUNCTION 1464ac48c FUN_1464ac48c body=55 status=ok
// SIG undefined FUN_1464ac48c(void)

void FUN_1464ac48c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fd0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fd0 = FUN_140002ddd(FUN_1464ac4c3,uVar1,L"TimeOfDayPropertyParameterObject");
  }
  return;
}



// FUNCTION 1464ac4c3 FUN_1464ac4c3 body=47 status=ok
// SIG undefined FUN_1464ac4c3(void)

longlong FUN_1464ac4c3(void)

{
  if (DAT_14cb53fc8 == 0) {
    FUN_14086a14e(&DAT_14cb53fc8,&PTR_FUN_14afd6be8);
  }
  return DAT_14cb53fc8;
}



// FUNCTION 1464ac4f2 FUN_1464ac4f2 body=48 status=ok
// SIG undefined FUN_1464ac4f2(void)

void FUN_1464ac4f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14afdb680;
  return;
}



// FUNCTION 1464ac522 FUN_1464ac522 body=55 status=ok
// SIG undefined FUN_1464ac522(void)

void FUN_1464ac522(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54000 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb54000 = FUN_140002ddd(FUN_1464ac0e3,uVar1,L"TimeOfDayWeatherState");
  }
  return;
}



// FUNCTION 1464ac55a FUN_1464ac55a body=48 status=ok
// SIG undefined FUN_1464ac55a(void)

void FUN_1464ac55a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14afdb8b0;
  return;
}



// FUNCTION 1464ac58a FUN_1464ac58a body=49 status=ok
// SIG undefined FUN_1464ac58a(void)

longlong FUN_1464ac58a(void)

{
  if (DAT_14cb54038 == 0) {
    FUN_14073dd9a(&DAT_14cb54038,&PTR_LAB_14afd75e0);
  }
  return DAT_14cb54038;
}



// FUNCTION 1464ac5bb FUN_1464ac5bb body=47 status=ok
// SIG undefined FUN_1464ac5bb(void)

longlong FUN_1464ac5bb(void)

{
  if (DAT_14cb54010 == 0) {
    FUN_14000fc22(&DAT_14cb54010,&PTR_FUN_14afd6ff8);
  }
  return DAT_14cb54010;
}



// FUNCTION 1464ac5ea FUN_1464ac5ea body=47 status=ok
// SIG undefined FUN_1464ac5ea(void)

longlong FUN_1464ac5ea(void)

{
  if (DAT_14cb54018 == 0) {
    FUN_14000fc22(&DAT_14cb54018,&PTR_FUN_14afd7140);
  }
  return DAT_14cb54018;
}



// FUNCTION 1464ac619 FUN_1464ac619 body=47 status=ok
// SIG undefined FUN_1464ac619(void)

longlong FUN_1464ac619(void)

{
  if (DAT_14cb54020 == 0) {
    FUN_14000fc22(&DAT_14cb54020,&PTR_FUN_14afd7238);
  }
  return DAT_14cb54020;
}



// FUNCTION 1464ac648 FUN_1464ac648 body=47 status=ok
// SIG undefined FUN_1464ac648(void)

longlong FUN_1464ac648(void)

{
  if (DAT_14cb54028 == 0) {
    FUN_14000fc22(&DAT_14cb54028,&PTR_FUN_14afd72e8);
  }
  return DAT_14cb54028;
}



// FUNCTION 1464ac678 FUN_1464ac678 body=34 status=ok
// SIG undefined FUN_1464ac678(void)

void FUN_1464ac678(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7e910();
  FUN_14069c8d6(uVar1,&PTR_s_EnumerateBaseLayerNames_14afd7330,4);
  return;
}



// FUNCTION 1464ac69a FUN_1464ac69a body=47 status=ok
// SIG undefined FUN_1464ac69a(void)

longlong FUN_1464ac69a(void)

{
  if (DAT_14cb54070 == 0) {
    FUN_14073dd9a(&DAT_14cb54070,&PTR_LAB_14afd7ae8);
  }
  return DAT_14cb54070;
}



// FUNCTION 1464ac6ca FUN_1464ac6ca body=55 status=ok
// SIG undefined FUN_1464ac6ca(void)

void FUN_1464ac6ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54088 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb54088 = FUN_140002ddd(FUN_1464ac701,uVar1,L"WorldTimeOfDayWeatherData");
  }
  return;
}



// FUNCTION 1464ac701 FUN_1464ac701 body=47 status=ok
// SIG undefined FUN_1464ac701(void)

longlong FUN_1464ac701(void)

{
  if (DAT_14cb54080 == 0) {
    FUN_14086a14e(&DAT_14cb54080,&PTR_FUN_14afd7cb8);
  }
  return DAT_14cb54080;
}



// FUNCTION 1464ac730 FUN_1464ac730 body=48 status=ok
// SIG undefined FUN_1464ac730(void)

void FUN_1464ac730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14afdba10;
  return;
}



// FUNCTION 1464ac760 FUN_1464ac760 body=55 status=ok
// SIG undefined FUN_1464ac760(void)

void FUN_1464ac760(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb540a0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb540a0 = FUN_140002ddd(FUN_1464ac797,uVar1,L"WorldTimeOfDayBaseLayerOverride");
  }
  return;
}



// FUNCTION 1464ac797 FUN_1464ac797 body=47 status=ok
// SIG undefined FUN_1464ac797(void)

longlong FUN_1464ac797(void)

{
  if (DAT_14cb54098 == 0) {
    FUN_14086a14e(&DAT_14cb54098,&PTR_FUN_14afd7e38);
  }
  return DAT_14cb54098;
}



// FUNCTION 1464ac7c6 FUN_1464ac7c6 body=48 status=ok
// SIG undefined FUN_1464ac7c6(void)

void FUN_1464ac7c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14afdbb70;
  return;
}



// FUNCTION 1464ac7f6 FUN_1464ac7f6 body=55 status=ok
// SIG undefined FUN_1464ac7f6(void)

void FUN_1464ac7f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb540b8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb540b8 = FUN_140002ddd(FUN_1464ac82d,uVar1,L"TimeOfDayStateSettings");
  }
  return;
}



// FUNCTION 1464ac82d FUN_1464ac82d body=47 status=ok
// SIG undefined FUN_1464ac82d(void)

longlong FUN_1464ac82d(void)

{
  if (DAT_14cb540b0 == 0) {
    FUN_14086a14e(&DAT_14cb540b0,&PTR_FUN_14afd7fe0);
  }
  return DAT_14cb540b0;
}



// FUNCTION 1464ac85c FUN_1464ac85c body=48 status=ok
// SIG undefined FUN_1464ac85c(void)

void FUN_1464ac85c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14afdbcd0;
  return;
}



// FUNCTION 1464ac88c FUN_1464ac88c body=49 status=ok
// SIG undefined FUN_1464ac88c(void)

longlong FUN_1464ac88c(void)

{
  if (DAT_14cb54138 == 0) {
    FUN_14073dd9a(&DAT_14cb54138,&PTR_LAB_14afd99f0);
  }
  return DAT_14cb54138;
}



// FUNCTION 1464ac8bd FUN_1464ac8bd body=47 status=ok
// SIG undefined FUN_1464ac8bd(void)

longlong FUN_1464ac8bd(void)

{
  if (DAT_14cb540c8 == 0) {
    FUN_14000fc22(&DAT_14cb540c8,&PTR_FUN_14afd80a0);
  }
  return DAT_14cb540c8;
}



// FUNCTION 1464ac8ec FUN_1464ac8ec body=47 status=ok
// SIG undefined FUN_1464ac8ec(void)

longlong FUN_1464ac8ec(void)

{
  if (DAT_14cb540d0 == 0) {
    FUN_14000fc22(&DAT_14cb540d0,&PTR_FUN_14afd8150);
  }
  return DAT_14cb540d0;
}



// FUNCTION 1464ac91b FUN_1464ac91b body=47 status=ok
// SIG undefined FUN_1464ac91b(void)

longlong FUN_1464ac91b(void)

{
  if (DAT_14cb540d8 == 0) {
    FUN_14000fc22(&DAT_14cb540d8,&PTR_FUN_14afd81a0);
  }
  return DAT_14cb540d8;
}



// FUNCTION 1464ac94a FUN_1464ac94a body=47 status=ok
// SIG undefined FUN_1464ac94a(void)

longlong FUN_1464ac94a(void)

{
  if (DAT_14cb540e0 == 0) {
    FUN_14000fc22(&DAT_14cb540e0,&PTR_FUN_14afd8208);
  }
  return DAT_14cb540e0;
}



// FUNCTION 1464ac979 FUN_1464ac979 body=47 status=ok
// SIG undefined FUN_1464ac979(void)

longlong FUN_1464ac979(void)

{
  if (DAT_14cb540e8 == 0) {
    FUN_14000fc22(&DAT_14cb540e8,&PTR_FUN_14afd8268);
  }
  return DAT_14cb540e8;
}



// FUNCTION 1464ac9a8 FUN_1464ac9a8 body=47 status=ok
// SIG undefined FUN_1464ac9a8(void)

longlong FUN_1464ac9a8(void)

{
  if (DAT_14cb540f0 == 0) {
    FUN_14000fc22(&DAT_14cb540f0,&PTR_FUN_14afd8318);
  }
  return DAT_14cb540f0;
}



// FUNCTION 1464ac9d7 FUN_1464ac9d7 body=47 status=ok
// SIG undefined FUN_1464ac9d7(void)

longlong FUN_1464ac9d7(void)

{
  if (DAT_14cb540f8 == 0) {
    FUN_14000fc22(&DAT_14cb540f8,&PTR_FUN_14afd83d8);
  }
  return DAT_14cb540f8;
}



// FUNCTION 1464aca06 FUN_1464aca06 body=47 status=ok
// SIG undefined FUN_1464aca06(void)

longlong FUN_1464aca06(void)

{
  if (DAT_14cb54100 == 0) {
    FUN_14000fc22(&DAT_14cb54100,&PTR_FUN_14afd84a8);
  }
  return DAT_14cb54100;
}



// FUNCTION 1464aca35 FUN_1464aca35 body=47 status=ok
// SIG undefined FUN_1464aca35(void)

longlong FUN_1464aca35(void)

{
  if (DAT_14cb54108 == 0) {
    FUN_14000fc22(&DAT_14cb54108,&PTR_FUN_14afd8568);
  }
  return DAT_14cb54108;
}



// FUNCTION 1464aca64 FUN_1464aca64 body=47 status=ok
// SIG undefined FUN_1464aca64(void)

longlong FUN_1464aca64(void)

{
  if (DAT_14cb54110 == 0) {
    FUN_14000fc22(&DAT_14cb54110,&PTR_FUN_14afd8640);
  }
  return DAT_14cb54110;
}



// FUNCTION 1464aca93 FUN_1464aca93 body=47 status=ok
// SIG undefined FUN_1464aca93(void)

longlong FUN_1464aca93(void)

{
  if (DAT_14cb54118 == 0) {
    FUN_14000fc22(&DAT_14cb54118,&PTR_FUN_14afd8718);
  }
  return DAT_14cb54118;
}



// FUNCTION 1464acac2 FUN_1464acac2 body=47 status=ok
// SIG undefined FUN_1464acac2(void)

longlong FUN_1464acac2(void)

{
  if (DAT_14cb54120 == 0) {
    FUN_14000fc22(&DAT_14cb54120,&PTR_FUN_14afd87e0);
  }
  return DAT_14cb54120;
}



// FUNCTION 1464acaf1 FUN_1464acaf1 body=47 status=ok
// SIG undefined FUN_1464acaf1(void)

longlong FUN_1464acaf1(void)

{
  if (DAT_14cb54128 == 0) {
    FUN_14000fc22(&DAT_14cb54128,&PTR_FUN_14afd8868);
  }
  return DAT_14cb54128;
}



// FUNCTION 1464acb20 FUN_1464acb20 body=34 status=ok
// SIG undefined FUN_1464acb20(void)

void FUN_1464acb20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14593f08e();
  FUN_14069c8d6(uVar1,&PTR_s_EnumerateBaseLayerNames_14afd88b0,0xd);
  return;
}



// FUNCTION 1464acb42 FUN_1464acb42 body=40 status=ok
// SIG undefined FUN_1464acb42(void)

undefined8 FUN_1464acb42(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464acb6a FUN_1464acb6a body=40 status=ok
// SIG undefined FUN_1464acb6a(void)

undefined8 FUN_1464acb6a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464acb92 FUN_1464acb92 body=40 status=ok
// SIG undefined FUN_1464acb92(void)

undefined8 FUN_1464acb92(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464acbba FUN_1464acbba body=40 status=ok
// SIG undefined FUN_1464acbba(void)

undefined8 FUN_1464acbba(undefined8 param_1,int param_2)

{
  FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464acbe2 FUN_1464acbe2 body=34 status=ok
// SIG undefined FUN_1464acbe2(void)

undefined8 FUN_1464acbe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acc04 FUN_1464acc04 body=34 status=ok
// SIG undefined FUN_1464acc04(void)

undefined8 FUN_1464acc04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acc26 FUN_1464acc26 body=34 status=ok
// SIG undefined FUN_1464acc26(void)

undefined8 FUN_1464acc26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acc48 FUN_1464acc48 body=34 status=ok
// SIG undefined FUN_1464acc48(void)

undefined8 FUN_1464acc48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acc6a FUN_1464acc6a body=34 status=ok
// SIG undefined FUN_1464acc6a(void)

undefined8 FUN_1464acc6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acc8c FUN_1464acc8c body=34 status=ok
// SIG undefined FUN_1464acc8c(void)

undefined8 FUN_1464acc8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464accae FUN_1464accae body=34 status=ok
// SIG undefined FUN_1464accae(void)

undefined8 FUN_1464accae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464accd0 FUN_1464accd0 body=34 status=ok
// SIG undefined FUN_1464accd0(void)

undefined8 FUN_1464accd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464accf2 FUN_1464accf2 body=34 status=ok
// SIG undefined FUN_1464accf2(void)

undefined8 FUN_1464accf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acd14 FUN_1464acd14 body=34 status=ok
// SIG undefined FUN_1464acd14(void)

undefined8 FUN_1464acd14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acd36 FUN_1464acd36 body=34 status=ok
// SIG undefined FUN_1464acd36(void)

undefined8 FUN_1464acd36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acd58 FUN_1464acd58 body=34 status=ok
// SIG undefined FUN_1464acd58(void)

undefined8 FUN_1464acd58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acd7a FUN_1464acd7a body=34 status=ok
// SIG undefined FUN_1464acd7a(void)

undefined8 FUN_1464acd7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acd9c FUN_1464acd9c body=34 status=ok
// SIG undefined FUN_1464acd9c(void)

undefined8 FUN_1464acd9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acdbe FUN_1464acdbe body=34 status=ok
// SIG undefined FUN_1464acdbe(void)

undefined8 FUN_1464acdbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acde0 FUN_1464acde0 body=34 status=ok
// SIG undefined FUN_1464acde0(void)

undefined8 FUN_1464acde0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464ace02 FUN_1464ace02 body=34 status=ok
// SIG undefined FUN_1464ace02(void)

undefined8 FUN_1464ace02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464ace24 FUN_1464ace24 body=34 status=ok
// SIG undefined FUN_1464ace24(void)

undefined8 FUN_1464ace24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464ace46 FUN_1464ace46 body=34 status=ok
// SIG undefined FUN_1464ace46(void)

undefined8 FUN_1464ace46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464ace68 FUN_1464ace68 body=34 status=ok
// SIG undefined FUN_1464ace68(void)

undefined8 FUN_1464ace68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464ace8a FUN_1464ace8a body=34 status=ok
// SIG undefined FUN_1464ace8a(void)

undefined8 FUN_1464ace8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464aceac FUN_1464aceac body=87 status=ok
// SIG undefined FUN_1464aceac(void)

void FUN_1464aceac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  *(undefined4 *)(param_2 + 2) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464acf04 FUN_1464acf04 body=34 status=ok
// SIG undefined FUN_1464acf04(void)

undefined8 FUN_1464acf04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acf26 FUN_1464acf26 body=34 status=ok
// SIG undefined FUN_1464acf26(void)

undefined8 FUN_1464acf26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acf48 FUN_1464acf48 body=34 status=ok
// SIG undefined FUN_1464acf48(void)

undefined8 FUN_1464acf48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464acf6a FUN_1464acf6a body=231 status=ok
// SIG undefined FUN_1464acf6a(void)

void FUN_1464acf6a(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14afe29f0;
  local_28[3] = &DAT_14cb541b8;
  local_28[4] = FUN_1459cfaae;
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



// FUNCTION 1464ad052 FUN_1464ad052 body=136 status=ok
// SIG undefined FUN_1464ad052(void)

void FUN_1464ad052(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_140115e24();
  lVar4 = *(longlong *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(lVar4 + 0x2cc);
  uVar1 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d1)];
  bVar3 = *(byte *)(lVar4 + 0x2d3);
  uVar2 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d0)];
  *(undefined4 *)(param_1 + 0x5d8) = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d2)];
  *(undefined4 *)(param_1 + 0x5dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  *(float *)(param_1 + 0x5e4) = (float)bVar3 * 0.003921569;
  return;
}



// FUNCTION 1464ad0da FUN_1464ad0da body=136 status=ok
// SIG undefined FUN_1464ad0da(void)

void FUN_1464ad0da(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_140115e24();
  lVar4 = *(longlong *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(lVar4 + 0x2cc);
  uVar1 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d1)];
  bVar3 = *(byte *)(lVar4 + 0x2d3);
  uVar2 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d0)];
  *(undefined4 *)(param_1 + 0x5d8) = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d2)];
  *(undefined4 *)(param_1 + 0x5dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  *(float *)(param_1 + 0x5e4) = (float)bVar3 * 0.003921569;
  return;
}



// FUNCTION 1464ad162 FUN_1464ad162 body=136 status=ok
// SIG undefined FUN_1464ad162(void)

void FUN_1464ad162(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_140115e24();
  lVar4 = *(longlong *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(lVar4 + 0x2cc);
  uVar1 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d1)];
  bVar3 = *(byte *)(lVar4 + 0x2d3);
  uVar2 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d0)];
  *(undefined4 *)(param_1 + 0x5d8) = (&DAT_14c758c60)[*(byte *)(lVar4 + 0x2d2)];
  *(undefined4 *)(param_1 + 0x5dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5e0) = uVar2;
  *(float *)(param_1 + 0x5e4) = (float)bVar3 * 0.003921569;
  return;
}



// FUNCTION 1464ad1ea FUN_1464ad1ea body=550 status=ok
// SIG undefined FUN_1464ad1ea(void)

void FUN_1464ad1ea(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined1 local_180 [16];
  undefined **local_170;
  longlong local_108;
  undefined8 local_f0;
  uint local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((param_2 < 2) &&
     (((param_6 != '\0' || ((char)param_1[(ulonglong)param_2 * 0x12 + 3] != '\x01')) ||
      ((param_3 != (undefined8 *)0x0 && (*(char *)(param_3 + 1) == '\x01')))))) {
    local_f0 = 0;
    local_e8 = local_e8 & 0xffffff00;
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_e0 = &PTR_FUN_14a46be50;
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = 0x7fffffff;
    local_64 = 0;
    if (param_3 == (undefined8 *)0x0) {
      local_68 = *(undefined4 *)((longlong)param_1 + 0xc);
    }
    else {
      local_e8 = *(uint *)(param_3 + 1);
      local_f0 = *param_3;
      FUN_14093c3cc(local_78,param_3 + 0xf);
      local_68 = *(undefined4 *)(param_3 + 0x11);
      local_64 = *(undefined1 *)((longlong)param_3 + 0x8c);
    }
    local_188 = param_5;
    FUN_140da63ea(local_180,param_1 + (ulonglong)param_2 * 0x12 + 2,&local_f0,param_4);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_180);
    local_170 = &PTR_FUN_14a46be50;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    local_170 = &PTR_FUN_14a177080;
    FUN_144a78a1a();
    local_e0 = &PTR_FUN_14a46be50;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    local_e0 = &PTR_FUN_14a177080;
    FUN_144a78a1a(&local_d8);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1464ad412 FUN_1464ad412 body=61 status=ok
// SIG undefined FUN_1464ad412(void)

void FUN_1464ad412(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x130);
    lVar2 = (longlong)*(int *)(param_1 + 0x138) * 0x30;
    do {
      FUN_1400cdace(lVar1,*(undefined4 *)(lVar1 + 0x28));
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1464ad450 FUN_1464ad450 body=61 status=ok
// SIG undefined FUN_1464ad450(void)

void FUN_1464ad450(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x438) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x430);
    lVar2 = (longlong)*(int *)(param_1 + 0x438) * 0x30;
    do {
      FUN_140051c0e(lVar1,*(undefined4 *)(lVar1 + 0x28));
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1464ad48e FUN_1464ad48e body=123 status=ok
// SIG undefined FUN_1464ad48e(void)

void FUN_1464ad48e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x478) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x470);
    lVar1 = (longlong)*(int *)(param_1 + 0x478) * 0x50;
    do {
      local_48 = *(undefined4 *)(lVar2 + 0x30);
      uStack_44 = *(undefined4 *)(lVar2 + 0x34);
      uStack_40 = *(undefined4 *)(lVar2 + 0x38);
      uStack_3c = *(undefined4 *)(lVar2 + 0x3c);
      local_38 = *(undefined4 *)(lVar2 + 0x40);
      uStack_34 = *(undefined4 *)(lVar2 + 0x44);
      uStack_30 = *(undefined4 *)(lVar2 + 0x48);
      uStack_2c = *(undefined4 *)(lVar2 + 0x4c);
      FUN_140316910(lVar2,&local_48);
      lVar2 = lVar2 + 0x50;
      lVar1 = lVar1 + -0x50;
    } while (lVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464ad50a FUN_1464ad50a body=107 status=ok
// SIG undefined FUN_1464ad50a(void)

void FUN_1464ad50a(longlong *param_1,uint param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  ulonglong uVar1;
  
  if (param_2 < 2) {
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001464ad52d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))(param_1);
      return;
    }
    if (param_6 != '\0') {
      uVar1 = (ulonglong)param_2;
      FUN_14093d487(param_1[uVar1 * 2 + 10],(int)param_1[uVar1 * 2 + 0xb]);
      *(undefined4 *)(param_1 + uVar1 * 2 + 0xb) = 0;
      if (*(int *)((longlong)param_1 + uVar1 * 0x10 + 0x5c) != 0) {
        FUN_14093d50a(param_1 + uVar1 * 2 + 10);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1464ad576 FUN_1464ad576 body=107 status=ok
// SIG undefined FUN_1464ad576(void)

void FUN_1464ad576(undefined8 param_1)

{
  FUN_145c0c0ca(&DAT_14cb543b8,param_1);
  FUN_140457ffc(&DAT_14cade100,param_1);
  FUN_140457ffc(&DAT_14cade118,param_1);
  FUN_14126849c(&DAT_14cb10ae8,param_1);
  if (DAT_14cb541e0 != 0) {
    FUN_140457ffc(DAT_14cb541e0 + 0x380,param_1);
    return;
  }
  return;
}



// FUNCTION 1464ad5e2 FUN_1464ad5e2 body=83 status=ok
// SIG undefined FUN_1464ad5e2(void)

longlong FUN_1464ad5e2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x228);
  lVar2 = param_1 + 0x238;
  if (cVar1 != '\0') {
    lVar2 = param_1 + 0x228;
  }
  lVar2 = FUN_14479d2ce(lVar2);
  lVar3 = lVar2 + 0x3a0;
  if (cVar1 != '\0') {
    lVar3 = lVar2 + 0x3c8;
  }
  if (lVar2 != 0) {
    lVar2 = lVar3;
  }
  return lVar2;
}



// FUNCTION 1464ad636 FUN_1464ad636 body=353 status=ok
// SIG undefined FUN_1464ad636(void)

void FUN_1464ad636(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  wchar_t *local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_48,L"TimeOfDay",1);
  uVar1 = FUN_14593f08e();
  FUN_14593f08e();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_48);
  local_38 = 0;
  local_48 = 0;
  uStack_40 = CONCAT71(uStack_40._1_7_,1);
  local_60 = L"CycleCount";
  local_58 = &DAT_10000000c;
  FUN_140c2c993(&local_60,param_2,&local_48);
  local_60 = L"bTimeOfDayPaused";
  local_58 = (undefined1 *)0x10000000d;
  FUN_140c2c993(&local_60,param_2,&local_48);
  local_60 = L"WorldBaseLayerOverrides";
  local_58 = &DAT_10000000f;
  FUN_140c2c993(&local_60,param_2,&local_48);
  local_50 = 0;
  local_60 = (wchar_t *)0x8;
  local_58 = (undefined1 *)CONCAT71(local_58._1_7_,1);
  local_70 = L"WorldWeatherData";
  local_68 = 0x10000000e;
  FUN_140c2c993(&local_70,param_2,&local_60);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464ad7ba FUN_1464ad7ba body=53 status=ok
// SIG undefined FUN_1464ad7ba(void)

void FUN_1464ad7ba(longlong *param_1)

{
  FUN_1458e51b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1464ad7f0 FUN_1464ad7f0 body=53 status=ok
// SIG undefined FUN_1464ad7f0(void)

void FUN_1464ad7f0(longlong *param_1)

{
  FUN_14594efe0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1464ad826 FUN_1464ad826 body=53 status=ok
// SIG undefined FUN_1464ad826(void)

void FUN_1464ad826(longlong *param_1)

{
  FUN_14571d7ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1464ad85c FUN_1464ad85c body=53 status=ok
// SIG undefined FUN_1464ad85c(void)

void FUN_1464ad85c(longlong *param_1)

{
  FUN_1459a2e5a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1464ad892 FUN_1464ad892 body=29 status=ok
// SIG undefined FUN_1464ad892(void)

undefined8 FUN_1464ad892(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ad8b0 FUN_1464ad8b0 body=29 status=ok
// SIG undefined FUN_1464ad8b0(void)

undefined8 FUN_1464ad8b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ad8ce FUN_1464ad8ce body=74 status=ok
// SIG undefined FUN_1464ad8ce(void)

void FUN_1464ad8ce(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afdfc10;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x270;
  do {
    FUN_140b623da(param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x1b0);
  return;
}



// FUNCTION 1464ad918 FUN_1464ad918 body=29 status=ok
// SIG undefined FUN_1464ad918(void)

undefined8 FUN_1464ad918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ad936 FUN_1464ad936 body=93 status=ok
// SIG undefined FUN_1464ad936(void)

undefined8 * FUN_1464ad936(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b62557(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140d3a6ce(param_1,iVar1);
      FUN_140d3a320(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1464ad994 FUN_1464ad994 body=93 status=ok
// SIG undefined FUN_1464ad994(void)

void FUN_1464ad994(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe29f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464ad9f2 FUN_1464ad9f2 body=29 status=ok
// SIG undefined FUN_1464ad9f2(void)

undefined8 FUN_1464ad9f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ada10 FUN_1464ada10 body=85 status=ok
// SIG undefined FUN_1464ada10(void)

void FUN_1464ada10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe33b0;
  return;
}



// FUNCTION 1464ada66 FUN_1464ada66 body=29 status=ok
// SIG undefined FUN_1464ada66(void)

undefined8 FUN_1464ada66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464ada84 FUN_1464ada84 body=29 status=ok
// SIG undefined FUN_1464ada84(void)

undefined8 FUN_1464ada84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464adaa2 FUN_1464adaa2 body=48 status=ok
// SIG undefined FUN_1464adaa2(void)

void FUN_1464adaa2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1464adad2 FUN_1464adad2 body=48 status=ok
// SIG undefined FUN_1464adad2(void)

void FUN_1464adad2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1464adb02 FUN_1464adb02 body=48 status=ok
// SIG undefined FUN_1464adb02(void)

void FUN_1464adb02(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 1464adb32 FUN_1464adb32 body=146 status=ok
// SIG undefined FUN_1464adb32(void)

void FUN_1464adb32(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1464adbc6 FUN_1464adbc6 body=29 status=ok
// SIG undefined FUN_1464adbc6(void)

undefined8 FUN_1464adbc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464adbe4 FUN_1464adbe4 body=29 status=ok
// SIG undefined FUN_1464adbe4(void)

undefined8 FUN_1464adbe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464adc02 FUN_1464adc02 body=29 status=ok
// SIG undefined FUN_1464adc02(void)

undefined8 FUN_1464adc02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464adc20 FUN_1464adc20 body=29 status=ok
// SIG undefined FUN_1464adc20(void)

undefined8 FUN_1464adc20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464adc3e FUN_1464adc3e body=349 status=ok
// SIG undefined FUN_1464adc3e(void)

undefined4 * FUN_1464adc3e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d2e3e2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145d2e31e(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d2e4c8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464add9c FUN_1464add9c body=29 status=ok
// SIG undefined FUN_1464add9c(void)

undefined8 FUN_1464add9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464addba FUN_1464addba body=29 status=ok
// SIG undefined FUN_1464addba(void)

undefined8 FUN_1464addba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464addd8 FUN_1464addd8 body=29 status=ok
// SIG undefined FUN_1464addd8(void)

undefined8 FUN_1464addd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464addf6 FUN_1464addf6 body=26 status=ok
// SIG undefined FUN_1464addf6(void)

bool FUN_1464addf6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1464ade10 FUN_1464ade10 body=24 status=ok
// SIG undefined FUN_1464ade10(void)

bool FUN_1464ade10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1464ade28 FUN_1464ade28 body=101 status=ok
// SIG undefined FUN_1464ade28(void)

void FUN_1464ade28(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe32b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1464ade8e FUN_1464ade8e body=26 status=ok
// SIG undefined FUN_1464ade8e(void)

bool FUN_1464ade8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1464adea8 FUN_1464adea8 body=24 status=ok
// SIG undefined FUN_1464adea8(void)

bool FUN_1464adea8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1464adec0 FUN_1464adec0 body=101 status=ok
// SIG undefined FUN_1464adec0(void)

void FUN_1464adec0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe3320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1464adf25 FUN_1464adf25 body=49 status=ok
// SIG undefined FUN_1464adf25(void)

longlong FUN_1464adf25(void)

{
  if (DAT_14cb54800 == 0) {
    FUN_14086a14e(&DAT_14cb54800,&PTR_FUN_14afe4408);
  }
  return DAT_14cb54800;
}



// FUNCTION 1464adf56 FUN_1464adf56 body=48 status=ok
// SIG undefined FUN_1464adf56(void)

void FUN_1464adf56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14afe4520;
  return;
}



// FUNCTION 1464adf86 FUN_1464adf86 body=29 status=ok
// SIG undefined FUN_1464adf86(void)

undefined8 FUN_1464adf86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464adfa3 FUN_1464adfa3 body=47 status=ok
// SIG undefined FUN_1464adfa3(void)

longlong FUN_1464adfa3(void)

{
  if (DAT_14cb54848 == 0) {
    FUN_14073dd9a(&DAT_14cb54848,&PTR_LAB_14afe46f8);
  }
  return DAT_14cb54848;
}



// FUNCTION 1464adfd2 FUN_1464adfd2 body=47 status=ok
// SIG undefined FUN_1464adfd2(void)

longlong FUN_1464adfd2(void)

{
  if (DAT_14cb54858 == 0) {
    FUN_1409ce572(&DAT_14cb54858,&PTR_FUN_14afe4790);
  }
  return DAT_14cb54858;
}



// FUNCTION 1464ae001 FUN_1464ae001 body=47 status=ok
// SIG undefined FUN_1464ae001(void)

longlong FUN_1464ae001(void)

{
  if (DAT_14cb54870 == 0) {
    FUN_1409ce572(&DAT_14cb54870,&PTR_FUN_14afe4800);
  }
  return DAT_14cb54870;
}



// FUNCTION 1464ae030 FUN_1464ae030 body=47 status=ok
// SIG undefined FUN_1464ae030(void)

longlong FUN_1464ae030(void)

{
  if (DAT_14cb54888 == 0) {
    FUN_1409ce572(&DAT_14cb54888,&PTR_FUN_14afe4870);
  }
  return DAT_14cb54888;
}



// FUNCTION 1464ae05f FUN_1464ae05f body=49 status=ok
// SIG undefined FUN_1464ae05f(void)

longlong FUN_1464ae05f(void)

{
  if (DAT_14cb548a0 == 0) {
    FUN_14086a14e(&DAT_14cb548a0,&PTR_FUN_14afe4e48);
  }
  return DAT_14cb548a0;
}



// FUNCTION 1464ae090 FUN_1464ae090 body=47 status=ok
// SIG undefined FUN_1464ae090(void)

longlong FUN_1464ae090(void)

{
  if (DAT_14cb54900 == 0) {
    FUN_14086a14e(&DAT_14cb54900,&PTR_FUN_14afe58a0);
  }
  return DAT_14cb54900;
}



// FUNCTION 1464ae0bf FUN_1464ae0bf body=49 status=ok
// SIG undefined FUN_1464ae0bf(void)

longlong FUN_1464ae0bf(void)

{
  if (DAT_14cb54918 == 0) {
    FUN_14086a14e(&DAT_14cb54918,&PTR_FUN_14afe5978);
  }
  return DAT_14cb54918;
}



// FUNCTION 1464ae0f0 FUN_1464ae0f0 body=48 status=ok
// SIG undefined FUN_1464ae0f0(void)

void FUN_1464ae0f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d0;
  *puVar1 = &PTR_FUN_14afefb00;
  return;
}



// FUNCTION 1464ae120 FUN_1464ae120 body=90 status=ok
// SIG undefined FUN_1464ae120(void)

void FUN_1464ae120(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406046aa(puVar1);
  *puVar1 = &PTR_FUN_14afe50b0;
  puVar1[5] = &PTR_LAB_14afe53b0;
  puVar1[6] = &PTR_LAB_14afe53e0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0x3860a972;
  puVar1[0x18] = 0;
  return;
}



// FUNCTION 1464ae17a FUN_1464ae17a body=47 status=ok
// SIG undefined FUN_1464ae17a(void)

longlong FUN_1464ae17a(void)

{
  if (DAT_14cb548c0 == 0) {
    FUN_14073dd9a(&DAT_14cb548c0,&PTR_LAB_14afe5068);
  }
  return DAT_14cb548c0;
}



// FUNCTION 1464ae1a9 FUN_1464ae1a9 body=47 status=ok
// SIG undefined FUN_1464ae1a9(void)

longlong FUN_1464ae1a9(void)

{
  if (DAT_14cb548d8 == 0) {
    FUN_14073dd9a(&DAT_14cb548d8,&PTR_LAB_14afe54a8);
  }
  return DAT_14cb548d8;
}



// FUNCTION 1464ae1d8 FUN_1464ae1d8 body=47 status=ok
// SIG undefined FUN_1464ae1d8(void)

longlong FUN_1464ae1d8(void)

{
  if (DAT_14cb548e8 == 0) {
    FUN_1409ce572(&DAT_14cb548e8,&PTR_FUN_14afe5540);
  }
  return DAT_14cb548e8;
}



// FUNCTION 1464ae208 FUN_1464ae208 body=48 status=ok
// SIG undefined FUN_1464ae208(void)

void FUN_1464ae208(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000140;
  *puVar1 = &PTR_FUN_14afefd40;
  return;
}



// FUNCTION 1464ae238 FUN_1464ae238 body=55 status=ok
// SIG undefined FUN_1464ae238(void)

void FUN_1464ae238(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54920 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54920 = FUN_140002ddd(FUN_1464ae0bf,uVar1,L"ActivityTags");
  }
  return;
}



// FUNCTION 1464ae270 FUN_1464ae270 body=48 status=ok
// SIG undefined FUN_1464ae270(void)

void FUN_1464ae270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14afefec0;
  return;
}



// FUNCTION 1464ae2a0 FUN_1464ae2a0 body=49 status=ok
// SIG undefined FUN_1464ae2a0(void)

longlong FUN_1464ae2a0(void)

{
  if (DAT_14cb54930 == 0) {
    FUN_1409ce572(&DAT_14cb54930,&PTR_FUN_14afe5a30);
  }
  return DAT_14cb54930;
}



// FUNCTION 1464ae2d1 FUN_1464ae2d1 body=49 status=ok
// SIG undefined FUN_1464ae2d1(void)

longlong FUN_1464ae2d1(void)

{
  if (DAT_14cb54948 == 0) {
    FUN_1409ce572(&DAT_14cb54948,&PTR_FUN_14afe5aa0);
  }
  return DAT_14cb54948;
}



// FUNCTION 1464ae307 FUN_1464ae307 body=49 status=ok
// SIG undefined FUN_1464ae307(void)

longlong FUN_1464ae307(void)

{
  if (DAT_14cb54968 == 0) {
    FUN_14073dd9a(&DAT_14cb54968,&PTR_LAB_14afe5b68);
  }
  return DAT_14cb54968;
}



// FUNCTION 1464ae338 FUN_1464ae338 body=55 status=ok
// SIG undefined FUN_1464ae338(void)

void FUN_1464ae338(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54980 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54980 = FUN_140002ddd(FUN_1464ae36f,uVar1,L"AIHeldProjectileDef");
  }
  return;
}



// FUNCTION 1464ae36f FUN_1464ae36f body=47 status=ok
// SIG undefined FUN_1464ae36f(void)

longlong FUN_1464ae36f(void)

{
  if (DAT_14cb54978 == 0) {
    FUN_14086a14e(&DAT_14cb54978,&PTR_FUN_14afe6988);
  }
  return DAT_14cb54978;
}



// FUNCTION 1464ae39e FUN_1464ae39e body=48 status=ok
// SIG undefined FUN_1464ae39e(void)

void FUN_1464ae39e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000006f0;
  *puVar1 = &PTR_FUN_14aff0150;
  return;
}



// FUNCTION 1464ae3ce FUN_1464ae3ce body=47 status=ok
// SIG undefined FUN_1464ae3ce(void)

longlong FUN_1464ae3ce(void)

{
  if (DAT_14cb54998 == 0) {
    FUN_14073dd9a(&DAT_14cb54998,&PTR_LAB_14afe6a48);
  }
  return DAT_14cb54998;
}



// FUNCTION 1464ae3fd FUN_1464ae3fd body=47 status=ok
// SIG undefined FUN_1464ae3fd(void)

longlong FUN_1464ae3fd(void)

{
  if (DAT_14cb549b0 == 0) {
    FUN_14073dd9a(&DAT_14cb549b0,&PTR_LAB_14afe7868);
  }
  return DAT_14cb549b0;
}



// FUNCTION 1464ae42c FUN_1464ae42c body=47 status=ok
// SIG undefined FUN_1464ae42c(void)

longlong FUN_1464ae42c(void)

{
  if (DAT_14cb549c8 == 0) {
    FUN_14073dd9a(&DAT_14cb549c8,&PTR_LAB_14afe8678);
  }
  return DAT_14cb549c8;
}



// FUNCTION 1464ae45c FUN_1464ae45c body=55 status=ok
// SIG undefined FUN_1464ae45c(void)

void FUN_1464ae45c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb549e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb549e0 = FUN_140002ddd(FUN_1464ae493,uVar1,L"AimAssistSmoothingProperties");
  }
  return;
}



// FUNCTION 1464ae493 FUN_1464ae493 body=47 status=ok
// SIG undefined FUN_1464ae493(void)

longlong FUN_1464ae493(void)

{
  if (DAT_14cb549d8 == 0) {
    FUN_14086a14e(&DAT_14cb549d8,&PTR_FUN_14afe9558);
  }
  return DAT_14cb549d8;
}



// FUNCTION 1464ae4c2 FUN_1464ae4c2 body=48 status=ok
// SIG undefined FUN_1464ae4c2(void)

void FUN_1464ae4c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14aff02b0;
  return;
}



// FUNCTION 1464ae4f2 FUN_1464ae4f2 body=47 status=ok
// SIG undefined FUN_1464ae4f2(void)

longlong FUN_1464ae4f2(void)

{
  if (DAT_14cb549f0 == 0) {
    FUN_14086a14e(&DAT_14cb549f0,&PTR_FUN_14afe95b8);
  }
  return DAT_14cb549f0;
}



// FUNCTION 1464ae522 FUN_1464ae522 body=48 status=ok
// SIG undefined FUN_1464ae522(void)

void FUN_1464ae522(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14aff0410;
  return;
}



// FUNCTION 1464ae56d FUN_1464ae56d body=47 status=ok
// SIG undefined FUN_1464ae56d(void)

longlong FUN_1464ae56d(void)

{
  if (DAT_14cb54a10 == 0) {
    FUN_14073dd9a(&DAT_14cb54a10,&PTR_LAB_14afe9688);
  }
  return DAT_14cb54a10;
}



// FUNCTION 1464ae59c FUN_1464ae59c body=47 status=ok
// SIG undefined FUN_1464ae59c(void)

longlong FUN_1464ae59c(void)

{
  if (DAT_14cb54a28 == 0) {
    FUN_14073dd9a(&DAT_14cb54a28,&PTR_LAB_14afe97d8);
  }
  return DAT_14cb54a28;
}



// FUNCTION 1464ae5cb FUN_1464ae5cb body=47 status=ok
// SIG undefined FUN_1464ae5cb(void)

longlong FUN_1464ae5cb(void)

{
  if (DAT_14cb54a40 == 0) {
    FUN_14073dd9a(&DAT_14cb54a40,&PTR_LAB_14afe9d08);
  }
  return DAT_14cb54a40;
}



// FUNCTION 1464ae5fa FUN_1464ae5fa body=47 status=ok
// SIG undefined FUN_1464ae5fa(void)

longlong FUN_1464ae5fa(void)

{
  if (DAT_14cb54a58 == 0) {
    FUN_14073dd9a(&DAT_14cb54a58,&PTR_LAB_14afe9e18);
  }
  return DAT_14cb54a58;
}



// FUNCTION 1464ae629 FUN_1464ae629 body=47 status=ok
// SIG undefined FUN_1464ae629(void)

longlong FUN_1464ae629(void)

{
  if (DAT_14cb54a70 == 0) {
    FUN_14073dd9a(&DAT_14cb54a70,&PTR_LAB_14afe9fe8);
  }
  return DAT_14cb54a70;
}



// FUNCTION 1464ae658 FUN_1464ae658 body=47 status=ok
// SIG undefined FUN_1464ae658(void)

longlong FUN_1464ae658(void)

{
  if (DAT_14cb54a88 == 0) {
    FUN_14073dd9a(&DAT_14cb54a88,&PTR_LAB_14afea6b8);
  }
  return DAT_14cb54a88;
}



// FUNCTION 1464ae687 FUN_1464ae687 body=47 status=ok
// SIG undefined FUN_1464ae687(void)

longlong FUN_1464ae687(void)

{
  if (DAT_14cb54aa0 == 0) {
    FUN_14073dd9a(&DAT_14cb54aa0,&PTR_LAB_14afea7d8);
  }
  return DAT_14cb54aa0;
}



// FUNCTION 1464ae6b6 FUN_1464ae6b6 body=47 status=ok
// SIG undefined FUN_1464ae6b6(void)

longlong FUN_1464ae6b6(void)

{
  if (DAT_14cb54ab8 == 0) {
    FUN_14073dd9a(&DAT_14cb54ab8,&PTR_LAB_14afea8a8);
  }
  return DAT_14cb54ab8;
}



// FUNCTION 1464ae6e5 FUN_1464ae6e5 body=47 status=ok
// SIG undefined FUN_1464ae6e5(void)

longlong FUN_1464ae6e5(void)

{
  if (DAT_14cb54ad0 == 0) {
    FUN_14073dd9a(&DAT_14cb54ad0,&PTR_LAB_14afeaaa8);
  }
  return DAT_14cb54ad0;
}



// FUNCTION 1464ae714 FUN_1464ae714 body=47 status=ok
// SIG undefined FUN_1464ae714(void)

longlong FUN_1464ae714(void)

{
  if (DAT_14cb54ae8 == 0) {
    FUN_14073dd9a(&DAT_14cb54ae8,&PTR_LAB_14afeab98);
  }
  return DAT_14cb54ae8;
}



// FUNCTION 1464ae743 FUN_1464ae743 body=52 status=ok
// SIG undefined FUN_1464ae743(void)

void FUN_1464ae743(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14056a6b6(puVar1);
  *puVar1 = &PTR_FUN_14afeae10;
  puVar1[0x24] = 0;
  *(undefined2 *)(puVar1 + 0x25) = 1;
  return;
}



// FUNCTION 1464ae777 FUN_1464ae777 body=47 status=ok
// SIG undefined FUN_1464ae777(void)

longlong FUN_1464ae777(void)

{
  if (DAT_14cb54b00 == 0) {
    FUN_14073dd9a(&DAT_14cb54b00,&PTR_LAB_14afeadc8);
  }
  return DAT_14cb54b00;
}



// FUNCTION 1464ae7a6 FUN_1464ae7a6 body=42 status=ok
// SIG undefined FUN_1464ae7a6(void)

void FUN_1464ae7a6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afeb210;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 1464ae7d0 FUN_1464ae7d0 body=47 status=ok
// SIG undefined FUN_1464ae7d0(void)

longlong FUN_1464ae7d0(void)

{
  if (DAT_14cb54b18 == 0) {
    FUN_14073dd9a(&DAT_14cb54b18,&PTR_LAB_14afeb1c8);
  }
  return DAT_14cb54b18;
}



// FUNCTION 1464ae7ff FUN_1464ae7ff body=50 status=ok
// SIG undefined FUN_1464ae7ff(void)

void FUN_1464ae7ff(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14afeb660;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



// FUNCTION 1464ae831 FUN_1464ae831 body=47 status=ok
// SIG undefined FUN_1464ae831(void)

longlong FUN_1464ae831(void)

{
  if (DAT_14cb54b30 == 0) {
    FUN_14073dd9a(&DAT_14cb54b30,&PTR_LAB_14afeb618);
  }
  return DAT_14cb54b30;
}



// FUNCTION 1464ae860 FUN_1464ae860 body=47 status=ok
// SIG undefined FUN_1464ae860(void)

longlong FUN_1464ae860(void)

{
  if (DAT_14cb54b48 == 0) {
    FUN_14073dd9a(&DAT_14cb54b48,&PTR_LAB_14afeba28);
  }
  return DAT_14cb54b48;
}



// FUNCTION 1464ae88f FUN_1464ae88f body=52 status=ok
// SIG undefined FUN_1464ae88f(void)

void FUN_1464ae88f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141083b66(puVar1);
  *puVar1 = &PTR_FUN_14afebf60;
  puVar1[0x1a] = 0;
  *(undefined2 *)(puVar1 + 0x1b) = 1;
  return;
}



// FUNCTION 1464ae8c3 FUN_1464ae8c3 body=47 status=ok
// SIG undefined FUN_1464ae8c3(void)

longlong FUN_1464ae8c3(void)

{
  if (DAT_14cb54b60 == 0) {
    FUN_14073dd9a(&DAT_14cb54b60,&PTR_LAB_14afebf18);
  }
  return DAT_14cb54b60;
}



// FUNCTION 1464ae8f2 FUN_1464ae8f2 body=47 status=ok
// SIG undefined FUN_1464ae8f2(void)

longlong FUN_1464ae8f2(void)

{
  if (DAT_14cb54b70 == 0) {
    FUN_14086a14e(&DAT_14cb54b70,&PTR_FUN_14afec520);
  }
  return DAT_14cb54b70;
}



// FUNCTION 1464ae922 FUN_1464ae922 body=48 status=ok
// SIG undefined FUN_1464ae922(void)

void FUN_1464ae922(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14aff0590;
  return;
}



// FUNCTION 1464ae952 FUN_1464ae952 body=55 status=ok
// SIG undefined FUN_1464ae952(void)

void FUN_1464ae952(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54b90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54b90 = FUN_140002ddd(FUN_1464ae989,uVar1,L"AvatarAspectGameData");
  }
  return;
}



// FUNCTION 1464ae989 FUN_1464ae989 body=47 status=ok
// SIG undefined FUN_1464ae989(void)

longlong FUN_1464ae989(void)

{
  if (DAT_14cb54b88 == 0) {
    FUN_14086a14e(&DAT_14cb54b88,&PTR_FUN_14afec5c8);
  }
  return DAT_14cb54b88;
}



// FUNCTION 1464ae9b8 FUN_1464ae9b8 body=48 status=ok
// SIG undefined FUN_1464ae9b8(void)

void FUN_1464ae9b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14aff0760;
  return;
}



// FUNCTION 1464ae9e8 FUN_1464ae9e8 body=49 status=ok
// SIG undefined FUN_1464ae9e8(void)

longlong FUN_1464ae9e8(void)

{
  if (DAT_14cb54ba0 == 0) {
    FUN_14086a14e(&DAT_14cb54ba0,&PTR_FUN_14afec6d0);
  }
  return DAT_14cb54ba0;
}



// FUNCTION 1464aea1a FUN_1464aea1a body=48 status=ok
// SIG undefined FUN_1464aea1a(void)

void FUN_1464aea1a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14aff08e0;
  return;
}



// FUNCTION 1464aea4a FUN_1464aea4a body=55 status=ok
// SIG undefined FUN_1464aea4a(void)

void FUN_1464aea4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54bc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54bc0 = FUN_140002ddd(FUN_1464aea81,uVar1,L"AvatarMaterialSlot");
  }
  return;
}



// FUNCTION 1464aea81 FUN_1464aea81 body=47 status=ok
// SIG undefined FUN_1464aea81(void)

longlong FUN_1464aea81(void)

{
  if (DAT_14cb54bb8 == 0) {
    FUN_14086a14e(&DAT_14cb54bb8,&PTR_FUN_14afec9b0);
  }
  return DAT_14cb54bb8;
}



// FUNCTION 1464aeab0 FUN_1464aeab0 body=48 status=ok
// SIG undefined FUN_1464aeab0(void)

void FUN_1464aeab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a8;
  *puVar1 = &PTR_FUN_14aff0a90;
  return;
}



// FUNCTION 1464aeae0 FUN_1464aeae0 body=55 status=ok
// SIG undefined FUN_1464aeae0(void)

void FUN_1464aeae0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54bd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54bd8 = FUN_140002ddd(FUN_1464aeb17,uVar1,L"AvatarViewableFeatureState");
  }
  return;
}



// FUNCTION 1464aeb17 FUN_1464aeb17 body=47 status=ok
// SIG undefined FUN_1464aeb17(void)

longlong FUN_1464aeb17(void)

{
  if (DAT_14cb54bd0 == 0) {
    FUN_14086a14e(&DAT_14cb54bd0,&PTR_FUN_14afeca40);
  }
  return DAT_14cb54bd0;
}



// FUNCTION 1464aeb46 FUN_1464aeb46 body=48 status=ok
// SIG undefined FUN_1464aeb46(void)

void FUN_1464aeb46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14aff0c00;
  return;
}



// FUNCTION 1464aeb76 FUN_1464aeb76 body=55 status=ok
// SIG undefined FUN_1464aeb76(void)

void FUN_1464aeb76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54bf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54bf0 = FUN_140002ddd(FUN_1464aebad,uVar1,L"AvatarOptionFeature");
  }
  return;
}



// FUNCTION 1464aebad FUN_1464aebad body=49 status=ok
// SIG undefined FUN_1464aebad(void)

longlong FUN_1464aebad(void)

{
  if (DAT_14cb54be8 == 0) {
    FUN_14086a14e(&DAT_14cb54be8,&PTR_FUN_14afecaf8);
  }
  return DAT_14cb54be8;
}



// FUNCTION 1464aebde FUN_1464aebde body=48 status=ok
// SIG undefined FUN_1464aebde(void)

void FUN_1464aebde(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14aff0d90;
  return;
}



// FUNCTION 1464aec0e FUN_1464aec0e body=55 status=ok
// SIG undefined FUN_1464aec0e(void)

void FUN_1464aec0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54c08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54c08 = FUN_140002ddd(FUN_1464aec45,uVar1,L"AvatarOptionFeatureByAspect");
  }
  return;
}



// FUNCTION 1464aec45 FUN_1464aec45 body=49 status=ok
// SIG undefined FUN_1464aec45(void)

longlong FUN_1464aec45(void)

{
  if (DAT_14cb54c00 == 0) {
    FUN_14086a14e(&DAT_14cb54c00,&PTR_FUN_14afecb88);
  }
  return DAT_14cb54c00;
}


