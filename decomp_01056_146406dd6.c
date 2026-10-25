// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146406dd6 FUN_146406dd6 body=35 status=ok
// SIG undefined FUN_146406dd6(void)

void FUN_146406dd6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aac8c60;
  return;
}



// FUNCTION 146406df9 FUN_146406df9 body=32 status=ok
// SIG undefined FUN_146406df9(void)

void FUN_146406df9(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14aac9170;
  return;
}



// FUNCTION 146406e19 FUN_146406e19 body=66 status=ok
// SIG undefined FUN_146406e19(void)

void FUN_146406e19(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14aac9170;
  FUN_1409e1656(puVar1 + 6);
  *puVar1 = &PTR_FUN_14aac94e0;
  puVar1[6] = &PTR_LAB_14aac97c0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 146406e5b FUN_146406e5b body=49 status=ok
// SIG undefined FUN_146406e5b(void)

longlong FUN_146406e5b(void)

{
  if (DAT_14cb0ae18 == 0) {
    FUN_14073dd9a(&DAT_14cb0ae18,&PTR_LAB_14aac9498);
  }
  return DAT_14cb0ae18;
}



// FUNCTION 146406e8c FUN_146406e8c body=66 status=ok
// SIG undefined FUN_146406e8c(void)

void FUN_146406e8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aac9960;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6bc(param_1);
  return;
}



// FUNCTION 146406ece FUN_146406ece body=47 status=ok
// SIG undefined FUN_146406ece(void)

longlong FUN_146406ece(void)

{
  if (DAT_14cb0af10 == 0) {
    FUN_14073dd9a(&DAT_14cb0af10,&PTR_LAB_14aac9a18);
  }
  return DAT_14cb0af10;
}



// FUNCTION 146406efe FUN_146406efe body=55 status=ok
// SIG undefined FUN_146406efe(void)

void FUN_146406efe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0af38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0af38 = FUN_140002ddd(FUN_146406f35,uVar1,L"ExternalToolDefinition");
  }
  return;
}



// FUNCTION 146406f35 FUN_146406f35 body=47 status=ok
// SIG undefined FUN_146406f35(void)

longlong FUN_146406f35(void)

{
  if (DAT_14cb0af30 == 0) {
    FUN_14086a14e(&DAT_14cb0af30,&PTR_FUN_14aaca318);
  }
  return DAT_14cb0af30;
}



// FUNCTION 146406f64 FUN_146406f64 body=48 status=ok
// SIG undefined FUN_146406f64(void)

void FUN_146406f64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14aacd330;
  return;
}



// FUNCTION 146406f94 FUN_146406f94 body=55 status=ok
// SIG undefined FUN_146406f94(void)

void FUN_146406f94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0af50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0af50 = FUN_140002ddd(FUN_146406fcb,uVar1,L"ImportFactorySettingValues");
  }
  return;
}



// FUNCTION 146406fcb FUN_146406fcb body=49 status=ok
// SIG undefined FUN_146406fcb(void)

longlong FUN_146406fcb(void)

{
  if (DAT_14cb0af48 == 0) {
    FUN_14086a14e(&DAT_14cb0af48,&PTR_FUN_14aaca440);
  }
  return DAT_14cb0af48;
}



// FUNCTION 146406ffc FUN_146406ffc body=48 status=ok
// SIG undefined FUN_146406ffc(void)

void FUN_146406ffc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14aacd490;
  return;
}



// FUNCTION 14640702c FUN_14640702c body=55 status=ok
// SIG undefined FUN_14640702c(void)

void FUN_14640702c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0af68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0af68 = FUN_140002ddd(FUN_146407063,uVar1,L"EditorImportExportTestDefinition");
  }
  return;
}



// FUNCTION 146407063 FUN_146407063 body=47 status=ok
// SIG undefined FUN_146407063(void)

longlong FUN_146407063(void)

{
  if (DAT_14cb0af60 == 0) {
    FUN_14086a14e(&DAT_14cb0af60,&PTR_FUN_14aaca690);
  }
  return DAT_14cb0af60;
}



// FUNCTION 146407092 FUN_146407092 body=48 status=ok
// SIG undefined FUN_146407092(void)

void FUN_146407092(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14aacd5f0;
  return;
}



// FUNCTION 1464070c2 FUN_1464070c2 body=55 status=ok
// SIG undefined FUN_1464070c2(void)

void FUN_1464070c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0af80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0af80 = FUN_140002ddd(FUN_1417f39f5,uVar1,L"EditorImportWorkflowDefinition");
  }
  return;
}



// FUNCTION 1464070fa FUN_1464070fa body=48 status=ok
// SIG undefined FUN_1464070fa(void)

void FUN_1464070fa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14aacd750;
  return;
}



// FUNCTION 14640712a FUN_14640712a body=55 status=ok
// SIG undefined FUN_14640712a(void)

void FUN_14640712a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0af98 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0af98 = FUN_140002ddd(FUN_146407161,uVar1,L"BuildPromotionImportWorkflowSettings");
  }
  return;
}



// FUNCTION 146407161 FUN_146407161 body=47 status=ok
// SIG undefined FUN_146407161(void)

longlong FUN_146407161(void)

{
  if (DAT_14cb0af90 == 0) {
    FUN_14086a14e(&DAT_14cb0af90,&PTR_FUN_14aacac68);
  }
  return DAT_14cb0af90;
}



// FUNCTION 146407190 FUN_146407190 body=48 status=ok
// SIG undefined FUN_146407190(void)

void FUN_146407190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000150;
  *puVar1 = &PTR_FUN_14aacd8b0;
  return;
}



// FUNCTION 1464071c0 FUN_1464071c0 body=55 status=ok
// SIG undefined FUN_1464071c0(void)

void FUN_1464071c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0afb0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0afb0 = FUN_140002ddd(FUN_1464071f7,uVar1,L"BuildPromotionOpenAssetSettings");
  }
  return;
}



// FUNCTION 1464071f7 FUN_1464071f7 body=47 status=ok
// SIG undefined FUN_1464071f7(void)

longlong FUN_1464071f7(void)

{
  if (DAT_14cb0afa8 == 0) {
    FUN_14086a14e(&DAT_14cb0afa8,&PTR_FUN_14aacaf10);
  }
  return DAT_14cb0afa8;
}



// FUNCTION 146407226 FUN_146407226 body=48 status=ok
// SIG undefined FUN_146407226(void)

void FUN_146407226(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14aacda10;
  return;
}



// FUNCTION 146407256 FUN_146407256 body=55 status=ok
// SIG undefined FUN_146407256(void)

void FUN_146407256(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0afc8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0afc8 = FUN_140002ddd(FUN_14640728d,uVar1,L"BuildPromotionNewProjectSettings");
  }
  return;
}



// FUNCTION 14640728d FUN_14640728d body=47 status=ok
// SIG undefined FUN_14640728d(void)

longlong FUN_14640728d(void)

{
  if (DAT_14cb0afc0 == 0) {
    FUN_14086a14e(&DAT_14cb0afc0,&PTR_FUN_14aacb078);
  }
  return DAT_14cb0afc0;
}



// FUNCTION 1464072bc FUN_1464072bc body=48 status=ok
// SIG undefined FUN_1464072bc(void)

void FUN_1464072bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14aacdb70;
  return;
}



// FUNCTION 1464072ec FUN_1464072ec body=55 status=ok
// SIG undefined FUN_1464072ec(void)

void FUN_1464072ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0afe0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0afe0 = FUN_140002ddd(FUN_146407323,uVar1,L"MaterialEditorPromotionSettings");
  }
  return;
}



// FUNCTION 146407323 FUN_146407323 body=47 status=ok
// SIG undefined FUN_146407323(void)

longlong FUN_146407323(void)

{
  if (DAT_14cb0afd8 == 0) {
    FUN_14086a14e(&DAT_14cb0afd8,&PTR_FUN_14aacb218);
  }
  return DAT_14cb0afd8;
}



// FUNCTION 146407352 FUN_146407352 body=48 status=ok
// SIG undefined FUN_146407352(void)

void FUN_146407352(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14aacdcd0;
  return;
}



// FUNCTION 146407382 FUN_146407382 body=55 status=ok
// SIG undefined FUN_146407382(void)

void FUN_146407382(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0aff8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0aff8 = FUN_140002ddd(FUN_1464073b9,uVar1,L"ParticleEditorPromotionSettings");
  }
  return;
}



// FUNCTION 1464073b9 FUN_1464073b9 body=47 status=ok
// SIG undefined FUN_1464073b9(void)

longlong FUN_1464073b9(void)

{
  if (DAT_14cb0aff0 == 0) {
    FUN_14086a14e(&DAT_14cb0aff0,&PTR_FUN_14aacb310);
  }
  return DAT_14cb0aff0;
}



// FUNCTION 1464073e8 FUN_1464073e8 body=48 status=ok
// SIG undefined FUN_1464073e8(void)

void FUN_1464073e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14aacde30;
  return;
}



// FUNCTION 146407418 FUN_146407418 body=55 status=ok
// SIG undefined FUN_146407418(void)

void FUN_146407418(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b010 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b010 = FUN_140002ddd(FUN_14640744f,uVar1,L"BlueprintEditorPromotionSettings");
  }
  return;
}



// FUNCTION 14640744f FUN_14640744f body=47 status=ok
// SIG undefined FUN_14640744f(void)

longlong FUN_14640744f(void)

{
  if (DAT_14cb0b008 == 0) {
    FUN_14086a14e(&DAT_14cb0b008,&PTR_FUN_14aacb4b0);
  }
  return DAT_14cb0b008;
}



// FUNCTION 14640747e FUN_14640747e body=48 status=ok
// SIG undefined FUN_14640747e(void)

void FUN_14640747e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14aacdf90;
  return;
}



// FUNCTION 1464074ae FUN_1464074ae body=55 status=ok
// SIG undefined FUN_1464074ae(void)

void FUN_1464074ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b028 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b028 = FUN_140002ddd(FUN_1464074e5,uVar1,L"BuildPromotionTestSettings");
  }
  return;
}



// FUNCTION 1464074e5 FUN_1464074e5 body=47 status=ok
// SIG undefined FUN_1464074e5(void)

longlong FUN_1464074e5(void)

{
  if (DAT_14cb0b020 == 0) {
    FUN_14086a14e(&DAT_14cb0b020,&PTR_FUN_14aacb718);
  }
  return DAT_14cb0b020;
}



// FUNCTION 146407514 FUN_146407514 body=48 status=ok
// SIG undefined FUN_146407514(void)

void FUN_146407514(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001f0;
  *puVar1 = &PTR_FUN_14aace0f0;
  return;
}



// FUNCTION 146407544 FUN_146407544 body=55 status=ok
// SIG undefined FUN_146407544(void)

void FUN_146407544(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b040 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b040 = FUN_140002ddd(FUN_14640757b,uVar1,L"EditorMapPerformanceTestDefinition");
  }
  return;
}



// FUNCTION 14640757b FUN_14640757b body=47 status=ok
// SIG undefined FUN_14640757b(void)

longlong FUN_14640757b(void)

{
  if (DAT_14cb0b038 == 0) {
    FUN_14086a14e(&DAT_14cb0b038,&PTR_FUN_14aacb878);
  }
  return DAT_14cb0b038;
}



// FUNCTION 1464075aa FUN_1464075aa body=48 status=ok
// SIG undefined FUN_1464075aa(void)

void FUN_1464075aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14aace250;
  return;
}



// FUNCTION 1464075da FUN_1464075da body=55 status=ok
// SIG undefined FUN_1464075da(void)

void FUN_1464075da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b058 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b058 = FUN_140002ddd(FUN_146407611,uVar1,L"LaunchOnTestSettings");
  }
  return;
}



// FUNCTION 146407611 FUN_146407611 body=47 status=ok
// SIG undefined FUN_146407611(void)

longlong FUN_146407611(void)

{
  if (DAT_14cb0b050 == 0) {
    FUN_14086a14e(&DAT_14cb0b050,&PTR_FUN_14aacb998);
  }
  return DAT_14cb0b050;
}



// FUNCTION 146407640 FUN_146407640 body=48 status=ok
// SIG undefined FUN_146407640(void)

void FUN_146407640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14aace3b0;
  return;
}



// FUNCTION 146407670 FUN_146407670 body=120 status=ok
// SIG undefined FUN_146407670(void)

void FUN_146407670(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1);
  *puVar1 = &PTR_FUN_14aacc420;
  puVar1[5] = 0;
  puVar1[6] = 0;
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
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  memset(puVar1 + 0x14,0,0x2a0);
  puVar1[0x68] = 0x43800000780;
  puVar1[0x69] = 0x4120000040a00000;
  puVar1[0x6a] = 0x40a0000044160000;
  return;
}



// FUNCTION 1464076e8 FUN_1464076e8 body=47 status=ok
// SIG undefined FUN_1464076e8(void)

longlong FUN_1464076e8(void)

{
  if (DAT_14cb0b070 == 0) {
    FUN_14073dd9a(&DAT_14cb0b070,&PTR_LAB_14aacc3d8);
  }
  return DAT_14cb0b070;
}



// FUNCTION 146407717 FUN_146407717 body=54 status=ok
// SIG undefined FUN_146407717(void)

void FUN_146407717(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aacca30;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 14640774d FUN_14640774d body=47 status=ok
// SIG undefined FUN_14640774d(void)

longlong FUN_14640774d(void)

{
  if (DAT_14cb0b090 == 0) {
    FUN_14073dd9a(&DAT_14cb0b090,&PTR_LAB_14aacc9e8);
  }
  return DAT_14cb0b090;
}



// FUNCTION 14640777c FUN_14640777c body=43 status=ok
// SIG undefined FUN_14640777c(void)

void FUN_14640777c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aaccdd0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1464077a7 FUN_1464077a7 body=47 status=ok
// SIG undefined FUN_1464077a7(void)

longlong FUN_1464077a7(void)

{
  if (DAT_14cb0b0a8 == 0) {
    FUN_14073dd9a(&DAT_14cb0b0a8,&PTR_LAB_14aaccd88);
  }
  return DAT_14cb0b0a8;
}



// FUNCTION 1464077d6 FUN_1464077d6 body=40 status=ok
// SIG undefined FUN_1464077d6(void)

undefined8 FUN_1464077d6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464077fe FUN_1464077fe body=40 status=ok
// SIG undefined FUN_1464077fe(void)

undefined8 FUN_1464077fe(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407826 FUN_146407826 body=40 status=ok
// SIG undefined FUN_146407826(void)

undefined8 FUN_146407826(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640784e FUN_14640784e body=40 status=ok
// SIG undefined FUN_14640784e(void)

undefined8 FUN_14640784e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407876 FUN_146407876 body=40 status=ok
// SIG undefined FUN_146407876(void)

undefined8 FUN_146407876(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640789e FUN_14640789e body=40 status=ok
// SIG undefined FUN_14640789e(void)

undefined8 FUN_14640789e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464078c6 FUN_1464078c6 body=40 status=ok
// SIG undefined FUN_1464078c6(void)

undefined8 FUN_1464078c6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464078ee FUN_1464078ee body=40 status=ok
// SIG undefined FUN_1464078ee(void)

undefined8 FUN_1464078ee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407916 FUN_146407916 body=40 status=ok
// SIG undefined FUN_146407916(void)

undefined8 FUN_146407916(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640793e FUN_14640793e body=40 status=ok
// SIG undefined FUN_14640793e(void)

undefined8 FUN_14640793e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407966 FUN_146407966 body=40 status=ok
// SIG undefined FUN_146407966(void)

undefined8 FUN_146407966(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640798e FUN_14640798e body=52 status=ok
// SIG undefined FUN_14640798e(void)

longlong FUN_14640798e(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x30);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464079c2 FUN_1464079c2 body=69 status=ok
// SIG undefined FUN_1464079c2(void)

undefined8 * FUN_1464079c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aacca30;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407a08 FUN_146407a08 body=40 status=ok
// SIG undefined FUN_146407a08(void)

undefined8 FUN_146407a08(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407a30 FUN_146407a30 body=29 status=ok
// SIG undefined FUN_146407a30(void)

undefined8 FUN_146407a30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407a4e FUN_146407a4e body=29 status=ok
// SIG undefined FUN_146407a4e(void)

undefined8 FUN_146407a4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407a6c FUN_146407a6c body=29 status=ok
// SIG undefined FUN_146407a6c(void)

undefined8 FUN_146407a6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407a8a FUN_146407a8a body=29 status=ok
// SIG undefined FUN_146407a8a(void)

undefined8 FUN_146407a8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407aa8 FUN_146407aa8 body=29 status=ok
// SIG undefined FUN_146407aa8(void)

undefined8 FUN_146407aa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407ac6 FUN_146407ac6 body=29 status=ok
// SIG undefined FUN_146407ac6(void)

undefined8 FUN_146407ac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407ae4 FUN_146407ae4 body=29 status=ok
// SIG undefined FUN_146407ae4(void)

undefined8 FUN_146407ae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407b02 FUN_146407b02 body=29 status=ok
// SIG undefined FUN_146407b02(void)

undefined8 FUN_146407b02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407b20 FUN_146407b20 body=29 status=ok
// SIG undefined FUN_146407b20(void)

undefined8 FUN_146407b20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407b3e FUN_146407b3e body=29 status=ok
// SIG undefined FUN_146407b3e(void)

undefined8 FUN_146407b3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407b5c FUN_146407b5c body=29 status=ok
// SIG undefined FUN_146407b5c(void)

undefined8 FUN_146407b5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407b7a FUN_146407b7a body=29 status=ok
// SIG undefined FUN_146407b7a(void)

undefined8 FUN_146407b7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407b98 FUN_146407b98 body=29 status=ok
// SIG undefined FUN_146407b98(void)

undefined8 FUN_146407b98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146407bb6 FUN_146407bb6 body=140 status=ok
// SIG undefined FUN_146407bb6(void)

void FUN_146407bb6(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb0ada0;
  if (param_1 <= (int)DAT_14cb0ada0) {
    if (DAT_14cb0ada4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb0ada0) {
        uVar2 = DAT_14cb0ada0;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb0ada0 + ((ulonglong)((longlong)(int)DAT_14cb0ada0 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb0ada4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb0ad98,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146407c44 FUN_146407c44 body=101 status=ok
// SIG undefined FUN_146407c44(void)

void FUN_146407c44(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aacf480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146407ca9 FUN_146407ca9 body=69 status=ok
// SIG undefined FUN_146407ca9(void)

void FUN_146407ca9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aacf9c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
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
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 146407cee FUN_146407cee body=47 status=ok
// SIG undefined FUN_146407cee(void)

longlong FUN_146407cee(void)

{
  if (DAT_14cb0b358 == 0) {
    FUN_14073dd9a(&DAT_14cb0b358,&PTR_LAB_14aacf978);
  }
  return DAT_14cb0b358;
}



// FUNCTION 146407d1e FUN_146407d1e body=55 status=ok
// SIG undefined FUN_146407d1e(void)

void FUN_146407d1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b380 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b380 = FUN_140002ddd(FUN_146407d55,uVar1,L"TextureSourceLayerColorInfo");
  }
  return;
}



// FUNCTION 146407d55 FUN_146407d55 body=47 status=ok
// SIG undefined FUN_146407d55(void)

longlong FUN_146407d55(void)

{
  if (DAT_14cb0b378 == 0) {
    FUN_14086a14e(&DAT_14cb0b378,&PTR_FUN_14aacfd90);
  }
  return DAT_14cb0b378;
}



// FUNCTION 146407d84 FUN_146407d84 body=48 status=ok
// SIG undefined FUN_146407d84(void)

void FUN_146407d84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14aad3b90;
  return;
}



// FUNCTION 146407db4 FUN_146407db4 body=55 status=ok
// SIG undefined FUN_146407db4(void)

void FUN_146407db4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b398 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b398 = FUN_140002ddd(FUN_146407deb,uVar1,L"TextureSourceBlock");
  }
  return;
}



// FUNCTION 146407deb FUN_146407deb body=47 status=ok
// SIG undefined FUN_146407deb(void)

longlong FUN_146407deb(void)

{
  if (DAT_14cb0b390 == 0) {
    FUN_14086a14e(&DAT_14cb0b390,&PTR_FUN_14aacff98);
  }
  return DAT_14cb0b390;
}



// FUNCTION 146407e1a FUN_146407e1a body=48 status=ok
// SIG undefined FUN_146407e1a(void)

void FUN_146407e1a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14aad3cf0;
  return;
}



// FUNCTION 146407e4a FUN_146407e4a body=55 status=ok
// SIG undefined FUN_146407e4a(void)

void FUN_146407e4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b3b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b3b0 = FUN_140002ddd(FUN_146407e81,uVar1,L"TextureSource");
  }
  return;
}



// FUNCTION 146407e81 FUN_146407e81 body=47 status=ok
// SIG undefined FUN_146407e81(void)

longlong FUN_146407e81(void)

{
  if (DAT_14cb0b3a8 == 0) {
    FUN_14086a14e(&DAT_14cb0b3a8,&PTR_FUN_14aad0000);
  }
  return DAT_14cb0b3a8;
}



// FUNCTION 146407eb0 FUN_146407eb0 body=48 status=ok
// SIG undefined FUN_146407eb0(void)

void FUN_146407eb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14aad3e50;
  return;
}



// FUNCTION 146407ee0 FUN_146407ee0 body=55 status=ok
// SIG undefined FUN_146407ee0(void)

void FUN_146407ee0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b3c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b3c8 = FUN_140002ddd(FUN_146407f17,uVar1,L"TexturePlatformData");
  }
  return;
}



// FUNCTION 146407f17 FUN_146407f17 body=47 status=ok
// SIG undefined FUN_146407f17(void)

longlong FUN_146407f17(void)

{
  if (DAT_14cb0b3c0 == 0) {
    FUN_14086a14e(&DAT_14cb0b3c0,&PTR_FUN_14aad0078);
  }
  return DAT_14cb0b3c0;
}



// FUNCTION 146407f46 FUN_146407f46 body=48 status=ok
// SIG undefined FUN_146407f46(void)

void FUN_146407f46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14aad3fb0;
  return;
}



// FUNCTION 146407f76 FUN_146407f76 body=55 status=ok
// SIG undefined FUN_146407f76(void)

void FUN_146407f76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b3e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b3e0 = FUN_140002ddd(FUN_146407fad,uVar1,L"TextureFormatSettings");
  }
  return;
}



// FUNCTION 146407fad FUN_146407fad body=47 status=ok
// SIG undefined FUN_146407fad(void)

longlong FUN_146407fad(void)

{
  if (DAT_14cb0b3d8 == 0) {
    FUN_14086a14e(&DAT_14cb0b3d8,&PTR_FUN_14aad0308);
  }
  return DAT_14cb0b3d8;
}



// FUNCTION 146407fdc FUN_146407fdc body=48 status=ok
// SIG undefined FUN_146407fdc(void)

void FUN_146407fdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14aad4120;
  return;
}



// FUNCTION 14640800c FUN_14640800c body=55 status=ok
// SIG undefined FUN_14640800c(void)

void FUN_14640800c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b3f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b3f8 = FUN_140002ddd(FUN_146408043,uVar1,L"TextureSourceColorSettings");
  }
  return;
}



// FUNCTION 146408043 FUN_146408043 body=47 status=ok
// SIG undefined FUN_146408043(void)

longlong FUN_146408043(void)

{
  if (DAT_14cb0b3f0 == 0) {
    FUN_14086a14e(&DAT_14cb0b3f0,&PTR_FUN_14aad06b0);
  }
  return DAT_14cb0b3f0;
}



// FUNCTION 146408072 FUN_146408072 body=48 status=ok
// SIG undefined FUN_146408072(void)

void FUN_146408072(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14aad4280;
  return;
}



// FUNCTION 1464080a2 FUN_1464080a2 body=49 status=ok
// SIG undefined FUN_1464080a2(void)

longlong FUN_1464080a2(void)

{
  if (DAT_14cb0b438 == 0) {
    FUN_14073dd9a(&DAT_14cb0b438,&PTR_LAB_14aad14c0);
  }
  return DAT_14cb0b438;
}



// FUNCTION 1464080d3 FUN_1464080d3 body=47 status=ok
// SIG undefined FUN_1464080d3(void)

longlong FUN_1464080d3(void)

{
  if (DAT_14cb0b408 == 0) {
    FUN_14000fc22(&DAT_14cb0b408,&PTR_FUN_14aad0750);
  }
  return DAT_14cb0b408;
}



// FUNCTION 146408102 FUN_146408102 body=47 status=ok
// SIG undefined FUN_146408102(void)

longlong FUN_146408102(void)

{
  if (DAT_14cb0b410 == 0) {
    FUN_14000fc22(&DAT_14cb0b410,&PTR_FUN_14aad07e8);
  }
  return DAT_14cb0b410;
}



// FUNCTION 146408131 FUN_146408131 body=47 status=ok
// SIG undefined FUN_146408131(void)

longlong FUN_146408131(void)

{
  if (DAT_14cb0b418 == 0) {
    FUN_14000fc22(&DAT_14cb0b418,&PTR_FUN_14aad0900);
  }
  return DAT_14cb0b418;
}



// FUNCTION 146408160 FUN_146408160 body=47 status=ok
// SIG undefined FUN_146408160(void)

longlong FUN_146408160(void)

{
  if (DAT_14cb0b420 == 0) {
    FUN_14000fc22(&DAT_14cb0b420,&PTR_FUN_14aad0a08);
  }
  return DAT_14cb0b420;
}



// FUNCTION 14640818f FUN_14640818f body=47 status=ok
// SIG undefined FUN_14640818f(void)

longlong FUN_14640818f(void)

{
  if (DAT_14cb0b428 == 0) {
    FUN_14000fc22(&DAT_14cb0b428,&PTR_FUN_14aad0b70);
  }
  return DAT_14cb0b428;
}



// FUNCTION 1464081be FUN_1464081be body=34 status=ok
// SIG undefined FUN_1464081be(void)

void FUN_1464081be(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a7937e();
  FUN_14069c8d6(uVar1,&PTR_s_AreDownscalePropertiesEditable_14aad0bb0,5);
  return;
}



// FUNCTION 1464081eb FUN_1464081eb body=49 status=ok
// SIG undefined FUN_1464081eb(void)

longlong FUN_1464081eb(void)

{
  if (DAT_14cb0b4f8 == 0) {
    FUN_14073dd9a(&DAT_14cb0b4f8,&PTR_LAB_14aad2150);
  }
  return DAT_14cb0b4f8;
}



// FUNCTION 14640821c FUN_14640821c body=47 status=ok
// SIG undefined FUN_14640821c(void)

longlong FUN_14640821c(void)

{
  if (DAT_14cb0b4d8 == 0) {
    FUN_14000fc22(&DAT_14cb0b4d8,&PTR_FUN_14aad1d90);
  }
  return DAT_14cb0b4d8;
}



// FUNCTION 14640824b FUN_14640824b body=47 status=ok
// SIG undefined FUN_14640824b(void)

longlong FUN_14640824b(void)

{
  if (DAT_14cb0b4e0 == 0) {
    FUN_14000fc22(&DAT_14cb0b4e0,&PTR_FUN_14aad1e28);
  }
  return DAT_14cb0b4e0;
}



// FUNCTION 14640827a FUN_14640827a body=47 status=ok
// SIG undefined FUN_14640827a(void)

longlong FUN_14640827a(void)

{
  if (DAT_14cb0b4e8 == 0) {
    FUN_14000fc22(&DAT_14cb0b4e8,&PTR_FUN_14aad1ec0);
  }
  return DAT_14cb0b4e8;
}



// FUNCTION 1464082aa FUN_1464082aa body=34 status=ok
// SIG undefined FUN_1464082aa(void)

void FUN_1464082aa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a79692();
  FUN_14069c8d6(uVar1,&PTR_s_Blueprint_GetCPUCopy_14aad1f00,3);
  return;
}



// FUNCTION 1464082cc FUN_1464082cc body=219 status=ok
// SIG undefined FUN_1464082cc(void)

undefined8
FUN_1464082cc(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_144a79692();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464083a8 FUN_1464083a8 body=87 status=ok
// SIG undefined FUN_1464083a8(void)

void FUN_1464083a8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140307c5a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aad2d10;
  puVar1[0x19] = &PTR_FUN_14aad30b0;
  puVar1[0x1a] = &PTR_FUN_14aad30f0;
  *(byte *)((longlong)puVar1 + 0xbc) = *(byte *)((longlong)puVar1 + 0xbc) | 1;
  *(undefined1 *)(puVar1 + 0x28) = 2;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  return;
}



// FUNCTION 146408405 FUN_146408405 body=47 status=ok
// SIG undefined FUN_146408405(void)

longlong FUN_146408405(void)

{
  if (DAT_14cb0b580 == 0) {
    FUN_14073dd9a(&DAT_14cb0b580,&PTR_LAB_14aad2cc8);
  }
  return DAT_14cb0b580;
}



// FUNCTION 146408439 FUN_146408439 body=47 status=ok
// SIG undefined FUN_146408439(void)

longlong FUN_146408439(void)

{
  if (DAT_14cb0b598 == 0) {
    FUN_14073dd9a(&DAT_14cb0b598,&PTR_LAB_14aad3238);
  }
  return DAT_14cb0b598;
}



// FUNCTION 146408468 FUN_146408468 body=74 status=ok
// SIG undefined FUN_146408468(void)

void FUN_146408468(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140307c5a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aad3740;
  puVar1[0x19] = &PTR_FUN_14aad3ae0;
  puVar1[0x1a] = &PTR_FUN_14aad3b20;
  puVar1[0x27] = 0;
  return;
}



// FUNCTION 1464084b2 FUN_1464084b2 body=47 status=ok
// SIG undefined FUN_1464084b2(void)

longlong FUN_1464084b2(void)

{
  if (DAT_14cb0b5c0 == 0) {
    FUN_14073dd9a(&DAT_14cb0b5c0,&PTR_LAB_14aad36f8);
  }
  return DAT_14cb0b5c0;
}



// FUNCTION 1464084e2 FUN_1464084e2 body=40 status=ok
// SIG undefined FUN_1464084e2(void)

undefined8 FUN_1464084e2(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640850a FUN_14640850a body=40 status=ok
// SIG undefined FUN_14640850a(void)

undefined8 FUN_14640850a(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146408532 FUN_146408532 body=40 status=ok
// SIG undefined FUN_146408532(void)

undefined8 FUN_146408532(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640855a FUN_14640855a body=29 status=ok
// SIG undefined FUN_14640855a(void)

undefined8 FUN_14640855a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146408578 FUN_146408578 body=29 status=ok
// SIG undefined FUN_146408578(void)

undefined8 FUN_146408578(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146408596 FUN_146408596 body=29 status=ok
// SIG undefined FUN_146408596(void)

undefined8 FUN_146408596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464085b4 FUN_1464085b4 body=29 status=ok
// SIG undefined FUN_1464085b4(void)

undefined8 FUN_1464085b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464085d2 FUN_1464085d2 body=29 status=ok
// SIG undefined FUN_1464085d2(void)

undefined8 FUN_1464085d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464085f0 FUN_1464085f0 body=29 status=ok
// SIG undefined FUN_1464085f0(void)

undefined8 FUN_1464085f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640860d FUN_14640860d body=47 status=ok
// SIG undefined FUN_14640860d(void)

longlong FUN_14640860d(void)

{
  if (DAT_14cb0b630 == 0) {
    FUN_1409ce572(&DAT_14cb0b630,&PTR_FUN_14aad5ad0);
  }
  return DAT_14cb0b630;
}



// FUNCTION 14640863c FUN_14640863c body=47 status=ok
// SIG undefined FUN_14640863c(void)

longlong FUN_14640863c(void)

{
  if (DAT_14cb0b648 == 0) {
    FUN_1409ce572(&DAT_14cb0b648,&PTR_FUN_14aad5b50);
  }
  return DAT_14cb0b648;
}



// FUNCTION 14640866b FUN_14640866b body=47 status=ok
// SIG undefined FUN_14640866b(void)

longlong FUN_14640866b(void)

{
  if (DAT_14cb0b660 == 0) {
    FUN_1409ce572(&DAT_14cb0b660,&PTR_FUN_14aad5be0);
  }
  return DAT_14cb0b660;
}



// FUNCTION 1464086a5 FUN_1464086a5 body=80 status=ok
// SIG undefined FUN_1464086a5(void)

void FUN_1464086a5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140307bf4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aad5da0;
  puVar1[0x19] = &PTR_FUN_14aad6160;
  puVar1[0x1a] = &PTR_FUN_14aad61a0;
  *(byte *)((longlong)puVar1 + 0xbc) = *(byte *)((longlong)puVar1 + 0xbc) | 1;
  *(undefined4 *)(puVar1 + 0x2b) = 0xbf800000;
  return;
}



// FUNCTION 1464086fb FUN_1464086fb body=47 status=ok
// SIG undefined FUN_1464086fb(void)

longlong FUN_1464086fb(void)

{
  if (DAT_14cb0b680 == 0) {
    FUN_14073dd9a(&DAT_14cb0b680,&PTR_LAB_14aad5d58);
  }
  return DAT_14cb0b680;
}



// FUNCTION 14640872a FUN_14640872a body=55 status=ok
// SIG undefined FUN_14640872a(void)

void FUN_14640872a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0b698 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0b698 = FUN_140002ddd(FUN_146408761,uVar1,L"TextureLODGroup");
  }
  return;
}



// FUNCTION 146408761 FUN_146408761 body=47 status=ok
// SIG undefined FUN_146408761(void)

longlong FUN_146408761(void)

{
  if (DAT_14cb0b690 == 0) {
    FUN_14086a14e(&DAT_14cb0b690,&PTR_FUN_14aad6b48);
  }
  return DAT_14cb0b690;
}



// FUNCTION 146408790 FUN_146408790 body=48 status=ok
// SIG undefined FUN_146408790(void)

void FUN_146408790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000005c;
  *puVar1 = &PTR_FUN_14aade850;
  return;
}



// FUNCTION 1464087c0 FUN_1464087c0 body=42 status=ok
// SIG undefined FUN_1464087c0(void)

void FUN_1464087c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aad6cb0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1464087ea FUN_1464087ea body=47 status=ok
// SIG undefined FUN_1464087ea(void)

longlong FUN_1464087ea(void)

{
  if (DAT_14cb0b6b0 == 0) {
    FUN_14073dd9a(&DAT_14cb0b6b0,&PTR_LAB_14aad6c68);
  }
  return DAT_14cb0b6b0;
}



// FUNCTION 146408819 FUN_146408819 body=101 status=ok
// SIG undefined FUN_146408819(void)

void FUN_146408819(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140307c5a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aad7260;
  puVar1[0x19] = &PTR_FUN_14aad7630;
  puVar1[0x1a] = &PTR_FUN_14aad7670;
  *(undefined4 *)(puVar1 + 0x27) = 0;
  *(byte *)((longlong)puVar1 + 0xbc) = *(byte *)((longlong)puVar1 + 0xbc) | 1;
  *(byte *)((longlong)puVar1 + 0xfe) = *(byte *)((longlong)puVar1 + 0xfe) | 1;
  *(undefined1 *)((longlong)puVar1 + 0xf6) = 0x12;
  *(byte *)((longlong)puVar1 + 0x13c) = *(byte *)((longlong)puVar1 + 0x13c) & 0xf8;
  return;
}



// FUNCTION 146408889 FUN_146408889 body=49 status=ok
// SIG undefined FUN_146408889(void)

longlong FUN_146408889(void)

{
  if (DAT_14cb0b940 == 0) {
    FUN_14073dd9a(&DAT_14cb0b940,&PTR_LAB_14aad7218);
  }
  return DAT_14cb0b940;
}



// FUNCTION 1464088ba FUN_1464088ba body=49 status=ok
// SIG undefined FUN_1464088ba(void)

longlong FUN_1464088ba(void)

{
  if (DAT_14cb0b970 == 0) {
    FUN_1409ce572(&DAT_14cb0b970,&PTR_FUN_14aad7f70);
  }
  return DAT_14cb0b970;
}



// FUNCTION 1464088eb FUN_1464088eb body=49 status=ok
// SIG undefined FUN_1464088eb(void)

longlong FUN_1464088eb(void)

{
  if (DAT_14cb0b988 == 0) {
    FUN_1409ce572(&DAT_14cb0b988,&PTR_FUN_14aad8010);
  }
  return DAT_14cb0b988;
}



// FUNCTION 14640891c FUN_14640891c body=47 status=ok
// SIG undefined FUN_14640891c(void)

longlong FUN_14640891c(void)

{
  if (DAT_14cb0b9a8 == 0) {
    FUN_14073dd9a(&DAT_14cb0b9a8,&PTR_LAB_14aad8578);
  }
  return DAT_14cb0b9a8;
}



// FUNCTION 146408951 FUN_146408951 body=47 status=ok
// SIG undefined FUN_146408951(void)

longlong FUN_146408951(void)

{
  if (DAT_14cb0b9c0 == 0) {
    FUN_14073dd9a(&DAT_14cb0b9c0,&PTR_LAB_14aad88e8);
  }
  return DAT_14cb0b9c0;
}



// FUNCTION 146408985 FUN_146408985 body=47 status=ok
// SIG undefined FUN_146408985(void)

longlong FUN_146408985(void)

{
  if (DAT_14cb0b9d8 == 0) {
    FUN_14073dd9a(&DAT_14cb0b9d8,&PTR_LAB_14aad9188);
  }
  return DAT_14cb0b9d8;
}



// FUNCTION 1464089b9 FUN_1464089b9 body=47 status=ok
// SIG undefined FUN_1464089b9(void)

longlong FUN_1464089b9(void)

{
  if (DAT_14cb0b9f0 == 0) {
    FUN_14073dd9a(&DAT_14cb0b9f0,&PTR_LAB_14aad99e8);
  }
  return DAT_14cb0b9f0;
}



// FUNCTION 1464089e8 FUN_1464089e8 body=40 status=ok
// SIG undefined FUN_1464089e8(void)

void FUN_1464089e8(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x144) = param_3;
  *(undefined4 *)(param_1 + 0x29) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x15c) = param_5;
                    /* WARNING: Could not recover jumptable at 0x000146408a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}



// FUNCTION 146408a10 FUN_146408a10 body=192 status=ok
// SIG undefined FUN_146408a10(void)

void FUN_146408a10(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 0x15d) & 2) != 0) {
    *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) | 2;
  }
  puVar1 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xc7efffffe0000000;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3f) = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x79) = 0;
  puVar1[0x11] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14aadee30;
  puVar1[10] = &PTR_FUN_14aadef00;
  puVar1[0xc] = &PTR_FUN_14aadef80;
  puVar1[0x12] = param_1;
  puVar1[0x15] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 146408ad6 FUN_146408ad6 body=154 status=ok
// SIG undefined FUN_146408ad6(void)

void FUN_146408ad6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_14047a8f2();
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x128) + 0x10);
  if (lVar3 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar3,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x68) + 8) = puVar4;
  }
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *(undefined8 *)(param_1 + 0x68);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 146408b70 FUN_146408b70 body=143 status=ok
// SIG undefined FUN_146408b70(void)

LPCRITICAL_SECTION FUN_146408b70(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[1].OwningThread);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[1].OwningThread,4000);
  param_1[3].LockCount = 0;
  param_1[3].RecursionCount = 0;
  *(undefined4 *)&param_1[3].OwningThread = 0;
  param_1[2].OwningThread = (HANDLE)0x0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  *(undefined8 *)((longlong)&param_1[3].OwningThread + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[3].LockSemaphore + 4) = 0;
  param_1[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[4].LockCount = 0;
  *(undefined2 *)&param_1[4].OwningThread = 0;
  return param_1;
}



// FUNCTION 146408c00 FUN_146408c00 body=32 status=ok
// SIG undefined FUN_146408c00(void)

void FUN_146408c00(longlong param_1)

{
  FUN_1402b6186();
  FUN_140cbebe8(param_1 + 0x40,0);
  return;
}



// FUNCTION 146408c20 FUN_146408c20 body=55 status=ok
// SIG undefined FUN_146408c20(void)

void FUN_146408c20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0bd18 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0bd18 = FUN_140002ddd(FUN_146408c57,uVar1,L"TTTrackBase");
  }
  return;
}



// FUNCTION 146408c57 FUN_146408c57 body=47 status=ok
// SIG undefined FUN_146408c57(void)

longlong FUN_146408c57(void)

{
  if (DAT_14cb0bd10 == 0) {
    FUN_14086a14e(&DAT_14cb0bd10,&PTR_FUN_14aadaf40);
  }
  return DAT_14cb0bd10;
}



// FUNCTION 146408c86 FUN_146408c86 body=48 status=ok
// SIG undefined FUN_146408c86(void)

void FUN_146408c86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14aadf360;
  return;
}



// FUNCTION 146408cb6 FUN_146408cb6 body=55 status=ok
// SIG undefined FUN_146408cb6(void)

void FUN_146408cb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0bd30 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0bd30 = FUN_140002ddd(FUN_146408ced,uVar1,L"TTTrackId");
  }
  return;
}



// FUNCTION 146408ced FUN_146408ced body=47 status=ok
// SIG undefined FUN_146408ced(void)

longlong FUN_146408ced(void)

{
  if (DAT_14cb0bd28 == 0) {
    FUN_14086a14e(&DAT_14cb0bd28,&PTR_FUN_14aadb020);
  }
  return DAT_14cb0bd28;
}



// FUNCTION 146408d1c FUN_146408d1c body=48 status=ok
// SIG undefined FUN_146408d1c(void)

void FUN_146408d1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14aadf4d0;
  return;
}



// FUNCTION 146408d4c FUN_146408d4c body=55 status=ok
// SIG undefined FUN_146408d4c(void)

void FUN_146408d4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0bd48 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0bd48 = FUN_140002ddd(FUN_146408d83,uVar1,L"TTEventTrack");
  }
  return;
}



// FUNCTION 146408d83 FUN_146408d83 body=47 status=ok
// SIG undefined FUN_146408d83(void)

longlong FUN_146408d83(void)

{
  if (DAT_14cb0bd40 == 0) {
    FUN_14086a14e(&DAT_14cb0bd40,&PTR_FUN_14aadb110);
  }
  return DAT_14cb0bd40;
}



// FUNCTION 146408db2 FUN_146408db2 body=48 status=ok
// SIG undefined FUN_146408db2(void)

void FUN_146408db2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14aadf640;
  return;
}



// FUNCTION 146408de2 FUN_146408de2 body=55 status=ok
// SIG undefined FUN_146408de2(void)

void FUN_146408de2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0bd60 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0bd60 = FUN_140002ddd(FUN_146408e19,uVar1,L"TTPropertyTrack");
  }
  return;
}



// FUNCTION 146408e19 FUN_146408e19 body=49 status=ok
// SIG undefined FUN_146408e19(void)

longlong FUN_146408e19(void)

{
  if (DAT_14cb0bd58 == 0) {
    FUN_14086a14e(&DAT_14cb0bd58,&PTR_FUN_14aadb1b8);
  }
  return DAT_14cb0bd58;
}



// FUNCTION 146408e4a FUN_146408e4a body=48 status=ok
// SIG undefined FUN_146408e4a(void)

void FUN_146408e4a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14aadf7b0;
  return;
}



// FUNCTION 146408e7a FUN_146408e7a body=55 status=ok
// SIG undefined FUN_146408e7a(void)

void FUN_146408e7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0bd78 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0bd78 = FUN_140002ddd(FUN_146408eb1,uVar1,L"TTFloatTrack");
  }
  return;
}



// FUNCTION 146408eb1 FUN_146408eb1 body=47 status=ok
// SIG undefined FUN_146408eb1(void)

longlong FUN_146408eb1(void)

{
  if (DAT_14cb0bd70 == 0) {
    FUN_14086a14e(&DAT_14cb0bd70,&PTR_FUN_14aadb270);
  }
  return DAT_14cb0bd70;
}



// FUNCTION 146408ee0 FUN_146408ee0 body=48 status=ok
// SIG undefined FUN_146408ee0(void)

void FUN_146408ee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14aadf920;
  return;
}



// FUNCTION 146408f10 FUN_146408f10 body=55 status=ok
// SIG undefined FUN_146408f10(void)

void FUN_146408f10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0bd90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0bd90 = FUN_140002ddd(FUN_146408f47,uVar1,L"TTVectorTrack");
  }
  return;
}



// FUNCTION 146408f47 FUN_146408f47 body=47 status=ok
// SIG undefined FUN_146408f47(void)

longlong FUN_146408f47(void)

{
  if (DAT_14cb0bd88 == 0) {
    FUN_14086a14e(&DAT_14cb0bd88,&PTR_FUN_14aadb328);
  }
  return DAT_14cb0bd88;
}



// FUNCTION 146408f76 FUN_146408f76 body=48 status=ok
// SIG undefined FUN_146408f76(void)

void FUN_146408f76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14aadfa90;
  return;
}



// FUNCTION 146408fa6 FUN_146408fa6 body=55 status=ok
// SIG undefined FUN_146408fa6(void)

void FUN_146408fa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0bda8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0bda8 = FUN_140002ddd(FUN_146408fdd,uVar1,L"TTLinearColorTrack");
  }
  return;
}



// FUNCTION 146408fdd FUN_146408fdd body=47 status=ok
// SIG undefined FUN_146408fdd(void)

longlong FUN_146408fdd(void)

{
  if (DAT_14cb0bda0 == 0) {
    FUN_14086a14e(&DAT_14cb0bda0,&PTR_FUN_14aadb3f8);
  }
  return DAT_14cb0bda0;
}



// FUNCTION 14640900c FUN_14640900c body=48 status=ok
// SIG undefined FUN_14640900c(void)

void FUN_14640900c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14aadfc00;
  return;
}



// FUNCTION 14640903c FUN_14640903c body=90 status=ok
// SIG undefined FUN_14640903c(void)

void FUN_14640903c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aadbb60;
  puVar1[6] = 0;
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
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
  *(undefined4 *)(puVar1 + 5) = 0x40a00000;
  *(byte *)((longlong)puVar1 + 0x2d) = *(byte *)((longlong)puVar1 + 0x2d) & 0xfb;
  return;
}



// FUNCTION 14640909b FUN_14640909b body=47 status=ok
// SIG undefined FUN_14640909b(void)

longlong FUN_14640909b(void)

{
  if (DAT_14cb0bdc0 == 0) {
    FUN_14073dd9a(&DAT_14cb0bdc0,&PTR_LAB_14aadbb18);
  }
  return DAT_14cb0bdc0;
}



// FUNCTION 1464090ca FUN_1464090ca body=123 status=ok
// SIG undefined FUN_1464090ca(void)

void FUN_1464090ca(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014640913d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_149e3cbb8);
}



// FUNCTION 146409146 FUN_146409146 body=108 status=ok
// SIG undefined FUN_146409146(void)

void FUN_146409146(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    local_28.Data1 = 0;
    local_28.Data2 = 0;
    local_28.Data3 = 0;
    local_28.Data4[0] = '\0';
    local_28.Data4[1] = '\0';
    local_28.Data4[2] = '\0';
    local_28.Data4[3] = '\0';
    local_28.Data4[4] = '\0';
    local_28.Data4[5] = '\0';
    local_28.Data4[6] = '\0';
    local_28.Data4[7] = '\0';
    CoCreateGuid(&local_28);
    *(ulong *)(param_1 + 0x80) = local_28.Data1;
    *(undefined4 *)(param_1 + 0x84) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x88) = local_28.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x8c) = local_28.Data4._4_4_;
    FUN_147d73b0c(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464091b4 FUN_1464091b4 body=94 status=ok
// SIG undefined FUN_1464091b4(void)

void FUN_1464091b4(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  local_28 = 0x601d1886;
  uStack_24 = 0xac644f84;
  uStack_20 = 0xaa16d3de;
  uStack_1c = 0xdeac7d6;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 0x14) {
    FUN_147d73b0c(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14640921e FUN_14640921e body=49 status=ok
// SIG undefined FUN_14640921e(void)

longlong FUN_14640921e(void)

{
  if (DAT_14cb0be78 == 0) {
    FUN_14073dd9a(&DAT_14cb0be78,&PTR_LAB_14aadc828);
  }
  return DAT_14cb0be78;
}



// FUNCTION 14640925a FUN_14640925a body=47 status=ok
// SIG undefined FUN_14640925a(void)

longlong FUN_14640925a(void)

{
  if (DAT_14cb0be90 == 0) {
    FUN_14073dd9a(&DAT_14cb0be90,&PTR_LAB_14aadcf18);
  }
  return DAT_14cb0be90;
}



// FUNCTION 14640928a FUN_14640928a body=58 status=ok
// SIG undefined FUN_14640928a(void)

void FUN_14640928a(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401a0912();
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  FUN_140fed43c(lVar1,param_1 + 0x2a8);
  return;
}



// FUNCTION 1464092c4 thunk_FUN_14010df0a body=5 status=ok
// SIG undefined thunk_FUN_14010df0a(void)

void thunk_FUN_14010df0a(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_48 [36];
  uint uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca68);
  FUN_14482855a(param_1,param_2);
  if (*(char *)(param_1 + 0x1f9) < '\0') {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3ca68);
    if (1 < iVar3) {
      uVar4 = 0;
      if (((*(byte *)(param_1 + 0x1fa) & 1) != 0) && (uVar4 = 0, param_2[0xd] != 0)) {
        uVar4 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
      }
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        uStack_24 = uVar4;
        (**(code **)(*param_2 + 0x170))(param_2,&uStack_24,4);
        uVar4 = uStack_24;
        if (1 < uStack_24) {
          FUN_14572541c(param_2);
          uVar4 = uStack_24;
        }
      }
      else {
        uVar4 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      if (uVar4 != 0) {
        FUN_14010dffd(param_2,param_1 + 0x160);
      }
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464092ca FUN_1464092ca body=40 status=ok
// SIG undefined FUN_1464092ca(void)

undefined8 FUN_1464092ca(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464092f2 FUN_1464092f2 body=69 status=ok
// SIG undefined FUN_1464092f2(void)

undefined8 * FUN_1464092f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aad6cb0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409338 FUN_146409338 body=40 status=ok
// SIG undefined FUN_146409338(void)

undefined8 FUN_146409338(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409360 FUN_146409360 body=40 status=ok
// SIG undefined FUN_146409360(void)

undefined8 FUN_146409360(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409388 FUN_146409388 body=40 status=ok
// SIG undefined FUN_146409388(void)

undefined8 FUN_146409388(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464093b0 FUN_1464093b0 body=40 status=ok
// SIG undefined FUN_1464093b0(void)

undefined8 FUN_1464093b0(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464093d8 FUN_1464093d8 body=40 status=ok
// SIG undefined FUN_1464093d8(void)

undefined8 FUN_1464093d8(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409400 FUN_146409400 body=40 status=ok
// SIG undefined FUN_146409400(void)

undefined8 FUN_146409400(undefined8 param_1,int param_2)

{
  FUN_1402d9b92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409428 FUN_146409428 body=29 status=ok
// SIG undefined FUN_146409428(void)

undefined8 FUN_146409428(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640944e FUN_14640944e body=29 status=ok
// SIG undefined FUN_14640944e(void)

undefined8 FUN_14640944e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640946c FUN_14640946c body=29 status=ok
// SIG undefined FUN_14640946c(void)

undefined8 FUN_14640946c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640948a FUN_14640948a body=29 status=ok
// SIG undefined FUN_14640948a(void)

undefined8 FUN_14640948a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464094a8 FUN_1464094a8 body=29 status=ok
// SIG undefined FUN_1464094a8(void)

undefined8 FUN_1464094a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464094c6 FUN_1464094c6 body=29 status=ok
// SIG undefined FUN_1464094c6(void)

undefined8 FUN_1464094c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464094e4 FUN_1464094e4 body=29 status=ok
// SIG undefined FUN_1464094e4(void)

undefined8 FUN_1464094e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409502 FUN_146409502 body=29 status=ok
// SIG undefined FUN_146409502(void)

undefined8 FUN_146409502(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409520 FUN_146409520 body=29 status=ok
// SIG undefined FUN_146409520(void)

undefined8 FUN_146409520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640953e FUN_14640953e body=29 status=ok
// SIG undefined FUN_14640953e(void)

undefined8 FUN_14640953e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640955c FUN_14640955c body=29 status=ok
// SIG undefined FUN_14640955c(void)

undefined8 FUN_14640955c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640957a FUN_14640957a body=29 status=ok
// SIG undefined FUN_14640957a(void)

undefined8 FUN_14640957a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409598 FUN_146409598 body=29 status=ok
// SIG undefined FUN_146409598(void)

undefined8 FUN_146409598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464095b6 FUN_1464095b6 body=29 status=ok
// SIG undefined FUN_1464095b6(void)

undefined8 FUN_1464095b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464095d4 FUN_1464095d4 body=29 status=ok
// SIG undefined FUN_1464095d4(void)

undefined8 FUN_1464095d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464095f2 FUN_1464095f2 body=29 status=ok
// SIG undefined FUN_1464095f2(void)

undefined8 FUN_1464095f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409610 FUN_146409610 body=29 status=ok
// SIG undefined FUN_146409610(void)

undefined8 FUN_146409610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640962e FUN_14640962e body=29 status=ok
// SIG undefined FUN_14640962e(void)

undefined8 FUN_14640962e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640964c FUN_14640964c body=29 status=ok
// SIG undefined FUN_14640964c(void)

undefined8 FUN_14640964c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640966a FUN_14640966a body=29 status=ok
// SIG undefined FUN_14640966a(void)

undefined8 FUN_14640966a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146409688 FUN_146409688 body=29 status=ok
// SIG undefined FUN_146409688(void)

undefined8 FUN_146409688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464096a6 FUN_1464096a6 body=29 status=ok
// SIG undefined FUN_1464096a6(void)

undefined8 FUN_1464096a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464096c3 FUN_1464096c3 body=74 status=ok
// SIG undefined FUN_1464096c3(void)

void FUN_1464096c3(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aadc6e8;
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14640970e FUN_14640970e body=231 status=ok
// SIG undefined FUN_14640970e(void)

void FUN_14640970e(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14aae61b0;
  local_28[3] = &DAT_14cb0caf8;
  local_28[4] = FUN_1459cf15c;
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



// FUNCTION 1464097f6 FUN_1464097f6 body=279 status=ok
// SIG undefined FUN_1464097f6(void)

void FUN_1464097f6(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_149e062c0;
  local_38[3] = FUN_140dec3d5;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_28,&local_38);
  DAT_14cb0ce18 = local_28;
  FUN_1449db362(&local_38);
  DAT_14cb0cc00 = 4;
  FUN_140decbac();
  FUN_140dedfac();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14640990e FUN_14640990e body=254 status=ok
// SIG undefined FUN_14640990e(void)

undefined8
FUN_14640990e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
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
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a90c0e0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14aae65b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a465e6(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146409a0e FUN_146409a0e body=254 status=ok
// SIG undefined FUN_146409a0e(void)

undefined8
FUN_146409a0e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
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
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a90c070;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14aae6620;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145afbc56(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146409b0e FUN_146409b0e body=182 status=ok
// SIG undefined FUN_146409b0e(void)

void FUN_146409b0e(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xca8);
  if (plVar2 == param_2) {
    return;
  }
  if ((plVar2 != (longlong *)0x0) && (*(char *)(param_1 + 0xcc8) == '\x01')) {
    (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1);
  }
  *(undefined1 *)(param_1 + 0xcc8) = 0;
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xca8) = 0;
  }
  else {
    if (((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
      *(longlong **)(param_1 + 0xca8) = param_2;
    }
    else {
      bVar3 = (*(uint *)(param_2 + 1) & 0x40000000) != 0;
      plVar2 = (longlong *)0x0;
      if (!bVar3) {
        plVar2 = param_2;
      }
      *(longlong **)(param_1 + 0xca8) = plVar2;
      if (bVar3) goto LAB_146409b72;
    }
    uVar1 = (**(code **)(*param_2 + 0x2c0))(param_2,param_1);
    *(undefined1 *)(param_1 + 0xcc8) = uVar1;
  }
LAB_146409b72:
  FUN_1447f69b6(param_1 + 0xcb0);
  return;
}



// FUNCTION 146409bc4 FUN_146409bc4 body=154 status=ok
// SIG undefined FUN_146409bc4(void)

void FUN_146409bc4(longlong param_1)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x928) == 0) &&
     (uVar1 = FUN_1403bc29f(DAT_14ca85550), (uVar1 & 8) != 0)) {
    FUN_14475cc44(param_1 + 0x930,&local_30);
    puVar2 = local_30;
    if (local_28 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_14154f5bb(param_1 + 0x928,puVar2);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146409c60 FUN_146409c60 body=577 status=ok
// SIG undefined FUN_146409c60(void)

void FUN_146409c60(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cf38) && (FUN_144b3d300(&DAT_14cb0cf38), DAT_14cb0cf38 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Substrate",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14cb0cf30 = 0;
    }
    else {
      DAT_14cb0cf30 = (**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14cb0cf38);
  }
  lVar2 = DAT_14cb0cf30;
  if (DAT_14cb0cf30 == 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
    }
    bVar1 = 0 < *(int *)(lVar2 + uVar5 * 4);
  }
  if ((*(longlong *)(param_1 + 0x9a0) == 0) && (*(longlong *)(param_1 + 0x9a8) != 0)) {
    FUN_14475cc44(param_1 + 0x9a8,&local_38);
    puVar6 = local_38;
    if (local_30 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_14154f5bb(param_1 + 0x9a0,puVar6);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(longlong *)(param_1 + 0x9c8) == 0) && (*(longlong *)(param_1 + 0x9d0) != 0)) {
    FUN_14475cc44(param_1 + 0x9d0,&local_38);
    puVar6 = local_38;
    if (local_30 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_14154f5bb(param_1 + 0x9c8,puVar6);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((bVar1) && (*(longlong *)(param_1 + 0x9f0) == 0)) && (*(longlong *)(param_1 + 0x9f8) != 0)) {
    FUN_14475cc44(param_1 + 0x9f8,&local_38);
    puVar6 = local_38;
    if (local_30 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_14154f5bb(param_1 + 0x9f0,puVar6);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146409ea2 FUN_146409ea2 body=187 status=ok
// SIG undefined FUN_146409ea2(void)

undefined8 FUN_146409ea2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146409f5e FUN_146409f5e body=190 status=ok
// SIG undefined FUN_146409f5e(void)

void FUN_146409f5e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar4 = &PTR_LAB_14aae5530;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14aae6b20;
  plVar5[2] = (longlong)puVar4;
  *(undefined8 **)(param_1 + 0x1058) = puVar4;
  plVar3 = *(longlong **)(param_1 + 0x1060);
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x1060) = plVar5;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 14640a01c FUN_14640a01c body=68 status=ok
// SIG undefined FUN_14640a01c(void)

undefined4 FUN_14640a01c(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14cb0cf90;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined4 *)(lVar1 + uVar3 * 4);
}



// FUNCTION 14640a060 FUN_14640a060 body=68 status=ok
// SIG undefined FUN_14640a060(void)

void FUN_14640a060(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  
  plVar1 = DAT_14cb0cf88;
  uVar2 = (**(code **)(*DAT_14cb0cf88 + 0x18))(DAT_14cb0cf88);
  uVar3 = 0x1000000;
  if ((uVar2 & 0xff000000) != 0) {
    uVar3 = uVar2 & 0xff000000;
  }
  FUN_140635f48(plVar1,param_2,uVar3,0);
  return;
}



// FUNCTION 14640a0b0 FUN_14640a0b0 body=62 status=ok
// SIG undefined FUN_14640a0b0(void)

longlong FUN_14640a0b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)*(uint *)(param_1 + 0x1150)) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + uVar2 * 8);
      if (*(longlong *)(lVar1 + 0x230) == param_2) {
        lVar1 = *(longlong *)(lVar1 + 0x2a8);
        if (lVar1 == 0) {
          return 0;
        }
        if (*(int *)(lVar1 + 0x40) < 1) {
          lVar1 = 0;
        }
        else {
          lVar1 = **(longlong **)(lVar1 + 0x38);
          if ((lVar1 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar1);
          }
        }
        return lVar1;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_1 + 0x1150) != uVar2);
  }
  return 0;
}



// FUNCTION 14640a0ee FUN_14640a0ee body=542 status=ok
// SIG undefined FUN_14640a0ee(void)

longlong * FUN_14640a0ee(longlong param_1,longlong param_2,longlong param_3)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  longlong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_3;
  if ((longlong)*(int *)(param_1 + 0x10f0) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x10e8);
    lVar3 = (longlong)*(int *)(param_1 + 0x10f0) * 0x28;
    do {
      if (plVar5[1] != 0 && plVar5[1] == param_3) {
        if (plVar5 != (longlong *)0x0) goto LAB_14640a287;
        break;
      }
      plVar5 = plVar5 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  FUN_1400021e4(&local_50,&local_60);
  pvVar1 = local_60;
  local_70 = (void *)0x0;
  local_68 = local_58;
  if ((longlong)local_58 == 0) {
    local_64 = 0;
    local_40 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_58,0);
    memcpy(local_70,pvVar1,(longlong)local_58 * 2);
    pvVar1 = local_70;
    lVar3 = (longlong)local_68;
    local_48 = (void *)0x0;
    local_40 = local_68;
    if (lVar3 != 0) {
      FUN_1446dd670(&local_48,local_68,0);
      memcpy(local_48,pvVar1,lVar3 * 2);
      goto LAB_14640a1e3;
    }
  }
  local_48 = (void *)0x0;
  local_3c = 0;
LAB_14640a1e3:
  plVar4 = *(longlong **)(param_1 + 0x10e8);
  lVar3 = (longlong)*(int *)(param_1 + 0x10f0);
  bVar6 = 1;
  plVar5 = plVar4;
  if (lVar3 != 0) {
    plVar5 = plVar4 + lVar3 * 5;
    lVar3 = lVar3 * 0x28;
    do {
      if ((1 < (int)plVar4[3]) &&
         (cVar2 = FUN_14038a98c(&local_48,plVar4[2],(int)plVar4[3] + -1,1), cVar2 != '\0')) {
        bVar6 = 0;
        plVar5 = plVar4;
        break;
      }
      plVar4 = plVar4 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (!(bool)(~bVar6 & plVar5 != (longlong *)0x0)) {
    if ((longlong)*(int *)(param_1 + 0x10f0) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x10e8);
      lVar3 = (longlong)*(int *)(param_1 + 0x10f0) * 0x28;
      do {
        if ((*plVar5 != 0) && (*plVar5 == param_2)) goto LAB_14640a287;
        plVar5 = plVar5 + 5;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != 0);
    }
    plVar5 = (longlong *)0x0;
  }
LAB_14640a287:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 14640a30d FUN_14640a30d body=187 status=ok
// SIG undefined FUN_14640a30d(void)

undefined8 FUN_14640a30d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14640a3ca FUN_14640a3ca body=109 status=ok
// SIG undefined FUN_14640a3ca(void)

void FUN_14640a3ca(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar2);
      if (*(longlong *)(lVar1 + 0x230) == param_2) {
        if (lVar1 != 0) goto LAB_14640a406;
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar2);
  }
  lVar1 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_14640a406:
  FUN_14152bc5d(param_1,lVar1,param_3,param_4);
  return;
}



// FUNCTION 14640a438 FUN_14640a438 body=16 status=ok
// SIG undefined FUN_14640a438(void)

undefined8 FUN_14640a438(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_14490d72a(param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14640a448 FUN_14640a448 body=113 status=ok
// SIG undefined FUN_14640a448(void)

void FUN_14640a448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1405e677a();
  FUN_14020fad6(lVar1 + 0x148,param_3);
  *(undefined1 *)(lVar1 + 0x158) = param_4;
  lVar2 = FUN_14045d4ce(lVar1 + 0x160,L"Listen",0);
  if (lVar2 == 0) {
    return;
  }
  FUN_14622b792(lVar1 + 0x160,L"Listen",0,&DAT_14c872af8);
  return;
}



// FUNCTION 14640a4b9 FUN_14640a4b9 body=177 status=ok
// SIG undefined FUN_14640a4b9(void)

undefined8 FUN_14640a4b9(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145970970();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14640a56c FUN_14640a56c body=75 status=ok
// SIG undefined FUN_14640a56c(void)

void FUN_14640a56c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e677a();
  (**(code **)(*param_1 + 0x4f8))(param_1,lVar1);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(lVar1 + 0x230) = param_3;
  return;
}



// FUNCTION 14640a5b8 FUN_14640a5b8 body=160 status=ok
// SIG undefined FUN_14640a5b8(void)

void FUN_14640a5b8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 0x250) = 0;
  if (*(int *)(param_2 + 0x254) != 0) {
    FUN_1402191ca(param_2 + 0x248,0);
  }
  *(undefined4 *)(param_2 + 0x260) = 0;
  if (*(int *)(param_2 + 0x264) != 0) {
    FUN_14572c66e(param_2 + 600,0);
  }
  FUN_14020fad6(param_2 + 0x268,&DAT_149dfb77a);
  *(byte *)(param_2 + 0x278) = *(byte *)(param_2 + 0x278) & 0xfe;
  lVar1 = *(longlong *)(param_2 + 0x360);
  if ((lVar1 != 0) && (*(undefined4 *)(lVar1 + 0x778) = 0, *(int *)(lVar1 + 0x77c) != 0)) {
    FUN_1402191ca(lVar1 + 0x770,0);
    return;
  }
  return;
}



// FUNCTION 14640a658 FUN_14640a658 body=206 status=ok
// SIG undefined FUN_14640a658(void)

undefined8 FUN_14640a658(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_145a71232();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14640a728 FUN_14640a728 body=93 status=ok
// SIG undefined FUN_14640a728(void)

void FUN_14640a728(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aae61b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14640a786 FUN_14640a786 body=29 status=ok
// SIG undefined FUN_14640a786(void)

undefined8 FUN_14640a786(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640a7a4 FUN_14640a7a4 body=29 status=ok
// SIG undefined FUN_14640a7a4(void)

undefined8 FUN_14640a7a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14640a7c2 FUN_14640a7c2 body=26 status=ok
// SIG undefined FUN_14640a7c2(void)

bool FUN_14640a7c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14640a7dc FUN_14640a7dc body=24 status=ok
// SIG undefined FUN_14640a7dc(void)

bool FUN_14640a7dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14640a7f4 FUN_14640a7f4 body=26 status=ok
// SIG undefined FUN_14640a7f4(void)

bool FUN_14640a7f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14640a80e FUN_14640a80e body=24 status=ok
// SIG undefined FUN_14640a80e(void)

bool FUN_14640a80e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14640a826 FUN_14640a826 body=101 status=ok
// SIG undefined FUN_14640a826(void)

void FUN_14640a826(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aae6770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14640a88c FUN_14640a88c body=143 status=ok
// SIG undefined FUN_14640a88c(void)

void FUN_14640a88c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14640a91c FUN_14640a91c body=209 status=ok
// SIG undefined FUN_14640a91c(void)

undefined8 FUN_14640a91c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_140259bea();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14640a9ee FUN_14640a9ee body=132 status=ok
// SIG undefined FUN_14640a9ee(void)

void FUN_14640a9ee(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14640aa72 FUN_14640aa72 body=47 status=ok
// SIG undefined FUN_14640aa72(void)

longlong FUN_14640aa72(void)

{
  if (DAT_14cb0db78 == 0) {
    FUN_14073dd9a(&DAT_14cb0db78,&PTR_LAB_14aae7b58);
  }
  return DAT_14cb0db78;
}



// FUNCTION 14640aaa1 FUN_14640aaa1 body=47 status=ok
// SIG undefined FUN_14640aaa1(void)

longlong FUN_14640aaa1(void)

{
  if (DAT_14cb0db88 == 0) {
    FUN_1409ce572(&DAT_14cb0db88,&PTR_FUN_14aae7f00);
  }
  return DAT_14cb0db88;
}



// FUNCTION 14640aad0 FUN_14640aad0 body=47 status=ok
// SIG undefined FUN_14640aad0(void)

longlong FUN_14640aad0(void)

{
  if (DAT_14cb0dba0 == 0) {
    FUN_1409ce572(&DAT_14cb0dba0,&PTR_FUN_14aae7fa0);
  }
  return DAT_14cb0dba0;
}



// FUNCTION 14640aaff FUN_14640aaff body=47 status=ok
// SIG undefined FUN_14640aaff(void)

longlong FUN_14640aaff(void)

{
  if (DAT_14cb0dbb8 == 0) {
    FUN_1409ce572(&DAT_14cb0dbb8,&PTR_FUN_14aae8010);
  }
  return DAT_14cb0dbb8;
}



// FUNCTION 14640ab2e FUN_14640ab2e body=55 status=ok
// SIG undefined FUN_14640ab2e(void)

void FUN_14640ab2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb0dbd8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb0dbd8 = FUN_140002ddd(FUN_14640ab65,uVar1,L"HardwareCursorReference");
  }
  return;
}



// FUNCTION 14640ab65 FUN_14640ab65 body=47 status=ok
// SIG undefined FUN_14640ab65(void)

longlong FUN_14640ab65(void)

{
  if (DAT_14cb0dbd0 == 0) {
    FUN_14086a14e(&DAT_14cb0dbd0,&PTR_FUN_14aae8128);
  }
  return DAT_14cb0dbd0;
}



// FUNCTION 14640ab94 FUN_14640ab94 body=48 status=ok
// SIG undefined FUN_14640ab94(void)

void FUN_14640ab94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14aaf7140;
  return;
}



// FUNCTION 14640abc4 FUN_14640abc4 body=47 status=ok
// SIG undefined FUN_14640abc4(void)

longlong FUN_14640abc4(void)

{
  if (DAT_14cb0dbf8 == 0) {
    FUN_14073dd9a(&DAT_14cb0dbf8,&PTR_LAB_14aae8cd0);
  }
  return DAT_14cb0dbf8;
}


