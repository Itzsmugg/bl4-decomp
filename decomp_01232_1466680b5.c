// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1466680b5 FUN_1466680b5 body=52 status=ok
// SIG undefined FUN_1466680b5(void)

void FUN_1466680b5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba225a0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  return;
}



// FUNCTION 1466680e9 FUN_1466680e9 body=47 status=ok
// SIG undefined FUN_1466680e9(void)

longlong FUN_1466680e9(void)

{
  if (DAT_14cbf3c08 == 0) {
    FUN_1409ce572(&DAT_14cbf3c08,&PTR_FUN_14ba22990);
  }
  return DAT_14cbf3c08;
}



// FUNCTION 146668118 FUN_146668118 body=47 status=ok
// SIG undefined FUN_146668118(void)

longlong FUN_146668118(void)

{
  if (DAT_14cbf3c20 == 0) {
    FUN_1409ce572(&DAT_14cbf3c20,&PTR_FUN_14ba22a00);
  }
  return DAT_14cbf3c20;
}



// FUNCTION 14666814f FUN_14666814f body=47 status=ok
// SIG undefined FUN_14666814f(void)

longlong FUN_14666814f(void)

{
  if (DAT_14cbf3c58 == 0) {
    FUN_14073dd9a(&DAT_14cbf3c58,&PTR_LAB_14ba233a8);
  }
  return DAT_14cbf3c58;
}



// FUNCTION 14666817e FUN_14666817e body=47 status=ok
// SIG undefined FUN_14666817e(void)

longlong FUN_14666817e(void)

{
  if (DAT_14cbf3c70 == 0) {
    FUN_14073dd9a(&DAT_14cbf3c70,&PTR_LAB_14ba239d8);
  }
  return DAT_14cbf3c70;
}



// FUNCTION 1466681ad FUN_1466681ad body=86 status=ok
// SIG undefined FUN_1466681ad(void)

void FUN_1466681ad(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba24200;
  puVar1[0x15] = 0x4010000000000000;
  puVar1[0x16] = 0x3f80000000000000;
  *(undefined1 *)(puVar1 + 0x17) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
  return;
}



// FUNCTION 146668208 FUN_146668208 body=47 status=ok
// SIG undefined FUN_146668208(void)

longlong FUN_146668208(void)

{
  if (DAT_14cbf3c88 == 0) {
    FUN_14073dd9a(&DAT_14cbf3c88,&PTR_LAB_14ba241b8);
  }
  return DAT_14cbf3c88;
}



// FUNCTION 146668237 FUN_146668237 body=62 status=ok
// SIG undefined FUN_146668237(void)

void FUN_146668237(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14584580a(puVar1);
  *puVar1 = &PTR_FUN_14ba245f0;
  puVar1[6] = &PTR_LAB_14ba24910;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  FUN_1458d302c(puVar1 + 10);
  return;
}



// FUNCTION 146668275 FUN_146668275 body=47 status=ok
// SIG undefined FUN_146668275(void)

longlong FUN_146668275(void)

{
  if (DAT_14cbf3ca0 == 0) {
    FUN_14073dd9a(&DAT_14cbf3ca0,&PTR_LAB_14ba245a8);
  }
  return DAT_14cbf3ca0;
}



// FUNCTION 1466682a4 FUN_1466682a4 body=40 status=ok
// SIG undefined FUN_1466682a4(void)

undefined8 FUN_1466682a4(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466682cc FUN_1466682cc body=40 status=ok
// SIG undefined FUN_1466682cc(void)

undefined8 FUN_1466682cc(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466682f4 FUN_1466682f4 body=40 status=ok
// SIG undefined FUN_1466682f4(void)

undefined8 FUN_1466682f4(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666831c FUN_14666831c body=40 status=ok
// SIG undefined FUN_14666831c(void)

undefined8 FUN_14666831c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668344 FUN_146668344 body=40 status=ok
// SIG undefined FUN_146668344(void)

undefined8 FUN_146668344(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666836c FUN_14666836c body=40 status=ok
// SIG undefined FUN_14666836c(void)

undefined8 FUN_14666836c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668394 FUN_146668394 body=40 status=ok
// SIG undefined FUN_146668394(void)

undefined8 FUN_146668394(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466683bc FUN_1466683bc body=40 status=ok
// SIG undefined FUN_1466683bc(void)

undefined8 FUN_1466683bc(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466683e4 FUN_1466683e4 body=40 status=ok
// SIG undefined FUN_1466683e4(void)

undefined8 FUN_1466683e4(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666840c FUN_14666840c body=40 status=ok
// SIG undefined FUN_14666840c(void)

undefined8 FUN_14666840c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668434 FUN_146668434 body=40 status=ok
// SIG undefined FUN_146668434(void)

undefined8 FUN_146668434(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666845c FUN_14666845c body=40 status=ok
// SIG undefined FUN_14666845c(void)

undefined8 FUN_14666845c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668484 FUN_146668484 body=40 status=ok
// SIG undefined FUN_146668484(void)

undefined8 FUN_146668484(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466684ac FUN_1466684ac body=40 status=ok
// SIG undefined FUN_1466684ac(void)

undefined8 FUN_1466684ac(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466684d4 FUN_1466684d4 body=40 status=ok
// SIG undefined FUN_1466684d4(void)

undefined8 FUN_1466684d4(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466684fc FUN_1466684fc body=40 status=ok
// SIG undefined FUN_1466684fc(void)

undefined8 FUN_1466684fc(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668524 FUN_146668524 body=40 status=ok
// SIG undefined FUN_146668524(void)

undefined8 FUN_146668524(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666854c FUN_14666854c body=40 status=ok
// SIG undefined FUN_14666854c(void)

undefined8 FUN_14666854c(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668574 FUN_146668574 body=40 status=ok
// SIG undefined FUN_146668574(void)

undefined8 FUN_146668574(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666859c FUN_14666859c body=40 status=ok
// SIG undefined FUN_14666859c(void)

undefined8 FUN_14666859c(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466685c4 FUN_1466685c4 body=40 status=ok
// SIG undefined FUN_1466685c4(void)

undefined8 FUN_1466685c4(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466685ec FUN_1466685ec body=40 status=ok
// SIG undefined FUN_1466685ec(void)

undefined8 FUN_1466685ec(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668614 FUN_146668614 body=40 status=ok
// SIG undefined FUN_146668614(void)

undefined8 FUN_146668614(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666863c FUN_14666863c body=40 status=ok
// SIG undefined FUN_14666863c(void)

undefined8 FUN_14666863c(undefined8 param_1,int param_2)

{
  FUN_1457ee352();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668664 FUN_146668664 body=40 status=ok
// SIG undefined FUN_146668664(void)

undefined8 FUN_146668664(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666868c FUN_14666868c body=40 status=ok
// SIG undefined FUN_14666868c(void)

undefined8 FUN_14666868c(undefined8 param_1,int param_2)

{
  thunk_FUN_1411412a8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466686b4 FUN_1466686b4 body=40 status=ok
// SIG undefined FUN_1466686b4(void)

undefined8 FUN_1466686b4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466686dc FUN_1466686dc body=40 status=ok
// SIG undefined FUN_1466686dc(void)

undefined8 FUN_1466686dc(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668704 FUN_146668704 body=40 status=ok
// SIG undefined FUN_146668704(void)

undefined8 FUN_146668704(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666872c FUN_14666872c body=40 status=ok
// SIG undefined FUN_14666872c(void)

undefined8 FUN_14666872c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668754 FUN_146668754 body=40 status=ok
// SIG undefined FUN_146668754(void)

undefined8 FUN_146668754(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666877c FUN_14666877c body=40 status=ok
// SIG undefined FUN_14666877c(void)

undefined8 FUN_14666877c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466687a4 FUN_1466687a4 body=40 status=ok
// SIG undefined FUN_1466687a4(void)

undefined8 FUN_1466687a4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466687cc FUN_1466687cc body=40 status=ok
// SIG undefined FUN_1466687cc(void)

undefined8 FUN_1466687cc(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466687f4 FUN_1466687f4 body=40 status=ok
// SIG undefined FUN_1466687f4(void)

undefined8 FUN_1466687f4(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666881c FUN_14666881c body=40 status=ok
// SIG undefined FUN_14666881c(void)

undefined8 FUN_14666881c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668844 FUN_146668844 body=40 status=ok
// SIG undefined FUN_146668844(void)

undefined8 FUN_146668844(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666886c FUN_14666886c body=40 status=ok
// SIG undefined FUN_14666886c(void)

undefined8 FUN_14666886c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668894 FUN_146668894 body=40 status=ok
// SIG undefined FUN_146668894(void)

undefined8 FUN_146668894(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466688bc FUN_1466688bc body=40 status=ok
// SIG undefined FUN_1466688bc(void)

undefined8 FUN_1466688bc(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466688e4 FUN_1466688e4 body=40 status=ok
// SIG undefined FUN_1466688e4(void)

undefined8 FUN_1466688e4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666890c FUN_14666890c body=40 status=ok
// SIG undefined FUN_14666890c(void)

undefined8 FUN_14666890c(undefined8 param_1,int param_2)

{
  FUN_1411412f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668934 FUN_146668934 body=40 status=ok
// SIG undefined FUN_146668934(void)

undefined8 FUN_146668934(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666895c FUN_14666895c body=40 status=ok
// SIG undefined FUN_14666895c(void)

undefined8 FUN_14666895c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668984 FUN_146668984 body=40 status=ok
// SIG undefined FUN_146668984(void)

undefined8 FUN_146668984(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466689ac FUN_1466689ac body=40 status=ok
// SIG undefined FUN_1466689ac(void)

undefined8 FUN_1466689ac(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466689d4 FUN_1466689d4 body=40 status=ok
// SIG undefined FUN_1466689d4(void)

undefined8 FUN_1466689d4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466689fc FUN_1466689fc body=40 status=ok
// SIG undefined FUN_1466689fc(void)

undefined8 FUN_1466689fc(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668a24 FUN_146668a24 body=40 status=ok
// SIG undefined FUN_146668a24(void)

undefined8 FUN_146668a24(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668a4c FUN_146668a4c body=40 status=ok
// SIG undefined FUN_146668a4c(void)

undefined8 FUN_146668a4c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668a74 FUN_146668a74 body=40 status=ok
// SIG undefined FUN_146668a74(void)

undefined8 FUN_146668a74(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668a9c FUN_146668a9c body=40 status=ok
// SIG undefined FUN_146668a9c(void)

undefined8 FUN_146668a9c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668ac4 FUN_146668ac4 body=40 status=ok
// SIG undefined FUN_146668ac4(void)

undefined8 FUN_146668ac4(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668aec FUN_146668aec body=40 status=ok
// SIG undefined FUN_146668aec(void)

undefined8 FUN_146668aec(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668b14 FUN_146668b14 body=40 status=ok
// SIG undefined FUN_146668b14(void)

undefined8 FUN_146668b14(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668b3c FUN_146668b3c body=40 status=ok
// SIG undefined FUN_146668b3c(void)

undefined8 FUN_146668b3c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668b64 FUN_146668b64 body=40 status=ok
// SIG undefined FUN_146668b64(void)

undefined8 FUN_146668b64(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668b8c FUN_146668b8c body=40 status=ok
// SIG undefined FUN_146668b8c(void)

undefined8 FUN_146668b8c(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668bb4 FUN_146668bb4 body=40 status=ok
// SIG undefined FUN_146668bb4(void)

undefined8 FUN_146668bb4(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668bdc FUN_146668bdc body=73 status=ok
// SIG undefined FUN_146668bdc(void)

undefined8 * FUN_146668bdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba245f0;
  param_1[6] = &PTR_LAB_14ba24910;
  FUN_1456c3cc8(param_1 + 10);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668c26 FUN_146668c26 body=93 status=ok
// SIG undefined FUN_146668c26(void)

void FUN_146668c26(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba27130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146668c84 FUN_146668c84 body=29 status=ok
// SIG undefined FUN_146668c84(void)

undefined8 FUN_146668c84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146668ca1 FUN_146668ca1 body=47 status=ok
// SIG undefined FUN_146668ca1(void)

longlong FUN_146668ca1(void)

{
  if (DAT_14cbf3cc0 == 0) {
    FUN_1409ce572(&DAT_14cbf3cc0,&PTR_FUN_14ba27630);
  }
  return DAT_14cbf3cc0;
}



// FUNCTION 146668cd0 FUN_146668cd0 body=52 status=ok
// SIG undefined FUN_146668cd0(void)

void FUN_146668cd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba277d0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xac) = 1;
  return;
}



// FUNCTION 146668d09 FUN_146668d09 body=47 status=ok
// SIG undefined FUN_146668d09(void)

longlong FUN_146668d09(void)

{
  if (DAT_14cbf3ce0 == 0) {
    FUN_14073dd9a(&DAT_14cbf3ce0,&PTR_LAB_14ba27788);
  }
  return DAT_14cbf3ce0;
}



// FUNCTION 146668d38 FUN_146668d38 body=76 status=ok
// SIG undefined FUN_146668d38(void)

void FUN_146668d38(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14584580a(puVar1);
  *puVar1 = &PTR_FUN_14ba27c70;
  puVar1[6] = &PTR_FUN_14ba27f80;
  puVar1[7] = &PTR_FUN_14ba27fa0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar1 + 100) = 1;
  return;
}



// FUNCTION 146668d89 FUN_146668d89 body=47 status=ok
// SIG undefined FUN_146668d89(void)

longlong FUN_146668d89(void)

{
  if (DAT_14cbf3cf8 == 0) {
    FUN_14073dd9a(&DAT_14cbf3cf8,&PTR_LAB_14ba27c28);
  }
  return DAT_14cbf3cf8;
}



// FUNCTION 146668db8 FUN_146668db8 body=49 status=ok
// SIG undefined FUN_146668db8(void)

longlong FUN_146668db8(void)

{
  if (DAT_14cbf3d08 == 0) {
    FUN_1409ce572(&DAT_14cbf3d08,&PTR_FUN_14ba28230);
  }
  return DAT_14cbf3d08;
}



// FUNCTION 146668de9 FUN_146668de9 body=49 status=ok
// SIG undefined FUN_146668de9(void)

longlong FUN_146668de9(void)

{
  if (DAT_14cbf3d20 == 0) {
    FUN_1409ce572(&DAT_14cbf3d20,&PTR_FUN_14ba282a0);
  }
  return DAT_14cbf3d20;
}



// FUNCTION 146668e1a FUN_146668e1a body=47 status=ok
// SIG undefined FUN_146668e1a(void)

longlong FUN_146668e1a(void)

{
  if (DAT_14cbf3d38 == 0) {
    FUN_1409ce572(&DAT_14cbf3d38,&PTR_FUN_14ba28320);
  }
  return DAT_14cbf3d38;
}



// FUNCTION 146668e49 FUN_146668e49 body=47 status=ok
// SIG undefined FUN_146668e49(void)

longlong FUN_146668e49(void)

{
  if (DAT_14cbf3d50 == 0) {
    FUN_1409ce572(&DAT_14cbf3d50,&PTR_FUN_14ba283a0);
  }
  return DAT_14cbf3d50;
}



// FUNCTION 146668e78 FUN_146668e78 body=47 status=ok
// SIG undefined FUN_146668e78(void)

longlong FUN_146668e78(void)

{
  if (DAT_14cbf3d68 == 0) {
    FUN_1409ce572(&DAT_14cbf3d68,&PTR_FUN_14ba28430);
  }
  return DAT_14cbf3d68;
}



// FUNCTION 146668ea7 FUN_146668ea7 body=108 status=ok
// SIG undefined FUN_146668ea7(void)

void FUN_146668ea7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba28890;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x16] = 0x4059000000000000;
  puVar1[0x17] = 3;
  puVar1[0x18] = 0x4010000000000000;
  *(undefined1 *)(puVar1 + 0x19) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 1;
  return;
}



// FUNCTION 146668f18 FUN_146668f18 body=47 status=ok
// SIG undefined FUN_146668f18(void)

longlong FUN_146668f18(void)

{
  if (DAT_14cbf3d88 == 0) {
    FUN_14073dd9a(&DAT_14cbf3d88,&PTR_LAB_14ba28848);
  }
  return DAT_14cbf3d88;
}



// FUNCTION 146668f47 FUN_146668f47 body=107 status=ok
// SIG undefined FUN_146668f47(void)

void FUN_146668f47(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba28e90;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x16] = 0x4059000000000000;
  *(undefined4 *)(puVar1 + 0x17) = 2;
  puVar1[0x18] = 0x4010000000000000;
  *(undefined1 *)(puVar1 + 0x19) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 1;
  return;
}



// FUNCTION 146668fb7 FUN_146668fb7 body=47 status=ok
// SIG undefined FUN_146668fb7(void)

longlong FUN_146668fb7(void)

{
  if (DAT_14cbf3da0 == 0) {
    FUN_14073dd9a(&DAT_14cbf3da0,&PTR_LAB_14ba28e48);
  }
  return DAT_14cbf3da0;
}



// FUNCTION 146668fe6 FUN_146668fe6 body=108 status=ok
// SIG undefined FUN_146668fe6(void)

void FUN_146668fe6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba29520;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x16] = 0x4059000000000000;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0x4010000000000000;
  *(undefined1 *)(puVar1 + 0x19) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 1;
  return;
}



// FUNCTION 146669057 FUN_146669057 body=47 status=ok
// SIG undefined FUN_146669057(void)

longlong FUN_146669057(void)

{
  if (DAT_14cbf3db8 == 0) {
    FUN_14073dd9a(&DAT_14cbf3db8,&PTR_LAB_14ba294d8);
  }
  return DAT_14cbf3db8;
}



// FUNCTION 14666908b FUN_14666908b body=47 status=ok
// SIG undefined FUN_14666908b(void)

longlong FUN_14666908b(void)

{
  if (DAT_14cbf3dd0 == 0) {
    FUN_14073dd9a(&DAT_14cbf3dd0,&PTR_LAB_14ba299f8);
  }
  return DAT_14cbf3dd0;
}



// FUNCTION 1466690ba FUN_1466690ba body=47 status=ok
// SIG undefined FUN_1466690ba(void)

longlong FUN_1466690ba(void)

{
  if (DAT_14cbf3df8 == 0) {
    FUN_1409ce572(&DAT_14cbf3df8,&PTR_FUN_14ba2a150);
  }
  return DAT_14cbf3df8;
}



// FUNCTION 1466690e9 FUN_1466690e9 body=69 status=ok
// SIG undefined FUN_1466690e9(void)

void FUN_1466690e9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2a370;
  *(undefined4 *)(puVar1 + 0x15) = 1;
  *(undefined1 *)((longlong)puVar1 + 0xac) = 1;
  puVar1[0x16] = 0x3f50624dd2f1a9fc;
  return;
}



// FUNCTION 146669133 FUN_146669133 body=47 status=ok
// SIG undefined FUN_146669133(void)

longlong FUN_146669133(void)

{
  if (DAT_14cbf3e18 == 0) {
    FUN_14073dd9a(&DAT_14cbf3e18,&PTR_LAB_14ba2a328);
  }
  return DAT_14cbf3e18;
}



// FUNCTION 146669167 FUN_146669167 body=47 status=ok
// SIG undefined FUN_146669167(void)

longlong FUN_146669167(void)

{
  if (DAT_14cbf3e30 == 0) {
    FUN_14073dd9a(&DAT_14cbf3e30,&PTR_LAB_14ba2a708);
  }
  return DAT_14cbf3e30;
}



// FUNCTION 146669196 FUN_146669196 body=47 status=ok
// SIG undefined FUN_146669196(void)

longlong FUN_146669196(void)

{
  if (DAT_14cbf3e50 == 0) {
    FUN_1409ce572(&DAT_14cbf3e50,&PTR_FUN_14ba2ad90);
  }
  return DAT_14cbf3e50;
}



// FUNCTION 1466691c5 FUN_1466691c5 body=47 status=ok
// SIG undefined FUN_1466691c5(void)

longlong FUN_1466691c5(void)

{
  if (DAT_14cbf3e68 == 0) {
    FUN_1409ce572(&DAT_14cbf3e68,&PTR_FUN_14ba2ae00);
  }
  return DAT_14cbf3e68;
}



// FUNCTION 1466691f4 FUN_1466691f4 body=134 status=ok
// SIG undefined FUN_1466691f4(void)

void FUN_1466691f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2b240;
  puVar1[0x15] = &DAT_100000001;
  *(undefined4 *)(puVar1 + 0x16) = 1;
  puVar1[0x17] = 0x3fe0000000000000;
  puVar1[0x18] = 0x4024000000000000;
  *(undefined1 *)(puVar1 + 0x19) = 1;
  *(undefined1 *)((longlong)puVar1 + 0xc9) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xca) = 1;
  puVar1[0x1a] = 0x3f50624dd2f1a9fc;
  return;
}



// FUNCTION 14666927f FUN_14666927f body=47 status=ok
// SIG undefined FUN_14666927f(void)

longlong FUN_14666927f(void)

{
  if (DAT_14cbf3e88 == 0) {
    FUN_14073dd9a(&DAT_14cbf3e88,&PTR_LAB_14ba2b1f8);
  }
  return DAT_14cbf3e88;
}



// FUNCTION 1466692b3 FUN_1466692b3 body=47 status=ok
// SIG undefined FUN_1466692b3(void)

longlong FUN_1466692b3(void)

{
  if (DAT_14cbf3ea0 == 0) {
    FUN_14073dd9a(&DAT_14cbf3ea0,&PTR_LAB_14ba2b5e8);
  }
  return DAT_14cbf3ea0;
}



// FUNCTION 1466692e2 FUN_1466692e2 body=71 status=ok
// SIG undefined FUN_1466692e2(void)

void FUN_1466692e2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2be40;
  *(undefined4 *)(puVar1 + 0x15) = 0x3f000000;
  *(undefined1 *)((longlong)puVar1 + 0xac) = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
  *(undefined2 *)((longlong)puVar1 + 0xb4) = 1;
  return;
}



// FUNCTION 14666932e FUN_14666932e body=47 status=ok
// SIG undefined FUN_14666932e(void)

longlong FUN_14666932e(void)

{
  if (DAT_14cbf3eb8 == 0) {
    FUN_14073dd9a(&DAT_14cbf3eb8,&PTR_LAB_14ba2bdf8);
  }
  return DAT_14cbf3eb8;
}



// FUNCTION 14666935d FUN_14666935d body=84 status=ok
// SIG undefined FUN_14666935d(void)

void FUN_14666935d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14584580a(puVar1);
  *puVar1 = &PTR_FUN_14ba2c290;
  puVar1[6] = &PTR_FUN_14ba2c5a0;
  puVar1[7] = &PTR_FUN_14ba2c5c0;
  puVar1[8] = 0;
  *(undefined2 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0x3f800000;
  return;
}



// FUNCTION 1466693b6 FUN_1466693b6 body=47 status=ok
// SIG undefined FUN_1466693b6(void)

longlong FUN_1466693b6(void)

{
  if (DAT_14cbf3ed0 == 0) {
    FUN_14073dd9a(&DAT_14cbf3ed0,&PTR_LAB_14ba2c248);
  }
  return DAT_14cbf3ed0;
}



// FUNCTION 1466693e5 FUN_1466693e5 body=42 status=ok
// SIG undefined FUN_1466693e5(void)

void FUN_1466693e5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2c910;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  return;
}



// FUNCTION 146669414 FUN_146669414 body=47 status=ok
// SIG undefined FUN_146669414(void)

longlong FUN_146669414(void)

{
  if (DAT_14cbf3ee8 == 0) {
    FUN_14073dd9a(&DAT_14cbf3ee8,&PTR_LAB_14ba2c8c8);
  }
  return DAT_14cbf3ee8;
}



// FUNCTION 146669443 FUN_146669443 body=124 status=ok
// SIG undefined FUN_146669443(void)

void FUN_146669443(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14584580a(puVar1);
  *puVar1 = &PTR_FUN_14ba2cda0;
  puVar1[6] = &PTR_FUN_14ba2d0b0;
  puVar1[7] = &PTR_FUN_14ba2d0d0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  puVar1[0xd] = 0x7fefffffffffffff;
  puVar1[0xe] = 0x7fefffffffffffff;
  puVar1[0xf] = 0x7fefffffffffffff;
  puVar1[0x10] = 0xffefffffffffffff;
  puVar1[0x11] = 0xffefffffffffffff;
  puVar1[0x12] = 0xffefffffffffffff;
  return;
}



// FUNCTION 1466694c4 FUN_1466694c4 body=47 status=ok
// SIG undefined FUN_1466694c4(void)

longlong FUN_1466694c4(void)

{
  if (DAT_14cbf3f00 == 0) {
    FUN_14073dd9a(&DAT_14cbf3f00,&PTR_LAB_14ba2cd58);
  }
  return DAT_14cbf3f00;
}



// FUNCTION 1466694f3 FUN_1466694f3 body=35 status=ok
// SIG undefined FUN_1466694f3(void)

void FUN_1466694f3(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e6d9d4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2d340;
  return;
}



// FUNCTION 146669516 FUN_146669516 body=47 status=ok
// SIG undefined FUN_146669516(void)

longlong FUN_146669516(void)

{
  if (DAT_14cbf3f18 == 0) {
    FUN_14073dd9a(&DAT_14cbf3f18,&PTR_LAB_14ba2d2f8);
  }
  return DAT_14cbf3f18;
}



// FUNCTION 146669545 FUN_146669545 body=118 status=ok
// SIG undefined FUN_146669545(void)

void FUN_146669545(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1412c18ae(puVar1);
  *puVar1 = &PTR_FUN_14ba2d8f0;
  puVar1[5] = &PTR_FUN_14ba2dc90;
  puVar1[0x13] = &PTR_FUN_14ba2dcb0;
  puVar1[0x17] = &PTR_FUN_14ba2dce0;
  puVar1[0x2c] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return;
}



// FUNCTION 1466695bb FUN_1466695bb body=47 status=ok
// SIG undefined FUN_1466695bb(void)

longlong FUN_1466695bb(void)

{
  if (DAT_14cbf3f30 == 0) {
    FUN_14073dd9a(&DAT_14cbf3f30,&PTR_LAB_14ba2d8a8);
  }
  return DAT_14cbf3f30;
}



// FUNCTION 1466695ea FUN_1466695ea body=35 status=ok
// SIG undefined FUN_1466695ea(void)

void FUN_1466695ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145815dee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2df00;
  return;
}



// FUNCTION 14666960d FUN_14666960d body=47 status=ok
// SIG undefined FUN_14666960d(void)

longlong FUN_14666960d(void)

{
  if (DAT_14cbf3f88 == 0) {
    FUN_14073dd9a(&DAT_14cbf3f88,&PTR_LAB_14ba2deb8);
  }
  return DAT_14cbf3f88;
}



// FUNCTION 14666963c FUN_14666963c body=47 status=ok
// SIG undefined FUN_14666963c(void)

longlong FUN_14666963c(void)

{
  if (DAT_14cbf3f98 == 0) {
    FUN_1409ce572(&DAT_14cbf3f98,&PTR_FUN_14ba2e240);
  }
  return DAT_14cbf3f98;
}



// FUNCTION 14666966b FUN_14666966b body=49 status=ok
// SIG undefined FUN_14666966b(void)

longlong FUN_14666966b(void)

{
  if (DAT_14cbf3fd0 == 0) {
    FUN_14073dd9a(&DAT_14cbf3fd0,&PTR_LAB_14ba2e410);
  }
  return DAT_14cbf3fd0;
}



// FUNCTION 14666969c FUN_14666969c body=47 status=ok
// SIG undefined FUN_14666969c(void)

longlong FUN_14666969c(void)

{
  if (DAT_14cbf3fb0 == 0) {
    FUN_14000fc22(&DAT_14cbf3fb0,&PTR_FUN_14ba2e278);
  }
  return DAT_14cbf3fb0;
}



// FUNCTION 1466696cb FUN_1466696cb body=47 status=ok
// SIG undefined FUN_1466696cb(void)

longlong FUN_1466696cb(void)

{
  if (DAT_14cbf3fb8 == 0) {
    FUN_14000fc22(&DAT_14cbf3fb8,&PTR_FUN_14ba2e2c8);
  }
  return DAT_14cbf3fb8;
}



// FUNCTION 1466696fa FUN_1466696fa body=47 status=ok
// SIG undefined FUN_1466696fa(void)

longlong FUN_1466696fa(void)

{
  if (DAT_14cbf3fc0 == 0) {
    FUN_14000fc22(&DAT_14cbf3fc0,&PTR_FUN_14ba2e308);
  }
  return DAT_14cbf3fc0;
}



// FUNCTION 14666972a FUN_14666972a body=34 status=ok
// SIG undefined FUN_14666972a(void)

void FUN_14666972a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599aaa0();
  FUN_14069c8d6(uVar1,&PTR_s_AutoFit_14ba2e350,3);
  return;
}



// FUNCTION 14666974c FUN_14666974c body=46 status=ok
// SIG undefined FUN_14666974c(void)

void FUN_14666974c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2e450;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 14666977f FUN_14666977f body=47 status=ok
// SIG undefined FUN_14666977f(void)

longlong FUN_14666977f(void)

{
  if (DAT_14cbf3fe0 == 0) {
    FUN_1409ce572(&DAT_14cbf3fe0,&PTR_FUN_14ba2e770);
  }
  return DAT_14cbf3fe0;
}



// FUNCTION 1466697b3 FUN_1466697b3 body=47 status=ok
// SIG undefined FUN_1466697b3(void)

longlong FUN_1466697b3(void)

{
  if (DAT_14cbf4000 == 0) {
    FUN_14073dd9a(&DAT_14cbf4000,&PTR_LAB_14ba2ed08);
  }
  return DAT_14cbf4000;
}



// FUNCTION 1466697e2 FUN_1466697e2 body=54 status=ok
// SIG undefined FUN_1466697e2(void)

void FUN_1466697e2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2f0f0;
  puVar1[5] = &PTR_FUN_14ba2f390;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146669822 FUN_146669822 body=47 status=ok
// SIG undefined FUN_146669822(void)

longlong FUN_146669822(void)

{
  if (DAT_14cbf4018 == 0) {
    FUN_14073dd9a(&DAT_14cbf4018,&PTR_LAB_14ba2f0a8);
  }
  return DAT_14cbf4018;
}



// FUNCTION 146669851 FUN_146669851 body=47 status=ok
// SIG undefined FUN_146669851(void)

longlong FUN_146669851(void)

{
  if (DAT_14cbf4030 == 0) {
    FUN_14073dd9a(&DAT_14cbf4030,&PTR_LAB_14ba2f728);
  }
  return DAT_14cbf4030;
}



// FUNCTION 146669880 FUN_146669880 body=40 status=ok
// SIG undefined FUN_146669880(void)

undefined8 FUN_146669880(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466698a8 FUN_1466698a8 body=40 status=ok
// SIG undefined FUN_1466698a8(void)

undefined8 FUN_1466698a8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466698d0 FUN_1466698d0 body=40 status=ok
// SIG undefined FUN_1466698d0(void)

undefined8 FUN_1466698d0(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466698f8 FUN_1466698f8 body=40 status=ok
// SIG undefined FUN_1466698f8(void)

undefined8 FUN_1466698f8(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669920 FUN_146669920 body=40 status=ok
// SIG undefined FUN_146669920(void)

undefined8 FUN_146669920(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669948 FUN_146669948 body=40 status=ok
// SIG undefined FUN_146669948(void)

undefined8 FUN_146669948(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669970 FUN_146669970 body=40 status=ok
// SIG undefined FUN_146669970(void)

undefined8 FUN_146669970(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669998 FUN_146669998 body=40 status=ok
// SIG undefined FUN_146669998(void)

undefined8 FUN_146669998(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466699c0 FUN_1466699c0 body=40 status=ok
// SIG undefined FUN_1466699c0(void)

undefined8 FUN_1466699c0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466699e8 FUN_1466699e8 body=40 status=ok
// SIG undefined FUN_1466699e8(void)

undefined8 FUN_1466699e8(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669a10 FUN_146669a10 body=40 status=ok
// SIG undefined FUN_146669a10(void)

undefined8 FUN_146669a10(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669a38 FUN_146669a38 body=40 status=ok
// SIG undefined FUN_146669a38(void)

undefined8 FUN_146669a38(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669a60 FUN_146669a60 body=40 status=ok
// SIG undefined FUN_146669a60(void)

undefined8 FUN_146669a60(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669a88 FUN_146669a88 body=40 status=ok
// SIG undefined FUN_146669a88(void)

undefined8 FUN_146669a88(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669ab0 FUN_146669ab0 body=40 status=ok
// SIG undefined FUN_146669ab0(void)

undefined8 FUN_146669ab0(undefined8 param_1,int param_2)

{
  FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669ad8 FUN_146669ad8 body=40 status=ok
// SIG undefined FUN_146669ad8(void)

undefined8 FUN_146669ad8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669b00 FUN_146669b00 body=192 status=ok
// SIG undefined FUN_146669b00(void)

void FUN_146669b00(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba319b0;
  puVar1[3] = &DAT_14cbf4044;
  puVar1[4] = FUN_1459a68da;
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



// FUNCTION 146669bc2 FUN_146669bc2 body=93 status=ok
// SIG undefined FUN_146669bc2(void)

void FUN_146669bc2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba319b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146669c20 FUN_146669c20 body=34 status=ok
// SIG undefined FUN_146669c20(void)

undefined8 FUN_146669c20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146669c42 FUN_146669c42 body=47 status=ok
// SIG undefined FUN_146669c42(void)

longlong FUN_146669c42(void)

{
  if (DAT_14cbf4050 == 0) {
    FUN_140f50038(&DAT_14cbf4050,&PTR_s__Script_StreamlineDLSSGBlueprint_14ba31a60);
  }
  return DAT_14cbf4050;
}



// FUNCTION 146669c71 FUN_146669c71 body=49 status=ok
// SIG undefined FUN_146669c71(void)

longlong FUN_146669c71(void)

{
  if (DAT_14cbf4060 == 0) {
    FUN_1409ce572(&DAT_14cbf4060,&PTR_FUN_14ba31b50);
  }
  return DAT_14cbf4060;
}



// FUNCTION 146669ca2 FUN_146669ca2 body=49 status=ok
// SIG undefined FUN_146669ca2(void)

longlong FUN_146669ca2(void)

{
  if (DAT_14cbf40c0 == 0) {
    FUN_14073dd9a(&DAT_14cbf40c0,&PTR_LAB_14ba32480);
  }
  return DAT_14cbf40c0;
}



// FUNCTION 146669cd3 FUN_146669cd3 body=47 status=ok
// SIG undefined FUN_146669cd3(void)

longlong FUN_146669cd3(void)

{
  if (DAT_14cbf4078 == 0) {
    FUN_14000fc22(&DAT_14cbf4078,&PTR_FUN_14ba31c28);
  }
  return DAT_14cbf4078;
}



// FUNCTION 146669d02 FUN_146669d02 body=47 status=ok
// SIG undefined FUN_146669d02(void)

longlong FUN_146669d02(void)

{
  if (DAT_14cbf4080 == 0) {
    FUN_14000fc22(&DAT_14cbf4080,&PTR_FUN_14ba31d28);
  }
  return DAT_14cbf4080;
}



// FUNCTION 146669d31 FUN_146669d31 body=47 status=ok
// SIG undefined FUN_146669d31(void)

longlong FUN_146669d31(void)

{
  if (DAT_14cbf4088 == 0) {
    FUN_14000fc22(&DAT_14cbf4088,&PTR_FUN_14ba31e10);
  }
  return DAT_14cbf4088;
}



// FUNCTION 146669d60 FUN_146669d60 body=47 status=ok
// SIG undefined FUN_146669d60(void)

longlong FUN_146669d60(void)

{
  if (DAT_14cbf4090 == 0) {
    FUN_14000fc22(&DAT_14cbf4090,&PTR_FUN_14ba31f40);
  }
  return DAT_14cbf4090;
}



// FUNCTION 146669d8f FUN_146669d8f body=47 status=ok
// SIG undefined FUN_146669d8f(void)

longlong FUN_146669d8f(void)

{
  if (DAT_14cbf4098 == 0) {
    FUN_14000fc22(&DAT_14cbf4098,&PTR_FUN_14ba32080);
  }
  return DAT_14cbf4098;
}



// FUNCTION 146669dbe FUN_146669dbe body=47 status=ok
// SIG undefined FUN_146669dbe(void)

longlong FUN_146669dbe(void)

{
  if (DAT_14cbf40a0 == 0) {
    FUN_14000fc22(&DAT_14cbf40a0,&PTR_FUN_14ba32120);
  }
  return DAT_14cbf40a0;
}



// FUNCTION 146669ded FUN_146669ded body=47 status=ok
// SIG undefined FUN_146669ded(void)

longlong FUN_146669ded(void)

{
  if (DAT_14cbf40a8 == 0) {
    FUN_14000fc22(&DAT_14cbf40a8,&PTR_FUN_14ba32208);
  }
  return DAT_14cbf40a8;
}



// FUNCTION 146669e1c FUN_146669e1c body=47 status=ok
// SIG undefined FUN_146669e1c(void)

longlong FUN_146669e1c(void)

{
  if (DAT_14cbf40b0 == 0) {
    FUN_14000fc22(&DAT_14cbf40b0,&PTR_FUN_14ba322f0);
  }
  return DAT_14cbf40b0;
}



// FUNCTION 146669e4c FUN_146669e4c body=34 status=ok
// SIG undefined FUN_146669e4c(void)

void FUN_146669e4c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a90ee4();
  FUN_14069c8d6(uVar1,&PTR_s_GetDefaultDLSSGMode_14ba32330,8);
  return;
}



// FUNCTION 146669e6e FUN_146669e6e body=35 status=ok
// SIG undefined FUN_146669e6e(void)

void FUN_146669e6e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba324c0;
  return;
}



// FUNCTION 146669e92 FUN_146669e92 body=192 status=ok
// SIG undefined FUN_146669e92(void)

void FUN_146669e92(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba32890;
  puVar1[3] = &DAT_14cbf4114;
  puVar1[4] = FUN_1459d0c9a;
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



// FUNCTION 146669f54 FUN_146669f54 body=40 status=ok
// SIG undefined FUN_146669f54(void)

undefined8 FUN_146669f54(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146669f7c FUN_146669f7c body=93 status=ok
// SIG undefined FUN_146669f7c(void)

void FUN_146669f7c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba32890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146669fda FUN_146669fda body=34 status=ok
// SIG undefined FUN_146669fda(void)

undefined8 FUN_146669fda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146669ffc FUN_146669ffc body=47 status=ok
// SIG undefined FUN_146669ffc(void)

longlong FUN_146669ffc(void)

{
  if (DAT_14cbf4120 == 0) {
    FUN_140f50038(&DAT_14cbf4120,&PTR_s__Script_StreamlineDeepDVCBluepri_14ba32940);
  }
  return DAT_14cbf4120;
}



// FUNCTION 14666a02b FUN_14666a02b body=49 status=ok
// SIG undefined FUN_14666a02b(void)

longlong FUN_14666a02b(void)

{
  if (DAT_14cbf4130 == 0) {
    FUN_1409ce572(&DAT_14cbf4130,&PTR_FUN_14ba32a10);
  }
  return DAT_14cbf4130;
}



// FUNCTION 14666a05c FUN_14666a05c body=49 status=ok
// SIG undefined FUN_14666a05c(void)

longlong FUN_14666a05c(void)

{
  if (DAT_14cbf41a8 == 0) {
    FUN_14073dd9a(&DAT_14cbf41a8,&PTR_LAB_14ba33520);
  }
  return DAT_14cbf41a8;
}



// FUNCTION 14666a08d FUN_14666a08d body=47 status=ok
// SIG undefined FUN_14666a08d(void)

longlong FUN_14666a08d(void)

{
  if (DAT_14cbf4148 == 0) {
    FUN_14000fc22(&DAT_14cbf4148,&PTR_FUN_14ba32a98);
  }
  return DAT_14cbf4148;
}



// FUNCTION 14666a0bc FUN_14666a0bc body=47 status=ok
// SIG undefined FUN_14666a0bc(void)

longlong FUN_14666a0bc(void)

{
  if (DAT_14cbf4150 == 0) {
    FUN_14000fc22(&DAT_14cbf4150,&PTR_FUN_14ba32b80);
  }
  return DAT_14cbf4150;
}



// FUNCTION 14666a0eb FUN_14666a0eb body=47 status=ok
// SIG undefined FUN_14666a0eb(void)

longlong FUN_14666a0eb(void)

{
  if (DAT_14cbf4158 == 0) {
    FUN_14000fc22(&DAT_14cbf4158,&PTR_FUN_14ba32c20);
  }
  return DAT_14cbf4158;
}



// FUNCTION 14666a11a FUN_14666a11a body=47 status=ok
// SIG undefined FUN_14666a11a(void)

longlong FUN_14666a11a(void)

{
  if (DAT_14cbf4160 == 0) {
    FUN_14000fc22(&DAT_14cbf4160,&PTR_FUN_14ba32d08);
  }
  return DAT_14cbf4160;
}



// FUNCTION 14666a149 FUN_14666a149 body=47 status=ok
// SIG undefined FUN_14666a149(void)

longlong FUN_14666a149(void)

{
  if (DAT_14cbf4168 == 0) {
    FUN_14000fc22(&DAT_14cbf4168,&PTR_FUN_14ba32e38);
  }
  return DAT_14cbf4168;
}



// FUNCTION 14666a178 FUN_14666a178 body=47 status=ok
// SIG undefined FUN_14666a178(void)

longlong FUN_14666a178(void)

{
  if (DAT_14cbf4170 == 0) {
    FUN_14000fc22(&DAT_14cbf4170,&PTR_FUN_14ba32f80);
  }
  return DAT_14cbf4170;
}



// FUNCTION 14666a1a7 FUN_14666a1a7 body=47 status=ok
// SIG undefined FUN_14666a1a7(void)

longlong FUN_14666a1a7(void)

{
  if (DAT_14cbf4178 == 0) {
    FUN_14000fc22(&DAT_14cbf4178,&PTR_FUN_14ba33020);
  }
  return DAT_14cbf4178;
}



// FUNCTION 14666a1d6 FUN_14666a1d6 body=47 status=ok
// SIG undefined FUN_14666a1d6(void)

longlong FUN_14666a1d6(void)

{
  if (DAT_14cbf4180 == 0) {
    FUN_14000fc22(&DAT_14cbf4180,&PTR_FUN_14ba33108);
  }
  return DAT_14cbf4180;
}



// FUNCTION 14666a205 FUN_14666a205 body=47 status=ok
// SIG undefined FUN_14666a205(void)

longlong FUN_14666a205(void)

{
  if (DAT_14cbf4188 == 0) {
    FUN_14000fc22(&DAT_14cbf4188,&PTR_FUN_14ba331a0);
  }
  return DAT_14cbf4188;
}



// FUNCTION 14666a234 FUN_14666a234 body=47 status=ok
// SIG undefined FUN_14666a234(void)

longlong FUN_14666a234(void)

{
  if (DAT_14cbf4190 == 0) {
    FUN_14000fc22(&DAT_14cbf4190,&PTR_FUN_14ba33280);
  }
  return DAT_14cbf4190;
}



// FUNCTION 14666a263 FUN_14666a263 body=47 status=ok
// SIG undefined FUN_14666a263(void)

longlong FUN_14666a263(void)

{
  if (DAT_14cbf4198 == 0) {
    FUN_14000fc22(&DAT_14cbf4198,&PTR_FUN_14ba33320);
  }
  return DAT_14cbf4198;
}



// FUNCTION 14666a292 FUN_14666a292 body=34 status=ok
// SIG undefined FUN_14666a292(void)

void FUN_14666a292(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a90fd0();
  FUN_14069c8d6(uVar1,&PTR_s_GetDeepDVCIntensity_14ba33360,0xb);
  return;
}



// FUNCTION 14666a2b4 FUN_14666a2b4 body=35 status=ok
// SIG undefined FUN_14666a2b4(void)

void FUN_14666a2b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba33560;
  return;
}



// FUNCTION 14666a2d8 FUN_14666a2d8 body=192 status=ok
// SIG undefined FUN_14666a2d8(void)

void FUN_14666a2d8(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba338f0;
  puVar1[3] = &DAT_14cbf421c;
  puVar1[4] = FUN_1459d0cc8;
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



// FUNCTION 14666a39a FUN_14666a39a body=40 status=ok
// SIG undefined FUN_14666a39a(void)

undefined8 FUN_14666a39a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666a3c2 FUN_14666a3c2 body=93 status=ok
// SIG undefined FUN_14666a3c2(void)

void FUN_14666a3c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba338f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666a420 FUN_14666a420 body=34 status=ok
// SIG undefined FUN_14666a420(void)

undefined8 FUN_14666a420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666a442 FUN_14666a442 body=47 status=ok
// SIG undefined FUN_14666a442(void)

longlong FUN_14666a442(void)

{
  if (DAT_14cbf4228 == 0) {
    FUN_140f50038(&DAT_14cbf4228,&PTR_s__Script_XeSSCore_14ba339a0);
  }
  return DAT_14cbf4228;
}



// FUNCTION 14666a471 FUN_14666a471 body=44 status=ok
// SIG undefined FUN_14666a471(void)

void FUN_14666a471(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140da6ea8(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14ba33ae0;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 14666a49d FUN_14666a49d body=47 status=ok
// SIG undefined FUN_14666a49d(void)

longlong FUN_14666a49d(void)

{
  if (DAT_14cbf4240 == 0) {
    FUN_14073dd9a(&DAT_14cbf4240,&PTR_LAB_14ba33a98);
  }
  return DAT_14cbf4240;
}



// FUNCTION 14666a4cc FUN_14666a4cc body=346 status=ok
// SIG undefined FUN_14666a4cc(void)

undefined8 * FUN_14666a4cc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *puVar4 = &PTR_FUN_14ba346d0;
  puVar4[5] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba347b0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 == (undefined8 *)0x0) {
    local_30 = 0;
  }
  else {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    local_30 = *param_1;
    plVar5 = (longlong *)param_1[1];
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_28 = plVar5;
  FUN_141332b2e(&local_30);
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666a628 FUN_14666a628 body=231 status=ok
// SIG undefined FUN_14666a628(void)

void FUN_14666a628(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba347d0;
  local_28[3] = &DAT_14cbf42c8;
  local_28[4] = FUN_145b0899a;
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



// FUNCTION 14666a716 FUN_14666a716 body=40 status=ok
// SIG undefined FUN_14666a716(void)

undefined8 FUN_14666a716(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666a73e FUN_14666a73e body=29 status=ok
// SIG undefined FUN_14666a73e(void)

undefined8 FUN_14666a73e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666a75c FUN_14666a75c body=93 status=ok
// SIG undefined FUN_14666a75c(void)

void FUN_14666a75c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba347d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666a7ba FUN_14666a7ba body=93 status=ok
// SIG undefined FUN_14666a7ba(void)

void FUN_14666a7ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba34980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666a818 FUN_14666a818 body=192 status=ok
// SIG undefined FUN_14666a818(void)

void FUN_14666a818(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba34b50;
  puVar1[3] = &DAT_14cbf4464;
  puVar1[4] = FUN_1459a6904;
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



// FUNCTION 14666a8da FUN_14666a8da body=93 status=ok
// SIG undefined FUN_14666a8da(void)

void FUN_14666a8da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666a938 FUN_14666a938 body=34 status=ok
// SIG undefined FUN_14666a938(void)

undefined8 FUN_14666a938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666a95a FUN_14666a95a body=192 status=ok
// SIG undefined FUN_14666a95a(void)

void FUN_14666a95a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba34cb0;
  puVar1[3] = &DAT_14cbf4468;
  puVar1[4] = FUN_1459a692e;
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



// FUNCTION 14666aa1c FUN_14666aa1c body=93 status=ok
// SIG undefined FUN_14666aa1c(void)

void FUN_14666aa1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666aa7a FUN_14666aa7a body=34 status=ok
// SIG undefined FUN_14666aa7a(void)

undefined8 FUN_14666aa7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666aa9c FUN_14666aa9c body=192 status=ok
// SIG undefined FUN_14666aa9c(void)

void FUN_14666aa9c(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba34dd0;
  puVar1[3] = &DAT_14cbf447c;
  puVar1[4] = FUN_1459a6958;
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



// FUNCTION 14666ab5e FUN_14666ab5e body=93 status=ok
// SIG undefined FUN_14666ab5e(void)

void FUN_14666ab5e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666abbc FUN_14666abbc body=34 status=ok
// SIG undefined FUN_14666abbc(void)

undefined8 FUN_14666abbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666abde FUN_14666abde body=192 status=ok
// SIG undefined FUN_14666abde(void)

void FUN_14666abde(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba34f00;
  puVar1[3] = &DAT_14cbf4480;
  puVar1[4] = FUN_1459df318;
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



// FUNCTION 14666aca0 FUN_14666aca0 body=93 status=ok
// SIG undefined FUN_14666aca0(void)

void FUN_14666aca0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba34f00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666acfe FUN_14666acfe body=34 status=ok
// SIG undefined FUN_14666acfe(void)

undefined8 FUN_14666acfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14666ad20 FUN_14666ad20 body=47 status=ok
// SIG undefined FUN_14666ad20(void)

longlong FUN_14666ad20(void)

{
  if (DAT_14cbf4490 == 0) {
    FUN_140f50038(&DAT_14cbf4490,&PTR_s__Script_XeSSBlueprint_14ba34fe8);
  }
  return DAT_14cbf4490;
}



// FUNCTION 14666ad4f FUN_14666ad4f body=49 status=ok
// SIG undefined FUN_14666ad4f(void)

longlong FUN_14666ad4f(void)

{
  if (DAT_14cbf44a0 == 0) {
    FUN_1409ce572(&DAT_14cbf44a0,&PTR_FUN_14ba350e0);
  }
  return DAT_14cbf44a0;
}



// FUNCTION 14666ad80 FUN_14666ad80 body=49 status=ok
// SIG undefined FUN_14666ad80(void)

longlong FUN_14666ad80(void)

{
  if (DAT_14cbf44f0 == 0) {
    FUN_14073dd9a(&DAT_14cbf44f0,&PTR_LAB_14ba35890);
  }
  return DAT_14cbf44f0;
}



// FUNCTION 14666adb1 FUN_14666adb1 body=47 status=ok
// SIG undefined FUN_14666adb1(void)

longlong FUN_14666adb1(void)

{
  if (DAT_14cbf44b8 == 0) {
    FUN_14000fc22(&DAT_14cbf44b8,&PTR_FUN_14ba35208);
  }
  return DAT_14cbf44b8;
}



// FUNCTION 14666ade0 FUN_14666ade0 body=47 status=ok
// SIG undefined FUN_14666ade0(void)

longlong FUN_14666ade0(void)

{
  if (DAT_14cbf44c0 == 0) {
    FUN_14000fc22(&DAT_14cbf44c0,&PTR_FUN_14ba35338);
  }
  return DAT_14cbf44c0;
}



// FUNCTION 14666ae0f FUN_14666ae0f body=47 status=ok
// SIG undefined FUN_14666ae0f(void)

longlong FUN_14666ae0f(void)

{
  if (DAT_14cbf44c8 == 0) {
    FUN_14000fc22(&DAT_14cbf44c8,&PTR_FUN_14ba35428);
  }
  return DAT_14cbf44c8;
}



// FUNCTION 14666ae3e FUN_14666ae3e body=47 status=ok
// SIG undefined FUN_14666ae3e(void)

longlong FUN_14666ae3e(void)

{
  if (DAT_14cbf44d0 == 0) {
    FUN_14000fc22(&DAT_14cbf44d0,&PTR_FUN_14ba355b0);
  }
  return DAT_14cbf44d0;
}



// FUNCTION 14666ae6d FUN_14666ae6d body=47 status=ok
// SIG undefined FUN_14666ae6d(void)

longlong FUN_14666ae6d(void)

{
  if (DAT_14cbf44d8 == 0) {
    FUN_14000fc22(&DAT_14cbf44d8,&PTR_FUN_14ba35648);
  }
  return DAT_14cbf44d8;
}



// FUNCTION 14666ae9c FUN_14666ae9c body=47 status=ok
// SIG undefined FUN_14666ae9c(void)

longlong FUN_14666ae9c(void)

{
  if (DAT_14cbf44e0 == 0) {
    FUN_14000fc22(&DAT_14cbf44e0,&PTR_FUN_14ba35738);
  }
  return DAT_14cbf44e0;
}



// FUNCTION 14666aecc FUN_14666aecc body=34 status=ok
// SIG undefined FUN_14666aecc(void)

void FUN_14666aecc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a910bc();
  FUN_14069c8d6(uVar1,&PTR_s_GetDefaultXeSSQualityMode_14ba35780,6);
  return;
}



// FUNCTION 14666aeee FUN_14666aeee body=35 status=ok
// SIG undefined FUN_14666aeee(void)

void FUN_14666aeee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba358d0;
  return;
}



// FUNCTION 14666af12 FUN_14666af12 body=192 status=ok
// SIG undefined FUN_14666af12(void)

void FUN_14666af12(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba35eb0;
  puVar1[3] = &DAT_14cbf45b4;
  puVar1[4] = FUN_1459d0cf6;
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



// FUNCTION 14666afd4 FUN_14666afd4 body=40 status=ok
// SIG undefined FUN_14666afd4(void)

undefined8 FUN_14666afd4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666affc FUN_14666affc body=93 status=ok
// SIG undefined FUN_14666affc(void)

void FUN_14666affc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba35eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666b05a FUN_14666b05a body=34 status=ok
// SIG undefined FUN_14666b05a(void)

undefined8 FUN_14666b05a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666b07c FUN_14666b07c body=47 status=ok
// SIG undefined FUN_14666b07c(void)

longlong FUN_14666b07c(void)

{
  if (DAT_14cbf45c0 == 0) {
    FUN_140f50038(&DAT_14cbf45c0,&PTR_s__Script_XeLLBlueprint_14ba35f80);
  }
  return DAT_14cbf45c0;
}



// FUNCTION 14666b0ab FUN_14666b0ab body=49 status=ok
// SIG undefined FUN_14666b0ab(void)

longlong FUN_14666b0ab(void)

{
  if (DAT_14cbf45d0 == 0) {
    FUN_1409ce572(&DAT_14cbf45d0,&PTR_FUN_14ba36010);
  }
  return DAT_14cbf45d0;
}



// FUNCTION 14666b0dc FUN_14666b0dc body=49 status=ok
// SIG undefined FUN_14666b0dc(void)

longlong FUN_14666b0dc(void)

{
  if (DAT_14cbf4668 == 0) {
    FUN_14073dd9a(&DAT_14cbf4668,&PTR_LAB_14ba36c70);
  }
  return DAT_14cbf4668;
}



// FUNCTION 14666b10d FUN_14666b10d body=47 status=ok
// SIG undefined FUN_14666b10d(void)

longlong FUN_14666b10d(void)

{
  if (DAT_14cbf45e8 == 0) {
    FUN_14000fc22(&DAT_14cbf45e8,&PTR_FUN_14ba360a8);
  }
  return DAT_14cbf45e8;
}



// FUNCTION 14666b13c FUN_14666b13c body=47 status=ok
// SIG undefined FUN_14666b13c(void)

longlong FUN_14666b13c(void)

{
  if (DAT_14cbf45f0 == 0) {
    FUN_14000fc22(&DAT_14cbf45f0,&PTR_FUN_14ba36128);
  }
  return DAT_14cbf45f0;
}



// FUNCTION 14666b16b FUN_14666b16b body=47 status=ok
// SIG undefined FUN_14666b16b(void)

longlong FUN_14666b16b(void)

{
  if (DAT_14cbf45f8 == 0) {
    FUN_14000fc22(&DAT_14cbf45f8,&PTR_FUN_14ba361a8);
  }
  return DAT_14cbf45f8;
}



// FUNCTION 14666b19a FUN_14666b19a body=47 status=ok
// SIG undefined FUN_14666b19a(void)

longlong FUN_14666b19a(void)

{
  if (DAT_14cbf4600 == 0) {
    FUN_14000fc22(&DAT_14cbf4600,&PTR_FUN_14ba36240);
  }
  return DAT_14cbf4600;
}



// FUNCTION 14666b1c9 FUN_14666b1c9 body=47 status=ok
// SIG undefined FUN_14666b1c9(void)

longlong FUN_14666b1c9(void)

{
  if (DAT_14cbf4608 == 0) {
    FUN_14000fc22(&DAT_14cbf4608,&PTR_FUN_14ba362e0);
  }
  return DAT_14cbf4608;
}



// FUNCTION 14666b1f8 FUN_14666b1f8 body=47 status=ok
// SIG undefined FUN_14666b1f8(void)

longlong FUN_14666b1f8(void)

{
  if (DAT_14cbf4610 == 0) {
    FUN_14000fc22(&DAT_14cbf4610,&PTR_FUN_14ba36378);
  }
  return DAT_14cbf4610;
}



// FUNCTION 14666b227 FUN_14666b227 body=47 status=ok
// SIG undefined FUN_14666b227(void)

longlong FUN_14666b227(void)

{
  if (DAT_14cbf4618 == 0) {
    FUN_14000fc22(&DAT_14cbf4618,&PTR_FUN_14ba363f8);
  }
  return DAT_14cbf4618;
}



// FUNCTION 14666b256 FUN_14666b256 body=47 status=ok
// SIG undefined FUN_14666b256(void)

longlong FUN_14666b256(void)

{
  if (DAT_14cbf4620 == 0) {
    FUN_14000fc22(&DAT_14cbf4620,&PTR_FUN_14ba36498);
  }
  return DAT_14cbf4620;
}



// FUNCTION 14666b285 FUN_14666b285 body=47 status=ok
// SIG undefined FUN_14666b285(void)

longlong FUN_14666b285(void)

{
  if (DAT_14cbf4628 == 0) {
    FUN_14000fc22(&DAT_14cbf4628,&PTR_FUN_14ba36538);
  }
  return DAT_14cbf4628;
}



// FUNCTION 14666b2b4 FUN_14666b2b4 body=47 status=ok
// SIG undefined FUN_14666b2b4(void)

longlong FUN_14666b2b4(void)

{
  if (DAT_14cbf4630 == 0) {
    FUN_14000fc22(&DAT_14cbf4630,&PTR_FUN_14ba36660);
  }
  return DAT_14cbf4630;
}



// FUNCTION 14666b2e3 FUN_14666b2e3 body=47 status=ok
// SIG undefined FUN_14666b2e3(void)

longlong FUN_14666b2e3(void)

{
  if (DAT_14cbf4638 == 0) {
    FUN_14000fc22(&DAT_14cbf4638,&PTR_FUN_14ba36740);
  }
  return DAT_14cbf4638;
}



// FUNCTION 14666b312 FUN_14666b312 body=47 status=ok
// SIG undefined FUN_14666b312(void)

longlong FUN_14666b312(void)

{
  if (DAT_14cbf4648 == 0) {
    FUN_14000fc22(&DAT_14cbf4648,&PTR_FUN_14ba36870);
  }
  return DAT_14cbf4648;
}



// FUNCTION 14666b341 FUN_14666b341 body=47 status=ok
// SIG undefined FUN_14666b341(void)

longlong FUN_14666b341(void)

{
  if (DAT_14cbf4650 == 0) {
    FUN_14000fc22(&DAT_14cbf4650,&PTR_FUN_14ba36918);
  }
  return DAT_14cbf4650;
}



// FUNCTION 14666b370 FUN_14666b370 body=47 status=ok
// SIG undefined FUN_14666b370(void)

longlong FUN_14666b370(void)

{
  if (DAT_14cbf4658 == 0) {
    FUN_14000fc22(&DAT_14cbf4658,&PTR_FUN_14ba36a00);
  }
  return DAT_14cbf4658;
}



// FUNCTION 14666b3a0 FUN_14666b3a0 body=34 status=ok
// SIG undefined FUN_14666b3a0(void)

void FUN_14666b3a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a911a8();
  FUN_14069c8d6(uVar1,&PTR_s_GetFlashIndicatorEnabled_14ba36a40,0xf);
  return;
}



// FUNCTION 14666b3c2 FUN_14666b3c2 body=35 status=ok
// SIG undefined FUN_14666b3c2(void)

void FUN_14666b3c2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba36cb0;
  return;
}



// FUNCTION 14666b3e6 FUN_14666b3e6 body=192 status=ok
// SIG undefined FUN_14666b3e6(void)

void FUN_14666b3e6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba37060;
  puVar1[3] = &DAT_14cbf468c;
  puVar1[4] = FUN_1459d0d24;
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



// FUNCTION 14666b4a8 FUN_14666b4a8 body=40 status=ok
// SIG undefined FUN_14666b4a8(void)

undefined8 FUN_14666b4a8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666b4d0 FUN_14666b4d0 body=93 status=ok
// SIG undefined FUN_14666b4d0(void)

void FUN_14666b4d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba37060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666b52e FUN_14666b52e body=34 status=ok
// SIG undefined FUN_14666b52e(void)

undefined8 FUN_14666b52e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666b550 FUN_14666b550 body=47 status=ok
// SIG undefined FUN_14666b550(void)

longlong FUN_14666b550(void)

{
  if (DAT_14cbf4698 == 0) {
    FUN_140f50038(&DAT_14cbf4698,&PTR_s__Script_GbxElasticTelemetry_14ba37130);
  }
  return DAT_14cbf4698;
}



// FUNCTION 14666b57f FUN_14666b57f body=49 status=ok
// SIG undefined FUN_14666b57f(void)

longlong FUN_14666b57f(void)

{
  if (DAT_14cbf46e8 == 0) {
    FUN_14073dd9a(&DAT_14cbf46e8,&PTR_LAB_14ba37980);
  }
  return DAT_14cbf46e8;
}



// FUNCTION 14666b5b0 FUN_14666b5b0 body=47 status=ok
// SIG undefined FUN_14666b5b0(void)

longlong FUN_14666b5b0(void)

{
  if (DAT_14cbf46a8 == 0) {
    FUN_14000fc22(&DAT_14cbf46a8,&PTR_FUN_14ba37210);
  }
  return DAT_14cbf46a8;
}



// FUNCTION 14666b5df FUN_14666b5df body=47 status=ok
// SIG undefined FUN_14666b5df(void)

longlong FUN_14666b5df(void)

{
  if (DAT_14cbf46b0 == 0) {
    FUN_14000fc22(&DAT_14cbf46b0,&PTR_FUN_14ba37338);
  }
  return DAT_14cbf46b0;
}



// FUNCTION 14666b60e FUN_14666b60e body=47 status=ok
// SIG undefined FUN_14666b60e(void)

longlong FUN_14666b60e(void)

{
  if (DAT_14cbf46b8 == 0) {
    FUN_14000fc22(&DAT_14cbf46b8,&PTR_FUN_14ba37428);
  }
  return DAT_14cbf46b8;
}



// FUNCTION 14666b63d FUN_14666b63d body=47 status=ok
// SIG undefined FUN_14666b63d(void)

longlong FUN_14666b63d(void)

{
  if (DAT_14cbf46c0 == 0) {
    FUN_14000fc22(&DAT_14cbf46c0,&PTR_FUN_14ba37510);
  }
  return DAT_14cbf46c0;
}



// FUNCTION 14666b66c FUN_14666b66c body=47 status=ok
// SIG undefined FUN_14666b66c(void)

longlong FUN_14666b66c(void)

{
  if (DAT_14cbf46c8 == 0) {
    FUN_14000fc22(&DAT_14cbf46c8,&PTR_FUN_14ba37608);
  }
  return DAT_14cbf46c8;
}



// FUNCTION 14666b69b FUN_14666b69b body=47 status=ok
// SIG undefined FUN_14666b69b(void)

longlong FUN_14666b69b(void)

{
  if (DAT_14cbf46d0 == 0) {
    FUN_14000fc22(&DAT_14cbf46d0,&PTR_FUN_14ba376f8);
  }
  return DAT_14cbf46d0;
}



// FUNCTION 14666b6ca FUN_14666b6ca body=47 status=ok
// SIG undefined FUN_14666b6ca(void)

longlong FUN_14666b6ca(void)

{
  if (DAT_14cbf46d8 == 0) {
    FUN_14000fc22(&DAT_14cbf46d8,&PTR_FUN_14ba377e8);
  }
  return DAT_14cbf46d8;
}



// FUNCTION 14666b6fa FUN_14666b6fa body=34 status=ok
// SIG undefined FUN_14666b6fa(void)

void FUN_14666b6fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a91294();
  FUN_14069c8d6(uVar1,&PTR_s_AreTelemetryRequestsPending_14ba37830,7);
  return;
}



// FUNCTION 14666b71c FUN_14666b71c body=35 status=ok
// SIG undefined FUN_14666b71c(void)

void FUN_14666b71c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba379c0;
  return;
}



// FUNCTION 14666b73f FUN_14666b73f body=59 status=ok
// SIG undefined FUN_14666b73f(void)

void FUN_14666b73f(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140da6ea8(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14ba37f90;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}


