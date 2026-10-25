// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1465f508a FUN_1465f508a body=336 status=ok
// SIG undefined FUN_1465f508a(void)

void FUN_1465f508a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14113fe46(param_1,iVar2 != 0,iVar1 != 0,local_31);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465f51db FUN_1465f51db body=47 status=ok
// SIG undefined FUN_1465f51db(void)

longlong FUN_1465f51db(void)

{
  if (DAT_14cbb2318 == 0) {
    FUN_14000fc22(&DAT_14cbb2318,&PTR_FUN_14b82b3b0);
  }
  return DAT_14cbb2318;
}



// FUNCTION 1465f520a FUN_1465f520a body=47 status=ok
// SIG undefined FUN_1465f520a(void)

longlong FUN_1465f520a(void)

{
  if (DAT_14cbb2320 == 0) {
    FUN_14000fc22(&DAT_14cbb2320,&PTR_FUN_14b82b490);
  }
  return DAT_14cbb2320;
}



// FUNCTION 1465f5239 FUN_1465f5239 body=47 status=ok
// SIG undefined FUN_1465f5239(void)

longlong FUN_1465f5239(void)

{
  if (DAT_14cbb2328 == 0) {
    FUN_14000fc22(&DAT_14cbb2328,&PTR_FUN_14b82b510);
  }
  return DAT_14cbb2328;
}



// FUNCTION 1465f5268 FUN_1465f5268 body=47 status=ok
// SIG undefined FUN_1465f5268(void)

longlong FUN_1465f5268(void)

{
  if (DAT_14cbb2330 == 0) {
    FUN_14000fc22(&DAT_14cbb2330,&PTR_FUN_14b82b628);
  }
  return DAT_14cbb2330;
}



// FUNCTION 1465f5297 FUN_1465f5297 body=47 status=ok
// SIG undefined FUN_1465f5297(void)

longlong FUN_1465f5297(void)

{
  if (DAT_14cbb2338 == 0) {
    FUN_14000fc22(&DAT_14cbb2338,&PTR_FUN_14b82b748);
  }
  return DAT_14cbb2338;
}



// FUNCTION 1465f52c6 FUN_1465f52c6 body=34 status=ok
// SIG undefined FUN_1465f52c6(void)

void FUN_1465f52c6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d120();
  FUN_14069c8d6(uVar1,&PTR_s_OnBeingRevivedStopped_14b82b790,8);
  return;
}



// FUNCTION 1465f52e8 FUN_1465f52e8 body=68 status=ok
// SIG undefined FUN_1465f52e8(void)

void FUN_1465f52e8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82b930;
  puVar1[6] = &PTR_FUN_14b82bbf0;
  puVar1[7] = &PTR_FUN_14b82bc80;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return;
}



// FUNCTION 1465f5331 FUN_1465f5331 body=47 status=ok
// SIG undefined FUN_1465f5331(void)

longlong FUN_1465f5331(void)

{
  if (DAT_14cbb2360 == 0) {
    FUN_14073dd9a(&DAT_14cbb2360,&PTR_LAB_14b82bda8);
  }
  return DAT_14cbb2360;
}



// FUNCTION 1465f5360 FUN_1465f5360 body=54 status=ok
// SIG undefined FUN_1465f5360(void)

void FUN_1465f5360(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82c290;
  puVar1[6] = &PTR_FUN_14b82c550;
  puVar1[7] = &PTR_LAB_14b82c5e0;
  return;
}



// FUNCTION 1465f5396 FUN_1465f5396 body=47 status=ok
// SIG undefined FUN_1465f5396(void)

longlong FUN_1465f5396(void)

{
  if (DAT_14cbb2378 == 0) {
    FUN_14073dd9a(&DAT_14cbb2378,&PTR_LAB_14b82c248);
  }
  return DAT_14cbb2378;
}



// FUNCTION 1465f53c5 FUN_1465f53c5 body=61 status=ok
// SIG undefined FUN_1465f53c5(void)

void FUN_1465f53c5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82c700;
  puVar1[6] = &PTR_FUN_14b82c9c0;
  puVar1[7] = &PTR_LAB_14b82ca50;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1465f5402 FUN_1465f5402 body=47 status=ok
// SIG undefined FUN_1465f5402(void)

longlong FUN_1465f5402(void)

{
  if (DAT_14cbb2390 == 0) {
    FUN_14073dd9a(&DAT_14cbb2390,&PTR_LAB_14b82c6b8);
  }
  return DAT_14cbb2390;
}



// FUNCTION 1465f5431 FUN_1465f5431 body=49 status=ok
// SIG undefined FUN_1465f5431(void)

longlong FUN_1465f5431(void)

{
  if (DAT_14cbb23c0 == 0) {
    FUN_14073dd9a(&DAT_14cbb23c0,&PTR_LAB_14b82cdc0);
  }
  return DAT_14cbb23c0;
}



// FUNCTION 1465f5462 FUN_1465f5462 body=47 status=ok
// SIG undefined FUN_1465f5462(void)

longlong FUN_1465f5462(void)

{
  if (DAT_14cbb23a0 == 0) {
    FUN_14000fc22(&DAT_14cbb23a0,&PTR_FUN_14b82cad8);
  }
  return DAT_14cbb23a0;
}



// FUNCTION 1465f5491 FUN_1465f5491 body=47 status=ok
// SIG undefined FUN_1465f5491(void)

longlong FUN_1465f5491(void)

{
  if (DAT_14cbb23a8 == 0) {
    FUN_14000fc22(&DAT_14cbb23a8,&PTR_FUN_14b82cbc0);
  }
  return DAT_14cbb23a8;
}



// FUNCTION 1465f54c0 FUN_1465f54c0 body=47 status=ok
// SIG undefined FUN_1465f54c0(void)

longlong FUN_1465f54c0(void)

{
  if (DAT_14cbb23b0 == 0) {
    FUN_14000fc22(&DAT_14cbb23b0,&PTR_FUN_14b82ccb0);
  }
  return DAT_14cbb23b0;
}



// FUNCTION 1465f54f0 FUN_1465f54f0 body=34 status=ok
// SIG undefined FUN_1465f54f0(void)

void FUN_1465f54f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d20c();
  FUN_14069c8d6(uVar1,&PTR_s_CloseEcho_14b82ccf0,3);
  return;
}



// FUNCTION 1465f5512 FUN_1465f5512 body=76 status=ok
// SIG undefined FUN_1465f5512(void)

void FUN_1465f5512(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82ce00;
  puVar1[6] = &PTR_FUN_14b82d0c0;
  puVar1[7] = &PTR_LAB_14b82d150;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 1465f555e FUN_1465f555e body=147 status=ok
// SIG undefined FUN_1465f555e(void)

void FUN_1465f555e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82d300;
  puVar1[6] = &PTR_FUN_14b82d5c0;
  puVar1[7] = &PTR_FUN_14b82d650;
  puVar1[9] = 0;
  puVar1[10] = 0x3ff0000000000000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3ff00000;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0x3ff0000000000000;
  puVar1[0x15] = 0x3ff0000000000000;
  puVar1[0x16] = 0x3ff0000000000000;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  return;
}



// FUNCTION 1465f55f1 FUN_1465f55f1 body=47 status=ok
// SIG undefined FUN_1465f55f1(void)

longlong FUN_1465f55f1(void)

{
  if (DAT_14cbb23d8 == 0) {
    FUN_14073dd9a(&DAT_14cbb23d8,&PTR_LAB_14b82d2b8);
  }
  return DAT_14cbb23d8;
}



// FUNCTION 1465f5620 FUN_1465f5620 body=47 status=ok
// SIG undefined FUN_1465f5620(void)

longlong FUN_1465f5620(void)

{
  if (DAT_14cbb2400 == 0) {
    FUN_14073dd9a(&DAT_14cbb2400,&PTR_LAB_14b82d8a0);
  }
  return DAT_14cbb2400;
}



// FUNCTION 1465f564f FUN_1465f564f body=47 status=ok
// SIG undefined FUN_1465f564f(void)

longlong FUN_1465f564f(void)

{
  if (DAT_14cbb23e8 == 0) {
    FUN_14000fc22(&DAT_14cbb23e8,&PTR_FUN_14b82d6c8);
  }
  return DAT_14cbb23e8;
}



// FUNCTION 1465f567e FUN_1465f567e body=47 status=ok
// SIG undefined FUN_1465f567e(void)

longlong FUN_1465f567e(void)

{
  if (DAT_14cbb23f0 == 0) {
    FUN_14000fc22(&DAT_14cbb23f0,&PTR_FUN_14b82d7b0);
  }
  return DAT_14cbb23f0;
}



// FUNCTION 1465f56ae FUN_1465f56ae body=34 status=ok
// SIG undefined FUN_1465f56ae(void)

void FUN_1465f56ae(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d2f8();
  FUN_14069c8d6(uVar1,&PTR_s_OnSwitchedMode_14b82d7f0,2);
  return;
}



// FUNCTION 1465f56d0 FUN_1465f56d0 body=86 status=ok
// SIG undefined FUN_1465f56d0(void)

void FUN_1465f56d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82d8e0;
  puVar1[6] = &PTR_FUN_14b82dba0;
  puVar1[7] = &PTR_LAB_14b82dc30;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  return;
}



// FUNCTION 1465f5726 FUN_1465f5726 body=49 status=ok
// SIG undefined FUN_1465f5726(void)

longlong FUN_1465f5726(void)

{
  if (DAT_14cbb2460 == 0) {
    FUN_14073dd9a(&DAT_14cbb2460,&PTR_LAB_14b82e340);
  }
  return DAT_14cbb2460;
}



// FUNCTION 1465f5757 FUN_1465f5757 body=47 status=ok
// SIG undefined FUN_1465f5757(void)

longlong FUN_1465f5757(void)

{
  if (DAT_14cbb2410 == 0) {
    FUN_14000fc22(&DAT_14cbb2410,&PTR_FUN_14b82dcc8);
  }
  return DAT_14cbb2410;
}



// FUNCTION 1465f5786 FUN_1465f5786 body=47 status=ok
// SIG undefined FUN_1465f5786(void)

longlong FUN_1465f5786(void)

{
  if (DAT_14cbb2418 == 0) {
    FUN_14000fc22(&DAT_14cbb2418,&PTR_FUN_14b82dd08);
  }
  return DAT_14cbb2418;
}



// FUNCTION 1465f57b5 FUN_1465f57b5 body=47 status=ok
// SIG undefined FUN_1465f57b5(void)

longlong FUN_1465f57b5(void)

{
  if (DAT_14cbb2420 == 0) {
    FUN_14000fc22(&DAT_14cbb2420,&PTR_FUN_14b82ddf8);
  }
  return DAT_14cbb2420;
}



// FUNCTION 1465f57e4 FUN_1465f57e4 body=47 status=ok
// SIG undefined FUN_1465f57e4(void)

longlong FUN_1465f57e4(void)

{
  if (DAT_14cbb2428 == 0) {
    FUN_14000fc22(&DAT_14cbb2428,&PTR_FUN_14b82dea8);
  }
  return DAT_14cbb2428;
}



// FUNCTION 1465f5813 FUN_1465f5813 body=47 status=ok
// SIG undefined FUN_1465f5813(void)

longlong FUN_1465f5813(void)

{
  if (DAT_14cbb2430 == 0) {
    FUN_14000fc22(&DAT_14cbb2430,&PTR_FUN_14b82dee8);
  }
  return DAT_14cbb2430;
}



// FUNCTION 1465f5842 FUN_1465f5842 body=47 status=ok
// SIG undefined FUN_1465f5842(void)

longlong FUN_1465f5842(void)

{
  if (DAT_14cbb2438 == 0) {
    FUN_14000fc22(&DAT_14cbb2438,&PTR_FUN_14b82df48);
  }
  return DAT_14cbb2438;
}



// FUNCTION 1465f5871 FUN_1465f5871 body=47 status=ok
// SIG undefined FUN_1465f5871(void)

longlong FUN_1465f5871(void)

{
  if (DAT_14cbb2440 == 0) {
    FUN_14000fc22(&DAT_14cbb2440,&PTR_FUN_14b82e038);
  }
  return DAT_14cbb2440;
}



// FUNCTION 1465f58a0 FUN_1465f58a0 body=47 status=ok
// SIG undefined FUN_1465f58a0(void)

longlong FUN_1465f58a0(void)

{
  if (DAT_14cbb2448 == 0) {
    FUN_14000fc22(&DAT_14cbb2448,&PTR_FUN_14b82e110);
  }
  return DAT_14cbb2448;
}



// FUNCTION 1465f58cf FUN_1465f58cf body=47 status=ok
// SIG undefined FUN_1465f58cf(void)

longlong FUN_1465f58cf(void)

{
  if (DAT_14cbb2450 == 0) {
    FUN_14000fc22(&DAT_14cbb2450,&PTR_FUN_14b82e170);
  }
  return DAT_14cbb2450;
}



// FUNCTION 1465f58fe FUN_1465f58fe body=34 status=ok
// SIG undefined FUN_1465f58fe(void)

void FUN_1465f58fe(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d3e4();
  FUN_14069c8d6(uVar1,&PTR_s_ClearGadgetCooldownDelegates_14b82e1b0,9);
  return;
}



// FUNCTION 1465f5920 FUN_1465f5920 body=105 status=ok
// SIG undefined FUN_1465f5920(void)

void FUN_1465f5920(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409e15fe(puVar1);
  *puVar1 = &PTR_FUN_14b82e380;
  puVar1[6] = &PTR_FUN_14b82e640;
  puVar1[7] = &PTR_FUN_14b82e6d0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x74) = 0xff;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb9) = 0;
  return;
}



// FUNCTION 1465f5989 FUN_1465f5989 body=62 status=ok
// SIG undefined FUN_1465f5989(void)

void FUN_1465f5989(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b82e7f0;
  puVar1[6] = &PTR_FUN_14b82eab0;
  puVar1[7] = &PTR_LAB_14b82eb40;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 1465f59c7 FUN_1465f59c7 body=47 status=ok
// SIG undefined FUN_1465f59c7(void)

longlong FUN_1465f59c7(void)

{
  if (DAT_14cbb2478 == 0) {
    FUN_14073dd9a(&DAT_14cbb2478,&PTR_LAB_14b82e7a8);
  }
  return DAT_14cbb2478;
}



// FUNCTION 1465f59f6 FUN_1465f59f6 body=47 status=ok
// SIG undefined FUN_1465f59f6(void)

longlong FUN_1465f59f6(void)

{
  if (DAT_14cbb24a0 == 0) {
    FUN_14073dd9a(&DAT_14cbb24a0,&PTR_LAB_14b82eec0);
  }
  return DAT_14cbb24a0;
}



// FUNCTION 1465f5a25 FUN_1465f5a25 body=47 status=ok
// SIG undefined FUN_1465f5a25(void)

longlong FUN_1465f5a25(void)

{
  if (DAT_14cbb2488 == 0) {
    FUN_14000fc22(&DAT_14cbb2488,&PTR_FUN_14b82ec60);
  }
  return DAT_14cbb2488;
}



// FUNCTION 1465f5a54 FUN_1465f5a54 body=47 status=ok
// SIG undefined FUN_1465f5a54(void)

longlong FUN_1465f5a54(void)

{
  if (DAT_14cbb2490 == 0) {
    FUN_14000fc22(&DAT_14cbb2490,&PTR_FUN_14b82ed30);
  }
  return DAT_14cbb2490;
}



// FUNCTION 1465f5a84 FUN_1465f5a84 body=34 status=ok
// SIG undefined FUN_1465f5a84(void)

void FUN_1465f5a84(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d4d0();
  FUN_14069c8d6(uVar1,&PTR_s_OnGrapple_14b82ed70,2);
  return;
}



// FUNCTION 1465f5aa6 FUN_1465f5aa6 body=47 status=ok
// SIG undefined FUN_1465f5aa6(void)

longlong FUN_1465f5aa6(void)

{
  if (DAT_14cbb24c0 == 0) {
    FUN_14073dd9a(&DAT_14cbb24c0,&PTR_LAB_14b82f430);
  }
  return DAT_14cbb24c0;
}



// FUNCTION 1465f5ad5 FUN_1465f5ad5 body=47 status=ok
// SIG undefined FUN_1465f5ad5(void)

longlong FUN_1465f5ad5(void)

{
  if (DAT_14cbb24b0 == 0) {
    FUN_14000fc22(&DAT_14cbb24b0,&PTR_FUN_14b82f360);
  }
  return DAT_14cbb24b0;
}



// FUNCTION 1465f5b04 FUN_1465f5b04 body=34 status=ok
// SIG undefined FUN_1465f5b04(void)

void FUN_1465f5b04(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d5bc();
  FUN_14069c8d6(uVar1,&PTR_s_OnPossessPawnChanged_14b82f3a0,1);
  return;
}



// FUNCTION 1465f5b26 FUN_1465f5b26 body=54 status=ok
// SIG undefined FUN_1465f5b26(void)

void FUN_1465f5b26(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82f470;
  puVar1[6] = &PTR_FUN_14b82f730;
  puVar1[7] = &PTR_LAB_14b82f7c0;
  return;
}



// FUNCTION 1465f5b5c FUN_1465f5b5c body=73 status=ok
// SIG undefined FUN_1465f5b5c(void)

void FUN_1465f5b5c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82f8d0;
  puVar1[6] = &PTR_FUN_14b82fb90;
  puVar1[7] = &PTR_LAB_14b82fc20;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 1465f5ba5 FUN_1465f5ba5 body=47 status=ok
// SIG undefined FUN_1465f5ba5(void)

longlong FUN_1465f5ba5(void)

{
  if (DAT_14cbb24d8 == 0) {
    FUN_14073dd9a(&DAT_14cbb24d8,&PTR_LAB_14b82f888);
  }
  return DAT_14cbb24d8;
}



// FUNCTION 1465f5bd4 FUN_1465f5bd4 body=69 status=ok
// SIG undefined FUN_1465f5bd4(void)

void FUN_1465f5bd4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b82fd40;
  puVar1[6] = &PTR_FUN_14b830000;
  puVar1[7] = &PTR_LAB_14b830090;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 1465f5c19 FUN_1465f5c19 body=47 status=ok
// SIG undefined FUN_1465f5c19(void)

longlong FUN_1465f5c19(void)

{
  if (DAT_14cbb24f0 == 0) {
    FUN_14073dd9a(&DAT_14cbb24f0,&PTR_LAB_14b82fcf8);
  }
  return DAT_14cbb24f0;
}



// FUNCTION 1465f5c48 FUN_1465f5c48 body=75 status=ok
// SIG undefined FUN_1465f5c48(void)

void FUN_1465f5c48(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409e15fe(puVar1);
  *puVar1 = &PTR_FUN_14b8301b0;
  puVar1[6] = &PTR_LAB_14b830470;
  puVar1[7] = &PTR_LAB_14b830500;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  return;
}



// FUNCTION 1465f5c93 FUN_1465f5c93 body=47 status=ok
// SIG undefined FUN_1465f5c93(void)

longlong FUN_1465f5c93(void)

{
  if (DAT_14cbb2508 == 0) {
    FUN_14073dd9a(&DAT_14cbb2508,&PTR_LAB_14b830168);
  }
  return DAT_14cbb2508;
}



// FUNCTION 1465f5cc2 FUN_1465f5cc2 body=49 status=ok
// SIG undefined FUN_1465f5cc2(void)

longlong FUN_1465f5cc2(void)

{
  if (DAT_14cbb2540 == 0) {
    FUN_14073dd9a(&DAT_14cbb2540,&PTR_LAB_14b830a20);
  }
  return DAT_14cbb2540;
}



// FUNCTION 1465f5cf3 FUN_1465f5cf3 body=47 status=ok
// SIG undefined FUN_1465f5cf3(void)

longlong FUN_1465f5cf3(void)

{
  if (DAT_14cbb2518 == 0) {
    FUN_14000fc22(&DAT_14cbb2518,&PTR_FUN_14b830578);
  }
  return DAT_14cbb2518;
}



// FUNCTION 1465f5d22 FUN_1465f5d22 body=47 status=ok
// SIG undefined FUN_1465f5d22(void)

longlong FUN_1465f5d22(void)

{
  if (DAT_14cbb2520 == 0) {
    FUN_14000fc22(&DAT_14cbb2520,&PTR_FUN_14b8306d8);
  }
  return DAT_14cbb2520;
}



// FUNCTION 1465f5d51 FUN_1465f5d51 body=47 status=ok
// SIG undefined FUN_1465f5d51(void)

longlong FUN_1465f5d51(void)

{
  if (DAT_14cbb2528 == 0) {
    FUN_14000fc22(&DAT_14cbb2528,&PTR_FUN_14b8307b0);
  }
  return DAT_14cbb2528;
}



// FUNCTION 1465f5d80 FUN_1465f5d80 body=47 status=ok
// SIG undefined FUN_1465f5d80(void)

longlong FUN_1465f5d80(void)

{
  if (DAT_14cbb2530 == 0) {
    FUN_14000fc22(&DAT_14cbb2530,&PTR_FUN_14b8308e8);
  }
  return DAT_14cbb2530;
}



// FUNCTION 1465f5db0 FUN_1465f5db0 body=34 status=ok
// SIG undefined FUN_1465f5db0(void)

void FUN_1465f5db0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e44a04();
  FUN_14069c8d6(uVar1,&PTR_s_OnOakCharacterChanged_14b830930,4);
  return;
}



// FUNCTION 1465f5dd7 FUN_1465f5dd7 body=94 status=ok
// SIG undefined FUN_1465f5dd7(void)

void FUN_1465f5dd7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b830a60;
  puVar1[6] = &PTR_FUN_14b830d50;
  puVar1[7] = &PTR_LAB_14b830de0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  FUN_140056680(puVar1 + 0xc,&DAT_149dfb77a);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 1465f5e35 FUN_1465f5e35 body=49 status=ok
// SIG undefined FUN_1465f5e35(void)

longlong FUN_1465f5e35(void)

{
  if (DAT_14cbb2650 == 0) {
    FUN_14073dd9a(&DAT_14cbb2650,&PTR_LAB_14b833688);
  }
  return DAT_14cbb2650;
}



// FUNCTION 1465f5e66 FUN_1465f5e66 body=100 status=ok
// SIG undefined FUN_1465f5e66(void)

void FUN_1465f5e66(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b830f00;
  puVar1[6] = &PTR_FUN_14b8311c0;
  puVar1[7] = &PTR_FUN_14b831250;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  return;
}



// FUNCTION 1465f5eca FUN_1465f5eca body=47 status=ok
// SIG undefined FUN_1465f5eca(void)

longlong FUN_1465f5eca(void)

{
  if (DAT_14cbb2558 == 0) {
    FUN_14073dd9a(&DAT_14cbb2558,&PTR_LAB_14b830eb8);
  }
  return DAT_14cbb2558;
}



// FUNCTION 1465f5ef9 FUN_1465f5ef9 body=49 status=ok
// SIG undefined FUN_1465f5ef9(void)

longlong FUN_1465f5ef9(void)

{
  if (DAT_14cbb2588 == 0) {
    FUN_14073dd9a(&DAT_14cbb2588,&PTR_LAB_14b831620);
  }
  return DAT_14cbb2588;
}



// FUNCTION 1465f5f2a FUN_1465f5f2a body=47 status=ok
// SIG undefined FUN_1465f5f2a(void)

longlong FUN_1465f5f2a(void)

{
  if (DAT_14cbb2568 == 0) {
    FUN_14000fc22(&DAT_14cbb2568,&PTR_FUN_14b8313a8);
  }
  return DAT_14cbb2568;
}



// FUNCTION 1465f5f59 FUN_1465f5f59 body=47 status=ok
// SIG undefined FUN_1465f5f59(void)

longlong FUN_1465f5f59(void)

{
  if (DAT_14cbb2570 == 0) {
    FUN_14000fc22(&DAT_14cbb2570,&PTR_FUN_14b831450);
  }
  return DAT_14cbb2570;
}



// FUNCTION 1465f5f88 FUN_1465f5f88 body=47 status=ok
// SIG undefined FUN_1465f5f88(void)

longlong FUN_1465f5f88(void)

{
  if (DAT_14cbb2578 == 0) {
    FUN_14000fc22(&DAT_14cbb2578,&PTR_FUN_14b831520);
  }
  return DAT_14cbb2578;
}



// FUNCTION 1465f5fb8 FUN_1465f5fb8 body=34 status=ok
// SIG undefined FUN_1465f5fb8(void)

void FUN_1465f5fb8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d6a8();
  FUN_14069c8d6(uVar1,&PTR_s_OnControllerChanged_14b831560,3);
  return;
}



// FUNCTION 1465f5fda FUN_1465f5fda body=106 status=ok
// SIG undefined FUN_1465f5fda(void)

void FUN_1465f5fda(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b831ad0;
  puVar1[6] = &PTR_FUN_14b831d90;
  puVar1[7] = &PTR_FUN_14b831e20;
  puVar1[9] = 0;
  puVar1[10] = 0;
  uVar2 = DAT_14c8464e8;
  puVar1[0xb] = DAT_14c8464e0;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = DAT_14c8464f0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x74) = 1;
  puVar1[0xf] = 0x3dcccccd3f800000;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1465f6044 FUN_1465f6044 body=47 status=ok
// SIG undefined FUN_1465f6044(void)

longlong FUN_1465f6044(void)

{
  if (DAT_14cbb25a0 == 0) {
    FUN_14073dd9a(&DAT_14cbb25a0,&PTR_LAB_14b831a88);
  }
  return DAT_14cbb25a0;
}



// FUNCTION 1465f6073 FUN_1465f6073 body=47 status=ok
// SIG undefined FUN_1465f6073(void)

longlong FUN_1465f6073(void)

{
  if (DAT_14cbb25c0 == 0) {
    FUN_14073dd9a(&DAT_14cbb25c0,&PTR_LAB_14b831f80);
  }
  return DAT_14cbb25c0;
}



// FUNCTION 1465f60a2 FUN_1465f60a2 body=47 status=ok
// SIG undefined FUN_1465f60a2(void)

longlong FUN_1465f60a2(void)

{
  if (DAT_14cbb25b0 == 0) {
    FUN_14000fc22(&DAT_14cbb25b0,&PTR_FUN_14b831ea8);
  }
  return DAT_14cbb25b0;
}



// FUNCTION 1465f60d2 FUN_1465f60d2 body=34 status=ok
// SIG undefined FUN_1465f60d2(void)

void FUN_1465f60d2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d794();
  FUN_14069c8d6(uVar1,&PTR_s_OnDelayedFocus_14b831ef0,1);
  return;
}



// FUNCTION 1465f60f4 FUN_1465f60f4 body=47 status=ok
// SIG undefined FUN_1465f60f4(void)

longlong FUN_1465f60f4(void)

{
  if (DAT_14cbb25e0 == 0) {
    FUN_14073dd9a(&DAT_14cbb25e0,&PTR_LAB_14b8324e0);
  }
  return DAT_14cbb25e0;
}



// FUNCTION 1465f6123 FUN_1465f6123 body=47 status=ok
// SIG undefined FUN_1465f6123(void)

longlong FUN_1465f6123(void)

{
  if (DAT_14cbb25d0 == 0) {
    FUN_14000fc22(&DAT_14cbb25d0,&PTR_FUN_14b832420);
  }
  return DAT_14cbb25d0;
}



// FUNCTION 1465f6152 FUN_1465f6152 body=34 status=ok
// SIG undefined FUN_1465f6152(void)

void FUN_1465f6152(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d880();
  FUN_14069c8d6(uVar1,&PTR_s_OnPossessPawnChanged_14b832460,1);
  return;
}



// FUNCTION 1465f6174 FUN_1465f6174 body=61 status=ok
// SIG undefined FUN_1465f6174(void)

void FUN_1465f6174(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b832520;
  puVar1[6] = &PTR_FUN_14b8327e0;
  puVar1[7] = &PTR_LAB_14b832870;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1465f61b1 FUN_1465f61b1 body=61 status=ok
// SIG undefined FUN_1465f61b1(void)

void FUN_1465f61b1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b832990;
  puVar1[6] = &PTR_FUN_14b832c50;
  puVar1[7] = &PTR_LAB_14b832ce0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1465f61f3 FUN_1465f61f3 body=47 status=ok
// SIG undefined FUN_1465f61f3(void)

longlong FUN_1465f61f3(void)

{
  if (DAT_14cbb25f8 == 0) {
    FUN_14073dd9a(&DAT_14cbb25f8,&PTR_LAB_14b832948);
  }
  return DAT_14cbb25f8;
}



// FUNCTION 1465f6222 FUN_1465f6222 body=73 status=ok
// SIG undefined FUN_1465f6222(void)

void FUN_1465f6222(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b832e00;
  puVar1[6] = &PTR_FUN_14b8330c0;
  puVar1[7] = &PTR_LAB_14b833150;
  memset(puVar1 + 0xb,0,0xb0);
  return;
}



// FUNCTION 1465f626b FUN_1465f626b body=47 status=ok
// SIG undefined FUN_1465f626b(void)

longlong FUN_1465f626b(void)

{
  if (DAT_14cbb2620 == 0) {
    FUN_14073dd9a(&DAT_14cbb2620,&PTR_LAB_14b832db8);
  }
  return DAT_14cbb2620;
}



// FUNCTION 1465f629a FUN_1465f629a body=65 status=ok
// SIG undefined FUN_1465f629a(void)

void FUN_1465f629a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b833270;
  puVar1[6] = &PTR_FUN_14b833530;
  puVar1[7] = &PTR_LAB_14b8335c0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1465f62e1 FUN_1465f62e1 body=47 status=ok
// SIG undefined FUN_1465f62e1(void)

longlong FUN_1465f62e1(void)

{
  if (DAT_14cbb2638 == 0) {
    FUN_14073dd9a(&DAT_14cbb2638,&PTR_LAB_14b833228);
  }
  return DAT_14cbb2638;
}



// FUNCTION 1465f6310 FUN_1465f6310 body=54 status=ok
// SIG undefined FUN_1465f6310(void)

void FUN_1465f6310(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b8336d0;
  puVar1[6] = &PTR_FUN_14b8339c0;
  puVar1[7] = &PTR_LAB_14b833a50;
  return;
}



// FUNCTION 1465f6346 FUN_1465f6346 body=54 status=ok
// SIG undefined FUN_1465f6346(void)

void FUN_1465f6346(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b833b70;
  puVar1[6] = &PTR_FUN_14b833e30;
  puVar1[7] = &PTR_LAB_14b833ec0;
  return;
}



// FUNCTION 1465f637c FUN_1465f637c body=47 status=ok
// SIG undefined FUN_1465f637c(void)

longlong FUN_1465f637c(void)

{
  if (DAT_14cbb2668 == 0) {
    FUN_14073dd9a(&DAT_14cbb2668,&PTR_LAB_14b833b28);
  }
  return DAT_14cbb2668;
}



// FUNCTION 1465f63ab FUN_1465f63ab body=47 status=ok
// SIG undefined FUN_1465f63ab(void)

longlong FUN_1465f63ab(void)

{
  if (DAT_14cbb26a8 == 0) {
    FUN_14073dd9a(&DAT_14cbb26a8,&PTR_LAB_14b833f88);
  }
  return DAT_14cbb26a8;
}



// FUNCTION 1465f63da FUN_1465f63da body=73 status=ok
// SIG undefined FUN_1465f63da(void)

void FUN_1465f63da(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b834490;
  puVar1[6] = &PTR_FUN_14b834750;
  puVar1[7] = &PTR_LAB_14b8347e0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x79) = 0;
  return;
}



// FUNCTION 1465f6423 FUN_1465f6423 body=47 status=ok
// SIG undefined FUN_1465f6423(void)

longlong FUN_1465f6423(void)

{
  if (DAT_14cbb26c0 == 0) {
    FUN_14073dd9a(&DAT_14cbb26c0,&PTR_LAB_14b834448);
  }
  return DAT_14cbb26c0;
}



// FUNCTION 1465f6452 FUN_1465f6452 body=47 status=ok
// SIG undefined FUN_1465f6452(void)

longlong FUN_1465f6452(void)

{
  if (DAT_14cbb2700 == 0) {
    FUN_14073dd9a(&DAT_14cbb2700,&PTR_LAB_14b8348c8);
  }
  return DAT_14cbb2700;
}



// FUNCTION 1465f6481 FUN_1465f6481 body=49 status=ok
// SIG undefined FUN_1465f6481(void)

longlong FUN_1465f6481(void)

{
  if (DAT_14cbb2748 == 0) {
    FUN_14073dd9a(&DAT_14cbb2748,&PTR_LAB_14b8351b0);
  }
  return DAT_14cbb2748;
}



// FUNCTION 1465f64b2 FUN_1465f64b2 body=47 status=ok
// SIG undefined FUN_1465f64b2(void)

longlong FUN_1465f64b2(void)

{
  if (DAT_14cbb2710 == 0) {
    FUN_14000fc22(&DAT_14cbb2710,&PTR_FUN_14b834d70);
  }
  return DAT_14cbb2710;
}



// FUNCTION 1465f64e1 FUN_1465f64e1 body=47 status=ok
// SIG undefined FUN_1465f64e1(void)

longlong FUN_1465f64e1(void)

{
  if (DAT_14cbb2718 == 0) {
    FUN_14000fc22(&DAT_14cbb2718,&PTR_FUN_14b834e40);
  }
  return DAT_14cbb2718;
}



// FUNCTION 1465f6510 FUN_1465f6510 body=47 status=ok
// SIG undefined FUN_1465f6510(void)

longlong FUN_1465f6510(void)

{
  if (DAT_14cbb2720 == 0) {
    FUN_14000fc22(&DAT_14cbb2720,&PTR_FUN_14b834e80);
  }
  return DAT_14cbb2720;
}



// FUNCTION 1465f653f FUN_1465f653f body=47 status=ok
// SIG undefined FUN_1465f653f(void)

longlong FUN_1465f653f(void)

{
  if (DAT_14cbb2728 == 0) {
    FUN_14000fc22(&DAT_14cbb2728,&PTR_FUN_14b834ee0);
  }
  return DAT_14cbb2728;
}



// FUNCTION 1465f656e FUN_1465f656e body=47 status=ok
// SIG undefined FUN_1465f656e(void)

longlong FUN_1465f656e(void)

{
  if (DAT_14cbb2730 == 0) {
    FUN_14000fc22(&DAT_14cbb2730,&PTR_FUN_14b834fb0);
  }
  return DAT_14cbb2730;
}



// FUNCTION 1465f659d FUN_1465f659d body=47 status=ok
// SIG undefined FUN_1465f659d(void)

longlong FUN_1465f659d(void)

{
  if (DAT_14cbb2738 == 0) {
    FUN_14000fc22(&DAT_14cbb2738,&PTR_FUN_14b835050);
  }
  return DAT_14cbb2738;
}



// FUNCTION 1465f65cc FUN_1465f65cc body=34 status=ok
// SIG undefined FUN_1465f65cc(void)

void FUN_1465f65cc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140281428();
  FUN_14069c8d6(uVar1,&PTR_s_OnBossDimmedStateUpdated_14b835090,6);
  return;
}



// FUNCTION 1465f65f3 FUN_1465f65f3 body=131 status=ok
// SIG undefined FUN_1465f65f3(void)

void FUN_1465f65f3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b8351f0;
  puVar1[6] = &PTR_FUN_14b8354b0;
  puVar1[7] = &PTR_FUN_14b835540;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0x3d4ccccd;
  puVar1[0x1c] = 0x41a0000043a50000;
  return;
}



// FUNCTION 1465f6676 FUN_1465f6676 body=52 status=ok
// SIG undefined FUN_1465f6676(void)

longlong FUN_1465f6676(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f66aa FUN_1465f66aa body=40 status=ok
// SIG undefined FUN_1465f66aa(void)

undefined8 FUN_1465f66aa(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f66d2 FUN_1465f66d2 body=91 status=ok
// SIG undefined FUN_1465f66d2(void)

undefined8 * FUN_1465f66d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b82a3b0;
  param_1[6] = &PTR_LAB_14b82a670;
  param_1[7] = &PTR_FUN_14b82a700;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f672e FUN_1465f672e body=52 status=ok
// SIG undefined FUN_1465f672e(void)

longlong FUN_1465f672e(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6762 FUN_1465f6762 body=40 status=ok
// SIG undefined FUN_1465f6762(void)

undefined8 FUN_1465f6762(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f678a FUN_1465f678a body=40 status=ok
// SIG undefined FUN_1465f678a(void)

undefined8 FUN_1465f678a(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f67b2 FUN_1465f67b2 body=40 status=ok
// SIG undefined FUN_1465f67b2(void)

undefined8 FUN_1465f67b2(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f67da FUN_1465f67da body=40 status=ok
// SIG undefined FUN_1465f67da(void)

undefined8 FUN_1465f67da(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6802 FUN_1465f6802 body=40 status=ok
// SIG undefined FUN_1465f6802(void)

undefined8 FUN_1465f6802(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f682a FUN_1465f682a body=40 status=ok
// SIG undefined FUN_1465f682a(void)

undefined8 FUN_1465f682a(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6852 FUN_1465f6852 body=52 status=ok
// SIG undefined FUN_1465f6852(void)

longlong FUN_1465f6852(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6886 FUN_1465f6886 body=52 status=ok
// SIG undefined FUN_1465f6886(void)

longlong FUN_1465f6886(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f68ba FUN_1465f68ba body=99 status=ok
// SIG undefined FUN_1465f68ba(void)

undefined8 * FUN_1465f68ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b82ef00;
  param_1[6] = &PTR_LAB_14b82f1c0;
  param_1[7] = &PTR_FUN_14b82f250;
  FUN_14051f4c4(param_1 + 0x40);
  FUN_14051f4c4(param_1 + 0x2a);
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f691e FUN_1465f691e body=40 status=ok
// SIG undefined FUN_1465f691e(void)

undefined8 FUN_1465f691e(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6946 FUN_1465f6946 body=40 status=ok
// SIG undefined FUN_1465f6946(void)

undefined8 FUN_1465f6946(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f696e FUN_1465f696e body=98 status=ok
// SIG undefined FUN_1465f696e(void)

undefined8 * FUN_1465f696e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8301b0;
  param_1[6] = &PTR_LAB_14b830470;
  param_1[7] = &PTR_LAB_14b830500;
  FUN_1449db362(param_1 + 9);
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f69d0 FUN_1465f69d0 body=40 status=ok
// SIG undefined FUN_1465f69d0(void)

undefined8 FUN_1465f69d0(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f69f8 FUN_1465f69f8 body=40 status=ok
// SIG undefined FUN_1465f69f8(void)

undefined8 FUN_1465f69f8(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6a20 FUN_1465f6a20 body=40 status=ok
// SIG undefined FUN_1465f6a20(void)

undefined8 FUN_1465f6a20(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6a48 FUN_1465f6a48 body=40 status=ok
// SIG undefined FUN_1465f6a48(void)

undefined8 FUN_1465f6a48(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6a70 FUN_1465f6a70 body=40 status=ok
// SIG undefined FUN_1465f6a70(void)

undefined8 FUN_1465f6a70(undefined8 param_1,int param_2)

{
  FUN_140b3fd78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6a98 FUN_1465f6a98 body=52 status=ok
// SIG undefined FUN_1465f6a98(void)

longlong FUN_1465f6a98(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6acc FUN_1465f6acc body=94 status=ok
// SIG undefined FUN_1465f6acc(void)

undefined8 * FUN_1465f6acc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b834910;
  param_1[6] = &PTR_LAB_14b834bd0;
  param_1[7] = &PTR_LAB_14b834c60;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6b2a FUN_1465f6b2a body=52 status=ok
// SIG undefined FUN_1465f6b2a(void)

longlong FUN_1465f6b2a(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f6b5e FUN_1465f6b5e body=34 status=ok
// SIG undefined FUN_1465f6b5e(void)

undefined8 FUN_1465f6b5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1465f6b80 FUN_1465f6b80 body=47 status=ok
// SIG undefined FUN_1465f6b80(void)

longlong FUN_1465f6b80(void)

{
  if (DAT_14cbb2c08 == 0) {
    FUN_14073dd9a(&DAT_14cbb2c08,&PTR_LAB_14b8358e8);
  }
  return DAT_14cbb2c08;
}



// FUNCTION 1465f6baf FUN_1465f6baf body=73 status=ok
// SIG undefined FUN_1465f6baf(void)

void FUN_1465f6baf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b835d90;
  puVar1[6] = &PTR_FUN_14b836050;
  puVar1[7] = &PTR_LAB_14b8360e0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 1465f6bf8 FUN_1465f6bf8 body=47 status=ok
// SIG undefined FUN_1465f6bf8(void)

longlong FUN_1465f6bf8(void)

{
  if (DAT_14cbb2c20 == 0) {
    FUN_14073dd9a(&DAT_14cbb2c20,&PTR_LAB_14b835d48);
  }
  return DAT_14cbb2c20;
}



// FUNCTION 1465f6c27 FUN_1465f6c27 body=62 status=ok
// SIG undefined FUN_1465f6c27(void)

void FUN_1465f6c27(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b8361f0;
  puVar1[6] = &PTR_FUN_14b8364b0;
  puVar1[7] = &PTR_LAB_14b836540;
  puVar1[9] = 0xffffffffffffffff;
  return;
}



// FUNCTION 1465f6c6b FUN_1465f6c6b body=47 status=ok
// SIG undefined FUN_1465f6c6b(void)

longlong FUN_1465f6c6b(void)

{
  if (DAT_14cbb2d58 == 0) {
    FUN_14073dd9a(&DAT_14cbb2d58,&PTR_LAB_14b8361a8);
  }
  return DAT_14cbb2d58;
}



// FUNCTION 1465f6c9f FUN_1465f6c9f body=47 status=ok
// SIG undefined FUN_1465f6c9f(void)

longlong FUN_1465f6c9f(void)

{
  if (DAT_14cbb2d70 == 0) {
    FUN_14073dd9a(&DAT_14cbb2d70,&PTR_LAB_14b836618);
  }
  return DAT_14cbb2d70;
}



// FUNCTION 1465f6cce FUN_1465f6cce body=60 status=ok
// SIG undefined FUN_1465f6cce(void)

void FUN_1465f6cce(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458dc8ec(puVar1);
  *puVar1 = &PTR_FUN_14b836ad0;
  puVar1[6] = &PTR_FUN_14b836dc0;
  puVar1[7] = &PTR_LAB_14b836e50;
  *(undefined2 *)(puVar1 + 9) = 0;
  return;
}



// FUNCTION 1465f6d0f FUN_1465f6d0f body=47 status=ok
// SIG undefined FUN_1465f6d0f(void)

longlong FUN_1465f6d0f(void)

{
  if (DAT_14cbb2d88 == 0) {
    FUN_14073dd9a(&DAT_14cbb2d88,&PTR_LAB_14b836a88);
  }
  return DAT_14cbb2d88;
}



// FUNCTION 1465f6d3e FUN_1465f6d3e body=47 status=ok
// SIG undefined FUN_1465f6d3e(void)

longlong FUN_1465f6d3e(void)

{
  if (DAT_14cbb2dd8 == 0) {
    FUN_14073dd9a(&DAT_14cbb2dd8,&PTR_LAB_14b8370b0);
  }
  return DAT_14cbb2dd8;
}



// FUNCTION 1465f6d6d FUN_1465f6d6d body=47 status=ok
// SIG undefined FUN_1465f6d6d(void)

longlong FUN_1465f6d6d(void)

{
  if (DAT_14cbb2dc0 == 0) {
    FUN_14000fc22(&DAT_14cbb2dc0,&PTR_FUN_14b836ee8);
  }
  return DAT_14cbb2dc0;
}



// FUNCTION 1465f6d9c FUN_1465f6d9c body=47 status=ok
// SIG undefined FUN_1465f6d9c(void)

longlong FUN_1465f6d9c(void)

{
  if (DAT_14cbb2dc8 == 0) {
    FUN_14000fc22(&DAT_14cbb2dc8,&PTR_FUN_14b836fd0);
  }
  return DAT_14cbb2dc8;
}



// FUNCTION 1465f6dcc FUN_1465f6dcc body=34 status=ok
// SIG undefined FUN_1465f6dcc(void)

void FUN_1465f6dcc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e710c2();
  FUN_14069c8d6(uVar1,&PTR_s_OnEnhancedInputSettingsApplied_14b837010,2);
  return;
}



// FUNCTION 1465f6df3 FUN_1465f6df3 body=47 status=ok
// SIG undefined FUN_1465f6df3(void)

longlong FUN_1465f6df3(void)

{
  if (DAT_14cbb2df0 == 0) {
    FUN_14073dd9a(&DAT_14cbb2df0,&PTR_LAB_14b837518);
  }
  return DAT_14cbb2df0;
}



// FUNCTION 1465f6e22 FUN_1465f6e22 body=49 status=ok
// SIG undefined FUN_1465f6e22(void)

longlong FUN_1465f6e22(void)

{
  if (DAT_14cbb2ee8 == 0) {
    FUN_14073dd9a(&DAT_14cbb2ee8,&PTR_LAB_14b838080);
  }
  return DAT_14cbb2ee8;
}



// FUNCTION 1465f6e53 FUN_1465f6e53 body=47 status=ok
// SIG undefined FUN_1465f6e53(void)

longlong FUN_1465f6e53(void)

{
  if (DAT_14cbb2ea0 == 0) {
    FUN_14000fc22(&DAT_14cbb2ea0,&PTR_FUN_14b8379c0);
  }
  return DAT_14cbb2ea0;
}



// FUNCTION 1465f6e82 FUN_1465f6e82 body=47 status=ok
// SIG undefined FUN_1465f6e82(void)

longlong FUN_1465f6e82(void)

{
  if (DAT_14cbb2ea8 == 0) {
    FUN_14000fc22(&DAT_14cbb2ea8,&PTR_FUN_14b837ad8);
  }
  return DAT_14cbb2ea8;
}



// FUNCTION 1465f6eb1 FUN_1465f6eb1 body=47 status=ok
// SIG undefined FUN_1465f6eb1(void)

longlong FUN_1465f6eb1(void)

{
  if (DAT_14cbb2eb0 == 0) {
    FUN_14000fc22(&DAT_14cbb2eb0,&PTR_FUN_14b837b38);
  }
  return DAT_14cbb2eb0;
}



// FUNCTION 1465f6ee0 FUN_1465f6ee0 body=47 status=ok
// SIG undefined FUN_1465f6ee0(void)

longlong FUN_1465f6ee0(void)

{
  if (DAT_14cbb2eb8 == 0) {
    FUN_14000fc22(&DAT_14cbb2eb8,&PTR_FUN_14b837b78);
  }
  return DAT_14cbb2eb8;
}



// FUNCTION 1465f6f0f FUN_1465f6f0f body=47 status=ok
// SIG undefined FUN_1465f6f0f(void)

longlong FUN_1465f6f0f(void)

{
  if (DAT_14cbb2ec0 == 0) {
    FUN_14000fc22(&DAT_14cbb2ec0,&PTR_FUN_14b837c50);
  }
  return DAT_14cbb2ec0;
}



// FUNCTION 1465f6f3e FUN_1465f6f3e body=47 status=ok
// SIG undefined FUN_1465f6f3e(void)

longlong FUN_1465f6f3e(void)

{
  if (DAT_14cbb2ec8 == 0) {
    FUN_14000fc22(&DAT_14cbb2ec8,&PTR_FUN_14b837db0);
  }
  return DAT_14cbb2ec8;
}



// FUNCTION 1465f6f6d FUN_1465f6f6d body=47 status=ok
// SIG undefined FUN_1465f6f6d(void)

longlong FUN_1465f6f6d(void)

{
  if (DAT_14cbb2ed8 == 0) {
    FUN_14000fc22(&DAT_14cbb2ed8,&PTR_FUN_14b837ee0);
  }
  return DAT_14cbb2ed8;
}



// FUNCTION 1465f6f9c FUN_1465f6f9c body=34 status=ok
// SIG undefined FUN_1465f6f9c(void)

void FUN_1465f6f9c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14028150e();
  FUN_14069c8d6(uVar1,&PTR_s_OnBeingRevivedStarted_14b837f20,8);
  return;
}



// FUNCTION 1465f6fc3 FUN_1465f6fc3 body=47 status=ok
// SIG undefined FUN_1465f6fc3(void)

longlong FUN_1465f6fc3(void)

{
  if (DAT_14cbb2f00 == 0) {
    FUN_14073dd9a(&DAT_14cbb2f00,&PTR_LAB_14b8384f8);
  }
  return DAT_14cbb2f00;
}



// FUNCTION 1465f6ff2 FUN_1465f6ff2 body=54 status=ok
// SIG undefined FUN_1465f6ff2(void)

void FUN_1465f6ff2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b8389b0;
  puVar1[6] = &PTR_FUN_14b838c70;
  puVar1[7] = &PTR_LAB_14b838d00;
  return;
}



// FUNCTION 1465f7028 FUN_1465f7028 body=47 status=ok
// SIG undefined FUN_1465f7028(void)

longlong FUN_1465f7028(void)

{
  if (DAT_14cbb2f18 == 0) {
    FUN_14073dd9a(&DAT_14cbb2f18,&PTR_LAB_14b838968);
  }
  return DAT_14cbb2f18;
}



// FUNCTION 1465f7057 FUN_1465f7057 body=47 status=ok
// SIG undefined FUN_1465f7057(void)

longlong FUN_1465f7057(void)

{
  if (DAT_14cbb2f48 == 0) {
    FUN_14073dd9a(&DAT_14cbb2f48,&PTR_LAB_14b838fd0);
  }
  return DAT_14cbb2f48;
}



// FUNCTION 1465f7086 FUN_1465f7086 body=47 status=ok
// SIG undefined FUN_1465f7086(void)

longlong FUN_1465f7086(void)

{
  if (DAT_14cbb2f28 == 0) {
    FUN_14000fc22(&DAT_14cbb2f28,&PTR_FUN_14b838dd0);
  }
  return DAT_14cbb2f28;
}



// FUNCTION 1465f70b5 FUN_1465f70b5 body=47 status=ok
// SIG undefined FUN_1465f70b5(void)

longlong FUN_1465f70b5(void)

{
  if (DAT_14cbb2f30 == 0) {
    FUN_14000fc22(&DAT_14cbb2f30,&PTR_FUN_14b838e78);
  }
  return DAT_14cbb2f30;
}



// FUNCTION 1465f70e4 FUN_1465f70e4 body=34 status=ok
// SIG undefined FUN_1465f70e4(void)

void FUN_1465f70e4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8d96c();
  FUN_14069c8d6(uVar1,&PTR_s_OnIconCountChange_14b838f10,3);
  return;
}



// FUNCTION 1465f7106 FUN_1465f7106 body=54 status=ok
// SIG undefined FUN_1465f7106(void)

void FUN_1465f7106(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b839010;
  puVar1[6] = &PTR_FUN_14b8392d0;
  puVar1[7] = &PTR_LAB_14b839360;
  return;
}



// FUNCTION 1465f713c FUN_1465f713c body=47 status=ok
// SIG undefined FUN_1465f713c(void)

longlong FUN_1465f713c(void)

{
  if (DAT_14cbb2f88 == 0) {
    FUN_14073dd9a(&DAT_14cbb2f88,&PTR_LAB_14b839500);
  }
  return DAT_14cbb2f88;
}



// FUNCTION 1465f716c FUN_1465f716c body=34 status=ok
// SIG undefined FUN_1465f716c(void)

void FUN_1465f716c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145b9457e();
  FUN_14069c8d6(uVar1,&PTR_s_OnVehicleDestroyed_14b839480,1);
  return;
}



// FUNCTION 1465f718e FUN_1465f718e body=90 status=ok
// SIG undefined FUN_1465f718e(void)

void FUN_1465f718e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b839540;
  puVar1[6] = &PTR_FUN_14b839800;
  puVar1[7] = &PTR_LAB_14b839890;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  FUN_14485c47a(puVar1 + 0xe,0);
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1465f71e8 FUN_1465f71e8 body=69 status=ok
// SIG undefined FUN_1465f71e8(void)

void FUN_1465f71e8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b8399a0;
  puVar1[6] = &PTR_FUN_14b839c60;
  puVar1[7] = &PTR_FUN_14b839cf0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 1465f722d FUN_1465f722d body=47 status=ok
// SIG undefined FUN_1465f722d(void)

longlong FUN_1465f722d(void)

{
  if (DAT_14cbb2fa0 == 0) {
    FUN_14073dd9a(&DAT_14cbb2fa0,&PTR_LAB_14b839958);
  }
  return DAT_14cbb2fa0;
}



// FUNCTION 1465f725c FUN_1465f725c body=69 status=ok
// SIG undefined FUN_1465f725c(void)

void FUN_1465f725c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b839e00;
  puVar1[6] = &PTR_FUN_14b83a0c0;
  puVar1[7] = &PTR_LAB_14b83a150;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 1465f72a7 FUN_1465f72a7 body=47 status=ok
// SIG undefined FUN_1465f72a7(void)

longlong FUN_1465f72a7(void)

{
  if (DAT_14cbb2fd0 == 0) {
    FUN_14073dd9a(&DAT_14cbb2fd0,&PTR_LAB_14b839db8);
  }
  return DAT_14cbb2fd0;
}



// FUNCTION 1465f72d6 FUN_1465f72d6 body=47 status=ok
// SIG undefined FUN_1465f72d6(void)

longlong FUN_1465f72d6(void)

{
  if (DAT_14cbb2ff0 == 0) {
    FUN_14073dd9a(&DAT_14cbb2ff0,&PTR_LAB_14b83a2d0);
  }
  return DAT_14cbb2ff0;
}



// FUNCTION 1465f7305 FUN_1465f7305 body=47 status=ok
// SIG undefined FUN_1465f7305(void)

longlong FUN_1465f7305(void)

{
  if (DAT_14cbb2fe0 == 0) {
    FUN_14000fc22(&DAT_14cbb2fe0,&PTR_FUN_14b83a1f0);
  }
  return DAT_14cbb2fe0;
}



// FUNCTION 1465f7334 FUN_1465f7334 body=34 status=ok
// SIG undefined FUN_1465f7334(void)

void FUN_1465f7334(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8da58();
  FUN_14069c8d6(uVar1,&PTR_s_OnVehicleCanSummonStatusUpdateIn_14b83a230,1);
  return;
}



// FUNCTION 1465f7356 FUN_1465f7356 body=89 status=ok
// SIG undefined FUN_1465f7356(void)

void FUN_1465f7356(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83a310;
  puVar1[6] = &PTR_FUN_14b83a5d0;
  puVar1[7] = &PTR_LAB_14b83a660;
  puVar1[9] = 0;
  puVar1[10] = 0x3f10000042b40000;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f000000;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1465f73af FUN_1465f73af body=62 status=ok
// SIG undefined FUN_1465f73af(void)

void FUN_1465f73af(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83a780;
  puVar1[6] = &PTR_FUN_14b83aa40;
  puVar1[7] = &PTR_LAB_14b83aad0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1465f73ed FUN_1465f73ed body=47 status=ok
// SIG undefined FUN_1465f73ed(void)

longlong FUN_1465f73ed(void)

{
  if (DAT_14cbb3008 == 0) {
    FUN_14073dd9a(&DAT_14cbb3008,&PTR_LAB_14b83a738);
  }
  return DAT_14cbb3008;
}



// FUNCTION 1465f741c FUN_1465f741c body=47 status=ok
// SIG undefined FUN_1465f741c(void)

longlong FUN_1465f741c(void)

{
  if (DAT_14cbb3028 == 0) {
    FUN_14073dd9a(&DAT_14cbb3028,&PTR_LAB_14b83ad00);
  }
  return DAT_14cbb3028;
}



// FUNCTION 1465f744b FUN_1465f744b body=47 status=ok
// SIG undefined FUN_1465f744b(void)

longlong FUN_1465f744b(void)

{
  if (DAT_14cbb3018 == 0) {
    FUN_14000fc22(&DAT_14cbb3018,&PTR_FUN_14b83abe0);
  }
  return DAT_14cbb3018;
}



// FUNCTION 1465f747a FUN_1465f747a body=34 status=ok
// SIG undefined FUN_1465f747a(void)

void FUN_1465f747a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a258de();
  FUN_14069c8d6(uVar1,&PTR_s_OnPossessPawnChanged_14b83ac20,1);
  return;
}



// FUNCTION 1465f749c FUN_1465f749c body=54 status=ok
// SIG undefined FUN_1465f749c(void)

void FUN_1465f749c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83b1b0;
  puVar1[6] = &PTR_FUN_14b83b470;
  puVar1[7] = &PTR_LAB_14b83b500;
  return;
}



// FUNCTION 1465f74d2 FUN_1465f74d2 body=47 status=ok
// SIG undefined FUN_1465f74d2(void)

longlong FUN_1465f74d2(void)

{
  if (DAT_14cbb3040 == 0) {
    FUN_14073dd9a(&DAT_14cbb3040,&PTR_LAB_14b83b168);
  }
  return DAT_14cbb3040;
}



// FUNCTION 1465f7501 FUN_1465f7501 body=47 status=ok
// SIG undefined FUN_1465f7501(void)

longlong FUN_1465f7501(void)

{
  if (DAT_14cbb3060 == 0) {
    FUN_14073dd9a(&DAT_14cbb3060,&PTR_LAB_14b83b640);
  }
  return DAT_14cbb3060;
}



// FUNCTION 1465f7530 FUN_1465f7530 body=47 status=ok
// SIG undefined FUN_1465f7530(void)

longlong FUN_1465f7530(void)

{
  if (DAT_14cbb3050 == 0) {
    FUN_14000fc22(&DAT_14cbb3050,&PTR_FUN_14b83b578);
  }
  return DAT_14cbb3050;
}



// FUNCTION 1465f7560 FUN_1465f7560 body=34 status=ok
// SIG undefined FUN_1465f7560(void)

void FUN_1465f7560(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1410d8ad0();
  FUN_14069c8d6(uVar1,&PTR_s_OnOakCharacterChanged_14b83b5c0,1);
  return;
}



// FUNCTION 1465f758d FUN_1465f758d body=47 status=ok
// SIG undefined FUN_1465f758d(void)

longlong FUN_1465f758d(void)

{
  if (DAT_14cbb3078 == 0) {
    FUN_14073dd9a(&DAT_14cbb3078,&PTR_LAB_14b83bb08);
  }
  return DAT_14cbb3078;
}



// FUNCTION 1465f75bc FUN_1465f75bc body=49 status=ok
// SIG undefined FUN_1465f75bc(void)

longlong FUN_1465f75bc(void)

{
  if (DAT_14cbb30b8 == 0) {
    FUN_14073dd9a(&DAT_14cbb30b8,&PTR_LAB_14b83c460);
  }
  return DAT_14cbb30b8;
}



// FUNCTION 1465f75ed FUN_1465f75ed body=47 status=ok
// SIG undefined FUN_1465f75ed(void)

longlong FUN_1465f75ed(void)

{
  if (DAT_14cbb3088 == 0) {
    FUN_14000fc22(&DAT_14cbb3088,&PTR_FUN_14b83c070);
  }
  return DAT_14cbb3088;
}



// FUNCTION 1465f761c FUN_1465f761c body=47 status=ok
// SIG undefined FUN_1465f761c(void)

longlong FUN_1465f761c(void)

{
  if (DAT_14cbb3090 == 0) {
    FUN_14000fc22(&DAT_14cbb3090,&PTR_FUN_14b83c0f8);
  }
  return DAT_14cbb3090;
}



// FUNCTION 1465f764b FUN_1465f764b body=47 status=ok
// SIG undefined FUN_1465f764b(void)

longlong FUN_1465f764b(void)

{
  if (DAT_14cbb3098 == 0) {
    FUN_14000fc22(&DAT_14cbb3098,&PTR_FUN_14b83c138);
  }
  return DAT_14cbb3098;
}



// FUNCTION 1465f767a FUN_1465f767a body=47 status=ok
// SIG undefined FUN_1465f767a(void)

longlong FUN_1465f767a(void)

{
  if (DAT_14cbb30a0 == 0) {
    FUN_14000fc22(&DAT_14cbb30a0,&PTR_FUN_14b83c248);
  }
  return DAT_14cbb30a0;
}



// FUNCTION 1465f76a9 FUN_1465f76a9 body=47 status=ok
// SIG undefined FUN_1465f76a9(void)

longlong FUN_1465f76a9(void)

{
  if (DAT_14cbb30a8 == 0) {
    FUN_14000fc22(&DAT_14cbb30a8,&PTR_FUN_14b83c310);
  }
  return DAT_14cbb30a8;
}



// FUNCTION 1465f76d8 FUN_1465f76d8 body=34 status=ok
// SIG undefined FUN_1465f76d8(void)

void FUN_1465f76d8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8db44();
  FUN_14069c8d6(uVar1,&PTR_s_OnMoveRejected_14b83c350,5);
  return;
}



// FUNCTION 1465f76fa FUN_1465f76fa body=84 status=ok
// SIG undefined FUN_1465f76fa(void)

void FUN_1465f76fa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83c4a0;
  puVar1[6] = &PTR_FUN_14b83c760;
  puVar1[7] = &PTR_LAB_14b83c7f0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined1 *)((longlong)puVar1 + 100) = 0xff;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  return;
}



// FUNCTION 1465f774e FUN_1465f774e body=69 status=ok
// SIG undefined FUN_1465f774e(void)

void FUN_1465f774e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83c910;
  puVar1[6] = &PTR_FUN_14b83cbd0;
  puVar1[7] = &PTR_FUN_14b83cc60;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 1465f7793 FUN_1465f7793 body=47 status=ok
// SIG undefined FUN_1465f7793(void)

longlong FUN_1465f7793(void)

{
  if (DAT_14cbb30d0 == 0) {
    FUN_14073dd9a(&DAT_14cbb30d0,&PTR_LAB_14b83c8c8);
  }
  return DAT_14cbb30d0;
}



// FUNCTION 1465f77c2 FUN_1465f77c2 body=47 status=ok
// SIG undefined FUN_1465f77c2(void)

longlong FUN_1465f77c2(void)

{
  if (DAT_14cbb3310 == 0) {
    FUN_14073dd9a(&DAT_14cbb3310,&PTR_LAB_14b83ccf8);
  }
  return DAT_14cbb3310;
}



// FUNCTION 1465f77f1 FUN_1465f77f1 body=54 status=ok
// SIG undefined FUN_1465f77f1(void)

void FUN_1465f77f1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83d1b0;
  puVar1[6] = &PTR_FUN_14b83d470;
  puVar1[7] = &PTR_LAB_14b83d500;
  return;
}



// FUNCTION 1465f7827 FUN_1465f7827 body=47 status=ok
// SIG undefined FUN_1465f7827(void)

longlong FUN_1465f7827(void)

{
  if (DAT_14cbb3328 == 0) {
    FUN_14073dd9a(&DAT_14cbb3328,&PTR_LAB_14b83d168);
  }
  return DAT_14cbb3328;
}



// FUNCTION 1465f7856 FUN_1465f7856 body=65 status=ok
// SIG undefined FUN_1465f7856(void)

void FUN_1465f7856(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83d620;
  puVar1[6] = &PTR_LAB_14b83d8e0;
  puVar1[7] = &PTR_LAB_14b83d970;
  FUN_144a5dc74(puVar1 + 9);
  return;
}



// FUNCTION 1465f7897 FUN_1465f7897 body=47 status=ok
// SIG undefined FUN_1465f7897(void)

longlong FUN_1465f7897(void)

{
  if (DAT_14cbb3340 == 0) {
    FUN_14073dd9a(&DAT_14cbb3340,&PTR_LAB_14b83d5d8);
  }
  return DAT_14cbb3340;
}



// FUNCTION 1465f78c6 FUN_1465f78c6 body=65 status=ok
// SIG undefined FUN_1465f78c6(void)

void FUN_1465f78c6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83e370;
  puVar1[6] = &PTR_FUN_14b83e630;
  puVar1[7] = &PTR_LAB_14b83e6c0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1465f7907 FUN_1465f7907 body=47 status=ok
// SIG undefined FUN_1465f7907(void)

longlong FUN_1465f7907(void)

{
  if (DAT_14cbb3388 == 0) {
    FUN_14073dd9a(&DAT_14cbb3388,&PTR_LAB_14b83e328);
  }
  return DAT_14cbb3388;
}



// FUNCTION 1465f7936 FUN_1465f7936 body=62 status=ok
// SIG undefined FUN_1465f7936(void)

void FUN_1465f7936(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83e7d0;
  puVar1[6] = &PTR_FUN_14b83ea90;
  puVar1[7] = &PTR_LAB_14b83eb20;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1465f7974 FUN_1465f7974 body=47 status=ok
// SIG undefined FUN_1465f7974(void)

longlong FUN_1465f7974(void)

{
  if (DAT_14cbb33a0 == 0) {
    FUN_14073dd9a(&DAT_14cbb33a0,&PTR_LAB_14b83e788);
  }
  return DAT_14cbb33a0;
}



// FUNCTION 1465f79a3 FUN_1465f79a3 body=49 status=ok
// SIG undefined FUN_1465f79a3(void)

longlong FUN_1465f79a3(void)

{
  if (DAT_14cbb33e8 == 0) {
    FUN_14073dd9a(&DAT_14cbb33e8,&PTR_LAB_14b83f040);
  }
  return DAT_14cbb33e8;
}



// FUNCTION 1465f79d4 FUN_1465f79d4 body=47 status=ok
// SIG undefined FUN_1465f79d4(void)

longlong FUN_1465f79d4(void)

{
  if (DAT_14cbb33b0 == 0) {
    FUN_14000fc22(&DAT_14cbb33b0,&PTR_FUN_14b83eba0);
  }
  return DAT_14cbb33b0;
}



// FUNCTION 1465f7a03 FUN_1465f7a03 body=47 status=ok
// SIG undefined FUN_1465f7a03(void)

longlong FUN_1465f7a03(void)

{
  if (DAT_14cbb33d0 == 0) {
    FUN_14000fc22(&DAT_14cbb33d0,&PTR_FUN_14b83ee40);
  }
  return DAT_14cbb33d0;
}



// FUNCTION 1465f7a32 FUN_1465f7a32 body=47 status=ok
// SIG undefined FUN_1465f7a32(void)

longlong FUN_1465f7a32(void)

{
  if (DAT_14cbb33d8 == 0) {
    FUN_14000fc22(&DAT_14cbb33d8,&PTR_FUN_14b83eec8);
  }
  return DAT_14cbb33d8;
}



// FUNCTION 1465f7a62 FUN_1465f7a62 body=34 status=ok
// SIG undefined FUN_1465f7a62(void)

void FUN_1465f7a62(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8dc30();
  FUN_14069c8d6(uVar1,&PTR_s_HideUI_14b83ef10,6);
  return;
}



// FUNCTION 1465f7a84 FUN_1465f7a84 body=80 status=ok
// SIG undefined FUN_1465f7a84(void)

void FUN_1465f7a84(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b83f080;
  puVar1[6] = &PTR_LAB_14b83f340;
  puVar1[7] = &PTR_LAB_14b83f3d0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x79) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x81) = 0;
  return;
}



// FUNCTION 1465f7ad4 FUN_1465f7ad4 body=123 status=ok
// SIG undefined FUN_1465f7ad4(void)

void FUN_1465f7ad4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458dc8ec(puVar1);
  *puVar1 = &PTR_FUN_14b83f4f0;
  puVar1[6] = &PTR_FUN_14b83f7e0;
  puVar1[7] = &PTR_LAB_14b83f870;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  return;
}



// FUNCTION 1465f7b4f FUN_1465f7b4f body=47 status=ok
// SIG undefined FUN_1465f7b4f(void)

longlong FUN_1465f7b4f(void)

{
  if (DAT_14cbb3400 == 0) {
    FUN_14073dd9a(&DAT_14cbb3400,&PTR_LAB_14b83f4a8);
  }
  return DAT_14cbb3400;
}



// FUNCTION 1465f7b7e FUN_1465f7b7e body=41 status=ok
// SIG undefined FUN_1465f7b7e(void)

void FUN_1465f7b7e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b83fa10;
  *(undefined2 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 1465f7ba7 FUN_1465f7ba7 body=47 status=ok
// SIG undefined FUN_1465f7ba7(void)

longlong FUN_1465f7ba7(void)

{
  if (DAT_14cbb3418 == 0) {
    FUN_14073dd9a(&DAT_14cbb3418,&PTR_LAB_14b83f9c8);
  }
  return DAT_14cbb3418;
}



// FUNCTION 1465f7bdb FUN_1465f7bdb body=47 status=ok
// SIG undefined FUN_1465f7bdb(void)

longlong FUN_1465f7bdb(void)

{
  if (DAT_14cbb3430 == 0) {
    FUN_14073dd9a(&DAT_14cbb3430,&PTR_LAB_14b83fd78);
  }
  return DAT_14cbb3430;
}



// FUNCTION 1465f7c0a FUN_1465f7c0a body=49 status=ok
// SIG undefined FUN_1465f7c0a(void)

longlong FUN_1465f7c0a(void)

{
  if (DAT_14cbb3478 == 0) {
    FUN_14073dd9a(&DAT_14cbb3478,&PTR_LAB_14b840640);
  }
  return DAT_14cbb3478;
}



// FUNCTION 1465f7c3b FUN_1465f7c3b body=47 status=ok
// SIG undefined FUN_1465f7c3b(void)

longlong FUN_1465f7c3b(void)

{
  if (DAT_14cbb3450 == 0) {
    FUN_14000fc22(&DAT_14cbb3450,&PTR_FUN_14b840228);
  }
  return DAT_14cbb3450;
}



// FUNCTION 1465f7c6a FUN_1465f7c6a body=47 status=ok
// SIG undefined FUN_1465f7c6a(void)

longlong FUN_1465f7c6a(void)

{
  if (DAT_14cbb3458 == 0) {
    FUN_14000fc22(&DAT_14cbb3458,&PTR_FUN_14b840328);
  }
  return DAT_14cbb3458;
}



// FUNCTION 1465f7c99 FUN_1465f7c99 body=47 status=ok
// SIG undefined FUN_1465f7c99(void)

longlong FUN_1465f7c99(void)

{
  if (DAT_14cbb3460 == 0) {
    FUN_14000fc22(&DAT_14cbb3460,&PTR_FUN_14b840418);
  }
  return DAT_14cbb3460;
}



// FUNCTION 1465f7cc8 FUN_1465f7cc8 body=47 status=ok
// SIG undefined FUN_1465f7cc8(void)

longlong FUN_1465f7cc8(void)

{
  if (DAT_14cbb3468 == 0) {
    FUN_14000fc22(&DAT_14cbb3468,&PTR_FUN_14b840508);
  }
  return DAT_14cbb3468;
}



// FUNCTION 1465f7cf8 FUN_1465f7cf8 body=34 status=ok
// SIG undefined FUN_1465f7cf8(void)

void FUN_1465f7cf8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8dd1c();
  FUN_14069c8d6(uVar1,&PTR_s_ChangeRadiusDistance_14b840550,4);
  return;
}



// FUNCTION 1465f7d1a FUN_1465f7d1a body=65 status=ok
// SIG undefined FUN_1465f7d1a(void)

void FUN_1465f7d1a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fa737e(puVar1);
  *puVar1 = &PTR_FUN_14b840680;
  puVar1[6] = &PTR_FUN_14b840940;
  puVar1[7] = &PTR_LAB_14b8409d0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 1465f7d5b FUN_1465f7d5b body=49 status=ok
// SIG undefined FUN_1465f7d5b(void)

longlong FUN_1465f7d5b(void)

{
  if (DAT_14cbb34b0 == 0) {
    FUN_14073dd9a(&DAT_14cbb34b0,&PTR_LAB_14b840e30);
  }
  return DAT_14cbb34b0;
}



// FUNCTION 1465f7d8c FUN_1465f7d8c body=47 status=ok
// SIG undefined FUN_1465f7d8c(void)

longlong FUN_1465f7d8c(void)

{
  if (DAT_14cbb3488 == 0) {
    FUN_14000fc22(&DAT_14cbb3488,&PTR_FUN_14b840ae0);
  }
  return DAT_14cbb3488;
}



// FUNCTION 1465f7dbb FUN_1465f7dbb body=47 status=ok
// SIG undefined FUN_1465f7dbb(void)

longlong FUN_1465f7dbb(void)

{
  if (DAT_14cbb3490 == 0) {
    FUN_14000fc22(&DAT_14cbb3490,&PTR_FUN_14b840be8);
  }
  return DAT_14cbb3490;
}



// FUNCTION 1465f7dea FUN_1465f7dea body=47 status=ok
// SIG undefined FUN_1465f7dea(void)

longlong FUN_1465f7dea(void)

{
  if (DAT_14cbb3498 == 0) {
    FUN_14000fc22(&DAT_14cbb3498,&PTR_FUN_14b840cb0);
  }
  return DAT_14cbb3498;
}



// FUNCTION 1465f7e19 FUN_1465f7e19 body=47 status=ok
// SIG undefined FUN_1465f7e19(void)

longlong FUN_1465f7e19(void)

{
  if (DAT_14cbb34a0 == 0) {
    FUN_14000fc22(&DAT_14cbb34a0,&PTR_FUN_14b840d08);
  }
  return DAT_14cbb34a0;
}



// FUNCTION 1465f7e48 FUN_1465f7e48 body=34 status=ok
// SIG undefined FUN_1465f7e48(void)

void FUN_1465f7e48(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8de08();
  FUN_14069c8d6(uVar1,&PTR_s_OnPossessPawnChanged_14b840d50,4);
  return;
}



// FUNCTION 1465f7e6a FUN_1465f7e6a body=91 status=ok
// SIG undefined FUN_1465f7e6a(void)

void FUN_1465f7e6a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b840e70;
  puVar1[6] = &PTR_FUN_14b841130;
  puVar1[7] = &PTR_FUN_14b8411c0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x74) = 0xff;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 1465f7ec5 FUN_1465f7ec5 body=49 status=ok
// SIG undefined FUN_1465f7ec5(void)

longlong FUN_1465f7ec5(void)

{
  if (DAT_14cbb34f8 == 0) {
    FUN_14073dd9a(&DAT_14cbb34f8,&PTR_LAB_14b841820);
  }
  return DAT_14cbb34f8;
}



// FUNCTION 1465f7ef6 FUN_1465f7ef6 body=47 status=ok
// SIG undefined FUN_1465f7ef6(void)

longlong FUN_1465f7ef6(void)

{
  if (DAT_14cbb34c0 == 0) {
    FUN_14000fc22(&DAT_14cbb34c0,&PTR_FUN_14b841318);
  }
  return DAT_14cbb34c0;
}



// FUNCTION 1465f7f25 FUN_1465f7f25 body=47 status=ok
// SIG undefined FUN_1465f7f25(void)

longlong FUN_1465f7f25(void)

{
  if (DAT_14cbb34c8 == 0) {
    FUN_14000fc22(&DAT_14cbb34c8,&PTR_FUN_14b841378);
  }
  return DAT_14cbb34c8;
}



// FUNCTION 1465f7f54 FUN_1465f7f54 body=47 status=ok
// SIG undefined FUN_1465f7f54(void)

longlong FUN_1465f7f54(void)

{
  if (DAT_14cbb34d0 == 0) {
    FUN_14000fc22(&DAT_14cbb34d0,&PTR_FUN_14b841400);
  }
  return DAT_14cbb34d0;
}



// FUNCTION 1465f7f83 FUN_1465f7f83 body=47 status=ok
// SIG undefined FUN_1465f7f83(void)

longlong FUN_1465f7f83(void)

{
  if (DAT_14cbb34d8 == 0) {
    FUN_14000fc22(&DAT_14cbb34d8,&PTR_FUN_14b841508);
  }
  return DAT_14cbb34d8;
}



// FUNCTION 1465f7fb2 FUN_1465f7fb2 body=47 status=ok
// SIG undefined FUN_1465f7fb2(void)

longlong FUN_1465f7fb2(void)

{
  if (DAT_14cbb34e0 == 0) {
    FUN_14000fc22(&DAT_14cbb34e0,&PTR_FUN_14b8415d0);
  }
  return DAT_14cbb34e0;
}



// FUNCTION 1465f7fe1 FUN_1465f7fe1 body=47 status=ok
// SIG undefined FUN_1465f7fe1(void)

longlong FUN_1465f7fe1(void)

{
  if (DAT_14cbb34e8 == 0) {
    FUN_14000fc22(&DAT_14cbb34e8,&PTR_FUN_14b8416a0);
  }
  return DAT_14cbb34e8;
}



// FUNCTION 1465f8010 FUN_1465f8010 body=34 status=ok
// SIG undefined FUN_1465f8010(void)

void FUN_1465f8010(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141108cea();
  FUN_14069c8d6(uVar1,&PTR_s_OnControllerChanged_14b8416e0,6);
  return;
}



// FUNCTION 1465f8037 FUN_1465f8037 body=75 status=ok
// SIG undefined FUN_1465f8037(void)

void FUN_1465f8037(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c8816c(puVar1);
  *puVar1 = &PTR_FUN_14b841d00;
  puVar1[6] = &PTR_FUN_14b841fc0;
  puVar1[7] = &PTR_LAB_14b842050;
  puVar1[9] = 0;
  FUN_14485c47a(puVar1 + 9,0);
  return;
}



// FUNCTION 1465f8082 FUN_1465f8082 body=47 status=ok
// SIG undefined FUN_1465f8082(void)

longlong FUN_1465f8082(void)

{
  if (DAT_14cbb3510 == 0) {
    FUN_14073dd9a(&DAT_14cbb3510,&PTR_LAB_14b841cb8);
  }
  return DAT_14cbb3510;
}



// FUNCTION 1465f80b1 FUN_1465f80b1 body=49 status=ok
// SIG undefined FUN_1465f80b1(void)

longlong FUN_1465f80b1(void)

{
  if (DAT_14cbb3578 == 0) {
    FUN_14073dd9a(&DAT_14cbb3578,&PTR_LAB_14b8429c0);
  }
  return DAT_14cbb3578;
}



// FUNCTION 1465f80e2 FUN_1465f80e2 body=47 status=ok
// SIG undefined FUN_1465f80e2(void)

longlong FUN_1465f80e2(void)

{
  if (DAT_14cbb3520 == 0) {
    FUN_14000fc22(&DAT_14cbb3520,&PTR_FUN_14b8421a8);
  }
  return DAT_14cbb3520;
}



// FUNCTION 1465f8111 FUN_1465f8111 body=47 status=ok
// SIG undefined FUN_1465f8111(void)

longlong FUN_1465f8111(void)

{
  if (DAT_14cbb3528 == 0) {
    FUN_14000fc22(&DAT_14cbb3528,&PTR_FUN_14b8421f8);
  }
  return DAT_14cbb3528;
}



// FUNCTION 1465f8140 FUN_1465f8140 body=47 status=ok
// SIG undefined FUN_1465f8140(void)

longlong FUN_1465f8140(void)

{
  if (DAT_14cbb3530 == 0) {
    FUN_14000fc22(&DAT_14cbb3530,&PTR_FUN_14b842308);
  }
  return DAT_14cbb3530;
}



// FUNCTION 1465f816f FUN_1465f816f body=47 status=ok
// SIG undefined FUN_1465f816f(void)

longlong FUN_1465f816f(void)

{
  if (DAT_14cbb3538 == 0) {
    FUN_14000fc22(&DAT_14cbb3538,&PTR_FUN_14b8423d0);
  }
  return DAT_14cbb3538;
}



// FUNCTION 1465f819e FUN_1465f819e body=47 status=ok
// SIG undefined FUN_1465f819e(void)

longlong FUN_1465f819e(void)

{
  if (DAT_14cbb3540 == 0) {
    FUN_14000fc22(&DAT_14cbb3540,&PTR_FUN_14b842480);
  }
  return DAT_14cbb3540;
}



// FUNCTION 1465f81cd FUN_1465f81cd body=47 status=ok
// SIG undefined FUN_1465f81cd(void)

longlong FUN_1465f81cd(void)

{
  if (DAT_14cbb3548 == 0) {
    FUN_14000fc22(&DAT_14cbb3548,&PTR_FUN_14b842520);
  }
  return DAT_14cbb3548;
}



// FUNCTION 1465f81fc FUN_1465f81fc body=47 status=ok
// SIG undefined FUN_1465f81fc(void)

longlong FUN_1465f81fc(void)

{
  if (DAT_14cbb3550 == 0) {
    FUN_14000fc22(&DAT_14cbb3550,&PTR_FUN_14b8425b8);
  }
  return DAT_14cbb3550;
}



// FUNCTION 1465f822b FUN_1465f822b body=47 status=ok
// SIG undefined FUN_1465f822b(void)

longlong FUN_1465f822b(void)

{
  if (DAT_14cbb3558 == 0) {
    FUN_14000fc22(&DAT_14cbb3558,&PTR_FUN_14b8426b0);
  }
  return DAT_14cbb3558;
}



// FUNCTION 1465f825a FUN_1465f825a body=47 status=ok
// SIG undefined FUN_1465f825a(void)

longlong FUN_1465f825a(void)

{
  if (DAT_14cbb3560 == 0) {
    FUN_14000fc22(&DAT_14cbb3560,&PTR_FUN_14b842700);
  }
  return DAT_14cbb3560;
}



// FUNCTION 1465f8289 FUN_1465f8289 body=47 status=ok
// SIG undefined FUN_1465f8289(void)

longlong FUN_1465f8289(void)

{
  if (DAT_14cbb3568 == 0) {
    FUN_14000fc22(&DAT_14cbb3568,&PTR_FUN_14b842798);
  }
  return DAT_14cbb3568;
}



// FUNCTION 1465f82b8 FUN_1465f82b8 body=34 status=ok
// SIG undefined FUN_1465f82b8(void)

void FUN_1465f82b8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8def4();
  FUN_14069c8d6(uVar1,&PTR_s_OnControllerChanged_14b8427e0,10);
  return;
}



// FUNCTION 1465f82da FUN_1465f82da body=40 status=ok
// SIG undefined FUN_1465f82da(void)

undefined8 FUN_1465f82da(undefined8 param_1,int param_2)

{
  FUN_140e3eae6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f8302 FUN_1465f8302 body=52 status=ok
// SIG undefined FUN_1465f8302(void)

longlong FUN_1465f8302(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f8336 FUN_1465f8336 body=40 status=ok
// SIG undefined FUN_1465f8336(void)

undefined8 FUN_1465f8336(undefined8 param_1,int param_2)

{
  thunk_FUN_140b3fd78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f835e FUN_1465f835e body=52 status=ok
// SIG undefined FUN_1465f835e(void)

longlong FUN_1465f835e(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f8392 FUN_1465f8392 body=40 status=ok
// SIG undefined FUN_1465f8392(void)

undefined8 FUN_1465f8392(undefined8 param_1,int param_2)

{
  FUN_140e3eae6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f83ba FUN_1465f83ba body=52 status=ok
// SIG undefined FUN_1465f83ba(void)

longlong FUN_1465f83ba(longlong param_1,int param_2)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465f83ee FUN_1465f83ee body=40 status=ok
// SIG undefined FUN_1465f83ee(void)

undefined8 FUN_1465f83ee(undefined8 param_1,int param_2)

{
  FUN_140e3eae6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


