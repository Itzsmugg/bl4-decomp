// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14666b77f FUN_14666b77f body=47 status=ok
// SIG undefined FUN_14666b77f(void)

longlong FUN_14666b77f(void)

{
  if (DAT_14cbf4700 == 0) {
    FUN_14073dd9a(&DAT_14cbf4700,&PTR_LAB_14ba37f48);
  }
  return DAT_14cbf4700;
}



// FUNCTION 14666b7ae FUN_14666b7ae body=231 status=ok
// SIG undefined FUN_14666b7ae(void)

void FUN_14666b7ae(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba383f0;
  local_28[3] = &DAT_14cbf4720;
  local_28[4] = FUN_145de29b4;
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



// FUNCTION 14666b896 FUN_14666b896 body=40 status=ok
// SIG undefined FUN_14666b896(void)

undefined8 FUN_14666b896(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666b8be FUN_14666b8be body=93 status=ok
// SIG undefined FUN_14666b8be(void)

void FUN_14666b8be(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba383f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666b91c FUN_14666b91c body=93 status=ok
// SIG undefined FUN_14666b91c(void)

void FUN_14666b91c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba38590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666b979 FUN_14666b979 body=47 status=ok
// SIG undefined FUN_14666b979(void)

longlong FUN_14666b979(void)

{
  if (DAT_14cbf4758 == 0) {
    FUN_140f50038(&DAT_14cbf4758,&PTR_s__Script_Hdr10Plus2ContentStarted_14ba38818);
  }
  return DAT_14cbf4758;
}



// FUNCTION 14666b9a8 FUN_14666b9a8 body=39 status=ok
// SIG undefined FUN_14666b9a8(void)

void FUN_14666b9a8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ba389e0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14666b9cf FUN_14666b9cf body=47 status=ok
// SIG undefined FUN_14666b9cf(void)

longlong FUN_14666b9cf(void)

{
  if (DAT_14cbf4770 == 0) {
    FUN_14073dd9a(&DAT_14cbf4770,&PTR_LAB_14ba38998);
  }
  return DAT_14cbf4770;
}



// FUNCTION 14666b9fe FUN_14666b9fe body=47 status=ok
// SIG undefined FUN_14666b9fe(void)

longlong FUN_14666b9fe(void)

{
  if (DAT_14cbf4788 == 0) {
    FUN_14073dd9a(&DAT_14cbf4788,&PTR_LAB_14ba38cf8);
  }
  return DAT_14cbf4788;
}



// FUNCTION 14666ba2d FUN_14666ba2d body=49 status=ok
// SIG undefined FUN_14666ba2d(void)

longlong FUN_14666ba2d(void)

{
  if (DAT_14cbf47d8 == 0) {
    FUN_14073dd9a(&DAT_14cbf47d8,&PTR_LAB_14ba39770);
  }
  return DAT_14cbf47d8;
}



// FUNCTION 14666ba5e FUN_14666ba5e body=47 status=ok
// SIG undefined FUN_14666ba5e(void)

longlong FUN_14666ba5e(void)

{
  if (DAT_14cbf4798 == 0) {
    FUN_14000fc22(&DAT_14cbf4798,&PTR_FUN_14ba39028);
  }
  return DAT_14cbf4798;
}



// FUNCTION 14666ba8d FUN_14666ba8d body=47 status=ok
// SIG undefined FUN_14666ba8d(void)

longlong FUN_14666ba8d(void)

{
  if (DAT_14cbf47a0 == 0) {
    FUN_14000fc22(&DAT_14cbf47a0,&PTR_FUN_14ba390f0);
  }
  return DAT_14cbf47a0;
}



// FUNCTION 14666babc FUN_14666babc body=47 status=ok
// SIG undefined FUN_14666babc(void)

longlong FUN_14666babc(void)

{
  if (DAT_14cbf47a8 == 0) {
    FUN_14000fc22(&DAT_14cbf47a8,&PTR_FUN_14ba39238);
  }
  return DAT_14cbf47a8;
}



// FUNCTION 14666baeb FUN_14666baeb body=47 status=ok
// SIG undefined FUN_14666baeb(void)

longlong FUN_14666baeb(void)

{
  if (DAT_14cbf47b0 == 0) {
    FUN_14000fc22(&DAT_14cbf47b0,&PTR_FUN_14ba39378);
  }
  return DAT_14cbf47b0;
}



// FUNCTION 14666bb1a FUN_14666bb1a body=47 status=ok
// SIG undefined FUN_14666bb1a(void)

longlong FUN_14666bb1a(void)

{
  if (DAT_14cbf47b8 == 0) {
    FUN_14000fc22(&DAT_14cbf47b8,&PTR_FUN_14ba39418);
  }
  return DAT_14cbf47b8;
}



// FUNCTION 14666bb49 FUN_14666bb49 body=47 status=ok
// SIG undefined FUN_14666bb49(void)

longlong FUN_14666bb49(void)

{
  if (DAT_14cbf47c0 == 0) {
    FUN_14000fc22(&DAT_14cbf47c0,&PTR_FUN_14ba39520);
  }
  return DAT_14cbf47c0;
}



// FUNCTION 14666bb78 FUN_14666bb78 body=47 status=ok
// SIG undefined FUN_14666bb78(void)

longlong FUN_14666bb78(void)

{
  if (DAT_14cbf47c8 == 0) {
    FUN_14000fc22(&DAT_14cbf47c8,&PTR_FUN_14ba395c8);
  }
  return DAT_14cbf47c8;
}



// FUNCTION 14666bba8 FUN_14666bba8 body=34 status=ok
// SIG undefined FUN_14666bba8(void)

void FUN_14666bba8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a91380();
  FUN_14069c8d6(uVar1,&PTR_s_DisableHdr10PlusDisplayOutput_14ba39610,7);
  return;
}



// FUNCTION 14666bbca FUN_14666bbca body=35 status=ok
// SIG undefined FUN_14666bbca(void)

void FUN_14666bbca(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba397b0;
  return;
}



// FUNCTION 14666bbee FUN_14666bbee body=192 status=ok
// SIG undefined FUN_14666bbee(void)

void FUN_14666bbee(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba39be0;
  puVar1[3] = &DAT_14cbf47e8;
  puVar1[4] = FUN_1459d0d52;
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



// FUNCTION 14666bcb0 FUN_14666bcb0 body=40 status=ok
// SIG undefined FUN_14666bcb0(void)

undefined8 FUN_14666bcb0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666bcd8 FUN_14666bcd8 body=40 status=ok
// SIG undefined FUN_14666bcd8(void)

undefined8 FUN_14666bcd8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666bd00 FUN_14666bd00 body=93 status=ok
// SIG undefined FUN_14666bd00(void)

void FUN_14666bd00(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39be0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666bd5e FUN_14666bd5e body=29 status=ok
// SIG undefined FUN_14666bd5e(void)

undefined8 FUN_14666bd5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666bd7c FUN_14666bd7c body=192 status=ok
// SIG undefined FUN_14666bd7c(void)

void FUN_14666bd7c(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba39ca0;
  puVar1[3] = &DAT_14cbf4838;
  puVar1[4] = FUN_1459a6982;
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



// FUNCTION 14666be3e FUN_14666be3e body=93 status=ok
// SIG undefined FUN_14666be3e(void)

void FUN_14666be3e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666be9c FUN_14666be9c body=34 status=ok
// SIG undefined FUN_14666be9c(void)

undefined8 FUN_14666be9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666bebe FUN_14666bebe body=192 status=ok
// SIG undefined FUN_14666bebe(void)

void FUN_14666bebe(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba39dc0;
  puVar1[3] = &DAT_14cbf483c;
  puVar1[4] = FUN_1459a69ac;
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



// FUNCTION 14666bf80 FUN_14666bf80 body=93 status=ok
// SIG undefined FUN_14666bf80(void)

void FUN_14666bf80(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666bfde FUN_14666bfde body=34 status=ok
// SIG undefined FUN_14666bfde(void)

undefined8 FUN_14666bfde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666c000 FUN_14666c000 body=192 status=ok
// SIG undefined FUN_14666c000(void)

void FUN_14666c000(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba39f70;
  puVar1[3] = &DAT_14cbf4870;
  puVar1[4] = FUN_1459a69d6;
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



// FUNCTION 14666c0c2 FUN_14666c0c2 body=93 status=ok
// SIG undefined FUN_14666c0c2(void)

void FUN_14666c0c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba39f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666c120 FUN_14666c120 body=34 status=ok
// SIG undefined FUN_14666c120(void)

undefined8 FUN_14666c120(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666c142 FUN_14666c142 body=34 status=ok
// SIG undefined FUN_14666c142(void)

undefined8 FUN_14666c142(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 14666c164 FUN_14666c164 body=47 status=ok
// SIG undefined FUN_14666c164(void)

longlong FUN_14666c164(void)

{
  if (DAT_14cbf4898 == 0) {
    FUN_14073dd9a(&DAT_14cbf4898,&PTR_LAB_14ba3a3d0);
  }
  return DAT_14cbf4898;
}



// FUNCTION 14666c193 FUN_14666c193 body=47 status=ok
// SIG undefined FUN_14666c193(void)

longlong FUN_14666c193(void)

{
  if (DAT_14cbf4880 == 0) {
    FUN_14000fc22(&DAT_14cbf4880,&PTR_FUN_14ba3a248);
  }
  return DAT_14cbf4880;
}



// FUNCTION 14666c1c2 FUN_14666c1c2 body=47 status=ok
// SIG undefined FUN_14666c1c2(void)

longlong FUN_14666c1c2(void)

{
  if (DAT_14cbf4888 == 0) {
    FUN_14000fc22(&DAT_14cbf4888,&PTR_FUN_14ba3a2e8);
  }
  return DAT_14cbf4888;
}



// FUNCTION 14666c1f2 FUN_14666c1f2 body=34 status=ok
// SIG undefined FUN_14666c1f2(void)

void FUN_14666c1f2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a56d56();
  FUN_14069c8d6(uVar1,&PTR_s_GetArticles_14ba3a330,2);
  return;
}



// FUNCTION 14666c214 FUN_14666c214 body=35 status=ok
// SIG undefined FUN_14666c214(void)

void FUN_14666c214(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba3a410;
  return;
}



// FUNCTION 14666c237 FUN_14666c237 body=47 status=ok
// SIG undefined FUN_14666c237(void)

longlong FUN_14666c237(void)

{
  if (DAT_14cbf48b0 == 0) {
    FUN_140f50038(&DAT_14cbf48b0,&PTR_s__Script_ShiftBlueprint_14ba3a708);
  }
  return DAT_14cbf48b0;
}



// FUNCTION 14666c266 FUN_14666c266 body=192 status=ok
// SIG undefined FUN_14666c266(void)

void FUN_14666c266(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba3a760;
  puVar1[3] = &DAT_14cbf48c0;
  puVar1[4] = FUN_1459a6a00;
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



// FUNCTION 14666c328 FUN_14666c328 body=40 status=ok
// SIG undefined FUN_14666c328(void)

undefined8 FUN_14666c328(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666c350 FUN_14666c350 body=93 status=ok
// SIG undefined FUN_14666c350(void)

void FUN_14666c350(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3a760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666c3ae FUN_14666c3ae body=34 status=ok
// SIG undefined FUN_14666c3ae(void)

undefined8 FUN_14666c3ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14666c3d0 FUN_14666c3d0 body=46 status=ok
// SIG undefined FUN_14666c3d0(void)

void FUN_14666c3d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145946620(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba3a8b0;
  puVar1[5] = &PTR_FUN_14ba3acb0;
  return;
}



// FUNCTION 14666c3fe FUN_14666c3fe body=47 status=ok
// SIG undefined FUN_14666c3fe(void)

longlong FUN_14666c3fe(void)

{
  if (DAT_14cbf4900 == 0) {
    FUN_14073dd9a(&DAT_14cbf4900,&PTR_LAB_14ba3b348);
  }
  return DAT_14cbf4900;
}



// FUNCTION 14666c42d FUN_14666c42d body=49 status=ok
// SIG undefined FUN_14666c42d(void)

longlong FUN_14666c42d(void)

{
  if (DAT_14cbf4930 == 0) {
    FUN_140f50038(&DAT_14cbf4930,&PTR_s__Script_SocketSubsystemShift_14ba3be48);
  }
  return DAT_14cbf4930;
}



// FUNCTION 14666c45e FUN_14666c45e body=47 status=ok
// SIG undefined FUN_14666c45e(void)

longlong FUN_14666c45e(void)

{
  if (DAT_14cbf48d0 == 0) {
    FUN_14073dd9a(&DAT_14cbf48d0,&PTR_LAB_14ba3a868);
  }
  return DAT_14cbf48d0;
}



// FUNCTION 14666c48d FUN_14666c48d body=97 status=ok
// SIG undefined FUN_14666c48d(void)

void FUN_14666c48d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459a8e16(puVar1,param_1);
  *(undefined1 *)(puVar1 + 0x134) = 0;
  puVar1[0x135] = &PTR_FUN_14ba3c280;
  *(undefined4 *)(puVar1 + 0x136) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x9b4) = 0;
  puVar1[0x137] = 0;
  *puVar1 = &PTR_FUN_14ba3add0;
  puVar1[5] = &PTR_FUN_14ba3b2b0;
  return;
}



// FUNCTION 14666c4ee FUN_14666c4ee body=47 status=ok
// SIG undefined FUN_14666c4ee(void)

longlong FUN_14666c4ee(void)

{
  if (DAT_14cbf4918 == 0) {
    FUN_14073dd9a(&DAT_14cbf4918,&PTR_LAB_14ba3b8d8);
  }
  return DAT_14cbf4918;
}



// FUNCTION 14666c51d FUN_14666c51d body=47 status=ok
// SIG undefined FUN_14666c51d(void)

longlong FUN_14666c51d(void)

{
  if (DAT_14cbf48e8 == 0) {
    FUN_14073dd9a(&DAT_14cbf48e8,&PTR_LAB_14ba3ad88);
  }
  return DAT_14cbf48e8;
}



// FUNCTION 14666c54c FUN_14666c54c body=142 status=ok
// SIG undefined FUN_14666c54c(void)

longlong * FUN_14666c54c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3c350;
  uVar3 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 8);
  plVar5[2] = (longlong)&PTR_FUN_14ba3c280;
  *(undefined4 *)(plVar5 + 3) = uVar4;
  *(undefined2 *)((longlong)plVar5 + 0x1c) = uVar3;
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_2;
}



// FUNCTION 14666c5da FUN_14666c5da body=29 status=ok
// SIG undefined FUN_14666c5da(void)

undefined8 FUN_14666c5da(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cbf4940);
  return param_2;
}



// FUNCTION 14666c5f7 FUN_14666c5f7 body=177 status=ok
// SIG undefined FUN_14666c5f7(void)

undefined8 FUN_14666c5f7(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 14666c6aa FUN_14666c6aa body=192 status=ok
// SIG undefined FUN_14666c6aa(void)

void FUN_14666c6aa(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba3c400;
  puVar1[3] = &DAT_14cbf4970;
  puVar1[4] = FUN_145a2cdae;
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



// FUNCTION 14666c76c FUN_14666c76c body=40 status=ok
// SIG undefined FUN_14666c76c(void)

undefined8 FUN_14666c76c(undefined8 param_1,int param_2)

{
  FUN_145a25e5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666c794 FUN_14666c794 body=40 status=ok
// SIG undefined FUN_14666c794(void)

undefined8 FUN_14666c794(undefined8 param_1,int param_2)

{
  FUN_145918d2a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666c7bc FUN_14666c7bc body=29 status=ok
// SIG undefined FUN_14666c7bc(void)

undefined8 FUN_14666c7bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666c7da FUN_14666c7da body=93 status=ok
// SIG undefined FUN_14666c7da(void)

void FUN_14666c7da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba3c400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666c838 FUN_14666c838 body=224 status=ok
// SIG undefined FUN_14666c838(void)

void FUN_14666c838(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    local_28 = 2;
    *local_30 = &PTR_LAB_149e06450;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14ba3e380;
    local_30[3] = param_1;
    FUN_140c6314c(lVar1 + 0x170,local_38,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666c91a FUN_14666c91a body=233 status=ok
// SIG undefined FUN_14666c91a(void)

undefined8 * FUN_14666c91a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 14666ca04 FUN_14666ca04 body=173 status=ok
// SIG undefined FUN_14666ca04(void)

longlong FUN_14666ca04(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x298);
  *(uint *)(param_1 + 0x298) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x29c) < iVar2 + 1U) {
    FUN_145cb6262((longlong *)(param_1 + 0x290),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x290);
  lVar4 = (longlong)iVar2 * 0x150;
  FUN_14589e2aa(lVar3 + lVar4,param_3);
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14ba3d840;
  *(undefined8 *)(lVar3 + 0x118 + lVar4) = param_2;
  *(undefined4 *)(lVar3 + 0x120 + lVar4) = 0xffffffff;
  *(undefined1 *)(lVar3 + 0x124 + lVar4) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x128 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x138 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x148 + lVar4) = 0;
  return lVar3 + lVar4;
}



// FUNCTION 14666cab2 FUN_14666cab2 body=196 status=ok
// SIG undefined FUN_14666cab2(void)

undefined8 * FUN_14666cab2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (1 < *(int *)(param_3 + 8)) {
    FUN_1446f470e(&local_38,L"SHIFT",1);
    FUN_1414c2d8e(&local_30,param_3,local_38);
    *param_2 = local_30;
    param_2[1] = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14666cb78 FUN_14666cb78 body=300 status=ok
// SIG undefined FUN_14666cb78(void)

void FUN_14666cb78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(*param_2 + 0xd8);
    uVar4 = *(undefined8 *)(*param_2 + 0xe0);
    lVar5 = *(longlong *)(*param_2 + 0xe8);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    *(longlong *)(param_1 + 0xe8) = lVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    iVar3 = *(int *)(*param_2 + 0xf8);
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(param_1 + 0xf0,*(undefined8 *)(*param_2 + 0xf0),iVar7);
    iVar3 = *(int *)(*param_2 + 0xb0);
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(param_1 + 0xa8,*(undefined8 *)(*param_2 + 0xa8),iVar7);
    iVar3 = *(int *)(*param_2 + 0xc0);
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(param_1 + 0xb8,*(undefined8 *)(*param_2 + 0xb8),iVar7);
    iVar3 = *(int *)(*param_2 + 0xd0);
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    FUN_1402980a2(param_1 + 200,*(undefined8 *)(*param_2 + 200),iVar7);
    return;
  }
  return;
}



// FUNCTION 14666cca4 FUN_14666cca4 body=39 status=ok
// SIG undefined FUN_14666cca4(void)

bool FUN_14666cca4(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x130))();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 14666cccc FUN_14666cccc body=231 status=ok
// SIG undefined FUN_14666cccc(void)

void FUN_14666cccc(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba40bb0;
  local_28[3] = &DAT_14cbf4b64;
  local_28[4] = FUN_145a2cde4;
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



// FUNCTION 14666cdb4 FUN_14666cdb4 body=206 status=ok
// SIG undefined FUN_14666cdb4(void)

void FUN_14666cdb4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar2 = &PTR_FUN_14ba3d890;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((puVar1 != puVar2) && (*(undefined8 **)(param_1 + 8) = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1446ddc76(&local_28,"OnlineSubsystem",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1401e3324(uVar3,local_28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_1446f470e(&local_30,L"SHIFT",1);
  (**(code **)(*plVar4 + 0x78))(plVar4,local_30,uVar3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666ce84 FUN_14666ce84 body=58 status=ok
// SIG undefined FUN_14666ce84(void)

void FUN_14666ce84(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0xb0);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 14666cebe FUN_14666cebe body=38 status=ok
// SIG undefined FUN_14666cebe(void)

void FUN_14666cebe(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666cee4 FUN_14666cee4 body=159 status=ok
// SIG undefined FUN_14666cee4(void)

undefined8 * FUN_14666cee4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666cf84 FUN_14666cf84 body=38 status=ok
// SIG undefined FUN_14666cf84(void)

void FUN_14666cf84(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666cfaa FUN_14666cfaa body=159 status=ok
// SIG undefined FUN_14666cfaa(void)

undefined8 * FUN_14666cfaa(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x20,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666d04a FUN_14666d04a body=40 status=ok
// SIG undefined FUN_14666d04a(void)

void FUN_14666d04a(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x20);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d07c FUN_14666d07c body=159 status=ok
// SIG undefined FUN_14666d07c(void)

undefined8 * FUN_14666d07c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x38,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666d11c FUN_14666d11c body=38 status=ok
// SIG undefined FUN_14666d11c(void)

void FUN_14666d11c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x38);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d14c FUN_14666d14c body=159 status=ok
// SIG undefined FUN_14666d14c(void)

undefined8 * FUN_14666d14c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x50,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666d1ec FUN_14666d1ec body=40 status=ok
// SIG undefined FUN_14666d1ec(void)

void FUN_14666d1ec(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x50);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d21e FUN_14666d21e body=38 status=ok
// SIG undefined FUN_14666d21e(void)

void FUN_14666d21e(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x68);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d250 FUN_14666d250 body=41 status=ok
// SIG undefined FUN_14666d250(void)

void FUN_14666d250(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xf8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d27a FUN_14666d27a body=58 status=ok
// SIG undefined FUN_14666d27a(void)

void FUN_14666d27a(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 0x188);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 14666d2b4 FUN_14666d2b4 body=41 status=ok
// SIG undefined FUN_14666d2b4(void)

void FUN_14666d2b4(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x1e8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d2de FUN_14666d2de body=41 status=ok
// SIG undefined FUN_14666d2de(void)

void FUN_14666d2de(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x200);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d314 FUN_14666d314 body=41 status=ok
// SIG undefined FUN_14666d314(void)

void FUN_14666d314(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x248);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d33e FUN_14666d33e body=41 status=ok
// SIG undefined FUN_14666d33e(void)

void FUN_14666d33e(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x260);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d368 FUN_14666d368 body=29 status=ok
// SIG undefined FUN_14666d368(void)

undefined8 FUN_14666d368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d386 FUN_14666d386 body=132 status=ok
// SIG undefined FUN_14666d386(void)

void FUN_14666d386(longlong param_1,int param_2)

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



// FUNCTION 14666d40a FUN_14666d40a body=29 status=ok
// SIG undefined FUN_14666d40a(void)

undefined8 FUN_14666d40a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d428 FUN_14666d428 body=132 status=ok
// SIG undefined FUN_14666d428(void)

void FUN_14666d428(longlong param_1,int param_2)

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



// FUNCTION 14666d4ac FUN_14666d4ac body=29 status=ok
// SIG undefined FUN_14666d4ac(void)

undefined8 FUN_14666d4ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d4ca FUN_14666d4ca body=29 status=ok
// SIG undefined FUN_14666d4ca(void)

undefined8 FUN_14666d4ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d4e8 FUN_14666d4e8 body=29 status=ok
// SIG undefined FUN_14666d4e8(void)

undefined8 FUN_14666d4e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d506 FUN_14666d506 body=93 status=ok
// SIG undefined FUN_14666d506(void)

void FUN_14666d506(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3f060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba3f310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14666d564 FUN_14666d564 body=29 status=ok
// SIG undefined FUN_14666d564(void)

undefined8 FUN_14666d564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d582 FUN_14666d582 body=29 status=ok
// SIG undefined FUN_14666d582(void)

undefined8 FUN_14666d582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d5a0 FUN_14666d5a0 body=93 status=ok
// SIG undefined FUN_14666d5a0(void)

void FUN_14666d5a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba3ff10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14666d5fe FUN_14666d5fe body=29 status=ok
// SIG undefined FUN_14666d5fe(void)

undefined8 FUN_14666d5fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d61c FUN_14666d61c body=29 status=ok
// SIG undefined FUN_14666d61c(void)

undefined8 FUN_14666d61c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d63a FUN_14666d63a body=93 status=ok
// SIG undefined FUN_14666d63a(void)

void FUN_14666d63a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14666d698 FUN_14666d698 body=9 status=ok
// SIG undefined FUN_14666d698(void)

void FUN_14666d698(longlong param_1)

{
  FUN_145702696(param_1 + 0x10);
  return;
}



// FUNCTION 14666d6a2 FUN_14666d6a2 body=29 status=ok
// SIG undefined FUN_14666d6a2(void)

undefined8 FUN_14666d6a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d6c0 FUN_14666d6c0 body=93 status=ok
// SIG undefined FUN_14666d6c0(void)

void FUN_14666d6c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14666d71e FUN_14666d71e body=136 status=ok
// SIG undefined FUN_14666d71e(void)

void FUN_14666d71e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar4 != (longlong *)0x0) {
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14666d7a6 FUN_14666d7a6 body=29 status=ok
// SIG undefined FUN_14666d7a6(void)

undefined8 FUN_14666d7a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d7c4 FUN_14666d7c4 body=29 status=ok
// SIG undefined FUN_14666d7c4(void)

undefined8 FUN_14666d7c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666d7e2 FUN_14666d7e2 body=153 status=ok
// SIG undefined FUN_14666d7e2(void)

undefined8 * FUN_14666d7e2(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_3 < 4) {
    local_38 = 0;
    local_30 = 0;
    FUN_14009d848(&local_38,param_4);
    FUN_1448b6402(param_1 + (ulonglong)param_3 * 0x18 + 8,&local_40,&local_38);
    FUN_1449db362(&local_38);
    *param_2 = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666d87c FUN_14666d87c body=55 status=ok
// SIG undefined FUN_14666d87c(void)

void FUN_14666d87c(longlong param_1,uint param_2,longlong *param_3)

{
  if (param_2 < 4) {
    if (*param_3 != 0) {
      FUN_14480f766(param_1 + (ulonglong)param_2 * 0x18 + 8);
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 14666d8ce FUN_14666d8ce body=162 status=ok
// SIG undefined FUN_14666d8ce(void)

undefined8 * FUN_14666d8ce(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145a1c57a(&local_38,param_3);
  FUN_145a1c5f8(param_1 + 200,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666d972 FUN_14666d972 body=41 status=ok
// SIG undefined FUN_14666d972(void)

void FUN_14666d972(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 200);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d99c FUN_14666d99c body=41 status=ok
// SIG undefined FUN_14666d99c(void)

void FUN_14666d99c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0xe0);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666d9c6 FUN_14666d9c6 body=162 status=ok
// SIG undefined FUN_14666d9c6(void)

undefined8 * FUN_14666d9c6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145a1c57a(&local_38,param_3);
  FUN_145a1c5f8(param_1 + 0x128,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666da6a FUN_14666da6a body=41 status=ok
// SIG undefined FUN_14666da6a(void)

void FUN_14666da6a(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x128);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666da94 FUN_14666da94 body=41 status=ok
// SIG undefined FUN_14666da94(void)

void FUN_14666da94(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x338);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666dabe FUN_14666dabe body=29 status=ok
// SIG undefined FUN_14666dabe(void)

undefined8 FUN_14666dabe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666dadc FUN_14666dadc body=29 status=ok
// SIG undefined FUN_14666dadc(void)

undefined8 FUN_14666dadc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666dafa FUN_14666dafa body=29 status=ok
// SIG undefined FUN_14666dafa(void)

undefined8 FUN_14666dafa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666db18 FUN_14666db18 body=93 status=ok
// SIG undefined FUN_14666db18(void)

void FUN_14666db18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba40bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14666db76 FUN_14666db76 body=29 status=ok
// SIG undefined FUN_14666db76(void)

undefined8 FUN_14666db76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666db94 FUN_14666db94 body=93 status=ok
// SIG undefined FUN_14666db94(void)

void FUN_14666db94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba40e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14666dbf2 FUN_14666dbf2 body=124 status=ok
// SIG undefined FUN_14666dbf2(void)

void FUN_14666dbf2(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666dc70 FUN_14666dc70 body=9 status=ok
// SIG undefined FUN_14666dc70(void)

void FUN_14666dc70(longlong param_1)

{
  FUN_1458ef360(param_1 + 0x10);
  return;
}



// FUNCTION 14666dc7a FUN_14666dc7a body=29 status=ok
// SIG undefined FUN_14666dc7a(void)

undefined8 FUN_14666dc7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666dc98 FUN_14666dc98 body=93 status=ok
// SIG undefined FUN_14666dc98(void)

void FUN_14666dc98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba411b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14666dcf6 FUN_14666dcf6 body=192 status=ok
// SIG undefined FUN_14666dcf6(void)

void FUN_14666dcf6(undefined4 *param_1)

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
  *puVar1 = 0x14ba41a20;
  puVar1[3] = &DAT_14cbf4b94;
  puVar1[4] = FUN_145acaa7a;
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



// FUNCTION 14666ddb8 FUN_14666ddb8 body=312 status=ok
// SIG undefined FUN_14666ddb8(void)

undefined8 FUN_14666ddb8(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(&local_48,L"Binaries/ThirdParty/Steamworks");
  FUN_1401afab0(&local_78);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1412cfe60(&local_68,&local_78,iVar1 + 1 + (uint)(local_70 == 0));
  FUN_1401aebe8(&local_68,local_48,iVar1);
  FUN_1412cfe60(&local_58,&local_68,(local_60 == 0) + '\n');
  FUN_1401aebe8(&local_58,L"Steamv157",9);
  FUN_1412cfe60(param_1,&local_58,(local_50 == 0) + '\a');
  FUN_1401aebe8(param_1,L"Win64/",6);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666def2 FUN_14666def2 body=139 status=ok
// SIG undefined FUN_14666def2(void)

undefined8 * FUN_14666def2(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_LAB_14ba41920;
  *(undefined1 *)(param_1 + 1) = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_141369f9a(&DAT_14c846b20,L"Port=",(longlong)param_1 + 0xc);
  if (cVar1 == '\0') {
    FUN_1414d73b6(DAT_14c872ce0,&DAT_149e2c0f4,L"Port",(longlong)param_1 + 0xc,&DAT_14c872ce8);
  }
  return param_1;
}



// FUNCTION 14666df7e FUN_14666df7e body=93 status=ok
// SIG undefined FUN_14666df7e(void)

void FUN_14666df7e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 1) != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
             ::vftable;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = 0x14ba41a20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = uVar1;
  return;
}



// FUNCTION 14666dfdc FUN_14666dfdc body=94 status=ok
// SIG undefined FUN_14666dfdc(void)

undefined8 * FUN_14666dfdc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba41a90;
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14666e03a FUN_14666e03a body=34 status=ok
// SIG undefined FUN_14666e03a(void)

undefined8 FUN_14666e03a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14666e05c FUN_14666e05c body=35 status=ok
// SIG undefined FUN_14666e05c(void)

void FUN_14666e05c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458b4f8c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba41bb0;
  return;
}



// FUNCTION 14666e07f FUN_14666e07f body=47 status=ok
// SIG undefined FUN_14666e07f(void)

longlong FUN_14666e07f(void)

{
  if (DAT_14cbf4bc0 == 0) {
    FUN_140f50038(&DAT_14cbf4bc0,&PTR_s__Script_OnlineSubsystemSteam_14ba41ec8);
  }
  return DAT_14cbf4bc0;
}



// FUNCTION 14666e0ae FUN_14666e0ae body=47 status=ok
// SIG undefined FUN_14666e0ae(void)

longlong FUN_14666e0ae(void)

{
  if (DAT_14cbf4ba8 == 0) {
    FUN_14073dd9a(&DAT_14cbf4ba8,&PTR_LAB_14ba41b68);
  }
  return DAT_14cbf4ba8;
}



// FUNCTION 14666e0dd FUN_14666e0dd body=47 status=ok
// SIG undefined FUN_14666e0dd(void)

longlong FUN_14666e0dd(void)

{
  if (DAT_14cbf4bd8 == 0) {
    FUN_14073dd9a(&DAT_14cbf4bd8,&PTR_LAB_14ba41f98);
  }
  return DAT_14cbf4bd8;
}



// FUNCTION 14666e10c FUN_14666e10c body=47 status=ok
// SIG undefined FUN_14666e10c(void)

longlong FUN_14666e10c(void)

{
  if (DAT_14cbf4bf0 == 0) {
    FUN_14073dd9a(&DAT_14cbf4bf0,&PTR_LAB_14ba42048);
  }
  return DAT_14cbf4bf0;
}



// FUNCTION 14666e13c FUN_14666e13c body=164 status=ok
// SIG undefined FUN_14666e13c(void)

undefined8 * FUN_14666e13c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_1460d0bd6();
  *param_1 = &PTR_FUN_14ba42400;
  param_1[0x70] = param_2;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  param_1[0x71] = *puVar1;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  param_1[0x72] = *puVar1;
  return param_1;
}



// FUNCTION 14666e1e0 FUN_14666e1e0 body=134 status=ok
// SIG undefined FUN_14666e1e0(void)

undefined8 FUN_14666e1e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"DeleteFriendsList() is not supported");
  if (((int)param_4[1] != 0) && (param_4 = (longlong *)*param_4, param_4 != (longlong *)0x0)) {
    local_48 = local_38;
    (**(code **)(*param_4 + 0x60))(param_4,param_2,0,param_3);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666e268 FUN_14666e268 body=369 status=ok
// SIG undefined FUN_14666e268(void)

undefined8 FUN_14666e268(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (((((int)param_2 < 4) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) &&
      (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x388) + 8))(), cVar6 != '\0')) &&
     ((*(longlong *)(param_1 + 0x390) != 0 &&
      (*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3cc))))) {
    lVar7 = param_1 + 0x3d0;
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x3d8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x3e0) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      while (lVar7 = *(longlong *)(param_1 + 0x398) + (longlong)iVar8 * 0x20,
            *(uint *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar8 * 0x20) != param_2) {
        iVar8 = *(int *)(lVar7 + 0x18);
        if (iVar8 == -1) {
          return 0;
        }
      }
      if (lVar7 == 0) {
        return 0;
      }
      if ((longlong *)(lVar7 + 8) == (longlong *)0x0) {
        return 0;
      }
      if (*(int *)(lVar7 + 0x10) < 1) {
        return 1;
      }
      lVar10 = 8;
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(lVar7 + 8);
        uVar4 = *(undefined8 *)(lVar3 + -8 + lVar10);
        plVar5 = *(longlong **)(lVar3 + lVar10);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar8 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar8 + 1U) {
          FUN_140b722da(param_4,iVar8);
        }
        lVar3 = *param_4;
        *(undefined8 *)(lVar3 + (longlong)iVar8 * 0x10) = uVar4;
        *(longlong **)(lVar3 + 8 + (longlong)iVar8 * 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar9 < *(int *)(lVar7 + 0x10));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14666e3da FUN_14666e3da body=172 status=ok
// SIG undefined FUN_14666e3da(void)

void FUN_14666e3da(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38 [2];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  if ((ulonglong)*(uint *)(param_1 + 0x1c) < 4) {
    puVar2 = (undefined2 *)(&PTR_u_default_14ba470b8)[*(uint *)(param_1 + 0x1c)];
  }
  else {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140056680(local_38,puVar2);
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
    local_48 = local_28;
    (**(code **)(*plVar1 + 0x60))
              (plVar1,*(undefined4 *)(param_1 + 0x18),CONCAT71((int7)((ulonglong)local_48 >> 8),1),
               local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666e488 FUN_14666e488 body=99 status=ok
// SIG undefined FUN_14666e488(void)

undefined8 * FUN_14666e488(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_1460d08f8();
  *param_1 = &PTR_FUN_14ba42870;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = param_2;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  param_1[0x31] = *puVar1;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  param_1[0x32] = *puVar1;
  return param_1;
}



// FUNCTION 14666e4ec FUN_14666e4ec body=246 status=ok
// SIG undefined FUN_14666e4ec(void)

undefined8 FUN_14666e4ec(longlong param_1,undefined8 param_2,int param_3)

{
  char *_Str;
  size_t sVar1;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_3 == 0) && (*(undefined8 **)(param_1 + 400) != (undefined8 *)0x0)) {
    _Str = (char *)(**(code **)**(undefined8 **)(param_1 + 400))();
    local_38 = 0;
    if (_Str == (char *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar1 = strlen(_Str);
      FUN_1446e6fe8(local_138,_Str,sVar1 & 0xffffffff,1);
    }
    FUN_140056680(param_2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_158);
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14666e5e4 FUN_14666e5e4 body=242 status=ok
// SIG undefined FUN_14666e5e4(void)

undefined8 FUN_14666e5e4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char *_Str;
  size_t sVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 != (longlong *)0x0) {
    _Str = (char *)(**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_3 + 0x18));
    local_38 = 0;
    if (_Str == (char *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = strlen(_Str);
      FUN_1446e6fe8(local_138,_Str,sVar2 & 0xffffffff,1);
    }
    FUN_140056680(param_2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_158);
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14666e6d8 FUN_14666e6d8 body=213 status=ok
// SIG undefined FUN_14666e6d8(void)

undefined8 *
FUN_14666e6d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_38);
  param_1[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44ad0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_140df9946(param_3,param_1 + 6);
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_141532ff6(param_1 + 0xb,param_4);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666e7ae FUN_14666e7ae body=509 status=ok
// SIG undefined FUN_14666e7ae(void)

undefined8 FUN_14666e7ae(undefined8 param_1,char *param_2,longlong *param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1;
  if (*param_2 == '\x06') {
    FUN_1400021e4(&local_20,&local_40);
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    pwVar2 = L"%s_s";
  }
  else {
    uVar1 = 0;
    switch(*param_2) {
    case '\x01':
      FUN_1400021e4(&local_20,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"%s_i";
      break;
    default:
      goto switchD_14666e88e_caseD_2;
    case '\x03':
      FUN_1400021e4(&local_20,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"%s_l";
      break;
    case '\x05':
      FUN_1400021e4(&local_20,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"%s_d";
      break;
    case '\a':
      FUN_1400021e4(&local_20,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"%s_f";
      break;
    case '\t':
      FUN_1400021e4(&local_20,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      pwVar2 = L"%s_b";
    }
  }
  FUN_140002266(&local_30,pwVar2,puVar3);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = 1;
switchD_14666e88e_caseD_2:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666e9ac FUN_14666e9ac body=573 status=ok
// SIG undefined FUN_14666e9ac(void)

ulonglong FUN_14666e9ac(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  undefined8 uVar8;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  ulonglong local_48;
  undefined7 uVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x20))();
  uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (lVar3 == 0) goto LAB_14666eac5;
  if (*(char *)(lVar3 + 0x3a) == '\0') {
    lVar3 = *(longlong *)(lVar3 + 0x100);
    if (lVar3 != 0) {
      iVar2 = *(int *)(lVar3 + 8);
      if (iVar2 == 1) {
        cVar1 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x28))();
        if (cVar1 == '\0') {
          iVar2 = *(int *)(lVar3 + 8);
          goto LAB_14666eb6c;
        }
        puVar4 = (undefined8 *)FUN_14001cc68(0x110,0x10);
        lVar3 = param_1[0x4f];
        QueryPerformanceCounter(&local_50);
        puVar4[1] = (double)local_50.QuadPart * DAT_14c83f420 + 16777216.0;
        *puVar4 = &PTR_LAB_14ba46e30;
        puVar4[2] = lVar3;
        *(undefined4 *)(puVar4 + 3) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
        puVar4[4] = 0;
        ppuVar5 = &PTR_FUN_14ba453e0;
      }
      else {
LAB_14666eb6c:
        if (iVar2 != 2) goto LAB_14666eac5;
        puVar4 = (undefined8 *)FUN_14001cc68(0x110,0x10);
        lVar3 = param_1[0x4f];
        QueryPerformanceCounter(&local_50);
        puVar4[1] = (double)local_50.QuadPart * DAT_14c83f420 + 16777216.0;
        *puVar4 = &PTR_LAB_14ba46e30;
        puVar4[2] = lVar3;
        *(undefined4 *)(puVar4 + 3) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
        puVar4[4] = 0;
        ppuVar5 = &PTR_FUN_14ba45420;
      }
      *puVar4 = ppuVar5;
      puVar4[5] = param_2;
      FUN_1412c5ebc(puVar4 + 6,param_3);
      *(undefined1 *)(puVar4 + 0x21) = param_4;
      FUN_1410d2116(*(undefined8 *)(param_1[0x4f] + 0x210),puVar4);
      goto LAB_14666eac5;
    }
    lVar3 = *param_1;
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(param_3 + 0x18);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(lVar3 + 0x38) = uVar8;
    FUN_144a787a6(lVar3 + 0x48,param_3 + 0x20);
    *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(param_3 + 0x30);
    FUN_1412c5fc6(lVar3 + 0x60,param_3 + 0x38);
    FUN_1412c6060(lVar3 + 0xb0,param_3 + 0x88);
    lVar3 = *param_1;
    uVar6 = CONCAT71(uVar7,1);
    uVar8 = 1;
  }
  (**(code **)(lVar3 + 0xb8))(param_1,param_2,uVar8);
LAB_14666eac5:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666ebea FUN_14666ebea body=441 status=ok
// SIG undefined FUN_14666ebea(void)

void FUN_14666ebea(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 0x148) = 7;
  lVar1 = *(longlong *)(param_2 + 0x100);
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x118);
    uVar4 = *(undefined8 *)(param_1 + 0x278);
    QueryPerformanceCounter(&local_50);
    puVar5[1] = (double)local_50.QuadPart * DAT_14c83f420 + 16777216.0;
    *puVar5 = &PTR_LAB_14ba46e30;
    puVar5[2] = uVar4;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    puVar5[4] = 0;
    *puVar5 = &PTR_FUN_14ba45530;
    puVar5[5] = uVar3;
    FUN_140df9946(uVar2,puVar5 + 6);
    FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x210),puVar5);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = *(undefined8 *)(param_1 + 0x278);
  QueryPerformanceCounter(&local_50);
  puVar5[1] = (double)local_50.QuadPart * DAT_14c83f420 + 16777216.0;
  *puVar5 = &PTR_LAB_14ba46e30;
  puVar5[2] = uVar3;
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
  puVar5[4] = 0;
  *puVar5 = &PTR_FUN_14ba45570;
  puVar5[5] = uVar2;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  FUN_1413d6220(puVar5 + 6,param_3);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x210),puVar5);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666eda4 FUN_14666eda4 body=220 status=ok
// SIG undefined FUN_14666eda4(void)

undefined8 * FUN_14666eda4(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14ba46f50;
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2);
  puVar3[3] = *puVar4;
  *param_1 = puVar3;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar3;
  param_1[1] = plVar5;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar5;
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  return param_1;
}



// FUNCTION 14666ee80 FUN_14666ee80 body=478 status=ok
// SIG undefined FUN_14666ee80(void)

undefined8 FUN_14666ee80(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_2 + 0x100);
  uVar11 = 0xffffffff;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 8) == 1)) {
    cVar9 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x28))();
    if (cVar9 != '\0') {
      lVar4 = *(longlong *)(param_3 + 0x100);
      uVar11 = *(undefined8 *)(lVar4 + 0x10);
      lVar5 = *(longlong *)(lVar4 + 0x18);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(lVar3 + 0x18);
      *(undefined8 *)(lVar3 + 0x10) = uVar11;
      *(longlong *)(lVar3 + 0x18) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x20);
      lVar5 = *(longlong *)(lVar4 + 0x28);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x20) = uVar11;
      *(longlong *)(lVar3 + 0x28) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      *(undefined1 *)(lVar3 + 0x40) = *(undefined1 *)(lVar4 + 0x40);
      puVar10 = (undefined8 *)FUN_14001cc68(0x60,0x10);
      uVar11 = *(undefined8 *)(lVar3 + 0x30);
      uVar7 = *(undefined8 *)(param_2 + 0x118);
      uVar8 = *(undefined8 *)(param_1 + 0x278);
      QueryPerformanceCounter(&local_40);
      puVar10[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
      *puVar10 = &PTR_LAB_14ba46e30;
      puVar10[2] = uVar8;
      *(undefined4 *)(puVar10 + 3) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
      puVar10[4] = 0;
      *puVar10 = &PTR_FUN_14ba457a0;
      *(undefined1 *)(puVar10 + 5) = 0;
      *(undefined8 *)((longlong)puVar10 + 0x2c) = uVar7;
      FUN_140df9946(uVar11,puVar10 + 7);
      FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x210),puVar10);
      uVar11 = 0x3e5;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666f060 FUN_14666f060 body=830 status=ok
// SIG undefined FUN_14666f060(void)

void FUN_14666f060(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  wchar_t *local_70;
  int local_68;
  undefined *local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(local_48,&DAT_14c846b20);
  FUN_140056680(&local_58,L"+connect_lobby");
  iVar7 = local_50 + -1;
  puVar6 = local_58;
  if (local_50 == 0) {
    puVar6 = &DAT_149dfb77a;
    iVar7 = 0;
  }
  local_90 = 0xffffffff;
  local_98 = 1;
  iVar7 = FUN_1447ee042(local_48,puVar6,iVar7,1);
  if (iVar7 == -1) {
    FUN_140056680(&local_38,L"+connect");
    iVar7 = (int)uStack_30 + -1;
    pwVar5 = local_38;
    if ((int)uStack_30 == 0) {
      pwVar5 = L"";
      iVar7 = 0;
    }
    local_90 = 0xffffffff;
    local_98 = 1;
    iVar7 = FUN_1447ee042(local_48,pwVar5,iVar7,1);
    pwVar5 = local_38;
    if (iVar7 != -1) {
      iVar4 = (int)uStack_30 + -1;
      if ((int)uStack_30 == 0) {
        iVar4 = 0;
      }
      local_60 = &DAT_14c846b20 + (longlong)iVar4 * 2 + (longlong)iVar7 * 2;
      FUN_14619c2be(&local_70,&local_60,0);
      if (1 < local_68) {
        *(undefined4 *)(param_1 + 0x2f8) = 3;
        FUN_140002266(&local_88,L"-SteamConnectIP=%s",local_70);
        if ((wchar_t **)(param_1 + 0x310) == &local_88) {
          if (local_88 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x310) != 0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(param_1 + 0x310) = local_88;
          local_88 = (wchar_t *)0x0;
          *(undefined4 *)(param_1 + 0x318) = uStack_80;
          *(undefined4 *)(param_1 + 0x31c) = uStack_7c;
        }
      }
      pwVar5 = local_38;
      if (local_70 != (wchar_t *)0x0) {
        FUN_1400020a8();
        pwVar5 = local_38;
      }
    }
  }
  else {
    iVar4 = local_50 + -1;
    if (local_50 == 0) {
      iVar4 = 0;
    }
    local_60 = &DAT_14c846b20 + (longlong)iVar4 * 2 + (longlong)iVar7 * 2;
    FUN_14619c2be(&local_70,&local_60,0);
    pwVar5 = local_70;
    if (local_68 == 0) {
      pwVar5 = L"";
    }
    local_78 = _wcstoui64(pwVar5,(wchar_t **)0x0,10);
    pwVar5 = local_70;
    if (0 < (longlong)local_78) {
      *(undefined4 *)(param_1 + 0x2f8) = 1;
      FUN_148fb24dc(&local_88,&local_78);
      local_38 = *(wchar_t **)(param_1 + 0x300);
      plVar3 = *(longlong **)(param_1 + 0x308);
      *(wchar_t **)(param_1 + 0x300) = local_88;
      *(ulonglong *)(param_1 + 0x308) = CONCAT44(uStack_7c,uStack_80);
      uStack_30._0_4_ = (int)plVar3;
      uStack_80 = (int)uStack_30;
      uStack_30._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
      uStack_7c = uStack_30._4_4_;
      pwVar5 = local_70;
      local_88 = local_38;
      uStack_30 = plVar3;
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
          pwVar5 = local_70;
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            pwVar5 = local_70;
          }
        }
      }
    }
  }
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666f3a0 FUN_14666f3a0 body=162 status=ok
// SIG undefined FUN_14666f3a0(void)

undefined8 * FUN_14666f3a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (1 < *(int *)(param_3 + 8)) {
    FUN_140e76d7a(&local_28,param_3);
    *param_2 = local_28;
    param_2[1] = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14666f444 FUN_14666f444 body=205 status=ok
// SIG undefined FUN_14666f444(void)

void FUN_14666f444(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x120))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x278) + 0x68))
                (*(longlong **)(param_1 + 0x278),&local_30);
      if (local_30 != (longlong *)0x0) {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x138))
                          (*(longlong **)(param_1 + 0x278),param_2);
        if (cVar3 == '\0') {
          (**(code **)(*local_30 + 0x58))(local_30,param_2);
        }
        else {
          (**(code **)(*local_30 + 8))();
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666f512 FUN_14666f512 body=40 status=ok
// SIG undefined FUN_14666f512(void)

undefined8 FUN_14666f512(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f53a FUN_14666f53a body=40 status=ok
// SIG undefined FUN_14666f53a(void)

undefined8 FUN_14666f53a(undefined8 param_1,int param_2)

{
  FUN_145a25e5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f562 FUN_14666f562 body=40 status=ok
// SIG undefined FUN_14666f562(void)

undefined8 FUN_14666f562(undefined8 param_1,int param_2)

{
  FUN_145918d2a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f58a FUN_14666f58a body=38 status=ok
// SIG undefined FUN_14666f58a(void)

undefined8 FUN_14666f58a(undefined8 param_1,int param_2)

{
  FUN_1458580d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f5b0 FUN_14666f5b0 body=38 status=ok
// SIG undefined FUN_14666f5b0(void)

void FUN_14666f5b0(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x20);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666f5d6 FUN_14666f5d6 body=38 status=ok
// SIG undefined FUN_14666f5d6(void)

void FUN_14666f5d6(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x38);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14666f5fc FUN_14666f5fc body=159 status=ok
// SIG undefined FUN_14666f5fc(void)

undefined8 * FUN_14666f5fc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14009d848(&local_38,param_3);
  FUN_1448b6402(param_1 + 0x50,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666f69c FUN_14666f69c body=29 status=ok
// SIG undefined FUN_14666f69c(void)

undefined8 FUN_14666f69c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f6ba FUN_14666f6ba body=163 status=ok
// SIG undefined FUN_14666f6ba(void)

longlong FUN_14666f6ba(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  iVar2 = *(int *)(param_1 + 0x2c0);
  if (iVar2 < 1) {
    lVar4 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2b8) + 0x100 + lVar5);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == 1)) {
        cVar1 = (**(code **)**(undefined8 **)(lVar4 + 0x30))(*(undefined8 **)(lVar4 + 0x30),param_2)
        ;
        if (cVar1 != '\0') {
          lVar4 = lVar5 + *(longlong *)(param_1 + 0x2b8);
          break;
        }
        iVar2 = *(int *)(param_1 + 0x2c0);
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x150;
      lVar4 = 0;
    } while (lVar3 < iVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return lVar4;
}



// FUNCTION 14666f75e FUN_14666f75e body=29 status=ok
// SIG undefined FUN_14666f75e(void)

undefined8 FUN_14666f75e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f77c FUN_14666f77c body=83 status=ok
// SIG undefined FUN_14666f77c(void)

undefined8 * FUN_14666f77c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43c70;
  plVar3 = (longlong *)param_1[4];
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f7d0 FUN_14666f7d0 body=83 status=ok
// SIG undefined FUN_14666f7d0(void)

undefined8 * FUN_14666f7d0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43cf0;
  plVar3 = (longlong *)param_1[4];
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f824 FUN_14666f824 body=83 status=ok
// SIG undefined FUN_14666f824(void)

undefined8 * FUN_14666f824(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba43db0;
  plVar3 = (longlong *)param_1[4];
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f878 FUN_14666f878 body=52 status=ok
// SIG undefined FUN_14666f878(void)

undefined8 * FUN_14666f878(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba446d0;
  FUN_1449db362(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f8ac FUN_14666f8ac body=29 status=ok
// SIG undefined FUN_14666f8ac(void)

undefined8 FUN_14666f8ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f8ca FUN_14666f8ca body=52 status=ok
// SIG undefined FUN_14666f8ca(void)

undefined8 * FUN_14666f8ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba453e0;
  FUN_14124f074(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f8fe FUN_14666f8fe body=85 status=ok
// SIG undefined FUN_14666f8fe(void)

undefined8 * FUN_14666f8fe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba45530;
  plVar3 = (longlong *)param_1[7];
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f954 FUN_14666f954 body=52 status=ok
// SIG undefined FUN_14666f954(void)

undefined8 * FUN_14666f954(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba45570;
  FUN_1449db362(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f988 FUN_14666f988 body=85 status=ok
// SIG undefined FUN_14666f988(void)

undefined8 * FUN_14666f988(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba457a0;
  plVar3 = (longlong *)param_1[8];
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f9de FUN_14666f9de body=29 status=ok
// SIG undefined FUN_14666f9de(void)

undefined8 FUN_14666f9de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666f9fc FUN_14666f9fc body=132 status=ok
// SIG undefined FUN_14666f9fc(void)

void FUN_14666f9fc(longlong param_1,int param_2)

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



// FUNCTION 14666fa82 FUN_14666fa82 body=29 status=ok
// SIG undefined FUN_14666fa82(void)

undefined8 FUN_14666fa82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666faa0 FUN_14666faa0 body=29 status=ok
// SIG undefined FUN_14666faa0(void)

undefined8 FUN_14666faa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666fabe FUN_14666fabe body=29 status=ok
// SIG undefined FUN_14666fabe(void)

undefined8 FUN_14666fabe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666fadc FUN_14666fadc body=124 status=ok
// SIG undefined FUN_14666fadc(void)

void FUN_14666fadc(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666fb5a FUN_14666fb5a body=147 status=ok
// SIG undefined FUN_14666fb5a(void)

void FUN_14666fb5a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14666fbee FUN_14666fbee body=29 status=ok
// SIG undefined FUN_14666fbee(void)

undefined8 FUN_14666fbee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666fc0c FUN_14666fc0c body=29 status=ok
// SIG undefined FUN_14666fc0c(void)

undefined8 FUN_14666fc0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666fc2a FUN_14666fc2a body=29 status=ok
// SIG undefined FUN_14666fc2a(void)

undefined8 FUN_14666fc2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666fc48 FUN_14666fc48 body=192 status=ok
// SIG undefined FUN_14666fc48(void)

void FUN_14666fc48(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14ba4c120;
  puVar1[3] = &DAT_14cbf4e44;
  puVar1[4] = FUN_145a2ce1a;
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



// FUNCTION 14666fd0a FUN_14666fd0a body=137 status=ok
// SIG undefined FUN_14666fd0a(void)

undefined8 * FUN_14666fd0a(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *param_1 = &PTR_FUN_14ba4b5f0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 14666fd94 FUN_14666fd94 body=39 status=ok
// SIG undefined FUN_14666fd94(void)

undefined8 FUN_14666fd94(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,&DAT_149e063bc,*(undefined4 *)(param_1 + 0xdc));
  return param_2;
}



// FUNCTION 14666fdbc FUN_14666fdbc body=257 status=ok
// SIG undefined FUN_14666fdbc(void)

undefined8 *
FUN_14666fdbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_40);
  param_1[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba4bca0;
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = param_4;
  param_1[7] = 0;
  iVar1 = *(int *)(param_5 + 1);
  uVar2 = *param_5;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1413eadba(param_1 + 7,iVar1,0);
    FUN_1413ead8c(param_1[7],uVar2,iVar1);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14666febe FUN_14666febe body=172 status=ok
// SIG undefined FUN_14666febe(void)

undefined8 * FUN_14666febe(undefined8 *param_1,undefined8 param_2)

{
  FUN_145aa403c(param_1,DAT_14cb8e468,param_2);
  *param_1 = &PTR_FUN_14ba4a940;
  param_1[0xe] = &PTR_FUN_14ba4abb0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xda) = 0;
  memset((void *)((longlong)param_1 + 0xdc),0,0x8d);
  memset(param_1 + 0x2e,0,0xd0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x48),4000);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  return param_1;
}



// FUNCTION 14666ff6a FUN_14666ff6a body=29 status=ok
// SIG undefined FUN_14666ff6a(void)

undefined8 FUN_14666ff6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14666ff88 FUN_14666ff88 body=211 status=ok
// SIG undefined FUN_14666ff88(void)

longlong FUN_14666ff88(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  iVar2 = *(int *)(param_1 + 0x2c0);
  *(uint *)(param_1 + 0x2c0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2c4) < iVar2 + 1U) {
    FUN_145cb6262((longlong *)(param_1 + 0x2b8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x2b8);
  lVar4 = (longlong)iVar2 * 0x150;
  FUN_14589e2aa(lVar3 + lVar4,param_3);
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14ba3d840;
  *(undefined8 *)(lVar3 + 0x118 + lVar4) = param_2;
  *(undefined4 *)(lVar3 + 0x120 + lVar4) = 0xffffffff;
  *(undefined1 *)(lVar3 + 0x124 + lVar4) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x128 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x138 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x148 + lVar4) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return lVar3 + lVar4;
}



// FUNCTION 14667005c FUN_14667005c body=263 status=ok
// SIG undefined FUN_14667005c(void)

longlong FUN_14667005c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  iVar2 = *(int *)(param_1 + 0x2c0);
  *(uint *)(param_1 + 0x2c0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2c4) < iVar2 + 1U) {
    FUN_145cb6262((longlong *)(param_1 + 0x2b8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x2b8);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x150);
  *puVar1 = &PTR_FUN_14b4c3b18;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1412c5ebc(puVar1 + 5,param_3);
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  *puVar1 = &PTR_FUN_14ba3d840;
  puVar1[0x23] = param_2;
  *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x124) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return lVar3 + (longlong)iVar2 * 0x150;
}



// FUNCTION 146670164 FUN_146670164 body=111 status=ok
// SIG undefined FUN_146670164(void)

void FUN_146670164(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (0 < (int)*(uint *)(param_1 + 0x2c0)) {
    plVar3 = (longlong *)(param_1 + 0x2b8);
    plVar1 = (longlong *)(*plVar3 + 0x118);
    uVar2 = 0;
    do {
      if (*plVar1 == param_2) {
        FUN_14592e564(plVar3);
        FUN_14592e4b2(plVar3);
        break;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x2a;
    } while (*(uint *)(param_1 + 0x2c0) != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001466701bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return;
}



// FUNCTION 1466701d4 FUN_1466701d4 body=159 status=ok
// SIG undefined FUN_1466701d4(void)

undefined8 * FUN_1466701d4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14114e6dc(&local_38,param_3);
  FUN_140c6314c(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146670274 FUN_146670274 body=38 status=ok
// SIG undefined FUN_146670274(void)

void FUN_146670274(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14667029a FUN_14667029a body=93 status=ok
// SIG undefined FUN_14667029a(void)

void FUN_14667029a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba4c120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466702f8 FUN_1466702f8 body=29 status=ok
// SIG undefined FUN_1466702f8(void)

undefined8 FUN_1466702f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670316 FUN_146670316 body=29 status=ok
// SIG undefined FUN_146670316(void)

undefined8 FUN_146670316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670334 FUN_146670334 body=29 status=ok
// SIG undefined FUN_146670334(void)

undefined8 FUN_146670334(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670352 FUN_146670352 body=29 status=ok
// SIG undefined FUN_146670352(void)

undefined8 FUN_146670352(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670370 FUN_146670370 body=29 status=ok
// SIG undefined FUN_146670370(void)

undefined8 FUN_146670370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667038e FUN_14667038e body=29 status=ok
// SIG undefined FUN_14667038e(void)

undefined8 FUN_14667038e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466703ac FUN_1466703ac body=29 status=ok
// SIG undefined FUN_1466703ac(void)

undefined8 FUN_1466703ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466703ca FUN_1466703ca body=29 status=ok
// SIG undefined FUN_1466703ca(void)

undefined8 FUN_1466703ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466703e8 FUN_1466703e8 body=29 status=ok
// SIG undefined FUN_1466703e8(void)

undefined8 FUN_1466703e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670406 FUN_146670406 body=29 status=ok
// SIG undefined FUN_146670406(void)

undefined8 FUN_146670406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670424 FUN_146670424 body=29 status=ok
// SIG undefined FUN_146670424(void)

undefined8 FUN_146670424(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670442 FUN_146670442 body=29 status=ok
// SIG undefined FUN_146670442(void)

undefined8 FUN_146670442(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670460 FUN_146670460 body=29 status=ok
// SIG undefined FUN_146670460(void)

undefined8 FUN_146670460(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667047e FUN_14667047e body=29 status=ok
// SIG undefined FUN_14667047e(void)

undefined8 FUN_14667047e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667049c FUN_14667049c body=29 status=ok
// SIG undefined FUN_14667049c(void)

undefined8 FUN_14667049c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466704ba FUN_1466704ba body=29 status=ok
// SIG undefined FUN_1466704ba(void)

undefined8 FUN_1466704ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466704d8 FUN_1466704d8 body=29 status=ok
// SIG undefined FUN_1466704d8(void)

undefined8 FUN_1466704d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466704f5 FUN_1466704f5 body=47 status=ok
// SIG undefined FUN_1466704f5(void)

longlong FUN_1466704f5(void)

{
  if (DAT_14cbf4fa8 == 0) {
    FUN_140f50038(&DAT_14cbf4fa8,&PTR_s__Script_RuntimeTests_14ba4d068);
  }
  return DAT_14cbf4fa8;
}



// FUNCTION 146670524 FUN_146670524 body=47 status=ok
// SIG undefined FUN_146670524(void)

longlong FUN_146670524(void)

{
  if (DAT_14cbf4f90 == 0) {
    FUN_14073dd9a(&DAT_14cbf4f90,&PTR_LAB_14ba4c978);
  }
  return DAT_14cbf4f90;
}



// FUNCTION 146670554 FUN_146670554 body=231 status=ok
// SIG undefined FUN_146670554(void)

void FUN_146670554(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba4d160;
  local_28[3] = &DAT_14cbf4fbc;
  local_28[4] = FUN_1459d0d80;
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



// FUNCTION 14667063c FUN_14667063c body=40 status=ok
// SIG undefined FUN_14667063c(void)

undefined8 FUN_14667063c(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670664 FUN_146670664 body=93 status=ok
// SIG undefined FUN_146670664(void)

void FUN_146670664(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba4d160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466706c2 FUN_1466706c2 body=34 status=ok
// SIG undefined FUN_1466706c2(void)

undefined8 FUN_1466706c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1466706e4 FUN_1466706e4 body=47 status=ok
// SIG undefined FUN_1466706e4(void)

longlong FUN_1466706e4(void)

{
  if (DAT_14cbf4ff0 == 0) {
    FUN_1409ce572(&DAT_14cbf4ff0,&PTR_FUN_14ba4d2a0);
  }
  return DAT_14cbf4ff0;
}



// FUNCTION 146670713 FUN_146670713 body=47 status=ok
// SIG undefined FUN_146670713(void)

longlong FUN_146670713(void)

{
  if (DAT_14cbf5030 == 0) {
    FUN_14073dd9a(&DAT_14cbf5030,&PTR_LAB_14ba4d580);
  }
  return DAT_14cbf5030;
}



// FUNCTION 146670742 FUN_146670742 body=47 status=ok
// SIG undefined FUN_146670742(void)

longlong FUN_146670742(void)

{
  if (DAT_14cbf5010 == 0) {
    FUN_14000fc22(&DAT_14cbf5010,&PTR_FUN_14ba4d3a8);
  }
  return DAT_14cbf5010;
}



// FUNCTION 146670771 FUN_146670771 body=47 status=ok
// SIG undefined FUN_146670771(void)

longlong FUN_146670771(void)

{
  if (DAT_14cbf5020 == 0) {
    FUN_14000fc22(&DAT_14cbf5020,&PTR_FUN_14ba4d470);
  }
  return DAT_14cbf5020;
}



// FUNCTION 1466707a0 FUN_1466707a0 body=34 status=ok
// SIG undefined FUN_1466707a0(void)

void FUN_1466707a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459f57da();
  FUN_14069c8d6(uVar1,&PTR_s_ClientQosResponse_14ba4d4f0,2);
  return;
}



// FUNCTION 1466707c2 FUN_1466707c2 body=94 status=ok
// SIG undefined FUN_1466707c2(void)

void FUN_1466707c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458aff94(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba4d5c0;
  puVar1[0x72] = &PTR_LAB_14ba4dc70;
  puVar1[0x89] = 0;
  *(undefined4 *)(puVar1 + 0x8a) = 0;
  puVar1[0x84] = 0;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  *(undefined1 *)(puVar1 + 0x88) = 0;
  return;
}



// FUNCTION 146670820 FUN_146670820 body=47 status=ok
// SIG undefined FUN_146670820(void)

longlong FUN_146670820(void)

{
  if (DAT_14cbf5048 == 0) {
    FUN_14073dd9a(&DAT_14cbf5048,&PTR_LAB_14ba4dd18);
  }
  return DAT_14cbf5048;
}



// FUNCTION 14667084f FUN_14667084f body=75 status=ok
// SIG undefined FUN_14667084f(void)

void FUN_14667084f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba4e5b0;
  puVar1[8] = 0;
  *(undefined2 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 14667089f FUN_14667089f body=49 status=ok
// SIG undefined FUN_14667089f(void)

longlong FUN_14667089f(void)

{
  if (DAT_14cbf5108 == 0) {
    FUN_14086a14e(&DAT_14cbf5108,&PTR_FUN_14ba4f3e8);
  }
  return DAT_14cbf5108;
}



// FUNCTION 1466708d0 FUN_1466708d0 body=47 status=ok
// SIG undefined FUN_1466708d0(void)

longlong FUN_1466708d0(void)

{
  if (DAT_14cbf5060 == 0) {
    FUN_14073dd9a(&DAT_14cbf5060,&PTR_LAB_14ba4e568);
  }
  return DAT_14cbf5060;
}



// FUNCTION 146670900 FUN_146670900 body=231 status=ok
// SIG undefined FUN_146670900(void)

void FUN_146670900(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14ba50d70;
  local_28[3] = &DAT_14cbf5070;
  local_28[4] = FUN_145c51fa6;
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



// FUNCTION 1466709e8 FUN_1466709e8 body=47 status=ok
// SIG undefined FUN_1466709e8(void)

longlong FUN_1466709e8(void)

{
  if (DAT_14cbf5078 == 0) {
    FUN_1409ce572(&DAT_14cbf5078,&PTR_FUN_14ba4e910);
  }
  return DAT_14cbf5078;
}



// FUNCTION 146670a17 FUN_146670a17 body=47 status=ok
// SIG undefined FUN_146670a17(void)

longlong FUN_146670a17(void)

{
  if (DAT_14cbf5090 == 0) {
    FUN_1409ce572(&DAT_14cbf5090,&PTR_FUN_14ba4e9a0);
  }
  return DAT_14cbf5090;
}



// FUNCTION 146670a46 FUN_146670a46 body=47 status=ok
// SIG undefined FUN_146670a46(void)

longlong FUN_146670a46(void)

{
  if (DAT_14cbf50a8 == 0) {
    FUN_14086a14e(&DAT_14cbf50a8,&PTR_FUN_14ba4eb90);
  }
  return DAT_14cbf50a8;
}



// FUNCTION 146670a76 FUN_146670a76 body=43 status=ok
// SIG undefined FUN_146670a76(void)

void FUN_146670a76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ba50380;
  return;
}



// FUNCTION 146670aa2 FUN_146670aa2 body=55 status=ok
// SIG undefined FUN_146670aa2(void)

void FUN_146670aa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf50c8 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf50c8 = FUN_140002ddd(FUN_146670ad9,uVar1,L"QosPingServerInfo");
  }
  return;
}



// FUNCTION 146670ad9 FUN_146670ad9 body=47 status=ok
// SIG undefined FUN_146670ad9(void)

longlong FUN_146670ad9(void)

{
  if (DAT_14cbf50c0 == 0) {
    FUN_14086a14e(&DAT_14cbf50c0,&PTR_FUN_14ba4ec88);
  }
  return DAT_14cbf50c0;
}



// FUNCTION 146670b08 FUN_146670b08 body=43 status=ok
// SIG undefined FUN_146670b08(void)

void FUN_146670b08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ba504f0;
  return;
}



// FUNCTION 146670b34 FUN_146670b34 body=55 status=ok
// SIG undefined FUN_146670b34(void)

void FUN_146670b34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf50e0 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf50e0 = FUN_140002ddd(FUN_146670b6b,uVar1,L"QosDatacenterInfo");
  }
  return;
}



// FUNCTION 146670b6b FUN_146670b6b body=49 status=ok
// SIG undefined FUN_146670b6b(void)

longlong FUN_146670b6b(void)

{
  if (DAT_14cbf50d8 == 0) {
    FUN_14086a14e(&DAT_14cbf50d8,&PTR_FUN_14ba4ee70);
  }
  return DAT_14cbf50d8;
}



// FUNCTION 146670b9c FUN_146670b9c body=43 status=ok
// SIG undefined FUN_146670b9c(void)

void FUN_146670b9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ba50650;
  return;
}



// FUNCTION 146670bc8 FUN_146670bc8 body=55 status=ok
// SIG undefined FUN_146670bc8(void)

void FUN_146670bc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf50f8 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf50f8 = FUN_140002ddd(FUN_146670bff,uVar1,L"QosRegionInfo");
  }
  return;
}



// FUNCTION 146670bff FUN_146670bff body=49 status=ok
// SIG undefined FUN_146670bff(void)

longlong FUN_146670bff(void)

{
  if (DAT_14cbf50f0 == 0) {
    FUN_14086a14e(&DAT_14cbf50f0,&PTR_FUN_14ba4f108);
  }
  return DAT_14cbf50f0;
}



// FUNCTION 146670c30 FUN_146670c30 body=43 status=ok
// SIG undefined FUN_146670c30(void)

void FUN_146670c30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ba507b0;
  return;
}



// FUNCTION 146670c5c FUN_146670c5c body=55 status=ok
// SIG undefined FUN_146670c5c(void)

void FUN_146670c5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5110 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf5110 = FUN_140002ddd(FUN_14667089f,uVar1,L"DatacenterQosInstance");
  }
  return;
}



// FUNCTION 146670c94 FUN_146670c94 body=43 status=ok
// SIG undefined FUN_146670c94(void)

void FUN_146670c94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14ba50910;
  return;
}



// FUNCTION 146670cc0 FUN_146670cc0 body=55 status=ok
// SIG undefined FUN_146670cc0(void)

void FUN_146670cc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5128 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf5128 = FUN_140002ddd(FUN_146670cf7,uVar1,L"RegionQosInstance");
  }
  return;
}



// FUNCTION 146670cf7 FUN_146670cf7 body=47 status=ok
// SIG undefined FUN_146670cf7(void)

longlong FUN_146670cf7(void)

{
  if (DAT_14cbf5120 == 0) {
    FUN_14086a14e(&DAT_14cbf5120,&PTR_FUN_14ba4f550);
  }
  return DAT_14cbf5120;
}



// FUNCTION 146670d26 FUN_146670d26 body=43 status=ok
// SIG undefined FUN_146670d26(void)

void FUN_146670d26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ba50a70;
  return;
}



// FUNCTION 146670d51 FUN_146670d51 body=47 status=ok
// SIG undefined FUN_146670d51(void)

longlong FUN_146670d51(void)

{
  if (DAT_14cbf5140 == 0) {
    FUN_14073dd9a(&DAT_14cbf5140,&PTR_LAB_14ba4fb48);
  }
  return DAT_14cbf5140;
}



// FUNCTION 146670d80 FUN_146670d80 body=40 status=ok
// SIG undefined FUN_146670d80(void)

undefined8 FUN_146670d80(undefined8 param_1,int param_2)

{
  FUN_145850f18();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670da8 FUN_146670da8 body=29 status=ok
// SIG undefined FUN_146670da8(void)

undefined8 FUN_146670da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670dc6 FUN_146670dc6 body=29 status=ok
// SIG undefined FUN_146670dc6(void)

undefined8 FUN_146670dc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670de4 FUN_146670de4 body=29 status=ok
// SIG undefined FUN_146670de4(void)

undefined8 FUN_146670de4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670e02 FUN_146670e02 body=29 status=ok
// SIG undefined FUN_146670e02(void)

undefined8 FUN_146670e02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670e20 FUN_146670e20 body=29 status=ok
// SIG undefined FUN_146670e20(void)

undefined8 FUN_146670e20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146670e3e FUN_146670e3e body=29 status=ok
// SIG undefined FUN_146670e3e(void)

undefined8 FUN_146670e3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


