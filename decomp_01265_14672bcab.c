// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14672bcab FUN_14672bcab body=47 status=ok
// SIG undefined FUN_14672bcab(void)

longlong FUN_14672bcab(void)

{
  if (DAT_14cc10740 == 0) {
    FUN_14073dd9a(&DAT_14cc10740,&PTR_LAB_14bc9c4d8);
  }
  return DAT_14cc10740;
}



// FUNCTION 14672bcda FUN_14672bcda body=47 status=ok
// SIG undefined FUN_14672bcda(void)

longlong FUN_14672bcda(void)

{
  if (DAT_14cc10758 == 0) {
    FUN_14073dd9a(&DAT_14cc10758,&PTR_LAB_14bc9c868);
  }
  return DAT_14cc10758;
}



// FUNCTION 14672bd09 FUN_14672bd09 body=53 status=ok
// SIG undefined FUN_14672bd09(void)

void FUN_14672bd09(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458e7fce(puVar1,param_1);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_14bc9cc50;
  FUN_144a5dc74(puVar1 + 0x10);
  return;
}



// FUNCTION 14672bd3e FUN_14672bd3e body=47 status=ok
// SIG undefined FUN_14672bd3e(void)

longlong FUN_14672bd3e(void)

{
  if (DAT_14cc10770 == 0) {
    FUN_14073dd9a(&DAT_14cc10770,&PTR_LAB_14bc9cc08);
  }
  return DAT_14cc10770;
}



// FUNCTION 14672bd6d FUN_14672bd6d body=53 status=ok
// SIG undefined FUN_14672bd6d(void)

void FUN_14672bd6d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a1c6fc(puVar1,param_1);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_14bc9cff0;
  FUN_144a5dc74(puVar1 + 0x10);
  return;
}



// FUNCTION 14672bda2 FUN_14672bda2 body=47 status=ok
// SIG undefined FUN_14672bda2(void)

longlong FUN_14672bda2(void)

{
  if (DAT_14cc10788 == 0) {
    FUN_14073dd9a(&DAT_14cc10788,&PTR_LAB_14bc9cfa8);
  }
  return DAT_14cc10788;
}



// FUNCTION 14672bdd1 FUN_14672bdd1 body=42 status=ok
// SIG undefined FUN_14672bdd1(void)

void FUN_14672bdd1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458e7fce(puVar1,param_1);
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_14bc9d3a0;
  return;
}



// FUNCTION 14672bdfb FUN_14672bdfb body=47 status=ok
// SIG undefined FUN_14672bdfb(void)

longlong FUN_14672bdfb(void)

{
  if (DAT_14cc107a0 == 0) {
    FUN_14073dd9a(&DAT_14cc107a0,&PTR_LAB_14bc9d358);
  }
  return DAT_14cc107a0;
}



// FUNCTION 14672be2a FUN_14672be2a body=52 status=ok
// SIG undefined FUN_14672be2a(void)

void FUN_14672be2a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a497a4(puVar1,param_1);
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *puVar1 = &PTR_FUN_14bc9d760;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 14672be5e FUN_14672be5e body=47 status=ok
// SIG undefined FUN_14672be5e(void)

longlong FUN_14672be5e(void)

{
  if (DAT_14cc107b8 == 0) {
    FUN_14073dd9a(&DAT_14cc107b8,&PTR_LAB_14bc9d718);
  }
  return DAT_14cc107b8;
}



// FUNCTION 14672be8e FUN_14672be8e body=192 status=ok
// SIG undefined FUN_14672be8e(void)

void FUN_14672be8e(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bc9de60;
  puVar1[3] = &DAT_14cc107c8;
  puVar1[4] = FUN_1459a6c42;
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



// FUNCTION 14672bf50 FUN_14672bf50 body=69 status=ok
// SIG undefined FUN_14672bf50(void)

undefined8 * FUN_14672bf50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9bde0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672bf96 FUN_14672bf96 body=72 status=ok
// SIG undefined FUN_14672bf96(void)

undefined8 * FUN_14672bf96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9c180;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e04(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672bfde FUN_14672bfde body=69 status=ok
// SIG undefined FUN_14672bfde(void)

undefined8 * FUN_14672bfde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9c520;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c024 FUN_14672c024 body=69 status=ok
// SIG undefined FUN_14672c024(void)

undefined8 * FUN_14672c024(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9c8b0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c06a FUN_14672c06a body=69 status=ok
// SIG undefined FUN_14672c06a(void)

undefined8 * FUN_14672c06a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9bde0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e32(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c0b0 FUN_14672c0b0 body=93 status=ok
// SIG undefined FUN_14672c0b0(void)

void FUN_14672c0b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc9de60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14672c10e FUN_14672c10e body=34 status=ok
// SIG undefined FUN_14672c10e(void)

undefined8 FUN_14672c10e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14672c130 FUN_14672c130 body=192 status=ok
// SIG undefined FUN_14672c130(void)

void FUN_14672c130(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bc9e480;
  puVar1[3] = &DAT_14cc107cc;
  puVar1[4] = FUN_1459d108e;
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



// FUNCTION 14672c1f2 FUN_14672c1f2 body=93 status=ok
// SIG undefined FUN_14672c1f2(void)

void FUN_14672c1f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc9e480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14672c250 FUN_14672c250 body=29 status=ok
// SIG undefined FUN_14672c250(void)

undefined8 FUN_14672c250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c26d FUN_14672c26d body=49 status=ok
// SIG undefined FUN_14672c26d(void)

longlong FUN_14672c26d(void)

{
  if (DAT_14cc10930 == 0) {
    FUN_140f50038(&DAT_14cc10930,&PTR_s__Script_InterchangeCommon_14bc9e590);
  }
  return DAT_14cc10930;
}



// FUNCTION 14672c29e FUN_14672c29e body=47 status=ok
// SIG undefined FUN_14672c29e(void)

longlong FUN_14672c29e(void)

{
  if (DAT_14cc10998 == 0) {
    FUN_1409ce572(&DAT_14cc10998,&PTR_FUN_14bc9e6a0);
  }
  return DAT_14cc10998;
}



// FUNCTION 14672c2cd FUN_14672c2cd body=47 status=ok
// SIG undefined FUN_14672c2cd(void)

longlong FUN_14672c2cd(void)

{
  if (DAT_14cc109b0 == 0) {
    FUN_1409ce572(&DAT_14cc109b0,&PTR_FUN_14bc9e790);
  }
  return DAT_14cc109b0;
}



// FUNCTION 14672c2fc FUN_14672c2fc body=47 status=ok
// SIG undefined FUN_14672c2fc(void)

longlong FUN_14672c2fc(void)

{
  if (DAT_14cc109c8 == 0) {
    FUN_1409ce572(&DAT_14cc109c8,&PTR_FUN_14bc9e820);
  }
  return DAT_14cc109c8;
}



// FUNCTION 14672c32b FUN_14672c32b body=47 status=ok
// SIG undefined FUN_14672c32b(void)

longlong FUN_14672c32b(void)

{
  if (DAT_14cc109e0 == 0) {
    FUN_1409ce572(&DAT_14cc109e0,&PTR_FUN_14bc9e8a0);
  }
  return DAT_14cc109e0;
}



// FUNCTION 14672c35a FUN_14672c35a body=192 status=ok
// SIG undefined FUN_14672c35a(void)

void FUN_14672c35a(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bc9ee50;
  puVar1[3] = &DAT_14cc109f8;
  puVar1[4] = FUN_1459a6c6c;
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



// FUNCTION 14672c41c FUN_14672c41c body=93 status=ok
// SIG undefined FUN_14672c41c(void)

void FUN_14672c41c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc9ee50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14672c47a FUN_14672c47a body=34 status=ok
// SIG undefined FUN_14672c47a(void)

undefined8 FUN_14672c47a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14672c49c FUN_14672c49c body=47 status=ok
// SIG undefined FUN_14672c49c(void)

longlong FUN_14672c49c(void)

{
  if (DAT_14cc10a18 == 0) {
    FUN_1409ce572(&DAT_14cc10a18,&PTR_FUN_14bc9efe0);
  }
  return DAT_14cc10a18;
}



// FUNCTION 14672c4cb FUN_14672c4cb body=47 status=ok
// SIG undefined FUN_14672c4cb(void)

longlong FUN_14672c4cb(void)

{
  if (DAT_14cc10a30 == 0) {
    FUN_1409ce572(&DAT_14cc10a30,&PTR_FUN_14bc9f070);
  }
  return DAT_14cc10a30;
}



// FUNCTION 14672c4fa FUN_14672c4fa body=47 status=ok
// SIG undefined FUN_14672c4fa(void)

longlong FUN_14672c4fa(void)

{
  if (DAT_14cc10a48 == 0) {
    FUN_1409ce572(&DAT_14cc10a48,&PTR_FUN_14bc9f110);
  }
  return DAT_14cc10a48;
}



// FUNCTION 14672c529 FUN_14672c529 body=47 status=ok
// SIG undefined FUN_14672c529(void)

longlong FUN_14672c529(void)

{
  if (DAT_14cc10a60 == 0) {
    FUN_14086a14e(&DAT_14cc10a60,&PTR_FUN_14bc9f4b8);
  }
  return DAT_14cc10a60;
}



// FUNCTION 14672c558 FUN_14672c558 body=48 status=ok
// SIG undefined FUN_14672c558(void)

void FUN_14672c558(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14bc9fbc0;
  return;
}



// FUNCTION 14672c588 FUN_14672c588 body=55 status=ok
// SIG undefined FUN_14672c588(void)

void FUN_14672c588(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc10a80 == 0) {
    uVar1 = FUN_14596ed01();
    DAT_14cc10a80 = FUN_140002ddd(FUN_14672c5bf,uVar1,L"InterchangeCurve");
  }
  return;
}



// FUNCTION 14672c5bf FUN_14672c5bf body=47 status=ok
// SIG undefined FUN_14672c5bf(void)

longlong FUN_14672c5bf(void)

{
  if (DAT_14cc10a78 == 0) {
    FUN_14086a14e(&DAT_14cc10a78,&PTR_FUN_14bc9f5b8);
  }
  return DAT_14cc10a78;
}



// FUNCTION 14672c5ee FUN_14672c5ee body=48 status=ok
// SIG undefined FUN_14672c5ee(void)

void FUN_14672c5ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bc9fd30;
  return;
}



// FUNCTION 14672c61e FUN_14672c61e body=55 status=ok
// SIG undefined FUN_14672c61e(void)

void FUN_14672c61e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc10a98 == 0) {
    uVar1 = FUN_14596ed01();
    DAT_14cc10a98 = FUN_140002ddd(FUN_14672c655,uVar1,L"InterchangeStepCurve");
  }
  return;
}



// FUNCTION 14672c655 FUN_14672c655 body=47 status=ok
// SIG undefined FUN_14672c655(void)

longlong FUN_14672c655(void)

{
  if (DAT_14cc10a90 == 0) {
    FUN_14086a14e(&DAT_14cc10a90,&PTR_FUN_14bc9f6b8);
  }
  return DAT_14cc10a90;
}



// FUNCTION 14672c684 FUN_14672c684 body=48 status=ok
// SIG undefined FUN_14672c684(void)

void FUN_14672c684(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14bc9fe90;
  return;
}



// FUNCTION 14672c6b4 FUN_14672c6b4 body=192 status=ok
// SIG undefined FUN_14672c6b4(void)

void FUN_14672c6b4(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bca0000;
  puVar1[3] = &DAT_14cc10aa8;
  puVar1[4] = FUN_1459d10bc;
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



// FUNCTION 14672c776 FUN_14672c776 body=29 status=ok
// SIG undefined FUN_14672c776(void)

undefined8 FUN_14672c776(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c794 FUN_14672c794 body=29 status=ok
// SIG undefined FUN_14672c794(void)

undefined8 FUN_14672c794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c7b2 FUN_14672c7b2 body=29 status=ok
// SIG undefined FUN_14672c7b2(void)

undefined8 FUN_14672c7b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c7d0 FUN_14672c7d0 body=93 status=ok
// SIG undefined FUN_14672c7d0(void)

void FUN_14672c7d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bca0000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14672c82e FUN_14672c82e body=29 status=ok
// SIG undefined FUN_14672c82e(void)

undefined8 FUN_14672c82e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672c84b FUN_14672c84b body=35 status=ok
// SIG undefined FUN_14672c84b(void)

void FUN_14672c84b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca0460;
  return;
}



// FUNCTION 14672c873 FUN_14672c873 body=47 status=ok
// SIG undefined FUN_14672c873(void)

longlong FUN_14672c873(void)

{
  if (DAT_14cc10ab8 == 0) {
    FUN_14073dd9a(&DAT_14cc10ab8,&PTR_LAB_14bca0418);
  }
  return DAT_14cc10ab8;
}



// FUNCTION 14672c8a2 FUN_14672c8a2 body=75 status=ok
// SIG undefined FUN_14672c8a2(void)

void FUN_14672c8a2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca08c0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  return;
}



// FUNCTION 14672c8ed FUN_14672c8ed body=47 status=ok
// SIG undefined FUN_14672c8ed(void)

longlong FUN_14672c8ed(void)

{
  if (DAT_14cc10ad0 == 0) {
    FUN_14073dd9a(&DAT_14cc10ad0,&PTR_LAB_14bca0878);
  }
  return DAT_14cc10ad0;
}



// FUNCTION 14672c91c FUN_14672c91c body=35 status=ok
// SIG undefined FUN_14672c91c(void)

void FUN_14672c91c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca0c60;
  return;
}



// FUNCTION 14672c944 FUN_14672c944 body=47 status=ok
// SIG undefined FUN_14672c944(void)

longlong FUN_14672c944(void)

{
  if (DAT_14cc10ae8 == 0) {
    FUN_14073dd9a(&DAT_14cc10ae8,&PTR_LAB_14bca0c18);
  }
  return DAT_14cc10ae8;
}



// FUNCTION 14672c973 FUN_14672c973 body=47 status=ok
// SIG undefined FUN_14672c973(void)

longlong FUN_14672c973(void)

{
  if (DAT_14cc10b00 == 0) {
    FUN_14073dd9a(&DAT_14cc10b00,&PTR_LAB_14bca0f88);
  }
  return DAT_14cc10b00;
}



// FUNCTION 14672c9a2 FUN_14672c9a2 body=35 status=ok
// SIG undefined FUN_14672c9a2(void)

void FUN_14672c9a2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca1420;
  return;
}



// FUNCTION 14672c9c5 FUN_14672c9c5 body=47 status=ok
// SIG undefined FUN_14672c9c5(void)

longlong FUN_14672c9c5(void)

{
  if (DAT_14cc10b30 == 0) {
    FUN_14073dd9a(&DAT_14cc10b30,&PTR_LAB_14bca13d8);
  }
  return DAT_14cc10b30;
}



// FUNCTION 14672c9f4 FUN_14672c9f4 body=43 status=ok
// SIG undefined FUN_14672c9f4(void)

void FUN_14672c9f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca1830;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14672ca1f FUN_14672ca1f body=47 status=ok
// SIG undefined FUN_14672ca1f(void)

longlong FUN_14672ca1f(void)

{
  if (DAT_14cc10b48 == 0) {
    FUN_14073dd9a(&DAT_14cc10b48,&PTR_LAB_14bca17e8);
  }
  return DAT_14cc10b48;
}



// FUNCTION 14672ca4e FUN_14672ca4e body=35 status=ok
// SIG undefined FUN_14672ca4e(void)

void FUN_14672ca4e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14595f784(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca1c40;
  return;
}



// FUNCTION 14672ca71 FUN_14672ca71 body=47 status=ok
// SIG undefined FUN_14672ca71(void)

longlong FUN_14672ca71(void)

{
  if (DAT_14cc10b60 == 0) {
    FUN_14073dd9a(&DAT_14cc10b60,&PTR_LAB_14bca1bf8);
  }
  return DAT_14cc10b60;
}



// FUNCTION 14672caa0 FUN_14672caa0 body=35 status=ok
// SIG undefined FUN_14672caa0(void)

void FUN_14672caa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca2060;
  return;
}



// FUNCTION 14672cac9 FUN_14672cac9 body=47 status=ok
// SIG undefined FUN_14672cac9(void)

longlong FUN_14672cac9(void)

{
  if (DAT_14cc10b78 == 0) {
    FUN_14073dd9a(&DAT_14cc10b78,&PTR_LAB_14bca2018);
  }
  return DAT_14cc10b78;
}



// FUNCTION 14672caf8 FUN_14672caf8 body=35 status=ok
// SIG undefined FUN_14672caf8(void)

void FUN_14672caf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca23d0;
  return;
}



// FUNCTION 14672cb1b FUN_14672cb1b body=47 status=ok
// SIG undefined FUN_14672cb1b(void)

longlong FUN_14672cb1b(void)

{
  if (DAT_14cc10b90 == 0) {
    FUN_14073dd9a(&DAT_14cc10b90,&PTR_LAB_14bca2388);
  }
  return DAT_14cc10b90;
}



// FUNCTION 14672cb4a FUN_14672cb4a body=43 status=ok
// SIG undefined FUN_14672cb4a(void)

void FUN_14672cb4a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca27e0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14672cb75 FUN_14672cb75 body=47 status=ok
// SIG undefined FUN_14672cb75(void)

longlong FUN_14672cb75(void)

{
  if (DAT_14cc10ba8 == 0) {
    FUN_14073dd9a(&DAT_14cc10ba8,&PTR_LAB_14bca2798);
  }
  return DAT_14cc10ba8;
}



// FUNCTION 14672cba4 FUN_14672cba4 body=35 status=ok
// SIG undefined FUN_14672cba4(void)

void FUN_14672cba4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca2c00;
  return;
}



// FUNCTION 14672cbcc FUN_14672cbcc body=47 status=ok
// SIG undefined FUN_14672cbcc(void)

longlong FUN_14672cbcc(void)

{
  if (DAT_14cc10bc0 == 0) {
    FUN_14073dd9a(&DAT_14cc10bc0,&PTR_LAB_14bca2bb8);
  }
  return DAT_14cc10bc0;
}



// FUNCTION 14672cbfb FUN_14672cbfb body=35 status=ok
// SIG undefined FUN_14672cbfb(void)

void FUN_14672cbfb(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca2f90;
  return;
}



// FUNCTION 14672cc23 FUN_14672cc23 body=47 status=ok
// SIG undefined FUN_14672cc23(void)

longlong FUN_14672cc23(void)

{
  if (DAT_14cc10bd8 == 0) {
    FUN_14073dd9a(&DAT_14cc10bd8,&PTR_LAB_14bca2f48);
  }
  return DAT_14cc10bd8;
}



// FUNCTION 14672cc52 FUN_14672cc52 body=35 status=ok
// SIG undefined FUN_14672cc52(void)

void FUN_14672cc52(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca3300;
  return;
}



// FUNCTION 14672cc7b FUN_14672cc7b body=47 status=ok
// SIG undefined FUN_14672cc7b(void)

longlong FUN_14672cc7b(void)

{
  if (DAT_14cc10bf0 == 0) {
    FUN_14073dd9a(&DAT_14cc10bf0,&PTR_LAB_14bca32b8);
  }
  return DAT_14cc10bf0;
}



// FUNCTION 14672ccaa FUN_14672ccaa body=35 status=ok
// SIG undefined FUN_14672ccaa(void)

void FUN_14672ccaa(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bca3680;
  return;
}



// FUNCTION 14672ccd2 FUN_14672ccd2 body=47 status=ok
// SIG undefined FUN_14672ccd2(void)

longlong FUN_14672ccd2(void)

{
  if (DAT_14cc10c08 == 0) {
    FUN_14073dd9a(&DAT_14cc10c08,&PTR_LAB_14bca3638);
  }
  return DAT_14cc10c08;
}



// FUNCTION 14672cd01 FUN_14672cd01 body=47 status=ok
// SIG undefined FUN_14672cd01(void)

longlong FUN_14672cd01(void)

{
  if (DAT_14cc10c20 == 0) {
    FUN_14073dd9a(&DAT_14cc10c20,&PTR_LAB_14bca3b58);
  }
  return DAT_14cc10c20;
}



// FUNCTION 14672cd30 FUN_14672cd30 body=47 status=ok
// SIG undefined FUN_14672cd30(void)

longlong FUN_14672cd30(void)

{
  if (DAT_14cc10c48 == 0) {
    FUN_14073dd9a(&DAT_14cc10c48,&PTR_LAB_14bca3f08);
  }
  return DAT_14cc10c48;
}



// FUNCTION 14672cd70 FUN_14672cd70 body=47 status=ok
// SIG undefined FUN_14672cd70(void)

longlong FUN_14672cd70(void)

{
  if (DAT_14cc10c68 == 0) {
    FUN_14073dd9a(&DAT_14cc10c68,&PTR_LAB_14bca44e8);
  }
  return DAT_14cc10c68;
}



// FUNCTION 14672cd9f FUN_14672cd9f body=47 status=ok
// SIG undefined FUN_14672cd9f(void)

longlong FUN_14672cd9f(void)

{
  if (DAT_14cc10c80 == 0) {
    FUN_14073dd9a(&DAT_14cc10c80,&PTR_LAB_14bca48b8);
  }
  return DAT_14cc10c80;
}



// FUNCTION 14672cdce FUN_14672cdce body=40 status=ok
// SIG undefined FUN_14672cdce(void)

undefined8 FUN_14672cdce(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cdf6 FUN_14672cdf6 body=40 status=ok
// SIG undefined FUN_14672cdf6(void)

undefined8 FUN_14672cdf6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672ce1e FUN_14672ce1e body=40 status=ok
// SIG undefined FUN_14672ce1e(void)

undefined8 FUN_14672ce1e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672ce46 FUN_14672ce46 body=40 status=ok
// SIG undefined FUN_14672ce46(void)

undefined8 FUN_14672ce46(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672ce6e FUN_14672ce6e body=40 status=ok
// SIG undefined FUN_14672ce6e(void)

undefined8 FUN_14672ce6e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672ce96 FUN_14672ce96 body=40 status=ok
// SIG undefined FUN_14672ce96(void)

undefined8 FUN_14672ce96(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cebe FUN_14672cebe body=40 status=ok
// SIG undefined FUN_14672cebe(void)

undefined8 FUN_14672cebe(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cee6 FUN_14672cee6 body=40 status=ok
// SIG undefined FUN_14672cee6(void)

undefined8 FUN_14672cee6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cf0e FUN_14672cf0e body=40 status=ok
// SIG undefined FUN_14672cf0e(void)

undefined8 FUN_14672cf0e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cf36 FUN_14672cf36 body=40 status=ok
// SIG undefined FUN_14672cf36(void)

undefined8 FUN_14672cf36(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cf5e FUN_14672cf5e body=40 status=ok
// SIG undefined FUN_14672cf5e(void)

undefined8 FUN_14672cf5e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cf86 FUN_14672cf86 body=40 status=ok
// SIG undefined FUN_14672cf86(void)

undefined8 FUN_14672cf86(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cfae FUN_14672cfae body=40 status=ok
// SIG undefined FUN_14672cfae(void)

undefined8 FUN_14672cfae(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672cfd6 FUN_14672cfd6 body=99 status=ok
// SIG undefined FUN_14672cfd6(void)

undefined8 * FUN_14672cfd6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b856de(param_1,iVar1,0);
      FUN_140b8566a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14672d039 FUN_14672d039 body=47 status=ok
// SIG undefined FUN_14672d039(void)

longlong FUN_14672d039(void)

{
  if (DAT_14cc13798 == 0) {
    FUN_14073dd9a(&DAT_14cc13798,&PTR_LAB_14bca83c8);
  }
  return DAT_14cc13798;
}



// FUNCTION 14672d068 FUN_14672d068 body=192 status=ok
// SIG undefined FUN_14672d068(void)

void FUN_14672d068(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bcb3a50;
  puVar1[3] = &DAT_14cc137d8;
  puVar1[4] = FUN_145a1fc2e;
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



// FUNCTION 14672d129 FUN_14672d129 body=53 status=ok
// SIG undefined FUN_14672d129(void)

void FUN_14672d129(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14bca90b0;
  puVar1[7] = &PTR_FUN_14bca93a0;
  return;
}



// FUNCTION 14672d15e FUN_14672d15e body=47 status=ok
// SIG undefined FUN_14672d15e(void)

longlong FUN_14672d15e(void)

{
  if (DAT_14cc137e8 == 0) {
    FUN_14073dd9a(&DAT_14cc137e8,&PTR_LAB_14bca9068);
  }
  return DAT_14cc137e8;
}



// FUNCTION 14672d18d FUN_14672d18d body=47 status=ok
// SIG undefined FUN_14672d18d(void)

longlong FUN_14672d18d(void)

{
  if (DAT_14cc13810 == 0) {
    FUN_14073dd9a(&DAT_14cc13810,&PTR_LAB_14bca95f8);
  }
  return DAT_14cc13810;
}



// FUNCTION 14672d1bc FUN_14672d1bc body=47 status=ok
// SIG undefined FUN_14672d1bc(void)

longlong FUN_14672d1bc(void)

{
  if (DAT_14cc13840 == 0) {
    FUN_14073dd9a(&DAT_14cc13840,&PTR_LAB_14bca9ad8);
  }
  return DAT_14cc13840;
}



// FUNCTION 14672d1eb FUN_14672d1eb body=47 status=ok
// SIG undefined FUN_14672d1eb(void)

longlong FUN_14672d1eb(void)

{
  if (DAT_14cc13870 == 0) {
    FUN_14073dd9a(&DAT_14cc13870,&PTR_LAB_14bca9fa8);
  }
  return DAT_14cc13870;
}



// FUNCTION 14672d21a FUN_14672d21a body=47 status=ok
// SIG undefined FUN_14672d21a(void)

longlong FUN_14672d21a(void)

{
  if (DAT_14cc138a0 == 0) {
    FUN_14073dd9a(&DAT_14cc138a0,&PTR_LAB_14bcaa478);
  }
  return DAT_14cc138a0;
}



// FUNCTION 14672d249 FUN_14672d249 body=47 status=ok
// SIG undefined FUN_14672d249(void)

longlong FUN_14672d249(void)

{
  if (DAT_14cc138d0 == 0) {
    FUN_14073dd9a(&DAT_14cc138d0,&PTR_LAB_14bcaa958);
  }
  return DAT_14cc138d0;
}



// FUNCTION 14672d278 FUN_14672d278 body=47 status=ok
// SIG undefined FUN_14672d278(void)

longlong FUN_14672d278(void)

{
  if (DAT_14cc13900 == 0) {
    FUN_14073dd9a(&DAT_14cc13900,&PTR_LAB_14bcaae28);
  }
  return DAT_14cc13900;
}



// FUNCTION 14672d2a7 FUN_14672d2a7 body=47 status=ok
// SIG undefined FUN_14672d2a7(void)

longlong FUN_14672d2a7(void)

{
  if (DAT_14cc13930 == 0) {
    FUN_14073dd9a(&DAT_14cc13930,&PTR_LAB_14bcab5e8);
  }
  return DAT_14cc13930;
}



// FUNCTION 14672d2d6 FUN_14672d2d6 body=47 status=ok
// SIG undefined FUN_14672d2d6(void)

longlong FUN_14672d2d6(void)

{
  if (DAT_14cc13960 == 0) {
    FUN_14073dd9a(&DAT_14cc13960,&PTR_LAB_14bcabaa8);
  }
  return DAT_14cc13960;
}



// FUNCTION 14672d305 FUN_14672d305 body=47 status=ok
// SIG undefined FUN_14672d305(void)

longlong FUN_14672d305(void)

{
  if (DAT_14cc13988 == 0) {
    FUN_1409ce572(&DAT_14cc13988,&PTR_FUN_14bcabe60);
  }
  return DAT_14cc13988;
}



// FUNCTION 14672d334 FUN_14672d334 body=47 status=ok
// SIG undefined FUN_14672d334(void)

longlong FUN_14672d334(void)

{
  if (DAT_14cc139a8 == 0) {
    FUN_14073dd9a(&DAT_14cc139a8,&PTR_LAB_14bcac028);
  }
  return DAT_14cc139a8;
}



// FUNCTION 14672d363 FUN_14672d363 body=47 status=ok
// SIG undefined FUN_14672d363(void)

longlong FUN_14672d363(void)

{
  if (DAT_14cc139d8 == 0) {
    FUN_14073dd9a(&DAT_14cc139d8,&PTR_LAB_14bcac518);
  }
  return DAT_14cc139d8;
}



// FUNCTION 14672d392 FUN_14672d392 body=47 status=ok
// SIG undefined FUN_14672d392(void)

longlong FUN_14672d392(void)

{
  if (DAT_14cc13a08 == 0) {
    FUN_14073dd9a(&DAT_14cc13a08,&PTR_LAB_14bcac9e8);
  }
  return DAT_14cc13a08;
}



// FUNCTION 14672d3c1 FUN_14672d3c1 body=47 status=ok
// SIG undefined FUN_14672d3c1(void)

longlong FUN_14672d3c1(void)

{
  if (DAT_14cc13a38 == 0) {
    FUN_14073dd9a(&DAT_14cc13a38,&PTR_LAB_14bcaceb8);
  }
  return DAT_14cc13a38;
}



// FUNCTION 14672d3f0 FUN_14672d3f0 body=47 status=ok
// SIG undefined FUN_14672d3f0(void)

longlong FUN_14672d3f0(void)

{
  if (DAT_14cc13a68 == 0) {
    FUN_14073dd9a(&DAT_14cc13a68,&PTR_LAB_14bcad378);
  }
  return DAT_14cc13a68;
}



// FUNCTION 14672d41f FUN_14672d41f body=47 status=ok
// SIG undefined FUN_14672d41f(void)

longlong FUN_14672d41f(void)

{
  if (DAT_14cc13a98 == 0) {
    FUN_14073dd9a(&DAT_14cc13a98,&PTR_LAB_14bcad848);
  }
  return DAT_14cc13a98;
}



// FUNCTION 14672d44e FUN_14672d44e body=47 status=ok
// SIG undefined FUN_14672d44e(void)

longlong FUN_14672d44e(void)

{
  if (DAT_14cc13ac8 == 0) {
    FUN_14073dd9a(&DAT_14cc13ac8,&PTR_LAB_14bcadd18);
  }
  return DAT_14cc13ac8;
}



// FUNCTION 14672d47d FUN_14672d47d body=47 status=ok
// SIG undefined FUN_14672d47d(void)

longlong FUN_14672d47d(void)

{
  if (DAT_14cc13af8 == 0) {
    FUN_14073dd9a(&DAT_14cc13af8,&PTR_LAB_14bcae2d8);
  }
  return DAT_14cc13af8;
}



// FUNCTION 14672d4ac FUN_14672d4ac body=47 status=ok
// SIG undefined FUN_14672d4ac(void)

longlong FUN_14672d4ac(void)

{
  if (DAT_14cc13b28 == 0) {
    FUN_14073dd9a(&DAT_14cc13b28,&PTR_LAB_14bcae7a8);
  }
  return DAT_14cc13b28;
}



// FUNCTION 14672d4db FUN_14672d4db body=47 status=ok
// SIG undefined FUN_14672d4db(void)

longlong FUN_14672d4db(void)

{
  if (DAT_14cc13b58 == 0) {
    FUN_14073dd9a(&DAT_14cc13b58,&PTR_LAB_14bcaeba8);
  }
  return DAT_14cc13b58;
}



// FUNCTION 14672d50a FUN_14672d50a body=47 status=ok
// SIG undefined FUN_14672d50a(void)

longlong FUN_14672d50a(void)

{
  if (DAT_14cc13ba0 == 0) {
    FUN_14073dd9a(&DAT_14cc13ba0,&PTR_LAB_14bcaf088);
  }
  return DAT_14cc13ba0;
}



// FUNCTION 14672d539 FUN_14672d539 body=47 status=ok
// SIG undefined FUN_14672d539(void)

longlong FUN_14672d539(void)

{
  if (DAT_14cc13bd0 == 0) {
    FUN_14073dd9a(&DAT_14cc13bd0,&PTR_LAB_14bcaf568);
  }
  return DAT_14cc13bd0;
}



// FUNCTION 14672d568 FUN_14672d568 body=47 status=ok
// SIG undefined FUN_14672d568(void)

longlong FUN_14672d568(void)

{
  if (DAT_14cc13c00 == 0) {
    FUN_14073dd9a(&DAT_14cc13c00,&PTR_LAB_14bcafc28);
  }
  return DAT_14cc13c00;
}



// FUNCTION 14672d597 FUN_14672d597 body=47 status=ok
// SIG undefined FUN_14672d597(void)

longlong FUN_14672d597(void)

{
  if (DAT_14cc13c30 == 0) {
    FUN_14073dd9a(&DAT_14cc13c30,&PTR_LAB_14bcb00b8);
  }
  return DAT_14cc13c30;
}



// FUNCTION 14672d5c6 FUN_14672d5c6 body=47 status=ok
// SIG undefined FUN_14672d5c6(void)

longlong FUN_14672d5c6(void)

{
  if (DAT_14cc13c60 == 0) {
    FUN_14073dd9a(&DAT_14cc13c60,&PTR_LAB_14bcb0588);
  }
  return DAT_14cc13c60;
}



// FUNCTION 14672d5f5 FUN_14672d5f5 body=47 status=ok
// SIG undefined FUN_14672d5f5(void)

longlong FUN_14672d5f5(void)

{
  if (DAT_14cc13c90 == 0) {
    FUN_14073dd9a(&DAT_14cc13c90,&PTR_LAB_14bcb0b08);
  }
  return DAT_14cc13c90;
}



// FUNCTION 14672d624 FUN_14672d624 body=47 status=ok
// SIG undefined FUN_14672d624(void)

longlong FUN_14672d624(void)

{
  if (DAT_14cc13cc0 == 0) {
    FUN_14073dd9a(&DAT_14cc13cc0,&PTR_LAB_14bcb1078);
  }
  return DAT_14cc13cc0;
}



// FUNCTION 14672d653 FUN_14672d653 body=47 status=ok
// SIG undefined FUN_14672d653(void)

longlong FUN_14672d653(void)

{
  if (DAT_14cc13cf0 == 0) {
    FUN_14073dd9a(&DAT_14cc13cf0,&PTR_LAB_14bcb14b8);
  }
  return DAT_14cc13cf0;
}



// FUNCTION 14672d682 FUN_14672d682 body=47 status=ok
// SIG undefined FUN_14672d682(void)

longlong FUN_14672d682(void)

{
  if (DAT_14cc13d18 == 0) {
    FUN_1409ce572(&DAT_14cc13d18,&PTR_FUN_14bcb1850);
  }
  return DAT_14cc13d18;
}



// FUNCTION 14672d6b1 FUN_14672d6b1 body=47 status=ok
// SIG undefined FUN_14672d6b1(void)

longlong FUN_14672d6b1(void)

{
  if (DAT_14cc13d30 == 0) {
    FUN_1409ce572(&DAT_14cc13d30,&PTR_FUN_14bcb18f0);
  }
  return DAT_14cc13d30;
}



// FUNCTION 14672d6e0 FUN_14672d6e0 body=47 status=ok
// SIG undefined FUN_14672d6e0(void)

longlong FUN_14672d6e0(void)

{
  if (DAT_14cc13d50 == 0) {
    FUN_14073dd9a(&DAT_14cc13d50,&PTR_LAB_14bcb1b78);
  }
  return DAT_14cc13d50;
}



// FUNCTION 14672d70f FUN_14672d70f body=47 status=ok
// SIG undefined FUN_14672d70f(void)

longlong FUN_14672d70f(void)

{
  if (DAT_14cc13d80 == 0) {
    FUN_14073dd9a(&DAT_14cc13d80,&PTR_LAB_14bcb1fb8);
  }
  return DAT_14cc13d80;
}



// FUNCTION 14672d73e FUN_14672d73e body=39 status=ok
// SIG undefined FUN_14672d73e(void)

void FUN_14672d73e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb23a0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 14672d765 FUN_14672d765 body=47 status=ok
// SIG undefined FUN_14672d765(void)

longlong FUN_14672d765(void)

{
  if (DAT_14cc13db0 == 0) {
    FUN_14073dd9a(&DAT_14cc13db0,&PTR_LAB_14bcb2358);
  }
  return DAT_14cc13db0;
}



// FUNCTION 14672d794 FUN_14672d794 body=39 status=ok
// SIG undefined FUN_14672d794(void)

void FUN_14672d794(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb2790;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 14672d7bb FUN_14672d7bb body=47 status=ok
// SIG undefined FUN_14672d7bb(void)

longlong FUN_14672d7bb(void)

{
  if (DAT_14cc13dc8 == 0) {
    FUN_14073dd9a(&DAT_14cc13dc8,&PTR_LAB_14bcb2748);
  }
  return DAT_14cc13dc8;
}



// FUNCTION 14672d7f6 FUN_14672d7f6 body=40 status=ok
// SIG undefined FUN_14672d7f6(void)

undefined8 FUN_14672d7f6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d81e FUN_14672d81e body=40 status=ok
// SIG undefined FUN_14672d81e(void)

undefined8 FUN_14672d81e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d846 FUN_14672d846 body=40 status=ok
// SIG undefined FUN_14672d846(void)

undefined8 FUN_14672d846(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d86e FUN_14672d86e body=40 status=ok
// SIG undefined FUN_14672d86e(void)

undefined8 FUN_14672d86e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d896 FUN_14672d896 body=40 status=ok
// SIG undefined FUN_14672d896(void)

undefined8 FUN_14672d896(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d8be FUN_14672d8be body=40 status=ok
// SIG undefined FUN_14672d8be(void)

undefined8 FUN_14672d8be(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d8e6 FUN_14672d8e6 body=40 status=ok
// SIG undefined FUN_14672d8e6(void)

undefined8 FUN_14672d8e6(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d90e FUN_14672d90e body=40 status=ok
// SIG undefined FUN_14672d90e(void)

undefined8 FUN_14672d90e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d936 FUN_14672d936 body=40 status=ok
// SIG undefined FUN_14672d936(void)

undefined8 FUN_14672d936(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d95e FUN_14672d95e body=40 status=ok
// SIG undefined FUN_14672d95e(void)

undefined8 FUN_14672d95e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d986 FUN_14672d986 body=40 status=ok
// SIG undefined FUN_14672d986(void)

undefined8 FUN_14672d986(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d9ae FUN_14672d9ae body=40 status=ok
// SIG undefined FUN_14672d9ae(void)

undefined8 FUN_14672d9ae(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d9d6 FUN_14672d9d6 body=40 status=ok
// SIG undefined FUN_14672d9d6(void)

undefined8 FUN_14672d9d6(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672d9fe FUN_14672d9fe body=40 status=ok
// SIG undefined FUN_14672d9fe(void)

undefined8 FUN_14672d9fe(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672da26 FUN_14672da26 body=40 status=ok
// SIG undefined FUN_14672da26(void)

undefined8 FUN_14672da26(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672da4e FUN_14672da4e body=40 status=ok
// SIG undefined FUN_14672da4e(void)

undefined8 FUN_14672da4e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672da76 FUN_14672da76 body=40 status=ok
// SIG undefined FUN_14672da76(void)

undefined8 FUN_14672da76(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672da9e FUN_14672da9e body=40 status=ok
// SIG undefined FUN_14672da9e(void)

undefined8 FUN_14672da9e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dac6 FUN_14672dac6 body=40 status=ok
// SIG undefined FUN_14672dac6(void)

undefined8 FUN_14672dac6(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672daee FUN_14672daee body=40 status=ok
// SIG undefined FUN_14672daee(void)

undefined8 FUN_14672daee(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672db16 FUN_14672db16 body=40 status=ok
// SIG undefined FUN_14672db16(void)

undefined8 FUN_14672db16(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672db3e FUN_14672db3e body=40 status=ok
// SIG undefined FUN_14672db3e(void)

undefined8 FUN_14672db3e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672db66 FUN_14672db66 body=40 status=ok
// SIG undefined FUN_14672db66(void)

undefined8 FUN_14672db66(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672db8e FUN_14672db8e body=40 status=ok
// SIG undefined FUN_14672db8e(void)

undefined8 FUN_14672db8e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dbb6 FUN_14672dbb6 body=40 status=ok
// SIG undefined FUN_14672dbb6(void)

undefined8 FUN_14672dbb6(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dbde FUN_14672dbde body=40 status=ok
// SIG undefined FUN_14672dbde(void)

undefined8 FUN_14672dbde(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dc06 FUN_14672dc06 body=72 status=ok
// SIG undefined FUN_14672dc06(void)

undefined8 * FUN_14672dc06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcb1500;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc97f4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dc4e FUN_14672dc4e body=40 status=ok
// SIG undefined FUN_14672dc4e(void)

undefined8 FUN_14672dc4e(undefined8 param_1,int param_2)

{
  FUN_14583ec40();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dc76 FUN_14672dc76 body=40 status=ok
// SIG undefined FUN_14672dc76(void)

undefined8 FUN_14672dc76(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dc9e FUN_14672dc9e body=40 status=ok
// SIG undefined FUN_14672dc9e(void)

undefined8 FUN_14672dc9e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dcc6 FUN_14672dcc6 body=40 status=ok
// SIG undefined FUN_14672dcc6(void)

undefined8 FUN_14672dcc6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dcee FUN_14672dcee body=93 status=ok
// SIG undefined FUN_14672dcee(void)

void FUN_14672dcee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcb3a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14672dd4c FUN_14672dd4c body=29 status=ok
// SIG undefined FUN_14672dd4c(void)

undefined8 FUN_14672dd4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672dd69 FUN_14672dd69 body=47 status=ok
// SIG undefined FUN_14672dd69(void)

longlong FUN_14672dd69(void)

{
  if (DAT_14cc14658 == 0) {
    FUN_14073dd9a(&DAT_14cc14658,&PTR_LAB_14bcb3c78);
  }
  return DAT_14cc14658;
}



// FUNCTION 14672dd98 FUN_14672dd98 body=35 status=ok
// SIG undefined FUN_14672dd98(void)

void FUN_14672dd98(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb4260;
  return;
}



// FUNCTION 14672ddbb FUN_14672ddbb body=47 status=ok
// SIG undefined FUN_14672ddbb(void)

longlong FUN_14672ddbb(void)

{
  if (DAT_14cc146d8 == 0) {
    FUN_14073dd9a(&DAT_14cc146d8,&PTR_LAB_14bcb4218);
  }
  return DAT_14cc146d8;
}



// FUNCTION 14672ddef FUN_14672ddef body=47 status=ok
// SIG undefined FUN_14672ddef(void)

longlong FUN_14672ddef(void)

{
  if (DAT_14cc146f8 == 0) {
    FUN_14073dd9a(&DAT_14cc146f8,&PTR_LAB_14bcb4628);
  }
  return DAT_14cc146f8;
}



// FUNCTION 14672de23 FUN_14672de23 body=35 status=ok
// SIG undefined FUN_14672de23(void)

void FUN_14672de23(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb4a70;
  return;
}



// FUNCTION 14672de46 FUN_14672de46 body=47 status=ok
// SIG undefined FUN_14672de46(void)

longlong FUN_14672de46(void)

{
  if (DAT_14cc14710 == 0) {
    FUN_14073dd9a(&DAT_14cc14710,&PTR_LAB_14bcb4a28);
  }
  return DAT_14cc14710;
}



// FUNCTION 14672de7b FUN_14672de7b body=161 status=ok
// SIG undefined FUN_14672de7b(void)

void FUN_14672de7b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb4e80;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0xff;
  *(undefined2 *)(puVar1 + 0x23) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x11a) = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  return;
}



// FUNCTION 14672df1c FUN_14672df1c body=47 status=ok
// SIG undefined FUN_14672df1c(void)

longlong FUN_14672df1c(void)

{
  if (DAT_14cc14728 == 0) {
    FUN_14073dd9a(&DAT_14cc14728,&PTR_LAB_14bcb4e38);
  }
  return DAT_14cc14728;
}



// FUNCTION 14672df51 FUN_14672df51 body=35 status=ok
// SIG undefined FUN_14672df51(void)

void FUN_14672df51(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb5290;
  return;
}



// FUNCTION 14672df74 FUN_14672df74 body=49 status=ok
// SIG undefined FUN_14672df74(void)

longlong FUN_14672df74(void)

{
  if (DAT_14cc14740 == 0) {
    FUN_14073dd9a(&DAT_14cc14740,&PTR_LAB_14bcb5248);
  }
  return DAT_14cc14740;
}



// FUNCTION 14672dfab FUN_14672dfab body=35 status=ok
// SIG undefined FUN_14672dfab(void)

void FUN_14672dfab(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb56b0;
  return;
}



// FUNCTION 14672dfce FUN_14672dfce body=47 status=ok
// SIG undefined FUN_14672dfce(void)

longlong FUN_14672dfce(void)

{
  if (DAT_14cc14758 == 0) {
    FUN_14073dd9a(&DAT_14cc14758,&PTR_LAB_14bcb5668);
  }
  return DAT_14cc14758;
}



// FUNCTION 14672dffd FUN_14672dffd body=35 status=ok
// SIG undefined FUN_14672dffd(void)

void FUN_14672dffd(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb5aa0;
  return;
}



// FUNCTION 14672e020 FUN_14672e020 body=47 status=ok
// SIG undefined FUN_14672e020(void)

longlong FUN_14672e020(void)

{
  if (DAT_14cc14770 == 0) {
    FUN_14073dd9a(&DAT_14cc14770,&PTR_LAB_14bcb5a58);
  }
  return DAT_14cc14770;
}



// FUNCTION 14672e067 FUN_14672e067 body=35 status=ok
// SIG undefined FUN_14672e067(void)

void FUN_14672e067(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb5fd0;
  return;
}



// FUNCTION 14672e08a FUN_14672e08a body=47 status=ok
// SIG undefined FUN_14672e08a(void)

longlong FUN_14672e08a(void)

{
  if (DAT_14cc14788 == 0) {
    FUN_14073dd9a(&DAT_14cc14788,&PTR_LAB_14bcb5f88);
  }
  return DAT_14cc14788;
}



// FUNCTION 14672e0d1 FUN_14672e0d1 body=35 status=ok
// SIG undefined FUN_14672e0d1(void)

void FUN_14672e0d1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb6400;
  return;
}



// FUNCTION 14672e0f4 FUN_14672e0f4 body=47 status=ok
// SIG undefined FUN_14672e0f4(void)

longlong FUN_14672e0f4(void)

{
  if (DAT_14cc147a0 == 0) {
    FUN_14073dd9a(&DAT_14cc147a0,&PTR_LAB_14bcb63b8);
  }
  return DAT_14cc147a0;
}



// FUNCTION 14672e129 FUN_14672e129 body=35 status=ok
// SIG undefined FUN_14672e129(void)

void FUN_14672e129(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb6840;
  return;
}



// FUNCTION 14672e14c FUN_14672e14c body=47 status=ok
// SIG undefined FUN_14672e14c(void)

longlong FUN_14672e14c(void)

{
  if (DAT_14cc147b8 == 0) {
    FUN_14073dd9a(&DAT_14cc147b8,&PTR_LAB_14bcb67f8);
  }
  return DAT_14cc147b8;
}



// FUNCTION 14672e181 FUN_14672e181 body=57 status=ok
// SIG undefined FUN_14672e181(void)

void FUN_14672e181(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2210c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb6c70;
  puVar1[7] = &PTR_FUN_14bcb6f60;
  puVar1[8] = &PTR_FUN_14bcb6fa0;
  return;
}



// FUNCTION 14672e1ba FUN_14672e1ba body=47 status=ok
// SIG undefined FUN_14672e1ba(void)

longlong FUN_14672e1ba(void)

{
  if (DAT_14cc147d0 == 0) {
    FUN_14073dd9a(&DAT_14cc147d0,&PTR_LAB_14bcb6c28);
  }
  return DAT_14cc147d0;
}



// FUNCTION 14672e1e9 FUN_14672e1e9 body=46 status=ok
// SIG undefined FUN_14672e1e9(void)

void FUN_14672e1e9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2210c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb7310;
  puVar1[7] = &PTR_FUN_14bcb7600;
  return;
}



// FUNCTION 14672e217 FUN_14672e217 body=47 status=ok
// SIG undefined FUN_14672e217(void)

longlong FUN_14672e217(void)

{
  if (DAT_14cc147f8 == 0) {
    FUN_14073dd9a(&DAT_14cc147f8,&PTR_LAB_14bcb72c8);
  }
  return DAT_14cc147f8;
}



// FUNCTION 14672e246 FUN_14672e246 body=47 status=ok
// SIG undefined FUN_14672e246(void)

longlong FUN_14672e246(void)

{
  if (DAT_14cc14820 == 0) {
    FUN_14073dd9a(&DAT_14cc14820,&PTR_LAB_14bcb7808);
  }
  return DAT_14cc14820;
}



// FUNCTION 14672e275 FUN_14672e275 body=46 status=ok
// SIG undefined FUN_14672e275(void)

void FUN_14672e275(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2210c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb81b0;
  puVar1[7] = &PTR_FUN_14bcb84a0;
  return;
}



// FUNCTION 14672e2a3 FUN_14672e2a3 body=47 status=ok
// SIG undefined FUN_14672e2a3(void)

longlong FUN_14672e2a3(void)

{
  if (DAT_14cc148a8 == 0) {
    FUN_14073dd9a(&DAT_14cc148a8,&PTR_LAB_14bcb8168);
  }
  return DAT_14cc148a8;
}



// FUNCTION 14672e2d2 FUN_14672e2d2 body=46 status=ok
// SIG undefined FUN_14672e2d2(void)

void FUN_14672e2d2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2210c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb86a0;
  puVar1[7] = &PTR_FUN_14bcb8990;
  return;
}



// FUNCTION 14672e300 FUN_14672e300 body=47 status=ok
// SIG undefined FUN_14672e300(void)

longlong FUN_14672e300(void)

{
  if (DAT_14cc148d0 == 0) {
    FUN_14073dd9a(&DAT_14cc148d0,&PTR_LAB_14bcb8658);
  }
  return DAT_14cc148d0;
}



// FUNCTION 14672e330 FUN_14672e330 body=40 status=ok
// SIG undefined FUN_14672e330(void)

undefined8 FUN_14672e330(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e358 FUN_14672e358 body=40 status=ok
// SIG undefined FUN_14672e358(void)

undefined8 FUN_14672e358(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e380 FUN_14672e380 body=40 status=ok
// SIG undefined FUN_14672e380(void)

undefined8 FUN_14672e380(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e3a8 FUN_14672e3a8 body=40 status=ok
// SIG undefined FUN_14672e3a8(void)

undefined8 FUN_14672e3a8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e3d0 FUN_14672e3d0 body=40 status=ok
// SIG undefined FUN_14672e3d0(void)

undefined8 FUN_14672e3d0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e3f8 FUN_14672e3f8 body=40 status=ok
// SIG undefined FUN_14672e3f8(void)

undefined8 FUN_14672e3f8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e420 FUN_14672e420 body=40 status=ok
// SIG undefined FUN_14672e420(void)

undefined8 FUN_14672e420(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e448 FUN_14672e448 body=40 status=ok
// SIG undefined FUN_14672e448(void)

undefined8 FUN_14672e448(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e470 FUN_14672e470 body=40 status=ok
// SIG undefined FUN_14672e470(void)

undefined8 FUN_14672e470(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e498 FUN_14672e498 body=40 status=ok
// SIG undefined FUN_14672e498(void)

undefined8 FUN_14672e498(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e4c0 FUN_14672e4c0 body=40 status=ok
// SIG undefined FUN_14672e4c0(void)

undefined8 FUN_14672e4c0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e4e8 FUN_14672e4e8 body=40 status=ok
// SIG undefined FUN_14672e4e8(void)

undefined8 FUN_14672e4e8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e510 FUN_14672e510 body=40 status=ok
// SIG undefined FUN_14672e510(void)

undefined8 FUN_14672e510(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e538 FUN_14672e538 body=91 status=ok
// SIG undefined FUN_14672e538(void)

void FUN_14672e538(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b0e54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcb91f0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0xffffffff00000000;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  return;
}



// FUNCTION 14672e593 FUN_14672e593 body=47 status=ok
// SIG undefined FUN_14672e593(void)

longlong FUN_14672e593(void)

{
  if (DAT_14cc14968 == 0) {
    FUN_14073dd9a(&DAT_14cc14968,&PTR_LAB_14bcb91a8);
  }
  return DAT_14cc14968;
}



// FUNCTION 14672e5c7 FUN_14672e5c7 body=46 status=ok
// SIG undefined FUN_14672e5c7(void)

void FUN_14672e5c7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c2210c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcba3f0;
  puVar1[7] = &PTR_FUN_14bcba6e0;
  return;
}



// FUNCTION 14672e5f5 FUN_14672e5f5 body=47 status=ok
// SIG undefined FUN_14672e5f5(void)

longlong FUN_14672e5f5(void)

{
  if (DAT_14cc14980 == 0) {
    FUN_14073dd9a(&DAT_14cc14980,&PTR_LAB_14bcba3a8);
  }
  return DAT_14cc14980;
}



// FUNCTION 14672e629 FUN_14672e629 body=47 status=ok
// SIG undefined FUN_14672e629(void)

longlong FUN_14672e629(void)

{
  if (DAT_14cc149b0 == 0) {
    FUN_14073dd9a(&DAT_14cc149b0,&PTR_LAB_14bcbad68);
  }
  return DAT_14cc149b0;
}



// FUNCTION 14672e658 FUN_14672e658 body=47 status=ok
// SIG undefined FUN_14672e658(void)

longlong FUN_14672e658(void)

{
  if (DAT_14cc149c8 == 0) {
    FUN_14073dd9a(&DAT_14cc149c8,&PTR_LAB_14bcbb128);
  }
  return DAT_14cc149c8;
}



// FUNCTION 14672e688 FUN_14672e688 body=40 status=ok
// SIG undefined FUN_14672e688(void)

undefined8 FUN_14672e688(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e6b0 FUN_14672e6b0 body=40 status=ok
// SIG undefined FUN_14672e6b0(void)

undefined8 FUN_14672e6b0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672e6d8 FUN_14672e6d8 body=47 status=ok
// SIG undefined FUN_14672e6d8(void)

longlong FUN_14672e6d8(void)

{
  if (DAT_14cc14ac0 == 0) {
    FUN_1409ce572(&DAT_14cc14ac0,&PTR_FUN_14bcbb840);
  }
  return DAT_14cc14ac0;
}



// FUNCTION 14672e707 FUN_14672e707 body=47 status=ok
// SIG undefined FUN_14672e707(void)

longlong FUN_14672e707(void)

{
  if (DAT_14cc14ad8 == 0) {
    FUN_1409ce572(&DAT_14cc14ad8,&PTR_FUN_14bcbb8e0);
  }
  return DAT_14cc14ad8;
}



// FUNCTION 14672e736 FUN_14672e736 body=94 status=ok
// SIG undefined FUN_14672e736(void)

void FUN_14672e736(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1412b486a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcbbf90;
  *(undefined4 *)(puVar1 + 0x29) = 0x1010100;
  *(undefined2 *)((longlong)puVar1 + 0x14c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x14e) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x154) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x156) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x15b) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x157) = 0;
  return;
}



// FUNCTION 14672e799 FUN_14672e799 body=47 status=ok
// SIG undefined FUN_14672e799(void)

longlong FUN_14672e799(void)

{
  if (DAT_14cc14af8 == 0) {
    FUN_14073dd9a(&DAT_14cc14af8,&PTR_LAB_14bcbbf48);
  }
  return DAT_14cc14af8;
}



// FUNCTION 14672e7c8 FUN_14672e7c8 body=69 status=ok
// SIG undefined FUN_14672e7c8(void)

void FUN_14672e7c8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1412b486a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcbc580;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14c) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x154) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
  return;
}



// FUNCTION 14672e813 FUN_14672e813 body=47 status=ok
// SIG undefined FUN_14672e813(void)

longlong FUN_14672e813(void)

{
  if (DAT_14cc14b10 == 0) {
    FUN_14073dd9a(&DAT_14cc14b10,&PTR_LAB_14bcbc538);
  }
  return DAT_14cc14b10;
}



// FUNCTION 14672e842 FUN_14672e842 body=85 status=ok
// SIG undefined FUN_14672e842(void)

void FUN_14672e842(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcbcaf0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 1;
  return;
}



// FUNCTION 14672e897 FUN_14672e897 body=47 status=ok
// SIG undefined FUN_14672e897(void)

longlong FUN_14672e897(void)

{
  if (DAT_14cc14b28 == 0) {
    FUN_14073dd9a(&DAT_14cc14b28,&PTR_LAB_14bcbcab0);
  }
  return DAT_14cc14b28;
}



// FUNCTION 14672e8c6 FUN_14672e8c6 body=47 status=ok
// SIG undefined FUN_14672e8c6(void)

longlong FUN_14672e8c6(void)

{
  if (DAT_14cc14b40 == 0) {
    FUN_14073dd9a(&DAT_14cc14b40,&PTR_LAB_14bcbce48);
  }
  return DAT_14cc14b40;
}



// FUNCTION 14672e8f5 FUN_14672e8f5 body=47 status=ok
// SIG undefined FUN_14672e8f5(void)

longlong FUN_14672e8f5(void)

{
  if (DAT_14cc14bb0 == 0) {
    FUN_14073dd9a(&DAT_14cc14bb0,&PTR_LAB_14bcbd768);
  }
  return DAT_14cc14bb0;
}



// FUNCTION 14672e924 FUN_14672e924 body=47 status=ok
// SIG undefined FUN_14672e924(void)

longlong FUN_14672e924(void)

{
  if (DAT_14cc14bc8 == 0) {
    FUN_14073dd9a(&DAT_14cc14bc8,&PTR_LAB_14bcbdac8);
  }
  return DAT_14cc14bc8;
}



// FUNCTION 14672e953 FUN_14672e953 body=47 status=ok
// SIG undefined FUN_14672e953(void)

longlong FUN_14672e953(void)

{
  if (DAT_14cc14bf8 == 0) {
    FUN_1409ce572(&DAT_14cc14bf8,&PTR_FUN_14bcbdf20);
  }
  return DAT_14cc14bf8;
}



// FUNCTION 14672e987 FUN_14672e987 body=47 status=ok
// SIG undefined FUN_14672e987(void)

longlong FUN_14672e987(void)

{
  if (DAT_14cc14c18 == 0) {
    FUN_14073dd9a(&DAT_14cc14c18,&PTR_LAB_14bcbe828);
  }
  return DAT_14cc14c18;
}



// FUNCTION 14672e9bb FUN_14672e9bb body=47 status=ok
// SIG undefined FUN_14672e9bb(void)

longlong FUN_14672e9bb(void)

{
  if (DAT_14cc15468 == 0) {
    FUN_14073dd9a(&DAT_14cc15468,&PTR_LAB_14bcbf578);
  }
  return DAT_14cc15468;
}



// FUNCTION 14672e9ea FUN_14672e9ea body=47 status=ok
// SIG undefined FUN_14672e9ea(void)

longlong FUN_14672e9ea(void)

{
  if (DAT_14cc154b0 == 0) {
    FUN_1409ce572(&DAT_14cc154b0,&PTR_FUN_14bcc00e0);
  }
  return DAT_14cc154b0;
}



// FUNCTION 14672ea19 FUN_14672ea19 body=47 status=ok
// SIG undefined FUN_14672ea19(void)

longlong FUN_14672ea19(void)

{
  if (DAT_14cc154c8 == 0) {
    FUN_1409ce572(&DAT_14cc154c8,&PTR_FUN_14bcc0190);
  }
  return DAT_14cc154c8;
}



// FUNCTION 14672ea48 FUN_14672ea48 body=47 status=ok
// SIG undefined FUN_14672ea48(void)

longlong FUN_14672ea48(void)

{
  if (DAT_14cc154e8 == 0) {
    FUN_14073dd9a(&DAT_14cc154e8,&PTR_LAB_14bcc0618);
  }
  return DAT_14cc154e8;
}



// FUNCTION 14672ea78 FUN_14672ea78 body=40 status=ok
// SIG undefined FUN_14672ea78(void)

undefined8 FUN_14672ea78(undefined8 param_1,int param_2)

{
  FUN_1410aba6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672eaa0 FUN_14672eaa0 body=40 status=ok
// SIG undefined FUN_14672eaa0(void)

undefined8 FUN_14672eaa0(undefined8 param_1,int param_2)

{
  FUN_1410aba6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672eac8 FUN_14672eac8 body=72 status=ok
// SIG undefined FUN_14672eac8(void)

undefined8 * FUN_14672eac8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcbce90;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1410aba6a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672eb10 FUN_14672eb10 body=40 status=ok
// SIG undefined FUN_14672eb10(void)

undefined8 FUN_14672eb10(undefined8 param_1,int param_2)

{
  FUN_1410aba6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672eb38 FUN_14672eb38 body=47 status=ok
// SIG undefined FUN_14672eb38(void)

longlong FUN_14672eb38(void)

{
  if (DAT_14cc15db8 == 0) {
    FUN_14073dd9a(&DAT_14cc15db8,&PTR_LAB_14bcc6aa0);
  }
  return DAT_14cc15db8;
}



// FUNCTION 14672eb67 FUN_14672eb67 body=47 status=ok
// SIG undefined FUN_14672eb67(void)

longlong FUN_14672eb67(void)

{
  if (DAT_14cc15da0 == 0) {
    FUN_14000fc22(&DAT_14cc15da0,&PTR_FUN_14bcc5b28);
  }
  return DAT_14cc15da0;
}



// FUNCTION 14672eb96 FUN_14672eb96 body=47 status=ok
// SIG undefined FUN_14672eb96(void)

longlong FUN_14672eb96(void)

{
  if (DAT_14cc15da8 == 0) {
    FUN_14000fc22(&DAT_14cc15da8,&PTR_FUN_14bcc5bf0);
  }
  return DAT_14cc15da8;
}



// FUNCTION 14672ebc6 FUN_14672ebc6 body=34 status=ok
// SIG undefined FUN_14672ebc6(void)

void FUN_14672ebc6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14595e92a();
  FUN_14069c8d6(uVar1,&PTR_s_GetCombineSkeletalMeshes_14bcc5c30,2);
  return;
}



// FUNCTION 14672ebed FUN_14672ebed body=47 status=ok
// SIG undefined FUN_14672ebed(void)

longlong FUN_14672ebed(void)

{
  if (DAT_14cc15dc8 == 0) {
    FUN_1409ce572(&DAT_14cc15dc8,&PTR_FUN_14bcc6e70);
  }
  return DAT_14cc15dc8;
}



// FUNCTION 14672ec1c FUN_14672ec1c body=75 status=ok
// SIG undefined FUN_14672ec1c(void)

void FUN_14672ec1c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1412b486a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcc72f0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x156) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x15e) = 1;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  return;
}



// FUNCTION 14672ec67 FUN_14672ec67 body=47 status=ok
// SIG undefined FUN_14672ec67(void)

longlong FUN_14672ec67(void)

{
  if (DAT_14cc15de8 == 0) {
    FUN_14073dd9a(&DAT_14cc15de8,&PTR_LAB_14bcc72a8);
  }
  return DAT_14cc15de8;
}



// FUNCTION 14672ec9b FUN_14672ec9b body=47 status=ok
// SIG undefined FUN_14672ec9b(void)

longlong FUN_14672ec9b(void)

{
  if (DAT_14cc15e08 == 0) {
    FUN_14073dd9a(&DAT_14cc15e08,&PTR_LAB_14bcc78b8);
  }
  return DAT_14cc15e08;
}



// FUNCTION 14672ecca FUN_14672ecca body=47 status=ok
// SIG undefined FUN_14672ecca(void)

longlong FUN_14672ecca(void)

{
  if (DAT_14cc16c00 == 0) {
    FUN_14086a14e(&DAT_14cc16c00,&PTR_FUN_14bcc8368);
  }
  return DAT_14cc16c00;
}



// FUNCTION 14672ecfa FUN_14672ecfa body=43 status=ok
// SIG undefined FUN_14672ecfa(void)

void FUN_14672ecfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bcca2c0;
  return;
}



// FUNCTION 14672ed26 FUN_14672ed26 body=55 status=ok
// SIG undefined FUN_14672ed26(void)

void FUN_14672ed26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc16c20 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc16c20 = FUN_140002ddd(FUN_14672ed5d,uVar1,L"InterchangeMeshInstance");
  }
  return;
}



// FUNCTION 14672ed5d FUN_14672ed5d body=47 status=ok
// SIG undefined FUN_14672ed5d(void)

longlong FUN_14672ed5d(void)

{
  if (DAT_14cc16c18 == 0) {
    FUN_14086a14e(&DAT_14cc16c18,&PTR_FUN_14bcc8758);
  }
  return DAT_14cc16c18;
}



// FUNCTION 14672ed8c FUN_14672ed8c body=43 status=ok
// SIG undefined FUN_14672ed8c(void)

void FUN_14672ed8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14bcca420;
  return;
}



// FUNCTION 14672edb8 FUN_14672edb8 body=55 status=ok
// SIG undefined FUN_14672edb8(void)

void FUN_14672edb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc16c38 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc16c38 = FUN_140002ddd(FUN_14672edef,uVar1,L"InterchangeMeshGeometry");
  }
  return;
}



// FUNCTION 14672edef FUN_14672edef body=47 status=ok
// SIG undefined FUN_14672edef(void)

longlong FUN_14672edef(void)

{
  if (DAT_14cc16c30 == 0) {
    FUN_14086a14e(&DAT_14cc16c30,&PTR_FUN_14bcc89b8);
  }
  return DAT_14cc16c30;
}



// FUNCTION 14672ee1e FUN_14672ee1e body=43 status=ok
// SIG undefined FUN_14672ee1e(void)

void FUN_14672ee1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bcca580;
  return;
}


