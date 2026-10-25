// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14640ed09 FUN_14640ed09 body=47 status=ok
// SIG undefined FUN_14640ed09(void)

longlong FUN_14640ed09(void)

{
  if (DAT_14cb10b80 == 0) {
    FUN_14000fc22(&DAT_14cb10b80,&PTR_FUN_14ab0af80);
  }
  return DAT_14cb10b80;
}



// FUNCTION 14640ed38 FUN_14640ed38 body=47 status=ok
// SIG undefined FUN_14640ed38(void)

longlong FUN_14640ed38(void)

{
  if (DAT_14cb10b88 == 0) {
    FUN_14000fc22(&DAT_14cb10b88,&PTR_FUN_14ab0b020);
  }
  return DAT_14cb10b88;
}



// FUNCTION 14640ed67 FUN_14640ed67 body=47 status=ok
// SIG undefined FUN_14640ed67(void)

longlong FUN_14640ed67(void)

{
  if (DAT_14cb10b90 == 0) {
    FUN_14000fc22(&DAT_14cb10b90,&PTR_FUN_14ab0b110);
  }
  return DAT_14cb10b90;
}



// FUNCTION 14640ed96 FUN_14640ed96 body=47 status=ok
// SIG undefined FUN_14640ed96(void)

longlong FUN_14640ed96(void)

{
  if (DAT_14cb10b98 == 0) {
    FUN_14000fc22(&DAT_14cb10b98,&PTR_FUN_14ab0b200);
  }
  return DAT_14cb10b98;
}



// FUNCTION 14640edc5 FUN_14640edc5 body=47 status=ok
// SIG undefined FUN_14640edc5(void)

longlong FUN_14640edc5(void)

{
  if (DAT_14cb10ba0 == 0) {
    FUN_14000fc22(&DAT_14cb10ba0,&PTR_FUN_14ab0b2f0);
  }
  return DAT_14cb10ba0;
}



// FUNCTION 14640edf4 FUN_14640edf4 body=47 status=ok
// SIG undefined FUN_14640edf4(void)

longlong FUN_14640edf4(void)

{
  if (DAT_14cb10ba8 == 0) {
    FUN_14000fc22(&DAT_14cb10ba8,&PTR_FUN_14ab0b3e0);
  }
  return DAT_14cb10ba8;
}



// FUNCTION 14640ee24 FUN_14640ee24 body=34 status=ok
// SIG undefined FUN_14640ee24(void)

void FUN_14640ee24(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a737fe();
  FUN_14069c8d6(uVar1,&PTR_s_GetActorDescs_14ab0b420,10);
  return;
}



// FUNCTION 14640ee46 FUN_14640ee46 body=35 status=ok
// SIG undefined FUN_14640ee46(void)

void FUN_14640ee46(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0b600;
  return;
}



// FUNCTION 14640ee69 FUN_14640ee69 body=35 status=ok
// SIG undefined FUN_14640ee69(void)

void FUN_14640ee69(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0b980;
  return;
}



// FUNCTION 14640ee8c FUN_14640ee8c body=47 status=ok
// SIG undefined FUN_14640ee8c(void)

longlong FUN_14640ee8c(void)

{
  if (DAT_14cb10bd0 == 0) {
    FUN_14073dd9a(&DAT_14cb10bd0,&PTR_LAB_14ab0b938);
  }
  return DAT_14cb10bd0;
}



// FUNCTION 14640eebb FUN_14640eebb body=32 status=ok
// SIG undefined FUN_14640eebb(void)

void FUN_14640eebb(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14ab0bce0;
  return;
}



// FUNCTION 14640eedb FUN_14640eedb body=47 status=ok
// SIG undefined FUN_14640eedb(void)

longlong FUN_14640eedb(void)

{
  if (DAT_14cb10be8 == 0) {
    FUN_14073dd9a(&DAT_14cb10be8,&PTR_LAB_14ab0bc98);
  }
  return DAT_14cb10be8;
}



// FUNCTION 14640ef0a FUN_14640ef0a body=32 status=ok
// SIG undefined FUN_14640ef0a(void)

void FUN_14640ef0a(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_140dbffdc(param_1);
  *param_1 = &PTR_FUN_14ab0c050;
  return;
}



// FUNCTION 14640ef2a FUN_14640ef2a body=47 status=ok
// SIG undefined FUN_14640ef2a(void)

longlong FUN_14640ef2a(void)

{
  if (DAT_14cb10c00 == 0) {
    FUN_14073dd9a(&DAT_14cb10c00,&PTR_LAB_14ab0c008);
  }
  return DAT_14cb10c00;
}



// FUNCTION 14640ef5a FUN_14640ef5a body=147 status=ok
// SIG undefined FUN_14640ef5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14640ef5a(void)

{
  _DAT_14cb10c10 = &PTR_FUN_14ab18750;
  _DAT_14cb10c38 = 0;
  _DAT_14cb10c40 = 0;
  DAT_14cb10c18 = 0;
  _DAT_14cb10c20 = 0;
  _DAT_14cb10c44 = 0xffffffff00000080;
  DAT_14cb10c4c = 0;
  DAT_14cb10c58 = 0;
  DAT_14cb10c60 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb10c68,4000);
  DAT_14cb10c90 = 0;
  _DAT_14cb10c98 = 0;
  _DAT_14cb10ca0 = 0;
  _DAT_14cb10ca8 = 0;
  _DAT_14cb10cb0 = 0;
  return;
}



// FUNCTION 14640efee FUN_14640efee body=161 status=ok
// SIG undefined FUN_14640efee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14640efee(void)

{
  _DAT_14cb10cb8 = &PTR_FUN_14ab18770;
  _DAT_14cb10ce0 = 0;
  _DAT_14cb10ce8 = 0;
  DAT_14cb10cc0 = 0;
  _DAT_14cb10cc8 = 0;
  _DAT_14cb10cec = 0xffffffff00000080;
  DAT_14cb10cf4 = 0;
  DAT_14cb10d00 = 0;
  DAT_14cb10d08 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10d10);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb10d10,4000);
  DAT_14cb10d38 = 0;
  _DAT_14cb10d40 = 0;
  _DAT_14cb10d48 = 0;
  _DAT_14cb10d50 = 0;
  _DAT_14cb10d58 = 0;
  _DAT_14cb10d60 = 0;
  _DAT_14cb10d68 = 0;
  DAT_14cb10d70._0_1_ = 1;
  return;
}



// FUNCTION 14640f08f FUN_14640f08f body=50 status=ok
// SIG undefined FUN_14640f08f(void)

void FUN_14640f08f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ab0c5a0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xff000000;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 14640f0c1 FUN_14640f0c1 body=47 status=ok
// SIG undefined FUN_14640f0c1(void)

longlong FUN_14640f0c1(void)

{
  if (DAT_14cb10d80 == 0) {
    FUN_14073dd9a(&DAT_14cb10d80,&PTR_LAB_14ab0c558);
  }
  return DAT_14cb10d80;
}



// FUNCTION 14640f0f0 FUN_14640f0f0 body=35 status=ok
// SIG undefined FUN_14640f0f0(void)

void FUN_14640f0f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0c910;
  return;
}



// FUNCTION 14640f113 FUN_14640f113 body=47 status=ok
// SIG undefined FUN_14640f113(void)

longlong FUN_14640f113(void)

{
  if (DAT_14cb10d98 == 0) {
    FUN_14073dd9a(&DAT_14cb10d98,&PTR_LAB_14ab0c8c8);
  }
  return DAT_14cb10d98;
}



// FUNCTION 14640f147 FUN_14640f147 body=47 status=ok
// SIG undefined FUN_14640f147(void)

longlong FUN_14640f147(void)

{
  if (DAT_14cb10db0 == 0) {
    FUN_14073dd9a(&DAT_14cb10db0,&PTR_LAB_14ab0cd08);
  }
  return DAT_14cb10db0;
}



// FUNCTION 14640f176 FUN_14640f176 body=106 status=ok
// SIG undefined FUN_14640f176(void)

void FUN_14640f176(longlong param_1)

{
  FUN_145ad05c5(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_147dbbf9a(param_1 + 0x90);
  }
  FUN_140457ffc(&DAT_14cb109f0,param_1);
  FUN_140457ffc(&DAT_14cb10a08,param_1);
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



// FUNCTION 14640f1e0 FUN_14640f1e0 body=39 status=ok
// SIG undefined FUN_14640f1e0(void)

void FUN_14640f1e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ab0d0d0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14640f20c FUN_14640f20c body=47 status=ok
// SIG undefined FUN_14640f20c(void)

longlong FUN_14640f20c(void)

{
  if (DAT_14cb10dc8 == 0) {
    FUN_14073dd9a(&DAT_14cb10dc8,&PTR_LAB_14ab0d088);
  }
  return DAT_14cb10dc8;
}



// FUNCTION 14640f23b FUN_14640f23b body=35 status=ok
// SIG undefined FUN_14640f23b(void)

void FUN_14640f23b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0d420;
  return;
}



// FUNCTION 14640f25e FUN_14640f25e body=47 status=ok
// SIG undefined FUN_14640f25e(void)

longlong FUN_14640f25e(void)

{
  if (DAT_14cb10de0 == 0) {
    FUN_14073dd9a(&DAT_14cb10de0,&PTR_LAB_14ab0d3d8);
  }
  return DAT_14cb10de0;
}



// FUNCTION 14640f28d FUN_14640f28d body=35 status=ok
// SIG undefined FUN_14640f28d(void)

void FUN_14640f28d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0d7f0;
  return;
}



// FUNCTION 14640f2b5 FUN_14640f2b5 body=47 status=ok
// SIG undefined FUN_14640f2b5(void)

longlong FUN_14640f2b5(void)

{
  if (DAT_14cb10df8 == 0) {
    FUN_14073dd9a(&DAT_14cb10df8,&PTR_LAB_14ab0d7a8);
  }
  return DAT_14cb10df8;
}



// FUNCTION 14640f2e4 FUN_14640f2e4 body=49 status=ok
// SIG undefined FUN_14640f2e4(void)

longlong FUN_14640f2e4(void)

{
  if (DAT_14cb10e08 == 0) {
    FUN_1409ce572(&DAT_14cb10e08,&PTR_FUN_14ab0db00);
  }
  return DAT_14cb10e08;
}



// FUNCTION 14640f315 FUN_14640f315 body=49 status=ok
// SIG undefined FUN_14640f315(void)

longlong FUN_14640f315(void)

{
  if (DAT_14cb10e80 == 0) {
    FUN_14073dd9a(&DAT_14cb10e80,&PTR_LAB_14ab0e6c0);
  }
  return DAT_14cb10e80;
}



// FUNCTION 14640f346 FUN_14640f346 body=47 status=ok
// SIG undefined FUN_14640f346(void)

longlong FUN_14640f346(void)

{
  if (DAT_14cb10e20 == 0) {
    FUN_14000fc22(&DAT_14cb10e20,&PTR_FUN_14ab0dbc0);
  }
  return DAT_14cb10e20;
}



// FUNCTION 14640f375 FUN_14640f375 body=47 status=ok
// SIG undefined FUN_14640f375(void)

longlong FUN_14640f375(void)

{
  if (DAT_14cb10e28 == 0) {
    FUN_14000fc22(&DAT_14cb10e28,&PTR_FUN_14ab0dc58);
  }
  return DAT_14cb10e28;
}



// FUNCTION 14640f3a4 FUN_14640f3a4 body=47 status=ok
// SIG undefined FUN_14640f3a4(void)

longlong FUN_14640f3a4(void)

{
  if (DAT_14cb10e30 == 0) {
    FUN_14000fc22(&DAT_14cb10e30,&PTR_FUN_14ab0dcf0);
  }
  return DAT_14cb10e30;
}



// FUNCTION 14640f3d3 FUN_14640f3d3 body=47 status=ok
// SIG undefined FUN_14640f3d3(void)

longlong FUN_14640f3d3(void)

{
  if (DAT_14cb10e38 == 0) {
    FUN_14000fc22(&DAT_14cb10e38,&PTR_FUN_14ab0ddd8);
  }
  return DAT_14cb10e38;
}



// FUNCTION 14640f402 FUN_14640f402 body=47 status=ok
// SIG undefined FUN_14640f402(void)

longlong FUN_14640f402(void)

{
  if (DAT_14cb10e40 == 0) {
    FUN_14000fc22(&DAT_14cb10e40,&PTR_FUN_14ab0dec0);
  }
  return DAT_14cb10e40;
}



// FUNCTION 14640f431 FUN_14640f431 body=47 status=ok
// SIG undefined FUN_14640f431(void)

longlong FUN_14640f431(void)

{
  if (DAT_14cb10e48 == 0) {
    FUN_14000fc22(&DAT_14cb10e48,&PTR_FUN_14ab0df60);
  }
  return DAT_14cb10e48;
}



// FUNCTION 14640f460 FUN_14640f460 body=47 status=ok
// SIG undefined FUN_14640f460(void)

longlong FUN_14640f460(void)

{
  if (DAT_14cb10e50 == 0) {
    FUN_14000fc22(&DAT_14cb10e50,&PTR_FUN_14ab0e000);
  }
  return DAT_14cb10e50;
}



// FUNCTION 14640f48f FUN_14640f48f body=47 status=ok
// SIG undefined FUN_14640f48f(void)

longlong FUN_14640f48f(void)

{
  if (DAT_14cb10e58 == 0) {
    FUN_14000fc22(&DAT_14cb10e58,&PTR_FUN_14ab0e0a0);
  }
  return DAT_14cb10e58;
}



// FUNCTION 14640f4be FUN_14640f4be body=47 status=ok
// SIG undefined FUN_14640f4be(void)

longlong FUN_14640f4be(void)

{
  if (DAT_14cb10e60 == 0) {
    FUN_14000fc22(&DAT_14cb10e60,&PTR_FUN_14ab0e140);
  }
  return DAT_14cb10e60;
}



// FUNCTION 14640f4ed FUN_14640f4ed body=47 status=ok
// SIG undefined FUN_14640f4ed(void)

longlong FUN_14640f4ed(void)

{
  if (DAT_14cb10e68 == 0) {
    FUN_14000fc22(&DAT_14cb10e68,&PTR_FUN_14ab0e1d8);
  }
  return DAT_14cb10e68;
}



// FUNCTION 14640f51c FUN_14640f51c body=47 status=ok
// SIG undefined FUN_14640f51c(void)

longlong FUN_14640f51c(void)

{
  if (DAT_14cb10e70 == 0) {
    FUN_14000fc22(&DAT_14cb10e70,&PTR_FUN_14ab0e260);
  }
  return DAT_14cb10e70;
}



// FUNCTION 14640f54c FUN_14640f54c body=34 status=ok
// SIG undefined FUN_14640f54c(void)

void FUN_14640f54c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458d4d3c();
  FUN_14069c8d6(uVar1,&PTR_s_Equals_14ab0e2a0,0xb);
  return;
}



// FUNCTION 14640f573 FUN_14640f573 body=73 status=ok
// SIG undefined FUN_14640f573(void)

void FUN_14640f573(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0e700;
  puVar1[5] = puVar1[3];
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xfe;
  *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 7) = 0xff000000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 14640f5bc FUN_14640f5bc body=47 status=ok
// SIG undefined FUN_14640f5bc(void)

longlong FUN_14640f5bc(void)

{
  if (DAT_14cb10e90 == 0) {
    FUN_1409ce572(&DAT_14cb10e90,&PTR_FUN_14ab0ea30);
  }
  return DAT_14cb10e90;
}



// FUNCTION 14640f5eb FUN_14640f5eb body=49 status=ok
// SIG undefined FUN_14640f5eb(void)

longlong FUN_14640f5eb(void)

{
  if (DAT_14cb10ed8 == 0) {
    FUN_14073dd9a(&DAT_14cb10ed8,&PTR_LAB_14ab0f050);
  }
  return DAT_14cb10ed8;
}



// FUNCTION 14640f61c FUN_14640f61c body=47 status=ok
// SIG undefined FUN_14640f61c(void)

longlong FUN_14640f61c(void)

{
  if (DAT_14cb10ea8 == 0) {
    FUN_14000fc22(&DAT_14cb10ea8,&PTR_FUN_14ab0eaa8);
  }
  return DAT_14cb10ea8;
}



// FUNCTION 14640f64b FUN_14640f64b body=47 status=ok
// SIG undefined FUN_14640f64b(void)

longlong FUN_14640f64b(void)

{
  if (DAT_14cb10eb0 == 0) {
    FUN_14000fc22(&DAT_14cb10eb0,&PTR_FUN_14ab0eb80);
  }
  return DAT_14cb10eb0;
}



// FUNCTION 14640f67a FUN_14640f67a body=47 status=ok
// SIG undefined FUN_14640f67a(void)

longlong FUN_14640f67a(void)

{
  if (DAT_14cb10eb8 == 0) {
    FUN_14000fc22(&DAT_14cb10eb8,&PTR_FUN_14ab0ec18);
  }
  return DAT_14cb10eb8;
}



// FUNCTION 14640f6a9 FUN_14640f6a9 body=47 status=ok
// SIG undefined FUN_14640f6a9(void)

longlong FUN_14640f6a9(void)

{
  if (DAT_14cb10ec0 == 0) {
    FUN_14000fc22(&DAT_14cb10ec0,&PTR_FUN_14ab0eca0);
  }
  return DAT_14cb10ec0;
}



// FUNCTION 14640f6d8 FUN_14640f6d8 body=47 status=ok
// SIG undefined FUN_14640f6d8(void)

longlong FUN_14640f6d8(void)

{
  if (DAT_14cb10ec8 == 0) {
    FUN_14000fc22(&DAT_14cb10ec8,&PTR_FUN_14ab0ed38);
  }
  return DAT_14cb10ec8;
}



// FUNCTION 14640f708 FUN_14640f708 body=34 status=ok
// SIG undefined FUN_14640f708(void)

void FUN_14640f708(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1411ace9c();
  FUN_14069c8d6(uVar1,&PTR_s_GetDebugColor_14ab0ed80,5);
  return;
}



// FUNCTION 14640f72a FUN_14640f72a body=47 status=ok
// SIG undefined FUN_14640f72a(void)

longlong FUN_14640f72a(void)

{
  if (DAT_14cb10f00 == 0) {
    FUN_1409ce572(&DAT_14cb10f00,&PTR_FUN_14ab0f450);
  }
  return DAT_14cb10f00;
}



// FUNCTION 14640f759 FUN_14640f759 body=49 status=ok
// SIG undefined FUN_14640f759(void)

longlong FUN_14640f759(void)

{
  if (DAT_14cb10f80 == 0) {
    FUN_14073dd9a(&DAT_14cb10f80,&PTR_LAB_14ab0fec0);
  }
  return DAT_14cb10f80;
}



// FUNCTION 14640f78a FUN_14640f78a body=47 status=ok
// SIG undefined FUN_14640f78a(void)

longlong FUN_14640f78a(void)

{
  if (DAT_14cb10f18 == 0) {
    FUN_14000fc22(&DAT_14cb10f18,&PTR_FUN_14ab0f4c8);
  }
  return DAT_14cb10f18;
}



// FUNCTION 14640f7b9 FUN_14640f7b9 body=47 status=ok
// SIG undefined FUN_14640f7b9(void)

longlong FUN_14640f7b9(void)

{
  if (DAT_14cb10f20 == 0) {
    FUN_14000fc22(&DAT_14cb10f20,&PTR_FUN_14ab0f560);
  }
  return DAT_14cb10f20;
}



// FUNCTION 14640f7e8 FUN_14640f7e8 body=47 status=ok
// SIG undefined FUN_14640f7e8(void)

longlong FUN_14640f7e8(void)

{
  if (DAT_14cb10f28 == 0) {
    FUN_14000fc22(&DAT_14cb10f28,&PTR_FUN_14ab0f5f8);
  }
  return DAT_14cb10f28;
}



// FUNCTION 14640f817 FUN_14640f817 body=47 status=ok
// SIG undefined FUN_14640f817(void)

longlong FUN_14640f817(void)

{
  if (DAT_14cb10f30 == 0) {
    FUN_14000fc22(&DAT_14cb10f30,&PTR_FUN_14ab0f680);
  }
  return DAT_14cb10f30;
}



// FUNCTION 14640f846 FUN_14640f846 body=47 status=ok
// SIG undefined FUN_14640f846(void)

longlong FUN_14640f846(void)

{
  if (DAT_14cb10f38 == 0) {
    FUN_14000fc22(&DAT_14cb10f38,&PTR_FUN_14ab0f750);
  }
  return DAT_14cb10f38;
}



// FUNCTION 14640f875 FUN_14640f875 body=47 status=ok
// SIG undefined FUN_14640f875(void)

longlong FUN_14640f875(void)

{
  if (DAT_14cb10f40 == 0) {
    FUN_14000fc22(&DAT_14cb10f40,&PTR_FUN_14ab0f820);
  }
  return DAT_14cb10f40;
}



// FUNCTION 14640f8a4 FUN_14640f8a4 body=47 status=ok
// SIG undefined FUN_14640f8a4(void)

longlong FUN_14640f8a4(void)

{
  if (DAT_14cb10f48 == 0) {
    FUN_14000fc22(&DAT_14cb10f48,&PTR_FUN_14ab0f8a8);
  }
  return DAT_14cb10f48;
}



// FUNCTION 14640f8d3 FUN_14640f8d3 body=47 status=ok
// SIG undefined FUN_14640f8d3(void)

longlong FUN_14640f8d3(void)

{
  if (DAT_14cb10f50 == 0) {
    FUN_14000fc22(&DAT_14cb10f50,&PTR_FUN_14ab0f930);
  }
  return DAT_14cb10f50;
}



// FUNCTION 14640f902 FUN_14640f902 body=47 status=ok
// SIG undefined FUN_14640f902(void)

longlong FUN_14640f902(void)

{
  if (DAT_14cb10f58 == 0) {
    FUN_14000fc22(&DAT_14cb10f58,&PTR_FUN_14ab0f9b8);
  }
  return DAT_14cb10f58;
}



// FUNCTION 14640f931 FUN_14640f931 body=47 status=ok
// SIG undefined FUN_14640f931(void)

longlong FUN_14640f931(void)

{
  if (DAT_14cb10f60 == 0) {
    FUN_14000fc22(&DAT_14cb10f60,&PTR_FUN_14ab0fa40);
  }
  return DAT_14cb10f60;
}



// FUNCTION 14640f960 FUN_14640f960 body=47 status=ok
// SIG undefined FUN_14640f960(void)

longlong FUN_14640f960(void)

{
  if (DAT_14cb10f68 == 0) {
    FUN_14000fc22(&DAT_14cb10f68,&PTR_FUN_14ab0fac8);
  }
  return DAT_14cb10f68;
}



// FUNCTION 14640f98f FUN_14640f98f body=47 status=ok
// SIG undefined FUN_14640f98f(void)

longlong FUN_14640f98f(void)

{
  if (DAT_14cb10f70 == 0) {
    FUN_14000fc22(&DAT_14cb10f70,&PTR_FUN_14ab0fb50);
  }
  return DAT_14cb10f70;
}



// FUNCTION 14640f9be FUN_14640f9be body=34 status=ok
// SIG undefined FUN_14640f9be(void)

void FUN_14640f9be(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140aed08c();
  FUN_14069c8d6(uVar1,&PTR_s_GetAsset_14ab0fb90,0xc);
  return;
}



// FUNCTION 14640f9e5 FUN_14640f9e5 body=54 status=ok
// SIG undefined FUN_14640f9e5(void)

void FUN_14640f9e5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0ff00;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14640fa1b FUN_14640fa1b body=47 status=ok
// SIG undefined FUN_14640fa1b(void)

longlong FUN_14640fa1b(void)

{
  if (DAT_14cb10f98 == 0) {
    FUN_14073dd9a(&DAT_14cb10f98,&PTR_LAB_14ab10378);
  }
  return DAT_14cb10f98;
}



// FUNCTION 14640fa4a FUN_14640fa4a body=35 status=ok
// SIG undefined FUN_14640fa4a(void)

void FUN_14640fa4a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab107c0;
  return;
}



// FUNCTION 14640fa72 FUN_14640fa72 body=47 status=ok
// SIG undefined FUN_14640fa72(void)

longlong FUN_14640fa72(void)

{
  if (DAT_14cb10fb0 == 0) {
    FUN_14073dd9a(&DAT_14cb10fb0,&PTR_LAB_14ab10778);
  }
  return DAT_14cb10fb0;
}



// FUNCTION 14640faa1 FUN_14640faa1 body=47 status=ok
// SIG undefined FUN_14640faa1(void)

longlong FUN_14640faa1(void)

{
  if (DAT_14cb10fc8 == 0) {
    FUN_14073dd9a(&DAT_14cb10fc8,&PTR_LAB_14ab10b28);
  }
  return DAT_14cb10fc8;
}



// FUNCTION 14640fad0 FUN_14640fad0 body=35 status=ok
// SIG undefined FUN_14640fad0(void)

void FUN_14640fad0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab10f50;
  return;
}



// FUNCTION 14640faf8 FUN_14640faf8 body=47 status=ok
// SIG undefined FUN_14640faf8(void)

longlong FUN_14640faf8(void)

{
  if (DAT_14cb10fe0 == 0) {
    FUN_14073dd9a(&DAT_14cb10fe0,&PTR_LAB_14ab10f08);
  }
  return DAT_14cb10fe0;
}



// FUNCTION 14640fb27 FUN_14640fb27 body=47 status=ok
// SIG undefined FUN_14640fb27(void)

longlong FUN_14640fb27(void)

{
  if (DAT_14cb110f0 == 0) {
    FUN_14000fc22(&DAT_14cb110f0,&PTR_FUN_14ab115d0);
  }
  return DAT_14cb110f0;
}



// FUNCTION 14640fb56 FUN_14640fb56 body=47 status=ok
// SIG undefined FUN_14640fb56(void)

longlong FUN_14640fb56(void)

{
  if (DAT_14cb110f8 == 0) {
    FUN_14000fc22(&DAT_14cb110f8,&PTR_FUN_14ab116a8);
  }
  return DAT_14cb110f8;
}



// FUNCTION 14640fb85 FUN_14640fb85 body=47 status=ok
// SIG undefined FUN_14640fb85(void)

longlong FUN_14640fb85(void)

{
  if (DAT_14cb11100 == 0) {
    FUN_14000fc22(&DAT_14cb11100,&PTR_FUN_14ab117a0);
  }
  return DAT_14cb11100;
}



// FUNCTION 14640fbb4 FUN_14640fbb4 body=47 status=ok
// SIG undefined FUN_14640fbb4(void)

longlong FUN_14640fbb4(void)

{
  if (DAT_14cb11108 == 0) {
    FUN_14000fc22(&DAT_14cb11108,&PTR_FUN_14ab118e0);
  }
  return DAT_14cb11108;
}



// FUNCTION 14640fbe3 FUN_14640fbe3 body=47 status=ok
// SIG undefined FUN_14640fbe3(void)

longlong FUN_14640fbe3(void)

{
  if (DAT_14cb11110 == 0) {
    FUN_14000fc22(&DAT_14cb11110,&PTR_FUN_14ab11a38);
  }
  return DAT_14cb11110;
}



// FUNCTION 14640fc12 FUN_14640fc12 body=47 status=ok
// SIG undefined FUN_14640fc12(void)

longlong FUN_14640fc12(void)

{
  if (DAT_14cb11118 == 0) {
    FUN_14000fc22(&DAT_14cb11118,&PTR_FUN_14ab11b18);
  }
  return DAT_14cb11118;
}



// FUNCTION 14640fc41 FUN_14640fc41 body=47 status=ok
// SIG undefined FUN_14640fc41(void)

longlong FUN_14640fc41(void)

{
  if (DAT_14cb11120 == 0) {
    FUN_14000fc22(&DAT_14cb11120,&PTR_FUN_14ab11c08);
  }
  return DAT_14cb11120;
}



// FUNCTION 14640fc70 FUN_14640fc70 body=47 status=ok
// SIG undefined FUN_14640fc70(void)

longlong FUN_14640fc70(void)

{
  if (DAT_14cb11128 == 0) {
    FUN_14000fc22(&DAT_14cb11128,&PTR_FUN_14ab11d28);
  }
  return DAT_14cb11128;
}



// FUNCTION 14640fc9f FUN_14640fc9f body=47 status=ok
// SIG undefined FUN_14640fc9f(void)

longlong FUN_14640fc9f(void)

{
  if (DAT_14cb11130 == 0) {
    FUN_14000fc22(&DAT_14cb11130,&PTR_FUN_14ab11e00);
  }
  return DAT_14cb11130;
}



// FUNCTION 14640fcce FUN_14640fcce body=47 status=ok
// SIG undefined FUN_14640fcce(void)

longlong FUN_14640fcce(void)

{
  if (DAT_14cb11138 == 0) {
    FUN_14000fc22(&DAT_14cb11138,&PTR_FUN_14ab11f18);
  }
  return DAT_14cb11138;
}



// FUNCTION 14640fcfd FUN_14640fcfd body=47 status=ok
// SIG undefined FUN_14640fcfd(void)

longlong FUN_14640fcfd(void)

{
  if (DAT_14cb11140 == 0) {
    FUN_14000fc22(&DAT_14cb11140,&PTR_FUN_14ab12058);
  }
  return DAT_14cb11140;
}



// FUNCTION 14640fd2c FUN_14640fd2c body=47 status=ok
// SIG undefined FUN_14640fd2c(void)

longlong FUN_14640fd2c(void)

{
  if (DAT_14cb11148 == 0) {
    FUN_14000fc22(&DAT_14cb11148,&PTR_FUN_14ab12188);
  }
  return DAT_14cb11148;
}



// FUNCTION 14640fd5b FUN_14640fd5b body=47 status=ok
// SIG undefined FUN_14640fd5b(void)

longlong FUN_14640fd5b(void)

{
  if (DAT_14cb11150 == 0) {
    FUN_14000fc22(&DAT_14cb11150,&PTR_FUN_14ab122c0);
  }
  return DAT_14cb11150;
}



// FUNCTION 14640fd8a FUN_14640fd8a body=47 status=ok
// SIG undefined FUN_14640fd8a(void)

longlong FUN_14640fd8a(void)

{
  if (DAT_14cb11158 == 0) {
    FUN_14000fc22(&DAT_14cb11158,&PTR_FUN_14ab123f8);
  }
  return DAT_14cb11158;
}



// FUNCTION 14640fdb9 FUN_14640fdb9 body=47 status=ok
// SIG undefined FUN_14640fdb9(void)

longlong FUN_14640fdb9(void)

{
  if (DAT_14cb11160 == 0) {
    FUN_14000fc22(&DAT_14cb11160,&PTR_FUN_14ab124d8);
  }
  return DAT_14cb11160;
}



// FUNCTION 14640fde8 FUN_14640fde8 body=47 status=ok
// SIG undefined FUN_14640fde8(void)

longlong FUN_14640fde8(void)

{
  if (DAT_14cb11168 == 0) {
    FUN_14000fc22(&DAT_14cb11168,&PTR_FUN_14ab12640);
  }
  return DAT_14cb11168;
}



// FUNCTION 14640fe17 FUN_14640fe17 body=47 status=ok
// SIG undefined FUN_14640fe17(void)

longlong FUN_14640fe17(void)

{
  if (DAT_14cb11170 == 0) {
    FUN_14000fc22(&DAT_14cb11170,&PTR_FUN_14ab127a0);
  }
  return DAT_14cb11170;
}



// FUNCTION 14640fe46 FUN_14640fe46 body=47 status=ok
// SIG undefined FUN_14640fe46(void)

longlong FUN_14640fe46(void)

{
  if (DAT_14cb11178 == 0) {
    FUN_14000fc22(&DAT_14cb11178,&PTR_FUN_14ab12920);
  }
  return DAT_14cb11178;
}



// FUNCTION 14640fe75 FUN_14640fe75 body=47 status=ok
// SIG undefined FUN_14640fe75(void)

longlong FUN_14640fe75(void)

{
  if (DAT_14cb11180 == 0) {
    FUN_14000fc22(&DAT_14cb11180,&PTR_FUN_14ab12a50);
  }
  return DAT_14cb11180;
}



// FUNCTION 14640fea4 FUN_14640fea4 body=47 status=ok
// SIG undefined FUN_14640fea4(void)

longlong FUN_14640fea4(void)

{
  if (DAT_14cb11188 == 0) {
    FUN_14000fc22(&DAT_14cb11188,&PTR_FUN_14ab12b88);
  }
  return DAT_14cb11188;
}



// FUNCTION 14640fed4 FUN_14640fed4 body=34 status=ok
// SIG undefined FUN_14640fed4(void)

void FUN_14640fed4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412285d0();
  FUN_14069c8d6(uVar1,&PTR_s_GetActiveDataLayerNames_14ab12bd0,0x13);
  return;
}



// FUNCTION 14640fefb FUN_14640fefb body=55 status=ok
// SIG undefined FUN_14640fefb(void)

void FUN_14640fefb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c444d0(puVar1);
  *puVar1 = &PTR_FUN_14ab12f90;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 14640ff32 FUN_14640ff32 body=34 status=ok
// SIG undefined FUN_14640ff32(void)

byte FUN_14640ff32(undefined8 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14110c842();
  return bVar1 | param_2 == 7 | param_2 == 4;
}



// FUNCTION 14640ff54 FUN_14640ff54 body=62 status=ok
// SIG undefined FUN_14640ff54(void)

void FUN_14640ff54(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_FUN_14ab134c0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  return;
}



// FUNCTION 14640ff92 FUN_14640ff92 body=47 status=ok
// SIG undefined FUN_14640ff92(void)

longlong FUN_14640ff92(void)

{
  if (DAT_14cb111b0 == 0) {
    FUN_14073dd9a(&DAT_14cb111b0,&PTR_LAB_14ab13478);
  }
  return DAT_14cb111b0;
}



// FUNCTION 14640ffc2 FUN_14640ffc2 body=346 status=ok
// SIG undefined FUN_14640ffc2(void)

void FUN_14640ffc2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar6 = FUN_145a3dd86(DAT_14cb0d2b0);
    FUN_140457ffc(lVar6 + 0x38,param_1);
    plVar1 = (longlong *)(lVar6 + 0x50);
    lVar2 = lVar6 + 0x60;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = lVar2;
    if (*(int *)(lVar6 + 0x78) != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = *(int *)(lVar6 + 0x78);
    }
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar3, local_58 != lVar2)) {
      do {
        local_70 = uVar3;
        lVar6 = *local_88;
        cVar4 = FUN_147db6b92(param_1,*(undefined8 *)(lVar6 + (longlong)iVar5 * 0xb8));
        if (cVar4 != '\0') {
          FUN_14379b4fc(param_1,*(undefined8 *)(lVar6 + (longlong)iVar5 * 0xb8));
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar3 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != lVar2)) || (local_88 != plVar1));
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14641011e FUN_14641011e body=55 status=ok
// SIG undefined FUN_14641011e(void)

void FUN_14641011e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb111c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb111c8 = FUN_140002ddd(FUN_146410155,uVar1,L"ActorPlacementDataLayers");
  }
  return;
}



// FUNCTION 146410155 FUN_146410155 body=47 status=ok
// SIG undefined FUN_146410155(void)

longlong FUN_146410155(void)

{
  if (DAT_14cb111c0 == 0) {
    FUN_14086a14e(&DAT_14cb111c0,&PTR_FUN_14ab13a18);
  }
  return DAT_14cb111c0;
}



// FUNCTION 146410184 FUN_146410184 body=48 status=ok
// SIG undefined FUN_146410184(void)

void FUN_146410184(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14ab17f30;
  return;
}



// FUNCTION 1464101b4 FUN_1464101b4 body=49 status=ok
// SIG undefined FUN_1464101b4(void)

longlong FUN_1464101b4(void)

{
  if (DAT_14cb11210 == 0) {
    FUN_14073dd9a(&DAT_14cb11210,&PTR_LAB_14ab14540);
  }
  return DAT_14cb11210;
}



// FUNCTION 1464101e5 FUN_1464101e5 body=47 status=ok
// SIG undefined FUN_1464101e5(void)

longlong FUN_1464101e5(void)

{
  if (DAT_14cb111e0 == 0) {
    FUN_14000fc22(&DAT_14cb111e0,&PTR_FUN_14ab13b68);
  }
  return DAT_14cb111e0;
}



// FUNCTION 146410214 FUN_146410214 body=47 status=ok
// SIG undefined FUN_146410214(void)

longlong FUN_146410214(void)

{
  if (DAT_14cb111e8 == 0) {
    FUN_14000fc22(&DAT_14cb111e8,&PTR_FUN_14ab13bc8);
  }
  return DAT_14cb111e8;
}



// FUNCTION 146410244 FUN_146410244 body=122 status=ok
// SIG undefined FUN_146410244(void)

void FUN_146410244(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(int *)(param_1 + 0x910) = *(int *)(param_1 + 0x910) + 1;
  FUN_1449ad616(param_1 + 0x5c0);
  local_28 = *(undefined8 *)(param_1 + 0x5a0);
  local_20 = *(undefined4 *)(param_1 + 0x5a8);
  FUN_140ce09a0(param_1 + 0x5c0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464102bf FUN_1464102bf body=47 status=ok
// SIG undefined FUN_1464102bf(void)

longlong FUN_1464102bf(void)

{
  if (DAT_14cb111f0 == 0) {
    FUN_14000fc22(&DAT_14cb111f0,&PTR_FUN_14ab13c30);
  }
  return DAT_14cb111f0;
}



// FUNCTION 1464102ee FUN_1464102ee body=47 status=ok
// SIG undefined FUN_1464102ee(void)

longlong FUN_1464102ee(void)

{
  if (DAT_14cb111f8 == 0) {
    FUN_14000fc22(&DAT_14cb111f8,&PTR_FUN_14ab13c98);
  }
  return DAT_14cb111f8;
}



// FUNCTION 14641031e FUN_14641031e body=128 status=ok
// SIG undefined FUN_14641031e(void)

void FUN_14641031e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(int *)(param_1 + 0x910) = *(int *)(param_1 + 0x910) + 1;
  FUN_1449ad616(param_1 + 0x770);
  local_28 = *(undefined8 *)(param_1 + 0x710);
  local_20 = *(undefined4 *)(param_1 + 0x718);
  FUN_140ce09a0(param_1 + 0x770);
  *(int *)(param_1 + 0x860) = *(int *)(param_1 + 0x860) + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14641039f FUN_14641039f body=47 status=ok
// SIG undefined FUN_14641039f(void)

longlong FUN_14641039f(void)

{
  if (DAT_14cb11200 == 0) {
    FUN_14000fc22(&DAT_14cb11200,&PTR_FUN_14ab13cf8);
  }
  return DAT_14cb11200;
}



// FUNCTION 1464103ce FUN_1464103ce body=122 status=ok
// SIG undefined FUN_1464103ce(void)

void FUN_1464103ce(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(int *)(param_1 + 0x910) = *(int *)(param_1 + 0x910) + 1;
  FUN_1449ad616(param_1 + 0x610);
  local_28 = *(undefined8 *)(param_1 + 0x5b0);
  local_20 = *(undefined4 *)(param_1 + 0x5b8);
  FUN_140ce09a0(param_1 + 0x610);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14641044a FUN_14641044a body=34 status=ok
// SIG undefined FUN_14641044a(void)

void FUN_14641044a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458f15f6();
  FUN_14069c8d6(uVar1,&PTR_s_OnDataLayerRuntimeStateChanged_14ab13d40,5);
  return;
}



// FUNCTION 146410472 FUN_146410472 body=378 status=ok
// SIG undefined FUN_146410472(void)

void FUN_146410472(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11228) {
    FUN_144b3d300(&DAT_14cb11228);
    if (DAT_14cb11228 == -1) {
      FUN_1446f470e(&DAT_14cb11220,L"RepActiveDataLayerNames",1);
      _Init_thread_footer(&DAT_14cb11228);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11234) {
    FUN_144b3d300(&DAT_14cb11234);
    if (DAT_14cb11234 == -1) {
      FUN_1446f470e(&DAT_14cb1122c,L"RepLoadedDataLayerNames",1);
      _Init_thread_footer(&DAT_14cb11234);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11240) {
    FUN_144b3d300(&DAT_14cb11240);
    if (DAT_14cb11240 == -1) {
      FUN_1446f470e(&DAT_14cb11238,L"RepEffectiveActiveDataLayerNames",1);
      _Init_thread_footer(&DAT_14cb11240);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1124c) {
    FUN_144b3d300(&DAT_14cb1124c);
    if (DAT_14cb1124c == -1) {
      FUN_1446f470e(&DAT_14cb11244,L"RepEffectiveLoadedDataLayerNames",1);
      _Init_thread_footer(&DAT_14cb1124c);
      return;
    }
  }
  return;
}



// FUNCTION 1464105f2 FUN_1464105f2 body=247 status=ok
// SIG undefined FUN_1464105f2(void)

void FUN_1464105f2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c6fa();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"RepLoadedDataLayerNames";
  local_40 = &DAT_10000000c;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"RepActiveDataLayerNames";
  local_40 = &DAT_10000000b;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"RepEffectiveLoadedDataLayerNames";
  local_40 = (undefined1 *)0x10000000e;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"RepEffectiveActiveDataLayerNames";
  local_40 = (undefined1 *)0x10000000d;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464106ea FUN_1464106ea body=245 status=ok
// SIG undefined FUN_1464106ea(void)

void FUN_1464106ea(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  code *local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401b2056();
  uVar1 = FUN_144a79cc8(param_1);
  FUN_1400337aa(uVar1);
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) == 0) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    FUN_1446f470e(&local_28,L"WorldDataLayers",1);
    if (lVar2 == local_28) {
      uVar1 = FUN_144a7757c();
      uVar1 = FUN_144a78ede(param_1,uVar1);
      FUN_147daac88(uVar1,param_1);
    }
  }
  local_30 = &local_40;
  local_38 = FUN_1437a31c4;
  local_40 = param_1;
  FUN_140bc6ada(param_1);
  lVar2 = FUN_14122859a(param_1);
  if (lVar2 != 0) {
    FUN_14586a846(lVar2 + 0xf0,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464107e0 FUN_1464107e0 body=48 status=ok
// SIG undefined FUN_1464107e0(void)

void FUN_1464107e0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14122859a();
  if (lVar1 != 0) {
    FUN_14586a846(lVar1 + 0x108,param_1);
  }
  FUN_1401bf1e0(param_1);
  return;
}



// FUNCTION 146410810 FUN_146410810 body=76 status=ok
// SIG undefined FUN_146410810(void)

void FUN_146410810(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab15000;
  puVar1[5] = &PTR_LAB_14ab155f0;
  puVar1[6] = &PTR_LAB_14ab15630;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  FUN_140b967fa(puVar1,1);
  return;
}



// FUNCTION 146410861 FUN_146410861 body=47 status=ok
// SIG undefined FUN_146410861(void)

longlong FUN_146410861(void)

{
  if (DAT_14cb11280 == 0) {
    FUN_14073dd9a(&DAT_14cb11280,&PTR_LAB_14ab14fb8);
  }
  return DAT_14cb11280;
}



// FUNCTION 146410890 FUN_146410890 body=55 status=ok
// SIG undefined FUN_146410890(void)

void FUN_146410890(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11298 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11298 =
         FUN_140002ddd(FUN_1464108c7,uVar1,L"WorldPartitionDestructibleHLODDamagedActorState");
  }
  return;
}



// FUNCTION 1464108c7 FUN_1464108c7 body=47 status=ok
// SIG undefined FUN_1464108c7(void)

longlong FUN_1464108c7(void)

{
  if (DAT_14cb11290 == 0) {
    FUN_14086a14e(&DAT_14cb11290,&PTR_FUN_14ab157b0);
  }
  return DAT_14cb11290;
}



// FUNCTION 1464108f6 FUN_1464108f6 body=48 status=ok
// SIG undefined FUN_1464108f6(void)

void FUN_1464108f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14ab18170;
  return;
}



// FUNCTION 146410926 FUN_146410926 body=55 status=ok
// SIG undefined FUN_146410926(void)

void FUN_146410926(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb112b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb112b0 = FUN_140002ddd(FUN_14641095d,uVar1,L"WorldPartitionDestructibleHLODState");
  }
  return;
}



// FUNCTION 14641095d FUN_14641095d body=47 status=ok
// SIG undefined FUN_14641095d(void)

longlong FUN_14641095d(void)

{
  if (DAT_14cb112a8 == 0) {
    FUN_14086a14e(&DAT_14cb112a8,&PTR_FUN_14ab15940);
  }
  return DAT_14cb112a8;
}



// FUNCTION 14641098c FUN_14641098c body=48 status=ok
// SIG undefined FUN_14641098c(void)

void FUN_14641098c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000150;
  *puVar1 = &PTR_FUN_14ab18310;
  return;
}



// FUNCTION 1464109bc FUN_1464109bc body=47 status=ok
// SIG undefined FUN_1464109bc(void)

longlong FUN_1464109bc(void)

{
  if (DAT_14cb112c8 == 0) {
    FUN_14073dd9a(&DAT_14cb112c8,&PTR_LAB_14ab15b78);
  }
  return DAT_14cb112c8;
}



// FUNCTION 1464109f0 FUN_1464109f0 body=47 status=ok
// SIG undefined FUN_1464109f0(void)

longlong FUN_1464109f0(void)

{
  if (DAT_14cb112f0 == 0) {
    FUN_14073dd9a(&DAT_14cb112f0,&PTR_LAB_14ab16458);
  }
  return DAT_14cb112f0;
}



// FUNCTION 146410a1f FUN_146410a1f body=35 status=ok
// SIG undefined FUN_146410a1f(void)

void FUN_146410a1f(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab16e80;
  return;
}



// FUNCTION 146410a47 FUN_146410a47 body=47 status=ok
// SIG undefined FUN_146410a47(void)

longlong FUN_146410a47(void)

{
  if (DAT_14cb11360 == 0) {
    FUN_14073dd9a(&DAT_14cb11360,&PTR_LAB_14ab16e38);
  }
  return DAT_14cb11360;
}



// FUNCTION 146410a76 FUN_146410a76 body=55 status=ok
// SIG undefined FUN_146410a76(void)

void FUN_146410a76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11378 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11378 = FUN_140002ddd(FUN_146410aad,uVar1,L"HLODBuildInputReferencedAssets");
  }
  return;
}



// FUNCTION 146410aad FUN_146410aad body=47 status=ok
// SIG undefined FUN_146410aad(void)

longlong FUN_146410aad(void)

{
  if (DAT_14cb11370 == 0) {
    FUN_14086a14e(&DAT_14cb11370,&PTR_FUN_14ab17268);
  }
  return DAT_14cb11370;
}



// FUNCTION 146410adc FUN_146410adc body=48 status=ok
// SIG undefined FUN_146410adc(void)

void FUN_146410adc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ab18480;
  return;
}



// FUNCTION 146410b0c FUN_146410b0c body=55 status=ok
// SIG undefined FUN_146410b0c(void)

void FUN_146410b0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11390 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11390 = FUN_140002ddd(FUN_146410b43,uVar1,L"HLODBuildInputStats");
  }
  return;
}



// FUNCTION 146410b43 FUN_146410b43 body=47 status=ok
// SIG undefined FUN_146410b43(void)

longlong FUN_146410b43(void)

{
  if (DAT_14cb11388 == 0) {
    FUN_14086a14e(&DAT_14cb11388,&PTR_FUN_14ab173f0);
  }
  return DAT_14cb11388;
}



// FUNCTION 146410b72 FUN_146410b72 body=48 status=ok
// SIG undefined FUN_146410b72(void)

void FUN_146410b72(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ab185e0;
  return;
}



// FUNCTION 146410ba2 FUN_146410ba2 body=35 status=ok
// SIG undefined FUN_146410ba2(void)

void FUN_146410ba2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab174b0;
  return;
}



// FUNCTION 146410bca FUN_146410bca body=49 status=ok
// SIG undefined FUN_146410bca(void)

longlong FUN_146410bca(void)

{
  if (DAT_14cb113a8 == 0) {
    FUN_14073dd9a(&DAT_14cb113a8,&PTR_LAB_14ab17468);
  }
  return DAT_14cb113a8;
}



// FUNCTION 146410bfb FUN_146410bfb body=35 status=ok
// SIG undefined FUN_146410bfb(void)

void FUN_146410bfb(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab177e0;
  return;
}



// FUNCTION 146410c1e FUN_146410c1e body=47 status=ok
// SIG undefined FUN_146410c1e(void)

longlong FUN_146410c1e(void)

{
  if (DAT_14cb113c0 == 0) {
    FUN_14073dd9a(&DAT_14cb113c0,&PTR_LAB_14ab17798);
  }
  return DAT_14cb113c0;
}



// FUNCTION 146410c4e FUN_146410c4e body=40 status=ok
// SIG undefined FUN_146410c4e(void)

undefined8 FUN_146410c4e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410c76 FUN_146410c76 body=40 status=ok
// SIG undefined FUN_146410c76(void)

undefined8 FUN_146410c76(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410c9e FUN_146410c9e body=40 status=ok
// SIG undefined FUN_146410c9e(void)

undefined8 FUN_146410c9e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410cc6 FUN_146410cc6 body=40 status=ok
// SIG undefined FUN_146410cc6(void)

undefined8 FUN_146410cc6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410cee FUN_146410cee body=69 status=ok
// SIG undefined FUN_146410cee(void)

undefined8 * FUN_146410cee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab0c5a0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410d34 FUN_146410d34 body=40 status=ok
// SIG undefined FUN_146410d34(void)

undefined8 FUN_146410d34(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410d5c FUN_146410d5c body=40 status=ok
// SIG undefined FUN_146410d5c(void)

undefined8 FUN_146410d5c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410d84 FUN_146410d84 body=40 status=ok
// SIG undefined FUN_146410d84(void)

undefined8 FUN_146410d84(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410dac FUN_146410dac body=69 status=ok
// SIG undefined FUN_146410dac(void)

undefined8 * FUN_146410dac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab0e700;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410df2 FUN_146410df2 body=69 status=ok
// SIG undefined FUN_146410df2(void)

undefined8 * FUN_146410df2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab0ff00;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410e38 FUN_146410e38 body=40 status=ok
// SIG undefined FUN_146410e38(void)

undefined8 FUN_146410e38(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410e60 FUN_146410e60 body=40 status=ok
// SIG undefined FUN_146410e60(void)

undefined8 FUN_146410e60(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410e88 FUN_146410e88 body=69 status=ok
// SIG undefined FUN_146410e88(void)

undefined8 * FUN_146410e88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab0ff00;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410ece FUN_146410ece body=94 status=ok
// SIG undefined FUN_146410ece(void)

undefined8 * FUN_146410ece(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab15000;
  param_1[5] = &PTR_LAB_14ab155f0;
  param_1[6] = &PTR_LAB_14ab15630;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410f2c FUN_146410f2c body=40 status=ok
// SIG undefined FUN_146410f2c(void)

undefined8 FUN_146410f2c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410f54 FUN_146410f54 body=40 status=ok
// SIG undefined FUN_146410f54(void)

undefined8 FUN_146410f54(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410f7c FUN_146410f7c body=40 status=ok
// SIG undefined FUN_146410f7c(void)

undefined8 FUN_146410f7c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410fa4 FUN_146410fa4 body=29 status=ok
// SIG undefined FUN_146410fa4(void)

undefined8 FUN_146410fa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410fc2 FUN_146410fc2 body=29 status=ok
// SIG undefined FUN_146410fc2(void)

undefined8 FUN_146410fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410fe0 FUN_146410fe0 body=29 status=ok
// SIG undefined FUN_146410fe0(void)

undefined8 FUN_146410fe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146410ffe FUN_146410ffe body=29 status=ok
// SIG undefined FUN_146410ffe(void)

undefined8 FUN_146410ffe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641101c FUN_14641101c body=29 status=ok
// SIG undefined FUN_14641101c(void)

undefined8 FUN_14641101c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641103a FUN_14641103a body=29 status=ok
// SIG undefined FUN_14641103a(void)

undefined8 FUN_14641103a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411058 FUN_146411058 body=29 status=ok
// SIG undefined FUN_146411058(void)

bool FUN_146411058(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146411076 FUN_146411076 body=26 status=ok
// SIG undefined FUN_146411076(void)

bool FUN_146411076(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146411090 FUN_146411090 body=24 status=ok
// SIG undefined FUN_146411090(void)

bool FUN_146411090(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1464110a8 FUN_1464110a8 body=29 status=ok
// SIG undefined FUN_1464110a8(void)

bool FUN_1464110a8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1464110c6 FUN_1464110c6 body=26 status=ok
// SIG undefined FUN_1464110c6(void)

bool FUN_1464110c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1464110e0 FUN_1464110e0 body=24 status=ok
// SIG undefined FUN_1464110e0(void)

bool FUN_1464110e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1464110f8 FUN_1464110f8 body=29 status=ok
// SIG undefined FUN_1464110f8(void)

bool FUN_1464110f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146411116 FUN_146411116 body=26 status=ok
// SIG undefined FUN_146411116(void)

bool FUN_146411116(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146411130 FUN_146411130 body=29 status=ok
// SIG undefined FUN_146411130(void)

bool FUN_146411130(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14641114e FUN_14641114e body=95 status=ok
// SIG undefined FUN_14641114e(void)

void FUN_14641114e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1464111ae FUN_1464111ae body=55 status=ok
// SIG undefined FUN_1464111ae(void)

void FUN_1464111ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb114e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb114e0 = FUN_140002ddd(FUN_1464111e5,uVar1,L"WorldPartitionHLODDestructionTag");
  }
  return;
}



// FUNCTION 1464111e5 FUN_1464111e5 body=49 status=ok
// SIG undefined FUN_1464111e5(void)

longlong FUN_1464111e5(void)

{
  if (DAT_14cb114d8 == 0) {
    FUN_14086a14e(&DAT_14cb114d8,&PTR_FUN_14ab19208);
  }
  return DAT_14cb114d8;
}



// FUNCTION 146411216 FUN_146411216 body=48 status=ok
// SIG undefined FUN_146411216(void)

void FUN_146411216(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab1ebd0;
  return;
}



// FUNCTION 146411246 FUN_146411246 body=47 status=ok
// SIG undefined FUN_146411246(void)

longlong FUN_146411246(void)

{
  if (DAT_14cb11518 == 0) {
    FUN_14073dd9a(&DAT_14cb11518,&PTR_LAB_14ab194b0);
  }
  return DAT_14cb11518;
}



// FUNCTION 146411275 FUN_146411275 body=47 status=ok
// SIG undefined FUN_146411275(void)

longlong FUN_146411275(void)

{
  if (DAT_14cb114f8 == 0) {
    FUN_14000fc22(&DAT_14cb114f8,&PTR_FUN_14ab192d0);
  }
  return DAT_14cb114f8;
}



// FUNCTION 1464112a4 FUN_1464112a4 body=47 status=ok
// SIG undefined FUN_1464112a4(void)

longlong FUN_1464112a4(void)

{
  if (DAT_14cb11508 == 0) {
    FUN_14000fc22(&DAT_14cb11508,&PTR_FUN_14ab193b0);
  }
  return DAT_14cb11508;
}



// FUNCTION 1464112d4 FUN_1464112d4 body=34 status=ok
// SIG undefined FUN_1464112d4(void)

void FUN_1464112d4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145992eaa();
  FUN_14069c8d6(uVar1,&PTR_s_GetHLODDestructionTag_14ab193f0,2);
  return;
}



// FUNCTION 1464112f6 FUN_1464112f6 body=35 status=ok
// SIG undefined FUN_1464112f6(void)

void FUN_1464112f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab194f0;
  return;
}



// FUNCTION 14641131e FUN_14641131e body=47 status=ok
// SIG undefined FUN_14641131e(void)

longlong FUN_14641131e(void)

{
  if (DAT_14cb11540 == 0) {
    FUN_14073dd9a(&DAT_14cb11540,&PTR_LAB_14ab199f0);
  }
  return DAT_14cb11540;
}



// FUNCTION 14641134d FUN_14641134d body=47 status=ok
// SIG undefined FUN_14641134d(void)

longlong FUN_14641134d(void)

{
  if (DAT_14cb11528 == 0) {
    FUN_14000fc22(&DAT_14cb11528,&PTR_FUN_14ab19850);
  }
  return DAT_14cb11528;
}



// FUNCTION 14641137c FUN_14641137c body=47 status=ok
// SIG undefined FUN_14641137c(void)

longlong FUN_14641137c(void)

{
  if (DAT_14cb11530 == 0) {
    FUN_14000fc22(&DAT_14cb11530,&PTR_FUN_14ab198e8);
  }
  return DAT_14cb11530;
}



// FUNCTION 1464113ac FUN_1464113ac body=34 status=ok
// SIG undefined FUN_1464113ac(void)

void FUN_1464113ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a739d6();
  FUN_14069c8d6(uVar1,&PTR_s_DamageInHLOD_14ab19930,2);
  return;
}



// FUNCTION 1464113ce FUN_1464113ce body=35 status=ok
// SIG undefined FUN_1464113ce(void)

void FUN_1464113ce(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab19a30;
  return;
}



// FUNCTION 1464113f1 FUN_1464113f1 body=47 status=ok
// SIG undefined FUN_1464113f1(void)

longlong FUN_1464113f1(void)

{
  if (DAT_14cb11568 == 0) {
    FUN_1409ce572(&DAT_14cb11568,&PTR_FUN_14ab19db0);
  }
  return DAT_14cb11568;
}



// FUNCTION 14641142a FUN_14641142a body=47 status=ok
// SIG undefined FUN_14641142a(void)

longlong FUN_14641142a(void)

{
  if (DAT_14cb11588 == 0) {
    FUN_14073dd9a(&DAT_14cb11588,&PTR_LAB_14ab1a158);
  }
  return DAT_14cb11588;
}



// FUNCTION 146411459 FUN_146411459 body=35 status=ok
// SIG undefined FUN_146411459(void)

void FUN_146411459(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1a520;
  return;
}



// FUNCTION 14641147c FUN_14641147c body=47 status=ok
// SIG undefined FUN_14641147c(void)

longlong FUN_14641147c(void)

{
  if (DAT_14cb115a0 == 0) {
    FUN_14073dd9a(&DAT_14cb115a0,&PTR_LAB_14ab1a4d8);
  }
  return DAT_14cb115a0;
}



// FUNCTION 1464114ab FUN_1464114ab body=35 status=ok
// SIG undefined FUN_1464114ab(void)

void FUN_1464114ab(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1a8a0;
  return;
}



// FUNCTION 1464114ce FUN_1464114ce body=47 status=ok
// SIG undefined FUN_1464114ce(void)

longlong FUN_1464114ce(void)

{
  if (DAT_14cb115b8 == 0) {
    FUN_14073dd9a(&DAT_14cb115b8,&PTR_LAB_14ab1a858);
  }
  return DAT_14cb115b8;
}



// FUNCTION 146411503 FUN_146411503 body=47 status=ok
// SIG undefined FUN_146411503(void)

longlong FUN_146411503(void)

{
  if (DAT_14cb115d0 == 0) {
    FUN_14073dd9a(&DAT_14cb115d0,&PTR_LAB_14ab1abc8);
  }
  return DAT_14cb115d0;
}



// FUNCTION 146411532 FUN_146411532 body=56 status=ok
// SIG undefined FUN_146411532(void)

void FUN_146411532(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a126be();
  FUN_140457ffc(lVar1 + 0x570,param_1);
  lVar1 = FUN_144a126be(param_1);
  FUN_140457ffc(lVar1 + 0x588,param_1);
  return;
}



// FUNCTION 14641156a FUN_14641156a body=47 status=ok
// SIG undefined FUN_14641156a(void)

longlong FUN_14641156a(void)

{
  if (DAT_14cb11778 == 0) {
    FUN_14073dd9a(&DAT_14cb11778,&PTR_LAB_14ab1bb28);
  }
  return DAT_14cb11778;
}



// FUNCTION 146411599 FUN_146411599 body=47 status=ok
// SIG undefined FUN_146411599(void)

longlong FUN_146411599(void)

{
  if (DAT_14cb117c8 == 0) {
    FUN_1409ce572(&DAT_14cb117c8,&PTR_FUN_14ab1c5c0);
  }
  return DAT_14cb117c8;
}



// FUNCTION 1464115c8 FUN_1464115c8 body=47 status=ok
// SIG undefined FUN_1464115c8(void)

longlong FUN_1464115c8(void)

{
  if (DAT_14cb117e0 == 0) {
    FUN_1409ce572(&DAT_14cb117e0,&PTR_FUN_14ab1c650);
  }
  return DAT_14cb117e0;
}



// FUNCTION 1464115f7 FUN_1464115f7 body=47 status=ok
// SIG undefined FUN_1464115f7(void)

longlong FUN_1464115f7(void)

{
  if (DAT_14cb117f8 == 0) {
    FUN_1409ce572(&DAT_14cb117f8,&PTR_FUN_14ab1c6d0);
  }
  return DAT_14cb117f8;
}



// FUNCTION 146411626 FUN_146411626 body=55 status=ok
// SIG undefined FUN_146411626(void)

void FUN_146411626(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11818 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11818 = FUN_140002ddd(FUN_14641165d,uVar1,L"RuntimeCellTransformerInstance");
  }
  return;
}



// FUNCTION 14641165d FUN_14641165d body=47 status=ok
// SIG undefined FUN_14641165d(void)

longlong FUN_14641165d(void)

{
  if (DAT_14cb11810 == 0) {
    FUN_14086a14e(&DAT_14cb11810,&PTR_FUN_14ab1c760);
  }
  return DAT_14cb11810;
}



// FUNCTION 14641168c FUN_14641168c body=48 status=ok
// SIG undefined FUN_14641168c(void)

void FUN_14641168c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab1f0f0;
  return;
}



// FUNCTION 1464116c1 FUN_1464116c1 body=47 status=ok
// SIG undefined FUN_1464116c1(void)

longlong FUN_1464116c1(void)

{
  if (DAT_14cb11830 == 0) {
    FUN_14073dd9a(&DAT_14cb11830,&PTR_LAB_14ab1cc58);
  }
  return DAT_14cb11830;
}



// FUNCTION 1464116f0 FUN_1464116f0 body=308 status=ok
// SIG undefined FUN_1464116f0(void)

void FUN_1464116f0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  FUN_141156948(param_2);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (0x49 < iVar4) {
    uVar5 = 0;
    if (param_2[0xd] != 0) {
      uVar5 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_24 = uVar5;
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      uVar5 = local_24;
      if (1 < local_24) {
        FUN_14572541c(param_2);
        uVar5 = local_24;
      }
    }
    else {
      uVar5 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar5 != 0) {
      (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xe0);
    }
  }
  uVar6 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  cVar3 = FUN_1413e2d88(param_2,uVar6,0x75,1);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146411825 FUN_146411825 body=187 status=ok
// SIG undefined FUN_146411825(void)

undefined8 FUN_146411825(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14596e8c2();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x48;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464118e2 FUN_1464118e2 body=131 status=ok
// SIG undefined FUN_1464118e2(void)

void FUN_1464118e2(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
    return;
  }
  uVar2 = FUN_144a7757c();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == lVar3) {
    FUN_140457ffc(lVar4 + 0x7e8,param_1);
    FUN_140457ffc(*(longlong *)(param_1 + 0x40) + 2000,param_1);
    lVar4 = *(longlong *)(param_1 + 0x40);
  }
  lVar4 = FUN_14011c706(lVar4);
  FUN_140457ffc(lVar4 + 0x158,param_1);
  return;
}



// FUNCTION 14641196b FUN_14641196b body=35 status=ok
// SIG undefined FUN_14641196b(void)

void FUN_14641196b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1d790;
  return;
}



// FUNCTION 146411993 FUN_146411993 body=47 status=ok
// SIG undefined FUN_146411993(void)

longlong FUN_146411993(void)

{
  if (DAT_14cb118c0 == 0) {
    FUN_14073dd9a(&DAT_14cb118c0,&PTR_LAB_14ab1d748);
  }
  return DAT_14cb118c0;
}



// FUNCTION 1464119c2 FUN_1464119c2 body=35 status=ok
// SIG undefined FUN_1464119c2(void)

void FUN_1464119c2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1e0f0;
  return;
}



// FUNCTION 1464119ea FUN_1464119ea body=47 status=ok
// SIG undefined FUN_1464119ea(void)

longlong FUN_1464119ea(void)

{
  if (DAT_14cb11a50 == 0) {
    FUN_14073dd9a(&DAT_14cb11a50,&PTR_LAB_14ab1e0a8);
  }
  return DAT_14cb11a50;
}



// FUNCTION 146411a1a FUN_146411a1a body=55 status=ok
// SIG undefined FUN_146411a1a(void)

void FUN_146411a1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11a68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11a68 = FUN_140002ddd(FUN_146411a51,uVar1,L"WorldPartitionPerWorldSettings");
  }
  return;
}



// FUNCTION 146411a51 FUN_146411a51 body=47 status=ok
// SIG undefined FUN_146411a51(void)

longlong FUN_146411a51(void)

{
  if (DAT_14cb11a60 == 0) {
    FUN_14086a14e(&DAT_14cb11a60,&PTR_FUN_14ab1e418);
  }
  return DAT_14cb11a60;
}



// FUNCTION 146411a80 FUN_146411a80 body=48 status=ok
// SIG undefined FUN_146411a80(void)

void FUN_146411a80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab1f280;
  return;
}



// FUNCTION 146411ab0 FUN_146411ab0 body=35 status=ok
// SIG undefined FUN_146411ab0(void)

void FUN_146411ab0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1e510;
  return;
}



// FUNCTION 146411ad3 FUN_146411ad3 body=47 status=ok
// SIG undefined FUN_146411ad3(void)

longlong FUN_146411ad3(void)

{
  if (DAT_14cb11a80 == 0) {
    FUN_14073dd9a(&DAT_14cb11a80,&PTR_LAB_14ab1e4c8);
  }
  return DAT_14cb11a80;
}



// FUNCTION 146411b02 FUN_146411b02 body=35 status=ok
// SIG undefined FUN_146411b02(void)

void FUN_146411b02(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1e8d0;
  return;
}



// FUNCTION 146411b25 FUN_146411b25 body=47 status=ok
// SIG undefined FUN_146411b25(void)

longlong FUN_146411b25(void)

{
  if (DAT_14cb11a98 == 0) {
    FUN_14073dd9a(&DAT_14cb11a98,&PTR_LAB_14ab1e888);
  }
  return DAT_14cb11a98;
}



// FUNCTION 146411b54 FUN_146411b54 body=40 status=ok
// SIG undefined FUN_146411b54(void)

undefined8 FUN_146411b54(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411b7c FUN_146411b7c body=40 status=ok
// SIG undefined FUN_146411b7c(void)

undefined8 FUN_146411b7c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411ba4 FUN_146411ba4 body=40 status=ok
// SIG undefined FUN_146411ba4(void)

undefined8 FUN_146411ba4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411bcc FUN_146411bcc body=40 status=ok
// SIG undefined FUN_146411bcc(void)

undefined8 FUN_146411bcc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411bf4 FUN_146411bf4 body=40 status=ok
// SIG undefined FUN_146411bf4(void)

undefined8 FUN_146411bf4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411c1c FUN_146411c1c body=72 status=ok
// SIG undefined FUN_146411c1c(void)

undefined8 * FUN_146411c1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab1bb70;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411c64 FUN_146411c64 body=40 status=ok
// SIG undefined FUN_146411c64(void)

undefined8 FUN_146411c64(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411c8c FUN_146411c8c body=40 status=ok
// SIG undefined FUN_146411c8c(void)

undefined8 FUN_146411c8c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411cb4 FUN_146411cb4 body=40 status=ok
// SIG undefined FUN_146411cb4(void)

undefined8 FUN_146411cb4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411cdc FUN_146411cdc body=40 status=ok
// SIG undefined FUN_146411cdc(void)

undefined8 FUN_146411cdc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411d04 FUN_146411d04 body=29 status=ok
// SIG undefined FUN_146411d04(void)

undefined8 FUN_146411d04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411d22 FUN_146411d22 body=29 status=ok
// SIG undefined FUN_146411d22(void)

undefined8 FUN_146411d22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411d3f FUN_146411d3f body=203 status=ok
// SIG undefined FUN_146411d3f(void)

undefined8 FUN_146411d3f(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0x40;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146411e0c FUN_146411e0c body=29 status=ok
// SIG undefined FUN_146411e0c(void)

undefined8 FUN_146411e0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411e2a FUN_146411e2a body=29 status=ok
// SIG undefined FUN_146411e2a(void)

bool FUN_146411e2a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146411e48 FUN_146411e48 body=26 status=ok
// SIG undefined FUN_146411e48(void)

bool FUN_146411e48(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146411e62 FUN_146411e62 body=24 status=ok
// SIG undefined FUN_146411e62(void)

bool FUN_146411e62(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146411e7a FUN_146411e7a body=29 status=ok
// SIG undefined FUN_146411e7a(void)

undefined8 FUN_146411e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146411e98 FUN_146411e98 body=29 status=ok
// SIG undefined FUN_146411e98(void)

bool FUN_146411e98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146411eb6 FUN_146411eb6 body=24 status=ok
// SIG undefined FUN_146411eb6(void)

bool FUN_146411eb6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146411ede FUN_146411ede body=47 status=ok
// SIG undefined FUN_146411ede(void)

longlong FUN_146411ede(void)

{
  if (DAT_14cb11ab8 == 0) {
    FUN_14073dd9a(&DAT_14cb11ab8,&PTR_LAB_14ab1fea8);
  }
  return DAT_14cb11ab8;
}



// FUNCTION 146411f0d FUN_146411f0d body=47 status=ok
// SIG undefined FUN_146411f0d(void)

longlong FUN_146411f0d(void)

{
  if (DAT_14cb11ef0 == 0) {
    FUN_14073dd9a(&DAT_14cb11ef0,&PTR_LAB_14ab28058);
  }
  return DAT_14cb11ef0;
}



// FUNCTION 146411f3c FUN_146411f3c body=47 status=ok
// SIG undefined FUN_146411f3c(void)

longlong FUN_146411f3c(void)

{
  if (DAT_14cb11ad0 == 0) {
    FUN_14073dd9a(&DAT_14cb11ad0,&PTR_LAB_14ab20608);
  }
  return DAT_14cb11ad0;
}



// FUNCTION 146411f71 FUN_146411f71 body=47 status=ok
// SIG undefined FUN_146411f71(void)

longlong FUN_146411f71(void)

{
  if (DAT_14cb11ae8 == 0) {
    FUN_14073dd9a(&DAT_14cb11ae8,&PTR_LAB_14ab20e68);
  }
  return DAT_14cb11ae8;
}



// FUNCTION 146411fa0 FUN_146411fa0 body=47 status=ok
// SIG undefined FUN_146411fa0(void)

longlong FUN_146411fa0(void)

{
  if (DAT_14cb11b00 == 0) {
    FUN_14073dd9a(&DAT_14cb11b00,&PTR_LAB_14ab21578);
  }
  return DAT_14cb11b00;
}



// FUNCTION 146411fd5 FUN_146411fd5 body=47 status=ok
// SIG undefined FUN_146411fd5(void)

longlong FUN_146411fd5(void)

{
  if (DAT_14cb11b18 == 0) {
    FUN_14073dd9a(&DAT_14cb11b18,&PTR_LAB_14ab21d38);
  }
  return DAT_14cb11b18;
}



// FUNCTION 146412004 FUN_146412004 body=55 status=ok
// SIG undefined FUN_146412004(void)

void FUN_146412004(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11b60 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11b60 = FUN_140002ddd(FUN_14641203b,uVar1,L"WorldPartitionRuntimeCellPropertyOverride");
  }
  return;
}



// FUNCTION 14641203b FUN_14641203b body=47 status=ok
// SIG undefined FUN_14641203b(void)

longlong FUN_14641203b(void)

{
  if (DAT_14cb11b58 == 0) {
    FUN_14086a14e(&DAT_14cb11b58,&PTR_FUN_14ab22648);
  }
  return DAT_14cb11b58;
}



// FUNCTION 14641206a FUN_14641206a body=48 status=ok
// SIG undefined FUN_14641206a(void)

void FUN_14641206a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab2ba20;
  return;
}



// FUNCTION 14641209a FUN_14641209a body=55 status=ok
// SIG undefined FUN_14641209a(void)

void FUN_14641209a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11b78 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11b78 = FUN_140002ddd(FUN_1464120d1,uVar1,L"WorldPartitionRuntimeCellObjectMapping");
  }
  return;
}



// FUNCTION 1464120d1 FUN_1464120d1 body=47 status=ok
// SIG undefined FUN_1464120d1(void)

longlong FUN_1464120d1(void)

{
  if (DAT_14cb11b70 == 0) {
    FUN_14086a14e(&DAT_14cb11b70,&PTR_FUN_14ab226f8);
  }
  return DAT_14cb11b70;
}



// FUNCTION 146412100 FUN_146412100 body=48 status=ok
// SIG undefined FUN_146412100(void)

void FUN_146412100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab2bb80;
  return;
}



// FUNCTION 146412130 FUN_146412130 body=47 status=ok
// SIG undefined FUN_146412130(void)

longlong FUN_146412130(void)

{
  if (DAT_14cb11b88 == 0) {
    FUN_1409ce572(&DAT_14cb11b88,&PTR_FUN_14ab22780);
  }
  return DAT_14cb11b88;
}



// FUNCTION 146412160 FUN_146412160 body=55 status=ok
// SIG undefined FUN_146412160(void)

void FUN_146412160(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11ba8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11ba8 = FUN_140002ddd(FUN_146412197,uVar1,L"WorldPartitionRuntimeCellDebugInfo");
  }
  return;
}



// FUNCTION 146412197 FUN_146412197 body=47 status=ok
// SIG undefined FUN_146412197(void)

longlong FUN_146412197(void)

{
  if (DAT_14cb11ba0 == 0) {
    FUN_14086a14e(&DAT_14cb11ba0,&PTR_FUN_14ab22980);
  }
  return DAT_14cb11ba0;
}



// FUNCTION 1464121c6 FUN_1464121c6 body=48 status=ok
// SIG undefined FUN_1464121c6(void)

void FUN_1464121c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ab2bda0;
  return;
}


