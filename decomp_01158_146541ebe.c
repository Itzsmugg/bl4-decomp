// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146541ebe FUN_146541ebe body=48 status=ok
// SIG undefined FUN_146541ebe(void)

void FUN_146541ebe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e04a0;
  return;
}



// FUNCTION 146541eee FUN_146541eee body=35 status=ok
// SIG undefined FUN_146541eee(void)

void FUN_146541eee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3dae30;
  return;
}



// FUNCTION 146541f16 FUN_146541f16 body=47 status=ok
// SIG undefined FUN_146541f16(void)

longlong FUN_146541f16(void)

{
  if (DAT_14cb6f950 == 0) {
    FUN_14073dd9a(&DAT_14cb6f950,&PTR_LAB_14b3dade8);
  }
  return DAT_14cb6f950;
}



// FUNCTION 146541f45 FUN_146541f45 body=47 status=ok
// SIG undefined FUN_146541f45(void)

longlong FUN_146541f45(void)

{
  if (DAT_14cb6f960 == 0) {
    FUN_14086a14e(&DAT_14cb6f960,&PTR_FUN_14b3db2e0);
  }
  return DAT_14cb6f960;
}



// FUNCTION 146541f74 FUN_146541f74 body=48 status=ok
// SIG undefined FUN_146541f74(void)

void FUN_146541f74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b3e0600;
  return;
}



// FUNCTION 146541fa4 FUN_146541fa4 body=47 status=ok
// SIG undefined FUN_146541fa4(void)

longlong FUN_146541fa4(void)

{
  if (DAT_14cb6f988 == 0) {
    FUN_14073dd9a(&DAT_14cb6f988,&PTR_LAB_14b3db4f0);
  }
  return DAT_14cb6f988;
}



// FUNCTION 146541fd3 FUN_146541fd3 body=47 status=ok
// SIG undefined FUN_146541fd3(void)

longlong FUN_146541fd3(void)

{
  if (DAT_14cb6f978 == 0) {
    FUN_14000fc22(&DAT_14cb6f978,&PTR_FUN_14b3db438);
  }
  return DAT_14cb6f978;
}



// FUNCTION 146542002 FUN_146542002 body=34 status=ok
// SIG undefined FUN_146542002(void)

void FUN_146542002(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a858ba();
  FUN_14069c8d6(uVar1,&PTR_s_LockUsableInteractability_14b3db480,1);
  return;
}



// FUNCTION 146542024 FUN_146542024 body=35 status=ok
// SIG undefined FUN_146542024(void)

void FUN_146542024(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3db530;
  return;
}



// FUNCTION 146542048 FUN_146542048 body=55 status=ok
// SIG undefined FUN_146542048(void)

void FUN_146542048(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f9b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f9b8 = FUN_140002ddd(FUN_146541c76,uVar1,L"UseEvent");
  }
  return;
}



// FUNCTION 146542080 FUN_146542080 body=48 status=ok
// SIG undefined FUN_146542080(void)

void FUN_146542080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b3e0760;
  return;
}



// FUNCTION 1465420b0 FUN_1465420b0 body=55 status=ok
// SIG undefined FUN_1465420b0(void)

void FUN_1465420b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f9d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f9d0 = FUN_140002ddd(FUN_1465420e7,uVar1,L"UserDefinedMissionBinderInfo");
  }
  return;
}



// FUNCTION 1465420e7 FUN_1465420e7 body=47 status=ok
// SIG undefined FUN_1465420e7(void)

longlong FUN_1465420e7(void)

{
  if (DAT_14cb6f9c8 == 0) {
    FUN_14086a14e(&DAT_14cb6f9c8,&PTR_FUN_14b3dbfa8);
  }
  return DAT_14cb6f9c8;
}



// FUNCTION 146542116 FUN_146542116 body=48 status=ok
// SIG undefined FUN_146542116(void)

void FUN_146542116(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b3e08c0;
  return;
}



// FUNCTION 146542146 FUN_146542146 body=55 status=ok
// SIG undefined FUN_146542146(void)

void FUN_146542146(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f9e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f9e8 = FUN_140002ddd(FUN_14654217d,uVar1,L"VariantDetailsCommonProp_Bool");
  }
  return;
}



// FUNCTION 14654217d FUN_14654217d body=47 status=ok
// SIG undefined FUN_14654217d(void)

longlong FUN_14654217d(void)

{
  if (DAT_14cb6f9e0 == 0) {
    FUN_14086a14e(&DAT_14cb6f9e0,&PTR_FUN_14b3dc0b0);
  }
  return DAT_14cb6f9e0;
}



// FUNCTION 1465421ac FUN_1465421ac body=48 status=ok
// SIG undefined FUN_1465421ac(void)

void FUN_1465421ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e0a20;
  return;
}



// FUNCTION 1465421dc FUN_1465421dc body=55 status=ok
// SIG undefined FUN_1465421dc(void)

void FUN_1465421dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fa00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fa00 = FUN_140002ddd(FUN_146542213,uVar1,L"VariantDetailsCommonProp_Int8");
  }
  return;
}



// FUNCTION 146542213 FUN_146542213 body=47 status=ok
// SIG undefined FUN_146542213(void)

longlong FUN_146542213(void)

{
  if (DAT_14cb6f9f8 == 0) {
    FUN_14086a14e(&DAT_14cb6f9f8,&PTR_FUN_14b3dc190);
  }
  return DAT_14cb6f9f8;
}



// FUNCTION 146542242 FUN_146542242 body=48 status=ok
// SIG undefined FUN_146542242(void)

void FUN_146542242(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e0b80;
  return;
}



// FUNCTION 146542272 FUN_146542272 body=55 status=ok
// SIG undefined FUN_146542272(void)

void FUN_146542272(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fa18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fa18 = FUN_140002ddd(FUN_1465422a9,uVar1,L"VariantDetailsCommonProp_UInt8");
  }
  return;
}



// FUNCTION 1465422a9 FUN_1465422a9 body=47 status=ok
// SIG undefined FUN_1465422a9(void)

longlong FUN_1465422a9(void)

{
  if (DAT_14cb6fa10 == 0) {
    FUN_14086a14e(&DAT_14cb6fa10,&PTR_FUN_14b3dc280);
  }
  return DAT_14cb6fa10;
}



// FUNCTION 1465422d8 FUN_1465422d8 body=48 status=ok
// SIG undefined FUN_1465422d8(void)

void FUN_1465422d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e0ce0;
  return;
}



// FUNCTION 146542308 FUN_146542308 body=55 status=ok
// SIG undefined FUN_146542308(void)

void FUN_146542308(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fa30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fa30 = FUN_140002ddd(FUN_14654233f,uVar1,L"VariantDetailsCommonProp_Int16");
  }
  return;
}



// FUNCTION 14654233f FUN_14654233f body=47 status=ok
// SIG undefined FUN_14654233f(void)

longlong FUN_14654233f(void)

{
  if (DAT_14cb6fa28 == 0) {
    FUN_14086a14e(&DAT_14cb6fa28,&PTR_FUN_14b3dc368);
  }
  return DAT_14cb6fa28;
}



// FUNCTION 14654236e FUN_14654236e body=48 status=ok
// SIG undefined FUN_14654236e(void)

void FUN_14654236e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_200000002;
  *puVar1 = &PTR_FUN_14b3e0e40;
  return;
}



// FUNCTION 14654239e FUN_14654239e body=55 status=ok
// SIG undefined FUN_14654239e(void)

void FUN_14654239e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fa48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fa48 = FUN_140002ddd(FUN_1465423d5,uVar1,L"VariantDetailsCommonProp_UInt16");
  }
  return;
}



// FUNCTION 1465423d5 FUN_1465423d5 body=47 status=ok
// SIG undefined FUN_1465423d5(void)

longlong FUN_1465423d5(void)

{
  if (DAT_14cb6fa40 == 0) {
    FUN_14086a14e(&DAT_14cb6fa40,&PTR_FUN_14b3dc450);
  }
  return DAT_14cb6fa40;
}



// FUNCTION 146542404 FUN_146542404 body=48 status=ok
// SIG undefined FUN_146542404(void)

void FUN_146542404(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_200000002;
  *puVar1 = &PTR_FUN_14b3e0fa0;
  return;
}



// FUNCTION 146542434 FUN_146542434 body=55 status=ok
// SIG undefined FUN_146542434(void)

void FUN_146542434(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fa60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fa60 = FUN_140002ddd(FUN_14654246b,uVar1,L"VariantDetailsCommonProp_Int32");
  }
  return;
}



// FUNCTION 14654246b FUN_14654246b body=47 status=ok
// SIG undefined FUN_14654246b(void)

longlong FUN_14654246b(void)

{
  if (DAT_14cb6fa58 == 0) {
    FUN_14086a14e(&DAT_14cb6fa58,&PTR_FUN_14b3dc538);
  }
  return DAT_14cb6fa58;
}



// FUNCTION 14654249a FUN_14654249a body=48 status=ok
// SIG undefined FUN_14654249a(void)

void FUN_14654249a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14b3e1100;
  return;
}



// FUNCTION 1465424ca FUN_1465424ca body=55 status=ok
// SIG undefined FUN_1465424ca(void)

void FUN_1465424ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fa78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fa78 = FUN_140002ddd(FUN_146542501,uVar1,L"VariantDetailsCommonProp_UInt32");
  }
  return;
}



// FUNCTION 146542501 FUN_146542501 body=47 status=ok
// SIG undefined FUN_146542501(void)

longlong FUN_146542501(void)

{
  if (DAT_14cb6fa70 == 0) {
    FUN_14086a14e(&DAT_14cb6fa70,&PTR_FUN_14b3dc620);
  }
  return DAT_14cb6fa70;
}



// FUNCTION 146542530 FUN_146542530 body=48 status=ok
// SIG undefined FUN_146542530(void)

void FUN_146542530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14b3e1260;
  return;
}



// FUNCTION 146542560 FUN_146542560 body=55 status=ok
// SIG undefined FUN_146542560(void)

void FUN_146542560(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fa90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fa90 = FUN_140002ddd(FUN_146542597,uVar1,L"VariantDetailsCommonProp_Int64");
  }
  return;
}



// FUNCTION 146542597 FUN_146542597 body=47 status=ok
// SIG undefined FUN_146542597(void)

longlong FUN_146542597(void)

{
  if (DAT_14cb6fa88 == 0) {
    FUN_14086a14e(&DAT_14cb6fa88,&PTR_FUN_14b3dc708);
  }
  return DAT_14cb6fa88;
}



// FUNCTION 1465425c6 FUN_1465425c6 body=48 status=ok
// SIG undefined FUN_1465425c6(void)

void FUN_1465425c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b3e13c0;
  return;
}



// FUNCTION 1465425f6 FUN_1465425f6 body=55 status=ok
// SIG undefined FUN_1465425f6(void)

void FUN_1465425f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6faa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6faa8 = FUN_140002ddd(FUN_14654262d,uVar1,L"VariantDetailsCommonProp_UInt64");
  }
  return;
}



// FUNCTION 14654262d FUN_14654262d body=47 status=ok
// SIG undefined FUN_14654262d(void)

longlong FUN_14654262d(void)

{
  if (DAT_14cb6faa0 == 0) {
    FUN_14086a14e(&DAT_14cb6faa0,&PTR_FUN_14b3dc7f0);
  }
  return DAT_14cb6faa0;
}



// FUNCTION 14654265c FUN_14654265c body=48 status=ok
// SIG undefined FUN_14654265c(void)

void FUN_14654265c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b3e1520;
  return;
}



// FUNCTION 14654268c FUN_14654268c body=55 status=ok
// SIG undefined FUN_14654268c(void)

void FUN_14654268c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fac0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fac0 = FUN_140002ddd(FUN_1465426c3,uVar1,L"VariantDetailsCommonProp_Float");
  }
  return;
}



// FUNCTION 1465426c3 FUN_1465426c3 body=47 status=ok
// SIG undefined FUN_1465426c3(void)

longlong FUN_1465426c3(void)

{
  if (DAT_14cb6fab8 == 0) {
    FUN_14086a14e(&DAT_14cb6fab8,&PTR_FUN_14b3dc8c8);
  }
  return DAT_14cb6fab8;
}



// FUNCTION 1465426f2 FUN_1465426f2 body=48 status=ok
// SIG undefined FUN_1465426f2(void)

void FUN_1465426f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14b3e1680;
  return;
}



// FUNCTION 146542722 FUN_146542722 body=55 status=ok
// SIG undefined FUN_146542722(void)

void FUN_146542722(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fad8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fad8 = FUN_140002ddd(FUN_146542759,uVar1,L"VariantDetailsCommonProp_Double");
  }
  return;
}



// FUNCTION 146542759 FUN_146542759 body=47 status=ok
// SIG undefined FUN_146542759(void)

longlong FUN_146542759(void)

{
  if (DAT_14cb6fad0 == 0) {
    FUN_14086a14e(&DAT_14cb6fad0,&PTR_FUN_14b3dc9a0);
  }
  return DAT_14cb6fad0;
}



// FUNCTION 146542788 FUN_146542788 body=48 status=ok
// SIG undefined FUN_146542788(void)

void FUN_146542788(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b3e17e0;
  return;
}



// FUNCTION 1465427b8 FUN_1465427b8 body=55 status=ok
// SIG undefined FUN_1465427b8(void)

void FUN_1465427b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6faf0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6faf0 = FUN_140002ddd(FUN_1465427ef,uVar1,L"VariantDetailsCommonProp_String");
  }
  return;
}



// FUNCTION 1465427ef FUN_1465427ef body=47 status=ok
// SIG undefined FUN_1465427ef(void)

longlong FUN_1465427ef(void)

{
  if (DAT_14cb6fae8 == 0) {
    FUN_14086a14e(&DAT_14cb6fae8,&PTR_FUN_14b3dca78);
  }
  return DAT_14cb6fae8;
}



// FUNCTION 14654281e FUN_14654281e body=48 status=ok
// SIG undefined FUN_14654281e(void)

void FUN_14654281e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b3e1940;
  return;
}



// FUNCTION 14654284e FUN_14654284e body=55 status=ok
// SIG undefined FUN_14654284e(void)

void FUN_14654284e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fb08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fb08 = FUN_140002ddd(FUN_146542885,uVar1,L"VariantDetailsCommonProp_Text");
  }
  return;
}



// FUNCTION 146542885 FUN_146542885 body=47 status=ok
// SIG undefined FUN_146542885(void)

longlong FUN_146542885(void)

{
  if (DAT_14cb6fb00 == 0) {
    FUN_14086a14e(&DAT_14cb6fb00,&PTR_FUN_14b3dcb58);
  }
  return DAT_14cb6fb00;
}



// FUNCTION 1465428b4 FUN_1465428b4 body=48 status=ok
// SIG undefined FUN_1465428b4(void)

void FUN_1465428b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b3e1aa0;
  return;
}



// FUNCTION 1465428e4 FUN_1465428e4 body=55 status=ok
// SIG undefined FUN_1465428e4(void)

void FUN_1465428e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fb20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fb20 = FUN_140002ddd(FUN_14654291b,uVar1,L"VariantDetailsCommonProp_ObjectPtr");
  }
  return;
}



// FUNCTION 14654291b FUN_14654291b body=47 status=ok
// SIG undefined FUN_14654291b(void)

longlong FUN_14654291b(void)

{
  if (DAT_14cb6fb18 == 0) {
    FUN_14086a14e(&DAT_14cb6fb18,&PTR_FUN_14b3dcc58);
  }
  return DAT_14cb6fb18;
}



// FUNCTION 14654294a FUN_14654294a body=48 status=ok
// SIG undefined FUN_14654294a(void)

void FUN_14654294a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b3e1c00;
  return;
}



// FUNCTION 14654297a FUN_14654297a body=55 status=ok
// SIG undefined FUN_14654297a(void)

void FUN_14654297a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fb38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fb38 = FUN_140002ddd(FUN_1465429b1,uVar1,L"VariantDetailsCommonProp_SoftObjectPtr");
  }
  return;
}



// FUNCTION 1465429b1 FUN_1465429b1 body=47 status=ok
// SIG undefined FUN_1465429b1(void)

longlong FUN_1465429b1(void)

{
  if (DAT_14cb6fb30 == 0) {
    FUN_14086a14e(&DAT_14cb6fb30,&PTR_FUN_14b3dcd68);
  }
  return DAT_14cb6fb30;
}



// FUNCTION 1465429e0 FUN_1465429e0 body=48 status=ok
// SIG undefined FUN_1465429e0(void)

void FUN_1465429e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b3e1d60;
  return;
}



// FUNCTION 146542a10 FUN_146542a10 body=55 status=ok
// SIG undefined FUN_146542a10(void)

void FUN_146542a10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fb50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fb50 = FUN_140002ddd(FUN_146542a47,uVar1,L"VariantDetailsCommonProp_DataTable");
  }
  return;
}



// FUNCTION 146542a47 FUN_146542a47 body=47 status=ok
// SIG undefined FUN_146542a47(void)

longlong FUN_146542a47(void)

{
  if (DAT_14cb6fb48 == 0) {
    FUN_14086a14e(&DAT_14cb6fb48,&PTR_FUN_14b3dce58);
  }
  return DAT_14cb6fb48;
}



// FUNCTION 146542a76 FUN_146542a76 body=48 status=ok
// SIG undefined FUN_146542a76(void)

void FUN_146542a76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b3e1ec0;
  return;
}



// FUNCTION 146542aa6 FUN_146542aa6 body=55 status=ok
// SIG undefined FUN_146542aa6(void)

void FUN_146542aa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fb68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fb68 = FUN_140002ddd(FUN_146542add,uVar1,L"VariantDetailsCommonProp_FactAddress");
  }
  return;
}



// FUNCTION 146542add FUN_146542add body=47 status=ok
// SIG undefined FUN_146542add(void)

longlong FUN_146542add(void)

{
  if (DAT_14cb6fb60 == 0) {
    FUN_14086a14e(&DAT_14cb6fb60,&PTR_FUN_14b3dcf60);
  }
  return DAT_14cb6fb60;
}



// FUNCTION 146542b0c FUN_146542b0c body=48 status=ok
// SIG undefined FUN_146542b0c(void)

void FUN_146542b0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b3e2020;
  return;
}



// FUNCTION 146542b3c FUN_146542b3c body=35 status=ok
// SIG undefined FUN_146542b3c(void)

void FUN_146542b3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3dd2e0;
  return;
}



// FUNCTION 146542b64 FUN_146542b64 body=47 status=ok
// SIG undefined FUN_146542b64(void)

longlong FUN_146542b64(void)

{
  if (DAT_14cb6fb80 == 0) {
    FUN_14073dd9a(&DAT_14cb6fb80,&PTR_LAB_14b3dd298);
  }
  return DAT_14cb6fb80;
}



// FUNCTION 146542b94 FUN_146542b94 body=55 status=ok
// SIG undefined FUN_146542b94(void)

void FUN_146542b94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fb98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fb98 = FUN_140002ddd(FUN_146542bcb,uVar1,L"VisibilityPhaseState");
  }
  return;
}



// FUNCTION 146542bcb FUN_146542bcb body=47 status=ok
// SIG undefined FUN_146542bcb(void)

longlong FUN_146542bcb(void)

{
  if (DAT_14cb6fb90 == 0) {
    FUN_14086a14e(&DAT_14cb6fb90,&PTR_FUN_14b3dd5c0);
  }
  return DAT_14cb6fb90;
}



// FUNCTION 146542bfa FUN_146542bfa body=48 status=ok
// SIG undefined FUN_146542bfa(void)

void FUN_146542bfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b3e2180;
  return;
}



// FUNCTION 146542c2a FUN_146542c2a body=49 status=ok
// SIG undefined FUN_146542c2a(void)

longlong FUN_146542c2a(void)

{
  if (DAT_14cb6fbc8 == 0) {
    FUN_14073dd9a(&DAT_14cb6fbc8,&PTR_LAB_14b3ddbe0);
  }
  return DAT_14cb6fbc8;
}



// FUNCTION 146542c5b FUN_146542c5b body=47 status=ok
// SIG undefined FUN_146542c5b(void)

longlong FUN_146542c5b(void)

{
  if (DAT_14cb6fba8 == 0) {
    FUN_14000fc22(&DAT_14cb6fba8,&PTR_FUN_14b3dd6e0);
  }
  return DAT_14cb6fba8;
}



// FUNCTION 146542c8a FUN_146542c8a body=49 status=ok
// SIG undefined FUN_146542c8a(void)

longlong FUN_146542c8a(void)

{
  if (DAT_14cb6fbb0 == 0) {
    FUN_14000fc22(&DAT_14cb6fbb0,&PTR_FUN_14b3dd750);
  }
  return DAT_14cb6fbb0;
}



// FUNCTION 146542cbb FUN_146542cbb body=47 status=ok
// SIG undefined FUN_146542cbb(void)

longlong FUN_146542cbb(void)

{
  if (DAT_14cb6fbb8 == 0) {
    FUN_14000fc22(&DAT_14cb6fbb8,&PTR_FUN_14b3dd7a8);
  }
  return DAT_14cb6fbb8;
}



// FUNCTION 146542cea FUN_146542cea body=34 status=ok
// SIG undefined FUN_146542cea(void)

void FUN_146542cea(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140b3d448();
  FUN_14069c8d6(uVar1,&PTR_s_ExplodeOnAirborne_14b3dd7f0,1);
  return;
}



// FUNCTION 146542d12 FUN_146542d12 body=55 status=ok
// SIG undefined FUN_146542d12(void)

void FUN_146542d12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fbe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fbe0 = FUN_140002ddd(FUN_146542d49,uVar1,L"WaypointAttachmentStrategyState");
  }
  return;
}



// FUNCTION 146542d49 FUN_146542d49 body=47 status=ok
// SIG undefined FUN_146542d49(void)

longlong FUN_146542d49(void)

{
  if (DAT_14cb6fbd8 == 0) {
    FUN_14086a14e(&DAT_14cb6fbd8,&PTR_FUN_14b3ddca8);
  }
  return DAT_14cb6fbd8;
}



// FUNCTION 146542d78 FUN_146542d78 body=48 status=ok
// SIG undefined FUN_146542d78(void)

void FUN_146542d78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b3e22f0;
  return;
}



// FUNCTION 146542da8 FUN_146542da8 body=55 status=ok
// SIG undefined FUN_146542da8(void)

void FUN_146542da8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fbf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fbf8 = FUN_140002ddd(FUN_146542ddf,uVar1,L"WaypointAttachmentStrategy");
  }
  return;
}



// FUNCTION 146542ddf FUN_146542ddf body=47 status=ok
// SIG undefined FUN_146542ddf(void)

longlong FUN_146542ddf(void)

{
  if (DAT_14cb6fbf0 == 0) {
    FUN_14086a14e(&DAT_14cb6fbf0,&PTR_FUN_14b3ddd38);
  }
  return DAT_14cb6fbf0;
}



// FUNCTION 146542e0e FUN_146542e0e body=48 status=ok
// SIG undefined FUN_146542e0e(void)

void FUN_146542e0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b3e2450;
  return;
}



// FUNCTION 146542e3e FUN_146542e3e body=47 status=ok
// SIG undefined FUN_146542e3e(void)

longlong FUN_146542e3e(void)

{
  if (DAT_14cb6fc08 == 0) {
    FUN_14086a14e(&DAT_14cb6fc08,&PTR_FUN_14b3dde50);
  }
  return DAT_14cb6fc08;
}



// FUNCTION 146542e6e FUN_146542e6e body=48 status=ok
// SIG undefined FUN_146542e6e(void)

void FUN_146542e6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b3e25d0;
  return;
}



// FUNCTION 146542e9e FUN_146542e9e body=55 status=ok
// SIG undefined FUN_146542e9e(void)

void FUN_146542e9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc28 = FUN_140002ddd(FUN_146542ed5,uVar1,L"WaypointAttachmentStrategy_RegistryActor");
  }
  return;
}



// FUNCTION 146542ed5 FUN_146542ed5 body=47 status=ok
// SIG undefined FUN_146542ed5(void)

longlong FUN_146542ed5(void)

{
  if (DAT_14cb6fc20 == 0) {
    FUN_14086a14e(&DAT_14cb6fc20,&PTR_FUN_14b3ddf08);
  }
  return DAT_14cb6fc20;
}



// FUNCTION 146542f04 FUN_146542f04 body=48 status=ok
// SIG undefined FUN_146542f04(void)

void FUN_146542f04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b3e2730;
  return;
}



// FUNCTION 146542f34 FUN_146542f34 body=55 status=ok
// SIG undefined FUN_146542f34(void)

void FUN_146542f34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc40 =
         FUN_140002ddd(FUN_146542f6b,uVar1,L"WaypointAttachmentStrategyState_SpawnedActor");
  }
  return;
}



// FUNCTION 146542f6b FUN_146542f6b body=47 status=ok
// SIG undefined FUN_146542f6b(void)

longlong FUN_146542f6b(void)

{
  if (DAT_14cb6fc38 == 0) {
    FUN_14086a14e(&DAT_14cb6fc38,&PTR_FUN_14b3de018);
  }
  return DAT_14cb6fc38;
}



// FUNCTION 146542f9a FUN_146542f9a body=48 status=ok
// SIG undefined FUN_146542f9a(void)

void FUN_146542f9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b3e2890;
  return;
}



// FUNCTION 146542fca FUN_146542fca body=55 status=ok
// SIG undefined FUN_146542fca(void)

void FUN_146542fca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc58 = FUN_140002ddd(FUN_146543001,uVar1,L"WaypointAttachmentStrategy_SpawnedActor");
  }
  return;
}



// FUNCTION 146543001 FUN_146543001 body=47 status=ok
// SIG undefined FUN_146543001(void)

longlong FUN_146543001(void)

{
  if (DAT_14cb6fc50 == 0) {
    FUN_14086a14e(&DAT_14cb6fc50,&PTR_FUN_14b3de0c8);
  }
  return DAT_14cb6fc50;
}



// FUNCTION 146543030 FUN_146543030 body=48 status=ok
// SIG undefined FUN_146543030(void)

void FUN_146543030(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b3e29f0;
  return;
}



// FUNCTION 146543060 FUN_146543060 body=47 status=ok
// SIG undefined FUN_146543060(void)

longlong FUN_146543060(void)

{
  if (DAT_14cb6fc68 == 0) {
    FUN_14086a14e(&DAT_14cb6fc68,&PTR_FUN_14b3de278);
  }
  return DAT_14cb6fc68;
}



// FUNCTION 146543090 FUN_146543090 body=48 status=ok
// SIG undefined FUN_146543090(void)

void FUN_146543090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14b3e2b70;
  return;
}



// FUNCTION 1465430c0 FUN_1465430c0 body=47 status=ok
// SIG undefined FUN_1465430c0(void)

longlong FUN_1465430c0(void)

{
  if (DAT_14cb6fc80 == 0) {
    FUN_1409ce572(&DAT_14cb6fc80,&PTR_FUN_14b3de3f0);
  }
  return DAT_14cb6fc80;
}



// FUNCTION 1465430ef FUN_1465430ef body=47 status=ok
// SIG undefined FUN_1465430ef(void)

longlong FUN_1465430ef(void)

{
  if (DAT_14cb6fc98 == 0) {
    FUN_1409ce572(&DAT_14cb6fc98,&PTR_FUN_14b3de480);
  }
  return DAT_14cb6fc98;
}



// FUNCTION 14654311e FUN_14654311e body=47 status=ok
// SIG undefined FUN_14654311e(void)

longlong FUN_14654311e(void)

{
  if (DAT_14cb6fcb8 == 0) {
    FUN_14073dd9a(&DAT_14cb6fcb8,&PTR_LAB_14b3de508);
  }
  return DAT_14cb6fcb8;
}



// FUNCTION 14654314d FUN_14654314d body=47 status=ok
// SIG undefined FUN_14654314d(void)

longlong FUN_14654314d(void)

{
  if (DAT_14cb6fcd0 == 0) {
    FUN_14073dd9a(&DAT_14cb6fcd0,&PTR_LAB_14b3dec38);
  }
  return DAT_14cb6fcd0;
}



// FUNCTION 14654317c FUN_14654317c body=55 status=ok
// SIG undefined FUN_14654317c(void)

void FUN_14654317c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fce8 = FUN_140002ddd(FUN_1465431b3,uVar1,L"WaypointRuntimeParams");
  }
  return;
}



// FUNCTION 1465431b3 FUN_1465431b3 body=47 status=ok
// SIG undefined FUN_1465431b3(void)

longlong FUN_1465431b3(void)

{
  if (DAT_14cb6fce0 == 0) {
    FUN_14086a14e(&DAT_14cb6fce0,&PTR_FUN_14b3decf0);
  }
  return DAT_14cb6fce0;
}



// FUNCTION 1465431e2 FUN_1465431e2 body=48 status=ok
// SIG undefined FUN_1465431e2(void)

void FUN_1465431e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b3e2f90;
  return;
}



// FUNCTION 146543212 FUN_146543212 body=55 status=ok
// SIG undefined FUN_146543212(void)

void FUN_146543212(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fd00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fd00 = FUN_140002ddd(FUN_146543249,uVar1,L"WorldRegionGameDataCategories_DONTUSE");
  }
  return;
}



// FUNCTION 146543249 FUN_146543249 body=47 status=ok
// SIG undefined FUN_146543249(void)

longlong FUN_146543249(void)

{
  if (DAT_14cb6fcf8 == 0) {
    FUN_14086a14e(&DAT_14cb6fcf8,&PTR_FUN_14b3dedd0);
  }
  return DAT_14cb6fcf8;
}



// FUNCTION 146543278 FUN_146543278 body=48 status=ok
// SIG undefined FUN_146543278(void)

void FUN_146543278(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e30f0;
  return;
}



// FUNCTION 1465432a8 FUN_1465432a8 body=47 status=ok
// SIG undefined FUN_1465432a8(void)

longlong FUN_1465432a8(void)

{
  if (DAT_14cb6fd18 == 0) {
    FUN_14073dd9a(&DAT_14cb6fd18,&PTR_LAB_14b3dee88);
  }
  return DAT_14cb6fd18;
}



// FUNCTION 1465432d7 FUN_1465432d7 body=47 status=ok
// SIG undefined FUN_1465432d7(void)

longlong FUN_1465432d7(void)

{
  if (DAT_14cb6fd28 == 0) {
    FUN_1409ce572(&DAT_14cb6fd28,&PTR_FUN_14b3def90);
  }
  return DAT_14cb6fd28;
}



// FUNCTION 146543306 FUN_146543306 body=55 status=ok
// SIG undefined FUN_146543306(void)

void FUN_146543306(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fd48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fd48 = FUN_140002ddd(FUN_14654333d,uVar1,L"ZoomHandlerValueResolver");
  }
  return;
}



// FUNCTION 14654333d FUN_14654333d body=47 status=ok
// SIG undefined FUN_14654333d(void)

longlong FUN_14654333d(void)

{
  if (DAT_14cb6fd40 == 0) {
    FUN_14086a14e(&DAT_14cb6fd40,&PTR_FUN_14b3df0b0);
  }
  return DAT_14cb6fd40;
}



// FUNCTION 14654336c FUN_14654336c body=48 status=ok
// SIG undefined FUN_14654336c(void)

void FUN_14654336c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b3e33e0;
  return;
}



// FUNCTION 14654339c FUN_14654339c body=35 status=ok
// SIG undefined FUN_14654339c(void)

void FUN_14654339c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3df1c0;
  return;
}



// FUNCTION 1465433c9 FUN_1465433c9 body=47 status=ok
// SIG undefined FUN_1465433c9(void)

longlong FUN_1465433c9(void)

{
  if (DAT_14cb6fd60 == 0) {
    FUN_14073dd9a(&DAT_14cb6fd60,&PTR_LAB_14b3df178);
  }
  return DAT_14cb6fd60;
}



// FUNCTION 1465433f8 FUN_1465433f8 body=35 status=ok
// SIG undefined FUN_1465433f8(void)

void FUN_1465433f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3df4e0;
  return;
}



// FUNCTION 146543420 FUN_146543420 body=47 status=ok
// SIG undefined FUN_146543420(void)

longlong FUN_146543420(void)

{
  if (DAT_14cb6fd78 == 0) {
    FUN_14073dd9a(&DAT_14cb6fd78,&PTR_LAB_14b3df498);
  }
  return DAT_14cb6fd78;
}



// FUNCTION 146543450 FUN_146543450 body=55 status=ok
// SIG undefined FUN_146543450(void)

void FUN_146543450(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fd90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fd90 = FUN_140002ddd(FUN_146543487,uVar1,L"ZoomHandlerState");
  }
  return;
}



// FUNCTION 146543487 FUN_146543487 body=49 status=ok
// SIG undefined FUN_146543487(void)

longlong FUN_146543487(void)

{
  if (DAT_14cb6fd88 == 0) {
    FUN_14086a14e(&DAT_14cb6fd88,&PTR_FUN_14b3dfab0);
  }
  return DAT_14cb6fd88;
}



// FUNCTION 1465434b8 FUN_1465434b8 body=48 status=ok
// SIG undefined FUN_1465434b8(void)

void FUN_1465434b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b3e35d0;
  return;
}



// FUNCTION 1465434e8 FUN_1465434e8 body=55 status=ok
// SIG undefined FUN_1465434e8(void)

void FUN_1465434e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fda8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fda8 = FUN_140002ddd(FUN_14654351f,uVar1,L"RepZoomHandlerState");
  }
  return;
}



// FUNCTION 14654351f FUN_14654351f body=49 status=ok
// SIG undefined FUN_14654351f(void)

longlong FUN_14654351f(void)

{
  if (DAT_14cb6fda0 == 0) {
    FUN_14086a14e(&DAT_14cb6fda0,&PTR_FUN_14b3dfb28);
  }
  return DAT_14cb6fda0;
}



// FUNCTION 146543550 FUN_146543550 body=48 status=ok
// SIG undefined FUN_146543550(void)

void FUN_146543550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14b3e3740;
  return;
}



// FUNCTION 146543580 FUN_146543580 body=40 status=ok
// SIG undefined FUN_146543580(void)

undefined8 FUN_146543580(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465435a8 FUN_1465435a8 body=40 status=ok
// SIG undefined FUN_1465435a8(void)

undefined8 FUN_1465435a8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465435d0 FUN_1465435d0 body=40 status=ok
// SIG undefined FUN_1465435d0(void)

undefined8 FUN_1465435d0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465435f8 FUN_1465435f8 body=40 status=ok
// SIG undefined FUN_1465435f8(void)

undefined8 FUN_1465435f8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543620 FUN_146543620 body=40 status=ok
// SIG undefined FUN_146543620(void)

undefined8 FUN_146543620(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543648 FUN_146543648 body=40 status=ok
// SIG undefined FUN_146543648(void)

undefined8 FUN_146543648(undefined8 param_1,int param_2)

{
  thunk_FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543670 FUN_146543670 body=40 status=ok
// SIG undefined FUN_146543670(void)

undefined8 FUN_146543670(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543698 FUN_146543698 body=40 status=ok
// SIG undefined FUN_146543698(void)

undefined8 FUN_146543698(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465436c0 FUN_1465436c0 body=29 status=ok
// SIG undefined FUN_1465436c0(void)

undefined8 FUN_1465436c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465436de FUN_1465436de body=29 status=ok
// SIG undefined FUN_1465436de(void)

undefined8 FUN_1465436de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465436fc FUN_1465436fc body=29 status=ok
// SIG undefined FUN_1465436fc(void)

undefined8 FUN_1465436fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654371a FUN_14654371a body=29 status=ok
// SIG undefined FUN_14654371a(void)

undefined8 FUN_14654371a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543738 FUN_146543738 body=29 status=ok
// SIG undefined FUN_146543738(void)

undefined8 FUN_146543738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543756 FUN_146543756 body=29 status=ok
// SIG undefined FUN_146543756(void)

undefined8 FUN_146543756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543774 FUN_146543774 body=29 status=ok
// SIG undefined FUN_146543774(void)

undefined8 FUN_146543774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543792 FUN_146543792 body=54 status=ok
// SIG undefined FUN_146543792(void)

undefined8 * FUN_146543792(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465437c8 FUN_1465437c8 body=29 status=ok
// SIG undefined FUN_1465437c8(void)

undefined8 FUN_1465437c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465437e6 FUN_1465437e6 body=29 status=ok
// SIG undefined FUN_1465437e6(void)

undefined8 FUN_1465437e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543804 FUN_146543804 body=29 status=ok
// SIG undefined FUN_146543804(void)

undefined8 FUN_146543804(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543822 FUN_146543822 body=29 status=ok
// SIG undefined FUN_146543822(void)

undefined8 FUN_146543822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543840 FUN_146543840 body=29 status=ok
// SIG undefined FUN_146543840(void)

undefined8 FUN_146543840(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654385e FUN_14654385e body=29 status=ok
// SIG undefined FUN_14654385e(void)

undefined8 FUN_14654385e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654387c FUN_14654387c body=29 status=ok
// SIG undefined FUN_14654387c(void)

undefined8 FUN_14654387c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654389a FUN_14654389a body=29 status=ok
// SIG undefined FUN_14654389a(void)

undefined8 FUN_14654389a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465438b8 FUN_1465438b8 body=29 status=ok
// SIG undefined FUN_1465438b8(void)

undefined8 FUN_1465438b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465438d6 FUN_1465438d6 body=29 status=ok
// SIG undefined FUN_1465438d6(void)

undefined8 FUN_1465438d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465438f4 FUN_1465438f4 body=29 status=ok
// SIG undefined FUN_1465438f4(void)

undefined8 FUN_1465438f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543912 FUN_146543912 body=29 status=ok
// SIG undefined FUN_146543912(void)

undefined8 FUN_146543912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543930 FUN_146543930 body=29 status=ok
// SIG undefined FUN_146543930(void)

undefined8 FUN_146543930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654394e FUN_14654394e body=29 status=ok
// SIG undefined FUN_14654394e(void)

undefined8 FUN_14654394e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654396c FUN_14654396c body=29 status=ok
// SIG undefined FUN_14654396c(void)

undefined8 FUN_14654396c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654398a FUN_14654398a body=29 status=ok
// SIG undefined FUN_14654398a(void)

undefined8 FUN_14654398a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465439a8 FUN_1465439a8 body=29 status=ok
// SIG undefined FUN_1465439a8(void)

undefined8 FUN_1465439a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465439c6 FUN_1465439c6 body=29 status=ok
// SIG undefined FUN_1465439c6(void)

undefined8 FUN_1465439c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465439e4 FUN_1465439e4 body=29 status=ok
// SIG undefined FUN_1465439e4(void)

undefined8 FUN_1465439e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543a02 FUN_146543a02 body=29 status=ok
// SIG undefined FUN_146543a02(void)

undefined8 FUN_146543a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543a20 FUN_146543a20 body=29 status=ok
// SIG undefined FUN_146543a20(void)

undefined8 FUN_146543a20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543a3e FUN_146543a3e body=29 status=ok
// SIG undefined FUN_146543a3e(void)

undefined8 FUN_146543a3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543a5c FUN_146543a5c body=29 status=ok
// SIG undefined FUN_146543a5c(void)

undefined8 FUN_146543a5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543a7a FUN_146543a7a body=29 status=ok
// SIG undefined FUN_146543a7a(void)

undefined8 FUN_146543a7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543a98 FUN_146543a98 body=29 status=ok
// SIG undefined FUN_146543a98(void)

undefined8 FUN_146543a98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543ab6 FUN_146543ab6 body=29 status=ok
// SIG undefined FUN_146543ab6(void)

undefined8 FUN_146543ab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543ad4 FUN_146543ad4 body=29 status=ok
// SIG undefined FUN_146543ad4(void)

undefined8 FUN_146543ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543af2 FUN_146543af2 body=29 status=ok
// SIG undefined FUN_146543af2(void)

undefined8 FUN_146543af2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543b10 FUN_146543b10 body=29 status=ok
// SIG undefined FUN_146543b10(void)

undefined8 FUN_146543b10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543b2e FUN_146543b2e body=29 status=ok
// SIG undefined FUN_146543b2e(void)

undefined8 FUN_146543b2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543b4c FUN_146543b4c body=29 status=ok
// SIG undefined FUN_146543b4c(void)

undefined8 FUN_146543b4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543b6a FUN_146543b6a body=29 status=ok
// SIG undefined FUN_146543b6a(void)

undefined8 FUN_146543b6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543b9a FUN_146543b9a body=40 status=ok
// SIG undefined FUN_146543b9a(void)

void FUN_146543b9a(longlong param_1)

{
  FUN_140872622();
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  return;
}



// FUNCTION 146543bc2 FUN_146543bc2 body=76 status=ok
// SIG undefined FUN_146543bc2(void)

undefined8 FUN_146543bc2(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145aea356(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146543c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146543c0e FUN_146543c0e body=44 status=ok
// SIG undefined FUN_146543c0e(void)

void FUN_146543c0e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 146543c3a FUN_146543c3a body=35 status=ok
// SIG undefined FUN_146543c3a(void)

void FUN_146543c3a(longlong param_1)

{
  FUN_140872622();
  FUN_145bf2952(param_1 + 0x3d8,0);
  return;
}



// FUNCTION 146543c5e FUN_146543c5e body=91 status=ok
// SIG undefined FUN_146543c5e(void)

void FUN_146543c5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140872622();
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x3d8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3d8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146543cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146543cba FUN_146543cba body=29 status=ok
// SIG undefined FUN_146543cba(void)

bool FUN_146543cba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146543cd8 FUN_146543cd8 body=24 status=ok
// SIG undefined FUN_146543cd8(void)

bool FUN_146543cd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146543cf0 FUN_146543cf0 body=29 status=ok
// SIG undefined FUN_146543cf0(void)

bool FUN_146543cf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146543d0e FUN_146543d0e body=24 status=ok
// SIG undefined FUN_146543d0e(void)

bool FUN_146543d0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146543d26 FUN_146543d26 body=26 status=ok
// SIG undefined FUN_146543d26(void)

bool FUN_146543d26(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146543d40 FUN_146543d40 body=24 status=ok
// SIG undefined FUN_146543d40(void)

bool FUN_146543d40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146543d58 FUN_146543d58 body=24 status=ok
// SIG undefined FUN_146543d58(void)

bool FUN_146543d58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146543d70 FUN_146543d70 body=29 status=ok
// SIG undefined FUN_146543d70(void)

bool FUN_146543d70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146543d8e FUN_146543d8e body=29 status=ok
// SIG undefined FUN_146543d8e(void)

undefined8 FUN_146543d8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146543dac FUN_146543dac body=431 status=ok
// SIG undefined FUN_146543dac(void)

void FUN_146543dac(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146543f5c FUN_146543f5c body=93 status=ok
// SIG undefined FUN_146543f5c(void)

void FUN_146543f5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e6100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146543fba FUN_146543fba body=99 status=ok
// SIG undefined FUN_146543fba(void)

void FUN_146543fba(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  DAT_14cb70c88 = 0;
  lVar1 = *param_1;
  uVar2 = (ulonglong)(param_1[1] - lVar1) >> 4;
  DAT_14cb70c90 = (int)uVar2;
  if (DAT_14cb70c90 != 0) {
    FUN_14082454c(&DAT_14cb70c88,uVar2 & 0xffffffff,0);
    FUN_1408243d3(DAT_14cb70c88,lVar1,uVar2 & 0xffffffff);
    return;
  }
  DAT_14cb70c94 = 0;
  return;
}



// FUNCTION 14654401e FUN_14654401e body=47 status=ok
// SIG undefined FUN_14654401e(void)

void FUN_14654401e(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar1 = (int *)(lVar2 + 0x1004);
  *piVar1 = *piVar1 + 1;
  FUN_141601260();
  piVar1 = (int *)(lVar2 + 0x1004);
  *piVar1 = *piVar1 + -1;
  return;
}



// FUNCTION 146544082 FUN_146544082 body=132 status=ok
// SIG undefined FUN_146544082(void)

void FUN_146544082(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146544108 FUN_146544108 body=29 status=ok
// SIG undefined FUN_146544108(void)

undefined8 FUN_146544108(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146544126 FUN_146544126 body=29 status=ok
// SIG undefined FUN_146544126(void)

undefined8 FUN_146544126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146544143 FUN_146544143 body=58 status=ok
// SIG undefined FUN_146544143(void)

void FUN_146544143(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14654417e FUN_14654417e body=26 status=ok
// SIG undefined FUN_14654417e(void)

bool FUN_14654417e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146544198 FUN_146544198 body=24 status=ok
// SIG undefined FUN_146544198(void)

bool FUN_146544198(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465441b0 FUN_1465441b0 body=101 status=ok
// SIG undefined FUN_1465441b0(void)

void FUN_1465441b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e75e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146544216 FUN_146544216 body=20 status=ok
// SIG undefined FUN_146544216(void)

undefined4 FUN_146544216(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14092c0b8();
  return *(undefined4 *)(lVar1 + 0xb8);
}



// FUNCTION 14654422a FUN_14654422a body=154 status=ok
// SIG undefined FUN_14654422a(void)

void FUN_14654422a(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
LAB_1465442ba:
    uVar2 = 1;
    if (param_4 != '\0') goto LAB_146544293;
  }
  else {
    lVar1 = FUN_140861c56();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) goto LAB_1465442ba;
    if (param_4 != '\0') {
      FUN_14485c47a(param_1 + 200,param_2);
      FUN_1406966b6(param_1 + -0x1a80,&DAT_14cb71460,0);
      uVar2 = 1;
      goto LAB_146544293;
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  uVar2 = 0;
LAB_146544293:
  FUN_145ef4d10(param_1 + -0x1a80,&DAT_14cb71458,uVar2);
  return;
}



// FUNCTION 1465442c4 FUN_1465442c4 body=374 status=ok
// SIG undefined FUN_1465442c4(void)

void FUN_1465442c4(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = param_8[2];
  local_a0 = &local_48;
  local_48 = *param_8;
  uStack_40 = param_8[1];
  local_68 = *param_7;
  uStack_60 = param_7[1];
  local_a8 = &local_68;
  local_58 = param_7[2];
  local_88 = *param_6;
  uStack_84 = param_6[1];
  uStack_80 = param_6[2];
  uStack_7c = param_6[3];
  local_b0 = &local_88;
  local_78 = *(undefined8 *)(param_6 + 4);
  local_98 = param_9;
  local_b8 = param_5;
  FUN_1400dc742(param_1,param_2,param_3);
  if (param_3 != 0) {
    lVar3 = FUN_144a7cacc();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      cVar2 = FUN_1449ce97a(param_3);
      if (cVar2 != '\0') {
        cVar2 = FUN_145d8abce(param_1,1);
        if (cVar2 != '\0') {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_3);
          }
          iVar1 = *(int *)(param_1 + 0x1bc0);
          *(uint *)(param_1 + 0x1bc0) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x1bc4) < iVar1 + 1U) {
            FUN_140b51998((longlong *)(param_1 + 0x1bb8),iVar1);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x1bb8) + (longlong)iVar1 * 8) = param_3;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_3);
          }
          FUN_145ef46cc(param_1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654443c FUN_14654443c body=223 status=ok
// SIG undefined FUN_14654443c(void)

void FUN_14654443c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_3 + 0x100))(param_3);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x1b0), lVar3 != 0)) {
    lVar4 = FUN_144a7cacc();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      cVar2 = FUN_1449ce97a(lVar3);
      if (cVar2 != '\0') {
        cVar2 = FUN_145d8abce(param_1 + -0x448,2);
        if (cVar2 != '\0') {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          iVar1 = *(int *)(param_1 + 0x1778);
          *(uint *)(param_1 + 0x1778) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x177c) < iVar1 + 1U) {
            FUN_140b51998((longlong *)(param_1 + 6000),iVar1);
          }
          *(longlong *)(*(longlong *)(param_1 + 6000) + (longlong)iVar1 * 8) = lVar3;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          FUN_145ef46cc(param_1 + -0x448);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14654451c FUN_14654451c body=117 status=ok
// SIG undefined FUN_14654451c(void)

void FUN_14654451c(longlong *param_1,longlong *param_2,char param_3,undefined1 param_4)

{
  longlong lVar1;
  
  if ((char)param_1[0x2f] == '\x03') {
    (**(code **)(*param_1 + 0x708))();
    param_1[0x2de] = param_2[2];
    lVar1 = param_2[1];
    param_1[0x2dc] = *param_2;
    param_1[0x2dd] = lVar1;
    *(undefined8 *)((longlong)param_1 + 0x16d4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1704) = 0;
    *(undefined1 *)(param_1 + 0x2df) = 2;
    *(undefined1 *)(param_1 + 0x3bf) = 0;
    *(undefined1 *)(param_1 + 0x2e6) = 0;
    if (param_3 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x16d2) = param_4;
    }
  }
  return;
}



// FUNCTION 146544592 FUN_146544592 body=159 status=ok
// SIG undefined FUN_146544592(void)

void FUN_146544592(longlong *param_1,longlong param_2,char param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_2 != 0) && ((char)param_1[0x2f] == '\x03')) {
    (**(code **)(*param_1 + 0x708))(param_1);
    uVar2 = *(undefined4 *)(param_2 + 0x264);
    uVar3 = *(undefined4 *)(param_2 + 0x268);
    uVar4 = *(undefined4 *)(param_2 + 0x26c);
    lVar1 = *(longlong *)(param_2 + 0x270);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x260);
    *(undefined4 *)((longlong)param_1 + 0x16e4) = uVar2;
    *(undefined4 *)(param_1 + 0x2dd) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x16ec) = uVar4;
    param_1[0x2de] = lVar1;
    FUN_14485c47a((longlong)param_1 + 0x1704,param_2);
    FUN_14485c47a((longlong)param_1 + 0x16d4,*(undefined8 *)(param_2 + 0xa8));
    *(undefined1 *)(param_1 + 0x2df) = 1;
    *(undefined1 *)(param_1 + 0x3bf) = 0;
    *(undefined1 *)(param_1 + 0x2e6) = 0;
    if (param_3 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x16d2) = param_4;
    }
  }
  return;
}



// FUNCTION 14654464e FUN_14654464e body=112 status=ok
// SIG undefined FUN_14654464e(void)

void FUN_14654464e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  local_18 = 0;
  local_28 = 0;
  local_20 = 1;
  local_38 = L"FactsConduit";
  local_30 = &DAT_10000000b;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465446c0 FUN_1465446c0 body=444 status=ok
// SIG undefined FUN_1465446c0(void)

undefined8 FUN_1465446c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar2 = FUN_140496b24();
    plVar4 = *(longlong **)(param_1 + 0x430);
    if (plVar4 != (longlong *)0x0) {
      if ((((lVar2 != 0) && (lVar1 = plVar4[2], lVar1 != 0)) &&
          (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        lVar2 = FUN_14486dd68();
        if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) {
          FUN_147a491c6(plVar4);
        }
        else {
          (**(code **)(*plVar4 + 0x330))(plVar4);
          lVar2 = plVar4[0x3bd] + 0x48;
          local_30 = plVar4;
          if (DAT_14c950c29 == '\x01') {
LAB_1465447db:
            local_30 = plVar4;
            FUN_1456cec3c(plVar4);
          }
LAB_1465447e3:
          local_28 = &local_30;
          FUN_147db0f38(lVar2);
        }
        uVar3 = 1;
        goto LAB_14654476f;
      }
      lVar2 = FUN_1449db7f2();
      if (*(longlong *)(param_1 + 0x430) != 0) {
        uVar3 = 0;
        if ((lVar2 == 0) ||
           (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x430) + 0x10), lVar1 == 0))
        goto LAB_14654476f;
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          lVar2 = FUN_1447210f0(param_1);
          lVar2 = *(longlong *)(lVar2 + 0x38);
          if (((lVar2 != 0) && (lVar1 = *(longlong *)(lVar2 + 0xf0), lVar1 != 0)) &&
             (0 < (longlong)*(int *)(lVar1 + 0x50))) {
            lVar5 = 0;
            uVar3 = 0;
            do {
              plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x48) + lVar5 * 8);
              if (plVar4[6] == param_1) {
                (**(code **)(*plVar4 + 0x330))(plVar4);
                lVar2 = *(longlong *)(lVar2 + 0xf0) + 0x48;
                local_30 = plVar4;
                if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) goto LAB_1465447e3;
                goto LAB_1465447db;
              }
              lVar5 = lVar5 + 1;
            } while (*(int *)(lVar1 + 0x50) != lVar5);
            goto LAB_14654476f;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_14654476f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14654487e FUN_14654487e body=85 status=ok
// SIG undefined FUN_14654487e(void)

void FUN_14654487e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) && (DAT_14cb259f8 != 0)) {
    FUN_145f888b2(DAT_14cb259f8,param_1);
    lVar1 = *param_1;
  }
  if ((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar1 + 0x50));
    return;
  }
  return;
}



// FUNCTION 1465448d4 FUN_1465448d4 body=33 status=ok
// SIG undefined FUN_1465448d4(void)

void FUN_1465448d4(longlong param_1)

{
  FUN_140115e24();
  FUN_14071060c(param_1 + 0x3c8,param_1);
  return;
}



// FUNCTION 1465448f6 FUN_1465448f6 body=151 status=ok
// SIG undefined FUN_1465448f6(void)

void FUN_1465448f6(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined2 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405f1eac();
  local_30 = FUN_14064a6f8(param_1 + 0x3a8);
  local_28 = 0xffff;
  local_20 = 0;
  FUN_140365ba6(param_1 + 0x3c8,&local_30,1);
  FUN_14035925a(param_1 + 0x428,param_1,*(undefined1 *)(param_1 + 0x3a0),
                *(undefined1 *)(param_1 + 0x3a1));
  *(undefined1 *)(param_1 + 0x5b5) = *(undefined1 *)(param_1 + 0x3c0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654498e FUN_14654498e body=33 status=ok
// SIG undefined FUN_14654498e(void)

void FUN_14654498e(longlong param_1)

{
  FUN_140872622();
  FUN_1405213ee(param_1 + 0x428);
  return;
}



// FUNCTION 146544a40 FUN_146544a40 body=60 status=ok
// SIG undefined FUN_146544a40(void)

undefined8 * FUN_146544a40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3e7ea0;
  FUN_145723b88();
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146544a7c FUN_146544a7c body=93 status=ok
// SIG undefined FUN_146544a7c(void)

void FUN_146544a7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146544ada FUN_146544ada body=66 status=ok
// SIG undefined FUN_146544ada(void)

undefined8 * FUN_146544ada(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3e8c50;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146544b1c FUN_146544b1c body=106 status=ok
// SIG undefined FUN_146544b1c(void)

undefined8 FUN_146544b1c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 146544b86 FUN_146544b86 body=79 status=ok
// SIG undefined FUN_146544b86(void)

void FUN_146544b86(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 8 + lVar2);
    *(undefined2 *)(puVar1 + -1) = *(undefined2 *)(param_2 + lVar2);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    FUN_14114e6dc();
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146544bd6 FUN_146544bd6 body=26 status=ok
// SIG undefined FUN_146544bd6(void)

bool FUN_146544bd6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146544bf0 FUN_146544bf0 body=24 status=ok
// SIG undefined FUN_146544bf0(void)

bool FUN_146544bf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146544c1c FUN_146544c1c body=101 status=ok
// SIG undefined FUN_146544c1c(void)

void FUN_146544c1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146544c96 FUN_146544c96 body=101 status=ok
// SIG undefined FUN_146544c96(void)

void FUN_146544c96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e8f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146544cfc FUN_146544cfc body=24 status=ok
// SIG undefined FUN_146544cfc(void)

bool FUN_146544cfc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146544d14 FUN_146544d14 body=29 status=ok
// SIG undefined FUN_146544d14(void)

bool FUN_146544d14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146544d32 FUN_146544d32 body=29 status=ok
// SIG undefined FUN_146544d32(void)

bool FUN_146544d32(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146544d50 FUN_146544d50 body=24 status=ok
// SIG undefined FUN_146544d50(void)

bool FUN_146544d50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146544d68 FUN_146544d68 body=29 status=ok
// SIG undefined FUN_146544d68(void)

bool FUN_146544d68(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146544d86 FUN_146544d86 body=24 status=ok
// SIG undefined FUN_146544d86(void)

bool FUN_146544d86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146544d9e FUN_146544d9e body=85 status=ok
// SIG undefined FUN_146544d9e(void)

void FUN_146544d9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9a90;
  return;
}



// FUNCTION 146544df4 FUN_146544df4 body=29 status=ok
// SIG undefined FUN_146544df4(void)

undefined8 FUN_146544df4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146544e12 FUN_146544e12 body=29 status=ok
// SIG undefined FUN_146544e12(void)

bool FUN_146544e12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146544e30 FUN_146544e30 body=26 status=ok
// SIG undefined FUN_146544e30(void)

bool FUN_146544e30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146544e4a FUN_146544e4a body=85 status=ok
// SIG undefined FUN_146544e4a(void)

void FUN_146544e4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9d90;
  return;
}



// FUNCTION 146544ea0 FUN_146544ea0 body=29 status=ok
// SIG undefined FUN_146544ea0(void)

undefined8 FUN_146544ea0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146544ebe FUN_146544ebe body=113 status=ok
// SIG undefined FUN_146544ebe(void)

void FUN_146544ebe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 146544f30 FUN_146544f30 body=428 status=ok
// SIG undefined FUN_146544f30(void)

longlong * FUN_146544f30(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_146545010:
    *puVar5 = &PTR_LAB_14ac8c8d0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3ec550;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146545010;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ac8c8d0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b3ec550;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1465450dc FUN_1465450dc body=865 status=ok
// SIG undefined FUN_1465450dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1465450dc(void)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"GbxAINodeStanceTags");
  FUN_1446f470e(&local_40,L"Stance.Passive.Walk",1);
  FUN_1413e432a(lVar1,&local_38,local_40,local_30);
  _DAT_14cb71998 = local_38;
  FUN_1446f470e(&local_48,L"Stance.Passive.Run",1);
  FUN_1413e432a(lVar1,&local_38,local_48,local_30);
  _DAT_14cb719a0 = local_38;
  FUN_1446f470e(&local_50,L"Stance.Passive.Sprint",1);
  FUN_1413e432a(lVar1,&local_38,local_50,local_30);
  _DAT_14cb719a8 = local_38;
  FUN_1446f470e(&local_58,L"Stance.Combat.Walk",1);
  FUN_1413e432a(lVar1,&local_38,local_58,local_30);
  _DAT_14cb719b0 = local_38;
  FUN_1446f470e(&local_60,L"Stance.Combat.Run",1);
  FUN_1413e432a(lVar1,&local_38,local_60,local_30);
  _DAT_14cb719b8 = local_38;
  FUN_1446f470e(&local_68,L"Stance.Combat.Sprint",1);
  FUN_1413e432a(lVar1,&local_38,local_68,local_30);
  _DAT_14cb719c0 = local_38;
  FUN_1446f470e(&local_70,L"Stance.Alert.Walk",1);
  FUN_1413e432a(lVar1,&local_38,local_70,local_30);
  _DAT_14cb719c8 = local_38;
  FUN_1446f470e(&local_78,L"Stance.Alert.Run",1);
  FUN_1413e432a(lVar1,&local_38,local_78,local_30);
  _DAT_14cb719d0 = local_38;
  FUN_1446f470e(&local_80,L"Stance.Alert.Sprint",1);
  FUN_1413e432a(lVar1,&local_38,local_80,local_30);
  _DAT_14cb719d8 = local_38;
  FUN_1446f470e(&local_88,L"Stance.Scared.Walk",1);
  FUN_1413e432a(lVar1,&local_38,local_88,local_30);
  _DAT_14cb719e0 = local_38;
  FUN_1446f470e(&local_90,L"Stance.Scared.Run",1);
  FUN_1413e432a(lVar1,&local_38,local_90,local_30);
  _DAT_14cb719e8 = local_38;
  FUN_1446f470e(&local_98,L"Stance.Scared.Sprint",1);
  FUN_1413e432a(lVar1,&local_38,local_98,local_30);
  _DAT_14cb719f0 = local_38;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654543e FUN_14654543e body=237 status=ok
// SIG undefined FUN_14654543e(void)

undefined8
FUN_14654543e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b3ec990;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654552c FUN_14654552c body=329 status=ok
// SIG undefined FUN_14654552c(void)

void FUN_14654552c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == (longlong *)0x0) || (DAT_14cb71bf8 != '\x01')) goto LAB_1465455ed;
  uVar5 = (**(code **)(*param_3 + 0x180))(param_3);
  FUN_144a84a0c(&local_30,uVar5);
  if (local_28 == (longlong *)0x0) {
LAB_14654562a:
    plVar6 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    uVar5 = local_30;
    local_28 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) goto LAB_14654562a;
    local_30 = 0;
  }
  *(undefined8 *)(param_1 + 0x168) = uVar5;
  plVar2 = *(longlong **)(param_1 + 0x170);
  if (plVar6 == plVar2) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar2 = plVar6;
        goto joined_r0x000146545626;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x170) = plVar6;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x000146545626:
        if (iVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
LAB_1465455ed:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146545676 FUN_146545676 body=48 status=ok
// SIG undefined FUN_146545676(void)

void FUN_146545676(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}



// FUNCTION 14654570a FUN_14654570a body=62 status=ok
// SIG undefined FUN_14654570a(void)

undefined8 * FUN_14654570a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146545748 FUN_146545748 body=260 status=ok
// SIG undefined FUN_146545748(void)

ulonglong FUN_146545748(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_14654582d;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      iVar8 = *(int *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 8);
      local_30 = *param_2;
      local_28 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(lVar4 + iVar8,&local_30,uVar6);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_1465457c7;
    }
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
LAB_14654582d:
  uVar9 = 0;
LAB_1465457c7:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14654584e FUN_14654584e body=151 status=ok
// SIG undefined FUN_14654584e(void)

void FUN_14654584e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec4e0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b3ec470;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar3;
  return;
}



// FUNCTION 1465458e6 FUN_1465458e6 body=144 status=ok
// SIG undefined FUN_1465458e6(void)

void FUN_1465458e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec630;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar4)(puVar4,puVar1 + 6);
  }
  puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
  *puVar1 = &PTR_FUN_14b3ec5c0;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  puVar1[0xe] = uVar3;
  return;
}



// FUNCTION 146545976 FUN_146545976 body=85 status=ok
// SIG undefined FUN_146545976(void)

void FUN_146545976(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ecec0;
  return;
}



// FUNCTION 1465459cc FUN_1465459cc body=29 status=ok
// SIG undefined FUN_1465459cc(void)

undefined8 FUN_1465459cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465459ea FUN_1465459ea body=85 status=ok
// SIG undefined FUN_1465459ea(void)

void FUN_1465459ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ece20;
  return;
}



// FUNCTION 146545a40 FUN_146545a40 body=29 status=ok
// SIG undefined FUN_146545a40(void)

undefined8 FUN_146545a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146545a5e FUN_146545a5e body=85 status=ok
// SIG undefined FUN_146545a5e(void)

void FUN_146545a5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ecd80;
  return;
}



// FUNCTION 146545ab4 FUN_146545ab4 body=29 status=ok
// SIG undefined FUN_146545ab4(void)

undefined8 FUN_146545ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146545ad2 FUN_146545ad2 body=146 status=ok
// SIG undefined FUN_146545ad2(void)

void FUN_146545ad2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x230,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x230)) {
      uVar5 = uVar4 / 0x230 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x230,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146545b64 FUN_146545b64 body=132 status=ok
// SIG undefined FUN_146545b64(void)

void FUN_146545b64(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146545bea FUN_146545bea body=78 status=ok
// SIG undefined FUN_146545bea(void)

void FUN_146545bea(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146545c38 FUN_146545c38 body=154 status=ok
// SIG undefined FUN_146545c38(void)

void FUN_146545c38(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) goto LAB_146545cb1;
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x20) + 0xa8);
  if (plVar1 == (longlong *)0x0) {
LAB_146545ccf:
    lVar4 = 0;
  }
  else {
    uVar2 = FUN_1407725cc();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 == 0) goto LAB_146545ccf;
    uVar2 = FUN_1407725cc();
    lVar4 = FUN_144718840(lVar3,uVar2);
    if (lVar3 == lVar4) goto LAB_146545ccf;
  }
  FUN_1407eff2c(&local_28,lVar4);
  *(undefined4 *)(param_1 + 0x110) = local_28;
  *(undefined4 *)(param_1 + 0x114) = uStack_24;
  *(undefined4 *)(param_1 + 0x118) = uStack_20;
  *(undefined4 *)(param_1 + 0x11c) = uStack_1c;
LAB_146545cb1:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146545cd4 FUN_146545cd4 body=108 status=ok
// SIG undefined FUN_146545cd4(void)

void FUN_146545cd4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x130), lVar1 != 0)) {
    lVar2 = FUN_140a87838();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_146545d2d;
  }
  lVar3 = 0;
LAB_146545d2d:
  *(longlong *)(param_1 + 0x108) = lVar3;
  return;
}



// FUNCTION 146545d40 FUN_146545d40 body=159 status=ok
// SIG undefined FUN_146545d40(void)

void FUN_146545d40(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined1 **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bc8c2(param_1 + 0x7c0);
  if ((*(char *)(param_1 + 0x7c0) == '\0') && (*(char *)(param_1 + 0x7e9) == '\x01')) {
    *(undefined1 *)(param_1 + 0x7e9) = 2;
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = &LAB_143cba704;
  local_20 = &local_30;
  local_28 = FUN_14061a336;
  local_48 = param_2;
  FUN_1448fef12(param_1,3);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146545de0 FUN_146545de0 body=26 status=ok
// SIG undefined FUN_146545de0(void)

bool FUN_146545de0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146545dfa FUN_146545dfa body=26 status=ok
// SIG undefined FUN_146545dfa(void)

bool FUN_146545dfa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146545e14 FUN_146545e14 body=101 status=ok
// SIG undefined FUN_146545e14(void)

void FUN_146545e14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3eded0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b3ede60;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}


