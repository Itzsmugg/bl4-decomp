// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14661a4b0 FUN_14661a4b0 body=43 status=ok
// SIG undefined FUN_14661a4b0(void)

void FUN_14661a4b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410284a6(puVar1);
  *puVar1 = &PTR_FUN_14b9497c0;
  puVar1[0x23] = 0;
  return;
}



// FUNCTION 14661a4db FUN_14661a4db body=47 status=ok
// SIG undefined FUN_14661a4db(void)

longlong FUN_14661a4db(void)

{
  if (DAT_14cbc10b0 == 0) {
    FUN_14073dd9a(&DAT_14cbc10b0,&PTR_LAB_14b949778);
  }
  return DAT_14cbc10b0;
}



// FUNCTION 14661a50a FUN_14661a50a body=47 status=ok
// SIG undefined FUN_14661a50a(void)

longlong FUN_14661a50a(void)

{
  if (DAT_14cbc10c8 == 0) {
    FUN_14073dd9a(&DAT_14cbc10c8,&PTR_LAB_14b949bd8);
  }
  return DAT_14cbc10c8;
}



// FUNCTION 14661a539 FUN_14661a539 body=49 status=ok
// SIG undefined FUN_14661a539(void)

longlong FUN_14661a539(void)

{
  if (DAT_14cbc1120 == 0) {
    FUN_14073dd9a(&DAT_14cbc1120,&PTR_LAB_14b94a420);
  }
  return DAT_14cbc1120;
}



// FUNCTION 14661a56a FUN_14661a56a body=47 status=ok
// SIG undefined FUN_14661a56a(void)

longlong FUN_14661a56a(void)

{
  if (DAT_14cbc10d8 == 0) {
    FUN_14000fc22(&DAT_14cbc10d8,&PTR_FUN_14b949c48);
  }
  return DAT_14cbc10d8;
}



// FUNCTION 14661a599 FUN_14661a599 body=47 status=ok
// SIG undefined FUN_14661a599(void)

longlong FUN_14661a599(void)

{
  if (DAT_14cbc10e0 == 0) {
    FUN_14000fc22(&DAT_14cbc10e0,&PTR_FUN_14b949c98);
  }
  return DAT_14cbc10e0;
}



// FUNCTION 14661a5c8 FUN_14661a5c8 body=47 status=ok
// SIG undefined FUN_14661a5c8(void)

longlong FUN_14661a5c8(void)

{
  if (DAT_14cbc10e8 == 0) {
    FUN_14000fc22(&DAT_14cbc10e8,&PTR_FUN_14b949cd8);
  }
  return DAT_14cbc10e8;
}



// FUNCTION 14661a5f7 FUN_14661a5f7 body=47 status=ok
// SIG undefined FUN_14661a5f7(void)

longlong FUN_14661a5f7(void)

{
  if (DAT_14cbc10f0 == 0) {
    FUN_14000fc22(&DAT_14cbc10f0,&PTR_FUN_14b949dc0);
  }
  return DAT_14cbc10f0;
}



// FUNCTION 14661a626 FUN_14661a626 body=47 status=ok
// SIG undefined FUN_14661a626(void)

longlong FUN_14661a626(void)

{
  if (DAT_14cbc10f8 == 0) {
    FUN_14000fc22(&DAT_14cbc10f8,&PTR_FUN_14b949ea0);
  }
  return DAT_14cbc10f8;
}



// FUNCTION 14661a655 FUN_14661a655 body=47 status=ok
// SIG undefined FUN_14661a655(void)

longlong FUN_14661a655(void)

{
  if (DAT_14cbc1100 == 0) {
    FUN_14000fc22(&DAT_14cbc1100,&PTR_FUN_14b949ef8);
  }
  return DAT_14cbc1100;
}



// FUNCTION 14661a684 FUN_14661a684 body=47 status=ok
// SIG undefined FUN_14661a684(void)

longlong FUN_14661a684(void)

{
  if (DAT_14cbc1108 == 0) {
    FUN_14000fc22(&DAT_14cbc1108,&PTR_FUN_14b949f50);
  }
  return DAT_14cbc1108;
}



// FUNCTION 14661a6b3 FUN_14661a6b3 body=47 status=ok
// SIG undefined FUN_14661a6b3(void)

longlong FUN_14661a6b3(void)

{
  if (DAT_14cbc1110 == 0) {
    FUN_14000fc22(&DAT_14cbc1110,&PTR_FUN_14b949f98);
  }
  return DAT_14cbc1110;
}



// FUNCTION 14661a6e2 FUN_14661a6e2 body=34 status=ok
// SIG undefined FUN_14661a6e2(void)

void FUN_14661a6e2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14018fcd2();
  FUN_14069c8d6(uVar1,&PTR_s_OnAttached_14b949fe0,8);
  return;
}



// FUNCTION 14661a70a FUN_14661a70a body=196 status=ok
// SIG undefined FUN_14661a70a(void)

void FUN_14661a70a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1138) {
    FUN_144b3d300(&DAT_14cbc1138);
    if (DAT_14cbc1138 == -1) {
      FUN_1446f470e(&DAT_14cbc1130,L"NumShotsToBreak",1);
      _Init_thread_footer(&DAT_14cbc1138);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1144) {
    FUN_144b3d300(&DAT_14cbc1144);
    if (DAT_14cbc1144 == -1) {
      FUN_1446f470e(&DAT_14cbc113c,L"ClientRepairState",1);
      _Init_thread_footer(&DAT_14cbc1144);
      return;
    }
  }
  return;
}



// FUNCTION 14661a7ce FUN_14661a7ce body=47 status=ok
// SIG undefined FUN_14661a7ce(void)

longlong FUN_14661a7ce(void)

{
  if (DAT_14cbc1148 == 0) {
    FUN_1409ce572(&DAT_14cbc1148,&PTR_FUN_14b94a4c0);
  }
  return DAT_14cbc1148;
}



// FUNCTION 14661a7fd FUN_14661a7fd body=49 status=ok
// SIG undefined FUN_14661a7fd(void)

longlong FUN_14661a7fd(void)

{
  if (DAT_14cbc11a8 == 0) {
    FUN_14073dd9a(&DAT_14cbc11a8,&PTR_LAB_14b94ac30);
  }
  return DAT_14cbc11a8;
}



// FUNCTION 14661a82e FUN_14661a82e body=47 status=ok
// SIG undefined FUN_14661a82e(void)

longlong FUN_14661a82e(void)

{
  if (DAT_14cbc1160 == 0) {
    FUN_14000fc22(&DAT_14cbc1160,&PTR_FUN_14b94a508);
  }
  return DAT_14cbc1160;
}



// FUNCTION 14661a85d FUN_14661a85d body=47 status=ok
// SIG undefined FUN_14661a85d(void)

longlong FUN_14661a85d(void)

{
  if (DAT_14cbc1168 == 0) {
    FUN_14000fc22(&DAT_14cbc1168,&PTR_FUN_14b94a548);
  }
  return DAT_14cbc1168;
}



// FUNCTION 14661a88c FUN_14661a88c body=47 status=ok
// SIG undefined FUN_14661a88c(void)

longlong FUN_14661a88c(void)

{
  if (DAT_14cbc1170 == 0) {
    FUN_14000fc22(&DAT_14cbc1170,&PTR_FUN_14b94a5a0);
  }
  return DAT_14cbc1170;
}



// FUNCTION 14661a8bb FUN_14661a8bb body=47 status=ok
// SIG undefined FUN_14661a8bb(void)

longlong FUN_14661a8bb(void)

{
  if (DAT_14cbc1178 == 0) {
    FUN_14000fc22(&DAT_14cbc1178,&PTR_FUN_14b94a5e0);
  }
  return DAT_14cbc1178;
}



// FUNCTION 14661a8ea FUN_14661a8ea body=47 status=ok
// SIG undefined FUN_14661a8ea(void)

longlong FUN_14661a8ea(void)

{
  if (DAT_14cbc1180 == 0) {
    FUN_14000fc22(&DAT_14cbc1180,&PTR_FUN_14b94a678);
  }
  return DAT_14cbc1180;
}



// FUNCTION 14661a919 FUN_14661a919 body=47 status=ok
// SIG undefined FUN_14661a919(void)

longlong FUN_14661a919(void)

{
  if (DAT_14cbc1188 == 0) {
    FUN_14000fc22(&DAT_14cbc1188,&PTR_FUN_14b94a768);
  }
  return DAT_14cbc1188;
}



// FUNCTION 14661a948 FUN_14661a948 body=47 status=ok
// SIG undefined FUN_14661a948(void)

longlong FUN_14661a948(void)

{
  if (DAT_14cbc1190 == 0) {
    FUN_14000fc22(&DAT_14cbc1190,&PTR_FUN_14b94a7c0);
  }
  return DAT_14cbc1190;
}



// FUNCTION 14661a977 FUN_14661a977 body=47 status=ok
// SIG undefined FUN_14661a977(void)

longlong FUN_14661a977(void)

{
  if (DAT_14cbc1198 == 0) {
    FUN_14000fc22(&DAT_14cbc1198,&PTR_FUN_14b94a858);
  }
  return DAT_14cbc1198;
}



// FUNCTION 14661a9a6 FUN_14661a9a6 body=34 status=ok
// SIG undefined FUN_14661a9a6(void)

void FUN_14661a9a6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8ef8c();
  FUN_14069c8d6(uVar1,&PTR_s_OnActivationTrigger_14b94a8a0,8);
  return;
}



// FUNCTION 14661a9c8 FUN_14661a9c8 body=287 status=ok
// SIG undefined FUN_14661a9c8(void)

void FUN_14661a9c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc11c0) {
    FUN_144b3d300(&DAT_14cbc11c0);
    if (DAT_14cbc11c0 == -1) {
      FUN_1446f470e(&DAT_14cbc11b8,L"bIsActive",1);
      _Init_thread_footer(&DAT_14cbc11c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc11cc) {
    FUN_144b3d300(&DAT_14cbc11cc);
    if (DAT_14cbc11cc == -1) {
      FUN_1446f470e(&DAT_14cbc11c4,L"ShieldState",1);
      _Init_thread_footer(&DAT_14cbc11cc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc11d8) {
    FUN_144b3d300(&DAT_14cbc11d8);
    if (DAT_14cbc11d8 == -1) {
      FUN_1446f470e(&DAT_14cbc11d0,L"RepDamageCounter",1);
      _Init_thread_footer(&DAT_14cbc11d8);
      return;
    }
  }
  return;
}



// FUNCTION 14661aae7 FUN_14661aae7 body=49 status=ok
// SIG undefined FUN_14661aae7(void)

longlong FUN_14661aae7(void)

{
  if (DAT_14cbc1200 == 0) {
    FUN_14073dd9a(&DAT_14cbc1200,&PTR_LAB_14b94af60);
  }
  return DAT_14cbc1200;
}



// FUNCTION 14661ab18 FUN_14661ab18 body=47 status=ok
// SIG undefined FUN_14661ab18(void)

longlong FUN_14661ab18(void)

{
  if (DAT_14cbc11e0 == 0) {
    FUN_14000fc22(&DAT_14cbc11e0,&PTR_FUN_14b94ad18);
  }
  return DAT_14cbc11e0;
}



// FUNCTION 14661ab47 FUN_14661ab47 body=47 status=ok
// SIG undefined FUN_14661ab47(void)

longlong FUN_14661ab47(void)

{
  if (DAT_14cbc11e8 == 0) {
    FUN_14000fc22(&DAT_14cbc11e8,&PTR_FUN_14b94ad68);
  }
  return DAT_14cbc11e8;
}



// FUNCTION 14661ab76 FUN_14661ab76 body=47 status=ok
// SIG undefined FUN_14661ab76(void)

longlong FUN_14661ab76(void)

{
  if (DAT_14cbc11f0 == 0) {
    FUN_14000fc22(&DAT_14cbc11f0,&PTR_FUN_14b94ada8);
  }
  return DAT_14cbc11f0;
}



// FUNCTION 14661aba6 FUN_14661aba6 body=34 status=ok
// SIG undefined FUN_14661aba6(void)

void FUN_14661aba6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14018fdb8();
  FUN_14069c8d6(uVar1,&PTR_s_StartInitSequence_14b94adf0,3);
  return;
}



// FUNCTION 14661abcd FUN_14661abcd body=47 status=ok
// SIG undefined FUN_14661abcd(void)

longlong FUN_14661abcd(void)

{
  if (DAT_14cbc1220 == 0) {
    FUN_14073dd9a(&DAT_14cbc1220,&PTR_LAB_14b94b2e0);
  }
  return DAT_14cbc1220;
}



// FUNCTION 14661abfc FUN_14661abfc body=47 status=ok
// SIG undefined FUN_14661abfc(void)

longlong FUN_14661abfc(void)

{
  if (DAT_14cbc1210 == 0) {
    FUN_14000fc22(&DAT_14cbc1210,&PTR_FUN_14b94afe0);
  }
  return DAT_14cbc1210;
}



// FUNCTION 14661ac2c FUN_14661ac2c body=34 status=ok
// SIG undefined FUN_14661ac2c(void)

void FUN_14661ac2c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8f078();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_ClientReloadState_14b94b020,1);
  return;
}



// FUNCTION 14661ac4e FUN_14661ac4e body=196 status=ok
// SIG undefined FUN_14661ac4e(void)

void FUN_14661ac4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1238) {
    FUN_144b3d300(&DAT_14cbc1238);
    if (DAT_14cbc1238 == -1) {
      FUN_1446f470e(&DAT_14cbc1230,L"ClientReloadState",1);
      _Init_thread_footer(&DAT_14cbc1238);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1244) {
    FUN_144b3d300(&DAT_14cbc1244);
    if (DAT_14cbc1244 == -1) {
      FUN_1446f470e(&DAT_14cbc123c,L"CurrentMag",1);
      _Init_thread_footer(&DAT_14cbc1244);
      return;
    }
  }
  return;
}



// FUNCTION 14661ad12 FUN_14661ad12 body=55 status=ok
// SIG undefined FUN_14661ad12(void)

void FUN_14661ad12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1250 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1250 = FUN_140002ddd(FUN_14661ad49,uVar1,L"WeaponBorgAugmentAspect");
  }
  return;
}



// FUNCTION 14661ad49 FUN_14661ad49 body=47 status=ok
// SIG undefined FUN_14661ad49(void)

longlong FUN_14661ad49(void)

{
  if (DAT_14cbc1248 == 0) {
    FUN_14086a14e(&DAT_14cbc1248,&PTR_FUN_14b94b3d8);
  }
  return DAT_14cbc1248;
}



// FUNCTION 14661ad78 FUN_14661ad78 body=48 status=ok
// SIG undefined FUN_14661ad78(void)

void FUN_14661ad78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b94d2c0;
  return;
}



// FUNCTION 14661ada8 FUN_14661ada8 body=55 status=ok
// SIG undefined FUN_14661ada8(void)

void FUN_14661ada8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1268 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1268 = FUN_140002ddd(FUN_14661addf,uVar1,L"WeaponChargePercentValueResolver");
  }
  return;
}



// FUNCTION 14661addf FUN_14661addf body=47 status=ok
// SIG undefined FUN_14661addf(void)

longlong FUN_14661addf(void)

{
  if (DAT_14cbc1260 == 0) {
    FUN_14086a14e(&DAT_14cbc1260,&PTR_FUN_14b94b4a0);
  }
  return DAT_14cbc1260;
}



// FUNCTION 14661ae0e FUN_14661ae0e body=48 status=ok
// SIG undefined FUN_14661ae0e(void)

void FUN_14661ae0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b94d470;
  return;
}



// FUNCTION 14661ae3e FUN_14661ae3e body=55 status=ok
// SIG undefined FUN_14661ae3e(void)

void FUN_14661ae3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1280 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1280 = FUN_140002ddd(FUN_14661ae75,uVar1,L"WeaponChargeStateValueResolver");
  }
  return;
}



// FUNCTION 14661ae75 FUN_14661ae75 body=47 status=ok
// SIG undefined FUN_14661ae75(void)

longlong FUN_14661ae75(void)

{
  if (DAT_14cbc1278 == 0) {
    FUN_14086a14e(&DAT_14cbc1278,&PTR_FUN_14b94b5c0);
  }
  return DAT_14cbc1278;
}



// FUNCTION 14661aea4 FUN_14661aea4 body=48 status=ok
// SIG undefined FUN_14661aea4(void)

void FUN_14661aea4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b94d660;
  return;
}



// FUNCTION 14661aed4 FUN_14661aed4 body=47 status=ok
// SIG undefined FUN_14661aed4(void)

longlong FUN_14661aed4(void)

{
  if (DAT_14cbc1290 == 0) {
    FUN_1409ce572(&DAT_14cbc1290,&PTR_FUN_14b94b6c0);
  }
  return DAT_14cbc1290;
}



// FUNCTION 14661af03 FUN_14661af03 body=47 status=ok
// SIG undefined FUN_14661af03(void)

longlong FUN_14661af03(void)

{
  if (DAT_14cbc12a8 == 0) {
    FUN_14086a14e(&DAT_14cbc12a8,&PTR_FUN_14b94b8e0);
  }
  return DAT_14cbc12a8;
}



// FUNCTION 14661af32 FUN_14661af32 body=48 status=ok
// SIG undefined FUN_14661af32(void)

void FUN_14661af32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b94d930;
  return;
}



// FUNCTION 14661af62 FUN_14661af62 body=47 status=ok
// SIG undefined FUN_14661af62(void)

longlong FUN_14661af62(void)

{
  if (DAT_14cbc12c8 == 0) {
    FUN_14073dd9a(&DAT_14cbc12c8,&PTR_LAB_14b94b988);
  }
  return DAT_14cbc12c8;
}



// FUNCTION 14661af91 FUN_14661af91 body=47 status=ok
// SIG undefined FUN_14661af91(void)

longlong FUN_14661af91(void)

{
  if (DAT_14cbc12d8 == 0) {
    FUN_14086a14e(&DAT_14cbc12d8,&PTR_FUN_14b94bc20);
  }
  return DAT_14cbc12d8;
}



// FUNCTION 14661afc0 FUN_14661afc0 body=48 status=ok
// SIG undefined FUN_14661afc0(void)

void FUN_14661afc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000e8;
  *puVar1 = &PTR_FUN_14b94da90;
  return;
}



// FUNCTION 14661aff0 FUN_14661aff0 body=47 status=ok
// SIG undefined FUN_14661aff0(void)

longlong FUN_14661aff0(void)

{
  if (DAT_14cbc12f0 == 0) {
    FUN_14086a14e(&DAT_14cbc12f0,&PTR_FUN_14b94bd28);
  }
  return DAT_14cbc12f0;
}



// FUNCTION 14661b020 FUN_14661b020 body=48 status=ok
// SIG undefined FUN_14661b020(void)

void FUN_14661b020(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14b94dbf0;
  return;
}



// FUNCTION 14661b050 FUN_14661b050 body=35 status=ok
// SIG undefined FUN_14661b050(void)

void FUN_14661b050(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b94bed0;
  return;
}



// FUNCTION 14661b07d FUN_14661b07d body=47 status=ok
// SIG undefined FUN_14661b07d(void)

longlong FUN_14661b07d(void)

{
  if (DAT_14cbc1310 == 0) {
    FUN_14073dd9a(&DAT_14cbc1310,&PTR_LAB_14b94be88);
  }
  return DAT_14cbc1310;
}



// FUNCTION 14661b0ac FUN_14661b0ac body=55 status=ok
// SIG undefined FUN_14661b0ac(void)

void FUN_14661b0ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1328 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1328 = FUN_140002ddd(FUN_14661b0e3,uVar1,L"WeaponMeleeAspect");
  }
  return;
}



// FUNCTION 14661b0e3 FUN_14661b0e3 body=47 status=ok
// SIG undefined FUN_14661b0e3(void)

longlong FUN_14661b0e3(void)

{
  if (DAT_14cbc1320 == 0) {
    FUN_14086a14e(&DAT_14cbc1320,&PTR_FUN_14b94c220);
  }
  return DAT_14cbc1320;
}



// FUNCTION 14661b112 FUN_14661b112 body=48 status=ok
// SIG undefined FUN_14661b112(void)

void FUN_14661b112(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b94dd50;
  return;
}



// FUNCTION 14661b142 FUN_14661b142 body=55 status=ok
// SIG undefined FUN_14661b142(void)

void FUN_14661b142(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1340 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1340 = FUN_140002ddd(FUN_14661b179,uVar1,L"WeaponOverrideDefAspect");
  }
  return;
}



// FUNCTION 14661b179 FUN_14661b179 body=47 status=ok
// SIG undefined FUN_14661b179(void)

longlong FUN_14661b179(void)

{
  if (DAT_14cbc1338 == 0) {
    FUN_14086a14e(&DAT_14cbc1338,&PTR_FUN_14b94c3e8);
  }
  return DAT_14cbc1338;
}



// FUNCTION 14661b1a8 FUN_14661b1a8 body=48 status=ok
// SIG undefined FUN_14661b1a8(void)

void FUN_14661b1a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b94df00;
  return;
}



// FUNCTION 14661b1d8 FUN_14661b1d8 body=55 status=ok
// SIG undefined FUN_14661b1d8(void)

void FUN_14661b1d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1358 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1358 = FUN_140002ddd(FUN_14661b20f,uVar1,L"WeaponPartValueResolver");
  }
  return;
}



// FUNCTION 14661b20f FUN_14661b20f body=47 status=ok
// SIG undefined FUN_14661b20f(void)

longlong FUN_14661b20f(void)

{
  if (DAT_14cbc1350 == 0) {
    FUN_14086a14e(&DAT_14cbc1350,&PTR_FUN_14b94c528);
  }
  return DAT_14cbc1350;
}



// FUNCTION 14661b23e FUN_14661b23e body=48 status=ok
// SIG undefined FUN_14661b23e(void)

void FUN_14661b23e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b94e0b0;
  return;
}



// FUNCTION 14661b26e FUN_14661b26e body=89 status=ok
// SIG undefined FUN_14661b26e(void)

undefined8 * FUN_14661b26e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b948d50;
  FUN_1449e6b18(param_1 + 0x69);
  FUN_1449e6b18((longlong)param_1 + 0x33c);
  FUN_1449e6b18(param_1 + 0x66);
  FUN_14103e040(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b2c8 FUN_14661b2c8 body=40 status=ok
// SIG undefined FUN_14661b2c8(void)

undefined8 FUN_14661b2c8(undefined8 param_1,int param_2)

{
  FUN_140cbd9f6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b2f0 FUN_14661b2f0 body=40 status=ok
// SIG undefined FUN_14661b2f0(void)

undefined8 FUN_14661b2f0(undefined8 param_1,int param_2)

{
  FUN_14118fa70();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b318 FUN_14661b318 body=40 status=ok
// SIG undefined FUN_14661b318(void)

undefined8 FUN_14661b318(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b340 FUN_14661b340 body=40 status=ok
// SIG undefined FUN_14661b340(void)

undefined8 FUN_14661b340(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b368 FUN_14661b368 body=29 status=ok
// SIG undefined FUN_14661b368(void)

undefined8 FUN_14661b368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b386 FUN_14661b386 body=29 status=ok
// SIG undefined FUN_14661b386(void)

undefined8 FUN_14661b386(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b3a4 FUN_14661b3a4 body=29 status=ok
// SIG undefined FUN_14661b3a4(void)

undefined8 FUN_14661b3a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b3c2 FUN_14661b3c2 body=29 status=ok
// SIG undefined FUN_14661b3c2(void)

undefined8 FUN_14661b3c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b3e0 FUN_14661b3e0 body=29 status=ok
// SIG undefined FUN_14661b3e0(void)

undefined8 FUN_14661b3e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b3fe FUN_14661b3fe body=29 status=ok
// SIG undefined FUN_14661b3fe(void)

undefined8 FUN_14661b3fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b41c FUN_14661b41c body=29 status=ok
// SIG undefined FUN_14661b41c(void)

undefined8 FUN_14661b41c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b43a FUN_14661b43a body=29 status=ok
// SIG undefined FUN_14661b43a(void)

undefined8 FUN_14661b43a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b458 FUN_14661b458 body=29 status=ok
// SIG undefined FUN_14661b458(void)

undefined8 FUN_14661b458(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b476 FUN_14661b476 body=107 status=ok
// SIG undefined FUN_14661b476(void)

void FUN_14661b476(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b9510b0;
  param_2[3] = 0x3e4ccccd00000000;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x4fc71eb4;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



// FUNCTION 14661b4e2 FUN_14661b4e2 body=29 status=ok
// SIG undefined FUN_14661b4e2(void)

undefined8 FUN_14661b4e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b500 FUN_14661b500 body=29 status=ok
// SIG undefined FUN_14661b500(void)

undefined8 FUN_14661b500(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b51e FUN_14661b51e body=29 status=ok
// SIG undefined FUN_14661b51e(void)

undefined8 FUN_14661b51e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b53c FUN_14661b53c body=29 status=ok
// SIG undefined FUN_14661b53c(void)

undefined8 FUN_14661b53c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b55a FUN_14661b55a body=29 status=ok
// SIG undefined FUN_14661b55a(void)

undefined8 FUN_14661b55a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661b577 FUN_14661b577 body=47 status=ok
// SIG undefined FUN_14661b577(void)

longlong FUN_14661b577(void)

{
  if (DAT_14cbc1380 == 0) {
    FUN_14073dd9a(&DAT_14cbc1380,&PTR_LAB_14b951300);
  }
  return DAT_14cbc1380;
}



// FUNCTION 14661b5a6 FUN_14661b5a6 body=47 status=ok
// SIG undefined FUN_14661b5a6(void)

longlong FUN_14661b5a6(void)

{
  if (DAT_14cbc1370 == 0) {
    FUN_14000fc22(&DAT_14cbc1370,&PTR_FUN_14b951100);
  }
  return DAT_14cbc1370;
}



// FUNCTION 14661b5d6 FUN_14661b5d6 body=34 status=ok
// SIG undefined FUN_14661b5d6(void)

void FUN_14661b5d6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14141a2e4();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_HomingMod_14b9510ef_1_14b951140,1);
  return;
}



// FUNCTION 14661b5fe FUN_14661b5fe body=378 status=ok
// SIG undefined FUN_14661b5fe(void)

void FUN_14661b5fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1398) {
    FUN_144b3d300(&DAT_14cbc1398);
    if (DAT_14cbc1398 == -1) {
      FUN_1446f470e(&DAT_14cbc1390,L"ManufacturerMod",1);
      _Init_thread_footer(&DAT_14cbc1398);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc13a4) {
    FUN_144b3d300(&DAT_14cbc13a4);
    if (DAT_14cbc13a4 == -1) {
      FUN_1446f470e(&DAT_14cbc139c,L"ManufacturerHomingMod",1);
      _Init_thread_footer(&DAT_14cbc13a4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc13b0) {
    FUN_144b3d300(&DAT_14cbc13b0);
    if (DAT_14cbc13b0 == -1) {
      FUN_1446f470e(&DAT_14cbc13a8,L"MaterialAsset",1);
      _Init_thread_footer(&DAT_14cbc13b0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc13bc) {
    FUN_144b3d300(&DAT_14cbc13bc);
    if (DAT_14cbc13bc == -1) {
      FUN_1446f470e(&DAT_14cbc13b4,L"MaterialParamsAsset",1);
      _Init_thread_footer(&DAT_14cbc13bc);
      return;
    }
  }
  return;
}



// FUNCTION 14661b778 FUN_14661b778 body=47 status=ok
// SIG undefined FUN_14661b778(void)

longlong FUN_14661b778(void)

{
  if (DAT_14cbc13c0 == 0) {
    FUN_14086a14e(&DAT_14cbc13c0,&PTR_FUN_14b9513f0);
  }
  return DAT_14cbc13c0;
}



// FUNCTION 14661b7a8 FUN_14661b7a8 body=48 status=ok
// SIG undefined FUN_14661b7a8(void)

void FUN_14661b7a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000728;
  *puVar1 = &PTR_FUN_14b956330;
  return;
}



// FUNCTION 14661b7d8 FUN_14661b7d8 body=47 status=ok
// SIG undefined FUN_14661b7d8(void)

longlong FUN_14661b7d8(void)

{
  if (DAT_14cbc13d8 == 0) {
    FUN_1409ce572(&DAT_14cbc13d8,&PTR_FUN_14b9514b0);
  }
  return DAT_14cbc13d8;
}



// FUNCTION 14661b808 FUN_14661b808 body=55 status=ok
// SIG undefined FUN_14661b808(void)

void FUN_14661b808(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc13f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc13f8 = FUN_140002ddd(FUN_14661b83f,uVar1,L"WeaponWearRangeValue");
  }
  return;
}



// FUNCTION 14661b83f FUN_14661b83f body=49 status=ok
// SIG undefined FUN_14661b83f(void)

longlong FUN_14661b83f(void)

{
  if (DAT_14cbc13f0 == 0) {
    FUN_14086a14e(&DAT_14cbc13f0,&PTR_FUN_14b9515b8);
  }
  return DAT_14cbc13f0;
}



// FUNCTION 14661b870 FUN_14661b870 body=48 status=ok
// SIG undefined FUN_14661b870(void)

void FUN_14661b870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14b956530;
  return;
}



// FUNCTION 14661b8a0 FUN_14661b8a0 body=47 status=ok
// SIG undefined FUN_14661b8a0(void)

longlong FUN_14661b8a0(void)

{
  if (DAT_14cbc1408 == 0) {
    FUN_14086a14e(&DAT_14cbc1408,&PTR_FUN_14b951758);
  }
  return DAT_14cbc1408;
}



// FUNCTION 14661b8d0 FUN_14661b8d0 body=48 status=ok
// SIG undefined FUN_14661b8d0(void)

void FUN_14661b8d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000002b0;
  *puVar1 = &PTR_FUN_14b956690;
  return;
}



// FUNCTION 14661b900 FUN_14661b900 body=55 status=ok
// SIG undefined FUN_14661b900(void)

void FUN_14661b900(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1428 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1428 = FUN_140002ddd(FUN_14661b937,uVar1,L"WeeklyActivityTimestampDef");
  }
  return;
}



// FUNCTION 14661b937 FUN_14661b937 body=47 status=ok
// SIG undefined FUN_14661b937(void)

longlong FUN_14661b937(void)

{
  if (DAT_14cbc1420 == 0) {
    FUN_14086a14e(&DAT_14cbc1420,&PTR_FUN_14b9518b8);
  }
  return DAT_14cbc1420;
}



// FUNCTION 14661b966 FUN_14661b966 body=48 status=ok
// SIG undefined FUN_14661b966(void)

void FUN_14661b966(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b9567f0;
  return;
}



// FUNCTION 14661b996 FUN_14661b996 body=55 status=ok
// SIG undefined FUN_14661b996(void)

void FUN_14661b996(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc14d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc14d0 = FUN_140002ddd(FUN_14661b9cd,uVar1,L"WorldDifficultyDataTableValueResolver");
  }
  return;
}



// FUNCTION 14661b9cd FUN_14661b9cd body=47 status=ok
// SIG undefined FUN_14661b9cd(void)

longlong FUN_14661b9cd(void)

{
  if (DAT_14cbc14c8 == 0) {
    FUN_14086a14e(&DAT_14cbc14c8,&PTR_FUN_14b952678);
  }
  return DAT_14cbc14c8;
}



// FUNCTION 14661b9fc FUN_14661b9fc body=48 status=ok
// SIG undefined FUN_14661b9fc(void)

void FUN_14661b9fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b957060;
  return;
}



// FUNCTION 14661ba2c FUN_14661ba2c body=55 status=ok
// SIG undefined FUN_14661ba2c(void)

void FUN_14661ba2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc14e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc14e8 = FUN_140002ddd(FUN_14661ba63,uVar1,L"WorldRegionBalanceValueResolver");
  }
  return;
}



// FUNCTION 14661ba63 FUN_14661ba63 body=47 status=ok
// SIG undefined FUN_14661ba63(void)

longlong FUN_14661ba63(void)

{
  if (DAT_14cbc14e0 == 0) {
    FUN_14086a14e(&DAT_14cbc14e0,&PTR_FUN_14b952778);
  }
  return DAT_14cbc14e0;
}



// FUNCTION 14661ba92 FUN_14661ba92 body=48 status=ok
// SIG undefined FUN_14661ba92(void)

void FUN_14661ba92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b957250;
  return;
}



// FUNCTION 14661bac2 FUN_14661bac2 body=49 status=ok
// SIG undefined FUN_14661bac2(void)

longlong FUN_14661bac2(void)

{
  if (DAT_14cbc14f8 == 0) {
    FUN_14086a14e(&DAT_14cbc14f8,&PTR_FUN_14b952ab0);
  }
  return DAT_14cbc14f8;
}



// FUNCTION 14661baf4 FUN_14661baf4 body=48 status=ok
// SIG undefined FUN_14661baf4(void)

void FUN_14661baf4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000240;
  *puVar1 = &PTR_FUN_14b957440;
  return;
}



// FUNCTION 14661bb24 FUN_14661bb24 body=47 status=ok
// SIG undefined FUN_14661bb24(void)

longlong FUN_14661bb24(void)

{
  if (DAT_14cbc1518 == 0) {
    FUN_14073dd9a(&DAT_14cbc1518,&PTR_LAB_14b952ba8);
  }
  return DAT_14cbc1518;
}



// FUNCTION 14661bb5d FUN_14661bb5d body=47 status=ok
// SIG undefined FUN_14661bb5d(void)

longlong FUN_14661bb5d(void)

{
  if (DAT_14cbc15e8 == 0) {
    FUN_14073dd9a(&DAT_14cbc15e8,&PTR_LAB_14b955498);
  }
  return DAT_14cbc15e8;
}



// FUNCTION 14661bb8c FUN_14661bb8c body=47 status=ok
// SIG undefined FUN_14661bb8c(void)

longlong FUN_14661bb8c(void)

{
  if (DAT_14cbc15f8 == 0) {
    FUN_14086a14e(&DAT_14cbc15f8,&PTR_FUN_14b955578);
  }
  return DAT_14cbc15f8;
}



// FUNCTION 14661bbbc FUN_14661bbbc body=48 status=ok
// SIG undefined FUN_14661bbbc(void)

void FUN_14661bbbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000228;
  *puVar1 = &PTR_FUN_14b957cf0;
  return;
}



// FUNCTION 14661bbec FUN_14661bbec body=65 status=ok
// SIG undefined FUN_14661bbec(void)

void FUN_14661bbec(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141103bac(puVar1);
  *puVar1 = &PTR_FUN_14b955660;
  puVar1[5] = &PTR_FUN_14b955910;
  puVar1[10] = &PTR_FUN_14b955940;
  puVar1[0xb] = &PTR_FUN_14b955970;
  return;
}



// FUNCTION 14661bc2d FUN_14661bc2d body=47 status=ok
// SIG undefined FUN_14661bc2d(void)

longlong FUN_14661bc2d(void)

{
  if (DAT_14cbc1618 == 0) {
    FUN_14073dd9a(&DAT_14cbc1618,&PTR_LAB_14b955618);
  }
  return DAT_14cbc1618;
}



// FUNCTION 14661bc5c FUN_14661bc5c body=55 status=ok
// SIG undefined FUN_14661bc5c(void)

void FUN_14661bc5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1630 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1630 = FUN_140002ddd(FUN_14661bc93,uVar1,L"ZoneTravelStationObjectBodyState");
  }
  return;
}



// FUNCTION 14661bc93 FUN_14661bc93 body=47 status=ok
// SIG undefined FUN_14661bc93(void)

longlong FUN_14661bc93(void)

{
  if (DAT_14cbc1628 == 0) {
    FUN_14086a14e(&DAT_14cbc1628,&PTR_FUN_14b955a08);
  }
  return DAT_14cbc1628;
}



// FUNCTION 14661bcc2 FUN_14661bcc2 body=48 status=ok
// SIG undefined FUN_14661bcc2(void)

void FUN_14661bcc2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14b957e60;
  return;
}



// FUNCTION 14661bcf2 FUN_14661bcf2 body=55 status=ok
// SIG undefined FUN_14661bcf2(void)

void FUN_14661bcf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1648 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1648 = FUN_140002ddd(FUN_14661bd29,uVar1,L"ZoneTravelStationObjectDef");
  }
  return;
}



// FUNCTION 14661bd29 FUN_14661bd29 body=47 status=ok
// SIG undefined FUN_14661bd29(void)

longlong FUN_14661bd29(void)

{
  if (DAT_14cbc1640 == 0) {
    FUN_14086a14e(&DAT_14cbc1640,&PTR_FUN_14b955b10);
  }
  return DAT_14cbc1640;
}



// FUNCTION 14661bd58 FUN_14661bd58 body=48 status=ok
// SIG undefined FUN_14661bd58(void)

void FUN_14661bd58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000490;
  *puVar1 = &PTR_FUN_14b957fd0;
  return;
}



// FUNCTION 14661bd88 FUN_14661bd88 body=422 status=ok
// SIG undefined FUN_14661bd88(void)

undefined8 * FUN_14661bd88(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (**(code **)(*(longlong *)(param_1 + -0x16e0) + 0x28))(param_1 + -0x16e0);
  FUN_1406c9d00(uVar7,&local_40);
  if (local_38 == 0) {
    uVar7 = FUN_140927942();
    local_38 = FUN_14477b664(uVar7);
  }
  if (local_30 == (longlong *)0x0) {
    if ((((local_38 != 0) && (local_40 != 0)) &&
        (plVar2 = *(longlong **)(local_38 + 0xb8), plVar2 != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 != '\0')) {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      local_30 = (longlong *)FUN_144aff482(uVar7,&local_40);
      if (local_30 != (longlong *)0x0) goto LAB_14661bddf;
    }
  }
  else {
LAB_14661bddf:
    plVar2 = local_30;
    lVar8 = (**(code **)(*local_30 + 8))(local_30);
    lVar9 = FUN_1458cf898();
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30 && ((char)plVar2[0x8b] == '\x01')))) {
      lVar8 = FUN_14580b593();
      *param_2 = *(undefined8 *)(lVar8 + 0x48);
      uVar3 = *(undefined4 *)(lVar8 + 0x54);
      uVar4 = *(undefined4 *)(lVar8 + 0x58);
      uVar5 = *(undefined4 *)(lVar8 + 0x5c);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar8 + 0x50);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      *(undefined4 *)(param_2 + 2) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
      param_2[3] = 0;
      iVar1 = *(int *)(lVar8 + 0x68);
      _Src = *(void **)(lVar8 + 0x60);
      *(int *)(param_2 + 4) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_2 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(param_2 + 3,iVar1,0);
        memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
      }
      goto LAB_14661be27;
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
LAB_14661be27:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14661bf36 FUN_14661bf36 body=1757 status=ok
// SIG undefined FUN_14661bf36(void)

void FUN_14661bf36(longlong param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  code **local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined1 local_190 [4];
  undefined8 local_18c;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined1 local_160 [24];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  code *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  code *local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar10 = param_1 + -0x398;
  FUN_140bfc8e6();
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbc19f8) {
    if ((*(longlong *)(param_1 + 0x2268) != 0) && (lVar9 = FUN_1447210f0(lVar10), lVar9 != 0)) {
      puVar12 = (undefined8 *)(param_1 + 0x2268);
      lVar10 = FUN_1447210f0(lVar10);
      if (*(longlong *)(lVar10 + 0x1f0) == 0) {
        puVar11 = (undefined8 *)(lVar10 + 0x458);
      }
      else {
        puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar11;
      lVar10 = FUN_144a61814(uVar5,puVar12);
      if (lVar10 != 0) {
        FUN_1405a424c(uVar5,*puVar12);
      }
      *puVar12 = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1f8);
  }
  if (*(longlong *)(param_2 + 0x68) != DAT_14cbc1a00) goto LAB_14661c402;
  FUN_1412561f0(lVar10);
  if (*(int *)(param_2 + 0x80) < 1) {
    if ((*(longlong *)(param_1 + 0x2268) != 0) && (lVar9 = FUN_1447210f0(lVar10), lVar9 != 0)) {
      puVar12 = (undefined8 *)(param_1 + 0x2268);
      lVar10 = FUN_1447210f0(lVar10);
      if (*(longlong *)(lVar10 + 0x1f0) == 0) {
        puVar11 = (undefined8 *)(lVar10 + 0x458);
      }
      else {
        puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar11;
      lVar10 = FUN_144a61814(uVar5,puVar12);
      if (lVar10 != 0) {
        FUN_1405a424c(uVar5,*puVar12);
      }
      *puVar12 = 0;
    }
    goto LAB_14661c402;
  }
  lVar9 = *(longlong *)(param_1 + 0x2260);
  if (*(float *)(param_2 + 0x84) <= 0.0) {
    if ((((lVar9 == 0) || (*(char *)(lVar9 + 0x458) != '\0')) ||
        (*(char *)(param_1 + -0x220) != '\x03')) || (lVar9 = FUN_1447210f0(lVar10), lVar9 == 0))
    goto LAB_14661c402;
    lVar9 = FUN_1447210f0(lVar10);
    bVar2 = *(byte *)(lVar9 + 0x152);
    if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_14661c402;
    local_f0._0_2_ = CONCAT11(local_f0._1_1_,1);
    local_e8 = FUN_148cc8d34;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    FUN_148cc8c7a(local_190,lVar10,&local_e8,&local_f0);
    lVar10 = FUN_1447210f0(lVar10);
    if (*(longlong *)(lVar10 + 0x1f0) == 0) {
      puVar12 = (undefined8 *)(lVar10 + 0x458);
    }
    else {
      puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
    }
    uVar5 = *puVar12;
    local_e8 = (code *)0x0;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    FUN_14487d8d8(&local_e8,local_190);
    fVar13 = 0.01;
  }
  else {
    if (lVar9 == 0) goto LAB_14661c402;
    lVar9 = FUN_1412fe774(lVar9 + 0x4b0);
    if (lVar9 != 0) {
      uVar5 = FUN_144a545f2(lVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x2260) + 0x4d8),0);
      local_1c8 = &local_108;
      local_108 = 0x3ff0000000000000;
      local_100 = 0x3ff0000000000000;
      local_f8 = 0x3ff0000000000000;
      local_1d0 = &local_128;
      local_128 = DAT_14c8464f8;
      uStack_120 = DAT_14c846500;
      local_118 = DAT_14c846508;
      local_1d8 = &local_148;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 1;
      local_1b0 = 0;
      local_1b8 = 1;
      local_1c0 = 0;
      FUN_140a44d48(lVar9,&local_e8,uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x2260) + 0x4d8));
      if (local_e8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x2260);
    lVar6 = *(longlong *)(lVar9 + 0x498);
    if (lVar6 == 0) {
      uVar5 = FUN_140067708();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar9 + 0x498) = lVar6;
    }
    if (*(longlong *)(lVar9 + 0x4a0) == 0) {
      if ((lVar6 != 0) && (*(longlong *)(lVar9 + 0x490) != 0)) {
        plVar3 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(lVar9 + 0x4a0) = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar9 + 0x490));
          *(longlong *)(lVar9 + 0x4a0) = lVar6;
          if (lVar6 != 0) goto LAB_14661c12a;
        }
      }
    }
    else {
LAB_14661c12a:
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0x3ff00000;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a4 = 0x3ff00000;
      uStack_a0 = 0;
      uStack_9c = 0x3ff00000;
      local_98 = 0x3ff0000000000000;
      uStack_90 = 0;
      local_88 = 0x3f800000;
      local_80 = 0;
      local_7c = 0;
      lVar9 = *(longlong *)(param_1 + 0x2260);
      uVar5 = *(undefined8 *)(lVar9 + 0x490);
      uVar7 = FUN_14477b664(*(undefined8 *)(lVar9 + 0x498));
      uVar8 = FUN_14477b664(uVar7);
      uVar7 = *(undefined8 *)(lVar9 + 0x4a0);
      local_190[0] = 0;
      local_18c = 0;
      local_180 = uVar5;
      uVar5 = FUN_14477b664(uVar8);
      local_178 = FUN_14477b664(uVar5);
      local_168 = 0;
      local_1c8 = (undefined8 *)0x0;
      local_1d8 = (undefined8 *)CONCAT71(local_1d8._1_7_,1);
      local_1d0 = &local_e8;
      local_170 = uVar7;
      FUN_140b3303c(local_160,lVar10,local_190,lVar9 + 0x4a8);
      FUN_144a7b030(local_160);
      if ((local_168 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(local_168 + 0x50));
      }
    }
    if (((*(char *)(*(longlong *)(param_1 + 0x2260) + 0x458) != '\0') ||
        (*(char *)(param_1 + -0x220) != '\x03')) || (lVar9 = FUN_1447210f0(lVar10), lVar9 == 0))
    goto LAB_14661c402;
    lVar9 = FUN_1447210f0(lVar10);
    bVar2 = *(byte *)(lVar9 + 0x152);
    if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_14661c402;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x2260) + 0x45c);
    fVar13 = 0.01;
    if (0.01 <= fVar1) {
      fVar13 = fVar1;
    }
    local_f0._0_2_ = CONCAT11(local_f0._1_1_,1);
    local_e8 = FUN_148cc8d34;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    FUN_148cc8c7a(local_190,lVar10,&local_e8,&local_f0);
    lVar10 = FUN_1447210f0(lVar10);
    if (*(longlong *)(lVar10 + 0x1f0) == 0) {
      puVar12 = (undefined8 *)(lVar10 + 0x458);
    }
    else {
      puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
    }
    uVar5 = *puVar12;
    local_e8 = (code *)0x0;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    FUN_14487d8d8(&local_e8,local_190);
  }
  local_1d8 = &local_f0;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_f0._4_4_ = 0xbf800000;
  local_f0._0_2_ = 0;
  FUN_1406f4044(uVar5,param_1 + 0x2268,&local_e8,fVar13);
  (*(code *)(&PTR_LAB_14a1c87a0)[(byte)local_a8])(&local_e8);
  FUN_1449db362(local_190);
LAB_14661c402:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14661c658 FUN_14661c658 body=40 status=ok
// SIG undefined FUN_14661c658(void)

undefined8 FUN_14661c658(undefined8 param_1,int param_2)

{
  FUN_140ce470e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c680 FUN_14661c680 body=40 status=ok
// SIG undefined FUN_14661c680(void)

undefined8 FUN_14661c680(undefined8 param_1,int param_2)

{
  FUN_141001552();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c6a8 FUN_14661c6a8 body=40 status=ok
// SIG undefined FUN_14661c6a8(void)

undefined8 FUN_14661c6a8(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c6d0 FUN_14661c6d0 body=40 status=ok
// SIG undefined FUN_14661c6d0(void)

undefined8 FUN_14661c6d0(undefined8 param_1,int param_2)

{
  FUN_14075380c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c6f8 FUN_14661c6f8 body=29 status=ok
// SIG undefined FUN_14661c6f8(void)

undefined8 FUN_14661c6f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c716 FUN_14661c716 body=29 status=ok
// SIG undefined FUN_14661c716(void)

undefined8 FUN_14661c716(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c734 FUN_14661c734 body=29 status=ok
// SIG undefined FUN_14661c734(void)

undefined8 FUN_14661c734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c752 FUN_14661c752 body=29 status=ok
// SIG undefined FUN_14661c752(void)

undefined8 FUN_14661c752(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c770 FUN_14661c770 body=29 status=ok
// SIG undefined FUN_14661c770(void)

undefined8 FUN_14661c770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c78e FUN_14661c78e body=29 status=ok
// SIG undefined FUN_14661c78e(void)

undefined8 FUN_14661c78e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c7de FUN_14661c7de body=29 status=ok
// SIG undefined FUN_14661c7de(void)

undefined8 FUN_14661c7de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c7fc FUN_14661c7fc body=29 status=ok
// SIG undefined FUN_14661c7fc(void)

undefined8 FUN_14661c7fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c840 FUN_14661c840 body=29 status=ok
// SIG undefined FUN_14661c840(void)

undefined8 FUN_14661c840(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c85e FUN_14661c85e body=29 status=ok
// SIG undefined FUN_14661c85e(void)

undefined8 FUN_14661c85e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c87c FUN_14661c87c body=48 status=ok
// SIG undefined FUN_14661c87c(void)

void FUN_14661c87c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x490);
  FUN_141021b94(param_2);
  *param_2 = &PTR_FUN_14b958140;
  return;
}



// FUNCTION 14661c8d2 FUN_14661c8d2 body=85 status=ok
// SIG undefined FUN_14661c8d2(void)

void FUN_14661c8d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b959e20;
  return;
}



// FUNCTION 14661c928 FUN_14661c928 body=29 status=ok
// SIG undefined FUN_14661c928(void)

undefined8 FUN_14661c928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661c95a FUN_14661c95a body=24 status=ok
// SIG undefined FUN_14661c95a(void)

bool FUN_14661c95a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661c972 FUN_14661c972 body=101 status=ok
// SIG undefined FUN_14661c972(void)

void FUN_14661c972(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9583a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14661c9d8 FUN_14661c9d8 body=9 status=ok
// SIG undefined FUN_14661c9d8(void)

void FUN_14661c9d8(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 14661c9e2 FUN_14661c9e2 body=29 status=ok
// SIG undefined FUN_14661c9e2(void)

undefined8 FUN_14661c9e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661ca00 FUN_14661ca00 body=76 status=ok
// SIG undefined FUN_14661ca00(void)

void FUN_14661ca00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(undefined1 *)(lVar1 + 0x4f0a) = 2;
    }
  }
  return;
}



// FUNCTION 14661ca4c FUN_14661ca4c body=254 status=ok
// SIG undefined FUN_14661ca4c(void)

undefined8
FUN_14661ca4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a3a3510;
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
  *local_48 = &PTR_FUN_14b95b8e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14490d954(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661cb4c FUN_14661cb4c body=254 status=ok
// SIG undefined FUN_14661cb4c(void)

undefined8
FUN_14661cb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9c20;
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
  *local_48 = &PTR_FUN_14b95b950;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ebcfd8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661cc4c FUN_14661cc4c body=71 status=ok
// SIG undefined FUN_14661cc4c(void)

undefined8 * FUN_14661cc4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b95ca90;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14661cc94 FUN_14661cc94 body=33 status=ok
// SIG undefined FUN_14661cc94(void)

void FUN_14661cc94(longlong param_1)

{
  FUN_14068a3ec();
  FUN_1447f69b6(param_1 + 0x3fe8);
  return;
}



// FUNCTION 14661ccb6 FUN_14661ccb6 body=33 status=ok
// SIG undefined FUN_14661ccb6(void)

void FUN_14661ccb6(longlong param_1)

{
  FUN_1409584a6();
  FUN_1447f69b6(param_1 + 0x4000);
  return;
}



// FUNCTION 14661ccf2 FUN_14661ccf2 body=43 status=ok
// SIG undefined FUN_14661ccf2(void)

undefined8 * FUN_14661ccf2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140fcbb85();
  *param_2 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x28);
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14661cd1e FUN_14661cd1e body=118 status=ok
// SIG undefined FUN_14661cd1e(void)

undefined8 FUN_14661cd1e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1403ae46b();
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
      (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x20) != 0 && (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0)))) {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar2 != 0) {
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014661cd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14661cd94 FUN_14661cd94 body=32 status=ok
// SIG undefined FUN_14661cd94(void)

void FUN_14661cd94(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407afa82();
  if (lVar1 != 0) {
    FUN_1407afafc(lVar1);
    return;
  }
  return;
}



// FUNCTION 14661cdb4 FUN_14661cdb4 body=484 status=ok
// SIG undefined FUN_14661cdb4(void)

void FUN_14661cdb4(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x2bb8);
  iVar1 = *(int *)(param_1 + 0x2bc0);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      if (*(int *)(lVar3 + lVar5) == param_2) goto LAB_14661cf30;
      lVar5 = lVar5 + 4;
    } while (lVar6 * 4 - lVar5 != 0);
  }
  *(uint *)(param_1 + 0x2bc0) = iVar1 + 1U;
  if (*(uint *)(&DAT_00002bc4 + param_1) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x2bb8),iVar1);
    lVar3 = *(longlong *)(param_1 + 0x2bb8);
  }
  *(int *)(lVar3 + lVar6 * 4) = param_2;
  if (*(longlong *)(param_1 + 0x2bc8) == 0) {
    lVar3 = FUN_1447210f0(param_1 + -0x3ad8);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_98[2] = lVar6;
    *local_98 = &PTR_FUN_14b95cc50;
    local_98[3] = 0;
    FUN_14485c47a(local_98 + 3,param_1 + -0x3ad8);
    *(undefined4 *)(puVar4 + 5) = 0;
    puVar4[4] = FUN_1458cb468;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    FUN_14016fdb0(uVar2,&local_a0,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_98);
    *(undefined8 *)(param_1 + 0x2bc8) = local_a0;
  }
LAB_14661cf30:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14661cf9a FUN_14661cf9a body=601 status=ok
// SIG undefined FUN_14661cf9a(void)

void FUN_14661cf9a(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [48];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_80,puVar5,1);
  local_78[0] = 0;
  local_74 = 0;
  local_68 = local_80;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar6 = *param_3;
  if (lVar6 != 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
      lVar6 = *param_3;
    }
    FUN_1400702d4(DAT_14caa8580,&local_b8,lVar6,0);
    if (local_b8 != 0) {
      FUN_147f7ce98(local_78);
    }
  }
  if (param_4 != '\0') {
    FUN_1412bd664(local_e8,local_78);
    local_f8 = 0;
    FUN_140f7fb5b(&local_b8,param_1,local_e8,0);
    local_48 = param_2;
    local_40 = &local_b8;
    FUN_148cd2d6e(param_1 + 0x6630,local_34);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    goto LAB_14661d073;
  }
  if (*param_5 == 0) {
LAB_14661d046:
    local_f8 = 0;
  }
  else {
    local_b8 = *param_5;
    uVar4 = FUN_1405b1a32();
    local_b0 = (longlong *)FUN_14477b664(uVar4);
    local_a8 = 0;
    if ((local_b0 == (longlong *)0x0) ||
       (plVar2 = (longlong *)local_b0[0x17], plVar2 == (longlong *)0x0)) goto LAB_14661d046;
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_14661d046;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_f8 = FUN_144aff482(uVar4,&local_b8);
  }
  FUN_140b32deb(local_98,param_1,local_78,0);
  FUN_144a7b030(local_98);
LAB_14661d073:
  if ((local_50 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_50 + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661d1f4 FUN_14661d1f4 body=485 status=ok
// SIG undefined FUN_14661d1f4(void)

void FUN_14661d1f4(longlong param_1,uint param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  
  if (((-1 < (int)param_2) && (*(char *)(param_1 + -0x3a70) == '\x03')) &&
     (uVar8 = (ulonglong)param_2, (int)param_2 < *(int *)(param_1 + 0x3d08))) {
    plVar1 = (longlong *)(param_1 + -0x3be8);
    lVar7 = *(longlong *)(param_1 + 0x3d00);
    lVar6 = lVar7 + uVar8 * 0x48;
    FUN_140705884(param_1 + 0x3bf0,lVar6);
    *(undefined4 *)(lVar6 + 0xc) = 0xffffffff;
    if ((*(longlong *)(lVar6 + 0x20) != 0) && (*(longlong *)(lVar6 + 0x28) != 0)) {
      lVar7 = lVar7 + uVar8 * 0x48;
      plVar9 = (longlong *)(lVar7 + 0x20);
      FUN_1401861f4(param_1 + 0x3bd8,param_2);
      if (*plVar9 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar6 + 0x28);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar1,uVar8);
      uVar2 = FUN_1403ae46b();
      if (uVar2 == param_2) {
        if (*plVar9 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar6 + 0x28);
        }
        lVar4 = (**(code **)(*plVar5 + 8))();
        if (lVar4 != 0) {
          uVar3 = FUN_1403ae386();
          plVar5 = (longlong *)FUN_144718840(lVar4,uVar3);
          if (plVar5 != (longlong *)0x0) {
            uVar10 = (**(code **)(*plVar5 + 0x98))(plVar5);
            *(undefined4 *)(param_1 + 0x5f40) = uVar10;
          }
        }
        lVar4 = FUN_1447210f0();
        *(float *)(param_1 + 0x5f44) = (float)*(double *)(lVar4 + 0x6d0);
      }
      if (*plVar9 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(lVar6 + 0x28);
      }
      uVar3 = (**(code **)(*plVar5 + 8))();
      FUN_140aeefbc(uVar3,0,1);
      *plVar9 = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
    }
    if (param_4 != '\0') {
      uVar2 = FUN_14042831e(plVar1);
      if (uVar2 == param_2) {
        FUN_1458df226(plVar1,1);
      }
      uVar2 = FUN_140232fad();
      if (uVar2 == param_2) {
        lVar6 = (**(code **)(*plVar1 + 0x5d0))(plVar1);
        if (lVar6 != 0) {
          lVar7 = FUN_144a5dd5e();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            FUN_146630ebe(lVar6);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14661d480 FUN_14661d480 body=205 status=ok
// SIG undefined FUN_14661d480(void)

void FUN_14661d480(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_1 + 0x3d08)) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x3d00);
      FUN_140705884(param_1 + 0x3bf0,lVar6 + lVar1);
      *(undefined4 *)(lVar1 + 0xc + lVar6) = 0xffffffff;
      if ((*(longlong *)(lVar1 + 0x20 + lVar6) != 0) &&
         (plVar3 = *(longlong **)(lVar1 + 0x28 + lVar6), plVar3 != (longlong *)0x0)) {
        plVar4 = (longlong *)(lVar6 + lVar1 + 0x20);
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + -0x3be8,uVar5 & 0xffffffff);
        if (*plVar4 == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(lVar1 + 0x28 + lVar6);
        }
        uVar2 = (**(code **)(*plVar3 + 8))();
        FUN_140aeefbc(uVar2,0,1);
        *plVar4 = 0;
        *(undefined8 *)(lVar6 + lVar1 + 0x28) = 0;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x3d08));
  }
  return;
}



// FUNCTION 14661d54e FUN_14661d54e body=234 status=ok
// SIG undefined FUN_14661d54e(void)

void FUN_14661d54e(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar2 = (byte)param_3;
  if (*(char *)(param_1 + 0x3d14) == '\0') {
    *(uint *)(param_1 + 0x3d18) = *(uint *)(param_1 + 0x3d18) | 1 << ((byte)param_2 & 0x1f);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3d08))) {
    if (*(byte *)(*(longlong *)(param_1 + 0x3d00) + 0x10 + (ulonglong)param_2 * 0x48) == bVar2) {
      lVar1 = *(longlong *)(param_1 + 0x3d00) + (ulonglong)param_2 * 0x48;
      FUN_140705884(param_1 + 0x3bf0,lVar1);
      *(byte *)(lVar1 + 0x10) = bVar2 ^ 1;
      lVar3 = (**(code **)(*(longlong *)(param_1 + -0x3be8) + 0x5e8))(param_1 + -0x3be8);
      if (lVar3 != 0) {
        lVar4 = FUN_144a7b4ca();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_1457dac38(lVar3,param_2,param_3);
        }
      }
      if (bVar2 != 0) {
        FUN_141074256(param_1 + 0x2418,param_2,*(undefined8 *)(lVar1 + 0x14));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14661d638 FUN_14661d638 body=83 status=ok
// SIG undefined FUN_14661d638(void)

longlong * FUN_14661d638(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_1449ce79a(param_1 + -0x3be8);
  lVar1 = *param_3;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else if (((cVar2 == '\0') || (lVar3 = *(longlong *)(lVar1 + 0xa0), lVar3 == 0)) &&
          (lVar3 = *(longlong *)(lVar1 + 0x98), lVar3 == 0)) {
    lVar3 = *(longlong *)(lVar1 + 0x3c);
  }
  *param_2 = lVar3;
  return param_2;
}



// FUNCTION 14661d68c FUN_14661d68c body=147 status=ok
// SIG undefined FUN_14661d68c(void)

void FUN_14661d68c(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + -0x3950) == '\x03') {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 15000) = param_2;
    *(undefined1 *)(param_1 + 0x3a96) = 0;
    FUN_144a62f0c(param_1 + -0x3ac8,*(undefined8 *)(param_1 + -0x3aa0),0x41);
    FUN_144a62f0c(param_1 + -0x3ac8,*(undefined8 *)(param_1 + -0x3aa0),0x42);
    FUN_1413e4850(param_1 + 0x36e0,*(undefined8 *)(param_1 + 15000));
    return;
  }
  return;
}



// FUNCTION 14661d720 FUN_14661d720 body=252 status=ok
// SIG undefined FUN_14661d720(void)

undefined8 FUN_14661d720(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x4a8);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88,param_1 + -0x3ac8);
    FUN_1447c3578(lVar1 + 0x1048,local_58,local_88);
    uVar4 = FUN_144a7b41a(local_58,0);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar3 = local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58[0];
      }
      (*pcVar2)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661d81e FUN_14661d81e body=881 status=ok
// SIG undefined FUN_14661d81e(void)

undefined8 FUN_14661d81e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_80;
  longlong local_78 [2];
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"pingable_hostile",0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbc1e90) && (FUN_144b3d300(&DAT_14cbc1e90), DAT_14cbc1e90 == -1)) {
    FUN_1400b22c2(&DAT_14cbc1e80,"Drone");
    atexit((_func_5014 *)&LAB_1440ae43a);
    _Init_thread_footer(&DAT_14cbc1e90);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbc1ea8) && (FUN_144b3d300(&DAT_14cbc1ea8), DAT_14cbc1ea8 == -1)) {
    FUN_1400b22c2(&DAT_14cbc1e98,"Char_DarkSiren_Phase");
    atexit((_func_5014 *)&LAB_1440ae44b);
    _Init_thread_footer(&DAT_14cbc1ea8);
  }
  local_80 = *(undefined8 *)(param_1 + -0x3bb0);
  FUN_1400021e4(&local_80,local_78);
  pwVar5 = DAT_14cbc1e98;
  if (DAT_14cbc1ea0 == 0) {
    pwVar5 = L"";
  }
  if (pwVar5 == (wchar_t *)0x0) {
    bVar6 = false;
  }
  else {
    sVar2 = wcslen(pwVar5);
    local_90 = 0xffffffff;
    local_98 = 0;
    iVar1 = FUN_1447ee042(local_78,pwVar5,sVar2 & 0xffffffff,1);
    bVar6 = iVar1 != -1;
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (bVar6) {
    pcVar4 = "pingable_pet";
  }
  else {
    iVar1 = FUN_14486116a(param_1 + -0x3330,param_2);
    if (iVar1 != 0) goto LAB_14661d94d;
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(local_78,"pingable_friendly",0);
    FUN_1404e49fa(&local_48,local_78);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_80 = *(undefined8 *)(param_1 + -0x3bb0);
    FUN_1400021e4(&local_80,local_78);
    pwVar5 = DAT_14cbc1e80;
    if (DAT_14cbc1e88 == 0) {
      pwVar5 = L"";
    }
    if (pwVar5 == (wchar_t *)0x0) {
      bVar6 = false;
    }
    else {
      sVar2 = wcslen(pwVar5);
      local_90 = 0xffffffff;
      local_98 = 0;
      iVar1 = FUN_1447ee042(local_78,pwVar5,sVar2 & 0xffffffff,1);
      bVar6 = iVar1 != -1;
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (!bVar6) goto LAB_14661d94d;
    pcVar4 = "pingable_drone";
  }
  uStack_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_78[1] = 0;
  local_78[0] = 0;
  FUN_1446ddda2(local_78,pcVar4,0);
  FUN_1404e49fa(&local_48,local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_14661d94d:
  if (DAT_14cb88fb8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144815d88(DAT_14cb88fb8,&local_48);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14661db90 FUN_14661db90 body=83 status=ok
// SIG undefined FUN_14661db90(void)

uint FUN_14661db90(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3b28) + 0x28))(param_1 + 0x3b28,0,5);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x3b38) + 0x10))(param_1 + 0x3b38);
    uVar2 = FUN_140226b70(uVar3);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// FUNCTION 14661dbfe FUN_14661dbfe body=29 status=ok
// SIG undefined FUN_14661dbfe(void)

undefined8 FUN_14661dbfe(longlong param_1,undefined8 param_2)

{
  FUN_140f7271e(param_1 + 0x5d20);
  return param_2;
}



// FUNCTION 14661dc1c FUN_14661dc1c body=623 status=ok
// SIG undefined FUN_14661dc1c(void)

undefined8 * FUN_14661dc1c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 800);
  if (lVar2 == 0) goto LAB_14661dc72;
  lVar7 = *(longlong *)(lVar2 + 0x5a0);
  if (lVar7 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0x5a0) = lVar7;
  }
  plVar1 = (longlong *)(lVar2 + 0x598);
  lVar6 = *(longlong *)(lVar2 + 0x5a8);
  if (lVar6 == 0) {
    if ((*plVar1 == 0) || (lVar7 == 0)) goto LAB_14661dc72;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(lVar2 + 0x5a8) = lVar6;
        if (lVar6 == 0) goto LAB_14661dc72;
        lVar7 = *(longlong *)(lVar2 + 0x5a0);
        goto LAB_14661dd06;
      }
    }
    *(undefined8 *)(lVar2 + 0x5a8) = 0;
    goto LAB_14661dc72;
  }
LAB_14661dd06:
  if (lVar7 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0x5a0) = lVar7;
    lVar6 = *(longlong *)(lVar2 + 0x5a8);
    if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14661de81:
        lVar6 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_14661de81;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(lVar2 + 0x5a8) = lVar6;
    }
  }
  if (*(int *)(lVar6 + 0x28) < 1) goto LAB_14661dc72;
  lVar7 = *(longlong *)(lVar2 + 0x5a0);
  if (lVar7 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0x5a0) = lVar7;
    lVar6 = *(longlong *)(lVar2 + 0x5a8);
  }
  if (lVar6 == 0) {
    *(undefined8 *)(lVar2 + 0x5a8) = 0;
    lVar6 = 0;
    if ((lVar7 != 0) && (*(longlong *)(lVar2 + 0x598) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14661de88:
        lVar6 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_14661de88;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(lVar2 + 0x5a8) = lVar6;
    }
  }
  FUN_140631198(*(longlong *)(lVar6 + 0x20) + 8,&local_38);
  if ((undefined8 *)&local_38 == param_2) {
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
    *(undefined4 *)(param_2 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
  }
LAB_14661dc72:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661de9a FUN_14661de9a body=1137 status=ok
// SIG undefined FUN_14661de9a(void)

void FUN_14661de9a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  undefined4 *local_1b0;
  uint local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [3];
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = FUN_1403ca227();
  lVar5 = FUN_1412fe774(lVar4 + 0x368);
  if (lVar5 != 0) {
    lVar5 = FUN_1412fe774(lVar4 + 0x3b8);
    if ((lVar5 != 0) && (param_1[0x39] != 0)) {
      cVar3 = FUN_144729dda(param_1 + 0x1396);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 0x700))(param_1);
        if (cVar3 == '\0') {
          local_b8 = DAT_14c8464f0;
          local_c8 = (undefined4)DAT_14c8464e0;
          uStack_c4 = DAT_14c8464e0._4_4_;
          uStack_c0 = (undefined4)DAT_14c8464e8;
          uStack_bc = DAT_14c8464e8._4_4_;
          local_e8 = (undefined4)DAT_14c8464f8;
          uStack_e4 = DAT_14c8464f8._4_4_;
          uStack_e0 = (undefined4)DAT_14c846500;
          uStack_dc = DAT_14c846500._4_4_;
          local_d8 = DAT_14c846508;
          local_108 = (undefined4)DAT_14c8464e0;
          uStack_104 = DAT_14c8464e0._4_4_;
          uStack_100 = (undefined4)DAT_14c8464e8;
          uStack_fc = DAT_14c8464e8._4_4_;
          local_f8 = DAT_14c8464f0;
          lVar5 = param_1[0x39];
          uVar7 = FUN_1412fe774(lVar4 + 0x368);
          local_188 = 1;
          local_190 = 1;
          local_1a0 = (longlong *)CONCAT71(local_1a0._1_7_,1);
          local_1b0 = &local_c8;
          local_198 = 2;
          local_1a8 = 2;
          local_1b8 = &local_e8;
          uVar7 = FUN_140e3e448(uVar7,lVar5,0,&local_108);
          FUN_14485c47a(param_1 + 0x1396,uVar7);
        }
      }
      cVar3 = FUN_144729dda(param_1 + 0x1397);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 0x700))(param_1);
        if (cVar3 != '\0') {
          local_118 = DAT_14c8464f0;
          local_128 = (undefined4)DAT_14c8464e0;
          uStack_124 = DAT_14c8464e0._4_4_;
          uStack_120 = (undefined4)DAT_14c8464e8;
          uStack_11c = DAT_14c8464e8._4_4_;
          local_148 = (undefined4)DAT_14c8464f8;
          uStack_144 = DAT_14c8464f8._4_4_;
          uStack_140 = (undefined4)DAT_14c846500;
          uStack_13c = DAT_14c846500._4_4_;
          local_138 = DAT_14c846508;
          local_168 = (undefined4)DAT_14c8464e0;
          uStack_164 = DAT_14c8464e0._4_4_;
          uStack_160 = (undefined4)DAT_14c8464e8;
          uStack_15c = DAT_14c8464e8._4_4_;
          local_158 = DAT_14c8464f0;
          lVar5 = param_1[0x39];
          uVar7 = FUN_1412fe774(lVar4 + 0x3b8);
          local_188 = 1;
          local_190 = 1;
          local_1a0 = (longlong *)CONCAT71(local_1a0._1_7_,1);
          local_198 = 2;
          local_1a8 = 2;
          local_1b8 = &local_148;
          local_1b0 = &local_128;
          uVar7 = FUN_140e3e448(uVar7,lVar5,0,&local_168);
          FUN_14485c47a(param_1 + 0x1397,uVar7);
        }
      }
      local_170 = 0;
      FUN_14485c47a(&local_170,param_1);
      lVar6 = FUN_14050fd64();
      uVar7 = local_170;
      local_88[2] = 0;
      local_70 = 0;
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_1446efa72(&local_68,0,2,0x10);
      uStack_60 = 2;
      *local_68 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_68[2] = lVar8;
      *local_68 = &PTR_FUN_14b95ca00;
      local_68[3] = uVar7;
      FUN_144a450dc(local_88 + 2,&local_68);
      FUN_1449db362(&local_68);
      local_88[0] = 0;
      local_88[1] = 0;
      local_68 = *(undefined8 **)(lVar4 + 1000);
      uStack_60 = *(undefined4 *)(lVar4 + 0x3f0);
      uStack_5c = *(undefined4 *)(lVar4 + 0x3f4);
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar4 + 0x400);
      lVar5 = (longlong)local_50;
      _Src = *(void **)(lVar4 + 0x3f8);
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar5 * 2);
      }
      local_a0 = &local_48;
      local_a8 = &local_68;
      FUN_140a1e2b2(&local_98);
      local_1a0 = local_88;
      local_1a8 = local_1a8 & 0xffffff00;
      local_1b0 = (undefined4 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
      local_1b8 = (undefined4 *)((ulonglong)local_1b8 & 0xffffffff00000000);
      FUN_140421d62(lVar6 + 0x1e8,local_180,&local_98,local_88 + 2);
      FUN_140861e20(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1449db362(local_88 + 2);
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_178 + 0x10))(local_178);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661e32e FUN_14661e32e body=24 status=ok
// SIG undefined FUN_14661e32e(void)

bool FUN_14661e32e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661e346 FUN_14661e346 body=24 status=ok
// SIG undefined FUN_14661e346(void)

bool FUN_14661e346(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661e35e FUN_14661e35e body=156 status=ok
// SIG undefined FUN_14661e35e(void)

bool FUN_14661e35e(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661e3fc FUN_14661e3fc body=26 status=ok
// SIG undefined FUN_14661e3fc(void)

bool FUN_14661e3fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14661e42a FUN_14661e42a body=101 status=ok
// SIG undefined FUN_14661e42a(void)

void FUN_14661e42a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95beb0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95be40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14661e490 FUN_14661e490 body=24 status=ok
// SIG undefined FUN_14661e490(void)

bool FUN_14661e490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661e4a8 FUN_14661e4a8 body=24 status=ok
// SIG undefined FUN_14661e4a8(void)

bool FUN_14661e4a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661e4c0 FUN_14661e4c0 body=24 status=ok
// SIG undefined FUN_14661e4c0(void)

bool FUN_14661e4c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661e4d8 FUN_14661e4d8 body=169 status=ok
// SIG undefined FUN_14661e4d8(void)

bool FUN_14661e4d8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661e596 FUN_14661e596 body=24 status=ok
// SIG undefined FUN_14661e596(void)

bool FUN_14661e596(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661e5ae FUN_14661e5ae body=101 status=ok
// SIG undefined FUN_14661e5ae(void)

void FUN_14661e5ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95c5a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95c530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14661e614 FUN_14661e614 body=39 status=ok
// SIG undefined FUN_14661e614(void)

void FUN_14661e614(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014661e638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined1 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14661e63c FUN_14661e63c body=300 status=ok
// SIG undefined FUN_14661e63c(void)

undefined8 * FUN_14661e63c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  param_1[3] = param_2[3];
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
    bVar6 = DAT_14c950c29;
  }
  param_1[5] = param_2[5];
  lVar1 = param_2[6];
  param_1[6] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
    bVar6 = DAT_14c950c29;
  }
  param_1[7] = param_2[7];
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  param_1[9] = param_2[9];
  FUN_140d8ebf0(param_1 + 10,param_2 + 10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 300);
  uVar3 = *(undefined4 *)(param_2 + 0x26);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar4;
  FUN_1404e49e4(param_1 + 0x27,param_2 + 0x27);
  uVar5 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar5;
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  return param_1;
}



// FUNCTION 14661e768 FUN_14661e768 body=26 status=ok
// SIG undefined FUN_14661e768(void)

bool FUN_14661e768(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14661e782 FUN_14661e782 body=24 status=ok
// SIG undefined FUN_14661e782(void)

bool FUN_14661e782(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661e79a FUN_14661e79a body=85 status=ok
// SIG undefined FUN_14661e79a(void)

void FUN_14661e79a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95cb30;
  return;
}



// FUNCTION 14661e7f0 FUN_14661e7f0 body=29 status=ok
// SIG undefined FUN_14661e7f0(void)

undefined8 FUN_14661e7f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661e80e FUN_14661e80e body=38 status=ok
// SIG undefined FUN_14661e80e(void)

void FUN_14661e80e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1ec0) != 0) {
    FUN_140bcbe96();
  }
  FUN_140521022(param_1);
  return;
}



// FUNCTION 14661e84a FUN_14661e84a body=125 status=ok
// SIG undefined FUN_14661e84a(void)

void FUN_14661e84a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_14110fb2c(*(longlong *)(param_1 + 0x260),param_2);
    return;
  }
  if (*(char *)(param_1 + -0x1ae8) == '\x03') {
    lVar1 = FUN_1411aa7cb(param_1 + -0x1c60);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x260) = lVar1;
    FUN_1411aa87e(lVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14661e8c8 FUN_14661e8c8 body=177 status=ok
// SIG undefined FUN_14661e8c8(void)

undefined8 FUN_14661e8c8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2860);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0xd28);
  if (lVar5 == 0) {
    uVar4 = FUN_145723f28();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0xd28) = lVar5;
  }
  if (((*(longlong *)(lVar1 + 0xd30) != 0) || (lVar5 == 0)) || (*(longlong *)(lVar1 + 0xd20) == 0))
  goto LAB_14661e8f3;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14661e975:
    uVar4 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_14661e975;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0xd20));
  }
  *(undefined8 *)(lVar1 + 0xd30) = uVar4;
LAB_14661e8f3:
  uVar4 = FUN_1405c04c0();
  return uVar4;
}



// FUNCTION 14661e97a FUN_14661e97a body=620 status=ok
// SIG undefined FUN_14661e97a(void)

undefined8 * FUN_14661e97a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) goto LAB_14661e9cd;
  lVar7 = *(longlong *)(lVar2 + 0xcd8);
  if (lVar7 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0xcd8) = lVar7;
  }
  plVar1 = (longlong *)(lVar2 + 0xcd0);
  lVar6 = *(longlong *)(lVar2 + 0xce0);
  if (lVar6 == 0) {
    if ((*plVar1 == 0) || (lVar7 == 0)) goto LAB_14661e9cd;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(lVar2 + 0xce0) = lVar6;
        if (lVar6 == 0) goto LAB_14661e9cd;
        lVar7 = *(longlong *)(lVar2 + 0xcd8);
        goto LAB_14661ea61;
      }
    }
    *(undefined8 *)(lVar2 + 0xce0) = 0;
    goto LAB_14661e9cd;
  }
LAB_14661ea61:
  if (lVar7 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0xcd8) = lVar7;
    lVar6 = *(longlong *)(lVar2 + 0xce0);
    if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14661ebdc:
        lVar6 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_14661ebdc;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(lVar2 + 0xce0) = lVar6;
    }
  }
  if (*(int *)(lVar6 + 0x28) < 1) goto LAB_14661e9cd;
  lVar7 = *(longlong *)(lVar2 + 0xcd8);
  if (lVar7 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0xcd8) = lVar7;
    lVar6 = *(longlong *)(lVar2 + 0xce0);
  }
  if (lVar6 == 0) {
    *(undefined8 *)(lVar2 + 0xce0) = 0;
    lVar6 = 0;
    if ((lVar7 != 0) && (*(longlong *)(lVar2 + 0xcd0) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14661ebe3:
        lVar6 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_14661ebe3;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(lVar2 + 0xce0) = lVar6;
    }
  }
  FUN_140631198(*(longlong *)(lVar6 + 0x20) + 8,&local_38);
  if ((undefined8 *)&local_38 == param_2) {
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
    *(undefined4 *)(param_2 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
  }
LAB_14661e9cd:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661ebe8 FUN_14661ebe8 body=98 status=ok
// SIG undefined FUN_14661ebe8(void)

void FUN_14661ebe8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(char *)(lVar1 + 0x4f13) != '\0')) {
      return;
    }
  }
  FUN_140f914bc(param_1,param_2);
  return;
}



// FUNCTION 14661ec4a FUN_14661ec4a body=103 status=ok
// SIG undefined FUN_14661ec4a(void)

ulonglong FUN_14661ec4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 == (longlong *)0x0) {
LAB_14661ec92:
    bVar7 = false;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14661ec92;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x38) != 0;
    if (bVar7) {
      uVar6 = FUN_140373de4();
      unaff_RBX = (ulonglong)uVar6;
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
  return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar7) & 0xffffffff;
}



// FUNCTION 14661eccc FUN_14661eccc body=45 status=ok
// SIG undefined FUN_14661eccc(void)

void FUN_14661eccc(longlong param_1)

{
  FUN_140115e24();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_144757f48(param_1,0x4000000);
    return;
  }
  return;
}



// FUNCTION 14661ecfa FUN_14661ecfa body=100 status=ok
// SIG undefined FUN_14661ecfa(void)

void FUN_14661ecfa(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  
  plVar1 = (longlong *)FUN_144a8232a(&DAT_14cbc29d8);
  if (*param_2 == *plVar1) {
    uVar2 = FUN_1407eda54(*param_3);
    FUN_1406966b6(param_1 + -0x390,&DAT_14cbc29d0,uVar2);
    FUN_1405e47c6(param_1 + -0x390,uVar2 ^ 1);
    return;
  }
  return;
}



// FUNCTION 14661ed5e FUN_14661ed5e body=131 status=ok
// SIG undefined FUN_14661ed5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14661ed5e(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"oak_vehicle",1);
  FUN_14147d486(&DAT_14cbc29f0,local_18,3);
  _DAT_14cbc29f0 = &PTR_FUN_14b95e8a0;
  FUN_140834d1a(&DAT_14cbc29f0,L"Events related to the Oak2 personal vehicle.");
  DAT_14cbc2a4d = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661ede2 FUN_14661ede2 body=842 status=ok
// SIG undefined FUN_14661ede2(void)

void FUN_14661ede2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1458725b2();
  local_48 = 0;
  local_58 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  FUN_1446f470e(&local_60,L"GbxActorData",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_60);
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"RestrictedOwner",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"DriverReplicatedState",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ResourcePoolManager",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HealthState",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"GbxActorPartOwnerState",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"AppearanceNetChannels",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = FUN_1458720f0();
  FUN_140f1fa23(uVar1,param_2,&local_58);
  local_48 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  local_58 = 3;
  FUN_1446f470e(&local_60,L"ReplicatedZoomState",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_60);
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"HoverDrive",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"VehicleWeapons",1);
  uVar1 = FUN_1402095ca();
  FUN_1402095ca();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661f12e FUN_14661f12e body=381 status=ok
// SIG undefined FUN_14661f12e(void)

longlong FUN_14661f12e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_145860ede();
  if (lVar2 != 0) {
    lVar3 = FUN_1410decb6();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar3 = FUN_145860df8();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        local_38 = 0;
        uStack_30 = 0;
        local_48 = 0;
        lStack_40 = 0;
        (**(code **)(*param_1 + 0x870))(param_1,&local_48);
        FUN_14888a0a8(lVar2,&local_48);
        if (lStack_40 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      lVar3 = param_1[0x78];
      if (lVar3 != 0) {
        lVar4 = FUN_144a75eb4();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (*(longlong *)(lVar3 + 0x508) != 0)) {
          lVar4 = FUN_140dd10c4();
          plVar1 = *(longlong **)(lVar3 + 0x508);
          if (((plVar1 != (longlong *)0x0) && (lVar4 != 0)) &&
             ((lVar3 = plVar1[2], lVar3 != 0 &&
              ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)))))) {
            (**(code **)(*plVar1 + 0x318))(plVar1,&DAT_14cbc9dd8);
            (**(code **)(*plVar1 + 0x308))(plVar1,&DAT_14cbc9de8);
          }
        }
      }
      if (param_1[0x340] != 0) {
        FUN_140375764(lVar2,param_1[0x340] + 0x16d8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661f2ac FUN_14661f2ac body=167 status=ok
// SIG undefined FUN_14661f2ac(void)

void FUN_14661f2ac(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x448) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 0x11a8,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661f354 FUN_14661f354 body=218 status=ok
// SIG undefined FUN_14661f354(void)

void FUN_14661f354(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145980c64();
  FUN_1409b52ac(param_1 + 0x460);
  FUN_1414a9acc(param_1);
  lVar1 = *(longlong *)(param_1 + 0x1700);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x3c0);
    if (plVar2 == (longlong *)0x0) {
      local_28 = DAT_14c846508;
      local_38 = DAT_14c8464f8;
      dStack_30 = DAT_14c846500;
    }
    else {
      (**(code **)(*plVar2 + 0x680))(plVar2,&local_38);
    }
    *(float *)(lVar1 + 0x1998) = (float)dStack_30;
    *(float *)(lVar1 + 0x199c) = (float)local_38;
  }
  (**(code **)(*(longlong *)(param_1 + 0x500) + 0x10))(param_1 + 0x500);
  if (*(longlong *)(param_1 + 0x1710) != 0) {
    FUN_1459808ee(*(longlong *)(param_1 + 0x1710),param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661f430 FUN_14661f430 body=187 status=ok
// SIG undefined FUN_14661f430(void)

void FUN_14661f430(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_1[0x2e2] != 0) {
    FUN_1457e35f8(param_1[0x2e2],param_1[0x78]);
  }
  (**(code **)(param_1[0xa0] + 0x18))(param_1 + 0xa0);
  FUN_141418d4a(param_1);
  lVar2 = param_1[0x78];
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x65) & 2) == 0) {
      bVar1 = *(byte *)(lVar2 + 0x348);
      FUN_1457e36e4(param_1);
      FUN_1409b52ac(param_1 + 0x8c);
      if ((bVar1 & 2) == 0) {
        return;
      }
    }
    else {
      FUN_1457e36e4(param_1);
      FUN_1409b52ac(param_1 + 0x8c);
    }
                    /* WARNING: Could not recover jumptable at 0x00014661f4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5c8))(param_1,0);
    return;
  }
  FUN_1457e36e4(param_1);
  FUN_1409b52ac(param_1 + 0x8c);
  return;
}



// FUNCTION 14661f4ec FUN_14661f4ec body=254 status=ok
// SIG undefined FUN_14661f4ec(void)

undefined8
FUN_14661f4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e06450;
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
  *local_48 = &PTR_FUN_14b95f560;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661f5ec FUN_14661f5ec body=110 status=ok
// SIG undefined FUN_14661f5ec(void)

void FUN_14661f5ec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a08);
    lVar3 = FUN_144a5dd5e();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (lVar2 != 0)) {
      thunk_FUN_1459a44de(lVar1,*(undefined8 *)(lVar2 + 0x130),*(undefined8 *)(lVar2 + 0x148),
                          0xbf800000,0,1);
    }
  }
  return;
}



// FUNCTION 14661f65a FUN_14661f65a body=99 status=ok
// SIG undefined FUN_14661f65a(void)

void FUN_14661f65a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + -0xe8) != 0) {
    lVar3 = FUN_144a5dd5e();
    lVar1 = *(longlong *)(param_1 + -0xe8);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_140ef0db2(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14661f6be FUN_14661f6be body=83 status=ok
// SIG undefined FUN_14661f6be(void)

longlong FUN_14661f6be(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + -0x140);
  if (lVar2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar2 = FUN_1402a1246(lVar2);
      if (lVar2 != 0) {
        return lVar2 + 0xd28;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14661f712 FUN_14661f712 body=613 status=ok
// SIG undefined FUN_14661f712(void)

undefined8 * FUN_14661f712(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x1500);
  if (lVar2 == 0) goto LAB_14661f77b;
  lVar6 = *(longlong *)(lVar2 + 0x1788);
  if (lVar6 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0x1788) = lVar6;
  }
  plVar1 = (longlong *)(lVar2 + 0x1780);
  lVar7 = *(longlong *)(lVar2 + 0x1790);
  if (lVar7 == 0) {
    if ((*plVar1 == 0) || (lVar6 == 0)) goto LAB_14661f77b;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(lVar2 + 0x1790) = lVar7;
        if (lVar7 == 0) goto LAB_14661f77b;
        lVar6 = *(longlong *)(lVar2 + 0x1788);
        goto LAB_14661f7f2;
      }
    }
    *(undefined8 *)(lVar2 + 0x1790) = 0;
    goto LAB_14661f77b;
  }
LAB_14661f7f2:
  if (lVar6 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0x1788) = lVar6;
    lVar7 = *(longlong *)(lVar2 + 0x1790);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14661f96d:
        lVar7 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_14661f96d;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(lVar2 + 0x1790) = lVar7;
    }
  }
  if (*(int *)(lVar7 + 0x28) < 1) goto LAB_14661f77b;
  lVar6 = *(longlong *)(lVar2 + 0x1788);
  if (lVar6 == 0) {
    uVar5 = FUN_145bc9f92();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0x1788) = lVar6;
    lVar7 = *(longlong *)(lVar2 + 0x1790);
  }
  if (lVar7 == 0) {
    *(undefined8 *)(lVar2 + 0x1790) = 0;
    lVar7 = 0;
    if ((lVar6 != 0) && (*(longlong *)(lVar2 + 0x1780) != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if (plVar3 == (longlong *)0x0) {
LAB_14661f974:
        lVar7 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 == '\0') goto LAB_14661f974;
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(lVar2 + 0x1790) = lVar7;
    }
  }
  FUN_140631198(*(longlong *)(lVar7 + 0x20) + 8,&local_38);
  if ((undefined8 *)&local_38 == param_2) {
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
    *(undefined4 *)(param_2 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
  }
LAB_14661f77b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661f978 FUN_14661f978 body=150 status=ok
// SIG undefined FUN_14661f978(void)

void FUN_14661f978(longlong param_1,undefined4 param_2)

{
  FUN_140696702();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2c88) {
    FUN_144b3d300(&DAT_14cbc2c88);
    if (DAT_14cbc2c88 == -1) {
      FUN_1446f470e(&DAT_14cbc2c80,L"HiddenInGame",1);
      _Init_thread_footer(&DAT_14cbc2c88);
    }
  }
  FUN_140e16d82(param_1 + 0x22a0,DAT_14cbc2c80,param_2,1,0);
  return;
}



// FUNCTION 14661fa0e FUN_14661fa0e body=54 status=ok
// SIG undefined FUN_14661fa0e(void)

void FUN_14661fa0e(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  if ((param_4 == '\0') &&
     ((*(char *)(param_1 + 0xd0) != '\x01' ||
      ((*(longlong *)(param_1 + 0xc0) != 0 &&
       (*(char *)(*(longlong *)(param_1 + 0xc0) + 0xa0) == '\0')))))) {
    return;
  }
  FUN_140f1fcc2(param_1,param_3 | 2,param_2,0);
  return;
}



// FUNCTION 14661fa44 FUN_14661fa44 body=228 status=ok
// SIG undefined FUN_14661fa44(void)

undefined8 FUN_14661fa44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b3e9c20;
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
  *local_38 = &PTR_FUN_14b95fc10;
  local_38[3] = param_3;
  local_38[4] = &LAB_141270160;
  FUN_140ebcfd8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14661fb2a FUN_14661fb2a body=40 status=ok
// SIG undefined FUN_14661fb2a(void)

undefined8 FUN_14661fb2a(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661fb52 FUN_14661fb52 body=40 status=ok
// SIG undefined FUN_14661fb52(void)

undefined8 FUN_14661fb52(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661fb7a FUN_14661fb7a body=181 status=ok
// SIG undefined FUN_14661fb7a(void)

void FUN_14661fb7a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  if (cVar5 == '\0') {
    return;
  }
  lVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x28) + 0x1c4);
  if (lVar6 != 0) {
    lVar7 = FUN_140e85284();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) goto LAB_14661fbd9;
  }
  lVar6 = 0;
LAB_14661fbd9:
  **(longlong **)(param_1 + 8) = lVar6;
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar7 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar7 = param_2;
  }
  *(undefined8 *)(lVar7 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar7 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar7 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 14661fc30 FUN_14661fc30 body=29 status=ok
// SIG undefined FUN_14661fc30(void)

undefined8 FUN_14661fc30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661fc4e FUN_14661fc4e body=29 status=ok
// SIG undefined FUN_14661fc4e(void)

undefined8 FUN_14661fc4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661fc6c FUN_14661fc6c body=24 status=ok
// SIG undefined FUN_14661fc6c(void)

bool FUN_14661fc6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661fc84 FUN_14661fc84 body=9 status=ok
// SIG undefined FUN_14661fc84(void)

void FUN_14661fc84(longlong param_1)

{
  FUN_14060fc84(param_1 + 0x10);
  return;
}



// FUNCTION 14661fc8e FUN_14661fc8e body=29 status=ok
// SIG undefined FUN_14661fc8e(void)

undefined8 FUN_14661fc8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661fcac FUN_14661fcac body=29 status=ok
// SIG undefined FUN_14661fcac(void)

bool FUN_14661fcac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14661fcca FUN_14661fcca body=24 status=ok
// SIG undefined FUN_14661fcca(void)

bool FUN_14661fcca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661fce2 FUN_14661fce2 body=29 status=ok
// SIG undefined FUN_14661fce2(void)

bool FUN_14661fce2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14661fd00 FUN_14661fd00 body=26 status=ok
// SIG undefined FUN_14661fd00(void)

bool FUN_14661fd00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14661fd1a FUN_14661fd1a body=24 status=ok
// SIG undefined FUN_14661fd1a(void)

bool FUN_14661fd1a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661fd32 FUN_14661fd32 body=29 status=ok
// SIG undefined FUN_14661fd32(void)

bool FUN_14661fd32(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14661fd50 FUN_14661fd50 body=26 status=ok
// SIG undefined FUN_14661fd50(void)

bool FUN_14661fd50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14661fd6a FUN_14661fd6a body=24 status=ok
// SIG undefined FUN_14661fd6a(void)

bool FUN_14661fd6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661fd82 FUN_14661fd82 body=29 status=ok
// SIG undefined FUN_14661fd82(void)

bool FUN_14661fd82(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14661fda0 FUN_14661fda0 body=24 status=ok
// SIG undefined FUN_14661fda0(void)

bool FUN_14661fda0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661fdb8 FUN_14661fdb8 body=26 status=ok
// SIG undefined FUN_14661fdb8(void)

bool FUN_14661fdb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14661fdd2 FUN_14661fdd2 body=24 status=ok
// SIG undefined FUN_14661fdd2(void)

bool FUN_14661fdd2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661fdea FUN_14661fdea body=26 status=ok
// SIG undefined FUN_14661fdea(void)

bool FUN_14661fdea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14661fe04 FUN_14661fe04 body=24 status=ok
// SIG undefined FUN_14661fe04(void)

bool FUN_14661fe04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14661fe1c FUN_14661fe1c body=99 status=ok
// SIG undefined FUN_14661fe1c(void)

void FUN_14661fe1c(longlong *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_14097d052();
  if ((param_2 != 0) && (0 < (int)param_1[1])) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      cVar1 = FUN_14069eaf4(*param_1 + lVar3,param_2);
      if (cVar1 != '\0') {
        FUN_14575aef0(param_1,uVar2 & 0xffffffff);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x30;
    } while ((longlong)uVar2 < (longlong)(int)param_1[1]);
  }
  return;
}



// FUNCTION 14661fe80 FUN_14661fe80 body=777 status=ok
// SIG undefined FUN_14661fe80(void)

void FUN_14661fe80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(&DAT_00001100 + param_1) == 0) {
    uVar9 = FUN_141518b52();
    uVar9 = FUN_14477b664(uVar9);
    *(undefined8 *)(&DAT_00001100 + param_1) = uVar9;
  }
  lVar10 = param_2[1];
  if (lVar10 == 0) {
    lVar10 = FUN_141518b52();
  }
  lVar12 = *param_2;
  uVar11 = FUN_14477b664(lVar10);
  local_50 = lVar12;
  uVar6 = FUN_144a7891a(uVar11);
  local_58 = *(undefined8 *)(param_1 + 0x10f8);
  uVar9 = *(undefined8 *)(&DAT_00001100 + param_1);
  uVar7 = FUN_144a7891a(uVar9);
  local_78 = uVar11;
  local_70 = &local_50;
  cVar5 = FUN_144a789b8(uVar7,uVar9,&local_58,uVar6);
  if (cVar5 != '\0') goto LAB_14661ff2c;
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_1);
  }
  FUN_14040d984(&local_50,lVar10);
  if (local_48 == (longlong *)0x0) goto LAB_14661ff2c;
  plVar2 = (longlong *)(param_1 + 0x10f8);
  iVar8 = (int)local_48[1];
  do {
    if (iVar8 == 0) {
      plVar13 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar4 = (int)local_48[1];
    bVar14 = iVar8 == iVar4;
    if (bVar14) {
      *(int *)(local_48 + 1) = iVar8 + 1;
      iVar4 = iVar8;
    }
    iVar8 = iVar4;
    UNLOCK();
    plVar13 = local_48;
  } while (!bVar14);
  LOCK();
  piVar1 = (int *)((longlong)local_48 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_48 + 0x10))();
  }
  lVar10 = local_50;
  if (plVar13 == (longlong *)0x0) goto LAB_14661ff2c;
  if (local_50 != 0) {
    lVar12 = *(longlong *)(&DAT_00001100 + param_1);
    if (lVar12 == 0) {
      uVar9 = FUN_141518b52();
      lVar12 = FUN_14477b664(uVar9);
      *(longlong *)(&DAT_00001100 + param_1) = lVar12;
    }
    if (*(longlong *)(param_1 + 0x1108) == 0) {
      if ((lVar12 != 0) && (*plVar2 != 0)) {
        plVar3 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          *(undefined8 *)(param_1 + 0x1108) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar12 = FUN_144aff482(uVar9,plVar2);
          *(longlong *)(param_1 + 0x1108) = lVar12;
          if (lVar12 != 0) goto LAB_146620067;
        }
      }
    }
    else {
LAB_146620067:
      FUN_1440c9b46(lVar10,&local_50,plVar2,*(undefined8 *)(param_1 + 0xa8));
      FUN_1440c8dba(&local_50);
    }
    FUN_148ce0120(plVar2,param_2);
    lVar12 = *(longlong *)(&DAT_00001100 + param_1);
    if (lVar12 == 0) {
      uVar9 = FUN_141518b52();
      lVar12 = FUN_14477b664(uVar9);
      *(longlong *)(&DAT_00001100 + param_1) = lVar12;
    }
    if (*(longlong *)(param_1 + 0x1108) == 0) {
      if ((lVar12 != 0) && (*plVar2 != 0)) {
        plVar3 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          *(undefined8 *)(param_1 + 0x1108) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar12 = FUN_144aff482(uVar9,plVar2);
          *(longlong *)(param_1 + 0x1108) = lVar12;
          if (lVar12 != 0) goto LAB_1466200be;
        }
      }
    }
    else {
LAB_1466200be:
      FUN_140170b22(lVar10,local_68,plVar2,*(undefined8 *)(param_1 + 0xa8));
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
    }
  }
  LOCK();
  plVar2 = plVar13 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_14661ff2c:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14662018a FUN_14662018a body=172 status=ok
// SIG undefined FUN_14662018a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14662018a(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_40,L"AI.MigrationActor",1);
  FUN_1413e432a(lVar1,&local_28,local_40,local_38);
  _DAT_14cbc3008 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146620238 FUN_146620238 body=228 status=ok
// SIG undefined FUN_146620238(void)

undefined8 FUN_146620238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b3e9ef0;
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
  *local_38 = &PTR_FUN_14b9616d0;
  local_38[3] = param_3;
  local_38[4] = &LAB_148ce0c76;
  FUN_1403524de(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662031e FUN_14662031e body=116 status=ok
// SIG undefined FUN_14662031e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14662031e(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"mission_state",1);
  FUN_14147d486(&DAT_14cbc30d0,local_18,3);
  _DAT_14cbc30d0 = &PTR_FUN_14b9610d8;
  _DAT_14cbc3130 = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146620394 FUN_146620394 body=38 status=ok
// SIG undefined FUN_146620394(void)

undefined8 FUN_146620394(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Gbx Missions",1);
  return param_2;
}



// FUNCTION 1466203ba FUN_1466203ba body=105 status=ok
// SIG undefined FUN_1466203ba(void)

void FUN_1466203ba(void)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_20;
  local_20 = DAT_14cadb9f0;
  local_18 = DAT_14c9a40a0;
  local_10 = DAT_14c9a4098;
  local_28 = &local_8;
  FUN_14585aa24();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146620424 FUN_146620424 body=166 status=ok
// SIG undefined FUN_146620424(void)

void FUN_146620424(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (plVar3 = *(longlong **)(param_1 + 0x38), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_146620468;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x30);
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
LAB_146620468:
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_14480f766(lVar6 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1466204ca FUN_1466204ca body=113 status=ok
// SIG undefined FUN_1466204ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1466204ca(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"oak_player_progression_status",1);
  FUN_14147d486(&DAT_14cbc3450,local_18,3);
  _DAT_14cbc3450 = &PTR_FUN_14b9611a8;
  DAT_14cbc34ad = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662053c FUN_14662053c body=38 status=ok
// SIG undefined FUN_14662053c(void)

undefined8 FUN_14662053c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Oak Progression",1);
  return param_2;
}



// FUNCTION 146620562 FUN_146620562 body=94 status=ok
// SIG undefined FUN_146620562(void)

void FUN_146620562(void)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong *local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_18;
  local_18 = DAT_14cadb9f0;
  local_10 = DAT_14c9a40a0;
  local_20 = &local_8;
  FUN_14585aa24();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466205c2 FUN_1466205c2 body=43 status=ok
// SIG undefined FUN_1466205c2(void)

void FUN_1466205c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(&DAT_14cbd0b78);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1466205ee FUN_1466205ee body=113 status=ok
// SIG undefined FUN_1466205ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1466205ee(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"vault_cards",1);
  FUN_14147d486(&DAT_14cbc3930,local_18,3);
  _DAT_14cbc3930 = &PTR_FUN_14b9611e0;
  DAT_14cbc398d = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146620660 FUN_146620660 body=95 status=ok
// SIG undefined FUN_146620660(void)

void FUN_146620660(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 != 0) {
    lVar1 = *(longlong *)(*param_2 + 0x130);
    lVar2 = FUN_14016d2a8();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
      FUN_140320438(param_1 + 0x18,param_2);
      *(undefined1 *)(param_1 + 0x49) = 0;
      *(undefined1 *)(param_1 + 0x93) = 0;
    }
  }
  return;
}



// FUNCTION 1466206c0 FUN_1466206c0 body=76 status=ok
// SIG undefined FUN_1466206c0(void)

undefined8 FUN_1466206c0(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145acd410(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146620701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14662070c FUN_14662070c body=308 status=ok
// SIG undefined FUN_14662070c(void)

void FUN_14662070c(longlong param_1,undefined8 param_2,longlong *param_3)

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
  if ((param_3 == (longlong *)0x0) || (DAT_14cb71bf8 != '\x01')) goto LAB_1466207c5;
  uVar5 = (**(code **)(*param_3 + 0x180))(param_3);
  FUN_144a84a0c(&local_30,uVar5);
  if (local_28 == (longlong *)0x0) {
LAB_1466207e4:
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
    if (plVar6 == (longlong *)0x0) goto LAB_1466207e4;
    local_30 = 0;
  }
  *(undefined8 *)(param_1 + 0x6a0) = uVar5;
  plVar2 = *(longlong **)(param_1 + 0x6a8);
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
        goto joined_r0x000146620810;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x6a8) = plVar6;
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
joined_r0x000146620810:
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
LAB_1466207c5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662084f FUN_14662084f body=172 status=ok
// SIG undefined FUN_14662084f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14662084f(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"OakRotationChannelTags");
  FUN_1446f470e(&local_40,L"RotationChannel.RobotArms",1);
  FUN_1413e432a(lVar1,&local_38,local_40,local_30);
  _DAT_14cbc3cb0 = local_38;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466208fc FUN_1466208fc body=350 status=ok
// SIG undefined FUN_1466208fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1466208fc(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"OakTrickTags");
  FUN_1446f470e(&local_40,L"Trick.Generic.Fidget",1);
  FUN_1413e432a(lVar1,&local_38,local_40,local_30);
  _DAT_14cbc3cb8 = local_38;
  FUN_1446f470e(&local_48,L"Trick.Taunt.Aggro",1);
  FUN_1413e432a(lVar1,&local_38,local_48,local_30);
  _DAT_14cbc3cc0 = local_38;
  FUN_1446f470e(&local_50,L"Trick.Taunt.Deaggro",1);
  FUN_1413e432a(lVar1,&local_38,local_50,local_30);
  _DAT_14cbc3cc8 = local_38;
  FUN_1446f470e(&local_58,L"Trick.Taunt.FFYL",1);
  FUN_1413e432a(lVar1,&local_38,local_58,local_30);
  _DAT_14cbc3cd0 = local_38;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146620a5c FUN_146620a5c body=128 status=ok
// SIG undefined FUN_146620a5c(void)

longlong * FUN_146620a5c(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b961a20;
  return param_2;
}



// FUNCTION 146620adc FUN_146620adc body=254 status=ok
// SIG undefined FUN_146620adc(void)

void FUN_146620adc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar3 = *(longlong **)(param_2 + 0x60);
  if (plVar3 == (longlong *)0x0) {
    lVar7 = *(longlong *)(param_2 + 0x58);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar7 = *(longlong *)(param_2 + 0x58);
    plVar8 = *(longlong **)(param_2 + 0x60);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar5 = false;
      goto LAB_146620b06;
    }
  }
  bVar5 = true;
  plVar8 = (longlong *)0x0;
LAB_146620b06:
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x58);
    plVar4 = *(longlong **)(param_2 + 0x60);
    if (plVar4 == (longlong *)0x0) {
      uVar6 = FUN_14479d2ce(lVar7 + 0x30);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar6 = FUN_14479d2ce(lVar7 + 0x30);
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if (!bVar5) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  lVar7 = FUN_145e7b266(uVar6);
  if (lVar7 != 0) {
    FUN_1413491c8(lVar7);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146620bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146620bfc FUN_146620bfc body=85 status=ok
// SIG undefined FUN_146620bfc(void)

void FUN_146620bfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9612a0;
  return;
}



// FUNCTION 146620c52 FUN_146620c52 body=29 status=ok
// SIG undefined FUN_146620c52(void)

undefined8 FUN_146620c52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146620c70 FUN_146620c70 body=59 status=ok
// SIG undefined FUN_146620c70(void)

void FUN_146620c70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b961430;
  plVar2 = *(longlong **)(param_1 + 0x90);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 146620cac FUN_146620cac body=29 status=ok
// SIG undefined FUN_146620cac(void)

undefined8 FUN_146620cac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146620cca FUN_146620cca body=96 status=ok
// SIG undefined FUN_146620cca(void)

void FUN_146620cca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146620d2a FUN_146620d2a body=96 status=ok
// SIG undefined FUN_146620d2a(void)

void FUN_146620d2a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}


