// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146288830 FUN_146288830 body=40 status=ok
// SIG undefined FUN_146288830(void)

undefined8 FUN_146288830(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146288858 FUN_146288858 body=40 status=ok
// SIG undefined FUN_146288858(void)

undefined8 FUN_146288858(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146288880 FUN_146288880 body=40 status=ok
// SIG undefined FUN_146288880(void)

undefined8 FUN_146288880(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462888a8 FUN_1462888a8 body=40 status=ok
// SIG undefined FUN_1462888a8(void)

undefined8 FUN_1462888a8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462888d0 FUN_1462888d0 body=29 status=ok
// SIG undefined FUN_1462888d0(void)

undefined8 FUN_1462888d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462888ee FUN_1462888ee body=29 status=ok
// SIG undefined FUN_1462888ee(void)

undefined8 FUN_1462888ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628890c FUN_14628890c body=29 status=ok
// SIG undefined FUN_14628890c(void)

undefined8 FUN_14628890c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628892a FUN_14628892a body=93 status=ok
// SIG undefined FUN_14628892a(void)

void FUN_14628892a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f75f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146288987 FUN_146288987 body=47 status=ok
// SIG undefined FUN_146288987(void)

longlong FUN_146288987(void)

{
  if (DAT_14c997da8 == 0) {
    FUN_1409ce572(&DAT_14c997da8,&PTR_FUN_149f76260);
  }
  return DAT_14c997da8;
}



// FUNCTION 1462889b6 FUN_1462889b6 body=47 status=ok
// SIG undefined FUN_1462889b6(void)

longlong FUN_1462889b6(void)

{
  if (DAT_14c997dc0 == 0) {
    FUN_1409ce572(&DAT_14c997dc0,&PTR_FUN_149f762e0);
  }
  return DAT_14c997dc0;
}



// FUNCTION 1462889e5 FUN_1462889e5 body=47 status=ok
// SIG undefined FUN_1462889e5(void)

longlong FUN_1462889e5(void)

{
  if (DAT_14c997de0 == 0) {
    FUN_14086a14e(&DAT_14c997de0,&PTR_FUN_149f76448);
  }
  return DAT_14c997de0;
}



// FUNCTION 146288a14 FUN_146288a14 body=48 status=ok
// SIG undefined FUN_146288a14(void)

void FUN_146288a14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_149f7b330;
  return;
}



// FUNCTION 146288a44 FUN_146288a44 body=42 status=ok
// SIG undefined FUN_146288a44(void)

void FUN_146288a44(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f765c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146288a6e FUN_146288a6e body=47 status=ok
// SIG undefined FUN_146288a6e(void)

longlong FUN_146288a6e(void)

{
  if (DAT_14c997e00 == 0) {
    FUN_14073dd9a(&DAT_14c997e00,&PTR_LAB_149f76578);
  }
  return DAT_14c997e00;
}



// FUNCTION 146288a9e FUN_146288a9e body=55 status=ok
// SIG undefined FUN_146288a9e(void)

void FUN_146288a9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c997e18 == 0) {
    uVar1 = FUN_141298036();
    DAT_14c997e18 = FUN_140002ddd(FUN_146288ad5,uVar1,L"EscalationState");
  }
  return;
}



// FUNCTION 146288ad5 FUN_146288ad5 body=47 status=ok
// SIG undefined FUN_146288ad5(void)

longlong FUN_146288ad5(void)

{
  if (DAT_14c997e10 == 0) {
    FUN_14086a14e(&DAT_14c997e10,&PTR_FUN_149f76af8);
  }
  return DAT_14c997e10;
}



// FUNCTION 146288b04 FUN_146288b04 body=47 status=ok
// SIG undefined FUN_146288b04(void)

longlong FUN_146288b04(void)

{
  if (DAT_14c997e70 == 0) {
    FUN_14086a14e(&DAT_14c997e70,&PTR_FUN_149f79d70);
  }
  return DAT_14c997e70;
}



// FUNCTION 146288b34 FUN_146288b34 body=48 status=ok
// SIG undefined FUN_146288b34(void)

void FUN_146288b34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_149f7b490;
  return;
}



// FUNCTION 146288b64 FUN_146288b64 body=66 status=ok
// SIG undefined FUN_146288b64(void)

void FUN_146288b64(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *puVar1 = &PTR_FUN_149f76c60;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 146288ba6 FUN_146288ba6 body=47 status=ok
// SIG undefined FUN_146288ba6(void)

longlong FUN_146288ba6(void)

{
  if (DAT_14c997e90 == 0) {
    FUN_14073dd9a(&DAT_14c997e90,&PTR_LAB_149f79e98);
  }
  return DAT_14c997e90;
}



// FUNCTION 146288bd5 FUN_146288bd5 body=47 status=ok
// SIG undefined FUN_146288bd5(void)

longlong FUN_146288bd5(void)

{
  if (DAT_14c997e30 == 0) {
    FUN_14073dd9a(&DAT_14c997e30,&PTR_LAB_149f76c18);
  }
  return DAT_14c997e30;
}



// FUNCTION 146288c04 FUN_146288c04 body=47 status=ok
// SIG undefined FUN_146288c04(void)

longlong FUN_146288c04(void)

{
  if (DAT_14c997e40 == 0) {
    FUN_1409ce572(&DAT_14c997e40,&PTR_FUN_149f77690);
  }
  return DAT_14c997e40;
}



// FUNCTION 146288c34 FUN_146288c34 body=55 status=ok
// SIG undefined FUN_146288c34(void)

void FUN_146288c34(void)

{
  undefined8 uVar1;
  
  if (DAT_14c997e60 == 0) {
    uVar1 = FUN_141298036();
    DAT_14c997e60 = FUN_140002ddd(FUN_146288c6b,uVar1,L"NetFaultState");
  }
  return;
}



// FUNCTION 146288c6b FUN_146288c6b body=47 status=ok
// SIG undefined FUN_146288c6b(void)

longlong FUN_146288c6b(void)

{
  if (DAT_14c997e58 == 0) {
    FUN_14086a14e(&DAT_14c997e58,&PTR_FUN_149f79c10);
  }
  return DAT_14c997e58;
}



// FUNCTION 146288c9a FUN_146288c9a body=48 status=ok
// SIG undefined FUN_146288c9a(void)

void FUN_146288c9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_149f7c790;
  return;
}



// FUNCTION 146288cca FUN_146288cca body=55 status=ok
// SIG undefined FUN_146288cca(void)

void FUN_146288cca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c997e78 == 0) {
    uVar1 = FUN_141298036();
    DAT_14c997e78 = FUN_140002ddd(FUN_146288b04,uVar1,L"StateStruct");
  }
  return;
}



// FUNCTION 146288d02 FUN_146288d02 body=48 status=ok
// SIG undefined FUN_146288d02(void)

void FUN_146288d02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f7c8f0;
  return;
}



// FUNCTION 146288d32 FUN_146288d32 body=58 status=ok
// SIG undefined FUN_146288d32(void)

void FUN_146288d32(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f79ee0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 146288d6c FUN_146288d6c body=231 status=ok
// SIG undefined FUN_146288d6c(void)

void FUN_146288d6c(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_149f7d0e0;
  local_28[3] = &DAT_14c997f50;
  local_28[4] = FUN_146f01184;
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



// FUNCTION 146288e54 FUN_146288e54 body=57 status=ok
// SIG undefined FUN_146288e54(void)

void FUN_146288e54(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9981a8 == 0) {
    uVar1 = FUN_141298036();
    DAT_14c9981a8 = FUN_140002ddd(FUN_146288e8d,uVar1,L"FastArraySerializerItem");
  }
  return;
}



// FUNCTION 146288e8d FUN_146288e8d body=49 status=ok
// SIG undefined FUN_146288e8d(void)

longlong FUN_146288e8d(void)

{
  if (DAT_14c9981a0 == 0) {
    FUN_14086a14e(&DAT_14c9981a0,&PTR_FUN_149f7ad90);
  }
  return DAT_14c9981a0;
}



// FUNCTION 146288ebe FUN_146288ebe body=48 status=ok
// SIG undefined FUN_146288ebe(void)

void FUN_146288ebe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_149f7cb60;
  return;
}



// FUNCTION 146288eee FUN_146288eee body=47 status=ok
// SIG undefined FUN_146288eee(void)

longlong FUN_146288eee(void)

{
  if (DAT_14c9981b8 == 0) {
    FUN_1409ce572(&DAT_14c9981b8,&PTR_FUN_149f7ae30);
  }
  return DAT_14c9981b8;
}



// FUNCTION 146288f1e FUN_146288f1e body=57 status=ok
// SIG undefined FUN_146288f1e(void)

void FUN_146288f1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9981d8 == 0) {
    uVar1 = FUN_141298036();
    DAT_14c9981d8 = FUN_140002ddd(FUN_146288f57,uVar1,L"FastArraySerializer");
  }
  return;
}



// FUNCTION 146288f57 FUN_146288f57 body=49 status=ok
// SIG undefined FUN_146288f57(void)

longlong FUN_146288f57(void)

{
  if (DAT_14c9981d0 == 0) {
    FUN_14086a14e(&DAT_14c9981d0,&PTR_FUN_149f7afa0);
  }
  return DAT_14c9981d0;
}



// FUNCTION 146288f88 FUN_146288f88 body=48 status=ok
// SIG undefined FUN_146288f88(void)

void FUN_146288f88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000110;
  *puVar1 = &PTR_FUN_149f7cde0;
  return;
}



// FUNCTION 146288fb8 FUN_146288fb8 body=69 status=ok
// SIG undefined FUN_146288fb8(void)

undefined8 * FUN_146288fb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f765c0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146288ffe FUN_146288ffe body=40 status=ok
// SIG undefined FUN_146288ffe(void)

undefined8 FUN_146288ffe(undefined8 param_1,int param_2)

{
  FUN_1413e0d14();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146289026 FUN_146289026 body=29 status=ok
// SIG undefined FUN_146289026(void)

undefined8 FUN_146289026(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146289044 FUN_146289044 body=29 status=ok
// SIG undefined FUN_146289044(void)

undefined8 FUN_146289044(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146289062 FUN_146289062 body=29 status=ok
// SIG undefined FUN_146289062(void)

undefined8 FUN_146289062(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146289080 FUN_146289080 body=29 status=ok
// SIG undefined FUN_146289080(void)

undefined8 FUN_146289080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628909e FUN_14628909e body=29 status=ok
// SIG undefined FUN_14628909e(void)

undefined8 FUN_14628909e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462890bc FUN_1462890bc body=29 status=ok
// SIG undefined FUN_1462890bc(void)

undefined8 FUN_1462890bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462890da FUN_1462890da body=93 status=ok
// SIG undefined FUN_1462890da(void)

void FUN_1462890da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7d0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146289137 FUN_146289137 body=47 status=ok
// SIG undefined FUN_146289137(void)

longlong FUN_146289137(void)

{
  if (DAT_14c998250 == 0) {
    FUN_14086a14e(&DAT_14c998250,&PTR_FUN_149f7d6a8);
  }
  return DAT_14c998250;
}



// FUNCTION 146289166 FUN_146289166 body=48 status=ok
// SIG undefined FUN_146289166(void)

void FUN_146289166(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149f7ea50;
  return;
}



// FUNCTION 146289196 FUN_146289196 body=35 status=ok
// SIG undefined FUN_146289196(void)

void FUN_146289196(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f7d780;
  return;
}



// FUNCTION 1462891b9 FUN_1462891b9 body=47 status=ok
// SIG undefined FUN_1462891b9(void)

longlong FUN_1462891b9(void)

{
  if (DAT_14c998270 == 0) {
    FUN_14073dd9a(&DAT_14c998270,&PTR_LAB_149f7d738);
  }
  return DAT_14c998270;
}



// FUNCTION 1462891e8 FUN_1462891e8 body=40 status=ok
// SIG undefined FUN_1462891e8(void)

undefined8 FUN_1462891e8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146289210 FUN_146289210 body=29 status=ok
// SIG undefined FUN_146289210(void)

undefined8 FUN_146289210(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628922d FUN_14628922d body=47 status=ok
// SIG undefined FUN_14628922d(void)

longlong FUN_14628922d(void)

{
  if (DAT_14c998288 == 0) {
    FUN_1409ce572(&DAT_14c998288,&PTR_FUN_149f7ed20);
  }
  return DAT_14c998288;
}



// FUNCTION 14628925c FUN_14628925c body=35 status=ok
// SIG undefined FUN_14628925c(void)

void FUN_14628925c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f7edd0;
  return;
}



// FUNCTION 14628927f FUN_14628927f body=49 status=ok
// SIG undefined FUN_14628927f(void)

longlong FUN_14628927f(void)

{
  if (DAT_14c9982a8 == 0) {
    FUN_14073dd9a(&DAT_14c9982a8,&PTR_LAB_149f7ed88);
  }
  return DAT_14c9982a8;
}



// FUNCTION 1462892b0 FUN_1462892b0 body=55 status=ok
// SIG undefined FUN_1462892b0(void)

void FUN_1462892b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9982c0 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9982c0 = FUN_140002ddd(FUN_1462892e7,uVar1,L"DataStreamDefinition");
  }
  return;
}



// FUNCTION 1462892e7 FUN_1462892e7 body=47 status=ok
// SIG undefined FUN_1462892e7(void)

longlong FUN_1462892e7(void)

{
  if (DAT_14c9982b8 == 0) {
    FUN_14086a14e(&DAT_14c9982b8,&PTR_FUN_149f7f348);
  }
  return DAT_14c9982b8;
}



// FUNCTION 146289316 FUN_146289316 body=43 status=ok
// SIG undefined FUN_146289316(void)

void FUN_146289316(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149f89500;
  return;
}



// FUNCTION 146289341 FUN_146289341 body=47 status=ok
// SIG undefined FUN_146289341(void)

longlong FUN_146289341(void)

{
  if (DAT_14c9982d8 == 0) {
    FUN_14073dd9a(&DAT_14c9982d8,&PTR_LAB_149f7f468);
  }
  return DAT_14c9982d8;
}



// FUNCTION 146289370 FUN_146289370 body=47 status=ok
// SIG undefined FUN_146289370(void)

longlong FUN_146289370(void)

{
  if (DAT_14c9982f0 == 0) {
    FUN_14073dd9a(&DAT_14c9982f0,&PTR_LAB_149f7f7e8);
  }
  return DAT_14c9982f0;
}



// FUNCTION 1462893a0 FUN_1462893a0 body=55 status=ok
// SIG undefined FUN_1462893a0(void)

void FUN_1462893a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998308 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998308 = FUN_140002ddd(FUN_1462893d7,uVar1,L"DateTimeNetSerializerConfig");
  }
  return;
}



// FUNCTION 1462893d7 FUN_1462893d7 body=47 status=ok
// SIG undefined FUN_1462893d7(void)

longlong FUN_1462893d7(void)

{
  if (DAT_14c998300 == 0) {
    FUN_14086a14e(&DAT_14c998300,&PTR_FUN_149f7fb80);
  }
  return DAT_14c998300;
}



// FUNCTION 146289406 FUN_146289406 body=43 status=ok
// SIG undefined FUN_146289406(void)

void FUN_146289406(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f89660;
  return;
}



// FUNCTION 146289432 FUN_146289432 body=55 status=ok
// SIG undefined FUN_146289432(void)

void FUN_146289432(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998320 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998320 = FUN_140002ddd(FUN_146289469,uVar1,L"EnumInt8NetSerializerConfig");
  }
  return;
}



// FUNCTION 146289469 FUN_146289469 body=47 status=ok
// SIG undefined FUN_146289469(void)

longlong FUN_146289469(void)

{
  if (DAT_14c998318 == 0) {
    FUN_14086a14e(&DAT_14c998318,&PTR_FUN_149f7fd18);
  }
  return DAT_14c998318;
}



// FUNCTION 146289498 FUN_146289498 body=43 status=ok
// SIG undefined FUN_146289498(void)

void FUN_146289498(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149f897d0;
  return;
}



// FUNCTION 1462894c4 FUN_1462894c4 body=55 status=ok
// SIG undefined FUN_1462894c4(void)

void FUN_1462894c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998338 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998338 = FUN_140002ddd(FUN_1462894fb,uVar1,L"EnumInt16NetSerializerConfig");
  }
  return;
}



// FUNCTION 1462894fb FUN_1462894fb body=47 status=ok
// SIG undefined FUN_1462894fb(void)

longlong FUN_1462894fb(void)

{
  if (DAT_14c998330 == 0) {
    FUN_14086a14e(&DAT_14c998330,&PTR_FUN_149f7fe78);
  }
  return DAT_14c998330;
}



// FUNCTION 14628952a FUN_14628952a body=43 status=ok
// SIG undefined FUN_14628952a(void)

void FUN_14628952a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149f89940;
  return;
}



// FUNCTION 146289556 FUN_146289556 body=55 status=ok
// SIG undefined FUN_146289556(void)

void FUN_146289556(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998350 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998350 = FUN_140002ddd(FUN_14628958d,uVar1,L"EnumInt32NetSerializerConfig");
  }
  return;
}



// FUNCTION 14628958d FUN_14628958d body=47 status=ok
// SIG undefined FUN_14628958d(void)

longlong FUN_14628958d(void)

{
  if (DAT_14c998348 == 0) {
    FUN_14086a14e(&DAT_14c998348,&PTR_FUN_149f7ffd8);
  }
  return DAT_14c998348;
}



// FUNCTION 1462895bc FUN_1462895bc body=43 status=ok
// SIG undefined FUN_1462895bc(void)

void FUN_1462895bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_149f89ab0;
  return;
}



// FUNCTION 1462895e8 FUN_1462895e8 body=55 status=ok
// SIG undefined FUN_1462895e8(void)

void FUN_1462895e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998368 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998368 = FUN_140002ddd(FUN_14628961f,uVar1,L"EnumInt64NetSerializerConfig");
  }
  return;
}



// FUNCTION 14628961f FUN_14628961f body=47 status=ok
// SIG undefined FUN_14628961f(void)

longlong FUN_14628961f(void)

{
  if (DAT_14c998360 == 0) {
    FUN_14086a14e(&DAT_14c998360,&PTR_FUN_149f80138);
  }
  return DAT_14c998360;
}



// FUNCTION 14628964e FUN_14628964e body=43 status=ok
// SIG undefined FUN_14628964e(void)

void FUN_14628964e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_149f89c20;
  return;
}



// FUNCTION 14628967a FUN_14628967a body=55 status=ok
// SIG undefined FUN_14628967a(void)

void FUN_14628967a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998380 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998380 = FUN_140002ddd(FUN_1462896b1,uVar1,L"EnumUint8NetSerializerConfig");
  }
  return;
}



// FUNCTION 1462896b1 FUN_1462896b1 body=47 status=ok
// SIG undefined FUN_1462896b1(void)

longlong FUN_1462896b1(void)

{
  if (DAT_14c998378 == 0) {
    FUN_14086a14e(&DAT_14c998378,&PTR_FUN_149f802a8);
  }
  return DAT_14c998378;
}



// FUNCTION 1462896e0 FUN_1462896e0 body=43 status=ok
// SIG undefined FUN_1462896e0(void)

void FUN_1462896e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149f89d90;
  return;
}



// FUNCTION 14628970c FUN_14628970c body=55 status=ok
// SIG undefined FUN_14628970c(void)

void FUN_14628970c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998398 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998398 = FUN_140002ddd(FUN_146289743,uVar1,L"EnumUint16NetSerializerConfig");
  }
  return;
}



// FUNCTION 146289743 FUN_146289743 body=47 status=ok
// SIG undefined FUN_146289743(void)

longlong FUN_146289743(void)

{
  if (DAT_14c998390 == 0) {
    FUN_14086a14e(&DAT_14c998390,&PTR_FUN_149f80408);
  }
  return DAT_14c998390;
}



// FUNCTION 146289772 FUN_146289772 body=43 status=ok
// SIG undefined FUN_146289772(void)

void FUN_146289772(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149f89f00;
  return;
}



// FUNCTION 14628979e FUN_14628979e body=55 status=ok
// SIG undefined FUN_14628979e(void)

void FUN_14628979e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9983b0 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9983b0 = FUN_140002ddd(FUN_1462897d5,uVar1,L"EnumUint32NetSerializerConfig");
  }
  return;
}



// FUNCTION 1462897d5 FUN_1462897d5 body=47 status=ok
// SIG undefined FUN_1462897d5(void)

longlong FUN_1462897d5(void)

{
  if (DAT_14c9983a8 == 0) {
    FUN_14086a14e(&DAT_14c9983a8,&PTR_FUN_149f80568);
  }
  return DAT_14c9983a8;
}



// FUNCTION 146289804 FUN_146289804 body=43 status=ok
// SIG undefined FUN_146289804(void)

void FUN_146289804(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_149f8a070;
  return;
}



// FUNCTION 146289830 FUN_146289830 body=55 status=ok
// SIG undefined FUN_146289830(void)

void FUN_146289830(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9983c8 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9983c8 = FUN_140002ddd(FUN_146289867,uVar1,L"EnumUint64NetSerializerConfig");
  }
  return;
}



// FUNCTION 146289867 FUN_146289867 body=47 status=ok
// SIG undefined FUN_146289867(void)

longlong FUN_146289867(void)

{
  if (DAT_14c9983c0 == 0) {
    FUN_14086a14e(&DAT_14c9983c0,&PTR_FUN_149f806c8);
  }
  return DAT_14c9983c0;
}



// FUNCTION 146289896 FUN_146289896 body=43 status=ok
// SIG undefined FUN_146289896(void)

void FUN_146289896(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_149f8a1e0;
  return;
}



// FUNCTION 1462898c1 FUN_1462898c1 body=68 status=ok
// SIG undefined FUN_1462898c1(void)

void FUN_1462898c1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f80ce0;
  puVar1[5] = 0x3f800000453b8000;
  puVar1[6] = 0x3e4ccccd461c4000;
  puVar1[7] = 0x453b800042340000;
  puVar1[8] = 0x3e4ccccd469c4000;
  puVar1[9] = 0x434800003f800000;
  puVar1[10] = 0x3dcccccd3f800000;
  return;
}



// FUNCTION 146289905 FUN_146289905 body=49 status=ok
// SIG undefined FUN_146289905(void)

longlong FUN_146289905(void)

{
  if (DAT_14c9987a0 == 0) {
    FUN_14073dd9a(&DAT_14c9987a0,&PTR_LAB_149f87418);
  }
  return DAT_14c9987a0;
}



// FUNCTION 146289936 FUN_146289936 body=47 status=ok
// SIG undefined FUN_146289936(void)

longlong FUN_146289936(void)

{
  if (DAT_14c9983e0 == 0) {
    FUN_14073dd9a(&DAT_14c9983e0,&PTR_LAB_149f80c98);
  }
  return DAT_14c9983e0;
}



// FUNCTION 146289965 FUN_146289965 body=47 status=ok
// SIG undefined FUN_146289965(void)

longlong FUN_146289965(void)

{
  if (DAT_14c9985d8 == 0) {
    FUN_14073dd9a(&DAT_14c9985d8,&PTR_LAB_149f83358);
  }
  return DAT_14c9985d8;
}



// FUNCTION 146289994 FUN_146289994 body=47 status=ok
// SIG undefined FUN_146289994(void)

longlong FUN_146289994(void)

{
  if (DAT_14c9983f8 == 0) {
    FUN_14073dd9a(&DAT_14c9983f8,&PTR_LAB_149f80fe8);
  }
  return DAT_14c9983f8;
}



// FUNCTION 1462899c3 FUN_1462899c3 body=35 status=ok
// SIG undefined FUN_1462899c3(void)

void FUN_1462899c3(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f81420;
  return;
}



// FUNCTION 1462899e6 FUN_1462899e6 body=49 status=ok
// SIG undefined FUN_1462899e6(void)

longlong FUN_1462899e6(void)

{
  if (DAT_14c9986e0 == 0) {
    FUN_14073dd9a(&DAT_14c9986e0,&PTR_LAB_149f857b8);
  }
  return DAT_14c9986e0;
}



// FUNCTION 146289a17 FUN_146289a17 body=47 status=ok
// SIG undefined FUN_146289a17(void)

longlong FUN_146289a17(void)

{
  if (DAT_14c998410 == 0) {
    FUN_14073dd9a(&DAT_14c998410,&PTR_LAB_149f813d8);
  }
  return DAT_14c998410;
}



// FUNCTION 146289a46 FUN_146289a46 body=32 status=ok
// SIG undefined FUN_146289a46(void)

void FUN_146289a46(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_14592012e(param_1);
  *param_1 = &PTR_FUN_149f81760;
  return;
}



// FUNCTION 146289a66 FUN_146289a66 body=49 status=ok
// SIG undefined FUN_146289a66(void)

longlong FUN_146289a66(void)

{
  if (DAT_14c9986f8 == 0) {
    FUN_14073dd9a(&DAT_14c9986f8,&PTR_LAB_149f85ae8);
  }
  return DAT_14c9986f8;
}



// FUNCTION 146289a97 FUN_146289a97 body=47 status=ok
// SIG undefined FUN_146289a97(void)

longlong FUN_146289a97(void)

{
  if (DAT_14c998428 == 0) {
    FUN_14073dd9a(&DAT_14c998428,&PTR_LAB_149f81718);
  }
  return DAT_14c998428;
}



// FUNCTION 146289ac6 FUN_146289ac6 body=55 status=ok
// SIG undefined FUN_146289ac6(void)

void FUN_146289ac6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998440 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998440 = FUN_140002ddd(FUN_146289afd,uVar1,L"FloatNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289afd FUN_146289afd body=47 status=ok
// SIG undefined FUN_146289afd(void)

longlong FUN_146289afd(void)

{
  if (DAT_14c998438 == 0) {
    FUN_14086a14e(&DAT_14c998438,&PTR_FUN_149f81b00);
  }
  return DAT_14c998438;
}



// FUNCTION 146289b2c FUN_146289b2c body=43 status=ok
// SIG undefined FUN_146289b2c(void)

void FUN_146289b2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8a350;
  return;
}



// FUNCTION 146289b58 FUN_146289b58 body=55 status=ok
// SIG undefined FUN_146289b58(void)

void FUN_146289b58(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998458 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998458 = FUN_140002ddd(FUN_146289b8f,uVar1,L"DoubleNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289b8f FUN_146289b8f body=47 status=ok
// SIG undefined FUN_146289b8f(void)

longlong FUN_146289b8f(void)

{
  if (DAT_14c998450 == 0) {
    FUN_14086a14e(&DAT_14c998450,&PTR_FUN_149f81b88);
  }
  return DAT_14c998450;
}



// FUNCTION 146289bbe FUN_146289bbe body=43 status=ok
// SIG undefined FUN_146289bbe(void)

void FUN_146289bbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8a4c0;
  return;
}



// FUNCTION 146289bea FUN_146289bea body=55 status=ok
// SIG undefined FUN_146289bea(void)

void FUN_146289bea(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998470 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998470 = FUN_140002ddd(FUN_146289c21,uVar1,L"GuidNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289c21 FUN_146289c21 body=47 status=ok
// SIG undefined FUN_146289c21(void)

longlong FUN_146289c21(void)

{
  if (DAT_14c998468 == 0) {
    FUN_14086a14e(&DAT_14c998468,&PTR_FUN_149f81c58);
  }
  return DAT_14c998468;
}



// FUNCTION 146289c50 FUN_146289c50 body=43 status=ok
// SIG undefined FUN_146289c50(void)

void FUN_146289c50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8a630;
  return;
}



// FUNCTION 146289c7c FUN_146289c7c body=55 status=ok
// SIG undefined FUN_146289c7c(void)

void FUN_146289c7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998488 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998488 = FUN_140002ddd(FUN_146289cb3,uVar1,L"BitfieldNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289cb3 FUN_146289cb3 body=47 status=ok
// SIG undefined FUN_146289cb3(void)

longlong FUN_146289cb3(void)

{
  if (DAT_14c998480 == 0) {
    FUN_14086a14e(&DAT_14c998480,&PTR_FUN_149f81d60);
  }
  return DAT_14c998480;
}



// FUNCTION 146289ce2 FUN_146289ce2 body=43 status=ok
// SIG undefined FUN_146289ce2(void)

void FUN_146289ce2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f8a7a0;
  return;
}



// FUNCTION 146289d0e FUN_146289d0e body=55 status=ok
// SIG undefined FUN_146289d0e(void)

void FUN_146289d0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9984a0 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9984a0 = FUN_140002ddd(FUN_146289d45,uVar1,L"ArrayPropertyNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289d45 FUN_146289d45 body=47 status=ok
// SIG undefined FUN_146289d45(void)

longlong FUN_146289d45(void)

{
  if (DAT_14c998498 == 0) {
    FUN_14086a14e(&DAT_14c998498,&PTR_FUN_149f81f00);
  }
  return DAT_14c998498;
}



// FUNCTION 146289d74 FUN_146289d74 body=43 status=ok
// SIG undefined FUN_146289d74(void)

void FUN_146289d74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_149f8a910;
  return;
}



// FUNCTION 146289da0 FUN_146289da0 body=55 status=ok
// SIG undefined FUN_146289da0(void)

void FUN_146289da0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9984b8 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9984b8 = FUN_140002ddd(FUN_146289dd7,uVar1,L"LastResortPropertyNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289dd7 FUN_146289dd7 body=47 status=ok
// SIG undefined FUN_146289dd7(void)

longlong FUN_146289dd7(void)

{
  if (DAT_14c9984b0 == 0) {
    FUN_14086a14e(&DAT_14c9984b0,&PTR_FUN_149f81ff8);
  }
  return DAT_14c9984b0;
}



// FUNCTION 146289e06 FUN_146289e06 body=43 status=ok
// SIG undefined FUN_146289e06(void)

void FUN_146289e06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_149f8aa70;
  return;
}



// FUNCTION 146289e32 FUN_146289e32 body=55 status=ok
// SIG undefined FUN_146289e32(void)

void FUN_146289e32(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9984d0 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9984d0 = FUN_140002ddd(FUN_146289e69,uVar1,L"NetRoleNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289e69 FUN_146289e69 body=47 status=ok
// SIG undefined FUN_146289e69(void)

longlong FUN_146289e69(void)

{
  if (DAT_14c9984c8 == 0) {
    FUN_14086a14e(&DAT_14c9984c8,&PTR_FUN_149f822e8);
  }
  return DAT_14c9984c8;
}



// FUNCTION 146289e98 FUN_146289e98 body=43 status=ok
// SIG undefined FUN_146289e98(void)

void FUN_146289e98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_149f8abe0;
  return;
}



// FUNCTION 146289ec4 FUN_146289ec4 body=55 status=ok
// SIG undefined FUN_146289ec4(void)

void FUN_146289ec4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9984e8 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9984e8 = FUN_140002ddd(FUN_146289efb,uVar1,L"FieldPathNetSerializerConfig");
  }
  return;
}



// FUNCTION 146289efb FUN_146289efb body=47 status=ok
// SIG undefined FUN_146289efb(void)

longlong FUN_146289efb(void)

{
  if (DAT_14c9984e0 == 0) {
    FUN_14086a14e(&DAT_14c9984e0,&PTR_FUN_149f823c8);
  }
  return DAT_14c9984e0;
}



// FUNCTION 146289f2a FUN_146289f2a body=43 status=ok
// SIG undefined FUN_146289f2a(void)

void FUN_146289f2a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_149f8ad50;
  return;
}



// FUNCTION 146289f56 FUN_146289f56 body=55 status=ok
// SIG undefined FUN_146289f56(void)

void FUN_146289f56(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998500 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998500 = FUN_140002ddd(FUN_146289f8d,uVar1,L"FieldPathNetSerializerSerializationHelper");
  }
  return;
}



// FUNCTION 146289f8d FUN_146289f8d body=47 status=ok
// SIG undefined FUN_146289f8d(void)

longlong FUN_146289f8d(void)

{
  if (DAT_14c9984f8 == 0) {
    FUN_14086a14e(&DAT_14c9984f8,&PTR_FUN_149f82568);
  }
  return DAT_14c9984f8;
}



// FUNCTION 146289fbc FUN_146289fbc body=43 status=ok
// SIG undefined FUN_146289fbc(void)

void FUN_146289fbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f8aec0;
  return;
}



// FUNCTION 146289fe8 FUN_146289fe8 body=55 status=ok
// SIG undefined FUN_146289fe8(void)

void FUN_146289fe8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998518 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998518 = FUN_140002ddd(FUN_14628a01f,uVar1,L"IntNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628a01f FUN_14628a01f body=47 status=ok
// SIG undefined FUN_14628a01f(void)

longlong FUN_14628a01f(void)

{
  if (DAT_14c998510 == 0) {
    FUN_14086a14e(&DAT_14c998510,&PTR_FUN_149f82720);
  }
  return DAT_14c998510;
}



// FUNCTION 14628a04e FUN_14628a04e body=43 status=ok
// SIG undefined FUN_14628a04e(void)

void FUN_14628a04e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f8b020;
  return;
}



// FUNCTION 14628a07a FUN_14628a07a body=55 status=ok
// SIG undefined FUN_14628a07a(void)

void FUN_14628a07a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998530 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998530 = FUN_140002ddd(FUN_14628a0b1,uVar1,L"Int8RangeNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628a0b1 FUN_14628a0b1 body=47 status=ok
// SIG undefined FUN_14628a0b1(void)

longlong FUN_14628a0b1(void)

{
  if (DAT_14c998528 == 0) {
    FUN_14086a14e(&DAT_14c998528,&PTR_FUN_149f828b8);
  }
  return DAT_14c998528;
}



// FUNCTION 14628a0e0 FUN_14628a0e0 body=43 status=ok
// SIG undefined FUN_14628a0e0(void)

void FUN_14628a0e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f8b190;
  return;
}



// FUNCTION 14628a10c FUN_14628a10c body=55 status=ok
// SIG undefined FUN_14628a10c(void)

void FUN_14628a10c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998548 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998548 = FUN_140002ddd(FUN_14628a143,uVar1,L"Int16RangeNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628a143 FUN_14628a143 body=47 status=ok
// SIG undefined FUN_14628a143(void)

longlong FUN_14628a143(void)

{
  if (DAT_14c998540 == 0) {
    FUN_14086a14e(&DAT_14c998540,&PTR_FUN_149f82a18);
  }
  return DAT_14c998540;
}



// FUNCTION 14628a172 FUN_14628a172 body=43 status=ok
// SIG undefined FUN_14628a172(void)

void FUN_14628a172(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f8b300;
  return;
}



// FUNCTION 14628a19e FUN_14628a19e body=55 status=ok
// SIG undefined FUN_14628a19e(void)

void FUN_14628a19e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998560 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998560 = FUN_140002ddd(FUN_14628a1d5,uVar1,L"Int32RangeNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628a1d5 FUN_14628a1d5 body=47 status=ok
// SIG undefined FUN_14628a1d5(void)

longlong FUN_14628a1d5(void)

{
  if (DAT_14c998558 == 0) {
    FUN_14086a14e(&DAT_14c998558,&PTR_FUN_149f82b78);
  }
  return DAT_14c998558;
}



// FUNCTION 14628a204 FUN_14628a204 body=43 status=ok
// SIG undefined FUN_14628a204(void)

void FUN_14628a204(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149f8b470;
  return;
}



// FUNCTION 14628a230 FUN_14628a230 body=55 status=ok
// SIG undefined FUN_14628a230(void)

void FUN_14628a230(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998578 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998578 = FUN_140002ddd(FUN_14628a267,uVar1,L"Int64RangeNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628a267 FUN_14628a267 body=47 status=ok
// SIG undefined FUN_14628a267(void)

longlong FUN_14628a267(void)

{
  if (DAT_14c998570 == 0) {
    FUN_14086a14e(&DAT_14c998570,&PTR_FUN_149f82cd8);
  }
  return DAT_14c998570;
}



// FUNCTION 14628a296 FUN_14628a296 body=43 status=ok
// SIG undefined FUN_14628a296(void)

void FUN_14628a296(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_149f8b5e0;
  return;
}



// FUNCTION 14628a2c2 FUN_14628a2c2 body=55 status=ok
// SIG undefined FUN_14628a2c2(void)

void FUN_14628a2c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9985a8 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9985a8 = FUN_140002ddd(FUN_14628a2f9,uVar1,L"IrisFastArraySerializer");
  }
  return;
}



// FUNCTION 14628a2f9 FUN_14628a2f9 body=47 status=ok
// SIG undefined FUN_14628a2f9(void)

longlong FUN_14628a2f9(void)

{
  if (DAT_14c9985a0 == 0) {
    FUN_14086a14e(&DAT_14c9985a0,&PTR_FUN_149f82e80);
  }
  return DAT_14c9985a0;
}



// FUNCTION 14628a328 FUN_14628a328 body=43 status=ok
// SIG undefined FUN_14628a328(void)

void FUN_14628a328(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_149f8b750;
  return;
}



// FUNCTION 14628a353 FUN_14628a353 body=56 status=ok
// SIG undefined FUN_14628a353(void)

void FUN_14628a353(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a3d412(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f82f90;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  return;
}



// FUNCTION 14628a390 FUN_14628a390 body=47 status=ok
// SIG undefined FUN_14628a390(void)

longlong FUN_14628a390(void)

{
  if (DAT_14c9985c0 == 0) {
    FUN_14073dd9a(&DAT_14c9985c0,&PTR_LAB_149f82f48);
  }
  return DAT_14c9985c0;
}



// FUNCTION 14628a3c7 FUN_14628a3c7 body=47 status=ok
// SIG undefined FUN_14628a3c7(void)

longlong FUN_14628a3c7(void)

{
  if (DAT_14c9987b8 == 0) {
    FUN_14073dd9a(&DAT_14c9987b8,&PTR_LAB_149f87748);
  }
  return DAT_14c9987b8;
}



// FUNCTION 14628a3f6 FUN_14628a3f6 body=49 status=ok
// SIG undefined FUN_14628a3f6(void)

longlong FUN_14628a3f6(void)

{
  if (DAT_14c9985f0 == 0) {
    FUN_14073dd9a(&DAT_14c9985f0,&PTR_LAB_149f83708);
  }
  return DAT_14c9985f0;
}



// FUNCTION 14628a428 FUN_14628a428 body=55 status=ok
// SIG undefined FUN_14628a428(void)

void FUN_14628a428(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998608 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998608 = FUN_140002ddd(FUN_14628a45f,uVar1,L"NetBlobHandlerDefinition");
  }
  return;
}



// FUNCTION 14628a45f FUN_14628a45f body=47 status=ok
// SIG undefined FUN_14628a45f(void)

longlong FUN_14628a45f(void)

{
  if (DAT_14c998600 == 0) {
    FUN_14086a14e(&DAT_14c998600,&PTR_FUN_149f83ad0);
  }
  return DAT_14c998600;
}



// FUNCTION 14628a48e FUN_14628a48e body=43 status=ok
// SIG undefined FUN_14628a48e(void)

void FUN_14628a48e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_149f8b8b0;
  return;
}



// FUNCTION 14628a4b9 FUN_14628a4b9 body=47 status=ok
// SIG undefined FUN_14628a4b9(void)

longlong FUN_14628a4b9(void)

{
  if (DAT_14c998620 == 0) {
    FUN_14073dd9a(&DAT_14c998620,&PTR_LAB_149f83bf8);
  }
  return DAT_14c998620;
}



// FUNCTION 14628a4e8 FUN_14628a4e8 body=47 status=ok
// SIG undefined FUN_14628a4e8(void)

longlong FUN_14628a4e8(void)

{
  if (DAT_14c998638 == 0) {
    FUN_14073dd9a(&DAT_14c998638,&PTR_LAB_149f83f88);
  }
  return DAT_14c998638;
}



// FUNCTION 14628a517 FUN_14628a517 body=41 status=ok
// SIG undefined FUN_14628a517(void)

void FUN_14628a517(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f843b0;
  *(undefined2 *)(puVar1 + 5) = 0x1000;
  return;
}



// FUNCTION 14628a540 FUN_14628a540 body=47 status=ok
// SIG undefined FUN_14628a540(void)

longlong FUN_14628a540(void)

{
  if (DAT_14c998650 == 0) {
    FUN_14073dd9a(&DAT_14c998650,&PTR_LAB_149f84368);
  }
  return DAT_14c998650;
}



// FUNCTION 14628a56f FUN_14628a56f body=74 status=ok
// SIG undefined FUN_14628a56f(void)

void FUN_14628a56f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14592012e(puVar1);
  *puVar1 = &PTR_FUN_149f846f0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xa4) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
  return;
}



// FUNCTION 14628a5b9 FUN_14628a5b9 body=47 status=ok
// SIG undefined FUN_14628a5b9(void)

longlong FUN_14628a5b9(void)

{
  if (DAT_14c998668 == 0) {
    FUN_14073dd9a(&DAT_14c998668,&PTR_LAB_149f846a8);
  }
  return DAT_14c998668;
}



// FUNCTION 14628a5e8 FUN_14628a5e8 body=47 status=ok
// SIG undefined FUN_14628a5e8(void)

longlong FUN_14628a5e8(void)

{
  if (DAT_14c998678 == 0) {
    FUN_1409ce572(&DAT_14c998678,&PTR_FUN_149f84a80);
  }
  return DAT_14c998678;
}



// FUNCTION 14628a617 FUN_14628a617 body=67 status=ok
// SIG undefined FUN_14628a617(void)

void FUN_14628a617(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f84d30;
  puVar1[5] = 0x200000000;
  puVar1[6] = &DAT_3f8000003f800000;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 14628a65a FUN_14628a65a body=47 status=ok
// SIG undefined FUN_14628a65a(void)

longlong FUN_14628a65a(void)

{
  if (DAT_14c998698 == 0) {
    FUN_14073dd9a(&DAT_14c998698,&PTR_LAB_149f84ce8);
  }
  return DAT_14c998698;
}



// FUNCTION 14628a689 FUN_14628a689 body=47 status=ok
// SIG undefined FUN_14628a689(void)

longlong FUN_14628a689(void)

{
  if (DAT_14c9986b0 == 0) {
    FUN_14073dd9a(&DAT_14c9986b0,&PTR_LAB_149f85018);
  }
  return DAT_14c9986b0;
}



// FUNCTION 14628a6b8 FUN_14628a6b8 body=47 status=ok
// SIG undefined FUN_14628a6b8(void)

void FUN_14628a6b8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f85460;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0xff;
  return;
}



// FUNCTION 14628a6ec FUN_14628a6ec body=47 status=ok
// SIG undefined FUN_14628a6ec(void)

longlong FUN_14628a6ec(void)

{
  if (DAT_14c9986c8 == 0) {
    FUN_14073dd9a(&DAT_14c9986c8,&PTR_LAB_149f85418);
  }
  return DAT_14c9986c8;
}



// FUNCTION 14628a71b FUN_14628a71b body=35 status=ok
// SIG undefined FUN_14628a71b(void)

void FUN_14628a71b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f85800;
  return;
}



// FUNCTION 14628a746 FUN_14628a746 body=55 status=ok
// SIG undefined FUN_14628a746(void)

void FUN_14628a746(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998710 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998710 = FUN_140002ddd(FUN_14628a77d,uVar1,L"NetObjectFilterDefinition");
  }
  return;
}



// FUNCTION 14628a77d FUN_14628a77d body=47 status=ok
// SIG undefined FUN_14628a77d(void)

longlong FUN_14628a77d(void)

{
  if (DAT_14c998708 == 0) {
    FUN_14086a14e(&DAT_14c998708,&PTR_FUN_149f85fb8);
  }
  return DAT_14c998708;
}



// FUNCTION 14628a7ac FUN_14628a7ac body=43 status=ok
// SIG undefined FUN_14628a7ac(void)

void FUN_14628a7ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_149f8ba90;
  return;
}



// FUNCTION 14628a7d7 FUN_14628a7d7 body=42 status=ok
// SIG undefined FUN_14628a7d7(void)

void FUN_14628a7d7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f86130;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14628a801 FUN_14628a801 body=47 status=ok
// SIG undefined FUN_14628a801(void)

longlong FUN_14628a801(void)

{
  if (DAT_14c998728 == 0) {
    FUN_14073dd9a(&DAT_14c998728,&PTR_LAB_149f860e8);
  }
  return DAT_14c998728;
}



// FUNCTION 14628a830 FUN_14628a830 body=55 status=ok
// SIG undefined FUN_14628a830(void)

void FUN_14628a830(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998740 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998740 = FUN_140002ddd(FUN_14628a867,uVar1,L"NetObjectGridFilterProfile");
  }
  return;
}



// FUNCTION 14628a867 FUN_14628a867 body=47 status=ok
// SIG undefined FUN_14628a867(void)

longlong FUN_14628a867(void)

{
  if (DAT_14c998738 == 0) {
    FUN_14086a14e(&DAT_14c998738,&PTR_FUN_149f86530);
  }
  return DAT_14c998738;
}



// FUNCTION 14628a896 FUN_14628a896 body=43 status=ok
// SIG undefined FUN_14628a896(void)

void FUN_14628a896(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_149f8bbf0;
  return;
}



// FUNCTION 14628a8c1 FUN_14628a8c1 body=70 status=ok
// SIG undefined FUN_14628a8c1(void)

void FUN_14628a8c1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f86910;
  *(undefined4 *)(puVar1 + 5) = 2;
  *(undefined2 *)((longlong)puVar1 + 0x2c) = 4;
  puVar1[6] = 0x469c4000469c4000;
  puVar1[7] = 0x466a600000000000;
  *(undefined1 *)(puVar1 + 8) = 1;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 14628a907 FUN_14628a907 body=47 status=ok
// SIG undefined FUN_14628a907(void)

longlong FUN_14628a907(void)

{
  if (DAT_14c998758 == 0) {
    FUN_14073dd9a(&DAT_14c998758,&PTR_LAB_149f868c8);
  }
  return DAT_14c998758;
}



// FUNCTION 14628a936 FUN_14628a936 body=47 status=ok
// SIG undefined FUN_14628a936(void)

longlong FUN_14628a936(void)

{
  if (DAT_14c998770 == 0) {
    FUN_14073dd9a(&DAT_14c998770,&PTR_LAB_149f86bf8);
  }
  return DAT_14c998770;
}



// FUNCTION 14628a965 FUN_14628a965 body=43 status=ok
// SIG undefined FUN_14628a965(void)

void FUN_14628a965(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145920086(puVar1);
  *puVar1 = &PTR_FUN_149f87000;
  puVar1[0x2b] = 0;
  return;
}



// FUNCTION 14628a990 FUN_14628a990 body=47 status=ok
// SIG undefined FUN_14628a990(void)

longlong FUN_14628a990(void)

{
  if (DAT_14c998788 == 0) {
    FUN_14073dd9a(&DAT_14c998788,&PTR_LAB_149f86fb8);
  }
  return DAT_14c998788;
}



// FUNCTION 14628a9bf FUN_14628a9bf body=35 status=ok
// SIG undefined FUN_14628a9bf(void)

void FUN_14628a9bf(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f87460;
  return;
}



// FUNCTION 14628a9e2 FUN_14628a9e2 body=55 status=ok
// SIG undefined FUN_14628a9e2(void)

void FUN_14628a9e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9987d0 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9987d0 = FUN_140002ddd(FUN_14628aa19,uVar1,L"NetObjectPrioritizerDefinition");
  }
  return;
}



// FUNCTION 14628aa19 FUN_14628aa19 body=47 status=ok
// SIG undefined FUN_14628aa19(void)

longlong FUN_14628aa19(void)

{
  if (DAT_14c9987c8 == 0) {
    FUN_14086a14e(&DAT_14c9987c8,&PTR_FUN_149f87cc8);
  }
  return DAT_14c9987c8;
}



// FUNCTION 14628aa48 FUN_14628aa48 body=43 status=ok
// SIG undefined FUN_14628aa48(void)

void FUN_14628aa48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_149f8bd50;
  return;
}



// FUNCTION 14628aa73 FUN_14628aa73 body=42 status=ok
// SIG undefined FUN_14628aa73(void)

void FUN_14628aa73(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f87e50;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14628aa9d FUN_14628aa9d body=47 status=ok
// SIG undefined FUN_14628aa9d(void)

longlong FUN_14628aa9d(void)

{
  if (DAT_14c9987e8 == 0) {
    FUN_14073dd9a(&DAT_14c9987e8,&PTR_LAB_149f87e08);
  }
  return DAT_14c9987e8;
}



// FUNCTION 14628aacc FUN_14628aacc body=47 status=ok
// SIG undefined FUN_14628aacc(void)

longlong FUN_14628aacc(void)

{
  if (DAT_14c998800 == 0) {
    FUN_14073dd9a(&DAT_14c998800,&PTR_LAB_149f88188);
  }
  return DAT_14c998800;
}



// FUNCTION 14628aafc FUN_14628aafc body=55 status=ok
// SIG undefined FUN_14628aafc(void)

void FUN_14628aafc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998818 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998818 = FUN_140002ddd(FUN_1417335a7,uVar1,L"NetSerializerConfig");
  }
  return;
}



// FUNCTION 14628ab34 FUN_14628ab34 body=43 status=ok
// SIG undefined FUN_14628ab34(void)

void FUN_14628ab34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8bec0;
  return;
}



// FUNCTION 14628ab60 FUN_14628ab60 body=55 status=ok
// SIG undefined FUN_14628ab60(void)

void FUN_14628ab60(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998830 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998830 = FUN_140002ddd(FUN_14628ab97,uVar1,L"BoolNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628ab97 FUN_14628ab97 body=47 status=ok
// SIG undefined FUN_14628ab97(void)

longlong FUN_14628ab97(void)

{
  if (DAT_14c998828 == 0) {
    FUN_14086a14e(&DAT_14c998828,&PTR_FUN_149f885a0);
  }
  return DAT_14c998828;
}



// FUNCTION 14628abc6 FUN_14628abc6 body=43 status=ok
// SIG undefined FUN_14628abc6(void)

void FUN_14628abc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8c020;
  return;
}



// FUNCTION 14628abf2 FUN_14628abf2 body=55 status=ok
// SIG undefined FUN_14628abf2(void)

void FUN_14628abf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998848 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998848 = FUN_140002ddd(FUN_14628ac29,uVar1,L"StructNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628ac29 FUN_14628ac29 body=47 status=ok
// SIG undefined FUN_14628ac29(void)

longlong FUN_14628ac29(void)

{
  if (DAT_14c998840 == 0) {
    FUN_14086a14e(&DAT_14c998840,&PTR_FUN_149f88628);
  }
  return DAT_14c998840;
}



// FUNCTION 14628ac58 FUN_14628ac58 body=43 status=ok
// SIG undefined FUN_14628ac58(void)

void FUN_14628ac58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f8c190;
  return;
}



// FUNCTION 14628ac84 FUN_14628ac84 body=55 status=ok
// SIG undefined FUN_14628ac84(void)

void FUN_14628ac84(void)

{
  undefined8 uVar1;
  
  if (DAT_14c998860 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c998860 = FUN_140002ddd(FUN_14628acbb,uVar1,L"NopNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628acbb FUN_14628acbb body=47 status=ok
// SIG undefined FUN_14628acbb(void)

longlong FUN_14628acbb(void)

{
  if (DAT_14c998858 == 0) {
    FUN_14086a14e(&DAT_14c998858,&PTR_FUN_149f886a8);
  }
  return DAT_14c998858;
}



// FUNCTION 14628acea FUN_14628acea body=43 status=ok
// SIG undefined FUN_14628acea(void)

void FUN_14628acea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8c300;
  return;
}



// FUNCTION 14628ad15 FUN_14628ad15 body=47 status=ok
// SIG undefined FUN_14628ad15(void)

longlong FUN_14628ad15(void)

{
  if (DAT_14c998878 == 0) {
    FUN_14073dd9a(&DAT_14c998878,&PTR_LAB_149f88798);
  }
  return DAT_14c998878;
}



// FUNCTION 14628ad44 FUN_14628ad44 body=35 status=ok
// SIG undefined FUN_14628ad44(void)

void FUN_14628ad44(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149f88b70;
  return;
}



// FUNCTION 14628ad67 FUN_14628ad67 body=47 status=ok
// SIG undefined FUN_14628ad67(void)

longlong FUN_14628ad67(void)

{
  if (DAT_14c998890 == 0) {
    FUN_14073dd9a(&DAT_14c998890,&PTR_LAB_149f88b28);
  }
  return DAT_14c998890;
}



// FUNCTION 14628ad96 FUN_14628ad96 body=32 status=ok
// SIG undefined FUN_14628ad96(void)

void FUN_14628ad96(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_14592012e(param_1);
  *param_1 = &PTR_FUN_149f88ea0;
  return;
}



// FUNCTION 14628adb6 FUN_14628adb6 body=47 status=ok
// SIG undefined FUN_14628adb6(void)

longlong FUN_14628adb6(void)

{
  if (DAT_14c9988a8 == 0) {
    FUN_14073dd9a(&DAT_14c9988a8,&PTR_LAB_149f88e58);
  }
  return DAT_14c9988a8;
}



// FUNCTION 14628ade6 FUN_14628ade6 body=55 status=ok
// SIG undefined FUN_14628ade6(void)

void FUN_14628ade6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9988c0 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9988c0 = FUN_140002ddd(FUN_14628ae1d,uVar1,L"ObjectNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628ae1d FUN_14628ae1d body=47 status=ok
// SIG undefined FUN_14628ae1d(void)

longlong FUN_14628ae1d(void)

{
  if (DAT_14c9988b8 == 0) {
    FUN_14086a14e(&DAT_14c9988b8,&PTR_FUN_149f89240);
  }
  return DAT_14c9988b8;
}



// FUNCTION 14628ae4c FUN_14628ae4c body=43 status=ok
// SIG undefined FUN_14628ae4c(void)

void FUN_14628ae4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8c470;
  return;
}



// FUNCTION 14628ae78 FUN_14628ae78 body=55 status=ok
// SIG undefined FUN_14628ae78(void)

void FUN_14628ae78(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9988d8 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9988d8 = FUN_140002ddd(FUN_14628aeaf,uVar1,L"WeakObjectNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628aeaf FUN_14628aeaf body=47 status=ok
// SIG undefined FUN_14628aeaf(void)

longlong FUN_14628aeaf(void)

{
  if (DAT_14c9988d0 == 0) {
    FUN_14086a14e(&DAT_14c9988d0,&PTR_FUN_149f892d8);
  }
  return DAT_14c9988d0;
}



// FUNCTION 14628aede FUN_14628aede body=43 status=ok
// SIG undefined FUN_14628aede(void)

void FUN_14628aede(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149f8c5e0;
  return;
}



// FUNCTION 14628af0a FUN_14628af0a body=55 status=ok
// SIG undefined FUN_14628af0a(void)

void FUN_14628af0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9988f0 == 0) {
    uVar1 = FUN_140cea73f();
    DAT_14c9988f0 = FUN_140002ddd(FUN_14628af41,uVar1,L"ScriptInterfaceNetSerializerConfig");
  }
  return;
}



// FUNCTION 14628af41 FUN_14628af41 body=47 status=ok
// SIG undefined FUN_14628af41(void)

longlong FUN_14628af41(void)

{
  if (DAT_14c9988e8 == 0) {
    FUN_14086a14e(&DAT_14c9988e8,&PTR_FUN_149f893e0);
  }
  return DAT_14c9988e8;
}



// FUNCTION 14628af70 FUN_14628af70 body=43 status=ok
// SIG undefined FUN_14628af70(void)

void FUN_14628af70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_149f8c750;
  return;
}



// FUNCTION 14628af9c FUN_14628af9c body=40 status=ok
// SIG undefined FUN_14628af9c(void)

undefined8 FUN_14628af9c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628afc4 FUN_14628afc4 body=67 status=ok
// SIG undefined FUN_14628afc4(void)

undefined8 * FUN_14628afc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f7f4b0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b008 FUN_14628b008 body=40 status=ok
// SIG undefined FUN_14628b008(void)

undefined8 FUN_14628b008(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b030 FUN_14628b030 body=40 status=ok
// SIG undefined FUN_14628b030(void)

undefined8 FUN_14628b030(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b058 FUN_14628b058 body=69 status=ok
// SIG undefined FUN_14628b058(void)

undefined8 * FUN_14628b058(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f85b30;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b09e FUN_14628b09e body=40 status=ok
// SIG undefined FUN_14628b09e(void)

undefined8 FUN_14628b09e(undefined8 param_1,int param_2)

{
  FUN_1459ab3fe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b0c6 FUN_14628b0c6 body=40 status=ok
// SIG undefined FUN_14628b0c6(void)

undefined8 FUN_14628b0c6(undefined8 param_1,int param_2)

{
  FUN_1458c70ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b0ee FUN_14628b0ee body=67 status=ok
// SIG undefined FUN_14628b0ee(void)

undefined8 * FUN_14628b0ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f83c40;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b132 FUN_14628b132 body=40 status=ok
// SIG undefined FUN_14628b132(void)

undefined8 FUN_14628b132(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b15a FUN_14628b15a body=40 status=ok
// SIG undefined FUN_14628b15a(void)

undefined8 FUN_14628b15a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b182 FUN_14628b182 body=40 status=ok
// SIG undefined FUN_14628b182(void)

undefined8 FUN_14628b182(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b1aa FUN_14628b1aa body=40 status=ok
// SIG undefined FUN_14628b1aa(void)

undefined8 FUN_14628b1aa(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b1d2 FUN_14628b1d2 body=40 status=ok
// SIG undefined FUN_14628b1d2(void)

undefined8 FUN_14628b1d2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b1fa FUN_14628b1fa body=69 status=ok
// SIG undefined FUN_14628b1fa(void)

undefined8 * FUN_14628b1fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f85b30;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b240 FUN_14628b240 body=57 status=ok
// SIG undefined FUN_14628b240(void)

longlong FUN_14628b240(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b27a FUN_14628b27a body=69 status=ok
// SIG undefined FUN_14628b27a(void)

undefined8 * FUN_14628b27a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f86910;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b2c0 FUN_14628b2c0 body=40 status=ok
// SIG undefined FUN_14628b2c0(void)

undefined8 FUN_14628b2c0(undefined8 param_1,int param_2)

{
  FUN_145c28972();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b2e8 FUN_14628b2e8 body=40 status=ok
// SIG undefined FUN_14628b2e8(void)

undefined8 FUN_14628b2e8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b310 FUN_14628b310 body=40 status=ok
// SIG undefined FUN_14628b310(void)

undefined8 FUN_14628b310(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b338 FUN_14628b338 body=57 status=ok
// SIG undefined FUN_14628b338(void)

longlong FUN_14628b338(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b372 FUN_14628b372 body=40 status=ok
// SIG undefined FUN_14628b372(void)

undefined8 FUN_14628b372(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b39a FUN_14628b39a body=40 status=ok
// SIG undefined FUN_14628b39a(void)

undefined8 FUN_14628b39a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b3c2 FUN_14628b3c2 body=69 status=ok
// SIG undefined FUN_14628b3c2(void)

undefined8 * FUN_14628b3c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f85b30;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14628b408 FUN_14628b408 body=34 status=ok
// SIG undefined FUN_14628b408(void)

undefined8 FUN_14628b408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b42a FUN_14628b42a body=34 status=ok
// SIG undefined FUN_14628b42a(void)

undefined8 FUN_14628b42a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b44c FUN_14628b44c body=34 status=ok
// SIG undefined FUN_14628b44c(void)

undefined8 FUN_14628b44c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b46e FUN_14628b46e body=34 status=ok
// SIG undefined FUN_14628b46e(void)

undefined8 FUN_14628b46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b490 FUN_14628b490 body=34 status=ok
// SIG undefined FUN_14628b490(void)

undefined8 FUN_14628b490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b4b2 FUN_14628b4b2 body=34 status=ok
// SIG undefined FUN_14628b4b2(void)

undefined8 FUN_14628b4b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b4d4 FUN_14628b4d4 body=34 status=ok
// SIG undefined FUN_14628b4d4(void)

undefined8 FUN_14628b4d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b4f6 FUN_14628b4f6 body=34 status=ok
// SIG undefined FUN_14628b4f6(void)

undefined8 FUN_14628b4f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b518 FUN_14628b518 body=34 status=ok
// SIG undefined FUN_14628b518(void)

undefined8 FUN_14628b518(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b53a FUN_14628b53a body=34 status=ok
// SIG undefined FUN_14628b53a(void)

undefined8 FUN_14628b53a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b55c FUN_14628b55c body=34 status=ok
// SIG undefined FUN_14628b55c(void)

undefined8 FUN_14628b55c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b57e FUN_14628b57e body=34 status=ok
// SIG undefined FUN_14628b57e(void)

undefined8 FUN_14628b57e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b5a0 FUN_14628b5a0 body=34 status=ok
// SIG undefined FUN_14628b5a0(void)

undefined8 FUN_14628b5a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b5c2 FUN_14628b5c2 body=34 status=ok
// SIG undefined FUN_14628b5c2(void)

undefined8 FUN_14628b5c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b5e4 FUN_14628b5e4 body=34 status=ok
// SIG undefined FUN_14628b5e4(void)

undefined8 FUN_14628b5e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b606 FUN_14628b606 body=34 status=ok
// SIG undefined FUN_14628b606(void)

undefined8 FUN_14628b606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b628 FUN_14628b628 body=34 status=ok
// SIG undefined FUN_14628b628(void)

undefined8 FUN_14628b628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b64a FUN_14628b64a body=34 status=ok
// SIG undefined FUN_14628b64a(void)

undefined8 FUN_14628b64a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b66c FUN_14628b66c body=34 status=ok
// SIG undefined FUN_14628b66c(void)

undefined8 FUN_14628b66c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14628b68e FUN_14628b68e body=34 status=ok
// SIG undefined FUN_14628b68e(void)

undefined8 FUN_14628b68e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}


