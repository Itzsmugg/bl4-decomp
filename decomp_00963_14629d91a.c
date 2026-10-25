// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14629d91a FUN_14629d91a body=93 status=ok
// SIG undefined FUN_14629d91a(void)

void FUN_14629d91a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a158510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629d978 FUN_14629d978 body=29 status=ok
// SIG undefined FUN_14629d978(void)

undefined8 FUN_14629d978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14629d996 FUN_14629d996 body=29 status=ok
// SIG undefined FUN_14629d996(void)

undefined8 FUN_14629d996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14629d9b4 FUN_14629d9b4 body=93 status=ok
// SIG undefined FUN_14629d9b4(void)

void FUN_14629d9b4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1587a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629da12 FUN_14629da12 body=29 status=ok
// SIG undefined FUN_14629da12(void)

undefined8 FUN_14629da12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14629da2f FUN_14629da2f body=47 status=ok
// SIG undefined FUN_14629da2f(void)

longlong FUN_14629da2f(void)

{
  if (DAT_14c99fa28 == 0) {
    FUN_14086a14e(&DAT_14c99fa28,&PTR_FUN_14a158ba8);
  }
  return DAT_14c99fa28;
}



// FUNCTION 14629da5e FUN_14629da5e body=43 status=ok
// SIG undefined FUN_14629da5e(void)

void FUN_14629da5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a15b380;
  return;
}



// FUNCTION 14629da8a FUN_14629da8a body=55 status=ok
// SIG undefined FUN_14629da8a(void)

void FUN_14629da8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fa48 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fa48 = FUN_140002ddd(FUN_14629dac1,uVar1,L"EngineServicePong");
  }
  return;
}



// FUNCTION 14629dac1 FUN_14629dac1 body=47 status=ok
// SIG undefined FUN_14629dac1(void)

longlong FUN_14629dac1(void)

{
  if (DAT_14c99fa40 == 0) {
    FUN_14086a14e(&DAT_14c99fa40,&PTR_FUN_14a158e70);
  }
  return DAT_14c99fa40;
}



// FUNCTION 14629daf0 FUN_14629daf0 body=43 status=ok
// SIG undefined FUN_14629daf0(void)

void FUN_14629daf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a15b4e0;
  return;
}



// FUNCTION 14629db1c FUN_14629db1c body=55 status=ok
// SIG undefined FUN_14629db1c(void)

void FUN_14629db1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fa60 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fa60 = FUN_140002ddd(FUN_14629db53,uVar1,L"EngineServiceAuthDeny");
  }
  return;
}



// FUNCTION 14629db53 FUN_14629db53 body=47 status=ok
// SIG undefined FUN_14629db53(void)

longlong FUN_14629db53(void)

{
  if (DAT_14c99fa58 == 0) {
    FUN_14086a14e(&DAT_14c99fa58,&PTR_FUN_14a158f88);
  }
  return DAT_14c99fa58;
}



// FUNCTION 14629db82 FUN_14629db82 body=43 status=ok
// SIG undefined FUN_14629db82(void)

void FUN_14629db82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a15b640;
  return;
}



// FUNCTION 14629dbae FUN_14629dbae body=55 status=ok
// SIG undefined FUN_14629dbae(void)

void FUN_14629dbae(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fa78 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fa78 = FUN_140002ddd(FUN_14629dbe5,uVar1,L"EngineServiceAuthGrant");
  }
  return;
}



// FUNCTION 14629dbe5 FUN_14629dbe5 body=47 status=ok
// SIG undefined FUN_14629dbe5(void)

longlong FUN_14629dbe5(void)

{
  if (DAT_14c99fa70 == 0) {
    FUN_14086a14e(&DAT_14c99fa70,&PTR_FUN_14a159098);
  }
  return DAT_14c99fa70;
}



// FUNCTION 14629dc14 FUN_14629dc14 body=43 status=ok
// SIG undefined FUN_14629dc14(void)

void FUN_14629dc14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a15b7a0;
  return;
}



// FUNCTION 14629dc40 FUN_14629dc40 body=55 status=ok
// SIG undefined FUN_14629dc40(void)

void FUN_14629dc40(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fa90 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fa90 = FUN_140002ddd(FUN_14629dc77,uVar1,L"EngineServiceExecuteCommand");
  }
  return;
}



// FUNCTION 14629dc77 FUN_14629dc77 body=47 status=ok
// SIG undefined FUN_14629dc77(void)

longlong FUN_14629dc77(void)

{
  if (DAT_14c99fa88 == 0) {
    FUN_14086a14e(&DAT_14c99fa88,&PTR_FUN_14a1591b0);
  }
  return DAT_14c99fa88;
}



// FUNCTION 14629dca6 FUN_14629dca6 body=43 status=ok
// SIG undefined FUN_14629dca6(void)

void FUN_14629dca6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a15b900;
  return;
}



// FUNCTION 14629dcd2 FUN_14629dcd2 body=55 status=ok
// SIG undefined FUN_14629dcd2(void)

void FUN_14629dcd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99faa8 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99faa8 = FUN_140002ddd(FUN_14629dd09,uVar1,L"EngineServiceTerminate");
  }
  return;
}



// FUNCTION 14629dd09 FUN_14629dd09 body=47 status=ok
// SIG undefined FUN_14629dd09(void)

longlong FUN_14629dd09(void)

{
  if (DAT_14c99faa0 == 0) {
    FUN_14086a14e(&DAT_14c99faa0,&PTR_FUN_14a159270);
  }
  return DAT_14c99faa0;
}



// FUNCTION 14629dd38 FUN_14629dd38 body=43 status=ok
// SIG undefined FUN_14629dd38(void)

void FUN_14629dd38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a15ba60;
  return;
}



// FUNCTION 14629dd64 FUN_14629dd64 body=55 status=ok
// SIG undefined FUN_14629dd64(void)

void FUN_14629dd64(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fac0 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fac0 = FUN_140002ddd(FUN_14629dd9b,uVar1,L"EngineServiceNotification");
  }
  return;
}



// FUNCTION 14629dd9b FUN_14629dd9b body=47 status=ok
// SIG undefined FUN_14629dd9b(void)

longlong FUN_14629dd9b(void)

{
  if (DAT_14c99fab8 == 0) {
    FUN_14086a14e(&DAT_14c99fab8,&PTR_FUN_14a1593a0);
  }
  return DAT_14c99fab8;
}



// FUNCTION 14629ddca FUN_14629ddca body=43 status=ok
// SIG undefined FUN_14629ddca(void)

void FUN_14629ddca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a15bbc0;
  return;
}



// FUNCTION 14629ddf5 FUN_14629ddf5 body=47 status=ok
// SIG undefined FUN_14629ddf5(void)

longlong FUN_14629ddf5(void)

{
  if (DAT_14c99fad0 == 0) {
    FUN_14086a14e(&DAT_14c99fad0,&PTR_FUN_14a159540);
  }
  return DAT_14c99fad0;
}



// FUNCTION 14629de24 FUN_14629de24 body=43 status=ok
// SIG undefined FUN_14629de24(void)

void FUN_14629de24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a15bd20;
  return;
}



// FUNCTION 14629de50 FUN_14629de50 body=55 status=ok
// SIG undefined FUN_14629de50(void)

void FUN_14629de50(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99faf0 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99faf0 = FUN_140002ddd(FUN_14629de87,uVar1,L"TraceControlStatus");
  }
  return;
}



// FUNCTION 14629de87 FUN_14629de87 body=47 status=ok
// SIG undefined FUN_14629de87(void)

longlong FUN_14629de87(void)

{
  if (DAT_14c99fae8 == 0) {
    FUN_14086a14e(&DAT_14c99fae8,&PTR_FUN_14a159a68);
  }
  return DAT_14c99fae8;
}



// FUNCTION 14629deb6 FUN_14629deb6 body=43 status=ok
// SIG undefined FUN_14629deb6(void)

void FUN_14629deb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14a15be80;
  return;
}



// FUNCTION 14629dee1 FUN_14629dee1 body=47 status=ok
// SIG undefined FUN_14629dee1(void)

longlong FUN_14629dee1(void)

{
  if (DAT_14c99fb00 == 0) {
    FUN_14086a14e(&DAT_14c99fb00,&PTR_FUN_14a159af0);
  }
  return DAT_14c99fb00;
}



// FUNCTION 14629df10 FUN_14629df10 body=43 status=ok
// SIG undefined FUN_14629df10(void)

void FUN_14629df10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a15bfe0;
  return;
}



// FUNCTION 14629df3c FUN_14629df3c body=55 status=ok
// SIG undefined FUN_14629df3c(void)

void FUN_14629df3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fb20 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fb20 = FUN_140002ddd(FUN_14629df73,uVar1,L"TraceChannelPreset");
  }
  return;
}



// FUNCTION 14629df73 FUN_14629df73 body=47 status=ok
// SIG undefined FUN_14629df73(void)

longlong FUN_14629df73(void)

{
  if (DAT_14c99fb18 == 0) {
    FUN_14086a14e(&DAT_14c99fb18,&PTR_FUN_14a159c40);
  }
  return DAT_14c99fb18;
}



// FUNCTION 14629dfa2 FUN_14629dfa2 body=43 status=ok
// SIG undefined FUN_14629dfa2(void)

void FUN_14629dfa2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a15c140;
  return;
}



// FUNCTION 14629dfce FUN_14629dfce body=55 status=ok
// SIG undefined FUN_14629dfce(void)

void FUN_14629dfce(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fb38 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fb38 = FUN_140002ddd(FUN_14629e005,uVar1,L"TraceControlSettings");
  }
  return;
}



// FUNCTION 14629e005 FUN_14629e005 body=47 status=ok
// SIG undefined FUN_14629e005(void)

longlong FUN_14629e005(void)

{
  if (DAT_14c99fb30 == 0) {
    FUN_14086a14e(&DAT_14c99fb30,&PTR_FUN_14a159e60);
  }
  return DAT_14c99fb30;
}



// FUNCTION 14629e034 FUN_14629e034 body=43 status=ok
// SIG undefined FUN_14629e034(void)

void FUN_14629e034(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a15c2a0;
  return;
}



// FUNCTION 14629e05f FUN_14629e05f body=47 status=ok
// SIG undefined FUN_14629e05f(void)

longlong FUN_14629e05f(void)

{
  if (DAT_14c99fb48 == 0) {
    FUN_14086a14e(&DAT_14c99fb48,&PTR_FUN_14a159f40);
  }
  return DAT_14c99fb48;
}



// FUNCTION 14629e08e FUN_14629e08e body=43 status=ok
// SIG undefined FUN_14629e08e(void)

void FUN_14629e08e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14a15c400;
  return;
}



// FUNCTION 14629e0ba FUN_14629e0ba body=55 status=ok
// SIG undefined FUN_14629e0ba(void)

void FUN_14629e0ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fb68 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fb68 = FUN_140002ddd(FUN_14629e0f1,uVar1,L"TraceControlChannelsDesc");
  }
  return;
}



// FUNCTION 14629e0f1 FUN_14629e0f1 body=47 status=ok
// SIG undefined FUN_14629e0f1(void)

longlong FUN_14629e0f1(void)

{
  if (DAT_14c99fb60 == 0) {
    FUN_14086a14e(&DAT_14c99fb60,&PTR_FUN_14a15a200);
  }
  return DAT_14c99fb60;
}



// FUNCTION 14629e120 FUN_14629e120 body=43 status=ok
// SIG undefined FUN_14629e120(void)

void FUN_14629e120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14a15c560;
  return;
}



// FUNCTION 14629e14c FUN_14629e14c body=55 status=ok
// SIG undefined FUN_14629e14c(void)

void FUN_14629e14c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fb80 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fb80 = FUN_140002ddd(FUN_14629e183,uVar1,L"TraceControlChannelsStatus");
  }
  return;
}



// FUNCTION 14629e183 FUN_14629e183 body=47 status=ok
// SIG undefined FUN_14629e183(void)

longlong FUN_14629e183(void)

{
  if (DAT_14c99fb78 == 0) {
    FUN_14086a14e(&DAT_14c99fb78,&PTR_FUN_14a15a320);
  }
  return DAT_14c99fb78;
}



// FUNCTION 14629e1b2 FUN_14629e1b2 body=43 status=ok
// SIG undefined FUN_14629e1b2(void)

void FUN_14629e1b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a15c6c0;
  return;
}



// FUNCTION 14629e1dd FUN_14629e1dd body=47 status=ok
// SIG undefined FUN_14629e1dd(void)

longlong FUN_14629e1dd(void)

{
  if (DAT_14c99fb90 == 0) {
    FUN_14086a14e(&DAT_14c99fb90,&PTR_FUN_14a15a4d8);
  }
  return DAT_14c99fb90;
}



// FUNCTION 14629e20c FUN_14629e20c body=43 status=ok
// SIG undefined FUN_14629e20c(void)

void FUN_14629e20c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a15c820;
  return;
}



// FUNCTION 14629e237 FUN_14629e237 body=47 status=ok
// SIG undefined FUN_14629e237(void)

longlong FUN_14629e237(void)

{
  if (DAT_14c99fba8 == 0) {
    FUN_14086a14e(&DAT_14c99fba8,&PTR_FUN_14a15a600);
  }
  return DAT_14c99fba8;
}



// FUNCTION 14629e266 FUN_14629e266 body=43 status=ok
// SIG undefined FUN_14629e266(void)

void FUN_14629e266(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14a15c980;
  return;
}



// FUNCTION 14629e292 FUN_14629e292 body=55 status=ok
// SIG undefined FUN_14629e292(void)

void FUN_14629e292(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fbc8 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fbc8 = FUN_140002ddd(FUN_14629e2c9,uVar1,L"TraceControlDiscovery");
  }
  return;
}



// FUNCTION 14629e2c9 FUN_14629e2c9 body=47 status=ok
// SIG undefined FUN_14629e2c9(void)

longlong FUN_14629e2c9(void)

{
  if (DAT_14c99fbc0 == 0) {
    FUN_14086a14e(&DAT_14c99fbc0,&PTR_FUN_14a15a718);
  }
  return DAT_14c99fbc0;
}



// FUNCTION 14629e2f8 FUN_14629e2f8 body=43 status=ok
// SIG undefined FUN_14629e2f8(void)

void FUN_14629e2f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14a15cae0;
  return;
}



// FUNCTION 14629e323 FUN_14629e323 body=47 status=ok
// SIG undefined FUN_14629e323(void)

longlong FUN_14629e323(void)

{
  if (DAT_14c99fbd8 == 0) {
    FUN_14086a14e(&DAT_14c99fbd8,&PTR_FUN_14a15a788);
  }
  return DAT_14c99fbd8;
}



// FUNCTION 14629e352 FUN_14629e352 body=43 status=ok
// SIG undefined FUN_14629e352(void)

void FUN_14629e352(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a15cc40;
  return;
}



// FUNCTION 14629e37e FUN_14629e37e body=55 status=ok
// SIG undefined FUN_14629e37e(void)

void FUN_14629e37e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fbf8 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fbf8 = FUN_140002ddd(FUN_14629e3b5,uVar1,L"TraceControlStartCommon");
  }
  return;
}



// FUNCTION 14629e3b5 FUN_14629e3b5 body=47 status=ok
// SIG undefined FUN_14629e3b5(void)

longlong FUN_14629e3b5(void)

{
  if (DAT_14c99fbf0 == 0) {
    FUN_14086a14e(&DAT_14c99fbf0,&PTR_FUN_14a15a8a8);
  }
  return DAT_14c99fbf0;
}



// FUNCTION 14629e3e4 FUN_14629e3e4 body=43 status=ok
// SIG undefined FUN_14629e3e4(void)

void FUN_14629e3e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a15cda0;
  return;
}



// FUNCTION 14629e40f FUN_14629e40f body=47 status=ok
// SIG undefined FUN_14629e40f(void)

longlong FUN_14629e40f(void)

{
  if (DAT_14c99fc08 == 0) {
    FUN_14086a14e(&DAT_14c99fc08,&PTR_FUN_14a15a960);
  }
  return DAT_14c99fc08;
}



// FUNCTION 14629e43e FUN_14629e43e body=43 status=ok
// SIG undefined FUN_14629e43e(void)

void FUN_14629e43e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a15cf00;
  return;
}



// FUNCTION 14629e469 FUN_14629e469 body=47 status=ok
// SIG undefined FUN_14629e469(void)

longlong FUN_14629e469(void)

{
  if (DAT_14c99fc20 == 0) {
    FUN_14086a14e(&DAT_14c99fc20,&PTR_FUN_14a15aa78);
  }
  return DAT_14c99fc20;
}



// FUNCTION 14629e498 FUN_14629e498 body=43 status=ok
// SIG undefined FUN_14629e498(void)

void FUN_14629e498(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a15d060;
  return;
}



// FUNCTION 14629e4c3 FUN_14629e4c3 body=47 status=ok
// SIG undefined FUN_14629e4c3(void)

longlong FUN_14629e4c3(void)

{
  if (DAT_14c99fc38 == 0) {
    FUN_14086a14e(&DAT_14c99fc38,&PTR_FUN_14a15aae8);
  }
  return DAT_14c99fc38;
}



// FUNCTION 14629e4f2 FUN_14629e4f2 body=43 status=ok
// SIG undefined FUN_14629e4f2(void)

void FUN_14629e4f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a15d1c0;
  return;
}



// FUNCTION 14629e51d FUN_14629e51d body=47 status=ok
// SIG undefined FUN_14629e51d(void)

longlong FUN_14629e51d(void)

{
  if (DAT_14c99fc50 == 0) {
    FUN_14086a14e(&DAT_14c99fc50,&PTR_FUN_14a15ab60);
  }
  return DAT_14c99fc50;
}



// FUNCTION 14629e54c FUN_14629e54c body=43 status=ok
// SIG undefined FUN_14629e54c(void)

void FUN_14629e54c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a15d320;
  return;
}



// FUNCTION 14629e577 FUN_14629e577 body=47 status=ok
// SIG undefined FUN_14629e577(void)

longlong FUN_14629e577(void)

{
  if (DAT_14c99fc68 == 0) {
    FUN_14086a14e(&DAT_14c99fc68,&PTR_FUN_14a15ac30);
  }
  return DAT_14c99fc68;
}



// FUNCTION 14629e5a6 FUN_14629e5a6 body=43 status=ok
// SIG undefined FUN_14629e5a6(void)

void FUN_14629e5a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a15d490;
  return;
}



// FUNCTION 14629e5d2 FUN_14629e5d2 body=55 status=ok
// SIG undefined FUN_14629e5d2(void)

void FUN_14629e5d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fc88 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fc88 = FUN_140002ddd(FUN_14629e609,uVar1,L"TraceControlSnapshotFile");
  }
  return;
}



// FUNCTION 14629e609 FUN_14629e609 body=47 status=ok
// SIG undefined FUN_14629e609(void)

longlong FUN_14629e609(void)

{
  if (DAT_14c99fc80 == 0) {
    FUN_14086a14e(&DAT_14c99fc80,&PTR_FUN_14a15ad00);
  }
  return DAT_14c99fc80;
}



// FUNCTION 14629e638 FUN_14629e638 body=43 status=ok
// SIG undefined FUN_14629e638(void)

void FUN_14629e638(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a15d5f0;
  return;
}



// FUNCTION 14629e663 FUN_14629e663 body=47 status=ok
// SIG undefined FUN_14629e663(void)

longlong FUN_14629e663(void)

{
  if (DAT_14c99fc98 == 0) {
    FUN_14086a14e(&DAT_14c99fc98,&PTR_FUN_14a15adc0);
  }
  return DAT_14c99fc98;
}



// FUNCTION 14629e692 FUN_14629e692 body=43 status=ok
// SIG undefined FUN_14629e692(void)

void FUN_14629e692(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a15d750;
  return;
}



// FUNCTION 14629e6be FUN_14629e6be body=55 status=ok
// SIG undefined FUN_14629e6be(void)

void FUN_14629e6be(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99fcb8 == 0) {
    uVar1 = FUN_140e97ede();
    DAT_14c99fcb8 = FUN_140002ddd(FUN_14629e6f5,uVar1,L"TraceControlScreenshot");
  }
  return;
}



// FUNCTION 14629e6f5 FUN_14629e6f5 body=47 status=ok
// SIG undefined FUN_14629e6f5(void)

longlong FUN_14629e6f5(void)

{
  if (DAT_14c99fcb0 == 0) {
    FUN_14086a14e(&DAT_14c99fcb0,&PTR_FUN_14a15aed8);
  }
  return DAT_14c99fcb0;
}



// FUNCTION 14629e724 FUN_14629e724 body=43 status=ok
// SIG undefined FUN_14629e724(void)

void FUN_14629e724(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a15d8b0;
  return;
}



// FUNCTION 14629e74f FUN_14629e74f body=47 status=ok
// SIG undefined FUN_14629e74f(void)

longlong FUN_14629e74f(void)

{
  if (DAT_14c99fcc8 == 0) {
    FUN_14086a14e(&DAT_14c99fcc8,&PTR_FUN_14a15afb8);
  }
  return DAT_14c99fcc8;
}



// FUNCTION 14629e77e FUN_14629e77e body=43 status=ok
// SIG undefined FUN_14629e77e(void)

void FUN_14629e77e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a15da20;
  return;
}



// FUNCTION 14629e7aa FUN_14629e7aa body=192 status=ok
// SIG undefined FUN_14629e7aa(void)

void FUN_14629e7aa(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a15db90;
  puVar1[3] = &DAT_14c99fce0;
  puVar1[4] = FUN_147078eda;
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



// FUNCTION 14629e86c FUN_14629e86c body=34 status=ok
// SIG undefined FUN_14629e86c(void)

undefined8 FUN_14629e86c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e88e FUN_14629e88e body=34 status=ok
// SIG undefined FUN_14629e88e(void)

undefined8 FUN_14629e88e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e8b0 FUN_14629e8b0 body=34 status=ok
// SIG undefined FUN_14629e8b0(void)

undefined8 FUN_14629e8b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e8d2 FUN_14629e8d2 body=34 status=ok
// SIG undefined FUN_14629e8d2(void)

undefined8 FUN_14629e8d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e8f4 FUN_14629e8f4 body=34 status=ok
// SIG undefined FUN_14629e8f4(void)

undefined8 FUN_14629e8f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e916 FUN_14629e916 body=34 status=ok
// SIG undefined FUN_14629e916(void)

undefined8 FUN_14629e916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e938 FUN_14629e938 body=34 status=ok
// SIG undefined FUN_14629e938(void)

undefined8 FUN_14629e938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e95a FUN_14629e95a body=34 status=ok
// SIG undefined FUN_14629e95a(void)

undefined8 FUN_14629e95a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e97c FUN_14629e97c body=34 status=ok
// SIG undefined FUN_14629e97c(void)

undefined8 FUN_14629e97c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e99e FUN_14629e99e body=34 status=ok
// SIG undefined FUN_14629e99e(void)

undefined8 FUN_14629e99e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e9c0 FUN_14629e9c0 body=34 status=ok
// SIG undefined FUN_14629e9c0(void)

undefined8 FUN_14629e9c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629e9e2 FUN_14629e9e2 body=34 status=ok
// SIG undefined FUN_14629e9e2(void)

undefined8 FUN_14629e9e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ea04 FUN_14629ea04 body=34 status=ok
// SIG undefined FUN_14629ea04(void)

undefined8 FUN_14629ea04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ea26 FUN_14629ea26 body=34 status=ok
// SIG undefined FUN_14629ea26(void)

undefined8 FUN_14629ea26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ea48 FUN_14629ea48 body=34 status=ok
// SIG undefined FUN_14629ea48(void)

undefined8 FUN_14629ea48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ea6a FUN_14629ea6a body=34 status=ok
// SIG undefined FUN_14629ea6a(void)

undefined8 FUN_14629ea6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ea8c FUN_14629ea8c body=34 status=ok
// SIG undefined FUN_14629ea8c(void)

undefined8 FUN_14629ea8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629eaae FUN_14629eaae body=34 status=ok
// SIG undefined FUN_14629eaae(void)

undefined8 FUN_14629eaae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ead0 FUN_14629ead0 body=34 status=ok
// SIG undefined FUN_14629ead0(void)

undefined8 FUN_14629ead0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629eaf2 FUN_14629eaf2 body=34 status=ok
// SIG undefined FUN_14629eaf2(void)

undefined8 FUN_14629eaf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629eb14 FUN_14629eb14 body=34 status=ok
// SIG undefined FUN_14629eb14(void)

undefined8 FUN_14629eb14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629eb36 FUN_14629eb36 body=34 status=ok
// SIG undefined FUN_14629eb36(void)

undefined8 FUN_14629eb36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629eb58 FUN_14629eb58 body=34 status=ok
// SIG undefined FUN_14629eb58(void)

undefined8 FUN_14629eb58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629eb7a FUN_14629eb7a body=34 status=ok
// SIG undefined FUN_14629eb7a(void)

undefined8 FUN_14629eb7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629eb9c FUN_14629eb9c body=34 status=ok
// SIG undefined FUN_14629eb9c(void)

undefined8 FUN_14629eb9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ebbe FUN_14629ebbe body=34 status=ok
// SIG undefined FUN_14629ebbe(void)

undefined8 FUN_14629ebbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ebe0 FUN_14629ebe0 body=34 status=ok
// SIG undefined FUN_14629ebe0(void)

undefined8 FUN_14629ebe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ec02 FUN_14629ec02 body=34 status=ok
// SIG undefined FUN_14629ec02(void)

undefined8 FUN_14629ec02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ec24 FUN_14629ec24 body=34 status=ok
// SIG undefined FUN_14629ec24(void)

undefined8 FUN_14629ec24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629ec46 FUN_14629ec46 body=93 status=ok
// SIG undefined FUN_14629ec46(void)

void FUN_14629ec46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a15db90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629eca4 FUN_14629eca4 body=192 status=ok
// SIG undefined FUN_14629eca4(void)

void FUN_14629eca4(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a15dd30;
  puVar1[3] = &DAT_14c99fce4;
  puVar1[4] = FUN_147079514;
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



// FUNCTION 14629ed66 FUN_14629ed66 body=93 status=ok
// SIG undefined FUN_14629ed66(void)

void FUN_14629ed66(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a15dd30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629edc3 FUN_14629edc3 body=47 status=ok
// SIG undefined FUN_14629edc3(void)

longlong FUN_14629edc3(void)

{
  if (DAT_14c99fcf0 == 0) {
    FUN_140f50038(&DAT_14c99fcf0,&PTR_s__Script_PacketHandler_14a15de08);
  }
  return DAT_14c99fcf0;
}



// FUNCTION 14629edf2 FUN_14629edf2 body=35 status=ok
// SIG undefined FUN_14629edf2(void)

void FUN_14629edf2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a15df00;
  return;
}



// FUNCTION 14629ee15 FUN_14629ee15 body=47 status=ok
// SIG undefined FUN_14629ee15(void)

longlong FUN_14629ee15(void)

{
  if (DAT_14c99fd08 == 0) {
    FUN_14073dd9a(&DAT_14c99fd08,&PTR_LAB_14a15deb8);
  }
  return DAT_14c99fd08;
}



// FUNCTION 14629ee44 FUN_14629ee44 body=192 status=ok
// SIG undefined FUN_14629ee44(void)

void FUN_14629ee44(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a15ea90;
  puVar1[3] = &DAT_14c99fd18;
  puVar1[4] = FUN_1459ceb1e;
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



// FUNCTION 14629ef06 FUN_14629ef06 body=113 status=ok
// SIG undefined FUN_14629ef06(void)

void FUN_14629ef06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99fd30) {
    FUN_144b3d300(&DAT_14c99fd30);
    if (DAT_14c99fd30 == -1) {
      DAT_14c99fd20 = 0;
      DAT_14c99fd28 = 0;
      atexit(FUN_142b03f12);
      _Init_thread_footer(&DAT_14c99fd30);
      return;
    }
  }
  return;
}



// FUNCTION 14629ef78 FUN_14629ef78 body=113 status=ok
// SIG undefined FUN_14629ef78(void)

void FUN_14629ef78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99fd48) {
    FUN_144b3d300(&DAT_14c99fd48);
    if (DAT_14c99fd48 == -1) {
      DAT_14c99fd38 = 0;
      DAT_14c99fd40 = 0;
      atexit(FUN_142b03f6d);
      _Init_thread_footer(&DAT_14c99fd48);
      return;
    }
  }
  return;
}



// FUNCTION 14629efe9 FUN_14629efe9 body=203 status=ok
// SIG undefined FUN_14629efe9(void)

undefined8 FUN_14629efe9(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  local_a0 = 0;
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



// FUNCTION 14629f0b5 FUN_14629f0b5 body=42 status=ok
// SIG undefined FUN_14629f0b5(void)

void FUN_14629f0b5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a15e7c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14629f0df FUN_14629f0df body=47 status=ok
// SIG undefined FUN_14629f0df(void)

longlong FUN_14629f0df(void)

{
  if (DAT_14c99fd68 == 0) {
    FUN_14073dd9a(&DAT_14c99fd68,&PTR_LAB_14a15e778);
  }
  return DAT_14c99fd68;
}



// FUNCTION 14629f10e FUN_14629f10e body=40 status=ok
// SIG undefined FUN_14629f10e(void)

undefined8 FUN_14629f10e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14629f136 FUN_14629f136 body=93 status=ok
// SIG undefined FUN_14629f136(void)

void FUN_14629f136(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a15ea90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629f194 FUN_14629f194 body=29 status=ok
// SIG undefined FUN_14629f194(void)

undefined8 FUN_14629f194(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14629f1b2 FUN_14629f1b2 body=132 status=ok
// SIG undefined FUN_14629f1b2(void)

void FUN_14629f1b2(longlong param_1,int param_2)

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



// FUNCTION 14629f236 FUN_14629f236 body=86 status=ok
// SIG undefined FUN_14629f236(void)

void FUN_14629f236(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x260);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  uVar2 = FUN_145c739f6(&DAT_14c82ba00);
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_141092d32(uVar2);
    return;
  }
  return;
}



// FUNCTION 14629f2a2 FUN_14629f2a2 body=49 status=ok
// SIG undefined FUN_14629f2a2(void)

void FUN_14629f2a2(void)

{
  if (DAT_14c99ff48 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99ff38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14629f2d4 FUN_14629f2d4 body=228 status=ok
// SIG undefined FUN_14629f2d4(void)

undefined8 FUN_14629f2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e312b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a161b90;
  local_38[3] = param_3;
  local_38[4] = FUN_142b0918c;
  FUN_145c6995a(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14629f3ba FUN_14629f3ba body=223 status=ok
// SIG undefined FUN_14629f3ba(void)

undefined8 FUN_14629f3ba(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a162010;
  local_30[3] = param_2;
  local_30[4] = FUN_1415ff304;
  FUN_1448b6402(&DAT_14c872c40,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14629f49a FUN_14629f49a body=237 status=ok
// SIG undefined FUN_14629f49a(void)

undefined8 FUN_14629f49a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  cVar2 = FUN_1401154ee(param_1,param_3,&local_28,0);
  if (cVar2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x1f8))(*(longlong **)(param_1 + 8),param_2,param_3)
    ;
  }
  else {
    FUN_1470859dc(&local_38,param_3,local_28);
    puVar3 = &DAT_149dfb77a;
    puVar4 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    if (*(int *)(local_28 + 4) != 0) {
      puVar3 = (undefined2 *)local_28[3];
    }
    FUN_140002266(param_2,L"Pak: %s/%s",puVar3,puVar4);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14629f588 FUN_14629f588 body=155 status=ok
// SIG undefined FUN_14629f588(void)

void FUN_14629f588(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14c99ff40;
  if (param_1 <= (int)DAT_14c99ff40) {
    if (DAT_14c99ff44 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c99ff40) {
        uVar2 = DAT_14c99ff40;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c99ff40 * 3) >> 3) + (longlong)(int)DAT_14c99ff40 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    DAT_14c99ff44 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c99ff38,param_1,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14629f624 FUN_14629f624 body=48 status=ok
// SIG undefined FUN_14629f624(void)

void FUN_14629f624(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14629f654 FUN_14629f654 body=189 status=ok
// SIG undefined FUN_14629f654(void)

void FUN_14629f654(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  if (*(char *)(param_1 + 0xa4) == '\x01') {
    uVar2 = FUN_1405d8a54(1);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = 0xffffffff;
    if ((param_2 != 0.0) || (NAN(param_2))) {
      lVar3 = (longlong)(param_2 * 1000.0);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,lVar3,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
    FUN_14018802a(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014629f6ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
    return;
  }
  return;
}



// FUNCTION 14629f712 FUN_14629f712 body=146 status=ok
// SIG undefined FUN_14629f712(void)

void FUN_14629f712(longlong param_1,int param_2)

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



// FUNCTION 14629f7a4 FUN_14629f7a4 body=132 status=ok
// SIG undefined FUN_14629f7a4(void)

void FUN_14629f7a4(longlong param_1,int param_2)

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



// FUNCTION 14629f828 FUN_14629f828 body=95 status=ok
// SIG undefined FUN_14629f828(void)

void FUN_14629f828(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14629f888 FUN_14629f888 body=132 status=ok
// SIG undefined FUN_14629f888(void)

void FUN_14629f888(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14629f90e FUN_14629f90e body=132 status=ok
// SIG undefined FUN_14629f90e(void)

void FUN_14629f90e(longlong param_1,int param_2)

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



// FUNCTION 14629f994 FUN_14629f994 body=29 status=ok
// SIG undefined FUN_14629f994(void)

undefined8 FUN_14629f994(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14629f9b2 FUN_14629f9b2 body=29 status=ok
// SIG undefined FUN_14629f9b2(void)

undefined8 FUN_14629f9b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14629f9d0 FUN_14629f9d0 body=192 status=ok
// SIG undefined FUN_14629f9d0(void)

void FUN_14629f9d0(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a1628e0;
  puVar1[3] = &DAT_14c9a0294;
  puVar1[4] = FUN_145a2c65e;
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



// FUNCTION 14629fa92 FUN_14629fa92 body=93 status=ok
// SIG undefined FUN_14629fa92(void)

void FUN_14629fa92(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1628e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629faf0 FUN_14629faf0 body=69 status=ok
// SIG undefined FUN_14629faf0(void)

undefined8 * FUN_14629faf0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a162950;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14629fb36 FUN_14629fb36 body=192 status=ok
// SIG undefined FUN_14629fb36(void)

void FUN_14629fb36(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a162ee0;
  puVar1[3] = &DAT_14c9a0298;
  puVar1[4] = FUN_145cb7eba;
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



// FUNCTION 14629fbf8 FUN_14629fbf8 body=93 status=ok
// SIG undefined FUN_14629fbf8(void)

void FUN_14629fbf8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a162ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629fc56 FUN_14629fc56 body=192 status=ok
// SIG undefined FUN_14629fc56(void)

void FUN_14629fc56(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a163020;
  puVar1[3] = &DAT_14c9a0344;
  puVar1[4] = FUN_147087946;
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



// FUNCTION 14629fd18 FUN_14629fd18 body=93 status=ok
// SIG undefined FUN_14629fd18(void)

void FUN_14629fd18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a163020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629fd76 FUN_14629fd76 body=192 status=ok
// SIG undefined FUN_14629fd76(void)

void FUN_14629fd76(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a163140;
  puVar1[3] = &DAT_14c9a0348;
  puVar1[4] = FUN_147087bca;
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



// FUNCTION 14629fe38 FUN_14629fe38 body=93 status=ok
// SIG undefined FUN_14629fe38(void)

void FUN_14629fe38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a163140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14629fe96 FUN_14629fe96 body=55 status=ok
// SIG undefined FUN_14629fe96(void)

void FUN_14629fe96(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0358 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0358 = FUN_140002ddd(FUN_14629fecd,uVar1,L"GbxDefMetaflags");
  }
  return;
}



// FUNCTION 14629fecd FUN_14629fecd body=47 status=ok
// SIG undefined FUN_14629fecd(void)

longlong FUN_14629fecd(void)

{
  if (DAT_14c9a0350 == 0) {
    FUN_14086a14e(&DAT_14c9a0350,&PTR_FUN_14a1631d8);
  }
  return DAT_14c9a0350;
}



// FUNCTION 14629fefc FUN_14629fefc body=48 status=ok
// SIG undefined FUN_14629fefc(void)

void FUN_14629fefc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a16d1f0;
  return;
}



// FUNCTION 14629ff2c FUN_14629ff2c body=48 status=ok
// SIG undefined FUN_14629ff2c(void)

void FUN_14629ff2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a16d350;
  return;
}



// FUNCTION 14629ff5c FUN_14629ff5c body=55 status=ok
// SIG undefined FUN_14629ff5c(void)

void FUN_14629ff5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0388 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0388 = FUN_140002ddd(FUN_1417379bc,uVar1,L"GbxGlobalDef");
  }
  return;
}



// FUNCTION 14629ff94 FUN_14629ff94 body=48 status=ok
// SIG undefined FUN_14629ff94(void)

void FUN_14629ff94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a16d4b0;
  return;
}



// FUNCTION 14629ffc4 FUN_14629ffc4 body=55 status=ok
// SIG undefined FUN_14629ffc4(void)

void FUN_14629ffc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a03b8 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a03b8 = FUN_140002ddd(FUN_14629fffb,uVar1,L"GbxNexusMetaData");
  }
  return;
}



// FUNCTION 14629fffb FUN_14629fffb body=47 status=ok
// SIG undefined FUN_14629fffb(void)

longlong FUN_14629fffb(void)

{
  if (DAT_14c9a03b0 == 0) {
    FUN_14086a14e(&DAT_14c9a03b0,&PTR_FUN_14a163480);
  }
  return DAT_14c9a03b0;
}



// FUNCTION 1462a002a FUN_1462a002a body=48 status=ok
// SIG undefined FUN_1462a002a(void)

void FUN_1462a002a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a16d640;
  return;
}



// FUNCTION 1462a005a FUN_1462a005a body=55 status=ok
// SIG undefined FUN_1462a005a(void)

void FUN_1462a005a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a03d0 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a03d0 = FUN_140002ddd(FUN_1462a0091,uVar1,L"GbxMetaDataRule");
  }
  return;
}



// FUNCTION 1462a0091 FUN_1462a0091 body=47 status=ok
// SIG undefined FUN_1462a0091(void)

longlong FUN_1462a0091(void)

{
  if (DAT_14c9a03c8 == 0) {
    FUN_14086a14e(&DAT_14c9a03c8,&PTR_FUN_14a1634e8);
  }
  return DAT_14c9a03c8;
}



// FUNCTION 1462a00c0 FUN_1462a00c0 body=48 status=ok
// SIG undefined FUN_1462a00c0(void)

void FUN_1462a00c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a16d7a0;
  return;
}



// FUNCTION 1462a00f0 FUN_1462a00f0 body=55 status=ok
// SIG undefined FUN_1462a00f0(void)

void FUN_1462a00f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a03e8 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a03e8 = FUN_140002ddd(FUN_1462a0127,uVar1,L"GbxMetaDataStructRule");
  }
  return;
}



// FUNCTION 1462a0127 FUN_1462a0127 body=49 status=ok
// SIG undefined FUN_1462a0127(void)

longlong FUN_1462a0127(void)

{
  if (DAT_14c9a03e0 == 0) {
    FUN_14086a14e(&DAT_14c9a03e0,&PTR_FUN_14a163568);
  }
  return DAT_14c9a03e0;
}



// FUNCTION 1462a0158 FUN_1462a0158 body=48 status=ok
// SIG undefined FUN_1462a0158(void)

void FUN_1462a0158(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a16d920;
  return;
}



// FUNCTION 1462a0188 FUN_1462a0188 body=55 status=ok
// SIG undefined FUN_1462a0188(void)

void FUN_1462a0188(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0400 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0400 = FUN_140002ddd(FUN_1462a01bf,uVar1,L"GbxMetaDataPropertyRule");
  }
  return;
}



// FUNCTION 1462a01bf FUN_1462a01bf body=47 status=ok
// SIG undefined FUN_1462a01bf(void)

longlong FUN_1462a01bf(void)

{
  if (DAT_14c9a03f8 == 0) {
    FUN_14086a14e(&DAT_14c9a03f8,&PTR_FUN_14a1635e8);
  }
  return DAT_14c9a03f8;
}



// FUNCTION 1462a01ee FUN_1462a01ee body=48 status=ok
// SIG undefined FUN_1462a01ee(void)

void FUN_1462a01ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a16daa0;
  return;
}



// FUNCTION 1462a021e FUN_1462a021e body=55 status=ok
// SIG undefined FUN_1462a021e(void)

void FUN_1462a021e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0418 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0418 = FUN_140002ddd(FUN_1462a0255,uVar1,L"GbxMetaDataFilterData");
  }
  return;
}



// FUNCTION 1462a0255 FUN_1462a0255 body=47 status=ok
// SIG undefined FUN_1462a0255(void)

longlong FUN_1462a0255(void)

{
  if (DAT_14c9a0410 == 0) {
    FUN_14086a14e(&DAT_14c9a0410,&PTR_FUN_14a1637f0);
  }
  return DAT_14c9a0410;
}



// FUNCTION 1462a0284 FUN_1462a0284 body=48 status=ok
// SIG undefined FUN_1462a0284(void)

void FUN_1462a0284(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a16dc20;
  return;
}



// FUNCTION 1462a02b4 FUN_1462a02b4 body=47 status=ok
// SIG undefined FUN_1462a02b4(void)

longlong FUN_1462a02b4(void)

{
  if (DAT_14c9a0428 == 0) {
    FUN_14086a14e(&DAT_14c9a0428,&PTR_FUN_14a163a58);
  }
  return DAT_14c9a0428;
}



// FUNCTION 1462a02e4 FUN_1462a02e4 body=48 status=ok
// SIG undefined FUN_1462a02e4(void)

void FUN_1462a02e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14a16dd80;
  return;
}



// FUNCTION 1462a0314 FUN_1462a0314 body=55 status=ok
// SIG undefined FUN_1462a0314(void)

void FUN_1462a0314(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0448 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0448 = FUN_140002ddd(FUN_1462a034b,uVar1,L"GbxMetaDataFilterStructRule");
  }
  return;
}



// FUNCTION 1462a034b FUN_1462a034b body=47 status=ok
// SIG undefined FUN_1462a034b(void)

longlong FUN_1462a034b(void)

{
  if (DAT_14c9a0440 == 0) {
    FUN_14086a14e(&DAT_14c9a0440,&PTR_FUN_14a163d10);
  }
  return DAT_14c9a0440;
}



// FUNCTION 1462a037a FUN_1462a037a body=48 status=ok
// SIG undefined FUN_1462a037a(void)

void FUN_1462a037a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a16dee0;
  return;
}



// FUNCTION 1462a03aa FUN_1462a03aa body=55 status=ok
// SIG undefined FUN_1462a03aa(void)

void FUN_1462a03aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0460 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0460 = FUN_140002ddd(FUN_1462a03e1,uVar1,L"GbxMetaDataFilterPropertyRule");
  }
  return;
}



// FUNCTION 1462a03e1 FUN_1462a03e1 body=47 status=ok
// SIG undefined FUN_1462a03e1(void)

longlong FUN_1462a03e1(void)

{
  if (DAT_14c9a0458 == 0) {
    FUN_14086a14e(&DAT_14c9a0458,&PTR_FUN_14a163ed0);
  }
  return DAT_14c9a0458;
}



// FUNCTION 1462a0410 FUN_1462a0410 body=48 status=ok
// SIG undefined FUN_1462a0410(void)

void FUN_1462a0410(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a16e060;
  return;
}



// FUNCTION 1462a0440 FUN_1462a0440 body=49 status=ok
// SIG undefined FUN_1462a0440(void)

longlong FUN_1462a0440(void)

{
  if (DAT_14c9a0470 == 0) {
    FUN_1409ce572(&DAT_14c9a0470,&PTR_FUN_14a163fb0);
  }
  return DAT_14c9a0470;
}



// FUNCTION 1462a0472 FUN_1462a0472 body=48 status=ok
// SIG undefined FUN_1462a0472(void)

void FUN_1462a0472(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a16e270;
  return;
}



// FUNCTION 1462a04a2 FUN_1462a04a2 body=55 status=ok
// SIG undefined FUN_1462a04a2(void)

void FUN_1462a04a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a04a8 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a04a8 = FUN_140002ddd(FUN_1462a04d9,uVar1,L"NexusWeightedBitsInstance");
  }
  return;
}



// FUNCTION 1462a04d9 FUN_1462a04d9 body=49 status=ok
// SIG undefined FUN_1462a04d9(void)

longlong FUN_1462a04d9(void)

{
  if (DAT_14c9a04a0 == 0) {
    FUN_14086a14e(&DAT_14c9a04a0,&PTR_FUN_14a164090);
  }
  return DAT_14c9a04a0;
}



// FUNCTION 1462a050a FUN_1462a050a body=48 status=ok
// SIG undefined FUN_1462a050a(void)

void FUN_1462a050a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14a16e3d0;
  return;
}



// FUNCTION 1462a053a FUN_1462a053a body=55 status=ok
// SIG undefined FUN_1462a053a(void)

void FUN_1462a053a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a04c0 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a04c0 = FUN_140002ddd(FUN_1462a0571,uVar1,L"NexusBitSingleTag");
  }
  return;
}



// FUNCTION 1462a0571 FUN_1462a0571 body=49 status=ok
// SIG undefined FUN_1462a0571(void)

longlong FUN_1462a0571(void)

{
  if (DAT_14c9a04b8 == 0) {
    FUN_14086a14e(&DAT_14c9a04b8,&PTR_FUN_14a164100);
  }
  return DAT_14c9a04b8;
}



// FUNCTION 1462a05a2 FUN_1462a05a2 body=48 status=ok
// SIG undefined FUN_1462a05a2(void)

void FUN_1462a05a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a16e530;
  return;
}



// FUNCTION 1462a05d2 FUN_1462a05d2 body=49 status=ok
// SIG undefined FUN_1462a05d2(void)

longlong FUN_1462a05d2(void)

{
  if (DAT_14c9a04f0 == 0) {
    FUN_14073dd9a(&DAT_14c9a04f0,&PTR_LAB_14a1645f0);
  }
  return DAT_14c9a04f0;
}



// FUNCTION 1462a0603 FUN_1462a0603 body=47 status=ok
// SIG undefined FUN_1462a0603(void)

longlong FUN_1462a0603(void)

{
  if (DAT_14c9a04d0 == 0) {
    FUN_14000fc22(&DAT_14c9a04d0,&PTR_FUN_14a1642c8);
  }
  return DAT_14c9a04d0;
}



// FUNCTION 1462a0632 FUN_1462a0632 body=47 status=ok
// SIG undefined FUN_1462a0632(void)

longlong FUN_1462a0632(void)

{
  if (DAT_14c9a04d8 == 0) {
    FUN_14000fc22(&DAT_14c9a04d8,&PTR_FUN_14a1643e8);
  }
  return DAT_14c9a04d8;
}



// FUNCTION 1462a0661 FUN_1462a0661 body=47 status=ok
// SIG undefined FUN_1462a0661(void)

longlong FUN_1462a0661(void)

{
  if (DAT_14c9a04e0 == 0) {
    FUN_14000fc22(&DAT_14c9a04e0,&PTR_FUN_14a1644f8);
  }
  return DAT_14c9a04e0;
}



// FUNCTION 1462a0690 FUN_1462a0690 body=34 status=ok
// SIG undefined FUN_1462a0690(void)

void FUN_1462a0690(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a631a4();
  FUN_14069c8d6(uVar1,&PTR_s_HasAllTags_14a164540,3);
  return;
}



// FUNCTION 1462a06b2 FUN_1462a06b2 body=55 status=ok
// SIG undefined FUN_1462a06b2(void)

void FUN_1462a06b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0508 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0508 = FUN_140002ddd(FUN_141737a1e,uVar1,L"NexusConfigDataBP");
  }
  return;
}



// FUNCTION 1462a06ea FUN_1462a06ea body=48 status=ok
// SIG undefined FUN_1462a06ea(void)

void FUN_1462a06ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a16e6a0;
  return;
}



// FUNCTION 1462a071a FUN_1462a071a body=49 status=ok
// SIG undefined FUN_1462a071a(void)

longlong FUN_1462a071a(void)

{
  if (DAT_14c9a0578 == 0) {
    FUN_14073dd9a(&DAT_14c9a0578,&PTR_LAB_14a165340);
  }
  return DAT_14c9a0578;
}



// FUNCTION 1462a074b FUN_1462a074b body=47 status=ok
// SIG undefined FUN_1462a074b(void)

longlong FUN_1462a074b(void)

{
  if (DAT_14c9a0518 == 0) {
    FUN_14000fc22(&DAT_14c9a0518,&PTR_FUN_14a164770);
  }
  return DAT_14c9a0518;
}



// FUNCTION 1462a077a FUN_1462a077a body=47 status=ok
// SIG undefined FUN_1462a077a(void)

longlong FUN_1462a077a(void)

{
  if (DAT_14c9a0520 == 0) {
    FUN_14000fc22(&DAT_14c9a0520,&PTR_FUN_14a164898);
  }
  return DAT_14c9a0520;
}



// FUNCTION 1462a07a9 FUN_1462a07a9 body=47 status=ok
// SIG undefined FUN_1462a07a9(void)

longlong FUN_1462a07a9(void)

{
  if (DAT_14c9a0528 == 0) {
    FUN_14000fc22(&DAT_14c9a0528,&PTR_FUN_14a1649b8);
  }
  return DAT_14c9a0528;
}



// FUNCTION 1462a07d8 FUN_1462a07d8 body=47 status=ok
// SIG undefined FUN_1462a07d8(void)

longlong FUN_1462a07d8(void)

{
  if (DAT_14c9a0530 == 0) {
    FUN_14000fc22(&DAT_14c9a0530,&PTR_FUN_14a164ad8);
  }
  return DAT_14c9a0530;
}



// FUNCTION 1462a0807 FUN_1462a0807 body=47 status=ok
// SIG undefined FUN_1462a0807(void)

longlong FUN_1462a0807(void)

{
  if (DAT_14c9a0538 == 0) {
    FUN_14000fc22(&DAT_14c9a0538,&PTR_FUN_14a164bf8);
  }
  return DAT_14c9a0538;
}



// FUNCTION 1462a0836 FUN_1462a0836 body=47 status=ok
// SIG undefined FUN_1462a0836(void)

longlong FUN_1462a0836(void)

{
  if (DAT_14c9a0540 == 0) {
    FUN_14000fc22(&DAT_14c9a0540,&PTR_FUN_14a164d20);
  }
  return DAT_14c9a0540;
}



// FUNCTION 1462a0865 FUN_1462a0865 body=47 status=ok
// SIG undefined FUN_1462a0865(void)

longlong FUN_1462a0865(void)

{
  if (DAT_14c9a0548 == 0) {
    FUN_14000fc22(&DAT_14c9a0548,&PTR_FUN_14a164df8);
  }
  return DAT_14c9a0548;
}



// FUNCTION 1462a0894 FUN_1462a0894 body=47 status=ok
// SIG undefined FUN_1462a0894(void)

longlong FUN_1462a0894(void)

{
  if (DAT_14c9a0550 == 0) {
    FUN_14000fc22(&DAT_14c9a0550,&PTR_FUN_14a164ee0);
  }
  return DAT_14c9a0550;
}



// FUNCTION 1462a08c3 FUN_1462a08c3 body=47 status=ok
// SIG undefined FUN_1462a08c3(void)

longlong FUN_1462a08c3(void)

{
  if (DAT_14c9a0558 == 0) {
    FUN_14000fc22(&DAT_14c9a0558,&PTR_FUN_14a164fc0);
  }
  return DAT_14c9a0558;
}



// FUNCTION 1462a08f2 FUN_1462a08f2 body=47 status=ok
// SIG undefined FUN_1462a08f2(void)

longlong FUN_1462a08f2(void)

{
  if (DAT_14c9a0560 == 0) {
    FUN_14000fc22(&DAT_14c9a0560,&PTR_FUN_14a165090);
  }
  return DAT_14c9a0560;
}



// FUNCTION 1462a0921 FUN_1462a0921 body=47 status=ok
// SIG undefined FUN_1462a0921(void)

longlong FUN_1462a0921(void)

{
  if (DAT_14c9a0568 == 0) {
    FUN_14000fc22(&DAT_14c9a0568,&PTR_FUN_14a165160);
  }
  return DAT_14c9a0568;
}



// FUNCTION 1462a0950 FUN_1462a0950 body=34 status=ok
// SIG undefined FUN_1462a0950(void)

void FUN_1462a0950(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a63290();
  FUN_14069c8d6(uVar1,&PTR_s_ConfigFromYAML_14a1651a0,0xb);
  return;
}



// FUNCTION 1462a0972 FUN_1462a0972 body=35 status=ok
// SIG undefined FUN_1462a0972(void)

void FUN_1462a0972(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a165380;
  return;
}



// FUNCTION 1462a09af FUN_1462a09af body=47 status=ok
// SIG undefined FUN_1462a09af(void)

longlong FUN_1462a09af(void)

{
  if (DAT_14c9a0598 == 0) {
    FUN_14073dd9a(&DAT_14c9a0598,&PTR_LAB_14a1657b8);
  }
  return DAT_14c9a0598;
}



// FUNCTION 1462a09de FUN_1462a09de body=47 status=ok
// SIG undefined FUN_1462a09de(void)

longlong FUN_1462a09de(void)

{
  if (DAT_14c9a05b0 == 0) {
    FUN_14073dd9a(&DAT_14c9a05b0,&PTR_LAB_14a165878);
  }
  return DAT_14c9a05b0;
}



// FUNCTION 1462a0a0e FUN_1462a0a0e body=55 status=ok
// SIG undefined FUN_1462a0a0e(void)

void FUN_1462a0a0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a05c8 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a05c8 = FUN_140002ddd(FUN_1462a0a45,uVar1,L"GbxUICreditsQuery");
  }
  return;
}



// FUNCTION 1462a0a45 FUN_1462a0a45 body=47 status=ok
// SIG undefined FUN_1462a0a45(void)

longlong FUN_1462a0a45(void)

{
  if (DAT_14c9a05c0 == 0) {
    FUN_14086a14e(&DAT_14c9a05c0,&PTR_FUN_14a165920);
  }
  return DAT_14c9a05c0;
}



// FUNCTION 1462a0a74 FUN_1462a0a74 body=48 status=ok
// SIG undefined FUN_1462a0a74(void)

void FUN_1462a0a74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a16e800;
  return;
}



// FUNCTION 1462a0aa4 FUN_1462a0aa4 body=55 status=ok
// SIG undefined FUN_1462a0aa4(void)

void FUN_1462a0aa4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a05e0 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a05e0 = FUN_140002ddd(FUN_1462a0adb,uVar1,L"GbxUICreditsLine");
  }
  return;
}



// FUNCTION 1462a0adb FUN_1462a0adb body=47 status=ok
// SIG undefined FUN_1462a0adb(void)

longlong FUN_1462a0adb(void)

{
  if (DAT_14c9a05d8 == 0) {
    FUN_14086a14e(&DAT_14c9a05d8,&PTR_FUN_14a165a18);
  }
  return DAT_14c9a05d8;
}



// FUNCTION 1462a0b0a FUN_1462a0b0a body=48 status=ok
// SIG undefined FUN_1462a0b0a(void)

void FUN_1462a0b0a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a16e960;
  return;
}



// FUNCTION 1462a0b3a FUN_1462a0b3a body=49 status=ok
// SIG undefined FUN_1462a0b3a(void)

longlong FUN_1462a0b3a(void)

{
  if (DAT_14c9a0640 == 0) {
    FUN_14073dd9a(&DAT_14c9a0640,&PTR_LAB_14a165d68);
  }
  return DAT_14c9a0640;
}



// FUNCTION 1462a0b6b FUN_1462a0b6b body=47 status=ok
// SIG undefined FUN_1462a0b6b(void)

longlong FUN_1462a0b6b(void)

{
  if (DAT_14c9a05f8 == 0) {
    FUN_14073dd9a(&DAT_14c9a05f8,&PTR_LAB_14a165aa8);
  }
  return DAT_14c9a05f8;
}



// FUNCTION 1462a0baf FUN_1462a0baf body=47 status=ok
// SIG undefined FUN_1462a0baf(void)

longlong FUN_1462a0baf(void)

{
  if (DAT_14c9a0610 == 0) {
    FUN_14073dd9a(&DAT_14c9a0610,&PTR_LAB_14a165c48);
  }
  return DAT_14c9a0610;
}



// FUNCTION 1462a0be9 FUN_1462a0be9 body=47 status=ok
// SIG undefined FUN_1462a0be9(void)

longlong FUN_1462a0be9(void)

{
  if (DAT_14c9a0628 == 0) {
    FUN_14073dd9a(&DAT_14c9a0628,&PTR_LAB_14a165cd8);
  }
  return DAT_14c9a0628;
}



// FUNCTION 1462a0c2e FUN_1462a0c2e body=49 status=ok
// SIG undefined FUN_1462a0c2e(void)

longlong FUN_1462a0c2e(void)

{
  if (DAT_14c9a0658 == 0) {
    FUN_14073dd9a(&DAT_14c9a0658,&PTR_LAB_14a165e78);
  }
  return DAT_14c9a0658;
}



// FUNCTION 1462a0c6a FUN_1462a0c6a body=47 status=ok
// SIG undefined FUN_1462a0c6a(void)

longlong FUN_1462a0c6a(void)

{
  if (DAT_14c9a0670 == 0) {
    FUN_14073dd9a(&DAT_14c9a0670,&PTR_LAB_14a166368);
  }
  return DAT_14c9a0670;
}



// FUNCTION 1462a0c99 FUN_1462a0c99 body=47 status=ok
// SIG undefined FUN_1462a0c99(void)

longlong FUN_1462a0c99(void)

{
  if (DAT_14c9a0688 == 0) {
    FUN_14073dd9a(&DAT_14c9a0688,&PTR_LAB_14a166868);
  }
  return DAT_14c9a0688;
}



// FUNCTION 1462a0cc8 FUN_1462a0cc8 body=47 status=ok
// SIG undefined FUN_1462a0cc8(void)

longlong FUN_1462a0cc8(void)

{
  if (DAT_14c9a06a8 == 0) {
    FUN_14073dd9a(&DAT_14c9a06a8,&PTR_LAB_14a166eb0);
  }
  return DAT_14c9a06a8;
}



// FUNCTION 1462a0cf7 FUN_1462a0cf7 body=47 status=ok
// SIG undefined FUN_1462a0cf7(void)

longlong FUN_1462a0cf7(void)

{
  if (DAT_14c9a0698 == 0) {
    FUN_14000fc22(&DAT_14c9a0698,&PTR_FUN_14a166df0);
  }
  return DAT_14c9a0698;
}



// FUNCTION 1462a0d26 FUN_1462a0d26 body=34 status=ok
// SIG undefined FUN_1462a0d26(void)

void FUN_1462a0d26(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a6337c();
  FUN_14069c8d6(uVar1,&PTR_s_GetStructPropertyNames_14a166e30,1);
  return;
}



// FUNCTION 1462a0d48 FUN_1462a0d48 body=47 status=ok
// SIG undefined FUN_1462a0d48(void)

longlong FUN_1462a0d48(void)

{
  if (DAT_14c9a06c0 == 0) {
    FUN_14073dd9a(&DAT_14c9a06c0,&PTR_LAB_14a166f68);
  }
  return DAT_14c9a06c0;
}



// FUNCTION 1462a0d77 FUN_1462a0d77 body=47 status=ok
// SIG undefined FUN_1462a0d77(void)

longlong FUN_1462a0d77(void)

{
  if (DAT_14c9a06d8 == 0) {
    FUN_14073dd9a(&DAT_14c9a06d8,&PTR_LAB_14a167428);
  }
  return DAT_14c9a06d8;
}



// FUNCTION 1462a0da6 FUN_1462a0da6 body=47 status=ok
// SIG undefined FUN_1462a0da6(void)

longlong FUN_1462a0da6(void)

{
  if (DAT_14c9a06f0 == 0) {
    FUN_14073dd9a(&DAT_14c9a06f0,&PTR_LAB_14a167928);
  }
  return DAT_14c9a06f0;
}



// FUNCTION 1462a0de0 FUN_1462a0de0 body=47 status=ok
// SIG undefined FUN_1462a0de0(void)

longlong FUN_1462a0de0(void)

{
  if (DAT_14c9a0708 == 0) {
    FUN_14073dd9a(&DAT_14c9a0708,&PTR_LAB_14a167ee8);
  }
  return DAT_14c9a0708;
}



// FUNCTION 1462a0e10 FUN_1462a0e10 body=55 status=ok
// SIG undefined FUN_1462a0e10(void)

void FUN_1462a0e10(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0728 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0728 = FUN_140002ddd(FUN_1462a0e47,uVar1,L"NexusStoreRedirect");
  }
  return;
}



// FUNCTION 1462a0e47 FUN_1462a0e47 body=47 status=ok
// SIG undefined FUN_1462a0e47(void)

longlong FUN_1462a0e47(void)

{
  if (DAT_14c9a0720 == 0) {
    FUN_14086a14e(&DAT_14c9a0720,&PTR_FUN_14a1683a8);
  }
  return DAT_14c9a0720;
}



// FUNCTION 1462a0e76 FUN_1462a0e76 body=48 status=ok
// SIG undefined FUN_1462a0e76(void)

void FUN_1462a0e76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14a16eac0;
  return;
}



// FUNCTION 1462a0ea6 FUN_1462a0ea6 body=47 status=ok
// SIG undefined FUN_1462a0ea6(void)

longlong FUN_1462a0ea6(void)

{
  if (DAT_14c9a0780 == 0) {
    FUN_14086a14e(&DAT_14c9a0780,&PTR_FUN_14a169250);
  }
  return DAT_14c9a0780;
}



// FUNCTION 1462a0ed5 FUN_1462a0ed5 body=47 status=ok
// SIG undefined FUN_1462a0ed5(void)

longlong FUN_1462a0ed5(void)

{
  if (DAT_14c9a0768 == 0) {
    FUN_14086a14e(&DAT_14c9a0768,&PTR_FUN_14a1690c8);
  }
  return DAT_14c9a0768;
}



// FUNCTION 1462a0f04 FUN_1462a0f04 body=47 status=ok
// SIG undefined FUN_1462a0f04(void)

longlong FUN_1462a0f04(void)

{
  if (DAT_14c9a0740 == 0) {
    FUN_14073dd9a(&DAT_14c9a0740,&PTR_LAB_14a1687a8);
  }
  return DAT_14c9a0740;
}



// FUNCTION 1462a0f34 FUN_1462a0f34 body=163 status=ok
// SIG undefined FUN_1462a0f34(void)

undefined8 * FUN_1462a0f34(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xd));
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0x100000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 1462a0fd8 FUN_1462a0fd8 body=55 status=ok
// SIG undefined FUN_1462a0fd8(void)

void FUN_1462a0fd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0758 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0758 = FUN_140002ddd(FUN_1462a100f,uVar1,L"NexusSourceInfo");
  }
  return;
}



// FUNCTION 1462a100f FUN_1462a100f body=47 status=ok
// SIG undefined FUN_1462a100f(void)

longlong FUN_1462a100f(void)

{
  if (DAT_14c9a0750 == 0) {
    FUN_14086a14e(&DAT_14c9a0750,&PTR_FUN_14a168e20);
  }
  return DAT_14c9a0750;
}



// FUNCTION 1462a103e FUN_1462a103e body=48 status=ok
// SIG undefined FUN_1462a103e(void)

void FUN_1462a103e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14a16ec20;
  return;
}



// FUNCTION 1462a106e FUN_1462a106e body=55 status=ok
// SIG undefined FUN_1462a106e(void)

void FUN_1462a106e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0770 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0770 = FUN_140002ddd(FUN_1462a0ed5,uVar1,L"NexusLayerInfo");
  }
  return;
}



// FUNCTION 1462a10a6 FUN_1462a10a6 body=48 status=ok
// SIG undefined FUN_1462a10a6(void)

void FUN_1462a10a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14a16ed80;
  return;
}



// FUNCTION 1462a10d6 FUN_1462a10d6 body=55 status=ok
// SIG undefined FUN_1462a10d6(void)

void FUN_1462a10d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0788 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0788 = FUN_140002ddd(FUN_1462a0ea6,uVar1,L"NexusStoreBindingConfig");
  }
  return;
}



// FUNCTION 1462a110e FUN_1462a110e body=48 status=ok
// SIG undefined FUN_1462a110e(void)

void FUN_1462a110e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a16eee0;
  return;
}



// FUNCTION 1462a113e FUN_1462a113e body=47 status=ok
// SIG undefined FUN_1462a113e(void)

longlong FUN_1462a113e(void)

{
  if (DAT_14c9a07a0 == 0) {
    FUN_14073dd9a(&DAT_14c9a07a0,&PTR_LAB_14a169358);
  }
  return DAT_14c9a07a0;
}



// FUNCTION 1462a116d FUN_1462a116d body=58 status=ok
// SIG undefined FUN_1462a116d(void)

void FUN_1462a116d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a169870;
  puVar1[5] = &PTR_FUN_14a169b20;
  puVar1[6] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x39) = 0;
  return;
}



// FUNCTION 1462a11a7 FUN_1462a11a7 body=47 status=ok
// SIG undefined FUN_1462a11a7(void)

longlong FUN_1462a11a7(void)

{
  if (DAT_14c9a07b8 == 0) {
    FUN_14073dd9a(&DAT_14c9a07b8,&PTR_LAB_14a169828);
  }
  return DAT_14c9a07b8;
}



// FUNCTION 1462a11d6 FUN_1462a11d6 body=67 status=ok
// SIG undefined FUN_1462a11d6(void)

void FUN_1462a11d6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[6] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x39) = 0;
  *puVar1 = &PTR_FUN_14a169c20;
  puVar1[5] = &PTR_FUN_14a169ed0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1462a1219 FUN_1462a1219 body=47 status=ok
// SIG undefined FUN_1462a1219(void)

longlong FUN_1462a1219(void)

{
  if (DAT_14c9a07d0 == 0) {
    FUN_14073dd9a(&DAT_14c9a07d0,&PTR_LAB_14a169bd8);
  }
  return DAT_14c9a07d0;
}



// FUNCTION 1462a1248 FUN_1462a1248 body=58 status=ok
// SIG undefined FUN_1462a1248(void)

void FUN_1462a1248(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[6] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x39) = 0;
  *puVar1 = &PTR_FUN_14a169f70;
  puVar1[5] = &PTR_FUN_14a16a228;
  return;
}



// FUNCTION 1462a1282 FUN_1462a1282 body=47 status=ok
// SIG undefined FUN_1462a1282(void)

longlong FUN_1462a1282(void)

{
  if (DAT_14c9a07e8 == 0) {
    FUN_14073dd9a(&DAT_14c9a07e8,&PTR_LAB_14a169f28);
  }
  return DAT_14c9a07e8;
}



// FUNCTION 1462a12b2 FUN_1462a12b2 body=55 status=ok
// SIG undefined FUN_1462a12b2(void)

void FUN_1462a12b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0800 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0800 = FUN_140002ddd(FUN_1462a12e9,uVar1,L"LoadingContextInfo");
  }
  return;
}


