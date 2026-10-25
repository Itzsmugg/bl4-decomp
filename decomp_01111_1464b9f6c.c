// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464b9f6c FUN_1464b9f6c body=34 status=ok
// SIG undefined FUN_1464b9f6c(void)

undefined8 FUN_1464b9f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464b9f8e FUN_1464b9f8e body=55 status=ok
// SIG undefined FUN_1464b9f8e(void)

void FUN_1464b9f8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56c40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56c40 = FUN_140002ddd(FUN_141847025,uVar1,L"DamageTags");
  }
  return;
}



// FUNCTION 1464b9fc6 FUN_1464b9fc6 body=48 status=ok
// SIG undefined FUN_1464b9fc6(void)

void FUN_1464b9fc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b049820;
  return;
}



// FUNCTION 1464b9ff6 FUN_1464b9ff6 body=55 status=ok
// SIG undefined FUN_1464b9ff6(void)

void FUN_1464b9ff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56c58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56c58 = FUN_140002ddd(FUN_1464ba02d,uVar1,L"DamageTypeAspect");
  }
  return;
}



// FUNCTION 1464ba02d FUN_1464ba02d body=47 status=ok
// SIG undefined FUN_1464ba02d(void)

longlong FUN_1464ba02d(void)

{
  if (DAT_14cb56c50 == 0) {
    FUN_14086a14e(&DAT_14cb56c50,&PTR_FUN_14b041840);
  }
  return DAT_14cb56c50;
}



// FUNCTION 1464ba05c FUN_1464ba05c body=48 status=ok
// SIG undefined FUN_1464ba05c(void)

void FUN_1464ba05c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b049990;
  return;
}



// FUNCTION 1464ba08c FUN_1464ba08c body=48 status=ok
// SIG undefined FUN_1464ba08c(void)

void FUN_1464ba08c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000120;
  *puVar1 = &PTR_FUN_14b049b40;
  return;
}



// FUNCTION 1464ba0bc FUN_1464ba0bc body=35 status=ok
// SIG undefined FUN_1464ba0bc(void)

void FUN_1464ba0bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b041e60;
  return;
}



// FUNCTION 1464ba0e9 FUN_1464ba0e9 body=47 status=ok
// SIG undefined FUN_1464ba0e9(void)

longlong FUN_1464ba0e9(void)

{
  if (DAT_14cb56c88 == 0) {
    FUN_14073dd9a(&DAT_14cb56c88,&PTR_LAB_14b041e18);
  }
  return DAT_14cb56c88;
}



// FUNCTION 1464ba118 FUN_1464ba118 body=55 status=ok
// SIG undefined FUN_1464ba118(void)

void FUN_1464ba118(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56ca0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56ca0 = FUN_140002ddd(FUN_1464ba14f,uVar1,L"AttitudeDamageRules");
  }
  return;
}



// FUNCTION 1464ba14f FUN_1464ba14f body=49 status=ok
// SIG undefined FUN_1464ba14f(void)

longlong FUN_1464ba14f(void)

{
  if (DAT_14cb56c98 == 0) {
    FUN_14086a14e(&DAT_14cb56c98,&PTR_FUN_14b0423b0);
  }
  return DAT_14cb56c98;
}



// FUNCTION 1464ba180 FUN_1464ba180 body=48 status=ok
// SIG undefined FUN_1464ba180(void)

void FUN_1464ba180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b049cc0;
  return;
}



// FUNCTION 1464ba1b0 FUN_1464ba1b0 body=55 status=ok
// SIG undefined FUN_1464ba1b0(void)

void FUN_1464ba1b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56cb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56cb8 = FUN_140002ddd(FUN_1464ba1e7,uVar1,L"DamageContextSource");
  }
  return;
}



// FUNCTION 1464ba1e7 FUN_1464ba1e7 body=47 status=ok
// SIG undefined FUN_1464ba1e7(void)

longlong FUN_1464ba1e7(void)

{
  if (DAT_14cb56cb0 == 0) {
    FUN_14086a14e(&DAT_14cb56cb0,&PTR_FUN_14b0424a0);
  }
  return DAT_14cb56cb0;
}



// FUNCTION 1464ba216 FUN_1464ba216 body=48 status=ok
// SIG undefined FUN_1464ba216(void)

void FUN_1464ba216(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b049e20;
  return;
}



// FUNCTION 1464ba246 FUN_1464ba246 body=47 status=ok
// SIG undefined FUN_1464ba246(void)

longlong FUN_1464ba246(void)

{
  if (DAT_14cb56ce0 == 0) {
    FUN_14073dd9a(&DAT_14cb56ce0,&PTR_LAB_14b042840);
  }
  return DAT_14cb56ce0;
}



// FUNCTION 1464ba275 FUN_1464ba275 body=47 status=ok
// SIG undefined FUN_1464ba275(void)

longlong FUN_1464ba275(void)

{
  if (DAT_14cb56cc8 == 0) {
    FUN_14000fc22(&DAT_14cb56cc8,&PTR_FUN_14b0426b0);
  }
  return DAT_14cb56cc8;
}



// FUNCTION 1464ba2a4 FUN_1464ba2a4 body=47 status=ok
// SIG undefined FUN_1464ba2a4(void)

longlong FUN_1464ba2a4(void)

{
  if (DAT_14cb56cd0 == 0) {
    FUN_14000fc22(&DAT_14cb56cd0,&PTR_FUN_14b042758);
  }
  return DAT_14cb56cd0;
}



// FUNCTION 1464ba2d4 FUN_1464ba2d4 body=34 status=ok
// SIG undefined FUN_1464ba2d4(void)

void FUN_1464ba2d4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7f24e();
  FUN_14069c8d6(uVar1,&PTR_s_AddDangerWarningSource_14b0427a0,2);
  return;
}



// FUNCTION 1464ba2f6 FUN_1464ba2f6 body=35 status=ok
// SIG undefined FUN_1464ba2f6(void)

void FUN_1464ba2f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b042880;
  return;
}



// FUNCTION 1464ba319 FUN_1464ba319 body=47 status=ok
// SIG undefined FUN_1464ba319(void)

longlong FUN_1464ba319(void)

{
  if (DAT_14cb56d40 == 0) {
    FUN_14073dd9a(&DAT_14cb56d40,&PTR_LAB_14b042dc0);
  }
  return DAT_14cb56d40;
}



// FUNCTION 1464ba348 FUN_1464ba348 body=47 status=ok
// SIG undefined FUN_1464ba348(void)

longlong FUN_1464ba348(void)

{
  if (DAT_14cb56d30 == 0) {
    FUN_14000fc22(&DAT_14cb56d30,&PTR_FUN_14b042ba0);
  }
  return DAT_14cb56d30;
}



// FUNCTION 1464ba378 FUN_1464ba378 body=34 status=ok
// SIG undefined FUN_1464ba378(void)

void FUN_1464ba378(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140db3394();
  FUN_14069c8d6(uVar1,&PTR_s_GetLoopTrick_14b042be0,1);
  return;
}



// FUNCTION 1464ba3a5 FUN_1464ba3a5 body=57 status=ok
// SIG undefined FUN_1464ba3a5(void)

void FUN_1464ba3a5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458120b2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b042ed0;
  puVar1[5] = &PTR_FUN_14b0434b0;
  puVar1[6] = &PTR_LAB_14b0434f0;
  return;
}



// FUNCTION 1464ba3de FUN_1464ba3de body=47 status=ok
// SIG undefined FUN_1464ba3de(void)

longlong FUN_1464ba3de(void)

{
  if (DAT_14cb56d58 == 0) {
    FUN_14073dd9a(&DAT_14cb56d58,&PTR_LAB_14b042e88);
  }
  return DAT_14cb56d58;
}



// FUNCTION 1464ba40e FUN_1464ba40e body=55 status=ok
// SIG undefined FUN_1464ba40e(void)

void FUN_1464ba40e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56d70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56d70 = FUN_140002ddd(FUN_1464ba445,uVar1,L"DialogConversation");
  }
  return;
}



// FUNCTION 1464ba445 FUN_1464ba445 body=49 status=ok
// SIG undefined FUN_1464ba445(void)

longlong FUN_1464ba445(void)

{
  if (DAT_14cb56d68 == 0) {
    FUN_14086a14e(&DAT_14cb56d68,&PTR_FUN_14b043658);
  }
  return DAT_14cb56d68;
}



// FUNCTION 1464ba476 FUN_1464ba476 body=48 status=ok
// SIG undefined FUN_1464ba476(void)

void FUN_1464ba476(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14b049f80;
  return;
}



// FUNCTION 1464ba4a6 FUN_1464ba4a6 body=49 status=ok
// SIG undefined FUN_1464ba4a6(void)

longlong FUN_1464ba4a6(void)

{
  if (DAT_14cb56d80 == 0) {
    FUN_14086a14e(&DAT_14cb56d80,&PTR_FUN_14b043770);
  }
  return DAT_14cb56d80;
}



// FUNCTION 1464ba4d8 FUN_1464ba4d8 body=48 status=ok
// SIG undefined FUN_1464ba4d8(void)

void FUN_1464ba4d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b04a0e0;
  return;
}



// FUNCTION 1464ba508 FUN_1464ba508 body=47 status=ok
// SIG undefined FUN_1464ba508(void)

longlong FUN_1464ba508(void)

{
  if (DAT_14cb56d98 == 0) {
    FUN_1409ce572(&DAT_14cb56d98,&PTR_FUN_14b043830);
  }
  return DAT_14cb56d98;
}



// FUNCTION 1464ba537 FUN_1464ba537 body=47 status=ok
// SIG undefined FUN_1464ba537(void)

longlong FUN_1464ba537(void)

{
  if (DAT_14cb56db0 == 0) {
    FUN_1409ce572(&DAT_14cb56db0,&PTR_FUN_14b0438f0);
  }
  return DAT_14cb56db0;
}



// FUNCTION 1464ba566 FUN_1464ba566 body=47 status=ok
// SIG undefined FUN_1464ba566(void)

longlong FUN_1464ba566(void)

{
  if (DAT_14cb56dc8 == 0) {
    FUN_1409ce572(&DAT_14cb56dc8,&PTR_FUN_14b043970);
  }
  return DAT_14cb56dc8;
}



// FUNCTION 1464ba595 FUN_1464ba595 body=47 status=ok
// SIG undefined FUN_1464ba595(void)

longlong FUN_1464ba595(void)

{
  if (DAT_14cb56de0 == 0) {
    FUN_1409ce572(&DAT_14cb56de0,&PTR_FUN_14b0439f0);
  }
  return DAT_14cb56de0;
}



// FUNCTION 1464ba5c4 FUN_1464ba5c4 body=47 status=ok
// SIG undefined FUN_1464ba5c4(void)

longlong FUN_1464ba5c4(void)

{
  if (DAT_14cb56df8 == 0) {
    FUN_1409ce572(&DAT_14cb56df8,&PTR_FUN_14b043a60);
  }
  return DAT_14cb56df8;
}



// FUNCTION 1464ba5f3 FUN_1464ba5f3 body=47 status=ok
// SIG undefined FUN_1464ba5f3(void)

longlong FUN_1464ba5f3(void)

{
  if (DAT_14cb56e10 == 0) {
    FUN_1409ce572(&DAT_14cb56e10,&PTR_FUN_14b043ae0);
  }
  return DAT_14cb56e10;
}



// FUNCTION 1464ba622 FUN_1464ba622 body=47 status=ok
// SIG undefined FUN_1464ba622(void)

longlong FUN_1464ba622(void)

{
  if (DAT_14cb56e28 == 0) {
    FUN_1409ce572(&DAT_14cb56e28,&PTR_FUN_14b043b60);
  }
  return DAT_14cb56e28;
}



// FUNCTION 1464ba651 FUN_1464ba651 body=47 status=ok
// SIG undefined FUN_1464ba651(void)

longlong FUN_1464ba651(void)

{
  if (DAT_14cb56e40 == 0) {
    FUN_1409ce572(&DAT_14cb56e40,&PTR_FUN_14b043c10);
  }
  return DAT_14cb56e40;
}



// FUNCTION 1464ba680 FUN_1464ba680 body=47 status=ok
// SIG undefined FUN_1464ba680(void)

longlong FUN_1464ba680(void)

{
  if (DAT_14cb56e58 == 0) {
    FUN_1409ce572(&DAT_14cb56e58,&PTR_FUN_14b043ca0);
  }
  return DAT_14cb56e58;
}



// FUNCTION 1464ba6b0 FUN_1464ba6b0 body=48 status=ok
// SIG undefined FUN_1464ba6b0(void)

void FUN_1464ba6b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b04a900;
  return;
}



// FUNCTION 1464ba6e0 FUN_1464ba6e0 body=48 status=ok
// SIG undefined FUN_1464ba6e0(void)

void FUN_1464ba6e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b04aa70;
  return;
}



// FUNCTION 1464ba710 FUN_1464ba710 body=55 status=ok
// SIG undefined FUN_1464ba710(void)

void FUN_1464ba710(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56eb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56eb0 = FUN_140002ddd(FUN_1418470e9,uVar1,L"DialogEventParameters");
  }
  return;
}



// FUNCTION 1464ba748 FUN_1464ba748 body=48 status=ok
// SIG undefined FUN_1464ba748(void)

void FUN_1464ba748(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b04abf0;
  return;
}



// FUNCTION 1464ba778 FUN_1464ba778 body=49 status=ok
// SIG undefined FUN_1464ba778(void)

longlong FUN_1464ba778(void)

{
  if (DAT_14cb56ed8 == 0) {
    FUN_14073dd9a(&DAT_14cb56ed8,&PTR_LAB_14b0445c0);
  }
  return DAT_14cb56ed8;
}



// FUNCTION 1464ba7a9 FUN_1464ba7a9 body=47 status=ok
// SIG undefined FUN_1464ba7a9(void)

longlong FUN_1464ba7a9(void)

{
  if (DAT_14cb56ec8 == 0) {
    FUN_14000fc22(&DAT_14cb56ec8,&PTR_FUN_14b044508);
  }
  return DAT_14cb56ec8;
}



// FUNCTION 1464ba7d8 FUN_1464ba7d8 body=35 status=ok
// SIG undefined FUN_1464ba7d8(void)

void FUN_1464ba7d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b044600;
  return;
}



// FUNCTION 1464ba800 FUN_1464ba800 body=50 status=ok
// SIG undefined FUN_1464ba800(void)

void FUN_1464ba800(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b044a20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1464ba832 FUN_1464ba832 body=47 status=ok
// SIG undefined FUN_1464ba832(void)

longlong FUN_1464ba832(void)

{
  if (DAT_14cb56ef0 == 0) {
    FUN_14073dd9a(&DAT_14cb56ef0,&PTR_LAB_14b0449d8);
  }
  return DAT_14cb56ef0;
}



// FUNCTION 1464ba861 FUN_1464ba861 body=50 status=ok
// SIG undefined FUN_1464ba861(void)

void FUN_1464ba861(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b044e50;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1464ba893 FUN_1464ba893 body=47 status=ok
// SIG undefined FUN_1464ba893(void)

longlong FUN_1464ba893(void)

{
  if (DAT_14cb56f08 == 0) {
    FUN_14073dd9a(&DAT_14cb56f08,&PTR_LAB_14b044e08);
  }
  return DAT_14cb56f08;
}



// FUNCTION 1464ba8c2 FUN_1464ba8c2 body=62 status=ok
// SIG undefined FUN_1464ba8c2(void)

void FUN_1464ba8c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0452d0;
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



// FUNCTION 1464ba900 FUN_1464ba900 body=47 status=ok
// SIG undefined FUN_1464ba900(void)

longlong FUN_1464ba900(void)

{
  if (DAT_14cb56f20 == 0) {
    FUN_14073dd9a(&DAT_14cb56f20,&PTR_LAB_14b045288);
  }
  return DAT_14cb56f20;
}



// FUNCTION 1464ba92f FUN_1464ba92f body=50 status=ok
// SIG undefined FUN_1464ba92f(void)

void FUN_1464ba92f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0456b0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464ba961 FUN_1464ba961 body=47 status=ok
// SIG undefined FUN_1464ba961(void)

longlong FUN_1464ba961(void)

{
  if (DAT_14cb56f38 == 0) {
    FUN_14073dd9a(&DAT_14cb56f38,&PTR_LAB_14b045668);
  }
  return DAT_14cb56f38;
}



// FUNCTION 1464ba990 FUN_1464ba990 body=50 status=ok
// SIG undefined FUN_1464ba990(void)

void FUN_1464ba990(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b045a90;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464ba9c2 FUN_1464ba9c2 body=47 status=ok
// SIG undefined FUN_1464ba9c2(void)

longlong FUN_1464ba9c2(void)

{
  if (DAT_14cb56f50 == 0) {
    FUN_14073dd9a(&DAT_14cb56f50,&PTR_LAB_14b045a48);
  }
  return DAT_14cb56f50;
}



// FUNCTION 1464ba9f1 FUN_1464ba9f1 body=50 status=ok
// SIG undefined FUN_1464ba9f1(void)

void FUN_1464ba9f1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b045eb0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1464baa23 FUN_1464baa23 body=47 status=ok
// SIG undefined FUN_1464baa23(void)

longlong FUN_1464baa23(void)

{
  if (DAT_14cb56f68 == 0) {
    FUN_14073dd9a(&DAT_14cb56f68,&PTR_LAB_14b045e68);
  }
  return DAT_14cb56f68;
}



// FUNCTION 1464baa52 FUN_1464baa52 body=50 status=ok
// SIG undefined FUN_1464baa52(void)

void FUN_1464baa52(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0462e0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1464baa84 FUN_1464baa84 body=47 status=ok
// SIG undefined FUN_1464baa84(void)

longlong FUN_1464baa84(void)

{
  if (DAT_14cb56f80 == 0) {
    FUN_14073dd9a(&DAT_14cb56f80,&PTR_LAB_14b046298);
  }
  return DAT_14cb56f80;
}



// FUNCTION 1464baab3 FUN_1464baab3 body=50 status=ok
// SIG undefined FUN_1464baab3(void)

void FUN_1464baab3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b046700;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1464baae5 FUN_1464baae5 body=47 status=ok
// SIG undefined FUN_1464baae5(void)

longlong FUN_1464baae5(void)

{
  if (DAT_14cb56f98 == 0) {
    FUN_14073dd9a(&DAT_14cb56f98,&PTR_LAB_14b0466b8);
  }
  return DAT_14cb56f98;
}



// FUNCTION 1464bab14 FUN_1464bab14 body=50 status=ok
// SIG undefined FUN_1464bab14(void)

void FUN_1464bab14(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b046b00;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1464bab46 FUN_1464bab46 body=47 status=ok
// SIG undefined FUN_1464bab46(void)

longlong FUN_1464bab46(void)

{
  if (DAT_14cb56fb0 == 0) {
    FUN_14073dd9a(&DAT_14cb56fb0,&PTR_LAB_14b046ab8);
  }
  return DAT_14cb56fb0;
}



// FUNCTION 1464bab75 FUN_1464bab75 body=50 status=ok
// SIG undefined FUN_1464bab75(void)

void FUN_1464bab75(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b046ec0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464baba7 FUN_1464baba7 body=47 status=ok
// SIG undefined FUN_1464baba7(void)

longlong FUN_1464baba7(void)

{
  if (DAT_14cb56fc8 == 0) {
    FUN_14073dd9a(&DAT_14cb56fc8,&PTR_LAB_14b046e78);
  }
  return DAT_14cb56fc8;
}



// FUNCTION 1464babd6 FUN_1464babd6 body=50 status=ok
// SIG undefined FUN_1464babd6(void)

void FUN_1464babd6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b047290;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464bac08 FUN_1464bac08 body=47 status=ok
// SIG undefined FUN_1464bac08(void)

longlong FUN_1464bac08(void)

{
  if (DAT_14cb56fe0 == 0) {
    FUN_14073dd9a(&DAT_14cb56fe0,&PTR_LAB_14b047248);
  }
  return DAT_14cb56fe0;
}



// FUNCTION 1464bac37 FUN_1464bac37 body=50 status=ok
// SIG undefined FUN_1464bac37(void)

void FUN_1464bac37(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b047650;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464bac69 FUN_1464bac69 body=47 status=ok
// SIG undefined FUN_1464bac69(void)

longlong FUN_1464bac69(void)

{
  if (DAT_14cb56ff8 == 0) {
    FUN_14073dd9a(&DAT_14cb56ff8,&PTR_LAB_14b047608);
  }
  return DAT_14cb56ff8;
}



// FUNCTION 1464bac98 FUN_1464bac98 body=50 status=ok
// SIG undefined FUN_1464bac98(void)

void FUN_1464bac98(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b047a30;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464bacca FUN_1464bacca body=47 status=ok
// SIG undefined FUN_1464bacca(void)

longlong FUN_1464bacca(void)

{
  if (DAT_14cb57010 == 0) {
    FUN_14073dd9a(&DAT_14cb57010,&PTR_LAB_14b0479e8);
  }
  return DAT_14cb57010;
}



// FUNCTION 1464bacf9 FUN_1464bacf9 body=47 status=ok
// SIG undefined FUN_1464bacf9(void)

longlong FUN_1464bacf9(void)

{
  if (DAT_14cb57020 == 0) {
    FUN_14086a14e(&DAT_14cb57020,&PTR_FUN_14b047f48);
  }
  return DAT_14cb57020;
}



// FUNCTION 1464bad28 FUN_1464bad28 body=48 status=ok
// SIG undefined FUN_1464bad28(void)

void FUN_1464bad28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b04ad50;
  return;
}



// FUNCTION 1464bad58 FUN_1464bad58 body=47 status=ok
// SIG undefined FUN_1464bad58(void)

longlong FUN_1464bad58(void)

{
  if (DAT_14cb57038 == 0) {
    FUN_14086a14e(&DAT_14cb57038,&PTR_FUN_14b048138);
  }
  return DAT_14cb57038;
}



// FUNCTION 1464bad88 FUN_1464bad88 body=48 status=ok
// SIG undefined FUN_1464bad88(void)

void FUN_1464bad88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b04aeb0;
  return;
}



// FUNCTION 1464badb8 FUN_1464badb8 body=55 status=ok
// SIG undefined FUN_1464badb8(void)

void FUN_1464badb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57058 = FUN_140002ddd(FUN_1464badef,uVar1,L"GbxDialogLineRef");
  }
  return;
}



// FUNCTION 1464badef FUN_1464badef body=49 status=ok
// SIG undefined FUN_1464badef(void)

longlong FUN_1464badef(void)

{
  if (DAT_14cb57050 == 0) {
    FUN_14086a14e(&DAT_14cb57050,&PTR_FUN_14b048268);
  }
  return DAT_14cb57050;
}



// FUNCTION 1464bae20 FUN_1464bae20 body=48 status=ok
// SIG undefined FUN_1464bae20(void)

void FUN_1464bae20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b04b020;
  return;
}



// FUNCTION 1464bae50 FUN_1464bae50 body=47 status=ok
// SIG undefined FUN_1464bae50(void)

longlong FUN_1464bae50(void)

{
  if (DAT_14cb57068 == 0) {
    FUN_14086a14e(&DAT_14cb57068,&PTR_FUN_14b0483d8);
  }
  return DAT_14cb57068;
}



// FUNCTION 1464bae80 FUN_1464bae80 body=48 status=ok
// SIG undefined FUN_1464bae80(void)

void FUN_1464bae80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14b04b190;
  return;
}



// FUNCTION 1464baeb0 FUN_1464baeb0 body=55 status=ok
// SIG undefined FUN_1464baeb0(void)

void FUN_1464baeb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57088 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57088 = FUN_140002ddd(FUN_1464baee7,uVar1,L"GbxDialogWwiseRtpcParams");
  }
  return;
}



// FUNCTION 1464baee7 FUN_1464baee7 body=47 status=ok
// SIG undefined FUN_1464baee7(void)

longlong FUN_1464baee7(void)

{
  if (DAT_14cb57080 == 0) {
    FUN_14086a14e(&DAT_14cb57080,&PTR_FUN_14b048568);
  }
  return DAT_14cb57080;
}



// FUNCTION 1464baf16 FUN_1464baf16 body=48 status=ok
// SIG undefined FUN_1464baf16(void)

void FUN_1464baf16(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b04b2f0;
  return;
}



// FUNCTION 1464baf46 FUN_1464baf46 body=48 status=ok
// SIG undefined FUN_1464baf46(void)

void FUN_1464baf46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14b04b450;
  return;
}



// FUNCTION 1464baf76 FUN_1464baf76 body=55 status=ok
// SIG undefined FUN_1464baf76(void)

void FUN_1464baf76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb570b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb570b8 = FUN_140002ddd(FUN_1464bafad,uVar1,L"GbxDialogNameTagQualifier");
  }
  return;
}



// FUNCTION 1464bafad FUN_1464bafad body=49 status=ok
// SIG undefined FUN_1464bafad(void)

longlong FUN_1464bafad(void)

{
  if (DAT_14cb570b0 == 0) {
    FUN_14086a14e(&DAT_14cb570b0,&PTR_FUN_14b048b28);
  }
  return DAT_14cb570b0;
}



// FUNCTION 1464bafde FUN_1464bafde body=48 status=ok
// SIG undefined FUN_1464bafde(void)

void FUN_1464bafde(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b04b5f0;
  return;
}



// FUNCTION 1464bb00e FUN_1464bb00e body=55 status=ok
// SIG undefined FUN_1464bb00e(void)

void FUN_1464bb00e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb570d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb570d0 = FUN_140002ddd(FUN_1464bb045,uVar1,L"DialogParameterContainer");
  }
  return;
}



// FUNCTION 1464bb045 FUN_1464bb045 body=47 status=ok
// SIG undefined FUN_1464bb045(void)

longlong FUN_1464bb045(void)

{
  if (DAT_14cb570c8 == 0) {
    FUN_14086a14e(&DAT_14cb570c8,&PTR_FUN_14b048cb8);
  }
  return DAT_14cb570c8;
}



// FUNCTION 1464bb074 FUN_1464bb074 body=48 status=ok
// SIG undefined FUN_1464bb074(void)

void FUN_1464bb074(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b04b750;
  return;
}



// FUNCTION 1464bb0a4 FUN_1464bb0a4 body=48 status=ok
// SIG undefined FUN_1464bb0a4(void)

void FUN_1464bb0a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b04b8b0;
  return;
}



// FUNCTION 1464bb0d4 FUN_1464bb0d4 body=47 status=ok
// SIG undefined FUN_1464bb0d4(void)

longlong FUN_1464bb0d4(void)

{
  if (DAT_14cb57100 == 0) {
    FUN_14073dd9a(&DAT_14cb57100,&PTR_LAB_14b048ef8);
  }
  return DAT_14cb57100;
}



// FUNCTION 1464bb104 FUN_1464bb104 body=55 status=ok
// SIG undefined FUN_1464bb104(void)

void FUN_1464bb104(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57118 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57118 = FUN_140002ddd(FUN_14184711a,uVar1,L"DialogParameterValue");
  }
  return;
}



// FUNCTION 1464bb13c FUN_1464bb13c body=48 status=ok
// SIG undefined FUN_1464bb13c(void)

void FUN_1464bb13c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b04ba40;
  return;
}



// FUNCTION 1464bb16c FUN_1464bb16c body=55 status=ok
// SIG undefined FUN_1464bb16c(void)

void FUN_1464bb16c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57130 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57130 = FUN_140002ddd(FUN_1464bb1a3,uVar1,L"DialogParameterValueProp_DefValue");
  }
  return;
}



// FUNCTION 1464bb1a3 FUN_1464bb1a3 body=47 status=ok
// SIG undefined FUN_1464bb1a3(void)

longlong FUN_1464bb1a3(void)

{
  if (DAT_14cb57128 == 0) {
    FUN_14086a14e(&DAT_14cb57128,&PTR_FUN_14b0490d0);
  }
  return DAT_14cb57128;
}



// FUNCTION 1464bb1d2 FUN_1464bb1d2 body=48 status=ok
// SIG undefined FUN_1464bb1d2(void)

void FUN_1464bb1d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b04bbb0;
  return;
}



// FUNCTION 1464bb202 FUN_1464bb202 body=55 status=ok
// SIG undefined FUN_1464bb202(void)

void FUN_1464bb202(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57148 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57148 = FUN_140002ddd(FUN_1464bb239,uVar1,L"DialogParameterValueProp_DialogEnumValue");
  }
  return;
}



// FUNCTION 1464bb239 FUN_1464bb239 body=47 status=ok
// SIG undefined FUN_1464bb239(void)

longlong FUN_1464bb239(void)

{
  if (DAT_14cb57140 == 0) {
    FUN_14086a14e(&DAT_14cb57140,&PTR_FUN_14b0491d8);
  }
  return DAT_14cb57140;
}



// FUNCTION 1464bb268 FUN_1464bb268 body=48 status=ok
// SIG undefined FUN_1464bb268(void)

void FUN_1464bb268(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b04bd10;
  return;
}



// FUNCTION 1464bb298 FUN_1464bb298 body=55 status=ok
// SIG undefined FUN_1464bb298(void)

void FUN_1464bb298(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57160 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57160 = FUN_140002ddd(FUN_1464bb2cf,uVar1,L"DialogPlayOptions");
  }
  return;
}



// FUNCTION 1464bb2cf FUN_1464bb2cf body=49 status=ok
// SIG undefined FUN_1464bb2cf(void)

longlong FUN_1464bb2cf(void)

{
  if (DAT_14cb57158 == 0) {
    FUN_14086a14e(&DAT_14cb57158,&PTR_FUN_14b0497b8);
  }
  return DAT_14cb57158;
}



// FUNCTION 1464bb300 FUN_1464bb300 body=48 status=ok
// SIG undefined FUN_1464bb300(void)

void FUN_1464bb300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b04be70;
  return;
}



// FUNCTION 1464bb330 FUN_1464bb330 body=40 status=ok
// SIG undefined FUN_1464bb330(void)

undefined8 FUN_1464bb330(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb358 FUN_1464bb358 body=40 status=ok
// SIG undefined FUN_1464bb358(void)

undefined8 FUN_1464bb358(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb380 FUN_1464bb380 body=40 status=ok
// SIG undefined FUN_1464bb380(void)

undefined8 FUN_1464bb380(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb3a8 FUN_1464bb3a8 body=40 status=ok
// SIG undefined FUN_1464bb3a8(void)

undefined8 FUN_1464bb3a8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb3d0 FUN_1464bb3d0 body=40 status=ok
// SIG undefined FUN_1464bb3d0(void)

undefined8 FUN_1464bb3d0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb3f8 FUN_1464bb3f8 body=40 status=ok
// SIG undefined FUN_1464bb3f8(void)

undefined8 FUN_1464bb3f8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb420 FUN_1464bb420 body=40 status=ok
// SIG undefined FUN_1464bb420(void)

undefined8 FUN_1464bb420(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb448 FUN_1464bb448 body=40 status=ok
// SIG undefined FUN_1464bb448(void)

undefined8 FUN_1464bb448(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb470 FUN_1464bb470 body=40 status=ok
// SIG undefined FUN_1464bb470(void)

undefined8 FUN_1464bb470(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb498 FUN_1464bb498 body=40 status=ok
// SIG undefined FUN_1464bb498(void)

undefined8 FUN_1464bb498(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb4c0 FUN_1464bb4c0 body=40 status=ok
// SIG undefined FUN_1464bb4c0(void)

undefined8 FUN_1464bb4c0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb4e8 FUN_1464bb4e8 body=40 status=ok
// SIG undefined FUN_1464bb4e8(void)

undefined8 FUN_1464bb4e8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb510 FUN_1464bb510 body=40 status=ok
// SIG undefined FUN_1464bb510(void)

undefined8 FUN_1464bb510(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb538 FUN_1464bb538 body=40 status=ok
// SIG undefined FUN_1464bb538(void)

undefined8 FUN_1464bb538(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb560 FUN_1464bb560 body=40 status=ok
// SIG undefined FUN_1464bb560(void)

undefined8 FUN_1464bb560(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb588 FUN_1464bb588 body=40 status=ok
// SIG undefined FUN_1464bb588(void)

undefined8 FUN_1464bb588(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb5b0 FUN_1464bb5b0 body=40 status=ok
// SIG undefined FUN_1464bb5b0(void)

undefined8 FUN_1464bb5b0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb5d8 FUN_1464bb5d8 body=40 status=ok
// SIG undefined FUN_1464bb5d8(void)

undefined8 FUN_1464bb5d8(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bb600 FUN_1464bb600 body=34 status=ok
// SIG undefined FUN_1464bb600(void)

undefined8 FUN_1464bb600(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb622 FUN_1464bb622 body=34 status=ok
// SIG undefined FUN_1464bb622(void)

undefined8 FUN_1464bb622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb644 FUN_1464bb644 body=34 status=ok
// SIG undefined FUN_1464bb644(void)

undefined8 FUN_1464bb644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb666 FUN_1464bb666 body=34 status=ok
// SIG undefined FUN_1464bb666(void)

undefined8 FUN_1464bb666(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb688 FUN_1464bb688 body=34 status=ok
// SIG undefined FUN_1464bb688(void)

undefined8 FUN_1464bb688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb6aa FUN_1464bb6aa body=34 status=ok
// SIG undefined FUN_1464bb6aa(void)

undefined8 FUN_1464bb6aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb6cc FUN_1464bb6cc body=34 status=ok
// SIG undefined FUN_1464bb6cc(void)

undefined8 FUN_1464bb6cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb6ee FUN_1464bb6ee body=34 status=ok
// SIG undefined FUN_1464bb6ee(void)

undefined8 FUN_1464bb6ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb710 FUN_1464bb710 body=34 status=ok
// SIG undefined FUN_1464bb710(void)

undefined8 FUN_1464bb710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb732 FUN_1464bb732 body=28 status=ok
// SIG undefined FUN_1464bb732(void)

undefined8 FUN_1464bb732(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1464bb74e FUN_1464bb74e body=34 status=ok
// SIG undefined FUN_1464bb74e(void)

undefined8 FUN_1464bb74e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb770 FUN_1464bb770 body=44 status=ok
// SIG undefined FUN_1464bb770(void)

void FUN_1464bb770(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_2);
  return;
}



// FUNCTION 1464bb79c FUN_1464bb79c body=34 status=ok
// SIG undefined FUN_1464bb79c(void)

undefined8 FUN_1464bb79c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb7be FUN_1464bb7be body=34 status=ok
// SIG undefined FUN_1464bb7be(void)

undefined8 FUN_1464bb7be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb7e0 FUN_1464bb7e0 body=34 status=ok
// SIG undefined FUN_1464bb7e0(void)

undefined8 FUN_1464bb7e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb802 FUN_1464bb802 body=34 status=ok
// SIG undefined FUN_1464bb802(void)

undefined8 FUN_1464bb802(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb824 FUN_1464bb824 body=34 status=ok
// SIG undefined FUN_1464bb824(void)

undefined8 FUN_1464bb824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb846 FUN_1464bb846 body=34 status=ok
// SIG undefined FUN_1464bb846(void)

undefined8 FUN_1464bb846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb868 FUN_1464bb868 body=34 status=ok
// SIG undefined FUN_1464bb868(void)

undefined8 FUN_1464bb868(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb88a FUN_1464bb88a body=34 status=ok
// SIG undefined FUN_1464bb88a(void)

undefined8 FUN_1464bb88a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb8ac FUN_1464bb8ac body=44 status=ok
// SIG undefined FUN_1464bb8ac(void)

void FUN_1464bb8ac(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_2);
  return;
}



// FUNCTION 1464bb8d8 FUN_1464bb8d8 body=34 status=ok
// SIG undefined FUN_1464bb8d8(void)

undefined8 FUN_1464bb8d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb8fa FUN_1464bb8fa body=34 status=ok
// SIG undefined FUN_1464bb8fa(void)

undefined8 FUN_1464bb8fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb91c FUN_1464bb91c body=34 status=ok
// SIG undefined FUN_1464bb91c(void)

undefined8 FUN_1464bb91c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb93e FUN_1464bb93e body=34 status=ok
// SIG undefined FUN_1464bb93e(void)

undefined8 FUN_1464bb93e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb960 FUN_1464bb960 body=34 status=ok
// SIG undefined FUN_1464bb960(void)

undefined8 FUN_1464bb960(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464bb982 FUN_1464bb982 body=47 status=ok
// SIG undefined FUN_1464bb982(void)

longlong FUN_1464bb982(void)

{
  if (DAT_14cb57170 == 0) {
    FUN_1409ce572(&DAT_14cb57170,&PTR_FUN_14b04d210);
  }
  return DAT_14cb57170;
}



// FUNCTION 1464bb9b1 FUN_1464bb9b1 body=49 status=ok
// SIG undefined FUN_1464bb9b1(void)

longlong FUN_1464bb9b1(void)

{
  if (DAT_14cb57188 == 0) {
    FUN_14086a14e(&DAT_14cb57188,&PTR_FUN_14b04d440);
  }
  return DAT_14cb57188;
}



// FUNCTION 1464bb9e2 FUN_1464bb9e2 body=48 status=ok
// SIG undefined FUN_1464bb9e2(void)

void FUN_1464bb9e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b0538c0;
  return;
}



// FUNCTION 1464bba12 FUN_1464bba12 body=47 status=ok
// SIG undefined FUN_1464bba12(void)

longlong FUN_1464bba12(void)

{
  if (DAT_14cb571a8 == 0) {
    FUN_14086a14e(&DAT_14cb571a8,&PTR_FUN_14b04d710);
  }
  return DAT_14cb571a8;
}



// FUNCTION 1464bba42 FUN_1464bba42 body=48 status=ok
// SIG undefined FUN_1464bba42(void)

void FUN_1464bba42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14b053a40;
  return;
}



// FUNCTION 1464bba72 FUN_1464bba72 body=55 status=ok
// SIG undefined FUN_1464bba72(void)

void FUN_1464bba72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb571c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb571c8 = FUN_140002ddd(FUN_1464bbaa9,uVar1,L"GbxDialogLineData");
  }
  return;
}



// FUNCTION 1464bbaa9 FUN_1464bbaa9 body=47 status=ok
// SIG undefined FUN_1464bbaa9(void)

longlong FUN_1464bbaa9(void)

{
  if (DAT_14cb571c0 == 0) {
    FUN_14086a14e(&DAT_14cb571c0,&PTR_FUN_14b04d870);
  }
  return DAT_14cb571c0;
}



// FUNCTION 1464bbad8 FUN_1464bbad8 body=48 status=ok
// SIG undefined FUN_1464bbad8(void)

void FUN_1464bbad8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b053bb0;
  return;
}



// FUNCTION 1464bbb08 FUN_1464bbb08 body=49 status=ok
// SIG undefined FUN_1464bbb08(void)

longlong FUN_1464bbb08(void)

{
  if (DAT_14cb571d8 == 0) {
    FUN_14086a14e(&DAT_14cb571d8,&PTR_FUN_14b04d978);
  }
  return DAT_14cb571d8;
}



// FUNCTION 1464bbb3a FUN_1464bbb3a body=48 status=ok
// SIG undefined FUN_1464bbb3a(void)

void FUN_1464bbb3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b053d10;
  return;
}



// FUNCTION 1464bbb6a FUN_1464bbb6a body=55 status=ok
// SIG undefined FUN_1464bbb6a(void)

void FUN_1464bbb6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb571f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb571f8 = FUN_140002ddd(FUN_1464bbba1,uVar1,L"GbxDialogTriggeredLineSlot");
  }
  return;
}



// FUNCTION 1464bbba1 FUN_1464bbba1 body=47 status=ok
// SIG undefined FUN_1464bbba1(void)

longlong FUN_1464bbba1(void)

{
  if (DAT_14cb571f0 == 0) {
    FUN_14086a14e(&DAT_14cb571f0,&PTR_FUN_14b04dac0);
  }
  return DAT_14cb571f0;
}



// FUNCTION 1464bbbd0 FUN_1464bbbd0 body=48 status=ok
// SIG undefined FUN_1464bbbd0(void)

void FUN_1464bbbd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b053e90;
  return;
}



// FUNCTION 1464bbc00 FUN_1464bbc00 body=49 status=ok
// SIG undefined FUN_1464bbc00(void)

longlong FUN_1464bbc00(void)

{
  if (DAT_14cb57208 == 0) {
    FUN_14086a14e(&DAT_14cb57208,&PTR_FUN_14b04dec0);
  }
  return DAT_14cb57208;
}



// FUNCTION 1464bbc31 FUN_1464bbc31 body=49 status=ok
// SIG undefined FUN_1464bbc31(void)

longlong FUN_1464bbc31(void)

{
  if (DAT_14cb57250 == 0) {
    FUN_14086a14e(&DAT_14cb57250,&PTR_FUN_14b04e6f8);
  }
  return DAT_14cb57250;
}



// FUNCTION 1464bbc62 FUN_1464bbc62 body=48 status=ok
// SIG undefined FUN_1464bbc62(void)

void FUN_1464bbc62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000150;
  *puVar1 = &PTR_FUN_14b053ff0;
  return;
}



// FUNCTION 1464bbc92 FUN_1464bbc92 body=47 status=ok
// SIG undefined FUN_1464bbc92(void)

longlong FUN_1464bbc92(void)

{
  if (DAT_14cb57220 == 0) {
    FUN_1409ce572(&DAT_14cb57220,&PTR_FUN_14b04e020);
  }
  return DAT_14cb57220;
}



// FUNCTION 1464bbcc1 FUN_1464bbcc1 body=47 status=ok
// SIG undefined FUN_1464bbcc1(void)

longlong FUN_1464bbcc1(void)

{
  if (DAT_14cb57238 == 0) {
    FUN_1409ce572(&DAT_14cb57238,&PTR_FUN_14b04e090);
  }
  return DAT_14cb57238;
}



// FUNCTION 1464bbcf0 FUN_1464bbcf0 body=48 status=ok
// SIG undefined FUN_1464bbcf0(void)

void FUN_1464bbcf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b0542a0;
  return;
}



// FUNCTION 1464bbd20 FUN_1464bbd20 body=47 status=ok
// SIG undefined FUN_1464bbd20(void)

longlong FUN_1464bbd20(void)

{
  if (DAT_14cb57268 == 0) {
    FUN_1409ce572(&DAT_14cb57268,&PTR_FUN_14b04e7f0);
  }
  return DAT_14cb57268;
}



// FUNCTION 1464bbd5a FUN_1464bbd5a body=47 status=ok
// SIG undefined FUN_1464bbd5a(void)

longlong FUN_1464bbd5a(void)

{
  if (DAT_14cb57288 == 0) {
    FUN_14073dd9a(&DAT_14cb57288,&PTR_LAB_14b04e928);
  }
  return DAT_14cb57288;
}



// FUNCTION 1464bbd89 FUN_1464bbd89 body=35 status=ok
// SIG undefined FUN_1464bbd89(void)

void FUN_1464bbd89(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b04ea60;
  return;
}



// FUNCTION 1464bbdb1 FUN_1464bbdb1 body=47 status=ok
// SIG undefined FUN_1464bbdb1(void)

longlong FUN_1464bbdb1(void)

{
  if (DAT_14cb572a0 == 0) {
    FUN_14073dd9a(&DAT_14cb572a0,&PTR_LAB_14b04ea18);
  }
  return DAT_14cb572a0;
}



// FUNCTION 1464bbdeb FUN_1464bbdeb body=49 status=ok
// SIG undefined FUN_1464bbdeb(void)

longlong FUN_1464bbdeb(void)

{
  if (DAT_14cb57300 == 0) {
    FUN_14086a14e(&DAT_14cb57300,&PTR_FUN_14b04fa88);
  }
  return DAT_14cb57300;
}



// FUNCTION 1464bbe1c FUN_1464bbe1c body=49 status=ok
// SIG undefined FUN_1464bbe1c(void)

longlong FUN_1464bbe1c(void)

{
  if (DAT_14cb572e8 == 0) {
    FUN_14086a14e(&DAT_14cb572e8,&PTR_FUN_14b04f6a0);
  }
  return DAT_14cb572e8;
}



// FUNCTION 1464bbe4d FUN_1464bbe4d body=47 status=ok
// SIG undefined FUN_1464bbe4d(void)

longlong FUN_1464bbe4d(void)

{
  if (DAT_14cb572b8 == 0) {
    FUN_14073dd9a(&DAT_14cb572b8,&PTR_LAB_14b04f048);
  }
  return DAT_14cb572b8;
}



// FUNCTION 1464bbe7c FUN_1464bbe7c body=47 status=ok
// SIG undefined FUN_1464bbe7c(void)

longlong FUN_1464bbe7c(void)

{
  if (DAT_14cb572c8 == 0) {
    FUN_1409ce572(&DAT_14cb572c8,&PTR_FUN_14b04f3c0);
  }
  return DAT_14cb572c8;
}



// FUNCTION 1464bbeab FUN_1464bbeab body=47 status=ok
// SIG undefined FUN_1464bbeab(void)

longlong FUN_1464bbeab(void)

{
  if (DAT_14cb572e0 == 0) {
    FUN_14000fc22(&DAT_14cb572e0,&PTR_FUN_14b04f4b0);
  }
  return DAT_14cb572e0;
}



// FUNCTION 1464bbeda FUN_1464bbeda body=55 status=ok
// SIG undefined FUN_1464bbeda(void)

void FUN_1464bbeda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb572f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb572f0 = FUN_140002ddd(FUN_1464bbe1c,uVar1,L"AIDodgeBasicInfo");
  }
  return;
}



// FUNCTION 1464bbf12 FUN_1464bbf12 body=48 status=ok
// SIG undefined FUN_1464bbf12(void)

void FUN_1464bbf12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000118;
  *puVar1 = &PTR_FUN_14b054570;
  return;
}



// FUNCTION 1464bbf42 FUN_1464bbf42 body=55 status=ok
// SIG undefined FUN_1464bbf42(void)

void FUN_1464bbf42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57308 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57308 = FUN_140002ddd(FUN_1464bbdeb,uVar1,L"AIDodgeInfo");
  }
  return;
}



// FUNCTION 1464bbf7a FUN_1464bbf7a body=48 status=ok
// SIG undefined FUN_1464bbf7a(void)

void FUN_1464bbf7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a0;
  *puVar1 = &PTR_FUN_14b0546d0;
  return;
}



// FUNCTION 1464bbfaa FUN_1464bbfaa body=55 status=ok
// SIG undefined FUN_1464bbfaa(void)

void FUN_1464bbfaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57320 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57320 = FUN_140002ddd(FUN_1464bbfe1,uVar1,L"AIDodgeInstance");
  }
  return;
}



// FUNCTION 1464bbfe1 FUN_1464bbfe1 body=49 status=ok
// SIG undefined FUN_1464bbfe1(void)

longlong FUN_1464bbfe1(void)

{
  if (DAT_14cb57318 == 0) {
    FUN_14086a14e(&DAT_14cb57318,&PTR_FUN_14b04fb80);
  }
  return DAT_14cb57318;
}



// FUNCTION 1464bc012 FUN_1464bc012 body=48 status=ok
// SIG undefined FUN_1464bc012(void)

void FUN_1464bc012(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b054830;
  return;
}



// FUNCTION 1464bc042 FUN_1464bc042 body=35 status=ok
// SIG undefined FUN_1464bc042(void)

void FUN_1464bc042(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b04fcd0;
  return;
}



// FUNCTION 1464bc06f FUN_1464bc06f body=47 status=ok
// SIG undefined FUN_1464bc06f(void)

longlong FUN_1464bc06f(void)

{
  if (DAT_14cb57338 == 0) {
    FUN_14073dd9a(&DAT_14cb57338,&PTR_LAB_14b04fc88);
  }
  return DAT_14cb57338;
}



// FUNCTION 1464bc09e FUN_1464bc09e body=55 status=ok
// SIG undefined FUN_1464bc09e(void)

void FUN_1464bc09e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57350 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57350 = FUN_140002ddd(FUN_1464bc0d5,uVar1,L"AIDodgeState");
  }
  return;
}



// FUNCTION 1464bc0d5 FUN_1464bc0d5 body=47 status=ok
// SIG undefined FUN_1464bc0d5(void)

longlong FUN_1464bc0d5(void)

{
  if (DAT_14cb57348 == 0) {
    FUN_14086a14e(&DAT_14cb57348,&PTR_FUN_14b050448);
  }
  return DAT_14cb57348;
}



// FUNCTION 1464bc104 FUN_1464bc104 body=48 status=ok
// SIG undefined FUN_1464bc104(void)

void FUN_1464bc104(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000910;
  *puVar1 = &PTR_FUN_14b054990;
  return;
}



// FUNCTION 1464bc134 FUN_1464bc134 body=55 status=ok
// SIG undefined FUN_1464bc134(void)

void FUN_1464bc134(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57368 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57368 = FUN_140002ddd(FUN_1464bc16b,uVar1,L"AIDodgeTriggerZone");
  }
  return;
}



// FUNCTION 1464bc16b FUN_1464bc16b body=47 status=ok
// SIG undefined FUN_1464bc16b(void)

longlong FUN_1464bc16b(void)

{
  if (DAT_14cb57360 == 0) {
    FUN_14086a14e(&DAT_14cb57360,&PTR_FUN_14b0507e8);
  }
  return DAT_14cb57360;
}



// FUNCTION 1464bc19a FUN_1464bc19a body=48 status=ok
// SIG undefined FUN_1464bc19a(void)

void FUN_1464bc19a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b054af0;
  return;
}



// FUNCTION 1464bc1ca FUN_1464bc1ca body=47 status=ok
// SIG undefined FUN_1464bc1ca(void)

longlong FUN_1464bc1ca(void)

{
  if (DAT_14cb57380 == 0) {
    FUN_14073dd9a(&DAT_14cb57380,&PTR_LAB_14b0508d8);
  }
  return DAT_14cb57380;
}



// FUNCTION 1464bc1f9 FUN_1464bc1f9 body=49 status=ok
// SIG undefined FUN_1464bc1f9(void)

longlong FUN_1464bc1f9(void)

{
  if (DAT_14cb573c8 == 0) {
    FUN_14073dd9a(&DAT_14cb573c8,&PTR_LAB_14b051410);
  }
  return DAT_14cb573c8;
}



// FUNCTION 1464bc22a FUN_1464bc22a body=47 status=ok
// SIG undefined FUN_1464bc22a(void)

longlong FUN_1464bc22a(void)

{
  if (DAT_14cb57390 == 0) {
    FUN_14000fc22(&DAT_14cb57390,&PTR_FUN_14b050ab0);
  }
  return DAT_14cb57390;
}



// FUNCTION 1464bc259 FUN_1464bc259 body=47 status=ok
// SIG undefined FUN_1464bc259(void)

longlong FUN_1464bc259(void)

{
  if (DAT_14cb57398 == 0) {
    FUN_14000fc22(&DAT_14cb57398,&PTR_FUN_14b050c88);
  }
  return DAT_14cb57398;
}



// FUNCTION 1464bc288 FUN_1464bc288 body=47 status=ok
// SIG undefined FUN_1464bc288(void)

longlong FUN_1464bc288(void)

{
  if (DAT_14cb573a0 == 0) {
    FUN_14000fc22(&DAT_14cb573a0,&PTR_FUN_14b050da8);
  }
  return DAT_14cb573a0;
}



// FUNCTION 1464bc2b7 FUN_1464bc2b7 body=47 status=ok
// SIG undefined FUN_1464bc2b7(void)

longlong FUN_1464bc2b7(void)

{
  if (DAT_14cb573a8 == 0) {
    FUN_14000fc22(&DAT_14cb573a8,&PTR_FUN_14b050f48);
  }
  return DAT_14cb573a8;
}



// FUNCTION 1464bc2e6 FUN_1464bc2e6 body=47 status=ok
// SIG undefined FUN_1464bc2e6(void)

longlong FUN_1464bc2e6(void)

{
  if (DAT_14cb573b0 == 0) {
    FUN_14000fc22(&DAT_14cb573b0,&PTR_FUN_14b0510d8);
  }
  return DAT_14cb573b0;
}



// FUNCTION 1464bc315 FUN_1464bc315 body=47 status=ok
// SIG undefined FUN_1464bc315(void)

longlong FUN_1464bc315(void)

{
  if (DAT_14cb573b8 == 0) {
    FUN_14000fc22(&DAT_14cb573b8,&PTR_FUN_14b0512c0);
  }
  return DAT_14cb573b8;
}



// FUNCTION 1464bc344 FUN_1464bc344 body=34 status=ok
// SIG undefined FUN_1464bc344(void)

void FUN_1464bc344(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7f426();
  FUN_14069c8d6(uVar1,&PTR_s_AIDodgeOverride_14b051300,6);
  return;
}



// FUNCTION 1464bc366 FUN_1464bc366 body=35 status=ok
// SIG undefined FUN_1464bc366(void)

void FUN_1464bc366(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b051450;
  return;
}



// FUNCTION 1464bc38a FUN_1464bc38a body=55 status=ok
// SIG undefined FUN_1464bc38a(void)

void FUN_1464bc38a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb573f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb573f8 = FUN_140002ddd(FUN_1464bc3c1,uVar1,L"DynamicUsabilityBehaviorMod");
  }
  return;
}



// FUNCTION 1464bc3c1 FUN_1464bc3c1 body=47 status=ok
// SIG undefined FUN_1464bc3c1(void)

longlong FUN_1464bc3c1(void)

{
  if (DAT_14cb573f0 == 0) {
    FUN_14086a14e(&DAT_14cb573f0,&PTR_FUN_14b0518f0);
  }
  return DAT_14cb573f0;
}



// FUNCTION 1464bc3f0 FUN_1464bc3f0 body=48 status=ok
// SIG undefined FUN_1464bc3f0(void)

void FUN_1464bc3f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000198;
  *puVar1 = &PTR_FUN_14b054c50;
  return;
}



// FUNCTION 1464bc420 FUN_1464bc420 body=55 status=ok
// SIG undefined FUN_1464bc420(void)

void FUN_1464bc420(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57410 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57410 = FUN_140002ddd(FUN_1464bc457,uVar1,L"DynamicUsabilityInteractionInfo");
  }
  return;
}



// FUNCTION 1464bc457 FUN_1464bc457 body=49 status=ok
// SIG undefined FUN_1464bc457(void)

longlong FUN_1464bc457(void)

{
  if (DAT_14cb57408 == 0) {
    FUN_14086a14e(&DAT_14cb57408,&PTR_FUN_14b051b70);
  }
  return DAT_14cb57408;
}



// FUNCTION 1464bc488 FUN_1464bc488 body=48 status=ok
// SIG undefined FUN_1464bc488(void)

void FUN_1464bc488(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000180;
  *puVar1 = &PTR_FUN_14b054db0;
  return;
}



// FUNCTION 1464bc4b8 FUN_1464bc4b8 body=55 status=ok
// SIG undefined FUN_1464bc4b8(void)

void FUN_1464bc4b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57428 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57428 =
         FUN_140002ddd(FUN_1464bc4ef,uVar1,L"RegisteredDynamicUsabilityInteractionParams");
  }
  return;
}



// FUNCTION 1464bc4ef FUN_1464bc4ef body=47 status=ok
// SIG undefined FUN_1464bc4ef(void)

longlong FUN_1464bc4ef(void)

{
  if (DAT_14cb57420 == 0) {
    FUN_14086a14e(&DAT_14cb57420,&PTR_FUN_14b051cd0);
  }
  return DAT_14cb57420;
}



// FUNCTION 1464bc51e FUN_1464bc51e body=48 status=ok
// SIG undefined FUN_1464bc51e(void)

void FUN_1464bc51e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a8;
  *puVar1 = &PTR_FUN_14b054f10;
  return;
}



// FUNCTION 1464bc54e FUN_1464bc54e body=55 status=ok
// SIG undefined FUN_1464bc54e(void)

void FUN_1464bc54e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57440 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57440 = FUN_140002ddd(FUN_1464bc585,uVar1,L"RegisteredDynamicUsabilityInteractionInfo");
  }
  return;
}



// FUNCTION 1464bc585 FUN_1464bc585 body=47 status=ok
// SIG undefined FUN_1464bc585(void)

longlong FUN_1464bc585(void)

{
  if (DAT_14cb57438 == 0) {
    FUN_14086a14e(&DAT_14cb57438,&PTR_FUN_14b051e30);
  }
  return DAT_14cb57438;
}



// FUNCTION 1464bc5b4 FUN_1464bc5b4 body=48 status=ok
// SIG undefined FUN_1464bc5b4(void)

void FUN_1464bc5b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001b8;
  *puVar1 = &PTR_FUN_14b055070;
  return;
}



// FUNCTION 1464bc5e4 FUN_1464bc5e4 body=47 status=ok
// SIG undefined FUN_1464bc5e4(void)

longlong FUN_1464bc5e4(void)

{
  if (DAT_14cb57450 == 0) {
    FUN_1409ce572(&DAT_14cb57450,&PTR_FUN_14b051f30);
  }
  return DAT_14cb57450;
}



// FUNCTION 1464bc613 FUN_1464bc613 body=47 status=ok
// SIG undefined FUN_1464bc613(void)

longlong FUN_1464bc613(void)

{
  if (DAT_14cb57470 == 0) {
    FUN_14073dd9a(&DAT_14cb57470,&PTR_LAB_14b052158);
  }
  return DAT_14cb57470;
}



// FUNCTION 1464bc642 FUN_1464bc642 body=47 status=ok
// SIG undefined FUN_1464bc642(void)

longlong FUN_1464bc642(void)

{
  if (DAT_14cb57480 == 0) {
    FUN_1409ce572(&DAT_14cb57480,&PTR_FUN_14b052220);
  }
  return DAT_14cb57480;
}



// FUNCTION 1464bc672 FUN_1464bc672 body=55 status=ok
// SIG undefined FUN_1464bc672(void)

void FUN_1464bc672(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb574a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb574a0 = FUN_140002ddd(FUN_1464bc6a9,uVar1,L"EditorViewportClientState");
  }
  return;
}



// FUNCTION 1464bc6a9 FUN_1464bc6a9 body=47 status=ok
// SIG undefined FUN_1464bc6a9(void)

longlong FUN_1464bc6a9(void)

{
  if (DAT_14cb57498 == 0) {
    FUN_14086a14e(&DAT_14cb57498,&PTR_FUN_14b052508);
  }
  return DAT_14cb57498;
}



// FUNCTION 1464bc6d8 FUN_1464bc6d8 body=48 status=ok
// SIG undefined FUN_1464bc6d8(void)

void FUN_1464bc6d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b0552e0;
  return;
}



// FUNCTION 1464bc708 FUN_1464bc708 body=35 status=ok
// SIG undefined FUN_1464bc708(void)

void FUN_1464bc708(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b052600;
  return;
}



// FUNCTION 1464bc730 FUN_1464bc730 body=47 status=ok
// SIG undefined FUN_1464bc730(void)

longlong FUN_1464bc730(void)

{
  if (DAT_14cb574b8 == 0) {
    FUN_14073dd9a(&DAT_14cb574b8,&PTR_LAB_14b0525b8);
  }
  return DAT_14cb574b8;
}



// FUNCTION 1464bc75f FUN_1464bc75f body=49 status=ok
// SIG undefined FUN_1464bc75f(void)

longlong FUN_1464bc75f(void)

{
  if (DAT_14cb574c8 == 0) {
    FUN_14086a14e(&DAT_14cb574c8,&PTR_FUN_14b052938);
  }
  return DAT_14cb574c8;
}



// FUNCTION 1464bc790 FUN_1464bc790 body=48 status=ok
// SIG undefined FUN_1464bc790(void)

void FUN_1464bc790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b055440;
  return;
}



// FUNCTION 1464bc7c0 FUN_1464bc7c0 body=47 status=ok
// SIG undefined FUN_1464bc7c0(void)

longlong FUN_1464bc7c0(void)

{
  if (DAT_14cb574e8 == 0) {
    FUN_14073dd9a(&DAT_14cb574e8,&PTR_LAB_14b0529d8);
  }
  return DAT_14cb574e8;
}



// FUNCTION 1464bc7f0 FUN_1464bc7f0 body=55 status=ok
// SIG undefined FUN_1464bc7f0(void)

void FUN_1464bc7f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57500 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57500 = FUN_140002ddd(FUN_1464bc827,uVar1,L"EffectGameDataCategories_DONTUSE");
  }
  return;
}



// FUNCTION 1464bc827 FUN_1464bc827 body=47 status=ok
// SIG undefined FUN_1464bc827(void)

longlong FUN_1464bc827(void)

{
  if (DAT_14cb574f8 == 0) {
    FUN_14086a14e(&DAT_14cb574f8,&PTR_FUN_14b052ae0);
  }
  return DAT_14cb574f8;
}



// FUNCTION 1464bc856 FUN_1464bc856 body=48 status=ok
// SIG undefined FUN_1464bc856(void)

void FUN_1464bc856(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b0555f0;
  return;
}



// FUNCTION 1464bc886 FUN_1464bc886 body=47 status=ok
// SIG undefined FUN_1464bc886(void)

longlong FUN_1464bc886(void)

{
  if (DAT_14cb57510 == 0) {
    FUN_1409ce572(&DAT_14cb57510,&PTR_FUN_14b052b90);
  }
  return DAT_14cb57510;
}



// FUNCTION 1464bc8b5 FUN_1464bc8b5 body=47 status=ok
// SIG undefined FUN_1464bc8b5(void)

longlong FUN_1464bc8b5(void)

{
  if (DAT_14cb57528 == 0) {
    FUN_1409ce572(&DAT_14cb57528,&PTR_FUN_14b052c10);
  }
  return DAT_14cb57528;
}



// FUNCTION 1464bc8e4 FUN_1464bc8e4 body=47 status=ok
// SIG undefined FUN_1464bc8e4(void)

longlong FUN_1464bc8e4(void)

{
  if (DAT_14cb57540 == 0) {
    FUN_1409ce572(&DAT_14cb57540,&PTR_FUN_14b052cb0);
  }
  return DAT_14cb57540;
}



// FUNCTION 1464bc913 FUN_1464bc913 body=35 status=ok
// SIG undefined FUN_1464bc913(void)

void FUN_1464bc913(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b052d80;
  return;
}



// FUNCTION 1464bc941 FUN_1464bc941 body=47 status=ok
// SIG undefined FUN_1464bc941(void)

longlong FUN_1464bc941(void)

{
  if (DAT_14cb57560 == 0) {
    FUN_14073dd9a(&DAT_14cb57560,&PTR_LAB_14b052d38);
  }
  return DAT_14cb57560;
}



// FUNCTION 1464bc970 FUN_1464bc970 body=49 status=ok
// SIG undefined FUN_1464bc970(void)

longlong FUN_1464bc970(void)

{
  if (DAT_14cb57570 == 0) {
    FUN_1409ce572(&DAT_14cb57570,&PTR_FUN_14b0530a0);
  }
  return DAT_14cb57570;
}



// FUNCTION 1464bc9a1 FUN_1464bc9a1 body=47 status=ok
// SIG undefined FUN_1464bc9a1(void)

longlong FUN_1464bc9a1(void)

{
  if (DAT_14cb57588 == 0) {
    FUN_1409ce572(&DAT_14cb57588,&PTR_FUN_14b0531e0);
  }
  return DAT_14cb57588;
}



// FUNCTION 1464bc9d0 FUN_1464bc9d0 body=48 status=ok
// SIG undefined FUN_1464bc9d0(void)

void FUN_1464bc9d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b055b70;
  return;
}



// FUNCTION 1464bca00 FUN_1464bca00 body=47 status=ok
// SIG undefined FUN_1464bca00(void)

longlong FUN_1464bca00(void)

{
  if (DAT_14cb575b8 == 0) {
    FUN_1409ce572(&DAT_14cb575b8,&PTR_FUN_14b053380);
  }
  return DAT_14cb575b8;
}



// FUNCTION 1464bca30 FUN_1464bca30 body=55 status=ok
// SIG undefined FUN_1464bca30(void)

void FUN_1464bca30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb575d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb575d8 = FUN_140002ddd(FUN_1464bca67,uVar1,L"FactChangeValue");
  }
  return;
}



// FUNCTION 1464bca67 FUN_1464bca67 body=49 status=ok
// SIG undefined FUN_1464bca67(void)

longlong FUN_1464bca67(void)

{
  if (DAT_14cb575d0 == 0) {
    FUN_14086a14e(&DAT_14cb575d0,&PTR_FUN_14b053510);
  }
  return DAT_14cb575d0;
}



// FUNCTION 1464bca98 FUN_1464bca98 body=48 status=ok
// SIG undefined FUN_1464bca98(void)

void FUN_1464bca98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b055dc0;
  return;
}



// FUNCTION 1464bcac8 FUN_1464bcac8 body=47 status=ok
// SIG undefined FUN_1464bcac8(void)

longlong FUN_1464bcac8(void)

{
  if (DAT_14cb575e8 == 0) {
    FUN_1409ce572(&DAT_14cb575e8,&PTR_FUN_14b0535d0);
  }
  return DAT_14cb575e8;
}



// FUNCTION 1464bcaf8 FUN_1464bcaf8 body=55 status=ok
// SIG undefined FUN_1464bcaf8(void)

void FUN_1464bcaf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57608 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57608 = FUN_140002ddd(FUN_1464bcb2f,uVar1,L"FactChange");
  }
  return;
}



// FUNCTION 1464bcb2f FUN_1464bcb2f body=49 status=ok
// SIG undefined FUN_1464bcb2f(void)

longlong FUN_1464bcb2f(void)

{
  if (DAT_14cb57600 == 0) {
    FUN_14086a14e(&DAT_14cb57600,&PTR_FUN_14b053750);
  }
  return DAT_14cb57600;
}



// FUNCTION 1464bcb60 FUN_1464bcb60 body=48 status=ok
// SIG undefined FUN_1464bcb60(void)

void FUN_1464bcb60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b055fe0;
  return;
}



// FUNCTION 1464bcb90 FUN_1464bcb90 body=40 status=ok
// SIG undefined FUN_1464bcb90(void)

undefined8 FUN_1464bcb90(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bcbb8 FUN_1464bcbb8 body=40 status=ok
// SIG undefined FUN_1464bcbb8(void)

undefined8 FUN_1464bcbb8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bcbe0 FUN_1464bcbe0 body=40 status=ok
// SIG undefined FUN_1464bcbe0(void)

undefined8 FUN_1464bcbe0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bcc08 FUN_1464bcc08 body=40 status=ok
// SIG undefined FUN_1464bcc08(void)

undefined8 FUN_1464bcc08(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bcc30 FUN_1464bcc30 body=40 status=ok
// SIG undefined FUN_1464bcc30(void)

undefined8 FUN_1464bcc30(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bcc58 FUN_1464bcc58 body=40 status=ok
// SIG undefined FUN_1464bcc58(void)

undefined8 FUN_1464bcc58(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464bcc80 FUN_1464bcc80 body=29 status=ok
// SIG undefined FUN_1464bcc80(void)

undefined8 FUN_1464bcc80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


