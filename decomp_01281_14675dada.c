// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14675dada FUN_14675dada body=40 status=ok
// SIG undefined FUN_14675dada(void)

undefined8 FUN_14675dada(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675db02 FUN_14675db02 body=29 status=ok
// SIG undefined FUN_14675db02(void)

undefined8 FUN_14675db02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675db20 FUN_14675db20 body=29 status=ok
// SIG undefined FUN_14675db20(void)

undefined8 FUN_14675db20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675db3e FUN_14675db3e body=29 status=ok
// SIG undefined FUN_14675db3e(void)

undefined8 FUN_14675db3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675db5c FUN_14675db5c body=29 status=ok
// SIG undefined FUN_14675db5c(void)

undefined8 FUN_14675db5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675db7a FUN_14675db7a body=93 status=ok
// SIG undefined FUN_14675db7a(void)

void FUN_14675db7a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be80470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675dbd8 FUN_14675dbd8 body=29 status=ok
// SIG undefined FUN_14675dbd8(void)

undefined8 FUN_14675dbd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675dc02 FUN_14675dc02 body=36 status=ok
// SIG undefined FUN_14675dc02(void)

void FUN_14675dc02(longlong param_1)

{
  FUN_141220b8a(param_1 + -0x10);
  FUN_1400bfa52(param_1 + -0x2c8,1);
  return;
}



// FUNCTION 14675dc26 FUN_14675dc26 body=142 status=ok
// SIG undefined FUN_14675dc26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14675dc26(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"bookmarks",1);
  FUN_14147d486(&DAT_14cc26d10,local_18,6);
  _DAT_14cc26d10 = &PTR_FUN_14be80788;
  FUN_145a0a460(&DAT_14cc26d10);
  FUN_140834d1a(&DAT_14cc26d10,L"Report emitted bookmarks.");
  _DAT_14cc26d70 = 0;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14675dcb6 FUN_14675dcb6 body=192 status=ok
// SIG undefined FUN_14675dcb6(void)

void FUN_14675dcb6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be807d0;
  puVar1[3] = &DAT_14cc26ec8;
  puVar1[4] = FUN_145c75b86;
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



// FUNCTION 14675dd78 FUN_14675dd78 body=93 status=ok
// SIG undefined FUN_14675dd78(void)

void FUN_14675dd78(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be807d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675ddd6 FUN_14675ddd6 body=93 status=ok
// SIG undefined FUN_14675ddd6(void)

void FUN_14675ddd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be808f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be80880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675de33 FUN_14675de33 body=47 status=ok
// SIG undefined FUN_14675de33(void)

longlong FUN_14675de33(void)

{
  if (DAT_14cc26ee8 == 0) {
    FUN_1409ce572(&DAT_14cc26ee8,&PTR_FUN_14be80ce0);
  }
  return DAT_14cc26ee8;
}



// FUNCTION 14675de62 FUN_14675de62 body=48 status=ok
// SIG undefined FUN_14675de62(void)

void FUN_14675de62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14be85820;
  return;
}



// FUNCTION 14675de92 FUN_14675de92 body=47 status=ok
// SIG undefined FUN_14675de92(void)

longlong FUN_14675de92(void)

{
  if (DAT_14cc26f28 == 0) {
    FUN_1409ce572(&DAT_14cc26f28,&PTR_FUN_14be80e70);
  }
  return DAT_14cc26f28;
}



// FUNCTION 14675dec1 FUN_14675dec1 body=47 status=ok
// SIG undefined FUN_14675dec1(void)

longlong FUN_14675dec1(void)

{
  if (DAT_14cc26f48 == 0) {
    FUN_14073dd9a(&DAT_14cc26f48,&PTR_LAB_14be82038);
  }
  return DAT_14cc26f48;
}



// FUNCTION 14675def0 FUN_14675def0 body=47 status=ok
// SIG undefined FUN_14675def0(void)

longlong FUN_14675def0(void)

{
  if (DAT_14cc26f60 == 0) {
    FUN_14073dd9a(&DAT_14cc26f60,&PTR_LAB_14be82578);
  }
  return DAT_14cc26f60;
}



// FUNCTION 14675df1f FUN_14675df1f body=35 status=ok
// SIG undefined FUN_14675df1f(void)

void FUN_14675df1f(void)

{
  FUN_1446f470e(&DAT_14cc26f80,L"XPBDAreaSpringStiffness",1);
  return;
}



// FUNCTION 14675df42 FUN_14675df42 body=35 status=ok
// SIG undefined FUN_14675df42(void)

void FUN_14675df42(void)

{
  FUN_1446f470e(&DAT_14cc26f88,L"XPBDTetherStiffness",1);
  return;
}



// FUNCTION 14675df65 FUN_14675df65 body=35 status=ok
// SIG undefined FUN_14675df65(void)

void FUN_14675df65(void)

{
  FUN_1446f470e(&DAT_14cc26f90,L"XPBDTetherScale",1);
  return;
}



// FUNCTION 14675df88 FUN_14675df88 body=35 status=ok
// SIG undefined FUN_14675df88(void)

void FUN_14675df88(void)

{
  FUN_1446f470e(&DAT_14cc26f98,L"AnimDriveStiffness",1);
  return;
}



// FUNCTION 14675dfab FUN_14675dfab body=35 status=ok
// SIG undefined FUN_14675dfab(void)

void FUN_14675dfab(void)

{
  FUN_1446f470e(&DAT_14cc26fa0,L"AnimDriveDamping",1);
  return;
}



// FUNCTION 14675dfce FUN_14675dfce body=35 status=ok
// SIG undefined FUN_14675dfce(void)

void FUN_14675dfce(void)

{
  FUN_1446f470e(&DAT_14cc26fa8,L"UseGravityOverride",1);
  return;
}



// FUNCTION 14675dff1 FUN_14675dff1 body=35 status=ok
// SIG undefined FUN_14675dff1(void)

void FUN_14675dff1(void)

{
  FUN_1446f470e(&DAT_14cc26fb0,L"GravityOverride",1);
  return;
}



// FUNCTION 14675e014 FUN_14675e014 body=35 status=ok
// SIG undefined FUN_14675e014(void)

void FUN_14675e014(void)

{
  FUN_1446f470e(&DAT_14cc26fb8,L"GravityScale",1);
  return;
}



// FUNCTION 14675e037 FUN_14675e037 body=35 status=ok
// SIG undefined FUN_14675e037(void)

void FUN_14675e037(void)

{
  FUN_1446f470e(&DAT_14cc26fc0,L"FictitiousAngularScale",1);
  return;
}



// FUNCTION 14675e05a FUN_14675e05a body=35 status=ok
// SIG undefined FUN_14675e05a(void)

void FUN_14675e05a(void)

{
  FUN_1446f470e(&DAT_14cc26fc8,L"UsePointBasedWindModel",1);
  return;
}



// FUNCTION 14675e07d FUN_14675e07d body=35 status=ok
// SIG undefined FUN_14675e07d(void)

void FUN_14675e07d(void)

{
  FUN_1446f470e(&DAT_14cc27358,L"VelocityX",1);
  return;
}



// FUNCTION 14675e0a0 FUN_14675e0a0 body=35 status=ok
// SIG undefined FUN_14675e0a0(void)

void FUN_14675e0a0(void)

{
  FUN_1446f470e(&DAT_14cc27360,L"VelocityY",1);
  return;
}



// FUNCTION 14675e0c3 FUN_14675e0c3 body=35 status=ok
// SIG undefined FUN_14675e0c3(void)

void FUN_14675e0c3(void)

{
  FUN_1446f470e(&DAT_14cc27368,L"VelocityZ",1);
  return;
}



// FUNCTION 14675e0e6 FUN_14675e0e6 body=35 status=ok
// SIG undefined FUN_14675e0e6(void)

void FUN_14675e0e6(void)

{
  FUN_1446f470e(&DAT_14cc27370,L"PositionX",1);
  return;
}



// FUNCTION 14675e109 FUN_14675e109 body=35 status=ok
// SIG undefined FUN_14675e109(void)

void FUN_14675e109(void)

{
  FUN_1446f470e(&DAT_14cc27378,L"PositionY",1);
  return;
}



// FUNCTION 14675e12c FUN_14675e12c body=35 status=ok
// SIG undefined FUN_14675e12c(void)

void FUN_14675e12c(void)

{
  FUN_1446f470e(&DAT_14cc27380,L"PositionZ",1);
  return;
}



// FUNCTION 14675e14f FUN_14675e14f body=35 status=ok
// SIG undefined FUN_14675e14f(void)

void FUN_14675e14f(void)

{
  FUN_1446f470e(&DAT_14cc27388,L"ReferenceTransform",1);
  return;
}



// FUNCTION 14675e172 FUN_14675e172 body=35 status=ok
// SIG undefined FUN_14675e172(void)

void FUN_14675e172(void)

{
  FUN_1446f470e(&DAT_14cc27038,L"MaxDistance",1);
  return;
}



// FUNCTION 14675e195 FUN_14675e195 body=35 status=ok
// SIG undefined FUN_14675e195(void)

void FUN_14675e195(void)

{
  FUN_1446f470e(&DAT_14cc27040,L"MassValue",1);
  return;
}



// FUNCTION 14675e1b8 FUN_14675e1b8 body=35 status=ok
// SIG undefined FUN_14675e1b8(void)

void FUN_14675e1b8(void)

{
  FUN_1446f470e(&DAT_14cc27048,L"MultiResCoarseLODIndex",1);
  return;
}



// FUNCTION 14675e1db FUN_14675e1db body=35 status=ok
// SIG undefined FUN_14675e1db(void)

void FUN_14675e1db(void)

{
  FUN_1446f470e(&DAT_14cc27050,L"IsCoarseMultiResLOD",1);
  return;
}



// FUNCTION 14675e1fe FUN_14675e1fe body=35 status=ok
// SIG undefined FUN_14675e1fe(void)

void FUN_14675e1fe(void)

{
  FUN_1446f470e(&DAT_14cc27058,L"KinematicVertices3D",1);
  return;
}



// FUNCTION 14675e221 FUN_14675e221 body=35 status=ok
// SIG undefined FUN_14675e221(void)

void FUN_14675e221(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14595f53e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be83360;
  return;
}



// FUNCTION 14675e249 FUN_14675e249 body=47 status=ok
// SIG undefined FUN_14675e249(void)

longlong FUN_14675e249(void)

{
  if (DAT_14cc271e8 == 0) {
    FUN_14073dd9a(&DAT_14cc271e8,&PTR_LAB_14be83318);
  }
  return DAT_14cc271e8;
}



// FUNCTION 14675e278 FUN_14675e278 body=47 status=ok
// SIG undefined FUN_14675e278(void)

longlong FUN_14675e278(void)

{
  if (DAT_14cc27210 == 0) {
    FUN_14000fc22(&DAT_14cc27210,&PTR_FUN_14be83718);
  }
  return DAT_14cc27210;
}



// FUNCTION 14675e2a7 FUN_14675e2a7 body=47 status=ok
// SIG undefined FUN_14675e2a7(void)

longlong FUN_14675e2a7(void)

{
  if (DAT_14cc27218 == 0) {
    FUN_14000fc22(&DAT_14cc27218,&PTR_FUN_14be83858);
  }
  return DAT_14cc27218;
}



// FUNCTION 14675e2d6 FUN_14675e2d6 body=47 status=ok
// SIG undefined FUN_14675e2d6(void)

longlong FUN_14675e2d6(void)

{
  if (DAT_14cc27220 == 0) {
    FUN_14000fc22(&DAT_14cc27220,&PTR_FUN_14be83940);
  }
  return DAT_14cc27220;
}



// FUNCTION 14675e305 FUN_14675e305 body=47 status=ok
// SIG undefined FUN_14675e305(void)

longlong FUN_14675e305(void)

{
  if (DAT_14cc27228 == 0) {
    FUN_14000fc22(&DAT_14cc27228,&PTR_FUN_14be839d8);
  }
  return DAT_14cc27228;
}



// FUNCTION 14675e334 FUN_14675e334 body=47 status=ok
// SIG undefined FUN_14675e334(void)

longlong FUN_14675e334(void)

{
  if (DAT_14cc27230 == 0) {
    FUN_14000fc22(&DAT_14cc27230,&PTR_FUN_14be83a70);
  }
  return DAT_14cc27230;
}



// FUNCTION 14675e363 FUN_14675e363 body=47 status=ok
// SIG undefined FUN_14675e363(void)

longlong FUN_14675e363(void)

{
  if (DAT_14cc27238 == 0) {
    FUN_14000fc22(&DAT_14cc27238,&PTR_FUN_14be83bd0);
  }
  return DAT_14cc27238;
}



// FUNCTION 14675e392 FUN_14675e392 body=47 status=ok
// SIG undefined FUN_14675e392(void)

longlong FUN_14675e392(void)

{
  if (DAT_14cc27240 == 0) {
    FUN_14000fc22(&DAT_14cc27240,&PTR_FUN_14be83ca0);
  }
  return DAT_14cc27240;
}



// FUNCTION 14675e3c1 FUN_14675e3c1 body=47 status=ok
// SIG undefined FUN_14675e3c1(void)

longlong FUN_14675e3c1(void)

{
  if (DAT_14cc27248 == 0) {
    FUN_14000fc22(&DAT_14cc27248,&PTR_FUN_14be83dd8);
  }
  return DAT_14cc27248;
}



// FUNCTION 14675e3f0 FUN_14675e3f0 body=47 status=ok
// SIG undefined FUN_14675e3f0(void)

longlong FUN_14675e3f0(void)

{
  if (DAT_14cc27250 == 0) {
    FUN_14000fc22(&DAT_14cc27250,&PTR_FUN_14be83ec8);
  }
  return DAT_14cc27250;
}



// FUNCTION 14675e41f FUN_14675e41f body=47 status=ok
// SIG undefined FUN_14675e41f(void)

longlong FUN_14675e41f(void)

{
  if (DAT_14cc27258 == 0) {
    FUN_14000fc22(&DAT_14cc27258,&PTR_FUN_14be83fb0);
  }
  return DAT_14cc27258;
}



// FUNCTION 14675e44e FUN_14675e44e body=47 status=ok
// SIG undefined FUN_14675e44e(void)

longlong FUN_14675e44e(void)

{
  if (DAT_14cc27260 == 0) {
    FUN_14000fc22(&DAT_14cc27260,&PTR_FUN_14be84108);
  }
  return DAT_14cc27260;
}



// FUNCTION 14675e47d FUN_14675e47d body=47 status=ok
// SIG undefined FUN_14675e47d(void)

longlong FUN_14675e47d(void)

{
  if (DAT_14cc27268 == 0) {
    FUN_14000fc22(&DAT_14cc27268,&PTR_FUN_14be84208);
  }
  return DAT_14cc27268;
}



// FUNCTION 14675e4ac FUN_14675e4ac body=47 status=ok
// SIG undefined FUN_14675e4ac(void)

longlong FUN_14675e4ac(void)

{
  if (DAT_14cc27270 == 0) {
    FUN_14000fc22(&DAT_14cc27270,&PTR_FUN_14be84320);
  }
  return DAT_14cc27270;
}



// FUNCTION 14675e4db FUN_14675e4db body=47 status=ok
// SIG undefined FUN_14675e4db(void)

longlong FUN_14675e4db(void)

{
  if (DAT_14cc27278 == 0) {
    FUN_14000fc22(&DAT_14cc27278,&PTR_FUN_14be843b8);
  }
  return DAT_14cc27278;
}



// FUNCTION 14675e50a FUN_14675e50a body=47 status=ok
// SIG undefined FUN_14675e50a(void)

longlong FUN_14675e50a(void)

{
  if (DAT_14cc27280 == 0) {
    FUN_14000fc22(&DAT_14cc27280,&PTR_FUN_14be844e0);
  }
  return DAT_14cc27280;
}



// FUNCTION 14675e539 FUN_14675e539 body=47 status=ok
// SIG undefined FUN_14675e539(void)

longlong FUN_14675e539(void)

{
  if (DAT_14cc27288 == 0) {
    FUN_14000fc22(&DAT_14cc27288,&PTR_FUN_14be846e8);
  }
  return DAT_14cc27288;
}



// FUNCTION 14675e568 FUN_14675e568 body=34 status=ok
// SIG undefined FUN_14675e568(void)

void FUN_14675e568(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e29a3a();
  FUN_14069c8d6(uVar1,&PTR_s_ResetAndTeleport_14be84730,0x10);
  return;
}



// FUNCTION 14675e595 FUN_14675e595 body=47 status=ok
// SIG undefined FUN_14675e595(void)

longlong FUN_14675e595(void)

{
  if (DAT_14cc272b0 == 0) {
    FUN_14073dd9a(&DAT_14cc272b0,&PTR_LAB_14be84cd8);
  }
  return DAT_14cc272b0;
}



// FUNCTION 14675e5c4 FUN_14675e5c4 body=40 status=ok
// SIG undefined FUN_14675e5c4(void)

undefined8 FUN_14675e5c4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675e5ec FUN_14675e5ec body=29 status=ok
// SIG undefined FUN_14675e5ec(void)

undefined8 FUN_14675e5ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675e60a FUN_14675e60a body=192 status=ok
// SIG undefined FUN_14675e60a(void)

void FUN_14675e60a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be876c0;
  puVar1[3] = &DAT_14cc27390;
  puVar1[4] = FUN_145a9dbc6;
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



// FUNCTION 14675e6cc FUN_14675e6cc body=93 status=ok
// SIG undefined FUN_14675e6cc(void)

void FUN_14675e6cc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be876c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675e72a FUN_14675e72a body=80 status=ok
// SIG undefined FUN_14675e72a(void)

undefined8 * FUN_14675e72a(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14be87730;
  param_1[1] = &PTR_FUN_14be87770;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14675e77a FUN_14675e77a body=100 status=ok
// SIG undefined FUN_14675e77a(void)

void FUN_14675e77a(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar2 + 0x28))(plVar2,DAT_14c99d400,(undefined8 *)(param_1 + 0x10));
  puVar3 = (undefined8 *)FUN_14494321d(8);
  *puVar3 = &PTR_FUN_14be87780;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
  }
  FUN_14156d9ea(puVar3);
  return;
}



// FUNCTION 14675e7de FUN_14675e7de body=49 status=ok
// SIG undefined FUN_14675e7de(void)

longlong FUN_14675e7de(void)

{
  if (DAT_14cc27408 == 0) {
    FUN_14073dd9a(&DAT_14cc27408,&PTR_LAB_14be87d30);
  }
  return DAT_14cc27408;
}



// FUNCTION 14675e80f FUN_14675e80f body=47 status=ok
// SIG undefined FUN_14675e80f(void)

longlong FUN_14675e80f(void)

{
  if (DAT_14cc273d0 == 0) {
    FUN_14000fc22(&DAT_14cc273d0,&PTR_FUN_14be87900);
  }
  return DAT_14cc273d0;
}



// FUNCTION 14675e83e FUN_14675e83e body=47 status=ok
// SIG undefined FUN_14675e83e(void)

longlong FUN_14675e83e(void)

{
  if (DAT_14cc273d8 == 0) {
    FUN_14000fc22(&DAT_14cc273d8,&PTR_FUN_14be87958);
  }
  return DAT_14cc273d8;
}



// FUNCTION 14675e86d FUN_14675e86d body=47 status=ok
// SIG undefined FUN_14675e86d(void)

longlong FUN_14675e86d(void)

{
  if (DAT_14cc273e0 == 0) {
    FUN_14000fc22(&DAT_14cc273e0,&PTR_FUN_14be879b8);
  }
  return DAT_14cc273e0;
}



// FUNCTION 14675e89c FUN_14675e89c body=47 status=ok
// SIG undefined FUN_14675e89c(void)

longlong FUN_14675e89c(void)

{
  if (DAT_14cc273e8 == 0) {
    FUN_14000fc22(&DAT_14cc273e8,&PTR_FUN_14be87a60);
  }
  return DAT_14cc273e8;
}



// FUNCTION 14675e8cb FUN_14675e8cb body=47 status=ok
// SIG undefined FUN_14675e8cb(void)

longlong FUN_14675e8cb(void)

{
  if (DAT_14cc273f0 == 0) {
    FUN_14000fc22(&DAT_14cc273f0,&PTR_FUN_14be87b00);
  }
  return DAT_14cc273f0;
}



// FUNCTION 14675e8fa FUN_14675e8fa body=47 status=ok
// SIG undefined FUN_14675e8fa(void)

longlong FUN_14675e8fa(void)

{
  if (DAT_14cc273f8 == 0) {
    FUN_14000fc22(&DAT_14cc273f8,&PTR_FUN_14be87bd0);
  }
  return DAT_14cc273f8;
}



// FUNCTION 14675e92a FUN_14675e92a body=34 status=ok
// SIG undefined FUN_14675e92a(void)

void FUN_14675e92a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a97d84();
  FUN_14069c8d6(uVar1,&PTR_s_CSVExporter_EnableExportedStats_14be87c10,6);
  return;
}



// FUNCTION 14675e94c FUN_14675e94c body=35 status=ok
// SIG undefined FUN_14675e94c(void)

void FUN_14675e94c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be87d70;
  return;
}



// FUNCTION 14675e96f FUN_14675e96f body=47 status=ok
// SIG undefined FUN_14675e96f(void)

longlong FUN_14675e96f(void)

{
  if (DAT_14cc27418 == 0) {
    FUN_14086a14e(&DAT_14cc27418,&PTR_FUN_14be88160);
  }
  return DAT_14cc27418;
}



// FUNCTION 14675e99e FUN_14675e99e body=48 status=ok
// SIG undefined FUN_14675e99e(void)

void FUN_14675e99e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14be88b10;
  return;
}



// FUNCTION 14675e9ce FUN_14675e9ce body=47 status=ok
// SIG undefined FUN_14675e9ce(void)

longlong FUN_14675e9ce(void)

{
  if (DAT_14cc27438 == 0) {
    FUN_14073dd9a(&DAT_14cc27438,&PTR_LAB_14be88588);
  }
  return DAT_14cc27438;
}



// FUNCTION 14675e9fe FUN_14675e9fe body=192 status=ok
// SIG undefined FUN_14675e9fe(void)

void FUN_14675e9fe(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be88d80;
  puVar1[3] = &DAT_14cc27448;
  puVar1[4] = FUN_145acaabc;
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



// FUNCTION 14675eac0 FUN_14675eac0 body=40 status=ok
// SIG undefined FUN_14675eac0(void)

undefined8 FUN_14675eac0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675eae8 FUN_14675eae8 body=34 status=ok
// SIG undefined FUN_14675eae8(void)

undefined8 FUN_14675eae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14675eb0a FUN_14675eb0a body=93 status=ok
// SIG undefined FUN_14675eb0a(void)

void FUN_14675eb0a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be88d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675eb68 FUN_14675eb68 body=192 status=ok
// SIG undefined FUN_14675eb68(void)

void FUN_14675eb68(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8a830;
  puVar1[3] = &DAT_14cc2745c;
  puVar1[4] = FUN_1459d1482;
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



// FUNCTION 14675ec2a FUN_14675ec2a body=136 status=ok
// SIG undefined FUN_14675ec2a(void)

code * FUN_14675ec2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14675ecb2;
}



// FUNCTION 14675ecb2 FUN_14675ecb2 body=144 status=ok
// SIG undefined FUN_14675ecb2(void)

code * FUN_14675ecb2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Color";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x600000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145c764ec;
}



// FUNCTION 14675ed42 FUN_14675ed42 body=136 status=ok
// SIG undefined FUN_14675ed42(void)

code * FUN_14675ed42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GrainScaleBiasJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c7676a;
}



// FUNCTION 14675edca FUN_14675edca body=136 status=ok
// SIG undefined FUN_14675edca(void)

code * FUN_14675edca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f827dc;
}



// FUNCTION 14675ee52 FUN_14675ee52 body=136 status=ok
// SIG undefined FUN_14675ee52(void)

code * FUN_14675ee52(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LensPrincipalPointOffsetScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149806420;
}



// FUNCTION 14675eeda FUN_14675eeda body=136 status=ok
// SIG undefined FUN_14675eeda(void)

code * FUN_14675eeda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dbf3ce;
}



// FUNCTION 14675ef62 FUN_14675ef62 body=136 status=ok
// SIG undefined FUN_14675ef62(void)

code * FUN_14675ef62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149806532;
}



// FUNCTION 14675efea FUN_14675efea body=144 status=ok
// SIG undefined FUN_14675efea(void)

code * FUN_14675efea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c7657e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrain";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFSRPassParameters_Grain";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc27e18;
  return FUN_149806646;
}



// FUNCTION 14675f07a FUN_14675f07a body=136 status=ok
// SIG undefined FUN_14675f07a(void)

code * FUN_14675f07a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee4748;
}



// FUNCTION 14675f102 FUN_14675f102 body=136 status=ok
// SIG undefined FUN_14675f102(void)

code * FUN_14675f102(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DitherAmount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14675f18a;
}



// FUNCTION 14675f18a FUN_14675f18a body=144 status=ok
// SIG undefined FUN_14675f18a(void)

code * FUN_14675f18a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1448a8484();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BlueNoise";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBlueNoise";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e6ad1e;
}



// FUNCTION 14675f21a FUN_14675f21a body=136 status=ok
// SIG undefined FUN_14675f21a(void)

code * FUN_14675f21a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145db5d28;
}



// FUNCTION 14675f2a2 FUN_14675f2a2 body=136 status=ok
// SIG undefined FUN_14675f2a2(void)

code * FUN_14675f2a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VPColor_ExtentInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14675f32a;
}



// FUNCTION 14675f32a FUN_14675f32a body=146 status=ok
// SIG undefined FUN_14675f32a(void)

code * FUN_14675f32a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c7657e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrain";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFSRPassParameters_Grain";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc27e18;
  return FUN_145db6026;
}



// FUNCTION 14675f3bc FUN_14675f3bc body=136 status=ok
// SIG undefined FUN_14675f3bc(void)

code * FUN_14675f3bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee4c30;
}



// FUNCTION 14675f444 FUN_14675f444 body=93 status=ok
// SIG undefined FUN_14675f444(void)

void FUN_14675f444(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8a830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675f4a2 FUN_14675f4a2 body=29 status=ok
// SIG undefined FUN_14675f4a2(void)

undefined8 FUN_14675f4a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14675f4c0 FUN_14675f4c0 body=192 status=ok
// SIG undefined FUN_14675f4c0(void)

void FUN_14675f4c0(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8aa30;
  puVar1[3] = &DAT_14cc28440;
  puVar1[4] = FUN_1459febe4;
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



// FUNCTION 14675f582 FUN_14675f582 body=93 status=ok
// SIG undefined FUN_14675f582(void)

void FUN_14675f582(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8aa30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675f5e0 FUN_14675f5e0 body=80 status=ok
// SIG undefined FUN_14675f5e0(void)

longlong FUN_14675f5e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
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
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14675f630 FUN_14675f630 body=34 status=ok
// SIG undefined FUN_14675f630(void)

undefined8 FUN_14675f630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14675f652 FUN_14675f652 body=192 status=ok
// SIG undefined FUN_14675f652(void)

void FUN_14675f652(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8abd0;
  puVar1[3] = &DAT_14cc28444;
  puVar1[4] = FUN_14980865c;
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



// FUNCTION 14675f714 FUN_14675f714 body=93 status=ok
// SIG undefined FUN_14675f714(void)

void FUN_14675f714(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8abd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675f772 FUN_14675f772 body=95 status=ok
// SIG undefined FUN_14675f772(void)

void FUN_14675f772(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145ae8b1a(&local_28);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_28,param_1 + 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14675f7d2 FUN_14675f7d2 body=47 status=ok
// SIG undefined FUN_14675f7d2(void)

longlong FUN_14675f7d2(void)

{
  if (DAT_14cc28450 == 0) {
    FUN_140f50038(&DAT_14cc28450,&PTR_s__Script_WinDualShock_14be8acaf_1_14be8ac90);
  }
  return DAT_14cc28450;
}



// FUNCTION 14675f801 FUN_14675f801 body=47 status=ok
// SIG undefined FUN_14675f801(void)

longlong FUN_14675f801(void)

{
  if (DAT_14cc28468 == 0) {
    FUN_14073dd9a(&DAT_14cc28468,&PTR_LAB_14be8ad98);
  }
  return DAT_14cc28468;
}



// FUNCTION 14675f830 FUN_14675f830 body=47 status=ok
// SIG undefined FUN_14675f830(void)

longlong FUN_14675f830(void)

{
  if (DAT_14cc28480 == 0) {
    FUN_14073dd9a(&DAT_14cc28480,&PTR_LAB_14be8b138);
  }
  return DAT_14cc28480;
}



// FUNCTION 14675f85f FUN_14675f85f body=47 status=ok
// SIG undefined FUN_14675f85f(void)

longlong FUN_14675f85f(void)

{
  if (DAT_14cc28498 == 0) {
    FUN_14073dd9a(&DAT_14cc28498,&PTR_LAB_14be8b558);
  }
  return DAT_14cc28498;
}



// FUNCTION 14675f88e FUN_14675f88e body=192 status=ok
// SIG undefined FUN_14675f88e(void)

void FUN_14675f88e(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8b8f0;
  puVar1[3] = &DAT_14cc28500;
  puVar1[4] = FUN_145a31ecc;
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



// FUNCTION 14675f950 FUN_14675f950 body=93 status=ok
// SIG undefined FUN_14675f950(void)

void FUN_14675f950(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8b8f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675f9ae FUN_14675f9ae body=95 status=ok
// SIG undefined FUN_14675f9ae(void)

void FUN_14675f9ae(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145ae8b1a(&local_28);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_28,param_1 + 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14675fa0e FUN_14675fa0e body=34 status=ok
// SIG undefined FUN_14675fa0e(void)

undefined8 FUN_14675fa0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14675fa30 FUN_14675fa30 body=192 status=ok
// SIG undefined FUN_14675fa30(void)

void FUN_14675fa30(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8c6e0;
  puVar1[3] = &DAT_14cc2854c;
  puVar1[4] = FUN_1459d153a;
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



// FUNCTION 14675faf2 FUN_14675faf2 body=93 status=ok
// SIG undefined FUN_14675faf2(void)

void FUN_14675faf2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8c6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14675fb50 FUN_14675fb50 body=34 status=ok
// SIG undefined FUN_14675fb50(void)

undefined8 FUN_14675fb50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14675fb72 FUN_14675fb72 body=34 status=ok
// SIG undefined FUN_14675fb72(void)

undefined8 FUN_14675fb72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14675fb94 FUN_14675fb94 body=49 status=ok
// SIG undefined FUN_14675fb94(void)

longlong FUN_14675fb94(void)

{
  if (DAT_14cc28598 == 0) {
    FUN_140f50038(&DAT_14cc28598,&PTR_s__Script_GbxWeatherOcclusion_14be8c7e0);
  }
  return DAT_14cc28598;
}



// FUNCTION 14675fbca FUN_14675fbca body=47 status=ok
// SIG undefined FUN_14675fbca(void)

longlong FUN_14675fbca(void)

{
  if (DAT_14cc285b0 == 0) {
    FUN_14073dd9a(&DAT_14cc285b0,&PTR_LAB_14be8cac8);
  }
  return DAT_14cc285b0;
}



// FUNCTION 14675fbff FUN_14675fbff body=47 status=ok
// SIG undefined FUN_14675fbff(void)

longlong FUN_14675fbff(void)

{
  if (DAT_14cc285c8 == 0) {
    FUN_14073dd9a(&DAT_14cc285c8,&PTR_LAB_14be8d828);
  }
  return DAT_14cc285c8;
}



// FUNCTION 14675fc2e FUN_14675fc2e body=49 status=ok
// SIG undefined FUN_14675fc2e(void)

longlong FUN_14675fc2e(void)

{
  if (DAT_14cc286a0 == 0) {
    FUN_14073dd9a(&DAT_14cc286a0,&PTR_LAB_14be8e370);
  }
  return DAT_14cc286a0;
}



// FUNCTION 14675fc5f FUN_14675fc5f body=47 status=ok
// SIG undefined FUN_14675fc5f(void)

longlong FUN_14675fc5f(void)

{
  if (DAT_14cc28678 == 0) {
    FUN_14000fc22(&DAT_14cc28678,&PTR_FUN_14be8dc90);
  }
  return DAT_14cc28678;
}



// FUNCTION 14675fc8e FUN_14675fc8e body=47 status=ok
// SIG undefined FUN_14675fc8e(void)

longlong FUN_14675fc8e(void)

{
  if (DAT_14cc28680 == 0) {
    FUN_14000fc22(&DAT_14cc28680,&PTR_FUN_14be8de38);
  }
  return DAT_14cc28680;
}



// FUNCTION 14675fcbd FUN_14675fcbd body=47 status=ok
// SIG undefined FUN_14675fcbd(void)

longlong FUN_14675fcbd(void)

{
  if (DAT_14cc28688 == 0) {
    FUN_14000fc22(&DAT_14cc28688,&PTR_FUN_14be8dee0);
  }
  return DAT_14cc28688;
}



// FUNCTION 14675fcec FUN_14675fcec body=47 status=ok
// SIG undefined FUN_14675fcec(void)

longlong FUN_14675fcec(void)

{
  if (DAT_14cc28690 == 0) {
    FUN_14000fc22(&DAT_14cc28690,&PTR_FUN_14be8df88);
  }
  return DAT_14cc28690;
}



// FUNCTION 14675fd1c FUN_14675fd1c body=34 status=ok
// SIG undefined FUN_14675fd1c(void)

void FUN_14675fd1c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145ef425e();
  FUN_14069c8d6(uVar1,&PTR_s_IsOccluded_14be8dfd0,4);
  return;
}



// FUNCTION 14675fd43 FUN_14675fd43 body=47 status=ok
// SIG undefined FUN_14675fd43(void)

longlong FUN_14675fd43(void)

{
  if (DAT_14cc286b8 == 0) {
    FUN_14073dd9a(&DAT_14cc286b8,&PTR_LAB_14be8e708);
  }
  return DAT_14cc286b8;
}



// FUNCTION 14675fd72 FUN_14675fd72 body=1017 status=ok
// SIG undefined FUN_14675fd72(void)

void FUN_14675fd72(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 *local_f0;
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined1 local_99;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_141348dd0();
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && (lVar5 = FUN_145ef41f4(lVar5), lVar5 != 0)) {
    plVar6 = (longlong *)FUN_1415d76b6();
    lVar5 = plVar6[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar5 = plVar6[0x22];
      if (lVar5 == 0) goto LAB_14675fdd4;
    }
    if (*(char *)(lVar5 + 0x38) != '\x01') goto LAB_14675fdd4;
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_e0 = L"/Engine/BasicShapes/Plane.Plane";
    local_d8 = CONCAT44(local_d8._4_4_,0x1f);
    FUN_14475bf92(&local_88);
    pvVar3 = local_78;
    local_60 = 0;
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = (undefined4)uStack_80;
    uStack_4c = uStack_80._4_4_;
    local_48 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_70;
    local_40 = (int)uStack_70;
    if (lVar5 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,uStack_70 & 0xffffffff,0);
      memcpy(local_48,pvVar3,lVar5 * 2);
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8(local_78);
    }
    FUN_14050fd64();
    lVar5 = FUN_14050fd64();
    pvVar3 = local_48;
    local_d8 = local_60;
    local_d0 = local_58;
    uStack_cc = uStack_54;
    uStack_c8 = uStack_50;
    uStack_c4 = uStack_4c;
    local_c0 = (void *)0x0;
    lVar8 = (longlong)local_40;
    local_b8 = local_40;
    local_e0 = (wchar_t *)param_1;
    if (lVar8 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1446dd670(&local_c0,local_40,0);
      memcpy(local_c0,pvVar3,lVar8 * 2);
    }
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,5,0x10);
    puVar4 = local_b0;
    local_a8 = 5;
    *local_b0 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_b0[2] = lVar7;
    *local_b0 = &PTR_FUN_14be8f370;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    pvVar3 = local_c0;
    puVar4[4] = local_e0;
    puVar4[5] = local_d8;
    *(undefined4 *)(puVar4 + 6) = local_d0;
    *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_cc;
    *(undefined4 *)(puVar4 + 7) = uStack_c8;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_c4;
    puVar4[8] = 0;
    lVar8 = (longlong)local_b8;
    *(int *)(puVar4 + 9) = local_b8;
    if (lVar8 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(puVar4 + 8,local_b8,0);
      memcpy((void *)puVar4[8],pvVar3,lVar8 * 2);
    }
    local_f0 = &local_99;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    FUN_140a1e0be(lVar5 + 0x1e8,&local_98,&local_58,&local_b0);
    plVar6 = local_90;
    if ((undefined8 *)(param_1 + 0x3c0) != &local_98) {
      *(undefined8 *)(param_1 + 0x3c0) = local_98;
      local_98 = 0;
      plVar2 = *(longlong **)(param_1 + 0x3c8);
      if (local_90 != plVar2) {
        local_90 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x3c8) = plVar6;
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
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
    }
    plVar6 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(&local_b0);
    if (local_c0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14675fdd4:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14676016c FUN_14676016c body=231 status=ok
// SIG undefined FUN_14676016c(void)

void FUN_14676016c(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14be8f3e0;
  local_28[3] = &DAT_14cc28700;
  local_28[4] = FUN_1459d1568;
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



// FUNCTION 146760254 FUN_146760254 body=41 status=ok
// SIG undefined FUN_146760254(void)

undefined1 FUN_146760254(void)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_14110c710();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (DAT_14c872bf0 == '\x01') {
      uVar2 = DAT_14c872bf1;
    }
  }
  return uVar2;
}



// FUNCTION 14676027e FUN_14676027e body=316 status=ok
// SIG undefined FUN_14676027e(void)

undefined8
FUN_14676027e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  longlong *local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = 0;
  local_48 = 0;
  local_68 = 0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  FUN_14009d848(&local_68,param_4);
  FUN_144a450dc(&local_50,&local_68);
  FUN_1449db362(&local_68);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_70 = iVar1;
  if (iVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_140a1e386(&local_78,iVar1,0);
    FUN_140a1e307(local_78,uVar2,iVar1);
  }
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = &local_68;
  FUN_140421d62(param_1,param_2,&local_78,&local_50);
  FUN_140861e20(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467603bc FUN_1467603bc body=40 status=ok
// SIG undefined FUN_1467603bc(void)

undefined8 FUN_1467603bc(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467603e4 FUN_1467603e4 body=93 status=ok
// SIG undefined FUN_1467603e4(void)

void FUN_1467603e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8f3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146760442 FUN_146760442 body=29 status=ok
// SIG undefined FUN_146760442(void)

undefined8 FUN_146760442(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146760460 FUN_146760460 body=29 status=ok
// SIG undefined FUN_146760460(void)

bool FUN_146760460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14676047e FUN_14676047e body=24 status=ok
// SIG undefined FUN_14676047e(void)

bool FUN_14676047e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146760496 FUN_146760496 body=24 status=ok
// SIG undefined FUN_146760496(void)

bool FUN_146760496(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1467604ae FUN_1467604ae body=93 status=ok
// SIG undefined FUN_1467604ae(void)

void FUN_1467604ae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8f8b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676050c FUN_14676050c body=192 status=ok
// SIG undefined FUN_14676050c(void)

void FUN_14676050c(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8f940;
  puVar1[3] = &DAT_14cc28768;
  puVar1[4] = FUN_1459a6e10;
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



// FUNCTION 1467605ce FUN_1467605ce body=93 status=ok
// SIG undefined FUN_1467605ce(void)

void FUN_1467605ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8f940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676062c FUN_14676062c body=34 status=ok
// SIG undefined FUN_14676062c(void)

undefined8 FUN_14676062c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14676064e FUN_14676064e body=192 status=ok
// SIG undefined FUN_14676064e(void)

void FUN_14676064e(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8fa20;
  puVar1[3] = &DAT_14cc2876c;
  puVar1[4] = FUN_1459a6e3a;
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



// FUNCTION 146760710 FUN_146760710 body=93 status=ok
// SIG undefined FUN_146760710(void)

void FUN_146760710(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8fa20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676076e FUN_14676076e body=34 status=ok
// SIG undefined FUN_14676076e(void)

undefined8 FUN_14676076e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146760790 FUN_146760790 body=161 status=ok
// SIG undefined FUN_146760790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146760790(void)

{
  longlong *plVar1;
  
  _DAT_14cc28770 = &PTR_LAB_14be8faf0;
  DAT_14cc28778 = 0;
  plVar1 = (longlong *)FUN_1448c2e86();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8451bc) {
    FUN_144b3d300(&DAT_14c8451bc);
    if (DAT_14c8451bc == -1) {
      FUN_1446f470e(&DAT_14c8451b4,L"EngineCryptoFeature",1);
      _Init_thread_footer(&DAT_14c8451bc);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014676082e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,DAT_14c8451b4,&DAT_14cc28778);
  return;
}



// FUNCTION 146760832 FUN_146760832 body=192 status=ok
// SIG undefined FUN_146760832(void)

void FUN_146760832(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be8fb50;
  puVar1[3] = &DAT_14cc28780;
  puVar1[4] = FUN_1459a6e64;
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



// FUNCTION 1467608f4 FUN_1467608f4 body=173 status=ok
// SIG undefined FUN_1467608f4(void)

void FUN_1467608f4(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cc28778;
  if (DAT_14cc28778 != 0) {
    DAT_14cc28778 = 0;
    thunk_FUN_1400020a8(lVar1,1);
  }
  plVar2 = (longlong *)FUN_1448c2e86();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8451bc) {
    FUN_144b3d300(&DAT_14c8451bc);
    if (DAT_14c8451bc == -1) {
      FUN_1446f470e(&DAT_14c8451b4,L"EngineCryptoFeature",1);
      _Init_thread_footer(&DAT_14c8451bc);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014676094b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,DAT_14c8451b4,&DAT_14cc28778);
  return;
}



// FUNCTION 1467609a2 FUN_1467609a2 body=93 status=ok
// SIG undefined FUN_1467609a2(void)

void FUN_1467609a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be8fb50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146760a00 FUN_146760a00 body=34 status=ok
// SIG undefined FUN_146760a00(void)

undefined8 FUN_146760a00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146760a22 FUN_146760a22 body=98 status=ok
// SIG undefined FUN_146760a22(void)

void FUN_146760a22(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c444d0(puVar1);
  *puVar1 = &PTR_FUN_14be8fca0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  return;
}



// FUNCTION 146760a84 FUN_146760a84 body=47 status=ok
// SIG undefined FUN_146760a84(void)

longlong FUN_146760a84(void)

{
  if (DAT_14cc287a8 == 0) {
    FUN_140f50038(&DAT_14cc287a8,&PTR_s__Script_GbxSignificanceManager_14be8ffe8);
  }
  return DAT_14cc287a8;
}



// FUNCTION 146760ab3 FUN_146760ab3 body=47 status=ok
// SIG undefined FUN_146760ab3(void)

longlong FUN_146760ab3(void)

{
  if (DAT_14cc28790 == 0) {
    FUN_14073dd9a(&DAT_14cc28790,&PTR_LAB_14be8fc58);
  }
  return DAT_14cc28790;
}



// FUNCTION 146760ae2 FUN_146760ae2 body=192 status=ok
// SIG undefined FUN_146760ae2(void)

void FUN_146760ae2(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be902f0;
  puVar1[3] = &DAT_14cc287d8;
  puVar1[4] = FUN_1459d1596;
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



// FUNCTION 146760ba4 FUN_146760ba4 body=29 status=ok
// SIG undefined FUN_146760ba4(void)

undefined8 FUN_146760ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146760bc2 FUN_146760bc2 body=93 status=ok
// SIG undefined FUN_146760bc2(void)

void FUN_146760bc2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be902f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146760c20 FUN_146760c20 body=29 status=ok
// SIG undefined FUN_146760c20(void)

undefined8 FUN_146760c20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146760c48 FUN_146760c48 body=93 status=ok
// SIG undefined FUN_146760c48(void)

void FUN_146760c48(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be903a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146760ca5 FUN_146760ca5 body=47 status=ok
// SIG undefined FUN_146760ca5(void)

longlong FUN_146760ca5(void)

{
  if (DAT_14cc28840 == 0) {
    FUN_14086a14e(&DAT_14cc28840,&PTR_FUN_14be90648);
  }
  return DAT_14cc28840;
}



// FUNCTION 146760cd4 FUN_146760cd4 body=48 status=ok
// SIG undefined FUN_146760cd4(void)

void FUN_146760cd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14be92560;
  return;
}



// FUNCTION 146760d04 FUN_146760d04 body=47 status=ok
// SIG undefined FUN_146760d04(void)

longlong FUN_146760d04(void)

{
  if (DAT_14cc28860 == 0) {
    FUN_14073dd9a(&DAT_14cc28860,&PTR_LAB_14be90728);
  }
  return DAT_14cc28860;
}



// FUNCTION 146760d33 FUN_146760d33 body=35 status=ok
// SIG undefined FUN_146760d33(void)

void FUN_146760d33(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458beede(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be90e60;
  return;
}



// FUNCTION 146760d56 FUN_146760d56 body=47 status=ok
// SIG undefined FUN_146760d56(void)

longlong FUN_146760d56(void)

{
  if (DAT_14cc28878 == 0) {
    FUN_14073dd9a(&DAT_14cc28878,&PTR_LAB_14be90e18);
  }
  return DAT_14cc28878;
}



// FUNCTION 146760d85 FUN_146760d85 body=47 status=ok
// SIG undefined FUN_146760d85(void)

longlong FUN_146760d85(void)

{
  if (DAT_14cc288a0 == 0) {
    FUN_1409ce572(&DAT_14cc288a0,&PTR_FUN_14be91270);
  }
  return DAT_14cc288a0;
}



// FUNCTION 146760db4 FUN_146760db4 body=55 status=ok
// SIG undefined FUN_146760db4(void)

void FUN_146760db4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc288c0 == 0) {
    uVar1 = FUN_1458b7527();
    DAT_14cc288c0 = FUN_140002ddd(FUN_146760deb,uVar1,L"GbxPackedLevelStreamingBuilderSettings");
  }
  return;
}



// FUNCTION 146760deb FUN_146760deb body=49 status=ok
// SIG undefined FUN_146760deb(void)

longlong FUN_146760deb(void)

{
  if (DAT_14cc288b8 == 0) {
    FUN_14086a14e(&DAT_14cc288b8,&PTR_FUN_14be916f0);
  }
  return DAT_14cc288b8;
}



// FUNCTION 146760e1c FUN_146760e1c body=48 status=ok
// SIG undefined FUN_146760e1c(void)

void FUN_146760e1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14be927a0;
  return;
}



// FUNCTION 146760e4c FUN_146760e4c body=55 status=ok
// SIG undefined FUN_146760e4c(void)

void FUN_146760e4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc288d8 == 0) {
    uVar1 = FUN_1458b7527();
    DAT_14cc288d8 = FUN_140002ddd(FUN_146760e83,uVar1,L"GbxPackedLevelStreamingBuilderMatch");
  }
  return;
}



// FUNCTION 146760e83 FUN_146760e83 body=47 status=ok
// SIG undefined FUN_146760e83(void)

longlong FUN_146760e83(void)

{
  if (DAT_14cc288d0 == 0) {
    FUN_14086a14e(&DAT_14cc288d0,&PTR_FUN_14be919b0);
  }
  return DAT_14cc288d0;
}



// FUNCTION 146760eb2 FUN_146760eb2 body=48 status=ok
// SIG undefined FUN_146760eb2(void)

void FUN_146760eb2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14be92900;
  return;
}



// FUNCTION 146760ee2 FUN_146760ee2 body=55 status=ok
// SIG undefined FUN_146760ee2(void)

void FUN_146760ee2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc288f0 == 0) {
    uVar1 = FUN_1458b7527();
    DAT_14cc288f0 =
         FUN_140002ddd(FUN_146760f19,uVar1,L"GbxPackedLevelStreamingBuilderCustomSettings");
  }
  return;
}



// FUNCTION 146760f19 FUN_146760f19 body=47 status=ok
// SIG undefined FUN_146760f19(void)

longlong FUN_146760f19(void)

{
  if (DAT_14cc288e8 == 0) {
    FUN_14086a14e(&DAT_14cc288e8,&PTR_FUN_14be91b00);
  }
  return DAT_14cc288e8;
}



// FUNCTION 146760f48 FUN_146760f48 body=48 status=ok
// SIG undefined FUN_146760f48(void)

void FUN_146760f48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14be92a60;
  return;
}



// FUNCTION 146760f78 FUN_146760f78 body=55 status=ok
// SIG undefined FUN_146760f78(void)

void FUN_146760f78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc28908 == 0) {
    uVar1 = FUN_1458b7527();
    DAT_14cc28908 =
         FUN_140002ddd(FUN_146760faf,uVar1,L"GbxPackedLevelStreamingBuilderCustomSettingsGroup");
  }
  return;
}



// FUNCTION 146760faf FUN_146760faf body=49 status=ok
// SIG undefined FUN_146760faf(void)

longlong FUN_146760faf(void)

{
  if (DAT_14cc28900 == 0) {
    FUN_14086a14e(&DAT_14cc28900,&PTR_FUN_14be91cf8);
  }
  return DAT_14cc28900;
}



// FUNCTION 146760fe0 FUN_146760fe0 body=48 status=ok
// SIG undefined FUN_146760fe0(void)

void FUN_146760fe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14be92bc0;
  return;
}



// FUNCTION 146761010 FUN_146761010 body=97 status=ok
// SIG undefined FUN_146761010(void)

void FUN_146761010(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be91f90;
  *(undefined4 *)(puVar1 + 7) = 1;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x45) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x4d) = 0x101;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 2;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 146761071 FUN_146761071 body=47 status=ok
// SIG undefined FUN_146761071(void)

longlong FUN_146761071(void)

{
  if (DAT_14cc28920 == 0) {
    FUN_14073dd9a(&DAT_14cc28920,&PTR_LAB_14be91f48);
  }
  return DAT_14cc28920;
}



// FUNCTION 1467610a0 FUN_1467610a0 body=192 status=ok
// SIG undefined FUN_1467610a0(void)

void FUN_1467610a0(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be92d30;
  puVar1[3] = &DAT_14cc28959;
  puVar1[4] = FUN_1459d15f2;
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



// FUNCTION 146761162 FUN_146761162 body=29 status=ok
// SIG undefined FUN_146761162(void)

undefined8 FUN_146761162(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146761180 FUN_146761180 body=29 status=ok
// SIG undefined FUN_146761180(void)

undefined8 FUN_146761180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676119e FUN_14676119e body=29 status=ok
// SIG undefined FUN_14676119e(void)

undefined8 FUN_14676119e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467611bc FUN_1467611bc body=29 status=ok
// SIG undefined FUN_1467611bc(void)

undefined8 FUN_1467611bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467611da FUN_1467611da body=29 status=ok
// SIG undefined FUN_1467611da(void)

undefined8 FUN_1467611da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467611f8 FUN_1467611f8 body=93 status=ok
// SIG undefined FUN_1467611f8(void)

void FUN_1467611f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be92d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146761256 FUN_146761256 body=29 status=ok
// SIG undefined FUN_146761256(void)

undefined8 FUN_146761256(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146761274 FUN_146761274 body=192 status=ok
// SIG undefined FUN_146761274(void)

void FUN_146761274(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be92ea0;
  puVar1[3] = &DAT_14cc28970;
  puVar1[4] = FUN_1459a6e8e;
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



// FUNCTION 146761336 FUN_146761336 body=93 status=ok
// SIG undefined FUN_146761336(void)

void FUN_146761336(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be92ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146761394 FUN_146761394 body=34 status=ok
// SIG undefined FUN_146761394(void)

undefined8 FUN_146761394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1467613b6 FUN_1467613b6 body=192 status=ok
// SIG undefined FUN_1467613b6(void)

void FUN_1467613b6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be964a0;
  puVar1[3] = &DAT_14cc28974;
  puVar1[4] = FUN_1459a6eb8;
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



// FUNCTION 146761478 FUN_146761478 body=93 status=ok
// SIG undefined FUN_146761478(void)

void FUN_146761478(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be964a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467614d6 FUN_1467614d6 body=34 status=ok
// SIG undefined FUN_1467614d6(void)

undefined8 FUN_1467614d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1467614f8 FUN_1467614f8 body=192 status=ok
// SIG undefined FUN_1467614f8(void)

void FUN_1467614f8(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be98400;
  puVar1[3] = &DAT_14cc28978;
  puVar1[4] = FUN_1459d1620;
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



// FUNCTION 1467615ba FUN_1467615ba body=93 status=ok
// SIG undefined FUN_1467615ba(void)

void FUN_1467615ba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be98400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146761618 FUN_146761618 body=34 status=ok
// SIG undefined FUN_146761618(void)

undefined8 FUN_146761618(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14676163a FUN_14676163a body=192 status=ok
// SIG undefined FUN_14676163a(void)

void FUN_14676163a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14be9a610;
  puVar1[3] = &DAT_14cc28988;
  puVar1[4] = FUN_1459a6ee2;
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



// FUNCTION 1467616fc FUN_1467616fc body=93 status=ok
// SIG undefined FUN_1467616fc(void)

void FUN_1467616fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be9a610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676175a FUN_14676175a body=34 status=ok
// SIG undefined FUN_14676175a(void)

undefined8 FUN_14676175a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14676177c FUN_14676177c body=49 status=ok
// SIG undefined FUN_14676177c(void)

longlong FUN_14676177c(void)

{
  if (DAT_14cc28a40 == 0) {
    FUN_140f50038(&DAT_14cc28a40,&PTR_s__Script_FFXFSR3Settings_14be9c106_2_14be9c0e8);
  }
  return DAT_14cc28a40;
}



// FUNCTION 1467617ad FUN_1467617ad body=47 status=ok
// SIG undefined FUN_1467617ad(void)

longlong FUN_1467617ad(void)

{
  if (DAT_14cc28990 == 0) {
    FUN_1409ce572(&DAT_14cc28990,&PTR_FUN_14be9a7b0);
  }
  return DAT_14cc28990;
}



// FUNCTION 1467617dc FUN_1467617dc body=47 status=ok
// SIG undefined FUN_1467617dc(void)

longlong FUN_1467617dc(void)

{
  if (DAT_14cc289a8 == 0) {
    FUN_1409ce572(&DAT_14cc289a8,&PTR_FUN_14be9a820);
  }
  return DAT_14cc289a8;
}



// FUNCTION 14676180b FUN_14676180b body=47 status=ok
// SIG undefined FUN_14676180b(void)

longlong FUN_14676180b(void)

{
  if (DAT_14cc289c0 == 0) {
    FUN_1409ce572(&DAT_14cc289c0,&PTR_FUN_14be9a8a0);
  }
  return DAT_14cc289c0;
}



// FUNCTION 14676183a FUN_14676183a body=47 status=ok
// SIG undefined FUN_14676183a(void)

longlong FUN_14676183a(void)

{
  if (DAT_14cc289d8 == 0) {
    FUN_1409ce572(&DAT_14cc289d8,&PTR_FUN_14be9a920);
  }
  return DAT_14cc289d8;
}



// FUNCTION 146761869 FUN_146761869 body=47 status=ok
// SIG undefined FUN_146761869(void)

longlong FUN_146761869(void)

{
  if (DAT_14cc289f0 == 0) {
    FUN_1409ce572(&DAT_14cc289f0,&PTR_FUN_14be9a990);
  }
  return DAT_14cc289f0;
}



// FUNCTION 146761898 FUN_146761898 body=47 status=ok
// SIG undefined FUN_146761898(void)

longlong FUN_146761898(void)

{
  if (DAT_14cc28a08 == 0) {
    FUN_1409ce572(&DAT_14cc28a08,&PTR_FUN_14be9aa00);
  }
  return DAT_14cc28a08;
}



// FUNCTION 1467618c7 FUN_1467618c7 body=35 status=ok
// SIG undefined FUN_1467618c7(void)

void FUN_1467618c7(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be9bd10;
  return;
}



// FUNCTION 1467618ea FUN_1467618ea body=47 status=ok
// SIG undefined FUN_1467618ea(void)

longlong FUN_1467618ea(void)

{
  if (DAT_14cc28a28 == 0) {
    FUN_14073dd9a(&DAT_14cc28a28,&PTR_LAB_14be9bcc8);
  }
  return DAT_14cc28a28;
}



// FUNCTION 14676191a FUN_14676191a body=192 status=ok
// SIG undefined FUN_14676191a(void)

void FUN_14676191a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bea2410;
  puVar1[3] = &DAT_14cc28a50;
  puVar1[4] = FUN_1459d164e;
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



// FUNCTION 1467619e2 FUN_1467619e2 body=40 status=ok
// SIG undefined FUN_1467619e2(void)

undefined8 FUN_1467619e2(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146761a0a FUN_146761a0a body=93 status=ok
// SIG undefined FUN_146761a0a(void)

void FUN_146761a0a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea2410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146761a68 FUN_146761a68 body=34 status=ok
// SIG undefined FUN_146761a68(void)

undefined8 FUN_146761a68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146761a8a FUN_146761a8a body=192 status=ok
// SIG undefined FUN_146761a8a(void)

void FUN_146761a8a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bea2800;
  puVar1[3] = &DAT_14cc28f8c;
  puVar1[4] = FUN_1459d167c;
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



// FUNCTION 146761b5e FUN_146761b5e body=93 status=ok
// SIG undefined FUN_146761b5e(void)

void FUN_146761b5e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea2800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146761bbc FUN_146761bbc body=29 status=ok
// SIG undefined FUN_146761bbc(void)

undefined8 FUN_146761bbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146761bda FUN_146761bda body=192 status=ok
// SIG undefined FUN_146761bda(void)

void FUN_146761bda(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bea5de0;
  puVar1[3] = &DAT_14cc29050;
  puVar1[4] = FUN_1459a6f0c;
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



// FUNCTION 146761c9c FUN_146761c9c body=93 status=ok
// SIG undefined FUN_146761c9c(void)

void FUN_146761c9c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea5de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146761cfa FUN_146761cfa body=34 status=ok
// SIG undefined FUN_146761cfa(void)

undefined8 FUN_146761cfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146761d1c FUN_146761d1c body=192 status=ok
// SIG undefined FUN_146761d1c(void)

void FUN_146761d1c(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bea66d0;
  puVar1[3] = &DAT_14cc29054;
  puVar1[4] = FUN_1459d16aa;
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



// FUNCTION 146761dde FUN_146761dde body=233 status=ok
// SIG undefined FUN_146761dde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146761dde(void)

{
  HMODULE hModule;
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28,L"amd_fidelityfx_dx12.dll");
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  hModule = (HMODULE)FUN_14155261e(puVar1);
  DAT_14cc290b8 = hModule;
  if (hModule != (HMODULE)0x0) {
    _DAT_14cc29090 = GetProcAddress(hModule,"ffxCreateContext");
    _DAT_14cc29098 = GetProcAddress(hModule,"ffxDestroyContext");
    _DAT_14cc290a0 = GetProcAddress(hModule,"ffxConfigure");
    _DAT_14cc290a8 = GetProcAddress(hModule,"ffxQuery");
    _DAT_14cc290b0 = GetProcAddress(hModule,"ffxDispatch");
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return hModule != (HMODULE)0x0;
}



// FUNCTION 146761ec8 FUN_146761ec8 body=198 status=ok
// SIG undefined FUN_146761ec8(void)

undefined8 * FUN_146761ec8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &PTR__purecall_14bea64f0;
  param_1[2] = &PTR_FUN_149e002e8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_14bea63d0;
  param_1[1] = &PTR_LAB_14bea64a0;
  param_1[2] = &PTR_FUN_14bea64d0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = &DAT_14cc29070;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_1446ddc76(&local_30,"DXGISwapchainProvider",1);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_30,param_1 + 2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146761f90 FUN_146761f90 body=107 status=ok
// SIG undefined FUN_146761f90(void)

void FUN_146761f90(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    if ((longlong *)puVar3[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[3] + 0x10))();
    }
    if (puVar3[2] != 0) {
      LOCK();
      puVar1 = (uint *)(puVar3[2] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    thunk_FUN_1400020a8(puVar3,0x20);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 146761ffc FUN_146761ffc body=93 status=ok
// SIG undefined FUN_146761ffc(void)

void FUN_146761ffc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea66d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676205a FUN_14676205a body=34 status=ok
// SIG undefined FUN_14676205a(void)

undefined8 FUN_14676205a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14676207c FUN_14676207c body=192 status=ok
// SIG undefined FUN_14676207c(void)

void FUN_14676207c(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bea8e80;
  puVar1[3] = &DAT_14cc2963c;
  puVar1[4] = FUN_145a4572c;
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



// FUNCTION 14676213e FUN_14676213e body=186 status=ok
// SIG undefined FUN_14676213e(void)

undefined8 FUN_14676213e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bea8f60;
  puVar1[3] = param_2;
  puVar1[4] = FUN_14605bbbe;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467621fa FUN_1467621fa body=136 status=ok
// SIG undefined FUN_1467621fa(void)

code * FUN_1467621fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146762282;
}



// FUNCTION 146762282 FUN_146762282 body=144 status=ok
// SIG undefined FUN_146762282(void)

code * FUN_146762282(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f108d2;
}



// FUNCTION 146762312 FUN_146762312 body=136 status=ok
// SIG undefined FUN_146762312(void)

code * FUN_146762312(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilShift";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e3ae;
}



// FUNCTION 14676239a FUN_14676239a body=136 status=ok
// SIG undefined FUN_14676239a(void)

code * FUN_14676239a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveHistoryTAAResponsiveValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e54c;
}



// FUNCTION 146762422 FUN_146762422 body=136 status=ok
// SIG undefined FUN_146762422(void)

code * FUN_146762422(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompositeMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981edec;
}



// FUNCTION 1467624aa FUN_1467624aa body=144 status=ok
// SIG undefined FUN_1467624aa(void)

code * FUN_1467624aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14981ee76;
}



// FUNCTION 14676253a FUN_14676253a body=136 status=ok
// SIG undefined FUN_14676253a(void)

code * FUN_14676253a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FullDeDither";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f576;
}



// FUNCTION 1467625c2 FUN_1467625c2 body=144 status=ok
// SIG undefined FUN_1467625c2(void)

code * FUN_1467625c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e4d94c;
}



// FUNCTION 146762652 FUN_146762652 body=136 status=ok
// SIG undefined FUN_146762652(void)

code * FUN_146762652(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ExposureTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ed6dfe;
}



// FUNCTION 1467626da FUN_1467626da body=136 status=ok
// SIG undefined FUN_1467626da(void)

code * FUN_1467626da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"s_PointClamp";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c8000000aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f642;
}



// FUNCTION 146762762 FUN_146762762 body=136 status=ok
// SIG undefined FUN_146762762(void)

code * FUN_146762762(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_spd_mip3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a8000000a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f756;
}



// FUNCTION 1467627ea FUN_1467627ea body=136 status=ok
// SIG undefined FUN_1467627ea(void)

code * FUN_1467627ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_reconstructed_previous_nearest_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10800000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820080;
}



// FUNCTION 146762872 FUN_146762872 body=136 status=ok
// SIG undefined FUN_146762872(void)

code * FUN_146762872(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rw_upscaled_output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982131a;
}



// FUNCTION 1467628fa FUN_1467628fa body=146 status=ok
// SIG undefined FUN_1467628fa(void)

code * FUN_1467628fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145da973c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbRCAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXRCASParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2a178;
  return FUN_145e9ea50;
}



// FUNCTION 14676298c FUN_14676298c body=136 status=ok
// SIG undefined FUN_14676298c(void)

code * FUN_14676298c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"fVelocityFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821434;
}



// FUNCTION 146762a14 FUN_146762a14 body=136 status=ok
// SIG undefined FUN_146762a14(void)

code * FUN_146762a14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"fDeltaTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821548;
}



// FUNCTION 146762a9c FUN_146762a9c body=136 status=ok
// SIG undefined FUN_146762a9c(void)

code * FUN_146762a9c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"renderSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eee0aa;
}



// FUNCTION 146762b24 FUN_146762b24 body=130 status=ok
// SIG undefined FUN_146762b24(void)

undefined1 * FUN_146762b24(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"rcasConfig";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145da993e;
}



// FUNCTION 146762ba6 FUN_146762ba6 body=136 status=ok
// SIG undefined FUN_146762ba6(void)

code * FUN_146762ba6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"flags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0f1cc;
}



// FUNCTION 146762c2e FUN_146762c2e body=29 status=ok
// SIG undefined FUN_146762c2e(void)

undefined8 FUN_146762c2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146762c4c FUN_146762c4c body=93 status=ok
// SIG undefined FUN_146762c4c(void)

void FUN_146762c4c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea8e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146762caa FUN_146762caa body=29 status=ok
// SIG undefined FUN_146762caa(void)

undefined8 FUN_146762caa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146762cc8 FUN_146762cc8 body=29 status=ok
// SIG undefined FUN_146762cc8(void)

undefined8 FUN_146762cc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146762ce6 FUN_146762ce6 body=192 status=ok
// SIG undefined FUN_146762ce6(void)

void FUN_146762ce6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14beac8b0;
  puVar1[3] = &DAT_14cc2afa0;
  puVar1[4] = FUN_145a1fc62;
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



// FUNCTION 146762dd2 FUN_146762dd2 body=136 status=ok
// SIG undefined FUN_146762dd2(void)

code * FUN_146762dd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3c546;
}


