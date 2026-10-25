// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1465878d6 FUN_1465878d6 body=29 status=ok
// SIG undefined FUN_1465878d6(void)

undefined8 FUN_1465878d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465878f4 FUN_1465878f4 body=68 status=ok
// SIG undefined FUN_1465878f4(void)

undefined8 * FUN_1465878f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f6dc0;
  plVar2 = (longlong *)param_1[4];
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146587938 FUN_146587938 body=118 status=ok
// SIG undefined FUN_146587938(void)

void FUN_146587938(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6dc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1465879ae FUN_1465879ae body=118 status=ok
// SIG undefined FUN_1465879ae(void)

void FUN_1465879ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6ea0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146587a24 FUN_146587a24 body=66 status=ok
// SIG undefined FUN_146587a24(void)

undefined8 * FUN_146587a24(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f6f10;
  plVar2 = (longlong *)param_1[4];
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146587a66 FUN_146587a66 body=118 status=ok
// SIG undefined FUN_146587a66(void)

void FUN_146587a66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f6e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6f10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146587adc FUN_146587adc body=93 status=ok
// SIG undefined FUN_146587adc(void)

void FUN_146587adc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146587b3a FUN_146587b3a body=93 status=ok
// SIG undefined FUN_146587b3a(void)

void FUN_146587b3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f7470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146587b98 FUN_146587b98 body=29 status=ok
// SIG undefined FUN_146587b98(void)

undefined8 FUN_146587b98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146587bb6 FUN_146587bb6 body=93 status=ok
// SIG undefined FUN_146587bb6(void)

void FUN_146587bb6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f7730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146587c13 FUN_146587c13 body=47 status=ok
// SIG undefined FUN_146587c13(void)

longlong FUN_146587c13(void)

{
  if (DAT_14cb979b8 == 0) {
    FUN_140f50038(&DAT_14cb979b8,&PTR_s__Script_GbxShiftExtensions_14b4f808f_1_14b4f8070);
  }
  return DAT_14cb979b8;
}



// FUNCTION 146587c42 FUN_146587c42 body=47 status=ok
// SIG undefined FUN_146587c42(void)

longlong FUN_146587c42(void)

{
  if (DAT_14cb97980 == 0) {
    FUN_1409ce572(&DAT_14cb97980,&PTR_FUN_14b4f7aa0);
  }
  return DAT_14cb97980;
}



// FUNCTION 146587c71 FUN_146587c71 body=63 status=ok
// SIG undefined FUN_146587c71(void)

void FUN_146587c71(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459509aa(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4f7d40;
  *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x81) = 1;
  return;
}



// FUNCTION 146587cb0 FUN_146587cb0 body=47 status=ok
// SIG undefined FUN_146587cb0(void)

longlong FUN_146587cb0(void)

{
  if (DAT_14cb979a0 == 0) {
    FUN_14073dd9a(&DAT_14cb979a0,&PTR_LAB_14b4f7cf8);
  }
  return DAT_14cb979a0;
}



// FUNCTION 146587ce0 FUN_146587ce0 body=215 status=ok
// SIG undefined FUN_146587ce0(void)

undefined8 FUN_146587ce0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14b4d9490;
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
  *local_30 = &PTR_FUN_14b4f8550;
  local_30[3] = FUN_140d763d6;
  FUN_145bfd100(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146587db8 FUN_146587db8 body=231 status=ok
// SIG undefined FUN_146587db8(void)

void FUN_146587db8(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14b4f8780;
  local_28[3] = &DAT_14cb97f60;
  local_28[4] = FUN_1459d012a;
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



// FUNCTION 146587ea0 FUN_146587ea0 body=172 status=ok
// SIG undefined FUN_146587ea0(void)

void FUN_146587ea0(void)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_28,"device_profile",1);
  FUN_1446ddc76(&uStack_20,"time_of_day",1);
  local_38 = (undefined4 *)0x0;
  local_30 = 2;
  FUN_1401b309e(&local_38,2,0);
  *local_38 = local_28;
  local_38[1] = uStack_24;
  local_38[2] = uStack_20;
  local_38[3] = uStack_1c;
  FUN_145ca1b62(&DAT_14cb97c08,&local_38);
  if (local_38 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146587f4e FUN_146587f4e body=93 status=ok
// SIG undefined FUN_146587f4e(void)

void FUN_146587f4e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f8780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146587fac FUN_146587fac body=29 status=ok
// SIG undefined FUN_146587fac(void)

undefined8 FUN_146587fac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146587fca FUN_146587fca body=60 status=ok
// SIG undefined FUN_146587fca(void)

void FUN_146587fca(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4f8870;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146588006 FUN_146588006 body=34 status=ok
// SIG undefined FUN_146588006(void)

undefined8 FUN_146588006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146588028 FUN_146588028 body=49 status=ok
// SIG undefined FUN_146588028(void)

void FUN_146588028(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ceaf76(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4f8a20;
  puVar1[0x72] = &PTR_LAB_14b4f90c0;
  return;
}



// FUNCTION 146588059 FUN_146588059 body=47 status=ok
// SIG undefined FUN_146588059(void)

longlong FUN_146588059(void)

{
  if (DAT_14cb97fd0 == 0) {
    FUN_14073dd9a(&DAT_14cb97fd0,&PTR_LAB_14b4f89d8);
  }
  return DAT_14cb97fd0;
}



// FUNCTION 146588088 FUN_146588088 body=35 status=ok
// SIG undefined FUN_146588088(void)

void FUN_146588088(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145aa0ce2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4f9170;
  return;
}



// FUNCTION 1465880ab FUN_1465880ab body=47 status=ok
// SIG undefined FUN_1465880ab(void)

longlong FUN_1465880ab(void)

{
  if (DAT_14cb97fe8 == 0) {
    FUN_14073dd9a(&DAT_14cb97fe8,&PTR_LAB_14b4f9128);
  }
  return DAT_14cb97fe8;
}



// FUNCTION 1465880da FUN_1465880da body=49 status=ok
// SIG undefined FUN_1465880da(void)

void FUN_1465880da(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458aff94(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4f9860;
  puVar1[0x72] = &PTR_LAB_14b4f9ee0;
  return;
}



// FUNCTION 14658810b FUN_14658810b body=47 status=ok
// SIG undefined FUN_14658810b(void)

longlong FUN_14658810b(void)

{
  if (DAT_14cb98000 == 0) {
    FUN_14073dd9a(&DAT_14cb98000,&PTR_LAB_14b4f9818);
  }
  return DAT_14cb98000;
}



// FUNCTION 14658813a FUN_14658813a body=47 status=ok
// SIG undefined FUN_14658813a(void)

longlong FUN_14658813a(void)

{
  if (DAT_14cb98010 == 0) {
    FUN_1409ce572(&DAT_14cb98010,&PTR_FUN_14b4fa040);
  }
  return DAT_14cb98010;
}



// FUNCTION 146588169 FUN_146588169 body=47 status=ok
// SIG undefined FUN_146588169(void)

longlong FUN_146588169(void)

{
  if (DAT_14cb98028 == 0) {
    FUN_1409ce572(&DAT_14cb98028,&PTR_FUN_14b4fa0b0);
  }
  return DAT_14cb98028;
}



// FUNCTION 146588198 FUN_146588198 body=55 status=ok
// SIG undefined FUN_146588198(void)

void FUN_146588198(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98048 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98048 = FUN_140002ddd(FUN_1465881cf,uVar1,L"GbxBeaconStatus");
  }
  return;
}



// FUNCTION 1465881cf FUN_1465881cf body=47 status=ok
// SIG undefined FUN_1465881cf(void)

longlong FUN_1465881cf(void)

{
  if (DAT_14cb98040 == 0) {
    FUN_14086a14e(&DAT_14cb98040,&PTR_FUN_14b4fa1f8);
  }
  return DAT_14cb98040;
}



// FUNCTION 1465881fe FUN_1465881fe body=48 status=ok
// SIG undefined FUN_1465881fe(void)

void FUN_1465881fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b4fd170;
  return;
}



// FUNCTION 14658822e FUN_14658822e body=55 status=ok
// SIG undefined FUN_14658822e(void)

void FUN_14658822e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98060 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98060 = FUN_140002ddd(FUN_146588265,uVar1,L"HonchoBeaconIdentPair");
  }
  return;
}



// FUNCTION 146588265 FUN_146588265 body=49 status=ok
// SIG undefined FUN_146588265(void)

longlong FUN_146588265(void)

{
  if (DAT_14cb98058 == 0) {
    FUN_14086a14e(&DAT_14cb98058,&PTR_FUN_14b4fa308);
  }
  return DAT_14cb98058;
}



// FUNCTION 146588296 FUN_146588296 body=48 status=ok
// SIG undefined FUN_146588296(void)

void FUN_146588296(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b4fd2d0;
  return;
}



// FUNCTION 1465882c6 FUN_1465882c6 body=55 status=ok
// SIG undefined FUN_1465882c6(void)

void FUN_1465882c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98078 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98078 = FUN_140002ddd(FUN_1465882fd,uVar1,L"HonchoBeaconMember");
  }
  return;
}



// FUNCTION 1465882fd FUN_1465882fd body=47 status=ok
// SIG undefined FUN_1465882fd(void)

longlong FUN_1465882fd(void)

{
  if (DAT_14cb98070 == 0) {
    FUN_14086a14e(&DAT_14cb98070,&PTR_FUN_14b4fa4b8);
  }
  return DAT_14cb98070;
}



// FUNCTION 14658832c FUN_14658832c body=48 status=ok
// SIG undefined FUN_14658832c(void)

void FUN_14658832c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b4fd440;
  return;
}



// FUNCTION 14658835c FUN_14658835c body=55 status=ok
// SIG undefined FUN_14658835c(void)

void FUN_14658835c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98090 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98090 = FUN_140002ddd(FUN_146588393,uVar1,L"HonchoBeaconPopulationSync");
  }
  return;
}



// FUNCTION 146588393 FUN_146588393 body=47 status=ok
// SIG undefined FUN_146588393(void)

longlong FUN_146588393(void)

{
  if (DAT_14cb98088 == 0) {
    FUN_14086a14e(&DAT_14cb98088,&PTR_FUN_14b4fa5e0);
  }
  return DAT_14cb98088;
}



// FUNCTION 1465883c2 FUN_1465883c2 body=48 status=ok
// SIG undefined FUN_1465883c2(void)

void FUN_1465883c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b4fd5a0;
  return;
}



// FUNCTION 1465883f2 FUN_1465883f2 body=55 status=ok
// SIG undefined FUN_1465883f2(void)

void FUN_1465883f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb980a8 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb980a8 = FUN_140002ddd(FUN_146588429,uVar1,L"HonchoBeaconPopulationResponse");
  }
  return;
}



// FUNCTION 146588429 FUN_146588429 body=47 status=ok
// SIG undefined FUN_146588429(void)

longlong FUN_146588429(void)

{
  if (DAT_14cb980a0 == 0) {
    FUN_14086a14e(&DAT_14cb980a0,&PTR_FUN_14b4fa700);
  }
  return DAT_14cb980a0;
}



// FUNCTION 146588458 FUN_146588458 body=48 status=ok
// SIG undefined FUN_146588458(void)

void FUN_146588458(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b4fd700;
  return;
}



// FUNCTION 146588488 FUN_146588488 body=55 status=ok
// SIG undefined FUN_146588488(void)

void FUN_146588488(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb980c0 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb980c0 = FUN_140002ddd(FUN_1465884bf,uVar1,L"HonchoBeaconPartyJoinParams");
  }
  return;
}



// FUNCTION 1465884bf FUN_1465884bf body=47 status=ok
// SIG undefined FUN_1465884bf(void)

longlong FUN_1465884bf(void)

{
  if (DAT_14cb980b8 == 0) {
    FUN_14086a14e(&DAT_14cb980b8,&PTR_FUN_14b4fa840);
  }
  return DAT_14cb980b8;
}



// FUNCTION 1465884ee FUN_1465884ee body=48 status=ok
// SIG undefined FUN_1465884ee(void)

void FUN_1465884ee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b4fd860;
  return;
}



// FUNCTION 14658851e FUN_14658851e body=55 status=ok
// SIG undefined FUN_14658851e(void)

void FUN_14658851e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb980d8 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb980d8 = FUN_140002ddd(FUN_146588555,uVar1,L"HonchoBeaconPartyJoinResponse");
  }
  return;
}



// FUNCTION 146588555 FUN_146588555 body=47 status=ok
// SIG undefined FUN_146588555(void)

longlong FUN_146588555(void)

{
  if (DAT_14cb980d0 == 0) {
    FUN_14086a14e(&DAT_14cb980d0,&PTR_FUN_14b4faa10);
  }
  return DAT_14cb980d0;
}



// FUNCTION 146588584 FUN_146588584 body=48 status=ok
// SIG undefined FUN_146588584(void)

void FUN_146588584(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b4fd9c0;
  return;
}



// FUNCTION 1465885b4 FUN_1465885b4 body=55 status=ok
// SIG undefined FUN_1465885b4(void)

void FUN_1465885b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb980f0 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb980f0 = FUN_140002ddd(FUN_1465885eb,uVar1,L"HonchoBeaconPartyLeaveParams");
  }
  return;
}



// FUNCTION 1465885eb FUN_1465885eb body=47 status=ok
// SIG undefined FUN_1465885eb(void)

longlong FUN_1465885eb(void)

{
  if (DAT_14cb980e8 == 0) {
    FUN_14086a14e(&DAT_14cb980e8,&PTR_FUN_14b4faae8);
  }
  return DAT_14cb980e8;
}



// FUNCTION 14658861a FUN_14658861a body=48 status=ok
// SIG undefined FUN_14658861a(void)

void FUN_14658861a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b4fdb20;
  return;
}



// FUNCTION 14658864a FUN_14658864a body=55 status=ok
// SIG undefined FUN_14658864a(void)

void FUN_14658864a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98108 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98108 = FUN_140002ddd(FUN_146588681,uVar1,L"HonchoBeaconPartyLeaveResponse");
  }
  return;
}



// FUNCTION 146588681 FUN_146588681 body=47 status=ok
// SIG undefined FUN_146588681(void)

longlong FUN_146588681(void)

{
  if (DAT_14cb98100 == 0) {
    FUN_14086a14e(&DAT_14cb98100,&PTR_FUN_14b4fabc0);
  }
  return DAT_14cb98100;
}



// FUNCTION 1465886b0 FUN_1465886b0 body=48 status=ok
// SIG undefined FUN_1465886b0(void)

void FUN_1465886b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b4fdc80;
  return;
}



// FUNCTION 1465886e0 FUN_1465886e0 body=55 status=ok
// SIG undefined FUN_1465886e0(void)

void FUN_1465886e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98120 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98120 = FUN_140002ddd(FUN_146588717,uVar1,L"HonchoBeaconPartyMemberJoinedParams");
  }
  return;
}



// FUNCTION 146588717 FUN_146588717 body=47 status=ok
// SIG undefined FUN_146588717(void)

longlong FUN_146588717(void)

{
  if (DAT_14cb98118 == 0) {
    FUN_14086a14e(&DAT_14cb98118,&PTR_FUN_14b4fad08);
  }
  return DAT_14cb98118;
}



// FUNCTION 146588746 FUN_146588746 body=48 status=ok
// SIG undefined FUN_146588746(void)

void FUN_146588746(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b4fdde0;
  return;
}



// FUNCTION 146588776 FUN_146588776 body=55 status=ok
// SIG undefined FUN_146588776(void)

void FUN_146588776(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98138 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98138 = FUN_140002ddd(FUN_1465887ad,uVar1,L"HonchoBeaconPartyMemberLeftParams");
  }
  return;
}



// FUNCTION 1465887ad FUN_1465887ad body=47 status=ok
// SIG undefined FUN_1465887ad(void)

longlong FUN_1465887ad(void)

{
  if (DAT_14cb98130 == 0) {
    FUN_14086a14e(&DAT_14cb98130,&PTR_FUN_14b4faea0);
  }
  return DAT_14cb98130;
}



// FUNCTION 1465887dc FUN_1465887dc body=48 status=ok
// SIG undefined FUN_1465887dc(void)

void FUN_1465887dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b4fdf40;
  return;
}



// FUNCTION 14658880c FUN_14658880c body=50 status=ok
// SIG undefined FUN_14658880c(void)

void FUN_14658880c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4fb160;
  puVar1[5] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2f) = 0;
  return;
}



// FUNCTION 146588843 FUN_146588843 body=47 status=ok
// SIG undefined FUN_146588843(void)

longlong FUN_146588843(void)

{
  if (DAT_14cb98150 == 0) {
    FUN_14073dd9a(&DAT_14cb98150,&PTR_LAB_14b4fb118);
  }
  return DAT_14cb98150;
}



// FUNCTION 146588872 FUN_146588872 body=77 status=ok
// SIG undefined FUN_146588872(void)

void FUN_146588872(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ad2470(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4fb5f0;
  puVar1[5] = &PTR_LAB_14b4fbba0;
  puVar1[0x38] = &PTR_LAB_14b4fbbd0;
  puVar1[0x84] = 0;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  return;
}



// FUNCTION 1465888c4 FUN_1465888c4 body=47 status=ok
// SIG undefined FUN_1465888c4(void)

longlong FUN_1465888c4(void)

{
  if (DAT_14cb98188 == 0) {
    FUN_14073dd9a(&DAT_14cb98188,&PTR_LAB_14b4fb5a8);
  }
  return DAT_14cb98188;
}



// FUNCTION 1465888f3 FUN_1465888f3 body=35 status=ok
// SIG undefined FUN_1465888f3(void)

void FUN_1465888f3(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4fbca0;
  return;
}



// FUNCTION 146588916 FUN_146588916 body=47 status=ok
// SIG undefined FUN_146588916(void)

longlong FUN_146588916(void)

{
  if (DAT_14cb981a0 == 0) {
    FUN_14073dd9a(&DAT_14cb981a0,&PTR_LAB_14b4fbc58);
  }
  return DAT_14cb981a0;
}



// FUNCTION 146588945 FUN_146588945 body=56 status=ok
// SIG undefined FUN_146588945(void)

void FUN_146588945(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458ea55a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4fc0a0;
  puVar1[5] = &PTR_FUN_14b4fc390;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 146588982 FUN_146588982 body=47 status=ok
// SIG undefined FUN_146588982(void)

longlong FUN_146588982(void)

{
  if (DAT_14cb981b8 == 0) {
    FUN_14073dd9a(&DAT_14cb981b8,&PTR_LAB_14b4fc058);
  }
  return DAT_14cb981b8;
}



// FUNCTION 1465889b1 FUN_1465889b1 body=47 status=ok
// SIG undefined FUN_1465889b1(void)

longlong FUN_1465889b1(void)

{
  if (DAT_14cb981d0 == 0) {
    FUN_1409ce572(&DAT_14cb981d0,&PTR_FUN_14b4fc440);
  }
  return DAT_14cb981d0;
}



// FUNCTION 1465889e0 FUN_1465889e0 body=47 status=ok
// SIG undefined FUN_1465889e0(void)

longlong FUN_1465889e0(void)

{
  if (DAT_14cb981e8 == 0) {
    FUN_1409ce572(&DAT_14cb981e8,&PTR_FUN_14b4fc4f0);
  }
  return DAT_14cb981e8;
}



// FUNCTION 146588a0f FUN_146588a0f body=47 status=ok
// SIG undefined FUN_146588a0f(void)

longlong FUN_146588a0f(void)

{
  if (DAT_14cb98200 == 0) {
    FUN_1409ce572(&DAT_14cb98200,&PTR_FUN_14b4fc5c0);
  }
  return DAT_14cb98200;
}



// FUNCTION 146588a49 FUN_146588a49 body=47 status=ok
// SIG undefined FUN_146588a49(void)

longlong FUN_146588a49(void)

{
  if (DAT_14cb98220 == 0) {
    FUN_14073dd9a(&DAT_14cb98220,&PTR_LAB_14b4fc688);
  }
  return DAT_14cb98220;
}



// FUNCTION 146588a78 FUN_146588a78 body=231 status=ok
// SIG undefined FUN_146588a78(void)

void FUN_146588a78(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14b4fe4e0;
  local_28[3] = &DAT_14cb98258;
  local_28[4] = FUN_1459d0158;
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



// FUNCTION 146588b60 FUN_146588b60 body=359 status=ok
// SIG undefined FUN_146588b60(void)

void FUN_146588b60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14485c47a(param_1 + 0x28);
  if (DAT_14cb981d8 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb981d8 = FUN_14171c317(FUN_1465889b1,uVar1,L"EDedicatedServerAuthType");
  }
  *(longlong *)(param_1 + 0xc0) = DAT_14cb981d8;
  if (DAT_14cb981f0 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb981f0 = FUN_14171c317(FUN_1465889e0,uVar1,L"EDedicatedServerAuthStatus");
  }
  *(longlong *)(param_1 + 200) = DAT_14cb981f0;
  if (DAT_14cb98208 == 0) {
    uVar1 = FUN_14107678f();
    DAT_14cb98208 = FUN_14171c317(FUN_146588a0f,uVar1,L"EDedicatedServerHostStatus");
  }
  *(longlong *)(param_1 + 0xd0) = DAT_14cb98208;
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_148ab7a96(&local_28,param_1);
    *(undefined8 *)(param_1 + 0x90) = local_28;
    FUN_148ab7b86(param_2 + 0x2c0,&local_28,param_1,FUN_148ab7c7c);
    *(undefined8 *)(param_1 + 0x30) = local_28;
    FUN_148ab7b86(param_2 + 0x2a8,&local_28,param_1,&LAB_148ab7cce);
    *(undefined8 *)(param_1 + 0x38) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146588cc8 FUN_146588cc8 body=40 status=ok
// SIG undefined FUN_146588cc8(void)

undefined8 FUN_146588cc8(undefined8 param_1,int param_2)

{
  FUN_145af003c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588cf0 FUN_146588cf0 body=40 status=ok
// SIG undefined FUN_146588cf0(void)

undefined8 FUN_146588cf0(undefined8 param_1,int param_2)

{
  FUN_145850f18();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588d18 FUN_146588d18 body=40 status=ok
// SIG undefined FUN_146588d18(void)

undefined8 FUN_146588d18(undefined8 param_1,int param_2)

{
  FUN_1458da08e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588d40 FUN_146588d40 body=40 status=ok
// SIG undefined FUN_146588d40(void)

undefined8 FUN_146588d40(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588d68 FUN_146588d68 body=97 status=ok
// SIG undefined FUN_146588d68(void)

undefined8 * FUN_146588d68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4fb5f0;
  param_1[5] = &PTR_LAB_14b4fbba0;
  param_1[0x38] = &PTR_LAB_14b4fbbd0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_145b04ae8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588dca FUN_146588dca body=40 status=ok
// SIG undefined FUN_146588dca(void)

undefined8 FUN_146588dca(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588df2 FUN_146588df2 body=40 status=ok
// SIG undefined FUN_146588df2(void)

undefined8 FUN_146588df2(undefined8 param_1,int param_2)

{
  FUN_1458d399e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588e1a FUN_146588e1a body=40 status=ok
// SIG undefined FUN_146588e1a(void)

undefined8 FUN_146588e1a(undefined8 param_1,int param_2)

{
  FUN_145b923ce();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588e42 FUN_146588e42 body=29 status=ok
// SIG undefined FUN_146588e42(void)

undefined8 FUN_146588e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588e60 FUN_146588e60 body=29 status=ok
// SIG undefined FUN_146588e60(void)

undefined8 FUN_146588e60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588e7e FUN_146588e7e body=29 status=ok
// SIG undefined FUN_146588e7e(void)

undefined8 FUN_146588e7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588e9c FUN_146588e9c body=29 status=ok
// SIG undefined FUN_146588e9c(void)

undefined8 FUN_146588e9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588eba FUN_146588eba body=29 status=ok
// SIG undefined FUN_146588eba(void)

undefined8 FUN_146588eba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588ed8 FUN_146588ed8 body=29 status=ok
// SIG undefined FUN_146588ed8(void)

undefined8 FUN_146588ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588ef6 FUN_146588ef6 body=29 status=ok
// SIG undefined FUN_146588ef6(void)

undefined8 FUN_146588ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588f14 FUN_146588f14 body=29 status=ok
// SIG undefined FUN_146588f14(void)

undefined8 FUN_146588f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588f32 FUN_146588f32 body=29 status=ok
// SIG undefined FUN_146588f32(void)

undefined8 FUN_146588f32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588f50 FUN_146588f50 body=29 status=ok
// SIG undefined FUN_146588f50(void)

undefined8 FUN_146588f50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588f6e FUN_146588f6e body=29 status=ok
// SIG undefined FUN_146588f6e(void)

undefined8 FUN_146588f6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146588f8c FUN_146588f8c body=29 status=ok
// SIG undefined FUN_146588f8c(void)

bool FUN_146588f8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146588faa FUN_146588faa body=26 status=ok
// SIG undefined FUN_146588faa(void)

bool FUN_146588faa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146588fc4 FUN_146588fc4 body=24 status=ok
// SIG undefined FUN_146588fc4(void)

bool FUN_146588fc4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146588fdc FUN_146588fdc body=93 status=ok
// SIG undefined FUN_146588fdc(void)

void FUN_146588fdc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4fe4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658903a FUN_14658903a body=29 status=ok
// SIG undefined FUN_14658903a(void)

undefined8 FUN_14658903a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146589057 FUN_146589057 body=47 status=ok
// SIG undefined FUN_146589057(void)

longlong FUN_146589057(void)

{
  if (DAT_14cb98578 == 0) {
    FUN_140f50038(&DAT_14cb98578,&PTR_s__Script_ShiftMicropatching_14b4fec38);
  }
  return DAT_14cb98578;
}



// FUNCTION 146589086 FUN_146589086 body=47 status=ok
// SIG undefined FUN_146589086(void)

longlong FUN_146589086(void)

{
  if (DAT_14cb98558 == 0) {
    FUN_1409ce572(&DAT_14cb98558,&PTR_FUN_14b4febd0);
  }
  return DAT_14cb98558;
}



// FUNCTION 1465890b6 FUN_1465890b6 body=192 status=ok
// SIG undefined FUN_1465890b6(void)

void FUN_1465890b6(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14b4ff3d0;
  puVar1[3] = &DAT_14cb98649;
  puVar1[4] = FUN_145c6a40e;
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



// FUNCTION 146589178 FUN_146589178 body=29 status=ok
// SIG undefined FUN_146589178(void)

undefined8 FUN_146589178(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146589196 FUN_146589196 body=93 status=ok
// SIG undefined FUN_146589196(void)

void FUN_146589196(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1621d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ff2d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1465891f3 FUN_1465891f3 body=58 status=ok
// SIG undefined FUN_1465891f3(void)

void FUN_1465891f3(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14658922e FUN_14658922e body=93 status=ok
// SIG undefined FUN_14658922e(void)

void FUN_14658922e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ff3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658928b FUN_14658928b body=49 status=ok
// SIG undefined FUN_14658928b(void)

longlong FUN_14658928b(void)

{
  if (DAT_14cb98670 == 0) {
    FUN_140f50038(&DAT_14cb98670,&PTR_s__Script_ShiftUI_14b4ffa80);
  }
  return DAT_14cb98670;
}



// FUNCTION 1465892bc FUN_1465892bc body=47 status=ok
// SIG undefined FUN_1465892bc(void)

longlong FUN_1465892bc(void)

{
  if (DAT_14cb98658 == 0) {
    FUN_14073dd9a(&DAT_14cb98658,&PTR_LAB_14b4ff6b8);
  }
  return DAT_14cb98658;
}



// FUNCTION 1465892eb FUN_1465892eb body=47 status=ok
// SIG undefined FUN_1465892eb(void)

longlong FUN_1465892eb(void)

{
  if (DAT_14cb98690 == 0) {
    FUN_14000fc22(&DAT_14cb98690,&PTR_FUN_14b4ffca8);
  }
  return DAT_14cb98690;
}



// FUNCTION 14658931a FUN_14658931a body=47 status=ok
// SIG undefined FUN_14658931a(void)

longlong FUN_14658931a(void)

{
  if (DAT_14cb986a8 == 0) {
    FUN_14000fc22(&DAT_14cb986a8,&PTR_FUN_14b4ffec8);
  }
  return DAT_14cb986a8;
}



// FUNCTION 146589349 FUN_146589349 body=47 status=ok
// SIG undefined FUN_146589349(void)

longlong FUN_146589349(void)

{
  if (DAT_14cb98688 == 0) {
    FUN_14000fc22(&DAT_14cb98688,&PTR_FUN_14b4ffbf0);
  }
  return DAT_14cb98688;
}



// FUNCTION 146589378 FUN_146589378 body=47 status=ok
// SIG undefined FUN_146589378(void)

longlong FUN_146589378(void)

{
  if (DAT_14cb986a0 == 0) {
    FUN_14000fc22(&DAT_14cb986a0,&PTR_FUN_14b4ffe18);
  }
  return DAT_14cb986a0;
}



// FUNCTION 1465893a7 FUN_1465893a7 body=47 status=ok
// SIG undefined FUN_1465893a7(void)

longlong FUN_1465893a7(void)

{
  if (DAT_14cb98680 == 0) {
    FUN_14000fc22(&DAT_14cb98680,&PTR_FUN_14b4ffb30);
  }
  return DAT_14cb98680;
}



// FUNCTION 1465893d6 FUN_1465893d6 body=47 status=ok
// SIG undefined FUN_1465893d6(void)

longlong FUN_1465893d6(void)

{
  if (DAT_14cb98698 == 0) {
    FUN_14000fc22(&DAT_14cb98698,&PTR_FUN_14b4ffd60);
  }
  return DAT_14cb98698;
}



// FUNCTION 146589405 FUN_146589405 body=49 status=ok
// SIG undefined FUN_146589405(void)

longlong FUN_146589405(void)

{
  if (DAT_14cb98728 == 0) {
    FUN_14073dd9a(&DAT_14cb98728,&PTR_LAB_14b500910);
  }
  return DAT_14cb98728;
}



// FUNCTION 146589436 FUN_146589436 body=47 status=ok
// SIG undefined FUN_146589436(void)

longlong FUN_146589436(void)

{
  if (DAT_14cb986b0 == 0) {
    FUN_14000fc22(&DAT_14cb986b0,&PTR_FUN_14b4fff70);
  }
  return DAT_14cb986b0;
}



// FUNCTION 146589465 FUN_146589465 body=47 status=ok
// SIG undefined FUN_146589465(void)

longlong FUN_146589465(void)

{
  if (DAT_14cb986b8 == 0) {
    FUN_14000fc22(&DAT_14cb986b8,&PTR_FUN_14b500008);
  }
  return DAT_14cb986b8;
}



// FUNCTION 146589494 FUN_146589494 body=47 status=ok
// SIG undefined FUN_146589494(void)

longlong FUN_146589494(void)

{
  if (DAT_14cb986c0 == 0) {
    FUN_14000fc22(&DAT_14cb986c0,&PTR_FUN_14b5000a0);
  }
  return DAT_14cb986c0;
}



// FUNCTION 1465894c3 FUN_1465894c3 body=47 status=ok
// SIG undefined FUN_1465894c3(void)

longlong FUN_1465894c3(void)

{
  if (DAT_14cb986c8 == 0) {
    FUN_14000fc22(&DAT_14cb986c8,&PTR_FUN_14b500128);
  }
  return DAT_14cb986c8;
}



// FUNCTION 1465894f2 FUN_1465894f2 body=47 status=ok
// SIG undefined FUN_1465894f2(void)

longlong FUN_1465894f2(void)

{
  if (DAT_14cb986d0 == 0) {
    FUN_14000fc22(&DAT_14cb986d0,&PTR_FUN_14b500168);
  }
  return DAT_14cb986d0;
}



// FUNCTION 146589521 FUN_146589521 body=47 status=ok
// SIG undefined FUN_146589521(void)

longlong FUN_146589521(void)

{
  if (DAT_14cb986d8 == 0) {
    FUN_14000fc22(&DAT_14cb986d8,&PTR_FUN_14b500208);
  }
  return DAT_14cb986d8;
}



// FUNCTION 146589550 FUN_146589550 body=47 status=ok
// SIG undefined FUN_146589550(void)

longlong FUN_146589550(void)

{
  if (DAT_14cb986e0 == 0) {
    FUN_14000fc22(&DAT_14cb986e0,&PTR_FUN_14b5002a0);
  }
  return DAT_14cb986e0;
}



// FUNCTION 14658957f FUN_14658957f body=47 status=ok
// SIG undefined FUN_14658957f(void)

longlong FUN_14658957f(void)

{
  if (DAT_14cb986e8 == 0) {
    FUN_14000fc22(&DAT_14cb986e8,&PTR_FUN_14b500328);
  }
  return DAT_14cb986e8;
}



// FUNCTION 1465895ae FUN_1465895ae body=47 status=ok
// SIG undefined FUN_1465895ae(void)

longlong FUN_1465895ae(void)

{
  if (DAT_14cb986f0 == 0) {
    FUN_14000fc22(&DAT_14cb986f0,&PTR_FUN_14b5003a8);
  }
  return DAT_14cb986f0;
}



// FUNCTION 1465895dd FUN_1465895dd body=47 status=ok
// SIG undefined FUN_1465895dd(void)

longlong FUN_1465895dd(void)

{
  if (DAT_14cb986f8 == 0) {
    FUN_14000fc22(&DAT_14cb986f8,&PTR_FUN_14b500450);
  }
  return DAT_14cb986f8;
}



// FUNCTION 14658960c FUN_14658960c body=47 status=ok
// SIG undefined FUN_14658960c(void)

longlong FUN_14658960c(void)

{
  if (DAT_14cb98700 == 0) {
    FUN_14000fc22(&DAT_14cb98700,&PTR_FUN_14b5004f0);
  }
  return DAT_14cb98700;
}



// FUNCTION 14658963b FUN_14658963b body=47 status=ok
// SIG undefined FUN_14658963b(void)

longlong FUN_14658963b(void)

{
  if (DAT_14cb98708 == 0) {
    FUN_14000fc22(&DAT_14cb98708,&PTR_FUN_14b500590);
  }
  return DAT_14cb98708;
}



// FUNCTION 14658966a FUN_14658966a body=47 status=ok
// SIG undefined FUN_14658966a(void)

longlong FUN_14658966a(void)

{
  if (DAT_14cb98710 == 0) {
    FUN_14000fc22(&DAT_14cb98710,&PTR_FUN_14b500630);
  }
  return DAT_14cb98710;
}



// FUNCTION 146589699 FUN_146589699 body=47 status=ok
// SIG undefined FUN_146589699(void)

longlong FUN_146589699(void)

{
  if (DAT_14cb98718 == 0) {
    FUN_14000fc22(&DAT_14cb98718,&PTR_FUN_14b5006b8);
  }
  return DAT_14cb98718;
}



// FUNCTION 1465896c8 FUN_1465896c8 body=34 status=ok
// SIG undefined FUN_1465896c8(void)

void FUN_1465896c8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a86d0e();
  FUN_14069c8d6(uVar1,&PTR_s_AddAccountLinkedDelegate_14b500700,0xe);
  return;
}



// FUNCTION 1465896ea FUN_1465896ea body=35 status=ok
// SIG undefined FUN_1465896ea(void)

void FUN_1465896ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b500950;
  return;
}



// FUNCTION 14658970d FUN_14658970d body=47 status=ok
// SIG undefined FUN_14658970d(void)

longlong FUN_14658970d(void)

{
  if (DAT_14cb98738 == 0) {
    FUN_1409ce572(&DAT_14cb98738,&PTR_FUN_14b500c60);
  }
  return DAT_14cb98738;
}



// FUNCTION 14658973c FUN_14658973c body=60 status=ok
// SIG undefined FUN_14658973c(void)

void FUN_14658973c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b501040;
  puVar1[5] = 0x780000f423f;
  puVar1[6] = 0x3f80000000000438;
  puVar1[7] = 0x10001013dcccccd;
  return;
}



// FUNCTION 146589778 FUN_146589778 body=47 status=ok
// SIG undefined FUN_146589778(void)

longlong FUN_146589778(void)

{
  if (DAT_14cb98758 == 0) {
    FUN_14073dd9a(&DAT_14cb98758,&PTR_LAB_14b500ff8);
  }
  return DAT_14cb98758;
}



// FUNCTION 1465897a8 FUN_1465897a8 body=40 status=ok
// SIG undefined FUN_1465897a8(void)

undefined8 FUN_1465897a8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465897d0 FUN_1465897d0 body=40 status=ok
// SIG undefined FUN_1465897d0(void)

undefined8 FUN_1465897d0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465897f8 FUN_1465897f8 body=40 status=ok
// SIG undefined FUN_1465897f8(void)

void FUN_1465897f8(longlong param_1,byte param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 < 5) {
    pwVar1 = (wchar_t *)(&PTR_u_xbox_14b507470)[param_2];
  }
  else {
    pwVar1 = L"xbox";
  }
  FUN_14020fad6(param_1 + 0x2a0,pwVar1);
  return;
}



// FUNCTION 146589820 FUN_146589820 body=103 status=ok
// SIG undefined FUN_146589820(void)

undefined8 FUN_146589820(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_4 + 0x20);
  local_20 = *(undefined8 *)(param_4 + 0x28);
  local_18 = *(longlong *)(param_4 + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1461a5ca0(param_1,param_2,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146589888 FUN_146589888 body=80 status=ok
// SIG undefined FUN_146589888(void)

longlong * FUN_146589888(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145da91ec(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1465898d8 FUN_1465898d8 body=738 status=ok
// SIG undefined FUN_1465898d8(void)

longlong * FUN_1465898d8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138 [2];
  undefined2 *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  undefined4 local_f8 [2];
  undefined2 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = (int)param_2[1];
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_148a67dce(param_1);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14058acb2(local_b8,param_3);
  if ((longlong)(int)param_2[1] != 0) {
    lVar6 = *param_2;
    lVar7 = (longlong)(int)param_2[1] << 6;
    do {
      FUN_1418c0cf6(local_f8,lVar6);
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_e8 != 0) {
        puVar5 = local_f0;
      }
      uVar4 = (ulonglong)((int)uStack_e8 - 1);
      if ((int)uStack_e8 == 0) {
        uVar4 = 0;
      }
      uVar2 = FUN_144a49b4a(uVar4,puVar5);
      iVar3 = FUN_1457511aa(local_b8,uVar2,&local_f0);
      uVar4 = (longlong)iVar3 * 0x28 + local_b8[0];
      if (iVar3 == -1) {
        uVar4 = 0;
      }
      FUN_144a787a6(&local_e0,uVar4 + 0x10);
      local_110 = local_d0;
      local_120 = local_e0;
      local_138[0] = local_f8[0];
      local_130 = local_f0;
      uStack_128 = uStack_e8;
      local_f0 = (undefined2 *)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_118 = uStack_d8;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_108 = uStack_c8;
      uStack_c8 = 0;
      local_100 = local_c0;
      FUN_1418bf7c0(local_f8);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_145c69d66(param_1,iVar3);
      }
      lVar1 = *param_1;
      lVar8 = (longlong)iVar3 * 0x40;
      *(undefined4 *)(lVar1 + lVar8) = local_138[0];
      *(undefined8 *)(lVar1 + 8 + lVar8) = 0;
      *(undefined2 **)(lVar1 + 8 + lVar8) = local_130;
      local_130 = (undefined2 *)0x0;
      *(undefined4 *)(lVar1 + 0x10 + lVar8) = (undefined4)uStack_128;
      *(undefined4 *)(lVar1 + 0x14 + lVar8) = uStack_128._4_4_;
      uStack_128 = 0;
      *(undefined8 *)(lVar1 + 0x18 + lVar8) = 0;
      *(undefined8 *)(lVar1 + 0x18 + lVar8) = local_120;
      local_120 = 0;
      *(undefined4 *)(lVar1 + 0x20 + lVar8) = (undefined4)uStack_118;
      *(undefined4 *)(lVar1 + 0x24 + lVar8) = uStack_118._4_4_;
      uStack_118 = 0;
      *(undefined8 *)(lVar1 + 0x28 + lVar8) = 0;
      *(undefined8 *)(lVar1 + 0x28 + lVar8) = local_110;
      local_110 = 0;
      *(undefined4 *)(lVar1 + 0x30 + lVar8) = (undefined4)uStack_108;
      *(undefined4 *)(lVar1 + 0x34 + lVar8) = uStack_108._4_4_;
      uStack_108 = 0;
      *(undefined2 *)(lVar1 + 0x38 + lVar8) = local_100;
      FUN_1418bf7c0(local_138);
      lVar6 = lVar6 + 0x40;
      lVar7 = lVar7 + -0x40;
    } while (lVar7 != 0);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_b8);
  FUN_141323308(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146589bbc FUN_146589bbc body=80 status=ok
// SIG undefined FUN_146589bbc(void)

longlong * FUN_146589bbc(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_141323308(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146589c0c FUN_146589c0c body=117 status=ok
// SIG undefined FUN_146589c0c(void)

longlong * FUN_146589c0c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1414be5e0(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146589c82 FUN_146589c82 body=59 status=ok
// SIG undefined FUN_146589c82(void)

longlong FUN_146589c82(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146589cbe FUN_146589cbe body=66 status=ok
// SIG undefined FUN_146589cbe(void)

void FUN_146589cbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146589d00 FUN_146589d00 body=231 status=ok
// SIG undefined FUN_146589d00(void)

void FUN_146589d00(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14b506860;
  local_28[3] = &DAT_14cb98aa8;
  local_28[4] = FUN_145cc350c;
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



// FUNCTION 146589de8 FUN_146589de8 body=187 status=ok
// SIG undefined FUN_146589de8(void)

undefined8 FUN_146589de8(undefined8 param_1,longlong param_2)

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
  uVar1 = FUN_145a55b80();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x40;
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



// FUNCTION 146589ea4 FUN_146589ea4 body=228 status=ok
// SIG undefined FUN_146589ea4(void)

undefined8
FUN_146589ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b5068d0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_140c6314c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146589f8a FUN_146589f8a body=228 status=ok
// SIG undefined FUN_146589f8a(void)

undefined8 FUN_146589f8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_149e35290;
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
  *local_38 = &PTR_FUN_14b506940;
  local_38[3] = param_3;
  local_38[4] = &LAB_148ac0094;
  FUN_140feff30(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658a070 FUN_14658a070 body=280 status=ok
// SIG undefined FUN_14658a070(void)

undefined1 *
FUN_14658a070(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_4 + 0x20);
  local_48 = *(undefined8 *)(param_4 + 0x28);
  local_40 = *(longlong **)(param_4 + 0x30);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_140230656(&local_50);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (((char)uVar4 == '\0') || (*(int *)(param_4 + 0xc) == DAT_14cb987b8)) {
    FUN_145c4e47e(param_1,param_2,param_3,param_4);
    FUN_141646d72(DAT_14cb98ab0,uVar4);
  }
  else {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658a18a FUN_14658a18a body=76 status=ok
// SIG undefined FUN_14658a18a(void)

void FUN_14658a18a(longlong param_1,undefined1 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x21) = param_2;
  iVar1 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x28,*param_3,iVar1);
  *(undefined4 *)(param_1 + 0x38) = param_4;
  if (*param_3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14658a1d6 FUN_14658a1d6 body=29 status=ok
// SIG undefined FUN_14658a1d6(void)

bool FUN_14658a1d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14658a1f4 FUN_14658a1f4 body=26 status=ok
// SIG undefined FUN_14658a1f4(void)

bool FUN_14658a1f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14658a20e FUN_14658a20e body=24 status=ok
// SIG undefined FUN_14658a20e(void)

bool FUN_14658a20e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14658a226 FUN_14658a226 body=24 status=ok
// SIG undefined FUN_14658a226(void)

bool FUN_14658a226(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14658a23e FUN_14658a23e body=29 status=ok
// SIG undefined FUN_14658a23e(void)

bool FUN_14658a23e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14658a25c FUN_14658a25c body=26 status=ok
// SIG undefined FUN_14658a25c(void)

bool FUN_14658a25c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14658a276 FUN_14658a276 body=24 status=ok
// SIG undefined FUN_14658a276(void)

bool FUN_14658a276(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14658a28e FUN_14658a28e body=29 status=ok
// SIG undefined FUN_14658a28e(void)

undefined8 FUN_14658a28e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a2c0 FUN_14658a2c0 body=29 status=ok
// SIG undefined FUN_14658a2c0(void)

undefined8 FUN_14658a2c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a2de FUN_14658a2de body=124 status=ok
// SIG undefined FUN_14658a2de(void)

void FUN_14658a2de(longlong *param_1,longlong *param_2)

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



// FUNCTION 14658a35c FUN_14658a35c body=29 status=ok
// SIG undefined FUN_14658a35c(void)

undefined8 FUN_14658a35c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a37a FUN_14658a37a body=29 status=ok
// SIG undefined FUN_14658a37a(void)

undefined8 FUN_14658a37a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a398 FUN_14658a398 body=29 status=ok
// SIG undefined FUN_14658a398(void)

undefined8 FUN_14658a398(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a3b6 FUN_14658a3b6 body=93 status=ok
// SIG undefined FUN_14658a3b6(void)

void FUN_14658a3b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b506860;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658a414 FUN_14658a414 body=29 status=ok
// SIG undefined FUN_14658a414(void)

undefined8 FUN_14658a414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a431 FUN_14658a431 body=49 status=ok
// SIG undefined FUN_14658a431(void)

longlong FUN_14658a431(void)

{
  if (DAT_14cb98b58 == 0) {
    FUN_140f50038(&DAT_14cb98b58,&PTR_s__Script_GbxDecorator_14b50755f_1_14b507540);
  }
  return DAT_14cb98b58;
}



// FUNCTION 14658a462 FUN_14658a462 body=49 status=ok
// SIG undefined FUN_14658a462(void)

longlong FUN_14658a462(void)

{
  if (DAT_14cb98b78 == 0) {
    FUN_14073dd9a(&DAT_14cb98b78,&PTR_LAB_14b5076c0);
  }
  return DAT_14cb98b78;
}



// FUNCTION 14658a493 FUN_14658a493 body=47 status=ok
// SIG undefined FUN_14658a493(void)

longlong FUN_14658a493(void)

{
  if (DAT_14cb98b68 == 0) {
    FUN_14000fc22(&DAT_14cb98b68,&PTR_FUN_14b507608);
  }
  return DAT_14cb98b68;
}



// FUNCTION 14658a4c2 FUN_14658a4c2 body=34 status=ok
// SIG undefined FUN_14658a4c2(void)

void FUN_14658a4c2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459985b8();
  FUN_14069c8d6(uVar1,&PTR_s_MonitorPropertyForActorChangedDe_14b507650,1);
  return;
}



// FUNCTION 14658a4e4 FUN_14658a4e4 body=47 status=ok
// SIG undefined FUN_14658a4e4(void)

longlong FUN_14658a4e4(void)

{
  if (DAT_14cb98b98 == 0) {
    FUN_14073dd9a(&DAT_14cb98b98,&PTR_LAB_14b507f10);
  }
  return DAT_14cb98b98;
}



// FUNCTION 14658a513 FUN_14658a513 body=47 status=ok
// SIG undefined FUN_14658a513(void)

longlong FUN_14658a513(void)

{
  if (DAT_14cb98b88 == 0) {
    FUN_14000fc22(&DAT_14cb98b88,&PTR_FUN_14b507e48);
  }
  return DAT_14cb98b88;
}



// FUNCTION 14658a542 FUN_14658a542 body=34 status=ok
// SIG undefined FUN_14658a542(void)

void FUN_14658a542(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a86dfa();
  FUN_14069c8d6(uVar1,&PTR_s_ToRotationAxis_14b507e90,1);
  return;
}



// FUNCTION 14658a564 FUN_14658a564 body=35 status=ok
// SIG undefined FUN_14658a564(void)

void FUN_14658a564(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b507f50;
  return;
}



// FUNCTION 14658a587 FUN_14658a587 body=47 status=ok
// SIG undefined FUN_14658a587(void)

longlong FUN_14658a587(void)

{
  if (DAT_14cb98bd0 == 0) {
    FUN_14073dd9a(&DAT_14cb98bd0,&PTR_LAB_14b508470);
  }
  return DAT_14cb98bd0;
}



// FUNCTION 14658a5b6 FUN_14658a5b6 body=47 status=ok
// SIG undefined FUN_14658a5b6(void)

longlong FUN_14658a5b6(void)

{
  if (DAT_14cb98bb0 == 0) {
    FUN_14000fc22(&DAT_14cb98bb0,&PTR_FUN_14b508268);
  }
  return DAT_14cb98bb0;
}



// FUNCTION 14658a5e5 FUN_14658a5e5 body=47 status=ok
// SIG undefined FUN_14658a5e5(void)

longlong FUN_14658a5e5(void)

{
  if (DAT_14cb98bc0 == 0) {
    FUN_14000fc22(&DAT_14cb98bc0,&PTR_FUN_14b508378);
  }
  return DAT_14cb98bc0;
}



// FUNCTION 14658a614 FUN_14658a614 body=34 status=ok
// SIG undefined FUN_14658a614(void)

void FUN_14658a614(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a86ee6();
  FUN_14069c8d6(uVar1,&PTR_s_EditorConstructionScript_14b5083c0,2);
  return;
}



// FUNCTION 14658a636 FUN_14658a636 body=35 status=ok
// SIG undefined FUN_14658a636(void)

void FUN_14658a636(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5084b0;
  return;
}



// FUNCTION 14658a659 FUN_14658a659 body=35 status=ok
// SIG undefined FUN_14658a659(void)

void FUN_14658a659(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b508810;
  return;
}



// FUNCTION 14658a67c FUN_14658a67c body=47 status=ok
// SIG undefined FUN_14658a67c(void)

longlong FUN_14658a67c(void)

{
  if (DAT_14cb98be8 == 0) {
    FUN_14073dd9a(&DAT_14cb98be8,&PTR_LAB_14b5087c8);
  }
  return DAT_14cb98be8;
}



// FUNCTION 14658a6ab FUN_14658a6ab body=130 status=ok
// SIG undefined FUN_14658a6ab(void)

void FUN_14658a6ab(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b508d60;
  puVar1[5] = &PTR_FUN_14b5091f0;
  puVar1[6] = &PTR_LAB_14b509230;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *(undefined4 *)(puVar1 + 0x27) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x22] = 0;
  *(undefined2 *)(puVar1 + 0x23) = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  return;
}



// FUNCTION 14658a72d FUN_14658a72d body=49 status=ok
// SIG undefined FUN_14658a72d(void)

longlong FUN_14658a72d(void)

{
  if (DAT_14cb98c00 == 0) {
    FUN_14073dd9a(&DAT_14cb98c00,&PTR_LAB_14b508d18);
  }
  return DAT_14cb98c00;
}



// FUNCTION 14658a75e FUN_14658a75e body=42 status=ok
// SIG undefined FUN_14658a75e(void)

void FUN_14658a75e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5093d0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14658a788 FUN_14658a788 body=47 status=ok
// SIG undefined FUN_14658a788(void)

longlong FUN_14658a788(void)

{
  if (DAT_14cb98c18 == 0) {
    FUN_14073dd9a(&DAT_14cb98c18,&PTR_LAB_14b509388);
  }
  return DAT_14cb98c18;
}



// FUNCTION 14658a7b7 FUN_14658a7b7 body=39 status=ok
// SIG undefined FUN_14658a7b7(void)

void FUN_14658a7b7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5097c0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 14658a7de FUN_14658a7de body=47 status=ok
// SIG undefined FUN_14658a7de(void)

longlong FUN_14658a7de(void)

{
  if (DAT_14cb98c30 == 0) {
    FUN_14073dd9a(&DAT_14cb98c30,&PTR_LAB_14b509778);
  }
  return DAT_14cb98c30;
}



// FUNCTION 14658a80d FUN_14658a80d body=72 status=ok
// SIG undefined FUN_14658a80d(void)

void FUN_14658a80d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c444d0(puVar1);
  *puVar1 = &PTR_FUN_14b509b30;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 14658a85b FUN_14658a85b body=47 status=ok
// SIG undefined FUN_14658a85b(void)

longlong FUN_14658a85b(void)

{
  if (DAT_14cb98c48 == 0) {
    FUN_14073dd9a(&DAT_14cb98c48,&PTR_LAB_14b509ae8);
  }
  return DAT_14cb98c48;
}



// FUNCTION 14658a88a FUN_14658a88a body=231 status=ok
// SIG undefined FUN_14658a88a(void)

void FUN_14658a88a(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14b50a060;
  local_28[3] = &DAT_14cb98c58;
  local_28[4] = FUN_1459d0186;
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



// FUNCTION 14658a972 FUN_14658a972 body=40 status=ok
// SIG undefined FUN_14658a972(void)

undefined8 FUN_14658a972(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a99a FUN_14658a99a body=40 status=ok
// SIG undefined FUN_14658a99a(void)

undefined8 FUN_14658a99a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a9c2 FUN_14658a9c2 body=40 status=ok
// SIG undefined FUN_14658a9c2(void)

undefined8 FUN_14658a9c2(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658a9ea FUN_14658a9ea body=40 status=ok
// SIG undefined FUN_14658a9ea(void)

undefined8 FUN_14658a9ea(undefined8 param_1,int param_2)

{
  FUN_140fa437e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658aa12 FUN_14658aa12 body=69 status=ok
// SIG undefined FUN_14658aa12(void)

undefined8 * FUN_14658aa12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5093d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658aa58 FUN_14658aa58 body=40 status=ok
// SIG undefined FUN_14658aa58(void)

undefined8 FUN_14658aa58(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658aa80 FUN_14658aa80 body=93 status=ok
// SIG undefined FUN_14658aa80(void)

void FUN_14658aa80(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50a060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658aade FUN_14658aade body=29 status=ok
// SIG undefined FUN_14658aade(void)

undefined8 FUN_14658aade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658ab00 FUN_14658ab00 body=49 status=ok
// SIG undefined FUN_14658ab00(void)

longlong FUN_14658ab00(void)

{
  if (DAT_14cb98c80 == 0) {
    FUN_14073dd9a(&DAT_14cb98c80,&PTR_LAB_14b50a2f8);
  }
  return DAT_14cb98c80;
}



// FUNCTION 14658ab31 FUN_14658ab31 body=49 status=ok
// SIG undefined FUN_14658ab31(void)

longlong FUN_14658ab31(void)

{
  if (DAT_14cb98c90 == 0) {
    FUN_14086a14e(&DAT_14cb98c90,&PTR_FUN_14b50aac0);
  }
  return DAT_14cb98c90;
}



// FUNCTION 14658ab62 FUN_14658ab62 body=48 status=ok
// SIG undefined FUN_14658ab62(void)

void FUN_14658ab62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14b50cd00;
  return;
}



// FUNCTION 14658ab92 FUN_14658ab92 body=61 status=ok
// SIG undefined FUN_14658ab92(void)

void FUN_14658ab92(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b50ad80;
  *(undefined4 *)(puVar1 + 6) = 0x44fa0000;
  *(undefined1 *)((longlong)puVar1 + 0x34) = 1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 14658abd4 FUN_14658abd4 body=49 status=ok
// SIG undefined FUN_14658abd4(void)

longlong FUN_14658abd4(void)

{
  if (DAT_14cb98cb0 == 0) {
    FUN_14073dd9a(&DAT_14cb98cb0,&PTR_LAB_14b50ad38);
  }
  return DAT_14cb98cb0;
}



// FUNCTION 14658ac05 FUN_14658ac05 body=47 status=ok
// SIG undefined FUN_14658ac05(void)

longlong FUN_14658ac05(void)

{
  if (DAT_14cb98cc8 == 0) {
    FUN_14073dd9a(&DAT_14cb98cc8,&PTR_LAB_14b50b3a8);
  }
  return DAT_14cb98cc8;
}



// FUNCTION 14658ac39 FUN_14658ac39 body=47 status=ok
// SIG undefined FUN_14658ac39(void)

longlong FUN_14658ac39(void)

{
  if (DAT_14cb98ce0 == 0) {
    FUN_14073dd9a(&DAT_14cb98ce0,&PTR_LAB_14b50b748);
  }
  return DAT_14cb98ce0;
}



// FUNCTION 14658ac68 FUN_14658ac68 body=47 status=ok
// SIG undefined FUN_14658ac68(void)

longlong FUN_14658ac68(void)

{
  if (DAT_14cb98d00 == 0) {
    FUN_14073dd9a(&DAT_14cb98d00,&PTR_LAB_14b50c0d0);
  }
  return DAT_14cb98d00;
}



// FUNCTION 14658ac97 FUN_14658ac97 body=47 status=ok
// SIG undefined FUN_14658ac97(void)

longlong FUN_14658ac97(void)

{
  if (DAT_14cb98cf0 == 0) {
    FUN_14000fc22(&DAT_14cb98cf0,&PTR_FUN_14b50be68);
  }
  return DAT_14cb98cf0;
}



// FUNCTION 14658acc6 FUN_14658acc6 body=34 status=ok
// SIG undefined FUN_14658acc6(void)

void FUN_14658acc6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1411677a8();
  FUN_14069c8d6(uVar1,&PTR_s_GetEditOptionNames_14b50beb0,1);
  return;
}



// FUNCTION 14658acee FUN_14658acee body=231 status=ok
// SIG undefined FUN_14658acee(void)

void FUN_14658acee(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14b50d040;
  local_28[3] = &DAT_14cb98d4c;
  local_28[4] = FUN_1459d01b4;
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



// FUNCTION 14658add6 FUN_14658add6 body=297 status=ok
// SIG undefined FUN_14658add6(void)

void FUN_14658add6(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_144a8054c();
  local_78 = L"GbxWorldPainter";
  local_70 = 0xf;
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_58);
  local_38 = local_58;
  local_30 = local_50 + -1;
  if (local_50 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_48,&local_38,2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
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
  FUN_140056680(&local_38,L"/Plugin/GbxWorldPainter");
  FUN_141414c4a(&local_38,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14658af00 FUN_14658af00 body=67 status=ok
// SIG undefined FUN_14658af00(void)

undefined8 * FUN_14658af00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b50ad80;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658af44 FUN_14658af44 body=29 status=ok
// SIG undefined FUN_14658af44(void)

undefined8 FUN_14658af44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658af62 FUN_14658af62 body=93 status=ok
// SIG undefined FUN_14658af62(void)

void FUN_14658af62(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50d040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658afc0 FUN_14658afc0 body=29 status=ok
// SIG undefined FUN_14658afc0(void)

undefined8 FUN_14658afc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658afdd FUN_14658afdd body=47 status=ok
// SIG undefined FUN_14658afdd(void)

longlong FUN_14658afdd(void)

{
  if (DAT_14cb98d90 == 0) {
    FUN_1409ce572(&DAT_14cb98d90,&PTR_FUN_14b50d1c0);
  }
  return DAT_14cb98d90;
}



// FUNCTION 14658b00c FUN_14658b00c body=47 status=ok
// SIG undefined FUN_14658b00c(void)

longlong FUN_14658b00c(void)

{
  if (DAT_14cb98da8 == 0) {
    FUN_1409ce572(&DAT_14cb98da8,&PTR_FUN_14b50d230);
  }
  return DAT_14cb98da8;
}



// FUNCTION 14658b03b FUN_14658b03b body=47 status=ok
// SIG undefined FUN_14658b03b(void)

longlong FUN_14658b03b(void)

{
  if (DAT_14cb98dc0 == 0) {
    FUN_14086a14e(&DAT_14cb98dc0,&PTR_FUN_14b50d380);
  }
  return DAT_14cb98dc0;
}



// FUNCTION 14658b06a FUN_14658b06a body=48 status=ok
// SIG undefined FUN_14658b06a(void)

void FUN_14658b06a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b50e3a0;
  return;
}



// FUNCTION 14658b09a FUN_14658b09a body=53 status=ok
// SIG undefined FUN_14658b09a(void)

void FUN_14658b09a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b50d5b0;
  puVar1[5] = 0x40a0000040a00000;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 14658b0d4 FUN_14658b0d4 body=47 status=ok
// SIG undefined FUN_14658b0d4(void)

longlong FUN_14658b0d4(void)

{
  if (DAT_14cb98de0 == 0) {
    FUN_14073dd9a(&DAT_14cb98de0,&PTR_LAB_14b50d568);
  }
  return DAT_14cb98de0;
}



// FUNCTION 14658b104 FUN_14658b104 body=55 status=ok
// SIG undefined FUN_14658b104(void)

void FUN_14658b104(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98df8 == 0) {
    uVar1 = FUN_14596eb71();
    DAT_14cb98df8 = FUN_140002ddd(FUN_14658b13b,uVar1,L"ModuleInputSetup");
  }
  return;
}



// FUNCTION 14658b13b FUN_14658b13b body=47 status=ok
// SIG undefined FUN_14658b13b(void)

longlong FUN_14658b13b(void)

{
  if (DAT_14cb98df0 == 0) {
    FUN_14086a14e(&DAT_14cb98df0,&PTR_FUN_14b50d9d8);
  }
  return DAT_14cb98df0;
}



// FUNCTION 14658b16a FUN_14658b16a body=48 status=ok
// SIG undefined FUN_14658b16a(void)

void FUN_14658b16a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b50e500;
  return;
}



// FUNCTION 14658b19a FUN_14658b19a body=55 status=ok
// SIG undefined FUN_14658b19a(void)

void FUN_14658b19a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98e10 == 0) {
    uVar1 = FUN_14596eb71();
    DAT_14cb98e10 = FUN_140002ddd(FUN_14658b1d1,uVar1,L"ModuleInputContainer");
  }
  return;
}



// FUNCTION 14658b1d1 FUN_14658b1d1 body=47 status=ok
// SIG undefined FUN_14658b1d1(void)

longlong FUN_14658b1d1(void)

{
  if (DAT_14cb98e08 == 0) {
    FUN_14086a14e(&DAT_14cb98e08,&PTR_FUN_14b50dae8);
  }
  return DAT_14cb98e08;
}



// FUNCTION 14658b200 FUN_14658b200 body=48 status=ok
// SIG undefined FUN_14658b200(void)

void FUN_14658b200(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b50e670;
  return;
}



// FUNCTION 14658b230 FUN_14658b230 body=35 status=ok
// SIG undefined FUN_14658b230(void)

void FUN_14658b230(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b50dbc0;
  return;
}



// FUNCTION 14658b253 FUN_14658b253 body=47 status=ok
// SIG undefined FUN_14658b253(void)

longlong FUN_14658b253(void)

{
  if (DAT_14cb98e28 == 0) {
    FUN_14073dd9a(&DAT_14cb98e28,&PTR_LAB_14b50db78);
  }
  return DAT_14cb98e28;
}



// FUNCTION 14658b282 FUN_14658b282 body=47 status=ok
// SIG undefined FUN_14658b282(void)

longlong FUN_14658b282(void)

{
  if (DAT_14cb98e98 == 0) {
    FUN_1409ce572(&DAT_14cb98e98,&PTR_FUN_14b50e030);
  }
  return DAT_14cb98e98;
}



// FUNCTION 14658b2b2 FUN_14658b2b2 body=192 status=ok
// SIG undefined FUN_14658b2b2(void)

void FUN_14658b2b2(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14b50e840;
  puVar1[3] = &DAT_14cb98eb0;
  puVar1[4] = FUN_148acc33e;
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



// FUNCTION 14658b374 FUN_14658b374 body=40 status=ok
// SIG undefined FUN_14658b374(void)

undefined8 FUN_14658b374(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658b39c FUN_14658b39c body=40 status=ok
// SIG undefined FUN_14658b39c(void)

undefined8 FUN_14658b39c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658b3c4 FUN_14658b3c4 body=34 status=ok
// SIG undefined FUN_14658b3c4(void)

undefined8 FUN_14658b3c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14658b3e6 FUN_14658b3e6 body=34 status=ok
// SIG undefined FUN_14658b3e6(void)

undefined8 FUN_14658b3e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14658b408 FUN_14658b408 body=34 status=ok
// SIG undefined FUN_14658b408(void)

undefined8 FUN_14658b408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14658b42a FUN_14658b42a body=93 status=ok
// SIG undefined FUN_14658b42a(void)

void FUN_14658b42a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50e840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658b487 FUN_14658b487 body=35 status=ok
// SIG undefined FUN_14658b487(void)

void FUN_14658b487(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b50e990;
  return;
}



// FUNCTION 14658b4aa FUN_14658b4aa body=47 status=ok
// SIG undefined FUN_14658b4aa(void)

longlong FUN_14658b4aa(void)

{
  if (DAT_14cb98f00 == 0) {
    FUN_140f50038(&DAT_14cb98f00,&PTR_s__Script_ChaosVehiclesEngine_14b50ec90);
  }
  return DAT_14cb98f00;
}



// FUNCTION 14658b4d9 FUN_14658b4d9 body=47 status=ok
// SIG undefined FUN_14658b4d9(void)

longlong FUN_14658b4d9(void)

{
  if (DAT_14cb98ee8 == 0) {
    FUN_14073dd9a(&DAT_14cb98ee8,&PTR_LAB_14b50e948);
  }
  return DAT_14cb98ee8;
}



// FUNCTION 14658b508 FUN_14658b508 body=192 status=ok
// SIG undefined FUN_14658b508(void)

void FUN_14658b508(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14b50ed00;
  puVar1[3] = &DAT_14cb98f10;
  puVar1[4] = FUN_148acc528;
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



// FUNCTION 14658b5ca FUN_14658b5ca body=40 status=ok
// SIG undefined FUN_14658b5ca(void)

undefined8 FUN_14658b5ca(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14658b5f2 FUN_14658b5f2 body=93 status=ok
// SIG undefined FUN_14658b5f2(void)

void FUN_14658b5f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50ed00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14658b650 FUN_14658b650 body=55 status=ok
// SIG undefined FUN_14658b650(void)

void FUN_14658b650(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98f30 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb98f30 = FUN_140002ddd(FUN_14658b687,uVar1,L"AnimNode_StageCoachWheelController");
  }
  return;
}



// FUNCTION 14658b687 FUN_14658b687 body=47 status=ok
// SIG undefined FUN_14658b687(void)

longlong FUN_14658b687(void)

{
  if (DAT_14cb98f28 == 0) {
    FUN_14086a14e(&DAT_14cb98f28,&PTR_FUN_14b50ef78);
  }
  return DAT_14cb98f28;
}



// FUNCTION 14658b6b6 FUN_14658b6b6 body=43 status=ok
// SIG undefined FUN_14658b6b6(void)

void FUN_14658b6b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000100;
  *puVar1 = &PTR_FUN_14b5165c0;
  return;
}



// FUNCTION 14658b6e2 FUN_14658b6e2 body=55 status=ok
// SIG undefined FUN_14658b6e2(void)

void FUN_14658b6e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98f48 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb98f48 = FUN_140002ddd(FUN_14658b719,uVar1,L"AnimNode_WheelController");
  }
  return;
}



// FUNCTION 14658b719 FUN_14658b719 body=47 status=ok
// SIG undefined FUN_14658b719(void)

longlong FUN_14658b719(void)

{
  if (DAT_14cb98f40 == 0) {
    FUN_14086a14e(&DAT_14cb98f40,&PTR_FUN_14b50f050);
  }
  return DAT_14cb98f40;
}



// FUNCTION 14658b748 FUN_14658b748 body=43 status=ok
// SIG undefined FUN_14658b748(void)

void FUN_14658b748(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000f0;
  *puVar1 = &PTR_FUN_14b516850;
  return;
}



// FUNCTION 14658b774 FUN_14658b774 body=55 status=ok
// SIG undefined FUN_14658b774(void)

void FUN_14658b774(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98f60 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb98f60 = FUN_140002ddd(FUN_14658b7ab,uVar1,L"VehicleInputs");
  }
  return;
}



// FUNCTION 14658b7ab FUN_14658b7ab body=47 status=ok
// SIG undefined FUN_14658b7ab(void)

longlong FUN_14658b7ab(void)

{
  if (DAT_14cb98f58 == 0) {
    FUN_14086a14e(&DAT_14cb98f58,&PTR_FUN_14b50f318);
  }
  return DAT_14cb98f58;
}


