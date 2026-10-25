// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14639b568 FUN_14639b568 body=49 status=ok
// SIG undefined FUN_14639b568(void)

longlong FUN_14639b568(void)

{
  if (DAT_14cac92c8 == 0) {
    FUN_14073dd9a(&DAT_14cac92c8,&PTR_LAB_14a778640);
  }
  return DAT_14cac92c8;
}



// FUNCTION 14639b599 FUN_14639b599 body=47 status=ok
// SIG undefined FUN_14639b599(void)

longlong FUN_14639b599(void)

{
  if (DAT_14cac92b0 == 0) {
    FUN_14000fc22(&DAT_14cac92b0,&PTR_FUN_14a776d88);
  }
  return DAT_14cac92b0;
}



// FUNCTION 14639b5c8 FUN_14639b5c8 body=47 status=ok
// SIG undefined FUN_14639b5c8(void)

longlong FUN_14639b5c8(void)

{
  if (DAT_14cac92b8 == 0) {
    FUN_14000fc22(&DAT_14cac92b8,&PTR_FUN_14a776de0);
  }
  return DAT_14cac92b8;
}



// FUNCTION 14639b5f8 FUN_14639b5f8 body=34 status=ok
// SIG undefined FUN_14639b5f8(void)

void FUN_14639b5f8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14059e8cc();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_NaniteSettings_14a776e20,2);
  return;
}



// FUNCTION 14639b62a FUN_14639b62a body=632 status=ok
// SIG undefined FUN_14639b62a(void)

void FUN_14639b62a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac92e0) {
    FUN_144b3d300(&DAT_14cac92e0);
    if (DAT_14cac92e0 == -1) {
      FUN_1446f470e(&DAT_14cac92d8,L"bHighPriorityLoading",1);
      _Init_thread_footer(&DAT_14cac92e0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac92ec) {
    FUN_144b3d300(&DAT_14cac92ec);
    if (DAT_14cac92ec == -1) {
      FUN_1446f470e(&DAT_14cac92e4,L"WorldGravityZ",1);
      _Init_thread_footer(&DAT_14cac92ec);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac92f8) {
    FUN_144b3d300(&DAT_14cac92f8);
    if (DAT_14cac92f8 == -1) {
      FUN_1446f470e(&DAT_14cac92f0,L"NaniteSettings",1);
      _Init_thread_footer(&DAT_14cac92f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9304) {
    FUN_144b3d300(&DAT_14cac9304);
    if (DAT_14cac9304 == -1) {
      FUN_1446f470e(&DAT_14cac92fc,L"TimeDilation",1);
      _Init_thread_footer(&DAT_14cac9304);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9310) {
    FUN_144b3d300(&DAT_14cac9310);
    if (DAT_14cac9310 == -1) {
      FUN_1446f470e(&DAT_14cac9308,L"CinematicTimeDilation",1);
      _Init_thread_footer(&DAT_14cac9310);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac931c) {
    FUN_144b3d300(&DAT_14cac931c);
    if (DAT_14cac931c == -1) {
      FUN_1446f470e(&DAT_14cac9314,L"PauserPlayerState",1);
      _Init_thread_footer(&DAT_14cac931c);
      return;
    }
  }
  return;
}



// FUNCTION 14639b8a2 FUN_14639b8a2 body=40 status=ok
// SIG undefined FUN_14639b8a2(void)

undefined8 FUN_14639b8a2(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b8ca FUN_14639b8ca body=40 status=ok
// SIG undefined FUN_14639b8ca(void)

undefined8 FUN_14639b8ca(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b8f2 FUN_14639b8f2 body=40 status=ok
// SIG undefined FUN_14639b8f2(void)

undefined8 FUN_14639b8f2(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b91a FUN_14639b91a body=40 status=ok
// SIG undefined FUN_14639b91a(void)

undefined8 FUN_14639b91a(undefined8 param_1,int param_2)

{
  FUN_14588e842();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b942 FUN_14639b942 body=40 status=ok
// SIG undefined FUN_14639b942(void)

undefined8 FUN_14639b942(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b96a FUN_14639b96a body=40 status=ok
// SIG undefined FUN_14639b96a(void)

undefined8 FUN_14639b96a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b992 FUN_14639b992 body=40 status=ok
// SIG undefined FUN_14639b992(void)

undefined8 FUN_14639b992(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b9ba FUN_14639b9ba body=40 status=ok
// SIG undefined FUN_14639b9ba(void)

undefined8 FUN_14639b9ba(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639b9e2 FUN_14639b9e2 body=40 status=ok
// SIG undefined FUN_14639b9e2(void)

undefined8 FUN_14639b9e2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639ba0a FUN_14639ba0a body=40 status=ok
// SIG undefined FUN_14639ba0a(void)

undefined8 FUN_14639ba0a(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639ba32 FUN_14639ba32 body=40 status=ok
// SIG undefined FUN_14639ba32(void)

undefined8 FUN_14639ba32(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639ba5a FUN_14639ba5a body=40 status=ok
// SIG undefined FUN_14639ba5a(void)

undefined8 FUN_14639ba5a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639ba82 FUN_14639ba82 body=40 status=ok
// SIG undefined FUN_14639ba82(void)

undefined8 FUN_14639ba82(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639baaa FUN_14639baaa body=40 status=ok
// SIG undefined FUN_14639baaa(void)

undefined8 FUN_14639baaa(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639bad2 FUN_14639bad2 body=40 status=ok
// SIG undefined FUN_14639bad2(void)

undefined8 FUN_14639bad2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639bafa FUN_14639bafa body=40 status=ok
// SIG undefined FUN_14639bafa(void)

undefined8 FUN_14639bafa(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639bb22 FUN_14639bb22 body=40 status=ok
// SIG undefined FUN_14639bb22(void)

undefined8 FUN_14639bb22(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639bb4a FUN_14639bb4a body=40 status=ok
// SIG undefined FUN_14639bb4a(void)

undefined8 FUN_14639bb4a(undefined8 param_1,int param_2)

{
  FUN_140612ade();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639bb72 FUN_14639bb72 body=34 status=ok
// SIG undefined FUN_14639bb72(void)

undefined8 FUN_14639bb72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bb94 FUN_14639bb94 body=34 status=ok
// SIG undefined FUN_14639bb94(void)

undefined8 FUN_14639bb94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bbb6 FUN_14639bbb6 body=34 status=ok
// SIG undefined FUN_14639bbb6(void)

undefined8 FUN_14639bbb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bbd8 FUN_14639bbd8 body=34 status=ok
// SIG undefined FUN_14639bbd8(void)

undefined8 FUN_14639bbd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bbfa FUN_14639bbfa body=34 status=ok
// SIG undefined FUN_14639bbfa(void)

undefined8 FUN_14639bbfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bc1c FUN_14639bc1c body=34 status=ok
// SIG undefined FUN_14639bc1c(void)

undefined8 FUN_14639bc1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bc3e FUN_14639bc3e body=34 status=ok
// SIG undefined FUN_14639bc3e(void)

undefined8 FUN_14639bc3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bc60 FUN_14639bc60 body=34 status=ok
// SIG undefined FUN_14639bc60(void)

undefined8 FUN_14639bc60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bc82 FUN_14639bc82 body=34 status=ok
// SIG undefined FUN_14639bc82(void)

undefined8 FUN_14639bc82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bca4 FUN_14639bca4 body=34 status=ok
// SIG undefined FUN_14639bca4(void)

undefined8 FUN_14639bca4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bcc6 FUN_14639bcc6 body=34 status=ok
// SIG undefined FUN_14639bcc6(void)

undefined8 FUN_14639bcc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bce8 FUN_14639bce8 body=34 status=ok
// SIG undefined FUN_14639bce8(void)

undefined8 FUN_14639bce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bd0a FUN_14639bd0a body=34 status=ok
// SIG undefined FUN_14639bd0a(void)

undefined8 FUN_14639bd0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bd2c FUN_14639bd2c body=34 status=ok
// SIG undefined FUN_14639bd2c(void)

undefined8 FUN_14639bd2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bd4e FUN_14639bd4e body=34 status=ok
// SIG undefined FUN_14639bd4e(void)

undefined8 FUN_14639bd4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bd70 FUN_14639bd70 body=34 status=ok
// SIG undefined FUN_14639bd70(void)

undefined8 FUN_14639bd70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bd92 FUN_14639bd92 body=34 status=ok
// SIG undefined FUN_14639bd92(void)

undefined8 FUN_14639bd92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bdb4 FUN_14639bdb4 body=34 status=ok
// SIG undefined FUN_14639bdb4(void)

undefined8 FUN_14639bdb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bdd6 FUN_14639bdd6 body=34 status=ok
// SIG undefined FUN_14639bdd6(void)

undefined8 FUN_14639bdd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14639bdf8 FUN_14639bdf8 body=55 status=ok
// SIG undefined FUN_14639bdf8(void)

void FUN_14639bdf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac9328 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac9328 = FUN_140002ddd(FUN_14639be2f,uVar1,L"AttributeKey");
  }
  return;
}



// FUNCTION 14639be2f FUN_14639be2f body=47 status=ok
// SIG undefined FUN_14639be2f(void)

longlong FUN_14639be2f(void)

{
  if (DAT_14cac9320 == 0) {
    FUN_14086a14e(&DAT_14cac9320,&PTR_FUN_14a77b528);
  }
  return DAT_14cac9320;
}



// FUNCTION 14639be5e FUN_14639be5e body=48 status=ok
// SIG undefined FUN_14639be5e(void)

void FUN_14639be5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a78bdf0;
  return;
}



// FUNCTION 14639be8e FUN_14639be8e body=55 status=ok
// SIG undefined FUN_14639be8e(void)

void FUN_14639be8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac9340 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac9340 = FUN_140002ddd(FUN_14639bec5,uVar1,L"AttributeCurve");
  }
  return;
}



// FUNCTION 14639bec5 FUN_14639bec5 body=49 status=ok
// SIG undefined FUN_14639bec5(void)

longlong FUN_14639bec5(void)

{
  if (DAT_14cac9338 == 0) {
    FUN_14086a14e(&DAT_14cac9338,&PTR_FUN_14a77b708);
  }
  return DAT_14cac9338;
}



// FUNCTION 14639bef6 FUN_14639bef6 body=48 status=ok
// SIG undefined FUN_14639bef6(void)

void FUN_14639bef6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14a78bf50;
  return;
}



// FUNCTION 14639bf2b FUN_14639bf2b body=47 status=ok
// SIG undefined FUN_14639bf2b(void)

longlong FUN_14639bf2b(void)

{
  if (DAT_14cac9358 == 0) {
    FUN_14073dd9a(&DAT_14cac9358,&PTR_LAB_14a77b8a8);
  }
  return DAT_14cac9358;
}



// FUNCTION 14639bf5a FUN_14639bf5a body=49 status=ok
// SIG undefined FUN_14639bf5a(void)

longlong FUN_14639bf5a(void)

{
  if (DAT_14cac9390 == 0) {
    FUN_1409ce572(&DAT_14cac9390,&PTR_FUN_14a77bfb0);
  }
  return DAT_14cac9390;
}



// FUNCTION 14639bf8b FUN_14639bf8b body=47 status=ok
// SIG undefined FUN_14639bf8b(void)

longlong FUN_14639bf8b(void)

{
  if (DAT_14cac93a8 == 0) {
    FUN_1409ce572(&DAT_14cac93a8,&PTR_FUN_14a77c070);
  }
  return DAT_14cac93a8;
}



// FUNCTION 14639bfba FUN_14639bfba body=55 status=ok
// SIG undefined FUN_14639bfba(void)

void FUN_14639bfba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac93c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac93c8 = FUN_140002ddd(FUN_14639bff1,uVar1,L"QuartzPulseOverrideStep");
  }
  return;
}



// FUNCTION 14639bff1 FUN_14639bff1 body=47 status=ok
// SIG undefined FUN_14639bff1(void)

longlong FUN_14639bff1(void)

{
  if (DAT_14cac93c0 == 0) {
    FUN_14086a14e(&DAT_14cac93c0,&PTR_FUN_14a77c1e0);
  }
  return DAT_14cac93c0;
}



// FUNCTION 14639c020 FUN_14639c020 body=48 status=ok
// SIG undefined FUN_14639c020(void)

void FUN_14639c020(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a78c580;
  return;
}



// FUNCTION 14639c050 FUN_14639c050 body=55 status=ok
// SIG undefined FUN_14639c050(void)

void FUN_14639c050(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac93e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac93e0 = FUN_140002ddd(FUN_14639c087,uVar1,L"QuartzTimeSignature");
  }
  return;
}



// FUNCTION 14639c087 FUN_14639c087 body=47 status=ok
// SIG undefined FUN_14639c087(void)

longlong FUN_14639c087(void)

{
  if (DAT_14cac93d8 == 0) {
    FUN_14086a14e(&DAT_14cac93d8,&PTR_FUN_14a77c3f0);
  }
  return DAT_14cac93d8;
}



// FUNCTION 14639c0b6 FUN_14639c0b6 body=48 status=ok
// SIG undefined FUN_14639c0b6(void)

void FUN_14639c0b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a78c6e0;
  return;
}



// FUNCTION 14639c0e6 FUN_14639c0e6 body=55 status=ok
// SIG undefined FUN_14639c0e6(void)

void FUN_14639c0e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac93f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac93f8 = FUN_140002ddd(FUN_14639c11d,uVar1,L"QuartzTransportTimeStamp");
  }
  return;
}



// FUNCTION 14639c11d FUN_14639c11d body=49 status=ok
// SIG undefined FUN_14639c11d(void)

longlong FUN_14639c11d(void)

{
  if (DAT_14cac93f0 == 0) {
    FUN_14086a14e(&DAT_14cac93f0,&PTR_FUN_14a77c5a0);
  }
  return DAT_14cac93f0;
}



// FUNCTION 14639c14e FUN_14639c14e body=48 status=ok
// SIG undefined FUN_14639c14e(void)

void FUN_14639c14e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a78c840;
  return;
}



// FUNCTION 14639c17e FUN_14639c17e body=47 status=ok
// SIG undefined FUN_14639c17e(void)

longlong FUN_14639c17e(void)

{
  if (DAT_14cac9408 == 0) {
    FUN_1409ce572(&DAT_14cac9408,&PTR_FUN_14a77c620);
  }
  return DAT_14cac9408;
}



// FUNCTION 14639c1ad FUN_14639c1ad body=47 status=ok
// SIG undefined FUN_14639c1ad(void)

longlong FUN_14639c1ad(void)

{
  if (DAT_14cac9420 == 0) {
    FUN_1409ce572(&DAT_14cac9420,&PTR_FUN_14a77c6b0);
  }
  return DAT_14cac9420;
}



// FUNCTION 14639c1dc FUN_14639c1dc body=47 status=ok
// SIG undefined FUN_14639c1dc(void)

longlong FUN_14639c1dc(void)

{
  if (DAT_14cac9438 == 0) {
    FUN_1409ce572(&DAT_14cac9438,&PTR_FUN_14a77c760);
  }
  return DAT_14cac9438;
}



// FUNCTION 14639c20b FUN_14639c20b body=47 status=ok
// SIG undefined FUN_14639c20b(void)

longlong FUN_14639c20b(void)

{
  if (DAT_14cac9450 == 0) {
    FUN_1409ce572(&DAT_14cac9450,&PTR_FUN_14a77c830);
  }
  return DAT_14cac9450;
}



// FUNCTION 14639c23a FUN_14639c23a body=47 status=ok
// SIG undefined FUN_14639c23a(void)

longlong FUN_14639c23a(void)

{
  if (DAT_14cac9468 == 0) {
    FUN_14000fc22(&DAT_14cac9468,&PTR_FUN_14a77ca30);
  }
  return DAT_14cac9468;
}



// FUNCTION 14639c269 FUN_14639c269 body=47 status=ok
// SIG undefined FUN_14639c269(void)

longlong FUN_14639c269(void)

{
  if (DAT_14cac9470 == 0) {
    FUN_14000fc22(&DAT_14cac9470,&PTR_FUN_14a77cc30);
  }
  return DAT_14cac9470;
}



// FUNCTION 14639c298 FUN_14639c298 body=47 status=ok
// SIG undefined FUN_14639c298(void)

longlong FUN_14639c298(void)

{
  if (DAT_14cac9478 == 0) {
    FUN_14000fc22(&DAT_14cac9478,&PTR_FUN_14a77cd70);
  }
  return DAT_14cac9478;
}



// FUNCTION 14639c2c7 FUN_14639c2c7 body=49 status=ok
// SIG undefined FUN_14639c2c7(void)

longlong FUN_14639c2c7(void)

{
  if (DAT_14cac9480 == 0) {
    FUN_14000fc22(&DAT_14cac9480,&PTR_FUN_14a77ceb8);
  }
  return DAT_14cac9480;
}



// FUNCTION 14639c2f8 FUN_14639c2f8 body=55 status=ok
// SIG undefined FUN_14639c2f8(void)

void FUN_14639c2f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac9490 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac9490 = FUN_140002ddd(FUN_14639c32f,uVar1,L"QuartzClockSettings");
  }
  return;
}



// FUNCTION 14639c32f FUN_14639c32f body=47 status=ok
// SIG undefined FUN_14639c32f(void)

longlong FUN_14639c32f(void)

{
  if (DAT_14cac9488 == 0) {
    FUN_14086a14e(&DAT_14cac9488,&PTR_FUN_14a77cff8);
  }
  return DAT_14cac9488;
}



// FUNCTION 14639c35e FUN_14639c35e body=48 status=ok
// SIG undefined FUN_14639c35e(void)

void FUN_14639c35e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a78cdb0;
  return;
}



// FUNCTION 14639c38e FUN_14639c38e body=55 status=ok
// SIG undefined FUN_14639c38e(void)

void FUN_14639c38e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac94a8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac94a8 = FUN_140002ddd(FUN_1417b0ef7,uVar1,L"QuartzQuantizationBoundary");
  }
  return;
}



// FUNCTION 14639c3c6 FUN_14639c3c6 body=48 status=ok
// SIG undefined FUN_14639c3c6(void)

void FUN_14639c3c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a78cf10;
  return;
}



// FUNCTION 14639c3f6 FUN_14639c3f6 body=47 status=ok
// SIG undefined FUN_14639c3f6(void)

longlong FUN_14639c3f6(void)

{
  if (DAT_14cac9660 == 0) {
    FUN_1409ce572(&DAT_14cac9660,&PTR_FUN_14a77ea20);
  }
  return DAT_14cac9660;
}



// FUNCTION 14639c425 FUN_14639c425 body=47 status=ok
// SIG undefined FUN_14639c425(void)

longlong FUN_14639c425(void)

{
  if (DAT_14cac9678 == 0) {
    FUN_1409ce572(&DAT_14cac9678,&PTR_FUN_14a77eaa0);
  }
  return DAT_14cac9678;
}



// FUNCTION 14639c454 FUN_14639c454 body=47 status=ok
// SIG undefined FUN_14639c454(void)

longlong FUN_14639c454(void)

{
  if (DAT_14cac9690 == 0) {
    FUN_1409ce572(&DAT_14cac9690,&PTR_FUN_14a77eb30);
  }
  return DAT_14cac9690;
}



// FUNCTION 14639c483 FUN_14639c483 body=47 status=ok
// SIG undefined FUN_14639c483(void)

longlong FUN_14639c483(void)

{
  if (DAT_14cac96a8 == 0) {
    FUN_1409ce572(&DAT_14cac96a8,&PTR_FUN_14a77ebc0);
  }
  return DAT_14cac96a8;
}



// FUNCTION 14639c4b2 FUN_14639c4b2 body=47 status=ok
// SIG undefined FUN_14639c4b2(void)

longlong FUN_14639c4b2(void)

{
  if (DAT_14cac96c0 == 0) {
    FUN_14000fc22(&DAT_14cac96c0,&PTR_FUN_14a77ed98);
  }
  return DAT_14cac96c0;
}



// FUNCTION 14639c4e1 FUN_14639c4e1 body=47 status=ok
// SIG undefined FUN_14639c4e1(void)

longlong FUN_14639c4e1(void)

{
  if (DAT_14cac96c8 == 0) {
    FUN_14000fc22(&DAT_14cac96c8,&PTR_FUN_14a77f0a8);
  }
  return DAT_14cac96c8;
}



// FUNCTION 14639c510 FUN_14639c510 body=47 status=ok
// SIG undefined FUN_14639c510(void)

longlong FUN_14639c510(void)

{
  if (DAT_14cac96d0 == 0) {
    FUN_14000fc22(&DAT_14cac96d0,&PTR_FUN_14a77f318);
  }
  return DAT_14cac96d0;
}



// FUNCTION 14639c53f FUN_14639c53f body=47 status=ok
// SIG undefined FUN_14639c53f(void)

longlong FUN_14639c53f(void)

{
  if (DAT_14cac96d8 == 0) {
    FUN_14000fc22(&DAT_14cac96d8,&PTR_FUN_14a77f420);
  }
  return DAT_14cac96d8;
}



// FUNCTION 14639c56e FUN_14639c56e body=47 status=ok
// SIG undefined FUN_14639c56e(void)

longlong FUN_14639c56e(void)

{
  if (DAT_14cac96e0 == 0) {
    FUN_14000fc22(&DAT_14cac96e0,&PTR_FUN_14a77f520);
  }
  return DAT_14cac96e0;
}



// FUNCTION 14639c59d FUN_14639c59d body=47 status=ok
// SIG undefined FUN_14639c59d(void)

longlong FUN_14639c59d(void)

{
  if (DAT_14cac96e8 == 0) {
    FUN_14000fc22(&DAT_14cac96e8,&PTR_FUN_14a77f6b8);
  }
  return DAT_14cac96e8;
}



// FUNCTION 14639c5cc FUN_14639c5cc body=47 status=ok
// SIG undefined FUN_14639c5cc(void)

longlong FUN_14639c5cc(void)

{
  if (DAT_14cac96f0 == 0) {
    FUN_14000fc22(&DAT_14cac96f0,&PTR_FUN_14a77f788);
  }
  return DAT_14cac96f0;
}



// FUNCTION 14639c5fb FUN_14639c5fb body=47 status=ok
// SIG undefined FUN_14639c5fb(void)

longlong FUN_14639c5fb(void)

{
  if (DAT_14cac96f8 == 0) {
    FUN_14000fc22(&DAT_14cac96f8,&PTR_FUN_14a77f840);
  }
  return DAT_14cac96f8;
}



// FUNCTION 14639c62a FUN_14639c62a body=47 status=ok
// SIG undefined FUN_14639c62a(void)

longlong FUN_14639c62a(void)

{
  if (DAT_14cac9700 == 0) {
    FUN_14000fc22(&DAT_14cac9700,&PTR_FUN_14a77f940);
  }
  return DAT_14cac9700;
}



// FUNCTION 14639c659 FUN_14639c659 body=47 status=ok
// SIG undefined FUN_14639c659(void)

longlong FUN_14639c659(void)

{
  if (DAT_14cac9708 == 0) {
    FUN_14000fc22(&DAT_14cac9708,&PTR_FUN_14a77fa40);
  }
  return DAT_14cac9708;
}



// FUNCTION 14639c688 FUN_14639c688 body=47 status=ok
// SIG undefined FUN_14639c688(void)

longlong FUN_14639c688(void)

{
  if (DAT_14cac9710 == 0) {
    FUN_14000fc22(&DAT_14cac9710,&PTR_FUN_14a77fb48);
  }
  return DAT_14cac9710;
}



// FUNCTION 14639c6b7 FUN_14639c6b7 body=47 status=ok
// SIG undefined FUN_14639c6b7(void)

longlong FUN_14639c6b7(void)

{
  if (DAT_14cac9718 == 0) {
    FUN_14000fc22(&DAT_14cac9718,&PTR_FUN_14a77fc58);
  }
  return DAT_14cac9718;
}



// FUNCTION 14639c6e6 FUN_14639c6e6 body=47 status=ok
// SIG undefined FUN_14639c6e6(void)

longlong FUN_14639c6e6(void)

{
  if (DAT_14cac9720 == 0) {
    FUN_14000fc22(&DAT_14cac9720,&PTR_FUN_14a77fd60);
  }
  return DAT_14cac9720;
}



// FUNCTION 14639c715 FUN_14639c715 body=47 status=ok
// SIG undefined FUN_14639c715(void)

longlong FUN_14639c715(void)

{
  if (DAT_14cac9728 == 0) {
    FUN_14000fc22(&DAT_14cac9728,&PTR_FUN_14a77fe60);
  }
  return DAT_14cac9728;
}



// FUNCTION 14639c744 FUN_14639c744 body=47 status=ok
// SIG undefined FUN_14639c744(void)

longlong FUN_14639c744(void)

{
  if (DAT_14cac9730 == 0) {
    FUN_14000fc22(&DAT_14cac9730,&PTR_FUN_14a77ff18);
  }
  return DAT_14cac9730;
}



// FUNCTION 14639c773 FUN_14639c773 body=47 status=ok
// SIG undefined FUN_14639c773(void)

longlong FUN_14639c773(void)

{
  if (DAT_14cac9738 == 0) {
    FUN_14000fc22(&DAT_14cac9738,&PTR_FUN_14a780020);
  }
  return DAT_14cac9738;
}



// FUNCTION 14639c7a2 FUN_14639c7a2 body=47 status=ok
// SIG undefined FUN_14639c7a2(void)

longlong FUN_14639c7a2(void)

{
  if (DAT_14cac9740 == 0) {
    FUN_14000fc22(&DAT_14cac9740,&PTR_FUN_14a780100);
  }
  return DAT_14cac9740;
}



// FUNCTION 14639c7d1 FUN_14639c7d1 body=47 status=ok
// SIG undefined FUN_14639c7d1(void)

longlong FUN_14639c7d1(void)

{
  if (DAT_14cac9748 == 0) {
    FUN_14000fc22(&DAT_14cac9748,&PTR_FUN_14a780350);
  }
  return DAT_14cac9748;
}



// FUNCTION 14639c800 FUN_14639c800 body=47 status=ok
// SIG undefined FUN_14639c800(void)

longlong FUN_14639c800(void)

{
  if (DAT_14cac9750 == 0) {
    FUN_14000fc22(&DAT_14cac9750,&PTR_FUN_14a780520);
  }
  return DAT_14cac9750;
}



// FUNCTION 14639c82f FUN_14639c82f body=47 status=ok
// SIG undefined FUN_14639c82f(void)

longlong FUN_14639c82f(void)

{
  if (DAT_14cac9758 == 0) {
    FUN_14000fc22(&DAT_14cac9758,&PTR_FUN_14a7805a8);
  }
  return DAT_14cac9758;
}



// FUNCTION 14639c85e FUN_14639c85e body=47 status=ok
// SIG undefined FUN_14639c85e(void)

longlong FUN_14639c85e(void)

{
  if (DAT_14cac9760 == 0) {
    FUN_14000fc22(&DAT_14cac9760,&PTR_FUN_14a780630);
  }
  return DAT_14cac9760;
}



// FUNCTION 14639c88d FUN_14639c88d body=47 status=ok
// SIG undefined FUN_14639c88d(void)

longlong FUN_14639c88d(void)

{
  if (DAT_14cac9768 == 0) {
    FUN_14000fc22(&DAT_14cac9768,&PTR_FUN_14a7806d0);
  }
  return DAT_14cac9768;
}



// FUNCTION 14639c8bc FUN_14639c8bc body=47 status=ok
// SIG undefined FUN_14639c8bc(void)

longlong FUN_14639c8bc(void)

{
  if (DAT_14cac9770 == 0) {
    FUN_14000fc22(&DAT_14cac9770,&PTR_FUN_14a780790);
  }
  return DAT_14cac9770;
}



// FUNCTION 14639c8eb FUN_14639c8eb body=47 status=ok
// SIG undefined FUN_14639c8eb(void)

longlong FUN_14639c8eb(void)

{
  if (DAT_14cac9778 == 0) {
    FUN_14000fc22(&DAT_14cac9778,&PTR_FUN_14a780838);
  }
  return DAT_14cac9778;
}



// FUNCTION 14639c91a FUN_14639c91a body=47 status=ok
// SIG undefined FUN_14639c91a(void)

longlong FUN_14639c91a(void)

{
  if (DAT_14cac9780 == 0) {
    FUN_14000fc22(&DAT_14cac9780,&PTR_FUN_14a7808d0);
  }
  return DAT_14cac9780;
}



// FUNCTION 14639c949 FUN_14639c949 body=47 status=ok
// SIG undefined FUN_14639c949(void)

longlong FUN_14639c949(void)

{
  if (DAT_14cac9788 == 0) {
    FUN_14000fc22(&DAT_14cac9788,&PTR_FUN_14a780968);
  }
  return DAT_14cac9788;
}



// FUNCTION 14639c978 FUN_14639c978 body=47 status=ok
// SIG undefined FUN_14639c978(void)

longlong FUN_14639c978(void)

{
  if (DAT_14cac9790 == 0) {
    FUN_14000fc22(&DAT_14cac9790,&PTR_FUN_14a780aa0);
  }
  return DAT_14cac9790;
}



// FUNCTION 14639c9a7 FUN_14639c9a7 body=47 status=ok
// SIG undefined FUN_14639c9a7(void)

longlong FUN_14639c9a7(void)

{
  if (DAT_14cac9798 == 0) {
    FUN_14000fc22(&DAT_14cac9798,&PTR_FUN_14a780bd0);
  }
  return DAT_14cac9798;
}



// FUNCTION 14639c9d6 FUN_14639c9d6 body=47 status=ok
// SIG undefined FUN_14639c9d6(void)

longlong FUN_14639c9d6(void)

{
  if (DAT_14cac97a0 == 0) {
    FUN_14000fc22(&DAT_14cac97a0,&PTR_FUN_14a780c10);
  }
  return DAT_14cac97a0;
}



// FUNCTION 14639ca05 FUN_14639ca05 body=47 status=ok
// SIG undefined FUN_14639ca05(void)

longlong FUN_14639ca05(void)

{
  if (DAT_14cac97a8 == 0) {
    FUN_14000fc22(&DAT_14cac97a8,&PTR_FUN_14a780c60);
  }
  return DAT_14cac97a8;
}



// FUNCTION 14639ca34 FUN_14639ca34 body=47 status=ok
// SIG undefined FUN_14639ca34(void)

longlong FUN_14639ca34(void)

{
  if (DAT_14cac97b0 == 0) {
    FUN_14000fc22(&DAT_14cac97b0,&PTR_FUN_14a780d10);
  }
  return DAT_14cac97b0;
}



// FUNCTION 14639ca63 FUN_14639ca63 body=47 status=ok
// SIG undefined FUN_14639ca63(void)

longlong FUN_14639ca63(void)

{
  if (DAT_14cac97b8 == 0) {
    FUN_14000fc22(&DAT_14cac97b8,&PTR_FUN_14a780e70);
  }
  return DAT_14cac97b8;
}



// FUNCTION 14639ca92 FUN_14639ca92 body=47 status=ok
// SIG undefined FUN_14639ca92(void)

longlong FUN_14639ca92(void)

{
  if (DAT_14cac97c0 == 0) {
    FUN_14000fc22(&DAT_14cac97c0,&PTR_FUN_14a780f10);
  }
  return DAT_14cac97c0;
}



// FUNCTION 14639cac1 FUN_14639cac1 body=47 status=ok
// SIG undefined FUN_14639cac1(void)

longlong FUN_14639cac1(void)

{
  if (DAT_14cac97c8 == 0) {
    FUN_14000fc22(&DAT_14cac97c8,&PTR_FUN_14a780ff8);
  }
  return DAT_14cac97c8;
}



// FUNCTION 14639caf0 FUN_14639caf0 body=47 status=ok
// SIG undefined FUN_14639caf0(void)

longlong FUN_14639caf0(void)

{
  if (DAT_14cac97d0 == 0) {
    FUN_14000fc22(&DAT_14cac97d0,&PTR_FUN_14a781098);
  }
  return DAT_14cac97d0;
}



// FUNCTION 14639cb1f FUN_14639cb1f body=47 status=ok
// SIG undefined FUN_14639cb1f(void)

longlong FUN_14639cb1f(void)

{
  if (DAT_14cac97d8 == 0) {
    FUN_14000fc22(&DAT_14cac97d8,&PTR_FUN_14a781138);
  }
  return DAT_14cac97d8;
}



// FUNCTION 14639cb4e FUN_14639cb4e body=47 status=ok
// SIG undefined FUN_14639cb4e(void)

longlong FUN_14639cb4e(void)

{
  if (DAT_14cac97e0 == 0) {
    FUN_14000fc22(&DAT_14cac97e0,&PTR_FUN_14a7811d8);
  }
  return DAT_14cac97e0;
}



// FUNCTION 14639cb7d FUN_14639cb7d body=47 status=ok
// SIG undefined FUN_14639cb7d(void)

longlong FUN_14639cb7d(void)

{
  if (DAT_14cac97e8 == 0) {
    FUN_14000fc22(&DAT_14cac97e8,&PTR_FUN_14a781270);
  }
  return DAT_14cac97e8;
}



// FUNCTION 14639cbac FUN_14639cbac body=47 status=ok
// SIG undefined FUN_14639cbac(void)

longlong FUN_14639cbac(void)

{
  if (DAT_14cac97f0 == 0) {
    FUN_14000fc22(&DAT_14cac97f0,&PTR_FUN_14a781308);
  }
  return DAT_14cac97f0;
}



// FUNCTION 14639cbdb FUN_14639cbdb body=47 status=ok
// SIG undefined FUN_14639cbdb(void)

longlong FUN_14639cbdb(void)

{
  if (DAT_14cac97f8 == 0) {
    FUN_14000fc22(&DAT_14cac97f8,&PTR_FUN_14a7813a0);
  }
  return DAT_14cac97f8;
}



// FUNCTION 14639cc0a FUN_14639cc0a body=47 status=ok
// SIG undefined FUN_14639cc0a(void)

longlong FUN_14639cc0a(void)

{
  if (DAT_14cac9800 == 0) {
    FUN_14000fc22(&DAT_14cac9800,&PTR_FUN_14a781440);
  }
  return DAT_14cac9800;
}



// FUNCTION 14639cc39 FUN_14639cc39 body=47 status=ok
// SIG undefined FUN_14639cc39(void)

longlong FUN_14639cc39(void)

{
  if (DAT_14cac9808 == 0) {
    FUN_14000fc22(&DAT_14cac9808,&PTR_FUN_14a781590);
  }
  return DAT_14cac9808;
}



// FUNCTION 14639cc68 FUN_14639cc68 body=47 status=ok
// SIG undefined FUN_14639cc68(void)

longlong FUN_14639cc68(void)

{
  if (DAT_14cac9810 == 0) {
    FUN_14000fc22(&DAT_14cac9810,&PTR_FUN_14a781630);
  }
  return DAT_14cac9810;
}



// FUNCTION 14639cc97 FUN_14639cc97 body=47 status=ok
// SIG undefined FUN_14639cc97(void)

longlong FUN_14639cc97(void)

{
  if (DAT_14cac9818 == 0) {
    FUN_14000fc22(&DAT_14cac9818,&PTR_FUN_14a7816d0);
  }
  return DAT_14cac9818;
}



// FUNCTION 14639ccc6 FUN_14639ccc6 body=47 status=ok
// SIG undefined FUN_14639ccc6(void)

longlong FUN_14639ccc6(void)

{
  if (DAT_14cac9820 == 0) {
    FUN_14000fc22(&DAT_14cac9820,&PTR_FUN_14a781770);
  }
  return DAT_14cac9820;
}



// FUNCTION 14639ccf5 FUN_14639ccf5 body=47 status=ok
// SIG undefined FUN_14639ccf5(void)

longlong FUN_14639ccf5(void)

{
  if (DAT_14cac9828 == 0) {
    FUN_14000fc22(&DAT_14cac9828,&PTR_FUN_14a781918);
  }
  return DAT_14cac9828;
}



// FUNCTION 14639cd24 FUN_14639cd24 body=47 status=ok
// SIG undefined FUN_14639cd24(void)

longlong FUN_14639cd24(void)

{
  if (DAT_14cac9830 == 0) {
    FUN_14000fc22(&DAT_14cac9830,&PTR_FUN_14a7819b8);
  }
  return DAT_14cac9830;
}



// FUNCTION 14639cd53 FUN_14639cd53 body=47 status=ok
// SIG undefined FUN_14639cd53(void)

longlong FUN_14639cd53(void)

{
  if (DAT_14cac9838 == 0) {
    FUN_14000fc22(&DAT_14cac9838,&PTR_FUN_14a781a58);
  }
  return DAT_14cac9838;
}



// FUNCTION 14639cd82 FUN_14639cd82 body=47 status=ok
// SIG undefined FUN_14639cd82(void)

longlong FUN_14639cd82(void)

{
  if (DAT_14cac9840 == 0) {
    FUN_14000fc22(&DAT_14cac9840,&PTR_FUN_14a781b48);
  }
  return DAT_14cac9840;
}



// FUNCTION 14639cdb1 FUN_14639cdb1 body=47 status=ok
// SIG undefined FUN_14639cdb1(void)

longlong FUN_14639cdb1(void)

{
  if (DAT_14cac9848 == 0) {
    FUN_14000fc22(&DAT_14cac9848,&PTR_FUN_14a781c88);
  }
  return DAT_14cac9848;
}



// FUNCTION 14639cde0 FUN_14639cde0 body=47 status=ok
// SIG undefined FUN_14639cde0(void)

longlong FUN_14639cde0(void)

{
  if (DAT_14cac9850 == 0) {
    FUN_14000fc22(&DAT_14cac9850,&PTR_FUN_14a781df8);
  }
  return DAT_14cac9850;
}



// FUNCTION 14639ce0f FUN_14639ce0f body=47 status=ok
// SIG undefined FUN_14639ce0f(void)

longlong FUN_14639ce0f(void)

{
  if (DAT_14cac9858 == 0) {
    FUN_14000fc22(&DAT_14cac9858,&PTR_FUN_14a781ed0);
  }
  return DAT_14cac9858;
}



// FUNCTION 14639ce3e FUN_14639ce3e body=47 status=ok
// SIG undefined FUN_14639ce3e(void)

longlong FUN_14639ce3e(void)

{
  if (DAT_14cac9860 == 0) {
    FUN_14000fc22(&DAT_14cac9860,&PTR_FUN_14a781fb0);
  }
  return DAT_14cac9860;
}



// FUNCTION 14639ce6d FUN_14639ce6d body=47 status=ok
// SIG undefined FUN_14639ce6d(void)

longlong FUN_14639ce6d(void)

{
  if (DAT_14cac9868 == 0) {
    FUN_14000fc22(&DAT_14cac9868,&PTR_FUN_14a782050);
  }
  return DAT_14cac9868;
}



// FUNCTION 14639ce9c FUN_14639ce9c body=47 status=ok
// SIG undefined FUN_14639ce9c(void)

longlong FUN_14639ce9c(void)

{
  if (DAT_14cac9870 == 0) {
    FUN_14000fc22(&DAT_14cac9870,&PTR_FUN_14a782138);
  }
  return DAT_14cac9870;
}



// FUNCTION 14639cecb FUN_14639cecb body=47 status=ok
// SIG undefined FUN_14639cecb(void)

longlong FUN_14639cecb(void)

{
  if (DAT_14cac9878 == 0) {
    FUN_14000fc22(&DAT_14cac9878,&PTR_FUN_14a782220);
  }
  return DAT_14cac9878;
}



// FUNCTION 14639cefa FUN_14639cefa body=47 status=ok
// SIG undefined FUN_14639cefa(void)

longlong FUN_14639cefa(void)

{
  if (DAT_14cac9880 == 0) {
    FUN_14000fc22(&DAT_14cac9880,&PTR_FUN_14a782318);
  }
  return DAT_14cac9880;
}



// FUNCTION 14639cf29 FUN_14639cf29 body=47 status=ok
// SIG undefined FUN_14639cf29(void)

longlong FUN_14639cf29(void)

{
  if (DAT_14cac9888 == 0) {
    FUN_14000fc22(&DAT_14cac9888,&PTR_FUN_14a7823f8);
  }
  return DAT_14cac9888;
}



// FUNCTION 14639cf58 FUN_14639cf58 body=47 status=ok
// SIG undefined FUN_14639cf58(void)

longlong FUN_14639cf58(void)

{
  if (DAT_14cac9890 == 0) {
    FUN_14000fc22(&DAT_14cac9890,&PTR_FUN_14a7824e8);
  }
  return DAT_14cac9890;
}



// FUNCTION 14639cf87 FUN_14639cf87 body=47 status=ok
// SIG undefined FUN_14639cf87(void)

longlong FUN_14639cf87(void)

{
  if (DAT_14cac9898 == 0) {
    FUN_14000fc22(&DAT_14cac9898,&PTR_FUN_14a782580);
  }
  return DAT_14cac9898;
}



// FUNCTION 14639cfb6 FUN_14639cfb6 body=47 status=ok
// SIG undefined FUN_14639cfb6(void)

longlong FUN_14639cfb6(void)

{
  if (DAT_14cac98a0 == 0) {
    FUN_14000fc22(&DAT_14cac98a0,&PTR_FUN_14a782620);
  }
  return DAT_14cac98a0;
}



// FUNCTION 14639cfe5 FUN_14639cfe5 body=47 status=ok
// SIG undefined FUN_14639cfe5(void)

longlong FUN_14639cfe5(void)

{
  if (DAT_14cac98a8 == 0) {
    FUN_14000fc22(&DAT_14cac98a8,&PTR_FUN_14a7826b8);
  }
  return DAT_14cac98a8;
}



// FUNCTION 14639d014 FUN_14639d014 body=47 status=ok
// SIG undefined FUN_14639d014(void)

longlong FUN_14639d014(void)

{
  if (DAT_14cac98b0 == 0) {
    FUN_14000fc22(&DAT_14cac98b0,&PTR_FUN_14a782758);
  }
  return DAT_14cac98b0;
}



// FUNCTION 14639d043 FUN_14639d043 body=47 status=ok
// SIG undefined FUN_14639d043(void)

longlong FUN_14639d043(void)

{
  if (DAT_14cac98b8 == 0) {
    FUN_14000fc22(&DAT_14cac98b8,&PTR_FUN_14a7827e8);
  }
  return DAT_14cac98b8;
}



// FUNCTION 14639d072 FUN_14639d072 body=47 status=ok
// SIG undefined FUN_14639d072(void)

longlong FUN_14639d072(void)

{
  if (DAT_14cac98c0 == 0) {
    FUN_14000fc22(&DAT_14cac98c0,&PTR_FUN_14a782880);
  }
  return DAT_14cac98c0;
}



// FUNCTION 14639d0a1 FUN_14639d0a1 body=47 status=ok
// SIG undefined FUN_14639d0a1(void)

longlong FUN_14639d0a1(void)

{
  if (DAT_14cac98c8 == 0) {
    FUN_14000fc22(&DAT_14cac98c8,&PTR_FUN_14a782920);
  }
  return DAT_14cac98c8;
}



// FUNCTION 14639d0d0 FUN_14639d0d0 body=47 status=ok
// SIG undefined FUN_14639d0d0(void)

longlong FUN_14639d0d0(void)

{
  if (DAT_14cac98d0 == 0) {
    FUN_14000fc22(&DAT_14cac98d0,&PTR_FUN_14a7829c0);
  }
  return DAT_14cac98d0;
}



// FUNCTION 14639d0ff FUN_14639d0ff body=47 status=ok
// SIG undefined FUN_14639d0ff(void)

longlong FUN_14639d0ff(void)

{
  if (DAT_14cac98d8 == 0) {
    FUN_14000fc22(&DAT_14cac98d8,&PTR_FUN_14a782a58);
  }
  return DAT_14cac98d8;
}



// FUNCTION 14639d12e FUN_14639d12e body=47 status=ok
// SIG undefined FUN_14639d12e(void)

longlong FUN_14639d12e(void)

{
  if (DAT_14cac98e0 == 0) {
    FUN_14000fc22(&DAT_14cac98e0,&PTR_FUN_14a782b78);
  }
  return DAT_14cac98e0;
}



// FUNCTION 14639d15d FUN_14639d15d body=47 status=ok
// SIG undefined FUN_14639d15d(void)

longlong FUN_14639d15d(void)

{
  if (DAT_14cac98e8 == 0) {
    FUN_14000fc22(&DAT_14cac98e8,&PTR_FUN_14a782c60);
  }
  return DAT_14cac98e8;
}



// FUNCTION 14639d18c FUN_14639d18c body=47 status=ok
// SIG undefined FUN_14639d18c(void)

longlong FUN_14639d18c(void)

{
  if (DAT_14cac98f0 == 0) {
    FUN_14000fc22(&DAT_14cac98f0,&PTR_FUN_14a782ce8);
  }
  return DAT_14cac98f0;
}



// FUNCTION 14639d1bb FUN_14639d1bb body=47 status=ok
// SIG undefined FUN_14639d1bb(void)

longlong FUN_14639d1bb(void)

{
  if (DAT_14cac98f8 == 0) {
    FUN_14000fc22(&DAT_14cac98f8,&PTR_FUN_14a782d80);
  }
  return DAT_14cac98f8;
}



// FUNCTION 14639d1ea FUN_14639d1ea body=47 status=ok
// SIG undefined FUN_14639d1ea(void)

longlong FUN_14639d1ea(void)

{
  if (DAT_14cac9900 == 0) {
    FUN_14000fc22(&DAT_14cac9900,&PTR_FUN_14a782e20);
  }
  return DAT_14cac9900;
}



// FUNCTION 14639d219 FUN_14639d219 body=47 status=ok
// SIG undefined FUN_14639d219(void)

longlong FUN_14639d219(void)

{
  if (DAT_14cac9908 == 0) {
    FUN_14000fc22(&DAT_14cac9908,&PTR_FUN_14a782f10);
  }
  return DAT_14cac9908;
}



// FUNCTION 14639d248 FUN_14639d248 body=47 status=ok
// SIG undefined FUN_14639d248(void)

longlong FUN_14639d248(void)

{
  if (DAT_14cac9910 == 0) {
    FUN_14000fc22(&DAT_14cac9910,&PTR_FUN_14a782fa8);
  }
  return DAT_14cac9910;
}



// FUNCTION 14639d277 FUN_14639d277 body=47 status=ok
// SIG undefined FUN_14639d277(void)

longlong FUN_14639d277(void)

{
  if (DAT_14cac9918 == 0) {
    FUN_14000fc22(&DAT_14cac9918,&PTR_FUN_14a783040);
  }
  return DAT_14cac9918;
}



// FUNCTION 14639d2a6 FUN_14639d2a6 body=47 status=ok
// SIG undefined FUN_14639d2a6(void)

longlong FUN_14639d2a6(void)

{
  if (DAT_14cac9920 == 0) {
    FUN_14000fc22(&DAT_14cac9920,&PTR_FUN_14a7830e0);
  }
  return DAT_14cac9920;
}



// FUNCTION 14639d2d5 FUN_14639d2d5 body=47 status=ok
// SIG undefined FUN_14639d2d5(void)

longlong FUN_14639d2d5(void)

{
  if (DAT_14cac9928 == 0) {
    FUN_14000fc22(&DAT_14cac9928,&PTR_FUN_14a7831c8);
  }
  return DAT_14cac9928;
}



// FUNCTION 14639d304 FUN_14639d304 body=47 status=ok
// SIG undefined FUN_14639d304(void)

longlong FUN_14639d304(void)

{
  if (DAT_14cac9930 == 0) {
    FUN_14000fc22(&DAT_14cac9930,&PTR_FUN_14a7832b0);
  }
  return DAT_14cac9930;
}



// FUNCTION 14639d333 FUN_14639d333 body=47 status=ok
// SIG undefined FUN_14639d333(void)

longlong FUN_14639d333(void)

{
  if (DAT_14cac9938 == 0) {
    FUN_14000fc22(&DAT_14cac9938,&PTR_FUN_14a783350);
  }
  return DAT_14cac9938;
}



// FUNCTION 14639d362 FUN_14639d362 body=47 status=ok
// SIG undefined FUN_14639d362(void)

longlong FUN_14639d362(void)

{
  if (DAT_14cac9940 == 0) {
    FUN_14000fc22(&DAT_14cac9940,&PTR_FUN_14a7833e8);
  }
  return DAT_14cac9940;
}



// FUNCTION 14639d391 FUN_14639d391 body=47 status=ok
// SIG undefined FUN_14639d391(void)

longlong FUN_14639d391(void)

{
  if (DAT_14cac9948 == 0) {
    FUN_14000fc22(&DAT_14cac9948,&PTR_FUN_14a783480);
  }
  return DAT_14cac9948;
}



// FUNCTION 14639d3c0 FUN_14639d3c0 body=47 status=ok
// SIG undefined FUN_14639d3c0(void)

longlong FUN_14639d3c0(void)

{
  if (DAT_14cac9950 == 0) {
    FUN_14000fc22(&DAT_14cac9950,&PTR_FUN_14a783568);
  }
  return DAT_14cac9950;
}



// FUNCTION 14639d3ef FUN_14639d3ef body=47 status=ok
// SIG undefined FUN_14639d3ef(void)

longlong FUN_14639d3ef(void)

{
  if (DAT_14cac9958 == 0) {
    FUN_14000fc22(&DAT_14cac9958,&PTR_FUN_14a783600);
  }
  return DAT_14cac9958;
}



// FUNCTION 14639d41e FUN_14639d41e body=47 status=ok
// SIG undefined FUN_14639d41e(void)

longlong FUN_14639d41e(void)

{
  if (DAT_14cac9960 == 0) {
    FUN_14000fc22(&DAT_14cac9960,&PTR_FUN_14a7836a0);
  }
  return DAT_14cac9960;
}



// FUNCTION 14639d44d FUN_14639d44d body=47 status=ok
// SIG undefined FUN_14639d44d(void)

longlong FUN_14639d44d(void)

{
  if (DAT_14cac9968 == 0) {
    FUN_14000fc22(&DAT_14cac9968,&PTR_FUN_14a783740);
  }
  return DAT_14cac9968;
}



// FUNCTION 14639d47c FUN_14639d47c body=47 status=ok
// SIG undefined FUN_14639d47c(void)

longlong FUN_14639d47c(void)

{
  if (DAT_14cac9970 == 0) {
    FUN_14000fc22(&DAT_14cac9970,&PTR_FUN_14a7837d8);
  }
  return DAT_14cac9970;
}



// FUNCTION 14639d4ab FUN_14639d4ab body=47 status=ok
// SIG undefined FUN_14639d4ab(void)

longlong FUN_14639d4ab(void)

{
  if (DAT_14cac9978 == 0) {
    FUN_14000fc22(&DAT_14cac9978,&PTR_FUN_14a7838b0);
  }
  return DAT_14cac9978;
}



// FUNCTION 14639d4da FUN_14639d4da body=47 status=ok
// SIG undefined FUN_14639d4da(void)

longlong FUN_14639d4da(void)

{
  if (DAT_14cac9980 == 0) {
    FUN_14000fc22(&DAT_14cac9980,&PTR_FUN_14a783a28);
  }
  return DAT_14cac9980;
}



// FUNCTION 14639d509 FUN_14639d509 body=47 status=ok
// SIG undefined FUN_14639d509(void)

longlong FUN_14639d509(void)

{
  if (DAT_14cac9988 == 0) {
    FUN_14000fc22(&DAT_14cac9988,&PTR_FUN_14a783bb0);
  }
  return DAT_14cac9988;
}



// FUNCTION 14639d538 FUN_14639d538 body=47 status=ok
// SIG undefined FUN_14639d538(void)

longlong FUN_14639d538(void)

{
  if (DAT_14cac9990 == 0) {
    FUN_14000fc22(&DAT_14cac9990,&PTR_FUN_14a783d30);
  }
  return DAT_14cac9990;
}



// FUNCTION 14639d567 FUN_14639d567 body=47 status=ok
// SIG undefined FUN_14639d567(void)

longlong FUN_14639d567(void)

{
  if (DAT_14cac9998 == 0) {
    FUN_14000fc22(&DAT_14cac9998,&PTR_FUN_14a783ea8);
  }
  return DAT_14cac9998;
}



// FUNCTION 14639d596 FUN_14639d596 body=47 status=ok
// SIG undefined FUN_14639d596(void)

longlong FUN_14639d596(void)

{
  if (DAT_14cac99a0 == 0) {
    FUN_14000fc22(&DAT_14cac99a0,&PTR_FUN_14a784030);
  }
  return DAT_14cac99a0;
}



// FUNCTION 14639d5c5 FUN_14639d5c5 body=47 status=ok
// SIG undefined FUN_14639d5c5(void)

longlong FUN_14639d5c5(void)

{
  if (DAT_14cac99a8 == 0) {
    FUN_14000fc22(&DAT_14cac99a8,&PTR_FUN_14a7841b0);
  }
  return DAT_14cac99a8;
}



// FUNCTION 14639d5f4 FUN_14639d5f4 body=47 status=ok
// SIG undefined FUN_14639d5f4(void)

longlong FUN_14639d5f4(void)

{
  if (DAT_14cac99b0 == 0) {
    FUN_14000fc22(&DAT_14cac99b0,&PTR_FUN_14a784338);
  }
  return DAT_14cac99b0;
}



// FUNCTION 14639d623 FUN_14639d623 body=47 status=ok
// SIG undefined FUN_14639d623(void)

longlong FUN_14639d623(void)

{
  if (DAT_14cac99b8 == 0) {
    FUN_14000fc22(&DAT_14cac99b8,&PTR_FUN_14a7844d0);
  }
  return DAT_14cac99b8;
}



// FUNCTION 14639d652 FUN_14639d652 body=47 status=ok
// SIG undefined FUN_14639d652(void)

longlong FUN_14639d652(void)

{
  if (DAT_14cac99c0 == 0) {
    FUN_14000fc22(&DAT_14cac99c0,&PTR_FUN_14a784660);
  }
  return DAT_14cac99c0;
}



// FUNCTION 14639d681 FUN_14639d681 body=47 status=ok
// SIG undefined FUN_14639d681(void)

longlong FUN_14639d681(void)

{
  if (DAT_14cac99c8 == 0) {
    FUN_14000fc22(&DAT_14cac99c8,&PTR_FUN_14a784998);
  }
  return DAT_14cac99c8;
}



// FUNCTION 14639d6b0 FUN_14639d6b0 body=47 status=ok
// SIG undefined FUN_14639d6b0(void)

longlong FUN_14639d6b0(void)

{
  if (DAT_14cac99d0 == 0) {
    FUN_14000fc22(&DAT_14cac99d0,&PTR_FUN_14a784ca0);
  }
  return DAT_14cac99d0;
}



// FUNCTION 14639d6df FUN_14639d6df body=47 status=ok
// SIG undefined FUN_14639d6df(void)

longlong FUN_14639d6df(void)

{
  if (DAT_14cac99d8 == 0) {
    FUN_14000fc22(&DAT_14cac99d8,&PTR_FUN_14a784cf0);
  }
  return DAT_14cac99d8;
}



// FUNCTION 14639d70e FUN_14639d70e body=47 status=ok
// SIG undefined FUN_14639d70e(void)

longlong FUN_14639d70e(void)

{
  if (DAT_14cac99e0 == 0) {
    FUN_14000fc22(&DAT_14cac99e0,&PTR_FUN_14a784ef8);
  }
  return DAT_14cac99e0;
}



// FUNCTION 14639d73d FUN_14639d73d body=47 status=ok
// SIG undefined FUN_14639d73d(void)

longlong FUN_14639d73d(void)

{
  if (DAT_14cac99e8 == 0) {
    FUN_14000fc22(&DAT_14cac99e8,&PTR_FUN_14a784f98);
  }
  return DAT_14cac99e8;
}



// FUNCTION 14639d76c FUN_14639d76c body=47 status=ok
// SIG undefined FUN_14639d76c(void)

longlong FUN_14639d76c(void)

{
  if (DAT_14cac99f0 == 0) {
    FUN_14000fc22(&DAT_14cac99f0,&PTR_FUN_14a785038);
  }
  return DAT_14cac99f0;
}



// FUNCTION 14639d79b FUN_14639d79b body=47 status=ok
// SIG undefined FUN_14639d79b(void)

longlong FUN_14639d79b(void)

{
  if (DAT_14cac99f8 == 0) {
    FUN_14000fc22(&DAT_14cac99f8,&PTR_FUN_14a785170);
  }
  return DAT_14cac99f8;
}



// FUNCTION 14639d7ca FUN_14639d7ca body=47 status=ok
// SIG undefined FUN_14639d7ca(void)

longlong FUN_14639d7ca(void)

{
  if (DAT_14cac9a00 == 0) {
    FUN_14000fc22(&DAT_14cac9a00,&PTR_FUN_14a785210);
  }
  return DAT_14cac9a00;
}



// FUNCTION 14639d7f9 FUN_14639d7f9 body=47 status=ok
// SIG undefined FUN_14639d7f9(void)

longlong FUN_14639d7f9(void)

{
  if (DAT_14cac9a10 == 0) {
    FUN_14000fc22(&DAT_14cac9a10,&PTR_FUN_14a7852e0);
  }
  return DAT_14cac9a10;
}



// FUNCTION 14639d828 FUN_14639d828 body=47 status=ok
// SIG undefined FUN_14639d828(void)

longlong FUN_14639d828(void)

{
  if (DAT_14cac9a20 == 0) {
    FUN_14000fc22(&DAT_14cac9a20,&PTR_FUN_14a7853a8);
  }
  return DAT_14cac9a20;
}



// FUNCTION 14639d857 FUN_14639d857 body=47 status=ok
// SIG undefined FUN_14639d857(void)

longlong FUN_14639d857(void)

{
  if (DAT_14cac9a30 == 0) {
    FUN_14000fc22(&DAT_14cac9a30,&PTR_FUN_14a785410);
  }
  return DAT_14cac9a30;
}



// FUNCTION 14639d886 FUN_14639d886 body=47 status=ok
// SIG undefined FUN_14639d886(void)

longlong FUN_14639d886(void)

{
  if (DAT_14cac9a38 == 0) {
    FUN_14000fc22(&DAT_14cac9a38,&PTR_FUN_14a7855d0);
  }
  return DAT_14cac9a38;
}



// FUNCTION 14639d8b5 FUN_14639d8b5 body=47 status=ok
// SIG undefined FUN_14639d8b5(void)

longlong FUN_14639d8b5(void)

{
  if (DAT_14cac9a40 == 0) {
    FUN_14000fc22(&DAT_14cac9a40,&PTR_FUN_14a7857e0);
  }
  return DAT_14cac9a40;
}



// FUNCTION 14639d8e4 FUN_14639d8e4 body=47 status=ok
// SIG undefined FUN_14639d8e4(void)

longlong FUN_14639d8e4(void)

{
  if (DAT_14cac9a48 == 0) {
    FUN_14000fc22(&DAT_14cac9a48,&PTR_FUN_14a785980);
  }
  return DAT_14cac9a48;
}



// FUNCTION 14639d913 FUN_14639d913 body=47 status=ok
// SIG undefined FUN_14639d913(void)

longlong FUN_14639d913(void)

{
  if (DAT_14cac9a50 == 0) {
    FUN_14000fc22(&DAT_14cac9a50,&PTR_FUN_14a785b20);
  }
  return DAT_14cac9a50;
}



// FUNCTION 14639d942 FUN_14639d942 body=47 status=ok
// SIG undefined FUN_14639d942(void)

longlong FUN_14639d942(void)

{
  if (DAT_14cac9a58 == 0) {
    FUN_14000fc22(&DAT_14cac9a58,&PTR_FUN_14a785cc0);
  }
  return DAT_14cac9a58;
}



// FUNCTION 14639d971 FUN_14639d971 body=47 status=ok
// SIG undefined FUN_14639d971(void)

longlong FUN_14639d971(void)

{
  if (DAT_14cac9a60 == 0) {
    FUN_14000fc22(&DAT_14cac9a60,&PTR_FUN_14a785e10);
  }
  return DAT_14cac9a60;
}



// FUNCTION 14639d9a0 FUN_14639d9a0 body=47 status=ok
// SIG undefined FUN_14639d9a0(void)

longlong FUN_14639d9a0(void)

{
  if (DAT_14cac9a68 == 0) {
    FUN_14000fc22(&DAT_14cac9a68,&PTR_FUN_14a785fd0);
  }
  return DAT_14cac9a68;
}



// FUNCTION 14639d9cf FUN_14639d9cf body=47 status=ok
// SIG undefined FUN_14639d9cf(void)

longlong FUN_14639d9cf(void)

{
  if (DAT_14cac9a70 == 0) {
    FUN_14000fc22(&DAT_14cac9a70,&PTR_FUN_14a786108);
  }
  return DAT_14cac9a70;
}



// FUNCTION 14639d9fe FUN_14639d9fe body=47 status=ok
// SIG undefined FUN_14639d9fe(void)

longlong FUN_14639d9fe(void)

{
  if (DAT_14cac9a78 == 0) {
    FUN_14000fc22(&DAT_14cac9a78,&PTR_FUN_14a7862a8);
  }
  return DAT_14cac9a78;
}



// FUNCTION 14639da2d FUN_14639da2d body=47 status=ok
// SIG undefined FUN_14639da2d(void)

longlong FUN_14639da2d(void)

{
  if (DAT_14cac9a80 == 0) {
    FUN_14000fc22(&DAT_14cac9a80,&PTR_FUN_14a786308);
  }
  return DAT_14cac9a80;
}



// FUNCTION 14639da5c FUN_14639da5c body=47 status=ok
// SIG undefined FUN_14639da5c(void)

longlong FUN_14639da5c(void)

{
  if (DAT_14cac9a88 == 0) {
    FUN_14000fc22(&DAT_14cac9a88,&PTR_FUN_14a786360);
  }
  return DAT_14cac9a88;
}



// FUNCTION 14639da8b FUN_14639da8b body=47 status=ok
// SIG undefined FUN_14639da8b(void)

longlong FUN_14639da8b(void)

{
  if (DAT_14cac9a90 == 0) {
    FUN_14000fc22(&DAT_14cac9a90,&PTR_FUN_14a7863b0);
  }
  return DAT_14cac9a90;
}



// FUNCTION 14639daba FUN_14639daba body=47 status=ok
// SIG undefined FUN_14639daba(void)

longlong FUN_14639daba(void)

{
  if (DAT_14cac9a98 == 0) {
    FUN_14000fc22(&DAT_14cac9a98,&PTR_FUN_14a786410);
  }
  return DAT_14cac9a98;
}



// FUNCTION 14639dae9 FUN_14639dae9 body=47 status=ok
// SIG undefined FUN_14639dae9(void)

longlong FUN_14639dae9(void)

{
  if (DAT_14cac9aa0 == 0) {
    FUN_14000fc22(&DAT_14cac9aa0,&PTR_FUN_14a786468);
  }
  return DAT_14cac9aa0;
}



// FUNCTION 14639db18 FUN_14639db18 body=47 status=ok
// SIG undefined FUN_14639db18(void)

longlong FUN_14639db18(void)

{
  if (DAT_14cac9aa8 == 0) {
    FUN_14000fc22(&DAT_14cac9aa8,&PTR_FUN_14a786578);
  }
  return DAT_14cac9aa8;
}



// FUNCTION 14639db47 FUN_14639db47 body=47 status=ok
// SIG undefined FUN_14639db47(void)

longlong FUN_14639db47(void)

{
  if (DAT_14cac9ab8 == 0) {
    FUN_14000fc22(&DAT_14cac9ab8,&PTR_FUN_14a786610);
  }
  return DAT_14cac9ab8;
}



// FUNCTION 14639db76 FUN_14639db76 body=47 status=ok
// SIG undefined FUN_14639db76(void)

longlong FUN_14639db76(void)

{
  if (DAT_14cac9ac8 == 0) {
    FUN_14000fc22(&DAT_14cac9ac8,&PTR_FUN_14a7866f0);
  }
  return DAT_14cac9ac8;
}



// FUNCTION 14639dba5 FUN_14639dba5 body=47 status=ok
// SIG undefined FUN_14639dba5(void)

longlong FUN_14639dba5(void)

{
  if (DAT_14cac9ad8 == 0) {
    FUN_14000fc22(&DAT_14cac9ad8,&PTR_FUN_14a786780);
  }
  return DAT_14cac9ad8;
}



// FUNCTION 14639dbd4 FUN_14639dbd4 body=47 status=ok
// SIG undefined FUN_14639dbd4(void)

longlong FUN_14639dbd4(void)

{
  if (DAT_14cac9ae8 == 0) {
    FUN_14000fc22(&DAT_14cac9ae8,&PTR_FUN_14a786850);
  }
  return DAT_14cac9ae8;
}



// FUNCTION 14639dc03 FUN_14639dc03 body=47 status=ok
// SIG undefined FUN_14639dc03(void)

longlong FUN_14639dc03(void)

{
  if (DAT_14cac9af8 == 0) {
    FUN_14000fc22(&DAT_14cac9af8,&PTR_FUN_14a786920);
  }
  return DAT_14cac9af8;
}



// FUNCTION 14639dc32 FUN_14639dc32 body=47 status=ok
// SIG undefined FUN_14639dc32(void)

longlong FUN_14639dc32(void)

{
  if (DAT_14cac9b08 == 0) {
    FUN_14000fc22(&DAT_14cac9b08,&PTR_FUN_14a786a08);
  }
  return DAT_14cac9b08;
}



// FUNCTION 14639dc61 FUN_14639dc61 body=47 status=ok
// SIG undefined FUN_14639dc61(void)

longlong FUN_14639dc61(void)

{
  if (DAT_14cac9b18 == 0) {
    FUN_14000fc22(&DAT_14cac9b18,&PTR_FUN_14a786ae8);
  }
  return DAT_14cac9b18;
}



// FUNCTION 14639dc90 FUN_14639dc90 body=47 status=ok
// SIG undefined FUN_14639dc90(void)

longlong FUN_14639dc90(void)

{
  if (DAT_14cac9b28 == 0) {
    FUN_14000fc22(&DAT_14cac9b28,&PTR_FUN_14a786bd0);
  }
  return DAT_14cac9b28;
}



// FUNCTION 14639dcbf FUN_14639dcbf body=47 status=ok
// SIG undefined FUN_14639dcbf(void)

longlong FUN_14639dcbf(void)

{
  if (DAT_14cac9b38 == 0) {
    FUN_14000fc22(&DAT_14cac9b38,&PTR_FUN_14a786cb8);
  }
  return DAT_14cac9b38;
}



// FUNCTION 14639dcee FUN_14639dcee body=47 status=ok
// SIG undefined FUN_14639dcee(void)

longlong FUN_14639dcee(void)

{
  if (DAT_14cac9b48 == 0) {
    FUN_14000fc22(&DAT_14cac9b48,&PTR_FUN_14a786d88);
  }
  return DAT_14cac9b48;
}



// FUNCTION 14639dd1d FUN_14639dd1d body=47 status=ok
// SIG undefined FUN_14639dd1d(void)

longlong FUN_14639dd1d(void)

{
  if (DAT_14cac9b58 == 0) {
    FUN_14000fc22(&DAT_14cac9b58,&PTR_FUN_14a786f28);
  }
  return DAT_14cac9b58;
}



// FUNCTION 14639dd4c FUN_14639dd4c body=47 status=ok
// SIG undefined FUN_14639dd4c(void)

longlong FUN_14639dd4c(void)

{
  if (DAT_14cac9b68 == 0) {
    FUN_14000fc22(&DAT_14cac9b68,&PTR_FUN_14a786ff0);
  }
  return DAT_14cac9b68;
}



// FUNCTION 14639dd7b FUN_14639dd7b body=47 status=ok
// SIG undefined FUN_14639dd7b(void)

longlong FUN_14639dd7b(void)

{
  if (DAT_14cac9b78 == 0) {
    FUN_14000fc22(&DAT_14cac9b78,&PTR_FUN_14a787030);
  }
  return DAT_14cac9b78;
}



// FUNCTION 14639ddaa FUN_14639ddaa body=47 status=ok
// SIG undefined FUN_14639ddaa(void)

longlong FUN_14639ddaa(void)

{
  if (DAT_14cac9b88 == 0) {
    FUN_14000fc22(&DAT_14cac9b88,&PTR_FUN_14a7870a8);
  }
  return DAT_14cac9b88;
}



// FUNCTION 14639ddd9 FUN_14639ddd9 body=47 status=ok
// SIG undefined FUN_14639ddd9(void)

longlong FUN_14639ddd9(void)

{
  if (DAT_14cac9b98 == 0) {
    FUN_14000fc22(&DAT_14cac9b98,&PTR_FUN_14a787130);
  }
  return DAT_14cac9b98;
}



// FUNCTION 14639de08 FUN_14639de08 body=47 status=ok
// SIG undefined FUN_14639de08(void)

longlong FUN_14639de08(void)

{
  if (DAT_14cac9ba8 == 0) {
    FUN_14000fc22(&DAT_14cac9ba8,&PTR_FUN_14a7873f0);
  }
  return DAT_14cac9ba8;
}



// FUNCTION 14639de37 FUN_14639de37 body=47 status=ok
// SIG undefined FUN_14639de37(void)

longlong FUN_14639de37(void)

{
  if (DAT_14cac9bb8 == 0) {
    FUN_14000fc22(&DAT_14cac9bb8,&PTR_FUN_14a787738);
  }
  return DAT_14cac9bb8;
}



// FUNCTION 14639de66 FUN_14639de66 body=47 status=ok
// SIG undefined FUN_14639de66(void)

longlong FUN_14639de66(void)

{
  if (DAT_14cac9bc8 == 0) {
    FUN_14000fc22(&DAT_14cac9bc8,&PTR_FUN_14a787978);
  }
  return DAT_14cac9bc8;
}



// FUNCTION 14639de95 FUN_14639de95 body=47 status=ok
// SIG undefined FUN_14639de95(void)

longlong FUN_14639de95(void)

{
  if (DAT_14cac9bd8 == 0) {
    FUN_14000fc22(&DAT_14cac9bd8,&PTR_FUN_14a7879f8);
  }
  return DAT_14cac9bd8;
}



// FUNCTION 14639dec4 FUN_14639dec4 body=47 status=ok
// SIG undefined FUN_14639dec4(void)

longlong FUN_14639dec4(void)

{
  if (DAT_14cac9be0 == 0) {
    FUN_14000fc22(&DAT_14cac9be0,&PTR_FUN_14a787a80);
  }
  return DAT_14cac9be0;
}



// FUNCTION 14639def3 FUN_14639def3 body=47 status=ok
// SIG undefined FUN_14639def3(void)

longlong FUN_14639def3(void)

{
  if (DAT_14cac9be8 == 0) {
    FUN_14000fc22(&DAT_14cac9be8,&PTR_FUN_14a787b08);
  }
  return DAT_14cac9be8;
}



// FUNCTION 14639df22 FUN_14639df22 body=47 status=ok
// SIG undefined FUN_14639df22(void)

longlong FUN_14639df22(void)

{
  if (DAT_14cac9bf0 == 0) {
    FUN_14000fc22(&DAT_14cac9bf0,&PTR_FUN_14a787bc8);
  }
  return DAT_14cac9bf0;
}



// FUNCTION 14639df51 FUN_14639df51 body=47 status=ok
// SIG undefined FUN_14639df51(void)

longlong FUN_14639df51(void)

{
  if (DAT_14cac9bf8 == 0) {
    FUN_14000fc22(&DAT_14cac9bf8,&PTR_FUN_14a787c78);
  }
  return DAT_14cac9bf8;
}



// FUNCTION 14639df80 FUN_14639df80 body=47 status=ok
// SIG undefined FUN_14639df80(void)

longlong FUN_14639df80(void)

{
  if (DAT_14cac9c00 == 0) {
    FUN_14000fc22(&DAT_14cac9c00,&PTR_FUN_14a787d30);
  }
  return DAT_14cac9c00;
}



// FUNCTION 14639dfaf FUN_14639dfaf body=47 status=ok
// SIG undefined FUN_14639dfaf(void)

longlong FUN_14639dfaf(void)

{
  if (DAT_14cac9c08 == 0) {
    FUN_14000fc22(&DAT_14cac9c08,&PTR_FUN_14a787dc8);
  }
  return DAT_14cac9c08;
}



// FUNCTION 14639dfde FUN_14639dfde body=47 status=ok
// SIG undefined FUN_14639dfde(void)

longlong FUN_14639dfde(void)

{
  if (DAT_14cac9c10 == 0) {
    FUN_14000fc22(&DAT_14cac9c10,&PTR_FUN_14a787e68);
  }
  return DAT_14cac9c10;
}



// FUNCTION 14639e00d FUN_14639e00d body=47 status=ok
// SIG undefined FUN_14639e00d(void)

longlong FUN_14639e00d(void)

{
  if (DAT_14cac9c18 == 0) {
    FUN_14000fc22(&DAT_14cac9c18,&PTR_FUN_14a787f00);
  }
  return DAT_14cac9c18;
}



// FUNCTION 14639e03c FUN_14639e03c body=47 status=ok
// SIG undefined FUN_14639e03c(void)

longlong FUN_14639e03c(void)

{
  if (DAT_14cac9c20 == 0) {
    FUN_14000fc22(&DAT_14cac9c20,&PTR_FUN_14a787fb0);
  }
  return DAT_14cac9c20;
}



// FUNCTION 14639e06b FUN_14639e06b body=47 status=ok
// SIG undefined FUN_14639e06b(void)

longlong FUN_14639e06b(void)

{
  if (DAT_14cac9c28 == 0) {
    FUN_14000fc22(&DAT_14cac9c28,&PTR_FUN_14a788050);
  }
  return DAT_14cac9c28;
}



// FUNCTION 14639e09a FUN_14639e09a body=47 status=ok
// SIG undefined FUN_14639e09a(void)

longlong FUN_14639e09a(void)

{
  if (DAT_14cac9c30 == 0) {
    FUN_14000fc22(&DAT_14cac9c30,&PTR_FUN_14a788100);
  }
  return DAT_14cac9c30;
}



// FUNCTION 14639e0c9 FUN_14639e0c9 body=47 status=ok
// SIG undefined FUN_14639e0c9(void)

longlong FUN_14639e0c9(void)

{
  if (DAT_14cac9c38 == 0) {
    FUN_14000fc22(&DAT_14cac9c38,&PTR_FUN_14a7881b0);
  }
  return DAT_14cac9c38;
}



// FUNCTION 14639e0f8 FUN_14639e0f8 body=47 status=ok
// SIG undefined FUN_14639e0f8(void)

longlong FUN_14639e0f8(void)

{
  if (DAT_14cac9c40 == 0) {
    FUN_14000fc22(&DAT_14cac9c40,&PTR_FUN_14a788258);
  }
  return DAT_14cac9c40;
}



// FUNCTION 14639e127 FUN_14639e127 body=47 status=ok
// SIG undefined FUN_14639e127(void)

longlong FUN_14639e127(void)

{
  if (DAT_14cac9c48 == 0) {
    FUN_14000fc22(&DAT_14cac9c48,&PTR_FUN_14a7882f0);
  }
  return DAT_14cac9c48;
}



// FUNCTION 14639e156 FUN_14639e156 body=47 status=ok
// SIG undefined FUN_14639e156(void)

longlong FUN_14639e156(void)

{
  if (DAT_14cac9c50 == 0) {
    FUN_14000fc22(&DAT_14cac9c50,&PTR_FUN_14a788398);
  }
  return DAT_14cac9c50;
}



// FUNCTION 14639e185 FUN_14639e185 body=47 status=ok
// SIG undefined FUN_14639e185(void)

longlong FUN_14639e185(void)

{
  if (DAT_14cac9c58 == 0) {
    FUN_14000fc22(&DAT_14cac9c58,&PTR_FUN_14a7884a0);
  }
  return DAT_14cac9c58;
}



// FUNCTION 14639e1b4 FUN_14639e1b4 body=47 status=ok
// SIG undefined FUN_14639e1b4(void)

longlong FUN_14639e1b4(void)

{
  if (DAT_14cac9c60 == 0) {
    FUN_14000fc22(&DAT_14cac9c60,&PTR_FUN_14a788550);
  }
  return DAT_14cac9c60;
}



// FUNCTION 14639e1e3 FUN_14639e1e3 body=47 status=ok
// SIG undefined FUN_14639e1e3(void)

longlong FUN_14639e1e3(void)

{
  if (DAT_14cac9c68 == 0) {
    FUN_14000fc22(&DAT_14cac9c68,&PTR_FUN_14a788608);
  }
  return DAT_14cac9c68;
}



// FUNCTION 14639e212 FUN_14639e212 body=47 status=ok
// SIG undefined FUN_14639e212(void)

longlong FUN_14639e212(void)

{
  if (DAT_14cac9c70 == 0) {
    FUN_14000fc22(&DAT_14cac9c70,&PTR_FUN_14a7886b0);
  }
  return DAT_14cac9c70;
}



// FUNCTION 14639e241 FUN_14639e241 body=47 status=ok
// SIG undefined FUN_14639e241(void)

longlong FUN_14639e241(void)

{
  if (DAT_14cac9c78 == 0) {
    FUN_14000fc22(&DAT_14cac9c78,&PTR_FUN_14a788738);
  }
  return DAT_14cac9c78;
}



// FUNCTION 14639e270 FUN_14639e270 body=47 status=ok
// SIG undefined FUN_14639e270(void)

longlong FUN_14639e270(void)

{
  if (DAT_14cac9c80 == 0) {
    FUN_14000fc22(&DAT_14cac9c80,&PTR_FUN_14a7887c0);
  }
  return DAT_14cac9c80;
}



// FUNCTION 14639e29f FUN_14639e29f body=47 status=ok
// SIG undefined FUN_14639e29f(void)

longlong FUN_14639e29f(void)

{
  if (DAT_14cac9c88 == 0) {
    FUN_14000fc22(&DAT_14cac9c88,&PTR_FUN_14a788808);
  }
  return DAT_14cac9c88;
}



// FUNCTION 14639e2ce FUN_14639e2ce body=47 status=ok
// SIG undefined FUN_14639e2ce(void)

longlong FUN_14639e2ce(void)

{
  if (DAT_14cac9c98 == 0) {
    FUN_14000fc22(&DAT_14cac9c98,&PTR_FUN_14a788890);
  }
  return DAT_14cac9c98;
}



// FUNCTION 14639e2fd FUN_14639e2fd body=47 status=ok
// SIG undefined FUN_14639e2fd(void)

longlong FUN_14639e2fd(void)

{
  if (DAT_14cac9ca0 == 0) {
    FUN_14000fc22(&DAT_14cac9ca0,&PTR_FUN_14a788960);
  }
  return DAT_14cac9ca0;
}



// FUNCTION 14639e32c FUN_14639e32c body=34 status=ok
// SIG undefined FUN_14639e32c(void)

void FUN_14639e32c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a6c4d8();
  FUN_14069c8d6(uVar1,&PTR_s_ActorHasTag_14a7889a0,0x7f);
  return;
}



// FUNCTION 14639e34e FUN_14639e34e body=719 status=ok
// SIG undefined FUN_14639e34e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14639e34e(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0x3f80000000000000;
      memset(param_4 + 1,0,0x9c);
      *(undefined4 *)((longlong)param_4 + 0xa4) = 0xffffffff;
      param_4[0x15] = 0;
      param_4[0x16] = 0;
      param_4[0x17] = 0;
      param_4[0x18] = 0;
      param_4[0x19] = 0;
      *(undefined4 *)(param_4 + 0x1a) = 0xffffffff;
      *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
      *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_4 + 0xec) = 0;
      param_4[0x1e] = 0;
      param_4[0x1f] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
    }
  }
  else {
    local_98 = param_2[2];
    local_a8 = *param_2;
    uStack_a0 = param_2[1];
    auVar8 = *(undefined1 (*) [16])(lVar1 + 0x1b0);
    dVar4 = auVar8._0_8_;
    dVar5 = auVar8._8_8_;
    dVar13 = *(double *)(lVar1 + 0x1c0);
    puVar7 = *(undefined8 **)(lVar1 + 0x230);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar6 = DAT_14c8463d8;
      *puVar7 = DAT_14c8463d0;
      puVar7[1] = uVar6;
      uVar6 = DAT_14c8463e8;
      puVar7[2] = DAT_14c8463e0;
      puVar7[3] = uVar6;
      uVar6 = DAT_14c846500;
      puVar7[4] = DAT_14c8464f8;
      puVar7[5] = uVar6;
      puVar7[6] = DAT_14c846508;
      *(undefined8 **)(lVar1 + 0x230) = puVar7;
    }
    if (((((double)puVar7[4] != dVar4) || (NAN((double)puVar7[4]) || NAN(dVar4))) ||
        ((double)puVar7[5] != dVar5)) ||
       (((NAN((double)puVar7[5]) || NAN(dVar5) || ((double)puVar7[6] != dVar13)) ||
        (NAN((double)puVar7[6]) || NAN(dVar13))))) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar13;
      dVar2 = (double)DAT_1499387d0;
      dVar3 = DAT_1499387d0._8_8_;
      auVar8 = divpd(auVar8,_DAT_1499387d0);
      auVar11 = divpd(auVar16,_DAT_1499387d0);
      auVar8 = roundpd(auVar8,auVar8,3);
      auVar11 = roundpd(auVar11,auVar11,3);
      dVar4 = dVar4 - auVar8._0_8_ * dVar2;
      dVar5 = dVar5 - auVar8._8_8_ * dVar3;
      auVar17._0_8_ = dVar13 - auVar11._0_8_ * dVar2;
      auVar17._8_8_ = 0.0 - auVar11._8_8_ * dVar3;
      auVar15._0_8_ = dVar4 + dVar2;
      auVar15._8_8_ = dVar5 + dVar3;
      auVar14._0_8_ = dVar2 + auVar17._0_8_;
      auVar14._8_8_ = dVar3 + auVar17._8_8_;
      auVar11._8_8_ = -(ulonglong)(0.0 <= dVar5);
      auVar11._0_8_ = -(ulonglong)(0.0 <= dVar4);
      auVar8._8_4_ = SUB84(dVar5,0);
      auVar8._0_8_ = dVar4;
      auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar11 = blendvpd(auVar15,auVar8,auVar11);
      auVar9._8_8_ = -(ulonglong)(0.0 <= auVar17._8_8_);
      auVar9._0_8_ = -(ulonglong)(0.0 <= auVar17._0_8_);
      auVar8 = blendvpd(auVar14,auVar17,auVar9);
      auVar12._0_8_ = auVar11._0_8_ + -360.0;
      auVar12._8_8_ = auVar11._8_8_ + -360.0;
      auVar10._8_8_ = -(ulonglong)(180.0 < auVar11._8_8_);
      auVar10._0_8_ = -(ulonglong)(180.0 < auVar11._0_8_);
      auVar11 = blendvpd(auVar11,auVar12,auVar10);
      dVar13 = auVar8._0_8_;
      *(undefined1 (*) [16])(puVar7 + 4) = auVar11;
      puVar7[6] = ~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                  (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13);
      FUN_144a7484c(puVar7 + 4,&local_88);
      puVar7[2] = local_78;
      puVar7[3] = uStack_70;
      *puVar7 = local_88;
      puVar7[1] = uStack_80;
    }
    local_88 = *puVar7;
    uStack_80 = puVar7[1];
    local_78 = puVar7[2];
    uStack_70 = puVar7[3];
    local_b0 = param_5;
    local_b8 = param_4;
    FUN_144927ad4(lVar1,&local_a8,&local_88,param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14639e623 FUN_14639e623 body=35 status=ok
// SIG undefined FUN_14639e623(void)

void FUN_14639e623(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a78bb20;
  return;
}



// FUNCTION 14639e64b FUN_14639e64b body=47 status=ok
// SIG undefined FUN_14639e64b(void)

longlong FUN_14639e64b(void)

{
  if (DAT_14cac9f20 == 0) {
    FUN_14073dd9a(&DAT_14cac9f20,&PTR_LAB_14a78bad8);
  }
  return DAT_14cac9f20;
}



// FUNCTION 14639e67a FUN_14639e67a body=40 status=ok
// SIG undefined FUN_14639e67a(void)

undefined8 FUN_14639e67a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639e6a2 FUN_14639e6a2 body=29 status=ok
// SIG undefined FUN_14639e6a2(void)

undefined8 FUN_14639e6a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14639e6c0 FUN_14639e6c0 body=29 status=ok
// SIG undefined FUN_14639e6c0(void)

undefined8 FUN_14639e6c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


